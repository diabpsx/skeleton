#ifndef DECOMP_H
#define DECOMP_H


extern void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td); // 0x80099B40

extern void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td); // 0x80099BBC

extern void DEC_DoDecompRequests__Fv(); // 0x80099C14

extern int FindThisTd__FP7TextDat(struct TextDat *Td); // 0x80099C70

extern int FindEmptyIndex__Fv(); // 0x80099CA8


#endif
