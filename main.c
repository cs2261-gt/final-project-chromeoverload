/* CURRENT DEVELOPMENT STATUS (4.15)
Implemented features:
- Tank is controllable with the arrow-keys and is completely animated
- Beacons are placeable (A) and pick-up-able (B), and their animation is binded to the location of the target
- Win state occurs upon colliding with target, lose state triggers after 120seconds otherwise
- Targets, traps, and beacons now naturally spawn on specific grid tiles
- Over time, 'traps' (normally invisible but, like target, rendered visible for grading/testing) randomly spawn that temporarily halt the player
- Sound for game music and lose state
- New art, cool 
effect for pause screen because I couldn't figure out 1024x1024 in time :( maybe I will by the 29th lol

Forthcoming features:
- sfx for the win state, maybe assorted SFX, just for grins tbh
- Cheat to make the target visible/invisible; setting visibility by default to negative for final submission (!NOTETOSELF)
- Larger background? (I've made several sizes in my pixel art editor file (.gm81), depends what I can figure out how to implement, sticking with the small version for now for testing purposes)
- New non-placeholder art for splash screen, pause, etc.

Known bugs:
- my current rounding system for matching beacons to grid locations prevents the tank from placing beacons on the far-left row or top column. Unclear if there's a way to fix this without causing bigger problems yet.
- as mentioned above, still many problems with large bckground sizes. flickering, object location swapping, and now some really weird stuff (giant black squares???). Will be trying again for final submission...
- still some beacon flickering? tiles stay put now, and no more weirdness in the corners, but there's still some issue with placement or modulation somewhere I suspect....
*/

#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"
#include "background.h"
#include "startscreen.h"
#include "pausescreen.h"
#include "winscreen.h"
#include "losescreen.h"
#include "instructscreen.h"
#include "game.h"
#include "sound.h"
#include "gameSong.h"
#include "loseSound.h"
#include "bottompause.h"
#include "toppause.h"

// Prototypes
void initialize();
void goToStart();
void start();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToLose();
void lose();
void goToInstruct();
void instruct();

// Button Variables
unsigned short buttons;
unsigned short oldButtons;

//gamevars
int hOff;
int vOff;
int pOff;
extern int gmState;

//enums
enum {START, GAME, PAUSE, WIN, LOSE, INSTRUCT};
int state;
int seed;

int main() {

    initialize();

    while(1) {
        oldButtons = buttons;
        buttons = BUTTONS;

         switch(state) {
            case START:
                start();
                break;
            case GAME:
                game();
                break;
            case PAUSE:
                pause();
                break;
            case WIN:
                win();
                break;
            case LOSE:
                lose();
                break;
            case INSTRUCT:
                instruct();
                break;
        }
	}
}

//init function
void initialize() {
    REG_DISPCTL = MODE0 | BG1_ENABLE | SPRITE_ENABLE;
    //standard palette
    DMANow(3, startscreenPal, PALETTE, 256);

    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL; //grid thing
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL; //other bkgs

    DMANow(3, backgroundTiles, &CHARBLOCK[0], backgroundTilesLen / 2);
    DMANow(3, backgroundMap, &SCREENBLOCK[31], backgroundMapLen / 2);

    DMANow(3, startscreenTiles, &CHARBLOCK[1], startscreenTilesLen / 2);
    DMANow(3, startscreenMap, &SCREENBLOCK[30], startscreenMapLen / 2);

    setupSounds();
    setupInterrupts();

    //hOff = 0;
    buttons = BUTTONS;
}

// Sets up the start state
void goToStart() {
    hideSprites();
    DMANow(3, startscreenPal, PALETTE, 256);
    REG_DISPCTL = MODE0 | BG1_ENABLE | SPRITE_ENABLE;
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL;
    
    DMANow(3, startscreenTiles, &CHARBLOCK[1], startscreenTilesLen / 2);
    DMANow(3, startscreenMap, &SCREENBLOCK[30], startscreenMapLen / 2);
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    state = START;
    seed = 0;
}

//start state stepper
void start() {
    hideSprites();
    seed++;
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        // Seed the random generator
        stopSound();
		playSoundA(gameSong,GAMESONGLEN,1);
        
        srand(seed);
        initGame();
        goToGame();
    }
    if (BUTTON_PRESSED(BUTTON_A)) {
        goToInstruct();
    }
}

// Sets up the game state
void goToGame() {
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    DMANow(3, backgroundPal, PALETTE, 256);
    REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
    state = GAME;
}

//gamestate stepper
void game() {
    updateGame();
    drawGame();
    REG_BG0HOFF = hOff;
    if (BUTTON_PRESSED(BUTTON_START)) {
        pauseSound();
        goToPause();
    }
        
    if (gmState == 1) 
        goToWin();
    if (gmState == -1) {
        stopSound();
        playSoundB(loseSound, LOSESOUNDLEN, 0);

        goToLose();
    }
}

// Sets up the pause state
void goToPause() {
    hideSprites();
    DMANow(3, bottompausePal, PALETTE, 256);
    REG_DISPCTL = MODE0 | BG1_ENABLE | BG2_ENABLE | SPRITE_ENABLE;
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL;
    REG_BG2CNT = BG_CHARBLOCK(2) | BG_SCREENBLOCK(29) | BG_SIZE_SMALL;
    DMANow(3, bottompauseTiles, &CHARBLOCK[1], bottompauseTilesLen / 2);
    DMANow(3, bottompauseMap, &SCREENBLOCK[30], bottompauseMapLen / 2);
    DMANow(3, toppauseTiles, &CHARBLOCK[2], toppauseTilesLen / 2);
    DMANow(3, toppauseMap, &SCREENBLOCK[29], toppauseMapLen / 2);
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    state = PAUSE;
}

//pause stepper
void pause() {
    waitForVBlank();

    //pause bg movement
    REG_BG1HOFF = (pOff);
    REG_BG2HOFF = (120 - pOff);
    pOff++;

    // State transitions
    if (BUTTON_PRESSED(BUTTON_A)) {
        unpauseSound();
        REG_BG1HOFF = 0;
        goToGame();
    }
    else if (BUTTON_PRESSED(BUTTON_START)) {
        REG_BG1HOFF = 0;
        goToStart();
    }
        
}

// Sets up the win state
void goToWin() {
    hideSprites();
    DMANow(3, bottompausePal, PALETTE, 256);
    REG_DISPCTL = MODE0 | BG1_ENABLE | SPRITE_ENABLE;
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL;
    DMANow(3, winscreenTiles, &CHARBLOCK[1], winscreenTilesLen / 2);
    DMANow(3, winscreenMap, &SCREENBLOCK[30], winscreenMapLen / 2);
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    state = WIN;
}

//win stepper
void win() {
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToStart();
}

// Sets up the lose state
void goToLose() {
    hideSprites();
    DMANow(3, bottompausePal, PALETTE, 256);
    REG_DISPCTL = MODE0 | BG1_ENABLE | SPRITE_ENABLE;
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL;
    DMANow(3, losescreenTiles, &CHARBLOCK[1], losescreenTilesLen / 2);
    DMANow(3, losescreenMap, &SCREENBLOCK[30], losescreenMapLen / 2);
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    state = LOSE;
}

//lose state stepper
void lose() {
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToStart(); 
}

// Sets up instructions screen
void goToInstruct() {
    hideSprites();
    DMANow(3, bottompausePal, PALETTE, 256);
    REG_DISPCTL = MODE0 | BG1_ENABLE | SPRITE_ENABLE;
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL;
    DMANow(3, instructscreenTiles, &CHARBLOCK[1], instructscreenTilesLen / 2);
    DMANow(3, instructscreenMap, &SCREENBLOCK[30], instructscreenMapLen / 2);
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    state = INSTRUCT;
}

//instruct state stepper
void instruct() {
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToStart(); 
}