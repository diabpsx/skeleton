#ifndef OBJPRINT_H
#define OBJPRINT_H


extern struct POLY_FT4 * DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos, int XOffSet, int YOffSet); // 0x8007D9E8

extern struct POLY_FT4 * LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007DB7C

extern struct POLY_FT4 * PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007DC40

extern void ResetFlames__Fv(); // 0x8007DD08

extern void PrintOBJ_FIRE__Fiii(int ScrX, int ScrY, int OtPos); // 0x8007DDD0

extern struct POLY_FT4 * DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007DF88

extern void DrawLightSpark__Fiii(int xo, int yo, int ot); // 0x8007E1C4

extern struct POLY_FT4 * PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E2A4

extern void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos); // 0x8007E304

extern struct POLY_FT4 * PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E398

extern struct POLY_FT4 * PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E41C

extern struct POLY_FT4 * PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E4A0

extern struct POLY_FT4 * PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E52C

extern struct POLY_FT4 * PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E5B8

extern struct POLY_FT4 * PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E710

extern struct POLY_FT4 * PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E7E8

extern struct POLY_FT4 * PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E8C0

extern struct POLY_FT4 * PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007E8E4

extern struct POLY_FT4 * PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007EA80

extern struct POLY_FT4 * PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007EC08

extern struct POLY_FT4 * PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007EC2C

extern struct POLY_FT4 * PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007EC50

extern struct POLY_FT4 * PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007EC74

extern struct POLY_FT4 * PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos); // 0x8007ECB0


#endif
