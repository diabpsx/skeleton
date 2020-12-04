#ifndef TMALLOC_H
#define TMALLOC_H


extern void * Tmalloc__Fi(int MemSize); // 0x80082BB4

extern void Tfree__FPv(void *Addr); // 0x80082CD8

extern void InitTmalloc__Fv(); // 0x80082D88

extern void strupr__FPc(char *Buffa); // 0x80082DB0


#endif
