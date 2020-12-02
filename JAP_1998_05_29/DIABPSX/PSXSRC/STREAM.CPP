#include "THISDUST.H"
#include "STREAM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PrintCDWaitTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 166, offset 0x80098988
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x80098988
		// Variables:
	// 		struct TextDat *CDGfxData; // $s4
	// 		struct POLY_FT4 *Ft4; // $v0

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x800989BC

			/* begin block 1.1.1 */
				// Start line: 173
				// Start offset: 0x800989BC

				/* begin block 1.1.1.1 */
					// Start line: 174
					// Start offset: 0x800989CC
					// Variables:
				// 		int cdx; // $s0
				// 		int cdy; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x80098A90
				// End Line: 190
			/* end block 1.1.1 */
			// End offset: 0x80098A90
			// End Line: 190
		/* end block 1.1 */
		// End offset: 0x80098A90
		// End Line: 192
	/* end block 1 */
	// End offset: 0x80098AA0
	// End Line: 192

	/* begin block 2 */
		// Start line: 332
	/* end block 2 */
	// End Line: 333

void PrintCDWaitTask__FP4TASK(TASK *T)

{
	int iVar1;
	TextDat *this;
	undefined *puVar2;
	POLY_FT4 *pPVar3;
	int X;
	
	this = GM_UseTexData__Fi(0);
	do {
		if (CDWAIT != (void *)0x0) {
			PRIM_FullScreen__Fi(300);
			iVar1 = -((uint)(CDAngle >> 1) + 1 & 1);
			X = iVar1 + 0x120;
			puVar2 = (undefined *)IsGameLoading__Fv();
			if ((((puVar2 != &DAT_00000001) && (FeFlag == '\0')) && (qtextflag == '\0')) &&
				 (PlayerStruct_800dbf20.plractive != '\0')) {
				X = iVar1 + 0xa0;
			}
			pPVar3 = PrintFt4__7TextDatiiiiii(this,0,X,0xd0,(uint)(CDAngle >> 1) & 1,0x1fe,0);
			pPVar3->r0 = -0x80;
			pPVar3->g0 = -0x80;
			pPVar3->b0 = -0x80;
			pPVar3->code = pPVar3->code & 0xfe;
			CDAngle = CDAngle + '\x01';
		}
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitCDWaitIcon__Fv()
 // line 197, offset 0x80098ac4
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x80098AC4
	/* end block 1 */
	// End offset: 0x80098AE8
	// End Line: 200

	/* begin block 2 */
		// Start line: 396
	/* end block 2 */
	// End Line: 397

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCDWaitIcon__Fv(void)

{
	CDWAIT = (void *)0x0;
	TSK_AddTask(0x8000,PrintCDWaitTask__FP4TASK,0x800,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh /*$a0*/, char *e /*$a1*/)
 // line 209, offset 0x80098af8
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x80098B04
	/* end block 1 */
	// End offset: 0x80098B04
	// End Line: 210

	/* begin block 2 */
		// Start line: 422
	/* end block 2 */
	// End Line: 423

void STR_Debug__FP6SFXHDRPce(SFXHDR *sfh,char *e)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_SystemTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 424, offset 0x80098b0c
	/* begin block 1 */
		// Start line: 425
		// Start offset: 0x80098B14
	/* end block 1 */
	// End offset: 0x80098B2C
	// End Line: 444

	/* begin block 2 */
		// Start line: 852
	/* end block 2 */
	// End Line: 853

void STR_SystemTask__FP4TASK(TASK *T)

{
	do {
		systemtask(0);
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_AllocBuffer__Fv()
 // line 456, offset 0x80098b3c
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x80098B3C

		/* begin block 1.1 */
			// Start line: 458
			// Start offset: 0x80098B3C

			/* begin block 1.1.1 */
				// Start line: 459
				// Start offset: 0x80098B50

				/* begin block 1.1.1.1 */
					// Start line: 465
					// Start offset: 0x80098B50
					// Variables:
				// 		int i; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80098B6C
				// End Line: 465
			/* end block 1.1.1 */
			// End offset: 0x80098B6C
			// End Line: 465
		/* end block 1.1 */
		// End offset: 0x80098B6C
		// End Line: 465
	/* end block 1 */
	// End offset: 0x80098B6C
	// End Line: 465

	/* begin block 2 */
		// Start line: 917
	/* end block 2 */
	// End Line: 918

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_AllocBuffer__Fv(void)

{
	ulong *puVar1;
	int iVar2;
	
	if (FileSYS == 2) {
		iVar2 = 0x47ff;
		puVar1 = &ULONG_800cbce4;
		do {
			*puVar1 = 0;
			iVar2 = iVar2 + -1;
			puVar1 = puVar1 + -1;
		} while (-1 < iVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_Init__Fv()
 // line 472, offset 0x80098b74
	/* begin block 1 */
		// Start line: 473
		// Start offset: 0x80098B74

		/* begin block 1.1 */
			// Start line: 473
			// Start offset: 0x80098B74

			/* begin block 1.1.1 */
				// Start line: 475
				// Start offset: 0x80098B88
				// Variables:
			// 		long vm; // $v1
			// 		unsigned char *ptr; // $a1
			// 		struct TASK *T; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 491
					// Start offset: 0x80098BB4
					// Variables:
				// 		int i; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80098C18
				// End Line: 505
			/* end block 1.1.1 */
			// End offset: 0x80098C8C
			// End Line: 521
		/* end block 1.1 */
		// End offset: 0x80098C8C
		// End Line: 521
	/* end block 1 */
	// End offset: 0x80098C8C
	// End Line: 521

	/* begin block 2 */
		// Start line: 949
	/* end block 2 */
	// End Line: 950

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_Init__Fv(void)

{
	int iVar1;
	TASK *T;
	int iVar2;
	ulong *puVar3;
	
	if (STRInit == (void *)0x0) {
		iVar1 = GetVideoMode();
		if (iVar1 == 0) {
			iVar2 = 0x3c;
		}
		else {
			iVar2 = 0x32;
			if (iVar1 != 1) {
				iVar2 = frame_rate;
			}
		}
		frame_rate = iVar2;
		STR_AllocBuffer__Fv();
		puVar3 = STR_Buffer;
		Time = 0;
		iVar2 = 0;
		iVar1 = 0;
		do {
			*(ulong **)((int)&SFXTab.mem + iVar1) = puVar3;
			puVar3 = puVar3 + 0x2400;
			(&SFXTab.used)[iVar1] = '\0';
			*(undefined4 *)((int)&SFXTab.SPUstreamaddr + iVar1) = 0;
			*(int *)((int)&SFXTab.voice + iVar1) = iVar2;
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x84;
		} while (iVar2 < 2);
		T = TSK_AddTask(0,STR_SystemTask__FP4TASK,0x800,0);
		if (T == (TASK *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x1ff);
		}
		TSK_MakeTaskImmortal(T);
		InitCDWaitIcon__Fv();
		sglMasterVolume = 0xe6;
		sglMusicVolume = 0x1fff;
		sglSoundVolume = 0x1fff;
		sglSpeechVolume = 0x1fff;
		STRInit = &DAT_00000001;
	}
	return;
}



// decompiled code
// original method signature: 
// struct SFXHDR * /*$ra*/ STR_InitStream__Fc(char flag /*$a0*/)
 // line 531, offset 0x80098ca0
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x80098CA0
		// Variables:
	// 		struct SFXHDR *sfh; // $s0
	/* end block 1 */
	// End offset: 0x80098DB0
	// End Line: 586

	/* begin block 2 */
		// Start line: 1071
	/* end block 2 */
	// End Line: 1072

SFXHDR * STR_InitStream__Fc(char flag)

{
	ulong uVar1;
	int iVar2;
	SFXHDR *pSVar3;
	SFXHDR *pSVar4;
	int iVar5;
	
	iVar5 = (int)flag;
	pSVar4 = &SFXTab + iVar5;
	pSVar3 = (SFXHDR *)0x0;
	if (pSVar4->used == '\0') {
		pSVar4->used = '\x01';
		(&SFXTab)[iVar5].state = '\x01';
		uVar1 = VID_GetTick__Fv();
		(&SFXTab)[iVar5].framecount = uVar1;
		uVar1 = VID_GetTick__Fv();
		(&SFXTab)[iVar5].lastcount = uVar1;
		(&SFXTab)[iVar5].stream_playing = 2;
		(&SFXTab)[iVar5].pitch = 0x3fc;
		(&SFXTab)[iVar5].stream_sec = 0;
		(&SFXTab)[iVar5].stream_pos = 0;
		(&SFXTab)[iVar5].sec_num = 0;
		(&SFXTab)[iVar5].SPU_frame = 0;
		(&SFXTab)[iVar5].SPU_sec = 0;
		(&SFXTab)[iVar5].SPU_pos = 0;
		(&SFXTab)[iVar5].SPU_sec_num = 0;
		(&SFXTab)[iVar5].stream_offs = 0;
		(&SFXTab)[iVar5].playing = '\0';
		(&SFXTab)[iVar5].stream_read = 0;
		(&SFXTab)[iVar5].stream_stall = 0;
		(&SFXTab)[iVar5].stream_ending = 0;
		(&SFXTab)[iVar5].voice = iVar5;
		(&SFXTab)[iVar5].DMA_size = 0;
		(&SFXTab)[iVar5].ChunkGot = '\0';
		(&SFXTab)[iVar5].spu_rate = 0x69;
		iVar2 = SpuMalloc(&DAT_00008ea0);
		(&SFXTab)[iVar5].SPUstreamaddr = iVar2;
		if (iVar2 == -1) {
			DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x23e);
		}
		SpuSetTransferMode(0);
		SpuSetTransferStartAddr((&SFXTab)[iVar5].SPUstreamaddr);
		SpuWrite0(&DAT_00008e80);
		SpuIsTransferCompleted(1);
		NoActiveStreams = NoActiveStreams + '\x01';
		pSVar3 = pSVar4;
	}
	return pSVar3;
}



// decompiled code
// original method signature: 
// struct SFXHDR * /*$ra*/ STR_PlaySound__FUscic(unsigned short Name /*$s3*/, char flag /*$s2*/, int volume /*$s4*/, char loop /*$s5*/)
 // line 597, offset 0x80098dc8
	/* begin block 1 */
		// Start line: 598
		// Start offset: 0x80098DC8
		// Variables:
	// 		struct SFXHDR *sfh; // $s1
	// 		char tstring[32]; // stack offset -72
	// 		char Prefix[2]; // stack offset -40

		/* begin block 1.1 */
			// Start line: 598
			// Start offset: 0x80098DC8

			/* begin block 1.1.1 */
				// Start line: 611
				// Start offset: 0x80098E0C
				// Variables:
			// 		enum LANG_TYPE Lang; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80098E74
			// End Line: 632
		/* end block 1.1 */
		// End offset: 0x80098E90
		// End Line: 638
	/* end block 1 */
	// End offset: 0x80098FE8
	// End Line: 727

	/* begin block 2 */
		// Start line: 1258
	/* end block 2 */
	// End Line: 1259

SFXHDR * STR_PlaySound__FUscic(ushort Name,char flag,int volume,char loop)

{
	int iVar1;
	undefined uVar2;
	LANG_TYPE LVar3;
	SFXHDR *sfh;
	undefined4 uVar4;
	byte flag_00;
	char acStack72 [32];
	undefined local_28;
	undefined local_27;
	
	STR_Init__Fv();
	uVar2 = 0x4d;
	if (flag == '\0') {
		LVar3 = LANG_GetLang__Fv();
		uVar2 = local_28;
		switch(LVar3) {
		case LANG_ENGLISH:
			uVar2 = 0x45;
			break;
		case LANG_FRENCH:
			uVar2 = 0x46;
			break;
		case LANG_GERMAN:
			uVar2 = 0x47;
			break;
		case LANG_SWEDISH:
			uVar2 = 0x53;
			break;
		case LANG_JAP:
			uVar2 = 0x4a;
			break;
		case LANG_NONE:
			DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x277);
			uVar2 = local_28;
		}
	}
	local_28 = uVar2;
	if (Name == 0x69) {
LAB_80098ed8:
		local_28 = 0x4d;
	}
	else {
		if (Name < 0x6a) {
			if ((Name == 0xc) || (Name == 0x2e)) goto LAB_80098ed8;
		}
		else {
			if ((Name == 0x6b) || (Name == 0x348)) goto LAB_80098ed8;
		}
	}
	local_27 = 0;
	sprintf(acStack72,"%s%04X",&local_28,(uint)Name);
	flag_00 = flag + 1U & 1;
	sfh = STR_InitStream__Fc(flag_00);
	flag_00 = flag_00 ^ 1;
	if (sfh == (SFXHDR *)0x0) {
		return (SFXHDR *)0x0;
	}
	sfh->type = flag_00;
	sfh->loop = loop;
	sfh->volume = volume;
	sfh->s_volume = volume;
	STR_setvolume__FP6SFXHDR(sfh);
	iVar1 = frame_rate;
	if (flag_00 == 0) {
		sfh->pitch = 0x3fc;
		if (iVar1 == 0x32) {
			sfh->spu_rate = my_spurate;
		}
		else {
			sfh->spu_rate = 0x68;
		}
		uVar4 = 0;
	}
	else {
		sfh->pitch = 0x3fc;
		if (iVar1 == 0x32) {
			sfh->spu_rate = my_spurate;
		}
		else {
			sfh->spu_rate = 0x68;
		}
		uVar4 = 1;
		if (leveltype == '\0') goto LAB_80098fb8;
	}
	SpuSetReverbVoice(uVar4,1 << (sfh->voice & 0x1fU));
LAB_80098fb8:
	sprintf(sfh->name,"%s.VAG",acStack72);
	sfh->SfxNo = (uint)Name;
	STR_StreamMainTask__FP6SFXHDRc(sfh,flag_00);
	return sfh;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh /*$s0*/)
 // line 736, offset 0x80099010
	/* begin block 1 */
		// Start line: 737
		// Start offset: 0x80099010
		// Variables:
	// 		enum LANG_TYPE lang; // $v0
	/* end block 1 */
	// End offset: 0x800990C0
	// End Line: 753

	/* begin block 2 */
		// Start line: 1544
	/* end block 2 */
	// End Line: 1545

void STR_setvolume__FP6SFXHDR(SFXHDR *sfh)

{
	LANG_TYPE LVar1;
	
	voice_attr.mask = 3;
	voice_attr.voice = 1 << (sfh->voice & 0x1fU);
	voice_attr.volume.left = (short)sfh->volume;
	voice_attr.volume.right = (short)sfh->volume;
	LVar1 = LANG_GetLang__Fv();
	if (((LVar1 == LANG_FRENCH) || (LVar1 == LANG_SWEDISH)) && (sfh->voice == 1)) {
		voice_attr.volume.left = voice_attr.volume.left << 1;
		voice_attr.volume.right = voice_attr.volume.right << 1;
	}
	SpuSetVoiceAttr(&voice_attr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_setpitch__FP6SFXHDR(struct SFXHDR *sfh /*$a0*/)
 // line 761, offset 0x800990dc
	/* begin block 1 */
		// Start line: 762
		// Start offset: 0x800990DC
	/* end block 1 */
	// End offset: 0x80099118
	// End Line: 766

	/* begin block 2 */
		// Start line: 1597
	/* end block 2 */
	// End Line: 1598

void STR_setpitch__FP6SFXHDR(SFXHDR *sfh)

{
	voice_attr.mask = 0x10;
	voice_attr.voice = 1 << (sfh->voice & 0x1fU);
	voice_attr.pitch = (ushort)sfh->pitch;
	SpuSetVoiceAttr(&voice_attr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh /*$a0*/)
 // line 775, offset 0x80099128
	/* begin block 1 */
		// Start line: 776
		// Start offset: 0x80099128
		// Variables:
	// 		int offs; // $a1
	/* end block 1 */
	// End offset: 0x80099224
	// End Line: 807

	/* begin block 2 */
		// Start line: 1626
	/* end block 2 */
	// End Line: 1627

void STR_PlaySFX__FP6SFXHDR(SFXHDR *sfh)

{
	voice_attr.mask = (ulong)&DAT_0000ff93;
	voice_attr.voice = 1 << (sfh->voice & 0x1fU);
	voice_attr.volume.left = (short)sfh->volume;
	voice_attr.volume.right = (short)sfh->volume;
	voice_attr.pitch = (ushort)sfh->pitch;
	voice_attr.r_mode = 3;
	voice_attr.rr = 3;
	voice_attr.sl = 0xf;
	voice_attr.a_mode = 1;
	voice_attr.s_mode = 1;
	voice_attr.ar = 0;
	voice_attr.dr = 0;
	voice_attr.sr = 0;
	voice_attr.addr = sfh->SPUstreamaddr + (sfh->SPU_pos % 0x8e80 & 0xfffffff0U);
	SpuSetKeyOnWithAttr(&voice_attr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_pauseall__Fv()
 // line 816, offset 0x80099234
	/* begin block 1 */
		// Start line: 817
		// Start offset: 0x80099234

		/* begin block 1.1 */
			// Start line: 817
			// Start offset: 0x80099234
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x8009928C
		// End Line: 822
	/* end block 1 */
	// End offset: 0x8009928C
	// End Line: 822

	/* begin block 2 */
		// Start line: 1831
	/* end block 2 */
	// End Line: 1832

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_pauseall__Fv(void)

{
	int iVar1;
	SFXHDR *sfh;
	int iVar2;
	
	iVar2 = 0;
	sfh = &SFXTab;
	iVar1 = 0;
	do {
		if ((&SFXTab.used)[iVar1] != '\0') {
			STR_SoundCommand__FP6SFXHDRi(sfh,3);
		}
		sfh = sfh + 1;
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x84;
	} while (iVar2 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_resumeall__Fv()
 // line 831, offset 0x800992a8
	/* begin block 1 */
		// Start line: 832
		// Start offset: 0x800992A8

		/* begin block 1.1 */
			// Start line: 832
			// Start offset: 0x800992A8
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x80099300
		// End Line: 837
	/* end block 1 */
	// End offset: 0x80099300
	// End Line: 837

	/* begin block 2 */
		// Start line: 1867
	/* end block 2 */
	// End Line: 1868

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_resumeall__Fv(void)

{
	int iVar1;
	SFXHDR *sfh;
	int iVar2;
	
	iVar2 = 0;
	sfh = &SFXTab;
	iVar1 = 0;
	do {
		if ((&SFXTab.used)[iVar1] != '\0') {
			STR_SoundCommand__FP6SFXHDRi(sfh,4);
		}
		sfh = sfh + 1;
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x84;
	} while (iVar2 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh /*$s0*/)
 // line 846, offset 0x8009931c
	/* begin block 1 */
		// Start line: 847
		// Start offset: 0x8009931C
	/* end block 1 */
	// End offset: 0x80099374
	// End Line: 867

	/* begin block 2 */
		// Start line: 1903
	/* end block 2 */
	// End Line: 1904

void STR_CloseStream__FP6SFXHDR(SFXHDR *sfh)

{
	if (sfh->used != '\0') {
		sfh->volume = 0;
		NoActiveStreams = NoActiveStreams + -1;
		sfh->used = '\0';
		STR_setvolume__FP6SFXHDR(sfh);
		SpuSetKey(0,1 << (sfh->voice & 0x1fU));
		SpuFree(sfh->SPUstreamaddr);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh /*$s0*/, int Command /*$a1*/)
 // line 876, offset 0x80099388
	/* begin block 1 */
		// Start line: 877
		// Start offset: 0x80099388
	/* end block 1 */
	// End offset: 0x80099460
	// End Line: 918

	/* begin block 2 */
		// Start line: 1971
	/* end block 2 */
	// End Line: 1972

void STR_SoundCommand__FP6SFXHDRi(SFXHDR *sfh,int Command)

{
	if ((sfh->state == '\x06') && (Command == 6)) {
		Command = 1;
	}
	if ((sfh->state == '\x03') || (Command != 4)) {
		if (Command == 3) {
			sfh->s_volume = sfh->volume;
		}
		if (Command == 8) {
			sfh->volume = 0;
			STR_setvolume__FP6SFXHDR(sfh);
			AS_CloseStream__FP6STRHDRP6SFXHDR(sfh->StreamHND,sfh);
			STR_CloseStream__FP6SFXHDR(sfh);
			BL_CloseStreamFile__FP6STRHDR(sfh->StreamHND);
			sfh->TaskAlive = (void *)0x0;
			if (sfh->type == '\0') {
				sghStream = (SFXHDR *)0x0;
				sgpStreamSFX = (TSFX *)0x0;
			}
			else {
				sghMusic = (SFXHDR *)0x0;
			}
			sprintf(sfh->name,"BATTER");
		}
		else {
			sfh->state = (char)Command;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ STR_Command__FP6SFXHDR(struct SFXHDR *sfh /*$s0*/)
 // line 927, offset 0x80099474
	/* begin block 1 */
		// Start line: 928
		// Start offset: 0x80099474
	/* end block 1 */
	// End offset: 0x80099650
	// End Line: 1004

	/* begin block 2 */
		// Start line: 2073
	/* end block 2 */
	// End Line: 2074

char STR_Command__FP6SFXHDR(SFXHDR *sfh)

{
	char cVar1;
	int iVar2;
	
	switch((int)(((uint)(byte)sfh->state - 1) * 0x1000000) >> 0x18) {
	default:
		goto switchD_800994b4_caseD_0;
	case 1:
	case 7:
		sfh->loop = '\0';
		cVar1 = '\x01';
		break;
	case 2:
		sfh->volume = 0;
		STR_setvolume__FP6SFXHDR(sfh);
		cVar1 = '\0';
		break;
	case 3:
		sfh->state = '\x01';
		sfh->volume = sfh->s_volume;
		STR_PlaySFX__FP6SFXHDR(sfh);
		cVar1 = '\0';
		break;
	case 4:
		if (sfh->volume < 0) {
			sfh->state = '\b';
			sfh->loop = '\0';
		}
		else {
			sfh->volume = sfh->volume + -0x100;
			STR_setvolume__FP6SFXHDR(sfh);
			if (FRIGFLAG != (void *)0x0) {
				sfh->pitch = sfh->pitch + -0x40;
				STR_setpitch__FP6SFXHDR(sfh);
				return '\0';
			}
		}
		goto switchD_800994b4_caseD_0;
	case 6:
		iVar2 = sfh->stream_pos + -0x5f00;
		sfh->stream_playing = 1;
		sfh->SPU_pos = iVar2;
		sfh->state = '\x01';
		sfh->SPU_sec = (iVar2 / 0x2f80) % 3;
		STR_PlaySFX__FP6SFXHDR(sfh);
		cVar1 = '\0';
		break;
	case 8:
		STRSave.sec_num = sfh->sec_num;
		STRSave.stream_pos = sfh->stream_pos;
		STRSave.stream_read = sfh->stream_read;
		STRSave.SizeIn = sfh->SizeIn;
		cVar1 = '\0';
		break;
	case 9:
		sfh->sec_num = STRSave.sec_num;
		sfh->stream_pos = STRSave.stream_pos;
		sfh->stream_read = STRSave.stream_read;
		AS_WasLastBlock__FiP6STRHDRP6SFXHDR(sfh->ah,sfh->StreamHND,sfh);
		sfh->SizeIn = STRSave.SizeIn;
switchD_800994b4_caseD_0:
		cVar1 = '\0';
	}
	return cVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh /*$s3*/)
 // line 1013, offset 0x80099664
	/* begin block 1 */
		// Start line: 1014
		// Start offset: 0x80099664
		// Variables:
	// 		unsigned char *ptr; // $s1
	// 		int DMA_off; // $s4
	// 		int sec; // $s2
	/* end block 1 */
	// End offset: 0x80099708
	// End Line: 1032

	/* begin block 2 */
		// Start line: 2258
	/* end block 2 */
	// End Line: 2259

void STR_DMAControl__FP6SFXHDR(SFXHDR *sfh)

{
	int iVar1;
	uchar *puVar2;
	int iVar3;
	
	iVar1 = sfh->DMA_size;
	iVar3 = sfh->stream_sec + -1;
	if (iVar3 < 0) {
		iVar3 = 2;
	}
	if (0 < iVar1) {
		puVar2 = sfh->mem;
		SpuSetTransferMode(0);
		SpuSetTransferStartAddr(&DAT_00002f80 + -iVar1 + sfh->SPUstreamaddr + iVar3 * 0x2f80);
		SpuWrite(puVar2 + (int)(&DAT_00002f80 + -iVar1 + iVar3 * 0x3000 + 0x80),&DAT_000017c0);
		SpuIsTransferCompleted(1);
		sfh->DMA_size = sfh->DMA_size + -0x17c0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh /*$s0*/, unsigned char *Src /*$a1*/, int size /*$s2*/)
 // line 1042, offset 0x8009972c
	/* begin block 1 */
		// Start line: 1043
		// Start offset: 0x8009972C
		// Variables:
	// 		int sec_num; // $s3
	// 		unsigned char *dp; // $s1
	// 		int i; // $v1
	// 		int read; // $v0
	// 		int osize; // $a1
	/* end block 1 */
	// End offset: 0x8009998C
	// End Line: 1134

	/* begin block 2 */
		// Start line: 2320
	/* end block 2 */
	// End Line: 2321

void STR_PlayStream__FP6SFXHDRPUci(SFXHDR *sfh,uchar *Src,int size)

{
	ushort uVar1;
	ulong uVar2;
	uchar *puVar3;
	int iVar4;
	int iVar5;
	uchar *puVar6;
	uint uVar7;
	
	uVar7 = size - 0x80;
	uVar1 = *(ushort *)Src;
	puVar6 = Src + 0x80;
	if ((uVar7 & 0xf) != 0) {
		STR_Debug__FP6SFXHDRPce(sfh,"ERROR - SFX size not div 16");
		DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x41e);
	}
	if ((uint)uVar1 != sfh->sec_num) {
		STR_SoundCommand__FP6SFXHDRi(sfh,7);
	}
	iVar5 = sfh->StreamHND->Size - sfh->stream_pos;
	puVar3 = puVar6 + iVar5;
	if (iVar5 < (int)uVar7) {
		do {
			*puVar3 = '\0';
			puVar3 = puVar3 + 1;
			iVar4 = iVar5;
		} while ((int)puVar3 < (int)(puVar6 + uVar7));
		while (iVar4 < (int)uVar7) {
			(puVar6 + iVar4)[1] = '\x01';
			(puVar6 + iVar4)[0x11] = '\a';
			iVar4 = iVar4 + 0x20;
		}
		iVar4 = 0;
		puVar3 = puVar6;
		if (0 < iVar5 + -0x20) {
			do {
				puVar3[1] = '\0';
				iVar4 = iVar4 + 0x10;
				puVar3 = puVar6 + iVar4;
			} while (iVar4 < iVar5 + -0x20);
		}
		(puVar6 + iVar4)[1] = '\x01';
		(puVar6 + iVar4)[0x11] = '\a';
	}
	else {
		if (sfh->stream_sec == 0) {
			Src[0x81] = '\x06';
			iVar5 = 0x10;
			Src = Src + 0x90;
			if (0x10 < (int)uVar7) {
				do {
					Src[1] = '\x02';
					iVar5 = iVar5 + 0x10;
					Src = puVar6 + iVar5;
				} while (iVar5 < (int)uVar7);
			}
		}
		else {
			if (sfh->stream_sec == 2) {
				iVar5 = 0;
				puVar3 = puVar6;
				if (0 < size + -0x90) {
					do {
						puVar3[1] = '\x02';
						iVar5 = iVar5 + 0x10;
						puVar3 = puVar6 + iVar5;
					} while (iVar5 < size + -0x90);
				}
				puVar6[iVar5 + 1] = '\x03';
			}
			else {
				iVar5 = 0;
				puVar3 = puVar6;
				if (0 < (int)uVar7) {
					do {
						puVar3[1] = '\x02';
						iVar5 = iVar5 + 0x10;
						puVar3 = puVar6 + iVar5;
					} while (iVar5 < (int)uVar7);
				}
			}
		}
	}
	while (sfh->DMA_size != 0) {
		STR_DMAControl__FP6SFXHDR(sfh);
	}
	sfh->DMA_size = 0x2f80;
	if (sfh->stream_playing == 0) {
		STR_PlaySFX__FP6SFXHDR(sfh);
		sfh->playing = '\x01';
		uVar2 = 0xffffffff;
	}
	else {
		uVar2 = sfh->stream_playing - 1;
	}
	sfh->stream_playing = uVar2;
	sfh->sec_num = sfh->sec_num + 1;
	sfh->stream_read = sfh->stream_read + 0x80 + uVar7;
	sfh->stream_pos = sfh->stream_pos + uVar7;
	sfh->stream_offs = sfh->stream_offs + uVar7;
	sfh->stream_sec = sfh->stream_sec + 1;
	if (sfh->stream_sec == 3) {
		sfh->stream_sec = 0;
		sfh->stream_offs = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_AsyncWeeTASK__FP4TASK(struct TASK *T /*$a0*/)
 // line 1145, offset 0x800999ac
	/* begin block 1 */
		// Start line: 1146
		// Start offset: 0x800999AC
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		struct STRHDR *StreamHND; // $s4
	// 		struct SFXHDR *sfh; // $s0
	// 		char Done; // $s1
	// 		int frame; // $s3
	// 		int framediff; // $s2
	// 		int AsyncHND; // $s5
	// 		unsigned char *ptr; // $v0
	// 		char OrigName[14]; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1146
			// Start offset: 0x800999AC

			/* begin block 1.1.1 */
				// Start line: 1168
				// Start offset: 0x80099A38

				/* begin block 1.1.1.1 */
					// Start line: 1174
					// Start offset: 0x80099A40
				/* end block 1.1.1.1 */
				// End offset: 0x80099C20
				// End Line: 1248
			/* end block 1.1.1 */
			// End offset: 0x80099C5C
			// End Line: 1269
		/* end block 1.1 */
		// End offset: 0x80099C5C
		// End Line: 1269
	/* end block 1 */
	// End offset: 0x80099C5C
	// End Line: 1269

	/* begin block 2 */
		// Start line: 2550
	/* end block 2 */
	// End Line: 2551

/* WARNING: Type propagation algorithm not settling */

void STR_AsyncWeeTASK__FP4TASK(TASK *T)

{
	int iVar1;
	char cVar2;
	char cVar3;
	int ah;
	int iVar4;
	ulong uVar5;
	SFXHDR *sfh;
	STRHDR *sh;
	char acStack48 [16];
	
	sfh = *(SFXHDR **)((int)((STRHDR *)T->fActive)->Name + 4);
	sh = *(STRHDR **)((STRHDR *)T->fActive)->Name;
	strcpy(acStack48,sfh->name);
	ah = AS_OpenStream__FP6STRHDRP6SFXHDR(sh,sfh);
	*(undefined **)&sfh->TaskAlive = &DAT_00000001;
	sfh->StreamHND = sh;
	if (ah == -1) {
		DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x48e);
	}
	else {
		sfh->stream_playing = 0;
		cVar2 = '\0';
		while (cVar2 == '\0') {
			iVar4 = strcmp(acStack48,sfh->name);
			if (iVar4 != 0) {
				sfh->TaskAlive = (void *)0x0;
				break;
			}
			cVar2 = STR_Command__FP6SFXHDR(sfh);
			uVar5 = VID_GetTick__Fv();
			iVar4 = uVar5 - sfh->framecount;
			if (iVar4 < 0) {
				iVar4 = -iVar4;
			}
			if (sfh->SizeIn < 1) {
				cVar2 = '\x01';
			}
			if (cVar2 != '\0') {
				cVar2 = '\0';
				if (sfh->state != '\b') {
					sfh->stream_ending = sfh->stream_ending + 1;
					if ((sfh->SPU_pos < sfh->stream_pos) && (0 < sfh->volume)) goto LAB_80099b00;
					STR_SoundCommand__FP6SFXHDRi(sfh,8);
					STR_Debug__FP6SFXHDRPce(sfh,"STREAM ENDED");
				}
				cVar2 = '\x01';
			}
LAB_80099b00:
			if ((sfh->state != '\x03') && (cVar2 == '\0')) {
				cVar3 = AS_GetBlock__FP6SFXHDR(sfh);
				if ((cVar3 != '\0') && (sfh->DMA_size == 0)) {
					STR_Debug__FP6SFXHDRPce(sfh,"CD SEEK TIME %d");
					STR_PlayStream__FP6SFXHDRPUci(sfh,sfh->mem + sfh->stream_sec * 0x3000,0x3000);
					AS_WasLastBlock__FiP6STRHDRP6SFXHDR(ah,sh,sfh);
					ah = sfh->ah;
					sfh->ChunkGot = '\0';
					sfh->stream_stall = 0;
					sfh->lastcount = uVar5;
				}
				STR_DMAControl__FP6SFXHDR(sfh);
				if (sfh->playing != '\0') {
					sfh->SPU_pos = sfh->SPU_pos + sfh->spu_rate * iVar4;
					iVar1 = sfh->SPU_pos / 0x2f80;
					sfh->SPU_sec_num = iVar1;
					sfh->SPU_frame = sfh->SPU_frame + iVar4;
					sfh->SPU_sec = iVar1 % 3;
				}
			}
			sfh->framecount = uVar5;
			TSK_Sleep(1);
		}
		if (sfh->TaskAlive != (void *)0x0) {
			AS_CloseStream__FP6STRHDRP6SFXHDR(sh,sfh);
			STR_CloseStream__FP6SFXHDR(sfh);
			BL_CloseStreamFile__FP6STRHDR(sh);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_AsyncTASK__FP4TASK(struct TASK *T /*$a0*/)
 // line 1281, offset 0x80099c84
	/* begin block 1 */
		// Start line: 1282
		// Start offset: 0x80099C84
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		struct STRHDR *StreamHND; // $s5
	// 		struct SFXHDR *sfh; // $s0
	// 		char Done; // $s1
	// 		int latency; // $s4
	// 		int frame; // $s3
	// 		int framediff; // $s2
	// 		int AsyncHND; // $s6
	// 		unsigned char *ptr; // $v0
	// 		char OrigName[14]; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1282
			// Start offset: 0x80099C84

			/* begin block 1.1.1 */
				// Start line: 1306
				// Start offset: 0x80099D14

				/* begin block 1.1.1.1 */
					// Start line: 1312
					// Start offset: 0x80099D18

					/* begin block 1.1.1.1.1 */
						// Start line: 1332
						// Start offset: 0x80099D78

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1333
							// Start offset: 0x80099D84

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1334
								// Start offset: 0x80099D84

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1340
									// Start offset: 0x80099D94

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1341
										// Start offset: 0x80099D94

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1343
											// Start offset: 0x80099DC0

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1344
												// Start offset: 0x80099DC0

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 1345
													// Start offset: 0x80099DD0
													// Variables:
												// 		unsigned long vol; // $s0
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x80099E24
												// End Line: 1367
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80099E40
											// End Line: 1373
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80099E40
										// End Line: 1373
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80099E40
									// End Line: 1373
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80099E40
								// End Line: 1373
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80099E40
							// End Line: 1373
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80099E40
						// End Line: 1373
					/* end block 1.1.1.1.1 */
					// End offset: 0x80099E40
					// End Line: 1373
				/* end block 1.1.1.1 */
				// End offset: 0x8009A004
				// End Line: 1445
			/* end block 1.1.1 */
			// End offset: 0x8009A040
			// End Line: 1459
		/* end block 1.1 */
		// End offset: 0x8009A040
		// End Line: 1459
	/* end block 1 */
	// End offset: 0x8009A040
	// End Line: 1459

	/* begin block 2 */
		// Start line: 2851
	/* end block 2 */
	// End Line: 2852

/* WARNING: Type propagation algorithm not settling */

void STR_AsyncTASK__FP4TASK(TASK *T)

{
	char cVar1;
	char cVar2;
	int ah;
	int iVar3;
	ulong uVar4;
	int iVar5;
	SFXHDR *sfh;
	int iVar6;
	STRHDR *sh;
	char acStack48 [16];
	
	sfh = *(SFXHDR **)((int)((STRHDR *)T->fActive)->Name + 4);
	sh = *(STRHDR **)((STRHDR *)T->fActive)->Name;
	strcpy(acStack48,sfh->name);
	ah = AS_OpenStream__FP6STRHDRP6SFXHDR(sh,sfh);
	*(undefined **)&sfh->TaskAlive = &DAT_00000001;
	sfh->StreamHND = sh;
	if (ah == -1) {
		DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x518);
	}
	else {
		cVar1 = '\0';
		while (cVar1 == '\0') {
			iVar3 = strcmp(acStack48,sfh->name);
			if (iVar3 != 0) {
				sfh->TaskAlive = (void *)0x0;
				break;
			}
			cVar1 = STR_Command__FP6SFXHDR(sfh);
			uVar4 = VID_GetTick__Fv();
			iVar3 = uVar4 - sfh->framecount;
			if (iVar3 < 0) {
				iVar3 = -iVar3;
			}
			iVar6 = sfh->stream_pos - sfh->SPU_pos;
			if (sfh->SizeIn < 1) {
				cVar1 = '\x01';
			}
			if (cVar1 != '\0') {
				cVar1 = '\0';
				if (sfh->state != '\b') {
					sfh->stream_ending = sfh->stream_ending + 1;
					if ((sfh->SPU_pos < sfh->stream_pos) && (-1 < sfh->volume)) goto LAB_80099e44;
					if (sfh->loop != '\0') {
						ah = sfh->volume;
						STR_SoundCommand__FP6SFXHDRi(sfh,8);
						if (sghMusic != (SFXHDR *)0x0) {
							return;
						}
						sghMusic = STR_PlaySound__FUscic(sgszMusicTracks[sgnMusicTrack],'\x01',ah,'\x01');
						return;
					}
					STR_SoundCommand__FP6SFXHDRi(sfh,8);
					STR_Debug__FP6SFXHDRPce(sfh,"STREAM ENDED");
				}
				cVar1 = '\x01';
			}
LAB_80099e44:
			if (((iVar6 < 0x2f80) && (sfh->playing != '\0')) && (sfh->stream_ending == 0)) {
				if (sfh->stream_stall == 1) {
					iVar5 = sfh->volume;
					sfh->volume = 0;
					sfh->s_volume = iVar5;
					STR_setvolume__FP6SFXHDR(sfh);
				}
				else {
					STR_SoundCommand__FP6SFXHDRi(sfh,7);
				}
				sfh->stream_stall = sfh->stream_stall + 1;
			}
			if ((sfh->state != '\x03') && (cVar1 == '\0')) {
				if (((iVar6 < 0x5f01) || (sfh->playing == '\0')) &&
					 ((sfh->stream_ending == 0 && (cVar2 = AS_GetBlock__FP6SFXHDR(sfh), cVar2 != '\0')))) {
					STR_Debug__FP6SFXHDRPce(sfh,"CD SEEK TIME %d");
					if (sfh->stream_stall != 0) {
						sfh->volume = sfh->s_volume;
						STR_setvolume__FP6SFXHDR(sfh);
						sfh->stream_stall = 0;
					}
					STR_PlayStream__FP6SFXHDRPUci(sfh,sfh->mem + sfh->stream_sec * 0x3000,0x3000);
					AS_WasLastBlock__FiP6STRHDRP6SFXHDR(ah,sh,sfh);
					ah = sfh->ah;
					sfh->ChunkGot = '\0';
					sfh->lastcount = uVar4;
				}
				STR_DMAControl__FP6SFXHDR(sfh);
				if (sfh->playing != '\0') {
					sfh->SPU_pos = sfh->SPU_pos + sfh->spu_rate * iVar3;
					iVar6 = sfh->SPU_pos / 0x2f80;
					sfh->SPU_sec_num = iVar6;
					sfh->SPU_frame = sfh->SPU_frame + iVar3;
					sfh->SPU_sec = iVar6 % 3;
				}
			}
			sfh->framecount = uVar4;
			TSK_Sleep(1);
		}
		if (sfh->TaskAlive != (void *)0x0) {
			AS_CloseStream__FP6STRHDRP6SFXHDR(sh,sfh);
			STR_CloseStream__FP6SFXHDR(sfh);
			BL_CloseStreamFile__FP6STRHDR(sh);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh /*$s2*/, char FileType /*$a1*/)
 // line 1471, offset 0x8009a06c
	/* begin block 1 */
		// Start line: 1472
		// Start offset: 0x8009A06C
		// Variables:
	// 		struct STRHDR *sh; // $s1
	// 		struct DEF_ARGS *A; // $v0

		/* begin block 1.1 */
			// Start line: 1487
			// Start offset: 0x8009A0CC

			/* begin block 1.1.1 */
				// Start line: 1490
				// Start offset: 0x8009A0E8
				// Variables:
			// 		struct TASK *T2; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8009A148
			// End Line: 1502
		/* end block 1.1 */
		// End offset: 0x8009A17C
		// End Line: 1516
	/* end block 1 */
	// End offset: 0x8009A17C
	// End Line: 1516

	/* begin block 2 */
		// Start line: 3259
	/* end block 2 */
	// End Line: 3260

/* WARNING: Type propagation algorithm not settling */

void STR_StreamMainTask__FP6SFXHDRc(SFXHDR *sfh,char FileType)

{
	undefined *puVar1;
	STRHDR *pSVar2;
	TASK *T;
	STRHDR *pSVar3;
	code *Main;
	
	if ((sfh->type == '\0') && (FeFlag == '\0')) {
		while (puVar1 = (undefined *)GLUE_HasGameStarted__Fv(), puVar1 != &DAT_00000001) {
			TSK_Sleep(1);
		}
	}
	pSVar2 = BL_OpenStreamFile__FPcc(sfh->name,'\0');
	if (pSVar2 == (STRHDR *)0x0) {
		printf("FILE %s NOT FOUND",sfh->name);
		STR_CloseStream__FP6SFXHDR(sfh);
	}
	else {
		sfh->SizeIn = pSVar2->Size;
		if (pSVar2->Size < 0x8e81) {
			Main = STR_AsyncWeeTASK__FP4TASK;
		}
		else {
			Main = STR_AsyncTASK__FP4TASK;
		}
		T = TSK_AddTask(0x8000,Main,0x800,0x10);
		if (T == (TASK *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x5dc);
		}
		TSK_MakeTaskImmortal(T);
		pSVar3 = (STRHDR *)T->fActive;
		*(STRHDR **)pSVar3->Name = pSVar2;
		*(SFXHDR **)((int)pSVar3->Name + 4) = sfh;
	}
	return;
}





