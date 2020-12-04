#include "THISDUST.H"
#include "SNDBANK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SPU_Init__Fv()
 // line 140, offset 0x8009001c
	/* begin block 1 */
		// Start line: 141
		// Start offset: 0x8009001C

		/* begin block 1.1 */
			// Start line: 141
			// Start offset: 0x8009001C
			// Variables:
		// 		struct SpuCommonAttr common_attr; // stack offset -48
		/* end block 1.1 */
		// End offset: 0x800900D8
		// End Line: 178
	/* end block 1 */
	// End offset: 0x800900D8
	// End Line: 178

	/* begin block 2 */
		// Start line: 280
	/* end block 2 */
	// End Line: 281

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SPU_Init__Fv(void)

{
	char *pcVar1;
	uint *in_a2;
	uint local_30;
	undefined2 local_2c;
	undefined2 local_2a;
	
	SPU_Done = '\x01';
	SND_ClearBank__Fv();
	pcVar1 = spu_management;
	SpuInitMalloc(0x20,(undefined4 *)spu_management);
	SpuSetTransferStartAddr(0);
	SpuWrite0(0x80000,pcVar1,(uint)in_a2);
	local_30 = 3;
	local_2c = 0x3fff;
	local_2a = 0x3fff;
	SpuSetCommonAttr(&local_30);
	rev_attr.mask = 7;
	rev_attr.mode = 5;
	rev_attr.depth.left = 0x1000;
	rev_attr.depth.right = 0x1000;
	SpuSetReverbModeParam((uint *)&rev_attr,(uint *)pcVar1,in_a2);
	SpuSetReverb(1);
	SpuReserveReverbWorkArea(1);
	SpuSetReverbVoice(0,0xffffffff);
	rev_attr.mask = 6;
	SpuSetReverbDepth((uint *)&rev_attr);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_FindChannel__Fv()
 // line 190, offset 0x800900ec
	/* begin block 1 */
		// Start line: 191
		// Start offset: 0x800900EC
		// Variables:
	// 		char status[24]; // stack offset -32
	// 		int count; // $v1
	// 		int result; // $s0
	/* end block 1 */
	// End offset: 0x80090144
	// End Line: 204

	/* begin block 2 */
		// Start line: 388
	/* end block 2 */
	// End Line: 389

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
 // line 213, offset 0x80090158
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x80090158
		// Variables:
	// 		void * GalRet; // $s0
	/* end block 1 */
	// End offset: 0x800901BC
	// End Line: 224

	/* begin block 2 */
		// Start line: 441
	/* end block 2 */
	// End Line: 442

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SND_ClearBank__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	
	bVar1 = true;
	if (BankBase != 0) {
		SpuFree(BankBase);
	}
	if (OffsetHandle != 0) {
		uVar2 = GAL_Free(OffsetHandle);
		bVar1 = uVar2 != '\0';
	}
	if (!bVar1) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0xdb);
	}
	OffsetHandle = 0;
	BankBase = 0;
	NoSfx = 0;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SndLoadCallBack__FPUciib(unsigned char *Mem /*$s0*/, int ReadSoFar /*$a1*/, int Size /*$s1*/, void * LastChunk /*$a3*/)
 // line 232, offset 0x800901d0
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800901D0
		// Variables:
	// 		static int DestAddr; // offset 0x8012c034
	/* end block 1 */
	// End offset: 0x80090230
	// End Line: 246

	/* begin block 2 */
		// Start line: 479
	/* end block 2 */
	// End Line: 480

void * SndLoadCallBack__FPUciib(uchar *Mem,int ReadSoFar,int Size,void *LastChunk)

{
	uint uVar1;
	
	if (ReadSoFar == 0) {
		DestAddr_60 = BankBase;
	}
	uVar1 = Size;
	SpuSetTransferMode(0);
	SpuSetTransferStartAddr(DestAddr_60);
	SpuWrite((undefined2 *)Mem,(undefined *)Size,uVar1);
	SpuIsTransferCompleted(1);
	DestAddr_60 = DestAddr_60 + Size;
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SND_LoadBank__Fi(int lvlnum /*$s1*/)
 // line 250, offset 0x80090248
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x80090248
		// Variables:
	// 		struct FileIO *MyFileIO; // $s0
	// 		char BankFile[16]; // stack offset -32
	/* end block 1 */
	// End offset: 0x80090360
	// End Line: 290

	/* begin block 2 */
		// Start line: 517
	/* end block 2 */
	// End Line: 518

void SND_LoadBank__Fi(int lvlnum)

{
	FileIO *this;
	uint uVar1;
	char acStack32 [16];
	
	SND_ClearBank__Fv();
	SPU_Init__Fv();
	if (0x11 < lvlnum) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x106);
	}
	sprintf(acStack32,"Level%d.bnk",lvlnum);
	this = SYSI_GetFs__Fv();
	uVar1 = FileLen__6FileIOPCc(this,acStack32);
	BankBase = SpuMalloc(uVar1);
	if (BankBase == 0xffffffff) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x113);
	}
	StreamFile__6FileIOPCciPFPUciib_bii(this,acStack32,0x8000,SndLoadCallBack__FPUciib,0,-1);
	sprintf(acStack32,"Level%d.bof",lvlnum);
	OffsetHandle = Read__6FileIOPCcUl(this,acStack32,1);
	uVar1 = FileLen__6FileIOPCc(this,acStack32);
	NoSfx = (ushort)((uVar1 & 0xffff) / 0xc);
	BankOffsets = (bank_entry *)GAL_Lock(OffsetHandle);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_FindSFX__FUs(unsigned short Name /*$a0*/)
 // line 355, offset 0x8009037c
	/* begin block 1 */
		// Start line: 356
		// Start offset: 0x8009037C

		/* begin block 1.1 */
			// Start line: 356
			// Start offset: 0x8009037C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800903C0
		// End Line: 360
	/* end block 1 */
	// End offset: 0x800903C4
	// End Line: 361

	/* begin block 2 */
		// Start line: 731
	/* end block 2 */
	// End Line: 732

int SND_FindSFX__FUs(ushort Name)

{
	int iVar1;
	bank_entry *pbVar2;
	
	iVar1 = 0;
	pbVar2 = BankOffsets;
	if (NoSfx != 0) {
		do {
			if (pbVar2->Name == Name) {
				return iVar1;
			}
			iVar1 = iVar1 + 1;
			pbVar2 = pbVar2 + 1;
		} while (iVar1 < (int)(uint)NoSfx);
	}
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SND_StopSnd__Fi(int voice /*$a0*/)
 // line 384, offset 0x800903d0
	/* begin block 1 */
		// Start line: 385
		// Start offset: 0x800903D0
	/* end block 1 */
	// End offset: 0x800903E4
	// End Line: 387

	/* begin block 2 */
		// Start line: 789
	/* end block 2 */
	// End Line: 790

void SND_StopSnd__Fi(int voice)

{
	SpuSetKey(0,0xffffffff);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_RemapSnd__Fi(int SFXNo /*$a0*/)
 // line 396, offset 0x800903f4
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x800903F4

		/* begin block 1.1 */
			// Start line: 397
			// Start offset: 0x800903F4
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80090448
		// End Line: 401
	/* end block 1 */
	// End offset: 0x8009044C
	// End Line: 402

	/* begin block 2 */
		// Start line: 813
	/* end block 2 */
	// End Line: 814

int SND_RemapSnd__Fi(int SFXNo)

{
	int iVar1;
	ushort *puVar2;
	ushort *puVar3;
	
	iVar1 = 0;
	if (0 < NoSNDRemaps) {
		puVar2 = &SFXRemapTab;
		puVar3 = &USHORT_801208ea;
		do {
			iVar1 = iVar1 + 1;
			if ((uint)*puVar2 == SFXNo) {
				return (uint)*puVar3;
			}
			puVar3 = puVar3 + 2;
			puVar2 = puVar2 + 2;
		} while (iVar1 < NoSNDRemaps);
	}
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SND_PlaySnd__FUsiii(unsigned short Name /*$s0*/, int vol /*$s4*/, int pan /*$s5*/, int pitchadj /*$s6*/)
 // line 411, offset 0x80090458
	/* begin block 1 */
		// Start line: 412
		// Start offset: 0x80090458
		// Variables:
	// 		struct SpuVoiceAttr voice_attr; // stack offset -96
	// 		int Offset; // $s3
	// 		int sfxnum; // $v1
	// 		int voice; // $s1
	/* end block 1 */
	// End offset: 0x800905E0
	// End Line: 475

	/* begin block 2 */
		// Start line: 855
	/* end block 2 */
	// End Line: 856

int SND_PlaySnd__FUsiii(ushort Name,int vol,int pan,int pitchadj)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	ulong uVar4;
	uint local_60;
	undefined4 local_5c;
	undefined2 local_58;
	undefined2 local_56;
	short local_4c;
	int local_44;
	
	SFXNotPlayed = '\0';
	SFXNotInBank = '\0';
	if (BankOffsets == (bank_entry *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x1a7);
	}
	if (BankBase == 0) {
		DBG_Error((char *)0x0,"psxsrc/SNDBANK.CPP",0x1a8);
	}
	iVar1 = SND_FindSFX__FUs(Name);
	if ((iVar1 == -1) && (iVar1 = SND_RemapSnd__Fi((uint)Name), iVar1 == -1)) {
		DBG_SendMessage("SFX MISS - %04X");
		SFXNotInBank = '\x01';
		uVar2 = 0;
	}
	else {
		uVar4 = BankOffsets[iVar1].offset;
		uVar2 = SND_FindChannel__Fv();
		if (uVar2 == 0xffffffff) {
			uVar2 = 0;
		}
		else {
			local_5c = 0x93;
			uVar3 = 1 << (uVar2 & 0x1f);
			local_58 = (undefined2)((uint)((0x10000 - pan) * vol) >> 0x10);
			local_56 = (undefined2)((uint)(pan * vol) >> 0x10);
			local_44 = BankBase + uVar4;
			local_4c = BankOffsets[iVar1].pitch + (short)pitchadj;
			local_60 = uVar3;
			SpuSetKeyOnWithAttr(&local_60);
			if (leveltype != '\0') {
				SpuSetReverbVoice(1,uVar3);
			}
		}
	}
	return uVar2;
}





