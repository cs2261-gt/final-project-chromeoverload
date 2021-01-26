
//{{BLOCK(toppause)

//======================================================================
//
//	toppause, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 141 tiles (t|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 512 + 4512 + 2048 = 7072
//
//	Time-stamp: 2020-04-22, 23:09:40
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TOPPAUSE_H
#define GRIT_TOPPAUSE_H

#define toppauseTilesLen 4512
extern const unsigned short toppauseTiles[2256];

#define toppauseMapLen 2048
extern const unsigned short toppauseMap[1024];

#define toppausePalLen 512
extern const unsigned short toppausePal[256];

#endif // GRIT_TOPPAUSE_H

//}}BLOCK(toppause)
