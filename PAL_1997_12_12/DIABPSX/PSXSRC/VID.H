#ifndef VID_H
#define VID_H


extern void VID_AfterDisplay__Fv(); // 0x8007C788

extern void VID_ScrOn__Fv(); // 0x8007C7A8

extern void VID_DoThisNextSync__FPFv_v(TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func Func); // 0x8007C7D0

extern unsigned char VID_NextSyncRoutHasExecuted__Fv(); // 0x8007C828

extern unsigned long VID_GetTick__Fv(); // 0x8007C834

extern void VID_DispEnvSend(); // 0x8007C840

extern void VID_SetXYOff__Fii(int x, int y); // 0x8007C87C

extern int VID_GetXOff__Fv(); // 0x8007C88C

extern int VID_GetYOff__Fv(); // 0x8007C898

extern void VID_SetDBuffer__Fb(void * DBuf); // 0x8007C8A4


typedef void (*TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func)();




#endif
