#include "THISDUST.H"
#include "MISPRINT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DoPortalFX__FP8POLY_FT4iiii(struct POLY_FT4 *Ft4 /*stack 0*/, int R /*$fp*/, int G /*stack -72*/, int B /*stack -64*/, int OtPos /*stack 16*/)
 // line 85, offset 0x8007b8c4
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x8007B8C4
		// Variables:
	// 		unsigned char zU; // $s0
	// 		unsigned char *s; // $v1
	// 		unsigned char *d; // $a0
	// 		unsigned char *Ft4m; // $s2
	// 		short zX0; // $s5
	// 		short zX1; // $s6
	// 		short zY; // $s1
	// 		int n; // $s3
	// 		static int xoffset[56]; // offset 0x800e38e4
	/* end block 1 */
	// End offset: 0x8007BC00
	// End Line: 145

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoPortalFX__FP8POLY_FT4iiii(POLY_FT4 *Ft4,int R,int G,int B,int OtPos)

{
	bool bVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	POLY_FT4 *pPVar5;
	POLY_FT4 *pPVar6;
	ulong *puVar7;
	int *piVar8;
	uchar uVar9;
	short sVar10;
	int iVar11;
	POLY_FT4 *local_res0;
	uchar local_48;
	uchar local_40;
	
	iVar11 = 0;
	uVar9 = Ft4->u0;
	sVar2 = Ft4->x0;
	sVar3 = Ft4->x1;
	sVar10 = Ft4->y0;
	local_res0 = Ft4;
	do {
		PRIM_GetPrim__FPP8POLY_FT4((POLY_FT4 **)register0x00000074);
		pPVar5 = Ft4;
		pPVar6 = local_res0;
		if (Ft4 < Ft4 + 1) {
			do {
				puVar7 = &pPVar5->tag;
				pPVar5 = (POLY_FT4 *)((int)&pPVar5->tag + 1);
				*(undefined *)&pPVar6->tag = *(undefined *)puVar7;
				pPVar6 = (POLY_FT4 *)((int)&pPVar6->tag + 1);
			} while (pPVar5 < Ft4 + 1);
		}
		local_res0->u0 = uVar9;
		local_res0->u1 = uVar9;
		piVar8 = &DAT_800e38e4 + iVar11;
		local_res0->y0 = sVar10;
		local_res0->y1 = sVar10;
		local_res0->x0 = sVar2 + (short)*piVar8;
		iVar4 = *piVar8;
		uVar9 = uVar9 + '\x01';
		local_res0->u2 = uVar9;
		local_res0->x1 = sVar3 - (short)iVar4;
		local_res0->u3 = uVar9;
		sVar10 = sVar10 + 1;
		local_res0->y2 = sVar10;
		local_res0->y3 = sVar10;
		local_res0->x2 = sVar2 + (short)*piVar8;
		bVar1 = PauseMode == '\0';
		local_res0->x3 = sVar3 - (short)*piVar8;
		if (bVar1) {
			if (*piVar8 < 0x12) {
				*piVar8 = *piVar8 + 1;
			}
			else {
				*piVar8 = 0;
			}
		}
		local_res0->code = local_res0->code & 0xfd;
		local_res0->r0 = (uchar)R;
		local_48 = (uchar)G;
		local_res0->g0 = local_48;
		local_40 = (uchar)B;
		local_res0->b0 = local_40;
		iVar11 = iVar11 + 1;
		local_res0->code = local_res0->code & 0xfe;
		puVar7 = ThisOt + OtPos;
		local_res0->tag = local_res0->tag & 0xff000000 | *puVar7 & 0xffffff;
		*puVar7 = *puVar7 & 0xff000000 | (uint)local_res0 & 0xffffff;
	} while (iVar11 < 0x36);
	Ft4->u0 = uVar9;
	Ft4->u1 = uVar9;
	piVar8 = &DAT_800e38e4 + iVar11;
	Ft4->y0 = sVar10;
	Ft4->y1 = sVar10;
	Ft4->x0 = sVar2 + (short)*piVar8;
	Ft4->x1 = sVar3 - (short)*piVar8;
	Ft4->x2 = sVar2 + (short)*piVar8;
	bVar1 = PauseMode == '\0';
	Ft4->x3 = sVar3 - (short)*piVar8;
	if (bVar1) {
		if (*piVar8 < 0x12) {
			*piVar8 = *piVar8 + 1;
		}
		else {
			*piVar8 = 0;
		}
	}
	Ft4->code = Ft4->code & 0xfd;
	Ft4->r0 = (uchar)R;
	Ft4->g0 = local_48;
	Ft4->b0 = local_40;
	Ft4->code = Ft4->code & 0xfe;
	puVar7 = ThisOt + OtPos;
	Ft4->tag = Ft4->tag & 0xff000000 | *puVar7 & 0xffffff;
	*puVar7 = *puVar7 & 0xff000000 | (uint)Ft4 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX /*$s7*/, int ScrY /*$s4*/, int OtPos /*$fp*/, int spell /*stack -104*/, int aframe /*stack 16*/, int direction /*stack 20*/, int anim /*stack 24*/, int sfx /*stack 28*/, int xflip /*stack 32*/, int yflip /*stack 36*/, int red /*stack 40*/, int grn /*stack 44*/, int blu /*stack 48*/, int semi /*stack 52*/)
 // line 156, offset 0x8007bc34
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x8007BC34
		// Variables:
	// 		struct POLY_FT4 *FT4; // stack offset -112
	// 		struct TextDat *missdat; // $s1
	// 		int frame; // $s0
	// 		int tv1; // $a1
	// 		int dw; // $v0
	// 		int dh; // $v1
	/* end block 1 */
	// End offset: 0x8007BFE8
	// End Line: 222

	/* begin block 2 */
		// Start line: 415
	/* end block 2 */
	// End Line: 416

/* WARNING: Unknown calling convention yet parameter storage is locked */

POLY_FT4 *
TempPrintMissile__FiiiiiiiiccUcUcUcc
					(int ScrX,int ScrY,int OtPos,int spell,int aframe,int direction,int anim,int sfx,int xflip
					,int yflip,int red,int grn,int blu,int semi)

{
	short sVar1;
	short sVar2;
	TextDat *this;
	byte bVar3;
	uint FrNum;
	int iVar4;
	POLY_FT4 *pPVar5;
	ulong *puVar6;
	POLY_FT4 *local_70 [2];
	int local_68;
	uchar local_60;
	uchar local_58;
	char local_50;
	
	this = MissDat;
	local_60 = (uchar)red;
	local_58 = (uchar)blu;
	local_50 = (char)semi;
	local_68 = spell;
	FrNum = GetFrNum__7TextDatiiii(MissDat,spell,anim,direction,aframe);
	FrNum = FrNum & 0xffff;
	GetFr__7TextDati(this,FrNum);
	iVar4 = GetNumOfFrames__7TextDat(this);
	pPVar5 = (POLY_FT4 *)0x0;
	if ((int)FrNum < iVar4) {
		PRIM_GetPrim__FPP8POLY_FT4(local_70);
		PrepareFt4__7TextDatP8POLY_FT4iiiii
							(this,local_70[0],FrNum,ScrX,ScrY,(int)(char)xflip,(int)(char)yflip);
		if (sfx - 2U < 0x10) {
			sVar1 = 0x11 - (short)sfx;
			local_70[0]->x0 = local_70[0]->x0 + sVar1;
			local_70[0]->x2 = local_70[0]->x2 + sVar1;
			local_70[0]->x1 = local_70[0]->x1 - sVar1;
			local_70[0]->x3 = local_70[0]->x3 - sVar1;
		}
		if (sfx - 0x13U < 9) {
			grn._0_1_ = (char)(sfx - 0x13U) * ' ';
			local_70[0]->tpage = local_70[0]->tpage | 0x20;
			local_60 = (uchar)grn;
			local_58 = (uchar)grn;
		}
		if (sfx == 0x12) {
			FrNum = (int)local_70[0]->x0 + (int)local_70[0]->x1;
			local_70[0]->x1 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			FrNum = (int)local_70[0]->x2 + (int)local_70[0]->x3;
			local_70[0]->x3 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			FrNum = (int)local_70[0]->y0 + (int)local_70[0]->y2;
			local_70[0]->y0 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			FrNum = (int)local_70[0]->y1 + (int)local_70[0]->y3;
			local_70[0]->y1 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
		}
		if (sfx == 1) {
			local_70[0]->y0 =
					 local_70[0]->y0 +
					 (short)((((int)local_70[0]->y2 - (int)local_70[0]->y0) * (10 - aframe)) / 10);
			local_70[0]->y1 =
					 local_70[0]->y1 +
					 (short)((((int)local_70[0]->y3 - (int)local_70[0]->y1) * (10 - aframe)) / 10);
		}
		if ((currlevel != '\0') && (local_68 == 2)) {
			OtPos = OtPos + 2;
			FrNum = (int)local_70[0]->x1 - (int)local_70[0]->x0;
			sVar1 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			local_70[0]->x1 = local_70[0]->x1 + sVar1;
			FrNum = (int)local_70[0]->y2 - (int)local_70[0]->y0;
			sVar2 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			local_70[0]->x3 = local_70[0]->x3 + sVar1;
			local_70[0]->y0 = local_70[0]->y0 - sVar2;
			local_70[0]->y1 = local_70[0]->y1 - sVar2;
		}
		local_70[0]->r0 = local_60;
		local_70[0]->g0 = (uchar)grn;
		local_70[0]->b0 = local_58;
		if (local_50 == '\0') {
			bVar3 = local_70[0]->code & 0xfd;
		}
		else {
			bVar3 = local_70[0]->code | 2;
		}
		local_70[0]->code = bVar3;
		local_70[0]->code = local_70[0]->code & 0xfe;
		puVar6 = ThisOt + OtPos;
		local_70[0]->tag = local_70[0]->tag & 0xff000000 | *puVar6 & 0xffffff;
		*puVar6 = *puVar6 & 0xff000000 | (uint)local_70[0] & 0xffffff;
		pPVar5 = local_70[0];
	}
	return pPVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$s3*/, int ScrY /*$s4*/, int OtPos /*$s5*/)
 // line 225, offset 0x8007c01c
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8007C01C
		// Variables:
	// 		int anim; // $s2
	// 		struct POLY_FT4 *FT4; // stack offset -40
	// 		struct TextDat *missdat; // $s1
	// 		int frame; // $s0
	/* end block 1 */
	// End offset: 0x8007C194
	// End Line: 253

	/* begin block 2 */
		// Start line: 600
	/* end block 2 */
	// End Line: 601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncTOWN__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TextDat *this;
	uint uVar1;
	int spell;
	int sfx;
	POLY_FT4 *local_28 [2];
	
	this = MissDat;
	if (Ms->_mimfnum < '\x01') {
		sfx = (int)Ms->_miAnimFrame;
	}
	else {
		sfx = 0x11;
	}
	if (currlevel == '\0') {
		uVar1 = GetFrNum__7TextDatiiii(MissDat,2,0,0,0);
		PRIM_GetPrim__FPP8POLY_FT4(local_28);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_28[0],uVar1 & 0xffff,ScrX,ScrY,0,0);
		if (0xf < sfx) {
			DoPortalFX__FP8POLY_FT4iiii(local_28[0],0,0,0xff,OtPos);
		}
		spell = 2;
	}
	else {
		uVar1 = GetFrNum__7TextDatiiii(MissDat,9,0,0,0);
		PRIM_GetPrim__FPP8POLY_FT4(local_28);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_28[0],uVar1 & 0xffff,ScrX,ScrY,0,0);
		if (0xf < sfx) {
			DoPortalFX__FP8POLY_FT4iiii(local_28[0],0,0,0xff,OtPos);
		}
		spell = 9;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc(ScrX,ScrY,OtPos,spell,0,0,0,sfx,0,0,0,0,0xc0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms /*$s0*/, int ScrX /*$s3*/, int ScrY /*$s4*/, int OtPos /*$s5*/)
 // line 258, offset 0x8007c1bc
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x8007C1BC
		// Variables:
	// 		int anim; // $s0
	// 		struct POLY_FT4 *FT4; // stack offset -40
	// 		struct TextDat *missdat; // $s2
	// 		int frame; // $s1
	/* end block 1 */
	// End offset: 0x8007C2B0
	// End Line: 273

	/* begin block 2 */
		// Start line: 669
	/* end block 2 */
	// End Line: 670

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncRPORTAL__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TextDat *this;
	uint uVar1;
	int sfx;
	POLY_FT4 *local_28 [2];
	
	this = MissDat;
	uVar1 = GetFrNum__7TextDatiiii(MissDat,9,0,0,0);
	if (Ms->_mimfnum < '\x01') {
		sfx = (int)Ms->_miAnimFrame;
	}
	else {
		sfx = 0x11;
	}
	PRIM_GetPrim__FPP8POLY_FT4(local_28);
	PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_28[0],uVar1 & 0xffff,ScrX,ScrY,0,0);
	if (0xf < sfx) {
		DoPortalFX__FP8POLY_FT4iiii(local_28[0],0xff,0,0,OtPos);
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc(ScrX,ScrY,OtPos,9,0,0,0,sfx,0,0,0xf0,0,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 277, offset 0x8007c2d8
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x8007C2D8

		/* begin block 1.1 */
			// Start line: 278
			// Start offset: 0x8007C2D8

			/* begin block 1.1.1 */
				// Start line: 283
				// Start offset: 0x8007C348
				// Variables:
			// 		int frame; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007C370
			// End Line: 295
		/* end block 1.1 */
		// End offset: 0x8007C370
		// End Line: 295
	/* end block 1 */
	// End offset: 0x8007C370
	// End Line: 295

	/* begin block 2 */
		// Start line: 715
	/* end block 2 */
	// End Line: 716

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFIREBOLT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	uint uVar1;
	
	ScrX = ScrX + (int)Ms->_miVar6;
	ScrY = ScrY + (int)Ms->_miVar7;
	if (Ms->_miAnimType == '\x13') {
		uVar1 = (uint)(byte)Ms->_miAnimFrame << 0x18;
		DrawExpl__Fiiiiiccc(ScrX,ScrY,(int)(((int)uVar1 >> 0x18) + (uVar1 >> 0x1f)) >> 1,OtPos,0x100,0,
												0x20,0x60);
	}
	else {
		ParticleMissile__FP13MissileStructiiii(Ms,ScrX,ScrY,0xff0000,OtPos);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 300, offset 0x8007c380
	/* begin block 1 */
		// Start line: 301
		// Start offset: 0x8007C380

		/* begin block 1.1 */
			// Start line: 301
			// Start offset: 0x8007C380

			/* begin block 1.1.1 */
				// Start line: 306
				// Start offset: 0x8007C400
				// Variables:
			// 		int frame; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007C428
			// End Line: 318
		/* end block 1.1 */
		// End offset: 0x8007C428
		// End Line: 318
	/* end block 1 */
	// End offset: 0x8007C428
	// End Line: 318

	/* begin block 2 */
		// Start line: 762
	/* end block 2 */
	// End Line: 763

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncHBOLT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	ScrX = ScrX + (int)Ms->_miVar6;
	ScrY = ScrY + (int)Ms->_miVar7;
	if (Ms->_miAnimType == '\x1c') {
		TempPrintMissile__FiiiiiiiiccUcUcUcc
							(ScrX,ScrY,OtPos,0xc,(int)Ms->_miAnimFrame,0,0,0,0,0,0x80,0xe0,0xf0,1);
	}
	else {
		ParticleMissile__FP13MissileStructiiii(Ms,ScrX,ScrY,0xff,OtPos);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 323, offset 0x8007c438
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x8007C438
	/* end block 1 */
	// End offset: 0x8007C490
	// End Line: 327

	/* begin block 2 */
		// Start line: 809
	/* end block 2 */
	// End Line: 810

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncLIGHTNING__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,8,(int)Ms->_miAnimFrame,
						 (int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, int OtPos /*$s3*/)
 // line 330, offset 0x8007c4a0
	/* begin block 1 */
		// Start line: 331
		// Start offset: 0x8007C4A0
	/* end block 1 */
	// End offset: 0x8007C5A4
	// End Line: 334

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncGUARDIAN__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	char cVar1;
	
	if (Ms->_mimfnum == '\0') {
		cVar1 = Ms->_miAnimFrame;
		if (cVar1 != '\x0f') goto LAB_8007c4f4;
		Ms->_miAnimFrame = '\x0e';
	}
	cVar1 = Ms->_miAnimFrame;
LAB_8007c4f4:
	if ((cVar1 == '\x02') && (Ms->_mimfnum == '\0')) {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(ScrX + -2,ScrY + 2,-0x10,-0x10,0xf0,0x18,0xc0,0x10,1,OtPos,1,0,8);
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,3,(int)Ms->_miAnimFrame,0,(int)Ms->_mimfnum,0,0,0,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 337, offset 0x8007c5c4
	/* begin block 1 */
		// Start line: 338
		// Start offset: 0x8007C5C4
		// Variables:
	// 		int frame; // $v1
	/* end block 1 */
	// End offset: 0x8007C64C
	// End Line: 340

	/* begin block 2 */
		// Start line: 839
	/* end block 2 */
	// End Line: 840

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFIREWALL__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,2,((int)Ms->_miAnimFrame * 10) / 0xb,0,0,(int)(char)(Ms->_mimfnum ^ 1),
						 0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 343, offset 0x8007c65c
	/* begin block 1 */
		// Start line: 344
		// Start offset: 0x8007C65C
		// Variables:
	// 		int frame; // $v1
	/* end block 1 */
	// End offset: 0x8007C6E4
	// End Line: 346

	/* begin block 2 */
		// Start line: 853
	/* end block 2 */
	// End Line: 854

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFIREMOVE__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,2,((int)Ms->_miAnimFrame * 10) / 0xb,0,0,(int)(char)(Ms->_mimfnum ^ 1),
						 0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 349, offset 0x8007c6f4
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x8007C6F4
	/* end block 1 */
	// End offset: 0x8007C750
	// End Line: 353

	/* begin block 2 */
		// Start line: 867
	/* end block 2 */
	// End Line: 868

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFLAME__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,7,(int)Ms->_miAnimFrame,
						 (int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 356, offset 0x8007c760
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x8007C760
		// Variables:
	// 		char xflip; // $t4
	// 		char yflip; // $t3
	// 		int frame; // $v1
	/* end block 1 */
	// End offset: 0x8007C800
	// End Line: 369

	/* begin block 2 */
		// Start line: 883
	/* end block 2 */
	// End Line: 884

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncARROW__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	int aframe;
	int iVar1;
	
	aframe = (int)Ms->_miAnimFrame + -1;
	iVar1 = aframe;
	if (aframe < 0) {
		iVar1 = (int)Ms->_miAnimFrame + 0xe;
	}
	aframe = aframe + (iVar1 >> 4) * -0x10;
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,4,aframe,(int)Ms->_mimfnum,0,0,
						 (uint)(8 < aframe),(uint)(aframe - 5U < 7),0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms /*$t1*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int OtPos /*$a3*/)
 // line 372, offset 0x8007c810
	/* begin block 1 */
		// Start line: 373
		// Start offset: 0x8007C810

		/* begin block 1.1 */
			// Start line: 373
			// Start offset: 0x8007C810

			/* begin block 1.1.1 */
				// Start line: 378
				// Start offset: 0x8007C87C
				// Variables:
			// 		char xflip; // $t3
			// 		char yflip; // $t2
			// 		int frame; // $v1
			// 		int nframe; // $t0
			/* end block 1.1.1 */
			// End offset: 0x8007C8F8
			// End Line: 396
		/* end block 1.1 */
		// End offset: 0x8007C8F8
		// End Line: 396
	/* end block 1 */
	// End offset: 0x8007C8F8
	// End Line: 396

	/* begin block 2 */
		// Start line: 924
	/* end block 2 */
	// End Line: 925

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFARROW__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	uint aframe;
	int spell;
	int local_28;
	uint local_20;
	uint local_1c;
	int local_18;
	int local_c;
	
	if (Ms->_miAnimType == '\x05') {
		spell = 0xc;
		aframe = SEXT14(Ms->_miAnimFrame);
		local_18 = 0xf0;
		local_28 = 0;
		local_20 = 0;
		local_1c = 0;
		local_c = 1;
	}
	else {
		spell = (int)Ms->_mimfnum;
		local_28 = spell;
		if (8 < spell) {
			local_28 = spell + -8;
		}
		local_20 = (uint)(8 < spell);
		local_1c = (uint)(spell - 5U < 7);
		if (4 < local_28) {
			local_28 = 8 - local_28;
		}
		spell = 6;
		local_18 = 0x80;
		local_c = 0;
		aframe = (uint)(byte)Ms->_miAnimFrame & 1;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,spell,aframe,0,local_28,0,
						 local_20,local_1c,local_18,0x80,0x80,local_c);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms /*$t1*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int OtPos /*$a3*/)
 // line 400, offset 0x8007c908
	/* begin block 1 */
		// Start line: 401
		// Start offset: 0x8007C908

		/* begin block 1.1 */
			// Start line: 401
			// Start offset: 0x8007C908

			/* begin block 1.1.1 */
				// Start line: 408
				// Start offset: 0x8007C96C
				// Variables:
			// 		char xflip; // $t3
			// 		char yflip; // $t2
			// 		int frame; // $v1
			// 		int nframe; // $t0
			/* end block 1.1.1 */
			// End offset: 0x8007C9E8
			// End Line: 426
		/* end block 1.1 */
		// End offset: 0x8007C9E8
		// End Line: 426
	/* end block 1 */
	// End offset: 0x8007C9E8
	// End Line: 426

	/* begin block 2 */
		// Start line: 982
	/* end block 2 */
	// End Line: 983

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncLARROW__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	uint aframe;
	int spell;
	int local_28;
	uint local_20;
	uint local_1c;
	
	if (Ms->_miAnimType == '\x1a') {
		spell = 8;
		aframe = SEXT14(Ms->_miAnimFrame);
		local_28 = 0;
		local_20 = 0;
		local_1c = 0;
	}
	else {
		spell = (int)Ms->_mimfnum;
		local_28 = spell;
		if (8 < spell) {
			local_28 = spell + -8;
		}
		local_20 = (uint)(8 < spell);
		local_1c = (uint)(spell - 5U < 7);
		if (4 < local_28) {
			local_28 = 8 - local_28;
		}
		spell = 5;
		aframe = (uint)(byte)Ms->_miAnimFrame & 1;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,spell,aframe,0,local_28,0,
						 local_20,local_1c,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 430, offset 0x8007c9f8
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x8007C9F8
		// Variables:
	// 		char xflip; // $t1
	// 		char yflip; // $t2
	// 		int frame; // $t0
	/* end block 1 */
	// End offset: 0x8007CA84
	// End Line: 445

	/* begin block 2 */
		// Start line: 1044
	/* end block 2 */
	// End Line: 1045

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncMAGMABALL__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	bool bVar2;
	uint anim;
	
	anim = SEXT14(Ms->_mimfnum);
	bVar1 = 4 < (int)anim;
	if (bVar1) {
		anim = anim - 1 ^ 7;
	}
	bVar2 = 2 < (int)anim;
	if (bVar2) {
		anim = anim & 1;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,0xb,(int)Ms->_miAnimFrame,0,anim,
						 0,(uint)bVar1,(uint)bVar2,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms /*$s3*/, int ScrX /*$s1*/, int ScrY /*$s2*/, int OtPos /*$s4*/)
 // line 448, offset 0x8007ca94
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x8007CA94
		// Variables:
	// 		char xflip; // $s6
	// 		char yflip; // $s7
	// 		int frame; // $s0
	// 		int sfx; // $s5
	/* end block 1 */
	// End offset: 0x8007CB88
	// End Line: 465

	/* begin block 2 */
		// Start line: 1087
	/* end block 2 */
	// End Line: 1088

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncBONESPIRIT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	bool bVar2;
	uint anim;
	int sfx;
	
	sfx = 0;
	anim = SEXT14(Ms->_mimfnum);
	ScrX = ScrX + (int)Ms->_miVar6;
	ScrY = ScrY + (int)Ms->_miVar7;
	if (anim == 8) {
		sfx = (uint)Ms->_mirange + 0x13;
	}
	bVar1 = 4 < (int)anim;
	if (bVar1) {
		anim = anim - 1 ^ 7;
	}
	bVar2 = 2 < (int)anim;
	if (bVar2) {
		anim = anim & 1;
	}
	ParticleMissile__FP13MissileStructiiii(Ms,ScrX,ScrY + -8,(int)&DAT_00402020,OtPos + -2);
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,0x10,(int)Ms->_miAnimFrame,0,anim,sfx,(uint)bVar1,(uint)bVar2,0x80,0x80
						 ,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncACID__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 468, offset 0x8007cbb8
	/* begin block 1 */
		// Start line: 469
		// Start offset: 0x8007CBB8
		// Variables:
	// 		char xflip; // $t2
	// 		char yflip; // $t1
	// 		int frame; // $t0
	/* end block 1 */
	// End offset: 0x8007CC50
	// End Line: 488

	/* begin block 2 */
		// Start line: 1142
	/* end block 2 */
	// End Line: 1143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncACID__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	bool bVar2;
	uint anim;
	
	anim = SEXT14(Ms->_mimfnum);
	if (anim < 7) {
		bVar1 = 4 < (int)anim;
		if (bVar1) {
			anim = anim - 1 ^ 7;
		}
		bVar2 = 2 < (int)anim;
		if (bVar2) {
			anim = anim & 1;
		}
		TempPrintMissile__FiiiiiiiiccUcUcUcc
							(ScrX,ScrY,OtPos,0,(int)Ms->_miAnimFrame,0,anim,0,(uint)bVar1,(uint)bVar2,0xe0,0xe0,
							 0x80,1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 493, offset 0x8007cc60
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x8007CC60
	/* end block 1 */
	// End offset: 0x8007CCB8
	// End Line: 495

	/* begin block 2 */
		// Start line: 1193
	/* end block 2 */
	// End Line: 1194

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncACIDSPLAT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,0xe,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 498, offset 0x8007ccc8
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x8007CCC8
	/* end block 1 */
	// End offset: 0x8007CD20
	// End Line: 500

	/* begin block 2 */
		// Start line: 1203
	/* end block 2 */
	// End Line: 1204

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncACIDPUD__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,0xf,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms /*$s4*/, int ScrX /*$s0*/, int ScrY /*$s1*/, int OtPos /*$s6*/)
 // line 503, offset 0x8007cd30
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x8007CD30
		// Variables:
	// 		unsigned char red; // $s2
	// 		unsigned char grn; // $s3
	// 		unsigned char blu; // $s5
	// 		struct POLY_FT4 *FT4; // $v0
	/* end block 1 */
	// End offset: 0x8007CE90
	// End Line: 525

	/* begin block 2 */
		// Start line: 1213
	/* end block 2 */
	// End Line: 1214

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFLARE__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	byte bVar1;
	TextDat *this;
	POLY_FT4 *pPVar2;
	uchar SpinR;
	uchar SpinG;
	int SpinB;
	
	SpinR = '\0';
	SpinG = '\0';
	SpinB = 0;
	ScrX = ScrX + (int)Ms->_miVar6;
	ScrY = ScrY + (int)Ms->_miVar7;
	bVar1 = Ms->_miAnimType;
	if (bVar1 == 0x28) {
		SpinB = 0xf0;
		goto LAB_8007cdf8;
	}
	if (bVar1 < 0x29) {
		if (bVar1 == 0x16) {
LAB_8007cdb4:
			SpinR = -0x10;
			SpinG = '\0';
			SpinB = 0;
			goto LAB_8007cdf8;
		}
	}
	else {
		if (bVar1 == 0x2a) {
			SpinR = -0x10;
			SpinG = -0x10;
			goto LAB_8007cdf8;
		}
		if (bVar1 == 0x2c) goto LAB_8007cdb4;
	}
	DBG_Error((char *)0x0,"source/MISPRINT.cpp",0x200);
LAB_8007cdf8:
	this = GM_UseTexData__Fi(0);
	pPVar2 = PrintFt4__7TextDatiiiiii(this,0xd9,ScrX + 3,ScrY + -0x10,0,OtPos,0);
	pPVar2->r0 = -0x60;
	pPVar2->g0 = -0x60;
	pPVar2->b0 = -0x60;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						(ScrX,ScrY + -0xc,SpinR,SpinG,SpinB,0x18,0x48,(int)Ms->_miAnimFrame * 3,0,OtPos,0,0,8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s3*/, int OtPos /*$s6*/)
 // line 528, offset 0x8007cebc
	/* begin block 1 */
		// Start line: 529
		// Start offset: 0x8007CEBC
		// Variables:
	// 		unsigned char red; // $s4
	// 		unsigned char grn; // $s5
	// 		unsigned char blu; // $s2
	// 		unsigned long bright; // $v0
	/* end block 1 */
	// End offset: 0x8007D00C
	// End Line: 544

	/* begin block 2 */
		// Start line: 1277
	/* end block 2 */
	// End Line: 1278

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FuncFLAREXP__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	byte bVar1;
	short sVar2;
	short sVar3;
	int SpinB;
	uchar SpinR;
	uchar SpinG;
	
	SpinR = '\0';
	SpinG = '\0';
	SpinB = 0;
	sVar2 = Ms->_miVar6;
	sVar3 = Ms->_miVar7;
	bVar1 = Ms->_miAnimType;
	if (bVar1 == 0x29) {
		SpinB = 0xf0;
		goto LAB_8007cf84;
	}
	if (bVar1 < 0x2a) {
		if (bVar1 == 0x17) {
LAB_8007cf40:
			SpinR = -0x10;
			SpinG = '\0';
			SpinB = 0;
			goto LAB_8007cf84;
		}
	}
	else {
		if (bVar1 == 0x2b) {
			SpinR = -0x10;
			SpinG = -0x10;
			goto LAB_8007cf84;
		}
		if (bVar1 == 0x2d) goto LAB_8007cf40;
	}
	DBG_Error((char *)0x0,"source/MISPRINT.cpp",0x219);
LAB_8007cf84:
	DrawSpinner__FiiUcUcUciiibiT8T8Uc
						(ScrX + (int)sVar2,ScrY + (int)sVar3 + -0xc,SpinR,SpinG,SpinB,
						 (int)Ms->_miAnimFrame * 4 + 0x18,
						 0x61 - ((uint)((int)Ms->_miAnimFrame * (0x8000 / (int)Ms->_miAnimLen)) >> 8),
						 (int)Ms->_miAnimFrame * 3,0,OtPos + -1,1,0,8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 547, offset 0x8007d038
	/* begin block 1 */
		// Start line: 548
		// Start offset: 0x8007D038
	/* end block 1 */
	// End offset: 0x8007D094
	// End Line: 551

	/* begin block 2 */
		// Start line: 1327
	/* end block 2 */
	// End Line: 1328

void FuncCBOLT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,8,(int)Ms->_miAnimFrame,
						 (int)Ms->_mimfnum,0,0x12,0,0,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 554, offset 0x8007d0a4
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x8007D0A4
	/* end block 1 */
	// End offset: 0x8007D0F4
	// End Line: 558

	/* begin block 2 */
		// Start line: 1343
	/* end block 2 */
	// End Line: 1344

void FuncBOOM__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	uint uVar1;
	
	uVar1 = (uint)(byte)Ms->_miAnimFrame << 0x18;
	DrawExpl__Fiiiiiccc(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,
											(int)(((int)uVar1 >> 0x18) + (uVar1 >> 0x1f)) >> 1,OtPos,0x200,0,0x20,0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int OtPos /*$a3*/)
 // line 561, offset 0x8007d104
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x8007D104

		/* begin block 1.1 */
			// Start line: 562
			// Start offset: 0x8007D104

			/* begin block 1.1.1 */
				// Start line: 567
				// Start offset: 0x8007D168
				// Variables:
			// 		char xflip; // $t1
			// 		int frame; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007D1C8
			// End Line: 574
		/* end block 1.1 */
		// End offset: 0x8007D1C8
		// End Line: 574
	/* end block 1 */
	// End offset: 0x8007D1C8
	// End Line: 574

	/* begin block 2 */
		// Start line: 1357
	/* end block 2 */
	// End Line: 1358

void FuncELEMENT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	uint uVar2;
	int anim;
	
	ScrX = ScrX + (int)Ms->_miVar6;
	ScrY = ScrY + (int)Ms->_miVar7;
	if (Ms->_miAnimType == '\x13') {
		uVar2 = (uint)(byte)Ms->_miAnimFrame << 0x18;
		DrawExpl__Fiiiiiccc(ScrX,ScrY,(int)(((int)uVar2 >> 0x18) + (uVar2 >> 0x1f)) >> 1,OtPos,0x200,0,0
												,0x60);
	}
	else {
		anim = (int)Ms->_mimfnum;
		bVar1 = 4 < anim;
		if (bVar1) {
			anim = 8 - anim;
		}
		TempPrintMissile__FiiiiiiiiccUcUcUcc
							(ScrX,ScrY,OtPos,10,(int)Ms->_miAnimFrame,0,anim,0,(uint)bVar1,0,0x80,0x80,0x80,1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 578, offset 0x8007d1d8
	/* begin block 1 */
		// Start line: 579
		// Start offset: 0x8007D1D8
	/* end block 1 */
	// End offset: 0x8007D234
	// End Line: 582

	/* begin block 2 */
		// Start line: 1392
	/* end block 2 */
	// End Line: 1393

void FuncMISEXP__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + (int)Ms->_miVar7,OtPos,0xc,(int)Ms->_miAnimFrame,0,0,0,0
						 ,0,0xf0,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 585, offset 0x8007d244
	/* begin block 1 */
		// Start line: 586
		// Start offset: 0x8007D244
	/* end block 1 */
	// End offset: 0x8007D244
	// End Line: 586

	/* begin block 2 */
		// Start line: 1407
	/* end block 2 */
	// End Line: 1408

void FuncRHINO__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms /*$s3*/, int ScrX /*$s0*/, int ScrY /*$a2*/, int OtPos /*$s4*/)
 // line 589, offset 0x8007d24c
	/* begin block 1 */
		// Start line: 590
		// Start offset: 0x8007D24C
		// Variables:
	// 		int size; // $v1

		/* begin block 1.1 */
			// Start line: 590
			// Start offset: 0x8007D24C

			/* begin block 1.1.1 */
				// Start line: 591
				// Start offset: 0x8007D280
				// Variables:
			// 		static int xoffset[3][8]; // offset 0x80118cf4
			// 		int id; // $s1
			// 		struct CPlayer *test; // $s2
			// 		struct PlayerStruct *player; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8007D300
			// End Line: 602
		/* end block 1.1 */
		// End offset: 0x8007D300
		// End Line: 602
	/* end block 1 */
	// End offset: 0x8007D388
	// End Line: 607

	/* begin block 2 */
		// Start line: 1414
	/* end block 2 */
	// End Line: 1415

void FuncFLASH__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	CPlayer *this;
	int iVar1;
	int PNum;
	
	if (Ms->_micaster == 0) {
		PNum = (int)Ms->_misource;
		this = GetPlayer__7CPlayeri(PNum);
		iVar1 = GetLastScrX__C7CPlayer(this);
		ScrX = iVar1 + *(int *)((int)plr[PNum]._pdir * 4 + (int)plr[PNum]._pClass * 0x20 + -0x7fee730c)
					 + -6;
		ScrY = GetLastScrY__C7CPlayer(this);
		ScrY = ScrY + 2;
	}
	iVar1 = (int)Ms->_miAnimFrame * 0x10;
	if (0x26 < iVar1) {
		iVar1 = (int)Ms->_miAnimFrame * -0x10 + 0x4c;
	}
	if (0 < iVar1) {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(ScrX,ScrY + -0x24,-0x60,-0x60,0xff,iVar1 + 0x18,(int)Ms->_miAnimFrame * -4 + 0x80,
							 (int)Ms->_miAnimFrame * 3,0,OtPos + 1,1,1,8);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 610, offset 0x8007d3ac
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x8007D3AC
	/* end block 1 */
	// End offset: 0x8007D3FC
	// End Line: 613

	/* begin block 2 */
		// Start line: 1459
	/* end block 2 */
	// End Line: 1460

void FuncMANASHIELD__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX + (int)Ms->_miVar6,ScrY + 0x10,OtPos,0xd,0,0,0,0,0,0,0x40,0x40,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 616, offset 0x8007d40c
	/* begin block 1 */
		// Start line: 617
		// Start offset: 0x8007D40C
	/* end block 1 */
	// End offset: 0x8007D40C
	// End Line: 617

	/* begin block 2 */
		// Start line: 1472
	/* end block 2 */
	// End Line: 1473

void FuncFLASH2__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 620, offset 0x8007d414
	/* begin block 1 */
		// Start line: 621
		// Start offset: 0x8007D414
	/* end block 1 */
	// End offset: 0x8007D438
	// End Line: 622

	/* begin block 2 */
		// Start line: 1479
	/* end block 2 */
	// End Line: 1480

void FuncRESURRECTBEAM__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	ResurrectFX__Fiiii(ScrX + -4,((int)(((uint)ScrY >> 0x1f) + ScrY) >> 1) + 0x18,0x4000,OtPos);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 625, offset 0x8007d448
	/* begin block 1 */
		// Start line: 626
		// Start offset: 0x8007D448
	/* end block 1 */
	// End offset: 0x8007D4D4
	// End Line: 630

	/* begin block 2 */
		// Start line: 1489
	/* end block 2 */
	// End Line: 1490

void FuncWEAPEXP__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	ScrX = ScrX + (int)Ms->_miVar6;
	ScrY = ScrY + (int)Ms->_miVar7;
	if (Ms->_miVar2 == 1) {
		ParticleExp__FP13MissileStructiiii(Ms,ScrX,ScrY,0xff0000,OtPos + 2);
	}
	else {
		TempPrintMissile__FiiiiiiiiccUcUcUcc
							(ScrX,ScrY,OtPos + 2,8,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0x12,0,0,0x80,0x80,
							 0x80,0);
	}
	return;
}





