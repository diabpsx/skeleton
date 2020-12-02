#ifndef GUTILS_H
#define GUTILS_H


extern unsigned char GU_InitModule(); // 0x80020C98

extern void GU_SetRndSeed(unsigned long *Tab); // 0x80020CC4

extern unsigned long GU_GetRnd(); // 0x80020CF4

extern long GU_GetSRnd(); // 0x80020D84

extern unsigned long GU_GetRndRange(unsigned int Range); // 0x80020DA4

extern unsigned int GU_AlignVal(unsigned int w, unsigned int round); // 0x80020DE0


#endif
