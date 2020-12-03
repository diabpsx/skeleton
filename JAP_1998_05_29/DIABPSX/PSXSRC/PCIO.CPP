#include "THISDUST.H"
#include "PCIO.H"


// decompiled code
// original method signature: 
// struct PCIO * /*$ra*/ __4PCIOUl(struct PCIO *this /*$s0*/, unsigned long OurMemId /*$a1*/)
 // line 62, offset 0x800860b4
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800860B4
	/* end block 1 */
	// End offset: 0x80086104
	// End Line: 66

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

/* WARNING: Removing unreachable block (ram,0x800860f0) */

PCIO * __4PCIOUl(PCIO *this,ulong OurMemId)

{
	__6FileIOUl((FileIO *)this,OurMemId);
	*(undefined4 *)(this->FileIO)._vf = 0x80110160;
	PCinit();
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._4PCIO(struct PCIO *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 75, offset 0x8008611c
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x8008611C
	/* end block 1 */
	// End offset: 0x8008611C
	// End Line: 76

	/* begin block 2 */
		// Start line: 150
	/* end block 2 */
	// End Line: 151

void ___4PCIO(PCIO *this,int __in_chrg)

{
	*(undefined4 *)(this->FileIO)._vf = 0x80110160;
	___6FileIO((FileIO *)this,0);
	if ((__in_chrg & 1U) != 0) {
		__dl__6SysObjPv(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FileExists__4PCIOPCc(struct PCIO *this /*$a0*/, char *Name /*$a1*/)
 // line 85, offset 0x80086174
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x80086174
		// Variables:
	// 		int FileHnd; // $a0
	/* end block 1 */
	// End offset: 0x800861A8
	// End Line: 94

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void * FileExists__4PCIOPCc(PCIO *this,char *Name)

{
	int iVar1;
	
	iVar1 = PCopen(Name,0,0);
	if (iVar1 != -1) {
		PCclose();
	}
	return (void *)(uint)(iVar1 != -1);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this /*$a0*/, char *Name /*$a1*/, unsigned char *Dest /*$s2*/, int Len /*$s3*/)
 // line 106, offset 0x800861b8
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x800861B8
		// Variables:
	// 		int FileHnd; // $s0
	/* end block 1 */
	// End offset: 0x8008625C
	// End Line: 119

	/* begin block 2 */
		// Start line: 212
	/* end block 2 */
	// End Line: 213

void * LoReadFileAtAddr__4PCIOPCcPUci(PCIO *this,char *Name,uchar *Dest,int Len)

{
	int iVar1;
	int iVar2;
	
	iVar1 = PCopen(Name,0,0);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x6e);
	}
	iVar2 = PCread(iVar1,Dest,Len);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x71);
	}
	iVar1 = PCclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x74);
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFileLength__4PCIOPCc(struct PCIO *this /*$a0*/, char *Name /*$a1*/)
 // line 125, offset 0x8008627c
	/* begin block 1 */
		// Start line: 126
		// Start offset: 0x8008627C
		// Variables:
	// 		int FileHnd; // $s0
	// 		int Len; // $s1
	/* end block 1 */
	// End offset: 0x80086318
	// End Line: 140

	/* begin block 2 */
		// Start line: 253
	/* end block 2 */
	// End Line: 254

int GetFileLength__4PCIOPCc(PCIO *this,char *Name)

{
	int iVar1;
	int iVar2;
	
	iVar1 = PCopen(Name,0,0);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x83);
	}
	iVar2 = PClseek(iVar1,0,2);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x86);
	}
	iVar1 = PCclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x89);
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoSave__4PCIOPCcPUci(struct PCIO *this /*$a0*/, char *Name /*$s1*/, unsigned char *Addr /*$s3*/, int Len /*$s4*/)
 // line 143, offset 0x80086334
	/* begin block 1 */
		// Start line: 144
		// Start offset: 0x80086334
		// Variables:
	// 		int FileHnd; // $s0
	/* end block 1 */
	// End offset: 0x800863E4
	// End Line: 161

	/* begin block 2 */
		// Start line: 294
	/* end block 2 */
	// End Line: 295

void * LoSave__4PCIOPCcPUci(PCIO *this,char *Name,uchar *Addr,int Len)

{
	int iVar1;
	
	iVar1 = PCopen(Name,1,0);
	if ((iVar1 == -1) && (iVar1 = PCcreat(Name,0), iVar1 == -1)) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x98);
	}
	PCwrite(iVar1,Addr,Len);
	iVar1 = PCclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0x9e);
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this /*$a0*/, char *Name /*$s0*/, int Slice /*$s4*/, TDRFuncPtr_LoStreamFile__4PCIOPCciPFPUciib_bii3Func Func /*$fp*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 169, offset 0x80086408
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x80086408
		// Variables:
	// 		int FileHnd; // $s3
	// 		long hnd; // $s5
	// 		unsigned char *Dest; // $s2
	// 		int OrigSize; // $s6

		/* begin block 1.1 */
			// Start line: 196
			// Start offset: 0x80086538
			// Variables:
		// 		int SizeToRead; // $s0
		/* end block 1.1 */
		// End offset: 0x80086578
		// End Line: 205
	/* end block 1 */
	// End offset: 0x800865E4
	// End Line: 215

	/* begin block 2 */
		// Start line: 350
	/* end block 2 */
	// End Line: 351

void * LoStreamFile__4PCIOPCciPFPUciib_bii
								 (PCIO *this,char *Name,int Slice,
								 TDRFuncPtr_LoStreamFile__4PCIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	uchar uVar1;
	int iVar2;
	long Handle;
	void *pvVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (Size < 1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xb2);
	}
	if (Slice < 1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xb3);
	}
	iVar2 = PCopen(Name,0,0);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xb6);
	}
	Handle = GAL_Alloc(Slice,1,"SLICERAM");
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xb9);
	}
	pvVar3 = GAL_Lock(Handle);
	if (pvVar3 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xbc);
	}
	iVar4 = PClseek(iVar2,Offset,0);
	iVar6 = Size;
	if (iVar4 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xc1);
		iVar6 = Size;
	}
	while (iVar6 != 0) {
		iVar4 = iVar6;
		if (Slice < iVar6) {
			iVar4 = Slice;
		}
		iVar5 = PCread(iVar2,pvVar3,iVar4);
		if (iVar5 == -1) {
			DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xcb);
		}
		(*Func)(pvVar3,Size - iVar6,iVar4,(uint)(iVar6 == 0));
		iVar6 = iVar6 - iVar4;
	}
	iVar2 = PCclose(iVar2);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xd1);
	}
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/PCIO.CPP",0xd4);
	}
	return &DAT_00000001;
}





