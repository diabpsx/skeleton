#ifndef KANJI_H
#define KANJI_H


extern void LoadKanjiFont__FPc(char *name); // 0x800A0118

extern void LoadKanjiIndex__FPc(char *name); // 0x800A01AC

extern void FreeKanji__Fv(); // 0x800A0260

extern void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo); // 0x800A02E8

extern unsigned short * getb__FUs(unsigned short n); // 0x800A03BC

extern void _get_font__FPUsUsUs(unsigned short *into, unsigned short num, unsigned short col); // 0x800A042C

extern int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col); // 0x800A04FC


#endif
