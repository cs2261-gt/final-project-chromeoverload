
//{{BLOCK(medgrid)

//======================================================================
//
//	medgrid, 512x512@4, 
//	+ palette 256 entries, not compressed
//	+ 5 tiles (t|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x64 
//	Total size: 512 + 160 + 8192 = 8864
//
//	Time-stamp: 2020-04-29, 05:31:09
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_MEDGRID_H
#define GRIT_MEDGRID_H

#define medgridTilesLen 160
extern const unsigned short medgridTiles[80];

#define medgridMapLen 8192
extern const unsigned short medgridMap[4096];

#define medgridPalLen 512
extern const unsigned short medgridPal[256];

#endif // GRIT_MEDGRID_H

//}}BLOCK(medgrid)
