#include "THISDUST.H"
#include "DATIO.H"


// decompiled code
// original method signature: 
// struct DatIO * /*$ra*/ __5DatIOUl(struct DatIO *this /*$s0*/, unsigned long OurMemId /*$a1*/)
 // line 65, offset 0x80086744
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80086744
	/* end block 1 */
	// End offset: 0x80086744
	// End Line: 66

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

DatIO * __5DatIOUl(DatIO *this,ulong OurMemId)

{
	__6FileIOUl((FileIO *)this,OurMemId);
	*(undefined4 *)(this->FileIO)._vf = 0x801101cc;
	DDXinit();
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._5DatIO(struct DatIO *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 78, offset 0x80086780
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x80086780
	/* end block 1 */
	// End offset: 0x80086780
	// End Line: 79

	/* begin block 2 */
		// Start line: 156
	/* end block 2 */
	// End Line: 157

void ___5DatIO(DatIO *this,int __in_chrg)

{
	*(undefined4 *)(this->FileIO)._vf = 0x801101cc;
	___6FileIO((FileIO *)this,0);
	if ((__in_chrg & 1U) != 0) {
		__dl__6SysObjPv(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FileExists__5DatIOPCc(struct DatIO *this /*$a0*/, char *Name /*$a1*/)
 // line 88, offset 0x800867d8
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x800867D8
		// Variables:
	// 		int FileHnd; // $a0
	/* end block 1 */
	// End offset: 0x80086808
	// End Line: 97

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

void * FileExists__5DatIOPCc(DatIO *this,char *Name)

{
	int iVar1;
	
	iVar1 = DDXopen(Name,0);
	if (iVar1 != -1) {
		DDXclose();
	}
	return (void *)(uint)(iVar1 != -1);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this /*$a0*/, char *Name /*$a1*/, unsigned char *Dest /*$s2*/, int Len /*$s3*/)
 // line 109, offset 0x80086818
	/* begin block 1 */
		// Start line: 110
		// Start offset: 0x80086818
		// Variables:
	// 		int FileHnd; // $s0
	/* end block 1 */
	// End offset: 0x800868B8
	// End Line: 122

	/* begin block 2 */
		// Start line: 218
	/* end block 2 */
	// End Line: 219

void * LoReadFileAtAddr__5DatIOPCcPUci(DatIO *this,char *Name,uchar *Dest,int Len)

{
	int iVar1;
	int iVar2;
	
	iVar1 = DDXopen(Name,0);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x71);
	}
	iVar2 = DDXread(iVar1,Dest,Len);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x74);
	}
	iVar1 = DDXclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x77);
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFileLength__5DatIOPCc(struct DatIO *this /*$a0*/, char *Name /*$a1*/)
 // line 128, offset 0x800868d8
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x800868D8
		// Variables:
	// 		int FileHnd; // $s0
	// 		int Len; // $s1
	/* end block 1 */
	// End offset: 0x80086970
	// End Line: 143

	/* begin block 2 */
		// Start line: 259
	/* end block 2 */
	// End Line: 260

int GetFileLength__5DatIOPCc(DatIO *this,char *Name)

{
	int iVar1;
	int iVar2;
	
	iVar1 = DDXopen(Name,0);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x86);
	}
	iVar2 = DDXlseek(iVar1,0,2);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x89);
	}
	iVar1 = DDXclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x8c);
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoSave__5DatIOPCcPUci(struct DatIO *this /*$a0*/, char *Name /*$a1*/, unsigned char *Addr /*$s1*/, int Len /*$s2*/)
 // line 146, offset 0x8008698c
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x8008698C
		// Variables:
	// 		int FileHnd; // $s0
	/* end block 1 */
	// End offset: 0x80086A14
	// End Line: 159

	/* begin block 2 */
		// Start line: 300
	/* end block 2 */
	// End Line: 301

void * LoSave__5DatIOPCcPUci(DatIO *this,char *Name,uchar *Addr,int Len)

{
	int iVar1;
	
	iVar1 = DDXcreate(Name,0);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x97);
	}
	DDXwrite(iVar1,Addr,Len);
	iVar1 = DDXclose(iVar1);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0x9c);
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this /*$a0*/, char *Name /*$s0*/, int Slice /*$s4*/, TDRFuncPtr_LoStreamFile__5DatIOPCciPFPUciib_bii3Func Func /*$fp*/, int Offset /*stack 16*/, int Size /*stack 20*/)
 // line 173, offset 0x80086a34
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x80086A34
		// Variables:
	// 		int FileHnd; // $s3
	// 		long hnd; // $s5
	// 		unsigned char *Dest; // $s2
	// 		int OrigSize; // $s6

		/* begin block 1.1 */
			// Start line: 200
			// Start offset: 0x80086B60
			// Variables:
		// 		int SizeToRead; // $s0
		/* end block 1.1 */
		// End offset: 0x80086BA0
		// End Line: 210
	/* end block 1 */
	// End offset: 0x80086C0C
	// End Line: 221

	/* begin block 2 */
		// Start line: 358
	/* end block 2 */
	// End Line: 359

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * LoStreamFile__5DatIOPCciPFPUciib_bii
								 (DatIO *this,char *Name,int Slice,
								 TDRFuncPtr_LoStreamFile__5DatIOPCciPFPUciib_bii3Func Func,int Offset,int Size)

{
	uchar uVar1;
	int iVar2;
	long Handle;
	void *pvVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (Size < 1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xb6);
	}
	if (Slice < 1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xb7);
	}
	iVar2 = DDXopen(Name,0);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xba);
	}
	Handle = GAL_Alloc(Slice,1,"SLICERAM");
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xbd);
	}
	pvVar3 = GAL_Lock(Handle);
	if (pvVar3 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xc0);
	}
	iVar4 = DDXlseek(iVar2,Offset,0);
	iVar6 = Size;
	if (iVar4 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xc5);
		iVar6 = Size;
	}
	while (iVar6 != 0) {
		iVar4 = iVar6;
		if (Slice < iVar6) {
			iVar4 = Slice;
		}
		iVar5 = DDXread(iVar2,pvVar3,iVar4);
		if (iVar5 == -1) {
			DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xcf);
		}
		(*Func)(pvVar3,Size - iVar6,iVar4,(uint)(iVar6 == 0));
		iVar6 = iVar6 - iVar4;
	}
	iVar2 = DDXclose(iVar2);
	if (iVar2 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xd7);
	}
	uVar1 = GAL_Free(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/DATIO.CPP",0xda);
	}
	return &DAT_00000001;
}





