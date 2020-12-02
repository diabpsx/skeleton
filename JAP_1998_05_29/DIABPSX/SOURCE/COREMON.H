#ifndef COREMON_H
#define COREMON_H


extern void M_CheckEFlag__Fi(int i); // 0x8007F354

extern void M_ClearSquares__Fi(int i); // 0x8007F35C

extern unsigned char IsSkel__Fi(int mt); // 0x8007F49C

extern void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType); // 0x8007F4FC

extern unsigned char M_Talker__Fi(int i); // 0x8007F550

extern void M_Enemy__Fi(int i); // 0x8007F5B8

extern void ClearMVars__Fi(int i); // 0x8007F7D0

extern void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y); // 0x8007F84C

extern int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap); // 0x8007FDD0

extern void M_StartStand__Fii(int i, int md); // 0x8007FE70

extern void M_UpdateLeader__Fi(int i); // 0x8007FFD4

extern void ActivateSpawn__Fiiii(int i, int x, int y, int dir); // 0x800800E4

extern unsigned char SpawnSkeleton__Fiii(int ii, int x, int y); // 0x80080184

extern void M_StartSpStand__Fii(int i, int md); // 0x80080374

extern unsigned char PosOkMonst__Fiii(int i, int x, int y); // 0x8008045C

extern unsigned char CanPut__Fii(int i, int j); // 0x800806C0

extern int encode_enemy__Fi(int m); // 0x80080974


#endif
