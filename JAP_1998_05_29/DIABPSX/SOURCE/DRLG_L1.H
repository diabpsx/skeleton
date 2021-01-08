#ifndef DRLG_L1_H
#define DRLG_L1_H


extern void DRLG_PlaceDoor__Fii(int x, int y); // 0x8013BCB0

extern void DRLG_L1Shadows__Fv(); // 0x8013C190

extern int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir); // 0x8013C5A0

extern void DRLG_SetWalls__Fv(); // 0x8013CA08

extern void DRLG_L1Floor__Fv(); // 0x8013CAC4

extern void DRLG_L1Pass3__Fv(); // 0x8013CBA8

extern void DRLG_LoadL1SP__Fv(); // 0x8013CDA0

extern void DRLG_FreeL1SP__Fv(); // 0x8013CE7C

extern void DRLG_Init_Globals__Fv(); // 0x8013CEAC

extern void set_restore_lighting__Fv(); // 0x8013CECC

extern void DRLG_InitL1Vals__Fv(); // 0x8013CF5C

extern void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy); // 0x8013CF64

extern void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy); // 0x8013D138

extern void InitL5Dungeon__Fv(); // 0x8013D2F8

extern void L5ClearFlags__Fv(); // 0x8013D37C

extern void L5drawRoom__Fiiii(int x, int y, int w, int h); // 0x8013D3CC

extern unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height); // 0x8013D438

extern void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir); // 0x8013D4CC

extern void L5firstRoom__Fv(); // 0x8013D7FC

extern long L5GetArea__Fv(); // 0x8013DB9C

extern void L5makeDungeon__Fv(); // 0x8013DBFC

extern void L5makeDmt__Fv(); // 0x8013DC88

extern int L5HWallOk__Fii(int i, int j); // 0x8013DD70

extern int L5VWallOk__Fii(int i, int j); // 0x8013DEAC

extern void L5HorizWall__Fiici(int i, int j, char p, int dx); // 0x8013DFF4

extern void L5VertWall__Fiici(int i, int j, char p, int dy); // 0x8013E22C

extern void L5AddWall__Fv(); // 0x8013E458

extern void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag); // 0x8013E6B4

extern void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2); // 0x8013E974

extern void L5tileFix__Fv(); // 0x8013EA28

extern void DRLG_L5Subs__Fv(); // 0x8013F2EC

extern void DRLG_L5SetRoom__Fii(int rx1, int ry1); // 0x8013F4F8

extern void L5FillChambers__Fv(); // 0x8013F5F8

extern void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d); // 0x8013FCE4

extern void DRLG_L5FloodTVal__Fv(); // 0x8014016C

extern void DRLG_L5TransFix__Fv(); // 0x80140264

extern void DRLG_L5DirtFix__Fv(); // 0x801406A8

extern void DRLG_L5CornerFix__Fv(); // 0x80140824

extern void DRLG_L5__Fi(int entry); // 0x80140930

extern void CreateL5Dungeon__FUii(unsigned int rseed, int entry); // 0x80140E64


#endif
