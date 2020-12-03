#include "THISDUST.H"
#include "TASKER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DoEpi(struct TASK *T /*$a1*/)
 // line 88, offset 0x8001fefc
	/* begin block 1 */
		// Start line: 176
	/* end block 1 */
	// End Line: 177

void DoEpi(TASK *T)

{
	if ((EpiFunc != (code *)0x0) && ((T->Id & EpiProMask) == EpiProId)) {
		(*EpiFunc)(T);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoPro(struct TASK *T /*$a1*/)
 // line 99, offset 0x8001ff4c
	/* begin block 1 */
		// Start line: 199
	/* end block 1 */
	// End Line: 200

void DoPro(TASK *T)

{
	if ((ProFunc != (code *)0x0) && ((T->Id & EpiProMask) == EpiProId)) {
		(*ProFunc)(T);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TSK_OpenModule(unsigned long MemType /*$a0*/)
 // line 115, offset 0x8001ff9c
	/* begin block 1 */
		// Start line: 232
	/* end block 1 */
	// End Line: 233

uchar TSK_OpenModule(ulong MemType)

{
	TasksActive = 0;
	ActiveTasks = (TASK *)0x0;
	CurrentTask = (TASK *)0x0;
	MemTypeForTasker = MemType;
	TSK_ClearExecFilter();
	TSK_ClearEpiProFilter();
	TSK_SetDoTasksEpilogue((TDRFuncPtr_TSK_SetDoTasksEpilogue0Func)0x0);
	TSK_SetDoTasksPrologue((TDRFuncPtr_TSK_SetDoTasksPrologue0Func)0x0);
	TSK_SetExtraStackProtection('\0');
	TSK_SetStackFloodCallback((TDRFuncPtr_TSK_SetStackFloodCallback0Func)0x0);
	TSK_SetExtraStackSize(0x1000);
	return '\x01';
}



// decompiled code
// original method signature: 
// struct TASK * /*$ra*/ TSK_AddTask(unsigned long Id /*$s2*/, TDRFuncPtr_TSK_AddTask1Main Main /*$s3*/, int StackSize /*$a2*/, int DataSize /*$s4*/)
 // line 141, offset 0x80020010
	/* begin block 1 */
		// Start line: 142
		// Start offset: 0x80020010
		// Variables:
	// 		struct TASK *RetTask; // $s0
	// 		long hndTask; // $s1
	// 		struct GAL_STRUCT G[4]; // stack offset -56
	/* end block 1 */
	// End offset: 0x800201D4
	// End Line: 212

	/* begin block 2 */
		// Start line: 284
	/* end block 2 */
	// End Line: 285

TASK * TSK_AddTask(ulong Id,TDRFuncPtr_TSK_AddTask1Main Main,int StackSize,int DataSize)

{
	long Handle;
	TASK *ThisObj;
	uint uVar1;
	GAL_STRUCT local_38;
	int local_30;
	int local_2c;
	int local_28;
	int local_24;
	undefined4 local_20;
	int local_1c;
	
	local_38.OriginalSize = 0x5c;
	local_28 = StackSize;
	if (ExtraStackProtection != '\0') {
		local_28 = StackSize + ExtraStackSizeLongs * 4;
	}
	local_20 = 0xffffffff;
	local_30 = DataSize;
	Handle = GAL_AllocMultiStruct(&local_38,MemTypeForTasker,&DAT_8010e728);
	ThisObj = (TASK *)0x0;
	if ((Handle != -1) && (ThisObj = (TASK *)GAL_Lock(Handle), ThisObj != (TASK *)0x0)) {
		uVar1 = ThisObj->fToInit;
		ThisObj->Id = Id;
		*(TDRFuncPtr_TSK_AddTask1Main *)(ThisObj->TskEnv + 8) = Main;
		ThisObj->TskEnv[9] = Handle;
		ThisObj->fToInit = uVar1 & 0xfffffffd | 0xd;
		ThisObj->fToDie = (int)&ThisObj->Next + local_24;
		ThisObj->fKillable = local_1c - local_24;
		if (DataSize == 0) {
			ThisObj->fActive = 0;
		}
		else {
			ThisObj->fActive = (int)&ThisObj->Next + local_2c;
		}
		ThisObj->fToInit = ThisObj->fToInit & 0xffffffef | ((uint)ExtraStackProtection & 1) << 4;
		uVar1 = ThisObj->fToInit;
		ThisObj->SleepTime = 1;
		*(undefined2 *)(ThisObj->TskEnv + 10) = (undefined2)ExtraStackSizeLongs;
		if ((uVar1 & 0x10) == 0) {
			GSYS_MarkStack((void *)ThisObj->fToDie,ThisObj->fKillable);
		}
		else {
			ExtraMarkStack((ulong *)ThisObj->fToDie,ThisObj->fKillable >> 2);
		}
		if (CurrentTask == (TASK *)0x0) {
			AddToList(&ActiveTasks,ThisObj);
		}
		else {
			AddToList((TASK **)CurrentTask,ThisObj);
			ThisObj->Prev = CurrentTask;
		}
		TasksActive = TasksActive + 1;
	}
	return ThisObj;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_DoTasks()
 // line 218, offset 0x800201f8
	/* begin block 1 */
		// Start line: 219
		// Start offset: 0x800201F8

		/* begin block 1.1 */
			// Start line: 254
			// Start offset: 0x80020310
			// Variables:
		// 		struct TASK *NextT; // $s0
		/* end block 1.1 */
		// End offset: 0x80020338
		// End Line: 264
	/* end block 1 */
	// End offset: 0x800203A4
	// End Line: 278

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TSK_DoTasks(void)

{
	ulong *puVar1;
	ulong *puVar2;
	ulong uVar3;
	int iVar4;
	TASK *Param;
	
	T = ActiveTasks;
	Param = T;
	if (DoTasksPrologue != (code *)0x0) {
		(*DoTasksPrologue)();
		Param = T;
	}
	while( true ) {
		while( true ) {
			while( true ) {
				while( true ) {
					T = Param;
					Param = T;
					if (T == (TASK *)0x0) {
						if (DoTasksEpilogue != (code *)0x0) {
							(*DoTasksEpilogue)();
						}
						CurrentTask = (TASK *)0x0;
						return;
					}
					if (((T->fToInit & 8) != 0) && ((T->Id & ExecMask) == ExecId)) break;
					Param = T->Next;
				}
				uVar3 = T->SleepTime - 1;
				T->SleepTime = uVar3;
				if (uVar3 == 0) break;
				Param = Param->Next;
			}
			iVar4 = setjmp((__jmp_buf_tag *)SchEnv);
			if (iVar4 == 0) break;
			Param = T->Next;
			if ((T->fToInit & 2) != 0) {
				LoTskKill(T);
			}
		}
		CurrentTask = T;
		DoPro(T);
		Param = T;
		if ((T->fToInit & 1) == 0) break;
		puVar1 = &T->fToDie;
		puVar2 = &T->fKillable;
		T->fToInit = T->fToInit & 0xfffffffe;
		GSYS_SetStackAndJump((void *)(*puVar1 + *puVar2 + -0x10),ExecuteTask,Param);
		Param = T;
	}
										/* WARNING: Subroutine does not return */
	longjmp((__jmp_buf_tag *)&T->fXtraStack,1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_Sleep(int Frames /*stack -24*/)
 // line 287, offset 0x800203b8
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x800203B8
		// Variables:
	// 		struct TASK *T; // stack offset -16
	/* end block 1 */
	// End offset: 0x80020484
	// End Line: 314

	/* begin block 2 */
		// Start line: 612
	/* end block 2 */
	// End Line: 613

void TSK_Sleep(int Frames)

{
	TASK *T;
	TASK *T_00;
	uchar uVar1;
	int iVar2;
	
	T = CurrentTask;
	if (CurrentTask == (TASK *)0x0) {
		DBG_Error((char *)0x0,"source/tasker.c",0x125);
	}
	uVar1 = TSK_IsStackCorrupted(T);
	if (uVar1 != '\0') {
		if (StackFloodCallback == (code *)0x0) {
			DBG_Error((char *)0x0,"source/tasker.c",300);
		}
		else {
			(*StackFloodCallback)(T);
		}
	}
	DoEpi(T);
	iVar2 = setjmp((__jmp_buf_tag *)&T->fXtraStack);
	T_00 = CurrentTask;
	if (iVar2 == 0) {
		T->SleepTime = Frames;
		ReturnToSchedulerIfCurrentTask(T_00);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReturnToSchedulerIfCurrentTask(struct TASK *T /*$s0*/)
 // line 321, offset 0x80020494
	/* begin block 1 */
		// Start line: 680
	/* end block 1 */
	// End Line: 681

void ReturnToSchedulerIfCurrentTask(TASK *T)

{
	uchar uVar1;
	
	uVar1 = TSK_IsStackCorrupted(T);
	if (uVar1 != '\0') {
		if (StackFloodCallback == (code *)0x0) {
			DBG_Error((char *)0x0,"source/tasker.c",0x147);
		}
		else {
			(*StackFloodCallback)(T);
		}
	}
										/* WARNING: Subroutine does not return */
	longjmp((__jmp_buf_tag *)SchEnv,1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_Die()
 // line 338, offset 0x8002051c
	/* begin block 1 */
		// Start line: 715
	/* end block 1 */
	// End Line: 716

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TSK_Die(void)

{
	if (CurrentTask != (TASK *)0x0) {
		TSK_Kill(CurrentTask);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_Kill(struct TASK *T /*$a0*/)
 // line 350, offset 0x80020548
	/* begin block 1 */
		// Start line: 740
	/* end block 1 */
	// End Line: 741

void TSK_Kill(TASK *T)

{
	if ((T == CurrentTask) && (T != (TASK *)0x0)) {
		T->fToInit = T->fToInit | 2;
		ReturnToSchedulerIfCurrentTask(T);
	}
	else {
		LoTskKill(T);
	}
	return;
}



// decompiled code
// original method signature: 
// struct TASK * /*$ra*/ TSK_GetFirstActive()
 // line 371, offset 0x80020598
	/* begin block 1 */
		// Start line: 783
	/* end block 1 */
	// End Line: 784

/* WARNING: Unknown calling convention yet parameter storage is locked */

TASK * TSK_GetFirstActive(void)

{
	return ActiveTasks;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TSK_IsStackCorrupted(struct TASK *T /*$s0*/)
 // line 385, offset 0x800205a8
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x800205A8

		/* begin block 1.1 */
			// Start line: 387
			// Start offset: 0x800205CC
			// Variables:
		// 		int LongsOk; // $a0
		/* end block 1.1 */
		// End offset: 0x800205E4
		// End Line: 393
	/* end block 1 */
	// End offset: 0x80020610
	// End Line: 396

	/* begin block 2 */
		// Start line: 810
	/* end block 2 */
	// End Line: 811

uchar TSK_IsStackCorrupted(TASK *T)

{
	bool bVar1;
	int iVar2;
	
	if ((T->fToInit & 0x10) == 0) {
		bVar1 = (bool)GSYS_IsStackCorrupted((void *)T->fToDie,T->fKillable);
	}
	else {
		iVar2 = CheckExtraStack((ulong *)T->fToDie,T->fKillable >> 2);
		bVar1 = iVar2 < (int)(uint)*(ushort *)(T->TskEnv + 10);
		*(short *)((int)T->TskEnv + 0x2a) = *(short *)&T->fKillable + (short)iVar2 * -4;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_JumpAndResetStack(TDRFuncPtr_TSK_JumpAndResetStack0RunFunc RunFunc /*$v1*/)
 // line 408, offset 0x80020624
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x80020624
		// Variables:
	// 		struct TASK *T; // $a2
	/* end block 1 */
	// End offset: 0x8002065C
	// End Line: 419

	/* begin block 2 */
		// Start line: 864
	/* end block 2 */
	// End Line: 865

void TSK_JumpAndResetStack(TDRFuncPtr_TSK_JumpAndResetStack0RunFunc RunFunc)

{
	TASK *Param;
	ulong uVar1;
	ulong uVar2;
	
	Param = CurrentTask;
	if (CurrentTask != (TASK *)0x0) {
		uVar2 = CurrentTask->fToDie;
		uVar1 = CurrentTask->fKillable;
		*(TDRFuncPtr_TSK_JumpAndResetStack0RunFunc *)(CurrentTask->TskEnv + 8) = RunFunc;
		GSYS_SetStackAndJump((void *)(uVar2 + uVar1 + -0x10),ExecuteTask,Param);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_RepointProc(struct TASK *T /*$a0*/, TDRFuncPtr_TSK_RepointProc1Func Func /*$a1*/)
 // line 430, offset 0x8002066c
	/* begin block 1 */
		// Start line: 916
	/* end block 1 */
	// End Line: 917

void TSK_RepointProc(TASK *T,TDRFuncPtr_TSK_RepointProc1Func Func)

{
	uint uVar1;
	
	if (T == CurrentTask) {
		TSK_JumpAndResetStack((TDRFuncPtr_TSK_JumpAndResetStack0RunFunc)Func);
	}
	else {
		uVar1 = T->fToInit;
		*(TDRFuncPtr_TSK_RepointProc1Func *)(T->TskEnv + 8) = Func;
		T->fToInit = uVar1 | 1;
	}
	return;
}



// decompiled code
// original method signature: 
// struct TASK * /*$ra*/ TSK_GetCurrentTask()
 // line 454, offset 0x800206b0
	/* begin block 1 */
		// Start line: 966
	/* end block 1 */
	// End Line: 967

/* WARNING: Unknown calling convention yet parameter storage is locked */

TASK * TSK_GetCurrentTask(void)

{
	return CurrentTask;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TSK_IsCurrentTask(struct TASK *T /*$a0*/)
 // line 467, offset 0x800206c0
	/* begin block 1 */
		// Start line: 992
	/* end block 1 */
	// End Line: 993

uchar TSK_IsCurrentTask(TASK *T)

{
	return (uchar)(T == CurrentTask);
}



// decompiled code
// original method signature: 
// struct TASK * /*$ra*/ TSK_Exist(struct TASK *T /*$a0*/, unsigned long Id /*$a1*/, unsigned long Mask /*$a2*/)
 // line 482, offset 0x800206d8
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x800206D8
		// Variables:
	// 		struct TASK *ptrTask; // $v1
	// 		struct TASK *RetTask; // $a3
	/* end block 1 */
	// End offset: 0x80020728
	// End Line: 499

	/* begin block 2 */
		// Start line: 1025
	/* end block 2 */
	// End Line: 1026

TASK * TSK_Exist(TASK *T,ulong Id,ulong Mask)

{
	TASK *pTVar1;
	TASK *pTVar2;
	TASK *pTVar3;
	
	pTVar2 = (TASK *)0x0;
	pTVar1 = ActiveTasks;
	pTVar3 = pTVar2;
	if (ActiveTasks != (TASK *)0x0) {
		do {
			if ((pTVar1 == T) || (pTVar2 = pTVar1, (Mask & pTVar1->Id) != Id)) {
				pTVar1 = pTVar1->Next;
				pTVar2 = pTVar3;
			}
		} while ((pTVar1 != (TASK *)0x0) && (pTVar3 = pTVar2, pTVar2 == (TASK *)0x0));
	}
	return pTVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_SetExecFilter(unsigned long Id /*$a0*/, unsigned long Mask /*$a1*/)
 // line 512, offset 0x80020730
	/* begin block 1 */
		// Start line: 1082
	/* end block 1 */
	// End Line: 1083

void TSK_SetExecFilter(ulong Id,ulong Mask)

{
	ExecId = Id;
	ExecMask = Mask;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_ClearExecFilter()
 // line 525, offset 0x80020748
	/* begin block 1 */
		// Start line: 1107
	/* end block 1 */
	// End Line: 1108

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TSK_ClearExecFilter(void)

{
	TSK_SetExecFilter(0,0);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ TSK_KillTasks(struct TASK *CallingT /*$s3*/, unsigned long Id /*$s4*/, unsigned long Mask /*$s5*/)
 // line 543, offset 0x8002076c
	/* begin block 1 */
		// Start line: 544
		// Start offset: 0x8002076C
		// Variables:
	// 		int TasksKilled; // $s1
	// 		struct TASK *T; // $a0
	// 		unsigned char WasCurrentTaskKilled; // $s2

		/* begin block 1.1 */
			// Start line: 555
			// Start offset: 0x800207AC
			// Variables:
		// 		struct TASK *NextT; // $s0
		/* end block 1.1 */
		// End offset: 0x80020808
		// End Line: 572
	/* end block 1 */
	// End offset: 0x80020844
	// End Line: 584

	/* begin block 2 */
		// Start line: 1143
	/* end block 2 */
	// End Line: 1144

int TSK_KillTasks(TASK *CallingT,ulong Id,ulong Mask)

{
	bool bVar1;
	TASK *T;
	TASK *pTVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar1 = false;
	T = ActiveTasks;
	if (ActiveTasks != (TASK *)0x0) {
		do {
			pTVar2 = T->Next;
			if (((T != CallingT) && ((T->fToInit & 4) != 0)) && ((Mask & T->Id) == Id)) {
				if (T == CurrentTask) {
					bVar1 = true;
				}
				else {
					LoTskKill(T);
				}
				iVar3 = iVar3 + 1;
			}
			T = pTVar2;
		} while (pTVar2 != (TASK *)0x0);
	}
	T = CurrentTask;
	if (bVar1) {
		CurrentTask->fToInit = CurrentTask->fToInit | 2;
		ReturnToSchedulerIfCurrentTask(T);
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_IterateTasks(unsigned long Id /*$s1*/, unsigned long Mask /*$s2*/, TDRFuncPtr_TSK_IterateTasks2CallBack CallBack /*$s3*/)
 // line 594, offset 0x8002086c
	/* begin block 1 */
		// Start line: 595
		// Start offset: 0x8002086C
		// Variables:
	// 		struct TASK *T; // $a0

		/* begin block 1.1 */
			// Start line: 602
			// Start offset: 0x8002089C
			// Variables:
		// 		struct TASK *NextT; // $s0
		/* end block 1.1 */
		// End offset: 0x800208B8
		// End Line: 609
	/* end block 1 */
	// End offset: 0x800208C4
	// End Line: 611

	/* begin block 2 */
		// Start line: 1263
	/* end block 2 */
	// End Line: 1264

void TSK_IterateTasks(ulong Id,ulong Mask,TDRFuncPtr_TSK_IterateTasks2CallBack CallBack)

{
	ulong *puVar1;
	TASK *pTVar2;
	
	pTVar2 = ActiveTasks;
	if (ActiveTasks != (TASK *)0x0) {
		do {
			puVar1 = &pTVar2->Id;
			pTVar2 = pTVar2->Next;
			if ((Mask & *puVar1) == Id) {
				(*CallBack)();
			}
		} while (pTVar2 != (TASK *)0x0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_MakeTaskInactive(struct TASK *T /*$a0*/)
 // line 619, offset 0x800208e4
	/* begin block 1 */
		// Start line: 1319
	/* end block 1 */
	// End Line: 1320

void TSK_MakeTaskInactive(TASK *T)

{
	T->fToInit = T->fToInit & 0xfffffff7;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_MakeTaskActive(struct TASK *T /*$a0*/)
 // line 630, offset 0x800208f8
	/* begin block 1 */
		// Start line: 1341
	/* end block 1 */
	// End Line: 1342

void TSK_MakeTaskActive(TASK *T)

{
	T->fToInit = T->fToInit | 8;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_MakeTaskImmortal(struct TASK *T /*$a0*/)
 // line 642, offset 0x8002090c
	/* begin block 1 */
		// Start line: 1365
	/* end block 1 */
	// End Line: 1366

void TSK_MakeTaskImmortal(TASK *T)

{
	T->fToInit = T->fToInit & 0xfffffffb;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_MakeTaskMortal(struct TASK *T /*$a0*/)
 // line 653, offset 0x80020920
	/* begin block 1 */
		// Start line: 1387
	/* end block 1 */
	// End Line: 1388

void TSK_MakeTaskMortal(TASK *T)

{
	T->fToInit = T->fToInit | 4;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TSK_IsTaskActive(struct TASK *T /*$a0*/)
 // line 665, offset 0x80020934
	/* begin block 1 */
		// Start line: 1411
	/* end block 1 */
	// End Line: 1412

uchar TSK_IsTaskActive(TASK *T)

{
	return (uchar)((byte)(T->fToInit >> 3) & 1);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TSK_IsTaskMortal(struct TASK *T /*$a0*/)
 // line 677, offset 0x80020948
	/* begin block 1 */
		// Start line: 1435
	/* end block 1 */
	// End Line: 1436

uchar TSK_IsTaskMortal(TASK *T)

{
	return (uchar)((byte)(T->fToInit >> 2) & 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DetachFromList(struct TASK **Head /*$a0*/, struct TASK *ThisObj /*$a1*/)
 // line 689, offset 0x8002095c
	/* begin block 1 */
		// Start line: 1459
	/* end block 1 */
	// End Line: 1460

void DetachFromList(TASK **Head,TASK *ThisObj)

{
	if (ThisObj->Prev == (TASK *)0x0) {
		*Head = ThisObj->Next;
	}
	else {
		ThisObj->Prev->Next = ThisObj->Next;
	}
	if (ThisObj->Next != (TASK *)0x0) {
		ThisObj->Next->Prev = ThisObj->Prev;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddToList(struct TASK **Head /*$a0*/, struct TASK *ThisObj /*$a1*/)
 // line 707, offset 0x800209a8
	/* begin block 1 */
		// Start line: 1495
	/* end block 1 */
	// End Line: 1496

void AddToList(TASK **Head,TASK *ThisObj)

{
	TASK *pTVar1;
	
	ThisObj->Prev = (TASK *)0x0;
	pTVar1 = *Head;
	ThisObj->Next = pTVar1;
	if (pTVar1 != (TASK *)0x0) {
		pTVar1->Prev = ThisObj;
	}
	*Head = ThisObj;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoTskKill(struct TASK *T /*$s0*/)
 // line 722, offset 0x800209c8
	/* begin block 1 */
		// Start line: 723
		// Start offset: 0x800209C8
	/* end block 1 */
	// End offset: 0x80020A24
	// End Line: 735

	/* begin block 2 */
		// Start line: 1524
	/* end block 2 */
	// End Line: 1525

void LoTskKill(TASK *T)

{
	uchar uVar1;
	
	DetachFromList(&ActiveTasks,T);
	uVar1 = GAL_Free(T->TskEnv[9]);
	TasksActive = TasksActive + -1;
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/tasker.c",0x2dd);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExecuteTask(struct TASK *T /*$s0*/)
 // line 744, offset 0x80020a38
	/* begin block 1 */
		// Start line: 1575
	/* end block 1 */
	// End Line: 1576

void ExecuteTask(TASK *T)

{
	(*(code *)T->TskEnv[8])();
	DoEpi(T);
	T->fToInit = T->fToInit | 2;
	ReturnToSchedulerIfCurrentTask(T);
	return;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_TSK_SetDoTasksPrologue /*$ra*/ TSK_SetDoTasksPrologue(TDRFuncPtr_TSK_SetDoTasksPrologue0Func Func /*$a0*/)
 // line 756, offset 0x80020a88
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x80020A88
		// Variables:
	// 		void (*Old)(); // $v0
	/* end block 1 */
	// End offset: 0x80020A98
	// End Line: 763

	/* begin block 2 */
		// Start line: 1603
	/* end block 2 */
	// End Line: 1604

TDRFuncPtr_TSK_SetDoTasksPrologue
TSK_SetDoTasksPrologue(TDRFuncPtr_TSK_SetDoTasksPrologue0Func Func)

{
	TDRFuncPtr_TSK_SetDoTasksPrologue pTVar1;
	
	pTVar1 = DoTasksPrologue;
	DoTasksPrologue = (TDRFuncPtr_TSK_SetDoTasksPrologue)Func;
	return pTVar1;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_TSK_SetDoTasksEpilogue /*$ra*/ TSK_SetDoTasksEpilogue(TDRFuncPtr_TSK_SetDoTasksEpilogue0Func Func /*$a0*/)
 // line 765, offset 0x80020aa0
	/* begin block 1 */
		// Start line: 767
		// Start offset: 0x80020AA0
		// Variables:
	// 		void (*Old)(); // $v0
	/* end block 1 */
	// End offset: 0x80020AB0
	// End Line: 772

	/* begin block 2 */
		// Start line: 1621
	/* end block 2 */
	// End Line: 1622

TDRFuncPtr_TSK_SetDoTasksEpilogue
TSK_SetDoTasksEpilogue(TDRFuncPtr_TSK_SetDoTasksEpilogue0Func Func)

{
	TDRFuncPtr_TSK_SetDoTasksEpilogue pTVar1;
	
	pTVar1 = DoTasksEpilogue;
	DoTasksEpilogue = (TDRFuncPtr_TSK_SetDoTasksEpilogue)Func;
	return pTVar1;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_TSK_SetTaskPrologue /*$ra*/ TSK_SetTaskPrologue(TDRFuncPtr_TSK_SetTaskPrologue0Pro Pro /*$a0*/)
 // line 775, offset 0x80020ab8
	/* begin block 1 */
		// Start line: 777
		// Start offset: 0x80020AB8
		// Variables:
	// 		void (*Old)(); // $v0
	/* end block 1 */
	// End offset: 0x80020AC8
	// End Line: 782

	/* begin block 2 */
		// Start line: 1641
	/* end block 2 */
	// End Line: 1642

TDRFuncPtr_TSK_SetTaskPrologue TSK_SetTaskPrologue(TDRFuncPtr_TSK_SetTaskPrologue0Pro Pro)

{
	TDRFuncPtr_TSK_SetTaskPrologue pTVar1;
	
	pTVar1 = ProFunc;
	ProFunc = (TDRFuncPtr_TSK_SetTaskPrologue)Pro;
	return pTVar1;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_TSK_SetTaskEpilogue /*$ra*/ TSK_SetTaskEpilogue(TDRFuncPtr_TSK_SetTaskEpilogue0Epi Epi /*$a0*/)
 // line 784, offset 0x80020ad0
	/* begin block 1 */
		// Start line: 786
		// Start offset: 0x80020AD0
		// Variables:
	// 		void (*Old)(); // $v0
	/* end block 1 */
	// End offset: 0x80020AE0
	// End Line: 791

	/* begin block 2 */
		// Start line: 1659
	/* end block 2 */
	// End Line: 1660

TDRFuncPtr_TSK_SetTaskEpilogue TSK_SetTaskEpilogue(TDRFuncPtr_TSK_SetTaskEpilogue0Epi Epi)

{
	TDRFuncPtr_TSK_SetTaskEpilogue pTVar1;
	
	pTVar1 = EpiFunc;
	EpiFunc = (TDRFuncPtr_TSK_SetTaskEpilogue)Epi;
	return pTVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_SetEpiProFilter(unsigned long Id /*$a0*/, unsigned long Mask /*$a1*/)
 // line 793, offset 0x80020ae8
	/* begin block 1 */
		// Start line: 1675
	/* end block 1 */
	// End Line: 1676

void TSK_SetEpiProFilter(ulong Id,ulong Mask)

{
	EpiProId = Id;
	EpiProMask = Id;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_ClearEpiProFilter()
 // line 799, offset 0x80020b00
	/* begin block 1 */
		// Start line: 1686
	/* end block 1 */
	// End Line: 1687

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TSK_ClearEpiProFilter(void)

{
	TSK_SetEpiProFilter(1,0);
	TSK_SetTaskEpilogue((TDRFuncPtr_TSK_SetTaskEpilogue0Epi)0x0);
	TSK_SetTaskPrologue((TDRFuncPtr_TSK_SetTaskPrologue0Pro)0x0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TSK_SetExtraStackProtection(unsigned char OnOff /*$a0*/)
 // line 810, offset 0x80020b34
	/* begin block 1 */
		// Start line: 1709
	/* end block 1 */
	// End Line: 1710

void TSK_SetExtraStackProtection(uchar OnOff)

{
	ExtraStackProtection = OnOff;
	return;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_TSK_SetStackFloodCallback /*$ra*/ TSK_SetStackFloodCallback(TDRFuncPtr_TSK_SetStackFloodCallback0Func Func /*$a0*/)
 // line 819, offset 0x80020b44
	/* begin block 1 */
		// Start line: 821
		// Start offset: 0x80020B44
		// Variables:
	// 		void (*OldFunc)(); // $v0
	/* end block 1 */
	// End offset: 0x80020B54
	// End Line: 827

	/* begin block 2 */
		// Start line: 1729
	/* end block 2 */
	// End Line: 1730

TDRFuncPtr_TSK_SetStackFloodCallback
TSK_SetStackFloodCallback(TDRFuncPtr_TSK_SetStackFloodCallback0Func Func)

{
	TDRFuncPtr_TSK_SetStackFloodCallback pTVar1;
	
	pTVar1 = StackFloodCallback;
	StackFloodCallback = (TDRFuncPtr_TSK_SetStackFloodCallback)Func;
	return pTVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ TSK_SetExtraStackSize(int Size /*$a0*/)
 // line 833, offset 0x80020b5c
	/* begin block 1 */
		// Start line: 835
		// Start offset: 0x80020B5C
		// Variables:
	// 		int OldSize; // $v1
	/* end block 1 */
	// End offset: 0x80020B7C
	// End Line: 839

	/* begin block 2 */
		// Start line: 1755
	/* end block 2 */
	// End Line: 1756

int TSK_SetExtraStackSize(int Size)

{
	int iVar1;
	
	iVar1 = ExtraStackSizeLongs << 2;
	if (Size < 0) {
		Size = Size + 3;
	}
	ExtraStackSizeLongs = Size >> 2;
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ExtraMarkStack(unsigned long *Stack /*$a0*/, int SizeLongs /*$a1*/)
 // line 841, offset 0x80020b84
	/* begin block 1 */
		// Start line: 842
		// Start offset: 0x80020B84
		// Variables:
	// 		int f; // $v1
	/* end block 1 */
	// End offset: 0x80020BA4
	// End Line: 846

	/* begin block 2 */
		// Start line: 1770
	/* end block 2 */
	// End Line: 1771

void ExtraMarkStack(ulong *Stack,int SizeLongs)

{
	ulong uVar1;
	
	uVar1 = 0;
	if (0 < SizeLongs) {
		do {
			*Stack = uVar1;
			uVar1 = uVar1 + 1;
			Stack = Stack + 1;
		} while ((int)uVar1 < SizeLongs);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckExtraStack(unsigned long *Stack /*$a0*/, int LongsToCheck /*$a1*/)
 // line 848, offset 0x80020bb0
	/* begin block 1 */
		// Start line: 849
		// Start offset: 0x80020BB0
		// Variables:
	// 		unsigned long f; // $v1
	/* end block 1 */
	// End offset: 0x80020BE0
	// End Line: 858

	/* begin block 2 */
		// Start line: 1785
	/* end block 2 */
	// End Line: 1786

int CheckExtraStack(ulong *Stack,int LongsToCheck)

{
	uint uVar1;
	
	uVar1 = 0;
	if (LongsToCheck != 0) {
		do {
			if (*Stack != uVar1) {
				return uVar1;
			}
			uVar1 = uVar1 + 1;
			Stack = Stack + 1;
		} while (uVar1 < (uint)LongsToCheck);
	}
	return uVar1;
}





