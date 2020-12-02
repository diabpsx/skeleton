#include "THISDUST.H"
#include "MINITEXT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeQuestText__Fv()
 // line 112, offset 0x8004d95c
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x8004D95C
	/* end block 1 */
	// End offset: 0x8004D95C
	// End Line: 113

	/* begin block 2 */
		// Start line: 227
	/* end block 2 */
	// End Line: 228

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeQuestText__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitQuestText__Fv()
 // line 119, offset 0x8004d964
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8004D964
	/* end block 1 */
	// End offset: 0x8004D968
	// End Line: 124

	/* begin block 2 */
		// Start line: 242
	/* end block 2 */
	// End Line: 243

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitQuestText__Fv(void)

{
	qtextflag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcTextSpeed__FPCc(char *Name /*$s0*/)
 // line 133, offset 0x8004d970
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x8004D970
		// Variables:
	// 		char *ptr; // $s1
	// 		char SpeechName[16]; // stack offset -48
	// 		unsigned long SfxFrames; // $s0
	// 		unsigned long TextHeight; // $v1

		/* begin block 1.1 */
			// Start line: 134
			// Start offset: 0x8004D970

			/* begin block 1.1.1 */
				// Start line: 144
				// Start offset: 0x8004D998
				// Variables:
			// 		enum LANG_TYPE Lang; // $v1
			// 		char Prefix[2]; // stack offset -32
			// 		struct RECT Window; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x8004DAE8
			// End Line: 210
		/* end block 1.1 */
		// End offset: 0x8004DB04
		// End Line: 214
	/* end block 1 */
	// End offset: 0x8004DB14
	// End Line: 222

	/* begin block 2 */
		// Start line: 275
	/* end block 2 */
	// End Line: 276

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcTextSpeed__FPCc(char *Name)

{
	char *Str;
	LANG_TYPE LVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	char acStack48 [16];
	undefined local_20;
	undefined local_1f;
	RECT local_18;
	
	Str = qtextptr;
	if (FileSYS == 2) {
		LVar1 = LANG_GetLang__Fv();
		switch(LVar1) {
		case LANG_ENGLISH:
			local_20 = 0x45;
			break;
		case LANG_FRENCH:
			local_20 = 0x46;
			break;
		case LANG_GERMAN:
			local_20 = 0x47;
			break;
		case LANG_SWEDISH:
			local_20 = 0x53;
			break;
		case LANG_JAP:
			local_20 = 0x4a;
			break;
		case LANG_NONE:
			DBG_Error((char *)0x0,"source/MINITEXT.cpp",0xa5);
		}
		local_1f = 0;
		sprintf(acStack48,"%s%s.VAG",&local_20,Name);
		uVar2 = BL_FileLength__FPcc(acStack48,'\0');
		if (uVar2 == 0) {
			DBG_Error((char *)0x0,"source/MINITEXT.cpp",0xaf);
		}
		local_18.w = 0x118;
		local_18.x = 0;
		local_18.y = 0;
		local_18.h = -1;
		iVar3 = GetWrap__5CFontPcP4RECT(&MediumFont,Str,&local_18);
		iVar4 = textadj;
		if (FeFlag != '\0') {
			iVar4 = fetextadj;
		}
		qtextSpd = (uint)(((iVar3 * 0xf + 0xd7) - iVar4) * 0x10000) / (uVar2 / 0x69);
	}
	else {
		qtextSpd = 0x10000;
	}
	qtbodge = (void *)0x0;
	scrolltexty = qtexty << 0x10;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FadeMusicTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 240, offset 0x8004db2c
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x8004DB2C
		// Variables:
	// 		long MusicVolume; // $s0
	/* end block 1 */
	// End offset: 0x8004DC60
	// End Line: 283

	/* begin block 2 */
		// Start line: 505
	/* end block 2 */
	// End Line: 506

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FadeMusicTSK__FP4TASK(TASK *T)

{
	SFXHDR *sfh;
	int iVar1;
	int iVar2;
	
	if (MusicFading == (void *)0x0) {
		MusicFading = &DAT_00000001;
		iVar2 = sglMusicVolume;
		if (FadeState != '\0') {
			do {
				if (sghMusic != (SFXHDR *)0x0) {
					if (FadeState == '\x02') {
						if (iVar2 < sglMusicVolume) {
							if (sghMusic->state == '\x03') {
								STR_SoundCommand__FP6SFXHDRi(sghMusic,4);
							}
							iVar2 = iVar2 + 0x80;
						}
						else {
							if (sghMusic->state == '\x03') {
								STR_SoundCommand__FP6SFXHDRi(sghMusic,4);
							}
							FadeState = '\0';
						}
					}
					else {
						if (FadeState == '\x03') {
							if (iVar2 < 1) {
								STR_SoundCommand__FP6SFXHDRi(sghMusic,3);
								FadeState = '\x01';
							}
							else {
								iVar2 = iVar2 + -0x40;
							}
						}
					}
					sfh = sghMusic;
					iVar1 = iVar2 * sglMasterVolume >> 8;
					sghMusic->volume = iVar1;
					sfh->s_volume = iVar1;
					STR_setvolume__FP6SFXHDR(sfh);
				}
				TSK_Sleep(1);
			} while (FadeState != '\0');
		}
		MusicFading = (void *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitQTextMsg__Fi(int m /*$s2*/)
 // line 296, offset 0x8004dc78
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8004DC78

		/* begin block 1.1 */
			// Start line: 337
			// Start offset: 0x8004DD44
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x8004DD6C
		// End Line: 338

		/* begin block 1.2 */
			// Start line: 345
			// Start offset: 0x8004DD9C

			/* begin block 1.2.1 */
				// Start line: 346
				// Start offset: 0x8004DDBC
				// Variables:
			// 		struct DEF_ARGS *args; // $v1
			/* end block 1.2.1 */
			// End offset: 0x8004DE40
			// End Line: 368
		/* end block 1.2 */
		// End offset: 0x8004DEB0
		// End Line: 391
	/* end block 1 */
	// End offset: 0x8004DEB0
	// End Line: 391

	/* begin block 2 */
		// Start line: 624
	/* end block 2 */
	// End Line: 625

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitQTextMsg__Fi(int m)

{
	TASK *pTVar1;
	int *piVar2;
	uint uVar3;
	
	TextNum = m;
	if (qtextflag == '\0') {
		qtextflag = '\x01';
		gbProcessPlayers = '\0';
		PauseMode = '\x01';
		TextNum = m;
		TSK_Sleep(1);
		if (FeFlag != '\0') {
			switch(m) {
			case 0x103:
				iBookName = (int)&DAT_00002001;
				break;
			case 0x104:
				iBookName = (int)&DAT_00002002;
				break;
			case 0x105:
				iBookName = (int)&DAT_00002003;
				break;
			case 0x106:
				iBookName = (int)&DAT_00002004;
				break;
			case 0x107:
				iBookName = (int)&DAT_00002005;
				break;
			case 0x108:
				iBookName = (int)&DAT_00002006;
				break;
			case 0x109:
				iBookName = (int)&DAT_00002007;
				break;
			case 0x10a:
				iBookName = (int)&DAT_00002008;
				break;
			case 0x10b:
				iBookName = (int)&DAT_00002009;
				break;
			case 0x10c:
				iBookName = (int)&DAT_0000200a;
			}
		}
		uVar3 = 1;
		stream_stop__Fv();
		do {
			SpuSetKey(0,1 << (uVar3 & 0x1f));
			uVar3 = uVar3 + 1;
		} while ((int)uVar3 < 0x18);
		while (SFXHDR_800b9c64.used != '\0') {
			TSK_Sleep(1);
		}
		if (alltext[m].scrlltxt == '\0') {
			qtextflag = '\0';
			PauseMode = '\0';
			CDWAIT = (void *)0x0;
			PlaySFX__Fi(alltext[m].sfxnr);
			gbProcessPlayers = '\x01';
		}
		else {
			CDWAIT = &DAT_00000001;
			if (FadeState == '\0') {
				TSK_AddTask(0,FadeMusicTSK__FP4TASK,0x800,0);
			}
			FadeState = '\x03';
			if (stextflag != '\0') {
				GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
				GLUE_SetShowPanelFlag__Fb((void *)0x0);
				GLUE_SuspendGame__Fv();
				TSK_Sleep(1);
			}
			if (options_pad == -1) {
				options_pad = myplr;
			}
			qtextptr = (char *)0x0;
			qtexty = 0xe6;
			pTVar1 = TSK_AddTask(0,DrawQTextTSK__FP4TASK,0x800,0x10);
			piVar2 = (int *)pTVar1->fActive;
			*piVar2 = options_pad;
			piVar2[1] = m;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQTextBack__Fv()
 // line 397, offset 0x8004decc
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x8004DECC

		/* begin block 1.1 */
			// Start line: 398
			// Start offset: 0x8004DECC

			/* begin block 1.1.1 */
				// Start line: 408
				// Start offset: 0x8004DF34

				/* begin block 1.1.1.1 */
					// Start line: 408
					// Start offset: 0x8004DF34

					/* begin block 1.1.1.1.1 */
						// Start line: 411
						// Start offset: 0x8004DF6C
						// Variables:
					// 		char BookName[80]; // stack offset -104
					// 		struct RECT ClipRect; // stack offset -24
					// 		int oldot; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004E050
					// End Line: 426
				/* end block 1.1.1.1 */
				// End offset: 0x8004E050
				// End Line: 426
			/* end block 1.1.1 */
			// End offset: 0x8004E050
			// End Line: 426
		/* end block 1.1 */
		// End offset: 0x8004E050
		// End Line: 426
	/* end block 1 */
	// End offset: 0x8004E050
	// End Line: 426

	/* begin block 2 */
		// Start line: 845
	/* end block 2 */
	// End Line: 846

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQTextBack__Fv(void)

{
	int OT;
	char *__src;
	int Y;
	char acStack104 [80];
	RECT local_18;
	
	SetBorder__6Dialogi(&QBack,0x1a);
	SetRGB__6DialogUcUcUc(&QBack,BORDERR,BORDERG,BORDERB);
	if (((stextflag == '\0') || (OT = 0xcd, qtextflag != '\0')) && (OT = 0xbd, FeFlag != '\0')) {
		__src = GetStr__Fi(iBookName);
		strcpy(acStack104,__src);
		local_18.x = 0x14;
		local_18.w = 0x118;
		local_18.h = 0xb9;
		local_18.y = 0;
		Back__6Dialogiiii(&QBack,0x14,0x40,0x118,0x91);
		OT = SetOTpos__5CFonti(&LargeFont,0x80);
		Y = GetStrWidth__5CFontPc(&LargeFont,acStack104);
		if (Y < 0x118) {
			Y = 0x32;
		}
		else {
			Y = 0x28;
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&LargeFont,0,Y,acStack104,JustCentre,&local_18,(uint)BLUER,(uint)BLUEG,(uint)BLUEB);
		SetOTpos__5CFonti(&LargeFont,OT);
	}
	else {
		Back__6Dialogiiii(&QBack,0x14,0x14,0x118,OT);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQTextTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 439, offset 0x8004e068
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x8004E068
		// Variables:
	// 		struct DEF_ARGS *args; // $s0
	// 		int pnum; // $s1
	// 		char Name[14]; // stack offset -32
	// 		char stextflagsave; // $s2
	/* end block 1 */
	// End offset: 0x8004E334
	// End Line: 546

	/* begin block 2 */
		// Start line: 938
	/* end block 2 */
	// End Line: 939

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQTextTSK__FP4TASK(TASK *T)

{
	char cVar1;
	ushort uVar2;
	undefined *puVar3;
	CPad *this;
	int *piVar4;
	int PadNum;
	char acStack32 [16];
	
	cVar1 = stextflag;
	piVar4 = (int *)T->fActive;
	PadNum = *piVar4;
	GLUE_SuspendGame__Fv();
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	qtextptr = GetStr__Fi(alltext[piVar4[1]].txtstr);
	while (puVar3 = (undefined *)IsKanjiLoaded__Fv(), puVar3 != &DAT_00000001) {
		TSK_Sleep(1);
	}
	sprintf(acStack32,(char *)PTR_ARRAY_8011b94c,alltext[piVar4[1]].sfxnr);
	CalcTextSpeed__FPCc(acStack32);
	stextflag = '\0';
	qtextonflag = (void *)(uint)(qtextflag != '\0');
	sgLastScroll = VID_GetTick__Fv();
	do {
		if ((undefined *)qtextonflag == (undefined *)0x0) {
			CDWAIT = &DAT_00000001;
			PauseMode = '\x01';
			qtextonflag = (void *)0x0;
			ignore_buttons = &DAT_00000001;
			PlaySFX__Fi(IS_TITLSLCT);
			stream_stop__Fv();
			while (SFXHDR_800b9c64.used != '\0') {
				TSK_Sleep(1);
			}
			if (FadeState == '\0') {
				TSK_AddTask(0,FadeMusicTSK__FP4TASK,0x800,0);
			}
			FadeState = '\x02';
			if (cVar1 == '\0') {
				options_pad = -1;
			}
			PadNum = (uint)Qfromoptions - 1;
			stextflag = cVar1;
			if (Qfromoptions == '\0') {
				stextflag = cVar1;
				if ((cVar1 == '\0') && (stextflag = cVar1, questlog == '\0')) {
					stextflag = cVar1;
					PostGamePad__Fiiii(5,0,0,0);
					GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
					GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
				}
				ignore_buttons = &DAT_00000001;
				PadNum = options_pad;
			}
			options_pad = PadNum;
			LANG_ReloadMainTXT__Fv();
			return;
		}
		do {
			DrawQText__Fv();
			TSK_Sleep(1);
			if (FeFlag == '\0') {
				this = PAD_GetPad__FiUc(PadNum,'\0');
				uVar2 = GetDown__C4CPad(this);
				if ((uVar2 & 0x100) != 0) {
					ignore_buttons = &DAT_00000001;
					goto LAB_8004e1d0;
				}
			}
			else {
				this = PAD_GetPad__FiUc(0,'\x01');
				uVar2 = GetDown__C4CPad(this);
				if ((uVar2 & 0x100) != 0) {
LAB_8004e1d0:
					qtextonflag = (void *)0x0;
				}
			}
		} while (qtextonflag != (void *)0x0);
		if (CDWAIT != (void *)0x0) {
			qtextonflag = &DAT_00000001;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ KANJI_strlen__FPc(char *str /*$a0*/)
 // line 564, offset 0x8004e350
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x8004E350
		// Variables:
	// 		int l; // $a1
	/* end block 1 */
	// End offset: 0x8004E384
	// End Line: 576

	/* begin block 2 */
		// Start line: 1196
	/* end block 2 */
	// End Line: 1197

/* WARNING: Unknown calling convention yet parameter storage is locked */

int KANJI_strlen__FPc(char *str)

{
	int iVar1;
	
	iVar1 = 0;
	while (*str != 0) {
		if ((*str & 0x80U) != 0) {
			str = (char *)((byte *)str + 1);
		}
		str = (char *)((byte *)str + 1);
		iVar1 = iVar1 + 1;
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQText__Fv()
 // line 587, offset 0x8004e390
	/* begin block 1 */
		// Start line: 588
		// Start offset: 0x8004E390
		// Variables:
	// 		char *p; // $s1
	// 		char *pnl; // $fp
	// 		char *SpacePtr; // $s5
	// 		int ty; // $s6
	// 		int l; // $s2
	// 		unsigned char doneflag; // $s7
	// 		struct RECT ClipRect; // stack offset -64
	// 		unsigned long currTime; // $a0
	// 		int LetterCount; // $s3
	// 		int KanjiCount; // $s4
	// 		char *t; // $s0
	// 		int textot; // $s0
	// 		int OldDOt; // $s0
	// 		int OldOt; // stack offset -56
	// 		int TextYSize; // $v1

		/* begin block 1.1 */
			// Start line: 634
			// Start offset: 0x8004E490
		/* end block 1.1 */
		// End offset: 0x8004E608
		// End Line: 723

		/* begin block 1.2 */
			// Start line: 729
			// Start offset: 0x8004E610

			/* begin block 1.2.1 */
				// Start line: 730
				// Start offset: 0x8004E624

				/* begin block 1.2.1.1 */
					// Start line: 732
					// Start offset: 0x8004E624

					/* begin block 1.2.1.1.1 */
						// Start line: 733
						// Start offset: 0x8004E650
						// Variables:
					// 		int diff; // $v1
					/* end block 1.2.1.1.1 */
					// End offset: 0x8004E6B0
					// End Line: 741
				/* end block 1.2.1.1 */
				// End offset: 0x8004E6B0
				// End Line: 741

				/* begin block 1.2.1.2 */
					// Start line: 745
					// Start offset: 0x8004E6B0

					/* begin block 1.2.1.2.1 */
						// Start line: 746
						// Start offset: 0x8004E6C4
						// Variables:
					// 		int diff; // $v1
					/* end block 1.2.1.2.1 */
					// End offset: 0x8004E734
					// End Line: 756

					/* begin block 1.2.1.2.2 */
						// Start line: 760
						// Start offset: 0x8004E740

						/* begin block 1.2.1.2.2.1 */
							// Start line: 761
							// Start offset: 0x8004E740

							/* begin block 1.2.1.2.2.1.1 */
								// Start line: 762
								// Start offset: 0x8004E750
								// Variables:
							// 		int diff; // $v1
							/* end block 1.2.1.2.2.1.1 */
							// End offset: 0x8004E770
							// End Line: 766
						/* end block 1.2.1.2.2.1 */
						// End offset: 0x8004E770
						// End Line: 766
					/* end block 1.2.1.2.2 */
					// End offset: 0x8004E770
					// End Line: 766
				/* end block 1.2.1.2 */
				// End offset: 0x8004E770
				// End Line: 766
			/* end block 1.2.1 */
			// End offset: 0x8004E770
			// End Line: 766
		/* end block 1.2 */
		// End offset: 0x8004E7B4
		// End Line: 777
	/* end block 1 */
	// End offset: 0x8004E908
	// End Line: 812

	/* begin block 2 */
		// Start line: 1242
	/* end block 2 */
	// End Line: 1243

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQText__Fv(void)

{
	bool bVar1;
	uchar ch;
	int OT;
	int OT_00;
	int iVar2;
	ulong uVar3;
	char *__src;
	undefined *StrId;
	uchar *puVar4;
	uchar *puVar5;
	int iVar6;
	int iVar7;
	uchar *puVar8;
	uchar *puVar9;
	RECT local_40;
	int local_38;
	
	memset(&tempstr,0,0x100);
	if (FeFlag == '\0') {
		local_40.y = 0x18;
		local_40.h = 0xb9;
	}
	else {
		local_40.y = 0x40;
		local_40.h = 0x91;
	}
	local_40.w = 0x118;
	local_40.x = 0x14;
	OT = GetOverlayOtBase__7CBlocks();
	OT_00 = SetOTpos__6Dialogi(&QBack,OT + -1);
	local_38 = SetOTpos__5CFonti(&MediumFont,OT);
	DrawQTextBack__Fv();
	SetOTpos__6Dialogi(&QBack,OT_00);
	if (qtextptr == (char *)0x0) {
		return;
	}
	StrId = (undefined *)BL_AsyncLoadDone__Fv();
	puVar9 = (uchar *)0x0;
	if (StrId != &DAT_00000001) {
		return;
	}
	bVar1 = false;
	puVar5 = (uchar *)qtextptr;
	OT = qtexty;
	while (OT_00 = 0, !bVar1) {
		puVar8 = (uchar *)0x0;
		iVar6 = 0;
		iVar7 = 0;
		__src = &tempstr;
		do {
			ch = *puVar5;
			puVar4 = puVar5;
			if ((ch == '\n') || (puVar4 = puVar5, ch == '\0')) break;
			puVar4 = puVar5 + 1;
			*__src = ch;
			iVar2 = GetCharWidth__5CFontUc(&MediumFont,ch);
			OT_00 = OT_00 + iVar2;
			if ((int)*__src == 0x20) {
				iVar6 = 0;
				puVar8 = puVar5;
			}
			if (((int)*__src & 0x80U) == 0) {
				iVar6 = iVar6 + 1;
			}
			else {
				iVar7 = iVar7 + 2;
				__src = (char *)((uchar *)__src + 1);
				ch = *puVar4;
				puVar4 = puVar5 + 2;
				*__src = ch;
			}
			__src = (char *)((uchar *)__src + 1);
			puVar5 = puVar4;
		} while (OT_00 < 0x118);
		puVar5 = puVar4;
		if ((0x117 < OT_00) && (puVar5 = puVar4, puVar8 != (uchar *)0x0)) {
			__src = (char *)((uchar *)__src + (-iVar7 - iVar6));
			puVar5 = puVar8;
		}
		ch = *puVar5;
		if (ch == '\n') {
			puVar5 = puVar5 + 1;
			ch = *puVar5;
		}
		if (ch == '\0') {
			bVar1 = true;
		}
		*__src = '\0';
		KANJI_strlen__FPc(&tempstr);
		if (FeFlag == '\0') {
			OT_00 = OT + -0x1e;
		}
		else {
			OT_00 = OT + -0x46;
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0x10,OT_00,&tempstr,JustLeft,&local_40,(uint)BORDERR,(uint)BORDERG,
							 (uint)BORDERB);
		if (puVar9 == (uchar *)0x0) {
			puVar9 = puVar5;
		}
		OT = OT + 0xf;
		if (0xe6 < OT) {
			bVar1 = true;
		}
	}
	if (FileSYS == 2) {
		if (sghStream == (SFXHDR *)0x0) {
			if (TextWait < qtexty) {
				sgLastScroll = VID_GetTick__Fv();
				scrolltexty = scrolltexty - 0x10000;
				qtexty = scrolltexty >> 0x10;
				if (qtexty <= TextWait) {
					PlaySFX__Fi(alltext[TextNum].sfxnr);
				}
			}
			if (sghStream == (SFXHDR *)0x0) {
				if (qtbodge == (void *)0x0) goto LAB_8004e7b4;
				uVar3 = VID_GetTick__Fv();
				OT = uVar3 - sgLastScroll;
				if (OT < 0) {
					OT = -OT;
				}
				OT = OT * qtextSpd;
				goto LAB_8004e798;
			}
		}
		uVar3 = VID_GetTick__Fv();
		OT = uVar3 - sgLastScroll;
		if (OT < 0) {
			OT = -OT;
		}
		scrolltexty = scrolltexty - qtextSpd * OT;
		qtexty = scrolltexty >> 0x10;
		sgLastScroll = uVar3;
		if ((sghStream->playing != '\0') && (sgLastScroll = uVar3, sghStream->stream_stall == 0)) {
			qtbodge = &DAT_00000001;
			sgLastScroll = uVar3;
		}
	}
	else {
		uVar3 = VID_GetTick__Fv();
		OT = qtextSpd * (uVar3 - sgLastScroll);
LAB_8004e798:
		scrolltexty = scrolltexty - OT;
		qtexty = scrolltexty >> 0x10;
		sgLastScroll = uVar3;
	}
LAB_8004e7b4:
	OT = 0xf;
	if (FeFlag != '\0') {
		OT = 0x3c;
	}
	if (qtexty <= OT) {
		scrolltexty = scrolltexty + 0xf0000;
		qtexty = scrolltexty >> 0x10;
		if (puVar9[-1] == '\0') {
			qtextonflag = (void *)0x0;
		}
		if (*puVar9 == '\0') {
			qtextonflag = (void *)0x0;
		}
		if (puVar9[1] == '\0') {
			qtextonflag = (void *)0x0;
		}
		qtextptr = (char *)puVar9;
		if ((sghStream != (SFXHDR *)0x0) && (qtextptr = (char *)puVar9, qtextonflag == (void *)0x0)) {
			qtextonflag = &DAT_00000001;
			qtextptr = (char *)puVar9;
		}
	}
	StrId = &DAT_000010c1;
	if (FeFlag != '\0') {
		StrId = (undefined *)0x2000;
	}
	__src = GetStr__Fi((int)StrId);
	strcpy(MtPrevText,__src);
	OT = GetStrWidth__5CFontPc(&MediumFont,MtPrevText);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,((int)((0x100U - OT) + (0x100U - OT >> 0x1f)) >> 1) + 0x20,0xe0,MtPrevText,
						 JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEB);
	SetOTpos__5CFonti(&MediumFont,local_38);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.QBack()
 // line 817, offset 0x8004e93c
	/* begin block 1 */
		// Start line: 818
		// Start offset: 0x8004E93C
	/* end block 1 */
	// End offset: 0x8004E954
	// End Line: 818

	/* begin block 2 */
		// Start line: 1736
	/* end block 2 */
	// End Line: 1737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_QBack(void)

{
	___6Dialog(&QBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.QBack()
 // line 817, offset 0x8004e964
	/* begin block 1 */
		// Start line: 818
		// Start offset: 0x8004E964
	/* end block 1 */
	// End offset: 0x8004E97C
	// End Line: 818

	/* begin block 2 */
		// Start line: 1736
	/* end block 2 */
	// End Line: 1737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_QBack(void)

{
	__6Dialog(&QBack);
	return;
}





