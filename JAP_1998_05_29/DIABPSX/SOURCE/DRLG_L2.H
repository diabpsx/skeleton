#ifndef DRLG_L2_H
#define DRLG_L2_H


extern unsigned char DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir); // 0x80143408

extern void DRLG_L2PlaceRndSet__FPUci(unsigned char *miniset, int rndper); // 0x80143798

extern void DRLG_L2Subs__Fv(); // 0x80143A90

extern void DRLG_L2Shadows__Fv(); // 0x80143C80

extern void InitDungeon__Fv(); // 0x80143E44

extern void DRLG_LoadL2SP__Fv(); // 0x80143E8C

extern void DRLG_FreeL2SP__Fv(); // 0x80143F2C

extern void DRLG_L2SetRoom__Fii(int rx1, int ry1); // 0x80143F5C

extern void DefineRoom__Fiiiii(int nX1, int nY1, int nX2, int nY2, int ForceHW); // 0x8014405C

extern void CreateDoorType__Fii(int nX, int nY); // 0x80144260

extern void PlaceHallExt__Fii(int nX, int nY); // 0x80144344

extern void AddHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd); // 0x8014437C

extern void CreateRoom__Fiiiiiiiii(int nX1, int nY1, int nX2, int nY2, int nRDest, int nHDir, int ForceHW, int nH, int nW); // 0x80144454

extern void GetHall__FPiN40(int *nX1, int *nY1, int *nX2, int *nY2, int *nHd); // 0x80144AC4

extern void ConnectHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd); // 0x80144B5C

extern void DoPatternCheck__Fii(int i, int j); // 0x801451BC

extern void L2TileFix__Fv(); // 0x80145494

extern unsigned char DL2_Cont__FUcUcUcUc(unsigned char x1f, unsigned char y1f, unsigned char x2f, unsigned char y2f); // 0x801455B8

extern int DL2_NumNoChar__Fv(); // 0x80145638

extern void DL2_DrawRoom__Fiiii(int x1, int y1, int x2, int y2); // 0x80145694

extern void DL2_KnockWalls__Fiiii(int x1, int y1, int x2, int y2); // 0x80145798

extern unsigned char DL2_FillVoids__Fv(); // 0x80145968

extern unsigned char CreateDungeon__Fv(); // 0x801462E4

extern void DRLG_L2Pass3__Fv(); // 0x801465F0

extern void DRLG_L2FTVR__Fiiiii(int i, int j, int x, int y, int d); // 0x801467E8

extern void DRLG_L2FloodTVal__Fv(); // 0x80146C70

extern void DRLG_L2TransFix__Fv(); // 0x80146D68

extern void L2DirtFix__Fv(); // 0x80146F94

extern void L2LockoutFix__Fv(); // 0x801470F4

extern void L2DoorFix__Fv(); // 0x80147478

extern void DRLG_L2SetWalls__Fv(); // 0x80147528

extern void DRLG_L2__Fi(int entry); // 0x801476E0

extern void DRLG_InitL2Vals__Fv(); // 0x80148134

extern void LoadL2Dungeon__FPcii(char *sFileName, int vx, int vy); // 0x8014813C

extern void LoadPreL2Dungeon__FPcii(char *sFileName, int vx, int vy); // 0x80148358

extern void CreateL2Dungeon__FUii(unsigned int rseed, int entry); // 0x8014854C


#endif
