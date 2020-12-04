#include "THISDUST.H"
#include "BIGLUMP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ BL_InitEAC__Fv()
 // line 107, offset 0x80081be4
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80081BE4
		// Variables:
	// 		long gunk1; // stack offset -16
	// 		long gunk2; // stack offset -12
	// 		void *ptr; // $s0
	/* end block 1 */
	// End offset: 0x80081CBC
	// End Line: 135

	/* begin block 2 */
		// Start line: 214
	/* end block 2 */
	// End Line: 215

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BL_InitEAC__Fv(void)

{
	undefined4 in_a1;
	undefined4 in_a2;
	undefined4 in_a3;
	uint uStack16;
	uint uStack12;
	
	disablecd = 0;
	FlushCache();
	if (disablecd == 0) {
		initpsxcdrom();
	}
	ResetCallback();
	inittimer(timerhz,in_a1,in_a2,in_a3);
	if (disablecd == 0) {
		setdirectory("cdrom:");
		blockclear(EAC_DirectoryCache,300);
		setdirectorycache(EAC_DirectoryCache,0xf);
		cdromdirectoryentry((byte *)"zzzzzz",&uStack16,&uStack12);
	}
	else {
		setdirectory(&DAT_8012a810);
	}
	initloadfilecallback();
	addsystemtask((int)ioreader,0,0);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ BL_ReadFile__FPcUl(char *Name /*$s1*/, unsigned long RamId /*$s2*/)
 // line 144, offset 0x80081cd0
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x80081CD0
		// Variables:
	// 		int MemSize; // $s0
	// 		char FileToLoad[50]; // stack offset -72
	// 		long MyHnd; // $s0
	// 		unsigned char *LoadAddr; // $s2
	/* end block 1 */
	// End offset: 0x80081DE0
	// End Line: 171

	/* begin block 2 */
		// Start line: 299
	/* end block 2 */
	// End Line: 300

long BL_ReadFile__FPcUl(char *Name,ulong RamId)

{
	uchar uVar1;
	int iVar2;
	ulong Size;
	long Handle;
	undefined4 *puVar3;
	undefined4 uVar4;
	undefined4 in_a3;
	
	iVar2 = fileexists((uint *)Name);
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x98);
	}
	DBG_SendMessage("LOADING FILE %s");
	Size = filesize((uint *)Name);
	if (Size == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x9d);
	}
	uVar4 = 0;
	Handle = GAL_Alloc(Size,RamId,(char *)0x0);
	if (Handle == -1) {
		uVar4 = 0xa0;
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xa0);
	}
	puVar3 = (undefined4 *)GAL_Lock(Handle);
	if (Handle == 0) {
		uVar4 = 0xa3;
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xa3);
	}
	loadfileatadr((uint *)Name,puVar3,uVar4,in_a3);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xa8);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// long /*$ra*/ BL_AsyncReadFile__FPcUl(char *Name /*$s1*/, unsigned long RamId /*$s2*/)
 // line 180, offset 0x80081dfc
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x80081DFC
		// Variables:
	// 		int MemSize; // $s0
	// 		char FileToLoad[50]; // stack offset -80
	// 		long MyHnd; // $s2
	// 		unsigned char *LoadAddr; // $s3
	// 		int ah; // $s1
	/* end block 1 */
	// End offset: 0x80081F50
	// End Line: 221

	/* begin block 2 */
		// Start line: 371
	/* end block 2 */
	// End Line: 372

long BL_AsyncReadFile__FPcUl(char *Name,ulong RamId)

{
	uchar uVar1;
	int iVar2;
	ulong Size;
	long Handle;
	void *pvVar3;
	uint uVar4;
	char *pcVar5;
	undefined4 uVar6;
	undefined4 in_a3;
	
	iVar2 = fileexists((uint *)Name);
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xbd);
	}
	DBG_SendMessage("LOADING FILE %s");
	Size = filesize((uint *)Name);
	if (Size == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xc2);
	}
	uVar6 = 0;
	Handle = GAL_Alloc(Size,RamId,(char *)0x0);
	pcVar5 = (char *)RamId;
	if (Handle == -1) {
		pcVar5 = "psxsrc/BIGLUMP.CPP";
		uVar6 = 0xc5;
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xc5);
	}
	pvVar3 = GAL_Lock(Handle);
	if (Handle == 0) {
		pcVar5 = "psxsrc/BIGLUMP.CPP";
		uVar6 = 200;
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",200);
	}
	setasyncfile(Name,pcVar5,uVar6,in_a3);
	iVar2 = asyncloadsegment(0,pvVar3,Size);
	do {
		systemtask(0);
		uVar4 = getasyncreadstatus(iVar2,pvVar3,Size,in_a3);
		TSK_Sleep(1);
	} while ((uVar4 & 0xff) == 0);
	cancelasyncload(iVar2,pvVar3,Size,in_a3);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xda);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_LoadDirectory__Fv()
 // line 230, offset 0x80081f70
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x80081F70
		// Variables:
	// 		long BL_DirMHandle; // $s2
	// 		char *AsyncAddr; // $s0
	// 		unsigned char *BL_DirPtr; // $s0
	// 		unsigned long DirId; // $s1
	// 		unsigned long DirId2; // $v0
	// 		long vm; // $v1
	/* end block 1 */
	// End offset: 0x800820C0
	// End Line: 275

	/* begin block 2 */
		// Start line: 471
	/* end block 2 */
	// End Line: 472

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BL_LoadDirectory__Fv(void)

{
	uchar uVar1;
	long Handle;
	int *piVar2;
	int MemSize;
	undefined *puVar3;
	undefined **e;
	undefined4 in_a3;
	
	Handle = BL_ReadFile__FPcUl("LUMP.DIR",1);
	piVar2 = (int *)GAL_Lock(Handle);
	if (piVar2 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xf5);
	}
	if (*piVar2 != 0x5249444c) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xf8);
	}
	BL_NoLumpFiles = piVar2[1];
	if (BL_NoLumpFiles == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0xfb);
	}
	LFileTab = BL_MakeFilePosTab__FPUcUl((uchar *)(piVar2 + 2),BL_NoLumpFiles);
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x102);
	}
	MemSize = GetVideoMode();
	if (MemSize == 0) {
		e = (undefined **)&DAT_8012a818;
	}
	else {
		if (MemSize != 1) goto LAB_80082080;
		e = &PTR_DAT_8012a820;
	}
	DBG_SendMessage((char *)e);
LAB_80082080:
	MemSize = asyncstructsize(10);
	puVar3 = (undefined *)Tmalloc__Fi(MemSize);
	if (puVar3 == (undefined *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x111);
	}
	initasyncstruct(puVar3,10,0x3000,in_a3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_LoadStreamDir__Fv()
 // line 279, offset 0x800820dc
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x800820DC
		// Variables:
	// 		long BL_DirMHandle; // $s1
	// 		unsigned char *BL_DirPtr; // $s0
	// 		unsigned long DirId; // $s2
	// 		unsigned long DirId2; // $v0
	// 		enum LANG_TYPE Lang; // $v1
	/* end block 1 */
	// End offset: 0x800823A0
	// End Line: 347

	/* begin block 2 */
		// Start line: 581
	/* end block 2 */
	// End Line: 582

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
		DBG_SendMessage("ENGLISH CD");
		break;
	case LANG_FRENCH:
		sprintf(STREAM_DIR,"STREAM2.DIR");
		sprintf(STREAM_BIN,"STREAM2.BIN");
		DBG_SendMessage("FRENCH CD");
		break;
	case LANG_GERMAN:
		sprintf(STREAM_DIR,"STREAM3.DIR");
		sprintf(STREAM_BIN,"STREAM3.BIN");
		DBG_SendMessage("GERMAN CD");
		break;
	case LANG_SWEDISH:
		sprintf(STREAM_DIR,"STREAM4.DIR");
		sprintf(STREAM_BIN,"STREAM4.BIN");
		DBG_SendMessage("SWEDISH CD");
		break;
	case LANG_JAP:
		sprintf(STREAM_DIR,"STREAM5.DIR");
		sprintf(STREAM_BIN,"STREAM5.BIN");
		DBG_SendMessage("JAPAN CD");
		break;
	case LANG_NONE:
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x13e);
	}
	if (FeFlag == '\0') {
		Handle = BL_ReadFile__FPcUl(STREAM_DIR,1);
	}
	else {
		Handle = BL_AsyncReadFile__FPcUl(STREAM_DIR,1);
	}
	piVar3 = (int *)GAL_Lock(Handle);
	if (piVar3 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x14b);
	}
	if (*piVar3 != 0x5249444c) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x14e);
	}
	BL_NoStreamFiles = piVar3[1];
	if (BL_NoStreamFiles == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x151);
	}
	if (SFileTab != (STRHDR *)0x0) {
		Tfree__FPv(SFileTab);
	}
	SFileTab = BL_MakeFilePosTab__FPUcUl((uchar *)(piVar3 + 2),BL_NoStreamFiles);
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x15a);
	}
	return;
}



// decompiled code
// original method signature: 
// struct STRHDR * /*$ra*/ BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr /*$a0*/, unsigned long NoStreamFiles /*$s1*/)
 // line 356, offset 0x800823bc
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x800823BC
		// Variables:
	// 		struct STREAM *DirPtr; // $s2
	// 		struct STRHDR *TFileTab; // $s0

		/* begin block 1.1 */
			// Start line: 367
			// Start offset: 0x8008240C

			/* begin block 1.1.1 */
				// Start line: 371
				// Start offset: 0x80082450

				/* begin block 1.1.1.1 */
					// Start line: 373
					// Start offset: 0x8008245C
					// Variables:
				// 		int j; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x80082490
				// End Line: 375
			/* end block 1.1.1 */
			// End offset: 0x80082490
			// End Line: 375
		/* end block 1.1 */
		// End offset: 0x8008249C
		// End Line: 376
	/* end block 1 */
	// End offset: 0x800824A0
	// End Line: 378

	/* begin block 2 */
		// Start line: 738
	/* end block 2 */
	// End Line: 739

STRHDR * BL_MakeFilePosTab__FPUcUl(uchar *BL_DirPtr,ulong NoStreamFiles)

{
	int iVar1;
	int iVar2;
	STRHDR *pSVar3;
	STRHDR *pSVar4;
	STRHDR *pSVar5;
	uchar *puVar6;
	
	iVar2 = fileexists((uint *)"LUMP.BIN");
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x16c);
	}
	pSVar3 = (STRHDR *)Tmalloc__Fi((NoStreamFiles + 1) * 0x14);
	DBG_SendMessage("DIR TAB = %d");
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
 // line 387, offset 0x800824bc
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x800824BC
		// Variables:
	// 		struct STRHDR *ptr; // $s1
	// 		unsigned long NoFiles; // $s5
	// 		int pos; // $s4
	// 		int c; // $v1
	// 		char fname[14]; // stack offset -64
	// 		int size; // $s3

		/* begin block 1.1 */
			// Start line: 405
			// Start offset: 0x80082534
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80082570
		// End Line: 412

		/* begin block 1.2 */
			// Start line: 419
			// Start offset: 0x800825B0
			// Variables:
		// 		int i; // $v1
		// 		int i; // $v1
		/* end block 1.2 */
		// End offset: 0x800825C8
		// End Line: 419

		/* begin block 1.3 */
			// Start line: 420
			// Start offset: 0x800825C8
			// Variables:
		// 		int s; // $s0
		// 		int i; // $v1
		// 		int i; // $v1

			/* begin block 1.3.1 */
				// Start line: 420
				// Start offset: 0x800825D0

				/* begin block 1.3.1.1 */
					// Start line: 422
					// Start offset: 0x800825DC
				/* end block 1.3.1.1 */
				// End offset: 0x80082600
				// End Line: 422
			/* end block 1.3.1 */
			// End offset: 0x80082614
			// End Line: 424
		/* end block 1.3 */
		// End offset: 0x8008261C
		// End Line: 425
	/* end block 1 */
	// End offset: 0x80082630
	// End Line: 427

	/* begin block 2 */
		// Start line: 810
	/* end block 2 */
	// End Line: 811

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
			DBG_SendMessage("LUMP FILE NOT FOUND - %s");
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
 // line 436, offset 0x80082658
	/* begin block 1 */
		// Start line: 437
		// Start offset: 0x80082658
	/* end block 1 */
	// End offset: 0x8008266C
	// End Line: 439

	/* begin block 2 */
		// Start line: 915
	/* end block 2 */
	// End Line: 916

void * BL_FileExists__FPcc(char *Name,char LumpID)

{
	STRHDR *pSVar1;
	
	pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	return (void *)(uint)(pSVar1 != (STRHDR *)0x0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ BL_FileLength__FPcc(char *Name /*$a0*/, char LumpID /*$a1*/)
 // line 450, offset 0x8008267c
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x8008267C
		// Variables:
	// 		struct STRHDR *ptr; // $v1
	/* end block 1 */
	// End offset: 0x800826A0
	// End Line: 457

	/* begin block 2 */
		// Start line: 943
	/* end block 2 */
	// End Line: 944

int BL_FileLength__FPcc(char *Name,char LumpID)

{
	STRHDR *pSVar1;
	int iVar2;
	
	pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	iVar2 = 0;
	if (pSVar1 != (STRHDR *)0x0) {
		iVar2 = pSVar1->Size;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_LoadFileAtAddr__FPcPUcc(char *Name /*$a0*/, unsigned char *Dest /*$s2*/, char LumpID /*$a2*/)
 // line 466, offset 0x800826b0
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x800826B0
		// Variables:
	// 		struct STRHDR *sh; // $s0
	// 		int ah; // $s0
	/* end block 1 */
	// End offset: 0x8008277C
	// End Line: 548

	/* begin block 2 */
		// Start line: 975
	/* end block 2 */
	// End Line: 976

void * BL_LoadFileAtAddr__FPcPUcc(char *Name,uchar *Dest,char LumpID)

{
	STRHDR *pSVar1;
	undefined *puVar2;
	int iVar3;
	uint uVar4;
	char *pcVar5;
	int iVar6;
	undefined4 in_a3;
	int iVar7;
	
	iVar6 = (uint)(byte)LumpID << 0x18;
	iVar7 = iVar6 >> 0x18;
	iVar3 = iVar7;
	pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	if (pSVar1 == (STRHDR *)0x0) {
		puVar2 = (undefined *)0x0;
	}
	else {
		if (Dest == (uchar *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x1e0);
			puVar2 = (undefined *)0x0;
		}
		else {
			pcVar5 = STREAM_BIN;
			if (iVar7 == 1) {
				pcVar5 = "LUMP.BIN";
			}
			setasyncfile(pcVar5,iVar3,iVar6,in_a3);
			iVar6 = pSVar1->Size;
			iVar3 = asyncloadsegment(pSVar1->Offset + 4,Dest,iVar6);
			do {
				systemtask(0);
				uVar4 = getasyncreadstatus(iVar3,Dest,iVar6,in_a3);
			} while ((uVar4 & 0xff) == 0);
			cancelasyncload(iVar3,Dest,iVar6,in_a3);
			puVar2 = &DAT_00000001;
		}
	}
	return puVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_AsyncLoadDone__Fv()
 // line 557, offset 0x80082798
	/* begin block 1 */
		// Start line: 558
		// Start offset: 0x80082798
	/* end block 1 */
	// End offset: 0x8008279C
	// End Line: 560

	/* begin block 2 */
		// Start line: 1182
	/* end block 2 */
	// End Line: 1183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * BL_AsyncLoadDone__Fv(void)

{
	return (void *)(uint)(FileLoaded != '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ BL_AsyncLoadTASK__FP4TASK(struct TASK *T /*$a0*/)
 // line 564, offset 0x800827a4
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x800827A4
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		int ah; // $s0
	/* end block 1 */
	// End offset: 0x800827FC
	// End Line: 581

	/* begin block 2 */
		// Start line: 1195
	/* end block 2 */
	// End Line: 1196

void BL_AsyncLoadTASK__FP4TASK(TASK *T)

{
	uint uVar1;
	undefined4 in_a1;
	undefined4 in_a2;
	undefined4 in_a3;
	int iVar2;
	
	iVar2 = *(int *)T->fActive;
	do {
		TSK_Sleep(1);
		systemtask(0);
		uVar1 = getasyncreadstatus(iVar2,in_a1,in_a2,in_a3);
	} while ((uVar1 & 0xff) == 0);
	FileLoaded = '\x01';
	DBG_SendMessage("Async file loaded");
	cancelasyncload(iVar2,in_a1,in_a2,in_a3);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ BL_LoadFileAsync__FPcc(char *Name /*$s2*/, char LumpID /*$s0*/)
 // line 585, offset 0x80082810
	/* begin block 1 */
		// Start line: 586
		// Start offset: 0x80082810
		// Variables:
	// 		struct STRHDR *sh; // $s1
	// 		struct DEF_ARGS *A; // $v0
	// 		int Size; // $s0
	// 		int ah; // $s0
	// 		long MyHnd; // $s2
	// 		unsigned char *LoadAddr; // $s0
	/* end block 1 */
	// End offset: 0x80082998
	// End Line: 632

	/* begin block 2 */
		// Start line: 1247
	/* end block 2 */
	// End Line: 1248

long BL_LoadFileAsync__FPcc(char *Name,char LumpID)

{
	uchar uVar1;
	undefined *puVar2;
	STRHDR *pSVar3;
	long Handle;
	ulong Size;
	void *pvVar4;
	undefined4 uVar5;
	TASK *pTVar6;
	STRHDR *pSVar7;
	int iVar8;
	undefined4 in_a3;
	
	if (FileLoaded == '\0') {
		DBG_SendMessage("BL_LoadFileAsync - BUSY");
		while (puVar2 = (undefined *)BL_AsyncLoadDone__Fv(), puVar2 != &DAT_00000001) {
			TSK_Sleep(1);
		}
	}
	FileLoaded = '\0';
	pSVar3 = BL_FindStreamFile__FPcc(Name,LumpID);
	if (pSVar3 == (STRHDR *)0x0) {
		Handle = -1;
	}
	else {
		Size = BL_FileLength__FPcc(Name,LumpID);
		if (Size == 0) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x261);
		}
		Handle = GAL_Alloc(Size,1,(char *)0x0);
		if (Handle == -1) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x264);
		}
		pvVar4 = GAL_Lock(Handle);
		if (Handle == 0) {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x267);
		}
		iVar8 = pSVar3->Size;
		pSVar7 = pSVar3;
		DBG_SendMessage("Reading %s - Size %d");
		setasyncfile(STREAM_BIN,pSVar7,iVar8,in_a3);
		uVar5 = asyncloadsegment(pSVar3->Offset + 4,pvVar4,pSVar3->Size);
		pTVar6 = TSK_AddTask(0,BL_AsyncLoadTASK__FP4TASK,0x800,0x10);
		*(undefined4 *)pTVar6->fActive = uVar5;
		uVar1 = GAL_Unlock(Handle);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/BIGLUMP.CPP",0x275);
		}
	}
	return Handle;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name /*$a0*/, unsigned char *Dest /*$s2*/, char LumpID /*$a2*/)
 // line 641, offset 0x800829b4
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x800829B4
		// Variables:
	// 		struct STRHDR *sh; // $s0
	// 		struct DEF_ARGS *A; // $v1
	// 		int ah; // $s0
	/* end block 1 */
	// End offset: 0x80082A60
	// End Line: 674

	/* begin block 2 */
		// Start line: 1361
	/* end block 2 */
	// End Line: 1362

void * BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name,uchar *Dest,char LumpID)

{
	STRHDR *pSVar1;
	undefined *puVar2;
	undefined4 uVar3;
	TASK *pTVar4;
	char *pcVar5;
	int iVar6;
	int iVar7;
	undefined4 in_a3;
	int iVar8;
	
	iVar7 = (uint)(byte)LumpID << 0x18;
	iVar8 = iVar7 >> 0x18;
	FileLoaded = '\0';
	iVar6 = iVar8;
	pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	puVar2 = (undefined *)0x0;
	if (pSVar1 != (STRHDR *)0x0) {
		if (pSVar1->Size == 0) {
			puVar2 = (undefined *)0x0;
		}
		else {
			pcVar5 = STREAM_BIN;
			if (iVar8 == 1) {
				pcVar5 = "LUMP.BIN";
			}
			setasyncfile(pcVar5,iVar6,iVar7,in_a3);
			uVar3 = asyncloadsegment(pSVar1->Offset + 4,Dest,pSVar1->Size);
			pTVar4 = TSK_AddTask(0,BL_AsyncLoadTASK__FP4TASK,0x800,0x10);
			puVar2 = &DAT_00000001;
			*(undefined4 *)pTVar4->fActive = uVar3;
		}
	}
	return puVar2;
}



// decompiled code
// original method signature: 
// struct STRHDR * /*$ra*/ BL_OpenStreamFile__FPcc(char *Name /*$a0*/, char LumpID /*$a1*/)
 // line 683, offset 0x80082a7c
	/* begin block 1 */
		// Start line: 684
		// Start offset: 0x80082A7C
		// Variables:
	// 		struct STRHDR *sh; // $v0
	/* end block 1 */
	// End offset: 0x80082A98
	// End Line: 688

	/* begin block 2 */
		// Start line: 1478
	/* end block 2 */
	// End Line: 1479

STRHDR * BL_OpenStreamFile__FPcc(char *Name,char LumpID)

{
	STRHDR *pSVar1;
	
	pSVar1 = BL_FindStreamFile__FPcc(Name,LumpID);
	return (STRHDR *)((uint)pSVar1 & -(uint)(pSVar1 != (STRHDR *)0x0));
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR /*$a0*/)
 // line 702, offset 0x80082aa8
	/* begin block 1 */
		// Start line: 703
		// Start offset: 0x80082AA8
	/* end block 1 */
	// End offset: 0x80082AD0
	// End Line: 710

	/* begin block 2 */
		// Start line: 1516
	/* end block 2 */
	// End Line: 1517

void * BL_CloseStreamFile__FP6STRHDR(STRHDR *StreamHDR)

{
	if (StreamHDR == (STRHDR *)0x0) {
		DBG_SendMessage("NULL StreamHDR");
	}
	return (void *)(uint)(StreamHDR != (STRHDR *)0x0);
}





