#ifndef FILEIO_H
#define FILEIO_H


extern struct FileIO * __6FileIOUl(struct FileIO *this, unsigned long OurMemId); // 0x8008587C

extern void _._6FileIO(struct FileIO *this, int __in_chrg); // 0x800858CC

extern long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId); // 0x80085920

extern int FileLen__6FileIOPCc(struct FileIO *this, char *Name); // 0x80085A90

extern void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name); // 0x80085AF4

extern void * StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, TDRFuncPtr_StreamFile__6FileIOPCciPFPUciib_bii3Func Func, int Offset, int Size); // 0x80085B14

extern void * ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len); // 0x80085BF4

extern void DumpOldPath__6FileIO(struct FileIO *this); // 0x80085CB8

extern void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path); // 0x80085D1C

extern void * FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa); // 0x80085DF8

extern char * CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src); // 0x80085F0C

extern void LockSearchPath__6FileIO(struct FileIO *this); // 0x80085FB4

extern void UnlockSearchPath__6FileIO(struct FileIO *this); // 0x8008600C

extern void * SearchPathExists__6FileIO(struct FileIO *this); // 0x80086064

extern void * Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len); // 0x80086078


typedef void * (*TDRFuncPtr_StreamFile__6FileIOPCciPFPUciib_bii3Func)();




#endif
