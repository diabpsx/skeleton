#ifndef PROF_H
#define PROF_H


extern void PROF_Open__Fv(); // 0x80096838

extern void * PROF_State__Fv(); // 0x80096878

extern void PROF_On__Fv(); // 0x80096884

extern void PROF_Off__Fv(); // 0x80096894

extern void PROF_CpuEnd__Fv(); // 0x800968A0

extern void PROF_CpuStart__Fv(); // 0x800968D0

extern void PROF_DrawStart__Fv(); // 0x800968F4

extern void PROF_DrawEnd__Fv(); // 0x80096918

extern void PROF_Draw__FPUl(unsigned long *Ot); // 0x80096948

extern void PROF_Restart__Fv(); // 0x80096B3C


#endif
