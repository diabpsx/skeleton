#ifndef TICK_H
#define TICK_H


extern void TICK_InitModule(); // 0x80020BEC

extern void TICK_Set(unsigned long Val); // 0x80020C0C

extern unsigned long TICK_Get(); // 0x80020C1C

extern void TICK_Update(); // 0x80020C2C

extern unsigned long TICK_GetAge(unsigned long OldTick); // 0x80020C4C

extern char * TICK_GetDateString(); // 0x80020C78

extern char * TICK_GetTimeString(); // 0x80020C88


#endif
