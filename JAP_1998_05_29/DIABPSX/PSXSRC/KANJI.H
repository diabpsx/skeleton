#ifndef KANJI_H
#define KANJI_H


extern void LoadKanjiFont__FPc(char *name); // 0x800AD218

extern void FreeKanji__Fv(); // 0x800AD2C4

extern void ClearKanjiCount__Fv(); // 0x800AD2D0

extern void ClearKanjiBuffer__Fv(); // 0x800AD308

extern void KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct); // 0x800AD34C

extern void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo); // 0x800AD5D8

extern void * SetKanjiLoaded__Fb(void * loaded); // 0x800AD708

extern void * IsKanjiLoaded__Fv(); // 0x800AD718

extern void KanjiSetTSK__FP4TASK(struct TASK *T); // 0x800AD724

extern void KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo); // 0x800AD77C

extern int inmem__Fs(short k); // 0x800AD7F4

extern unsigned short getb__FUs(unsigned short n); // 0x800AD87C

extern void ShadeBuff__FPUcii(unsigned char *b, int col, int border); // 0x800AD88C

extern void Crunch__FPUcT0(unsigned char *s, unsigned char *db); // 0x800ADA34

extern void _get_font__FPUcUsT0(unsigned char *d, unsigned short num, unsigned char *abuff); // 0x800ADAA8

extern int getfreekan__Fv(); // 0x800ADB68

extern enum KANJI_FRMS GetKanjiCacheFrm__Fv(); // 0x800ADC20

extern struct POLY_FT4 * GetKanjiFrm__FUs(unsigned short kan); // 0x800ADC2C


#endif
