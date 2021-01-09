#include "THISDUST.H"
#include "DLG.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetFileNumber__FiPc(int side /*$a0*/, char *file_name /*$s4*/)
 // line 188, offset 0x80159590
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x80159590
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8015962C
	// End Line: 203

	/* begin block 2 */
		// Start line: 376
	/* end block 2 */
	// End Line: 377

int GetFileNumber__FiPc(int side,char *file_name)

{
	int iVar1;
	int iVar2;
	DIRENTRY *pDVar3;
	
	if ((&card_usable)[side] != 0) {
		iVar2 = 0;
		if (0 < (&card_files)[side]) {
			pDVar3 = card_dir;
			do {
				iVar1 = strcmp((char *)(pDVar3 + side * 0x10),file_name);
				if (iVar1 == 0) {
					return iVar2;
				}
				iVar2 = iVar2 + 1;
				pDVar3 = pDVar3 + 1;
			} while (iVar2 < (&card_files)[side]);
		}
	}
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoSaveOptions__Fv()
 // line 206, offset 0x80159650
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x80159650
	/* end block 1 */
	// End offset: 0x80159668
	// End Line: 208

	/* begin block 2 */
		// Start line: 416
	/* end block 2 */
	// End Line: 417

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DoSaveOptions__Fv(void)

{
	int iVar1;
	
	iVar1 = PSX_OPT_SaveGame__FiPc(current_card,DiabloOptionFile);
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoSaveGame__Fv()
 // line 214, offset 0x80159678
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x80159678
		// Variables:
	// 		char temp_name[32]; // stack offset -64
	// 		char (*Classes[3]); // stack offset -32
	/* end block 1 */
	// End offset: 0x801597D4
	// End Line: 253

	/* begin block 2 */
		// Start line: 450
	/* end block 2 */
	// End Line: 451

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DoSaveGame__Fv(void)

{
	char *pcVar1;
	char *pcVar2;
	char *pcVar3;
	char *pcVar4;
	int iVar5;
	char acStack64 [32];
	undefined *local_20 [4];
	
	local_20[0] = PTR_PTR_DAT_801436a0;
	local_20[1] = PTR_PTR_DAT_801436a4;
	local_20[2] = PTR_PTR_DAT_801436a8;
	if (FePlayerNo == 0) {
		pcVar1 = GetDiabloStr__Fv();
		pcVar2 = GetStr__Fi(0x292);
		pcVar3 = GetStr__Fi(0x290);
		sprintf(acStack64,"%s-1%s %s%2d %s %s",pcVar1,pcVar2,pcVar3,(int)plr[0]._pLevel,
						local_20[(int)plr[0]._pClass],0x800da60e);
	}
	else {
		pcVar1 = GetDiabloStr__Fv();
		pcVar2 = GetStr__Fi(0x292);
		pcVar3 = GetStr__Fi(0x290);
		pcVar4 = GetStr__Fi(0x290);
		sprintf(acStack64,"%s-2%s %s%2d %s-%s%2d %s",pcVar1,pcVar2,pcVar3,(int)plr[0]._pLevel,
						local_20[(int)plr[0]._pClass],pcVar4,(int)plr[1]._pLevel,local_20[(int)plr[1]._pClass]);
	}
	iVar5 = PSX_GM_SaveGame__FiPcT1(current_card,DiabloGameFile,acStack64);
	return iVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoLoadGame__Fv()
 // line 258, offset 0x801597f0
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x801597F0

		/* begin block 1.1 */
			// Start line: 259
			// Start offset: 0x801597F0

			/* begin block 1.1.1 */
				// Start line: 263
				// Start offset: 0x80159814

				/* begin block 1.1.1.1 */
					// Start line: 264
					// Start offset: 0x80159814
					// Variables:
				// 		int result; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80159884
				// End Line: 279
			/* end block 1.1.1 */
			// End offset: 0x80159884
			// End Line: 279
		/* end block 1.1 */
		// End offset: 0x80159884
		// End Line: 279
	/* end block 1 */
	// End offset: 0x80159884
	// End Line: 279

	/* begin block 2 */
		// Start line: 541
	/* end block 2 */
	// End Line: 542

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoLoadGame__Fv(void)

{
	void *pvVar1;
	int file;
	
	DoLoadedGame = (void *)0x0;
	pvVar1 = GetLoadStatusMessage__FPc(DiabloGameFile);
	if (pvVar1 != (void *)0x0) {
		file = GetFileNumber__FiPc(current_card,DiabloGameFile);
		file = PSX_GM_LoadGame__FUcii('\x01',current_card,file);
		if (file == 0) {
			AlertTxt = 0;
			MemcardOFF__Fv();
			DoLoadedGame = &DAT_00000001;
			FeFlag = '\x02';
		}
		else {
			AlertTxt = 0x25d;
			if (file == -2) {
				AlertTxt = 0x25c;
			}
			DoLoadedGame = (void *)0x0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoFrontEndLoadCharacter__Fi(int slot /*$s1*/)
 // line 286, offset 0x80159894
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x80159894
		// Variables:
	// 		int result; // $s0

		/* begin block 1.1 */
			// Start line: 287
			// Start offset: 0x80159894
		/* end block 1.1 */
		// End offset: 0x801598C8
		// End Line: 293
	/* end block 1 */
	// End offset: 0x801598D4
	// End Line: 298

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

int DoFrontEndLoadCharacter__Fi(int slot)

{
	void *pvVar1;
	int iVar2;
	
	iVar2 = -1;
	pvVar1 = GetLoadStatusMessage__FPc(DiabloCharacterFile);
	if (pvVar1 != (void *)0x0) {
		PSX_CH_LoadGame__Fi(slot);
		iVar2 = 0;
	}
	MemcardOFF__Fv();
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ McInitLoadCard1Menu__Fv()
 // line 303, offset 0x801598ec
	/* begin block 1 */
		// Start line: 304
		// Start offset: 0x801598EC
	/* end block 1 */
	// End offset: 0x80159924
	// End Line: 314

	/* begin block 2 */
		// Start line: 637
	/* end block 2 */
	// End Line: 638

/* WARNING: Unknown calling convention yet parameter storage is locked */

void McInitLoadCard1Menu__Fv(void)

{
	if (LoadType == 1) {
		loadflag = 4;
	}
	else {
		DoLoadedChar = &DAT_00000001;
		FeFlag = '\x02';
	}
	current_card = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ McInitLoadCard2Menu__Fv()
 // line 318, offset 0x8015992c
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x8015992C
	/* end block 1 */
	// End offset: 0x80159964
	// End Line: 329

	/* begin block 2 */
		// Start line: 669
	/* end block 2 */
	// End Line: 670

/* WARNING: Unknown calling convention yet parameter storage is locked */

void McInitLoadCard2Menu__Fv(void)

{
	if (LoadType == 1) {
		loadflag = 4;
	}
	else {
		DoLoadedChar = &DAT_00000001;
		FeFlag = '\x02';
	}
	current_card = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChooseCardLoad__Fv()
 // line 333, offset 0x8015996c
	/* begin block 1 */
		// Start line: 334
		// Start offset: 0x8015996C
	/* end block 1 */
	// End offset: 0x801599F4
	// End Line: 341

	/* begin block 2 */
		// Start line: 698
	/* end block 2 */
	// End Line: 699

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChooseCardLoad__Fv(void)

{
	fileinfoflag = &DAT_00000001;
	FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(0,0,JustCentre,0x3b7,(FeTable *)0x0,&LargeFont);
	FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(0,0xc,JustCentre,0x288,&McLoadCard1Menu,&MediumFont);
	FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(0,0x30,JustCentre,0x289,&McLoadCard2Menu,&MediumFont);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ McInitLoadGameMenu__Fv()
 // line 344, offset 0x80159a08
	/* begin block 1 */
		// Start line: 345
		// Start offset: 0x80159A08
	/* end block 1 */
	// End offset: 0x80159A5C
	// End Line: 357

	/* begin block 2 */
		// Start line: 727
	/* end block 2 */
	// End Line: 728

/* WARNING: Unknown calling convention yet parameter storage is locked */

void McInitLoadGameMenu__Fv(void)

{
	FeBackX = 0x20;
	FeBackY = 0x40;
	FeBackW = 0x100;
	FeBackH = 0x70;
	fileinfoflag = (void *)0x0;
	loadflag = 0;
	LoadType = 1;
	ChooseCardLoad__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ McMainKeyCtrl__Fv()
 // line 366, offset 0x80159a6c
	/* begin block 1 */
		// Start line: 367
		// Start offset: 0x80159A6C
		// Variables:
	// 		struct RECT um; // stack offset -24
	/* end block 1 */
	// End offset: 0x80159CF8
	// End Line: 466

	/* begin block 2 */
		// Start line: 782
	/* end block 2 */
	// End Line: 783

/* WARNING: Unknown calling convention yet parameter storage is locked */

void McMainKeyCtrl__Fv(void)

{
	int iVar1;
	uint uVar2;
	
	if (0 < cardondelay) {
		cardondelay = cardondelay + -1;
		ShowLoadingBox__Fi(0x348);
		if (cardondelay != 0) {
			return;
		}
		ActivateMemcard__Fii(1,1);
	}
	iVar1 = loadflag + -1;
	if (loadflag == 0) {
		if (AlertTxt != 0) {
			ShowAlertBox__Fv();
			if ((DavesPad & 0x40U) == 0) {
				return;
			}
			PlaySFX__Fi(0x33);
			AlertTxt = 0;
			return;
		}
		ShowCardActionText__Fv();
		if (fileinfoflag != (void *)0x0) {
			ShowGameFiles__FPciiG4RECTi(DiabloGameFile,0,0x12,(RECT)0xc00a00140,(int)&DAT_0020fff8);
		}
		if ((DavesPad & 1U) != 0) {
			FeSelUp__Fi(1);
		}
		if ((DavesPad & 2U) != 0) {
			FeSelDown__Fi(1);
		}
		if ((DavesPad & 0x40U) != 0) {
			McMenuPos = FeGetCursor__Fv();
			McMenuPos = McMenuPos + -1;
			if ((&card_status)[McMenuPos] == 2) {
				AlertTxt = card_side_empty[McMenuPos];
code_r0x80159cbc:
				PlaySFX__Fi(0x3d3);
				return;
			}
			if ((&card_usable)[McMenuPos] == 0) {
				AlertTxt = 0x509;
				PlaySFX__Fi(0x3d3);
				return;
			}
			iVar1 = GetFileNumber__FiPc(McMenuPos,DiabloGameFile);
			if (iVar1 == -1) {
				AlertTxt = card_side_nogame[McMenuPos];
				goto code_r0x80159cbc;
			}
			FeSelect__Fv();
		}
		uVar2 = (uint)(ushort)DavesPad & 0x100;
	}
	else {
		if (iVar1 != 0) {
			loadflag = iVar1;
			ShowLoadingBox__Fi((&card_side_load)[current_card]);
			return;
		}
		loadflag = iVar1;
		DoLoadGame__Fv();
		uVar2 = AlertTxt;
	}
	if (uVar2 != 0) {
		FePrevMenu__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ McCharCardMenuCtrl__Fv()
 // line 490, offset 0x80159d08
	/* begin block 1 */
		// Start line: 491
		// Start offset: 0x80159D08
		// Variables:
	// 		struct CPad *P; // $s0
	/* end block 1 */
	// End offset: 0x80159F38
	// End Line: 547

	/* begin block 2 */
		// Start line: 1049
	/* end block 2 */
	// End Line: 1050

/* WARNING: Unknown calling convention yet parameter storage is locked */

void McCharCardMenuCtrl__Fv(void)

{
	bool bVar1;
	ushort uVar2;
	CPad *this;
	int iVar3;
	
	this = PAD_GetPad__FiUc(FePlayerNo,'\0');
	if (0 < cardondelay) {
		cardondelay = cardondelay + -1;
		ShowLoadingBox__Fi(0x348);
		if (cardondelay != 0) {
			return;
		}
		ActivateMemcard__Fii(1,1);
	}
	if (AlertTxt == 0) {
		bVar1 = false;
		ShowCardActionText__Fv();
		SetPadTick__4CPadUs(this,0xc);
		SetPadTickMask__4CPadUs(this,3);
		uVar2 = GetDown__C4CPad(this);
		if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(this), (uVar2 & 0x10) != 0)) {
			bVar1 = true;
		}
		if (bVar1) {
			iVar3 = FeGetCursor__Fv();
			if (*(int *)(&DAT_8011b3d8 + iVar3 * 4) == 2) {
				PlaySFX__Fi(0x3d3);
				iVar3 = FeGetCursor__Fv();
				AlertTxt = (int)(&DoLoadedGame)[iVar3];
			}
			else {
				iVar3 = FeGetCursor__Fv();
				if ((&INT_8011b3e0)[iVar3] == 0) {
					PlaySFX__Fi(0x3d3);
					AlertTxt = 0x509;
				}
				else {
					countdownloadcharblock = 1;
					cardondelay = 5;
					FeSelect__Fv();
				}
			}
		}
		else {
			uVar2 = GetTick__C4CPad(this);
			if ((uVar2 & 1) == 0) {
				uVar2 = GetTick__C4CPad(this);
				if ((uVar2 & 2) == 0) {
					uVar2 = GetDown__C4CPad(this);
					if ((uVar2 & 0x100) != 0) {
						FePrevMenu__Fv();
					}
				}
				else {
					FeSelDown__Fi(1);
				}
			}
			else {
				FeSelUp__Fi(1);
			}
		}
	}
	else {
		bVar1 = false;
		ShowAlertBox__Fv();
		uVar2 = GetDown__C4CPad(this);
		if (((uVar2 & 0x40) != 0) || (uVar2 = GetDown__C4CPad(this), (uVar2 & 0x10) != 0)) {
			bVar1 = true;
		}
		if (bVar1) {
			PlaySFX__Fi(0x33);
			AlertTxt = 0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ McMainCharKeyCtrl__Fv()
 // line 550, offset 0x80159f50
	/* begin block 1 */
		// Start line: 551
		// Start offset: 0x80159F50
		// Variables:
	// 		int Spacing; // $s3
	// 		int yoff; // $s1
	// 		int SelX; // $s0
	// 		int len; // $s1
	// 		struct RECT um; // stack offset -48
	// 		struct CPad *P; // $s2
	/* end block 1 */
	// End offset: 0x8015A39C
	// End Line: 701

	/* begin block 2 */
		// Start line: 1170
	/* end block 2 */
	// End Line: 1171

/* WARNING: Unknown calling convention yet parameter storage is locked */

void McMainCharKeyCtrl__Fv(void)

{
	int iVar1;
	bool bVar2;
	int iVar3;
	ushort uVar4;
	CPad *this;
	uint uVar5;
	void *pvVar6;
	int iVar7;
	FeTable *Menu;
	undefined4 in_stack_ffffffcc;
	
	this = PAD_GetPad__FiUc(FePlayerNo,'\0');
	SetPadTick__4CPadUs(this,0xc);
	SetPadTickMask__4CPadUs(this,3);
	if (cardondelay < 1) {
		if (countdownloadcharblock != 0) {
			ActivateCharacterMemcard__Fii((uint)(current_card == 0),(uint)(current_card == 1));
		}
		if ((&card_status)[current_card] == 2) {
			AlertTxt = card_side_empty[current_card];
		}
		if (AlertTxt == 0) {
			ShowCardActionText__Fv();
			if ((fileinfoflag != (void *)0x0) && ((&card_status)[current_card] == 0)) {
				ShowCharacterFiles__FiiG4RECTi
									(fileselect,0x11,(RECT)CONCAT44(in_stack_ffffffcc,0x4a),0x200000);
				uVar5 = GetSpinnerWidth__Fi(fileselect);
				iVar1 = -((int)(uVar5 + (uVar5 >> 0x1f)) >> 1);
				DrawFeTwinkle__Fii(iVar1 + 0x92,fileselect * 0x11 + 0x4a);
				DrawFeTwinkle__Fii(iVar1 + uVar5 + 0xa6,fileselect * 0x11 + 0x4a);
			}
			uVar4 = GetTick__C4CPad(this);
			if ((uVar4 & 1) != 0) {
				fileselect = fileselect + -1;
				if (fileselect == -1) {
					fileselect = 5;
				}
				PlaySFX__Fi(0x32);
			}
			uVar4 = GetTick__C4CPad(this);
			if ((uVar4 & 2) != 0) {
				fileselect = fileselect + 1;
				if (5 < fileselect) {
					fileselect = 0;
				}
				PlaySFX__Fi(0x32);
			}
			bVar2 = false;
			uVar4 = GetDown__C4CPad(this);
			if (((uVar4 & 0x40) != 0) || (uVar4 = GetDown__C4CPad(this), (uVar4 & 0x10) != 0)) {
				bVar2 = true;
			}
			if (bVar2) {
				if ((((&card_status)[current_card] == 2) || (CharacterBlockLoaded == (void *)0x0)) ||
					 (*(char *)((int)CharDataStruct.CharSlots + fileselect * 0x4f8 + 0x478) == '\0')) {
					PlaySFX__Fi(0x3d3);
					return;
				}
				PlaySFX__Fi(0x33);
				pvVar6 = GetLoadStatusMessage__FPc(DiabloCharacterFile);
				if (pvVar6 != (void *)0x0) {
					iVar7 = DoFrontEndLoadCharacter__Fi(fileselect);
					iVar3 = FeNoOfPlayers;
					iVar1 = FePlayerNo;
					if (iVar7 == 0) {
						DoLoadedChar = &DAT_00000001;
						(&LoadedChar)[FePlayerNo] = (void *)0x1;
						if (iVar3 < 1) {
							Menu = &FeDifficultyMenu;
						}
						else {
							Menu = &FeNewP2ClassMenu;
							FeNoOfPlayers = iVar3 + -1;
							FePlayerNo = iVar1 + 1;
						}
						FeNewMenu__FP7FeTable(Menu);
					}
					else {
						AlertTxt = 0x25d;
					}
				}
			}
			uVar4 = GetDown__C4CPad(this);
			if ((uVar4 & 0x100) == 0) {
				return;
			}
			CharacterBlockLoaded = (void *)0x0;
		}
		else {
			ShowAlertBox__Fv();
			uVar4 = GetDown__C4CPad(this);
			if ((uVar4 & 0x40) == 0) {
				return;
			}
			AlertTxt = 0;
		}
		FePrevMenu__Fv();
	}
	else {
		cardondelay = cardondelay + -1;
		if (countdownloadcharblock == 0) {
			ShowLoadingBox__Fi(0x348);
		}
		else {
			ShowLoadingBox__Fi(card_side_read[current_card]);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowAlertBox__Fv()
 // line 706, offset 0x8015a3bc
	/* begin block 1 */
		// Start line: 707
		// Start offset: 0x8015A3BC
		// Variables:
	// 		struct Dialog SBack; // stack offset -88
	// 		struct RECT um; // stack offset -72
	// 		int W; // $s1
	// 		int H; // $fp
	// 		int X; // $v0
	// 		int Y; // $v0
	// 		int otpos; // $s0
	// 		int oldBot; // stack offset -64
	// 		int oldTot; // stack offset -56
	// 		int lines; // $s2
	// 		int yprintpos; // $s0
	/* end block 1 */
	// End offset: 0x8015A594
	// End Line: 746

	/* begin block 2 */
		// Start line: 1546
	/* end block 2 */
	// End Line: 1547

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShowAlertBox__Fv(void)

{
	int OT;
	char *__src;
	int iVar1;
	uint G;
	uint R;
	Dialog DStack88;
	RECT local_48;
	int local_40;
	int local_38;
	
	__6Dialog(&DStack88);
	local_48.x = 0x2e;
	local_48.y = 0x5b;
	local_48.w = 0xe4;
	local_48.h = 0x3a;
	OT = GetOverlayOtBase__7CBlocks();
	OT = OT + 8;
	local_40 = SetOTpos__6Dialogi(&DStack88,OT);
	local_38 = SetOTpos__5CFonti(&MediumFont,OT);
	SetOTpos__6Dialogi(&DStack88,OT);
	SetOTpos__5CFonti(&MediumFont,OT);
	SetBorder__6Dialogi(&DStack88,0x12);
	SetBack__6Dialogi(&DStack88,5);
	SetRGB__6DialogUcUcUc(&DStack88,'P','@','@');
	Back__6Dialogiiii(&DStack88,0x2e,0x5b,0xe4,0x3a);
	if (AlertTxt != 0x50c) {
		__src = GetStr__Fi(AlertTxt);
		strcpy(AlertStr,__src);
	}
	OT = GetStrWidth__5CFontPc(&MediumFont,AlertStr);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	iVar1 = OT / 0xe4 + 1;
	OT = (iVar1 * -0xc + 0x3a >> 1) + 3;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,OT,AlertStr,JustCentre,&local_48,R,G,G);
	__src = GetStr__Fi(0x330);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,OT + iVar1 * 0xd,__src,JustCentre,&local_48,R,G,G);
	SetOTpos__6Dialogi(&DStack88,local_40);
	SetOTpos__5CFonti(&MediumFont,local_38);
	___6Dialog(&DStack88,2);
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetLoadStatusMessage__FPc(char *file_name /*$a1*/)
 // line 751, offset 0x8015a5c8
	/* begin block 1 */
		// Start line: 752
		// Start offset: 0x8015A5C8
	/* end block 1 */
	// End offset: 0x8015A66C
	// End Line: 770

	/* begin block 2 */
		// Start line: 1646
	/* end block 2 */
	// End Line: 1647

void * GetLoadStatusMessage__FPc(char *file_name)

{
	int iVar1;
	
	if (((&card_status)[current_card] == 2) || ((&card_dirty)[current_card] != 0)) {
		iVar1 = card_side_empty[current_card];
	}
	else {
		iVar1 = 0x509;
		if ((&card_usable)[current_card] != 0) {
			iVar1 = GetFileNumber__FiPc(current_card,file_name);
			if (iVar1 != -1) {
				AlertTxt = 0;
				return &DAT_00000001;
			}
			iVar1 = 0x2be;
		}
	}
	AlertTxt = iVar1;
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetSaveStatusMessage__FiPc(int fileblocks /*$s1*/, char *file_name /*$a1*/)
 // line 773, offset 0x8015a67c
	/* begin block 1 */
		// Start line: 774
		// Start offset: 0x8015A67C
		// Variables:
	// 		int i; // $a0
	// 		int blocks; // $a3
	/* end block 1 */
	// End offset: 0x8015A784
	// End Line: 805

	/* begin block 2 */
		// Start line: 1696
	/* end block 2 */
	// End Line: 1697

void * GetSaveStatusMessage__FiPc(int fileblocks,char *file_name)

{
	undefined *puVar1;
	char *__format;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	if ((&card_status)[current_card] == 2) {
		AlertTxt = card_side_empty[current_card];
		puVar1 = (undefined *)0x0;
	}
	else {
		puVar1 = &DAT_00000001;
		if ((&card_usable)[current_card] != 0) {
			iVar3 = 0;
			if (0 < (&card_files)[current_card]) {
				iVar2 = current_card << 0xd;
				do {
					iVar3 = iVar3 + 1;
					iVar4 = iVar4 + (int)(&card_header[0].blockentry)[iVar2];
					iVar2 = iVar2 + 0x200;
				} while (iVar3 < (&card_files)[current_card]);
			}
			puVar1 = &DAT_00000001;
			if (0xf - iVar4 < fileblocks) {
				iVar3 = GetFileNumber__FiPc(current_card,file_name);
				if (iVar3 == -1) {
					AlertTxt = 0x50c;
					__format = GetStr__Fi(0x50c);
					sprintf(AlertStr,__format,fileblocks,0xf - iVar4);
					puVar1 = (undefined *)0x0;
				}
				else {
					puVar1 = &DAT_00000001;
				}
			}
		}
	}
	return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowGameFiles__FPciiG4RECTi(char *filename /*$s5*/, int saveflag /*$a1*/, int Spacing /*$s4*/, struct RECT ORect /*stack 12*/, int yoff /*stack 20*/)
 // line 808, offset 0x8015a79c
	/* begin block 1 */
		// Start line: 809
		// Start offset: 0x8015A79C

		/* begin block 1.1 */
			// Start line: 813
			// Start offset: 0x8015A7E4
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 813
				// Start offset: 0x8015A7F4
				// Variables:
			// 		int FileNo; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8015A880
			// End Line: 831
		/* end block 1.1 */
		// End offset: 0x8015A8E0
		// End Line: 832
	/* end block 1 */
	// End offset: 0x8015A8E0
	// End Line: 832

	/* begin block 2 */
		// Start line: 1772
	/* end block 2 */
	// End Line: 1773

void ShowGameFiles__FPciiG4RECTi(char *filename,int saveflag,int Spacing,RECT ORect,int yoff)

{
	bool bVar1;
	int file;
	char *Str;
	int StrId;
	int iVar2;
	int side;
	char **ppcVar3;
	int local_resc;
	
	if ((saveflag == 0) && (side = 0, StatusTxt == 0)) {
		ppcVar3 = McState2;
		iVar2 = 0;
		bVar1 = true;
		local_resc = yoff;
		while (bVar1) {
			file = GetFileNumber__FiPc(side,filename);
			StrId = 0x50d;
			if ((*(int *)((int)&card_status + iVar2) == 2) || (*(int *)((int)&card_dirty + iVar2) != 0)) {
LAB_8015a870:
				Str = GetStr__Fi(StrId);
			}
			else {
				if (file == -1) {
					StrId = 0x509;
					if (*(int *)((int)&card_usable + iVar2) != 0) {
						StrId = 300;
					}
					goto LAB_8015a870;
				}
				Str = ReconstructSlotName__Fii(side,file);
			}
			*(char **)((int)McState2 + iVar2) = Str;
			file = side * 2;
			Str = *ppcVar3;
			ppcVar3 = ppcVar3 + 1;
			iVar2 = iVar2 + 4;
			side = side + 1;
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,(file + 3) * Spacing + ORect._4_4_,Str,JustCentre,(RECT *)&local_resc
								 ,0xa4,0x70,0x70);
			bVar1 = side < 2;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowCharacterFiles__FiiG4RECTi(int cs /*stack -48*/, int Spacing /*$s5*/, struct RECT ORect /*stack 8*/, int yoff /*stack 16*/)
 // line 835, offset 0x8015a90c
	/* begin block 1 */
		// Start line: 836
		// Start offset: 0x8015A90C
		// Variables:
	// 		int sn; // $a0

		/* begin block 1.1 */
			// Start line: 850
			// Start offset: 0x8015A978
			// Variables:
		// 		int j; // $s3

			/* begin block 1.1.1 */
				// Start line: 852
				// Start offset: 0x8015A9F0
				// Variables:
			// 		int fileno; // $v1
			// 		int r; // $s2
			// 		int g; // $s1
			// 		int b; // $s0
			// 		char TempStr[64]; // stack offset -112
			/* end block 1.1.1 */
			// End offset: 0x8015AA70
			// End Line: 875
		/* end block 1.1 */
		// End offset: 0x8015AAB8
		// End Line: 884
	/* end block 1 */
	// End offset: 0x8015AAB8
	// End Line: 884

	/* begin block 2 */
		// Start line: 1827
	/* end block 2 */
	// End Line: 1828

void ShowCharacterFiles__FiiG4RECTi(int cs,int Spacing,RECT ORect,int yoff)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	char *Str;
	int StrId;
	uint B;
	uint G;
	uint R;
	int slot;
	char acStack112 [64];
	int local_30;
	
	if ((&card_status)[current_card] != 3) {
		StrId = 0x289;
		if (current_card == 0) {
			StrId = 0x288;
		}
		slot = 0;
		local_30 = cs;
		Str = GetStr__Fi(StrId);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,ORect._0_4_ - Spacing,Str,JustCentre,(RECT *)0x0,(uint)GOLDR,
							 (uint)GOLDG,(uint)GOLDB);
		bVar1 = WHITER >> 1;
		bVar2 = WHITEB >> 1;
		bVar3 = WHITEG >> 1;
		while (slot < 6) {
			StrId = GetFileNumber__FiPc(current_card,DiabloCharacterFile);
			if (slot == local_30) {
				B = (uint)GOLDB;
				G = (uint)GOLDG;
				R = (uint)GOLDR;
			}
			else {
				B = (uint)bVar2;
				G = (uint)bVar3;
				R = (uint)bVar1;
				if (StrId != -1) {
					B = (uint)WHITEB;
					G = (uint)WHITEG;
					R = (uint)WHITER;
				}
			}
			ConstructSlotName__FPci(acStack112,slot);
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,ORect._0_4_,acStack112,JustCentre,(RECT *)0x0,R,G,B);
			ORect._0_4_ = ORect._0_4_ + Spacing;
			slot = slot + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id /*$t3*/, struct ItemStruct *is /*$t2*/)
 // line 897, offset 0x8015aaec
	/* begin block 1 */
		// Start line: 898
		// Start offset: 0x8015AAEC
	/* end block 1 */
	// End offset: 0x8015AB90
	// End Line: 920

	/* begin block 2 */
		// Start line: 1963
	/* end block 2 */
	// End Line: 1964

void PackItem__FP12PkItemStructPC10ItemStruct(PkItemStruct *id,ItemStruct *is)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	uchar uVar4;
	char cVar5;
	ushort uVar6;
	ushort uVar7;
	short sVar8;
	short sVar9;
	
	if (is->_itype == -1) {
		id->idx = 0xffff;
	}
	else {
		uVar6 = is->IDidx;
		uVar7 = is->_iCreateInfo;
		cVar2 = is->_iMagical;
		sVar8 = is->_iMaxDur;
		uVar3 = is->_iCharges;
		uVar4 = is->_iMaxCharges;
		cVar1 = is->_PlrCreate;
		id->iSeed = is->_iSeed;
		cVar5 = is->_iIdentified;
		id->iCreateInfo = uVar7;
		sVar9 = is->_iDurability;
		id->idx = uVar6;
		id->bMDur = (uchar)sVar8;
		id->bCh = uVar3;
		id->bMCh = uVar4;
		id->dwBuff = (int)cVar1;
		id->bId = cVar5 + cVar2 * '\x02';
		id->bDur = (uchar)sVar9;
		if (uVar6 == 0) {
			id->wValue = (ushort)is->_ivalue;
		}
		else {
			id->wValue = (short)is->_iMaxDam | (ushort)(((uint)(byte)is->_iAC << 0x18) >> 0x10);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack /*$s5*/, int pnum /*$v1*/)
 // line 929, offset 0x8015ab98
	/* begin block 1 */
		// Start line: 930
		// Start offset: 0x8015AB98
		// Variables:
	// 		int i; // $s3
	// 		struct PkItemStruct *pki; // $s1
	// 		struct ItemStruct *pi; // $s0
	// 		struct PlayerStruct *pPlayer; // $s4
	/* end block 1 */
	// End offset: 0x8015AD84
	// End Line: 990

	/* begin block 2 */
		// Start line: 2049
	/* end block 2 */
	// End Line: 2050

void PackPlayer__FP14PkPlayerStructi(PkPlayerStruct *pPack,int pnum)

{
	uchar *puVar1;
	char *pcVar2;
	uchar uVar3;
	uchar uVar4;
	char cVar5;
	char cVar6;
	short sVar7;
	short sVar8;
	short sVar9;
	short sVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	PkPlayerStruct *pPVar13;
	int iVar14;
	long lVar15;
	long lVar16;
	long lVar17;
	long lVar18;
	long lVar19;
	ItemStruct *is;
	int iVar20;
	PkItemStruct *id;
	int iVar21;
	
	memset(pPack,0,0x4f8);
	uVar3 = plr[pnum].destParam1;
	uVar4 = plr[pnum].destParam2;
	iVar14 = plr[pnum].plrlevel;
	pPack->destAction = plr[pnum].destAction;
	pPack->destParam1 = uVar3;
	pPack->destParam2 = uVar4;
	pPack->plrlevel = (uchar)iVar14;
	strcpy(pPack->pName,plr[pnum]._pName);
	sVar7 = plr[pnum]._pBaseStr;
	sVar8 = plr[pnum]._pBaseMag;
	sVar9 = plr[pnum]._pBaseDex;
	sVar10 = plr[pnum]._pBaseVit;
	uVar3 = plr[pnum]._pLevel;
	iVar14 = plr[pnum]._pStatPts;
	cVar5 = plr[pnum].DeadLevel;
	lVar15 = plr[pnum]._pExperience;
	lVar16 = plr[pnum]._pHPBase;
	lVar17 = plr[pnum]._pMaxHPBase;
	lVar18 = plr[pnum]._pManaBase;
	lVar19 = plr[pnum]._pMaxManaBase;
	uVar11 = *(undefined4 *)&plr[pnum]._pMemSpells;
	uVar12 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
	iVar20 = plr[pnum]._pRSpell;
	cVar6 = plr[pnum]._pRSplType;
	iVar21 = 0;
	pPack->pClass = plr[pnum]._pClass;
	pPack->pBaseStr = (uchar)sVar7;
	pPack->pBaseMag = (uchar)sVar8;
	pPack->pBaseDex = (uchar)sVar9;
	pPack->pBaseVit = (uchar)sVar10;
	pPack->pLevel = uVar3;
	pPack->pStatPts = (uchar)iVar14;
	pPack->DeadLevel = cVar5;
	pPack->pExperience = lVar15;
	pPack->pHPBase = lVar16;
	pPack->pMaxHPBase = lVar17;
	pPack->pManaBase = lVar18;
	pPack->pMaxManaBase = lVar19;
	*(undefined4 *)&pPack->pMemSpells = uVar11;
	*(undefined4 *)((int)&pPack->pMemSpells + 4) = uVar12;
	pPack->pRSpell = iVar20;
	pPack->pRSplType = cVar6;
	pPVar13 = pPack;
	do {
		puVar1 = (uchar *)(plr[pnum]._pSplLvl + iVar21);
		iVar21 = iVar21 + 1;
		pPVar13->pSplLvl[0] = *puVar1;
		pPVar13 = (PkPlayerStruct *)((int)&pPack->SpdList[0].dwBuff + iVar21);
	} while (iVar21 < 0x25);
	id = pPack->InvBody;
	is = plr[pnum].InvBody;
	iVar14 = 6;
	do {
		PackItem__FP12PkItemStructPC10ItemStruct(id,is);
		id = id + 1;
		iVar14 = iVar14 + -1;
		is = is + 1;
	} while (iVar14 != -1);
	id = pPack->InvList;
	is = plr[pnum].InvList;
	iVar14 = 0x27;
	do {
		PackItem__FP12PkItemStructPC10ItemStruct(id,is);
		id = id + 1;
		iVar14 = iVar14 + -1;
		is = is + 1;
	} while (iVar14 != -1);
	iVar14 = 0;
	pPVar13 = pPack;
	do {
		pcVar2 = plr[pnum].InvGrid + iVar14;
		iVar14 = iVar14 + 1;
		pPVar13->InvGrid[0] = *pcVar2;
		pPVar13 = (PkPlayerStruct *)((int)&pPack->SpdList[0].dwBuff + iVar14);
	} while (iVar14 < 0x28);
	is = plr[pnum].SpdList;
	iVar14 = 7;
	pPack->_pNumInv = (uchar)plr[pnum]._pNumInv;
	do {
		PackItem__FP12PkItemStructPC10ItemStruct((PkItemStruct *)pPack,is);
		pPack = (PkPlayerStruct *)(pPack->SpdList + 1);
		iVar14 = iVar14 + -1;
		is = is + 1;
	} while (iVar14 != -1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is /*$s0*/, struct ItemStruct *id /*$s3*/)
 // line 996, offset 0x8015adac
	/* begin block 1 */
		// Start line: 997
		// Start offset: 0x8015ADAC
		// Variables:
	// 		char AC; // $v0
	/* end block 1 */
	// End offset: 0x8015AEC0
	// End Line: 1028

	/* begin block 2 */
		// Start line: 2243
	/* end block 2 */
	// End Line: 2244

void UnPackItem__FPC12PkItemStructP10ItemStruct(PkItemStruct *is,ItemStruct *id)

{
	ushort uVar1;
	ushort uVar2;
	ItemStruct *pIVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	uVar1 = is->idx;
	if (uVar1 == 0xffff) {
		id->_itype = -1;
	}
	else {
		uVar2 = is->wValue;
		RecreateItem__FiiUsiii(0x7f,(uint)uVar1,is->iCreateInfo,is->iSeed,(uint)uVar2,is->dwBuff);
		ItemStruct_800d52e8._iCharges = is->bCh;
		ItemStruct_800d52e8._iMaxCharges = is->bMCh;
		ItemStruct_800d52e8._iMagical = is->bId >> 1;
		ItemStruct_800d52e8._iIdentified = is->bId & 1;
		ItemStruct_800d52e8._iMaxDur = ZEXT12(is->bMDur);
		ItemStruct_800d52e8._iDurability = ZEXT12(is->bDur);
		if (uVar1 != 0) {
			ItemStruct_800d52e8._iAC = (char)(uVar2 >> 8);
			ItemStruct_800d52e8._iMaxDam = (char)uVar2;
		}
		pIVar3 = &ItemStruct_800d52e8;
		do {
			pIVar8 = id;
			pIVar7 = pIVar3;
			iVar4 = pIVar7->_iVMult1;
			iVar5 = pIVar7->_iVAdd2;
			iVar6 = pIVar7->_iVMult2;
			pIVar8->_iVAdd1 = pIVar7->_iVAdd1;
			pIVar8->_iVMult1 = iVar4;
			pIVar8->_iVAdd2 = iVar5;
			pIVar8->_iVMult2 = iVar6;
			pIVar3 = (ItemStruct *)&pIVar7->_iSeed;
			id = (ItemStruct *)&pIVar8->_iSeed;
		} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&ItemStruct_800d52e8._iSufPower);
		iVar4 = pIVar7->_ivalue;
		iVar5 = pIVar7->_iIvalue;
		((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = ItemStruct_800d52e8._96_4_;
		pIVar8->_ivalue = iVar4;
		pIVar8->_iIvalue = iVar5;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer /*$s1*/)
 // line 1035, offset 0x8015aee0
	/* begin block 1 */
		// Start line: 1036
		// Start offset: 0x8015AEE0
		// Variables:
	// 		int i; // $s2
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x8015AF98
	// End Line: 1050

	/* begin block 2 */
		// Start line: 2333
	/* end block 2 */
	// End Line: 2334

void VerifyGoldSeeds__FP12PlayerStruct(PlayerStruct *pPlayer)

{
	long lVar1;
	int iVar2;
	PlayerStruct *pPVar3;
	int iVar4;
	int iVar5;
	PlayerStruct *pPVar6;
	
	iVar2 = pPlayer->_pNumInv;
	iVar5 = 0;
	pPVar6 = pPlayer;
	if (0 < iVar2) {
		do {
			if ((pPVar6->InvList[0].IDidx == 0) && (iVar4 = 0, pPVar3 = pPlayer, 0 < iVar2)) {
				do {
					if ((iVar5 != iVar4) &&
						 ((pPVar3->InvList[0].IDidx == 0 &&
							(pPVar6->InvList[0]._iSeed == pPVar3->InvList[0]._iSeed)))) {
						lVar1 = GetRndSeed__Fv();
						pPVar6->InvList[0]._iSeed = lVar1;
						pPVar3 = (PlayerStruct *)&pPlayer->InvList[0x1d]._iLoc;
						iVar4 = -1;
					}
					iVar4 = iVar4 + 1;
					pPVar3 = (PlayerStruct *)&pPVar3->_pSBkSpell;
				} while (iVar4 < pPlayer->_pNumInv);
			}
			iVar2 = pPlayer->_pNumInv;
			iVar5 = iVar5 + 1;
			pPVar6 = (PlayerStruct *)&pPVar6->_pSBkSpell;
		} while (iVar5 < iVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack /*$s4*/, int pnum /*$s5*/, unsigned char killok /*$s0*/)
 // line 1057, offset 0x8015afb8
	/* begin block 1 */
		// Start line: 1058
		// Start offset: 0x8015AFB8
		// Variables:
	// 		struct ItemStruct *pi; // $s1
	// 		struct PkItemStruct *pki; // $s2
	// 		struct PlayerStruct *pPlayer; // $s3
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8015B258
	// End Line: 1143

	/* begin block 2 */
		// Start line: 2377
	/* end block 2 */
	// End Line: 2378

void UnPackPlayer__FPC14PkPlayerStructiUc(PkPlayerStruct *pPack,int pnum,uchar killok)

{
	uchar *puVar1;
	char *pcVar2;
	char cVar3;
	byte bVar4;
	byte bVar5;
	byte bVar6;
	byte bVar7;
	char cVar8;
	byte bVar9;
	undefined4 uVar10;
	long lVar11;
	undefined4 uVar12;
	PlayerStruct *pPVar13;
	int iVar14;
	long lVar15;
	int iVar16;
	ItemStruct *id;
	PkItemStruct *is;
	PlayerStruct *pPlayer;
	
	pPlayer = plr + pnum;
	plr[pnum].plrlevel = (uint)pPack->plrlevel;
	ClrPlrPath__Fi(pnum);
	plr[pnum].destAction = -1;
	strcpy(plr[pnum]._pName,pPack->pName);
	plr[pnum]._pClass = pPack->pClass;
	InitPlayer__FiUc(pnum,'\x01');
	bVar4 = pPack->pBaseMag;
	bVar5 = pPack->pBaseDex;
	bVar6 = pPack->pBaseVit;
	bVar7 = pPack->pStatPts;
	cVar8 = pPack->DeadLevel;
	lVar15 = pPack->pExperience;
	plr[pnum]._pLevel = pPack->pLevel;
	bVar9 = pPack->pBaseStr;
	cVar3 = plr[pnum]._pLevel;
	plr[pnum]._pBaseMag = (ushort)bVar4;
	plr[pnum]._pMagic = (ushort)bVar4;
	iVar14 = pPack->pHPBase;
	plr[pnum]._pBaseDex = (ushort)bVar5;
	plr[pnum]._pDexterity = (ushort)bVar5;
	plr[pnum]._pBaseVit = (ushort)bVar6;
	plr[pnum]._pVitality = (ushort)bVar6;
	plr[pnum]._pStatPts = (uint)bVar7;
	plr[pnum].DeadLevel = cVar8;
	plr[pnum]._pExperience = lVar15;
	plr[pnum]._pBaseStr = (ushort)bVar9;
	plr[pnum]._pStrength = (ushort)bVar9;
	lVar15 = pPack->pMaxHPBase;
	lVar11 = (&ExpLvlsTbl)[(int)cVar3];
	plr[pnum]._pHPBase = iVar14;
	plr[pnum]._pMaxHPBase = lVar15;
	plr[pnum]._pNextExper = lVar11;
	if ((killok == '\0') && (iVar14 >> 6 < 1)) {
		plr[pnum]._pHPBase = 0x40;
	}
	lVar15 = pPack->pManaBase;
	uVar10 = *(undefined4 *)&pPack->pMemSpells;
	uVar12 = *(undefined4 *)((int)&pPack->pMemSpells + 4);
	iVar14 = pPack->pRSpell;
	cVar3 = pPack->pRSplType;
	iVar16 = 0;
	plr[pnum]._pMaxManaBase = pPack->pMaxManaBase;
	plr[pnum]._pManaBase = lVar15;
	*(undefined4 *)&plr[pnum]._pMemSpells = uVar10;
	*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar12;
	plr[pnum]._pRSpell = iVar14;
	plr[pnum]._pRSplType = cVar3;
	pPVar13 = pPlayer;
	do {
		puVar1 = pPack->pSplLvl + iVar16;
		iVar16 = iVar16 + 1;
		pPVar13->_pSplLvl[0] = *puVar1;
		pPVar13 = (PlayerStruct *)((int)&pPlayer->_pmode + iVar16);
	} while (iVar16 < 0x25);
	is = pPack->InvBody;
	id = plr[pnum].InvBody;
	iVar14 = 6;
	do {
		UnPackItem__FPC12PkItemStructP10ItemStruct(is,id);
		is = is + 1;
		iVar14 = iVar14 + -1;
		id = id + 1;
	} while (iVar14 != -1);
	is = pPack->InvList;
	id = plr[pnum].InvList;
	iVar14 = 0x27;
	do {
		UnPackItem__FPC12PkItemStructP10ItemStruct(is,id);
		is = is + 1;
		iVar14 = iVar14 + -1;
		id = id + 1;
	} while (iVar14 != -1);
	iVar14 = 0;
	pPVar13 = pPlayer;
	do {
		pcVar2 = pPack->InvGrid + iVar14;
		iVar14 = iVar14 + 1;
		pPVar13->InvGrid[0] = *pcVar2;
		pPVar13 = (PlayerStruct *)((int)&pPlayer->_pmode + iVar14);
	} while (iVar14 < 0x28);
	id = plr[pnum].SpdList;
	iVar14 = 7;
	plr[pnum]._pNumInv = (uint)pPack->_pNumInv;
	VerifyGoldSeeds__FP12PlayerStruct(pPlayer);
	do {
		UnPackItem__FPC12PkItemStructP10ItemStruct((PkItemStruct *)pPack,id);
		pPack = (PkPlayerStruct *)(pPack->SpdList + 1);
		iVar14 = iVar14 + -1;
		id = id + 1;
	} while (iVar14 != -1);
	if (pnum == myplr) {
		iVar16 = 0x13;
		iVar14 = StorePlrNo * 0x870 + 0x804;
		do {
			*(undefined2 *)((int)&_witchitem._itype + iVar14) = 0xffff;
			iVar16 = iVar16 + -1;
			iVar14 = iVar14 + -0x6c;
		} while (-1 < iVar16);
	}
	CalcPlrInv__FiUc(pnum,'\0');
	plr[pnum].pTownWarps = '\0';
	plr[pnum].pDungMsgs = '\0';
	plr[pnum].pLvlLoad = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ConstructSlotName__FPci(char *TempStr /*$s3*/, int slot /*$s2*/)
 // line 1148, offset 0x8015b284
	/* begin block 1 */
		// Start line: 1149
		// Start offset: 0x8015B284
	/* end block 1 */
	// End offset: 0x8015B35C
	// End Line: 1157

	/* begin block 2 */
		// Start line: 2679
	/* end block 2 */
	// End Line: 2680

void ConstructSlotName__FPci(char *TempStr,int slot)

{
	char *pcVar1;
	char *pcVar2;
	int iVar3;
	
	iVar3 = slot * 0x4f8;
	if (*(char *)((int)CharDataStruct.CharSlots + iVar3 + 0x478) == '\0') {
		pcVar1 = GetStr__Fi(300);
		sprintf(TempStr,"%d. %s",slot + 1,pcVar1);
	}
	else {
		pcVar1 = GetStr__Fi(0x245);
		pcVar2 = GetStr__Fi(ClassStrTbl[(uint)*(byte *)((int)CharDataStruct.CharSlots + iVar3 + 0x4e9)])
		;
		sprintf(TempStr,"%d. %s %s %d %s",slot + 1,iVar3 + -0x7fea8498,pcVar1,
						(uint)*(byte *)((int)CharDataStruct.CharSlots + iVar3 + 0x4ee),pcVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSpinnerWidth__Fi(int j /*$a1*/)
 // line 1159, offset 0x8015b37c
	/* begin block 1 */
		// Start line: 1160
		// Start offset: 0x8015B37C
		// Variables:
	// 		char TempStr[64]; // stack offset -72
	// 		int len; // $v0
	/* end block 1 */
	// End offset: 0x8015B410
	// End Line: 1177

	/* begin block 2 */
		// Start line: 2703
	/* end block 2 */
	// End Line: 2704

int GetSpinnerWidth__Fi(int j)

{
	int iVar1;
	char *Str;
	char acStack72 [64];
	
	if ((&card_status)[current_card] == 2) {
		iVar1 = 0x200;
	}
	else {
		if (*(char *)((int)CharDataStruct.CharSlots + j * 0x4f8 + 0x478) == '\0') {
			Str = GetStr__Fi(300);
		}
		else {
			ConstructSlotName__FPci(acStack72,j);
			Str = acStack72;
		}
		iVar1 = GetStrWidth__5CFontPc(&MediumFont,Str);
		iVar1 = iVar1 + 8;
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ ReconstructSlotName__Fii(int side /*$s5*/, int file /*$s6*/)
 // line 1190, offset 0x8015b420
	/* begin block 1 */
		// Start line: 1191
		// Start offset: 0x8015B420

		/* begin block 1.1 */
			// Start line: 1191
			// Start offset: 0x8015B420
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8015B468
		// End Line: 1195
	/* end block 1 */
	// End offset: 0x8015B7EC
	// End Line: 1295

	/* begin block 2 */
		// Start line: 2769
	/* end block 2 */
	// End Line: 2770

char * ReconstructSlotName__Fii(int side,int file)

{
	byte bVar1;
	char *__src;
	int StrId;
	
	StrId = 0x3f;
	__src = &CHAR_00h_8015950f;
	do {
		*__src = '\0';
		StrId = StrId + -1;
		__src = __src + -1;
	} while (-1 < StrId);
	if (card_header[side * 0x10 + file].title[6] != '1') {
		if (card_header[side * 0x10 + file].title[6] != '2') {
			__src = GetStr__Fi(0x291);
			strcpy(&TempStr,__src);
			goto LAB_8015b7e4;
		}
		TempStr = DAT_8011b450;
		s__801594d1[0] = DAT_8011b451;
		__src = GetStr__Fi(0x292);
		strcat(&TempStr,__src);
		strcat(&TempStr,&DAT_8011b444);
		__src = GetStr__Fi(0x290);
		strcat(&TempStr,__src);
		strncat(&TempStr,(char *)(card_header[file + side * 0x10].title + 10),2);
		strcat(&TempStr,&DAT_8011b444);
		bVar1 = card_header[side * 0x10 + file].title[0xd];
		if (bVar1 == 0x53) {
			__src = GetStr__Fi(1000);
		}
		else {
			if (bVar1 < 0x54) {
				if (bVar1 == 0x52) {
					__src = GetStr__Fi(0x375);
				}
				else {
LAB_8015b6cc:
					__src = "BUGGER!";
				}
			}
			else {
				if (bVar1 != 0x57) goto LAB_8015b6cc;
				__src = GetStr__Fi(0x4be);
			}
		}
		strcat(&TempStr,__src);
		strcat(&TempStr,&DAT_8011b454);
		__src = GetStr__Fi(0x290);
		strcat(&TempStr,__src);
		strncat(&TempStr,(char *)(card_header[file + side * 0x10].title + 0x12),2);
		strcat(&TempStr,&DAT_8011b444);
		bVar1 = card_header[side * 0x10 + file].title[0x15];
		if (bVar1 == 0x53) {
			StrId = 1000;
LAB_8015b790:
			__src = GetStr__Fi(StrId);
			strcat(&TempStr,__src);
		}
		else {
			if (bVar1 < 0x54) {
				StrId = 0x375;
				if (bVar1 == 0x52) goto LAB_8015b790;
			}
			else {
				StrId = 0x4be;
				if (bVar1 == 0x57) goto LAB_8015b790;
			}
			strcat(&TempStr,"BUGGER!");
		}
		goto LAB_8015b7e4;
	}
	TempStr = DAT_8011b440;
	s__801594d1[0] = DAT_8011b441;
	__src = GetStr__Fi(0x292);
	strcat(&TempStr,__src);
	strcat(&TempStr,&DAT_8011b444);
	__src = GetStr__Fi(0x290);
	strcat(&TempStr,__src);
	strncat(&TempStr,(char *)(card_header[file + side * 0x10].title + 10),2);
	strcat(&TempStr,&DAT_8011b444);
	bVar1 = card_header[side * 0x10 + file].title[0xd];
	if (bVar1 == 0x53) {
		__src = GetStr__Fi(1000);
	}
	else {
		if (bVar1 < 0x54) {
			if (bVar1 == 0x52) {
				__src = GetStr__Fi(0x375);
			}
			else {
LAB_8015b584:
				__src = "BUGGER!";
			}
		}
		else {
			if (bVar1 != 0x57) goto LAB_8015b584;
			__src = GetStr__Fi(0x4be);
		}
	}
	strcat(&TempStr,__src);
	strcat(&TempStr,(char *)(card_header[file + side * 0x10].title + 0x10));
LAB_8015b7e4:
	return &TempStr;
}





