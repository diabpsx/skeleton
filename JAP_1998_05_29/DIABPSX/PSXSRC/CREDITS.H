#ifndef CREDITS_H
#define CREDITS_H


extern void InitCredits__Fv(); // 0x8013D1B4

extern int PrintCredits__Fiiiiii(int StrNo, int Y, int CharFade, int RFlag, int GFlag, int BFlag); // 0x8013D248

extern void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y); // 0x8013DA78

extern void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y); // 0x8013DB30

extern int CredCountNL__Fi(int Str); // 0x8013DBE8

extern void DoCredits__Fv(); // 0x8013DC54


#endif
