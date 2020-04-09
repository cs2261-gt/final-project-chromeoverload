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
    DMANow(3, backgroundPal, PALETTE, 256);

    REG_BG0CNT = BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL; //grid thing
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL; //other bkgs

    DMANow(3, backgroundTiles, &CHARBLOCK[0], backgroundTilesLen / 2);
    DMANow(3, backgroundMap, &SCREENBLOCK[31], backgroundMapLen / 2);

    DMANow(3, startscreenTiles, &CHARBLOCK[1], startscreenTilesLen / 2);
    DMANow(3, startscreenMap, &SCREENBLOCK[30], startscreenMapLen / 2);

    

    //hOff = 0;
    buttons = BUTTONS;
}

// Sets up the start state
void goToStart() {
    hideSprites();
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
    REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
    state = GAME;
}

//gamestate stepper
void game() {
    updateGame();
    drawGame();
    REG_BG0HOFF = hOff;
    if (BUTTON_PRESSED(BUTTON_START))
        goToPause();
    if (gmState == 1) 
        goToWin();
    if (gmState == -1) 
        goToLose();
}

// Sets up the pause state
void goToPause() {
    hideSprites();
    REG_DISPCTL = MODE0 | BG1_ENABLE | SPRITE_ENABLE;
    REG_BG1CNT = BG_CHARBLOCK(1) | BG_SCREENBLOCK(30) | BG_SIZE_SMALL;
    DMANow(3, pausescreenTiles, &CHARBLOCK[1], pausescreenTilesLen / 2);
    DMANow(3, pausescreenMap, &SCREENBLOCK[30], pausescreenMapLen / 2);
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, (128 * 4));
    state = PAUSE;
}

//pause stepper
void pause() {
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_A))
        goToGame();
    else if (BUTTON_PRESSED(BUTTON_START))
        goToStart();
}

// Sets up the win state
void goToWin() {
    hideSprites();
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