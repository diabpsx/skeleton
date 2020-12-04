#include "THISDUST.H"
#include "STORM.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ SMemAlloc(unsigned long bytes /*$a0*/, char *filename /*$a1*/, int linenumber /*$a2*/, unsigned long flags /*$a3*/)
 // line 63, offset 0x80073644
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x80073644
	/* end block 1 */
	// End offset: 0x80073654
	// End Line: 65

	/* begin block 2 */
		// Start line: 126
	/* end block 2 */
	// End Line: 127

void * SMemAlloc(ulong bytes,char *filename,int linenumber,ulong flags)

{
	void *pvVar1;
	
	pvVar1 = Tmalloc__Fi(bytes);
	return pvVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SMemFree(void *ptr /*$a0*/, char *filename /*$a1*/, int linenumber /*$a2*/, unsigned long flags /*$a3*/)
 // line 74, offset 0x80073664
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x80073664
	/* end block 1 */
	// End offset: 0x80073674
	// End Line: 77

	/* begin block 2 */
		// Start line: 148
	/* end block 2 */
	// End Line: 149

uchar SMemFree(void *ptr,char *filename,int linenumber,ulong flags)

{
	Tfree__FPv(ptr);
	return '\x01';
}





