#ifndef MONSTER_H
#define MONSTER_H


extern void DeleteMonster__Fi(int i); // 0x8014AB74

extern int M_GetDir__Fi(int i); // 0x8014ABAC

extern void M_StartDelay__Fii(int i, int len); // 0x8014AC10

extern void M_StartRAttack__Fiii(int i, int missile_type, int dam); // 0x8014AC60

extern void M_StartRSpAttack__Fiii(int i, int missile_type, int dam); // 0x8014AD80

extern void M_StartSpAttack__Fi(int i); // 0x8014AEF4

extern void M_StartEat__Fi(int i); // 0x8014AFE4

extern void M_GetKnockback__Fii(int i, int d); // 0x8014B0BC

extern void M_StartHit__Fiii(int i, int pnum, int dam); // 0x8014B2D8

extern void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum); // 0x8014B5C0

extern void M2MStartHit__Fiii(int mid, int i, int dam); // 0x8014B8E8

extern void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg); // 0x8014BBA4

extern void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg); // 0x8014BEC0

extern void M2MStartKill__Fii(int i, int mid); // 0x8014C010

extern void M_StartKill__Fii(int i, int pnum); // 0x8014C3D8

extern void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum); // 0x8014C4E0

extern void M_StartFadein__FiiUc(int i, int md, unsigned char backwards); // 0x8014C5F0

extern void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards); // 0x8014C74C

extern void M_StartHeal__Fi(int i); // 0x8014C89C

extern void M_ChangeLightOffset__Fi(int monst); // 0x8014C928

extern int M_DoStand__Fi(int i); // 0x8014CA90

extern int M_DoWalk__Fi(int i); // 0x8014CAF0

extern int M_DoWalk2__Fi(int i); // 0x8014CD60

extern int M_DoWalk3__Fi(int i); // 0x8014CF4C

extern void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd); // 0x8014D1F0

extern void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam); // 0x8014D428

extern int M_DoAttack__Fi(int i); // 0x8014DA3C

extern int M_DoRAttack__Fi(int i); // 0x8014DBE8

extern int M_DoRSpAttack__Fi(int i); // 0x8014DD70

extern int M_DoSAttack__Fi(int i); // 0x8014DF78

extern int M_DoFadein__Fi(int i); // 0x8014E054

extern int M_DoFadeout__Fi(int i); // 0x8014E134

extern int M_DoHeal__Fi(int i); // 0x8014E260

extern int M_DoTalk__Fi(int i); // 0x8014E2FC

extern void M_Teleport__Fi(int i); // 0x8014E8A0

extern int M_DoGotHit__Fi(int i); // 0x8014EAB4

extern void DoEnding__Fi(int p); // 0x8014EB1C

extern void PrepDoEnding__Fi(int pnum); // 0x8014EBC4

extern int M_DoDeath__Fi(int i); // 0x8014ED0C

extern int M_DoSpStand__Fi(int i); // 0x8014EED0

extern int M_DoDelay__Fi(int i); // 0x8014EF7C

extern int M_DoStone__Fi(int i); // 0x8014F090

extern void M_WalkDir__Fii(int i, int md); // 0x8014F10C

extern void GroupUnity__Fi(int i); // 0x8014F33C

extern unsigned char M_CallWalk__Fii(int i, int md); // 0x8014F750

extern unsigned char M_CallWalk2__Fii(int i, int md); // 0x8014F8F0

extern unsigned char M_DumbWalk__Fii(int i, int md); // 0x8014F9E8

extern unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir); // 0x8014FA3C

extern void MAI_Zombie__Fi(int i); // 0x8014FB88

extern void MAI_SkelSd__Fi(int i); // 0x8014FD88

extern void MAI_Snake__Fi(int i); // 0x8014FF38

extern void MAI_Bat__Fi(int i); // 0x80150334

extern void MAI_SkelBow__Fi(int i); // 0x801506E8

extern void MAI_Fat__Fi(int i); // 0x801508DC

extern void MAI_Sneak__Fi(int i); // 0x80150AA4

extern void MAI_Fireman__Fi(int i); // 0x80150E80

extern void MAI_Fallen__Fi(int i); // 0x80151184

extern void MAI_Cleaver__Fi(int i); // 0x80151498

extern void MAI_Round__FiUc(int i, unsigned char special); // 0x8015159C

extern void MAI_GoatMc__Fi(int i); // 0x801519DC

extern void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special); // 0x801519FC

extern void MAI_GoatBow__Fi(int i); // 0x80151C20

extern void MAI_Succ__Fi(int i); // 0x80151C44

extern void MAI_AcidUniq__Fi(int i); // 0x80151C68

extern void MAI_Scav__Fi(int i); // 0x80151C8C

extern void MAI_Garg__Fi(int i); // 0x80152050

extern void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles); // 0x80152230

extern void MAI_Magma__Fi(int i); // 0x80152720

extern void MAI_Storm__Fi(int i); // 0x8015274C

extern void MAI_Acid__Fi(int i); // 0x80152778

extern void MAI_Diablo__Fi(int i); // 0x801527A8

extern void MAI_RR2__Fiii(int i, int mistype, int dam); // 0x801527D4

extern void MAI_Mega__Fi(int i); // 0x80152CB8

extern void MAI_SkelKing__Fi(int i); // 0x80152CDC

extern void MAI_Rhino__Fi(int i); // 0x80153218

extern void MAI_Counselor__Fi(int i); // 0x801536D4

extern void MAI_Garbud__Fi(int i); // 0x80153B70

extern void MAI_Zhar__Fi(int i); // 0x80153D80

extern void MAI_SnotSpil__Fi(int i); // 0x80153F7C

extern void MAI_Lazurus__Fi(int i); // 0x801541CC

extern void MAI_Lazhelp__Fi(int i); // 0x80154470

extern void MAI_Lachdanan__Fi(int i); // 0x801545A8

extern void MAI_Warlord__Fi(int i); // 0x80154758

extern void DeleteMonsterList__Fv(); // 0x801548C0

extern void ProcessMonsters__Fv(); // 0x801549E4

extern unsigned char DirOK__Fii(int i, int mdir); // 0x80154FAC

extern unsigned char PosOkMissile__Fii(int x, int y); // 0x80155158

extern unsigned char CheckNoSolid__Fii(int x, int y); // 0x801551D0

extern unsigned char LineClearF__FPFii_Uciiii(TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear Clear, int x1, int y1, int x2, int y2); // 0x801551F0

extern unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2); // 0x80155478

extern unsigned char LineClearF1__FPFiii_Uciiiii(TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear Clear, int monst, int x1, int y1, int x2, int y2); // 0x801554B8

extern void M_FallenFear__Fii(int x, int y); // 0x8015574C

extern void PrintMonstHistory__Fi(int mt); // 0x80155934

extern void PrintUniqueHistory__Fv(); // 0x80155BB8

extern void MissToMonst__Fiii(int i, int x, int y); // 0x80155CE4

extern unsigned char PosOkMonst3__Fiii(int i, int x, int y); // 0x801561B0

extern int M_SpawnSkel__Fiii(int x, int y, int dir); // 0x8015648C

extern void TalktoMonster__Fi(int i); // 0x801565DC

extern void SpawnGolum__Fiiii(int i, int x, int y, int mi); // 0x8015671C

extern unsigned char CanTalkToMonst__Fi(int m); // 0x8015694C

extern unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret); // 0x8015698C

extern void * gSameRoom__Fii(int m, int i); // 0x80156A68

extern void MAI_Golum__Fi(int i); // 0x80156B00

extern void M_StartAttack__Fi(int i); // 0x8015702C

extern void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir); // 0x8015711C


typedef unsigned char (*TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear)();

typedef unsigned char (*TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear)();




#endif
