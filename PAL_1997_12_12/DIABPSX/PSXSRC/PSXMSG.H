#ifndef PSXMSG_H
#define PSXMSG_H


extern void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam); // 0x8008D2FC

extern void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam); // 0x8008D3F4

extern void GoBackLevel__Fv(); // 0x8008D4A4

extern void GoWarpLevel__Fv(); // 0x8008D51C

extern void PostLoadGame__Fv(); // 0x8008D554

extern void GoLoadGame__Fv(); // 0x8008D5F0

extern void PostNewLevel__Fv(); // 0x8008D678

extern void GoNewLevel__Fv(); // 0x8008D714

extern void PostGoBackLevel__Fv(); // 0x8008D768

extern void GoForwardLevel__Fv(); // 0x8008D800

extern void PostGoForwardLevel__Fv(); // 0x8008D858

extern void GoNewGame__Fv(); // 0x8008D8F0

extern void PostNewGame__Fv(); // 0x8008D940

extern void LevelToLevelInit__Fv(); // 0x8008D978


#endif
