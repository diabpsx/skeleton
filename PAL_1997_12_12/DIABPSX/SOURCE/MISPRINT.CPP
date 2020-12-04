#include "THISDUST.H"
#include "MISPRINT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX /*$s5*/, int ScrY /*$s4*/, int OtPos /*$fp*/, int spell /*$a3*/, int aframe /*stack 16*/, int direction /*stack 20*/, int anim /*stack 24*/, int sfx /*stack 28*/, int xflip /*stack 32*/, int yflip /*stack 36*/, int red /*stack 40*/, int grn /*stack 44*/, int blu /*stack 48*/, int semi /*stack 52*/)
 // line 97, offset 0x80073d2c
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80073D2C
		// Variables:
	// 		struct POLY_FT4 *FT4; // stack offset -88
	// 		struct POLY_FT4 *FT5; // stack offset -84
	// 		struct TextDat *missdat; // $s1
	// 		int frame; // $s0
	// 		int tv1; // $a1

		/* begin block 1.1 */
			// Start line: 98
			// Start offset: 0x80073D2C

			/* begin block 1.1.1 */
				// Start line: 109
				// Start offset: 0x80073DDC

				/* begin block 1.1.1.1 */
					// Start line: 110
					// Start offset: 0x80073DDC

					/* begin block 1.1.1.1.1 */
						// Start line: 115
						// Start offset: 0x80073E24
						// Variables:
					// 		int yness; // $s0
					// 		int shape; // $s0
					// 		int redness; // $s3
					// 		int bluness; // $s2

						/* begin block 1.1.1.1.1.1 */
							// Start line: 139
							// Start offset: 0x80073F30
							// Variables:
						// 		int i; // $s5
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007403C
						// End Line: 147
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007403C
					// End Line: 147
				/* end block 1.1.1.1 */
				// End offset: 0x8007403C
				// End Line: 147
			/* end block 1.1.1 */
			// End offset: 0x8007423C
			// End Line: 175
		/* end block 1.1 */
		// End offset: 0x8007423C
		// End Line: 175
	/* end block 1 */
	// End offset: 0x8007423C
	// End Line: 175

	/* begin block 2 */
		// Start line: 194
	/* end block 2 */
	// End Line: 195

void TempPrintMissile__FiiiiiiiiccUcUcUcc
							 (int ScrX,int ScrY,int OtPos,int spell,int aframe,int direction,int anim,int sfx,
							 int xflip,int yflip,int red,int grn,int blu,int semi)

{
	bool bVar1;
	short sVar2;
	TextDat *this;
	byte bVar3;
	uint FrNum;
	int iVar4;
	ulong *puVar5;
	int a;
	uint uVar6;
	int iVar7;
	int iVar8;
	POLY_FT4 *local_58;
	POLY_FT4 *local_54;
	uchar local_50;
	uchar local_48;
	char local_40;
	
	this = MissDat;
	local_50 = (uchar)red;
	local_48 = (uchar)blu;
	local_40 = (char)semi;
	FrNum = GetFrNum__7TextDatiiii(MissDat,spell,anim,direction,aframe);
	GetFr__7TextDati(this,FrNum);
	FrNum = FrNum & 0xffff;
	iVar4 = GetNumOfFrames__7TextDat(this);
	if ((int)FrNum < iVar4) {
		PRIM_GetPrim__FPP8POLY_FT4(&local_58);
		PrepareFt4__7TextDatP8POLY_FT4iiiii
							(this,local_58,FrNum,ScrX,ScrY,(int)(char)xflip,(int)(char)yflip);
		if (sfx - 2U < 0x10) {
			PRIM_GetPrim__FPP8POLY_FT4(&local_54);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_54,FrNum,ScrX + -2,ScrY,1,0);
			sVar2 = 0x11 - (short)sfx;
			local_58->x0 = local_58->x0 + sVar2;
			local_58->x2 = local_58->x2 + sVar2;
			local_54->x1 = local_54->x1 - sVar2;
			local_54->r0 = local_50;
			local_54->x3 = local_54->x3 - sVar2;
			local_54->g0 = (uchar)grn;
			local_54->b0 = local_48;
			local_54->code = local_54->code & 0xfe;
			rotateness = rotateness + 4;
			puVar5 = ThisOt + OtPos;
			local_54->tag = local_54->tag & 0xff000000 | *puVar5 & 0xffffff;
			down = down - 4U & 0x3f;
			bVar1 = PauseMode != '\0';
			*puVar5 = *puVar5 & 0xff000000 | (uint)local_54 & 0xffffff;
			if (bVar1) {
				return;
			}
			iVar8 = 0;
			iVar4 = 0;
			do {
				uVar6 = spiralling_shape + iVar4 & 0xf;
				a = uVar6 + 1;
				iVar7 = a * -0xe + 0xf0;
				iVar4 = vecleny__Fii(a,down + iVar8 * 8 & 0x3f);
				FrNum = (int)local_58->y0 + (int)local_58->y2;
				a = veclenx__Fii(a,down + iVar8 * 8 & 0x3f);
				iVar8 = iVar8 + 1;
				DrawSpinner__FiiUcUcUciiibiT8
									((int)local_58->x1 + (sfx * a) / 0x22 + -3,
									 ((int)(FrNum + (FrNum >> 0x1f)) >> 1) - (iVar4 + -5),(uchar)iVar7,' ',
									 0xffU - iVar7 & 0xff,uVar6 + 5,0x68,rotateness,(void *)0x0,OtPos + -1,
									 &DAT_00000001);
				iVar4 = iVar8 * 2;
			} while (iVar8 < 8);
		}
		if (sfx - 0x13U < 9) {
			grn._0_1_ = (char)(sfx - 0x13U) * ' ';
			local_58->tpage = local_58->tpage | 0x20;
			local_50 = (uchar)grn;
			local_48 = (uchar)grn;
		}
		if (sfx == 0x12) {
			FrNum = (int)local_58->x0 + (int)local_58->x1;
			local_58->x1 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			FrNum = (int)local_58->x2 + (int)local_58->x3;
			local_58->x3 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			FrNum = (int)local_58->y0 + (int)local_58->y2;
			local_58->y0 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
			FrNum = (int)local_58->y1 + (int)local_58->y3;
			local_58->y1 = (short)((int)(FrNum + (FrNum >> 0x1f)) >> 1);
		}
		if (sfx == 1) {
			local_58->y0 = local_58->y0 +
										 (short)((((int)local_58->y2 - (int)local_58->y0) * (10 - aframe)) / 10);
			local_58->y1 = local_58->y1 +
										 (short)((((int)local_58->y3 - (int)local_58->y1) * (10 - aframe)) / 10);
		}
		local_58->r0 = local_50;
		local_58->g0 = (uchar)grn;
		local_58->b0 = local_48;
		if (local_40 == '\0') {
			bVar3 = local_58->code & 0xfd;
		}
		else {
			bVar3 = local_58->code | 2;
		}
		local_58->code = bVar3;
		local_58->code = local_58->code & 0xfe;
		puVar5 = ThisOt + OtPos;
		local_58->tag = local_58->tag & 0xff000000 | *puVar5 & 0xffffff;
		*puVar5 = *puVar5 & 0xff000000 | (uint)local_58 & 0xffffff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, int OtPos /*$s3*/)
 // line 179, offset 0x80074270
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x80074270
		// Variables:
	// 		int anim; // $s0
	// 		struct POLY_F4 *F4; // $v0
	// 		int tv1; // $v1
	/* end block 1 */
	// End offset: 0x800743D0
	// End Line: 204

	/* begin block 2 */
		// Start line: 433
	/* end block 2 */
	// End Line: 434

void FuncTOWN__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	POLY_F4 *pPVar1;
	short sVar2;
	ulong *puVar3;
	short sVar4;
	int spell;
	int sfx;
	
	if (Ms->_mimfnum < '\x01') {
		sfx = (int)Ms->_miAnimFrame;
	}
	else {
		sfx = 0x11;
	}
	if (currlevel == '\0') {
		spell = 0xb;
	}
	else {
		spell = 9;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc(ScrX,ScrY,OtPos,spell,0,0,0,sfx,0,0,0x20,0x40,0x78,0);
	pPVar1 = PRIM_GetNextPolyF4__Fv();
	*(undefined *)((int)&pPVar1->tag + 3) = 5;
	pPVar1->code = '(';
	sVar2 = (short)ScrX + -(short)sfx + 5;
	sVar4 = (short)ScrY + -0x30;
	pPVar1->x0 = sVar2;
	pPVar1->x2 = sVar2;
	sVar2 = (short)ScrX - (-(short)sfx + 7);
	pPVar1->y0 = sVar4;
	pPVar1->y1 = sVar4;
	sVar4 = (short)ScrY + -4;
	pPVar1->y2 = sVar4;
	pPVar1->y3 = sVar4;
	pPVar1->x1 = sVar2;
	pPVar1->x3 = sVar2;
	pPVar1->r0 = '\0';
	pPVar1->g0 = '\0';
	pPVar1->b0 = '\0';
	pPVar1->code = pPVar1->code & 0xfe | 2;
	puVar3 = ThisOt + OtPos;
	pPVar1->tag = pPVar1->tag & 0xff000000 | puVar3[-1] & 0xffffff;
	puVar3[-1] = puVar3[-1] & 0xff000000 | (uint)pPVar1 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, int OtPos /*$s3*/)
 // line 207, offset 0x800743f0
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x800743F0
		// Variables:
	// 		int anim; // $s0
	// 		struct POLY_F4 *F4; // $v0
	// 		int tv1; // $v1
	/* end block 1 */
	// End offset: 0x80074530
	// End Line: 226

	/* begin block 2 */
		// Start line: 505
	/* end block 2 */
	// End Line: 506

void FuncRPORTAL__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	POLY_F4 *pPVar1;
	short sVar2;
	ulong *puVar3;
	short sVar4;
	int sfx;
	
	if (Ms->_mimfnum < '\x01') {
		sfx = (int)Ms->_miAnimFrame;
	}
	else {
		sfx = 0x11;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc(ScrX,ScrY,OtPos,9,0,0,0,sfx,0,0,0x78,0x40,0x20,0);
	pPVar1 = PRIM_GetNextPolyF4__Fv();
	*(undefined *)((int)&pPVar1->tag + 3) = 5;
	pPVar1->code = '(';
	sVar4 = (short)ScrX + -(short)sfx + 5;
	sVar2 = (short)ScrX - (-(short)sfx + 7);
	pPVar1->x1 = sVar2;
	pPVar1->x2 = sVar2;
	sVar2 = (short)ScrY + -4;
	pPVar1->y0 = sVar2;
	pPVar1->y1 = sVar2;
	sVar2 = (short)ScrY + -0x30;
	pPVar1->y2 = sVar2;
	pPVar1->y3 = sVar2;
	pPVar1->x0 = sVar4;
	pPVar1->x3 = sVar4;
	pPVar1->r0 = '\0';
	pPVar1->g0 = '\0';
	pPVar1->b0 = '\0';
	pPVar1->code = pPVar1->code & 0xfe | 2;
	puVar3 = ThisOt + OtPos;
	pPVar1->tag = pPVar1->tag & 0xff000000 | puVar3[-1] & 0xffffff;
	puVar3[-1] = puVar3[-1] & 0xff000000 | (uint)pPVar1 & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 229, offset 0x80074550
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x80074550

		/* begin block 1.1 */
			// Start line: 230
			// Start offset: 0x80074550

			/* begin block 1.1.1 */
				// Start line: 233
				// Start offset: 0x800745B0
				// Variables:
			// 		int frame; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800745D8
			// End Line: 245
		/* end block 1.1 */
		// End offset: 0x800745D8
		// End Line: 245
	/* end block 1 */
	// End offset: 0x800745D8
	// End Line: 245

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

void FuncFIREBOLT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	uint uVar1;
	
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
// void /*$ra*/ FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a1*/, int ScrY /*$t1*/, int OtPos /*$a2*/)
 // line 251, offset 0x800745e8
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x800745E8

		/* begin block 1.1 */
			// Start line: 252
			// Start offset: 0x800745E8

			/* begin block 1.1.1 */
				// Start line: 255
				// Start offset: 0x8007465C
				// Variables:
			// 		int frame; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80074688
			// End Line: 267
		/* end block 1.1 */
		// End offset: 0x80074688
		// End Line: 267
	/* end block 1 */
	// End offset: 0x80074688
	// End Line: 267

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

void FuncHBOLT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
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
 // line 273, offset 0x80074698
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x80074698
	/* end block 1 */
	// End offset: 0x800746EC
	// End Line: 275

	/* begin block 2 */
		// Start line: 652
	/* end block 2 */
	// End Line: 653

void FuncLIGHTNING__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,8,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms /*$s0*/, int ScrX /*$s1*/, int ScrY /*$s2*/, int OtPos /*$s3*/)
 // line 278, offset 0x800746fc
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x800746FC
	/* end block 1 */
	// End offset: 0x800747F4
	// End Line: 282

	/* begin block 2 */
		// Start line: 662
	/* end block 2 */
	// End Line: 663

void FuncGUARDIAN__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	char cVar1;
	
	if (Ms->_mimfnum == '\0') {
		cVar1 = Ms->_miAnimFrame;
		if (cVar1 != '\x0f') goto LAB_80074750;
		Ms->_miAnimFrame = '\x0e';
	}
	cVar1 = Ms->_miAnimFrame;
LAB_80074750:
	if ((cVar1 == '\x02') && (Ms->_mimfnum == '\0')) {
		DrawSpinner__FiiUcUcUciiibiT8
							(ScrX + -2,ScrY + 2,-0x10,-0x10,0xf0,0x18,0xc0,0x10,&DAT_00000001,OtPos,&DAT_00000001)
		;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,3,(int)Ms->_miAnimFrame,0,(int)Ms->_mimfnum,0,0,0,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 285, offset 0x80074814
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80074814
		// Variables:
	// 		int frame; // $v1
	/* end block 1 */
	// End offset: 0x8007489C
	// End Line: 288

	/* begin block 2 */
		// Start line: 676
	/* end block 2 */
	// End Line: 677

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
 // line 291, offset 0x800748ac
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x800748AC
		// Variables:
	// 		int frame; // $v1
	/* end block 1 */
	// End offset: 0x80074934
	// End Line: 294

	/* begin block 2 */
		// Start line: 690
	/* end block 2 */
	// End Line: 691

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
 // line 297, offset 0x80074944
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x80074944
	/* end block 1 */
	// End offset: 0x8007499C
	// End Line: 299

	/* begin block 2 */
		// Start line: 704
	/* end block 2 */
	// End Line: 705

void FuncFLAME__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,7,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 302, offset 0x800749ac
	/* begin block 1 */
		// Start line: 303
		// Start offset: 0x800749AC
		// Variables:
	// 		char xflip; // $t2
	// 		char yflip; // $t1
	// 		int frame; // $v1
	/* end block 1 */
	// End offset: 0x80074A30
	// End Line: 314

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

void FuncARROW__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	bool bVar2;
	uint aframe;
	
	aframe = (int)Ms->_miAnimFrame - 1;
	bVar1 = 4 < (int)aframe;
	if (bVar1) {
		aframe = (int)Ms->_miAnimFrame - 2U ^ 7;
	}
	bVar2 = 2 < (int)aframe;
	if (bVar2) {
		aframe = aframe & 1;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,4,aframe,(int)Ms->_mimfnum,0,0,(uint)bVar1,(uint)bVar2,0x80,0x80,0x80,0
						);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms /*$t1*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int OtPos /*$a2*/)
 // line 317, offset 0x80074a40
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x80074A40

		/* begin block 1.1 */
			// Start line: 318
			// Start offset: 0x80074A40

			/* begin block 1.1.1 */
				// Start line: 321
				// Start offset: 0x80074AA0
				// Variables:
			// 		char xflip; // $t3
			// 		char yflip; // $t2
			// 		int frame; // $t0
			/* end block 1.1.1 */
			// End offset: 0x80074B10
			// End Line: 333
		/* end block 1.1 */
		// End offset: 0x80074B10
		// End Line: 333
	/* end block 1 */
	// End offset: 0x80074B10
	// End Line: 333

	/* begin block 2 */
		// Start line: 745
	/* end block 2 */
	// End Line: 746

void FuncFARROW__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	int aframe;
	int spell;
	uint local_28;
	uint local_20;
	uint local_1c;
	int local_18;
	int local_c;
	
	if (Ms->_miAnimType == '\x05') {
		spell = 0xc;
		aframe = (int)Ms->_miAnimFrame;
		local_18 = 0xf0;
		local_28 = 0;
		local_20 = 0;
		local_1c = 0;
		local_c = 1;
	}
	else {
		local_28 = SEXT14(Ms->_mimfnum);
		bVar1 = 4 < (int)local_28;
		if (bVar1) {
			local_28 = local_28 - 1 ^ 7;
		}
		local_20 = (uint)bVar1;
		bVar1 = 2 < (int)local_28;
		spell = 6;
		if (bVar1) {
			local_28 = local_28 & 1;
		}
		local_1c = (uint)bVar1;
		local_18 = 0x80;
		local_c = 0;
		aframe = (int)Ms->_miAnimFrame + -1;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,spell,aframe,0,local_28,0,local_20,local_1c,local_18,0x80,0x80,local_c)
	;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms /*$t1*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int OtPos /*$a2*/)
 // line 337, offset 0x80074b20
	/* begin block 1 */
		// Start line: 338
		// Start offset: 0x80074B20

		/* begin block 1.1 */
			// Start line: 338
			// Start offset: 0x80074B20

			/* begin block 1.1.1 */
				// Start line: 341
				// Start offset: 0x80074B78
				// Variables:
			// 		char xflip; // $t3
			// 		char yflip; // $t2
			// 		int frame; // $t0
			/* end block 1.1.1 */
			// End offset: 0x80074BE8
			// End Line: 353
		/* end block 1.1 */
		// End offset: 0x80074BE8
		// End Line: 353
	/* end block 1 */
	// End offset: 0x80074BE8
	// End Line: 353

	/* begin block 2 */
		// Start line: 785
	/* end block 2 */
	// End Line: 786

void FuncLARROW__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	int aframe;
	int spell;
	uint local_28;
	uint local_20;
	uint local_1c;
	
	if (Ms->_miAnimType == '\x1a') {
		spell = 8;
		aframe = (int)Ms->_miAnimFrame;
		local_28 = 0;
		local_20 = 0;
		local_1c = 0;
	}
	else {
		local_28 = SEXT14(Ms->_mimfnum);
		bVar1 = 4 < (int)local_28;
		if (bVar1) {
			local_28 = local_28 - 1 ^ 7;
		}
		local_20 = (uint)bVar1;
		bVar1 = 2 < (int)local_28;
		spell = 5;
		if (bVar1) {
			local_28 = local_28 & 1;
		}
		local_1c = (uint)bVar1;
		aframe = (int)Ms->_miAnimFrame + -1;
	}
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,spell,aframe,0,local_28,0,local_20,local_1c,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 357, offset 0x80074bf8
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x80074BF8
		// Variables:
	// 		char xflip; // $t2
	// 		char yflip; // $t1
	// 		int frame; // $t0
	/* end block 1 */
	// End offset: 0x80074C78
	// End Line: 370

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

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
						(ScrX,ScrY,OtPos,0xb,(int)Ms->_miAnimFrame,0,anim,0,(uint)bVar1,(uint)bVar2,0x80,0x80,
						 0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms /*$s1*/, int ScrX /*$s2*/, int ScrY /*$s3*/, int OtPos /*$s4*/)
 // line 373, offset 0x80074c88
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x80074C88
		// Variables:
	// 		char xflip; // $s6
	// 		char yflip; // $s7
	// 		int frame; // $s0
	// 		int sfx; // $s5
	/* end block 1 */
	// End offset: 0x80074D74
	// End Line: 388

	/* begin block 2 */
		// Start line: 858
	/* end block 2 */
	// End Line: 859

void FuncBONESPIRIT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	bool bVar2;
	uint anim;
	int sfx;
	
	anim = SEXT14(Ms->_mimfnum);
	sfx = 0;
	if (anim == 8) {
		sfx = Ms->_mirange + 0x13;
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
 // line 391, offset 0x80074da4
	/* begin block 1 */
		// Start line: 392
		// Start offset: 0x80074DA4
		// Variables:
	// 		char xflip; // $t2
	// 		char yflip; // $t1
	// 		int frame; // $t0
	/* end block 1 */
	// End offset: 0x80074E30
	// End Line: 404

	/* begin block 2 */
		// Start line: 896
	/* end block 2 */
	// End Line: 897

void FuncACID__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

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
						(ScrX,ScrY,OtPos,0,(int)Ms->_miAnimFrame,0,anim,0,(uint)bVar1,(uint)bVar2,0xe0,0xe0,0x80
						 ,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 407, offset 0x80074e40
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x80074E40
	/* end block 1 */
	// End offset: 0x80074E98
	// End Line: 409

	/* begin block 2 */
		// Start line: 929
	/* end block 2 */
	// End Line: 930

void FuncACIDSPLAT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,0xd,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 412, offset 0x80074ea8
	/* begin block 1 */
		// Start line: 413
		// Start offset: 0x80074EA8
	/* end block 1 */
	// End offset: 0x80074F00
	// End Line: 414

	/* begin block 2 */
		// Start line: 939
	/* end block 2 */
	// End Line: 940

void FuncACIDPUD__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,0xe,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0,0,0,0x80,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms /*$s3*/, int ScrX /*$s4*/, int ScrY /*$s5*/, int OtPos /*$s6*/)
 // line 417, offset 0x80074f10
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x80074F10
		// Variables:
	// 		unsigned char red; // $s1
	// 		unsigned char grn; // $s2
	// 		unsigned char blu; // $s0
	/* end block 1 */
	// End offset: 0x80075018
	// End Line: 427

	/* begin block 2 */
		// Start line: 949
	/* end block 2 */
	// End Line: 950

void FuncFLARE__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	byte bVar1;
	int SpinB;
	uchar SpinR;
	uchar SpinG;
	
	SpinR = '\0';
	SpinG = '\0';
	bVar1 = Ms->_miAnimType;
	SpinB = 0;
	if (bVar1 == 0x28) {
		SpinB = 0xf0;
		goto LAB_80074fd0;
	}
	if (bVar1 < 0x29) {
		if (bVar1 == 0x16) {
LAB_80074f8c:
			SpinR = -0x10;
			SpinG = '\0';
			SpinB = 0;
			goto LAB_80074fd0;
		}
	}
	else {
		if (bVar1 == 0x2a) {
			SpinR = -0x10;
			SpinG = -0x10;
			goto LAB_80074fd0;
		}
		if (bVar1 == 0x2c) goto LAB_80074f8c;
	}
	DBG_Error((char *)0x0,"source/MISPRINT.cpp",0x1a8);
LAB_80074fd0:
	DrawSpinner__FiiUcUcUciiibiT8
						(ScrX,ScrY,SpinR,SpinG,SpinB,0x18,0x48,(int)Ms->_miAnimFrame * 3,(void *)0x0,OtPos,
						 &DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms /*$s1*/, int ScrX /*$s4*/, int ScrY /*$s5*/, int OtPos /*$s6*/)
 // line 430, offset 0x80075044
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x80075044
		// Variables:
	// 		unsigned char red; // $s2
	// 		unsigned char grn; // $s3
	// 		unsigned char blu; // $s0
	/* end block 1 */
	// End offset: 0x8007515C
	// End Line: 440

	/* begin block 2 */
		// Start line: 977
	/* end block 2 */
	// End Line: 978

void FuncFLAREXP__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	byte bVar1;
	int SpinB;
	uchar SpinR;
	uchar SpinG;
	
	SpinR = '\0';
	SpinG = '\0';
	bVar1 = Ms->_miAnimType;
	SpinB = 0;
	if (bVar1 == 0x29) {
		SpinB = 0xf0;
		goto LAB_80075104;
	}
	if (bVar1 < 0x2a) {
		if (bVar1 == 0x17) {
LAB_800750c0:
			SpinR = -0x10;
			SpinG = '\0';
			SpinB = 0;
			goto LAB_80075104;
		}
	}
	else {
		if (bVar1 == 0x2b) {
			SpinR = -0x10;
			SpinG = -0x10;
			goto LAB_80075104;
		}
		if (bVar1 == 0x2d) goto LAB_800750c0;
	}
	DBG_Error((char *)0x0,"source/MISPRINT.cpp",0x1b5);
LAB_80075104:
	DrawSpinner__FiiUcUcUciiibiT8
						(ScrX,ScrY,SpinR,SpinG,SpinB,(int)Ms->_miAnimFrame * 4 + 0x18,
						 (int)Ms->_miAnimFrame * 8 + 0x48,(int)Ms->_miAnimFrame * 3,(void *)0x0,OtPos,
						 &DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 443, offset 0x80075188
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x80075188
	/* end block 1 */
	// End offset: 0x800751E0
	// End Line: 445

	/* begin block 2 */
		// Start line: 1005
	/* end block 2 */
	// End Line: 1006

void FuncCBOLT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,8,(int)Ms->_miAnimFrame,(int)Ms->_mimfnum,0,0x12,0,0,0x80,0x80,0x80,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 448, offset 0x800751f0
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x800751F0
	/* end block 1 */
	// End offset: 0x80075238
	// End Line: 450

	/* begin block 2 */
		// Start line: 1015
	/* end block 2 */
	// End Line: 1016

void FuncBOOM__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	uint uVar1;
	
	uVar1 = (uint)(byte)Ms->_miAnimFrame << 0x18;
	DrawExpl__Fiiiiiccc(ScrX,ScrY,(int)(((int)uVar1 >> 0x18) + (uVar1 >> 0x1f)) >> 1,OtPos,0x200,0,
											0x20,0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms /*$t0*/, int ScrX /*$a0*/, int ScrY /*$a1*/, int OtPos /*$a2*/)
 // line 453, offset 0x80075248
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x80075248

		/* begin block 1.1 */
			// Start line: 454
			// Start offset: 0x80075248

			/* begin block 1.1.1 */
				// Start line: 457
				// Start offset: 0x800752A8
				// Variables:
			// 		char xflip; // $t1
			// 		int frame; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80075304
			// End Line: 464
		/* end block 1.1 */
		// End offset: 0x80075304
		// End Line: 464
	/* end block 1 */
	// End offset: 0x80075304
	// End Line: 464

	/* begin block 2 */
		// Start line: 1025
	/* end block 2 */
	// End Line: 1026

void FuncELEMENT__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	bool bVar1;
	uint uVar2;
	int anim;
	
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
 // line 468, offset 0x80075314
	/* begin block 1 */
		// Start line: 469
		// Start offset: 0x80075314
	/* end block 1 */
	// End offset: 0x80075368
	// End Line: 470

	/* begin block 2 */
		// Start line: 1055
	/* end block 2 */
	// End Line: 1056

void FuncMISEXP__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	TempPrintMissile__FiiiiiiiiccUcUcUcc
						(ScrX,ScrY,OtPos,0xc,(int)Ms->_miAnimFrame,0,0,0,0,0,0xf0,0x80,0x80,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 473, offset 0x80075378
	/* begin block 1 */
		// Start line: 474
		// Start offset: 0x80075378
	/* end block 1 */
	// End offset: 0x80075378
	// End Line: 474

	/* begin block 2 */
		// Start line: 1067
	/* end block 2 */
	// End Line: 1068

void FuncRHINO__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms /*$s4*/, int x /*$s3*/, int y /*$s2*/, int OtPos /*stack -72*/)
 // line 478, offset 0x80075380
	/* begin block 1 */
		// Start line: 479
		// Start offset: 0x80075380
		// Variables:
	// 		int size; // $s0

		/* begin block 1.1 */
			// Start line: 479
			// Start offset: 0x80075380

			/* begin block 1.1.1 */
				// Start line: 480
				// Start offset: 0x800753C8
				// Variables:
			// 		struct CPlayer *test; // $s0
			// 		int rot; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800754B8
			// End Line: 488
		/* end block 1.1 */
		// End offset: 0x800754B8
		// End Line: 488

		/* begin block 1.2 */
			// Start line: 493
			// Start offset: 0x800754D4

			/* begin block 1.2.1 */
				// Start line: 493
				// Start offset: 0x800754DC
				// Variables:
			// 		struct POLY_GT4 *GT4; // $a1
			// 		struct TextDat *ThisDat; // stack offset -64
			// 		int xr1; // $a0
			// 		int yr1; // $v1
			// 		int xr2; // $a2
			// 		int yr2; // $a3
			// 		int radius; // $s1
			// 		int angle; // stack offset -56
			// 		unsigned int bright; // $v1
			// 		unsigned int r; // $s5
			// 		unsigned int g; // $s7
			// 		unsigned int b; // $s4
			// 		char flip; // $s6

				/* begin block 1.2.1.1 */
					// Start line: 510
					// Start offset: 0x8007554C
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x800756AC
				// End Line: 531

				/* begin block 1.2.1.2 */
					// Start line: 533
					// Start offset: 0x800756AC
					// Variables:
				// 		int i; // $s0
				// 		int i; // $s0
				/* end block 1.2.1.2 */
				// End offset: 0x80075874
				// End Line: 554
			/* end block 1.2.1 */
			// End offset: 0x80075874
			// End Line: 554
		/* end block 1.2 */
		// End offset: 0x80075874
		// End Line: 554
	/* end block 1 */
	// End offset: 0x80075874
	// End Line: 554

	/* begin block 2 */
		// Start line: 1075
	/* end block 2 */
	// End Line: 1076

void FuncFLASH__FP13MissileStructiii(MissileStruct *Ms,int x,int y,int OtPos)

{
	char cVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	CPlayer *this;
	uint uVar6;
	int iVar7;
	int iVar8;
	TextDat *this_00;
	ulong uVar9;
	POLY_GT4 *pPVar10;
	uchar uVar11;
	int iVar12;
	uint uVar13;
	uint uVar14;
	int iVar15;
	uchar uVar16;
	uchar uVar17;
	uint b;
	short sVar18;
	short sVar19;
	uchar uVar20;
	uchar uVar21;
	bool bVar22;
	int local_48;
	
	local_48 = OtPos;
	if (Ms->_micaster == 0) {
		this = GetPlayer__7CPlayeri((int)Ms->_misource);
		local_48 = GetLastOtPos__C7CPlayer(this);
		x = GetLastScrX__C7CPlayer(this);
		x = x + -2;
		y = GetLastScrY__C7CPlayer(this);
		y = y + 2;
		b = (int)Ms->_miAnimFrame * 5 & 0x3f;
		uVar6 = vecleny__Fii(0xc,b);
		iVar7 = veclenx__Fii(0x18,b);
		iVar8 = vecleny__Fii(0xc,b);
		iVar12 = (int)Ms->_miAnimFrame;
		iVar15 = iVar12;
		if (iVar12 < 0) {
			iVar15 = iVar12 + 3;
		}
		TempPrintMissile__FiiiiiiiiccUcUcUcc
							(x + iVar7 + 10,y + iVar8 + 0x20,local_48 + (~uVar6 >> 0x1f),0xf,
							 (iVar12 + (iVar15 >> 2) * -4) * 0x1000000 >> 0x18,0,0,0x12,0,0,0x40,0x40,0x80,1);
	}
	iVar15 = (int)Ms->_miAnimFrame * 0x10;
	if (0x26 < iVar15) {
		iVar15 = (int)Ms->_miAnimFrame * -0x10 + 0x4c;
	}
	if (0 < iVar15) {
		this_00 = GM_UseTexData__Fi(0);
		uVar9 = GU_GetRnd();
		cVar1 = Ms->_miAnimFrame;
		iVar7 = (uVar9 & 0x1f) - ((int)cVar1 * 4 + -0x80);
		uVar6 = (uint)(iVar7 * 0xa0) >> 8;
		iVar15 = iVar15 + 0x18;
		if (0xff < uVar6) {
			uVar6 = 0xff;
		}
		b = (uint)(iVar7 * 0xff) >> 8;
		if (0xff < b) {
			b = 0xff;
		}
		x = x + 3;
		y = y + -3;
		uVar14 = 0;
		do {
			pPVar10 = PrintGt4__7TextDatiiiiii(this_00,0x10a,x,y,0,local_48,0);
			pPVar10->tpage = pPVar10->tpage | 0x20;
			pPVar10->u1 = pPVar10->u1 + -1;
			pPVar10->u3 = pPVar10->u3 + -1;
			sVar2 = Circle[uVar14 - 8 & 0x3f];
			sVar3 = Circle[uVar14 & 0x3f];
			uVar13 = uVar14 + 8;
			sVar4 = Circle[uVar13 & 0x3f];
			sVar5 = Circle[uVar14 + 0x10 & 0x3f];
			sVar19 = (short)x;
			pPVar10->x0 = sVar19;
			sVar18 = (short)y;
			pPVar10->y0 = sVar18;
			pPVar10->x1 = sVar19;
			pPVar10->y1 = sVar18;
			uVar21 = (uchar)uVar6;
			pPVar10->r0 = uVar21;
			pPVar10->g0 = uVar21;
			uVar20 = (uchar)b;
			pPVar10->b0 = uVar20;
			pPVar10->r1 = uVar21;
			pPVar10->g1 = uVar21;
			pPVar10->b1 = uVar20;
			pPVar10->r2 = '\0';
			pPVar10->g2 = '\0';
			pPVar10->b2 = '\0';
			pPVar10->r3 = '\0';
			pPVar10->g3 = '\0';
			pPVar10->b3 = '\0';
			pPVar10->code = pPVar10->code & 0xfe | 2;
			pPVar10->x2 = sVar19 + (short)((uint)((int)sVar2 * iVar15) >> 8);
			pPVar10->y2 = sVar18 + (short)((int)sVar4 * iVar15 >> 9);
			pPVar10->x3 = sVar19 + (short)((uint)((int)sVar3 * iVar15) >> 8);
			pPVar10->y3 = sVar18 + (short)((int)sVar5 * iVar15 >> 9);
			uVar14 = uVar13;
		} while ((int)uVar13 < 0x40);
		bVar22 = false;
		iVar7 = 0;
		do {
			pPVar10 = PrintGt4__7TextDatiiiiii(this_00,0x10a,x,y,0,local_48,0);
			pPVar10->tpage = pPVar10->tpage | 0x20;
			pPVar10->u1 = pPVar10->u1 + -1;
			pPVar10->u3 = pPVar10->u3 + -1;
			uVar14 = (int)cVar1 * 3 + iVar7;
			sVar2 = Circle[uVar14 & 0x3f];
			sVar3 = Circle[uVar14 + 8 & 0x3f];
			sVar4 = Circle[uVar14 + 0x10 & 0x3f];
			sVar5 = (short)((int)sVar4 * iVar15 >> 9);
			if (bVar22) {
				pPVar10->x2 = sVar19 + (short)((uint)((int)Circle[uVar14 - 8 & 0x3f] * iVar15) >> 8);
				pPVar10->y2 = sVar18 + (short)((int)sVar3 * iVar15 >> 9);
				pPVar10->x3 = sVar19 + (short)((int)sVar2 * iVar15 >> 0xb);
				sVar5 = (short)((int)sVar4 * iVar15 >> 0xc);
			}
			else {
				pPVar10->x2 = sVar19 + (short)((int)Circle[uVar14 - 8 & 0x3f] * iVar15 >> 0xb);
				pPVar10->y2 = sVar18 + (short)((int)sVar3 * iVar15 >> 0xc);
				pPVar10->x3 = sVar19 + (short)((uint)((int)sVar2 * iVar15) >> 8);
			}
			pPVar10->x0 = sVar19;
			pPVar10->y0 = sVar18;
			pPVar10->x1 = sVar19;
			pPVar10->y1 = sVar18;
			pPVar10->y3 = sVar18 + sVar5;
			iVar7 = iVar7 + 8;
			pPVar10->r0 = uVar21;
			pPVar10->g0 = uVar21;
			pPVar10->b0 = uVar20;
			pPVar10->r1 = uVar21;
			pPVar10->g1 = uVar21;
			pPVar10->b1 = uVar20;
			uVar17 = (uchar)(uVar6 >> 2);
			pPVar10->r2 = uVar17;
			uVar16 = (uchar)(uVar6 >> 2);
			pPVar10->g2 = uVar16;
			uVar11 = (uchar)(b >> 2);
			pPVar10->b2 = uVar11;
			pPVar10->r3 = uVar17;
			pPVar10->g3 = uVar16;
			pPVar10->b3 = uVar11;
			pPVar10->code = pPVar10->code & 0xfe | 2;
			bVar22 = (bool)(bVar22 ^ 1);
		} while (iVar7 < 0x40);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$s0*/, int ScrY /*$s1*/, int OtPos /*$a3*/)
 // line 558, offset 0x800758a8
	/* begin block 1 */
		// Start line: 559
		// Start offset: 0x800758A8
	/* end block 1 */
	// End offset: 0x80075938
	// End Line: 564

	/* begin block 2 */
		// Start line: 1325
	/* end block 2 */
	// End Line: 1326

void FuncMANASHIELD__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	ChangeLightColour__Fii((int)plr[(int)Ms->_misource]._plid,(int)&DAT_000031f0);
	DrawSpinner__FiiUcUcUciiibiT8
						(ScrX + -4,ScrY + -8,'\0','\0',0x80,0x50,0x80,0,(void *)0x0,0xff,(void *)0x0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 567, offset 0x80075950
	/* begin block 1 */
		// Start line: 568
		// Start offset: 0x80075950
	/* end block 1 */
	// End offset: 0x80075950
	// End Line: 568

	/* begin block 2 */
		// Start line: 1348
	/* end block 2 */
	// End Line: 1349

void FuncFLASH2__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms /*$a0*/, int ScrX /*$a1*/, int ScrY /*$a2*/, int OtPos /*$a3*/)
 // line 571, offset 0x80075958
	/* begin block 1 */
		// Start line: 572
		// Start offset: 0x80075958
	/* end block 1 */
	// End offset: 0x8007597C
	// End Line: 573

	/* begin block 2 */
		// Start line: 1355
	/* end block 2 */
	// End Line: 1356

void FuncRESURRECTBEAM__FP13MissileStructiii(MissileStruct *Ms,int ScrX,int ScrY,int OtPos)

{
	ResurrectFX__Fiiii(ScrX + -4,((int)(((uint)ScrY >> 0x1f) + ScrY) >> 1) + 0x18,0x4000,OtPos);
	return;
}





