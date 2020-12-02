#include "THISDUST.H"
#include "DIALOG.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TrimCol__Fs(short col /*$v1*/)
 // line 112, offset 0x8008ad90
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x8008AD90
	/* end block 1 */
	// End offset: 0x8008ADC0
	// End Line: 116

	/* begin block 2 */
		// Start line: 224
	/* end block 2 */
	// End Line: 225

uchar TrimCol__Fs(short col)

{
	int iVar1;
	uchar uVar2;
	
	uVar2 = (uchar)col;
	iVar1 = (uint)(ushort)col << 0x10;
	if ((int)((uint)(ushort)col << 0x10) < 0) {
		uVar2 = '\0';
		iVar1 = 0;
	}
	if (0xff < iVar1 >> 0x10) {
		uVar2 = -1;
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// struct POLY_GT4 * /*$ra*/ DialogPrint__Fiiiiiiiiii(int Frm /*stack -144*/, int X /*$s0*/, int Y /*$s2*/, int SW /*$s3*/, int SH /*stack 16*/, int UW /*stack 20*/, int UH /*stack 24*/, int UOfs /*stack 28*/, int VOfs /*stack 32*/, int Trans /*stack 36*/)
 // line 206, offset 0x8008adc8
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x8008ADC8
		// Variables:
	// 		struct FRAME_HDR *Fr; // stack offset -136
	// 		struct POLY_GT4 *GT4; // $s1
	// 		struct POLY_FT4 *FT4; // $s0
	// 		struct TP_LOAD_HDR *Tp; // stack offset -128
	// 		int x0; // stack offset -120
	// 		int x1; // stack offset -112
	// 		int x2; // stack offset -104
	// 		int x3; // stack offset -96
	// 		int y0; // stack offset -88
	// 		int y1; // stack offset -80
	// 		int y2; // stack offset -72
	// 		int y3; // stack offset -64
	// 		int u0; // $s2
	// 		int u1; // $s3
	// 		int u2; // $s7
	// 		int u3; // $fp
	// 		int v0; // $s5
	// 		int v1; // $s4
	// 		int v2; // $s6
	// 		int v3; // stack offset -56
	// 		int U; // $v1
	// 		int V; // $a3
	// 		int W; // $a0
	// 		int H; // $a1

		/* begin block 1.1 */
			// Start line: 207
			// Start offset: 0x8008ADC8

			/* begin block 1.1.1 */
				// Start line: 219
				// Start offset: 0x8008AE24
			/* end block 1.1.1 */
			// End offset: 0x8008AEDC
			// End Line: 226
		/* end block 1.1 */
		// End offset: 0x8008AEDC
		// End Line: 226

		/* begin block 1.2 */
			// Start line: 299
			// Start offset: 0x8008B00C

			/* begin block 1.2.1 */
				// Start line: 300
				// Start offset: 0x8008B01C
				// Variables:
			// 		struct PAL *Pal; // $v1

				/* begin block 1.2.1.1 */
					// Start line: 301
					// Start offset: 0x8008B01C

					/* begin block 1.2.1.1.1 */
						// Start line: 308
						// Start offset: 0x8008B0E0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008B0E0
					// End Line: 312
				/* end block 1.2.1.1 */
				// End offset: 0x8008B10C
				// End Line: 315
			/* end block 1.2.1 */
			// End offset: 0x8008B1E8
			// End Line: 335

			/* begin block 1.2.2 */
				// Start line: 339
				// Start offset: 0x8008B22C
				// Variables:
			// 		struct PAL *Pal; // $v1
			// 		short G1; // $s0
			// 		short G2; // $s2
			// 		short G3; // $s3
			// 		short G4; // $s4

				/* begin block 1.2.2.1 */
					// Start line: 340
					// Start offset: 0x8008B22C

					/* begin block 1.2.2.1.1 */
						// Start line: 347
						// Start offset: 0x8008B2F0
					/* end block 1.2.2.1.1 */
					// End offset: 0x8008B2F0
					// End Line: 351
				/* end block 1.2.2.1 */
				// End offset: 0x8008B31C
				// End Line: 354
			/* end block 1.2.2 */
			// End offset: 0x8008B710
			// End Line: 383
		/* end block 1.2 */
		// End offset: 0x8008B710
		// End Line: 383
	/* end block 1 */
	// End offset: 0x8008B714
	// End Line: 388

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

POLY_GT4 *
DialogPrint__Fiiiiiiiiii
					(int Frm,int X,int Y,int SW,int SH,int UW,int UH,int UOfs,int VOfs,int Trans)

{
	uchar uVar1;
	char cVar2;
	char cVar3;
	TextDat *this;
	uchar uVar4;
	ushort uVar5;
	int iVar6;
	FRAME_HDR *pFVar7;
	PAL *pPVar8;
	uint uVar9;
	POLY_GT4 *pPVar10;
	int iVar11;
	ulong *puVar12;
	short col;
	int iVar13;
	int iVar14;
	short sVar15;
	int iVar16;
	POLY_GT4 *pPVar17;
	int iVar18;
	uchar uVar19;
	uchar uVar20;
	uchar uVar21;
	uchar uVar22;
	uchar uVar23;
	uint local_90;
	short local_68;
	short local_60;
	ushort local_48;
	short local_40;
	uchar local_38;
	
	pPVar17 = (POLY_GT4 *)0x0;
	local_90 = Frm & 0xffff;
	if (DialogGBack == '\x02') {
		iVar11 = (int)GShadeY;
		iVar6 = iVar11;
		if (iVar11 < 0) {
			iVar6 = iVar11 + 7;
		}
		iVar13 = (int)GShadeX;
		iVar14 = iVar13;
		if (iVar13 < 0) {
			iVar14 = iVar13 + 7;
		}
		if (((int)(uint)RandBTab[(iVar11 + (iVar6 >> 3) * -8) * 0x1000000 >> 0x18] >>
				 (iVar13 + (iVar14 >> 3) * -8 & 0x1fU) & 1U) != 0) {
			if (local_90 == 7) {
				local_90 = 0xe;
			}
			if (local_90 == 0xc) {
				local_90 = 0x11;
			}
			if (local_90 == 10) {
				local_90 = 0x10;
			}
			if (local_90 == 9) {
				local_90 = 0xf;
			}
		}
	}
	pFVar7 = GetFr__7TextDati(DialogTData,local_90);
	cVar3 = (char)((uint)pFVar7->Y >> 9);
	sVar15 = (short)X + (short)*(char *)&pFVar7->X;
	cVar2 = (char)pFVar7->Y;
	uVar4 = *(uchar *)((int)&pFVar7->FrOffset + 1);
	col = (short)Y + (short)*(char *)((int)&pFVar7->X + 1);
	uVar1 = *(uchar *)&pFVar7->FrOffset;
	if ((pFVar7->X & 0x2000000U) == 0) {
		local_60 = sVar15 + (short)SW;
		uVar19 = uVar1 + cVar2 + (char)UOfs;
		uVar21 = uVar4 + cVar3 + (char)VOfs;
		uVar20 = uVar4;
		uVar22 = uVar1;
		uVar23 = uVar19;
		local_38 = uVar21;
		local_68 = sVar15;
	}
	else {
		local_68 = sVar15 + -1;
		local_60 = sVar15 + (short)SW + -1;
		uVar20 = uVar4 + cVar2 + (char)UOfs + -1;
		uVar22 = uVar1 + cVar3 + (char)VOfs;
		uVar19 = uVar1;
		uVar21 = uVar20;
		uVar23 = uVar22;
		local_38 = uVar4;
	}
	local_48 = col + (short)SH;
	local_40 = col + (short)SH;
	if (DialogGBack == '\0') {
		pPVar10 = (POLY_GT4 *)PRIM_GetNextPolyFt4__Fv();
		pPVar10->u0 = uVar1;
		pPVar10->v0 = uVar20;
		*(uchar *)&pPVar10->x1 = uVar19;
		*(uchar *)((int)&pPVar10->x1 + 1) = uVar4;
		pPVar10->r2 = uVar22;
		pPVar10->g2 = uVar21;
		pPVar10->u2 = uVar23;
		pPVar10->v2 = local_38;
		this = DialogTData;
		pPVar10->x0 = local_68;
		pPVar10->y0 = col;
		*(short *)&pPVar10->r1 = local_60;
		*(short *)&pPVar10->b1 = col;
		*(short *)&pPVar10->u1 = local_68;
		pPVar10->tpage = local_48;
		pPVar10->x2 = local_60;
		pPVar10->y2 = local_40;
		pPVar8 = GetPal__7TextDati(this,(uint)*(byte *)((int)&pFVar7->X + 2));
		if ((pPVar8->InVram & 1) == 0) {
			DBG_Error((char *)0x0,"psxsrc/DIALOG.CPP",0x13a);
		}
		else {
			pPVar10->clut = *(ushort *)((int)&pPVar8->InVram + 2);
		}
		*(undefined *)((int)&pPVar10->tag + 3) = 9;
		pPVar10->code = ',';
		if (Trans != 0) {
			pPVar10->code = '.';
		}
		pPVar10->code = pPVar10->code & 0xfe;
		if (local_90 == 0x94) {
			pPVar10->r0 = DialogTRed;
			pPVar10->g0 = DialogTGreen;
			uVar4 = DialogTBlue;
			pPVar10->u2 = pPVar10->u0 + '\x01';
			*(uchar *)&pPVar10->x1 = pPVar10->u0 + '\x01';
			pPVar10->v2 = pPVar10->v0 + '\x01';
			pPVar10->b0 = uVar4;
			pPVar10->g2 = pPVar10->v0 + '\x01';
			uVar5 = *(ushort *)((int)&pFVar7->FrOffset + 2) | 0x40;
		}
		else {
			pPVar10->r0 = DialogRed;
			pPVar10->g0 = DialogGreen;
			pPVar10->b0 = DialogBlue;
			uVar5 = *(ushort *)((int)&pFVar7->FrOffset + 2);
		}
		pPVar10->y1 = uVar5;
		puVar12 = ThisOt + MY_DialogOTpos;
		pPVar10->tag = pPVar10->tag & 0xff000000 | *puVar12 & 0xffffff;
		uVar9 = *puVar12;
	}
	else {
		pPVar17 = PRIM_GetNextPolyGt4__Fv();
		pPVar17->u0 = uVar1;
		pPVar17->v0 = uVar20;
		pPVar17->u1 = uVar19;
		pPVar17->v1 = uVar4;
		pPVar17->u2 = uVar22;
		pPVar17->v2 = uVar21;
		pPVar17->u3 = uVar23;
		pPVar17->v3 = local_38;
		this = DialogTData;
		pPVar17->x0 = local_68;
		pPVar17->y0 = col;
		pPVar17->x1 = local_60;
		pPVar17->y1 = col;
		pPVar17->x2 = local_68;
		pPVar17->y2 = local_48;
		pPVar17->x3 = local_60;
		pPVar17->y3 = local_40;
		pPVar8 = GetPal__7TextDati(this,(uint)*(byte *)((int)&pFVar7->X + 2));
		if ((pPVar8->InVram & 1) == 0) {
			DBG_Error((char *)0x0,"psxsrc/DIALOG.CPP",0x161);
		}
		else {
			pPVar17->clut = *(ushort *)((int)&pPVar8->InVram + 2);
		}
		*(undefined *)((int)&pPVar17->tag + 3) = 0xc;
		pPVar17->code = '<';
		if (Trans != 0) {
			pPVar17->code = '>';
		}
		pPVar17->code = pPVar17->code & 0xfe;
		iVar11 = (int)GShadeX;
		iVar6 = iVar11;
		if (iVar11 < 0) {
			iVar6 = iVar11 + 7;
		}
		iVar14 = (int)GShadeY;
		iVar11 = (iVar11 + (iVar6 >> 3) * -8) * 0x1000000 >> 0x18;
		iVar6 = iVar14;
		if (iVar14 < 0) {
			iVar6 = iVar14 + 7;
		}
		iVar13 = iVar14 + 1;
		iVar6 = ((iVar14 + (iVar6 >> 3) * -8) * 0x1000000 >> 0x15) + iVar11;
		iVar16 = (int)(&GShadeTab)[iVar6];
		iVar18 = (int)s__800b8ad1[iVar6];
		iVar6 = iVar13;
		if (iVar13 < 0) {
			iVar6 = iVar14 + 8;
		}
		iVar11 = (iVar13 + (iVar6 >> 3) * -8) * 8 + iVar11;
		cVar2 = s__800b8ad1[iVar11];
		iVar6 = (int)(&GShadeTab)[iVar11];
		iVar11 = (int)cVar2;
		if (DialogGBack == '\x02') {
			uVar4 = TrimCol__Fs((short)(((uint)DialogRed - iVar16) * 0x10000 >> 0x10));
			pPVar17->r0 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogGreen - iVar16) * 0x10000 >> 0x10));
			pPVar17->g0 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogBlue - iVar16) * 0x10000 >> 0x10));
			pPVar17->b0 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogRed - iVar18) * 0x10000 >> 0x10));
			pPVar17->r1 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogGreen - iVar18) * 0x10000 >> 0x10));
			pPVar17->g1 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogBlue - iVar18) * 0x10000 >> 0x10));
			pPVar17->b1 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogRed - iVar6) * 0x10000 >> 0x10));
			pPVar17->r2 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogGreen - iVar6) * 0x10000 >> 0x10));
			pPVar17->g2 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogBlue - iVar6) * 0x10000 >> 0x10));
			pPVar17->b2 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogRed - iVar11) * 0x10000 >> 0x10));
			pPVar17->r3 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)DialogGreen - iVar11) * 0x10000 >> 0x10));
			pPVar17->g3 = uVar4;
			col = (ushort)DialogBlue - (short)cVar2;
		}
		else {
			uVar4 = TrimCol__Fs((short)(((uint)BACKR + iVar16) * 0x10000 >> 0x10));
			pPVar17->r0 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKG + iVar16) * 0x10000 >> 0x10));
			pPVar17->g0 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKB + iVar16) * 0x10000 >> 0x10));
			pPVar17->b0 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKR + iVar18) * 0x10000 >> 0x10));
			pPVar17->r1 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKG + iVar18) * 0x10000 >> 0x10));
			pPVar17->g1 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKB + iVar18) * 0x10000 >> 0x10));
			pPVar17->b1 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKR + iVar6) * 0x10000 >> 0x10));
			pPVar17->r2 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKG + iVar6) * 0x10000 >> 0x10));
			pPVar17->g2 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKB + iVar6) * 0x10000 >> 0x10));
			pPVar17->b2 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKR + iVar11) * 0x10000 >> 0x10));
			pPVar17->r3 = uVar4;
			uVar4 = TrimCol__Fs((short)(((uint)BACKG + iVar11) * 0x10000 >> 0x10));
			pPVar17->g3 = uVar4;
			col = (ushort)BACKB + (short)cVar2;
		}
		uVar4 = TrimCol__Fs(col);
		pPVar17->b3 = uVar4;
		iVar6 = MY_DialogOTpos;
		pPVar17->tpage = *(ushort *)((int)&pFVar7->FrOffset + 2);
		puVar12 = ThisOt + iVar6;
		pPVar17->tag = pPVar17->tag & 0xff000000 | *puVar12 & 0xffffff;
		uVar9 = *puVar12;
		pPVar10 = pPVar17;
	}
	*puVar12 = uVar9 & 0xff000000 | (uint)pPVar10 & 0xffffff;
	return pPVar17;
}



// decompiled code
// original method signature: 
// struct POLY_G4 * /*$ra*/ GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0 /*$s0*/, unsigned char g0 /*$s1*/, unsigned char b0 /*$s2*/, unsigned char r1 /*$s3*/, int g1 /*stack 16*/, int b1 /*stack 20*/, int r2 /*stack 24*/, int g2 /*stack 28*/, int b2 /*stack 32*/, int r3 /*stack 36*/, int g3 /*stack 40*/, int b3 /*stack 44*/)
 // line 393, offset 0x8008b748
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x8008B748
		// Variables:
	// 		struct POLY_G4 *G4; // $v0
	/* end block 1 */
	// End offset: 0x8008B84C
	// End Line: 405

	/* begin block 2 */
		// Start line: 1034
	/* end block 2 */
	// End Line: 1035

POLY_G4 * GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc
										(uchar r0,uchar g0,uchar b0,uchar r1,int g1,int b1,int r2,int g2,int b2,int r3,
										int g3,int b3)

{
	POLY_G4 *pPVar1;
	ulong *puVar2;
	
	pPVar1 = PRIM_GetNextPolyG4__Fv();
	*(undefined *)((int)&pPVar1->tag + 3) = 8;
	pPVar1->code = ':';
	pPVar1->r0 = r0;
	pPVar1->g0 = g0;
	pPVar1->b0 = b0;
	pPVar1->r1 = r1;
	pPVar1->g1 = (uchar)g1;
	pPVar1->b1 = (uchar)b1;
	pPVar1->r2 = (uchar)r2;
	pPVar1->g2 = (uchar)g2;
	pPVar1->b2 = (uchar)b2;
	pPVar1->r3 = (uchar)r3;
	pPVar1->g3 = (uchar)g3;
	pPVar1->b3 = (uchar)b3;
	puVar2 = ThisOt + MY_DialogOTpos;
	pPVar1->tag = pPVar1->tag & 0xff000000 | *puVar2 & 0xffffff;
	*puVar2 = *puVar2 & 0xff000000 | (uint)pPVar1 & 0xffffff;
	return pPVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DropShadows__Fiiii(int x /*stack -80*/, int y /*$s3*/, int w /*$s4*/, int h /*$fp*/)
 // line 408, offset 0x8008b880
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x8008B880
		// Variables:
	// 		struct POLY_G4 *G4; // $v0
	// 		unsigned char dbr; // $s2
	// 		unsigned char dbg; // $s1
	// 		unsigned char dbb; // $s0
	/* end block 1 */
	// End offset: 0x8008BAF0
	// End Line: 462

	/* begin block 2 */
		// Start line: 1072
	/* end block 2 */
	// End Line: 1073

void DropShadows__Fiiii(int x,int y,int w,int h)

{
	byte r0;
	byte g0;
	byte b0;
	short sVar1;
	POLY_G4 *pPVar2;
	uchar r0_00;
	uint g2;
	uint b1;
	uint g1;
	uint r3;
	short sVar3;
	short sVar4;
	uint r2;
	uint b2;
	short sVar5;
	short sVar6;
	short local_50;
	short local_40;
	short local_30;
	
	r0 = BACKR >> 1;
	r2 = (uint)r0;
	g0 = BACKG >> 1;
	g2 = (uint)g0;
	b0 = BACKB >> 1;
	b2 = (uint)b0;
	r3 = (uint)BACKR / 7;
	g1 = (uint)BACKG / 7;
	b1 = (uint)BACKB / 7;
	r0_00 = (uchar)r3;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc
										 (r0_00,(uchar)g1,(uchar)b1,r0_00,g1,b1,r2,g2,b2,r2,g2,b2);
	local_50 = (short)x;
	sVar3 = (short)y;
	pPVar2->y0 = sVar3;
	pPVar2->x0 = local_50;
	pPVar2->y1 = sVar3;
	sVar4 = local_50 + (short)w;
	local_40 = local_50 + 4;
	pPVar2->x1 = sVar4;
	sVar5 = sVar4 + -4;
	pPVar2->x2 = local_40;
	local_30 = sVar3 + 4;
	pPVar2->x3 = sVar5;
	pPVar2->y2 = local_30;
	pPVar2->y3 = local_30;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(r0,g0,b0,r0_00,g1,b1,r2,g2,b2,r3,g1,b1);
	pPVar2->x0 = sVar5;
	pPVar2->x1 = sVar4;
	pPVar2->y0 = local_30;
	pPVar2->y1 = sVar3;
	sVar1 = sVar3 + (short)h;
	sVar6 = sVar1 + -4;
	pPVar2->x2 = sVar5;
	pPVar2->y2 = sVar6;
	pPVar2->x3 = sVar4;
	pPVar2->y3 = sVar1;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(r0,g0,b0,r0,g2,b2,r3,g1,b1,r3,g1,b1);
	pPVar2->y0 = sVar6;
	pPVar2->x1 = sVar5;
	pPVar2->y1 = sVar6;
	pPVar2->x0 = local_40;
	pPVar2->y2 = sVar1;
	pPVar2->x3 = sVar4;
	pPVar2->y3 = sVar1;
	pPVar2->x2 = local_50;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc
										 (r0_00,(uchar)g1,(uchar)b1,r0,g2,b2,r3,g1,b1,r2,g2,b2);
	pPVar2->x0 = local_50;
	pPVar2->y0 = sVar3;
	pPVar2->x1 = local_40;
	pPVar2->x2 = local_50;
	pPVar2->y2 = sVar1;
	pPVar2->y1 = local_30;
	pPVar2->y3 = sVar6;
	pPVar2->x3 = local_40;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDialog__Fv()
 // line 476, offset 0x8008bb24
	/* begin block 1 */
		// Start line: 477
		// Start offset: 0x8008BB24

		/* begin block 1.1 */
			// Start line: 477
			// Start offset: 0x8008BB24
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x8008BB54
		// End Line: 479

		/* begin block 1.2 */
			// Start line: 481
			// Start offset: 0x8008BB54
			// Variables:
		// 		int y; // $s2
		// 		int i; // $s0

			/* begin block 1.2.1 */
				// Start line: 481
				// Start offset: 0x8008BB5C
				// Variables:
			// 		unsigned char bits; // $s0

				/* begin block 1.2.1.1 */
					// Start line: 483
					// Start offset: 0x8008BB68
					// Variables:
				// 		int x; // $s1
				/* end block 1.2.1.1 */
				// End offset: 0x8008BBA4
				// End Line: 488
			/* end block 1.2.1 */
			// End offset: 0x8008BBA4
			// End Line: 489
		/* end block 1.2 */
		// End offset: 0x8008BBB8
		// End Line: 490

		/* begin block 1.3 */
			// Start line: 492
			// Start offset: 0x8008BBB8
			// Variables:
		// 		int i; // $s2
		// 		int y; // $s2
		// 		int i; // $s0
		/* end block 1.3 */
		// End offset: 0x8008BC3C
		// End Line: 496
	/* end block 1 */
	// End offset: 0x8008BC3C
	// End Line: 496

	/* begin block 2 */
		// Start line: 1350
	/* end block 2 */
	// End Line: 1351

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDialog__Fv(void)

{
	ulong uVar1;
	int iVar2;
	uint uVar3;
	int *piVar4;
	int *piVar5;
	int iVar6;
	
	iVar2 = 0;
	do {
		iVar2 = iVar2 + 1;
		GU_GetRnd();
		iVar6 = 0;
	} while (iVar2 < 6);
	while (uVar3 = 0, iVar6 < 8) {
		iVar2 = 0;
		do {
			uVar1 = GU_GetRnd();
			if (uVar1 == ((uint)((ulonglong)uVar1 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar1 / 3) {
				uVar3 = uVar3 | 1;
			}
			iVar2 = iVar2 + 1;
			uVar3 = uVar3 << 1;
		} while (iVar2 < 8);
		RandBTab[iVar6] = (uchar)uVar3;
		iVar6 = iVar6 + 1;
	}
	iVar2 = 0;
	piVar4 = &Cxy;
	piVar5 = INT_ARRAY_800b8b14;
	do {
		iVar2 = iVar2 + 1;
		uVar1 = GU_GetRnd();
		*piVar4 = uVar1 + (int)((ulonglong)(uVar1 >> 5) * 0x24924929 >> 0x20) * -0xe0 + 0x10;
		uVar1 = GU_GetRnd();
		piVar4 = piVar4 + 2;
		*piVar5 = uVar1 % 0x90;
		piVar5 = (int *)((uint *)piVar5 + 2);
	} while (iVar2 < 0xe);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetSizes__6Dialog(struct Dialog *this /*$s0*/)
 // line 499, offset 0x8008bc5c
	/* begin block 1 */
		// Start line: 500
		// Start offset: 0x8008BC5C
		// Variables:
	// 		struct FRAME_HDR *Fr; // $v1
	/* end block 1 */
	// End offset: 0x8008BECC
	// End Line: 556

	/* begin block 2 */
		// Start line: 1399
	/* end block 2 */
	// End Line: 1400

void GetSizes__6Dialog(Dialog *this)

{
	FRAME_HDR *pFVar1;
	
	DialogTData = GM_UseTexData__Fi(0);
	DialogBackGfx = this->BackGfx;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBackGfx);
	DialogBorderGfx = this->BorderGfx;
	DialogBackW = pFVar1->Y & 0x1ff;
	DialogBackH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx);
	DialogBorderTLW = pFVar1->Y & 0x1ff;
	DialogBorderTLH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 2);
	DialogBorderTRW = pFVar1->Y & 0x1ff;
	DialogBorderTRH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 5);
	DialogBorderBLW = pFVar1->Y & 0x1ff;
	DialogBorderBLH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 7);
	DialogBorderBRW = pFVar1->Y & 0x1ff;
	DialogBorderBRH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 1);
	DialogBorderTW = pFVar1->Y & 0x1ff;
	DialogBorderTH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 6);
	DialogBorderBW = pFVar1->Y & 0x1ff;
	DialogBorderBH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 3);
	DialogBorderLW = pFVar1->Y & 0x1ff;
	DialogBorderLH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 4);
	DialogBevelGfx = this->BevelGfx;
	DialogBorderRW = pFVar1->Y & 0x1ff;
	DialogBorderRH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBevelGfx);
	DialogBevelCW = pFVar1->Y & 0x1ff;
	DialogBevelCH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBevelGfx + 1);
	DialogBevelUDW = pFVar1->Y & 0x1ff;
	DialogBevelUDH = (uint)pFVar1->Y >> 9 & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBevelGfx + 3);
	DialogBevelLRW = pFVar1->Y & 0x1ff;
	DialogBevelLRH = (uint)pFVar1->Y >> 9 & 0x1ff;
	MY_DialogOTpos = this->DialogOTpos;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Back__6Dialogiiii(struct Dialog *this /*$s2*/, int DX /*$s0*/, int DY /*$s1*/, int DW /*$s3*/, int DH /*stack 16*/)
 // line 569, offset 0x8008bee0
	/* begin block 1 */
		// Start line: 570
		// Start offset: 0x8008BEE0
		// Variables:
	// 		int X; // $fp
	// 		int Y; // $s7
	// 		int W; // stack offset -136
	// 		int H; // stack offset -128
	// 		int Bx; // $s2
	// 		int By; // $s4
	// 		int Xr; // $s3
	// 		int Yr; // $s6
	// 		int Xl; // $s1
	// 		int Yl; // $s5
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		struct RECT ClipRect; // stack offset -144

		/* begin block 1.1 */
			// Start line: 594
			// Start offset: 0x8008BF7C

			/* begin block 1.1.1 */
				// Start line: 601
				// Start offset: 0x8008BFBC

				/* begin block 1.1.1.1 */
					// Start line: 668
					// Start offset: 0x8008BFBC

					/* begin block 1.1.1.1.1 */
						// Start line: 673
						// Start offset: 0x8008BFCC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 674
							// Start offset: 0x8008BFCC
							// Variables:
						// 		int c; // $s0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 676
								// Start offset: 0x8008BFF0
								// Variables:
							// 		int fw; // $v0
							// 		int fh; // $v1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8008C0A8
							// End Line: 686
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008C0B4
						// End Line: 688
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008C0B4
					// End Line: 688
				/* end block 1.1.1.1 */
				// End offset: 0x8008C0B4
				// End Line: 688
			/* end block 1.1.1 */
			// End offset: 0x8008C7B8
			// End Line: 821
		/* end block 1.1 */
		// End offset: 0x8008C7B8
		// End Line: 821
	/* end block 1 */
	// End offset: 0x8008CFC4
	// End Line: 995

	/* begin block 2 */
		// Start line: 1613
	/* end block 2 */
	// End Line: 1614

/* WARNING: Could not reconcile some variable overlaps */

void Back__6Dialogiiii(Dialog *this,int DX,int DY,int DW,int DH)

{
	uchar uVar1;
	FRAME_HDR *pFVar2;
	POLY_FT4 *pPVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int SH;
	uint SW;
	uint local_a8;
	int SW_00;
	int FrNum;
	uint UW;
	uint UH;
	int local_98;
	int local_94;
	RECT local_90;
	uint local_88;
	uint local_80;
	int local_78;
	int local_70;
	int local_50;
	
	if (qtextflag != '\0') {
		PRIM_FullScreen__Fi(MY_DialogOTpos + 2);
	}
	local_88._0_2_ = (short)DW;
	local_90.w = (short)local_88;
	DialogGBack = '\0';
	local_90.x = (short)DX;
	local_90.y = (short)DY;
	local_80 = DH;
	local_80._0_2_ = (short)DH;
	local_90.h = (short)local_80;
	local_88 = DW;
	GetSizes__6Dialog(this);
	if (DialogBackGfx == 0) {
		return;
	}
	if (DialogBackGfx == 0x94) {
		DialogGBack = '\0';
		local_94 = 1;
		FrNum = 0x94;
		SH = DX;
		local_98 = DY;
		SW = local_88;
		local_a8 = local_80;
		UW = 1;
		UH = 1;
LAB_8008c7b0:
		DialogPrint__Fiiiiiiiiii(FrNum,SH,local_98,SW,local_a8,UW,UH,0,0,local_94);
	}
	else {
		DialogGBack = '\x01';
		if (DialogBackGfx == 5) {
			DropShadows__Fiiii(DX,DY,local_88,local_80);
			SW = 0;
			piVar8 = &Cxy;
			while ((int)SW < 0xe) {
				FrNum = ((int)(SW + (SW >> 0x1f)) >> 1) + 0x22;
				pFVar2 = GetFr__7TextDati(DialogTData,FrNum);
				if (((int)(*piVar8 + (pFVar2->Y & 0x1ffU)) < (int)local_88) &&
					 ((int)(INT_ARRAY_800b8b14[SW * 2] + ((uint)pFVar2->Y >> 9 & 0x1ff)) < (int)local_80)) {
					pPVar3 = PrintFt4__7TextDatiiiiii
														 (DialogTData,FrNum,DX + *piVar8,DY + INT_ARRAY_800b8b14[SW * 2],SW & 1,
															MY_DialogOTpos,0);
					pPVar3->r0 = BACKR;
					pPVar3->g0 = BACKG;
					uVar1 = BACKB;
					pPVar3->code = pPVar3->code & 0xfe | 2;
					pPVar3->b0 = uVar1;
				}
				piVar8 = piVar8 + 2;
				SW = SW + 1;
			}
		}
		FrNum = DialogBackH;
		GShadeX = '\0';
		local_98 = ((int)(local_88 + (local_88 >> 0x1f)) >> 1) -
							 ((int)(DialogBackW + ((uint)DialogBackW >> 0x1f)) >> 1);
		iVar7 = ((int)(local_80 + (local_80 >> 0x1f)) >> 1) -
						((int)(DialogBackH + ((uint)DialogBackH >> 0x1f)) >> 1);
		if ((int)local_88 < DialogBackW) {
			if ((int)local_80 < DialogBackH) {
				SW = (int)local_88 % DialogBackW;
				local_a8 = (int)local_80 % DialogBackH;
				GShadeY = '\0';
				GShadeX = '\0';
				local_94 = 0;
				FrNum = DialogBackGfx;
				SH = DX;
				local_98 = DY;
				UW = SW;
				UH = local_a8;
			}
			else {
				SW = (int)local_88 % DialogBackW;
				SW_00 = iVar7 % DialogBackH;
				GShadeY = '\0';
				GShadeX = '\0';
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY,SW,SW_00,SW,SW_00,0,0,0);
				local_98 = local_80 + SW_00 * -2;
				SH = 0;
				local_94 = 0;
				GShadeY = GShadeY + '\x01';
				if (0 < local_98 / DialogBackH) {
					do {
						DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY + SW_00,SW,DialogBackH,SW,0,0,0,0);
						local_94 = local_94 + 1;
						GShadeY = GShadeY + '\x01';
						SW_00 = SW_00 + DialogBackH;
					} while (local_94 < local_98 / DialogBackH);
				}
LAB_8008c7a0:
				local_94 = 0;
				SH = DX + SH;
				local_a8 = iVar7 % FrNum + (local_80 & 1);
				FrNum = DialogBackGfx;
				local_98 = DY + SW_00;
				UW = SW;
				UH = local_a8;
			}
			goto LAB_8008c7b0;
		}
		if ((int)local_80 < DialogBackH) {
			local_98 = local_98 % DialogBackW;
			local_a8 = (int)local_80 % DialogBackH;
			GShadeY = '\0';
			GShadeX = '\0';
			DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY,local_98,local_a8,local_98,local_a8,0,0,0);
			FrNum = local_88 + local_98 * -2;
			iVar7 = 0;
			GShadeX = GShadeX + '\x01';
			SH = local_98;
			if (0 < FrNum / DialogBackW) {
				do {
					DialogPrint__Fiiiiiiiiii
										(DialogBackGfx,DX + SH,DY,DialogBackW,local_a8,DialogBackW,local_a8,0,0,0);
					iVar7 = iVar7 + 1;
					GShadeX = GShadeX + '\x01';
					SH = SH + DialogBackW;
				} while (iVar7 < FrNum / DialogBackW);
			}
			SH = DX + SH;
			local_94 = 0;
			SW = local_98 + (local_88 & 1);
			FrNum = DialogBackGfx;
			local_98 = DY;
			UW = SW;
			UH = local_a8;
			goto LAB_8008c7b0;
		}
		local_94 = iVar7 % DialogBackH;
		GShadeY = '\0';
		local_98 = local_98 % DialogBackW;
		SW_00 = 0;
		if (0 < local_94) {
			GShadeX = '\0';
			if (0 < local_98) {
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY,local_98,local_94,local_98,local_94,0,0,0);
			}
			GShadeX = GShadeX + '\x01';
			SH = local_98;
			if (DialogBackW <= (int)local_88) {
				SW_00 = local_88 + local_98 * -2;
				iVar5 = 0;
				SH = local_98;
				if (0 < SW_00 / DialogBackW) {
					do {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX + SH,DY,DialogBackW,local_94,DialogBackW,local_94,0,0,0);
						iVar5 = iVar5 + 1;
						GShadeX = GShadeX + '\x01';
						SH = SH + DialogBackW;
					} while (iVar5 < SW_00 / DialogBackW);
				}
			}
			if (0 < local_98) {
				SW_00 = local_98 + (local_88 & 1);
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX + SH,DY,SW_00,local_94,SW_00,local_94,0,0,0);
			}
			GShadeY = GShadeY + '\x01';
			SW_00 = local_94;
		}
		if (DialogBackH <= (int)local_80) {
			SH = local_80 + local_94 * -2;
			iVar5 = 0;
			if (0 < SH / DialogBackH) {
				local_50 = local_88 + local_98 * -2;
				local_70 = local_98 + (local_88 & 1);
				local_78 = SH;
				do {
					GShadeX = '\0';
					if (0 < local_98) {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX,DY + SW_00,local_98,DialogBackH,local_98,DialogBackH,0,0,0);
					}
					GShadeX = GShadeX + '\x01';
					SH = local_98;
					if ((DialogBackW <= (int)local_88) &&
						 (iVar6 = 0, SH = local_98, 0 < local_50 / DialogBackW)) {
						iVar4 = local_88 + local_98 * -2;
						SH = local_98;
						do {
							DialogPrint__Fiiiiiiiiii
												(DialogBackGfx,DX + SH,DY + SW_00,DialogBackW,DialogBackH,DialogBackW,
												 DialogBackH,0,0,0);
							iVar6 = iVar6 + 1;
							GShadeX = GShadeX + '\x01';
							SH = SH + DialogBackW;
						} while (iVar6 < iVar4 / DialogBackW);
					}
					if (0 < local_98) {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX + SH,DY + SW_00,local_70,DialogBackH,local_70,DialogBackH,0,
											 0,0);
					}
					iVar5 = iVar5 + 1;
					GShadeY = GShadeY + '\x01';
					SW_00 = SW_00 + DialogBackH;
				} while (iVar5 < local_78 / DialogBackH);
			}
		}
		if (0 < local_94) {
			GShadeX = '\0';
			if (0 < local_98) {
				SH = local_94 + (local_80 & 1);
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY + SW_00,local_98,SH,local_98,SH,0,0,0);
			}
			GShadeX = GShadeX + '\x01';
			SH = local_98;
			if (DialogBackW <= (int)local_88) {
				iVar5 = local_88 + local_98 * -2;
				iVar6 = 0;
				SH = local_98;
				if (0 < iVar5 / DialogBackW) {
					local_94 = local_94 + (local_80 & 1);
					SH = local_98;
					do {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX + SH,DY + SW_00,DialogBackW,local_94,DialogBackW,local_94,0,
											 0,0);
						iVar6 = iVar6 + 1;
						GShadeX = GShadeX + '\x01';
						SH = SH + DialogBackW;
					} while (iVar6 < iVar5 / DialogBackW);
				}
			}
			if (0 < local_98) {
				SW = local_98 + (local_88 & 1);
				goto LAB_8008c7a0;
			}
		}
	}
	DialogGBack = '\0';
	if (DialogBorderGfx != 0x12) {
		DialogGBack = '\x02';
	}
	pPVar3 = PrintFt4__7TextDatiiiiii(DialogTData,DialogBorderGfx,DX + -1,DY + -1,0,MY_DialogOTpos,0);
	pPVar3->r0 = DialogRed;
	pPVar3->g0 = DialogGreen;
	uVar1 = DialogBlue;
	pPVar3->code = pPVar3->code & 0xfc;
	pPVar3->b0 = uVar1;
	pPVar3 = PrintFt4__7TextDatiiiiii
										 (DialogTData,DialogBorderGfx + 2,DX + local_88,DY + -1,0,MY_DialogOTpos,0);
	pPVar3->r0 = DialogRed;
	pPVar3->g0 = DialogGreen;
	uVar1 = DialogBlue;
	pPVar3->code = pPVar3->code & 0xfc;
	pPVar3->b0 = uVar1;
	pPVar3 = PrintFt4__7TextDatiiiiii
										 (DialogTData,DialogBorderGfx + 5,DX + -1,DY + local_80,0,MY_DialogOTpos,0);
	pPVar3->r0 = DialogRed;
	pPVar3->g0 = DialogGreen;
	pPVar3->b0 = DialogBlue;
	pPVar3->code = pPVar3->code & 0xfd;
	pPVar3->code = pPVar3->code & 0xfe;
	pPVar3 = PrintFt4__7TextDatiiiiii
										 (DialogTData,DialogBorderGfx + 7,DX + local_88,DY + local_80,0,MY_DialogOTpos,0
										 );
	pPVar3->r0 = DialogRed;
	pPVar3->g0 = DialogGreen;
	pPVar3->b0 = DialogBlue;
	pPVar3->code = pPVar3->code & 0xfd;
	pPVar3->code = pPVar3->code & 0xfe;
	GShadeX = '\x01';
	GShadeY = '\x01';
	if ((DialogBorderGfx == 0x12) || (DialogBorderGfx == 0x1a)) {
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 1,DX,DY - DialogBorderTH,local_88,DialogBorderTH,0,0,-1,0,0);
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 6,DX,DY + local_80,local_88,DialogBorderBH,0,0,0,-1,0);
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,local_80,0,0,0,-1,0);
		local_98 = -1;
		SW = local_80;
		FrNum = 0;
		local_a8 = 0;
	}
	else {
		if ((int)local_88 < DialogBorderTW) {
			FrNum = (int)local_88 % DialogBorderTW;
			GShadeX = '\x01';
			if (0 < FrNum) {
				GShadeY = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 1,DX,DY - DialogBorderTH,FrNum,DialogBorderTH,FrNum,
									 DialogBorderTH,0,0,0);
				local_98 = DX;
				goto LAB_8008ccc4;
			}
		}
		else {
			FrNum = (((int)(local_88 + (local_88 >> 0x1f)) >> 1) -
							((int)(DialogBorderTW + ((uint)DialogBorderTW >> 0x1f)) >> 1)) % DialogBorderTW;
			GShadeX = '\x01';
			if (0 < FrNum) {
				GShadeY = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 1,DX,DY - DialogBorderTH,FrNum,DialogBorderTH,FrNum,
									 DialogBorderTH,0,0,0);
				GShadeY = '\x03';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 6,DX,DY + local_80,FrNum,DialogBorderBH,FrNum,DialogBorderBH,0,
									 0,0);
			}
			GShadeX = GShadeX + '\x01';
			local_98 = FrNum;
			if ((DialogBorderTW < (int)local_88) &&
				 (iVar7 = 0, local_98 = FrNum, 0 < (int)(local_88 - FrNum) / DialogBorderTW)) {
				do {
					GShadeY = '\x01';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 1,DX + local_98,DY - DialogBorderTH,DialogBorderTW,
										 DialogBorderTH,DialogBorderTW,DialogBorderTH,0,0,0);
					GShadeY = '\x03';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 6,DX + local_98,DY + local_80,DialogBorderBW,DialogBorderBH,
										 DialogBorderBW,DialogBorderBH,0,0,0);
					iVar7 = iVar7 + 1;
					GShadeX = GShadeX + '\x01';
					local_98 = local_98 + DialogBorderTW;
				} while (iVar7 < (int)(local_88 - FrNum) / DialogBorderTW);
			}
			FrNum = local_88 - local_98;
			if (0 < FrNum) {
				GShadeY = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 1,DX + local_98,DY - DialogBorderTH,FrNum,DialogBorderTH,FrNum,
									 DialogBorderTH,0,0,0);
				local_98 = DX + local_98;
LAB_8008ccc4:
				GShadeY = '\x03';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 6,local_98,DY + local_80,FrNum,DialogBorderBH,FrNum,
									 DialogBorderBH,0,0,0);
			}
		}
		GShadeX = '\x01';
		if ((int)local_80 < DialogBorderLH) {
			SW = (int)local_80 % DialogBorderLH;
			GShadeX = '\x01';
			GShadeY = '\x06';
			DialogPrint__Fiiiiiiiiii
								(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,SW,DialogBorderLW,SW,0,0,
								 0);
		}
		else {
			FrNum = (((int)(local_80 + (local_80 >> 0x1f)) >> 1) -
							((int)(DialogBorderLH + ((uint)DialogBorderLH >> 0x1f)) >> 1)) % DialogBorderLH;
			GShadeY = '\x01';
			if (0 < FrNum) {
				GShadeX = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,FrNum,DialogBorderLW,
									 FrNum,0,0,0);
				GShadeX = '\x03';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 4,DX + local_88,DY,DialogBorderRW,FrNum,DialogBorderRW,FrNum,0,
									 0,0);
			}
			GShadeY = GShadeY + '\x01';
			local_98 = FrNum;
			if ((DialogBorderLH < (int)local_80) &&
				 (iVar7 = 0, local_98 = FrNum, 0 < (int)(local_80 - FrNum) / DialogBorderLH)) {
				do {
					GShadeX = '\x01';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 3,DX - DialogBorderLW,DY + local_98,DialogBorderLW,
										 DialogBorderLH,DialogBorderLW,DialogBorderLH,0,0,0);
					GShadeX = '\x03';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 4,DX + local_88,DY + local_98,DialogBorderRW,DialogBorderRH,
										 DialogBorderRW,DialogBorderRH,0,0,0);
					iVar7 = iVar7 + 1;
					GShadeY = GShadeY + '\x01';
					local_98 = local_98 + DialogBorderLH;
				} while (iVar7 < (int)(local_80 - FrNum) / DialogBorderLH);
			}
			SW = local_80 - local_98;
			DY = DY + local_98;
			if ((int)SW < 1) goto LAB_8008cfa4;
			GShadeX = '\x01';
			DialogPrint__Fiiiiiiiiii
								(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,SW,DialogBorderLW,SW,0,0,
								 0);
		}
		GShadeX = '\x03';
		local_98 = 0;
		FrNum = DialogBorderRW;
		local_a8 = SW;
	}
	DialogPrint__Fiiiiiiiiii
						(DialogBorderGfx + 4,DX + local_88,DY,DialogBorderRW,SW,FrNum,local_a8,0,local_98,0);
LAB_8008cfa4:
	if (qtextflag != '\0') {
		PRIM_Clip__FP4RECTi(&local_90,MY_DialogOTpos + 1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Line__6Dialogiii(struct Dialog *this /*$a0*/, int DX /*$s3*/, int DY /*$s4*/, int DW /*$s2*/)
 // line 999, offset 0x8008cff8
	/* begin block 1 */
		// Start line: 1000
		// Start offset: 0x8008CFF8
		// Variables:
	// 		int X; // $s5
	// 		int Y; // $s6
	// 		int W; // $s7
	// 		int Bx; // $s1
	// 		int Xr; // $s0
	// 		int Xl; // $s0
	// 		struct RECT ClipRect; // stack offset -64
	/* end block 1 */
	// End offset: 0x8008D1F8
	// End Line: 1088

	/* begin block 2 */
		// Start line: 2587
	/* end block 2 */
	// End Line: 2588

void Line__6Dialogiii(Dialog *this,int DX,int DY,int DW)

{
	int iVar1;
	int iVar2;
	int SW;
	
	DialogGBack = '\0';
	GetSizes__6Dialog(this);
	DialogGBack = '\0';
	if (DialogBorderGfx != 0x12) {
		DialogGBack = '\x02';
	}
	GShadeY = '\x01';
	if (DW < DialogBorderTW) {
		DW = DW % DialogBorderTW;
		GShadeX = '\x01';
	}
	else {
		SW = (((int)(DW + ((uint)DW >> 0x1f)) >> 1) -
				 ((int)(DialogBorderTW + ((uint)DialogBorderTW >> 0x1f)) >> 1)) % DialogBorderTW;
		GShadeX = '\x01';
		if (0 < SW) {
			GShadeY = '\x01';
			DialogPrint__Fiiiiiiiiii
								(DialogBorderGfx + 1,DX,DY - DialogBorderTH,SW,DialogBorderTH,SW,DialogBorderTH,0,0,
								 0);
		}
		GShadeX = GShadeX + '\x01';
		if (DialogBorderTW < DW) {
			iVar1 = DW - SW;
			iVar2 = 0;
			if (0 < iVar1 / DialogBorderTW) {
				do {
					GShadeY = '\x01';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 1,DX + SW,DY - DialogBorderTH,DialogBorderTW,DialogBorderTH,
										 DialogBorderTW,DialogBorderTH,0,0,0);
					iVar2 = iVar2 + 1;
					GShadeX = GShadeX + '\x01';
					SW = SW + DialogBorderTW;
				} while (iVar2 < iVar1 / DialogBorderTW);
			}
		}
		DW = DW - SW;
		DX = DX + SW;
	}
	if (0 < DW) {
		GShadeY = '\x01';
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 1,DX,DY - DialogBorderTH,DW,DialogBorderTH,DW,DialogBorderTH,0,0,0)
		;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetOTpos__6Dialogi(struct Dialog *this /*$a0*/, int OT /*$a1*/)
 // line 1099, offset 0x8008d228
	/* begin block 1 */
		// Start line: 1100
		// Start offset: 0x8008D228
		// Variables:
	// 		int OldOT; // $v0
	/* end block 1 */
	// End offset: 0x8008D234
	// End Line: 1104

	/* begin block 2 */
		// Start line: 2809
	/* end block 2 */
	// End Line: 2810

int SetOTpos__6Dialogi(Dialog *this,int OT)

{
	int iVar1;
	
	iVar1 = this->DialogOTpos;
	this->DialogOTpos = OT;
	MY_DialogOTpos = OT;
	return iVar1;
}





