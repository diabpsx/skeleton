#include "THISDUST.H"
#include "PSXHELP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ RemoveHelp__Fv()
 // line 72, offset 0x800ae38c
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x800AE38C
	/* end block 1 */
	// End offset: 0x800AE398
	// End Line: 75

	/* begin block 2 */
		// Start line: 145
	/* end block 2 */
	// End Line: 146

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveHelp__Fv(void)

{
	cmenu = 0;
	helpflag = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HelpPad__Fv()
 // line 80, offset 0x800ae3a0
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x800AE3A0
		// Variables:
	// 		struct CPad *Pad; // $s0
	/* end block 1 */
	// End offset: 0x800AE634
	// End Line: 151

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HelpPad__Fv(void)

{
	uchar uVar1;
	char cVar2;
	ushort tick;
	CPad *this;
	int iVar3;
	int iVar4;
	
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (FeFlag == '\0') {
		tick = 5;
	}
	else {
		tick = 8;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,3);
	if (displayinghelp != (void *)0x0) goto LAB_800ae5a8;
	tick = GetTick__C4CPad(this);
	if ((tick & 1) != 0) {
		displayinghelp = (void *)0x0;
		cVar2 = help_select_line + -1;
		help_select_line = help_select_line + -2;
		uVar1 = HelpTop;
		if (((HelpList[(int)cVar2].DisplayType != '\x04') ||
				(uVar1 = HelpTop + -1, cVar2 = help_select_line, HelpTop != '\0')) &&
			 (help_select_line = cVar2, HelpTop = uVar1, HelpTop != '\0')) {
			HelpTop = HelpTop + -1;
		}
		if (help_select_line < '\0') {
			help_select_line = help_select_line + '\x19';
		}
		if (help_select_line == '\x18') {
			HelpTop = '\x16';
		}
		PlaySFX__Fi(IS_TITLEMOV);
	}
	tick = GetTick__C4CPad(this);
	if ((tick & 2) == 0) goto LAB_800ae5a8;
	iVar3 = ((uint)(byte)help_select_line + 1) * 0x1000000;
	iVar4 = iVar3 >> 0x18;
	displayinghelp = (void *)0x0;
	iVar4 = iVar4 + ((iVar4 / 0x19 + (iVar4 >> 0x1f)) - (iVar3 >> 0x1f)) * -0x19;
	help_select_line = (char)iVar4;
	if (HelpList[iVar4 * 0x1000000 >> 0x18].DisplayType == '\x04') {
		help_select_line = (char)(iVar4 + 1);
		if (2 < (iVar4 + 1) * 0x1000000 >> 0x18) {
			HelpTop = HelpTop + '\x01';
			goto LAB_800ae560;
		}
LAB_800ae58c:
		if (help_select_line == '\x01') {
			HelpTop = '\0';
		}
	}
	else {
LAB_800ae560:
		if (help_select_line < '\x03') goto LAB_800ae58c;
		HelpTop = HelpTop + '\x01';
	}
	PlaySFX__Fi(IS_TITLEMOV);
LAB_800ae5a8:
	tick = GetDown__C4CPad(this);
	if ((tick & 0x100) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		if (displayinghelp == (void *)0x0) {
			RemoveHelp__Fv();
		}
		else {
			displayinghelp = (void *)0x0;
		}
	}
	tick = GetDown__C4CPad(this);
	if (((tick & 0x40) != 0) && (HelpList[(int)help_select_line].DisplayType != '\x01')) {
		displayinghelp = &DAT_00000001;
		PlaySFX__Fi(IS_TITLSLCT);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetControlKey__FiPb(int str /*$t0*/, void * *iscombo /*$a1*/)
 // line 156, offset 0x800ae648
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x800AE648
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $a2

		/* begin block 1.1 */
			// Start line: 157
			// Start offset: 0x800AE648
			// Variables:
		// 		int i; // $a3
		/* end block 1.1 */
		// End offset: 0x800AE6DC
		// End Line: 176
	/* end block 1 */
	// End offset: 0x800AE6E0
	// End Line: 177

	/* begin block 2 */
		// Start line: 320
	/* end block 2 */
	// End Line: 321

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetControlKey__FiPb(int str,undefined iscombo)

{
	int *piVar1;
	int n;
	undefined3 in_register_00000015;
	KEY_ASSIGNS *pKVar2;
	int iVar3;
	
	pKVar2 = &txt_actions;
	iVar3 = 0;
	piVar1 = &txt_actions.combo_val;
	*(undefined4 *)CONCAT31(in_register_00000015,iscombo) = 0;
	do {
		if (pKVar2->txt == str) {
			n = piVar1[-2];
			if (n != 0) {
LAB_800ae6a0:
				iVar3 = get_key_pad__Fi(n);
				return (int)pad_txt[iVar3].font_num;
			}
			if (*piVar1 != 0) {
				*(undefined4 *)CONCAT31(in_register_00000015,iscombo) = 1;
				n = *piVar1;
				goto LAB_800ae6a0;
			}
		}
		piVar1 = piVar1 + 4;
		iVar3 = iVar3 + 1;
		pKVar2 = pKVar2 + 1;
		if (0x13 < iVar3) {
			return 0;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitHelp__Fv()
 // line 228, offset 0x800ae6f0
	/* begin block 1 */
		// Start line: 229
		// Start offset: 0x800AE6F0
	/* end block 1 */
	// End offset: 0x800AE72C
	// End Line: 234

	/* begin block 2 */
		// Start line: 469
	/* end block 2 */
	// End Line: 470

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitHelp__Fv(void)

{
	PostGamePad__Fiiii(0xb,options_pad,(int)&txt_actions,0);
	helpflag = &DAT_00000001;
	displayinghelp = (void *)0x0;
	HelpTop = '\0';
	help_select_line = '\x01';
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawHelpLine__FiiPccccP10HelpStruct(int x /*$s5*/, int y /*$s6*/, char *txt /*$s1*/, char R /*$s2*/, int G /*stack 16*/, int B /*stack 20*/, struct HelpStruct *hp /*stack 24*/)
 // line 294, offset 0x800ae73c
	/* begin block 1 */
		// Start line: 295
		// Start offset: 0x800AE73C
		// Variables:
	// 		int eln; // $v0

		/* begin block 1.1 */
			// Start line: 295
			// Start offset: 0x800AE73C

			/* begin block 1.1.1 */
				// Start line: 299
				// Start offset: 0x800AE788
				// Variables:
			// 		int key; // $s0
			// 		void * combo; // stack offset -40

				/* begin block 1.1.1.1 */
					// Start line: 303
					// Start offset: 0x800AE788

					/* begin block 1.1.1.1.1 */
						// Start line: 305
						// Start offset: 0x800AE7A4
						// Variables:
					// 		int nkey; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AE7DC
					// End Line: 314
				/* end block 1.1.1.1 */
				// End offset: 0x800AE834
				// End Line: 329
			/* end block 1.1.1 */
			// End offset: 0x800AE834
			// End Line: 332
		/* end block 1.1 */
		// End offset: 0x800AE924
		// End Line: 341
	/* end block 1 */
	// End offset: 0x800AE924
	// End Line: 343

	/* begin block 2 */
		// Start line: 603
	/* end block 2 */
	// End Line: 604

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DrawHelpLine__FiiPccccP10HelpStruct(int x,int y,char *txt,char R,int G,int B,HelpStruct *hp)

{
	int iVar1;
	int iVar2;
	uint R_00;
	uint G_00;
	uint B_00;
	int local_28;
	
	R_00 = (uint)(byte)R;
	G_00 = G & 0xff;
	B_00 = B & 0xff;
	if (hp->DisplayType != '\x01') {
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,x,y,txt,(uint)(displayinghelp != (void *)0x0),&HelpRect,(uint)(byte)R,
							 G_00,B_00);
		goto LAB_800ae91c;
	}
	iVar1 = GetControlKey__FiPb(hp->HelpTxt,0xd8);
	if (local_28 == 0) {
		if (iVar1 == 0) goto LAB_800ae804;
		sprintf(&tempstr,"%c   %s",iVar1,txt);
	}
	else {
		iVar2 = GetControlKey__FiPb(0xc6,0xd8);
		if (iVar2 == 0) {
LAB_800ae804:
			R_00 = (uint)REDR;
			G_00 = (uint)REDG;
			B_00 = (uint)REDB;
			sprintf(&tempstr,"    %s",txt);
		}
		else {
			sprintf(&tempstr,"%c + %c %s",iVar2,iVar1,txt);
		}
	}
	txt = &tempstr;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,x,y,&tempstr,JustLeft,&HelpRect,R_00,G_00,B_00)
	;
LAB_800ae91c:
	iVar1 = GetStrWidth__5CFontPc(&MediumFont,txt);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DisplayHelp__Fv()
 // line 346, offset 0x800ae950
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x800AE950
		// Variables:
	// 		struct HelpStruct *hp; // $s7
	// 		int y; // $s6

		/* begin block 1.1 */
			// Start line: 347
			// Start offset: 0x800AE950
			// Variables:
		// 		int i; // stack offset -72

			/* begin block 1.1.1 */
				// Start line: 352
				// Start offset: 0x800AE9B4
				// Variables:
			// 		char *txt; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 354
					// Start offset: 0x800AE9C8

					/* begin block 1.1.1.1.1 */
						// Start line: 360
						// Start offset: 0x800AE9FC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 361
							// Start offset: 0x800AE9FC

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 362
								// Start offset: 0x800AEA0C
								// Variables:
							// 		int nlen; // $fp
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800AEB2C
							// End Line: 384
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800AEB98
						// End Line: 394
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AEB98
					// End Line: 394
				/* end block 1.1.1.1 */
				// End offset: 0x800AEC7C
				// End Line: 405
			/* end block 1.1.1 */
			// End offset: 0x800AEC88
			// End Line: 410
		/* end block 1.1 */
		// End offset: 0x800AEC9C
		// End Line: 411
	/* end block 1 */
	// End offset: 0x800AEC9C
	// End Line: 411

	/* begin block 2 */
		// Start line: 721
	/* end block 2 */
	// End Line: 722

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DisplayHelp__Fv(void)

{
	bool bVar1;
	uchar R;
	char *txt;
	int iVar2;
	int G;
	int B;
	int y;
	HelpStruct *hp;
	int local_48;
	
	R = GOLDR;
	G = (int)(char)GOLDG;
	hp = HelpList;
	y = 0x10;
	local_48 = 0;
	B = (int)(char)GOLDB;
	do {
		if (0x18 < local_48) {
			return;
		}
		txt = GetStr__Fi(hp->HelpTxt);
		if (local_48 < (int)(uint)HelpTop) {
			bVar1 = y < 0x9b;
			if (displayinghelp != (void *)0x0) goto LAB_800aebec;
		}
		else {
			if (displayinghelp == (void *)0x0) {
				if (local_48 == (int)help_select_line) {
					GetStrWidth__5CFontPc(&MediumFont,txt);
					if (displayinghelp != (void *)0x0) {
						y = y + 2;
					}
					iVar2 = DrawHelpLine__FiiPccccP10HelpStruct(0,y,txt,R,G,B,hp);
					if (displayinghelp == (void *)0x0) {
						if (FeFlag != '\0') {
							FUN_8013c9b8(0x14,y + 0x32);
							FUN_8013c9b8(iVar2 + 0x24,y + 0x32);
							y = y + 0x10;
							goto LAB_800aec7c;
						}
						DrawSpinner__FiiUcUcUciiibiT8T8Uc
											(0x14,y + 0x32,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x118,&DAT_00000001,
											 (void *)0x0,8);
						DrawSpinner__FiiUcUcUciiibiT8T8Uc
											(iVar2 + 0x24,y + 0x32,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x118,
											 &DAT_00000001,(void *)0x0,8);
					}
					y = y + 0x10;
				}
				else {
					if (hp->DisplayType != '\x04') {
						DrawHelpLine__FiiPccccP10HelpStruct
											(0,y,txt,WHITER,(int)(char)WHITEG,(int)(char)WHITEB,hp);
						bVar1 = y + 0x10 < 0x9b;
						y = y + 0x10;
						goto LAB_800aec80;
					}
					iVar2 = Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
														(&MediumFont,0,y,txt,JustCentre,&HelpRect,(uint)WHITER,(uint)WHITEG,
														 (uint)WHITEG);
					y = y + iVar2 * 0x10;
				}
			}
			else {
LAB_800aebec:
				bVar1 = y < 0x9b;
				if (local_48 != (int)help_select_line) goto LAB_800aec80;
				DrawHelpLine__FiiPccccP10HelpStruct(0,y,txt,R,G,B,hp);
				y = y + 0x10;
				txt = GetStr__Fi(hp->subtxt);
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0,y,txt,JustLeft,&HelpRect,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
			}
LAB_800aec7c:
			bVar1 = y < 0x9b;
		}
LAB_800aec80:
		hp = hp + 1;
		if (!bVar1) {
			return;
		}
		local_48 = local_48 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawHelp__Fv()
 // line 415, offset 0x800aecd0
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x800AECD0
		// Variables:
	// 		static struct Dialog txtBack; // offset 0x80121c78
	// 		int otpos; // $s0
	// 		int oldDot; // $s3
	// 		int OldPrintOT; // $s4
	/* end block 1 */
	// End offset: 0x800AEF24
	// End Line: 453

	/* begin block 2 */
		// Start line: 863
	/* end block 2 */
	// End Line: 864

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawHelp__Fv(void)

{
	byte bVar1;
	int OT;
	int OT_00;
	char *Str;
	ushort Str_00;
	CFont *this;
	int Y;
	RECT *local_2c;
	
	if (DAT_8011b2f4 == 0) {
		DAT_8011b2f4 = 1;
		__6Dialog((Dialog *)&txtBack_160);
	}
	OT = GetOverlayOtBase__7CBlocks();
	OT_00 = SetOTpos__6Dialogi(&HelpBack,OT);
	this = &MediumFont;
	OT = SetOTpos__5CFonti(&MediumFont,OT + 1);
	if (helpflag == (void *)0x0) {
		InitHelp__Fv();
	}
	if (FeFlag == '\0') {
		HelpRect.y = 0x20;
		HelpRect.w = 0x111;
		HelpRect.x = 0x10;
		HelpRect.h = 0x10;
		Back__6Dialogiiii(&HelpBack,0x10,0x20,0x11a,0x10);
		Str = GetStr__Fi(0x1e5);
		Y = 0xb;
		local_2c = &HelpRect;
		bVar1 = GOLDR;
		bVar1 = GOLDG;
		bVar1 = GOLDB;
	}
	else {
		Str = GetStr__Fi(0x1e5);
		this = &LargeFont;
		Y = 0x2e;
		local_2c = (RECT *)0x0;
		bVar1 = BLUER;
		bVar1 = BLUEG;
		bVar1 = BLUEB;
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(this,0,Y,Str,JustCentre,local_2c,(uint)bVar1,(uint)bVar1,(uint)bVar1);
	SetBorder__6Dialogi(&HelpBack,0x12);
	SetRGB__6DialogUcUcUc(&HelpBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&HelpBack,0x10,0x34,0x119,0x9a);
	HelpRect.x = 0x20;
	HelpRect.y = 0x34;
	HelpRect.w = 0x101;
	HelpRect.h = 0x9a;
	HelpPad__Fv();
	DisplayHelp__Fv();
	Str_00 = 0x4a0;
	if ((HelpList[(int)help_select_line].DisplayType == '\x03') && (displayinghelp == (void *)0x0)) {
		Str_00 = 0x4e6;
	}
	PrintSelectBack__FUs(Str_00);
	SetOTpos__6Dialogi(&HelpBack,OT_00);
	SetOTpos__5CFonti(&MediumFont,OT);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.DrawHelp__Fv()
 // line 454, offset 0x800aef48
	/* begin block 1 */
		// Start line: 455
		// Start offset: 0x800AEF48
	/* end block 1 */
	// End offset: 0x800AEF78
	// End Line: 455

	/* begin block 2 */
		// Start line: 946
	/* end block 2 */
	// End Line: 947

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_DrawHelp__Fv(void)

{
	if (DAT_8011b2f4 != 0) {
		___6Dialog((Dialog *)&txtBack_160,2);
	}
	___6Dialog(&HelpBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.DrawHelp__Fv()
 // line 454, offset 0x800aef88
	/* begin block 1 */
		// Start line: 455
		// Start offset: 0x800AEF88
	/* end block 1 */
	// End offset: 0x800AEFA0
	// End Line: 455

	/* begin block 2 */
		// Start line: 946
	/* end block 2 */
	// End Line: 947

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_DrawHelp__Fv(void)

{
	__6Dialog(&HelpBack);
	return;
}





