#ifndef CDIO_H
#define CDIO_H


extern struct CdIO * __4CdIOUl(struct CdIO *this, unsigned long OurMemId); // 0x800814A8

extern void _._4CdIO(struct CdIO *this, int __in_chrg); // 0x800814EC

extern void * FileExists__4CdIOPCc(struct CdIO *this, char *Name); // 0x80081544

extern void * LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len); // 0x80081568

extern int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name); // 0x80081590

extern void * LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len); // 0x800815B4

extern void LoStreamCallBack__Fi(int handle); // 0x80081694

extern void * CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile); // 0x800816A4

extern void * LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x800817F0

extern void * LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x80081AA8


typedef void * (*TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func)();

typedef void * (*TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func)();




#endif
