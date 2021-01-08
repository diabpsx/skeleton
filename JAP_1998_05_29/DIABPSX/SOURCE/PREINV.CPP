#include "THISDUST.H"
#include "PREINV.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitInv__Fv()
 // line 103, offset 0x8015f470
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x8015F470
	/* end block 1 */
	// End offset: 0x8015F4B4
	// End Line: 110

	/* begin block 2 */
		// Start line: 206
	/* end block 2 */
	// End Line: 207

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitInv__Fv(void)

{
	invflag = '\0';
	drawsbarflag = '\0';
	InvBackY = 0;
	InvPanelTData = GM_UseTexData__Fi(0);
	InvGfxTData = (TextDat *)0x0;
	InvCursPos = 0x19;
	return;
}





