#ifndef TOWN_H
#define TOWN_H


extern void T_DrawView__Fii(int StartX, int StartY); // 0x80074478

extern void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, void * AddSec); // 0x80074628

extern void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t); // 0x8007486C

extern void TownFixupBodges__Fv(); // 0x8007497C

extern void T_Pass3__Fv(); // 0x800749BC

extern void CreateTown__Fi(int entry); // 0x80074D48

extern unsigned char * GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len); // 0x80074E9C

extern void GRL_StripDir__FPcPCc(char *Dest, char *Src); // 0x80074F80


#endif
