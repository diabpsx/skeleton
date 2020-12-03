#include "THISDUST.H"
#include "CTRL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SetDemoKeys__FPi(int *buffer /*$s1*/)
 // line 304, offset 0x8009c548
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x8009C548
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s0

		/* begin block 1.1 */
			// Start line: 305
			// Start offset: 0x8009C548
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x8009C5B0
		// End Line: 314
	/* end block 1 */
	// End offset: 0x8009C608
	// End Line: 321

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

void SetDemoKeys__FPi(int *buffer)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	
	PostGamePad__Fiiii(0xb,0,(int)&txt_actions,0);
	iVar3 = 0;
	piVar2 = &KEY_ASSIGNS_ARRAY_800cc41c[5].combo_val;
	iVar1 = -0x7ff33b94;
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
	PostGamePad__Fiiii(9,0,(int)&txt_actions,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestoreDemoKeys__FPi(int *buffer /*$s1*/)
 // line 324, offset 0x8009c620
	/* begin block 1 */
		// Start line: 325
		// Start offset: 0x8009C620
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s0

		/* begin block 1.1 */
			// Start line: 325
			// Start offset: 0x8009C620
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8009C680
		// End Line: 334
	/* end block 1 */
	// End offset: 0x8009C698
	// End Line: 335

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

void RestoreDemoKeys__FPi(int *buffer)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	
	PostGamePad__Fiiii(0xb,0,(int)&txt_actions,0);
	iVar1 = 0;
	piVar2 = &KEY_ASSIGNS_ARRAY_800cc41c[5].combo_val;
	do {
		piVar3 = buffer + 1;
		iVar1 = iVar1 + 1;
		piVar2[-2] = *buffer;
		buffer = buffer + 2;
		*piVar2 = *piVar3;
		piVar2 = piVar2 + 4;
	} while (iVar1 < 4);
	PostGamePad__Fiiii(9,0,(int)&txt_actions,0);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ get_action_str__Fii(int pval /*$a3*/, int combo /*$a1*/)
 // line 338, offset 0x8009c6b0
	/* begin block 1 */
		// Start line: 339
		// Start offset: 0x8009C6B0
		// Variables:
	// 		struct KEY_ASSIGNS *ac; // $a0

		/* begin block 1.1 */
			// Start line: 339
			// Start offset: 0x8009C6B0
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x8009C714
		// End Line: 355
	/* end block 1 */
	// End offset: 0x8009C718
	// End Line: 356

	/* begin block 2 */
		// Start line: 689
	/* end block 2 */
	// End Line: 690

char * get_action_str__Fii(int pval,int combo)

{
	int iVar1;
	char *pcVar2;
	int *piVar3;
	KEY_ASSIGNS *pKVar4;
	int iVar5;
	
	pKVar4 = &txt_actions;
	iVar5 = 0;
	piVar3 = &txt_actions.pad_val;
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
		if (0x13 < iVar5) {
			return (char *)0x0;
		}
	}
	pcVar2 = GetStr__Fi(pKVar4->txt);
	return pcVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ get_key_pad__Fi(int n /*$a0*/)
 // line 360, offset 0x8009c728
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x8009C728
		// Variables:
	// 		int i; // $v1
	// 		struct pad_assigns *pa; // $a1
	/* end block 1 */
	// End offset: 0x8009C758
	// End Line: 371

	/* begin block 2 */
		// Start line: 735
	/* end block 2 */
	// End Line: 736

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
// void * /*$ra*/ checkvalid__Fv()
 // line 375, offset 0x8009c760
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x8009C760
		// Variables:
	// 		int start; // $a2
	// 		int end; // $a1

		/* begin block 1.1 */
			// Start line: 378
			// Start offset: 0x8009C760
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8009C7B8
		// End Line: 389
	/* end block 1 */
	// End offset: 0x8009C7BC
	// End Line: 391

	/* begin block 2 */
		// Start line: 765
	/* end block 2 */
	// End Line: 766

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * checkvalid__Fv(void)

{
	int iVar1;
	int *piVar2;
	
	iVar1 = 0;
	piVar2 = &txt_actions.combo_val;
	while ((((iVar1 < 6 || (8 < iVar1)) || (piVar2[-2] != 0)) || (*piVar2 != 0))) {
		iVar1 = iVar1 + 1;
		piVar2 = piVar2 + 4;
		if (0x13 < iVar1) {
			return &DAT_00000001;
		}
	}
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ RemoveCtrlScreen__Fv()
 // line 396, offset 0x8009c7c4
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x8009C7C4
	/* end block 1 */
	// End offset: 0x8009C810
	// End Line: 406

	/* begin block 2 */
		// Start line: 805
	/* end block 2 */
	// End Line: 806

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * RemoveCtrlScreen__Fv(void)

{
	undefined *puVar1;
	
	puVar1 = (undefined *)checkvalid__Fv();
	if (puVar1 == &DAT_00000001) {
		PostGamePad__Fiiii(9,options_pad,(int)&txt_actions,0);
		ctrlflag = '\0';
		ctrl_select_line = '\0';
		cmenu = 0;
	}
	return (void *)(uint)(puVar1 == &DAT_00000001);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ Init_ctrl_pos__Fv()
 // line 413, offset 0x8009c820
	/* begin block 1 */
		// Start line: 414
		// Start offset: 0x8009C820
	/* end block 1 */
	// End offset: 0x8009C8C4
	// End Line: 431

	/* begin block 2 */
		// Start line: 843
	/* end block 2 */
	// End Line: 844

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
		SetBorder__6Dialogi(&CtrlBack,0x12);
		SetRGB__6DialogUcUcUc(&CtrlBack,BORDERR,BORDERG,BORDERB);
		ctrl_select_line = '\0';
		ctrlflag = '\x01';
		PostGamePad__Fiiii(0xb,options_pad,(int)&txt_actions,0);
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// int /*$ra*/ remove_padval__Fi(int p /*$a0*/)
 // line 434, offset 0x8009c8d8
	/* begin block 1 */
		// Start line: 435
		// Start offset: 0x8009C8D8

		/* begin block 1.1 */
			// Start line: 438
			// Start offset: 0x8009C8D8
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8009C90C
		// End Line: 446
	/* end block 1 */
	// End offset: 0x8009C910
	// End Line: 447

	/* begin block 2 */
		// Start line: 892
	/* end block 2 */
	// End Line: 893

int remove_padval__Fi(int p)

{
	int *piVar1;
	int iVar2;
	
	iVar2 = 0;
	piVar1 = &txt_actions.pad_val;
	do {
		if (*piVar1 == p) {
			*piVar1 = 0;
			return iVar2;
		}
		iVar2 = iVar2 + 1;
		piVar1 = piVar1 + 4;
	} while (iVar2 < 0x14);
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ remove_comboval__Fib(int p /*$a0*/, void * all /*$a1*/)
 // line 450, offset 0x8009c918
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x8009C918
		// Variables:
	// 		int n; // $a3

		/* begin block 1.1 */
			// Start line: 452
			// Start offset: 0x8009C918
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x8009C958
		// End Line: 463
	/* end block 1 */
	// End offset: 0x8009C958
	// End Line: 464

	/* begin block 2 */
		// Start line: 922
	/* end block 2 */
	// End Line: 923

int remove_comboval__Fib(int p,void *all)

{
	int *piVar1;
	int iVar2;
	
	iVar2 = 0;
	piVar1 = &txt_actions.combo_val;
	do {
		if ((*piVar1 == p) || (all != (void *)0x0)) {
			*piVar1 = 0;
		}
		iVar2 = iVar2 + 1;
		piVar1 = piVar1 + 4;
	} while (iVar2 < 0x14);
	return -1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ set_buttons__Fii(int cline /*$s3*/, int n /*$s1*/)
 // line 468, offset 0x8009c960
	/* begin block 1 */
		// Start line: 469
		// Start offset: 0x8009C960
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s0
	// 		int cval; // $v1
	// 		int i; // $a0
	// 		int p; // $s2
	/* end block 1 */
	// End offset: 0x8009CAB8
	// End Line: 518

	/* begin block 2 */
		// Start line: 957
	/* end block 2 */
	// End Line: 958

uchar set_buttons__Fii(int cline,int n)

{
	int iVar1;
	int iVar2;
	
	if ((n & ~KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val) == 0) {
		iVar2 = (&txt_actions)[cline].combo_val;
	}
	else {
		iVar2 = (&txt_actions)[cline].pad_val;
	}
	if (((n & KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val) == n) && ((&txt_actions)[cline].txt != 0xc6)) {
		return '\0';
	}
	if (ckeyheld == '\0') {
		if ((&txt_actions)[cline].pad_val == n) {
			(&txt_actions)[cline].pad_val = 0;
			return '\x01';
		}
		iVar1 = remove_padval__Fi(n);
		(&txt_actions)[cline].pad_val = n;
		if (iVar1 != -1) {
			(&txt_actions)[iVar1].pad_val = iVar2;
		}
		(&txt_actions)[cline].combo_val = 0;
		if (cline == 4) {
			remove_comboval__Fib(n,(void *)0x0);
		}
	}
	else {
		waitnomore = &DAT_00000001;
		if ((&txt_actions)[cline].combo_val == n) {
			(&txt_actions)[cline].combo_val = 0;
			return '\x01';
		}
		iVar1 = remove_comboval__Fib(n,(void *)0x0);
		if (n != KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val) {
			(&txt_actions)[cline].combo_val = n;
		}
		(&txt_actions)[cline].pad_val = 0;
		if (iVar1 != -1) {
			(&txt_actions)[iVar1].combo_val = iVar2;
		}
	}
	if (KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val == 0) {
		remove_comboval__Fib(0,&DAT_00000001);
		return '\x01';
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ restore_controller_settings__F8CTRL_SET(enum CTRL_SET s /*$a0*/)
 // line 521, offset 0x8009cad8
	/* begin block 1 */
		// Start line: 522
		// Start offset: 0x8009CAD8
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $a1

		/* begin block 1.1 */
			// Start line: 523
			// Start offset: 0x8009CAD8

			/* begin block 1.1.1 */
				// Start line: 526
				// Start offset: 0x8009CAF8

				/* begin block 1.1.1.1 */
					// Start line: 528
					// Start offset: 0x8009CAF8
				/* end block 1.1.1.1 */
				// End offset: 0x8009CB34
				// End Line: 533

				/* begin block 1.1.1.2 */
					// Start line: 536
					// Start offset: 0x8009CB3C
				/* end block 1.1.1.2 */
				// End offset: 0x8009CB74
				// End Line: 541
			/* end block 1.1.1 */
			// End offset: 0x8009CB74
			// End Line: 543
		/* end block 1.1 */
		// End offset: 0x8009CB74
		// End Line: 543
	/* end block 1 */
	// End offset: 0x8009CB74
	// End Line: 543

	/* begin block 2 */
		// Start line: 1071
	/* end block 2 */
	// End Line: 1072

void restore_controller_settings__F8CTRL_SET(CTRL_SET s)

{
	int *piVar1;
	int iVar2;
	int *piVar3;
	
	if (s == CTRL_BEGINNER) {
		iVar2 = 0;
		piVar3 = &txt_actions.combo_val;
		do {
			piVar3[-2] = *(int *)((int)&BeginnerDefaults + iVar2);
			piVar1 = (int *)((int)&INT_800cc5f0 + iVar2);
			iVar2 = iVar2 + 8;
			*piVar3 = *piVar1;
			piVar3 = piVar3 + 4;
		} while (iVar2 < 0xa0);
	}
	else {
		iVar2 = 0;
		if (s == CTRL_ADVANCED) {
			piVar3 = &txt_actions.combo_val;
			do {
				piVar3[-2] = *(int *)((int)&AdvancedDefaults + iVar2);
				piVar1 = (int *)((int)&INT_800cc550 + iVar2);
				iVar2 = iVar2 + 8;
				*piVar3 = *piVar1;
				piVar3 = piVar3 + 4;
			} while (iVar2 < 0xa0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ only_one_button__Fi(int p /*$a0*/)
 // line 551, offset 0x8009cb7c
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x8009CB7C
		// Variables:
	// 		int hand; // $v1
	// 		int count; // $a1
	/* end block 1 */
	// End offset: 0x8009CBA0
	// End Line: 563

	/* begin block 2 */
		// Start line: 1135
	/* end block 2 */
	// End Line: 1136

void * only_one_button__Fi(int p)

{
	uint uVar1;
	int iVar2;
	
	uVar1 = 1;
	iVar2 = 0;
	do {
		if ((uVar1 & p) != 0) {
			iVar2 = iVar2 + 1;
		}
		uVar1 = uVar1 << 1;
	} while (uVar1 != 0);
	return (void *)(uint)(iVar2 < 2);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ main_ctrl_setup__Fv()
 // line 587, offset 0x8009cba8
	/* begin block 1 */
		// Start line: 588
		// Start offset: 0x8009CBA8
		// Variables:
	// 		struct CPad *Pad; // $s1
	// 		int lv; // $s0
	/* end block 1 */
	// End offset: 0x8009D068
	// End Line: 787

	/* begin block 2 */
		// Start line: 1206
	/* end block 2 */
	// End Line: 1207

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar main_ctrl_setup__Fv(void)

{
	byte bVar1;
	char cVar2;
	uchar uVar3;
	ushort tick;
	CPad *this;
	int iVar4;
	undefined *puVar5;
	void *pvVar6;
	int iVar7;
	_135fake psfx;
	
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (FeFlag == '\0') {
		tick = 5;
	}
	else {
		tick = 8;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,3);
	tick = GetCur__C4CPad(this);
	if (KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val == 0) {
		waitnomore = (void *)0x0;
		ckeyheld = '\0';
	}
	if (((uint)tick & KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val) == 0) {
		tick = GetUp__C4CPad(this);
		if (((uint)tick & KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val) != 0) {
			ckeyheld = '\0';
			waitnomore = (void *)0x0;
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
		if ((*(int *)((int)&txt_actions.txt + ((int)((uint)bVar1 << 0x18) >> 0x14)) == 0x52c) &&
			 (ctrl_select_line = cVar2, '\x04' < cVar2)) {
			toppos = toppos + -1;
			ctrl_select_line = cVar2;
		}
		if (ctrl_select_line < '\0') {
			ctrl_select_line = ctrl_select_line + '\x14';
		}
		if (toppos != 0) {
			toppos = toppos + -1;
		}
		if (ctrl_select_line == '\x13') {
			toppos = 0x10;
		}
	}
	tick = GetTick__C4CPad(this);
	if ((tick & 2) != 0) {
		PlaySFX__Fi(IS_TITLEMOV);
		iVar4 = ((uint)(byte)ctrl_select_line + 1) * 0x1000000;
		iVar7 = iVar4 >> 0x18;
		iVar7 = iVar7 + ((iVar7 / 0x14 + (iVar7 >> 0x1f)) - (iVar4 >> 0x1f)) * -0x14;
		ctrl_select_line = (char)iVar7;
		if (*(int *)((int)&txt_actions.txt + (iVar7 * 0x1000000 >> 0x14)) == 0x52c) {
			ctrl_select_line = (char)(iVar7 + 1);
			if (4 < (iVar7 + 1) * 0x1000000 >> 0x18) {
				toppos = toppos + 1;
				goto LAB_8009cdc0;
			}
		}
		else {
LAB_8009cdc0:
			if ('\x04' < ctrl_select_line) {
				toppos = toppos + 1;
				goto LAB_8009ce00;
			}
		}
		if (ctrl_select_line == '\0') {
			toppos = 0;
		}
	}
LAB_8009ce00:
	tick = GetDown__C4CPad(this);
	if (((tick & 0x100) == 0) || (ctrl_select_side != '\0')) {
		tick = GetDown__C4CPad(this);
		if ((tick & 4) != 0) {
			iVar4 = (int)ctrl_select_line;
			iVar7 = (&txt_actions)[iVar4].txt;
			if ((iVar7 == 0xc3) || (iVar7 == 0x2a6)) {
				(&txt_actions)[iVar4].pad_val = (&txt_actions)[iVar4].pad_val ^ 1;
				psfx = IS_TITLSLCT;
				goto LAB_8009d05c;
			}
			if (iVar7 == 0x3bc) {
				return '\x01';
			}
			if (iVar7 == 0x3bd) {
				return '\x01';
			}
			PlaySFX__Fi(IS_TITLEMOV);
			if (ctrl_select_side != '\0') {
				ctrl_select_side = '\0';
			}
		}
		tick = GetDown__C4CPad(this);
		if ((tick & 8) != 0) {
			iVar4 = (int)ctrl_select_line;
			iVar7 = (&txt_actions)[iVar4].txt;
			if ((iVar7 == 0xc3) || (iVar7 == 0x2a6)) {
				(&txt_actions)[iVar4].pad_val = (&txt_actions)[iVar4].pad_val ^ 1;
				psfx = IS_TITLSLCT;
				goto LAB_8009d05c;
			}
			if (iVar7 == 0x3bc) {
				return '\x01';
			}
			if (iVar7 == 0x3bd) {
				return '\x01';
			}
			PlaySFX__Fi(IS_TITLEMOV);
			if (ctrl_select_side == '\0') {
				ctrl_select_side = '\x01';
			}
		}
		tick = GetDown__C4CPad(this);
		if ((tick & 0x40) != 0) {
			if ((&txt_actions)[(int)ctrl_select_line].txt == 0x3bc) {
				PlaySFX__Fi(IS_TITLSLCT);
				restore_controller_settings__F8CTRL_SET(CTRL_ADVANCED);
				return '\x01';
			}
			if ((&txt_actions)[(int)ctrl_select_line].txt == 0x3bd) {
				PlaySFX__Fi(IS_TITLSLCT);
				restore_controller_settings__F8CTRL_SET(CTRL_BEGINNER);
				return '\x01';
			}
		}
		if (ctrl_select_line < '\x04') {
			ctrl_select_side = '\0';
		}
		if (ctrl_select_side == '\0') {
			return '\x01';
		}
		if (ctrl_select_line < '\x02') {
			return '\x01';
		}
		if (ctrlflag == '\0') {
			return '\x01';
		}
		tick = GetDown__C4CPad(this);
		if ((tick & 0x3fc0) == 0) {
			return '\x01';
		}
		pvVar6 = only_one_button__Fi((uint)tick & 0x3fc0);
		if (pvVar6 == (void *)0x0) {
			return '\x01';
		}
		uVar3 = set_buttons__Fii((int)ctrl_select_line,(uint)tick & 0x3fc0);
		psfx = IS_TITLSLCT;
		if (uVar3 == '\0') {
			return '\x01';
		}
	}
	else {
		puVar5 = (undefined *)RemoveCtrlScreen__Fv();
		psfx = IS_TITERR;
		if (puVar5 == &DAT_00000001) {
			PlaySFX__Fi(IS_TITLSLCT);
			return '\0';
		}
	}
LAB_8009d05c:
	PlaySFX__Fi(psfx);
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintCtrlString__FiiUcic(int x /*$a0*/, int y /*stack -64*/, unsigned char cjustflag /*$a2*/, int str_num /*$s4*/, int col /*stack 16*/)
 // line 793, offset 0x8009d084
	/* begin block 1 */
		// Start line: 794
		// Start offset: 0x8009D084
		// Variables:
	// 		struct KEY_ASSIGNS *ta; // $s1
	// 		int i; // $v0
	// 		unsigned char r; // stack offset -56
	// 		unsigned char g; // stack offset -48
	// 		unsigned char b; // $fp
	// 		int str; // $s2
	// 		int len; // $s5

		/* begin block 1.1 */
			// Start line: 889
			// Start offset: 0x8009D468

			/* begin block 1.1.1 */
				// Start line: 890
				// Start offset: 0x8009D478
				// Variables:
			// 		int x1; // $s0
			// 		int x2; // $s7
			// 		int nlen; // $a0
			// 		int otpos; // $s6
			/* end block 1.1.1 */
			// End offset: 0x8009D54C
			// End Line: 909
		/* end block 1.1 */
		// End offset: 0x8009D54C
		// End Line: 909
	/* end block 1 */
	// End offset: 0x8009D5A4
	// End Line: 913

	/* begin block 2 */
		// Start line: 1625
	/* end block 2 */
	// End Line: 1626

void PrintCtrlString__FiiUcic(int x,int y,uchar cjustflag,int str_num,int col)

{
	char cVar1;
	char *__src;
	int iVar2;
	int x_00;
	int iVar3;
	text_strs StrId;
	uint B;
	byte local_38;
	byte local_30;
	
	local_38 = 0;
	local_30 = 0;
	StrId = (&txt_actions)[str_num].txt;
	B = 0;
	if (0x82 < y - 0x18U) {
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
	__src = GetStr__Fi(StrId);
	strcpy(tempstr,__src);
	iVar2 = GetStrWidth__5CFontPc(&MediumFont,tempstr);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,6,y + -4,tempstr,JustLeft,&CtrlRect,(uint)local_38,(uint)local_30,B);
	if (StrId == STR_MOVEMENT_678) {
		StrId = STR_RELATIVE_856;
		if ((&txt_actions)[str_num].pad_val != 0) {
			StrId = STR_ABSOLUTE_4;
		}
	}
	else {
		if (StrId != STR_COMBO_BUTTON_MENU_195) {
			tempstr[0] = '\0';
			if ((StrId == STR_COMBO_BUTTON_198) || (waitnomore != (void *)0x0)) {
code_r0x8009d338:
				if ((KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val != 0) && ((&txt_actions)[str_num].combo_val != 0)
					 ) {
					x_00 = get_key_pad__Fi(KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val);
					cVar1 = pad_txt[x_00].font_num;
					x_00 = get_key_pad__Fi((&txt_actions)[str_num].combo_val);
					sprintf(tempstr,"%c + %c",(int)cVar1,(int)pad_txt[x_00].font_num);
					goto LAB_8009d468;
				}
			}
			else {
				if (KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val != 0) {
					if (((ctrl_select_side == '\x01') && (str_num == (int)ctrl_select_line)) &&
						 (ckeyheld != '\0')) {
						x_00 = get_key_pad__Fi(KEY_ASSIGNS_ARRAY_800cc41c[3].pad_val);
						sprintf(tempstr,&DAT_8011b070,(int)pad_txt[x_00].font_num);
						goto LAB_8009d468;
					}
					goto code_r0x8009d338;
				}
			}
			if ((str_num == 0) || ((&txt_actions)[str_num].pad_val == 0)) {
				if ((1 < StrId + ~STR_SERPENT_S_955) && (StrId != STR___________1324)) {
					__src = GetStr__Fi(STR_DISABLED_259);
					sprintf(tempstr,__src);
				}
			}
			else {
				x_00 = get_key_pad__Fi((&txt_actions)[str_num].pad_val);
				if (pad_txt[x_00].font_num != '\0') {
					x_00 = get_key_pad__Fi((&txt_actions)[str_num].pad_val);
					sprintf(tempstr,(char *)&PTR_DAT_8011b080,(int)pad_txt[x_00].font_num);
				}
			}
			goto LAB_8009d468;
		}
		StrId = STR_DISABLED_196;
		if ((&txt_actions)[str_num].pad_val != 0) {
			StrId = STR_ENABLED_197;
		}
	}
	__src = GetStr__Fi(StrId);
	strcpy(tempstr,__src);
LAB_8009d468:
	if (str_num == (int)ctrl_select_line) {
		x_00 = GetStrWidth__5CFontPc(&MediumFont,tempstr);
		iVar3 = 0x13;
		if (ctrl_select_side == '\x01') {
			iVar3 = 0x126;
			x_00 = 0x118 - x_00;
		}
		else {
			x_00 = iVar2 + 0x18;
		}
		iVar2 = GetOverlayOtBase__7CBlocks();
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(iVar3 + -4,y + 0x2e,-0x60,'@',0xf0,0x20,0x40,0,1,iVar2 + 4,1,0,8);
		DrawSpinner__FiiUcUcUciiibiT8T8Uc(x_00,y + 0x2e,-0x60,'@',0xf0,0x20,0x40,0,1,iVar2 + 4,1,0,8);
	}
	strcat(tempstr,(char *)&PTR_DAT_8011b084);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,y + -4,tempstr,JustRight,&CtrlRect,(uint)local_38,(uint)local_30,B);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCtrlSetup__Fv()
 // line 918, offset 0x8009d5d8
	/* begin block 1 */
		// Start line: 919
		// Start offset: 0x8009D5D8
		// Variables:
	// 		int i; // $s0
	// 		int pnum; // $v0

		/* begin block 1.1 */
			// Start line: 933
			// Start offset: 0x8009D618

			/* begin block 1.1.1 */
				// Start line: 939
				// Start offset: 0x8009D640
				// Variables:
			// 		int otpos; // $s0
			// 		int oldDot; // $s5
			// 		int OldPrintOT; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 980
					// Start offset: 0x8009D928

					/* begin block 1.1.1.1.1 */
						// Start line: 988
						// Start offset: 0x8009D96C
						// Variables:
					// 		int lena; // $s1
					// 		int len; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009DA88
					// End Line: 994
				/* end block 1.1.1.1 */
				// End offset: 0x8009DA88
				// End Line: 994
			/* end block 1.1.1 */
			// End offset: 0x8009DAB0
			// End Line: 1001
		/* end block 1.1 */
		// End offset: 0x8009DAB0
		// End Line: 1001
	/* end block 1 */
	// End offset: 0x8009DAB0
	// End Line: 1001

	/* begin block 2 */
		// Start line: 1908
	/* end block 2 */
	// End Line: 1909

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawCtrlSetup__Fv(void)

{
	byte bVar1;
	uchar uVar2;
	int OT;
	int OT_00;
	char *Str;
	CFont *this;
	int Y;
	uint uVar3;
	int local_38;
	RECT *local_34;
	
	uVar2 = Init_ctrl_pos__Fv();
	if (((uVar2 != '\0') && (ctrlflag != '\0')) && ((&_spselflag2)[options_pad] == (TASK *)0x0)) {
		OT = GetOverlayOtBase__7CBlocks();
		OT_00 = SetOTpos__6Dialogi(&CtrlBack,OT);
		uVar2 = main_ctrl_setup__Fv();
		if (uVar2 != '\0') {
			this = &MediumFont;
			OT = SetOTpos__5CFonti(&MediumFont,OT + 1);
			SetBorder__6Dialogi(&CtrlBack,0x12);
			SetRGB__6DialogUcUcUc(&CtrlBack,BORDERR,BORDERG,BORDERB);
			if (FeFlag == '\0') {
				CtrlRect.y = 0x20;
				CtrlRect.w = 0x119;
				buttoncol = (void *)0x0;
				CtrlRect.x = 0x10;
				CtrlRect.h = 0x10;
				Back__6Dialogiiii(&CtrlBack,0x10,0x20,0x119,0x10);
				Str = GetStr__Fi(STR_CONTROLLER__SETUP_203);
				Y = 0xb;
				local_34 = &CtrlRect;
				bVar1 = GOLDR;
				bVar1 = GOLDG;
				bVar1 = GOLDB;
			}
			else {
				Str = GetStr__Fi(STR_CONTROLLER__SETUP_203);
				this = &LargeFont;
				Y = 0x2e;
				local_34 = (RECT *)0x0;
				bVar1 = BLUER;
				bVar1 = BLUEG;
				bVar1 = BLUEB;
			}
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(this,0,Y,Str,JustCentre,local_34,(uint)bVar1,(uint)bVar1,(uint)bVar1);
			Back__6Dialogiiii(&CtrlBack,0x10,0x34,0x119,0x9a);
			Y = 0;
			buttoncol = &DAT_00000001;
			do {
				CtrlRect.x = 0x10;
				CtrlRect.y = 0x34;
				CtrlRect.w = 0x119;
				CtrlRect.h = 0x9a;
				if (FeFlag == '\0') {
					Str = plr[options_pad]._pName;
				}
				else {
					if (options_pad == 0) {
						Str = GetStr__Fi(STR_PLAYER_1_786);
					}
					else {
						Str = GetStr__Fi(STR_PLAYER_2_787);
					}
				}
				strcpy(tempstr,Str);
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0,0xc,tempstr,JustCentre,&CtrlRect,(uint)BLUER,(uint)BLUEG,
									 (uint)BLUEB);
				if (Y == (int)ctrl_select_line) {
					local_38 = 3;
				}
				else {
					local_38 = 0;
				}
				PrintCtrlString__FiiUcic(0,(Y - toppos) * 0x10 + 0x20,'\x01',Y,local_38);
				Y = Y + 1;
			} while (Y < 0x14);
			if (ctrl_select_side == '\0') {
				if (ctrl_select_line < '\x02') {
					PrintSelectBack__FUs(0x4e6);
				}
				else {
					PrintSelectBack__FUs(0x4a0);
				}
			}
			else {
				Str = GetStr__Fi(STR_PRESS_BUTTON_FOR__S_813);
				sprintf(tempstr,Str,&PTR_DAT_8011b088);
				Y = GetStrWidth__5CFontPc(&MediumFont,tempstr);
				Str = GetStr__Fi((&txt_actions)[(int)ctrl_select_line].txt);
				local_38 = GetStrWidth__5CFontPc(&MediumFont,Str);
				uVar3 = 0x100 - (Y + local_38);
				local_38 = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,local_38 + 0x20,0xe0,tempstr,JustLeft,(RECT *)0x0,(uint)WHITER,
									 (uint)WHITEG,(uint)WHITEB);
				Str = GetStr__Fi((&txt_actions)[(int)ctrl_select_line].txt);
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,local_38 + Y + 0x20,0xe0,Str,JustLeft,(RECT *)0x0,(uint)GOLDR,
									 (uint)GOLDG,(uint)GOLDB);
			}
			buttoncol = (void *)0x0;
			SetOTpos__6Dialogi(&CtrlBack,OT_00);
			SetOTpos__5CFonti(&MediumFont,OT);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.ctrlflag()
 // line 1002, offset 0x8009dad8
	/* begin block 1 */
		// Start line: 1003
		// Start offset: 0x8009DAD8
	/* end block 1 */
	// End offset: 0x8009DAF0
	// End Line: 1003

	/* begin block 2 */
		// Start line: 2087
	/* end block 2 */
	// End Line: 2088

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_ctrlflag(void)

{
	___6Dialog(&CtrlBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.ctrlflag()
 // line 1002, offset 0x8009db00
	/* begin block 1 */
		// Start line: 1003
		// Start offset: 0x8009DB00
	/* end block 1 */
	// End offset: 0x8009DB18
	// End Line: 1003

	/* begin block 2 */
		// Start line: 2087
	/* end block 2 */
	// End Line: 2088

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_ctrlflag(void)

{
	__6Dialog(&CtrlBack);
	return;
}





