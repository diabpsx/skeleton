#ifndef GPUQ_H
#define GPUQ_H


extern void CheckMaxArgs__Fv(); // 0x8007BB24

extern unsigned char GPUQ_InitModule__Fv(); // 0x8007BB58

extern void GPUQ_FlushQ__Fv(); // 0x8007BB64

extern void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset); // 0x8007BCD8

extern void GPUQ_DiscardHandle__Fl(long hnd); // 0x8007BD8C

extern void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr); // 0x8007BE2C

extern void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y); // 0x8007BEC8


#endif
