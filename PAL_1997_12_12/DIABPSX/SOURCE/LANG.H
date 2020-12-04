#ifndef LANG_H
#define LANG_H


extern enum LANG_TYPE LANG_GetLang__Fv(); // 0x800737BC

extern void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo); // 0x800737C8

extern char * GetStr__Fi(int StrId); // 0x80073948

extern void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType); // 0x800739B0

extern void DumpCurrentText__Fv(); // 0x80073B28

extern int CalcNumOfStrings__FPPc(char **TPtr); // 0x80073B80

extern void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest); // 0x80073B8C

extern char * GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType); // 0x80073CAC


#endif
