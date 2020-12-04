#ifndef LIGHTING_H
#define LIGHTING_H


extern int veclen2__Fii(int ix, int iy); // 0x80045454

extern void set_light_bands__Fv(); // 0x800454BC

extern void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b); // 0x80045530

extern void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum); // 0x8004559C

extern void DoUnLight__Fv(); // 0x8004624C

extern void DoUnVision__Fiii(int nXPos, int nYPos, int nRadius); // 0x80046490

extern void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible); // 0x80046554

extern void FreeLightTable__Fv(); // 0x80046A64

extern void InitLightTable__Fv(); // 0x80046A6C

extern void MakeLightTable__Fv(); // 0x80046A74

extern void InitLightMax__Fv(); // 0x80046A7C

extern void InitLighting__Fv(); // 0x80046AA0

extern int AddLight__Fiii(int x, int y, int r); // 0x80046AE4

extern void AddUnLight__Fi(int i); // 0x80046B78

extern void ChangeLightRadius__Fii(int i, int r); // 0x80046BA8

extern void ChangeLightXY__Fiii(int i, int x, int y); // 0x80046BD4

extern void light_fix__Fi(int i); // 0x80046C0C

extern void ChangeLightOff__Fiii(int i, int x, int y); // 0x80046C14

extern void ChangeLight__Fiiii(int i, int x, int y, int r); // 0x80046C4C

extern void ChangeLightColour__Fii(int i, int c); // 0x80046C90

extern void ProcessLightList__Fv(); // 0x80046CC0

extern void SavePreLighting__Fv(); // 0x80046DEC

extern void InitVision__Fv(); // 0x80046DF4

extern int AddVision__FiiiUc(int x, int y, int r, unsigned char mine); // 0x80046E44

extern void ChangeVisionRadius__Fii(int id, int r); // 0x80046F48

extern void ChangeVisionXY__Fiii(int id, int x, int y); // 0x80046FFC

extern void ProcessVisionList__Fv(); // 0x800470B4


#endif
