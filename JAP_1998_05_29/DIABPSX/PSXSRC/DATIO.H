#ifndef DATIO_H
#define DATIO_H


extern struct DatIO * __5DatIOUl(struct DatIO *this, unsigned long OurMemId); // 0x80086744

extern void _._5DatIO(struct DatIO *this, int __in_chrg); // 0x80086780

extern void * FileExists__5DatIOPCc(struct DatIO *this, char *Name); // 0x800867D8

extern void * LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len); // 0x80086818

extern int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name); // 0x800868D8

extern void * LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len); // 0x8008698C

extern void * LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, TDRFuncPtr_LoStreamFile__5DatIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x80086A34


typedef void * (*TDRFuncPtr_LoStreamFile__5DatIOPCciPFPUciib_bii3Func)();




#endif
