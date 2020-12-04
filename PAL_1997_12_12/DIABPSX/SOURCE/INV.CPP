#include "THISDUST.H"
#include "INV.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeInvGFX__Fv()
 // line 432, offset 0x80153790
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x80153790
	/* end block 1 */
	// End offset: 0x80153790
	// End Line: 433

	/* begin block 2 */
		// Start line: 865
	/* end block 2 */
	// End Line: 866

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeInvGFX__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawSlot__Fiii(int X /*$a0*/, int Y /*$a1*/, int Frame /*$a2*/)
 // line 438, offset 0x80153798
	/* begin block 1 */
		// Start line: 439
		// Start offset: 0x80153798
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	/* end block 1 */
	// End offset: 0x8015380C
	// End Line: 446

	/* begin block 2 */
		// Start line: 876
	/* end block 2 */
	// End Line: 877

void InvDrawSlot__Fiii(int X,int Y,int Frame)

{
	POLY_FT4 *pPVar1;
	
	pPVar1 = PrintFt4__7TextDatiiiiii(InvGfxTData,Frame,X + 0x80,(Y - InvBackY) + 0x20,0,0xfc,0);
	pPVar1->code = pPVar1->code & 0xfe | 2;
	pPVar1->r0 = BORDERR;
	pPVar1->g0 = BORDERG;
	pPVar1->b0 = BORDERB;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawSlotBack__FiiiiUc(int X /*$s1*/, int Y /*$s0*/, int W /*$s2*/, int H /*$s3*/, int Flag /*stack 16*/)
 // line 450, offset 0x8015381c
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x8015381C
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $a0
	/* end block 1 */
	// End offset: 0x80153A4C
	// End Line: 482

	/* begin block 2 */
		// Start line: 903
	/* end block 2 */
	// End Line: 904

void InvDrawSlotBack__FiiiiUc(int X,int Y,int W,int H,int Flag)

{
	int iVar1;
	short sVar2;
	ushort uVar3;
	POLY_FT4 *pPVar4;
	short sVar5;
	
	pPVar4 = PrintFt4__7TextDatiiiiii(InvPanelTData,0xc6,X,Y,0,0xfb,0);
	iVar1 = InvBackY;
	sVar2 = (short)X + 0x81;
	sVar5 = (short)X + (short)W + 0x7f;
	pPVar4->x0 = sVar2;
	pPVar4->x1 = sVar5;
	pPVar4->x2 = sVar2;
	pPVar4->x3 = sVar5;
	sVar2 = (short)Y - (short)iVar1;
	sVar5 = sVar2 + 0x21;
	pPVar4->y0 = sVar5;
	pPVar4->y1 = sVar5;
	sVar2 = sVar2 + (short)H + 0x1f;
	pPVar4->y2 = sVar2;
	pPVar4->y3 = sVar2;
	pPVar4->tpage = pPVar4->tpage | 0x40;
	pPVar4->u1 = pPVar4->u0 + '\x01';
	pPVar4->u3 = pPVar4->u0 + '\x01';
	pPVar4->v2 = pPVar4->v0 + '\x01';
	pPVar4->v3 = pPVar4->v0 + '\x01';
	pPVar4->code = pPVar4->code & 0xfe | 2;
	if ((byte)Flag == 1) {
		pPVar4->r0 = '\0';
		pPVar4->g0 = ' ';
		pPVar4->b0 = ' ';
		uVar3 = pPVar4->tpage | 0x40;
	}
	else {
		if ((byte)Flag < 2) {
			if ((byte)Flag != 0) {
				return;
			}
			pPVar4->r0 = ' ';
			pPVar4->g0 = ' ';
			pPVar4->b0 = ' ';
			pPVar4->tpage = pPVar4->tpage | 0x40;
			return;
		}
		if ((byte)Flag == 2) {
			pPVar4->r0 = -0x80;
			pPVar4->g0 = -0x80;
			pPVar4->b0 = -0x80;
			iVar1 = myplr;
			pPVar4->tpage = pPVar4->tpage | 0x20;
			if (_pcurs[iVar1] == (Flag & 0xffU)) {
				pPVar4->r0 = '\0';
				pPVar4->g0 = '\0';
				pPVar4->b0 = -0x80;
			}
			if (_pcurs[myplr] == 3) {
				pPVar4->r0 = -0x80;
				pPVar4->g0 = -0x80;
				pPVar4->b0 = '\0';
			}
			if (_pcurs[myplr] != 4) {
				return;
			}
			pPVar4->r0 = -0x80;
			pPVar4->g0 = '\0';
			pPVar4->b0 = -0x80;
			return;
		}
		if ((byte)Flag != 3) {
			return;
		}
		pPVar4->r0 = -0x80;
		pPVar4->g0 = ' ';
		pPVar4->b0 = ' ';
		uVar3 = pPVar4->tpage | 0x20;
	}
	pPVar4->tpage = uVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvDrawItem__FiiiUci(int ItemX /*$v1*/, int ItemY /*$a1*/, int ItemNo /*$a2*/, unsigned char StatFlag /*$s0*/, int TransFlag /*stack 16*/)
 // line 487, offset 0x80153a70
	/* begin block 1 */
		// Start line: 488
		// Start offset: 0x80153A70
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v1
	// 		struct TextDat *TData; // $a0
	/* end block 1 */
	// End offset: 0x80153B28
	// End Line: 501

	/* begin block 2 */
		// Start line: 1003
	/* end block 2 */
	// End Line: 1004

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
										 (this,InvGfxTable[ItemNo],ItemX + 0x80,(ItemY - InvBackY) + 0x20,0,0xfd,0);
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
 // line 505, offset 0x80153b40
	/* begin block 1 */
		// Start line: 506
		// Start offset: 0x80153B40
		// Variables:
	// 		int Bx; // $s0
	// 		int By; // $s1
	/* end block 1 */
	// End offset: 0x80153DF8
	// End Line: 551

	/* begin block 2 */
		// Start line: 1039
	/* end block 2 */
	// End Line: 1040

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
	
	Y = InvRect[0].Y;
	X = InvRect[0].X;
	iVar4 = 200;
	iVar5 = 0x19;
	InvDrawSlot__Fiii(InvRect[0].X,InvRect[0].Y,10);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x20,(uint)InvSlotTable);
	Y = InvXY_8011cbf8.Y;
	X = InvXY_8011cbf8.X;
	InvDrawSlot__Fiii(InvXY_8011cbf8.X,InvXY_8011cbf8.Y,9);
	InvDrawSlotBack__FiiiiUc(X,Y,0x10,0x10,(uint)UCHAR_00h_8011d22c);
	Y = InvXY_8011cc00.Y;
	X = InvXY_8011cc00.X;
	InvDrawSlot__Fiii(InvXY_8011cc00.X,InvXY_8011cc00.Y,9);
	InvDrawSlotBack__FiiiiUc(X,Y,0x10,0x10,(uint)UCHAR_00h_8011d22d);
	Y = InvXY_8011cc08.Y;
	X = InvXY_8011cc08.X;
	InvDrawSlot__Fiii(InvXY_8011cc08.X,InvXY_8011cc08.Y,9);
	InvDrawSlotBack__FiiiiUc(X,Y,0x10,0x10,(uint)UCHAR_00h_8011d22e);
	Y = InvXY_ARRAY_8011cc10[0].Y;
	X = InvXY_ARRAY_8011cc10[0].X;
	InvDrawSlot__Fiii(InvXY_ARRAY_8011cc10[0].X,InvXY_ARRAY_8011cc10[0].Y,0xb);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x30,(uint)s__8011d22f[0]);
	Y = InvXY_ARRAY_8011cc40[0].Y;
	X = InvXY_ARRAY_8011cc40[0].X;
	InvDrawSlot__Fiii(InvXY_ARRAY_8011cc40[0].X,InvXY_ARRAY_8011cc40[0].Y,0xb);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x30,(uint)s__8011d235[0]);
	Y = InvXY_ARRAY_8011cc70[0].Y;
	X = InvXY_ARRAY_8011cc70[0].X;
	InvDrawSlot__Fiii(InvXY_ARRAY_8011cc70[0].X,InvXY_ARRAY_8011cc70[0].Y,0xb);
	InvDrawSlotBack__FiiiiUc(X,Y,0x20,0x30,(uint)s__8011d23b[0]);
	InvDrawSlot__Fiii(InvXY_8011cca0.X,InvXY_8011cca0.Y,0x5f);
	do {
		piVar1 = (int *)((int)&InvRect[0].X + iVar4);
		piVar2 = (int *)((int)&InvRect[0].Y + iVar4);
		iVar4 = iVar4 + 8;
		pbVar3 = &InvSlotTable + iVar5;
		iVar5 = iVar5 + 1;
		InvDrawSlotBack__FiiiiUc(*piVar1,*piVar2,0x10,0x10,(uint)*pbVar3);
	} while (iVar4 < 0x208);
	X = 0x208;
	Y = 0x41;
	InvDrawSlot__Fiii(InvXY_8011cde0.X,InvXY_8011cde0.Y,0xc);
	do {
		piVar1 = (int *)((int)&InvRect[0].X + X);
		piVar2 = (int *)((int)&InvRect[0].Y + X);
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
 // line 560, offset 0x80153e18
	/* begin block 1 */
		// Start line: 561
		// Start offset: 0x80153E18
	/* end block 1 */
	// End offset: 0x80153EBC
	// End Line: 563

	/* begin block 2 */
		// Start line: 1235
	/* end block 2 */
	// End Line: 1236

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
 // line 567, offset 0x80153ee4
	/* begin block 1 */
		// Start line: 568
		// Start offset: 0x80153EE4
		// Variables:
	// 		struct Dialog InvBack; // stack offset -56
	// 		char c; // $s2
	// 		char chrstr[10]; // stack offset -40
	// 		long mind; // $s1
	// 		long maxd; // $s0
	// 		int hper; // $s0
	// 		int ac; // $s0
	/* end block 1 */
	// End offset: 0x80154A50
	// End Line: 717

	/* begin block 2 */
		// Start line: 1250
	/* end block 2 */
	// End Line: 1251

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
	SetOTpos__6Dialogi(&DStack56,0xfa);
	SetBack__6Dialogi(&DStack56,0x1b);
	SetRGB__6DialogUcUcUc(&DStack56,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack56,0x10,0x20,0x6c,0xb8);
	BRect.x = 0x14;
	BRect.y = 0x20;
	BRect.w = 100;
	BRect.h = 0xb8;
	Col = plr[options_pad]._pBaseStr < plr[options_pad]._pStrength;
	if (plr[options_pad]._pStrength < plr[options_pad]._pBaseStr) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,(int)plr[options_pad]._pStrength);
	PrintStat__FiiPcUc(0xc,0x3ec,acStack40,Col);
	Col = plr[options_pad]._pBaseMag < plr[options_pad]._pMagic;
	if (plr[options_pad]._pMagic < plr[options_pad]._pBaseMag) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,(int)plr[options_pad]._pMagic);
	PrintStat__FiiPcUc(0x18,0x267,acStack40,Col);
	Col = plr[options_pad]._pBaseDex < plr[options_pad]._pDexterity;
	if (plr[options_pad]._pDexterity < plr[options_pad]._pBaseDex) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,(int)plr[options_pad]._pDexterity);
	PrintStat__FiiPcUc(0x24,0xfd,acStack40,Col);
	Col = plr[options_pad]._pBaseVit < plr[options_pad]._pVitality;
	if (plr[options_pad]._pVitality < plr[options_pad]._pBaseVit) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,(int)plr[options_pad]._pVitality);
	PrintStat__FiiPcUc(0x30,0x48c,acStack40,Col);
	iVar6 = plr[options_pad]._pIBonusToHit;
	Col = 0 < iVar6;
	if (iVar6 < 0) {
		Col = true;
	}
	uVar1 = plr[options_pad]._pDexterity;
	__format = GetStr__Fi(STR__I__);
	sprintf(acStack40,__format,((int)((uint)uVar1 << 0x10) >> 0x11) + iVar6 + 0x32);
	PrintStat__FiiPcUc(0x40,0x46a,acStack40,Col);
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
	__format = GetStr__Fi(STR__I__I);
	sprintf(acStack40,__format,iVar9 + (iVar9 * iVar6) / 100 + iVar7 + iVar2,
					iVar8 + (iVar8 * iVar3) / 100 + iVar4 + iVar5);
	PrintStat__FiiPcUc(0x4c,0xdf,acStack40,Col);
	Col = plr[options_pad]._pMaxHPBase < plr[options_pad]._pMaxHP;
	if (plr[options_pad]._pHitPoints != plr[options_pad]._pMaxHP) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,plr[options_pad]._pHitPoints >> 6);
	PrintStat__FiiPcUc(0x5c,0x1ac,acStack40,Col);
	Col = plr[options_pad]._pMaxManaBase < plr[options_pad]._pMaxMana;
	if (plr[options_pad]._pMana != plr[options_pad]._pMaxMana) {
		Col = true;
	}
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,plr[options_pad]._pMana >> 6);
	PrintStat__FiiPcUc(0x68,0x272,acStack40,Col);
	iVar6 = plr[options_pad]._pIBonusAC;
	Col = 0 < iVar6;
	if (iVar6 < 0) {
		Col = true;
	}
	iVar9 = (uint)(ushort)plr[options_pad]._pDexterity << 0x10;
	iVar7 = iVar9 >> 0x10;
	iVar2 = plr[options_pad]._pIAC;
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,
					iVar2 + iVar6 + (((iVar7 / 5 + (iVar7 >> 0x1f)) - (iVar9 >> 0x1f)) * 0x10000 >> 0x10));
	PrintStat__FiiPcUc(0x74,0x2a,acStack40,Col);
	Col = plr[options_pad]._pMagResist != '\0';
	if (plr[options_pad]._pMagResist < 'K') {
		__format = GetStr__Fi(STR__I__);
		sprintf(acStack40,__format,(int)plr[options_pad]._pMagResist);
	}
	else {
		Col = true;
		__format = GetStr__Fi(STR_MAX);
		sprintf(acStack40,__format);
	}
	PrintStat__FiiPcUc(0x84,0x267,acStack40,Col);
	Col = plr[options_pad]._pFireResist != '\0';
	if (plr[options_pad]._pFireResist < 'K') {
		__format = GetStr__Fi(STR__I__);
		sprintf(acStack40,__format,(int)plr[options_pad]._pFireResist);
	}
	else {
		Col = true;
		__format = GetStr__Fi(STR_MAX);
		sprintf(acStack40,__format);
	}
	PrintStat__FiiPcUc(0x90,0x14b,acStack40,Col);
	Col = plr[options_pad]._pLghtResist != '\0';
	if (plr[options_pad]._pLghtResist < 'K') {
		__format = GetStr__Fi(STR__I__);
		sprintf(acStack40,__format,(int)plr[options_pad]._pLghtResist);
	}
	else {
		Col = true;
		__format = GetStr__Fi(STR_MAX);
		sprintf(acStack40,__format);
	}
	PrintStat__FiiPcUc(0x9c,0x249,acStack40,Col);
	__format = GetStr__Fi(STR__I);
	sprintf(acStack40,__format,plr[options_pad]._pGold);
	PrintStat__FiiPcUc(0xac,0x187,acStack40,'\0');
	___6Dialog(&DStack56,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvBack__Fv()
 // line 721, offset 0x80154a70
	/* begin block 1 */
		// Start line: 722
		// Start offset: 0x80154A70
		// Variables:
	// 		struct Dialog InvBack; // stack offset -24
	/* end block 1 */
	// End offset: 0x80154AE8
	// End Line: 729

	/* begin block 2 */
		// Start line: 1580
	/* end block 2 */
	// End Line: 1581

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvBack__Fv(void)

{
	Dialog DStack24;
	
	__6Dialog(&DStack24);
	SetOTpos__6Dialogi(&DStack24,0xfa);
	SetBack__6Dialogi(&DStack24,0x1b);
	SetRGB__6DialogUcUcUc(&DStack24,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&DStack24,0x80,0x20 - InvBackY,0xb0,0x140);
	___6Dialog(&DStack24,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvCursor__Fv()
 // line 733, offset 0x80154af8
	/* begin block 1 */
		// Start line: 734
		// Start offset: 0x80154AF8
		// Variables:
	// 		int ItemX; // $a2
	// 		int ItemY; // $t0
	// 		int LoopX; // $a0
	// 		int LoopY; // $a1
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		struct TextDat *TData; // $a0
	/* end block 1 */
	// End offset: 0x80154FC0
	// End Line: 837

	/* begin block 2 */
		// Start line: 1612
	/* end block 2 */
	// End Line: 1613

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvCursor__Fv(void)

{
	byte bVar1;
	POLY_FT4 *pPVar2;
	TextDat *this;
	int iVar3;
	int iVar4;
	int iVar5;
	
	ItemH = 1;
	ItemW = 1;
	if (_pcurs[myplr] < 0xc) {
		if ((&plr[myplr].InvList[0x27]._iPLDex)[InvCursPos] != '\0') {
			InvGetItemWH__Fi(InvCursPos + -0x19);
		}
		if (0x40 < InvCursPos) {
			ItemH = 1;
			ItemW = 1;
		}
		iVar4 = 0;
		if (0 < ItemH) {
			iVar5 = 0;
			do {
				iVar3 = 0;
				if (0 < ItemW) {
					do {
						(&InvSlotTable)[iVar5 + InvCursPos + iVar3] = '\x02';
						iVar3 = iVar3 + 1;
					} while (iVar3 < ItemW);
				}
				iVar4 = iVar4 + 1;
				iVar5 = iVar5 + 10;
			} while (iVar4 < ItemH);
		}
		if ((_pcurs[myplr] - 2U < 2) || (_pcurs[myplr] == 4)) {
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
			iVar4 = InvRect[InvCursPos].X + 8;
			iVar5 = InvRect[InvCursPos].Y + 8;
			if (ItemW == 2) {
				iVar4 = InvRect[InvCursPos].X + 0x10;
			}
			if (ItemH == 2) {
				iVar5 = InvRect[InvCursPos].Y + 0x10;
			}
			if (ItemH == 3) {
				iVar5 = iVar5 + 0x10;
			}
			PrintFt4__7TextDatiiiiii
								(InvGfxTData,_pcurs[myplr] + -2,iVar4 + 0x80,(iVar5 - InvBackY) + 0x20,0,0xfe,0);
		}
	}
	else {
		if (plr[myplr].HoldItem._itype != -1) {
			ItemNo = (int)plr[myplr].HoldItem._iCurs;
			iVar4 = InvRect[InvCursPos].X;
			iVar5 = InvRect[InvCursPos].Y;
			ItemW = ZEXT14(s__8011d0cc[ItemNo] >> 4);
			bVar1 = s__0000000000000000000_00000000000_8011d180[ItemNo] >> 4;
			ItemH = ZEXT14(bVar1);
			this = InvGfxTData;
			if (ItemNo < 0x32) {
				this = InvPanelTData;
			}
			if (((InvCursPos == 7) || (InvCursPos == 0x13)) || (InvCursPos == 0xd)) {
				if (s__8011d0cc[ItemNo] >> 4 == 1) {
					iVar4 = iVar4 + 8;
				}
				if (bVar1 == 1) {
					iVar5 = iVar5 + 0x10;
				}
				if (bVar1 == 2) {
					iVar5 = iVar5 + 8;
				}
			}
			pPVar2 = PrintFt4__7TextDatiiiiii
												 (this,InvGfxTable[ItemNo],iVar4 + 0x80,(iVar5 - InvBackY) + 0x20,0,0xfe,0);
			pPVar2->code = pPVar2->code & 0xfe | 2;
			if (plr[myplr].HoldItem._iStatFlag == '\0') {
				pPVar2->r0 = '@';
				pPVar2->g0 = '\0';
				pPVar2->b0 = '\0';
			}
			else {
				pPVar2->r0 = '@';
				pPVar2->g0 = '@';
				pPVar2->b0 = '@';
			}
			(&InvSlotTable)[InvCursPos] = (&InvSlotTable)[InvCursPos] | 2;
		}
	}
	if ((0x18 < InvCursPos) && (iVar4 = 0, 0 < ItemH)) {
		iVar5 = 0;
		do {
			iVar3 = 0;
			if (0 < ItemW) {
				do {
					(&InvSlotTable)[iVar5 + InvCursPos + iVar3] =
							 (&InvSlotTable)[iVar5 + InvCursPos + iVar3] | 2;
					iVar3 = iVar3 + 1;
				} while (iVar3 < ItemW);
			}
			iVar4 = iVar4 + 1;
			iVar5 = iVar5 + 10;
		} while (iVar4 < ItemH);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvMsg__Fv()
 // line 842, offset 0x80154fd4
	/* begin block 1 */
		// Start line: 843
		// Start offset: 0x80154FD4
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $v0
	// 		struct RECT InfoRect; // stack offset -40
	// 		int InfoX; // $v1
	// 		int InfoY; // $s0
	// 		struct Dialog InvBack; // stack offset -32
	/* end block 1 */
	// End offset: 0x80155180
	// End Line: 874

	/* begin block 2 */
		// Start line: 1845
	/* end block 2 */
	// End Line: 1846

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvMsg__Fv(void)

{
	POLY_FT4 *pPVar1;
	int DY;
	short sVar2;
	int DY_00;
	RECT local_28;
	Dialog DStack32;
	
	__6Dialog(&DStack32);
	DY_00 = -InvBackY;
	DY = DY_00 + 0x98;
	pPVar1 = PrintFt4__7TextDatiiiiii(InvPanelTData,0xc6,0,0,0,0xfb,0);
	pPVar1->x0 = 0x80;
	pPVar1->x1 = 0x130;
	pPVar1->x3 = 0x130;
	pPVar1->r0 = ' ';
	pPVar1->g0 = ' ';
	pPVar1->b0 = ' ';
	DY_00 = DY_00 + 0xe8;
	local_28.y = (short)DY;
	pPVar1->y0 = local_28.y;
	pPVar1->y1 = local_28.y;
	pPVar1->x2 = 0x80;
	sVar2 = (short)DY_00;
	pPVar1->y2 = sVar2;
	pPVar1->y3 = sVar2;
	pPVar1->tpage = pPVar1->tpage | 0x40;
	pPVar1->u1 = pPVar1->u0 + '\x01';
	pPVar1->u3 = pPVar1->u0 + '\x01';
	pPVar1->v2 = pPVar1->v0 + '\x01';
	pPVar1->v3 = pPVar1->v0 + '\x01';
	pPVar1->code = pPVar1->code & 0xfe | 2;
	local_28.w = 0xb0;
	local_28.x = 0x80;
	local_28.h = 0x50;
	DrawInfoBox__FP4RECT(&local_28);
	SetOTpos__6Dialogi(&DStack32,0xfc);
	SetBorder__6Dialogi(&DStack32,0x30);
	SetRGB__6DialogUcUcUc(&DStack32,BORDERR >> 1,BORDERG >> 1,BORDERB >> 1);
	Line__6Dialogiii(&DStack32,0x80,DY,0xb0);
	SetBorder__6Dialogi(&DStack32,0x30);
	SetRGB__6DialogUcUcUc(&DStack32,BORDERR >> 1,BORDERG >> 1,BORDERB >> 1);
	Line__6Dialogiii(&DStack32,0x80,DY_00,0xb0);
	___6Dialog(&DStack32,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvUnique__Fv()
 // line 879, offset 0x8015519c
	/* begin block 1 */
		// Start line: 880
		// Start offset: 0x8015519C
		// Variables:
	// 		struct TextDat *ThisDat; // $s3
	// 		struct POLY_FT4 *Ft4; // $t2
	// 		int x; // $s1
	// 		int y; // $s0
	// 		int flip; // $s2
	/* end block 1 */
	// End offset: 0x801552A0
	// End Line: 908

	/* begin block 2 */
		// Start line: 1967
	/* end block 2 */
	// End Line: 1968

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInvUnique__Fv(void)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	TextDat *this;
	int Y;
	POLY_FT4 *pPVar4;
	uint X;
	uint XFlip;
	
	this = GM_UseTexData__Fi(0);
	if (uitemflag != '\0') {
		X = 0x88;
		if (InvPageNo != 0) {
			Y = 0xa0;
		}
		else {
			X = 0x128;
			Y = 0xe0;
		}
		XFlip = (uint)(InvPageNo == 0);
		Y = Y - InvBackY;
		pPVar4 = PrintFt4__7TextDatiiiiii(this,0x9c,X,Y,XFlip,0xff,0);
		uVar3 = WHITEB;
		uVar2 = WHITEG;
		uVar1 = WHITER;
		pPVar4->code = pPVar4->code & 0xfc;
		pPVar4->r0 = uVar1;
		pPVar4->g0 = uVar2;
		pPVar4->b0 = uVar3;
		pPVar4 = PrintFt4__7TextDatiiiiii(this,0x9c,X | 1,Y + 1,XFlip,0xfe,0);
		pPVar4->r0 = '\0';
		pPVar4->g0 = '\0';
		pPVar4->b0 = '\0';
		pPVar4->code = pPVar4->code & 0xfe | 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInv__Fv()
 // line 927, offset 0x801552c0
	/* begin block 1 */
		// Start line: 928
		// Start offset: 0x801552C0
	/* end block 1 */
	// End offset: 0x801552F0
	// End Line: 932

	/* begin block 2 */
		// Start line: 2074
	/* end block 2 */
	// End Line: 2075

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawInv__Fv(void)

{
	if (InvOn == (void *)0x0) {
		InvOn = &DAT_00000001;
		TSK_AddTask(0,DrawInvTSK__FP4TASK,0x1000,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawInvTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 938, offset 0x80155300
	/* begin block 1 */
		// Start line: 939
		// Start offset: 0x80155300
		// Variables:
	// 		int omp; // $s2
	// 		int osel; // $s3
	// 		struct CBlocks *BgBlocks; // $s0
	/* end block 1 */
	// End offset: 0x80155644
	// End Line: 1035

	/* begin block 2 */
		// Start line: 2096
	/* end block 2 */
	// End Line: 2097

void DrawInvTSK__FP4TASK(TASK *T)

{
	int iVar1;
	int iVar2;
	uchar uVar3;
	CPad *this;
	CBlocks *this_00;
	int Id;
	
	iVar2 = myplr;
	Id = sel_data;
	stream_stop__Fv();
	CDWAIT = &DAT_00000001;
	TSK_Sleep(1);
	VID_SetDBuffer__Fb(&DAT_00000001);
	myplr = options_pad;
	this = PAD_GetPad__FiUc(options_pad,'\0');
	Flush__4CPad(this);
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	if (_spselflag2 != (TASK *)0x0) {
		TSK_Kill(_spselflag2);
	}
	if (PTR_8012b154 != (TASK *)0x0) {
		TSK_Kill(PTR_8012b154);
	}
	_spselflag2 = (TASK *)0x0;
	PTR_8012b154 = (TASK *)0x0;
	_trigflag[sel_data] = '\0';
	iVar1 = sel_data;
	(&_pcursitem)[sel_data] = -1;
	(&_pcursobj)[iVar1] = -1;
	(&_pcursmonst)[iVar1] = -1;
	this_00 = BL_GetCurrentBlocks__Fv();
	if (leveltype == '\0') {
		DumpMonsters__7CBlocks(this_00);
	}
	GM_FinishedUsing__FP7TextDat(MissDat);
	MissDat = (TextDat *)0x0;
	if (InvGfxTData == (TextDat *)0x0) {
		InvGfxTData = GM_UseTexData__Fi(0xcf);
	}
	if (_pcurs[myplr] == 9) {
		_pcurs[myplr] = 1;
	}
	InvSetItemCurs__Fv();
	TSK_Sleep(1);
	VID_SetDBuffer__Fb((void *)0x0);
	CDWAIT = (void *)0x0;
	while (invflag != '\0') {
		sel_data = options_pad;
		myplr = options_pad;
		ControlInv__Fv();
		myplr = options_pad;
		sel_data = options_pad;
		DoThatDrawInv__Fv();
		TSK_Sleep(1);
	}
	VID_SetDBuffer__Fb(&DAT_00000001);
	CDWAIT = &DAT_00000001;
	sel_data = Id;
	myplr = iVar2;
	GM_FinishedUsing__FP7TextDat(InvGfxTData);
	InvGfxTData = (TextDat *)0x0;
	Id = 0xd0;
	if (leveltype == '\0') {
		SetTownersGraphics__7CBlocks(this_00);
		Id = 0xcb;
	}
	MissDat = GM_UseTexData__Fi(Id);
	if (0xb < _pcurs[myplr]) {
		uVar3 = TryInvPut__Fv();
		if (uVar3 == '\0') {
			StoreAutoPlace__Fv();
		}
		else {
			NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
		}
	}
	if (_pcurs[myplr] != 9) {
		NewCursor__Fi(1);
	}
	CDWAIT = (void *)0x0;
	VID_SetDBuffer__Fb((void *)0x0);
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	ClearPanel__Fv();
	InvOn = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoThatDrawInv__Fv()
 // line 1041, offset 0x80155664
	/* begin block 1 */
		// Start line: 1042
		// Start offset: 0x80155664
		// Variables:
	// 		int Loop; // $s0
	// 		int ii; // $v1
	// 		int ItemX; // $t1
	// 		int ItemY; // $a1
	// 		int ItemNo; // $a2
	/* end block 1 */
	// End offset: 0x80155E08
	// End Line: 1246

	/* begin block 2 */
		// Start line: 2324
	/* end block 2 */
	// End Line: 2325

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoThatDrawInv__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	int ItemY;
	int ItemNo;
	int ItemNo_00;
	int ItemX;
	
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	ItemX = 0x48;
	puVar1 = &UCHAR_00h_8011d270;
	do {
		*puVar1 = '\0';
		ItemX = ItemX + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < ItemX);
	DrawInvStats__Fv();
	DrawInvBack__Fv();
	DrawInvUnique__Fv();
	DrawInvMsg__Fv();
	if (plr[myplr].InvBody[0]._itype != -1) {
		InvSlotTable = '\x01';
		InvDrawItem__FiiiUci
							(InvRect[0].X,InvRect[0].Y,(int)plr[myplr].InvBody[0]._iCurs,
							 plr[myplr].InvBody[0]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[1]._itype != -1) {
		UCHAR_00h_8011d22c = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_8011cbf8.X,InvXY_8011cbf8.Y,(int)plr[myplr].InvBody[1]._iCurs,
							 plr[myplr].InvBody[1]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[2]._itype != -1) {
		UCHAR_00h_8011d22d = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_8011cc00.X,InvXY_8011cc00.Y,(int)plr[myplr].InvBody[2]._iCurs,
							 plr[myplr].InvBody[2]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[3]._itype != -1) {
		UCHAR_00h_8011d22e = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_8011cc08.X,InvXY_8011cc08.Y,(int)plr[myplr].InvBody[3]._iCurs,
							 plr[myplr].InvBody[3]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[4]._itype != -1) {
		s__8011d22f[0] = '\x01';
		ItemNo = (int)plr[myplr].InvBody[4]._iCurs;
		ItemX = InvXY_ARRAY_8011cc10[0].X;
		if (s__8011d0cc[ItemNo] == '\x10') {
			ItemX = InvXY_ARRAY_8011cc10[0].X + 8;
		}
		ItemY = InvXY_ARRAY_8011cc10[0].Y;
		if (s__0000000000000000000_00000000000_8011d180[ItemNo] == ' ') {
			ItemY = InvXY_ARRAY_8011cc10[0].Y + 8;
		}
		InvDrawItem__FiiiUci(ItemX,ItemY,ItemNo,plr[myplr].InvBody[4]._iStatFlag == '\x01',0);
		if (plr[myplr].InvBody[4]._iLoc == '\x02') {
			s__8011d235[0] = '\x01';
			ItemNo = (int)plr[myplr].InvBody[4]._iCurs;
			ItemX = InvXY_ARRAY_8011cc40[0].X;
			if (s__8011d0cc[ItemNo] == '\x10') {
				ItemX = InvXY_ARRAY_8011cc40[0].X + 8;
			}
			ItemY = InvXY_ARRAY_8011cc40[0].Y;
			if (s__0000000000000000000_00000000000_8011d180[ItemNo] == ' ') {
				ItemY = InvXY_ARRAY_8011cc40[0].Y + 8;
			}
			InvDrawItem__FiiiUci(ItemX,ItemY,ItemNo,plr[myplr].InvBody[5]._iStatFlag == '\x01',1);
		}
	}
	if (plr[myplr].InvBody[5]._itype != -1) {
		s__8011d235[0] = '\x01';
		ItemNo = (int)plr[myplr].InvBody[5]._iCurs;
		ItemX = InvXY_ARRAY_8011cc40[0].X;
		if (s__8011d0cc[ItemNo] == '\x10') {
			ItemX = InvXY_ARRAY_8011cc40[0].X + 8;
		}
		ItemY = InvXY_ARRAY_8011cc40[0].Y;
		if (s__0000000000000000000_00000000000_8011d180[ItemNo] == ' ') {
			ItemY = InvXY_ARRAY_8011cc40[0].Y + 8;
		}
		InvDrawItem__FiiiUci(ItemX,ItemY,ItemNo,plr[myplr].InvBody[5]._iStatFlag == '\x01',0);
	}
	if (plr[myplr].InvBody[6]._itype != -1) {
		s__8011d23b[0] = '\x01';
		InvDrawItem__FiiiUci
							(InvXY_ARRAY_8011cc70[0].X,InvXY_ARRAY_8011cc70[0].Y,(int)plr[myplr].InvBody[6]._iCurs
							 ,plr[myplr].InvBody[6]._iStatFlag == '\x01',0);
	}
	ItemX = 0;
	ItemNo = 200;
	ItemY = 0x19;
	do {
		*(bool *)(&InvSlotTable + ItemY) = *(char *)(myplr * 0x23a8 + -0x7ff1f73c + ItemX) != '\0';
		ItemNo_00 = (int)*(char *)(myplr * 0x23a8 + -0x7ff1f73c + ItemX);
		iVar2 = ItemNo_00 + -1;
		if (0 < ItemNo_00) {
			ItemNo_00 = (int)plr[myplr].InvList[iVar2]._iCurs;
			InvDrawItem__FiiiUci
								(*(int *)((int)&InvRect[0].X + ItemNo),
								 (*(int *)((int)&InvRect[0].Y + ItemNo) + 0x10) -
								 (uint)s__0000000000000000000_00000000000_8011d180[ItemNo_00],ItemNo_00,
								 plr[myplr].InvList[iVar2]._iStatFlag == '\x01',0);
		}
		ItemNo = ItemNo + 8;
		ItemX = ItemX + 1;
		ItemY = ItemY + 1;
	} while (ItemX < 0x28);
	ItemX = 0;
	iVar2 = 0;
	ItemY = 7;
	ItemNo = 0x208;
	do {
		if (*(short *)((int)&plr[myplr].SpdList[0]._itype + iVar2) != -1) {
			s__8011d242[ItemY + 0x20] = '\x01';
			InvDrawItem__FiiiUci
								(*(int *)((int)&InvRect[0].X + ItemNo),*(int *)((int)&InvRect[0].Y + ItemNo),
								 (int)*(short *)((int)&plr[myplr].SpdList[0]._iCurs + iVar2),
								 (&plr[myplr].SpdList[0]._iStatFlag)[iVar2] == '\x01',0);
		}
		iVar2 = iVar2 + 0x98;
		ItemY = ItemY + 1;
		ItemX = ItemX + 1;
		ItemNo = ItemNo + 8;
	} while (ItemX < 8);
	DrawInvCursor__Fv();
	InvDrawSlots__Fv();
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ AutoPlace__FiiiiUc(int pnum /*$t4*/, int ii /*$t6*/, int sx /*$a2*/, int sy /*$a3*/, int saveflag /*stack 16*/)
 // line 1250, offset 0x80155e2c
	/* begin block 1 */
		// Start line: 1251
		// Start offset: 0x80155E2C
		// Variables:
	// 		int i; // $a1
	// 		int j; // $t3
	// 		int xx; // $a0
	// 		int yy; // $t2
	// 		unsigned char done; // $s0
	/* end block 1 */
	// End offset: 0x80156134
	// End Line: 1298

	/* begin block 2 */
		// Start line: 2769
	/* end block 2 */
	// End Line: 2770

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
						bVar1 = *(char *)(pnum * 0x23a8 + -0x7ff1f73c + iVar5 + iVar11) == '\0';
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
		piVar2 = (int *)(plr[pnum]._pNumInv * 0x98 + pnum * 0x23a8 + -0x7ff20f00);
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
		} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
		iVar4 = pIVar8->_ivalue;
		piVar7[4] = pIVar9->_iVAdd1;
		piVar7[5] = iVar4;
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
					iVar10 = pnum * 0x23a8 + -0x7ff1f73c;
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
 // line 1302, offset 0x8015614c
	/* begin block 1 */
		// Start line: 1303
		// Start offset: 0x8015614C
		// Variables:
	// 		int i; // $a1
	// 		int j; // $t3
	// 		int xx; // $a0
	// 		int yy; // $t2
	// 		unsigned char done; // $s0
	/* end block 1 */
	// End offset: 0x801564D0
	// End Line: 1367

	/* begin block 2 */
		// Start line: 2888
	/* end block 2 */
	// End Line: 2889

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
			if (!bVar1) goto LAB_80156274;
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
						bVar1 = *(char *)(pnum * 0x23a8 + -0x7ff1f73c + iVar5 + iVar11) == '\0';
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
LAB_80156274:
		if ((sx < 2) && (sy < 2)) {
			iVar11 = 0;
			iVar4 = pnum * 0x23a8;
			do {
				iVar11 = iVar11 + 1;
				if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar4) == -1) {
					bVar1 = true;
					break;
				}
				iVar4 = iVar4 + 0x98;
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
		piVar2 = (int *)(plr[pnum]._pNumInv * 0x98 + pnum * 0x23a8 + -0x7ff20f00);
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
		} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
		iVar4 = pIVar8->_ivalue;
		piVar7[4] = pIVar9->_iVAdd1;
		piVar7[5] = iVar4;
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
					iVar10 = pnum * 0x23a8 + -0x7ff1f73c;
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
 // line 1371, offset 0x801564e8
	/* begin block 1 */
		// Start line: 1372
		// Start offset: 0x801564E8
		// Variables:
	// 		int i; // $s0
	// 		int ii; // $s3
	// 		int xx; // $t2
	// 		int yy; // $t0
	// 		long gt; // $v1
	// 		unsigned char done; // $a2
	/* end block 1 */
	// End offset: 0x80156990
	// End Line: 1465

	/* begin block 2 */
		// Start line: 3046
	/* end block 2 */
	// End Line: 3047

uchar GoldAutoPlace__Fi(int pnum)

{
	bool bVar1;
	int *piVar2;
	undefined2 uVar3;
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
						uVar3 = 4;
						if (1000 < iVar5) {
							uVar3 = 5;
						}
					}
					else {
						uVar3 = 6;
					}
					*(undefined2 *)((int)&plr[pnum].InvList[0]._iCurs + iVar13) = uVar3;
					lVar4 = CalculateGold__Fi(pnum);
					plr[pnum]._pGold = lVar4;
					bVar1 = true;
				}
			}
			iVar12 = iVar12 + 1;
			iVar13 = iVar13 + 0x98;
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
							uVar3 = 4;
							if (1000 < iVar5) {
								uVar3 = 5;
							}
						}
						else {
							uVar3 = 6;
						}
						*(undefined2 *)((int)&plr[pnum].InvList[0]._iCurs + iVar13) = uVar3;
						lVar4 = CalculateGold__Fi(pnum);
						plr[pnum]._pGold = lVar4;
						bVar1 = true;
					}
				}
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + 0x98;
			} while ((iVar12 < plr[pnum]._pNumInv) && (!bVar1));
		}
		if (!bVar1) {
			iVar13 = 0x27;
			iVar12 = pnum * 0x23a8;
			do {
				if (*(char *)(iVar13 + iVar12 + -0x7ff1f73c) == '\0') {
					iVar5 = plr[pnum]._pNumInv;
					piVar2 = (int *)(iVar5 * 0x98 + iVar12 + -0x7ff20f00);
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
					} while (pIVar11 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
					iVar6 = pIVar10->_ivalue;
					piVar9[4] = pIVar11->_iVAdd1;
					piVar9[5] = iVar6;
					plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
					*(undefined *)(iVar12 + -0x7ff1f73c + iVar13) = (char)plr[pnum]._pNumInv;
					iVar6 = plr[pnum].HoldItem._ivalue;
					if (iVar6 < 0x9c4) {
						if (iVar6 < 0x3e9) {
							iVar5 = iVar5 * 0x98 + iVar12;
							uVar3 = 4;
						}
						else {
							iVar5 = iVar5 * 0x98 + iVar12;
							uVar3 = 5;
						}
					}
					else {
						iVar5 = iVar5 * 0x98 + iVar12;
						uVar3 = 6;
					}
					*(undefined2 *)((int)&plr[0].InvList[0]._iCurs + iVar5) = uVar3;
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
 // line 1469, offset 0x801569b8
	/* begin block 1 */
		// Start line: 1470
		// Start offset: 0x801569B8
	/* end block 1 */
	// End offset: 0x80156C30
	// End Line: 1497

	/* begin block 2 */
		// Start line: 3250
	/* end block 2 */
	// End Line: 3251

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
		} while (pIVar4 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
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
			} while (pIVar4 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
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
			} while (pIVar4 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
		}
	}
	iVar1 = pIVar4->_iVMult1;
	pIVar5->_iVAdd1 = pIVar4->_iVAdd1;
	pIVar5->_iVMult1 = iVar1;
	return '\x01';
}



// decompiled code
// original method signature: 
// int /*$ra*/ SwapItem__FP10ItemStructT0(struct ItemStruct *a /*$t0*/, struct ItemStruct *b /*$t1*/)
 // line 1502, offset 0x80156c44
	/* begin block 1 */
		// Start line: 1503
		// Start offset: 0x80156C44
		// Variables:
	// 		struct ItemStruct h; // stack offset -152
	/* end block 1 */
	// End offset: 0x80156D34
	// End Line: 1509

	/* begin block 2 */
		// Start line: 3318
	/* end block 2 */
	// End Line: 3319

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
	int local_98 [27];
	short local_2c;
	int aiStack8 [2];
	
	pIVar8 = a;
	piVar6 = local_98;
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
	} while (pIVar8 != (ItemStruct *)&a->_iMinMag);
	iVar1 = pIVar4->_ivalue;
	piVar5[4] = pIVar8->_iVAdd1;
	piVar5[5] = iVar1;
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
	} while (pIVar8 != (ItemStruct *)&b->_iMinMag);
	iVar1 = pIVar4->_ivalue;
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar7->_ivalue = iVar1;
	piVar6 = local_98;
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
	} while (piVar6 != aiStack8);
	iVar1 = piVar5[5];
	((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = *piVar6;
	pIVar8->_ivalue = iVar1;
	return (int)local_2c + 0xc;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckInvPaste__Fiii(int pnum /*$s2*/, int mx /*$a1*/, int my /*$a2*/)
 // line 1515, offset 0x80156d40
	/* begin block 1 */
		// Start line: 1516
		// Start offset: 0x80156D40
		// Variables:
	// 		int r; // $s5
	// 		int sx; // $s7
	// 		int sy; // $fp
	// 		int i; // $s0
	// 		int j; // $t1
	// 		int xx; // $a3
	// 		int yy; // $t2
	// 		int ii; // $t0
	// 		unsigned char done; // $s1
	// 		unsigned char done2h; // $s1
	// 		int il; // $s4
	// 		int cn; // $s6
	// 		int it; // $v0
	// 		int iv; // $s3
	// 		int ig; // $a1
	// 		long gt; // $a1
	// 		struct ItemStruct tempitem; // stack offset -296
	/* end block 1 */
	// End offset: 0x801589F8
	// End Line: 1919

	/* begin block 2 */
		// Start line: 3344
	/* end block 2 */
	// End Line: 3345

void CheckInvPaste__Fiii(int pnum,int mx,int my)

{
	char cVar1;
	short sVar2;
	bool bVar3;
	byte bVar4;
	byte bVar5;
	uchar uVar6;
	uint uVar7;
	uint uVar8;
	long lVar9;
	int i;
	_125fake psfx;
	ItemStruct *a;
	ItemStruct *b;
	char *pcVar10;
	ItemStruct *pIVar11;
	int *piVar12;
	int *piVar13;
	int iVar14;
	ItemStruct *pIVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char cVar19;
	uint uVar20;
	int ii;
	uint uVar21;
	uint uVar22;
	uint uVar23;
	int local_128 [36];
	int aiStack152 [28];
	
	SetICursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
	ItemNo = (int)plr[myplr].HoldItem._iCurs;
	uVar20 = 0;
	bVar4 = s__0000000000000000000_00000000000_8011d180[ItemNo] >> 4;
	uVar23 = (uint)bVar4;
	bVar5 = s__8011d0cc[ItemNo] >> 4;
	uVar22 = (uint)bVar5;
	uVar21 = InvCursPos;
	if ((bVar4 == 3) && (uVar21 = InvCursPos, InvCursPos - 0x19U < 0x28)) {
		uVar21 = InvCursPos + 10;
	}
	ii = 7;
	if (uVar21 < 4) {
		ii = 4;
	}
	if (uVar21 - 4 < 2) {
		ii = 5;
	}
	if (uVar21 == 6) {
		ii = 6;
	}
	if (uVar21 - 7 < 0xc) {
		ii = 1;
	}
	if (uVar21 - 0x13 < 6) {
		ii = 3;
	}
	if (uVar21 - 0x41 < 8) {
		ii = 8;
	}
	i = (int)plr[pnum].HoldItem._iLoc;
	bVar3 = i == ii;
	if ((ii == 1) && (i == 2)) {
		ii = 2;
		bVar3 = true;
	}
	if ((((plr[pnum].HoldItem._iLoc == '\a') && (ii == 8)) && (bVar5 == 1)) &&
		 ((uVar23 == uVar22 &&
			(bVar3 = plr[pnum].HoldItem._iStatFlag != '\0' &&
							 (&AllItemsUseable)[(int)plr[pnum].HoldItem.IDidx] != '\0',
			plr[pnum].HoldItem._itype == 0xb)))) {
		bVar3 = false;
	}
	if (ii == 7) {
		i = uVar21 - 0x19;
		uVar20 = 0;
		bVar3 = true;
		if (plr[pnum].HoldItem._itype == 0xb) {
			uVar7 = SEXT14(*(char *)(pnum * 0x23a8 + -0x7ff1f73c + i));
			if (uVar7 != 0) {
				if ((int)uVar7 < 1) {
					uVar20 = -uVar7;
				}
				else {
					uVar20 = uVar7 & -(uint)(plr[pnum].InvList[uVar7 - 1]._itype != 0xb);
				}
			}
		}
		else {
			iVar17 = (i / 10 - ((int)(uVar23 - 1) >> 1)) * 10;
			if (iVar17 < 0) {
				iVar17 = 0;
			}
			iVar16 = 0;
			if (bVar4 != 0) {
				do {
					if (!bVar3) {
						return;
					}
					iVar14 = i % 10 - ((int)(uVar22 - 1) >> 1);
					if (0x27 < iVar17) {
						bVar3 = false;
					}
					if (iVar14 < 0) {
						iVar14 = 0;
					}
					iVar18 = 0;
					if (bVar5 != 0) {
						uVar7 = uVar20;
						do {
							uVar20 = uVar7;
							if (!bVar3) break;
							if (iVar14 < 10) {
								uVar8 = SEXT14(*(char *)(pnum * 0x23a8 + -0x7ff1f73c + iVar14 + iVar17));
								uVar20 = uVar7;
								if (uVar8 != 0) {
									if ((int)uVar8 < 0) {
										uVar8 = -uVar8;
									}
									uVar20 = uVar8;
									if ((uVar7 != 0) && (uVar20 = uVar7, uVar7 != uVar8)) goto LAB_80157144;
								}
							}
							else {
LAB_80157144:
								bVar3 = false;
								uVar20 = uVar7;
							}
							iVar18 = iVar18 + 1;
							iVar14 = iVar14 + 1;
							uVar7 = uVar20;
						} while (iVar18 < (int)uVar22);
					}
					iVar16 = iVar16 + 1;
					iVar17 = iVar17 + 10;
				} while (iVar16 < (int)uVar23);
			}
		}
	}
	cVar19 = (char)uVar20;
	if (!bVar3) {
		return;
	}
	if ((1 < ii - 7U) && (plr[pnum].HoldItem._iStatFlag == '\0')) {
		cVar1 = plr[pnum]._pClass;
		if (cVar1 == '\0') {
			psfx = PS_WARR13;
		}
		else {
			if (cVar1 == '\x01') {
				psfx = PS_ROGUE13;
			}
			else {
				bVar3 = false;
				if (cVar1 != '\x02') goto LAB_80157210;
				psfx = PS_MAGE13;
			}
		}
		PlaySFX__Fi(psfx);
		bVar3 = false;
	}
LAB_80157210:
	if (!bVar3) {
		return;
	}
	if (pnum == myplr) {
		PlaySFX__Fi(ItemInvSnds[(uint)ItemCAnimTbl[(int)plr[pnum].HoldItem._iCurs]]);
	}
	i = 1;
	switch(ii) {
	case 1:
		if ((int)uVar21 < 0xd) {
			if (plr[pnum].InvBody[4]._itype == -1) {
				if ((plr[pnum].InvBody[5]._itype == -1) ||
					 (plr[pnum].InvBody[5]._iClass != plr[pnum].HoldItem._iClass)) {
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = &plr[pnum].HoldItem;
					b = plr[pnum].InvBody + 4;
					do {
						pIVar15 = b;
						pIVar11 = a;
						ii = pIVar11->_iVMult1;
						iVar17 = pIVar11->_iVAdd2;
						iVar16 = pIVar11->_iVMult2;
						pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
						pIVar15->_iVMult1 = ii;
						pIVar15->_iVAdd2 = iVar17;
						pIVar15->_iVMult2 = iVar16;
						a = (ItemStruct *)&pIVar11->_iSeed;
						b = (ItemStruct *)&pIVar15->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
					ii = pIVar11->_ivalue;
					((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
					pIVar15->_ivalue = ii;
					goto switchD_8015729c_caseD_8;
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
LAB_80157830:
					NetSendCmdChItem__FUcUc('\0','\x05');
					a = &plr[pnum].HoldItem;
					b = plr[pnum].InvBody + 5;
					do {
						pIVar15 = b;
						pIVar11 = a;
						ii = pIVar11->_iVMult1;
						iVar17 = pIVar11->_iVAdd2;
						iVar16 = pIVar11->_iVMult2;
						pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
						pIVar15->_iVMult1 = ii;
						pIVar15->_iVAdd2 = iVar17;
						pIVar15->_iVMult2 = iVar16;
						a = (ItemStruct *)&pIVar11->_iSeed;
						b = (ItemStruct *)&pIVar15->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
					ii = pIVar11->_ivalue;
					((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
					pIVar15->_ivalue = ii;
					goto switchD_8015729c_caseD_8;
				}
				if (plr[pnum].InvBody[4]._iLoc == '\x02') {
					NetSendCmdChItem__FUcUc('\0','\x04');
					a = plr[pnum].InvBody + 5;
					SwapItem__FP10ItemStructT0(a,plr[pnum].InvBody + 4);
					b = &plr[pnum].HoldItem;
				}
				else {
					if (plr[pnum].InvBody[4]._iClass != plr[pnum].HoldItem._iClass) goto LAB_80157830;
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
		goto LAB_80157fac;
	case 2:
		NetSendCmdDelItem__FUcUc('\0','\x05');
		if (plr[pnum].InvBody[4]._itype == -1) {
LAB_80157d48:
			if (plr[pnum].InvBody[5]._itype != -1) goto LAB_80157de0;
			NetSendCmdChItem__FUcUc('\0','\x04');
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody + 4;
			do {
				pIVar15 = b;
				pIVar11 = a;
				ii = pIVar11->_iVMult1;
				iVar17 = pIVar11->_iVAdd2;
				iVar16 = pIVar11->_iVMult2;
				pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
				pIVar15->_iVMult1 = ii;
				pIVar15->_iVAdd2 = iVar17;
				pIVar15->_iVMult2 = iVar16;
				a = (ItemStruct *)&pIVar11->_iSeed;
				b = (ItemStruct *)&pIVar15->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
			ii = pIVar11->_ivalue;
			((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar15->_ivalue = ii;
		}
		else {
			if (plr[pnum].InvBody[5]._itype != -1) {
				a = &plr[pnum].HoldItem;
				piVar13 = local_128;
				do {
					piVar12 = piVar13;
					b = a;
					ii = b->_iVMult1;
					iVar17 = b->_iVAdd2;
					iVar16 = b->_iVMult2;
					*piVar12 = b->_iVAdd1;
					piVar12[1] = ii;
					piVar12[2] = iVar17;
					piVar12[3] = iVar16;
					a = (ItemStruct *)&b->_iSeed;
					piVar13 = piVar12 + 4;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
				ii = b->_ivalue;
				piVar12[4] = a->_iVAdd1;
				piVar12[5] = ii;
				if (plr[pnum].InvBody[5]._itype == 5) {
					b = &plr[pnum].HoldItem;
					a = plr[pnum].InvBody + 5;
					do {
						ii = a->_iVMult1;
						iVar17 = a->_iVAdd2;
						iVar16 = a->_iVMult2;
						b->_iVAdd1 = a->_iVAdd1;
						b->_iVMult1 = ii;
						b->_iVAdd2 = iVar17;
						b->_iVMult2 = iVar16;
						a = (ItemStruct *)&a->_iSeed;
						b = (ItemStruct *)&b->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].InvBody[5]._iMinMag);
				}
				else {
					b = &plr[pnum].HoldItem;
					a = plr[pnum].InvBody + 4;
					do {
						ii = a->_iVMult1;
						iVar17 = a->_iVAdd2;
						iVar16 = a->_iVMult2;
						b->_iVAdd1 = a->_iVAdd1;
						b->_iVMult1 = ii;
						b->_iVAdd2 = iVar17;
						b->_iVMult2 = iVar16;
						a = (ItemStruct *)&a->_iSeed;
						b = (ItemStruct *)&b->_iSeed;
					} while (a != (ItemStruct *)&plr[pnum].InvBody[4]._iMinMag);
				}
				ii = a->_iVMult1;
				b->_iVAdd1 = a->_iVAdd1;
				b->_iVMult1 = ii;
				if (pnum == myplr) {
					SetCursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
				}
				ii = 0;
				do {
					uVar6 = AutoPlace__FiiiiUc(pnum,ii,icursW28,icursH28,1);
					if (0x27 < ii + 1) break;
					ii = ii + 1;
				} while (uVar6 == '\0');
				piVar13 = local_128;
				a = &plr[pnum].HoldItem;
				do {
					b = a;
					piVar12 = piVar13;
					ii = piVar12[1];
					iVar17 = piVar12[2];
					iVar16 = piVar12[3];
					b->_iVAdd1 = *piVar12;
					b->_iVMult1 = ii;
					b->_iVAdd2 = iVar17;
					b->_iVMult2 = iVar16;
					piVar13 = piVar12 + 4;
					a = (ItemStruct *)&b->_iSeed;
				} while (piVar13 != aiStack152);
				ii = piVar12[5];
				((ItemStruct *)&b->_iSeed)->_iVAdd1 = *piVar13;
				b->_ivalue = ii;
				if (pnum == myplr) {
					SetCursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
				}
				else {
					SetICursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
				}
				if (uVar6 == '\0') {
					return;
				}
				if (plr[pnum].InvBody[5]._itype == 5) {
					plr[pnum].InvBody[5]._itype = -1;
				}
				else {
					plr[pnum].InvBody[4]._itype = -1;
				}
			}
			if (plr[pnum].InvBody[4]._itype == -1) goto LAB_80157d48;
LAB_80157de0:
			NetSendCmdChItem__FUcUc('\0','\x04');
			if (plr[pnum].InvBody[4]._itype == -1) {
				SwapItem__FP10ItemStructT0(plr[pnum].InvBody + 4,plr[pnum].InvBody + 5);
			}
			i = SwapItem__FP10ItemStructT0(plr[pnum].InvBody + 4,&plr[pnum].HoldItem);
		}
		if (((plr[pnum].InvBody[4]._itype == 10) && (ii = plr[pnum].InvBody[4]._iSpell, ii != 0)) &&
			 (0 < plr[pnum].InvBody[4]._iCharges)) {
			plr[pnum]._pRSplType = '\x03';
			plr[pnum]._pRSpell = ii;
			force_redraw = 0xff;
		}
		goto switchD_8015729c_caseD_8;
	case 3:
		NetSendCmdChItem__FUcUc('\0','\x06');
		if (plr[pnum].InvBody[6]._itype == -1) {
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody + 6;
			do {
				pIVar15 = b;
				pIVar11 = a;
				ii = pIVar11->_iVMult1;
				iVar17 = pIVar11->_iVAdd2;
				iVar16 = pIVar11->_iVMult2;
				pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
				pIVar15->_iVMult1 = ii;
				pIVar15->_iVAdd2 = iVar17;
				pIVar15->_iVMult2 = iVar16;
				a = (ItemStruct *)&pIVar11->_iSeed;
				b = (ItemStruct *)&pIVar15->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
			ii = pIVar11->_ivalue;
			((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar15->_ivalue = ii;
			goto switchD_8015729c_caseD_8;
		}
		a = plr[pnum].InvBody + 6;
		break;
	case 4:
		NetSendCmdChItem__FUcUc('\0','\0');
		if (plr[pnum].InvBody[0]._itype == -1) {
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody;
			do {
				pIVar15 = b;
				pIVar11 = a;
				ii = pIVar11->_iVMult1;
				iVar17 = pIVar11->_iVAdd2;
				iVar16 = pIVar11->_iVMult2;
				pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
				pIVar15->_iVMult1 = ii;
				pIVar15->_iVAdd2 = iVar17;
				pIVar15->_iVMult2 = iVar16;
				a = (ItemStruct *)&pIVar11->_iSeed;
				b = (ItemStruct *)&pIVar15->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
			ii = pIVar11->_ivalue;
			((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar15->_ivalue = ii;
			goto switchD_8015729c_caseD_8;
		}
		a = plr[pnum].InvBody;
		break;
	case 5:
		if (uVar21 == 4) {
			NetSendCmdChItem__FUcUc('\0','\x01');
			if (plr[pnum].InvBody[1]._itype == -1) {
				a = &plr[pnum].HoldItem;
				b = plr[pnum].InvBody + 1;
				do {
					pIVar15 = b;
					pIVar11 = a;
					ii = pIVar11->_iVMult1;
					iVar17 = pIVar11->_iVAdd2;
					iVar16 = pIVar11->_iVMult2;
					pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
					pIVar15->_iVMult1 = ii;
					pIVar15->_iVAdd2 = iVar17;
					pIVar15->_iVMult2 = iVar16;
					a = (ItemStruct *)&pIVar11->_iSeed;
					b = (ItemStruct *)&pIVar15->_iSeed;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
				ii = pIVar11->_ivalue;
				((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
				pIVar15->_ivalue = ii;
				goto switchD_8015729c_caseD_8;
			}
			a = plr[pnum].InvBody + 1;
		}
		else {
			NetSendCmdChItem__FUcUc('\0','\x02');
			if (plr[pnum].InvBody[2]._itype == -1) {
				a = &plr[pnum].HoldItem;
				b = plr[pnum].InvBody + 2;
				do {
					pIVar15 = b;
					pIVar11 = a;
					ii = pIVar11->_iVMult1;
					iVar17 = pIVar11->_iVAdd2;
					iVar16 = pIVar11->_iVMult2;
					pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
					pIVar15->_iVMult1 = ii;
					pIVar15->_iVAdd2 = iVar17;
					pIVar15->_iVMult2 = iVar16;
					a = (ItemStruct *)&pIVar11->_iSeed;
					b = (ItemStruct *)&pIVar15->_iSeed;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
				ii = pIVar11->_ivalue;
				((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
				pIVar15->_ivalue = ii;
				goto switchD_8015729c_caseD_8;
			}
			a = plr[pnum].InvBody + 2;
		}
		break;
	case 6:
		NetSendCmdChItem__FUcUc('\0','\x03');
		if (plr[pnum].InvBody[3]._itype == -1) {
			a = &plr[pnum].HoldItem;
			b = plr[pnum].InvBody + 3;
			do {
				pIVar15 = b;
				pIVar11 = a;
				ii = pIVar11->_iVMult1;
				iVar17 = pIVar11->_iVAdd2;
				iVar16 = pIVar11->_iVMult2;
				pIVar15->_iVAdd1 = pIVar11->_iVAdd1;
				pIVar15->_iVMult1 = ii;
				pIVar15->_iVAdd2 = iVar17;
				pIVar15->_iVMult2 = iVar16;
				a = (ItemStruct *)&pIVar11->_iSeed;
				b = (ItemStruct *)&pIVar15->_iSeed;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
			ii = pIVar11->_ivalue;
			((ItemStruct *)&pIVar15->_iSeed)->_iVAdd1 = a->_iVAdd1;
			pIVar15->_ivalue = ii;
			goto switchD_8015729c_caseD_8;
		}
		a = plr[pnum].InvBody + 3;
		break;
	case 7:
		ii = pnum * 0x23a8;
		if (plr[pnum].HoldItem._itype == 0xb) {
			if (uVar20 == 0) {
				iVar17 = (int)*(char *)((uVar21 - 0x19) + ii + -0x7ff1f73c);
				if (iVar17 < 1) {
					iVar17 = plr[pnum]._pNumInv;
					piVar13 = (int *)(iVar17 * 0x98 + ii + -0x7ff20f00);
					a = &plr[pnum].HoldItem;
					do {
						b = a;
						piVar12 = piVar13;
						ii = b->_iVMult1;
						iVar16 = b->_iVAdd2;
						iVar14 = b->_iVMult2;
						*piVar12 = b->_iVAdd1;
						piVar12[1] = ii;
						piVar12[2] = iVar16;
						piVar12[3] = iVar14;
						a = (ItemStruct *)&b->_iSeed;
						piVar13 = piVar12 + 4;
					} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
					ii = b->_ivalue;
					piVar12[4] = a->_iVAdd1;
					piVar12[5] = ii;
					plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
					*(undefined *)(pnum * 0x23a8 + -0x7ff1f73c + (uVar21 - 0x19)) = (char)plr[pnum]._pNumInv;
					ii = plr[pnum].HoldItem._ivalue;
					plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
					if (ii < 0x1389) {
						if (ii < 0x9c4) {
							if (ii < 0x3e9) {
								plr[pnum].InvList[iVar17]._iCurs = 4;
							}
							else {
								plr[pnum].InvList[iVar17]._iCurs = 5;
							}
						}
						else {
							plr[pnum].InvList[iVar17]._iCurs = 6;
						}
					}
				}
				else {
					iVar17 = iVar17 + -1;
					ii = plr[pnum].InvList[iVar17]._ivalue;
					iVar16 = ii + plr[pnum].HoldItem._ivalue;
					if (iVar16 < 0x1389) {
						plr[pnum].InvList[iVar17]._ivalue = iVar16;
						plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
						if (iVar16 < 0x9c4) {
							if (iVar16 < 0x3e9) {
								plr[pnum].InvList[iVar17]._iCurs = 4;
							}
							else {
								plr[pnum].InvList[iVar17]._iCurs = 5;
							}
						}
						else {
							plr[pnum].InvList[iVar17]._iCurs = 6;
						}
					}
					else {
						i = plr[pnum].HoldItem._ivalue;
						*(undefined **)&plr[pnum]._pGold = &DAT_00001388 + -ii + plr[pnum]._pGold;
						plr[pnum].HoldItem._ivalue = i - (int)(&DAT_00001388 + -ii);
						plr[pnum].InvList[iVar17]._ivalue = 5000;
						plr[pnum].InvList[iVar17]._iCurs = 6;
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
				goto switchD_8015729c_caseD_8;
			}
LAB_80158438:
			if (plr[pnum].HoldItem._itype == 0xb) {
				plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
			}
			i = SwapItem__FP10ItemStructT0
										((ItemStruct *)(pnum * 0x23a8 + -0x7ff20f00 + (uVar20 - 1) * 0x98),
										 &plr[pnum].HoldItem);
			if (plr[pnum].HoldItem._itype == 0xb) {
				lVar9 = CalculateGold__Fi(pnum);
				plr[pnum]._pGold = lVar9;
			}
			pcVar10 = plr[pnum].InvGrid;
			do {
				if ((int)*pcVar10 == uVar20) {
					*pcVar10 = '\0';
				}
				if ((int)*pcVar10 == -uVar20) {
					*pcVar10 = '\0';
				}
				pcVar10 = pcVar10 + 1;
			} while ((int)pcVar10 < pnum * 0x23a8 + -0x7ff1f714);
		}
		else {
			if (uVar20 != 0) goto LAB_80158438;
			piVar13 = (int *)(plr[pnum]._pNumInv * 0x98 + ii + -0x7ff20f00);
			a = &plr[pnum].HoldItem;
			do {
				b = a;
				piVar12 = piVar13;
				ii = b->_iVMult1;
				iVar17 = b->_iVAdd2;
				iVar16 = b->_iVMult2;
				*piVar12 = b->_iVAdd1;
				piVar12[1] = ii;
				piVar12[2] = iVar17;
				piVar12[3] = iVar16;
				a = (ItemStruct *)&b->_iSeed;
				piVar13 = piVar12 + 4;
			} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
			ii = b->_ivalue;
			piVar12[4] = a->_iVAdd1;
			piVar12[5] = ii;
			plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
			cVar19 = (char)plr[pnum]._pNumInv;
		}
		ii = ((int)(uVar21 - 0x19) / 10 - ((int)(uVar23 - 1) >> 1)) * 10;
		if (ii < 0) {
			ii = 0;
		}
		iVar17 = 0;
		if (bVar4 != 0) {
			do {
				iVar16 = (int)(uVar21 - 0x19) % 10 - ((int)(uVar22 - 1) >> 1);
				if (iVar16 < 0) {
					iVar16 = 0;
				}
				iVar14 = 0;
				if (bVar5 != 0) {
					iVar18 = pnum * 0x23a8 + -0x7ff1f73c;
					iVar16 = iVar16 + ii;
					do {
						if ((iVar14 == 0) && (iVar17 == uVar23 - 1)) {
							*(char *)(iVar18 + iVar16) = cVar19;
						}
						else {
							*(char *)(iVar18 + iVar16) = -cVar19;
						}
						iVar14 = iVar14 + 1;
						iVar16 = iVar16 + 1;
					} while (iVar14 < (int)uVar22);
				}
				iVar17 = iVar17 + 1;
				ii = ii + 10;
			} while (iVar17 < (int)uVar23);
		}
		goto switchD_8015729c_caseD_8;
	case 8:
		iVar17 = pnum * 0x23a8;
		ii = uVar21 - 0x41;
		if (plr[pnum].HoldItem._itype == 0xb) {
			sVar2 = plr[pnum].SpdList[ii]._itype;
			if (sVar2 == -1) {
				a = &plr[pnum].HoldItem;
				piVar13 = (int *)(ii * 0x98 + iVar17 + -0x7ff1f714);
				do {
					piVar12 = piVar13;
					b = a;
					ii = b->_iVMult1;
					iVar17 = b->_iVAdd2;
					iVar16 = b->_iVMult2;
					*piVar12 = b->_iVAdd1;
					piVar12[1] = ii;
					piVar12[2] = iVar17;
					piVar12[3] = iVar16;
					a = (ItemStruct *)&b->_iSeed;
					piVar13 = piVar12 + 4;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
				ii = b->_ivalue;
				piVar12[4] = a->_iVAdd1;
				piVar12[5] = ii;
				plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
			}
			else {
				if (sVar2 == 0xb) {
					iVar17 = plr[pnum].SpdList[ii]._ivalue;
					iVar16 = iVar17 + plr[pnum].HoldItem._ivalue;
					if (iVar16 < 0x1389) {
						plr[pnum].SpdList[ii]._ivalue = iVar16;
						plr[pnum]._pGold = plr[pnum]._pGold + plr[pnum].HoldItem._ivalue;
						if (iVar16 < 0x9c4) {
							if (iVar16 < 0x3e9) {
								plr[pnum].SpdList[ii]._iCurs = 4;
							}
							else {
								plr[pnum].SpdList[ii]._iCurs = 5;
							}
						}
						else {
							plr[pnum].SpdList[ii]._iCurs = 6;
						}
					}
					else {
						i = plr[pnum].HoldItem._ivalue;
						*(undefined **)&plr[pnum]._pGold = &DAT_00001388 + -iVar17 + plr[pnum]._pGold;
						plr[pnum].HoldItem._ivalue = i - (int)(&DAT_00001388 + -iVar17);
						plr[pnum].SpdList[ii]._ivalue = 5000;
						plr[pnum].SpdList[ii]._iCurs = 6;
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
												((ItemStruct *)(iVar17 + -0x7ff1f714 + ii * 0x98),&plr[pnum].HoldItem);
				}
			}
		}
		else {
			if (plr[pnum].SpdList[ii]._itype == -1) {
				a = &plr[pnum].HoldItem;
				piVar13 = (int *)(ii * 0x98 + iVar17 + -0x7ff1f714);
				do {
					piVar12 = piVar13;
					b = a;
					ii = b->_iVMult1;
					iVar17 = b->_iVAdd2;
					iVar16 = b->_iVMult2;
					*piVar12 = b->_iVAdd1;
					piVar12[1] = ii;
					piVar12[2] = iVar17;
					piVar12[3] = iVar16;
					a = (ItemStruct *)&b->_iSeed;
					piVar13 = piVar12 + 4;
				} while (a != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
				ii = b->_ivalue;
				piVar12[4] = a->_iVAdd1;
				piVar12[5] = ii;
			}
			else {
				i = SwapItem__FP10ItemStructT0
											((ItemStruct *)(iVar17 + -0x7ff1f714 + ii * 0x98),&plr[pnum].HoldItem);
				if (plr[pnum].HoldItem._itype == 0xb) {
					lVar9 = CalculateGold__Fi(pnum);
					plr[pnum]._pGold = lVar9;
				}
			}
		}
		drawsbarflag = '\x01';
	default:
		goto switchD_8015729c_caseD_8;
	}
	b = &plr[pnum].HoldItem;
LAB_80157fac:
	i = SwapItem__FP10ItemStructT0(a,b);
switchD_8015729c_caseD_8:
	CalcPlrInv__FiUc(pnum,'\x01');
	if (pnum == myplr) {
		SetCursor__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckInvCut__Fiii(int pnum /*$s0*/, int mx /*$a1*/, int my /*$a2*/)
 // line 1964, offset 0x80158a2c
	/* begin block 1 */
		// Start line: 1965
		// Start offset: 0x80158A2C
		// Variables:
	// 		int r; // $s2
	// 		int ii; // $t0
	// 		int iv; // $t0
	/* end block 1 */
	// End offset: 0x801594C0
	// End Line: 2081

	/* begin block 2 */
		// Start line: 4309
	/* end block 2 */
	// End Line: 4310

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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[0]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[1]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[2]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[3]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[4]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[5]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
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
		} while (pIVar13 != (ItemStruct *)&plr[pnum].InvBody[6]._iMinMag);
		iVar4 = pIVar14->_ivalue;
		((ItemStruct *)&pIVar21->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar21->_ivalue = iVar4;
		plr[pnum].InvBody[6]._itype = -1;
	}
	if ((iVar24 - 0x19U < 0x28) &&
		 (iVar4 = (int)*(char *)(pnum * 0x23a8 + -0x7ff1f73c + (iVar24 - 0x19U)), iVar4 != 0)) {
		if (iVar4 < 1) {
			iVar4 = -iVar4;
		}
		pcVar5 = plr[pnum].InvGrid;
		do {
			if (((int)*pcVar5 == iVar4) || ((int)*pcVar5 == -iVar4)) {
				*pcVar5 = '\0';
			}
			pcVar5 = pcVar5 + 1;
		} while ((int)pcVar5 < pnum * 0x23a8 + -0x7ff1f714);
		iVar7 = iVar4 + -1;
		piVar15 = (int *)(iVar7 * 0x98 + pnum * 0x23a8 + -0x7ff20f00);
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
		} while (piVar17 != piVar15 + 0x24);
		iVar10 = piVar16[5];
		((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = *piVar17;
		pIVar22->_ivalue = iVar10;
		plr[pnum]._pNumInv = plr[pnum]._pNumInv + -1;
		iVar10 = plr[pnum]._pNumInv;
		if ((0 < iVar10) && (iVar10 != iVar7)) {
			iVar8 = pnum * 0x23a8 + -0x7ff20f00;
			puVar18 = (undefined4 *)(iVar10 * 0x98 + iVar8);
			puVar20 = puVar18;
			puVar2 = (undefined4 *)(iVar7 * 0x98 + iVar8);
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
			} while (puVar20 != puVar18 + 0x24);
			uVar6 = puVar19[5];
			puVar23[4] = *puVar20;
			puVar23[5] = uVar6;
			pcVar5 = plr[pnum].InvGrid;
			do {
				if ((int)*pcVar5 == plr[pnum]._pNumInv + 1) {
					*pcVar5 = (char)iVar4;
				}
				if ((int)*pcVar5 == ~plr[pnum]._pNumInv) {
					*pcVar5 = -(char)iVar4;
				}
				pcVar5 = pcVar5 + 1;
			} while ((int)pcVar5 < pnum * 0x23a8 + -0x7ff1f714);
		}
	}
	if (0x40 < iVar24) {
		iVar24 = iVar24 + -0x41;
		if (plr[pnum].SpdList[iVar24]._itype != -1) {
			piVar15 = (int *)(iVar24 * 0x98 + pnum * 0x23a8 + -0x7ff1f714);
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
			} while (piVar17 != piVar15 + 0x24);
			iVar4 = piVar16[5];
			((ItemStruct *)&pIVar22->_iSeed)->_iVAdd1 = *piVar17;
			pIVar22->_ivalue = iVar4;
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
			SetCursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveInvItem__Fii(int pnum /*$s0*/, int iv /*$t0*/)
 // line 2105, offset 0x801594dc
	/* begin block 1 */
		// Start line: 2106
		// Start offset: 0x801594DC
	/* end block 1 */
	// End offset: 0x80159770
	// End Line: 2127

	/* begin block 2 */
		// Start line: 4595
	/* end block 2 */
	// End Line: 4596

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
	} while ((int)pcVar3 < pnum * 0x23a8 + -0x7ff1f714);
	plr[pnum]._pNumInv = plr[pnum]._pNumInv + -1;
	iVar6 = plr[pnum]._pNumInv;
	if ((0 < iVar6) && (iVar6 != iv)) {
		iVar4 = pnum * 0x23a8 + -0x7ff20f00;
		puVar10 = (undefined4 *)(iVar6 * 0x98 + iVar4);
		puVar12 = puVar10;
		puVar2 = (undefined4 *)(iv * 0x98 + iVar4);
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
		} while (puVar12 != puVar10 + 0x24);
		uVar5 = puVar11[5];
		puVar13[4] = *puVar12;
		puVar13[5] = uVar5;
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
		} while ((int)pcVar3 < pnum * 0x23a8 + -0x7ff1f714);
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
 // line 2134, offset 0x80159784
	/* begin block 1 */
		// Start line: 2135
		// Start offset: 0x80159784
	/* end block 1 */
	// End offset: 0x80159864
	// End Line: 2139

	/* begin block 2 */
		// Start line: 4658
	/* end block 2 */
	// End Line: 4659

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
 // line 2146, offset 0x80159878
	/* begin block 1 */
		// Start line: 2147
		// Start offset: 0x80159878
	/* end block 1 */
	// End offset: 0x801598E0
	// End Line: 2151

	/* begin block 2 */
		// Start line: 4685
	/* end block 2 */
	// End Line: 4686

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckInvScrn__Fv(void)

{
	if (_pcurs[myplr] < 0xc) {
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
 // line 2164, offset 0x801598f0
	/* begin block 1 */
		// Start line: 2165
		// Start offset: 0x801598F0
		// Variables:
	// 		struct PlayerStruct *p; // $a0
	/* end block 1 */
	// End offset: 0x8015996C
	// End Line: 2173

	/* begin block 2 */
		// Start line: 4722
	/* end block 2 */
	// End Line: 4723

void CheckItemStats__Fi(int pnum)

{
	char cVar1;
	short sVar2;
	
	sVar2 = plr[pnum]._pStrength;
	cVar1 = plr[pnum].HoldItem._iMinStr;
	plr[pnum].HoldItem._iStatFlag = '\0';
	if ((((int)cVar1 <= (int)sVar2) &&
			((int)(uint)plr[pnum].HoldItem._iMinMag <= (int)plr[pnum]._pMagic)) &&
		 ((int)plr[pnum].HoldItem._iMinDex <= (int)plr[pnum]._pDexterity)) {
		plr[pnum].HoldItem._iStatFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckBookLevel__Fi(int pnum /*$a0*/)
 // line 2179, offset 0x80159974
	/* begin block 1 */
		// Start line: 2180
		// Start offset: 0x80159974
		// Variables:
	// 		int slvl; // $a2
	/* end block 1 */
	// End offset: 0x80159AA0
	// End Line: 2189

	/* begin block 2 */
		// Start line: 4752
	/* end block 2 */
	// End Line: 4753

void CheckBookLevel__Fi(int pnum)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	
	if (plr[pnum].HoldItem._iMiscId == 0x18) {
		iVar1 = plr[pnum].HoldItem._iSpell;
		plr[pnum].HoldItem._iMinMag = (uchar)(&spelldata)[plr[pnum].HoldItem._iSpell].sMinInt;
		iVar1 = (int)*(char *)(pnum * 0x23a8 + -0x7ff2147f + iVar1);
		while (iVar1 != 0) {
			uVar3 = (uint)plr[pnum].HoldItem._iMinMag;
			uVar3 = uVar3 + (int)uVar3 / 5;
			uVar2 = uVar3 & 0xff;
			plr[pnum].HoldItem._iMinMag = (uchar)uVar3;
			iVar1 = iVar1 + -1;
			if (0xff < (int)(uVar2 + (int)uVar2 / 5)) {
				plr[pnum].HoldItem._iMinMag = -1;
				iVar1 = 0;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckQuestItem__Fi(int pnum /*$a0*/)
 // line 2197, offset 0x80159aa8
	/* begin block 1 */
		// Start line: 2198
		// Start offset: 0x80159AA8
	/* end block 1 */
	// End offset: 0x80159EC8
	// End Line: 2256

	/* begin block 2 */
		// Start line: 4791
	/* end block 2 */
	// End Line: 4792

void CheckQuestItem__Fi(int pnum)

{
	char cVar1;
	int iVar2;
	uint uVar3;
	
	if (plr[pnum].HoldItem.IDidx == 10) {
		QuestStruct_ARRAY_800e3404[2]._qactive = '\x03';
	}
	if (((plr[pnum].HoldItem.IDidx == 0x11) && (QuestStruct_ARRAY_800e33a0[0]._qactive == '\x02')) &&
		 (QuestStruct_ARRAY_800e33a0[0]._qvar1 == '\x03')) {
		sfxdelay = 10;
		uVar3 = SEXT14(plr[pnum]._pClass);
		if (uVar3 == 0) {
			iVar2 = 0x331;
		}
		else {
			iVar2 = 0x2c3;
			if ((uVar3 != 1) && (iVar2 = sfxdnum, uVar3 == (uint)QuestStruct_ARRAY_800e33a0[0]._qactive))
			{
				iVar2 = 0x25b;
			}
		}
		sfxdnum = iVar2;
		QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\x04';
	}
	iVar2 = sfxdnum;
	if (plr[pnum].HoldItem.IDidx == 0x10) {
		if (QuestStruct_ARRAY_800e3404[4]._qactive == '\x01') {
			QuestStruct_ARRAY_800e3404[4]._qactive = '\x02';
			QuestStruct_ARRAY_800e3404[4]._qvar1 = '\x01';
		}
		iVar2 = sfxdnum;
		if (QuestStruct_ARRAY_800e3404[4]._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14(plr[myplr]._pClass);
			iVar2 = 0x32b;
			if (uVar3 != 0) {
				if (uVar3 == (uint)QuestStruct_ARRAY_800e3404[4]._qlog) {
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
	}
	sfxdnum = iVar2;
	if (plr[pnum].HoldItem.IDidx == 0xf) {
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
	iVar2 = sfxdnum;
	if (plr[pnum].HoldItem.IDidx == 9) {
		if (quests._qactive == '\x01') {
			quests._qactive = '\x02';
			quests._qvar1 = '\x01';
		}
		iVar2 = sfxdnum;
		if (quests._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14(plr[myplr]._pClass);
			iVar2 = 0x329;
			if (uVar3 != 0) {
				if (uVar3 == (uint)quests._qlog) {
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
	}
	sfxdnum = iVar2;
	iVar2 = sfxdnum;
	if (plr[pnum].HoldItem.IDidx == 0x1c) {
		QuestStruct_ARRAY_800e3404[3]._qactive = '\x03';
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
					QuestStruct_ARRAY_800e3404[3]._qactive = '\x03';
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
 // line 2265, offset 0x80159ed0
	/* begin block 1 */
		// Start line: 2266
		// Start offset: 0x80159ED0
		// Variables:
	// 		int j; // $a1
	// 		int jj; // $a0
	/* end block 1 */
	// End offset: 0x8015A1B4
	// End Line: 2324

	/* begin block 2 */
		// Start line: 4933
	/* end block 2 */
	// End Line: 4934

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
	if (dung_map[(int)item[ii]._ix * 0x6c + (int)item[ii]._iy].dItem != '\0') {
		i = pnum << 3;
		if ((myplr == pnum) && (i = pnum * 8, 0xb < _pcurs[pnum])) {
			NetSendCmdPItem__FUcUcUcUc('\x01','V',*(uchar *)&plr[pnum]._px,*(uchar *)&plr[pnum]._py);
			i = pnum << 3;
		}
		item[ii]._iCreateInfo = item[ii]._iCreateInfo & 0x7fff;
		pIVar5 = item + ii;
		piVar1 = (int *)((int)&plr[0].HoldItem + i * 0x400 + pnum * 0x3a8);
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
		} while (pIVar5 != (ItemStruct *)&item[ii]._iMinMag);
		i = pIVar4->_ivalue;
		piVar6[4] = pIVar5->_iVAdd1;
		piVar6[5] = i;
		CheckQuestItem__Fi(pnum);
		CheckBookLevel__Fi(pnum);
		CheckItemStats__Fi(pnum);
		dung_map[(int)item[ii]._ix * 0x6c + (int)item[ii]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)itemactive[i] == ii) {
					DeleteItem__Fii((int)itemactive[i],i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
		(&_pcursitem)[sel_data] = -1;
		NewCursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AutoGetItem__Fii(int pnum /*$s3*/, int ii /*$fp*/)
 // line 2331, offset 0x8015a1cc
	/* begin block 1 */
		// Start line: 2332
		// Start offset: 0x8015A1CC
		// Variables:
	// 		int i; // $s0
	// 		int g; // $v0
	// 		int w; // $s4
	// 		int h; // $s5
	// 		int idx; // $a0
	// 		unsigned char done; // $s1

		/* begin block 1.1 */
			// Start line: 2422
			// Start offset: 0x8015A998

			/* begin block 1.1.1 */
				// Start line: 2422
				// Start offset: 0x8015A9A4
				// Variables:
			// 		int j; // $a1
			// 		int jj; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8015AA5C
			// End Line: 2445
		/* end block 1.1 */
		// End offset: 0x8015AC08
		// End Line: 2465
	/* end block 1 */
	// End offset: 0x8015AC08
	// End Line: 2465

	/* begin block 2 */
		// Start line: 5073
	/* end block 2 */
	// End Line: 5074

void AutoGetItem__Fii(int pnum,int ii)

{
	char cVar1;
	uchar uVar2;
	long lVar3;
	int ii_00;
	int iVar4;
	int iVar5;
	int iVar6;
	_125fake psfx;
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
	if ((ii != 0x7f) && (dung_map[(int)item[ii]._ix * 0x6c + (int)item[ii]._iy].dItem == '\0')) {
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
	} while (pIVar9 != (ItemStruct *)&item[ii]._iMinMag);
	ii_00 = pIVar8->_ivalue;
	((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
	pIVar11->_ivalue = ii_00;
	CheckQuestItem__Fi(pnum);
	CheckBookLevel__Fi(pnum);
	CheckItemStats__Fi(pnum);
	SetICursor__Fi((int)plr[pnum].HoldItem._iCurs + 0xc);
	if (plr[pnum].HoldItem._itype == 0xb) {
		uVar2 = GoldAutoPlace__Fi(pnum);
	}
	else {
		uVar2 = '\0';
		if (((((plr[pnum]._pgfxnum & 0xfU) < 2) && (plr[pnum]._pmode < 4)) &&
				(plr[pnum].HoldItem._iStatFlag != '\0')) && (plr[pnum].HoldItem._iClass == '\x01')) {
			uVar2 = WeaponAutoPlace__Fi(pnum);
			if (uVar2 != '\0') {
				CalcPlrInv__FiUc(pnum,'\x01');
				goto LAB_8015a444;
			}
		}
		else {
LAB_8015a444:
			if (uVar2 != '\0') goto LAB_8015a9a8;
		}
		iVar5 = icursH28;
		ii_00 = icursW28;
		if (icursW28 == 1) {
			if (icursH28 == 1) {
				if (((plr[pnum].HoldItem._iStatFlag != '\0') &&
						((&AllItemsUseable)[(int)plr[pnum].HoldItem.IDidx] != '\0')) &&
					 (ii_01 = 0, uVar2 == '\0')) {
					iVar15 = 0;
					iVar13 = pnum * 0x23a8;
					do {
						if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar13) == -1) {
							pIVar9 = &plr[pnum].HoldItem;
							piVar14 = (int *)(iVar15 + pnum * 0x23a8 + -0x7ff1f714);
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
							} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
							iVar4 = pIVar10->_ivalue;
							piVar12[4] = pIVar9->_iVAdd1;
							piVar12[5] = iVar4;
							CalcPlrScrolls__Fi(pnum);
							drawsbarflag = '\x01';
							uVar2 = '\x01';
						}
						iVar13 = iVar13 + 0x98;
						ii_01 = ii_01 + 1;
						iVar15 = iVar15 + 0x98;
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
				if (uVar2 != '\0') goto LAB_8015a9a8;
				do {
					uVar2 = AutoPlace__FiiiiUc(pnum,ii_00,2,3,1);
					ii_00 = ii_00 + 1;
					if (0x12 < ii_00) break;
				} while (uVar2 == '\0');
			}
		}
	}
	if (uVar2 != '\0') {
LAB_8015a9a8:
		dung_map[(int)item[ii]._ix * 0x6c + (int)item[ii]._iy].dItem = '\0';
		ii_00 = 0;
		if (0 < numitems) {
			do {
				if ((int)itemactive[ii_00] == ii) {
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
	ii_00 = pnum * 8;
	if (pnum == myplr) {
		cVar1 = plr[pnum]._pClass;
		if (cVar1 == '\0') {
			lVar3 = random__Fil(0,3);
			psfx = lVar3 + PS_WARR14;
		}
		else {
			if (cVar1 == '\x01') {
				lVar3 = random__Fil(0,3);
				psfx = lVar3 + PS_ROGUE14;
			}
			else {
				ii_00 = pnum << 3;
				if (cVar1 != '\x02') goto LAB_8015ab04;
				lVar3 = random__Fil(0,3);
				psfx = lVar3 + PS_MAGE14;
			}
		}
		PlaySFX__Fi(psfx);
		ii_00 = pnum << 3;
	}
LAB_8015ab04:
	pIVar9 = item + ii;
	piVar14 = (int *)((int)&plr[0].HoldItem + ii_00 * 0x400 + pnum * 0x3a8);
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
	} while (pIVar9 != (ItemStruct *)&item[ii]._iMinMag);
	ii_00 = pIVar10->_ivalue;
	piVar12[4] = pIVar9->_iVAdd1;
	piVar12[5] = ii_00;
	RespawnItem__FiUc(ii,'\x01');
	NetSendCmdPItem__FUcUcUcUc('\x01','\v',item[ii]._ix,item[ii]._iy);
	plr[pnum].HoldItem._itype = -1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindGetItem__FiUsi(int idx /*$a0*/, unsigned short ci /*$a1*/, int iseed /*$a2*/)
 // line 2510, offset 0x8015ac3c
	/* begin block 1 */
		// Start line: 2511
		// Start offset: 0x8015AC3C
		// Variables:
	// 		int i; // $t0
	// 		int ii; // $a3
	/* end block 1 */
	// End offset: 0x8015ACE4
	// End Line: 2525

	/* begin block 2 */
		// Start line: 5441
	/* end block 2 */
	// End Line: 5442

int FindGetItem__FiUsi(int idx,ushort ci,int iseed)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	if (0 < numitems) {
		do {
			iVar1 = (int)itemactive[iVar2];
			if ((((int)item[iVar1].IDidx == idx) && (item[iVar1]._iSeed == iseed)) &&
				 (item[iVar1]._iCreateInfo == ci)) {
				return iVar1;
			}
			iVar2 = iVar2 + 1;
		} while (iVar2 < numitems);
	}
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncGetItem__FiiiUsi(int x /*$a0*/, int y /*$a1*/, int idx /*$a2*/, unsigned short ci /*$a3*/, int iseed /*stack 16*/)
 // line 2530, offset 0x8015acf0
	/* begin block 1 */
		// Start line: 2531
		// Start offset: 0x8015ACF0
		// Variables:
	// 		int ii; // $s0

		/* begin block 1.1 */
			// Start line: 2568
			// Start offset: 0x8015ADA8

			/* begin block 1.1.1 */
				// Start line: 2568
				// Start offset: 0x8015ADB4
				// Variables:
			// 		int j; // $a1
			// 		int jj; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8015AE68
			// End Line: 2592
		/* end block 1.1 */
		// End offset: 0x8015AE68
		// End Line: 2592
	/* end block 1 */
	// End offset: 0x8015AE68
	// End Line: 2592

	/* begin block 2 */
		// Start line: 5481
	/* end block 2 */
	// End Line: 5482

void SyncGetItem__FiiiUsi(int x,int y,int idx,ushort ci,int iseed)

{
	int i;
	int iVar1;
	
	iVar1 = (int)dung_map[x * 0x6c + y].dItem + -1;
	if (((((int)dung_map[x * 0x6c + y].dItem == 0) || ((int)item[iVar1].IDidx != idx)) ||
			(item[iVar1]._iSeed != iseed)) || (item[iVar1]._iCreateInfo != ci)) {
		iVar1 = FindGetItem__FiUsi(idx,ci,iseed);
	}
	if (iVar1 != -1) {
		dung_map[(int)item[iVar1]._ix * 0x6c + (int)item[iVar1]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)itemactive[i] == iVar1) {
					DeleteItem__Fii((int)itemactive[i],i);
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
 // line 2606, offset 0x8015ae7c
	/* begin block 1 */
		// Start line: 2607
		// Start offset: 0x8015AE7C

		/* begin block 1.1 */
			// Start line: 2612
			// Start offset: 0x8015AE9C

			/* begin block 1.1.1 */
				// Start line: 2612
				// Start offset: 0x8015AE9C
			/* end block 1.1.1 */
			// End offset: 0x8015B034
			// End Line: 2627
		/* end block 1.1 */
		// End offset: 0x8015B034
		// End Line: 2628
	/* end block 1 */
	// End offset: 0x8015B034
	// End Line: 2629

	/* begin block 2 */
		// Start line: 5655
	/* end block 2 */
	// End Line: 5656

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TryInvPut__Fv(void)

{
	uchar uVar1;
	uchar uVar2;
	
	if (numitems < 0x7f) {
		uVar1 = CanPut__Fii((int)plr[myplr]._px + (int)offset_x[0],
												(int)plr[myplr]._py + (int)offset_y[0]);
		uVar2 = '\x01';
		if (uVar1 == '\0') {
			uVar1 = CanPut__Fii((int)plr[myplr]._px + (int)offset_x[7],
													(int)plr[myplr]._py + (int)offset_y[7]);
			uVar2 = '\x01';
			if (uVar1 == '\0') {
				uVar1 = CanPut__Fii((int)plr[myplr]._px + (int)offset_x[1],
														(int)plr[myplr]._py + (int)offset_y[1]);
				uVar2 = '\x01';
				if (uVar1 == '\0') {
					uVar2 = CanPut__Fii((int)plr[myplr]._px,(int)plr[myplr]._py);
				}
			}
		}
	}
	else {
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InvPutItem__Fiii(int pnum /*stack -56*/, int x /*$fp*/, int y /*stack -48*/)
 // line 2658, offset 0x8015b044
	/* begin block 1 */
		// Start line: 2659
		// Start offset: 0x8015B044
		// Variables:
	// 		int ii; // $s0
	// 		unsigned char done; // $s7

		/* begin block 1.1 */
			// Start line: 2692
			// Start offset: 0x8015B120
			// Variables:
		// 		int d; // $s5

			/* begin block 1.1.1 */
				// Start line: 2693
				// Start offset: 0x8015B12C
				// Variables:
			// 		int dy; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 2703
					// Start offset: 0x8015B1C8

					/* begin block 1.1.1.1.1 */
						// Start line: 2704
						// Start offset: 0x8015B1E0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2705
							// Start offset: 0x8015B1E0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2709
								// Start offset: 0x8015B238

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2710
									// Start offset: 0x8015B238

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 2714
										// Start offset: 0x8015B290

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 2716
											// Start offset: 0x8015B290
											// Variables:
										// 		int l; // $s2

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 2716
												// Start offset: 0x8015B290

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 2718
													// Start offset: 0x8015B2A4
													// Variables:
												// 		int j; // $s3

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 2718
														// Start offset: 0x8015B2A4
														// Variables:
													// 		int yy; // $s4

														/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
															// Start line: 2720
															// Start offset: 0x8015B2B8
															// Variables:
														// 		int i; // $s1

															/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
																// Start line: 2721
																// Start offset: 0x8015B2CC
																// Variables:
															// 		int xx; // $s0
															/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
															// End offset: 0x8015B314
															// End Line: 2727
														/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// End offset: 0x8015B31C
														// End Line: 2728
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8015B31C
													// End Line: 2728
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8015B324
												// End Line: 2729
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8015B324
											// End Line: 2729
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8015B32C
										// End Line: 2730
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8015B334
									// End Line: 2731
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8015B334
								// End Line: 2731
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8015B334
							// End Line: 2731
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015B334
						// End Line: 2731
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015B334
					// End Line: 2731
				/* end block 1.1.1.1 */
				// End offset: 0x8015B334
				// End Line: 2731
			/* end block 1.1.1 */
			// End offset: 0x8015B334
			// End Line: 2731
		/* end block 1.1 */
		// End offset: 0x8015B33C
		// End Line: 2735
	/* end block 1 */
	// End offset: 0x8015B4B8
	// End Line: 2759

	/* begin block 2 */
		// Start line: 5765
	/* end block 2 */
	// End Line: 5766

/* WARNING: Could not reconcile some variable overlaps */

int InvPutItem__Fiii(int pnum,int x,int y)

{
	short sVar1;
	bool bVar2;
	bool bVar3;
	ItemStruct *pIVar4;
	char cVar5;
	uchar uVar6;
	int i;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int i_00;
	int iVar10;
	int iVar11;
	int j;
	uint uVar12;
	int local_30;
	
	if (numitems < 0x7f) {
		i = FindGetItem__FiUsi((int)plr[pnum].HoldItem.IDidx,plr[pnum].HoldItem._iCreateInfo,
													 plr[pnum].HoldItem._iSeed);
		if (i != -1) {
			SyncGetItem__FiiiUsi
								(x,y,(int)plr[pnum].HoldItem.IDidx,plr[pnum].HoldItem._iCreateInfo,
								 plr[pnum].HoldItem._iSeed);
		}
		bVar3 = false;
		uVar12 = 0;
		local_30 = y;
		while (bVar2 = false, (int)uVar12 < 8) {
			sVar1 = plr[pnum]._py;
			i = abs(x - (int)plr[pnum]._px);
			if ((1 < i) || (i = abs(local_30 - (int)sVar1), 1 < i)) {
				bVar2 = true;
			}
			if (bVar2) {
				x = (int)plr[pnum]._px + (int)offset_x[uVar12];
				local_30 = (int)plr[pnum]._py + (int)offset_y[uVar12];
			}
			uVar6 = CanPut__Fii(x,local_30);
			if (uVar6 == '\0') {
				uVar12 = uVar12 - 1 & 7;
				x = (int)plr[pnum]._px + (int)offset_x[uVar12];
				local_30 = (int)plr[pnum]._py + (int)offset_y[uVar12];
				uVar6 = CanPut__Fii(x,local_30);
				if (uVar6 == '\0') {
					uVar12 = uVar12 + 2 & 7;
					x = (int)plr[pnum]._px + (int)offset_x[uVar12];
					local_30 = (int)plr[pnum]._py + (int)offset_y[uVar12];
					uVar6 = CanPut__Fii(x,local_30);
					i = 1;
					if (uVar6 == '\0') {
						while (i < 0x32) {
							iVar11 = -i;
							if (bVar3) goto LAB_8015b334;
							while ((iVar11 <= i && (iVar10 = -i, !bVar3))) {
								j = (int)plr[pnum]._py + iVar11;
								while ((iVar10 <= i && (!bVar3))) {
									i_00 = (int)plr[pnum]._px + iVar10;
									uVar6 = CanPut__Fii(i_00,j);
									if (uVar6 != '\0') {
										bVar3 = true;
										x = i_00;
										local_30 = j;
									}
									iVar10 = iVar10 + 1;
								}
								iVar11 = iVar11 + 1;
							}
							i = i + 1;
						}
						if (!bVar3) {
							return -1;
						}
					}
				}
			}
LAB_8015b334:
			uVar12 = uVar12 + 1;
		}
		uVar6 = CanPut__Fii(x,local_30);
		if (uVar6 != '\0') {
			i = (int)itemavail[0];
			dung_map[x * 0x6c + local_30].dItem = itemavail[0] + '\x01';
			cVar5 = itemavail[0x7e - numitems];
			itemactive[numitems] = itemavail[0];
			itemavail[0] = cVar5;
			pIVar4 = item + i;
			pIVar9 = &plr[pnum].HoldItem;
			do {
				pIVar8 = pIVar9;
				pIVar7 = pIVar4;
				iVar11 = pIVar8->_iVMult1;
				iVar10 = pIVar8->_iVAdd2;
				j = pIVar8->_iVMult2;
				pIVar7->_iVAdd1 = pIVar8->_iVAdd1;
				pIVar7->_iVMult1 = iVar11;
				pIVar7->_iVAdd2 = iVar10;
				pIVar7->_iVMult2 = j;
				pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
				pIVar4 = (ItemStruct *)&pIVar7->_iSeed;
			} while (pIVar9 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
			iVar11 = pIVar8->_ivalue;
			((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
			pIVar7->_ivalue = iVar11;
			item[i]._ix = (char)x;
			item[i]._iy = (char)local_30;
			RespawnItem__FiUc(i,'\x01');
			numitems = numitems + 1;
			NewCursor__Fi(1);
			return i;
		}
	}
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SyncPutItem__FiiiiUsiUciiiiiUl(int pnum /*$s7*/, int x /*$fp*/, int y /*stack -80*/, int idx /*stack -72*/, int icreateinfo /*stack 16*/, int iseed /*stack 20*/, int Id /*stack 24*/, int dur /*stack 28*/, int mdur /*stack 32*/, int ch /*stack 36*/, int mch /*stack 40*/, int ivalue /*stack 44*/, unsigned long ibuff /*stack 48*/)
 // line 2770, offset 0x8015b4ec
	/* begin block 1 */
		// Start line: 2771
		// Start offset: 0x8015B4EC
		// Variables:
	// 		int ii; // $s0
	// 		int d; // $s1
	// 		int dy; // $s0

		/* begin block 1.1 */
			// Start line: 2815
			// Start offset: 0x8015B680

			/* begin block 1.1.1 */
				// Start line: 2815
				// Start offset: 0x8015B698

				/* begin block 1.1.1.1 */
					// Start line: 2816
					// Start offset: 0x8015B698

					/* begin block 1.1.1.1.1 */
						// Start line: 2819
						// Start offset: 0x8015B714

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2820
							// Start offset: 0x8015B714

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2823
								// Start offset: 0x8015B76C
								// Variables:
							// 		unsigned char done; // $s5

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2824
									// Start offset: 0x8015B76C
									// Variables:
								// 		int l; // $s2

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 2826
										// Start offset: 0x8015B774

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 2827
											// Start offset: 0x8015B788
											// Variables:
										// 		int j; // $s4

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 2827
												// Start offset: 0x8015B7A4
												// Variables:
											// 		int yy; // $s3

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 2828
													// Start offset: 0x8015B7B8
													// Variables:
												// 		int i; // $s1

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 2829
														// Start offset: 0x8015B7CC
														// Variables:
													// 		int xx; // $s0
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8015B814
													// End Line: 2834
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8015B81C
												// End Line: 2835
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8015B81C
											// End Line: 2835
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8015B824
										// End Line: 2836
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8015B824
									// End Line: 2836
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8015B82C
								// End Line: 2837
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8015B83C
							// End Line: 2842
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015B83C
						// End Line: 2842
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015B83C
					// End Line: 2842
				/* end block 1.1.1.1 */
				// End offset: 0x8015B83C
				// End Line: 2842
			/* end block 1.1.1 */
			// End offset: 0x8015B83C
			// End Line: 2842
		/* end block 1.1 */
		// End offset: 0x8015B83C
		// End Line: 2842
	/* end block 1 */
	// End offset: 0x8015BA14
	// End Line: 2875

	/* begin block 2 */
		// Start line: 6021
	/* end block 2 */
	// End Line: 6022

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
	
	if (numitems < 0x7f) {
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
						if (bVar2) goto LAB_8015b83c;
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
					if (!bVar2) goto LAB_8015b834;
				}
			}
		}
LAB_8015b83c:
		ii = (int)itemavail[0];
		dung_map[x * 0x6c + local_50].dItem = itemavail[0] + '\x01';
		cVar3 = itemavail[0x7e - numitems];
		itemactive[numitems] = itemavail[0];
		itemavail[0] = cVar3;
		if (idx == 0x17) {
			RecreateEar__FiUsiUciiiiii
								(ii,(ushort)icreateinfo,iseed,(uchar)Id,dur,mdur,ch,mch,ivalue,ibuff);
		}
		else {
			FUN_80162ee0();
			if ((uchar)Id != '\0') {
				item[ii]._iIdentified = '\x01';
			}
			item[ii]._iDurability = dur;
			item[ii]._iMaxDur = mdur;
			item[ii]._iCharges = (short)ch;
			item[ii]._iMaxCharges = (short)mch;
		}
		item[ii]._ix = (char)x;
		item[ii]._iy = (char)local_50;
		RespawnItem__FiUc(ii,'\x01');
		numitems = numitems + 1;
	}
	else {
LAB_8015b834:
		ii = -1;
	}
	return ii;
}



// decompiled code
// original method signature: 
// char /*$ra*/ CheckInvHLight__Fv()
 // line 2879, offset 0x8015ba48
	/* begin block 1 */
		// Start line: 2880
		// Start offset: 0x8015BA48
		// Variables:
	// 		int r; // $s0
	// 		char rv; // $s3
	// 		struct ItemStruct *pi; // $s1
	// 		struct PlayerStruct *p; // $s2

		/* begin block 1.1 */
			// Start line: 2973
			// Start offset: 0x8015BC5C

			/* begin block 1.1.1 */
				// Start line: 2973
				// Start offset: 0x8015BC68
				// Variables:
			// 		int nGold; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8015BC68
			// End Line: 2974
		/* end block 1.1 */
		// End offset: 0x8015BD68
		// End Line: 2986
	/* end block 1 */
	// End offset: 0x8015BD70
	// End Line: 2989

	/* begin block 2 */
		// Start line: 6260
	/* end block 2 */
	// End Line: 6261

/* WARNING: Unknown calling convention yet parameter storage is locked */

char CheckInvHLight__Fv(void)

{
	int iVar1;
	char cVar2;
	char *__src;
	char *pcVar3;
	ItemStruct *ItemPtr;
	int nGold;
	PlayerStruct *pPVar4;
	char cVar5;
	
	nGold = InvCursPos;
	if (0x48 < InvCursPos) {
		return -1;
	}
	_infoclr[sel_data] = '\0';
	iVar1 = myplr;
	pPVar4 = plr + myplr;
	ClearPanel__Fv();
	cVar5 = -1;
	ItemPtr = (ItemStruct *)0x0;
	if (_pcurs[myplr] < 0xc) {
		if ((uint)nGold < 4) {
			cVar5 = '\0';
			ItemPtr = plr[iVar1].InvBody;
		}
		else {
			if (nGold == 4) {
				cVar5 = '\x01';
				ItemPtr = plr[iVar1].InvBody + 1;
			}
			else {
				if (nGold == 5) {
					cVar5 = '\x02';
					ItemPtr = plr[iVar1].InvBody + 2;
				}
				else {
					if (nGold == 6) {
						cVar5 = '\x03';
						ItemPtr = plr[iVar1].InvBody + 3;
					}
					else {
						if (nGold - 7U < 6) {
							cVar5 = '\x04';
							ItemPtr = plr[iVar1].InvBody + 4;
						}
						else {
							if (nGold - 0xdU < 6) {
								ItemPtr = plr[iVar1].InvBody + 4;
								if ((plr[iVar1].InvBody[4]._itype == -1) || (plr[iVar1].InvBody[4]._iLoc != '\x02'))
								{
									cVar5 = '\x05';
									ItemPtr = plr[iVar1].InvBody + 5;
								}
								else {
									cVar5 = '\x04';
								}
							}
							else {
								if (nGold - 0x13U < 6) {
									cVar5 = '\x06';
									ItemPtr = plr[iVar1].InvBody + 6;
								}
								else {
									if (nGold - 0x19U < 0x28) {
										nGold = abs((int)(char)(&DAT_00001da7)[(int)&pPVar4->_pmode + nGold]);
										if (nGold == 0) {
											return -1;
										}
										cVar5 = (char)nGold + '\x06';
										ItemPtr = pPVar4->InvList + nGold + -1;
									}
									else {
										if (0x40 < nGold) {
											ItemPtr = (ItemStruct *)
																(&DAT_00001de8 + (int)(&pPVar4->_pmode + (nGold + -0x41) * 0x26));
											drawsbarflag = '\x01';
											cVar5 = (char)nGold + -0x12;
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
		__src = GetStr__Fi(STR__I_GOLD__S);
		pcVar3 = get_pieces_str__Fi(nGold);
		sprintf(_infostr + sel_data * 0x100,__src,nGold,pcVar3);
		return cVar5;
	}
	if (ItemPtr->_iMagical == '\x01') {
		cVar2 = '\x01';
	}
	else {
		cVar2 = '\x03';
		if (ItemPtr->_iMagical != '\x02') goto LAB_8015bcec;
	}
	_infoclr[sel_data] = cVar2;
LAB_8015bcec:
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
	return cVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveScroll__Fi(int pnum /*$s0*/)
 // line 2995, offset 0x8015bd90
	/* begin block 1 */
		// Start line: 2996
		// Start offset: 0x8015BD90
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8015BF60
	// End Line: 3018

	/* begin block 2 */
		// Start line: 6514
	/* end block 2 */
	// End Line: 6515

void RemoveScroll__Fi(int pnum)

{
	int iv;
	int iv_00;
	
	iv = 0;
	if (0 < plr[pnum]._pNumInv) {
		iv_00 = 0;
		do {
			if (((*(short *)((int)&plr[pnum].InvList[0]._itype + iv_00) != -1) &&
					((uint)*(ushort *)((int)&plr[pnum].InvList[0]._iMiscId + iv_00) - 0x15 < 2)) &&
				 (*(int *)((int)&plr[pnum].InvList[0]._iSpell + iv_00) == (int)plr[pnum]._pSpell)) {
				RemoveInvItem__Fii(pnum,iv);
				goto LAB_8015bf40;
			}
			iv = iv + 1;
			iv_00 = iv_00 + 0x98;
		} while (iv < plr[pnum]._pNumInv);
	}
	iv_00 = 0;
	iv = pnum * 0x23a8;
	while (((*(short *)((int)&plr[0].SpdList[0]._itype + iv) == -1 ||
					(1 < (uint)*(ushort *)((int)&plr[0].SpdList[0]._iMiscId + iv) - 0x15)) ||
				 (*(int *)((int)&plr[0].SpdList[0]._iSpell + iv) != (int)plr[pnum]._pSpell))) {
		iv_00 = iv_00 + 1;
		iv = iv + 0x98;
		if (7 < iv_00) {
			return;
		}
	}
	RemoveSpdBarItem__Fii(pnum,iv_00);
LAB_8015bf40:
	CalcPlrScrolls__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ UseScroll__Fv()
 // line 3024, offset 0x8015bf74
	/* begin block 1 */
		// Start line: 3025
		// Start offset: 0x8015BF74
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8015C1D0
	// End Line: 3047

	/* begin block 2 */
		// Start line: 6578
	/* end block 2 */
	// End Line: 6579

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar UseScroll__Fv(void)

{
	int iVar1;
	int iVar2;
	
	if (_pcurs[myplr] == 1) {
		if ((leveltype == '\0') && ((&spelldata)[plr[myplr]._pRSpell].sTownSpell == '\0')) {
			return '\0';
		}
		iVar1 = 0;
		if (0 < plr[myplr]._pNumInv) {
			iVar2 = 0;
			do {
				if (((*(short *)((int)&plr[myplr].InvList[0]._itype + iVar2) != -1) &&
						((uint)*(ushort *)((int)&plr[myplr].InvList[0]._iMiscId + iVar2) - 0x15 < 2)) &&
					 (*(int *)((int)&plr[myplr].InvList[0]._iSpell + iVar2) == plr[myplr]._pRSpell)) {
					return '\x01';
				}
				iVar1 = iVar1 + 1;
				iVar2 = iVar2 + 0x98;
			} while (iVar1 < plr[myplr]._pNumInv);
		}
		iVar2 = 0;
		iVar1 = myplr * 0x23a8;
		do {
			if (((*(short *)((int)&plr[0].SpdList[0]._itype + iVar1) != -1) &&
					((uint)*(ushort *)((int)&plr[0].SpdList[0]._iMiscId + iVar1) - 0x15 < 2)) &&
				 (*(int *)((int)&plr[0].SpdList[0]._iSpell + iVar1) == plr[myplr]._pRSpell)) {
				return '\x01';
			}
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x98;
		} while (iVar2 < 8);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3053, offset 0x8015c1dc
	/* begin block 1 */
		// Start line: 3054
		// Start offset: 0x8015C1DC
	/* end block 1 */
	// End offset: 0x8015C234
	// End Line: 3061

	/* begin block 2 */
		// Start line: 6633
	/* end block 2 */
	// End Line: 6634

void UseStaffCharge__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	short sVar1;
	
	if ((((ptrplr->InvBody[4]._itype != -1) && (ptrplr->InvBody[4]._iMiscId == 0x17)) &&
			(ptrplr->InvBody[4]._iSpell == ptrplr->_pRSpell)) &&
		 (sVar1 = ptrplr->InvBody[4]._iCharges, 0 < sVar1)) {
		ptrplr->InvBody[4]._iCharges = sVar1 + -1;
		CalcPlrStaff__FP12PlayerStruct(ptrplr);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ UseStaff__Fv()
 // line 3068, offset 0x8015c244
	/* begin block 1 */
		// Start line: 3069
		// Start offset: 0x8015C244
	/* end block 1 */
	// End offset: 0x8015C2FC
	// End Line: 3077

	/* begin block 2 */
		// Start line: 6664
	/* end block 2 */
	// End Line: 6665

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar UseStaff__Fv(void)

{
	bool bVar1;
	
	if (_pcurs[myplr] == 1) {
		bVar1 = false;
		if (((plr[myplr].InvBody[4]._itype != -1) && (plr[myplr].InvBody[4]._iMiscId == 0x17)) &&
			 (plr[myplr].InvBody[4]._iSpell == plr[myplr]._pRSpell)) {
			bVar1 = 0 < plr[myplr].InvBody[4]._iCharges;
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
 // line 3127, offset 0x8015c304
	/* begin block 1 */
		// Start line: 3128
		// Start offset: 0x8015C304
	/* end block 1 */
	// End offset: 0x8015C3F8
	// End Line: 3142

	/* begin block 2 */
		// Start line: 6783
	/* end block 2 */
	// End Line: 6784

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
 // line 3150, offset 0x8015c400
	/* begin block 1 */
		// Start line: 3151
		// Start offset: 0x8015C400
		// Variables:
	// 		int c; // $s2
	// 		int idata; // $v1
	// 		int it; // $v1
	// 		struct ItemStruct *Item; // $s1
	// 		unsigned char speedlist; // $s3
	/* end block 1 */
	// End offset: 0x8015C904
	// End Line: 3237

	/* begin block 2 */
		// Start line: 6827
	/* end block 2 */
	// End Line: 6828

uchar UseInvItem__Fii(int pnum,int cii)

{
	char cVar1;
	bool bVar2;
	short sVar3;
	int iVar4;
	_125fake psfx;
	int iVar5;
	int iv;
	
	if (((plr[pnum]._pInvincible != '\0') && (plr[pnum]._pHitPoints == 0)) && (pnum == myplr)) {
		return '\x01';
	}
	if (_pcurs[myplr] != 1) {
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
		iVar5 = pnum * 0x23a8 + -0x7ff20f00 + iv * 0x98;
		bVar2 = false;
	}
	else {
		if (talkflag != '\0') {
			return '\x01';
		}
		iv = cii + -0x2f;
		iVar5 = pnum * 0x23a8 + -0x7ff1f714 + iv * 0x98;
		bVar2 = true;
	}
	iVar4 = (int)*(short *)(iVar5 + 0x5c);
	if (iVar4 == 0x11) {
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
	if (iVar4 == 0x13) {
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
	if ((&AllItemsUseable)[iVar4] == '\0') {
		return '\0';
	}
	if (*(char *)(iVar5 + 0x92) == '\0') {
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
	if ((*(short *)(iVar5 + 0x6e) == 0) && (*(short *)(iVar5 + 0x5a) == 0xb)) {
		StartGoldDrop__Fv();
		return '\x01';
	}
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	sVar3 = *(short *)(iVar5 + 0x6e);
	if ((sVar3 == 0x15) && (currlevel == '\0')) {
		if ((&spelldata)[*(int *)(iVar5 + 0x24)].sTownSpell == '\0') {
			return '\x01';
		}
		sVar3 = *(short *)(iVar5 + 0x6e);
	}
	if (((sVar3 == 0x16) && (currlevel == '\0')) &&
		 ((&spelldata)[*(int *)(iVar5 + 0x24)].sTownSpell == '\0')) {
		return '\x01';
	}
	psfx = IS_RBOOK;
	if (*(short *)(iVar5 + 0x6e) != 0x18) {
		if (pnum != myplr) goto LAB_8015c87c;
		psfx = ItemInvSnds[(uint)ItemCAnimTbl[(int)*(short *)(iVar5 + 0x6c)]];
	}
	PlaySFX__Fi(psfx);
LAB_8015c87c:
	UseItem__Fiii(pnum,(int)*(short *)(iVar5 + 0x6e),*(int *)(iVar5 + 0x24));
	if (bVar2) {
		RemoveSpdBarItem__Fii(pnum,iv);
		return '\x01';
	}
	if (plr[pnum].InvList[iv]._iMiscId != 0x2a) {
		RemoveInvItem__Fii(pnum,iv);
		return '\x01';
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoTelekinesis__Fv()
 // line 3242, offset 0x8015c924
	/* begin block 1 */
		// Start line: 3243
		// Start offset: 0x8015C924
	/* end block 1 */
	// End offset: 0x8015CA34
	// End Line: 3255

	/* begin block 2 */
		// Start line: 7021
	/* end block 2 */
	// End Line: 7022

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
 // line 3261, offset 0x8015ca4c
	/* begin block 1 */
		// Start line: 3262
		// Start offset: 0x8015CA4C
		// Variables:
	// 		int i; // $a2
	// 		long gold; // $t1
	/* end block 1 */
	// End offset: 0x8015CB78
	// End Line: 3281

	/* begin block 2 */
		// Start line: 7059
	/* end block 2 */
	// End Line: 7060

long CalculateGold__Fi(int pnum)

{
	int iVar1;
	int iVar2;
	long lVar3;
	
	lVar3 = 0;
	iVar2 = 0;
	iVar1 = pnum * 0x23a8;
	do {
		if (*(short *)((int)&plr[0].SpdList[0]._itype + iVar1) == 0xb) {
			force_redraw = 0xff;
			lVar3 = lVar3 + *(int *)((int)&plr[0].SpdList[0]._ivalue + iVar1);
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x98;
	} while (iVar2 < 8);
	iVar1 = 0;
	if (0 < plr[pnum]._pNumInv) {
		iVar2 = 0;
		do {
			if (*(short *)((int)&plr[pnum].InvList[0]._itype + iVar2) == 0xb) {
				lVar3 = lVar3 + *(int *)((int)&plr[pnum].InvList[0]._ivalue + iVar2);
			}
			iVar1 = iVar1 + 1;
			iVar2 = iVar2 + 0x98;
		} while (iVar1 < plr[pnum]._pNumInv);
	}
	return lVar3;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DropItemBeforeTrig__Fv()
 // line 3294, offset 0x8015cb84
	/* begin block 1 */
		// Start line: 3295
		// Start offset: 0x8015CB84
	/* end block 1 */
	// End offset: 0x8015CBCC
	// End Line: 3302

	/* begin block 2 */
		// Start line: 7126
	/* end block 2 */
	// End Line: 7127

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
 // line 3418, offset 0x8015cbdc
	/* begin block 1 */
		// Start line: 3419
		// Start offset: 0x8015CBDC
	/* end block 1 */
	// End offset: 0x8015CEAC
	// End Line: 3496

	/* begin block 2 */
		// Start line: 7379
	/* end block 2 */
	// End Line: 7380

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ControlInv__Fv(void)

{
	bool bVar1;
	char cVar2;
	
	CheckNewPath__Fi(myplr);
	(&_pcursitem)[sel_data] = -1;
	uitemflag = '\0';
	ReadPad__Fi(-1);
	if (InvCursPos < 0x19) {
		InvBackAY = 0;
	}
	else {
		InvBackAY = 0x88;
	}
	if (InvBackAY < InvBackY) {
		bVar1 = InvBackY + -0x10 < InvBackAY;
		InvBackY = InvBackY + -0x10;
	}
	else {
		if (InvBackAY <= InvBackY) goto LAB_8015cc84;
		bVar1 = InvBackAY < InvBackY + 0x10;
		InvBackY = InvBackY + 0x10;
	}
	if (bVar1) {
		InvBackY = InvBackAY;
	}
LAB_8015cc84:
	cVar2 = CheckInvHLight__Fv();
	_pcursinvitem[sel_data] = cVar2;
	if ((DavesPad & 0x400U) != 0) {
		if ((InvPageNo == 0) && (uitemflag != '\0')) {
			InvPageNo = 1;
		}
		else {
			InvPageNo = 0;
		}
	}
	if (InvPageNo == 1) {
		if (uitemflag == '\0') {
			InvPageNo = 0;
		}
		if (InvPageNo == 1) {
			DrawUniqueInfo__Fv();
		}
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
		if ((_pcurs[myplr] - 2U < 2) || (_pcurs[myplr] == 4)) {
			TryIconCurs__Fv();
		}
		else {
			CheckInvScrn__Fv();
		}
	}
	if ((DavesPad & 0x100U) != 0) {
		UseInvItem__Fii(myplr,(int)_pcursinvitem[sel_data]);
	}
	if (((DavesPad & 0x80U) != 0) && (0xb < _pcurs[myplr])) {
		NetSendCmdPItem__FUcUcUcUc('\x01','\n','\0','\0');
	}
	InvAlignObject__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvGetItemWH__Fi(int Pos /*$a0*/)
 // line 3501, offset 0x8015cebc
	/* begin block 1 */
		// Start line: 3502
		// Start offset: 0x8015CEBC
	/* end block 1 */
	// End offset: 0x8015CFA8
	// End Line: 3511

	/* begin block 2 */
		// Start line: 7546
	/* end block 2 */
	// End Line: 7547

void InvGetItemWH__Fi(int Pos)

{
	int iVar1;
	
	iVar1 = (int)*(char *)(myplr * 0x23a8 + -0x7ff1f73c + Pos);
	if (iVar1 != 0) {
		if (iVar1 < 1) {
			iVar1 = -iVar1;
		}
		ItemNo = (int)plr[myplr].InvList[iVar1 + -1]._iCurs;
		ItemW = ZEXT14(s__8011d0cc[ItemNo] >> 4);
		ItemH = ZEXT14(s__0000000000000000000_00000000000_8011d180[ItemNo] >> 4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvAlignObject__Fv()
 // line 3516, offset 0x8015cfb0
	/* begin block 1 */
		// Start line: 3517
		// Start offset: 0x8015CFB0
	/* end block 1 */
	// End offset: 0x8015D15C
	// End Line: 3536

	/* begin block 2 */
		// Start line: 7576
	/* end block 2 */
	// End Line: 7577

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvAlignObject__Fv(void)

{
	int iVar1;
	uint uVar2;
	
	if ((InvCursPos - 0x19U < 0x28) && (0xb < _pcurs[myplr])) {
		ItemNo = (int)plr[myplr].HoldItem._iCurs;
		ItemW = (uint)(s__8011d0cc[ItemNo] >> 4) - 1;
		ItemH = (uint)(s__0000000000000000000_00000000000_8011d180[ItemNo] >> 4) - 1;
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
 // line 3542, offset 0x8015d164
	/* begin block 1 */
		// Start line: 3543
		// Start offset: 0x8015D164
		// Variables:
	// 		int ItemNo; // $a1
	/* end block 1 */
	// End offset: 0x8015D2EC
	// End Line: 3561

	/* begin block 2 */
		// Start line: 7629
	/* end block 2 */
	// End Line: 7630

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvSetItemCurs__Fv(void)

{
	char cVar1;
	int iVar2;
	
	iVar2 = (int)(&plr[myplr].InvList[0x27]._iPLDex)[InvCursPos];
	if (((iVar2 != 0) && (_pcurs[myplr] < 0xc)) && (InvCursPos - 0x19U < 0x28)) {
		if (0x19 < InvCursPos) {
			cVar1 = (&plr[myplr].InvList[0x27]._iPLMag)[InvCursPos];
			while (((int)cVar1 == iVar2 || ((int)cVar1 == -iVar2))) {
				cVar1 = (&plr[myplr].InvList[0x27]._iPLStr)[InvCursPos];
				InvCursPos = InvCursPos + -1;
			}
		}
		if (0x22 < InvCursPos) {
			cVar1 = (&plr[myplr].InvList[0x27]._iAnimFrame)[InvCursPos];
			while (((int)cVar1 == iVar2 || ((int)cVar1 == -iVar2))) {
				cVar1 = *(char *)((int)&plr[myplr].InvList[0x27]._iMiscId + InvCursPos + 1);
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
 // line 3567, offset 0x8015d2f8
	/* begin block 1 */
		// Start line: 3568
		// Start offset: 0x8015D2F8
		// Variables:
	// 		int ItemInc; // $a1
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x8015D4D0
	// End Line: 3651

	/* begin block 2 */
		// Start line: 7677
	/* end block 2 */
	// End Line: 7678

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursLeft__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar1 = InvCursPos;
	iVar2 = 0;
	if (_pcurs[myplr] < 0xc) {
		switch(InvCursPos) {
		case 0:
		case 6:
			break;
		default:
			goto switchD_8015d37c_caseD_1;
		case 4:
switchD_8015d37c_caseD_4:
			InvCursPos = 5;
			break;
		case 5:
switchD_8015d37c_caseD_5:
			InvCursPos = 4;
			break;
		case 7:
switchD_8015d37c_caseD_7:
			InvCursPos = 0xd;
			break;
		case 0xd:
			InvCursPos = 0x13;
			break;
		case 0x13:
switchD_8015d37c_caseD_d:
			InvCursPos = 7;
		}
	}
	else {
		switch(InvCursPos) {
		case 0:
		case 6:
		case 0x13:
			goto LAB_8015d3f4;
		case 4:
			goto switchD_8015d37c_caseD_4;
		case 5:
			goto switchD_8015d37c_caseD_5;
		case 7:
			goto switchD_8015d37c_caseD_7;
		case 0xd:
			goto switchD_8015d37c_caseD_d;
		}
switchD_8015d37c_caseD_1:
		if ((InvCursPos - 0x19U < 0x28) || (0x40 < InvCursPos)) {
			iVar2 = 1;
		}
	}
LAB_8015d3f4:
	if (InvCursPos - 0x19U < 0x28) {
		if ((InvCursPos - 0x19U < 10) && (0x18 < InvCursPos - iVar2)) {
			InvCursPos = InvCursPos - iVar2;
		}
		if ((InvCursPos - 0x23U < 10) && (0x22 < InvCursPos - iVar2)) {
			InvCursPos = InvCursPos - iVar2;
		}
		if ((InvCursPos - 0x2dU < 10) && (0x2c < InvCursPos - iVar2)) {
			InvCursPos = InvCursPos - iVar2;
		}
		if ((InvCursPos - 0x37U < 10) && (0x36 < InvCursPos - iVar2)) {
			InvCursPos = InvCursPos - iVar2;
		}
	}
	else {
		if ((0x40 < InvCursPos) && (0x41 < InvCursPos)) {
			InvCursPos = InvCursPos - iVar2;
		}
	}
	InvSetItemCurs__Fv();
	if (iVar1 != InvCursPos) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvMoveCursRight__Fv()
 // line 3656, offset 0x8015d4e4
	/* begin block 1 */
		// Start line: 3657
		// Start offset: 0x8015D4E4
		// Variables:
	// 		int ItemInc; // $a0
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x8015D7F8
	// End Line: 3746

	/* begin block 2 */
		// Start line: 7859
	/* end block 2 */
	// End Line: 7860

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursRight__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar1 = InvCursPos;
	iVar2 = 0;
	if (_pcurs[myplr] < 0xc) {
		switch(InvCursPos) {
		case 0:
		case 6:
			break;
		default:
			if (InvCursPos - 0x19U < 0x28) {
				iVar2 = 1;
				if ((&plr[myplr].InvList[0x27]._iPLDex)[InvCursPos] != '\0') {
					InvGetItemWH__Fi(InvCursPos - 0x19U);
					iVar2 = ItemW;
				}
				break;
			}
LAB_8015d640:
			if (InvCursPos < 0x41) break;
			goto LAB_8015d648;
		case 4:
switchD_8015d5e0_caseD_4:
			InvCursPos = 5;
			break;
		case 5:
switchD_8015d5e0_caseD_5:
			InvCursPos = 4;
			break;
		case 7:
			InvCursPos = 0x13;
			break;
		case 0xd:
switchD_8015d5e0_caseD_d:
			InvCursPos = 7;
			break;
		case 0x13:
switchD_8015d5e0_caseD_7:
			InvCursPos = 0xd;
		}
	}
	else {
		switch(InvCursPos) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_8015d5e0_caseD_0;
		default:
			if (0x27 < InvCursPos - 0x19U) goto LAB_8015d640;
			break;
		case 4:
			goto switchD_8015d5e0_caseD_4;
		case 5:
			goto switchD_8015d5e0_caseD_5;
		case 7:
			goto switchD_8015d5e0_caseD_7;
		case 0xd:
			goto switchD_8015d5e0_caseD_d;
		}
LAB_8015d648:
		iVar2 = 1;
	}
switchD_8015d5e0_caseD_0:
	if (InvCursPos - 0x19U < 0x28) {
		if (_pcurs[myplr] < 0xc) {
			ItemW = 0;
		}
		else {
			ItemNo = (int)plr[myplr].HoldItem._iCurs;
			ItemW = (uint)(s__8011d0cc[ItemNo] >> 4) - 1;
		}
		if ((InvCursPos - 0x19U < 10) && (InvCursPos + iVar2 + ItemW < 0x23)) {
			InvCursPos = InvCursPos + iVar2;
		}
		if ((InvCursPos - 0x23U < 10) && (InvCursPos + iVar2 + ItemW < 0x2d)) {
			InvCursPos = InvCursPos + iVar2;
		}
		if ((InvCursPos - 0x2dU < 10) && (InvCursPos + iVar2 + ItemW < 0x37)) {
			InvCursPos = InvCursPos + iVar2;
		}
		if ((InvCursPos - 0x37U < 10) && (InvCursPos + iVar2 + ItemW < 0x41)) {
			InvCursPos = InvCursPos + iVar2;
		}
	}
	else {
		if ((0x40 < InvCursPos) && (InvCursPos < 0x48)) {
			InvCursPos = InvCursPos + iVar2;
		}
	}
	InvSetItemCurs__Fv();
	if (iVar1 != InvCursPos) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvMoveCursUp__Fv()
 // line 3750, offset 0x8015d80c
	/* begin block 1 */
		// Start line: 3751
		// Start offset: 0x8015D80C
		// Variables:
	// 		int ItemInc; // $a0
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x8015D9F0
	// End Line: 3844

	/* begin block 2 */
		// Start line: 8051
	/* end block 2 */
	// End Line: 8052

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursUp__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = InvCursPos;
	bVar1 = false;
	if (0xb < _pcurs[myplr]) {
		switch(InvCursPos) {
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 0xd:
		case 0x13:
			goto switchD_8015d8cc_caseD_0;
		}
		if (InvCursPos - 0x19U < 0x28) {
LAB_8015d8ec:
			bVar1 = true;
			goto switchD_8015d8cc_caseD_0;
		}
LAB_8015d8f8:
		iVar3 = InvCursPos + -9;
		if (InvCursPos < 0x41) goto switchD_8015d8cc_caseD_0;
		goto LAB_8015d900;
	}
	switch(InvCursPos) {
	case 0:
	case 7:
	case 0xd:
		goto switchD_8015d8cc_caseD_0;
	default:
		if (0x27 < InvCursPos - 0x19U) goto LAB_8015d8f8;
		iVar3 = 0x13;
		if (0x22 < InvCursPos) goto LAB_8015d8ec;
		break;
	case 4:
		iVar3 = 7;
		break;
	case 5:
		iVar3 = 0xd;
		break;
	case 6:
		InvCursPos = 0;
		goto switchD_8015d8cc_caseD_0;
	case 0x13:
		iVar3 = 6;
	}
LAB_8015d900:
	InvCursPos = iVar3;
switchD_8015d8cc_caseD_0:
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
 // line 3848, offset 0x8015da04
	/* begin block 1 */
		// Start line: 3849
		// Start offset: 0x8015DA04
		// Variables:
	// 		int ItemInc; // $s1
	// 		int OldPos; // $s0
	/* end block 1 */
	// End offset: 0x8015DD14
	// End Line: 3949

	/* begin block 2 */
		// Start line: 8254
	/* end block 2 */
	// End Line: 8255

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InvMoveCursDown__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = InvCursPos;
	bVar1 = false;
	if (_pcurs[myplr] < 0xc) {
		switch(InvCursPos) {
		case 0:
			InvCursPos = 6;
			break;
		default:
			if (0x27 < InvCursPos - 0x19U) goto LAB_8015dcdc;
			if ((&plr[myplr].InvList[0x27]._iPLDex)[InvCursPos] == '\0') {
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
switchD_8015dba0_caseD_4:
			InvCursPos = 0x19;
			break;
		case 5:
switchD_8015dba0_caseD_5:
			InvCursPos = 0x22;
			break;
		case 6:
			InvCursPos = 0x13;
			break;
		case 7:
			InvCursPos = 4;
			break;
		case 0xd:
			InvCursPos = 5;
			break;
		case 0x13:
switchD_8015dba0_caseD_0:
			InvCursPos = 0x1d;
		}
	}
	else {
		switch(InvCursPos) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_8015dba0_caseD_0;
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
			goto switchD_8015dba0_caseD_4;
		case 5:
		case 0xd:
			goto switchD_8015dba0_caseD_5;
		}
	}
	if ((InvCursPos - 0x19U < 0x28) && (bVar1)) {
		ItemNo = (int)plr[myplr].HoldItem._iCurs;
		ItemW = ZEXT14(s__8011d0cc[ItemNo] >> 4);
		ItemH = ZEXT14(s__0000000000000000000_00000000000_8011d180[ItemNo] >> 4);
		if (InvCursPos < 0x38) {
			iVar3 = InvCursPos + 10;
			if (0x36 < (int)(InvCursPos + (ItemH - 1U) * 10)) goto LAB_8015dcdc;
		}
		else {
			iVar3 = InvCursPos + 9;
			if (InvCursPos == 0x37) {
				iVar3 = 0x41;
			}
		}
		InvCursPos = iVar3;
	}
LAB_8015dcdc:
	if (0x48 < InvCursPos) {
		InvCursPos = 0x48;
	}
	InvSetItemCurs__Fv();
	if (iVar2 != InvCursPos) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}





