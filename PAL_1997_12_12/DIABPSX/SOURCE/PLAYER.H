#ifndef PLAYER_H
#define PLAYER_H


extern void * ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80058C14

extern int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80058C58

extern void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80058C6C

extern void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80058C8C

extern void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay); // 0x80058C94

extern void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80058CB0

extern void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80058CD4

extern void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c); // 0x80058F10

extern int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005932C

extern void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80059394

extern void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp); // 0x80059504

extern void AddPlrMonstExper__Filc(int lvl, long exp, char pmask); // 0x80059710

extern void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime); // 0x80059794

extern void InitMultiView__Fv(); // 0x80059B60

extern void * CheckLeighSolid__Fii(int x, int y); // 0x80059B68

extern unsigned char SolidLoc__Fii(int x, int y); // 0x80059C00

extern void PlrClrTrans__Fii(int x, int y); // 0x80059C88

extern void PlrDoTrans__Fii(int x, int y); // 0x80059D1C

extern void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80059E10

extern void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir); // 0x80059E24

extern void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80059EB0

extern void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80059F14

extern void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80059F50

extern void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d); // 0x80059F7C

extern void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir); // 0x8005A0B4

extern void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy); // 0x8005A14C

extern void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005A2E8

extern void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit); // 0x8005A408

extern void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y); // 0x8005A528

extern void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy); // 0x8005A6C4

extern void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag); // 0x8005A88C

extern void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005ABA4

extern void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag); // 0x8005AFEC

extern void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag); // 0x8005B130

extern void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005B150

extern void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005B438

extern void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl); // 0x8005B4F4

extern void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005B638

extern void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx); // 0x8005B6C8

extern int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005B784

extern unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2); // 0x8005B78C

extern int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005B814

extern unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd); // 0x8005BB80

extern unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m); // 0x8005BD20

extern unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p); // 0x8005C350

extern unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my); // 0x8005C700

extern int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005C790

extern int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005CB1C

extern void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005CC1C

extern int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005CCDC

extern void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr); // 0x8005CD7C

extern int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005DD40

extern void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005E0B0

extern int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005E1AC

extern int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005E228

extern int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005E368

extern void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005E370

extern unsigned char PlrDeathModeOK__Fi(int p); // 0x8005E7B0

extern void ValidatePlayer__Fv(); // 0x8005E818

extern void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005ECF4

extern void ProcessPlayers__Fv(); // 0x8005ED90

extern void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005F0C4

extern unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py); // 0x8005F0EC

extern void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace); // 0x8005F294

extern void CheckPlrSpell__Fv(); // 0x8005F29C

extern void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005F6A4

extern void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8005F7E0

extern void CheckStats__Fi(int p); // 0x8005F810

extern void ModifyPlrStr__Fii(int p, int l); // 0x8005F9AC

extern void ModifyPlrMag__Fii(int p, int l); // 0x8005FAC8

extern void ModifyPlrDex__Fii(int p, int l); // 0x8005FBB4

extern void ModifyPlrVit__Fii(int p, int l); // 0x8005FC98

extern void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp); // 0x8005FD74

extern void SetPlrStr__Fii(int p, int v); // 0x8005FDB8

extern void SetPlrMag__Fii(int p, int v); // 0x8005FE94

extern void SetPlrDex__Fii(int p, int v); // 0x8005FF04

extern void SetPlrVit__Fii(int p, int v); // 0x8005FFE0

extern void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8006004C

extern void PlayDungMsgs__Fv(); // 0x80060054

extern void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060384

extern void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y); // 0x800603AC

extern void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i); // 0x800603F0

extern int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x80060424

extern void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x80060458

extern void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl); // 0x8006048C

extern void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x800604C0

extern void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr); // 0x800604F4

extern void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i); // 0x8006052C

extern void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060560

extern void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060588

extern int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800605B0

extern void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam); // 0x800605D8

extern void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060620

extern void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80060648

extern void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i); // 0x80060670

extern void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800606A4

extern void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x800606CC

extern void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl); // 0x800606F4

extern void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi); // 0x80060738

extern void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val); // 0x8006076C

extern unsigned char PosOkPlayer__Fiii(int pnum, int x, int y); // 0x800607A0

extern int CalcStatDiff__Fi(int pnum); // 0x800607EC

extern void StartNewLvl__Fiii(int pnum, int fom, int lvl); // 0x80060838

extern void CreatePlayer__Fic(int pnum, char c); // 0x80060884

extern void StartStand__Fii(int pnum, int dir); // 0x800608D8

extern void SetPlayerHitPoints__Fii(int pnum, int val); // 0x80060924

extern void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace); // 0x80060970

extern void StartWarpLvl__Fii(int pnum, int pidx); // 0x800609C0

extern void SyncPlrKill__Fii(int pnum, int earflag); // 0x80060A0C

extern void StartPlrKill__Fii(int pnum, int val); // 0x80060A58

extern void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay); // 0x80060AA4

extern void AddPlrExperience__Fiil(int pnum, int lvl, long exp); // 0x80060AF0

extern void StartPlrBlock__Fii(int pnum, int dir); // 0x80060B3C

extern void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit); // 0x80060B88

extern void StartSpell__Fiiii(int pnum, int d, int cx, int cy); // 0x80060BD8

extern void InitPlayer__FiUc(int pnum, unsigned char FirstTime); // 0x80060C24

extern void PM_ChangeLightOff__Fi(int pnum); // 0x80060C74

extern void CheckNewPath__Fi(int pnum); // 0x80060CC0

extern void FreePlayerGFX__Fi(int pnum); // 0x80060D0C

extern void InitDungMsgs__Fi(int pnum); // 0x80060D58

extern void InitPlayerGFX__Fi(int pnum); // 0x80060DA4

extern void SyncInitPlrPos__Fi(int pnum); // 0x80060DF0

extern void SetPlrAnims__Fi(int pnum); // 0x80060E3C

extern void ClrPlrPath__Fi(int pnum); // 0x80060E88

extern void SyncInitPlr__Fi(int pnum); // 0x80060ED4

extern void RestartTownLvl__Fi(int pnum); // 0x80060F20

extern void SetPlayerOld__Fi(int pnum); // 0x80060F6C

extern void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h); // 0x80060FB8


#endif
