#ifndef LOADING_H
#define LOADING_H


extern void UPDATEPROGRESS__Fi(int inc); // 0x80099CE0

extern void * IsGameLoading__Fv(); // 0x80099D40

extern void PutUpCutScreenTSK__FP4TASK(struct TASK *T); // 0x80099D4C

extern void PutUpCutScreen__Fi(int lev); // 0x8009A1B4

extern void TakeDownCutScreen__Fv(); // 0x8009A264

extern void FinishProgress__Fv(); // 0x8009A2F0

extern void _GLOBAL_.D.UPDATEPROGRESS__Fi(); // 0x8009A3BC

extern void _GLOBAL_.I.UPDATEPROGRESS__Fi(); // 0x8009A3F4


#endif
