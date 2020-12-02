#ifndef TASKER_H
#define TASKER_H


extern void DoEpi(struct TASK *T); // 0x8001FEFC

extern void DoPro(struct TASK *T); // 0x8001FF4C

extern unsigned char TSK_OpenModule(unsigned long MemType); // 0x8001FF9C

extern struct TASK * TSK_AddTask(unsigned long Id, TDRFuncPtr_TSK_AddTask1Main Main, int StackSize, int DataSize); // 0x80020010

extern void TSK_DoTasks(); // 0x800201F8

extern void TSK_Sleep(int Frames); // 0x800203B8

extern void ReturnToSchedulerIfCurrentTask(struct TASK *T); // 0x80020494

extern void TSK_Die(); // 0x8002051C

extern void TSK_Kill(struct TASK *T); // 0x80020548

extern struct TASK * TSK_GetFirstActive(); // 0x80020598

extern unsigned char TSK_IsStackCorrupted(struct TASK *T); // 0x800205A8

extern void TSK_JumpAndResetStack(TDRFuncPtr_TSK_JumpAndResetStack0RunFunc RunFunc); // 0x80020624

extern void TSK_RepointProc(struct TASK *T, TDRFuncPtr_TSK_RepointProc1Func Func); // 0x8002066C

extern struct TASK * TSK_GetCurrentTask(); // 0x800206B0

extern unsigned char TSK_IsCurrentTask(struct TASK *T); // 0x800206C0

extern struct TASK * TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask); // 0x800206D8

extern void TSK_SetExecFilter(unsigned long Id, unsigned long Mask); // 0x80020730

extern void TSK_ClearExecFilter(); // 0x80020748

extern int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask); // 0x8002076C

extern void TSK_IterateTasks(unsigned long Id, unsigned long Mask, TDRFuncPtr_TSK_IterateTasks2CallBack CallBack); // 0x8002086C

extern void TSK_MakeTaskInactive(struct TASK *T); // 0x800208E4

extern void TSK_MakeTaskActive(struct TASK *T); // 0x800208F8

extern void TSK_MakeTaskImmortal(struct TASK *T); // 0x8002090C

extern void TSK_MakeTaskMortal(struct TASK *T); // 0x80020920

extern unsigned char TSK_IsTaskActive(struct TASK *T); // 0x80020934

extern unsigned char TSK_IsTaskMortal(struct TASK *T); // 0x80020948

extern void DetachFromList(struct TASK **Head, struct TASK *ThisObj); // 0x8002095C

extern void AddToList(struct TASK **Head, struct TASK *ThisObj); // 0x800209A8

extern void LoTskKill(struct TASK *T); // 0x800209C8

extern void ExecuteTask(struct TASK *T); // 0x80020A38

extern TDRFuncPtr_TSK_SetDoTasksPrologue TSK_SetDoTasksPrologue(TDRFuncPtr_TSK_SetDoTasksPrologue0Func Func); // 0x80020A88

extern TDRFuncPtr_TSK_SetDoTasksEpilogue TSK_SetDoTasksEpilogue(TDRFuncPtr_TSK_SetDoTasksEpilogue0Func Func); // 0x80020AA0

extern TDRFuncPtr_TSK_SetTaskPrologue TSK_SetTaskPrologue(TDRFuncPtr_TSK_SetTaskPrologue0Pro Pro); // 0x80020AB8

extern TDRFuncPtr_TSK_SetTaskEpilogue TSK_SetTaskEpilogue(TDRFuncPtr_TSK_SetTaskEpilogue0Epi Epi); // 0x80020AD0

extern void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask); // 0x80020AE8

extern void TSK_ClearEpiProFilter(); // 0x80020B00

extern void TSK_SetExtraStackProtection(unsigned char OnOff); // 0x80020B34

extern TDRFuncPtr_TSK_SetStackFloodCallback TSK_SetStackFloodCallback(TDRFuncPtr_TSK_SetStackFloodCallback0Func Func); // 0x80020B44

extern int TSK_SetExtraStackSize(int Size); // 0x80020B5C

extern void ExtraMarkStack(unsigned long *Stack, int SizeLongs); // 0x80020B84

extern int CheckExtraStack(unsigned long *Stack, int LongsToCheck); // 0x80020BB0


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
