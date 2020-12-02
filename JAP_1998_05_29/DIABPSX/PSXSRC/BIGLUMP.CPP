#include "THISDUST.H"
#include "BIGLUMP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ BL_InitEAC__Fv()
 // line 116, offset 0x8008725c
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x8008725C
		// Variables:
	// 		long gunk1; // stack offset -16
	// 		long gunk2; // stack offset -12
	// 		void *ptr; // $s0
	/* end block 1 */
	// End offset: 0x80087340
	// End Line: 148

	/* begin block 2 */
		// Start line: 232
	/* end block 2 */
	// End Line: 233

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BL_InitEAC__Fv(void)

{
	undefined auStack16 [4];
	undefined auStack12 [4];
	
	NoQuedAsyncs = '\0';
	CurrAsync = '\x01';
	disablecd = 0;
	FlushCache();
	if (disablecd == 0) {
		initpsxcdrom();
	}
	ResetCallback();
	inittimer(timerhz);
	if (disablecd == 0) {
		setdirectory("cdrom:");
		blockclear(EAC_DirectoryCache,400);
		setdirectorycache(EAC_DirectoryCache,0x14);
		cdromdirectoryentry("zzzzzz",auStack16,auStack12);
	}
	else {
		setdirectory(&DAT_8011ab84);
	}
	initloadfilecallback();
	addsystemtask(ioreader,0,0);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ BL_ReadFile__FPcUl(char *Name /*$s2*/, unsigned long RamId /*$s1*/)
 // line 157, offset 0x80087354
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x80087354
		// Variables:
	// 		int MemSize; // $s0
	// 		char FileToLoad[50]; // stack offset -72
	// 		long MyHnd; // $s0
	// 		unsigned char *LoadAddr; // $s1
	/* end block 1 */
	// End offset: 0x80087450
	// End Line: 184

	/* begin block 2 */
		// Start line: 331
	/* end block 2 */
	// End Line: 332

long BL_ReadFile__FPcUl(char *Name,ulong RamId)

{
	uchar uVar1;
	int iVar2;
	ulong Size;
	long Handle;
	void *pvVar3;
	
	iVar2 = fileexists();
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xa5);
	}
	Size = filesize(Name);
	if (Size == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xaa);
	}
	Handle = GAL_Alloc(Size,RamId,(char *)0x0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xad);
	}
	pvVar3 = GAL_Lock(Handle);
	if (Handle == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xb0);
	}
	loadfileatadr(Name,pvVar3);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xb5);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// long /*$ra*/ BL_AsyncReadFile__FPcUl(char *Name /*$s1*/, unsigned long RamId /*$s2*/)
 // line 193, offset 0x8008746c
	/* begin block 1 */
		// Start line: 194
		// Start offset: 0x8008746C
		// Variables:
	// 		int MemSize; // $s0
	// 		char FileToLoad[50]; // stack offset -80
	// 		long MyHnd; // $s2
	// 		unsigned char *LoadAddr; // $s3
	// 		int ah; // $s1
	/* end block 1 */
	// End offset: 0x800875AC
	// End Line: 238

	/* begin block 2 */
		// Start line: 403
	/* end block 2 */
	// End Line: 404

long BL_AsyncReadFile__FPcUl(char *Name,ulong RamId)

{
	uchar uVar1;
	int iVar2;
	ulong Size;
	long Handle;
	void *pvVar3;
	undefined4 uVar4;
	uint uVar5;
	
	iVar2 = fileexists();
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xca);
	}
	Size = filesize(Name);
	if (Size == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xcf);
	}
	Handle = GAL_Alloc(Size,RamId,(char *)0x0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xd2);
	}
	pvVar3 = GAL_Lock(Handle);
	if (Handle == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xd5);
	}
	setasyncfile(Name);
	uVar4 = asyncloadsegment(0,pvVar3,Size);
	do {
		systemtask(0);
		uVar5 = getasyncreadstatus(uVar4);
		TSK_Sleep(1);
	} while ((uVar5 & 0xff) == 0);
	cancelasyncload(uVar4);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xeb);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_LoadDirectory__Fv()
 // line 247, offset 0x800875cc
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x800875CC
		// Variables:
	// 		long BL_DirMHandle; // $s2
	// 		char *AsyncAddr; // $s0
	// 		unsigned char *BL_DirPtr; // $s0
	// 		unsigned long DirId; // $s1
	// 		unsigned long DirId2; // $v0
	/* end block 1 */
	// End offset: 0x800876D8
	// End Line: 282

	/* begin block 2 */
		// Start line: 511
	/* end block 2 */
	// End Line: 512

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BL_LoadDirectory__Fv(void)

{
	uchar uVar1;
	long Handle;
	int *piVar2;
	int MemSize;
	void *pvVar3;
	
	Handle = BL_ReadFile__FPcUl("LUMP.DIR",1);
	piVar2 = (int *)GAL_Lock(Handle);
	if (piVar2 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x106);
	}
	if (*piVar2 != 0x5249444c) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x109);
	}
	BL_NoLumpFiles = piVar2[1];
	if (BL_NoLumpFiles == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x10c);
	}
	LFileTab = BL_MakeFilePosTab__FPUcUl((uchar *)(piVar2 + 2),BL_NoLumpFiles);
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x113);
	}
	MemSize = asyncstructsize(10);
	pvVar3 = Tmalloc__Fi(MemSize);
	if (pvVar3 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x118);
	}
	initasyncstruct(pvVar3,10,0x3000);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_LoadStreamDir__Fv()
 // line 286, offset 0x800876f4
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x800876F4
		// Variables:
	// 		long BL_DirMHandle; // $s1
	// 		unsigned char *BL_DirPtr; // $s0
	// 		unsigned long DirId; // $s2
	// 		unsigned long DirId2; // $v0
	// 		enum LANG_TYPE Lang; // $v1
	/* end block 1 */
	// End offset: 0x80087968
	// End Line: 367

	/* begin block 2 */
		// Start line: 601
	/* end block 2 */
	// End Line: 602

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BL_LoadStreamDir__Fv(void)

{
	uchar uVar1;
	LANG_TYPE LVar2;
	long Handle;
	int *piVar3;
	
	LVar2 = LANG_GetLang__Fv();
	switch(LVar2) {
	case LANG_ENGLISH:
		sprintf(STREAM_DIR,"STREAM1.DIR");
		sprintf(STREAM_BIN,"STREAM1.BIN");
		break;
	case LANG_FRENCH:
		sprintf(STREAM_DIR,"STREAM2.DIR");
		sprintf(STREAM_BIN,"STREAM2.BIN");
		break;
	case LANG_GERMAN:
		sprintf(STREAM_DIR,"STREAM3.DIR");
		sprintf(STREAM_BIN,"STREAM3.BIN");
		break;
	case LANG_SWEDISH:
		sprintf(STREAM_DIR,"STREAM4.DIR");
		sprintf(STREAM_BIN,"STREAM4.BIN");
		break;
	case LANG_JAP:
		sprintf(STREAM_DIR,"STREAM5.DIR");
		sprintf(STREAM_BIN,"STREAM5.BIN");
		break;
	case LANG_NONE:
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x152);
	}
	if (FeFlag == '\0') {
		Handle = BL_ReadFile__FPcUl(STREAM_DIR,1);
	}
	else {
		Handle = BL_AsyncReadFile__FPcUl(STREAM_DIR,1);
	}
	piVar3 = (int *)GAL_Lock(Handle);
	if (piVar3 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x15f);
	}
	if (*piVar3 != 0x5249444c) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x162);
	}
	BL_NoStreamFiles = piVar3[1];
	if (BL_NoStreamFiles == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x165);
	}
	if (SFileTab != (STRHDR *)0x0) {
		Tfree__FPv(SFileTab);
	}
	SFileTab = BL_MakeFilePosTab__FPUcUl((uchar *)(piVar3 + 2),BL_NoStreamFiles);
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x16e);
	}
	return;
}



// decompiled code
// original method signature: 
// struct STRHDR * /*$ra*/ BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr /*$a0*/, unsigned long NoStreamFiles /*$s0*/)
 // line 376, offset 0x80087984
	/* begin block 1 */
		// Start line: 377
		// Start offset: 0x80087984
		// Variables:
	// 		struct STREAM *DirPtr; // $s1
	// 		struct STRHDR *TFileTab; // $t1

		/* begin block 1.1 */
			// Start line: 387
			// Start offset: 0x800879D4

			/* begin block 1.1.1 */
				// Start line: 391
				// Start offset: 0x80087A04

				/* begin block 1.1.1.1 */
					// Start line: 393
					// Start offset: 0x80087A10
					// Variables:
				// 		int j; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x80087A44
				// End Line: 395
			/* end block 1.1.1 */
			// End offset: 0x80087A44
			// End Line: 395
		/* end block 1.1 */
		// End offset: 0x80087A50
		// End Line: 396
	/* end block 1 */
	// End offset: 0x80087A54
	// End Line: 398

	/* begin block 2 */
		// Start line: 784
	/* end block 2 */
	// End Line: 785

STRHDR * BL_MakeFilePosTab__FPUcUl(uchar *BL_DirPtr,ulong NoStreamFiles)

{
	int iVar1;
	int iVar2;
	STRHDR *pSVar3;
	STRHDR *pSVar4;
	STRHDR *pSVar5;
	uchar *puVar6;
	
	iVar2 = fileexists("LUMP.BIN");
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x180);
	}
	pSVar3 = (STRHDR *)Tmalloc__Fi((NoStreamFiles + 1) * 0x14);
	puVar6 = BL_DirPtr + NoStreamFiles * 0x14;
	pSVar5 = pSVar3;
	while (iVar2 = 0, (int)BL_DirPtr < (int)puVar6) {
		pSVar5[1].Offset = *(ulong *)BL_DirPtr;
		pSVar4 = pSVar5 + 1;
		pSVar5[1].Size = ((ulong *)BL_DirPtr)[1];
		do {
			iVar1 = iVar2 + 8;
			iVar2 = iVar2 + 1;
			pSVar4->Name[0] = *(uchar *)((int)BL_DirPtr + iVar1);
			pSVar4 = (STRHDR *)(pSVar4->Name + 1);
		} while (iVar2 < 0xc);
		BL_DirPtr = (uchar *)((ulong *)BL_DirPtr + 5);
		pSVar5 = pSVar5 + 1;
	}
	return pSVar3;
}



// decompiled code
// original method signature: 
// struct STRHDR * /*$ra*/ BL_FindStreamFile__FPcc(char *Name /*$s2*/, char LumpID /*$a1*/)
 // line 407, offset 0x80087a6c
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x80087A6C
		// Variables:
	// 		struct STRHDR *ptr; // $s1
	// 		unsigned long NoFiles; // $s5
	// 		int pos; // $s4
	// 		int c; // $v1
	// 		char fname[14]; // stack offset -64
	// 		int size; // $s3

		/* begin block 1.1 */
			// Start line: 425
			// Start offset: 0x80087AE4
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80087B20
		// End Line: 430

		/* begin block 1.2 */
			// Start line: 436
			// Start offset: 0x80087B60
			// Variables:
		// 		int i; // $v1
		// 		int i; // $v1
		/* end block 1.2 */
		// End offset: 0x80087B78
		// End Line: 436

		/* begin block 1.3 */
			// Start line: 437
			// Start offset: 0x80087B78
			// Variables:
		// 		int s; // $s0
		// 		int i; // $v1
		// 		int i; // $v1

			/* begin block 1.3.1 */
				// Start line: 437
				// Start offset: 0x80087B80

				/* begin block 1.3.1.1 */
					// Start line: 439
					// Start offset: 0x80087B8C
				/* end block 1.3.1.1 */
				// End offset: 0x80087BB0
				// End Line: 439
			/* end block 1.3.1 */
			// End offset: 0x80087BC4
			// End Line: 441
		/* end block 1.3 */
		// End offset: 0x80087BCC
		// End Line: 442
	/* end block 1 */
	// End offset: 0x80087BD0
	// End Line: 450

	/* begin block 2 */
		// Start line: 860
	/* end block 2 */
	// End Line: 861

STRHDR * BL_FindStreamFile__FPcc(char *Name,char LumpID)

{
	size_t sVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	uchar *puVar5;
	char *pcVar6;
	STRHDR *pSVar7;
	STRHDR *pSVar8;
	int iVar9;
	ulong uVar10;
	uchar local_40 [12];
	undefined uStack52;
	undefined local_33 [19];
	
	pSVar8 = (STRHDR *)0x0;
	iVar9 = 0;
	sVar1 = strlen(Name);
	if (LumpID == '\0') {
		pSVar8 = SFileTab + 1;
		uVar10 = BL_NoStreamFiles;
	}
	else {
		uVar10 = 0;
		if (LumpID == '\x01') {
			pSVar8 = LFileTab + 1;
			uVar10 = BL_NoLumpFiles;
		}
	}
	strupr__FPc(Name);
	iVar4 = 0;
	pcVar6 = Name;
	if (0 < (int)sVar1) {
		do {
			if (*pcVar6 == '\\') {
				iVar9 = iVar4 + 1;
			}
			iVar4 = iVar4 + 1;
			pcVar6 = pcVar6 + 1;
		} while (iVar4 < (int)sVar1);
	}
	if (iVar9 != 0) {
		iVar4 = 0;
		pcVar6 = Name;
		if (0 < (int)(sVar1 - iVar9)) {
			do {
				iVar2 = iVar4 + iVar9;
				iVar4 = iVar4 + 1;
				*pcVar6 = Name[iVar2];
				pcVar6 = pcVar6 + 1;
			} while (iVar4 < (int)(sVar1 - iVar9));
		}
		Name[iVar4] = '\0';
	}
	iVar9 = 0xd;
	puVar3 = local_33;
	do {
		*puVar3 = 0;
		iVar9 = iVar9 + -1;
		puVar3 = puVar3 + -1;
	} while (-1 < iVar9);
	iVar9 = 0;
	while( true ) {
		if ((int)uVar10 <= iVar9) {
			return (STRHDR *)0x0;
		}
		puVar5 = local_40;
		pSVar7 = pSVar8;
		do {
			*puVar5 = pSVar7->Name[0];
			puVar5 = puVar5 + 1;
			pSVar7 = (STRHDR *)(pSVar7->Name + 1);
		} while ((int)puVar5 < (int)&uStack52);
		iVar4 = strcmp(Name,(char *)local_40);
		iVar9 = iVar9 + 1;
		if (iVar4 == 0) break;
		pSVar8 = pSVar8 + 1;
	}
	return pSVar8;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_FileExists__FPcc(char *Name /*$a0*/, char LumpID /*$a1*/)
 // line 459, offset 0x80087bf8
	/* begin block 1 */
		// Start line: 460
		// Start offset: 0x80087BF8
	/* end block 1 */
	// End offset: 0x80087C24
	// End Line: 464

	/* begin block 2 */
		// Start line: 972
	/* end block 2 */
	// End Line: 973

void * BL_FileExists__FPcc(char *Name,char LumpID)

{
	STRHDR *pSVar1;
	
	if (LFileTab == (STRHDR *)0x0) {
		pSVar1 = (STRHDR *)fileexists();
	}
	else {
		pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	}
	return (void *)(uint)(pSVar1 != (STRHDR *)0x0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ BL_FileLength__FPcc(char *Name /*$s0*/, char LumpID /*$a1*/)
 // line 475, offset 0x80087c34
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x80087C34
		// Variables:
	// 		struct STRHDR *ptr; // $v0
	/* end block 1 */
	// End offset: 0x80087C9C
	// End Line: 494

	/* begin block 2 */
		// Start line: 1007
	/* end block 2 */
	// End Line: 1008

int BL_FileLength__FPcc(char *Name,char LumpID)

{
	int iVar1;
	STRHDR *pSVar2;
	
	if (LFileTab == (STRHDR *)0x0) {
		iVar1 = filesize();
	}
	else {
		pSVar2 = BL_FindStreamFile__FPcc(Name,LumpID);
		if ((pSVar2 == (STRHDR *)0x0) &&
			 (pSVar2 = BL_FindStreamFile__FPcc(Name,LumpID != '\x01'), pSVar2 == (STRHDR *)0x0)) {
			iVar1 = 0;
		}
		else {
			iVar1 = pSVar2->Size;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_LoadFileAtAddr__FPcPUcc(char *Name /*$s2*/, unsigned char *Dest /*$s3*/, char LumpID /*$s4*/)
 // line 503, offset 0x80087cb4
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x80087CB4
		// Variables:
	// 		struct STRHDR *sh; // $s0
	// 		int ah; // $s0
	/* end block 1 */
	// End offset: 0x80087DF8
	// End Line: 604

	/* begin block 2 */
		// Start line: 1072
	/* end block 2 */
	// End Line: 1073

void * BL_LoadFileAtAddr__FPcPUcc(char *Name,uchar *Dest,char LumpID)

{
	int iVar1;
	undefined *puVar2;
	STRHDR *pSVar3;
	undefined4 uVar4;
	uint uVar5;
	char *pcVar6;
	
	if (LFileTab == (STRHDR *)0x0) {
		iVar1 = fileexists();
		if (iVar1 != 0) {
			loadfileatadr(Name,Dest);
			return &DAT_00000001;
		}
	}
	else {
		puVar2 = (undefined *)BL_AsyncLoadDone__Fv();
		if (puVar2 != &DAT_00000001) {
			BL_WaitForAsyncFinish__Fv();
		}
		pSVar3 = BL_FindStreamFile__FPcc(Name,LumpID);
		if (pSVar3 == (STRHDR *)0x0) {
			LumpID = LumpID != '\x01';
			pSVar3 = BL_FindStreamFile__FPcc(Name,LumpID);
			if (pSVar3 == (STRHDR *)0x0) {
				return (void *)0x0;
			}
		}
		if (Dest != (uchar *)0x0) {
			pcVar6 = STREAM_BIN;
			if ((bool)LumpID == true) {
				pcVar6 = "LUMP.BIN";
			}
			setasyncfile(pcVar6);
			uVar4 = asyncloadsegment(pSVar3->Offset + 4,Dest,pSVar3->Size);
			do {
				systemtask(0);
				uVar5 = getasyncreadstatus(uVar4);
			} while ((uVar5 & 0xff) == 0);
			cancelasyncload(uVar4);
			return &DAT_00000001;
		}
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x21a);
	}
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_AsyncLoadDone__Fv()
 // line 614, offset 0x80087e1c
	/* begin block 1 */
		// Start line: 615
		// Start offset: 0x80087E1C
	/* end block 1 */
	// End offset: 0x80087E20
	// End Line: 617

	/* begin block 2 */
		// Start line: 1298
	/* end block 2 */
	// End Line: 1299

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * BL_AsyncLoadDone__Fv(void)

{
	return (void *)(uint)(FileLoaded != '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_WaitForAsyncFinish__Fv()
 // line 623, offset 0x80087e28
	/* begin block 1 */
		// Start line: 624
		// Start offset: 0x80087E30
	/* end block 1 */
	// End offset: 0x80087E5C
	// End Line: 627

	/* begin block 2 */
		// Start line: 1315
	/* end block 2 */
	// End Line: 1316

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BL_WaitForAsyncFinish__Fv(void)

{
	undefined *puVar1;
	
	while (puVar1 = (undefined *)BL_AsyncLoadDone__Fv(), puVar1 != &DAT_00000001) {
		TSK_Sleep(1);
	}
	systemtask(0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_AsyncLoadCallBack__Fi(int ah /*$s0*/)
 // line 631, offset 0x80087e6c
	/* begin block 1 */
		// Start line: 632
		// Start offset: 0x80087E6C
		// Variables:
	// 		unsigned long OldGp; // $s0
	/* end block 1 */
	// End offset: 0x80087EBC
	// End Line: 645

	/* begin block 2 */
		// Start line: 1331
	/* end block 2 */
	// End Line: 1332

void BL_AsyncLoadCallBack__Fi(int ah)

{
	undefined4 uVar1;
	
	uVar1 = ReloadGP();
	FileLoaded = FileLoaded + 1;
	CurrAsync = CurrAsync + '\x01';
	cancelasyncload(ah,(uint)FileLoaded);
	systemtask(0);
	SetGP(uVar1);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ BL_LoadFileAsync__FPcc(char *Name /*$s3*/, char LumpID /*$s1*/)
 // line 649, offset 0x80087ed0
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x80087ED0
		// Variables:
	// 		struct STRHDR *sh; // $s2
	// 		int Size; // $s0
	// 		long MyHnd; // $s0
	// 		unsigned char *LoadAddr; // $s3
	/* end block 1 */
	// End offset: 0x80088064
	// End Line: 700

	/* begin block 2 */
		// Start line: 1385
	/* end block 2 */
	// End Line: 1386

long BL_LoadFileAsync__FPcc(char *Name,char LumpID)

{
	uchar uVar1;
	undefined *puVar2;
	STRHDR *pSVar3;
	long Handle;
	ulong Size;
	void *pvVar4;
	char *pcVar5;
	
	uVar1 = NoQuedAsyncs + '\x01';
	NoQuedAsyncs = uVar1;
	if (CurrAsync != uVar1) {
		do {
			TSK_Sleep(1);
		} while (CurrAsync != uVar1);
	}
	puVar2 = (undefined *)BL_AsyncLoadDone__Fv();
	if (puVar2 != &DAT_00000001) {
		BL_WaitForAsyncFinish__Fv();
	}
	pSVar3 = BL_FindStreamFile__FPcc(Name,LumpID);
	if (pSVar3 == (STRHDR *)0x0) {
		Handle = -1;
	}
	else {
		FileLoaded = FileLoaded + -1;
		Size = BL_FileLength__FPcc(Name,LumpID);
		if (Size == 0) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x2a4);
		}
		Handle = GAL_Alloc(Size,1,(char *)0x0);
		if (Handle == -1) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x2a7);
		}
		pvVar4 = GAL_Lock(Handle);
		if (Handle == 0) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x2aa);
		}
		pcVar5 = STREAM_BIN;
		if (LumpID == '\x01') {
			pcVar5 = "LUMP.BIN";
		}
		setasyncfile(pcVar5);
		asyncloadsegmentcallback(pSVar3->Offset + 4,pvVar4,pSVar3->Size,BL_AsyncLoadCallBack__Fi);
		uVar1 = GAL_Unlock(Handle);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x2b9);
		}
	}
	return Handle;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name /*$s2*/, unsigned char *Dest /*$s3*/, char LumpID /*$s1*/)
 // line 709, offset 0x80088084
	/* begin block 1 */
		// Start line: 710
		// Start offset: 0x80088084
		// Variables:
	// 		struct STRHDR *sh; // $s0
	/* end block 1 */
	// End offset: 0x80088180
	// End Line: 749

	/* begin block 2 */
		// Start line: 1521
	/* end block 2 */
	// End Line: 1522

void * BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name,uchar *Dest,char LumpID)

{
	uchar uVar1;
	STRHDR *pSVar2;
	undefined *puVar3;
	char *pcVar4;
	
	uVar1 = NoQuedAsyncs + '\x01';
	NoQuedAsyncs = uVar1;
	if (CurrAsync != uVar1) {
		do {
			TSK_Sleep(1);
		} while (CurrAsync != uVar1);
	}
	puVar3 = (undefined *)BL_AsyncLoadDone__Fv();
	if (puVar3 != &DAT_00000001) {
		BL_WaitForAsyncFinish__Fv();
	}
	pSVar2 = BL_FindStreamFile__FPcc(Name,LumpID);
	puVar3 = (undefined *)0x0;
	if ((pSVar2 != (STRHDR *)0x0) && (puVar3 = (undefined *)0x0, pSVar2->Size != 0)) {
		FileLoaded = FileLoaded + -1;
		pcVar4 = STREAM_BIN;
		if (LumpID == '\x01') {
			pcVar4 = "LUMP.BIN";
		}
		setasyncfile(pcVar4);
		asyncloadsegmentcallback(pSVar2->Offset + 4,Dest,pSVar2->Size,BL_AsyncLoadCallBack__Fi);
		puVar3 = &DAT_00000001;
	}
	return puVar3;
}



// decompiled code
// original method signature: 
// struct STRHDR * /*$ra*/ BL_OpenStreamFile__FPcc(char *Name /*$a0*/, char LumpID /*$a1*/)
 // line 758, offset 0x800881a0
	/* begin block 1 */
		// Start line: 759
		// Start offset: 0x800881A0
		// Variables:
	// 		struct STRHDR *sh; // $v0
	/* end block 1 */
	// End offset: 0x800881BC
	// End Line: 763

	/* begin block 2 */
		// Start line: 1625
	/* end block 2 */
	// End Line: 1626

STRHDR * BL_OpenStreamFile__FPcc(char *Name,char LumpID)

{
	STRHDR *pSVar1;
	
	pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	return (STRHDR *)((uint)pSVar1 & -(uint)(pSVar1 != (STRHDR *)0x0));
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR /*$a0*/)
 // line 777, offset 0x800881cc
	/* begin block 1 */
		// Start line: 778
		// Start offset: 0x800881CC
	/* end block 1 */
	// End offset: 0x800881CC
	// End Line: 782

	/* begin block 2 */
		// Start line: 1667
	/* end block 2 */
	// End Line: 1668

void * BL_CloseStreamFile__FP6STRHDR(STRHDR *StreamHDR)

{
	return (void *)(uint)(StreamHDR != (STRHDR *)0x0);
}





