#include "THISDUST.H"
#include "PRIMPOOL.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims /*$s4*/, int OtSize /*$s3*/, int Depth /*$s2*/, struct SCREEN_ENV *Scr /*$s0*/, unsigned long MemType /*stack 16*/)
 // line 143, offset 0x800837f4
	/* begin block 1 */
		// Start line: 144
		// Start offset: 0x800837F4

		/* begin block 1.1 */
			// Start line: 144
			// Start offset: 0x800837F4

			/* begin block 1.1.1 */
				// Start line: 154
				// Start offset: 0x80083868

				/* begin block 1.1.1.1 */
					// Start line: 155
					// Start offset: 0x80083868

					/* begin block 1.1.1.1.1 */
						// Start line: 157
						// Start offset: 0x8008387C
						// Variables:
					// 		int f; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800838E8
					// End Line: 177
				/* end block 1.1.1.1 */
				// End offset: 0x800838E8
				// End Line: 177
			/* end block 1.1.1 */
			// End offset: 0x800838E8
			// End Line: 177
		/* end block 1.1 */
		// End offset: 0x800838E8
		// End Line: 177
	/* end block 1 */
	// End offset: 0x800838EC
	// End Line: 181

	/* begin block 2 */
		// Start line: 286
	/* end block 2 */
	// End Line: 287

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
LAB_800838e8:
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
					if (uVar1 == '\0') goto LAB_800838e8;
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
 // line 187, offset 0x80083910
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x80083910
	/* end block 1 */
	// End offset: 0x800839C8
	// End Line: 206

	/* begin block 2 */
		// Start line: 384
	/* end block 2 */
	// End Line: 385

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
 // line 216, offset 0x800839ec
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x800839EC
		// Variables:
	// 		struct DR_MODE *DrArea; // $s0
	// 		struct RECT RealRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x80083AF8
	// End Line: 239

	/* begin block 2 */
		// Start line: 451
	/* end block 2 */
	// End Line: 452

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
	SetDrawArea(pDVar2,(RECT *)&local_18);
	puVar3 = ThisOt + Depth;
	pDVar2->tag = pDVar2->tag & 0xff000000 | *puVar3 & 0xffffff;
	*puVar3 = *puVar3 & 0xff000000 | (uint)pDVar2 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PRIM_GetCurrentScreen__Fv()
 // line 248, offset 0x80083b14
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x80083B14
	/* end block 1 */
	// End offset: 0x80083B18
	// End Line: 250

	/* begin block 2 */
		// Start line: 527
	/* end block 2 */
	// End Line: 528

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PRIM_GetCurrentScreen__Fv(void)

{
	return ScrNum;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_FullScreen__Fi(int Depth /*$a1*/)
 // line 257, offset 0x80083b20
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x80083B20
		// Variables:
	// 		struct RECT R; // stack offset -16
	/* end block 1 */
	// End offset: 0x80083B4C
	// End Line: 267

	/* begin block 2 */
		// Start line: 544
	/* end block 2 */
	// End Line: 545

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
 // line 279, offset 0x80083b5c
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x80083B5C
		// Variables:
	// 		struct PRIM_BUFFER *Pb; // $s1

		/* begin block 1.1 */
			// Start line: 302
			// Start offset: 0x80083C08

			/* begin block 1.1.1 */
				// Start line: 309
				// Start offset: 0x80083C50
			/* end block 1.1.1 */
			// End offset: 0x80083CBC
			// End Line: 319
		/* end block 1.1 */
		// End offset: 0x80083CBC
		// End Line: 319
	/* end block 1 */
	// End offset: 0x80083D74
	// End Line: 350

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_Flush__Fv(void)

{
	DRAWENV *pDVar1;
	uchar uVar2;
	undefined *puVar3;
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
		uVar2 = VID_NextSyncRoutHasExecuted__Fv();
	} while (uVar2 == '\0');
	Pb = PrimBuffers + (uint)BufferNum;
	Pb->Drawing = '\x01';
	ClearPbOnDrawSync(Pb);
	LastBuffer = BufferNum;
	if (CDWAIT == (void *)0x0) {
		puVar3 = (undefined *)VID_IsDbuffer__Fv();
		iVar4 = VID_GetXOff__Fv();
		(Screens->drawenv).ofs[0] = (short)iVar4;
		iVar4 = VID_GetYOff__Fv();
		(Screens->drawenv).ofs[1] = (short)iVar4;
		iVar4 = VID_GetXOff__Fv();
		Screens[1].drawenv.ofs[0] = (short)iVar4 + (-(ushort)(puVar3 == &DAT_00000001) & 0x140);
		iVar4 = VID_GetYOff__Fv();
		pDVar1 = &Screens->drawenv;
		Screens[1].drawenv.ofs[1] = (short)iVar4;
		SetDrawEnv(&pDVar1->dr_env);
		SetDrawEnv(&Screens[1].drawenv.dr_env,Screens + 1);
	}
	AddPrim(ThisOt,&Screens[(uint)ScrNum].drawenv.dr_env);
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
 // line 373, offset 0x80083d8c
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x80083D8C
	/* end block 1 */
	// End offset: 0x80083D90
	// End Line: 375

	/* begin block 2 */
		// Start line: 798
	/* end block 2 */
	// End Line: 799

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong * PRIM_GetCurrentOtList__Fv(void)

{
	return ThisOt;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPbOnDrawSync(struct PRIM_BUFFER *Pb /*$s0*/)
 // line 382, offset 0x80083d98
	/* begin block 1 */
		// Start line: 383
		// Start offset: 0x80083DA8
	/* end block 1 */
	// End offset: 0x80083DC0
	// End Line: 385

	/* begin block 2 */
		// Start line: 815
	/* end block 2 */
	// End Line: 816

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
 // line 388, offset 0x80083dd4
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x80083DD4
	/* end block 1 */
	// End offset: 0x80083DD8
	// End Line: 390

	/* begin block 2 */
		// Start line: 828
	/* end block 2 */
	// End Line: 829

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ClearedYet__Fv(void)

{
	return (uchar)(PbToClear == (PRIM_BUFFER *)0x0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrimDrawSycnCallBack()
 // line 397, offset 0x80083de0
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x80083DE0
	/* end block 1 */
	// End offset: 0x80083DF8
	// End Line: 402

	/* begin block 2 */
		// Start line: 846
	/* end block 2 */
	// End Line: 847

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
 // line 411, offset 0x80083e00
	/* begin block 1 */
		// Start line: 412
		// Start offset: 0x80083E00
	/* end block 1 */
	// End offset: 0x80083E14
	// End Line: 413

	/* begin block 2 */
		// Start line: 874
	/* end block 2 */
	// End Line: 875

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SendDispEnv__Fv(void)

{
	PutDispEnv(DispEnvToPut);
	return;
}



// decompiled code
// original method signature: 
// struct POLY_F4 * /*$ra*/ PRIM_GetNextPolyF4__Fv()
 // line 461, offset 0x80083e24
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x80083E24
		// Variables:
	// 		struct POLY_F4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x80083E34
	// End Line: 466

	/* begin block 2 */
		// Start line: 976
	/* end block 2 */
	// End Line: 977

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
 // line 469, offset 0x80083e3c
	/* begin block 1 */
		// Start line: 470
		// Start offset: 0x80083E3C
		// Variables:
	// 		struct POLY_FT4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x80083E4C
	// End Line: 474

	/* begin block 2 */
		// Start line: 992
	/* end block 2 */
	// End Line: 993

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
 // line 477, offset 0x80083e54
	/* begin block 1 */
		// Start line: 478
		// Start offset: 0x80083E54
		// Variables:
	// 		struct POLY_GT4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x80083E64
	// End Line: 482

	/* begin block 2 */
		// Start line: 1008
	/* end block 2 */
	// End Line: 1009

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
 // line 486, offset 0x80083e6c
	/* begin block 1 */
		// Start line: 487
		// Start offset: 0x80083E6C
		// Variables:
	// 		struct POLY_G4 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x80083E7C
	// End Line: 491

	/* begin block 2 */
		// Start line: 1026
	/* end block 2 */
	// End Line: 1027

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
 // line 494, offset 0x80083e84
	/* begin block 1 */
		// Start line: 495
		// Start offset: 0x80083E84
		// Variables:
	// 		struct POLY_F3 *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x80083E94
	// End Line: 499

	/* begin block 2 */
		// Start line: 1042
	/* end block 2 */
	// End Line: 1043

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
 // line 511, offset 0x80083e9c
	/* begin block 1 */
		// Start line: 512
		// Start offset: 0x80083E9C
		// Variables:
	// 		struct DR_MODE *RetPage; // $v0
	/* end block 1 */
	// End offset: 0x80083EAC
	// End Line: 516

	/* begin block 2 */
		// Start line: 1076
	/* end block 2 */
	// End Line: 1077

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
 // line 519, offset 0x80083eb4
	/* begin block 1 */
		// Start line: 520
		// Start offset: 0x80083EB4
	/* end block 1 */
	// End offset: 0x80083FB0
	// End Line: 549

	/* begin block 2 */
		// Start line: 1090
	/* end block 2 */
	// End Line: 1091

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
 // line 554, offset 0x80083fc8
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x80083FC8
	/* end block 1 */
	// End offset: 0x80084028
	// End Line: 566

	/* begin block 2 */
		// Start line: 1163
	/* end block 2 */
	// End Line: 1164

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





