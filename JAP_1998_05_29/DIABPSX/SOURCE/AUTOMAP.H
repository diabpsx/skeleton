#ifndef AUTOMAP_H
#define AUTOMAP_H


extern void StartAutomap__Fv(); // 0x80161F58

extern void AutomapUp__Fv(); // 0x80161F68

extern void AutomapDown__Fv(); // 0x80161F88

extern void AutomapLeft__Fv(); // 0x80161FA8

extern void AutomapRight__Fv(); // 0x80161FC8

extern struct LINE_F2 * AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B); // 0x80161FE8

extern void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum); // 0x801620A0

extern void DrawAutomapPlr__Fv(); // 0x80162124

extern void DrawAutoMapVertDoor__Fii(int X, int Y); // 0x80162490

extern void DrawAutoMapHorzDoor__Fii(int X, int Y); // 0x8016264C

extern void DrawAutoMapVertGrate__Fii(int X, int Y); // 0x8016280C

extern void DrawAutoMapHorzGrate__Fii(int X, int Y); // 0x801628A4

extern void DrawAutoMapSquare__Fii(int X, int Y); // 0x8016293C

extern void DrawVertArch__Fii(int X, int Y); // 0x80162A70

extern void DrawHorzArch__Fii(int X, int Y); // 0x80162BA4

extern void DrawAutoMapStairs__Fii(int X, int Y); // 0x80162CD8

extern void DrawAutomap__Fv(); // 0x80162E50


#endif
