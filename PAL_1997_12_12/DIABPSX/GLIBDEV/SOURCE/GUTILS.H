#ifndef GUTILS_H
#define GUTILS_H


extern unsigned char GU_InitModule(); // 0x8001E744

extern void GU_SetRndSeed(unsigned long *Tab); // 0x8001E770

extern unsigned long GU_GetRnd(); // 0x8001E7A0

extern long GU_GetSRnd(); // 0x8001E830

extern unsigned long GU_GetRndRange(unsigned int Range); // 0x8001E850

extern unsigned int GU_AlignVal(unsigned int w, unsigned int round); // 0x8001E88C


#endif
