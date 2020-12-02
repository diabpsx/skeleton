#ifndef CONTROL_H
#define CONTROL_H


extern unsigned char TrimCol__Fs(short col); // 0x8003017C

extern void DrawSpellCel__FllUclUcc(long xp, long yp, unsigned char Trans, long nCel, int w, int sel); // 0x800301B4

extern void SetSpellTrans__Fc(char t); // 0x80030D38

extern void DrawSpellBookTSK__FP4TASK(struct TASK *T); // 0x80030D44

extern void DrawSpeedSpellTSK__FP4TASK(struct TASK *T); // 0x80030ED4

extern void ToggleSpell__Fi(int pnum); // 0x80031004

extern void DrawSpellList__Fv(); // 0x800310B8

extern void SetSpell__Fi(int pnum); // 0x80031D54

extern void AddPanelString__FPCci(char *str, int just); // 0x80031E60

extern void ClearPanel__Fv(); // 0x80031F20

extern void InitPanelStr__Fv(); // 0x80031F50

extern void InitControlPan__Fv(); // 0x80031F70

extern void DrawCtrlPan__Fv(); // 0x8003219C

extern void DoAutoMap__Fv(); // 0x800321C8

extern void CheckPanelInfo__Fv(); // 0x80032228

extern void FreeControlPan__Fv(); // 0x80032948

extern int CPrintString__FiPci(int No, char *pszStr, int Just); // 0x80032A58

extern void PrintInfo__Fv(); // 0x80032B74

extern void DrawInfoBox__FP4RECT(struct RECT *InfoRect); // 0x80032FA4

extern void MY_PlrStringXY__Fv(); // 0x800336D8

extern void ADD_PlrStringXY__FPCcc(char *pszStr, char col); // 0x80033DE8

extern void DrawPlus__Fii(int n, int pnum); // 0x80033E90

extern void ChrCheckValidButton__Fi(int move); // 0x80034028

extern void DrawArrows__Fv(); // 0x80034334

extern void BuildChr__Fv(); // 0x80034434

extern void DrawChr__Fv(); // 0x80035698

extern void DrawChrTSK__FP4TASK(struct TASK *T); // 0x80035B48

extern void DrawLevelUpIcon__Fi(int pnum); // 0x80035C58

extern void CheckChrBtns__Fv(); // 0x80035CEC

extern int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c); // 0x80036074

extern void RedBack__Fv(); // 0x800360F8

extern void PrintSBookStr__FiiiPCcUcUc(int x, int y, int cspel, char *pszStr, int bright, int Staff); // 0x800361F0

extern char GetSBookTrans__FiUc(int ii, unsigned char townok); // 0x80036478

extern void DrawSpellBook__Fb(void * DrawBg); // 0x800366D8

extern void CheckSBook__Fv(); // 0x80037280

extern char * get_pieces_str__Fi(int nGold); // 0x8003751C

extern void _GLOBAL_.D.DrawLevelUpFlag(); // 0x80037550

extern void _GLOBAL_.I.DrawLevelUpFlag(); // 0x80037578


#endif
