#include "THISDUST.H"
#include "OPTIONS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PrintSelectBack__FbT0(void * S /*$s2*/, void * B /*$s1*/)
 // line 581, offset 0x8009a8e4
	/* begin block 1 */
		// Start line: 582
		// Start offset: 0x8009A8E4
		// Variables:
	// 		int len; // $v0
	/* end block 1 */
	// End offset: 0x8009AA1C
	// End Line: 595

	/* begin block 2 */
		// Start line: 1162
	/* end block 2 */
	// End Line: 1163

void PrintSelectBack__FbT0(void *S,void *B)

{
	int iVar1;
	int Y;
	
	if (B != (void *)0x0) {
		iVar1 = GetStrWidth__5CFontPc(&MediumFont,PrevTxt);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,((int)((0x100U - iVar1) + (0x100U - iVar1 >> 0x1f)) >> 1) + 0x20,0xe0,
							 PrevTxt,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEB);
	}
	if (S != (void *)0x0) {
		iVar1 = GetStrWidth__5CFontPc(&MediumFont,SelTxt);
		if (B == (void *)0x0) {
			iVar1 = (0x100U - iVar1) + (0x100U - iVar1 >> 0x1f);
			Y = 0xe0;
		}
		else {
			iVar1 = (0x100U - iVar1) + (0x100U - iVar1 >> 0x1f);
			Y = 0xec;
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,(iVar1 >> 1) + 0x20,Y,SelTxt,JustLeft,(RECT *)0x0,(uint)WHITER,
							 (uint)WHITEG,(uint)WHITEB);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawDialogBox__FiiP4RECTiiii(int e /*$s0*/, int f /*$s1*/, struct RECT *DRect /*$s2*/, int X /*$s3*/, int Y /*stack 16*/, int W /*stack 20*/, int H /*stack 24*/)
 // line 601, offset 0x8009aa38
	/* begin block 1 */
		// Start line: 602
		// Start offset: 0x8009AA38
		// Variables:
	// 		struct Dialog DBack; // stack offset -48
	/* end block 1 */
	// End offset: 0x8009AAF0
	// End Line: 611

	/* begin block 2 */
		// Start line: 1202
	/* end block 2 */
	// End Line: 1203

void DrawDialogBox__FiiP4RECTiiii(int e,int f,RECT *DRect,int X,int Y,int W,int H)

{
	Dialog DStack48;
	
	__6Dialog(&DStack48);
	SetBorder__6Dialogi(&DStack48,e);
	SetBack__6Dialogi(&DStack48,f);
	SetRGB__6DialogUcUcUc(&DStack48,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack48,X,Y,W,H);
	if (DRect != (RECT *)0x0) {
		DRect->x = (short)X;
		DRect->y = (short)Y;
		DRect->w = (short)W;
		DRect->h = (short)H;
	}
	___6Dialog(&DStack48,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpinner__FiiUcUcUciiibiT8(int x /*$s2*/, int y /*$s3*/, unsigned char SpinR /*$s5*/, unsigned char SpinG /*stack -56*/, int SpinB /*stack 16*/, int spinradius /*stack 20*/, int spinbright /*stack 24*/, int angle /*stack 28*/, void * Sparkle /*stack 32*/, int OtPos /*stack 36*/, void * cross /*stack 40*/)
 // line 626, offset 0x8009ab1c
	/* begin block 1 */
		// Start line: 627
		// Start offset: 0x8009AB1C
		// Variables:
	// 		struct POLY_FT4 *FT4; // $v0
	// 		struct POLY_GT4 *GT4; // $s0
	// 		struct POLY_GT3 *GT3; // $a2
	// 		struct TextDat *ThisDat; // stack offset -48
	// 		unsigned char rand; // $s0
	// 		int f; // $a1
	// 		unsigned short bright; // $v0
	// 		unsigned short r; // $fp
	// 		unsigned short g; // $s7
	// 		unsigned short b; // $s6
	// 		int xr1; // $v1
	// 		int yr1; // $a1
	// 		int xr2; // $a3
	// 		int yr2; // $a0
	// 		int yr3; // $v0
	// 		int radius; // $s4

		/* begin block 1.1 */
			// Start line: 673
			// Start offset: 0x8009AC70
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 676
				// Start offset: 0x8009AC84
			/* end block 1.1.1 */
			// End offset: 0x8009AC90
			// End Line: 678
		/* end block 1.1 */
		// End offset: 0x8009AE04
		// End Line: 706

		/* begin block 1.2 */
			// Start line: 708
			// Start offset: 0x8009AE04

			/* begin block 1.2.1 */
				// Start line: 709
				// Start offset: 0x8009AE14
				// Variables:
			// 		char flip; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 710
					// Start offset: 0x8009AE14
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x8009AFA4
				// End Line: 747
			/* end block 1.2.1 */
			// End offset: 0x8009AFA4
			// End Line: 747
		/* end block 1.2 */
		// End offset: 0x8009AFA4
		// End Line: 747
	/* end block 1 */
	// End offset: 0x8009AFB0
	// End Line: 750

	/* begin block 2 */
		// Start line: 1252
	/* end block 2 */
	// End Line: 1253

void DrawSpinner__FiiUcUcUciiibiT8
							 (int x,int y,uchar SpinR,uchar SpinG,int SpinB,int spinradius,int spinbright,
							 int angle,void *Sparkle,int OtPos,void *cross)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	TextDat *this;
	ulong uVar6;
	POLY_FT4 *pPVar7;
	POLY_GT4 *pPVar8;
	POLY_GT3 *pPVar9;
	uchar uVar10;
	uchar uVar11;
	uchar uVar12;
	uint uVar13;
	uint uVar14;
	int iVar15;
	bool bVar16;
	short sVar17;
	short sVar18;
	uint uVar19;
	uint uVar20;
	
	this = GM_UseTexData__Fi(0);
	if ((PauseMode == '\0') || (uVar14 = 0x10, Sparkle != (void *)0x0)) {
		uVar6 = GU_GetRnd();
		uVar14 = uVar6 & 0x1f;
		uVar6 = VID_GetTick__Fv();
		uVar13 = uVar6 >> 2 & 7;
	}
	else {
		uVar13 = 4;
	}
	uVar14 = uVar14 + spinbright & 0xffff;
	spinradius = spinradius >> 1;
	uVar20 = (uint)SpinR * uVar14 >> 8;
	uVar19 = (SpinB & 0xffU) * uVar14 >> 8;
	uVar14 = (uint)SpinG * uVar14 >> 8;
	if (0xff < uVar20) {
		uVar20 = 0xff;
	}
	if (0xff < uVar14) {
		uVar14 = 0xff;
	}
	if (0xff < uVar19) {
		uVar19 = 0xff;
	}
	if (Sparkle != (void *)0x0) {
		pPVar7 = PrintFt4__7TextDatiiiiii(this,uVar13 + 0x102,x,y,0,OtPos,0);
		pPVar7->r0 = SpinR;
		pPVar7->g0 = SpinG;
		pPVar7->b0 = (uchar)SpinB;
		pPVar7->code = pPVar7->code & 0xfe | 2;
	}
	x = x + 3;
	y = y + -3;
	uVar13 = 0;
	while( true ) {
		sVar17 = (short)x;
		sVar18 = (short)y;
		if (0x3f < (int)uVar13) break;
		pPVar8 = PrintGt4__7TextDatiiiiii(this,0x10a,x,y,OtPos,0xff,0);
		pPVar8->tpage = pPVar8->tpage | 0x20;
		GetFr__7TextDati(this,0x10a);
		pPVar8->u1 = pPVar8->u1 + '\x01';
		sVar1 = Circle[uVar13 & 0x3f];
		sVar2 = Circle[uVar13 + 0x10 & 0x3f];
		sVar3 = Circle[uVar13 + 8 & 0x3f];
		sVar5 = Circle[uVar13 + 0x18 & 0x3f];
		sVar4 = Circle[uVar13 + 0x20 & 0x3f];
		pPVar8->x1 = sVar17;
		pPVar8->y1 = sVar18;
		pPVar8->r0 = '\0';
		pPVar8->g0 = '\0';
		pPVar8->b0 = '\0';
		pPVar8->r1 = (uchar)uVar20;
		pPVar8->g1 = (uchar)uVar14;
		pPVar8->b1 = (uchar)uVar19;
		pPVar8->r2 = '\0';
		pPVar8->g2 = '\0';
		pPVar8->b2 = '\0';
		pPVar8->r3 = '\0';
		pPVar8->g3 = '\0';
		pPVar8->b3 = '\0';
		pPVar8->code = pPVar8->code & 0xfe | 2;
		pPVar8->x0 = sVar17 + (short)((uint)((int)sVar1 * spinradius) >> 8);
		sVar1 = (short)((uint)((int)sVar2 * spinradius) >> 8);
		pPVar8->y0 = sVar18 + sVar1;
		pPVar8->x2 = sVar17 + (short)((uint)((int)sVar3 * spinradius) >> 8);
		pPVar8->y2 = sVar18 + (short)((uint)((int)sVar5 * spinradius) >> 8);
		pPVar8->x3 = sVar17 + sVar1;
		pPVar8->y3 = sVar18 + (short)((uint)((int)sVar4 * spinradius) >> 8);
		uVar13 = uVar13 + 0x10;
	}
	if (cross != (void *)0x0) {
		bVar16 = false;
		iVar15 = 0;
		do {
			pPVar9 = PrintGt3__7TextDatiiii(this,0x10a,x,y,OtPos);
			pPVar9->tpage = pPVar9->tpage | 0x20;
			pPVar9->u1 = pPVar9->u1 + -1;
			uVar13 = angle + iVar15;
			sVar1 = Circle[uVar13 + 8 & 0x3f];
			sVar2 = Circle[uVar13 & 0x3f];
			sVar3 = Circle[uVar13 + 0x10 & 0x3f];
			sVar5 = (short)((uint)((int)sVar3 * spinradius) >> 8);
			if (bVar16) {
				pPVar9->x1 = sVar17 + (short)((uint)((int)Circle[uVar13 - 8 & 0x3f] * spinradius) >> 8);
				pPVar9->y1 = sVar18 + (short)((uint)((int)sVar1 * spinradius) >> 8);
				pPVar9->x2 = sVar17 + (short)((int)sVar2 * spinradius >> 0xb);
				sVar5 = (short)((int)sVar3 * spinradius >> 0xb);
			}
			else {
				pPVar9->x1 = sVar17 + (short)((int)Circle[uVar13 - 8 & 0x3f] * spinradius >> 0xb);
				pPVar9->y1 = sVar18 + (short)((int)sVar1 * spinradius >> 0xb);
				pPVar9->x2 = sVar17 + (short)((uint)((int)sVar2 * spinradius) >> 8);
			}
			pPVar9->x0 = sVar17;
			pPVar9->y0 = sVar18;
			pPVar9->y2 = sVar18 + sVar5;
			iVar15 = iVar15 + 8;
			pPVar9->r0 = (uchar)uVar20;
			pPVar9->g0 = (uchar)uVar14;
			pPVar9->b0 = (uchar)uVar19;
			uVar10 = (uchar)(uVar20 >> 2);
			pPVar9->r1 = uVar10;
			uVar11 = (uchar)(uVar14 >> 2);
			pPVar9->g1 = uVar11;
			uVar12 = (uchar)(uVar19 >> 2);
			pPVar9->b1 = uVar12;
			pPVar9->r2 = uVar10;
			pPVar9->g2 = uVar11;
			pPVar9->b2 = uVar12;
			pPVar9->code = pPVar9->code & 0xfe | 2;
			bVar16 = (bool)(bVar16 ^ 1);
		} while (iVar15 < 0x40);
	}
	GM_FinishedUsing__FP7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawMenu__Fi(int MenuNo /*stack -144*/)
 // line 755, offset 0x8009afe4
	/* begin block 1 */
		// Start line: 756
		// Start offset: 0x8009AFE4
		// Variables:
	// 		struct OMENULIST *mptr; // stack offset -128
	// 		struct OMENUITEM *iptr; // stack offset -120
	// 		int sh; // stack offset -112
	// 		struct POLY_G4 *G4; // stack offset -152
	// 		int yoff; // stack offset -104
	// 		int len; // $s2
	// 		unsigned char r; // stack offset -96
	// 		unsigned char g; // stack offset -88
	// 		unsigned char b; // stack offset -80
	// 		int mx; // stack offset -72
	// 		int my; // stack offset -64
	// 		int mptrx; // $s1
	// 		int mptry; // $s0

		/* begin block 1.1 */
			// Start line: 807
			// Start offset: 0x8009B1BC
			// Variables:
		// 		int i; // $fp

			/* begin block 1.1.1 */
				// Start line: 807
				// Start offset: 0x8009B1E0

				/* begin block 1.1.1.1 */
					// Start line: 816
					// Start offset: 0x8009B238

					/* begin block 1.1.1.1.1 */
						// Start line: 817
						// Start offset: 0x8009B248
						// Variables:
					// 		int sxp; // $s4
					// 		int syp; // $s6
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009B58C
					// End Line: 852
				/* end block 1.1.1.1 */
				// End offset: 0x8009B58C
				// End Line: 852

				/* begin block 1.1.1.2 */
					// Start line: 860
					// Start offset: 0x8009B5B8

					/* begin block 1.1.1.2.1 */
						// Start line: 861
						// Start offset: 0x8009B5D8
						// Variables:
					// 		int len; // $s2
					// 		int cx; // $s3
					// 		int cy; // $s4

						/* begin block 1.1.1.2.1.1 */
							// Start line: 862
							// Start offset: 0x8009B5D8

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 871
								// Start offset: 0x8009B620
								// Variables:
							// 		int fi; // $v1
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x8009B678
							// End Line: 877
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8009B6DC
						// End Line: 889
					/* end block 1.1.1.2.1 */
					// End offset: 0x8009B864
					// End Line: 913
				/* end block 1.1.1.2 */
				// End offset: 0x8009B864
				// End Line: 913
			/* end block 1.1.1 */
			// End offset: 0x8009BA50
			// End Line: 951
		/* end block 1.1 */
		// End offset: 0x8009BA68
		// End Line: 952
	/* end block 1 */
	// End offset: 0x8009BA8C
	// End Line: 957

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

/* WARNING: Could not reconcile some variable overlaps */

void DrawMenu__Fi(int MenuNo)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	ulong *puVar4;
	TextDat *this;
	short sVar5;
	FRAME_HDR *pFVar6;
	uint uVar7;
	int iVar8;
	char *Str;
	CFont *this_00;
	int Frm;
	uint *puVar9;
	short sVar10;
	short sVar11;
	TXT_JUST local_b8;
	short sVar12;
	TXT_JUST *pTVar13;
	int x;
	int iVar14;
	POLY_G4 *local_98 [2];
	int local_90;
	OMENULIST *local_80;
	OMENUITEM *local_78;
	uint local_70;
	int local_68;
	byte local_60;
	byte local_58;
	byte local_50;
	int local_48;
	int local_40;
	int local_38;
	uint local_30;
	
	local_90 = MenuNo;
	if ((MenuNo == 0) && (local_90 = MenuNo, FeFlag == '\0')) {
		local_90 = 1;
		cmenu = MenuNo + 1;
	}
	if ((local_90 == 1) && (FeFlag != '\0')) {
		cmenu = 0;
		local_90 = 0;
	}
	local_80 = MenuList + local_90;
	local_78 = MenuList[local_90].Item;
	pFVar6 = GetFr__7TextDati(Slider,200);
	local_70 = pFVar6->Y & 0x1ff;
	uVar7 = 0x100 - (uint)local_80->w;
	local_48 = ((int)(uVar7 + (uVar7 >> 0x1f)) >> 1) + 0x20;
	uVar7 = 0xb0 - (uint)local_80->h;
	local_40 = ((int)(uVar7 + (uVar7 >> 0x1f)) >> 1) + 0x20;
	if ((FeFlag == '\0') || (local_90 == 4)) {
		DrawDialogBox__FiiP4RECTiiii
							(0x28,0xc6,&ORect,local_48,local_40,(uint)local_80->w,(uint)local_80->h);
		ORect.x = (short)local_48;
		ORect.y = (short)local_40;
		ORect.w = local_80->w;
		Spacing = 0x11;
		ORect.h = ZEXT12(local_80->h);
	}
	else {
		local_40 = 0x20;
		ORect.x = (short)local_48;
		ORect.y = 0x20;
		ORect.w = local_80->w;
		ORect.h = ZEXT12(local_80->h);
		DrawFlameLogo__Fv();
		Spacing = 0xd;
	}
	iVar14 = 0;
	local_38 = 0x3ec;
	local_30 = 0xffffff;
	pTVar13 = &local_78->Just;
	do {
		if ((int)(uint)local_80->NoEntries <= iVar14) {
			PrintSelectBack__FbT0(&DAT_00000001,(void *)(uint)(local_90 != 1));
			return;
		}
		local_68 = 0xe;
		local_60 = WHITER;
		local_58 = WHITEG;
		local_50 = WHITEB;
		if (iVar14 != 0) {
			local_68 = Spacing + 0xe;
		}
		if (pTVar13[2] != JustLeft) {
			iVar8 = (local_48 + (uint)local_80->w) - sw;
			x = local_40 + (uint)local_78->y * Spacing + local_68;
			local_b8 = pTVar13[1];
			Frm = 0xca;
			if (iVar14 == cs) {
				Frm = 0xc9;
			}
			PrintFt4__7TextDatiiiiii(Slider,Frm,iVar8 + -6 + local_b8 + -4,x + -8,0,0xfb,0);
			PRIM_GetPrim__FPP7POLY_G4(local_98);
			*(undefined *)((int)&local_98[0]->tag + 3) = 8;
			local_98[0]->code = '8';
			local_98[0]->code = local_98[0]->code | 2;
			local_98[0]->r0 = '@';
			local_98[0]->g0 = '@';
			local_98[0]->b0 = '@';
			local_98[0]->r1 = '@';
			local_98[0]->g1 = '@';
			local_98[0]->b1 = '@';
			local_98[0]->r2 = -0x80;
			local_98[0]->g2 = -0x80;
			local_98[0]->b2 = -0x80;
			local_98[0]->r3 = -0x80;
			sVar12 = (short)iVar8 + -9;
			local_98[0]->g3 = -0x80;
			local_98[0]->b3 = -0x80;
			sVar5 = (short)x + -7;
			local_98[0]->x0 = sVar12;
			local_98[0]->y0 = sVar5;
			sVar11 = (short)(iVar8 + -6) + (short)local_b8 + -5;
			local_98[0]->x1 = sVar11;
			local_98[0]->y1 = sVar5;
			local_98[0]->x2 = sVar12;
			puVar4 = ThisOt;
			local_98[0]->x3 = sVar11;
			sVar5 = (short)((int)((local_70 - 2) + (local_70 - 2 >> 0x1f)) >> 1);
			sVar10 = (short)x + sVar5 + -7;
			local_98[0]->y2 = sVar10;
			local_98[0]->y3 = sVar10;
			puVar9 = (uint *)(local_38 + (int)puVar4);
			local_98[0]->tag = local_98[0]->tag & 0xff000000 | *puVar9 & local_30;
			*puVar9 = *puVar9 & 0xff000000 | (uint)local_98[0] & local_30;
			PRIM_GetPrim__FPP7POLY_G4(local_98);
			*(undefined *)((int)&local_98[0]->tag + 3) = 8;
			local_98[0]->code = '8';
			local_98[0]->code = local_98[0]->code | 2;
			local_98[0]->r0 = -0x80;
			local_98[0]->g0 = -0x80;
			local_98[0]->b0 = -0x80;
			local_98[0]->r1 = -0x80;
			local_98[0]->g1 = -0x80;
			local_98[0]->b1 = -0x80;
			local_98[0]->r2 = '@';
			local_98[0]->g2 = '@';
			local_98[0]->b2 = '@';
			local_98[0]->r3 = '@';
			local_98[0]->g3 = '@';
			local_98[0]->b3 = '@';
			local_98[0]->x0 = sVar12;
			local_98[0]->y0 = sVar10;
			puVar4 = ThisOt;
			local_98[0]->y1 = sVar10;
			sVar10 = sVar10 + sVar5;
			local_98[0]->x1 = sVar11;
			local_98[0]->x2 = sVar12;
			local_98[0]->y2 = sVar10;
			local_98[0]->x3 = sVar11;
			local_98[0]->y3 = sVar10;
			puVar9 = (uint *)(local_38 + (int)puVar4);
			local_98[0]->tag = local_98[0]->tag & 0xff000000 | *puVar9 & local_30;
			this = Slider;
			*puVar9 = *puVar9 & 0xff000000 | (uint)local_98[0] & local_30;
			PrintFt4__7TextDatiiiiii(this,200,iVar8 + -10,x + -8,0,0xfb,0);
		}
		if (iVar14 == 0) {
			local_60 = BLUER;
			local_58 = BLUEG;
			local_50 = BLUEB;
		}
		if (iVar14 == cs) {
			if (pTVar13[-1] != JustLeft) {
				local_58 = GOLDG;
				local_60 = GOLDR;
				local_50 = GOLDB;
				if ((local_90 - 0xcU < 2) && (MemCardActive != (void *)0x0)) {
					iVar8 = FUN_8015ac54(current_card,*(undefined4 *)(iVar14 * 4 + -0x7febf454));
					if (iVar8 != -1) {
						this_00 = &MediumFont;
						Str = (char *)(current_card * 0x2000 + iVar8 * 0x200 + -0x7fec4294);
						goto LAB_8009b6d0;
					}
					iVar8 = 0x48;
				}
				else {
					if ((FeFlag == '\0') || (iVar14 != 0)) {
						Str = GetStr__Fi(pTVar13[-1]);
						this_00 = &MediumFont;
					}
					else {
						Str = GetStr__Fi(pTVar13[-1]);
						this_00 = &LargeFont;
					}
LAB_8009b6d0:
					iVar8 = GetStrWidth__5CFontPc(this_00,Str);
				}
				Frm = local_40 + (uint)local_78->y * Spacing + local_68;
				if ((cmenu == 2) && (cs != 7)) {
					iVar8 = iVar8 + 2;
					x = local_48;
				}
				else {
					x = ((int)((0x100U - iVar8) + (0x100U - iVar8 >> 0x1f)) >> 1) + 0x14;
					iVar8 = iVar8 + 0x10;
				}
				if (AlertTxt == 0) {
					DrawSpinner__FiiUcUcUciiibiT8
										(x,Frm,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x100,&DAT_00000001);
					DrawSpinner__FiiUcUcUciiibiT8
										(x + iVar8,Frm,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x100,&DAT_00000001);
				}
				if (FeFlag != '\0') {
					DrawSpinner__FiiUcUcUciiibiT8
										(x,Frm,-0x60,-0x60,0x40,0x10,0x40,8,(void *)0x0,0x100,&DAT_00000001);
					DrawSpinner__FiiUcUcUciiibiT8
										(x + iVar8,Frm,-0x60,-0x60,0x40,0x10,0x40,8,(void *)0x0,0x100,&DAT_00000001);
				}
				goto LAB_8009b864;
			}
		}
		else {
LAB_8009b864:
			if (pTVar13[-1] != JustLeft) {
				if ((Adjust != '\0') && (iVar14 == 3)) {
					local_60 = REDR;
					local_58 = REDG;
					local_50 = REDB;
				}
				if (((local_90 == 3) && (pTVar13[1] != JustLeft)) && (pTVar13[3] != JustCentre)) {
					local_60 = REDR;
					local_58 = REDG;
					local_50 = REDB;
				}
				if (((local_90 == 6) && (pTVar13[1] == JustRight)) && (pTVar13[3] == ~JustCentre)) {
					local_60 = REDR;
					local_58 = REDG;
					local_50 = REDB;
				}
				if ((FeFlag == '\0') || (iVar14 != 0)) {
					Str = GetStr__Fi(pTVar13[-1]);
					iVar8 = (uint)local_78->y * Spacing;
					local_b8 = *pTVar13;
					this_00 = &MediumFont;
					bVar1 = local_60;
					bVar2 = local_58;
					bVar3 = local_50;
				}
				else {
					Str = GetStr__Fi(pTVar13[-1]);
					this_00 = &LargeFont;
					iVar8 = (uint)local_78->y * Spacing;
					local_b8 = *pTVar13;
					bVar1 = BLUER;
					bVar2 = BLUEG;
					bVar3 = BLUEB;
				}
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(this_00,0,iVar8 + local_68,Str,local_b8,&ORect,(uint)bVar1,(uint)bVar2,
									 (uint)bVar3);
			}
		}
		pTVar13 = pTVar13 + 6;
		iVar14 = iVar14 + 1;
		local_78 = local_78 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ who_pressed__Fi(int pval /*$s1*/)
 // line 960, offset 0x8009bac0
	/* begin block 1 */
		// Start line: 961
		// Start offset: 0x8009BAC0
		// Variables:
	// 		struct CPad *Pad; // $s0
	// 		struct CPad *Pad1; // $s0
	/* end block 1 */
	// End offset: 0x8009BB30
	// End Line: 970

	/* begin block 2 */
		// Start line: 2129
	/* end block 2 */
	// End Line: 2130

int who_pressed__Fi(int pval)

{
	ushort uVar1;
	CPad *this;
	CPad *this_00;
	int iVar2;
	
	this = PAD_GetPad__FiUc(0,'\0');
	this_00 = PAD_GetPad__FiUc(1,'\0');
	uVar1 = GetDown__C4CPad(this);
	if (((uint)uVar1 & pval) == 0) {
		uVar1 = GetDown__C4CPad(this_00);
		iVar2 = 1;
		if (((uint)uVar1 & pval) == 0) {
			iVar2 = -1;
		}
	}
	else {
		iVar2 = 0;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// struct CPad * /*$ra*/ PAD_GetOptionsPad__Fi(int p /*$a0*/)
 // line 974, offset 0x8009bb48
	/* begin block 1 */
		// Start line: 975
		// Start offset: 0x8009BB48
	/* end block 1 */
	// End offset: 0x8009BB74
	// End Line: 980

	/* begin block 2 */
		// Start line: 2160
	/* end block 2 */
	// End Line: 2161

CPad * PAD_GetOptionsPad__Fi(int p)

{
	CPad *pCVar1;
	
	if (FeFlag != '\0') {
		p = 0;
	}
	pCVar1 = PAD_GetPad__FiUc(p,FeFlag != '\0');
	return pCVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowCharacterFiles__Fv()
 // line 984, offset 0x8009bb84
	/* begin block 1 */
		// Start line: 985
		// Start offset: 0x8009BB84
		// Variables:
	// 		int j; // $s3
	// 		int yoff; // $s7
	// 		int move; // $s4
	// 		int fileno; // $a2
	// 		struct CPad *P; // $s5
	// 		struct OMENUITEM *iptr; // $s6
	// 		int lcs; // $a1

		/* begin block 1.1 */
			// Start line: 1059
			// Start offset: 0x8009BD4C

			/* begin block 1.1.1 */
				// Start line: 1060
				// Start offset: 0x8009BD60
				// Variables:
			// 		struct Dialog SBack; // stack offset -64
			// 		struct RECT um; // stack offset -48
			// 		int X; // $v0
			// 		int Y; // $v0
			// 		int W; // $v0
			// 		int H; // $s1
			// 		int oldBot; // $s3
			// 		int oldTot; // $s2
			/* end block 1.1.1 */
			// End offset: 0x8009BE60
			// End Line: 1085
		/* end block 1.1 */
		// End offset: 0x8009BE60
		// End Line: 1085

		/* begin block 1.2 */
			// Start line: 1148
			// Start offset: 0x8009C0A0

			/* begin block 1.2.1 */
				// Start line: 1148
				// Start offset: 0x8009C0B4
				// Variables:
			// 		int r; // $s2
			// 		int g; // $s1
			// 		int b; // $s0
			/* end block 1.2.1 */
			// End offset: 0x8009C1C8
			// End Line: 1192
		/* end block 1.2 */
		// End offset: 0x8009C1D0
		// End Line: 1194
	/* end block 1 */
	// End offset: 0x8009C1D0
	// End Line: 1194

	/* begin block 2 */
		// Start line: 2190
	/* end block 2 */
	// End Line: 2191

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShowCharacterFiles__Fv(void)

{
	ushort uVar1;
	CPad *this;
	int OT;
	int OT_00;
	char *Str;
	int iVar2;
	uint B;
	uint G;
	uint R;
	int iVar3;
	OMENUITEM *pOVar4;
	Dialog DStack64;
	RECT local_30;
	
	pOVar4 = MenuList[cmenu].Item;
	iVar3 = 0;
	ActivateMemcard__Fv();
	this = PAD_GetOptionsPad__Fi(options_pad);
	if (AlertTxt == 0) {
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 0x40) != 0) {
			if (5 < cs) {
				PlaySFX__Fi(IS_TITLSLCT);
				cs = (uint)MenuList[cmenu].NoEntries - 1;
				OT = pOVar4[cs].Link + -1;
				if (pOVar4[cs].Link != -2) {
					cs = 1;
					Adjust = '\0';
					if ((undefined *)MemCardActive != &DAT_00000001) {
						cs = 1;
						cmenu = OT;
						Adjust = '\0';
						return;
					}
					cmenu = OT;
					MemcardOFF__Fv();
					return;
				}
			}
			OT_00 = FUN_80140280(current_card);
			OT = cmenu;
			if ((OT_00 == 0) && ((&card_status)[current_card] != 2)) {
				cmenu = 0xe;
				ReturnMenu = OT;
				return;
			}
			if ((saveflag == 0) && (OT = FUN_8015b4e4(), OT != 0)) {
				saveflag = 1;
			}
		}
		if (2 < saveflag) {
			__6Dialog(&DStack64);
			local_30.x = 0x30;
			local_30.y = 0x80;
			local_30.w = 0xe0;
			local_30.h = 0x20;
			OT = SetOTpos__6Dialogi(&DStack64,0xff);
			OT_00 = SetOTpos__5CFonti(&MediumFont,0xff);
			SetBorder__6Dialogi(&DStack64,0x1c);
			SetBack__6Dialogi(&DStack64,0x1b);
			SetRGB__6DialogUcUcUc(&DStack64,'@','@','@');
			Back__6Dialogiiii(&DStack64,0x30,0x80,0xe0,0x20);
			Str = GetStr__Fi(STR_SAVING___);
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,0,Str,JustCentre,&local_30,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
			SetOTpos__6Dialogi(&DStack64,OT);
			SetOTpos__5CFonti(&MediumFont,OT_00);
			___6Dialog(&DStack64,2);
		}
		OT = saveflag + 1;
		if ((saveflag != 0) && (saveflag = OT, OT == 10)) {
			OT_00 = cs + -1;
			saveflag = 0;
			OT = FUN_8015b4e4();
			if (OT != 0) {
				OT = FUN_8015ad14(*(undefined4 *)(OT_00 * 4 + -0x7febf450));
				AlertTxt = 0x4e4;
				if (OT == 0) {
					AlertTxt = 0x4db;
				}
			}
		}
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 1) != 0) {
			iVar3 = -1;
		}
		uVar1 = GetDown__C4CPad(this);
		OT = cs;
		if ((uVar1 & 2) != 0) {
			iVar3 = 1;
		}
		OT_00 = pOVar4[cs + iVar3].Text;
		cs = cs + iVar3;
		while (OT_00 == 0) {
			if (iVar3 == 0) {
				iVar3 = 1;
			}
			if (cs < 0) {
				iVar3 = 1;
			}
			iVar2 = cs + iVar3;
			if ((int)(uint)MenuList[cmenu].NoEntries <= cs) {
				iVar3 = -1;
				iVar2 = cs + -1;
			}
			OT_00 = pOVar4[iVar2].Text;
			cs = iVar2;
		}
		if (cs < 1) {
			cs = (uint)MenuList[cmenu].NoEntries - 2;
		}
		if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
			cs = 1;
		}
		if (cs != OT) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 0x200) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			cs = (uint)MenuList[cmenu].NoEntries - 1;
			iVar3 = pOVar4[cs].Link + -1;
			if (pOVar4[cs].Link != -2) {
				cs = 1;
				Adjust = '\0';
				cmenu = iVar3;
				if ((undefined *)MemCardActive == &DAT_00000001) {
					cmenu = iVar3;
					MemcardOFF__Fv();
				}
			}
		}
		iVar3 = 0;
		while (iVar3 < 5) {
			OT = FUN_8015ac54(current_card,*(undefined4 *)(iVar3 * 4 + -0x7febf450));
			if (iVar3 == cs + -1) {
				R = (uint)GOLDR;
				G = (uint)GOLDG;
				B = (uint)GOLDB;
			}
			else {
				R = 0x60;
				if (OT == -1) {
					R = 0x30;
					G = 0x20;
					B = 0x20;
				}
				else {
					G = 0x30;
					B = 0x30;
				}
			}
			if (OT == -1) {
				Str = GetStr__Fi(STR_EMPTY_SLOT);
			}
			else {
				Str = (char *)(current_card * 0x2000 + OT * 0x200 + -0x7fec4294);
			}
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,iVar3 * Spacing + 0x30,Str,JustCentre,&ORect,R,G,B);
			iVar3 = iVar3 + 1;
		}
	}
	else {
		FUN_8015b2c4();
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 0x40) != 0) {
			AlertTxt = 0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MemcardPad__Fv()
 // line 1198, offset 0x8009c200
	/* begin block 1 */
		// Start line: 1199
		// Start offset: 0x8009C200
		// Variables:
	// 		struct CPad *P; // $s1
	// 		int move; // $s0
	// 		int save_blocks; // $a0
	// 		struct OMENUITEM *iptr; // $s2

		/* begin block 1.1 */
			// Start line: 1199
			// Start offset: 0x8009C200

			/* begin block 1.1.1 */
				// Start line: 1223
				// Start offset: 0x8009C254
				// Variables:
			// 		int lcs; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8009C618
			// End Line: 1327
		/* end block 1.1 */
		// End offset: 0x8009C65C
		// End Line: 1347

		/* begin block 1.2 */
			// Start line: 1351
			// Start offset: 0x8009C65C

			/* begin block 1.2.1 */
				// Start line: 1352
				// Start offset: 0x8009C670
				// Variables:
			// 		struct Dialog SBack; // stack offset -48
			// 		struct RECT um; // stack offset -32
			// 		int X; // $v0
			// 		int Y; // $v0
			// 		int W; // $v0
			// 		int H; // $s1
			// 		int oldBot; // $s3
			// 		int oldTot; // $s2
			/* end block 1.2.1 */
			// End offset: 0x8009C770
			// End Line: 1377
		/* end block 1.2 */
		// End offset: 0x8009C770
		// End Line: 1377
	/* end block 1 */
	// End offset: 0x8009C7B0
	// End Line: 1394

	/* begin block 2 */
		// Start line: 2667
	/* end block 2 */
	// End Line: 2668

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MemcardPad__Fv(void)

{
	ushort uVar1;
	CPad *this;
	int iVar2;
	int OT;
	char *filename;
	int iVar3;
	int OT_00;
	OMENUITEM *pOVar4;
	Dialog DStack48;
	RECT local_20;
	
	this = PAD_GetOptionsPad__Fi(options_pad);
	pOVar4 = MenuList[cmenu].Item;
	ActivateMemcard__Fv();
	OT_00 = 0;
	if (AlertTxt != 0) {
		FUN_8015b2c4();
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 0x40) != 0) {
			AlertTxt = 0;
			PlaySFX__Fi(IS_TITLSLCT);
		}
		goto LAB_8009c65c;
	}
	filename = DiabloGameFile;
	if (cmenu - 0xfU < 2) {
		filename = "DIABLO-6969";
	}
	ShowGameFiles__FPc(filename);
	uVar1 = GetDown__C4CPad(this);
	if ((uVar1 & 1) != 0) {
		OT_00 = -1;
	}
	uVar1 = GetDown__C4CPad(this);
	OT = cs;
	if ((uVar1 & 2) != 0) {
		OT_00 = 1;
	}
	iVar3 = pOVar4[cs + OT_00].Text;
	cs = cs + OT_00;
	while (iVar3 == 0) {
		if (OT_00 == 0) {
			OT_00 = 1;
		}
		if (cs < 0) {
			OT_00 = 1;
		}
		iVar2 = cs + OT_00;
		if ((int)(uint)MenuList[cmenu].NoEntries <= cs) {
			OT_00 = -1;
			iVar2 = cs + -1;
		}
		iVar3 = pOVar4[iVar2].Text;
		cs = iVar2;
	}
	if (cs < 1) {
		cs = (uint)MenuList[cmenu].NoEntries - 2;
	}
	if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
		cs = 1;
	}
	if (cs != OT) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	uVar1 = GetDown__C4CPad(this);
	if ((uVar1 & 0x200) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		cs = (uint)MenuList[cmenu].NoEntries - 1;
		OT_00 = pOVar4[cs].Link + -1;
		if (pOVar4[cs].Link != -2) {
			cs = 1;
			Adjust = '\0';
			cmenu = OT_00;
			if (MemCardActive != (void *)0x0) {
				cmenu = OT_00;
				MemcardOFF__Fv();
			}
		}
	}
	uVar1 = GetDown__C4CPad(this);
	if ((uVar1 & 0x40) == 0) goto LAB_8009c65c;
	PlaySFX__Fi(IS_TITLSLCT);
	if ((cs == 1) || (cs == 3)) {
		current_card = 0;
	}
	else {
		current_card = 1;
	}
	OT = FUN_80140280(current_card);
	OT_00 = cmenu;
	if ((OT == 0) && ((&card_status)[current_card] != 2)) {
		cmenu = 0xe;
		ReturnMenu = OT_00;
		return;
	}
	if (cs == 2) {
		OT_00 = 1;
		current_card = 1;
LAB_8009c584:
		OT = FUN_8015b4e4();
		if (OT != 0) {
			saveflag = OT_00;
		}
	}
	else {
		if (cs < 3) {
			if (cs == 1) {
				current_card = 0;
				OT_00 = cs;
				goto LAB_8009c584;
			}
		}
		else {
			if (cs == 3) {
				current_card = 0;
			}
			else {
				if (cs != 4) goto LAB_8009c5f0;
				current_card = 1;
			}
			OT_00 = FUN_8015b464(DiabloGameFile);
			if (OT_00 != 0) {
				GRL_PostMessage__FUlUilUl(ghMainWnd,0x4b,0,0);
				optionsflag = (void *)0x0;
			}
		}
	}
LAB_8009c5f0:
	pOVar4 = pOVar4 + cs;
	if (pOVar4->Link != -2) {
		cs = 1;
		Adjust = '\0';
		cmenu = pOVar4->Link + -1;
	}
LAB_8009c65c:
	if (2 < saveflag) {
		__6Dialog(&DStack48);
		local_20.x = 0x30;
		local_20.y = 0x80;
		local_20.w = 0xe0;
		local_20.h = 0x20;
		OT_00 = SetOTpos__6Dialogi(&DStack48,0xff);
		OT = SetOTpos__5CFonti(&MediumFont,0xff);
		SetBorder__6Dialogi(&DStack48,0x1c);
		SetBack__6Dialogi(&DStack48,0x1b);
		SetRGB__6DialogUcUcUc(&DStack48,'@','@','@');
		Back__6Dialogiiii(&DStack48,0x30,0x80,0xe0,0x20);
		filename = GetStr__Fi(STR__NSAVING_GAME_PLEASE_WAIT_______);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0,filename,JustCentre,&local_20,(uint)WHITER,(uint)WHITEG,(uint)WHITEG)
		;
		SetOTpos__6Dialogi(&DStack48,OT_00);
		SetOTpos__5CFonti(&MediumFont,OT);
		___6Dialog(&DStack48,2);
	}
	OT_00 = saveflag + 1;
	if ((saveflag != 0) && (saveflag = OT_00, OT_00 == 10)) {
		saveflag = OT_00;
		OT_00 = FUN_8015addc();
		AlertTxt = 0x4e4;
		if (OT_00 == 0) {
			AlertTxt = 0x4dd;
		}
		saveflag = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SoundPad__Fv()
 // line 1403, offset 0x8009c7d0
	/* begin block 1 */
		// Start line: 1404
		// Start offset: 0x8009C7D0
		// Variables:
	// 		struct CPad *P; // $s2
	// 		int move; // $s0
	// 		struct OMENUITEM *iptr; // $s1
	// 		int lcs; // $a2

		/* begin block 1.1 */
			// Start line: 1453
			// Start offset: 0x8009C9E8

			/* begin block 1.1.1 */
				// Start line: 1454
				// Start offset: 0x8009C9FC

				/* begin block 1.1.1.1 */
					// Start line: 1455
					// Start offset: 0x8009C9FC
					// Variables:
				// 		int l; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x8009CA0C
				// End Line: 1458
			/* end block 1.1.1 */
			// End offset: 0x8009CA3C
			// End Line: 1463
		/* end block 1.1 */
		// End offset: 0x8009CA3C
		// End Line: 1463

		/* begin block 1.2 */
			// Start line: 1469
			// Start offset: 0x8009CA3C

			/* begin block 1.2.1 */
				// Start line: 1481
				// Start offset: 0x8009CAA0

				/* begin block 1.2.1.1 */
					// Start line: 1482
					// Start offset: 0x8009CAA0

					/* begin block 1.2.1.1.1 */
						// Start line: 1483
						// Start offset: 0x8009CAC8
						// Variables:
					// 		int llen; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009CC00
					// End Line: 1511
				/* end block 1.2.1.1 */
				// End offset: 0x8009CC00
				// End Line: 1511
			/* end block 1.2.1 */
			// End offset: 0x8009CC00
			// End Line: 1511
		/* end block 1.2 */
		// End offset: 0x8009CC00
		// End Line: 1511
	/* end block 1 */
	// End offset: 0x8009CDD0
	// End Line: 1573

	/* begin block 2 */
		// Start line: 3112
	/* end block 2 */
	// End Line: 3113

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SoundPad__Fv(void)

{
	bool bVar1;
	LANG_TYPE LVar2;
	ushort tick;
	CPad *this;
	int iVar3;
	int iVar4;
	OMENUITEM *pOVar5;
	int iVar6;
	int iVar7;
	OMENUITEM *pOVar8;
	
	iVar7 = 0;
	this = PAD_GetOptionsPad__Fi(options_pad);
	if (FeFlag == '\0') {
		tick = 4;
	}
	else {
		tick = 6;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,0xf);
	tick = GetTick__C4CPad(this);
	if ((tick & 1) != 0) {
		iVar7 = -1;
	}
	tick = GetTick__C4CPad(this);
	iVar6 = cs;
	if ((tick & 2) != 0) {
		iVar7 = 1;
	}
	pOVar8 = MenuList[cmenu].Item;
	iVar3 = pOVar8[cs + iVar7].Text;
	cs = cs + iVar7;
	while (iVar3 == 0) {
		if (iVar7 == 0) {
			iVar7 = 1;
		}
		if (cs < 0) {
			iVar7 = 1;
		}
		iVar4 = cs + iVar7;
		if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
			iVar7 = -1;
			iVar4 = cs + -1;
		}
		iVar3 = pOVar8[iVar4].Text;
		cs = iVar4;
	}
	if (cmenu == 1) {
		if (cs < 1) {
			cs = (uint)MenuList[1].NoEntries - 1;
		}
		if ((int)(uint)MenuList[1].NoEntries <= cs) {
			cs = cmenu;
		}
	}
	else {
		iVar7 = cmenu * 8;
		if (cs < 1) {
			cs = (uint)MenuList[cmenu].NoEntries - 2;
			iVar7 = cmenu << 3;
		}
		if ((int)((uint)(&MenuList[0].NoEntries)[iVar7] - 1) <= cs) {
			cs = 1;
		}
	}
	if (cs != iVar6) {
		if (pOVar8[cs].y != '\x05') {
			stream_stop__Fv();
		}
		PlaySFX__Fi(IS_TITLEMOV);
	}
	iVar7 = 4;
	pOVar5 = pOVar8 + 4;
	if (cmenu == 3) {
		do {
			pOVar5[1].len = 0;
			LVar2 = NewLang;
			iVar7 = iVar7 + -1;
			pOVar5 = (OMENUITEM *)&pOVar5[-1].var;
		} while (-1 < iVar7);
		bVar1 = NewLang != OldLang;
		pOVar8[NewLang + LANG_FRENCH].len = 1;
		if (bVar1) {
			OldLang = LVar2;
			PlaySFX__Fi(IS_TITLSLCT);
		}
	}
	if (cmenu == 6) {
		tick = GetDown__C4CPad(this);
		if ((tick & 0x40) != 0) {
			they_pressed = who_pressed__Fi(0x40);
			pOVar5 = pOVar8 + cs;
			iVar7 = pOVar5->len + 1;
			pOVar5->len = iVar7;
			if (iVar7 == 3) {
				pOVar5->len = 1;
			}
		}
	}
	else {
		if (pOVar8[cs].var != (ulong *)0x0) {
			iVar7 = pOVar8[cs].len;
			tick = GetTick__C4CPad(this);
			if ((tick & 4) != 0) {
				pOVar5 = pOVar8 + cs;
				iVar6 = pOVar5->len + -2;
				pOVar5->len = iVar6;
				if (iVar6 < 0) {
					pOVar5->len = 0;
				}
			}
			tick = GetTick__C4CPad(this);
			iVar6 = sw;
			if ((tick & 8) != 0) {
				pOVar5 = pOVar8 + cs;
				iVar3 = pOVar5->len + 2;
				pOVar5->len = iVar3;
				if (iVar6 < iVar3) {
					pOVar5->len = iVar6;
				}
			}
			if (iVar7 != pOVar8[cs].len) {
				if (pOVar8[cs].y == '\x04') {
					if ((sghStream == (SFXHDR *)0x0) || (sghStream->used == '\0')) {
						PlaySFX__Fi(TSFX_COW7);
					}
				}
				else {
					stream_stop__Fv();
				}
				PlaySFX__Fi(IS_TITLEMOV);
			}
			*pOVar8[cs].var = pOVar8[cs].len;
		}
	}
	if ((FeFlag != '\0') && (tick = GetUp__C4CPad(this), (tick & 0x40) != 0)) {
		debounce = &DAT_00000001;
	}
	tick = GetDown__C4CPad(this);
	if (((tick & 0x40) != 0) && (debounce != (void *)0x0)) {
		they_pressed = who_pressed__Fi(0x40);
		if (pOVar8[cs].Link == -1) goto LAB_8009cd78;
		if (pOVar8[cs].Link != -2) {
			PlaySFX__Fi(IS_TITLSLCT);
			lastcs = cs;
			iVar7 = pOVar8[cs].Link;
			cmenu = iVar7 + -1;
			if ((iVar7 == 1) && (cmenu = iVar7 + -1, FeFlag == '\0')) {
				cmenu = iVar7;
			}
			cs = 1;
			Adjust = '\0';
			return;
		}
		if (cmenu == 3) {
			NewLang = cs + ~LANG_ENGLISH;
			return;
		}
	}
	tick = GetDown__C4CPad(this);
	if ((tick & 0x200) == 0) {
		return;
	}
	PlaySFX__Fi(IS_TITLSLCT);
	cs = (uint)MenuList[cmenu].NoEntries - 1;
	if (pOVar8[cs].Link != -1) {
		if (pOVar8[cs].Link == -2) {
			return;
		}
		PlaySFX__Fi(IS_TITLSLCT);
		pOVar8 = pOVar8 + cs;
		cs = lastcs;
		cmenu = pOVar8->Link + -1;
		Adjust = '\0';
		return;
	}
LAB_8009cd78:
	PlaySFX__Fi(IS_TITLSLCT);
	Adjust = '\0';
	ToggleOptions__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CentrePad__Fv()
 // line 1583, offset 0x8009cdec
	/* begin block 1 */
		// Start line: 1584
		// Start offset: 0x8009CDEC
		// Variables:
	// 		struct CPad *P; // $s1
	// 		int move; // $s0
	// 		struct OMENUITEM *iptr; // $s2

		/* begin block 1.1 */
			// Start line: 1599
			// Start offset: 0x8009CE54

			/* begin block 1.1.1 */
				// Start line: 1607
				// Start offset: 0x8009CE80
				// Variables:
			// 		int lcs; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8009CFC4
			// End Line: 1622

			/* begin block 1.1.2 */
				// Start line: 1625
				// Start offset: 0x8009CFCC
				// Variables:
			// 		int osx; // $s0
			// 		int osy; // $s3
			/* end block 1.1.2 */
			// End offset: 0x8009D0AC
			// End Line: 1632
		/* end block 1.1 */
		// End offset: 0x8009D0AC
		// End Line: 1632
	/* end block 1 */
	// End offset: 0x8009D1F0
	// End Line: 1687

	/* begin block 2 */
		// Start line: 3497
	/* end block 2 */
	// End Line: 3498

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CentrePad__Fv(void)

{
	OMENUITEM *pOVar1;
	int iVar2;
	ushort tick;
	CPad *this;
	int iVar3;
	int iVar4;
	int iVar5;
	OMENUITEM *pOVar6;
	
	sx = VID_GetXOff__Fv();
	iVar5 = 0;
	sy = VID_GetYOff__Fv();
	this = PAD_GetOptionsPad__Fi(options_pad);
	if (FeFlag == '\0') {
		tick = 2;
	}
	else {
		tick = 4;
	}
	SetPadTick__4CPadUs(this,tick);
	SetPadTickMask__4CPadUs(this,0xf);
	iVar4 = sy;
	iVar2 = sx;
	pOVar6 = MenuList[cmenu].Item;
	if (Adjust == '\0') {
		tick = GetTick__C4CPad(this);
		if ((tick & 1) != 0) {
			iVar5 = -1;
		}
		tick = GetTick__C4CPad(this);
		iVar2 = cs;
		if ((tick & 2) != 0) {
			iVar5 = 1;
		}
		iVar4 = pOVar6[cs + iVar5].Text;
		cs = cs + iVar5;
		while (iVar4 == 0) {
			if (iVar5 == 0) {
				iVar5 = 1;
			}
			if (cs < 0) {
				iVar5 = 1;
			}
			iVar3 = cs + iVar5;
			if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
				iVar5 = -1;
				iVar3 = cs + -1;
			}
			iVar4 = pOVar6[iVar3].Text;
			cs = iVar3;
		}
		if (cs < 1) {
			cs = (uint)MenuList[cmenu].NoEntries - 2;
		}
		if ((int)((uint)MenuList[cmenu].NoEntries - 1) <= cs) {
			cs = 1;
		}
		if (cs == iVar2) goto LAB_8009d0ac;
	}
	else {
		tick = GetTick__C4CPad(this);
		if (((tick & 1) != 0) && (-0x10 < sy)) {
			sy = sy + -1;
		}
		tick = GetTick__C4CPad(this);
		if (((tick & 2) != 0) && (sy < 0x10)) {
			sy = sy + 1;
		}
		tick = GetTick__C4CPad(this);
		if (((tick & 4) != 0) && (-0x10 < sx)) {
			sx = sx + -1;
		}
		tick = GetTick__C4CPad(this);
		if (((tick & 8) != 0) && (sx < 0x10)) {
			sx = sx + 1;
		}
		if ((sx == iVar2) && (sy == iVar4)) goto LAB_8009d0ac;
	}
	PlaySFX__Fi(IS_TITLEMOV);
LAB_8009d0ac:
	tick = GetDown__C4CPad(this);
	if ((tick & 0x40) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		pOVar1 = pOVar6 + cs;
		if (pOVar1->Link == -2) {
			if (cs == 5) {
				sx = 0;
				sy = 0;
			}
			else {
				Adjust = Adjust + 1 & 1;
			}
		}
		else {
			Adjust = '\0';
			cs = lastcs;
			cmenu = pOVar1->Link + -1;
		}
	}
	tick = GetDown__C4CPad(this);
	if ((tick & 0x200) != 0) {
		PlaySFX__Fi(IS_TITLSLCT);
		cs = (uint)MenuList[cmenu].NoEntries - 1;
		pOVar6 = pOVar6 + cs;
		if (pOVar6->Link == -2) {
			if (cs == 5) {
				sx = 0;
				sy = 0;
			}
			else {
				Adjust = Adjust + 1 & 1;
			}
		}
		else {
			Adjust = '\0';
			cs = lastcs;
			cmenu = pOVar6->Link + -1;
		}
	}
	VID_SetXYOff__Fii(sx,sy);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcVolumes__Fv()
 // line 1692, offset 0x8009d210
	/* begin block 1 */
		// Start line: 1693
		// Start offset: 0x8009D210
	/* end block 1 */
	// End offset: 0x8009D340
	// End Line: 1718

	/* begin block 2 */
		// Start line: 3730
	/* end block 2 */
	// End Line: 3731

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcVolumes__Fv(void)

{
	SFXHDR *sfh;
	long lVar1;
	int iVar2;
	
	sfh = sghMusic;
	iVar2 = 0x3fff / sw;
	sglMasterVolume = MasterVol * (0x100 / sw);
	sglMusicVolume = MusicVol * iVar2;
	sglSoundVolume = SoundVol * iVar2;
	sglSpeechVolume = SpeechVol * iVar2;
	if (sghMusic != (SFXHDR *)0x0) {
		iVar2 = sglMusicVolume * sglMasterVolume >> 8;
		sghMusic->s_volume = iVar2;
		sfh->volume = iVar2;
		STR_setvolume__FP6SFXHDR(sfh);
	}
	sfh = sghStream;
	if ((sgpStreamSFX != (TSFX *)0x0) && (sghStream != (SFXHDR *)0x0)) {
		lVar1 = sglSpeechVolume;
		if ((sgpStreamSFX->bFlags & 1) != 0) {
			lVar1 = sglSoundVolume;
		}
		iVar2 = lVar1 * sglMasterVolume >> 8;
		sghStream->s_volume = iVar2;
		sfh->volume = iVar2;
		STR_setvolume__FP6SFXHDR(sghStream);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetVolumes__Fv()
 // line 1725, offset 0x8009d350
	/* begin block 1 */
		// Start line: 1726
		// Start offset: 0x8009D350

		/* begin block 1.1 */
			// Start line: 1726
			// Start offset: 0x8009D350
			// Variables:
		// 		int i; // $t0

			/* begin block 1.1.1 */
				// Start line: 1732
				// Start offset: 0x8009D3E0
				// Variables:
			// 		struct OMENULIST *mptr; // $a1
			// 		struct OMENUITEM *iptr; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 1732
					// Start offset: 0x8009D3EC
					// Variables:
				// 		int s; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8009D444
				// End Line: 1745
			/* end block 1.1.1 */
			// End offset: 0x8009D444
			// End Line: 1745
		/* end block 1.1 */
		// End offset: 0x8009D44C
		// End Line: 1746
	/* end block 1 */
	// End offset: 0x8009D44C
	// End Line: 1746

	/* begin block 2 */
		// Start line: 3804
	/* end block 2 */
	// End Line: 3805

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetVolumes__Fv(void)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = sw;
	MasterVol = sglMasterVolume / (0x100 / sw);
	iVar5 = 0x3fff / sw;
	MusicVol = sglMusicVolume / iVar5;
	SoundVol = sglSoundVolume / iVar5;
	SpeechVol = sglSpeechVolume / iVar5;
	iVar5 = 0;
	while (iVar5 < 8) {
		iVar4 = 0;
		if (MenuList[iVar5].NoEntries != '\0') {
			piVar3 = &(MenuList[iVar5].Item)->len;
			do {
				if (((int *)piVar3[1] != (int *)0x0) &&
					 (iVar2 = *(int *)piVar3[1], *piVar3 = iVar2, iVar1 < iVar2)) {
					*piVar3 = iVar1;
				}
				iVar4 = iVar4 + 1;
				piVar3 = piVar3 + 6;
			} while (iVar4 < (int)(uint)MenuList[iVar5].NoEntries);
		}
		iVar5 = iVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintInfoMenu__Fv()
 // line 1753, offset 0x8009d458
	/* begin block 1 */
		// Start line: 1754
		// Start offset: 0x8009D458
		// Variables:
	// 		char temp[256]; // stack offset -288
	// 		int ypos; // $s0
	/* end block 1 */
	// End offset: 0x8009D5D8
	// End Line: 1771

	/* begin block 2 */
		// Start line: 3870
	/* end block 2 */
	// End Line: 3871

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintInfoMenu__Fv(void)

{
	ulong uVar1;
	int Y;
	uint G;
	uint R;
	char acStack288 [256];
	
	Y = Spacing * 2 + 0xc;
	sprintf(acStack288,"LEVEL %d",(uint)currlevel);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,acStack288,JustCentre,&ORect,R,G,G);
	Y = Y + Spacing;
	sprintf(acStack288,"PLR X %d\nPLR Y %d",(int)plr[0]._px,(int)plr[0]._py);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,acStack288,JustCentre,&ORect,R,G,G);
	Y = Y + Spacing * 2;
	uVar1 = GAL_GetUsedMem(1);
	if ((int)uVar1 < 0) {
		uVar1 = uVar1 + 0x3ff;
	}
	sprintf(acStack288,"MEM USED %dK",(int)uVar1 >> 10);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,acStack288,JustCentre,&ORect,R,G,G);
	Y = Y + Spacing;
	sprintf(acStack288,"SEED %08X",orgseed);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,acStack288,JustCentre,&ORect,R,G,G);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawOptions__FP4TASK(struct TASK *T /*$a0*/)
 // line 1789, offset 0x8009d600
	/* begin block 1 */
		// Start line: 1790
		// Start offset: 0x8009D600
		// Variables:
	// 		int old_pad; // $s0
	// 		struct CPad *P; // $s2

		/* begin block 1.1 */
			// Start line: 1989
			// Start offset: 0x8009DB0C

			/* begin block 1.1.1 */
				// Start line: 1991
				// Start offset: 0x8009DB20

				/* begin block 1.1.1.1 */
					// Start line: 1992
					// Start offset: 0x8009DB20
					// Variables:
				// 		int x; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8009DB84
				// End Line: 1994
			/* end block 1.1.1 */
			// End offset: 0x8009DB8C
			// End Line: 1995
		/* end block 1.1 */
		// End offset: 0x8009DB8C
		// End Line: 1995

		/* begin block 1.2 */
			// Start line: 2004
			// Start offset: 0x8009DBB8

			/* begin block 1.2.1 */
				// Start line: 2005
				// Start offset: 0x8009DBCC

				/* begin block 1.2.1.1 */
					// Start line: 2012
					// Start offset: 0x8009DC1C

					/* begin block 1.2.1.1.1 */
						// Start line: 2014
						// Start offset: 0x8009DC38
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009DC38
					// End Line: 2016
				/* end block 1.2.1.1 */
				// End offset: 0x8009DC68
				// End Line: 2020
			/* end block 1.2.1 */
			// End offset: 0x8009DC94
			// End Line: 2024
		/* end block 1.2 */
		// End offset: 0x8009DC94
		// End Line: 2024
	/* end block 1 */
	// End offset: 0x8009DD3C
	// End Line: 2045

	/* begin block 2 */
		// Start line: 3955
	/* end block 2 */
	// End Line: 3956

void DrawOptions__FP4TASK(TASK *T)

{
	int iVar1;
	ushort uVar2;
	CPad *this;
	FRAME_HDR *pFVar3;
	void *pvVar4;
	char *pcVar5;
	CPad *pCVar6;
	int iVar7;
	undefined4 in_a2;
	undefined4 in_a3;
	undefined4 local_10;
	undefined4 local_c;
	undefined4 local_8;
	undefined4 local_4;
	
	this = PAD_GetOptionsPad__Fi(options_pad);
	Slider = GM_UseTexData__Fi(0);
	iVar7 = 200;
	pFVar3 = GetFr__7TextDati(Slider,200);
	cmenu = 1;
	sw = ((uint)*(ushort *)((int)&pFVar3->X + 2) & 0x1ff) - 2;
	if (Qfromoptions == '\0') {
		cs = 1;
	}
	else {
		cs = 3;
		TSK_Sleep(1);
	}
	qspin = '\0';
	lqspin = '\0';
	Qfromoptions = '\0';
	GetVolumes__Fv();
	CheatMenu[1].len = 1;
	CheatMenu[4].len = 1;
	CheatMenu[2].len = 1;
	CheatMenu[5].len = 1;
	if (flyflag != '\0') {
		CheatMenu[5].len = 2;
	}
	if (plr[options_pad]._pInvincible != '\0') {
		CheatMenu[1].len = 2;
	}
	if (999 < plr[options_pad]._pMaxMana) {
		CheatMenu[2].len = 2;
	}
	pvVar4 = PROF_State__Fv();
	if (pvVar4 != (void *)0x0) {
		CheatMenu[4].len = 2;
	}
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	if (FeFlag == '\0') {
		PlaySFX__Fi(IS_TITLSLCT);
	}
	debounce = &DAT_00000001;
	pCVar6 = this;
	uVar2 = GetDown__C4CPad(this);
	if ((uVar2 & 0x40) != 0) {
		debounce = (void *)0x0;
	}
	OrigLang = LANG_GetLang__Fv();
	iVar1 = options_pad;
	OldLang = OrigLang;
	do {
		if (optionsflag == (void *)0x0) {
			Adjust = '\0';
			flyflag = CheatMenu[5].len == 2;
			if (CheatMenu[1].len == 2) {
				plr[iVar1]._pInvincible = '\x01';
			}
			else {
				plr[iVar1]._pInvincible = '\0';
			}
			if (CheatMenu[2].len == 2) {
				plr[iVar1]._pMaxMana = 9999999;
				plr[iVar1]._pMana = plr[0]._pMaxMana;
			}
			allspellsflag = (void *)0x0;
			if (CheatMenu[3].len == 2) {
				*(undefined4 *)&plr[iVar1]._pMemSpells = 0xffffffff;
				*(undefined4 *)((int)&plr[iVar1]._pMemSpells + 4) = 0xffffffff;
				iVar7 = 0x3f;
				pcVar5 = plr[iVar1]._pSplLvl + 0x3f;
				do {
					*pcVar5 = 'd';
					iVar7 = iVar7 + -1;
					pcVar5 = pcVar5 + -1;
				} while (-1 < iVar7);
				allspellsflag = &DAT_00000001;
			}
			if (CheatMenu[4].len == 2) {
				PROF_On__Fv();
			}
			else {
				PROF_Off__Fv();
			}
			if (NewLang != OrigLang) {
				CDWAIT = &DAT_00000001;
				music_fade__Fv();
				if (FileSYS != 1) {
					while (0 < sghMusic->volume) {
						TSK_Sleep(1);
					}
				}
				LANG_SetLang__F9LANG_TYPE(NewLang);
				if (NewLang == LANG_JAP) {
					LoadKanji__F10LANG_DB_NO(LangDbNo);
				}
				else {
					if (OrigLang == LANG_JAP) {
						FreeKanji__Fv();
					}
				}
				if (FileSYS != 1) {
					BL_LoadStreamDir__Fv();
				}
				CDWAIT = (void *)0x0;
				music_start__Fi(5);
			}
			if (MemCardActive != (void *)0x0) {
				MemcardOFF__Fv();
			}
			if (MemcardOverlay != (void *)0x0) {
				MemcardOverlay = (void *)0x0;
				OVR_LoadGame__Fv();
				music_start__Fi(sgnMusicTrack);
			}
			GLUE_ResumeGame__Fv();
			GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
			GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
			if (ctrlflag != '\0') {
				RemoveCtrlScreen__Fv();
			}
			PauseMode = '\0';
			sbookflag = '\0';
			GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
			PostGamePad__Fiiii(5,0,0,0);
			return;
		}
		switch(cmenu) {
		case 0:
		case 1:
		case 3:
		case 6:
			DrawMenu__Fi(cmenu);
			goto LAB_8009d7fc;
		case 2:
			DrawMenu__Fi(cmenu);
			CalcVolumes__Fv();
			goto LAB_8009d7fc;
		case 4:
			DrawMenu__Fi(cmenu);
			CentrePad__Fv();
			break;
		case 5:
			SoundPad__Fv();
			goto LAB_8009d904;
		case 7:
			DrawMenu__Fi(cmenu);
			PrintInfoMenu__Fv();
			goto LAB_8009d7fc;
		case 8:
			DrawMenu__Fi(cmenu);
			if (leveltype != '\0') {
				DisplayMonsterTypes__Fv();
			}
LAB_8009d7fc:
			SoundPad__Fv();
			break;
		case 9:
		case 10:
		case 0xf:
		case 0x10:
			MemcardPad__Fv();
			goto LAB_8009d904;
		case 0xb:
			SoundPad__Fv();
			goto LAB_8009d904;
		case 0xc:
			current_card = 0;
			ShowCharacterFiles__Fv();
			goto LAB_8009d904;
		case 0xd:
			current_card = 1;
			ShowCharacterFiles__Fv();
LAB_8009d904:
			DrawMenu__Fi(cmenu);
			break;
		case 0xe:
			DrawMenu__Fi(cmenu);
			FormatPad__Fv();
			break;
		case 0x11:
			DrawCtrlSetup__Fv();
			if (FeFlag == '\0') {
				cs = 6;
			}
			else {
				cs = 2;
			}
			break;
		case 0x13:
			FUN_8013a9cc(pCVar6,iVar7,(char)in_a2,(char)in_a3,local_10,local_c,local_8,local_4);
			cs = 1;
			break;
		case 0x14:
			sbookflag = '\x01';
			DrawSpellBook__Fv();
			cs = 4;
			options_pad = iVar1;
			break;
		case 0x15:
			Qfromoptions = (char)options_pad + '\x01';
			ToggleOptions__Fv();
			StartQuestlog__Fv();
			options_pad = iVar1;
		}
		TSK_Sleep(1);
		pCVar6 = this;
		uVar2 = GetDown__C4CPad(this);
		if ((uVar2 & 0x20) != 0) {
			optionsflag = (void *)0x0;
			options_pad = -1;
			pCVar6 = (CPad *)0x33;
			PlaySFX__Fi(IS_TITLSLCT);
		}
		if ((FeFlag == '\0') && (pvVar4 = GLUE_Finished__Fv(), pvVar4 != (void *)0x0)) {
			optionsflag = (void *)0x0;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ToggleOptions__Fv()
 // line 2050, offset 0x8009dd58
	/* begin block 1 */
		// Start line: 2051
		// Start offset: 0x8009DD58
	/* end block 1 */
	// End offset: 0x8009DDF0
	// End Line: 2075

	/* begin block 2 */
		// Start line: 4502
	/* end block 2 */
	// End Line: 4503

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ToggleOptions__Fv(void)

{
	if (optionsflag == (void *)0x0) {
		PauseMode = '\x01';
		AlertTxt = 0;
		optionsflag = &DAT_00000001;
		TSK_AddTask(0,DrawOptions__FP4TASK,0x4000,0);
	}
	else {
		if (MemCardActive != (void *)0x0) {
			MemcardOFF__Fv();
		}
		if (MemcardOverlay != (void *)0x0) {
			MemcardOverlay = (void *)0x0;
			OVR_LoadGame__Fv();
		}
		PauseMode = '\0';
		optionsflag = (void *)0x0;
		options_pad = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FormatPad__Fv()
 // line 2081, offset 0x8009de00
	/* begin block 1 */
		// Start line: 2082
		// Start offset: 0x8009DE00
		// Variables:
	// 		int move; // $s0
	// 		struct CPad *P; // $s1
	// 		struct OMENUITEM *iptr; // $s2
	// 		int lcs; // $a1
	/* end block 1 */
	// End offset: 0x8009E0C4
	// End Line: 2145

	/* begin block 2 */
		// Start line: 4574
	/* end block 2 */
	// End Line: 4575

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FormatPad__Fv(void)

{
	int iVar1;
	ushort uVar2;
	CPad *this;
	int iVar3;
	int iVar4;
	int iVar5;
	OMENUITEM *pOVar6;
	
	pOVar6 = MenuList[cmenu].Item;
	iVar5 = 0;
	ActivateMemcard__Fv();
	if ((&card_status)[current_card] == 2) {
		AlertTxt = 0x4e2;
		cmenu = ReturnMenu;
	}
	else {
		this = PAD_GetOptionsPad__Fi(options_pad);
		uVar2 = GetDown__C4CPad(this);
		if ((uVar2 & 1) != 0) {
			iVar5 = -1;
		}
		uVar2 = GetDown__C4CPad(this);
		iVar1 = cs;
		if ((uVar2 & 2) != 0) {
			iVar5 = 1;
		}
		iVar4 = pOVar6[cs + iVar5].Text;
		cs = cs + iVar5;
		while (iVar4 == 0) {
			if (iVar5 == 0) {
				iVar5 = 1;
			}
			if (cs < 0) {
				iVar5 = 1;
			}
			iVar3 = cs + iVar5;
			if ((int)(uint)MenuList[cmenu].NoEntries <= cs) {
				iVar5 = -1;
				iVar3 = cs + -1;
			}
			iVar4 = pOVar6[iVar3].Text;
			cs = iVar3;
		}
		if (cs < 1) {
			cs = (uint)MenuList[cmenu].NoEntries - 1;
		}
		if ((int)(uint)MenuList[cmenu].NoEntries <= cs) {
			cs = 1;
		}
		if (cs != iVar1) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		uVar2 = GetDown__C4CPad(this);
		if ((uVar2 & 0x40) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			if ((cs == 1) && ((&card_changed)[current_card] != 0)) {
				FUN_801405fc();
				iVar5 = FUN_80140280(current_card);
				AlertTxt = 0x4da;
				if (iVar5 == 0) {
					AlertTxt = 0x4dc;
				}
			}
			cmenu = ReturnMenu;
		}
		uVar2 = GetDown__C4CPad(this);
		if ((uVar2 & 0x200) != 0) {
			PlaySFX__Fi(IS_TITLSLCT);
			cs = (uint)MenuList[cmenu].NoEntries - 1;
			pOVar6 = pOVar6 + cs;
			if (pOVar6->Link != -2) {
				cs = 1;
				Adjust = '\0';
				cmenu = pOVar6->Link + -1;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActivateMemcard__Fv()
 // line 2165, offset 0x8009e0e0
	/* begin block 1 */
		// Start line: 2166
		// Start offset: 0x8009E0E0
	/* end block 1 */
	// End offset: 0x8009E104
	// End Line: 2177

	/* begin block 2 */
		// Start line: 4748
	/* end block 2 */
	// End Line: 4749

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ActivateMemcard__Fv(void)

{
	if (MemCardActive == (void *)0x0) {
		MemcardON__Fv();
		MemcardOverlay = &DAT_00000001;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowGameFiles__FPc(char *filename /*$s5*/)
 // line 2181, offset 0x8009e114
	/* begin block 1 */
		// Start line: 2182
		// Start offset: 0x8009E114
		// Variables:
	// 		int yoff; // $s6

		/* begin block 1.1 */
			// Start line: 2182
			// Start offset: 0x8009E114

			/* begin block 1.1.1 */
				// Start line: 2186
				// Start offset: 0x8009E148

				/* begin block 1.1.1.1 */
					// Start line: 2187
					// Start offset: 0x8009E148
					// Variables:
				// 		int i; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 2187
						// Start offset: 0x8009E160
						// Variables:
					// 		int FileNo; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009E1D0
					// End Line: 2202
				/* end block 1.1.1.1 */
				// End offset: 0x8009E234
				// End Line: 2203
			/* end block 1.1.1 */
			// End offset: 0x8009E234
			// End Line: 2203
		/* end block 1.1 */
		// End offset: 0x8009E234
		// End Line: 2203
	/* end block 1 */
	// End offset: 0x8009E234
	// End Line: 2203

	/* begin block 2 */
		// Start line: 4783
	/* end block 2 */
	// End Line: 4784

void ShowGameFiles__FPc(char *filename)

{
	bool bVar1;
	int iVar2;
	text_strs StrId;
	char *Str;
	int iVar3;
	int iVar4;
	char **ppcVar5;
	int iVar6;
	
	if (saveflag == 0) {
		iVar4 = 0;
		ppcVar5 = McState2;
		iVar3 = 0;
		iVar6 = 4;
		bVar1 = true;
		while (bVar1) {
			iVar2 = FUN_8015ac54(iVar4,filename);
			if (iVar2 == -1) {
				StrId = STR__NNO_MEMORY_CARD_DETECTED;
				if (*(int *)((int)&card_usable + iVar3) != 0) {
					StrId = STR_NOT_A_DIABLO_SAVE;
				}
				Str = GetStr__Fi(StrId);
				*(char **)((int)McState2 + iVar3) = Str;
			}
			else {
				*ppcVar5 = (char *)(iVar4 * 0x2000 + iVar2 * 0x200 + -0x7fec4294);
			}
			iVar2 = iVar6 * Spacing;
			iVar3 = iVar3 + 4;
			iVar4 = iVar4 + 1;
			Str = *ppcVar5;
			ppcVar5 = ppcVar5 + 1;
			iVar6 = iVar6 + 2;
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,iVar2 + 0xe,Str,JustCentre,&ORect,0x60,0x30,0x30);
			bVar1 = iVar4 < 2;
		}
	}
	return;
}





