#ifndef PAK_H
#define PAK_H


extern void fputc__5blockUc(struct block *this, unsigned char Val); // 0x800AE364

extern void writeblock__FP5block(struct block *theblock); // 0x800ADF9C

extern int PAK_DoPak__FPUcPCUci(unsigned char *Dest, unsigned char *buffer, int insize); // 0x800AE084

extern int PAK_DoUnpak__FPUcPCUc(unsigned char *Dest, unsigned char *Source); // 0x800AE2C4


#endif
