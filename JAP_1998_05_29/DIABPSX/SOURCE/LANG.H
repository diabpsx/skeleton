#ifndef LANG_H
#define LANG_H


extern enum LANG_TYPE LANG_GetLang__Fv(); // 0x8007B348

extern void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo); // 0x8007B354

extern char * GetStr__Fi(int StrId); // 0x8007B528

extern void LANG_ReloadMainTXT__Fv(); // 0x8007B5A4

extern void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType); // 0x8007B5E8

extern void DumpCurrentText__Fv(); // 0x8007B700

extern int CalcNumOfStrings__FPPc(char **TPtr); // 0x8007B758

extern void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest); // 0x8007B764

extern char * GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType); // 0x8007B844


#endif
