#include "THISDUST.H"
#include "VERSION.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VER_InitVersion__Fv()
 // line 230, offset 0x800826a0
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x800826A0
		// Variables:
	// 		char VerString[120]; // stack offset -128
	/* end block 1 */
	// End offset: 0x800826D4
	// End Line: 237

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VER_InitVersion__Fv(void)

{
	undefined4 uVar1;
	undefined auStack128 [120];
	
	FUN_800b0a18(auStack128);
	uVar1 = FUN_800b0aec(auStack128);
	sprintf(MyVerString,"VERSION\n%s\n\nCODEWORD\n%s",auStack128,uVar1);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ VER_GetVerString__Fv()
 // line 241, offset 0x800826e4
	/* begin block 1 */
		// Start line: 242
		// Start offset: 0x800826E4
	/* end block 1 */
	// End offset: 0x800826EC
	// End Line: 243

	/* begin block 2 */
		// Start line: 483
	/* end block 2 */
	// End Line: 484

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * VER_GetVerString__Fv(void)

{
	return MyVerString;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CharPair2Num__FPc(char *Str /*$a0*/)
 // line 285, offset 0x800826f4
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x800826F4
	/* end block 1 */
	// End offset: 0x80082714
	// End Line: 287

	/* begin block 2 */
		// Start line: 571
	/* end block 2 */
	// End Line: 572

int CharPair2Num__FPc(char *Str)

{
	return ((int)*Str + -0x30) * 10 + -0x30 + (int)Str[1];
}





