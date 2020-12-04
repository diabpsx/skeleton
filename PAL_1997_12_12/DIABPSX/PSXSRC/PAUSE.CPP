#include "THISDUST.H"
#include "PAUSE.H"


// decompiled code
// original method signature: 
// struct CPauseMessages * /*$ra*/ __14CPauseMessages(struct CPauseMessages *this /*$v0*/)
 // line 82, offset 0x80083cc4
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x80083CC4
	/* end block 1 */
	// End offset: 0x80083CC4
	// End Line: 83

	/* begin block 2 */
		// Start line: 164
	/* end block 2 */
	// End Line: 165

CPauseMessages * __14CPauseMessages(CPauseMessages *this)

{
	*(undefined4 *)this->_vf = 0x80120174;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14CPauseMessages(struct CPauseMessages *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 83, offset 0x80083c90
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80083C90
	/* end block 1 */
	// End offset: 0x80083C90
	// End Line: 84

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

void ___14CPauseMessages(CPauseMessages *this,int __in_chrg)

{
	*(undefined4 *)this->_vf = 0x80120174;
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete(this);
	}
	return;
}



// decompiled code
// original method signature: 
// struct CTempPauseMessage * /*$ra*/ __17CTempPauseMessage(struct CTempPauseMessage *this /*$s0*/)
 // line 112, offset 0x80083c4c
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x80083C4C
	/* end block 1 */
	// End offset: 0x80083C4C
	// End Line: 113

	/* begin block 2 */
		// Start line: 224
	/* end block 2 */
	// End Line: 225

CTempPauseMessage * __17CTempPauseMessage(CTempPauseMessage *this)

{
	TextDat *pTVar1;
	
	__14CPauseMessages((CPauseMessages *)this);
	*(undefined4 *)(this->CPauseMessages)._vf = 0x8012011c;
	pTVar1 = GM_UseTexData__Fi(0);
	*(TextDat **)((this->CPauseMessages)._vf + 4) = pTVar1;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PauseTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 175, offset 0x80082e04
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x80082E0C

		/* begin block 1.1 */
			// Start line: 182
			// Start offset: 0x80082E0C
			// Variables:
		// 		struct CTempPauseMessage Cpm; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x80082E0C
		// End Line: 184
	/* end block 1 */
	// End offset: 0x80082E40
	// End Line: 188

	/* begin block 2 */
		// Start line: 350
	/* end block 2 */
	// End Line: 351

void PauseTask__FP4TASK(TASK *T)

{
	int nPadNum;
	CPauseMessages CStack24;
	
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
 // line 198, offset 0x80082e50
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x80082E50
		// Variables:
	// 		void * Done; // $s2
	// 		int PadVal; // $s3

		/* begin block 1.1 */
			// Start line: 203
			// Start offset: 0x80082E70

			/* begin block 1.1.1 */
				// Start line: 205
				// Start offset: 0x80082E78

				/* begin block 1.1.1.1 */
					// Start line: 206
					// Start offset: 0x80082E88

					/* begin block 1.1.1.1.1 */
						// Start line: 207
						// Start offset: 0x80082E88
						// Variables:
					// 		int f; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 207
							// Start offset: 0x80082E8C
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80082F00
						// End Line: 220
					/* end block 1.1.1.1.1 */
					// End offset: 0x80082F0C
					// End Line: 222
				/* end block 1.1.1.1 */
				// End offset: 0x80082F0C
				// End Line: 222
			/* end block 1.1.1 */
			// End offset: 0x80082F0C
			// End Line: 222
		/* end block 1.1 */
		// End offset: 0x80082F0C
		// End Line: 224
	/* end block 1 */
	// End offset: 0x80082F1C
	// End Line: 227

	/* begin block 2 */
		// Start line: 396
	/* end block 2 */
	// End Line: 397

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetPausePad__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	CPad *this;
	void *pvVar3;
	int PadNum;
	int iVar4;
	int iVar5;
	
	bVar1 = false;
	iVar5 = -1;
	while (!bVar1) {
		PadNum = 0;
		if (CanPause != (void *)0x0) {
			iVar4 = 0;
			while ((PadNum <= FePlayerNo && (!bVar1))) {
				if ((&plr[0].plractive)[iVar4] != '\0') {
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
				iVar4 = iVar4 + 0x23a8;
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
 // line 237, offset 0x80082f3c
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x80082F3C
	/* end block 1 */
	// End offset: 0x80082F58
	// End Line: 243

	/* begin block 2 */
		// Start line: 477
	/* end block 2 */
	// End Line: 478

void * TryPadForPause__Fi(int PadNum)

{
	ushort uVar1;
	CPad *this;
	
	this = PAD_GetPad__FiUc(PadNum,'\0');
	uVar1 = GetUp__C4CPad(this);
	return (void *)(uint)((uVar1 & 0x10) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoPause__14CPauseMessagesi(struct CPauseMessages *this /*$s1*/, int nPadNum /*$s0*/)
 // line 254, offset 0x80082f68
	/* begin block 1 */
		// Start line: 255
		// Start offset: 0x80082F68

		/* begin block 1.1 */
			// Start line: 255
			// Start offset: 0x80082F68

			/* begin block 1.1.1 */
				// Start line: 259
				// Start offset: 0x80082F94

				/* begin block 1.1.1.1 */
					// Start line: 260
					// Start offset: 0x80082F94

					/* begin block 1.1.1.1.1 */
						// Start line: 261
						// Start offset: 0x80082FEC
						// Variables:
					// 		void * oldsflag; // $s3
					// 		void * oldpflag; // $s2

						/* begin block 1.1.1.1.1.1 */
							// Start line: 275
							// Start offset: 0x8008304C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 277
								// Start offset: 0x80083094

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 278
									// Start offset: 0x800830B8

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 279
										// Start offset: 0x800830B8

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 280
											// Start offset: 0x800830CC

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 294
												// Start offset: 0x8008312C
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80083150
											// End Line: 298
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80083150
										// End Line: 299
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80083150
									// End Line: 299
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80083150
								// End Line: 299
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80083150
							// End Line: 299
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80083150
						// End Line: 299
					/* end block 1.1.1.1.1 */
					// End offset: 0x800831B4
					// End Line: 320
				/* end block 1.1.1.1 */
				// End offset: 0x800831B4
				// End Line: 320
			/* end block 1.1.1 */
			// End offset: 0x800831B4
			// End Line: 320
		/* end block 1.1 */
		// End offset: 0x800831B4
		// End Line: 320
	/* end block 1 */
	// End offset: 0x800831B4
	// End Line: 320

	/* begin block 2 */
		// Start line: 511
	/* end block 2 */
	// End Line: 512

void DoPause__14CPauseMessagesi(CPauseMessages *this,int nPadNum)

{
	bool bVar1;
	void *NewFlag;
	void *NewFlag_00;
	void *pvVar2;
	int iVar3;
	undefined *puVar4;
	
	if ((this->PadNum != -1) &&
		 (((uint)optionsflag | (uint)qtextflag | (uint)invflag | (uint)chrflag | (uint)questlog |
			 (uint)sbookflag | (int)stextflag) == 0)) {
		TSK_SetExecFilter(0x8000,0x8000);
		this->PadNum = nPadNum;
		PauseMode = '\x01';
		NewFlag = GLUE_SetHomingScrollFlag__Fb((void *)0x0);
		NewFlag_00 = GLUE_SetShowPanelFlag__Fb((void *)0x0);
		STR_pauseall__Fv();
		stream_stop__Fv();
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
				if (pvVar2 == (void *)0x0) {
					DBG_SendMessage("FADE OUT - MISSED %s %d");
				}
				else {
					while (pvVar2 = GetFadeState__Fv(), pvVar2 != (void *)0x0) {
						TSK_Sleep(1);
					}
				}
				PauseMode = '\0';
				iVar3 = 0x23a8;
				do {
					(&plr[0].plractive)[iVar3] = '\0';
					iVar3 = iVar3 + -0x23a8;
				} while (-1 < iVar3);
				GLUE_SuspendGame__Fv();
				GLUE_SetFinished__Fb(&DAT_00000001);
				MAIN_RestartGameTask__Fv();
				TSK_Sleep(3);
				GLUE_ResumeGame__Fv();
				user_start = &DAT_00000001;
			}
		}
		STR_resumeall__Fv();
		GLUE_SetShowPanelFlag__Fb(NewFlag_00);
		GLUE_SetHomingScrollFlag__Fb(NewFlag);
		PauseMode = '\0';
		TSK_ClearExecFilter();
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ DoPausedMessage__14CPauseMessages(struct CPauseMessages *this /*$s2*/)
 // line 330, offset 0x800831d4
	/* begin block 1 */
		// Start line: 331
		// Start offset: 0x800831D4
		// Variables:
	// 		void * RetVal; // $s4
	// 		void * Done; // $s3
	// 		int lvlchange; // $s0
	// 		int newx; // stack offset -48
	// 		int newy; // $fp

		/* begin block 1.1 */
			// Start line: 342
			// Start offset: 0x8008327C
			// Variables:
		// 		struct CPad *P; // $s1

			/* begin block 1.1.1 */
				// Start line: 363
				// Start offset: 0x8008332C

				/* begin block 1.1.1.1 */
					// Start line: 366
					// Start offset: 0x80083350

					/* begin block 1.1.1.1.1 */
						// Start line: 367
						// Start offset: 0x80083350
						// Variables:
					// 		int y; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 367
							// Start offset: 0x80083350

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 369
								// Start offset: 0x8008335C
								// Variables:
							// 		int x; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80083378
							// End Line: 372
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80083378
						// End Line: 372
					/* end block 1.1.1.1.1 */
					// End offset: 0x80083380
					// End Line: 373
				/* end block 1.1.1.1 */
				// End offset: 0x80083380
				// End Line: 373
			/* end block 1.1.1 */
			// End offset: 0x80083380
			// End Line: 373
		/* end block 1.1 */
		// End offset: 0x800833F4
		// End Line: 411
	/* end block 1 */
	// End offset: 0x800834B8
	// End Line: 432

	/* begin block 2 */
		// Start line: 665
	/* end block 2 */
	// End Line: 666

void * DoPausedMessage__14CPauseMessages(CPauseMessages *this)

{
	short sVar1;
	short sVar2;
	bool bVar3;
	bool bVar4;
	ushort uVar5;
	CPad *this_00;
	uchar *puVar6;
	int iVar7;
	int iVar8;
	uint uVar9;
	undefined *puVar10;
	
	puVar10 = (undefined *)0x0;
	bVar4 = false;
	uVar9 = 0xffffffff;
	sVar1 = plr[this->PadNum]._px;
	sVar2 = plr[this->PadNum]._py;
	(**(code **)(*(int *)this->_vf + 0x44))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x40));
LAB_8008327c:
	if ((bVar4) || (PauseMode == '\0')) {
		if ((-1 < (int)uVar9) && (uVar9 != (uint)currlevel)) {
			trigs._tmsg = 0x4c;
			trigs._tx = (int)sVar1;
			trigs._ty = (int)sVar2;
			trigs._tlvl = uVar9;
		}
		(**(code **)(*(int *)this->_vf + 0x54))
							((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x50));
		return puVar10;
	}
	(**(code **)(*(int *)this->_vf + 0x4c))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x48));
	TSK_Sleep(1);
	this_00 = PAD_GetPad__FiUc(this->PadNum,'\0');
	uVar5 = GetUp__C4CPad(this_00);
	if ((uVar5 & 0x10) == 0) {
		this_00 = PAD_GetPad__FiUc(this->PadNum,'\0');
		uVar5 = GetDown__C4CPad(this_00);
		if ((uVar5 & 0x20) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			bVar4 = true;
			puVar10 = &DAT_00000001;
		}
	}
	else {
		PlaySFX__Fi(IS_TITLSLCT);
		bVar4 = true;
		puVar10 = (undefined *)0x0;
		TSK_Sleep(4);
	}
	this_00 = PAD_GetPad__FiUc(0,'\0');
	uVar5 = GetDown__C4CPad(this_00);
	iVar8 = 0;
	if ((uVar5 & 0x40) != 0) {
		while (iVar7 = 0, puVar6 = &automapview, iVar8 < 0x28) {
			do {
				puVar6[iVar8] = -1;
				iVar7 = iVar7 + 1;
				puVar6 = puVar6 + 0x28;
			} while (iVar7 < 5);
			iVar8 = iVar8 + 1;
		}
	}
	uVar5 = GetDown__C4CPad(this_00);
	if ((uVar5 & 1) != 0) {
		bVar3 = (int)uVar9 < 0x10;
		if (uVar9 == 0xffffffff) {
			uVar9 = (uint)currlevel;
			bVar3 = currlevel < 0x10;
		}
		if (bVar3) {
			uVar9 = uVar9 + 1;
		}
	}
	uVar5 = GetDown__C4CPad(this_00);
	if ((uVar5 & 2) == 0) goto LAB_800833ec;
	if (uVar9 == 0xffffffff) {
		uVar9 = (uint)currlevel;
	}
	if (uVar9 != 0) {
		uVar9 = uVar9 - 1;
		goto LAB_800833ec;
	}
	goto LAB_800833f4;
LAB_800833ec:
	if (-1 < (int)uVar9) {
LAB_800833f4:
		sprintf(tempstr,"player level:%d - skip to %d",(uint)currlevel,uVar9);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0x6c,0x90,tempstr,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,
							 (uint)WHITEG);
	}
	goto LAB_8008327c;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoQuitMessage__14CPauseMessages(struct CPauseMessages *this /*$s2*/)
 // line 442, offset 0x800834ec
	/* begin block 1 */
		// Start line: 443
		// Start offset: 0x800834EC
		// Variables:
	// 		int RetVal; // $s4
	// 		void * Done; // $s3
	// 		int Menu; // $s1

		/* begin block 1.1 */
			// Start line: 450
			// Start offset: 0x80083530
			// Variables:
		// 		unsigned short PadVal; // $s0
		/* end block 1.1 */
		// End offset: 0x800835B4
		// End Line: 473
	/* end block 1 */
	// End offset: 0x800835E8
	// End Line: 481

	/* begin block 2 */
		// Start line: 944
	/* end block 2 */
	// End Line: 945

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
		this_00 = PAD_GetPad__FiUc(this->PadNum,'\0');
		uVar2 = GetDown__C4CPad(this_00);
		if ((uVar2 & 3) != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
			uVar3 = (uint)(uVar3 == 0);
		}
		if ((uVar2 & 0x40) == 0) {
			if ((uVar2 & 0x3fc0) != 0) {
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
 // line 490, offset 0x8008360c
	/* begin block 1 */
		// Start line: 491
		// Start offset: 0x8008360C
		// Variables:
	// 		void * RetVal; // $s4
	// 		void * Done; // $s3
	// 		int Menu; // $s1

		/* begin block 1.1 */
			// Start line: 498
			// Start offset: 0x80083650
			// Variables:
		// 		unsigned short PadVal; // $s0
		/* end block 1.1 */
		// End offset: 0x800836B8
		// End Line: 514
	/* end block 1 */
	// End offset: 0x800836EC
	// End Line: 522

	/* begin block 2 */
		// Start line: 1045
	/* end block 2 */
	// End Line: 1046

void * AreYouSureMessage__14CPauseMessages(CPauseMessages *this)

{
	bool bVar1;
	ushort uVar2;
	CPad *this_00;
	uint uVar3;
	void *pvVar4;
	
	pvVar4 = (void *)0x0;
	bVar1 = false;
	uVar3 = 1;
	(**(code **)(*(int *)this->_vf + 0x2c))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x28));
	while (!bVar1) {
		(**(code **)(*(int *)this->_vf + 0x34))
							((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x30));
		TSK_Sleep(1);
		this_00 = PAD_GetPad__FiUc(this->PadNum,'\0');
		uVar2 = GetDown__C4CPad(this_00);
		if ((uVar2 & 3) != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
			uVar3 = (uint)(uVar3 == 0);
		}
		if ((uVar2 & 0x3fc0) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			bVar1 = true;
			pvVar4 = (void *)(uint)(uVar3 != 0);
		}
	}
	(**(code **)(*(int *)this->_vf + 0x3c))
						((int)&this->PadNum + (int)*(short *)(*(int *)this->_vf + 0x38),uVar3);
	return pvVar4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PA_SetPauseOk__Fb(void * NewPause /*$a0*/)
 // line 545, offset 0x80083710
	/* begin block 1 */
		// Start line: 546
		// Start offset: 0x80083710
		// Variables:
	// 		void * Ret; // $v0
	/* end block 1 */
	// End offset: 0x80083718
	// End Line: 549

	/* begin block 2 */
		// Start line: 1161
	/* end block 2 */
	// End Line: 1162

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
 // line 558, offset 0x80083720
	/* begin block 1 */
		// Start line: 559
		// Start offset: 0x80083720
	/* end block 1 */
	// End offset: 0x80083724
	// End Line: 560

	/* begin block 2 */
		// Start line: 1187
	/* end block 2 */
	// End Line: 1188

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * PA_GetPauseOk__Fv(void)

{
	return CanPause;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this /*$a0*/, int s /*$s0*/, char *Txt /*$s2*/, int Menu /*$s1*/)
 // line 582, offset 0x8008372c
	/* begin block 1 */
		// Start line: 583
		// Start offset: 0x8008372C
		// Variables:
	// 		struct RECT PRect; // stack offset -48

		/* begin block 1.1 */
			// Start line: 583
			// Start offset: 0x8008372C

			/* begin block 1.1.1 */
				// Start line: 591
				// Start offset: 0x800837B4
				// Variables:
			// 		int len; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80083848
			// End Line: 594
		/* end block 1.1 */
		// End offset: 0x80083848
		// End Line: 594
	/* end block 1 */
	// End offset: 0x80083848
	// End Line: 594

	/* begin block 2 */
		// Start line: 1234
	/* end block 2 */
	// End Line: 1235

void MY_PausePrint__17CTempPauseMessageiPci(CTempPauseMessage *this,int s,char *Txt,int Menu)

{
	int iVar1;
	int iVar2;
	int y;
	RECT RStack48;
	
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,s * 10 + 0xb,Txt,JustCentre,&RStack48,0xff,0xff,0xff);
	if (s + -2 == Menu) {
		iVar1 = GetStrWidth__5CFontPc(&MediumFont,Txt);
		iVar2 = (int)((0x100U - iVar1) + (0x100U - iVar1 >> 0x1f)) >> 1;
		y = s * 10 + 0x6b;
		DrawSpinner__FiiUcUcUciiibiT8
							(iVar2 + 0x16,y,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x100,&DAT_00000001);
		DrawSpinner__FiiUcUcUciiibiT8
							(iVar1 + iVar2 + 0x23,y,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x100,&DAT_00000001);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 598, offset 0x80083878
	/* begin block 1 */
		// Start line: 599
		// Start offset: 0x80083878
	/* end block 1 */
	// End offset: 0x80083878
	// End Line: 599

	/* begin block 2 */
		// Start line: 1282
	/* end block 2 */
	// End Line: 1283

void InitPrintQuitMessage__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this /*$s1*/, int Menu /*$s2*/)
 // line 602, offset 0x80083880
	/* begin block 1 */
		// Start line: 603
		// Start offset: 0x80083880
		// Variables:
	// 		struct RECT PRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x80083964
	// End Line: 618

	/* begin block 2 */
		// Start line: 1289
	/* end block 2 */
	// End Line: 1290

void PrintQuitMessage__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	RedBack__Fv();
	SetRGB__6DialogUcUcUc(&PBack,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&PBack,0xc6);
	SetBorder__6Dialogi(&PBack,0x28);
	Back__6Dialogiiii(&PBack,0x5f,0x60,0x82,0x30);
	MY_PausePrint__17CTempPauseMessageiPci(this,0,"QUIT ?",Menu);
	MY_PausePrint__17CTempPauseMessageiPci(this,2,(char *)&PTR_DAT_8012a844,Menu);
	MY_PausePrint__17CTempPauseMessageiPci(this,3,(char *)&PTR_DAT_8012a848,Menu);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this /*$a0*/, int Menu /*$a1*/)
 // line 624, offset 0x80083980
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x80083980
	/* end block 1 */
	// End offset: 0x80083980
	// End Line: 625

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

void LeavePrintQuitMessage__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 628, offset 0x80083988
	/* begin block 1 */
		// Start line: 629
		// Start offset: 0x80083988
	/* end block 1 */
	// End offset: 0x80083988
	// End Line: 629

	/* begin block 2 */
		// Start line: 1346
	/* end block 2 */
	// End Line: 1347

void InitPrintAreYouSure__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this /*$s1*/, int Menu /*$s2*/)
 // line 632, offset 0x80083990
	/* begin block 1 */
		// Start line: 633
		// Start offset: 0x80083990
		// Variables:
	// 		struct RECT PRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x80083A74
	// End Line: 646

	/* begin block 2 */
		// Start line: 1353
	/* end block 2 */
	// End Line: 1354

void PrintAreYouSure__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	RedBack__Fv();
	SetRGB__6DialogUcUcUc(&PBack,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&PBack,0xc6);
	SetBorder__6Dialogi(&PBack,0x28);
	Back__6Dialogiiii(&PBack,0x50,0x60,0xa0,0x30);
	MY_PausePrint__17CTempPauseMessageiPci(this,0,"ARE YOU SURE ?",Menu);
	MY_PausePrint__17CTempPauseMessageiPci(this,2,(char *)&PTR_DAT_8012a844,Menu);
	MY_PausePrint__17CTempPauseMessageiPci(this,3,(char *)&PTR_DAT_8012a848,Menu);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this /*$a0*/, int Menu /*$a1*/)
 // line 652, offset 0x80083a90
	/* begin block 1 */
		// Start line: 653
		// Start offset: 0x80083A90
	/* end block 1 */
	// End offset: 0x80083A90
	// End Line: 653

	/* begin block 2 */
		// Start line: 1396
	/* end block 2 */
	// End Line: 1397

void LeavePrintAreYouSure__17CTempPauseMessagei(CTempPauseMessage *this,int Menu)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 656, offset 0x80083a98
	/* begin block 1 */
		// Start line: 657
		// Start offset: 0x80083A98
	/* end block 1 */
	// End offset: 0x80083A98
	// End Line: 657

	/* begin block 2 */
		// Start line: 1404
	/* end block 2 */
	// End Line: 1405

void InitPrintPaused__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 660, offset 0x80083aa0
	/* begin block 1 */
		// Start line: 661
		// Start offset: 0x80083AA0
		// Variables:
	// 		struct RECT PRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x80083BB4
	// End Line: 674

	/* begin block 2 */
		// Start line: 1411
	/* end block 2 */
	// End Line: 1412

void PrintPaused__17CTempPauseMessage(CTempPauseMessage *this)

{
	char *Str;
	RECT local_18;
	
	RedBack__Fv();
	SetRGB__6DialogUcUcUc(&PBack,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&PBack,0xc6);
	SetBorder__6Dialogi(&PBack,0x28);
	Back__6Dialogiiii(&PBack,0x80,0x70,0x40,0xf);
	local_18.x = 0x80;
	local_18.y = 0x70;
	local_18.w = 0x40;
	local_18.h = 0xf;
	Str = GetStr__Fi(STR_PAUSE);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,10,Str,JustCentre,&local_18,0xff,0xff,0xff);
	Str = VER_GetVerString__Fv();
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,0x9f,Str,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/)
 // line 690, offset 0x80083bcc
	/* begin block 1 */
		// Start line: 691
		// Start offset: 0x80083BCC
	/* end block 1 */
	// End offset: 0x80083BCC
	// End Line: 691

	/* begin block 2 */
		// Start line: 1474
	/* end block 2 */
	// End Line: 1475

void LeavePrintPaused__17CTempPauseMessage(CTempPauseMessage *this)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._17CTempPauseMessage(struct CTempPauseMessage *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 694, offset 0x80083bd4
	/* begin block 1 */
		// Start line: 695
		// Start offset: 0x80083BD4
	/* end block 1 */
	// End offset: 0x80083BD4
	// End Line: 695

	/* begin block 2 */
		// Start line: 1481
	/* end block 2 */
	// End Line: 1482

void ___17CTempPauseMessage(CTempPauseMessage *this,int __in_chrg)

{
	*(undefined4 *)(this->CPauseMessages)._vf = 0x8012011c;
	___14CPauseMessages((CPauseMessages *)this,__in_chrg);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.DoPause__14CPauseMessagesi()
 // line 699, offset 0x80083bfc
	/* begin block 1 */
		// Start line: 700
		// Start offset: 0x80083BFC
	/* end block 1 */
	// End offset: 0x80083C14
	// End Line: 700

	/* begin block 2 */
		// Start line: 1491
	/* end block 2 */
	// End Line: 1492

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_DoPause__14CPauseMessagesi(void)

{
	___6Dialog(&PBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.DoPause__14CPauseMessagesi()
 // line 699, offset 0x80083c24
	/* begin block 1 */
		// Start line: 700
		// Start offset: 0x80083C24
	/* end block 1 */
	// End offset: 0x80083C3C
	// End Line: 700

	/* begin block 2 */
		// Start line: 1491
	/* end block 2 */
	// End Line: 1492

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_DoPause__14CPauseMessagesi(void)

{
	__6Dialog(&PBack);
	return;
}





