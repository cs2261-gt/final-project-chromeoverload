
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

const unsigned short medgridTiles[80] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1110,0x1111,0x1110,0x1111,0x1110,0x1111,
	0x1110,0x1111,0x1110,0x1111,0x1110,0x1111,0x1110,0x1111,
	0x0000,0x0000,0x1111,0x0111,0x1111,0x0111,0x1111,0x0111,
	0x1111,0x0111,0x1111,0x0111,0x1111,0x0111,0x1111,0x0111,
	0x1110,0x1111,0x1110,0x1111,0x1110,0x1111,0x1110,0x1111,
	0x1110,0x1111,0x1110,0x1111,0x1110,0x1111,0x0000,0x0000,

	0x1111,0x0111,0x1111,0x0111,0x1111,0x0111,0x1111,0x0111,
	0x1111,0x0111,0x1111,0x0111,0x1111,0x0111,0x0000,0x0000,
};

const unsigned short medgridMap[4096] __attribute__((aligned(4)))=
{
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,

	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,0x0001,0x0002,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
	0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,0x0003,0x0004,
};

const unsigned short medgridPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x6318,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(medgrid)
