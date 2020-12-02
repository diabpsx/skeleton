#ifndef PSXMSG_H
#define PSXMSG_H


extern void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam); // 0x80096B5C

extern void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam); // 0x80096EE0

extern void GoSetLevel__Fv(); // 0x80096F98

extern void GoBackLevel__Fv(); // 0x80097030

extern void GoWarpLevel__Fv(); // 0x8009708C

extern void PostLoadGame__Fv(); // 0x800970B8

extern void GoLoadGame__Fv(); // 0x80097130

extern void PostNewLevel__Fv(); // 0x80097288

extern void GoNewLevel__Fv(); // 0x8009733C

extern void PostGoBackLevel__Fv(); // 0x80097384

extern void GoForwardLevel__Fv(); // 0x80097430

extern void PostGoForwardLevel__Fv(); // 0x80097484

extern void GoNewGame__Fv(); // 0x80097530

extern void PostNewGame__Fv(); // 0x80097554

extern void LevelToLevelInit__Fv(); // 0x8009757C


#endif
