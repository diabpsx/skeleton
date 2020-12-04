#ifndef TICK_H
#define TICK_H


extern void TICK_InitModule(); // 0x8001E698

extern void TICK_Set(unsigned long Val); // 0x8001E6B8

extern unsigned long TICK_Get(); // 0x8001E6C8

extern void TICK_Update(); // 0x8001E6D8

extern unsigned long TICK_GetAge(unsigned long OldTick); // 0x8001E6F8

extern char * TICK_GetDateString(); // 0x8001E724

extern char * TICK_GetTimeString(); // 0x8001E734


#endif
