#include "THISDUST.H"
#include "GAMEOVER.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ IS_GameOver__Fv()
 // line 83, offset 0x800821dc
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x800821DC
	/* end block 1 */
	// End offset: 0x800821F4
	// End Line: 85

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * IS_GameOver__Fv(void)

{
	TASK *pTVar1;
	
	pTVar1 = TSK_Exist((TASK *)0x0,(ulong)&DAT_00008001,0xffffffff);
	return (void *)(uint)(pTVar1 != (TASK *)0x0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ GO_DoGameOver__Fv()
 // line 94, offset 0x80082204
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80082204
	/* end block 1 */
	// End offset: 0x8008223C
	// End Line: 99

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GO_DoGameOver__Fv(void)

{
	undefined *puVar1;
	
	automapflag = '\0';
	puVar1 = (undefined *)IS_GameOver__Fv();
	if (puVar1 != &DAT_00000001) {
		TSK_AddTask((ulong)&DAT_00008001,GameOverTask__FP4TASK,0x800,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GameOverTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 116, offset 0x8008224c
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x8008224C
		// Variables:
	// 		void * TimeOut; // $s3
	// 		int TimeOutTime; // $s1
	// 		int lasttick; // $s2

		/* begin block 1.1 */
			// Start line: 117
			// Start offset: 0x8008224C

			/* begin block 1.1.1 */
				// Start line: 132
				// Start offset: 0x80082294

				/* begin block 1.1.1.1 */
					// Start line: 137
					// Start offset: 0x800822B0
					// Variables:
				// 		struct CPad *Pad; // $a0

					/* begin block 1.1.1.1.1 */
						// Start line: 150
						// Start offset: 0x800822F8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 155
							// Start offset: 0x80082314
							// Variables:
						// 		int ntick; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80082340
						// End Line: 162
					/* end block 1.1.1.1.1 */
					// End offset: 0x80082340
					// End Line: 162
				/* end block 1.1.1.1 */
				// End offset: 0x80082340
				// End Line: 167
			/* end block 1.1.1 */
			// End offset: 0x80082384
			// End Line: 176
		/* end block 1.1 */
		// End offset: 0x80082384
		// End Line: 176

		/* begin block 1.2 */
			// Start line: 179
			// Start offset: 0x80082384
			// Variables:
		// 		int f; // $s0
		/* end block 1.2 */
		// End offset: 0x800823B8
		// End Line: 186
	/* end block 1 */
	// End offset: 0x80082430
	// End Line: 211

	/* begin block 2 */
		// Start line: 232
	/* end block 2 */
	// End Line: 233

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GameOverTask__FP4TASK(TASK *T)

{
	bool bVar1;
	ushort uVar2;
	ulong uVar3;
	CPad *this;
	ulong uVar4;
	int iVar5;
	void *pvVar6;
	int iVar7;
	
	bVar1 = false;
	PA_SetPauseOk__Fb((void *)0x0);
	iVar7 = 0x708;
	GLUE_SuspendGame__Fv();
	InitGamePadVars__Fv();
	if (deathflag != '\0') {
		options_pad = 0;
		ToggleOptions__Fv();
		uVar3 = VID_GetTick__Fv();
		while ((optionsflag != (void *)0x0 && (!bVar1))) {
			this = PAD_GetPad__FiUc(0,(uchar)FePlayerNo);
			if (cmenu == 9) {
				iVar7 = 0x708;
			}
			uVar2 = GetDown__C4CPad(this);
			if (uVar2 == 0) {
				uVar4 = VID_GetTick__Fv();
				if (uVar4 != uVar3) {
					iVar5 = abs(uVar4 - uVar3);
					iVar7 = iVar7 - iVar5;
					uVar3 = uVar4;
					if (iVar7 < 1) {
						bVar1 = true;
						uVar3 = uVar4;
					}
				}
			}
			else {
				iVar7 = 0x708;
			}
			TSK_Sleep(1);
		}
		if (deathflag == '\0') {
			PauseMode = '\0';
			return;
		}
		if (bVar1) {
			ToggleOptions__Fv();
		}
	}
	iVar7 = 0;
	music_fade__Fv();
	stream_fade__Fv();
	do {
		iVar7 = iVar7 + 1;
		RedBack__Fv();
		PrintGameOver__Fv();
		TSK_Sleep(1);
	} while (iVar7 < 0x78);
	pvVar6 = PaletteFadeOut__Fi(8);
	if (pvVar6 != (void *)0x0) {
		while (pvVar6 = GetFadeState__Fv(), pvVar6 != (void *)0x0) {
			RedBack__Fv();
			PrintGameOver__Fv();
			TSK_Sleep(1);
		}
	}
	deathflag = '\0';
	GLUE_SuspendGame__Fv();
	GLUE_SetFinished__Fb(&DAT_00000001);
	TSK_Sleep(3);
	PauseMode = '\0';
	MAIN_RestartGameTask__Fv();
	GLUE_ResumeGame__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintGameOver__Fv()
 // line 220, offset 0x80082450
	/* begin block 1 */
		// Start line: 221
		// Start offset: 0x80082450
		// Variables:
	// 		struct Dialog PBack; // stack offset -40
	// 		struct RECT PRect; // stack offset -24
	// 		int otpos; // $s0
	// 		int oldDotpos; // $s2
	// 		int oldTotpos; // $s0
	/* end block 1 */
	// End offset: 0x80082574
	// End Line: 243

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintGameOver__Fv(void)

{
	int OT;
	int OT_00;
	char *Str;
	Dialog DStack40;
	RECT local_18;
	
	__6Dialog(&DStack40);
	OT = GetMaxOtPos__7CBlocks();
	OT_00 = SetOTpos__6Dialogi(&DStack40,OT + -3);
	OT = SetOTpos__5CFonti(&MediumFont,OT + -2);
	SetRGB__6DialogUcUcUc(&DStack40,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&DStack40,0x94);
	SetBorder__6Dialogi(&DStack40,0x12);
	Back__6Dialogiiii(&DStack40,0x50,0x70,0xa0,0x10);
	local_18.x = 0x50;
	local_18.y = 0x70;
	local_18.w = 0xa0;
	local_18.h = 0x10;
	Str = GetStr__Fi(0x177);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,0xc,Str,JustCentre,&local_18,0xff,0xff,0xff);
	SetOTpos__5CFonti(&MediumFont,OT);
	SetOTpos__6Dialogi(&DStack40,OT_00);
	___6Dialog(&DStack40,2);
	return;
}





