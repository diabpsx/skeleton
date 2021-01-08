#ifndef PREMON_H
#define PREMON_H


extern void SwapMonsterType__FPi(int *oldmt); // 0x8015F6E8

extern unsigned char MonstPlace__Fii(int xp, int yp); // 0x8015F75C

extern void InitMonsterGFX__Fi(int monst); // 0x8015F828

extern void PlaceMonster__Fiiii(int i, int mtype, int x, int y); // 0x8015F900

extern int AddMonsterType__Fii(int type, int placeflag); // 0x8015F98C

extern void GetMonsterTypes__FUl(unsigned long QuestMask); // 0x8015FA88

extern void ClrAllMonsters__Fv(); // 0x8015FB48

extern void InitLevelMonsters__Fv(); // 0x8015FC80

extern void GetLevelMTypes__Fv(); // 0x8015FD04

extern void PlaceQuestMonsters__Fv(); // 0x801601D8

extern void LoadDiabMonsts__Fv(); // 0x8016059C

extern void PlaceGroup__FiiUci(int mtype, int num, unsigned char leaderf, int leader); // 0x801606AC

extern void SetMapMonsters__FPUcii(unsigned char *pMap, int startx, int starty); // 0x80160CA0

extern void InitMonsters__Fv(); // 0x80160ED4

extern void PlaceUniqueMonst__Fiii(int uniqindex, int miniontype, int unpackfilesize); // 0x80161288

extern void PlaceUniques__Fv(); // 0x80161BCC

extern int PreSpawnSkeleton__Fv(); // 0x80161D5C

extern void decode_enemy__Fii(int m, int enemy); // 0x80161E94

extern unsigned char IsGoat__Fi(int mt); // 0x80161FB0


#endif
