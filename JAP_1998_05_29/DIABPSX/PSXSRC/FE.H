#ifndef FE_H
#define FE_H


extern void FeInitBuffer__Fv(); // 0x80139C24

extern void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font); // 0x80139C50

extern void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count); // 0x80139CD4

extern void FeAddNameTable__FPUci(unsigned char *Table, int Count); // 0x80139D50

extern void FeDrawBuffer__Fv(); // 0x80139E78

extern void FeNewMenu__FP7FeTable(struct FeTable *Menu); // 0x8013A4A4

extern void FePrevMenu__Fv(); // 0x8013A524

extern void FeSelUp__Fi(int No); // 0x8013A66C

extern void FeSelDown__Fi(int No); // 0x8013A754

extern int FeGetCursor__Fv(); // 0x8013A83C

extern void FeSelect__Fv(); // 0x8013A850

extern void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen); // 0x8013A8A0

extern void InitDummyMenu__Fv(); // 0x8013AA68

extern void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct); // 0x8013AA70

extern void FeInitMainMenu__Fv(); // 0x8013ABA4

extern void FeInitNewGameMenu__Fv(); // 0x8013AC20

extern void FeNewGameMenuCtrl__Fv(); // 0x8013ACB0

extern void FeInitPlayer1ClassMenu__Fv(); // 0x8013AE64

extern void FeInitPlayer2ClassMenu__Fv(); // 0x8013AEE8

extern void FePlayerClassMenuCtrl__Fv(); // 0x8013AF6C

extern void FeDrawChrClass__Fv(); // 0x8013AFB4

extern void FeInitNewP1NameMenu__Fv(); // 0x8013B43C

extern void FeInitNewP2NameMenu__Fv(); // 0x8013B498

extern void FeNewNameMenuCtrl__Fv(); // 0x8013B4EC

extern void FeCopyPlayerInfoForReturn__Fv(); // 0x8013BAB4

extern void FeEnterGame__Fv(); // 0x8013BBC8

extern void FeInitLoadMemcardSelect__Fv(); // 0x8013BBF0

extern void FeInitLoadChar1Menu__Fv(); // 0x8013BC70

extern void FeInitLoadChar2Menu__Fv(); // 0x8013BCD8

extern void FeInitDifficultyMenu__Fv(); // 0x8013BD48

extern void FeDifficultyMenuCtrl__Fv(); // 0x8013BDEC

extern void FeInitBackgroundMenu__Fv(); // 0x8013BED0

extern void FeInitBook1Menu__Fv(); // 0x8013BF1C

extern void FeInitBook2Menu__Fv(); // 0x8013BF6C

extern void FeBackBookMenuCtrl__Fv(); // 0x8013BFBC

extern void PlayDemo__Fv(); // 0x8013C200

extern void FadeFEOut__Fv(); // 0x8013C214

extern void DrawBackTSK__FP4TASK(struct TASK *T); // 0x8013C2D8

extern void FeInitMainStuff__FP4TASK(struct TASK *T2); // 0x8013C460

extern void FrontEndTask__FP4TASK(struct TASK *T); // 0x8013C50C

extern void DrawFeTwinkle__Fii(int TwinkX, int TwinkY); // 0x8013C9B8


#endif
