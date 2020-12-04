#include "THISDUST.H"
#include "TMALLOC.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ Tmalloc__Fi(int MemSize /*$s0*/)
 // line 77, offset 0x80082bb4
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x80082BB4
		// Variables:
	// 		long MyHnd; // $s1
	// 		void *Addr; // $s0
	/* end block 1 */
	// End offset: 0x80082CC0
	// End Line: 109

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

void * Tmalloc__Fi(int MemSize)

{
	long Handle;
	void *pvVar1;
	void **ppvVar2;
	int iVar3;
	
	Handle = GAL_Alloc(MemSize,1,"TMALL");
	if (Handle == -1) {
		DBG_SendMessage("Gal failure trying to alloc %d");
		GAL_GetFreeMem(1);
		DBG_SendMessage("%d mem left");
		DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x5b);
	}
	pvVar1 = GAL_Lock(Handle);
	if (Handle == 0) {
		DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x5f);
	}
	ppvVar2 = &MemBlock[0].MemPtr;
	iVar3 = 0;
	do {
		if (*ppvVar2 == (void *)0x0) {
			*ppvVar2 = pvVar1;
			*(long *)((int)&MemBlock[0].Handle + iVar3) = Handle;
			NoTAllocs = NoTAllocs + 1;
			return pvVar1;
		}
		ppvVar2 = ppvVar2 + 2;
		iVar3 = iVar3 + 8;
	} while ((int)ppvVar2 < -0x7ff574e8);
	DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x6b);
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Tfree__FPv(void *Addr /*$s2*/)
 // line 118, offset 0x80082cd8
	/* begin block 1 */
		// Start line: 119
		// Start offset: 0x80082CD8
	/* end block 1 */
	// End offset: 0x80082D68
	// End Line: 137

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

void Tfree__FPv(void *Addr)

{
	uchar uVar1;
	void **ppvVar2;
	int iVar3;
	
	if (Addr != (void *)0x0) {
		ppvVar2 = &MemBlock[0].MemPtr;
		iVar3 = 0;
		do {
			if (Addr == *ppvVar2) {
				uVar1 = GAL_Free(*(long *)((int)&MemBlock[0].Handle + iVar3));
				if (uVar1 == '\0') {
					DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x84);
				}
				*ppvVar2 = (void *)0x0;
				NoTAllocs = NoTAllocs + -1;
			}
			ppvVar2 = ppvVar2 + 2;
			iVar3 = iVar3 + 8;
		} while ((int)ppvVar2 < -0x7ff574e8);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTmalloc__Fv()
 // line 146, offset 0x80082d88
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x80082D88
	/* end block 1 */
	// End offset: 0x80082DA8
	// End Line: 152

	/* begin block 2 */
		// Start line: 306
	/* end block 2 */
	// End Line: 307

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTmalloc__Fv(void)

{
	int iVar1;
	
	NoTAllocs = 0;
	iVar1 = 0x188;
	do {
		*(undefined4 *)((int)&MemBlock[0].MemPtr + iVar1) = 0;
		iVar1 = iVar1 + -8;
	} while (-1 < iVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strupr__FPc(char *Buffa /*$a0*/)
 // line 161, offset 0x80082db0
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x80082DB0
		// Variables:
	// 		char *TempBuf; // $a0
	// 		char TempChar; // $v1
	/* end block 1 */
	// End offset: 0x80082DF8
	// End Line: 168

	/* begin block 2 */
		// Start line: 336
	/* end block 2 */
	// End Line: 337

void strupr__FPc(char *Buffa)

{
	byte bVar1;
	
	while( true ) {
		bVar1 = *Buffa;
		if (*Buffa == 0) break;
		if ((((&DAT_800a5fa5)[(uint)bVar1] & 3) != 0) && ((uint)bVar1 - 0x61 < 0x1a)) {
			*Buffa = bVar1 - 0x20;
		}
		Buffa = (char *)((byte *)Buffa + 1);
	}
	return;
}





