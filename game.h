#include "myLib.h"

extern OBJ_ATTR shadowOAM[128];
extern int hOff;
extern int vOff;

//Tank Struct
typedef struct {
	int row;
	int col;
	int cdel;
	int rdel;
	int height;
	int width;
	int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
} TANK;

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
#define NUMBEACONS 5
#define BKGSIZE 256

//prots
void initGame();
void updateGame();
void drawGame();

//Target Struct
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
    int visible;
} TARGET;