#include "THISDUST.H"
#include "TMALLOC.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ Tmalloc__Fi(int MemSize /*$a0*/)
 // line 78, offset 0x800882a8
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x800882A8
		// Variables:
	// 		long MyHnd; // $s0
	// 		void *Addr; // $s1
	/* end block 1 */
	// End offset: 0x80088384
	// End Line: 110

	/* begin block 2 */
		// Start line: 156
	/* end block 2 */
	// End Line: 157

void * Tmalloc__Fi(int MemSize)

{
	long Handle;
	void *pvVar1;
	void **ppvVar2;
	int iVar3;
	
	Handle = GAL_Alloc(MemSize,(ulong)&DAT_00008001,"TMALL");
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x5c);
	}
	pvVar1 = GAL_Lock(Handle);
	if (Handle == 0) {
		DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x60);
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
	} while ((int)ppvVar2 < -0x7ff482c8);
	DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x6c);
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Tfree__FPv(void *Addr /*$s2*/)
 // line 119, offset 0x8008839c
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8008839C
	/* end block 1 */
	// End offset: 0x8008842C
	// End Line: 138

	/* begin block 2 */
		// Start line: 248
	/* end block 2 */
	// End Line: 249

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
					DBG_Error((char *)0x0,"psxsrc/TMALLOC.CPP",0x85);
				}
				*ppvVar2 = (void *)0x0;
				NoTAllocs = NoTAllocs + -1;
			}
			ppvVar2 = ppvVar2 + 2;
			iVar3 = iVar3 + 8;
		} while ((int)ppvVar2 < -0x7ff482c8);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTmalloc__Fv()
 // line 147, offset 0x8008844c
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x8008844C
	/* end block 1 */
	// End offset: 0x8008846C
	// End Line: 153

	/* begin block 2 */
		// Start line: 308
	/* end block 2 */
	// End Line: 309

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTmalloc__Fv(void)

{
	int iVar1;
	
	NoTAllocs = 0;
	iVar1 = 0x1d8;
	do {
		*(undefined4 *)((int)&MemBlock[0].MemPtr + iVar1) = 0;
		iVar1 = iVar1 + -8;
	} while (-1 < iVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strupr__FPc(char *Buffa /*$a0*/)
 // line 162, offset 0x80088474
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x80088474
		// Variables:
	// 		char *TempBuf; // $a0
	// 		char TempChar; // $v1
	/* end block 1 */
	// End offset: 0x800884BC
	// End Line: 169

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

void strupr__FPc(char *Buffa)

{
	byte bVar1;
	
	while( true ) {
		bVar1 = *Buffa;
		if (*Buffa == 0) break;
		if ((((&DAT_800b5dbd)[(uint)bVar1] & 3) != 0) && ((uint)bVar1 - 0x61 < 0x1a)) {
			*Buffa = bVar1 - 0x20;
		}
		Buffa = (char *)((byte *)Buffa + 1);
	}
	return;
}





