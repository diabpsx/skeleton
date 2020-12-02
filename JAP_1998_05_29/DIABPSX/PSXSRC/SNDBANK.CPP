#include "THISDUST.H"
#include "SNDBANK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SND_Monitor__FP4TASK(struct TASK *T /*$a0*/)
 // line 145, offset 0x8009a198
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8009A198
		// Variables:
	// 		char status[24]; // stack offset -40

		/* begin block 1.1 */
			// Start line: 149
			// Start offset: 0x8009A1BC

			/* begin block 1.1.1 */
				// Start line: 151
				// Start offset: 0x8009A1BC
				// Variables:
			// 		int i; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8009A1F8
			// End Line: 159
		/* end block 1.1 */
		// End offset: 0x8009A1F8
		// End Line: 160
	/* end block 1 */
	// End offset: 0x8009A208
	// End Line: 160

	/* begin block 2 */
		// Start line: 290
	/* end block 2 */
	// End Line: 291

void SND_Monitor__FP4TASK(TASK *T)

{
	char *pcVar1;
	ushort *puVar2;
	int iVar3;
	undefined auStack40 [2];
	char local_26 [22];
	
	do {
		SpuGetAllKeysStatus(auStack40);
		iVar3 = 2;
		puVar2 = &USHORT_8011cd9c;
		pcVar1 = local_26;
		do {
			if (*pcVar1 != '\x01') {
				*puVar2 = 0;
			}
			puVar2 = puVar2 + 1;
			iVar3 = iVar3 + 1;
			pcVar1 = pcVar1 + 1;
		} while (iVar3 < 0x18);
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ SPU_OnceOnlyInit__Fv()
 // line 164, offset 0x8009a224
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x8009A224
	/* end block 1 */
	// End offset: 0x8009A24C
	// End Line: 167

	/* begin block 2 */
		// Start line: 337
	/* end block 2 */
	// End Line: 338

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SPU_OnceOnlyInit__Fv(void)

{
	SPU_Init__Fv();
	TSK_AddTask(0x8000,SND_Monitor__FP4TASK,0x400,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SPU_Init__Fv()
 // line 175, offset 0x8009a25c
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x8009A25C

		/* begin block 1.1 */
			// Start line: 176
			// Start offset: 0x8009A25C
			// Variables:
		// 		struct SpuCommonAttr common_attr; // stack offset -56

			/* begin block 1.1.1 */
				// Start line: 176
				// Start offset: 0x8009A25C
				// Variables:
			// 		int i; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8009A294
			// End Line: 183
		/* end block 1.1 */
		// End offset: 0x8009A34C
		// End Line: 219
	/* end block 1 */
	// End offset: 0x8009A34C
	// End Line: 219

	/* begin block 2 */
		// Start line: 359
	/* end block 2 */
	// End Line: 360

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SPU_Init__Fv(void)

{
	int voice;
	ushort *puVar1;
	undefined4 local_38;
	undefined2 local_34;
	undefined2 local_32;
	
	voice = 2;
	puVar1 = &USHORT_8011cd9c;
	do {
		SND_StopSnd__Fi(voice);
		*puVar1 = 0;
		voice = voice + 1;
		puVar1 = puVar1 + 1;
	} while (voice < 0x18);
	SND_ClearBank__Fv();
	SpuInitMalloc(0x20,spu_management);
	SpuSetTransferMode(0);
	SpuSetTransferStartAddr(0);
	SpuWrite0(0x80000);
	SpuIsTransferCompleted(1);
	local_38 = 3;
	local_34 = 0x3fff;
	local_32 = 0x3fff;
	SpuSetCommonAttr(&local_38);
	rev_attr.mask = 7;
	rev_attr.mode = 5;
	rev_attr.depth.left = 0x666;
	rev_attr.depth.right = 0x666;
	SpuSetReverbModeParam(&rev_attr);
	SpuSetReverb(1);
	SpuReserveReverbWorkArea(1);
	SpuSetReverbVoice(0,0xffffffff);
	rev_attr.mask = 6;
	SpuSetReverbDepth();
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_FindChannel__Fv()
 // line 231, offset 0x8009a364
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x8009A364
		// Variables:
	// 		char status[24]; // stack offset -32
	// 		int count; // $v1
	// 		int result; // $s0
	/* end block 1 */
	// End offset: 0x8009A3BC
	// End Line: 245

	/* begin block 2 */
		// Start line: 482
	/* end block 2 */
	// End Line: 483

/* WARNING: Unknown calling convention yet parameter storage is locked */

int SND_FindChannel__Fv(void)

{
	int iVar1;
	char *pcVar2;
	int iVar3;
	undefined auStack32 [2];
	char local_1e [22];
	
	iVar3 = -1;
	SpuGetAllKeysStatus(auStack32);
	iVar1 = 2;
	pcVar2 = local_1e;
	do {
		if (iVar3 != -1) {
			return iVar3;
		}
		if (*pcVar2 != '\x01') {
			iVar3 = iVar1;
		}
		iVar1 = iVar1 + 1;
		pcVar2 = pcVar2 + 1;
	} while (iVar1 < 0x18);
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SND_ClearBank__Fv()
 // line 254, offset 0x8009a3d0
	/* begin block 1 */
		// Start line: 255
		// Start offset: 0x8009A3D0

		/* begin block 1.1 */
			// Start line: 259
			// Start offset: 0x8009A3EC

			/* begin block 1.1.1 */
				// Start line: 260
				// Start offset: 0x8009A3FC
			/* end block 1.1.1 */
			// End offset: 0x8009A424
			// End Line: 266
		/* end block 1.1 */
		// End offset: 0x8009A424
		// End Line: 266
	/* end block 1 */
	// End offset: 0x8009A42C
	// End Line: 270

	/* begin block 2 */
		// Start line: 532
	/* end block 2 */
	// End Line: 533

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SND_ClearBank__Fv(void)

{
	uchar uVar1;
	
	if (BankBase != 0) {
		SpuFree();
	}
	if (OffsetHandle != -1) {
		uVar1 = GAL_Free(OffsetHandle);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x107);
		}
		OffsetHandle = -1;
	}
	BankBase = 0;
	NoSfx = 0;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SndLoadCallBack__FPUciib(unsigned char *Mem /*$s0*/, int ReadSoFar /*$a1*/, int Size /*$s1*/, void * LastChunk /*$a3*/)
 // line 278, offset 0x8009a440
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x8009A440
		// Variables:
	// 		static int DestAddr; // offset 0x8011c6a8
	/* end block 1 */
	// End offset: 0x8009A4A0
	// End Line: 292

	/* begin block 2 */
		// Start line: 580
	/* end block 2 */
	// End Line: 581

void * SndLoadCallBack__FPUciib(uchar *Mem,int ReadSoFar,int Size,void *LastChunk)

{
	if (ReadSoFar == 0) {
		DestAddr_66 = BankBase;
	}
	SpuSetTransferMode(0);
	SpuSetTransferStartAddr(DestAddr_66);
	SpuWrite(Mem,Size);
	SpuIsTransferCompleted(1);
	DestAddr_66 = DestAddr_66 + Size;
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SND_LoadBank__Fi(int lvlnum /*$s1*/)
 // line 296, offset 0x8009a4b8
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8009A4B8
		// Variables:
	// 		struct FileIO *MyFileIO; // $s0
	// 		char BankFile[16]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8009A5C0
	// End Line: 335

	/* begin block 2 */
		// Start line: 618
	/* end block 2 */
	// End Line: 619

void SND_LoadBank__Fi(int lvlnum)

{
	FileIO *this;
	int iVar1;
	uint uVar2;
	char acStack32 [16];
	
	SND_ClearBank__Fv();
	SPU_Init__Fv();
	if (0x11 < lvlnum) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x134);
	}
	sprintf(acStack32,"Level%d.bnk",lvlnum);
	this = SYSI_GetFs__Fv();
	iVar1 = FileLen__6FileIOPCc(this,acStack32);
	BankBase = SpuMalloc(iVar1);
	if (BankBase == -1) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x141);
	}
	StreamFile__6FileIOPCciPFPUciib_bii(this,acStack32,0x8000,SndLoadCallBack__FPUciib,0,-1);
	sprintf(acStack32,"Level%d.bof",lvlnum);
	OffsetHandle = Read__6FileIOPCcUl(this,acStack32,1);
	uVar2 = FileLen__6FileIOPCc(this,acStack32);
	NoSfx = (ushort)((uVar2 & 0xffff) / 0xc);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_FindSFX__FUs(unsigned short Name /*$s2*/)
 // line 410, offset 0x8009a5dc
	/* begin block 1 */
		// Start line: 411
		// Start offset: 0x8009A5DC
		// Variables:
	// 		struct bank_entry *BankOffsets; // $s1
	// 		int RetVal; // $s0

		/* begin block 1.1 */
			// Start line: 417
			// Start offset: 0x8009A61C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8009A66C
		// End Line: 425
	/* end block 1 */
	// End offset: 0x8009A69C
	// End Line: 430

	/* begin block 2 */
		// Start line: 848
	/* end block 2 */
	// End Line: 849

int SND_FindSFX__FUs(ushort Name)

{
	uchar uVar1;
	int iVar2;
	ushort *puVar3;
	int iVar4;
	
	puVar3 = (ushort *)GAL_Lock(OffsetHandle);
	if (puVar3 == (ushort *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x1a0);
	}
	iVar4 = -1;
	iVar2 = 0;
	if (NoSfx != 0) {
		do {
			if (iVar4 != -1) break;
			if (*puVar3 == Name) {
				iVar4 = iVar2;
			}
			iVar2 = iVar2 + 1;
			puVar3 = puVar3 + 6;
		} while (iVar2 < (int)(uint)NoSfx);
	}
	uVar1 = GAL_Unlock(OffsetHandle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x1ab);
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SND_StopSnd__Fi(int voice /*$a0*/)
 // line 453, offset 0x8009a6b8
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x8009A6B8
	/* end block 1 */
	// End offset: 0x8009A6DC
	// End Line: 457

	/* begin block 2 */
		// Start line: 939
	/* end block 2 */
	// End Line: 940

void SND_StopSnd__Fi(int voice)

{
	SpuSetReverbVoice(0,1 << (voice & 0x1fU));
	SpuSetKey(0,0xffffffff);
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SND_IsSfxPlaying__Fi(int SFXNo /*$a0*/)
 // line 466, offset 0x8009a6ec
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x8009A6EC

		/* begin block 1.1 */
			// Start line: 468
			// Start offset: 0x8009A6EC
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8009A71C
		// End Line: 473
	/* end block 1 */
	// End offset: 0x8009A720
	// End Line: 474

	/* begin block 2 */
		// Start line: 966
	/* end block 2 */
	// End Line: 967

void * SND_IsSfxPlaying__Fi(int SFXNo)

{
	ushort *puVar1;
	int iVar2;
	
	iVar2 = 2;
	puVar1 = &USHORT_8011cd9c;
	do {
		if ((uint)*puVar1 == SFXNo + 1U) {
			return &DAT_00000001;
		}
		iVar2 = iVar2 + 1;
		puVar1 = puVar1 + 1;
	} while (iVar2 < 0x18);
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_RemapSnd__Fi(int SFXNo /*$a0*/)
 // line 483, offset 0x8009a728
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x8009A728

		/* begin block 1.1 */
			// Start line: 484
			// Start offset: 0x8009A728
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8009A788
		// End Line: 488
	/* end block 1 */
	// End offset: 0x8009A78C
	// End Line: 489

	/* begin block 2 */
		// Start line: 999
	/* end block 2 */
	// End Line: 1000

int SND_RemapSnd__Fi(int SFXNo)

{
	int iVar1;
	ushort *puVar2;
	ushort *puVar3;
	
	iVar1 = 0;
	if (0 < NoSNDRemaps) {
		puVar2 = &SFXRemapTab;
		puVar3 = &USHORT_801109ca;
		do {
			iVar1 = iVar1 + 1;
			if ((uint)*puVar2 == SFXNo) {
				iVar1 = SND_FindSFX__FUs(*puVar3);
				return iVar1;
			}
			puVar3 = puVar3 + 2;
			puVar2 = puVar2 + 2;
		} while (iVar1 < NoSNDRemaps);
	}
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_PlaySnd__FUsiii(unsigned short Name /*$s4*/, int vol /*$s0*/, int pan /*$s6*/, int pitchadj /*$s7*/)
 // line 498, offset 0x8009a79c
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x8009A79C
		// Variables:
	// 		int RetVal; // $s5

		/* begin block 1.1 */
			// Start line: 502
			// Start offset: 0x8009A7F0

			/* begin block 1.1.1 */
				// Start line: 505
				// Start offset: 0x8009A804
				// Variables:
			// 		int sfxnum; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 515
					// Start offset: 0x8009A81C

					/* begin block 1.1.1.1.1 */
						// Start line: 523
						// Start offset: 0x8009A83C
						// Variables:
					// 		int voice; // $s3

						/* begin block 1.1.1.1.1.1 */
							// Start line: 526
							// Start offset: 0x8009A83C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 529
								// Start offset: 0x8009A854
								// Variables:
							// 		struct bank_entry *BankOffsets; // $s1
							// 		int Offset; // $a2
							// 		struct SpuVoiceAttr voice_attr; // stack offset -104
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8009A980
							// End Line: 568
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009A980
						// End Line: 568
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009A980
					// End Line: 568
				/* end block 1.1.1.1 */
				// End offset: 0x8009A980
				// End Line: 568
			/* end block 1.1.1 */
			// End offset: 0x8009A980
			// End Line: 568
		/* end block 1.1 */
		// End offset: 0x8009A980
		// End Line: 568
	/* end block 1 */
	// End offset: 0x8009A984
	// End Line: 573

	/* begin block 2 */
		// Start line: 1030
	/* end block 2 */
	// End Line: 1031

int SND_PlaySnd__FUsiii(ushort Name,int vol,int pan,int pitchadj)

{
	uchar uVar1;
	undefined *puVar2;
	int iVar3;
	uint uVar4;
	void *pvVar5;
	uint uVar6;
	int local_68;
	undefined4 local_64;
	undefined2 local_60;
	undefined2 local_5e;
	short local_54;
	int local_4c;
	
	if (BankBase == 0) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",499);
	}
	puVar2 = (undefined *)IsGameLoading__Fv();
	uVar6 = 0;
	if (puVar2 != &DAT_00000001) {
		iVar3 = SND_FindSFX__FUs(Name);
		if ((iVar3 == -1) && (iVar3 = SND_RemapSnd__Fi((uint)Name), iVar3 == -1)) {
			SFXNotInBank = '\x01';
			uVar6 = 0;
		}
		else {
			uVar4 = SND_FindChannel__Fv();
			uVar6 = 0;
			if (uVar4 != 0xffffffff) {
				if ((ushort)(Name - 0x3c5) < 4) {
					vol = vol << 3;
				}
				if (Name == 0x50) {
					vol = vol << 3;
				}
				if (0x3fff < vol) {
					vol = 0x3fff;
				}
				pvVar5 = GAL_Lock(OffsetHandle);
				if (pvVar5 == (void *)0x0) {
					DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x221);
				}
				pvVar5 = (void *)(iVar3 * 0xc + (int)pvVar5);
				local_4c = *(int *)((int)pvVar5 + 4);
				CHStatus[uVar4] = Name + 1;
				local_64 = 0x93;
				iVar3 = 1 << (uVar4 & 0x1f);
				local_60 = (undefined2)((uint)((0x10000 - pan) * vol) >> 0x10);
				local_5e = (undefined2)((uint)(pan * vol) >> 0x10);
				local_4c = BankBase + local_4c;
				local_54 = *(short *)((int)pvVar5 + 10) + (short)pitchadj;
				local_68 = iVar3;
				SpuSetKeyOnWithAttr(&local_68);
				if (leveltype != '\0') {
					SpuSetReverbVoice(1,iVar3);
				}
				uVar1 = GAL_Unlock(OffsetHandle);
				uVar6 = uVar4;
				if (uVar1 == '\0') {
					DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x237);
					uVar6 = uVar4;
				}
			}
		}
	}
	return uVar6;
}





