#ifndef PALETTE_H
#define PALETTE_H


extern void LoadPalette__FPCc(char *pszFileName); // 0x80077D30

extern void LoadRndLvlPal__Fi(int l); // 0x80077D38

extern void ResetPal__Fv(); // 0x80077D40

extern void SetFadeLevel__Fi(int fadeval); // 0x80077D48

extern void * GetFadeState__Fv(); // 0x80077D78

extern void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords); // 0x80077D84

extern void SmearScreen__Fv(); // 0x80077E88

extern void DrawFadedScreen__Fv(); // 0x80077E90

extern void BlackPalette__Fv(); // 0x80077EE4

extern void PaletteFadeInTask__FP4TASK(struct TASK *T); // 0x80077FA0

extern void * PaletteFadeIn__Fi(int fr); // 0x80078030

extern void PaletteFadeOutTask__FP4TASK(struct TASK *T); // 0x80078088

extern void * PaletteFadeOut__Fi(int fr); // 0x80078138


#endif
