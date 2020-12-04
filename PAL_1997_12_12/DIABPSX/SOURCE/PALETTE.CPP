#include "THISDUST.H"
#include "PALETTE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ LoadPalette__FPCc(char *pszFileName /*$a0*/)
 // line 74, offset 0x80077d30
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x80077D30
	/* end block 1 */
	// End offset: 0x80077D30
	// End Line: 75

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void LoadPalette__FPCc(char *pszFileName)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadRndLvlPal__Fi(int l /*$a0*/)
 // line 101, offset 0x80077d38
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x80077D38
	/* end block 1 */
	// End offset: 0x80077D38
	// End Line: 102

	/* begin block 2 */
		// Start line: 215
	/* end block 2 */
	// End Line: 216

void LoadRndLvlPal__Fi(int l)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetPal__Fv()
 // line 119, offset 0x80077d40
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x80077D40
	/* end block 1 */
	// End offset: 0x80077D40
	// End Line: 120

	/* begin block 2 */
		// Start line: 244
	/* end block 2 */
	// End Line: 245

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResetPal__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFadeLevel__Fi(int fadeval /*$a0*/)
 // line 133, offset 0x80077d48
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x80077D48
		// Variables:
	// 		int nval; // $v1
	/* end block 1 */
	// End offset: 0x80077D70
	// End Line: 141

	/* begin block 2 */
		// Start line: 269
	/* end block 2 */
	// End Line: 270

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
 // line 175, offset 0x80077d78
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x80077D78
	/* end block 1 */
	// End offset: 0x80077D7C
	// End Line: 177

	/* begin block 2 */
		// Start line: 351
	/* end block 2 */
	// End Line: 352

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GetFadeState__Fv(void)

{
	return fading;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4 /*$a0*/, unsigned char *coords /*$a1*/)
 // line 203, offset 0x80077d84
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x80077D84
		// Variables:
	// 		unsigned char bright2; // $v1
	/* end block 1 */
	// End offset: 0x80077E80
	// End Line: 228

	/* begin block 2 */
		// Start line: 410
	/* end block 2 */
	// End Line: 411

void SetPolyXY__FP8POLY_GT4PUc(POLY_GT4 *gt4,uchar *coords)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	uchar uVar4;
	
	uVar4 = screenbright;
	bVar2 = screenbright >> 1;
	gt4->x0 = (ushort)*coords << 1;
	gt4->y0 = (ushort)coords[1] << 1;
	gt4->x1 = (ushort)coords[2] << 1;
	gt4->y1 = (ushort)coords[3] << 1;
	gt4->x2 = (ushort)coords[4] << 1;
	gt4->y2 = (ushort)coords[5] << 1;
	gt4->x3 = (ushort)coords[6] << 1;
	bVar1 = coords[7];
	bVar3 = uVar4 >> 2;
	gt4->r0 = bVar3;
	gt4->g0 = bVar2;
	gt4->b0 = bVar2;
	gt4->r1 = bVar3;
	gt4->g1 = bVar2;
	gt4->b1 = bVar2;
	gt4->r2 = bVar3;
	gt4->g2 = bVar2;
	gt4->b2 = bVar2;
	gt4->r3 = bVar3;
	gt4->g3 = bVar2;
	gt4->b3 = bVar2;
	gt4->u1 = gt4->u1 + -1;
	gt4->tpage = gt4->tpage | 0x40;
	gt4->y3 = (ushort)bVar1 << 1;
	gt4->u3 = gt4->u3 + -1;
	gt4->v2 = gt4->v2 + -1;
	gt4->v3 = gt4->v3 + -1;
	gt4->code = gt4->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SmearScreen__Fv()
 // line 235, offset 0x80077e88
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x80077E88
	/* end block 1 */
	// End offset: 0x80077E88
	// End Line: 236

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmearScreen__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFadedScreen__Fv()
 // line 261, offset 0x80077e90
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80077E90
	/* end block 1 */
	// End offset: 0x80077ED4
	// End Line: 267

	/* begin block 2 */
		// Start line: 591
	/* end block 2 */
	// End Line: 592

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawFadedScreen__Fv(void)

{
	TextDat *this;
	POLY_GT4 *gt4;
	
	this = GM_UseTexData__Fi(0);
	gt4 = PrintGt4__7TextDatiiiiii(this,0x10a,0,0,0,0x12d,0);
	SetPolyXY__FP8POLY_GT4PUc(gt4,FadeCoords);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BlackPalette__Fv()
 // line 285, offset 0x80077ee4
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80077EE4
		// Variables:
	// 		struct POLY_FT4 *FT4; // $v0
	/* end block 1 */
	// End offset: 0x80077F90
	// End Line: 298

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BlackPalette__Fv(void)

{
	TextDat *this;
	POLY_FT4 *pPVar1;
	
	this = GM_UseTexData__Fi(0);
	pPVar1 = PrintFt4__7TextDatiiiiii(this,0x10a,0,0,0,0x12d,0);
	pPVar1->y2 = 0xf0;
	pPVar1->y3 = 0xf0;
	pPVar1->x1 = 0x160;
	pPVar1->x3 = 0x160;
	pPVar1->r0 = '\0';
	pPVar1->g0 = '\0';
	pPVar1->b0 = '\0';
	pPVar1->x0 = 0;
	pPVar1->y0 = 0;
	pPVar1->y1 = 0;
	pPVar1->x2 = 0;
	pPVar1->u1 = pPVar1->u1 + -1;
	pPVar1->u3 = pPVar1->u3 + -1;
	pPVar1->v2 = pPVar1->v2 + -1;
	pPVar1->v3 = pPVar1->v3 + -1;
	pPVar1->code = pPVar1->code & 0xfc;
	TSK_Sleep(1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PaletteFadeInTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 304, offset 0x80077fa0
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80077FA0
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 314
			// Start offset: 0x80077FB4
		/* end block 1.1 */
		// End offset: 0x80077FC0
		// End Line: 316
	/* end block 1 */
	// End offset: 0x8007801C
	// End Line: 333

	/* begin block 2 */
		// Start line: 700
	/* end block 2 */
	// End Line: 701

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
 // line 339, offset 0x80078030
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x80078030
	/* end block 1 */
	// End offset: 0x80078078
	// End Line: 347

	/* begin block 2 */
		// Start line: 771
	/* end block 2 */
	// End Line: 772

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
 // line 354, offset 0x80078088
	/* begin block 1 */
		// Start line: 355
		// Start offset: 0x80078088
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 362
			// Start offset: 0x8007809C
		/* end block 1.1 */
		// End offset: 0x800780A4
		// End Line: 364
	/* end block 1 */
	// End offset: 0x80078124
	// End Line: 390

	/* begin block 2 */
		// Start line: 803
	/* end block 2 */
	// End Line: 804

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
 // line 396, offset 0x80078138
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x80078138
	/* end block 1 */
	// End offset: 0x8007817C
	// End Line: 407

	/* begin block 2 */
		// Start line: 888
	/* end block 2 */
	// End Line: 889

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





