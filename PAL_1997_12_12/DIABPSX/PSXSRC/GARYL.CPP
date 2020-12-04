#include "THISDUST.H"
#include "GARYL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MemCb__FlPvUlPCcii(long hnd /*$a0*/, void *Addr /*$a1*/, unsigned long Size /*$a2*/, char *Name /*$a3*/, int Users /*stack 16*/, int TimeStamp /*stack 20*/)
 // line 111, offset 0x8007cbb8
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x8007CBB8
	/* end block 1 */
	// End offset: 0x8007CBC8
	// End Line: 114

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

void MemCb__FlPvUlPCcii(long hnd,void *Addr,ulong Size,char *Name,int Users,int TimeStamp)

{
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Spanker__Fv()
 // line 117, offset 0x8007cbd8
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x8007CBD8
	/* end block 1 */
	// End offset: 0x8007CC08
	// End Line: 126

	/* begin block 2 */
		// Start line: 234
	/* end block 2 */
	// End Line: 235

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Spanker__Fv(void)

{
	GAL_GetUsedMem(1);
	GAL_SortUsedRegionsBySize(1);
	GAL_IterateUsedMem(1,MemCb__FlPvUlPCcii);
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GaryLiddon__Fv()
 // line 271, offset 0x8007cc18
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x8007CC18
	/* end block 1 */
	// End offset: 0x8007CC18
	// End Line: 272

	/* begin block 2 */
		// Start line: 543
	/* end block 2 */
	// End Line: 544

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GaryLiddon__Fv(void)

{
	return;
}





