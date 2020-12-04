#ifndef TOWNERS_H
#define TOWNERS_H


extern int GetActiveTowner__Fi(int t); // 0x8003721C

extern void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim); // 0x80037270

extern void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay); // 0x80037290

extern void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp); // 0x800372D8

extern void InitQstSnds__Fi(int i); // 0x80037438

extern void InitSmith__Fv(); // 0x800374F0

extern void InitBarOwner__Fv(); // 0x8003761C

extern void InitTownDead__Fv(); // 0x80037750

extern void InitWitch__Fv(); // 0x80037880

extern void InitBarmaid__Fv(); // 0x800379B0

extern void InitBoy__Fv(); // 0x80037AE0

extern void InitHealer__Fv(); // 0x80037C18

extern void InitTeller__Fv(); // 0x80037D48

extern void InitDrunk__Fv(); // 0x80037E78

extern void InitCows__Fv(); // 0x80037FA8

extern void InitTowners__Fv(); // 0x8003826C

extern void FreeTownerGFX__Fv(); // 0x800382F8

extern void TownCtrlMsg__Fi(int i); // 0x8003839C

extern void TownBlackSmith__Fv(); // 0x800384BC

extern void TownBarOwner__Fv(); // 0x800384F0

extern void TownDead__Fv(); // 0x80038524

extern void TownHealer__Fv(); // 0x8003860C

extern void TownStory__Fv(); // 0x80038634

extern void TownDrunk__Fv(); // 0x8003865C

extern void TownBoy__Fv(); // 0x80038684

extern void TownWitch__Fv(); // 0x800386AC

extern void TownBarMaid__Fv(); // 0x800386D4

extern void TownCow__Fv(); // 0x800386FC

extern void ProcessTowners__Fv(); // 0x80038724

extern struct ItemStruct * PlrHasItem__FiiRi(int pnum, int item, int *i); // 0x80038974

extern void CowSFX__Fi(int pnum); // 0x80038A48

extern void TownerTalk__Fii(int first, int t); // 0x80038B64

extern void TalkToTowner__Fii(int p, int t); // 0x80038BA4


#endif
