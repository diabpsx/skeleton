#include "THISDUST.H"
#include "CTRL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SetDemoKeys__FPi(int *buffer /*$s1*/)
 // line 166, offset 0x80091f28
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x80091F28
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s0

		/* begin block 1.1 */
			// Start line: 167
			// Start offset: 0x80091F28
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x80091F90
		// End Line: 176
	/* end block 1 */
	// End offset: 0x80091FE8
	// End Line: 182

	/* begin block 2 */
		// Start line: 332
	/* end block 2 */
	// End Line: 333

void SetDemoKeys__FPi(int *buffer)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	
	PostGamePad__Fiiii(0xb,0,(int)txt_actions,0);
	iVar3 = 0;
	piVar2 = &txt_actions[4].combo_val;
	iVar1 = -0x7ff43fec;
	do {
		iVar4 = iVar1;
		iVar3 = iVar3 + 1;
		*buffer = piVar2[-2];
		iVar1 = *piVar2;
		piVar2 = piVar2 + 4;
		buffer[1] = iVar1;
		buffer = buffer + 2;
		iVar1 = iVar4 + 0x10;
	} while (iVar3 < 4);
	*(undefined4 *)(iVar4 + -0x2c) = 0x40;
	*(undefined4 *)(iVar4 + -0x24) = 0;
	*(undefined4 *)(iVar4 + -0x1c) = 0x80;
	*(undefined4 *)(iVar4 + -0x14) = 0;
	*(undefined4 *)(iVar4 + -0xc) = 0x200;
	*(undefined4 *)(iVar4 + -4) = 0;
	*(undefined4 *)(iVar4 + 4) = 0x100;
	*(undefined4 *)(iVar4 + 0xc) = 0;
	PostGamePad__Fiiii(9,(int)txt_actions,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestoreDemoKeys__FPi(int *buffer /*$s1*/)
 // line 185, offset 0x80092000
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x80092000
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s0

		/* begin block 1.1 */
			// Start line: 186
			// Start offset: 0x80092000
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80092060
		// End Line: 195
	/* end block 1 */
	// End offset: 0x80092078
	// End Line: 196

	/* begin block 2 */
		// Start line: 377
	/* end block 2 */
	// End Line: 378

void RestoreDemoKeys__FPi(int *buffer)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	
	PostGamePad__Fiiii(0xb,0,(int)txt_actions,0);
	iVar1 = 0;
	piVar2 = &txt_actions[4].combo_val;
	do {
		piVar3 = buffer + 1;
		iVar1 = iVar1 + 1;
		piVar2[-2] = *buffer;
		buffer = buffer + 2;
		*piVar2 = *piVar3;
		piVar2 = piVar2 + 4;
	} while (iVar1 < 4);
	PostGamePad__Fiiii(9,(int)txt_actions,0,0);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ get_action_str__Fii(int pval /*$a3*/, int combo /*$a1*/)
 // line 199, offset 0x80092090
	/* begin block 1 */
		// Start line: 200
		// Start offset: 0x80092090
		// Variables:
	// 		struct KEY_ASSIGNS *ac; // $a0

		/* begin block 1.1 */
			// Start line: 200
			// Start offset: 0x80092090
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x800920F4
		// End Line: 216
	/* end block 1 */
	// End offset: 0x800920F8
	// End Line: 217

	/* begin block 2 */
		// Start line: 410
	/* end block 2 */
	// End Line: 411

char * get_action_str__Fii(int pval,int combo)

{
	int iVar1;
	char *pcVar2;
	int *piVar3;
	KEY_ASSIGNS *pKVar4;
	int iVar5;
	
	pKVar4 = txt_actions;
	iVar5 = 0;
	piVar3 = &txt_actions[0].pad_val;
	while( true ) {
		if (combo == 0) {
			iVar1 = *piVar3;
		}
		else {
			iVar1 = piVar3[2];
		}
		piVar3 = piVar3 + 4;
		if (iVar1 == pval) break;
		iVar5 = iVar5 + 1;
		pKVar4 = pKVar4 + 1;
		if (0x12 < iVar5) {
			return (char *)0x0;
		}
	}
	pcVar2 = GetStr__Fi(pKVar4->txt);
	return pcVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ get_key_pad__Fi(int n /*$a0*/)
 // line 245, offset 0x80092108
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x80092108
		// Variables:
	// 		int i; // $v1
	// 		struct pad_assigns *pa; // $a1
	/* end block 1 */
	// End offset: 0x80092138
	// End Line: 256

	/* begin block 2 */
		// Start line: 504
	/* end block 2 */
	// End Line: 505

int get_key_pad__Fi(int n)

{
	int iVar1;
	pad_assigns *ppVar2;
	
	ppVar2 = pad_txt;
	iVar1 = 0;
	do {
		if (ppVar2->pnum == n) {
			return iVar1;
		}
		iVar1 = iVar1 + 1;
		ppVar2 = ppVar2 + 1;
	} while (iVar1 < 0xe);
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveCtrlScreen__Fv()
 // line 261, offset 0x80092140
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80092140
	/* end block 1 */
	// End offset: 0x80092174
	// End Line: 266

	/* begin block 2 */
		// Start line: 534
	/* end block 2 */
	// End Line: 535

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveCtrlScreen__Fv(void)

{
	PostGamePad__Fiiii(9,options_pad,(int)txt_actions,0);
	ctrlflag = '\0';
	cmenu = 0;
	ctrl_select_line = '\0';
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ Init_ctrl_pos__Fv()
 // line 274, offset 0x80092184
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x80092184
	/* end block 1 */
	// End offset: 0x80092228
	// End Line: 293

	/* begin block 2 */
		// Start line: 565
	/* end block 2 */
	// End Line: 566

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar Init_ctrl_pos__Fv(void)

{
	if (ctrlflag == '\0') {
		if (FeFlag != '\0') {
			options_pad = they_pressed;
		}
		ctrl_select_side = '\0';
		ckeyheld = '\0';
		toppos = 0;
		SetBorder__6Dialogi(&CtrlBack,0x28);
		SetRGB__6DialogUcUcUc(&CtrlBack,BORDERR,BORDERG,BORDERB);
		ctrl_select_line = '\0';
		ctrlflag = '\x01';
		PostGamePad__Fiiii(0xb,options_pad,(int)txt_actions,0);
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// int /*$ra*/ remove_padval__Fi(int p /*$a0*/)
 // line 296, offset 0x8009223c
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8009223C

		/* begin block 1.1 */
			// Start line: 300
			// Start offset: 0x8009223C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80092270
		// End Line: 308
	/* end block 1 */
	// End offset: 0x80092274
	// End Line: 309

	/* begin block 2 */
		// Start line: 616
	/* end block 2 */
	// End Line: 617

int remove_padval__Fi(int p)

{
	int *piVar1;
	int iVar2;
	
	iVar2 = 0;
	piVar1 = &txt_actions[0].pad_val;
	do {
		if (*piVar1 == p) {
			*piVar1 = 0;
			return iVar2;
		}
		iVar2 = iVar2 + 1;
		piVar1 = piVar1 + 4;
	} while (iVar2 < 0x13);
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ remove_comboval__Fi(int p /*$a0*/)
 // line 312, offset 0x8009227c
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x8009227C
		// Variables:
	// 		int n; // $a2

		/* begin block 1.1 */
			// Start line: 314
			// Start offset: 0x8009227C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800922B4
		// End Line: 325
	/* end block 1 */
	// End offset: 0x800922B4
	// End Line: 326

	/* begin block 2 */
		// Start line: 646
	/* end block 2 */
	// End Line: 647

int remove_comboval__Fi(int p)

{
	int *piVar1;
	int iVar2;
	
	iVar2 = 0;
	piVar1 = &txt_actions[0].combo_val;
	do {
		if (*piVar1 == p) {
			*piVar1 = 0;
		}
		iVar2 = iVar2 + 1;
		piVar1 = piVar1 + 4;
	} while (iVar2 < 0x13);
	return -1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ set_buttons__Fii(int cline /*$s3*/, int n /*$s1*/)
 // line 329, offset 0x800922bc
	/* begin block 1 */
		// Start line: 330
		// Start offset: 0x800922BC
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s0
	// 		int cval; // $v1
	// 		int i; // $a0
	// 		int p; // $s2
	/* end block 1 */
	// End offset: 0x800923F0
	// End Line: 374

	/* begin block 2 */
		// Start line: 679
	/* end block 2 */
	// End Line: 680

uchar set_buttons__Fii(int cline,int n)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	if ((n & ~txt_actions[2].pad_val) == 0) {
		iVar3 = txt_actions[cline].combo_val;
	}
	else {
		iVar3 = txt_actions[cline].pad_val;
	}
	if (((n & txt_actions[2].pad_val) != n) || (uVar1 = '\0', txt_actions[cline].txt == 0xc4)) {
		if (ckeyheld == '\0') {
			if (txt_actions[cline].pad_val == n) {
				txt_actions[cline].pad_val = 0;
			}
			else {
				iVar2 = remove_padval__Fi(n);
				txt_actions[cline].pad_val = n;
				if (iVar2 != -1) {
					txt_actions[iVar2].pad_val = iVar3;
				}
				txt_actions[cline].combo_val = 0;
				if (cline == 2) {
					remove_comboval__Fi(n);
					return '\x01';
				}
			}
		}
		else {
			if (txt_actions[cline].combo_val == n) {
				txt_actions[cline].combo_val = 0;
			}
			else {
				iVar2 = remove_comboval__Fi(n);
				if (n != txt_actions[2].pad_val) {
					txt_actions[cline].combo_val = n;
				}
				txt_actions[cline].pad_val = 0;
				if (iVar2 != -1) {
					txt_actions[iVar2].combo_val = iVar3;
				}
			}
		}
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ restore_controller_settings__Fv()
 // line 377, offset 0x80092410
	/* begin block 1 */
		// Start line: 378
		// Start offset: 0x80092410

		/* begin block 1.1 */
			// Start line: 380
			// Start offset: 0x80092410
		/* end block 1.1 */
		// End offset: 0x80092450
		// End Line: 385
	/* end block 1 */
	// End offset: 0x80092450
	// End Line: 385

	/* begin block 2 */
		// Start line: 782
	/* end block 2 */
	// End Line: 783

/* WARNING: Unknown calling convention yet parameter storage is locked */

void restore_controller_settings__Fv(void)

{
	int *piVar1;
	int iVar2;
	int *piVar3;
	
	iVar2 = 0;
	piVar3 = &txt_actions[0].combo_val;
	do {
		piVar3[-2] = *(int *)((int)&controller_defaults + iVar2);
		piVar1 = (int *)((int)&INT_800bc108 + iVar2);
		iVar2 = iVar2 + 8;
		*piVar3 = *piVar1;
		piVar3 = piVar3 + 4;
	} while (iVar2 < 0x98);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ main_ctrl_setup__Fv()
 // line 391, offset 0x80092458
	/* begin block 1 */
		// Start line: 392
		// Start offset: 0x80092458
		// Variables:
	// 		struct CPad *Pad; // $s0
	// 		int lv; // $a1
	/* end block 1 */
	// End offset: 0x800928D8
	// End Line: 539

	/* begin block 2 */
		// Start line: 810
	/* end block 2 */
	// End Line: 811

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar main_ctrl_setup__Fv(void)

{
	byte bVar1;
	char cVar2;
	uchar uVar3;
	ushort tick;
	CPad *this;
	int iVar4;
	int iVar5;
	uint uVar6;
	
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (FeFlag == '\0') {
		tick = 5;
	}
	else {
		tick = 8;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,3);
	tick = GetDown__C4CPad(this);
	if (((uint)tick & txt_actions[2].pad_val) == 0) {
		tick = GetUp__C4CPad(this);
		if (((uint)tick & txt_actions[2].pad_val) != 0) {
			ckeyheld = '\0';
		}
	}
	else {
		ckeyheld = '\x01';
	}
	tick = GetTick__C4CPad(this);
	if ((tick & 1) != 0) {
		PlaySFX__Fi(IS_TITLEMOV);
		bVar1 = ctrl_select_line - 1;
		cVar2 = ctrl_select_line + -2;
		ctrl_select_line = bVar1;
		if ((*(int *)((int)&txt_actions[0].txt + ((int)((uint)bVar1 << 0x18) >> 0x14)) == 0x500) &&
			 (ctrl_select_line = cVar2, '\x04' < cVar2)) {
			toppos = toppos + -1;
			ctrl_select_line = cVar2;
		}
		if (ctrl_select_line < '\0') {
			ctrl_select_line = ctrl_select_line + '\x13';
		}
		if (toppos != 0) {
			toppos = toppos + -1;
		}
		if (ctrl_select_line == '\x12') {
			toppos = 0xf;
		}
	}
	tick = GetTick__C4CPad(this);
	if ((tick & 2) != 0) {
		PlaySFX__Fi(IS_TITLEMOV);
		iVar4 = ((uint)(byte)ctrl_select_line + 1) * 0x1000000;
		iVar5 = iVar4 >> 0x18;
		iVar5 = iVar5 + ((iVar5 / 0x13 + (iVar5 >> 0x1f)) - (iVar4 >> 0x1f)) * -0x13;
		ctrl_select_line = (char)iVar5;
		if (*(int *)((int)&txt_actions[0].txt + (iVar5 * 0x1000000 >> 0x14)) == 0x500) {
			ctrl_select_line = (char)(iVar5 + 1);
			if (4 < (iVar5 + 1) * 0x1000000 >> 0x18) {
				toppos = toppos + 1;
				goto LAB_80092660;
			}
		}
		else {
LAB_80092660:
			if ('\x04' < ctrl_select_line) {
				toppos = toppos + 1;
				goto LAB_800926a0;
			}
		}
		if (ctrl_select_line == '\0') {
			toppos = 0;
		}
	}
LAB_800926a0:
	tick = GetDown__C4CPad(this);
	if (((tick & 0x200) != 0) && (ctrl_select_side == '\0')) {
		PlaySFX__Fi(IS_TITLSLCT);
		RemoveCtrlScreen__Fv();
		return '\0';
	}
	if (ctrl_select_line < '\x02') {
		ctrl_select_side = '\0';
	}
	tick = GetDown__C4CPad(this);
	if ((tick & 4) != 0) {
		if (txt_actions[(int)ctrl_select_line].txt == 0xf4) {
			return '\x01';
		}
		if (txt_actions[(int)ctrl_select_line].txt == 0x28c) goto LAB_80092790;
		PlaySFX__Fi(IS_TITLEMOV);
		if (ctrl_select_side != '\0') {
			ctrl_select_side = '\0';
		}
	}
	tick = GetDown__C4CPad(this);
	if ((tick & 8) != 0) {
		if (txt_actions[(int)ctrl_select_line].txt == 0xf4) {
			return '\x01';
		}
		if (txt_actions[(int)ctrl_select_line].txt == 0x28c) {
LAB_80092790:
			PlaySFX__Fi(IS_TITLSLCT);
			iVar4 = (int)ctrl_select_line;
			txt_actions[iVar4].pad_val = txt_actions[iVar4].pad_val + 1;
			uVar6 = txt_actions[iVar4].pad_val;
			txt_actions[iVar4].pad_val = uVar6 + ((int)(uVar6 + (uVar6 >> 0x1f)) >> 1) * -2;
			return '\x01';
		}
		PlaySFX__Fi(IS_TITLEMOV);
		if (ctrl_select_side == '\0') {
			ctrl_select_side = '\x01';
		}
	}
	tick = GetDown__C4CPad(this);
	if (((tick & 0x40) != 0) && (txt_actions[(int)ctrl_select_line].txt == 0xf4)) {
		PlaySFX__Fi(IS_TITLSLCT);
		restore_controller_settings__Fv();
		return '\x01';
	}
	if (ctrl_select_side == '\0') {
		return '\x01';
	}
	if ('\x01' < ctrl_select_line) {
		if (ctrlflag == '\0') {
			return '\x01';
		}
		tick = GetDown__C4CPad(this);
		if ((tick & 0x3fc0) != 0) {
			uVar3 = set_buttons__Fii((int)ctrl_select_line,(uint)tick & 0x3fc0);
			if (uVar3 != '\0') {
				ckeyheld = '\0';
				PlaySFX__Fi(IS_TITLSLCT);
				return '\x01';
			}
			return '\x01';
		}
		return '\x01';
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintCtrlString__FiiUcic(int x /*$a0*/, int y /*$fp*/, unsigned char cjustflag /*$a2*/, int str_num /*$s4*/, int col /*stack 16*/)
 // line 545, offset 0x800928f0
	/* begin block 1 */
		// Start line: 546
		// Start offset: 0x800928F0
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s2
	// 		int i; // $v0
	// 		unsigned char r; // stack offset -56
	// 		unsigned char g; // stack offset -48
	// 		unsigned char b; // $s7
	// 		int str; // $s3
	// 		int len; // $s5

		/* begin block 1.1 */
			// Start line: 637
			// Start offset: 0x80092CEC

			/* begin block 1.1.1 */
				// Start line: 638
				// Start offset: 0x80092CFC
				// Variables:
			// 		int x1; // $a0
			// 		int x2; // $s6
			// 		int nlen; // $a1
			/* end block 1.1.1 */
			// End offset: 0x80092DB4
			// End Line: 655
		/* end block 1.1 */
		// End offset: 0x80092DB4
		// End Line: 655
	/* end block 1 */
	// End offset: 0x80092DF8
	// End Line: 659

	/* begin block 2 */
		// Start line: 1125
	/* end block 2 */
	// End Line: 1126

void PrintCtrlString__FiiUcic(int x,int y,uchar cjustflag,int str_num,int col)

{
	char cVar1;
	char *__src;
	int iVar2;
	int x_00;
	int iVar3;
	text_strs StrId;
	uint B;
	int Y;
	byte local_38;
	byte local_30;
	
	local_38 = 0;
	local_30 = 0;
	StrId = txt_actions[str_num].txt;
	B = 0;
	if (0x76 < y - 0x18U) {
		return;
	}
	cVar1 = (char)col;
	if (cVar1 == '\x01') {
		B = (uint)BLUEB;
		local_38 = BLUER;
		local_30 = BLUEG;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 == '\0') {
				B = (uint)WHITEB;
				local_38 = WHITER;
				local_30 = WHITEG;
			}
		}
		else {
			if (cVar1 == '\x02') {
				B = (uint)REDB;
				local_38 = REDR;
				local_30 = REDG;
			}
			else {
				if (cVar1 == '\x03') {
					B = (uint)GOLDB;
					local_38 = GOLDR;
					local_30 = GOLDG;
				}
			}
		}
	}
	Y = y + -4;
	__src = GetStr__Fi(StrId);
	strcpy(tempstr,__src);
	iVar2 = GetStrWidth__5CFontPc(&MediumFont,tempstr);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,6,Y,tempstr,JustLeft,&CtrlRect,(uint)local_38,(uint)local_30,B);
	if (StrId == STR_MOVE_STYLE) {
		StrId = STR_RELATIVE;
		if (txt_actions[str_num].pad_val == 0) {
			StrId = STR_ABSOLUTE;
		}
		__src = GetStr__Fi(StrId);
		strcpy(tempstr,__src);
		strcat(tempstr,&DAT_8012ac38);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,Y,tempstr,JustRight,&CtrlRect,(uint)local_38,(uint)local_30,B);
		goto LAB_80092cec;
	}
	tempstr[0] = '\0';
	if (StrId == STR_COMBO_KEY) {
code_r0x80092bc0:
		if ((txt_actions[2].pad_val != 0) && (txt_actions[str_num].combo_val != 0)) {
			x_00 = get_key_pad__Fi(txt_actions[2].pad_val);
			cVar1 = pad_txt[x_00].font_num;
			x_00 = get_key_pad__Fi(txt_actions[str_num].combo_val);
			sprintf(tempstr,"%c+%c ",(int)cVar1,(int)pad_txt[x_00].font_num);
			goto LAB_80092cec;
		}
	}
	else {
		if (txt_actions[2].pad_val != 0) {
			if (((ctrl_select_side == '\x01') && (str_num == (int)ctrl_select_line)) && (ckeyheld != '\0')
				 ) {
				x_00 = get_key_pad__Fi(txt_actions[2].pad_val);
				sprintf(tempstr,&DAT_8012ac3c,(int)pad_txt[x_00].font_num);
				goto LAB_80092cec;
			}
			goto code_r0x80092bc0;
		}
	}
	if ((str_num == 0) || (txt_actions[str_num].pad_val == 0)) {
		if ((StrId != STR_DEFAULT) && (StrId != STR__________)) {
			sprintf(tempstr,"Disabled ");
		}
	}
	else {
		x_00 = get_key_pad__Fi(txt_actions[str_num].pad_val);
		if (pad_txt[x_00].font_num != '\0') {
			x_00 = get_key_pad__Fi(txt_actions[str_num].pad_val);
			sprintf(tempstr,(char *)&PTR_DAT_8012ac4c,(int)pad_txt[x_00].font_num);
		}
	}
LAB_80092cec:
	if (str_num == (int)ctrl_select_line) {
		x_00 = GetStrWidth__5CFontPc(&MediumFont,tempstr);
		iVar3 = 0x14;
		if (ctrl_select_side == '\x01') {
			iVar3 = 0x129;
			x_00 = 0x122 - x_00;
		}
		else {
			x_00 = iVar2 + 0x1b;
		}
		DrawSpinner__FiiUcUcUciiibiT8
							(iVar3 + -4,y + 0x2e,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x104,&DAT_00000001);
		DrawSpinner__FiiUcUcUciiibiT8
							(x_00,y + 0x2e,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x104,&DAT_00000001);
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,Y,tempstr,JustRight,&CtrlRect,(uint)local_38,(uint)local_30,B);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCtrlSetup__Fv()
 // line 663, offset 0x80092e2c
	/* begin block 1 */
		// Start line: 664
		// Start offset: 0x80092E2C
		// Variables:
	// 		int i; // $s0
	// 		int pnum; // $s4

		/* begin block 1.1 */
			// Start line: 664
			// Start offset: 0x80092E2C

			/* begin block 1.1.1 */
				// Start line: 669
				// Start offset: 0x80092E54
			/* end block 1.1.1 */
			// End offset: 0x80092E5C
			// End Line: 671
		/* end block 1.1 */
		// End offset: 0x80092E5C
		// End Line: 671

		/* begin block 1.2 */
			// Start line: 677
			// Start offset: 0x80092E80

			/* begin block 1.2.1 */
				// Start line: 687
				// Start offset: 0x80092EB8
				// Variables:
			// 		int lena; // $s1
			// 		int len; // $v0
			/* end block 1.2.1 */
			// End offset: 0x80092FD0
			// End Line: 693
		/* end block 1.2 */
		// End offset: 0x80092FD0
		// End Line: 693

		/* begin block 1.3 */
			// Start line: 700
			// Start offset: 0x80092FD0

			/* begin block 1.3.1 */
				// Start line: 701
				// Start offset: 0x80092FEC
				// Variables:
			// 		int oldDot; // $s3
			// 		int OldPrintOT; // $s2
			/* end block 1.3.1 */
			// End offset: 0x800932C0
			// End Line: 736
		/* end block 1.3 */
		// End offset: 0x800932C0
		// End Line: 736
	/* end block 1 */
	// End offset: 0x800932C0
	// End Line: 736

	/* begin block 2 */
		// Start line: 1394
	/* end block 2 */
	// End Line: 1395

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawCtrlSetup__Fv(void)

{
	byte bVar1;
	uchar uVar2;
	int OT;
	int OT_00;
	char *__format;
	CFont *this;
	int Y;
	uint uVar3;
	int local_30;
	RECT *local_2c;
	
	if (FeFlag != '\0') {
		DrawFlameLogo__Fv();
	}
	uVar2 = Init_ctrl_pos__Fv();
	OT = options_pad;
	if ((uVar2 != '\0') && (ctrlflag != '\0')) {
		if (ctrl_select_side == '\0') {
			PrintSelectBack__FbT0((void *)(uint)(ctrl_select_line == '\0'),&DAT_00000001);
		}
		else {
			__format = GetStr__Fi(STR_PRESS_KEY_FOR__S);
			sprintf(tempstr,__format,0);
			OT_00 = GetStrWidth__5CFontPc(&MediumFont,tempstr);
			__format = GetStr__Fi(txt_actions[(int)ctrl_select_line].txt);
			Y = GetStrWidth__5CFontPc(&MediumFont,__format);
			uVar3 = 0x100 - (OT_00 + Y);
			Y = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,Y + 0x20,0xe0,tempstr,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,
								 (uint)WHITEB);
			__format = GetStr__Fi(txt_actions[(int)ctrl_select_line].txt);
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,Y + OT_00 + 0x20,0xe0,__format,JustLeft,(RECT *)0x0,(uint)GOLDR,
								 (uint)GOLDG,(uint)GOLDB);
		}
		if ((&_spselflag2)[OT] == (TASK *)0x0) {
			OT = SetOTpos__6Dialogi(&CtrlBack,0x102);
			uVar2 = main_ctrl_setup__Fv();
			if (uVar2 != '\0') {
				this = &MediumFont;
				OT_00 = SetOTpos__5CFonti(&MediumFont,0x104);
				SetBorder__6Dialogi(&CtrlBack,0x28);
				SetRGB__6DialogUcUcUc(&CtrlBack,BORDERR,BORDERG,BORDERB);
				if (FeFlag == '\0') {
					CtrlRect.w = 0x119;
					CtrlRect.x = 0x10;
					CtrlRect.y = 0x10;
					CtrlRect.h = 0x10;
					Back__6Dialogiiii(&CtrlBack,0x10,0x20,0x119,0x10);
					__format = GetStr__Fi(STR_CONTROLLER_SETUP);
					Y = 0x1c;
					local_2c = &CtrlRect;
					bVar1 = GOLDR;
					bVar1 = GOLDG;
					bVar1 = GOLDB;
				}
				else {
					__format = GetStr__Fi(STR_CONTROLLER_SETUP);
					this = &LargeFont;
					Y = 0x2e;
					local_2c = (RECT *)0x0;
					bVar1 = BLUER;
					bVar1 = BLUEG;
					bVar1 = BLUEB;
				}
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(this,0,Y,__format,JustCentre,local_2c,(uint)bVar1,(uint)bVar1,(uint)bVar1);
				Back__6Dialogiiii(&CtrlBack,0x10,0x34,0x119,0x8e);
				Y = 0;
				do {
					CtrlRect.x = 0x10;
					CtrlRect.y = 0x34;
					CtrlRect.w = 0x119;
					CtrlRect.h = 0x8e;
					if (FeFlag == '\0') {
						__format = plr[options_pad]._pName;
					}
					else {
						__format = GetStr__Fi(options_pad | 0x2e6);
					}
					strcpy(tempstr,__format);
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,0,0xc,tempstr,JustCentre,&CtrlRect,0xc,0x32,0xff);
					if (Y == (int)ctrl_select_line) {
						local_30 = 3;
					}
					else {
						local_30 = 0;
					}
					PrintCtrlString__FiiUcic(0,(Y - toppos) * 0xc + 0x20,'\x01',Y,local_30);
					Y = Y + 1;
				} while (Y < 0x13);
				SetOTpos__6Dialogi(&CtrlBack,OT);
				SetOTpos__5CFonti(&MediumFont,OT_00);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.ctrlflag()
 // line 737, offset 0x800932e4
	/* begin block 1 */
		// Start line: 738
		// Start offset: 0x800932E4
	/* end block 1 */
	// End offset: 0x800932FC
	// End Line: 738

	/* begin block 2 */
		// Start line: 1551
	/* end block 2 */
	// End Line: 1552

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_ctrlflag(void)

{
	___6Dialog(&CtrlBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.ctrlflag()
 // line 737, offset 0x8009330c
	/* begin block 1 */
		// Start line: 738
		// Start offset: 0x8009330C
	/* end block 1 */
	// End offset: 0x80093324
	// End Line: 738

	/* begin block 2 */
		// Start line: 1551
	/* end block 2 */
	// End Line: 1552

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_ctrlflag(void)

{
	__6Dialog(&CtrlBack);
	return;
}





