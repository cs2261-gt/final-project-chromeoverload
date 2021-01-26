
//{{BLOCK(winscreen)

//======================================================================
//
//	winscreen, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 100 tiles (t|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 3200 + 2048 = 5760
//
//	Time-stamp: 2020-04-22, 23:43:36
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_WINSCREEN_H
#define GRIT_WINSCREEN_H

#define winscreenTilesLen 3200
extern const unsigned short winscreenTiles[1600];

#define winscreenMapLen 2048
extern const unsigned short winscreenMap[1024];

#define winscreenPalLen 512
extern const unsigned short winscreenPal[256];

#endif // GRIT_WINSCREEN_H

//}}BLOCK(winscreen)
