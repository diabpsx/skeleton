#include "THISDUST.H"
#include "LOADING.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MY_TSK_Sleep__Fi(int time /*$s1*/)
 // line 145, offset 0x800a4524
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x800A4524

		/* begin block 1.1 */
			// Start line: 146
			// Start offset: 0x800A4524
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x800A4564
		// End Line: 152
	/* end block 1 */
	// End offset: 0x800A4564
	// End Line: 152

	/* begin block 2 */
		// Start line: 290
	/* end block 2 */
	// End Line: 291

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MY_TSK_Sleep__Fi(int time)

{
	int iVar1;
	
	iVar1 = 0;
	if (0 < time) {
		do {
			iVar1 = iVar1 + 1;
			TICK_Update();
			PAD_Handler__Fv();
			VID_AfterDisplay__Fv();
		} while (iVar1 < time);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UPDATEPROGRESS__Fi(int inc /*$a0*/)
 // line 162, offset 0x800a457c
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x800A457C

		/* begin block 1.1 */
			// Start line: 170
			// Start offset: 0x800A4594

			/* begin block 1.1.1 */
				// Start line: 179
				// Start offset: 0x800A45C0

				/* begin block 1.1.1.1 */
					// Start line: 179
					// Start offset: 0x800A45C0
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x800A4630
				// End Line: 197
			/* end block 1.1.1 */
			// End offset: 0x800A4630
			// End Line: 197
		/* end block 1.1 */
		// End offset: 0x800A4630
		// End Line: 197
	/* end block 1 */
	// End offset: 0x800A4630
	// End Line: 197

	/* begin block 2 */
		// Start line: 325
	/* end block 2 */
	// End Line: 326

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UPDATEPROGRESS__Fi(int inc)

{
	int iVar1;
	
	if (BootScreen == (void *)0x0) {
		if (inc == -1) {
			progress = progress + 4;
			TSK_Sleep(1);
		}
		else {
			iVar1 = 0;
			if (0 < inc << 2) {
				do {
					progress = progress + 1;
					if (BootScreen == (void *)0x0) {
						TSK_Sleep(1);
					}
					else {
						Display__7CScreeniiii(&CutScr,(uint)USHORT_80110cbe,0xb,0,0);
						DrawCutScreen__Fi(0xb);
						MY_TSK_Sleep__Fi(1);
					}
					iVar1 = iVar1 + 1;
				} while (iVar1 < inc << 2);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsGameLoading__Fv()
 // line 212, offset 0x800a4648
	/* begin block 1 */
		// Start line: 213
		// Start offset: 0x800A4648
	/* end block 1 */
	// End offset: 0x800A464C
	// End Line: 214

	/* begin block 2 */
		// Start line: 427
	/* end block 2 */
	// End Line: 428

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * IsGameLoading__Fv(void)

{
	return GameLoading;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCutScreen__Fi(int lev /*$a0*/)
 // line 224, offset 0x800a4654
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x800A4654
		// Variables:
	// 		unsigned char barr; // $fp
	// 		unsigned char barg; // $s6
	// 		unsigned short prog; // $s5
	// 		struct Dialog LBack; // stack offset -88
	// 		int tx; // $s0
	// 		struct POLY_G4 *G4; // stack offset -72
	// 		int BarOt; // $s3
	// 		int oldDot; // stack offset -64
	// 		int oldTot; // stack offset -56
	/* end block 1 */
	// End offset: 0x800A4A5C
	// End Line: 281

	/* begin block 2 */
		// Start line: 450
	/* end block 2 */
	// End Line: 451

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawCutScreen__Fi(int lev)

{
	int iVar1;
	char *Str;
	int iVar2;
	ulong *puVar3;
	ushort uVar4;
	short sVar5;
	uint uVar6;
	uchar uVar7;
	uchar uVar8;
	Dialog DStack88;
	POLY_G4 *local_48 [2];
	int local_40;
	int local_38;
	uint local_30;
	
	__6Dialog(&DStack88);
	iVar1 = GetOverlayOtBase__7CBlocks();
	Str = GetStr__Fi(STR_LOADING____602);
	iVar2 = GetStrWidth__5CFontPc(&MediumFont,Str);
	local_40 = SetOTpos__6Dialogi(&DStack88,100);
	local_38 = SetOTpos__5CFonti(&MediumFont,100);
	Str = GetStr__Fi(STR_LOADING____602);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,((int)((0x100U - iVar2) + (0x100U - iVar2 >> 0x1f)) >> 1) + 0x20,0xbc,Str,
						 JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
	SetBack__6Dialogi(&DStack88,0x94);
	SetBorder__6Dialogi(&DStack88,0x12);
	SetRGB__6DialogUcUcUc(&DStack88,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack88,0x20,200,0x100,8);
	uVar6 = (uint)(progress >> 1);
	uVar4 = progress;
	if (0xff < progress) {
		uVar4 = 0x100;
		uVar6 = 0x80;
	}
	PRIM_GetPrim__FPP7POLY_G4(local_48);
	*(undefined *)((int)&local_48[0]->tag + 3) = 8;
	local_48[0]->code = '8';
	local_48[0]->code = local_48[0]->code | 2;
	local_48[0]->code = local_48[0]->code & 0xfe;
	local_48[0]->r0 = '@';
	local_48[0]->g0 = '\0';
	local_30 = (0x80 - uVar6 & 0xff) >> 1;
	local_48[0]->b0 = '\0';
	local_48[0]->r1 = (uchar)local_30;
	uVar7 = (uchar)((uVar6 & 0xff) >> 1);
	local_48[0]->g1 = uVar7;
	local_48[0]->b1 = '\0';
	local_48[0]->r2 = -0x80;
	local_48[0]->g2 = '\0';
	sVar5 = uVar4 + 0x20;
	local_48[0]->b2 = '\0';
	uVar8 = (uchar)(0x80 - uVar6);
	local_48[0]->r3 = uVar8;
	local_48[0]->g3 = (uchar)uVar6;
	local_48[0]->b3 = '\0';
	puVar3 = ThisOt;
	local_48[0]->x0 = 0x20;
	puVar3 = puVar3 + iVar1 + 8;
	local_48[0]->y0 = 200;
	local_48[0]->x1 = sVar5;
	local_48[0]->y1 = 200;
	local_48[0]->x2 = 0x20;
	local_48[0]->y2 = 0xcc;
	local_48[0]->x3 = sVar5;
	local_48[0]->y3 = 0xcc;
	local_48[0]->tag = local_48[0]->tag & 0xff000000 | *puVar3 & 0xffffff;
	*puVar3 = *puVar3 & 0xff000000 | (uint)local_48[0] & 0xffffff;
	PRIM_GetPrim__FPP7POLY_G4(local_48);
	*(undefined *)((int)&local_48[0]->tag + 3) = 8;
	local_48[0]->code = '8';
	local_48[0]->code = local_48[0]->code | 2;
	local_48[0]->code = local_48[0]->code & 0xfe;
	local_48[0]->r0 = -0x80;
	local_48[0]->g0 = '\0';
	local_48[0]->b0 = '\0';
	local_48[0]->r1 = uVar8;
	local_48[0]->g1 = (uchar)uVar6;
	local_48[0]->b1 = '\0';
	local_48[0]->r2 = '@';
	local_48[0]->g2 = '\0';
	local_48[0]->b2 = '\0';
	local_48[0]->r3 = (uchar)local_30;
	local_48[0]->g3 = uVar7;
	local_48[0]->b3 = '\0';
	puVar3 = ThisOt;
	local_48[0]->x0 = 0x20;
	puVar3 = puVar3 + iVar1 + 8;
	local_48[0]->y0 = 0xcc;
	local_48[0]->x1 = sVar5;
	local_48[0]->y1 = 0xcc;
	local_48[0]->x2 = 0x20;
	local_48[0]->y2 = 0xd0;
	local_48[0]->x3 = sVar5;
	local_48[0]->y3 = 0xd0;
	local_48[0]->tag = local_48[0]->tag & 0xff000000 | *puVar3 & 0xffffff;
	*puVar3 = *puVar3 & 0xff000000 | (uint)local_48[0] & 0xffffff;
	SetOTpos__5CFonti(&MediumFont,local_38);
	SetOTpos__6Dialogi(&DStack88,local_40);
	___6Dialog(&DStack88,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutUpCutScreenTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 286, offset 0x800a4a90
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x800A4A90
		// Variables:
	// 		struct DEF_ARGS *Args; // $v0
	// 		int lev; // $s2
	// 		int tpx; // $s1
	/* end block 1 */
	// End offset: 0x800A4B3C
	// End Line: 304

	/* begin block 2 */
		// Start line: 611
	/* end block 2 */
	// End Line: 612

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PutUpCutScreenTSK__FP4TASK(TASK *T)

{
	int tpx;
	int lev;
	
	lev = *(int *)T->fActive;
	tpx = 0xc;
	if (9 < lev) {
		tpx = 0xb;
	}
	TSK_Sleep(1);
	Unload__7CScreen(&CutScr);
	Load__7CScreeniii(&CutScr,(uint)Level2CutScreen[lev],tpx,0);
	progress = 0;
	do {
		Display__7CScreeniiii(&CutScr,(uint)Level2CutScreen[lev],tpx,0,0);
		DrawCutScreen__Fi(lev);
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutUpCutScreen__Fi(int lev /*$s0*/)
 // line 315, offset 0x800a4b58
	/* begin block 1 */
		// Start line: 316
		// Start offset: 0x800A4B58
		// Variables:
	// 		struct DEF_ARGS *A; // $v0

		/* begin block 1.1 */
			// Start line: 321
			// Start offset: 0x800A4B74

			/* begin block 1.1.1 */
				// Start line: 326
				// Start offset: 0x800A4B8C

				/* begin block 1.1.1.1 */
					// Start line: 327
					// Start offset: 0x800A4B8C
					// Variables:
				// 		int f; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x800A4BEC
				// End Line: 334
			/* end block 1.1.1 */
			// End offset: 0x800A4BF8
			// End Line: 336
		/* end block 1.1 */
		// End offset: 0x800A4BF8
		// End Line: 336
	/* end block 1 */
	// End offset: 0x800A4C90
	// End Line: 360

	/* begin block 2 */
		// Start line: 672
	/* end block 2 */
	// End Line: 673

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PutUpCutScreen__Fi(int lev)

{
	void *pvVar1;
	int fadeval;
	int iVar2;
	
	if (CutScreenTSK == (TASK *)0x0) {
		GameLoading = &DAT_00000001;
		if (lev == 0xb) {
			ThisLev = lev;
			VID_SetDBuffer__Fb((void *)0x0);
			Load__7CScreeniii(&CutScr,(uint)USHORT_80110cbe,0xb,0);
			fadeval = 0xf;
			do {
				iVar2 = fadeval + -1;
				Display__7CScreeniiii(&CutScr,(uint)USHORT_80110cbe,0xb,0,fadeval);
				MY_TSK_Sleep__Fi(1);
				fadeval = iVar2;
			} while (-1 < iVar2);
			BootScreen = &DAT_00000001;
		}
		else {
			ThisLev = lev;
			stream_stop__Fv();
			music_stop__Fv();
			BootScreen = (void *)0x0;
			VID_SetDBuffer__Fb((void *)0x0);
			PA_SetPauseOk__Fb((void *)0x0);
			CutScreenTSK = TSK_AddTask((ulong)&DAT_00004003,PutUpCutScreenTSK__FP4TASK,0x800,0);
			if (CutScreenTSK == (TASK *)0x0) {
				DBG_Error((char *)0x0,"psxsrc/LOADING.CPP",0x15b);
			}
			*(int *)CutScreenTSK->fActive = lev;
			pvVar1 = PaletteFadeIn__Fi(8);
			if (pvVar1 != (void *)0x0) {
				while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
					TSK_Sleep(1);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TakeDownCutScreen__Fv()
 // line 374, offset 0x800a4ca8
	/* begin block 1 */
		// Start line: 375
		// Start offset: 0x800A4CA8
	/* end block 1 */
	// End offset: 0x800A4D3C
	// End Line: 397

	/* begin block 2 */
		// Start line: 795
	/* end block 2 */
	// End Line: 796

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TakeDownCutScreen__Fv(void)

{
	void *pvVar1;
	
	TitleFlag = (void *)(uint)(ThisLev == 10);
	if (CutScreenTSK != (TASK *)0x0) {
		pvVar1 = PaletteFadeOut__Fi(8);
		if (pvVar1 != (void *)0x0) {
			while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
				TSK_Sleep(1);
			}
		}
		GameLoading = (void *)0x0;
		TSK_Kill(CutScreenTSK);
		CutScreenTSK = (TASK *)0x0;
		if (ThisLev != 10) {
			Unload__7CScreen(&CutScr);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishBootProgress__Fv()
 // line 407, offset 0x800a4d4c
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x800A4D4C
	/* end block 1 */
	// End offset: 0x800A4DC4
	// End Line: 427

	/* begin block 2 */
		// Start line: 869
	/* end block 2 */
	// End Line: 870

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FinishBootProgress__Fv(void)

{
	void *pvVar1;
	
	if (BootScreen != (void *)0x0) {
		pvVar1 = PaletteFadeOut__Fi(8);
		if (pvVar1 != (void *)0x0) {
			while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
				Display__7CScreeniiii(&CutScr,(uint)USHORT_80110cbe,0xb,0,0);
				TSK_Sleep(1);
			}
		}
		Unload__7CScreen(&CutScr);
		GameLoading = (void *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishProgress__Fv()
 // line 438, offset 0x800a4dd8
	/* begin block 1 */
		// Start line: 439
		// Start offset: 0x800A4DD8
	/* end block 1 */
	// End offset: 0x800A4E28
	// End Line: 453

	/* begin block 2 */
		// Start line: 932
	/* end block 2 */
	// End Line: 933

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FinishProgress__Fv(void)

{
	if (BootScreen == (void *)0x0) {
		if (progress < 0x100) {
			do {
				UPDATEPROGRESS__Fi(-1);
			} while (progress < 0x100);
		}
	}
	else {
		FinishBootProgress__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.CutScr()
 // line 458, offset 0x800a4eb4
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x800A4EB4
	/* end block 1 */
	// End offset: 0x800A4ECC
	// End Line: 459

	/* begin block 2 */
		// Start line: 916
	/* end block 2 */
	// End Line: 917

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_CutScr(void)

{
	___7CScreen(&CutScr,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.CutScr()
 // line 458, offset 0x800a4edc
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x800A4EDC
	/* end block 1 */
	// End offset: 0x800A4EF4
	// End Line: 459

	/* begin block 2 */
		// Start line: 916
	/* end block 2 */
	// End Line: 917

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_CutScr(void)

{
	__7CScreen(&CutScr);
	return;
}





