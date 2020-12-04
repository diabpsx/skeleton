#ifndef MONSTER_H
#define MONSTER_H


extern void MonstPartJump__Fi(int m); // 0x80147234

extern void DeleteMonster__Fi(int i); // 0x801473C8

extern int M_GetDir__Fi(int i); // 0x80147400

extern void M_StartDelay__Fii(int i, int len); // 0x8014745C

extern void M_StartRAttack__Fiii(int i, int missile_type, int dam); // 0x801474A4

extern void M_StartRSpAttack__Fiii(int i, int missile_type, int dam); // 0x801475BC

extern void M_StartSpAttack__Fi(int i); // 0x801476E0

extern void M_StartEat__Fi(int i); // 0x801477C8

extern void M_GetKnockback__Fi(int i); // 0x80147898

extern void M_StartHit__Fiii(int i, int pnum, int dam); // 0x80147A70

extern void M_DiabloDeath__FiUc(int i, unsigned char sendmsg); // 0x80147D68

extern void M2MStartHit__Fiii(int mid, int i, int dam); // 0x8014808C

extern void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg); // 0x80148338

extern void M2MStartKill__Fii(int i, int mid); // 0x8014860C

extern void M_StartKill__Fii(int i, int pnum); // 0x801489D4

extern void M_StartFadein__FiiUc(int i, int md, unsigned char backwards); // 0x80148AC4

extern void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards); // 0x80148C18

extern void M_StartHeal__Fi(int i); // 0x80148D60

extern void M_ChangeLightOffset__Fi(int monst); // 0x80148DE0

extern int M_DoStand__Fi(int i); // 0x80148E80

extern int M_DoWalk__Fi(int i); // 0x80148EE8

extern int M_DoWalk2__Fi(int i); // 0x8014916C

extern int M_DoWalk3__Fi(int i); // 0x80149358

extern void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd); // 0x8014961C

extern void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam); // 0x801497E4

extern int M_DoAttack__Fi(int i); // 0x80149DF8

extern int M_DoRAttack__Fi(int i); // 0x80149F9C

extern int M_DoRSpAttack__Fi(int i); // 0x8014A114

extern int M_DoSAttack__Fi(int i); // 0x8014A304

extern int M_DoFadein__Fi(int i); // 0x8014A3D8

extern int M_DoFadeout__Fi(int i); // 0x8014A4A8

extern int M_DoHeal__Fi(int i); // 0x8014A5BC

extern int M_DoTalk__Fi(int i); // 0x8014A668

extern void M_Teleport__Fi(int i); // 0x8014AAD4

extern int M_DoGotHit__Fi(int i); // 0x8014AD08

extern void DoEnding__Fv(); // 0x8014AD68

extern void PrepDoEnding__Fv(); // 0x8014AE20

extern int M_DoDeath__Fi(int i); // 0x8014AF44

extern int M_DoSpStand__Fi(int i); // 0x8014B114

extern int M_DoDelay__Fi(int i); // 0x8014B1B8

extern int M_DoStone__Fi(int i); // 0x8014B2A8

extern void M_WalkDir__Fii(int i, int md); // 0x8014B32C

extern void GroupUnity__Fi(int i); // 0x8014B554

extern unsigned char M_CallWalk__Fii(int i, int md); // 0x8014B940

extern unsigned char M_PathWalk__Fi(int i); // 0x8014BB2C

extern unsigned char M_CallWalk2__Fii(int i, int md); // 0x8014BBF0

extern unsigned char M_DumbWalk__Fii(int i, int md); // 0x8014BD04

extern unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir); // 0x8014BD58

extern void MAI_Zombie__Fi(int i); // 0x8014BEF8

extern void MAI_SkelSd__Fi(int i); // 0x8014C0F0

extern void MAI_Snake__Fi(int i); // 0x8014C288

extern void MAI_Bat__Fi(int i); // 0x8014C66C

extern void MAI_SkelBow__Fi(int i); // 0x8014CA24

extern void MAI_Fat__Fi(int i); // 0x8014CC08

extern void MAI_Sneak__Fi(int i); // 0x8014CDB8

extern void MAI_Fireman__Fi(int i); // 0x8014D1A4

extern void MAI_Fallen__Fi(int i); // 0x8014D49C

extern void MAI_Cleaver__Fi(int i); // 0x8014D7B8

extern void MAI_Round__FiUc(int i, unsigned char special); // 0x8014D8A0

extern void MAI_GoatMc__Fi(int i); // 0x8014DD0C

extern void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special); // 0x8014DD2C

extern void MAI_GoatBow__Fi(int i); // 0x8014DF4C

extern void MAI_Succ__Fi(int i); // 0x8014DF70

extern void MAI_AcidUniq__Fi(int i); // 0x8014DF94

extern void MAI_Scav__Fi(int i); // 0x8014DFB8

extern void MAI_Garg__Fi(int i); // 0x8014E3D0

extern void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles); // 0x8014E5B0

extern void MAI_Magma__Fi(int i); // 0x8014EAC4

extern void MAI_Storm__Fi(int i); // 0x8014EAF0

extern void MAI_Acid__Fi(int i); // 0x8014EB1C

extern void MAI_Diablo__Fi(int i); // 0x8014EB4C

extern void MAI_RR2__Fiii(int i, int mistype, int dam); // 0x8014EB78

extern void MAI_Mega__Fi(int i); // 0x8014F078

extern void MAI_SkelKing__Fi(int i); // 0x8014F09C

extern void MAI_Rhino__Fi(int i); // 0x8014F5D8

extern void MAI_Counselor__Fi(int i); // 0x8014FA80

extern void MAI_Garbud__Fi(int i); // 0x8014FF4C

extern void MAI_Zhar__Fi(int i); // 0x801500FC

extern void MAI_SnotSpil__Fi(int i); // 0x801502F4

extern void MAI_Lazurus__Fi(int i); // 0x80150528

extern void MAI_Lazhelp__Fi(int i); // 0x8015077C

extern void MAI_Lachdanan__Fi(int i); // 0x8015089C

extern void MAI_Warlord__Fi(int i); // 0x80150A2C

extern void DeleteMonsterList__Fv(); // 0x80150B78

extern void ProcessMonsters__Fv(); // 0x80150C94

extern unsigned char DirOK__Fii(int i, int mdir); // 0x8015121C

extern unsigned char PosOkMissile__Fii(int x, int y); // 0x80151604

extern unsigned char CheckNoSolid__Fii(int x, int y); // 0x8015166C

extern unsigned char LineClearF__FPFii_Uciiii(TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear Clear, int x1, int y1, int x2, int y2); // 0x801516B0

extern unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2); // 0x80151938

extern unsigned char LineClearF1__FPFiii_Uciiiii(TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear Clear, int monst, int x1, int y1, int x2, int y2); // 0x80151978

extern void M_FallenFear__Fii(int x, int y); // 0x80151C0C

extern void PrintMonstHistory__Fi(int mt); // 0x80151DDC

extern void PrintUniqueHistory__Fv(); // 0x80152004

extern void MissToMonst__Fiii(int i, int x, int y); // 0x80152128

extern unsigned char PosOkMonst2__Fiii(int i, int x, int y); // 0x8015258C

extern unsigned char PosOkMonst3__Fiii(int i, int x, int y); // 0x801527A8

extern int M_SpawnSkel__Fiii(int x, int y, int dir); // 0x80152A9C

extern void TalktoMonster__Fi(int i); // 0x80152BF4

extern void SpawnGolum__Fiiii(int i, int x, int y, int mi); // 0x80152D14

extern unsigned char CanTalkToMonst__Fi(int m); // 0x80152F6C

extern unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret); // 0x80152FA4

extern void MAI_Golum__Fi(int i); // 0x80153070

extern unsigned char MAI_Path__Fi(int i); // 0x801533E4

extern void M_StartAttack__Fi(int i); // 0x80153548

extern void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir); // 0x80153630


typedef unsigned char (*TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear)();

typedef unsigned char (*TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear)();




#endif
