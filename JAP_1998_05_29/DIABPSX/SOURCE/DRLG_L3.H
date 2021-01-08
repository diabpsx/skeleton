#ifndef DRLG_L3_H
#define DRLG_L3_H


extern void InitL3Dungeon__Fv(); // 0x80148F98

extern void SetBlankL3Dungeon__Fv(); // 0x8014901C

extern void FixL3Dungeon__Fv(); // 0x80149078

extern int DRLG_L3FillRoom__Fiiii(int x1, int y1, int x2, int y2); // 0x801490EC

extern void DRLG_L3CreateBlock__Fiiii(int x, int y, int obs, int dir); // 0x8014933C

extern void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2); // 0x801495BC

extern void DRLG_L3FillDiags__Fv(); // 0x80149624

extern void DRLG_L3FillSingles__Fv(); // 0x80149750

extern void DRLG_L3FillStraights__Fv(); // 0x8014981C

extern void DRLG_L3Edges__Fv(); // 0x80149BC8

extern int DRLG_L3GetFloorArea__Fv(); // 0x80149C08

extern void DRLG_L3MakeMegas__Fv(); // 0x80149C58

extern void DRLG_L3River__Fv(); // 0x80149D94

extern int DRLG_L3SpawnEdge__FiiPi(int x, int y, int *totarea); // 0x8014A7BC

extern int DRLG_L3Spawn__FiiPi(int x, int y, int *totarea); // 0x8014AA48

extern void DRLG_L3Pool__Fv(); // 0x8014AC54

extern void DRLG_L3PoolFix__Fv(); // 0x8014AEA4

extern int DRLG_L3PlaceMiniSet__FPCUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir); // 0x8014B0C4

extern void DRLG_L3PlaceRndSet__FPCUci(unsigned char *miniset, int rndper); // 0x8014B430

extern unsigned char WoodVertU__Fii(int i, int y); // 0x8014B76C

extern unsigned char WoodVertD__Fii(int i, int y); // 0x8014B818

extern unsigned char WoodHorizL__Fii(int x, int j); // 0x8014B8B4

extern unsigned char WoodHorizR__Fii(int x, int j); // 0x8014B948

extern void AddFenceDoors__Fv(); // 0x8014B9CC

extern void FenceDoorFix__Fv(); // 0x8014BAB0

extern void DRLG_L3Wood__Fv(); // 0x8014BCA4

extern int DRLG_L3Anvil__Fv(); // 0x8014C478

extern void FixL3Warp__Fv(); // 0x8014C6D0

extern void FixL3HallofHeroes__Fv(); // 0x8014C7B8

extern void DRLG_L3LockRec__Fii(int x, int y); // 0x8014C90C

extern unsigned char DRLG_L3Lockout__Fv(); // 0x8014C9A8

extern void DRLG_L3SetWalls__Fv(); // 0x8014CA68

extern void DRLG_L3__Fi(int entry); // 0x8014CB1C

extern void DRLG_L3Pass3__Fv(); // 0x8014D238

extern void CreateL3Dungeon__FUii(unsigned int rseed, int entry); // 0x8014D450

extern void LoadL3Dungeon__FPcii(char *sFileName, int vx, int vy); // 0x8014D4C8

extern void LoadPreL3Dungeon__FPcii(char *sFileName, int vx, int vy); // 0x8014D64C


#endif
