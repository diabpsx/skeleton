#ifndef GENDUNG_H
#define GENDUNG_H


extern void FillSolidBlockTbls__Fv(); // 0x80159EDC

extern void SetDungeonMicros__Fv(); // 0x8015A068

extern void DRLG_InitTrans__Fv(); // 0x8015A070

extern void DRLG_RectTrans__Fiiii(int x1, int y1, int x2, int y2); // 0x8015A0E4

extern void DRLG_CopyTrans__Fiiii(int sx, int sy, int dx, int dy); // 0x8015A158

extern void DRLG_ListTrans__FiPUc(int num, unsigned char *List); // 0x8015A1A0

extern void DRLG_AreaTrans__FiPUc(int num, unsigned char *List); // 0x8015A214

extern void DRLG_InitSetPC__Fv(); // 0x8015A2A4

extern void DRLG_SetPC__Fv(); // 0x8015A2BC

extern void Make_SetPC__Fiiii(int x, int y, int w, int h); // 0x8015A35C

extern unsigned char DRLG_WillThemeRoomFit__FiiiiiPiT5(int floor, int x, int y, int minSize, int maxSize, int *width, int *height); // 0x8015A3EC

extern void DRLG_CreateThemeRoom__Fi(int themeIndex); // 0x8015A6B4

extern void DRLG_PlaceThemeRooms__FiiiiUc(int minSize, int maxSize, int floor, int freq, int rndSize); // 0x8015B6B8

extern void DRLG_HoldThemeRooms__Fv(); // 0x8015B958

extern unsigned char SkipThemeRoom__Fii(int x, int y); // 0x8015BAFC

extern void InitLevels__Fv(); // 0x8015BBC8


#endif
