#include "THISDUST.H"
#include "STREAM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PrintCDWaitTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 142, offset 0x8008eb14
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x8008EB14
		// Variables:
	// 		struct TextDat *CDGfxData; // $s1
	// 		struct POLY_FT4 *Ft4; // $v1
	/* end block 1 */
	// End offset: 0x8008EBE0
	// End Line: 164

	/* begin block 2 */
		// Start line: 284
	/* end block 2 */
	// End Line: 285

void PrintCDWaitTask__FP4TASK(TASK *T)

{
	TextDat *this;
	POLY_FT4 *pPVar1;
	
	this = GM_UseTexData__Fi(0);
	do {
		if (CDWAIT != (void *)0x0) {
			pPVar1 = PrintFt4__7TextDatiiiiii
												 (this,0x12,0x110 - ((uint)(CDAngle >> 1) + 1 & 1),0xc0,
													(uint)(CDAngle >> 1) & 1,0xff,0);
			pPVar1->r0 = -0x80;
			pPVar1->g0 = -0x80;
			pPVar1->b0 = -0x80;
			if (FeFlag == '\0') {
				pPVar1->code = pPVar1->code | 2;
			}
			pPVar1->code = pPVar1->code & 0xfe;
			CDAngle = CDAngle + '\x01';
		}
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitCDWaitIcon__Fv()
 // line 169, offset 0x8008ebf8
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x8008EBF8
	/* end block 1 */
	// End offset: 0x8008EC1C
	// End Line: 172

	/* begin block 2 */
		// Start line: 339
	/* end block 2 */
	// End Line: 340

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCDWaitIcon__Fv(void)

{
	CDWAIT = (void *)0x0;
	TSK_AddTask(0,PrintCDWaitTask__FP4TASK,0x800,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh /*$a0*/, char *e /*$a1*/)
 // line 181, offset 0x8008ec2c
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x8008EC38
	/* end block 1 */
	// End offset: 0x8008EC38
	// End Line: 182

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

void STR_Debug__FP6SFXHDRPce(SFXHDR *sfh,char *e)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_SystemTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 394, offset 0x8008ec40
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8008EC40
	/* end block 1 */
	// End offset: 0x8008EC78
	// End Line: 418

	/* begin block 2 */
		// Start line: 791
	/* end block 2 */
	// End Line: 792

void STR_SystemTask__FP4TASK(TASK *T)

{
	DBG_SendMessage("Started EA systemtask");
	InitCDWaitIcon__Fv();
	do {
		systemtask(0);
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_AllocBuffer__Fv()
 // line 427, offset 0x8008ec88
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x8008EC88

		/* begin block 1.1 */
			// Start line: 428
			// Start offset: 0x8008EC88

			/* begin block 1.1.1 */
				// Start line: 430
				// Start offset: 0x8008ECA0

				/* begin block 1.1.1.1 */
					// Start line: 436
					// Start offset: 0x8008ECA0
					// Variables:
				// 		int i; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x8008ECBC
				// End Line: 436
			/* end block 1.1.1 */
			// End offset: 0x8008ECCC
			// End Line: 438
		/* end block 1.1 */
		// End offset: 0x8008ECCC
		// End Line: 438
	/* end block 1 */
	// End offset: 0x8008ECCC
	// End Line: 438

	/* begin block 2 */
		// Start line: 857
	/* end block 2 */
	// End Line: 858

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_AllocBuffer__Fv(void)

{
	ulong *puVar1;
	int iVar2;
	
	if (FileSYS == 2) {
		iVar2 = 0x47ff;
		puVar1 = &ULONG_800bb9e0;
		do {
			*puVar1 = 0;
			iVar2 = iVar2 + -1;
			puVar1 = puVar1 + -1;
		} while (-1 < iVar2);
		DBG_SendMessage("STREAM BUFFER CLEARED");
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_Init__Fv()
 // line 443, offset 0x8008ecdc
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x8008ECDC

		/* begin block 1.1 */
			// Start line: 444
			// Start offset: 0x8008ECDC

			/* begin block 1.1.1 */
				// Start line: 446
				// Start offset: 0x8008ECF0
				// Variables:
			// 		unsigned char *ptr; // $a0
			// 		struct TASK *T; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 447
					// Start offset: 0x8008ECF0
				/* end block 1.1.1.1 */
				// End offset: 0x8008ED50
				// End Line: 460
			/* end block 1.1.1 */
			// End offset: 0x8008ED94
			// End Line: 471
		/* end block 1.1 */
		// End offset: 0x8008ED94
		// End Line: 471
	/* end block 1 */
	// End offset: 0x8008ED94
	// End Line: 471

	/* begin block 2 */
		// Start line: 890
	/* end block 2 */
	// End Line: 891

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_Init__Fv(void)

{
	TASK *T;
	int iVar1;
	ulong *puVar2;
	
	if (STRInit == (void *)0x0) {
		STR_AllocBuffer__Fv();
		DBG_SendMessage("Stream sec size = %d");
		puVar2 = STR_Buffer;
		Time = 0;
		iVar1 = 0;
		do {
			*(ulong **)((int)&SFXTab.mem + iVar1) = puVar2;
			(&SFXTab.used)[iVar1] = '\0';
			*(undefined4 *)((int)&SFXTab.SPUstreamaddr + iVar1) = 0;
			iVar1 = iVar1 + 0x80;
			puVar2 = puVar2 + 0x2400;
		} while (iVar1 < 0x100);
		T = TSK_AddTask(0,STR_SystemTask__FP4TASK,0x800,0);
		if (T == (TASK *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x1d3);
		}
		TSK_MakeTaskImmortal(T);
		STRInit = &DAT_00000001;
	}
	return;
}



// decompiled code
// original method signature: 
// struct SFXHDR * /*$ra*/ STR_InitStream__Fv()
 // line 481, offset 0x8008eda8
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x8008EDA8
		// Variables:
	// 		struct SFXHDR *sfh; // $s2

		/* begin block 1.1 */
			// Start line: 482
			// Start offset: 0x8008EDA8
			// Variables:
		// 		int s; // $s1
		/* end block 1.1 */
		// End offset: 0x8008EEB0
		// End Line: 538
	/* end block 1 */
	// End offset: 0x8008EEC4
	// End Line: 540

	/* begin block 2 */
		// Start line: 968
	/* end block 2 */
	// End Line: 969

/* WARNING: Unknown calling convention yet parameter storage is locked */

SFXHDR * STR_InitStream__Fv(void)

{
	ulong uVar1;
	char *in_a1;
	uint in_a2;
	uint *puVar2;
	uint uVar3;
	SFXHDR *pSVar4;
	
	pSVar4 = &SFXTab;
	uVar3 = 0;
	puVar2 = (uint *)&SFXTab.SPUstreamaddr;
	do {
		if (pSVar4->used == '\0') {
			pSVar4->used = '\x01';
			*(undefined *)((int)puVar2 + -0x3d) = 1;
			uVar1 = VID_GetTick__Fv();
			puVar2[1] = uVar1;
			uVar1 = VID_GetTick__Fv();
			puVar2[2] = uVar1;
			puVar2[0xb] = 2;
			puVar2[-9] = 0x3fd;
			puVar2[-8] = 0;
			puVar2[-4] = 0;
			puVar2[3] = 0;
			puVar2[-3] = 0;
			puVar2[-2] = 0;
			puVar2[-1] = 0;
			puVar2[4] = 0;
			puVar2[-7] = 0;
			*(undefined *)((int)puVar2 + -0x3e) = 0;
			puVar2[-6] = 0;
			puVar2[-5] = 0;
			puVar2[6] = 0;
			puVar2[-0xc] = uVar3;
			puVar2[7] = 0;
			*(undefined *)((int)puVar2 + -0x33) = 0;
			puVar2[8] = 0x69;
			uVar3 = SpuMalloc((uint)&DAT_00008ea0);
			*puVar2 = uVar3;
			if (uVar3 == 0xffffffff) {
				in_a1 = "psxsrc/STREAM.CPP";
				in_a2 = 0x210;
				DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x210);
			}
			SpuSetTransferStartAddr(*puVar2);
			SpuWrite0((uint)&DAT_00008e80,in_a1,in_a2);
			NoActiveStreams = NoActiveStreams + '\x01';
			return pSVar4;
		}
		puVar2 = puVar2 + 0x20;
		uVar3 = uVar3 + 1;
		pSVar4 = pSVar4 + 1;
	} while ((int)uVar3 < 2);
	DBG_SendMessage("ALL STREAMS USED");
	return (SFXHDR *)0x0;
}



// decompiled code
// original method signature: 
// struct SFXHDR * /*$ra*/ STR_PlaySound__FUscic(unsigned short Name /*$s0*/, char flag /*$s4*/, int volume /*$s1*/, char loop /*$s3*/)
 // line 549, offset 0x8008eee0
	/* begin block 1 */
		// Start line: 550
		// Start offset: 0x8008EEE0
		// Variables:
	// 		struct SFXHDR *sfh; // $s0
	// 		char tstring[32]; // stack offset -56
	/* end block 1 */
	// End offset: 0x8008EFF8
	// End Line: 610

	/* begin block 2 */
		// Start line: 1169
	/* end block 2 */
	// End Line: 1170

SFXHDR * STR_PlaySound__FUscic(ushort Name,char flag,int volume,char loop)

{
	uchar uVar1;
	SFXHDR *sfh;
	char *e;
	char acStack56 [32];
	
	STR_Init__Fv();
	sprintf(acStack56,&DAT_8012a9d8,(uint)Name);
	sfh = STR_InitStream__Fv();
	if (sfh == (SFXHDR *)0x0) {
		sfh = (SFXHDR *)0x0;
	}
	else {
		sfh->type = flag;
		sfh->loop = loop;
		sfh->volume = volume;
		sfh->s_volume = volume;
		STR_setvolume__FP6SFXHDR(sfh);
		uVar1 = leveltype;
		if (flag == '\0') {
			sfh->pitch = 0x3fd;
			sfh->spu_rate = 0x69;
			if (uVar1 != '\0') {
				SpuSetReverbVoice(1,1 << (sfh->voice & 0x1fU));
			}
			e = "PLAYING STREAM %s";
		}
		else {
			sfh->pitch = 0x7fa;
			sfh->spu_rate = 0xd2;
			SpuSetReverbVoice(0,1 << (sfh->voice & 0x1fU));
			e = "PLAYING MUSIC %s";
		}
		DBG_SendMessage(e);
		sprintf(sfh->name,"%s.VAG",acStack56);
		STR_StreamMainTask__FP6SFXHDRc(sfh,flag);
	}
	return sfh;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh /*$a0*/)
 // line 619, offset 0x8008f01c
	/* begin block 1 */
		// Start line: 620
		// Start offset: 0x8008F01C
	/* end block 1 */
	// End offset: 0x8008F064
	// End Line: 625

	/* begin block 2 */
		// Start line: 1311
	/* end block 2 */
	// End Line: 1312

void STR_setvolume__FP6SFXHDR(SFXHDR *sfh)

{
	voice_attr.mask = 3;
	voice_attr.voice = 1 << (sfh->voice & 0x1fU);
	voice_attr.volume.left = (short)sfh->volume;
	voice_attr.volume.right = (short)sfh->volume;
	SpuSetVoiceAttr((uint *)&voice_attr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh /*$a0*/)
 // line 649, offset 0x8008f074
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x8008F074
		// Variables:
	// 		int offs; // $a1
	/* end block 1 */
	// End offset: 0x8008F170
	// End Line: 681

	/* begin block 2 */
		// Start line: 1372
	/* end block 2 */
	// End Line: 1373

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
	SpuSetKeyOnWithAttr((uint *)&voice_attr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_pauseall__Fv()
 // line 690, offset 0x8008f180
	/* begin block 1 */
		// Start line: 691
		// Start offset: 0x8008F180

		/* begin block 1.1 */
			// Start line: 691
			// Start offset: 0x8008F180
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x8008F1B8
		// End Line: 695
	/* end block 1 */
	// End offset: 0x8008F1B8
	// End Line: 695

	/* begin block 2 */
		// Start line: 1577
	/* end block 2 */
	// End Line: 1578

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_pauseall__Fv(void)

{
	SFXHDR *sfh;
	int iVar1;
	
	iVar1 = 0;
	sfh = &SFXTab;
	do {
		STR_SoundCommand__FP6SFXHDRi(sfh,3);
		iVar1 = iVar1 + 1;
		sfh = sfh + 1;
	} while (iVar1 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_resumeall__Fv()
 // line 704, offset 0x8008f1d0
	/* begin block 1 */
		// Start line: 705
		// Start offset: 0x8008F1D0

		/* begin block 1.1 */
			// Start line: 705
			// Start offset: 0x8008F1D0
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x8008F208
		// End Line: 709
	/* end block 1 */
	// End offset: 0x8008F208
	// End Line: 709

	/* begin block 2 */
		// Start line: 1607
	/* end block 2 */
	// End Line: 1608

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STR_resumeall__Fv(void)

{
	SFXHDR *sfh;
	int iVar1;
	
	iVar1 = 0;
	sfh = &SFXTab;
	do {
		STR_SoundCommand__FP6SFXHDRi(sfh,4);
		iVar1 = iVar1 + 1;
		sfh = sfh + 1;
	} while (iVar1 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh /*$s0*/)
 // line 718, offset 0x8008f220
	/* begin block 1 */
		// Start line: 719
		// Start offset: 0x8008F220
	/* end block 1 */
	// End offset: 0x8008F278
	// End Line: 736

	/* begin block 2 */
		// Start line: 1637
	/* end block 2 */
	// End Line: 1638

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
 // line 745, offset 0x8008f28c
	/* begin block 1 */
		// Start line: 746
		// Start offset: 0x8008F28C
	/* end block 1 */
	// End offset: 0x8008F384
	// End Line: 787

	/* begin block 2 */
		// Start line: 1696
	/* end block 2 */
	// End Line: 1697

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
			STR_CloseStream__FP6SFXHDR(sfh);
			AS_CloseStream__FP6STRHDRP6SFXHDR(sfh->StreamHND,sfh);
			BL_CloseStreamFile__FP6STRHDR(sfh->StreamHND);
			sfh->TaskAlive = (void *)0x0;
			if (sfh->type == '\0') {
				DBG_SendMessage("STREAM %s SNUFFED IT");
				sghStream = (SFXHDR *)0x0;
				sgpStreamSFX = (TSFX *)0x0;
			}
			else {
				DBG_SendMessage("MUSIC %s SNUFFED IT");
				sghMusic = (SFXHDR *)0x0;
			}
			sprintf(sfh->name,&DAT_8012a9e8);
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
 // line 796, offset 0x8008f398
	/* begin block 1 */
		// Start line: 797
		// Start offset: 0x8008F398
	/* end block 1 */
	// End offset: 0x8008F530
	// End Line: 866

	/* begin block 2 */
		// Start line: 1798
	/* end block 2 */
	// End Line: 1799

char STR_Command__FP6SFXHDR(SFXHDR *sfh)

{
	int iVar1;
	
	switch((int)(((uint)(byte)sfh->state - 1) * 0x1000000) >> 0x18) {
	case 1:
	case 7:
		sfh->loop = '\0';
		return '\x01';
	case 2:
		sfh->volume = 0;
LAB_8008f428:
		STR_setvolume__FP6SFXHDR(sfh);
		return '\0';
	case 3:
		sfh->state = '\x01';
		sfh->volume = sfh->s_volume;
		STR_PlaySFX__FP6SFXHDR(sfh);
		return '\0';
	case 4:
		if (0 < sfh->volume) {
			sfh->volume = sfh->volume + -0x400;
			goto LAB_8008f428;
		}
		sfh->state = '\b';
		sfh->loop = '\0';
		break;
	case 6:
		iVar1 = sfh->stream_pos + -0x5f00;
		sfh->stream_playing = 0;
		sfh->SPU_pos = iVar1;
		sfh->state = '\x01';
		sfh->SPU_sec = (iVar1 / 0x2f80) % 3;
		break;
	case 8:
		STRSave.stream_read = sfh->stream_read;
		STRSave.stream_pos = sfh->stream_pos;
		STRSave.sec_num = sfh->sec_num;
		STRSave.SizeIn = sfh->SizeIn;
		return '\0';
	case 9:
		sfh->sec_num = STRSave.sec_num;
		sfh->stream_pos = STRSave.stream_pos;
		sfh->stream_read = STRSave.stream_read;
		AS_WasLastBlock__FiP6STRHDRP6SFXHDR(sfh->ah,sfh->StreamHND,sfh);
		sfh->SizeIn = STRSave.SizeIn;
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh /*$s3*/)
 // line 875, offset 0x8008f544
	/* begin block 1 */
		// Start line: 876
		// Start offset: 0x8008F544
		// Variables:
	// 		unsigned char *ptr; // $s1
	// 		int DMA_off; // $s4
	// 		int sec; // $s2
	/* end block 1 */
	// End offset: 0x8008F5E8
	// End Line: 895

	/* begin block 2 */
		// Start line: 1969
	/* end block 2 */
	// End Line: 1970

void STR_DMAControl__FP6SFXHDR(SFXHDR *sfh)

{
	int iVar1;
	uint in_a2;
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
		SpuSetTransferStartAddr((uint)(&DAT_00002f80 + -iVar1 + sfh->SPUstreamaddr + iVar3 * 0x2f80));
		SpuWrite((undefined2 *)(puVar2 + (int)(&DAT_00002f80 + -iVar1 + iVar3 * 0x3000 + 0x80)),
						 &DAT_00000be0,in_a2);
		SpuIsTransferCompleted(1);
		sfh->DMA_size = sfh->DMA_size + -0xbe0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh /*$s0*/, unsigned char *Src /*$a1*/, int size /*$s2*/)
 // line 905, offset 0x8008f60c
	/* begin block 1 */
		// Start line: 906
		// Start offset: 0x8008F60C
		// Variables:
	// 		int sec_num; // $s3
	// 		unsigned char *dp; // $s1
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8008F7C8
	// End Line: 983

	/* begin block 2 */
		// Start line: 2033
	/* end block 2 */
	// End Line: 2034

void STR_PlayStream__FP6SFXHDRPUci(SFXHDR *sfh,uchar *Src,int size)

{
	ushort uVar1;
	uchar *puVar2;
	ulong uVar3;
	int iVar4;
	uchar *puVar5;
	uint uVar6;
	
	uVar6 = size - 0x80;
	uVar1 = *(ushort *)Src;
	puVar5 = Src + 0x80;
	if ((uVar6 & 0xf) != 0) {
		STR_Debug__FP6SFXHDRPce(sfh,"ERROR - SFX size not div 16");
	}
	if ((uint)uVar1 != sfh->sec_num) {
		DBG_SendMessage("ERROR-GOT %d WANTED %d");
		STR_SoundCommand__FP6SFXHDRi(sfh,7);
	}
	if (sfh->stream_sec == 0) {
		Src[0x81] = '\x06';
		iVar4 = 0x10;
		Src = Src + 0x90;
		if (0x10 < (int)uVar6) {
			do {
				Src[1] = '\x02';
				iVar4 = iVar4 + 0x10;
				Src = puVar5 + iVar4;
			} while (iVar4 < (int)uVar6);
		}
	}
	else {
		if (sfh->stream_sec == 2) {
			iVar4 = 0;
			puVar2 = puVar5;
			if (0 < size + -0x90) {
				do {
					puVar2[1] = '\x02';
					iVar4 = iVar4 + 0x10;
					puVar2 = puVar5 + iVar4;
				} while (iVar4 < size + -0x90);
			}
			puVar5[iVar4 + 1] = '\x03';
		}
		else {
			iVar4 = 0;
			puVar2 = puVar5;
			if (0 < (int)uVar6) {
				do {
					puVar2[1] = '\x02';
					iVar4 = iVar4 + 0x10;
					puVar2 = puVar5 + iVar4;
				} while (iVar4 < (int)uVar6);
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
		uVar3 = 0xffffffff;
	}
	else {
		uVar3 = sfh->stream_playing - 1;
	}
	sfh->stream_playing = uVar3;
	sfh->sec_num = sfh->sec_num + 1;
	sfh->stream_read = sfh->stream_read + 0x80 + uVar6;
	sfh->stream_pos = sfh->stream_pos + uVar6;
	sfh->stream_offs = sfh->stream_offs + uVar6;
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
 // line 994, offset 0x8008f7e8
	/* begin block 1 */
		// Start line: 995
		// Start offset: 0x8008F7E8
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		struct STRHDR *StreamHND; // $s3
	// 		struct SFXHDR *sfh; // $s0
	// 		char Done; // $s1
	// 		int frame; // $s2
	// 		int framediff; // $s4
	// 		int AsyncHND; // $s5
	// 		unsigned char *ptr; // $v0
	// 		char OrigName[14]; // stack offset -48
	/* end block 1 */
	// End offset: 0x8008FAB8
	// End Line: 1116

	/* begin block 2 */
		// Start line: 2232
	/* end block 2 */
	// End Line: 2233

/* WARNING: Type propagation algorithm not settling */

void STR_AsyncWeeTASK__FP4TASK(TASK *T)

{
	int iVar1;
	char cVar2;
	char cVar3;
	int ah;
	int iVar4;
	ulong uVar5;
	char *e;
	SFXHDR *sfh;
	STRHDR *sh;
	char acStack48 [16];
	
	sh = *(STRHDR **)((STRHDR *)T->fActive)->Name;
	sfh = *(SFXHDR **)((int)((STRHDR *)T->fActive)->Name + 4);
	DBG_SendMessage("ASYNCWEE TASK");
	strcpy(acStack48,sfh->name);
	ah = AS_OpenStream__FP6STRHDRP6SFXHDR(sh,sfh);
	sfh->StreamHND = sh;
	if (ah == -1) {
		DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x3f6);
	}
	else {
		sfh->stream_playing = 0;
		do {
			iVar4 = strcmp(acStack48,sfh->name);
			if (iVar4 != 0) {
				sfh->TaskAlive = (void *)0x0;
				break;
			}
			cVar2 = STR_Command__FP6SFXHDR(sfh);
			uVar5 = VID_GetTick__Fv();
			iVar4 = uVar5 - sfh->framecount;
			if (sfh->SizeIn < 1) {
				cVar2 = '\x01';
			}
			if (cVar2 != '\0') {
				cVar2 = '\0';
				if (sfh->state == '\b') {
LAB_8008f934:
					cVar2 = '\x01';
				}
				else {
					if (sfh->stream_ending == 0) {
						sfh->stream_ending = 1;
					}
					else {
						if ((sh->Size <= sfh->SPU_pos) || (sfh->volume < 1)) {
							STR_SoundCommand__FP6SFXHDRi(sfh,8);
							STR_Debug__FP6SFXHDRPce(sfh,"STREAM ENDED");
							goto LAB_8008f934;
						}
					}
				}
			}
			if (sfh->state != '\x03') {
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
		} while (cVar2 == '\0');
		e = "MUSIC %s TASK SNUFFED IT";
		if (sfh->type == '\0') {
			e = "STREAM %s TASK SNUFFED IT";
		}
		DBG_SendMessage(e);
		if (sfh->TaskAlive != (void *)0x0) {
			STR_CloseStream__FP6SFXHDR(sfh);
			AS_CloseStream__FP6STRHDRP6SFXHDR(sh,sfh);
			BL_CloseStreamFile__FP6STRHDR(sh);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_AsyncTASK__FP4TASK(struct TASK *T /*$a0*/)
 // line 1128, offset 0x8008fae0
	/* begin block 1 */
		// Start line: 1129
		// Start offset: 0x8008FAE0
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		struct STRHDR *StreamHND; // $s5
	// 		struct SFXHDR *sfh; // $s0
	// 		char Done; // $s2
	// 		int latency; // $s1
	// 		int frame; // $s3
	// 		int framediff; // $s6
	// 		int AsyncHND; // $s4
	// 		unsigned char *ptr; // $v0
	// 		char OrigName[14]; // stack offset -48
	/* end block 1 */
	// End offset: 0x8008FEE0
	// End Line: 1296

	/* begin block 2 */
		// Start line: 2528
	/* end block 2 */
	// End Line: 2529

/* WARNING: Type propagation algorithm not settling */

void STR_AsyncTASK__FP4TASK(TASK *T)

{
	char cVar1;
	char cVar2;
	int ah;
	int iVar3;
	ulong uVar4;
	int iVar5;
	char *e;
	SFXHDR *sfh;
	int iVar6;
	STRHDR *sh;
	char acStack48 [16];
	
	sh = *(STRHDR **)((STRHDR *)T->fActive)->Name;
	sfh = *(SFXHDR **)((int)((STRHDR *)T->fActive)->Name + 4);
	DBG_SendMessage("ASYNC TASK");
	strcpy(acStack48,sfh->name);
	ah = AS_OpenStream__FP6STRHDRP6SFXHDR(sh,sfh);
	sfh->StreamHND = sh;
	if (ah == -1) {
		DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x47e);
	}
	else {
		do {
			iVar3 = strcmp(acStack48,sfh->name);
			if (iVar3 != 0) {
				sfh->TaskAlive = (void *)0x0;
				break;
			}
			cVar1 = STR_Command__FP6SFXHDR(sfh);
			uVar4 = VID_GetTick__Fv();
			iVar3 = uVar4 - sfh->framecount;
			if (sfh->SizeIn < 1) {
				cVar1 = '\x01';
			}
			if (cVar1 != '\0') {
				cVar1 = '\0';
				if (sfh->state == '\b') {
LAB_8008fc84:
					cVar1 = '\x01';
				}
				else {
					if (sfh->stream_ending == 0) {
						sfh->stream_ending = 1;
						STR_Debug__FP6SFXHDRPce(sfh,"ENDING STREAM");
					}
					else {
						if ((sh->Size <= sfh->SPU_pos) || (sfh->volume < 1)) {
							if (sfh->loop == '\0') {
								STR_SoundCommand__FP6SFXHDRi(sfh,8);
								STR_Debug__FP6SFXHDRPce(sfh,"STREAM ENDED");
								goto LAB_8008fc84;
							}
							ah = AS_LoopStream__FiP6STRHDRP6SFXHDR(ah,sh,sfh);
							sfh->stream_playing = 2;
							STR_Debug__FP6SFXHDRPce(sfh,"STREAM LOOPED");
						}
					}
				}
			}
			iVar6 = sfh->stream_pos - sfh->SPU_pos;
			if (((iVar6 < 0x2f80) && (sfh->playing != '\0')) && (sfh->stream_ending == 0)) {
				if (sfh->stream_stall == 1) {
					iVar5 = sfh->volume;
					sfh->volume = 0;
					sfh->s_volume = iVar5;
					STR_setvolume__FP6SFXHDR(sfh);
					DBG_SendMessage("STREAM STALLED");
				}
				else {
					STR_Debug__FP6SFXHDRPce(sfh,"SPU TOO FAST - RESYNCING");
					STR_SoundCommand__FP6SFXHDRi(sfh,7);
				}
				sfh->stream_stall = sfh->stream_stall + 1;
			}
			if (sfh->state != '\x03') {
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
		} while (cVar1 == '\0');
		e = "MUSIC %s TASK SNUFFED IT";
		if (sfh->type == '\0') {
			e = "STREAM %s TASK SNUFFED IT";
		}
		DBG_SendMessage(e);
		if (sfh->TaskAlive != (void *)0x0) {
			STR_CloseStream__FP6SFXHDR(sfh);
			AS_CloseStream__FP6STRHDRP6SFXHDR(sh,sfh);
			BL_CloseStreamFile__FP6STRHDR(sh);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh /*$s1*/, char FileType /*$a1*/)
 // line 1309, offset 0x8008ff0c
	/* begin block 1 */
		// Start line: 1310
		// Start offset: 0x8008FF0C
		// Variables:
	// 		struct STRHDR *sh; // $s2
	// 		struct DEF_ARGS *A; // $v0

		/* begin block 1.1 */
			// Start line: 1310
			// Start offset: 0x8008FF0C

			/* begin block 1.1.1 */
				// Start line: 1320
				// Start offset: 0x8008FF3C
				// Variables:
			// 		struct TASK *T2; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8008FFD8
			// End Line: 1341
		/* end block 1.1 */
		// End offset: 0x80090000
		// End Line: 1345
	/* end block 1 */
	// End offset: 0x80090000
	// End Line: 1345

	/* begin block 2 */
		// Start line: 2914
	/* end block 2 */
	// End Line: 2915

/* WARNING: Type propagation algorithm not settling */

void STR_StreamMainTask__FP6SFXHDRc(SFXHDR *sfh,char FileType)

{
	STRHDR *pSVar1;
	TASK *T;
	STRHDR *pSVar2;
	char *e;
	code *Main;
	
	pSVar1 = BL_OpenStreamFile__FPcc(sfh->name,'\0');
	if (pSVar1 == (STRHDR *)0x0) {
		DBG_SendMessage("OPEN STREAM ERROR");
		STR_CloseStream__FP6SFXHDR(sfh);
	}
	else {
		sfh->SizeIn = pSVar1->Size;
		if (pSVar1->Size < 0x8e81) {
			Main = STR_AsyncWeeTASK__FP4TASK;
		}
		else {
			Main = STR_AsyncTASK__FP4TASK;
		}
		T = TSK_AddTask(0x8000,Main,0x800,0x10);
		if (T == (TASK *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/STREAM.CPP",0x532);
		}
		TSK_MakeTaskImmortal(T);
		*(undefined **)&sfh->TaskAlive = &DAT_00000001;
		pSVar2 = (STRHDR *)T->fActive;
		*(STRHDR **)pSVar2->Name = pSVar1;
		*(SFXHDR **)((int)pSVar2->Name + 4) = sfh;
		e = "MUSIC %s IS BORN";
		if (sfh->type == '\0') {
			e = "STREAM %s IS BORN";
		}
		DBG_SendMessage(e);
	}
	return;
}





