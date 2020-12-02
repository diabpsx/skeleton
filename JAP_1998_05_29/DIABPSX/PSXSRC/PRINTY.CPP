#include "THISDUST.H"
#include "PRINTY.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Set__7FontTab(struct FontTab *this /*$s1*/)
 // line 102, offset 0x80089c60
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x80089C60

		/* begin block 1.1 */
			// Start line: 103
			// Start offset: 0x80089C60
			// Variables:
		// 		int Loop; // $s0
		/* end block 1.1 */
		// End offset: 0x80089C98
		// End Line: 105

		/* begin block 1.2 */
			// Start line: 105
			// Start offset: 0x80089C98
			// Variables:
		// 		int f; // $s0
		// 		int Loop; // $s0
		/* end block 1.2 */
		// End offset: 0x80089CE4
		// End Line: 108
	/* end block 1 */
	// End offset: 0x80089CE4
	// End Line: 108

	/* begin block 2 */
		// Start line: 204
	/* end block 2 */
	// End Line: 205

void Set__7FontTab(FontTab *this)

{
	byte *pbVar1;
	int iVar2;
	int ch;
	
	ch = 0;
	do {
		iVar2 = ch + 1;
		SetChar__5CFontiUs(this->Fnt,ch,0x3039);
		ch = iVar2;
	} while (iVar2 < 0x100);
	ch = 0;
	if (0 < this->NumOfItems) {
		iVar2 = 0;
		do {
			pbVar1 = &this->Items->ch + iVar2;
			SetChar__5CFontiUs(this->Fnt,(uint)*pbVar1,*(short *)(pbVar1 + 2) + (short)this->FrameBase);
			ch = ch + 1;
			iVar2 = ch * 4;
		} while (ch < this->NumOfItems);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrinty__Fv()
 // line 581, offset 0x80089cfc
	/* begin block 1 */
		// Start line: 582
		// Start offset: 0x80089CFC
		// Variables:
	// 		int otpos; // $s0
	/* end block 1 */
	// End offset: 0x80089D90
	// End Line: 601

	/* begin block 2 */
		// Start line: 1163
	/* end block 2 */
	// End Line: 1164

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPrinty__Fv(void)

{
	int OT;
	
	Init__5CFont(&LargeFont);
	Init__5CFont(&MediumFont);
	LargeFont.FontHeight = '\r';
	MediumFont.FontHeight = '\r';
	Set__7FontTab(&LFont);
	Set__7FontTab(&MFont);
	OT = GetOverlayOtBase__7CBlocks();
	SetOTpos__5CFonti(&LargeFont,OT);
	SetOTpos__5CFonti(&MediumFont,OT);
	ClearFont__5CFont(&LargeFont);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTextDat__5CFontP7TextDat(struct CFont *this /*$a0*/, struct TextDat *NewDat /*$a1*/)
 // line 605, offset 0x80089dac
	/* begin block 1 */
		// Start line: 606
		// Start offset: 0x80089DAC
	/* end block 1 */
	// End offset: 0x80089DAC
	// End Line: 607

	/* begin block 2 */
		// Start line: 1223
	/* end block 2 */
	// End Line: 1224

void SetTextDat__5CFontP7TextDat(CFont *this,TextDat *NewDat)

{
	this->ThisDat = NewDat;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ KanjiPrintChar__5CFontUsUsUsUcUcUc(struct CFont *this /*$s5*/, unsigned short Cx /*$a0*/, unsigned short Cy /*$a2*/, unsigned short kan /*$a3*/, int R /*stack 16*/, int G /*stack 20*/, int B /*stack 24*/)
 // line 617, offset 0x80089db4
	/* begin block 1 */
		// Start line: 618
		// Start offset: 0x80089DB4
	/* end block 1 */
	// End offset: 0x80089EC4
	// End Line: 660

	/* begin block 2 */
		// Start line: 1246
	/* end block 2 */
	// End Line: 1247

int KanjiPrintChar__5CFontUsUsUsUcUcUc(CFont *this,ushort Cx,ushort Cy,ushort kan,int R,int G,int B)

{
	ulong *puVar1;
	POLY_FT4 *pPVar2;
	POLY_FT4 *pPVar3;
	
	pPVar3 = GetKanjiFrm__FUs(kan);
	CharFt4 = pPVar3;
	pPVar3->y0 = Cy - 10;
	pPVar3->y1 = Cy - 10;
	pPVar3->r0 = (uchar)R;
	pPVar2 = CharFt4;
	pPVar3->x0 = Cx;
	pPVar3->x1 = Cx + 0xc;
	pPVar3->x2 = Cx;
	pPVar3->y2 = Cy + 2;
	pPVar3->x3 = Cx + 0xc;
	pPVar3->y3 = Cy + 2;
	pPVar2->g0 = (uchar)G;
	CharFt4->b0 = (uchar)B;
	CharFt4->code = CharFt4->code & 0xfd;
	CharFt4->code = CharFt4->code & 0xfe;
	pPVar2 = CharFt4;
	puVar1 = ThisOt;
	CharFt4->tag = CharFt4->tag & 0xff000000 | ThisOt[this->PrintyOTpos + 1] & 0xffffff;
	(puVar1 + this->PrintyOTpos)[1] =
			 (puVar1 + this->PrintyOTpos)[1] & 0xff000000 | (uint)pPVar2 & 0xffffff;
	return 0xc;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this /*$s1*/, unsigned short Cx /*$s3*/, unsigned short Cy /*$s4*/, unsigned char C /*$s2*/, int R /*stack 16*/, int G /*stack 20*/, int B /*stack 24*/)
 // line 667, offset 0x80089eec
	/* begin block 1 */
		// Start line: 668
		// Start offset: 0x80089EEC
		// Variables:
	// 		int Cw; // $s2
	/* end block 1 */
	// End offset: 0x8008A060
	// End Line: 741

	/* begin block 2 */
		// Start line: 1391
	/* end block 2 */
	// End Line: 1392

int PrintChar__5CFontUsUsUcUcUcUc(CFont *this,ushort Cx,ushort Cy,uchar C,int R,int G,int B)

{
	undefined *puVar1;
	int iVar2;
	
	if ((C == -1) ||
		 ((puVar1 = (undefined *)IsDefined__5CFontUc(this,C), puVar1 != &DAT_00000001 && (C != '\n'))))
	{
		iVar2 = 0;
	}
	else {
		iVar2 = GetCharWidth__5CFontUc(this,C);
		CharFrm = GetCharFrameNum__5CFontUc(this,C);
		if ((C != ' ') && (0 < iVar2)) {
			CharFt4 = PrintFt4__7TextDatiiiiii
													(this->ThisDat,CharFrm,(uint)Cx,(uint)Cy,0,this->PrintyOTpos + 1,0);
			if ((buttoncol == (void *)0x0) && (CharFrm - 0x73U < 8)) {
				CharFt4->r0 = -0x80;
				CharFt4->g0 = -0x80;
				CharFt4->b0 = -0x80;
			}
			else {
				CharFt4->r0 = (uchar)R;
				CharFt4->g0 = (uchar)G;
				CharFt4->b0 = (uchar)B;
			}
			CharFt4->code = CharFt4->code & 0xfd;
			CharFt4->code = CharFt4->code & 0xfe;
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this /*$s3*/, int X /*stack -168*/, int Y /*$s6*/, char *Str /*$s2*/, enum TXT_JUST Justify /*stack 16*/, struct RECT *TextWindow /*stack 20*/, int R /*stack 24*/, int G /*stack 28*/, int B /*stack 32*/)
 // line 746, offset 0x8008a090
	/* begin block 1 */
		// Start line: 747
		// Start offset: 0x8008A090
		// Variables:
	// 		int Cx; // $s4
	// 		int Cy; // $s6
	// 		int WrapCount; // stack offset -144
	// 		char *EndPtr; // $s1
	// 		char *SpacePtr; // $s5
	// 		int CharW; // $v1
	// 		int SpaceW; // $s0
	// 		int _WindowW; // stack offset -136
	// 		int WindowW; // $s7
	// 		int WindowH; // stack offset -128
	// 		int WindowX; // stack offset -120
	// 		int WindowY; // stack offset -112
	// 		struct RECT ClipRect; // stack offset -176
	// 		unsigned short kan; // $v0
	// 		char *OrigStr; // stack offset -104

		/* begin block 1.1 */
			// Start line: 802
			// Start offset: 0x8008A1A8

			/* begin block 1.1.1 */
				// Start line: 810
				// Start offset: 0x8008A1D4
				// Variables:
			// 		unsigned char c; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8008A254
			// End Line: 829

			/* begin block 1.1.2 */
				// Start line: 846
				// Start offset: 0x8008A2A4

				/* begin block 1.1.2.1 */
					// Start line: 847
					// Start offset: 0x8008A2B8

					/* begin block 1.1.2.1.1 */
						// Start line: 848
						// Start offset: 0x8008A2B8

						/* begin block 1.1.2.1.1.1 */
							// Start line: 849
							// Start offset: 0x8008A2C0
							// Variables:
						// 		char c; // $s0
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8008A33C
						// End Line: 872
					/* end block 1.1.2.1.1 */
					// End offset: 0x8008A378
					// End Line: 887
				/* end block 1.1.2.1 */
				// End offset: 0x8008A378
				// End Line: 887
			/* end block 1.1.2 */
			// End offset: 0x8008A378
			// End Line: 887

			/* begin block 1.1.3 */
				// Start line: 893
				// Start offset: 0x8008A378

				/* begin block 1.1.3.1 */
					// Start line: 894
					// Start offset: 0x8008A3B8

					/* begin block 1.1.3.1.1 */
						// Start line: 900
						// Start offset: 0x8008A3D8
						// Variables:
					// 		char c; // $t0
					/* end block 1.1.3.1.1 */
					// End offset: 0x8008A43C
					// End Line: 914
				/* end block 1.1.3.1 */
				// End offset: 0x8008A618
				// End Line: 971
			/* end block 1.1.3 */
			// End offset: 0x8008A618
			// End Line: 971
		/* end block 1.1 */
		// End offset: 0x8008A65C
		// End Line: 977
	/* end block 1 */
	// End offset: 0x8008A694
	// End Line: 985

	/* begin block 2 */
		// Start line: 1559
	/* end block 2 */
	// End Line: 1560

/* WARNING: Could not reconcile some variable overlaps */

int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(CFont *this,int X,int Y,char *Str,TXT_JUST Justify,RECT *TextWindow,int R,int G,int B
							)

{
	byte ch;
	ushort Cy;
	undefined *puVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	byte *pbVar5;
	byte *pbVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	int iVar10;
	uint B_00;
	RECT local_b0;
	int local_a8;
	byte local_a0;
	byte local_98;
	int local_90;
	int local_88;
	int local_80;
	int local_78;
	int local_70;
	byte *local_68;
	uint local_48;
	uint local_40;
	
	iVar7 = 0;
	local_a0 = (byte)R;
	local_a8 = X;
	local_98 = (byte)G;
	PRIM_FullScreen__Fi(this->PrintyOTpos + 1);
	local_98 = (byte)G - (local_98 >> 3);
	this->MinX = 0x3039;
	this->MaxX = 0;
	if (TextWindow == (RECT *)0x0) {
		iVar9 = 0x140;
		local_80 = 0x100;
		local_78 = 0;
		local_70 = 0;
	}
	else {
		local_80 = (int)TextWindow->h;
		iVar9 = (int)TextWindow->w;
		local_78 = (int)TextWindow->x;
		local_70 = (int)TextWindow->y;
	}
	Y = Y + local_70;
	local_88 = iVar9;
	while (puVar1 = (undefined *)IsKanjiLoaded__Fv(), puVar1 != &DAT_00000001) {
		TSK_Sleep(1);
	}
	local_48 = (uint)local_a0;
	local_40 = (uint)local_98;
	B_00 = B - ((B & 0xffU) >> 2) & 0xff;
	local_90 = 0;
	local_68 = (byte *)Str;
	do {
		iVar10 = local_88;
		if (*Str == 0) {
			local_b0.x = (short)local_78;
			local_b0.w = (short)iVar9;
			local_b0.y = (short)local_70;
			local_b0.h = (short)local_80;
			PRIM_Clip__FP4RECTi(&local_b0,this->PrintyOTpos + 1);
			return local_90;
		}
		pbVar8 = (byte *)0x0;
		iVar9 = 0;
		local_90 = local_90 + 1;
		this->Width = 0;
		pbVar6 = (byte *)Str;
		while (this->Width < iVar10) {
			uVar2 = SEXT14((char)*pbVar6);
			if (uVar2 == 0) goto LAB_8008a26c;
			uVar3 = uVar2 & 0xff;
			if (uVar2 == 10) break;
			if (((uVar3 == 0x20) || (uVar3 == 0x2d)) || (uVar3 == 0xff)) {
				iVar9 = this->Width;
				pbVar8 = pbVar6;
			}
			iVar4 = 0xc;
			if ((uVar2 & 0x80) == 0) {
				iVar4 = GetCharWidth__5CFontUc(this,*pbVar6);
				pbVar5 = pbVar6;
			}
			else {
				iVar9 = this->Width;
				pbVar5 = pbVar6 + 1;
				pbVar8 = pbVar6;
			}
			pbVar6 = pbVar5 + 1;
			this->Width = this->Width + iVar4;
		}
		uVar2 = SEXT14((char)*pbVar6);
LAB_8008a26c:
		if (uVar2 != 0x20) {
			if ((int)uVar2 < 0x21) {
				if (uVar2 != 0) {
					if (uVar2 != 10) goto LAB_8008a29c;
					pbVar6 = pbVar6 + 1;
				}
			}
			else {
LAB_8008a29c:
				this->Width = iVar10 + 1;
				iVar9 = iVar9 + 1;
			}
		}
		if (iVar10 < this->Width) {
			if (pbVar8 == (byte *)0x0) {
				if ((*pbVar6 != 0) && (*pbVar6 != 0x20)) {
					while( true ) {
						ch = *pbVar6;
						if ((int)(char)ch == 0) break;
						if (((int)(char)ch & 0x80U) == 0) {
							iVar9 = GetCharWidth__5CFontUc(this,ch);
							this->Width = this->Width + iVar9;
						}
						else {
							pbVar6 = pbVar6 + 1;
							this->Width = this->Width + 0xc;
						}
						pbVar6 = pbVar6 + 1;
						if ((ch == 0) || (ch == 0x20)) break;
					}
				}
				iVar10 = this->Width;
			}
			else {
				if (local_68 == pbVar8) {
					DBG_Error((char *)0x0,"psxsrc/PRINTY.CPP",0x370);
				}
				else {
					this->Width = iVar9;
					pbVar6 = pbVar8;
				}
			}
		}
		Cy = (ushort)Y;
		if (Justify == JustCentre) {
			uVar2 = iVar10 - this->Width;
			iVar7 = ((int)(uVar2 + (uVar2 >> 0x1f)) >> 1) + local_78;
			if (iVar7 < this->MinX) {
				this->MinX = iVar7;
			}
			while ((byte *)Str != pbVar6) {
				ch = *Str;
				if (((int)(char)ch & 0x80U) == 0) {
					if ((int)(char)ch == 0) {
						Str = (char *)((byte *)Str + 1);
					}
					else {
						Str = (char *)((byte *)Str + 1);
						iVar9 = PrintChar__5CFontUsUsUcUcUcUc
															(this,(ushort)iVar7,Cy + 1,ch,local_48,local_40,B_00);
						iVar7 = iVar7 + iVar9;
					}
				}
				else {
					pbVar8 = (byte *)Str + 1;
					Str = (char *)((byte *)Str + 2);
					iVar9 = KanjiPrintChar__5CFontUsUsUsUcUcUc
														(this,(ushort)iVar7,Cy,CONCAT11(ch,*pbVar8),local_48,local_40,B_00);
					iVar7 = iVar7 + iVar9;
				}
			}
		}
		else {
			if ((int)Justify < 2) {
				if (Justify == JustLeft) {
					iVar7 = local_78 + local_a8;
					if (iVar7 < this->MinX) {
						this->MinX = iVar7;
					}
					while ((byte *)Str != pbVar6) {
						ch = *Str;
						pbVar8 = (byte *)Str + 1;
						if ((int)((uint)ch << 0x18) < 0) {
							iVar9 = KanjiPrintChar__5CFontUsUsUsUcUcUc
																(this,(ushort)iVar7,Cy,CONCAT11(ch,*pbVar8),local_48,local_40,B_00);
							iVar7 = iVar7 + iVar9;
							Str = (char *)((byte *)Str + 2);
						}
						else {
							Str = (char *)pbVar8;
							if ((int)((uint)ch << 0x18) >> 0x18 != 0) {
								iVar9 = PrintChar__5CFontUsUsUcUcUcUc
																	(this,(ushort)iVar7,Cy + 1,ch,local_48,local_40,B_00);
								iVar7 = iVar7 + iVar9;
								Str = (char *)pbVar8;
							}
						}
					}
				}
			}
			else {
				if (Justify == JustRight) {
					iVar7 = (iVar10 - this->Width) + local_78;
					if (iVar7 < this->MinX) {
						this->MinX = iVar7;
					}
					while ((byte *)Str != pbVar6) {
						ch = *Str;
						if (((int)(char)ch & 0x80U) == 0) {
							if ((int)(char)ch == 0) {
								Str = (char *)((byte *)Str + 1);
							}
							else {
								Str = (char *)((byte *)Str + 1);
								iVar9 = PrintChar__5CFontUsUsUcUcUcUc
																	(this,(ushort)iVar7,Cy + 1,ch,local_48,local_40,B_00);
								iVar7 = iVar7 + iVar9;
							}
						}
						else {
							pbVar8 = (byte *)Str + 1;
							Str = (char *)((byte *)Str + 2);
							iVar9 = KanjiPrintChar__5CFontUsUsUsUcUcUc
																(this,(ushort)iVar7,Cy,CONCAT11(ch,*pbVar8),local_48,local_40,B_00);
							iVar7 = iVar7 + iVar9;
						}
					}
				}
			}
		}
		if (this->MaxX < iVar7) {
			this->MaxX = iVar7;
		}
		ch = *Str;
		Y = Y + (uint)this->FontHeight;
		while (iVar9 = iVar10, ch == 0x20) {
			Str = (char *)((byte *)Str + 1);
			ch = *Str;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetWrap__5CFontPcP4RECT(struct CFont *this /*$s2*/, char *Str /*$a1*/, struct RECT *TextWindow /*$a2*/)
 // line 989, offset 0x8008a6c8
	/* begin block 1 */
		// Start line: 990
		// Start offset: 0x8008A6C8
		// Variables:
	// 		int WrapCount; // $s6
	// 		char *EndPtr; // $s0
	// 		char *SpacePtr; // $s3
	// 		char *LastSpacePtr; // $s7
	// 		int CharW; // $v1
	// 		int SpaceW; // $s1
	// 		int WindowW; // $s4
	// 		int _WindowW; // $fp

		/* begin block 1.1 */
			// Start line: 1006
			// Start offset: 0x8008A714

			/* begin block 1.1.1 */
				// Start line: 1014
				// Start offset: 0x8008A73C
				// Variables:
			// 		unsigned char c; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8008A7B8
			// End Line: 1035

			/* begin block 1.1.2 */
				// Start line: 1052
				// Start offset: 0x8008A808

				/* begin block 1.1.2.1 */
					// Start line: 1053
					// Start offset: 0x8008A81C

					/* begin block 1.1.2.1.1 */
						// Start line: 1054
						// Start offset: 0x8008A81C

						/* begin block 1.1.2.1.1.1 */
							// Start line: 1055
							// Start offset: 0x8008A824
							// Variables:
						// 		char c; // $s1
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8008A8A0
						// End Line: 1078
					/* end block 1.1.2.1.1 */
					// End offset: 0x8008A8D0
					// End Line: 1092
				/* end block 1.1.2.1 */
				// End offset: 0x8008A8D0
				// End Line: 1092
			/* end block 1.1.2 */
			// End offset: 0x8008A8D0
			// End Line: 1092
		/* end block 1.1 */
		// End offset: 0x8008A8F8
		// End Line: 1099
	/* end block 1 */
	// End offset: 0x8008A904
	// End Line: 1102

	/* begin block 2 */
		// Start line: 2105
	/* end block 2 */
	// End Line: 2106

int GetWrap__5CFontPcP4RECT(CFont *this,char *Str,RECT *TextWindow)

{
	uchar ch;
	uint uVar1;
	uint uVar2;
	int iVar3;
	uchar *puVar4;
	int iVar5;
	uchar *puVar6;
	int iVar7;
	int iVar8;
	
	iVar7 = 0x140;
	if (TextWindow != (RECT *)0x0) {
		iVar7 = (int)TextWindow->w;
	}
	iVar8 = 0;
	do {
		ch = *Str;
		do {
			if (ch == '\0') {
				return iVar8;
			}
			puVar6 = (uchar *)0x0;
			iVar8 = iVar8 + 1;
			this->Width = 0;
			iVar5 = 0;
			while (this->Width < iVar7) {
				uVar1 = SEXT14(*Str);
				if (uVar1 == 0) goto code_r0x8008a7d4;
				uVar2 = uVar1 & 0xff;
				if (uVar1 == 10) break;
				if (((uVar2 == 0x20) || (uVar2 == 0x2d)) || (uVar2 == 0xff)) {
					iVar5 = this->Width;
					puVar6 = (uchar *)Str;
				}
				iVar3 = 0xc;
				if ((uVar1 & 0x80) == 0) {
					iVar3 = GetCharWidth__5CFontUc(this,*Str);
					puVar4 = (uchar *)Str;
				}
				else {
					iVar5 = this->Width;
					puVar4 = (uchar *)Str + 1;
					puVar6 = (uchar *)Str;
				}
				Str = (char *)(puVar4 + 1);
				this->Width = this->Width + iVar3;
			}
			uVar1 = SEXT14(*Str);
code_r0x8008a7d4:
			if (uVar1 != 0x20) {
				if ((int)uVar1 < 0x21) {
					if (uVar1 != 0) {
						if (uVar1 != 10) goto LAB_8008a800;
						Str = (char *)((uchar *)Str + 1);
					}
				}
				else {
LAB_8008a800:
					this->Width = iVar7 + 1;
					iVar5 = iVar5 + 1;
				}
			}
			if (iVar7 < this->Width) {
				if (puVar6 == (uchar *)0x0) {
					if ((*Str != '\0') && (*Str != ' ')) {
						while( true ) {
							ch = *Str;
							if ((int)(char)ch == 0) break;
							if (((int)(char)ch & 0x80U) == 0) {
								iVar5 = GetCharWidth__5CFontUc(this,ch);
								this->Width = this->Width + iVar5;
							}
							else {
								Str = (char *)((uchar *)Str + 1);
								this->Width = this->Width + 0xc;
							}
							Str = (char *)((uchar *)Str + 1);
							if ((ch == '\0') || (ch == ' ')) break;
						}
					}
				}
				else {
					if (puVar6 == (uchar *)0x0) {
						DBG_Error((char *)0x0,"psxsrc/PRINTY.CPP",0x43d);
					}
					else {
						this->Width = iVar5;
						Str = (char *)puVar6;
					}
				}
			}
			ch = *Str;
		} while (ch != ' ');
		do {
			Str = (char *)((uchar *)Str + 1);
		} while (*Str == ' ');
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetWrapWidth__5CFontPcP4RECT(struct CFont *this /*$s1*/, char *Str /*$a1*/, struct RECT *TextWindow /*$a2*/)
 // line 1107, offset 0x8008a938
	/* begin block 1 */
		// Start line: 1108
		// Start offset: 0x8008A938
		// Variables:
	// 		char *EndPtr; // $s0
	// 		char *SpacePtr; // $s3
	// 		int CharW; // $v1
	// 		int SpaceW; // $s2
	// 		int WindowW; // $s4

		/* begin block 1.1 */
			// Start line: 1125
			// Start offset: 0x8008A974
			// Variables:
		// 		unsigned char c; // $a1
		/* end block 1.1 */
		// End offset: 0x8008A9F4
		// End Line: 1146
	/* end block 1 */
	// End offset: 0x8008AA80
	// End Line: 1191

	/* begin block 2 */
		// Start line: 2343
	/* end block 2 */
	// End Line: 2344

int GetWrapWidth__5CFontPcP4RECT(CFont *this,char *Str,RECT *TextWindow)

{
	uchar uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	uchar *puVar5;
	int iVar6;
	uchar *puVar7;
	int iVar8;
	
	iVar8 = 0x140;
	if (TextWindow != (RECT *)0x0) {
		iVar8 = (int)TextWindow->w;
	}
	puVar7 = (uchar *)0x0;
	this->Width = 0;
	iVar6 = 0;
	while (this->Width < iVar8) {
		uVar2 = SEXT14(*Str);
		if ((uVar2 == 0) || (uVar3 = uVar2 & 0xff, uVar2 == 10)) break;
		if ((uVar3 == 0x20) || ((uVar3 == 0x2d || (uVar3 == 0xff)))) {
			iVar6 = this->Width;
			puVar7 = (uchar *)Str;
		}
		iVar4 = 0xc;
		if ((uVar2 & 0x80) == 0) {
			iVar4 = GetCharWidth__5CFontUc(this,*Str);
			puVar5 = (uchar *)Str;
		}
		else {
			iVar6 = this->Width;
			puVar5 = (uchar *)Str + 1;
			puVar7 = (uchar *)Str;
		}
		Str = (char *)(puVar5 + 1);
		this->Width = this->Width + iVar4;
	}
	uVar1 = *Str;
	if ((uVar1 != ' ') && ((' ' < (char)uVar1 || ((uVar1 != '\0' && (uVar1 != '\n')))))) {
		this->Width = iVar8 + 1;
		iVar6 = iVar6 + 1;
	}
	if (iVar8 < this->Width) {
		if (puVar7 == (uchar *)0x0) {
			return 0;
		}
		if (puVar7 == (uchar *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/PRINTY.CPP",0x499);
		}
		else {
			this->Width = iVar6;
		}
	}
	return this->Width;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetStrWidth__5CFontPc(struct CFont *this /*$s2*/, char *Str /*$s0*/)
 // line 1196, offset 0x8008aaa4
	/* begin block 1 */
		// Start line: 1197
		// Start offset: 0x8008AAA4
		// Variables:
	// 		int Width; // $s1
	/* end block 1 */
	// End offset: 0x8008AB04
	// End Line: 1219

	/* begin block 2 */
		// Start line: 2522
	/* end block 2 */
	// End Line: 2523

int GetStrWidth__5CFontPc(CFont *this,char *Str)

{
	int iVar1;
	int iVar2;
	
	LANG_GetLang__Fv();
	iVar2 = 0;
	while( true ) {
		if (*Str == 0) break;
		if ((*Str & 0x80U) == 0) {
			iVar1 = GetCharWidth__5CFontUc(this,*Str);
			iVar2 = iVar2 + iVar1;
		}
		else {
			Str = (char *)((byte *)Str + 1);
			iVar2 = iVar2 + 0xc;
		}
		Str = (char *)((byte *)Str + 1);
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetChar__5CFontiUs(struct CFont *this /*$s1*/, int ch /*$s0*/, unsigned short Frm /*$s2*/)
 // line 1226, offset 0x8008ab20
	/* begin block 1 */
		// Start line: 1227
		// Start offset: 0x8008AB20
	/* end block 1 */
	// End offset: 0x8008AB84
	// End Line: 1230

	/* begin block 2 */
		// Start line: 2582
	/* end block 2 */
	// End Line: 2583

void SetChar__5CFontiUs(CFont *this,int ch,ushort Frm)

{
	if (0xff < ch) {
		DBG_Error((char *)0x0,"psxsrc/PRINTY.CPP",0x4cb);
	}
	if (ch < 0) {
		DBG_Error((char *)0x0,"psxsrc/PRINTY.CPP",0x4cc);
	}
	this->FontTab[ch] = Frm;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetOTpos__5CFonti(struct CFont *this /*$a0*/, int OT /*$a1*/)
 // line 1235, offset 0x8008aba0
	/* begin block 1 */
		// Start line: 1236
		// Start offset: 0x8008ABA0
		// Variables:
	// 		int OldOT; // $v0
	/* end block 1 */
	// End offset: 0x8008ABA4
	// End Line: 1239

	/* begin block 2 */
		// Start line: 2601
	/* end block 2 */
	// End Line: 2602

int SetOTpos__5CFonti(CFont *this,int OT)

{
	int iVar1;
	
	iVar1 = this->PrintyOTpos;
	this->PrintyOTpos = OT;
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetCharWidth__5CFontUc(struct CFont *this /*$s1*/, unsigned char ch /*$v0*/)
 // line 1246, offset 0x8008abac
	/* begin block 1 */
		// Start line: 1247
		// Start offset: 0x8008ABAC
	/* end block 1 */
	// End offset: 0x8008AC68
	// End Line: 1270

	/* begin block 2 */
		// Start line: 2622
	/* end block 2 */
	// End Line: 2623

int GetCharWidth__5CFontUc(CFont *this,uchar ch)

{
	undefined *puVar1;
	FRAME_HDR *pFVar2;
	
	if ((ch & 0x80) != 0) {
		return 0xc;
	}
	if (ch != -1) {
		if (ch == ' ') {
			return 3;
		}
		if (ch != '\n') {
			puVar1 = (undefined *)IsDefined__5CFontUc(this,ch);
			if (puVar1 != &DAT_00000001) {
				return 1;
			}
			if (ch != '.') {
				pFVar2 = GetFr__7TextDati(this->ThisDat,(uint)this->FontTab[(uint)ch]);
				return (pFVar2->Y & 0x1ffU) - 1;
			}
			pFVar2 = GetFr__7TextDati(this->ThisDat,(uint)this->FontTab[0x2e]);
			return pFVar2->Y & 0x1ff;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.WHITER()
 // line 1276, offset 0x8008ac80
	/* begin block 1 */
		// Start line: 1277
		// Start offset: 0x8008AC80
	/* end block 1 */
	// End offset: 0x8008ACD4
	// End Line: 1277

	/* begin block 2 */
		// Start line: 2686
	/* end block 2 */
	// End Line: 2687

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_WHITER(void)

{
	CFont *pCVar1;
	CFont *pCVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	undefined4 uVar5;
	CFont *pCVar6;
	CFont *pCVar7;
	
	pCVar1 = &MediumFont;
	pCVar2 = &LargeFont;
	do {
		pCVar7 = pCVar2;
		pCVar6 = pCVar1;
		uVar3 = *(undefined4 *)pCVar6->FontTab;
		uVar4 = *(undefined4 *)(pCVar6->FontTab + 2);
		uVar5 = *(undefined4 *)(pCVar6->FontTab + 4);
		pCVar7->TextureId = pCVar6->TextureId;
		*(undefined4 *)pCVar7->FontTab = uVar3;
		*(undefined4 *)(pCVar7->FontTab + 2) = uVar4;
		*(undefined4 *)(pCVar7->FontTab + 4) = uVar5;
		pCVar1 = (CFont *)(pCVar6->FontTab + 6);
		pCVar2 = (CFont *)(pCVar7->FontTab + 6);
	} while ((CFont *)(pCVar6->FontTab + 6) != (CFont *)&MediumFont.Width);
	uVar3 = *(undefined4 *)(pCVar6->FontTab + 8);
	uVar4 = *(undefined4 *)(pCVar6->FontTab + 10);
	((CFont *)(pCVar7->FontTab + 6))->TextureId = MediumFont.Width;
	*(undefined4 *)(pCVar7->FontTab + 8) = uVar3;
	*(undefined4 *)(pCVar7->FontTab + 10) = uVar4;
	return;
}





