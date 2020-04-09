
//{{BLOCK(instructscreen)

//======================================================================
//
//	instructscreen, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 266 tiles (t|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 8512 + 2048 = 11072
//
//	Time-stamp: 2020-04-09, 00:23:51
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_INSTRUCTSCREEN_H
#define GRIT_INSTRUCTSCREEN_H

#define instructscreenTilesLen 8512
extern const unsigned short instructscreenTiles[4256];

#define instructscreenMapLen 2048
extern const unsigned short instructscreenMap[1024];

#define instructscreenPalLen 512
extern const unsigned short instructscreenPal[256];

#endif // GRIT_INSTRUCTSCREEN_H

//}}BLOCK(instructscreen)
