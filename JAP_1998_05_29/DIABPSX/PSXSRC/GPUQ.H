#ifndef GPUQ_H
#define GPUQ_H


extern void CheckMaxArgs__Fv(); // 0x800833B0

extern unsigned char GPUQ_InitModule__Fv(); // 0x800833E4

extern void GPUQ_FlushQ__Fv(); // 0x800833F0

extern void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset); // 0x80083564

extern void GPUQ_DiscardHandle__Fl(long hnd); // 0x80083618

extern void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr); // 0x800836B8

extern void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y); // 0x80083754


#endif
