#include "THISDUST.H"
#include "CONTROL.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TrimCol__Fs(short col /*$v1*/)
 // line 520, offset 0x8002e8a0
	/* begin block 1 */
		// Start line: 521
		// Start offset: 0x8002E8A0
	/* end block 1 */
	// End offset: 0x8002E8D0
	// End Line: 524

	/* begin block 2 */
		// Start line: 1040
	/* end block 2 */
	// End Line: 1041

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
// void /*$ra*/ DrawSpellCel__FllUclUc(long xp /*$s5*/, long yp /*$fp*/, unsigned char Trans /*$s0*/, long nCel /*stack -152*/, int w /*stack 16*/)
 // line 527, offset 0x8002e8d8
	/* begin block 1 */
		// Start line: 528
		// Start offset: 0x8002E8D8
		// Variables:
	// 		struct TextDat *ThisDat; // stack offset -136
	// 		struct FRAME_HDR *Fr; // $s1
	// 		struct POLY_FT4 *Ft4; // $a2
	// 		struct POLY_GT4 *GT4; // $s3
	// 		struct TP_LOAD_HDR *Tp; // stack offset -128
	// 		int SpellW; // $s3
	// 		int SpellH; // $s4
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

		/* begin block 1.1 */
			// Start line: 528
			// Start offset: 0x8002E8D8

			/* begin block 1.1.1 */
				// Start line: 543
				// Start offset: 0x8002E950
			/* end block 1.1.1 */
			// End offset: 0x8002E97C
			// End Line: 553
		/* end block 1.1 */
		// End offset: 0x8002E97C
		// End Line: 553

		/* begin block 1.2 */
			// Start line: 553
			// Start offset: 0x8002E97C

			/* begin block 1.2.1 */
				// Start line: 563
				// Start offset: 0x8002E9D0
				// Variables:
			// 		int X; // $s6
			// 		int Y; // stack offset -56
			// 		int SW; // $s4
			// 		int SH; // $s7
			// 		struct PAL *Pal; // $v1
			// 		int st; // stack offset -48

				/* begin block 1.2.1.1 */
					// Start line: 613
					// Start offset: 0x8002EB88

					/* begin block 1.2.1.1.1 */
						// Start line: 618
						// Start offset: 0x8002EBF0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002EBF0
					// End Line: 622
				/* end block 1.2.1.1 */
				// End offset: 0x8002EC1C
				// End Line: 625
			/* end block 1.2.1 */
			// End offset: 0x8002EF6C
			// End Line: 660
		/* end block 1.2 */
		// End offset: 0x8002F3C0
		// End Line: 696
	/* end block 1 */
	// End offset: 0x8002F3C0
	// End Line: 696

	/* begin block 2 */
		// Start line: 1054
	/* end block 2 */
	// End Line: 1055

void DrawSpellCel__FllUclUc(long xp,long yp,uchar Trans,long nCel,int w)

{
	char cVar1;
	byte bVar2;
	byte bVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	ulong *puVar7;
	uchar uVar8;
	short sVar9;
	TextDat *this;
	FRAME_HDR *pFVar10;
	int iVar11;
	POLY_GT4 *pPVar12;
	PAL *pPVar13;
	POLY_FT4 *pPVar14;
	uchar uVar15;
	byte bVar16;
	uchar uVar17;
	uchar uVar18;
	short sVar19;
	short sVar20;
	short sVar21;
	short sVar22;
	uint uVar23;
	uint uVar24;
	uint uVar25;
	ushort uVar26;
	ushort uVar27;
	uint uVar28;
	short sVar29;
	uint uVar30;
	short sVar31;
	int local_30;
	
	this = GM_UseTexData__Fi(0);
	if (((char)w == '\x01') && (sbookflag == '\0')) {
		xp = xp * 0x12 + SPLICONRIGHT + 0x20;
		yp = yp * 0x12 + SPLICONY + 0x20;
	}
	iVar11 = (int)SpellCol * 3;
	bVar16 = (&SpellColors)[iVar11] >> 1;
	uVar25 = (uint)bVar16;
	bVar2 = (&UCHAR_C0h_800be145)[iVar11] >> 1;
	bVar3 = s__800be146[iVar11] >> 1;
	sVar9 = (short)yp;
	sVar4 = (short)xp;
	if (Trans != '\0') {
		pFVar10 = GetFr__7TextDati(this,nCel + 0xd7);
		uVar26 = *(ushort *)((int)&pFVar10->X + 2);
		uVar27 = (ushort)pFVar10->Y & 0x1ff;
		pPVar14 = PrintFt4__7TextDatiiiiii(this,nCel + 0xd7,xp,yp,0,0xff,0);
		pPVar14->r0 = -0x80;
		pPVar14->g0 = -0x80;
		pPVar14->b0 = -0x80;
		pPVar14->code = pPVar14->code & 0xfc;
		pPVar14->x0 = sVar4 + (short)*(char *)&pFVar10->X + 1;
		pPVar14->y0 = sVar9 + (short)*(char *)((int)&pFVar10->X + 1) + 1;
		uVar26 = uVar26 & 0x1ff;
		pPVar14->x1 = (short)*(char *)&pFVar10->X + sVar4 + -1 + uVar26;
		pPVar14->y1 = sVar9 + (short)*(char *)((int)&pFVar10->X + 1) + 1;
		pPVar14->x2 = sVar4 + (short)*(char *)&pFVar10->X + 1;
		pPVar14->y2 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9 + -1 + uVar27;
		pPVar14->x3 = (short)*(char *)&pFVar10->X + sVar4 + -1 + uVar26;
		pPVar14->y3 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9 + -1 + uVar27;
		pFVar10 = GetFr__7TextDati(this,0xd7);
		uVar26 = *(ushort *)((int)&pFVar10->X + 2);
		uVar27 = (ushort)pFVar10->Y & 0x1ff;
		pPVar14 = PrintFt4__7TextDatiiiiii(this,0xd7,xp,yp,0,0xff,0);
		pPVar14->r0 = bVar16;
		pPVar14->g0 = bVar2;
		bVar16 = pPVar14->code & 0xfe;
		pPVar14->b0 = bVar3;
		pPVar14->code = bVar16;
		uVar26 = uVar26 & 0x1ff;
		if (sbookflag != '\0') {
			return;
		}
		pPVar14->code = bVar16 | 2;
		pPVar14->x0 = sVar4 + (short)*(char *)&pFVar10->X + 1;
		pPVar14->y0 = sVar9 + (short)*(char *)((int)&pFVar10->X + 1) + 1;
		pPVar14->x1 = (short)*(char *)&pFVar10->X + sVar4 + -1 + uVar26;
		pPVar14->y1 = sVar9 + (short)*(char *)((int)&pFVar10->X + 1) + 1;
		pPVar14->x2 = sVar4 + (short)*(char *)&pFVar10->X + 1;
		pPVar14->y2 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9 + -1 + uVar27;
		pPVar14->x3 = (short)*(char *)&pFVar10->X + sVar4 + -1 + uVar26;
		sVar9 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9 + -1;
		goto LAB_8002f3b8;
	}
	pFVar10 = GetFr__7TextDati(this,0xd7);
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
	uVar26 = *(ushort *)((int)&pFVar10->X + 2);
	_sVar29 = xp + (int)*(char *)&pFVar10->X;
	sVar29 = (short)_sVar29;
	uVar30 = pFVar10->Y & 0x1ff;
	iVar11 = yp + (int)*(char *)((int)&pFVar10->X + 1);
	pPVar12 = PRIM_GetNextPolyGt4__Fv();
	*(undefined *)((int)&pPVar12->tag + 3) = 0xc;
	pPVar12->code = '<';
	uVar28 = (uint)uVar26 & 0x1ff;
	sVar5 = (short)uVar28;
	sVar6 = (short)uVar30;
	sVar31 = (short)iVar11;
	if ((pFVar10->Y & 0x200U) == 0) {
		uVar8 = *(uchar *)&pFVar10->FrOffset;
		uVar18 = *(uchar *)((int)&pFVar10->FrOffset + 1);
		uVar17 = uVar8 + (char)uVar28;
		uVar15 = uVar18 + (char)uVar30;
		sVar21 = sVar29;
		sVar20 = sVar31;
		sVar19 = sVar31 + sVar6;
		sVar22 = sVar29 + sVar5;
	}
	else {
		sVar21 = sVar29 + sVar5;
		sVar20 = sVar31 + sVar6;
		cVar1 = *(char *)((int)&pFVar10->FrOffset + 1);
		uVar8 = *(uchar *)&pFVar10->FrOffset;
		uVar18 = cVar1 + -1;
		uVar17 = uVar8 + (char)uVar30;
		uVar15 = cVar1 + (char)uVar28 + -1;
		sVar19 = sVar31;
		sVar22 = sVar29;
	}
	pPVar12->u0 = uVar8;
	pPVar12->v0 = uVar18;
	pPVar12->u1 = uVar17;
	pPVar12->v1 = uVar18;
	pPVar12->u2 = uVar8;
	pPVar12->v2 = uVar15;
	pPVar12->u3 = uVar17;
	pPVar12->v3 = uVar15;
	pPVar12->x0 = sVar21;
	pPVar12->y0 = sVar31;
	pPVar12->x1 = sVar29 + sVar5;
	pPVar12->y1 = sVar20;
	pPVar12->x2 = sVar29;
	pPVar12->y2 = sVar19;
	pPVar12->x3 = sVar22;
	pPVar12->y3 = sVar31 + sVar6;
	pPVar13 = GetPal__7TextDati(this,(uint)pFVar10->X >> 0x19);
	if ((pPVar13->InVram & 1) == 0) {
		DBG_Error((char *)0x0,"source/CONTROL.cpp",0x270);
	}
	else {
		pPVar12->clut = *(ushort *)((int)&pPVar13->InVram + 2);
	}
	local_30 = 1;
	if ((char)w == '\x01') {
		uVar8 = TrimCol__Fs((short)((uVar25 + paloffset1) * 0x10000 >> 0x10));
		pPVar12->r0 = uVar8;
		uVar24 = (uint)bVar2;
		uVar8 = TrimCol__Fs((short)((uVar24 + paloffset1) * 0x10000 >> 0x10));
		pPVar12->g0 = uVar8;
		uVar23 = (uint)bVar3;
		uVar8 = TrimCol__Fs((short)((uVar23 + paloffset1) * 0x10000 >> 0x10));
		pPVar12->b0 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar25 + paloffset2) * 0x10000 >> 0x10));
		pPVar12->r1 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar24 + paloffset2) * 0x10000 >> 0x10));
		pPVar12->g1 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar23 + paloffset2) * 0x10000 >> 0x10));
		pPVar12->b1 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar25 + paloffset3) * 0x10000 >> 0x10));
		pPVar12->r2 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar24 + paloffset3) * 0x10000 >> 0x10));
		pPVar12->g2 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar23 + paloffset3) * 0x10000 >> 0x10));
		pPVar12->b2 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar25 + paloffset4) * 0x10000 >> 0x10));
		pPVar12->r3 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar24 + paloffset4) * 0x10000 >> 0x10));
		pPVar12->g3 = uVar8;
		uVar8 = TrimCol__Fs((short)((uVar23 + paloffset4) * 0x10000 >> 0x10));
		pPVar12->b3 = uVar8;
LAB_8002ee48:
		DrawSpinner__FiiUcUcUciiibiT8
							(_sVar29 + (uVar28 >> 1) + -3,iVar11 + (uVar30 >> 1) + 3,-0x60,'@',0xf0,0x20,0x60,0,
							 (void *)0x0,0x100,&DAT_00000001);
	}
	else {
		if ((char)w == '\x02') {
			pPVar12->r0 = bVar16;
			pPVar12->g0 = bVar2;
			pPVar12->r1 = bVar16;
			pPVar12->b0 = bVar3;
			pPVar12->g1 = bVar2;
			pPVar12->r2 = bVar16;
			pPVar12->b1 = bVar3;
			pPVar12->g2 = bVar2;
			pPVar12->r3 = bVar16;
			pPVar12->b2 = bVar3;
			pPVar12->g3 = bVar2;
			pPVar12->b3 = bVar3;
			goto LAB_8002ee48;
		}
		pPVar12->r0 = BACKR >> 1;
		pPVar12->g0 = BACKG >> 1;
		pPVar12->b0 = BACKB >> 1;
		pPVar12->r1 = BACKR >> 1;
		pPVar12->g1 = BACKG >> 1;
		pPVar12->b1 = BACKB >> 1;
		pPVar12->r2 = BACKR >> 1;
		pPVar12->g2 = BACKG >> 1;
		pPVar12->b2 = BACKB >> 1;
		pPVar12->r3 = BACKR >> 1;
		pPVar12->g3 = BACKG >> 1;
		local_30 = 2;
		pPVar12->b3 = BACKB >> 1;
	}
	uVar26 = *(ushort *)((int)&pFVar10->FrOffset + 2);
	pPVar12->code = pPVar12->code & 0xfc;
	puVar7 = ThisOt;
	pPVar12->tpage = uVar26;
	pPVar12->tag = pPVar12->tag & 0xff000000 | puVar7[0xfe] & 0xffffff;
	puVar7[0xfe] = puVar7[0xfe] & 0xff000000 | (uint)pPVar12 & 0xffffff;
	pFVar10 = GetFr__7TextDati(this,nCel + 0xd7);
	uVar26 = *(ushort *)((int)&pFVar10->X + 2);
	uVar27 = (ushort)pFVar10->Y & 0x1ff;
	pPVar14 = PrintFt4__7TextDatiiiiii(this,nCel + 0xd7,xp,yp,0,0xff,0);
	pPVar14->code = pPVar14->code & 0xfc;
	uVar8 = (uchar)(0x80 / local_30);
	pPVar14->r0 = uVar8;
	pPVar14->g0 = uVar8;
	pPVar14->b0 = uVar8;
	pPVar14->x0 = (short)*(char *)&pFVar10->X + sVar4;
	pPVar14->y0 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9;
	uVar26 = uVar26 & 0x1ff;
	pPVar14->x1 = (short)*(char *)&pFVar10->X + sVar4 + uVar26;
	pPVar14->y1 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9;
	pPVar14->x2 = (short)*(char *)&pFVar10->X + sVar4;
	pPVar14->y2 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9 + uVar27;
	pPVar14->x3 = (short)*(char *)&pFVar10->X + sVar4 + uVar26;
	sVar9 = (short)*(char *)((int)&pFVar10->X + 1) + sVar9;
LAB_8002f3b8:
	pPVar14->y3 = sVar9 + uVar27;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpellTrans__Fc(char t /*$a0*/)
 // line 709, offset 0x8002f3f4
	/* begin block 1 */
		// Start line: 710
		// Start offset: 0x8002F3F4
	/* end block 1 */
	// End offset: 0x8002F3F8
	// End Line: 711

	/* begin block 2 */
		// Start line: 1533
	/* end block 2 */
	// End Line: 1534

void SetSpellTrans__Fc(char t)

{
	SpellCol = t;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpellBookTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 718, offset 0x8002f400
	/* begin block 1 */
		// Start line: 719
		// Start offset: 0x8002F40C

		/* begin block 1.1 */
			// Start line: 722
			// Start offset: 0x8002F40C
			// Variables:
		// 		int omp; // $s0
		/* end block 1.1 */
		// End offset: 0x8002F41C
		// End Line: 724
	/* end block 1 */
	// End offset: 0x8002F484
	// End Line: 736

	/* begin block 2 */
		// Start line: 1550
	/* end block 2 */
	// End Line: 1551

void DrawSpellBookTSK__FP4TASK(TASK *T)

{
	int iVar1;
	
	while (iVar1 = myplr, sbookflag != '\0') {
		myplr = options_pad;
		DrawSpellBook__Fv();
		myplr = iVar1;
		TSK_Sleep(1);
	}
	PostGamePad__Fiiii(5,0,0,0);
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpeedSpellTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 740, offset 0x8002f498
	/* begin block 1 */
		// Start line: 741
		// Start offset: 0x8002F498
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	// 		int pnum; // $s1

		/* begin block 1.1 */
			// Start line: 745
			// Start offset: 0x8002F4B4
			// Variables:
		// 		int old_opts; // $s0
		/* end block 1.1 */
		// End offset: 0x8002F4C8
		// End Line: 747
	/* end block 1 */
	// End offset: 0x8002F4F8
	// End Line: 752

	/* begin block 2 */
		// Start line: 1595
	/* end block 2 */
	// End Line: 1596

void DrawSpeedSpellTSK__FP4TASK(TASK *T)

{
	int iVar1;
	undefined *puVar2;
	int iVar3;
	
	iVar3 = *(int *)T->fActive;
	while (puVar2 = (undefined *)GLUE_Finished__Fv(), iVar1 = options_pad, puVar2 != &DAT_00000001) {
		options_pad = iVar3;
		DrawSpellList__Fv();
		options_pad = iVar1;
		TSK_Sleep(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ToggleSpell__Fi(int pnum /*$s0*/)
 // line 757, offset 0x8002f510
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x8002F510
		// Variables:
	// 		struct DEF_ARGS *args; // $v0
	/* end block 1 */
	// End offset: 0x8002F5AC
	// End Line: 790

	/* begin block 2 */
		// Start line: 1629
	/* end block 2 */
	// End Line: 1630

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
 // line 815, offset 0x8002f5c4
	/* begin block 1 */
		// Start line: 816
		// Start offset: 0x8002F5C4
		// Variables:
	// 		int x; // $s2
	// 		int y; // $s4
	// 		int i; // $s6
	// 		int j; // $s3
	// 		int t; // $a0
	// 		unsigned long mask; // stack offset -88
	// 		unsigned long spl; // stack offset -80
	// 		int s; // $a1
	// 		int c; // $s1
	// 		int v; // $s7
	// 		int NoSpells; // stack offset -72
	// 		unsigned char trans; // $a2
	// 		struct PlayerStruct *player; // $s5
	// 		struct CPad *P; // $s0
	// 		int lx; // $s3
	// 		int ly; // $s4
	// 		int NoYSpells; // $s1
	// 		int NoXSpells; // $s2

		/* begin block 1.1 */
			// Start line: 861
			// Start offset: 0x8002F720

			/* begin block 1.1.1 */
				// Start line: 869
				// Start offset: 0x8002F760

				/* begin block 1.1.1.1 */
					// Start line: 897
					// Start offset: 0x8002F810

					/* begin block 1.1.1.1.1 */
						// Start line: 898
						// Start offset: 0x8002F828

						/* begin block 1.1.1.1.1.1 */
							// Start line: 900
							// Start offset: 0x8002F834

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 901
								// Start offset: 0x8002F87C
								// Variables:
							// 		void * Flag; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8002FE50
							// End Line: 1022
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8002FE50
						// End Line: 1022
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002FE50
					// End Line: 1026
				/* end block 1.1.1.1 */
				// End offset: 0x8002FE84
				// End Line: 1027
			/* end block 1.1.1 */
			// End offset: 0x8002FE84
			// End Line: 1027
		/* end block 1.1 */
		// End offset: 0x8002FE8C
		// End Line: 1035
	/* end block 1 */
	// End offset: 0x80030118
	// End Line: 1106

	/* begin block 2 */
		// Start line: 1783
	/* end block 2 */
	// End Line: 1784

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpellList__Fv(void)

{
	int iVar1;
	ushort uVar2;
	int xp;
	int iVar3;
	char *__format;
	char *pcVar4;
	CPad *this;
	char t;
	PlayerStruct *pPVar5;
	text_strs StrId;
	int iVar6;
	bool Trans;
	int iVar7;
	int iVar8;
	int yp;
	PlayerStruct *pPVar9;
	int iVar10;
	int iVar11;
	uint local_58;
	uint local_54;
	uint local_50;
	uint local_4c;
	int local_48;
	
	iVar1 = options_pad;
	iVar11 = 0;
	local_50 = 0;
	local_4c = 0;
	sel_data = options_pad;
	pPVar9 = plr + options_pad;
	if (plr[1].plractive == '\0') {
		SPLICONNO = 6;
		SPLICONY = 0x8e;
		xp = 0xe3;
		if (options_pad == 0) {
			xp = 0x7a;
		}
	}
	else {
		SPLICONNO = 0xc;
		SPLICONY = 0x6e;
		SPLICONRIGHT = 0xfc;
		xp = 0xde;
		if (plr[1].plractive == '\0') goto LAB_8002f6d8;
	}
	SPLICONRIGHT = xp;
LAB_8002f6d8:
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
	yp = 0;
	local_48 = 0;
	iVar3 = options_pad * 0x100;
	(&_pSpell)[options_pad] = -1;
	_infostr[iVar3] = '\0';
	iVar3 = 0;
	ClearPanel__Fv();
	do {
		if (3 < iVar3) {
			this = PAD_GetPad__FiUc(options_pad,'\0');
			iVar11 = scy;
			iVar1 = scx;
			xp = local_48 / SPLICONNO;
			local_48 = local_48 - SPLICONNO * xp;
			SetPadTick__4CPadUs(this,4);
			SetPadTickMask__4CPadUs(this,0xf);
			if (options_pad == 0) {
				uVar2 = GetTick__C4CPad(this);
				if ((uVar2 & 4) != 0) {
					scx = scx + 1;
				}
				uVar2 = GetTick__C4CPad(this);
				if ((uVar2 & 8) != 0) {
					scx = scx + -1;
				}
			}
			else {
				uVar2 = GetTick__C4CPad(this);
				if ((uVar2 & 4) != 0) {
					scx = scx + -1;
				}
				uVar2 = GetTick__C4CPad(this);
				if ((uVar2 & 8) != 0) {
					scx = scx + 1;
				}
			}
			uVar2 = GetTick__C4CPad(this);
			if ((uVar2 & 2) != 0) {
				scy = scy + 1;
			}
			uVar2 = GetTick__C4CPad(this);
			if ((uVar2 & 1) != 0) {
				scy = scy + -1;
			}
			iVar3 = SPLICONNO;
			if (scy == -xp) {
				iVar3 = local_48;
			}
			if (scx <= -iVar3) {
				scx = 0;
			}
			if (0 < scx) {
				scx = SPLICONNO;
				if (scy == -xp) {
					scx = local_48;
				}
				scx = 1 - scx;
			}
			if (0 < scy) {
				if (-local_48 < scx) {
					scy = -xp;
				}
				else {
					scy = 1 - xp;
				}
			}
			if ((scy == -xp) && (scx <= -local_48)) {
				scy = 0;
			}
			if (scy < -xp) {
				scy = 0;
			}
			if ((iVar1 != scx) || (iVar11 != scy)) {
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
		if (iVar3 == 1) {
			local_50 = *(uint *)&plr[iVar1]._pMemSpells;
			local_4c = *(uint *)((int)&plr[iVar1]._pMemSpells + 4);
		}
		else {
			if (iVar3 < 2) {
				if (iVar3 == 0) {
					SetSpellTrans__Fc('\0');
					local_50 = *(uint *)&plr[iVar1]._pAblSpells;
					local_4c = *(uint *)((int)&plr[iVar1]._pAblSpells + 4);
				}
			}
			else {
				if (iVar3 == 2) {
					SetSpellTrans__Fc('\x02');
					local_50 = *(uint *)&plr[iVar1]._pScrlSpells;
					local_4c = *(uint *)((int)&plr[iVar1]._pScrlSpells + 4);
				}
				else {
					if (iVar3 == 3) {
						SetSpellTrans__Fc('\x03');
						local_50 = *(uint *)&plr[iVar1]._pISpells;
						local_4c = *(uint *)((int)&plr[iVar1]._pISpells + 4);
					}
				}
			}
		}
		iVar10 = 1;
		local_58 = 1;
		local_54 = 0;
		iVar7 = 0x34;
		while (iVar10 < 0x25) {
			if ((((local_50 & local_58) != 0) || ((local_4c & local_54) != 0)) &&
				 ((&spelldata.sName)[iVar7] != '\0')) {
				if (iVar3 == 1) {
					iVar11 = (int)pPVar9->_pSplLvl[iVar10] + (int)plr[iVar1]._pISplLvlAdd;
					if (iVar11 < 0) {
						iVar11 = 0;
					}
					t = '\x04';
					if (0 < iVar11) {
						t = '\x01';
					}
					SetSpellTrans__Fc(t);
				}
				if ((currlevel == '\0') && ((&spelldata.sTownSpell)[iVar7] == '\0')) {
					SetSpellTrans__Fc('\x04');
				}
				iVar8 = sel_data;
				Trans = false;
				if (options_pad == 0) {
					if (xp == -scx - SPLICONNO) {
						Trans = yp == scy;
					}
				}
				else {
					if ((xp == scx) && (yp == scy)) {
						Trans = true;
					}
				}
				if (Trans) {
					(&_pSpell)[sel_data] = iVar10;
					_pSplType[iVar8] = iVar3;
					if (iVar3 == 1) {
						__format = GetStr__Fi(STR__S_SPELL);
						pcVar4 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sNameText);
						sprintf(_infostr + sel_data * 0x100,__format,pcVar4);
						if ((&_pSpell)[sel_data] == 0x1f) {
							__format = GetStr__Fi(STR_DAMAGES_UNDEAD_ONLY);
							sprintf(tempstr,__format);
							AddPanelString__FPCci(tempstr,1);
						}
						if (iVar11 != 0) {
							__format = GetStr__Fi(STR_SPELL_LEVEL__I);
							iVar8 = iVar11;
							goto LAB_8002fd60;
						}
						__format = GetStr__Fi(STR_SPELL_LEVEL_0___UNUSABLE);
						sprintf(tempstr,__format);
					}
					else {
						if (iVar3 < 2) {
							if (iVar3 == 0) {
								__format = GetStr__Fi(STR__S_SKILL);
								pcVar4 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sSkillText);
								sprintf(_infostr + sel_data * 0x100,__format,pcVar4);
							}
							goto LAB_8002fd78;
						}
						if (iVar3 == 2) {
							__format = GetStr__Fi(STR_SCROLL_OF__S);
							iVar8 = 0;
							pcVar4 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sNameText);
							sprintf(_infostr + sel_data * 0x100,__format,pcVar4);
							iVar6 = 0;
							if (0 < plr[iVar1]._pNumInv) {
								pPVar5 = pPVar9;
								do {
									if (((pPVar5->InvList[0]._itype != -1) &&
											((uint)(ushort)pPVar5->InvList[0]._iMiscId - 0x15 < 2)) &&
										 (pPVar5->InvList[0]._iSpell == (&_pSpell)[sel_data])) {
										iVar8 = iVar8 + 1;
									}
									iVar6 = iVar6 + 1;
									pPVar5 = (PlayerStruct *)(pPVar5->_pSplLvl + 0x1b);
								} while (iVar6 < plr[iVar1]._pNumInv);
							}
							iVar6 = 0;
							pPVar5 = pPVar9;
							do {
								if (((*(short *)(&DAT_00001e42 + (int)pPVar5) != -1) &&
										((uint)(ushort)pPVar5->SpdList[0]._iMiscId - 0x15 < 2)) &&
									 (pPVar5->SpdList[0]._iSpell == (&_pSpell)[sel_data])) {
									iVar8 = iVar8 + 1;
								}
								iVar6 = iVar6 + 1;
								pPVar5 = (PlayerStruct *)(pPVar5->_pSplLvl + 0x1b);
							} while (iVar6 < 8);
							StrId = STR_1_SCROLL;
							if (iVar8 != 1) {
								__format = GetStr__Fi(STR__I_SCROLLS);
LAB_8002fd60:
								sprintf(tempstr,__format,iVar8);
								goto LAB_8002fd68;
							}
						}
						else {
							if (iVar3 != 3) goto LAB_8002fd78;
							__format = GetStr__Fi(STR_STAFF_OF__S);
							pcVar4 = GetStr__Fi((&spelldata)[(&_pSpell)[sel_data]].sNameText);
							sprintf(_infostr + sel_data * 0x100,__format,pcVar4);
							StrId = STR_1_CHARGE;
							if (plr[iVar1].InvBody[4]._iCharges != 1) {
								__format = GetStr__Fi(STR__I_CHARGES);
								iVar8 = (int)plr[iVar1].InvBody[4]._iCharges;
								goto LAB_8002fd60;
							}
						}
						__format = GetStr__Fi(StrId);
						strcpy(tempstr,__format);
					}
LAB_8002fd68:
					AddPanelString__FPCci(tempstr,1);
				}
LAB_8002fd78:
				Trans = true;
				if (options_pad == 0) {
					if (xp == -scx - SPLICONNO) {
						Trans = yp != scy;
					}
				}
				else {
					if ((xp == scx) && (yp == scy)) {
						Trans = false;
					}
				}
				DrawSpellCel__FllUclUc(xp,yp,Trans,(int)(&SpellITbl)[iVar10],1);
				local_48 = local_48 + 1;
				if (options_pad == 0) {
					xp = xp + 1;
					if (xp == 0) {
						yp = yp + -1;
						xp = -SPLICONNO;
					}
				}
				else {
					xp = xp + -1;
					if (xp == -SPLICONNO) {
						xp = 0;
						yp = yp + -1;
					}
				}
			}
			local_54 = local_54 << 1 | local_58 >> 0x1f;
			local_58 = local_58 << 1;
			iVar10 = iVar10 + 1;
			iVar7 = iVar7 + 0x34;
		}
		iVar3 = iVar3 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpell__Fi(int pnum /*$s0*/)
 // line 1114, offset 0x8003014c
	/* begin block 1 */
		// Start line: 1115
		// Start offset: 0x8003014C
	/* end block 1 */
	// End offset: 0x80030208
	// End Line: 1127

	/* begin block 2 */
		// Start line: 2437
	/* end block 2 */
	// End Line: 2438

void SetSpell__Fi(int pnum)

{
	RemoveTargetCursor__Fi(pnum);
	ToggleSpell__Fi(pnum);
	PlaySFX__Fi(IS_TITLSLCT);
	if ((&_pSpell)[sel_data] != -1) {
		ClearPanel__Fv();
		plr[pnum]._pRSpell = (&_pSpell)[pnum];
		plr[pnum]._pRSplType = (char)_pSplType[pnum];
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPanelString__FPCci(char *str /*$a2*/, int just /*$s0*/)
 // line 1137, offset 0x80030220
	/* begin block 1 */
		// Start line: 1138
		// Start offset: 0x80030220
	/* end block 1 */
	// End offset: 0x800302BC
	// End Line: 1141

	/* begin block 2 */
		// Start line: 2483
	/* end block 2 */
	// End Line: 2484

void AddPanelString__FPCci(char *str,int just)

{
	int *piVar1;
	
	strcpy(_panelstr + sel_data * 0x200 + _pnumlines[sel_data] * 0x40,str);
	piVar1 = _pnumlines + sel_data;
	(&_pstrjust)[sel_data * 8 + *piVar1] = just;
	if (*piVar1 < 8) {
		*piVar1 = *piVar1 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPanel__Fv()
 // line 1147, offset 0x800302d0
	/* begin block 1 */
		// Start line: 1148
		// Start offset: 0x800302D0
	/* end block 1 */
	// End offset: 0x800302F8
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2505
	/* end block 2 */
	// End Line: 2506

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
 // line 1202, offset 0x80030300
	/* begin block 1 */
		// Start line: 1203
		// Start offset: 0x80030300
	/* end block 1 */
	// End offset: 0x80030310
	// End Line: 1204

	/* begin block 2 */
		// Start line: 2614
	/* end block 2 */
	// End Line: 2615

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPanelStr__Fv(void)

{
	ClearPanel__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitControlPan__Fv()
 // line 1289, offset 0x80030320
	/* begin block 1 */
		// Start line: 1290
		// Start offset: 0x80030320
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80030558
	// End Line: 1437

	/* begin block 2 */
		// Start line: 2788
	/* end block 2 */
	// End Line: 2789

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitControlPan__Fv(void)

{
	char cVar1;
	uchar *puVar2;
	char *__src;
	int iVar3;
	
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
	iVar3 = 1;
	if (gbMaxPlayers != '\x01') {
		puVar2 = &UCHAR_00h_8012c0e7;
		pMultiBtns = (uchar *)0x0;
		pTalkBtns = (uchar *)0x0;
		talkofs = 0;
		sgszTalkMsg[0] = '\0';
		do {
			*puVar2 = '\x01';
			iVar3 = iVar3 + -1;
			puVar2 = puVar2 + -1;
		} while (-1 < iVar3);
		iVar3 = 2;
		puVar2 = &UCHAR_00h_8012c0f6;
		do {
			*puVar2 = '\0';
			iVar3 = iVar3 + -1;
			puVar2 = puVar2 + -1;
		} while (-1 < iVar3);
	}
	panelflag = '\0';
	lvlbtndown = '\0';
	pPanelButtons = LoadFileInMem__FPCcPUl("CtrlPan\\Panel8bu.CEL",(ulong *)0x0);
	iVar3 = 7;
	puVar2 = &UCHAR_00h_8012c0db;
	do {
		*puVar2 = '\0';
		iVar3 = iVar3 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar3);
	panbtndown = '\0';
	if (gbMaxPlayers == '\x01') {
		numpanbtns = 6;
	}
	else {
		numpanbtns = 8;
	}
	pChrButtons = (uchar *)0x0;
	iVar3 = 3;
	puVar2 = &UCHAR_00h_8012c0df;
	do {
		*puVar2 = '\0';
		iVar3 = iVar3 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar3);
	pDurIcons = (uchar *)0x0;
	__src = GetStr__Fi(STR_);
	strcpy(_infostr + sel_data * 0x100,__src);
	InitPanelStr__Fv();
	cVar1 = plr[myplr]._pClass;
	if (cVar1 == '\0') {
		iVar3 = 0x1a;
	}
	else {
		if (cVar1 == '\x01') {
			iVar3 = 0x1c;
		}
		else {
			iVar3 = 0x1b;
			if (cVar1 != '\x02') {
				_spselflag2 = (TASK *)0x0;
				PTR_8012b154 = (TASK *)0x0;
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
				pQLogCel = (uchar *)0x0;
				return;
			}
		}
	}
	SpellPages[0] = iVar3;
	_spselflag2 = (TASK *)0x0;
	PTR_8012b154 = (TASK *)0x0;
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
	pQLogCel = (uchar *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCtrlPan__Fv()
 // line 1442, offset 0x80030568
	/* begin block 1 */
		// Start line: 1443
		// Start offset: 0x80030568
	/* end block 1 */
	// End offset: 0x80030584
	// End Line: 1446

	/* begin block 2 */
		// Start line: 3161
	/* end block 2 */
	// End Line: 3162

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
 // line 1525, offset 0x80030594
	/* begin block 1 */
		// Start line: 1526
		// Start offset: 0x80030594
	/* end block 1 */
	// End offset: 0x800305F8
	// End Line: 1537

	/* begin block 2 */
		// Start line: 3331
	/* end block 2 */
	// End Line: 3332

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoAutoMap__Fv(void)

{
	if ((currlevel == '\0') && (gbMaxPlayers == '\x01')) {
		InitDiabloMsg__Fc('\x01');
	}
	else {
		if (automapflag == '\0') {
			StartAutomap__Fv();
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
 // line 1544, offset 0x80030608
	/* begin block 1 */
		// Start line: 1545
		// Start offset: 0x80030608
		// Variables:
	// 		int i; // $s2
	// 		int x2; // $a2
	// 		int y2; // $a3
	// 		int (*_pSpell)[1]; // $s4
	// 		int c; // $s0
	// 		int s; // $a1
	// 		int v; // $s0
	// 		int pnum; // stack offset -64

		/* begin block 1.1 */
			// Start line: 1575
			// Start offset: 0x800307E0

			/* begin block 1.1.1 */
				// Start line: 1575
				// Start offset: 0x80030804

				/* begin block 1.1.1.1 */
					// Start line: 1576
					// Start offset: 0x80030804

					/* begin block 1.1.1.1.1 */
						// Start line: 1576
						// Start offset: 0x8003083C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1577
							// Start offset: 0x8003083C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1585
								// Start offset: 0x80030910

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1586
									// Start offset: 0x80030910

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1586
										// Start offset: 0x8003095C

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1588
											// Start offset: 0x8003095C
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8003095C
										// End Line: 1588

										/* begin block 1.1.1.1.1.1.1.1.1.2 */
											// Start line: 1598
											// Start offset: 0x80030AC8
										/* end block 1.1.1.1.1.1.1.1.1.2 */
										// End offset: 0x80030AC8
										// End Line: 1598

										/* begin block 1.1.1.1.1.1.1.1.1.3 */
											// Start line: 1620
											// Start offset: 0x80030D2C
										/* end block 1.1.1.1.1.1.1.1.1.3 */
										// End offset: 0x80030D2C
										// End Line: 1620

										/* begin block 1.1.1.1.1.1.1.1.1.4 */
											// Start line: 1628
											// Start offset: 0x80030E64
										/* end block 1.1.1.1.1.1.1.1.1.4 */
										// End offset: 0x80030E64
										// End Line: 1628
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80030E64
									// End Line: 1628
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80030E64
								// End Line: 1628
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80030E64
							// End Line: 1628
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80030E64
						// End Line: 1628
					/* end block 1.1.1.1.1 */
					// End offset: 0x80030E64
					// End Line: 1628
				/* end block 1.1.1.1 */
				// End offset: 0x80030E64
				// End Line: 1628
			/* end block 1.1.1 */
			// End offset: 0x80030E64
			// End Line: 1628
		/* end block 1.1 */
		// End offset: 0x80030E64
		// End Line: 1628
	/* end block 1 */
	// End offset: 0x80030E94
	// End Line: 1636

	/* begin block 2 */
		// Start line: 3369
	/* end block 2 */
	// End Line: 3370

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckPanelInfo__Fv(void)

{
	int iVar1;
	char cVar2;
	char *__src;
	char *__format;
	undefined4 StrId;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	undefined auStack80 [16];
	int local_40 [6];
	
	panelflag = '\0';
	iVar1 = -(sel_data * 4 + 0xeU & 0xfffffff8);
	piVar6 = (int *)((int)local_40 + iVar1);
	local_40[0] = sel_data;
	ClearPanel__Fv(auStack80[iVar1]);
	iVar4 = 0;
	if (0 < numpanbtns) {
		iVar5 = 0;
		iVar3 = 0;
		do {
			if ((((*(int *)((int)&PanBtnPos + iVar3) <= MouseX) &&
					 (MouseX <= *(int *)((int)&PanBtnPos + iVar3) + *(int *)((int)&INT_800be188 + iVar3))) &&
					(*(int *)((int)&INT_800be184 + iVar3) <= MouseY)) &&
				 (MouseY <= *(int *)((int)&INT_800be184 + iVar3) + *(int *)((int)INT_ARRAY_800be18c + iVar3)
				 )) {
				if (iVar4 == 7) {
					StrId = 0x2e8;
					if (FriendlyMode != '\0') {
						StrId = 0x2e9;
					}
				}
				else {
					StrId = *(undefined4 *)((int)PanBtnStr + iVar5);
				}
				__src = GetStr__Fi(StrId,auStack80[iVar1]);
				strcpy(_infostr + sel_data * 0x100,__src,auStack80[iVar1]);
				if (*(int *)((int)PanBtnHotKey8 + iVar5) != 0) {
					__src = GetStr__Fi(0x4cf,auStack80[iVar1]);
					sprintf(tempstr,__src,*(int *)((int)PanBtnHotKey8 + iVar5));
					AddPanelString__FPCci(tempstr,1,auStack80[iVar1]);
				}
				_infoclr[sel_data] = '\0';
				panelflag = '\x01';
				_pinfoflag[sel_data] = '\x01';
			}
			iVar5 = iVar5 + 4;
			iVar4 = iVar4 + 1;
			iVar3 = iVar3 + 0x14;
		} while (iVar4 < numpanbtns);
	}
	if ((((&_spselflag2)[local_40[0]] != (TASK *)0x0) || (0x37 < MouseX - 0x235U)) ||
		 (0x37 < MouseY - 0x1a0U)) goto LAB_80030e64;
	__src = GetStr__Fi(0x38a,auStack80[iVar1]);
	strcpy(_infostr + sel_data * 0x100,__src,auStack80[iVar1]);
	_infoclr[sel_data] = '\0';
	panelflag = '\x01';
	_pinfoflag[sel_data] = '\x01';
	__src = GetStr__Fi(0x4cf,auStack80[iVar1]);
	strcpy(tempstr,__src,auStack80[iVar1]);
	AddPanelString__FPCci(tempstr,1,auStack80[iVar1]);
	iVar4 = myplr;
	iVar3 = plr[myplr]._pRSpell;
	piVar6[sel_data] = iVar3;
	if (iVar3 == -1) goto LAB_80030e64;
	cVar2 = plr[iVar4]._pRSplType;
	if (cVar2 == '\x01') {
		__src = GetStr__Fi(0x4ed,auStack80[iVar1]);
		__format = GetStr__Fi((&spelldata)[piVar6[sel_data]].sNameText,auStack80[iVar1]);
		sprintf(tempstr,__src,__format);
		AddPanelString__FPCci(tempstr,1,auStack80[iVar1]);
		__src = (char *)((int)*(char *)(myplr * 0x23a8 + -0x7ff2147f + piVar6[sel_data]) +
										(int)plr[myplr]._pISplLvlAdd);
		if ((int)__src < 0) {
			__src = (char *)0x0;
		}
		if (__src != (char *)0x0) {
			__format = GetStr__Fi(0x3cd,auStack80[iVar1]);
			goto LAB_80030e4c;
		}
		__src = GetStr__Fi(0x3cc,auStack80[iVar1]);
		sprintf(tempstr,__src);
	}
	else {
		if (cVar2 < '\x02') {
			if (cVar2 != '\0') goto LAB_80030e64;
			__format = GetStr__Fi(0x4ec,auStack80[iVar1]);
			__src = GetStr__Fi((&spelldata)[piVar6[sel_data]].sSkillText,auStack80[iVar1]);
		}
		else {
			if (cVar2 == '\x02') {
				__src = GetStr__Fi(0x386,auStack80[iVar1]);
				__format = GetStr__Fi((&spelldata)[piVar6[sel_data]].sNameText,auStack80[iVar1]);
				sprintf(tempstr,__src,__format);
				AddPanelString__FPCci(tempstr,1,auStack80[iVar1]);
				__src = (char *)0x0;
				iVar4 = 0;
				if (0 < plr[myplr]._pNumInv) {
					iVar3 = 0;
					do {
						if (((*(short *)((int)&plr[myplr].InvList[0]._itype + iVar3) != -1) &&
								((uint)*(ushort *)((int)&plr[myplr].InvList[0]._iMiscId + iVar3) - 0x15 < 2)) &&
							 (*(int *)((int)&plr[myplr].InvList[0]._iSpell + iVar3) == piVar6[sel_data])) {
							__src = __src + 1;
						}
						iVar4 = iVar4 + 1;
						iVar3 = iVar3 + 0x98;
					} while (iVar4 < plr[myplr]._pNumInv);
				}
				iVar3 = 0;
				iVar4 = myplr * 0x23a8;
				do {
					if (((*(short *)((int)&plr[0].SpdList[0]._itype + iVar4) != -1) &&
							((uint)*(ushort *)((int)&plr[0].SpdList[0]._iMiscId + iVar4) - 0x15 < 2)) &&
						 (*(int *)((int)&plr[0].SpdList[0]._iSpell + iVar4) == piVar6[sel_data])) {
						__src = __src + 1;
					}
					iVar3 = iVar3 + 1;
					iVar4 = iVar4 + 0x98;
				} while (iVar3 < 8);
				StrId = 2;
				if (__src == &DAT_00000001) {
LAB_80030de4:
					__src = GetStr__Fi(StrId,auStack80[iVar1]);
					strcpy(tempstr,__src,auStack80[iVar1]);
					goto LAB_80030e54;
				}
				__format = GetStr__Fi(0x4d5,auStack80[iVar1]);
			}
			else {
				if (cVar2 != '\x03') goto LAB_80030e64;
				__src = GetStr__Fi(0x3d9,auStack80[iVar1]);
				__format = GetStr__Fi((&spelldata)[piVar6[sel_data]].sNameText,auStack80[iVar1]);
				sprintf(tempstr,__src,__format);
				AddPanelString__FPCci(tempstr,1,auStack80[iVar1]);
				StrId = 1;
				if (plr[myplr].InvBody[4]._iCharges == 1) goto LAB_80030de4;
				__format = GetStr__Fi(0x4d3,auStack80[iVar1]);
				__src = (char *)(int)plr[myplr].InvBody[4]._iCharges;
			}
		}
LAB_80030e4c:
		sprintf(tempstr,__format,__src);
	}
LAB_80030e54:
	AddPanelString__FPCci(tempstr,1,auStack80[iVar1]);
LAB_80030e64:
	if (invflag != '\0') {
		cVar2 = CheckInvHLight__Fv(auStack80[iVar1]);
		_pcursinvitem[sel_data] = cVar2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeControlPan__Fv()
 // line 1709, offset 0x80030ecc
	/* begin block 1 */
		// Start line: 1710
		// Start offset: 0x80030ECC

		/* begin block 1.1 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.2 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.2 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.3 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.3 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.4 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.4 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.5 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.5 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.6 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.6 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.7 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.7 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.8 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.8 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.9 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.9 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.10 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.10 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.11 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.11 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.12 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.12 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.13 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.13 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.14 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.14 */
		// End offset: 0x80030ECC
		// End Line: 1710

		/* begin block 1.15 */
			// Start line: 1710
			// Start offset: 0x80030ECC
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.15 */
		// End offset: 0x80030FCC
		// End Line: 1726
	/* end block 1 */
	// End offset: 0x80030FCC
	// End Line: 1726

	/* begin block 2 */
		// Start line: 3711
	/* end block 2 */
	// End Line: 3712

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
 // line 1747, offset 0x80030fdc
	/* begin block 1 */
		// Start line: 1748
		// Start offset: 0x80030FDC
		// Variables:
	// 		enum TXT_JUST Justify; // $a2
	// 		unsigned char R; // $t0
	// 		unsigned char G; // $a1
	// 		unsigned char B; // $v1
	/* end block 1 */
	// End offset: 0x800310E8
	// End Line: 1776

	/* begin block 2 */
		// Start line: 3787
	/* end block 2 */
	// End Line: 3788

int CPrintString__FiPci(int No,char *pszStr,int Just)

{
	char cVar1;
	int iVar2;
	uint B;
	uint G;
	uint R;
	
	cVar1 = _infoclr[sel_data];
	if (cVar1 == '\x01') {
		R = (uint)REDR;
		G = (uint)REDG;
		B = (uint)REDB;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 == '\0') {
				R = (uint)WHITER;
				G = (uint)WHITEG;
				B = (uint)WHITEB;
				goto LAB_800310b0;
			}
		}
		else {
			if (cVar1 == '\x02') {
				R = (uint)BLUER;
				G = (uint)BLUEG;
				B = (uint)BLUEB;
				goto LAB_800310b0;
			}
		}
		R = (uint)GOLDR;
		G = (uint)GOLDG;
		B = (uint)GOLDB;
	}
LAB_800310b0:
	iVar2 = Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,0,No * 0xd + 10,pszStr,Just,InfoBoxRect,R,G,B);
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintInfo__Fv()
 // line 1818, offset 0x800310f8
	/* begin block 1 */
		// Start line: 1819
		// Start offset: 0x800310F8
		// Variables:
	// 		int nOffset1; // $s3
	// 		int w; // $s4
	// 		int nlines; // $s2

		/* begin block 1.1 */
			// Start line: 1822
			// Start offset: 0x80031120

			/* begin block 1.1.1 */
				// Start line: 1832
				// Start offset: 0x8003113C

				/* begin block 1.1.1.1 */
					// Start line: 1836
					// Start offset: 0x80031190
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x80031218
				// End Line: 1842
			/* end block 1.1.1 */
			// End offset: 0x80031220
			// End Line: 1843
		/* end block 1.1 */
		// End offset: 0x80031220
		// End Line: 1843

		/* begin block 1.2 */
			// Start line: 1848
			// Start offset: 0x8003126C
			// Variables:
		// 		int i; // $s0
		/* end block 1.2 */
		// End offset: 0x8003130C
		// End Line: 1854
	/* end block 1 */
	// End offset: 0x8003130C
	// End Line: 1854

	/* begin block 2 */
		// Start line: 3945
	/* end block 2 */
	// End Line: 3946

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintInfo__Fv(void)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char *pcVar5;
	int No;
	int iVar6;
	
	if (talkflag == '\0') {
		iVar6 = 0;
		sVar1 = InfoBoxRect->w;
		No = 0;
		if (FePlayerNo == 0) {
			if (_infostr[sel_data * 0x100] != '\0') {
				No = 1;
				iVar2 = GetStrWidth__5CFontPc(&MediumFont,_infostr + sel_data * 0x100);
				if ((int)sVar1 < iVar2) {
					No = 2;
				}
			}
			iVar2 = 0;
			if (0 < _pnumlines[sel_data]) {
				pcVar5 = _panelstr;
				iVar4 = No;
				do {
					No = iVar4 + 1;
					iVar3 = GetStrWidth__5CFontPc(&MediumFont,pcVar5 + sel_data * 0x200);
					if ((int)sVar1 < iVar3) {
						No = iVar4 + 2;
					}
					iVar2 = iVar2 + 1;
					pcVar5 = pcVar5 + 0x40;
					iVar4 = No;
				} while (iVar2 < _pnumlines[sel_data]);
			}
			No = 4 - No;
		}
		if ((_infostr[sel_data * 0x100] != '\0') &&
			 (iVar2 = CPrintString__FiPci(No,_infostr + sel_data * 0x100,1), 1 < iVar2)) {
			iVar6 = 1;
		}
		iVar2 = 0;
		if (0 < _pnumlines[sel_data]) {
			pcVar5 = _panelstr;
			do {
				iVar4 = CPrintString__FiPci(iVar2 + iVar6 + No + 1,pcVar5 + sel_data * 0x200,
																		(&_pstrjust)[sel_data * 8 + iVar2]);
				if (iVar4 != 0) {
					iVar6 = iVar6 + 1;
				}
				iVar2 = iVar2 + 1;
				pcVar5 = pcVar5 + 0x40;
			} while (iVar2 < _pnumlines[sel_data]);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInfoBox__FP4RECT(struct RECT *InfoRect /*$a0*/)
 // line 1860, offset 0x80031334
	/* begin block 1 */
		// Start line: 1861
		// Start offset: 0x80031334
		// Variables:
	// 		int pnum; // $s0

		/* begin block 1.1 */
			// Start line: 1876
			// Start offset: 0x800313CC

			/* begin block 1.1.1 */
				// Start line: 1881
				// Start offset: 0x80031424

				/* begin block 1.1.1.1 */
					// Start line: 1882
					// Start offset: 0x80031424

					/* begin block 1.1.1.1.1 */
						// Start line: 1883
						// Start offset: 0x80031450

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1884
							// Start offset: 0x80031450

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1885
								// Start offset: 0x8003148C
								// Variables:
							// 		int nGold; // $s1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003148C
							// End Line: 1886
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80031644
						// End Line: 1903
					/* end block 1.1.1.1.1 */
					// End offset: 0x80031644
					// End Line: 1903

					/* begin block 1.1.1.1.2 */
						// Start line: 1907
						// Start offset: 0x80031660

						/* begin block 1.1.1.1.2.1 */
							// Start line: 1911
							// Start offset: 0x80031660

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 1912
								// Start offset: 0x8003168C

								/* begin block 1.1.1.1.2.1.1.1 */
									// Start line: 1912
									// Start offset: 0x8003168C

									/* begin block 1.1.1.1.2.1.1.1.1 */
										// Start line: 1923
										// Start offset: 0x800316A8

										/* begin block 1.1.1.1.2.1.1.1.1.1 */
											// Start line: 1924
											// Start offset: 0x800316A8

											/* begin block 1.1.1.1.2.1.1.1.1.1.1 */
												// Start line: 1924
												// Start offset: 0x800316BC

												/* begin block 1.1.1.1.2.1.1.1.1.1.1.1 */
													// Start line: 1924
													// Start offset: 0x800316BC

													/* begin block 1.1.1.1.2.1.1.1.1.1.1.1.1 */
														// Start line: 1930
														// Start offset: 0x80031770
													/* end block 1.1.1.1.2.1.1.1.1.1.1.1.1 */
													// End offset: 0x80031770
													// End Line: 1931
												/* end block 1.1.1.1.2.1.1.1.1.1.1.1 */
												// End offset: 0x80031784
												// End Line: 1936
											/* end block 1.1.1.1.2.1.1.1.1.1.1 */
											// End offset: 0x80031784
											// End Line: 1936
										/* end block 1.1.1.1.2.1.1.1.1.1 */
										// End offset: 0x800317A8
										// End Line: 1939
									/* end block 1.1.1.1.2.1.1.1.1 */
									// End offset: 0x800317A8
									// End Line: 1939
								/* end block 1.1.1.1.2.1.1.1 */
								// End offset: 0x80031988
								// End Line: 1975
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x80031988
							// End Line: 1975
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x80031988
						// End Line: 1975
					/* end block 1.1.1.1.2 */
					// End offset: 0x80031988
					// End Line: 1975
				/* end block 1.1.1.1 */
				// End offset: 0x80031988
				// End Line: 1975
			/* end block 1.1.1 */
			// End offset: 0x80031988
			// End Line: 1975
		/* end block 1.1 */
		// End offset: 0x80031988
		// End Line: 1975
	/* end block 1 */
	// End offset: 0x800319D0
	// End Line: 1981

	/* begin block 2 */
		// Start line: 4042
	/* end block 2 */
	// End Line: 4043

void DrawInfoBox__FP4RECT(RECT *InfoRect)

{
	int iVar1;
	char *__format;
	char *pcVar2;
	ushort ItemNo;
	int nGold;
	
	nGold = sel_data;
	iVar1 = sel_data << 2;
	InfoBoxRect = InfoRect;
	if (((panelflag == '\0') &&
			(iVar1 = sel_data << 2, InfoBoxRect = InfoRect, _trigflag[sel_data] == '\0')) &&
		 (iVar1 = sel_data * 4, InfoBoxRect = InfoRect, _pcursinvitem[sel_data] == -1)) {
		InfoBoxRect = InfoRect;
		if ((&_spselflag2)[sel_data] == (TASK *)0x0) {
			InfoBoxRect = InfoRect;
			_infostr[sel_data * 0x100] = '\0';
			_infoclr[sel_data] = '\0';
			ClearPanel__Fv();
			iVar1 = nGold << 2;
			goto LAB_800313d0;
		}
	}
	else {
LAB_800313d0:
		if ((*(int *)((int)&_spselflag2 + iVar1) == 0) && (_trigflag[sel_data] == '\0')) {
			if (_pcurs[myplr] < 0xc) {
				if ((_pcursinvitem[sel_data] == -1) || (invflag != '\0')) {
					if ((&_pcursmonst)[sel_data] == -1) {
						if ((int)(&_pcursobj)[sel_data] == -1) {
							if ((int)(&_pcursitem)[sel_data] == -1) {
								if ((&_pcursplr)[sel_data] != -1) {
									_infoclr[sel_data] = '\x03';
									strcpy(_infostr + sel_data * 0x100,plr[(int)(&_pcursplr)[sel_data]]._pName);
									ClearPanel__Fv();
									__format = GetStr__Fi(STR_LEVEL____I);
									sprintf(tempstr,__format,(int)plr[(int)(&_pcursplr)[sel_data]]._pLevel);
									AddPanelString__FPCci(tempstr,1);
									__format = GetStr__Fi(STR_HIT_POINTS__I_OF__I);
									sprintf(tempstr,__format,plr[(int)(&_pcursplr)[sel_data]]._pHitPoints >> 6,
													plr[(int)(&_pcursplr)[sel_data]]._pMaxHP >> 6);
									AddPanelString__FPCci(tempstr,1);
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
						if (leveltype == '\0') {
							strcpy(_infostr + sel_data * 0x100,towner[(&_pcursmonst)[sel_data]]._tName);
						}
						else {
							_infoclr[sel_data] = '\0';
							__format = GetStr__Fi(monster[(&_pcursmonst)[sel_data]].mName);
							strcpy(_infostr + sel_data * 0x100,__format);
							ClearPanel__Fv();
							if (monster[(&_pcursmonst)[sel_data]]._uniqtype == '\0') {
								PrintMonstHistory__Fi((uint)(monster[(&_pcursmonst)[sel_data]].MType)->mtype);
							}
							else {
								_infoclr[sel_data] = '\x03';
								PrintUniqueHistory__Fv();
							}
						}
					}
				}
			}
			else {
				if (plr[myplr].HoldItem._itype == 0xb) {
					nGold = plr[myplr].HoldItem._ivalue;
					__format = GetStr__Fi(STR__I_GOLD__S);
					pcVar2 = get_pieces_str__Fi(nGold);
					sprintf(_infostr + sel_data * 0x100,__format,nGold,pcVar2);
				}
				else {
					if (plr[myplr].HoldItem._iStatFlag == '\0') {
						__format = GetStr__Fi(STR_REQUIREMENTS_NOT_MET);
						AddPanelString__FPCci(__format,1);
						_pinfoflag[sel_data] = '\x01';
					}
					else {
						if (plr[myplr].HoldItem._iIdentified == '\0') {
							ItemNo = plr[myplr].HoldItem._iName;
						}
						else {
							ItemNo = plr[myplr].HoldItem._iIName;
						}
						__format = MakeItemStr__FP10ItemStructUsUs(&plr[myplr].HoldItem,ItemNo,0x100);
						strcpy(_infostr + sel_data * 0x100,__format);
						if (plr[myplr].HoldItem._iMagical == '\x01') {
							_infoclr[sel_data] = '\x01';
						}
						if (plr[myplr].HoldItem._iMagical == '\x02') {
							_infoclr[sel_data] = '\x03';
						}
					}
				}
			}
			goto LAB_80031988;
		}
	}
	_infoclr[sel_data] = '\0';
LAB_80031988:
	if ((_infostr[sel_data * 0x100] != '\0') || (_pnumlines[sel_data] != 0)) {
		PrintInfo__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MY_PlrStringXY__Fv()
 // line 2033, offset 0x800319e8
	/* begin block 1 */
		// Start line: 2034
		// Start offset: 0x800319E8
		// Variables:
	// 		struct CSDATA *ptr; // $s5
	// 		char r; // stack offset -64
	// 		char g; // stack offset -56
	// 		char b; // $fp
	// 		int x; // $s6
	// 		int y; // $s7
	// 		int w; // stack offset -48
	// 		int len; // $s4
	/* end block 1 */
	// End offset: 0x80031F00
	// End Line: 2126

	/* begin block 2 */
		// Start line: 4400
	/* end block 2 */
	// End Line: 4401

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MY_PlrStringXY__Fv(void)

{
	char cVar1;
	uchar uVar2;
	uchar uVar3;
	int iVar4;
	char *Str;
	int X;
	text_strs StrId;
	int DW;
	int iVar5;
	int iVar6;
	uint B;
	byte local_40;
	byte local_38;
	short local_30;
	
	iVar4 = CsNo;
	local_40 = 0;
	local_38 = 0;
	cVar1 = CS_Tab[CsNo].col;
	B = 0;
	if (cVar1 == '\x01') {
		B = (uint)BLUEB;
		local_40 = BLUER;
		local_38 = BLUEG;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 == '\0') {
				B = (uint)WHITEB;
				local_40 = WHITER;
				local_38 = WHITEG;
			}
		}
		else {
			if (cVar1 == '\x02') {
				B = (uint)REDB;
				local_40 = REDR;
				local_38 = REDG;
			}
			else {
				if (cVar1 == '\x03') {
					B = (uint)GOLDB;
					local_40 = GOLDR;
					local_38 = GOLDG;
				}
			}
		}
	}
	iVar6 = CS_Tab[CsNo].y;
	DW = CS_Tab[CsNo].w;
	iVar5 = CS_Tab[CsNo].x + 0x28 + CS_XOFF;
	if ((-1 < iVar5) && (iVar5 < 0x141)) {
		if (DW != 0) {
			SetBack__6Dialogi(&CSBack,0xc6);
			SetBorder__6Dialogi(&CSBack,0x28);
			SetRGB__6DialogUcUcUc(&CSBack,BACKR,BACKG,BACKB);
			Back__6Dialogiiii(&CSBack,iVar5 + 0x20,iVar6 + 0x22,DW,10);
			local_30 = (short)DW;
			CSRect.x = (short)(iVar5 + 0x20);
			CSRect.y = (short)(iVar6 + 0x22);
			CSRect.h = 10;
			CSRect.w = local_30;
		}
		if (CS_Tab[iVar4].String != (char *)0x0) {
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,0,8,CS_Tab[iVar4].String,JustCentre,&CSRect,(uint)local_40,
								 (uint)local_38,B);
		}
		uVar3 = WHITEG;
		uVar2 = WHITER;
		CSRect.x = 0x20;
		CSRect.y = 0x20;
		CSRect.w = 0x100;
		CSRect.h = 0xb0;
		B = (uint)WHITEB;
		if (CS_Tab[iVar4].Text1 != STR_10__OF_MANA_ADDED_TO_ARMOR) {
			if (CS_Tab[iVar4].Text2 == 0) {
				Str = GetStr__Fi(CS_Tab[iVar4].Text1);
				X = GetStrWidth__5CFontPc(&MediumFont,Str);
				Str = GetStr__Fi(CS_Tab[iVar4].Text1);
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,(iVar5 - X) + -6,iVar6 + 10,Str,JustLeft,&CSRect,(uint)uVar2,
									 (uint)uVar3,B);
			}
			if ((CS_Tab[iVar4].Text1 != 0) &&
				 (StrId = CS_Tab[iVar4].Text2, StrId != STR_10__OF_MANA_ADDED_TO_ARMOR)) {
				if (CsNo - 0xbU < 3) {
					Str = GetStr__Fi(StrId);
					GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar4].Text2);
					X = iVar5 + DW + 5;
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,X,iVar6 + 0x10,Str,JustLeft,&CSRect,(uint)uVar2,(uint)uVar3,B);
					Str = GetStr__Fi(CS_Tab[iVar4].Text1);
					GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar4].Text1);
				}
				else {
					Str = GetStr__Fi(StrId);
					X = GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar4].Text2);
					Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
										(&MediumFont,(iVar5 - X) + -6,iVar6 + 0x10,Str,JustLeft,&CSRect,(uint)uVar2,
										 (uint)uVar3,B);
					Str = GetStr__Fi(CS_Tab[iVar4].Text1);
					X = GetStrWidth__5CFontPc(&MediumFont,Str);
					Str = GetStr__Fi(CS_Tab[iVar4].Text1);
					X = (iVar5 - X) + -6;
				}
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,X,iVar6 + 6,Str,JustLeft,&CSRect,(uint)uVar2,(uint)uVar3,B);
			}
		}
		if (CS_Tab[iVar4].Text3 != STR_10__OF_MANA_ADDED_TO_ARMOR) {
			Str = GetStr__Fi(CS_Tab[iVar4].Text3);
			X = GetStrWidth__5CFontPc(&MediumFont,Str);
			Str = GetStr__Fi(CS_Tab[iVar4].Text3);
			Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
								(&MediumFont,iVar5 + ((int)((DW - X) + ((uint)(DW - X) >> 0x1f)) >> 1),iVar6 + -5,
								 Str,JustLeft,&CSRect,(uint)uVar2,(uint)uVar3,B);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ADD_PlrStringXY__FPCcc(char *pszStr /*$v1*/, char col /*$s1*/)
 // line 2133, offset 0x80031f34
	/* begin block 1 */
		// Start line: 2134
		// Start offset: 0x80031F34
		// Variables:
	// 		struct CSDATA *ptr; // $s0
	/* end block 1 */
	// End offset: 0x80031FC4
	// End Line: 2150

	/* begin block 2 */
		// Start line: 4628
	/* end block 2 */
	// End Line: 4629

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
// void /*$ra*/ DrawPlus__Fii(int n /*$s2*/, int pnum /*$s1*/)
 // line 2172, offset 0x80031fdc
	/* begin block 1 */
		// Start line: 2173
		// Start offset: 0x80031FDC
		// Variables:
	// 		struct TextDat *ThisDat; // $s0
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		int x; // $v1
	// 		int y; // $a3
	/* end block 1 */
	// End offset: 0x80032128
	// End Line: 2208

	/* begin block 2 */
		// Start line: 4716
	/* end block 2 */
	// End Line: 4717

void DrawPlus__Fii(int n,int pnum)

{
	uchar uVar1;
	TextDat *this;
	ulong uVar2;
	POLY_FT4 *pPVar3;
	int Frm;
	int X;
	
	this = GM_UseTexData__Fi(0);
	if (n == 4) {
		if (pnum == 0) {
			uVar2 = VID_GetTick__Fv();
			Frm = (uVar2 >> 3 & 7) + 0x13;
			X = 0x19;
		}
		else {
			uVar2 = VID_GetTick__Fv();
			Frm = 0x1a - (uVar2 >> 3 & 7);
			X = 0x12a;
		}
		pPVar3 = PrintFt4__7TextDatiiiiii(this,Frm,X,100,0,0xff,0);
		pPVar3->r0 = -0x60;
		pPVar3->g0 = -0x60;
		pPVar3->b0 = -0x60;
		pPVar3->code = pPVar3->code & 0xfe | 2;
	}
	else {
		chrbtnactive = '\x01';
		pPVar3 = PrintFt4__7TextDatiiiiii
											 (this,0xb5,CS_Tab[n + 0x14].x + 0x48 + CS_XOFF,CS_Tab[n + 0x14].y + 0x21,0,
												0xff,0);
		if (lus == n) {
			uVar1 = -0x80;
		}
		else {
			uVar1 = 'P';
		}
		pPVar3->r0 = uVar1;
		pPVar3->g0 = uVar1;
		pPVar3->b0 = uVar1;
		pPVar3->code = pPVar3->code & 0xfc;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChrCheckValidButton__Fi(int move /*$a0*/)
 // line 2215, offset 0x80032144
	/* begin block 1 */
		// Start line: 2216
		// Start offset: 0x80032144
	/* end block 1 */
	// End offset: 0x8003220C
	// End Line: 2229

	/* begin block 2 */
		// Start line: 4822
	/* end block 2 */
	// End Line: 4823

void ChrCheckValidButton__Fi(int move)

{
	uchar uVar1;
	
	if (move == 0) {
		move = 1;
	}
	lus = lus + move;
	if (lus < 0) {
		lus = 0;
	}
	if (3 < lus) {
		lus = 3;
	}
	uVar1 = (&chrbtn)[lus];
	while (uVar1 != '\0') {
		lus = lus + move;
		if (lus < 0) {
			lus = 0;
		}
		if (3 < lus) {
			lus = 3;
		}
		if (lus == 0) {
			move = 1;
		}
		if (lus == 3) {
			move = -1;
		}
		uVar1 = (&chrbtn)[lus];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawArrows__Fv()
 // line 2236, offset 0x80032218
	/* begin block 1 */
		// Start line: 2237
		// Start offset: 0x80032218
		// Variables:
	// 		struct TextDat *ThisDat; // $s2
	// 		struct POLY_FT4 *Ft4; // $t2
	// 		unsigned char flip; // $s0
	// 		int x; // $s1
	/* end block 1 */
	// End offset: 0x800322F4
	// End Line: 2258

	/* begin block 2 */
		// Start line: 4863
	/* end block 2 */
	// End Line: 4864

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawArrows__Fv(void)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	TextDat *this;
	POLY_FT4 *pPVar4;
	uint XFlip;
	uint X;
	
	this = GM_UseTexData__Fi(0);
	X = 0x10e;
	if (CS_XOFF != 0) {
		X = 0x30;
	}
	XFlip = (uint)(CS_XOFF == 0);
	pPVar4 = PrintFt4__7TextDatiiiiii(this,0x9c,X,0xc4,XFlip,0xff,0);
	uVar3 = WHITEB;
	uVar2 = WHITEG;
	uVar1 = WHITER;
	pPVar4->code = pPVar4->code & 0xfc;
	pPVar4->r0 = uVar1;
	pPVar4->g0 = uVar2;
	pPVar4->b0 = uVar3;
	pPVar4 = PrintFt4__7TextDatiiiiii(this,0x9c,X | 1,0xc5,XFlip,0xfe,0);
	pPVar4->r0 = '\0';
	pPVar4->g0 = '\0';
	pPVar4->b0 = '\0';
	pPVar4->code = pPVar4->code & 0xfe | 2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BuildChr__Fv()
 // line 2262, offset 0x80032310
	/* begin block 1 */
		// Start line: 2263
		// Start offset: 0x80032310
		// Variables:
	// 		char c; // $s2
	// 		char chrstr[64]; // stack offset -80
	// 		long mind; // $s1
	// 		long maxd; // $s0
	// 		int hper; // $s0
	// 		int ac; // $s0

		/* begin block 1.1 */
			// Start line: 2436
			// Start offset: 0x800331D8

			/* begin block 1.1.1 */
				// Start line: 2440
				// Start offset: 0x80033278
			/* end block 1.1.1 */
			// End offset: 0x80033310
			// End Line: 2442
		/* end block 1.1 */
		// End offset: 0x80033310
		// End Line: 2442
	/* end block 1 */
	// End offset: 0x800335CC
	// End Line: 2461

	/* begin block 2 */
		// Start line: 4924
	/* end block 2 */
	// End Line: 4925

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
	text_strs StrId;
	int iVar7;
	int iVar8;
	int iVar9;
	char col;
	bool col_00;
	char local_50 [64];
	
	CsNo = 0;
	ADD_PlrStringXY__FPCcc(plr[options_pad]._pName,'\0');
	ADD_PlrStringXY__FPCcc(plr[options_pad]._pName,'\0');
	col = plr[options_pad]._pClass;
	if (col == '\0') {
		pszStr = GetStr__Fi(STR_WARRIOR);
		ADD_PlrStringXY__FPCcc(pszStr,'\0');
		StrId = STR_WARRIOR;
	}
	else {
		if (col == '\x01') {
			pszStr = GetStr__Fi(STR_ROGUE);
			ADD_PlrStringXY__FPCcc(pszStr,'\0');
			StrId = STR_ROGUE;
		}
		else {
			if (col != '\x02') goto LAB_8003245c;
			pszStr = GetStr__Fi(STR_SORCEROR);
			ADD_PlrStringXY__FPCcc(pszStr,'\0');
			StrId = STR_SORCEROR;
		}
	}
	pszStr = GetStr__Fi(StrId);
	ADD_PlrStringXY__FPCcc(pszStr,'\0');
LAB_8003245c:
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pLevel);
	ADD_PlrStringXY__FPCcc(local_50,'\0');
	pszStr = GetStr__Fi(STR__LI);
	sprintf(local_50,pszStr,plr[options_pad]._pExperience);
	ADD_PlrStringXY__FPCcc(local_50,'\0');
	if (plr[options_pad]._pLevel == '2') {
		pszStr = GetStr__Fi(STR_NONE);
		strcpy(local_50,pszStr);
		col = '\x03';
	}
	else {
		pszStr = GetStr__Fi(STR__LI);
		col = '\0';
		sprintf(local_50,pszStr,plr[options_pad]._pNextExper);
	}
	ADD_PlrStringXY__FPCcc(local_50,col);
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,plr[options_pad]._pGold);
	ADD_PlrStringXY__FPCcc(local_50,'\0');
	iVar7 = plr[options_pad]._pIBonusAC;
	col_00 = 0 < iVar7;
	if (iVar7 < 0) {
		col_00 = true;
	}
	iVar6 = (uint)(ushort)plr[options_pad]._pDexterity << 0x10;
	iVar2 = iVar6 >> 0x10;
	iVar8 = plr[options_pad]._pIAC;
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,
					iVar8 + iVar7 + (((iVar2 / 5 + (iVar2 >> 0x1f)) - (iVar6 >> 0x1f)) * 0x10000 >> 0x10));
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	iVar7 = plr[options_pad]._pIBonusToHit;
	col_00 = 0 < iVar7;
	if (iVar7 < 0) {
		col_00 = true;
	}
	uVar1 = plr[options_pad]._pDexterity;
	pszStr = GetStr__Fi(STR__I__);
	sprintf(local_50,pszStr,((int)((uint)uVar1 << 0x10) >> 0x11) + iVar7 + 0x32);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	iVar7 = plr[options_pad]._pIBonusDam;
	col_00 = 0 < iVar7;
	if (iVar7 < 0) {
		col_00 = true;
	}
	iVar6 = plr[options_pad]._pIMinDam;
	iVar2 = plr[options_pad]._pIBonusDamMod;
	if ((plr[options_pad].InvBody[4]._itype == 3) && (plr[options_pad]._pClass != '\x01')) {
		iVar8 = plr[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar8 = plr[options_pad]._pDamageMod;
	}
	iVar9 = plr[options_pad]._pIMaxDam;
	iVar3 = plr[options_pad]._pIBonusDam;
	iVar4 = plr[options_pad]._pIBonusDamMod;
	if ((plr[options_pad].InvBody[4]._itype == 3) && (plr[options_pad]._pClass != '\x01')) {
		iVar5 = plr[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar5 = plr[options_pad]._pDamageMod;
	}
	pszStr = GetStr__Fi(STR__I__I);
	sprintf(local_50,pszStr,iVar6 + (iVar6 * iVar7) / 100 + iVar2 + iVar8,
					iVar9 + (iVar9 * iVar3) / 100 + iVar4 + iVar5);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pMagResist != '\0';
	if (plr[options_pad]._pMagResist < 'K') {
		pszStr = GetStr__Fi(STR__I__);
		sprintf(local_50,pszStr,(int)plr[options_pad]._pMagResist);
	}
	else {
		col_00 = true;
		pszStr = GetStr__Fi(STR_MAX);
		sprintf(local_50,pszStr);
	}
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pFireResist != '\0';
	if (plr[options_pad]._pFireResist < 'K') {
		pszStr = GetStr__Fi(STR__I__);
		sprintf(local_50,pszStr,(int)plr[options_pad]._pFireResist);
	}
	else {
		col_00 = true;
		pszStr = GetStr__Fi(STR_MAX);
		sprintf(local_50,pszStr);
	}
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pLghtResist != '\0';
	if (plr[options_pad]._pLghtResist < 'K') {
		pszStr = GetStr__Fi(STR__I__);
		sprintf(local_50,pszStr,(int)plr[options_pad]._pLghtResist);
	}
	else {
		col_00 = true;
		pszStr = GetStr__Fi(STR_MAX);
		sprintf(local_50,pszStr);
	}
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pBaseStr);
	ADD_PlrStringXY__FPCcc
						(local_50,-((&MaxStats)[(int)plr[options_pad]._pClass * 4] ==
											 (int)plr[options_pad]._pBaseStr) & 3);
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pBaseMag);
	ADD_PlrStringXY__FPCcc
						(local_50,-((&INT_800dea00)[(int)plr[options_pad]._pClass * 4] ==
											 (int)plr[options_pad]._pBaseMag) & 3);
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pBaseDex);
	ADD_PlrStringXY__FPCcc
						(local_50,-((&INT_800dea04)[(int)plr[options_pad]._pClass * 4] ==
											 (int)plr[options_pad]._pBaseDex) & 3);
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pBaseVit);
	ADD_PlrStringXY__FPCcc
						(local_50,-(*(int *)(&DAT_800dea08 + (int)plr[options_pad]._pClass * 0x10) ==
											 (int)plr[options_pad]._pBaseVit) & 3);
	local_50[0] = '\0';
	if (0 < plr[options_pad]._pStatPts) {
		pszStr = GetStr__Fi(STR__I);
		sprintf(local_50,pszStr,plr[options_pad]._pStatPts);
	}
	ADD_PlrStringXY__FPCcc(local_50,'\x02');
	col_00 = plr[options_pad]._pBaseStr < plr[options_pad]._pStrength;
	if (plr[options_pad]._pStrength < plr[options_pad]._pBaseStr) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pStrength);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pBaseMag < plr[options_pad]._pMagic;
	if (plr[options_pad]._pMagic < plr[options_pad]._pBaseMag) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pMagic);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pBaseDex < plr[options_pad]._pDexterity;
	if (plr[options_pad]._pDexterity < plr[options_pad]._pBaseDex) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pDexterity);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pBaseVit < plr[options_pad]._pVitality;
	if (plr[options_pad]._pVitality < plr[options_pad]._pBaseVit) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,(int)plr[options_pad]._pVitality);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	if (0 < plr[options_pad]._pStatPts) {
		iVar7 = CalcStatDiff__Fi(options_pad);
		if (iVar7 < plr[options_pad]._pStatPts) {
			iVar7 = CalcStatDiff__Fi(options_pad);
			plr[options_pad]._pStatPts = iVar7;
		}
	}
	col_00 = plr[options_pad]._pMaxHPBase < plr[options_pad]._pMaxHP;
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,plr[options_pad]._pMaxHP >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	if (plr[options_pad]._pHitPoints != plr[options_pad]._pMaxHP) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,plr[options_pad]._pHitPoints >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	col_00 = plr[options_pad]._pMaxManaBase < plr[options_pad]._pMaxMana;
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,plr[options_pad]._pMaxMana >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	if (plr[options_pad]._pMana != plr[options_pad]._pMaxMana) {
		col_00 = true;
	}
	pszStr = GetStr__Fi(STR__I);
	sprintf(local_50,pszStr,plr[options_pad]._pMana >> 6);
	ADD_PlrStringXY__FPCcc(local_50,col_00);
	CsNo = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawChr__Fv()
 // line 2465, offset 0x800335e8
	/* begin block 1 */
		// Start line: 2466
		// Start offset: 0x800335E8
		// Variables:
	// 		char chrstr[64]; // stack offset -80
	// 		int pc; // $v0
	// 		struct CPad *P; // $s1

		/* begin block 1.1 */
			// Start line: 2543
			// Start offset: 0x800339B8

			/* begin block 1.1.1 */
				// Start line: 2544
				// Start offset: 0x800339D8
				// Variables:
			// 		int llus; // $s2
			// 		int move; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80033A24
			// End Line: 2556
		/* end block 1.1 */
		// End offset: 0x80033A24
		// End Line: 2556
	/* end block 1 */
	// End offset: 0x80033A24
	// End Line: 2556

	/* begin block 2 */
		// Start line: 5370
	/* end block 2 */
	// End Line: 5371

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawChr__Fv(void)

{
	ushort uVar1;
	int iVar2;
	CPad *this;
	int move;
	
	chrbtnactive = '\0';
	SetBorder__6Dialogi(&CSBack,0x28);
	SetRGB__6DialogUcUcUc(&CSBack,'@','@','@');
	if (initchr != (void *)0x0) {
		initchr = (void *)0x0;
		if (plr[options_pad]._pStatPts == 0) {
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
	SetBack__6Dialogi(&CSBack,0x1b);
	SetBorder__6Dialogi(&CSBack,0x1c);
	SetRGB__6DialogUcUcUc(&CSBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&CSBack,0x20,0x20,0x100,0xb0);
	CSRect.x = 0x20;
	CSRect.y = 0x20;
	CSRect.w = 0x100;
	CSRect.h = 0xb0;
	PrintSelectBack__FbT0(&DAT_00000001,&DAT_00000001);
	DrawArrows__Fv();
	if (0 < plr[options_pad]._pStatPts) {
		iVar2 = (int)plr[options_pad]._pClass;
		if ((int)plr[options_pad]._pBaseStr < (&MaxStats)[iVar2 * 4]) {
			DrawPlus__Fii(0,0);
		}
		if ((int)plr[options_pad]._pBaseMag < (&INT_800dea00)[iVar2 * 4]) {
			DrawPlus__Fii(1,0);
		}
		if ((int)plr[options_pad]._pBaseDex < (&INT_800dea04)[iVar2 * 4]) {
			DrawPlus__Fii(2,0);
		}
		if ((int)plr[options_pad]._pBaseVit < *(int *)(&DAT_800dea08 + iVar2 * 0x10)) {
			DrawPlus__Fii(3,0);
		}
	}
	plusanim = plusanim + '\x01';
	if (plusanim == '\x18') {
		plusanim = '\0';
	}
	this = PAD_GetPad__FiUc(options_pad,'\0');
	SetPadTick__4CPadUs(this,3);
	SetPadTickMask__4CPadUs(this,0xf);
	uVar1 = GetTick__C4CPad(this);
	if ((uVar1 & 4) != 0) {
		if (CS_XOFF != 0) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		CS_XOFF = 0;
	}
	uVar1 = GetTick__C4CPad(this);
	if ((uVar1 & 8) != 0) {
		if (CS_XOFF == 0) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		CS_XOFF = 0x140;
	}
	iVar2 = lus;
	if ((chrbtnactive != '\0') && (CS_XOFF == 0x140)) {
		uVar1 = GetTick__C4CPad(this);
		move = -((uint)uVar1 & 1);
		uVar1 = GetTick__C4CPad(this);
		if ((uVar1 & 2) != 0) {
			move = 1;
		}
		ChrCheckValidButton__Fi(move);
		if (iVar2 != lus) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawChrTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 2609, offset 0x80033a40
	/* begin block 1 */
		// Start line: 2610
		// Start offset: 0x80033A40
	/* end block 1 */
	// End offset: 0x80033AE0
	// End Line: 2628

	/* begin block 2 */
		// Start line: 5672
	/* end block 2 */
	// End Line: 5673

void DrawChrTSK__FP4TASK(TASK *T)

{
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	PostGamePad__Fiiii(2,0,0,0);
	while (TSK_Sleep(1), chrflag != '\0') {
		DrawChr__Fv();
	}
	TSK_Sleep(1);
	PostGamePad__Fiiii(5,0,0,0);
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLevelUpIcon__Fi(int pnum /*$a1*/)
 // line 2636, offset 0x80033af0
	/* begin block 1 */
		// Start line: 2637
		// Start offset: 0x80033AF0
	/* end block 1 */
	// End offset: 0x80033B74
	// End Line: 2644

	/* begin block 2 */
		// Start line: 5726
	/* end block 2 */
	// End Line: 5727

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
 // line 2649, offset 0x80033b84
	/* begin block 1 */
		// Start line: 2650
		// Start offset: 0x80033B84
		// Variables:
	// 		int move; // $s0
	// 		int pc; // $a1
	/* end block 1 */
	// End offset: 0x80033DD4
	// End Line: 2709

	/* begin block 2 */
		// Start line: 5756
	/* end block 2 */
	// End Line: 5757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckChrBtns__Fv(void)

{
	uchar bCmd;
	int iVar1;
	int move;
	
	move = 0;
	if (CS_XOFF != 0x140) {
		return;
	}
	if (chrbtnactive == '\0') {
		return;
	}
	if (plr[options_pad]._pStatPts == 0) {
		return;
	}
	iVar1 = (int)plr[options_pad]._pClass;
	if (lus == 1) {
		if ((&INT_800dea00)[iVar1 * 4] <= (int)plr[options_pad]._pBaseMag) {
			UCHAR_00h_8012c0dd = '\x01';
			move = 1;
			goto LAB_80033d50;
		}
		bCmd = '\x04';
	}
	else {
		if (lus < 2) {
			if (lus != 0) goto LAB_80033d50;
			if ((&MaxStats)[iVar1 * 4] <= (int)plr[options_pad]._pBaseStr) {
				chrbtn = '\x01';
				move = 1;
				goto LAB_80033d50;
			}
			bCmd = '\x03';
		}
		else {
			if (lus == 2) {
				if ((&INT_800dea04)[iVar1 * 4] <= (int)plr[options_pad]._pBaseDex) {
					UCHAR_00h_8012c0de = '\x01';
					move = 1;
					goto LAB_80033d50;
				}
				bCmd = '\x05';
			}
			else {
				if (lus != 3) goto LAB_80033d50;
				if (*(int *)(&DAT_800dea08 + iVar1 * 0x10) <= (int)plr[options_pad]._pBaseVit) {
					UCHAR_00h_8012c0df = '\x01';
					move = -1;
					goto LAB_80033d50;
				}
				bCmd = '\x06';
			}
		}
	}
	NetSendCmdParam1__FUcUcUs('\x01',bCmd,1);
LAB_80033d50:
	if ((&chrbtn)[lus] == '\0') {
		PlaySFX__Fi(IS_TITLSLCT);
	}
	plr[options_pad]._pStatPts = plr[options_pad]._pStatPts + -1;
	ChrCheckValidButton__Fi(move);
	BuildChr__Fv();
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem /*$a0*/, int x /*$a1*/, int c /*$a2*/)
 // line 2716, offset 0x80033de8
	/* begin block 1 */
		// Start line: 2717
		// Start offset: 0x80033DE8
	/* end block 1 */
	// End offset: 0x80033E60
	// End Line: 2757

	/* begin block 2 */
		// Start line: 5891
	/* end block 2 */
	// End Line: 5892

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
 // line 2764, offset 0x80033e6c
	/* begin block 1 */
		// Start line: 2765
		// Start offset: 0x80033E6C
		// Variables:
	// 		struct POLY_FT4 *FT4; // $a3
	/* end block 1 */
	// End offset: 0x80033F44
	// End Line: 2779

	/* begin block 2 */
		// Start line: 5987
	/* end block 2 */
	// End Line: 5988

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RedBack__Fv(void)

{
	bool bVar1;
	TextDat *this;
	POLY_FT4 *pPVar2;
	
	this = GM_UseTexData__Fi(0);
	pPVar2 = PrintFt4__7TextDatiiiiii(this,0x10a,0,0,0,200,0);
	pPVar2->x1 = 0x160;
	pPVar2->x3 = 0x160;
	pPVar2->y2 = 0xf0;
	pPVar2->y3 = 0xf0;
	pPVar2->r0 = '\x18';
	pPVar2->g0 = '\x18';
	pPVar2->b0 = '\x18';
	pPVar2->x0 = 0;
	pPVar2->y0 = 0;
	pPVar2->y1 = 0;
	pPVar2->x2 = 0;
	pPVar2->code = pPVar2->code & 0xfe | 2;
	pPVar2->u1 = pPVar2->u1 + -1;
	pPVar2->u3 = pPVar2->u3 + -1;
	pPVar2->v2 = pPVar2->v2 + -1;
	pPVar2->v3 = pPVar2->v3 + -1;
	bVar1 = leveltype != '\0';
	pPVar2->tpage = pPVar2->tpage | 0x40;
	if (bVar1) {
		pPVar2->r0 = '\0';
		pPVar2->g0 = -1;
		pPVar2->b0 = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintSBookStr__FiiUcPCcUc(int x /*$t0*/, int y /*$a2*/, unsigned char cjustflag /*$a2*/, char *pszStr /*$a3*/, int bright /*stack 16*/)
 // line 2784, offset 0x80033f54
	/* begin block 1 */
		// Start line: 2785
		// Start offset: 0x80033F54
	/* end block 1 */
	// End offset: 0x80033FDC
	// End Line: 2792

	/* begin block 2 */
		// Start line: 6059
	/* end block 2 */
	// End Line: 6060

void PrintSBookStr__FiiUcPCcUc(int x,int y,uchar cjustflag,char *pszStr,int bright)

{
	uint uVar1;
	
	uVar1 = bright & 0xff;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,x,y,pszStr,JustLeft,&CSRect,(uint)WHITER * uVar1 >> 8,
						 (uint)WHITEG * uVar1 >> 8,(uint)WHITEB * uVar1 >> 8);
	return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ GetSBookTrans__FiUc(int ii /*$s1*/, unsigned char townok /*$s2*/)
 // line 2798, offset 0x80033fec
	/* begin block 1 */
		// Start line: 2799
		// Start offset: 0x80033FEC
		// Variables:
	// 		char st; // $s0
	/* end block 1 */
	// End offset: 0x800341E8
	// End Line: 2811

	/* begin block 2 */
		// Start line: 6109
	/* end block 2 */
	// End Line: 6110

char GetSBookTrans__FiUc(int ii,uchar townok)

{
	uchar uVar1;
	char cVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	
	uVar3 = *(uint *)((int)&plr[myplr]._pISpells + 4);
	uVar4 = ii - 1;
	if ((int)(uVar4 * 0x4000000) < 0) {
		uVar5 = uVar3 >> (uVar4 & 0x1f);
	}
	else {
		uVar5 = *(uint *)&plr[myplr]._pISpells >> (uVar4 & 0x1f);
		if (uVar4 * 0x4000000 != 0) {
			uVar5 = uVar5 | uVar3 << (-uVar4 & 0x1f);
		}
	}
	cVar2 = '\x01';
	if ((uVar5 & 1) != 0) {
		cVar2 = '\x03';
	}
	uVar3 = 1 << (uVar4 & 0x1f);
	if (((*(uint *)&plr[myplr]._pAblSpells & uVar3) != 0) ||
		 ((*(uint *)((int)&plr[myplr]._pAblSpells + 4) & (int)uVar3 >> 0x1f) != 0)) {
		cVar2 = '\0';
	}
	if (cVar2 == '\x01') {
		uVar1 = CheckSpell__FiicUc(myplr,ii,'\x01','\x01');
		if (uVar1 == '\0') {
			cVar2 = '\x04';
		}
		if ((int)(((uint)*(byte *)(myplr * 0x23a8 + -0x7ff2147f + ii) +
							(uint)(byte)plr[myplr]._pISplLvlAdd) * 0x1000000) < 1) {
			cVar2 = '\x04';
		}
	}
	if ((((townok != '\0') && (currlevel == '\0')) && (cVar2 != '\x04')) &&
		 ((&spelldata)[ii].sTownSpell == '\0')) {
		cVar2 = '\x04';
	}
	return cVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSpellBook__Fv()
 // line 2834, offset 0x80034204
	/* begin block 1 */
		// Start line: 2835
		// Start offset: 0x80034204
		// Variables:
	// 		int i; // $s2
	// 		int ii; // $s1
	// 		int x; // $s3
	// 		int y; // $s4
	// 		int mind; // stack offset -56
	// 		int maxd; // stack offset -52
	// 		int sx; // $s7
	// 		int sy; // $s6
	// 		unsigned long tspls; // stack offset -48
	// 		char c; // $s1
	// 		int v; // $s0
	// 		unsigned char bright; // $s3
	// 		char Num[4]; // stack offset -64
	// 		int bw; // $s6
	// 		struct CPad *P; // $s0
	// 		int lsbooktab; // $s1
	// 		int lcur_spel; // $s2
	/* end block 1 */
	// End offset: 0x80034B5C
	// End Line: 3019

	/* begin block 2 */
		// Start line: 6181
	/* end block 2 */
	// End Line: 6182

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSpellBook__Fv(void)

{
	bool Trans;
	char t;
	ushort uVar1;
	int w;
	char *pszStr;
	CPad *this;
	byte R;
	byte G;
	byte B;
	uint uVar2;
	uint R_00;
	ulong ii;
	int iVar3;
	int DX;
	int bright;
	int yp;
	char acStack64 [8];
	int local_38;
	int local_34;
	uint local_30;
	uint local_2c;
	
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	t = plr[myplr]._pClass;
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
	DX = 0x1a;
	SetBack__6Dialogi(&CSBack,0xc6);
	SetBorder__6Dialogi(&CSBack,0x28);
	iVar3 = 0;
	do {
		SetRGB__6DialogUcUcUc(&CSBack,BACKR >> 1,BACKG >> 1,BACKB >> 1);
		R_00 = 0x40;
		if (iVar3 == sbooktab) {
			R_00 = 0xffffffff;
			SetRGB__6DialogUcUcUc(&CSBack,BACKR,BACKG,BACKB);
		}
		CSRect.x = (short)DX;
		CSRect.y = 200;
		CSRect.w = 0x2d;
		CSRect.h = 9;
		Back__6Dialogiiii(&CSBack,DX,200,0x2d,9);
		iVar3 = iVar3 + 1;
		sprintf(acStack64,(char *)&PTR_DAT_8012b1b8,iVar3);
		R_00 = R_00 & 0xff;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,8,acStack64,JustCentre,&CSRect,R_00,R_00,R_00);
		DX = DX + 0x37;
	} while (iVar3 < 5);
	DX = 0x1c;
	yp = 0x24;
	iVar3 = 1;
	CSRect.x = 0x31;
	CSRect.y = 0x20;
	CSRect.w = 0xf8;
	CSRect.h = 0xa0;
	SetRGB__6DialogUcUcUc
						(&CSBack,(byte)((ulonglong)BACKR * 0xaaaaaaab >> 0x20) & 0xfe,
						 (byte)((ulonglong)BACKG * 0xaaaaaaab >> 0x20) & 0xfe,
						 (byte)((ulonglong)BACKB * 0xaaaaaaab >> 0x20) & 0xfe);
	SetBack__6Dialogi(&CSBack,0xc6);
	SetBorder__6Dialogi(&CSBack,0x28);
	local_2c = *(uint *)((int)&plr[myplr]._pISpells + 4) | *(uint *)((int)&plr[myplr]._pMemSpells + 4)
						 | *(uint *)((int)&plr[myplr]._pAblSpells + 4);
	local_30 = *(uint *)&plr[myplr]._pISpells | *(uint *)&plr[myplr]._pMemSpells |
						 *(uint *)&plr[myplr]._pAblSpells;
	do {
		Back__6Dialogiiii(&CSBack,0x31,DX + 6,0xf8,0x17);
		CSRect.x = 0x31;
		CSRect.w = 0xf8;
		CSRect.y = (short)(DX + 6);
		CSRect.h = 0x17;
		ii = PanBtnStr[sbooktab * 5 + iVar3 + 7];
		bright = 0x80;
		if (ii != 0xffffffff) {
			R_00 = ii - 1;
			if ((int)(R_00 * 0x4000000) < 0) {
				uVar2 = local_2c >> (R_00 & 0x1f);
			}
			else {
				uVar2 = local_30 >> (R_00 & 0x1f);
				if (R_00 * 0x4000000 != 0) {
					uVar2 = uVar2 | local_2c << (-R_00 & 0x1f);
				}
			}
			if ((uVar2 & 1) != 0) {
				t = GetSBookTrans__FiUc(ii,'\x01');
				SetSpellTrans__Fc(t);
				Trans = iVar3 != cur_spel + 1;
				if (Trans) {
					t = (&SpellITbl)[ii];
					w = 2;
				}
				else {
					bright = 0xff;
					t = (&SpellITbl)[ii];
					w = 1;
				}
				DrawSpellCel__FllUclUc(0x16,yp,Trans,(int)t,w);
				pszStr = GetStr__Fi((&spelldata)[ii].sNameText);
				PrintSBookStr__FiiUcPCcUc(0,9,'\0',pszStr,bright);
				t = GetSBookTrans__FiUc(ii,'\0');
				if (t == '\0') {
					pszStr = GetStr__Fi(STR_SKILL);
					strcpy(tempstr,pszStr);
				}
				else {
					if (t == '\x03') {
						pszStr = GetStr__Fi(STR_STAFF___I_CHARGES_);
						w = (int)plr[myplr].InvBody[4]._iCharges;
					}
					else {
						w = GetManaAmount__Fii(myplr,ii);
						w = w >> 6;
						GetDamageAmt__FiPiT1(ii,&local_38,&local_34);
						if (local_38 == -1) {
							pszStr = GetStr__Fi(STR_MANA___I___DAM__N_A);
							sprintf(tempstr,pszStr,w);
						}
						else {
							pszStr = GetStr__Fi(STR_MANA___I__DAM___I____I);
							sprintf(tempstr,pszStr,w,local_38,local_34);
						}
						if (ii == 0x24) {
							pszStr = GetStr__Fi(STR_MANA___I__DAM__1_3_TGT_HP);
							sprintf(tempstr,pszStr,w);
						}
						PrintSBookStr__FiiUcPCcUc(0,0x14,'\0',tempstr,bright);
						w = (int)*(char *)(myplr * 0x23a8 + -0x7ff2147f + ii) + (int)plr[myplr]._pISplLvlAdd;
						if (w < 0) {
							w = 0;
						}
						if (w == 0) {
							pszStr = GetStr__Fi(STR_SPELL_LEVEL_0___UNUSABLE);
							sprintf(tempstr,pszStr);
							goto LAB_80034890;
						}
						pszStr = GetStr__Fi(STR_SPELL_LEVEL__I);
					}
					sprintf(tempstr,pszStr,w);
				}
LAB_80034890:
				PrintSBookStr__FiiUcPCcUc(0x7c,9,'\0',tempstr,bright);
			}
		}
		DX = DX + 0x1d;
		iVar3 = iVar3 + 1;
		yp = yp + 0x1d;
		if (5 < iVar3) {
			DX = 0x26;
			iVar3 = 0;
			do {
				if (iVar3 == cur_spel) {
					R = (byte)(((uint)BACKR & 0x7f) << 1);
					G = (byte)(((uint)BACKG & 0x7f) << 1);
					B = (byte)(((uint)BACKB & 0x7f) << 1);
				}
				else {
					R = BACKR >> 1;
					G = BACKG >> 1;
					B = BACKB >> 1;
				}
				iVar3 = iVar3 + 1;
				SetRGB__6DialogUcUcUc(&CSBack,R,G,B);
				Back__6Dialogiiii(&CSBack,0x18,DX,0x10,0xf);
				DX = DX + 0x1d;
			} while (iVar3 < 5);
			SetBack__6Dialogi(&CSBack,0x1b);
			SetBorder__6Dialogi(&CSBack,0x1c);
			SetRGB__6DialogUcUcUc(&CSBack,BORDERR,BORDERG,BORDERB);
			Back__6Dialogiiii(&CSBack,0x10,0x18,0x120,0xc0);
			this = PAD_GetPad__FiUc(options_pad,'\0');
			DX = cur_spel;
			iVar3 = sbooktab;
			SetPadTick__4CPadUs(this,4);
			SetPadTickMask__4CPadUs(this,0xf);
			uVar1 = GetTick__C4CPad(this);
			if ((uVar1 & 1) != 0) {
				cur_spel = cur_spel + -1;
			}
			uVar1 = GetTick__C4CPad(this);
			if ((uVar1 & 2) != 0) {
				cur_spel = cur_spel + 1;
			}
			if (cur_spel < 0) {
				cur_spel = 0;
			}
			if (4 < cur_spel) {
				cur_spel = 4;
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
				sbooktab = 0;
			}
			if (4 < sbooktab) {
				sbooktab = 4;
			}
			if (iVar3 != sbooktab) {
				PlaySFX__Fi(IS_TITLEMOV);
			}
			if (DX != cur_spel) {
				PlaySFX__Fi(IS_TITLEMOV);
			}
			uVar1 = GetDown__C4CPad(this);
			if (((uVar1 & 0x200) != 0) && (sbookflag = '\0', optionsflag != (void *)0x0)) {
				cmenu = 1;
				GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
				GLUE_SetShowPanelFlag__Fb((void *)0x0);
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckSBook__Fv()
 // line 3027, offset 0x80034b90
	/* begin block 1 */
		// Start line: 3028
		// Start offset: 0x80034B90
		// Variables:
	// 		unsigned long tspls; // $a2
	// 		char st; // $t2
	/* end block 1 */
	// End offset: 0x80034DE4
	// End Line: 3064

	/* begin block 2 */
		// Start line: 6613
	/* end block 2 */
	// End Line: 6614

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckSBook__Fv(void)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	char cVar6;
	int iVar7;
	uint uVar8;
	
	RemoveTargetCursor__Fi(options_pad);
	iVar1 = options_pad;
	iVar7 = SpellPages[sbooktab * 5 + cur_spel];
	uVar5 = *(uint *)((int)&plr[options_pad]._pISpells + 4);
	uVar8 = *(uint *)((int)&plr[options_pad]._pAblSpells + 4);
	uVar4 = uVar5 | *(uint *)((int)&plr[options_pad]._pMemSpells + 4) | uVar8;
	cur_spel = iVar7;
	if (iVar7 != -1) {
		uVar3 = iVar7 - 1;
		if ((int)(uVar3 * 0x4000000) < 0) {
			uVar2 = uVar4 >> (uVar3 & 0x1f);
		}
		else {
			uVar2 = (*(uint *)&plr[options_pad]._pISpells | *(uint *)&plr[options_pad]._pMemSpells |
							*(uint *)&plr[options_pad]._pAblSpells) >> (uVar3 & 0x1f);
			if (uVar3 * 0x4000000 != 0) {
				uVar2 = uVar2 | uVar4 << (-uVar3 & 0x1f);
			}
		}
		cur_spel = iVar7;
		if ((uVar2 & 1) != 0) {
			if ((int)(uVar3 * 0x4000000) < 0) {
				uVar4 = uVar5 >> (uVar3 & 0x1f);
			}
			else {
				uVar4 = *(uint *)&plr[options_pad]._pISpells >> (uVar3 & 0x1f);
				if (uVar3 * 0x4000000 != 0) {
					uVar4 = uVar4 | uVar5 << (-uVar3 & 0x1f);
				}
			}
			cVar6 = '\x01';
			if ((uVar4 & 1) != 0) {
				cVar6 = '\x03';
			}
			uVar4 = 1 << (uVar3 & 0x1f);
			if (((*(uint *)&plr[options_pad]._pAblSpells & uVar4) != 0) ||
				 ((uVar8 & (int)uVar4 >> 0x1f) != 0)) {
				cVar6 = '\0';
			}
			cur_spel = iVar7;
			plr[options_pad]._pRSplType = cVar6;
			sbookflag = '\0';
			plr[iVar1]._pRSpell = iVar7;
			force_redraw = 0xff;
			if (optionsflag == (void *)0x0) {
				options_pad = -1;
			}
			else {
				ToggleOptions__Fv();
				PostGamePad__Fiiii(5,0,0,0);
				GLUE_ResumeGame__Fv();
				GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
				GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
				GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
			}
		}
		PlaySFX__Fi(IS_TITLSLCT);
	}
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ get_pieces_str__Fi(int nGold /*$a0*/)
 // line 3076, offset 0x80034df4
	/* begin block 1 */
		// Start line: 3077
		// Start offset: 0x80034DF4
	/* end block 1 */
	// End offset: 0x80034E18
	// End Line: 3079

	/* begin block 2 */
		// Start line: 6718
	/* end block 2 */
	// End Line: 6719

char * get_pieces_str__Fi(int nGold)

{
	char *pcVar1;
	text_strs StrId;
	
	if (nGold == 1) {
		StrId = STR_PIECE;
	}
	else {
		StrId = STR_PIECES;
	}
	pcVar1 = GetStr__Fi(StrId);
	return pcVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.fontkern()
 // line 3587, offset 0x80034e28
	/* begin block 1 */
		// Start line: 3588
		// Start offset: 0x80034E28
	/* end block 1 */
	// End offset: 0x80034E40
	// End Line: 3588

	/* begin block 2 */
		// Start line: 7740
	/* end block 2 */
	// End Line: 7741

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_fontkern(void)

{
	___6Dialog(&CSBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.fontkern()
 // line 3587, offset 0x80034e50
	/* begin block 1 */
		// Start line: 3588
		// Start offset: 0x80034E50
	/* end block 1 */
	// End offset: 0x80034E7C
	// End Line: 3588

	/* begin block 2 */
		// Start line: 7740
	/* end block 2 */
	// End Line: 7741

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_fontkern(void)

{
	SPLICONRIGHT = SPLICONNO * 9 + 0x80;
	__6Dialog(&CSBack);
	return;
}





