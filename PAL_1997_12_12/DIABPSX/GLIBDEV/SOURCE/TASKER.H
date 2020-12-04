#ifndef TASKER_H
#define TASKER_H


extern void DoEpi(struct TASK *T); // 0x8001EC10

extern void DoPro(struct TASK *T); // 0x8001EC60

extern unsigned char TSK_OpenModule(unsigned long MemType); // 0x8001ECB0

extern struct TASK * TSK_AddTask(unsigned long Id, TDRFuncPtr_TSK_AddTask1Main Main, int StackSize, int DataSize); // 0x8001ED24

extern void TSK_DoTasks(); // 0x8001EF0C

extern void TSK_Sleep(int Frames); // 0x8001F0CC

extern void ReturnToSchedulerIfCurrentTask(struct TASK *T); // 0x8001F1A8

extern void TSK_Die(); // 0x8001F230

extern void TSK_Kill(struct TASK *T); // 0x8001F25C

extern struct TASK * TSK_GetFirstActive(); // 0x8001F2AC

extern unsigned char TSK_IsStackCorrupted(struct TASK *T); // 0x8001F2BC

extern void TSK_JumpAndResetStack(TDRFuncPtr_TSK_JumpAndResetStack0RunFunc RunFunc); // 0x8001F338

extern void TSK_RepointProc(struct TASK *T, TDRFuncPtr_TSK_RepointProc1Func Func); // 0x8001F380

extern struct TASK * TSK_GetCurrentTask(); // 0x8001F3C4

extern unsigned char TSK_IsCurrentTask(struct TASK *T); // 0x8001F3D4

extern struct TASK * TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask); // 0x8001F3EC

extern void TSK_SetExecFilter(unsigned long Id, unsigned long Mask); // 0x8001F444

extern void TSK_ClearExecFilter(); // 0x8001F45C

extern int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask); // 0x8001F480

extern void TSK_IterateTasks(unsigned long Id, unsigned long Mask, TDRFuncPtr_TSK_IterateTasks2CallBack CallBack); // 0x8001F580

extern void TSK_MakeTaskInactive(struct TASK *T); // 0x8001F5F8

extern void TSK_MakeTaskActive(struct TASK *T); // 0x8001F60C

extern void TSK_MakeTaskImmortal(struct TASK *T); // 0x8001F620

extern void TSK_MakeTaskMortal(struct TASK *T); // 0x8001F634

extern unsigned char TSK_IsTaskActive(struct TASK *T); // 0x8001F648

extern unsigned char TSK_IsTaskMortal(struct TASK *T); // 0x8001F65C

extern void DetachFromList(struct TASK **Head, struct TASK *ThisObj); // 0x8001F670

extern void AddToList(struct TASK **Head, struct TASK *ThisObj); // 0x8001F6BC

extern void LoTskKill(struct TASK *T); // 0x8001F6DC

extern void ExecuteTask(struct TASK *T); // 0x8001F74C

extern TDRFuncPtr_TSK_SetDoTasksPrologue TSK_SetDoTasksPrologue(TDRFuncPtr_TSK_SetDoTasksPrologue0Func Func); // 0x8001F79C

extern TDRFuncPtr_TSK_SetDoTasksEpilogue TSK_SetDoTasksEpilogue(TDRFuncPtr_TSK_SetDoTasksEpilogue0Func Func); // 0x8001F7B4

extern TDRFuncPtr_TSK_SetTaskPrologue TSK_SetTaskPrologue(TDRFuncPtr_TSK_SetTaskPrologue0Pro Pro); // 0x8001F7CC

extern TDRFuncPtr_TSK_SetTaskEpilogue TSK_SetTaskEpilogue(TDRFuncPtr_TSK_SetTaskEpilogue0Epi Epi); // 0x8001F7E4

extern void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask); // 0x8001F7FC

extern void TSK_ClearEpiProFilter(); // 0x8001F814

extern void TSK_SetExtraStackProtection(unsigned char OnOff); // 0x8001F848

extern TDRFuncPtr_TSK_SetStackFloodCallback TSK_SetStackFloodCallback(TDRFuncPtr_TSK_SetStackFloodCallback0Func Func); // 0x8001F858

extern int TSK_SetExtraStackSize(int Size); // 0x8001F870

extern void ExtraMarkStack(unsigned long *Stack, int SizeLongs); // 0x8001F898

extern int CheckExtraStack(unsigned long *Stack, int LongsToCheck); // 0x8001F8C4


typedef void (*TDRFuncPtr_TSK_AddTask1Main)();

typedef void (*TDRFuncPtr_TSK_IterateTasks2CallBack)();

typedef void (*TDRFuncPtr_TSK_JumpAndResetStack0RunFunc)();

typedef void (*TDRFuncPtr_TSK_RepointProc1Func)();

typedef void (*TDRFuncPtr_TSK_SetDoTasksEpilogue)();

typedef void (*TDRFuncPtr_TSK_SetDoTasksEpilogue0Func)();

typedef void (*TDRFuncPtr_TSK_SetDoTasksPrologue)();

typedef void (*TDRFuncPtr_TSK_SetDoTasksPrologue0Func)();

typedef void (*TDRFuncPtr_TSK_SetStackFloodCallback)();

typedef void (*TDRFuncPtr_TSK_SetStackFloodCallback0Func)();

typedef void (*TDRFuncPtr_TSK_SetTaskEpilogue)();

typedef void (*TDRFuncPtr_TSK_SetTaskEpilogue0Epi)();

typedef void (*TDRFuncPtr_TSK_SetTaskPrologue)();

typedef void (*TDRFuncPtr_TSK_SetTaskPrologue0Pro)();




#endif
