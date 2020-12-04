#ifndef COREMON_H
#define COREMON_H


extern void M_CheckEFlag__Fi(int i); // 0x8007818C

extern void M_ClearSquares__Fi(int i); // 0x800781AC

extern unsigned char IsSkel__Fi(int mt); // 0x80078318

extern void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType); // 0x80078354

extern unsigned char M_Ranged__Fi(int i); // 0x800783A0

extern unsigned char M_Talker__Fi(int i); // 0x800783E8

extern void M_Enemy__Fi(int i); // 0x80078448

extern void ClearMVars__Fi(int i); // 0x800789DC

extern void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y); // 0x80078A50

extern int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap); // 0x80078E9C

extern void M_StartStand__Fii(int i, int md); // 0x80078F4C

extern void M_UpdateLeader__Fi(int i); // 0x80079090

extern void ActivateSpawn__Fiiii(int i, int x, int y, int dir); // 0x80079188

extern unsigned char SpawnSkeleton__Fiii(int ii, int x, int y); // 0x80079230

extern void M_StartSpStand__Fii(int i, int md); // 0x80079420

extern unsigned char PosOkMonst__Fiii(int i, int x, int y); // 0x80079500

extern unsigned char CanPut__Fii(int i, int j); // 0x8007977C


#endif
