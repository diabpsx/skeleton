#ifndef PAUSE_H
#define PAUSE_H


extern struct CPauseMessages * __14CPauseMessages(struct CPauseMessages *this); // 0x800893B0

extern void _._14CPauseMessages(struct CPauseMessages *this, int __in_chrg); // 0x8008937C

extern struct CTempPauseMessage * __17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80089338

extern void PauseTask__FP4TASK(struct TASK *T); // 0x800884C8

extern int GetPausePad__Fv(); // 0x80088518

extern void * TryPadForPause__Fi(int PadNum); // 0x80088640

extern void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum); // 0x8008866C

extern void * DoPausedMessage__14CPauseMessages(struct CPauseMessages *this); // 0x8008887C

extern int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this); // 0x800889B4

extern void * AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this); // 0x80088AD4

extern void * PA_SetPauseOk__Fb(void * NewPause); // 0x80088BF4

extern void * PA_GetPauseOk__Fv(); // 0x80088C04

extern void MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this, int s, int Txt, int Menu, struct RECT *PRect); // 0x80088C10

extern void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80088E50

extern void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80088E58

extern void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80088FD0

extern void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80088FD8

extern void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80088FE0

extern void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80089158

extern void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80089160

extern void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80089168

extern void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x800892B8

extern void _._17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg); // 0x800892C0

extern void _GLOBAL_.D.DoPause__14CPauseMessagesi(); // 0x800892E8

extern void _GLOBAL_.I.DoPause__14CPauseMessagesi(); // 0x80089310


#endif
