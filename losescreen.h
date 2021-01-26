
//{{BLOCK(losescreen)

//======================================================================
//
//	losescreen, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 133 tiles (t|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 4256 + 2048 = 6816
//
//	Time-stamp: 2020-04-22, 23:44:13
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LOSESCREEN_H
#define GRIT_LOSESCREEN_H

#define losescreenTilesLen 4256
extern const unsigned short losescreenTiles[2128];

#define losescreenMapLen 2048
extern const unsigned short losescreenMap[1024];

#define losescreenPalLen 512
extern const unsigned short losescreenPal[256];

#endif // GRIT_LOSESCREEN_H

//}}BLOCK(losescreen)
