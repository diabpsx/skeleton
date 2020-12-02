#ifndef PCIO_H
#define PCIO_H


extern struct PCIO * __4PCIOUl(struct PCIO *this, unsigned long OurMemId); // 0x800860B4

extern void _._4PCIO(struct PCIO *this, int __in_chrg); // 0x8008611C

extern void * FileExists__4PCIOPCc(struct PCIO *this, char *Name); // 0x80086174

extern void * LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len); // 0x800861B8

extern int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name); // 0x8008627C

extern void * LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len); // 0x80086334

extern void * LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, TDRFuncPtr_LoStreamFile__4PCIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x80086408


typedef void * (*TDRFuncPtr_LoStreamFile__4PCIOPCciPFPUciib_bii3Func)();




#endif
