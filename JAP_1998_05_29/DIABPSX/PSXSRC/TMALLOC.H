#ifndef TMALLOC_H
#define TMALLOC_H


extern void * Tmalloc__Fi(int MemSize); // 0x800882A8

extern void Tfree__FPv(void *Addr); // 0x8008839C

extern void InitTmalloc__Fv(); // 0x8008844C

extern void strupr__FPc(char *Buffa); // 0x80088474


#endif
