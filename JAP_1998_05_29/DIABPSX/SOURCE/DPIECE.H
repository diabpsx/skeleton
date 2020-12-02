#ifndef DPIECE_H
#define DPIECE_H


extern void DPIECE_ERROR__Fv(); // 0x800827D8

extern void AllocdPiece__Fv(); // 0x800827E0

extern void FreedPiece__Fv(); // 0x80082838

extern void ConvertdPiece__Fv(); // 0x8008287C

extern short GetDPiece__Fii(int x, int y); // 0x80082A44

extern void SetDPiece__Fiis(int x, int y, short v); // 0x80082ACC

extern void SetdDead__FiiUc(int x, int y, unsigned char v); // 0x80082B60

extern unsigned char GetdDead__Fii(int x, int y); // 0x80082BA0

extern void SetSOLID__Fii(int x, int y); // 0x80082BC8

extern void ClearSOLID__Fii(int x, int y); // 0x80082C54

extern void * GetSOLID__Fii(int x, int y); // 0x80082CE0

extern void SetMISSILE__Fii(int x, int y); // 0x80082D28

extern void ClearMISSILE__Fii(int x, int y); // 0x80082DB4

extern void * GetMISSILE__Fii(int x, int y); // 0x80082E40

extern void SetBLOCK__Fii(int x, int y); // 0x80082E70

extern void ClearBLOCK__Fii(int x, int y); // 0x80082EFC

extern void * GetBLOCK__Fii(int x, int y); // 0x80082F88

extern void SetTRAP__Fii(int x, int y); // 0x80082FB8

extern void ClearTRAP__Fii(int x, int y); // 0x80083044

extern void * GetTRAP__Fii(int x, int y); // 0x800830D0


#endif
