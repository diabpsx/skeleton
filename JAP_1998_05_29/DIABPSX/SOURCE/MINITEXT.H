#ifndef MINITEXT_H
#define MINITEXT_H


extern void FreeQuestText__Fv(); // 0x8004D95C

extern void InitQuestText__Fv(); // 0x8004D964

extern void CalcTextSpeed__FPCc(char *Name); // 0x8004D970

extern void FadeMusicTSK__FP4TASK(struct TASK *T); // 0x8004DB2C

extern void InitQTextMsg__Fi(int m); // 0x8004DC78

extern void DrawQTextBack__Fv(); // 0x8004DECC

extern void DrawQTextTSK__FP4TASK(struct TASK *T); // 0x8004E068

extern int KANJI_strlen__FPc(char *str); // 0x8004E350

extern void DrawQText__Fv(); // 0x8004E390

extern void _GLOBAL_.D.QBack(); // 0x8004E93C

extern void _GLOBAL_.I.QBack(); // 0x8004E964


#endif
