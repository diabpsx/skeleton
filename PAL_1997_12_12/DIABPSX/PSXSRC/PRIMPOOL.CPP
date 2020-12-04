#include "THISDUST.H"
#include "PRIMPOOL.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims /*$s4*/, int OtSize /*$s3*/, int Depth /*$s2*/, struct SCREEN_ENV *Scr /*$s0*/, unsigned long MemType /*stack 16*/)
 // line 144, offset 0x8007bf68
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x8007BF68

		/* begin block 1.1 */
			// Start line: 145
			// Start offset: 0x8007BF68

			/* begin block 1.1.1 */
				// Start line: 155
				// Start offset: 0x8007BFDC

				/* begin block 1.1.1.1 */
					// Start line: 156
					// Start offset: 0x8007BFDC

					/* begin block 1.1.1.1.1 */
						// Start line: 158
						// Start offset: 0x8007BFF0
						// Variables:
					// 		int f; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007C05C
					// End Line: 178
				/* end block 1.1.1.1 */
				// End offset: 0x8007C05C
				// End Line: 178
			/* end block 1.1.1 */
			// End offset: 0x8007C05C
			// End Line: 178
		/* end block 1.1 */
		// End offset: 0x8007C05C
		// End Line: 178
	/* end block 1 */
	// End offset: 0x8007C060
	// End Line: 182

	/* begin block 2 */
		// Start line: 288
	/* end block 2 */
	// End Line: 289

uchar PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims,int OtSize,int Depth,SCREEN_ENV *Scr,ulong MemType)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	PROF_Open__Fv();
	WorkRamId = (uchar)MemType;
	BufferDepth = (uchar)Depth;
	Screens = Scr;
	hndPrimBuffers = GAL_Alloc(Depth * 0x1c,MemType,"PRIMPOOL");
	uVar1 = '\0';
	ThisOtSize = OtSize;
	if (hndPrimBuffers != -1) {
		ThisOtSize = OtSize;
		PrimBuffers = (PRIM_BUFFER *)GAL_Lock(hndPrimBuffers);
		if (PrimBuffers == (PRIM_BUFFER *)0x0) {
LAB_8007c05c:
			uVar1 = '\0';
		}
		else {
			iVar2 = 0;
			if (0 < Depth) {
				iVar3 = 0;
				do {
					uVar1 = InitPrimBuffer__FP11PRIM_BUFFERii
														((PRIM_BUFFER *)((int)&PrimBuffers->Prims + iVar3),Prims,OtSize);
					iVar2 = iVar2 + 1;
					if (uVar1 == '\0') goto LAB_8007c05c;
					iVar3 = iVar3 + 0x1c;
				} while (iVar2 < Depth);
			}
			PbToClear = (PRIM_BUFFER *)0x0;
			DrawSyncCallback(PrimDrawSycnCallBack);
			LastBuffer = (uchar)Depth + -1;
			BufferNum = '\0';
			ScrNum = '\0';
			PRIM_Flush__Fv();
			uVar1 = '\x01';
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr /*$s0*/, int Prims /*$a1*/, int OtSize /*$s1*/)
 // line 188, offset 0x8007c084
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x8007C084
	/* end block 1 */
	// End offset: 0x8007C13C
	// End Line: 207

	/* begin block 2 */
		// Start line: 386
	/* end block 2 */
	// End Line: 387

uchar InitPrimBuffer__FP11PRIM_BUFFERii(PRIM_BUFFER *Pr,int Prims,int OtSize)

{
	long Handle;
	POLY_FT4 *pPVar1;
	ulong *puVar2;
	
	Handle = GAL_Alloc(Prims * 0x28,(uint)WorkRamId,"PRIMPOOL");
	Pr->hndPrims = Handle;
	if (Handle != -1) {
		pPVar1 = (POLY_FT4 *)GAL_Lock(Handle);
		Pr->Prims = pPVar1;
		if (pPVar1 != (POLY_FT4 *)0x0) {
			Handle = GAL_Alloc(OtSize << 2,(uint)WorkRamId,"PRIMPOOL");
			Pr->hndOtList = Handle;
			if (Handle != -1) {
				puVar2 = (ulong *)GAL_Lock(Handle);
				Pr->OtList = puVar2;
				if (puVar2 != (ulong *)0x0) {
					Pr->OtSize = OtSize;
					Pr->Drawing = '\0';
					Pr->EndAddr = Pr->Prims + Prims;
					ClearOTag(Pr->OtList,Pr->OtSize);
					return '\x01';
				}
			}
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_Clip__FP4RECTi(struct RECT *R /*$a0*/, int Depth /*$s1*/)
 // line 217, offset 0x8007c160
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x8007C160
		// Variables:
	// 		struct DR_MODE *DrArea; // $s0
	// 		struct RECT RealRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x8007C26C
	// End Line: 240

	/* begin block 2 */
		// Start line: 453
	/* end block 2 */
	// End Line: 454

/* WARNING: Could not reconcile some variable overlaps */

void PRIM_Clip__FP4RECTi(RECT *R,int Depth)

{
	int iVar1;
	DR_MODE *pDVar2;
	ulong *puVar3;
	undefined4 local_18;
	undefined4 local_14;
	
	local_18 = *(uint *)R;
	local_14 = *(undefined4 *)&R->w;
	iVar1 = VID_GetXOff__Fv();
	local_18 = local_18 & 0xffff0000 | (uint)(ushort)((short)local_18 + (short)iVar1);
	iVar1 = VID_GetYOff__Fv();
	local_18 = local_18 & 0xffff | (uint)(ushort)(local_18._2_2_ + (short)iVar1) << 0x10;
	ClipRect__FRC4RECTR4RECT(&ScrRect,(RECT *)&local_18);
	local_18 = CONCAT22((short)(local_18 >> 0x10) + Screens[(uint)ScrNum].drawenv.clip.y,
											(short)local_18 + Screens[(uint)ScrNum].drawenv.clip.x);
	pDVar2 = PRIM_GetNextDrArea__Fv();
	SetDrawArea((int)pDVar2,(ushort *)(RECT *)&local_18);
	puVar3 = ThisOt + Depth;
	pDVar2->tag = pDVar2->tag & 0xff000000 | *puVar3 & 0xffffff;
	*puVar3 = *puVar3 & 0xff000000 | (uint)pDVar2 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PRIM_GetCurrentScreen__Fv()
 // line 249, offset 0x8007c288
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x8007C288
	/* end block 1 */
	// End offset: 0x8007C28C
	// End Line: 251

	/* begin block 2 */
		// Start line: 529
	/* end block 2 */
	// End Line: 530

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PRIM_GetCurrentScreen__Fv(void)

{
	return ScrNum;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_FullScreen__Fi(int Depth /*$a1*/)
 // line 258, offset 0x8007c294
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x8007C294
		// Variables:
	// 		struct RECT R; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007C2C0
	// End Line: 268

	/* begin block 2 */
		// Start line: 546
	/* end block 2 */
	// End Line: 547

void PRIM_FullScreen__Fi(int Depth)

{
	RECT local_10;
	
	local_10.w = 0x140;
	local_10.x = 0;
	local_10.y = 0;
	local_10.h = 0xf0;
	PRIM_Clip__FP4RECTi(&local_10,Depth);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_Flush__Fv()
 // line 280, offset 0x8007c2d0
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x8007C2D0
		// Variables:
	// 		struct PRIM_BUFFER *Pb; // $s0
	/* end block 1 */
	// End offset: 0x8007C4D0
	// End Line: 347

	/* begin block 2 */
		// Start line: 599
	/* end block 2 */
	// End Line: 600

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_Flush__Fv(void)

{
	DRAWENV *pDVar1;
	SCREEN_ENV *pSVar2;
	uchar uVar3;
	int iVar4;
	PRIM_BUFFER *Pb;
	
	PROF_CpuEnd__Fv();
	do {
	} while (PrimBuffers[(uint)LastBuffer].Drawing != '\0');
	PROF_DrawEnd__Fv();
	PROF_Draw__FPUl(ThisOt + ThisOtSize + -1);
	DispEnvToPut = &Screens[(uint)ScrNum].dispenv;
	VID_DoThisNextSync__FPFv_v(SendDispEnv__Fv);
	GPUQ_FlushQ__Fv();
	do {
		uVar3 = VID_NextSyncRoutHasExecuted__Fv();
	} while (uVar3 == '\0');
	Pb = PrimBuffers + (uint)BufferNum;
	Pb->Drawing = '\x01';
	ClearPbOnDrawSync(Pb);
	LastBuffer = BufferNum;
	if (CDWAIT == (void *)0x0) {
		iVar4 = VID_GetXOff__Fv();
		(Screens->drawenv).ofs[0] = (short)iVar4;
		iVar4 = VID_GetYOff__Fv();
		(Screens->drawenv).ofs[1] = (short)iVar4;
		iVar4 = VID_GetXOff__Fv();
		Screens[1].drawenv.ofs[0] = (short)iVar4 + 0x140;
		iVar4 = VID_GetYOff__Fv();
		pSVar2 = Screens;
		pDVar1 = &Screens->drawenv;
		Screens[1].drawenv.ofs[1] = (short)iVar4;
		SetDrawEnv((int)&pDVar1->dr_env,(ushort *)pSVar2);
		SetDrawEnv((int)&Screens[1].drawenv.dr_env,(ushort *)(Screens + 1));
	}
	AddPrim(ThisOt,(uint *)&Screens[(uint)ScrNum].drawenv.dr_env);
	DrawOTag(Pb->OtList);
	PROF_Restart__Fv();
	PROF_DrawStart__Fv();
	iVar4 = (int)((uint)BufferNum + 1) % (uint)BufferDepth;
	Pb = PrimBuffers + iVar4;
	BufferNum = (uchar)iVar4;
	do {
	} while (Pb->Drawing != '\0');
	ClearOTag(Pb->OtList,Pb->OtSize);
	ThisOt = Pb->OtList;
	ThisPrimAddr = Pb->Prims;
	AddrToAvoid = Pb->EndAddr;
	ScrNum = ScrNum ^ 1;
	PROF_CpuStart__Fv();
	return;
}



// decompiled code
// original method signature: 
// unsigned long * /*$ra*/ PRIM_GetCurrentOtList__Fv()
 // line 370, offset 0x8007c4e4
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x8007C4E4
	/* end block 1 */
	// End offset: 0x8007C4E8
	// End Line: 372

	/* begin block 2 */
		// Start line: 792
	/* end block 2 */
	// End Line: 793

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong * PRIM_GetCurrentOtList__Fv(void)

{
	return ThisOt;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPbOnDrawSync(struct PRIM_BUFFER *Pb /*$s0*/)
 // line 379, offset 0x8007c4f0
	/* begin block 1 */
		// Start line: 380
		// Start offset: 0x8007C500
	/* end block 1 */
	// End offset: 0x8007C518
	// End Line: 382

	/* begin block 2 */
		// Start line: 809
	/* end block 2 */
	// End Line: 810

void ClearPbOnDrawSync(PRIM_BUFFER *Pb)

{
	uchar uVar1;
	
	do {
		uVar1 = ClearedYet__Fv();
	} while (uVar1 == '\0');
	PbToClear = Pb;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ClearedYet__Fv()
 // line 385, offset 0x8007c52c
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x8007C52C
	/* end block 1 */
	// End offset: 0x8007C530
	// End Line: 387

	/* begin block 2 */
		// Start line: 822
	/* end block 2 */
	// End Line: 823

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ClearedYet__Fv(void)

{
	return (uchar)(PbToClear == (PRIM_BUFFER *)0x0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrimDrawSycnCallBack()
 // line 394, offset 0x8007c538
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8007C538
	/* end block 1 */
	// End offset: 0x8007C550
	// End Line: 399

	/* begin block 2 */
		// Start line: 840
	/* end block 2 */
	// End Line: 841

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrimDrawSycnCallBack(void)

{
	if (PbToClear != (PRIM_BUFFER *)0x0) {
		PbToClear->Drawing = '\0';
		PbToClear = (PRIM_BUFFER *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SendDispEnv__Fv()
 // line 408, offset 0x8007c558
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x8007C558
	/* end block 1 */
	// End offset: 0x8007C56C
	// End Line: 410

	/* begin block 2 */
		// Start line: 868
	/* end block 2 */
	// End Line: 869

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SendDispEnv__Fv(void)

{
	PutDispEnv((ushort *)DispEnvToPut);
	return;
}



// decompiled code
// original method signature: 
// struct POLY_F4 * /*$ra*/ PRIM_GetNextPolyF4__Fv()
 // line 458, offset 0x8007c57c
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x8007C57C
		// Variables:
	// 		struct POLY_F4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x8007C58C
	// End Line: 463

	/* begin block 2 */
		// Start line: 970
	/* end block 2 */
	// End Line: 971

/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_F4 * PRIM_GetNextPolyF4__Fv(void)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->x2;
	return (POLY_F4 *)pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PRIM_GetNextPolyFt4__Fv()
 // line 466, offset 0x8007c594
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x8007C594
		// Variables:
	// 		struct POLY_FT4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x8007C5A4
	// End Line: 471

	/* begin block 2 */
		// Start line: 986
	/* end block 2 */
	// End Line: 987

/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_FT4 * PRIM_GetNextPolyFt4__Fv(void)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_GT4 * /*$ra*/ PRIM_GetNextPolyGt4__Fv()
 // line 474, offset 0x8007c5ac
	/* begin block 1 */
		// Start line: 475
		// Start offset: 0x8007C5AC
		// Variables:
	// 		struct POLY_GT4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x8007C5BC
	// End Line: 479

	/* begin block 2 */
		// Start line: 1002
	/* end block 2 */
	// End Line: 1003

/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_GT4 * PRIM_GetNextPolyGt4__Fv(void)

{
	POLY_GT4 *pPVar1;
	
	pPVar1 = (POLY_GT4 *)ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr[1].x2;
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_G4 * /*$ra*/ PRIM_GetNextPolyG4__Fv()
 // line 483, offset 0x8007c5c4
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x8007C5C4
		// Variables:
	// 		struct POLY_G4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x8007C5D4
	// End Line: 488

	/* begin block 2 */
		// Start line: 1020
	/* end block 2 */
	// End Line: 1021

/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_G4 * PRIM_GetNextPolyG4__Fv(void)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->u3;
	return (POLY_G4 *)pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_F3 * /*$ra*/ PRIM_GetNextPolyF3__Fv()
 // line 491, offset 0x8007c5dc
	/* begin block 1 */
		// Start line: 492
		// Start offset: 0x8007C5DC
		// Variables:
	// 		struct POLY_F3 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x8007C5EC
	// End Line: 496

	/* begin block 2 */
		// Start line: 1036
	/* end block 2 */
	// End Line: 1037

/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_F3 * PRIM_GetNextPolyF3__Fv(void)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->u1;
	return (POLY_F3 *)pPVar1;
}



// decompiled code
// original method signature: 
// struct DR_MODE * /*$ra*/ PRIM_GetNextDrArea__Fv()
 // line 508, offset 0x8007c5f4
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x8007C5F4
		// Variables:
	// 		struct DR_MODE *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x8007C604
	// End Line: 513

	/* begin block 2 */
		// Start line: 1070
	/* end block 2 */
	// End Line: 1071

/* WARNING: Unknown calling convention yet parameter storage is locked */

DR_MODE * PRIM_GetNextDrArea__Fv(void)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->u0;
	return (DR_MODE *)pPVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect /*$s1*/, struct RECT *RectToClip /*$s0*/)
 // line 516, offset 0x8007c60c
	/* begin block 1 */
		// Start line: 517
		// Start offset: 0x8007C60C
	/* end block 1 */
	// End offset: 0x8007C708
	// End Line: 546

	/* begin block 2 */
		// Start line: 1084
	/* end block 2 */
	// End Line: 1085

void * ClipRect__FRC4RECTR4RECT(RECT *ClipRect,RECT *RectToClip)

{
	short sVar1;
	short sVar2;
	short sVar3;
	void *pvVar4;
	undefined *puVar5;
	
	pvVar4 = IsColiding__FRC4RECTT0(ClipRect,RectToClip);
	puVar5 = (undefined *)0x0;
	if (pvVar4 == (void *)0x0) {
		RectToClip->w = 0;
		RectToClip->h = 0;
		RectToClip->x = 0;
		RectToClip->y = 0;
	}
	else {
		sVar1 = RectToClip->x;
		sVar2 = ClipRect->x;
		if ((int)sVar1 < (int)sVar2) {
			RectToClip->x = sVar2;
			RectToClip->w = RectToClip->w - (sVar2 - sVar1);
		}
		sVar1 = RectToClip->y;
		sVar3 = ClipRect->y;
		if ((int)sVar1 < (int)sVar3) {
			RectToClip->y = sVar3;
			RectToClip->h = RectToClip->h - (sVar3 - sVar1);
		}
		if ((int)sVar2 + (int)ClipRect->w < (int)RectToClip->x + (int)RectToClip->w) {
			RectToClip->w = (sVar2 + ClipRect->w) - RectToClip->x;
		}
		if ((int)sVar3 + (int)ClipRect->h < (int)RectToClip->y + (int)RectToClip->h) {
			RectToClip->h = (sVar3 + ClipRect->h) - RectToClip->y;
		}
		puVar5 = &DAT_00000001;
	}
	return puVar5;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsColiding__FRC4RECTT0(struct RECT *ClipRect /*$a0*/, struct RECT *NewRect /*$a1*/)
 // line 551, offset 0x8007c720
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x8007C720
	/* end block 1 */
	// End offset: 0x8007C780
	// End Line: 563

	/* begin block 2 */
		// Start line: 1157
	/* end block 2 */
	// End Line: 1158

void * IsColiding__FRC4RECTT0(RECT *ClipRect,RECT *NewRect)

{
	void *pvVar1;
	
	pvVar1 = (void *)0x0;
	if (((int)ClipRect->x < (int)NewRect->x + (int)NewRect->w) &&
		 (pvVar1 = (void *)0x0, (int)NewRect->x < (int)ClipRect->x + (int)ClipRect->w)) {
		pvVar1 = (void *)0x0;
		if ((int)ClipRect->y < (int)NewRect->y + (int)NewRect->h) {
			pvVar1 = (void *)(uint)((int)NewRect->y < (int)ClipRect->y + (int)ClipRect->h);
		}
	}
	return pvVar1;
}





