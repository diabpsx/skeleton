#ifndef FILEIO_H
#define FILEIO_H


extern struct FileIO * __6FileIOUl(struct FileIO *this, unsigned long OurMemId); // 0x8007CDD0

extern void _._6FileIO(struct FileIO *this, int __in_chrg); // 0x8007CE20

extern long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId); // 0x8007CE74

extern int FileLen__6FileIOPCc(struct FileIO *this, char *Name); // 0x8007CFDC

extern void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name); // 0x8007D040

extern void * StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, TDRFuncPtr_StreamFile__6FileIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x8007D060

extern void * ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len); // 0x8007D140

extern void DumpOldPath__6FileIO(struct FileIO *this); // 0x8007D204

extern void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path); // 0x8007D268

extern void * FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa); // 0x8007D344

extern char * CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src); // 0x8007D458

extern void LockSearchPath__6FileIO(struct FileIO *this); // 0x8007D500

extern void UnlockSearchPath__6FileIO(struct FileIO *this); // 0x8007D558

extern void * SearchPathExists__6FileIO(struct FileIO *this); // 0x8007D5B0

extern void * Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len); // 0x8007D5C4


typedef void * (*TDRFuncPtr_StreamFile__6FileIOPCciPFPUciib_bii3Func)();




#endif
