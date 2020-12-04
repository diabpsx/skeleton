#include "THISDUST.H"
#include "VERSION.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VER_InitVersion__Fv()
 // line 230, offset 0x8007b7cc
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x8007B7CC
		// Variables:
	// 		char VerString[120]; // stack offset -128
	/* end block 1 */
	// End offset: 0x8007B800
	// End Line: 237

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VER_InitVersion__Fv(void)

{
	undefined *puVar1;
	char acStack128 [120];
	
	FUN_800a11bc(acStack128);
	puVar1 = FUN_800a1290(acStack128);
	sprintf(MyVerString,"VERSION\n%s\n\nCODEWORD\n%s",acStack128,puVar1);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ VER_GetVerString__Fv()
 // line 240, offset 0x8007b810
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x8007B810
	/* end block 1 */
	// End offset: 0x8007B818
	// End Line: 242

	/* begin block 2 */
		// Start line: 481
	/* end block 2 */
	// End Line: 482

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * VER_GetVerString__Fv(void)

{
	return MyVerString;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CharPair2Num__FPc(char *Str /*$a0*/)
 // line 284, offset 0x8007b820
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x8007B820
	/* end block 1 */
	// End offset: 0x8007B840
	// End Line: 286

	/* begin block 2 */
		// Start line: 569
	/* end block 2 */
	// End Line: 570

int CharPair2Num__FPc(char *Str)

{
	return ((int)*Str + -0x30) * 10 + -0x30 + (int)Str[1];
}





