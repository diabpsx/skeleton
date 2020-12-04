#ifndef CONTROL_H
#define CONTROL_H


extern unsigned char TrimCol__Fs(short col); // 0x8002E8A0

extern void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w); // 0x8002E8D8

extern void SetSpellTrans__Fc(char t); // 0x8002F3F4

extern void DrawSpellBookTSK__FP4TASK(struct TASK *T); // 0x8002F400

extern void DrawSpeedSpellTSK__FP4TASK(struct TASK *T); // 0x8002F498

extern void ToggleSpell__Fi(int pnum); // 0x8002F510

extern void DrawSpellList__Fv(); // 0x8002F5C4

extern void SetSpell__Fi(int pnum); // 0x8003014C

extern void AddPanelString__FPCci(char *str, int just); // 0x80030220

extern void ClearPanel__Fv(); // 0x800302D0

extern void InitPanelStr__Fv(); // 0x80030300

extern void InitControlPan__Fv(); // 0x80030320

extern void DrawCtrlPan__Fv(); // 0x80030568

extern void DoAutoMap__Fv(); // 0x80030594

extern void CheckPanelInfo__Fv(); // 0x80030608

extern void FreeControlPan__Fv(); // 0x80030ECC

extern int CPrintString__FiPci(int No, char *pszStr, int Just); // 0x80030FDC

extern void PrintInfo__Fv(); // 0x800310F8

extern void DrawInfoBox__FP4RECT(struct RECT *InfoRect); // 0x80031334

extern void MY_PlrStringXY__Fv(); // 0x800319E8

extern void ADD_PlrStringXY__FPCcc(char *pszStr, char col); // 0x80031F34

extern void DrawPlus__Fii(int n, int pnum); // 0x80031FDC

extern void ChrCheckValidButton__Fi(int move); // 0x80032144

extern void DrawArrows__Fv(); // 0x80032218

extern void BuildChr__Fv(); // 0x80032310

extern void DrawChr__Fv(); // 0x800335E8

extern void DrawChrTSK__FP4TASK(struct TASK *T); // 0x80033A40

extern void DrawLevelUpIcon__Fi(int pnum); // 0x80033AF0

extern void CheckChrBtns__Fv(); // 0x80033B84

extern int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c); // 0x80033DE8

extern void RedBack__Fv(); // 0x80033E6C

extern void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright); // 0x80033F54

extern char GetSBookTrans__FiUc(int ii, unsigned char townok); // 0x80033FEC

extern void DrawSpellBook__Fv(); // 0x80034204

extern void CheckSBook__Fv(); // 0x80034B90

extern char * get_pieces_str__Fi(int nGold); // 0x80034DF4

extern void _GLOBAL_.D.fontkern(); // 0x80034E28

extern void _GLOBAL_.I.fontkern(); // 0x80034E50


#endif
