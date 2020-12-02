#ifndef TOWNERS_H
#define TOWNERS_H


extern int GetActiveTowner__Fi(int t); // 0x80039F88

extern void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim); // 0x80039FDC

extern void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay); // 0x80039FFC

extern void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp); // 0x8003A04C

extern void InitQstSnds__Fi(int i); // 0x8003A1A4

extern void InitSmith__Fv(); // 0x8003A264

extern void InitBarOwner__Fv(); // 0x8003A394

extern void InitTownDead__Fv(); // 0x8003A4CC

extern void InitWitch__Fv(); // 0x8003A600

extern void InitBarmaid__Fv(); // 0x8003A734

extern void InitBoy__Fv(); // 0x8003A868

extern void InitHealer__Fv(); // 0x8003A9A4

extern void InitTeller__Fv(); // 0x8003AAD8

extern void InitDrunk__Fv(); // 0x8003AC0C

extern void InitCows__Fv(); // 0x8003AD40

extern void InitTowners__Fv(); // 0x8003AFD8

extern void FreeTownerGFX__Fv(); // 0x8003B064

extern void TownCtrlMsg__Fi(int i); // 0x8003B108

extern void TownBlackSmith__Fv(); // 0x8003B1F0

extern void TownBarOwner__Fv(); // 0x8003B27C

extern void TownDead__Fv(); // 0x8003B318

extern void TownHealer__Fv(); // 0x8003B400

extern void TownStory__Fv(); // 0x8003B428

extern void TownDrunk__Fv(); // 0x8003B450

extern void TownBoy__Fv(); // 0x8003B478

extern void TownWitch__Fv(); // 0x8003B4A0

extern void TownBarMaid__Fv(); // 0x8003B4C8

extern void TownCow__Fv(); // 0x8003B4F0

extern void ProcessTowners__Fv(); // 0x8003B518

extern struct ItemStruct * PlrHasItem__FiiRi(int pnum, int item, int *i); // 0x8003B768

extern void CowSFX__Fi(int pnum); // 0x8003B83C

extern void TownerTalk__Fii(int first, int t); // 0x8003B958

extern void TalkToTowner__Fii(int p, int t); // 0x8003B998


#endif
