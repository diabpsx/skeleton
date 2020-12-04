#include "THISDUST.H"
#include "MAIN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Remove96__Fv()
 // line 114, offset 0x8007b870
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x8007B870
	/* end block 1 */
	// End offset: 0x8007B898
	// End Line: 124

	/* begin block 2 */
		// Start line: 228
	/* end block 2 */
	// End Line: 229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Remove96__Fv(void)

{
										/* WARNING: Read-only address (ram,0x80025984) is written */
	uRam80025984 = 0;
	EnterCriticalSection();
	FlushCache();
	ExitCriticalSection();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AppMain()
 // line 133, offset 0x8007b8a8
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x8007B8A8

		/* begin block 1.1 */
			// Start line: 134
			// Start offset: 0x8007B8A8
			// Variables:
		// 		int option_file; // $s0

			/* begin block 1.1.1 */
				// Start line: 156
				// Start offset: 0x8007B934

				/* begin block 1.1.1.1 */
					// Start line: 156
					// Start offset: 0x8007B934
					// Variables:
				// 		int option_file; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8007B960
				// End Line: 159
			/* end block 1.1.1 */
			// End offset: 0x8007B960
			// End Line: 159
		/* end block 1.1 */
		// End offset: 0x8007B960
		// End Line: 159
	/* end block 1 */
	// End offset: 0x8007B9B0
	// End Line: 221

	/* begin block 2 */
		// Start line: 266
	/* end block 2 */
	// End Line: 267

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AppMain(void)

{
	int iVar1;
	undefined4 uVar2;
	
	Remove96__Fv();
	FUN_800a0d4c();
	VER_InitVersion__Fv();
	InitTmalloc__Fv();
	InitPrinty__Fv();
	InitDialog__Fv();
	Init_GamePad__Fv();
	OVR_LoadFrontend__Fv();
	init_mem_card__FPFii_v(memcard_event__Fii);
	iVar1 = FUN_8015ac54(0,"DIABLO-6969");
	if (iVar1 == 0) {
		iVar1 = FUN_8015ac54(1,"DIABLO-6969");
		if (iVar1 == 0) goto LAB_8007b960;
		MemcardON__Fv();
		uVar2 = 1;
	}
	else {
		MemcardON__Fv();
		uVar2 = 0;
	}
	FUN_8015c2e8(uVar2,iVar1);
LAB_8007b960:
	LANG_SetLang__F9LANG_TYPE(LANG_ENGLISH);
	if (FileSYS != 1) {
		BL_LoadStreamDir__Fv();
	}
	GameTaskPtr = TSK_AddTask(0x4000,GameTask__FP4TASK,(int)&DAT_00005000,0);
	do {
		MAIN_MainLoop__Fv();
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_RestartGameTask__Fv()
 // line 228, offset 0x8007b9c8
	/* begin block 1 */
		// Start line: 229
		// Start offset: 0x8007B9C8
	/* end block 1 */
	// End offset: 0x8007B9E4
	// End Line: 230

	/* begin block 2 */
		// Start line: 456
	/* end block 2 */
	// End Line: 457

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_RestartGameTask__Fv(void)

{
	TSK_RepointProc(GameTaskPtr,GameTask__FP4TASK);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GameTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 237, offset 0x8007b9f4
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x8007B9FC
	/* end block 1 */
	// End offset: 0x8007BACC
	// End Line: 273

	/* begin block 2 */
		// Start line: 475
	/* end block 2 */
	// End Line: 476

void GameTask__FP4TASK(TASK *T)

{
	do {
		OVR_LoadFrontend__Fv();
		InitAllItemsUseable__Fv();
		alloc_plr__Fv();
		ATT_DoAttract__Fv();
		if (demo_record_load == 1) {
			set_pad_record_play__Fi(level_record);
		}
		if (demo_pad_time == 0) {
			if (currlevel == -1) {
				StartGame__FUcUc('\0','\x01');
			}
			else {
				GLUE_PreTown__Fv();
			}
		}
		StartGame__FUcUc('\x01','\x01');
		GLUE_SetFinished__Fb(&DAT_00000001);
		TSK_Sleep(5);
		if (gbDoEnding != '\0') {
			gbDoEnding = '\0';
			DoEnding__Fv();
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_MainLoop__Fv()
 // line 286, offset 0x8007badc
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x8007BADC
	/* end block 1 */
	// End offset: 0x8007BB14
	// End Line: 299

	/* begin block 2 */
		// Start line: 573
	/* end block 2 */
	// End Line: 574

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_MainLoop__Fv(void)

{
	PAD_Handler__Fv();
	TSK_DoTasks();
	VID_AfterDisplay__Fv();
	DEC_DoDecompRequests__Fv();
	TICK_Update();
	SCR_Handler__Fv();
	return;
}





