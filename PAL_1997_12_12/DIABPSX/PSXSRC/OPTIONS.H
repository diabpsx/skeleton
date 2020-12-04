#ifndef OPTIONS_H
#define OPTIONS_H


extern void PrintSelectBack__FbT0(void * S, void * B); // 0x8009A8E4

extern void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H); // 0x8009AA38

extern void DrawSpinner__FiiUcUcUciiibiT8(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, void * Sparkle, int OtPos, void * cross); // 0x8009AB1C

extern void DrawMenu__Fi(int MenuNo); // 0x8009AFE4

extern int who_pressed__Fi(int pval); // 0x8009BAC0

extern struct CPad * PAD_GetOptionsPad__Fi(int p); // 0x8009BB48

extern void ShowCharacterFiles__Fv(); // 0x8009BB84

extern void MemcardPad__Fv(); // 0x8009C200

extern void SoundPad__Fv(); // 0x8009C7D0

extern void CentrePad__Fv(); // 0x8009CDEC

extern void CalcVolumes__Fv(); // 0x8009D210

extern void GetVolumes__Fv(); // 0x8009D350

extern void PrintInfoMenu__Fv(); // 0x8009D458

extern void DrawOptions__FP4TASK(struct TASK *T); // 0x8009D600

extern void ToggleOptions__Fv(); // 0x8009DD58

extern void FormatPad__Fv(); // 0x8009DE00

extern void ActivateMemcard__Fv(); // 0x8009E0E0

extern void ShowGameFiles__FPc(char *filename); // 0x8009E114


#endif
