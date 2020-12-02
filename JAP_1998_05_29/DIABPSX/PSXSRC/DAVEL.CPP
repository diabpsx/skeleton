#include "THISDUST.H"
#include "DAVEL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DaveLDummyPoll__Fv()
 // line 92, offset 0x8009e3f4
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x8009E3F4
	/* end block 1 */
	// End offset: 0x8009E3F4
	// End Line: 93

	/* begin block 2 */
		// Start line: 187
	/* end block 2 */
	// End Line: 188

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveLDummyPoll__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveL__Fv()
 // line 98, offset 0x8009e3fc
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x8009E3FC
	/* end block 1 */
	// End offset: 0x8009E414
	// End Line: 101

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveL__Fv(void)

{
	DBG_SetPollRoutine(DaveLDummyPoll__Fv);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4 /*stack 0*/, int R /*stack -80*/, int G /*stack -72*/, int B /*stack -64*/)
 // line 118, offset 0x8009e424
	/* begin block 1 */
		// Start line: 119
		// Start offset: 0x8009E424
		// Variables:
	// 		unsigned char zV0; // $a0
	// 		unsigned char zV2; // $a1
	// 		unsigned char zH; // $a1
	// 		unsigned char dH; // $s4
	// 		unsigned char zV; // $s1
	// 		unsigned char *s; // $v1
	// 		unsigned char *d; // $a0
	// 		unsigned char *Ft4m; // $s2
	// 		short zX0; // $s7
	// 		short zX1; // $fp
	// 		static int count; // offset 0x8011b100
	// 		int n; // $s6
	// 		int xoffset; // $s0
	// 		int yoffset; // $a2
	// 		short zY; // $s3
	/* end block 1 */
	// End offset: 0x8009E730
	// End Line: 186

	/* begin block 2 */
		// Start line: 236
	/* end block 2 */
	// End Line: 237

void DoReflection__FP8POLY_FT4iii(POLY_FT4 *Ft4,int R,int G,int B)

{
	bool bVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	ulong *puVar5;
	POLY_FT4 *pPVar6;
	uint uVar7;
	POLY_FT4 *pPVar8;
	short sVar9;
	short sVar10;
	uint uVar11;
	uchar uVar12;
	short sVar13;
	uint uVar14;
	uint uVar15;
	int iVar16;
	POLY_FT4 *local_res0;
	uchar local_50;
	uchar local_48;
	uchar local_40;
	
	uVar15 = DAT_8011b100;
	iVar16 = 0;
	uVar14 = (uint)(ushort)Ft4->y0;
	uVar7 = (uint)Ft4->v0;
	Ft4->u0 = Ft4->u0;
	sVar2 = Ft4->x0;
	sVar3 = Ft4->x1;
	Ft4->v0 = Ft4->v0 + '\x01';
	Ft4->u1 = Ft4->u1 + -1;
	Ft4->v1 = Ft4->v1 + '\x01';
	uVar11 = (int)(uVar15 & 4) >> 2;
	Ft4->u2 = Ft4->u2;
	uVar15 = ((uVar7 - (uint)Ft4->v2 & 0xff) >> 3) - ((int)(uVar15 & 8) >> 3);
	Ft4->u3 = Ft4->u3 + -1;
	local_res0 = Ft4;
	do {
		PRIM_GetPrim__FPP8POLY_FT4((POLY_FT4 **)register0x00000074);
		pPVar6 = Ft4;
		pPVar8 = local_res0;
		if (Ft4 < Ft4 + 1) {
			do {
				puVar5 = &pPVar6->tag;
				pPVar6 = (POLY_FT4 *)((int)&pPVar6->tag + 1);
				*(undefined *)&pPVar8->tag = *(undefined *)puVar5;
				pPVar8 = (POLY_FT4 *)((int)&pPVar8->tag + 1);
			} while (pPVar6 < Ft4 + 1);
		}
		sVar4 = (short)uVar11;
		local_res0->v0 = (uchar)uVar7;
		local_res0->v1 = (uchar)uVar7;
		uVar7 = uVar7 - uVar15;
		uVar12 = (uchar)uVar7;
		local_res0->v2 = uVar12;
		uVar11 = uVar11 ^ 1;
		local_res0->y0 = (short)uVar14;
		local_res0->y1 = (short)uVar14;
		local_res0->x0 = sVar2 + sVar4;
		local_res0->x1 = sVar3 + sVar4;
		local_res0->v3 = uVar12;
		uVar14 = uVar14 + (uVar15 & 0xff);
		sVar10 = sVar2 + (short)uVar11;
		sVar13 = (short)uVar14;
		local_res0->y2 = sVar13;
		local_res0->y3 = sVar13;
		local_res0->x2 = sVar10;
		local_res0->code = local_res0->code | 2;
		sVar9 = sVar3 + (short)uVar11;
		local_res0->x3 = sVar9;
		local_50 = (uchar)R;
		local_res0->r0 = local_50;
		local_48 = (uchar)G;
		local_res0->g0 = local_48;
		local_40 = (uchar)B;
		local_res0->b0 = local_40;
		iVar16 = iVar16 + 1;
		local_res0->code = local_res0->code & 0xfe;
		puVar5 = ThisOt;
		local_res0->tag = local_res0->tag & 0xff000000 | ThisOt[2] & 0xffffff;
		puVar5[2] = puVar5[2] & 0xff000000 | (uint)local_res0 & 0xffffff;
	} while (iVar16 < 7);
	Ft4->v0 = uVar12;
	Ft4->v1 = uVar12;
	Ft4->y0 = sVar13;
	Ft4->y1 = sVar13;
	Ft4->x0 = sVar10;
	Ft4->x1 = sVar9;
	Ft4->x2 = sVar2 + sVar4;
	Ft4->code = Ft4->code | 2;
	Ft4->x3 = sVar3 + sVar4;
	Ft4->r0 = local_50;
	Ft4->g0 = local_48;
	Ft4->b0 = local_40;
	Ft4->code = Ft4->code & 0xfe;
	puVar5 = ThisOt;
	Ft4->tag = Ft4->tag & 0xff000000 | ThisOt[2] & 0xffffff;
	bVar1 = anyfuckingmenus == (void *)0x0;
	puVar5[2] = puVar5[2] & 0xff000000 | (uint)Ft4 & 0xffffff;
	if (bVar1) {
		DAT_8011b100 = DAT_8011b100 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mteleportfx__Fv()
 // line 189, offset 0x8009e764
	/* begin block 1 */
		// Start line: 190
		// Start offset: 0x8009E764
		// Variables:
	// 		int plr; // $s4
	// 		int br; // $s0

		/* begin block 1.1 */
			// Start line: 190
			// Start offset: 0x8009E764

			/* begin block 1.1.1 */
				// Start line: 193
				// Start offset: 0x8009E7B0

				/* begin block 1.1.1.1 */
					// Start line: 195
					// Start offset: 0x8009E7BC

					/* begin block 1.1.1.1.1 */
						// Start line: 196
						// Start offset: 0x8009E7D4
						// Variables:
					// 		int OtPos; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009EA30
					// End Line: 218
				/* end block 1.1.1.1 */
				// End offset: 0x8009EA30
				// End Line: 218
			/* end block 1.1.1 */
			// End offset: 0x8009EA30
			// End Line: 218
		/* end block 1.1 */
		// End offset: 0x8009EA44
		// End Line: 221
	/* end block 1 */
	// End offset: 0x8009EA44
	// End Line: 221

	/* begin block 2 */
		// Start line: 652
	/* end block 2 */
	// End Line: 653

/* WARNING: Unknown calling convention yet parameter storage is locked */

void mteleportfx__Fv(void)

{
	CPlayer *this;
	int OtPos;
	uchar SpinR;
	int iVar1;
	uint SpinB;
	int iVar2;
	int *piVar3;
	int PNum;
	undefined *puVar4;
	
	PNum = 0;
	piVar3 = &SpellFXDat[0].scale;
	iVar2 = 0;
	puVar4 = (undefined *)0x0;
	while (PNum < 2) {
		if (*(int *)((int)&SpellFXDat[0].teleflag + iVar2) != 0) {
			GetPlrPos__11SPELLFX_DATP12PlayerStruct
								((SPELLFX_DAT *)((int)&SpellFXDat[0].apocactive + iVar2),
								 (PlayerStruct *)((int)&plr._pmode + (int)puVar4));
			this = GetPlayer__7CPlayeri(PNum);
			OtPos = GetLastOtPos__C7CPlayer(this);
			if (anyfuckingmenus == (void *)0x0) {
				if (*(int *)((int)&SpellFXDat[0].spiny1 + iVar2) <
						*(int *)((int)&SpellFXDat[0].spiny2 + iVar2)) {
					*(int *)((int)&SpellFXDat[0].scale + iVar2) =
							 *(int *)((int)&SpellFXDat[0].scale + iVar2) + 0x800;
				}
				if (0x10000 < *(int *)((int)&SpellFXDat[0].scale + iVar2)) {
					*(undefined4 *)((int)&SpellFXDat[0].scale + iVar2) = 0x10000;
				}
				if (*(int *)((int)&SpellFXDat[0].spiny2 + iVar2) <
						*(int *)((int)&SpellFXDat[0].spiny1 + iVar2)) {
					*(undefined4 *)((int)&SpellFXDat[0].teleflag + iVar2) = 2;
					*(int *)((int)&SpellFXDat[0].scale + iVar2) =
							 *(int *)((int)&SpellFXDat[0].scale + iVar2) + -0x800;
				}
				if (*(int *)((int)&SpellFXDat[0].scale + iVar2) < 0) {
					*(undefined4 *)((int)&SpellFXDat[0].scale + iVar2) = 0;
					*(undefined4 *)((int)&SpellFXDat[0].teleflag + iVar2) = 0;
				}
				*(int *)((int)&SpellFXDat[0].spiny1 + iVar2) =
						 *(int *)((int)&SpellFXDat[0].spiny1 + iVar2) + 1;
				*(int *)((int)&SpellFXDat[0].spiny2 + iVar2) =
						 *(int *)((int)&SpellFXDat[0].spiny2 + iVar2) + -1;
			}
			Teleportfx__Fiiiiiiii
								(*(int *)((int)&SpellFXDat[0].scrnx + iVar2),
								 *(int *)((int)&SpellFXDat[0].scrny + iVar2),8,0x10,*piVar3,0,8,OtPos);
			iVar1 = *piVar3 * 0xa0;
			if (iVar1 < 0) {
				iVar1 = iVar1 + 0xffff;
			}
			SpinB = iVar1 >> 0x10 & 0xff;
			SpinR = (uchar)SpinB;
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(*(int *)((int)&SpellFXDat[0].scrnx + iVar2),
								 *(int *)((int)&SpellFXDat[0].spiny1 + iVar2),SpinR,SpinR,SpinB,0x20,0x40,0,
								 (void *)0x0,OtPos + 2,&DAT_00000001,(void *)0x0,8);
			DrawSpinner__FiiUcUcUciiibiT8T8Uc
								(*(int *)((int)&SpellFXDat[0].scrnx + iVar2),
								 *(int *)((int)&SpellFXDat[0].spiny2 + iVar2),SpinR,SpinR,SpinB,0x20,0x40,0,
								 (void *)0x0,OtPos + 2,&DAT_00000001,(void *)0x0,8);
		}
		piVar3 = piVar3 + 0x12;
		iVar2 = iVar2 + 0x48;
		puVar4 = &DAT_000019e8 + (int)puVar4;
		PNum = PNum + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ invistimer__Fv()
 // line 225, offset 0x8009ea78
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8009EA78
		// Variables:
	// 		int plr; // $a3
	/* end block 1 */
	// End offset: 0x8009EB48
	// End Line: 238

	/* begin block 2 */
		// Start line: 749
	/* end block 2 */
	// End Line: 750

/* WARNING: Unknown calling convention yet parameter storage is locked */

void invistimer__Fv(void)

{
	void *pvVar1;
	uint uVar2;
	uint *puVar3;
	uint *puVar4;
	SPELLFX_DAT *pSVar5;
	int iVar6;
	
	pvVar1 = anyfuckingmenus;
	iVar6 = 0;
	pSVar5 = SpellFXDat;
	puVar3 = (uint *)&SpellFXDat[0].phaseflag;
	puVar4 = (uint *)&SpellFXDat[0].inviscount;
	do {
		if ((*puVar4 != 0) && (pvVar1 == (void *)0x0)) {
			pSVar5->inviscount = *puVar4 - 1;
			if (*puVar4 == 0) {
				*puVar3 = 0;
				return;
			}
			if ((int)*puVar4 < 300) {
				uVar2 = *puVar3;
				*puVar3 = uVar2 & 1;
				*puVar3 = uVar2 & 1 | *puVar4 & 4;
			}
			if ((int)*puVar4 < 0x3c) {
				uVar2 = *puVar3;
				*puVar3 = uVar2 & 1;
				*puVar3 = uVar2 & 1 | (*puVar4 & 2) << 1;
			}
		}
		puVar3 = puVar3 + 0x12;
		puVar4 = puVar4 + 0x12;
		iVar6 = iVar6 + 1;
		pSVar5 = pSVar5 + 1;
	} while (iVar6 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4 /*$a0*/, struct FRAME_HDR *Fr /*$a1*/)
 // line 242, offset 0x8009eb50
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x8009EB50
		// Variables:
	// 		int zU; // $a1
	// 		int zV; // $t1
	// 		int zW; // $t0
	// 		int zH; // $a3
	/* end block 1 */
	// End offset: 0x8009EBD8
	// End Line: 278

	/* begin block 2 */
		// Start line: 789
	/* end block 2 */
	// End Line: 790

void setUVparams__FP8POLY_FT4P9FRAME_HDR(POLY_FT4 *Ft4,FRAME_HDR *Fr)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	uchar uVar6;
	
	uVar1 = *(uchar *)((int)&Fr->FrOffset + 1);
	cVar4 = (char)((uint)Fr->Y >> 9);
	cVar3 = (char)Fr->Y;
	uVar2 = *(uchar *)&Fr->FrOffset;
	if ((Fr->X & 0x2000000U) == 0) {
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
// void /*$ra*/ drawparticle__Fiiiiii(int x /*$s5*/, int y /*$s6*/, int scale /*$s0*/, int anim /*$a3*/, int colour /*stack 16*/, int OtPos /*stack 20*/)
 // line 283, offset 0x8009ebe0
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x8009EBE0
		// Variables:
	// 		struct TextDat *Dat; // $s7
	// 		struct POLY_FT4 *Ft4; // stack offset -56
	// 		struct FRAME_HDR *Fr; // stack offset -48
	// 		unsigned char SpR; // $s0
	// 		unsigned char SpG; // $s1
	// 		unsigned char SpB; // $s2
	// 		int w; // $s4
	// 		int h; // $s3
	// 		int f; // $fp
	/* end block 1 */
	// End offset: 0x8009EDA4
	// End Line: 317

	/* begin block 2 */
		// Start line: 890
	/* end block 2 */
	// End Line: 891

void drawparticle__Fiiiiii(int x,int y,int scale,int anim,int colour,int OtPos)

{
	short sVar1;
	TextDat *this;
	short sVar2;
	short sVar3;
	ulong *puVar4;
	uint uVar5;
	uint uVar6;
	POLY_FT4 *local_38 [2];
	FRAME_HDR *local_30;
	
	this = GM_UseTexData__Fi(0);
	local_30 = GetFr__7TextDati(this,anim + 0xd0);
	uVar5 = (local_30->Y & 0x1ffU) * scale;
	if ((int)uVar5 < 0) {
		uVar5 = uVar5 + 0x7fff;
	}
	uVar6 = ((uint)local_30->Y >> 9 & 0x1ff) * scale;
	if ((int)uVar6 < 0) {
		uVar6 = uVar6 + 0x7fff;
	}
	x = x - ((int)(((int)uVar5 >> 0xf) + (uVar5 >> 0x1f)) >> 1);
	y = y - ((int)(((int)uVar6 >> 0xf) + (uVar6 >> 0x1f)) >> 1);
	PRIM_GetPrim__FPP8POLY_FT4(local_38);
	PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_38[0],anim + 0xd0,x,y,0,0);
	sVar1 = (short)x;
	sVar3 = sVar1 + (short)((int)uVar5 >> 0xf);
	local_38[0]->x0 = sVar1;
	sVar2 = (short)y;
	local_38[0]->y0 = sVar2;
	local_38[0]->x1 = sVar3;
	local_38[0]->y1 = sVar2;
	local_38[0]->x2 = sVar1;
	local_38[0]->r0 = (uchar)((uint)colour >> 0x10);
	sVar2 = sVar2 + (short)((int)uVar6 >> 0xf);
	local_38[0]->y2 = sVar2;
	local_38[0]->x3 = sVar3;
	local_38[0]->y3 = sVar2;
	local_38[0]->g0 = (uchar)((uint)colour >> 8);
	local_38[0]->b0 = (uchar)colour;
	local_38[0]->code = local_38[0]->code & 0xfd;
	local_38[0]->code = local_38[0]->code & 0xfe;
	setUVparams__FP8POLY_FT4P9FRAME_HDR(local_38[0],local_30);
	puVar4 = ThisOt + OtPos;
	local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar4 & 0xffffff;
	*puVar4 = *puVar4 & 0xff000000 | (uint)local_38[0] & 0xffffff;
	GM_FinishedUsing__FP7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ drawpolyF4__Fiiiiii(int x /*$s4*/, int y /*$s1*/, int w /*$s3*/, int h /*$s6*/, int colour /*stack 16*/, int OtPos /*stack 20*/)
 // line 320, offset 0x8009edd8
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x8009EDD8
		// Variables:
	// 		struct POLY_F4 *F4; // stack offset -48
	// 		unsigned char SpR; // $s5
	// 		unsigned char SpG; // $s7
	// 		unsigned char SpB; // $s2
	/* end block 1 */
	// End offset: 0x8009EEDC
	// End Line: 334

	/* begin block 2 */
		// Start line: 985
	/* end block 2 */
	// End Line: 986

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
 // line 338, offset 0x8009ef0c
	/* begin block 1 */
		// Start line: 339
		// Start offset: 0x8009EF0C
		// Variables:
	// 		struct POLY_G4 *G4; // stack offset -64
	// 		unsigned char SpR0; // $fp
	// 		unsigned char SpG0; // $s7
	// 		unsigned char SpB0; // $s2
	// 		unsigned char SpR1; // stack offset -56
	// 		unsigned char SpG1; // stack offset -48
	// 		unsigned char SpB1; // $s6
	/* end block 1 */
	// End offset: 0x8009F0A8
	// End Line: 360

	/* begin block 2 */
		// Start line: 1038
	/* end block 2 */
	// End Line: 1039

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
// void /*$ra*/ particlejump__Fii(int ScrX /*stack -56*/, int ScrY /*stack -48*/)
 // line 364, offset 0x8009f0dc
	/* begin block 1 */
		// Start line: 365
		// Start offset: 0x8009F0DC
		// Variables:
	// 		int n; // $s7
	// 		int partactive; // $fp
	/* end block 1 */
	// End offset: 0x8009F278
	// End Line: 391

	/* begin block 2 */
		// Start line: 1112
	/* end block 2 */
	// End Line: 1113

void particlejump__Fii(int ScrX,int ScrY)

{
	short sVar1;
	bool bVar2;
	int iVar3;
	int scale;
	uint anim;
	uint *puVar4;
	Particle *pPVar5;
	int *piVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;
	int iVar11;
	
	bVar2 = false;
	iVar11 = 0;
	puVar4 = (uint *)&PartArray.partanim;
	piVar10 = &PartArray.scale;
	piVar6 = &PartArray.party;
	pPVar5 = &PartArray;
	piVar8 = &PartArray.jumpcount;
	piVar9 = &PartArray.jumpflag;
	iVar7 = 0;
	do {
		if (*piVar9 != 0) {
			if (*(int *)((int)&PartArray.jumpmax + iVar7) < *piVar8) {
				*piVar9 = 0;
				sVar1 = *(short *)((int)&pPVar5->partx + 2);
				iVar3 = *piVar6;
				scale = *piVar10;
				anim = *puVar4;
			}
			else {
				if (anyfuckingmenus == (void *)0x0) {
					pPVar5->partx = pPVar5->partx + *(int *)((int)&PartArray.dx + iVar7);
					*(int *)((int)&PartArray.partanim + iVar7) = *puVar4 + 1;
					*puVar4 = *puVar4 & 7;
					iVar3 = *piVar8;
					*piVar8 = iVar3 + 2;
					*piVar6 = *piVar6 + (iVar3 + 2 >> 2);
				}
				sVar1 = *(short *)((int)&pPVar5->partx + 2);
				iVar3 = *piVar6;
				scale = *piVar10;
				anim = *puVar4;
				bVar2 = true;
			}
			drawparticle__Fiiiiii(ScrX + (int)sVar1,ScrY + iVar3,scale,anim,partcolour,partOtPos);
		}
		puVar4 = puVar4 + 9;
		piVar10 = piVar10 + 9;
		piVar6 = piVar6 + 9;
		pPVar5 = pPVar5 + 1;
		piVar8 = piVar8 + 9;
		piVar9 = piVar9 + 9;
		iVar11 = iVar11 + 1;
		iVar7 = iVar7 + 0x24;
	} while (iVar11 < 0x10);
	if (!bVar2) {
		partjumpflag = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ doparticlejump__Fv()
 // line 412, offset 0x8009f2ac
	/* begin block 1 */
		// Start line: 413
		// Start offset: 0x8009F2AC
		// Variables:
	// 		int ScrX; // $s1
	// 		int ScrY; // $a1
	// 		int ScrXOff; // $s3
	// 		int ScrYOff; // $s4
	// 		int WorldX; // stack offset -40
	// 		int WorldY; // stack offset -36
	// 		struct CBlocks *gblocks; // $s5
	/* end block 1 */
	// End offset: 0x8009F418
	// End Line: 432

	/* begin block 2 */
		// Start line: 1243
	/* end block 2 */
	// End Line: 1244

/* WARNING: Unknown calling convention yet parameter storage is locked */

void doparticlejump__Fv(void)

{
	char cVar1;
	char cVar2;
	CBlocks *this;
	int iVar3;
	int iVar4;
	int y;
	int x;
	undefined4 uStack40;
	undefined4 uStack36;
	
	this = BL_GetCurrentBlocks__Fv();
	GetXY__7CBlocksPiT1(this,&uStack40,&uStack36);
	cVar1 = monster[partmonst]._mxoff;
	cVar2 = monster[partmonst]._myoff;
	x = (int)monster[partmonst]._mx * 0x14;
	y = (int)monster[partmonst]._my * 0x14;
	iVar3 = WorldToScrX__7CBlocksii(this,x,y);
	iVar4 = WorldToScrX__7CBlocksii(this,(int)uStack40._2_2_,(int)uStack36._2_2_);
	y = WorldToScrY__7CBlocksii(this,x,y);
	x = WorldToScrY__7CBlocksii(this,(int)uStack40._2_2_,(int)uStack36._2_2_);
	if (partjumpflag != 0) {
		particlejump__Fii(((iVar3 + ((int)cVar1 * 0x271) / 1000) - iVar4) + -100,
											((y + ((int)cVar2 * 0x271) / 1000) - x) + -100);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPartJump__Fiiiii(int mi /*$a0*/, int height /*$s2*/, int scale /*$s4*/, int colour /*$a3*/, int OtPos /*stack 16*/)
 // line 436, offset 0x8009f440
	/* begin block 1 */
		// Start line: 437
		// Start offset: 0x8009F440
		// Variables:
	// 		int n; // $s1
	/* end block 1 */
	// End offset: 0x8009F570
	// End Line: 457

	/* begin block 2 */
		// Start line: 1317
	/* end block 2 */
	// End Line: 1318

void StartPartJump__Fiiiii(int mi,int height,int scale,int colour,int OtPos)

{
	ulong uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	
	if ((partjumpflag | partglowflag) == 0) {
		uVar4 = 0;
		iVar3 = 0;
		partjumpflag = 1;
		partOtPos = OtPos;
		partcolour = colour;
		partmonst = mi;
		do {
			*(undefined4 *)((int)&PartArray.partx + iVar3) = 0x640000;
			*(undefined4 *)((int)&PartArray.party + iVar3) = 100;
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
// void /*$ra*/ MonstPartJump__Fi(int m /*$s3*/)
 // line 461, offset 0x8009f594
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8009F594
		// Variables:
	// 		int ScrYOff; // $s1
	// 		int WorldX; // stack offset -32
	// 		int WorldY; // stack offset -28
	// 		struct CBlocks *gblocks; // $s2
	/* end block 1 */
	// End offset: 0x8009F694
	// End Line: 481

	/* begin block 2 */
		// Start line: 1377
	/* end block 2 */
	// End Line: 1378

void MonstPartJump__Fi(int m)

{
	char cVar1;
	CBlocks *this;
	int OtPos;
	int iVar2;
	undefined4 uStack32;
	undefined4 uStack28;
	
	this = BL_GetCurrentBlocks__Fv();
	GetXY__7CBlocksPiT1(this,&uStack32,&uStack28);
	cVar1 = monster[m]._myoff;
	OtPos = WorldToScrY__7CBlocksii(this,(int)monster[m]._mx * 0x14,(int)monster[m]._my * 0x14);
	iVar2 = WorldToScrY__7CBlocksii(this,(int)uStack32._2_2_,(int)uStack28._2_2_);
	OtPos = GetOtPos__7CBlocksi(this,(OtPos + ((int)cVar1 * 0x271) / 1000) - iVar2);
	StartPartJump__Fiiiii(m,0,0x8000,(int)&DAT_00606060,OtPos);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ doparticlechain__Fiiiiiiiiiiii(int sx /*$s0*/, int sy /*$s1*/, int dx /*$a2*/, int dy /*$a3*/, int count /*stack 16*/, int scale /*stack 20*/, int scaledec /*stack 24*/, int semitrans /*stack 28*/, int randomize /*stack 32*/, int colour /*stack 36*/, int OtPos /*stack 40*/, int source /*stack 44*/)
 // line 485, offset 0x8009f6b4
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x8009F6B4
		// Variables:
	// 		struct TextDat *Dat; // stack offset -112
	// 		struct POLY_FT4 *Ft4; // $a1
	// 		unsigned char SpR; // $t0
	// 		unsigned char SpG; // $s7
	// 		unsigned char SpB; // $s5
	// 		int x; // $s0
	// 		int y; // $s1
	// 		int br; // $v1
	// 		int w; // $s4
	// 		int h; // $s2
	// 		int f; // $s3
	// 		int c; // $s6
	// 		int t; // stack offset -104
	// 		int rand; // $v0
	// 		int xoffs; // $v1
	// 		int yoffs; // $v0
	// 		int xf; // stack offset -96
	// 		int yf; // stack offset -88
	// 		int dxf; // stack offset -80
	// 		int dyf; // stack offset -72
	// 		int dxabs; // $a1
	// 		int dyabs; // $a0
	// 		int divisor; // $a0
	// 		int *partexecnum; // $t0
	/* end block 1 */
	// End offset: 0x8009F9D0
	// End Line: 567

	/* begin block 2 */
		// Start line: 1437
	/* end block 2 */
	// End Line: 1438

/* WARNING: Unknown calling convention yet parameter storage is locked */

void doparticlechain__Fiiiiiiiiiiii
							 (int sx,int sy,int dx,int dy,int count,int scale,int scaledec,int semitrans,
							 int randomize,int colour,int OtPos,int source)

{
	short sVar1;
	short sVar2;
	short sVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	int X;
	ulong uVar7;
	TextDat *this;
	FRAME_HDR *pFVar8;
	POLY_FT4 *pPVar9;
	short sVar10;
	int iVar11;
	uchar uVar12;
	int *piVar13;
	int Y;
	int FrNum;
	uchar uVar14;
	int iVar15;
	int iVar16;
	uint local_68;
	int local_60;
	int local_58;
	
	uVar4 = dx >> 0x10;
	if ((int)uVar4 < 0) {
		uVar4 = -uVar4;
	}
	uVar5 = dy >> 0x10;
	if ((int)uVar5 < 0) {
		uVar5 = -uVar5;
	}
	piVar13 = &p2partexecnum;
	if (source == 0) {
		piVar13 = &p1partexecnum;
	}
	if ((int)uVar4 < (int)uVar5) {
		iVar6 = uVar5 + (uVar5 >> 0x1f);
	}
	else {
		iVar6 = uVar4 + (uVar4 >> 0x1f);
	}
	iVar6 = iVar6 >> 1;
	if (iVar6 == 0) {
		iVar6 = 1;
	}
	iVar11 = *piVar13;
	if (iVar11 < count) {
		count = iVar11;
	}
	X = iVar11 + (iVar6 >> 1);
	if (iVar6 >> 1 == 0) {
		X = iVar11 + 1;
	}
	*piVar13 = X;
	if (anyfuckingmenus == (void *)0x0) {
		uVar7 = VID_GetTick__Fv();
		local_68 = uVar7 >> 2 & 7;
	}
	else {
		local_68 = 0;
	}
	if (randomize != 0) {
		uVar7 = GU_GetRnd();
		sx = sx + (uVar7 & 3);
		sy = sy + ((int)uVar7 >> 0x10 & 3U);
	}
	local_60 = sx << 0x10;
	local_58 = sy << 0x10;
	this = GM_UseTexData__Fi(0);
	iVar11 = 0;
	if (0 < count) {
		do {
			FrNum = (local_68 - iVar11 & 7) + 0xd0;
			pFVar8 = GetFr__7TextDati(this,FrNum);
			iVar15 = (pFVar8->Y & 0x1ffU) * scale;
			X = local_60 >> 0x10;
			Y = local_58 >> 0x10;
			iVar16 = ((uint)pFVar8->Y >> 9 & 0x1ff) * scale;
			local_60 = local_60 - dx / iVar6;
			local_58 = local_58 - dy / iVar6;
			X = X - (iVar15 >> 0x10);
			Y = Y - (iVar16 >> 0x10);
			if (semitrans == 0) {
				colour._0_1_ = (uchar)(scale >> 9);
			}
			else {
				colour._0_1_ = (uchar)(scale >> 10);
			}
			uVar12 = (uchar)colour;
			if ((colour & 0xff0000U) != 0) {
				uVar12 = (uchar)((uint)colour >> 0x10);
			}
			uVar14 = (uchar)((uint)colour >> 8);
			if ((colour & 0xff00U) == 0) {
				uVar14 = (uchar)colour;
			}
			if ((colour & 0xffU) != 0) {
			}
			pPVar9 = PrintFt4__7TextDatiiiiii(this,FrNum,X,Y,0,OtPos,0);
			if (semitrans != 0) {
				pPVar9->tpage = pPVar9->tpage | 0x20;
			}
			sVar2 = (short)X;
			sVar10 = sVar2 + (short)(iVar15 >> 0xf);
			sVar1 = (short)Y;
			sVar3 = sVar1 + (short)(iVar16 >> 0xf);
			pPVar9->y2 = sVar3;
			pPVar9->y3 = sVar3;
			pPVar9->x0 = sVar2;
			pPVar9->y0 = sVar1;
			pPVar9->x1 = sVar10;
			pPVar9->y1 = sVar1;
			pPVar9->x2 = sVar2;
			pPVar9->x3 = sVar10;
			pPVar9->r0 = uVar12;
			pPVar9->g0 = uVar14;
			pPVar9->b0 = (uchar)colour;
			pPVar9->code = pPVar9->code & 0xfe | 2;
			if (0x7ff < scale) {
				scale = scale - scaledec;
			}
			iVar11 = iVar11 + 1;
		} while (iVar11 < count);
	}
	GM_FinishedUsing__FP7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int colour /*$a3*/, int OtPos /*stack 16*/)
 // line 570, offset 0x8009fa04
	/* begin block 1 */
		// Start line: 571
		// Start offset: 0x8009FA04
	/* end block 1 */
	// End offset: 0x8009FAB0
	// End Line: 588

	/* begin block 2 */
		// Start line: 1706
	/* end block 2 */
	// End Line: 1707

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ParticleMissile__FP13MissileStructiiii
							 (MissileStruct *Ms,int ScrX,int ScrY,int colour,int OtPos)

{
	int scaledec;
	int local_24;
	
	if (SetParticle != 0) {
		SetParticle = 0;
		if (Ms->_misource == 0) {
			p1partexecnum = 1;
		}
		if ((int)Ms->_misource == 1) {
			p2partexecnum = (int)Ms->_misource;
		}
	}
	if (Ms->_mitype == '\x01') {
		local_24 = 0x8000;
		scaledec = 0x1000;
	}
	else {
		local_24 = 0xf000;
		scaledec = 0x2000;
	}
	doparticlechain__Fiiiiiiiiiiii
						(ScrX,ScrY + -0x10,Ms->_mixvel,Ms->_miyvel,8,local_24,scaledec,1,0,colour,OtPos,
						 (int)Ms->_misource);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Teleportfx__Fiiiiiiii(int scrnx /*stack -136*/, int scrny /*stack -128*/, int width /*stack -120*/, int height /*stack -112*/, int scale /*stack 16*/, int colmask /*stack 20*/, int numpart /*stack 24*/, int OtPos /*stack 28*/)
 // line 591, offset 0x8009fac0
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x8009FAC0
		// Variables:
	// 		struct TextDat *Dat; // stack offset -104
	// 		struct POLY_FT4 *Ft4; // stack offset -144
	// 		unsigned char SpR; // $s6
	// 		unsigned char SpG; // $s7
	// 		unsigned char SpB; // $s1
	// 		int w; // $s4
	// 		int h; // $s0
	// 		int x; // $s2
	// 		int y; // $s3
	// 		int f; // $fp
	// 		int n; // stack offset -96
	// 		int randu; // $s1
	// 		int randl; // $s5
	// 		unsigned char Rmask; // stack offset -88
	// 		unsigned char Gmask; // stack offset -80
	// 		unsigned char Bmask; // stack offset -72
	// 		int rand[64]; // stack offset -400
	/* end block 1 */
	// End offset: 0x8009FD8C
	// End Line: 642

	/* begin block 2 */
		// Start line: 1752
	/* end block 2 */
	// End Line: 1753

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Teleportfx__Fiiiiiiii
							 (int scrnx,int scrny,int width,int height,int scale,int colmask,int numpart,int OtPos
							 )

{
	short sVar1;
	ulong uVar2;
	uint uVar3;
	FRAME_HDR *pFVar4;
	short sVar5;
	ulong *puVar6;
	short sVar7;
	uchar uVar8;
	int X;
	int Y;
	uint uVar9;
	uchar uVar10;
	uchar uVar11;
	int FrNum;
	uint uVar12;
	uint uVar13;
	ulong auStack400 [64];
	POLY_FT4 *local_90 [2];
	int local_88;
	int local_80;
	int local_78;
	int local_70;
	TextDat *local_68;
	uint local_60;
	uchar local_58;
	uchar local_50;
	uchar local_48;
	uint local_40;
	int local_30;
	
	local_60 = 0;
	local_58 = (uchar)((uint)colmask >> 0x10);
	local_50 = (uchar)((uint)colmask >> 8);
	local_48 = (uchar)colmask;
	local_88 = scrnx;
	local_80 = scrny;
	local_78 = width;
	local_70 = height;
	local_68 = GM_UseTexData__Fi(0);
	if (0 < numpart) {
		local_40 = 0xffffff;
		local_30 = 0;
		do {
			if (anyfuckingmenus == (void *)0x0) {
				uVar2 = GU_GetRnd();
				*(ulong *)((int)auStack400 + local_30) = uVar2;
			}
			uVar3 = *(uint *)((int)auStack400 + local_30);
			uVar9 = uVar3 & 0xffff;
			FrNum = (local_60 & 7) + 0xd0;
			X = local_88 + (int)uVar9 % local_78;
			Y = local_80 + ((int)uVar3 >> 0x10) % local_70;
			pFVar4 = GetFr__7TextDati(local_68,FrNum);
			uVar12 = (pFVar4->Y & 0x1ffU) * scale;
			if ((int)uVar12 < 0) {
				uVar12 = uVar12 + 0x7fff;
			}
			uVar13 = ((uint)pFVar4->Y >> 9 & 0x1ff) * scale;
			if ((int)uVar13 < 0) {
				uVar13 = uVar13 + 0x7fff;
			}
			X = X - ((int)(((int)uVar12 >> 0xf) + (uVar12 >> 0x1f)) >> 1);
			Y = Y - ((int)(((int)uVar13 >> 0xf) + (uVar13 >> 0x1f)) >> 1);
			uVar10 = (uchar)(uVar3 >> 0x10);
			if (local_58 != '\0') {
				uVar10 = local_58;
			}
			uVar11 = (uchar)(uVar9 >> 8);
			if (local_50 != '\0') {
				uVar11 = local_50;
			}
			uVar8 = (uchar)uVar9;
			if (local_48 != '\0') {
				uVar8 = local_48;
			}
			PRIM_GetPrim__FPP8POLY_FT4(local_90);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(local_68,local_90[0],FrNum,X,Y,0,0);
			sVar1 = (short)X;
			sVar7 = sVar1 + (short)((int)uVar12 >> 0xf);
			local_90[0]->x0 = sVar1;
			sVar5 = (short)Y;
			local_90[0]->y0 = sVar5;
			local_90[0]->x1 = sVar7;
			local_90[0]->y1 = sVar5;
			local_90[0]->x2 = sVar1;
			local_90[0]->r0 = uVar10;
			sVar5 = sVar5 + (short)((int)uVar13 >> 0xf);
			local_90[0]->y2 = sVar5;
			local_90[0]->x3 = sVar7;
			local_90[0]->y3 = sVar5;
			local_90[0]->g0 = uVar11;
			local_90[0]->b0 = uVar8;
			local_90[0]->code = local_90[0]->code | 2;
			local_90[0]->code = local_90[0]->code & 0xfe;
			local_30 = local_30 + 4;
			puVar6 = ThisOt + OtPos;
			local_90[0]->tag = local_90[0]->tag & 0xff000000 | puVar6[2] & local_40;
			local_60 = local_60 + 1;
			puVar6[2] = puVar6[2] & 0xff000000 | (uint)local_90[0] & local_40;
		} while ((int)local_60 < numpart);
	}
	GM_FinishedUsing__FP7TextDat(local_68);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResurrectFX__Fiiii(int x /*$s4*/, int height /*$s1*/, int scale /*$s0*/, int OtPos /*$s3*/)
 // line 645, offset 0x8009fdc0
	/* begin block 1 */
		// Start line: 646
		// Start offset: 0x8009FDC0
		// Variables:
	// 		int t; // $s2
	/* end block 1 */
	// End offset: 0x8009FFB4
	// End Line: 661

	/* begin block 2 */
		// Start line: 1910
	/* end block 2 */
	// End Line: 1911

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ResurrectFX__Fiiii(int x,int height,int scale,int OtPos)

{
	ulong uVar1;
	int h2;
	uint uVar2;
	
	uVar1 = VID_GetTick__Fv();
	uVar2 = uVar1 >> 2 & 1;
	Teleportfx__Fiiiiiiii(x,(int)(height + ((uint)height >> 0x1f)) >> 1,8,height,scale,0,0x40,OtPos);
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
// void /*$ra*/ ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$t0*/, int ScrY /*$a1*/, int colour /*$a3*/, int OtPos /*stack 16*/)
 // line 665, offset 0x8009ffe8
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x8009FFE8
	/* end block 1 */
	// End offset: 0x800A0070
	// End Line: 681

	/* begin block 2 */
		// Start line: 1952
	/* end block 2 */
	// End Line: 1953

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ParticleExp__FP13MissileStructiiii(MissileStruct *Ms,int ScrX,int ScrY,int colour,int OtPos)

{
	if (SetParticle != 0) {
		SetParticle = 0;
		if (Ms->_misource == 0) {
			p1partexecnum = 0x10;
		}
		if (Ms->_misource == 1) {
			p2partexecnum = 0x10;
		}
	}
	doparticlechain__Fiiiiiiiiiiii
						(ScrX,ScrY + -0x10,0,0,0x10,0xf000,0x1000,1,0,colour,OtPos,(int)Ms->_misource);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this /*$s0*/, struct PlayerStruct *ptrplr /*$s1*/)
 // line 685, offset 0x800a0080
	/* begin block 1 */
		// Start line: 686
		// Start offset: 0x800A0080
		// Variables:
	// 		struct RECT R; // stack offset -24
	// 		int ScrXOff; // $v1
	// 		int ScrYOff; // $v1
	/* end block 1 */
	// End offset: 0x800A018C
	// End Line: 703

	/* begin block 2 */
		// Start line: 1996
	/* end block 2 */
	// End Line: 1997

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 706, offset 0x800a01a4
	/* begin block 1 */
		// Start line: 707
		// Start offset: 0x800A01A4
		// Variables:
	// 		int plr; // $s1

		/* begin block 1.1 */
			// Start line: 707
			// Start offset: 0x800A01A4

			/* begin block 1.1.1 */
				// Start line: 710
				// Start offset: 0x800A01C8

				/* begin block 1.1.1.1 */
					// Start line: 712
					// Start offset: 0x800A01D4

					/* begin block 1.1.1.1.1 */
						// Start line: 713
						// Start offset: 0x800A01EC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A02B0
					// End Line: 720
				/* end block 1.1.1.1 */
				// End offset: 0x800A02B0
				// End Line: 720
			/* end block 1.1.1 */
			// End offset: 0x800A02B0
			// End Line: 720
		/* end block 1.1 */
		// End offset: 0x800A02C0
		// End Line: 722
	/* end block 1 */
	// End offset: 0x800A02C0
	// End Line: 722

	/* begin block 2 */
		// Start line: 2082
	/* end block 2 */
	// End Line: 2083

/* WARNING: Unknown calling convention yet parameter storage is locked */

void healFX__Fv(void)

{
	CPlayer *this;
	int OtPos;
	int iVar1;
	int PNum;
	undefined *puVar2;
	
	PNum = 0;
	puVar2 = (undefined *)0x0;
	iVar1 = 0;
	while (PNum < 2) {
		if (*(int *)((int)&SpellFXDat[0].healactive + iVar1) != 0) {
			GetPlrPos__11SPELLFX_DATP12PlayerStruct
								((SPELLFX_DAT *)((int)&SpellFXDat[0].apocactive + iVar1),
								 (PlayerStruct *)((int)&plr._pmode + (int)puVar2));
			this = GetPlayer__7CPlayeri(PNum);
			OtPos = GetLastOtPos__C7CPlayer(this);
			Teleportfx__Fiiiiiiii
								(*(int *)((int)&SpellFXDat[0].scrnx + iVar1) + -4,
								 *(int *)((int)&SpellFXDat[0].scrny + iVar1),0x10,0x10,0x4000,(int)&DAT_0040c0ff,
								 0x10,OtPos);
			if (anyfuckingmenus == (void *)0x0) {
				*(int *)((int)&SpellFXDat[0].healtime + iVar1) =
						 *(int *)((int)&SpellFXDat[0].healtime + iVar1) + -1;
			}
			if (*(int *)((int)&SpellFXDat[0].healtime + iVar1) == 0) {
				*(undefined4 *)((int)&SpellFXDat[0].healactive + iVar1) = 0;
			}
		}
		puVar2 = &DAT_000019e8 + (int)puVar2;
		iVar1 = iVar1 + 0x48;
		PNum = PNum + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealStart__Fi(int plr /*$a0*/)
 // line 726, offset 0x800a02e0
	/* begin block 1 */
		// Start line: 727
		// Start offset: 0x800A02E0
	/* end block 1 */
	// End offset: 0x800A030C
	// End Line: 729

	/* begin block 2 */
		// Start line: 2133
	/* end block 2 */
	// End Line: 2134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HealStart__Fi(int plr)

{
	SpellFXDat[plr].healactive = (void *)0x1;
	SpellFXDat[plr].healtime = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealotherStart__Fi(int plr /*$a0*/)
 // line 732, offset 0x800a0314
	/* begin block 1 */
		// Start line: 733
		// Start offset: 0x800A0314
	/* end block 1 */
	// End offset: 0x800A0344
	// End Line: 736

	/* begin block 2 */
		// Start line: 2145
	/* end block 2 */
	// End Line: 2146

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HealotherStart__Fi(int plr)

{
	SpellFXDat[plr ^ 1U].healactive = (void *)0x1;
	SpellFXDat[plr ^ 1U].healtime = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TeleStart__Fi(int plr /*$a0*/)
 // line 739, offset 0x800a034c
	/* begin block 1 */
		// Start line: 740
		// Start offset: 0x800A034C
	/* end block 1 */
	// End offset: 0x800A03F8
	// End Line: 746

	/* begin block 2 */
		// Start line: 2158
	/* end block 2 */
	// End Line: 2159

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TeleStart__Fi(int plr)

{
	int iVar1;
	int iVar2;
	
	GetPlrPos__11SPELLFX_DATP12PlayerStruct(SpellFXDat + plr,&plr + plr);
	SpellFXDat[plr].teleflag = 1;
	iVar1 = SpellFXDat[plr].scrny;
	iVar2 = SpellFXDat[plr].scrny;
	SpellFXDat[plr].scale = 0;
	SpellFXDat[plr].spiny1 = iVar1 + -0x20;
	SpellFXDat[plr].spiny2 = iVar2 + 0x20;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TeleStop__Fi(int plr /*$a0*/)
 // line 749, offset 0x800a040c
	/* begin block 1 */
		// Start line: 750
		// Start offset: 0x800A040C
	/* end block 1 */
	// End offset: 0x800A0430
	// End Line: 752

	/* begin block 2 */
		// Start line: 2185
	/* end block 2 */
	// End Line: 2186

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TeleStop__Fi(int plr)

{
	SpellFXDat[plr].teleflag = 0;
	SpellFXDat[plr].scale = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseStart__Fi(int plr /*$a0*/)
 // line 755, offset 0x800a0438
	/* begin block 1 */
		// Start line: 756
		// Start offset: 0x800A0438
	/* end block 1 */
	// End offset: 0x800A0464
	// End Line: 758

	/* begin block 2 */
		// Start line: 2197
	/* end block 2 */
	// End Line: 2198

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PhaseStart__Fi(int plr)

{
	SpellFXDat[plr].phaseflag = 5;
	SpellFXDat[plr].inviscount = 0x1e;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseEnd__Fi(int plr /*$a0*/)
 // line 762, offset 0x800a046c
	/* begin block 1 */
		// Start line: 763
		// Start offset: 0x800A046C
	/* end block 1 */
	// End offset: 0x800A0490
	// End Line: 765

	/* begin block 2 */
		// Start line: 2211
	/* end block 2 */
	// End Line: 2212

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PhaseEnd__Fi(int plr)

{
	SpellFXDat[plr].phaseflag = 0;
	SpellFXDat[plr].inviscount = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this /*$s2*/, struct PlayerStruct *ptrplr /*$s3*/)
 // line 770, offset 0x800a0498
	/* begin block 1 */
		// Start line: 771
		// Start offset: 0x800A0498
		// Variables:
	// 		struct RECT R; // stack offset -40
	// 		struct CBlocks *TheBlocks; // $s6
	// 		int ScrXOff; // $s5
	// 		int ScrYOff; // $s4
	// 		int OtPos; // $s1
	/* end block 1 */
	// End offset: 0x800A0654
	// End Line: 794

	/* begin block 2 */
		// Start line: 2226
	/* end block 2 */
	// End Line: 2227

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ApocInit__11SPELLFX_DATP12PlayerStruct(SPELLFX_DAT *this,PlayerStruct *ptrplr)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	CBlocks *this_00;
	CPlayer *this_01;
	int iVar6;
	RECT local_28;
	
	this_00 = BL_GetCurrentBlocks__Fv();
	cVar1 = ptrplr->_pxoff;
	cVar2 = ptrplr->_pyoff;
	sVar3 = ptrplr->_px;
	sVar4 = ptrplr->_py;
	this_01 = GetPlayer__7CPlayeri((uint)(ptrplr != &plr));
	iVar6 = GetLastOtPos__C7CPlayer(this_01);
	this->px = (int)ptrplr->_px;
	sVar5 = ptrplr->_py;
	this->sxoff = ((int)cVar1 * 0x271) / 1000;
	this->X = (int)sVar3 * 0x14 + 10;
	this->Y = (int)sVar4 * 0x14 + 10;
	this->syoff = ((int)cVar2 * 0x271) / 1000;
	this->apocactive = (void *)0x1;
	this->py = (int)sVar5;
	GetScrXY__7CBlocksR4RECTiiii(this_00,&local_28,this->X,this->Y,this->sxoff,this->syoff);
	this->scrnx = (int)local_28.x;
	this->scrny = (int)local_28.y + -0x20;
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						(this->scrnx + -2,(int)local_28.y + -0x1e,-1,-1,0xff,0x20,0x40,0,(void *)0x0,iVar6 + 2,
						 &DAT_00000001,(void *)0x0,8);
	SetLightFX__FiisssUcUcUc(this->px,this->py,0xa00,0xa00,0xa00,0x40,0x40,0x40);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApocaStart__Fi(int plr /*$a0*/)
 // line 798, offset 0x800a0680
	/* begin block 1 */
		// Start line: 799
		// Start offset: 0x800A0680
	/* end block 1 */
	// End offset: 0x800A06D4
	// End Line: 802

	/* begin block 2 */
		// Start line: 2334
	/* end block 2 */
	// End Line: 2335

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ApocaStart__Fi(int plr)

{
	ApocInit__11SPELLFX_DATP12PlayerStruct(SpellFXDat + plr,&plr + plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveLTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 806, offset 0x800a06e4
	/* begin block 1 */
		// Start line: 807
		// Start offset: 0x800A06E4
	/* end block 1 */
	// End offset: 0x800A07A4
	// End Line: 827

	/* begin block 2 */
		// Start line: 2350
	/* end block 2 */
	// End Line: 2351

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveLTask__FP4TASK(TASK *T)

{
	void *pvVar1;
	
	PAD_GetPad__FiUc(1,'\0');
	do {
		if (CDWAIT == (void *)0x0) {
			anyfuckingmenus =
					 (void *)(uint)((byte)(questlog | sbookflag | chrflag | PauseMode | invflag) != 0);
			mteleportfx__Fv();
			invistimer__Fv();
			healFX__Fv();
			if ((partjumpflag != 0) || (partglowflag != 0)) {
				doparticlejump__Fv();
			}
		}
		TSK_Sleep(1);
		pvVar1 = GLUE_Finished__Fv();
	} while (pvVar1 == (void *)0x0);
	return;
}





