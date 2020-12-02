#include "THISDUST.H"
#include "GARYL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MemCb__FlPvUlPCcii(long hnd /*$a0*/, void *Addr /*$a1*/, unsigned long Size /*$a2*/, char *Name /*$a3*/, int Users /*stack 16*/, int TimeStamp /*stack 20*/)
 // line 111, offset 0x800845bc
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x800845BC
	/* end block 1 */
	// End offset: 0x800845D0
	// End Line: 128

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

void MemCb__FlPvUlPCcii(long hnd,void *Addr,ulong Size,char *Name,int Users,int TimeStamp)

{
	LastAddr = (ulong)Addr;
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Spanker__Fv()
 // line 131, offset 0x800845e0
	/* begin block 1 */
		// Start line: 132
		// Start offset: 0x800845E0
	/* end block 1 */
	// End offset: 0x80084624
	// End Line: 146

	/* begin block 2 */
		// Start line: 262
	/* end block 2 */
	// End Line: 263

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Spanker__Fv(void)

{
	GAL_GetUsedMem(1);
	GAL_GetFreeMem(1);
	LastAddr = 0;
	GAL_LargestFreeBlock(1);
	GAL_SortUsedRegionsByAddress(1);
	GAL_IterateUsedMem(1,MemCb__FlPvUlPCcii);
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GaryLiddon__Fv()
 // line 330, offset 0x80084634
	/* begin block 1 */
		// Start line: 331
		// Start offset: 0x80084634
	/* end block 1 */
	// End offset: 0x80084634
	// End Line: 331

	/* begin block 2 */
		// Start line: 661
	/* end block 2 */
	// End Line: 662

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GaryLiddon__Fv(void)

{
	return;
}





