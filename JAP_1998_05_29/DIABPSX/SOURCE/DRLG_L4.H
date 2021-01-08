#ifndef DRLG_L4_H
#define DRLG_L4_H


extern void DRLG_L4Shadows__Fv(); // 0x8014F4A8

extern void InitL4Dungeon__Fv(); // 0x8014F56C

extern void DRLG_LoadL4SP__Fv(); // 0x8014F620

extern void DRLG_FreeL4SP__Fv(); // 0x8014F6C4

extern void DRLG_L4SetSPRoom__Fii(int rx1, int ry1); // 0x8014F6F4

extern void L4makeDmt__Fv(); // 0x8014F7F4

extern int L4HWallOk__Fii(int i, int j); // 0x8014F898

extern int L4VWallOk__Fii(int i, int j); // 0x8014F9E8

extern void L4HorizWall__Fiii(int i, int j, int dx); // 0x8014FB58

extern void L4VertWall__Fiii(int i, int j, int dy); // 0x8014FD28

extern void L4AddWall__Fv(); // 0x8014FEEC

extern void L4tileFix__Fv(); // 0x80150394

extern void DRLG_L4Subs__Fv(); // 0x8015257C

extern void L4makeDungeon__Fv(); // 0x8015275C

extern void uShape__Fv(); // 0x80152994

extern long GetArea__Fv(); // 0x80152C30

extern void L4drawRoom__Fiiii(int x, int y, int width, int height); // 0x80152C8C

extern unsigned char L4checkRoom__Fiiii(int x, int y, int width, int height); // 0x80152CF4

extern void L4roomGen__Fiiiii(int x, int y, int w, int h, int dir); // 0x80152D90

extern void L4firstRoom__Fv(); // 0x80153078

extern void L4SaveQuads__Fv(); // 0x80153284

extern void DRLG_L4SetRoom__FPUcii(unsigned char *pSetPiece, int rx1, int ry1); // 0x80153344

extern void DRLG_LoadDiabQuads__FUc(unsigned char preflag); // 0x80153418

extern unsigned char DRLG_L4PlaceMiniSet__FPCUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir); // 0x80153614

extern void DRLG_L4FTVR__Fiiiii(int i, int j, int x, int y, int d); // 0x80153A30

extern void DRLG_L4FloodTVal__Fv(); // 0x80153ED8

extern unsigned char IsDURWall__Fc(char d); // 0x801540F0

extern unsigned char IsDLLWall__Fc(char dd); // 0x80154120

extern void DRLG_L4TransFix__Fv(); // 0x80154150

extern void DRLG_L4Corners__Fv(); // 0x801544BC

extern void L4FixRim__Fv(); // 0x80154550

extern void DRLG_L4GeneralFix__Fv(); // 0x8015458C

extern void DRLG_L4SetWalls__Fv(); // 0x80154630

extern void DRLG_L4__Fi(int entry); // 0x801546E0

extern void DRLG_L4Pass3__Fv(); // 0x80154FE0

extern void CreateL4Dungeon__FUii(unsigned int rseed, int entry); // 0x801551F8


#endif
