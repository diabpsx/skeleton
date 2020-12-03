#include "THISDUST.H"
#include "STORES.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeStoreMem__Fv()
 // line 170, offset 0x800695a4
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x800695A4
	/* end block 1 */
	// End offset: 0x800695A4
	// End Line: 171

	/* begin block 2 */
		// Start line: 341
	/* end block 2 */
	// End Line: 342

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeStoreMem__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSTextBack__Fv()
 // line 176, offset 0x800695ac
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x800695AC
	/* end block 1 */
	// End offset: 0x80069608
	// End Line: 181

	/* begin block 2 */
		// Start line: 352
	/* end block 2 */
	// End Line: 353

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSTextBack__Fv(void)

{
	SetBorder__6Dialogi(&SBack,0x1a);
	SetRGB__6DialogUcUcUc(&SBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&SBack,0x14,0x18,0x118,0xcd);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawStoreArrows__Fv()
 // line 194, offset 0x8006961c
	/* begin block 1 */
		// Start line: 195
		// Start offset: 0x8006961C
		// Variables:
	// 		struct TextDat *PanelGfx; // $s0
	// 		struct POLY_FT4 *Ft4; // $a2
	// 		int OtPos; // $s1
	// 		int Flagy; // $a1
	/* end block 1 */
	// End offset: 0x80069784
	// End Line: 240

	/* begin block 2 */
		// Start line: 389
	/* end block 2 */
	// End Line: 390

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawStoreArrows__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	uchar uVar3;
	uchar uVar4;
	int iVar5;
	TextDat *this;
	POLY_FT4 *pPVar6;
	uint uVar7;
	
	iVar5 = GetOverlayOtBase__7CBlocks();
	uVar7 = (uint)(byte)stextflag;
	bVar1 = false;
	if (((((uVar7 - 2 < 2) || (stextflag == '\x04')) || (uVar7 - 6 < 2)) ||
			((stextflag == '\b' || (uVar7 - 0x10 < 2)))) || (stextflag == '\x12')) {
		bVar1 = true;
	}
	if ((bVar1) && (storenumh != 0)) {
		this = GM_UseTexData__Fi(0);
		if (stextsval != 0) {
			pPVar6 = PrintFt4__7TextDatiiiiii
												 (this,0x7f,(int)StoreBackRect.x,(int)StoreBackRect.y + 0x31,0,iVar5 + 10,0)
			;
			uVar4 = GOLDB;
			uVar3 = GOLDG;
			uVar2 = GOLDR;
			pPVar6->code = pPVar6->code & 0xfc;
			pPVar6->r0 = uVar2;
			pPVar6->g0 = uVar3;
			pPVar6->b0 = uVar4;
		}
		if (stextsval < stextsmax) {
			pPVar6 = PrintFt4__7TextDatiiiiii
												 (this,0x80,(int)StoreBackRect.x,
													(int)StoreBackRect.y + (int)StoreBackRect.h + -0x12,0,iVar5 + 10,0);
			uVar4 = GOLDB;
			uVar3 = GOLDG;
			uVar2 = GOLDR;
			pPVar6->code = pPVar6->code & 0xfc;
			pPVar6->r0 = uVar2;
			pPVar6->g0 = uVar3;
			pPVar6->b0 = uVar4;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintSString__FiiUcPcci(int x /*$s6*/, int y /*$s4*/, unsigned char cjustflag /*stack -56*/, char *str /*$s5*/, int col /*stack 16*/, int val /*stack 20*/)
 // line 247, offset 0x8006979c
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x8006979C
		// Variables:
	// 		int yy; // $s0
	// 		char valstr[32]; // stack offset -88
	// 		int SpinnerY; // $fp
	// 		unsigned char R; // $s3
	// 		unsigned char G; // $s2
	// 		unsigned char B; // $s1
	// 		static unsigned char DaveFix; // offset 0x8011baa8
	/* end block 1 */
	// End offset: 0x80069C10
	// End Line: 377

	/* begin block 2 */
		// Start line: 507
	/* end block 2 */
	// End Line: 508

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintSString__FiiUcPcci(int x,int y,uchar cjustflag,char *str,int col,int val)

{
	short sVar1;
	RECT *TextWindow;
	char *__format;
	int y_00;
	int iVar2;
	int Y;
	uint B;
	uint G;
	uint R;
	TXT_JUST local_80;
	char acStack88 [32];
	uchar local_38;
	
	SWrapCount = 0;
	sVar1 = (short)x;
	StoreBackRect.x = StoreBackRect.x + sVar1;
	StoreBackRectClipper.x = StoreBackRectClipper.x + sVar1;
	if (SItemListFlag == '\x01') {
		SStringY[0] = SStringYBuy0;
	}
	else {
		if (SItemListFlag < '\x02') {
			if (SItemListFlag == '\0') {
				SStringY[0] = SStringYNorm;
			}
		}
		else {
			if (SItemListFlag == '\x02') {
				SStringY[0] = SStringYBuy1;
			}
		}
	}
	local_38 = cjustflag;
	GM_UseTexData__Fi(0);
	if (4 < y) {
		y = y + -1;
	}
	col = col << 0x18;
	if (stextsel + -1 == y) {
		col = (-(uint)(col >> 0x18 != 3) & 3) << 0x18;
	}
	col = col >> 0x18;
	if (col == 1) {
		R = (uint)BLUER;
		G = (uint)BLUEG;
		B = (uint)BLUEB;
	}
	else {
		if (col < 2) {
			if (col == 0) {
				R = (uint)WHITER;
				G = (uint)WHITEG;
				B = (uint)WHITEB;
				goto LAB_80069960;
			}
		}
		else {
			if (col == 2) {
				R = (uint)REDR;
				G = (uint)REDG;
				B = (uint)REDB;
				goto LAB_80069960;
			}
		}
		R = (uint)GOLDR;
		G = (uint)GOLDG;
		B = (uint)GOLDB;
	}
LAB_80069960:
	iVar2 = -0x7fee374a;
	y_00 = (int)StoreBackRect.y;
	StoreBackRectClipper.y = StoreBackRectClipper.y + -4;
	StoreBackRect.y = StoreBackRect.y + -4;
	StoreBackRect.h = StoreBackRect.h + 4;
	Y = SStringY[0][y] + (int)(&stext)[y]._syoff;
	y_00 = Y + y_00;
	StoreBackRectClipper.h = StoreBackRectClipper.h + 4;
	Y = Y + 3;
	if (local_38 == '\0') {
		if (-1 < val) {
			iVar2 = -0x7fee3742;
		}
		TextWindow = (RECT *)(iVar2 + -2);
		local_80 = JustLeft;
	}
	else {
		if (val < 0) {
			local_80 = JustCentre;
			TextWindow = &StoreBackRect;
		}
		else {
			local_80 = JustCentre;
			TextWindow = &StoreBackRectClipper;
		}
	}
	SWrapCount = Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,str,local_80,TextWindow,R,G,B)
	;
	if (stextsel + -1 == y) {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(MediumFont.MinX + -8,y_00,-0x60,'@',0xf0,0x20,0x40,0,1,0xffff,1,0,8);
	}
	if (0 < val) {
		__format = GetStr__Fi(STR__I_1277);
		sprintf(acStack88,__format,val);
		StoreBackRect.w = StoreBackRect.w + -0x1c;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,0,Y,acStack88,JustRight,&StoreBackRect,R,G,B)
		;
		StoreBackRect.w = StoreBackRect.w + 0x1c;
	}
	if (stextsel + -1 == y) {
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(MediumFont.MaxX + 4,y_00,-0x60,'@',0xf0,0x20,0x40,0,1,0xffff,1,0,8);
	}
	SStringY[0] = SStringYNorm;
	StoreBackRect.x = StoreBackRect.x - sVar1;
	StoreBackRect.y = StoreBackRect.y + 4;
	StoreBackRect.h = StoreBackRect.h + -4;
	StoreBackRectClipper.x = StoreBackRectClipper.x - sVar1;
	StoreBackRectClipper.y = StoreBackRectClipper.y + 4;
	StoreBackRectClipper.h = StoreBackRectClipper.h + -4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSLine__Fi(int y /*$a0*/)
 // line 384, offset 0x80069c44
	/* begin block 1 */
		// Start line: 385
		// Start offset: 0x80069C44
		// Variables:
	// 		int yy; // $s0
	/* end block 1 */
	// End offset: 0x80069CC0
	// End Line: 392

	/* begin block 2 */
		// Start line: 844
	/* end block 2 */
	// End Line: 845

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSLine__Fi(int y)

{
	int iVar1;
	int iVar2;
	
	iVar1 = (int)StoreBackRect.y;
	iVar2 = SStringY[0][y];
	SetBorder__6Dialogi(&SBack,0x1a);
	SetRGB__6DialogUcUcUc(&SBack,BORDERR >> 1,BORDERG >> 1,BORDERB >> 1);
	Line__6Dialogiii(&SBack,(int)StoreBackRect.x,iVar2 + iVar1,(int)StoreBackRect.w);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearSText__Fii(int s /*$a0*/, int e /*$a1*/)
 // line 398, offset 0x80069cd8
	/* begin block 1 */
		// Start line: 399
		// Start offset: 0x80069CD8
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80069D68
	// End Line: 412

	/* begin block 2 */
		// Start line: 885
	/* end block 2 */
	// End Line: 886

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearSText__Fii(int s,int e)

{
	int iVar1;
	
	if (s < e) {
		iVar1 = s * 0x8c;
		do {
			(&stext._sx)[iVar1] = '\0';
			(&stext._syoff)[iVar1] = '\0';
			stext._sstr[iVar1] = '\0';
			(&stext._sjust)[iVar1] = '\0';
			(&stext._sclr)[iVar1] = '\0';
			(&stext._sline)[iVar1] = '\0';
			(&stext._ssel)[iVar1] = '\0';
			*(undefined4 *)((int)&stext._sval + iVar1) = 0xffffffff;
			s = s + 1;
			iVar1 = iVar1 + 0x8c;
		} while (s < e);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSLine__Fi(int y /*$a0*/)
 // line 417, offset 0x80069d70
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x80069D70
	/* end block 1 */
	// End offset: 0x80069DB8
	// End Line: 422

	/* begin block 2 */
		// Start line: 921
	/* end block 2 */
	// End Line: 922

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSLine__Fi(int y)

{
	(&stext)[y]._sx = '\0';
	(&stext)[y]._syoff = '\0';
	(&stext)[y]._sstr[0] = '\0';
	(&stext)[y]._sline = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSTextVal__Fii(int y /*$a0*/, int val /*$a1*/)
 // line 427, offset 0x80069dc0
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x80069DC0
	/* end block 1 */
	// End offset: 0x80069DE0
	// End Line: 429

	/* begin block 2 */
		// Start line: 944
	/* end block 2 */
	// End Line: 945

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSTextVal__Fii(int y,int val)

{
	(&stext)[y]._sval = val;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OffsetSTextY__Fii(int y /*$a0*/, int yo /*$a1*/)
 // line 433, offset 0x80069de8
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x80069DE8
	/* end block 1 */
	// End offset: 0x80069E08
	// End Line: 435

	/* begin block 2 */
		// Start line: 956
	/* end block 2 */
	// End Line: 957

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OffsetSTextY__Fii(int y,int yo)

{
	(&stext)[y]._syoff = (char)yo;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSText__FiiUcPccUc(int x /*$a0*/, int y /*$a1*/, unsigned char j /*$s1*/, char *str /*$a3*/, int clr /*stack 16*/, int sel /*stack 20*/)
 // line 441, offset 0x80069e10
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x80069E10
	/* end block 1 */
	// End offset: 0x80069EAC
	// End Line: 452

	/* begin block 2 */
		// Start line: 971
	/* end block 2 */
	// End Line: 972

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSText__FiiUcPccUc(int x,int y,uchar j,char *str,int clr,int sel)

{
	if (*str != '\0') {
		(&stext)[y]._sx = (char)x;
		(&stext)[y]._syoff = '\0';
		strcpy((&stext)[y]._sstr,str);
		(&stext)[y]._sjust = j;
		(&stext)[y]._sclr = (char)clr;
		(&stext)[y]._sline = '\0';
		(&stext)[y]._ssel = (uchar)sel;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x /*$s2*/, int l /*$s5*/, char iclr /*$s7*/)
 // line 456, offset 0x80069ecc
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x80069ECC
		// Variables:
	// 		char sstr[128]; // stack offset -168
	// 		int li; // $s6
	/* end block 1 */
	// End offset: 0x8006A3D8
	// End Line: 600

	/* begin block 2 */
		// Start line: 1003
	/* end block 2 */
	// End Line: 1004

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintStoreItem__FPC10ItemStructic(ItemStruct *x,int l,char iclr)

{
	char cVar1;
	byte bVar2;
	byte bVar3;
	byte bVar4;
	char *__format;
	int iVar5;
	uint uVar6;
	int iVar7;
	int y;
	char local_a8 [128];
	
	y = 0;
	local_a8[0] = '\0';
	if (x->_iIdentified != '\0') {
		if (((x->_iMagical != '\x02') && ((int)x->_iPrePower != -1)) &&
			 (PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Prefix[(int)x->_iPrePower].PLPower,x),
			 tempstr[0] != '\0')) {
			strcat(local_a8,tempstr);
		}
		if ((int)x->_iSufPower != -1) {
			PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Suffix[(int)x->_iSufPower].PLPower,x);
			if (local_a8[0] != '\0') {
				if (tempstr[0] == '\0') goto LAB_80069ff0;
				strcat(local_a8,(char *)&PTR_DAT_8011baac);
				y = 1;
			}
			if (tempstr[0] != '\0') {
				strcat(local_a8,tempstr);
			}
		}
	}
LAB_80069ff0:
	if ((x->_iMiscId == '\x17') && (bVar2 = x->_iMaxCharges, bVar2 != 0)) {
		__format = GetStr__Fi(STR_CHARGES___I__I_178);
		sprintf(tempstr,__format,(uint)x->_iCharges,(uint)bVar2);
		if (local_a8[0] != '\0') {
			strcat(local_a8,(char *)&PTR_DAT_8011baac);
			y = y + 1;
		}
		strcat(local_a8,tempstr);
	}
	if (local_a8[0] != '\0') {
		AddSText__FiiUcPccUc(0xc,l,'\0',local_a8,(int)iclr,0);
		l = l + 1 + y;
		y = 0;
	}
	cVar1 = x->_iClass;
	local_a8[0] = '\0';
	if (cVar1 == '\x01') {
		__format = GetStr__Fi(STR_DAMAGE_225);
		sprintf(local_a8,"%s:%i-%i",__format,(int)x->_iMinDam,(int)x->_iMaxDam);
	}
	if (cVar1 == '\x02') {
		__format = GetStr__Fi(STR_ARMOR___I___47);
		sprintf(local_a8,__format,(int)x->_iAC);
	}
	iVar7 = (int)x->_iMaxDur;
	if ((iVar7 == 0xff) || (iVar7 == 0)) {
		if (local_a8[0] != '\0') {
			strcat(local_a8,(char *)&PTR_DAT_8011baac);
		}
		__format = GetStr__Fi(STR_INDESTRUCTIBLE__536);
	}
	else {
		__format = GetStr__Fi(STR_DUR___I__I____287);
		sprintf(tempstr,__format,(int)x->_iDurability,iVar7);
		iVar7 = GetStrWidth__5CFontPc(&MediumFont,tempstr);
		iVar5 = GetStrWidth__5CFontPc(&MediumFont,local_a8);
		if (iVar7 + iVar5 <= (int)StoreBackRect.w * 2 + -0x44) {
			strcat(local_a8,&DAT_8011bab0);
		}
		__format = tempstr;
	}
	strcat(local_a8,__format);
	if (x->_itype == 0) {
		local_a8[0] = '\0';
	}
	uVar6 = (uint)x->_iMiscId;
	if (((((((1 < uVar6 - 0x15) && (1 < uVar6 - 2)) && (1 < uVar6 - 4)) &&
				((1 < uVar6 - 6 && (1 < uVar6 - 10)))) &&
			 ((1 < uVar6 - 0xc && ((1 < uVar6 - 0xe && (1 < uVar6 - 0x10)))))) && (1 < uVar6 - 0x12)) &&
		 (x->_iMiscId != 0x18)) {
		strcat(local_a8,(char *)&PTR_DAT_8011baac);
	}
	bVar2 = x->_iMinStr;
	bVar3 = x->_iMinMag;
	bVar4 = x->_iMinDex;
	if ((uint)bVar2 + (uint)bVar3 + (uint)bVar4 == 0) {
		__format = GetStr__Fi(STR_NO_REQUIRED_ATTRIBUTES_721);
	}
	else {
		__format = GetStr__Fi(STR_REQUIRED__861);
		strcpy(tempstr,__format);
		if (bVar2 != 0) {
			__format = GetStr__Fi(STR__S__I_STR_1308);
			sprintf(tempstr,__format,tempstr,(uint)bVar2);
		}
		if (bVar3 != 0) {
			__format = GetStr__Fi(STR__S__I_MAG_1307);
			sprintf(tempstr,__format,tempstr,(uint)bVar3);
		}
		if (bVar4 != 0) {
			__format = GetStr__Fi(STR__S__I_DEX_1306);
			sprintf(tempstr,__format,tempstr,(uint)bVar4);
		}
		__format = tempstr;
	}
	strcat(local_a8,__format);
	AddSText__FiiUcPccUc(0xc,l,'\0',local_a8,(int)iclr,0);
	y = l + 2 + y;
	if ((x->_iMagical == '\x02') && (x->_iIdentified != '\0')) {
		if ((x->_iMaxDur == 0xff) || (x->_iMaxDur == 0)) {
			__format = GetStr__Fi(STR_UNIQUE_ITEM_1187);
			y = y + 1;
		}
		else {
			__format = GetStr__Fi(STR_UNIQUE_ITEM_1187);
		}
		AddSText__FiiUcPccUc(0xc,y,'\0',__format,(int)iclr,0);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ StoreAutoPlace__Fv()
 // line 611, offset 0x8006a408
	/* begin block 1 */
		// Start line: 612
		// Start offset: 0x8006A408
		// Variables:
	// 		int i; // $s0
	// 		int w; // $s2
	// 		int h; // $s3
	// 		int idx; // $a1
	// 		unsigned char done; // $a0
	/* end block 1 */
	// End offset: 0x8006AA2C
	// End Line: 672

	/* begin block 2 */
		// Start line: 1333
	/* end block 2 */
	// End Line: 1334

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar StoreAutoPlace__Fv(void)

{
	PlayerStruct *pPVar1;
	uchar uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	int *piVar8;
	int ii;
	int iVar9;
	int ii_00;
	int iVar10;
	int *piVar11;
	
	SetICursor__Fi((uint)plr[myplr].HoldItem._iCurs + 0xc);
	iVar10 = icursH28;
	ii_00 = icursW28;
	uVar2 = '\0';
	if (icursW28 == 1) {
		if (icursH28 == 1) {
			if (((plr[myplr].HoldItem._iStatFlag != '\0') &&
					((&AllItemsUseable)[(int)plr[myplr].HoldItem.IDidx] != '\0')) &&
				 (plr[myplr].HoldItem._itype != 0xb)) {
				iVar9 = 0;
				ii = 0;
				do {
					if (*(short *)((int)&plr[myplr].SpdList[0]._itype + ii) == -1) {
						pPVar1 = plr + myplr;
						pIVar7 = &plr[myplr].HoldItem;
						piVar11 = (int *)(ii + myplr * 0x19e8 + -0x7ff24518);
						do {
							piVar8 = piVar11;
							pIVar6 = pIVar7;
							iVar3 = pIVar6->_iVMult1;
							iVar4 = pIVar6->_iVAdd2;
							iVar5 = pIVar6->_iVMult2;
							*piVar8 = pIVar6->_iVAdd1;
							piVar8[1] = iVar3;
							piVar8[2] = iVar4;
							piVar8[3] = iVar5;
							pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
							piVar11 = piVar8 + 4;
						} while (pIVar7 != (ItemStruct *)&(pPVar1->HoldItem)._iSufPower);
						iVar3 = pIVar6->_ivalue;
						iVar4 = pIVar6->_iIvalue;
						piVar8[4] = pIVar7->_iVAdd1;
						piVar8[5] = iVar3;
						piVar8[6] = iVar4;
						uVar2 = '\x01';
					}
					iVar9 = iVar9 + 1;
					ii = ii + 0x6c;
				} while ((iVar9 < 8) && (uVar2 == '\0'));
			}
			ii = 0x1e;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,1,1);
				ii = iVar9;
			} while (iVar9 < 0x28);
			ii = 0x14;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,1,1);
				ii = iVar9;
			} while (iVar9 < 0x1e);
			ii = 10;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,1,1);
				ii = iVar9;
			} while (iVar9 < 0x14);
			ii = 0;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,1,1);
				ii = iVar9;
			} while (iVar9 < 10);
		}
		if (iVar10 == 2) {
			ii = 0x1d;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + -1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,2,1);
				ii = iVar9;
			} while (0x13 < iVar9);
			ii = 9;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + -1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,2,1);
				ii = iVar9;
			} while (-1 < iVar9);
			ii = 0x13;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + -1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,2,1);
				ii = iVar9;
			} while (9 < iVar9);
		}
		if (iVar10 == 3) {
			ii = 0;
			do {
				if (uVar2 != '\0') break;
				iVar9 = ii + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,1,3,1);
				ii = iVar9;
			} while (iVar9 < 0x14);
		}
	}
	if (ii_00 == 2) {
		if (iVar10 == 2) {
			ii_00 = 0;
			if (uVar2 == '\0') {
				piVar11 = &AP2x2Tbl;
				do {
					ii = *piVar11;
					piVar11 = piVar11 + 1;
					ii_00 = ii_00 + 1;
					uVar2 = AutoPlace__FiiiiUc(myplr,ii,2,2,1);
					if (9 < ii_00) break;
				} while (uVar2 == '\0');
			}
			ii_00 = 0x15;
			do {
				if (uVar2 != '\0') break;
				ii = ii_00 + 2;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii_00,2,2,1);
				ii_00 = ii;
			} while (ii < 0x1d);
			ii_00 = 1;
			do {
				if (uVar2 != '\0') break;
				ii = ii_00 + 2;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii_00,2,2,1);
				ii_00 = ii;
			} while (ii < 9);
			ii_00 = 10;
			do {
				if (uVar2 != '\0') break;
				ii = ii_00 + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii_00,2,2,1);
				ii_00 = ii;
			} while (ii < 0x13);
		}
		if (iVar10 == 3) {
			ii_00 = 0;
			do {
				if (uVar2 != '\0') break;
				iVar10 = ii_00 + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii_00,2,3,1);
				ii_00 = iVar10;
			} while (iVar10 < 9);
			ii_00 = 10;
			do {
				if (uVar2 != '\0') {
					return uVar2;
				}
				iVar10 = ii_00 + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii_00,2,3,1);
				ii_00 = iVar10;
			} while (iVar10 < 0x13);
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSmith__Fv()
 // line 677, offset 0x8006aa50
	/* begin block 1 */
		// Start line: 678
		// Start offset: 0x8006AA50
	/* end block 1 */
	// End offset: 0x8006ABC4
	// End Line: 692

	/* begin block 2 */
		// Start line: 1470
	/* end block 2 */
	// End Line: 1471

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSmith__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WELCOME_TO_THE_1226);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_BLACKSMITH_S_SHOP_78);
	AddSText__FiiUcPccUc(0,2,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,6,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_GRISWOLD_1066);
	AddSText__FiiUcPccUc(0,8,'\x01',str,1,1);
	str = GetStr__Fi(STR_BUY_BASIC_ITEMS_149);
	AddSText__FiiUcPccUc(0,9,'\x01',str,0,1);
	str = GetStr__Fi(STR_BUY_PREMIUM_ITEMS_151);
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	str = GetStr__Fi(STR_SELL_ITEMS_953);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	str = GetStr__Fi(STR_REPAIR_ITEMS_859);
	AddSText__FiiUcPccUc(0,0xc,'\x01',str,0,1);
	str = GetStr__Fi(STR_LEAVE_THE_SHOP_577);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollSBuy__Fi(int idx /*$s0*/)
 // line 697, offset 0x8006abd8
	/* begin block 1 */
		// Start line: 698
		// Start offset: 0x8006ABD8
		// Variables:
	// 		int l; // $s1
	// 		int ls; // $s4
	// 		char iclr; // $s0
	/* end block 1 */
	// End offset: 0x8006ADBC
	// End Line: 724

	/* begin block 2 */
		// Start line: 1510
	/* end block 2 */
	// End Line: 1511

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ScrollSBuy__Fi(int idx)

{
	int *piVar1;
	int iVar2;
	uint clr;
	char *str;
	ushort ItemNo;
	int y;
	ItemStruct *pIVar3;
	
	ClearSText__Fii(5,0x15);
	y = 5;
	stextup = 5;
	iVar2 = idx * 0x6c;
	pIVar3 = &_smithitem + idx;
	do {
		if (*(short *)((int)&(&_smithitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			clr = (uint)((&(&_smithitem)[StorePlrNo * 0x14]._iMagical)[iVar2] != '\0');
			if ((&(&_smithitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] == '\0') {
				clr = 2;
			}
			if ((&(&_smithitem)[StorePlrNo * 0x14]._iMagical)[iVar2] == '\0') {
				ItemNo = *(ushort *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iName + iVar2);
			}
			else {
				ItemNo = *(ushort *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iIName + iVar2);
			}
			str = MakeItemStr__FP10ItemStructUsUs
											(pIVar3 + StorePlrNo * 0x14,ItemNo,StoreBackRect.w - 0x44);
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			piVar1 = (int *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iIvalue + iVar2);
			iVar2 = iVar2 + 0x6c;
			AddSTextVal__Fii(y,*piVar1);
			PrintStoreItem__FPC10ItemStructic(pIVar3 + StorePlrNo * 0x14,y + 1,(char)clr);
			pIVar3 = pIVar3 + 1;
			stextdown = y;
		}
		y = y + 4;
	} while (y < 0xf);
	if (((&stext)[stextsel]._ssel == '\0') && (stextsel != 0x16)) {
		stextsel = stextdown;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSBuy__Fv()
 // line 730, offset 0x8006ade0
	/* begin block 1 */
		// Start line: 731
		// Start offset: 0x8006ADE0
	/* end block 1 */
	// End offset: 0x8006AF9C
	// End Line: 764

	/* begin block 2 */
		// Start line: 1584
	/* end block 2 */
	// End Line: 1585

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSBuy__Fv(void)

{
	short *psVar1;
	char *__format;
	int iVar2;
	
	storenumh = 0;
	if ((&_smithitem)[StorePlrNo * 0x14]._itype != -1) {
		iVar2 = 0;
		do {
			SetItemMinStats__FPC12PlayerStructP10ItemStruct
								(plr + options_pad,
								 (ItemStruct *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
			storenumh = storenumh + 1;
			psVar1 = (short *)((int)&(&_smithitem)[StorePlrNo * 0x14 + 1]._itype + iVar2);
			iVar2 = iVar2 + 0x6c;
		} while (*psVar1 != -1);
	}
	if (storenumh == 0) {
		stextsmax = 0;
		StartStore__Fc('\x18');
	}
	else {
		SItemListFlag = '\x01';
		stextsize = '\x01';
		stextscrl = '\x01';
		stextsval = 0;
		__format = GetStr__Fi(STR_I_HAVE_THESE_ITEMS_FOR_SALE_NYOUR_GOLD____I_552);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		stextsmax = storenumh + -3;
		if (stextsmax < 0) {
			stextsmax = 0;
		}
		S_ScrollSBuy__Fi(stextsval);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollSPBuy__Fi(int idx /*$s4*/)
 // line 770, offset 0x8006afb0
	/* begin block 1 */
		// Start line: 771
		// Start offset: 0x8006AFB0
		// Variables:
	// 		int l; // $s3
	// 		char iclr; // $s2
	// 		int boughtitems; // $a0

		/* begin block 1.1 */
			// Start line: 788
			// Start offset: 0x8006B038

			/* begin block 1.1.1 */
				// Start line: 788
				// Start offset: 0x8006B050

				/* begin block 1.1.1.1 */
					// Start line: 790
					// Start offset: 0x8006B064

					/* begin block 1.1.1.1.1 */
						// Start line: 791
						// Start offset: 0x8006B09C
						// Variables:
					// 		char *StrPtr; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006B0C4
					// End Line: 798
				/* end block 1.1.1.1 */
				// End offset: 0x8006B190
				// End Line: 816
			/* end block 1.1.1 */
			// End offset: 0x8006B190
			// End Line: 817
		/* end block 1.1 */
		// End offset: 0x8006B1A0
		// End Line: 818
	/* end block 1 */
	// End offset: 0x8006B1E8
	// End Line: 820

	/* begin block 2 */
		// Start line: 1667
	/* end block 2 */
	// End Line: 1668

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ScrollSPBuy__Fi(int idx)

{
	uint clr;
	char *str;
	int iVar1;
	int y;
	int iVar2;
	int iVar3;
	int iVar4;
	
	ClearSText__Fii(5,0x15);
	stextup = 5;
	iVar3 = 0;
	if (idx != 0) {
		y = StorePlrNo * 0x288;
		do {
			if (*(short *)((int)&_premiumitem._itype + y) != -1) {
				idx = idx + -1;
			}
			y = y + 0x6c;
			iVar3 = iVar3 + 1;
		} while (idx != 0);
	}
	y = 5;
	iVar4 = iVar3 * 0x6c;
	while ((y < 0xf && (iVar3 < 6))) {
		if (*(short *)((int)&(&_premiumitem)[StorePlrNo * 6]._itype + iVar4) == -1) {
			y = y + -8;
		}
		else {
			clr = (uint)((&(&_premiumitem)[StorePlrNo * 6]._iMagical)[iVar4] != '\0');
			if ((&(&_premiumitem)[StorePlrNo * 6]._iStatFlag)[iVar4] == '\0') {
				clr = 2;
			}
			iVar2 = (int)&_premiumitem._iVAdd1 + iVar4;
			str = MakeItemStr__FP10ItemStructUsUs
											((ItemStruct *)(StorePlrNo * 0x288 + iVar2),
											 *(ushort *)((int)&(&_premiumitem)[StorePlrNo * 6]._iIName + iVar4),0x100);
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			AddSTextVal__Fii(y,*(int *)((int)&(&_premiumitem)[StorePlrNo * 6]._iIvalue + iVar4));
			iVar1 = GetWrap__5CFontPcP4RECT(&MediumFont,str,&StoreBackRectClipper);
			PrintStoreItem__FPC10ItemStructic
								((ItemStruct *)(StorePlrNo * 0x288 + iVar2),y + iVar1,(char)clr);
			stextdown = y;
		}
		iVar4 = iVar4 + 0x6c;
		iVar3 = iVar3 + 1;
		y = y + 8;
	}
	if (((&stext)[stextsel]._ssel == '\0') && (stextsel != 0x16)) {
		stextsel = stextdown;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ S_StartSPBuy__Fv()
 // line 825, offset 0x8006b210
	/* begin block 1 */
		// Start line: 826
		// Start offset: 0x8006B210
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8006B3B8
	// End Line: 862

	/* begin block 2 */
		// Start line: 1787
	/* end block 2 */
	// End Line: 1788

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar S_StartSPBuy__Fv(void)

{
	uchar uVar1;
	char *__format;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar2 = 0;
	SItemListFlag = '\x02';
	storenumh = 0;
	do {
		if (*(short *)((int)&(&_premiumitem)[StorePlrNo * 6]._itype + iVar2) != -1) {
			SetItemMinStats__FPC12PlayerStructP10ItemStruct
								(plr + options_pad,
								 (ItemStruct *)((int)&(&_premiumitem)[StorePlrNo * 6]._iVAdd1 + iVar2));
			storenumh = storenumh + 1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 6);
	if (storenumh == 0) {
		StartStore__Fc('\x01');
		stextsel = 0xe;
		uVar1 = '\0';
	}
	else {
		stextsize = '\x01';
		stextscrl = '\x01';
		stextsval = 0;
		__format = GetStr__Fi(STR_I_HAVE_THESE_PREMIUM_ITEMS_FOR_SALE_NYOUR_GOLD____I_553);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		stextsmax = storenumh + -2;
		if (stextsmax < 0) {
			stextsmax = 0;
		}
		S_ScrollSPBuy__Fi(stextsval);
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SmithSellOk__Fi(int i /*$a0*/)
 // line 867, offset 0x8006b3d0
	/* begin block 1 */
		// Start line: 868
		// Start offset: 0x8006B3D0
	/* end block 1 */
	// End offset: 0x8006B4B0
	// End Line: 879

	/* begin block 2 */
		// Start line: 1882
	/* end block 2 */
	// End Line: 1883

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar SmithSellOk__Fi(int i)

{
	short sVar1;
	bool bVar2;
	
	sVar1 = plr[myplr].InvList[i]._itype;
	if (((((sVar1 == -1) || (sVar1 == 0)) || (sVar1 == 0xb)) || ((sVar1 == 0xe || (sVar1 == 10)))) ||
		 (plr[myplr].InvList[i].IDidx == 0x21)) {
		bVar2 = false;
	}
	else {
		bVar2 = true;
		if ((plr[myplr].InvList[i]._iMagical != '\0') && (plr[myplr].InvList[i]._iIdentified != '\0')) {
			bVar2 = plr[myplr].InvList[i]._iIvalue != 0;
		}
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollSSell__Fi(int idx /*$s6*/)
 // line 884, offset 0x8006b4b8
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x8006B4B8
		// Variables:
	// 		int l; // $s4
	// 		int ls; // $s7
	// 		int v; // $s3
	// 		char iclr; // $s0
	// 		int Jumpy; // $fp

		/* begin block 1.1 */
			// Start line: 895
			// Start offset: 0x8006B4FC

			/* begin block 1.1.1 */
				// Start line: 898
				// Start offset: 0x8006B538

				/* begin block 1.1.1.1 */
					// Start line: 900
					// Start offset: 0x8006B558

					/* begin block 1.1.1.1.1 */
						// Start line: 901
						// Start offset: 0x8006B570
						// Variables:
					// 		char *StrPtr; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006B684
					// End Line: 943
				/* end block 1.1.1.1 */
				// End offset: 0x8006B684
				// End Line: 943
			/* end block 1.1.1 */
			// End offset: 0x8006B684
			// End Line: 945
		/* end block 1.1 */
		// End offset: 0x8006B698
		// End Line: 946
	/* end block 1 */
	// End offset: 0x8006B6D8
	// End Line: 956

	/* begin block 2 */
		// Start line: 1915
	/* end block 2 */
	// End Line: 1916

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ScrollSSell__Fi(int idx)

{
	char cVar1;
	int iVar2;
	uint clr;
	char *str;
	int val;
	int y;
	ItemStruct *ItemPtr;
	int iVar3;
	
	iVar3 = 8;
	if (SItemListFlag == '\x01') {
		iVar3 = 4;
	}
	ClearSText__Fii(5,0x15);
	stextup = 5;
	y = 5;
	iVar2 = idx * 0x6c;
	ItemPtr = &storehold + idx;
	while ((y < 0xf && (idx < storenumh))) {
		if (*(short *)((int)&storehold._itype + iVar2) != -1) {
			cVar1 = (&storehold._iMagical)[iVar2];
			clr = (uint)(cVar1 != '\0');
			if (cVar1 == '\x02') {
				clr = 3;
			}
			if ((&storehold._iStatFlag)[iVar2] == '\0') {
				clr = 2;
			}
			if ((cVar1 == '\0') || ((&storehold._iIdentified)[iVar2] == '\0')) {
				str = MakeItemStr__FP10ItemStructUsUs
												(ItemPtr,*(ushort *)((int)&storehold._iName + iVar2),0x100);
				val = *(int *)((int)&storehold._ivalue + iVar2);
			}
			else {
				str = MakeItemStr__FP10ItemStructUsUs
												((ItemStruct *)((int)&storehold._iVAdd1 + iVar2),
												 *(ushort *)((int)&storehold._iIName + iVar2),0x100);
				val = *(int *)((int)&storehold._iIvalue + iVar2);
			}
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			AddSTextVal__Fii(y,val);
			val = GetWrap__5CFontPcP4RECT(&MediumFont,str,&StoreBackRectClipper);
			PrintStoreItem__FPC10ItemStructic(ItemPtr,y + val,(char)clr);
			stextdown = y;
		}
		ItemPtr = ItemPtr + 1;
		iVar2 = iVar2 + 0x6c;
		idx = idx + 1;
		y = y + iVar3;
	}
	stextsmax = storenumh + -2;
	if ((WStaffFlag == '\0') && (stextsmax = storenumh + -2, WFlag != '\0')) {
		stextsmax = storenumh + -3;
	}
	if (stextsmax < 0) {
		stextsmax = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSSell__Fv()
 // line 961, offset 0x8006b70c
	/* begin block 1 */
		// Start line: 962
		// Start offset: 0x8006B70C
		// Variables:
	// 		int i; // $s0
	// 		unsigned char sellok; // $s2
	/* end block 1 */
	// End offset: 0x8006BB20
	// End Line: 1008

	/* begin block 2 */
		// Start line: 2080
	/* end block 2 */
	// End Line: 2081

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSSell__Fv(void)

{
	bool bVar1;
	ItemStruct *pIVar2;
	uchar uVar3;
	char *__format;
	int i;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	int *piVar9;
	ItemStruct *pIVar10;
	int iVar11;
	
	bVar1 = false;
	i = 0x13d4;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + i) = 0xffff;
		i = i + -0x6c;
	} while (-1 < i);
	i = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar11 = 0;
		do {
			uVar3 = SmithSellOk__Fi(i);
			if (uVar3 != '\0') {
				bVar1 = true;
				piVar7 = (int *)(iVar11 + myplr * 0x19e8 + -0x7ff25624);
				piVar9 = piVar7;
				pIVar2 = &storehold + storenumh;
				do {
					pIVar10 = pIVar2;
					piVar8 = piVar9;
					iVar4 = piVar8[1];
					iVar5 = piVar8[2];
					iVar6 = piVar8[3];
					pIVar10->_iVAdd1 = *piVar8;
					pIVar10->_iVMult1 = iVar4;
					pIVar10->_iVAdd2 = iVar5;
					pIVar10->_iVMult2 = iVar6;
					piVar9 = piVar8 + 4;
					pIVar2 = (ItemStruct *)&pIVar10->_iSeed;
				} while (piVar9 != piVar7 + 0x18);
				iVar4 = piVar8[5];
				iVar5 = piVar8[6];
				((ItemStruct *)&pIVar10->_iSeed)->_iVAdd1 = *piVar9;
				pIVar10->_ivalue = iVar4;
				pIVar10->_iIvalue = iVar5;
				if (((&storehold)[storenumh]._iMagical != '\0') &&
					 ((&storehold)[storenumh]._iIdentified != '\0')) {
					(&storehold)[storenumh]._ivalue = (&storehold)[storenumh]._iIvalue;
				}
				iVar4 = storenumh;
				iVar5 = (&storehold)[storenumh]._ivalue >> 2;
				(&storehold)[storenumh]._ivalue = iVar5;
				if (iVar5 == 0) {
					(&storehold)[iVar4]._ivalue = 1;
				}
				iVar4 = storenumh;
				(&storehold)[storenumh]._iIvalue = (&storehold)[storenumh]._ivalue;
				(&storehidx)[iVar4] = (char)i;
				storenumh = storenumh + 1;
			}
			i = i + 1;
			iVar11 = iVar11 + 0x6c;
		} while (i < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_WHICH_ITEM_IS_FOR_SALE__NYOUR_GOLD____I_1231);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_I_WANT__NYOUR_GOLD____I_1259);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SmithRepairOk__Fi(int i /*$a0*/)
 // line 1015, offset 0x8006bb44
	/* begin block 1 */
		// Start line: 1016
		// Start offset: 0x8006BB44
	/* end block 1 */
	// End offset: 0x8006BBE4
	// End Line: 1024

	/* begin block 2 */
		// Start line: 2204
	/* end block 2 */
	// End Line: 2205

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar SmithRepairOk__Fi(int i)

{
	short sVar1;
	bool bVar2;
	
	sVar1 = plr[myplr].InvList[i]._itype;
	if ((((sVar1 == -1) || (sVar1 == 0)) || (sVar1 == 0xb)) || (sVar1 == 0xe)) {
		bVar2 = false;
	}
	else {
		bVar2 = plr[myplr].InvList[i]._iDurability != plr[myplr].InvList[i]._iMaxDur;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm /*$s0*/, int i /*$s1*/)
 // line 1028, offset 0x8006bbec
	/* begin block 1 */
		// Start line: 1029
		// Start offset: 0x8006BBEC
		// Variables:
	// 		int v; // $a0
	/* end block 1 */
	// End offset: 0x8006BDBC
	// End Line: 1049

	/* begin block 2 */
		// Start line: 2228
	/* end block 2 */
	// End Line: 2229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddStoreHoldRepair__FP10ItemStructi(ItemStruct *itm,int i)

{
	char *pcVar1;
	bool bVar2;
	ItemStruct *pIVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	
	if (itm->_iMaxDur < 1) {
		DBG_Error((char *)0x0,"source/STORES.cpp",0x407);
	}
	pIVar3 = &storehold + storenumh;
	pIVar9 = itm;
	do {
		pIVar8 = pIVar9;
		pIVar7 = pIVar3;
		iVar4 = pIVar8->_iVMult1;
		iVar5 = pIVar8->_iVAdd2;
		iVar6 = pIVar8->_iVMult2;
		pIVar7->_iVAdd1 = pIVar8->_iVAdd1;
		pIVar7->_iVMult1 = iVar4;
		pIVar7->_iVAdd2 = iVar5;
		pIVar7->_iVMult2 = iVar6;
		pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
		pIVar3 = (ItemStruct *)&pIVar7->_iSeed;
	} while (pIVar9 != (ItemStruct *)&itm->_iSufPower);
	iVar4 = pIVar8->_ivalue;
	iVar5 = pIVar8->_iIvalue;
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
	pIVar7->_ivalue = iVar4;
	pIVar7->_iIvalue = iVar5;
	iVar4 = storenumh;
	if (((&storehold)[storenumh]._iMagical != '\0') && ((&storehold)[storenumh]._iIdentified != '\0'))
	{
		(&storehold)[storenumh]._ivalue = ((&storehold)[storenumh]._iIvalue * 0x1e) / 100;
	}
	iVar5 = (((((int)(&storehold)[iVar4]._iMaxDur - (int)(&storehold)[iVar4]._iDurability) * 100) /
					 (int)(&storehold)[iVar4]._iMaxDur) * (&storehold)[iVar4]._ivalue) / 100;
	bVar2 = iVar5 < 2;
	if (iVar5 == 0) {
		if (((&storehold)[iVar4]._iMagical != '\0') && ((&storehold)[iVar4]._iIdentified != '\0')) {
			return;
		}
		iVar5 = 1;
		bVar2 = true;
	}
	if (!bVar2) {
		iVar5 = iVar5 >> 1;
	}
	(&storehold)[iVar4]._iIvalue = iVar5;
	(&storehold)[iVar4]._ivalue = iVar5;
	pcVar1 = &storehidx + storenumh;
	storenumh = storenumh + 1;
	*pcVar1 = (char)i;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSRepair__Fv()
 // line 1054, offset 0x8006bdd4
	/* begin block 1 */
		// Start line: 1055
		// Start offset: 0x8006BDD4
		// Variables:
	// 		int i; // $s0
	// 		unsigned char repairok; // $s2
	/* end block 1 */
	// End offset: 0x8006C288
	// End Line: 1113

	/* begin block 2 */
		// Start line: 2281
	/* end block 2 */
	// End Line: 2282

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSRepair__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	char *__format;
	int i;
	int iVar3;
	
	bVar1 = false;
	i = 0x13d4;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + i) = 0xffff;
		i = i + -0x6c;
	} while (-1 < i);
	if ((plr[myplr].InvBody[0]._itype != -1) &&
		 (plr[myplr].InvBody[0]._iDurability != plr[myplr].InvBody[0]._iMaxDur)) {
		bVar1 = true;
		AddStoreHoldRepair__FP10ItemStructi(plr[myplr].InvBody,-1);
	}
	if ((plr[myplr].InvBody[6]._itype != -1) &&
		 (plr[myplr].InvBody[6]._iDurability != plr[myplr].InvBody[6]._iMaxDur)) {
		bVar1 = true;
		AddStoreHoldRepair__FP10ItemStructi(plr[myplr].InvBody + 6,-2);
	}
	if ((plr[myplr].InvBody[4]._itype != -1) &&
		 (plr[myplr].InvBody[4]._iDurability != plr[myplr].InvBody[4]._iMaxDur)) {
		bVar1 = true;
		AddStoreHoldRepair__FP10ItemStructi(plr[myplr].InvBody + 4,-3);
	}
	if ((plr[myplr].InvBody[5]._itype != -1) &&
		 (plr[myplr].InvBody[5]._iDurability != plr[myplr].InvBody[5]._iMaxDur)) {
		bVar1 = true;
		AddStoreHoldRepair__FP10ItemStructi(plr[myplr].InvBody + 5,-4);
	}
	i = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar3 = 0;
		do {
			uVar2 = SmithRepairOk__Fi(i);
			if (uVar2 != '\0') {
				bVar1 = true;
				AddStoreHoldRepair__FP10ItemStructi((ItemStruct *)(myplr * 0x19e8 + -0x7ff25624 + iVar3),i);
			}
			i = i + 1;
			iVar3 = iVar3 + 0x6c;
		} while (i < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_REPAIR_WHICH_ITEM__NYOUR_GOLD____I_860);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_TO_REPAIR__NYOUR_GOLD____I_1262);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWitch__Fv()
 // line 1120, offset 0x8006c2a4
	/* begin block 1 */
		// Start line: 1121
		// Start offset: 0x8006C2A4
	/* end block 1 */
	// End offset: 0x8006C418
	// End Line: 1135

	/* begin block 2 */
		// Start line: 2426
	/* end block 2 */
	// End Line: 2427

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWitch__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WITCH_S_SHACK_1244);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,6,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_ADRIA_1062);
	AddSText__FiiUcPccUc(0,8,'\x01',str,1,1);
	str = GetStr__Fi(STR_BUY_ITEMS_150);
	AddSText__FiiUcPccUc(0,9,'\x01',str,0,1);
	str = GetStr__Fi(STR_BUY_STAVES_152);
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	str = GetStr__Fi(STR_SELL_ITEMS_953);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	str = GetStr__Fi(STR_SELL_STAVES_954);
	AddSText__FiiUcPccUc(0,0xc,'\x01',str,0,1);
	str = GetStr__Fi(STR_RECHARGE_STAVES_845);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	str = GetStr__Fi(STR_LEAVE_THE_SHACK_576);
	AddSText__FiiUcPccUc(0,0xe,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckWitchItem__Fi(int idx /*$a0*/)
 // line 1139, offset 0x8006c42c
	/* begin block 1 */
		// Start line: 1140
		// Start offset: 0x8006C42C
	/* end block 1 */
	// End offset: 0x8006C4C8
	// End Line: 1153

	/* begin block 2 */
		// Start line: 2467
	/* end block 2 */
	// End Line: 2468

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckWitchItem__Fi(int idx)

{
	bool bVar1;
	
	if (WStaffFlag == '\0') {
		bVar1 = (&_witchitem)[StorePlrNo * 0x14 + idx]._iMiscId != '\x17';
	}
	else {
		bVar1 = (&_witchitem)[StorePlrNo * 0x14 + idx]._iMiscId == '\x17';
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollWBuy__Fi(int idx /*$s0*/)
 // line 1177, offset 0x8006c4d0
	/* begin block 1 */
		// Start line: 1178
		// Start offset: 0x8006C4D0
		// Variables:
	// 		int l; // $s2
	// 		int ls; // $s5
	// 		char iclr; // $s0
	// 		int Jumpy; // $s6

		/* begin block 1.1 */
			// Start line: 1192
			// Start offset: 0x8006C50C

			/* begin block 1.1.1 */
				// Start line: 1195
				// Start offset: 0x8006C548

				/* begin block 1.1.1.1 */
					// Start line: 1197
					// Start offset: 0x8006C554

					/* begin block 1.1.1.1.1 */
						// Start line: 1198
						// Start offset: 0x8006C58C
						// Variables:
					// 		char *StrPtr; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006C694
					// End Line: 1225
				/* end block 1.1.1.1 */
				// End offset: 0x8006C694
				// End Line: 1225
			/* end block 1.1.1 */
			// End offset: 0x8006C694
			// End Line: 1225
		/* end block 1.1 */
		// End offset: 0x8006C69C
		// End Line: 1227
	/* end block 1 */
	// End offset: 0x8006C6E4
	// End Line: 1228

	/* begin block 2 */
		// Start line: 2551
	/* end block 2 */
	// End Line: 2552

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ScrollWBuy__Fi(int idx)

{
	int *piVar1;
	int iVar2;
	uint clr;
	char *str;
	int iVar3;
	ushort ItemNo;
	int y;
	ItemStruct *pIVar4;
	int iVar5;
	
	iVar5 = 4;
	if (WStaffFlag != '\0') {
		iVar5 = 8;
	}
	ClearSText__Fii(5,0x15);
	stextup = 5;
	y = 5;
	iVar2 = idx * 0x6c;
	pIVar4 = &_witchitem + idx;
	while (y < 0xf) {
		if (*(short *)((int)&(&_witchitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			clr = (uint)((&(&_witchitem)[StorePlrNo * 0x14]._iMagical)[iVar2] != '\0');
			if ((&(&_witchitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] == '\0') {
				clr = 2;
			}
			if ((&(&_witchitem)[StorePlrNo * 0x14]._iMagical)[iVar2] == '\0') {
				ItemNo = *(ushort *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iName + iVar2);
			}
			else {
				ItemNo = *(ushort *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iIName + iVar2);
			}
			str = MakeItemStr__FP10ItemStructUsUs
											((ItemStruct *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2),ItemNo
											 ,0x100);
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			piVar1 = (int *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iIvalue + iVar2);
			iVar2 = iVar2 + 0x6c;
			AddSTextVal__Fii(y,*piVar1);
			iVar3 = GetWrap__5CFontPcP4RECT(&MediumFont,str,&StoreBackRectClipper);
			PrintStoreItem__FPC10ItemStructic(pIVar4 + StorePlrNo * 0x14,y + iVar3,(char)clr);
			pIVar4 = pIVar4 + 1;
			stextdown = y;
		}
		y = y + iVar5;
	}
	if (((&stext)[stextsel]._ssel == '\0') && (stextsel != 0x16)) {
		stextsel = stextdown;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWBuy__Fv()
 // line 1233, offset 0x8006c714
	/* begin block 1 */
		// Start line: 1234
		// Start offset: 0x8006C714
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8006CA4C
	// End Line: 1284

	/* begin block 2 */
		// Start line: 2678
	/* end block 2 */
	// End Line: 2679

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWBuy__Fv(void)

{
	short *psVar1;
	uchar uVar2;
	int iVar3;
	char *__format;
	int *piVar4;
	int iVar5;
	int idx;
	
	iVar5 = StorePlrNo;
	if (WStaffFlag == '\0') {
		SItemListFlag = '\x01';
	}
	else {
		SItemListFlag = '\x02';
	}
	_WitchIdxOfs[StorePlrNo] = 0;
	_NoWitchItems[iVar5] = 0;
	idx = 0;
	if ((&_witchitem)[iVar5 * 0x14]._itype != -1) {
		iVar5 = 0;
		do {
			iVar3 = CheckWitchItem__Fi(idx);
			if (iVar3 != 0) {
				SetItemMinStats__FPC12PlayerStructP10ItemStruct
									(plr + options_pad,
									 (ItemStruct *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar5));
				_NoWitchItems[StorePlrNo] = _NoWitchItems[StorePlrNo] + 1;
			}
			psVar1 = (short *)((int)&(&_witchitem)[StorePlrNo * 0x14 + 1]._itype + iVar5);
			idx = idx + 1;
			iVar5 = iVar5 + 0x6c;
		} while (*psVar1 != -1);
	}
	iVar5 = StorePlrNo;
	if (_NoWitchItems[StorePlrNo] == 0) {
		StartStore__Fc('\x18');
	}
	else {
		if (WStaffFlag != '\0') {
			piVar4 = _WitchIdxOfs + StorePlrNo;
			idx = *piVar4;
			uVar2 = (&_witchitem)[StorePlrNo * 0x14 + idx]._iMiscId;
			while (uVar2 != '\x17') {
				idx = idx + 1;
				*piVar4 = idx;
				uVar2 = (&_witchitem)[iVar5 * 0x14 + idx]._iMiscId;
			}
		}
		stextsize = '\x01';
		stextscrl = '\x01';
		stextsval = 0;
		stextsmax = 0x14;
		__format = GetStr__Fi(STR_I_HAVE_THESE_ITEMS_FOR_SALE_NYOUR_GOLD____I_552);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollWBuy__Fi(stextsval + _WitchIdxOfs[StorePlrNo]);
		storenumh = _NoWitchItems[StorePlrNo];
		stextsmax = storenumh + -2;
		if ((WStaffFlag == '\0') && (stextsmax = storenumh + -2, WFlag != '\0')) {
			stextsmax = storenumh + -3;
		}
		if (stextsmax < 0) {
			stextsmax = 0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WitchSellOk__Fi(int i /*$a0*/)
 // line 1289, offset 0x8006ca68
	/* begin block 1 */
		// Start line: 1290
		// Start offset: 0x8006CA68
		// Variables:
	// 		unsigned char rv; // $a1
	// 		struct ItemStruct *pI; // $a0
	/* end block 1 */
	// End offset: 0x8006CBAC
	// End Line: 1312

	/* begin block 2 */
		// Start line: 2801
	/* end block 2 */
	// End Line: 2802

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WitchSellOk__Fi(int i)

{
	int iVar1;
	uchar uVar2;
	
	uVar2 = '\0';
	if (i < 0) {
		i = ~i;
		iVar1 = -0x7ff24518;
	}
	else {
		iVar1 = -0x7ff25624;
	}
	iVar1 = myplr * 0x19e8 + iVar1 + i * 0x6c;
	if ((*(short *)(iVar1 + 0x2c) == 0) && (WStaffFlag == '\0')) {
		uVar2 = '\x01';
	}
	if ((*(short *)(iVar1 + 0x2c) == 10) && (WStaffFlag == '\x01')) {
		uVar2 = '\x01';
	}
	if (((*(char *)(iVar1 + 0x51) != '\0') && (*(char *)(iVar1 + 0x69) != '\0')) &&
		 (*(int *)(iVar1 + 0x18) == 0)) {
		uVar2 = '\0';
	}
	if ((uint)*(ushort *)(iVar1 + 0x2e) - 6 < 0x11) {
		uVar2 = '\0';
	}
	if (*(ushort *)(iVar1 + 0x2e) == 0x21) {
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWSell__Fv()
 // line 1317, offset 0x8006cbb4
	/* begin block 1 */
		// Start line: 1318
		// Start offset: 0x8006CBB4
		// Variables:
	// 		int i; // $s0
	// 		unsigned char sellok; // $s3
	/* end block 1 */
	// End offset: 0x8006D208
	// End Line: 1381

	/* begin block 2 */
		// Start line: 2855
	/* end block 2 */
	// End Line: 2856

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWSell__Fv(void)

{
	bool bVar1;
	ItemStruct *pIVar2;
	uchar uVar3;
	char *__format;
	int i;
	int i_00;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	int *piVar9;
	ItemStruct *pIVar10;
	int iVar11;
	
	if (WStaffFlag == '\0') {
		SItemListFlag = '\x01';
	}
	else {
		SItemListFlag = '\x02';
	}
	bVar1 = false;
	i = 0x13d4;
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + i) = 0xffff;
		i = i + -0x6c;
	} while (-1 < i);
	i = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar11 = 0;
		do {
			uVar3 = WitchSellOk__Fi(i);
			if (uVar3 != '\0') {
				bVar1 = true;
				piVar7 = (int *)(iVar11 + myplr * 0x19e8 + -0x7ff25624);
				piVar8 = piVar7;
				pIVar2 = &storehold + storenumh;
				do {
					pIVar10 = pIVar2;
					piVar9 = piVar8;
					i_00 = piVar9[1];
					iVar4 = piVar9[2];
					iVar5 = piVar9[3];
					pIVar10->_iVAdd1 = *piVar9;
					pIVar10->_iVMult1 = i_00;
					pIVar10->_iVAdd2 = iVar4;
					pIVar10->_iVMult2 = iVar5;
					piVar8 = piVar9 + 4;
					pIVar2 = (ItemStruct *)&pIVar10->_iSeed;
				} while (piVar8 != piVar7 + 0x18);
				i_00 = piVar9[5];
				iVar4 = piVar9[6];
				((ItemStruct *)&pIVar10->_iSeed)->_iVAdd1 = *piVar8;
				pIVar10->_ivalue = i_00;
				pIVar10->_iIvalue = iVar4;
				if (((&storehold)[storenumh]._iMagical != '\0') &&
					 ((&storehold)[storenumh]._iIdentified != '\0')) {
					(&storehold)[storenumh]._ivalue = (&storehold)[storenumh]._iIvalue;
				}
				i_00 = storenumh;
				iVar4 = (&storehold)[storenumh]._ivalue >> 2;
				(&storehold)[storenumh]._ivalue = iVar4;
				if (iVar4 == 0) {
					(&storehold)[i_00]._ivalue = 1;
				}
				i_00 = storenumh;
				(&storehold)[storenumh]._iIvalue = (&storehold)[storenumh]._ivalue;
				(&storehidx)[i_00] = (char)i;
				storenumh = storenumh + 1;
			}
			i = i + 1;
			iVar11 = iVar11 + 0x6c;
		} while (i < plr[myplr]._pNumInv);
	}
	i = 0;
	i_00 = -1;
	iVar11 = 0;
	do {
		if ((*(short *)((int)&plr[myplr].SpdList[0]._itype + iVar11) != -1) &&
			 (uVar3 = WitchSellOk__Fi(i_00), uVar3 != '\0')) {
			bVar1 = true;
			piVar7 = (int *)(iVar11 + myplr * 0x19e8 + -0x7ff24518);
			piVar8 = piVar7;
			pIVar2 = &storehold + storenumh;
			do {
				pIVar10 = pIVar2;
				piVar9 = piVar8;
				iVar4 = piVar9[1];
				iVar5 = piVar9[2];
				iVar6 = piVar9[3];
				pIVar10->_iVAdd1 = *piVar9;
				pIVar10->_iVMult1 = iVar4;
				pIVar10->_iVAdd2 = iVar5;
				pIVar10->_iVMult2 = iVar6;
				piVar8 = piVar9 + 4;
				pIVar2 = (ItemStruct *)&pIVar10->_iSeed;
			} while (piVar8 != piVar7 + 0x18);
			iVar4 = piVar9[5];
			iVar5 = piVar9[6];
			((ItemStruct *)&pIVar10->_iSeed)->_iVAdd1 = *piVar8;
			pIVar10->_ivalue = iVar4;
			pIVar10->_iIvalue = iVar5;
			if (((&storehold)[storenumh]._iMagical != '\0') &&
				 ((&storehold)[storenumh]._iIdentified != '\0')) {
				(&storehold)[storenumh]._ivalue = (&storehold)[storenumh]._iIvalue;
			}
			iVar4 = storenumh;
			iVar5 = (&storehold)[storenumh]._ivalue >> 2;
			(&storehold)[storenumh]._ivalue = iVar5;
			if (iVar5 == 0) {
				(&storehold)[iVar4]._ivalue = 1;
			}
			iVar4 = storenumh;
			(&storehold)[storenumh]._iIvalue = (&storehold)[storenumh]._ivalue;
			(&storehidx)[iVar4] = (char)i_00;
			storenumh = storenumh + 1;
		}
		i_00 = i_00 + -1;
		i = i + 1;
		iVar11 = iVar11 + 0x6c;
	} while (i < 8);
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_WHICH_ITEM_IS_FOR_SALE__NYOUR_GOLD____I_1231);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_I_WANT__NYOUR_GOLD____I_1259);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WitchRechargeOk__Fi(int i /*$a0*/)
 // line 1390, offset 0x8006d22c
	/* begin block 1 */
		// Start line: 1391
		// Start offset: 0x8006D22C
		// Variables:
	// 		unsigned char rv; // $a1
	/* end block 1 */
	// End offset: 0x8006D2B0
	// End Line: 1397

	/* begin block 2 */
		// Start line: 3014
	/* end block 2 */
	// End Line: 3015

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WitchRechargeOk__Fi(int i)

{
	bool bVar1;
	
	bVar1 = false;
	if (plr[myplr].InvList[i]._itype == 10) {
		bVar1 = plr[myplr].InvList[i]._iCharges != plr[myplr].InvList[i]._iMaxCharges;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm /*stack 0*/, int i /*stack 108*/)
 // line 1402, offset 0x8006d2b8
	/* begin block 1 */
		// Start line: 1403
		// Start offset: 0x8006D2B8
	/* end block 1 */
	// End offset: 0x8006D438
	// End Line: 1412

	/* begin block 2 */
		// Start line: 3033
	/* end block 2 */
	// End Line: 3034

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddStoreHoldRecharge__FG10ItemStructi(ItemStruct itm,int i)

{
	byte bVar1;
	byte bVar2;
	ItemStruct *pIVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	int *piVar8;
	int *piVar9;
	undefined local_res0 [16];
	
	pIVar3 = &storehold + storenumh;
	piVar9 = (int *)register0x00000074;
	do {
		piVar8 = piVar9;
		pIVar7 = pIVar3;
		iVar4 = piVar8[1];
		iVar5 = piVar8[2];
		iVar6 = piVar8[3];
		pIVar7->_iVAdd1 = *piVar8;
		pIVar7->_iVMult1 = iVar4;
		pIVar7->_iVAdd2 = iVar5;
		pIVar7->_iVMult2 = iVar6;
		piVar9 = piVar8 + 4;
		pIVar3 = (ItemStruct *)&pIVar7->_iSeed;
	} while (piVar9 != (int *)&itm._iSelFlag);
	iVar4 = piVar8[5];
	iVar5 = piVar8[6];
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = *piVar9;
	pIVar7->_ivalue = iVar4;
	pIVar7->_iIvalue = iVar5;
	iVar4 = storenumh;
	bVar1 = (&storehold)[storenumh]._iMaxCharges;
	bVar2 = (&storehold)[storenumh]._iCharges;
	iVar5 = (&storehold)[storenumh]._ivalue + (&spelldata)[(int)itm._itype._1_1_].sStaffCost;
	(&storehold)[storenumh]._ivalue = iVar5;
	iVar5 = (((int)(((uint)bVar1 - (uint)bVar2) * 100) / (int)(uint)bVar1) * iVar5) / 100 >> 1;
	(&storehold)[iVar4]._ivalue = iVar5;
	(&storehold)[iVar4]._iIvalue = iVar5;
	(&storehidx)[iVar4] = itm._iPLMR;
	storenumh = storenumh + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWRecharge__Fv()
 // line 1417, offset 0x8006d440
	/* begin block 1 */
		// Start line: 1418
		// Start offset: 0x8006D440
		// Variables:
	// 		int i; // $s0
	// 		unsigned char rechargeok; // $s2
	/* end block 1 */
	// End offset: 0x8006D850
	// End Line: 1459

	/* begin block 2 */
		// Start line: 3075
	/* end block 2 */
	// End Line: 3076

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWRecharge__Fv(void)

{
	bool bVar1;
	PlayerStruct *pPVar2;
	int *piVar3;
	uchar uVar4;
	char *__format;
	int i;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;
	int *piVar11;
	undefined4 local_18;
	int iVar12;
	int local_80;
	undefined4 local_7c;
	undefined in_stack_ffffff88 [84];
	undefined8 in_stack_ffffffe0;
	
	bVar1 = false;
	i = 0x13d4;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + i) = 0xffff;
		iVar12 = myplr;
		i = i + -0x6c;
	} while (-1 < i);
	if ((plr[myplr].InvBody[4]._itype == 10) &&
		 (plr[myplr].InvBody[4]._iCharges != plr[myplr].InvBody[4]._iMaxCharges)) {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar9 = &plr[myplr].InvBody[4]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar10 = piVar3;
			piVar8 = piVar9;
			i = piVar8[1];
			iVar5 = piVar8[2];
			iVar6 = piVar8[3];
			*piVar10 = *piVar8;
			piVar10[1] = i;
			piVar10[2] = iVar5;
			piVar10[3] = iVar6;
			piVar9 = piVar8 + 4;
			piVar3 = piVar10 + 4;
		} while (piVar9 != (int *)&pPVar2->InvBody[4]._iSufPower);
		i = piVar8[5];
		iVar5 = piVar8[6];
		piVar10[4] = *piVar9;
		piVar10[5] = i;
		piVar10[6] = iVar5;
		AddStoreHoldRecharge__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xffffffff,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar12].InvBody[4]._iVAdd1);
	}
	i = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar12 = 0;
		do {
			uVar4 = WitchRechargeOk__Fi(i);
			if (uVar4 != '\0') {
				bVar1 = true;
				piVar8 = (int *)(iVar12 + myplr * 0x19e8 + -0x7ff25624);
				piVar9 = piVar8 + 4;
				piVar3 = (int *)&stack0xffffff80;
				do {
					piVar11 = piVar3;
					piVar10 = piVar9;
					iVar5 = piVar10[1];
					iVar6 = piVar10[2];
					iVar7 = piVar10[3];
					*piVar11 = *piVar10;
					piVar11[1] = iVar5;
					piVar11[2] = iVar6;
					piVar11[3] = iVar7;
					piVar9 = piVar10 + 4;
					piVar3 = piVar11 + 4;
				} while (piVar9 != piVar8 + 0x18);
				iVar5 = piVar10[5];
				iVar6 = piVar10[6];
				piVar11[4] = *piVar9;
				piVar11[5] = iVar5;
				piVar11[6] = iVar6;
				AddStoreHoldRecharge__FG10ItemStructi
									((ItemStruct)
									 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																								 CONCAT492(i,CONCAT848(in_stack_ffffff88,
																																			 CONCAT44(local_7c,local_80)))
																								)),*piVar8);
			}
			i = i + 1;
			iVar12 = iVar12 + 0x6c;
		} while (i < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_RECHARGE_WHICH_ITEM__NYOUR_GOLD____I_846);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_TO_RECHARGE__NYOUR_GOLD____I_1261);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartNoMoney__Fv()
 // line 1467, offset 0x8006d870
	/* begin block 1 */
		// Start line: 1468
		// Start offset: 0x8006D870
	/* end block 1 */
	// End offset: 0x8006D8C8
	// End Line: 1474

	/* begin block 2 */
		// Start line: 3190
	/* end block 2 */
	// End Line: 3191

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartNoMoney__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	StartStore__Fc((char)stextshold);
	stextsize = '\x01';
	stextscrl = '\0';
	ClearSText__Fii(5,0x17);
	str = GetStr__Fi(STR_YOU_DO_NOT_HAVE_ENOUGH_GOLD_1257);
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartNoRoom__Fv()
 // line 1479, offset 0x8006d8d8
	/* begin block 1 */
		// Start line: 1480
		// Start offset: 0x8006D8D8
	/* end block 1 */
	// End offset: 0x8006D928
	// End Line: 1485

	/* begin block 2 */
		// Start line: 3218
	/* end block 2 */
	// End Line: 3219

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartNoRoom__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	StartStore__Fc((char)stextshold);
	stextscrl = '\0';
	ClearSText__Fii(5,0x17);
	str = GetStr__Fi(STR_YOU_DO_NOT_HAVE_ENOUGH_ROOM_IN_INVENTORY_1258);
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartNoItems__Fv()
 // line 1489, offset 0x8006d938
	/* begin block 1 */
		// Start line: 1490
		// Start offset: 0x8006D938
	/* end block 1 */
	// End offset: 0x8006D9D8
	// End Line: 1505

	/* begin block 2 */
		// Start line: 3242
	/* end block 2 */
	// End Line: 3243

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartNoItems__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextscrl = '\0';
	if (WFlag == '\0') {
		StartStore__Fc('\x01');
		stextshold = 1;
		ClearSText__Fii(5,0x17);
		str = GetStr__Fi(STR_NOTHING_FOR_SALE_701);
	}
	else {
		StartStore__Fc('\x05');
		ClearSText__Fii(5,0x17);
		str = GetStr__Fi(STR_NO_STAVES_AVAILABLE_730);
	}
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartConfirm__Fv()
 // line 1511, offset 0x8006d9ec
	/* begin block 1 */
		// Start line: 1512
		// Start offset: 0x8006D9EC
		// Variables:
	// 		char iclr; // $s0
	// 		unsigned char idprint; // $v1
	// 		char *StrPtr; // $s1
	/* end block 1 */
	// End offset: 0x8006DD3C
	// End Line: 1589

	/* begin block 2 */
		// Start line: 3292
	/* end block 2 */
	// End Line: 3293

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartConfirm__Fv(void)

{
	char cVar1;
	uint uVar2;
	char *str;
	int iVar3;
	text_strs StrId;
	ushort ItemNo;
	uint clr;
	
	StartStore__Fc((char)stextshold);
	SItemListFlag = '\x02';
	stextscrl = '\0';
	ClearSText__Fii(5,0x17);
	cVar1 = plr[myplr].HoldItem._iMagical;
	uVar2 = (uint)(cVar1 != '\0');
	clr = uVar2;
	if (plr[myplr].HoldItem._iStatFlag == '\0') {
		clr = 2;
	}
	if (cVar1 == '\x02') {
		clr = 3;
	}
	if (stextshold == 0x11) {
		uVar2 = 0;
	}
	if ((cVar1 != '\0') && (plr[myplr].HoldItem._iIdentified == '\0')) {
		if (stextshold == 3) {
			uVar2 = 0;
		}
		if (stextshold == 7) {
			uVar2 = 0;
		}
		if (stextshold == 4) {
			uVar2 = 0;
		}
		if (stextshold == 8) {
			uVar2 = 0;
		}
	}
	if (uVar2 == 0) {
		ItemNo = plr[myplr].HoldItem._iName;
	}
	else {
		ItemNo = plr[myplr].HoldItem._iIName;
	}
	str = MakeItemStr__FP10ItemStructUsUs(&plr[myplr].HoldItem,ItemNo,0x100);
	AddSText__FiiUcPccUc(0xc,5,'\0',str,clr,0);
	AddSTextVal__Fii(5,plr[myplr].HoldItem._iIvalue);
	iVar3 = GetWrap__5CFontPcP4RECT(&MediumFont,str,&StoreBackRectClipper);
	PrintStoreItem__FPC10ItemStructic(&plr[myplr].HoldItem,iVar3 + 5,(char)clr);
	switch(stextshold) {
	case 2:
	case 6:
	case 0x10:
	case 0x12:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_BUY_THIS_ITEM__33;
		break;
	case 3:
	case 7:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_SELL_THIS_ITEM__37;
		break;
	case 4:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_REPAIR_THIS_ITEM__36;
		break;
	default:
		goto switchD_8006dc84_caseD_5;
	case 8:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_RECHARGE_THIS_ITEM__35;
		break;
	case 0xd:
		StrId = STR_DO_WE_HAVE_A_DEAL__278;
		break;
	case 0x11:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_IDENTIFY_THIS_ITEM__34;
	}
	str = GetStr__Fi(StrId);
	strcpy(tempstr,str);
switchD_8006dc84_caseD_5:
	AddSText__FiiUcPccUc(0,0xe,'\x01',tempstr,0,0);
	str = GetStr__Fi(STR_YES_1255);
	AddSText__FiiUcPccUc(0,0x11,'\x01',str,0,1);
	str = GetStr__Fi(STR_NO_713);
	AddSText__FiiUcPccUc(0,0x12,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartBoy__Fv()
 // line 1594, offset 0x8006dd54
	/* begin block 1 */
		// Start line: 1595
		// Start offset: 0x8006DD54
	/* end block 1 */
	// End offset: 0x8006DEE8
	// End Line: 1613

	/* begin block 2 */
		// Start line: 3460
	/* end block 2 */
	// End Line: 3461

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartBoy__Fv(void)

{
	char *str;
	int y;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WIRT_THE_PEG_LEGGED_BOY_1240);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	AddSLine__Fi(3);
	if (_boyitem[StorePlrNo]._itype == -1) {
		str = GetStr__Fi(STR_TALK_TO_WIRT_1069);
		AddSText__FiiUcPccUc(0,8,'\x01',str,1,1);
		str = GetStr__Fi(STR_SAY_GOODBYE_908);
		y = 0xc;
	}
	else {
		str = GetStr__Fi(STR_TALK_TO_WIRT_1069);
		AddSText__FiiUcPccUc(0,6,'\x01',str,1,1);
		str = GetStr__Fi(STR_I_HAVE_SOMETHING_FOR_SALE__551);
		AddSText__FiiUcPccUc(0,8,'\x01',str,0,0);
		str = GetStr__Fi(STR_BUT_IT_WILL_COST_50_GOLD_148);
		AddSText__FiiUcPccUc(0,9,'\x01',str,0,0);
		str = GetStr__Fi(STR_JUST_TO_TAKE_A_LOOK___558);
		AddSText__FiiUcPccUc(0,10,'\x01',str,0,0);
		str = GetStr__Fi(STR_WHAT_HAVE_YOU_GOT__1227);
		AddSText__FiiUcPccUc(0,0xc,'\x01',str,0,1);
		str = GetStr__Fi(STR_SAY_GOODBYE_908);
		y = 0xd;
	}
	AddSText__FiiUcPccUc(0,y,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartBBoy__Fv()
 // line 1619, offset 0x8006defc
	/* begin block 1 */
		// Start line: 1620
		// Start offset: 0x8006DEFC
		// Variables:
	// 		int iclr; // $s0
	// 		char *StrPtr; // $s1
	/* end block 1 */
	// End offset: 0x8006E118
	// End Line: 1654

	/* begin block 2 */
		// Start line: 3510
	/* end block 2 */
	// End Line: 3511

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartBBoy__Fv(void)

{
	char *__format;
	int iVar1;
	ushort ItemNo;
	uint clr;
	
	SItemListFlag = '\x02';
	stextsize = '\x01';
	stextscrl = '\0';
	__format = GetStr__Fi(STR_I_HAVE_THIS_ITEM_FOR_SALE_NYOUR_GOLD____I_554);
	sprintf(tempstr,__format,plr[myplr]._pGold);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(2);
	SetItemMinStats__FPC12PlayerStructP10ItemStruct(plr + options_pad,_boyitem + StorePlrNo);
	clr = (uint)(_boyitem[StorePlrNo]._iMagical != '\0');
	if (_boyitem[StorePlrNo]._iStatFlag == '\0') {
		clr = 2;
	}
	if (_boyitem[StorePlrNo]._iMagical == '\0') {
		ItemNo = _boyitem[StorePlrNo]._iName;
	}
	else {
		ItemNo = _boyitem[StorePlrNo]._iIName;
	}
	__format = MakeItemStr__FP10ItemStructUsUs(_boyitem + StorePlrNo,ItemNo,0x100);
	AddSText__FiiUcPccUc(0xc,5,'\0',__format,clr,1);
	AddSTextVal__Fii(5,_boyitem[StorePlrNo]._iIvalue + (_boyitem[StorePlrNo]._iIvalue >> 1));
	iVar1 = GetWrap__5CFontPcP4RECT(&MediumFont,__format,&StoreBackRectClipper);
	PrintStoreItem__FPC10ItemStructic(_boyitem + StorePlrNo,iVar1 + 5,(char)clr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartHealer__Fv()
 // line 1662, offset 0x8006e130
	/* begin block 1 */
		// Start line: 1663
		// Start offset: 0x8006E130
	/* end block 1 */
	// End offset: 0x8006E2F0
	// End Line: 1683

	/* begin block 2 */
		// Start line: 3600
	/* end block 2 */
	// End Line: 3601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartHealer__Fv(void)

{
	int iVar1;
	char *str;
	long lVar2;
	
	if (plr[myplr]._pHitPoints != plr[myplr]._pMaxHP) {
		PlaySFX__Fi(IS_CAST8);
		iVar1 = myplr;
		lVar2 = plr[myplr]._pMaxHPBase;
		plr[myplr]._pHitPoints = plr[myplr]._pMaxHP;
		plr[iVar1]._pHPBase = lVar2;
	}
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WELCOME_TO_THE_1226);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_HEALER_S_HOME_436);
	AddSText__FiiUcPccUc(0,2,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_PEPIN_1068);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_BUY_ITEMS_150);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	str = GetStr__Fi(STR_LEAVE_HEALER_S_HOME_575);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollHBuy__Fi(int idx /*$s0*/)
 // line 1688, offset 0x8006e304
	/* begin block 1 */
		// Start line: 1689
		// Start offset: 0x8006E304
		// Variables:
	// 		int l; // $s3

		/* begin block 1.1 */
			// Start line: 1689
			// Start offset: 0x8006E304

			/* begin block 1.1.1 */
				// Start line: 1695
				// Start offset: 0x8006E350

				/* begin block 1.1.1.1 */
					// Start line: 1697
					// Start offset: 0x8006E35C

					/* begin block 1.1.1.1.1 */
						// Start line: 1698
						// Start offset: 0x8006E394
						// Variables:
					// 		char *StrPtr; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006E478
					// End Line: 1712
				/* end block 1.1.1.1 */
				// End offset: 0x8006E478
				// End Line: 1712
			/* end block 1.1.1 */
			// End offset: 0x8006E478
			// End Line: 1712
		/* end block 1.1 */
		// End offset: 0x8006E480
		// End Line: 1715
	/* end block 1 */
	// End offset: 0x8006E4C8
	// End Line: 1716

	/* begin block 2 */
		// Start line: 3653
	/* end block 2 */
	// End Line: 3654

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ScrollHBuy__Fi(int idx)

{
	int *piVar1;
	char cVar2;
	char *str;
	int iVar3;
	int iVar4;
	int iVar5;
	int y;
	
	ClearSText__Fii(5,0x15);
	y = 5;
	stextup = 5;
	idx = idx * 0x6c;
	while (y < 0xf) {
		if (*(short *)((int)&(&_healitem)[StorePlrNo * 0x14]._itype + idx) != -1) {
			iVar5 = (int)&_healitem._iVAdd1 + idx;
			cVar2 = (&(&_healitem)[StorePlrNo * 0x14]._iStatFlag)[idx];
			str = MakeItemStr__FP10ItemStructUsUs
											((ItemStruct *)(StorePlrNo * 0x870 + iVar5),
											 *(ushort *)((int)&(&_healitem)[StorePlrNo * 0x14]._iName + idx),
											 StoreBackRect.w - 0x44);
			iVar4 = (uint)(cVar2 == '\0') << 0x19;
			AddSText__FiiUcPccUc(0xc,y,'\0',str,iVar4 >> 0x18,1);
			piVar1 = (int *)((int)&(&_healitem)[StorePlrNo * 0x14]._iIvalue + idx);
			idx = idx + 0x6c;
			AddSTextVal__Fii(y,*piVar1);
			iVar3 = GetWrap__5CFontPcP4RECT(&MediumFont,str,&StoreBackRectClipper);
			PrintStoreItem__FPC10ItemStructic
								((ItemStruct *)(StorePlrNo * 0x870 + iVar5),y + iVar3,(char)((uint)iVar4 >> 0x18));
			stextdown = y;
		}
		y = y + 4;
	}
	if (((&stext)[stextsel]._ssel == '\0') && (stextsel != 0x16)) {
		stextsel = stextdown;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartHBuy__Fv()
 // line 1721, offset 0x8006e4ec
	/* begin block 1 */
		// Start line: 1722
		// Start offset: 0x8006E4EC
	/* end block 1 */
	// End offset: 0x8006E610
	// End Line: 1739

	/* begin block 2 */
		// Start line: 3733
	/* end block 2 */
	// End Line: 3734

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartHBuy__Fv(void)

{
	short sVar1;
	int iVar2;
	char *__format;
	
	SItemListFlag = '\x01';
	stextsize = '\x01';
	stextscrl = '\x01';
	stextsval = 0;
	__format = GetStr__Fi(STR_I_HAVE_THESE_ITEMS_FOR_SALE_NYOUR_GOLD____I_552);
	sprintf(tempstr,__format,plr[myplr]._pGold);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(2);
	S_ScrollHBuy__Fi(stextsval);
	storenumh = 0;
	sVar1 = (&_healitem)[StorePlrNo * 0x14]._itype;
	iVar2 = StorePlrNo * 0x870;
	while (sVar1 != -1) {
		sVar1 = *(short *)((int)&ItemStruct_800e0c3c._itype + iVar2);
		storenumh = storenumh + 1;
		iVar2 = iVar2 + 0x6c;
	}
	stextsmax = storenumh + -3;
	if (stextsmax < 0) {
		stextsmax = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartStory__Fv()
 // line 1744, offset 0x8006e624
	/* begin block 1 */
		// Start line: 1745
		// Start offset: 0x8006E624
	/* end block 1 */
	// End offset: 0x8006E700
	// End Line: 1754

	/* begin block 2 */
		// Start line: 3782
	/* end block 2 */
	// End Line: 3783

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartStory__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_THE_TOWN_ELDER_1143);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,5,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_CAIN_1063);
	AddSText__FiiUcPccUc(0,7,'\x01',str,1,1);
	str = GetStr__Fi(STR_IDENTIFY_AN_ITEM_519);
	AddSText__FiiUcPccUc(0,9,'\x01',str,0,1);
	str = GetStr__Fi(STR_SAY_GOODBYE_908);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IdItemOk__FP10ItemStruct(struct ItemStruct *i /*$a0*/)
 // line 1759, offset 0x8006e714
	/* begin block 1 */
		// Start line: 1760
		// Start offset: 0x8006E714
	/* end block 1 */
	// End offset: 0x8006E740
	// End Line: 1764

	/* begin block 2 */
		// Start line: 3813
	/* end block 2 */
	// End Line: 3814

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar IdItemOk__FP10ItemStruct(ItemStruct *i)

{
	bool bVar1;
	
	bVar1 = false;
	if ((i->_itype != -1) && (bVar1 = false, i->_iMagical != '\0')) {
		bVar1 = i->_iIdentified == '\0';
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm /*stack 0*/, int i /*stack 108*/)
 // line 1771, offset 0x8006e748
	/* begin block 1 */
		// Start line: 1772
		// Start offset: 0x8006E748
	/* end block 1 */
	// End offset: 0x8006E81C
	// End Line: 1777

	/* begin block 2 */
		// Start line: 3836
	/* end block 2 */
	// End Line: 3837

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddStoreHoldId__FG10ItemStructi(ItemStruct itm,int i)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	int *piVar6;
	int *piVar7;
	undefined local_res0 [16];
	
	pIVar1 = &storehold + storenumh;
	piVar7 = (int *)register0x00000074;
	do {
		piVar6 = piVar7;
		pIVar5 = pIVar1;
		iVar2 = piVar6[1];
		iVar3 = piVar6[2];
		iVar4 = piVar6[3];
		pIVar5->_iVAdd1 = *piVar6;
		pIVar5->_iVMult1 = iVar2;
		pIVar5->_iVAdd2 = iVar3;
		pIVar5->_iVMult2 = iVar4;
		piVar7 = piVar6 + 4;
		pIVar1 = (ItemStruct *)&pIVar5->_iSeed;
	} while (piVar7 != (int *)&itm._iSelFlag);
	iVar2 = piVar6[5];
	iVar3 = piVar6[6];
	((ItemStruct *)&pIVar5->_iSeed)->_iVAdd1 = *piVar7;
	pIVar5->_ivalue = iVar2;
	pIVar5->_iIvalue = iVar3;
	iVar2 = storenumh;
	(&storehold)[storenumh]._ivalue = 100;
	(&storehold)[iVar2]._iIvalue = 100;
	(&storehidx)[iVar2] = itm._iPLMR;
	storenumh = storenumh + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSIdentify__Fv()
 // line 1782, offset 0x8006e824
	/* begin block 1 */
		// Start line: 1783
		// Start offset: 0x8006E824
		// Variables:
	// 		int i; // $s0
	// 		unsigned char idok; // $s3
	/* end block 1 */
	// End offset: 0x8006F2A4
	// End Line: 1854

	/* begin block 2 */
		// Start line: 3861
	/* end block 2 */
	// End Line: 3862

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSIdentify__Fv(void)

{
	bool bVar1;
	PlayerStruct *pPVar2;
	int *piVar3;
	uchar uVar4;
	char *__format;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	int *piVar11;
	int *piVar12;
	int *piVar13;
	undefined4 local_18;
	int local_80;
	undefined4 local_7c;
	undefined in_stack_ffffff88 [84];
	undefined8 in_stack_ffffffe0;
	
	bVar1 = false;
	iVar5 = 0x13d4;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + iVar5) = 0xffff;
		iVar5 = iVar5 + -0x6c;
	} while (-1 < iVar5);
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[0]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[0]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xffffffff,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[0]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 6);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[6]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[6]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xfffffffe,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[6]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 4);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[4]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[4]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xfffffffd,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[4]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 5);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[5]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[5]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xfffffffc,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[5]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 1);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[1]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[1]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xfffffffb,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[1]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 2);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[2]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[2]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xfffffffa,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[2]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 3);
	iVar5 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[3]._iSeed;
		piVar3 = (int *)&stack0xffffff80;
		do {
			piVar12 = piVar3;
			piVar11 = piVar10;
			iVar6 = piVar11[1];
			iVar7 = piVar11[2];
			iVar8 = piVar11[3];
			*piVar12 = *piVar11;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar10 = piVar11 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar10 != (int *)&pPVar2->InvBody[3]._iSufPower);
		iVar6 = piVar11[5];
		iVar7 = piVar11[6];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		piVar12[6] = iVar7;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																						 CONCAT492(0xfffffff9,
																											 CONCAT848(in_stack_ffffff88,
																																 CONCAT44(local_7c,local_80))))),
							 plr[iVar5].InvBody[3]._iVAdd1);
	}
	iVar5 = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar6 = 0;
		do {
			uVar4 = IdItemOk__FP10ItemStruct((ItemStruct *)(myplr * 0x19e8 + -0x7ff25624 + iVar6));
			if (uVar4 != '\0') {
				bVar1 = true;
				piVar11 = (int *)(iVar6 + myplr * 0x19e8 + -0x7ff25624);
				piVar10 = piVar11 + 4;
				piVar3 = (int *)&stack0xffffff80;
				do {
					piVar13 = piVar3;
					piVar12 = piVar10;
					iVar7 = piVar12[1];
					iVar8 = piVar12[2];
					iVar9 = piVar12[3];
					*piVar13 = *piVar12;
					piVar13[1] = iVar7;
					piVar13[2] = iVar8;
					piVar13[3] = iVar9;
					piVar10 = piVar12 + 4;
					piVar3 = piVar13 + 4;
				} while (piVar10 != piVar11 + 0x18);
				iVar7 = piVar12[5];
				iVar8 = piVar12[6];
				piVar13[4] = *piVar10;
				piVar13[5] = iVar7;
				piVar13[6] = iVar8;
				AddStoreHoldId__FG10ItemStructi
									((ItemStruct)
									 CONCAT4104(local_18,CONCAT896(in_stack_ffffffe0,
																								 CONCAT492(iVar5,CONCAT848(in_stack_ffffff88,
																																					 CONCAT44(local_7c,
																									local_80))))),*piVar11);
			}
			iVar5 = iVar5 + 1;
			iVar6 = iVar6 + 0x6c;
		} while (iVar5 < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_IDENTIFY_WHICH_ITEM__NYOUR_GOLD____I_521);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_TO_IDENTIFY_NYOUR_GOLD____I_1260);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartIdShow__Fv()
 // line 1866, offset 0x8006f2c4
	/* begin block 1 */
		// Start line: 1867
		// Start offset: 0x8006F2C4
		// Variables:
	// 		char iclr; // $s1
	// 		char *StrPtr; // $s0
	/* end block 1 */
	// End offset: 0x8006F480
	// End Line: 1896

	/* begin block 2 */
		// Start line: 4045
	/* end block 2 */
	// End Line: 4046

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartIdShow__Fv(void)

{
	char cVar1;
	char *str;
	int iVar2;
	uint clr;
	
	StartStore__Fc((char)stextshold);
	SItemListFlag = '\0';
	stextscrl = '\0';
	ClearSText__Fii(5,0x17);
	cVar1 = plr[myplr].HoldItem._iMagical;
	clr = (uint)(cVar1 != '\0');
	if (plr[myplr].HoldItem._iStatFlag == '\0') {
		clr = 2;
	}
	if (cVar1 == '\x02') {
		clr = 3;
	}
	str = GetStr__Fi(STR_THIS_ITEM_IS__1155);
	AddSText__FiiUcPccUc(0,5,'\x01',str,0,0);
	str = MakeItemStr__FP10ItemStructUsUs(&plr[myplr].HoldItem,plr[myplr].HoldItem._iIName,0x100);
	AddSText__FiiUcPccUc(0xc,8,'\0',str,clr,0);
	AddSTextVal__Fii(8,0);
	iVar2 = GetWrap__5CFontPcP4RECT(&MediumFont,str,&StoreBackRectClipper);
	PrintStoreItem__FPC10ItemStructic(&plr[myplr].HoldItem,iVar2 + 8,(char)clr);
	str = GetStr__Fi(STR_DONE_264);
	AddSText__FiiUcPccUc(0,0xf,'\x01',str,0,1);
	OffsetSTextY__Fii(1,-4);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartTalk__Fv()
 // line 1901, offset 0x8006f49c
	/* begin block 1 */
		// Start line: 1902
		// Start offset: 0x8006F49C
		// Variables:
	// 		int i; // $s2
	// 		int tq; // $a1
	// 		int sn; // $s1
	// 		int la; // $s6
	// 		int gl; // $s4
	/* end block 1 */
	// End offset: 0x8006F6A0
	// End Line: 1936

	/* begin block 2 */
		// Start line: 4120
	/* end block 2 */
	// End Line: 4121

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartTalk__Fv(void)

{
	char *__format;
	char *pcVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	int y;
	int iVar5;
	int iVar6;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	__format = GetStr__Fi(STR_TALK_TO__S_1070);
	y = 0;
	pcVar1 = GetStr__Fi(talkname[talker]);
	sprintf(tempstr,__format,pcVar1);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(3);
	iVar4 = 0;
	iVar3 = 0;
	piVar2 = &Qtalklist + talker * 0x10;
	do {
		if ((((&quests[0]._qactive)[iVar3] == '\x02') && (*piVar2 != -1)) &&
			 ((&quests[0]._qlog)[iVar3] != '\0')) {
			iVar4 = iVar4 + 1;
		}
		piVar2 = piVar2 + 1;
		y = y + 1;
		iVar3 = iVar3 + 0x14;
	} while (y < 0x10);
	y = -(iVar4 >> 1) + 10;
	iVar5 = 0;
	iVar6 = 0;
	iVar3 = 0;
	do {
		if ((((&quests[0]._qactive)[iVar3] == '\x02') && ((&Qtalklist)[talker * 0x10 + iVar5] != -1)) &&
			 ((&quests[0]._qlog)[iVar3] != '\0')) {
			__format = GetStr__Fi(*(text_strs *)((int)&questlist[0]._qlstr + iVar6));
			AddSText__FiiUcPccUc(0,y,'\x01',__format,0,1);
			y = y + 1;
		}
		iVar6 = iVar6 + 0x10;
		iVar5 = iVar5 + 1;
		iVar3 = iVar3 + 0x14;
	} while (iVar5 < 0x10);
	__format = GetStr__Fi(STR_GOSSIP_409);
	AddSText__FiiUcPccUc(0,-(iVar4 >> 1) + 8,'\x01',__format,1,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartTavern__Fv()
 // line 1942, offset 0x8006f6cc
	/* begin block 1 */
		// Start line: 1943
		// Start offset: 0x8006F6CC
	/* end block 1 */
	// End offset: 0x8006F7B0
	// End Line: 1953

	/* begin block 2 */
		// Start line: 4207
	/* end block 2 */
	// End Line: 4208

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartTavern__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WELCOME_TO_THE_1226);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_RISING_SUN_881);
	AddSText__FiiUcPccUc(0,2,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_OGDEN_1067);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_LEAVE_THE_TAVERN_578);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartBarMaid__Fv()
 // line 1958, offset 0x8006f7c4
	/* begin block 1 */
		// Start line: 1959
		// Start offset: 0x8006F7C4
	/* end block 1 */
	// End offset: 0x8006F884
	// End Line: 1968

	/* begin block 2 */
		// Start line: 4239
	/* end block 2 */
	// End Line: 4240

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartBarMaid__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_GILLIAN_387);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_GILLIAN_1065);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_SAY_GOODBYE_908);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartDrunk__Fv()
 // line 1973, offset 0x8006f898
	/* begin block 1 */
		// Start line: 1974
		// Start offset: 0x8006F898
	/* end block 1 */
	// End offset: 0x8006F958
	// End Line: 1983

	/* begin block 2 */
		// Start line: 4269
	/* end block 2 */
	// End Line: 4270

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartDrunk__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_FARNHAM_THE_DRUNK_318);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO__1247);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_FARNHAM_1064);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_SAY_GOODBYE_908);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartStore__Fc(char s /*$s1*/)
 // line 1988, offset 0x8006f96c
	/* begin block 1 */
		// Start line: 1989
		// Start offset: 0x8006F96C
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8006FCB0
	// End Line: 2070

	/* begin block 2 */
		// Start line: 4299
	/* end block 2 */
	// End Line: 4300

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartStore__Fc(char s)

{
	uchar *puVar1;
	short sVar2;
	int iVar3;
	uchar uVar4;
	int iVar5;
	
	PlaySFX__Fi(IS_TITLSLCT);
	sbookflag = '\0';
	invflag = '\0';
	chrflag = '\0';
	questlog = '\0';
	dropGoldFlag = '\0';
	StorePlrNo = options_pad;
	ClearSText__Fii(0,0x18);
	ReleaseStoreBtn__Fv();
	switch((int)(((uint)(byte)s - 1) * 0x1000000) >> 0x18) {
	case 0:
		S_StartSmith__Fv();
		break;
	case 1:
		SmithItemCount = 0;
		sVar2 = (&_smithitem)[StorePlrNo * 0x14]._itype;
		while (sVar2 != -1) {
			SmithItemCount = SmithItemCount + 1;
			sVar2 = (&_smithitem)[StorePlrNo * 0x14 + SmithItemCount]._itype;
		}
		if (SmithItemCount == 0) {
			StartStore__Fc('\x18');
		}
		else {
			S_StartSBuy__Fv();
		}
		break;
	case 2:
		S_StartSSell__Fv();
		break;
	case 3:
		S_StartSRepair__Fv();
		break;
	case 4:
		S_StartWitch__Fv();
		break;
	case 5:
		if (0 < storenumh) {
			S_StartWBuy__Fv();
		}
		break;
	case 6:
		S_StartWSell__Fv();
		break;
	case 7:
		S_StartWRecharge__Fv();
		break;
	case 8:
		S_StartNoMoney__Fv();
		break;
	case 9:
		S_StartNoRoom__Fv();
		break;
	case 10:
		S_StartConfirm__Fv();
		break;
	case 0xb:
		S_StartBoy__Fv();
		break;
	case 0xc:
		S_StartBBoy__Fv();
		break;
	case 0xd:
		S_StartHealer__Fv();
		break;
	case 0xe:
		S_StartStory__Fv();
		break;
	case 0xf:
		if (0 < storenumh) {
			S_StartHBuy__Fv();
		}
		break;
	case 0x10:
		S_StartSIdentify__Fv();
		break;
	case 0x11:
		uVar4 = S_StartSPBuy__Fv();
		if (uVar4 == '\0') {
			return;
		}
		break;
	case 0x12:
		S_StartTalk__Fv();
		break;
	case 0x13:
		S_StartIdShow__Fv();
		break;
	case 0x14:
		S_StartTavern__Fv();
		break;
	case 0x15:
		S_StartDrunk__Fv();
		break;
	case 0x16:
		S_StartBarMaid__Fv();
		break;
	case 0x17:
		S_StartNoItems__Fv();
	}
	stextsel = 0;
	if ((stext._ssel == '\0') && (stextsel = 1, STextStruct_ARRAY_8012eed4[0]._ssel == '\0')) {
		iVar3 = 2;
		iVar5 = 0x8c;
		do {
			stextsel = iVar3;
			if (0x17 < stextsel) break;
			puVar1 = &STextStruct_ARRAY_8012eed4[0]._ssel + iVar5;
			iVar3 = stextsel + 1;
			iVar5 = iVar5 + 0x8c;
		} while (*puVar1 == '\0');
	}
	if (stextsel == 0x18) {
		stextsel = -1;
	}
	stextflag = s;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawStoreHelpText__Fv()
 // line 2080, offset 0x8006fcc8
	/* begin block 1 */
		// Start line: 2081
		// Start offset: 0x8006FCC8
	/* end block 1 */
	// End offset: 0x8006FD54
	// End Line: 2112

	/* begin block 2 */
		// Start line: 4503
	/* end block 2 */
	// End Line: 4504

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawStoreHelpText__Fv(void)

{
	char *Str;
	
	switch((int)(((uint)(byte)stextflag - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 4:
	case 0xb:
	case 0xd:
	case 0xe:
	case 0x12:
	case 0x14:
	case 0x15:
	case 0x16:
		Str = GetStr__Fi(STR___SELECT_____BACK_1254);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,0xde,Str,JustCentre,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEB)
		;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSText__Fv()
 // line 2121, offset 0x8006fd64
	/* begin block 1 */
		// Start line: 2122
		// Start offset: 0x8006FD64
	/* end block 1 */
	// End offset: 0x8006FD94
	// End Line: 2126

	/* begin block 2 */
		// Start line: 4586
	/* end block 2 */
	// End Line: 4587

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSText__Fv(void)

{
	if (InStoreFlag == '\0') {
		InStoreFlag = '\x01';
		TSK_AddTask(0,DrawSTextTSK__FP4TASK,0x1000,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSTextTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 2132, offset 0x8006fda4
	/* begin block 1 */
		// Start line: 2133
		// Start offset: 0x8006FDA4
	/* end block 1 */
	// End offset: 0x8006FE9C
	// End Line: 2151

	/* begin block 2 */
		// Start line: 4608
	/* end block 2 */
	// End Line: 4609

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSTextTSK__FP4TASK(TASK *T)

{
	undefined *puVar1;
	
	InStoreFlag = '\x01';
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	while ((stextflag != '\0' && (puVar1 = (undefined *)GLUE_Finished__Fv(), puVar1 != &DAT_00000001))
				) {
		if ((qtextflag == '\0') && ((CDWAIT == (void *)0x0 && (TextPtr != (char **)0x0)))) {
			DoThatDrawSText__Fv();
		}
		TSK_Sleep(1);
	}
	if (qtextflag == '\0') {
		DoThatDrawSText__Fv();
	}
	InStoreFlag = '\0';
	if (qtextflag == '\0') {
		GLUE_ResumeGame__Fv();
		GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
		PauseMode = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoThatDrawSText__Fv()
 // line 2156, offset 0x8006feac
	/* begin block 1 */
		// Start line: 2157
		// Start offset: 0x8006FEAC
		// Variables:
	// 		int i; // $s1
	// 		int YOfs; // $s2
	/* end block 1 */
	// End offset: 0x80070098
	// End Line: 2230

	/* begin block 2 */
		// Start line: 4659
	/* end block 2 */
	// End Line: 4660

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoThatDrawSText__Fv(void)

{
	int iVar1;
	int y;
	int iVar2;
	
	StoreBackRect.y = 0x18;
	StoreBackRectClipper.y = 0x18;
	StoreBackRect.w = 0x118;
	StoreBackRect.x = 0x14;
	StoreBackRect.h = 0xc9;
	StoreBackRectClipper.x = 0x14;
	StoreBackRectClipper.w = 0xbc;
	StoreBackRectClipper.h = 0xc9;
	if (stextscrl == '\0') goto LAB_8006ffac;
	switch((int)(((uint)(byte)stextflag - 2) * 0x1000000) >> 0x18) {
	case 0:
		y = 0;
		S_ScrollSBuy__Fi(stextsval);
		iVar1 = 0;
		goto LAB_8006ffb0;
	case 1:
	case 2:
	case 5:
	case 6:
	case 0xf:
		y = 0;
		S_ScrollSSell__Fi(stextsval);
		iVar1 = 0;
		goto LAB_8006ffb0;
	case 4:
		S_ScrollWBuy__Fi(stextsval + _WitchIdxOfs[StorePlrNo]);
		break;
	case 0xe:
		S_ScrollHBuy__Fi(stextsval);
		break;
	case 0x10:
		y = 0;
		S_ScrollSPBuy__Fi(stextsval);
		iVar1 = 0;
		goto LAB_8006ffb0;
	}
LAB_8006ffac:
	y = 0;
	iVar1 = 0;
LAB_8006ffb0:
	do {
		iVar1 = iVar1 * 4 + y * 3;
		iVar2 = iVar1 * 4;
		if ((&stext._sline)[iVar2] != '\0') {
			DrawSLine__Fi(y);
		}
		if (stext._sstr[iVar2] != '\0') {
			PrintSString__FiiUcPcci
								((int)(&stext._sx)[iVar2],y,(&stext._sjust)[iVar2],stext._sstr + iVar2,
								 (int)(&stext._sclr)[iVar2],(&stext._sval)[iVar1]);
		}
		y = y + 1;
		iVar1 = y * 8;
	} while (y < 0x18);
	DrawQTextBack__Fv();
	DrawStoreArrows__Fv();
	DrawStoreHelpText__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextESC__Fv()
 // line 2235, offset 0x800700b4
	/* begin block 1 */
		// Start line: 2236
		// Start offset: 0x800700B4
	/* end block 1 */
	// End offset: 0x80070248
	// End Line: 2310

	/* begin block 2 */
		// Start line: 4841
	/* end block 2 */
	// End Line: 4842

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextESC__Fv(void)

{
	char s;
	
	PlaySFX__Fi(IS_TITLSLCT);
	switch((int)(((uint)(byte)stextflag - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 4:
	case 0xb:
	case 0xd:
	case 0xe:
	case 0x14:
	case 0x15:
	case 0x16:
		stextflag = '\0';
		options_pad = -1;
		stream_stop__Fv();
		break;
	case 1:
		s = '\x01';
		goto LAB_80070204;
	case 2:
		s = '\x01';
		goto LAB_800701e8;
	case 3:
		StartStore__Fc('\x01');
LAB_800701c0:
		stextsel = 0xc;
		break;
	case 5:
		StartStore__Fc('\x05');
		if (WStaffFlag != '\0') goto LAB_8007019c;
		goto LAB_8007020c;
	case 6:
		StartStore__Fc('\x05');
		if (WStaffFlag != '\0') goto LAB_800701c0;
		goto LAB_800701f0;
	case 7:
		StartStore__Fc('\x05');
		stextsel = 0xd;
		break;
	case 8:
	case 9:
	case 10:
	case 0x17:
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
		stextsval = stextvhold;
		break;
	case 0xc:
		StartStore__Fc('\f');
		stextsel = 6;
		break;
	case 0xf:
		s = '\x0e';
LAB_800701e8:
		StartStore__Fc(s);
LAB_800701f0:
		stextsel = 0xb;
		break;
	case 0x10:
		s = '\x0f';
LAB_80070204:
		StartStore__Fc(s);
LAB_8007020c:
		stextsel = 9;
		break;
	case 0x11:
		StartStore__Fc('\x01');
LAB_8007019c:
		stextsel = 10;
		break;
	case 0x12:
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
		break;
	case 0x13:
		StartStore__Fc('\x11');
		break;
	default:
		return;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextUp__Fv()
 // line 2316, offset 0x80070258
	/* begin block 1 */
		// Start line: 2317
		// Start offset: 0x80070258
	/* end block 1 */
	// End offset: 0x800703CC
	// End Line: 2358

	/* begin block 2 */
		// Start line: 5005
	/* end block 2 */
	// End Line: 5006

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextUp__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	
	if (stextsel != -1) {
		if (stextscrl == '\0') {
			bVar1 = stextsel == 0;
			stextsel = stextsel + -1;
			if (bVar1) {
				stextsel = 0x17;
			}
			uVar2 = (&stext)[stextsel]._ssel;
			while (uVar2 == '\0') {
				bVar1 = stextsel == 0;
				stextsel = stextsel + -1;
				if (bVar1) {
					stextsel = 0x17;
				}
				uVar2 = (&stext)[stextsel]._ssel;
			}
		}
		else {
			if (stextsel == stextup) {
				if (stextsval != 0) {
					stextsval = stextsval + -1;
				}
			}
			else {
				uVar2 = (&stext)[stextsel + -1]._ssel;
				stextsel = stextsel + -1;
				while (uVar2 == '\0') {
					bVar1 = stextsel == 0;
					stextsel = stextsel + -1;
					if (bVar1) {
						stextsel = 0x17;
					}
					uVar2 = (&stext)[stextsel]._ssel;
				}
			}
		}
	}
	PlaySFX__Fi(IS_TITLEMOV);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextDown__Fv()
 // line 2364, offset 0x800703dc
	/* begin block 1 */
		// Start line: 2365
		// Start offset: 0x800703DC
	/* end block 1 */
	// End offset: 0x80070560
	// End Line: 2404

	/* begin block 2 */
		// Start line: 5102
	/* end block 2 */
	// End Line: 5103

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextDown__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	
	if (stextsel != -1) {
		if (stextscrl == '\0') {
			bVar1 = stextsel == 0x17;
			stextsel = stextsel + 1;
			if (bVar1) {
				stextsel = 0;
			}
			uVar2 = (&stext)[stextsel]._ssel;
			while (uVar2 == '\0') {
				bVar1 = stextsel == 0x17;
				stextsel = stextsel + 1;
				if (bVar1) {
					stextsel = 0;
				}
				uVar2 = (&stext)[stextsel]._ssel;
			}
		}
		else {
			if (stextsel == stextdown) {
				if (stextsval < stextsmax) {
					stextsval = stextsval + 1;
				}
			}
			else {
				uVar2 = (&stext)[stextsel + 1]._ssel;
				stextsel = stextsel + 1;
				while (uVar2 == '\0') {
					bVar1 = stextsel == 0x17;
					stextsel = stextsel + 1;
					if (bVar1) {
						stextsel = 0;
					}
					uVar2 = (&stext)[stextsel]._ssel;
				}
			}
		}
	}
	PlaySFX__Fi(IS_TITLEMOV);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SmithEnter__Fv()
 // line 2409, offset 0x80070570
	/* begin block 1 */
		// Start line: 2410
		// Start offset: 0x80070570
	/* end block 1 */
	// End offset: 0x80070638
	// End Line: 2433

	/* begin block 2 */
		// Start line: 5195
	/* end block 2 */
	// End Line: 5196

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SmithEnter__Fv(void)

{
	WFlag = '\0';
	switch(stextsel) {
	case 8:
		stextshold = 1;
		stextlhold = 8;
		gossipstart = 0xbd;
		talker = 0;
		gossipend = 199;
		StartStore__Fc('\x13');
		break;
	case 9:
		StartStore__Fc('\x02');
		break;
	case 10:
		StartStore__Fc('\x12');
		break;
	case 0xb:
		StartStore__Fc('\x03');
		break;
	case 0xc:
		StartStore__Fc('\x04');
		break;
	case 0xd:
		stextflag = '\0';
	}
	if (stextflag == '\0') {
		options_pad = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetGoldCurs__Fii(int pnum /*$a0*/, int i /*$a1*/)
 // line 2439, offset 0x80070648
	/* begin block 1 */
		// Start line: 2440
		// Start offset: 0x80070648
	/* end block 1 */
	// End offset: 0x800706C0
	// End Line: 2451

	/* begin block 2 */
		// Start line: 5261
	/* end block 2 */
	// End Line: 5262

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetGoldCurs__Fii(int pnum,int i)

{
	uchar uVar1;
	int iVar2;
	
	iVar2 = plr[pnum].InvList[i]._ivalue;
	if (iVar2 < 0x9c4) {
		uVar1 = '\x04';
		if (1000 < iVar2) {
			uVar1 = '\x05';
		}
	}
	else {
		uVar1 = '\x06';
	}
	plr[pnum].InvList[i]._iCurs = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpdbarGoldCurs__Fii(int pnum /*$a0*/, int i /*$a1*/)
 // line 2458, offset 0x800706c8
	/* begin block 1 */
		// Start line: 2459
		// Start offset: 0x800706C8
	/* end block 1 */
	// End offset: 0x80070740
	// End Line: 2469

	/* begin block 2 */
		// Start line: 5298
	/* end block 2 */
	// End Line: 5299

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetSpdbarGoldCurs__Fii(int pnum,int i)

{
	uchar uVar1;
	int iVar2;
	
	iVar2 = plr[pnum].SpdList[i]._ivalue;
	if (iVar2 < 0x9c4) {
		uVar1 = '\x04';
		if (1000 < iVar2) {
			uVar1 = '\x05';
		}
	}
	else {
		uVar1 = '\x06';
	}
	plr[pnum].SpdList[i]._iCurs = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TakePlrsMoney__Fl(long cost /*$s1*/)
 // line 2476, offset 0x80070748
	/* begin block 1 */
		// Start line: 2477
		// Start offset: 0x80070748
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80070B78
	// End Line: 2568

	/* begin block 2 */
		// Start line: 5333
	/* end block 2 */
	// End Line: 5334

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TakePlrsMoney__Fl(long cost)

{
	int pnum;
	long lVar1;
	undefined *puVar2;
	int iVar3;
	int iv;
	int iVar4;
	
	iv = 0;
	lVar1 = CalculateGold__Fi(myplr);
	iVar4 = 0;
	plr[myplr]._pGold = lVar1 - cost;
	do {
		pnum = myplr;
		if (cost < 1) {
			return;
		}
		if (*(short *)((int)&plr[myplr].SpdList[0]._itype + iVar4) == 0xb) {
			puVar2 = *(undefined **)((int)&plr[myplr].SpdList[0]._ivalue + iVar4);
			if (puVar2 != &DAT_00001388) {
				if (cost < (int)puVar2) {
					*(undefined **)((int)&plr[myplr].SpdList[0]._ivalue + iVar4) = puVar2 + -cost;
					SetSpdbarGoldCurs__Fii(pnum,iv);
					cost = 0;
				}
				else {
					cost = cost - (int)puVar2;
					RemoveSpdBarItem__Fii(myplr,iv);
					iVar4 = -0x6c;
					iv = -1;
				}
			}
		}
		iv = iv + 1;
		iVar4 = iVar4 + 0x6c;
	} while (iv < 8);
	iv = 0;
	if (0 < cost) {
		iVar4 = 0;
		do {
			pnum = myplr;
			if (cost < 1) {
				return;
			}
			if (*(short *)((int)&plr[myplr].SpdList[0]._itype + iVar4) == 0xb) {
				iVar3 = *(int *)((int)&plr[myplr].SpdList[0]._ivalue + iVar4);
				if (cost < iVar3) {
					*(int *)((int)&plr[myplr].SpdList[0]._ivalue + iVar4) = iVar3 - cost;
					SetSpdbarGoldCurs__Fii(pnum,iv);
					cost = 0;
				}
				else {
					cost = cost - iVar3;
					RemoveSpdBarItem__Fii(myplr,iv);
					iVar4 = -0x6c;
					iv = -1;
				}
			}
			iv = iv + 1;
			iVar4 = iVar4 + 0x6c;
		} while (iv < 8);
		if (0 < cost) {
			iv = 0;
			if (0 < plr[myplr]._pNumInv) {
				iVar4 = 0;
				do {
					pnum = myplr;
					if (cost < 1) {
						return;
					}
					if (*(short *)((int)&plr[myplr].InvList[0]._itype + iVar4) == 0xb) {
						puVar2 = *(undefined **)((int)&plr[myplr].InvList[0]._ivalue + iVar4);
						if (puVar2 != &DAT_00001388) {
							if (cost < (int)puVar2) {
								*(undefined **)((int)&plr[myplr].InvList[0]._ivalue + iVar4) = puVar2 + -cost;
								SetGoldCurs__Fii(pnum,iv);
								cost = 0;
							}
							else {
								cost = cost - (int)puVar2;
								RemoveInvItem__Fii(myplr,iv);
								iVar4 = -0x6c;
								iv = -1;
							}
						}
					}
					iv = iv + 1;
					iVar4 = iVar4 + 0x6c;
				} while (iv < plr[myplr]._pNumInv);
				if (cost < 1) {
					return;
				}
			}
			iv = 0;
			if (0 < plr[myplr]._pNumInv) {
				iVar4 = 0;
				do {
					pnum = myplr;
					if (cost < 1) {
						return;
					}
					if (*(short *)((int)&plr[myplr].InvList[0]._itype + iVar4) == 0xb) {
						iVar3 = *(int *)((int)&plr[myplr].InvList[0]._ivalue + iVar4);
						if (cost < iVar3) {
							*(int *)((int)&plr[myplr].InvList[0]._ivalue + iVar4) = iVar3 - cost;
							SetGoldCurs__Fii(pnum,iv);
							cost = 0;
						}
						else {
							cost = cost - iVar3;
							RemoveInvItem__Fii(myplr,iv);
							iVar4 = -0x6c;
							iv = -1;
						}
					}
					iv = iv + 1;
					iVar4 = iVar4 + 0x6c;
				} while (iv < plr[myplr]._pNumInv);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SmithBuyItem__Fv()
 // line 2576, offset 0x80070b94
	/* begin block 1 */
		// Start line: 2577
		// Start offset: 0x80070B94
		// Variables:
	// 		int idx; // $t1
	/* end block 1 */
	// End offset: 0x80070E04
	// End Line: 2601

	/* begin block 2 */
		// Start line: 5553
	/* end block 2 */
	// End Line: 5554

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmithBuyItem__Fv(void)

{
	undefined4 *puVar1;
	int iVar2;
	undefined4 *puVar3;
	int iVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	undefined4 *puVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	int iVar11;
	
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	if (plr[myplr].HoldItem._iMagical == '\0') {
		plr[myplr].HoldItem._iIdentified = '\0';
	}
	StoreAutoPlace__Fv();
	iVar4 = stextlhold - stextup;
	if (iVar4 < 0) {
		iVar4 = iVar4 + 3;
	}
	iVar4 = (iVar4 >> 2) + stextvhold;
	if (iVar4 == 0x13) {
		(&DAT_800dec58)[StorePlrNo * 0x438] = 0xffff;
	}
	else {
		if ((&_smithitem)[StorePlrNo * 0x14 + iVar4 + 1]._itype != -1) {
			iVar2 = iVar4 * 0x6c;
			iVar11 = iVar2;
			do {
				iVar11 = iVar11 + 0x6c;
				puVar3 = (undefined4 *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2);
				puVar1 = puVar3;
				puVar10 = puVar3 + 0x1b;
				do {
					puVar9 = puVar10;
					puVar8 = puVar1;
					uVar5 = puVar9[1];
					uVar6 = puVar9[2];
					uVar7 = puVar9[3];
					*puVar8 = *puVar9;
					puVar8[1] = uVar5;
					puVar8[2] = uVar6;
					puVar8[3] = uVar7;
					puVar10 = puVar9 + 4;
					puVar1 = puVar8 + 4;
				} while (puVar10 != puVar3 + 0x33);
				uVar5 = puVar9[5];
				uVar6 = puVar9[6];
				puVar8[4] = *puVar10;
				puVar8[5] = uVar5;
				puVar8[6] = uVar6;
				iVar2 = iVar2 + 0x6c;
				iVar4 = iVar4 + 1;
			} while (*(short *)((int)&(&_smithitem)[StorePlrNo * 0x14 + 1]._itype + iVar11) != -1);
		}
		(&_smithitem)[StorePlrNo * 0x14 + iVar4]._itype = -1;
	}
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SBuyEnter__Fv()
 // line 2606, offset 0x80070e14
	/* begin block 1 */
		// Start line: 2607
		// Start offset: 0x80070E14
		// Variables:
	// 		int idx; // $t1
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x80071064
	// End Line: 2647

	/* begin block 2 */
		// Start line: 5616
	/* end block 2 */
	// End Line: 5617

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int ii;
	int iVar3;
	int iVar4;
	char s;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	
	if (SmithItemCount == 0) {
		StartStore__Fc('\x01');
	}
	else {
		stextshold = 2;
		stextlhold = stextsel;
		stextvhold = stextsval;
		if (SItemListFlag == '\x01') {
			ii = stextsel - stextup;
			if (ii < 0) {
				ii = ii + 3;
			}
			ii = ii >> 2;
		}
		else {
			ii = stextsel - stextup;
			if (ii < 0) {
				ii = ii + 7;
			}
			ii = ii >> 3;
		}
		ii = ii + stextsval;
		if (plr[myplr]._pGold < (&_smithitem)[StorePlrNo * 0x14 + ii]._iIvalue) {
			StartStore__Fc('\t');
		}
		else {
			iVar4 = StorePlrNo * 0x14;
			pIVar8 = &_smithitem + iVar4 + ii;
			pIVar1 = &plr[myplr].HoldItem;
			do {
				pIVar9 = pIVar1;
				pIVar7 = pIVar8;
				iVar3 = pIVar7->_iVMult1;
				iVar5 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar9->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar9->_iVMult1 = iVar3;
				pIVar9->_iVAdd2 = iVar5;
				pIVar9->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar1 = (ItemStruct *)&pIVar9->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&_smithitem)[iVar4 + ii]._iSufPower);
			iVar4 = pIVar7->_ivalue;
			iVar3 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar9->_ivalue = iVar4;
			pIVar9->_iIvalue = iVar3;
			SellIdx = ii;
			SetCursor__Fi((uint)plr[myplr].HoldItem._iCurs + 0xc);
			ii = 0;
			do {
				iVar4 = cursW;
				if (cursW < 0) {
					iVar4 = cursW + 0xf;
				}
				iVar3 = cursH;
				if (cursH < 0) {
					iVar3 = cursH + 0xf;
				}
				uVar2 = AutoPlace__FiiiiUc(myplr,ii,iVar4 >> 4,iVar3 >> 4,0);
			} while ((ii + 1 < 0x28) && (ii = ii + 1, uVar2 == '\0'));
			s = '\n';
			if (uVar2 != '\0') {
				s = '\v';
			}
			StartStore__Fc(s);
			SetCursor__Fi(1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SmithBuyPItem__Fv()
 // line 2654, offset 0x80071078
	/* begin block 1 */
		// Start line: 2655
		// Start offset: 0x80071078
		// Variables:
	// 		int idx; // $a2
	// 		int i; // $a1
	// 		int xx; // $a0
	/* end block 1 */
	// End offset: 0x8007122C
	// End Line: 2681

	/* begin block 2 */
		// Start line: 5727
	/* end block 2 */
	// End Line: 5728

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmithBuyPItem__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	if (plr[myplr].HoldItem._iMagical == '\0') {
		plr[myplr].HoldItem._iIdentified = '\0';
	}
	StoreAutoPlace__Fv();
	iVar1 = StorePlrNo;
	iVar2 = stextlhold - stextup;
	iVar5 = 0;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 7;
	}
	iVar2 = (iVar2 >> 3) + stextvhold;
	iVar4 = 0;
	if (-1 < iVar2) {
		iVar3 = StorePlrNo * 0x288;
		do {
			if (*(short *)((int)&_premiumitem._itype + iVar3) != -1) {
				iVar2 = iVar2 + -1;
				iVar5 = iVar4;
			}
			iVar3 = iVar3 + 0x6c;
			iVar4 = iVar4 + 1;
		} while (-1 < iVar2);
	}
	(&_premiumitem)[StorePlrNo * 6 + iVar5]._itype = -1;
	iVar5 = myplr;
	_numpremium[iVar1] = _numpremium[iVar1] + -1;
	SpawnPremium__Fi((int)plr[iVar5]._pLevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SPBuyEnter__Fv()
 // line 2687, offset 0x8007123c
	/* begin block 1 */
		// Start line: 2688
		// Start offset: 0x8007123C
		// Variables:
	// 		int idx; // $t1
	// 		int i; // $s0
	// 		unsigned char done; // $v1

		/* begin block 1.1 */
			// Start line: 2688
			// Start offset: 0x8007123C
			// Variables:
		// 		int xx; // $a0
		/* end block 1.1 */
		// End offset: 0x80071494
		// End Line: 2728
	/* end block 1 */
	// End offset: 0x80071494
	// End Line: 2728

	/* begin block 2 */
		// Start line: 5807
	/* end block 2 */
	// End Line: 5808

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SPBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int ii;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	int iVar9;
	
	stextshold = 0x12;
	ii = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (ii < 0) {
		ii = ii + 7;
	}
	iVar4 = (ii >> 3) + stextsval;
	ii = 0;
	iVar9 = 0;
	if (-1 < iVar4) {
		iVar3 = StorePlrNo * 0x288;
		do {
			if (*(short *)((int)&_premiumitem._itype + iVar3) != -1) {
				iVar4 = iVar4 + -1;
				ii = iVar9;
			}
			iVar3 = iVar3 + 0x6c;
			iVar9 = iVar9 + 1;
		} while (-1 < iVar4);
	}
	if (plr[myplr]._pGold < (&_premiumitem)[StorePlrNo * 6 + ii]._iIvalue) {
		StartStore__Fc('\t');
	}
	else {
		iVar4 = StorePlrNo * 6;
		pIVar7 = &_premiumitem + iVar4 + ii;
		pIVar1 = &plr[myplr].HoldItem;
		do {
			pIVar8 = pIVar1;
			pIVar6 = pIVar7;
			iVar9 = pIVar6->_iVMult1;
			iVar3 = pIVar6->_iVAdd2;
			iVar5 = pIVar6->_iVMult2;
			pIVar8->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar8->_iVMult1 = iVar9;
			pIVar8->_iVAdd2 = iVar3;
			pIVar8->_iVMult2 = iVar5;
			pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
		} while (pIVar7 != (ItemStruct *)&(&_premiumitem)[iVar4 + ii]._iSufPower);
		iVar4 = pIVar6->_ivalue;
		iVar9 = pIVar6->_iIvalue;
		((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar8->_ivalue = iVar4;
		pIVar8->_iIvalue = iVar9;
		SellIdx = ii;
		SetCursor__Fi((uint)plr[myplr].HoldItem._iCurs + 0xc);
		ii = 0;
		do {
			iVar4 = cursW;
			if (cursW < 0) {
				iVar4 = cursW + 0xf;
			}
			iVar9 = cursH;
			if (cursH < 0) {
				iVar9 = cursH + 0xf;
			}
			uVar2 = AutoPlace__FiiiiUc(myplr,ii,iVar4 >> 4,iVar9 >> 4,0);
		} while ((ii + 1 < 0x28) && (ii = ii + 1, uVar2 == '\0'));
		s = '\n';
		if (uVar2 != '\0') {
			s = '\v';
		}
		StartStore__Fc(s);
		SetCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ StoreGoldFit__Fi(int idx /*$a0*/)
 // line 2734, offset 0x800714a8
	/* begin block 1 */
		// Start line: 2735
		// Start offset: 0x800714A8
		// Variables:
	// 		int sz; // $s2
	// 		int numsqrs; // $s0
	// 		int i; // $a0
	// 		long cost; // $s1
	/* end block 1 */
	// End offset: 0x80071744
	// End Line: 2765

	/* begin block 2 */
		// Start line: 5912
	/* end block 2 */
	// End Line: 5913

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar StoreGoldFit__Fi(int idx)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	char *pcVar4;
	undefined *puVar5;
	int iVar6;
	undefined *puVar7;
	
	puVar7 = (undefined *)(&storehold)[idx]._iIvalue;
	iVar6 = (int)puVar7 / 5000;
	if (puVar7 != (undefined *)(iVar6 * 5000)) {
		iVar6 = iVar6 + 1;
	}
	SetCursor__Fi((uint)(&storehold)[idx]._iCurs + 0xc);
	iVar2 = cursW;
	if (cursW < 0) {
		iVar2 = cursW + 0xf;
	}
	iVar3 = cursH;
	if (cursH < 0) {
		iVar3 = cursH + 0xf;
	}
	iVar2 = (iVar2 >> 4) * (iVar3 >> 4);
	SetCursor__Fi(1);
	bVar1 = true;
	if (iVar2 < iVar6) {
		pcVar4 = plr[myplr].InvGrid;
		do {
			if (*pcVar4 == '\0') {
				iVar2 = iVar2 + 1;
			}
			pcVar4 = pcVar4 + 1;
		} while ((int)pcVar4 < myplr * 0x19e8 + -0x7ff24518);
		iVar6 = 0;
		if (0 < plr[myplr]._pNumInv) {
			iVar3 = 0;
			do {
				if (*(short *)((int)&plr[myplr].InvList[0]._itype + iVar3) == 0xb) {
					puVar5 = *(undefined **)((int)&plr[myplr].InvList[0]._ivalue + iVar3);
					if (puVar5 != &DAT_00001388) {
						if ((int)(puVar5 + (int)puVar7) < 0x1389) {
							puVar7 = (undefined *)0x0;
						}
						else {
							puVar7 = puVar5 + (int)(puVar7 + -5000);
						}
					}
				}
				iVar6 = iVar6 + 1;
				iVar3 = iVar3 + 0x6c;
			} while (iVar6 < plr[myplr]._pNumInv);
		}
		iVar6 = (int)puVar7 / 5000;
		if (puVar7 != (undefined *)(iVar6 * 5000)) {
			iVar6 = iVar6 + 1;
		}
		bVar1 = iVar6 <= iVar2;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceStoreGold__Fl(long v /*$s6*/)
 // line 2772, offset 0x80071760
	/* begin block 1 */
		// Start line: 2773
		// Start offset: 0x80071760
		// Variables:
	// 		int i; // $s0
	// 		int ii; // $s2
	// 		int xx; // $s3
	// 		int yy; // $s1
	// 		unsigned char done; // $a1

		/* begin block 1.1 */
			// Start line: 2773
			// Start offset: 0x80071760

			/* begin block 1.1.1 */
				// Start line: 2779
				// Start offset: 0x800717B0

				/* begin block 1.1.1.1 */
					// Start line: 2779
					// Start offset: 0x800717C4

					/* begin block 1.1.1.1.1 */
						// Start line: 2784
						// Start offset: 0x8007182C
					/* end block 1.1.1.1.1 */
					// End offset: 0x800719C4
					// End Line: 2795
				/* end block 1.1.1.1 */
				// End offset: 0x800719C4
				// End Line: 2795
			/* end block 1.1.1 */
			// End offset: 0x800719C4
			// End Line: 2795
		/* end block 1.1 */
		// End offset: 0x800719CC
		// End Line: 2797
	/* end block 1 */
	// End offset: 0x800719CC
	// End Line: 2797

	/* begin block 2 */
		// Start line: 5994
	/* end block 2 */
	// End Line: 5995

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceStoreGold__Fl(long v)

{
	bool bVar1;
	ItemStruct *pIVar2;
	int *piVar3;
	int pnum;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	int *piVar8;
	int i;
	int iVar9;
	
	bVar1 = false;
	iVar9 = 0;
	while ((iVar9 < 0x28 && (!bVar1))) {
		if (*(char *)(iVar9 + myplr * 0x19e8 + -0x7ff24540) == '\0') {
			i = plr[myplr]._pNumInv;
			GetGoldSeed__FiP10ItemStruct(myplr,_golditem + StorePlrNo);
			pIVar2 = _golditem + StorePlrNo;
			pIVar7 = _golditem + StorePlrNo;
			piVar3 = (int *)(i * 0x6c + myplr * 0x19e8 + -0x7ff25624);
			do {
				piVar8 = piVar3;
				pIVar6 = pIVar7;
				pnum = pIVar6->_iVMult1;
				iVar4 = pIVar6->_iVAdd2;
				iVar5 = pIVar6->_iVMult2;
				*piVar8 = pIVar6->_iVAdd1;
				piVar8[1] = pnum;
				piVar8[2] = iVar4;
				piVar8[3] = iVar5;
				pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
				piVar3 = piVar8 + 4;
			} while (pIVar7 != (ItemStruct *)&pIVar2->_iSufPower);
			pnum = pIVar6->_ivalue;
			iVar4 = pIVar6->_iIvalue;
			piVar8[4] = pIVar7->_iVAdd1;
			piVar8[5] = pnum;
			piVar8[6] = iVar4;
			pnum = myplr;
			iVar4 = myplr * 0x19e8;
			plr[myplr]._pNumInv = plr[myplr]._pNumInv + 1;
			*(undefined *)(iVar4 + -0x7ff24540 + iVar9) = (char)plr[pnum]._pNumInv;
			pnum = myplr;
			plr[myplr].InvList[i]._ivalue = v;
			SetGoldCurs__Fii(pnum,i);
			bVar1 = true;
		}
		iVar9 = iVar9 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StoreSellItem__Fv()
 // line 2801, offset 0x80071a00
	/* begin block 1 */
		// Start line: 2802
		// Start offset: 0x80071A00
		// Variables:
	// 		int idx; // $s0
	// 		int i; // $s0
	// 		long cost; // $s1
	/* end block 1 */
	// End offset: 0x80071D24
	// End Line: 2863

	/* begin block 2 */
		// Start line: 6101
	/* end block 2 */
	// End Line: 6102

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StoreSellItem__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	int i;
	undefined *puVar3;
	int pnum;
	uint iv;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	undefined *v;
	
	if ((WFlag == '\0') || (WStaffFlag != '\0')) {
		iVar2 = stextlhold - stextup;
		if (iVar2 < 0) {
			iVar2 = iVar2 + 7;
		}
		iVar2 = iVar2 >> 3;
	}
	else {
		iVar2 = stextlhold - stextup;
		if (iVar2 < 0) {
			iVar2 = iVar2 + 3;
		}
		iVar2 = iVar2 >> 2;
	}
	iVar2 = iVar2 + stextvhold;
	iv = SEXT14((&storehidx)[iVar2]);
	if ((int)iv < 0) {
		RemoveSpdBarItem__Fii(myplr,~iv);
	}
	else {
		RemoveInvItem__Fii(myplr,iv);
	}
	v = (undefined *)(&storehold)[iVar2]._iIvalue;
	storenumh = storenumh + -1;
	if ((iVar2 != storenumh) && (iVar2 < storenumh)) {
		pIVar8 = &ItemStruct_800e1df4 + iVar2;
		pIVar9 = &storehold + iVar2;
		do {
			pIVar6 = pIVar8;
			pIVar1 = pIVar9;
			do {
				pIVar7 = pIVar1;
				pIVar5 = pIVar6;
				i = pIVar5->_iVMult1;
				pnum = pIVar5->_iVAdd2;
				iVar4 = pIVar5->_iVMult2;
				pIVar7->_iVAdd1 = pIVar5->_iVAdd1;
				pIVar7->_iVMult1 = i;
				pIVar7->_iVAdd2 = pnum;
				pIVar7->_iVMult2 = iVar4;
				pIVar6 = (ItemStruct *)&pIVar5->_iSeed;
				pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
			} while (pIVar6 != (ItemStruct *)&pIVar8->_iSufPower);
			i = pIVar5->_ivalue;
			pnum = pIVar5->_iIvalue;
			((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar7->_ivalue = i;
			pIVar7->_iIvalue = pnum;
			pIVar8 = pIVar8 + 1;
			(&storehidx)[iVar2] = (&CHAR_00h_800e31c9)[iVar2];
			iVar2 = iVar2 + 1;
			pIVar9 = pIVar9 + 1;
		} while (iVar2 < storenumh);
	}
	iVar2 = plr[myplr]._pNumInv;
	*(undefined **)&plr[myplr]._pGold = v + plr[myplr]._pGold;
	i = 0;
	if (0 < iVar2) {
		iVar2 = 0;
		do {
			pnum = myplr;
			if ((int)v < 1) {
				return;
			}
			if ((*(short *)((int)&plr[myplr].InvList[0]._itype + iVar2) == 0xb) &&
				 (puVar3 = *(undefined **)((int)&plr[myplr].InvList[0]._ivalue + iVar2),
				 puVar3 != &DAT_00001388)) {
				if ((int)(puVar3 + (int)v) < 0x1389) {
					*(undefined **)((int)&plr[myplr].InvList[0]._ivalue + iVar2) = puVar3 + (int)v;
					SetGoldCurs__Fii(pnum,i);
					v = (undefined *)0x0;
				}
				else {
					v = puVar3 + (int)(v + -5000);
					*(undefined4 *)((int)&plr[myplr].InvList[0]._ivalue + iVar2) = 5000;
					SetGoldCurs__Fii(pnum,i);
				}
			}
			i = i + 1;
			iVar2 = iVar2 + 0x6c;
		} while (i < plr[myplr]._pNumInv);
	}
	if (0 < (int)v) {
		while (5000 < (int)v) {
			PlaceStoreGold__Fl((long)&DAT_00001388);
			v = v + -5000;
		}
		PlaceStoreGold__Fl((long)v);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SSellEnter__Fv()
 // line 2869, offset 0x80071d44
	/* begin block 1 */
		// Start line: 2870
		// Start offset: 0x80071D44
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x80071E44
	// End Line: 2888

	/* begin block 2 */
		// Start line: 6254
	/* end block 2 */
	// End Line: 6255

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SSellEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 3;
	iVar3 = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (iVar3 < 0) {
		iVar3 = iVar3 + 7;
	}
	SellIdx = (iVar3 >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar8 = &storehold + SellIdx;
	do {
		pIVar7 = pIVar8;
		pIVar6 = pIVar1;
		iVar3 = pIVar7->_iVMult1;
		iVar4 = pIVar7->_iVAdd2;
		iVar5 = pIVar7->_iVMult2;
		pIVar6->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar6->_iVMult1 = iVar3;
		pIVar6->_iVAdd2 = iVar4;
		pIVar6->_iVMult2 = iVar5;
		pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
	} while (pIVar8 != (ItemStruct *)&(&storehold)[SellIdx]._iSufPower);
	iVar3 = pIVar7->_ivalue;
	iVar4 = pIVar7->_iIvalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar6->_ivalue = iVar3;
	pIVar6->_iIvalue = iVar4;
	uVar2 = StoreGoldFit__Fi(SellIdx);
	s = '\n';
	if (uVar2 != '\0') {
		s = '\v';
	}
	StartStore__Fc(s);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SmithRepairItem__Fv()
 // line 2894, offset 0x80071e54
	/* begin block 1 */
		// Start line: 2895
		// Start offset: 0x80071E54
		// Variables:
	// 		int i; // $a0
	// 		int idx; // $a0
	/* end block 1 */
	// End offset: 0x800720B8
	// End Line: 2913

	/* begin block 2 */
		// Start line: 6315
	/* end block 2 */
	// End Line: 6316

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmithRepairItem__Fv(void)

{
	int iVar1;
	
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	iVar1 = stextlhold - stextup;
	if (iVar1 < 0) {
		iVar1 = iVar1 + 7;
	}
	iVar1 = (iVar1 >> 3) + stextvhold;
	(&storehold)[iVar1]._iDurability = (&storehold)[iVar1]._iMaxDur;
	iVar1 = (int)(&storehidx)[iVar1];
	if (iVar1 < 0) {
		if (iVar1 == -1) {
			plr[myplr].InvBody[0]._iDurability = plr[myplr].InvBody[0]._iMaxDur;
		}
		if (iVar1 == -2) {
			plr[myplr].InvBody[6]._iDurability = plr[myplr].InvBody[6]._iMaxDur;
		}
		if (iVar1 == -3) {
			plr[myplr].InvBody[4]._iDurability = plr[myplr].InvBody[4]._iMaxDur;
		}
		if (iVar1 == -4) {
			plr[myplr].InvBody[5]._iDurability = plr[myplr].InvBody[5]._iMaxDur;
		}
	}
	else {
		plr[myplr].InvList[iVar1]._iDurability = plr[myplr].InvList[iVar1]._iMaxDur;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SRepairEnter__Fv()
 // line 2918, offset 0x800720c8
	/* begin block 1 */
		// Start line: 2919
		// Start offset: 0x800720C8
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x8007221C
	// End Line: 2939

	/* begin block 2 */
		// Start line: 6374
	/* end block 2 */
	// End Line: 6375

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SRepairEnter__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	char s;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	stextshold = 4;
	iVar2 = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 7;
	}
	SellIdx = (iVar2 >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar7 = &storehold + SellIdx;
	do {
		pIVar6 = pIVar7;
		pIVar5 = pIVar1;
		iVar2 = pIVar6->_iVMult1;
		iVar3 = pIVar6->_iVAdd2;
		iVar4 = pIVar6->_iVMult2;
		pIVar5->_iVAdd1 = pIVar6->_iVAdd1;
		pIVar5->_iVMult1 = iVar2;
		pIVar5->_iVAdd2 = iVar3;
		pIVar5->_iVMult2 = iVar4;
		pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
		pIVar1 = (ItemStruct *)&pIVar5->_iSeed;
	} while (pIVar7 != (ItemStruct *)&(&storehold)[SellIdx]._iSufPower);
	iVar2 = pIVar6->_ivalue;
	iVar3 = pIVar6->_iIvalue;
	((ItemStruct *)&pIVar5->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
	pIVar5->_ivalue = iVar2;
	pIVar5->_iIvalue = iVar3;
	s = '\v';
	if (plr[myplr]._pGold < (&storehold)[SellIdx]._iIvalue) {
		s = '\t';
	}
	StartStore__Fc(s);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WitchEnter__Fv()
 // line 2945, offset 0x8007222c
	/* begin block 1 */
		// Start line: 2946
		// Start offset: 0x8007222C
	/* end block 1 */
	// End offset: 0x800722FC
	// End Line: 2972

	/* begin block 2 */
		// Start line: 6436
	/* end block 2 */
	// End Line: 6437

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WitchEnter__Fv(void)

{
	WFlag = '\x01';
	switch(stextsel) {
	case 8:
		talker = 6;
		stextshold = 5;
		stextlhold = 8;
		gossipstart = 0xd5;
		gossipend = 0xdf;
		StartStore__Fc('\x13');
		break;
	case 9:
		WStaffFlag = '\0';
		goto LAB_800722b4;
	case 10:
		WStaffFlag = '\x01';
LAB_800722b4:
		StartStore__Fc('\x06');
		break;
	case 0xb:
		WStaffFlag = '\0';
		goto LAB_800722d8;
	case 0xc:
		WStaffFlag = '\x01';
LAB_800722d8:
		StartStore__Fc('\a');
		break;
	case 0xd:
		StartStore__Fc('\b');
		break;
	case 0xe:
		stextflag = '\0';
		break;
	default:
		WFlag = '\x01';
		return;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WitchBuyItem__Fv()
 // line 2978, offset 0x8007230c
	/* begin block 1 */
		// Start line: 2979
		// Start offset: 0x8007230C
		// Variables:
	// 		int idx; // $s0
	/* end block 1 */
	// End offset: 0x8007257C
	// End Line: 3041

	/* begin block 2 */
		// Start line: 6530
	/* end block 2 */
	// End Line: 6531

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WitchBuyItem__Fv(void)

{
	undefined4 *puVar1;
	long lVar2;
	int iVar3;
	undefined4 *puVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	undefined4 *puVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	int iVar11;
	int iVar12;
	
	iVar12 = SellIdx;
	if ((WStaffFlag == '\0') && (SellIdx < 3)) {
		lVar2 = GetRndSeed__Fv();
		plr[myplr].HoldItem._iSeed = lVar2;
	}
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	StoreAutoPlace__Fv();
	if ((WStaffFlag != '\0') || (2 < iVar12)) {
		if (iVar12 == 0x13) {
			(&DAT_800e0248)[StorePlrNo * 0x438] = 0xffff;
		}
		else {
			if ((&_witchitem)[StorePlrNo * 0x14 + iVar12 + 1]._itype != -1) {
				iVar3 = iVar12 * 0x6c;
				iVar11 = iVar3;
				do {
					iVar11 = iVar11 + 0x6c;
					puVar4 = (undefined4 *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar3);
					puVar1 = puVar4;
					puVar10 = puVar4 + 0x1b;
					do {
						puVar9 = puVar10;
						puVar8 = puVar1;
						uVar5 = puVar9[1];
						uVar6 = puVar9[2];
						uVar7 = puVar9[3];
						*puVar8 = *puVar9;
						puVar8[1] = uVar5;
						puVar8[2] = uVar6;
						puVar8[3] = uVar7;
						puVar10 = puVar9 + 4;
						puVar1 = puVar8 + 4;
					} while (puVar10 != puVar4 + 0x33);
					uVar5 = puVar9[5];
					uVar6 = puVar9[6];
					puVar8[4] = *puVar10;
					puVar8[5] = uVar5;
					puVar8[6] = uVar6;
					iVar3 = iVar3 + 0x6c;
					iVar12 = iVar12 + 1;
				} while (*(short *)((int)&(&_witchitem)[StorePlrNo * 0x14 + 1]._itype + iVar11) != -1);
			}
			(&_witchitem)[StorePlrNo * 0x14 + iVar12]._itype = -1;
		}
	}
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WBuyEnter__Fv()
 // line 3046, offset 0x80072590
	/* begin block 1 */
		// Start line: 3047
		// Start offset: 0x80072590
		// Variables:
	// 		int idx; // $t0
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x80072804
	// End Line: 3093

	/* begin block 2 */
		// Start line: 6676
	/* end block 2 */
	// End Line: 6677

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int ii;
	int iVar3;
	int iVar4;
	char s;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	
	if (_NoWitchItems[StorePlrNo] == 0) {
		StartStore__Fc('\x05');
	}
	else {
		stextshold = 6;
		stextlhold = stextsel;
		stextvhold = stextsval;
		if (WStaffFlag == '\0') {
			ii = stextsel - stextup;
			if (ii < 0) {
				ii = ii + 3;
			}
			ii = ii >> 2;
		}
		else {
			ii = stextsel - stextup;
			if (ii < 0) {
				ii = ii + 7;
			}
			ii = ii >> 3;
		}
		ii = ii + stextsval + _WitchIdxOfs[StorePlrNo];
		if (plr[myplr]._pGold < (&_witchitem)[StorePlrNo * 0x14 + ii]._iIvalue) {
			StartStore__Fc('\t');
		}
		else {
			iVar4 = StorePlrNo * 0x14;
			pIVar8 = &_witchitem + iVar4 + ii;
			pIVar1 = &plr[myplr].HoldItem;
			do {
				pIVar9 = pIVar1;
				pIVar7 = pIVar8;
				iVar3 = pIVar7->_iVMult1;
				iVar5 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar9->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar9->_iVMult1 = iVar3;
				pIVar9->_iVAdd2 = iVar5;
				pIVar9->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar1 = (ItemStruct *)&pIVar9->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&_witchitem)[iVar4 + ii]._iSufPower);
			iVar4 = pIVar7->_ivalue;
			iVar3 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar9->_ivalue = iVar4;
			pIVar9->_iIvalue = iVar3;
			SellIdx = ii;
			SetCursor__Fi((uint)plr[myplr].HoldItem._iCurs + 0xc);
			ii = 0;
			do {
				iVar4 = cursW;
				if (cursW < 0) {
					iVar4 = cursW + 0xf;
				}
				iVar3 = cursH;
				if (cursH < 0) {
					iVar3 = cursH + 0xf;
				}
				uVar2 = SpecialAutoPlace__FiiiiUc(myplr,ii,iVar4 >> 4,iVar3 >> 4,0);
			} while ((ii + 1 < 0x28) && (ii = ii + 1, uVar2 == '\0'));
			s = '\n';
			if (uVar2 != '\0') {
				s = '\v';
			}
			StartStore__Fc(s);
			SetCursor__Fi(1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WSellEnter__Fv()
 // line 3100, offset 0x80072818
	/* begin block 1 */
		// Start line: 3101
		// Start offset: 0x80072818
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x80072948
	// End Line: 3125

	/* begin block 2 */
		// Start line: 6794
	/* end block 2 */
	// End Line: 6795

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WSellEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 7;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (WStaffFlag == '\0') {
		SellIdx = stextsel - stextup;
		if (SellIdx < 0) {
			SellIdx = SellIdx + 3;
		}
		SellIdx = SellIdx >> 2;
	}
	else {
		SellIdx = stextsel - stextup;
		if (SellIdx < 0) {
			SellIdx = SellIdx + 7;
		}
		SellIdx = SellIdx >> 3;
	}
	SellIdx = SellIdx + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar8 = &storehold + SellIdx;
	do {
		pIVar7 = pIVar8;
		pIVar6 = pIVar1;
		iVar3 = pIVar7->_iVMult1;
		iVar4 = pIVar7->_iVAdd2;
		iVar5 = pIVar7->_iVMult2;
		pIVar6->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar6->_iVMult1 = iVar3;
		pIVar6->_iVAdd2 = iVar4;
		pIVar6->_iVMult2 = iVar5;
		pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
	} while (pIVar8 != (ItemStruct *)&(&storehold)[SellIdx]._iSufPower);
	iVar3 = pIVar7->_ivalue;
	iVar4 = pIVar7->_iIvalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar6->_ivalue = iVar3;
	pIVar6->_iIvalue = iVar4;
	uVar2 = StoreGoldFit__Fi(SellIdx);
	s = '\n';
	if (uVar2 != '\0') {
		s = '\v';
	}
	StartStore__Fc(s);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WitchRechargeItem__Fv()
 // line 3131, offset 0x80072958
	/* begin block 1 */
		// Start line: 3132
		// Start offset: 0x80072958
		// Variables:
	// 		int i; // $v0
	// 		int idx; // $a0
	/* end block 1 */
	// End offset: 0x80072AC4
	// End Line: 3147

	/* begin block 2 */
		// Start line: 6875
	/* end block 2 */
	// End Line: 6876

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WitchRechargeItem__Fv(void)

{
	int iVar1;
	
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	iVar1 = stextlhold - stextup;
	if (iVar1 < 0) {
		iVar1 = iVar1 + 7;
	}
	iVar1 = (iVar1 >> 3) + stextvhold;
	(&storehold)[iVar1]._iCharges = (&storehold)[iVar1]._iMaxCharges;
	iVar1 = (int)(&storehidx)[iVar1];
	if (iVar1 < 0) {
		plr[myplr].InvBody[4]._iCharges = plr[myplr].InvBody[4]._iMaxCharges;
	}
	else {
		plr[myplr].InvList[iVar1]._iCharges = plr[myplr].InvList[iVar1]._iMaxCharges;
	}
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WRechargeEnter__Fv()
 // line 3152, offset 0x80072ad4
	/* begin block 1 */
		// Start line: 3153
		// Start offset: 0x80072AD4
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x80072C28
	// End Line: 3173

	/* begin block 2 */
		// Start line: 6928
	/* end block 2 */
	// End Line: 6929

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WRechargeEnter__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	char s;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	stextshold = 8;
	iVar2 = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 7;
	}
	SellIdx = (iVar2 >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar7 = &storehold + SellIdx;
	do {
		pIVar6 = pIVar7;
		pIVar5 = pIVar1;
		iVar2 = pIVar6->_iVMult1;
		iVar3 = pIVar6->_iVAdd2;
		iVar4 = pIVar6->_iVMult2;
		pIVar5->_iVAdd1 = pIVar6->_iVAdd1;
		pIVar5->_iVMult1 = iVar2;
		pIVar5->_iVAdd2 = iVar3;
		pIVar5->_iVMult2 = iVar4;
		pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
		pIVar1 = (ItemStruct *)&pIVar5->_iSeed;
	} while (pIVar7 != (ItemStruct *)&(&storehold)[SellIdx]._iSufPower);
	iVar2 = pIVar6->_ivalue;
	iVar3 = pIVar6->_iIvalue;
	((ItemStruct *)&pIVar5->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
	pIVar5->_ivalue = iVar2;
	pIVar5->_iIvalue = iVar3;
	s = '\v';
	if (plr[myplr]._pGold < (&storehold)[SellIdx]._iIvalue) {
		s = '\t';
	}
	StartStore__Fc(s);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_BoyEnter__Fv()
 // line 3179, offset 0x80072c38
	/* begin block 1 */
		// Start line: 3180
		// Start offset: 0x80072C38
	/* end block 1 */
	// End offset: 0x80072DC0
	// End Line: 3208

	/* begin block 2 */
		// Start line: 6991
	/* end block 2 */
	// End Line: 6992

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_BoyEnter__Fv(void)

{
	if ((_boyitem[StorePlrNo]._itype == -1) || (stextsel != 0xc)) {
		if (((stextsel == 6) && (_boyitem[StorePlrNo]._itype != -1)) ||
			 ((stextsel == 8 && (_boyitem[StorePlrNo]._itype == -1)))) {
			talker = 8;
			stextshold = 0xc;
			gossipstart = 0xe1;
			gossipend = 0xea;
			stextlhold = stextsel;
			StartStore__Fc('\x13');
		}
		else {
			stextflag = '\0';
		}
	}
	else {
		if (plr[myplr]._pGold < 0x32) {
			stextshold = stextsel;
			stextlhold = stextsel;
			stextvhold = stextsval;
			StartStore__Fc('\t');
		}
		else {
			TakePlrsMoney__Fl(0x32);
			StartStore__Fc('\r');
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BoyBuyItem__Fv()
 // line 3214, offset 0x80072dd0
	/* begin block 1 */
		// Start line: 3215
		// Start offset: 0x80072DD0
	/* end block 1 */
	// End offset: 0x80072E60
	// End Line: 3226

	/* begin block 2 */
		// Start line: 7069
	/* end block 2 */
	// End Line: 7070

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BoyBuyItem__Fv(void)

{
	int p;
	
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	StoreAutoPlace__Fv();
	p = myplr;
	stextshold = 0xc;
	_boyitem[StorePlrNo]._itype = -1;
	CalcPlrInv__FiUc(p,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealerBuyItem__Fv()
 // line 3231, offset 0x80072e70
	/* begin block 1 */
		// Start line: 3232
		// Start offset: 0x80072E70
		// Variables:
	// 		int idx; // $s0
	/* end block 1 */
	// End offset: 0x80073188
	// End Line: 3281

	/* begin block 2 */
		// Start line: 7111
	/* end block 2 */
	// End Line: 7112

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HealerBuyItem__Fv(void)

{
	bool bVar1;
	undefined4 *puVar2;
	long lVar3;
	int iVar4;
	undefined4 *puVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	int iVar12;
	int iVar13;
	
	iVar13 = (stextlhold - stextup >> 2) + stextvhold;
	bVar1 = iVar13 < 3;
	if (gbMaxPlayers == '\x01') {
		bVar1 = iVar13 < 2;
	}
	if (bVar1) {
		lVar3 = GetRndSeed__Fv();
		plr[myplr].HoldItem._iSeed = lVar3;
	}
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	if (plr[myplr].HoldItem._iMagical == '\0') {
		plr[myplr].HoldItem._iIdentified = '\0';
	}
	StoreAutoPlace__Fv();
	CalcPlrInv__FiUc(myplr,'\x01');
	bVar1 = iVar13 < 3;
	if (gbMaxPlayers == '\x01') {
		bVar1 = iVar13 < 2;
	}
	if (!bVar1) {
		iVar13 = (stextlhold - stextup >> 2) + stextvhold;
		if (iVar13 == 0x13) {
			(&DAT_800e1400)[StorePlrNo * 0x438] = 0xffff;
		}
		else {
			if ((&_healitem)[StorePlrNo * 0x14 + iVar13 + 1]._itype != -1) {
				iVar4 = iVar13 * 0x6c;
				iVar12 = iVar4;
				do {
					iVar12 = iVar12 + 0x6c;
					puVar5 = (undefined4 *)((int)&(&_healitem)[StorePlrNo * 0x14]._iVAdd1 + iVar4);
					puVar2 = puVar5;
					puVar11 = puVar5 + 0x1b;
					do {
						puVar10 = puVar11;
						puVar9 = puVar2;
						uVar6 = puVar10[1];
						uVar7 = puVar10[2];
						uVar8 = puVar10[3];
						*puVar9 = *puVar10;
						puVar9[1] = uVar6;
						puVar9[2] = uVar7;
						puVar9[3] = uVar8;
						puVar11 = puVar10 + 4;
						puVar2 = puVar9 + 4;
					} while (puVar11 != puVar5 + 0x33);
					uVar6 = puVar10[5];
					uVar7 = puVar10[6];
					puVar9[4] = *puVar11;
					puVar9[5] = uVar6;
					puVar9[6] = uVar7;
					iVar4 = iVar4 + 0x6c;
					iVar13 = iVar13 + 1;
				} while (*(short *)((int)&(&_healitem)[StorePlrNo * 0x14 + 1]._itype + iVar12) != -1);
			}
			(&_healitem)[StorePlrNo * 0x14 + iVar13]._itype = -1;
		}
		CalcPlrInv__FiUc(myplr,'\x01');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_BBuyEnter__Fv()
 // line 3286, offset 0x8007319c
	/* begin block 1 */
		// Start line: 3287
		// Start offset: 0x8007319C
		// Variables:
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x8007339C
	// End Line: 3319

	/* begin block 2 */
		// Start line: 7221
	/* end block 2 */
	// End Line: 7222

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_BBuyEnter__Fv(void)

{
	byte bVar1;
	ItemStruct *pIVar2;
	ItemStruct *pIVar3;
	uchar uVar4;
	int ii;
	char s;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	
	if (stextsel == 5) {
		stextlhold = stextsel;
		stextshold = 0xd;
		stextvhold = stextsval;
		if (plr[myplr]._pGold < _boyitem[StorePlrNo]._iIvalue + (_boyitem[StorePlrNo]._iIvalue >> 1)) {
			StartStore__Fc('\t');
		}
		else {
			pIVar2 = _boyitem + StorePlrNo;
			pIVar8 = _boyitem + StorePlrNo;
			pIVar3 = &plr[myplr].HoldItem;
			do {
				pIVar9 = pIVar3;
				pIVar7 = pIVar8;
				ii = pIVar7->_iVMult1;
				iVar5 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar9->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar9->_iVMult1 = ii;
				pIVar9->_iVAdd2 = iVar5;
				pIVar9->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar3 = (ItemStruct *)&pIVar9->_iSeed;
			} while (pIVar8 != (ItemStruct *)&pIVar2->_iSufPower);
			ii = pIVar7->_ivalue;
			iVar5 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar9->_ivalue = ii;
			pIVar9->_iIvalue = iVar5;
			bVar1 = plr[myplr].HoldItem._iCurs;
			ii = plr[myplr].HoldItem._iIvalue;
			plr[myplr].HoldItem._iIvalue = ii + (ii >> 1);
			SetCursor__Fi((uint)bVar1 + 0xc);
			ii = 0;
			do {
				iVar5 = cursW;
				if (cursW < 0) {
					iVar5 = cursW + 0xf;
				}
				iVar6 = cursH;
				if (cursH < 0) {
					iVar6 = cursH + 0xf;
				}
				uVar4 = AutoPlace__FiiiiUc(myplr,ii,iVar5 >> 4,iVar6 >> 4,0);
			} while ((ii + 1 < 0x28) && (ii = ii + 1, uVar4 == '\0'));
			s = '\n';
			if (uVar4 != '\0') {
				s = '\v';
			}
			StartStore__Fc(s);
			SetCursor__Fi(1);
		}
	}
	else {
		stextflag = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StoryIdItem__Fv()
 // line 3324, offset 0x800733b0
	/* begin block 1 */
		// Start line: 3325
		// Start offset: 0x800733B0
		// Variables:
	// 		int i; // $a0
	// 		int idx; // $v0
	/* end block 1 */
	// End offset: 0x800736F0
	// End Line: 3347

	/* begin block 2 */
		// Start line: 7318
	/* end block 2 */
	// End Line: 7319

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StoryIdItem__Fv(void)

{
	int iVar1;
	
	iVar1 = stextlhold - stextup;
	if (iVar1 < 0) {
		iVar1 = iVar1 + 7;
	}
	iVar1 = (int)(&storehidx)[(iVar1 >> 3) + stextvhold];
	if (iVar1 < 0) {
		if (iVar1 == -1) {
			plr[myplr].InvBody[0]._iIdentified = '\x01';
		}
		if (iVar1 == -2) {
			plr[myplr].InvBody[6]._iIdentified = '\x01';
		}
		if (iVar1 == -3) {
			plr[myplr].InvBody[4]._iIdentified = '\x01';
		}
		if (iVar1 == -4) {
			plr[myplr].InvBody[5]._iIdentified = '\x01';
		}
		if (iVar1 == -5) {
			plr[myplr].InvBody[1]._iIdentified = '\x01';
		}
		if (iVar1 == -6) {
			plr[myplr].InvBody[2]._iIdentified = '\x01';
		}
		if (iVar1 == -7) {
			plr[myplr].InvBody[3]._iIdentified = '\x01';
		}
	}
	else {
		plr[myplr].InvList[iVar1]._iIdentified = '\x01';
	}
	plr[myplr].HoldItem._iIdentified = '\x01';
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ConfirmEnter__Fv()
 // line 3353, offset 0x80073700
	/* begin block 1 */
		// Start line: 3354
		// Start offset: 0x80073700
	/* end block 1 */
	// End offset: 0x8007380C
	// End Line: 3387

	/* begin block 2 */
		// Start line: 7376
	/* end block 2 */
	// End Line: 7377

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ConfirmEnter__Fv(void)

{
	if (stextsel == 0x11) {
		switch(stextshold) {
		case 2:
			SmithBuyItem__Fv();
			break;
		case 3:
		case 7:
			StoreSellItem__Fv();
			break;
		case 4:
			SmithRepairItem__Fv();
			break;
		case 6:
			WitchBuyItem__Fv();
			break;
		case 8:
			WitchRechargeItem__Fv();
			break;
		case 0xd:
			BoyBuyItem__Fv();
			break;
		case 0x10:
			HealerBuyItem__Fv();
			break;
		case 0x11:
			StoryIdItem__Fv();
			StartStore__Fc('\x14');
			return;
		case 0x12:
			SmithBuyPItem__Fv();
		}
		StartStore__Fc((char)stextshold);
	}
	else {
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
		stextsval = stextvhold;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_HealerEnter__Fv()
 // line 3393, offset 0x8007381c
	/* begin block 1 */
		// Start line: 3394
		// Start offset: 0x8007381C
	/* end block 1 */
	// End offset: 0x800738A4
	// End Line: 3412

	/* begin block 2 */
		// Start line: 7457
	/* end block 2 */
	// End Line: 7458

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_HealerEnter__Fv(void)

{
	if (stextsel == 0xb) {
		StartStore__Fc('\x10');
	}
	else {
		if (stextsel < 0xc) {
			if (stextsel == 9) {
				talker = 1;
				stextshold = 0xe;
				gossipstart = 0xaa;
				stextlhold = stextsel;
				gossipend = 0xb2;
				StartStore__Fc('\x13');
			}
		}
		else {
			if (stextsel == 0xd) {
				stextflag = '\0';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_HBuyEnter__Fv()
 // line 3418, offset 0x800738b4
	/* begin block 1 */
		// Start line: 3419
		// Start offset: 0x800738B4
		// Variables:
	// 		int idx; // $t1
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x80073AD4
	// End Line: 3451

	/* begin block 2 */
		// Start line: 7509
	/* end block 2 */
	// End Line: 7510

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_HBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int ii;
	int iVar3;
	int iVar4;
	char s;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	
	if (stextsel == 0x16) {
		StartStore__Fc('\x0e');
		stextsel = 0xb;
	}
	else {
		stextshold = 0x10;
		stextlhold = stextsel;
		ii = stextsel - stextup;
		stextvhold = stextsval;
		if (ii < 0) {
			ii = ii + 3;
		}
		ii = (ii >> 2) + stextsval;
		if (plr[myplr]._pGold < (&_healitem)[StorePlrNo * 0x14 + ii]._iIvalue) {
			StartStore__Fc('\t');
		}
		else {
			iVar4 = StorePlrNo * 0x14;
			pIVar8 = &_healitem + iVar4 + ii;
			pIVar1 = &plr[myplr].HoldItem;
			do {
				pIVar9 = pIVar1;
				pIVar7 = pIVar8;
				iVar3 = pIVar7->_iVMult1;
				iVar5 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar9->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar9->_iVMult1 = iVar3;
				pIVar9->_iVAdd2 = iVar5;
				pIVar9->_iVMult2 = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar1 = (ItemStruct *)&pIVar9->_iSeed;
			} while (pIVar8 != (ItemStruct *)&(&_healitem)[iVar4 + ii]._iSufPower);
			iVar4 = pIVar7->_ivalue;
			iVar3 = pIVar7->_iIvalue;
			((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
			pIVar9->_ivalue = iVar4;
			pIVar9->_iIvalue = iVar3;
			SellIdx = ii;
			SetCursor__Fi((uint)plr[myplr].HoldItem._iCurs + 0xc);
			ii = 0;
			do {
				iVar4 = cursW;
				if (cursW < 0) {
					iVar4 = cursW + 0xf;
				}
				iVar3 = cursH;
				if (cursH < 0) {
					iVar3 = cursH + 0xf;
				}
				uVar2 = SpecialAutoPlace__FiiiiUc(myplr,ii,iVar4 >> 4,iVar3 >> 4,0);
			} while ((ii + 1 < 0x28) && (ii = ii + 1, uVar2 == '\0'));
			s = '\n';
			if (uVar2 != '\0') {
				s = '\v';
			}
			StartStore__Fc(s);
			SetCursor__Fi(1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StoryEnter__Fv()
 // line 3458, offset 0x80073ae8
	/* begin block 1 */
		// Start line: 3459
		// Start offset: 0x80073AE8
	/* end block 1 */
	// End offset: 0x80073B74
	// End Line: 3473

	/* begin block 2 */
		// Start line: 7603
	/* end block 2 */
	// End Line: 7604

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StoryEnter__Fv(void)

{
	WFlag = '\0';
	if (stextsel == 9) {
		StartStore__Fc('\x11');
	}
	else {
		if (stextsel < 10) {
			if (stextsel == 7) {
				talker = 4;
				stextshold = 0xf;
				gossipstart = 0x97;
				stextlhold = stextsel;
				gossipend = 0x9f;
				StartStore__Fc('\x13');
			}
		}
		else {
			if (stextsel == 0xb) {
				stextflag = '\0';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SIDEnter__Fv()
 // line 3479, offset 0x80073b84
	/* begin block 1 */
		// Start line: 3480
		// Start offset: 0x80073B84
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x80073CF8
	// End Line: 3500

	/* begin block 2 */
		// Start line: 7649
	/* end block 2 */
	// End Line: 7650

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SIDEnter__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	char s;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	if (stextsel == 0x16) {
		StartStore__Fc('\x0f');
		stextsel = 0xe;
	}
	else {
		stextshold = 0x11;
		stextlhold = stextsel;
		iVar2 = stextsel - stextup;
		stextvhold = stextsval;
		if (iVar2 < 0) {
			iVar2 = iVar2 + 7;
		}
		SellIdx = (iVar2 >> 3) + stextsval;
		pIVar1 = &plr[myplr].HoldItem;
		pIVar7 = &storehold + SellIdx;
		do {
			pIVar6 = pIVar7;
			pIVar5 = pIVar1;
			iVar2 = pIVar6->_iVMult1;
			iVar3 = pIVar6->_iVAdd2;
			iVar4 = pIVar6->_iVMult2;
			pIVar5->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar5->_iVMult1 = iVar2;
			pIVar5->_iVAdd2 = iVar3;
			pIVar5->_iVMult2 = iVar4;
			pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar5->_iSeed;
		} while (pIVar7 != (ItemStruct *)&(&storehold)[SellIdx]._iSufPower);
		iVar2 = pIVar6->_ivalue;
		iVar3 = pIVar6->_iIvalue;
		((ItemStruct *)&pIVar5->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar5->_ivalue = iVar2;
		pIVar5->_iIvalue = iVar3;
		s = '\v';
		if (plr[myplr]._pGold < (&storehold)[SellIdx]._iIvalue) {
			s = '\t';
		}
		StartStore__Fc(s);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_TalkEnter__Fv()
 // line 3506, offset 0x80073d08
	/* begin block 1 */
		// Start line: 3507
		// Start offset: 0x80073D08
		// Variables:
	// 		int i; // $s0
	// 		int tq; // $a1
	// 		int sn; // $s2
	// 		int la; // $s5

		/* begin block 1.1 */
			// Start line: 3507
			// Start offset: 0x80073D08

			/* begin block 1.1.1 */
				// Start line: 3516
				// Start offset: 0x80073D54

				/* begin block 1.1.1.1 */
					// Start line: 3524
					// Start offset: 0x80073DD4

					/* begin block 1.1.1.1.1 */
						// Start line: 3533
						// Start offset: 0x80073DF0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80073DF0
					// End Line: 3535
				/* end block 1.1.1.1 */
				// End offset: 0x80073EE0
				// End Line: 3549
			/* end block 1.1.1 */
			// End offset: 0x80073EE0
			// End Line: 3549
		/* end block 1.1 */
		// End offset: 0x80073EE0
		// End Line: 3549
	/* end block 1 */
	// End offset: 0x80073EE0
	// End Line: 3549

	/* begin block 2 */
		// Start line: 7709
	/* end block 2 */
	// End Line: 7710

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_TalkEnter__Fv(void)

{
	long lVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (stextsel == 0x16) {
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
	}
	else {
		iVar4 = 0;
		iVar5 = 0;
		iVar3 = 0;
		piVar2 = &Qtalklist + talker * 0x10;
		do {
			if ((((&quests[0]._qactive)[iVar3] == '\x02') && (*piVar2 != -1)) &&
				 ((&quests[0]._qlog)[iVar3] != '\0')) {
				iVar4 = iVar4 + 1;
			}
			piVar2 = piVar2 + 1;
			iVar5 = iVar5 + 1;
			iVar3 = iVar3 + 0x14;
		} while (iVar5 < 0x10);
		iVar3 = -(iVar4 >> 1) + 10;
		if (stextsel == -(iVar4 >> 1) + 8) {
			SetRndSeed__Fl(towner[talker]._tSeed);
			lVar1 = ENG_random__Fl((gossipend - gossipstart) + 1);
			InitQTextMsg__Fi(lVar1 + gossipstart);
		}
		else {
			iVar4 = 0;
			iVar5 = 0;
			do {
				if ((((&quests[0]._qactive)[iVar5] == '\x02') && ((&Qtalklist)[talker * 0x10 + iVar4] != -1)
						) && ((&quests[0]._qlog)[iVar5] != '\0')) {
					if (iVar3 == stextsel) {
						InitQTextMsg__Fi((&Qtalklist)[talker * 0x10 + iVar4]);
					}
					iVar3 = iVar3 + 1;
				}
				iVar4 = iVar4 + 1;
				iVar5 = iVar5 + 0x14;
			} while (iVar4 < 0x10);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_TavernEnter__Fv()
 // line 3557, offset 0x80073f08
	/* begin block 1 */
		// Start line: 3558
		// Start offset: 0x80073F08
	/* end block 1 */
	// End offset: 0x80073F6C
	// End Line: 3570

	/* begin block 2 */
		// Start line: 7814
	/* end block 2 */
	// End Line: 7815

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_TavernEnter__Fv(void)

{
	WFlag = '\0';
	if (stextsel == 9) {
		talker = 3;
		stextshold = 0x15;
		gossipstart = 0xa1;
		stextlhold = stextsel;
		gossipend = 0xa8;
		StartStore__Fc('\x13');
	}
	else {
		if (stextsel == 0xb) {
			stextflag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_BarmaidEnter__Fv()
 // line 3576, offset 0x80073f7c
	/* begin block 1 */
		// Start line: 3577
		// Start offset: 0x80073F7C
	/* end block 1 */
	// End offset: 0x80073FE0
	// End Line: 3590

	/* begin block 2 */
		// Start line: 7856
	/* end block 2 */
	// End Line: 7857

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_BarmaidEnter__Fv(void)

{
	WFlag = '\0';
	if (stextsel == 9) {
		talker = 7;
		stextshold = 0x17;
		gossipstart = 0xb4;
		stextlhold = stextsel;
		gossipend = 0xbb;
		StartStore__Fc('\x13');
	}
	else {
		if (stextsel == 0xb) {
			stextflag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_DrunkEnter__Fv()
 // line 3596, offset 0x80073ff0
	/* begin block 1 */
		// Start line: 3597
		// Start offset: 0x80073FF0
	/* end block 1 */
	// End offset: 0x80074054
	// End Line: 3609

	/* begin block 2 */
		// Start line: 7901
	/* end block 2 */
	// End Line: 7902

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_DrunkEnter__Fv(void)

{
	WFlag = '\0';
	if (stextsel == 9) {
		talker = 5;
		stextshold = 0x16;
		gossipstart = 0xc9;
		stextlhold = stextsel;
		gossipend = 0xd3;
		StartStore__Fc('\x13');
	}
	else {
		if (stextsel == 0xb) {
			stextflag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextEnter__Fv()
 // line 3615, offset 0x80074064
	/* begin block 1 */
		// Start line: 3616
		// Start offset: 0x80074064
	/* end block 1 */
	// End offset: 0x80074218
	// End Line: 3680

	/* begin block 2 */
		// Start line: 7943
	/* end block 2 */
	// End Line: 7944

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextEnter__Fv(void)

{
	PlaySFX__Fi(IS_TITLSLCT);
	switch((int)(((uint)(byte)stextflag - 1) * 0x1000000) >> 0x18) {
	case 0:
		S_SmithEnter__Fv();
		break;
	case 1:
		S_SBuyEnter__Fv();
		break;
	case 2:
		S_SSellEnter__Fv();
		break;
	case 3:
		S_SRepairEnter__Fv();
		break;
	case 4:
		S_WitchEnter__Fv();
		break;
	case 5:
		S_WBuyEnter__Fv();
		break;
	case 6:
		S_WSellEnter__Fv();
		break;
	case 7:
		S_WRechargeEnter__Fv();
		break;
	case 8:
	case 9:
	case 0x17:
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
		stextsval = stextvhold;
		break;
	case 10:
		S_ConfirmEnter__Fv();
		break;
	case 0xb:
		S_BoyEnter__Fv();
		break;
	case 0xc:
		S_BBuyEnter__Fv();
		break;
	case 0xd:
		S_HealerEnter__Fv();
		break;
	case 0xe:
		S_StoryEnter__Fv();
		break;
	case 0xf:
		S_HBuyEnter__Fv();
		break;
	case 0x10:
		S_SIDEnter__Fv();
		break;
	case 0x11:
		S_SPBuyEnter__Fv();
		break;
	case 0x12:
		S_TalkEnter__Fv();
		break;
	case 0x13:
		StartStore__Fc('\x11');
		break;
	case 0x14:
		S_TavernEnter__Fv();
		break;
	case 0x15:
		S_DrunkEnter__Fv();
		break;
	case 0x16:
		S_BarmaidEnter__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckStoreBtn__Fv()
 // line 3687, offset 0x80074228
	/* begin block 1 */
		// Start line: 3688
		// Start offset: 0x80074228
		// Variables:
	// 		struct CPad *Pad; // $s0
	/* end block 1 */
	// End offset: 0x80074300
	// End Line: 3793

	/* begin block 2 */
		// Start line: 8091
	/* end block 2 */
	// End Line: 8092

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckStoreBtn__Fv(void)

{
	ushort uVar1;
	CPad *this;
	
	if ((CDWAIT == (void *)0x0) && (qtextflag == '\0')) {
		this = PAD_GetPad__FiUc(options_pad,'\0');
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 1) != 0) {
			STextUp__Fv();
		}
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 2) != 0) {
			STextDown__Fv();
		}
		uVar1 = GetDown__C4CPad(this);
		if (((uVar1 & 0x40) != 0) && (stextsel != -1)) {
			STextEnter__Fv();
		}
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 0x100) != 0) {
			STextESC__Fv();
		}
		if (stextflag == '\0') {
			options_pad = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseStoreBtn__Fv()
 // line 3798, offset 0x80074314
	/* begin block 1 */
		// Start line: 3799
		// Start offset: 0x80074314
	/* end block 1 */
	// End offset: 0x80074320
	// End Line: 3801

	/* begin block 2 */
		// Start line: 8314
	/* end block 2 */
	// End Line: 8315

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ReleaseStoreBtn__Fv(void)

{
	stextscrlubtn = -1;
	stextscrldbtn = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.pSTextBoxCels()
 // line 3875, offset 0x80074328
	/* begin block 1 */
		// Start line: 3876
		// Start offset: 0x80074328
	/* end block 1 */
	// End offset: 0x80074340
	// End Line: 3876

	/* begin block 2 */
		// Start line: 8467
	/* end block 2 */
	// End Line: 8468

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_pSTextBoxCels(void)

{
	___6Dialog(&SBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.pSTextBoxCels()
 // line 3875, offset 0x80074350
	/* begin block 1 */
		// Start line: 3876
		// Start offset: 0x80074350
	/* end block 1 */
	// End offset: 0x80074368
	// End Line: 3876

	/* begin block 2 */
		// Start line: 8467
	/* end block 2 */
	// End Line: 8468

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_pSTextBoxCels(void)

{
	__6Dialog(&SBack);
	return;
}





