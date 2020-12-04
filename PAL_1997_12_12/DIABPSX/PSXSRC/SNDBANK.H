#ifndef SNDBANK_H
#define SNDBANK_H


extern void SPU_Init__Fv(); // 0x8009001C

extern int SND_FindChannel__Fv(); // 0x800900EC

extern void SND_ClearBank__Fv(); // 0x80090158

extern void * SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, void * LastChunk); // 0x800901D0

extern void SND_LoadBank__Fi(int lvlnum); // 0x80090248

extern int SND_FindSFX__FUs(unsigned short Name); // 0x8009037C

extern void SND_StopSnd__Fi(int voice); // 0x800903D0

extern int SND_RemapSnd__Fi(int SFXNo); // 0x800903F4

extern int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj); // 0x80090458


#endif
