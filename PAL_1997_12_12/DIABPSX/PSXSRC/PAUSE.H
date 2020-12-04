#ifndef PAUSE_H
#define PAUSE_H


extern struct CPauseMessages * __14CPauseMessages(struct CPauseMessages *this); // 0x80083CC4

extern void _._14CPauseMessages(struct CPauseMessages *this, int __in_chrg); // 0x80083C90

extern struct CTempPauseMessage * __17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80083C4C

extern void PauseTask__FP4TASK(struct TASK *T); // 0x80082E04

extern int GetPausePad__Fv(); // 0x80082E50

extern void * TryPadForPause__Fi(int PadNum); // 0x80082F3C

extern void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum); // 0x80082F68

extern void * DoPausedMessage__14CPauseMessages(struct CPauseMessages *this); // 0x800831D4

extern int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this); // 0x800834EC

extern void * AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this); // 0x8008360C

extern void * PA_SetPauseOk__Fb(void * NewPause); // 0x80083710

extern void * PA_GetPauseOk__Fv(); // 0x80083720

extern void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu); // 0x8008372C

extern void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80083878

extern void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80083880

extern void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80083980

extern void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80083988

extern void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80083990

extern void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu); // 0x80083A90

extern void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80083A98

extern void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80083AA0

extern void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this); // 0x80083BCC

extern void _._17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg); // 0x80083BD4

extern void _GLOBAL_.D.DoPause__14CPauseMessagesi(); // 0x80083BFC

extern void _GLOBAL_.I.DoPause__14CPauseMessagesi(); // 0x80083C24


#endif
