#include "THISDUST.H"
#include "MAIN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Remove96__Fv()
 // line 116, offset 0x80083128
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x80083128
	/* end block 1 */
	// End offset: 0x80083150
	// End Line: 126

	/* begin block 2 */
		// Start line: 232
	/* end block 2 */
	// End Line: 233

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Remove96__Fv(void)

{
										/* WARNING: Read-only address (ram,0x80027260) is written */
	uRam80027260 = 0;
	EnterCriticalSection();
	FlushCache();
	ExitCriticalSection();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AppMain()
 // line 141, offset 0x80083160
	/* begin block 1 */
		// Start line: 142
		// Start offset: 0x80083160
	/* end block 1 */
	// End offset: 0x80083214
	// End Line: 266

	/* begin block 2 */
		// Start line: 282
	/* end block 2 */
	// End Line: 283

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AppMain(void)

{
	Remove96__Fv();
	FUN_800b059c();
	VER_InitVersion__Fv();
	InitPrinty__Fv();
	InitDialog__Fv();
	LANG_SetLang__F9LANG_TYPE(LANG_JAP);
	if (FileSYS != 1) {
		BL_LoadStreamDir__Fv();
	}
	LoadKanji__F10LANG_DB_NO(LANG_DB_MAIN);
	SetKanjiLoaded__Fb(&DAT_00000001);
	Init_GamePad__Fv();
	OVR_LoadFrontend__Fv();
	ADirtyFlagThatGaryWillLove = '\x01';
	UPDATEPROGRESS__Fi(4);
	GameTaskPtr = TSK_AddTask(0x4000,GameTask__FP4TASK,(int)&DAT_00005000,0);
	do {
		MAIN_MainLoop__Fv();
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_RestartGameTask__Fv()
 // line 273, offset 0x80083224
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x80083224
	/* end block 1 */
	// End offset: 0x80083240
	// End Line: 275

	/* begin block 2 */
		// Start line: 546
	/* end block 2 */
	// End Line: 547

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_RestartGameTask__Fv(void)

{
	TSK_RepointProc(GameTaskPtr,GameTask__FP4TASK);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GameTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 356, offset 0x80083250
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x80083250

		/* begin block 1.1 */
			// Start line: 373
			// Start offset: 0x8008326C

			/* begin block 1.1.1 */
				// Start line: 424
				// Start offset: 0x800832FC

				/* begin block 1.1.1.1 */
					// Start line: 428
					// Start offset: 0x80083320
				/* end block 1.1.1.1 */
				// End offset: 0x80083320
				// End Line: 429
			/* end block 1.1.1 */
			// End offset: 0x80083320
			// End Line: 429
		/* end block 1.1 */
		// End offset: 0x80083320
		// End Line: 429
	/* end block 1 */
	// End offset: 0x80083348
	// End Line: 432

	/* begin block 2 */
		// Start line: 713
	/* end block 2 */
	// End Line: 714

void GameTask__FP4TASK(TASK *T)

{
	uchar bNewGame;
	uint uVar1;
	
	MSG_ClearOutCompMap__Fv();
	UPDATEPROGRESS__Fi(4);
	do {
		OVR_LoadFrontend__Fv();
		InitAllItemsUseable__Fv();
		alloc_plr__Fv();
		ATT_DoAttract__Fv();
		if (demo_record_load == 1) {
			set_pad_record_play__Fi(level_record);
		}
		bNewGame = '\x01';
		if (demo_pad_time == 0) {
			if ((undefined *)DoLoadedGame == &DAT_00000001) {
				bNewGame = '\0';
			}
			else {
				GLUE_PreTown__Fv();
				GAL_SetTimeStamp(4);
				bNewGame = '\x01';
			}
		}
		StartGame__FUcUc(bNewGame,'\x01');
		GLUE_SetFinished__Fb(&DAT_00000001);
		TSK_Sleep(5);
		if (gbDoEnding != '\0') {
			MSG_ClearOutCompMap__Fv();
			uVar1 = (uint)gbDoEnding;
			gbDoEnding = '\0';
			FUN_8014eb1c(uVar1 - 1);
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAIN_MainLoop__Fv()
 // line 445, offset 0x8008335c
	/* begin block 1 */
		// Start line: 446
		// Start offset: 0x8008335C
	/* end block 1 */
	// End offset: 0x800833A0
	// End Line: 458

	/* begin block 2 */
		// Start line: 892
	/* end block 2 */
	// End Line: 893

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MAIN_MainLoop__Fv(void)

{
	if (demo_pad_time == 0) {
		PAD_Handler__Fv();
	}
	TSK_DoTasks();
	VID_AfterDisplay__Fv();
	DEC_DoDecompRequests__Fv();
	TICK_Update();
	SCR_Handler__Fv();
	return;
}





