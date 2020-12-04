#include "THISDUST.H"
#include "LOADING.H"


// decompiled code
// original method signature: 
// void /*$ra*/ UPDATEPROGRESS__Fi(int inc /*$a0*/)
 // line 138, offset 0x80099ce0
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80099CE0

		/* begin block 1.1 */
			// Start line: 139
			// Start offset: 0x80099CE0
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x80099D28
		// End Line: 144
	/* end block 1 */
	// End offset: 0x80099D28
	// End Line: 144

	/* begin block 2 */
		// Start line: 276
	/* end block 2 */
	// End Line: 277

void UPDATEPROGRESS__Fi(int inc)

{
	bool bVar1;
	int iVar2;
	
	if (0 < inc << 2) {
		iVar2 = 1;
		do {
			progress = progress + 1;
			TSK_Sleep(1);
			bVar1 = iVar2 < inc << 2;
			iVar2 = iVar2 + 1;
		} while (bVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsGameLoading__Fv()
 // line 154, offset 0x80099d40
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x80099D40
	/* end block 1 */
	// End offset: 0x80099D44
	// End Line: 156

	/* begin block 2 */
		// Start line: 312
	/* end block 2 */
	// End Line: 313

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * IsGameLoading__Fv(void)

{
	return GameLoading;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutUpCutScreenTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 165, offset 0x80099d4c
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x80099D4C
		// Variables:
	// 		struct DEF_ARGS *Args; // $v0
	// 		int lev; // stack offset -48
	// 		struct POLY_G4 *G4; // stack offset -56
	// 		unsigned char barr; // $s0
	// 		unsigned char barg; // $s5
	// 		unsigned short prog; // $s1
	/* end block 1 */
	// End offset: 0x8009A180
	// End Line: 236

	/* begin block 2 */
		// Start line: 333
	/* end block 2 */
	// End Line: 334

void PutUpCutScreenTSK__FP4TASK(TASK *T)

{
	ulong *puVar1;
	int iVar2;
	uint uVar3;
	ushort uVar4;
	short sVar5;
	uchar uVar6;
	uchar uVar7;
	uchar uVar8;
	POLY_G4 *local_38 [2];
	int local_30;
	
	local_30 = *(int *)T->fActive;
	progress = 0;
	TSK_Sleep(1);
	Load__7CScreeniii(&Scr,(uint)Level2CutScreen[local_30],0xc,0);
	do {
		Display__7CScreeniiii(&Scr,(uint)Level2CutScreen[local_30],0xc,0,0);
		iVar2 = GetStrWidth__5CFontPc(&MediumFont,CutString);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,((int)((0x100U - iVar2) + (0x100U - iVar2 >> 0x1f)) >> 1) + 0x20,0x40,
							 CutString,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
		if (local_30 != 0x14) {
			SetBack__6Dialogi(&LBack,0xc6);
			SetBorder__6Dialogi(&LBack,0x28);
			SetRGB__6DialogUcUcUc(&LBack,BORDERR,BORDERG,BORDERB);
			Back__6Dialogiiii(&LBack,0x20,0xc4,0x100,0xc);
			uVar3 = (uint)(progress >> 1);
			uVar4 = progress;
			if (0xff < progress) {
				uVar4 = 0x100;
				uVar3 = 0x80;
			}
			PRIM_GetPrim__FPP7POLY_G4(local_38);
			*(undefined *)((int)&local_38[0]->tag + 3) = 8;
			local_38[0]->code = '8';
			local_38[0]->code = local_38[0]->code | 2;
			local_38[0]->code = local_38[0]->code & 0xfe;
			local_38[0]->r0 = '\0';
			local_38[0]->g0 = '@';
			local_38[0]->b0 = '\0';
			uVar7 = (uchar)((uVar3 & 0xff) >> 1);
			local_38[0]->r1 = uVar7;
			uVar6 = (uchar)((0x80 - uVar3 & 0xff) >> 1);
			local_38[0]->g1 = uVar6;
			local_38[0]->b1 = '\0';
			local_38[0]->r2 = '\0';
			local_38[0]->g2 = -0x80;
			local_38[0]->b2 = '\0';
			local_38[0]->r3 = (uchar)uVar3;
			sVar5 = uVar4 + 0x20;
			uVar8 = (uchar)(0x80 - uVar3);
			local_38[0]->g3 = uVar8;
			local_38[0]->b3 = '\0';
			puVar1 = ThisOt;
			local_38[0]->x0 = 0x20;
			local_38[0]->y0 = 0xc4;
			local_38[0]->x1 = sVar5;
			local_38[0]->y1 = 0xc4;
			local_38[0]->x2 = 0x20;
			local_38[0]->y2 = 0xca;
			local_38[0]->x3 = sVar5;
			local_38[0]->y3 = 0xca;
			local_38[0]->tag = local_38[0]->tag & 0xff000000 | puVar1[0x100] & 0xffffff;
			puVar1[0x100] = puVar1[0x100] & 0xff000000 | (uint)local_38[0] & 0xffffff;
			PRIM_GetPrim__FPP7POLY_G4(local_38);
			*(undefined *)((int)&local_38[0]->tag + 3) = 8;
			local_38[0]->code = '8';
			local_38[0]->code = local_38[0]->code | 2;
			local_38[0]->code = local_38[0]->code & 0xfe;
			local_38[0]->r0 = '\0';
			local_38[0]->g0 = -0x80;
			local_38[0]->b0 = '\0';
			local_38[0]->r1 = (uchar)uVar3;
			local_38[0]->g1 = uVar8;
			local_38[0]->b1 = '\0';
			local_38[0]->r2 = '\0';
			local_38[0]->g2 = '@';
			local_38[0]->b2 = '\0';
			local_38[0]->r3 = uVar7;
			local_38[0]->g3 = uVar6;
			local_38[0]->b3 = '\0';
			puVar1 = ThisOt;
			local_38[0]->x0 = 0x20;
			local_38[0]->y0 = 0xca;
			local_38[0]->x1 = sVar5;
			local_38[0]->y1 = 0xca;
			local_38[0]->x2 = 0x20;
			local_38[0]->y2 = 0xd0;
			local_38[0]->x3 = sVar5;
			local_38[0]->y3 = 0xd0;
			local_38[0]->tag = local_38[0]->tag & 0xff000000 | puVar1[0x100] & 0xffffff;
			puVar1[0x100] = puVar1[0x100] & 0xff000000 | (uint)local_38[0] & 0xffffff;
		}
		TSK_Sleep(1);
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutUpCutScreen__Fi(int lev /*$s0*/)
 // line 247, offset 0x8009a1b4
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x8009A1B4
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	/* end block 1 */
	// End offset: 0x8009A250
	// End Line: 269

	/* begin block 2 */
		// Start line: 538
	/* end block 2 */
	// End Line: 539

void PutUpCutScreen__Fi(int lev)

{
	void *pvVar1;
	
	if (CutScreenTSK == (TASK *)0x0) {
		GameLoading = &DAT_00000001;
		PA_SetPauseOk__Fb((void *)0x0);
		CutScreenTSK = TSK_AddTask((ulong)&DAT_00004003,PutUpCutScreenTSK__FP4TASK,0x800,0);
		if (CutScreenTSK == (TASK *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/LOADING.CPP",0x100);
		}
		*(int *)CutScreenTSK->fActive = lev;
		pvVar1 = PaletteFadeIn__Fi(8);
		if (pvVar1 != (void *)0x0) {
			while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
				TSK_Sleep(1);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TakeDownCutScreen__Fv()
 // line 283, offset 0x8009a264
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x8009A264
	/* end block 1 */
	// End offset: 0x8009A2E0
	// End Line: 302

	/* begin block 2 */
		// Start line: 611
	/* end block 2 */
	// End Line: 612

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TakeDownCutScreen__Fv(void)

{
	void *pvVar1;
	
	if (CutScreenTSK != (TASK *)0x0) {
		pvVar1 = PaletteFadeOut__Fi(8);
		if (pvVar1 == (void *)0x0) {
			DBG_SendMessage("FADE OUT - MISSED %s %d");
		}
		else {
			while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
				TSK_Sleep(1);
			}
		}
		GameLoading = (void *)0x0;
		TSK_Kill(CutScreenTSK);
		CutScreenTSK = (TASK *)0x0;
		Unload__7CScreen(&Scr);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishProgress__Fv()
 // line 312, offset 0x8009a2f0
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x8009A2F0
	/* end block 1 */
	// End offset: 0x8009A330
	// End Line: 319

	/* begin block 2 */
		// Start line: 672
	/* end block 2 */
	// End Line: 673

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FinishProgress__Fv(void)

{
	if (progress < 0x100) {
		do {
			UPDATEPROGRESS__Fi(1);
			TSK_Sleep(1);
		} while (progress < 0x100);
	}
	PA_SetPauseOk__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.UPDATEPROGRESS__Fi()
 // line 322, offset 0x8009a3bc
	/* begin block 1 */
		// Start line: 323
		// Start offset: 0x8009A3BC
	/* end block 1 */
	// End offset: 0x8009A3E4
	// End Line: 323

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_UPDATEPROGRESS__Fi(void)

{
	___6Dialog(&LBack,2);
	___7CScreen(&Scr,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.UPDATEPROGRESS__Fi()
 // line 322, offset 0x8009a3f4
	/* begin block 1 */
		// Start line: 323
		// Start offset: 0x8009A3F4
	/* end block 1 */
	// End offset: 0x8009A41C
	// End Line: 323

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_UPDATEPROGRESS__Fi(void)

{
	__7CScreen(&Scr);
	__6Dialog(&LBack);
	return;
}





