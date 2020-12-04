#include "THISDUST.H"
#include "PRINTY.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Set__7FontTab(struct FontTab *this /*$s1*/)
 // line 89, offset 0x800845c0
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x800845C0

		/* begin block 1.1 */
			// Start line: 90
			// Start offset: 0x800845C0
			// Variables:
		// 		int Loop; // $s0
		/* end block 1.1 */
		// End offset: 0x800845F8
		// End Line: 92

		/* begin block 1.2 */
			// Start line: 92
			// Start offset: 0x800845F8
			// Variables:
		// 		int f; // $s0
		// 		int Loop; // $s0
		/* end block 1.2 */
		// End offset: 0x80084644
		// End Line: 95
	/* end block 1 */
	// End offset: 0x80084644
	// End Line: 95

	/* begin block 2 */
		// Start line: 178
	/* end block 2 */
	// End Line: 179

void Set__7FontTab(FontTab *this)

{
	char *pcVar1;
	int iVar2;
	int ch;
	
	ch = 0;
	do {
		iVar2 = ch + 1;
		SetChar__5CFontiUs(this->Fnt,ch,0x3039);
		ch = iVar2;
	} while (iVar2 < 0x7f);
	ch = 0;
	if (0 < this->NumOfItems) {
		iVar2 = 0;
		do {
			pcVar1 = &this->Items->ch + iVar2;
			SetChar__5CFontiUs(this->Fnt,(int)*pcVar1,(ushort)(byte)pcVar1[1] + (short)this->FrameBase);
			ch = ch + 1;
			iVar2 = ch * 2;
		} while (ch < this->NumOfItems);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPrinty__Fv()
 // line 360, offset 0x8008465c
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x8008465C
	/* end block 1 */
	// End offset: 0x800846CC
	// End Line: 371

	/* begin block 2 */
		// Start line: 721
	/* end block 2 */
	// End Line: 722

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPrinty__Fv(void)

{
	Init__5CFont(&LargeFont);
	Init__5CFont(&MediumFont);
	Set__7FontTab(&LFont);
	Set__7FontTab(&MFont);
	SetOTpos__5CFonti(&LargeFont,0xfb);
	SetOTpos__5CFonti(&MediumFont,0xfb);
	ClearFont__5CFont(&LargeFont);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTextDat__5CFontP7TextDat(struct CFont *this /*$a0*/, struct TextDat *NewDat /*$a1*/)
 // line 375, offset 0x800846e4
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800846E4
	/* end block 1 */
	// End offset: 0x800846E4
	// End Line: 377

	/* begin block 2 */
		// Start line: 754
	/* end block 2 */
	// End Line: 755

void SetTextDat__5CFontP7TextDat(CFont *this,TextDat *NewDat)

{
	this->ThisDat = NewDat;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PrintChar__5CFontUsUscUcUcUc(struct CFont *this /*$s1*/, unsigned short Cx /*$s3*/, unsigned short Cy /*$s2*/, char C /*$a3*/, int R /*stack 16*/, int G /*stack 20*/, int B /*stack 24*/)
 // line 383, offset 0x800846ec
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x800846EC
		// Variables:
	// 		int Cw; // $s4
	/* end block 1 */
	// End offset: 0x8008483C
	// End Line: 443

	/* begin block 2 */
		// Start line: 769
	/* end block 2 */
	// End Line: 770

int PrintChar__5CFontUsUscUcUcUc(CFont *this,ushort Cx,ushort Cy,char C,int R,int G,int B)

{
	undefined *puVar1;
	int iVar2;
	
	puVar1 = (undefined *)IsDefined__5CFontUc(this,C);
	iVar2 = 0;
	if (puVar1 == &DAT_00000001) {
		iVar2 = GetCharWidth__5CFontc(this,C);
		CharFrm = GetCharFrameNum__5CFontc(this,C);
		if ((C != ' ') && (0 < iVar2)) {
			CharFt4 = PrintFt4__7TextDatiiiiii
													(this->ThisDat,CharFrm,(uint)Cx,(uint)Cy,0,this->PrintyOTpos + 1,0);
			if ((CharFrm - 0x89U < 4) || (CharFrm - 0x95U < 4)) {
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
// int /*$ra*/ Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this /*$s2*/, int X /*stack -160*/, int Y /*$s4*/, char *Str /*$s1*/, enum TXT_JUST Justify /*stack 16*/, struct RECT *TextWindow /*stack 20*/, int R /*stack 24*/, int G /*stack 28*/, int B /*stack 32*/)
 // line 447, offset 0x8008486c
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x8008486C
		// Variables:
	// 		int Cx; // $s0
	// 		int Cy; // $s4
	// 		int WrapCount; // stack offset -152
	// 		char *EndPtr; // $s3
	// 		char *SpacePtr; // $s5
	// 		int CharW; // $v1
	// 		int SpaceW; // $s0
	// 		int WindowW; // stack offset -144
	// 		int WindowH; // stack offset -136
	// 		int WindowX; // stack offset -128
	// 		int WindowY; // stack offset -120
	// 		void * JapLang; // stack offset -112
	// 		unsigned short col; // stack offset -104

		/* begin block 1.1 */
			// Start line: 484
			// Start offset: 0x80084954

			/* begin block 1.1.1 */
				// Start line: 490
				// Start offset: 0x8008497C
				// Variables:
			// 		char c; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800849F4
			// End Line: 505

			/* begin block 1.1.2 */
				// Start line: 552
				// Start offset: 0x80084B00

				/* begin block 1.1.2.1 */
					// Start line: 553
					// Start offset: 0x80084B40

					/* begin block 1.1.2.1.1 */
						// Start line: 557
						// Start offset: 0x80084B60

						/* begin block 1.1.2.1.1.1 */
							// Start line: 558
							// Start offset: 0x80084B70
							// Variables:
						// 		unsigned char h; // $a2
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80084BE4
						// End Line: 569
					/* end block 1.1.2.1.1 */
					// End offset: 0x80084C20
					// End Line: 573

					/* begin block 1.1.2.1.2 */
						// Start line: 579
						// Start offset: 0x80084C5C

						/* begin block 1.1.2.1.2.1 */
							// Start line: 580
							// Start offset: 0x80084C6C
							// Variables:
						// 		unsigned char h; // $a2
						/* end block 1.1.2.1.2.1 */
						// End offset: 0x80084CE0
						// End Line: 591
					/* end block 1.1.2.1.2 */
					// End offset: 0x80084D1C
					// End Line: 595

					/* begin block 1.1.2.1.3 */
						// Start line: 601
						// Start offset: 0x80084D4C

						/* begin block 1.1.2.1.3.1 */
							// Start line: 602
							// Start offset: 0x80084D5C
							// Variables:
						// 		unsigned char h; // $a2
						/* end block 1.1.2.1.3.1 */
						// End offset: 0x80084DD0
						// End Line: 613
					/* end block 1.1.2.1.3 */
					// End offset: 0x80084E0C
					// End Line: 617
				/* end block 1.1.2.1 */
				// End offset: 0x80084E24
				// End Line: 619
			/* end block 1.1.2 */
			// End offset: 0x80084E24
			// End Line: 619
		/* end block 1.1 */
		// End offset: 0x80084E4C
		// End Line: 623
	/* end block 1 */
	// End offset: 0x80084E58
	// End Line: 628

	/* begin block 2 */
		// Start line: 901
	/* end block 2 */
	// End Line: 902

int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(CFont *this,int X,int Y,char *Str,TXT_JUST Justify,RECT *TextWindow,int R,int G,int B
							)

{
	uchar l;
	bool bVar1;
	ushort Cy;
	LANG_TYPE LVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	uint B_00;
	uchar *puVar6;
	uint G_00;
	uchar *puVar7;
	uint R_00;
	int local_98;
	int local_90;
	int local_80;
	int local_78;
	ushort local_68;
	
	R_00 = R & 0xff;
	G_00 = G & 0xff;
	B_00 = B & 0xff;
	LVar2 = LANG_GetLang__Fv();
	bVar1 = LVar2 == LANG_JAP;
	local_68 = 0;
	this->MinX = 0x3039;
	this->MaxX = 0;
	if (TextWindow == (RECT *)0x0) {
		local_90 = 0x140;
		local_80 = 0;
		local_78 = 0;
	}
	else {
		local_90 = (int)TextWindow->w;
		local_80 = (int)TextWindow->x;
		local_78 = (int)TextWindow->y;
	}
	local_98 = 0;
	Y = Y + local_78;
	do {
		if (*Str == '\0') {
			return local_98;
		}
		puVar7 = (uchar *)0x0;
		iVar5 = 0;
		local_98 = local_98 + 1;
		this->Width = 0;
		puVar6 = (uchar *)Str;
		while (this->Width < local_90) {
			uVar3 = SEXT14((char)*puVar6);
			if ((uVar3 == 0) || (uVar3 == 10)) goto LAB_80084a0c;
			if (uVar3 == 0x20) {
				iVar5 = this->Width;
				puVar7 = puVar6;
			}
			if ((bVar1) && (iVar4 = 0xc, (uVar3 & 0x80) != 0)) {
				puVar6 = puVar6 + 1;
			}
			else {
				iVar4 = GetCharWidth__5CFontc(this,*puVar6);
			}
			puVar6 = puVar6 + 1;
			this->Width = this->Width + iVar4;
		}
		uVar3 = SEXT14((char)*puVar6);
LAB_80084a0c:
		if (uVar3 != 0x20) {
			if ((int)uVar3 < 0x21) {
				if (uVar3 != 0) {
					if (uVar3 != 10) goto LAB_80084a38;
					puVar6 = puVar6 + 1;
				}
			}
			else {
LAB_80084a38:
				iVar5 = iVar5 + 1;
				this->Width = local_90 + 1;
			}
		}
		if (local_90 < this->Width) {
			if (puVar7 == (uchar *)0x0) {
				DBG_SendMessage(Str);
				local_90 = 0x140;
				DBG_SendMessage("String too long[%d], for window X:%d Y:%d W:%d H:%d");
			}
			else {
				this->Width = iVar5;
				puVar6 = puVar7;
			}
		}
		if (bVar1) {
			if ((((byte)R == 0x80) && (G_00 == R_00)) && (B_00 == G_00)) {
				local_68 = 0x7fff;
			}
			else {
				local_68 = (ushort)((byte)R >> 3) |
									 (ushort)((((uint)B >> 3 & 0x1f) << 5 | (uint)G >> 3 & 0x1f) << 5);
			}
		}
		Cy = (ushort)Y;
		if (Justify == JustCentre) {
			uVar3 = local_90 - this->Width;
			iVar5 = ((int)(uVar3 + (uVar3 >> 0x1f)) >> 1) + local_80;
			if (iVar5 < this->MinX) {
				this->MinX = iVar5;
			}
			if (bVar1) {
				while ((uchar *)Str != puVar6) {
					l = *Str;
					if (((int)(char)l & 0x80U) == 0) {
						Str = (char *)((uchar *)Str + 1);
						iVar4 = PrintChar__5CFontUsUscUcUcUc(this,(ushort)iVar5,Cy,l,R_00,G_00,B_00);
					}
					else {
						puVar7 = (uchar *)Str + 1;
						Str = (char *)((uchar *)Str + 2);
						iVar4 = KPrintChar__FUsUsUcUcUs((ushort)iVar5,Cy,*puVar7,l,(uint)local_68);
					}
					iVar5 = iVar5 + iVar4;
				}
			}
			else {
				while ((uchar *)Str != puVar6) {
					l = *Str;
					Str = (char *)((uchar *)Str + 1);
					iVar4 = PrintChar__5CFontUsUscUcUcUc(this,(ushort)iVar5,Cy,l,R_00,G_00,B_00);
					iVar5 = iVar5 + iVar4;
				}
			}
LAB_80084e0c:
			if (this->MaxX < iVar5) {
				this->MaxX = iVar5;
			}
		}
		else {
			if ((int)Justify < 2) {
				if (Justify == JustLeft) {
					iVar5 = local_80 + X;
					if (iVar5 < this->MinX) {
						this->MinX = iVar5;
					}
					if (bVar1) {
						while ((uchar *)Str != puVar6) {
							l = *Str;
							if (((int)(char)l & 0x80U) == 0) {
								Str = (char *)((uchar *)Str + 1);
								iVar4 = PrintChar__5CFontUsUscUcUcUc(this,(ushort)iVar5,Cy,l,R_00,G_00,B_00);
							}
							else {
								puVar7 = (uchar *)Str + 1;
								Str = (char *)((uchar *)Str + 2);
								iVar4 = KPrintChar__FUsUsUcUcUs((ushort)iVar5,Cy,*puVar7,l,(uint)local_68);
							}
							iVar5 = iVar5 + iVar4;
						}
					}
					else {
						while ((uchar *)Str != puVar6) {
							l = *Str;
							Str = (char *)((uchar *)Str + 1);
							iVar4 = PrintChar__5CFontUsUscUcUcUc(this,(ushort)iVar5,Cy,l,R_00,G_00,B_00);
							iVar5 = iVar5 + iVar4;
						}
					}
					goto LAB_80084e0c;
				}
			}
			else {
				if (Justify == JustRight) {
					iVar5 = (local_90 - this->Width) + local_80;
					if (iVar5 < this->MinX) {
						this->MinX = iVar5;
					}
					if (bVar1) {
						while ((uchar *)Str != puVar6) {
							l = *Str;
							if (((int)(char)l & 0x80U) == 0) {
								Str = (char *)((uchar *)Str + 1);
								iVar4 = PrintChar__5CFontUsUscUcUcUc(this,(ushort)iVar5,Cy,l,R_00,G_00,B_00);
							}
							else {
								puVar7 = (uchar *)Str + 1;
								Str = (char *)((uchar *)Str + 2);
								iVar4 = KPrintChar__FUsUsUcUcUs((ushort)iVar5,Cy,*puVar7,l,(uint)local_68);
							}
							iVar5 = iVar5 + iVar4;
						}
					}
					else {
						while ((uchar *)Str != puVar6) {
							l = *Str;
							Str = (char *)((uchar *)Str + 1);
							iVar4 = PrintChar__5CFontUsUscUcUcUc(this,(ushort)iVar5,Cy,l,R_00,G_00,B_00);
							iVar5 = iVar5 + iVar4;
						}
					}
					goto LAB_80084e0c;
				}
			}
		}
		l = *Str;
		Y = Y + 0xc;
		while (l == ' ') {
			Str = (char *)((uchar *)Str + 1);
			l = *Str;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetStrWidth__5CFontPc(struct CFont *this /*$s4*/, char *Str /*$s1*/)
 // line 632, offset 0x80084e8c
	/* begin block 1 */
		// Start line: 633
		// Start offset: 0x80084E8C
		// Variables:
	// 		int Width; // $s3
	// 		char c; // $s2
	/* end block 1 */
	// End offset: 0x80084F18
	// End Line: 649

	/* begin block 2 */
		// Start line: 1288
	/* end block 2 */
	// End Line: 1289

int GetStrWidth__5CFontPc(CFont *this,char *Str)

{
	byte bVar1;
	byte ch;
	LANG_TYPE LVar2;
	int iVar3;
	int iVar4;
	
	bVar1 = *Str;
	ch = *Str;
	iVar4 = 0;
	while (bVar1 != 0) {
		LVar2 = LANG_GetLang__Fv();
		if ((LVar2 == LANG_JAP) && ((ch & 0x80) != 0)) {
			Str = (char *)((byte *)Str + 1);
			iVar4 = iVar4 + 0xc;
		}
		else {
			iVar3 = GetCharWidth__5CFontc(this,ch);
			iVar4 = iVar4 + iVar3;
		}
		Str = (char *)((byte *)Str + 1);
		bVar1 = *Str;
		ch = *Str;
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetChar__5CFontiUs(struct CFont *this /*$s1*/, int ch /*$s0*/, unsigned short Frm /*$s2*/)
 // line 656, offset 0x80084f40
	/* begin block 1 */
		// Start line: 657
		// Start offset: 0x80084F40
	/* end block 1 */
	// End offset: 0x80084F88
	// End Line: 659

	/* begin block 2 */
		// Start line: 1336
	/* end block 2 */
	// End Line: 1337

void SetChar__5CFontiUs(CFont *this,int ch,ushort Frm)

{
	if (0xff < ch) {
		DBG_Error((char *)0x0,"psxsrc/PRINTY.CPP",0x291);
	}
	this->FontTab[ch] = Frm;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetOTpos__5CFonti(struct CFont *this /*$a0*/, int OT /*$a1*/)
 // line 664, offset 0x80084fa4
	/* begin block 1 */
		// Start line: 665
		// Start offset: 0x80084FA4
		// Variables:
	// 		int OldOT; // $v0
	/* end block 1 */
	// End offset: 0x80084FA8
	// End Line: 668

	/* begin block 2 */
		// Start line: 1353
	/* end block 2 */
	// End Line: 1354

int SetOTpos__5CFonti(CFont *this,int OT)

{
	int iVar1;
	
	iVar1 = this->PrintyOTpos;
	this->PrintyOTpos = OT;
	return iVar1;
}





