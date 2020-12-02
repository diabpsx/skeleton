#ifndef TRIGS_H
#define TRIGS_H


extern void InitVPTriggers__Fv(); // 0x80075018

extern void * FindLevTrig__Fiii(int x, int y, int l); // 0x80075060

extern void ScanMap__FPsi(short *list, int l); // 0x800750F8

extern int FindBlock__Fii(int x, int y); // 0x80075200

extern void ChangeBlock__Fiii(int x, int y, int bl); // 0x8007529C

extern void ScanBlocks__FPs(short *list); // 0x800753E0

extern void BuildLevTrigs__Fv(); // 0x800754E8

extern void DrawFRIG__Fv(); // 0x8007567C

extern unsigned char ForceTownTrig__Fv(); // 0x8007569C

extern unsigned char ForceL1Trig__Fv(); // 0x80075888

extern unsigned char ForceL2Trig__Fv(); // 0x80075A48

extern unsigned char ForceL3Trig__Fv(); // 0x80075D48

extern unsigned char ForceL4Trig__Fv(); // 0x80076054

extern void Freeupstairs__Fv(); // 0x80076390

extern unsigned char ForceSKingTrig__Fv(); // 0x80076440

extern unsigned char ForceSChambTrig__Fv(); // 0x800764CC

extern unsigned char ForcePWaterTrig__Fv(); // 0x80076558

extern void CheckTrigForce__Fv(); // 0x800765E4

extern void FadeGameOut__Fv(); // 0x800768F0

extern void * IsTrigger__Fii(int x, int y); // 0x80076994

extern void * CheckTrigLevel__Fi(int level); // 0x80076A8C

extern void CheckTriggers__Fi(int pnum); // 0x80076AC8


#endif
