#ifndef VID_H
#define VID_H


extern void VID_AfterDisplay__Fv(); // 0x80084030

extern void VID_ScrOn__Fv(); // 0x80084058

extern void VID_DoThisNextSync__FPFv_v(TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func Func); // 0x80084094

extern unsigned char VID_NextSyncRoutHasExecuted__Fv(); // 0x800840EC

extern unsigned long VID_GetTick__Fv(); // 0x800840F8

extern void VID_DispEnvSend(); // 0x80084104

extern void VID_SetXYOff__Fii(int x, int y); // 0x8008415C

extern int VID_GetXOff__Fv(); // 0x8008416C

extern int VID_GetYOff__Fv(); // 0x80084178

extern void * VID_IsDbuffer__Fv(); // 0x80084184

extern void VID_SetDBuffer__Fb(void * DBuf); // 0x80084190


typedef void (*TDRFuncPtr_VID_DoThisNextSync__FPFv_v0Func)();




#endif
