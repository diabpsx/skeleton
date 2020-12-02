#ifndef BIGLUMP_H
#define BIGLUMP_H


extern void BL_InitEAC__Fv(); // 0x8008725C

extern long BL_ReadFile__FPcUl(char *Name, unsigned long RamId); // 0x80087354

extern long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId); // 0x8008746C

extern void BL_LoadDirectory__Fv(); // 0x800875CC

extern void BL_LoadStreamDir__Fv(); // 0x800876F4

extern struct STRHDR * BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles); // 0x80087984

extern struct STRHDR * BL_FindStreamFile__FPcc(char *Name, char LumpID); // 0x80087A6C

extern void * BL_FileExists__FPcc(char *Name, char LumpID); // 0x80087BF8

extern int BL_FileLength__FPcc(char *Name, char LumpID); // 0x80087C34

extern void * BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID); // 0x80087CB4

extern void * BL_AsyncLoadDone__Fv(); // 0x80087E1C

extern void BL_WaitForAsyncFinish__Fv(); // 0x80087E28

extern void BL_AsyncLoadCallBack__Fi(int ah); // 0x80087E6C

extern long BL_LoadFileAsync__FPcc(char *Name, char LumpID); // 0x80087ED0

extern void * BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID); // 0x80088084

extern struct STRHDR * BL_OpenStreamFile__FPcc(char *Name, char LumpID); // 0x800881A0

extern void * BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR); // 0x800881CC


#endif
