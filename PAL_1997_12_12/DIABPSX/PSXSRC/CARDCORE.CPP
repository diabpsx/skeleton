#include "THISDUST.H"
#include "CARDCORE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ init_mem_card__FPFii_v(TDRFuncPtr_init_mem_card__FPFii_v0handler handler /*$s0*/)
 // line 104, offset 0x8009a500
	/* begin block 1 */
		// Start line: 105
		// Start offset: 0x8009A500
	/* end block 1 */
	// End offset: 0x8009A708
	// End Line: 185

	/* begin block 2 */
		// Start line: 208
	/* end block 2 */
	// End Line: 209

void init_mem_card__FPFii_v(TDRFuncPtr_init_mem_card__FPFii_v0handler handler)

{
	ResetCallback();
	if (never_hooked_events != 0) {
		EnterCriticalSection();
		card_ev0 = OpenEvent();
		card_ev1 = OpenEvent();
		card_ev2 = OpenEvent();
		card_ev3 = OpenEvent();
		card_ev10 = OpenEvent();
		card_ev11 = OpenEvent();
		card_ev12 = OpenEvent();
		card_ev13 = OpenEvent();
		ExitCriticalSection();
		never_hooked_events = 0;
	}
	InitCARD();
	StartCARD();
	_bu_init();
	ChangeClearPAD();
	EnableEvent();
	EnableEvent();
	EnableEvent();
	EnableEvent();
	EnableEvent();
	EnableEvent();
	EnableEvent();
	EnableEvent();
	INT_8012af10 = 3;
	card_status = 3;
	INT_8012af18 = 0;
	card_usable = 0;
	INT_8012af20 = 0;
	card_files = 0;
	INT_8012af28 = 1;
	card_changed = 1;
	if (handler != (TDRFuncPtr_init_mem_card__FPFii_v0handler)0x0) {
		(*handler)(7,0);
	}
	mem_card_event_handler = (TDRFuncPtr_init_mem_card__FPFii_v0handler)0x0;
	init_card__Fi(0);
	init_card__Fi(1);
	mem_card_event_handler = handler;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ memcard_event__Fii(int evt /*$a0*/, int side /*$a1*/)
 // line 188, offset 0x8009a71c
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x8009A71C
	/* end block 1 */
	// End offset: 0x8009A71C
	// End Line: 213

	/* begin block 2 */
		// Start line: 410
	/* end block 2 */
	// End Line: 411

void memcard_event__Fii(int evt,int side)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ init_card__Fi(int card_number /*$a0*/)
 // line 217, offset 0x8009a724
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x8009A724
	/* end block 1 */
	// End offset: 0x8009A750
	// End Line: 222

	/* begin block 2 */
		// Start line: 447
	/* end block 2 */
	// End Line: 448

void init_card__Fi(int card_number)

{
	(&card_dirty)[card_number] = 0;
	(&card_files)[card_number] = 0;
	(&card_changed)[card_number] = 1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ping_card__Fi(int card_number /*$s0*/)
 // line 226, offset 0x8009a758
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x8009A758
	/* end block 1 */
	// End offset: 0x8009A7D8
	// End Line: 240

	/* begin block 2 */
		// Start line: 463
	/* end block 2 */
	// End Line: 464

int ping_card__Fi(int card_number)

{
	int iVar1;
	int iVar2;
	
	_card_info();
	_card_wait();
	iVar1 = TestEvent();
	iVar2 = 0;
	if (iVar1 != 1) {
		iVar1 = TestEvent();
		iVar2 = 1;
		if (iVar1 != 1) {
			iVar1 = TestEvent();
			if (iVar1 == 1) {
				iVar2 = 2;
			}
			else {
				iVar1 = TestEvent();
				iVar2 = 3;
				if (iVar1 != 1) {
					iVar2 = 4;
				}
			}
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CardUpdateTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 243, offset 0x8009a7ec
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8009A7F4
	/* end block 1 */
	// End offset: 0x8009A814
	// End Line: 250

	/* begin block 2 */
		// Start line: 497
	/* end block 2 */
	// End Line: 498

void CardUpdateTask__FP4TASK(TASK *T)

{
	do {
		FUN_80140a70(0);
		FUN_80140a70(1);
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MemcardON__Fv()
 // line 254, offset 0x8009a824
	/* begin block 1 */
		// Start line: 255
		// Start offset: 0x8009A824
	/* end block 1 */
	// End offset: 0x8009A880
	// End Line: 266

	/* begin block 2 */
		// Start line: 519
	/* end block 2 */
	// End Line: 520

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MemcardON__Fv(void)

{
	DrawSync(0);
	OVR_LoadFrontend__Fv();
	DrawSync(0);
	init_mem_card__FPFii_v(memcard_event__Fii);
	INT_8012ad3c = 1;
	card_dirty = 1;
	MemcardTask = TSK_AddTask(0x45,CardUpdateTask__FP4TASK,0x2000,0);
	MemCardActive = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MemcardOFF__Fv()
 // line 271, offset 0x8009a894
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x8009A894
	/* end block 1 */
	// End offset: 0x8009A8D4
	// End Line: 280

	/* begin block 2 */
		// Start line: 559
	/* end block 2 */
	// End Line: 560

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MemcardOFF__Fv(void)

{
	TASK *pTVar1;
	
	TSK_Kill(MemcardTask);
	while (pTVar1 = TSK_Exist((TASK *)0x0,0x45,0xffffffff), pTVar1 != (TASK *)0x0) {
		TSK_Sleep(1);
	}
	MemCardActive = (void *)0x0;
	return;
}





