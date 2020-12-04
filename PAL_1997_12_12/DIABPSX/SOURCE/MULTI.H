#ifndef MULTI_H
#define MULTI_H


extern void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen); // 0x8004C190

extern int InitLevelType__Fi(int l); // 0x8004C1BC

extern void SetupLocalCoords__Fv(); // 0x8004C208

extern void InitNewSeed__Fl(long newseed); // 0x8004C398

extern unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram); // 0x8004C40C


#endif
