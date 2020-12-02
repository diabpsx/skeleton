#ifndef SNDBANK_H
#define SNDBANK_H


extern void SND_Monitor__FP4TASK(struct TASK *T); // 0x8009A198

extern void SPU_OnceOnlyInit__Fv(); // 0x8009A224

extern void SPU_Init__Fv(); // 0x8009A25C

extern int SND_FindChannel__Fv(); // 0x8009A364

extern void SND_ClearBank__Fv(); // 0x8009A3D0

extern void * SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, void * LastChunk); // 0x8009A440

extern void SND_LoadBank__Fi(int lvlnum); // 0x8009A4B8

extern int SND_FindSFX__FUs(unsigned short Name); // 0x8009A5DC

extern void SND_StopSnd__Fi(int voice); // 0x8009A6B8

extern void * SND_IsSfxPlaying__Fi(int SFXNo); // 0x8009A6EC

extern int SND_RemapSnd__Fi(int SFXNo); // 0x8009A728

extern int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj); // 0x8009A79C


#endif
