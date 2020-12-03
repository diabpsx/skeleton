#include "THISDUST.H"
#include "TONY.H"


// decompiled code
// original method signature: 
// void /*$ra*/ stub__FPcPv(char *e /*$a0*/, void *argptr /*$a1*/)
 // line 107, offset 0x8009b338
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x8009B338
	/* end block 1 */
	// End offset: 0x8009B338
	// End Line: 108

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

void stub__FPcPv(char *e,void *argptr)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ new_eprint__FPcT0i(char *Text /*$a3*/, char *File /*$a1*/, int Line /*$a2*/)
 // line 111, offset 0x8009b340
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x8009B340
	/* end block 1 */
	// End offset: 0x8009B364
	// End Line: 114

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

void new_eprint__FPcT0i(char *Text,char *File,int Line)

{
	printf("File:%s Line:%d\t%s\n",File,Line,Text);
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TonysGameTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 117, offset 0x8009b374
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x8009B374
	/* end block 1 */
	// End offset: 0x8009B3E0
	// End Line: 126

	/* begin block 2 */
		// Start line: 234
	/* end block 2 */
	// End Line: 235

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
 // line 130, offset 0x8009b3fc
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x8009B3FC
		// Variables:
	// 		int x; // $t2
	// 		int y; // $a2
	/* end block 1 */
	// End offset: 0x8009B4B4
	// End Line: 165

	/* begin block 2 */
		// Start line: 265
	/* end block 2 */
	// End Line: 266

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetAmbientLight__Fv(void)

{
	uchar *puVar1;
	uchar *puVar2;
	int iVar3;
	uchar *puVar4;
	uchar *puVar5;
	uchar *puVar6;
	int iVar7;
	
	restore_r = 0x1e;
	if (leveltype == '\0') {
		restore_r = 0x80;
	}
	iVar3 = 0;
	restore_g = restore_r;
	restore_b = restore_r;
	do {
		iVar7 = 0;
		puVar4 = dung_map_r;
		puVar5 = dung_map_g;
		puVar6 = dung_map_b;
		do {
			puVar2 = puVar6 + iVar3;
			puVar6 = puVar6 + 0x38;
			puVar1 = puVar5 + iVar3;
			puVar5 = puVar5 + 0x38;
			puVar4[iVar3] = (uchar)restore_r;
			*puVar1 = (uchar)restore_g;
			iVar7 = iVar7 + 1;
			*puVar2 = (uchar)restore_b;
			puVar4 = puVar4 + 0x38;
		} while (iVar7 < 0x38);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x38);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDemoPlayer__Fv()
 // line 170, offset 0x8009b4bc
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x8009B4BC
	/* end block 1 */
	// End offset: 0x8009B4E4
	// End Line: 175

	/* begin block 2 */
		// Start line: 350
	/* end block 2 */
	// End Line: 351

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetDemoPlayer__Fv(void)

{
	plr[0]._pHitPoints = (long)&DAT_00009600;
	plr[0]._pMaxHP = (long)&DAT_00009600;
	plr[0]._pMana = (long)&DAT_00004b00;
	plr[0]._pMaxMana = (long)&DAT_00004b00;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ print_demo_task__FP4TASK(struct TASK *T /*$a0*/)
 // line 178, offset 0x8009b4ec
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x8009B4EC

		/* begin block 1.1 */
			// Start line: 180
			// Start offset: 0x8009B538
			// Variables:
		// 		int demo_char; // $s0

			/* begin block 1.1.1 */
				// Start line: 205
				// Start offset: 0x8009B644
				// Variables:
			// 		int x; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8009B660
			// End Line: 206
		/* end block 1.1 */
		// End offset: 0x8009B660
		// End Line: 208
	/* end block 1 */
	// End offset: 0x8009B800
	// End Line: 256

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

void print_demo_task__FP4TASK(TASK *T)

{
	bool bVar1;
	byte bVar2;
	uchar uVar3;
	void *pvVar4;
	char *Str;
	int X;
	int Y;
	uint uVar5;
	uint G;
	uint R;
	
	R = (uint)WHITER;
	G = (uint)WHITEG;
	do {
		if (demo_finish != 0) {
			if (demo_finish == 2) {
				PlaySFX__Fi(IS_TITLSLCT);
			}
			music_fade__Fv();
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
			GLUE_StartGameExit__Fv();
			PlayDemoFlag = '\0';
			demo_pad_time = 0;
			demo_finish = 0;
			SetWalkStyle__Fii(0,old_val);
			RestoreDemoKeys__FPi(buff);
			SetSpeed__F9GM_SPEEDS(speedstore);
			plr[0]._pInvincible = '\0';
			return;
		}
		if (demo_load != 0) {
			SetDemoPlayer__Fv();
			demo_load = 0;
		}
		if (demo_record_load == 0) {
			bVar1 = false;
			pvVar4 = GLUE_Finished__Fv();
			if (pvVar4 == (void *)0x0) {
				pvVar4 = IsGameLoading__Fv();
				bVar1 = pvVar4 == (void *)0x0;
			}
			if (bVar1) {
				uVar3 = demo_flash + '\x01';
				bVar2 = demo_flash & 0x20;
				demo_flash = uVar3;
				if (bVar2 != 0) {
					demo_flash = uVar3;
					Str = GetStr__Fi(STR_DEMO_248);
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,0xa0,0x28,Str,JustCentre,(RECT *)0x0,R,G,G);
					Str = GetStr__Fi(STR_PRESS_START_TO_CONTINUE_814);
					X = 0xa0;
					Y = 0x36;
LAB_8009b628:
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,X,Y,Str,JustCentre,(RECT *)0x0,R,G,G);
				}
			}
			else {
				pvVar4 = IsGameLoading__Fv();
				if (pvVar4 != (void *)0x0) {
					Str = GetStr__Fi(STR_DEMO_248);
					X = 0x88;
					Y = 0x28;
					goto LAB_8009b628;
				}
			}
		}
		X = 0x3f;
		Str = plr[0]._pSplLvl + 0x3f;
		do {
			*Str = 'd';
			X = X + -1;
			Str = Str + -1;
		} while (-1 < X);
		uVar5 = (uint)demo_which;
		uVar5 = uVar5 - (((uint)((ulonglong)uVar5 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar5 / 5) &
						0xff;
		plr[0]._pRSpell = ZEXT14(demo_level_spell1[uVar5]);
		plr[0]._pRSplType = '\x01';
		plr[0]._pTSpell = '\x04';
		plr[0]._pTSplType = '\0';
		SetQSpell__Fiii(0,(uint)demo_level_spell2[uVar5],1);
		plr[0]._pMemSpells._0_4_ = 0xffffffff;
		plr[0]._pMemSpells._4_4_ = 0xffffffff;
		plr[0]._pStrength = 100;
		plr[0]._pBaseStr = 100;
		plr[0]._pBaseDex = 100;
		plr[0]._pgfxnum = plr[0]._pgfxnum | demo_level_clothe[uVar5];
		plr[0]._pLevel = '\x05';
		plr[0]._pDexterity = ZEXT12(demo_level_dex[uVar5]);
		plr[0]._pDamageMod = ZEXT14(demo_level_dam[uVar5]);
		allspellsflag = &DAT_00000001;
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ TonysDummyPoll__Fv()
 // line 259, offset 0x8009b82c
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x8009B82C
	/* end block 1 */
	// End offset: 0x8009B848
	// End Line: 264

	/* begin block 2 */
		// Start line: 559
	/* end block 2 */
	// End Line: 560

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TonysDummyPoll__Fv(void)

{
	if (tony_poll != 0) {
		DrawSync(0);
		trap(0x400);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTonyPoll__Fv()
 // line 268, offset 0x8009b858
	/* begin block 1 */
		// Start line: 269
		// Start offset: 0x8009B858
	/* end block 1 */
	// End offset: 0x8009B85C
	// End Line: 270

	/* begin block 2 */
		// Start line: 578
	/* end block 2 */
	// End Line: 579

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetTonyPoll__Fv(void)

{
	tony_poll = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearTonyPoll__Fv()
 // line 273, offset 0x8009b864
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x8009B864
	/* end block 1 */
	// End offset: 0x8009B868
	// End Line: 275

	/* begin block 2 */
		// Start line: 588
	/* end block 2 */
	// End Line: 589

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearTonyPoll__Fv(void)

{
	tony_poll = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ load_demo_pad_data__FUl(unsigned long demo_num /*$s0*/)
 // line 278, offset 0x8009b870
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x8009B870
		// Variables:
	// 		struct FileIO *Fs; // $a0
	/* end block 1 */
	// End offset: 0x8009B8BC
	// End Line: 286

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

void load_demo_pad_data__FUl(ulong demo_num)

{
	FileIO *this;
	
	this = SYSI_GetFs__Fv();
	"DEMOPAD0.DAT"[7] = (char)demo_num + '0';
	if (9 < demo_num) {
		"DEMOPAD0.DAT"[7] = (char)demo_num + '7';
	}
										/* WARNING: Read-only address (ram,0x80110b2b) is written */
	ReadAtAddr__6FileIOPCcPUci(this,"DEMOPAD0.DAT",demo_buffer,-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ save_demo_pad_data__FUl(unsigned long demo_num /*$s0*/)
 // line 289, offset 0x8009b8d0
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x8009B8D0
		// Variables:
	// 		struct FileIO *Fs; // $a0
	/* end block 1 */
	// End offset: 0x8009B91C
	// End Line: 297

	/* begin block 2 */
		// Start line: 619
	/* end block 2 */
	// End Line: 620

void save_demo_pad_data__FUl(ulong demo_num)

{
	FileIO *this;
	
	this = SYSI_GetFs__Fv();
	"DEMOPAD0.DAT"[7] = (char)demo_num + '0';
	if (9 < demo_num) {
		"DEMOPAD0.DAT"[7] = (char)demo_num + '7';
	}
										/* WARNING: Read-only address (ram,0x80110b2b) is written */
	Save__6FileIOPCcPUci(this,"DEMOPAD0.DAT",demo_buffer,900);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_pad_record_play__Fi(int level /*$s0*/)
 // line 308, offset 0x8009b930
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x8009B930
	/* end block 1 */
	// End offset: 0x8009B990
	// End Line: 320

	/* begin block 2 */
		// Start line: 658
	/* end block 2 */
	// End Line: 659

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
 // line 324, offset 0x8009b9a4
	/* begin block 1 */
		// Start line: 325
		// Start offset: 0x8009B9A8
	/* end block 1 */
	// End offset: 0x8009B9A8
	// End Line: 337

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

/* WARNING: Unknown calling convention yet parameter storage is locked */

void start_demo__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetQuest__Fv()
 // line 340, offset 0x8009b9b4
	/* begin block 1 */
		// Start line: 341
		// Start offset: 0x8009B9B4
	/* end block 1 */
	// End offset: 0x8009B9B4
	// End Line: 341

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetQuest__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawManaShield__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 344, offset 0x8009b9bc
	/* begin block 1 */
		// Start line: 345
		// Start offset: 0x8009B9BC
	/* end block 1 */
	// End offset: 0x8009B9BC
	// End Line: 345

	/* begin block 2 */
		// Start line: 761
	/* end block 2 */
	// End Line: 762

void DrawManaShield__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ManaTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 368, offset 0x8009b9c4
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x8009B9C4
	/* end block 1 */
	// End offset: 0x8009B9C4
	// End Line: 369

	/* begin block 2 */
		// Start line: 806
	/* end block 2 */
	// End Line: 807

void ManaTask__FP4TASK(TASK *T)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ tony__Fv()
 // line 389, offset 0x8009b9cc
	/* begin block 1 */
		// Start line: 390
		// Start offset: 0x8009B9CC
	/* end block 1 */
	// End offset: 0x8009B9FC
	// End Line: 393

	/* begin block 2 */
		// Start line: 830
	/* end block 2 */
	// End Line: 831

/* WARNING: Unknown calling convention yet parameter storage is locked */

void tony__Fv(void)

{
	DBG_SetErrorFunc(new_eprint__FPcT0i);
	DBG_SetPollRoutine(TonysDummyPoll__Fv);
	ClearTonyPoll__Fv();
	return;
}





