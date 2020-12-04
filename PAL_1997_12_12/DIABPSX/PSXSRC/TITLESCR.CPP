#include "THISDUST.H"
#include "TITLESCR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawFlameLogo__Fv()
 // line 50, offset 0x80093784
	/* begin block 1 */
		// Start line: 51
		// Start offset: 0x80093784
		// Variables:
	// 		struct POLY_FT4 *FT4; // $a0
	// 		int diff; // $s0
	/* end block 1 */
	// End offset: 0x800939BC
	// End Line: 83

	/* begin block 2 */
		// Start line: 100
	/* end block 2 */
	// End Line: 101

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawFlameLogo__Fv(void)

{
	ulong uVar1;
	POLY_FT4 *pPVar2;
	int iVar3;
	
	uVar1 = VID_GetTick__Fv();
	iVar3 = uVar1 - flametick;
	flametick = VID_GetTick__Fv();
	TitleAnimCount = TitleAnimCount + iVar3;
	if (0x38 < TitleAnimCount) {
		TitleAnimCount = 0;
	}
	pPVar2 = PrintFt4__7TextDatiiiiii(FlameTData,(TitleAnimCount >> 1) + 0xca003a,-0x47,100,0,0x20,0);
	pPVar2->r0 = -0x80;
	pPVar2->g0 = -0x80;
	pPVar2->b0 = -0x80;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2 = PrintFt4__7TextDatiiiiii(FlameTData,(TitleAnimCount >> 1) + 0xca0057,0xb8,100,0,0x20,0);
	pPVar2->r0 = -0x80;
	pPVar2->g0 = -0x80;
	pPVar2->b0 = -0x80;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2 = PrintFt4__7TextDatiiiiii(FlameTData,(TitleAnimCount >> 1) + 0xca0000,0xb8,100,0,0x20,0);
	pPVar2->r0 = -0x80;
	pPVar2->g0 = -0x80;
	pPVar2->b0 = -0x80;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2 = PrintFt4__7TextDatiiiiii(FlameTData,(TitleAnimCount >> 1) + 0xca001d,0xb8,100,0,0x20,0);
	pPVar2->r0 = -0x80;
	pPVar2->g0 = -0x80;
	pPVar2->b0 = -0x80;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2 = PrintFt4__7TextDatiiiiii(FlameTData,(TitleAnimCount >> 1) + 0xca0074,0xb8,100,0,0x20,0);
	pPVar2->r0 = -0x80;
	pPVar2->g0 = -0x80;
	pPVar2->b0 = -0x80;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2 = PrintFt4__7TextDatiiiiii(FlameTData,(TitleAnimCount >> 1) + 0xca0091,0xb8,100,0,0x20,0);
	pPVar2->r0 = -0x80;
	pPVar2->g0 = -0x80;
	pPVar2->b0 = -0x80;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TitleScreen__FP7CScreen(struct CScreen *FeScreen /*$s0*/)
 // line 87, offset 0x800939d4
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x800939D4
	/* end block 1 */
	// End offset: 0x80093A14
	// End Line: 91

	/* begin block 2 */
		// Start line: 207
	/* end block 2 */
	// End Line: 208

void TitleScreen__FP7CScreen(CScreen *FeScreen)

{
	DrawFlameLogo__Fv();
	Load__7CScreeniii(FeScreen,0x10,0xb,0);
	Display__7CScreeniiii(FeScreen,0x10,0xb,0,0);
	return;
}





