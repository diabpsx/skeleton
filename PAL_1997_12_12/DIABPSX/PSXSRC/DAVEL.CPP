#include "THISDUST.H"
#include "DAVEL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DaveLDummyPoll__Fv()
 // line 83, offset 0x80094080
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80094080
	/* end block 1 */
	// End offset: 0x80094080
	// End Line: 84

	/* begin block 2 */
		// Start line: 167
	/* end block 2 */
	// End Line: 168

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveLDummyPoll__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveL__Fv()
 // line 87, offset 0x80094088
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x80094088
	/* end block 1 */
	// End offset: 0x800940A0
	// End Line: 90

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveL__Fv(void)

{
	DBG_SetPollRoutine(DaveLDummyPoll__Fv);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4 /*stack 0*/, int R /*stack -80*/, int G /*stack -72*/, int B /*stack -64*/)
 // line 100, offset 0x800940b0
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x800940B0
		// Variables:
	// 		unsigned char zV0; // $v1
	// 		unsigned char zV2; // $v0
	// 		unsigned char zH; // $v0
	// 		unsigned char dH; // $s6
	// 		unsigned char zV; // $s1
	// 		unsigned char *s; // $v1
	// 		unsigned char *d; // $a0
	// 		unsigned char *Ft4m; // $s3
	// 		short zX0; // $s7
	// 		short zX1; // $fp
	// 		static int count; // offset 0x8012acb8
	// 		int n; // $s5
	// 		int xoffset; // $s0
	// 		int yoffset; // $a0
	// 		short zY; // $s2
	/* end block 1 */
	// End offset: 0x8009435C
	// End Line: 161

	/* begin block 2 */
		// Start line: 200
	/* end block 2 */
	// End Line: 201

void DoReflection__FP8POLY_FT4iii(POLY_FT4 *Ft4,int R,int G,int B)

{
	short sVar1;
	short sVar2;
	short sVar3;
	ulong *puVar4;
	uint uVar5;
	POLY_FT4 *pPVar6;
	POLY_FT4 *pPVar7;
	short sVar8;
	short sVar9;
	uint uVar10;
	uchar uVar11;
	short sVar12;
	uint uVar13;
	int iVar14;
	uint uVar15;
	POLY_FT4 *local_res0;
	uchar local_50;
	uchar local_48;
	uchar local_40;
	
	iVar14 = 0;
	sVar1 = Ft4->x0;
	sVar2 = Ft4->x1;
	uVar5 = (uint)Ft4->v0;
	uVar13 = (uint)(ushort)Ft4->y0;
	uVar10 = (int)(DAT_8012acb8 & 4) >> 2;
	uVar15 = ((uVar5 - (uint)Ft4->v2 & 0xff) >> 3) - ((int)(DAT_8012acb8 & 8) >> 3);
	local_res0 = Ft4;
	do {
		PRIM_GetPrim__FPP8POLY_FT4((POLY_FT4 **)register0x00000074);
		pPVar6 = Ft4;
		pPVar7 = local_res0;
		if (Ft4 < Ft4 + 1) {
			do {
				puVar4 = &pPVar6->tag;
				pPVar6 = (POLY_FT4 *)((int)&pPVar6->tag + 1);
				*(undefined *)&pPVar7->tag = *(undefined *)puVar4;
				pPVar7 = (POLY_FT4 *)((int)&pPVar7->tag + 1);
			} while (pPVar6 < Ft4 + 1);
		}
		sVar3 = (short)uVar10;
		local_res0->v0 = (uchar)uVar5;
		local_res0->v1 = (uchar)uVar5;
		uVar5 = uVar5 - uVar15;
		uVar11 = (uchar)uVar5;
		local_res0->v2 = uVar11;
		uVar10 = uVar10 ^ 1;
		local_res0->y0 = (short)uVar13;
		local_res0->y1 = (short)uVar13;
		local_res0->x0 = sVar1 + sVar3;
		local_res0->x1 = sVar2 + sVar3;
		local_res0->v3 = uVar11;
		uVar13 = uVar13 + (uVar15 & 0xff);
		sVar9 = sVar1 + (short)uVar10;
		sVar12 = (short)uVar13;
		local_res0->y2 = sVar12;
		local_res0->y3 = sVar12;
		local_res0->x2 = sVar9;
		local_res0->code = local_res0->code | 2;
		sVar8 = sVar2 + (short)uVar10;
		local_res0->x3 = sVar8;
		local_50 = (uchar)R;
		local_res0->r0 = local_50;
		local_48 = (uchar)G;
		local_res0->g0 = local_48;
		local_40 = (uchar)B;
		local_res0->b0 = local_40;
		iVar14 = iVar14 + 1;
		local_res0->code = local_res0->code & 0xfe;
		puVar4 = ThisOt;
		local_res0->tag = local_res0->tag & 0xff000000 | ThisOt[2] & 0xffffff;
		puVar4[2] = puVar4[2] & 0xff000000 | (uint)local_res0 & 0xffffff;
	} while (iVar14 < 7);
	Ft4->v0 = uVar11;
	Ft4->v1 = uVar11;
	Ft4->y0 = sVar12;
	Ft4->y1 = sVar12;
	Ft4->x0 = sVar9;
	Ft4->x1 = sVar8;
	Ft4->x2 = sVar1 + sVar3;
	Ft4->code = Ft4->code | 2;
	Ft4->x3 = sVar2 + sVar3;
	Ft4->r0 = local_50;
	Ft4->g0 = local_48;
	Ft4->b0 = local_40;
	Ft4->code = Ft4->code & 0xfe;
	puVar4 = ThisOt;
	Ft4->tag = Ft4->tag & 0xff000000 | ThisOt[2] & 0xffffff;
	DAT_8012acb8 = DAT_8012acb8 + 1;
	puVar4[2] = puVar4[2] & 0xff000000 | (uint)Ft4 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mteleportfx__Fv()
 // line 164, offset 0x80094390
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x80094390
		// Variables:
	// 		int plr; // $s3
	// 		int br; // $s0

		/* begin block 1.1 */
			// Start line: 165
			// Start offset: 0x80094390

			/* begin block 1.1.1 */
				// Start line: 168
				// Start offset: 0x800943DC

				/* begin block 1.1.1.1 */
					// Start line: 170
					// Start offset: 0x800943E8

					/* begin block 1.1.1.1.1 */
						// Start line: 171
						// Start offset: 0x80094400
					/* end block 1.1.1.1.1 */
					// End offset: 0x80094628
					// End Line: 188
				/* end block 1.1.1.1 */
				// End offset: 0x80094628
				// End Line: 188
			/* end block 1.1.1 */
			// End offset: 0x80094628
			// End Line: 188
		/* end block 1.1 */
		// End offset: 0x80094638
		// End Line: 191
	/* end block 1 */
	// End offset: 0x80094638
	// End Line: 191

	/* begin block 2 */
		// Start line: 487
	/* end block 2 */
	// End Line: 488

/* WARNING: Unknown calling convention yet parameter storage is locked */

void mteleportfx__Fv(void)

{
	uchar SpinR;
	int iVar1;
	uint SpinB;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar4 < 2) {
		if (*(int *)((int)&SpellFXDat.teleflag + iVar2) != 0) {
			GetPlrPos__11SPELLFX_DATP12PlayerStruct
								((SPELLFX_DAT *)((int)&SpellFXDat.apocactive + iVar2),
								 (PlayerStruct *)((int)&plr[0]._pmode + iVar3));
			if (*(int *)((int)&SpellFXDat.spiny1 + iVar2) < *(int *)((int)&SpellFXDat.spiny2 + iVar2)) {
				*(int *)((int)&SpellFXDat.scale + iVar2) = *(int *)((int)&SpellFXDat.scale + iVar2) + 0x800;
			}
			if (0x10000 < *(int *)((int)&SpellFXDat.scale + iVar2)) {
				*(undefined4 *)((int)&SpellFXDat.scale + iVar2) = 0x10000;
			}
			if (*(int *)((int)&SpellFXDat.spiny2 + iVar2) < *(int *)((int)&SpellFXDat.spiny1 + iVar2)) {
				*(undefined4 *)((int)&SpellFXDat.teleflag + iVar2) = 2;
				*(int *)((int)&SpellFXDat.scale + iVar2) = *(int *)((int)&SpellFXDat.scale + iVar2) + -0x800
				;
			}
			if (*(int *)((int)&SpellFXDat.scale + iVar2) < 0) {
				*(undefined4 *)((int)&SpellFXDat.scale + iVar2) = 0;
				*(undefined4 *)((int)&SpellFXDat.teleflag + iVar2) = 0;
			}
			*(int *)((int)&SpellFXDat.spiny1 + iVar2) = *(int *)((int)&SpellFXDat.spiny1 + iVar2) + 1;
			*(int *)((int)&SpellFXDat.spiny2 + iVar2) = *(int *)((int)&SpellFXDat.spiny2 + iVar2) + -1;
			Teleportfx__Fiiiiiii
								(*(int *)((int)&SpellFXDat.scrnx + iVar2),*(int *)((int)&SpellFXDat.scrny + iVar2),8
								 ,0x10,*(int *)((int)&SpellFXDat.scale + iVar2),0,8);
			iVar1 = *(int *)((int)&SpellFXDat.scale + iVar2) * 0xa0;
			if (iVar1 < 0) {
				iVar1 = iVar1 + 0xffff;
			}
			SpinB = iVar1 >> 0x10 & 0xff;
			SpinR = (uchar)SpinB;
			DrawSpinner__FiiUcUcUciiibiT8
								(*(int *)((int)&SpellFXDat.scrnx + iVar2),*(int *)((int)&SpellFXDat.spiny1 + iVar2),
								 SpinR,SpinR,SpinB,0x20,0x40,0,(void *)0x0,0x100,&DAT_00000001);
			DrawSpinner__FiiUcUcUciiibiT8
								(*(int *)((int)&SpellFXDat.scrnx + iVar2),*(int *)((int)&SpellFXDat.spiny2 + iVar2),
								 SpinR,SpinR,SpinB,0x20,0x40,0,(void *)0x0,0x100,&DAT_00000001);
		}
		iVar3 = iVar3 + 0x23a8;
		iVar2 = iVar2 + 0x48;
		iVar4 = iVar4 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ invistimer__Fv()
 // line 195, offset 0x8009466c
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x8009466C
		// Variables:
	// 		int plr; // $a3
	/* end block 1 */
	// End offset: 0x80094730
	// End Line: 208

	/* begin block 2 */
		// Start line: 581
	/* end block 2 */
	// End Line: 582

/* WARNING: Unknown calling convention yet parameter storage is locked */

void invistimer__Fv(void)

{
	uint uVar1;
	uint *puVar2;
	uint *puVar3;
	SPELLFX_DAT *pSVar4;
	int iVar5;
	
	iVar5 = 0;
	pSVar4 = &SpellFXDat;
	puVar2 = (uint *)&SpellFXDat.phaseflag;
	puVar3 = (uint *)&SpellFXDat.inviscount;
	do {
		if (*puVar3 != 0) {
			pSVar4->inviscount = *puVar3 - 1;
			if (*puVar3 == 0) {
				*puVar2 = 0;
				return;
			}
			if ((int)*puVar3 < 300) {
				uVar1 = *puVar2;
				*puVar2 = uVar1 & 1;
				*puVar2 = uVar1 & 1 | *puVar3 & 4;
			}
			if ((int)*puVar3 < 0x3c) {
				uVar1 = *puVar2;
				*puVar2 = uVar1 & 1;
				*puVar2 = uVar1 & 1 | (*puVar3 & 2) << 1;
			}
		}
		puVar2 = puVar2 + 0x12;
		puVar3 = puVar3 + 0x12;
		iVar5 = iVar5 + 1;
		pSVar4 = pSVar4 + 1;
	} while (iVar5 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4 /*$a0*/, struct FRAME_HDR *Fr /*$a1*/)
 // line 212, offset 0x80094738
	/* begin block 1 */
		// Start line: 213
		// Start offset: 0x80094738
		// Variables:
	// 		int zU; // $a1
	// 		int zV; // $a3
	// 		int zW; // $v1
	// 		int zH; // $t0
	/* end block 1 */
	// End offset: 0x800947B8
	// End Line: 248

	/* begin block 2 */
		// Start line: 617
	/* end block 2 */
	// End Line: 618

void setUVparams__FP8POLY_FT4P9FRAME_HDR(POLY_FT4 *Ft4,FRAME_HDR *Fr)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	uchar uVar6;
	
	uVar1 = *(uchar *)((int)&Fr->FrOffset + 1);
	uVar2 = *(uchar *)&Fr->FrOffset;
	cVar3 = (char)*(undefined2 *)((int)&Fr->X + 2);
	cVar4 = (char)Fr->Y;
	if ((Fr->Y & 0x200U) == 0) {
		uVar6 = uVar2 + cVar3 + -1;
		uVar5 = uVar1 + cVar4 + -1;
		Ft4->u0 = uVar2;
		Ft4->v0 = uVar1;
		Ft4->u1 = uVar6;
		Ft4->v1 = uVar1;
		Ft4->u2 = uVar2;
		Ft4->v2 = uVar5;
	}
	else {
		uVar5 = uVar1 + cVar3 + -2;
		uVar6 = uVar2 + cVar4 + -1;
		Ft4->v0 = uVar5;
		Ft4->v2 = uVar5;
		uVar5 = uVar1 + -1;
		Ft4->u0 = uVar2;
		Ft4->u2 = uVar6;
		Ft4->u1 = uVar2;
		Ft4->v1 = uVar5;
	}
	Ft4->u3 = uVar6;
	Ft4->v3 = uVar5;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ drawparticle__Fiiiiii(int x /*$s4*/, int y /*$s6*/, int scale /*$s0*/, int anim /*$a3*/, int colour /*stack 16*/, int OtPos /*stack 20*/)
 // line 253, offset 0x800947c0
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x800947C0
		// Variables:
	// 		struct TextDat *Dat; // $fp
	// 		struct POLY_FT4 *Ft4; // stack offset -56
	// 		struct FRAME_HDR *Fr; // $s7
	// 		unsigned char SpR; // $s0
	// 		unsigned char SpG; // $s1
	// 		unsigned char SpB; // $s2
	// 		int w; // $s3
	// 		int h; // $s5
	// 		int f; // stack offset -48
	/* end block 1 */
	// End offset: 0x8009497C
	// End Line: 285

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

void drawparticle__Fiiiiii(int x,int y,int scale,int anim,int colour,int OtPos)

{
	short sVar1;
	TextDat *this;
	FRAME_HDR *Fr;
	short sVar2;
	ulong *puVar3;
	short sVar4;
	uint uVar5;
	uint uVar6;
	POLY_FT4 *local_38 [2];
	int local_30;
	
	local_30 = anim + 0x102;
	this = GM_UseTexData__Fi(0);
	Fr = GetFr__7TextDati(this,local_30);
	uVar5 = ((uint)*(ushort *)((int)&Fr->X + 2) & 0x1ff) * scale;
	if ((int)uVar5 < 0) {
		uVar5 = uVar5 + 0x7fff;
	}
	uVar6 = (Fr->Y & 0x1ffU) * scale;
	if ((int)uVar6 < 0) {
		uVar6 = uVar6 + 0x7fff;
	}
	x = x - ((int)(((int)uVar5 >> 0xf) + (uVar5 >> 0x1f)) >> 1);
	y = y - ((int)(((int)uVar6 >> 0xf) + (uVar6 >> 0x1f)) >> 1);
	PRIM_GetPrim__FPP8POLY_FT4(local_38);
	PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_38[0],local_30,x,y,0,0);
	sVar1 = (short)x;
	sVar4 = sVar1 + (short)((int)uVar5 >> 0xf);
	local_38[0]->x0 = sVar1;
	sVar2 = (short)y;
	local_38[0]->y0 = sVar2;
	local_38[0]->x1 = sVar4;
	local_38[0]->y1 = sVar2;
	local_38[0]->x2 = sVar1;
	local_38[0]->r0 = (uchar)((uint)colour >> 0x10);
	sVar2 = sVar2 + (short)((int)uVar6 >> 0xf);
	local_38[0]->y2 = sVar2;
	local_38[0]->x3 = sVar4;
	local_38[0]->y3 = sVar2;
	local_38[0]->g0 = (uchar)((uint)colour >> 8);
	local_38[0]->b0 = (uchar)colour;
	local_38[0]->code = local_38[0]->code & 0xfd;
	local_38[0]->code = local_38[0]->code & 0xfe;
	setUVparams__FP8POLY_FT4P9FRAME_HDR(local_38[0],Fr);
	puVar3 = ThisOt + OtPos;
	local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar3 & 0xffffff;
	*puVar3 = *puVar3 & 0xff000000 | (uint)local_38[0] & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ drawpolyF4__Fiiiiii(int x /*$s4*/, int y /*$s1*/, int w /*$s3*/, int h /*$s6*/, int colour /*stack 16*/, int OtPos /*stack 20*/)
 // line 289, offset 0x800949b0
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x800949B0
		// Variables:
	// 		struct POLY_F4 *F4; // stack offset -48
	// 		unsigned char SpR; // $s5
	// 		unsigned char SpG; // $s7
	// 		unsigned char SpB; // $s2
	/* end block 1 */
	// End offset: 0x80094AB4
	// End Line: 303

	/* begin block 2 */
		// Start line: 805
	/* end block 2 */
	// End Line: 806

void drawpolyF4__Fiiiiii(int x,int y,int w,int h,int colour,int OtPos)

{
	short sVar1;
	ulong *puVar2;
	short sVar3;
	short sVar4;
	POLY_F4 *local_30 [2];
	
	PRIM_GetPrim__FPP7POLY_F4(local_30);
	sVar1 = (short)x;
	sVar4 = sVar1 + (short)w;
	*(undefined *)((int)&local_30[0]->tag + 3) = 5;
	local_30[0]->code = '(';
	local_30[0]->x0 = sVar1;
	sVar3 = (short)y;
	local_30[0]->y0 = sVar3;
	local_30[0]->x1 = sVar4;
	local_30[0]->y1 = sVar3;
	local_30[0]->x2 = sVar1;
	local_30[0]->r0 = (uchar)((uint)colour >> 0x10);
	sVar3 = sVar3 + (short)h;
	local_30[0]->y2 = sVar3;
	local_30[0]->x3 = sVar4;
	local_30[0]->y3 = sVar3;
	local_30[0]->g0 = (uchar)((uint)colour >> 8);
	local_30[0]->b0 = (uchar)colour;
	local_30[0]->code = local_30[0]->code | 2;
	puVar2 = ThisOt + OtPos;
	local_30[0]->tag = local_30[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
	*puVar2 = *puVar2 & 0xff000000 | (uint)local_30[0] & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ drawpolyG4__Fiiiiiiii(int x /*$s5*/, int y /*$s0*/, int w /*$s3*/, int h1 /*$s4*/, int h2 /*stack 16*/, int colour0 /*stack 20*/, int colour1 /*stack 24*/, int OtPos /*stack 28*/)
 // line 307, offset 0x80094ae4
	/* begin block 1 */
		// Start line: 308
		// Start offset: 0x80094AE4
		// Variables:
	// 		struct POLY_G4 *G4; // stack offset -64
	// 		unsigned char SpR0; // $fp
	// 		unsigned char SpG0; // $s7
	// 		unsigned char SpB0; // $s2
	// 		unsigned char SpR1; // stack offset -56
	// 		unsigned char SpG1; // stack offset -48
	// 		unsigned char SpB1; // $s6
	/* end block 1 */
	// End offset: 0x80094C80
	// End Line: 329

	/* begin block 2 */
		// Start line: 858
	/* end block 2 */
	// End Line: 859

void drawpolyG4__Fiiiiiiii(int x,int y,int w,int h1,int h2,int colour0,int colour1,int OtPos)

{
	short sVar1;
	short sVar2;
	ulong *puVar3;
	short sVar4;
	uchar uVar5;
	uchar uVar6;
	POLY_G4 *local_40 [2];
	uchar local_38;
	uchar local_30;
	
	local_38 = (uchar)((uint)colour1 >> 0x10);
	local_30 = (uchar)((uint)colour1 >> 8);
	PRIM_GetPrim__FPP7POLY_G4(local_40);
	sVar1 = (short)x;
	sVar4 = sVar1 + (short)w;
	*(undefined *)((int)&local_40[0]->tag + 3) = 8;
	local_40[0]->code = '8';
	sVar2 = (short)y;
	local_40[0]->x0 = sVar1;
	local_40[0]->y0 = sVar2;
	local_40[0]->x1 = sVar4;
	local_40[0]->y1 = sVar2;
	local_40[0]->x2 = sVar1;
	local_40[0]->y2 = sVar2 + (short)h1;
	local_40[0]->x3 = sVar4;
	uVar6 = (uchar)((uint)colour0 >> 0x10);
	local_40[0]->r0 = uVar6;
	local_40[0]->y3 = sVar2 + (short)h2;
	uVar5 = (uchar)((uint)colour0 >> 8);
	local_40[0]->g0 = uVar5;
	local_40[0]->b0 = (uchar)colour0;
	local_40[0]->r2 = uVar6;
	local_40[0]->g2 = uVar5;
	local_40[0]->b2 = (uchar)colour0;
	local_40[0]->r1 = local_38;
	local_40[0]->g1 = local_30;
	local_40[0]->b1 = (uchar)colour1;
	local_40[0]->r3 = local_38;
	local_40[0]->g3 = local_30;
	local_40[0]->b3 = (uchar)colour1;
	local_40[0]->code = local_40[0]->code | 2;
	puVar3 = ThisOt + OtPos;
	local_40[0]->tag = local_40[0]->tag & 0xff000000 | *puVar3 & 0xffffff;
	*puVar3 = *puVar3 & 0xff000000 | (uint)local_40[0] & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ particlejump__Fv()
 // line 333, offset 0x80094cb4
	/* begin block 1 */
		// Start line: 334
		// Start offset: 0x80094CB4
		// Variables:
	// 		int n; // $s7
	// 		int partactive; // $fp
	/* end block 1 */
	// End offset: 0x80094E20
	// End Line: 357

	/* begin block 2 */
		// Start line: 932
	/* end block 2 */
	// End Line: 933

/* WARNING: Unknown calling convention yet parameter storage is locked */

void particlejump__Fv(void)

{
	short sVar1;
	bool bVar2;
	int local_30;
	int y;
	int scale;
	uint anim;
	uint *puVar3;
	Particle *pPVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int *piVar8;
	int *piVar9;
	int iVar10;
	int local_2c;
	
	bVar2 = false;
	iVar10 = 0;
	puVar3 = (uint *)&PartArray.partanim;
	piVar9 = &PartArray.scale;
	pPVar4 = &PartArray;
	piVar7 = &PartArray.party;
	piVar6 = &PartArray.jumpcount;
	piVar8 = &PartArray.jumpflag;
	iVar5 = 0;
	do {
		local_30 = partcolour;
		if (*piVar8 != 0) {
			if (*(int *)((int)&PartArray.jumpmax + iVar5) < *piVar6) {
				*piVar8 = 0;
				sVar1 = *(short *)((int)&pPVar4->partx + 2);
				y = *piVar7;
				scale = *piVar9;
				anim = *puVar3;
				local_2c = partOtPos;
			}
			else {
				pPVar4->partx = pPVar4->partx + *(int *)((int)&PartArray.dx + iVar5);
				*(int *)((int)&PartArray.partanim + iVar5) = *puVar3 + 1;
				*puVar3 = *puVar3 & 7;
				local_2c = partOtPos;
				local_30 = *piVar6;
				*piVar6 = local_30 + 2;
				y = *piVar7 + (local_30 + 2 >> 2);
				*piVar7 = y;
				sVar1 = *(short *)((int)&pPVar4->partx + 2);
				scale = *piVar9;
				anim = *puVar3;
				bVar2 = true;
				local_30 = partcolour;
			}
			drawparticle__Fiiiiii((int)sVar1,y,scale,anim,local_30,local_2c);
		}
		puVar3 = puVar3 + 9;
		piVar9 = piVar9 + 9;
		pPVar4 = pPVar4 + 1;
		piVar7 = piVar7 + 9;
		piVar6 = piVar6 + 9;
		piVar8 = piVar8 + 9;
		iVar10 = iVar10 + 1;
		iVar5 = iVar5 + 0x24;
	} while (iVar10 < 0x10);
	if (!bVar2) {
		partjumpflag = 0;
		partglowflag = 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ particleglow__Fv()
 // line 360, offset 0x80094e54
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x80094E54
		// Variables:
	// 		int n; // $s1
	/* end block 1 */
	// End offset: 0x80094F20
	// End Line: 371

	/* begin block 2 */
		// Start line: 1024
	/* end block 2 */
	// End Line: 1025

/* WARNING: Unknown calling convention yet parameter storage is locked */

void particleglow__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	do {
		drawparticle__Fiiiiii
							((int)*(short *)((int)&PartArray.partx + iVar1 + 2),
							 *(int *)((int)&PartArray.party + iVar1),*(int *)((int)&PartArray.scale + iVar1),
							 *(int *)((int)&PartArray.partanim + iVar1),partcolour,partOtPos);
		if ((partcolour & 0xff0000U) != 0) {
			partcolour = partcolour + -0x10000;
		}
		if ((partcolour & 0xff00U) != 0) {
			partcolour = partcolour + -0x100;
		}
		if ((partcolour & 0xffU) != 0) {
			partcolour = partcolour + -1;
		}
		if (partcolour == 0) {
			partglowflag = 0;
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x24;
	} while (iVar2 < 0x10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ doparticlejump__Fv()
 // line 375, offset 0x80094f38
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x80094F38
	/* end block 1 */
	// End offset: 0x80094F68
	// End Line: 378

	/* begin block 2 */
		// Start line: 1061
	/* end block 2 */
	// End Line: 1062

/* WARNING: Unknown calling convention yet parameter storage is locked */

void doparticlejump__Fv(void)

{
	if (partjumpflag != 0) {
		particlejump__Fv();
	}
	if (partglowflag != 0) {
		particleglow__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPartJump__Fiiiiii(int sx /*$s4*/, int sy /*$s5*/, int height /*$s2*/, int scale /*$s6*/, int colour /*stack 16*/, int OtPos /*stack 20*/)
 // line 381, offset 0x80094f78
	/* begin block 1 */
		// Start line: 382
		// Start offset: 0x80094F78
		// Variables:
	// 		int n; // $s1
	/* end block 1 */
	// End offset: 0x800950B4
	// End Line: 401

	/* begin block 2 */
		// Start line: 1073
	/* end block 2 */
	// End Line: 1074

void StartPartJump__Fiiiiii(int sx,int sy,int height,int scale,int colour,int OtPos)

{
	ulong uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	
	if ((partjumpflag | partglowflag) == 0) {
		uVar4 = 0;
		iVar3 = 0;
		partjumpflag = 1;
		partcolour = colour;
		partOtPos = OtPos;
		do {
			*(int *)((int)&PartArray.partx + iVar3) = sx << 0x10;
			*(int *)((int)&PartArray.party + iVar3) = sy;
			*(undefined4 *)((int)&PartArray.jumpflag + iVar3) = 1;
			uVar1 = GU_GetRnd();
			*(int *)((int)&PartArray.jumpcount + iVar3) = -(JumpArray[uVar1 & 7] + height);
			uVar1 = GU_GetRnd();
			iVar2 = JumpArray[uVar1 & 7];
			*(uint *)((int)&PartArray.partanim + iVar3) = uVar4 & 7;
			*(int *)((int)&PartArray.jumpmax + iVar3) = iVar2 + height;
			uVar4 = uVar4 + 1;
			uVar1 = GU_GetRnd();
			*(int *)((int)&PartArray.dx + iVar3) = (uVar1 & 0x3f) * 0x1000 + -0x20000;
			*(int *)((int)&PartArray.scale + iVar3) = scale;
			iVar3 = iVar3 + 0x24;
		} while ((int)uVar4 < 0x10);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ doparticlechain__Fiiiiiiiiiiii(int sx /*$s0*/, int sy /*$s1*/, int dx /*$a2*/, int dy /*$a3*/, int count /*stack 16*/, int scale /*stack 20*/, int scaledec /*stack 24*/, int semitrans /*stack 28*/, int randomize /*stack 32*/, int colour /*stack 36*/, int OtPos /*stack 40*/, int source /*stack 44*/)
 // line 405, offset 0x800950e0
	/* begin block 1 */
		// Start line: 406
		// Start offset: 0x800950E0
		// Variables:
	// 		struct TextDat *Dat; // stack offset -112
	// 		struct POLY_FT4 *Ft4; // stack offset -120
	// 		struct FRAME_HDR *Fr; // $fp
	// 		unsigned char SpR; // $s5
	// 		unsigned char SpG; // $s7
	// 		unsigned char SpB; // $s6
	// 		int x; // $s1
	// 		int y; // $s2
	// 		int br; // $v1
	// 		int w; // $s0
	// 		int h; // $s3
	// 		int f; // $s4
	// 		int c; // stack offset -104
	// 		int t; // stack offset -96
	// 		int rand; // $v0
	// 		int xoffs; // $v1
	// 		int yoffs; // $v0
	// 		int xf; // stack offset -88
	// 		int yf; // stack offset -80
	// 		int dxf; // stack offset -72
	// 		int dyf; // stack offset -64
	// 		int dxabs; // $a1
	// 		int dyabs; // $a0
	// 		int divisor; // $a0
	// 		int *partexecnum; // $t0
	/* end block 1 */
	// End offset: 0x800954A4
	// End Line: 488

	/* begin block 2 */
		// Start line: 1131
	/* end block 2 */
	// End Line: 1132

void doparticlechain__Fiiiiiiiiiiii
							 (int sx,int sy,int dx,int dy,int count,int scale,int scaledec,int semitrans,
							 int randomize,int colour,int OtPos,int source)

{
	short sVar1;
	uint uVar2;
	uint uVar3;
	int X;
	int FrNum;
	ulong uVar4;
	FRAME_HDR *Fr;
	short sVar5;
	ulong *puVar6;
	short sVar7;
	int Y;
	int *piVar8;
	uchar uVar9;
	uchar uVar10;
	POLY_FT4 *local_78 [2];
	TextDat *local_70;
	int local_68;
	uint local_60;
	int local_58;
	int local_50;
	int local_48;
	int local_40;
	uint local_38;
	
	uVar2 = dx >> 0x10;
	if ((int)uVar2 < 0) {
		uVar2 = -uVar2;
	}
	uVar3 = dy >> 0x10;
	if ((int)uVar3 < 0) {
		uVar3 = -uVar3;
	}
	piVar8 = &p2partexecnum;
	if (source == 0) {
		piVar8 = &p1partexecnum;
	}
	if ((int)uVar2 < (int)uVar3) {
		X = uVar3 + (uVar3 >> 0x1f);
	}
	else {
		X = uVar2 + (uVar2 >> 0x1f);
	}
	X = X >> 1;
	if (X == 0) {
		X = 1;
	}
	local_48 = dx / X;
	local_40 = dy / X;
	Y = *piVar8;
	if (Y < count) {
		count = Y;
	}
	FrNum = Y + (X >> 1);
	if (X >> 1 == 0) {
		FrNum = Y + 1;
	}
	*piVar8 = FrNum;
	uVar4 = VID_GetTick__Fv();
	local_60 = uVar4 >> 2 & 7;
	if (randomize != 0) {
		uVar4 = GU_GetRnd();
		sx = sx + (uVar4 & 3);
		sy = sy + ((int)uVar4 >> 0x10 & 3U);
	}
	local_58 = sx << 0x10;
	local_50 = sy << 0x10;
	local_68 = 0;
	if (0 < count) {
		local_38 = 0xffffff;
		do {
			FrNum = (local_60 - local_68 & 7) + 0x102;
			local_70 = GM_UseTexData__Fi(0);
			Fr = GetFr__7TextDati(local_70,FrNum);
			uVar2 = ((uint)*(ushort *)((int)&Fr->X + 2) & 0x1ff) * scale;
			Y = local_50 >> 0x10;
			X = local_58 >> 0x10;
			local_58 = local_58 - local_48;
			local_50 = local_50 - local_40;
			if ((int)uVar2 < 0) {
				uVar2 = uVar2 + 0x7fff;
			}
			uVar3 = (Fr->Y & 0x1ffU) * scale;
			if ((int)uVar3 < 0) {
				uVar3 = uVar3 + 0x7fff;
			}
			X = X - ((int)(((int)uVar2 >> 0xf) + (uVar2 >> 0x1f)) >> 1);
			Y = Y - ((int)(((int)uVar3 >> 0xf) + (uVar3 >> 0x1f)) >> 1);
			if (semitrans == 0) {
				colour._0_1_ = (uchar)(scale >> 9);
			}
			else {
				colour._0_1_ = (uchar)(scale >> 10);
			}
			uVar9 = (uchar)((uint)colour >> 0x10);
			if ((colour & 0xff0000U) == 0) {
				uVar9 = (uchar)colour;
			}
			uVar10 = (uchar)((uint)colour >> 8);
			if ((colour & 0xff00U) == 0) {
				uVar10 = (uchar)colour;
			}
			if ((colour & 0xffU) != 0) {
			}
			PRIM_GetPrim__FPP8POLY_FT4(local_78);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(local_70,local_78[0],FrNum,X,Y,0,0);
			if (semitrans != 0) {
				local_78[0]->tpage = local_78[0]->tpage | 0x20;
			}
			sVar1 = (short)X;
			sVar7 = sVar1 + (short)((int)uVar2 >> 0xf);
			local_78[0]->x0 = sVar1;
			sVar5 = (short)Y;
			local_78[0]->y0 = sVar5;
			local_78[0]->x1 = sVar7;
			local_78[0]->y1 = sVar5;
			local_78[0]->x2 = sVar1;
			local_78[0]->r0 = uVar9;
			sVar5 = sVar5 + (short)((int)uVar3 >> 0xf);
			local_78[0]->y2 = sVar5;
			local_78[0]->x3 = sVar7;
			local_78[0]->y3 = sVar5;
			local_78[0]->g0 = uVar10;
			local_78[0]->b0 = (uchar)colour;
			local_78[0]->code = local_78[0]->code | 2;
			local_78[0]->code = local_78[0]->code & 0xfe;
			setUVparams__FP8POLY_FT4P9FRAME_HDR(local_78[0],Fr);
			puVar6 = ThisOt + OtPos;
			local_78[0]->tag = local_78[0]->tag & 0xff000000 | *puVar6 & local_38;
			*puVar6 = *puVar6 & 0xff000000 | (uint)local_78[0] & local_38;
			if (0x7ff < scale) {
				scale = scale - scaledec;
			}
			local_68 = local_68 + 1;
		} while (local_68 < count);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int colour /*$a3*/, int OtPos /*stack 16*/)
 // line 492, offset 0x800954d8
	/* begin block 1 */
		// Start line: 493
		// Start offset: 0x800954D8
	/* end block 1 */
	// End offset: 0x80095588
	// End Line: 510

	/* begin block 2 */
		// Start line: 1363
	/* end block 2 */
	// End Line: 1364

void ParticleMissile__FP13MissileStructiiii
							 (MissileStruct *Ms,int ScrX,int ScrY,int colour,int OtPos)

{
	int scaledec;
	int local_24;
	
	if (SetParticle != 0) {
		SetParticle = 0;
		if (Ms->_misource == '\0') {
			p1partexecnum = 1;
		}
		if ((int)Ms->_misource == 1) {
			p2partexecnum = (int)Ms->_misource;
		}
	}
	if (Ms->_mitype == '\x01') {
		local_24 = 0x8000;
		scaledec = 0x800;
	}
	else {
		local_24 = 0xf000;
		scaledec = 0x1000;
	}
	doparticlechain__Fiiiiiiiiiiii
						(ScrX,ScrY + -0x10,Ms->_mixvel,Ms->_miyvel,0x10,local_24,scaledec,1,0,colour,OtPos,
						 (int)Ms->_misource);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Teleportfx__Fiiiiiii(int scrnx /*stack -128*/, int scrny /*stack -120*/, int width /*stack -112*/, int height /*stack -104*/, int scale /*stack 16*/, int colmask /*stack 20*/, int numpart /*stack 24*/)
 // line 513, offset 0x80095598
	/* begin block 1 */
		// Start line: 514
		// Start offset: 0x80095598
		// Variables:
	// 		struct TextDat *Dat; // $fp
	// 		struct POLY_FT4 *Ft4; // stack offset -136
	// 		struct FRAME_HDR *Fr; // $v0
	// 		unsigned char SpR; // $s6
	// 		unsigned char SpG; // $s7
	// 		unsigned char SpB; // $s1
	// 		int w; // $s0
	// 		int h; // $s4
	// 		int x; // $s2
	// 		int y; // $s3
	// 		int f; // stack offset -96
	// 		int n; // stack offset -88
	// 		int rand; // $s5
	// 		int randu; // $s1
	// 		int randl; // $v0
	// 		unsigned char Rmask; // stack offset -80
	// 		unsigned char Gmask; // stack offset -72
	// 		unsigned char Bmask; // stack offset -64
	/* end block 1 */
	// End offset: 0x8009580C
	// End Line: 562

	/* begin block 2 */
		// Start line: 1408
	/* end block 2 */
	// End Line: 1409

void Teleportfx__Fiiiiiii
							 (int scrnx,int scrny,int width,int height,int scale,int colmask,int numpart)

{
	short sVar1;
	ulong *puVar2;
	ulong uVar3;
	TextDat *this;
	FRAME_HDR *pFVar4;
	short sVar5;
	short sVar6;
	uchar uVar7;
	int X;
	int Y;
	uchar uVar8;
	uchar uVar9;
	uint uVar10;
	uint uVar11;
	POLY_FT4 *local_88 [2];
	int local_80;
	int local_78;
	int local_70;
	int local_68;
	int local_60;
	uint local_58;
	uchar local_50;
	uchar local_48;
	uchar local_40;
	uint local_38;
	
	local_58 = 0;
	local_50 = (uchar)((uint)colmask >> 0x10);
	local_48 = (uchar)((uint)colmask >> 8);
	local_40 = (uchar)colmask;
	if (0 < numpart) {
		local_38 = 0xffffff;
		local_80 = scrnx;
		local_78 = scrny;
		local_70 = width;
		local_68 = height;
		do {
			uVar3 = GU_GetRnd();
			X = local_80 + (int)(uVar3 & 0xffff) % local_70;
			Y = local_78 + ((int)uVar3 >> 0x10) % local_68;
			local_60 = (local_58 & 7) + 0x102;
			this = GM_UseTexData__Fi(0);
			pFVar4 = GetFr__7TextDati(this,local_60);
			uVar10 = ((uint)*(ushort *)((int)&pFVar4->X + 2) & 0x1ff) * scale;
			if ((int)uVar10 < 0) {
				uVar10 = uVar10 + 0x7fff;
			}
			uVar11 = (pFVar4->Y & 0x1ffU) * scale;
			if ((int)uVar11 < 0) {
				uVar11 = uVar11 + 0x7fff;
			}
			X = X - ((int)(((int)uVar10 >> 0xf) + (uVar10 >> 0x1f)) >> 1);
			Y = Y - ((int)(((int)uVar11 >> 0xf) + (uVar11 >> 0x1f)) >> 1);
			uVar8 = (uchar)(uVar3 >> 0x10);
			if (local_50 != '\0') {
				uVar8 = local_50;
			}
			uVar9 = (uchar)(uVar3 >> 8);
			if (local_48 != '\0') {
				uVar9 = local_48;
			}
			uVar7 = (uchar)uVar3;
			if (local_40 != '\0') {
				uVar7 = local_40;
			}
			PRIM_GetPrim__FPP8POLY_FT4(local_88);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_88[0],local_60,X,Y,0,0);
			sVar1 = (short)X;
			sVar6 = sVar1 + (short)((int)uVar10 >> 0xf);
			local_88[0]->x0 = sVar1;
			sVar5 = (short)Y;
			local_88[0]->y0 = sVar5;
			local_88[0]->x1 = sVar6;
			local_88[0]->y1 = sVar5;
			local_88[0]->x2 = sVar1;
			local_88[0]->r0 = uVar8;
			sVar5 = sVar5 + (short)((int)uVar11 >> 0xf);
			local_88[0]->y2 = sVar5;
			local_88[0]->x3 = sVar6;
			local_88[0]->y3 = sVar5;
			local_88[0]->g0 = uVar9;
			local_88[0]->b0 = uVar7;
			local_88[0]->code = local_88[0]->code | 2;
			local_88[0]->code = local_88[0]->code & 0xfe;
			puVar2 = ThisOt;
			local_88[0]->tag = local_88[0]->tag & 0xff000000 | ThisOt[99] & local_38;
			local_58 = local_58 + 1;
			puVar2[99] = puVar2[99] & 0xff000000 | (uint)local_88[0] & local_38;
		} while ((int)local_58 < numpart);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResurrectFX__Fiiii(int x /*$s3*/, int height /*$s1*/, int scale /*$s0*/, int OtPos /*$s4*/)
 // line 566, offset 0x80095840
	/* begin block 1 */
		// Start line: 567
		// Start offset: 0x80095840
		// Variables:
	// 		int t; // $s2
	/* end block 1 */
	// End offset: 0x80095A30
	// End Line: 582

	/* begin block 2 */
		// Start line: 1544
	/* end block 2 */
	// End Line: 1545

void ResurrectFX__Fiiii(int x,int height,int scale,int OtPos)

{
	ulong uVar1;
	int h2;
	uint uVar2;
	
	uVar1 = VID_GetTick__Fv();
	uVar2 = uVar1 >> 2 & 1;
	Teleportfx__Fiiiiiii(x,(int)(height + ((uint)height >> 0x1f)) >> 1,8,height,scale,0,0x40);
	h2 = (int)(height * 3 + ((uint)(height * 3) >> 0x1f)) >> 1;
	drawpolyG4__Fiiiiiiii(x + -10,0,10,h2 + uVar2,h2 + 5,(int)&DAT_00202020,0x808080,OtPos);
	drawpolyG4__Fiiiiiiii(x,0,8,h2 + 6,h2 + 6,0x808080,0x808080,OtPos);
	drawpolyG4__Fiiiiiiii(x + 8,0,10,h2 + uVar2 + 5,h2,0x808080,(int)&DAT_00202020,OtPos);
	drawpolyF4__Fiiiiii(x + -2,0,1,h2 + -1,(int)&DAT_00606060,OtPos);
	drawpolyF4__Fiiiiii(x + -1,0,1,h2,0x808080,OtPos);
	drawpolyF4__Fiiiiii(x,0,2,h2 + 1,0x80c0c0,OtPos);
	drawpolyF4__Fiiiiii(x + 2,0,4,h2 + 2,0xffff,OtPos);
	drawpolyF4__Fiiiiii(x + 6,0,2,h2 + 1,0x80c0c0,OtPos);
	drawpolyF4__Fiiiiii(x + 8,0,1,h2,0x808080,OtPos);
	drawpolyF4__Fiiiiii(x + 9,0,1,h2 + -1,(int)&DAT_00606060,OtPos);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this /*$s0*/, struct PlayerStruct *ptrplr /*$s1*/)
 // line 586, offset 0x80095a64
	/* begin block 1 */
		// Start line: 587
		// Start offset: 0x80095A64
		// Variables:
	// 		struct RECT R; // stack offset -24
	// 		int ScrXOff; // $v1
	// 		int ScrYOff; // $v1
	/* end block 1 */
	// End offset: 0x80095B70
	// End Line: 604

	/* begin block 2 */
		// Start line: 1586
	/* end block 2 */
	// End Line: 1587

void GetPlrPos__11SPELLFX_DATP12PlayerStruct(SPELLFX_DAT *this,PlayerStruct *ptrplr)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	CBlocks *this_00;
	RECT local_18;
	
	this_00 = BL_GetCurrentBlocks__Fv();
	cVar1 = ptrplr->_pxoff;
	cVar2 = ptrplr->_pyoff;
	sVar3 = ptrplr->_px;
	sVar4 = ptrplr->_py;
	this->px = (int)sVar3;
	sVar5 = ptrplr->_py;
	this->X = (int)sVar3 * 0x14 + 10;
	this->Y = (int)sVar4 * 0x14 + 10;
	this->py = (int)sVar5;
	this->sxoff = ((int)cVar1 * 0x271) / 1000;
	this->syoff = ((int)cVar2 * 0x271) / 1000;
	GetScrXY__7CBlocksR4RECTiiii(this_00,&local_18,this->X,this->Y,this->sxoff,this->syoff);
	this->scrnx = (int)local_18.x + -4;
	this->scrny = (int)local_18.y + -0x10;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ healFX__Fv()
 // line 607, offset 0x80095b88
	/* begin block 1 */
		// Start line: 608
		// Start offset: 0x80095B88
		// Variables:
	// 		int plr; // $s3

		/* begin block 1.1 */
			// Start line: 608
			// Start offset: 0x80095B88

			/* begin block 1.1.1 */
				// Start line: 611
				// Start offset: 0x80095BAC

				/* begin block 1.1.1.1 */
					// Start line: 613
					// Start offset: 0x80095BB8

					/* begin block 1.1.1.1.1 */
						// Start line: 614
						// Start offset: 0x80095BD0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80095C70
					// End Line: 619
				/* end block 1.1.1.1 */
				// End offset: 0x80095C70
				// End Line: 619
			/* end block 1.1.1 */
			// End offset: 0x80095C70
			// End Line: 619
		/* end block 1.1 */
		// End offset: 0x80095C80
		// End Line: 621
	/* end block 1 */
	// End offset: 0x80095C80
	// End Line: 621

	/* begin block 2 */
		// Start line: 1672
	/* end block 2 */
	// End Line: 1673

/* WARNING: Unknown calling convention yet parameter storage is locked */

void healFX__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar3 < 2) {
		if (*(int *)((int)&SpellFXDat.healactive + iVar1) != 0) {
			GetPlrPos__11SPELLFX_DATP12PlayerStruct
								((SPELLFX_DAT *)((int)&SpellFXDat.apocactive + iVar1),
								 (PlayerStruct *)((int)&plr[0]._pmode + iVar2));
			Teleportfx__Fiiiiiii
								(*(int *)((int)&SpellFXDat.scrnx + iVar1) + -4,
								 *(int *)((int)&SpellFXDat.scrny + iVar1),0x10,0x10,0x4000,(int)&DAT_0040c0ff,0x10);
			*(int *)((int)&SpellFXDat.healtime + iVar1) = *(int *)((int)&SpellFXDat.healtime + iVar1) + -1
			;
			if (*(int *)((int)&SpellFXDat.healtime + iVar1) == 0) {
				*(undefined4 *)((int)&SpellFXDat.healactive + iVar1) = 0;
			}
		}
		iVar2 = iVar2 + 0x23a8;
		iVar1 = iVar1 + 0x48;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealStart__Fi(int plr /*$a0*/)
 // line 625, offset 0x80095ca0
	/* begin block 1 */
		// Start line: 626
		// Start offset: 0x80095CA0
	/* end block 1 */
	// End offset: 0x80095CCC
	// End Line: 628

	/* begin block 2 */
		// Start line: 1719
	/* end block 2 */
	// End Line: 1720

void HealStart__Fi(int plr)

{
	(&SpellFXDat)[plr].healactive = (void *)0x1;
	(&SpellFXDat)[plr].healtime = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealotherStart__Fi(int plr /*$a0*/)
 // line 631, offset 0x80095cd4
	/* begin block 1 */
		// Start line: 632
		// Start offset: 0x80095CD4
	/* end block 1 */
	// End offset: 0x80095D04
	// End Line: 635

	/* begin block 2 */
		// Start line: 1731
	/* end block 2 */
	// End Line: 1732

void HealotherStart__Fi(int plr)

{
	(&SpellFXDat)[plr ^ 1U].healactive = (void *)0x1;
	(&SpellFXDat)[plr ^ 1U].healtime = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TeleStart__Fi(int plr /*$a0*/)
 // line 638, offset 0x80095d0c
	/* begin block 1 */
		// Start line: 639
		// Start offset: 0x80095D0C
	/* end block 1 */
	// End offset: 0x80095D60
	// End Line: 642

	/* begin block 2 */
		// Start line: 1745
	/* end block 2 */
	// End Line: 1746

void TeleStart__Fi(int plr)

{
	int iVar1;
	
	(&SpellFXDat)[plr].teleflag = 1;
	iVar1 = (&SpellFXDat)[plr].scrny;
	(&SpellFXDat)[plr].spiny1 = (&SpellFXDat)[plr].scrny + -0x20;
	(&SpellFXDat)[plr].spiny2 = iVar1 + 0x20;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseStart__Fi(int plr /*$a0*/)
 // line 646, offset 0x80095d68
	/* begin block 1 */
		// Start line: 647
		// Start offset: 0x80095D68
	/* end block 1 */
	// End offset: 0x80095D94
	// End Line: 649

	/* begin block 2 */
		// Start line: 1763
	/* end block 2 */
	// End Line: 1764

void PhaseStart__Fi(int plr)

{
	(&SpellFXDat)[plr].phaseflag = 5;
	(&SpellFXDat)[plr].inviscount = 0x1e;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvisStart__Fi(int plr /*$a0*/)
 // line 653, offset 0x80095d9c
	/* begin block 1 */
		// Start line: 654
		// Start offset: 0x80095D9C
	/* end block 1 */
	// End offset: 0x80095DC8
	// End Line: 656

	/* begin block 2 */
		// Start line: 1777
	/* end block 2 */
	// End Line: 1778

void InvisStart__Fi(int plr)

{
	(&SpellFXDat)[plr].phaseflag = 5;
	(&SpellFXDat)[plr].inviscount = 0x4b0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseEnd__Fi(int plr /*$a0*/)
 // line 660, offset 0x80095dd0
	/* begin block 1 */
		// Start line: 661
		// Start offset: 0x80095DD0
	/* end block 1 */
	// End offset: 0x80095DF4
	// End Line: 663

	/* begin block 2 */
		// Start line: 1791
	/* end block 2 */
	// End Line: 1792

void PhaseEnd__Fi(int plr)

{
	(&SpellFXDat)[plr].phaseflag = 0;
	(&SpellFXDat)[plr].inviscount = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this /*$s0*/, struct PlayerStruct *ptrplr /*$s1*/)
 // line 668, offset 0x80095dfc
	/* begin block 1 */
		// Start line: 669
		// Start offset: 0x80095DFC
		// Variables:
	// 		struct RECT R; // stack offset -24
	// 		int ScrXOff; // $v1
	// 		int ScrYOff; // $v1
	/* end block 1 */
	// End offset: 0x80095F80
	// End Line: 692

	/* begin block 2 */
		// Start line: 1806
	/* end block 2 */
	// End Line: 1807

void ApocInit__11SPELLFX_DATP12PlayerStruct(SPELLFX_DAT *this,PlayerStruct *ptrplr)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	CBlocks *this_00;
	RECT local_18;
	
	this_00 = BL_GetCurrentBlocks__Fv();
	cVar1 = ptrplr->_pxoff;
	cVar2 = ptrplr->_pyoff;
	sVar3 = ptrplr->_px;
	sVar4 = ptrplr->_py;
	this->px = (int)sVar3;
	sVar5 = ptrplr->_py;
	this->X = (int)sVar3 * 0x14 + 10;
	this->Y = (int)sVar4 * 0x14 + 10;
	this->apocactive = (void *)0x1;
	this->py = (int)sVar5;
	this->sxoff = ((int)cVar1 * 0x271) / 1000;
	this->syoff = ((int)cVar2 * 0x271) / 1000;
	GetScrXY__7CBlocksR4RECTiiii(this_00,&local_18,this->X,this->Y,this->sxoff,this->syoff);
	this->scrnx = (int)local_18.x;
	this->yoffset = 0;
	this->scale = 0;
	this->scrny = (int)local_18.y + -0x20;
	DrawSpinner__FiiUcUcUciiibiT8
						(this->scrnx + -2,this->scrny + 2,-1,-1,0xff,0x20,0x40,0,(void *)0x0,0x100,&DAT_00000001
						);
	SetLightFX__FiisssUcUcUc(this->px,this->py,0xa00,0xa00,0xa00,0x40,0x40,0x40);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this /*$s0*/)
 // line 696, offset 0x80095f9c
	/* begin block 1 */
		// Start line: 697
		// Start offset: 0x80095F9C
		// Variables:
	// 		struct RECT R; // stack offset -16
	/* end block 1 */
	// End offset: 0x80095FF4
	// End Line: 704

	/* begin block 2 */
		// Start line: 1945
	/* end block 2 */
	// End Line: 1946

void ApocUpdate__11SPELLFX_DAT(SPELLFX_DAT *this)

{
	CBlocks *this_00;
	RECT local_10;
	
	this_00 = BL_GetCurrentBlocks__Fv();
	GetScrXY__7CBlocksR4RECTiiii(this_00,&local_10,this->X,this->Y,this->sxoff,this->syoff);
	this->scrnx = (int)local_10.x;
	this->scrny = (int)local_10.y + -0x20;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApocaStart__Fi(int plr /*$a0*/)
 // line 707, offset 0x80096008
	/* begin block 1 */
		// Start line: 708
		// Start offset: 0x80096008
	/* end block 1 */
	// End offset: 0x80096050
	// End Line: 711

	/* begin block 2 */
		// Start line: 1967
	/* end block 2 */
	// End Line: 1968

void ApocaStart__Fi(int plr)

{
	ApocInit__11SPELLFX_DATP12PlayerStruct(&SpellFXDat + plr,plr + plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ doapocaFX__Fv()
 // line 715, offset 0x80096060
	/* begin block 1 */
		// Start line: 716
		// Start offset: 0x80096060
		// Variables:
	// 		int plr; // $s1
	/* end block 1 */
	// End offset: 0x8009615C
	// End Line: 731

	/* begin block 2 */
		// Start line: 1983
	/* end block 2 */
	// End Line: 1984

/* WARNING: Unknown calling convention yet parameter storage is locked */

void doapocaFX__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(int *)((int)&SpellFXDat.apocactive + iVar2) != 0) {
			iVar1 = *(int *)((int)&SpellFXDat.scale + iVar2);
			if (iVar1 < 0x14000) {
				*(int *)((int)&SpellFXDat.scale + iVar2) = iVar1 + 0x1000 + (iVar1 >> 4);
				doparticlechain__Fiiiiiiiiiiii
									(*(int *)((int)&SpellFXDat.scrnx + iVar2),*(int *)((int)&SpellFXDat.scrny + iVar2)
									 ,0,0,0x10,*(int *)((int)&SpellFXDat.scale + iVar2),0x800,1,1,0xff0000,99,0);
			}
			else {
				*(undefined4 *)((int)&SpellFXDat.apocactive + iVar2) = 0;
			}
			ApocUpdate__11SPELLFX_DAT((SPELLFX_DAT *)((int)&SpellFXDat.apocactive + iVar2));
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x48;
	} while (iVar3 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveLTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 735, offset 0x80096178
	/* begin block 1 */
		// Start line: 736
		// Start offset: 0x80096178
	/* end block 1 */
	// End offset: 0x800961CC
	// End Line: 756

	/* begin block 2 */
		// Start line: 2033
	/* end block 2 */
	// End Line: 2034

void DaveLTask__FP4TASK(TASK *T)

{
	void *pvVar1;
	
	PAD_GetPad__FiUc(1,'\0');
	do {
		mteleportfx__Fv();
		invistimer__Fv();
		doapocaFX__Fv();
		healFX__Fv();
		doparticlejump__Fv();
		TSK_Sleep(1);
		pvVar1 = GLUE_Finished__Fv();
	} while (pvVar1 == (void *)0x0);
	return;
}





