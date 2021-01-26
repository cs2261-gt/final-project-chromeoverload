
//{{BLOCK(pausescreen)

//======================================================================
//
//	pausescreen, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 83 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 2656 + 2048 = 5216
//
//	Time-stamp: 2020-04-08, 23:01:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PAUSESCREEN_H
#define GRIT_PAUSESCREEN_H

#define pausescreenTilesLen 2656
extern const unsigned short pausescreenTiles[1328];

#define pausescreenMapLen 2048
extern const unsigned short pausescreenMap[1024];

#define pausescreenPalLen 512
extern const unsigned short pausescreenPal[256];

#endif // GRIT_PAUSESCREEN_H

//}}BLOCK(pausescreen)
