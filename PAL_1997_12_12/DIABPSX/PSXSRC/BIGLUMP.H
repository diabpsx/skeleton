#ifndef BIGLUMP_H
#define BIGLUMP_H


extern void BL_InitEAC__Fv(); // 0x80081BE4

extern long BL_ReadFile__FPcUl(char *Name, unsigned long RamId); // 0x80081CD0

extern long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId); // 0x80081DFC

extern void BL_LoadDirectory__Fv(); // 0x80081F70

extern void BL_LoadStreamDir__Fv(); // 0x800820DC

extern struct STRHDR * BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles); // 0x800823BC

extern struct STRHDR * BL_FindStreamFile__FPcc(char *Name, char LumpID); // 0x800824BC

extern void * BL_FileExists__FPcc(char *Name, char LumpID); // 0x80082658

extern int BL_FileLength__FPcc(char *Name, char LumpID); // 0x8008267C

extern void * BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID); // 0x800826B0

extern void * BL_AsyncLoadDone__Fv(); // 0x80082798

extern void BL_AsyncLoadTASK__FP4TASK(struct TASK *T); // 0x800827A4

extern long BL_LoadFileAsync__FPcc(char *Name, char LumpID); // 0x80082810

extern void * BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID); // 0x800829B4

extern struct STRHDR * BL_OpenStreamFile__FPcc(char *Name, char LumpID); // 0x80082A7C

extern void * BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR); // 0x80082AA8


#endif
