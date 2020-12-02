#include "THISDUST.H"
#include "CDIO.H"


// decompiled code
// original method signature: 
// struct CdIO * /*$ra*/ __4CdIOUl(struct CdIO *this /*$s0*/, unsigned long OurMemId /*$a1*/)
 // line 123, offset 0x80086c40
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x80086C40
	/* end block 1 */
	// End offset: 0x80086C40
	// End Line: 124

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

CdIO * __4CdIOUl(CdIO *this,ulong OurMemId)

{
	__6FileIOUl((FileIO *)this,OurMemId);
	*(undefined4 *)(this->FileIO)._vf = 0x80110234;
	CdInit();
	CdSetDebug(0);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._4CdIO(struct CdIO *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 136, offset 0x80086c84
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x80086C84
	/* end block 1 */
	// End offset: 0x80086C84
	// End Line: 137

	/* begin block 2 */
		// Start line: 272
	/* end block 2 */
	// End Line: 273

void ___4CdIO(CdIO *this,int __in_chrg)

{
	*(undefined4 *)(this->FileIO)._vf = 0x80110234;
	___6FileIO((FileIO *)this,0);
	if ((__in_chrg & 1U) != 0) {
		__dl__6SysObjPv(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FileExists__4CdIOPCc(struct CdIO *this /*$a0*/, char *Name /*$a1*/)
 // line 146, offset 0x80086cdc
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x80086CDC
	/* end block 1 */
	// End offset: 0x80086CF0
	// End Line: 157

	/* begin block 2 */
		// Start line: 292
	/* end block 2 */
	// End Line: 293

void * FileExists__4CdIOPCc(CdIO *this,char *Name)

{
	void *pvVar1;
	
	pvVar1 = BL_FileExists__FPcc(Name,'\x01');
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this /*$a0*/, char *Name /*$s0*/, unsigned char *Dest /*$s2*/, int Len /*$a3*/)
 // line 168, offset 0x80086d00
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x80086D00
	/* end block 1 */
	// End offset: 0x80086D80
	// End Line: 201

	/* begin block 2 */
		// Start line: 358
	/* end block 2 */
	// End Line: 359

void * LoReadFileAtAddr__4CdIOPCcPUci(CdIO *this,char *Name,uchar *Dest,int Len)

{
	bool bVar1;
	void *pvVar2;
	undefined *puVar3;
	
	bVar1 = false;
	if ((CDWAIT != (void *)0x0) && (pvVar2 = IsGameLoading__Fv(), pvVar2 == (void *)0x0)) {
		pvVar2 = BL_FileExists__FPcc(Name,'\0');
		bVar1 = pvVar2 != (void *)0x0;
	}
	if (bVar1) {
		pvVar2 = BL_AsyncLoadFileAtAddr__FPcPUcc(Name,Dest,'\0');
		puVar3 = (undefined *)0x0;
		if (pvVar2 != (void *)0x0) {
			BL_WaitForAsyncFinish__Fv();
			puVar3 = &DAT_00000001;
		}
	}
	else {
		puVar3 = (undefined *)BL_LoadFileAtAddr__FPcPUcc(Name,Dest,'\x01');
	}
	return puVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFileLength__4CdIOPCc(struct CdIO *this /*$a0*/, char *Name /*$a1*/)
 // line 209, offset 0x80086d9c
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x80086D9C
	/* end block 1 */
	// End offset: 0x80086DB0
	// End Line: 220

	/* begin block 2 */
		// Start line: 440
	/* end block 2 */
	// End Line: 441

int GetFileLength__4CdIOPCc(CdIO *this,char *Name)

{
	int iVar1;
	
	iVar1 = BL_FileLength__FPcc(Name,'\x01');
	return iVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoSave__4CdIOPCcPUci(struct CdIO *this /*$a0*/, char *Name /*$s1*/, unsigned char *Addr /*$s3*/, int Len /*$s4*/)
 // line 226, offset 0x80086dc0
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x80086DC0
		// Variables:
	// 		int FileHnd; // $s0
	/* end block 1 */
	// End offset: 0x80086E70
	// End Line: 246

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

void * LoSave__4CdIOPCcPUci(CdIO *this,char *Name,uchar *Addr,int Len)

{
	int iVar1;
	
	iVar1 = PCopen(Name,1,0);
	if ((iVar1 == -1) && (iVar1 = PCcreat(Name,0), iVar1 == -1)) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0xeb);
	}
	PCwrite(iVar1,Addr,Len);
	iVar1 = PCclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0xf1);
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CD_GetCdlFILE__FPCcP7CdlFILE(char *Name /*$a2*/, struct CdlFILE *RetFile /*$s0*/)
 // line 268, offset 0x80086e94
	/* begin block 1 */
		// Start line: 269
		// Start offset: 0x80086E94
		// Variables:
	// 		char SearchBuffer[256]; // stack offset -264
	/* end block 1 */
	// End offset: 0x80086ED0
	// End Line: 286

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

void * CD_GetCdlFILE__FPCcP7CdlFILE(char *Name,CdlFILE *RetFile)

{
	int iVar1;
	char acStack264 [256];
	
	sprintf(acStack264,"\\%s;1",Name);
	do {
		iVar1 = CdSearchFile(RetFile,acStack264);
	} while (iVar1 == 0);
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this /*$a0*/, char *Name /*$s1*/, int Slice /*$s5*/, TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func Func /*stack -64*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 292, offset 0x80086ee4
	/* begin block 1 */
		// Start line: 293
		// Start offset: 0x80086EE4
		// Variables:
	// 		unsigned char *Dest; // stack offset -56
	// 		int OrigSize; // stack offset -48
	// 		unsigned long Pos; // $s3
	// 		struct STRHDR *sh; // $s7
	// 		int ah; // $s0
	// 		unsigned char Count; // $s6
	// 		int Lumpfile; // $fp

		/* begin block 1.1 */
			// Start line: 334
			// Start offset: 0x80086FF0
			// Variables:
		// 		int SizeToRead; // $s1
		// 		unsigned char *ptr; // $s4
		/* end block 1.1 */
		// End offset: 0x800870C4
		// End Line: 369
	/* end block 1 */
	// End offset: 0x800870D8
	// End Line: 374

	/* begin block 2 */
		// Start line: 615
	/* end block 2 */
	// End Line: 616

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * LoStreamFile__4CdIOPCciPFPUciib_bii
								 (CdIO *this,char *Name,int Slice,
								 TDRFuncPtr_LoStreamFile__4CdIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	bool LumpID;
	uchar *puVar1;
	undefined *puVar2;
	void *pvVar3;
	STRHDR *StreamHDR;
	undefined4 uVar4;
	uint uVar5;
	char *pcVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	uint uVar10;
	
	uVar10 = 0;
	if (Size < 1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x12e);
	}
	if (Slice < 1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x12f);
	}
	LumpID = true;
	if (CDWAIT != (void *)0x0) {
		puVar2 = (undefined *)IsGameLoading__Fv();
		LumpID = puVar2 == &DAT_00000001;
	}
	pvVar3 = BL_FileExists__FPcc(Name,LumpID);
	if (pvVar3 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x13c);
	}
	StreamHDR = BL_OpenStreamFile__FPcc(Name,LumpID);
	if (StreamHDR == (STRHDR *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x142);
	}
	puVar1 = SFXHDR_800b9c64.mem;
	iVar9 = StreamHDR->Offset + Offset + 4;
	iVar8 = Size;
	while (0 < iVar8) {
		iVar7 = iVar8;
		if (0x8000 < iVar8) {
			iVar7 = 0x8000;
		}
		pcVar6 = STREAM_BIN;
		if (LumpID) {
			pcVar6 = "LUMP.BIN";
		}
		setasyncfile(pcVar6);
		uVar4 = asyncloadsegment(iVar9,puVar1,iVar7);
		do {
			systemtask(0);
			uVar5 = getasyncreadstatus(uVar4);
		} while ((uVar5 & 0xff) == 0);
		cancelasyncload(uVar4);
		(*Func)(puVar1,Size - iVar8,iVar7,(uint)(iVar8 == 0));
		iVar8 = iVar8 - iVar7;
		iVar9 = iVar9 + iVar7;
		if (iVar8 < 1) break;
		if (((uVar10 & 3) == 0) && (pvVar3 = IsGameLoading__Fv(), pvVar3 != (void *)0x0)) {
			UPDATEPROGRESS__Fi(4);
			uVar10 = uVar10 + 1;
		}
		else {
			TSK_Sleep(1);
			uVar10 = uVar10 + 1;
		}
	}
	BL_CloseStreamFile__FP6STRHDR(StreamHDR);
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this /*$a0*/, char *Name /*$s0*/, int Slice /*$s4*/, TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func Func /*$s6*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 382, offset 0x8008710c
	/* begin block 1 */
		// Start line: 383
		// Start offset: 0x8008710C
		// Variables:
	// 		long hndText; // $s3
	// 		unsigned char *Dest; // $s2
	// 		int OrigSize; // $s5

		/* begin block 1.1 */
			// Start line: 408
			// Start offset: 0x800871C0
			// Variables:
		// 		int SizeToRead; // $s0
		/* end block 1.1 */
		// End offset: 0x800871F4
		// End Line: 417
	/* end block 1 */
	// End offset: 0x80087230
	// End Line: 423

	/* begin block 2 */
		// Start line: 820
	/* end block 2 */
	// End Line: 821

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * LoAsyncStreamFile__4CdIOPCciPFPUciib_bii
								 (CdIO *this,char *Name,int Slice,
								 TDRFuncPtr_LoAsyncStreamFile__4CdIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	uchar uVar1;
	undefined *puVar2;
	void *pvVar3;
	long Handle;
	int iVar4;
	int iVar5;
	
	puVar2 = (undefined *)BL_AsyncLoadDone__Fv();
	if (puVar2 != &DAT_00000001) {
		BL_WaitForAsyncFinish__Fv();
	}
	pvVar3 = BL_FileExists__FPcc(Name,'\0');
	if (pvVar3 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x189);
	}
	Handle = BL_LoadFileAsync__FPcc(Name,'\0');
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x18d);
	}
	BL_WaitForAsyncFinish__Fv();
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
		DBG_Error((char *)0x0,"psxsrc/CDIO.CPP",0x1a4);
	}
	return &DAT_00000001;
}





