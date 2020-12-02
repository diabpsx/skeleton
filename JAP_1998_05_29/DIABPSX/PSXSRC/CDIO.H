#ifndef CDIO_H
#define CDIO_H


extern struct CdIO * __4CdIOUl(struct CdIO *this, unsigned long OurMemId); // 0x80086C40

extern void _._4CdIO(struct CdIO *this, int __in_chrg); // 0x80086C84

extern void * FileExists__4CdIOPCc(struct CdIO *this, char *Name); // 0x80086CDC

extern void * LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len); // 0x80086D00

extern int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name); // 0x80086D9C

extern void * LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len); // 0x80086DC0

extern void * CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile); // 0x80086E94

extern void * LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x80086EE4

extern void * LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x8008710C


typedef void * (*TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func)();

typedef void * (*TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func)();




#endif
