#include "THISDUST.H"
#include "CDIO.H"


// decompiled code
// original method signature: 
// struct CdIO * /*$ra*/ __4CdIOUl(struct CdIO *this /*$s0*/, unsigned long OurMemId /*$a1*/)
 // line 122, offset 0x800814a8
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x800814A8
	/* end block 1 */
	// End offset: 0x800814A8
	// End Line: 123

	/* begin block 2 */
		// Start line: 244
	/* end block 2 */
	// End Line: 245

CdIO * __4CdIOUl(CdIO *this,ulong OurMemId)

{
	__6FileIOUl((FileIO *)this,OurMemId);
	*(undefined4 *)(this->FileIO)._vf = 0x8011fe2c;
	CdInit();
	CdSetDebug(0);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._4CdIO(struct CdIO *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 135, offset 0x800814ec
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x800814EC
	/* end block 1 */
	// End offset: 0x800814EC
	// End Line: 136

	/* begin block 2 */
		// Start line: 270
	/* end block 2 */
	// End Line: 271

void ___4CdIO(CdIO *this,int __in_chrg)

{
	*(undefined4 *)(this->FileIO)._vf = 0x8011fe2c;
	___6FileIO((FileIO *)this,0);
	if ((__in_chrg & 1U) != 0) {
		__dl__6SysObjPv(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FileExists__4CdIOPCc(struct CdIO *this /*$a0*/, char *Name /*$a1*/)
 // line 145, offset 0x80081544
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x80081544
	/* end block 1 */
	// End offset: 0x80081558
	// End Line: 156

	/* begin block 2 */
		// Start line: 290
	/* end block 2 */
	// End Line: 291

void * FileExists__4CdIOPCc(CdIO *this,char *Name)

{
	void *pvVar1;
	
	pvVar1 = BL_FileExists__FPcc(Name,'\x01');
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this /*$a0*/, char *Name /*$a1*/, unsigned char *Dest /*$a2*/, int Len /*$a3*/)
 // line 167, offset 0x80081568
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80081568
	/* end block 1 */
	// End offset: 0x80081580
	// End Line: 193

	/* begin block 2 */
		// Start line: 334
	/* end block 2 */
	// End Line: 335

void * LoReadFileAtAddr__4CdIOPCcPUci(CdIO *this,char *Name,uchar *Dest,int Len)

{
	void *pvVar1;
	
	pvVar1 = BL_LoadFileAtAddr__FPcPUcc(Name,Dest,'\x01');
	return pvVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFileLength__4CdIOPCc(struct CdIO *this /*$a0*/, char *Name /*$a1*/)
 // line 201, offset 0x80081590
	/* begin block 1 */
		// Start line: 202
		// Start offset: 0x80081590
	/* end block 1 */
	// End offset: 0x800815A4
	// End Line: 212

	/* begin block 2 */
		// Start line: 402
	/* end block 2 */
	// End Line: 403

int GetFileLength__4CdIOPCc(CdIO *this,char *Name)

{
	int iVar1;
	
	iVar1 = BL_FileLength__FPcc(Name,'\x01');
	return iVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoSave__4CdIOPCcPUci(struct CdIO *this /*$a0*/, char *Name /*$s1*/, unsigned char *Addr /*$s3*/, int Len /*$s4*/)
 // line 217, offset 0x800815b4
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x800815B4
		// Variables:
	// 		int FileHnd; // $s0
	/* end block 1 */
	// End offset: 0x80081670
	// End Line: 237

	/* begin block 2 */
		// Start line: 434
	/* end block 2 */
	// End Line: 435

void * LoSave__4CdIOPCcPUci(CdIO *this,char *Name,uchar *Addr,int Len)

{
	int iVar1;
	
	iVar1 = PCopen();
	if ((iVar1 == -1) && (iVar1 = PCcreat(), iVar1 == -1)) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0xe2);
	}
	PCwrite(iVar1,Addr,Len);
	iVar1 = PCclose();
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0xe8);
	}
	DBG_SendMessage("Sorry your not an arse :)");
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoStreamCallBack__Fi(int handle /*$a0*/)
 // line 253, offset 0x80081694
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80081694
	/* end block 1 */
	// End offset: 0x8008169C
	// End Line: 255

	/* begin block 2 */
		// Start line: 511
	/* end block 2 */
	// End Line: 512

void LoStreamCallBack__Fi(int handle)

{
	ChunkGot = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CD_GetCdlFILE__FPCcP7CdlFILE(char *Name /*$s2*/, struct CdlFILE *RetFile /*$s3*/)
 // line 259, offset 0x800816a4
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x800816A4
		// Variables:
	// 		char SearchBuffer[25]; // stack offset -104
	// 		int pos; // $s1
	// 		int c; // $v1
	// 		int size; // $s0
	// 		char Monkey[25]; // stack offset -72

		/* begin block 1.1 */
			// Start line: 260
			// Start offset: 0x800816A4
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8008170C
		// End Line: 272
	/* end block 1 */
	// End offset: 0x800817D0
	// End Line: 287

	/* begin block 2 */
		// Start line: 522
	/* end block 2 */
	// End Line: 523

void * CD_GetCdlFILE__FPCcP7CdlFILE(char *Name,CdlFILE *RetFile)

{
	char cVar1;
	char cVar2;
	size_t sVar3;
	int iVar4;
	undefined4 *puVar5;
	int iVar6;
	char *pcVar7;
	int iVar8;
	char local_68 [32];
	char local_48 [48];
	
	sVar3 = strlen(Name);
	strupr__FPc(Name);
	iVar6 = 0;
	iVar8 = 0;
	pcVar7 = Name;
	if (0 < (int)sVar3) {
		do {
			if (*pcVar7 == '\\') {
				iVar8 = iVar6 + 1;
			}
			iVar6 = iVar6 + 1;
			pcVar7 = pcVar7 + 1;
		} while (iVar6 < (int)sVar3);
	}
	iVar6 = 0;
	if (0 < (int)(sVar3 - iVar8)) {
		pcVar7 = local_48;
		do {
			iVar4 = iVar6 + iVar8;
			iVar6 = iVar6 + 1;
			*pcVar7 = Name[iVar4];
			pcVar7 = pcVar7 + 1;
		} while (iVar6 < (int)(sVar3 - iVar8));
	}
	local_48[iVar6] = '\0';
	local_68[0] = '\\';
	strcpy(local_68 + 1,local_48);
	sVar3 = strlen(local_68);
	cVar2 = DAT_8012a7de;
	cVar1 = DAT_8012a7dd;
	local_68[sVar3] = DAT_8012a7dc;
	local_68[sVar3 + 1] = cVar1;
	local_68[sVar3 + 2] = cVar2;
	puVar5 = CdSearchFile((undefined4 *)RetFile,local_68);
	if (puVar5 == (undefined4 *)0x0) {
		DBG_SendMessage("Could not find - %s");
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x11a);
	}
	return (void *)(uint)(puVar5 != (undefined4 *)0x0);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this /*$s1*/, char *Name /*$s0*/, int Slice /*$s6*/, TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func Func /*stack -72*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 293, offset 0x800817f0
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x800817F0
		// Variables:
	// 		unsigned char *Dest; // $s7
	// 		int OrigSize; // $fp
	// 		unsigned long Pos; // $s5
	// 		struct STRHDR *sh; // stack offset -64
	// 		int ah; // $s1
	// 		unsigned char Count; // stack offset -56

		/* begin block 1.1 */
			// Start line: 331
			// Start offset: 0x80081950
			// Variables:
		// 		int SizeToRead; // $s0
		// 		unsigned char *ptr; // $s2

			/* begin block 1.1.1 */
				// Start line: 349
				// Start offset: 0x800819C0
				// Variables:
			// 		int i; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80081A0C
			// End Line: 357
		/* end block 1.1 */
		// End offset: 0x80081A50
		// End Line: 362
	/* end block 1 */
	// End offset: 0x80081A74
	// End Line: 367

	/* begin block 2 */
		// Start line: 593
	/* end block 2 */
	// End Line: 594

void * LoStreamFile__4CdIOPCciPFPUciib_bii
								 (CdIO *this,char *Name,int Slice,
								 TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	void *pvVar1;
	STRHDR *StreamHDR;
	int iVar2;
	uint uVar3;
	undefined *puVar4;
	char *pcVar5;
	ulong *puVar6;
	int iVar7;
	TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func pTVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	ulong *puVar12;
	char local_38;
	
	local_38 = '\0';
	pTVar8 = Func;
	if (Size < 1) {
		pTVar8 = Func;
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x12f);
	}
	if (Slice < 1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x130);
	}
	if (CDWAIT == (void *)0x0) {
		iVar7 = Size;
		DBG_SendMessage("BLSlow %s - Size %d");
		pvVar1 = BL_FileExists__FPcc(Name,'\x01');
		if (pvVar1 == (void *)0x0) {
			iVar7 = 0x138;
			DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x138);
		}
		pcVar5 = (char *)0x1;
		StreamHDR = BL_OpenStreamFile__FPcc(Name,'\x01');
		if (StreamHDR == (STRHDR *)0x0) {
			pcVar5 = "psxsrc/CDIO.CPP";
			iVar7 = 0x13e;
			DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x13e);
		}
		puVar12 = STR_Buffer;
		if (sghMusic == &SFXTab) {
			puVar12 = (ulong *)SFXHDR_800a9964.mem;
		}
		if (sghMusic == &SFXHDR_800a9964) {
			puVar12 = (ulong *)SFXTab.mem;
		}
		iVar11 = StreamHDR->Offset + Offset + 4;
		iVar10 = Size;
		while (0 < iVar10) {
			iVar9 = iVar10;
			if (0x8000 < iVar10) {
				iVar9 = 0x8000;
			}
			setasyncfile("LUMP.BIN",pcVar5,iVar7,pTVar8);
			puVar6 = puVar12;
			iVar7 = iVar9;
			iVar2 = asyncloadsegment(iVar11,puVar12,iVar9);
			do {
				systemtask(0);
				uVar3 = getasyncreadstatus(iVar2,puVar6,iVar7,pTVar8);
			} while ((uVar3 & 0xff) == 0);
			cancelasyncload(iVar2,puVar6,iVar7,pTVar8);
			if (iVar9 == 0x8000) {
				iVar9 = 0x800;
			}
			iVar2 = 0;
			uVar3 = (uint)DAT_8012a7df;
			puVar6 = puVar12;
			do {
				pcVar5 = (char *)(Size - iVar10);
				pTVar8 = (TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func)(uint)(iVar10 == 0);
				iVar7 = iVar9;
				(*Func)(puVar6);
				iVar10 = iVar10 - iVar9;
				iVar11 = iVar11 + iVar9;
				puVar6 = (ulong *)((int)puVar6 + iVar9);
				if (iVar10 < 1) break;
				iVar2 = iVar2 + 1;
			} while (iVar2 < (int)uVar3);
			if ((local_38 == '\0') && (pvVar1 = IsGameLoading__Fv(), pvVar1 != (void *)0x0)) {
				UPDATEPROGRESS__Fi(4);
			}
			if (invflag != '\0') {
				TSK_Sleep(1);
			}
			local_38 = local_38 + '\x01';
		}
		BL_CloseStreamFile__FP6STRHDR(StreamHDR);
		puVar4 = &DAT_00000001;
	}
	else {
		puVar4 = (undefined *)
						 LoAsyncStreamFile__4CdIOPCciPFPUciib_bii
											 (this,Name,Slice,
												(TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func)Func,Offset,Size);
	}
	return puVar4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this /*$a0*/, char *Name /*$s0*/, int Slice /*$s3*/, TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func Func /*$s6*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 375, offset 0x80081aa8
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x80081AA8
		// Variables:
	// 		long hndText; // $s4
	// 		unsigned char *Dest; // $s2
	// 		int OrigSize; // $s5

		/* begin block 1.1 */
			// Start line: 396
			// Start offset: 0x80081B48
			// Variables:
		// 		int SizeToRead; // $s0
		/* end block 1.1 */
		// End offset: 0x80081B7C
		// End Line: 405
	/* end block 1 */
	// End offset: 0x80081BB8
	// End Line: 411

	/* begin block 2 */
		// Start line: 764
	/* end block 2 */
	// End Line: 765

void * LoAsyncStreamFile__4CdIOPCciPFPUciib_bii
								 (CdIO *this,char *Name,int Slice,
								 TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	uchar uVar1;
	long Handle;
	undefined *puVar2;
	void *pvVar3;
	int iVar4;
	int iVar5;
	
	DBG_SendMessage("BLAsync - %s");
	Handle = BL_LoadFileAsync__FPcc(Name,'\0');
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x184);
	}
	while (puVar2 = (undefined *)BL_AsyncLoadDone__Fv(), puVar2 != &DAT_00000001) {
		TSK_Sleep(1);
	}
	pvVar3 = GAL_Lock(Handle);
	iVar5 = Size;
	while (0 < iVar5) {
		iVar4 = iVar5;
		if (Slice < iVar5) {
			iVar4 = Slice;
		}
		(*Func)(pvVar3,Size - iVar5,iVar4,(uint)(iVar5 == 0));
		iVar5 = iVar5 - iVar4;
		pvVar3 = (void *)((int)pvVar3 + iVar4);
		if (iVar5 < 1) break;
		TSK_Sleep(1);
	}
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x198);
	}
	return &DAT_00000001;
}





