#include "THISDUST.H"
#include "TONY.H"


// decompiled code
// original method signature: 
// void /*$ra*/ stub__FPcPv(char *e /*$a0*/, void *argptr /*$a1*/)
 // line 93, offset 0x80090f5c
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x80090F5C
	/* end block 1 */
	// End offset: 0x80090F5C
	// End Line: 94

	/* begin block 2 */
		// Start line: 187
	/* end block 2 */
	// End Line: 188

void stub__FPcPv(char *e,void *argptr)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ new_eprint__FPcT0i(char *Text /*$a3*/, char *File /*$a1*/, int Line /*$a2*/)
 // line 97, offset 0x80090f64
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80090F64
	/* end block 1 */
	// End offset: 0x80090F88
	// End Line: 100

	/* begin block 2 */
		// Start line: 194
	/* end block 2 */
	// End Line: 195

void new_eprint__FPcT0i(char *Text,char *File,int Line)

{
	printf("File:%s Line:%d\t%s\n",File,Line,Text);
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TonysGameTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 103, offset 0x80090f98
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x80090F98
	/* end block 1 */
	// End offset: 0x80091004
	// End Line: 112

	/* begin block 2 */
		// Start line: 206
	/* end block 2 */
	// End Line: 207

void TonysGameTask__FP4TASK(TASK *T)

{
	do {
		if (moo_moo == 1) {
			SetLightFX__FiisssUcUcUc((int)plr[0]._px,(int)plr[0]._py,0xa00,0xa00,0xa00,0x40,0x40,0x40);
			moo_moo = 0;
		}
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAmbientLight__Fv()
 // line 116, offset 0x80091020
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x80091020
	/* end block 1 */
	// End offset: 0x8009109C
	// End Line: 137

	/* begin block 2 */
		// Start line: 237
	/* end block 2 */
	// End Line: 238

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetAmbientLight__Fv(void)

{
	restore_b = 0x20;
	if (leveltype == '\0') {
		restore_b = 0x80;
		if (daylight == '\0') {
			restore_r = 0xe;
			restore_g = 0xc;
			restore_b = 0x10;
		}
		else {
			restore_r = 0x80;
			restore_g = 0x80;
		}
	}
	else {
		restore_r = 0x20;
		restore_g = 0x20;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ print_demo_task__FP4TASK(struct TASK *T /*$a0*/)
 // line 153, offset 0x800910a4
	/* begin block 1 */
		// Start line: 154
		// Start offset: 0x800910A4

		/* begin block 1.1 */
			// Start line: 155
			// Start offset: 0x800910C8

			/* begin block 1.1.1 */
				// Start line: 160
				// Start offset: 0x80091134
				// Variables:
			// 		int x; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80091150
			// End Line: 161
		/* end block 1.1 */
		// End offset: 0x80091150
		// End Line: 163
	/* end block 1 */
	// End offset: 0x8009128C
	// End Line: 196

	/* begin block 2 */
		// Start line: 309
	/* end block 2 */
	// End Line: 310

void print_demo_task__FP4TASK(TASK *T)

{
	byte bVar1;
	uchar uVar2;
	char *pcVar3;
	void *pvVar4;
	int iVar5;
	uint uVar6;
	
	while (demo_finish == 0) {
		uVar2 = demo_flash + '\x01';
		bVar1 = demo_flash & 8;
		demo_flash = uVar2;
		if (bVar1 != 0) {
			demo_flash = uVar2;
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0x88,0x28,&DAT_8012aa58,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,
								 (uint)WHITEG);
		}
		iVar5 = 0x3f;
		pcVar3 = plr[0]._pSplLvl + 0x3f;
		do {
			*pcVar3 = 'd';
			iVar5 = iVar5 + -1;
			pcVar3 = pcVar3 + -1;
		} while (-1 < iVar5);
		uVar6 = (uint)demo_which;
		plr[0]._pRSpell =
				 ZEXT14(*(byte *)((int)demolevel +
												 (uVar6 - (((uint)((ulonglong)uVar6 * 0xcccccccd >> 0x20) & 0xfffffffc) +
																	uVar6 / 5) & 0xff) * 4 + 1));
		plr[0]._pMemSpells._0_4_ = 0xffffffff;
		plr[0]._pMemSpells._4_4_ = 0xffffffff;
		plr[0]._pStrength = -0x600;
		plr[0]._pBaseStr = -0x600;
		plr[0]._pRSplType = '\x01';
		plr[0]._pLevel = '2';
		plr[0]._pInvincible = '\x01';
		allspellsflag = &DAT_00000001;
		TSK_Sleep(1);
	}
	pvVar4 = PaletteFadeOut__Fi(8);
	if (pvVar4 == (void *)0x0) {
		DBG_SendMessage("FADE OUT - MISSED %s %d");
	}
	else {
		while (pvVar4 = GetFadeState__Fv(), pvVar4 != (void *)0x0) {
			TSK_Sleep(1);
		}
	}
	PauseMode = '\x01';
	demo_fade_finished = '\x01';
	GLUE_SuspendGame__Fv();
	GLUE_SetFinished__Fb(&DAT_00000001);
	MAIN_RestartGameTask__Fv();
	TSK_Sleep(3);
	GLUE_ResumeGame__Fv();
	PlayDemoFlag = '\0';
	demo_pad_time = 0;
	demo_finish = 0;
	SetWalkStyle__Fii(0,old_val);
	RestoreDemoKeys__FPi(buff);
	plr[0]._pInvincible = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TonysDummyPoll__Fv()
 // line 199, offset 0x800912a8
	/* begin block 1 */
		// Start line: 200
		// Start offset: 0x800912A8
	/* end block 1 */
	// End offset: 0x800912BC
	// End Line: 202

	/* begin block 2 */
		// Start line: 420
	/* end block 2 */
	// End Line: 421

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TonysDummyPoll__Fv(void)

{
	DrawSync(0);
	trap(0x400);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ load_demo_pad_data__FUl(unsigned long demo_num /*$s0*/)
 // line 205, offset 0x800912cc
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x800912CC
		// Variables:
	// 		struct FileIO *Fs; // $a0
	/* end block 1 */
	// End offset: 0x80091318
	// End Line: 213

	/* begin block 2 */
		// Start line: 432
	/* end block 2 */
	// End Line: 433

void load_demo_pad_data__FUl(ulong demo_num)

{
	FileIO *this;
	
	this = SYSI_GetFs__Fv();
	"DEMOPAD0.DAT"[7] = (char)demo_num + '0';
	if (9 < demo_num) {
		"DEMOPAD0.DAT"[7] = (char)demo_num + '7';
	}
										/* WARNING: Read-only address (ram,0x80120a43) is written */
	ReadAtAddr__6FileIOPCcPUci(this,"DEMOPAD0.DAT",demo_buffer,-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ save_demo_pad_data__FUl(unsigned long demo_num /*$s0*/)
 // line 216, offset 0x8009132c
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x8009132C
		// Variables:
	// 		struct FileIO *Fs; // $a0
	/* end block 1 */
	// End offset: 0x80091378
	// End Line: 224

	/* begin block 2 */
		// Start line: 454
	/* end block 2 */
	// End Line: 455

void save_demo_pad_data__FUl(ulong demo_num)

{
	FileIO *this;
	
	this = SYSI_GetFs__Fv();
	"DEMOPAD0.DAT"[7] = (char)demo_num + '0';
	if (9 < demo_num) {
		"DEMOPAD0.DAT"[7] = (char)demo_num + '7';
	}
										/* WARNING: Read-only address (ram,0x80120a43) is written */
	Save__6FileIOPCcPUci(this,"DEMOPAD0.DAT",demo_buffer,900);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_pad_record_play__Fi(int level /*$s0*/)
 // line 235, offset 0x8009138c
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x8009138C
	/* end block 1 */
	// End offset: 0x800913EC
	// End Line: 247

	/* begin block 2 */
		// Start line: 493
	/* end block 2 */
	// End Line: 494

void set_pad_record_play__Fi(int level)

{
	if (demo_record_load == 0) {
		load_demo_pad_data__FUl(level);
	}
	demo_fade_finished = '\0';
	demo_finish = 0;
	demo_pad_count = 0;
	demo_pad_time = 899;
	demo_level = level;
	DemoTask = TSK_AddTask(0x4000,print_demo_task__FP4TASK,0x1000,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ start_demo__Fv()
 // line 251, offset 0x80091400
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x80091400
	/* end block 1 */
	// End offset: 0x8009148C
	// End Line: 260

	/* begin block 2 */
		// Start line: 535
	/* end block 2 */
	// End Line: 536

/* WARNING: Unknown calling convention yet parameter storage is locked */

void start_demo__Fv(void)

{
	uint uVar1;
	
	old_val = SetWalkStyle__Fii(0,1);
	SetDemoKeys__FPi(buff);
	CreatePlayer__Fic(0,'\0');
	uVar1 = (uint)demo_which;
	level_record = ZEXT14(*(byte *)(demolevel +
																 (uVar1 - (((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) &
																					 0xfffffffc) + uVar1 / 5) & 0xff)));
	set_pad_record_play__Fi(level_record);
	GLUE_SetFinished__Fb(&DAT_00000001);
	PauseMode = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ tony__Fv()
 // line 263, offset 0x8009149c
	/* begin block 1 */
		// Start line: 264
		// Start offset: 0x8009149C
	/* end block 1 */
	// End offset: 0x800914C4
	// End Line: 266

	/* begin block 2 */
		// Start line: 561
	/* end block 2 */
	// End Line: 562

/* WARNING: Unknown calling convention yet parameter storage is locked */

void tony__Fv(void)

{
	DBG_SetErrorFunc(new_eprint__FPcT0i);
	DBG_SetPollRoutine(TonysDummyPoll__Fv);
	return;
}





