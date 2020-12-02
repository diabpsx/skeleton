#ifndef OPTIONS_H
#define OPTIONS_H


extern void PrintSelectBack__FUs(unsigned short Str); // 0x800A68D0

extern void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H); // 0x800A6960

extern void DrawSpinner__FiiUcUcUciiibiT8T8Uc(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, void * Sparkle, int OtPos, void * cross, void * iso, int SinStep); // 0x800A6A44

extern void SetLoadedLang__F9LANG_TYPE(enum LANG_TYPE LoadLang); // 0x800A70C0

extern void ChangeLang__Fv(); // 0x800A7170

extern void DrawLeftRight__Fv(); // 0x800A7234

extern void PrintMono__Fi(int ypos); // 0x800A723C

extern void DrawMenu__Fi(int MenuNo); // 0x800A72F4

extern int who_pressed__Fi(int pval); // 0x800A8314

extern void CharacterLoadPad__Fv(); // 0x800A839C

extern void MemcardPad__Fv(); // 0x800A88F0

extern void SwitchMONO__Fv(); // 0x800A9214

extern void SoundPad__Fv(); // 0x800A9260

extern void CentrePad__Fv(); // 0x800A9C68

extern void CalcVolumes__Fv(); // 0x800A9EAC

extern void SetLoadedVolumes__Fv(); // 0x800AA008

extern void GetVolumes__Fv(); // 0x800AA0B8

extern void AlterSpeedMenu__F9GM_SPEEDS(enum GM_SPEEDS gs); // 0x800AA154

extern void GameSpeedPad__Fv(); // 0x800AA1A8

extern void DrawOptions__FP4TASK(struct TASK *T); // 0x800AA2D0

extern void ToggleOptions__Fv(); // 0x800AA9CC

extern void FormatPad__Fv(); // 0x800AAB74

extern void SaveOverwritePad__Fv(); // 0x800AAE7C

extern void CharCardSelectMemcardPad__Fv(); // 0x800AB0B8

extern void LAMBO_MovePad__FP4CPad(struct CPad *P); // 0x800AB300


#endif
