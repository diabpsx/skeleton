#ifndef MULTI_H
#define MULTI_H


extern void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen); // 0x80052BA4

extern int InitLevelType__Fi(int l); // 0x80052BD0

extern void SetupLocalCoords__Fv(); // 0x80052C1C

extern void InitNewSeed__Fl(long newseed); // 0x80052D7C

extern unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram); // 0x80052DF0


#endif
