#include "THISDUST.H"
#include "LEIGH.H"


// decompiled code
// original method signature: 
// void /*$ra*/ stub__FPcPv(char *e /*$a0*/, void *argptr /*$a1*/)
 // line 25, offset 0x8007cd6c
	/* begin block 1 */
		// Start line: 26
		// Start offset: 0x8007CD6C
	/* end block 1 */
	// End offset: 0x8007CD6C
	// End Line: 26

	/* begin block 2 */
		// Start line: 51
	/* end block 2 */
	// End Line: 52

void stub__FPcPv(char *e,void *argptr)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ eprint__FPcT0i(char *Text /*$a3*/, char *File /*$a1*/, int Line /*$a2*/)
 // line 30, offset 0x8007cd74
	/* begin block 1 */
		// Start line: 31
		// Start offset: 0x8007CD74
	/* end block 1 */
	// End offset: 0x8007CD98
	// End Line: 33

	/* begin block 2 */
		// Start line: 60
	/* end block 2 */
	// End Line: 61

void eprint__FPcT0i(char *Text,char *File,int Line)

{
	printf("File:%s Line:%d\t%s\n",File,Line,Text);
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ leighbird__Fv()
 // line 36, offset 0x8007cda8
	/* begin block 1 */
		// Start line: 37
		// Start offset: 0x8007CDA8
	/* end block 1 */
	// End offset: 0x8007CDC0
	// End Line: 40

	/* begin block 2 */
		// Start line: 72
	/* end block 2 */
	// End Line: 73

/* WARNING: Unknown calling convention yet parameter storage is locked */

void leighbird__Fv(void)

{
	DBG_SetErrorFunc(eprint__FPcT0i);
	return;
}





