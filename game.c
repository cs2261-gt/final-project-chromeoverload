#include <stdio.h>
#include <stdlib.h>

#include "myLib.h"
#include "background.h"
#include "game.h"
#include "spritesheet.h"

ANISPRITE tank;
BEACON beacons[NUMBEACONS];
TARGET target;
TARGET traps[NUMTRAPS];

enum {UP, RIGHT, DOWN, LEFT};
enum {NUL, SE, SW, NW, NE, NN, EE, SS, WW};
int gmState;
int loseCount;
int canMove;


void initGame() {
    hOff = 0;
    vOff = 0;
    gmState = 0;
    loseCount = 0;
    canMove = 1;
    
    //init TANK
    tank.width = 32;
    tank.height = 32;
    tank.worldRow = SCREENWIDTH/2 - tank.width/2;
    tank.worldCol = SCREENHEIGHT/2 - tank.height/2;
    tank.screenRow = tank.worldRow;
    tank.screenCol = tank.worldCol;
    tank.rdel = 1;
    tank.cdel = 1;
    tank.aniState = UP;
    tank.curFrame = 0;
    tank.numFrames = 7;

    //init BEACONS
    for(int i = 0; i < NUMBEACONS; i ++) {
        beacons[i].width = 16;
        beacons[i].height = 16;
        beacons[i].aniState = NUL;
        beacons[i].active = 0;
    }

    //init TARGET
    target.width = 16;
    target.height = 16;
    target.row = (rand() % (BKGSIZE / 16)) * 16; //rand() % (BKGSIZE - (target.height))
    target.col = (rand() % (BKGSIZE / 16)) * 16; //rand() % (BKGSIZE - (target.width))
    target.visible = 1; //FOR TESTING

    //init TRAPS
    for(int i = 0; i < NUMTRAPS; i++) {
        traps[i].width = 16;
        traps[i].height = 16;
        traps[i].visible = 1; //FOR TESTING
        traps[i].active = 0;
    }

    //init GENERAL
    DMANow(3, spritesheetPal, SPRITEPALETTE, 256);
	DMANow(3, spritesheetTiles, &CHARBLOCK[4], spritesheetTilesLen / 2);
}

void updateGame() {
    //update TANK
    if(canMove == 1) {
        if(BUTTON_HELD(BUTTON_UP)) {
            tank.aniState = UP;
            if(tank.worldRow > 0) {
                tank.worldRow -= tank.rdel;
                if (vOff > 0 && tank.screenRow <= SCREENHEIGHT / 2) {
                    vOff--;
                }
            }
        }
        if(BUTTON_HELD(BUTTON_DOWN)) {
            tank.aniState = DOWN;
            if ((tank.worldRow + tank.height) < BKGSIZE) {
                // Update tank's world position if the above is true
                tank.worldRow += tank.rdel;
                if ((vOff + SCREENHEIGHT) < BKGSIZE && tank.screenRow >= (SCREENHEIGHT / 2)) {
                    // Update background offset variable if the above is true
                    vOff++;
                }
            }
        }
        if(BUTTON_HELD(BUTTON_LEFT)) {
            tank.aniState = LEFT;
            if (tank.worldCol > 0) {
                // Update tank's world position if the above is true
                tank.worldCol -= tank.cdel;
                if (hOff > 0 && tank.screenCol <= SCREENWIDTH / 2) {
                    // Update background offset variable if the above is true
                    hOff--;
                }
            }
        }
        if(BUTTON_HELD(BUTTON_RIGHT)) {
            tank.aniState = RIGHT;
            if ((tank.worldCol + tank.width) < BKGSIZE) {
                // Update tank's world position if the above is true
                tank.worldCol += tank.cdel;
                if (hOff + SCREENWIDTH < BKGSIZE && tank.screenCol >= SCREENWIDTH / 2) {
                    // Update background offset variable if the above is true
                    hOff++;
                }
            }
        }
    }

    //animation stuff
    if(tank.aniCounter % 10 == 0) {
        tank.curFrame = (tank.curFrame + 1) % tank.numFrames;

        //TIME COUNTER FOR 120SECS HERE FOR EASE OF ACCESS
        loseCount++;

        //dropping new traps and unfreeze player
        if(loseCount % 40 == 0) {
            int i = 0;
            while (i < NUMTRAPS && traps[i].active == 1) {
                i++;
            }
            if(i < NUMTRAPS) {
                traps[i].active = 1;
                traps[i].row = (rand() % (BKGSIZE / 16)) * 16; //rand() % (BKGSIZE - (target.height))
                traps[i].col = (rand() % (BKGSIZE / 16)) * 16;
            }
            canMove = 1;
        }

        if(loseCount > 720) {
            gmState = -1;
        }
    }
    tank.aniCounter++;
    tank.screenRow = tank.worldRow - vOff;
    tank.screenCol = tank.worldCol - hOff;

    //update TRAPS
    for(int i = 0; i < NUMTRAPS; i++) {
        if(traps[i].active == 1) { //freeze player
            if(collision(traps[i].col, traps[i].row, traps[i].width, traps[i].height, tank.worldCol, tank.worldRow, tank.width, tank.height)) {
                traps[i].active = 0;
                canMove = 0;
            }

            traps[i].screenRow = traps[i].row - vOff;
            traps[i].screenCol = traps[i].col - hOff;
        }
    }

    //update BEACONS
    for(int j = 0; j < NUMBEACONS; j++) {
        if(BUTTON_PRESSED(BUTTON_B) && collision(beacons[j].col, beacons[j].row, beacons[j].width, beacons[j].height, tank.worldCol, tank.worldRow, tank.width, tank.height)) {
            beacons[j].active = 0;
        }
        beacons[j].screenRow = beacons[j].row - vOff;
        beacons[j].screenCol = beacons[j].col - hOff;
    }

    //drop new beacons
    if(BUTTON_PRESSED(BUTTON_A)) {
        int i = 0;
        while (i < NUMBEACONS && beacons[i].active == 1) {
            i++;
        }
        if(i < NUMBEACONS) {
            beacons[i].active = 1;
            beacons[i].row = ((tank.worldRow + 16)/16) * 16;
            beacons[i].col = ((tank.worldCol + 16)/16) * 16;

            //LOCATOR CASES
            if(beacons[i].row == target.row && beacons[i].col == target.col) {
                beacons[i].aniState = NUL;
            }
            if(beacons[i].row < target.row && beacons[i].col < target.col) {
                beacons[i].aniState = SE;
            }
            if(beacons[i].row < target.row && beacons[i].col > target.col) {
                beacons[i].aniState = SW;
            }
            if(beacons[i].row > target.row && beacons[i].col > target.col) {
                beacons[i].aniState = NW;
            }
            if(beacons[i].row > target.row && beacons[i].col < target.col) {
                beacons[i].aniState = NE;
            }
            if(beacons[i].row > target.row && beacons[i].col == target.col) {
                beacons[i].aniState = NN;
            }
            if(beacons[i].row < target.row && beacons[i].col == target.col) {
                beacons[i].aniState = SS;
            }
            if(beacons[i].row == target.row && beacons[i].col < target.col) {
                beacons[i].aniState = EE;
            }
            if(beacons[i].row == target.row && beacons[i].col > target.col) {
                beacons[i].aniState = WW;
            }
        }
    }


    //update TARGET
    if (collision(target.col, target.row, target.width, target.height, tank.worldCol, tank.worldRow, tank.width, tank.height)) {
        gmState = 1;
    }
    target.screenRow = target.row - vOff;
    target.screenCol = target.col - hOff;
}

void drawGame() {
    //draw TANK
    shadowOAM[0].attr0 = (tank.screenRow) | ATTR0_SQUARE;
    shadowOAM[0].attr1 = (tank.screenCol) | ATTR1_MEDIUM;
    shadowOAM[0].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(tank.aniState * 4, tank.curFrame * 4    );

    //draw BEACONS
    for(int i = 0; i < NUMBEACONS; i++) {
        if(beacons[i].active == 1) {
            shadowOAM[i+2].attr0 = (beacons[i].screenRow) | ATTR0_SQUARE | ATTR0_REGULAR;
            shadowOAM[i+2].attr1 = (beacons[i].screenCol) | ATTR1_SMALL;
            shadowOAM[i+2].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(16, beacons[i].aniState * 2);
        } else {
            shadowOAM[i+2].attr0 = (beacons[i].screenRow) | ATTR0_SQUARE | ATTR0_HIDE;
        }
        
    }

    //draw TARGET
    if(target.visible == 1) {
        shadowOAM[1].attr0 = (target.screenRow) | ATTR0_SQUARE;
        shadowOAM[1].attr1 = (target.screenCol) | ATTR1_SMALL;
        shadowOAM[1].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(18, 0);
    }

    //draw TRAPS
    for(int i = 0; i < NUMTRAPS; i++) {
        if(traps[i].active == 1 && traps[i].visible == 1) {
            shadowOAM[i+NUMBEACONS+2].attr0 = (traps[i].screenRow) | ATTR0_SQUARE;
            shadowOAM[i+NUMBEACONS+2].attr1 = (traps[i].screenCol) | ATTR1_SMALL;
            shadowOAM[i+NUMBEACONS+2].attr2 = ATTR2_PALROW(0) | ATTR2_TILEID(20, 0);
        } else {
            shadowOAM[i+NUMBEACONS+2].attr0 = ATTR0_HIDE;
        }
    }

    //GENERAL
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128*4);

    REG_BG0HOFF = hOff;
    REG_BG0VOFF = vOff;
}