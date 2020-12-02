#include "THISDUST.H"
#include "DIABLO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeGameMem__Fv()
 // line 292, offset 0x80037fac
	/* begin block 1 */
		// Start line: 293
		// Start offset: 0x80037FAC
	/* end block 1 */
	// End offset: 0x80037FD4
	// End Line: 306

	/* begin block 2 */
		// Start line: 584
	/* end block 2 */
	// End Line: 585

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeGameMem__Fv(void)

{
	music_stop__Fv();
	FreeObjectGFX__Fv();
	FreeMonsterSnd__Fv();
	FreeTownerGFX__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ start_game__FUi(unsigned int uMsg /*$s0*/)
 // line 312, offset 0x80037fe4
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x80037FE4
	/* end block 1 */
	// End offset: 0x800380C0
	// End Line: 353

	/* begin block 2 */
		// Start line: 624
	/* end block 2 */
	// End Line: 625

/* WARNING: Unknown calling convention yet parameter storage is locked */

void start_game__FUi(uint uMsg)

{
	gbDoEnding = '\0';
	svgamode = '\x01';
	InitCursor__Fv();
	InitLightTable__Fv();
	music_stop__Fv();
	ShowProgress__FUi(uMsg);
	if (DoLoadedGame == (void *)0x0) {
		if (LoadedChar == (void *)0x0) {
			SetQSpell__Fiii(0,-1,4);
		}
		else {
			pad_func_Quick_Spell__Fi(0);
			pad_func_Quick_Spell__Fi(0);
		}
		if (PTR_8011b32c == (void *)0x0) {
			SetQSpell__Fiii(1,-1,4);
		}
		else {
			pad_func_Quick_Spell__Fi(1);
			pad_func_Quick_Spell__Fi(1);
		}
	}
	PTR_8011b32c = (void *)0x0;
	LoadedChar = (void *)0x0;
	InitLevelCursor__Fv();
	sgnTimeoutCurs = 0;
	sgbMouseDown = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ free_game__Fv()
 // line 357, offset 0x800380d4
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x800380D4

		/* begin block 1.1 */
			// Start line: 358
			// Start offset: 0x800380D4
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x80038114
		// End Line: 369
	/* end block 1 */
	// End offset: 0x80038134
	// End Line: 375

	/* begin block 2 */
		// Start line: 716
	/* end block 2 */
	// End Line: 717

/* WARNING: Unknown calling convention yet parameter storage is locked */

void free_game__Fv(void)

{
	int pnum;
	
	FreeControlPan__Fv();
	pnum = 0;
	FUN_80157274();
	FreeQuestText__Fv();
	FreeStoreMem__Fv();
	do {
		FreePlayerGFX__Fi(pnum);
		pnum = pnum + 1;
	} while (pnum < 2);
	FreeItemGFX__Fv();
	FreeCursor__Fv();
	FreeLightTable__Fv();
	FreeGameMem__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LittleStart__FUcUc(unsigned char bNewGame /*$s0*/, unsigned char bSinglePlayer /*$a1*/)
 // line 390, offset 0x80038148
	/* begin block 1 */
		// Start line: 391
		// Start offset: 0x80038148
		// Variables:
	// 		unsigned char fExitProgram; // stack offset -16
	// 		unsigned int uMsg; // $a0
	/* end block 1 */
	// End offset: 0x800381F8
	// End Line: 429

	/* begin block 2 */
		// Start line: 782
	/* end block 2 */
	// End Line: 783

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LittleStart__FUcUc(uchar bNewGame,uchar bSinglePlayer)

{
	uchar uVar1;
	uint uMsg;
	uchar local_10 [8];
	
	local_10[0] = '\0';
	uVar1 = NetInit__FUcPUc(bSinglePlayer,local_10);
	if (uVar1 == '\0') {
		gbRunGameResult = local_10[0] == '\0';
	}
	if ((bNewGame == '\0') && (gbValidSaveFile != '\0')) {
		uMsg = 0x4b;
	}
	else {
		currlevel = '\x01';
		leveltype = '\x01';
		setlevel = '\x01';
		FUN_8015bbc8();
		func_0x8015e7dc();
		func_0x8015e77c();
		InitDungMsgs__Fi(myplr);
		uMsg = 0x4a;
	}
	start_game__FUi(uMsg);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ StartGame__FUcUc(unsigned char bNewGame /*$s3*/, unsigned char bSinglePlayer /*$s4*/)
 // line 433, offset 0x8003820c
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x8003820C

		/* begin block 1.1 */
			// Start line: 448
			// Start offset: 0x8003824C
			// Variables:
		// 		unsigned char fExitProgram; // stack offset -32
		// 		unsigned int uMsg; // $s0
		/* end block 1.1 */
		// End offset: 0x800383E4
		// End Line: 520
	/* end block 1 */
	// End offset: 0x800383E8
	// End Line: 527

	/* begin block 2 */
		// Start line: 871
	/* end block 2 */
	// End Line: 872

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar StartGame__FUcUc(uchar bNewGame,uchar bSinglePlayer)

{
	uchar uVar1;
	uint Msg;
	uint uMsg;
	uchar local_20 [8];
	
	gbSelectProvider = '\x01';
	InitGamePadVars__Fv();
	do {
		local_20[0] = '\0';
		uVar1 = NetInit__FUcPUc(bSinglePlayer,local_20);
		if (uVar1 == '\0') {
			gbRunGameResult = local_20[0] == '\0';
			return (uchar)(local_20[0] == '\0');
		}
		gbSelectProvider = '\0';
		if (bNewGame == '\0') {
			Msg = 0x4b;
			if (gbValidSaveFile == '\0') goto LAB_800382f8;
LAB_80038340:
			uMsg = 0;
			GRL_PostMessage__FUlUilUl(ghMainWnd,Msg,0,0);
		}
		else {
			Msg = 0x4d;
			if (demo_pad_time != 0) {
				currlevel = (uchar)level_record;
				leveltype = (uchar)gnLevelTypeTbl[level_record & 0xff];
				goto LAB_80038340;
			}
LAB_800382f8:
			uMsg = 0x4a;
			OVR_LoadPregame__Fv();
			FUN_8015bbc8();
			func_0x8015e7dc();
			func_0x8015e77c();
			InitDungMsgs__Fi(myplr);
		}
		if (((FePlayerNo != 0) && (PlayerStruct_800dbf20.plractive == '\0')) &&
			 (PlayerStruct_800dbf20._pHitPoints != 0)) {
			myplr = 1;
			NetSendCmdLocParam1__FUcUcUcUcUs
								('\x01','5',(uchar)PlayerStruct_800dbf20._px,(uchar)PlayerStruct_800dbf20._py,
								 (uint)(ushort)plr.plrlevel);
			PlayerStruct_800dbf20.plractive = '\x01';
			myplr = 0;
		}
		SetAmbientLight__Fv();
		run_game_loop__FUi(uMsg);
		if (gbMaxPlayers == '\x01') {
			return gbRunGameResult;
		}
		if (gbRunGameResult == '\0') {
			return '\0';
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ run_game_loop__FUi(unsigned int uMsg /*$a0*/)
 // line 532, offset 0x8003840c
	/* begin block 1 */
		// Start line: 533
		// Start offset: 0x8003840C
		// Variables:
	// 		unsigned long (*saveProc)(); // $s2
	// 		struct MSG msg; // stack offset -48
	/* end block 1 */
	// End offset: 0x80038558
	// End Line: 654

	/* begin block 2 */
		// Start line: 1084
	/* end block 2 */
	// End Line: 1085

/* WARNING: Unknown calling convention yet parameter storage is locked */

void run_game_loop__FUi(uint uMsg)

{
	TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul NewProc;
	void *pvVar1;
	
	start_game__FUi(uMsg);
	NewProc = GRL_SetWindowProc__FPFUlUilUl_Ul(GM_Game__FUlUilUl);
	gbRunGame = '\x01';
	gbProcessPlayers = '\x01';
	gbRunGameResult = '\x01';
	force_redraw = 0xff;
	ClrDiabloMsg__Fv();
	force_redraw = 0xff;
	gbGameLoopStartup = '\x01';
	plr_encrypt__FUc('\x01');
	if (DoLoadedGame == (void *)0x0) {
		ML_Init__Fv();
	}
	DoLoadedGame = (void *)0x0;
	DiabloDieFlag = (void *)0x0;
	while (gbRunGame != '\0') {
		if (plr.plractive == '\0') {
			myplr = 1;
		}
		plr_encrypt__FUc('\0');
		game_loop__FUc(gbGameLoopStartup);
		gbGameLoopStartup = '\0';
		plr_encrypt__FUc('\x01');
		TSK_Sleep(1);
	}
	plr_encrypt__FUc('\0');
	SetCursor__Fi(0);
	force_redraw = 0xff;
	GRL_SetWindowProc__FPFUlUilUl_Ul((TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc)NewProc);
	free_game__Fv();
	music_fade__Fv();
	pvVar1 = PaletteFadeOut__Fi(8);
	if (pvVar1 != (void *)0x0) {
		while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
			TSK_Sleep(1);
		}
	}
	music_stop__Fv();
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TryIconCurs__Fv()
 // line 1087, offset 0x80038574
	/* begin block 1 */
		// Start line: 1088
		// Start offset: 0x80038574
	/* end block 1 */
	// End offset: 0x80038880
	// End Line: 1169

	/* begin block 2 */
		// Start line: 2203
	/* end block 2 */
	// End Line: 2204

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TryIconCurs__Fv(void)

{
	char cVar1;
	uint uVar2;
	int iVar3;
	uchar bCmd;
	
	iVar3 = (&_pcurs)[myplr];
	if (iVar3 == 8) {
		cVar1 = (&_pcursplr)[sel_data];
		bCmd = '\x1a';
	}
	else {
		bCmd = 'M';
		if (iVar3 != 10) {
			if (iVar3 == 7) {
				FUN_80160a34();
				return '\x01';
			}
			if (iVar3 == 2) {
				if ((int)_pcursinvitem[sel_data] != -1) {
					CheckIdentify__Fii(myplr,(int)_pcursinvitem[sel_data]);
				}
			}
			else {
				if (iVar3 == 3) {
					if ((int)_pcursinvitem[sel_data] != -1) {
						DoRepair__Fii(myplr,(int)_pcursinvitem[sel_data]);
					}
				}
				else {
					if (iVar3 == 4) {
						if ((int)_pcursinvitem[sel_data] != -1) {
							DoRecharge__Fii(myplr,(int)_pcursinvitem[sel_data]);
						}
					}
					else {
						if (iVar3 == 9) {
							if ((&_pcursplr)[sel_data] == -1) {
								uVar2 = FUN_8013a43c(myplr,(int)(&plr)[myplr]._pTSpell);
								NetSendCmdLocParam2__FUcUcUcUcUsUs
													('\x01','\x0f',(uchar)cursmx,(uchar)cursmy,
													 (int)(&plr)[myplr]._pTSpell & 0xffff,uVar2 & 0xffff);
							}
							else {
								uVar2 = FUN_8013a43c(myplr,(int)(&plr)[myplr]._pTSpell);
								NetSendCmdParam3__FUcUcUsUsUs
													('\x01','\x19',(short)(&_pcursplr)[sel_data],(short)(&plr)[myplr]._pTSpell
													 ,uVar2 & 0xffff);
							}
						}
						else {
							if (iVar3 != 5) {
								return '\0';
							}
							if ((&_pcursobj)[sel_data] != -1) {
								return '\0';
							}
						}
					}
				}
			}
			NewCursor__Fi(1);
			return '\x01';
		}
		cVar1 = (&_pcursplr)[sel_data];
	}
	NetSendCmdParam1__FUcUcUs('\x01',bCmd,(short)cVar1);
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ DisableInputWndProc__FUlUilUl(unsigned long hWnd /*$a0*/, unsigned int uMsg /*$a1*/, long wParam /*$a2*/, unsigned long lParam /*$a3*/)
 // line 2191, offset 0x80038894
	/* begin block 1 */
		// Start line: 2192
		// Start offset: 0x80038894
	/* end block 1 */
	// End offset: 0x80038894
	// End Line: 2239

	/* begin block 2 */
		// Start line: 4458
	/* end block 2 */
	// End Line: 4459

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong DisableInputWndProc__FUlUilUl(ulong hWnd,uint uMsg,long wParam,ulong lParam)

{
	return 0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GM_Game__FUlUilUl(unsigned long hWnd /*$a0*/, unsigned int uMsg /*$s0*/, long wParam /*$a2*/, unsigned long lParam /*$a3*/)
 // line 2245, offset 0x8003889c
	/* begin block 1 */
		// Start line: 2246
		// Start offset: 0x8003889C
	/* end block 1 */
	// End offset: 0x8003891C
	// End Line: 2406

	/* begin block 2 */
		// Start line: 4519
	/* end block 2 */
	// End Line: 4520

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GM_Game__FUlUilUl(ulong hWnd,uint uMsg,long wParam,ulong lParam)

{
	if (uMsg == 1) {
		if (wParam == 0) {
			gbRunGame = '\0';
			gbRunGameResult = '\0';
		}
	}
	else {
		if (((uMsg != 0) && (uMsg < 0x4a)) && (0x41 < uMsg)) {
			sound_stop__Fv();
			music_stop__Fv();
			sgbMouseDown = '\0';
			ShowProgress__FUi(uMsg);
			force_redraw = 0xff;
			gbGameLoopStartup = '\x01';
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadLvlGFX__Fv()
 // line 2413, offset 0x80038930
	/* begin block 1 */
		// Start line: 2414
		// Start offset: 0x80038930
		// Variables:
	// 		char *LoadFile; // $s0
	/* end block 1 */
	// End offset: 0x800389D4
	// End Line: 2448

	/* begin block 2 */
		// Start line: 4860
	/* end block 2 */
	// End Line: 4861

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadLvlGFX__Fv(void)

{
	int **LoadFile;
	
	LoadFile = (int **)0x0;
	switch(leveltype) {
	case '\0':
		LoadFile = (int **)"Town.TIL";
		break;
	case '\x01':
		LoadFile = PTR_ARRAY_8011b7b0;
		break;
	case '\x02':
		LoadFile = PTR_ARRAY_8011b7b0 + 2;
		break;
	case '\x03':
		LoadFile = PTR_ARRAY_8011b7b0 + 4;
		break;
	case '\x04':
		LoadFile = PTR_ARRAY_8011b7b0 + 6;
	}
	if (LoadFile == (int **)0x0) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x98b);
	}
	LoadMegaTiles__FPCc((char *)LoadFile);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadMegaTiles__FPCc(char *LoadFile /*$s1*/)
 // line 2452, offset 0x800389e8
	/* begin block 1 */
		// Start line: 2453
		// Start offset: 0x800389E8
		// Variables:
	// 		struct FileIO *MyIo; // $s0
	/* end block 1 */
	// End offset: 0x80038A60
	// End Line: 2465

	/* begin block 2 */
		// Start line: 4938
	/* end block 2 */
	// End Line: 4939

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadMegaTiles__FPCc(char *LoadFile)

{
	FileIO *this;
	int iVar1;
	void *pvVar2;
	
	this = SYSI_GetFs__Fv();
	iVar1 = FileLen__6FileIOPCc(this,LoadFile);
	if (0xab0 < iVar1) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x99d);
	}
	pvVar2 = ReadAtAddr__6FileIOPCcPUci(this,LoadFile,pMegaTiles,-1);
	if (pvVar2 == (void *)0x0) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9a0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadAllGFX__Fv()
 // line 2472, offset 0x80038a78
	/* begin block 1 */
		// Start line: 2473
		// Start offset: 0x80038A78
	/* end block 1 */
	// End offset: 0x80038A88
	// End Line: 2485

	/* begin block 2 */
		// Start line: 4978
	/* end block 2 */
	// End Line: 4979

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadAllGFX__Fv(void)

{
	InitObjectGFX__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateLevel__Fi(int lvldir /*stack -24*/)
 // line 2505, offset 0x80038a98
	/* begin block 1 */
		// Start line: 2506
		// Start offset: 0x80038A98
		// Variables:
	// 		long hnd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80038B80
	// End Line: 2526

	/* begin block 2 */
		// Start line: 5044
	/* end block 2 */
	// End Line: 5045

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateLevel__Fi(int lvldir)

{
	uchar uVar1;
	long Handle;
	int iVar2;
	
	Handle = GAL_Alloc((ulong)&LAB_00014000,1,(char *)PTR_ARRAY_8011b7d0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9cf);
	}
	TempStack = (uchar *)GAL_Lock(Handle);
	if (TempStack == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9d2);
	}
	TempStack = TempStack + 0x13ffc;
	iVar2 = setjmp((__jmp_buf_tag *)CreateEnv);
	if (iVar2 == 0) {
		Passedlvldir = lvldir;
		GSYS_SetStackAndJump(TempStack,LoCreateLevel__FPv,(void *)0x0);
	}
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9dd);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoCreateLevel__FPv()
 // line 2534, offset 0x80038b90
	/* begin block 1 */
		// Start line: 2535
		// Start offset: 0x80038B90
		// Variables:
	// 		int lvldir; // $a1
	/* end block 1 */
	// End offset: 0x80038CE4
	// End Line: 2588

	/* begin block 2 */
		// Start line: 5115
	/* end block 2 */
	// End Line: 5116

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoCreateLevel__FPv(void)

{
	int l;
	
	switch(leveltype) {
	case '\0':
		CreateTown__Fi(Passedlvldir);
		FUN_801621d0();
		l = 0;
		break;
	case '\x01':
		FUN_80140e64(glSeedTbl[(uint)currlevel]);
		FUN_80162530();
		Freeupstairs__Fv();
		l = 1;
		break;
	case '\x02':
		FUN_8014854c(glSeedTbl[(uint)currlevel]);
		FUN_8016265c();
		Freeupstairs__Fv();
		l = 2;
		break;
	case '\x03':
		FUN_8014d450(glSeedTbl[(uint)currlevel]);
		FUN_80162824();
		Freeupstairs__Fv();
		l = 3;
		break;
	case '\x04':
		FUN_801551f8(glSeedTbl[(uint)currlevel]);
		FUN_801629b0();
		Freeupstairs__Fv();
		l = 4;
		break;
	default:
		goto switchD_80038bc0_caseD_5;
	}
	LoadRndLvlPal__Fi(l);
switchD_80038bc0_caseD_5:
										/* WARNING: Subroutine does not return */
	longjmp((__jmp_buf_tag *)CreateEnv,1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearOutDungeonMap__Fv()
 // line 2592, offset 0x80038cf4
	/* begin block 1 */
		// Start line: 2593
		// Start offset: 0x80038CF4
		// Variables:
	// 		void * istown; // $s1
	// 		unsigned short val; // $s0

		/* begin block 1.1 */
			// Start line: 2624
			// Start offset: 0x80038D90
			// Variables:
		// 		int x; // $a2

			/* begin block 1.1.1 */
				// Start line: 2624
				// Start offset: 0x80038D98

				/* begin block 1.1.1.1 */
					// Start line: 2626
					// Start offset: 0x80038DA4
					// Variables:
				// 		int y; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80038E0C
				// End Line: 2639
			/* end block 1.1.1 */
			// End offset: 0x80038E0C
			// End Line: 2639
		/* end block 1.1 */
		// End offset: 0x80038E18
		// End Line: 2640

		/* begin block 1.2 */
			// Start line: 2644
			// Start offset: 0x80038E20
			// Variables:
		// 		int y; // $a3
		// 		int x; // $a2

			/* begin block 1.2.1 */
				// Start line: 2644
				// Start offset: 0x80038E24

				/* begin block 1.2.1.1 */
					// Start line: 2646
					// Start offset: 0x80038E30
					// Variables:
				// 		int x; // $a0
				/* end block 1.2.1.1 */
				// End offset: 0x80038E54
				// End Line: 2649
			/* end block 1.2.1 */
			// End offset: 0x80038E54
			// End Line: 2649
		/* end block 1.2 */
		// End offset: 0x80038E60
		// End Line: 2650

		/* begin block 1.3 */
			// Start line: 2651
			// Start offset: 0x80038E60
			// Variables:
		// 		int y; // $a1
		// 		int y; // $a3
		// 		int x; // $a2

			/* begin block 1.3.1 */
				// Start line: 2651
				// Start offset: 0x80038E6C

				/* begin block 1.3.1.1 */
					// Start line: 2653
					// Start offset: 0x80038E78
					// Variables:
				// 		int x; // $a0
				/* end block 1.3.1.1 */
				// End offset: 0x80038E94
				// End Line: 2656
			/* end block 1.3.1 */
			// End offset: 0x80038E94
			// End Line: 2656
		/* end block 1.3 */
		// End offset: 0x80038E9C
		// End Line: 2657

		/* begin block 1.4 */
			// Start line: 2658
			// Start offset: 0x80038E9C
			// Variables:
		// 		int y; // $a1
		// 		int y; // $a1
		// 		int y; // $a3
		// 		int x; // $a2

			/* begin block 1.4.1 */
				// Start line: 2658
				// Start offset: 0x80038EA8

				/* begin block 1.4.1.1 */
					// Start line: 2660
					// Start offset: 0x80038EB4
					// Variables:
				// 		int x; // $a0
				/* end block 1.4.1.1 */
				// End offset: 0x80038ED4
				// End Line: 2660
			/* end block 1.4.1 */
			// End offset: 0x80038ED4
			// End Line: 2660
		/* end block 1.4 */
		// End offset: 0x80038EDC
		// End Line: 2661
	/* end block 1 */
	// End offset: 0x80038EDC
	// End Line: 2661

	/* begin block 2 */
		// Start line: 5236
	/* end block 2 */
	// End Line: 5237

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearOutDungeonMap__Fv(void)

{
	bool bVar1;
	uchar *puVar2;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	ushort uVar8;
	
	bVar1 = false;
	uVar8 = 0;
	if (mydflags == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0xa25);
	}
	if (leveltype == '\x02') {
		uVar8 = 0xc;
	}
	else {
		if (leveltype < 3) {
			if (leveltype == '\x01') {
				uVar8 = 0x16;
			}
			else {
				bVar1 = true;
			}
		}
		else {
			if (leveltype == '\x03') {
				uVar8 = 8;
			}
			else {
				if (leveltype == '\x04') {
					uVar8 = 0x14;
				}
				else {
					bVar1 = true;
				}
			}
		}
	}
	iVar7 = 0;
	iVar6 = 0;
	while (iVar4 = 0, iVar5 = iVar6, iVar7 < 0x70) {
		do {
			(&dung_map.dBits)[iVar5] = '\0';
			(&dung_map.dObject)[iVar5] = '\0';
			(&dung_map.dItem)[iVar5] = '\0';
			(&dung_map.dMissile)[iVar5] = '\0';
			(&dung_map.dFlags)[iVar5] = '\0';
			(&dung_map.dTransVal)[iVar5] = '\0';
			*(undefined2 *)((int)&dung_map.dMonster + iVar5) = 0;
			iVar4 = iVar4 + 1;
			iVar5 = iVar5 + 8;
		} while (iVar4 < 0x70);
		iVar6 = iVar6 + 0x380;
		iVar7 = iVar7 + 1;
	}
	iVar6 = 0;
	if (!bVar1) {
		iVar7 = 0;
		while (iVar5 = 0, iVar6 < 0x28) {
			do {
				iVar4 = iVar7 + iVar5;
				iVar5 = iVar5 + 1;
				mydflags[iVar4] = '\0';
			} while (iVar5 < 0x28);
			iVar7 = iVar7 + 0x28;
			iVar6 = iVar6 + 1;
		}
		iVar6 = 0;
		while (iVar7 = 0, puVar2 = pdungeon, iVar6 < 0x28) {
			do {
				puVar2[iVar6] = '\0';
				iVar7 = iVar7 + 1;
				puVar2 = puVar2 + 0x28;
			} while (iVar7 < 0x28);
			iVar6 = iVar6 + 1;
		}
		iVar6 = 0;
		while (iVar7 = 0, puVar3 = dungeon, iVar6 < 0x30) {
			do {
				puVar3[iVar6] = uVar8;
				iVar7 = iVar7 + 1;
				puVar3 = puVar3 + 0x30;
			} while (iVar7 < 0x30);
			iVar6 = iVar6 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddQuestItems__Fv()
 // line 2690, offset 0x80038ef4
	/* begin block 1 */
		// Start line: 2691
		// Start offset: 0x80038EF4
	/* end block 1 */
	// End offset: 0x80038F84
	// End Line: 2704

	/* begin block 2 */
		// Start line: 5434
	/* end block 2 */
	// End Line: 5435

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddQuestItems__Fv(void)

{
	uchar uVar1;
	
	uVar1 = QuestStatus__Fi(0);
	if ((uVar1 != '\0') && (quests.pad_for_laz == '\0')) {
		SpawnRock__Fv();
	}
	uVar1 = QuestStatus__Fi(10);
	if ((uVar1 != '\0') && (QuestStruct_ARRAY_800dda90[6].pad_for_laz == '\0')) {
		SpawnQuestItem__Fiiiii(0x10,setpc_x * 2 + 0x1b,setpc_y * 2 + 0x1b,0,1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AllSolid__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 2710, offset 0x80038f94
	/* begin block 1 */
		// Start line: 2711
		// Start offset: 0x80038F94
	/* end block 1 */
	// End offset: 0x80038FBC
	// End Line: 2713

	/* begin block 2 */
		// Start line: 5474
	/* end block 2 */
	// End Line: 5475

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AllSolid__Fii(int x,int y)

{
	SetSOLID__Fii(x,y);
	SetMISSILE__Fii(x,y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FillCrapBits__Fv()
 // line 2716, offset 0x80038fd4
	/* begin block 1 */
		// Start line: 2717
		// Start offset: 0x80038FD4
		// Variables:
	// 		struct QuestStruct *qs; // $s2

		/* begin block 1.1 */
			// Start line: 2717
			// Start offset: 0x80038FD4

			/* begin block 1.1.1 */
				// Start line: 2721
				// Start offset: 0x8003900C

				/* begin block 1.1.1.1 */
					// Start line: 2731
					// Start offset: 0x80039068

					/* begin block 1.1.1.1.1 */
						// Start line: 2733
						// Start offset: 0x800390B0
						// Variables:
					// 		int x; // $s0
					// 		int y; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80039158
					// End Line: 2748
				/* end block 1.1.1.1 */
				// End offset: 0x80039158
				// End Line: 2748
			/* end block 1.1.1 */
			// End offset: 0x80039158
			// End Line: 2751
		/* end block 1.1 */
		// End offset: 0x80039158
		// End Line: 2751
	/* end block 1 */
	// End offset: 0x80039158
	// End Line: 2751

	/* begin block 2 */
		// Start line: 5486
	/* end block 2 */
	// End Line: 5487

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FillCrapBits__Fv(void)

{
	int x;
	int y;
	
	if (currlevel == '\x03') {
		if (setlevel != '\0') {
			return;
		}
		if (QuestStruct_800ddb30._qactive == '\0') {
			return;
		}
		AllSolid__Fii(QuestStruct_800ddb30._qtx + -1,QuestStruct_800ddb30._qty);
		y = QuestStruct_800ddb30._qtx + -1;
		x = QuestStruct_800ddb30._qty + -2;
	}
	else {
		if (currlevel != '\x0f') {
			return;
		}
		if (setlevel == '\0') {
			return;
		}
		if (QuestStruct_800ddb6c._qactive == '\0') {
			return;
		}
		y = 0x12;
		if (setlvlnum != QuestStruct_800ddb6c._qslvl) {
			return;
		}
		do {
			x = 0x38;
			do {
				AllSolid__Fii(x,y);
				x = x + 1;
			} while (x < 0x3a);
			y = y + 1;
		} while (y < 0x3e);
		y = 0x3c;
		do {
			x = 0x28;
			do {
				AllSolid__Fii(x,y);
				x = x + 1;
			} while (x < 0x2e);
			y = y + 1;
		} while (y < 0x3e);
		if (3 < QuestStruct_800ddb6c._qvar1) {
			return;
		}
		AllSolid__Fii(0x20,0x30);
		AllSolid__Fii(0x21,0x30);
		AllSolid__Fii(0x20,0x31);
		y = 0x21;
		x = 0x31;
	}
	AllSolid__Fii(y,x);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Lsaveplrpos__Fv()
 // line 2755, offset 0x80039174
	/* begin block 1 */
		// Start line: 2756
		// Start offset: 0x80039174
	/* end block 1 */
	// End offset: 0x80039218
	// End Line: 2772

	/* begin block 2 */
		// Start line: 5571
	/* end block 2 */
	// End Line: 5572

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Lsaveplrpos__Fv(void)

{
	PlayerStruct_800dbf20._pVar4 = PlayerStruct_800dbf20._py;
	PlayerStruct_800dbf20._pVar3 = PlayerStruct_800dbf20._px;
	PlayerStruct_800dbf20._pVar6 = plr._py;
	PlayerStruct_800dbf20._pVar5 = plr._px;
	if (PlayerStruct_800dbf20.plractive != '\0') {
		PlayerStruct_800dbf20._py = 0;
		PlayerStruct_800dbf20._px = 0;
	}
	if (plr.plractive != '\0') {
		plr._py = 0;
		plr._px = 0;
	}
	PlayerStruct_800dbf20._pVar1 = (short)ViewX;
	PlayerStruct_800dbf20._pVar2 = (short)ViewY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Lrestoreplrpos__Fv()
 // line 2776, offset 0x80039220
	/* begin block 1 */
		// Start line: 2777
		// Start offset: 0x80039220
	/* end block 1 */
	// End offset: 0x80039260
	// End Line: 2781

	/* begin block 2 */
		// Start line: 5617
	/* end block 2 */
	// End Line: 5618

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Lrestoreplrpos__Fv(void)

{
	PlacePlayer__FiiiUc(1,(int)PlayerStruct_800dbf20._pVar3,(int)PlayerStruct_800dbf20._pVar4,'\0');
	PlacePlayer__FiiiUc(0,(int)PlayerStruct_800dbf20._pVar5,(int)PlayerStruct_800dbf20._pVar6,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadGameLevel__FUci(unsigned char firstflag /*$s4*/, int lvldir /*$s3*/)
 // line 2785, offset 0x80039270
	/* begin block 1 */
		// Start line: 2786
		// Start offset: 0x80039270
		// Variables:
	// 		int i; // $s0
	// 		int j; // $a0

		/* begin block 1.1 */
			// Start line: 2839
			// Start offset: 0x800393A0

			/* begin block 1.1.1 */
				// Start line: 2847
				// Start offset: 0x800393D4
				// Variables:
			// 		unsigned char visited; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80039840
			// End Line: 2972
		/* end block 1.1 */
		// End offset: 0x80039948
		// End Line: 3040
	/* end block 1 */
	// End offset: 0x80039B84
	// End Line: 3136

	/* begin block 2 */
		// Start line: 5638
	/* end block 2 */
	// End Line: 5639

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadGameLevel__FUci(uchar firstflag,int lvldir)

{
	bool bVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	int pnum;
	void **ppvVar8;
	
	AllocdPiece__Fv();
	mydflags = (uchar *)Tmalloc__Fi(0x640);
	if (setseed != 0) {
		glSeedTbl[(uint)currlevel] = setseed;
	}
	music_stop__Fv();
	SetCursor__Fi(1);
	SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
	SND_LoadBank__Fi((uint)currlevel);
	MakeLightTable__Fv();
	LoadLvlGFX__Fv();
	ClearOutDungeonMap__Fv();
	if (firstflag != '\0') {
		FUN_8015f470();
		InitItemGFX__Fv();
		InitQuestText__Fv();
		FUN_80162cdc();
		FUN_8015f6bc();
	}
	SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
	if (leveltype == '\0') {
		FUN_80162dd0();
	}
	FUN_8015f4c4();
	InitLighting__Fv();
	InitVision__Fv();
	FUN_8015fc80();
	if (setlevel == '\0') {
		CreateLevel__Fi(lvldir);
		FUN_80159edc();
		SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
		if (leveltype != '\0') {
			FUN_8015fd04();
			SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
			FUN_8015c980();
			LoadAllGFX__Fv();
		}
		if (lvldir == 3) {
			GetReturnLvlPos__Fv();
		}
		if (((lvldir == 5) && (GetPortalLvlPos__Fv(), plr.plractive != '\0')) &&
			 (PlayerStruct_800dbf20.plractive != '\0')) {
			WorldToOffset__Fiii(0,ViewX << 3,ViewY << 3);
		}
		pnum = 0;
		PlayDungMsgs__Fv();
		InitMultiView__Fv();
		bVar1 = false;
		if (-1 < FePlayerNo) {
			puVar7 = (undefined *)0x800da69e;
			puVar5 = (undefined *)0x0;
			do {
				if ((&plr.plractive)[(int)puVar5] != '\0') {
					if (!bVar1) {
						bVar1 = false;
						if (puVar7[(uint)currlevel] == '\0') goto LAB_80039534;
					}
					bVar1 = true;
				}
LAB_80039534:
				puVar7 = &DAT_000019e8 + (int)puVar7;
				pnum = pnum + 1;
				puVar5 = &DAT_000019e8 + (int)puVar5;
			} while (pnum <= FePlayerNo);
		}
		SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
		pnum = 0;
		if (leveltype == '\0') {
			iVar3 = 0;
			do {
				iVar6 = 0;
				iVar4 = pnum;
				do {
					iVar6 = iVar6 + 1;
					(&dung_map.dFlags)[iVar4] = (&dung_map.dFlags)[iVar4] | 3;
					iVar4 = iVar4 + 8;
				} while (iVar6 < 0x60);
				iVar3 = iVar3 + 1;
				pnum = pnum + 0x380;
			} while (iVar3 < 0x60);
			InitTowners__Fv();
			InitItems__Fb(&DAT_00000001);
			FUN_80161fdc();
			InitBird__Fv();
			if ((firstflag == '\0') &&
				 (((lvldir == 4 || (*(char *)(myplr * 0x19e8 + -0x7ff25962 + (uint)currlevel) != '\0')) ||
					(lvldir == 4)))) {
				FUN_80163054();
			}
		}
		else {
			Lsaveplrpos__Fv();
			if ((firstflag == '\0') &&
				 (((lvldir == 4 || (*(char *)(myplr * 0x19e8 + -0x7ff25962 + (uint)currlevel) != '\0')) ||
					(lvldir == 4)))) {
				FUN_8015cccc();
				GetRndSeed__Fv();
				ConvertdPiece__Fv();
				FUN_80160ed4();
				GetRndSeed__Fv();
				FUN_801595d4();
				InitItems__Fb((void *)0x0);
				FUN_8015e598();
				GetRndSeed__Fv();
				FUN_80161fdc();
				InitDead__Fv();
				AddQuestItems__Fv();
				GetRndSeed__Fv();
				FUN_80163054();
			}
			else {
				FUN_8015cccc();
				lVar2 = GetRndSeed__Fv();
				glMid1Seed[(uint)currlevel] = lVar2;
				ConvertdPiece__Fv();
				FUN_80160ed4();
				lVar2 = GetRndSeed__Fv();
				glMid2Seed[(uint)currlevel] = lVar2;
				FUN_801595d4();
				InitItems__Fb(&DAT_00000001);
				FUN_8015e598();
				lVar2 = GetRndSeed__Fv();
				glMid3Seed[(uint)currlevel] = lVar2;
				FUN_80161fdc();
				InitDead__Fv();
				AddQuestItems__Fv();
				lVar2 = GetRndSeed__Fv();
				glEndSeed[(uint)currlevel] = lVar2;
			}
			SavePreLighting__Fv();
			Lrestoreplrpos__Fv();
		}
		ResyncQuests__Fv();
	}
	else {
		Lsaveplrpos__Fv();
		FUN_801556a8();
		FUN_80159edc();
		FUN_8015fd04();
		FUN_80160ed4();
		InitItems__Fb(&DAT_00000001);
		InitDead__Fv();
		if (lvldir == 4) {
			FUN_80163054();
		}
		if (lvldir == 5) {
			GetPortalLvlPos__Fv();
		}
		Lrestoreplrpos__Fv();
		InitMultiView__Fv();
		if (((firstflag == '\0') && (lvldir != 4)) &&
			 (*(char *)(myplr * 0x19e8 + -0x7ff25951 + (uint)setlvlnum) != '\0')) {
			FUN_80163054();
		}
		else {
			SavePreLighting__Fv();
		}
		ResyncQuests__Fv();
		FUN_80161fdc();
	}
	myplr = 0;
	if (leveltype != '\0') {
		FUN_8015a068();
	}
	InitLightMax__Fv();
	if (firstflag != '\0') {
		InitControlPan__Fv();
	}
	last_type = visible_level;
	visible_level = leveltype;
	pnum = 0;
	ConvertdPiece__Fv();
	BuildLevTrigs__Fv();
	Tfree__FPv(mydflags);
	mydflags = (uchar *)0x0;
	FreedPiece__Fv();
	ClrDiabloMsg__Fv();
	FillCrapBits__Fv();
	if (-1 < FePlayerNo) {
		ppvVar8 = &LoadedChar;
		puVar5 = (undefined *)0x0;
		do {
			*(uint *)((int)&plr.plrlevel + (int)puVar5) = (uint)currlevel;
			InitPlayerGFX__Fi(pnum);
			if (lvldir == 4) {
				iVar3 = AddVision__FiiiUc((int)*(short *)((int)&plr._px + (int)puVar5),
																	(int)*(short *)((int)&plr._py + (int)puVar5),10,(uchar)pnum);
				(&plr._pvid)[(int)puVar5] = (char)iVar3;
			}
			else {
				if (*ppvVar8 == (void *)0x0) {
					InitPlayer__FiUc(pnum,firstflag);
				}
				else {
					PlacePlayer__FiiiUc(pnum,ViewX,ViewY,'\0');
				}
			}
			ppvVar8 = ppvVar8 + 1;
			pnum = pnum + 1;
			puVar5 = &DAT_000019e8 + (int)puVar5;
		} while (pnum <= FePlayerNo);
	}
	ChangeLightXY__Fiii((int)plr._plid,(int)plr._px,(int)plr._py);
	ChangeLightOff__Fiii((int)plr._plid,(plr.WorldX & 0xfU) - 8,(plr.WorldY & 0xfU) - 8);
	if (FePlayerNo != 0) {
		ChangeLightXY__Fiii((int)PlayerStruct_800dbf20._plid,(int)PlayerStruct_800dbf20._px,
												(int)PlayerStruct_800dbf20._py);
		ChangeLightOff__Fiii
							((int)PlayerStruct_800dbf20._plid,(PlayerStruct_800dbf20.WorldX & 0xfU) - 8,
							 (PlayerStruct_800dbf20.WorldY & 0xfU) - 8);
	}
	if (leveltype != '\0') {
		ProcessLightList__Fv();
		ProcessVisionList__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed /*$a0*/)
 // line 3163, offset 0x80039ba8
	/* begin block 1 */
		// Start line: 3164
		// Start offset: 0x80039BA8
	/* end block 1 */
	// End offset: 0x80039BB4
	// End Line: 3166

	/* begin block 2 */
		// Start line: 6407
	/* end block 2 */
	// End Line: 6408

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetSpeed__F9GM_SPEEDS(GM_SPEEDS Speed)

{
	LastFrCount = -1;
	GameSpeed = Speed;
	return;
}



// decompiled code
// original method signature: 
// enum GM_SPEEDS /*$ra*/ GetSpeed__Fv()
 // line 3169, offset 0x80039bbc
	/* begin block 1 */
		// Start line: 3170
		// Start offset: 0x80039BBC
	/* end block 1 */
	// End offset: 0x80039BC0
	// End Line: 3171

	/* begin block 2 */
		// Start line: 6419
	/* end block 2 */
	// End Line: 6420

/* WARNING: Unknown calling convention yet parameter storage is locked */

GM_SPEEDS GetSpeed__Fv(void)

{
	return GameSpeed;
}



// decompiled code
// original method signature: 
// void /*$ra*/ game_logic__Fv()
 // line 3175, offset 0x80039bc8
	/* begin block 1 */
		// Start line: 3176
		// Start offset: 0x80039BC8
		// Variables:
	// 		int Frames; // $s1
	// 		int ThisTick; // $s2
	// 		int SinceLast; // $s0
	/* end block 1 */
	// End offset: 0x80039D94
	// End Line: 3272

	/* begin block 2 */
		// Start line: 6432
	/* end block 2 */
	// End Line: 6433

/* WARNING: Unknown calling convention yet parameter storage is locked */

void game_logic__Fv(void)

{
	bool bVar1;
	bool bVar2;
	ulong uVar3;
	uint uVar4;
	uint uVar5;
	
	if (PauseMode == '\0') {
		if (GameSpeed == GM_SLOW) {
			uVar5 = 3;
		}
		else {
			uVar5 = 2;
			if (GameSpeed != GM_FAST) {
				DBG_Error((char *)0x0,"source/DIABLO.cpp",0xc7d);
				uVar5 = 1;
			}
		}
		if (sgnTimeoutCurs == 0) {
			CheckCursMove__Fv();
		}
		uVar3 = VID_GetTick__Fv();
		bVar2 = uVar5 < 6;
		uVar4 = uVar5;
		if (LastFrCount != -1) {
			uVar4 = uVar3 - LastFrCount;
			bVar2 = (int)uVar4 < 6;
		}
		bVar1 = (int)uVar4 < (int)uVar5;
		if (!bVar2) {
			uVar4 = 5;
			bVar1 = 5 < uVar5;
		}
		if (!bVar1) {
			if (demo_pad_time != 0) {
				PAD_Handler__Fv();
			}
			if (gbProcessPlayers != '\0') {
				ProcessPlayers__Fv();
			}
			if (leveltype == '\0') {
				ProcessTowners__Fv();
				ProcessItems__Fv();
				ProcessLightList__Fv();
				ProcessBird__Fv();
				FUN_8014a694();
			}
			else {
				FUN_801549e4();
				ProcessObjects__Fv();
				FUN_8014a694();
				ProcessItems__Fv();
				ProcessLightList__Fv();
				ProcessVisionList__Fv();
			}
			sound_update__Fv();
			if (plr.plractive != '\0') {
				myplr = 0;
				CheckTriggers__Fi(0);
			}
			if (PlayerStruct_800dbf20.plractive != '\0') {
				myplr = 1;
				CheckTriggers__Fi(1);
			}
			myplr = 0;
			CheckQuests__Fv();
			LastFrCount = uVar3 - (uVar4 - uVar5);
			force_redraw = force_redraw | 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ timeout_cursor__FUc(unsigned char bTimeout /*$a0*/)
 // line 3278, offset 0x80039db0
	/* begin block 1 */
		// Start line: 3279
		// Start offset: 0x80039DB0
	/* end block 1 */
	// End offset: 0x80039E48
	// End Line: 3309

	/* begin block 2 */
		// Start line: 6642
	/* end block 2 */
	// End Line: 6643

/* WARNING: Unknown calling convention yet parameter storage is locked */

void timeout_cursor__FUc(uchar bTimeout)

{
	if (bTimeout == '\0') {
		if (sgnTimeoutCurs == 0) {
			return;
		}
		SetCursor__Fi(sgnTimeoutCurs);
		sgnTimeoutCurs = 0;
		ClearPanel__Fv();
	}
	else {
		if (sgnTimeoutCurs != 0) {
			return;
		}
		if (sgbMouseDown != '\0') {
			return;
		}
		sgnTimeoutCurs = (&_pcurs)[myplr];
		ClearPanel__Fv();
		NewCursor__Fi(0xb);
	}
	force_redraw = 0xff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ game_loop__FUc(unsigned char bStartup /*$a0*/)
 // line 3317, offset 0x80039e58
	/* begin block 1 */
		// Start line: 3318
		// Start offset: 0x80039E58
	/* end block 1 */
	// End offset: 0x80039EA8
	// End Line: 3359

	/* begin block 2 */
		// Start line: 6720
	/* end block 2 */
	// End Line: 6721

/* WARNING: Unknown calling convention yet parameter storage is locked */

void game_loop__FUc(uchar bStartup)

{
	void *pvVar1;
	
	pvVar1 = IsGameLoading__Fv();
	if (pvVar1 == (void *)0x0) {
		if (pauseo == (void *)0x0) {
			pauseo = &DAT_00000001;
			PA_SetPauseOk__Fb(&DAT_00000001);
		}
		timeout_cursor__FUc('\0');
		game_logic__Fv();
	}
	else {
		pauseo = (void *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ alloc_plr__Fv()
 // line 3448, offset 0x80039eb8
	/* begin block 1 */
		// Start line: 3449
		// Start offset: 0x80039EB8
	/* end block 1 */
	// End offset: 0x80039EB8
	// End Line: 3450

	/* begin block 2 */
		// Start line: 6987
	/* end block 2 */
	// End Line: 6988

/* WARNING: Unknown calling convention yet parameter storage is locked */

void alloc_plr__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ plr_encrypt__FUc(unsigned char bEncrypt /*$a0*/)
 // line 3516, offset 0x80039ec0
	/* begin block 1 */
		// Start line: 3517
		// Start offset: 0x80039EC0
	/* end block 1 */
	// End offset: 0x80039EC0
	// End Line: 3517

	/* begin block 2 */
		// Start line: 7176
	/* end block 2 */
	// End Line: 7177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void plr_encrypt__FUc(uchar bEncrypt)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ assert_fail__FiPCcT1(int nLineNo /*$a0*/, char *pszFile /*$a1*/, char *pszFail /*$a2*/)
 // line 3581, offset 0x80039ec8
	/* begin block 1 */
		// Start line: 3582
		// Start offset: 0x80039EC8
	/* end block 1 */
	// End offset: 0x80039ED8
	// End Line: 3584

	/* begin block 2 */
		// Start line: 7248
	/* end block 2 */
	// End Line: 7249

/* WARNING: Unknown calling convention yet parameter storage is locked */

void assert_fail__FiPCcT1(int nLineNo,char *pszFile,char *pszFail)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ assert_fail__FiPCc(int nLineNo /*$a0*/, char *pszFile /*$a1*/)
 // line 3588, offset 0x80039ee8
	/* begin block 1 */
		// Start line: 3589
		// Start offset: 0x80039EE8
	/* end block 1 */
	// End offset: 0x80039EF8
	// End Line: 3591

	/* begin block 2 */
		// Start line: 7262
	/* end block 2 */
	// End Line: 7263

/* WARNING: Unknown calling convention yet parameter storage is locked */

void assert_fail__FiPCc(int nLineNo,char *pszFile)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ app_fatal(char *pszFile /*$a0*/)
 // line 3593, offset 0x80039f08
	/* begin block 1 */
		// Start line: 3594
		// Start offset: 0x80039F08
	/* end block 1 */
	// End offset: 0x80039F28
	// End Line: 3595

	/* begin block 2 */
		// Start line: 7272
	/* end block 2 */
	// End Line: 7273

/* WARNING: Unknown calling convention yet parameter storage is locked */

void app_fatal(char *pszFile)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoMemCardFromFrontEnd__Fv()
 // line 3853, offset 0x80039f38
	/* begin block 1 */
		// Start line: 3854
		// Start offset: 0x80039F38
	/* end block 1 */
	// End offset: 0x80039F50
	// End Line: 3860

	/* begin block 2 */
		// Start line: 7792
	/* end block 2 */
	// End Line: 7793

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoMemCardFromFrontEnd__Fv(void)

{
	OVR_LoadMemcard__Fv();
	OVR_LoadFrontend__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoMemCardFromInGame__Fv()
 // line 3863, offset 0x80039f60
	/* begin block 1 */
		// Start line: 3864
		// Start offset: 0x80039F60
	/* end block 1 */
	// End offset: 0x80039F78
	// End Line: 3870

	/* begin block 2 */
		// Start line: 7812
	/* end block 2 */
	// End Line: 7813

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoMemCardFromInGame__Fv(void)

{
	OVR_LoadMemcard__Fv();
	OVR_LoadGame__Fv();
	return;
}





