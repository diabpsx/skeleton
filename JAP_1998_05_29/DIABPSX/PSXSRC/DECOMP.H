#ifndef DECOMP_H
#define DECOMP_H


extern void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td); // 0x800A4384

extern void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td); // 0x800A4400

extern void DEC_DoDecompRequests__Fv(); // 0x800A4458

extern int FindThisTd__FP7TextDat(struct TextDat *Td); // 0x800A44B4

extern int FindEmptyIndex__Fv(); // 0x800A44EC


#endif
