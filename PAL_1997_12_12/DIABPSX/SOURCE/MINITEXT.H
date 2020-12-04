#ifndef MINITEXT_H
#define MINITEXT_H


extern void FreeQuestText__Fv(); // 0x80047314

extern void InitQuestText__Fv(); // 0x8004731C

extern void CalcTextSpeed__FPCc(char *Name); // 0x80047328

extern void InitQTextMsg__Fi(int m); // 0x80047468

extern void DrawQTextBack__Fv(); // 0x8004757C

extern void DrawQTextTSK__FP4TASK(struct TASK *T); // 0x800475EC

extern void DrawQText__Fv(); // 0x800476BC

extern void _GLOBAL_.D.QBack(); // 0x80047A04

extern void _GLOBAL_.I.QBack(); // 0x80047A2C


#endif
