#ifndef GAMEPAD_H
#define GAMEPAD_H


extern void flyabout__7GamePad(struct GamePad *this); // 0x80070C00

extern void CloseInvChr__Fv(); // 0x800710BC

extern void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY); // 0x80071104

extern char pad_UpIsUp__Fi(int pval); // 0x800711B0

extern char pad_UpIsUpRight__Fi(int pval); // 0x80071220

extern struct GamePad * __7GamePadi(struct GamePad *this, int player_num); // 0x80071290

extern void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num); // 0x800713C0

extern void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func func); // 0x80071400

extern void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func func); // 0x80071444

extern void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions); // 0x80071488

extern void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions); // 0x800716F8

extern int GetActionButton__7GamePadPFi_v(struct GamePad *this, TDRFuncPtr_GetActionButton__7GamePadPFi_v1func func); // 0x800718B8

extern void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func func, TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc upfunc); // 0x80071914

extern void RunFunc__7GamePadi(struct GamePad *this, int pad); // 0x80071950

extern void ButtonDown__7GamePadi(struct GamePad *this, int button); // 0x800719F0

extern void TestButtons__7GamePad(struct GamePad *this); // 0x80071DC4

extern int CheckDirs__7GamePadi(struct GamePad *this, int dir); // 0x80071E98

extern int CheckSide__7GamePadi(struct GamePad *this, int dir); // 0x80071FB0

extern int CheckBodge__7GamePadi(struct GamePad *this, int dir); // 0x80071FF4

extern void walk__7GamePadc(struct GamePad *this, char cmd); // 0x800722F8

extern void check_around_player__7GamePad(struct GamePad *this); // 0x80072604

extern void show_combos__7GamePad(struct GamePad *this); // 0x8007295C

extern void Handle__7GamePad(struct GamePad *this); // 0x80072B10

extern void GamePadTask__FP4TASK(struct TASK *T); // 0x80073174

extern void PostGamePad__Fiiii(int val, int var1, int var2, int var3); // 0x80073378

extern void Init_GamePad__Fv(); // 0x80073428

extern void InitGamePadVars__Fv(); // 0x80073458

extern int SetWalkStyle__Fii(int pnum, int style); // 0x800734E8


typedef void (*TDRFuncPtr_GetActionButton__7GamePadPFi_v1func)();

typedef void (*TDRFuncPtr_SetComboDownButton__7GamePadiPFi_v2func)();

typedef void (*TDRFuncPtr_SetDownButton__7GamePadiPFi_v2func)();

typedef void (*TDRFuncPtr_SetUpAction__7GamePadPFi_vT11func)();

typedef void (*TDRFuncPtr_SetUpAction__7GamePadPFi_vT12upfunc)();




#endif
