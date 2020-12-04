#ifndef GWIN_H
#define GWIN_H


extern void GRL_InitGwin__Fv(); // 0x80073684

extern TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul GRL_SetWindowProc__FPFUlUilUl_Ul(TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc NewProc); // 0x80073690

extern void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp); // 0x800736A0

extern unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam); // 0x800736C8

extern char * Msg2Txt__Fi(int Msg); // 0x80073774


typedef unsigned long (*TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul)();

typedef unsigned long (*TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc)();




#endif
