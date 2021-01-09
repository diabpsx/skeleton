#include "THISDUST.H"
#include "CREDITS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitCredits__Fv()
 // line 355, offset 0x8013d1b4
	/* begin block 1 */
		// Start line: 356
		// Start offset: 0x8013D1B4
	/* end block 1 */
	// End offset: 0x8013D230
	// End Line: 368

	/* begin block 2 */
		// Start line: 710
	/* end block 2 */
	// End Line: 711

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCredits__Fv(void)

{
	TextDat *NewDat;
	
	InCredits = 5;
	CreditSubTitleNo = -1;
	CreditTitleNo = -1;
	NewDat = GM_UseTexData__Fi(0xcb);
	SetTextDat__5CFontP7TextDat(&LargeFont,NewDat);
	Set__7FontTab(&LFont);
	DoCredits__Fv();
	ClearFont__5CFont(&LargeFont);
	NewDat = GM_UseTexData__Fi(0);
	SetTextDat__5CFontP7TextDat(&LargeFont,NewDat);
	Set__7FontTab(&LFont);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintCredits__Fiiiiii(int StrNo /*$a0*/, int Y /*stack -128*/, int CharFade /*stack -120*/, int RFlag /*stack -112*/, int GFlag /*stack 16*/, int BFlag /*stack 20*/)
 // line 429, offset 0x8013d248
	/* begin block 1 */
		// Start line: 430
		// Start offset: 0x8013D248
		// Variables:
	// 		int CharHeight; // $s2
	// 		int Loop; // $s0
	// 		int Width; // $s5
	// 		char *EndPtr; // stack offset -104
	// 		int X; // stack offset -96
	// 		int x0; // $t1
	// 		int x1; // $fp
	// 		int x2; // $s7
	// 		int x3; // $s6
	// 		int Fade; // $s1
	// 		struct POLY_FT4 *Ft4; // stack offset -136
	// 		int Col; // $a1
	// 		int DoneFlag; // stack offset -88
	// 		char *Str; // $s3
	/* end block 1 */
	// End offset: 0x8013DA44
	// End Line: 575

	/* begin block 2 */
		// Start line: 860
	/* end block 2 */
	// End Line: 861

/* WARNING: Could not reconcile some variable overlaps */

int PrintCredits__Fiiiiii(int StrNo,int Y,int CharFade,int RFlag,int GFlag,int BFlag)

{
	uchar uVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	byte bVar6;
	byte bVar7;
	char cVar8;
	ulong *puVar9;
	POLY_FT4 *pPVar10;
	int iVar11;
	uint uVar12;
	FRAME_HDR *pFVar13;
	int iVar14;
	undefined4 uVar15;
	undefined4 uVar16;
	byte bVar17;
	undefined4 uVar18;
	POLY_FT4 *pPVar19;
	POLY_FT4 *pPVar20;
	POLY_FT4 *pPVar21;
	POLY_FT4 *pPVar22;
	int iVar23;
	uint uVar24;
	uchar *puVar25;
	int iVar26;
	POLY_FT4 *apPStack136 [2];
	int local_80;
	uint local_78;
	int local_70;
	uchar *puStack104;
	int iStack96;
	int local_58;
	int iStack48;
	
	local_58 = 1;
	local_80 = Y;
	local_78 = CharFade;
	local_70 = RFlag;
	puVar25 = (uchar *)GetStr__Fi(StrNo);
	while (uVar1 = *puVar25, *puVar25 != '\0') {
		iVar26 = 0;
		puStack104 = puVar25;
		while ((uVar1 != '\0' && (*puStack104 != '|'))) {
			iVar11 = GetCharWidth__5CFontUc(&LargeFont,*puStack104);
			puStack104 = puStack104 + 1;
			uVar1 = *puStack104;
			iVar26 = iVar26 + iVar11;
		}
		iStack96 = (int)((0x140U - iVar26) + (0x140U - iVar26 >> 0x1f)) >> 1;
		if (puVar25 != puStack104) {
			do {
				local_78 = local_78 + 1;
				uVar24 = local_78;
				if (0x7f < (int)local_78) {
					uVar24 = 0x7f;
				}
				uVar12 = uVar24 - 1;
				if ((int)uVar24 < 0) {
					uVar24 = 0;
					uVar12 = 0xffffffff;
				}
				if (uVar12 < 0x7e) {
					local_58 = 0;
				}
				if (*puVar25 == ' ') {
					iVar26 = GetCharWidth__5CFontUc(&LargeFont,' ');
				}
				else {
					iVar26 = PrintChar__5CFontUsUsUcUcUcUc
														 (&LargeFont,(ushort)iStack96,(ushort)local_80,*puVar25,0x80,0x80,0x80);
					pPVar20 = CharFt4;
					CharFt4->code = CharFt4->code | 2;
					pPVar10 = CharFt4;
					pPVar20->tpage = pPVar20->tpage | 0x20;
					pPVar10->code = pPVar10->code & 0xfe;
					pFVar13 = GetFr__7TextDati(FeTData,CharFrm);
					pPVar20 = CharFt4;
					sVar2 = CharFt4->x0;
					iStack48 = (int)sVar2;
					sVar3 = CharFt4->x1;
					sVar4 = CharFt4->x2;
					sVar5 = CharFt4->x3;
					bVar17 = (byte)uVar24;
					bVar6 = (byte)GFlag;
					bVar7 = (byte)BFlag;
					if ((pFVar13->X & 0x2000000U) == 0) {
						CharFt4->x0 = sVar2 + (short)CreditsTable[0x7f - uVar24];
						pPVar20->x1 = sVar3 + (short)CreditsTable[0x83 - uVar24];
						pPVar20->x2 = sVar4 + (short)CreditsTable[0x7f - uVar24];
						iVar11 = CreditsTable[0x83 - uVar24];
						pPVar20->y2 = pPVar20->y0 + 2;
						pPVar20->v2 = pPVar20->v0 + '\x02';
						pPVar10 = CharFt4;
						pPVar20->x3 = sVar5 + (short)iVar11;
						pPVar20->y3 = pPVar20->y1 + 2;
						iVar23 = 1;
						pPVar10->v3 = pPVar10->v1 + '\x02';
						CharFt4->r0 = bVar17 & (byte)local_70;
						CharFt4->g0 = bVar17 & bVar6;
						CharFt4->b0 = bVar17 & bVar7;
						iVar14 = GetCharHeight__5CFontUc(&LargeFont,*puVar25);
						iVar11 = iStack48;
						if (1 < iVar14 + -1) {
							do {
								uVar24 = uVar24 + 1;
								if (0 < (int)(uVar24 - iVar23)) {
									if ((uVar24 & 0xffffff80) != 0) {
										uVar24 = 0x7f;
									}
									iStack48 = iVar11;
									PRIM_GetPrim__FPP8POLY_FT4(apPStack136);
									pPVar22 = (POLY_FT4 *)&CharFt4->x3;
									pPVar20 = CharFt4;
									pPVar10 = apPStack136[0];
									do {
										pPVar21 = pPVar10;
										pPVar19 = pPVar20;
										uVar15 = *(undefined4 *)&pPVar19->r0;
										uVar16 = *(undefined4 *)&pPVar19->x0;
										uVar18 = *(undefined4 *)&pPVar19->u0;
										pPVar21->tag = pPVar19->tag;
										*(undefined4 *)&pPVar21->r0 = uVar15;
										*(undefined4 *)&pPVar21->x0 = uVar16;
										*(undefined4 *)&pPVar21->u0 = uVar18;
										pPVar20 = (POLY_FT4 *)&pPVar19->x1;
										pPVar10 = (POLY_FT4 *)&pPVar21->x1;
									} while (pPVar20 != pPVar22);
									uVar15 = *(undefined4 *)&pPVar19->u1;
									((POLY_FT4 *)&pPVar21->x1)->tag = pPVar20->tag;
									*(undefined4 *)&pPVar21->u1 = uVar15;
									apPStack136[0]->x0 = (short)iStack48 + (short)CreditsTable[0x7f - uVar24];
									sVar2 = (short)iVar23;
									apPStack136[0]->y0 = apPStack136[0]->y0 + sVar2;
									iVar11 = CreditsTable[0x83 - uVar24];
									apPStack136[0]->y1 = apPStack136[0]->y1 + sVar2;
									apPStack136[0]->x1 = sVar3 + (short)iVar11;
									iVar11 = CreditsTable[0x7f - uVar24];
									apPStack136[0]->y2 = apPStack136[0]->y2 + sVar2;
									apPStack136[0]->x2 = sVar4 + (short)iVar11;
									iVar11 = CreditsTable[0x83 - uVar24];
									apPStack136[0]->y3 = apPStack136[0]->y3 + sVar2;
									cVar8 = (char)iVar23;
									apPStack136[0]->v0 = apPStack136[0]->v0 + cVar8;
									apPStack136[0]->x3 = sVar5 + (short)iVar11;
									apPStack136[0]->v1 = apPStack136[0]->v1 + cVar8;
									apPStack136[0]->v2 = apPStack136[0]->v2 + cVar8;
									iVar11 = uVar24 + iVar23 * -2;
									bVar17 = (byte)iVar11;
									apPStack136[0]->v3 = apPStack136[0]->v3 + cVar8;
									if (iVar11 < 0) {
										bVar17 = 0;
									}
									apPStack136[0]->r0 = bVar17 & (byte)local_70;
									apPStack136[0]->g0 = bVar17 & bVar6;
									apPStack136[0]->b0 = bVar17 & bVar7;
									puVar9 = ThisOt;
									apPStack136[0]->tag = apPStack136[0]->tag & 0xff000000 | ThisOt[100] & 0xffffff;
									puVar9[100] = puVar9[100] & 0xff000000 | (uint)apPStack136[0] & 0xffffff;
									iVar11 = iStack48;
								}
								iVar23 = iVar23 + 2;
							} while (iVar23 < iVar14 + -1);
						}
					}
					else {
						CharFt4->x0 = sVar2 + (short)CreditsTable[0x7f - uVar24];
						pPVar20->x1 = sVar3 + (short)CreditsTable[0x83 - uVar24];
						pPVar20->x2 = sVar4 + (short)CreditsTable[0x7f - uVar24];
						iVar11 = CreditsTable[0x83 - uVar24];
						pPVar20->y2 = pPVar20->y0 + 2;
						pPVar20->u2 = pPVar20->u0 + '\x02';
						pPVar10 = CharFt4;
						pPVar20->x3 = sVar5 + (short)iVar11;
						pPVar20->y3 = pPVar20->y1 + 2;
						iVar23 = 2;
						pPVar10->u3 = pPVar10->u1 + '\x02';
						CharFt4->r0 = bVar17 & (byte)local_70;
						CharFt4->g0 = bVar17 & bVar6;
						CharFt4->b0 = bVar17 & bVar7;
						iVar14 = GetCharHeight__5CFontUc(&LargeFont,*puVar25);
						iVar11 = iStack48;
						if (2 < iVar14 + -1) {
							do {
								uVar24 = uVar24 + 1;
								if (0 < (int)(uVar24 - iVar23)) {
									if ((uVar24 & 0xffffff80) != 0) {
										uVar24 = 0x7f;
									}
									iStack48 = iVar11;
									PRIM_GetPrim__FPP8POLY_FT4(apPStack136);
									pPVar22 = (POLY_FT4 *)&CharFt4->x3;
									pPVar20 = CharFt4;
									pPVar10 = apPStack136[0];
									do {
										pPVar21 = pPVar10;
										pPVar19 = pPVar20;
										uVar15 = *(undefined4 *)&pPVar19->r0;
										uVar16 = *(undefined4 *)&pPVar19->x0;
										uVar18 = *(undefined4 *)&pPVar19->u0;
										pPVar21->tag = pPVar19->tag;
										*(undefined4 *)&pPVar21->r0 = uVar15;
										*(undefined4 *)&pPVar21->x0 = uVar16;
										*(undefined4 *)&pPVar21->u0 = uVar18;
										pPVar20 = (POLY_FT4 *)&pPVar19->x1;
										pPVar10 = (POLY_FT4 *)&pPVar21->x1;
									} while (pPVar20 != pPVar22);
									uVar15 = *(undefined4 *)&pPVar19->u1;
									((POLY_FT4 *)&pPVar21->x1)->tag = pPVar20->tag;
									*(undefined4 *)&pPVar21->u1 = uVar15;
									apPStack136[0]->x0 = (short)iStack48 + (short)CreditsTable[0x7f - uVar24];
									sVar2 = (short)iVar23;
									apPStack136[0]->y0 = apPStack136[0]->y0 + sVar2;
									iVar11 = CreditsTable[0x83 - uVar24];
									apPStack136[0]->y1 = apPStack136[0]->y1 + sVar2;
									apPStack136[0]->x1 = sVar3 + (short)iVar11;
									iVar11 = CreditsTable[0x7f - uVar24];
									apPStack136[0]->y2 = apPStack136[0]->y2 + sVar2;
									apPStack136[0]->x2 = sVar4 + (short)iVar11;
									iVar11 = CreditsTable[0x83 - uVar24];
									apPStack136[0]->y3 = apPStack136[0]->y3 + sVar2;
									cVar8 = (char)iVar23;
									apPStack136[0]->u0 = apPStack136[0]->u0 + cVar8;
									apPStack136[0]->x3 = sVar5 + (short)iVar11;
									apPStack136[0]->u1 = apPStack136[0]->u1 + cVar8;
									apPStack136[0]->u2 = apPStack136[0]->u2 + cVar8;
									bVar17 = (byte)(uVar24 - iVar23);
									apPStack136[0]->u3 = apPStack136[0]->u3 + cVar8;
									if ((int)(uVar24 - iVar23) < 0) {
										bVar17 = 0;
									}
									apPStack136[0]->r0 = bVar17 & (byte)local_70;
									apPStack136[0]->g0 = bVar17 & bVar6;
									apPStack136[0]->b0 = bVar17 & bVar7;
									puVar9 = ThisOt;
									apPStack136[0]->tag = apPStack136[0]->tag & 0xff000000 | ThisOt[100] & 0xffffff;
									puVar9[100] = puVar9[100] & 0xff000000 | (uint)apPStack136[0] & 0xffffff;
									iVar11 = iStack48;
								}
								iVar23 = iVar23 + 2;
							} while (iVar23 < iVar14 + -1);
						}
					}
				}
				iStack96 = iStack96 + iVar26;
				puVar25 = puVar25 + 1;
			} while (puVar25 != puStack104);
		}
		if (*puStack104 == '|') {
			puVar25 = puVar25 + 1;
		}
		local_80 = local_80 + 0x14;
	}
	return local_58;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCreditsTitle__Fiiiii(int TitleNo /*$a0*/, int TitleFade /*$v1*/, int TitleMode /*$a2*/, int NextTitleNo /*$a3*/, int Y /*stack 16*/)
 // line 580, offset 0x8013da78
	/* begin block 1 */
		// Start line: 581
		// Start offset: 0x8013DA78
	/* end block 1 */
	// End offset: 0x8013DB20
	// End Line: 599

	/* begin block 2 */
		// Start line: 1237
	/* end block 2 */
	// End Line: 1238

void DrawCreditsTitle__Fiiiii(int TitleNo,int TitleFade,int TitleMode,int NextTitleNo,int Y)

{
	int iVar1;
	
	if (((TitleMode == 0) && (TitleNo == CreditTitleNo)) ||
		 ((TitleMode == 2 && (NextTitleNo == CreditTitleNo)))) {
		TitleMode = 1;
		TitleFade = 0x7f;
	}
	iVar1 = TitleNo;
	if (TitleMode != 1) {
		if (TitleMode < 2) {
			iVar1 = CreditTitleNo;
			if (TitleMode != 0) {
				return;
			}
		}
		else {
			TitleNo = CreditTitleNo;
			iVar1 = CreditTitleNo;
			if (TitleMode != 2) {
				return;
			}
		}
	}
	CreditTitleNo = iVar1;
	PrintCredits__Fiiiiii(TitleNo,Y,TitleFade,0xff,0xff,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCreditsSubTitle__Fiiiii(int SubTitleNo /*$a0*/, int SubTitleFade /*$v1*/, int SubTitleMode /*$a2*/, int NextSubTitleNo /*$a3*/, int Y /*stack 16*/)
 // line 605, offset 0x8013db30
	/* begin block 1 */
		// Start line: 606
		// Start offset: 0x8013DB30
	/* end block 1 */
	// End offset: 0x8013DBD8
	// End Line: 624

	/* begin block 2 */
		// Start line: 1287
	/* end block 2 */
	// End Line: 1288

void DrawCreditsSubTitle__Fiiiii
							 (int SubTitleNo,int SubTitleFade,int SubTitleMode,int NextSubTitleNo,int Y)

{
	int iVar1;
	
	if (((SubTitleMode == 0) && (SubTitleNo == CreditSubTitleNo)) ||
		 ((SubTitleMode == 2 && (NextSubTitleNo == CreditSubTitleNo)))) {
		SubTitleMode = 1;
		SubTitleFade = 0x7f;
	}
	iVar1 = SubTitleNo;
	if (SubTitleMode != 1) {
		if (SubTitleMode < 2) {
			iVar1 = CreditSubTitleNo;
			if (SubTitleMode != 0) {
				return;
			}
		}
		else {
			SubTitleNo = CreditSubTitleNo;
			iVar1 = CreditSubTitleNo;
			if (SubTitleMode != 2) {
				return;
			}
		}
	}
	CreditSubTitleNo = iVar1;
	if (SubTitleNo != -1) {
		PrintCredits__Fiiiiii(SubTitleNo,Y,SubTitleFade,0xff,0xff,0xff);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CredCountNL__Fi(int Str /*$a0*/)
 // line 629, offset 0x8013dbe8
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x8013DBE8
		// Variables:
	// 		int Count; // $s0
	// 		char *StrPtr; // $a0
	/* end block 1 */
	// End offset: 0x8013DC40
	// End Line: 640

	/* begin block 2 */
		// Start line: 1335
	/* end block 2 */
	// End Line: 1336

int CredCountNL__Fi(int Str)

{
	char cVar1;
	char cVar2;
	char *pcVar3;
	int iVar4;
	
	iVar4 = 0;
	pcVar3 = GetStr__Fi(Str);
	cVar1 = *pcVar3;
	cVar2 = *pcVar3;
	while (cVar1 != '\0') {
		if (cVar2 == '|') {
			iVar4 = iVar4 + 1;
		}
		pcVar3 = pcVar3 + 1;
		cVar1 = *pcVar3;
		cVar2 = *pcVar3;
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoCredits__Fv()
 // line 647, offset 0x8013dc54
	/* begin block 1 */
		// Start line: 648
		// Start offset: 0x8013DC54
		// Variables:
	// 		struct CScreen CreditsBack; // stack offset -168
	// 		int Y; // $t0
	// 		int Fade; // $s3
	// 		int Mode; // $s4
	// 		unsigned short TextNo; // $s5
	// 		unsigned long CreditsCount; // $fp

		/* begin block 1.1 */
			// Start line: 673
			// Start offset: 0x8013DD28
			// Variables:
		// 		int YOfs; // $s1

			/* begin block 1.1.1 */
				// Start line: 684
				// Start offset: 0x8013DE18

				/* begin block 1.1.1.1 */
					// Start line: 687
					// Start offset: 0x8013DE4C

					/* begin block 1.1.1.1.1 */
						// Start line: 695
						// Start offset: 0x8013DE84
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013DE84
					// End Line: 695

					/* begin block 1.1.1.1.2 */
						// Start line: 701
						// Start offset: 0x8013DEC8
					/* end block 1.1.1.1.2 */
					// End offset: 0x8013DEC8
					// End Line: 701

					/* begin block 1.1.1.1.3 */
						// Start line: 716
						// Start offset: 0x8013DF1C
					/* end block 1.1.1.1.3 */
					// End offset: 0x8013DF1C
					// End Line: 716
				/* end block 1.1.1.1 */
				// End offset: 0x8013DF1C
				// End Line: 716
			/* end block 1.1.1 */
			// End offset: 0x8013DF1C
			// End Line: 716
		/* end block 1.1 */
		// End offset: 0x8013DFE0
		// End Line: 740
	/* end block 1 */
	// End offset: 0x8013E008
	// End Line: 746

	/* begin block 2 */
		// Start line: 1371
	/* end block 2 */
	// End Line: 1372

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoCredits__Fv(void)

{
	void *pvVar1;
	int iVar2;
	int Y;
	ulong uVar3;
	undefined *puVar4;
	uint uVar5;
	int TitleFade;
	uint TitleMode;
	ushort uVar6;
	ulong uVar7;
	CScreen CStack168;
	
	__7CScreen(&CStack168);
	TitleFade = 0;
	uVar7 = 0;
	TitleMode = 0;
	uVar6 = 0;
	CreditSubTitleNo = -1;
	CreditTitleNo = -1;
	InCredits = 5;
	CDWAIT = &DAT_00000001;
	Load__7CScreeniii(&CStack168,0xe,0xb,0);
	PrintSelectBack__FUs(0x4000);
	CDWAIT = (void *)0x0;
	PaletteFadeIn__Fi(8);
	while( true ) {
		pvVar1 = GetFadeState__Fv();
		if (pvVar1 == (void *)0x0) break;
		Display__7CScreeniiii(&CStack168,0xe,0xb,0,0);
		PrintSelectBack__FUs(0x4000);
		TSK_Sleep(1);
	}
	while (InCredits != 0) {
		ReadPad__Fi(-1);
		uVar5 = (uint)uVar6;
		DrawCreditsTitle__Fiiiii
							((&CreditsText)[uVar5].Title,TitleFade,TitleMode,(&CreditsText)[uVar5 + 1].Title,0x28)
		;
		iVar2 = CredCountNL__Fi((&CreditsText)[uVar5].Title);
		DrawCreditsSubTitle__Fiiiii
							((&CreditsText)[uVar5].SubTitle,TitleFade,TitleMode,(&CreditsText)[uVar5 + 1].SubTitle
							 ,iVar2 * 0x14 + 0x44);
		Y = CredCountNL__Fi((&CreditsText)[uVar5].SubTitle);
		Y = iVar2 * 0x14 + Y * 0x14;
		iVar2 = CredCountNL__Fi((&CreditsText)[uVar5].Title);
		if (iVar2 == 0) {
			Y = 0;
		}
		Y = Y + 0x6e;
		if (TitleMode == 1) {
			PrintCredits__Fiiiiii((&CreditsText)[uVar5].Text,Y,TitleFade,0xff,0xff,0xff);
			uVar3 = VID_GetTick__Fv();
			if (0x19 < uVar3 - uVar7) {
				TitleMode = 2;
				TitleFade = TitleFade + -1;
			}
		}
		else {
			if (TitleMode < 2) {
				if (TitleMode == 0) {
					iVar2 = PrintCredits__Fiiiiii((&CreditsText)[uVar5].Text,Y,TitleFade,0xff,0xff,0xff);
					if (iVar2 == 0) {
						TitleFade = TitleFade + 1;
					}
					else {
						TitleMode = 1;
						uVar7 = VID_GetTick__Fv();
					}
				}
			}
			else {
				if (TitleMode == 2) {
					iVar2 = PrintCredits__Fiiiiii((&CreditsText)[uVar5].Text,Y,TitleFade,0xff,0xff,0xff);
					if (iVar2 == 0) {
						TitleFade = TitleFade + -1;
					}
					else {
						TitleMode = 0;
						if (InCredits != 2) {
							uVar6 = uVar6 + 1;
						}
						TitleFade = 0;
					}
				}
			}
		}
		Display__7CScreeniiii(&CStack168,0xe,0xb,0,0);
		if (3 < InCredits) {
			PrintSelectBack__FUs(0x4000);
		}
		TSK_Sleep(1);
		if (InCredits == 2) {
			InCredits = 3;
			PaletteFadeOut__Fi(8);
		}
		if ((InCredits == 3) && (puVar4 = (undefined *)GetFadeState__Fv(), puVar4 != &DAT_00000001)) {
			InCredits = 1;
		}
		if (((DavesPad & 0x100U) != 0) && (InCredits == 5)) {
			PlaySFX__Fi(0x33);
			InCredits = 2;
		}
		if (0x38 < uVar6) {
			InCredits = 2;
			uVar6 = 0;
		}
	}
	LANG_ReloadMainTXT__Fv();
	Unload__7CScreen(&CStack168);
	___7CScreen(&CStack168,2);
	return;
}





