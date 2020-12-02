#ifndef GSYS_H
#define GSYS_H


extern struct MEM_INFO * GSYS_GetWorkMemInfo(); // 0x8002116C

extern void GSYS_SetStackAndJump(void *Stack, TDRFuncPtr_GSYS_SetStackAndJump1Func Func, void *Param); // 0x8002117C

extern void GSYS_MarkStack(void *Stack, unsigned long StackSize); // 0x800211B8

extern unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize); // 0x800211C8

extern unsigned char GSYS_InitMachine(); // 0x800211E0

extern unsigned char GSYS_CheckPtr(void *Ptr); // 0x80021234

extern unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize); // 0x80021268


typedef void (*TDRFuncPtr_GSYS_SetStackAndJump1Func)();




#endif
