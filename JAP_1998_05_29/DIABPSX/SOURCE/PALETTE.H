#ifndef PALETTE_H
#define PALETTE_H


extern void LoadPalette__FPCc(char *pszFileName); // 0x8007EE64

extern void LoadRndLvlPal__Fi(int l); // 0x8007EE6C

extern void ResetPal__Fv(); // 0x8007EE74

extern void SetFadeLevel__Fi(int fadeval); // 0x8007EE7C

extern void * GetFadeState__Fv(); // 0x8007EEAC

extern void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords); // 0x8007EEB8

extern void SmearScreen__Fv(); // 0x8007EFD4

extern void DrawFadedScreen__Fv(); // 0x8007EFDC

extern void BlackPalette__Fv(); // 0x8007F064

extern void PaletteFadeInTask__FP4TASK(struct TASK *T); // 0x8007F160

extern void * PaletteFadeIn__Fi(int fr); // 0x8007F1F0

extern void PaletteFadeOutTask__FP4TASK(struct TASK *T); // 0x8007F248

extern void * PaletteFadeOut__Fi(int fr); // 0x8007F2F8


#endif
