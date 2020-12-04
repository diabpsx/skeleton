#ifndef PROF_H
#define PROF_H


extern void PROF_Open__Fv(); // 0x8008CFD8

extern void * PROF_State__Fv(); // 0x8008D018

extern void PROF_On__Fv(); // 0x8008D024

extern void PROF_Off__Fv(); // 0x8008D034

extern void PROF_CpuEnd__Fv(); // 0x8008D040

extern void PROF_CpuStart__Fv(); // 0x8008D070

extern void PROF_DrawStart__Fv(); // 0x8008D094

extern void PROF_DrawEnd__Fv(); // 0x8008D0B8

extern void PROF_Draw__FPUl(unsigned long *Ot); // 0x8008D0E8

extern void PROF_Restart__Fv(); // 0x8008D2DC


#endif
