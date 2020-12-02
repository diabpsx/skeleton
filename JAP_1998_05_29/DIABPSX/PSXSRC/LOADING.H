#ifndef LOADING_H
#define LOADING_H


extern void MY_TSK_Sleep__Fi(int time); // 0x800A4524

extern void UPDATEPROGRESS__Fi(int inc); // 0x800A457C

extern void * IsGameLoading__Fv(); // 0x800A4648

extern void DrawCutScreen__Fi(int lev); // 0x800A4654

extern void PutUpCutScreenTSK__FP4TASK(struct TASK *T); // 0x800A4A90

extern void PutUpCutScreen__Fi(int lev); // 0x800A4B58

extern void TakeDownCutScreen__Fv(); // 0x800A4CA8

extern void FinishBootProgress__Fv(); // 0x800A4D4C

extern void FinishProgress__Fv(); // 0x800A4DD8

extern void _GLOBAL_.D.CutScr(); // 0x800A4EB4

extern void _GLOBAL_.I.CutScr(); // 0x800A4EDC


#endif
