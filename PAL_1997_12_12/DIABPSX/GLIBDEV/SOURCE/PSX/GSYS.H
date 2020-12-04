#ifndef GSYS_H
#define GSYS_H


extern struct MEM_INFO * GSYS_GetWorkMemInfo(); // 0x8001F900

extern void GSYS_SetStackAndJump(void *Stack, TDRFuncPtr_GSYS_SetStackAndJump1Func Func, void *Param); // 0x8001F910

extern void GSYS_MarkStack(void *Stack, unsigned long StackSize); // 0x8001F94C

extern unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize); // 0x8001F95C

extern unsigned char GSYS_InitMachine(); // 0x8001F974

extern unsigned char GSYS_CheckPtr(void *Ptr); // 0x8001F9C8

extern unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize); // 0x8001F9FC


typedef void (*TDRFuncPtr_GSYS_SetStackAndJump1Func)();




#endif
