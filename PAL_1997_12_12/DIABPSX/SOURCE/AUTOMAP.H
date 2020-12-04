#ifndef AUTOMAP_H
#define AUTOMAP_H


extern void StartAutomap__Fv(); // 0x8015DE38

extern void AutomapUp__Fv(); // 0x8015DE50

extern void AutomapDown__Fv(); // 0x8015DE68

extern void AutomapLeft__Fv(); // 0x8015DE80

extern void AutomapRight__Fv(); // 0x8015DE98

extern struct LINE_F2 * AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B); // 0x8015DEB0

extern void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1); // 0x8015DF5C

extern void AmDrawPlayer__Fiiii(int x0, int y0, int x1, int y1); // 0x8015DFC4

extern void DrawAutomapPlr__Fv(); // 0x8015E02C

extern void DrawAutoMapVertWall__Fiii(int X, int Y, int Length); // 0x8015E3B0

extern void DrawAutoMapHorzWall__Fiii(int X, int Y, int Length); // 0x8015E484

extern void DrawAutoMapVertDoor__Fii(int X, int Y); // 0x8015E558

extern void DrawAutoMapHorzDoor__Fii(int X, int Y); // 0x8015E72C

extern void DrawAutoMapVertGrate__Fii(int X, int Y); // 0x8015E904

extern void DrawAutoMapHorzGrate__Fii(int X, int Y); // 0x8015E9B8

extern void DrawAutoMapSquare__Fii(int X, int Y); // 0x8015EA6C

extern void DrawAutoMapStairs__Fii(int X, int Y); // 0x8015EBB4

extern void DrawAutomap__Fv(); // 0x8015EDB4


#endif
