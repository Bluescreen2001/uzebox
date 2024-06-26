
const bgAnimIndex bgAnimDir[] PROGMEM = {
	{1,0},{12,1},{13,0},{17,0},{17,1},	// Level 1
	{1,0},{8,2},{12,0},{13,0},{16,2},{28,0},{29,2},{44,2}, // Level 2
	{0,0},{3,0},{4,0},{15,0},{16,0},{22,0},{23,0}, // Level 3
	{24,0},{25,0},{28,0},	// Level 4
	{0,0},{1,0}	// Title
};

//const char* bgMaps[] PROGMEM = {
PGM_P const bgMaps[] PROGMEM = {
	mapBarrel,				// 0
	mapSledgeHammer,		// 1
	mapRamp6,				// 2
	mapJigsaw0,				// 3
	mapLadderAqua2,			// 4
	mapRamp1,				// 5
	mapJigsaw5,				// 6
	mapOil,					// 7
	mapJigsaw1,				// 8
	mapRamp0,				// 9
	mapJigsaw2,				// 10
	mapJigsaw3,				// 11
	mapRamp5,				// 12
	mapJigsaw4,				// 13
	mapRamp4,				// 14
	mapRamp2,				// 15
	mapJigsaw6,				// 16
	mapJigsaw8,				// 17
	mapRamp3,				// 18
	mapJigsaw7,				// 19
	mapJigsaw9,				// 20
	mapPulleyTop,			// 21
	mapUmbrella,			// 22
	mapPulleyBtm,			// 23
	mapLadderWhite2,		// 24
	mapLadderYellow2,		// 25
	mapRivet,				// 26
	mapDonkeyTitle,			// 27
	mapKongTitle,			// 28
	mapRank,				// 29
	mapScore,				// 30
	mapName,				// 31
	map1st,					// 32
	map2nd,					// 33
	map3rd,					// 34
	map4th,					// 35
};

const bgInner bgiTbl[] PROGMEM = {
	{BGP, 0, {8, 24, 32, 64}},
	{BGM|BGA, 0, {24, 56, 32, 64}},
	{0, MUT_KONG, {24, 56, 32, 64}},
	{0, TILE_LADDER, {56, 64, 16, 64}},
	{0, TILE_BEAM_RED, {8, 72, 64, 72}},
	{BGM|BGP, 1, {24, 32, 72, 88}},
	{1, MUT_SLEDGE, {24, 32, 72, 88}},
	{BGP, 2, {24, 72, 96, 112}},
	{BGP, 3, {32, 48, 96, 112}},
	{BGM|BGP, 4, {32, 48, 112, 120}},
	{2, MUT_LADDER, {36, 44, 89, 120}},
	{0, TILE_BEAM_RED, {8, 72, 120, 128}},
	{BGP, 4, {56, 72, 128, 136}},
	{BGM|BGP, 4, {56, 72, 144, 152}},
	{3, MUT_BROKEN_LADDER, {60, 68, 128, 152}},
	{0, TILE_BEAM_RED, {24, 72, 152, 160}},
	{BGM|BGP, 4, {40, 56, 160, 168}},
	{4, MUT_LADDER, {44, 52, 144, 174}},
	{BGP, 5, {8, 72, 168, 184}},
	{BGAO, 1, {24, 40, 168, 184}},
	{BGP, 6, {40, 56, 168, 184}},
	{BGAO, 4, {24, 40, 184, 192}},
	{BGM|BGP, 7, {24, 40, 192, 208}},
	{5, MUT_FIRE, {24, 40, 192, 208}},
	{0, TILE_BEAM_RED, {8, 72, 208, 216}},

	{0, TILE_LADDER, {72, 80, 16, 64}},
	{BGA, 3, {80, 96, 24, 40}},
	{BGA, 20, {96, 120, 24, 32}},
	{0, TILE_BEAM_RED, {80, 104, 40, 48}},
	{0, TILE_BEAM_RED, {72, 104, 64, 72}},
	{0, TILE_BEAM_RED, {72, 104, 96, 104}},
	{BGM|BGP, 4, {72, 88, 104, 120}},
	{6, MUT_LADDER, {76, 84, 88, 121}},
	{BGP, 8, {72, 88, 120, 136}},
	{BGP, 2, {88, 104, 120, 136}},
	{BGP, 9, {72, 88, 144, 160}},
	{BGP, 10, {88, 104, 144, 160}},
	{BGM|BGP, 4, {88, 104, 160, 168}},
	{7, MUT_LADDER, {92, 100, 143, 175}},
	{BGP, 10, {72, 88, 168, 184}},
	{BGP, 11, {88, 104, 168, 184}},
	{BGP, 4, {72, 88, 184, 192}},
	{BGM|BGP, 4, {72, 88, 200, 208}},
	{8, MUT_BROKEN_LADDER, {76, 84, 183, 208}},
	{0, TILE_BEAM_RED, {72, 104, 208, 216}},

	{0, TILE_BEAM_RED, {104, 136, 40, 48}},
	{BGM|BGP, 4, {120, 136, 48, 64}},
	{9, MUT_LADDER, {124, 132, 32, 64}},
	{0, TILE_BEAM_RED, {104, 136, 64, 72}},
	{BGM|BGP, 4, {104, 120, 72, 80}},
	{10, MUT_BROKEN_LADDER, {108, 116, 72, 95}},
	{BGP, 11, {104, 120, 88, 104}},
	{BGP, 9, {120, 136, 88, 104}},
	{BGP, 12, {104, 120, 120, 136}},
	{BGP, 13, {120, 136, 120, 136}},
	{BGM|BGP, 4, {120, 136, 136, 144}},
	{11, MUT_LADDER, {124, 132, 114, 150}},
	{BGP, 5, {104, 120, 144, 160}},
	{BGP, 6, {120, 136, 144, 160}},
	{0, TILE_BEAM_RED, {104, 136, 176, 184}},
	{0, TILE_BEAM_RED, {104, 136, 208, 216}},

	{0, TILE_BEAM_RED, {136, 168, 64, 72}},
	{BGP, 5, {136, 168, 88, 104}},
	{BGP, 14, {136, 168, 120, 136}},
	{BGP, 15, {136, 168, 144, 160}},
	{BGP, 2, {136, 168, 176, 192}},
	{BGP, 9, {136, 168, 200, 216}},

	{BGP, 2, {168, 216, 64, 80}},
	{BGP, 3, {192, 208, 64, 80}},
	{BGM|BGP, 4, {192, 208, 80, 88}},
	{12, MUT_LADDER, {196, 204, 57, 93}},
	{BGP, 15, {168, 232, 88, 104}},
	{BGP, 16, {176, 192, 88, 104}},
	{BGP, 17, {192, 208, 88, 104}},
	{BGM|BGP, 4, {176, 192, 112, 120}},
	{13, MUT_BROKEN_LADDER, {180, 188, 101, 124}},
	{BGP, 18, {168, 216, 120, 136}},
	{BGP, 19, {176, 192, 120, 136}},
	{BGP, 20, {192, 208, 120, 136}},
	{BGM|BGP, 4, {192, 208, 136, 144}},
	{14, MUT_LADDER, {196, 204, 116, 148}},
	{BGP, 18, {168, 232, 144, 160}},
	{BGP, 19, {192, 208, 144, 160}},
	{BGM|BGP, 1, {200, 208, 160, 176}},
	{15, MUT_SLEDGE, {200, 208, 160, 176}},
	{BGP, 12, {168, 216, 176, 192}},
	{BGP, 13, {184, 200, 176, 192}},
	{BGM|BGP, 4, {184, 200, 192, 200}},
	{16, MUT_LADDER, {188, 196, 170, 206}},
	{BGP, 5, {168, 232, 200, 216}},
	{BGP, 6, {184, 200, 200, 216}},
};

const bgInner bgiTbl1[] PROGMEM = {
	{0, TILE_LADDER_WHITE, {64, 72, 16, 56}},
	{BGM|BGA, 0, {32, 56, 24, 56}},
	{0, MUT_KONG, {32, 56, 24, 56}},
	{0, TILE_BEAM_ORANGE, {16, 72, 56, 64}},
	{BGM|BGP, 24, {16, 32, 64, 96}},
	{1, MUT_LADDER_RETRACT, {20, 28, 48, 96}},
	{BGM|BGP, 1, {48, 56, 64, 80}},
	{2, MUT_SLEDGE, {48, 56, 64, 80}},
	{BGM, TILE_CONVEYOR_BELT, {8, 72, 96, 104}},
	{3, MUT_CONVEYOR_BELT, {8, 72, 96, 104}},
	{BGM|BGP, 24, {32, 48, 104, 136}},
	{4, MUT_LADDER, {36, 44, 88, 136}},
	{0, TILE_BEAM_ORANGE, {16, 56, 136, 144}},
	{BGM, TILE_CONVEYOR_BELT, {16, 72, 176, 184}},
	{5, MUT_CONVEYOR_BELT, {8, 72, 176, 184}},
	{BGA, 25, {8, 16, 176, 184}},
	{BGM|BGP, 24, {32, 48, 184, 208}},
	{6, MUT_LADDER, {36, 44, 168, 208}},
	{0, TILE_BEAM_ORANGE, {8, 72, 208, 216}},

	{0, TILE_LADDER_WHITE, {80, 88, 16, 56}},
	{BGA, 3, {88, 104, 16, 32}},
	{BGA, 20, {104, 136, 16, 24}},
	{0, TILE_BEAM_ORANGE, {88, 112, 32, 40}},
	{0, TILE_BEAM_ORANGE, {72, 112, 56, 64}},
	{BGM, TILE_CONVEYOR_BELT, {72, 104, 96, 104}},
	{7, MUT_CONVEYOR_BELT, {72, 112, 96, 104}},
	{BGA, 26, {104, 112, 96, 104}},
	{BGM|BGP, 24, {80, 96, 104, 136}},
	{8, MUT_LADDER, {84, 92, 88, 136}},
	{0, TILE_MESH, {104, 136, 112, 136}},
	{0, TILE_BEAM_ORANGE, {72, 112, 136, 144}},
	{BGM|BGP, 24, {72, 88, 144, 176}},
	{9, MUT_LADDER, {76, 84, 128, 176}},
	{BGM, TILE_CONVEYOR_BELT, {72, 112, 176, 184}},
	{10, MUT_CONVEYOR_BELT, {72, 112, 176, 184}},
	{BGM|BGP, 24, {88, 104, 184, 208}},
	{11, MUT_LADDER, {92, 100, 168, 208}},
	{0, TILE_BEAM_ORANGE, {72, 112, 208, 216}},

	{0, TILE_BEAM_ORANGE, {112, 136, 32, 40}},
	{BGM|BGP, 24, {120, 136, 40, 56}},
	{12, MUT_LADDER, {124, 132, 24, 56}},
	{0, TILE_BEAM_ORANGE, {112, 176, 56, 64}},
	{BGM|BGA, 27, {112, 128, 80, 112}},
	{13, MUT_FIRE, {112, 128, 80, 112}},
	{BGM, TILE_CONVEYOR_BELT, {136, 176, 96, 104}},
	{14, MUT_CONVEYOR_BELT, {128, 176, 96, 104}},
	{BGA, 25, {128, 136, 96, 104}},
	{BGM|BGP, 24, {144, 160, 104, 136}},
	{15, MUT_LADDER, {148, 156, 88, 136}},
	{0, TILE_BEAM_ORANGE, {112, 160, 136, 144}},
	{BGM|BGP, 1, {112, 120, 144, 160}},
	{16, MUT_SLEDGE, {112, 120, 144, 160}},
	{BGM|BGP, 24, {136, 152, 144, 176}},
	{17, MUT_LADDER, {140, 148, 128, 176}},
	{BGM, TILE_CONVEYOR_BELT, {112, 176, 176, 184}},
	{18, MUT_CONVEYOR_BELT, {112, 176, 176, 184}},
	{BGM|BGP, 24, {144, 160, 184, 208}},
	{19, MUT_LADDER, {148, 156, 168, 208}},
	{BGM, TILE_PURSE, {128, 136, 200, 208}},
	{20, MUT_PURSE, {128, 136, 200, 208}},
	{0, TILE_BEAM_ORANGE, {112, 176, 208, 216}},

	{0, TILE_BEAM_ORANGE, {176, 224, 56, 64}},
	{BGM|BGP, 24, {200, 216, 64, 96}},
	{21, MUT_LADDER_RETRACT, {204, 212, 48, 96}},
	{BGM, TILE_CONVEYOR_BELT, {176, 232, 96, 104}},
	{22, MUT_CONVEYOR_BELT, {176, 232, 96, 104}},
	{BGM|BGP, 24, {192, 208, 104, 136}},
	{23, MUT_LADDER, {196, 204, 88, 136}},
	{BGM|BGP, 22, {208, 224, 120, 136}},
	{24, MUT_UMBRELLA, {208, 224, 120, 136}},
	{0, TILE_BEAM_ORANGE, {176, 224, 136, 144}},
	{BGM, TILE_CONVEYOR_BELT, {176, 224, 176, 184}},
	{25, MUT_CONVEYOR_BELT, {176, 232, 176, 184}},
	{BGA, 26, {224, 232, 176, 184}},
	{BGM|BGP, 24, {192, 208, 184, 208}},
	{26, MUT_LADDER, {196, 204, 168, 208}},
	{0, TILE_BEAM_ORANGE, {176, 232, 208, 216}},
};

const bgInner bgiTbl2[] PROGMEM = {
	{BGM|BGA, 0, {32, 64, 24, 56}},
	{0, MUT_KONG, {32, 64, 24, 56}},
	{0, TILE_BEAM_RED, {8, 32, 56, 64}},
	{BGP, 21, {32, 64, 56, 72}},
	{BGA, 21, {32, 40, 64, 208}},
	{BGA, 22, {56, 64, 64, 208}},
	{BGM|BGP, 22, {8, 24, 88, 104}},
	{1, MUT_UMBRELLA, {8, 24, 88, 104}},
	{0, TILE_BEAM_RED, {8, 32, 104, 112}},
	{BGM|BGP, 4, {16, 32, 112, 152}},
	{2, MUT_LADDER, {20, 28, 96, 152}},
	{0, TILE_BEAM_RED, {8, 32, 152, 160}},
	{BGM|BGP, 4, {8, 24, 160, 192}},
	{3, MUT_LADDER, {16, 24, 160, 192}},
	{0, TILE_BEAM_RED, {8, 32, 192, 200}},
	{BGM, TILE_BEAM_RED, {8, 64, 208, 216}},
	{4, MUT_OUT_OF_BOUNDS, {8, 64, 208, 216}},
	{BGP, 23, {32, 64, 200, 216}},

	{0, TILE_LADDER, {64, 72, 16, 56}},
	{0, TILE_LADDER, {80, 88, 16, 56}},
	{BGA, 3, {88, 104, 16, 32}},
	{BGA, 20, {104, 136, 16, 24}},
	{0, TILE_BEAM_RED,  {88, 128, 32, 40}},
	{BGM|BGP, 4, {112, 128, 40, 56}},
	{5, MUT_LADDER, {116, 124, 24, 56}},
	{0, TILE_BEAM_RED, {64, 96, 56, 64}},
	{BGP, 21, {96, 128, 56, 72}},
	{BGA, 21, {96, 104, 64, 208}},
	{BGA, 22, {120, 128, 64, 208}},
	{0, TILE_BEAM_RED, {64, 96, 104, 112}},
	{BGM|BGP, 4, {64, 80, 112, 168}},
	{6, MUT_LADDER, {68, 76, 96, 168}},
	{BGM|BGP, 4, {80, 96, 112, 168}},
	{7, MUT_LADDER, {84, 92, 96, 168}},
	{0, TILE_BEAM_RED, {64, 96, 168, 176}},
	{BGM, TILE_BEAM_RED, {64, 128, 208, 216}},
	{8, MUT_OUT_OF_BOUNDS, {64, 128, 208, 216}},
	{BGP, 23, {96, 128, 200, 216}},

	{0, TILE_BEAM_RED, {128, 184, 56, 64}},
	{BGM|BGP, 4, {168, 184, 64, 88}},
	{9, MUT_LADDER, {172, 180, 48, 88}},
	{0, TILE_BEAM_RED, {168, 184, 88, 96}},
	{0, TILE_BEAM_RED, {136, 160, 96, 104}},
	{BGM|BGP, 4, {144, 160, 104, 120}},
	{10, MUT_LADDER, {148, 156, 88, 120}},
	{0, TILE_BEAM_RED, {144, 160, 120, 128}},
	{0, TILE_BEAM_RED, {168, 184, 128, 136}},
	{0, TILE_BEAM_RED, {160, 176, 184, 192}},
	{0, TILE_BEAM_RED, {128, 152, 192, 200}},
	{BGM, TILE_BEAM_RED, {128, 184, 208, 216}},
	{11, MUT_OUT_OF_BOUNDS, {128, 184, 208, 216}},

	{BGM, TILE_PURSE, {216, 224, 64, 72}},
	{12, MUT_PURSE, {216, 224, 64, 72}},
	{0, TILE_BEAM_RED, {216, 232, 72, 80}},
	{BGM|BGP, 4, {216, 232, 80, 112}},
	{13, MUT_LADDER, {220, 228, 64, 112}},
	{0, TILE_BEAM_RED, {192, 208, 80, 88}},
	{0, TILE_BEAM_RED, {192, 232, 112, 120}},
	{BGM|BGP, 4, {192, 208, 120, 136}},
	{14, MUT_LADDER, {196, 204, 104, 136}},
	{0, TILE_BEAM_RED, {192, 208, 136, 144}},
	{0, TILE_BEAM_RED, {216, 232, 144, 152}},
	{BGM|BGP, 4, {216, 232, 152, 168}},
	{15, MUT_LADDER, {220, 228, 136, 168}},
	{0, TILE_BEAM_RED, {208, 232, 168, 176}},
	{0, TILE_BEAM_RED, {184, 200, 176, 184}},
	{BGM, TILE_BEAM_RED, {176, 232, 208, 216}},
	{16, MUT_OUT_OF_BOUNDS, {176, 232, 208, 216}},
};

const bgInner bgiTbl3[] PROGMEM = {
	{BGM|BGP, 22, {32, 48, 56, 72}},
	{0, MUT_UMBRELLA, {32, 48, 56, 72}},
	{0, TILE_BEAM_BLUE, {40, 64, 72, 80}},
	{BGM|BGP, 25, {40, 56, 80, 112}},
	{1, MUT_LADDER, {44, 52, 64, 112}},
	{0, TILE_BEAM_BLUE, {32, 64, 112, 120}},
	{BGM|BGP, 25, {32, 48, 120, 144}},
	{2, MUT_LADDER, {36, 44, 104, 144}},
	{BGM|BGP, 1, {16, 24, 120, 136}},
	{3, MUT_SLEDGE, {16, 24, 120, 136}},
	{0, TILE_BEAM_BLUE, {24, 64, 144, 152}},
	{BGM|BGP, 25, {24, 40, 152, 176}},
	{4, MUT_LADDER, {28, 36, 136, 176}},
	{0, TILE_BEAM_BLUE, {16, 64, 176, 184}},
	{BGM|BGP, 25, {16, 32, 184, 208}},
	{5, MUT_LADDER, {20, 28, 168, 208}},
	{0, TILE_BEAM_BLUE, {8, 64, 208, 216}},

	{0, TILE_BEAM_BLUE, {64, 104, 32, 40}},
	{0, TILE_POLE, {80, 88, 40, 72}},
	{BGM|BGP, 26, {64, 72, 64, 80}},
	{6, MUT_RIVET, {56, 80, 72, 80}},
	{0, TILE_BEAM_BLUE, {72, 104, 72, 80}},
	{BGM|BGP, 25, {72, 88, 80, 112}},
	{7, MUT_LADDER, {76, 84, 64, 112}},
	{BGM|BGP, 26, {64, 72, 104, 120}},
	{8, MUT_RIVET, {56, 80, 112, 120}},
	{0, TILE_BEAM_BLUE, {72, 104, 112, 120}},
	{BGM|BGP, 26, {64, 72, 136, 152}},
	{9, MUT_RIVET, {56, 80, 144, 152}},
	{0, TILE_BEAM_BLUE, {72, 104, 144, 152}},
	{BGM|BGP, 25, {80, 96, 152, 176}},
	{10, MUT_LADDER, {84, 92, 136, 176}},
	{BGM|BGP, 26, {64, 72, 168, 184}},
	{11, MUT_RIVET, {56, 80, 176, 184}},
	{0, TILE_BEAM_BLUE, {72, 104, 176, 184}},
	{0, TILE_BEAM_BLUE, {64, 104, 208, 216}},

	{BGA, 3, {104, 120, 16, 32}},
	{BGA, 20,{120, 152, 16, 24}},
	{0, TILE_BEAM_BLUE, {104, 168, 32, 40}},
	{0, TILE_POLE, {152, 160, 40, 72}},
	{BGM|BGA, 0, {104, 136, 40, 72}},
	{12, MUT_KONG, {104, 136, 40, 72}},
	{0, TILE_BEAM_BLUE, {104, 168, 72, 80}},
	{BGM|BGP, 25, {152, 168, 80, 112}},
	{13, MUT_LADDER, {156, 164, 64, 112}},
	{BGM|BGP, 1, {112, 120, 80, 96}},
	{14, MUT_SLEDGE, {112, 120, 80, 96}},
	{0, TILE_BEAM_BLUE, {104, 168, 112, 120}},
	{BGM|BGP, 25, {112, 128, 120, 144}},
	{15, MUT_LADDER, {116, 124, 104, 144}},
	{0, TILE_BEAM_BLUE, {104, 168, 144, 152}},
	{BGM|BGP, 25, {144, 160, 152, 176}},
	{16, MUT_LADDER, {148, 156, 136, 176}},
	{0, TILE_BEAM_BLUE, {104, 168, 176, 184}},
	{BGM|BGP, 25, {112, 128, 184, 208}},
	{17, MUT_LADDER, {116, 124, 168, 208}},
	{BGM, TILE_PURSE, {136, 144, 200, 208}},
	{18, MUT_PURSE, {136, 144, 200, 208}},
	{0, TILE_BEAM_BLUE, {104, 168, 208, 216}},

	{0, TILE_BEAM_BLUE, {168, 176, 32, 40}},
	{BGM|BGP, 26, {168, 176, 64, 80}},
	{19, MUT_RIVET, {160, 184, 72, 80}},
	{0, TILE_BEAM_BLUE, {176, 200, 72, 80}},
	{BGM|BGP, 25, {184, 200, 80, 112}},
	{20, MUT_LADDER, {188, 196, 64, 112}},
	{BGM|BGP, 26, {168, 176, 104, 120}},
	{21, MUT_RIVET, {160, 184, 112, 120}},
	{0, TILE_BEAM_BLUE, {176, 208, 112, 120}},
	{BGM|BGP, 25, {192, 208, 120, 144}},
	{22, MUT_LADDER, {196, 204, 104, 144}},
	{BGM|BGP, 26, {168, 176, 136, 152}},
	{23, MUT_RIVET, {160, 184, 144, 152}},
	{0, TILE_BEAM_BLUE, {176, 216, 144, 152}},
	{BGM|BGP, 25, {200, 216, 152, 176}},
	{24, MUT_LADDER, {204, 212, 136, 176}},
	{BGM|BGP, 26, {168, 176, 168, 184}},
	{25, MUT_RIVET, {160, 184, 176, 184}},
	{0, TILE_BEAM_BLUE, {176, 224, 176, 184}},
	{BGM|BGP, 25, {208, 224, 184, 208}},
	{26, MUT_LADDER, {212, 220, 168, 208}},
	{0, TILE_BEAM_BLUE, {168, 232, 208, 216}},
};

const bgInner bgiTbl4[] PROGMEM = {
	{BGA, 37, {104, 136, 144, 176}},
	{BGA, 35, {72, 160, 184, 192}},
	{BGP, 27, {16, 216, 40, 80}},
	{BGP, 28, {40, 200, 96, 136}},
};

const bgInner bgiTbl5[] PROGMEM = {
	{0, TILE_LADDER, {56, 64, 16, 64}},
	{0, TILE_LADDER, {72, 80, 16, 64}},
	{0, TILE_BEAM_RED, {80, 136, 40, 48}},
	{BGP, 4, {120, 136, 48, 64}},
	{0, TILE_BEAM_RED, {8, 216, 64, 72}},
	{BGP, 15, {24, 232, 88, 104}},
	{0, TILE_BEAM_RED, {8, 216, 120, 128}},
	{BGP, 18, {24, 232, 144, 160}},
	{BGP, 5, {8, 216, 168, 184}},
	{BGP, 5, {8, 232, 200, 216}},
	{0, TILE_LADDER, {96, 104, 72, 200}},
	{0, TILE_LADDER, {112, 120, 72, 200}},
};

const bgOuter bgoTbl[] PROGMEM = {
	{0, 1, 0, {8, 24, 32, 64}},
	{BGM, 2, 1, {24, 56, 32, 64}},
	{0, 1, 3, {56, 64, 16, 64}},
	{BGC, 1, 4, {8, 72, 64, 72}},
	{BGM, 2, 5, {24, 32, 72, 88}},
	{BGC, 2, 7, {24, 72, 97, 105}},
	{BGM, 2, 9, {36, 44, 89, 120}},
	{BGC|BGSTEP, 1, 11, {8, 72, 120, 128}},
	{0, 1, 12, {56, 72, 128, 136}},
	{BGM, 2, 13, {60, 68, 128, 152}},
	{BGC, 1, 15, {24, 72, 152, 160}},
	{BGM, 2, 16, {44, 52, 144, 174}},
	{BGC|BGSTEP, 3, 18, {8, 72, 174, 182}},
	{0, 1, 21, {24, 40, 184, 192}},
	{BGM, 2, 22, {24, 40, 192, 208}},
	{BGC, 1, 24, {8, 72, 208, 216}},

	{0, 1, 25, {72, 80, 16, 64}},
	{0, 2, 26, {80, 120, 24, 40}},
	{BGC, 1, 28, {80, 104, 40, 48}},
	{BGC, 1, 29, {72, 104, 64, 72}},
	{BGC|BGSTEP, 1, 30, {72, 104, 96, 104}},
	{BGM, 2, 31, {76, 84, 88, 121}},
	{BGC|BGSTEP, 2, 33, {72, 104, 121, 129}},
	{BGC|BGSTEP, 2, 35, {72, 104, 151, 159}},
	{BGM, 2, 37, {92, 100, 143, 175}},
	{BGC|BGSTEP, 3, 39, {72, 104, 175, 183}},
	{BGM, 2, 42, {76, 84, 183, 208}},
	{BGC, 1, 44, {72, 104, 208, 216}},

	{BGM, 0, MUT_WIN, {120, 136, 17, 25}},
	{BGC, 1, 45, {104, 136, 40, 48}},
	{BGM, 2, 46, {124, 132, 32, 64}},
	{BGC, 1, 48, {104, 136, 64, 72}},
	{BGM, 2, 49, {108, 116, 72, 95}},
	{BGC|BGSTEP, 2, 51, {104, 136, 95, 103}},
	{BGC|BGSTEP, 2, 53, {104, 136, 122, 130}},
	{BGM, 2, 55, {124, 132, 114, 150}},
	{BGC|BGSTEP, 2, 57, {104, 136, 150, 158}},
	{BGC|BGSTEP, 1, 59, {104, 136, 176, 184}},
	{BGC, 1, 60, {104, 136, 208, 216}},

	{BGC|BGSTEP, 1, 61, {136, 168, 64, 72}},
	{BGC|BGSTEP, 1, 62, {136, 168, 94, 102}},
	{BGC|BGSTEP, 1, 63, {136, 168, 123, 131}},
	{BGC|BGSTEP, 1, 64, {136, 168, 149, 157}},
	{BGC|BGSTEP, 1, 65, {136, 168, 177, 185}},
	{BGC|BGSTEP, 1, 66, {136, 168, 207, 215}},

	{BGC, 2, 67, {168, 216, 65, 73}},
	{BGM, 2, 69, {196, 204, 57, 93}},
	{BGC|BGSTEP, 3, 71, {168, 232, 93, 101}},
	{BGM, 2, 74, {180, 188, 101, 124}},
	{BGC, 3, 76, {168, 216, 124, 132}},
	{BGM, 2, 79, {196, 204, 116, 148}},
	{BGC|BGSTEP, 2, 81, {168, 232, 148, 156}},
	{BGM, 2, 83, {200, 208, 160, 176}},
	{BGC, 2, 85, {168, 216, 178, 186}},
	{BGM, 2, 87, {188, 196, 170, 206}},
	{BGC|BGSTEP, 2, 89, {168, 232, 206, 214}},
};

#define BGO1 91

const bgOuter bgoTbl1[] PROGMEM = {
	{0, 1, BGO1, {64, 72, 16, 56}},
	{BGM, 2, BGO1+1, {32, 56, 24, 56}},
	{BGC, 1, BGO1+3, {16, 72, 56, 64}},
	{BGM, 2, BGO1+4, {20, 28, 48, 96}},
	{BGM, 2, BGO1+6, {48, 56, 64, 80}},
	{BGM|BGC, 2, BGO1+8, {8, 72, 96, 104}},
	{BGM, 2, BGO1+10, {36, 44, 88, 136}},
	{BGC, 1, BGO1+12, {16, 56, 136, 144}},
	{BGM|BGC, 3, BGO1+13, {8, 72, 176, 184}},
	{BGM, 2, BGO1+16, {36, 44, 168, 208}},
	{BGC, 1, BGO1+18, {8, 72, 208, 216}},

	{0, 1, BGO1+19, {80, 88, 16, 56}},
	{0, 1, BGO1+20, {88, 104, 16, 32}},
	{0, 1, BGO1+21, {104, 136, 16, 24}},
	{BGC, 1, BGO1+22, {88, 112, 32, 40}},
	{BGC, 1, BGO1+23, {72, 112, 56, 64}},
	{BGM|BGC, 3, BGO1+24, {72, 112, 96, 104}},
	{BGM, 2, BGO1+27, {84, 92, 88, 136}},
	{0, 1, BGO1+29, {104, 136, 112, 136}},
	{BGC, 1, BGO1+30, {72, 112, 136, 144}},
	{BGM, 2, BGO1+31, {76, 84, 128, 176}},
	{BGM|BGC, 2, BGO1+33, {72, 112, 176, 184}},
	{BGM, 2, BGO1+35, {92, 100, 168, 208}},
	{BGC, 1, BGO1+37, {72, 112, 208, 216}},

	{BGM, 0, MUT_WIN, {120, 136, 9, 17}},
	{BGC, 1, BGO1+38, {112, 136, 32, 40}},
	{BGM, 2, BGO1+39, {124, 132, 24, 56}},
	{BGC, 1, BGO1+41, {112, 176, 56, 64}},
	{BGM, 2, BGO1+42, {112, 128, 80, 112}},
	{BGM|BGC, 3, BGO1+44, {128, 176, 96, 104}},
	{BGM, 2, BGO1+47, {148, 156, 88, 136}},
	{BGC, 1, BGO1+49, {112, 160, 136, 144}},
	{BGM, 2, BGO1+50, {112, 120, 144, 160}},
	{BGM, 2, BGO1+52, {140, 148, 128, 176}},
	{BGM|BGC, 2, BGO1+54, {112, 176, 176, 184}},
	{BGM, 2, BGO1+56, {148, 156, 168, 208}},
	{BGM, 2, BGO1+58, {128, 136, 200, 208}},
	{BGC, 1, BGO1+60, {112, 176, 208, 216}},

	{BGC, 1, BGO1+61, {176, 224, 56, 64}},
	{BGM, 2, BGO1+62, {204, 212, 48, 96}},
	{BGM|BGC, 2, BGO1+64, {176, 232, 96, 104}},
	{BGM, 2, BGO1+66, {196, 204, 88, 136}},
	{BGM, 2, BGO1+68, {208, 224, 120, 136}},
	{BGC, 1, BGO1+70, {176, 224, 136, 144}},
	{BGM|BGC, 3, BGO1+71, {176, 232, 176, 184}},
	{BGM, 2, BGO1+74, {196, 204, 168, 208}},
	{BGC, 1, BGO1+76, {176, 232, 208, 216}},
};

#define BGO2 (BGO1+77)

const bgOuter bgoTbl2[] PROGMEM = {
	{BGM, 2, BGO2, {32, 64, 24, 56}},
	{BGC, 1, BGO2+2, {8, 32, 56, 64}},
	{BGC, 1, BGO2+3, {32, 64, 56, 72}},
	{0, 1, BGO2+4, {32, 40, 64, 208}},
	{0, 1, BGO2+5, {56, 64, 64, 208}},
	{BGM, 2, BGO2+6, {8, 24, 88, 104}},
	{BGC, 1, BGO2+8, {8, 32, 104, 112}},
	{BGM, 2, BGO2+9, {20, 28, 96, 152}},
	{BGC, 1, BGO2+11, {8, 32, 152, 160}},
	{BGM, 2, BGO2+12, {12, 20, 144, 192}},
	{BGC, 1, BGO2+14, {8, 32, 192, 200}},
	{BGM, 2, BGO2+15, {8, 64, 208, 216}},
	{0, 1, BGO2+17, {32, 64, 200, 216}},

	{0, 1, BGO2+18, {64, 72, 16, 56}},
	{0, 1, BGO2+19, {80, 88, 16, 56}},
	{0, 1, BGO2+20, {88, 104, 16, 32}},
	{0, 1, BGO2+21, {104, 136, 16, 24}},
	{BGM, 0, MUT_WIN, {112, 128, 9, 17}},
	{BGC, 1, BGO2+22, {88, 128, 32, 40}},
	{BGM, 2, BGO2+23, {116, 124, 24, 56}},
	{BGC, 1, BGO2+25, {64, 96, 56, 64}},
	{BGC, 1, BGO2+26, {96, 128, 56, 72}},
	{0, 1, BGO2+27, {96, 104, 64, 208}},
	{0, 1, BGO2+28, {120, 128, 64, 208}},
	{BGC, 1, BGO2+29, {64, 96, 104, 112}},
	{BGM, 2, BGO2+30, {68, 76, 96, 168}},
	{BGM, 2, BGO2+32, {84, 92, 96, 168}},
	{BGC, 1, BGO2+34, {64, 96, 168, 176}},
	{BGM, 2, BGO2+35, {64, 128, 208, 216}},
	{0, 1, BGO2+37, {96, 128, 200, 216}},

	{BGC, 1, BGO2+38, {128, 184, 56, 64}},
	{BGM, 2, BGO2+39, {172, 180, 48, 88}},
	{BGC, 1, BGO2+41, {168, 184, 88, 96}},
	{BGC, 1, BGO2+42, {136, 160, 96, 104}},
	{BGM, 2, BGO2+43, {148, 156, 88, 120}},
	{BGC, 1, BGO2+45, {144, 160, 120, 128}},
	{BGC, 1, BGO2+46, {168, 184, 128, 136}},
	{BGC, 1, BGO2+47, {160, 176, 184, 192}},
	{BGC, 1, BGO2+48, {128, 152, 192, 200}},
	{BGM, 2, BGO2+49, {128, 184, 208, 216}},

	{BGM, 2, BGO2+51, {216, 224, 64, 72}},
	{BGC, 1, BGO2+53, {216, 232, 72, 80}},
	{BGM, 2, BGO2+54, {220, 228, 64, 112}},
	{BGC, 1, BGO2+56, {192, 208, 80, 88}},
	{BGC, 1, BGO2+57, {192, 232, 112, 120}},
	{BGM, 2, BGO2+58, {196, 204, 104, 136}},
	{BGC, 1, BGO2+60, {192, 208, 136, 144}},
	{BGC, 1, BGO2+61, {216, 232, 144, 152}},
	{BGM, 2, BGO2+62, {220, 228, 136, 168}},
	{BGC, 1, BGO2+64, {208, 232, 168, 176}},
	{BGC, 1, BGO2+65, {184, 200, 176, 184}},
	{BGM, 2, BGO2+66, {176, 232, 208, 216}},
};

#define BGO3 (BGO2+68)

const bgOuter bgoTbl3[] PROGMEM = {
	{BGM, 2, BGO3, {32, 48, 56, 72}},
	{BGC, 1, BGO3+2, {40, 56, 72, 80}},
	{BGM, 2, BGO3+3, {44, 52, 64, 112}},
	{BGC, 1, BGO3+5, {32, 56, 112, 120}},
	{BGM, 2, BGO3+6, {36, 44, 104, 144}},
	{BGM, 2, BGO3+8, {16, 24, 120, 136}},
	{BGC, 1, BGO3+10, {24, 56, 144, 152}},
	{BGM, 2, BGO3+11, {28, 36, 136, 176}},
	{BGC, 1, BGO3+13, {16, 56, 176, 184}},
	{BGM, 2, BGO3+14, {20, 28, 168, 208}},
	{BGC, 1, BGO3+16, {8, 64, 208, 216}},

	{BGC, 1, BGO3+17, {64, 104, 32, 40}},
	{0, 1, BGO3+18, {80, 88, 40, 72}},
	{BGM|BGC, 2, BGO3+19, {56, 80, 56, 80}},
	{BGC, 1, BGO3+21, {80, 104, 72, 80}},
	{BGM, 2, BGO3+22, {76, 84, 64, 112}},
	{BGM|BGC, 2, BGO3+24, {56, 80, 96, 120}},
	{BGC, 1, BGO3+26, {80, 104, 112, 120}},
	{BGM|BGC, 2, BGO3+27, {56, 80, 128, 152}},
	{BGC, 1, BGO3+29, {80, 104, 144, 152}},
	{BGM, 2, BGO3+30, {84, 92, 136, 176}},
	{BGM|BGC, 2, BGO3+32, {56, 80, 160, 184}},
	{BGC, 1, BGO3+34, {80, 104, 176, 184}},
	{BGC, 1, BGO3+35, {64, 104, 208, 216}},

	{0, 1, BGO3+36, {104, 120, 16, 32}},
	{0, 1, BGO3+37, {120, 152, 16, 24}},
	{BGC, 1, BGO3+38, {104, 168, 32, 40}},
	{0, 1, BGO3+39, {152, 160, 40, 72}},
	{BGM, 2, BGO3+40, {104, 136, 40, 72}},
	{BGC, 1, BGO3+42, {104, 160, 72, 80}},
	{BGM, 2, BGO3+43, {156, 164, 64, 112}},
	{BGM, 2, BGO3+45, {112, 120, 80, 96}},
	{BGC, 1, BGO3+47, {104, 160, 112, 120}},
	{BGM, 2, BGO3+48, {116, 124, 104, 144}},
	{BGC, 1, BGO3+50, {104, 160, 144, 152}},
	{BGM, 2, BGO3+51, {148, 156, 136, 176}},
	{BGC, 1, BGO3+53, {104, 160, 176, 184}},
	{BGM, 2, BGO3+54, {116, 124, 168, 208}},
	{BGM, 2, BGO3+56, {136, 144, 200, 208}},
	{BGC, 1, BGO3+58, {104, 168, 208, 216}},

	{BGC, 1, BGO3+59, {168, 176, 32, 40}},
	{BGM|BGC, 2, BGO3+60, {160, 184, 56, 80}},
	{BGC, 1, BGO3+62, {184, 200, 72, 80}},
	{BGM, 2, BGO3+63, {188, 196, 64, 112}},
	{BGM|BGC, 2, BGO3+65, {160, 184, 96, 120}},
	{BGC, 1, BGO3+67, {184, 208, 112, 120}},
	{BGM, 2, BGO3+68, {196, 204, 104, 144}},
	{BGM|BGC, 2, BGO3+70, {160, 184, 128, 152}},
	{BGC, 1, BGO3+72, {184, 216, 144, 152}},
	{BGM, 2, BGO3+73, {204, 212, 136, 176}},
	{BGM|BGC, 2, BGO3+75, {160, 184, 160, 184}},
	{BGC, 1, BGO3+77, {184, 224, 176, 184}},
	{BGM, 2, BGO3+78, {212, 220, 168, 208}},
	{BGC, 1, BGO3+80, {168, 232, 208, 216}},
};

#define BGO4 (BGO3+81)

const bgOuter bgoTbl4[] PROGMEM = {
	{0, 1, BGO4, {104, 136, 144, 176}},
	{0, 1, BGO4+1, {72, 160, 184, 192}},
	{0, 1, BGO4+2, {16, 216, 40, 80}},
	{0, 1, BGO4+3, {40, 200, 96, 136}},
};

#define BGO5 (BGO4+4)

const bgOuter bgoTbl5[] PROGMEM = {
	{0, 1, BGO5, {56, 64, 16, 64}},
	{0, 1, BGO5+1, {72, 80, 16, 64}},
	{0, 1, BGO5+2, {80, 136, 40, 48}},
	{0, 1, BGO5+3, {120, 136, 48, 64}},
	{0, 1, BGO5+4, {8, 216, 64, 72}},
	{0, 1, BGO5+5, {24, 232, 88, 104}},
	{0, 1, BGO5+6, {8, 216, 120, 128}},
	{0, 1, BGO5+7, {24, 232, 144, 160}},
	{0, 1, BGO5+8, {8, 216, 168, 184}},
	{0, 1, BGO5+9, {8, 232, 200, 216}},
	{0, 1, BGO5+10, {96, 104, 72, 200}},
	{0, 1, BGO5+11, {112, 120, 72, 200}},
};


// Horizontal slices
const u8 bgJumpDivisions[] PROGMEM = {
	72,105,128,160,182,224,		// Level 1
	64,104,144,184,224,			// Level 2
	88,128,160,184,224,			// Level 3
	80,120,152,184,224,			// Level 4
};

const u8 bgJumpIndexes[] PROGMEM = {
	1,4,6,9,11,14,
	2,4,5,7,8,10,
	0,4,6,7,9,10,
	0,1,2,3,4,5,
	0,1,3,5,7,9,	// Level 1
	1,3,6,8,9,
	3,5,6,9,11,
	0,4,6,8,11,
	0,1,3,6,7,		// Level 2
	0,5,7,9,9,
	4,11,12,12,15,
	0,2,6,6,7,
	0,2,5,8,11,		// Level 3
	0,2,4,7,9,
	0,4,7,9,12,
	2,6,9,11,13,
	0,3,6,9,12,		// Level 4
};

// Vertical slices
const rect bgRegions[] PROGMEM = {
	{0, 72, 0, 224},
	{72, 104, 0, 224},
	{104, 136, 0, 224},
	{136, 168, 0, 224},
	{168, 240, 0, 224},
	{0, 240, 0, 224},		// Level 1
	{0, 72, 0, 224},
	{72, 112, 0, 224},
	{112, 176, 0, 224},
	{176, 240, 0, 224},
	{0, 240, 0, 224},		// Level 2
	{0, 64, 0, 224},
	{64, 128, 0, 224},
	{128, 184, 0, 224},
	{184, 240, 0, 224},
	{0, 240, 0, 224},		// Level 3
	{0, 64, 0, 224},
	{64, 104, 0, 224},
	{104, 168, 0, 224},
	{168, 240, 0, 224},
	{0, 240, 0, 224},		// Level 4
};

const u8 bgRegionIndexes[] PROGMEM = {
	0,16,28,39,45,56,		// Level 1
	0,11,24,38,47,			// Level 2
	0,13,30,40,52,			// Level 3
	0,11,24,40,54,			// level 4
};

const bgDirectory bgDir[] PROGMEM = {
	{0, 6, 0, 0, 5, 0, 56, 5, 0},			// Level 1
	{6, 5, 30, 6, 4, 56, 47, 8, 5},			// Level 2
	{11, 5, 50, 11, 4, 103, 52, 7, 13},		// Level 3
	{16, 5, 70, 16, 4, 155, 54, 3, 20},		// Level 4
	{0, 0, 0, 0, 0, 209, 4, 2, 23},			// Title
	{0, 0, 0, 0, 0, 213, 12, 0, 25},		// Intro
};

const bgInner innerDir[] PROGMEM = {
	{BGP|BGEOF, 2, {168, 216, 64, 80}},	// Top
	{BGP, 5, {136, 168, 88, 104}},
	{BGP, 9, {104, 136, 88, 104}},
	{0, TILE_BLANK, {72, 104, 88, 96}},
	{0, TILE_BEAM_RED, {72, 104, 96, 104}},
	{0, TILE_BLANK, {24, 72, 88, 96}},
	{BGP|BGEOF, 2, {24, 72, 96, 112}},	// Top-1
	{BGP, 2, {72, 104, 120, 136}},
	{BGP, 12, {104, 136, 120, 136}},
	{BGP, 14, {136, 168, 120, 136}},
	{BGP|BGEOF, 18, {168, 216, 120, 136}},	// Top-2
	{BGP, 15, {136, 168, 144, 160}},
	{BGP, 5, {104, 136, 144, 160}},
	{BGP, 9, {72, 104, 144, 160}},
	{0, TILE_BLANK, {24, 72, 144, 152}},
	{BGEOF, TILE_BEAM_RED, {24, 72, 152, 160}},	// Top-3
	{BGP, 9, {72, 104, 168, 184}},
	{0, TILE_BLANK, {104, 136, 168, 176}},
	{0, TILE_BEAM_RED, {104, 136, 176, 184}},
	{0, TILE_BLANK, {136, 168, 168, 176}},
	{BGP, 2, {136, 168, 176, 192}},
	{0, TILE_BLANK, {168, 216, 168, 176}},
	{BGP|BGEOF, 12, {168, 216, 176, 192}},	// Top-4
	{BGP, 9, {136, 168, 200, 216}},
	{0, TILE_BLANK, {8, 136, 200, 208}},
	{BGEOF, TILE_BEAM_RED, {8, 136, 208, 216}},	// Top-5
	{BGP, 29, {40, 72, 72, 80}},
	{BGP, 30, {88, 128, 72, 80}},
	{BGP, 31, {168, 200, 72, 80}},
	{BGP, 32, {40, 64, 88, 96}},
	{BGP, 33, {40, 64, 104, 112}},
	{BGP, 34, {40, 64, 120, 128}},
	{BGP|BGEOF, 35, {40, 64, 136, 144}},	// Hi Scores
};

#define LADDER_COUNT 12

const byteDictionary ladderLinks[] PROGMEM = {
	{1,13},{3,9},{10,31},{15,26},{17,23},{24,45},{28,41},
	{32,38},{43,55},{46,52},{54,68},{59,65},
};

#define EXIT_COUNT 5

const byteDictionary exitLinks[] PROGMEM = {
	{6,73},{20,77},{35,81},{49,85},{62,89},
};

const pathNode barrelPaths[] PROGMEM = {
	{STATE_ROLLING,{52,60}},
	{STATE_DROPPING,{112,60}},
	{STATE_ROLLING,{171,60}},
	{STATE_DROPPING,{200,61}},
	{STATE_ROLLING,{219,61}},
	{STATE_FALLING,{224,89}}, // Level 5
	{STATE_ROLLING,{223,84}},
	{STATE_ROLLING,{220,89}},
	{STATE_ROLLING,{216,87}}, // Bounce
	{STATE_ROLLING,{200,89}},
	{STATE_DROPPING,{184,89}},
	{STATE_ROLLING,{165,89}},
	{STATE_ROLLING,{133,90}},
	{STATE_ROLLING,{112,91}},
	{STATE_ROLLING,{101,91}},
	{STATE_DROPPING,{80,92}},
	{STATE_ROLLING,{69,92}},
	{STATE_DROPPING,{40,93}},
	{STATE_ROLLING,{21,93}},
	{STATE_FALLING,{16,116}}, // Level 4
	{STATE_ROLLING,{22,111}},
	{STATE_ROLLING,{25,116}},
	{STATE_ROLLING,{29,114}}, // Bounce
	{STATE_ROLLING,{40,116}},
	{STATE_DROPPING,{64,116}},
	{STATE_ROLLING,{75,116}},
	{STATE_ROLLING,{80,117}},
	{STATE_ROLLING,{107,117}},
	{STATE_DROPPING,{128,118}},
	{STATE_ROLLING,{139,118}},
	{STATE_ROLLING,{171,119}},
	{STATE_ROLLING,{184,120}},
	{STATE_DROPPING,{200,120}},
	{STATE_ROLLING,{219,120}},
	{STATE_FALLING,{224,144}}, // Level 3
	{STATE_ROLLING,{223,139}},
	{STATE_ROLLING,{220,144}},
	{STATE_ROLLING,{216,142}}, // Bounce
	{STATE_ROLLING,{200,144}},
	{STATE_ROLLING,{165,144}},
	{STATE_ROLLING,{133,145}},
	{STATE_ROLLING,{128,146}},
	{STATE_ROLLING,{101,146}},
	{STATE_DROPPING,{96,147}},
	{STATE_ROLLING,{69,147}},
	{STATE_ROLLING,{64,148}},
	{STATE_DROPPING,{48,148}},
	{STATE_ROLLING,{21,148}},
	{STATE_FALLING,{16,170}}, // Level 2
	{STATE_ROLLING,{17,165}},
	{STATE_ROLLING,{20,170}},
	{STATE_ROLLING,{24,168}}, // Bounce
	{STATE_ROLLING,{48,170}},
	{STATE_ROLLING,{75,170}},
	{STATE_DROPPING,{80,171}},
	{STATE_ROLLING,{96,171}},
	{STATE_ROLLING,{107,171}},
	{STATE_ROLLING,{139,172}},
	{STATE_ROLLING,{171,173}},
	{STATE_ROLLING,{192,173}},
	{STATE_ROLLING,{219,173}},
	{STATE_FALLING,{224,202}}, // Level 1
	{STATE_ROLLING,{223,196}},
	{STATE_ROLLING,{220,201}},
	{STATE_ROLLING,{216,199}}, // Bounce
	{STATE_ROLLING,{192,202}},
	{STATE_ROLLING,{165,202}},
	{STATE_ROLLING,{133,203}},
	{STATE_ROLLING,{80,204}},
	{STATE_ROLLING,{4,204}}, // Level 0
	{0,{0,0}},
	{STATE_ROLLING,{40,192}}, // Igniter
	{0,{0,0}},
	{STATE_ROLLING,{225,84}},	// Exits
	{STATE_ROLLING,{228,89}},
	{STATE_ROLLING,{232,87}}, // Bounce
	{0,{236,89}},
	{STATE_ROLLING,{11,111}},
	{STATE_ROLLING,{7,116}},
	{STATE_ROLLING,{4,114}}, // Bounce
	{0,{4,116}},
	{STATE_ROLLING,{225,139}},
	{STATE_ROLLING,{228,144}},
	{STATE_ROLLING,{232,142}}, // Bounce
	{0,{236,144}},
	{STATE_ROLLING,{15,165}},
	{STATE_ROLLING,{12,170}},
	{STATE_ROLLING,{8,168}}, // Bounce
	{0,{4,170}},
	{STATE_ROLLING,{225,196}},
	{STATE_ROLLING,{228,201}},
	{STATE_ROLLING,{232,199}}, // Bounce
	{0,{236,202}},
	{0,{0,0}},
};

// Cost: 6 ram tiles
const pathNode sparkyPaths[] PROGMEM = {
	{STATE_TRACING|STATE_SPAWNING,{36,176}},
	{STATE_TRACING|STATE_SPAWNING,{40,184}}, // Spawning
	{STATE_JUNCTURE|STATE_SPAWNING,{56,200}},
	{4,{4,12}},
	{STATE_JUNCTURE,{192,200}},
	{6,{8,12}},
	{STATE_JUNCTURE,{224,200}},
	{4,{4,4}},
	{STATE_JUNCTURE,{192,168}},
	{4,{16,16}},
	{STATE_JUNCTURE,{16,168}},
	{14,{14,14}},
	{STATE_JUNCTURE,{80,200}},
	{2,{4,14}},
	{STATE_JUNCTURE,{80,168}},
	{10,{12,16}},
	{STATE_JUNCTURE,{96,168}},
	{8,{14,18}},
	{STATE_JUNCTURE,{96,144}},
	{16,{20,20}},
	{STATE_JUNCTURE,{128,144}},
	{18,{22,24}},
	{STATE_JUNCTURE,{160,144}},
	{20,{20,20}},
	{STATE_JUNCTURE,{128,112}},
	{20,{26,26}},
	{STATE_JUNCTURE,{40,112}},
	{24,{28,30}},
	{STATE_JUNCTURE,{16,112}},
	{26,{26,26}},
	{STATE_JUNCTURE,{40,88}},
	{26,{32,32}},
	{STATE_JUNCTURE,{112,88}},
	{30,{34,38}},
	{STATE_JUNCTURE,{200,88}},
	{32,{32,36}},
	{STATE_JUNCTURE,{200,56}},
	{34,{38,38}},
	{STATE_JUNCTURE,{112,56}},
	{32,{32,36}},				// (SPARKY0)
	{STATE_JUNCTURE,{88,96}},
	{42,{44,52}},
	{STATE_JUNCTURE,{96,96}},
	{40,{40,40}},
	{STATE_JUNCTURE,{88,160}},
	{40,{48,48}},
	{STATE_JUNCTURE,{96,160}},
	{44,{44,44}},
	{STATE_JUNCTURE,{72,160}},
	{44,{50,52}},
	{STATE_JUNCTURE,{64,160}},
	{48,{48,48}},
	{STATE_JUNCTURE,{72,96}},
	{48,{54,40}},
	{STATE_JUNCTURE,{64,96}},
	{52,{52,52}},				// (SPARKY1)
	{STATE_JUNCTURE,{224,64}},
	{58,{60,62}},
	{STATE_JUNCTURE,{232,64}},
	{56,{56,56}},
	{STATE_JUNCTURE,{216,64}},
	{56,{56,56}},
	{STATE_JUNCTURE,{224,104}},
	{56,{64,66}},
	{STATE_JUNCTURE,{232,104}},
	{62,{62,62}},
	{STATE_JUNCTURE,{200,104}},
	{62,{68,70}},
	{STATE_JUNCTURE,{192,104}},
	{66,{66,66}},
	{STATE_JUNCTURE,{200,128}},
	{66,{72,74}},
	{STATE_JUNCTURE,{208,128}},
	{70,{70,70}},
	{STATE_JUNCTURE,{192,128}},
	{70,{70,70}},				// (SPARKY2)
	{STATE_TRACING|STATE_SPAWNING,{112,72}},
	{STATE_JUNCTURE|STATE_SPAWNING,{104,88}}, // Spawning
	{79,{79,79}},
	{STATE_JUNCTURE,{88,88}},
	{97,{107,107}},
	{STATE_JUNCTURE,{24,88}},
	{83,{83,107}},
	{STATE_JUNCTURE,{24,48}},
	{81,{85,85}},
	{STATE_JUNCTURE,{208,48}},
	{83,{87,87}},
	{STATE_JUNCTURE,{208,88}},
	{85,{113,113}},
	{STATE_JUNCTURE,{152,88}},
	{91,{113,113}},
	{STATE_JUNCTURE,{152,128}},
	{89,{93,93}},
	{STATE_JUNCTURE,{144,128}},
	{91,{97,95}},
	{STATE_JUNCTURE,{144,168}},
	{93,{101,99}},
	{STATE_JUNCTURE,{88,128}},
	{79,{93,105}},
	{STATE_JUNCTURE,{216,168}},
	{95,{95,95}},
	{STATE_JUNCTURE,{80,168}},
	{95,{103,105}},
	{STATE_JUNCTURE,{24,168}},
	{101,{101,101}},
	{STATE_JUNCTURE,{80,128}},
	{97,{97,101}},
	{STATE_JUNCTURE,{40,88}},
	{79,{81,109}},
	{STATE_JUNCTURE,{40,128}},
	{107,{107,111}},
	{STATE_JUNCTURE,{24,128}},
	{109,{109,109}},
	{STATE_JUNCTURE,{200,88}},
	{87,{89,115}},
	{STATE_JUNCTURE,{200,128}},
	{113,{117,119}},
	{STATE_JUNCTURE,{184,128}},
	{115,{115,115}},
	{STATE_JUNCTURE,{216,128}},
	{115,{115,115}},				// (SPARKY3)
};

const pathNode springPaths[] PROGMEM = {
	{STATE_JUNCTURE|STATE_BOUNCING,{32,32}},
	{2,{2,2}},
	{STATE_JUNCTURE,{40,16}},
	{4,{4,4}},
	{STATE_JUNCTURE,{48,32}},
	{6,{6,6}},
	{STATE_JUNCTURE,{56,48}},
	{8,{8,8}},
	{STATE_JUNCTURE|STATE_BOUNCING,{64,32}},
	{10,{10,10}},
	{STATE_JUNCTURE,{72,16}},
	{12,{12,12}},
	{STATE_JUNCTURE,{80,32}},
	{14,{14,14}},
	{STATE_JUNCTURE,{88,48}},
	{16,{16,16}},
	{STATE_JUNCTURE|STATE_BOUNCING,{96,32}},
	{18,{18,18}},
	{STATE_JUNCTURE,{104,16}},
	{20,{20,20}},
	{STATE_JUNCTURE,{112,32}},
	{22,{22,22}},
	{STATE_JUNCTURE,{120,48}},
	{24,{24,24}},
	{STATE_JUNCTURE|STATE_BOUNCING,{128,32}},
	{26,{26,26}},
	{STATE_JUNCTURE,{136,16}},
	{28,{28,28}},
	{STATE_JUNCTURE,{144,32}},
	{30,{30,30}},
	{STATE_JUNCTURE,{152,48}},
	{32,{32,32}},
	{STATE_JUNCTURE|STATE_BOUNCING,{160,32}},
	{34,{34,34}},
	{STATE_JUNCTURE,{168,16}},
	{36,{36,36}},
	{STATE_JUNCTURE,{176,32}},
	{38,{38,38}},
	{STATE_JUNCTURE,{184,48}},
	{40,{40,40}},
	{STATE_JUNCTURE|STATE_BOUNCING,{192,32}},
	{42,{42,42}},
	{STATE_JUNCTURE,{200,16}},
	{44,{44,44}},
	{STATE_JUNCTURE,{208,32}},
	{46,{46,46}},
	{STATE_JUNCTURE|STATE_FREEFALLING,{208,216}},
	{48,{48,48}},
	{STATE_DESPAWN,{0,0}},
};

const pathNode ghostPaths[] PROGMEM = {
	{STATE_JUNCTURE,{120,104}},
	{2,{4,14}},
	{8,{80,104}},
	{6,{0,26}},
	{21,{160,104}},
	{8,{0,28}},
	{STATE_JUNCTURE,{48,104}},
	{10,{16,20}},
	{STATE_JUNCTURE,{192,104}},
	{12,{18,22}},
	{STATE_JUNCTURE,{40,104}},
	{6,{48,48}},
	{STATE_JUNCTURE,{200,104}},
	{8,{8,44}},
	{STATE_JUNCTURE,{120,136}},
	{0,{32,34}},
	{8,{64,104}},
	{2,{6,6}},
	{21,{176,104}},
	{4,{8,8}},
	{STATE_JUNCTURE,{48,64}},
	{6,{6,24}},
	{STATE_JUNCTURE,{192,64}},
	{8,{8,30}},
	{6,{64,64}},
	{26,{20,20}},
	{6,{80,64}},
	{24,{28,28}},
	{19,{160,64}},
	{30,{26,26}},
	{19,{176,64}},
	{28,{22,22}},
	{STATE_JUNCTURE,{88,136}},
	{14,{42,52}},
	{STATE_JUNCTURE,{152,136}},
	{14,{36,54}},
	{23,{168,136}},
	{38,{34,34}},
	{23,{176,136}},
	{36,{44,44}},
	{9,{64,136}},
	{42,{48,48}},
	{9,{72,136}},
	{40,{32,32}},
	{STATE_JUNCTURE,{200,136}},
	{12,{38,46}},
	{STATE_JUNCTURE,{208,136}},
	{44,{60,60}},
	{STATE_JUNCTURE,{40,136}},
	{10,{40,50}},
	{STATE_JUNCTURE,{32,136}},
	{48,{48,56}},
	{STATE_JUNCTURE,{88,168}},
	{32,{64,68}},
	{STATE_JUNCTURE,{152,168}},
	{34,{64,70}},
	{STATE_JUNCTURE,{32,168}},
	{50,{58,66}},
	{STATE_JUNCTURE,{24,168}},
	{56,{56,76}},
	{STATE_JUNCTURE,{208,168}},
	{46,{62,72}},
	{STATE_JUNCTURE,{216,168}},
	{60,{60,78}},
	{STATE_JUNCTURE,{120,168}},
	{52,{54,74}},
	{11,{64,168}},
	{68,{56,56}},
	{11,{72,168}},
	{66,{52,52}},
	{25,{168,168}},
	{72,{54,54}},
	{25,{176,168}},
	{70,{60,60}},
	{STATE_JUNCTURE,{120,200}},
	{64,{76,78}},
	{STATE_JUNCTURE,{24,200}},
	{58,{74,74}},
	{STATE_JUNCTURE,{216,200}},
	{62,{62,74}},
};
