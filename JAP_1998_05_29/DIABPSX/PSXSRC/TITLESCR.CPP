#include "THISDUST.H"
#include "TITLESCR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawFlameLogo__Fv()
 // line 65, offset 0x8009e1f0
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8009E1F0
		// Variables:
	// 		struct POLY_FT4 *FT4; // $t0
	// 		int diff; // $s0
	// 		int x; // $a2
	// 		int *frm; // $s2
	// 		int *xp; // $s1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x8009E248
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x8009E2CC
		// End Line: 87
	/* end block 1 */
	// End offset: 0x8009E380
	// End Line: 100

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawFlameLogo__Fv(void)

{
	int iVar1;
	TextDat *this;
	ulong uVar2;
	POLY_FT4 *pPVar3;
	int iVar4;
	int *piVar5;
	int *piVar6;
	
	uVar2 = VID_GetTick__Fv();
	piVar6 = &frmlist;
	iVar4 = uVar2 - flametick;
	flametick = VID_GetTick__Fv();
	piVar5 = &xoff;
	TitleAnimCount = TitleAnimCount + iVar4;
	iVar4 = 0;
	if (0x38 < TitleAnimCount) {
		TitleAnimCount = 0;
	}
	do {
		pPVar3 = PrintFt4__7TextDatiiiiii
											 (FlameTData,*piVar6 + (TitleAnimCount >> 1),*piVar5 + -8,100,0,0x20,0);
		piVar5 = piVar5 + 1;
		pPVar3->code = pPVar3->code & 0xfe | 2;
		piVar6 = piVar6 + 1;
		pPVar3->r0 = (uchar)flamecol;
		iVar4 = iVar4 + 1;
		pPVar3->g0 = (uchar)flamecol;
		iVar1 = flamecol;
		pPVar3->tpage = pPVar3->tpage | 0x20;
		pPVar3->b0 = (uchar)iVar1;
	} while (iVar4 < 6);
	if (AttractNo == 5) {
		pPVar3 = PrintFt4__7TextDatiiiiii(FlameTData,0xaf,0x114,0x98,0,0x20,0);
		pPVar3->r0 = -0x80;
		pPVar3->g0 = -0x80;
		pPVar3->b0 = -0x80;
		pPVar3->code = pPVar3->code & 0xfe | 2;
		this = FlameTData;
		pPVar3->tpage = pPVar3->tpage | 0x20;
		pPVar3 = PrintFt4__7TextDatiiiiii(this,0xae,0xa0,0xe4,0,0x20,0);
		pPVar3->r0 = -0x80;
		pPVar3->g0 = -0x80;
		pPVar3->b0 = -0x80;
		pPVar3->tpage = pPVar3->tpage | 0x20;
		pPVar3->code = pPVar3->code & 0xfe | 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TitleScreen__FP7CScreen(struct CScreen *FeScreen /*$s0*/)
 // line 107, offset 0x8009e3a0
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x8009E3A0
	/* end block 1 */
	// End offset: 0x8009E3E0
	// End Line: 111

	/* begin block 2 */
		// Start line: 257
	/* end block 2 */
	// End Line: 258

void TitleScreen__FP7CScreen(CScreen *FeScreen)

{
	DrawFlameLogo__Fv();
	Load__7CScreeniii(FeScreen,0x12,0xb,0);
	Display__7CScreeniiii(FeScreen,0x12,0xb,0,0);
	return;
}





