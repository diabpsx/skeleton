#ifndef LIGHTING_H
#define LIGHTING_H


extern int veclen2__Fii(int ix, int iy); // 0x8004BC68

extern void set_light_bands__Fv(); // 0x8004BCD0

extern void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b); // 0x8004BD40

extern void SetWeirdFX__Fv(); // 0x8004BDAC

extern void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum); // 0x8004BE20

extern void DoUnLight__Fv(); // 0x8004CAF4

extern void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num); // 0x8004CD38

extern void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible); // 0x8004CE40

extern void FreeLightTable__Fv(); // 0x8004D268

extern void InitLightTable__Fv(); // 0x8004D270

extern void MakeLightTable__Fv(); // 0x8004D278

extern void InitLightMax__Fv(); // 0x8004D280

extern void InitLighting__Fv(); // 0x8004D2A4

extern int AddLight__Fiii(int x, int y, int r); // 0x8004D2E8

extern void AddUnLight__Fi(int i); // 0x8004D340

extern void ChangeLightRadius__Fii(int i, int r); // 0x8004D364

extern void ChangeLightXY__Fiii(int i, int x, int y); // 0x8004D384

extern void light_fix__Fi(int i); // 0x8004D3B0

extern void ChangeLightOff__Fiii(int i, int x, int y); // 0x8004D3B8

extern void ChangeLight__Fiiii(int i, int x, int y, int r); // 0x8004D3E0

extern void ChangeLightColour__Fii(int i, int c); // 0x8004D40C

extern void ProcessLightList__Fv(); // 0x8004D434

extern void SavePreLighting__Fv(); // 0x8004D54C

extern void InitVision__Fv(); // 0x8004D554

extern int AddVision__FiiiUc(int x, int y, int r, unsigned char mine); // 0x8004D5A8

extern void ChangeVisionRadius__Fii(int id, int r); // 0x8004D61C

extern void ChangeVisionXY__Fiii(int id, int x, int y); // 0x8004D6D0

extern void ProcessVisionList__Fv(); // 0x8004D754


#endif
