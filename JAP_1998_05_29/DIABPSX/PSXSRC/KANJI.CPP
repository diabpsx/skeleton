#include "THISDUST.H"
#include "KANJI.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LoadKanjiFont__FPc(char *name /*$s2*/)
 // line 71, offset 0x800ad218
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x800AD218
		// Variables:
	// 		struct FileIO *Fs; // $s1
	/* end block 1 */
	// End offset: 0x800AD2A8
	// End Line: 91

	/* begin block 2 */
		// Start line: 142
	/* end block 2 */
	// End Line: 143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadKanjiFont__FPc(char *name)

{
	FileIO *this;
	undefined *puVar1;
	
	this = SYSI_GetFs__Fv();
	CDWAIT = &DAT_00000001;
	stream_stop__Fv();
	if ((FileSYS == 1) || (puVar1 = (undefined *)IsGameLoading__Fv(), puVar1 == &DAT_00000001)) {
		ReadAtAddr__6FileIOPCcPUci(this,name,KanjiFontData,-1);
	}
	else {
		BL_LoadFileAtAddr__FPcPUcc(name,KanjiFontData,'\0');
		BL_WaitForAsyncFinish__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeKanji__Fv()
 // line 107, offset 0x800ad2c4
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x800AD2C4
	/* end block 1 */
	// End offset: 0x800AD2C8
	// End Line: 122

	/* begin block 2 */
		// Start line: 228
	/* end block 2 */
	// End Line: 229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeKanji__Fv(void)

{
	CacheLen = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearKanjiCount__Fv()
 // line 127, offset 0x800ad2d0
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800AD2D0
		// Variables:
	// 		struct vbuffS *kl; // $a0
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800AD2FC
	// End Line: 136

	/* begin block 2 */
		// Start line: 254
	/* end block 2 */
	// End Line: 255

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearKanjiCount__Fv(void)

{
	int iVar1;
	vbuffS *pvVar2;
	
	iVar1 = 0;
	pvVar2 = KanjiCache;
	if (0 < CacheLen) {
		do {
			pvVar2->count = '\0';
			iVar1 = iVar1 + 1;
			pvVar2 = pvVar2 + 1;
		} while (iVar1 < CacheLen);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearKanjiBuffer__Fv()
 // line 139, offset 0x800ad308
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x800AD308
		// Variables:
	// 		struct vbuffS *kl; // $a0
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800AD33C
	// End Line: 150

	/* begin block 2 */
		// Start line: 281
	/* end block 2 */
	// End Line: 282

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearKanjiBuffer__Fv(void)

{
	int iVar1;
	int iVar2;
	vbuffS *pvVar3;
	
	iVar1 = CacheLen;
	iVar2 = 0;
	pvVar3 = KanjiCache;
	if (0 < CacheLen) {
		do {
			pvVar3->kan = 0;
			iVar2 = iVar2 + 1;
			pvVar3 = pvVar3 + 1;
		} while (iVar2 < iVar1);
	}
	ClearKanjiCount__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct /*$s0*/)
 // line 154, offset 0x800ad34c
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x800AD34C
		// Variables:
	// 		struct CBlocks *BgBlocks; // $s1

		/* begin block 1.1 */
			// Start line: 169
			// Start offset: 0x800AD38C

			/* begin block 1.1.1 */
				// Start line: 170
				// Start offset: 0x800AD394
				// Variables:
			// 		struct TextDat *Dat; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800AD47C
			// End Line: 194

			/* begin block 1.1.2 */
				// Start line: 198
				// Start offset: 0x800AD48C
				// Variables:
			// 		struct TextDat *Dat; // $s0

				/* begin block 1.1.2.1 */
					// Start line: 222
					// Start offset: 0x800AD4EC

					/* begin block 1.1.2.1.1 */
						// Start line: 223
						// Start offset: 0x800AD528
					/* end block 1.1.2.1.1 */
					// End offset: 0x800AD548
					// End Line: 227
				/* end block 1.1.2.1 */
				// End offset: 0x800AD548
				// End Line: 227
			/* end block 1.1.2 */
			// End offset: 0x800AD5C0
			// End Line: 237
		/* end block 1.1 */
		// End offset: 0x800AD5C0
		// End Line: 237
	/* end block 1 */
	// End offset: 0x800AD5C0
	// End Line: 237

	/* begin block 2 */
		// Start line: 315
	/* end block 2 */
	// End Line: 316

/* WARNING: Unknown calling convention yet parameter storage is locked */

void KANJI_SetCache__F10KANJI_FRMS(KANJI_FRMS ct)

{
	TextDat *this;
	CBlocks *this_00;
	int Id;
	TASK *pTVar1;
	
	this_00 = BL_GetCurrentBlocks__Fv();
	if (ct == KANJI_QUEST) {
		Id = 200;
	}
	else {
		Id = 0x50;
		if (ct != KANJI_MAIN) goto LAB_800ad38c;
	}
	CacheLen = Id;
LAB_800ad38c:
	if (ct == KANJI_QUEST) {
		KanjiCacheType = ct;
		if ((this_00 != (CBlocks *)0x0) &&
			 (KanjiCacheType = ct, GLUE_SetShowGameScreenFlag__Fb((void *)0x0), leveltype == '\0')) {
			DumpMonsters__7CBlocks(this_00);
		}
		CDWAIT = &DAT_00000001;
		if (KanjiGfxTData == (TextDat *)0x0) {
			Id = 0x122;
			if (FeFlag != '\0') {
				Id = 0x123;
			}
			KanjiGfxTData = GM_UseTexData__Fi(Id);
			if (KanjiGfxTData == (TextDat *)0x0) {
				DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0xb8);
			}
		}
		KanjiBuffers = GetDecompBuffers__7TextDat(KanjiGfxTData);
		if (KanjiBuffers == (ALL_DECOMP_BUFFERS *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0xbb);
		}
		this = AllDats372[0];
		if (AllDats372[0] == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0xbe);
		}
		KanjiPalFrame = GetFr__7TextDati(this,0x39);
		if (KanjiPalFrame != (FRAME_HDR *)0x0) {
			return;
		}
		Id = 0xc1;
	}
	else {
		KanjiCacheType = ct;
		if (KanjiGfxTData != (TextDat *)0x0) {
			KanjiCacheType = ct;
			GM_FinishedUsing__FP7TextDat(KanjiGfxTData);
			KanjiGfxTData = (TextDat *)0x0;
		}
		if (this_00 != (CBlocks *)0x0) {
			CDWAIT = &DAT_00000001;
			if (leveltype == '\0') {
				SetTownersGraphics__7CBlocks(this_00);
				Id = 0xcd;
			}
			else {
				Id = 0xd0;
			}
			GM_ForceTpLoad__Fi(Id);
			GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
		}
		if (((FeFlag != '\0') || ((stextflag == '\0' && (questlog == '\0')))) &&
			 (pTVar1 = TSK_Exist((TASK *)0x0,0x4000,0xffffffff), pTVar1 != (TASK *)0x0)) {
			GLUE_ResumeGame__Fv();
		}
		this = AllDats372[0];
		if (AllDats372[0] == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0xe6);
		}
		KanjiBuffers = GetDecompBuffers__7TextDat(this);
		if (KanjiBuffers == (ALL_DECOMP_BUFFERS *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0xe9);
		}
		KanjiPalFrame = GetFr__7TextDati(this,0x39);
		if (KanjiPalFrame != (FRAME_HDR *)0x0) {
			return;
		}
		Id = 0xec;
	}
	DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",Id);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo /*$s0*/)
 // line 245, offset 0x800ad5d8
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x800AD5D8
	/* end block 1 */
	// End offset: 0x800AD6F4
	// End Line: 279

	/* begin block 2 */
		// Start line: 500
	/* end block 2 */
	// End Line: 501

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadKanji__F10LANG_DB_NO(LANG_DB_NO NewLangDbNo)

{
	KANJI_FRMS ct;
	char *name;
	
	FreeKanji__Fv();
	if (NewLangDbNo == LANG_DB_QUEST) {
		name = "questtxt.out";
LAB_800ad6b8:
		LoadKanjiFont__FPc(name);
		ct = KANJI_QUEST;
	}
	else {
		if ((int)NewLangDbNo < 2) {
			if (NewLangDbNo == LANG_DB_MAIN) {
				LoadKanjiFont__FPc("maintxt.out");
				KANJI_SetCache__F10KANJI_FRMS(KANJI_MAIN);
				if (qtextflag != '\0') {
					qtextflag = '\0';
					PauseMode = '\0';
					if (FeFlag == '\0') {
						gbProcessPlayers = '\x01';
					}
				}
			}
			goto LAB_800ad6cc;
		}
		if (NewLangDbNo == LANG_DB_BACK) {
			name = "backtxt.out";
			goto LAB_800ad6b8;
		}
		if (NewLangDbNo != LANG_DB_CREDITS) goto LAB_800ad6cc;
		LoadKanjiFont__FPc("credtxt.out");
		ct = KANJI_MAIN;
	}
	KANJI_SetCache__F10KANJI_FRMS(ct);
LAB_800ad6cc:
	if (CacheLen == 0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x114);
	}
	ClearKanjiBuffer__Fv();
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SetKanjiLoaded__Fb(void * loaded /*$a0*/)
 // line 286, offset 0x800ad708
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x800AD708
		// Variables:
	// 		void * iret; // $v0
	/* end block 1 */
	// End offset: 0x800AD710
	// End Line: 290

	/* begin block 2 */
		// Start line: 585
	/* end block 2 */
	// End Line: 586

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * SetKanjiLoaded__Fb(void *loaded)

{
	void *pvVar1;
	
	pvVar1 = KanjiLoaded;
	KanjiLoaded = loaded;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsKanjiLoaded__Fv()
 // line 294, offset 0x800ad718
	/* begin block 1 */
		// Start line: 295
		// Start offset: 0x800AD718
	/* end block 1 */
	// End offset: 0x800AD71C
	// End Line: 296

	/* begin block 2 */
		// Start line: 601
	/* end block 2 */
	// End Line: 602

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * IsKanjiLoaded__Fv(void)

{
	return KanjiLoaded;
}



// decompiled code
// original method signature: 
// void /*$ra*/ KanjiSetTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 300, offset 0x800ad724
	/* begin block 1 */
		// Start line: 301
		// Start offset: 0x800AD724
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		enum LANG_DB_NO NewLangDbNo; // $s0
	/* end block 1 */
	// End offset: 0x800AD768
	// End Line: 314

	/* begin block 2 */
		// Start line: 612
	/* end block 2 */
	// End Line: 613

/* WARNING: Unknown calling convention yet parameter storage is locked */

void KanjiSetTSK__FP4TASK(TASK *T)

{
	LANG_DB_NO NewLangDbNo;
	
	NewLangDbNo = *(LANG_DB_NO *)T->fActive;
	if (FeFlag == '\0') {
		TSK_Sleep(5);
	}
	LoadKanji__F10LANG_DB_NO(NewLangDbNo);
	CDWAIT = (void *)0x0;
	KanjiLoaded = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo /*$s1*/)
 // line 317, offset 0x800ad77c
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x800AD77C
		// Variables:
	// 		struct TASK *T; // $s0
	// 		struct DEF_ARGS *args; // $v1
	/* end block 1 */
	// End offset: 0x800AD7DC
	// End Line: 331

	/* begin block 2 */
		// Start line: 648
	/* end block 2 */
	// End Line: 649

/* WARNING: Unknown calling convention yet parameter storage is locked */

void KANJI_SetDb__F10LANG_DB_NO(LANG_DB_NO NewLangDbNo)

{
	TASK *pTVar1;
	
	pTVar1 = TSK_AddTask(0,KanjiSetTSK__FP4TASK,0x1000,0x10);
	if (pTVar1 == (TASK *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x144);
	}
	KanjiLoaded = (void *)0x0;
	CDWAIT = &DAT_00000001;
	*(LANG_DB_NO *)pTVar1->fActive = NewLangDbNo;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ inmem__Fs(short k /*$a0*/)
 // line 336, offset 0x800ad7f4
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x800AD7F4
		// Variables:
	// 		struct vbuffS *kl; // $s0

		/* begin block 1.1 */
			// Start line: 340
			// Start offset: 0x800AD828
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800AD860
		// End Line: 347
	/* end block 1 */
	// End offset: 0x800AD864
	// End Line: 348

	/* begin block 2 */
		// Start line: 698
	/* end block 2 */
	// End Line: 699

/* WARNING: Unknown calling convention yet parameter storage is locked */

int inmem__Fs(short k)

{
	int iVar1;
	vbuffS *pvVar2;
	
	pvVar2 = KanjiCache;
	if (CacheLen == 0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x153);
	}
	iVar1 = 0;
	if (0 < CacheLen) {
		do {
			if (pvVar2->kan == k) {
				return iVar1 + 1;
			}
			iVar1 = iVar1 + 1;
			pvVar2 = pvVar2 + 1;
		} while (iVar1 < CacheLen);
	}
	return 0;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ getb__FUs(unsigned short n /*$v0*/)
 // line 351, offset 0x800ad87c
	/* begin block 1 */
		// Start line: 352
		// Start offset: 0x800AD87C
	/* end block 1 */
	// End offset: 0x800AD884
	// End Line: 356

	/* begin block 2 */
		// Start line: 731
	/* end block 2 */
	// End Line: 732

/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort getb__FUs(ushort n)

{
	return (n & 0x7fff) - 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShadeBuff__FPUcii(unsigned char *b /*$a0*/, int col /*$a1*/, int border /*$a2*/)
 // line 365, offset 0x800ad88c
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x800AD88C

		/* begin block 1.1 */
			// Start line: 369
			// Start offset: 0x800AD88C
			// Variables:
		// 		int y; // $a3

			/* begin block 1.1.1 */
				// Start line: 369
				// Start offset: 0x800AD894

				/* begin block 1.1.1.1 */
					// Start line: 371
					// Start offset: 0x800AD8A0
					// Variables:
				// 		int x; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x800ADA24
				// End Line: 441
			/* end block 1.1.1 */
			// End offset: 0x800ADA24
			// End Line: 441
		/* end block 1.1 */
		// End offset: 0x800ADA2C
		// End Line: 442
	/* end block 1 */
	// End offset: 0x800ADA2C
	// End Line: 442

	/* begin block 2 */
		// Start line: 760
	/* end block 2 */
	// End Line: 761

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShadeBuff__FPUcii(uchar *b,int col,int border)

{
	int iVar1;
	uchar uVar2;
	int iVar3;
	
	iVar3 = 0;
	while (iVar1 = 0, iVar3 < 0xc) {
		do {
			if ((int)(char)*b == col) {
				uVar2 = (uchar)border;
				if (((col == 7) && (iVar1 != 0)) && (b[-1] == '\0')) {
					b[-1] = uVar2;
				}
				if ((iVar1 < 0xb) && (b[1] == '\0')) {
					b[1] = uVar2;
				}
				if (((col == 7) && (iVar3 != 0)) && (b[-0xc] == '\0')) {
					b[-0xc] = uVar2;
				}
				if ((iVar3 < 0xb) && (b[0xc] == '\0')) {
					b[0xc] = uVar2;
				}
				if (((col == 7) && (iVar1 != 0)) && (iVar3 != 0)) {
					if (b[-0xd] == '\0') {
						b[-0xd] = uVar2;
					}
					if ((iVar1 < 0xb) && (b[-0xb] == '\0')) {
						b[-0xb] = uVar2;
					}
				}
				if ((iVar1 < 0xb) && (iVar3 < 0xb)) {
					if (b[0xd] == '\0') {
						b[0xd] = uVar2;
					}
					if (((col == 7) && (iVar1 != 0)) && (b[0xb] == '\0')) {
						b[0xb] = uVar2;
					}
				}
			}
			iVar1 = iVar1 + 1;
			b = b + 1;
		} while (iVar1 < 0xc);
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Crunch__FPUcT0(unsigned char *s /*$a2*/, unsigned char *db /*$a1*/)
 // line 450, offset 0x800ada34
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x800ADA34
		// Variables:
	// 		int c; // $v0
	// 		unsigned short *d; // $t0

		/* begin block 1.1 */
			// Start line: 451
			// Start offset: 0x800ADA34
			// Variables:
		// 		int y; // $t1

			/* begin block 1.1.1 */
				// Start line: 457
				// Start offset: 0x800ADA40

				/* begin block 1.1.1.1 */
					// Start line: 459
					// Start offset: 0x800ADA4C
					// Variables:
				// 		int x; // $a3
				/* end block 1.1.1.1 */
				// End offset: 0x800ADA98
				// End Line: 468
			/* end block 1.1.1 */
			// End offset: 0x800ADA98
			// End Line: 468
		/* end block 1.1 */
		// End offset: 0x800ADAA0
		// End Line: 470
	/* end block 1 */
	// End offset: 0x800ADAA0
	// End Line: 470

	/* begin block 2 */
		// Start line: 927
	/* end block 2 */
	// End Line: 928

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Crunch__FPUcT0(uchar *s,uchar *db)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	while (iVar5 = 0, iVar6 < 0xc) {
		do {
			bVar1 = *s;
			pbVar2 = s + 1;
			pbVar3 = s + 2;
			pbVar4 = s + 3;
			s = s + 4;
			iVar5 = iVar5 + 1;
			*(ushort *)db =
					 (ushort)bVar1 | (ushort)*pbVar2 << 4 | (ushort)*pbVar3 << 8 | (ushort)*pbVar4 << 0xc;
			db = (uchar *)((ushort *)db + 1);
		} while (iVar5 < 3);
		iVar6 = iVar6 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _get_font__FPUcUsT0(unsigned char *d /*$s1*/, unsigned short num /*$a1*/, unsigned char *abuff /*$s0*/)
 // line 474, offset 0x800adaa8
	/* begin block 1 */
		// Start line: 475
		// Start offset: 0x800ADAA8
		// Variables:
	// 		unsigned char *bp; // $s0
	// 		long i; // $a0
	// 		char bcy; // $s2
	// 		char shift; // $v1
	/* end block 1 */
	// End offset: 0x800ADB4C
	// End Line: 503

	/* begin block 2 */
		// Start line: 981
	/* end block 2 */
	// End Line: 982

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _get_font__FPUcUsT0(uchar *d,ushort num,uchar *abuff)

{
	ushort uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	byte *pbVar6;
	uint uVar7;
	
	uVar1 = getb__FUs(num);
	pbVar6 = abuff + (uint)uVar1;
	if (pbVar6 == (byte *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x1e2);
	}
	uVar7 = (uint)*pbVar6;
	pbVar6 = pbVar6 + 1;
	memset(d,0,0x90);
	iVar5 = 0;
	uVar2 = uVar7 & 1;
	uVar4 = 1;
	do {
		uVar3 = uVar4 << 1;
		if (uVar2 != 0) {
			*d = '\a';
		}
		d = d + 1;
		if ((uVar4 & 0x7f) == 0) {
			uVar3 = 1;
			uVar7 = (uint)*pbVar6;
			pbVar6 = pbVar6 + 1;
		}
		iVar5 = iVar5 + 1;
		uVar2 = uVar7 & uVar3;
		uVar4 = uVar3;
	} while (iVar5 < 0x84);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ getfreekan__Fv()
 // line 507, offset 0x800adb68
	/* begin block 1 */
		// Start line: 508
		// Start offset: 0x800ADB68
		// Variables:
	// 		unsigned char max; // $s1
	// 		int n; // $s2
	// 		struct vbuffS *kl; // $s0

		/* begin block 1.1 */
			// Start line: 514
			// Start offset: 0x800ADBC0
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800ADC00
		// End Line: 524
	/* end block 1 */
	// End offset: 0x800ADC04
	// End Line: 526

	/* begin block 2 */
		// Start line: 1058
	/* end block 2 */
	// End Line: 1059

/* WARNING: Unknown calling convention yet parameter storage is locked */

int getfreekan__Fv(void)

{
	int iVar1;
	vbuffS *pvVar2;
	byte bVar3;
	int iVar4;
	
	pvVar2 = KanjiCache;
	bVar3 = 0xff;
	iVar4 = -1;
	if (CacheLen == 0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x200);
	}
	if (pvVar2 == (vbuffS *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x201);
	}
	iVar1 = 0;
	if (0 < CacheLen) {
		do {
			if (pvVar2->count < bVar3) {
				iVar4 = iVar1;
				bVar3 = pvVar2->count;
			}
			iVar1 = iVar1 + 1;
			pvVar2 = pvVar2 + 1;
		} while (iVar1 < CacheLen);
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// enum KANJI_FRMS /*$ra*/ GetKanjiCacheFrm__Fv()
 // line 530, offset 0x800adc20
	/* begin block 1 */
		// Start line: 531
		// Start offset: 0x800ADC20
	/* end block 1 */
	// End offset: 0x800ADC24
	// End Line: 532

	/* begin block 2 */
		// Start line: 1109
	/* end block 2 */
	// End Line: 1110

/* WARNING: Unknown calling convention yet parameter storage is locked */

KANJI_FRMS GetKanjiCacheFrm__Fv(void)

{
	return KanjiCacheType;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ GetKanjiFrm__FUs(unsigned short kan /*$s3*/)
 // line 535, offset 0x800adc2c
	/* begin block 1 */
		// Start line: 536
		// Start offset: 0x800ADC2C
		// Variables:
	// 		struct POLY_FT4 *ft4; // stack offset -32
	// 		int im; // $s1
	// 		struct RECT r; // stack offset -328
	// 		unsigned char deBuff[144]; // stack offset -320
	// 		unsigned char dekbuff[144]; // stack offset -176
	// 		struct vbuffS *kl; // $v1
	// 		struct TextDat *Dat; // $s0
	// 		int TpX; // $s1
	// 		int TpY; // $s0
	// 		unsigned char *kbuff; // $s0
	// 		unsigned char *kanjbuff; // $s2
	// 		int U; // $v1
	// 		int V; // $a0
	/* end block 1 */
	// End offset: 0x800ADE98
	// End Line: 620

	/* begin block 2 */
		// Start line: 1118
	/* end block 2 */
	// End Line: 1119

/* WARNING: Removing unreachable block (ram,0x800add6c) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_FT4 * GetKanjiFrm__FUs(ushort kan)

{
	uchar uVar1;
	TextDat *this;
	int iVar2;
	uchar uVar3;
	vbuffS *pvVar4;
	uint uVar5;
	uint uVar6;
	short local_148;
	short local_146;
	undefined2 local_144;
	undefined2 local_142;
	uchar auStack320 [144];
	uchar auStack176 [144];
	POLY_FT4 *local_20 [2];
	
	GetKanjiCacheFrm__Fv();
	this = AllDats372[0];
	PRIM_GetPrim__FPP8POLY_FT4(local_20);
	if (local_20[0] == (POLY_FT4 *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x22a);
	}
	*(undefined *)((int)&local_20[0]->tag + 3) = 9;
	local_20[0]->code = ',';
	if (this == (TextDat *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x233);
	}
	if (KanjiPalFrame == (FRAME_HDR *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/KANJI.CPP",0x234);
	}
	SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this,KanjiPalFrame,local_20[0]);
	iVar2 = inmem__Fs(kan);
	if (iVar2 == 0) {
		iVar2 = getfreekan__Fv();
		pvVar4 = KanjiCache + iVar2;
		pvVar4->kan = kan;
		pvVar4->count = '\x01';
		_get_font__FPUcUsT0(auStack320,kan,KanjiFontData);
		ShadeBuff__FPUcii(auStack320,7,2);
		ShadeBuff__FPUcii(auStack320,2,1);
		Crunch__FPUcT0(auStack320,auStack176);
		local_148 = (short)(&KanjiBuffers->NumOfBuffers + iVar2 * 2)[1];
		uVar6 = SEXT24(local_148);
		local_144 = 3;
		local_142 = 0xc;
		local_146 = (short)(&KanjiBuffers->NumOfBuffers + iVar2 * 2)[2];
		uVar5 = SEXT24(local_146);
		LoadImage2(&local_148,auStack176);
	}
	else {
		uVar1 = KanjiCache[iVar2 + -1].count;
		if (uVar1 != -1) {
			KanjiCache[iVar2 + -1].count = uVar1 + '\x01';
		}
		uVar6 = (&KanjiBuffers->NumOfBuffers + (iVar2 + -1) * 2)[1];
		uVar5 = (&KanjiBuffers->NumOfBuffers + (iVar2 + -1) * 2)[2];
	}
	local_20[0]->tpage =
			 (ushort)((int)(uVar5 & 0x100) >> 4) | (ushort)((int)(uVar6 & 0x3ff) >> 6) |
			 (ushort)((uVar5 & 0x200) << 2);
	uVar3 = (char)uVar6 * '\x04';
	local_20[0]->u0 = uVar3;
	uVar1 = (uchar)uVar5;
	local_20[0]->v0 = uVar1;
	local_20[0]->u1 = uVar3 + '\f';
	local_20[0]->v1 = uVar1;
	local_20[0]->u2 = uVar3;
	local_20[0]->v2 = uVar1 + '\f';
	local_20[0]->u3 = uVar3 + '\f';
	local_20[0]->v3 = uVar1 + '\f';
	return local_20[0];
}





