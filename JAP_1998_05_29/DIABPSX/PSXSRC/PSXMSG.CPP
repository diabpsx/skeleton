#include "THISDUST.H"
#include "PSXMSG.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PSX_WndProc__FUilUl(unsigned int Msg /*$a0*/, long wParam /*$a1*/, unsigned long lParam /*$a2*/)
 // line 194, offset 0x80096b5c
	/* begin block 1 */
		// Start line: 195
		// Start offset: 0x80096B5C
	/* end block 1 */
	// End offset: 0x80096ED0
	// End Line: 385

	/* begin block 2 */
		// Start line: 388
	/* end block 2 */
	// End Line: 389

void PSX_WndProc__FUilUl(uint Msg,long wParam,ulong lParam)

{
	uint uVar1;
	int iVar2;
	
	switch(Msg) {
	case 0x42:
		switch(gnLevelTypeTbl[(uint)currlevel]) {
		case 1:
			CutScreen = 1;
			break;
		case 2:
			CutScreen = 2;
			break;
		case 3:
			CutScreen = 3;
			break;
		case 4:
			CutScreen = 4;
			if (0xe < currlevel) {
				CutScreen = 8;
			}
			break;
		default:
			CutScreen = 1;
			break;
		case 0:
			goto switchD_80096b84_caseD_49;
		}
		break;
	case 0x43:
		if ((&ULONG_800cf79c)[(uint)currlevel] != 0) {
			switch(gnLevelTypeTbl[(uint)currlevel]) {
			case 1:
				CutScreen = 1;
				break;
			case 2:
				CutScreen = 2;
				break;
			case 3:
				CutScreen = 3;
				break;
			case 4:
				CutScreen = 4;
				break;
			default:
				CutScreen = 1;
				break;
			case 0:
				goto switchD_80096b84_caseD_49;
			}
			break;
		}
	case 0x49:
switchD_80096b84_caseD_49:
		CutScreen = 0;
		uVar1 = CutScreen;
		goto LAB_80096e1c;
	case 0x44:
		uVar1 = (uint)setlvlnum;
		if (setlvlnum == '\x02') goto LAB_80096e1c;
		CutScreen = 1;
		if (setlvlnum == '\x05') {
			CutScreen = 6;
		}
		break;
	case 0x45:
		uVar1 = (uint)setlvlnum;
		if (setlvlnum == '\x02') goto LAB_80096e1c;
		CutScreen = 1;
		if (setlvlnum == '\x05') {
			CutScreen = 6;
		}
		break;
	case 0x46:
		CutScreen = 5;
		break;
	case 0x47:
	case 0x48:
		iVar2 = gnLevelTypeTbl[(&plr)[myplr].plrlevel];
		uVar1 = iVar2;
		if (iVar2 == 2) goto LAB_80096e1c;
		if (2 < iVar2) {
			uVar1 = iVar2;
			if ((iVar2 == 3) || (uVar1 = iVar2, iVar2 == 4)) goto LAB_80096e1c;
			break;
		}
		uVar1 = CutScreen;
		if (iVar2 != 0) goto LAB_80096e1c;
		goto switchD_80096b84_caseD_49;
	case 0x4a:
		CutScreen = 7;
		break;
	case 0x4b:
		uVar1 = (uint)setlvlnum;
		if (setlvlnum == '\x02') goto LAB_80096e1c;
		CutScreen = 6;
		if (setlvlnum != '\x05') {
			switch(gnLevelTypeTbl[(uint)currlevel]) {
			case 1:
				CutScreen = 1;
				break;
			case 2:
				CutScreen = 2;
				break;
			case 3:
				CutScreen = 3;
				break;
			case 4:
				CutScreen = 4;
				break;
			default:
				CutScreen = 1;
				break;
			case 0:
				goto switchD_80096b84_caseD_49;
			}
		}
		break;
	default:
		CutScreen = 9;
	}
	uVar1 = CutScreen;
LAB_80096e1c:
	CutScreen = uVar1;
										/* WARNING: Could not find normalized switch variable to match jumptable */
	switch(Msg) {
	default:
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x17f);
		break;
	case 0x4d:
		GoNewLevel__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSX_PostWndProc__FUilUl(unsigned int Msg /*$a0*/, long wParam /*$a1*/, unsigned long lParam /*$a2*/)
 // line 395, offset 0x80096ee0
	/* begin block 1 */
		// Start line: 396
		// Start offset: 0x80096EE0
	/* end block 1 */
	// End offset: 0x80096F88
	// End Line: 433

	/* begin block 2 */
		// Start line: 790
	/* end block 2 */
	// End Line: 791

void PSX_PostWndProc__FUilUl(uint Msg,long wParam,ulong lParam)

{
	switch(Msg) {
	case 0x42:
	case 0x47:
		PostGoForwardLevel__Fv();
		break;
	case 0x43:
	case 0x44:
	case 0x45:
	case 0x46:
	case 0x48:
		SetReturnLvlPos__Fv();
		PostGoBackLevel__Fv();
		break;
	default:
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x1af);
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
// void /*$ra*/ GoSetLevel__Fv()
 // line 440, offset 0x80096f98
	/* begin block 1 */
		// Start line: 441
		// Start offset: 0x80096F98
	/* end block 1 */
	// End offset: 0x80097020
	// End Line: 450

	/* begin block 2 */
		// Start line: 880
	/* end block 2 */
	// End Line: 881

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoSetLevel__Fv(void)

{
	LevelToLevelInit__Fv();
	if ((currlevel == '\0') || (0x10 < currlevel)) {
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x1bc);
	}
	if ((QuestStruct_800ddb6c._qvar1 < 7) && (setlvlnum == '\x05')) {
		play_movie("FPRST3.MOV");
	}
	PutUpCutScreen__Fi(CutScreen);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoBackLevel__Fv()
 // line 453, offset 0x80097030
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x80097030
	/* end block 1 */
	// End offset: 0x8009707C
	// End Line: 461

	/* begin block 2 */
		// Start line: 906
	/* end block 2 */
	// End Line: 907

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoBackLevel__Fv(void)

{
	LevelToLevelInit__Fv();
	if ((currlevel == '\0') || (0x10 < currlevel)) {
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x1c9);
	}
	PutUpCutScreen__Fi(CutScreen);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoWarpLevel__Fv()
 // line 464, offset 0x8009708c
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x8009708C
	/* end block 1 */
	// End offset: 0x800970A8
	// End Line: 470

	/* begin block 2 */
		// Start line: 928
	/* end block 2 */
	// End Line: 929

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoWarpLevel__Fv(void)

{
	LevelToLevelInit__Fv();
	PutUpCutScreen__Fi(CutScreen);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostLoadGame__Fv()
 // line 475, offset 0x800970b8
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x800970B8
	/* end block 1 */
	// End offset: 0x80097120
	// End Line: 488

	/* begin block 2 */
		// Start line: 950
	/* end block 2 */
	// End Line: 951

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostLoadGame__Fv(void)

{
	OVR_LoadGame__Fv();
	SyncPortals__Fv();
	GLUE_StartBg__Fibi((uint)Level2Bgdata
													 [(uint)leveltype * 5 +
														((uint)LevPals[(uint)currlevel] &
														-(uint)(LevPals[(uint)currlevel] != 0x80))],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoLoadGame__Fv()
 // line 491, offset 0x80097130
	/* begin block 1 */
		// Start line: 492
		// Start offset: 0x80097130

		/* begin block 1.1 */
			// Start line: 492
			// Start offset: 0x80097130
			// Variables:
		// 		int p; // $a2

			/* begin block 1.1.1 */
				// Start line: 517
				// Start offset: 0x80097198

				/* begin block 1.1.1.1 */
					// Start line: 519
					// Start offset: 0x800971B4

					/* begin block 1.1.1.1.1 */
						// Start line: 522
						// Start offset: 0x800971DC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 524
							// Start offset: 0x800971DC
							// Variables:
						// 		int i; // $a0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009722C
						// End Line: 530
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009722C
					// End Line: 530
				/* end block 1.1.1.1 */
				// End offset: 0x8009722C
				// End Line: 530
			/* end block 1.1.1 */
			// End offset: 0x8009722C
			// End Line: 530
		/* end block 1.1 */
		// End offset: 0x80097234
		// End Line: 531
	/* end block 1 */
	// End offset: 0x80097278
	// End Line: 543

	/* begin block 2 */
		// Start line: 985
	/* end block 2 */
	// End Line: 986

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoLoadGame__Fv(void)

{
	char *pcVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	LevelToLevelInit__Fv();
	FUN_8015c9cc(1);
	CheckPlrDead__Fi(0);
	CheckPlrDead__Fi(1);
	InitGamePadVars__Fv();
	PutUpCutScreen__Fi(CutScreen);
	OVR_LoadPregame__Fv();
	cVar2 = ItemDataStruct_801113c4.iLoc;
	iVar5 = 0;
	while (iVar5 < FePlayerNo + 1) {
		if (((QuestStruct_ARRAY_800dda54[0]._qactive == '\x03') &&
				(2 < (uint)QuestStruct_ARRAY_800dda54[0]._qvar1 - 2)) && (iVar4 = 1, cVar2 != -1)) {
			iVar3 = 0x20;
			do {
				if ((&AllItemsList.iMiscId)[iVar3] == ',') {
					(&AllItemsUseable)[iVar4] = '\x01';
				}
				pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar3;
				iVar4 = iVar4 + 1;
				iVar3 = iVar3 + 0x20;
			} while (*pcVar1 != -1);
		}
		iVar5 = iVar5 + 1;
	}
	FUN_80162cdc();
	FUN_80162dd0();
	LoadGameLevel__FUci('\0',4);
	FUN_8015f470();
	InitItemGFX__Fv();
	InitQuestText__Fv();
	FUN_8015f6bc();
	RestoreObjectLight__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostNewLevel__Fv()
 // line 546, offset 0x80097288
	/* begin block 1 */
		// Start line: 547
		// Start offset: 0x80097288
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x80097328
	// End Line: 553

	/* begin block 2 */
		// Start line: 1095
	/* end block 2 */
	// End Line: 1096

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostNewLevel__Fv(void)

{
	ulong uVar1;
	uint uVar2;
	
	OVR_LoadGame__Fv();
	uVar1 = VID_GetTick__Fv();
	uVar2 = uVar1 - (((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar1 / 5);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar2 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar2],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoNewLevel__Fv()
 // line 556, offset 0x8009733c
	/* begin block 1 */
		// Start line: 557
		// Start offset: 0x8009733C
	/* end block 1 */
	// End offset: 0x80097374
	// End Line: 569

	/* begin block 2 */
		// Start line: 1116
	/* end block 2 */
	// End Line: 1117

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoNewLevel__Fv(void)

{
	LevelToLevelInit__Fv();
	PutUpCutScreen__Fi(CutScreen);
	FreeGameMem__Fv();
	OVR_LoadPregame__Fv();
	LoadGameLevel__FUci('\x01',0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostGoBackLevel__Fv()
 // line 574, offset 0x80097384
	/* begin block 1 */
		// Start line: 575
		// Start offset: 0x80097384
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x8009741C
	// End Line: 579

	/* begin block 2 */
		// Start line: 1152
	/* end block 2 */
	// End Line: 1153

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostGoBackLevel__Fv(void)

{
	ulong uVar1;
	uint uVar2;
	
	uVar1 = VID_GetTick__Fv();
	uVar2 = uVar1 - (((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar1 / 5);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar2 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar2],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoForwardLevel__Fv()
 // line 585, offset 0x80097430
	/* begin block 1 */
		// Start line: 586
		// Start offset: 0x80097430
	/* end block 1 */
	// End offset: 0x80097474
	// End Line: 589

	/* begin block 2 */
		// Start line: 1175
	/* end block 2 */
	// End Line: 1176

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoForwardLevel__Fv(void)

{
	LevelToLevelInit__Fv();
	if (0xf < currlevel) {
		DBG_Error((char *)0x0,"psxsrc/PSXMSG.CPP",0x24b);
	}
	PutUpCutScreen__Fi(CutScreen);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostGoForwardLevel__Fv()
 // line 592, offset 0x80097484
	/* begin block 1 */
		// Start line: 593
		// Start offset: 0x80097484
		// Variables:
	// 		int palnum; // $s0
	/* end block 1 */
	// End offset: 0x8009751C
	// End Line: 597

	/* begin block 2 */
		// Start line: 1189
	/* end block 2 */
	// End Line: 1190

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostGoForwardLevel__Fv(void)

{
	ulong uVar1;
	uint uVar2;
	
	uVar1 = VID_GetTick__Fv();
	uVar2 = uVar1 - (((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar1 / 5);
	if (LevPals[(uint)currlevel] != 0x80) {
		uVar2 = (uint)LevPals[(uint)currlevel];
	}
	GLUE_StartBg__Fibi((uint)Level2Bgdata[(uint)leveltype * 5 + uVar2],
										 (void *)(uint)(leveltype == '\0'),(uint)currlevel);
	LevPals[(uint)currlevel] = (uchar)uVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoNewGame__Fv()
 // line 604, offset 0x80097530
	/* begin block 1 */
		// Start line: 605
		// Start offset: 0x80097530
	/* end block 1 */
	// End offset: 0x80097544
	// End Line: 610

	/* begin block 2 */
		// Start line: 1219
	/* end block 2 */
	// End Line: 1220

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoNewGame__Fv(void)

{
	PutUpCutScreen__Fi(CutScreen);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostNewGame__Fv()
 // line 613, offset 0x80097554
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x80097554
	/* end block 1 */
	// End offset: 0x8009756C
	// End Line: 615

	/* begin block 2 */
		// Start line: 1237
	/* end block 2 */
	// End Line: 1238

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostNewGame__Fv(void)

{
	GLUE_StartBg__Fibi(0x27,&DAT_00000001,-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LevelToLevelInit__Fv()
 // line 623, offset 0x8009757c
	/* begin block 1 */
		// Start line: 624
		// Start offset: 0x8009757C
	/* end block 1 */
	// End offset: 0x800975BC
	// End Line: 632

	/* begin block 2 */
		// Start line: 1257
	/* end block 2 */
	// End Line: 1258

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LevelToLevelInit__Fv(void)

{
	TASK *pTVar1;
	
	GLUE_SetFinished__Fb(&DAT_00000001);
	while (pTVar1 = TSK_Exist((TASK *)0x0,(ulong)&DAT_00004001,0xffffffff), pTVar1 != (TASK *)0x0) {
		TSK_Sleep(1);
	}
	TSK_Sleep(2);
	return;
}





