#ifndef GAMEPAD_H
#define GAMEPAD_H


extern void ClrCursor__Fi(int num); // 0x80077F90

extern void HappyMan__Fi(int n); // 0x80077FEC

extern void flyabout__7GamePad(struct GamePad *this); // 0x80077FFC

extern void CloseInvChr__Fv(); // 0x800783F8

extern void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY); // 0x80078440

extern char pad_UpIsUpRight__Fic(int pval, char other); // 0x800784C0

extern struct GamePad * __7GamePadi(struct GamePad *this, int player_num); // 0x8007857C

extern void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num); // 0x80078630

extern void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func func); // 0x80078638

extern void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func func); // 0x8007867C

extern void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions); // 0x800786C0

extern void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions); // 0x80078928

extern int GetActionButton__7GamePadPFi_v(struct GamePad *this, TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func); // 0x80078AE0

extern void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func func, TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc upfunc); // 0x80078B3C

extern void RunFunc__7GamePadi(struct GamePad *this, int pad); // 0x80078B78

extern void ButtonDown__7GamePadi(struct GamePad *this, int button); // 0x80078C64

extern void TestButtons__7GamePad(struct GamePad *this); // 0x8007907C

extern void * CheckCentre__7GamePadi(struct GamePad *this, int dir); // 0x80079188

extern int CheckDirs__7GamePadi(struct GamePad *this, int dir); // 0x80079280

extern int CheckDirs__7GamePadiii(struct GamePad *this, int dir, int wx, int wy); // 0x800792B0

extern int CheckSide__7GamePadi(struct GamePad *this, int dir); // 0x800793B8

extern void * newDirOk__7GamePadi(struct GamePad *this, int dir); // 0x800793F8

extern int CheckDiagBodge__7GamePadi(struct GamePad *this, int dir); // 0x800794A8

extern int CheckIsoBodge__7GamePadi(struct GamePad *this, int dir); // 0x8007979C

extern int CheckBodge__7GamePadi(struct GamePad *this, int dir); // 0x80079B08

extern void walk__7GamePadi(struct GamePad *this, int cmd); // 0x80079C68

extern void check_around_player__7GamePad(struct GamePad *this); // 0x80079FB0

extern void show_combos__7GamePad(struct GamePad *this); // 0x8007A2EC

extern void Handle__7GamePad(struct GamePad *this); // 0x8007A578

extern void GamePadTask__FP4TASK(struct TASK *T); // 0x8007AC34

extern struct GamePad * GetGamePad__Fi(int pnum); // 0x8007AD2C

extern void PostGamePad__Fiiii(int val, int var1, int var2, int var3); // 0x8007AD4C

extern void Init_GamePad__Fv(); // 0x8007AE50

extern void InitGamePadVars__Fv(); // 0x8007AE80

extern int SetWalkStyle__Fii(int pnum, int style); // 0x8007B00C

extern char GetPadStyle__Fi(int pnum); // 0x8007B07C

extern void _GLOBAL_.I.flyflag(); // 0x8007B0A0


typedef void (*TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)();

typedef void (*TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func)();

typedef void (*TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func)();

typedef void (*TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func)();

typedef void (*TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc)();




#endif
