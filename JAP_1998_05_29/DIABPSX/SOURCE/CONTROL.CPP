#include "THISDUST.H"
#include "CONTROL.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TrimCol__Fs(short col /*$v1*/)
 // line 542, offset 0x8003017c
	/* begin block 1 */
		// Start line: 543
		// Start offset: 0x8003017C
	/* end block 1 */
	// End offset: 0x800301AC
	// End Line: 546

	/* begin block 2 */
		// Start line: 1084
	/* end block 2 */
	// End Line: 1085

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
// void /*$ra*/ DrawSpellCel__FllUclUcc(long xp /*$fp*/, long yp /*stack -160*/, unsigned char Trans /*$s1*/, long nCel /*stack -152*/, int w /*stack 16*/, int sel /*stack 20*/)
 // line 551, offset 0x800301b4
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x800301B4
		// Variables:
	// 		struct TextDat *ThisDat; // stack offset -136
	// 		struct FRAME_HDR *Fr; // $s1
	// 		struct POLY_FT4 *Ft4; // $a2
	// 		struct POLY_GT4 *GT4; // $s3
	// 		struct TP_LOAD_HDR *Tp; // stack offset -128
	// 		int SpellW; // $s3
	// 		int SpellH; // $s0
	// 		unsigned char r; // $s2
	// 		unsigned char g; // stack offset -120
	// 		unsigned char b; // stack offset -112
	// 		int x0; // $t5
	// 		int x1; // $t4
	// 		int x2; // $s0
	// 		int x3; // $t7
	// 		int y0; // $t8
	// 		int y1; // $t3
	// 		int y2; // $t1
	// 		int y3; // $t6
	// 		int u0; // $a0
	// 		int u1; // $a1
	// 		int u2; // $t2
	// 		int u3; // $t0
	// 		int v0; // $a2
	// 		int v1; // $a3
	// 		int v2; // $v1
	// 		int v3; // $v0
	// 		int otpos; // stack offset -104

		/* begin block 1.1 */
			// Start line: 552
			// Start offset: 0x800301B4

			/* begin block 1.1.1 */
				// Start line: 568
				// Start offset: 0x8003023C
			/* end block 1.1.1 */
			// End offset: 0x80030278
			// End Line: 578
		/* end block 1.1 */
		// End offset: 0x80030278
		// End Line: 578

		/* begin block 1.2 */
			// Start line: 595
			// Start offset: 0x800302FC

			/* begin block 1.2.1 */
				// Start line: 596
				// Start offset: 0x80030308
				// Variables:
			// 		int X; // $s6
			// 		int Y; // $s7
			// 		int SW; // $s5
			// 		int SH; // $s4
			// 		struct PAL *Pal; // $v1
			// 		int st; // stack offset -48

				/* begin block 1.2.1.1 */
					// Start line: 646
					// Start offset: 0x800304C0

					/* begin block 1.2.1.1.1 */
						// Start line: 651
						// Start offset: 0x80030528
					/* end block 1.2.1.1.1 */
					// End offset: 0x80030528
					// End Line: 655
				/* end block 1.2.1.1 */
				// End offset: 0x80030554
				// End Line: 658
			/* end block 1.2.1 */
			// End offset: 0x8003089C
			// End Line: 693
		/* end block 1.2 */
		// End offset: 0x80030D04
		// End Line: 729
	/* end block 1 */
	// End offset: 0x80030D04
	// End Line: 729

	/* begin block 2 */
		// Start line: 1102
	/* end block 2 */
	// End Line: 1103

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpellCel__FllUclUcc(long xp,long yp,uchar Trans,long nCel,int w,int sel)

{
	char cVar1;
	short sVar2;
	ushort uVar3;
	short sVar4;
	short sVar5;
	uchar uVar6;
	short sVar7;
	TextDat *this;
	int OtPos;
	FRAME_HDR *pFVar8;
	POLY_GT4 *pPVar9;
	PAL *pPVar10;
	POLY_FT4 *pPVar11;
	uchar uVar12;
	byte bVar13;
	ulong *puVar14;
	uchar uVar15;
	uchar uVar16;
	short sVar17;
	short sVar18;
	short sVar19;
	short sVar20;
	ushort uVar21;
	uint uVar22;
	uint uVar23;
	uint uVar24;
	uint uVar25;
	uint uVar26;
	short sVar27;
	short sVar28;
	long local_a0;
	byte local_78;
	byte local_70;
	int local_30;
	
	this = GM_UseTexData__Fi(0);
	OtPos = GetOverlayOtBase__7CBlocks();
	OtPos = OtPos + 1;
	local_a0 = yp;
	if (((char)w == '\x01') && (local_a0 = yp, sbookflag == '\0')) {
		xp = xp * 0x12 + SPLICONRIGHT + 0x20;
		local_a0 = yp * 0x12 + SPLICONY + 0x20;
	}
	bVar13 = REDR;
	local_78 = REDG;
	local_70 = REDB;
	if ((char)sel == '\0') {
		_sVar27 = (int)SpellCol * 3;
		bVar13 = (&SpellColors)[_sVar27];
		local_78 = (&UCHAR_C0h_800ce311)[_sVar27];
		local_70 = s__800ce312[_sVar27];
	}
	local_70 = local_70 >> 1;
	local_78 = local_78 >> 1;
	bVar13 = bVar13 >> 1;
	uVar24 = (uint)bVar13;
	sVar2 = (short)xp;
	sVar7 = (short)local_a0;
	if (Trans != '\0') {
		pFVar8 = GetFr__7TextDati(this,nCel + 0xa5);
		uVar24 = pFVar8->Y;
		uVar21 = (ushort)uVar24 & 0x1ff;
		pPVar11 = PrintFt4__7TextDatiiiiii(this,nCel + 0xa5,xp,local_a0,0,OtPos,0);
		pPVar11->r0 = -0x80;
		pPVar11->g0 = -0x80;
		pPVar11->b0 = -0x80;
		pPVar11->code = pPVar11->code & 0xfe | 2;
		pPVar11->x0 = sVar2 + (short)*(char *)&pFVar8->X + 1;
		pPVar11->y0 = sVar7 + (short)*(char *)((int)&pFVar8->X + 1) + 1;
		pPVar11->x1 = (short)*(char *)&pFVar8->X + sVar2 + -1 + uVar21;
		pPVar11->y1 = sVar7 + (short)*(char *)((int)&pFVar8->X + 1) + 1;
		pPVar11->x2 = sVar2 + (short)*(char *)&pFVar8->X + 1;
		uVar3 = (ushort)(uVar24 >> 9) & 0x1ff;
		pPVar11->y2 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7 + -1 + uVar3;
		pPVar11->x3 = (short)*(char *)&pFVar8->X + sVar2 + -1 + uVar21;
		pPVar11->y3 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7 + -1 + uVar3;
		pFVar8 = GetFr__7TextDati(this,0xa5);
		uVar24 = pFVar8->Y;
		uVar3 = (ushort)uVar24 & 0x1ff;
		pPVar11 = PrintFt4__7TextDatiiiiii(this,0xa5,xp,local_a0,0,OtPos,0);
		pPVar11->r0 = bVar13;
		pPVar11->g0 = local_78;
		bVar13 = pPVar11->code & 0xfe;
		pPVar11->b0 = local_70;
		pPVar11->code = bVar13;
		uVar21 = (ushort)(uVar24 >> 9) & 0x1ff;
		if (sbookflag != '\0') {
			return;
		}
		pPVar11->code = bVar13 | 2;
		pPVar11->x0 = sVar2 + (short)*(char *)&pFVar8->X + 1;
		pPVar11->y0 = sVar7 + (short)*(char *)((int)&pFVar8->X + 1) + 1;
		pPVar11->x1 = (short)*(char *)&pFVar8->X + sVar2 + -1 + uVar3;
		pPVar11->y1 = sVar7 + (short)*(char *)((int)&pFVar8->X + 1) + 1;
		pPVar11->x2 = sVar2 + (short)*(char *)&pFVar8->X + 1;
		pPVar11->y2 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7 + -1 + uVar21;
		pPVar11->x3 = (short)*(char *)&pFVar8->X + sVar2 + -1 + uVar3;
		sVar7 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7 + -1;
		goto LAB_80030cfc;
	}
	pFVar8 = GetFr__7TextDati(this,0xa5);
	paloffset1 = paloffset1 + pinc1;
	paloffset2 = paloffset2 + pinc2;
	paloffset3 = paloffset3 + pinc3;
	paloffset4 = paloffset4 + pinc4;
	if (0x40 < paloffset1) {
		pinc1 = -4;
	}
	if (0x40 < paloffset2) {
		pinc2 = -4;
	}
	if (0x40 < paloffset3) {
		pinc3 = -4;
	}
	if (0x40 < paloffset4) {
		pinc4 = -4;
	}
	if (paloffset1 < -0x40) {
		pinc1 = 4;
	}
	if (paloffset2 < -0x40) {
		pinc2 = 4;
	}
	if (paloffset3 < -0x40) {
		pinc3 = 4;
	}
	if (paloffset4 < -0x40) {
		pinc4 = 4;
	}
	uVar25 = (uint)pFVar8->Y >> 9 & 0x1ff;
	_sVar27 = xp + (int)*(char *)&pFVar8->X;
	sVar27 = (short)_sVar27;
	_sVar28 = local_a0 + (int)*(char *)((int)&pFVar8->X + 1);
	sVar28 = (short)_sVar28;
	uVar26 = pFVar8->Y & 0x1ff;
	pPVar9 = PRIM_GetNextPolyGt4__Fv();
	*(undefined *)((int)&pPVar9->tag + 3) = 0xc;
	pPVar9->code = '<';
	sVar4 = (short)uVar26;
	sVar19 = sVar27 + sVar4;
	sVar5 = (short)uVar25;
	if ((pFVar8->X & 0x2000000U) == 0) {
		uVar6 = *(uchar *)&pFVar8->FrOffset;
		uVar16 = *(uchar *)((int)&pFVar8->FrOffset + 1);
		uVar15 = uVar6 + (char)uVar26;
		uVar12 = uVar16 + (char)uVar25;
		sVar19 = sVar27;
		sVar18 = sVar28;
		sVar17 = sVar28 + sVar5;
		sVar20 = sVar27 + sVar4;
	}
	else {
		sVar18 = sVar28 + sVar5;
		cVar1 = *(char *)((int)&pFVar8->FrOffset + 1);
		uVar6 = *(uchar *)&pFVar8->FrOffset;
		uVar16 = cVar1 + -1;
		uVar15 = uVar6 + (char)uVar25;
		uVar12 = cVar1 + (char)uVar26 + -1;
		sVar17 = sVar28;
		sVar20 = sVar27;
	}
	pPVar9->u0 = uVar6;
	pPVar9->v0 = uVar16;
	pPVar9->u1 = uVar15;
	pPVar9->v1 = uVar16;
	pPVar9->u2 = uVar6;
	pPVar9->v2 = uVar12;
	pPVar9->u3 = uVar15;
	pPVar9->v3 = uVar12;
	pPVar9->x0 = sVar19;
	pPVar9->y0 = sVar28;
	pPVar9->x1 = sVar27 + sVar4;
	pPVar9->y1 = sVar18;
	pPVar9->x2 = sVar27;
	pPVar9->y2 = sVar17;
	pPVar9->x3 = sVar20;
	pPVar9->y3 = sVar28 + sVar5;
	pPVar10 = GetPal__7TextDati(this,(uint)*(byte *)((int)&pFVar8->X + 2));
	if ((pPVar10->InVram & 1) == 0) {
		DBG_Error((char *)0x0,"source/CONTROL.cpp",0x291);
	}
	else {
		pPVar9->clut = *(ushort *)((int)&pPVar10->InVram + 2);
	}
	local_30 = 1;
	if ((char)w == '\x01') {
		uVar6 = TrimCol__Fs((short)((uVar24 + paloffset1) * 0x10000 >> 0x10));
		pPVar9->r0 = uVar6;
		uVar23 = (uint)local_78;
		uVar6 = TrimCol__Fs((short)((uVar23 + paloffset1) * 0x10000 >> 0x10));
		pPVar9->g0 = uVar6;
		uVar22 = (uint)local_70;
		uVar6 = TrimCol__Fs((short)((uVar22 + paloffset1) * 0x10000 >> 0x10));
		pPVar9->b0 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar24 + paloffset2) * 0x10000 >> 0x10));
		pPVar9->r1 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar23 + paloffset2) * 0x10000 >> 0x10));
		pPVar9->g1 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar22 + paloffset2) * 0x10000 >> 0x10));
		pPVar9->b1 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar24 + paloffset3) * 0x10000 >> 0x10));
		pPVar9->r2 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar23 + paloffset3) * 0x10000 >> 0x10));
		pPVar9->g2 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar22 + paloffset3) * 0x10000 >> 0x10));
		pPVar9->b2 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar24 + paloffset4) * 0x10000 >> 0x10));
		pPVar9->r3 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar23 + paloffset4) * 0x10000 >> 0x10));
		pPVar9->g3 = uVar6;
		uVar6 = TrimCol__Fs((short)((uVar22 + paloffset4) * 0x10000 >> 0x10));
		pPVar9->b3 = uVar6;
LAB_80030764:
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(_sVar27 + (uVar26 >> 1) + -3,_sVar28 + (uVar25 >> 1) + 3,-0x60,'@',0xf0,0x20,0x60,0,
							 (void *)0x0,0xffff,&DAT_00000001,(void *)0x0,8);
	}
	else {
		if ((char)w == '\x02') {
			pPVar9->r0 = bVar13;
			pPVar9->g0 = local_78;
			pPVar9->r1 = bVar13;
			pPVar9->b0 = local_70;
			pPVar9->g1 = local_78;
			pPVar9->r2 = bVar13;
			pPVar9->b1 = local_70;
			pPVar9->g2 = local_78;
			pPVar9->r3 = bVar13;
			pPVar9->b2 = local_70;
			pPVar9->g3 = local_78;
			pPVar9->b3 = local_70;
			goto LAB_80030764;
		}
		pPVar9->r0 = BACKR >> 1;
		pPVar9->g0 = BACKG >> 1;
		pPVar9->b0 = BACKB >> 1;
		pPVar9->r1 = BACKR >> 1;
		pPVar9->g1 = BACKG >> 1;
		pPVar9->b1 = BACKB >> 1;
		pPVar9->r2 = BACKR >> 1;
		pPVar9->g2 = BACKG >> 1;
		pPVar9->b2 = BACKB >> 1;
		pPVar9->r3 = BACKR >> 1;
		pPVar9->g3 = BACKG >> 1;
		local_30 = 2;
		pPVar9->b3 = BACKB >> 1;
	}
	uVar21 = *(ushort *)((int)&pFVar8->FrOffset + 2);
	pPVar9->code = pPVar9->code & 0xfc;
	pPVar9->tpage = uVar21;
	puVar14 = ThisOt + OtPos;
	pPVar9->tag = pPVar9->tag & 0xff000000 | puVar14[-1] & 0xffffff;
	puVar14[-1] = puVar14[-1] & 0xff000000 | (uint)pPVar9 & 0xffffff;
	pFVar8 = GetFr__7TextDati(this,nCel + 0xa5);
	uVar24 = pFVar8->Y;
	uVar3 = (ushort)uVar24 & 0x1ff;
	pPVar11 = PrintFt4__7TextDatiiiiii(this,nCel + 0xa5,xp,local_a0,0,OtPos,0);
	pPVar11->code = pPVar11->code & 0xfc;
	uVar6 = (uchar)(0x80 / local_30);
	pPVar11->r0 = uVar6;
	pPVar11->g0 = uVar6;
	pPVar11->b0 = uVar6;
	pPVar11->x0 = (short)*(char *)&pFVar8->X + sVar2;
	pPVar11->y0 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7;
	pPVar11->x1 = (short)*(char *)&pFVar8->X + sVar2 + uVar3;
	pPVar11->y1 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7;
	pPVar11->x2 = (short)*(char *)&pFVar8->X + sVar2;
	uVar21 = (ushort)(uVar24 >> 9) & 0x1ff;
	pPVar11->y2 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7 + uVar21;
	pPVar11->x3 = (short)*(char *)&pFVar8->X + sVar2 + uVar3;
	sVar7 = (short)*(char *)((int)&pFVar8->X + 1) + sVar7;
LAB_80030cfc:
	pPVar11->y3 = sVar7 + uVar21;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpellTrans__Fc(char t /*$a0*/)
 // line 742, offset 0x80030d38
	/* begin block 1 */
		// Start line: 743
		// Start offset: 0x80030D38
	/* end block 1 */
	// End offset: 0x80030D3C
	// End Line: 744

	/* begin block 2 */
		// Start line: 1595
	/* end block 2 */
	// End Line: 1596

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetSpellTrans__Fc(char t)

{
	SpellCol = t;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpellBookTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 754, offset 0x80030d44
	/* begin block 1 */
		// Start line: 755
		// Start offset: 0x80030D44
		// Variables:
	// 		int CountDown; // $s1
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 776
			// Start offset: 0x80030DD4
			// Variables:
		// 		int omp; // $s0
		/* end block 1.1 */
		// End offset: 0x80030E1C
		// End Line: 785
	/* end block 1 */
	// End offset: 0x80030EB4
	// End Line: 806

	/* begin block 2 */
		// Start line: 1622
	/* end block 2 */
	// End Line: 1623

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpellBookTSK__FP4TASK(TASK *T)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 3;
	if (Qfromoptions == '\0') {
		PostGamePad__Fiiii(2,0,0,0);
		stream_stop__Fv();
		GLUE_SuspendGame__Fv();
	}
	stream_pause__Fv();
	if (Qfromoptions == '\0') {
		iVar1 = 1;
		do {
			ignore_buttons = &DAT_00000001;
			TSK_Sleep(1);
			iVar1 = iVar1 + -1;
		} while (iVar1 != -1);
	}
	while ((iVar1 = myplr, sbookflag != '\0' && (-1 < options_pad))) {
		myplr = options_pad;
		DrawSpellBook__Fb((void *)(uint)(iVar2 == 0));
		if (iVar2 != 0) {
			iVar2 = iVar2 + -1;
		}
		myplr = iVar1;
		TSK_Sleep(1);
	}
	PlaySFX__Fi(IS_TITLSLCT);
	if (Qfromoptions == '\0') {
		PostGamePad__Fiiii(5,0,0,0);
		stream_resume__Fv();
		GLUE_ResumeGame__Fv();
		GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
		GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	}
	else {
		GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
		TSK_Sleep(1);
		Qfromoptions = '\x04';
		ToggleOptions__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpeedSpellTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 811, offset 0x80030ed4
	/* begin block 1 */
		// Start line: 812
		// Start offset: 0x80030ED4
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		int pnum; // $s1
	// 		void * alive; // $s3

		/* begin block 1.1 */
			// Start line: 818
			// Start offset: 0x80030F2C
			// Variables:
		// 		int old_opts; // $s2
		/* end block 1.1 */
		// End offset: 0x80030FCC
		// End Line: 831
	/* end block 1 */
	// End offset: 0x80030FE0
	// End Line: 833

	/* begin block 2 */
		// Start line: 1737
	/* end block 2 */
	// End Line: 1738

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpeedSpellTSK__FP4TASK(TASK *T)

{
	bool bVar1;
	byte bVar2;
	int iVar3;
	undefined *puVar4;
	void *pvVar5;
	int iVar6;
	
	bVar1 = true;
	iVar6 = *(int *)T->fActive;
	TSK_Sleep(1);
	while ((bVar1 && (puVar4 = (undefined *)GLUE_Finished__Fv(), iVar3 = options_pad,
									 puVar4 != &DAT_00000001))) {
		bVar2 = sbookflag | questlog | invflag | chrflag;
		options_pad = iVar6;
		pvVar5 = SelectorActive__Fv();
		if (((uint)bVar2 | (uint)pvVar5) == 0) {
			PostGamePad__Fiiii(iVar6 + 3,0,0,0);
			DrawSpellList__Fv();
		}
		options_pad = iVar3;
		TSK_Sleep(1);
		if ((&plr)[iVar6].plractive == '\0') {
			bVar1 = false;
		}
	}
	(&_spselflag2)[iVar6] = (TASK *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ToggleSpell__Fi(int pnum /*$s0*/)
 // line 837, offset 0x80031004
	/* begin block 1 */
		// Start line: 838
		// Start offset: 0x80031004
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	/* end block 1 */
	// End offset: 0x800310A0
	// End Line: 870

	/* begin block 2 */
		// Start line: 1793
	/* end block 2 */
	// End Line: 1794

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ToggleSpell__Fi(int pnum)

{
	TASK *pTVar1;
	TASK **ppTVar2;
	
	ppTVar2 = &_spselflag2 + pnum;
	if (*ppTVar2 == (TASK *)0x0) {
		PostGamePad__Fiiii(pnum + 3,0,0,0);
		GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
		pTVar1 = TSK_AddTask(0,DrawSpeedSpellTSK__FP4TASK,0x800,0x10);
		*ppTVar2 = pTVar1;
		*(int *)pTVar1->fActive = pnum;
	}
	else {
		TSK_Kill(*ppTVar2);
		*ppTVar2 = (TASK *)0x0;
		PostGamePad__Fiiii(pnum + 6,0,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpellList__Fv()
 // line 895, offset 0x800310b8
	/* begin block 1 */
		// Start line: 896
		// Start offset: 0x800310B8
		// Variables:
	// 		int x; // $s2
	// 		int y; // $s4
	// 		int i; // $s6
	// 		int j; // $s3
	// 		int t; // $a0
	// 		unsigned long mask; // stack offset -96
	// 		unsigned long spl; // stack offset -88
	// 		int s; // $a1
	// 		int c; // $s1
	// 		int v; // $s7
	// 		int NoSpells; // stack offset -80
	// 		unsigned char trans; // $a2
	// 		struct PlayerStruct *player; // $s5
	// 		struct CPad *P; // $s2
	// 		int lx; // $s5
	// 		int ly; // $s6
	// 		int NoYSpells; // $s0
	// 		int NoXSpells; // $s1
	// 		int PLEFT; // $s3
	// 		int PRIGHT; // $s4

		/* begin block 1.1 */
			// Start line: 946
			// Start offset: 0x80031250

			/* begin block 1.1.1 */
				// Start line: 954
				// Start offset: 0x80031290

				/* begin block 1.1.1.1 */
					// Start line: 982
					// Start offset: 0x80031340

					/* begin block 1.1.1.1.1 */
						// Start line: 983
						// Start offset: 0x80031368

						/* begin block 1.1.1.1.1.1 */
							// Start line: 985
							// Start offset: 0x80031374

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 986
								// Start offset: 0x800313B8
								// Variables:
							// 		void * Flag; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80031A24
							// End Line: 1122
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80031A24
						// End Line: 1122
					/* end block 1.1.1.1.1 */
					// End offset: 0x80031A24
					// End Line: 1126
				/* end block 1.1.1.1 */
				// End offset: 0x80031A64
				// End Line: 1127
			/* end block 1.1.1 */
			// End offset: 0x80031A64
			// End Line: 1127
		/* end block 1.1 */
		// End offset: 0x80031A6C
		// End Line: 1135
	/* end block 1 */
	// End offset: 0x80031D20
	// End Line: 1248

	/* begin block 2 */
		// Start line: 1947
	/* end block 2 */
	// End Line: 1948

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpellList__Fv(void)

{
	int iVar1;
	ushort uVar2;
	ushort uVar3;
	int xp;
	int iVar4;
	char *__format;
	char *pcVar5;
	char *pcVar6;
	CPad *this;
	char t;
	PlayerStruct *pPVar7;
	bool Trans;
	uint uVar8;
	ushort uVar9;
	int iVar10;
	PlayerStruct *pPVar11;
	int iVar12;
	uint uVar13;
	int local_64;
	uint local_60;
	uint local_5c;
	uint local_58;
	uint local_54;
	int local_50;
	SpellData *local_38;
	int local_30;
	
	iVar1 = options_pad;
	pPVar11 = &plr + options_pad;
	local_58 = 0;
	local_54 = 0;
	uVar13 = 0;
	if (((uint)invflag | (int)stextflag | (uint)qtextflag | (uint)chrflag | (uint)optionsflag) != 0) {
		return;
	}
	sel_data = options_pad;
	if (PlayerStruct_800dbf20.plractive == '\0') {
		SPLICONNO = 6;
		SPLICONY = 0x8e;
		xp = 0xe3;
		if (options_pad == 0) {
			xp = 0x7a;
		}
LAB_80031204:
		SPLICONRIGHT = xp;
	}
	else {
		SPLICONNO = 0xc;
		SPLICONY = 0x6e;
		SPLICONRIGHT = 0xfc;
		xp = 0xde;
		if (PlayerStruct_800dbf20.plractive != '\0') goto LAB_80031204;
	}
	xp = 0;
	if (options_pad == 0) {
		scx = scx2;
		scy = scy2;
		xp = -SPLICONNO;
	}
	else {
		scx = scx1;
		scy = scy1;
	}
	iVar10 = 0;
	local_50 = 0;
	iVar4 = options_pad * 0x100;
	(&_pSpell)[options_pad] = -1;
	_infostr[iVar4] = '\0';
	iVar4 = 0;
	ClearPanel__Fv();
	while (iVar4 < 4) {
		if (iVar4 == 1) {
			local_58 = *(uint *)&(&plr)[iVar1]._pMemSpells;
			local_54 = *(uint *)((int)&(&plr)[iVar1]._pMemSpells + 4);
		}
		else {
			if (iVar4 < 2) {
				if (iVar4 == 0) {
					SetSpellTrans__Fc('\0');
					local_58 = *(uint *)&(&plr)[iVar1]._pAblSpells;
					local_54 = *(uint *)((int)&(&plr)[iVar1]._pAblSpells + 4);
				}
			}
			else {
				if (iVar4 == 2) {
					SetSpellTrans__Fc('\x02');
					local_58 = *(uint *)&(&plr)[iVar1]._pScrlSpells;
					local_54 = *(uint *)((int)&(&plr)[iVar1]._pScrlSpells + 4);
				}
				else {
					if (iVar4 == 3) {
						SetSpellTrans__Fc('\x03');
						local_58 = *(uint *)&(&plr)[iVar1]._pISpells;
						local_54 = *(uint *)((int)&(&plr)[iVar1]._pISpells + 4);
					}
				}
			}
		}
		iVar12 = 1;
		local_60 = 1;
		local_5c = 0;
		local_38 = &SpellData_800ddbb4;
		local_30 = 0x34;
		while (iVar12 < 0x25) {
			if ((((local_58 & local_60) != 0) || ((local_54 & local_5c) != 0)) &&
				 (local_38->sName != '\0')) {
				if (iVar4 == 1) {
					uVar13 = (int)pPVar11->_pSplLvl[iVar12] + (int)(&plr)[iVar1]._pISplLvlAdd;
					if ((int)uVar13 < 0) {
						uVar13 = 0;
					}
					t = '\x04';
					if (0 < (int)uVar13) {
						t = '\x01';
					}
					SetSpellTrans__Fc(t);
				}
				if ((currlevel == '\0') && ((&spelldata.sTownSpell)[local_30] == '\0')) {
					SetSpellTrans__Fc('\x04');
				}
				local_64 = sel_data;
				Trans = false;
				if (options_pad == 0) {
					if (xp == -scx - SPLICONNO) {
						Trans = iVar10 == scy;
					}
				}
				else {
					if ((xp == scx) && (iVar10 == scy)) {
						Trans = true;
					}
				}
				if (Trans) {
					(&_pSpell)[sel_data] = iVar12;
					(&_pSplType)[local_64] = iVar4;
					if (iVar4 == 1) {
						__format = GetStr__Fi(0x519);
						pcVar5 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sNameText);
						sprintf(_infostr + sel_data * 0x100,__format,pcVar5);
						if ((&_pSpell)[sel_data] == 0x1f) {
							__format = GetStr__Fi(0xe0);
							strcpy(&tempstr,__format);
							AddPanelString__FPCci(&tempstr,1);
						}
						local_64 = 0x3f8;
						if (uVar13 != 0) {
							__format = GetStr__Fi(0x3f9);
							uVar8 = uVar13;
							goto LAB_80031894;
						}
						goto LAB_8003185c;
					}
					if (iVar4 < 2) {
						if (iVar4 == 0) {
							__format = GetStr__Fi(0x518);
							pcVar5 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sSkillText);
							sprintf(_infostr + sel_data * 0x100,__format,pcVar5);
						}
					}
					else {
						if (iVar4 == 2) {
							__format = GetStr__Fi(0x3af);
							uVar8 = 0;
							pcVar5 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sNameText);
							sprintf(_infostr + sel_data * 0x100,__format,pcVar5);
							local_64 = 0;
							if (0 < (&plr)[iVar1]._pNumInv) {
								pPVar7 = pPVar11;
								do {
									if (((pPVar7->InvList[0]._itype != -1) &&
											((uint)pPVar7->InvList[0]._iMiscId - 0x15 < 2)) &&
										 ((int)pPVar7->InvList[0]._iSpell == (&_pSpell)[sel_data])) {
										uVar8 = uVar8 + 1;
									}
									local_64 = local_64 + 1;
									pPVar7 = (PlayerStruct *)&pPVar7->_pSBkSpell;
								} while (local_64 < (&plr)[iVar1]._pNumInv);
							}
							local_64 = 0;
							pPVar7 = pPVar11;
							do {
								if (((*(short *)(&DAT_000015dc + (int)pPVar7) != -1) &&
										((uint)(byte)(&DAT_000015fd)[(int)pPVar7] - 0x15 < 2)) &&
									 ((int)pPVar7->SpdList[0]._iSpell == (&_pSpell)[sel_data])) {
									uVar8 = uVar8 + 1;
								}
								local_64 = local_64 + 1;
								pPVar7 = (PlayerStruct *)&pPVar7->_pSBkSpell;
							} while (local_64 < 8);
							local_64 = 2;
							if (uVar8 == 1) goto LAB_8003185c;
							__format = GetStr__Fi(0x500);
LAB_80031894:
							sprintf(&tempstr,__format,uVar8);
						}
						else {
							if (iVar4 != 3) goto LAB_800318ac;
							__format = GetStr__Fi(0x402);
							pcVar5 = GetStr__Fi(0x2e0);
							pcVar6 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sNameText);
							sprintf(_infostr + sel_data * 0x100,(char *)PTR_ARRAY_8011b698,__format,pcVar5,pcVar6)
							;
							local_64 = 1;
							if ((&plr)[iVar1].InvBody[4]._iCharges != '\x01') {
								__format = GetStr__Fi(0x4fe);
								uVar8 = (uint)(&plr)[iVar1].InvBody[4]._iCharges;
								goto LAB_80031894;
							}
LAB_8003185c:
							__format = GetStr__Fi(local_64);
							strcpy(&tempstr,__format);
						}
						AddPanelString__FPCci(&tempstr,1);
					}
				}
LAB_800318ac:
				Trans = true;
				if (options_pad == 0) {
					if (xp == -scx - SPLICONNO) {
						Trans = iVar10 != scy;
					}
				}
				else {
					if ((xp == scx) && (iVar10 == scy)) {
						Trans = false;
					}
				}
				if (((&my_cur_spel)[options_pad] == (uint)local_38->sName) &&
					 ((int)(&plr)[options_pad]._pRSplType == iVar4)) {
					t = (&SpellITbl)[iVar12];
					local_64 = 1;
				}
				else {
					t = (&SpellITbl)[iVar12];
					local_64 = 0;
				}
				DrawSpellCel__FllUclUcc(xp,iVar10 + -1 + FePlayerNo,Trans,(int)t,1,local_64);
				local_50 = local_50 + 1;
				if (options_pad == 0) {
					xp = xp + 1;
					if (xp == 0) {
						iVar10 = iVar10 + -1;
						xp = -SPLICONNO;
					}
				}
				else {
					xp = xp + -1;
					if (xp == -SPLICONNO) {
						xp = 0;
						iVar10 = iVar10 + -1;
					}
				}
			}
			iVar12 = iVar12 + 1;
			local_5c = local_5c << 1 | local_60 >> 0x1f;
			local_60 = local_60 << 1;
			local_30 = local_30 + 0x34;
			local_38 = local_38 + 1;
		}
		iVar4 = iVar4 + 1;
	}
	this = PAD_GetPad__FiUc(options_pad,'\0');
	xp = scy;
	iVar1 = scx;
	iVar4 = local_50 / SPLICONNO;
	uVar3 = 4;
	local_50 = local_50 - SPLICONNO * iVar4;
	SetPadTick__4CPadUs(this,4);
	SetPadTickMask__4CPadUs(this,0xf);
	scx = -scx;
	scy = -scy;
	uVar9 = 8;
	if (options_pad == 0) {
		uVar3 = 8;
		uVar9 = 4;
	}
	uVar2 = GetTick__C4CPad(this);
	if ((uVar2 & uVar3) != 0) {
		scx = scx + 1;
		iVar10 = local_50;
		if (scy != iVar4) {
			iVar10 = SPLICONNO;
		}
		if (iVar10 <= scx) {
			scx = 0;
		}
	}
	uVar3 = GetTick__C4CPad(this);
	if (((uVar3 & uVar9) != 0) && (scx = scx + -1, scx < 0)) {
		scx = local_50;
		if (scy != iVar4) {
			scx = SPLICONNO;
		}
		scx = scx + -1;
	}
	uVar3 = GetTick__C4CPad(this);
	if ((((uVar3 & 2) != 0) && (scy = scy + -1, scy < 0)) && (scy = iVar4, local_50 <= scx)) {
		scy = iVar4 + -1;
	}
	uVar3 = GetTick__C4CPad(this);
	if ((uVar3 & 1) != 0) {
		scy = scy + 1;
		if ((scy == iVar4) && (local_50 <= scx)) {
			scy = 0;
		}
		if (scy <= iVar4) goto code_r0x80031c7c;
		scy = 0;
	}
	if (iVar4 < scy) {
		scx = local_50 + -1;
		if (local_50 + -1 < 0) {
			scx = 0;
		}
		if (0 < scy) {
			scy = scy + -1;
		}
	}
code_r0x80031c7c:
	if (((scy == iVar4) && (local_50 <= scx)) && (scx = local_50 + -1, local_50 + -1 < 0)) {
		scx = 0;
		if (0 < scy) {
			scy = scy + -1;
		}
	}
	scx = -scx;
	scy = -scy;
	if ((iVar1 != scx) || (xp != scy)) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	if (options_pad == 0) {
		scx2 = scx;
		scy2 = scy;
	}
	else {
		scx1 = scx;
		scy1 = scy;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpell__Fi(int pnum /*$s2*/)
 // line 1255, offset 0x80031d54
	/* begin block 1 */
		// Start line: 1256
		// Start offset: 0x80031D54
	/* end block 1 */
	// End offset: 0x80031E44
	// End Line: 1269

	/* begin block 2 */
		// Start line: 2745
	/* end block 2 */
	// End Line: 2746

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetSpell__Fi(int pnum)

{
	RemoveTargetCursor__Fi(pnum);
	ToggleSpell__Fi(pnum);
	PlaySFX__Fi(IS_TITLSLCT);
	if ((&_pSpell)[sel_data] != -1) {
		(&my_cur_spel)[pnum] = (uint)(&spelldata)[(&_pSpell)[pnum]].sName;
		ClearPanel__Fv();
		(&plr)[pnum]._pRSpell = (&_pSpell)[pnum];
		(&plr)[pnum]._pRSplType = (char)(&_pSplType)[pnum];
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPanelString__FPCci(char *str /*$a2*/, int just /*$s0*/)
 // line 1279, offset 0x80031e60
	/* begin block 1 */
		// Start line: 1280
		// Start offset: 0x80031E60
	/* end block 1 */
	// End offset: 0x80031F0C
	// End Line: 1285

	/* begin block 2 */
		// Start line: 2793
	/* end block 2 */
	// End Line: 2794

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddPanelString__FPCci(char *str,int just)

{
	int *piVar1;
	
	if (*str != '\0') {
		strcpy(_panelstr + sel_data * 0x280 + _pnumlines[sel_data] * 0x40,str);
		piVar1 = _pnumlines + sel_data;
		_pstrjust[sel_data * 10 + *piVar1] = just;
		if (*piVar1 < 10) {
			*piVar1 = *piVar1 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPanel__Fv()
 // line 1291, offset 0x80031f20
	/* begin block 1 */
		// Start line: 1292
		// Start offset: 0x80031F20
	/* end block 1 */
	// End offset: 0x80031F48
	// End Line: 1294

	/* begin block 2 */
		// Start line: 2819
	/* end block 2 */
	// End Line: 2820

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearPanel__Fv(void)

{
	int iVar1;
	
	iVar1 = sel_data;
	_pnumlines[sel_data] = 0;
	_pinfoflag[iVar1] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPanelStr__Fv()
 // line 1346, offset 0x80031f50
	/* begin block 1 */
		// Start line: 1347
		// Start offset: 0x80031F50
	/* end block 1 */
	// End offset: 0x80031F60
	// End Line: 1348

	/* begin block 2 */
		// Start line: 2928
	/* end block 2 */
	// End Line: 2929

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPanelStr__Fv(void)

{
	ClearPanel__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitControlPan__Fv()
 // line 1433, offset 0x80031f70
	/* begin block 1 */
		// Start line: 1434
		// Start offset: 0x80031F70
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8003218C
	// End Line: 1584

	/* begin block 2 */
		// Start line: 3102
	/* end block 2 */
	// End Line: 3103

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitControlPan__Fv(void)

{
	char cVar1;
	int iVar2;
	uchar *puVar3;
	char *__src;
	int iVar4;
	
	scx1 = 0;
	scy1 = 0;
	scx2 = 0;
	scy2 = 0;
	pManaBuff = (uchar *)0x0;
	pLifeBuff = (uchar *)0x0;
	pPanelText = LoadFileInMem__FPCcPUl("CtrlPan\\SmalText.CEL",(ulong *)0x0);
	pChrPanel = LoadFileInMem__FPCcPUl("Data\\Char.CEL",(ulong *)0x0);
	pSpellCels = LoadFileInMem__FPCcPUl("CtrlPan\\SpelIcon.CEL",(ulong *)0x0);
	SetSpellTrans__Fc('\0');
	talkflag = '\0';
	if (gbMaxPlayers != '\x01') {
		iVar4 = 1;
		puVar3 = &UCHAR_00h_8011c79b;
		pMultiBtns = (uchar *)0x0;
		pTalkBtns = (uchar *)0x0;
		talkofs = 0;
		sgszTalkMsg[0] = '\0';
		do {
			*puVar3 = '\x01';
			iVar4 = iVar4 + -1;
			puVar3 = puVar3 + -1;
		} while (-1 < iVar4);
		iVar4 = 2;
		puVar3 = &UCHAR_00h_8011c7aa;
		do {
			*puVar3 = '\0';
			iVar4 = iVar4 + -1;
			puVar3 = puVar3 + -1;
		} while (-1 < iVar4);
	}
	panelflag = '\0';
	lvlbtndown = '\0';
	pPanelButtons = LoadFileInMem__FPCcPUl("CtrlPan\\Panel8bu.CEL",(ulong *)0x0);
	iVar4 = 0;
	panbtndown = '\0';
	pChrButtons = (uchar *)0x0;
	do {
		iVar2 = iVar4 + myplr * 4;
		iVar4 = iVar4 + 1;
		(&chrbtn)[iVar2] = '\0';
	} while (iVar4 < 4);
	pDurIcons = (uchar *)0x0;
	__src = GetStr__Fi(0x4fa);
	strcpy(_infostr + sel_data * 0x100,__src);
	InitPanelStr__Fv();
	cVar1 = (&plr)[myplr]._pClass;
	if (cVar1 == '\0') {
		iVar4 = 0x1a;
	}
	else {
		if (cVar1 == '\x01') {
			iVar4 = 0x1c;
		}
		else {
			iVar4 = 0x1b;
			if (cVar1 != '\x02') {
				_spselflag2 = (TASK *)0x0;
				PTR_8011b654 = (TASK *)0x0;
				pGBoxBuff = (uchar *)0x0;
				dropGoldFlag = '\0';
				drawhpflag = '\x01';
				drawmanaflag = '\x01';
				chrflag = '\0';
				sbookflag = '\0';
				dropGoldValue = 0;
				initialDropGoldValue = 0;
				initialDropGoldIndex = 0;
				pSpellBkCel = (uchar *)0x0;
				pSBkBtnCel = (uchar *)0x0;
				pSBkIconCels = (uchar *)0x0;
				sbooktab = 0;
				cur_spel = 0;
				INT_8011b71c = 0;
				pQLogCel = (uchar *)0x0;
				my_cur_spel = 0;
				INT_8011c790 = 0;
				return;
			}
		}
	}
	SpellPages[0] = iVar4;
	_spselflag2 = (TASK *)0x0;
	PTR_8011b654 = (TASK *)0x0;
	pGBoxBuff = (uchar *)0x0;
	dropGoldFlag = '\0';
	drawhpflag = '\x01';
	drawmanaflag = '\x01';
	chrflag = '\0';
	sbookflag = '\0';
	dropGoldValue = 0;
	initialDropGoldValue = 0;
	initialDropGoldIndex = 0;
	pSpellBkCel = (uchar *)0x0;
	pSBkBtnCel = (uchar *)0x0;
	pSBkIconCels = (uchar *)0x0;
	sbooktab = 0;
	cur_spel = 0;
	INT_8011b71c = 0;
	pQLogCel = (uchar *)0x0;
	my_cur_spel = 0;
	INT_8011c790 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCtrlPan__Fv()
 // line 1589, offset 0x8003219c
	/* begin block 1 */
		// Start line: 1590
		// Start offset: 0x8003219C
	/* end block 1 */
	// End offset: 0x800321B8
	// End Line: 1593

	/* begin block 2 */
		// Start line: 3498
	/* end block 2 */
	// End Line: 3499

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawCtrlPan__Fv(void)

{
	sel_data = 0;
	DrawInfoBox__FP4RECT(InfoBoxRect);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoAutoMap__Fv()
 // line 1672, offset 0x800321c8
	/* begin block 1 */
		// Start line: 1673
		// Start offset: 0x800321C8
	/* end block 1 */
	// End offset: 0x80032218
	// End Line: 1684

	/* begin block 2 */
		// Start line: 3668
	/* end block 2 */
	// End Line: 3669

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoAutoMap__Fv(void)

{
	if (currlevel == '\0') {
		InitDiabloMsg__Fc('\x01');
	}
	else {
		if (automapflag == '\0') {
			FUN_80161f58();
		}
		else {
			automapflag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckPanelInfo__Fv()
 // line 1691, offset 0x80032228
	/* begin block 1 */
		// Start line: 1692
		// Start offset: 0x80032228
		// Variables:
	// 		int (*_pSpell)[1]; // $s1
	// 		int c; // $s0
	// 		int s; // $a1
	// 		int v; // $s0

		/* begin block 1.1 */
			// Start line: 1692
			// Start offset: 0x80032228

			/* begin block 1.1.1 */
				// Start line: 1722
				// Start offset: 0x80032290

				/* begin block 1.1.1.1 */
					// Start line: 1723
					// Start offset: 0x80032290

					/* begin block 1.1.1.1.1 */
						// Start line: 1723
						// Start offset: 0x800322C8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1724
							// Start offset: 0x800322C8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1732
								// Start offset: 0x8003239C

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1733
									// Start offset: 0x8003239C

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1733
										// Start offset: 0x800323E8

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1735
											// Start offset: 0x800323E8
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800323E8
										// End Line: 1735

										/* begin block 1.1.1.1.1.1.1.1.1.2 */
											// Start line: 1745
											// Start offset: 0x80032554
										/* end block 1.1.1.1.1.1.1.1.1.2 */
										// End offset: 0x80032554
										// End Line: 1745

										/* begin block 1.1.1.1.1.1.1.1.1.3 */
											// Start line: 1767
											// Start offset: 0x800327B8
										/* end block 1.1.1.1.1.1.1.1.1.3 */
										// End offset: 0x800327B8
										// End Line: 1767

										/* begin block 1.1.1.1.1.1.1.1.1.4 */
											// Start line: 1775
											// Start offset: 0x800328F0
										/* end block 1.1.1.1.1.1.1.1.1.4 */
										// End offset: 0x800328F0
										// End Line: 1775
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800328F0
									// End Line: 1775
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800328F0
								// End Line: 1775
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800328F0
							// End Line: 1775
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800328F0
						// End Line: 1775
					/* end block 1.1.1.1.1 */
					// End offset: 0x800328F0
					// End Line: 1775
				/* end block 1.1.1.1 */
				// End offset: 0x800328F0
				// End Line: 1775
			/* end block 1.1.1 */
			// End offset: 0x800328F0
			// End Line: 1775
		/* end block 1.1 */
		// End offset: 0x800328F0
		// End Line: 1775
	/* end block 1 */
	// End offset: 0x80032920
	// End Line: 1783

	/* begin block 2 */
		// Start line: 3706
	/* end block 2 */
	// End Line: 3707

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckPanelInfo__Fv(void)

{
	int iVar1;
	char cVar2;
	char *__src;
	char *__format;
	int iVar3;
	undefined4 StrId;
	int iVar4;
	int *piVar5;
	undefined auStack48 [16];
	int aiStack32 [2];
	
	iVar4 = sel_data;
	panelflag = '\0';
	iVar1 = -(sel_data * 4 + 0xeU & 0xfffffff8);
	piVar5 = (int *)((int)aiStack32 + iVar1);
	ClearPanel__Fv(auStack48[iVar1]);
	if ((((&_spselflag2)[iVar4] != (TASK *)0x0) || (0x37 < MouseX - 0x235U)) ||
		 (0x37 < MouseY - 0x1a0U)) goto LAB_800328f0;
	__src = GetStr__Fi(0x3b3,auStack48[iVar1]);
	strcpy(_infostr + sel_data * 0x100,__src,auStack48[iVar1]);
	_infoclr[sel_data] = '\0';
	panelflag = '\x01';
	_pinfoflag[sel_data] = '\x01';
	__src = GetStr__Fi(0x4fa,auStack48[iVar1]);
	strcpy(&tempstr,__src,auStack48[iVar1]);
	AddPanelString__FPCci(&tempstr,1,auStack48[iVar1]);
	iVar4 = myplr;
	iVar3 = (&plr)[myplr]._pRSpell;
	piVar5[sel_data] = iVar3;
	if (iVar3 == -1) goto LAB_800328f0;
	cVar2 = (&plr)[iVar4]._pRSplType;
	if (cVar2 == '\x01') {
		__src = GetStr__Fi(0x519,auStack48[iVar1]);
		__format = GetStr__Fi((&spelldata)[piVar5[sel_data]].sNameText,auStack48[iVar1]);
		sprintf(&tempstr,__src,__format);
		AddPanelString__FPCci(&tempstr,1,auStack48[iVar1]);
		__src = (char *)((int)*(char *)(myplr * 0x19e8 + -0x7ff25a57 + piVar5[sel_data]) +
										(int)(&plr)[myplr]._pISplLvlAdd);
		if ((int)__src < 0) {
			__src = (char *)0x0;
		}
		if (__src != (char *)0x0) {
			__format = GetStr__Fi(0x3f9,auStack48[iVar1]);
			goto LAB_800328d8;
		}
		__src = GetStr__Fi(0x3f8,auStack48[iVar1]);
		sprintf(&tempstr,__src);
	}
	else {
		if (cVar2 < '\x02') {
			if (cVar2 != '\0') goto LAB_800328f0;
			__format = GetStr__Fi(0x518,auStack48[iVar1]);
			__src = GetStr__Fi((&spelldata)[piVar5[sel_data]].sSkillText,auStack48[iVar1]);
		}
		else {
			if (cVar2 == '\x02') {
				__src = GetStr__Fi(0x3af,auStack48[iVar1]);
				__format = GetStr__Fi((&spelldata)[piVar5[sel_data]].sNameText,auStack48[iVar1]);
				sprintf(&tempstr,__src,__format);
				AddPanelString__FPCci(&tempstr,1,auStack48[iVar1]);
				__src = (char *)0x0;
				iVar4 = 0;
				if (0 < (&plr)[myplr]._pNumInv) {
					iVar3 = 0;
					do {
						if (((*(short *)((int)&(&plr)[myplr].InvList[0]._itype + iVar3) != -1) &&
								((uint)(&(&plr)[myplr].InvList[0]._iMiscId)[iVar3] - 0x15 < 2)) &&
							 ((int)(&(&plr)[myplr].InvList[0]._iSpell)[iVar3] == piVar5[sel_data])) {
							__src = __src + 1;
						}
						iVar4 = iVar4 + 1;
						iVar3 = iVar3 + 0x6c;
					} while (iVar4 < (&plr)[myplr]._pNumInv);
				}
				iVar3 = 0;
				iVar4 = myplr * 0x19e8;
				do {
					if (((*(short *)((int)&plr.SpdList[0]._itype + iVar4) != -1) &&
							((uint)(&plr.SpdList[0]._iMiscId)[iVar4] - 0x15 < 2)) &&
						 ((int)(&plr.SpdList[0]._iSpell)[iVar4] == piVar5[sel_data])) {
						__src = __src + 1;
					}
					iVar3 = iVar3 + 1;
					iVar4 = iVar4 + 0x6c;
				} while (iVar3 < 8);
				StrId = 2;
				if (__src == &DAT_00000001) {
LAB_80032870:
					__src = GetStr__Fi(StrId,auStack48[iVar1]);
					strcpy(&tempstr,__src,auStack48[iVar1]);
					goto LAB_800328e0;
				}
				__format = GetStr__Fi(0x500,auStack48[iVar1]);
			}
			else {
				if (cVar2 != '\x03') goto LAB_800328f0;
				__src = GetStr__Fi(0x405,auStack48[iVar1]);
				__format = GetStr__Fi((&spelldata)[piVar5[sel_data]].sNameText,auStack48[iVar1]);
				sprintf(&tempstr,__src,__format);
				AddPanelString__FPCci(&tempstr,1,auStack48[iVar1]);
				StrId = 1;
				if ((&plr)[myplr].InvBody[4]._iCharges == '\x01') goto LAB_80032870;
				__format = GetStr__Fi(0x4fe,auStack48[iVar1]);
				__src = (char *)(uint)(&plr)[myplr].InvBody[4]._iCharges;
			}
		}
LAB_800328d8:
		sprintf(&tempstr,__format,__src);
	}
LAB_800328e0:
	AddPanelString__FPCci(&tempstr,1,auStack48[iVar1]);
LAB_800328f0:
	if (invflag != '\0') {
		cVar2 = FUN_8015fa64();
		_pcursinvitem[sel_data] = cVar2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeControlPan__Fv()
 // line 1856, offset 0x80032948
	/* begin block 1 */
		// Start line: 1857
		// Start offset: 0x80032948

		/* begin block 1.1 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.2 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.2 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.3 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.3 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.4 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.4 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.5 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.5 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.6 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.6 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.7 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.7 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.8 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.8 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.9 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.9 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.10 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.10 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.11 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.11 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.12 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.12 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.13 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.13 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.14 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.14 */
		// End offset: 0x80032948
		// End Line: 1857

		/* begin block 1.15 */
			// Start line: 1857
			// Start offset: 0x80032948
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.15 */
		// End offset: 0x80032A48
		// End Line: 1873
	/* end block 1 */
	// End offset: 0x80032A48
	// End Line: 1873

	/* begin block 2 */
		// Start line: 4045
	/* end block 2 */
	// End Line: 4046

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeControlPan__Fv(void)

{
	uchar *p;
	
	p = pManaBuff;
	pManaBuff = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pLifeBuff;
	pLifeBuff = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pPanelText;
	pPanelText = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pChrPanel;
	pChrPanel = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pSpellCels;
	pSpellCels = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pPanelButtons;
	pPanelButtons = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pMultiBtns;
	pMultiBtns = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pTalkBtns;
	pTalkBtns = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pChrButtons;
	pChrButtons = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pDurIcons;
	pDurIcons = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pQLogCel;
	pQLogCel = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pSpellBkCel;
	pSpellBkCel = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pSBkBtnCel;
	pSBkBtnCel = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pSBkIconCels;
	pSBkIconCels = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = pGBoxBuff;
	pGBoxBuff = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CPrintString__FiPci(int No /*$a0*/, char *pszStr /*$a3*/, int Just /*$a2*/)
 // line 1894, offset 0x80032a58
	/* begin block 1 */
		// Start line: 1895
		// Start offset: 0x80032A58
		// Variables:
	// 		enum TXT_JUST Justify; // $a2
	// 		unsigned char R; // $t0
	// 		unsigned char G; // $a1
	// 		unsigned char B; // $v1
	/* end block 1 */
	// End offset: 0x80032B64
	// End Line: 1923

	/* begin block 2 */
		// Start line: 4121
	/* end block 2 */
	// End Line: 4122

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CPrintString__FiPci(int No,char *pszStr,int Just)

{
	char cVar1;
	int iVar2;
	uint B;
	uint G;
	uint R;
	
	cVar1 = _infoclr[sel_data];
	if (cVar1 == '\x01') {
		R = (uint)BLUER;
		G = (uint)BLUEG;
		B = (uint)BLUEB;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 == '\0') {
				R = (uint)WHITER;
				G = (uint)WHITEG;
				B = (uint)WHITEB;
				goto LAB_80032b2c;
			}
		}
		else {
			if (cVar1 == '\x02') {
				R = (uint)REDR;
				G = (uint)REDG;
				B = (uint)REDB;
				goto LAB_80032b2c;
			}
		}
		R = (uint)GOLDR;
		G = (uint)GOLDG;
		B = (uint)GOLDB;
	}
LAB_80032b2c:
	iVar2 = Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,0,No * 0xd + 10,pszStr,Just,InfoBoxRect,R,G,B);
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintInfo__Fv()
 // line 1966, offset 0x80032b74
	/* begin block 1 */
		// Start line: 1967
		// Start offset: 0x80032B74
		// Variables:
	// 		int NoOfLines; // $s2
	// 		int nOffset1; // $s4
	// 		int nlines; // $s3
	// 		int PageOffset; // $s6

		/* begin block 1.1 */
			// Start line: 1971
			// Start offset: 0x80032BA0

			/* begin block 1.1.1 */
				// Start line: 1984
				// Start offset: 0x80032BBC

				/* begin block 1.1.1.1 */
					// Start line: 1987
					// Start offset: 0x80032C00
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x80032C88
				// End Line: 1995
			/* end block 1.1.1 */
			// End offset: 0x80032C88
			// End Line: 1995

			/* begin block 1.1.2 */
				// Start line: 1998
				// Start offset: 0x80032C90

				/* begin block 1.1.2.1 */
					// Start line: 1998
					// Start offset: 0x80032C90

					/* begin block 1.1.2.1.1 */
						// Start line: 1999
						// Start offset: 0x80032CA4

						/* begin block 1.1.2.1.1.1 */
							// Start line: 2002
							// Start offset: 0x80032CE8
							// Variables:
						// 		int i; // $s1
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80032D70
						// End Line: 2007
					/* end block 1.1.2.1.1 */
					// End offset: 0x80032D78
					// End Line: 2008
				/* end block 1.1.2.1 */
				// End offset: 0x80032D78
				// End Line: 2008
			/* end block 1.1.2 */
			// End offset: 0x80032D78
			// End Line: 2008
		/* end block 1.1 */
		// End offset: 0x80032D78
		// End Line: 2008

		/* begin block 1.2 */
			// Start line: 2063
			// Start offset: 0x80032E90
			// Variables:
		// 		int i; // $s0
		/* end block 1.2 */
		// End offset: 0x80032F78
		// End Line: 2073
	/* end block 1 */
	// End offset: 0x80032F78
	// End Line: 2073

	/* begin block 2 */
		// Start line: 4282
	/* end block 2 */
	// End Line: 4283

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintInfo__Fv(void)

{
	short *psVar1;
	short sVar2;
	RECT *pRVar3;
	int iVar4;
	int No;
	char *Str;
	int Just;
	char *pcVar5;
	int iVar6;
	int No_00;
	int iVar7;
	int iVar8;
	
	if (talkflag != '\0') {
		return;
	}
	iVar8 = 0;
	No_00 = 0;
	iVar7 = 0;
	if (invflag == '\0') {
		if (gbActivePlayers == '\x01') {
			if (_infostr[sel_data * 0x100] != '\0') {
				iVar7 = GetWrap__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,InfoBoxRect);
			}
			iVar6 = 0;
			if (0 < _pnumlines[sel_data]) {
				pcVar5 = _panelstr;
				do {
					Str = pcVar5 + sel_data * 0x280;
					pcVar5 = pcVar5 + 0x40;
					iVar4 = GetWrap__5CFontPcP4RECT(&MediumFont,Str,InfoBoxRect);
					iVar6 = iVar6 + 1;
					iVar7 = iVar7 + iVar4;
				} while (iVar6 < _pnumlines[sel_data]);
			}
			iVar7 = 4 - iVar7;
		}
	}
	else {
		if (_infostr[sel_data * 0x100] != '\0') {
			No_00 = GetWrap__5CFontPcP4RECT(&MediumFont,_infostr + sel_data * 0x100,InfoBoxRect);
		}
		iVar6 = 0;
		if (0 < _pnumlines[sel_data]) {
			pcVar5 = _panelstr;
			do {
				Str = pcVar5 + sel_data * 0x280;
				pcVar5 = pcVar5 + 0x40;
				iVar4 = GetWrap__5CFontPcP4RECT(&MediumFont,Str,InfoBoxRect);
				iVar6 = iVar6 + 1;
				No_00 = No_00 + iVar4;
			} while (iVar6 < _pnumlines[sel_data]);
		}
	}
	pRVar3 = InfoBoxRect;
	InvPageFlag = 0;
	iVar6 = 0;
	if (invflag != '\0') {
		if ((6 < No_00) && (InvPageFlag = 1, InvPageNo != 0)) {
			iVar6 = No_00 + -6;
		}
		if (invflag != '\0') goto LAB_80032e34;
	}
	if (iVar7 < 0) {
		sVar2 = (short)iVar7;
		if (gbActivePlayers == '\x01') {
			iVar7 = 0;
			psVar1 = &InfoBoxRect->h;
			InfoBoxRect->y = InfoBoxRect->y + sVar2 * 0xc;
			pRVar3->h = *psVar1 + sVar2 * -0xc;
		}
		else {
			iVar7 = 0;
			InfoBoxRect->h = InfoBoxRect->h + sVar2 * -0xc;
		}
	}
LAB_80032e34:
	if (_infostr[sel_data * 0x100] != '\0') {
		No_00 = iVar7;
		if (invflag != '\0') {
			No_00 = iVar7 - iVar6;
		}
		iVar8 = CPrintString__FiPci(No_00,_infostr + sel_data * 0x100,1);
		iVar8 = iVar8 + -1;
	}
	No_00 = 0;
	if (0 < _pnumlines[sel_data]) {
		iVar4 = 0;
		pcVar5 = _panelstr;
		do {
			if (invflag == '\0') {
				No = No_00 + iVar8 + iVar7 + 1;
				Just = *(int *)((int)_pstrjust + iVar4 + sel_data * 0x28);
			}
			else {
				No = (No_00 + iVar8 + iVar7) - (iVar6 + -1);
				Just = *(int *)((int)_pstrjust + iVar4 + sel_data * 0x28);
			}
			No = CPrintString__FiPci(No,pcVar5 + sel_data * 0x280,Just);
			iVar8 = iVar8 + -1 + No;
			iVar4 = iVar4 + 4;
			No_00 = No_00 + 1;
			pcVar5 = pcVar5 + 0x40;
		} while (No_00 < _pnumlines[sel_data]);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInfoBox__FP4RECT(struct RECT *InfoRect /*$a0*/)
 // line 2079, offset 0x80032fa4
	/* begin block 1 */
		// Start line: 2080
		// Start offset: 0x80032FA4
		// Variables:
	// 		int pnum; // $s0

		/* begin block 1.1 */
			// Start line: 2094
			// Start offset: 0x8003303C

			/* begin block 1.1.1 */
				// Start line: 2099
				// Start offset: 0x800330A4

				/* begin block 1.1.1.1 */
					// Start line: 2100
					// Start offset: 0x800330A4

					/* begin block 1.1.1.1.1 */
						// Start line: 2101
						// Start offset: 0x800330D0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2102
							// Start offset: 0x800330D0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2103
								// Start offset: 0x80033108
								// Variables:
							// 		int nGold; // $s1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80033108
							// End Line: 2104
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800332C8
						// End Line: 2121
					/* end block 1.1.1.1.1 */
					// End offset: 0x800332C8
					// End Line: 2121

					/* begin block 1.1.1.1.2 */
						// Start line: 2125
						// Start offset: 0x800332E4

						/* begin block 1.1.1.1.2.1 */
							// Start line: 2129
							// Start offset: 0x800332E4

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 2130
								// Start offset: 0x80033318

								/* begin block 1.1.1.1.2.1.1.1 */
									// Start line: 2130
									// Start offset: 0x80033318

									/* begin block 1.1.1.1.2.1.1.1.1 */
										// Start line: 2141
										// Start offset: 0x80033334

										/* begin block 1.1.1.1.2.1.1.1.1.1 */
											// Start line: 2142
											// Start offset: 0x80033334

											/* begin block 1.1.1.1.2.1.1.1.1.1.1 */
												// Start line: 2142
												// Start offset: 0x8003335C

												/* begin block 1.1.1.1.2.1.1.1.1.1.1.1 */
													// Start line: 2142
													// Start offset: 0x8003335C

													/* begin block 1.1.1.1.2.1.1.1.1.1.1.1.1 */
														// Start line: 2148
														// Start offset: 0x80033420
													/* end block 1.1.1.1.2.1.1.1.1.1.1.1.1 */
													// End offset: 0x80033420
													// End Line: 2149
												/* end block 1.1.1.1.2.1.1.1.1.1.1.1 */
												// End offset: 0x80033434
												// End Line: 2154
											/* end block 1.1.1.1.2.1.1.1.1.1.1 */
											// End offset: 0x80033434
											// End Line: 2154
										/* end block 1.1.1.1.2.1.1.1.1.1 */
										// End offset: 0x80033458
										// End Line: 2158
									/* end block 1.1.1.1.2.1.1.1.1 */
									// End offset: 0x80033458
									// End Line: 2158
								/* end block 1.1.1.1.2.1.1.1 */
								// End offset: 0x80033678
								// End Line: 2195
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x80033678
							// End Line: 2195
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x80033678
						// End Line: 2195
					/* end block 1.1.1.1.2 */
					// End offset: 0x80033678
					// End Line: 2195
				/* end block 1.1.1.1 */
				// End offset: 0x80033678
				// End Line: 2195
			/* end block 1.1.1 */
			// End offset: 0x80033678
			// End Line: 2195
		/* end block 1.1 */
		// End offset: 0x80033678
		// End Line: 2195
	/* end block 1 */
	// End offset: 0x800336C0
	// End Line: 2201

	/* begin block 2 */
		// Start line: 4532
	/* end block 2 */
	// End Line: 4533

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInfoBox__FP4RECT(RECT *InfoRect)

{
	char *__format;
	char *pcVar1;
	ushort ItemNo;
	int nGold;
	
	nGold = sel_data;
	InfoBoxRect = InfoRect;
	if ((((panelflag == '\0') && (InfoBoxRect = InfoRect, _trigflag[sel_data] == '\0')) &&
			(InfoBoxRect = InfoRect, _pcursinvitem[sel_data] == -1)) &&
		 (InfoBoxRect = InfoRect, (&_spselflag2)[sel_data] == (TASK *)0x0)) {
		InfoBoxRect = InfoRect;
		_infostr[sel_data * 0x100] = '\0';
		_infoclr[sel_data] = '\0';
		ClearPanel__Fv();
	}
	if ((invflag == '\0') && (((&_spselflag2)[nGold] != (TASK *)0x0 || (_trigflag[sel_data] != '\0')))
		 ) {
		_infoclr[sel_data] = '\0';
	}
	else {
		if ((&_pcurs)[myplr] < 0xc) {
			if ((_pcursinvitem[sel_data] == -1) || (invflag != '\0')) {
				if ((&_pcursmonst)[sel_data] == -1) {
					if ((int)(&_pcursobj)[sel_data] == -1) {
						if ((int)(&_pcursitem)[sel_data] == -1) {
							if ((&_pcursplr)[sel_data] != -1) {
								_infoclr[sel_data] = '\x03';
								strcpy(_infostr + sel_data * 0x100,(&plr)[(int)(&_pcursplr)[sel_data]]._pName);
								ClearPanel__Fv();
								__format = GetStr__Fi(0x247);
								sprintf(&tempstr,__format,(int)(&plr)[(int)(&_pcursplr)[sel_data]]._pLevel);
								AddPanelString__FPCci(&tempstr,1);
								__format = GetStr__Fi(0x1f1);
								sprintf(&tempstr,__format,(&plr)[(int)(&_pcursplr)[sel_data]]._pHitPoints >> 6,
												(&plr)[(int)(&_pcursplr)[sel_data]]._pMaxHP >> 6);
								AddPanelString__FPCci(&tempstr,1);
							}
						}
						else {
							GetItemStr__Fi((int)(&_pcursitem)[sel_data]);
						}
					}
					else {
						GetObjectStr__Fi((int)(&_pcursobj)[sel_data]);
					}
				}
				else {
					if ((leveltype == '\0') || (optionsflag != (void *)0x0)) {
						__format = GetStr__Fi(towner[(&_pcursmonst)[sel_data]]._tName);
						strcpy(_infostr + sel_data * 0x100,__format);
					}
					else {
						_infoclr[sel_data] = '\0';
						__format = GetStr__Fi(monster[(&_pcursmonst)[sel_data]].mName);
						strcpy(_infostr + sel_data * 0x100,__format);
						ClearPanel__Fv();
						if (monster[(&_pcursmonst)[sel_data]]._uniqtype == '\0') {
							FUN_80155934((uint)(monster[(&_pcursmonst)[sel_data]].MType)->mtype);
						}
						else {
							_infoclr[sel_data] = '\x03';
							FUN_80155bb8();
						}
					}
				}
			}
		}
		else {
			if ((&plr)[myplr].HoldItem._itype == 0xb) {
				nGold = (&plr)[myplr].HoldItem._ivalue;
				__format = GetStr__Fi(0x4ff);
				pcVar1 = get_pieces_str__Fi(nGold);
				sprintf(_infostr + sel_data * 0x100,__format,nGold,pcVar1);
			}
			else {
				if ((&plr)[myplr].HoldItem._iStatFlag == '\0') {
					ClearPanel__Fv();
					__format = GetStr__Fi(0x35e);
					AddPanelString__FPCci(__format,1);
					_pinfoflag[sel_data] = '\x01';
				}
				else {
					if ((&plr)[myplr].HoldItem._iIdentified == '\0') {
						ItemNo = (&plr)[myplr].HoldItem._iName;
					}
					else {
						ItemNo = (&plr)[myplr].HoldItem._iIName;
					}
					__format = MakeItemStr__FP10ItemStructUsUs(&(&plr)[myplr].HoldItem,ItemNo,0x100);
					strcpy(_infostr + sel_data * 0x100,__format);
					if ((&plr)[myplr].HoldItem._iMagical == '\x01') {
						_infoclr[sel_data] = '\x01';
					}
					if ((&plr)[myplr].HoldItem._iMagical == '\x02') {
						_infoclr[sel_data] = '\x03';
					}
				}
			}
		}
	}
	if ((_infostr[sel_data * 0x100] != '\0') || (_pnumlines[sel_data] != 0)) {
		PrintInfo__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MY_PlrStringXY__Fv()
 // line 2253, offset 0x800336d8
	/* begin block 1 */
		// Start line: 2254
		// Start offset: 0x800336D8
		// Variables:
	// 		struct CSDATA *ptr; // $s6
	// 		char r; // stack offset -72
	// 		char g; // stack offset -64
	// 		char b; // stack offset -56
	// 		int x; // $s7
	// 		int y; // $fp
	// 		int w; // stack offset -48
	// 		int len; // $s5
	// 		struct RECT Angle; // stack offset -80
	/* end block 1 */
	// End offset: 0x80033DB4
	// End Line: 2390

	/* begin block 2 */
		// Start line: 4892
	/* end block 2 */
	// End Line: 4893

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void MY_PlrStringXY__Fv(void)

{
	char cVar1;
	short sVar2;
	int iVar3;
	char *Str;
	int StrId;
	uint local_58;
	uint G;
	uint R;
	int X;
	int Y;
	TXT_JUST local_68;
	RECT *local_64;
	RECT local_50;
	byte local_48;
	byte local_40;
	byte local_38;
	int local_30;
	
	iVar3 = CsNo;
	local_48 = 0;
	local_40 = 0;
	local_38 = 0;
	cVar1 = CS_Tab[CsNo].col;
	if (cVar1 == '\x01') {
		local_48 = BLUER;
		local_40 = BLUEG;
		local_38 = BLUEB;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 == '\0') {
				local_48 = WHITER;
				local_40 = WHITEG;
				local_38 = WHITEB;
			}
		}
		else {
			if (cVar1 == '\x02') {
				local_48 = REDR;
				local_40 = REDG;
				local_38 = REDB;
			}
			else {
				if (cVar1 == '\x03') {
					local_48 = GOLDR;
					local_40 = GOLDG;
					local_38 = GOLDB;
				}
			}
		}
	}
	Y = CS_Tab[CsNo].y;
	local_30 = CS_Tab[CsNo].w;
	X = CS_Tab[CsNo].x + 0x30 + CS_XOFF;
	if ((-1 < X) && (X < 0x141)) {
		if (local_30 != 0) {
			SetBack__6Dialogi(&CSBack,0x94);
			SetBorder__6Dialogi(&CSBack,0x12);
			SetRGB__6DialogUcUcUc(&CSBack,BACKR,BACKG,BACKB);
			Back__6Dialogiiii(&CSBack,X + 0x10,Y + 0x22,local_30,0xb);
			CSRect.x = (short)(X + 0x10);
			CSRect.y = (short)(Y + 0x22);
			CSRect.h = 0xb;
			CSRect.w = (short)local_30;
		}
		if (CS_Tab[iVar3].String != (char *)0x0) {
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,9,CS_Tab[iVar3].String,JustCentre,&CSRect,(uint)local_48,
								 (uint)local_40,(uint)local_38);
		}
		CSRect.x = 0x10;
		local_48 = WHITER;
		CSRect.w = 0x118;
		local_40 = WHITEG;
		sVar2 = (short)X;
		local_50.w = sVar2 + 8;
		CSRect.y = 0x20;
		CSRect.h = 0xb0;
		local_50.x = 0;
		local_50.y = 0x20;
		local_50.h = 0xb0;
		local_38 = WHITEB;
		if (CS_Tab[iVar3].Text1 != 0) {
			if (CS_Tab[iVar3].Text2 == 0) {
				Str = GetStr__Fi(CS_Tab[iVar3].Text1);
				StrId = GetStrWidth__5CFontPc(&MediumFont,Str);
				if (CS_Tab[iVar3].Text1 == 0x29) {
					Str = GetStr__Fi(0x29);
					local_68 = JustRight;
					local_64 = &local_50;
					StrId = X;
				}
				else {
					Str = GetStr__Fi(CS_Tab[iVar3].Text1);
					local_68 = JustLeft;
					local_64 = &CSRect;
					StrId = X - StrId;
				}
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,StrId + -6,Y + 0xb,Str,local_68,local_64,(uint)local_48,
									 (uint)local_40,(uint)local_38);
			}
			if ((CS_Tab[iVar3].Text1 != 0) && (StrId = CS_Tab[iVar3].Text2, StrId != 0)) {
				if (CsNo - 0xbU < 3) {
					Str = GetStr__Fi(StrId);
					GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar3].Text2);
					R = (uint)local_48;
					G = (uint)local_40;
					local_58 = (uint)local_38;
					StrId = X + local_30 + 5;
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,StrId,Y + 0xf,Str,JustLeft,&CSRect,R,G,local_58);
					Str = GetStr__Fi(CS_Tab[iVar3].Text1);
					GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar3].Text1);
				}
				else {
					Str = GetStr__Fi(StrId);
					StrId = GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar3].Text2);
					R = (uint)local_48;
					G = (uint)local_40;
					local_58 = (uint)local_38;
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,(X - StrId) + -0x1e,Y + 0xf,Str,JustLeft,&CSRect,R,G,local_58);
					Str = GetStr__Fi(CS_Tab[iVar3].Text1);
					StrId = GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar3].Text1);
					StrId = (X - StrId) + -0xe;
				}
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,StrId,Y + 2,Str,JustLeft,&CSRect,R,G,local_58);
			}
		}
		StrId = CS_Tab[iVar3].Text3;
		if (StrId != 0) {
			if (StrId == 0x41) {
				Str = GetStr__Fi(0x41);
				X = GetStrWidth__5CFontPc(&MediumFont,Str);
				CSRect.x = sVar2 - ((short)X + -0x10);
				CSRect.y = (short)Y + 0xe;
				CSRect.w = (short)local_30 + (short)X;
				CSRect.h = 0x18;
				Str = GetStr__Fi(CS_Tab[iVar3].Text3);
				X = 0;
				Y = 0xd;
				local_58 = (uint)local_48;
				G = (uint)local_40;
				local_68 = JustRight;
				R = (uint)local_38;
			}
			else {
				if (StrId == 0x2c2) {
					Str = GetStr__Fi(0x2c2);
					X = GetStrWidth__5CFontPc(&MediumFont,Str);
					CSRect.x = sVar2 + 0x10;
					CSRect.y = (short)Y + 0xe;
					CSRect.w = (short)local_30 + (short)X;
					CSRect.h = 0x18;
					Str = GetStr__Fi(CS_Tab[iVar3].Text3);
					X = 0;
					local_58 = (uint)local_48;
					Y = 0xd;
					G = (uint)local_40;
					R = (uint)local_38;
					local_68 = JustLeft;
				}
				else {
					Str = GetStr__Fi(StrId);
					StrId = GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar3].Text3);
					Y = Y + -5;
					local_68 = JustLeft;
					local_58 = (uint)local_48;
					G = (uint)local_40;
					R = (uint)local_38;
					X = X + ((int)((local_30 - StrId) + ((uint)(local_30 - StrId) >> 0x1f)) >> 1);
				}
			}
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,X,Y,Str,local_68,&CSRect,local_58,G,R);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ADD_PlrStringXY__FPCcc(char *pszStr /*$v1*/, char col /*$s1*/)
 // line 2398, offset 0x80033de8
	/* begin block 1 */
		// Start line: 2399
		// Start offset: 0x80033DE8
		// Variables:
	// 		struct CSDATA *ptr; // $s0
	/* end block 1 */
	// End offset: 0x80033E78
	// End Line: 2415

	/* begin block 2 */
		// Start line: 5216
	/* end block 2 */
	// End Line: 5217

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ADD_PlrStringXY__FPCcc(char *pszStr,char col)

{
	int iVar1;
	
	iVar1 = CsNo;
	strcpy(CS_Tab[CsNo].String,pszStr);
	CS_Tab[iVar1].col = col;
	CsNo = CsNo + 1;
	if (CS_Tab[CsNo].w == 0) {
		CS_Tab[CsNo].String[0] = '\0';
		CsNo = CsNo + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawPlus__Fii(int n /*$s3*/, int pnum /*$s0*/)
 // line 2444, offset 0x80033e90
	/* begin block 1 */
		// Start line: 2445
		// Start offset: 0x80033E90
		// Variables:
	// 		struct TextDat *ThisDat; // $s1
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		int otpos; // $s2
	// 		int x; // $v1
	// 		int y; // $a3
	/* end block 1 */
	// End offset: 0x80034008
	// End Line: 2493

	/* begin block 2 */
		// Start line: 5318
	/* end block 2 */
	// End Line: 5319

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawPlus__Fii(int n,int pnum)

{
	uchar uVar1;
	TextDat *this;
	int iVar2;
	uint uVar3;
	POLY_FT4 *pPVar4;
	int X;
	
	this = GM_UseTexData__Fi(0);
	iVar2 = GetOverlayOtBase__7CBlocks();
	if (n == 4) {
		uVar1 = CrossCount[pnum];
		CrossCount[pnum] = uVar1 + 1;
		if ((uVar1 + 1 & 1) != 0) {
			if (pnum == 0) {
				uVar3 = VID_GetTick__Fv();
				X = 0x19;
			}
			else {
				uVar3 = VID_GetTick__Fv();
				X = 0x127;
			}
			pPVar4 = PrintFt4__7TextDatiiiiii(this,(uVar3 >> 3 & 3) + 1,X,100,0,iVar2 + 4,0);
			pPVar4->r0 = -0x60;
			pPVar4->g0 = -0x60;
			pPVar4->b0 = -0x60;
			pPVar4->code = pPVar4->code & 0xfe | 2;
		}
	}
	else {
		chrbtnactive = '\x01';
		pPVar4 = PrintFt4__7TextDatiiiiii
											 (this,0x83,CS_Tab[n + 0x14].x + 0x42 + CS_XOFF,CS_Tab[n + 0x14].y + 0x22,0,
												iVar2 + 4,0);
		if (lus == n) {
			uVar1 = -0x80;
		}
		else {
			uVar1 = ' ';
		}
		pPVar4->r0 = uVar1;
		pPVar4->g0 = uVar1;
		pPVar4->b0 = uVar1;
		pPVar4->code = pPVar4->code & 0xfc;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChrCheckValidButton__Fi(int move /*$a0*/)
 // line 2500, offset 0x80034028
	/* begin block 1 */
		// Start line: 2501
		// Start offset: 0x80034028
		// Variables:
	// 		int pc; // $v0
	// 		int count; // $v1

		/* begin block 1.1 */
			// Start line: 2502
			// Start offset: 0x80034028
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x80034264
		// End Line: 2538
	/* end block 1 */
	// End offset: 0x8003432C
	// End Line: 2553

	/* begin block 2 */
		// Start line: 5470
	/* end block 2 */
	// End Line: 5471

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChrCheckValidButton__Fi(int move)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	lus = lus + move;
	iVar2 = (int)(&plr)[options_pad]._pClass;
	do {
		if (iVar3 == 1) {
			if ((int)(&plr)[options_pad]._pBaseMag == (&INT_800da43c)[iVar2 * 4]) {
				(&UCHAR_00h_8011c785)[options_pad * 4] = '\x01';
			}
			else {
				(&UCHAR_00h_8011c785)[options_pad * 4] = '\0';
			}
		}
		else {
			if (iVar3 < 2) {
				if (iVar3 == 0) {
					if ((int)(&plr)[options_pad]._pBaseStr == (&MaxStats)[iVar2 * 4]) {
						(&chrbtn)[options_pad * 4] = '\x01';
					}
					else {
						(&chrbtn)[options_pad * 4] = '\0';
					}
				}
			}
			else {
				if (iVar3 == 2) {
					if ((int)(&plr)[options_pad]._pBaseDex == (&INT_800da440)[iVar2 * 4]) {
						*(undefined *)(options_pad * 4 + -0x7fee387a) = 1;
					}
					else {
						*(undefined *)(options_pad * 4 + -0x7fee387a) = 0;
					}
				}
				else {
					if (iVar3 == 3) {
						if ((int)(&plr)[options_pad]._pBaseVit == *(int *)(&DAT_800da444 + iVar2 * 0x10)) {
							*(undefined *)(options_pad * 4 + -0x7fee3879) = 1;
						}
						else {
							*(undefined *)(options_pad * 4 + -0x7fee3879) = 0;
						}
					}
				}
			}
		}
		iVar3 = iVar3 + 1;
	} while (iVar3 < 4);
	if (move == 0) {
		move = -1;
	}
	if (lus < 0) {
		lus = 3;
	}
	if (3 < lus) {
		lus = 0;
	}
	uVar1 = (&chrbtn + myplr * 4)[lus];
	iVar2 = 0;
	while( true ) {
		if (uVar1 == '\0') {
			return;
		}
		lus = lus + move;
		if (lus < 0) {
			lus = 3;
		}
		if (3 < lus) {
			lus = 0;
		}
		iVar2 = iVar2 + 1;
		if (3 < iVar2) break;
		uVar1 = (&chrbtn + myplr * 4)[lus];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawArrows__Fv()
 // line 2564, offset 0x80034334
	/* begin block 1 */
		// Start line: 2565
		// Start offset: 0x80034334
		// Variables:
	// 		struct TextDat *ThisDat; // $s2
	// 		struct POLY_FT4 *Ft4; // $t2
	// 		unsigned char flip; // $s0
	// 		int x; // $s1
	// 		int otpos; // $s3
	/* end block 1 */
	// End offset: 0x80034414
	// End Line: 2592

	/* begin block 2 */
		// Start line: 5600
	/* end block 2 */
	// End Line: 5601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawArrows__Fv(void)

{
	uchar uVar1;
	uchar uVar2;
	TextDat *this;
	int iVar3;
	POLY_FT4 *pPVar4;
	uint XFlip;
	uint X;
	
	this = GM_UseTexData__Fi(0);
	iVar3 = GetMaxOtPos__7CBlocks();
	X = 0x11e;
	if (CS_XOFF != 0) {
		X = 0x1c;
	}
	XFlip = (uint)(CS_XOFF == 0);
	pPVar4 = PrintFt4__7TextDatiiiiii(this,0x7e,X,0xca,XFlip,iVar3 + -4,0);
	uVar2 = GOLDB;
	uVar1 = GOLDG;
	pPVar4->r0 = GOLDR;
	pPVar4->g0 = uVar1;
	pPVar4->b0 = uVar2;
	pPVar4->code = pPVar4->code & 0xfc;
	pPVar4 = PrintFt4__7TextDatiiiiii(this,0x7e,X | 1,0xcb,XFlip,iVar3 + -4,0);
	pPVar4->r0 = '\0';
	pPVar4->g0 = '\0';
	pPVar4->b0 = '\0';
	pPVar4->code = pPVar4->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BuildChr__Fv()
 // line 2596, offset 0x80034434
	/* begin block 1 */
		// Start line: 2597
		// Start offset: 0x80034434
		// Variables:
	// 		char c; // $s1
	// 		char chrstr[64]; // stack offset -80
	// 		long mind; // $s2
	// 		long maxd; // $s0
	// 		int hper; // $s0
	// 		int ac; // $s0

		/* begin block 1.1 */
			// Start line: 2770
			// Start offset: 0x800352FC

			/* begin block 1.1.1 */
				// Start line: 2775
				// Start offset: 0x8003539C
			/* end block 1.1.1 */
			// End offset: 0x80035434
			// End Line: 2777
		/* end block 1.1 */
		// End offset: 0x80035434
		// End Line: 2777
	/* end block 1 */
	// End offset: 0x8003567C
	// End Line: 2804

	/* begin block 2 */
		// Start line: 5681
	/* end block 2 */
	// End Line: 5682

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BuildChr__Fv(void)

{
	ushort uVar1;
	char *pszStr;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int StrId;
	int iVar7;
	int iVar8;
	char col;
	bool col_00;
	char local_50 [64];
	
	CsNo = 0;
	ADD_PlrStringXY__FPCcc((&plr)[options_pad]._pName,'\0');
	ADD_PlrStringXY__FPCcc((&plr)[options_pad]._pName,'\0');
	col = (&plr)[options_pad]._pClass;
	if (col == '\0') {
		pszStr = GetStr__Fi(0x4be);
		ADD_PlrStringXY__FPCcc(pszStr,'\0');
		StrId = 0x4be;
	}
	else {
		if (col == '\x01') {
			pszStr = GetStr__Fi(0x375);
			ADD_PlrStringXY__FPCcc(pszStr,'\0');
			StrId = 0x375;
		}
		else {
			if (col != '\x02') goto LAB_80034580;
			pszStr = GetStr__Fi(1000);
			ADD_PlrStringXY__FPCcc(pszStr,'\0');
			StrId = 1000;
		}
	}
	pszStr = GetStr__Fi(StrId);
	ADD_PlrStringXY__FPCcc(pszStr,'\0');
LAB_80034580:
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pLevel);
	ADD_PlrStringXY__FPCcc(local_50,'\0');
	pszStr = GetStr__Fi(0x504);
	sprintf(local_50,pszStr,(&plr)[options_pad]._pExperience);
	ADD_PlrStringXY__FPCcc(local_50,'\0');
	if ((&plr)[options_pad]._pLevel == '2') {
		pszStr = GetStr__Fi(0x2ba);
		strcpy(local_50,pszStr);
		col = '\x03';
	}
	else {
		pszStr = GetStr__Fi(0x504);
		col = '\0';
		sprintf(local_50,pszStr,(&plr)[options_pad]._pNextExper);
	}
	ADD_PlrStringXY__FPCcc(local_50,col);
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(&plr)[options_pad]._pGold);
	ADD_PlrStringXY__FPCcc(local_50,'\0');
	StrId = (&plr)[options_pad]._pIBonusAC;
	col_00 = 0 < StrId;
	if (StrId < 0) {
		col_00 = true;
	}
	iVar6 = (uint)(ushort)(&plr)[options_pad]._pDexterity << 0x10;
	iVar2 = iVar6 >> 0x10;
	iVar7 = (&plr)[options_pad]._pIAC;
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,
					iVar7 + StrId + (((iVar2 / 5 + (iVar2 >> 0x1f)) - (iVar6 >> 0x1f)) * 0x10000 >> 0x10));
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	StrId = (&plr)[options_pad]._pIBonusToHit;
	col_00 = 0 < StrId;
	if (StrId < 0) {
		col_00 = true;
	}
	uVar1 = (&plr)[options_pad]._pDexterity;
	pszStr = GetStr__Fi(0x503);
	sprintf(local_50,pszStr,((int)((uint)uVar1 << 0x10) >> 0x11) + StrId + 0x32);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	StrId = (&plr)[options_pad]._pIBonusDam;
	col_00 = 0 < StrId;
	if (StrId < 0) {
		col_00 = true;
	}
	iVar6 = (&plr)[options_pad]._pIMinDam;
	iVar2 = (&plr)[options_pad]._pIBonusDamMod;
	if (((&plr)[options_pad].InvBody[4]._itype == 3) && ((&plr)[options_pad]._pClass != '\x01')) {
		iVar7 = (&plr)[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar7 = (&plr)[options_pad]._pDamageMod;
	}
	iVar8 = (&plr)[options_pad]._pIMaxDam;
	iVar3 = (&plr)[options_pad]._pIBonusDam;
	iVar4 = (&plr)[options_pad]._pIBonusDamMod;
	if (((&plr)[options_pad].InvBody[4]._itype == 3) && ((&plr)[options_pad]._pClass != '\x01')) {
		iVar5 = (&plr)[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar5 = (&plr)[options_pad]._pDamageMod;
	}
	pszStr = GetStr__Fi(0x501);
	sprintf(local_50,pszStr,iVar6 + (iVar6 * StrId) / 100 + iVar2 + iVar7,
					iVar8 + (iVar8 * iVar3) / 100 + iVar4 + iVar5);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pMagResist != '\0';
	if ((&plr)[options_pad]._pMagResist < 'K') {
		pszStr = GetStr__Fi(0x503);
		sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pMagResist);
	}
	else {
		col_00 = true;
		pszStr = GetStr__Fi(0x285);
		sprintf(local_50,pszStr);
	}
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pFireResist != '\0';
	if ((&plr)[options_pad]._pFireResist < 'K') {
		pszStr = GetStr__Fi(0x503);
		sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pFireResist);
	}
	else {
		col_00 = true;
		pszStr = GetStr__Fi(0x285);
		sprintf(local_50,pszStr);
	}
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pLghtResist != '\0';
	if ((&plr)[options_pad]._pLghtResist < 'K') {
		pszStr = GetStr__Fi(0x503);
		sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pLghtResist);
	}
	else {
		col_00 = true;
		pszStr = GetStr__Fi(0x285);
		sprintf(local_50,pszStr);
	}
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pBaseStr);
	ADD_PlrStringXY__FPCcc
						(local_50,-((&MaxStats)[(int)(&plr)[options_pad]._pClass * 4] ==
											 (int)(&plr)[options_pad]._pBaseStr) & 3);
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pBaseMag);
	ADD_PlrStringXY__FPCcc
						(local_50,-((&INT_800da43c)[(int)(&plr)[options_pad]._pClass * 4] ==
											 (int)(&plr)[options_pad]._pBaseMag) & 3);
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pBaseDex);
	ADD_PlrStringXY__FPCcc
						(local_50,-((&INT_800da440)[(int)(&plr)[options_pad]._pClass * 4] ==
											 (int)(&plr)[options_pad]._pBaseDex) & 3);
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pBaseVit);
	ADD_PlrStringXY__FPCcc
						(local_50,-(*(int *)(&DAT_800da444 + (int)(&plr)[options_pad]._pClass * 0x10) ==
											 (int)(&plr)[options_pad]._pBaseVit) & 3);
	local_50[0] = '\0';
	if (0 < (&plr)[options_pad]._pStatPts) {
		pszStr = GetStr__Fi(0x4fd);
		sprintf(local_50,pszStr,(&plr)[options_pad]._pStatPts);
	}
	ADD_PlrStringXY__FPCcc(local_50,'\x02');
	col_00 = (&plr)[options_pad]._pBaseStr < (&plr)[options_pad]._pStrength;
	if ((&plr)[options_pad]._pStrength < (&plr)[options_pad]._pBaseStr) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pStrength);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pBaseMag < (&plr)[options_pad]._pMagic;
	if ((&plr)[options_pad]._pMagic < (&plr)[options_pad]._pBaseMag) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pMagic);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pBaseDex < (&plr)[options_pad]._pDexterity;
	if ((&plr)[options_pad]._pDexterity < (&plr)[options_pad]._pBaseDex) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pDexterity);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pBaseVit < (&plr)[options_pad]._pVitality;
	if ((&plr)[options_pad]._pVitality < (&plr)[options_pad]._pBaseVit) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(int)(&plr)[options_pad]._pVitality);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	if (0 < (&plr)[options_pad]._pStatPts) {
		StrId = CalcStatDiff__Fi(options_pad);
		if (StrId < (&plr)[options_pad]._pStatPts) {
			StrId = CalcStatDiff__Fi(options_pad);
			(&plr)[options_pad]._pStatPts = StrId;
		}
	}
	col_00 = (&plr)[options_pad]._pMaxHPBase < (&plr)[options_pad]._pMaxHP;
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(&plr)[options_pad]._pMaxHP >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	if ((&plr)[options_pad]._pHitPoints != (&plr)[options_pad]._pMaxHP) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(0x4fd);
	sprintf(local_50,pszStr,(&plr)[options_pad]._pHitPoints >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = (&plr)[options_pad]._pMaxManaBase < (&plr)[options_pad]._pMaxMana;
	sprintf(local_50,(char *)&PTR_DAT_8011b6a4,(&plr)[options_pad]._pMaxMana >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	if ((&plr)[options_pad]._pMana != (&plr)[options_pad]._pMaxMana) {
		col_00 = true;
	}
	sprintf(local_50,(char *)&PTR_DAT_8011b6a4,(&plr)[options_pad]._pMana >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	ChrCheckValidButton__Fi(0);
	CsNo = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawChr__Fv()
 // line 2808, offset 0x80035698
	/* begin block 1 */
		// Start line: 2809
		// Start offset: 0x80035698
		// Variables:
	// 		char chrstr[64]; // stack offset -80
	// 		int pc; // $v0
	// 		struct CPad *P; // $s1

		/* begin block 1.1 */
			// Start line: 2893
			// Start offset: 0x80035AC0

			/* begin block 1.1.1 */
				// Start line: 2894
				// Start offset: 0x80035AE0
				// Variables:
			// 		int llus; // $s2
			// 		int move; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80035B2C
			// End Line: 2906
		/* end block 1.1 */
		// End offset: 0x80035B2C
		// End Line: 2906
	/* end block 1 */
	// End offset: 0x80035B2C
	// End Line: 2906

	/* begin block 2 */
		// Start line: 6145
	/* end block 2 */
	// End Line: 6146

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawChr__Fv(void)

{
	ushort Str;
	int iVar1;
	CPad *this;
	int move;
	
	chrbtnactive = '\0';
	SetBorder__6Dialogi(&CSBack,0x12);
	SetRGB__6DialogUcUcUc(&CSBack,'@','@','@');
	if (initchr != (void *)0x0) {
		initchr = (void *)0x0;
		if ((&plr)[options_pad]._pStatPts == 0) {
			CS_XOFF = 0;
		}
		else {
			CS_XOFF = 0x140;
		}
		BuildChr__Fv();
	}
	CsNo = 0;
	if (0 < NoCSEntries) {
		do {
			MY_PlrStringXY__Fv();
			CsNo = CsNo + 1;
		} while (CsNo < NoCSEntries);
	}
	SetBack__6Dialogi(&CSBack,5);
	SetBorder__6Dialogi(&CSBack,0x12);
	SetRGB__6DialogUcUcUc(&CSBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&CSBack,0x10,0x20,0x118,0xb0);
	CSRect.x = 0x10;
	CSRect.y = 0x20;
	CSRect.w = 0x118;
	CSRect.h = 0xb0;
	Str = 0x4a0;
	if ((0 < (&plr)[options_pad]._pStatPts) && (CS_XOFF != 0)) {
		Str = 0x4e6;
	}
	PrintSelectBack__FUs(Str);
	DrawArrows__Fv();
	if (0 < (&plr)[options_pad]._pStatPts) {
		iVar1 = (int)(&plr)[options_pad]._pClass;
		if ((int)(&plr)[options_pad]._pBaseStr < (&MaxStats)[iVar1 * 4]) {
			DrawPlus__Fii(0,0);
		}
		if ((int)(&plr)[options_pad]._pBaseMag < (&INT_800da43c)[iVar1 * 4]) {
			DrawPlus__Fii(1,0);
		}
		if ((int)(&plr)[options_pad]._pBaseDex < (&INT_800da440)[iVar1 * 4]) {
			DrawPlus__Fii(2,0);
		}
		if ((int)(&plr)[options_pad]._pBaseVit < *(int *)(&DAT_800da444 + iVar1 * 0x10)) {
			DrawPlus__Fii(3,0);
		}
	}
	plusanim = plusanim + '\x01';
	if (plusanim == '\x18') {
		plusanim = '\0';
	}
	this = PAD_GetPad__FiUc(options_pad,'\0');
	SetPadTick__4CPadUs(this,10);
	SetPadTickMask__4CPadUs(this,0xf);
	Str = GetTick__C4CPad(this);
	if ((Str & 4) != 0) {
		if (CS_XOFF != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		CS_XOFF = 0;
	}
	Str = GetTick__C4CPad(this);
	if ((Str & 8) != 0) {
		if (CS_XOFF == 0) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		CS_XOFF = 0x140;
	}
	iVar1 = lus;
	if ((chrbtnactive != '\0') && (CS_XOFF == 0x140)) {
		Str = GetTick__C4CPad(this);
		move = -((uint)Str & 1);
		Str = GetTick__C4CPad(this);
		if ((Str & 2) != 0) {
			move = 1;
		}
		ChrCheckValidButton__Fi(move);
		if (iVar1 != lus) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawChrTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 2959, offset 0x80035b48
	/* begin block 1 */
		// Start line: 2960
		// Start offset: 0x80035B48
		// Variables:
	// 		int omp; // $s0
	/* end block 1 */
	// End offset: 0x80035C44
	// End Line: 2985

	/* begin block 2 */
		// Start line: 6461
	/* end block 2 */
	// End Line: 6462

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawChrTSK__FP4TASK(TASK *T)

{
	int iVar1;
	int Frames;
	
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	stream_pause__Fv();
	PostGamePad__Fiiii(2,0,0,0);
	iVar1 = myplr;
	myplr = options_pad;
	Frames = 2;
	while ((TSK_Sleep(Frames), chrflag != '\0' && (-1 < options_pad))) {
		DrawChr__Fv();
		Frames = 1;
	}
	myplr = iVar1;
	PostGamePad__Fiiii(5,0,0,0);
	PauseMode = '\x01';
	TSK_Sleep(2);
	PauseMode = '\0';
	stream_resume__Fv();
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLevelUpIcon__Fi(int pnum /*$a1*/)
 // line 2993, offset 0x80035c58
	/* begin block 1 */
		// Start line: 2994
		// Start offset: 0x80035C58
	/* end block 1 */
	// End offset: 0x80035CDC
	// End Line: 3001

	/* begin block 2 */
		// Start line: 6531
	/* end block 2 */
	// End Line: 6532

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawLevelUpIcon__Fi(int pnum)

{
	if ((((optionsflag == (void *)0x0) && (DoShowPanel != (void *)0x0)) && (stextflag == '\0')) &&
		 (qtextflag == '\0')) {
		lus = 4;
		DrawPlus__Fii(4,pnum);
		plusanim = plusanim + '\x01';
		if (plusanim == '\x18') {
			plusanim = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckChrBtns__Fv()
 // line 3006, offset 0x80035cec
	/* begin block 1 */
		// Start line: 3007
		// Start offset: 0x80035CEC
		// Variables:
	// 		int pc; // $s0
	/* end block 1 */
	// End offset: 0x8003605C
	// End Line: 3057

	/* begin block 2 */
		// Start line: 6561
	/* end block 2 */
	// End Line: 6562

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckChrBtns__Fv(void)

{
	int iVar1;
	int *piVar2;
	int iVar3;
	
	if (CS_XOFF != 0x140) {
		return;
	}
	if (chrbtnactive == '\0') {
		return;
	}
	if ((&plr)[options_pad]._pStatPts == 0) {
		return;
	}
	ChrCheckValidButton__Fi(0);
	if ((&chrbtn)[lus + myplr * 4] == '\0') {
		PlaySFX__Fi(IS_TITLSLCT);
		(&plr)[options_pad]._pStatPts = (&plr)[options_pad]._pStatPts + -1;
	}
	iVar3 = (int)(&plr)[options_pad]._pClass;
	if (lus == 1) {
		NetSendCmdParam1__FUcUcUs('\x01','\x04',1);
		piVar2 = &MaxStats + iVar3 * 4 + lus;
		iVar3 = (int)(&plr)[options_pad]._pBaseMag;
LAB_80035ecc:
		iVar1 = options_pad * 4;
		if (iVar3 == *piVar2) {
LAB_8003602c:
			(&chrbtn)[lus + iVar1] = '\x01';
			goto LAB_8003604c;
		}
	}
	else {
		if (lus < 2) {
			if (lus != 0) goto LAB_8003604c;
			NetSendCmdParam1__FUcUcUs('\x01','\x03',1);
			piVar2 = &MaxStats + iVar3 * 4 + lus;
			iVar3 = (int)(&plr)[options_pad]._pBaseStr;
			goto LAB_80035ecc;
		}
		if (lus == 2) {
			NetSendCmdParam1__FUcUcUs('\x01','\x05',1);
			piVar2 = &MaxStats + iVar3 * 4 + lus;
			iVar3 = (int)(&plr)[options_pad]._pBaseDex;
			goto LAB_80035ecc;
		}
		if (lus != 3) goto LAB_8003604c;
		NetSendCmdParam1__FUcUcUs('\x01','\x06',1);
		iVar1 = options_pad * 4;
		if ((int)(&plr)[options_pad]._pBaseVit == (&MaxStats)[iVar3 * 4 + lus]) goto LAB_8003602c;
	}
	(&chrbtn)[lus + iVar1] = '\0';
LAB_8003604c:
	ChrCheckValidButton__Fi(0);
	BuildChr__Fv();
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem /*$a0*/, int x /*$a1*/, int c /*$a2*/)
 // line 3064, offset 0x80036074
	/* begin block 1 */
		// Start line: 3065
		// Start offset: 0x80036074
	/* end block 1 */
	// End offset: 0x800360EC
	// End Line: 3105

	/* begin block 2 */
		// Start line: 6680
	/* end block 2 */
	// End Line: 6681

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DrawDurIcon4Item__FPC10ItemStructii(ItemStruct *pItem,int x,int c)

{
	int iVar1;
	
	iVar1 = x;
	if (((((int)pItem->_itype != -1) && (iVar1 = x, pItem->_iDurability < 6)) &&
			(iVar1 = x + -0x28, c == 0)) && (iVar1 = x + -0x28, pItem->_iClass == '\x01')) {
		if ((uint)(((int)pItem->_itype + -1) * 0x10000 >> 0x10) < 10) {
			iVar1 = x + -0x28;
		}
		else {
			iVar1 = x + -0x28;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RedBack__Fv()
 // line 3112, offset 0x800360f8
	/* begin block 1 */
		// Start line: 3113
		// Start offset: 0x800360F8
		// Variables:
	// 		struct TextDat *ThisDat; // $s0
	// 		struct POLY_FT4 *FT4; // $a3
	/* end block 1 */
	// End offset: 0x800361DC
	// End Line: 3128

	/* begin block 2 */
		// Start line: 6776
	/* end block 2 */
	// End Line: 6777

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RedBack__Fv(void)

{
	bool bVar1;
	TextDat *this;
	int iVar2;
	POLY_FT4 *pPVar3;
	
	this = GM_UseTexData__Fi(0);
	iVar2 = GetMaxOtPos__7CBlocks();
	pPVar3 = PrintFt4__7TextDatiiiiii(this,0xd8,0,0,0,iVar2 + -4,0);
	pPVar3->x1 = 0x160;
	pPVar3->x3 = 0x160;
	pPVar3->y2 = 0xf0;
	pPVar3->y3 = 0xf0;
	pPVar3->r0 = '\x18';
	pPVar3->g0 = '\x18';
	pPVar3->b0 = '\x18';
	pPVar3->x0 = 0;
	pPVar3->y0 = 0;
	pPVar3->y1 = 0;
	pPVar3->x2 = 0;
	pPVar3->code = pPVar3->code & 0xfe | 2;
	pPVar3->u1 = pPVar3->u1 + -1;
	pPVar3->u3 = pPVar3->u3 + -1;
	pPVar3->v2 = pPVar3->v2 + -1;
	pPVar3->v3 = pPVar3->v3 + -1;
	bVar1 = leveltype != '\0';
	pPVar3->tpage = pPVar3->tpage | 0x40;
	if (bVar1) {
		pPVar3->r0 = '\0';
		pPVar3->g0 = -1;
		pPVar3->b0 = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintSBookStr__FiiiPCcUcUc(int x /*$s4*/, int y /*$s3*/, int cspel /*$s1*/, char *pszStr /*$s5*/, int bright /*stack 16*/, int Staff /*stack 20*/)
 // line 3133, offset 0x800361f0
	/* begin block 1 */
		// Start line: 3134
		// Start offset: 0x800361F0
		// Variables:
	// 		unsigned char r; // $a0
	// 		unsigned char g; // $v1
	// 		unsigned char b; // $a1
	/* end block 1 */
	// End offset: 0x80036450
	// End Line: 3200

	/* begin block 2 */
		// Start line: 6854
	/* end block 2 */
	// End Line: 6855

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintSBookStr__FiiiPCcUcUc(int x,int y,int cspel,char *pszStr,int bright,int Staff)

{
	byte bVar1;
	LANG_TYPE LVar2;
	uint uVar3;
	uint R;
	uint B;
	uint uVar4;
	
	uVar4 = bright & 0xff;
	if ((&plr)[options_pad]._pRSplType == '\x02') {
		cspel = -1;
	}
	LVar2 = LANG_GetLang__Fv();
	if (LVar2 == LANG_JAP) {
		if (cspel == (&my_cur_spel)[options_pad]) {
			R = 200;
			if ((char)bright == -0x80) {
				uVar3 = 0;
				B = 0;
				goto LAB_80036418;
			}
		}
		else {
			B = 0x80;
			if ((char)bright == -0x80) {
				uVar3 = 0x80;
				R = 0x80;
				goto LAB_80036418;
			}
		}
		R = (uint)GOLDR;
		uVar3 = (uint)GOLDG;
		B = 0;
	}
	else {
		if (cspel == (&my_cur_spel)[options_pad]) {
			bVar1 = REDR;
			bVar1 = REDG;
			bVar1 = REDB;
			if ((char)Staff != '\0') {
				B = 0;
				R = (uint)WHITER * uVar4 >> 8;
				uVar3 = (uint)WHITEG * uVar4 >> 2;
				goto LAB_80036418;
			}
		}
		else {
			bVar1 = WHITER;
			bVar1 = WHITEG;
			bVar1 = WHITEB;
			if ((char)Staff != '\0') {
				B = 0;
				R = (uint)WHITER * uVar4 >> 8;
				uVar3 = (uint)WHITEG * uVar4 >> 1;
				goto LAB_80036418;
			}
		}
		R = (uint)bVar1 * uVar4 >> 8;
		uVar3 = (uint)bVar1 * uVar4 >> 8;
		B = (uint)bVar1 * uVar4 >> 8;
	}
LAB_80036418:
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,x,y + 2,pszStr,JustLeft,&CSRect,R,uVar3 & 0xff,B);
	return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ GetSBookTrans__FiUc(int ii /*$s1*/, unsigned char townok /*$s2*/)
 // line 3206, offset 0x80036478
	/* begin block 1 */
		// Start line: 3207
		// Start offset: 0x80036478
		// Variables:
	// 		char st; // $s0
	/* end block 1 */
	// End offset: 0x800366BC
	// End Line: 3227

	/* begin block 2 */
		// Start line: 7010
	/* end block 2 */
	// End Line: 7011

/* WARNING: Unknown calling convention yet parameter storage is locked */

char GetSBookTrans__FiUc(int ii,uchar townok)

{
	uchar uVar1;
	char cVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	
	uVar3 = *(uint *)((int)&(&plr)[myplr]._pISpells + 4);
	uVar4 = ii - 1;
	if ((int)(uVar4 * 0x4000000) < 0) {
		uVar5 = uVar3 >> (uVar4 & 0x1f);
	}
	else {
		uVar5 = *(uint *)&(&plr)[myplr]._pISpells >> (uVar4 & 0x1f);
		if (uVar4 * 0x4000000 != 0) {
			uVar5 = uVar5 | uVar3 << (-uVar4 & 0x1f);
		}
	}
	cVar2 = '\x01';
	if ((uVar5 & 1) != 0) {
		cVar2 = '\x03';
	}
	uVar3 = 1 << (uVar4 & 0x1f);
	if (((*(uint *)&(&plr)[myplr]._pAblSpells & uVar3) != 0) ||
		 ((*(uint *)((int)&(&plr)[myplr]._pAblSpells + 4) & (int)uVar3 >> 0x1f) != 0)) {
		cVar2 = '\0';
	}
	if (cVar2 == '\x01') {
		uVar1 = CheckSpell__FiicUc(myplr,ii,'\x01','\x01');
		if (uVar1 == '\0') {
			cVar2 = '\x04';
		}
		if ((int)(((uint)*(byte *)(myplr * 0x19e8 + -0x7ff25a57 + ii) +
							(uint)(byte)(&plr)[myplr]._pISplLvlAdd) * 0x1000000) < 1) {
			cVar2 = '\x04';
		}
	}
	if ((((currlevel == '\0') && (ii == 0x20)) && (plr.plractive != '\0')) &&
		 (PlayerStruct_800dbf20.plractive != '\0')) {
		cVar2 = '\x04';
	}
	if (((townok != '\0') && (currlevel == '\0')) &&
		 ((cVar2 != '\x04' && ((&spelldata)[ii].sTownSpell == '\0')))) {
		cVar2 = '\x04';
	}
	return cVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpellBook__Fb(void * DrawBg /*$s0*/)
 // line 3253, offset 0x800366d8
	/* begin block 1 */
		// Start line: 3254
		// Start offset: 0x800366D8
		// Variables:
	// 		int i; // $s3
	// 		int ii; // $s2
	// 		int x; // $s2
	// 		int y; // $s5
	// 		int mind; // stack offset -64
	// 		int maxd; // stack offset -60
	// 		int sx; // $fp
	// 		int sy; // $s7
	// 		unsigned long tspls; // stack offset -56
	// 		char st; // $s4
	// 		char c; // $s1
	// 		int v; // $s1
	// 		unsigned char bright; // $s6
	// 		char Num[4]; // stack offset -72
	// 		int bw; // $s6
	// 		struct CPad *P; // $s0
	// 		int lsbooktab; // $s2
	// 		int lcur_spel; // $s3
	/* end block 1 */
	// End offset: 0x8003724C
	// End Line: 3483

	/* begin block 2 */
		// Start line: 7104
	/* end block 2 */
	// End Line: 7105

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpellBook__Fb(void *DrawBg)

{
	char t;
	ushort uVar1;
	char *pszStr;
	char *pcVar2;
	CPad *this;
	byte R;
	bool Trans;
	byte G;
	byte B;
	long nCel;
	uint uVar3;
	uint R_00;
	int DX;
	int ii;
	int iVar4;
	int bright;
	int yp;
	int local_60;
	int local_5c;
	char acStack72 [8];
	int local_40;
	undefined4 local_3c;
	uint local_38;
	uint local_34;
	
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	if (DrawBg != (void *)0x0) {
		PrintSelectBack__FUs(0x4e6);
		t = (&plr)[myplr]._pClass;
		if (t == '\0') {
			SpellPages[0] = 0x1a;
		}
		else {
			if (t == '\x01') {
				SpellPages[0] = 0x1c;
			}
			else {
				if (t == '\x02') {
					SpellPages[0] = 0x1b;
				}
			}
		}
		DX = 0x18;
		SetBack__6Dialogi(&CSBack,0x94);
		SetBorder__6Dialogi(&CSBack,0x12);
		iVar4 = 0;
		do {
			SetRGB__6DialogUcUcUc(&CSBack,BACKR >> 1,BACKG >> 1,BACKB >> 1);
			R_00 = 0x40;
			if (iVar4 == sbooktab) {
				SetRGB__6DialogUcUcUc(&CSBack,-1,-1,-1);
				R_00 = 0xffffffff;
			}
			CSRect.x = (short)DX;
			CSRect.y = 0xc2;
			CSRect.w = 0x2e;
			CSRect.h = 9;
			Back__6Dialogiiii(&CSBack,DX,0xc2,0x2e,9);
			iVar4 = iVar4 + 1;
			sprintf(acStack72,(char *)&PTR_DAT_8011b6a8,iVar4);
			R_00 = R_00 & 0xff;
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,8,acStack72,JustCentre,&CSRect,R_00,R_00,R_00);
			DX = DX + 0x38;
		} while (iVar4 < 5);
		DX = 0x26;
		yp = 0x2e;
		SetRGB__6DialogUcUcUc
							(&CSBack,(byte)((ulonglong)BACKR * 0xaaaaaaab >> 0x20) & 0xfe,
							 (byte)((ulonglong)BACKG * 0xaaaaaaab >> 0x20) & 0xfe,
							 (byte)((ulonglong)BACKB * 0xaaaaaaab >> 0x20) & 0xfe);
		SetBack__6Dialogi(&CSBack,0x94);
		SetBorder__6Dialogi(&CSBack,0x12);
		iVar4 = 1;
		local_34 = *(uint *)((int)&(&plr)[myplr]._pISpells + 4) |
							 *(uint *)((int)&(&plr)[myplr]._pMemSpells + 4) |
							 *(uint *)((int)&(&plr)[myplr]._pAblSpells + 4);
		local_38 = *(uint *)&(&plr)[myplr]._pISpells | *(uint *)&(&plr)[myplr]._pMemSpells |
							 *(uint *)&(&plr)[myplr]._pAblSpells;
		do {
			Back__6Dialogiiii(&CSBack,0x2f,DX + 6,0xfc,0x18);
			CSRect.x = 0x2f;
			CSRect.w = 0xfc;
			CSRect.y = (short)(DX + 6);
			CSRect.h = 0x18;
			ii = *(int *)(s___________800ce325 + iVar4 * 4 + sbooktab * 0x14 + 0x23);
			bright = 0x80;
			if (ii != -1) {
				R_00 = ii - 1;
				if ((int)(R_00 * 0x4000000) < 0) {
					uVar3 = local_34 >> (R_00 & 0x1f);
				}
				else {
					uVar3 = local_38 >> (R_00 & 0x1f);
					if (R_00 * 0x4000000 != 0) {
						uVar3 = uVar3 | local_34 << (-R_00 & 0x1f);
					}
				}
				if ((uVar3 & 1) != 0) {
					t = GetSBookTrans__FiUc(ii,'\x01');
					SetSpellTrans__Fc(t);
					if (ii == (&my_cur_spel)[options_pad]) {
						if (iVar4 == (&cur_spel)[options_pad] + 1) {
							bright = 0xff;
							Trans = false;
							nCel = (long)(&SpellITbl)[ii];
							local_60 = 1;
							local_5c = 1;
						}
						else {
							Trans = true;
							nCel = (long)(&SpellITbl)[ii];
							local_60 = 2;
							local_5c = 1;
						}
					}
					else {
						Trans = iVar4 != (&cur_spel)[options_pad] + 1;
						if (Trans) {
							t = (&SpellITbl)[ii];
							local_60 = 2;
						}
						else {
							bright = 0xff;
							t = (&SpellITbl)[ii];
							local_60 = 1;
						}
						nCel = (long)t;
						local_5c = 0;
					}
					DrawSpellCel__FllUclUcc(0x14,yp,Trans,nCel,local_60,local_5c);
					t = GetSBookTrans__FiUc(ii,'\0');
					pszStr = GetStr__Fi((&spelldata)[ii].sNameText);
					PrintSBookStr__FiiiPCcUcUc(0,9,ii,pszStr,bright,(uint)(t == '\x03'));
					if (t == '\0') {
						pszStr = GetStr__Fi(0x3d5);
						strcpy(&tempstr,pszStr);
					}
					else {
						if (t == '\x03') {
							pszStr = GetStr__Fi(0x4fe);
							R_00 = (uint)(&plr)[myplr].InvBody[4]._iCharges;
						}
						else {
							local_60 = GetManaAmount__Fii(myplr,ii);
							local_60 = local_60 >> 6;
							FUN_80139c04(ii,&local_40,&local_3c);
							if (local_40 == -1) {
								pszStr = GetStr__Fi(0x27a);
								pcVar2 = GetStr__Fi(0xe1);
								sprintf(&tempstr,"%s:%i    %s: -",pszStr,local_60,pcVar2);
							}
							else {
								pszStr = GetStr__Fi(0x27a);
								pcVar2 = GetStr__Fi(0xe1);
								sprintf(&tempstr,"%s:%i    %s:%i - %i",pszStr,local_60,pcVar2,local_40,local_3c);
							}
							if (ii == 0x24) {
								pszStr = GetStr__Fi(0x27c);
								sprintf(&tempstr,pszStr,local_60);
							}
							PrintSBookStr__FiiiPCcUcUc(0,0x14,ii,&tempstr,bright,(uint)(t == '\x03'));
							R_00 = (int)*(char *)(myplr * 0x19e8 + -0x7ff25a57 + ii) +
										 (int)(&plr)[myplr]._pISplLvlAdd;
							if ((int)R_00 < 0) {
								R_00 = 0;
							}
							if (R_00 == 0) {
								pszStr = GetStr__Fi(0x3f8);
								sprintf(&tempstr,pszStr);
								goto LAB_80036e50;
							}
							pszStr = GetStr__Fi(0x3f9);
						}
						sprintf(&tempstr,pszStr,R_00);
					}
LAB_80036e50:
					PrintSBookStr__FiiiPCcUcUc(0x88,9,ii,&tempstr,bright,(uint)(t == '\x03'));
				}
			}
			DX = DX + 0x1e;
			iVar4 = iVar4 + 1;
			yp = yp + 0x1e;
		} while (iVar4 < 6);
		DX = 0x30;
		iVar4 = 0;
		do {
			R = 0xff;
			if (iVar4 == (&cur_spel)[options_pad]) {
				G = 0xff;
				B = 0xff;
			}
			else {
				R = BACKR >> 1;
				G = BACKG >> 1;
				B = BACKB >> 1;
			}
			iVar4 = iVar4 + 1;
			SetRGB__6DialogUcUcUc(&CSBack,R,G,B);
			Back__6Dialogiiii(&CSBack,0x16,DX,0x10,0xf);
			DX = DX + 0x1e;
		} while (iVar4 < 5);
		SetBack__6Dialogi(&CSBack,5);
		SetBorder__6Dialogi(&CSBack,0x12);
		SetRGB__6DialogUcUcUc(&CSBack,BORDERR,BORDERG,BORDERB);
		CSRect.x = 0xe;
		CSRect.y = 0x16;
		CSRect.w = 0x124;
		CSRect.h = 0xbc;
		Back__6Dialogiiii(&CSBack,0xe,0x16,0x124,0xbc);
		pszStr = GetStr__Fi(0x3f7);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0xe,pszStr,JustCentre,&CSRect,(uint)BLUER,(uint)BLUEG,(uint)BLUEB);
		this = PAD_GetPad__FiUc(options_pad,'\0');
		iVar4 = sbooktab;
		DX = (&cur_spel)[options_pad];
		SetPadTick__4CPadUs(this,10);
		SetPadTickMask__4CPadUs(this,0xf);
		uVar1 = GetTick__C4CPad(this);
		if ((uVar1 & 1) != 0) {
			(&cur_spel)[options_pad] = (&cur_spel)[options_pad] + -1;
		}
		uVar1 = GetTick__C4CPad(this);
		if ((uVar1 & 2) != 0) {
			(&cur_spel)[options_pad] = (&cur_spel)[options_pad] + 1;
		}
		if ((&cur_spel)[options_pad] < 0) {
			(&cur_spel)[options_pad] = 4;
		}
		if (4 < (&cur_spel)[options_pad]) {
			(&cur_spel)[options_pad] = 0;
		}
		uVar1 = GetTick__C4CPad(this);
		if ((uVar1 & 4) != 0) {
			sbooktab = sbooktab + -1;
		}
		uVar1 = GetTick__C4CPad(this);
		if ((uVar1 & 8) != 0) {
			sbooktab = sbooktab + 1;
		}
		if (sbooktab < 0) {
			sbooktab = 4;
		}
		if (4 < sbooktab) {
			sbooktab = 0;
		}
		if (iVar4 != sbooktab) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		if (DX != (&cur_spel)[options_pad]) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		Trans = false;
		uVar1 = GetDown__C4CPad(this);
		if (((uVar1 & 0x100) != 0) || (uVar1 = GetDown__C4CPad(this), (uVar1 & 0x20) != 0)) {
			Trans = true;
		}
		if (Trans) {
			PlaySFX__Fi(IS_TITLSLCT);
			sbookflag = '\0';
			if (optionsflag != (void *)0x0) {
				cmenu = 1;
				GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
				GLUE_SetShowPanelFlag__Fb((void *)0x0);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckSBook__Fv()
 // line 3491, offset 0x80037280
	/* begin block 1 */
		// Start line: 3492
		// Start offset: 0x80037280
		// Variables:
	// 		unsigned long tspls; // $a2
	// 		char st; // $a3
	// 		int cspel; // $t0

		/* begin block 1.1 */
			// Start line: 3492
			// Start offset: 0x80037280

			/* begin block 1.1.1 */
				// Start line: 3492
				// Start offset: 0x80037280

				/* begin block 1.1.1.1 */
					// Start line: 3506
					// Start offset: 0x80037360
					// Variables:
				// 		void * splok; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x8003750C
				// End Line: 3550
			/* end block 1.1.1 */
			// End offset: 0x8003750C
			// End Line: 3550
		/* end block 1.1 */
		// End offset: 0x8003750C
		// End Line: 3550
	/* end block 1 */
	// End offset: 0x8003750C
	// End Line: 3550

	/* begin block 2 */
		// Start line: 7617
	/* end block 2 */
	// End Line: 7618

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckSBook__Fv(void)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	char cVar5;
	uint uVar6;
	int iVar7;
	
	RemoveTargetCursor__Fi(options_pad);
	iVar4 = options_pad;
	iVar7 = SpellPages[sbooktab * 5 + (&cur_spel)[options_pad]];
	uVar6 = *(uint *)((int)&(&plr)[options_pad]._pISpells + 4) |
					*(uint *)((int)&(&plr)[options_pad]._pMemSpells + 4) |
					*(uint *)((int)&(&plr)[options_pad]._pAblSpells + 4);
	if (iVar7 != -1) {
		uVar2 = 1;
		if (2 < iVar7 - 0x1aU) {
			uVar3 = iVar7 - 1;
			if ((int)(uVar3 * 0x4000000) < 0) {
				uVar2 = uVar6 >> (uVar3 & 0x1f);
			}
			else {
				uVar2 = (*(uint *)&(&plr)[options_pad]._pISpells | *(uint *)&(&plr)[options_pad]._pMemSpells
								| *(uint *)&(&plr)[options_pad]._pAblSpells) >> (uVar3 & 0x1f);
				if (uVar3 * 0x4000000 != 0) {
					uVar2 = uVar2 | uVar6 << (-uVar3 & 0x1f);
				}
			}
			uVar2 = uVar2 & 1;
		}
		if (uVar2 != 0) {
			(&my_cur_spel)[options_pad] = iVar7;
			iVar1 = options_pad;
			uVar6 = *(uint *)((int)&(&plr)[iVar4]._pISpells + 4);
			uVar2 = iVar7 - 1;
			if ((int)(uVar2 * 0x4000000) < 0) {
				uVar3 = uVar6 >> (uVar2 & 0x1f);
			}
			else {
				uVar3 = *(uint *)&(&plr)[iVar4]._pISpells >> (uVar2 & 0x1f);
				if (uVar2 * 0x4000000 != 0) {
					uVar3 = uVar3 | uVar6 << (-uVar2 & 0x1f);
				}
			}
			cVar5 = '\x01';
			if ((uVar3 & 1) != 0) {
				cVar5 = '\x03';
			}
			uVar6 = 1 << (uVar2 & 0x1f);
			if (((*(uint *)&(&plr)[iVar4]._pAblSpells & uVar6) != 0) ||
				 ((*(uint *)((int)&(&plr)[iVar4]._pAblSpells + 4) & (int)uVar6 >> 0x1f) != 0)) {
				cVar5 = '\0';
			}
			iVar4 = (&my_cur_spel)[options_pad];
			(&plr)[options_pad]._pRSplType = cVar5;
			(&plr)[iVar1]._pRSpell = iVar4;
		}
		PlaySFX__Fi(IS_TITLSLCT);
	}
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ get_pieces_str__Fi(int nGold /*$a0*/)
 // line 3563, offset 0x8003751c
	/* begin block 1 */
		// Start line: 3564
		// Start offset: 0x8003751C
	/* end block 1 */
	// End offset: 0x80037540
	// End Line: 3566

	/* begin block 2 */
		// Start line: 7763
	/* end block 2 */
	// End Line: 7764

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * get_pieces_str__Fi(int nGold)

{
	char *pcVar1;
	int StrId;
	
	if (nGold == 1) {
		StrId = 0x30a;
	}
	else {
		StrId = 0x309;
	}
	pcVar1 = GetStr__Fi(StrId);
	return pcVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.DrawLevelUpFlag()
 // line 4074, offset 0x80037550
	/* begin block 1 */
		// Start line: 4075
		// Start offset: 0x80037550
	/* end block 1 */
	// End offset: 0x80037568
	// End Line: 4075

	/* begin block 2 */
		// Start line: 8785
	/* end block 2 */
	// End Line: 8786

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_DrawLevelUpFlag(void)

{
	___6Dialog(&CSBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.DrawLevelUpFlag()
 // line 4074, offset 0x80037578
	/* begin block 1 */
		// Start line: 4075
		// Start offset: 0x80037578
	/* end block 1 */
	// End offset: 0x800375A4
	// End Line: 4075

	/* begin block 2 */
		// Start line: 8785
	/* end block 2 */
	// End Line: 8786

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_DrawLevelUpFlag(void)

{
	SPLICONRIGHT = SPLICONNO * 9 + 0x80;
	__6Dialog(&CSBack);
	return;
}





