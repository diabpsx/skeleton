#include "THISDUST.H"
#include "DIABLO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeGameMem__Fv()
 // line 284, offset 0x800357f4
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x800357F4

		/* begin block 1.1 */
			// Start line: 285
			// Start offset: 0x800357F4
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x800357F4
		// End Line: 285
	/* end block 1 */
	// End offset: 0x80035834
	// End Line: 298

	/* begin block 2 */
		// Start line: 568
	/* end block 2 */
	// End Line: 569

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeGameMem__Fv(void)

{
	uchar *p;
	
	music_stop__Fv();
	p = pMegaTiles;
	pMegaTiles = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	FreeObjectGFX__Fv();
	FreeMonsterSnd__Fv();
	FreeTownerGFX__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ start_game__FUi(unsigned int uMsg /*$s0*/)
 // line 304, offset 0x80035844
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80035844
	/* end block 1 */
	// End offset: 0x8003588C
	// End Line: 321

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

void start_game__FUi(uint uMsg)

{
	gbDoEnding = '\0';
	svgamode = '\x01';
	InitCursor__Fv();
	InitLightTable__Fv();
	music_stop__Fv();
	ShowProgress__FUi(uMsg);
	InitLevelCursor__Fv();
	sgnTimeoutCurs = 0;
	sgbMouseDown = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ free_game__Fv()
 // line 325, offset 0x800358a0
	/* begin block 1 */
		// Start line: 326
		// Start offset: 0x800358A0

		/* begin block 1.1 */
			// Start line: 326
			// Start offset: 0x800358A0
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x800358E0
		// End Line: 337
	/* end block 1 */
	// End offset: 0x80035900
	// End Line: 343

	/* begin block 2 */
		// Start line: 652
	/* end block 2 */
	// End Line: 653

/* WARNING: Unknown calling convention yet parameter storage is locked */

void free_game__Fv(void)

{
	int pnum;
	
	FreeControlPan__Fv();
	pnum = 0;
	FreeInvGFX__Fv();
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
 // line 358, offset 0x80035914
	/* begin block 1 */
		// Start line: 359
		// Start offset: 0x80035914
		// Variables:
	// 		unsigned char fExitProgram; // stack offset -16
	// 		unsigned int uMsg; // $a0
	/* end block 1 */
	// End offset: 0x800359C4
	// End Line: 397

	/* begin block 2 */
		// Start line: 718
	/* end block 2 */
	// End Line: 719

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
		FUN_80159d1c();
		FUN_8015ca0c();
		FUN_8015c9ac();
		InitDungMsgs__Fi(myplr);
		uMsg = 0x4a;
	}
	start_game__FUi(uMsg);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ StartGame__FUcUc(unsigned char bNewGame /*$s3*/, unsigned char bSinglePlayer /*$s4*/)
 // line 401, offset 0x800359d8
	/* begin block 1 */
		// Start line: 402
		// Start offset: 0x800359D8

		/* begin block 1.1 */
			// Start line: 415
			// Start offset: 0x80035A18
			// Variables:
		// 		unsigned char fExitProgram; // stack offset -32
		// 		unsigned int uMsg; // $s0
		/* end block 1.1 */
		// End offset: 0x80035B98
		// End Line: 479
	/* end block 1 */
	// End offset: 0x80035B9C
	// End Line: 486

	/* begin block 2 */
		// Start line: 807
	/* end block 2 */
	// End Line: 808

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
			if (gbValidSaveFile == '\0') goto LAB_80035ac4;
LAB_80035b0c:
			uMsg = 0;
			GRL_PostMessage__FUlUilUl(ghMainWnd,Msg,0,0);
		}
		else {
			Msg = 0x4d;
			if (demo_pad_time != 0) {
				currlevel = (uchar)level_record;
				leveltype = (uchar)gnLevelTypeTbl[level_record & 0xff];
				goto LAB_80035b0c;
			}
LAB_80035ac4:
			uMsg = 0x4a;
			OVR_LoadPregame__Fv();
			FUN_80159d1c();
			FUN_8015ca0c();
			FUN_8015c9ac();
			InitDungMsgs__Fi(myplr);
		}
		if ((FePlayerNo != 0) && (plr[1].plractive == '\0')) {
			myplr = 1;
			NetSendCmdLocParam1__FUcUcUcUcUs
								('\x01','5',(uchar)plr[1]._px,(uchar)plr[1]._py,(uint)(ushort)plr[0].plrlevel);
			plr[1].plractive = '\x01';
			myplr = 0;
		}
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
 // line 491, offset 0x80035bc0
	/* begin block 1 */
		// Start line: 492
		// Start offset: 0x80035BC0
		// Variables:
	// 		unsigned long (*saveProc)(); // $s2
	// 		struct MSG msg; // stack offset -48
	/* end block 1 */
	// End offset: 0x80035D14
	// End Line: 608

	/* begin block 2 */
		// Start line: 1002
	/* end block 2 */
	// End Line: 1003

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
	DrawAndBlit__Fv();
	ClrDiabloMsg__Fv();
	force_redraw = 0xff;
	gbGameLoopStartup = '\x01';
	plr_encrypt__FUc('\x01');
	ML_Init__Fv();
	while (gbRunGame != '\0') {
		if (plr[0].plractive == '\0') {
			myplr = 1;
		}
		plr_encrypt__FUc('\0');
		game_loop__FUc(gbGameLoopStartup);
		gbGameLoopStartup = '\0';
		DrawAndBlit__Fv();
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
	if (pvVar1 == (void *)0x0) {
		DBG_SendMessage("FADE OUT - MISSED %s %d");
	}
	else {
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
 // line 1041, offset 0x80035d30
	/* begin block 1 */
		// Start line: 1042
		// Start offset: 0x80035D30
	/* end block 1 */
	// End offset: 0x800360F8
	// End Line: 1122

	/* begin block 2 */
		// Start line: 2106
	/* end block 2 */
	// End Line: 2107

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TryIconCurs__Fv(void)

{
	uint uVar1;
	int iVar2;
	uchar bCmd;
	ushort wParam1;
	char cVar3;
	
	iVar2 = _pcurs[myplr];
	if (iVar2 == 8) {
		cVar3 = (&_pcursplr)[sel_data];
		bCmd = '\x1a';
	}
	else {
		bCmd = 'M';
		if (iVar2 != 10) {
			if (iVar2 == 7) {
				DoTelekinesis__Fv();
				return '\x01';
			}
			if (iVar2 == 2) {
				if ((int)_pcursinvitem[sel_data] != -1) {
					CheckIdentify__Fii(myplr,(int)_pcursinvitem[sel_data]);
				}
			}
			else {
				if (iVar2 == 3) {
					if ((int)_pcursinvitem[sel_data] != -1) {
						DoRepair__Fii(myplr,(int)_pcursinvitem[sel_data]);
					}
				}
				else {
					if (iVar2 == 4) {
						if ((int)_pcursinvitem[sel_data] != -1) {
							DoRecharge__Fii(myplr,(int)_pcursinvitem[sel_data]);
						}
					}
					else {
						if (iVar2 == 9) {
							if ((&_pcursmonst)[sel_data] == -1) {
								if ((&_pcursplr)[sel_data] == -1) {
									uVar1 = GetSpellLevel__Fii(myplr,(int)plr[myplr]._pTSpell);
									NetSendCmdLocParam2__FUcUcUcUcUsUs
														('\x01','\x0f',(uchar)cursmx,(uchar)cursmy,
														 (int)plr[myplr]._pTSpell & 0xffff,uVar1 & 0xffff);
									goto LAB_800360ec;
								}
								uVar1 = GetSpellLevel__Fii(myplr,(int)plr[myplr]._pTSpell);
								bCmd = '\x19';
								cVar3 = plr[myplr]._pTSpell;
								wParam1 = SEXT12((&_pcursplr)[sel_data]);
							}
							else {
								uVar1 = GetSpellLevel__Fii(myplr,(int)plr[myplr]._pTSpell);
								bCmd = '\x18';
								wParam1 = *(ushort *)(&_pcursmonst + sel_data);
								cVar3 = plr[myplr]._pTSpell;
							}
							NetSendCmdParam3__FUcUcUsUsUs('\x01',bCmd,wParam1,(short)cVar3,uVar1 & 0xffff);
						}
						else {
							if (iVar2 != 5) {
								return '\0';
							}
							if ((&_pcursobj)[sel_data] != -1) {
								return '\0';
							}
						}
					}
				}
			}
LAB_800360ec:
			NewCursor__Fi(1);
			return '\x01';
		}
		cVar3 = (&_pcursplr)[sel_data];
	}
	NetSendCmdParam1__FUcUcUs('\x01',bCmd,(short)cVar3);
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ DisableInputWndProc__FUlUilUl(unsigned long hWnd /*$a0*/, unsigned int uMsg /*$a1*/, long wParam /*$a2*/, unsigned long lParam /*$a3*/)
 // line 2144, offset 0x8003610c
	/* begin block 1 */
		// Start line: 2145
		// Start offset: 0x8003610C
	/* end block 1 */
	// End offset: 0x8003610C
	// End Line: 2192

	/* begin block 2 */
		// Start line: 4359
	/* end block 2 */
	// End Line: 4360

ulong DisableInputWndProc__FUlUilUl(ulong hWnd,uint uMsg,long wParam,ulong lParam)

{
	return 0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GM_Game__FUlUilUl(unsigned long hWnd /*$a0*/, unsigned int uMsg /*$s0*/, long wParam /*$a2*/, unsigned long lParam /*$a3*/)
 // line 2198, offset 0x80036114
	/* begin block 1 */
		// Start line: 2199
		// Start offset: 0x80036114
	/* end block 1 */
	// End offset: 0x800361B0
	// End Line: 2359

	/* begin block 2 */
		// Start line: 4420
	/* end block 2 */
	// End Line: 4421

ulong GM_Game__FUlUilUl(ulong hWnd,uint uMsg,long wParam,ulong lParam)

{
	if (uMsg < 0x4a) {
		if (uMsg < 0x42) {
			if (uMsg != 1) {
				return 0;
			}
			if (wParam != 0) {
				return 0;
			}
			gbRunGame = '\0';
			gbRunGameResult = '\0';
			return 0;
		}
	}
	else {
		if (uMsg != 0x4c) {
			return 0;
		}
	}
	sound_stop__Fv();
	music_stop__Fv();
	sgbMouseDown = '\0';
	ShowProgress__FUi(uMsg);
	force_redraw = 0xff;
	DrawAndBlit__Fv();
	gbGameLoopStartup = '\x01';
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadLvlGFX__Fv()
 // line 2365, offset 0x800361c4
	/* begin block 1 */
		// Start line: 2366
		// Start offset: 0x800361C4
	/* end block 1 */
	// End offset: 0x80036250
	// End Line: 2433

	/* begin block 2 */
		// Start line: 4759
	/* end block 2 */
	// End Line: 4760

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadLvlGFX__Fv(void)

{
	char *Name;
	
	switch(leveltype) {
	case '\0':
		Name = "Levels\\TownData\\Town.TIL";
		break;
	case '\x01':
		Name = "Levels\\L1Data\\L1.TIL";
		break;
	case '\x02':
		Name = "Levels\\L2Data\\L2.TIL";
		break;
	case '\x03':
		Name = "Levels\\L3Data\\L3.TIL";
		break;
	case '\x04':
		Name = "Levels\\L4Data\\L4.TIL";
		break;
	default:
		goto switchD_800361f0_caseD_5;
	}
	pMegaTiles = GRL_LoadFileInMemSig__FPCcPUl(Name,(ulong *)0x0);
switchD_800361f0_caseD_5:
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadAllGFX__Fv()
 // line 2440, offset 0x80036260
	/* begin block 1 */
		// Start line: 2441
		// Start offset: 0x80036260
	/* end block 1 */
	// End offset: 0x80036270
	// End Line: 2453

	/* begin block 2 */
		// Start line: 4909
	/* end block 2 */
	// End Line: 4910

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadAllGFX__Fv(void)

{
	InitObjectGFX__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateLevel__Fi(int lvldir /*stack -24*/)
 // line 2473, offset 0x80036280
	/* begin block 1 */
		// Start line: 2474
		// Start offset: 0x80036280
		// Variables:
	// 		long hnd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80036368
	// End Line: 2494

	/* begin block 2 */
		// Start line: 4975
	/* end block 2 */
	// End Line: 4976

void CreateLevel__Fi(int lvldir)

{
	uchar uVar1;
	long Handle;
	int iVar2;
	
	Handle = GAL_Alloc((ulong)&LAB_00014000,1,"STACK");
	if (Handle == -1) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9af);
	}
	TempStack = (uchar *)GAL_Lock(Handle);
	if (TempStack == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9b2);
	}
	TempStack = TempStack + 0x13ffc;
	iVar2 = setjmp((__jmp_buf_tag *)CreateEnv);
	if (iVar2 == 0) {
		Passedlvldir = lvldir;
		GSYS_SetStackAndJump(TempStack,LoCreateLevel__FPv,(void *)0x0);
	}
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/DIABLO.cpp",0x9bd);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoCreateLevel__FPv()
 // line 2502, offset 0x80036378
	/* begin block 1 */
		// Start line: 2503
		// Start offset: 0x80036378
		// Variables:
	// 		int lvldir; // $s0
	/* end block 1 */
	// End offset: 0x800364EC
	// End Line: 2557

	/* begin block 2 */
		// Start line: 5041
	/* end block 2 */
	// End Line: 5042

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoCreateLevel__FPv(void)

{
	int entry;
	undefined in_a2;
	undefined in_a3;
	undefined unaff_s0;
	undefined unaff_retaddr;
	undefined4 in_stack_00000000;
	undefined4 in_stack_00000004;
	undefined4 in_stack_00000008;
	undefined4 in_stack_0000000c;
	undefined4 in_stack_00000010;
	
	entry = Passedlvldir;
	ClearOutDungeonMap__Fv();
	SND_LoadBank__Fi((uint)currlevel);
	if (leveltype < 5) {
		switch(leveltype) {
		case '\0':
			CreateTown__Fi(entry);
			FUN_8015fefc();
			entry = 0;
			break;
		case '\x01':
			FUN_8013e898(glSeedTbl[(uint)currlevel],entry);
			FUN_8016025c();
			Freeupstairs__Fv();
			entry = 1;
			break;
		case '\x02':
			FUN_80145e78(glSeedTbl[(uint)currlevel],entry);
			FUN_80160370();
			Freeupstairs__Fv();
			entry = 2;
			break;
		case '\x03':
			FUN_8014aabc((char)glSeedTbl[(uint)currlevel],(char)entry,in_a2,in_a3,unaff_s0,unaff_retaddr,
									 (char)in_stack_00000000,(char)in_stack_00000004,in_stack_00000008,
									 in_stack_0000000c,in_stack_00000010);
			FUN_80160500();
			Freeupstairs__Fv();
			entry = 3;
			break;
		case '\x04':
			FUN_80152790((char)glSeedTbl[(uint)currlevel],(char)entry,in_a2,in_a3,unaff_s0,unaff_retaddr,
									 in_stack_00000000,in_stack_00000004,in_stack_00000008);
			FUN_8016065c();
			Freeupstairs__Fv();
			entry = 4;
		}
		LoadRndLvlPal__Fi(entry);
	}
										/* WARNING: Subroutine does not return */
	longjmp((__jmp_buf_tag *)CreateEnv,1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearOutDungeonMap__Fv()
 // line 2560, offset 0x80036500
	/* begin block 1 */
		// Start line: 2561
		// Start offset: 0x80036500
		// Variables:
	// 		unsigned short val; // $t3

		/* begin block 1.1 */
			// Start line: 2580
			// Start offset: 0x80036568
			// Variables:
		// 		int x; // $t2

			/* begin block 1.1.1 */
				// Start line: 2580
				// Start offset: 0x80036584

				/* begin block 1.1.1.1 */
					// Start line: 2581
					// Start offset: 0x80036590
					// Variables:
				// 		int y; // $a2
				/* end block 1.1.1.1 */
				// End offset: 0x800365C0
				// End Line: 2586
			/* end block 1.1.1 */
			// End offset: 0x800365C0
			// End Line: 2586
		/* end block 1.1 */
		// End offset: 0x800365D4
		// End Line: 2586
	/* end block 1 */
	// End offset: 0x800365D4
	// End Line: 2586

	/* begin block 2 */
		// Start line: 5161
	/* end block 2 */
	// End Line: 5162

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearOutDungeonMap__Fv(void)

{
	ushort *puVar1;
	uchar *puVar2;
	uchar *puVar3;
	int iVar4;
	ushort *puVar5;
	uchar *puVar6;
	uchar *puVar7;
	int iVar8;
	ushort uVar9;
	
	uVar9 = 0;
	if (leveltype == '\x02') {
		uVar9 = 0xc;
	}
	else {
		if (leveltype < 3) {
			if (leveltype == '\x01') {
				uVar9 = 0x16;
			}
		}
		else {
			if (leveltype == '\x03') {
				uVar9 = 8;
			}
			else {
				if (leveltype == '\x04') {
					uVar9 = 0x14;
				}
			}
		}
	}
	iVar8 = 0;
	puVar7 = &dflags;
	puVar6 = &pdungeon;
	puVar5 = &dungeon;
	while (iVar4 = 0, puVar1 = puVar5, puVar2 = puVar6, puVar3 = puVar7, iVar8 < 0x38) {
		do {
			*puVar1 = uVar9;
			*puVar2 = '\0';
			*puVar3 = '\0';
			iVar4 = iVar4 + 1;
			puVar1 = puVar1 + 1;
			puVar2 = puVar2 + 1;
			puVar3 = puVar3 + 1;
		} while (iVar4 < 0x38);
		puVar7 = puVar7 + 0x28;
		puVar6 = puVar6 + 0x28;
		puVar5 = puVar5 + 0x30;
		iVar8 = iVar8 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadGameLevel__FUci(unsigned char firstflag /*$s4*/, int lvldir /*$s2*/)
 // line 2592, offset 0x800365dc
	/* begin block 1 */
		// Start line: 2593
		// Start offset: 0x800365DC
		// Variables:
	// 		int i; // $s0
	// 		int j; // $a0

		/* begin block 1.1 */
			// Start line: 2628
			// Start offset: 0x800366E0

			/* begin block 1.1.1 */
				// Start line: 2646
				// Start offset: 0x80036714
				// Variables:
			// 		unsigned char visited; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80036BE4
			// End Line: 2797
		/* end block 1.1 */
		// End offset: 0x80036D40
		// End Line: 2858
	/* end block 1 */
	// End offset: 0x80036F3C
	// End Line: 2926

	/* begin block 2 */
		// Start line: 5225
	/* end block 2 */
	// End Line: 5226

void LoadGameLevel__FUci(uchar firstflag,int lvldir)

{
	bool bVar1;
	long lVar2;
	ItemStruct *s;
	int iVar3;
	int iVar4;
	int in_a2;
	undefined in_a3;
	undefined4 local_18;
	int pnum;
	int iVar5;
	short *psVar6;
	short *psVar7;
	undefined4 in_stack_ffffffd8;
	undefined in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	
	if (setseed != 0) {
		glSeedTbl[(uint)currlevel] = setseed;
	}
	pnum = lvldir;
	music_stop__Fv();
	SetCursor__Fi(1);
	SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
	MakeLightTable__Fv();
	LoadLvlGFX__Fv();
	if (firstflag != '\0') {
		FUN_8015d49c();
		InitItemGFX__Fv();
		InitQuestText__Fv();
		FUN_801609a0();
		FUN_8015d6b4();
	}
	s = (ItemStruct *)glSeedTbl[(uint)currlevel];
	SetRndSeed__Fl((long)s);
	if (leveltype == '\0') {
		FUN_80160a20();
	}
	FUN_8015d4f0();
	InitLighting__Fv();
	InitVision__Fv();
	FUN_8015dbe4();
	if (setlevel != '\0') {
		FUN_80152c40((char)s,(char)pnum,(char)in_a2,in_a3,in_stack_ffffffd8,in_stack_ffffffdc,
								 in_stack_ffffffe0,in_stack_ffffffe4,local_18);
		FUN_8015dc68();
		FUN_8015ed78();
		InitDead__Fv();
		FUN_80157fa8(s,pnum,in_a2);
		pnum = 0;
		if (lvldir == 5) {
			GetPortalLvlPos__Fv();
		}
		iVar5 = 0;
		do {
			if ((((&plr[0].plractive)[iVar5] != '\0') &&
					((uint)currlevel == *(uint *)((int)&plr[0].plrlevel + iVar5))) &&
				 (myplr = pnum, InitPlayerGFX__Fi(pnum), lvldir != 4)) {
				InitPlayer__FiUc(pnum,firstflag);
			}
			pnum = pnum + 1;
			iVar5 = iVar5 + 0x23a8;
		} while (pnum < 2);
		myplr = 0;
		InitMultiView__Fv();
		if (((firstflag == '\0') && (lvldir != 4)) &&
			 (*(char *)(myplr * 0x23a8 + -0x7ff21361 + (uint)setlvlnum) != '\0')) {
			FUN_80160bd0();
		}
		else {
			InitItems__Fv();
			SavePreLighting__Fv();
		}
		FUN_8015fd00();
		goto LAB_80036d40;
	}
	s = (ItemStruct *)lvldir;
	CreateLevel__Fi(lvldir);
	FUN_80157fa8(s,pnum,in_a2);
	SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
	if (leveltype != '\0') {
		FUN_8015dc68();
		FUN_8015ab10();
		LoadAllGFX__Fv();
	}
	if (lvldir == 3) {
		GetReturnLvlPos__Fv();
	}
	pnum = 0;
	if (lvldir == 5) {
		GetPortalLvlPos__Fv();
		iVar5 = 0;
		if ((plr[0].plractive != '\0') && (plr[1].plractive != '\0')) {
			PlacePlayer__FiiiUc(1,ViewX,ViewY,'\0');
			goto LAB_800367dc;
		}
	}
	else {
LAB_800367dc:
		pnum = 0;
		iVar5 = 0;
	}
	do {
		if ((&plr[0].plractive)[iVar5] != '\0') {
			*(uint *)((int)&plr[0].plrlevel + iVar5) = (uint)currlevel;
			InitPlayerGFX__Fi(pnum);
			if (lvldir == 4) {
				iVar4 = AddVision__FiiiUc((int)*(short *)((int)&plr[0]._px + iVar5),
																	(int)*(short *)((int)&plr[0]._py + iVar5),10,pnum == myplr);
				(&plr[0]._pvid)[iVar5] = (char)iVar4;
			}
			else {
				InitPlayer__FiUc(pnum,'\0');
			}
		}
		pnum = pnum + 1;
		iVar5 = iVar5 + 0x23a8;
	} while (pnum < 2);
	pnum = 0;
	PlayDungMsgs__Fv();
	InitMultiView__Fv();
	bVar1 = false;
	if (gbMaxPlayers != '\0') {
		iVar4 = -0x7ff21372;
		iVar5 = 0;
		do {
			if (((&plr[0].plractive)[iVar5] != '\0') &&
				 ((bVar1 || (bVar1 = false, *(char *)(iVar4 + (uint)currlevel) != '\0')))) {
				bVar1 = true;
			}
			iVar4 = iVar4 + 0x23a8;
			pnum = pnum + 1;
			iVar5 = iVar5 + 0x23a8;
		} while (pnum < (int)(uint)gbMaxPlayers);
	}
	SetRndSeed__Fl(glSeedTbl[(uint)currlevel]);
	if (leveltype == '\0') {
		iVar5 = 0;
		pnum = 0;
		do {
			iVar3 = 0;
			iVar4 = pnum;
			do {
				iVar3 = iVar3 + 1;
				(&dung_map[0].dFlags)[iVar4] = (&dung_map[0].dFlags)[iVar4] | 0x40;
				iVar4 = iVar4 + 0xc;
			} while (iVar3 < 0x70);
			iVar5 = iVar5 + 1;
			pnum = pnum + 0x510;
		} while (iVar5 < 0x70);
		InitTowners__Fv();
		InitItems__Fv();
		FUN_8015fd00();
		InitBird__Fv();
		if (((firstflag != '\0') || (lvldir == 4)) ||
			 (*(char *)(myplr * 0x23a8 + -0x7ff21372 + (uint)currlevel) == '\0')) goto LAB_80036bc0;
		if (gbMaxPlayers == '\x01') goto LAB_80036bb8;
	}
	else {
		if (((firstflag == '\0') && (lvldir != 4)) &&
			 ((*(char *)(myplr * 0x23a8 + -0x7ff21372 + (uint)currlevel) != '\0' &&
				(gbMaxPlayers == '\x01')))) {
			FUN_8015ae5c();
			FUN_8015ed78();
			FUN_8015763c();
			FUN_8015c7c8();
			FUN_8015fd00();
			InitDead__Fv();
LAB_80036bb8:
			FUN_80160bd0();
		}
		else {
			FUN_8015ae5c();
			lVar2 = GetRndSeed__Fv();
			glMid1Seed[(uint)currlevel] = lVar2;
			FUN_8015ed78();
			lVar2 = GetRndSeed__Fv();
			glMid2Seed[(uint)currlevel] = lVar2;
			FUN_8015763c();
			InitItems__Fv();
			FUN_8015c7c8();
			lVar2 = GetRndSeed__Fv();
			glMid3Seed[(uint)currlevel] = lVar2;
			FUN_8015fd00();
			InitDead__Fv();
			lVar2 = GetRndSeed__Fv();
			glEndSeed[(uint)currlevel] = lVar2;
			FUN_80160bd0();
			SavePreLighting__Fv();
		}
LAB_80036bc0:
		if (gbMaxPlayers == '\x01') {
			ResyncQuests__Fv();
			goto LAB_80036d40;
		}
	}
	ResyncMPQuests__Fv();
LAB_80036d40:
	pnum = 0;
	SyncPortals__Fv();
	psVar6 = &plr[0]._px;
	psVar7 = &plr[0]._py;
	iVar5 = 0;
	do {
		if (((&plr[0].plractive)[iVar5] != '\0') &&
			 (*(uint *)((int)&plr[0].plrlevel + iVar5) == (uint)currlevel)) {
			if (*(int *)((int)&plr[0]._pHitPoints + iVar5) < 1) {
				dung_map[(int)*psVar6 * 0x6c + (int)*psVar7].dFlags =
						 dung_map[(int)*psVar6 * 0x6c + (int)*psVar7].dFlags | 4;
			}
			else {
				if (gbMaxPlayers == '\x01') {
					dung_map[(int)*psVar6 * 0x6c + (int)*psVar7].dPlayer = (char)pnum + '\x01';
				}
				else {
					myplr = pnum;
					SyncInitPlrPos__Fi(pnum);
				}
			}
		}
		psVar6 = psVar6 + 0x11d4;
		psVar7 = psVar7 + 0x11d4;
		pnum = pnum + 1;
		iVar5 = iVar5 + 0x23a8;
	} while (pnum < 2);
	myplr = 0;
	if (leveltype != '\0') {
		FUN_80158154();
	}
	InitLightMax__Fv();
	if (firstflag != '\0') {
		InitControlPan__Fv();
	}
	if (leveltype != '\0') {
		ProcessLightList__Fv();
		ProcessVisionList__Fv();
	}
	if (((setlevel != '\0') && (setlvlnum == '\x01')) && (QuestStruct_800e347c._qactive == '\x02')) {
		PlaySFX__Fi(USFX_SKING1);
	}
	last_type = visible_level;
	visible_level = leveltype;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ game_logic__Fv()
 // line 2938, offset 0x80036f60
	/* begin block 1 */
		// Start line: 2939
		// Start offset: 0x80036F60
	/* end block 1 */
	// End offset: 0x8003705C
	// End Line: 2991

	/* begin block 2 */
		// Start line: 5942
	/* end block 2 */
	// End Line: 5943

/* WARNING: Unknown calling convention yet parameter storage is locked */

void game_logic__Fv(void)

{
	if (sgnTimeoutCurs == 0) {
		CheckCursMove__Fv();
	}
	if (gbProcessPlayers != '\0') {
		ProcessPlayers__Fv();
	}
	if (leveltype == '\0') {
		ProcessTowners__Fv();
		ProcessItems__Fv();
		ProcessLightList__Fv();
		ProcessBird__Fv();
		ProcessMissiles__Fv();
	}
	else {
		ProcessMonsters__Fv();
		ProcessObjects__Fv();
		ProcessMissiles__Fv();
		ProcessItems__Fv();
		ProcessLightList__Fv();
		ProcessVisionList__Fv();
	}
	sound_update__Fv();
	if (plr[0].plractive != '\0') {
		CheckTriggers__Fi(0);
	}
	if (plr[1].plractive != '\0') {
		CheckTriggers__Fi(1);
	}
	CheckQuests__Fv();
	force_redraw = force_redraw | 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ timeout_cursor__FUc(unsigned char bTimeout /*$a0*/)
 // line 3000, offset 0x8003706c
	/* begin block 1 */
		// Start line: 3001
		// Start offset: 0x8003706C
	/* end block 1 */
	// End offset: 0x80037104
	// End Line: 3031

	/* begin block 2 */
		// Start line: 6066
	/* end block 2 */
	// End Line: 6067

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
		sgnTimeoutCurs = _pcurs[myplr];
		ClearPanel__Fv();
		NewCursor__Fi(0xb);
	}
	force_redraw = 0xff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ game_loop__FUc(unsigned char bStartup /*$a0*/)
 // line 3038, offset 0x80037114
	/* begin block 1 */
		// Start line: 3039
		// Start offset: 0x80037114
	/* end block 1 */
	// End offset: 0x8003713C
	// End Line: 3071

	/* begin block 2 */
		// Start line: 6142
	/* end block 2 */
	// End Line: 6143

void game_loop__FUc(uchar bStartup)

{
	void *pvVar1;
	
	pvVar1 = IsGameLoading__Fv();
	if (pvVar1 == (void *)0x0) {
		timeout_cursor__FUc('\0');
		game_logic__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ alloc_plr__Fv()
 // line 3160, offset 0x8003714c
	/* begin block 1 */
		// Start line: 3161
		// Start offset: 0x8003714C
	/* end block 1 */
	// End offset: 0x8003714C
	// End Line: 3162

	/* begin block 2 */
		// Start line: 6391
	/* end block 2 */
	// End Line: 6392

/* WARNING: Unknown calling convention yet parameter storage is locked */

void alloc_plr__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ plr_encrypt__FUc(unsigned char bEncrypt /*$a0*/)
 // line 3228, offset 0x80037154
	/* begin block 1 */
		// Start line: 3229
		// Start offset: 0x80037154
	/* end block 1 */
	// End offset: 0x80037154
	// End Line: 3229

	/* begin block 2 */
		// Start line: 6580
	/* end block 2 */
	// End Line: 6581

void plr_encrypt__FUc(uchar bEncrypt)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ assert_fail__FiPCcT1(int nLineNo /*$a0*/, char *pszFile /*$a1*/, char *pszFail /*$a2*/)
 // line 3293, offset 0x8003715c
	/* begin block 1 */
		// Start line: 3294
		// Start offset: 0x8003715C
	/* end block 1 */
	// End offset: 0x8003716C
	// End Line: 3296

	/* begin block 2 */
		// Start line: 6652
	/* end block 2 */
	// End Line: 6653

void assert_fail__FiPCcT1(int nLineNo,char *pszFile,char *pszFail)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ assert_fail__FiPCc(int nLineNo /*$a0*/, char *pszFile /*$a1*/)
 // line 3300, offset 0x8003717c
	/* begin block 1 */
		// Start line: 3301
		// Start offset: 0x8003717C
	/* end block 1 */
	// End offset: 0x8003718C
	// End Line: 3303

	/* begin block 2 */
		// Start line: 6666
	/* end block 2 */
	// End Line: 6667

void assert_fail__FiPCc(int nLineNo,char *pszFile)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ app_fatal(char *pszFile /*$a0*/)
 // line 3305, offset 0x8003719c
	/* begin block 1 */
		// Start line: 3306
		// Start offset: 0x8003719C
	/* end block 1 */
	// End offset: 0x800371BC
	// End Line: 3307

	/* begin block 2 */
		// Start line: 6676
	/* end block 2 */
	// End Line: 6677

void app_fatal(char *pszFile)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoMemCardFromFrontEnd__Fv()
 // line 3565, offset 0x800371cc
	/* begin block 1 */
		// Start line: 3566
		// Start offset: 0x800371CC
	/* end block 1 */
	// End offset: 0x800371E4
	// End Line: 3572

	/* begin block 2 */
		// Start line: 7196
	/* end block 2 */
	// End Line: 7197

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
 // line 3575, offset 0x800371f4
	/* begin block 1 */
		// Start line: 3576
		// Start offset: 0x800371F4
	/* end block 1 */
	// End offset: 0x8003720C
	// End Line: 3582

	/* begin block 2 */
		// Start line: 7216
	/* end block 2 */
	// End Line: 7217

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoMemCardFromInGame__Fv(void)

{
	OVR_LoadMemcard__Fv();
	OVR_LoadGame__Fv();
	return;
}





