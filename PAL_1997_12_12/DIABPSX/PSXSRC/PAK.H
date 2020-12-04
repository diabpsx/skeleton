#ifndef PAK_H
#define PAK_H


extern void fputc__5blockUc(struct block *this, unsigned char Val); // 0x800A0AB4

extern void writeblock__FP5block(struct block *theblock); // 0x800A06EC

extern int PAK_DoPak__FPUcT0i(unsigned char *Dest, unsigned char *buffer, int insize); // 0x800A07D4

extern int PAK_DoUnpak__FPUcT0(unsigned char *Dest, unsigned char *Source); // 0x800A0A14

extern void __PAK_text_objend() ; // 0x800A0ADC


#endif
