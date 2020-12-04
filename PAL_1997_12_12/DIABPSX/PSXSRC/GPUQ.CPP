#include "THISDUST.H"
#include "GPUQ.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CheckMaxArgs__Fv()
 // line 76, offset 0x8007bb24
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x8007BB24
	/* end block 1 */
	// End offset: 0x8007BB48
	// End Line: 81

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckMaxArgs__Fv(void)

{
	if (ArgsSoFar == 0x1e) {
		DrawSync(0);
		GPUQ_FlushQ__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GPUQ_InitModule__Fv()
 // line 96, offset 0x8007bb58
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x8007BB58
	/* end block 1 */
	// End offset: 0x8007BB5C
	// End Line: 99

	/* begin block 2 */
		// Start line: 193
	/* end block 2 */
	// End Line: 194

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar GPUQ_InitModule__Fv(void)

{
	ArgsSoFar = 0;
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ GPUQ_FlushQ__Fv()
 // line 106, offset 0x8007bb64
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8007BB64
		// Variables:
	// 		int f; // $s2
	// 		struct LOAD_IMAGE_ARGS *Img; // $s0

		/* begin block 1.1 */
			// Start line: 107
			// Start offset: 0x8007BB64

			/* begin block 1.1.1 */
				// Start line: 111
				// Start offset: 0x8007BB84

				/* begin block 1.1.1.1 */
					// Start line: 113
					// Start offset: 0x8007BB98

					/* begin block 1.1.1.1.1 */
						// Start line: 118
						// Start offset: 0x8007BBD0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 119
							// Start offset: 0x8007BBD0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 122
								// Start offset: 0x8007BBE4
								// Variables:
							// 		void *ImgMem; // $s1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007BC20
							// End Line: 126
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007BC20
						// End Line: 126
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007BC20
					// End Line: 126
				/* end block 1.1.1.1 */
				// End offset: 0x8007BC20
				// End Line: 126
			/* end block 1.1.1 */
			// End offset: 0x8007BC20
			// End Line: 126
		/* end block 1.1 */
		// End offset: 0x8007BC28
		// End Line: 129

		/* begin block 1.2 */
			// Start line: 131
			// Start offset: 0x8007BC28

			/* begin block 1.2.1 */
				// Start line: 133
				// Start offset: 0x8007BC3C
				// Variables:
			// 		unsigned char GalRet; // $v0
			/* end block 1.2.1 */
			// End offset: 0x8007BCA8
			// End Line: 146
		/* end block 1.2 */
		// End offset: 0x8007BCB4
		// End Line: 148
	/* end block 1 */
	// End offset: 0x8007BCB8
	// End Line: 150

	/* begin block 2 */
		// Start line: 212
	/* end block 2 */
	// End Line: 213

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GPUQ_FlushQ__Fv(void)

{
	uchar uVar1;
	void *pvVar2;
	uint uVar3;
	int iVar4;
	undefined4 *puVar5;
	LOAD_IMAGE_ARGS *pLVar6;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	iVar8 = 0;
	while (iVar7 < ArgsSoFar) {
		puVar5 = (undefined4 *)((int)&AllArgs.Rect.x + iVar8);
		uVar3 = *(uint *)((int)&AllArgs.UseAddr + iVar8);
		if ((uVar3 & 4) == 0) {
			if ((uVar3 & 1) == 0) {
				pvVar2 = GAL_Lock(*(long *)((int)&AllArgs.IsMove + iVar8));
				if (pvVar2 == (void *)0x0) {
					DBG_Error((char *)0x0,"psxsrc/GPUQ.CPP",0x7c);
				}
				iVar4 = (int)pvVar2 + *(int *)((int)&AllArgs.DiscardAfterDump + iVar8);
			}
			else {
				iVar4 = *(int *)((int)&AllArgs.Offset + iVar8);
			}
			LoadImage((short *)puVar5,iVar4);
		}
		else {
			MoveImage(puVar5,(uint)*(ushort *)((int)&AllArgs.ImgHandle + iVar8),
								(uint)*(ushort *)((int)&AllArgs.ImgHandle + iVar8 + 2));
		}
		iVar8 = iVar8 + 0x1c;
		iVar7 = iVar7 + 1;
	}
	DrawSync(0);
	iVar7 = 0;
	pLVar6 = &AllArgs;
	while (iVar7 < ArgsSoFar) {
		if ((pLVar6->UseAddr & 5) == 0) {
			if ((pLVar6->UseAddr & 2) == 0) {
				uVar1 = GAL_Unlock(pLVar6->IsMove);
			}
			else {
				uVar1 = GAL_Free(pLVar6->IsMove);
			}
			if (uVar1 == '\0') {
				DBG_Error((char *)0x0,"psxsrc/GPUQ.CPP",0x91);
			}
		}
		pLVar6 = (LOAD_IMAGE_ARGS *)&pLVar6->Addr;
		iVar7 = iVar7 + 1;
	}
	ArgsSoFar = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GPUQ_LoadImage__FP4RECTli(struct RECT *Rect /*$s0*/, long ImgHandle /*$s2*/, int Offset /*$s1*/)
 // line 159, offset 0x8007bcd8
	/* begin block 1 */
		// Start line: 160
		// Start offset: 0x8007BCD8
		// Variables:
	// 		struct LOAD_IMAGE_ARGS *Args; // $a0
	/* end block 1 */
	// End offset: 0x8007BD70
	// End Line: 179

	/* begin block 2 */
		// Start line: 326
	/* end block 2 */
	// End Line: 327

void GPUQ_LoadImage__FP4RECTli(RECT *Rect,long ImgHandle,int Offset)

{
	short sVar1;
	int iVar2;
	int iVar3;
	
	CheckMaxArgs__Fv();
	iVar2 = ArgsSoFar;
	iVar3 = ArgsSoFar * 0x1c;
	(&AllArgs.DiscardAfterDump)[ArgsSoFar * 7] = Offset;
	((RECT *)((int)&AllArgs.Rect + iVar3))->x = Rect->x;
	*(short *)((int)&AllArgs.Rect + iVar3 + 2) = Rect->y;
	ArgsSoFar = ArgsSoFar + 1;
	*(short *)((int)&AllArgs.Rect + iVar3 + 4) = Rect->w;
	sVar1 = Rect->h;
	(&AllArgs.IsMove)[iVar2 * 7] = ImgHandle;
	(&AllArgs.UseAddr)[iVar2 * 7] = (&AllArgs.UseAddr)[iVar2 * 7] & 0xfffffff8;
	*(short *)((int)&AllArgs.Rect + iVar3 + 6) = sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GPUQ_DiscardHandle__Fl(long hnd /*$a0*/)
 // line 220, offset 0x8007bd8c
	/* begin block 1 */
		// Start line: 221
		// Start offset: 0x8007BD8C
		// Variables:
	// 		int f; // $a2
	/* end block 1 */
	// End offset: 0x8007BE1C
	// End Line: 239

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

void GPUQ_DiscardHandle__Fl(long hnd)

{
	uchar uVar1;
	uint *puVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (0 < ArgsSoFar) {
		puVar2 = &AllArgs.UseAddr;
		iVar4 = 0;
		do {
			if (((*puVar2 & 1) == 0) && (*(int *)((int)&AllArgs.IsMove + iVar4) == hnd)) {
				*puVar2 = *puVar2 | 2;
				return;
			}
			puVar2 = puVar2 + 7;
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x1c;
		} while (iVar3 < ArgsSoFar);
	}
	uVar1 = GAL_Free(hnd);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GPUQ.CPP",0xee);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GPUQ_LoadClutAddr__FiiiPv(int X /*$s0*/, int Y /*$s1*/, int Cols /*$s2*/, void *Addr /*$s3*/)
 // line 249, offset 0x8007be2c
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x8007BE2C
		// Variables:
	// 		struct LOAD_IMAGE_ARGS *Args; // $v1
	/* end block 1 */
	// End offset: 0x8007BEA8
	// End Line: 267

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

void GPUQ_LoadClutAddr__FiiiPv(int X,int Y,int Cols,void *Addr)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	
	CheckMaxArgs__Fv();
	iVar1 = ArgsSoFar;
	iVar3 = ArgsSoFar * 0x1c;
	*(undefined2 *)((int)&AllArgs.Rect + iVar3 + 6) = 1;
	uVar2 = (&AllArgs.UseAddr)[ArgsSoFar * 7];
	ArgsSoFar = ArgsSoFar + 1;
	((RECT *)((int)&AllArgs.Rect + iVar3))->x = (short)X;
	*(undefined2 *)((int)&AllArgs.Rect + iVar3 + 2) = (short)Y;
	*(undefined2 *)((int)&AllArgs.Rect + iVar3 + 4) = (short)Cols;
	*(void **)(&AllArgs.Offset + iVar1 * 7) = Addr;
	(&AllArgs.UseAddr)[iVar1 * 7] = uVar2 & 0xfffffffb | 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GPUQ_MoveImage__FP4RECTii(struct RECT *R /*$s0*/, int x /*$s1*/, int y /*$s2*/)
 // line 276, offset 0x8007bec8
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x8007BEC8
		// Variables:
	// 		struct LOAD_IMAGE_ARGS *Args; // $v0
	/* end block 1 */
	// End offset: 0x8007BF4C
	// End Line: 288

	/* begin block 2 */
		// Start line: 580
	/* end block 2 */
	// End Line: 581

void GPUQ_MoveImage__FP4RECTii(RECT *R,int x,int y)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	undefined4 uVar4;
	
	CheckMaxArgs__Fv();
	iVar1 = ArgsSoFar;
	iVar2 = ArgsSoFar * 0x1c;
	uVar4 = *(undefined4 *)&R->w;
	*(undefined4 *)((int)&AllArgs.Rect + iVar2) = *(undefined4 *)R;
	*(undefined4 *)((int)&AllArgs.Rect + iVar2 + 4) = uVar4;
	uVar3 = (&AllArgs.UseAddr)[iVar1 * 7];
	*(short *)(&AllArgs.ImgHandle + iVar1 * 7) = (short)x;
	*(undefined2 *)((int)&AllArgs.ImgHandle + iVar2 + 2) = (short)y;
	(&AllArgs.UseAddr)[iVar1 * 7] = uVar3 | 4;
	ArgsSoFar = ArgsSoFar + 1;
	return;
}





