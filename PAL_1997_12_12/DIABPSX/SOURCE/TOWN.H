#ifndef TOWN_H
#define TOWN_H


extern void T_DrawView__Fii(int StartX, int StartY); // 0x8006D060

extern void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, void * AddSec); // 0x8006D1D4

extern void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t); // 0x8006D3CC

extern void T_Pass3__Fv(); // 0x8006D4BC

extern void CreateTown__Fi(int entry); // 0x8006D87C

extern unsigned char * GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len); // 0x8006D9E4

extern void GRL_StripDir__FPcPCc(char *Dest, char *Src); // 0x8006DAC8


#endif
