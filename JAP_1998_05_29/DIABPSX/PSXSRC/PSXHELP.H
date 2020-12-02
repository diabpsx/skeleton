#ifndef PSXHELP_H
#define PSXHELP_H


extern void RemoveHelp__Fv(); // 0x800AE38C

extern void HelpPad__Fv(); // 0x800AE3A0

extern int GetControlKey__FiPb(int str, void * *iscombo); // 0x800AE648

extern void InitHelp__Fv(); // 0x800AE6F0

extern int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp); // 0x800AE73C

extern void DisplayHelp__Fv(); // 0x800AE950

extern void DrawHelp__Fv(); // 0x800AECD0

extern void _GLOBAL_.D.DrawHelp__Fv(); // 0x800AEF48

extern void _GLOBAL_.I.DrawHelp__Fv(); // 0x800AEF88


#endif
