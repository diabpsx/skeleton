#ifndef TRIGS_H
#define TRIGS_H


extern unsigned char ForceTownTrig__Fv(); // 0x8006DB60

extern unsigned char ForceL1Trig__Fv(); // 0x8006DE78

extern unsigned char ForceL2Trig__Fv(); // 0x8006E128

extern unsigned char ForceL3Trig__Fv(); // 0x8006E588

extern unsigned char ForceL4Trig__Fv(); // 0x8006EA04

extern void Freeupstairs__Fv(); // 0x8006EF10

extern unsigned char ForceSKingTrig__Fv(); // 0x8006EFD0

extern unsigned char ForceSChambTrig__Fv(); // 0x8006F0C4

extern unsigned char ForcePWaterTrig__Fv(); // 0x8006F1B8

extern void CheckTrigForce__Fv(); // 0x8006F2AC

extern void FadeGameOut__Fv(); // 0x8006F5C8

extern void * IsTrigger__Fii(int x, int y); // 0x8006F664

extern void CheckTriggers__Fi(int pnum); // 0x8006F6C8


#endif
