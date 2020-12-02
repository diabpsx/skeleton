#ifndef PLAYER_H
#define PLAYER_H


extern unsigned char IsDplayer__Fii(int x, int y); // 0x8005FD10

extern void * ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005FD9C

extern int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005FDE0

extern void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005FDF4

extern void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005FE14

extern void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay); // 0x8005FE1C

extern void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005FE38

extern void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005FE54

extern void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c); // 0x80060090

extern int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060498

extern void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060500

extern void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp); // 0x8006067C

extern void AddPlrMonstExper__Filc(int lvl, long exp, char pmask); // 0x800608A0

extern void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime); // 0x80060924

extern void InitMultiView__Fv(); // 0x80060C44

extern unsigned char SolidLoc__Fii(int x, int y); // 0x80060C4C

extern void PlrClrTrans__Fii(int x, int y); // 0x80060C6C

extern void PlrDoTrans__Fii(int x, int y); // 0x80060CE4

extern void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060DFC

extern void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir); // 0x80060E10

extern void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060E9C

extern void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060F00

extern void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060F38

extern void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d); // 0x80060F64

extern void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir); // 0x800610A8

extern void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy); // 0x80061140

extern void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800612F4

extern void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit); // 0x800612FC

extern void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y); // 0x80061448

extern void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy); // 0x800615DC

extern void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag); // 0x800617AC

extern void TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8006180C

extern void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag); // 0x80061948

extern void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80061B44

extern void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag); // 0x80061C54

extern void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag); // 0x80061DB0

extern void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80061DD0

extern void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800620E8

extern void CheckPlrDead__Fi(int pnum); // 0x80062198

extern void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl); // 0x800621EC

extern void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800623A0

extern void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx); // 0x80062448

extern int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80062560

extern unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2); // 0x80062568

extern int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80062618

extern unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd); // 0x80062828

extern unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m); // 0x800629EC

extern unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p); // 0x80063048

extern unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my); // 0x800633F0

extern int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80063470

extern int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80063804

extern void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80063904

extern int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800639D8

extern void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr); // 0x80063A74

extern int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80063F54

extern void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80064320

extern int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80064428

extern int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800644B8

extern int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800646A0

extern void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800646A8

extern unsigned char PlrDeathModeOK__Fi(int p); // 0x80064B68

extern void ValidatePlayer__Fv(); // 0x80064BD0

extern void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800650CC

extern void ProcessPlayers__Fv(); // 0x80065168

extern void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8006544C

extern unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py); // 0x80065474

extern void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace); // 0x8006564C

extern void CheckPlrSpell__Fv(); // 0x80065654

extern void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80065AB4

extern void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80065B9C

extern void CheckStats__Fi(int p); // 0x80065BCC

extern void ModifyPlrStr__Fii(int p, int l); // 0x80065DA0

extern void ModifyPlrMag__Fii(int p, int l); // 0x80065EBC

extern void ModifyPlrDex__Fii(int p, int l); // 0x80065FA8

extern void ModifyPlrVit__Fii(int p, int l); // 0x8006608C

extern void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp); // 0x80066168

extern void SetPlrStr__Fii(int p, int v); // 0x800661AC

extern void SetPlrMag__Fii(int p, int v); // 0x80066288

extern void SetPlrDex__Fii(int p, int v); // 0x800662F8

extern void SetPlrVit__Fii(int p, int v); // 0x800663D4

extern void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80066440

extern void PlayDungMsgs__Fv(); // 0x80066448

extern void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80066778

extern void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y); // 0x800667A0

extern void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i); // 0x800667E4

extern int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x80066818

extern void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x8006684C

extern void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl); // 0x80066880

extern void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x800668B4

extern void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr); // 0x800668E8

extern void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i); // 0x80066920

extern void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80066954

extern void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8006697C

extern int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800669A4

extern void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam); // 0x800669CC

extern void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80066A14

extern void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80066A3C

extern void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i); // 0x80066A64

extern void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80066A98

extern void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl); // 0x80066AC0

extern void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi); // 0x80066B04

extern void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x80066B38

extern unsigned char PosOkPlayer__Fiii(int pnum, int x, int y); // 0x80066B6C

extern int CalcStatDiff__Fi(int pnum); // 0x80066BB8

extern void StartNewLvl__Fiii(int pnum, int fom, int lvl); // 0x80066C04

extern void CreatePlayer__Fic(int pnum, char c); // 0x80066C50

extern void StartStand__Fii(int pnum, int dir); // 0x80066CA4

extern void SetPlayerHitPoints__Fii(int pnum, int val); // 0x80066CF0

extern void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace); // 0x80066D3C

extern void StartWarpLvl__Fii(int pnum, int pidx); // 0x80066D8C

extern void SyncPlrKill__Fii(int pnum, int earflag); // 0x80066DD8

extern void StartPlrKill__Fii(int pnum, int val); // 0x80066E24

extern void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay); // 0x80066E70

extern void AddPlrExperience__Fiil(int pnum, int lvl, long exp); // 0x80066EBC

extern void StartPlrBlock__Fii(int pnum, int dir); // 0x80066F08

extern void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit); // 0x80066F54

extern void StartSpell__Fiiii(int pnum, int d, int cx, int cy); // 0x80066FA4

extern void InitPlayer__FiUc(int pnum, unsigned char FirstTime); // 0x80066FF0

extern void PM_ChangeLightOff__Fi(int pnum); // 0x80067040

extern void CheckNewPath__Fi(int pnum); // 0x8006708C

extern void FreePlayerGFX__Fi(int pnum); // 0x800670D8

extern void InitDungMsgs__Fi(int pnum); // 0x80067124

extern void InitPlayerGFX__Fi(int pnum); // 0x80067170

extern void SyncInitPlrPos__Fi(int pnum); // 0x800671BC

extern void SetPlrAnims__Fi(int pnum); // 0x80067208

extern void ClrPlrPath__Fi(int pnum); // 0x80067254

extern void SyncInitPlr__Fi(int pnum); // 0x800672A0

extern void RestartTownLvl__Fi(int pnum); // 0x800672EC

extern void SetPlayerOld__Fi(int pnum); // 0x80067338

extern void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h); // 0x80067384


#endif
