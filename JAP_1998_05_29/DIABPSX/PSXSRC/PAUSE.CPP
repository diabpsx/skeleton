#include "THISDUST.H"
#include "PAUSE.H"


// decompiled code
// original method signature: 
// struct CPauseMessages * /*$ra*/ __14CPauseMessages(struct CPauseMessages *this /*$v0*/)
 // line 85, offset 0x800893b0
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x800893B0
	/* end block 1 */
	// End offset: 0x800893B0
	// End Line: 86

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

CPauseMessages * __14CPauseMessages(CPauseMessages *this)

{
	*(undefined4 *)this->_vf = 0x80110428;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14CPauseMessages(struct CPauseMessages *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 86, offset 0x8008937c
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x8008937C
	/* end block 1 */
	// End offset: 0x8008937C
	// End Line: 87

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

void ___14CPauseMessages(CPauseMessages *this,int __in_chrg)

{
	*(undefined4 *)this->_vf = 0x80110428;
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete();
	}
	return;
}



// decompiled code
// original method signature: 
// struct CTempPauseMessage * /*$ra*/ __17CTempPauseMessage(struct CTempPauseMessage *this /*$s0*/)
 // line 115, offset 0x80089338
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x80089338
	/* end block 1 */
	// End offset: 0x80089338
	// End Line: 116

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

CTempPauseMessage * __17CTempPauseMessage(CTempPauseMessage *this)

{
	TextDat *pTVar1;
	
	__14CPauseMessages((CPauseMessages *)this);
	*(undefined4 *)(this->CPauseMessages)._vf = 0x801103d0;
	pTVar1 = GM_UseTexData__Fi(0);
	*(TextDat **)((this->CPauseMessages)._vf + 4) = pTVar1;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PauseTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 181, offset 0x800884c8
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x800884C8

		/* begin block 1.1 */
			// Start line: 194
			// Start offset: 0x800884D4
			// Variables:
		// 		struct CTempPauseMessage Cpm; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x800884D4
		// End Line: 196
	/* end block 1 */
	// End offset: 0x80088508
	// End Line: 200

	/* begin block 2 */
		// Start line: 362
	/* end block 2 */
	// End Line: 363

void PauseTask__FP4TASK(TASK *T)

{
	int nPadNum;
	CPauseMessages CStack24;
	
	TPtr = T;
	do {
		__17CTempPauseMessage((CTempPauseMessage *)&CStack24);
		nPadNum = GetPausePad__Fv();
		DoPause__14CPauseMessagesi(&CStack24,nPadNum);
		Paused = (void *)0x0;
		___17CTempPauseMessage((CTempPauseMessage *)&CStack24,2);
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPausePad__Fv()
 // line 211, offset 0x80088518
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x80088518
		// Variables:
	// 		void * Done; // $s2
	// 		int PadVal; // $s3

		/* begin block 1.1 */
			// Start line: 216
			// Start offset: 0x80088538

			/* begin block 1.1.1 */
				// Start line: 218
				// Start offset: 0x80088540

				/* begin block 1.1.1.1 */
					// Start line: 219
					// Start offset: 0x8008858C

					/* begin block 1.1.1.1.1 */
						// Start line: 220
						// Start offset: 0x8008858C
						// Variables:
					// 		int f; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 220
							// Start offset: 0x80088590
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80088604
						// End Line: 233
					/* end block 1.1.1.1.1 */
					// End offset: 0x80088610
					// End Line: 235
				/* end block 1.1.1.1 */
				// End offset: 0x80088610
				// End Line: 235
			/* end block 1.1.1 */
			// End offset: 0x80088610
			// End Line: 235
		/* end block 1.1 */
		// End offset: 0x80088610
		// End Line: 237
	/* end block 1 */
	// End offset: 0x80088620
	// End Line: 240

	/* begin block 2 */
		// Start line: 422
	/* end block 2 */
	// End Line: 423

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetPausePad__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	CPad *this;
	void *pvVar3;
	int PadNum;
	undefined *puVar4;
	int iVar5;
	
	bVar1 = false;
	iVar5 = -1;
	while (!bVar1) {
		if ((((CanPause != (void *)0x0) && (optionsflag == (void *)0x0)) &&
				(ignore_buttons == (void *)0x0)) && (PadNum = 0, demo_pad_time == 0)) {
			puVar4 = (undefined *)0x0;
			while ((PadNum <= FePlayerNo && (!bVar1))) {
				if ((&plr.plractive)[(int)puVar4] != '\0') {
					this = PAD_GetPad__FiUc(PadNum,'\0');
					uVar2 = CheckActive__4CPad(this);
					if (uVar2 == '\0') {
						bVar1 = true;
						iVar5 = PadNum;
					}
					pvVar3 = TryPadForPause__Fi(PadNum);
					if (pvVar3 != (void *)0x0) {
						bVar1 = true;
						iVar5 = PadNum;
					}
				}
				puVar4 = &DAT_000019e8 + (int)puVar4;
				PadNum = PadNum + 1;
			}
		}
		TSK_Sleep(1);
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TryPadForPause__Fi(int PadNum /*$a0*/)
 // line 251, offset 0x80088640
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x80088640
	/* end block 1 */
	// End offset: 0x8008865C
	// End Line: 257

	/* begin block 2 */
		// Start line: 505
	/* end block 2 */
	// End Line: 506

void * TryPadForPause__Fi(int PadNum)

{
	ushort uVar1;
	CPad *this;
	
	this = PAD_GetPad__FiUc(PadNum,'\0');
	uVar1 = GetDown__C4CPad(this);
	return (void *)(uint)((uVar1 & 0x10) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoPause__14CPauseMessagesi(struct CPauseMessages *this /*$s1*/, int nPadNum /*$s0*/)
 // line 268, offset 0x8008866c
	/* begin block 1 */
		// Start line: 269
		// Start offset: 0x8008866C

		/* begin block 1.1 */
			// Start line: 269
			// Start offset: 0x8008866C

			/* begin block 1.1.1 */
				// Start line: 273
				// Start offset: 0x8008868C

				/* begin block 1.1.1.1 */
					// Start line: 274
					// Start offset: 0x8008868C

					/* begin block 1.1.1.1.1 */
						// Start line: 275
						// Start offset: 0x800886F4
					/* end block 1.1.1.1.1 */
					// End offset: 0x80088864
					// End Line: 329
				/* end block 1.1.1.1 */
				// End offset: 0x80088864
				// End Line: 329
			/* end block 1.1.1 */
			// End offset: 0x80088864
			// End Line: 329
		/* end block 1.1 */
		// End offset: 0x80088864
		// End Line: 329
	/* end block 1 */
	// End offset: 0x80088864
	// End Line: 329

	/* begin block 2 */
		// Start line: 539
	/* end block 2 */
	// End Line: 540

void DoPause__14CPauseMessagesi(CPauseMessages *this,int nPadNum)

{
	bool bVar1;
	void *pvVar2;
	int iVar3;
	undefined *puVar4;
	
	if (((nPadNum != -1) &&
			(((uint)optionsflag | (uint)qtextflag | (uint)invflag | (uint)chrflag | (uint)questlog |
				(uint)sbookflag | (int)stextflag) == 0)) &&
		 (pvVar2 = BL_AsyncLoadDone__Fv(), pvVar2 != (void *)0x0)) {
		TSK_SetExecFilter(0x8000,0x8000);
		this->PadNum = nPadNum;
		PauseMode = '\x01';
		GLUE_SetHomingScrollFlag__Fb((void *)0x0);
		GLUE_SetShowPanelFlag__Fb((void *)0x0);
		STR_pauseall__Fv();
		snd_stop_snd__FP4TSnd((TSnd *)0x0);
		if (deathflag == '\0') {
			PlaySFX__Fi(IS_TITLSLCT);
		}
		while( true ) {
			pvVar2 = PA_GetPauseOk__Fv();
			if ((pvVar2 == (void *)0x0) || (deathflag == '\0')) {
				pvVar2 = DoPausedMessage__14CPauseMessages(this);
				bVar1 = pvVar2 != (void *)0x0;
			}
			else {
				bVar1 = PauseMode != '\0';
			}
			if (!bVar1) break;
			bVar1 = false;
			pvVar2 = PA_GetPauseOk__Fv();
			if (pvVar2 != (void *)0x0) {
				iVar3 = DoQuitMessage__14CPauseMessages(this);
				bVar1 = iVar3 != 0;
			}
			if ((bVar1) &&
				 (puVar4 = (undefined *)AreYouSureMessage__14CPauseMessages(this), puVar4 != &DAT_00000001))
			{
				PA_SetPauseOk__Fb((void *)0x0);
				stream_stop__Fv();
				music_fade__Fv();
				pvVar2 = PaletteFadeOut__Fi(8);
				if (pvVar2 != (void *)0x0) {
					while (pvVar2 = GetFadeState__Fv(), pvVar2 != (void *)0x0) {
						TSK_Sleep(1);
					}
				}
				PauseMode = '\0';
				GAL_SetTimeStamp(5);
				GLUE_StartGameExit__Fv();
				user_start = &DAT_00000001;
			}
		}
		STR_resumeall__Fv();
		GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
		PauseMode = '\0';
		TSK_ClearExecFilter();
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ DoPausedMessage__14CPauseMessages(struct CPauseMessages *this /*$s0*/)
 // line 339, offset 0x8008887c
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x8008887C
		// Variables:
	// 		void * RetVal; // $s2
	// 		void * Done; // $s1

		/* begin block 1.1 */
			// Start line: 351
			// Start offset: 0x800888B4
		/* end block 1.1 */
		// End offset: 0x80088964
		// End Line: 372
	/* end block 1 */
	// End offset: 0x80088998
	// End Line: 452

	/* begin block 2 */
		// Start line: 683
	/* end block 2 */
	// End Line: 684

void * DoPausedMessage__14CPauseMessages(CPauseMessages *this)

{
	bool bVar1;
	ushort uVar2;
	CPad *this_00;
	undefined *puVar3;
	
	puVar3 = (undefined *)0x0;
	bVar1 = false;
	(**(code **)(*(int *)this->_vf + 0x44))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x40));
	while ((!bVar1 && (PauseMode != '\0'))) {
		(**(code **)(*(int *)this->_vf + 0x4c))
							((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x48));
		TSK_Sleep(1);
		this_00 = PAD_GetPad__FiUc(this->PadNum,'\0');
		uVar2 = GetDown__C4CPad(this_00);
		if ((uVar2 & 0x10) == 0) {
			this_00 = PAD_GetPad__FiUc(this->PadNum,'\x01');
			uVar2 = GetDown__C4CPad(this_00);
			if ((uVar2 & 0x20) != 0) {
				PlaySFX__Fi(IS_TITLSLCT);
				bVar1 = true;
				puVar3 = &DAT_00000001;
			}
		}
		else {
			PlaySFX__Fi(IS_TITLSLCT);
			bVar1 = true;
			puVar3 = (undefined *)0x0;
			TSK_Sleep(2);
		}
		PAD_GetPad__FiUc(0,'\0');
	}
	(**(code **)(*(int *)this->_vf + 0x54))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x50));
	return puVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoQuitMessage__14CPauseMessages(struct CPauseMessages *this /*$s2*/)
 // line 462, offset 0x800889b4
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x800889B4
		// Variables:
	// 		int RetVal; // $s4
	// 		void * Done; // $s3
	// 		int Menu; // $s1

		/* begin block 1.1 */
			// Start line: 470
			// Start offset: 0x800889F8
			// Variables:
		// 		unsigned short PadVal; // $s0
		/* end block 1.1 */
		// End offset: 0x80088A7C
		// End Line: 494
	/* end block 1 */
	// End offset: 0x80088AB0
	// End Line: 502

	/* begin block 2 */
		// Start line: 937
	/* end block 2 */
	// End Line: 938

int DoQuitMessage__14CPauseMessages(CPauseMessages *this)

{
	bool bVar1;
	ushort uVar2;
	CPad *this_00;
	uint uVar3;
	uint uVar4;
	
	uVar4 = 0;
	bVar1 = false;
	uVar3 = 1;
	(**(code **)(*(int *)this->_vf + 0x14))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x10));
	while (!bVar1) {
		(**(code **)(*(int *)this->_vf + 0x1c))
							((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x18));
		TSK_Sleep(1);
		this_00 = PAD_GetPad__FiUc(this->PadNum,'\x01');
		uVar2 = GetDown__C4CPad(this_00);
		if ((uVar2 & 3) != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
			uVar3 = (uint)(uVar3 == 0);
		}
		if ((uVar2 & 0x50) == 0) {
			if ((uVar2 & 0x100) != 0) {
				PlaySFX__Fi(IS_TITLSLCT);
				bVar1 = true;
				uVar4 = 0;
			}
		}
		else {
			PlaySFX__Fi(IS_TITLSLCT);
			bVar1 = true;
			uVar4 = (uint)(uVar3 == 0);
		}
	}
	(**(code **)(*(int *)this->_vf + 0x24))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x20),uVar3);
	return uVar4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this /*$s2*/)
 // line 511, offset 0x80088ad4
	/* begin block 1 */
		// Start line: 512
		// Start offset: 0x80088AD4
		// Variables:
	// 		void * RetVal; // $s4
	// 		void * Done; // $s3
	// 		int Menu; // $s1

		/* begin block 1.1 */
			// Start line: 519
			// Start offset: 0x80088B18
			// Variables:
		// 		unsigned short PadVal; // $s0
		/* end block 1.1 */
		// End offset: 0x80088B9C
		// End Line: 542
	/* end block 1 */
	// End offset: 0x80088BD0
	// End Line: 550

	/* begin block 2 */
		// Start line: 1040
	/* end block 2 */
	// End Line: 1041

void * AreYouSureMessage__14CPauseMessages(CPauseMessages *this)

{
	bool bVar1;
	ushort uVar2;
	CPad *this_00;
	uint uVar3;
	undefined *puVar4;
	
	puVar4 = (undefined *)0x0;
	bVar1 = false;
	uVar3 = 1;
	(**(code **)(*(int *)this->_vf + 0x2c))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x28));
	while (!bVar1) {
		(**(code **)(*(int *)this->_vf + 0x34))
							((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x30));
		TSK_Sleep(1);
		this_00 = PAD_GetPad__FiUc(this->PadNum,'\x01');
		uVar2 = GetDown__C4CPad(this_00);
		if ((uVar2 & 3) != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
			uVar3 = (uint)(uVar3 == 0);
		}
		if ((uVar2 & 0x40) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			bVar1 = true;
			puVar4 = (undefined *)(uint)(uVar3 != 0);
		}
		if ((uVar2 & 0x100) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			bVar1 = true;
			puVar4 = &DAT_00000001;
		}
	}
	(**(code **)(*(int *)this->_vf + 0x3c))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x38),uVar3);
	return puVar4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PA_SetPauseOk__Fb(void * NewPause /*$a0*/)
 // line 573, offset 0x80088bf4
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x80088BF4
		// Variables:
	// 		void * Ret; // $v0
	/* end block 1 */
	// End offset: 0x80088BFC
	// End Line: 577

	/* begin block 2 */
		// Start line: 1170
	/* end block 2 */
	// End Line: 1171

void * PA_SetPauseOk__Fb(void *NewPause)

{
	void *pvVar1;
	
	pvVar1 = CanPause;
	CanPause = NewPause;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PA_GetPauseOk__Fv()
 // line 586, offset 0x80088c04
	/* begin block 1 */
		// Start line: 587
		// Start offset: 0x80088C04
	/* end block 1 */
	// End offset: 0x80088C08
	// End Line: 588

	/* begin block 2 */
		// Start line: 1196
	/* end block 2 */
	// End Line: 1197

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * PA_GetPauseOk__Fv(void)

{
	return CanPause;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this /*$a0*/, int s /*$s0*/, int Txt /*$s1*/, int Menu /*$s2*/, struct RECT *PRect /*stack 16*/)
 // line 610, offset 0x80088c10
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x80088C10
		// Variables:
	// 		int y; // $s7
	// 		int otpos; // $fp

		/* begin block 1.1 */
			// Start line: 624
			// Start offset: 0x80088CB0

			/* begin block 1.1.1 */
				// Start line: 625
				// Start offset: 0x80088CBC
				// Variables:
			// 		int len; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80088CBC
			// End Line: 626
		/* end block 1.1 */
		// End offset: 0x80088E1C
		// End Line: 633
	/* end block 1 */
	// End offset: 0x80088E1C
	// End Line: 633

	/* begin block 2 */
		// Start line: 1243
	/* end block 2 */
	// End Line: 1244

void MY_PausePrint__17CTempPauseMessageiiiP4RECT
							 (CTempPauseMessage *this,int s,int Txt,int Menu,RECT *PRect)

{
	byte bVar1;
	int iVar2;
	char *Str;
	int iVar3;
	int iVar4;
	int Y;
	
	Y = s * 10 + 0xb;
	if (Txt == 0x343) {
		Y = s * 10 + 9;
	}
	iVar2 = GetMaxOtPos__7CBlocks();
	if (s == 0) {
		Str = GetStr__Fi(Txt);
		bVar1 = BLUER;
		bVar1 = BLUEG;
		bVar1 = BLUEB;
	}
	else {
		if (s + -2 == Menu) {
			Str = GetStr__Fi(Txt);
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,Y,Str,JustCentre,PRect,(uint)GOLDR,(uint)GOLDG,(uint)GOLDB);
			Str = GetStr__Fi(Txt);
			iVar3 = GetStrWidth__5CFontPc(&MediumFont,Str);
			iVar4 = (int)((0x100U - iVar3) + (0x100U - iVar3 >> 0x1f)) >> 1;
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(iVar4 + 0x16,Y + 0x60,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,iVar2 + -1,
								 &DAT_00000001,(void *)0x0,8);
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(iVar3 + iVar4 + 0x23,Y + 0x60,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,iVar2 + -1,
								 &DAT_00000001,(void *)0x0,8);
			return;
		}
		Str = GetStr__Fi(Txt);
		bVar1 = WHITER;
		bVar1 = WHITEG;
		bVar1 = WHITEB;
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,Y,Str,JustCentre,PRect,(uint)bVar1,(uint)bVar1,(uint)bVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 637, offset 0x80088e50
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x80088E50
	/* end block 1 */
	// End offset: 0x80088E50
	// End Line: 638

	/* begin block 2 */
		// Start line: 1302
	/* end block 2 */
	// End Line: 1303

void InitPrintQuitMessage__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this /*$s2*/, int Menu /*$s3*/)
 // line 641, offset 0x80088e58
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x80088E58
		// Variables:
	// 		struct RECT PRect; // stack offset -40
	// 		int otpos; // $s0
	// 		int oldDotpos; // $s6
	// 		int oldTotpos; // $s5
	/* end block 1 */
	// End offset: 0x80088FA4
	// End Line: 663

	/* begin block 2 */
		// Start line: 1309
	/* end block 2 */
	// End Line: 1310

void PrintQuitMessage__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	int OT;
	int OT_00;
	RECT local_28;
	
	RedBack__Fv();
	OT = GetMaxOtPos__7CBlocks();
	OT_00 = SetOTpos__6Dialogi(&PBack,OT + -3);
	OT = SetOTpos__5CFonti(&MediumFont,OT + -2);
	SetRGB__6DialogUcUcUc(&PBack,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&PBack,0x94);
	SetBorder__6Dialogi(&PBack,0x12);
	Back__6Dialogiiii(&PBack,0x5f,0x60,0x82,0x30);
	local_28.x = 0x5f;
	local_28.y = 0x60;
	local_28.w = 0x82;
	local_28.h = 0x30;
	MY_PausePrint__17CTempPauseMessageiiiP4RECT(this,0,0x343,Menu,&local_28);
	MY_PausePrint__17CTempPauseMessageiiiP4RECT(this,2,0x343,Menu,&local_28);
	MY_PausePrint__17CTempPauseMessageiiiP4RECT(this,3,0x135,Menu,&local_28);
	PrintSelectBack__FUs(0x4e6);
	SetOTpos__5CFonti(&MediumFont,OT);
	SetOTpos__6Dialogi(&PBack,OT_00);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this /*$a0*/, int Menu /*$a1*/)
 // line 669, offset 0x80088fd0
	/* begin block 1 */
		// Start line: 670
		// Start offset: 0x80088FD0
	/* end block 1 */
	// End offset: 0x80088FD0
	// End Line: 670

	/* begin block 2 */
		// Start line: 1371
	/* end block 2 */
	// End Line: 1372

void LeavePrintQuitMessage__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 673, offset 0x80088fd8
	/* begin block 1 */
		// Start line: 674
		// Start offset: 0x80088FD8
	/* end block 1 */
	// End offset: 0x80088FD8
	// End Line: 674

	/* begin block 2 */
		// Start line: 1379
	/* end block 2 */
	// End Line: 1380

void InitPrintAreYouSure__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this /*$s2*/, int Menu /*$s3*/)
 // line 677, offset 0x80088fe0
	/* begin block 1 */
		// Start line: 678
		// Start offset: 0x80088FE0
		// Variables:
	// 		struct RECT PRect; // stack offset -40
	// 		int otpos; // $s0
	// 		int oldDotpos; // $s6
	// 		int oldTotpos; // $s5
	/* end block 1 */
	// End offset: 0x8008912C
	// End Line: 700

	/* begin block 2 */
		// Start line: 1386
	/* end block 2 */
	// End Line: 1387

void PrintAreYouSure__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	int OT;
	int OT_00;
	RECT local_28;
	
	RedBack__Fv();
	OT = GetMaxOtPos__7CBlocks();
	OT_00 = SetOTpos__6Dialogi(&PBack,OT + -3);
	OT = SetOTpos__5CFonti(&MediumFont,OT + -2);
	SetRGB__6DialogUcUcUc(&PBack,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&PBack,0x94);
	SetBorder__6Dialogi(&PBack,0x12);
	Back__6Dialogiiii(&PBack,0x50,0x60,0xa0,0x30);
	local_28.x = 0x50;
	local_28.y = 0x60;
	local_28.w = 0xa0;
	local_28.h = 0x30;
	MY_PausePrint__17CTempPauseMessageiiiP4RECT(this,0,0x26,Menu,&local_28);
	MY_PausePrint__17CTempPauseMessageiiiP4RECT(this,2,0x4e7,Menu,&local_28);
	MY_PausePrint__17CTempPauseMessageiiiP4RECT(this,3,0x2c9,Menu,&local_28);
	PrintSelectBack__FUs(0x4e6);
	SetOTpos__5CFonti(&MediumFont,OT);
	SetOTpos__6Dialogi(&PBack,OT_00);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this /*$a0*/, int Menu /*$a1*/)
 // line 706, offset 0x80089158
	/* begin block 1 */
		// Start line: 707
		// Start offset: 0x80089158
	/* end block 1 */
	// End offset: 0x80089158
	// End Line: 707

	/* begin block 2 */
		// Start line: 1450
	/* end block 2 */
	// End Line: 1451

void LeavePrintAreYouSure__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 710, offset 0x80089160
	/* begin block 1 */
		// Start line: 711
		// Start offset: 0x80089160
	/* end block 1 */
	// End offset: 0x80089160
	// End Line: 711

	/* begin block 2 */
		// Start line: 1458
	/* end block 2 */
	// End Line: 1459

void InitPrintPaused__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 715, offset 0x80089168
	/* begin block 1 */
		// Start line: 716
		// Start offset: 0x80089168
		// Variables:
	// 		struct RECT PRect; // stack offset -32
	// 		int otpos; // $s0
	// 		int oldDotpos; // $s3
	// 		int oldTotpos; // $s0
	/* end block 1 */
	// End offset: 0x80089298
	// End Line: 745

	/* begin block 2 */
		// Start line: 1467
	/* end block 2 */
	// End Line: 1468

void PrintPaused__17CTempPauseMessage(CTempPauseMessage *this)

{
	void *pvVar1;
	int OT;
	int OT_00;
	char *Str;
	RECT local_20;
	
	pvVar1 = IsGameLoading__Fv();
	if (pvVar1 == (void *)0x0) {
		RedBack__Fv();
		OT = GetMaxOtPos__7CBlocks();
		OT_00 = SetOTpos__6Dialogi(&PBack,OT + -3);
		OT = SetOTpos__5CFonti(&MediumFont,OT + -2);
		SetRGB__6DialogUcUcUc(&PBack,BORDERR,BORDERG,BORDERB);
		SetBack__6Dialogi(&PBack,0x94);
		SetBorder__6Dialogi(&PBack,0x12);
		Back__6Dialogiiii(&PBack,0x80,0x70,0x40,0xf);
		local_20.x = 0x80;
		local_20.y = 0x70;
		local_20.w = 0x40;
		local_20.h = 0xf;
		Str = GetStr__Fi(0x302);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0xb,Str,JustCentre,&local_20,0xff,0xff,0xff);
		SetOTpos__5CFonti(&MediumFont,OT);
		SetOTpos__6Dialogi(&PBack,OT_00);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 761, offset 0x800892b8
	/* begin block 1 */
		// Start line: 762
		// Start offset: 0x800892B8
	/* end block 1 */
	// End offset: 0x800892B8
	// End Line: 762

	/* begin block 2 */
		// Start line: 1564
	/* end block 2 */
	// End Line: 1565

void LeavePrintPaused__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 765, offset 0x800892c0
	/* begin block 1 */
		// Start line: 766
		// Start offset: 0x800892C0
	/* end block 1 */
	// End offset: 0x800892C0
	// End Line: 766

	/* begin block 2 */
		// Start line: 1571
	/* end block 2 */
	// End Line: 1572

void ___17CTempPauseMessage(CTempPauseMessage *this,int __in_chrg)

{
	*(undefined4 *)(this->CPauseMessages)._vf = 0x801103d0;
	___14CPauseMessages((CPauseMessages *)this,__in_chrg);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.DoPause__14CPauseMessagesi()
 // line 770, offset 0x800892e8
	/* begin block 1 */
		// Start line: 771
		// Start offset: 0x800892E8
	/* end block 1 */
	// End offset: 0x80089300
	// End Line: 771

	/* begin block 2 */
		// Start line: 1581
	/* end block 2 */
	// End Line: 1582

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_DoPause__14CPauseMessagesi(void)

{
	___6Dialog(&PBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.DoPause__14CPauseMessagesi()
 // line 770, offset 0x80089310
	/* begin block 1 */
		// Start line: 771
		// Start offset: 0x80089310
	/* end block 1 */
	// End offset: 0x80089328
	// End Line: 771

	/* begin block 2 */
		// Start line: 1581
	/* end block 2 */
	// End Line: 1582

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_DoPause__14CPauseMessagesi(void)

{
	__6Dialog(&PBack);
	return;
}





