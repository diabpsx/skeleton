#include "THISDUST.H"
#include "PSXMSG.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PSX_WndProc__FUilUl(unsigned int Msg /*$a0*/, long wParam /*$a1*/, unsigned long lParam /*$a2*/)
 // line 181, offset 0x8008d2fc
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x8008D2FC
	/* end block 1 */
	// End offset: 0x8008D3E4
	// End Line: 221

	/* begin block 2 */
		// Start line: 362
	/* end block 2 */
	// End Line: 363

void PSX_WndProc__FUilUl(uint Msg,long wParam,ulong lParam)

{
	switch(Msg) {
	case 0x42:
	case 0x47:
	case 0x4c:
		GoForwardLevel__Fv();
		break;
	case 0x43:
	case 0x44:
	case 0x45:
	case 0x48:
		if ((setlevel != '\0') && (setlvlnum == '\x05')) {
			PlayInGameMovie__FPCc("FPRST3.MOV");
		}
		GoBackLevel__Fv();
		break;
	case 0x46:
		GoWarpLevel__Fv();
		break;
	default:
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0xdb);
		break;
	case 0x4a:
		GoNewGame__Fv();
		break;
	case 0x4b:
		GoLoadGame__Fv();
		break;
	case 0x4d:
		GoNewLevel__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSX_PostWndProc__FUilUl(unsigned int Msg /*$a0*/, long wParam /*$a1*/, unsigned long lParam /*$a2*/)
 // line 231, offset 0x8008d3f4
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x8008D3F4
	/* end block 1 */
	// End offset: 0x8008D494
	// End Line: 269

	/* begin block 2 */
		// Start line: 462
	/* end block 2 */
	// End Line: 463

void PSX_PostWndProc__FUilUl(uint Msg,long wParam,ulong lParam)

{
	switch(Msg) {
	case 0x42:
	case 0x47:
	case 0x4c:
		PostGoForwardLevel__Fv();
		break;
	case 0x43:
	case 0x44:
	case 0x45:
	case 0x46:
	case 0x48:
		PostGoBackLevel__Fv();
		break;
	default:
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x10b);
		break;
	case 0x4a:
		PostNewGame__Fv();
		break;
	case 0x4b:
		PostLoadGame__Fv();
		break;
	case 0x4d:
		PostNewLevel__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoBackLevel__Fv()
 // line 276, offset 0x8008d4a4
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x8008D4A4
	/* end block 1 */
	// End offset: 0x8008D50C
	// End Line: 284

	/* begin block 2 */
		// Start line: 552
	/* end block 2 */
	// End Line: 553

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoBackLevel__Fv(void)

{
	DBG_SendMessage("---------PRE: Level is %d");
	LevelToLevelInit__Fv();
	if ((currlevel == '\0') || (0x10 < currlevel)) {
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x118);
	}
	PutUpCutScreen__Fi((uint)currlevel - 1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoWarpLevel__Fv()
 // line 287, offset 0x8008d51c
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8008D51C
	/* end block 1 */
	// End offset: 0x8008D544
	// End Line: 292

	/* begin block 2 */
		// Start line: 575
	/* end block 2 */
	// End Line: 576

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoWarpLevel__Fv(void)

{
	DBG_SendMessage("---------PRE: Warp level");
	LevelToLevelInit__Fv();
	PutUpCutScreen__Fi(0x11);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostLoadGame__Fv()
 // line 297, offset 0x8008d554
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x8008D554
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x8008D5DC
	// End Line: 304

	/* begin block 2 */
		// Start line: 595
	/* end block 2 */
	// End Line: 596

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostLoadGame__Fv(void)

{
	uint uVar1;
	
	OVR_LoadGame__Fv();
	uVar1 = random__Fil(0,4);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar1 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar1],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoLoadGame__Fv()
 // line 307, offset 0x8008d5f0
	/* begin block 1 */
		// Start line: 308
		// Start offset: 0x8008D5F0
	/* end block 1 */
	// End offset: 0x8008D668
	// End Line: 323

	/* begin block 2 */
		// Start line: 616
	/* end block 2 */
	// End Line: 617

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoLoadGame__Fv(void)

{
	undefined uVar1;
	undefined in_a3;
	undefined4 local_8;
	undefined4 in_stack_00000000;
	undefined4 in_stack_00000004;
	undefined4 in_stack_00000008;
	undefined4 in_stack_fffffffc;
	
	DBG_SendMessage("---------PRE: Load game");
	LevelToLevelInit__Fv();
	PutUpCutScreen__Fi(0x11);
	uVar1 = FUN_8015ac54(current_card,DiabloGameFile);
	FUN_8015bb8c(1,(char)current_card,uVar1,in_a3,local_8,in_stack_fffffffc,in_stack_00000000,
							 in_stack_00000004,in_stack_00000008);
	MemcardOFF__Fv();
	OVR_LoadPregame__Fv();
	LoadGameLevel__FUci('\x01',4);
	RestoreObjectLight__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostNewLevel__Fv()
 // line 326, offset 0x8008d678
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8008D678
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x8008D700
	// End Line: 333

	/* begin block 2 */
		// Start line: 657
	/* end block 2 */
	// End Line: 658

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostNewLevel__Fv(void)

{
	uint uVar1;
	
	OVR_LoadGame__Fv();
	uVar1 = random__Fil(0,4);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar1 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar1],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoNewLevel__Fv()
 // line 336, offset 0x8008d714
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x8008D714
	/* end block 1 */
	// End offset: 0x8008D758
	// End Line: 348

	/* begin block 2 */
		// Start line: 678
	/* end block 2 */
	// End Line: 679

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoNewLevel__Fv(void)

{
	DBG_SendMessage("---------PRE: New level");
	LevelToLevelInit__Fv();
	PutUpCutScreen__Fi(0x11);
	FreeGameMem__Fv();
	OVR_LoadPregame__Fv();
	LoadGameLevel__FUci('\x01',0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostGoBackLevel__Fv()
 // line 354, offset 0x8008d768
	/* begin block 1 */
		// Start line: 355
		// Start offset: 0x8008D768
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x8008D7EC
	// End Line: 359

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostGoBackLevel__Fv(void)

{
	uint uVar1;
	
	uVar1 = random__Fil(0,4);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar1 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar1],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoForwardLevel__Fv()
 // line 365, offset 0x8008d800
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x8008D800
	/* end block 1 */
	// End offset: 0x8008D848
	// End Line: 369

	/* begin block 2 */
		// Start line: 738
	/* end block 2 */
	// End Line: 739

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoForwardLevel__Fv(void)

{
	LevelToLevelInit__Fv();
	if (0xf < currlevel) {
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x16f);
	}
	PutUpCutScreen__Fi((uint)currlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostGoForwardLevel__Fv()
 // line 372, offset 0x8008d858
	/* begin block 1 */
		// Start line: 373
		// Start offset: 0x8008D858
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x8008D8DC
	// End Line: 377

	/* begin block 2 */
		// Start line: 752
	/* end block 2 */
	// End Line: 753

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostGoForwardLevel__Fv(void)

{
	uint uVar1;
	
	uVar1 = random__Fil(0,4);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar1 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar1],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoNewGame__Fv()
 // line 384, offset 0x8008d8f0
	/* begin block 1 */
		// Start line: 385
		// Start offset: 0x8008D8F0

		/* begin block 1.1 */
			// Start line: 385
			// Start offset: 0x8008D8F0
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8008D928
		// End Line: 388
	/* end block 1 */
	// End offset: 0x8008D930
	// End Line: 390

	/* begin block 2 */
		// Start line: 778
	/* end block 2 */
	// End Line: 779

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoNewGame__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	
	DBG_SendMessage("---------PRE: New game");
	iVar2 = 0x10;
	puVar1 = &UCHAR_00h_800a96c8;
	do {
		*puVar1 = -0x80;
		iVar2 = iVar2 + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < iVar2);
	PutUpCutScreen__Fi(0x13);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostNewGame__Fv()
 // line 393, offset 0x8008d940
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x8008D940
	/* end block 1 */
	// End offset: 0x8008D968
	// End Line: 398

	/* begin block 2 */
		// Start line: 797
	/* end block 2 */
	// End Line: 798

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostNewGame__Fv(void)

{
	int TextId;
	
	TextId = 0x26;
	if (daylight != '\0') {
		TextId = 0x25;
	}
	GLUE_StartBg__Fibi(TextId,&DAT_00000001,-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LevelToLevelInit__Fv()
 // line 406, offset 0x8008d978
	/* begin block 1 */
		// Start line: 407
		// Start offset: 0x8008D978
	/* end block 1 */
	// End offset: 0x8008D9C0
	// End Line: 418

	/* begin block 2 */
		// Start line: 823
	/* end block 2 */
	// End Line: 824

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LevelToLevelInit__Fv(void)

{
	TASK *pTVar1;
	
	GLUE_SetFinished__Fb(&DAT_00000001);
	while (pTVar1 = TSK_Exist((TASK *)0x0,(ulong)&DAT_00004001,0xffffffff), pTVar1 != (TASK *)0x0) {
		TSK_Sleep(1);
	}
	TSK_Sleep(1);
	snd_init__FUl(0);
	return;
}





