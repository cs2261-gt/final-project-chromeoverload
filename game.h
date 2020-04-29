#include "myLib.h"

extern OBJ_ATTR shadowOAM[128];
extern int hOff;
extern int vOff;


//Beacon Struct
typedef struct {
	int row;
	int col;
    int screenRow;
    int screenCol;
	int cdel;
	int rdel;
	int height;
	int width;
	int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
    int active;
} BEACON;

//consts
#define NUMTRAPS 30
#define NUMBEACONS 5
#define BKGSIZE 256

//prots
void initGame();
void updateGame();
void drawGame();

//Target/Trap Struct
typedef struct {
	int row;
	int col;
    int screenRow;
    int screenCol;
	int cdel;
	int rdel;
	int height;
	int width;
	int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
	int active;
} TARGET;