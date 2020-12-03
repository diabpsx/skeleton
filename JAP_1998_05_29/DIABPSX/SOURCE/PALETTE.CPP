#include "THISDUST.H"
#include "PALETTE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LoadPalette__FPCc(char *pszFileName /*$a0*/)
 // line 78, offset 0x8007ee64
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x8007EE64
	/* end block 1 */
	// End offset: 0x8007EE64
	// End Line: 79

	/* begin block 2 */
		// Start line: 178
	/* end block 2 */
	// End Line: 179

void LoadPalette__FPCc(char *pszFileName)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadRndLvlPal__Fi(int l /*$a0*/)
 // line 105, offset 0x8007ee6c
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x8007EE6C
	/* end block 1 */
	// End offset: 0x8007EE6C
	// End Line: 106

	/* begin block 2 */
		// Start line: 223
	/* end block 2 */
	// End Line: 224

void LoadRndLvlPal__Fi(int l)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetPal__Fv()
 // line 123, offset 0x8007ee74
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x8007EE74
	/* end block 1 */
	// End offset: 0x8007EE74
	// End Line: 124

	/* begin block 2 */
		// Start line: 252
	/* end block 2 */
	// End Line: 253

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResetPal__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFadeLevel__Fi(int fadeval /*$a0*/)
 // line 137, offset 0x8007ee7c
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x8007EE7C
		// Variables:
	// 		int nval; // $v1
	/* end block 1 */
	// End offset: 0x8007EEA4
	// End Line: 145

	/* begin block 2 */
		// Start line: 277
	/* end block 2 */
	// End Line: 278

void SetFadeLevel__Fi(int fadeval)

{
	fadeval = 0x80 - fadeval;
	screenbright = (uchar)fadeval;
	if (fadeval < 0) {
		screenbright = '\0';
	}
	if (0x80 < fadeval) {
		screenbright = -0x80;
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetFadeState__Fv()
 // line 179, offset 0x8007eeac
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x8007EEAC
	/* end block 1 */
	// End offset: 0x8007EEB0
	// End Line: 181

	/* begin block 2 */
		// Start line: 359
	/* end block 2 */
	// End Line: 360

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GetFadeState__Fv(void)

{
	return fading;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4 /*$a0*/, unsigned char *coords /*$a1*/)
 // line 200, offset 0x8007eeb8
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x8007EEB8
		// Variables:
	// 		unsigned char bright1; // $a2
	// 		unsigned char bright2; // $v1
	/* end block 1 */
	// End offset: 0x8007EFC8
	// End Line: 225

	/* begin block 2 */
		// Start line: 400
	/* end block 2 */
	// End Line: 401

void SetPolyXY__FP8POLY_GT4PUc(POLY_GT4 *gt4,uchar *coords)

{
	byte bVar1;
	uchar uVar2;
	uchar uVar3;
	uint uVar4;
	
	uVar3 = screenbright;
	uVar4 = (uint)screenbright;
	gt4->x0 = (ushort)*coords << 1;
	uVar2 = (uchar)((int)(uVar4 << 3) / 6);
	gt4->y0 = (ushort)coords[1] << 1;
	gt4->x1 = (ushort)coords[2] << 1;
	gt4->y1 = (ushort)coords[3] << 1;
	gt4->x2 = (ushort)coords[4] << 1;
	gt4->y2 = (ushort)coords[5] << 1;
	gt4->x3 = (ushort)coords[6] << 1;
	bVar1 = coords[7];
	gt4->r0 = uVar3;
	gt4->r1 = uVar3;
	gt4->r2 = uVar3;
	gt4->r3 = uVar3;
	gt4->u1 = gt4->u1 + -1;
	gt4->tpage = gt4->tpage | 0x40;
	gt4->y3 = (ushort)bVar1 << 1;
	gt4->g0 = uVar2;
	gt4->b0 = uVar2;
	gt4->g1 = uVar2;
	gt4->b1 = uVar2;
	gt4->g2 = uVar2;
	gt4->b2 = uVar2;
	gt4->g3 = uVar2;
	gt4->b3 = uVar2;
	gt4->u3 = gt4->u3 + -1;
	gt4->v2 = gt4->v2 + -1;
	gt4->v3 = gt4->v3 + -1;
	gt4->code = gt4->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SmearScreen__Fv()
 // line 232, offset 0x8007efd4
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x8007EFD4
	/* end block 1 */
	// End offset: 0x8007EFD4
	// End Line: 233

	/* begin block 2 */
		// Start line: 568
	/* end block 2 */
	// End Line: 569

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmearScreen__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFadedScreen__Fv()
 // line 258, offset 0x8007efdc
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x8007EFDC
		// Variables:
	// 		struct TextDat *ThisDat; // $s0
	// 		struct POLY_GT4 *GT4a; // $v0
	/* end block 1 */
	// End offset: 0x8007F050
	// End Line: 268

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawFadedScreen__Fv(void)

{
	TextDat *this;
	POLY_GT4 *gt4;
	uchar *coords;
	
	this = GM_UseTexData__Fi(0);
	FADE_OT = GetMaxOtPos__7CBlocks();
	gt4 = PrintGt4__7TextDatiiiiii(this,0xd8,0,0,0,FADE_OT,0);
	if (TitleFlag == (void *)0x0) {
		coords = FadeCoords;
	}
	else {
		coords = FadeCoords2;
	}
	SetPolyXY__FP8POLY_GT4PUc(gt4,coords);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BlackPalette__Fv()
 // line 287, offset 0x8007f064
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8007F064
		// Variables:
	// 		struct POLY_FT4 *FT4; // $a3
	/* end block 1 */
	// End offset: 0x8007F150
	// End Line: 305

	/* begin block 2 */
		// Start line: 659
	/* end block 2 */
	// End Line: 660

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BlackPalette__Fv(void)

{
	short sVar1;
	TextDat *this;
	POLY_FT4 *pPVar2;
	
	FADE_OT = GetMaxOtPos__7CBlocks();
	this = GM_UseTexData__Fi(0);
	pPVar2 = PrintFt4__7TextDatiiiiii(this,0xd8,0,0,0,FADE_OT,0);
	pPVar2->r0 = '\0';
	pPVar2->g0 = '\0';
	pPVar2->b0 = '\0';
	pPVar2->u1 = pPVar2->u1 + -1;
	pPVar2->u3 = pPVar2->u3 + -1;
	pPVar2->v2 = pPVar2->v2 + -1;
	pPVar2->v3 = pPVar2->v3 + -1;
	pPVar2->code = pPVar2->code & 0xfc;
	if (TitleFlag == (void *)0x0) {
		sVar1 = 0xf0;
		pPVar2->x0 = 0;
		pPVar2->y0 = 0;
		pPVar2->x1 = 0x160;
		pPVar2->y1 = 0;
	}
	else {
		pPVar2->y0 = 0xb0;
		pPVar2->y1 = 0xb0;
		sVar1 = 0x1a0;
		pPVar2->x0 = 0;
		pPVar2->x1 = 0x160;
	}
	pPVar2->x2 = 0;
	pPVar2->y2 = sVar1;
	pPVar2->x3 = 0x160;
	pPVar2->y3 = sVar1;
	TSK_Sleep(1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PaletteFadeInTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 311, offset 0x8007f160
	/* begin block 1 */
		// Start line: 312
		// Start offset: 0x8007F160
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 321
			// Start offset: 0x8007F174
		/* end block 1.1 */
		// End offset: 0x8007F180
		// End Line: 323
	/* end block 1 */
	// End offset: 0x8007F1DC
	// End Line: 340

	/* begin block 2 */
		// Start line: 718
	/* end block 2 */
	// End Line: 719

void PaletteFadeInTask__FP4TASK(TASK *T)

{
	bool bVar1;
	int fadeval;
	
	fadeval = 0;
	VID_GetTick__Fv();
	bVar1 = true;
	while (bVar1) {
		SetFadeLevel__Fi(fadeval);
		DrawFadedScreen__Fv();
		fadeval = fadeval + faderate;
		TSK_Sleep(1);
		bVar1 = fadeval < 0x81;
	}
	SetFadeLevel__Fi(0x80);
	DrawFadedScreen__Fv();
	TSK_Sleep(1);
	fading = (void *)0x0;
	SetFadeLevel__Fi(0x80);
	DrawFadedScreen__Fv();
	TSK_Sleep(1);
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PaletteFadeIn__Fi(int fr /*$a0*/)
 // line 346, offset 0x8007f1f0
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x8007F1F0
	/* end block 1 */
	// End offset: 0x8007F238
	// End Line: 354

	/* begin block 2 */
		// Start line: 789
	/* end block 2 */
	// End Line: 790

void * PaletteFadeIn__Fi(int fr)

{
	bool bVar1;
	
	bVar1 = fading == (void *)0x0;
	if (bVar1) {
		fading = &DAT_00000001;
		sgbFadedIn = '\x01';
		faderate = fr;
		TSK_AddTask(0x8000,PaletteFadeInTask__FP4TASK,0x800,0);
	}
	return (void *)(uint)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PaletteFadeOutTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 361, offset 0x8007f248
	/* begin block 1 */
		// Start line: 362
		// Start offset: 0x8007F248
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 369
			// Start offset: 0x8007F25C
		/* end block 1.1 */
		// End offset: 0x8007F264
		// End Line: 371
	/* end block 1 */
	// End offset: 0x8007F2E4
	// End Line: 397

	/* begin block 2 */
		// Start line: 821
	/* end block 2 */
	// End Line: 822

void PaletteFadeOutTask__FP4TASK(TASK *T)

{
	int fadeval;
	
	fadeval = 0x80;
	VID_GetTick__Fv();
	while (-1 < fadeval) {
		SetFadeLevel__Fi(fadeval);
		SmearScreen__Fv();
		DrawFadedScreen__Fv();
		fadeval = fadeval - faderate;
		TSK_Sleep(1);
	}
	SetFadeLevel__Fi(0);
	DrawFadedScreen__Fv();
	TSK_Sleep(1);
	SetFadeLevel__Fi(0);
	DrawFadedScreen__Fv();
	TSK_Sleep(1);
	BlackPalette__Fv();
	sgbFadedIn = '\0';
	fading = (void *)0x0;
	BlackPalette__Fv();
	BlackPalette__Fv();
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PaletteFadeOut__Fi(int fr /*$a0*/)
 // line 403, offset 0x8007f2f8
	/* begin block 1 */
		// Start line: 404
		// Start offset: 0x8007F2F8
	/* end block 1 */
	// End offset: 0x8007F33C
	// End Line: 414

	/* begin block 2 */
		// Start line: 906
	/* end block 2 */
	// End Line: 907

void * PaletteFadeOut__Fi(int fr)

{
	bool bVar1;
	
	bVar1 = fading == (void *)0x0;
	if (bVar1) {
		fading = &DAT_00000001;
		sgbFadedIn = '\0';
		faderate = fr;
		TSK_AddTask(0x8000,PaletteFadeOutTask__FP4TASK,0x800,0);
	}
	return (void *)(uint)bVar1;
}





