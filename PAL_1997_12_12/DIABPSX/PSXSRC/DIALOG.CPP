#include "THISDUST.H"
#include "DIALOG.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TrimCol__Fs(short col /*$v1*/)
 // line 110, offset 0x800850b4
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x800850B4
	/* end block 1 */
	// End offset: 0x800850E4
	// End Line: 114

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

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
 // line 204, offset 0x800850ec
	/* begin block 1 */
		// Start line: 205
		// Start offset: 0x800850EC
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
	// 		int U; // $a2
	// 		int V; // $a1
	// 		int W; // $a0
	// 		int H; // $a3

		/* begin block 1.1 */
			// Start line: 205
			// Start offset: 0x800850EC

			/* begin block 1.1.1 */
				// Start line: 217
				// Start offset: 0x80085148
			/* end block 1.1.1 */
			// End offset: 0x80085200
			// End Line: 224
		/* end block 1.1 */
		// End offset: 0x80085200
		// End Line: 224

		/* begin block 1.2 */
			// Start line: 297
			// Start offset: 0x80085328

			/* begin block 1.2.1 */
				// Start line: 298
				// Start offset: 0x80085338
				// Variables:
			// 		struct PAL *Pal; // $v1

				/* begin block 1.2.1.1 */
					// Start line: 299
					// Start offset: 0x80085338

					/* begin block 1.2.1.1.1 */
						// Start line: 306
						// Start offset: 0x800853FC
					/* end block 1.2.1.1.1 */
					// End offset: 0x800853FC
					// End Line: 310
				/* end block 1.2.1.1 */
				// End offset: 0x80085428
				// End Line: 313
			/* end block 1.2.1 */
			// End offset: 0x80085504
			// End Line: 333

			/* begin block 1.2.2 */
				// Start line: 337
				// Start offset: 0x80085548
				// Variables:
			// 		struct PAL *Pal; // $v1
			// 		short G1; // $s0
			// 		short G2; // $s2
			// 		short G3; // $s3
			// 		short G4; // $s4

				/* begin block 1.2.2.1 */
					// Start line: 338
					// Start offset: 0x80085548

					/* begin block 1.2.2.1.1 */
						// Start line: 345
						// Start offset: 0x8008560C
					/* end block 1.2.2.1.1 */
					// End offset: 0x8008560C
					// End Line: 349
				/* end block 1.2.2.1 */
				// End offset: 0x80085638
				// End Line: 352
			/* end block 1.2.2 */
			// End offset: 0x80085A2C
			// End Line: 381
		/* end block 1.2 */
		// End offset: 0x80085A2C
		// End Line: 381
	/* end block 1 */
	// End offset: 0x80085A30
	// End Line: 386

	/* begin block 2 */
		// Start line: 408
	/* end block 2 */
	// End Line: 409

POLY_GT4 *
DialogPrint__Fiiiiiiiiii
					(int Frm,int X,int Y,int SW,int SH,int UW,int UH,int UOfs,int VOfs,int Trans)

{
	uchar uVar1;
	char cVar2;
	char cVar3;
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
			if (local_90 == 0x1d) {
				local_90 = 0x24;
			}
			if (local_90 == 0x22) {
				local_90 = 0x27;
			}
			if (local_90 == 0x20) {
				local_90 = 0x26;
			}
			if (local_90 == 0x1f) {
				local_90 = 0x25;
			}
		}
	}
	pFVar7 = GetFr__7TextDati(DialogTData,local_90);
	cVar2 = (char)*(undefined2 *)((int)&pFVar7->X + 2);
	sVar15 = (short)X + (short)*(char *)&pFVar7->X;
	col = (short)Y + (short)*(char *)((int)&pFVar7->X + 1);
	uVar4 = *(uchar *)((int)&pFVar7->FrOffset + 1);
	uVar1 = *(uchar *)&pFVar7->FrOffset;
	cVar3 = (char)pFVar7->Y;
	if ((pFVar7->Y & 0x200U) == 0) {
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
		pPVar10->x0 = local_68;
		pPVar10->y0 = col;
		*(short *)&pPVar10->r1 = local_60;
		*(short *)&pPVar10->b1 = col;
		*(short *)&pPVar10->u1 = local_68;
		pPVar10->tpage = local_48;
		pPVar10->x2 = local_60;
		pPVar10->y2 = local_40;
		pPVar8 = GetPal__7TextDati(DialogTData,(uint)pFVar7->X >> 0x19);
		if ((pPVar8->InVram & 1) == 0) {
			DBG_Error((char *)0x0,"psxsrc/DIALOG.CPP",0x138);
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
		if (local_90 == 0xc6) {
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
		pPVar17->x0 = local_68;
		pPVar17->y0 = col;
		pPVar17->x1 = local_60;
		pPVar17->y1 = col;
		pPVar17->x2 = local_68;
		pPVar17->y2 = local_48;
		pPVar17->x3 = local_60;
		pPVar17->y3 = local_40;
		pPVar8 = GetPal__7TextDati(DialogTData,(uint)pFVar7->X >> 0x19);
		if ((pPVar8->InVram & 1) == 0) {
			DBG_Error((char *)0x0,"psxsrc/DIALOG.CPP",0x15f);
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
		iVar18 = (int)s__800a95f5[iVar6];
		iVar6 = iVar13;
		if (iVar13 < 0) {
			iVar6 = iVar14 + 8;
		}
		iVar11 = (iVar13 + (iVar6 >> 3) * -8) * 8 + iVar11;
		cVar2 = s__800a95f5[iVar11];
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
 // line 391, offset 0x80085a64
	/* begin block 1 */
		// Start line: 392
		// Start offset: 0x80085A64
		// Variables:
	// 		struct POLY_G4 *G4; // $v0
	/* end block 1 */
	// End offset: 0x80085B68
	// End Line: 403

	/* begin block 2 */
		// Start line: 1017
	/* end block 2 */
	// End Line: 1018

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
// void /*$ra*/ DropShadows__Fiiii(int x /*stack -80*/, int y /*$s4*/, int w /*$s2*/, int h /*$fp*/)
 // line 406, offset 0x80085b9c
	/* begin block 1 */
		// Start line: 407
		// Start offset: 0x80085B9C
		// Variables:
	// 		struct POLY_G4 *G4; // $v0
	// 		unsigned char dbr; // $s3
	// 		unsigned char dbg; // $s1
	// 		unsigned char dbb; // $s0
	/* end block 1 */
	// End offset: 0x80085E0C
	// End Line: 460

	/* begin block 2 */
		// Start line: 1055
	/* end block 2 */
	// End Line: 1056

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
	short sVar3;
	uint r3;
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
	sVar4 = (short)y;
	pPVar2->y0 = sVar4;
	pPVar2->x0 = local_50;
	pPVar2->y1 = sVar4;
	sVar3 = local_50 + (short)w + -1;
	local_40 = local_50 + 4;
	pPVar2->x1 = sVar3;
	sVar5 = sVar3 + -4;
	pPVar2->x2 = local_40;
	local_30 = sVar4 + 4;
	pPVar2->x3 = sVar5;
	pPVar2->y2 = local_30;
	pPVar2->y3 = local_30;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(r0,g0,b0,r0_00,g1,b1,r2,g2,b2,r3,g1,b1);
	pPVar2->x0 = sVar5;
	pPVar2->x1 = sVar3;
	pPVar2->y0 = local_30;
	pPVar2->y1 = sVar4;
	sVar1 = sVar4 + (short)h + -1;
	sVar6 = sVar1 + -4;
	pPVar2->x2 = sVar5;
	pPVar2->y2 = sVar6;
	pPVar2->x3 = sVar3;
	pPVar2->y3 = sVar1;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(r0,g0,b0,r0,g2,b2,r3,g1,b1,r3,g1,b1);
	pPVar2->y0 = sVar6;
	pPVar2->x1 = sVar5;
	pPVar2->y1 = sVar6;
	pPVar2->x0 = local_40;
	pPVar2->y2 = sVar1;
	pPVar2->x3 = sVar3;
	pPVar2->y3 = sVar1;
	pPVar2->x2 = local_50;
	pPVar2 = GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc
										 (r0_00,(uchar)g1,(uchar)b1,r0,g2,b2,r3,g1,b1,r2,g2,b2);
	pPVar2->x0 = local_50;
	pPVar2->y0 = sVar4;
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
 // line 474, offset 0x80085e40
	/* begin block 1 */
		// Start line: 475
		// Start offset: 0x80085E40

		/* begin block 1.1 */
			// Start line: 475
			// Start offset: 0x80085E40
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x80085E70
		// End Line: 476

		/* begin block 1.2 */
			// Start line: 478
			// Start offset: 0x80085E70
			// Variables:
		// 		int y; // $s2
		// 		int i; // $s0

			/* begin block 1.2.1 */
				// Start line: 478
				// Start offset: 0x80085E78
				// Variables:
			// 		unsigned char bits; // $s0

				/* begin block 1.2.1.1 */
					// Start line: 480
					// Start offset: 0x80085E84
					// Variables:
				// 		int x; // $s1
				/* end block 1.2.1.1 */
				// End offset: 0x80085EC0
				// End Line: 485
			/* end block 1.2.1 */
			// End offset: 0x80085EC0
			// End Line: 486
		/* end block 1.2 */
		// End offset: 0x80085ED4
		// End Line: 487

		/* begin block 1.3 */
			// Start line: 489
			// Start offset: 0x80085ED4
			// Variables:
		// 		int i; // $s2
		// 		int y; // $s2
		// 		int i; // $s0
		/* end block 1.3 */
		// End offset: 0x80085F58
		// End Line: 493
	/* end block 1 */
	// End offset: 0x80085F58
	// End Line: 493

	/* begin block 2 */
		// Start line: 1344
	/* end block 2 */
	// End Line: 1345

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
	piVar5 = INT_ARRAY_800a9638;
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
 // line 496, offset 0x80085f78
	/* begin block 1 */
		// Start line: 497
		// Start offset: 0x80085F78
		// Variables:
	// 		struct FRAME_HDR *Fr; // $v1
	/* end block 1 */
	// End offset: 0x800861BC
	// End Line: 553

	/* begin block 2 */
		// Start line: 1390
	/* end block 2 */
	// End Line: 1391

void GetSizes__6Dialog(Dialog *this)

{
	FRAME_HDR *pFVar1;
	
	DialogTData = GM_UseTexData__Fi(0);
	DialogBackGfx = this->BackGfx;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBackGfx);
	DialogBorderGfx = this->BorderGfx;
	DialogBackW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBackH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx);
	DialogBorderTLW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderTLH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 2);
	DialogBorderTRW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderTRH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 5);
	DialogBorderBLW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderBLH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 7);
	DialogBorderBRW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderBRH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 1);
	DialogBorderTW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderTH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 6);
	DialogBorderBW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderBH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 3);
	DialogBorderLW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderLH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBorderGfx + 4);
	DialogBevelGfx = this->BevelGfx;
	DialogBorderRW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBorderRH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBevelGfx);
	DialogBevelCW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBevelCH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBevelGfx + 1);
	DialogBevelUDW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBevelUDH = pFVar1->Y & 0x1ff;
	pFVar1 = GetFr__7TextDati(DialogTData,DialogBevelGfx + 3);
	DialogBevelLRW = (uint)*(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	DialogBevelLRH = pFVar1->Y & 0x1ff;
	MY_DialogOTpos = this->DialogOTpos;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Back__6Dialogiiii(struct Dialog *this /*$a0*/, int DX /*$a1*/, int DY /*$a2*/, int DW /*$a3*/, int DH /*stack 16*/)
 // line 565, offset 0x800861d0
	/* begin block 1 */
		// Start line: 566
		// Start offset: 0x800861D0
		// Variables:
	// 		int X; // $fp
	// 		int Y; // $s7
	// 		int W; // stack offset -144
	// 		int H; // stack offset -136
	// 		int Bx; // $s2
	// 		int By; // $s4
	// 		int Xr; // $s3
	// 		int Yr; // $s6
	// 		int Xl; // $s1
	// 		int Yl; // $s5
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		struct RECT ClipRect; // stack offset -152
	// 		char trans; // stack offset -112

		/* begin block 1.1 */
			// Start line: 588
			// Start offset: 0x80086240

			/* begin block 1.1.1 */
				// Start line: 595
				// Start offset: 0x80086280

				/* begin block 1.1.1.1 */
					// Start line: 662
					// Start offset: 0x80086280

					/* begin block 1.1.1.1.1 */
						// Start line: 667
						// Start offset: 0x80086290

						/* begin block 1.1.1.1.1.1 */
							// Start line: 668
							// Start offset: 0x80086290
							// Variables:
						// 		int c; // $s0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 670
								// Start offset: 0x800862B4
								// Variables:
							// 		struct FRAME_HDR *Fr; // $v0
							// 		int fw; // $v1
							// 		int fh; // $a1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8008636C
							// End Line: 680
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80086378
						// End Line: 682
					/* end block 1.1.1.1.1 */
					// End offset: 0x80086378
					// End Line: 682
				/* end block 1.1.1.1 */
				// End offset: 0x80086378
				// End Line: 682
			/* end block 1.1.1 */
			// End offset: 0x80086A7C
			// End Line: 815
		/* end block 1.1 */
		// End offset: 0x80086A7C
		// End Line: 815
	/* end block 1 */
	// End offset: 0x8008735C
	// End Line: 989

	/* begin block 2 */
		// Start line: 1590
	/* end block 2 */
	// End Line: 1591

/* WARNING: Could not reconcile some variable overlaps */

void Back__6Dialogiiii(Dialog *this,int DX,int DY,int DW,int DH)

{
	uchar uVar1;
	byte bVar2;
	FRAME_HDR *pFVar3;
	POLY_FT4 *pPVar4;
	uint UW;
	uint SW;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	int SH;
	uint local_b0;
	int SW_00;
	int FrNum;
	uint UH;
	int local_a0;
	int local_9c;
	RECT local_98;
	uint local_90;
	uint local_88;
	int local_80;
	int local_78;
	bool local_70;
	int local_50;
	
	DialogGBack = '\0';
	local_88 = DH;
	local_90._0_2_ = (short)DW;
	local_98.x = (short)DX;
	local_98.y = (short)DY;
	local_98.w = (short)local_90;
	local_88._0_2_ = (short)DH;
	local_98.h = (short)local_88;
	local_90 = DW;
	GetSizes__6Dialog(this);
	if (DialogBackGfx == 0) {
		return;
	}
	if (DialogBackGfx == 0xc6) {
		DialogGBack = '\0';
		local_9c = 1;
		FrNum = 0xc6;
		SH = DX;
		local_a0 = DY;
		SW = local_90;
		local_b0 = local_88;
		UW = 1;
		UH = 1;
LAB_80086a74:
		DialogPrint__Fiiiiiiiiii(FrNum,SH,local_a0,SW,local_b0,UW,UH,0,0,local_9c);
	}
	else {
		DialogGBack = '\x01';
		if (DialogBackGfx == 0x1b) {
			DropShadows__Fiiii(DX,DY,local_90,local_88);
			SW = 0;
			piVar9 = &Cxy;
			while ((int)SW < 0xe) {
				FrNum = ((int)(SW + (SW >> 0x1f)) >> 1) + 0x38;
				pFVar3 = GetFr__7TextDati(DialogTData,FrNum);
				if (((int)(*piVar9 + ((uint)*(ushort *)((int)&pFVar3->X + 2) & 0x1ff)) < (int)local_90) &&
					 ((int)(INT_ARRAY_800a9638[SW * 2] + (pFVar3->Y & 0x1ffU)) < (int)local_88)) {
					pPVar4 = PrintFt4__7TextDatiiiiii
														 (DialogTData,FrNum,DX + *piVar9,DY + INT_ARRAY_800a9638[SW * 2],SW & 1,
															MY_DialogOTpos,0);
					pPVar4->r0 = BACKR;
					pPVar4->g0 = BACKG;
					uVar1 = BACKB;
					pPVar4->code = pPVar4->code & 0xfe | 2;
					pPVar4->b0 = uVar1;
				}
				piVar9 = piVar9 + 2;
				SW = SW + 1;
			}
		}
		FrNum = DialogBackH;
		GShadeX = '\0';
		local_a0 = ((int)(local_90 + (local_90 >> 0x1f)) >> 1) -
							 ((int)(DialogBackW + ((uint)DialogBackW >> 0x1f)) >> 1);
		iVar8 = ((int)(local_88 + (local_88 >> 0x1f)) >> 1) -
						((int)(DialogBackH + ((uint)DialogBackH >> 0x1f)) >> 1);
		if ((int)local_90 < DialogBackW) {
			if ((int)local_88 < DialogBackH) {
				SW = (int)local_90 % DialogBackW;
				local_b0 = (int)local_88 % DialogBackH;
				GShadeY = '\0';
				GShadeX = '\0';
				local_9c = 0;
				FrNum = DialogBackGfx;
				SH = DX;
				local_a0 = DY;
				UW = SW;
				UH = local_b0;
			}
			else {
				SW = (int)local_90 % DialogBackW;
				SW_00 = iVar8 % DialogBackH;
				GShadeY = '\0';
				GShadeX = '\0';
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY,SW,SW_00,SW,SW_00,0,0,0);
				local_a0 = local_88 + SW_00 * -2;
				SH = 0;
				local_9c = 0;
				GShadeY = GShadeY + '\x01';
				if (0 < local_a0 / DialogBackH) {
					do {
						DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY + SW_00,SW,DialogBackH,SW,0,0,0,0);
						local_9c = local_9c + 1;
						GShadeY = GShadeY + '\x01';
						SW_00 = SW_00 + DialogBackH;
					} while (local_9c < local_a0 / DialogBackH);
				}
LAB_80086a64:
				local_9c = 0;
				SH = DX + SH;
				local_b0 = iVar8 % FrNum + (local_88 & 1);
				FrNum = DialogBackGfx;
				local_a0 = DY + SW_00;
				UW = SW;
				UH = local_b0;
			}
			goto LAB_80086a74;
		}
		if ((int)local_88 < DialogBackH) {
			local_a0 = local_a0 % DialogBackW;
			local_b0 = (int)local_88 % DialogBackH;
			GShadeY = '\0';
			GShadeX = '\0';
			DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY,local_a0,local_b0,local_a0,local_b0,0,0,0);
			FrNum = local_90 + local_a0 * -2;
			iVar8 = 0;
			GShadeX = GShadeX + '\x01';
			SH = local_a0;
			if (0 < FrNum / DialogBackW) {
				do {
					DialogPrint__Fiiiiiiiiii
										(DialogBackGfx,DX + SH,DY,DialogBackW,local_b0,DialogBackW,local_b0,0,0,0);
					iVar8 = iVar8 + 1;
					GShadeX = GShadeX + '\x01';
					SH = SH + DialogBackW;
				} while (iVar8 < FrNum / DialogBackW);
			}
			SH = DX + SH;
			local_9c = 0;
			SW = local_a0 + (local_90 & 1);
			FrNum = DialogBackGfx;
			local_a0 = DY;
			UW = SW;
			UH = local_b0;
			goto LAB_80086a74;
		}
		local_9c = iVar8 % DialogBackH;
		GShadeY = '\0';
		local_a0 = local_a0 % DialogBackW;
		SW_00 = 0;
		if (0 < local_9c) {
			GShadeX = '\0';
			if (0 < local_a0) {
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY,local_a0,local_9c,local_a0,local_9c,0,0,0);
			}
			GShadeX = GShadeX + '\x01';
			SH = local_a0;
			if (DialogBackW <= (int)local_90) {
				SW_00 = local_90 + local_a0 * -2;
				iVar6 = 0;
				SH = local_a0;
				if (0 < SW_00 / DialogBackW) {
					do {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX + SH,DY,DialogBackW,local_9c,DialogBackW,local_9c,0,0,0);
						iVar6 = iVar6 + 1;
						GShadeX = GShadeX + '\x01';
						SH = SH + DialogBackW;
					} while (iVar6 < SW_00 / DialogBackW);
				}
			}
			if (0 < local_a0) {
				SW_00 = local_a0 + (local_90 & 1);
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX + SH,DY,SW_00,local_9c,SW_00,local_9c,0,0,0);
			}
			GShadeY = GShadeY + '\x01';
			SW_00 = local_9c;
		}
		if (DialogBackH <= (int)local_88) {
			SH = local_88 + local_9c * -2;
			iVar6 = 0;
			if (0 < SH / DialogBackH) {
				local_50 = local_90 + local_a0 * -2;
				local_78 = local_a0 + (local_90 & 1);
				local_80 = SH;
				do {
					GShadeX = '\0';
					if (0 < local_a0) {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX,DY + SW_00,local_a0,DialogBackH,local_a0,DialogBackH,0,0,0);
					}
					GShadeX = GShadeX + '\x01';
					SH = local_a0;
					if ((DialogBackW <= (int)local_90) &&
						 (iVar7 = 0, SH = local_a0, 0 < local_50 / DialogBackW)) {
						iVar5 = local_90 + local_a0 * -2;
						SH = local_a0;
						do {
							DialogPrint__Fiiiiiiiiii
												(DialogBackGfx,DX + SH,DY + SW_00,DialogBackW,DialogBackH,DialogBackW,
												 DialogBackH,0,0,0);
							iVar7 = iVar7 + 1;
							GShadeX = GShadeX + '\x01';
							SH = SH + DialogBackW;
						} while (iVar7 < iVar5 / DialogBackW);
					}
					if (0 < local_a0) {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX + SH,DY + SW_00,local_78,DialogBackH,local_78,DialogBackH,0,
											 0,0);
					}
					iVar6 = iVar6 + 1;
					GShadeY = GShadeY + '\x01';
					SW_00 = SW_00 + DialogBackH;
				} while (iVar6 < local_80 / DialogBackH);
			}
		}
		if (0 < local_9c) {
			GShadeX = '\0';
			if (0 < local_a0) {
				SH = local_9c + (local_88 & 1);
				DialogPrint__Fiiiiiiiiii(DialogBackGfx,DX,DY + SW_00,local_a0,SH,local_a0,SH,0,0,0);
			}
			GShadeX = GShadeX + '\x01';
			SH = local_a0;
			if (DialogBackW <= (int)local_90) {
				iVar6 = local_90 + local_a0 * -2;
				iVar7 = 0;
				SH = local_a0;
				if (0 < iVar6 / DialogBackW) {
					local_9c = local_9c + (local_88 & 1);
					SH = local_a0;
					do {
						DialogPrint__Fiiiiiiiiii
											(DialogBackGfx,DX + SH,DY + SW_00,DialogBackW,local_9c,DialogBackW,local_9c,0,
											 0,0);
						iVar7 = iVar7 + 1;
						GShadeX = GShadeX + '\x01';
						SH = SH + DialogBackW;
					} while (iVar7 < iVar6 / DialogBackW);
				}
			}
			if (0 < local_a0) {
				SW = local_a0 + (local_90 & 1);
				goto LAB_80086a64;
			}
		}
	}
	DialogGBack = '\0';
	if (DialogBorderGfx != 0x28) {
		DialogGBack = '\x02';
	}
	local_70 = DialogBorderGfx == 0x28;
	pPVar4 = PrintFt4__7TextDatiiiiii(DialogTData,DialogBorderGfx,DX + -1,DY + -1,0,MY_DialogOTpos,0);
	pPVar4->r0 = DialogRed;
	pPVar4->g0 = DialogGreen;
	pPVar4->b0 = DialogBlue;
	if (local_70 == false) {
		bVar2 = pPVar4->code & 0xfd;
	}
	else {
		bVar2 = pPVar4->code | 2;
	}
	pPVar4->code = bVar2;
	pPVar4->code = pPVar4->code & 0xfe;
	pPVar4 = PrintFt4__7TextDatiiiiii
										 (DialogTData,DialogBorderGfx + 2,DX + local_90,DY + -1,0,MY_DialogOTpos,0);
	pPVar4->r0 = DialogRed;
	pPVar4->g0 = DialogGreen;
	pPVar4->b0 = DialogBlue;
	if (local_70 == false) {
		bVar2 = pPVar4->code & 0xfd;
	}
	else {
		bVar2 = pPVar4->code | 2;
	}
	pPVar4->code = bVar2;
	pPVar4->code = pPVar4->code & 0xfe;
	pPVar4 = PrintFt4__7TextDatiiiiii
										 (DialogTData,DialogBorderGfx + 5,DX + -1,DY + local_88,0,MY_DialogOTpos,0);
	pPVar4->r0 = DialogRed;
	pPVar4->g0 = DialogGreen;
	pPVar4->b0 = DialogBlue;
	if (local_70 == false) {
		bVar2 = pPVar4->code & 0xfd;
	}
	else {
		bVar2 = pPVar4->code | 2;
	}
	pPVar4->code = bVar2;
	pPVar4->code = pPVar4->code & 0xfe;
	pPVar4 = PrintFt4__7TextDatiiiiii
										 (DialogTData,DialogBorderGfx + 7,DX + local_90,DY + local_88,0,MY_DialogOTpos,0
										 );
	pPVar4->r0 = DialogRed;
	pPVar4->g0 = DialogGreen;
	pPVar4->b0 = DialogBlue;
	if (local_70 == false) {
		bVar2 = pPVar4->code & 0xfd;
	}
	else {
		bVar2 = pPVar4->code | 2;
	}
	pPVar4->code = bVar2;
	pPVar4->code = pPVar4->code & 0xfe;
	GShadeX = '\x01';
	GShadeY = '\x01';
	if ((DialogBorderGfx == 0x28) || (DialogBorderGfx == 0x30)) {
		UW = (uint)local_70;
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 1,DX,DY - DialogBorderTH,local_90,DialogBorderTH,0,0,-1,0,UW);
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 6,DX,DY + local_88,local_90,DialogBorderBH,0,0,0,-1,UW);
		DialogPrint__Fiiiiiiiiii
							(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,local_88,0,0,0,-1,UW);
		local_a0 = -1;
		SW = local_88;
		FrNum = 0;
		local_b0 = 0;
	}
	else {
		if ((int)local_90 < DialogBorderTW) {
			FrNum = (int)local_90 % DialogBorderTW;
			GShadeX = '\x01';
			if (0 < FrNum) {
				SW = (uint)local_70;
				GShadeY = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 1,DX,DY - DialogBorderTH,FrNum,DialogBorderTH,FrNum,
									 DialogBorderTH,0,0,SW);
				local_a0 = DX;
				goto LAB_8008708c;
			}
		}
		else {
			FrNum = (((int)(local_90 + (local_90 >> 0x1f)) >> 1) -
							((int)(DialogBorderTW + ((uint)DialogBorderTW >> 0x1f)) >> 1)) % DialogBorderTW;
			GShadeX = '\x01';
			if (0 < FrNum) {
				SW = (uint)local_70;
				GShadeY = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 1,DX,DY - DialogBorderTH,FrNum,DialogBorderTH,FrNum,
									 DialogBorderTH,0,0,SW);
				GShadeY = '\x03';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 6,DX,DY + local_88,FrNum,DialogBorderBH,FrNum,DialogBorderBH,0,
									 0,SW);
			}
			GShadeX = GShadeX + '\x01';
			local_a0 = FrNum;
			if ((DialogBorderTW < (int)local_90) &&
				 (iVar8 = 0, local_a0 = FrNum, 0 < (int)(local_90 - FrNum) / DialogBorderTW)) {
				SW = (uint)local_70;
				local_a0 = FrNum;
				do {
					GShadeY = '\x01';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 1,DX + local_a0,DY - DialogBorderTH,DialogBorderTW,
										 DialogBorderTH,DialogBorderTW,DialogBorderTH,0,0,SW);
					GShadeY = '\x03';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 6,DX + local_a0,DY + local_88,DialogBorderBW,DialogBorderBH,
										 DialogBorderBW,DialogBorderBH,0,0,SW);
					iVar8 = iVar8 + 1;
					GShadeX = GShadeX + '\x01';
					local_a0 = local_a0 + DialogBorderTW;
				} while (iVar8 < (int)(local_90 - FrNum) / DialogBorderTW);
			}
			FrNum = local_90 - local_a0;
			if (0 < FrNum) {
				SW = (uint)local_70;
				GShadeY = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 1,DX + local_a0,DY - DialogBorderTH,FrNum,DialogBorderTH,FrNum,
									 DialogBorderTH,0,0,SW);
				local_a0 = DX + local_a0;
LAB_8008708c:
				GShadeY = '\x03';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 6,local_a0,DY + local_88,FrNum,DialogBorderBH,FrNum,
									 DialogBorderBH,0,0,SW);
			}
		}
		GShadeX = '\x01';
		if ((int)local_88 < DialogBorderLH) {
			SW = (int)local_88 % DialogBorderLH;
			GShadeX = '\x01';
			UW = (uint)local_70;
			GShadeY = '\x06';
			DialogPrint__Fiiiiiiiiii
								(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,SW,DialogBorderLW,SW,0,0,
								 UW);
		}
		else {
			FrNum = (((int)(local_88 + (local_88 >> 0x1f)) >> 1) -
							((int)(DialogBorderLH + ((uint)DialogBorderLH >> 0x1f)) >> 1)) % DialogBorderLH;
			GShadeY = '\x01';
			if (0 < FrNum) {
				SW = (uint)local_70;
				GShadeX = '\x01';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,FrNum,DialogBorderLW,
									 FrNum,0,0,SW);
				GShadeX = '\x03';
				DialogPrint__Fiiiiiiiiii
									(DialogBorderGfx + 4,DX + local_90,DY,DialogBorderRW,FrNum,DialogBorderRW,FrNum,0,
									 0,SW);
			}
			GShadeY = GShadeY + '\x01';
			local_a0 = FrNum;
			if ((DialogBorderLH < (int)local_88) &&
				 (iVar8 = 0, local_a0 = FrNum, 0 < (int)(local_88 - FrNum) / DialogBorderLH)) {
				SW = (uint)local_70;
				local_a0 = FrNum;
				do {
					GShadeX = '\x01';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 3,DX - DialogBorderLW,DY + local_a0,DialogBorderLW,
										 DialogBorderLH,DialogBorderLW,DialogBorderLH,0,0,SW);
					GShadeX = '\x03';
					DialogPrint__Fiiiiiiiiii
										(DialogBorderGfx + 4,DX + local_90,DY + local_a0,DialogBorderRW,DialogBorderRH,
										 DialogBorderRW,DialogBorderRH,0,0,SW);
					iVar8 = iVar8 + 1;
					GShadeY = GShadeY + '\x01';
					local_a0 = local_a0 + DialogBorderLH;
				} while (iVar8 < (int)(local_88 - FrNum) / DialogBorderLH);
			}
			SW = local_88 - local_a0;
			DY = DY + local_a0;
			if ((int)SW < 1) goto LAB_80087340;
			UW = (uint)local_70;
			GShadeX = '\x01';
			DialogPrint__Fiiiiiiiiii
								(DialogBorderGfx + 3,DX - DialogBorderLW,DY,DialogBorderLW,SW,DialogBorderLW,SW,0,0,
								 UW);
		}
		GShadeX = '\x03';
		local_a0 = 0;
		FrNum = DialogBorderRW;
		local_b0 = SW;
	}
	DialogPrint__Fiiiiiiiiii
						(DialogBorderGfx + 4,DX + local_90,DY,DialogBorderRW,SW,FrNum,local_b0,0,local_a0,UW);
LAB_80087340:
	if (qtextflag != '\0') {
		PRIM_Clip__FP4RECTi(&local_98,0xfb);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Line__6Dialogiii(struct Dialog *this /*$a0*/, int DX /*$a1*/, int DY /*$a2*/, int DW /*$a3*/)
 // line 993, offset 0x80087390
	/* begin block 1 */
		// Start line: 994
		// Start offset: 0x80087390
		// Variables:
	// 		int X; // $s4
	// 		int Y; // $s7
	// 		int W; // $s3
	// 		int Bx; // $s1
	// 		int Xr; // $s0
	// 		int Xl; // $s0
	// 		struct RECT ClipRect; // stack offset -56
	// 		char trans; // $s5
	/* end block 1 */
	// End offset: 0x80087578
	// End Line: 1082

	/* begin block 2 */
		// Start line: 2578
	/* end block 2 */
	// End Line: 2579

void Line__6Dialogiii(Dialog *this,int DX,int DY,int DW)

{
	int iVar1;
	int iVar2;
	uint Trans;
	int SW;
	
	DialogGBack = '\0';
	GetSizes__6Dialog(this);
	DialogGBack = '\0';
	if (DialogBorderGfx != 0x28) {
		DialogGBack = '\x02';
	}
	Trans = (uint)(DialogBorderGfx == 0x28);
	GShadeY = '\x01';
	if (DW < DialogBorderTW) {
		DW = DW % DialogBorderTW;
		GShadeX = '\x01';
		if (DW < 1) {
			GShadeX = '\x01';
			GShadeY = '\x01';
			return;
		}
	}
	else {
		SW = (((int)(DW + ((uint)DW >> 0x1f)) >> 1) -
				 ((int)(DialogBorderTW + ((uint)DialogBorderTW >> 0x1f)) >> 1)) % DialogBorderTW;
		GShadeX = '\x01';
		if (0 < SW) {
			GShadeY = '\x01';
			DialogPrint__Fiiiiiiiiii
								(DialogBorderGfx + 1,DX,DY - DialogBorderTH,SW,DialogBorderTH,SW,DialogBorderTH,0,0,
								 Trans);
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
										 DialogBorderTW,DialogBorderTH,0,0,Trans);
					iVar2 = iVar2 + 1;
					GShadeX = GShadeX + '\x01';
					SW = SW + DialogBorderTW;
				} while (iVar2 < iVar1 / DialogBorderTW);
			}
		}
		DW = DW - SW;
		if (DW < 1) {
			return;
		}
		DX = DX + SW;
	}
	GShadeY = '\x01';
	DialogPrint__Fiiiiiiiiii
						(DialogBorderGfx + 1,DX,DY - DialogBorderTH,DW,DialogBorderTH,DW,DialogBorderTH,0,0,
						 Trans);
	return;
}





