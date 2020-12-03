#include "THISDUST.H"
#include "INV.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeInvGFX__Fv()
 // line 443, offset 0x80157274
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x80157274
	/* end block 1 */
	// End offset: 0x80157274
	// End Line: 444

	/* begin block 2 */
		// Start line: 887
	/* end block 2 */
	// End Line: 888

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeInvGFX__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawSlot__Fiii(int X /*$a0*/, int Y /*$a1*/, int Frame /*$a2*/)
 // line 448, offset 0x8015727c
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x8015727C
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	/* end block 1 */
	// End offset: 0x801572F0
	// End Line: 456

	/* begin block 2 */
		// Start line: 899
	/* end block 2 */
	// End Line: 900

void InvDrawSlot__Fiii(int X,int Y,int Frame)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = PrintFt4__7TextDatiiiiii(InvGfxTData,Frame,X + 0x80,(Y - InvBackY) + 0x20,0,slotot,0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	pPVar1->r0 = BORDERR;
	pPVar1->g0 = BORDERG;
	pPVar1->b0 = BORDERB;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawSlotBack__FiiiiUc(int X /*$s1*/, int Y /*$s0*/, int W /*$s2*/, int H /*$s3*/, int Flag /*stack 16*/)
 // line 462, offset 0x80157300
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x80157300
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $a0
	/* end block 1 */
	// End offset: 0x80157594
	// End Line: 502

	/* begin block 2 */
		// Start line: 930
	/* end block 2 */
	// End Line: 931

void InvDrawSlotBack__FiiiiUc(int X,int Y,int W,int H,int Flag)

{
	char cVar1;
	short sVar2;
	POLY_FT4 *pPVar3;
	uint uVar4;
	int iVar5;
	short sVar6;
	
	pPVar3 = PrintFt4__7TextDatiiiiii(InvPanelTData,0x94,X,Y,0,slotbackot,0);
	iVar5 = InvBackY;
	sVar2 = (short)X + 0x81;
	sVar6 = (short)X + (short)W + 0x7f;
	pPVar3->x0 = sVar2;
	pPVar3->x1 = sVar6;
	pPVar3->x2 = sVar2;
	pPVar3->x3 = sVar6;
	sVar2 = (short)Y - (short)iVar5;
	sVar6 = sVar2 + 0x21;
	pPVar3->y0 = sVar6;
	pPVar3->y1 = sVar6;
	sVar2 = sVar2 + (short)H + 0x1f;
	pPVar3->y2 = sVar2;
	pPVar3->y3 = sVar2;
	pPVar3->tpage = pPVar3->tpage | 0x40;
	pPVar3->u1 = pPVar3->u0 + '\x01';
	pPVar3->u3 = pPVar3->u0 + '\x01';
	pPVar3->v2 = pPVar3->v0 + '\x01';
	pPVar3->v3 = pPVar3->v0 + '\x01';
	pPVar3->code = pPVar3->code & 0xfe | 2;
	iVar5 = myplr;
	if ((byte)Flag == 1) {
		pPVar3->r0 = -0x30;
		pPVar3->g0 = '\0';
		pPVar3->b0 = '\0';
		pPVar3->tpage = pPVar3->tpage | 0x20;
	}
	else {
		if ((byte)Flag < 2) {
			if ((byte)Flag == 0) {
				pPVar3->r0 = ' ';
				pPVar3->g0 = ' ';
				pPVar3->b0 = ' ';
				pPVar3->tpage = pPVar3->tpage | 0x40;
			}
		}
		else {
			if ((byte)Flag == 2) {
				pPVar3->tpage = pPVar3->tpage | 0x20;
				uVar4 = (&_pcurs)[iVar5];
				if (uVar4 == (Flag & 0xffU)) {
					pPVar3->r0 = '\0';
					pPVar3->g0 = '\0';
				}
				else {
					cVar1 = (char)CursGlow;
					if (uVar4 == 3) {
						pPVar3->r0 = cVar1 + -0x80;
						iVar5 = CursGlow;
						pPVar3->b0 = '\0';
						pPVar3->g0 = (char)iVar5 + -0x80;
						return;
					}
					if (uVar4 == 4) {
						pPVar3->g0 = '\0';
						pPVar3->r0 = cVar1 + -0x80;
					}
					else {
						if (0xb < (int)uVar4) {
							pPVar3->r0 = cVar1 + -0x80;
							pPVar3->g0 = (uchar)(CursGlow + 0x80 >> 2);
							pPVar3->b0 = (uchar)(CursGlow + 0x80 >> 2);
							return;
						}
						pPVar3->r0 = cVar1 + -0x80;
						pPVar3->g0 = (char)CursGlow + -0x80;
					}
				}
				pPVar3->b0 = (char)CursGlow + -0x80;
			}
			else {
				if ((byte)Flag == 3) {
					pPVar3->r0 = -0x80;
					pPVar3->g0 = (char)(CursGlow >> 2) + ' ';
					iVar5 = CursGlow >> 2;
					pPVar3->tpage = pPVar3->tpage | 0x20;
					pPVar3->b0 = (char)iVar5 + ' ';
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawItem__FiiiUci(int ItemX /*$v1*/, int ItemY /*$a1*/, int ItemNo /*$a2*/, unsigned char StatFlag /*$s0*/, int TransFlag /*stack 16*/)
 // line 508, offset 0x801575b8
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x801575B8
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v1
	// 		struct TextDat *TData; // $a0
	/* end block 1 */
	// End offset: 0x80157670
	// End Line: 524

	/* begin block 2 */
		// Start line: 1048
	/* end block 2 */
	// End Line: 1049

void InvDrawItem__FiiiUci(int ItemX,int ItemY,int ItemNo,uchar StatFlag,int TransFlag)

{
	byte bVar1;
	byte bVar2;
	POLY_FT4 *pPVar3;
	TextDat *this;
	
	this = InvGfxTData;
	if (ItemNo < 0x32) {
		this = InvPanelTData;
	}
	pPVar3 = PrintFt4__7TextDatiiiiii
										 (this,InvGfxTable[ItemNo],ItemX + 0x80,(ItemY - InvBackY) + 0x20,0,itemot,0);
	bVar2 = pPVar3->code;
	bVar1 = bVar2 & 0xfe;
	pPVar3->code = bVar1;
	if (TransFlag == 0) {
		bVar2 = bVar2 & 0xfc;
	}
	else {
		bVar2 = bVar1 | 2;
	}
	pPVar3->code = bVar2;
	if (StatFlag == '\0') {
		pPVar3->r0 = -0x80;
		pPVar3->g0 = '\0';
		pPVar3->b0 = '\0';
	}
	else {
		pPVar3->r0 = -0x80;
		pPVar3->g0 = -0x80;
		pPVar3->b0 = -0x80;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawSlots__Fv()
 // line 529, offset 0x80157688
	/* begin block 1 */
		// Start line: 530
		// Start offset: 0x80157688
		// Variables:
	// 		int Bx; // $s0
	// 		int By; // $s1
	/* end block 1 */
	// End offset: 0x80157980
	// End Line: 588

	/* begin block 2 */
		// Start line: 1093
	/* end block 2 */
	// End Line: 1094

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvDrawSlots__Fv(void)

{
	int *piVar1;
	int *piVar2;
	byte *pbVar3;
	int iVar4;
	int X;
	int iVar5;
	int Y;
	
	Y = InvRect.Y;
	X = InvRect.X;
	CursGlow = CursGlow + CursGlowDx;
	if (0 < CursGlow) {
		CursGlow = 0;
		CursGlowDx = -8;
	}
	if (CursGlow < -0x7f) {
		CursGlow = -0x7f;
		CursGlowDx = 8;
	}
	iVar4 = 200;
	iVar5 = 0x19;
	InvDrawSlot__Fiii(InvRect.X,InvRect.Y,0x5c);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x20,(uint)InvSlotTable);
	Y = InvXY_8010d050.Y;
	X = InvXY_8010d050.X;
	InvDrawSlot__Fiii(InvXY_8010d050.X,InvXY_8010d050.Y,0x5b);
	InvDrawSlotBack__FiiiiUc(X,Y,0x10,0x10,(uint)UCHAR_00h_8010d684);
	Y = InvXY_8010d058.Y;
	X = InvXY_8010d058.X;
	InvDrawSlot__Fiii(InvXY_8010d058.X,InvXY_8010d058.Y,0x5b);
	InvDrawSlotBack__FiiiiUc(X,Y,0x10,0x10,(uint)UCHAR_00h_8010d685);
	Y = InvXY_8010d060.Y;
	X = InvXY_8010d060.X;
	InvDrawSlot__Fiii(InvXY_8010d060.X,InvXY_8010d060.Y,0x5b);
	InvDrawSlotBack__FiiiiUc(X,Y,0x10,0x10,(uint)UCHAR_00h_8010d686);
	Y = InvXY_ARRAY_8010d068[0].Y;
	X = InvXY_ARRAY_8010d068[0].X;
	InvDrawSlot__Fiii(InvXY_ARRAY_8010d068[0].X,InvXY_ARRAY_8010d068[0].Y,0x5d);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x30,(uint)s__8010d687[0]);
	Y = InvXY_ARRAY_8010d098[0].Y;
	X = InvXY_ARRAY_8010d098[0].X;
	InvDrawSlot__Fiii(InvXY_ARRAY_8010d098[0].X,InvXY_ARRAY_8010d098[0].Y,0x5d);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x30,(uint)s__8010d68d[0]);
	Y = InvXY_ARRAY_8010d0c8[0].Y;
	X = InvXY_ARRAY_8010d0c8[0].X;
	InvDrawSlot__Fiii(InvXY_ARRAY_8010d0c8[0].X,InvXY_ARRAY_8010d0c8[0].Y,0x5d);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x30,(uint)s__8010d693[0]);
	InvDrawSlot__Fiii(InvXY_8010d0f8.X,InvXY_8010d0f8.Y,0x5f);
	do {
		piVar1 = (int *)((int)&InvRect.X + iVar4);
		piVar2 = (int *)((int)&InvRect.Y + iVar4);
		iVar4 = iVar4 + 8;
		pbVar3 = &InvSlotTable + iVar5;
		iVar5 = iVar5 + 1;
		InvDrawSlotBack__FiiiiUc(*piVar1,*piVar2,0x10,0x10,(uint)*pbVar3);
	} while (iVar4 < 0x208);
	X = 0x208;
	Y = 0x41;
	InvDrawSlot__Fiii(InvXY_8010d238.X,InvXY_8010d238.Y,0x5e);
	do {
		piVar1 = (int *)((int)&InvRect.X + X);
		piVar2 = (int *)((int)&InvRect.Y + X);
		X = X + 8;
		pbVar3 = &InvSlotTable + Y;
		Y = Y + 1;
		InvDrawSlotBack__FiiiiUc(*piVar1,*piVar2,0x10,0x10,(uint)*pbVar3);
	} while (X < 0x248);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStat__FiiPcUc(int Y /*$s4*/, int Txt0 /*$a1*/, char *Txt1 /*$s5*/, unsigned char Col /*$a3*/)
 // line 597, offset 0x801579a0
	/* begin block 1 */
		// Start line: 598
		// Start offset: 0x801579A0
	/* end block 1 */
	// End offset: 0x80157A44
	// End Line: 600

	/* begin block 2 */
		// Start line: 1272
	/* end block 2 */
	// End Line: 1273

void PrintStat__FiiPcUc(int Y,int Txt0,char *Txt1,uchar Col)

{
	char *Str;
	uint G;
	uint R;
	
	Str = GetStr__Fi(Txt0);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,Str,JustLeft,&BRect,R,G,G);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,Txt1,JustRight,&BRect,R,G,G);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvStats__Fv()
 // line 605, offset 0x80157a6c
	/* begin block 1 */
		// Start line: 606
		// Start offset: 0x80157A6C
		// Variables:
	// 		struct Dialog InvBack; // stack offset -56
	// 		char c; // $s2
	// 		char chrstr[10]; // stack offset -40
	// 		long mind; // $s1
	// 		long maxd; // $s0
	// 		int hper; // $s0
	// 		int ac; // $s0
	/* end block 1 */
	// End offset: 0x80158568
	// End Line: 765

	/* begin block 2 */
		// Start line: 1289
	/* end block 2 */
	// End Line: 1290

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvStats__Fv(void)

{
	ushort uVar1;
	char *__format;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool Col;
	Dialog DStack56;
	char acStack40 [16];
	
	__6Dialog(&DStack56);
	SetOTpos__6Dialogi(&DStack56,0xf9);
	SetBack__6Dialogi(&DStack56,5);
	SetRGB__6DialogUcUcUc(&DStack56,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack56,10,0x20,0x74,0xb0);
	BRect.x = 0xb;
	BRect.y = 0x20;
	BRect.w = 0x72;
	BRect.h = 0xb0;
	Col = plr[options_pad]._pBaseStr < plr[options_pad]._pStrength;
	if (plr[options_pad]._pStrength < plr[options_pad]._pBaseStr) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I_1277);
	sprintf(acStack40,__format,(int)plr[options_pad]._pStrength);
	PrintStat__FiiPcUc(0xc,0x419,acStack40,Col);
	Col = plr[options_pad]._pBaseMag < plr[options_pad]._pMagic;
	if (plr[options_pad]._pMagic < plr[options_pad]._pBaseMag) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I_1277);
	sprintf(acStack40,__format,(int)plr[options_pad]._pMagic);
	PrintStat__FiiPcUc(0x19,0x26f,acStack40,Col);
	Col = plr[options_pad]._pBaseDex < plr[options_pad]._pDexterity;
	if (plr[options_pad]._pDexterity < plr[options_pad]._pBaseDex) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I_1277);
	sprintf(acStack40,__format,(int)plr[options_pad]._pDexterity);
	PrintStat__FiiPcUc(0x26,0xff,acStack40,Col);
	Col = plr[options_pad]._pBaseVit < plr[options_pad]._pVitality;
	if (plr[options_pad]._pVitality < plr[options_pad]._pBaseVit) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I_1277);
	sprintf(acStack40,__format,(int)plr[options_pad]._pVitality);
	PrintStat__FiiPcUc(0x32,0x4b7,acStack40,Col);
	iVar6 = plr[options_pad]._pIBonusToHit;
	Col = 0 < iVar6;
	if (iVar6 < 0) {
		Col = true;
	}
	uVar1 = plr[options_pad]._pDexterity;
	__format = GetStr__Fi(STR__I___1283);
	sprintf(acStack40,__format,((int)((uint)uVar1 << 0x10) >> 0x11) + iVar6 + 0x32);
	PrintStat__FiiPcUc(0x40,0x495,acStack40,Col);
	iVar6 = plr[options_pad]._pIBonusDam;
	Col = 0 < iVar6;
	if (iVar6 < 0) {
		Col = true;
	}
	iVar9 = plr[options_pad]._pIMinDam;
	iVar7 = plr[options_pad]._pIBonusDamMod;
	if ((plr[options_pad].InvBody[4]._itype == 3) && (plr[options_pad]._pClass != '\x01')) {
		iVar2 = plr[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar2 = plr[options_pad]._pDamageMod;
	}
	iVar8 = plr[options_pad]._pIMaxDam;
	iVar3 = plr[options_pad]._pIBonusDam;
	iVar4 = plr[options_pad]._pIBonusDamMod;
	if ((plr[options_pad].InvBody[4]._itype == 3) && (plr[options_pad]._pClass != '\x01')) {
		iVar5 = plr[options_pad]._pDamageMod >> 1;
	}
	else {
		iVar5 = plr[options_pad]._pDamageMod;
	}
	__format = GetStr__Fi(STR__I__I_1281);
	sprintf(acStack40,__format,iVar9 + (iVar9 * iVar6) / 100 + iVar7 + iVar2,
					iVar8 + (iVar8 * iVar3) / 100 + iVar4 + iVar5);
	PrintStat__FiiPcUc(0x4d,0xe1,acStack40,Col);
	iVar6 = plr[options_pad]._pMaxHP;
	Col = plr[options_pad]._pMaxHPBase < iVar6;
	if (plr[options_pad]._pHitPoints != iVar6) {
		Col = true;
	}
	sprintf(acStack40,"%i/%i",plr[options_pad]._pHitPoints >> 6,iVar6 >> 6);
	PrintStat__FiiPcUc(0x5c,0x24d,acStack40,Col);
	iVar6 = plr[options_pad]._pMaxMana;
	Col = plr[options_pad]._pMaxManaBase < iVar6;
	if (plr[options_pad]._pMana != iVar6) {
		Col = true;
	}
	sprintf(acStack40,"%i/%i",plr[options_pad]._pMana >> 6,iVar6 >> 6);
	PrintStat__FiiPcUc(0x68,0x27a,acStack40,Col);
	iVar6 = plr[options_pad]._pIBonusAC;
	Col = 0 < iVar6;
	if (iVar6 < 0) {
		Col = true;
	}
	iVar9 = (uint)(ushort)plr[options_pad]._pDexterity << 0x10;
	iVar7 = iVar9 >> 0x10;
	iVar2 = plr[options_pad]._pIAC;
	__format = GetStr__Fi(STR__I_1277);
	sprintf(acStack40,__format,
					iVar2 + iVar6 + (((iVar7 / 5 + (iVar7 >> 0x1f)) - (iVar9 >> 0x1f)) * 0x10000 >> 0x10));
	PrintStat__FiiPcUc(0x75,0x2a,acStack40,Col);
	Col = plr[options_pad]._pMagResist != '\0';
	if (plr[options_pad]._pMagResist < 'K') {
		__format = GetStr__Fi(STR__I___1283);
		sprintf(acStack40,__format,(int)plr[options_pad]._pMagResist);
	}
	else {
		Col = true;
		__format = GetStr__Fi(STR_MAX_645);
		sprintf(acStack40,__format);
	}
	PrintStat__FiiPcUc(0x84,0x273,acStack40,Col);
	Col = plr[options_pad]._pFireResist != '\0';
	if (plr[options_pad]._pFireResist < 'K') {
		__format = GetStr__Fi(STR__I___1283);
		sprintf(acStack40,__format,(int)plr[options_pad]._pFireResist);
	}
	else {
		Col = true;
		__format = GetStr__Fi(STR_MAX_645);
		sprintf(acStack40,__format);
	}
	PrintStat__FiiPcUc(0x91,0x157,acStack40,Col);
	Col = plr[options_pad]._pLghtResist != '\0';
	if (plr[options_pad]._pLghtResist < 'K') {
		__format = GetStr__Fi(STR__I___1283);
		sprintf(acStack40,__format,(int)plr[options_pad]._pLghtResist);
	}
	else {
		Col = true;
		__format = GetStr__Fi(STR_MAX_645);
		sprintf(acStack40,__format);
	}
	PrintStat__FiiPcUc(0x9e,0x254,acStack40,Col);
	__format = GetStr__Fi(STR__I_1277);
	sprintf(acStack40,__format,plr[options_pad]._pGold);
	PrintStat__FiiPcUc(0xac,0x191,acStack40,'\0');
	___6Dialog(&DStack56,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvBack__Fv()
 // line 769, offset 0x80158588
	/* begin block 1 */
		// Start line: 770
		// Start offset: 0x80158588
		// Variables:
	// 		struct Dialog InvBack; // stack offset -24
	/* end block 1 */
	// End offset: 0x80158624
	// End Line: 779

	/* begin block 2 */
		// Start line: 1639
	/* end block 2 */
	// End Line: 1640

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvBack__Fv(void)

{
	Dialog DStack24;
	
	__6Dialog(&DStack24);
	SetOTpos__6Dialogi(&DStack24,backot);
	SetBack__6Dialogi(&DStack24,5);
	SetRGB__6DialogUcUcUc(&DStack24,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack24,0x80,0x80 - InvBackY,0xb0,0xbe);
	Back__6Dialogiiii(&DStack24,0x80,0x20 - InvBackY,0xb0,0x5e);
	___6Dialog(&DStack24,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvCursor__Fv()
 // line 783, offset 0x80158634
	/* begin block 1 */
		// Start line: 784
		// Start offset: 0x80158634
		// Variables:
	// 		int ItemX; // $s1
	// 		int ItemY; // $s0
	// 		int LoopX; // $a0
	// 		int LoopY; // $a1
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		struct TextDat *TData; // $s2

		/* begin block 1.1 */
			// Start line: 784
			// Start offset: 0x80158634

			/* begin block 1.1.1 */
				// Start line: 793
				// Start offset: 0x80158678

				/* begin block 1.1.1.1 */
					// Start line: 795
					// Start offset: 0x80158678

					/* begin block 1.1.1.1.1 */
						// Start line: 796
						// Start offset: 0x801586B0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 797
							// Start offset: 0x801586B0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 798
								// Start offset: 0x801586B8
								// Variables:
							// 		int GoldAmount; // $v1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x801586F4
							// End Line: 806
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x801586F4
						// End Line: 806
					/* end block 1.1.1.1.1 */
					// End offset: 0x801588A0
					// End Line: 835
				/* end block 1.1.1.1 */
				// End offset: 0x801588A0
				// End Line: 835
			/* end block 1.1.1 */
			// End offset: 0x801588A0
			// End Line: 835
		/* end block 1.1 */
		// End offset: 0x80158B54
		// End Line: 900
	/* end block 1 */
	// End offset: 0x80158BE4
	// End Line: 905

	/* begin block 2 */
		// Start line: 1675
	/* end block 2 */
	// End Line: 1676

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvCursor__Fv(void)

{
	byte bVar1;
	short sVar2;
	byte bVar3;
	uchar uVar4;
	POLY_FT4 *pPVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	TextDat *this;
	
	ItemH = 1;
	ItemW = 1;
	if ((&_pcurs)[myplr] < 0xc) {
		if ((&plr[myplr].InvList[0x27]._iPLMag)[InvCursPos] != '\0') {
			InvSetItemCurs__Fv();
			InvGetItemWH__Fi(InvCursPos + -0x19);
		}
		if (0x40 < InvCursPos) {
			ItemH = 1;
			ItemW = 1;
		}
		iVar6 = 0;
		if (0 < ItemH) {
			iVar8 = 0;
			do {
				iVar7 = 0;
				if (0 < ItemW) {
					do {
						(&InvSlotTable)[iVar8 + InvCursPos + iVar7] = '\x02';
						iVar7 = iVar7 + 1;
					} while (iVar7 < ItemW);
				}
				iVar6 = iVar6 + 1;
				iVar8 = iVar8 + 10;
			} while (iVar6 < ItemH);
		}
		if (((&_pcurs)[myplr] - 2U < 2) || ((&_pcurs)[myplr] == 4)) {
			switch(InvCursPos) {
			case 0:
				ItemW = 2;
				ItemH = ItemW;
				break;
			default:
				ItemW = 1;
				ItemH = 1;
				InvGetItemWH__Fi(InvCursPos + -0x19);
				break;
			case 4:
			case 5:
			case 6:
				ItemW = 1;
				ItemH = ItemW;
				break;
			case 7:
			case 0xd:
			case 0x13:
				ItemW = 2;
				ItemH = 3;
			}
			iVar8 = (&InvRect)[InvCursPos].X + 8;
			iVar6 = (&InvRect)[InvCursPos].Y + 8;
			if (ItemW == 2) {
				iVar8 = (&InvRect)[InvCursPos].X + 0x10;
			}
			if (ItemH == 2) {
				iVar6 = (&InvRect)[InvCursPos].Y + 0x10;
			}
			if (ItemH == 3) {
				iVar6 = iVar6 + 0x10;
			}
			PrintFt4__7TextDatiiiiii
								(InvGfxTData,(&_pcurs)[myplr] + -2,iVar8 + 0x80,(iVar6 - InvBackY) + 0x20,0,0x100,0)
			;
		}
	}
	else {
		sVar2 = plr[myplr].HoldItem._itype;
		if (sVar2 != -1) {
			if (sVar2 == 0xb) {
				iVar6 = plr[myplr].HoldItem._ivalue;
				if (iVar6 < 0x9c4) {
					uVar4 = '\x04';
					if (1000 < iVar6) {
						uVar4 = '\x05';
					}
				}
				else {
					uVar4 = '\x06';
				}
				plr[myplr].HoldItem._iCurs = uVar4;
			}
			bVar1 = plr[myplr].HoldItem._iCurs;
			ItemNo = ZEXT14(bVar1);
			iVar8 = (&InvRect)[InvCursPos].X;
			iVar6 = (&InvRect)[InvCursPos].Y;
			ItemW = ZEXT14(s__8010d524[ItemNo] >> 4);
			bVar3 = s__0000000000000000000_00000000000_8010d5d8[ItemNo] >> 4;
			ItemH = ZEXT14(bVar3);
			this = InvGfxTData;
			if (bVar1 < 0x32) {
				this = InvPanelTData;
			}
			if (((InvCursPos == 7) || (InvCursPos == 0x13)) || (InvCursPos == 0xd)) {
				if (s__8010d524[ItemNo] >> 4 == 1) {
					iVar8 = iVar8 + 8;
				}
				if (bVar3 == 1) {
					iVar6 = iVar6 + 0x10;
				}
				if (bVar3 == 2) {
					iVar6 = iVar6 + 8;
				}
			}
			pPVar5 = PrintFt4__7TextDatiiiiii
												 (this,InvGfxTable[ItemNo],iVar8 + 0x7a,(iVar6 - InvBackY) + 0x1a,0,
													itemot + 1,0);
			pPVar5->code = pPVar5->code & 0xfc;
			if (plr[myplr].HoldItem._iStatFlag == '\0') {
				pPVar5->r0 = -0x80;
				pPVar5->g0 = '\0';
				pPVar5->b0 = '\0';
			}
			else {
				pPVar5->r0 = -0x80;
				pPVar5->g0 = -0x80;
				pPVar5->b0 = -0x80;
			}
			pPVar5 = PrintFt4__7TextDatiiiiii
												 (this,InvGfxTable[ItemNo],iVar8 + 0x82,(iVar6 - InvBackY) + 0x22,0,
													itemot + 1,0);
			pPVar5->r0 = '\x10';
			pPVar5->g0 = '\x10';
			pPVar5->b0 = '\x10';
			pPVar5->code = pPVar5->code & 0xfe | 2;
			(&InvSlotTable)[InvCursPos] = (&InvSlotTable)[InvCursPos] | 2;
		}
	}
	if ((0x18 < InvCursPos) && (iVar6 = 0, 0 < ItemH)) {
		iVar8 = 0;
		do {
			iVar7 = 0;
			if (0 < ItemW) {
				do {
					(&InvSlotTable)[iVar8 + InvCursPos + iVar7] =
							 (&InvSlotTable)[iVar8 + InvCursPos + iVar7] | 2;
					iVar7 = iVar7 + 1;
				} while (iVar7 < ItemW);
			}
			iVar6 = iVar6 + 1;
			iVar8 = iVar8 + 10;
		} while (iVar6 < ItemH);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvMsg__Fv()
 // line 910, offset 0x80158c00
	/* begin block 1 */
		// Start line: 911
		// Start offset: 0x80158C00
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	// 		struct RECT InfoRect; // stack offset -48
	// 		int InfoY; // $v0
	// 		int InfoW; // $v0
	// 		int InfoH; // $s4
	// 		struct Dialog InvBack; // stack offset -40
	// 		int OldOt; // $s1
	/* end block 1 */
	// End offset: 0x80158DA8
	// End Line: 959

	/* begin block 2 */
		// Start line: 1945
	/* end block 2 */
	// End Line: 1946

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvMsg__Fv(void)

{
	int Depth;
	POLY_FT4 *pPVar1;
	RECT local_30;
	Dialog DStack40;
	
	__6Dialog(&DStack40);
	Depth = SetOTpos__5CFonti(&MediumFont,0xfa);
	SetOTpos__5CFonti(&MediumFont,Depth + -1);
	PRIM_FullScreen__Fi(Depth);
	local_30.x = 0x80;
	local_30.y = 0x81;
	local_30.w = 0xb0;
	local_30.h = 0x4e;
	if (invflag != '\0') {
		DrawInfoBox__FP4RECT(&local_30);
	}
	SetOTpos__6Dialogi(&DStack40,0xf9);
	SetBack__6Dialogi(&DStack40,5);
	SetRGB__6DialogUcUcUc(&DStack40,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack40,0x80,0x80,0xb0,0x50);
	pPVar1 = PrintFt4__7TextDatiiiiii(InvPanelTData,0x94,0,0,0,Depth,0);
	pPVar1->y2 = 0xd0;
	pPVar1->y3 = 0xd0;
	pPVar1->r0 = ' ';
	pPVar1->g0 = ' ';
	pPVar1->b0 = ' ';
	pPVar1->x1 = 0x130;
	pPVar1->x3 = 0x130;
	pPVar1->x0 = 0x80;
	pPVar1->y0 = 0x80;
	pPVar1->y1 = 0x80;
	pPVar1->x2 = 0x80;
	pPVar1->tpage = pPVar1->tpage | 0x40;
	pPVar1->u1 = pPVar1->u0 + '\x01';
	pPVar1->u3 = pPVar1->u0 + '\x01';
	pPVar1->v2 = pPVar1->v0 + '\x01';
	pPVar1->v3 = pPVar1->v0 + '\x01';
	pPVar1->code = pPVar1->code & 0xfe | 2;
	SetOTpos__5CFonti(&MediumFont,Depth);
	PRIM_Clip__FP4RECTi(&local_30,Depth);
	___6Dialog(&DStack40,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvHelpTxt__Fv()
 // line 966, offset 0x80158dcc
	/* begin block 1 */
		// Start line: 967
		// Start offset: 0x80158DCC
		// Variables:
	// 		char TempStr[128]; // stack offset -136
	/* end block 1 */
	// End offset: 0x801590A0
	// End Line: 1022

	/* begin block 2 */
		// Start line: 2113
	/* end block 2 */
	// End Line: 2114

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvHelpTxt__Fv(void)

{
	LANG_TYPE LVar1;
	char *pcVar2;
	char *pcVar3;
	char *__format;
	int iVar4;
	text_strs StrId;
	char local_88 [128];
	
	local_88[0] = '\0';
	LVar1 = LANG_GetLang__Fv();
	if (LVar1 == LANG_FRENCH) {
		iVar4 = (&_pcurs)[myplr];
		if (iVar4 == 2) {
			pcVar2 = GetStr__Fi(STR___BACK_817);
			pcVar3 = GetStr__Fi(STR_IDENTIFY_520);
			__format = "%s  _ %s";
		}
		else {
			if (iVar4 == 3) {
				pcVar2 = GetStr__Fi(STR___BACK_817);
				pcVar3 = GetStr__Fi(STR_REPAIR_858);
				__format = "%s  _ %s";
			}
			else {
				if (iVar4 == 4) {
					pcVar2 = GetStr__Fi(STR___BACK_817);
					pcVar3 = GetStr__Fi(STR_RECHARGE_844);
					__format = "%s  _ %s";
				}
				else {
					if (iVar4 < 0xc) {
LAB_80158f9c:
						__format = GetStr__Fi(STR___SELECT_____BACK_1254);
						sprintf(local_88,(char *)&PTR_DAT_8011c320,__format);
						goto LAB_80158fb8;
					}
					pcVar2 = GetStr__Fi(STR___SELECT_____BACK_1254);
					pcVar3 = GetStr__Fi(STR_DROP_285);
					__format = "%s  < %s";
				}
			}
		}
	}
	else {
		iVar4 = (&_pcurs)[myplr];
		if (iVar4 == 2) {
			pcVar2 = GetStr__Fi(STR_IDENTIFY_520);
			pcVar3 = GetStr__Fi(STR___BACK_817);
			__format = "_ %s  %s";
		}
		else {
			if (iVar4 == 3) {
				pcVar2 = GetStr__Fi(STR_REPAIR_858);
				pcVar3 = GetStr__Fi(STR___BACK_817);
				__format = "_ %s  %s";
			}
			else {
				if (iVar4 == 4) {
					pcVar2 = GetStr__Fi(STR_RECHARGE_844);
					pcVar3 = GetStr__Fi(STR___BACK_817);
					__format = "_ %s  %s";
				}
				else {
					if (iVar4 < 0xc) goto LAB_80158f9c;
					pcVar2 = GetStr__Fi(STR_DROP_285);
					pcVar3 = GetStr__Fi(STR___SELECT_____BACK_1254);
					__format = "< %s  %s";
				}
			}
		}
	}
	sprintf(local_88,__format,pcVar2,pcVar3);
LAB_80158fb8:
	if (InvBackY == 0) {
		SetChar__5CFontiUs(&MediumFont,0x2e,0x80);
		StrId = STR_PACK_766;
	}
	else {
		SetChar__5CFontiUs(&MediumFont,0x2e,0x7f);
		StrId = STR_EQUIP_306;
	}
	__format = GetStr__Fi(StrId);
	sprintf(local_88,"%s  . %s ",local_88,__format);
	if (InvPageFlag != 0) {
		__format = GetStr__Fi(STR_MORE_676);
		sprintf(local_88,"%s  | %s ",local_88,__format);
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,0xe0,local_88,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,
						 (uint)WHITEB);
	SetChar__5CFontiUs(&MediumFont,0x2e,0x6d);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInv__Fv()
 // line 1041, offset 0x801590b4
	/* begin block 1 */
		// Start line: 1042
		// Start offset: 0x801590B4
	/* end block 1 */
	// End offset: 0x801590EC
	// End Line: 1049

	/* begin block 2 */
		// Start line: 2264
	/* end block 2 */
	// End Line: 2265

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInv__Fv(void)

{
	if (InvOn == (void *)0x0) {
		InvOn = &DAT_00000001;
		InvPageFlag = 0;
		InvPageNo = 0;
		TSK_AddTask(0,DrawInvTSK__FP4TASK,0x1000,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 1053, offset 0x801590fc
	/* begin block 1 */
		// Start line: 1054
		// Start offset: 0x801590FC
		// Variables:
	// 		int omp; // $s6
	// 		int osel; // $s7
	// 		struct CBlocks *BgBlocks; // $s5
	// 		int ThisIsShit; // $s1
	// 		int OldPad; // $s4

		/* begin block 1.1 */
			// Start line: 1135
			// Start offset: 0x8015938C

			/* begin block 1.1.1 */
				// Start line: 1140
				// Start offset: 0x801593A4
				// Variables:
			// 		int OldOt; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8015949C
			// End Line: 1162
		/* end block 1.1 */
		// End offset: 0x80159558
		// End Line: 1205
	/* end block 1 */
	// End offset: 0x801596E4
	// End Line: 1272

	/* begin block 2 */
		// Start line: 2291
	/* end block 2 */
	// End Line: 2292

void DrawInvTSK__FP4TASK(TASK *T)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	uchar uVar5;
	CPad *this;
	int Id;
	CBlocks *this_00;
	int OT;
	
	iVar4 = myplr;
	iVar3 = sel_data;
	if ((invflag == '\0') || (options_pad == -1)) {
		options_pad = -1;
		InvOn = (void *)0x0;
		invflag = '\0';
		return;
	}
	myplr = options_pad;
	this = PAD_GetPad__FiUc(options_pad,'\0');
	Flush__4CPad(this);
	CDWAIT = &DAT_00000001;
	PauseMode = '\x01';
	GLUE_SuspendGame__Fv();
	if (sghMusic != (SFXHDR *)0x0) {
		Id = sghMusic->sec_num;
		while (Id < 4) {
			PauseMode = '\x01';
			GLUE_SuspendGame__Fv();
			TSK_Sleep(1);
			Id = sghMusic->sec_num;
		}
	}
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	TSK_Sleep(1);
	stream_stop__Fv();
	while (SFXHDR_800b9c64.used != '\0') {
		stream_stop__Fv();
		TSK_Sleep(1);
	}
	GLUE_SuspendGame__Fv();
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	TSK_Sleep(1);
	VID_SetDBuffer__Fb(&DAT_00000001);
	if (_spselflag2 != (TASK *)0x0) {
		TSK_Kill(_spselflag2);
	}
	if (PTR_8011b654 != (TASK *)0x0) {
		TSK_Kill(PTR_8011b654);
	}
	_spselflag2 = (TASK *)0x0;
	PTR_8011b654 = (TASK *)0x0;
	_trigflag[sel_data] = '\0';
	ClrCursor__Fi(0);
	ClrCursor__Fi(1);
	this_00 = BL_GetCurrentBlocks__Fv();
	if (leveltype == '\0') {
		DumpMonsters__7CBlocks(this_00);
	}
	if (InvGfxTData == (TextDat *)0x0) {
		InvGfxTData = GM_UseTexData__Fi(0xcf);
	}
	if ((&_pcurs)[myplr] == 9) {
		(&_pcurs)[myplr] = 1;
	}
	bVar1 = true;
	InvSetItemCurs__Fv();
	VID_SetDBuffer__Fb((void *)0x0);
	TSK_Sleep(1);
	Id = options_pad;
	CDWAIT = (void *)0x0;
	PauseMode = '\0';
LAB_8015938c:
	do {
		bVar2 = !bVar1;
		bVar1 = false;
		if (bVar2) {
			ClearPanel__Fv();
			stream_stop__Fv();
			while (SFXHDR_800b9c64.used != '\0') {
				stream_stop__Fv();
				TSK_Sleep(1);
			}
			VID_SetDBuffer__Fb(&DAT_00000001);
			CDWAIT = &DAT_00000001;
			PauseMode = '\x01';
			GM_FinishedUsing__FP7TextDat(InvGfxTData);
			InvGfxTData = (TextDat *)0x0;
			if (leveltype == '\0') {
				SetTownersGraphics__7CBlocks(this_00);
				Id = 0xcd;
			}
			else {
				Id = 0xd0;
			}
			GM_ForceTpLoad__Fi(Id);
			CDWAIT = (void *)0x0;
			PauseMode = '\0';
			VID_SetDBuffer__Fb((void *)0x0);
			ClearPanel__Fv();
			InvOn = (void *)0x0;
			if ((options_pad < 0) || ((&ScrollFlag)[options_pad] == 0)) {
				(&_pcurs)[myplr] = 1;
			}
			else {
				PostGamePad__Fiiii(5,0,0,0);
				options_pad = -1;
			}
			ClrCursor__Fi(0);
			ClrCursor__Fi(1);
			invflag = '\0';
			sel_data = iVar3;
			myplr = iVar4;
			GLUE_ResumeGame__Fv();
			GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
			GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
			GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
			return;
		}
		invflag = '\x01';
		options_pad = Id;
		do {
			if ((invflag == '\0') || (options_pad < 0)) goto LAB_8015949c;
			OT = SetOTpos__5CFonti(&MediumFont,0xfc);
			myplr = options_pad;
			sel_data = options_pad;
			ControlInv__Fv();
			if (options_pad != -1) {
				myplr = options_pad;
				sel_data = options_pad;
				DoThatDrawInv__Fv();
			}
			SetOTpos__5CFonti(&MediumFont,OT);
			GLUE_SuspendGame__Fv();
			TSK_Sleep(1);
		} while (0 < plr[options_pad]._pHitPoints >> 6);
		PostGamePad__Fiiii(5,0,0,0);
		options_pad = -1;
LAB_8015949c:
		OT = (&_pcurs)[myplr];
		if ((OT - 2U < 2) || (OT == 4)) {
			(&_pcurs)[myplr] = 1;
		}
	} while ((&_pcurs)[myplr] < 0xc);
	uVar5 = TryInvPut__Fv();
	if (uVar5 == '\0') goto code_r0x8015951c;
	goto LAB_80159558;
code_r0x8015951c:
	uVar5 = StoreAutoPlace__Fv();
	if (uVar5 == '\0') {
		if (numitems < 0x7a) {
LAB_80159558:
			NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
		}
		else {
			PlaySFX__Fi(IS_TITERR);
			bVar1 = true;
		}
	}
	goto LAB_8015938c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoThatDrawInv__Fv()
 // line 1280, offset 0x80159714
	/* begin block 1 */
		// Start line: 1281
		// Start offset: 0x80159714
		// Variables:
	// 		int Loop; // $s0
	// 		int ii; // $v1
	// 		int ItemX; // $t0
	// 		int ItemY; // $a1
	// 		int ItemNo; // $a2
	// 		struct RECT ClipRect; // stack offset -32
	/* end block 1 */
	// End offset: 0x80159F04
	// End Line: 1514

	/* begin block 2 */
		// Start line: 2777
	/* end block 2 */
	// End Line: 2778

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoThatDrawInv__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	int ItemY;
	uint ItemNo;
	int ItemX;
	int ItemX_00;
	int iVar3;
	RECT local_20;
	
	PRIM_FullScreen__Fi(0xfb);
	InvPageFlag = 0;
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	ItemX_00 = 0x48;
	puVar1 = &UCHAR_00h_8010d6c8;
	do {
		*puVar1 = '\0';
		ItemX_00 = ItemX_00 + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < ItemX_00);
	DrawInvBack__Fv();
	local_20.x = 0x7e;
	local_20.y = 0x1e;
	local_20.w = 0xb8;
	local_20.h = 0x60;
	PRIM_Clip__FP4RECTi(&local_20,clipit);
	DrawInvStats__Fv();
	DrawInvMsg__Fv();
	DrawInvHelpTxt__Fv();
	if (plr[myplr].InvBody[0]._itype != -1) {
		InvSlotTable = '\x01';
		InvDrawItem__FiiiUci
							(InvRect.X,InvRect.Y,(uint)plr[myplr].InvBody[0]._iCurs,
							 plr[myplr].InvBody[0]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[1]._itype != -1) {
		UCHAR_00h_8010d684 = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_8010d050.X,InvXY_8010d050.Y,(uint)plr[myplr].InvBody[1]._iCurs,
							 plr[myplr].InvBody[1]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[2]._itype != -1) {
		UCHAR_00h_8010d685 = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_8010d058.X,InvXY_8010d058.Y,(uint)plr[myplr].InvBody[2]._iCurs,
							 plr[myplr].InvBody[2]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[3]._itype != -1) {
		UCHAR_00h_8010d686 = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_8010d060.X,InvXY_8010d060.Y,(uint)plr[myplr].InvBody[3]._iCurs,
							 plr[myplr].InvBody[3]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[4]._itype != -1) {
		s__8010d687[0] = '\x01';
		ItemNo = (uint)plr[myplr].InvBody[4]._iCurs;
		ItemX_00 = InvXY_ARRAY_8010d068[0].X;
		if (s__8010d524[ItemNo] == '\x10') {
			ItemX_00 = InvXY_ARRAY_8010d068[0].X + 8;
		}
		ItemY = InvXY_ARRAY_8010d068[0].Y;
		if (s__0000000000000000000_00000000000_8010d5d8[ItemNo] == ' ') {
			ItemY = InvXY_ARRAY_8010d068[0].Y + 8;
		}
		InvDrawItem__FiiiUci(ItemX_00,ItemY,ItemNo,plr[myplr].InvBody[4]._iStatFlag == '\x01',0);
		if (plr[myplr].InvBody[4]._iLoc == '\x02') {
			s__8010d68d[0] = '\x01';
			ItemNo = (uint)plr[myplr].InvBody[4]._iCurs;
			ItemX_00 = InvXY_ARRAY_8010d098[0].X;
			if (s__8010d524[ItemNo] == '\x10') {
				ItemX_00 = InvXY_ARRAY_8010d098[0].X + 8;
			}
			ItemY = InvXY_ARRAY_8010d098[0].Y;
			if (s__0000000000000000000_00000000000_8010d5d8[ItemNo] == ' ') {
				ItemY = InvXY_ARRAY_8010d098[0].Y + 8;
			}
			InvDrawItem__FiiiUci(ItemX_00,ItemY,ItemNo,plr[myplr].InvBody[5]._iStatFlag == '\x01',1);
		}
	}
	if (plr[myplr].InvBody[5]._itype != -1) {
		s__8010d68d[0] = '\x01';
		ItemNo = (uint)plr[myplr].InvBody[5]._iCurs;
		ItemX_00 = InvXY_ARRAY_8010d098[0].X;
		if (s__8010d524[ItemNo] == '\x10') {
			ItemX_00 = InvXY_ARRAY_8010d098[0].X + 8;
		}
		ItemY = InvXY_ARRAY_8010d098[0].Y;
		if (s__0000000000000000000_00000000000_8010d5d8[ItemNo] == ' ') {
			ItemY = InvXY_ARRAY_8010d098[0].Y + 8;
		}
		InvDrawItem__FiiiUci(ItemX_00,ItemY,ItemNo,plr[myplr].InvBody[5]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[6]._itype != -1) {
		s__8010d693[0] = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_ARRAY_8010d0c8[0].X,InvXY_ARRAY_8010d0c8[0].Y,
							 (uint)plr[myplr].InvBody[6]._iCurs,plr[myplr].InvBody[6]._iStatFlag == '\x01',0);
	}
	ItemX_00 = 0;
	ItemY = 200;
	iVar3 = 0x19;
	do {
		*(bool *)(&InvSlotTable + iVar3) = *(char *)(myplr * 0x19e8 + -0x7ff24540 + ItemX_00) != '\0';
		iVar2 = (int)*(char *)(myplr * 0x19e8 + -0x7ff24540 + ItemX_00);
		if ((0 < iVar2) && (iVar2 <= plr[myplr]._pNumInv)) {
			ItemNo = (uint)plr[myplr].InvList[iVar2 + -1]._iCurs;
			InvDrawItem__FiiiUci
								(*(int *)((int)&InvRect.X + ItemY),
								 (*(int *)((int)&InvRect.Y + ItemY) + 0x10) -
								 (uint)s__0000000000000000000_00000000000_8010d5d8[ItemNo],ItemNo,
								 plr[myplr].InvList[iVar2 + -1]._iStatFlag == '\x01',0);
		}
		ItemY = ItemY + 8;
		ItemX_00 = ItemX_00 + 1;
		iVar3 = iVar3 + 1;
	} while (ItemX_00 < 0x28);
	ItemX_00 = 0;
	iVar3 = 0x208;
	iVar2 = 0x41;
	ItemY = 0;
	do {
		if (*(short *)((int)&plr[myplr].SpdList[0]._itype + ItemY) != -1) {
			ItemX = *(int *)((int)&InvRect.X + iVar3);
			(&InvSlotTable)[iVar2] = '\x01';
			InvDrawItem__FiiiUci
								(ItemX,*(int *)((int)&InvRect.Y + iVar3),
								 (uint)(&plr[myplr].SpdList[0]._iCurs)[ItemY],
								 (&plr[myplr].SpdList[0]._iStatFlag)[ItemY] == '\x01',0);
		}
		iVar3 = iVar3 + 8;
		iVar2 = iVar2 + 1;
		ItemX_00 = ItemX_00 + 1;
		ItemY = ItemY + 0x6c;
	} while (ItemX_00 < 8);
	DrawInvCursor__Fv();
	InvDrawSlots__Fv();
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ AutoPlace__FiiiiUc(int pnum /*$t4*/, int ii /*$t6*/, int sx /*$a2*/, int sy /*$a3*/, int saveflag /*stack 16*/)
 // line 1518, offset 0x80159f24
	/* begin block 1 */
		// Start line: 1519
		// Start offset: 0x80159F24
		// Variables:
	// 		int i; // $a1
	// 		int j; // $t3
	// 		int xx; // $a0
	// 		int yy; // $t2
	// 		unsigned char done; // $s0
	/* end block 1 */
	// End offset: 0x8015A234
	// End Line: 1566

	/* begin block 2 */
		// Start line: 3297
	/* end block 2 */
	// End Line: 3298

uchar AutoPlace__FiiiiUc(int pnum,int ii,int sx,int sy,int saveflag)

{
	bool bVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar3 = ii >> 0x1f;
	iVar4 = ii / 10 + iVar3;
	iVar11 = (iVar4 - iVar3) * 10;
	bVar1 = true;
	if (iVar11 < 0) {
		iVar11 = 0;
	}
	iVar12 = 0;
	if (0 < sy) {
		do {
			if (!bVar1) {
				return bVar1;
			}
			if (0x27 < iVar11) {
				bVar1 = false;
			}
			iVar5 = ii + (iVar4 - iVar3) * -10;
			if (iVar5 < 0) {
				iVar5 = 0;
			}
			iVar6 = 0;
			if (0 < sx) {
				do {
					if (!bVar1) break;
					if (iVar5 < 10) {
						bVar1 = *(char *)(pnum * 0x19e8 + -0x7ff24540 + iVar5 + iVar11) == '\0';
					}
					else {
						bVar1 = false;
					}
					iVar6 = iVar6 + 1;
					iVar5 = iVar5 + 1;
				} while (iVar6 < sx);
			}
			iVar12 = iVar12 + 1;
			iVar11 = iVar11 + 10;
		} while (iVar12 < sy);
	}
	if ((bVar1) && ((char)saveflag != '\0')) {
		piVar2 = (int *)(plr[pnum]._pNumInv * 0x6c + pnum * 0x19e8 + -0x7ff25624);
		pIVar9 = &plr[pnum].HoldItem;
		do {
			pIVar8 = pIVar9;
			piVar7 = piVar2;
			iVar4 = pIVar8->_iVMult1;
			iVar11 = pIVar8->_iVAdd2;
			iVar12 = pIVar8->_iVMult2;
			*piVar7 = pIVar8->_iVAdd1;
			piVar7[1] = iVar4;
			piVar7[2] = iVar11;
			piVar7[3] = iVar12;
			pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
			piVar2 = piVar7 + 4;
		} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		iVar4 = pIVar8->_ivalue;
		iVar11 = pIVar8->_iIvalue;
		piVar7[4] = pIVar9->_iVAdd1;
		piVar7[5] = iVar4;
		piVar7[6] = iVar11;
		plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
		iVar4 = ii / 10 + iVar3;
		iVar11 = (iVar4 - iVar3) * 10;
		if (iVar11 < 0) {
			iVar11 = 0;
		}
		iVar12 = 0;
		if (0 < sy) {
			do {
				iVar5 = ii + (iVar4 - iVar3) * -10;
				if (iVar5 < 0) {
					iVar5 = 0;
				}
				iVar6 = 0;
				if (0 < sx) {
					iVar10 = pnum * 0x19e8 + -0x7ff24540;
					iVar5 = iVar5 + iVar11;
					do {
						if ((iVar6 == 0) && (iVar12 == sy + -1)) {
							*(undefined *)(iVar10 + iVar5) = (char)plr[pnum]._pNumInv;
						}
						else {
							*(char *)(iVar10 + iVar5) = -(char)plr[pnum]._pNumInv;
						}
						iVar6 = iVar6 + 1;
						iVar5 = iVar5 + 1;
					} while (iVar6 < sx);
				}
				iVar12 = iVar12 + 1;
				iVar11 = iVar11 + 10;
			} while (iVar12 < sy);
		}
		CalcPlrScrolls__Fi(pnum);
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SpecialAutoPlace__FiiiiUc(int pnum /*$t4*/, int ii /*$t6*/, int sx /*$a2*/, int sy /*$a3*/, int saveflag /*stack 16*/)
 // line 1570, offset 0x8015a24c
	/* begin block 1 */
		// Start line: 1571
		// Start offset: 0x8015A24C
		// Variables:
	// 		int i; // $a1
	// 		int j; // $t3
	// 		int xx; // $a0
	// 		int yy; // $t2
	// 		unsigned char done; // $s0
	/* end block 1 */
	// End offset: 0x8015A5D8
	// End Line: 1635

	/* begin block 2 */
		// Start line: 3416
	/* end block 2 */
	// End Line: 3417

uchar SpecialAutoPlace__FiiiiUc(int pnum,int ii,int sx,int sy,int saveflag)

{
	bool bVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar3 = ii >> 0x1f;
	iVar4 = ii / 10 + iVar3;
	iVar11 = (iVar4 - iVar3) * 10;
	bVar1 = true;
	if (iVar11 < 0) {
		iVar11 = 0;
	}
	iVar12 = 0;
	if (0 < sy) {
		do {
			if (!bVar1) goto LAB_8015a374;
			if (0x27 < iVar11) {
				bVar1 = false;
			}
			iVar5 = ii + (iVar4 - iVar3) * -10;
			if (iVar5 < 0) {
				iVar5 = 0;
			}
			iVar6 = 0;
			if (0 < sx) {
				do {
					if (!bVar1) break;
					if (iVar5 < 10) {
						bVar1 = *(char *)(pnum * 0x19e8 + -0x7ff24540 + iVar5 + iVar11) == '\0';
					}
					else {
						bVar1 = false;
					}
					iVar6 = iVar6 + 1;
					iVar5 = iVar5 + 1;
				} while (iVar6 < sx);
			}
			iVar12 = iVar12 + 1;
			iVar11 = iVar11 + 10;
		} while (iVar12 < sy);
	}
	if (!bVar1) {
LAB_8015a374:
		if ((sx < 2) && (sy < 2)) {
			iVar11 = 0;
			iVar4 = pnum * 0x19e8;
			do {
				iVar11 = iVar11 + 1;
				if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar4) == -1) {
					bVar1 = true;
					break;
				}
				iVar4 = iVar4 + 0x6c;
			} while (iVar11 < 8);
		}
		else {
			bVar1 = false;
		}
		if (!bVar1) {
			return bVar1;
		}
	}
	if ((char)saveflag != '\0') {
		piVar2 = (int *)(plr[pnum]._pNumInv * 0x6c + pnum * 0x19e8 + -0x7ff25624);
		pIVar9 = &plr[pnum].HoldItem;
		do {
			pIVar8 = pIVar9;
			piVar7 = piVar2;
			iVar4 = pIVar8->_iVMult1;
			iVar11 = pIVar8->_iVAdd2;
			iVar12 = pIVar8->_iVMult2;
			*piVar7 = pIVar8->_iVAdd1;
			piVar7[1] = iVar4;
			piVar7[2] = iVar11;
			piVar7[3] = iVar12;
			pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
			piVar2 = piVar7 + 4;
		} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		iVar4 = pIVar8->_ivalue;
		iVar11 = pIVar8->_iIvalue;
		piVar7[4] = pIVar9->_iVAdd1;
		piVar7[5] = iVar4;
		piVar7[6] = iVar11;
		plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
		iVar4 = ii / 10 + iVar3;
		iVar11 = (iVar4 - iVar3) * 10;
		if (iVar11 < 0) {
			iVar11 = 0;
		}
		iVar12 = 0;
		if (0 < sy) {
			do {
				iVar5 = ii + (iVar4 - iVar3) * -10;
				if (iVar5 < 0) {
					iVar5 = 0;
				}
				iVar6 = 0;
				if (0 < sx) {
					iVar10 = pnum * 0x19e8 + -0x7ff24540;
					iVar5 = iVar5 + iVar11;
					do {
						if ((iVar6 == 0) && (iVar12 == sy + -1)) {
							*(undefined *)(iVar10 + iVar5) = (char)plr[pnum]._pNumInv;
						}
						else {
							*(char *)(iVar10 + iVar5) = -(char)plr[pnum]._pNumInv;
						}
						iVar6 = iVar6 + 1;
						iVar5 = iVar5 + 1;
					} while (iVar6 < sx);
				}
				iVar12 = iVar12 + 1;
				iVar11 = iVar11 + 10;
			} while (iVar12 < sy);
		}
		CalcPlrScrolls__Fi(pnum);
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GoldAutoPlace__Fi(int pnum /*$s2*/)
 // line 1639, offset 0x8015a5f0
	/* begin block 1 */
		// Start line: 1640
		// Start offset: 0x8015A5F0
		// Variables:
	// 		int i; // $s0
	// 		int ii; // $s3
	// 		int xx; // $t2
	// 		int yy; // $t0
	// 		long gt; // $v1
	// 		unsigned char done; // $a2
	/* end block 1 */
	// End offset: 0x8015AAA0
	// End Line: 1735

	/* begin block 2 */
		// Start line: 3574
	/* end block 2 */
	// End Line: 3575

uchar GoldAutoPlace__Fi(int pnum)

{
	bool bVar1;
	int *piVar2;
	uchar uVar3;
	long lVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	int iVar12;
	int iVar13;
	
	bVar1 = false;
	iVar12 = 0;
	if (0 < plr[pnum]._pNumInv) {
		iVar13 = 0;
		do {
			if (*(short *)((int)&plr[pnum].InvList[0]._itype + iVar13) == 0xb) {
				iVar5 = plr[pnum].HoldItem._ivalue + *(int *)((int)&plr[pnum].InvList[0]._ivalue + iVar13);
				if (iVar5 < 0x1389) {
					*(int *)((int)&plr[pnum].InvList[0]._ivalue + iVar13) = iVar5;
					if (iVar5 < 0x9c4) {
						uVar3 = '\x04';
						if (1000 < iVar5) {
							uVar3 = '\x05';
						}
					}
					else {
						uVar3 = '\x06';
					}
					(&plr[pnum].InvList[0]._iCurs)[iVar13] = uVar3;
					lVar4 = CalculateGold__Fi(pnum);
					plr[pnum]._pGold = lVar4;
					bVar1 = true;
				}
			}
			iVar12 = iVar12 + 1;
			iVar13 = iVar13 + 0x6c;
		} while ((iVar12 < plr[pnum]._pNumInv) && (!bVar1));
	}
	if (!bVar1) {
		iVar12 = 0;
		if (0 < plr[pnum]._pNumInv) {
			iVar13 = 0;
			do {
				if ((*(short *)((int)&plr[pnum].InvList[0]._itype + iVar13) == 0xb) &&
					 (iVar5 = *(int *)((int)&plr[pnum].InvList[0]._ivalue + iVar13), iVar5 < 5000)) {
					iVar5 = iVar5 + plr[pnum].HoldItem._ivalue;
					if (iVar5 < 0x1389) {
						*(int *)((int)&plr[pnum].InvList[0]._ivalue + iVar13) = iVar5;
						if (iVar5 < 0x9c4) {
							uVar3 = '\x04';
							if (1000 < iVar5) {
								uVar3 = '\x05';
							}
						}
						else {
							uVar3 = '\x06';
						}
						(&plr[pnum].InvList[0]._iCurs)[iVar13] = uVar3;
						lVar4 = CalculateGold__Fi(pnum);
						plr[pnum]._pGold = lVar4;
						bVar1 = true;
					}
				}
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + 0x6c;
			} while ((iVar12 < plr[pnum]._pNumInv) && (!bVar1));
		}
		if (!bVar1) {
			iVar13 = 0x27;
			iVar12 = pnum * 0x19e8;
			do {
				if (*(char *)(iVar13 + iVar12 + -0x7ff24540) == '\0') {
					iVar5 = plr[pnum]._pNumInv;
					piVar2 = (int *)(iVar5 * 0x6c + iVar12 + -0x7ff25624);
					pIVar11 = &plr[pnum].HoldItem;
					do {
						pIVar10 = pIVar11;
						piVar9 = piVar2;
						iVar6 = pIVar10->_iVMult1;
						iVar7 = pIVar10->_iVAdd2;
						iVar8 = pIVar10->_iVMult2;
						*piVar9 = pIVar10->_iVAdd1;
						piVar9[1] = iVar6;
						piVar9[2] = iVar7;
						piVar9[3] = iVar8;
						pIVar11 = (ItemStruct *)&pIVar10->_iSeed;
						piVar2 = piVar9 + 4;
					} while (pIVar11 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
					iVar6 = pIVar10->_ivalue;
					iVar7 = pIVar10->_iIvalue;
					piVar9[4] = pIVar11->_iVAdd1;
					piVar9[5] = iVar6;
					piVar9[6] = iVar7;
					plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
					*(undefined *)(iVar12 + -0x7ff24540 + iVar13) = (char)plr[pnum]._pNumInv;
					iVar6 = plr[pnum].HoldItem._ivalue;
					if (iVar6 < 0x9c4) {
						if (iVar6 < 0x3e9) {
							iVar5 = iVar5 * 0x6c + iVar12;
							uVar3 = '\x04';
						}
						else {
							iVar5 = iVar5 * 0x6c + iVar12;
							uVar3 = '\x05';
						}
					}
					else {
						iVar5 = iVar5 * 0x6c + iVar12;
						uVar3 = '\x06';
					}
					(&plr[0].InvList[0]._iCurs)[iVar5] = uVar3;
					lVar4 = CalculateGold__Fi(pnum);
					plr[pnum]._pGold = lVar4;
					bVar1 = true;
				}
				iVar13 = iVar13 + -1;
			} while ((-1 < iVar13) && (!bVar1));
		}
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WeaponAutoPlace__Fi(int pnum /*$a0*/)
 // line 1739, offset 0x8015aac8
	/* begin block 1 */
		// Start line: 1740
		// Start offset: 0x8015AAC8
	/* end block 1 */
	// End offset: 0x8015AD48
	// End Line: 1767

	/* begin block 2 */
		// Start line: 3782
	/* end block 2 */
	// End Line: 3783

uchar WeaponAutoPlace__Fi(int pnum)

{
	int iVar1;
	int iVar2;
	int iVar3;
	ItemStruct *pIVar4;
	ItemStruct *pIVar5;
	
	if (plr[pnum].HoldItem._iLoc == '\x02') {
		if (plr[pnum].InvBody[4]._itype != -1) {
			return '\0';
		}
		if (plr[pnum].InvBody[5]._itype != -1) {
			return '\0';
		}
		NetSendCmdChItem__FUcUc('\x01','\x04');
		pIVar5 = plr[pnum].InvBody + 4;
		pIVar4 = &plr[pnum].HoldItem;
		do {
			iVar1 = pIVar4->_iVMult1;
			iVar2 = pIVar4->_iVAdd2;
			iVar3 = pIVar4->_iVMult2;
			pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
			pIVar5->_iVMult1 = iVar1;
			pIVar5->_iVAdd2 = iVar2;
			pIVar5->_iVMult2 = iVar3;
			pIVar4 = (ItemStruct *)&pIVar4->_iSeed;
			pIVar5 = (ItemStruct *)&pIVar5->_iSeed;
		} while (pIVar4 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
	}
	else {
		if ((plr[pnum].InvBody[4]._itype != -1) && (plr[pnum].InvBody[4]._iClass == '\x01')) {
			return '\0';
		}
		if ((plr[pnum].InvBody[5]._itype != -1) && (plr[pnum].InvBody[5]._iClass == '\x01')) {
			return '\0';
		}
		if (plr[pnum].InvBody[4]._itype == -1) {
			NetSendCmdChItem__FUcUc('\x01','\x04');
			pIVar5 = plr[pnum].InvBody + 4;
			pIVar4 = &plr[pnum].HoldItem;
			do {
				iVar1 = pIVar4->_iVMult1;
				iVar2 = pIVar4->_iVAdd2;
				iVar3 = pIVar4->_iVMult2;
				pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
				pIVar5->_iVMult1 = iVar1;
				pIVar5->_iVAdd2 = iVar2;
				pIVar5->_iVMult2 = iVar3;
				pIVar4 = (ItemStruct *)&pIVar4->_iSeed;
				pIVar5 = (ItemStruct *)&pIVar5->_iSeed;
			} while (pIVar4 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		}
		else {
			if (plr[pnum].InvBody[5]._itype != -1) {
				return '\0';
			}
			if (plr[pnum].InvBody[4]._iLoc == '\x02') {
				return '\0';
			}
			NetSendCmdChItem__FUcUc('\x01','\x05');
			pIVar5 = plr[pnum].InvBody + 5;
			pIVar4 = &plr[pnum].HoldItem;
			do {
				iVar1 = pIVar4->_iVMult1;
				iVar2 = pIVar4->_iVAdd2;
				iVar3 = pIVar4->_iVMult2;
				pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
				pIVar5->_iVMult1 = iVar1;
				pIVar5->_iVAdd2 = iVar2;
				pIVar5->_iVMult2 = iVar3;
				pIVar4 = (ItemStruct *)&pIVar4->_iSeed;
				pIVar5 = (ItemStruct *)&pIVar5->_iSeed;
			} while (pIVar4 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		}
	}
	iVar1 = pIVar4->_iVMult1;
	iVar2 = pIVar4->_iVAdd2;
	pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
	pIVar5->_iVMult1 = iVar1;
	pIVar5->_iVAdd2 = iVar2;
	return '\x01';
}



// decompiled code
// original method signature: 
// int /*$ra*/ SwapItem__FP10ItemStructT0(struct ItemStruct *a /*$t0*/, struct ItemStruct *b /*$t1*/)
 // line 1772, offset 0x8015ad5c
	/* begin block 1 */
		// Start line: 1773
		// Start offset: 0x8015AD5C
		// Variables:
	// 		struct ItemStruct h; // stack offset -112
	/* end block 1 */
	// End offset: 0x8015AE64
	// End Line: 1779

	/* begin block 2 */
		// Start line: 3850
	/* end block 2 */
	// End Line: 3851

int SwapItem__FP10ItemStructT0(ItemStruct *a,ItemStruct *b)

{
	int iVar1;
	int iVar2;
	int iVar3;
	ItemStruct *pIVar4;
	int *piVar5;
	int *piVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	int local_70 [19];
	byte local_24;
	int aiStack16 [4];
	
	pIVar8 = a;
	piVar6 = local_70;
	do {
		piVar5 = piVar6;
		pIVar4 = pIVar8;
		iVar1 = pIVar4->_iVMult1;
		iVar2 = pIVar4->_iVAdd2;
		iVar3 = pIVar4->_iVMult2;
		*piVar5 = pIVar4->_iVAdd1;
		piVar5[1] = iVar1;
		piVar5[2] = iVar2;
		piVar5[3] = iVar3;
		pIVar8 = (ItemStruct *)&pIVar4->_iSeed;
		piVar6 = piVar5 + 4;
	} while (pIVar8 != (ItemStruct *)&a->_iSufPower);
	iVar1 = pIVar4->_ivalue;
	iVar2 = pIVar4->_iIvalue;
	piVar5[4] = pIVar8->_iVAdd1;
	piVar5[5] = iVar1;
	piVar5[6] = iVar2;
	pIVar8 = b;
	do {
		pIVar7 = a;
		pIVar4 = pIVar8;
		iVar1 = pIVar4->_iVMult1;
		iVar2 = pIVar4->_iVAdd2;
		iVar3 = pIVar4->_iVMult2;
		pIVar7->_iVAdd1 = pIVar4->_iVAdd1;
		pIVar7->_iVMult1 = iVar1;
		pIVar7->_iVAdd2 = iVar2;
		pIVar7->_iVMult2 = iVar3;
		pIVar8 = (ItemStruct *)&pIVar4->_iSeed;
		a = (ItemStruct *)&pIVar7->_iSeed;
	} while (pIVar8 != (ItemStruct *)&b->_iSufPower);
	iVar1 = pIVar4->_ivalue;
	iVar2 = pIVar4->_iIvalue;
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar7->_ivalue = iVar1;
	pIVar7->_iIvalue = iVar2;
	piVar6 = local_70;
	do {
		pIVar8 = b;
		piVar5 = piVar6;
		iVar1 = piVar5[1];
		iVar2 = piVar5[2];
		iVar3 = piVar5[3];
		pIVar8->_iVAdd1 = *piVar5;
		pIVar8->_iVMult1 = iVar1;
		pIVar8->_iVAdd2 = iVar2;
		pIVar8->_iVMult2 = iVar3;
		piVar6 = piVar5 + 4;
		b = (ItemStruct *)&pIVar8->_iSeed;
	} while (piVar6 != aiStack16);
	iVar1 = piVar5[5];
	iVar2 = piVar5[6];
	((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = *piVar6;
	pIVar8->_ivalue = iVar1;
	pIVar8->_iIvalue = iVar2;
	return (uint)local_24 + 0xc;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckInvPaste__Fiii(int pnum /*$s2*/, int mx /*$a1*/, int my /*$a2*/)
 // line 1785, offset 0x8015ae70
	/* begin block 1 */
		// Start line: 1786
		// Start offset: 0x8015AE70
		// Variables:
	// 		int r; // $s4
	// 		int sx; // $s6
	// 		int sy; // $s7
	// 		int i; // $s0
	// 		int j; // $t1
	// 		int xx; // $a3
	// 		int yy; // $t2
	// 		int ii; // $t0
	// 		unsigned char done; // stack offset -152
	// 		unsigned char done2h; // $s1
	// 		int il; // $s3
	// 		int cn; // $s5
	// 		int it; // $v0
	// 		int iv; // $s1
	// 		int ig; // $a1
	// 		long gt; // $a1
	// 		struct ItemStruct tempitem; // stack offset -264
	/* end block 1 */
	// End offset: 0x8015CBC4
	// End Line: 2215

	/* begin block 2 */
		// Start line: 3876
	/* end block 2 */
	// End Line: 3877

void CheckInvPaste__Fiii(int pnum,int mx,int my)

{
	char cVar1;
	short sVar2;
	byte bVar3;
	byte bVar4;
	uchar uVar5;
	uint uVar6;
	uint uVar7;
	long lVar8;
	int i;
	_135fake psfx;
	ItemStruct *a;
	ItemStruct *b;
	char *pcVar9;
	ItemStruct *pIVar10;
	int *piVar11;
	int *piVar12;
	int iVar13;
	ItemStruct *pIVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	char cVar18;
	uint uVar19;
	int ii;
	uint uVar20;
	uint uVar21;
	uint uVar22;
	int aiStack264 [24];
	int aiStack168 [4];
	bool local_98;
	
	SetICursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
	ItemNo = ZEXT14(plr[myplr].HoldItem._iCurs);
	uVar19 = 0;
	bVar3 = s__0000000000000000000_00000000000_8010d5d8[ItemNo] >> 4;
	uVar22 = (uint)bVar3;
	bVar4 = s__8010d524[ItemNo] >> 4;
	uVar21 = (uint)bVar4;
	uVar20 = InvCursPos;
	if ((bVar3 == 3) && (uVar20 = InvCursPos, InvCursPos - 0x19U < 0x28)) {
		uVar20 = InvCursPos + 10;
	}
	ii = 7;
	if (uVar20 < 4) {
		ii = 4;
	}
	if (uVar20 - 4 < 2) {
		ii = 5;
	}
	if (uVar20 == 6) {
		ii = 6;
	}
	if (uVar20 - 7 < 0xc) {
		ii = 1;
	}
	if (uVar20 - 0x13 < 6) {
		ii = 3;
	}
	if (uVar20 - 0x41 < 8) {
		ii = 8;
	}
	i = (int)plr[pnum].HoldItem._iLoc;
	local_98 = i == ii;
	if ((ii == 1) && (i == 2)) {
		ii = 2;
		local_98 = true;
	}
	if ((((plr[pnum].HoldItem._iLoc == '\a') && (ii == 8)) && (bVar4 == 1)) &&
		 ((uVar22 == uVar21 &&
			(local_98 = plr[pnum].HoldItem._iStatFlag != '\0' &&
									(&AllItemsUseable)[(int)plr[pnum].HoldItem.IDidx] != '\0',
			plr[pnum].HoldItem._itype == 0xb)))) {
		local_98 = false;
	}
	if (ii == 7) {
		i = uVar20 - 0x19;
		local_98 = true;
		uVar19 = 0;
		if (plr[pnum].HoldItem._itype == 0xb) {
			uVar6 = SEXT14(*(char *)(pnum * 0x19e8 + -0x7ff24540 + i));
			if (uVar6 != 0) {
				if ((int)uVar6 < 1) {
					uVar19 = -uVar6;
				}
				else {
					uVar19 = uVar6 & -(uint)(plr[pnum].InvList[uVar6 - 1]._itype != 0xb);
				}
			}
		}
		else {
			iVar16 = (i / 10 - ((int)(uVar22 - 1) >> 1)) * 10;
			if (iVar16 < 0) {
				iVar16 = 0;
			}
			iVar15 = 0;
			if (bVar3 != 0) {
				do {
					if (local_98 == false) goto LAB_8015cbbc;
					iVar13 = i % 10 - ((int)(uVar21 - 1) >> 1);
					if (0x27 < iVar16) {
						local_98 = false;
					}
					if (iVar13 < 0) {
						iVar13 = 0;
					}
					iVar17 = 0;
					if (bVar4 != 0) {
						uVar6 = uVar19;
						do {
							uVar19 = uVar6;
							if (local_98 == false) break;
							if (iVar13 < 10) {
								uVar7 = SEXT14(*(char *)(pnum * 0x19e8 + -0x7ff24540 + iVar13 + iVar16));
								uVar19 = uVar6;
								if (uVar7 != 0) {
									if ((int)uVar7 < 0) {
										uVar7 = -uVar7;
									}
									uVar19 = uVar7;
									if ((uVar6 != 0) && (uVar19 = uVar6, uVar6 != uVar7)) goto LAB_8015b280;
								}
							}
							else {
LAB_8015b280:
								local_98 = false;
								uVar19 = uVar6;
							}
							iVar17 = iVar17 + 1;
							iVar13 = iVar13 + 1;
							uVar6 = uVar19;
						} while (iVar17 < (int)uVar21);
					}
					iVar15 = iVar15 + 1;
					iVar16 = iVar16 + 10;
				} while (iVar15 < (int)uVar22);
			}
		}
	}
	cVar18 = (char)uVar19;
	if (local_98 == false) goto LAB_8015cbbc;
	if ((1 < ii - 7U) && (plr[pnum].HoldItem._iStatFlag == '\0')) {
		cVar1 = plr[pnum]._pClass;
		local_98 = false;
		if (cVar1 == '\0') {
			psfx = PS_WARR13;
		}
		else {
			if (cVar1 == '\x01') {
				psfx = PS_ROGUE13;
			}
			else {
				psfx = PS_MAGE13;
				if (cVar1 != '\x02') goto LAB_8015b344;
			}
		}
		PlaySFX__Fi(psfx);
	}
LAB_8015b344:
	if (local_98 == false) goto LAB_8015cbbc;
	if (pnum == myplr) {
		PlaySFX__Fi(ItemInvSnds[(uint)ItemCAnimTbl[(uint)plr[pnum].HoldItem._iCurs]]);
	}
	i = 1;
	switch(ii) {
	case 1:
		if ((int)uVar20 < 0xd) {
			if (plr[pnum].InvBody[4]._itype == -1) {
				if ((plr[pnum].InvBody[5]._itype == -1) ||
					 (plr[pnum].InvBody[5]._iClass != plr[pnum].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = &plr[pnum].HoldItem;
					b = plr[pnum].InvBody + 4;
					do {
						pIVar14 = b;
						pIVar10 = a;
						ii = pIVar10->_iVMult1;
						iVar16 = pIVar10->_iVAdd2;
						iVar15 = pIVar10->_iVMult2;
						pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
						pIVar14->_iVMult1 = ii;
						pIVar14->_iVAdd2 = iVar16;
						pIVar14->_iVMult2 = iVar15;
						a = (ItemStruct *)&pIVar10->_iSeed;
						b = (ItemStruct *)&pIVar14->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
					ii = pIVar10->_ivalue;
					iVar16 = pIVar10->_iIvalue;
					((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
					pIVar14->_ivalue = ii;
					pIVar14->_iIvalue = iVar16;
					break;
				}
				NetSendCmdChItem__FUcUc('\0','\x05');
				a = plr[pnum].InvBody + 5;
				b = &plr[pnum].HoldItem;
			}
			else {
				if ((plr[pnum].InvBody[5]._itype == -1) ||
					 (plr[pnum].InvBody[5]._iClass != plr[pnum].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = plr[pnum].InvBody + 4;
					b = &plr[pnum].HoldItem;
				}
				else {
					NetSendCmdChItem__FUcUc('\0','\x05');
					a = plr[pnum].InvBody + 5;
					b = &plr[pnum].HoldItem;
				}
			}
		}
		else {
			if (plr[pnum].InvBody[5]._itype == -1) {
				if (plr[pnum].InvBody[4]._itype == -1) {
LAB_8015b994:
					NetSendCmdChItem__FUcUc('\0','\x05');
					a = &plr[pnum].HoldItem;
					b = plr[pnum].InvBody + 5;
					do {
						pIVar14 = b;
						pIVar10 = a;
						ii = pIVar10->_iVMult1;
						iVar16 = pIVar10->_iVAdd2;
						iVar15 = pIVar10->_iVMult2;
						pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
						pIVar14->_iVMult1 = ii;
						pIVar14->_iVAdd2 = iVar16;
						pIVar14->_iVMult2 = iVar15;
						a = (ItemStruct *)&pIVar10->_iSeed;
						b = (ItemStruct *)&pIVar14->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
					ii = pIVar10->_ivalue;
					iVar16 = pIVar10->_iIvalue;
					((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
					pIVar14->_ivalue = ii;
					pIVar14->_iIvalue = iVar16;
					break;
				}
				if (plr[pnum].InvBody[4]._iLoc == '\x02') {
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = plr[pnum].InvBody + 5;
					SwapItem__FP10ItemStructT0(a,plr[pnum].InvBody + 4);
					b = &plr[pnum].HoldItem;
				}
				else {
					if (plr[pnum].InvBody[4]._iClass != plr[pnum].HoldItem._iClass) goto LAB_8015b994;
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = plr[pnum].InvBody + 4;
					b = &plr[pnum].HoldItem;
				}
			}
			else {
				if ((plr[pnum].InvBody[4]._itype == -1) ||
					 (plr[pnum].InvBody[4]._iClass != plr[pnum].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x05');
					a = plr[pnum].InvBody + 5;
					b = &plr[pnum].HoldItem;
				}
				else {
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = plr[pnum].InvBody + 4;
					b = &plr[pnum].HoldItem;
				}
			}
		}
LAB_8015c140:
		i = SwapItem__FP10ItemStructT0(a,b);
		break;
	case 2:
		NetSendCmdDelItem__FUcUc('\0','\x05');
		if (plr[pnum].InvBody[4]._itype == -1) {
LAB_8015becc:
			if (plr[pnum].InvBody[5]._itype != -1) goto LAB_8015bf6c;
			NetSendCmdChItem__FUcUc('\0','\x04');
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody + 4;
			do {
				pIVar14 = b;
				pIVar10 = a;
				ii = pIVar10->_iVMult1;
				iVar16 = pIVar10->_iVAdd2;
				iVar15 = pIVar10->_iVMult2;
				pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
				pIVar14->_iVMult1 = ii;
				pIVar14->_iVAdd2 = iVar16;
				pIVar14->_iVMult2 = iVar15;
				a = (ItemStruct *)&pIVar10->_iSeed;
				b = (ItemStruct *)&pIVar14->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
			ii = pIVar10->_ivalue;
			iVar16 = pIVar10->_iIvalue;
			((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar14->_ivalue = ii;
			pIVar14->_iIvalue = iVar16;
		}
		else {
			if (plr[pnum].InvBody[5]._itype != -1) {
				a = &plr[pnum].HoldItem;
				piVar12 = aiStack264;
				do {
					piVar11 = piVar12;
					b = a;
					ii = b->_iVMult1;
					iVar16 = b->_iVAdd2;
					iVar15 = b->_iVMult2;
					*piVar11 = b->_iVAdd1;
					piVar11[1] = ii;
					piVar11[2] = iVar16;
					piVar11[3] = iVar15;
					a = (ItemStruct *)&b->_iSeed;
					piVar12 = piVar11 + 4;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
				ii = b->_ivalue;
				iVar16 = b->_iIvalue;
				piVar11[4] = a->_iVAdd1;
				piVar11[5] = ii;
				piVar11[6] = iVar16;
				if (plr[pnum].InvBody[5]._itype == 5) {
					b = &plr[pnum].HoldItem;
					a = plr[pnum].InvBody + 5;
					do {
						ii = a->_iVMult1;
						iVar16 = a->_iVAdd2;
						iVar15 = a->_iVMult2;
						b->_iVAdd1 = a->_iVAdd1;
						b->_iVMult1 = ii;
						b->_iVAdd2 = iVar16;
						b->_iVMult2 = iVar15;
						a = (ItemStruct *)&a->_iSeed;
						b = (ItemStruct *)&b->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].InvBody[5]._iSufPower);
				}
				else {
					b = &plr[pnum].HoldItem;
					a = plr[pnum].InvBody + 4;
					do {
						ii = a->_iVMult1;
						iVar16 = a->_iVAdd2;
						iVar15 = a->_iVMult2;
						b->_iVAdd1 = a->_iVAdd1;
						b->_iVMult1 = ii;
						b->_iVAdd2 = iVar16;
						b->_iVMult2 = iVar15;
						a = (ItemStruct *)&a->_iSeed;
						b = (ItemStruct *)&b->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].InvBody[4]._iSufPower);
				}
				ii = a->_iVMult1;
				iVar16 = a->_iVAdd2;
				b->_iVAdd1 = a->_iVAdd1;
				b->_iVMult1 = ii;
				b->_iVAdd2 = iVar16;
				if (pnum == myplr) {
					SetCursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
				}
				ii = 0;
				do {
					uVar5 = AutoPlace__FiiiiUc(pnum,ii,icursW28,icursH28,1);
					if (0x27 < ii + 1) break;
					ii = ii + 1;
				} while (uVar5 == '\0');
				piVar12 = aiStack264;
				a = &plr[pnum].HoldItem;
				do {
					b = a;
					piVar11 = piVar12;
					ii = piVar11[1];
					iVar16 = piVar11[2];
					iVar15 = piVar11[3];
					b->_iVAdd1 = *piVar11;
					b->_iVMult1 = ii;
					b->_iVAdd2 = iVar16;
					b->_iVMult2 = iVar15;
					piVar12 = piVar11 + 4;
					a = (ItemStruct *)&b->_iSeed;
				} while (piVar12 != aiStack168);
				ii = piVar11[5];
				iVar16 = piVar11[6];
				((ItemStruct *)&b->_iSeed)->_iVAdd1 = *piVar12;
				b->_ivalue = ii;
				b->_iIvalue = iVar16;
				if (pnum == myplr) {
					SetCursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
				}
				if (uVar5 == '\0') {
					return;
				}
				if (plr[pnum].InvBody[5]._itype == 5) {
					plr[pnum].InvBody[5]._itype = -1;
				}
				else {
					plr[pnum].InvBody[4]._itype = -1;
				}
			}
			if (plr[pnum].InvBody[4]._itype == -1) goto LAB_8015becc;
LAB_8015bf6c:
			NetSendCmdChItem__FUcUc('\0','\x04');
			if (plr[pnum].InvBody[4]._itype == -1) {
				SwapItem__FP10ItemStructT0(plr[pnum].InvBody + 4,plr[pnum].InvBody + 5);
			}
			i = SwapItem__FP10ItemStructT0(plr[pnum].InvBody + 4,&plr[pnum].HoldItem);
		}
		if (((plr[pnum].InvBody[4]._itype == 10) && (ii = (int)plr[pnum].InvBody[4]._iSpell, ii != 0))
			 && (plr[pnum].InvBody[4]._iCharges != '\0')) {
			plr[pnum]._pRSplType = '\x03';
			plr[pnum]._pRSpell = ii;
			force_redraw = 0xff;
		}
		break;
	case 3:
		NetSendCmdChItem__FUcUc('\0','\x06');
		if (plr[pnum].InvBody[6]._itype != -1) {
			a = plr[pnum].InvBody + 6;
LAB_8015c138:
			b = &plr[pnum].HoldItem;
			goto LAB_8015c140;
		}
		a = &plr[pnum].HoldItem;
		b = plr[pnum].InvBody + 6;
		do {
			pIVar14 = b;
			pIVar10 = a;
			ii = pIVar10->_iVMult1;
			iVar16 = pIVar10->_iVAdd2;
			iVar15 = pIVar10->_iVMult2;
			pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar14->_iVMult1 = ii;
			pIVar14->_iVAdd2 = iVar16;
			pIVar14->_iVMult2 = iVar15;
			a = (ItemStruct *)&pIVar10->_iSeed;
			b = (ItemStruct *)&pIVar14->_iSeed;
		} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		ii = pIVar10->_ivalue;
		iVar16 = pIVar10->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
		pIVar14->_ivalue = ii;
		pIVar14->_iIvalue = iVar16;
		break;
	case 4:
		NetSendCmdChItem__FUcUc('\0','\0');
		if (plr[pnum].InvBody[0]._itype != -1) {
			a = plr[pnum].InvBody;
			goto LAB_8015c138;
		}
		a = &plr[pnum].HoldItem;
		b = plr[pnum].InvBody;
		do {
			pIVar14 = b;
			pIVar10 = a;
			ii = pIVar10->_iVMult1;
			iVar16 = pIVar10->_iVAdd2;
			iVar15 = pIVar10->_iVMult2;
			pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar14->_iVMult1 = ii;
			pIVar14->_iVAdd2 = iVar16;
			pIVar14->_iVMult2 = iVar15;
			a = (ItemStruct *)&pIVar10->_iSeed;
			b = (ItemStruct *)&pIVar14->_iSeed;
		} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		ii = pIVar10->_ivalue;
		iVar16 = pIVar10->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
		pIVar14->_ivalue = ii;
		pIVar14->_iIvalue = iVar16;
		break;
	case 5:
		if (uVar20 == 4) {
			NetSendCmdChItem__FUcUc('\0','\x01');
			if (plr[pnum].InvBody[1]._itype != -1) {
				a = plr[pnum].InvBody + 1;
				goto LAB_8015c138;
			}
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody + 1;
			do {
				pIVar14 = b;
				pIVar10 = a;
				ii = pIVar10->_iVMult1;
				iVar16 = pIVar10->_iVAdd2;
				iVar15 = pIVar10->_iVMult2;
				pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
				pIVar14->_iVMult1 = ii;
				pIVar14->_iVAdd2 = iVar16;
				pIVar14->_iVMult2 = iVar15;
				a = (ItemStruct *)&pIVar10->_iSeed;
				b = (ItemStruct *)&pIVar14->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
			ii = pIVar10->_ivalue;
			iVar16 = pIVar10->_iIvalue;
			((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar14->_ivalue = ii;
			pIVar14->_iIvalue = iVar16;
		}
		else {
			NetSendCmdChItem__FUcUc('\0','\x02');
			if (plr[pnum].InvBody[2]._itype != -1) {
				a = plr[pnum].InvBody + 2;
				goto LAB_8015c138;
			}
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody + 2;
			do {
				pIVar14 = b;
				pIVar10 = a;
				ii = pIVar10->_iVMult1;
				iVar16 = pIVar10->_iVAdd2;
				iVar15 = pIVar10->_iVMult2;
				pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
				pIVar14->_iVMult1 = ii;
				pIVar14->_iVAdd2 = iVar16;
				pIVar14->_iVMult2 = iVar15;
				a = (ItemStruct *)&pIVar10->_iSeed;
				b = (ItemStruct *)&pIVar14->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
			ii = pIVar10->_ivalue;
			iVar16 = pIVar10->_iIvalue;
			((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar14->_ivalue = ii;
			pIVar14->_iIvalue = iVar16;
		}
		break;
	case 6:
		NetSendCmdChItem__FUcUc('\0','\x03');
		if (plr[pnum].InvBody[3]._itype != -1) {
			a = plr[pnum].InvBody + 3;
			goto LAB_8015c138;
		}
		a = &plr[pnum].HoldItem;
		b = plr[pnum].InvBody + 3;
		do {
			pIVar14 = b;
			pIVar10 = a;
			ii = pIVar10->_iVMult1;
			iVar16 = pIVar10->_iVAdd2;
			iVar15 = pIVar10->_iVMult2;
			pIVar14->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar14->_iVMult1 = ii;
			pIVar14->_iVAdd2 = iVar16;
			pIVar14->_iVMult2 = iVar15;
			a = (ItemStruct *)&pIVar10->_iSeed;
			b = (ItemStruct *)&pIVar14->_iSeed;
		} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
		ii = pIVar10->_ivalue;
		iVar16 = pIVar10->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = a->_iVAdd1;
		pIVar14->_ivalue = ii;
		pIVar14->_iIvalue = iVar16;
		break;
	case 7:
		ii = pnum * 0x19e8;
		if (plr[pnum].HoldItem._itype == 0xb) {
			if (uVar19 == 0) {
				iVar16 = (int)*(char *)((uVar20 - 0x19) + ii + -0x7ff24540);
				if (iVar16 < 1) {
					iVar16 = plr[pnum]._pNumInv;
					piVar12 = (int *)(iVar16 * 0x6c + ii + -0x7ff25624);
					a = &plr[pnum].HoldItem;
					do {
						b = a;
						piVar11 = piVar12;
						ii = b->_iVMult1;
						iVar15 = b->_iVAdd2;
						iVar13 = b->_iVMult2;
						*piVar11 = b->_iVAdd1;
						piVar11[1] = ii;
						piVar11[2] = iVar15;
						piVar11[3] = iVar13;
						a = (ItemStruct *)&b->_iSeed;
						piVar12 = piVar11 + 4;
					} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
					ii = b->_ivalue;
					iVar15 = b->_iIvalue;
					piVar11[4] = a->_iVAdd1;
					piVar11[5] = ii;
					piVar11[6] = iVar15;
					plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
					*(undefined *)(pnum * 0x19e8 + -0x7ff24540 + (uVar20 - 0x19)) = (char)plr[pnum]._pNumInv;
					ii = plr[pnum].HoldItem._ivalue;
					plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
					if (ii < 0x1389) {
						if (ii < 0x9c4) {
							if (ii < 0x3e9) {
								plr[pnum].InvList[iVar16]._iCurs = '\x04';
							}
							else {
								plr[pnum].InvList[iVar16]._iCurs = '\x05';
							}
						}
						else {
							plr[pnum].InvList[iVar16]._iCurs = '\x06';
						}
					}
				}
				else {
					iVar16 = iVar16 + -1;
					ii = plr[pnum].InvList[iVar16]._ivalue;
					iVar15 = ii + plr[pnum].HoldItem._ivalue;
					if (iVar15 < 0x1389) {
						plr[pnum].InvList[iVar16]._ivalue = iVar15;
						plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
						if (iVar15 < 0x9c4) {
							if (iVar15 < 0x3e9) {
								plr[pnum].InvList[iVar16]._iCurs = '\x04';
							}
							else {
								plr[pnum].InvList[iVar16]._iCurs = '\x05';
							}
						}
						else {
							plr[pnum].InvList[iVar16]._iCurs = '\x06';
						}
					}
					else {
						i = plr[pnum].HoldItem._ivalue;
						*(undefined **)&plr[pnum]._pGold = &DAT_00001388 + -ii + plr[pnum]._pGold;
						plr[pnum].HoldItem._ivalue = i - (int)(&DAT_00001388 + -ii);
						plr[pnum].InvList[iVar16]._ivalue = 5000;
						plr[pnum].InvList[iVar16]._iCurs = '\x06';
						ii = plr[pnum].HoldItem._ivalue;
						if (ii < 0x9c4) {
							i = 0x11;
							if (ii < 0x3e9) {
								i = 0x10;
							}
						}
						else {
							i = 0x12;
						}
					}
				}
				break;
			}
LAB_8015c5dc:
			if (plr[pnum].HoldItem._itype == 0xb) {
				plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
			}
			i = SwapItem__FP10ItemStructT0
										((ItemStruct *)(pnum * 0x19e8 + -0x7ff25624 + (uVar19 - 1) * 0x6c),
										 &plr[pnum].HoldItem);
			if (plr[pnum].HoldItem._itype == 0xb) {
				lVar8 = CalculateGold__Fi(pnum);
				plr[pnum]._pGold = lVar8;
			}
			pcVar9 = plr[pnum].InvGrid;
			do {
				if ((int)*pcVar9 == uVar19) {
					*pcVar9 = '\0';
				}
				if ((int)*pcVar9 == -uVar19) {
					*pcVar9 = '\0';
				}
				pcVar9 = pcVar9 + 1;
			} while ((int)pcVar9 < pnum * 0x19e8 + -0x7ff24518);
		}
		else {
			if (uVar19 != 0) goto LAB_8015c5dc;
			piVar12 = (int *)(plr[pnum]._pNumInv * 0x6c + ii + -0x7ff25624);
			a = &plr[pnum].HoldItem;
			do {
				b = a;
				piVar11 = piVar12;
				ii = b->_iVMult1;
				iVar16 = b->_iVAdd2;
				iVar15 = b->_iVMult2;
				*piVar11 = b->_iVAdd1;
				piVar11[1] = ii;
				piVar11[2] = iVar16;
				piVar11[3] = iVar15;
				a = (ItemStruct *)&b->_iSeed;
				piVar12 = piVar11 + 4;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
			ii = b->_ivalue;
			iVar16 = b->_iIvalue;
			piVar11[4] = a->_iVAdd1;
			piVar11[5] = ii;
			piVar11[6] = iVar16;
			plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
			cVar18 = (char)plr[pnum]._pNumInv;
		}
		ii = ((int)(uVar20 - 0x19) / 10 - ((int)(uVar22 - 1) >> 1)) * 10;
		if (ii < 0) {
			ii = 0;
		}
		iVar16 = 0;
		if (bVar3 != 0) {
			do {
				iVar15 = (int)(uVar20 - 0x19) % 10 - ((int)(uVar21 - 1) >> 1);
				if (iVar15 < 0) {
					iVar15 = 0;
				}
				iVar13 = 0;
				if (bVar4 != 0) {
					iVar17 = pnum * 0x19e8 + -0x7ff24540;
					iVar15 = iVar15 + ii;
					do {
						if ((iVar13 == 0) && (iVar16 == uVar22 - 1)) {
							*(char *)(iVar17 + iVar15) = cVar18;
						}
						else {
							*(char *)(iVar17 + iVar15) = -cVar18;
						}
						iVar13 = iVar13 + 1;
						iVar15 = iVar15 + 1;
					} while (iVar13 < (int)uVar21);
				}
				iVar16 = iVar16 + 1;
				ii = ii + 10;
			} while (iVar16 < (int)uVar22);
		}
		break;
	case 8:
		iVar16 = pnum * 0x19e8;
		ii = uVar20 - 0x41;
		if (plr[pnum].HoldItem._itype == 0xb) {
			sVar2 = plr[pnum].SpdList[ii]._itype;
			if (sVar2 == -1) {
				a = &plr[pnum].HoldItem;
				piVar12 = (int *)(ii * 0x6c + iVar16 + -0x7ff24518);
				do {
					piVar11 = piVar12;
					b = a;
					ii = b->_iVMult1;
					iVar16 = b->_iVAdd2;
					iVar15 = b->_iVMult2;
					*piVar11 = b->_iVAdd1;
					piVar11[1] = ii;
					piVar11[2] = iVar16;
					piVar11[3] = iVar15;
					a = (ItemStruct *)&b->_iSeed;
					piVar12 = piVar11 + 4;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
				ii = b->_ivalue;
				iVar16 = b->_iIvalue;
				piVar11[4] = a->_iVAdd1;
				piVar11[5] = ii;
				piVar11[6] = iVar16;
				plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
			}
			else {
				if (sVar2 == 0xb) {
					iVar16 = plr[pnum].SpdList[ii]._ivalue;
					iVar15 = iVar16 + plr[pnum].HoldItem._ivalue;
					if (iVar15 < 0x1389) {
						plr[pnum].SpdList[ii]._ivalue = iVar15;
						plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
						if (iVar15 < 0x9c4) {
							if (iVar15 < 0x3e9) {
								plr[pnum].SpdList[ii]._iCurs = '\x04';
							}
							else {
								plr[pnum].SpdList[ii]._iCurs = '\x05';
							}
						}
						else {
							plr[pnum].SpdList[ii]._iCurs = '\x06';
						}
					}
					else {
						i = plr[pnum].HoldItem._ivalue;
						*(undefined **)&plr[pnum]._pGold = &DAT_00001388 + -iVar16 + plr[pnum]._pGold;
						plr[pnum].HoldItem._ivalue = i - (int)(&DAT_00001388 + -iVar16);
						plr[pnum].SpdList[ii]._ivalue = 5000;
						plr[pnum].SpdList[ii]._iCurs = '\x06';
						ii = plr[pnum].HoldItem._ivalue;
						if (ii < 0x9c4) {
							i = 0x11;
							if (ii < 0x3e9) {
								i = 0x10;
							}
						}
						else {
							i = 0x12;
						}
					}
				}
				else {
					plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
					i = SwapItem__FP10ItemStructT0
												((ItemStruct *)(iVar16 + -0x7ff24518 + ii * 0x6c),&plr[pnum].HoldItem);
				}
			}
		}
		else {
			if (plr[pnum].SpdList[ii]._itype == -1) {
				a = &plr[pnum].HoldItem;
				piVar12 = (int *)(ii * 0x6c + iVar16 + -0x7ff24518);
				do {
					piVar11 = piVar12;
					b = a;
					ii = b->_iVMult1;
					iVar16 = b->_iVAdd2;
					iVar15 = b->_iVMult2;
					*piVar11 = b->_iVAdd1;
					piVar11[1] = ii;
					piVar11[2] = iVar16;
					piVar11[3] = iVar15;
					a = (ItemStruct *)&b->_iSeed;
					piVar12 = piVar11 + 4;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
				ii = b->_ivalue;
				iVar16 = b->_iIvalue;
				piVar11[4] = a->_iVAdd1;
				piVar11[5] = ii;
				piVar11[6] = iVar16;
			}
			else {
				i = SwapItem__FP10ItemStructT0
											((ItemStruct *)(iVar16 + -0x7ff24518 + ii * 0x6c),&plr[pnum].HoldItem);
				if (plr[pnum].HoldItem._itype == 0xb) {
					lVar8 = CalculateGold__Fi(pnum);
					plr[pnum]._pGold = lVar8;
				}
			}
		}
		drawsbarflag = '\x01';
	}
	CalcPlrInv__FiUc(pnum,'\x01');
	if (pnum == myplr) {
		SetCursor__Fi(i);
	}
	if (local_98 != false) {
		return;
	}
LAB_8015cbbc:
	PlaySFX__Fi(IS_TITERR);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckInvCut__Fiii(int pnum /*$s0*/, int mx /*$a1*/, int my /*$a2*/)
 // line 2258, offset 0x8015cbf8
	/* begin block 1 */
		// Start line: 2259
		// Start offset: 0x8015CBF8
		// Variables:
	// 		int r; // $s2
	// 		int ii; // $t0
	// 		int iv; // $t0
	/* end block 1 */
	// End offset: 0x8015D6E0
	// End Line: 2375

	/* begin block 2 */
		// Start line: 4890
	/* end block 2 */
	// End Line: 4891

void CheckInvCut__Fiii(int pnum,int mx,int my)

{
	short sVar1;
	undefined4 *puVar2;
	long lVar3;
	int iVar4;
	char *pcVar5;
	undefined4 uVar6;
	int iVar7;
	int iVar8;
	undefined4 uVar9;
	int iVar10;
	int iVar11;
	undefined4 uVar12;
	ItemStruct *pIVar13;
	ItemStruct *pIVar14;
	int *piVar15;
	int *piVar16;
	int *piVar17;
	undefined4 *puVar18;
	undefined4 *puVar19;
	undefined4 *puVar20;
	ItemStruct *pIVar21;
	ItemStruct *pIVar22;
	undefined4 *puVar23;
	int iVar24;
	
	iVar24 = InvCursPos;
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	plr[pnum].HoldItem._itype = -1;
	if (((uint)iVar24 < 4) && (plr[pnum].InvBody[0]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\0');
		pIVar13 = plr[pnum].InvBody;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[0]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[0]._itype = -1;
	}
	if ((iVar24 == 4) && (plr[pnum].InvBody[1]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x01');
		pIVar13 = plr[pnum].InvBody + 1;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[1]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[1]._itype = -1;
	}
	if ((iVar24 == 5) && (plr[pnum].InvBody[2]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x02');
		pIVar13 = plr[pnum].InvBody + 2;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[2]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[2]._itype = -1;
	}
	if ((iVar24 == 6) && (plr[pnum].InvBody[3]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x03');
		pIVar13 = plr[pnum].InvBody + 3;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[3]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[3]._itype = -1;
	}
	if ((iVar24 - 7U < 6) && (plr[pnum].InvBody[4]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x04');
		pIVar13 = plr[pnum].InvBody + 4;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[4]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[4]._itype = -1;
	}
	if ((iVar24 - 0xdU < 6) && (plr[pnum].InvBody[5]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x05');
		pIVar13 = plr[pnum].InvBody + 5;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[5]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[5]._itype = -1;
	}
	if ((iVar24 - 0x13U < 6) && (plr[pnum].InvBody[6]._itype != -1)) {
		NetSendCmdDelItem__FUcUc('\0','\x06');
		pIVar13 = plr[pnum].InvBody + 6;
		pIVar22 = &plr[pnum].HoldItem;
		do {
			pIVar21 = pIVar22;
			pIVar14 = pIVar13;
			iVar4 = pIVar14->_iVMult1;
			iVar7 = pIVar14->_iVAdd2;
			iVar10 = pIVar14->_iVMult2;
			pIVar21->_iVAdd1 = pIVar14->_iVAdd1;
			pIVar21->_iVMult1 = iVar4;
			pIVar21->_iVAdd2 = iVar7;
			pIVar21->_iVMult2 = iVar10;
			pIVar13 = (ItemStruct *)&pIVar14->_iSeed;
			pIVar22 = (ItemStruct *)&pIVar21->_iSeed;
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[6]._iSufPower);
		iVar4 = pIVar14->_ivalue;
		iVar7 = pIVar14->_iIvalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		pIVar21->_iIvalue = iVar7;
		plr[pnum].InvBody[6]._itype = -1;
	}
	if ((iVar24 - 0x19U < 0x28) &&
		 (iVar4 = (int)*(char *)(pnum * 0x19e8 + -0x7ff24540 + (iVar24 - 0x19U)), iVar4 != 0)) {
		if (iVar4 < 1) {
			iVar4 = -iVar4;
		}
		pcVar5 = plr[pnum].InvGrid;
		do {
			if (((int)*pcVar5 == iVar4) || ((int)*pcVar5 == -iVar4)) {
				*pcVar5 = '\0';
			}
			pcVar5 = pcVar5 + 1;
		} while ((int)pcVar5 < pnum * 0x19e8 + -0x7ff24518);
		iVar7 = iVar4 + -1;
		piVar15 = (int *)(iVar7 * 0x6c + pnum * 0x19e8 + -0x7ff25624);
		piVar17 = piVar15;
		pIVar13 = &plr[pnum].HoldItem;
		do {
			pIVar22 = pIVar13;
			piVar16 = piVar17;
			iVar10 = piVar16[1];
			iVar8 = piVar16[2];
			iVar11 = piVar16[3];
			pIVar22->_iVAdd1 = *piVar16;
			pIVar22->_iVMult1 = iVar10;
			pIVar22->_iVAdd2 = iVar8;
			pIVar22->_iVMult2 = iVar11;
			piVar17 = piVar16 + 4;
			pIVar13 = (ItemStruct *)&pIVar22->_iSeed;
		} while (piVar17 != piVar15 + 0x18);
		iVar10 = piVar16[5];
		iVar8 = piVar16[6];
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = *piVar17;
		pIVar22->_ivalue = iVar10;
		pIVar22->_iIvalue = iVar8;
		plr[pnum]._pNumInv = plr[pnum]._pNumInv + -1;
		iVar10 = plr[pnum]._pNumInv;
		if ((0 < iVar10) && (iVar10 != iVar7)) {
			iVar8 = pnum * 0x19e8 + -0x7ff25624;
			puVar18 = (undefined4 *)(iVar10 * 0x6c + iVar8);
			puVar20 = puVar18;
			puVar2 = (undefined4 *)(iVar7 * 0x6c + iVar8);
			do {
				puVar23 = puVar2;
				puVar19 = puVar20;
				uVar6 = puVar19[1];
				uVar9 = puVar19[2];
				uVar12 = puVar19[3];
				*puVar23 = *puVar19;
				puVar23[1] = uVar6;
				puVar23[2] = uVar9;
				puVar23[3] = uVar12;
				puVar20 = puVar19 + 4;
				puVar2 = puVar23 + 4;
			} while (puVar20 != puVar18 + 0x18);
			uVar6 = puVar19[5];
			uVar9 = puVar19[6];
			puVar23[4] = *puVar20;
			puVar23[5] = uVar6;
			puVar23[6] = uVar9;
			pcVar5 = plr[pnum].InvGrid;
			do {
				if ((int)*pcVar5 == plr[pnum]._pNumInv + 1) {
					*pcVar5 = (char)iVar4;
				}
				if ((int)*pcVar5 == ~plr[pnum]._pNumInv) {
					*pcVar5 = -(char)iVar4;
				}
				pcVar5 = pcVar5 + 1;
			} while ((int)pcVar5 < pnum * 0x19e8 + -0x7ff24518);
		}
	}
	if (0x40 < iVar24) {
		iVar24 = iVar24 + -0x41;
		if (plr[pnum].SpdList[iVar24]._itype != -1) {
			piVar15 = (int *)(iVar24 * 0x6c + pnum * 0x19e8 + -0x7ff24518);
			piVar17 = piVar15;
			pIVar13 = &plr[pnum].HoldItem;
			do {
				pIVar22 = pIVar13;
				piVar16 = piVar17;
				iVar4 = piVar16[1];
				iVar7 = piVar16[2];
				iVar10 = piVar16[3];
				pIVar22->_iVAdd1 = *piVar16;
				pIVar22->_iVMult1 = iVar4;
				pIVar22->_iVAdd2 = iVar7;
				pIVar22->_iVMult2 = iVar10;
				piVar17 = piVar16 + 4;
				pIVar13 = (ItemStruct *)&pIVar22->_iSeed;
			} while (piVar17 != piVar15 + 0x18);
			iVar4 = piVar16[5];
			iVar7 = piVar16[6];
			((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = *piVar17;
			pIVar22->_ivalue = iVar4;
			pIVar22->_iIvalue = iVar7;
			plr[pnum].SpdList[iVar24]._itype = -1;
			drawsbarflag = '\x01';
		}
	}
	sVar1 = plr[pnum].HoldItem._itype;
	if (sVar1 != -1) {
		if (sVar1 == 0xb) {
			lVar3 = CalculateGold__Fi(pnum);
			plr[pnum]._pGold = lVar3;
		}
		CalcPlrInv__FiUc(pnum,'\x01');
		CheckItemStats__Fi(pnum);
		if (pnum == myplr) {
			PlaySFX__Fi(IS_IGRAB);
			SetCursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveInvItem__Fii(int pnum /*$s0*/, int iv /*$t0*/)
 // line 2399, offset 0x8015d6fc
	/* begin block 1 */
		// Start line: 2400
		// Start offset: 0x8015D6FC
	/* end block 1 */
	// End offset: 0x8015D998
	// End Line: 2423

	/* begin block 2 */
		// Start line: 5176
	/* end block 2 */
	// End Line: 5177

void RemoveInvItem__Fii(int pnum,int iv)

{
	char cVar1;
	undefined4 *puVar2;
	char *pcVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 uVar7;
	uint uVar8;
	undefined4 uVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	undefined4 *puVar13;
	
	pcVar3 = plr[pnum].InvGrid;
	do {
		if (((int)*pcVar3 == iv + 1) || ((int)*pcVar3 == -(iv + 1))) {
			*pcVar3 = '\0';
		}
		pcVar3 = pcVar3 + 1;
	} while ((int)pcVar3 < pnum * 0x19e8 + -0x7ff24518);
	plr[pnum]._pNumInv = plr[pnum]._pNumInv + -1;
	iVar6 = plr[pnum]._pNumInv;
	if ((0 < iVar6) && (iVar6 != iv)) {
		iVar4 = pnum * 0x19e8 + -0x7ff25624;
		puVar10 = (undefined4 *)(iVar6 * 0x6c + iVar4);
		puVar12 = puVar10;
		puVar2 = (undefined4 *)(iv * 0x6c + iVar4);
		do {
			puVar13 = puVar2;
			puVar11 = puVar12;
			uVar5 = puVar11[1];
			uVar7 = puVar11[2];
			uVar9 = puVar11[3];
			*puVar13 = *puVar11;
			puVar13[1] = uVar5;
			puVar13[2] = uVar7;
			puVar13[3] = uVar9;
			puVar12 = puVar11 + 4;
			puVar2 = puVar13 + 4;
		} while (puVar12 != puVar10 + 0x18);
		uVar5 = puVar11[5];
		uVar7 = puVar11[6];
		puVar13[4] = *puVar12;
		puVar13[5] = uVar5;
		puVar13[6] = uVar7;
		cVar1 = (char)iv + '\x01';
		pcVar3 = plr[pnum].InvGrid;
		do {
			if ((int)*pcVar3 == plr[pnum]._pNumInv + 1) {
				*pcVar3 = cVar1;
			}
			if ((int)*pcVar3 == ~plr[pnum]._pNumInv) {
				*pcVar3 = -cVar1;
			}
			pcVar3 = pcVar3 + 1;
		} while ((int)pcVar3 < pnum * 0x19e8 + -0x7ff24518);
	}
	CalcPlrScrolls__Fi(pnum);
	if ((plr[pnum]._pRSplType == '\x02') && (plr[pnum]._pRSpell != -1)) {
		uVar8 = 1 << (plr[pnum]._pRSpell - 1U & 0x1f);
		if (((*(uint *)&plr[pnum]._pScrlSpells & uVar8) == 0) &&
			 ((*(uint *)((int)&plr[pnum]._pScrlSpells + 4) & (int)uVar8 >> 0x1f) == 0)) {
			plr[pnum]._pRSpell = -1;
		}
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveSpdBarItem__Fii(int pnum /*$a0*/, int iv /*$a1*/)
 // line 2430, offset 0x8015d9ac
	/* begin block 1 */
		// Start line: 2431
		// Start offset: 0x8015D9AC
	/* end block 1 */
	// End offset: 0x8015DA8C
	// End Line: 2436

	/* begin block 2 */
		// Start line: 5245
	/* end block 2 */
	// End Line: 5246

void RemoveSpdBarItem__Fii(int pnum,int iv)

{
	uint uVar1;
	
	plr[pnum].SpdList[iv]._itype = -1;
	CalcPlrScrolls__Fi(pnum);
	if ((((plr[pnum]._pRSplType == '\x02') && (plr[pnum]._pRSpell != -1)) &&
			(uVar1 = 1 << (plr[pnum]._pRSpell - 1U & 0x1f),
			(*(uint *)&plr[pnum]._pScrlSpells & uVar1) == 0)) &&
		 ((*(uint *)((int)&plr[pnum]._pScrlSpells + 4) & (int)uVar1 >> 0x1f) == 0)) {
		plr[pnum]._pRSpell = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckInvScrn__Fv()
 // line 2443, offset 0x8015daa0
	/* begin block 1 */
		// Start line: 2444
		// Start offset: 0x8015DAA0
	/* end block 1 */
	// End offset: 0x8015DB08
	// End Line: 2448

	/* begin block 2 */
		// Start line: 5276
	/* end block 2 */
	// End Line: 5277

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckInvScrn__Fv(void)

{
	if ((&_pcurs)[myplr] < 0xc) {
		CheckInvCut__Fiii(myplr,MouseX,MouseY);
	}
	else {
		CheckInvPaste__Fiii(myplr,MouseX,MouseY);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckItemStats__Fi(int pnum /*$a0*/)
 // line 2461, offset 0x8015db18
	/* begin block 1 */
		// Start line: 2462
		// Start offset: 0x8015DB18
		// Variables:
	// 		struct PlayerStruct *p; // $a0
	/* end block 1 */
	// End offset: 0x8015DB94
	// End Line: 2470

	/* begin block 2 */
		// Start line: 5313
	/* end block 2 */
	// End Line: 5314

void CheckItemStats__Fi(int pnum)

{
	byte bVar1;
	short sVar2;
	
	sVar2 = plr[pnum]._pStrength;
	bVar1 = plr[pnum].HoldItem._iMinStr;
	plr[pnum].HoldItem._iStatFlag = '\0';
	if ((((int)(uint)bVar1 <= (int)sVar2) &&
			((int)(uint)plr[pnum].HoldItem._iMinMag <= (int)plr[pnum]._pMagic)) &&
		 ((int)(uint)plr[pnum].HoldItem._iMinDex <= (int)plr[pnum]._pDexterity)) {
		plr[pnum].HoldItem._iStatFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckBookLevel__Fi(int pnum /*$a0*/)
 // line 2476, offset 0x8015db9c
	/* begin block 1 */
		// Start line: 2477
		// Start offset: 0x8015DB9C
		// Variables:
	// 		int slvl; // $a2
	/* end block 1 */
	// End offset: 0x8015DCC8
	// End Line: 2488

	/* begin block 2 */
		// Start line: 5343
	/* end block 2 */
	// End Line: 5344

void CheckBookLevel__Fi(int pnum)

{
	char cVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	
	if (plr[pnum].HoldItem._iMiscId == '\x18') {
		cVar1 = plr[pnum].HoldItem._iSpell;
		plr[pnum].HoldItem._iMinMag = (uchar)(&spelldata)[(int)plr[pnum].HoldItem._iSpell].sMinInt;
		iVar4 = (int)*(char *)(pnum * 0x19e8 + -0x7ff25a57 + (int)cVar1);
		while (iVar4 != 0) {
			uVar3 = (uint)plr[pnum].HoldItem._iMinMag;
			uVar3 = uVar3 + (int)uVar3 / 5;
			uVar2 = uVar3 & 0xff;
			plr[pnum].HoldItem._iMinMag = (uchar)uVar3;
			iVar4 = iVar4 + -1;
			if (0xff < (int)(uVar2 + (int)uVar2 / 5)) {
				plr[pnum].HoldItem._iMinMag = -1;
				iVar4 = 0;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckQuestItem__Fi(int pnum /*$s0*/)
 // line 2496, offset 0x8015dcd0
	/* begin block 1 */
		// Start line: 2497
		// Start offset: 0x8015DCD0
	/* end block 1 */
	// End offset: 0x8015E16C
	// End Line: 2580

	/* begin block 2 */
		// Start line: 5385
	/* end block 2 */
	// End Line: 5386

void CheckQuestItem__Fi(int pnum)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	
	if (plr[pnum].HoldItem.IDidx == 10) {
		quests[8]._qactive = '\x03';
		quests[8].pad_for_laz = '\x01';
	}
	if (plr[pnum].HoldItem.IDidx == 0x11) {
		quests[1].pad_for_laz = '\x01';
		if ((quests[1]._qactive == '\x02') && (quests[1]._qvar1 == '\x03')) {
			sfxdelay = 10;
			uVar3 = SEXT14(plr[pnum]._pClass);
			if (uVar3 == 0) {
				iVar2 = 0x331;
			}
			else {
				iVar2 = 0x2c3;
				if ((uVar3 != 1) && (iVar2 = sfxdnum, uVar3 == (uint)quests[1]._qactive)) {
					iVar2 = 0x25b;
				}
			}
			sfxdnum = iVar2;
			quests[1]._qvar1 = '\x04';
		}
		NetSendCmdQuest__FUcUc('\x01','\x01');
	}
	if (plr[pnum].HoldItem.IDidx == 0x10) {
		quests[10].pad_for_laz = '\x01';
		if (quests[10]._qactive == '\x01') {
			quests[10]._qactive = '\x02';
			quests[10]._qvar1 = '\x01';
		}
		iVar2 = sfxdnum;
		if (quests[10]._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14(plr[myplr]._pClass);
			iVar2 = 0x32b;
			if (uVar3 != 0) {
				if (uVar3 == (uint)quests[10]._qlog) {
					iVar2 = 0x2bd;
				}
				else {
					iVar2 = sfxdnum;
					if (uVar3 == 2) {
						iVar2 = 0x255;
					}
				}
			}
		}
		sfxdnum = iVar2;
		NetSendCmdQuest__FUcUc('\x01','\n');
	}
	if ((plr[pnum].HoldItem.IDidx == 0xf) && (quests[4]._qactive != '\x03')) {
		sfxdelay = 0x1e;
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			sfxdnum = 0x32a;
		}
		else {
			if (cVar1 == '\x01') {
				sfxdnum = 700;
			}
			else {
				if (cVar1 == '\x02') {
					sfxdnum = 0x254;
				}
			}
		}
	}
	if (plr[pnum].HoldItem.IDidx == 9) {
		quests[0].pad_for_laz = '\x01';
		if (quests[0]._qactive == '\x01') {
			quests[0]._qactive = '\x02';
			quests[0]._qvar1 = '\x02';
		}
		iVar2 = sfxdnum;
		if (quests[0]._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14(plr[myplr]._pClass);
			iVar2 = 0x329;
			if (uVar3 != 0) {
				if (uVar3 == (uint)quests[0]._qlog) {
					iVar2 = 699;
				}
				else {
					iVar2 = sfxdnum;
					if (uVar3 == 2) {
						iVar2 = 0x253;
					}
				}
			}
		}
		sfxdnum = iVar2;
		NetSendCmdQuest__FUcUc('\x01','\0');
	}
	iVar2 = sfxdnum;
	if (plr[pnum].HoldItem.IDidx == 0x1c) {
		quests[9].pad_for_laz = '\x01';
		quests[9]._qactive = '\x03';
		NetSendCmdQuest__FUcUc('\x01','\t');
		sfxdelay = 0x14;
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			iVar2 = 0x32d;
		}
		else {
			if (cVar1 == '\x01') {
				iVar2 = 0x2bf;
			}
			else {
				iVar2 = 599;
				if (cVar1 != '\x02') {
					sfxdelay = 0x14;
					return;
				}
			}
		}
	}
	sfxdnum = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvGetItem__Fii(int pnum /*$s0*/, int ii /*$s1*/)
 // line 2589, offset 0x8015e180
	/* begin block 1 */
		// Start line: 2590
		// Start offset: 0x8015E180
		// Variables:
	// 		int j; // $a1
	// 		int jj; // $a0
	/* end block 1 */
	// End offset: 0x8015E444
	// End Line: 2648

	/* begin block 2 */
		// Start line: 5579
	/* end block 2 */
	// End Line: 5580

void InvGetItem__Fii(int pnum,int ii)

{
	int *piVar1;
	int i;
	int iVar2;
	int iVar3;
	ItemStruct *pIVar4;
	ItemStruct *pIVar5;
	int *piVar6;
	
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if (dung_map[(int)item[ii]._ix * 0x70 + (int)item[ii]._iy].dItem != '\0') {
		i = pnum << 1;
		if ((myplr == pnum) && (i = pnum * 2, 0xb < (&_pcurs)[pnum])) {
			NetSendCmdPItem__FUcUcUcUc('\x01','V',*(uchar *)&plr[pnum]._px,*(uchar *)&plr[pnum]._py);
			i = pnum << 1;
		}
		item[ii]._iCreateInfo = item[ii]._iCreateInfo & 0x7fff;
		pIVar5 = item + ii;
		piVar1 = (int *)((int)&plr[0].HoldItem + i * 0x800 + pnum * 0x9e8);
		do {
			piVar6 = piVar1;
			pIVar4 = pIVar5;
			i = pIVar4->_iVMult1;
			iVar2 = pIVar4->_iVAdd2;
			iVar3 = pIVar4->_iVMult2;
			*piVar6 = pIVar4->_iVAdd1;
			piVar6[1] = i;
			piVar6[2] = iVar2;
			piVar6[3] = iVar3;
			pIVar5 = (ItemStruct *)&pIVar4->_iSeed;
			piVar1 = piVar6 + 4;
		} while (pIVar5 != (ItemStruct *)&item[ii]._iSufPower);
		i = pIVar4->_ivalue;
		iVar2 = pIVar4->_iIvalue;
		piVar6[4] = pIVar5->_iVAdd1;
		piVar6[5] = i;
		piVar6[6] = iVar2;
		CheckQuestItem__Fi(pnum);
		CheckBookLevel__Fi(pnum);
		CheckItemStats__Fi(pnum);
		dung_map[(int)item[ii]._ix * 0x70 + (int)item[ii]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == ii) {
					DeleteItem__Fii((int)(&itemactive)[i],i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
		(&_pcursitem)[sel_data] = -1;
		NewCursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutoGetItem__Fii(int pnum /*$s3*/, int ii /*$fp*/)
 // line 2655, offset 0x8015e45c
	/* begin block 1 */
		// Start line: 2656
		// Start offset: 0x8015E45C
		// Variables:
	// 		int i; // $s0
	// 		int g; // $v0
	// 		int w; // $s4
	// 		int h; // $s5
	// 		int idx; // $a0
	// 		unsigned char done; // $s1

		/* begin block 1.1 */
			// Start line: 2748
			// Start offset: 0x8015EC2C

			/* begin block 1.1.1 */
				// Start line: 2748
				// Start offset: 0x8015EC38
				// Variables:
			// 		int j; // $a1
			// 		int jj; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8015ECDC
			// End Line: 2771
		/* end block 1.1 */
		// End offset: 0x8015EE84
		// End Line: 2791
	/* end block 1 */
	// End offset: 0x8015EE84
	// End Line: 2791

	/* begin block 2 */
		// Start line: 5719
	/* end block 2 */
	// End Line: 5720

void AutoGetItem__Fii(int pnum,int ii)

{
	char cVar1;
	uchar uVar2;
	long lVar3;
	int ii_00;
	int iVar4;
	int iVar5;
	int iVar6;
	_135fake psfx;
	int ii_01;
	int iVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	int *piVar12;
	int iVar13;
	int *piVar14;
	int iVar15;
	
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if ((ii != 0x7f) && (dung_map[(int)item[ii]._ix * 0x70 + (int)item[ii]._iy].dItem == '\0')) {
		return;
	}
	item[ii]._iCreateInfo = item[ii]._iCreateInfo & 0x7fff;
	pIVar9 = item + ii;
	pIVar10 = &plr[pnum].HoldItem;
	do {
		pIVar11 = pIVar10;
		pIVar8 = pIVar9;
		ii_00 = pIVar8->_iVMult1;
		iVar5 = pIVar8->_iVAdd2;
		ii_01 = pIVar8->_iVMult2;
		pIVar11->_iVAdd1 = pIVar8->_iVAdd1;
		pIVar11->_iVMult1 = ii_00;
		pIVar11->_iVAdd2 = iVar5;
		pIVar11->_iVMult2 = ii_01;
		pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
		pIVar10 = (ItemStruct *)&pIVar11->_iSeed;
	} while (pIVar9 != (ItemStruct *)&item[ii]._iSufPower);
	ii_00 = pIVar8->_ivalue;
	iVar5 = pIVar8->_iIvalue;
	((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
	pIVar11->_ivalue = ii_00;
	pIVar11->_iIvalue = iVar5;
	CheckQuestItem__Fi(pnum);
	CheckBookLevel__Fi(pnum);
	CheckItemStats__Fi(pnum);
	SetICursor__Fi((uint)plr[pnum].HoldItem._iCurs + 0xc);
	PlaySFX__Fi(IS_TITLEMOV);
	if (plr[pnum].HoldItem._itype == 0xb) {
		uVar2 = GoldAutoPlace__Fi(pnum);
	}
	else {
		uVar2 = '\0';
		if (((((plr[pnum]._pgfxnum & 0xfU) < 2) && ((int)plr[pnum]._pmode < 4)) &&
				(plr[pnum].HoldItem._iStatFlag != '\0')) && (plr[pnum].HoldItem._iClass == '\x01')) {
			uVar2 = WeaponAutoPlace__Fi(pnum);
			if (uVar2 != '\0') {
				CalcPlrInv__FiUc(pnum,'\x01');
				goto LAB_8015e6d0;
			}
		}
		else {
LAB_8015e6d0:
			if (uVar2 != '\0') goto LAB_8015ec3c;
		}
		iVar5 = icursH28;
		ii_00 = icursW28;
		if (icursW28 == 1) {
			if (icursH28 == 1) {
				if (((plr[pnum].HoldItem._iStatFlag != '\0') &&
						((&AllItemsUseable)[(int)plr[pnum].HoldItem.IDidx] != '\0')) &&
					 (ii_01 = 0, uVar2 == '\0')) {
					iVar15 = 0;
					iVar13 = pnum * 0x19e8;
					do {
						if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar13) == -1) {
							pIVar9 = &plr[pnum].HoldItem;
							piVar14 = (int *)(iVar15 + pnum * 0x19e8 + -0x7ff24518);
							do {
								piVar12 = piVar14;
								pIVar10 = pIVar9;
								iVar4 = pIVar10->_iVMult1;
								iVar6 = pIVar10->_iVAdd2;
								iVar7 = pIVar10->_iVMult2;
								*piVar12 = pIVar10->_iVAdd1;
								piVar12[1] = iVar4;
								piVar12[2] = iVar6;
								piVar12[3] = iVar7;
								pIVar9 = (ItemStruct *)&pIVar10->_iSeed;
								piVar14 = piVar12 + 4;
							} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
							iVar4 = pIVar10->_ivalue;
							iVar6 = pIVar10->_iIvalue;
							piVar12[4] = pIVar9->_iVAdd1;
							piVar12[5] = iVar4;
							piVar12[6] = iVar6;
							CalcPlrScrolls__Fi(pnum);
							drawsbarflag = '\x01';
							uVar2 = '\x01';
						}
						iVar13 = iVar13 + 0x6c;
						ii_01 = ii_01 + 1;
						iVar15 = iVar15 + 0x6c;
					} while ((ii_01 < 8) && (uVar2 == '\0'));
				}
				ii_01 = 0x1e;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,1,1);
					ii_01 = ii_01 + 1;
				} while (ii_01 < 0x28);
				ii_01 = 0x14;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,1,1);
					ii_01 = ii_01 + 1;
				} while (ii_01 < 0x1e);
				ii_01 = 10;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,1,1);
					ii_01 = ii_01 + 1;
				} while (ii_01 < 0x14);
				ii_01 = 0;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,1,1);
					ii_01 = ii_01 + 1;
				} while (ii_01 < 10);
			}
			if (iVar5 == 2) {
				ii_01 = 0x1d;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,2,1);
					ii_01 = ii_01 + -1;
				} while (0x13 < ii_01);
				ii_01 = 9;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,2,1);
					ii_01 = ii_01 + -1;
				} while (-1 < ii_01);
				ii_01 = 0x13;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,2,1);
					ii_01 = ii_01 + -1;
				} while (9 < ii_01);
			}
			if (iVar5 == 3) {
				ii_01 = 0;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,1,3,1);
					ii_01 = ii_01 + 1;
				} while (ii_01 < 0x14);
			}
		}
		if (ii_00 == 2) {
			if (iVar5 == 2) {
				ii_00 = 0;
				if (uVar2 == '\0') {
					piVar14 = &AP2x2Tbl;
					do {
						ii_01 = *piVar14;
						piVar14 = piVar14 + 1;
						ii_00 = ii_00 + 1;
						uVar2 = AutoPlace__FiiiiUc(pnum,ii_01,2,2,1);
						if (9 < ii_00) break;
					} while (uVar2 == '\0');
				}
				ii_00 = 0x15;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_00,2,2,1);
					ii_00 = ii_00 + 2;
				} while (ii_00 < 0x1d);
				ii_00 = 1;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_00,2,2,1);
					ii_00 = ii_00 + 2;
				} while (ii_00 < 9);
				ii_00 = 10;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_00,2,2,1);
					ii_00 = ii_00 + 1;
				} while (ii_00 < 0x13);
			}
			if (iVar5 == 3) {
				ii_00 = 0;
				do {
					if (uVar2 != '\0') break;
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_00,2,3,1);
					ii_00 = ii_00 + 1;
				} while (ii_00 < 9);
				ii_00 = 10;
				if (uVar2 != '\0') goto LAB_8015ec3c;
				do {
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_00,2,3,1);
					ii_00 = ii_00 + 1;
					if (0x12 < ii_00) break;
				} while (uVar2 == '\0');
			}
		}
	}
	if (uVar2 != '\0') {
LAB_8015ec3c:
		dung_map[(int)item[ii]._ix * 0x70 + (int)item[ii]._iy].dItem = '\0';
		ii_00 = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[ii_00] == ii) {
					DeleteItem__Fii(ii,ii_00);
					ii_00 = 0;
				}
				else {
					ii_00 = ii_00 + 1;
				}
			} while (ii_00 < numitems);
		}
		return;
	}
	ii_00 = pnum * 2;
	if (pnum == myplr) {
		cVar1 = plr[pnum]._pClass;
		if (cVar1 == '\0') {
			lVar3 = ENG_random__Fl(3);
			psfx = lVar3 + PS_WARR14;
		}
		else {
			if (cVar1 == '\x01') {
				lVar3 = ENG_random__Fl(3);
				psfx = lVar3 + PS_ROGUE14;
			}
			else {
				ii_00 = pnum << 1;
				if (cVar1 != '\x02') goto LAB_8015ed78;
				lVar3 = ENG_random__Fl(3);
				psfx = lVar3 + PS_MAGE14;
			}
		}
		PlaySFX__Fi(psfx);
		ii_00 = pnum << 1;
	}
LAB_8015ed78:
	pIVar9 = item + ii;
	piVar14 = (int *)((int)&plr[0].HoldItem + ii_00 * 0x800 + pnum * 0x9e8);
	do {
		piVar12 = piVar14;
		pIVar10 = pIVar9;
		ii_00 = pIVar10->_iVMult1;
		iVar5 = pIVar10->_iVAdd2;
		ii_01 = pIVar10->_iVMult2;
		*piVar12 = pIVar10->_iVAdd1;
		piVar12[1] = ii_00;
		piVar12[2] = iVar5;
		piVar12[3] = ii_01;
		pIVar9 = (ItemStruct *)&pIVar10->_iSeed;
		piVar14 = piVar12 + 4;
	} while (pIVar9 != (ItemStruct *)&item[ii]._iSufPower);
	ii_00 = pIVar10->_ivalue;
	iVar5 = pIVar10->_iIvalue;
	piVar12[4] = pIVar9->_iVAdd1;
	piVar12[5] = ii_00;
	piVar12[6] = iVar5;
	RespawnItem__FiUc(ii,'\x01');
	NetSendCmdPItem__FUcUcUcUc('\x01','\v',item[ii]._ix,item[ii]._iy);
	plr[pnum].HoldItem._itype = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncGetItem__FiiiUsi(int x /*$a0*/, int y /*$a1*/, int idx /*$a2*/, unsigned short ci /*$a3*/, int iseed /*stack 16*/)
 // line 2842, offset 0x8015eeb8
	/* begin block 1 */
		// Start line: 2843
		// Start offset: 0x8015EEB8
		// Variables:
	// 		int ii; // $s0

		/* begin block 1.1 */
			// Start line: 2890
			// Start offset: 0x8015EF60

			/* begin block 1.1.1 */
				// Start line: 2890
				// Start offset: 0x8015EF6C
				// Variables:
			// 		int j; // $a1
			// 		int jj; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8015F00C
			// End Line: 2914
		/* end block 1.1 */
		// End offset: 0x8015F00C
		// End Line: 2914
	/* end block 1 */
	// End offset: 0x8015F00C
	// End Line: 2914

	/* begin block 2 */
		// Start line: 6103
	/* end block 2 */
	// End Line: 6104

void SyncGetItem__FiiiUsi(int x,int y,int idx,ushort ci,int iseed)

{
	int i;
	int iVar1;
	
	iVar1 = (int)dung_map[x * 0x70 + y].dItem + -1;
	if (((((int)dung_map[x * 0x70 + y].dItem == 0) || ((int)item[iVar1].IDidx != idx)) ||
			(item[iVar1]._iSeed != iseed)) || (item[iVar1]._iCreateInfo != ci)) {
		iVar1 = FindGetItem__FiUsi(idx,ci,iseed);
	}
	if (iVar1 != -1) {
		dung_map[(int)item[iVar1]._ix * 0x70 + (int)item[iVar1]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)(&itemactive)[i] == iVar1) {
					DeleteItem__Fii((int)(&itemactive)[i],i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TryInvPut__Fv()
 // line 2928, offset 0x8015f020
	/* begin block 1 */
		// Start line: 2929
		// Start offset: 0x8015F020
		// Variables:
	// 		int Dist; // $s1

		/* begin block 1.1 */
			// Start line: 2942
			// Start offset: 0x8015F0B4

			/* begin block 1.1.1 */
				// Start line: 2942
				// Start offset: 0x8015F0B4
				// Variables:
			// 		int d; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 2946
					// Start offset: 0x8015F0B8
				/* end block 1.1.1.1 */
				// End offset: 0x8015F14C
				// End Line: 2950
			/* end block 1.1.1 */
			// End offset: 0x8015F154
			// End Line: 2959
		/* end block 1.1 */
		// End offset: 0x8015F154
		// End Line: 2959
	/* end block 1 */
	// End offset: 0x8015F154
	// End Line: 2961

	/* begin block 2 */
		// Start line: 6297
	/* end block 2 */
	// End Line: 6298

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TryInvPut__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	int iVar3;
	
	if (numitems < 0x7a) {
		uVar2 = CanPut__Fii((int)plr[myplr]._px,(int)plr[myplr]._py);
		if (uVar2 == '\0') {
			iVar3 = 0;
			bVar1 = true;
			while (uVar2 = '\0', bVar1) {
				uVar2 = CanPut__Fii((int)plr[myplr]._px + (int)offset_x[iVar3],
														(int)plr[myplr]._py + (int)offset_y[iVar3]);
				iVar3 = iVar3 + 1;
				if (uVar2 != '\0') goto LAB_8015f0ac;
				bVar1 = iVar3 < 8;
			}
		}
		else {
LAB_8015f0ac:
			uVar2 = '\x01';
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InvPutItem__Fiii(int pnum /*$s5*/, int x /*$s3*/, int y /*$s4*/)
 // line 2990, offset 0x8015f16c
	/* begin block 1 */
		// Start line: 2991
		// Start offset: 0x8015F16C
		// Variables:
	// 		int ii; // $s0
	// 		unsigned char done; // $s2

		/* begin block 1.1 */
			// Start line: 3020
			// Start offset: 0x8015F244

			/* begin block 1.1.1 */
				// Start line: 3023
				// Start offset: 0x8015F2A4

				/* begin block 1.1.1.1 */
					// Start line: 3024
					// Start offset: 0x8015F2A4
					// Variables:
				// 		int Dist; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 3024
						// Start offset: 0x8015F2A8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3027
							// Start offset: 0x8015F2BC
							// Variables:
						// 		int d; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015F368
						// End Line: 3051
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015F368
					// End Line: 3051
				/* end block 1.1.1.1 */
				// End offset: 0x8015F370
				// End Line: 3052
			/* end block 1.1.1 */
			// End offset: 0x8015F370
			// End Line: 3052
		/* end block 1.1 */
		// End offset: 0x8015F370
		// End Line: 3052
	/* end block 1 */
	// End offset: 0x8015F4DC
	// End Line: 3127

	/* begin block 2 */
		// Start line: 6427
	/* end block 2 */
	// End Line: 6428

int InvPutItem__Fiii(int pnum,int x,int y)

{
	bool bVar1;
	ItemStruct *pIVar2;
	char cVar3;
	uchar uVar4;
	int i;
	int i_00;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int iVar10;
	int j;
	
	if (numitems < 0x7a) {
		i_00 = FindGetItem__FiUsi((int)plr[pnum].HoldItem.IDidx,plr[pnum].HoldItem._iCreateInfo,
															plr[pnum].HoldItem._iSeed);
		if (i_00 != -1) {
			SyncGetItem__FiiiUsi
								(x,y,(int)plr[pnum].HoldItem.IDidx,plr[pnum].HoldItem._iCreateInfo,
								 plr[pnum].HoldItem._iSeed);
		}
		bVar1 = false;
		i_00 = (int)plr[myplr]._px;
		j = (int)plr[myplr]._py;
		uVar4 = CanPut__Fii(i_00,j);
		if (uVar4 == '\0') {
			i = 1;
			while ((i < 8 && (iVar10 = 0, !bVar1))) {
				do {
					i_00 = (int)plr[myplr]._px + (int)offset_x[iVar10] * i;
					j = (int)plr[myplr]._py + (int)offset_y[iVar10] * i;
					uVar4 = CanPut__Fii(i_00,j);
					if (uVar4 != '\0') {
						bVar1 = true;
					}
					iVar10 = iVar10 + 1;
				} while ((iVar10 < 8) && (!bVar1));
				i = i + 1;
			}
		}
		uVar4 = CanPut__Fii(i_00,j);
		if (uVar4 == '\0') {
			i = -1;
		}
		else {
			i = (int)itemavail;
			dung_map[i_00 * 0x70 + j].dItem = itemavail + '\x01';
			cVar3 = s__800d53d5[0x7d - numitems];
			(&itemactive)[numitems] = itemavail;
			itemavail = cVar3;
			pIVar2 = item + i;
			pIVar9 = &plr[pnum].HoldItem;
			do {
				pIVar8 = pIVar9;
				pIVar7 = pIVar2;
				iVar10 = pIVar8->_iVMult1;
				iVar5 = pIVar8->_iVAdd2;
				iVar6 = pIVar8->_iVMult2;
				pIVar7->_iVAdd1 = pIVar8->_iVAdd1;
				pIVar7->_iVMult1 = iVar10;
				pIVar7->_iVAdd2 = iVar5;
				pIVar7->_iVMult2 = iVar6;
				pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
				pIVar2 = (ItemStruct *)&pIVar7->_iSeed;
			} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
			iVar10 = pIVar8->_ivalue;
			iVar5 = pIVar8->_iIvalue;
			((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
			pIVar7->_ivalue = iVar10;
			pIVar7->_iIvalue = iVar5;
			item[i]._ix = (char)i_00;
			item[i]._iy = (char)j;
			RespawnItem__FiUc(i,'\x01');
			numitems = numitems + 1;
			NewCursor__Fi(1);
			PlaySFX__Fi(IS_IGRAB);
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
		i = -1;
	}
	return i;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SyncPutItem__FiiiiUsiUciiiiiUl(int pnum /*$s7*/, int x /*$fp*/, int y /*stack -80*/, int idx /*stack -72*/, int icreateinfo /*stack 16*/, int iseed /*stack 20*/, int Id /*stack 24*/, int dur /*stack 28*/, int mdur /*stack 32*/, int ch /*stack 36*/, int mch /*stack 40*/, int ivalue /*stack 44*/, unsigned long ibuff /*stack 48*/)
 // line 3138, offset 0x8015f504
	/* begin block 1 */
		// Start line: 3139
		// Start offset: 0x8015F504
		// Variables:
	// 		int ii; // $s0
	// 		int d; // $s1
	// 		int dy; // $s0

		/* begin block 1.1 */
			// Start line: 3186
			// Start offset: 0x8015F6A8

			/* begin block 1.1.1 */
				// Start line: 3186
				// Start offset: 0x8015F6C0

				/* begin block 1.1.1.1 */
					// Start line: 3187
					// Start offset: 0x8015F6C0

					/* begin block 1.1.1.1.1 */
						// Start line: 3190
						// Start offset: 0x8015F73C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3191
							// Start offset: 0x8015F73C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3194
								// Start offset: 0x8015F794
								// Variables:
							// 		unsigned char done; // $s5

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 3195
									// Start offset: 0x8015F794
									// Variables:
								// 		int l; // $s2

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 3197
										// Start offset: 0x8015F79C

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 3198
											// Start offset: 0x8015F7B0
											// Variables:
										// 		int j; // $s4

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 3198
												// Start offset: 0x8015F7CC
												// Variables:
											// 		int yy; // $s3

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 3199
													// Start offset: 0x8015F7E0
													// Variables:
												// 		int i; // $s1

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 3200
														// Start offset: 0x8015F7F4
														// Variables:
													// 		int xx; // $s0
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8015F83C
													// End Line: 3205
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8015F844
												// End Line: 3206
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8015F844
											// End Line: 3206
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8015F84C
										// End Line: 3207
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8015F84C
									// End Line: 3207
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8015F854
								// End Line: 3208
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8015F85C
							// End Line: 3213
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015F85C
						// End Line: 3213
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015F85C
					// End Line: 3213
				/* end block 1.1.1.1 */
				// End offset: 0x8015F85C
				// End Line: 3213
			/* end block 1.1.1 */
			// End offset: 0x8015F85C
			// End Line: 3213
		/* end block 1.1 */
		// End offset: 0x8015F85C
		// End Line: 3213
	/* end block 1 */
	// End offset: 0x8015FA30
	// End Line: 3246

	/* begin block 2 */
		// Start line: 6753
	/* end block 2 */
	// End Line: 6754

/* WARNING: Could not reconcile some variable overlaps */

int SyncPutItem__FiiiiUsiUciiiiiUl
							(int pnum,int x,int y,int idx,int icreateinfo,int iseed,int Id,int dur,int mdur,int ch
							,int mch,int ivalue,ulong ibuff)

{
	short sVar1;
	bool bVar2;
	char cVar3;
	uchar uVar4;
	int ii;
	int iVar5;
	int i;
	uint uVar6;
	int iVar7;
	int j;
	int local_50;
	
	if (numitems < 0x7a) {
		ii = FindGetItem__FiUsi(idx,(ushort)icreateinfo,iseed);
		if (ii != -1) {
			SyncGetItem__FiiiUsi(x,y,idx,(ushort)icreateinfo,iseed);
		}
		bVar2 = false;
		ii = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,x,y);
		sVar1 = plr[pnum]._py;
		iVar5 = abs(x - (int)plr[pnum]._px);
		if ((1 < iVar5) || (iVar5 = abs(y - (int)sVar1), 1 < iVar5)) {
			bVar2 = true;
		}
		local_50 = y;
		if (bVar2) {
			x = (int)plr[pnum]._px + (int)offset_x[ii];
			local_50 = (int)plr[pnum]._py + (int)offset_y[ii];
		}
		uVar4 = CanPut__Fii(x,local_50);
		if (uVar4 == '\0') {
			uVar6 = ii - 1U & 7;
			x = (int)plr[pnum]._px + (int)offset_x[uVar6];
			local_50 = (int)plr[pnum]._py + (int)offset_y[uVar6];
			uVar4 = CanPut__Fii(x,local_50);
			if (uVar4 == '\0') {
				uVar6 = uVar6 + 2 & 7;
				x = (int)plr[pnum]._px + (int)offset_x[uVar6];
				local_50 = (int)plr[pnum]._py + (int)offset_y[uVar6];
				uVar4 = CanPut__Fii(x,local_50);
				bVar2 = false;
				if (uVar4 == '\0') {
					ii = 1;
					while (ii < 0x32) {
						iVar5 = -ii;
						if (bVar2) goto LAB_8015f85c;
						while ((iVar5 <= ii && (iVar7 = -ii, !bVar2))) {
							j = (int)plr[pnum]._py + iVar5;
							while ((iVar7 <= ii && (!bVar2))) {
								i = (int)plr[pnum]._px + iVar7;
								uVar4 = CanPut__Fii(i,j);
								if (uVar4 != '\0') {
									bVar2 = true;
									x = i;
									local_50 = j;
								}
								iVar7 = iVar7 + 1;
							}
							iVar5 = iVar5 + 1;
						}
						ii = ii + 1;
					}
					if (!bVar2) {
						return -1;
					}
				}
			}
		}
LAB_8015f85c:
		ii = (int)itemavail;
		dung_map[x * 0x70 + local_50].dItem = itemavail + '\x01';
		cVar3 = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = itemavail;
		itemavail = cVar3;
		if (idx == 0x17) {
			RecreateEar__FiUsiUciiiiii
								(ii,(ushort)icreateinfo,iseed,(uchar)Id,dur,mdur,ch,mch,ivalue,ibuff);
		}
		else {
			RecreateItem__FiiUsiii(ii,idx,(ushort)icreateinfo,iseed,ivalue,ibuff);
			if ((uchar)Id != '\0') {
				item[ii]._iIdentified = '\x01';
			}
			item[ii]._iDurability = (short)dur;
			item[ii]._iMaxDur = (short)mdur;
			item[ii]._iCharges = (uchar)ch;
			item[ii]._iMaxCharges = (uchar)mch;
		}
		item[ii]._ix = (char)x;
		item[ii]._iy = (char)local_50;
		RespawnItem__FiUc(ii,'\x01');
		numitems = numitems + 1;
	}
	else {
		PlaySFX__Fi(IS_TITERR);
		ii = -1;
	}
	return ii;
}



// decompiled code
// original method signature: 
// char /*$ra*/ CheckInvHLight__Fv()
 // line 3250, offset 0x8015fa64
	/* begin block 1 */
		// Start line: 3251
		// Start offset: 0x8015FA64
		// Variables:
	// 		int r; // $s0
	// 		char rv; // $s3
	// 		struct ItemStruct *pi; // $s1
	// 		struct PlayerStruct *p; // $s2

		/* begin block 1.1 */
			// Start line: 3345
			// Start offset: 0x8015FC78

			/* begin block 1.1.1 */
				// Start line: 3345
				// Start offset: 0x8015FC84
				// Variables:
			// 		int nGold; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8015FC84
			// End Line: 3346
		/* end block 1.1 */
		// End offset: 0x8015FDD4
		// End Line: 3371
	/* end block 1 */
	// End offset: 0x8015FDDC
	// End Line: 3374

	/* begin block 2 */
		// Start line: 6998
	/* end block 2 */
	// End Line: 6999

/* WARNING: Unknown calling convention yet parameter storage is locked */

char CheckInvHLight__Fv(void)

{
	int iVar1;
	char cVar2;
	char *__src;
	char *pcVar3;
	char cVar4;
	ItemStruct *ItemPtr;
	int nGold;
	PlayerStruct *pPVar5;
	char cVar6;
	
	nGold = InvCursPos;
	if (0x48 < InvCursPos) {
		return -1;
	}
	_infoclr[sel_data] = '\0';
	iVar1 = myplr;
	pPVar5 = plr + myplr;
	ClearPanel__Fv();
	cVar6 = -1;
	ItemPtr = (ItemStruct *)0x0;
	if ((&_pcurs)[myplr] < 0xc) {
		if ((uint)nGold < 4) {
			cVar6 = '\0';
			ItemPtr = plr[iVar1].InvBody;
		}
		else {
			if (nGold == 4) {
				cVar6 = '\x01';
				ItemPtr = plr[iVar1].InvBody + 1;
			}
			else {
				if (nGold == 5) {
					cVar6 = '\x02';
					ItemPtr = plr[iVar1].InvBody + 2;
				}
				else {
					if (nGold == 6) {
						cVar6 = '\x03';
						ItemPtr = plr[iVar1].InvBody + 3;
					}
					else {
						if (nGold - 7U < 6) {
							cVar6 = '\x04';
							ItemPtr = plr[iVar1].InvBody + 4;
						}
						else {
							if (nGold - 0xdU < 6) {
								ItemPtr = plr[iVar1].InvBody + 4;
								if ((plr[iVar1].InvBody[4]._itype == -1) || (plr[iVar1].InvBody[4]._iLoc != '\x02'))
								{
									cVar6 = '\x05';
									ItemPtr = plr[iVar1].InvBody + 5;
								}
								else {
									cVar6 = '\x04';
								}
							}
							else {
								if (nGold - 0x13U < 6) {
									cVar6 = '\x06';
									ItemPtr = plr[iVar1].InvBody + 6;
								}
								else {
									if (nGold - 0x19U < 0x28) {
										nGold = abs((int)(char)(&DAT_0000156f)[(int)&pPVar5->_pmode + nGold]);
										if (nGold == 0) {
											return -1;
										}
										cVar6 = (char)nGold + '\x06';
										ItemPtr = pPVar5->InvList + nGold + -1;
									}
									else {
										if (0x40 < nGold) {
											ItemPtr = pPVar5->SpdList + nGold + -0x41;
											drawsbarflag = '\x01';
											cVar6 = (char)nGold + -0x12;
											if (ItemPtr->_itype == -1) {
												drawsbarflag = '\x01';
												return -1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else {
		ItemPtr = &plr[iVar1].HoldItem;
	}
	if (ItemPtr->_itype == -1) {
		return -1;
	}
	if (ItemPtr->_itype == 0xb) {
		nGold = ItemPtr->_ivalue;
		__src = GetStr__Fi(STR__I_GOLD__S_1279);
		pcVar3 = get_pieces_str__Fi(nGold);
		sprintf(_infostr + sel_data * 0x100,__src,nGold,pcVar3);
		return cVar6;
	}
	if (invflag == '\0') {
		cVar4 = ItemPtr->_iMagical;
		if (cVar4 == '\x01') {
			cVar2 = '\x01';
		}
		else {
LAB_8015fd3c:
			cVar2 = '\x03';
			if (cVar4 != '\x02') goto LAB_8015fd58;
		}
	}
	else {
		if (ItemPtr->_iStatFlag == '\0') {
			cVar2 = '\x02';
		}
		else {
			cVar4 = ItemPtr->_iMagical;
			if (cVar4 != '\x01') goto LAB_8015fd3c;
			cVar2 = '\x01';
		}
	}
	_infoclr[sel_data] = cVar2;
LAB_8015fd58:
	__src = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemPtr->_iName,0x100);
	strcpy(_infostr + sel_data * 0x100,__src);
	if (ItemPtr->_iIdentified == '\0') {
		PrintItemDur__FPC10ItemStruct(ItemPtr);
	}
	else {
		__src = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemPtr->_iIName,0x100);
		strcpy(_infostr + sel_data * 0x100,__src);
		PrintItemDetails__FPC10ItemStruct(ItemPtr);
	}
	return cVar6;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveScroll__Fi(int pnum /*$s0*/)
 // line 3380, offset 0x8015fdfc
	/* begin block 1 */
		// Start line: 3381
		// Start offset: 0x8015FDFC
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8015FFCC
	// End Line: 3403

	/* begin block 2 */
		// Start line: 7280
	/* end block 2 */
	// End Line: 7281

void RemoveScroll__Fi(int pnum)

{
	int iv;
	int iv_00;
	
	iv = 0;
	if (0 < plr[pnum]._pNumInv) {
		iv_00 = 0;
		do {
			if (((*(short *)((int)&plr[pnum].InvList[0]._itype + iv_00) != -1) &&
					((uint)(&plr[pnum].InvList[0]._iMiscId)[iv_00] - 0x15 < 2)) &&
				 ((&plr[pnum].InvList[0]._iSpell)[iv_00] == plr[pnum]._pSpell)) {
				RemoveInvItem__Fii(pnum,iv);
				goto LAB_8015ffac;
			}
			iv = iv + 1;
			iv_00 = iv_00 + 0x6c;
		} while (iv < plr[pnum]._pNumInv);
	}
	iv_00 = 0;
	iv = pnum * 0x19e8;
	while (((*(short *)((int)&plr[0].SpdList[0]._itype + iv) == -1 ||
					(1 < (uint)(&plr[0].SpdList[0]._iMiscId)[iv] - 0x15)) ||
				 ((&plr[0].SpdList[0]._iSpell)[iv] != plr[pnum]._pSpell))) {
		iv_00 = iv_00 + 1;
		iv = iv + 0x6c;
		if (7 < iv_00) {
			return;
		}
	}
	RemoveSpdBarItem__Fii(pnum,iv_00);
LAB_8015ffac:
	CalcPlrScrolls__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ UseScroll__Fv()
 // line 3409, offset 0x8015ffe0
	/* begin block 1 */
		// Start line: 3410
		// Start offset: 0x8015FFE0
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8016023C
	// End Line: 3432

	/* begin block 2 */
		// Start line: 7344
	/* end block 2 */
	// End Line: 7345

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar UseScroll__Fv(void)

{
	int iVar1;
	int iVar2;
	
	if ((&_pcurs)[myplr] == 1) {
		if ((leveltype == '\0') && ((&spelldata)[plr[myplr]._pRSpell].sTownSpell == '\0')) {
			return '\0';
		}
		iVar1 = 0;
		if (0 < plr[myplr]._pNumInv) {
			iVar2 = 0;
			do {
				if (((*(short *)((int)&plr[myplr].InvList[0]._itype + iVar2) != -1) &&
						((uint)(&plr[myplr].InvList[0]._iMiscId)[iVar2] - 0x15 < 2)) &&
					 ((int)(&plr[myplr].InvList[0]._iSpell)[iVar2] == plr[myplr]._pRSpell)) {
					return '\x01';
				}
				iVar1 = iVar1 + 1;
				iVar2 = iVar2 + 0x6c;
			} while (iVar1 < plr[myplr]._pNumInv);
		}
		iVar2 = 0;
		iVar1 = myplr * 0x19e8;
		do {
			if (((*(short *)((int)&plr[0].SpdList[0]._itype + iVar1) != -1) &&
					((uint)(&plr[0].SpdList[0]._iMiscId)[iVar1] - 0x15 < 2)) &&
				 ((int)(&plr[0].SpdList[0]._iSpell)[iVar1] == plr[myplr]._pRSpell)) {
				return '\x01';
			}
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x6c;
		} while (iVar2 < 8);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3438, offset 0x80160248
	/* begin block 1 */
		// Start line: 3439
		// Start offset: 0x80160248
	/* end block 1 */
	// End offset: 0x8016029C
	// End Line: 3446

	/* begin block 2 */
		// Start line: 7399
	/* end block 2 */
	// End Line: 7400

void UseStaffCharge__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	
	if ((((ptrplr->InvBody[4]._itype != -1) && (ptrplr->InvBody[4]._iMiscId == '\x17')) &&
			((int)ptrplr->InvBody[4]._iSpell == ptrplr->_pRSpell)) &&
		 (uVar1 = ptrplr->InvBody[4]._iCharges, uVar1 != '\0')) {
		ptrplr->InvBody[4]._iCharges = uVar1 + -1;
		CalcPlrStaff__FP12PlayerStruct(ptrplr);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ UseStaff__Fv()
 // line 3453, offset 0x801602ac
	/* begin block 1 */
		// Start line: 3454
		// Start offset: 0x801602AC
	/* end block 1 */
	// End offset: 0x80160364
	// End Line: 3462

	/* begin block 2 */
		// Start line: 7430
	/* end block 2 */
	// End Line: 7431

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar UseStaff__Fv(void)

{
	bool bVar1;
	
	if ((&_pcurs)[myplr] == 1) {
		bVar1 = false;
		if (((plr[myplr].InvBody[4]._itype != -1) && (plr[myplr].InvBody[4]._iMiscId == '\x17')) &&
			 ((int)plr[myplr].InvBody[4]._iSpell == plr[myplr]._pRSpell)) {
			bVar1 = plr[myplr].InvBody[4]._iCharges != '\0';
		}
	}
	else {
		bVar1 = false;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartGoldDrop__Fv()
 // line 3512, offset 0x8016036c
	/* begin block 1 */
		// Start line: 3513
		// Start offset: 0x8016036C
	/* end block 1 */
	// End offset: 0x80160468
	// End Line: 3527

	/* begin block 2 */
		// Start line: 7549
	/* end block 2 */
	// End Line: 7550

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartGoldDrop__Fv(void)

{
	int iVar1;
	
	iVar1 = (int)_pcursinvitem[sel_data];
	if (iVar1 < 0x2f) {
		initialDropGoldValue = plr[myplr].InvList[iVar1 + -7]._ivalue;
	}
	else {
		initialDropGoldValue = plr[myplr].SpdList[iVar1 + -0x2f]._ivalue;
	}
	dropGoldFlag = '\x01';
	dropGoldValue = 0;
	initialDropGoldIndex = (int)_pcursinvitem[sel_data];
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ UseInvItem__Fii(int pnum /*$s0*/, int cii /*$a1*/)
 // line 3535, offset 0x80160470
	/* begin block 1 */
		// Start line: 3536
		// Start offset: 0x80160470
		// Variables:
	// 		int c; // $s2
	// 		int idata; // $v1
	// 		int it; // $v1
	// 		struct ItemStruct *Item; // $s1
	// 		unsigned char speedlist; // $s3
	/* end block 1 */
	// End offset: 0x80160A14
	// End Line: 3666

	/* begin block 2 */
		// Start line: 7593
	/* end block 2 */
	// End Line: 7594

uchar UseInvItem__Fii(int pnum,int cii)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	_135fake psfx;
	int iVar4;
	int iv;
	
	if (((plr[pnum]._pInvincible != '\0') && (plr[pnum]._pHitPoints == 0)) && (pnum == myplr)) {
		return '\x01';
	}
	if ((&_pcurs)[myplr] != 1) {
		return '\x01';
	}
	if (stextflag != '\0') {
		return '\x01';
	}
	if (cii < 6) {
		return '\0';
	}
	iv = cii + -7;
	if (cii < 0x2f) {
		iVar4 = pnum * 0x19e8 + -0x7ff25624 + iv * 0x6c;
		bVar2 = false;
	}
	else {
		if (talkflag != '\0') {
			return '\x01';
		}
		iv = cii + -0x2f;
		iVar4 = pnum * 0x19e8 + -0x7ff24518 + iv * 0x6c;
		bVar2 = true;
	}
	iVar3 = (int)*(short *)(iVar4 + 0x2e);
	if (iVar3 == 0x11) {
		cVar1 = plr[pnum]._pClass;
		if (cVar1 == '\0') {
			sfxdnum = 0x331;
		}
		else {
			if (cVar1 == '\x01') {
				sfxdnum = 0x2c3;
			}
			else {
				if (cVar1 != '\x02') {
					sfxdelay = 10;
					return '\x01';
				}
				sfxdnum = 0x25b;
			}
		}
		sfxdelay = 10;
		return '\x01';
	}
	if (iVar3 == 0x13) {
		PlaySFX__Fi(IS_IBOOK);
		cVar1 = plr[pnum]._pClass;
		if (cVar1 == '\0') {
			sfxdelay = 10;
			sfxdnum = 0x2ee;
			return '\x01';
		}
		if (cVar1 == '\x01') {
			sfxdelay = 10;
			sfxdnum = 0x280;
			return '\x01';
		}
		if (cVar1 == '\x02') {
			sfxdelay = 10;
			sfxdnum = 0x218;
			return '\x01';
		}
		sfxdelay = 10;
		return '\x01';
	}
	if ((&AllItemsUseable)[iVar3] == '\0') {
		return '\0';
	}
	if (*(char *)(iVar4 + 0x66) == '\0') {
		cVar1 = plr[pnum]._pClass;
		if (cVar1 == '\0') {
			psfx = PS_WARR13;
		}
		else {
			if (cVar1 == '\x01') {
				psfx = PS_ROGUE13;
			}
			else {
				if (cVar1 != '\x02') {
					return '\x01';
				}
				psfx = PS_MAGE13;
			}
		}
		PlaySFX__Fi(psfx);
		return '\x01';
	}
	if ((*(char *)(iVar4 + 0x4d) == '\0') && (*(short *)(iVar4 + 0x2c) == 0xb)) {
		StartGoldDrop__Fv();
		return '\x01';
	}
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if ((uint)*(byte *)(iVar4 + 0x4d) - 0x15 < 2) {
		if (((gbMaxPlayers == '\x02') && (*(char *)(iVar4 + 0x3d) == ' ')) &&
			 (plr[pnum ^ 1].plractive != '\0')) {
			return '\0';
		}
		if ((((uint)*(byte *)(iVar4 + 0x4d) - 0x15 < 2) && (currlevel == '\0')) &&
			 ((&spelldata)[(int)*(char *)(iVar4 + 0x3d)].sTownSpell == '\0')) {
			cVar1 = plr[pnum]._pClass;
			if (cVar1 == '\0') {
				psfx = PS_WARR27;
			}
			else {
				if (cVar1 == '\x01') {
					psfx = PS_ROGUE27;
				}
				else {
					if (cVar1 != '\x02') {
						return '\0';
					}
					psfx = PS_MAGE27;
				}
			}
			PlaySFX__Fi(psfx);
			return '\0';
		}
	}
	psfx = IS_RBOOK;
	if (*(char *)(iVar4 + 0x4d) != '\x18') {
		if (pnum != myplr) goto LAB_80160988;
		psfx = ItemInvSnds[(uint)ItemCAnimTbl[(uint)*(byte *)(iVar4 + 0x4c)]];
	}
	PlaySFX__Fi(psfx);
LAB_80160988:
	UseItem__Fiii(pnum,(uint)*(byte *)(iVar4 + 0x4d),(int)*(char *)(iVar4 + 0x3d));
	if (bVar2) {
		RemoveSpdBarItem__Fii(pnum,iv);
		return '\x01';
	}
	if (plr[pnum].InvList[iv]._iMiscId != '*') {
		RemoveInvItem__Fii(pnum,iv);
		return '\x01';
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoTelekinesis__Fv()
 // line 3671, offset 0x80160a34
	/* begin block 1 */
		// Start line: 3672
		// Start offset: 0x80160A34
	/* end block 1 */
	// End offset: 0x80160B4C
	// End Line: 3684

	/* begin block 2 */
		// Start line: 7876
	/* end block 2 */
	// End Line: 7877

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoTelekinesis__Fv(void)

{
	uchar uVar1;
	
	if ((&_pcursobj)[sel_data] != -1) {
		NetSendCmdParam1__FUcUcUs('\x01','\x1b',(short)(&_pcursobj)[sel_data]);
	}
	if ((int)(&_pcursitem)[sel_data] != 0xffffffff) {
		NetSendCmdGItem__FUcUcUcUcUc
							('\x01','(',(uchar)myplr,(uchar)myplr,(int)(&_pcursitem)[sel_data] & 0xff);
	}
	if ((((&_pcursmonst)[sel_data] != -1) &&
			(uVar1 = M_Talker__Fi((&_pcursmonst)[sel_data]), uVar1 == '\0')) &&
		 (monster[(&_pcursmonst)[sel_data]].mtalkmsg == 0)) {
		NetSendCmdParam1__FUcUcUs('\x01','\x1c',(ushort)(&_pcursmonst)[sel_data]);
	}
	NewCursor__Fi(1);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CalculateGold__Fi(int pnum /*$a0*/)
 // line 3690, offset 0x80160b64
	/* begin block 1 */
		// Start line: 3691
		// Start offset: 0x80160B64
		// Variables:
	// 		int i; // $a2
	// 		long gold; // $t1
	/* end block 1 */
	// End offset: 0x80160C90
	// End Line: 3710

	/* begin block 2 */
		// Start line: 7914
	/* end block 2 */
	// End Line: 7915

long CalculateGold__Fi(int pnum)

{
	int iVar1;
	int iVar2;
	long lVar3;
	
	lVar3 = 0;
	iVar2 = 0;
	iVar1 = pnum * 0x19e8;
	do {
		if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar1) == 0xb) {
			force_redraw = 0xff;
			lVar3 = lVar3 + *(int *)((int)&plr[0].SpdList[0]._ivalue + iVar1);
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x6c;
	} while (iVar2 < 8);
	iVar1 = 0;
	if (0 < plr[pnum]._pNumInv) {
		iVar2 = 0;
		do {
			if (*(short *)((int)&plr[pnum].InvList[0]._itype + iVar2) == 0xb) {
				lVar3 = lVar3 + *(int *)((int)&plr[pnum].InvList[0]._ivalue + iVar2);
			}
			iVar1 = iVar1 + 1;
			iVar2 = iVar2 + 0x6c;
		} while (iVar1 < plr[pnum]._pNumInv);
	}
	return lVar3;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DropItemBeforeTrig__Fv()
 // line 3723, offset 0x80160c9c
	/* begin block 1 */
		// Start line: 3724
		// Start offset: 0x80160C9C
	/* end block 1 */
	// End offset: 0x80160CE4
	// End Line: 3731

	/* begin block 2 */
		// Start line: 7981
	/* end block 2 */
	// End Line: 7982

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DropItemBeforeTrig__Fv(void)

{
	uchar uVar1;
	
	uVar1 = TryInvPut__Fv();
	if (uVar1 != '\0') {
		NetSendCmdPItem__FUcUcUcUc('\x01','\n',(uchar)cursmx,(uchar)cursmy);
		NewCursor__Fi(1);
	}
	return (uchar)(uVar1 != '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ ControlInv__Fv()
 // line 3844, offset 0x80160cf4
	/* begin block 1 */
		// Start line: 3845
		// Start offset: 0x80160CF4
	/* end block 1 */
	// End offset: 0x801610A0
	// End Line: 3977

	/* begin block 2 */
		// Start line: 8237
	/* end block 2 */
	// End Line: 8238

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ControlInv__Fv(void)

{
	bool bVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	
	CheckNewPath__Fi(myplr);
	InvSetItemCurs__Fv();
	iVar4 = sfxdelay + -1;
	if ((0 < sfxdelay) && (sfxdelay = iVar4, iVar4 == 0)) {
		sfxdelay = iVar4;
		PlaySFX__Fi(sfxdnum);
	}
	(&_pcursitem)[sel_data] = -1;
	uitemflag = '\0';
	ReadPad__Fi(-1);
	if ((&_pcurs)[myplr] == 9) {
		invflag = '\0';
	}
	if (InvCursPos < 0x19) {
		InvBackAY = 0;
	}
	else {
		InvBackAY = 0x60;
	}
	if (InvBackAY < InvBackY) {
		bVar1 = InvBackY + -0x10 < InvBackAY;
		InvBackY = InvBackY + -0x10;
LAB_80160df8:
		if (bVar1) {
			InvBackY = InvBackAY;
		}
	}
	else {
		if (InvBackY < InvBackAY) {
			bVar1 = InvBackAY < InvBackY + 0x10;
			InvBackY = InvBackY + 0x10;
			goto LAB_80160df8;
		}
	}
	if (invflag == '\0') {
		ClearPanel__Fv();
	}
	else {
		cVar2 = CheckInvHLight__Fv();
		_pcursinvitem[sel_data] = cVar2;
		if (_pcursinvitem[sel_data] == -1) {
			ClrCursor__Fi(options_pad);
		}
	}
	if (InvPageFlag != 0) {
		if ((DavesPad & 0x400U) == 0) goto LAB_80160ec0;
		PlaySFX__Fi(IS_TITLEMOV);
		if (InvPageNo == 0) {
			InvPageNo = 1;
			goto LAB_80160ec0;
		}
	}
	InvPageNo = 0;
LAB_80160ec0:
	if (uitemflag != '\0') {
		DrawUniqueInfo__Fv();
	}
	if ((DavesPad & 4U) != 0) {
		InvMoveCursLeft__Fv();
	}
	if ((DavesPad & 8U) != 0) {
		InvMoveCursRight__Fv();
	}
	if ((DavesPad & 1U) != 0) {
		InvMoveCursUp__Fv();
	}
	if ((DavesPad & 2U) != 0) {
		InvMoveCursDown__Fv();
	}
	if ((DavesPad & 0x40U) != 0) {
		if (((&_pcurs)[myplr] - 2U < 2) || ((&_pcurs)[myplr] == 4)) {
			TryIconCurs__Fv();
		}
		else {
			CheckInvScrn__Fv();
		}
	}
	if ((DavesPad & 0x200U) != 0) {
		ignore_buttons = &DAT_00000001;
		UseInvItem__Fii(myplr,(int)_pcursinvitem[sel_data]);
	}
	if (((DavesPad & 0x80U) != 0) && (0xb < (&_pcurs)[myplr])) {
		if ((numitems < 0x7a) && (uVar3 = TryInvPut__Fv(), uVar3 != '\0')) {
			NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
		}
		else {
			PlaySFX__Fi(IS_TITERR);
		}
	}
	InvAlignObject__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvGetItemWH__Fi(int Pos /*$a0*/)
 // line 3982, offset 0x801610b0
	/* begin block 1 */
		// Start line: 3983
		// Start offset: 0x801610B0
	/* end block 1 */
	// End offset: 0x801611A0
	// End Line: 3992

	/* begin block 2 */
		// Start line: 8515
	/* end block 2 */
	// End Line: 8516

void InvGetItemWH__Fi(int Pos)

{
	int iVar1;
	
	iVar1 = (int)*(char *)(myplr * 0x19e8 + -0x7ff24540 + Pos);
	if (iVar1 != 0) {
		if (iVar1 < 1) {
			iVar1 = -iVar1;
		}
		ItemNo = ZEXT14(plr[myplr].InvList[iVar1 + -1]._iCurs);
		ItemW = ZEXT14(s__8010d524[ItemNo] >> 4);
		ItemH = ZEXT14(s__0000000000000000000_00000000000_8010d5d8[ItemNo] >> 4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvAlignObject__Fv()
 // line 3997, offset 0x801611a8
	/* begin block 1 */
		// Start line: 3998
		// Start offset: 0x801611A8
	/* end block 1 */
	// End offset: 0x80161354
	// End Line: 4017

	/* begin block 2 */
		// Start line: 8545
	/* end block 2 */
	// End Line: 8546

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvAlignObject__Fv(void)

{
	int iVar1;
	uint uVar2;
	
	if ((InvCursPos - 0x19U < 0x28) && (0xb < (&_pcurs)[myplr])) {
		ItemNo = ZEXT14(plr[myplr].HoldItem._iCurs);
		ItemW = (uint)(s__8010d524[ItemNo] >> 4) - 1;
		ItemH = (uint)(s__0000000000000000000_00000000000_8010d5d8[ItemNo] >> 4) - 1;
		if ((InvCursPos - 0x19U < 10) && (0x22 < InvCursPos + ItemW)) {
			InvCursPos = 0x22 - ItemW;
		}
		uVar2 = InvCursPos - 0x2d;
		if ((InvCursPos - 0x23U < 10) && (uVar2 = InvCursPos - 0x2d, 0x2c < InvCursPos + ItemW)) {
			InvCursPos = -ItemW + 0x2c;
			uVar2 = -ItemW - 1;
		}
		if ((uVar2 < 10) && (0x36 < InvCursPos + ItemW)) {
			InvCursPos = 0x36 - ItemW;
		}
		if ((InvCursPos - 0x37U < 10) && (0x40 < InvCursPos + ItemW)) {
			InvCursPos = 0x40 - ItemW;
		}
		iVar1 = InvCursPos;
		do {
			InvCursPos = iVar1;
			iVar1 = InvCursPos + -10;
		} while (0x40 < InvCursPos + ItemH * 10);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvSetItemCurs__Fv()
 // line 4023, offset 0x8016135c
	/* begin block 1 */
		// Start line: 4024
		// Start offset: 0x8016135C
		// Variables:
	// 		int ItemNo; // $a2
	/* end block 1 */
	// End offset: 0x801614F0
	// End Line: 4046

	/* begin block 2 */
		// Start line: 8598
	/* end block 2 */
	// End Line: 8599

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvSetItemCurs__Fv(void)

{
	char cVar1;
	int iVar2;
	
	iVar2 = (int)(&plr[myplr].InvList[0x27]._iPLMag)[InvCursPos];
	if (((iVar2 != 0) && ((&_pcurs)[myplr] < 0xc)) && (InvCursPos - 0x19U < 0x28)) {
		if (0x19 < InvCursPos) {
			cVar1 = (&plr[myplr].InvList[0x27]._iPLStr)[InvCursPos];
			while (((int)cVar1 == iVar2 || ((int)cVar1 == -iVar2))) {
				cVar1 = (&plr[myplr].InvList[0x27]._iClass)[InvCursPos];
				InvCursPos = InvCursPos + -1;
			}
		}
		if (0x22 < InvCursPos) {
			cVar1 = (&DAT_000010c1)[(int)&plr[myplr].InvList[0]._iVAdd1 + InvCursPos];
			while ((((int)cVar1 == iVar2 || ((int)cVar1 == -iVar2)) && (0x22 < InvCursPos))) {
				cVar1 = (&plr[myplr].InvList[0x27]._iPLLight)[InvCursPos];
				InvCursPos = InvCursPos + -10;
			}
		}
		if (InvCursPos < 0x19) {
			InvCursPos = 0x19;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvMoveCursLeft__Fv()
 // line 4052, offset 0x801614fc
	/* begin block 1 */
		// Start line: 4053
		// Start offset: 0x801614FC
		// Variables:
	// 		int ItemInc; // $a1
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x80161690
	// End Line: 4148

	/* begin block 2 */
		// Start line: 8654
	/* end block 2 */
	// End Line: 8655

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursLeft__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = InvCursPos;
	iVar2 = 0;
	if ((&_pcurs)[myplr] < 0xc) {
		switch(InvCursPos) {
		case 0:
		case 4:
		case 6:
switchD_80161580_caseD_d:
			InvCursPos = 7;
			break;
		default:
switchD_80161580_caseD_1:
			if ((InvCursPos - 0x19U < 0x28) || (0x40 < InvCursPos)) {
				iVar2 = 1;
			}
			break;
		case 5:
			InvCursPos = 0x13;
			break;
		case 7:
switchD_80161580_caseD_7:
			InvCursPos = 0xd;
			break;
		case 0xd:
switchD_80161580_caseD_4:
			InvCursPos = 5;
			break;
		case 0x13:
switchD_80161580_caseD_5:
			InvCursPos = 4;
		}
switchD_80161580_caseD_0:
		if (InvCursPos - 0x19U < 0x28) {
			iVar3 = InvCursPos - iVar2;
			iVar2 = (iVar3 + -0x19) % 10;
			if ((iVar2 == 9) || (iVar2 == -1)) {
				iVar3 = iVar3 + 10;
			}
		}
		else {
			iVar3 = InvCursPos;
			if ((0x40 < InvCursPos) && (iVar3 = InvCursPos + 7, 0x41 < InvCursPos)) {
				iVar3 = InvCursPos - iVar2;
			}
		}
		InvCursPos = iVar3;
		InvSetItemCurs__Fv();
		if (iVar1 != InvCursPos) {
			PlaySFX__Fi(IS_TITLEMOV);
		}
		return;
	}
	switch(InvCursPos) {
	case 0:
	case 6:
	case 0x13:
		goto switchD_80161580_caseD_0;
	default:
		goto switchD_80161580_caseD_1;
	case 4:
		goto switchD_80161580_caseD_4;
	case 5:
		goto switchD_80161580_caseD_5;
	case 7:
		goto switchD_80161580_caseD_7;
	case 0xd:
		goto switchD_80161580_caseD_d;
	}
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvMoveCursRight__Fv()
 // line 4153, offset 0x801616a4
	/* begin block 1 */
		// Start line: 4154
		// Start offset: 0x801616A4
		// Variables:
	// 		int ItemInc; // $a0
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x80161944
	// End Line: 4257

	/* begin block 2 */
		// Start line: 8864
	/* end block 2 */
	// End Line: 8865

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursRight__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = InvCursPos;
	iVar2 = 0;
	if ((&_pcurs)[myplr] < 0xc) {
		switch(InvCursPos) {
		case 0:
			InvCursPos = 6;
			break;
		default:
			if (InvCursPos - 0x19U < 0x28) {
				iVar2 = 1;
				if ((&plr[myplr].InvList[0x27]._iPLMag)[InvCursPos] != '\0') {
					InvGetItemWH__Fi(InvCursPos - 0x19U);
					iVar2 = ItemW;
				}
				break;
			}
LAB_80161810:
			if (InvCursPos < 0x41) break;
			goto LAB_80161818;
		case 4:
			InvCursPos = 0x13;
			break;
		case 5:
		case 6:
switchD_801617b0_caseD_7:
			InvCursPos = 0xd;
			break;
		case 7:
switchD_801617b0_caseD_5:
			InvCursPos = 4;
			break;
		case 0xd:
switchD_801617b0_caseD_d:
			InvCursPos = 7;
			break;
		case 0x13:
switchD_801617b0_caseD_4:
			InvCursPos = 5;
		}
	}
	else {
		switch(InvCursPos) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_801617b0_caseD_0;
		default:
			if (0x27 < InvCursPos - 0x19U) goto LAB_80161810;
			break;
		case 4:
			goto switchD_801617b0_caseD_4;
		case 5:
			goto switchD_801617b0_caseD_5;
		case 7:
			goto switchD_801617b0_caseD_7;
		case 0xd:
			goto switchD_801617b0_caseD_d;
		}
LAB_80161818:
		iVar2 = 1;
	}
switchD_801617b0_caseD_0:
	if (InvCursPos - 0x19U < 0x28) {
		if ((&_pcurs)[myplr] < 0xc) {
			ItemW = 0;
		}
		else {
			ItemNo = ZEXT14(plr[myplr].HoldItem._iCurs);
			ItemW = (uint)(s__8010d524[ItemNo] >> 4) - 1;
		}
		iVar3 = InvCursPos + iVar2;
		iVar2 = iVar3 + ItemW + -0x19;
		if (iVar2 == (iVar2 / 10) * 10) {
			iVar3 = iVar3 + -10 + ItemW;
		}
	}
	else {
		iVar3 = InvCursPos;
		if ((0x40 < InvCursPos) && (iVar3 = InvCursPos + iVar2, 0x47 < InvCursPos)) {
			iVar3 = InvCursPos + -7;
		}
	}
	InvCursPos = iVar3;
	InvSetItemCurs__Fv();
	if (iVar1 != InvCursPos) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvMoveCursUp__Fv()
 // line 4261, offset 0x80161958
	/* begin block 1 */
		// Start line: 4262
		// Start offset: 0x80161958
		// Variables:
	// 		int ItemInc; // $a0
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x80161B3C
	// End Line: 4355

	/* begin block 2 */
		// Start line: 9090
	/* end block 2 */
	// End Line: 9091

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursUp__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = InvCursPos;
	bVar1 = false;
	if (0xb < (&_pcurs)[myplr]) {
		switch(InvCursPos) {
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 0xd:
		case 0x13:
			goto switchD_80161a18_caseD_0;
		}
		if (InvCursPos - 0x19U < 0x28) {
LAB_80161a38:
			bVar1 = true;
			goto switchD_80161a18_caseD_0;
		}
LAB_80161a44:
		iVar3 = InvCursPos + -9;
		if (InvCursPos < 0x41) goto switchD_80161a18_caseD_0;
		goto LAB_80161a4c;
	}
	switch(InvCursPos) {
	case 0:
		goto switchD_80161a18_caseD_0;
	default:
		if (0x27 < InvCursPos - 0x19U) goto LAB_80161a44;
		iVar3 = 0x13;
		if (0x22 < InvCursPos) goto LAB_80161a38;
		break;
	case 4:
	case 6:
	case 7:
		InvCursPos = 0;
		goto switchD_80161a18_caseD_0;
	case 5:
		iVar3 = 6;
		break;
	case 0xd:
		iVar3 = 6;
		break;
	case 0x13:
		iVar3 = 6;
	}
LAB_80161a4c:
	InvCursPos = iVar3;
switchD_80161a18_caseD_0:
	iVar3 = InvCursPos;
	if (((InvCursPos - 0x19U < 0x28) && (iVar3 = InvCursPos, bVar1)) &&
		 (iVar3 = InvCursPos + -10, InvCursPos < 0x23)) {
		iVar3 = InvCursPos;
		switch((int)(((uint)(byte)plr[myplr].HoldItem._iLoc - 1) * 0x1000000) >> 0x18) {
		case 0:
			iVar3 = 7;
			break;
		case 1:
			iVar3 = 7;
			break;
		case 2:
			iVar3 = 0x13;
			break;
		case 3:
			InvCursPos = 0;
			iVar3 = InvCursPos;
			break;
		case 4:
			iVar3 = 4;
			break;
		case 5:
			iVar3 = 6;
		}
	}
	InvCursPos = iVar3;
	InvSetItemCurs__Fv();
	if (iVar2 != InvCursPos) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvMoveCursDown__Fv()
 // line 4359, offset 0x80161b50
	/* begin block 1 */
		// Start line: 4360
		// Start offset: 0x80161B50
		// Variables:
	// 		int ItemInc; // $s1
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x80161E40
	// End Line: 4460

	/* begin block 2 */
		// Start line: 9293
	/* end block 2 */
	// End Line: 9294

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursDown__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = InvCursPos;
	bVar1 = false;
	if ((&_pcurs)[myplr] < 0xc) {
		switch(InvCursPos) {
		case 0:
			InvCursPos = 6;
			break;
		default:
			if (0x27 < InvCursPos - 0x19U) goto LAB_80161e08;
			if ((&plr[myplr].InvList[0x27]._iPLMag)[InvCursPos] == '\0') {
				if (InvCursPos < 0x38) {
					if (InvCursPos < 0x41) {
						InvCursPos = InvCursPos + 10;
					}
				}
				else {
					InvCursPos = InvCursPos + 9;
				}
			}
			else {
				InvGetItemWH__Fi(InvCursPos - 0x19U);
				if (InvCursPos < 0x39) {
					iVar3 = ItemH * 10;
				}
				else {
					iVar3 = ItemH * 9;
				}
				InvCursPos = InvCursPos + iVar3;
			}
			break;
		case 4:
		case 7:
switchD_80161ccc_caseD_4:
			InvCursPos = 0x19;
			break;
		case 5:
		case 0xd:
switchD_80161ccc_caseD_5:
			InvCursPos = 0x22;
			break;
		case 6:
			InvCursPos = 0x13;
			break;
		case 0x13:
switchD_80161ccc_caseD_0:
			InvCursPos = 0x1d;
		}
	}
	else {
		switch(InvCursPos) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_80161ccc_caseD_0;
		default:
			if (InvCursPos - 0x19U < 0x28) {
				bVar1 = true;
			}
			else {
				if (0x40 < InvCursPos) {
					bVar1 = false;
				}
			}
			break;
		case 4:
		case 7:
			goto switchD_80161ccc_caseD_4;
		case 5:
		case 0xd:
			goto switchD_80161ccc_caseD_5;
		}
	}
	if ((InvCursPos - 0x19U < 0x28) && (bVar1)) {
		ItemNo = ZEXT14(plr[myplr].HoldItem._iCurs);
		ItemW = ZEXT14(s__8010d524[ItemNo] >> 4);
		ItemH = ZEXT14(s__0000000000000000000_00000000000_8010d5d8[ItemNo] >> 4);
		if (InvCursPos < 0x38) {
			iVar3 = InvCursPos + 10;
			if (0x36 < (int)(InvCursPos + (ItemH - 1U) * 10)) goto LAB_80161e08;
		}
		else {
			iVar3 = InvCursPos + 9;
			if (InvCursPos == 0x37) {
				iVar3 = 0x41;
			}
		}
		InvCursPos = iVar3;
	}
LAB_80161e08:
	if (0x48 < InvCursPos) {
		InvCursPos = 0x48;
	}
	InvSetItemCurs__Fv();
	if (iVar2 != InvCursPos) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}





