#include "THISDUST.H"
#include "CARDCORE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ init_mem_card__FPFii_vUc(TDRFuncPtr_init_mem_card__FPFii_vUc0handler handler /*$s1*/, unsigned char read_dir /*$s0*/)
 // line 162, offset 0x800a5004
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x800A5004
	/* end block 1 */
	// End offset: 0x800A5224
	// End Line: 249

	/* begin block 2 */
		// Start line: 324
	/* end block 2 */
	// End Line: 325

void init_mem_card__FPFii_vUc(TDRFuncPtr_init_mem_card__FPFii_vUc0handler handler,uchar read_dir)

{
	ResetCallback();
	if (never_hooked_events != 0) {
		EnterCriticalSection();
		card_ev0 = OpenEvent(0xf4000001,4,0x2000,0);
		card_ev1 = OpenEvent(0xf4000001,0x8000,0x2000,0);
		card_ev2 = OpenEvent(0xf4000001,0x100,0x2000,0);
		card_ev3 = OpenEvent(0xf4000001,0x2000,0x2000,0);
		card_ev10 = OpenEvent(0xf0000011,4,0x2000,0);
		card_ev11 = OpenEvent(0xf0000011,0x8000,0x2000,0);
		card_ev12 = OpenEvent(0xf0000011,0x100,0x2000,0);
		card_ev13 = OpenEvent(0xf0000011,0x2000,0x2000,0);
		ExitCriticalSection();
		InitCARD(1);
		StartCARD();
		ChangeClearPAD(0);
		never_hooked_events = 0;
	}
	_bu_init();
	EnableEvent(card_ev0);
	EnableEvent(card_ev1);
	EnableEvent(card_ev2);
	EnableEvent(card_ev3);
	EnableEvent(card_ev10);
	EnableEvent(card_ev11);
	EnableEvent(card_ev12);
	EnableEvent(card_ev13);
	INT_8011b3e0 = 3;
	card_status = 3;
	INT_8011b3e8 = 0;
	card_usable = 0;
	INT_8011b3f0 = 0;
	card_files = 0;
	INT_8011b3f8 = 1;
	card_changed = 1;
	if (handler != (TDRFuncPtr_init_mem_card__FPFii_vUc0handler)0x0) {
		(*handler)(7,0);
	}
	mem_card_event_handler = (TDRFuncPtr_init_mem_card__FPFii_vUc0handler)0x0;
	init_card__Fib(0,(void *)(uint)(read_dir != '\0'));
	init_card__Fib(1,(void *)(uint)(read_dir != '\0'));
	mem_card_event_handler = handler;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ memcard_event__Fii(int evt /*$a0*/, int side /*$a1*/)
 // line 252, offset 0x800a523c
	/* begin block 1 */
		// Start line: 253
		// Start offset: 0x800A523C
	/* end block 1 */
	// End offset: 0x800A526C
	// End Line: 279

	/* begin block 2 */
		// Start line: 521
	/* end block 2 */
	// End Line: 522

/* WARNING: Unknown calling convention yet parameter storage is locked */

void memcard_event__Fii(int evt,int side)

{
	switch(evt) {
	case 1:
	case 7:
		CharacterBlockLoaded = (void *)0x0;
	}
	card_event = evt;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ init_card__Fib(int card_number /*$s1*/, void * read_dir /*$s4*/)
 // line 283, offset 0x800a5274
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x800A5274
	/* end block 1 */
	// End offset: 0x800A531C
	// End Line: 303

	/* begin block 2 */
		// Start line: 582
	/* end block 2 */
	// End Line: 583

/* WARNING: Unknown calling convention yet parameter storage is locked */

void init_card__Fib(int card_number,void *read_dir)

{
	int iVar1;
	
	card_dirty[card_number] = 0;
	(&card_files)[card_number] = 0;
	(&card_changed)[card_number] = 1;
	iVar1 = ping_card__Fi(card_number);
	(&card_status)[card_number] = iVar1;
	if (iVar1 == 0) {
		iVar1 = FUN_80142bf4(card_number);
		(&card_usable)[card_number] = iVar1;
		if (read_dir == (void *)0x0) {
			card_dirty[card_number] = 1;
		}
		else {
			FUN_80142998(card_number);
		}
	}
	else {
		VSync(0x78);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ping_card__Fi(int card_number /*$s0*/)
 // line 311, offset 0x800a5340
	/* begin block 1 */
		// Start line: 312
		// Start offset: 0x800A5340
	/* end block 1 */
	// End offset: 0x800A53C0
	// End Line: 325

	/* begin block 2 */
		// Start line: 648
	/* end block 2 */
	// End Line: 649

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ping_card__Fi(int card_number)

{
	int iVar1;
	int iVar2;
	
	_card_info(card_number << 4);
	_card_wait(card_number);
	iVar1 = TestEvent(card_ev0);
	iVar2 = 0;
	if (iVar1 != 1) {
		iVar1 = TestEvent(card_ev1);
		iVar2 = 1;
		if (iVar1 != 1) {
			iVar1 = TestEvent(card_ev2);
			if (iVar1 == 1) {
				iVar2 = 2;
			}
			else {
				iVar1 = TestEvent(card_ev3);
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
// void /*$ra*/ DealWithCard__Fi(int side /*$s1*/)
 // line 328, offset 0x800a53d4
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x800A53D4
	/* end block 1 */
	// End offset: 0x800A547C
	// End Line: 345

	/* begin block 2 */
		// Start line: 682
	/* end block 2 */
	// End Line: 683

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DealWithCard__Fi(int side)

{
	int iVar1;
	int *piVar2;
	
	if ((&card_active)[side] != 0) {
		piVar2 = &card_status + side;
		last_card_status[side] = *piVar2;
		iVar1 = ping_card__Fi(side);
		*piVar2 = iVar1;
		FUN_801434a0(side);
		TSK_Sleep(4);
		if (((&new_card_flag)[side] != (void *)0x0) && (AlertTxt == 0)) {
			(&new_card_flag)[side] = (void *)0x0;
			FUN_8014340c(side);
			*piVar2 = 0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CardUpdateTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 350, offset 0x800a5498
	/* begin block 1 */
		// Start line: 351
		// Start offset: 0x800A5498
		// Variables:
	// 		int toggle; // $s0
	/* end block 1 */
	// End offset: 0x800A54D8
	// End Line: 367

	/* begin block 2 */
		// Start line: 729
	/* end block 2 */
	// End Line: 730

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CardUpdateTask__FP4TASK(TASK *T)

{
	bool bVar1;
	
	bVar1 = false;
	do {
		DealWithCard__Fi((uint)bVar1);
		TSK_Sleep(1);
		bVar1 = !bVar1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ MemcardON__Fv()
 // line 371, offset 0x800a54ec
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x800A54EC
	/* end block 1 */
	// End offset: 0x800A5548
	// End Line: 393

	/* begin block 2 */
		// Start line: 772
	/* end block 2 */
	// End Line: 773

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MemcardON__Fv(void)

{
	STR_pauseall__Fv();
	stream_stop__Fv();
	snd_stop_snd__FP4TSnd((TSnd *)0x0);
	OVR_LoadFrontend__Fv();
	init_mem_card__FPFii_vUc(memcard_event__Fii,'\x01');
	MemcardTask = TSK_AddTask(0x45,CardUpdateTask__FP4TASK,0x2000,0);
	MemCardActive = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MemcardOFF__Fv()
 // line 396, offset 0x800a5558
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x800A5558
	/* end block 1 */
	// End offset: 0x800A5580
	// End Line: 405

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MemcardOFF__Fv(void)

{
	TSK_Kill(MemcardTask);
	INT_8011b204 = 0;
	card_active = 0;
	MemCardActive = (void *)0x0;
	STR_resumeall__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckSavedOptions__Fv()
 // line 417, offset 0x800a5590
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x800A5590
		// Variables:
	// 		int option_file; // $v0
	/* end block 1 */
	// End offset: 0x800A5678
	// End Line: 444

	/* begin block 2 */
		// Start line: 867
	/* end block 2 */
	// End Line: 868

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckSavedOptions__Fv(void)

{
	TASK *pTVar1;
	int iVar2;
	undefined4 uVar3;
	
	init_mem_card__FPFii_vUc(memcard_event__Fii,'\x01');
	MemcardTask = TSK_AddTask(0x45,CardUpdateTask__FP4TASK,0x2000,0);
	while (pTVar1 = TSK_Exist((TASK *)0x0,0x45,0xffffffff), pTVar1 == (TASK *)0x0) {
		TSK_Sleep(1);
	}
	card_active = 1;
	iVar2 = FUN_80159590(0,DiabloOptionFile);
	uVar3 = 0;
	if (iVar2 == -1) {
		INT_8011b204 = 1;
		iVar2 = FUN_80159590(1,DiabloOptionFile);
		uVar3 = 1;
		if (iVar2 == -1) goto LAB_800a563c;
	}
	FUN_8015c6d4(uVar3,iVar2,1);
LAB_800a563c:
	TSK_Kill(MemcardTask);
	while (pTVar1 = TSK_Exist((TASK *)0x0,0x45,0xffffffff), pTVar1 != (TASK *)0x0) {
		TSK_Sleep(1);
	}
	card_active = 0;
	INT_8011b204 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ card_removed__Fi(int card_number /*$a0*/)
 // line 447, offset 0x800a5690
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x800A5690
	/* end block 1 */
	// End offset: 0x800A56C0
	// End Line: 457

	/* begin block 2 */
		// Start line: 938
	/* end block 2 */
	// End Line: 939

/* WARNING: Unknown calling convention yet parameter storage is locked */

void card_removed__Fi(int card_number)

{
	(&card_status)[card_number] = 2;
	(&card_usable)[card_number] = 0;
	card_dirty[card_number] = 1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ read_card_block__Fii(int card_number /*$s0*/, int block /*$a1*/)
 // line 464, offset 0x800a56c8
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x800A56C8
	/* end block 1 */
	// End offset: 0x800A56FC
	// End Line: 473

	/* begin block 2 */
		// Start line: 967
	/* end block 2 */
	// End Line: 968

/* WARNING: Unknown calling convention yet parameter storage is locked */

int read_card_block__Fii(int card_number,int block)

{
	int iVar1;
	
	_card_read(card_number << 4,block,&block_buf);
	_card_wait(card_number);
	iVar1 = test_hw_event__Fv();
	return (uint)(iVar1 == 0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ test_hw_event__Fv()
 // line 482, offset 0x800a5710
	/* begin block 1 */
		// Start line: 483
		// Start offset: 0x800A5710
	/* end block 1 */
	// End offset: 0x800A577C
	// End Line: 489

	/* begin block 2 */
		// Start line: 1007
	/* end block 2 */
	// End Line: 1008

/* WARNING: Unknown calling convention yet parameter storage is locked */

int test_hw_event__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar1 = TestEvent(card_ev10);
	iVar2 = 0;
	if (iVar1 != 1) {
		iVar1 = TestEvent(card_ev11);
		iVar2 = 3;
		if (iVar1 != 1) {
			iVar1 = TestEvent(card_ev12);
			if (iVar1 == 1) {
				iVar2 = 1;
			}
			else {
				iVar1 = TestEvent(card_ev13);
				iVar2 = 2;
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
// void /*$ra*/ ActivateMemcard__Fii(int card1 /*$a0*/, int card2 /*$a1*/)
 // line 492, offset 0x800a5790
	/* begin block 1 */
		// Start line: 493
		// Start offset: 0x800A5790
	/* end block 1 */
	// End offset: 0x800A57BC
	// End Line: 500

	/* begin block 2 */
		// Start line: 1031
	/* end block 2 */
	// End Line: 1032

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ActivateMemcard__Fii(int card1,int card2)

{
	card_active = card1;
	INT_8011b204 = card2;
	if (MemCardActive == (void *)0x0) {
		card_active = card1;
		INT_8011b204 = card2;
		MemcardON__Fv();
		MemcardOverlay = &DAT_00000001;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActivateCharacterMemcard__Fii(int card1 /*$a0*/, int card2 /*$a1*/)
 // line 504, offset 0x800a57cc
	/* begin block 1 */
		// Start line: 505
		// Start offset: 0x800A57CC

		/* begin block 1.1 */
			// Start line: 505
			// Start offset: 0x800A57CC

			/* begin block 1.1.1 */
				// Start line: 510
				// Start offset: 0x800A57F0
				// Variables:
			// 		int fileno; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 513
					// Start offset: 0x800A57F0

					/* begin block 1.1.1.1.1 */
						// Start line: 518
						// Start offset: 0x800A5830
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A5848
					// End Line: 521
				/* end block 1.1.1.1 */
				// End offset: 0x800A5864
				// End Line: 524
			/* end block 1.1.1 */
			// End offset: 0x800A5864
			// End Line: 524
		/* end block 1.1 */
		// End offset: 0x800A5864
		// End Line: 524
	/* end block 1 */
	// End offset: 0x800A5874
	// End Line: 530

	/* begin block 2 */
		// Start line: 1055
	/* end block 2 */
	// End Line: 1056

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ActivateCharacterMemcard__Fii(int card1,int card2)

{
	int iVar1;
	
	ActivateMemcard__Fii(card1,card2);
	if (CharacterBlockLoaded == (void *)0x0) {
		memset((void *)0x801576f0,0,(size_t)&DAT_00001de0);
		iVar1 = FUN_80159590(current_card,DiabloCharacterFile);
		if (iVar1 == -1) {
			PantsDelay__Fv();
		}
		else {
			iVar1 = FUN_8015c388(current_card);
			if (iVar1 != 0) {
				memset((void *)0x801576f0,0,(size_t)&DAT_00001de0);
			}
		}
	}
	countdownloadcharblock = 0;
	CharacterBlockLoaded = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowCardActionText__Fv()
 // line 535, offset 0x800a5888
	/* begin block 1 */
		// Start line: 536
		// Start offset: 0x800A5888
		// Variables:
	// 		struct Dialog SBack; // stack offset -80
	// 		struct RECT um; // stack offset -64
	// 		int X; // $v1
	// 		int Y; // $s1
	// 		int W; // $s2
	// 		int H; // $s4
	// 		int otpos; // $s0
	// 		int oldBot; // stack offset -56
	// 		int oldTot; // $s7
	// 		int lines; // $s3
	// 		int yprintpos; // $s0

		/* begin block 1.1 */
			// Start line: 574
			// Start offset: 0x800A59A0

			/* begin block 1.1.1 */
				// Start line: 575
				// Start offset: 0x800A59B4

				/* begin block 1.1.1.1 */
					// Start line: 575
					// Start offset: 0x800A59B4
				/* end block 1.1.1.1 */
				// End offset: 0x800A59B4
				// End Line: 575
			/* end block 1.1.1 */
			// End offset: 0x800A59B4
			// End Line: 575
		/* end block 1.1 */
		// End offset: 0x800A59B4
		// End Line: 575
	/* end block 1 */
	// End offset: 0x800A5B38
	// End Line: 606

	/* begin block 2 */
		// Start line: 1119
	/* end block 2 */
	// End Line: 1120

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShowCardActionText__Fv(void)

{
	int OT;
	char *Str;
	int DY;
	uint G;
	int iVar1;
	uint R;
	Dialog DStack80;
	RECT local_40;
	int local_38;
	
	__6Dialog(&DStack80);
	if ((card_active == 0) || (INT_8011b204 == 0)) {
		if ((&card_status)[current_card] != 0) {
			if ((saveflag == 0) && ((&card_status)[current_card] == 3)) {
				StatusTxt = card_side_read[current_card];
			}
			goto LAB_800a59a0;
		}
		if (saveflag != 0) goto LAB_800a59a0;
	}
	else {
		StatusTxt = 0x349;
		if ((((new_card_flag != (void *)0x0) || (StatusTxt = 0x349, card_status == 3)) ||
				(StatusTxt = 0x34a, PTR_8011b214 != (void *)0x0)) || (StatusTxt = 0x34a, INT_8011b3e0 == 3))
		goto LAB_800a59a0;
	}
	StatusTxt = 0;
LAB_800a59a0:
	DY = 0x4a;
	if (StatusTxt != 0) {
		if ((undefined *)optionsflag == &DAT_00000001) {
			DY = 0x5a;
		}
		local_40.x = 0x30;
		local_40.y = (short)DY;
		local_40.w = 0xe0;
		local_40.h = 0x3a;
		OT = GetOverlayOtBase__7CBlocks();
		local_38 = SetOTpos__6Dialogi(&DStack80,OT + 8);
		OT = SetOTpos__5CFonti(&MediumFont,OT + 8);
		SetBorder__6Dialogi(&DStack80,0x12);
		SetBack__6Dialogi(&DStack80,5);
		SetRGB__6DialogUcUcUc(&DStack80,'@','@','@');
		Back__6Dialogiiii(&DStack80,0x30,DY,0xe0,0x3a);
		Str = GetStr__Fi(StatusTxt);
		DY = GetStrWidth__5CFontPc(&MediumFont,Str);
		iVar1 = DY / 0xe0 + 1;
		DY = (iVar1 * -0xc + 0x3a >> 1) + 3;
		Str = GetStr__Fi(StatusTxt);
		R = (uint)WHITER;
		G = (uint)WHITEG;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,DY,Str,JustCentre,&local_40,R,G,G);
		Str = GetStr__Fi(STR_PLEASE_WAIT_1294);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,DY + iVar1 * 0xd,Str,JustCentre,&local_40,R,G,G);
		SetOTpos__6Dialogi(&DStack80,local_38);
		SetOTpos__5CFonti(&MediumFont,OT);
	}
	___6Dialog(&DStack80,2);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CountdownLoad__Fi(int Counter /*$s0*/)
 // line 611, offset 0x800a5b6c
	/* begin block 1 */
		// Start line: 612
		// Start offset: 0x800A5B6C

		/* begin block 1.1 */
			// Start line: 628
			// Start offset: 0x800A5BCC

			/* begin block 1.1.1 */
				// Start line: 629
				// Start offset: 0x800A5BE4

				/* begin block 1.1.1.1 */
					// Start line: 630
					// Start offset: 0x800A5BE4
					// Variables:
				// 		int readstate; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x800A5C68
				// End Line: 648
			/* end block 1.1.1 */
			// End offset: 0x800A5C68
			// End Line: 648

			/* begin block 1.1.2 */
				// Start line: 666
				// Start offset: 0x800A5CDC

				/* begin block 1.1.2.1 */
					// Start line: 667
					// Start offset: 0x800A5CDC
					// Variables:
				// 		int readstate; // $v1

					/* begin block 1.1.2.1.1 */
						// Start line: 680
						// Start offset: 0x800A5D48
					/* end block 1.1.2.1.1 */
					// End offset: 0x800A5D64
					// End Line: 687
				/* end block 1.1.2.1 */
				// End offset: 0x800A5D64
				// End Line: 687
			/* end block 1.1.2 */
			// End offset: 0x800A5D64
			// End Line: 687
		/* end block 1.1 */
		// End offset: 0x800A5D64
		// End Line: 687
	/* end block 1 */
	// End offset: 0x800A5D68
	// End Line: 690

	/* begin block 2 */
		// Start line: 1276
	/* end block 2 */
	// End Line: 1277

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CountdownLoad__Fi(int Counter)

{
	int iVar1;
	undefined4 uVar2;
	void *pvVar3;
	
	Counter = Counter + -1;
	if (Counter < 1) {
		iVar1 = FUN_8015a5c8(Loadfilename);
		if (iVar1 == 1) {
			if (Loadfilename == DiabloGameFile) {
				uVar2 = FUN_80159590(current_card);
				iVar1 = FUN_8015c1bc(1,current_card,uVar2);
				if (iVar1 == 0) {
					MemcardOFF__Fv();
					PA_SetPauseOk__Fb((void *)0x0);
					PaletteFadeOut__Fi(8);
					while (pvVar3 = GetFadeState__Fv(), pvVar3 != (void *)0x0) {
						TSK_Sleep(1);
					}
					gbActivePlayers = '\0';
					gbRunGame = '\x01';
					GRL_PostMessage__FUlUilUl(ghMainWnd,0x4b,0,0);
					GLUE_ResumeGame__Fv();
					GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
					GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
					optionsflag = (void *)0x0;
					PauseMode = '\0';
					options_pad = -1;
					TSK_Kill(DrawOptionsTask);
					return Counter;
				}
				if (iVar1 == -2) {
					AlertTxt = 0x25c;
					return Counter;
				}
			}
			else {
				uVar2 = FUN_80159590(current_card,DiabloOptionFile);
				iVar1 = FUN_8015c6d4(current_card,uVar2,1);
				if (iVar1 == 0) {
					AlertTxt = 0x2f6;
					GetVolumes__Fv();
					CalcVolumes__Fv();
					return Counter;
				}
				if (iVar1 == -2) {
					AlertTxt = 0x25c;
					gbRunGame = '\0';
					return Counter;
				}
			}
			AlertTxt = 0x25d;
		}
		else {
			if (Loadfilename == DiabloGameFile) {
				AlertTxt = 0x2be;
			}
			else {
				AlertTxt = 0x2c0;
			}
			Counter = 0;
		}
	}
	return Counter;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CountdownSave__Fi(int Counter /*$a0*/)
 // line 695, offset 0x800a5d7c
	/* begin block 1 */
		// Start line: 696
		// Start offset: 0x800A5D7C
		// Variables:
	// 		int cardstate[2]; // stack offset -16
	/* end block 1 */
	// End offset: 0x800A5E4C
	// End Line: 739

	/* begin block 2 */
		// Start line: 1452
	/* end block 2 */
	// End Line: 1453

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CountdownSave__Fi(int Counter)

{
	int iVar1;
	
	Counter = Counter + 1;
	if (0xb < Counter) {
		iVar1 = FUN_8015a67c(save_blocks,Savefilename);
		Counter = 0;
		if (iVar1 != 0) {
			ActivateMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
			if (Savefilename == DiabloOptionFile) {
				iVar1 = FUN_80159650();
				if (iVar1 == 0) {
					AlertTxt = 0x2f8;
				}
				else {
					AlertTxt = 0x50f;
				}
			}
			else {
				iVar1 = FUN_80159678();
				if (iVar1 == 0) {
					AlertTxt = 0x508;
				}
				else {
					AlertTxt = 0x50f;
				}
			}
			StatusTxt = 0;
			cardondelay = 0;
			FUN_801434a0(current_card);
			ActivateMemcard__Fii(1,1);
			Counter = 0;
		}
	}
	return Counter;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowLoadingBox__Fi(int Text /*$s1*/)
 // line 742, offset 0x800a5e5c
	/* begin block 1 */
		// Start line: 743
		// Start offset: 0x800A5E5C
		// Variables:
	// 		struct Dialog SBack; // stack offset -80
	// 		struct RECT um; // stack offset -64
	// 		void * addwaitmsg; // $s5
	// 		int W; // $s3
	// 		int H; // $s4
	// 		int X; // $v1
	// 		int Y; // $s2
	// 		int otpos; // $s0
	// 		int oldBot; // stack offset -56
	// 		int oldTot; // $fp
	// 		int lines; // $v1
	// 		int topline; // $s2
	// 		int yprintpos; // $s4
	/* end block 1 */
	// End offset: 0x800A60B4
	// End Line: 790

	/* begin block 2 */
		// Start line: 1551
	/* end block 2 */
	// End Line: 1552

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShowLoadingBox__Fi(int Text)

{
	bool bVar1;
	int OT;
	char *Str;
	uint G;
	int DY;
	int iVar2;
	uint R;
	Dialog DStack80;
	RECT local_40;
	int local_38;
	
	__6Dialog(&DStack80);
	bVar1 = false;
	if ((((Text == card_side_load) || (Text == INT_8011b1bc)) || (Text == card_side_save)) ||
		 (((Text == INT_8011b1b4 || (Text == card_side_format)) || (Text == INT_8011b1c4)))) {
		bVar1 = true;
	}
	DY = 0x5b;
	if (FeFlag != '\0') {
		DY = 0x4b;
	}
	local_40.x = 0x30;
	local_40.y = (short)DY;
	local_40.w = 0xe0;
	local_40.h = 0x3a;
	OT = GetOverlayOtBase__7CBlocks();
	local_38 = SetOTpos__6Dialogi(&DStack80,OT + 8);
	OT = SetOTpos__5CFonti(&MediumFont,OT + 8);
	SetBorder__6Dialogi(&DStack80,0x12);
	SetBack__6Dialogi(&DStack80,5);
	SetRGB__6DialogUcUcUc(&DStack80,'P','@','@');
	Back__6Dialogiiii(&DStack80,0x30,DY,0xe0,0x3a);
	Str = GetStr__Fi(Text);
	DY = GetStrWidth__5CFontPc(&MediumFont,Str);
	DY = DY / 0xe0;
	iVar2 = DY + 1;
	if (bVar1) {
		Str = GetStr__Fi(STR_PLEASE_DO_NOT_REMOVE_MEMORY_CARD_650);
		DY = GetStrWidth__5CFontPc(&MediumFont,Str);
		DY = iVar2 + DY / 0xe0;
	}
	DY = (DY * -0xc + 0x3a >> 1) + 3;
	Str = GetStr__Fi(Text);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,DY,Str,JustCentre,&local_40,R,G,G);
	if (bVar1) {
		Str = GetStr__Fi(STR_PLEASE_DO_NOT_REMOVE_MEMORY_CARD_650);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,DY + iVar2 * 0xd,Str,JustCentre,&local_40,R,G,G);
	}
	SetOTpos__6Dialogi(&DStack80,local_38);
	SetOTpos__5CFonti(&MediumFont,OT);
	___6Dialog(&DStack80,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ KillItemDead__Fiii(int pnum /*$a3*/, int InvPos /*$t3*/, int Idx /*$a2*/)
 // line 795, offset 0x800a60e8
	/* begin block 1 */
		// Start line: 796
		// Start offset: 0x800A60E8
		// Variables:
	// 		int ii; // $t1
	// 		int iv; // $t1
	/* end block 1 */
	// End offset: 0x800A6720
	// End Line: 865

	/* begin block 2 */
		// Start line: 1664
	/* end block 2 */
	// End Line: 1665

/* WARNING: Unknown calling convention yet parameter storage is locked */

void KillItemDead__Fiii(int pnum,int InvPos,int Idx)

{
	undefined4 *puVar1;
	ItemStruct *pIVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	undefined4 uVar6;
	int iVar7;
	undefined4 uVar8;
	int iVar9;
	undefined4 uVar10;
	int *piVar11;
	int *piVar12;
	int *piVar13;
	undefined4 *puVar14;
	undefined4 *puVar15;
	undefined4 *puVar16;
	ItemStruct *pIVar17;
	undefined4 *puVar18;
	int iVar19;
	
	if (((uint)InvPos < 4) && (plr[pnum].InvBody[0]._itype != -1)) {
		plr[pnum].InvBody[0]._itype = -1;
	}
	if ((InvPos == 4) && (plr[pnum].InvBody[1]._itype != -1)) {
		plr[pnum].InvBody[1]._itype = -1;
	}
	if ((InvPos == 5) && (plr[pnum].InvBody[2]._itype != -1)) {
		plr[pnum].InvBody[2]._itype = -1;
	}
	if ((InvPos == 6) && (plr[pnum].InvBody[3]._itype != -1)) {
		plr[pnum].InvBody[3]._itype = -1;
	}
	if ((InvPos - 7U < 6) && (plr[pnum].InvBody[4]._itype != -1)) {
		plr[pnum].InvBody[4]._itype = -1;
	}
	if ((InvPos - 0xdU < 6) && (plr[pnum].InvBody[5]._itype != -1)) {
		plr[pnum].InvBody[5]._itype = -1;
	}
	if ((InvPos - 0x13U < 6) && (plr[pnum].InvBody[6]._itype != -1)) {
		plr[pnum].InvBody[6]._itype = -1;
	}
	if ((InvPos - 0x19U < 0x28) &&
		 (iVar3 = (int)*(char *)(pnum * 0x19e8 + -0x7ff24540 + (InvPos - 0x19U)), iVar3 != 0)) {
		if (iVar3 < 1) {
			iVar3 = -iVar3;
		}
		pcVar4 = plr[pnum].InvGrid;
		do {
			if (((int)*pcVar4 == iVar3) || ((int)*pcVar4 == -iVar3)) {
				*pcVar4 = '\0';
			}
			pcVar4 = pcVar4 + 1;
		} while ((int)pcVar4 < pnum * 0x19e8 + -0x7ff24518);
		iVar19 = iVar3 + -1;
		piVar11 = (int *)(iVar19 * 0x6c + pnum * 0x19e8 + -0x7ff25624);
		piVar13 = piVar11;
		pIVar2 = &plr[pnum].HoldItem;
		do {
			pIVar17 = pIVar2;
			piVar12 = piVar13;
			iVar5 = piVar12[1];
			iVar7 = piVar12[2];
			iVar9 = piVar12[3];
			pIVar17->_iVAdd1 = *piVar12;
			pIVar17->_iVMult1 = iVar5;
			pIVar17->_iVAdd2 = iVar7;
			pIVar17->_iVMult2 = iVar9;
			piVar13 = piVar12 + 4;
			pIVar2 = (ItemStruct *)&pIVar17->_iSeed;
		} while (piVar13 != piVar11 + 0x18);
		iVar5 = piVar12[5];
		iVar7 = piVar12[6];
		((ItemStruct *)&pIVar17->_iSeed)->_iVAdd1 = *piVar13;
		pIVar17->_ivalue = iVar5;
		pIVar17->_iIvalue = iVar7;
		plr[pnum]._pNumInv = plr[pnum]._pNumInv + -1;
		iVar5 = plr[pnum]._pNumInv;
		if ((0 < iVar5) && (iVar5 != iVar19)) {
			iVar7 = pnum * 0x19e8 + -0x7ff25624;
			puVar14 = (undefined4 *)(iVar5 * 0x6c + iVar7);
			puVar16 = puVar14;
			puVar1 = (undefined4 *)(iVar19 * 0x6c + iVar7);
			do {
				puVar18 = puVar1;
				puVar15 = puVar16;
				uVar6 = puVar15[1];
				uVar8 = puVar15[2];
				uVar10 = puVar15[3];
				*puVar18 = *puVar15;
				puVar18[1] = uVar6;
				puVar18[2] = uVar8;
				puVar18[3] = uVar10;
				puVar16 = puVar15 + 4;
				puVar1 = puVar18 + 4;
			} while (puVar16 != puVar14 + 0x18);
			uVar6 = puVar15[5];
			uVar8 = puVar15[6];
			puVar18[4] = *puVar16;
			puVar18[5] = uVar6;
			puVar18[6] = uVar8;
			pcVar4 = plr[pnum].InvGrid;
			do {
				if ((int)*pcVar4 == plr[pnum]._pNumInv + 1) {
					*pcVar4 = (char)iVar3;
				}
				if ((int)*pcVar4 == ~plr[pnum]._pNumInv) {
					*pcVar4 = -(char)iVar3;
				}
				pcVar4 = pcVar4 + 1;
			} while ((int)pcVar4 < pnum * 0x19e8 + -0x7ff24518);
		}
	}
	iVar3 = InvPos + -0x41;
	if (0x40 < InvPos) {
		if (plr[pnum].SpdList[iVar3]._itype != -1) {
			piVar11 = (int *)(iVar3 * 0x6c + pnum * 0x19e8 + -0x7ff24518);
			piVar13 = piVar11;
			pIVar2 = &plr[pnum].HoldItem;
			do {
				pIVar17 = pIVar2;
				piVar12 = piVar13;
				iVar19 = piVar12[1];
				iVar5 = piVar12[2];
				iVar7 = piVar12[3];
				pIVar17->_iVAdd1 = *piVar12;
				pIVar17->_iVMult1 = iVar19;
				pIVar17->_iVAdd2 = iVar5;
				pIVar17->_iVMult2 = iVar7;
				piVar13 = piVar12 + 4;
				pIVar2 = (ItemStruct *)&pIVar17->_iSeed;
			} while (piVar13 != piVar11 + 0x18);
			iVar19 = piVar12[5];
			iVar5 = piVar12[6];
			((ItemStruct *)&pIVar17->_iSeed)->_iVAdd1 = *piVar13;
			pIVar17->_ivalue = iVar19;
			pIVar17->_iIvalue = iVar5;
			plr[pnum].SpdList[iVar3]._itype = -1;
			drawsbarflag = '\x01';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearLoadCharItems__Fv()
 // line 915, offset 0x800a672c
	/* begin block 1 */
		// Start line: 916
		// Start offset: 0x800A672C
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800A67A0
	// End Line: 985

	/* begin block 2 */
		// Start line: 1910
	/* end block 2 */
	// End Line: 1911

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearLoadCharItems__Fv(void)

{
	int PlayerNo;
	
	if (FePlayerNo == 0) {
		KeefDaFeef__Fi(0);
	}
	else {
		PlayerNo = 0;
		do {
			KeefDaFeef__Fi(PlayerNo);
			if ((LoadedChar != (void *)0x0) && (PTR_8011b32c != (void *)0x0)) {
				WinterSales__Fi(PlayerNo);
			}
			PlayerNo = PlayerNo + 1;
		} while (PlayerNo < 2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PantsDelay__Fv()
 // line 1021, offset 0x800a67b4
	/* begin block 1 */
		// Start line: 1022
		// Start offset: 0x800A67B4

		/* begin block 1.1 */
			// Start line: 1022
			// Start offset: 0x800A67B4
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x800A67DC
		// End Line: 1024
	/* end block 1 */
	// End offset: 0x800A67DC
	// End Line: 1024

	/* begin block 2 */
		// Start line: 2122
	/* end block 2 */
	// End Line: 2123

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PantsDelay__Fv(void)

{
	int iVar1;
	
	iVar1 = 0;
	do {
		VSync(0);
		iVar1 = iVar1 + 1;
	} while (iVar1 < 0xb4);
	return;
}





