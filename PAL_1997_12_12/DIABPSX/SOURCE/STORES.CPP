#include "THISDUST.H"
#include "STORES.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeStoreMem__Fv()
 // line 158, offset 0x800633e8
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x800633E8
	/* end block 1 */
	// End offset: 0x800633E8
	// End Line: 159

	/* begin block 2 */
		// Start line: 317
	/* end block 2 */
	// End Line: 318

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeStoreMem__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSTextBack__Fv()
 // line 167, offset 0x800633f0
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x800633F0
	/* end block 1 */
	// End offset: 0x8006344C
	// End Line: 171

	/* begin block 2 */
		// Start line: 334
	/* end block 2 */
	// End Line: 335

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSTextBack__Fv(void)

{
	SetBorder__6Dialogi(&SBack,0x30);
	SetRGB__6DialogUcUcUc(&SBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&SBack,0x14,0x18,0x118,0xc9);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintSString__FiiUcPcci(int x /*$s3*/, int y /*$s0*/, unsigned char cjustflag /*stack -48*/, char *str /*$s7*/, int col /*stack 16*/, int val /*stack 20*/)
 // line 175, offset 0x80063460
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x80063460
		// Variables:
	// 		int xx; // $s5
	// 		int yy; // $s3
	// 		char valstr[32]; // stack offset -80
	// 		int SpinnerY; // $fp
	// 		unsigned char R; // $s4
	// 		unsigned char G; // $s2
	// 		unsigned char B; // $s1
	// 		static unsigned char DaveFix; // offset 0x8012b508
	/* end block 1 */
	// End offset: 0x80063804
	// End Line: 251

	/* begin block 2 */
		// Start line: 351
	/* end block 2 */
	// End Line: 352

void PrintSString__FiiUcPcci(int x,int y,uchar cjustflag,char *str,int col,int val)

{
	int iVar1;
	char *__format;
	uint B;
	uint G;
	int Y;
	uint R;
	TXT_JUST local_70;
	char acStack80 [32];
	uchar local_30;
	
	if (SItemListFlag == '\x01') {
		SStringY = SStringYBuy0;
	}
	else {
		if (SItemListFlag < '\x02') {
			if (SItemListFlag == '\0') {
				SStringY = SStringYNorm;
			}
		}
		else {
			if (SItemListFlag == '\x02') {
				SStringY = SStringYBuy1;
			}
		}
	}
	local_30 = cjustflag;
	GM_UseTexData__Fi(0);
	if (4 < y) {
		y = y + -1;
	}
	if ((char)col == '\x01') {
		R = (uint)BLUER;
		G = (uint)BLUEG;
		B = (uint)BLUEB;
	}
	else {
		if ((char)col < '\x02') {
			if ((char)col == '\0') {
				R = (uint)WHITER;
				G = (uint)WHITEG;
				B = (uint)WHITEB;
				goto LAB_800635d8;
			}
		}
		else {
			if ((char)col == '\x02') {
				R = (uint)REDR;
				G = (uint)REDG;
				B = (uint)REDB;
				goto LAB_800635d8;
			}
		}
		R = (uint)GOLDR;
		G = (uint)GOLDG;
		B = (uint)GOLDB;
	}
LAB_800635d8:
	Y = SStringY[y] + (int)(&stext)[y]._syoff;
	iVar1 = (int)StoreBackRect.y;
	if (local_30 == '\0') {
		if (0 < val) {
			StoreBackRect.w = StoreBackRect.w + -0x40;
		}
		local_70 = JustLeft;
	}
	else {
		if (0 < val) {
			StoreBackRect.w = StoreBackRect.w + -0x40;
		}
		local_70 = JustCentre;
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,x,Y,str,local_70,&StoreBackRect,R,G,B);
	if (0 < val) {
		StoreBackRect.w = StoreBackRect.w + 0x40;
	}
	if (stextsel + -1 == y) {
		DrawSpinner__FiiUcUcUciiibiT8
							(MediumFont.MinX + -0xc,Y + iVar1,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x100,
							 &DAT_00000001);
	}
	if (0 < val) {
		__format = GetStr__Fi(STR__I);
		sprintf(acStack80,__format,val);
		StoreBackRect.w = StoreBackRect.w + -0x10;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(&MediumFont,x,Y,acStack80,JustRight,&StoreBackRect,R,G,B)
		;
		StoreBackRect.w = StoreBackRect.w + 0x10;
	}
	if (stextsel + -1 == y) {
		DrawSpinner__FiiUcUcUciiibiT8
							(MediumFont.MaxX + 4,Y + iVar1,-0x60,'@',0xf0,0x20,0x40,0,&DAT_00000001,0x100,
							 &DAT_00000001);
	}
	SStringY = SStringYNorm;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSLine__Fi(int y /*$a0*/)
 // line 257, offset 0x80063838
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x80063838
		// Variables:
	// 		int yy; // $s0
	/* end block 1 */
	// End offset: 0x800638B4
	// End Line: 265

	/* begin block 2 */
		// Start line: 541
	/* end block 2 */
	// End Line: 542

void DrawSLine__Fi(int y)

{
	int iVar1;
	int iVar2;
	
	iVar1 = (int)StoreBackRect.y;
	iVar2 = SStringY[y];
	SetBorder__6Dialogi(&SBack,0x30);
	SetRGB__6DialogUcUcUc(&SBack,BORDERR >> 1,BORDERG >> 1,BORDERB >> 1);
	Line__6Dialogiii(&SBack,(int)StoreBackRect.x,iVar2 + iVar1,(int)StoreBackRect.w);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearSText__Fii(int s /*$a0*/, int e /*$a1*/)
 // line 271, offset 0x800638cc
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x800638CC
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8006395C
	// End Line: 285

	/* begin block 2 */
		// Start line: 582
	/* end block 2 */
	// End Line: 583

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
 // line 290, offset 0x80063964
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x80063964
	/* end block 1 */
	// End offset: 0x800639AC
	// End Line: 295

	/* begin block 2 */
		// Start line: 618
	/* end block 2 */
	// End Line: 619

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
 // line 300, offset 0x800639b4
	/* begin block 1 */
		// Start line: 301
		// Start offset: 0x800639B4
	/* end block 1 */
	// End offset: 0x800639D4
	// End Line: 302

	/* begin block 2 */
		// Start line: 641
	/* end block 2 */
	// End Line: 642

void AddSTextVal__Fii(int y,int val)

{
	(&stext)[y]._sval = val;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSText__FiiUcPccUc(int x /*$a0*/, int y /*$a1*/, unsigned char j /*$s1*/, char *str /*$a3*/, int clr /*stack 16*/, int sel /*stack 20*/)
 // line 310, offset 0x800639dc
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x800639DC
	/* end block 1 */
	// End offset: 0x80063A70
	// End Line: 320

	/* begin block 2 */
		// Start line: 660
	/* end block 2 */
	// End Line: 661

void AddSText__FiiUcPccUc(int x,int y,uchar j,char *str,int clr,int sel)

{
	(&stext)[y]._sx = (char)x;
	(&stext)[y]._syoff = '\0';
	strcpy((&stext)[y]._sstr,str);
	(&stext)[y]._sjust = j;
	(&stext)[y]._sline = '\0';
	(&stext)[y]._sclr = (char)clr;
	(&stext)[y]._ssel = (uchar)sel;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x /*$s2*/, int l /*$s6*/, char iclr /*$s7*/)
 // line 324, offset 0x80063a90
	/* begin block 1 */
		// Start line: 325
		// Start offset: 0x80063A90
		// Variables:
	// 		char sstr[128]; // stack offset -168
	// 		int li; // $s5
	/* end block 1 */
	// End offset: 0x80063EE8
	// End Line: 417

	/* begin block 2 */
		// Start line: 699
	/* end block 2 */
	// End Line: 700

void PrintStoreItem__FPC10ItemStructic(ItemStruct *x,int l,char iclr)

{
	bool bVar1;
	char cVar2;
	byte bVar3;
	short sVar4;
	char *__format;
	uint uVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	char local_a8 [128];
	
	uVar8 = 0;
	local_a8[0] = '\0';
	if (x->_iIdentified != '\0') {
		if ((x->_iMagical != '\x02') && ((int)x->_iPrePower != -1)) {
			PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Prefix[(int)x->_iPrePower].PLPower,x);
			strcat(local_a8,tempstr);
		}
		if ((int)x->_iSufPower != -1) {
			PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Suffix[(int)x->_iSufPower].PLPower,x);
			bVar1 = local_a8[0] != '\0';
			if (bVar1) {
				strcat(local_a8,&DAT_8012b50c);
			}
			uVar8 = (uint)bVar1;
			strcat(local_a8,tempstr);
		}
	}
	if ((x->_iMiscId == 0x17) && (sVar4 = x->_iMaxCharges, (int)sVar4 != 0)) {
		__format = GetStr__Fi(STR_CHARGES___I__I);
		sprintf(tempstr,__format,(int)x->_iCharges,(int)sVar4);
		if (local_a8[0] != '\0') {
			strcat(local_a8,&DAT_8012b50c);
			uVar8 = uVar8 + 1;
		}
		strcat(local_a8,tempstr);
	}
	if (local_a8[0] != '\0') {
		AddSText__FiiUcPccUc(0xc,l,'\0',local_a8,(int)iclr,0);
		l = l + 1 + uVar8;
		uVar8 = 0;
	}
	cVar2 = x->_iClass;
	local_a8[0] = '\0';
	if (cVar2 == '\x01') {
		__format = GetStr__Fi(STR_DAMAGE___I__I__);
		sprintf(local_a8,__format,x->_iMinDam,x->_iMaxDam);
	}
	if (cVar2 == '\x02') {
		__format = GetStr__Fi(STR_ARMOR___I__);
		sprintf(local_a8,__format,(int)x->_iAC);
	}
	if (local_a8[0] != '\0') {
		strcat(local_a8,&DAT_8012b50c);
		uVar8 = uVar8 + 1;
	}
	iVar6 = x->_iMaxDur;
	if ((iVar6 == 0xff) || (iVar6 == 0)) {
		__format = GetStr__Fi(STR_INDESTRUCTIBLE___);
	}
	else {
		__format = GetStr__Fi(STR_DUR___I__I___);
		sprintf(tempstr,__format,x->_iDurability,iVar6);
		__format = tempstr;
	}
	strcat(local_a8,__format);
	if (x->_itype == 0) {
		local_a8[0] = '\0';
	}
	uVar5 = (uint)(ushort)x->_iMiscId;
	if ((((((1 < uVar5 - 0x15) && (1 < uVar5 - 2)) && (1 < uVar5 - 4)) &&
			 ((1 < uVar5 - 6 && (1 < uVar5 - 10)))) &&
			((1 < uVar5 - 0xc && ((1 < uVar5 - 0xe && (1 < uVar5 - 0x10)))))) &&
		 ((1 < uVar5 - 0x12 && (x->_iMiscId != 0x18)))) {
		strcat(local_a8,&DAT_8012b50c);
	}
	iVar6 = (int)x->_iMinStr;
	bVar3 = x->_iMinMag;
	iVar7 = (int)x->_iMinDex;
	if (iVar6 + (uint)bVar3 + iVar7 == 0) {
		__format = GetStr__Fi(STR_NO_REQUIRED_ATTRIBUTES);
	}
	else {
		__format = GetStr__Fi(STR_REQUIRED_);
		strcpy(tempstr,__format);
		if (iVar6 != 0) {
			__format = GetStr__Fi(STR__S__I_STR);
			sprintf(tempstr,__format,tempstr,iVar6);
		}
		if (bVar3 != 0) {
			__format = GetStr__Fi(STR__S__I_MAG);
			sprintf(tempstr,__format,tempstr,(uint)bVar3);
		}
		if (iVar7 != 0) {
			__format = GetStr__Fi(STR__S__I_DEX);
			sprintf(tempstr,__format,tempstr,iVar7);
		}
		__format = tempstr;
	}
	strcat(local_a8,__format);
	AddSText__FiiUcPccUc(0xc,l,'\0',local_a8,(int)iclr,0);
	if ((x->_iMagical == '\x02') && (x->_iIdentified != '\0')) {
		__format = GetStr__Fi(STR_UNIQUE_ITEM);
		AddSText__FiiUcPccUc(0xc,l + 2 + uVar8,'\0',__format,(int)iclr,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StoreAutoPlace__Fv()
 // line 424, offset 0x80063f18
	/* begin block 1 */
		// Start line: 425
		// Start offset: 0x80063F18
		// Variables:
	// 		int i; // $s0
	// 		int w; // $s2
	// 		int h; // $s3
	// 		int idx; // $v1
	// 		unsigned char done; // $a0
	/* end block 1 */
	// End offset: 0x80064514
	// End Line: 483

	/* begin block 2 */
		// Start line: 913
	/* end block 2 */
	// End Line: 914

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StoreAutoPlace__Fv(void)

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
	
	SetICursor__Fi((int)plr[myplr].HoldItem._iCurs + 0xc);
	iVar10 = icursH28;
	ii_00 = icursW28;
	uVar2 = '\0';
	if (icursW28 == 1) {
		if (icursH28 == 1) {
			if ((plr[myplr].HoldItem._iStatFlag != '\0') &&
				 ((&AllItemsUseable)[(int)plr[myplr].HoldItem.IDidx] != '\0')) {
				iVar9 = 0;
				ii = 0;
				do {
					if (*(short *)((int)&plr[myplr].SpdList[0]._itype + ii) == -1) {
						pPVar1 = plr + myplr;
						pIVar7 = &plr[myplr].HoldItem;
						piVar11 = (int *)(ii + myplr * 0x23a8 + -0x7ff1f714);
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
						} while (pIVar7 != (ItemStruct *)&(pPVar1->HoldItem)._iMinMag);
						iVar3 = pIVar6->_ivalue;
						piVar8[4] = pIVar7->_iVAdd1;
						piVar8[5] = iVar3;
						uVar2 = '\x01';
					}
					iVar9 = iVar9 + 1;
					ii = ii + 0x98;
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
					return;
				}
				iVar10 = ii_00 + 1;
				uVar2 = AutoPlace__FiiiiUc(myplr,ii_00,2,3,1);
				ii_00 = iVar10;
			} while (iVar10 < 0x13);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSmith__Fv()
 // line 489, offset 0x80064538
	/* begin block 1 */
		// Start line: 490
		// Start offset: 0x80064538
	/* end block 1 */
	// End offset: 0x800646AC
	// End Line: 504

	/* begin block 2 */
		// Start line: 1048
	/* end block 2 */
	// End Line: 1049

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSmith__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WELCOME_TO_THE);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_BLACKSMITH_S_SHOP);
	AddSText__FiiUcPccUc(0,2,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,6,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_GRISWOLD);
	AddSText__FiiUcPccUc(0,8,'\x01',str,1,1);
	str = GetStr__Fi(STR_BUY_BASIC_ITEMS);
	AddSText__FiiUcPccUc(0,9,'\x01',str,0,1);
	str = GetStr__Fi(STR_BUY_PREMIUM_ITEMS);
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	str = GetStr__Fi(STR_SELL_ITEMS);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	str = GetStr__Fi(STR_REPAIR_ITEMS);
	AddSText__FiiUcPccUc(0,0xc,'\x01',str,0,1);
	str = GetStr__Fi(STR_LEAVE_THE_SHOP);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollSBuy__Fi(int idx /*$s0*/)
 // line 509, offset 0x800646c0
	/* begin block 1 */
		// Start line: 510
		// Start offset: 0x800646C0
		// Variables:
	// 		int l; // $s1
	// 		int ls; // $s4
	// 		char iclr; // $s2
	/* end block 1 */
	// End offset: 0x80064850
	// End Line: 537

	/* begin block 2 */
		// Start line: 1088
	/* end block 2 */
	// End Line: 1089

void S_ScrollSBuy__Fi(int idx)

{
	int *piVar1;
	int iVar2;
	uint clr;
	char *str;
	ushort ItemNo;
	int y;
	ItemStruct *ItemPtr;
	
	ClearSText__Fii(5,0x15);
	y = 5;
	stextup = 5;
	iVar2 = idx * 0x98;
	ItemPtr = &smithitem + idx;
	do {
		if (*(short *)((int)&smithitem._itype + iVar2) != -1) {
			clr = (uint)((&smithitem._iMagical)[iVar2] != '\0');
			if ((&smithitem._iStatFlag)[iVar2] == '\0') {
				clr = 2;
			}
			if ((&smithitem._iMagical)[iVar2] == '\0') {
				ItemNo = *(ushort *)((int)&smithitem._iName + iVar2);
			}
			else {
				ItemNo = *(ushort *)((int)&smithitem._iIName + iVar2);
			}
			str = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemNo,StoreBackRect.w - 0x40);
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			piVar1 = (int *)((int)&smithitem._iIvalue + iVar2);
			iVar2 = iVar2 + 0x98;
			AddSTextVal__Fii(y,*piVar1);
			PrintStoreItem__FPC10ItemStructic(ItemPtr,y + 1,(char)clr);
			ItemPtr = ItemPtr + 1;
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
 // line 542, offset 0x80064878
	/* begin block 1 */
		// Start line: 543
		// Start offset: 0x80064878
	/* end block 1 */
	// End offset: 0x80064994
	// End Line: 561

	/* begin block 2 */
		// Start line: 1160
	/* end block 2 */
	// End Line: 1161

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSBuy__Fv(void)

{
	short *psVar1;
	char *__format;
	int iVar2;
	
	SItemListFlag = '\x01';
	stextsize = '\x01';
	stextscrl = '\x01';
	stextsval = 0;
	__format = GetStr__Fi(STR_I_HAVE_THESE_ITEMS_FOR_SALE_____________YOUR_GOLD____I);
	sprintf(tempstr,__format,plr[myplr]._pGold);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(2);
	S_ScrollSBuy__Fi(stextsval);
	storenumh = 0;
	if (smithitem._itype != -1) {
		iVar2 = 0x98;
		do {
			psVar1 = (short *)((int)&smithitem._itype + iVar2);
			storenumh = storenumh + 1;
			iVar2 = iVar2 + 0x98;
		} while (*psVar1 != -1);
	}
	stextsmax = storenumh + -3;
	if (stextsmax < 0) {
		stextsmax = 0;
	}
	if (storenumh == 0) {
		StartStore__Fc('\x01');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollSPBuy__Fi(int idx /*$s5*/)
 // line 566, offset 0x800649a8
	/* begin block 1 */
		// Start line: 567
		// Start offset: 0x800649A8
		// Variables:
	// 		int l; // $s1
	// 		int ls; // $s6
	// 		char iclr; // $s0
	// 		int boughtitems; // $v1

		/* begin block 1.1 */
			// Start line: 584
			// Start offset: 0x80064A20

			/* begin block 1.1.1 */
				// Start line: 584
				// Start offset: 0x80064A38

				/* begin block 1.1.1.1 */
					// Start line: 586
					// Start offset: 0x80064A4C

					/* begin block 1.1.1.1.1 */
						// Start line: 587
						// Start offset: 0x80064A64
						// Variables:
					// 		char *StrPtr; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80064B34
					// End Line: 601
				/* end block 1.1.1.1 */
				// End offset: 0x80064B44
				// End Line: 604
			/* end block 1.1.1 */
			// End offset: 0x80064B44
			// End Line: 605
		/* end block 1.1 */
		// End offset: 0x80064B54
		// End Line: 606
	/* end block 1 */
	// End offset: 0x80064B9C
	// End Line: 608

	/* begin block 2 */
		// Start line: 1211
	/* end block 2 */
	// End Line: 1212

void S_ScrollSPBuy__Fi(int idx)

{
	uint clr;
	char *str;
	int l;
	int y;
	int iVar1;
	ItemStruct *ItemPtr;
	int iVar2;
	
	ClearSText__Fii(5,0x15);
	stextup = 5;
	iVar2 = 0;
	if (idx != 0) {
		y = 0;
		do {
			if (*(short *)((int)&premiumitem._itype + y) != -1) {
				idx = idx + -1;
			}
			y = y + 0x98;
			iVar2 = iVar2 + 1;
		} while (idx != 0);
	}
	y = 5;
	iVar1 = iVar2 * 0x98;
	while ((y < 0xf && (iVar2 < 6))) {
		if (*(short *)((int)&premiumitem._itype + iVar1) == -1) {
			y = y + -8;
		}
		else {
			clr = (uint)((&premiumitem._iMagical)[iVar1] != '\0');
			if ((&premiumitem._iStatFlag)[iVar1] == '\0') {
				clr = 2;
			}
			ItemPtr = (ItemStruct *)((int)&premiumitem._iVAdd1 + iVar1);
			str = MakeItemStr__FP10ItemStructUsUs
											(ItemPtr,*(ushort *)((int)&premiumitem._iIName + iVar1),0x100);
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			AddSTextVal__Fii(y,*(int *)((int)&premiumitem._iIvalue + iVar1));
			l = GetStrWidth__5CFontPc(&MediumFont,str);
			if ((int)StoreBackRect.w + -0x40 < l) {
				l = y + 2;
			}
			else {
				l = y + 1;
			}
			PrintStoreItem__FPC10ItemStructic(ItemPtr,l,(char)clr);
			stextdown = y;
		}
		iVar1 = iVar1 + 0x98;
		iVar2 = iVar2 + 1;
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
 // line 613, offset 0x80064bc8
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x80064BC8
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80064D04
	// End Line: 644

	/* begin block 2 */
		// Start line: 1313
	/* end block 2 */
	// End Line: 1314

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
		if (*(short *)((int)&premiumitem._itype + iVar2) != -1) {
			storenumh = storenumh + 1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x98;
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
		__format = GetStr__Fi(STR_I_HAVE_THESE_PREMIUM_ITEMS_FOR_SALE_____YOUR_GOLD____I);
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
 // line 649, offset 0x80064d18
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x80064D18
	/* end block 1 */
	// End offset: 0x80064DF4
	// End Line: 661

	/* begin block 2 */
		// Start line: 1391
	/* end block 2 */
	// End Line: 1392

uchar SmithSellOk__Fi(int i)

{
	short sVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = myplr * 0x475 + i * 0x13;
	sVar1 = (&plr[0].InvList[0]._itype)[iVar3 * 4];
	if (((((sVar1 == -1) || (sVar1 == 0)) || (sVar1 == 0xb)) || ((sVar1 == 0xe || (sVar1 == 10)))) ||
		 ((&plr[0].InvList[0].IDidx)[iVar3 * 4] == 0x21)) {
		bVar2 = false;
	}
	else {
		bVar2 = true;
		if (((&plr[0].InvList[0]._iMagical)[iVar3 * 8] != '\0') &&
			 ((&plr[0].InvList[0]._iIdentified)[iVar3 * 8] != '\0')) {
			bVar2 = (&plr[0].InvList[0]._iIvalue)[iVar3 * 2] != 0;
		}
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollSSell__Fi(int idx /*$s6*/)
 // line 666, offset 0x80064dfc
	/* begin block 1 */
		// Start line: 667
		// Start offset: 0x80064DFC
		// Variables:
	// 		int l; // $s3
	// 		int ls; // $s7
	// 		int v; // $s4
	// 		char iclr; // $s2

		/* begin block 1.1 */
			// Start line: 667
			// Start offset: 0x80064DFC

			/* begin block 1.1.1 */
				// Start line: 674
				// Start offset: 0x80064E68

				/* begin block 1.1.1.1 */
					// Start line: 676
					// Start offset: 0x80064E88

					/* begin block 1.1.1.1.1 */
						// Start line: 677
						// Start offset: 0x80064EA0
						// Variables:
					// 		char *StrPtr; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80064FC0
					// End Line: 714
				/* end block 1.1.1.1 */
				// End offset: 0x80064FC0
				// End Line: 714
			/* end block 1.1.1 */
			// End offset: 0x80064FC0
			// End Line: 716
		/* end block 1.1 */
		// End offset: 0x80064FD4
		// End Line: 717
	/* end block 1 */
	// End offset: 0x80064FF0
	// End Line: 719

	/* begin block 2 */
		// Start line: 1424
	/* end block 2 */
	// End Line: 1425

void S_ScrollSSell__Fi(int idx)

{
	char cVar1;
	int iVar2;
	uint clr;
	char *str;
	int y;
	int val;
	ItemStruct *ItemPtr;
	
	ClearSText__Fii(5,0x15);
	y = 5;
	stextup = 5;
	iVar2 = idx * 0x98;
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
			val = GetStrWidth__5CFontPc(&MediumFont,str);
			if ((int)StoreBackRect.w + -0x40 < val) {
				val = y + 2;
			}
			else {
				val = y + 1;
			}
			PrintStoreItem__FPC10ItemStructic(ItemPtr,val,(char)clr);
			stextdown = y;
		}
		ItemPtr = ItemPtr + 1;
		iVar2 = iVar2 + 0x98;
		idx = idx + 1;
		y = y + 8;
	}
	stextsmax = storenumh + -2;
	if (stextsmax < 0) {
		stextsmax = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSSell__Fv()
 // line 724, offset 0x80065024
	/* begin block 1 */
		// Start line: 725
		// Start offset: 0x80065024
		// Variables:
	// 		int i; // $s0
	// 		unsigned char sellok; // $s2
	/* end block 1 */
	// End offset: 0x80065430
	// End Line: 771

	/* begin block 2 */
		// Start line: 1546
	/* end block 2 */
	// End Line: 1547

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSSell__Fv(void)

{
	bool bVar1;
	ItemStruct *pIVar2;
	uchar uVar3;
	char *__format;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;
	ItemStruct *pIVar11;
	int i;
	int iVar12;
	
	bVar1 = false;
	puVar4 = &DAT_00001be8;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + (int)puVar4) = 0xffff;
		puVar4 = puVar4 + -0x98;
	} while (-1 < (int)puVar4);
	i = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar12 = 0;
		do {
			uVar3 = SmithSellOk__Fi(i);
			if (uVar3 != '\0') {
				bVar1 = true;
				piVar8 = (int *)(iVar12 + myplr * 0x23a8 + -0x7ff20f00);
				piVar10 = piVar8;
				pIVar2 = &storehold + storenumh;
				do {
					pIVar11 = pIVar2;
					piVar9 = piVar10;
					iVar5 = piVar9[1];
					iVar6 = piVar9[2];
					iVar7 = piVar9[3];
					pIVar11->_iVAdd1 = *piVar9;
					pIVar11->_iVMult1 = iVar5;
					pIVar11->_iVAdd2 = iVar6;
					pIVar11->_iVMult2 = iVar7;
					piVar10 = piVar9 + 4;
					pIVar2 = (ItemStruct *)&pIVar11->_iSeed;
				} while (piVar10 != piVar8 + 0x24);
				iVar5 = piVar9[5];
				((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = *piVar10;
				pIVar11->_ivalue = iVar5;
				if (((&storehold)[storenumh]._iMagical != '\0') &&
					 ((&storehold)[storenumh]._iIdentified != '\0')) {
					(&storehold)[storenumh]._ivalue = (&storehold)[storenumh]._iIvalue;
				}
				iVar5 = storenumh;
				iVar6 = (&storehold)[storenumh]._ivalue >> 2;
				(&storehold)[storenumh]._ivalue = iVar6;
				if (iVar6 == 0) {
					(&storehold)[iVar5]._ivalue = 1;
				}
				iVar5 = storenumh;
				(&storehold)[storenumh]._iIvalue = (&storehold)[storenumh]._ivalue;
				(&storehidx)[iVar5] = (char)i;
				storenumh = storenumh + 1;
			}
			i = i + 1;
			iVar12 = iVar12 + 0x98;
		} while (i < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_WHICH_ITEM_IS_FOR_SALE_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_I_WANT_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SmithRepairOk__Fi(int i /*$a0*/)
 // line 778, offset 0x80065454
	/* begin block 1 */
		// Start line: 779
		// Start offset: 0x80065454
	/* end block 1 */
	// End offset: 0x800654F0
	// End Line: 787

	/* begin block 2 */
		// Start line: 1670
	/* end block 2 */
	// End Line: 1671

uchar SmithRepairOk__Fi(int i)

{
	short sVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = myplr * 0x475 + i * 0x13;
	sVar1 = (&plr[0].InvList[0]._itype)[iVar3 * 4];
	if ((((sVar1 == -1) || (sVar1 == 0)) || (sVar1 == 0xb)) || (sVar1 == 0xe)) {
		bVar2 = false;
	}
	else {
		bVar2 = (&plr[0].InvList[0]._iDurability)[iVar3 * 2] != (&plr[0].InvList[0]._iMaxDur)[iVar3 * 2]
		;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm /*$s0*/, int i /*$s1*/)
 // line 791, offset 0x800654f8
	/* begin block 1 */
		// Start line: 792
		// Start offset: 0x800654F8
		// Variables:
	// 		int v; // $a0
	/* end block 1 */
	// End offset: 0x800656C0
	// End Line: 812

	/* begin block 2 */
		// Start line: 1694
	/* end block 2 */
	// End Line: 1695

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
		DBG_Error((char *)0x0,"source/STORES.cpp",0x31a);
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
	} while (pIVar9 != (ItemStruct *)&itm->_iMinMag);
	iVar4 = pIVar8->_ivalue;
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
	pIVar7->_ivalue = iVar4;
	iVar4 = storenumh;
	if (((&storehold)[storenumh]._iMagical != '\0') && ((&storehold)[storenumh]._iIdentified != '\0'))
	{
		(&storehold)[storenumh]._ivalue = ((&storehold)[storenumh]._iIvalue * 0x1e) / 100;
	}
	iVar5 = (((((&storehold)[iVar4]._iMaxDur - (&storehold)[iVar4]._iDurability) * 100) /
					 (&storehold)[iVar4]._iMaxDur) * (&storehold)[iVar4]._ivalue) / 100;
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
 // line 817, offset 0x800656d8
	/* begin block 1 */
		// Start line: 818
		// Start offset: 0x800656D8
		// Variables:
	// 		int i; // $s0
	// 		unsigned char repairok; // $s2
	/* end block 1 */
	// End offset: 0x80065B8C
	// End Line: 876

	/* begin block 2 */
		// Start line: 1747
	/* end block 2 */
	// End Line: 1748

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSRepair__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	char *__format;
	undefined *puVar3;
	int i;
	int iVar4;
	
	bVar1 = false;
	puVar3 = &DAT_00001be8;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + (int)puVar3) = 0xffff;
		puVar3 = puVar3 + -0x98;
	} while (-1 < (int)puVar3);
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
		iVar4 = 0;
		do {
			uVar2 = SmithRepairOk__Fi(i);
			if (uVar2 != '\0') {
				bVar1 = true;
				AddStoreHoldRepair__FP10ItemStructi((ItemStruct *)(myplr * 0x23a8 + -0x7ff20f00 + iVar4),i);
			}
			i = i + 1;
			iVar4 = iVar4 + 0x98;
		} while (i < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_REPAIR_WHICH_ITEM_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_TO_REPAIR_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWitch__Fv()
 // line 884, offset 0x80065ba8
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x80065BA8
	/* end block 1 */
	// End offset: 0x80065CD4
	// End Line: 897

	/* begin block 2 */
		// Start line: 1894
	/* end block 2 */
	// End Line: 1895

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWitch__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WITCH_S_SHACK);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_ADRIA);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_BUY_ITEMS);
	AddSText__FiiUcPccUc(0,10,'\x01',str,0,1);
	str = GetStr__Fi(STR_SELL_ITEMS);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	str = GetStr__Fi(STR_RECHARGE_STAVES);
	AddSText__FiiUcPccUc(0,0xc,'\x01',str,0,1);
	str = GetStr__Fi(STR_LEAVE_THE_SHACK);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollWBuy__Fi(int idx /*$s0*/)
 // line 902, offset 0x80065ce8
	/* begin block 1 */
		// Start line: 903
		// Start offset: 0x80065CE8
		// Variables:
	// 		int l; // $s3
	// 		int ls; // $s5
	// 		char iclr; // $s2

		/* begin block 1.1 */
			// Start line: 903
			// Start offset: 0x80065CE8

			/* begin block 1.1.1 */
				// Start line: 910
				// Start offset: 0x80065D40

				/* begin block 1.1.1.1 */
					// Start line: 912
					// Start offset: 0x80065D4C

					/* begin block 1.1.1.1.1 */
						// Start line: 913
						// Start offset: 0x80065D64
						// Variables:
					// 		char *StrPtr; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80065E48
					// End Line: 937
				/* end block 1.1.1.1 */
				// End offset: 0x80065E48
				// End Line: 937
			/* end block 1.1.1 */
			// End offset: 0x80065E48
			// End Line: 937
		/* end block 1.1 */
		// End offset: 0x80065E50
		// End Line: 939
	/* end block 1 */
	// End offset: 0x80065E98
	// End Line: 940

	/* begin block 2 */
		// Start line: 1930
	/* end block 2 */
	// End Line: 1931

void S_ScrollWBuy__Fi(int idx)

{
	uint clr;
	char *str;
	int l;
	ushort ItemNo;
	int y;
	
	ClearSText__Fii(5,0x15);
	y = 5;
	stextup = 5;
	idx = idx * 0x98;
	while (y < 0xf) {
		if (*(short *)((int)&witchitem._itype + idx) != -1) {
			clr = (uint)((&witchitem._iMagical)[idx] != '\0');
			if ((&witchitem._iStatFlag)[idx] == '\0') {
				clr = 2;
			}
			if ((&witchitem._iMagical)[idx] == '\0') {
				ItemNo = *(ushort *)((int)&witchitem._iName + idx);
			}
			else {
				ItemNo = *(ushort *)((int)&witchitem._iIName + idx);
			}
			str = MakeItemStr__FP10ItemStructUsUs
											((ItemStruct *)((int)&witchitem._iVAdd1 + idx),ItemNo,0x100);
			AddSText__FiiUcPccUc(0xc,y,'\0',str,clr,1);
			AddSTextVal__Fii(y,*(int *)((int)&witchitem._iIvalue + idx));
			l = GetStrWidth__5CFontPc(&MediumFont,str);
			if ((int)StoreBackRect.w + -0x40 < l) {
				l = y + 2;
			}
			else {
				l = y + 1;
			}
			PrintStoreItem__FPC10ItemStructic((ItemStruct *)((int)&witchitem._iVAdd1 + idx),l,(char)clr);
			idx = idx + 0x98;
			stextdown = y;
		}
		y = y + 8;
	}
	if (((&stext)[stextsel]._ssel == '\0') && (stextsel != 0x16)) {
		stextsel = stextdown;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWBuy__Fv()
 // line 945, offset 0x80065ec0
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x80065EC0
	/* end block 1 */
	// End offset: 0x80065FD8
	// End Line: 966

	/* begin block 2 */
		// Start line: 2022
	/* end block 2 */
	// End Line: 2023

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWBuy__Fv(void)

{
	short *psVar1;
	char *__format;
	int iVar2;
	
	SItemListFlag = '\x02';
	stextsize = '\x01';
	stextscrl = '\x01';
	stextsval = 0;
	stextsmax = 0x14;
	__format = GetStr__Fi(STR_I_HAVE_THESE_ITEMS_FOR_SALE_____________YOUR_GOLD____I);
	sprintf(tempstr,__format,plr[myplr]._pGold);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(2);
	S_ScrollWBuy__Fi(stextsval);
	storenumh = 0;
	if (witchitem._itype != -1) {
		iVar2 = 0x98;
		do {
			psVar1 = (short *)((int)&witchitem._itype + iVar2);
			storenumh = storenumh + 1;
			iVar2 = iVar2 + 0x98;
		} while (*psVar1 != -1);
	}
	stextsmax = storenumh + -2;
	if (stextsmax < 0) {
		stextsmax = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WitchSellOk__Fi(int i /*$a0*/)
 // line 971, offset 0x80065fec
	/* begin block 1 */
		// Start line: 972
		// Start offset: 0x80065FEC
		// Variables:
	// 		unsigned char rv; // $a1
	// 		struct ItemStruct *pI; // $v1
	/* end block 1 */
	// End offset: 0x80066108
	// End Line: 992

	/* begin block 2 */
		// Start line: 2087
	/* end block 2 */
	// End Line: 2088

uchar WitchSellOk__Fi(int i)

{
	int iVar1;
	bool bVar2;
	
	if (i < 0) {
		i = ~i;
		iVar1 = -0x7ff1f714;
	}
	else {
		iVar1 = -0x7ff20f00;
	}
	iVar1 = myplr * 0x23a8 + iVar1 + i * 0x98;
	bVar2 = *(short *)(iVar1 + 0x5a) == 10 || *(short *)(iVar1 + 0x5a) == 0;
	if (((*(char *)(iVar1 + 0x7b) != '\0') && (*(char *)(iVar1 + 0x95) != '\0')) &&
		 (*(int *)(iVar1 + 0x18) == 0)) {
		bVar2 = false;
	}
	if ((uint)*(ushort *)(iVar1 + 0x5c) - 6 < 0x11) {
		bVar2 = false;
	}
	if (*(ushort *)(iVar1 + 0x5c) == 0x21) {
		bVar2 = false;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWSell__Fv()
 // line 997, offset 0x80066110
	/* begin block 1 */
		// Start line: 998
		// Start offset: 0x80066110
		// Variables:
	// 		int i; // $s0
	// 		unsigned char sellok; // $s3
	/* end block 1 */
	// End offset: 0x80066744
	// End Line: 1058

	/* begin block 2 */
		// Start line: 2134
	/* end block 2 */
	// End Line: 2135

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWSell__Fv(void)

{
	bool bVar1;
	ItemStruct *pIVar2;
	uchar uVar3;
	char *__format;
	undefined *puVar4;
	int i;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int *piVar10;
	ItemStruct *pIVar11;
	int i_00;
	int iVar12;
	
	bVar1 = false;
	puVar4 = &DAT_00001be8;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + (int)puVar4) = 0xffff;
		puVar4 = puVar4 + -0x98;
	} while (-1 < (int)puVar4);
	i_00 = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar12 = 0;
		do {
			uVar3 = WitchSellOk__Fi(i_00);
			if (uVar3 != '\0') {
				bVar1 = true;
				piVar8 = (int *)(iVar12 + myplr * 0x23a8 + -0x7ff20f00);
				piVar9 = piVar8;
				pIVar2 = &storehold + storenumh;
				do {
					pIVar11 = pIVar2;
					piVar10 = piVar9;
					i = piVar10[1];
					iVar5 = piVar10[2];
					iVar6 = piVar10[3];
					pIVar11->_iVAdd1 = *piVar10;
					pIVar11->_iVMult1 = i;
					pIVar11->_iVAdd2 = iVar5;
					pIVar11->_iVMult2 = iVar6;
					piVar9 = piVar10 + 4;
					pIVar2 = (ItemStruct *)&pIVar11->_iSeed;
				} while (piVar9 != piVar8 + 0x24);
				i = piVar10[5];
				((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = *piVar9;
				pIVar11->_ivalue = i;
				if (((&storehold)[storenumh]._iMagical != '\0') &&
					 ((&storehold)[storenumh]._iIdentified != '\0')) {
					(&storehold)[storenumh]._ivalue = (&storehold)[storenumh]._iIvalue;
				}
				i = storenumh;
				iVar5 = (&storehold)[storenumh]._ivalue >> 2;
				(&storehold)[storenumh]._ivalue = iVar5;
				if (iVar5 == 0) {
					(&storehold)[i]._ivalue = 1;
				}
				i = storenumh;
				(&storehold)[storenumh]._iIvalue = (&storehold)[storenumh]._ivalue;
				(&storehidx)[i] = (char)i_00;
				storenumh = storenumh + 1;
			}
			i_00 = i_00 + 1;
			iVar12 = iVar12 + 0x98;
		} while (i_00 < plr[myplr]._pNumInv);
	}
	i_00 = 0;
	i = -1;
	iVar12 = 0;
	do {
		if ((*(short *)((int)&plr[myplr].SpdList[0]._itype + iVar12) != -1) &&
			 (uVar3 = WitchSellOk__Fi(i), uVar3 != '\0')) {
			bVar1 = true;
			piVar8 = (int *)(iVar12 + myplr * 0x23a8 + -0x7ff1f714);
			piVar9 = piVar8;
			pIVar2 = &storehold + storenumh;
			do {
				pIVar11 = pIVar2;
				piVar10 = piVar9;
				iVar5 = piVar10[1];
				iVar6 = piVar10[2];
				iVar7 = piVar10[3];
				pIVar11->_iVAdd1 = *piVar10;
				pIVar11->_iVMult1 = iVar5;
				pIVar11->_iVAdd2 = iVar6;
				pIVar11->_iVMult2 = iVar7;
				piVar9 = piVar10 + 4;
				pIVar2 = (ItemStruct *)&pIVar11->_iSeed;
			} while (piVar9 != piVar8 + 0x24);
			iVar5 = piVar10[5];
			((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = *piVar9;
			pIVar11->_ivalue = iVar5;
			if (((&storehold)[storenumh]._iMagical != '\0') &&
				 ((&storehold)[storenumh]._iIdentified != '\0')) {
				(&storehold)[storenumh]._ivalue = (&storehold)[storenumh]._iIvalue;
			}
			iVar5 = storenumh;
			iVar6 = (&storehold)[storenumh]._ivalue >> 2;
			(&storehold)[storenumh]._ivalue = iVar6;
			if (iVar6 == 0) {
				(&storehold)[iVar5]._ivalue = 1;
			}
			iVar5 = storenumh;
			(&storehold)[storenumh]._iIvalue = (&storehold)[storenumh]._ivalue;
			(&storehidx)[iVar5] = (char)i;
			storenumh = storenumh + 1;
		}
		i = i + -1;
		i_00 = i_00 + 1;
		iVar12 = iVar12 + 0x98;
	} while (i_00 < 8);
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_WHICH_ITEM_IS_FOR_SALE_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_I_WANT_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WitchRechargeOk__Fi(int i /*$a0*/)
 // line 1066, offset 0x80066768
	/* begin block 1 */
		// Start line: 1067
		// Start offset: 0x80066768
		// Variables:
	// 		unsigned char rv; // $a2
	/* end block 1 */
	// End offset: 0x800667E8
	// End Line: 1073

	/* begin block 2 */
		// Start line: 2292
	/* end block 2 */
	// End Line: 2293

uchar WitchRechargeOk__Fi(int i)

{
	int iVar1;
	bool bVar2;
	
	iVar1 = myplr * 0x475 + i * 0x13;
	bVar2 = false;
	if ((&plr[0].InvList[0]._itype)[iVar1 * 4] == 10) {
		bVar2 = (&plr[0].InvList[0]._iCharges)[iVar1 * 4] !=
						(&plr[0].InvList[0]._iMaxCharges)[iVar1 * 4];
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm /*stack 0*/, int i /*stack 152*/)
 // line 1078, offset 0x800667f0
	/* begin block 1 */
		// Start line: 1079
		// Start offset: 0x800667F0
	/* end block 1 */
	// End offset: 0x80066968
	// End Line: 1088

	/* begin block 2 */
		// Start line: 2311
	/* end block 2 */
	// End Line: 2312

void AddStoreHoldRecharge__FG10ItemStructi(ItemStruct itm,int i)

{
	short sVar1;
	short sVar2;
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
	} while (piVar9 != (int *)&itm._iPLAC);
	iVar4 = piVar8[5];
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = *piVar9;
	pIVar7->_ivalue = iVar4;
	iVar4 = storenumh;
	sVar1 = (&storehold)[storenumh]._iMaxCharges;
	sVar2 = (&storehold)[storenumh]._iCharges;
	iVar5 = (&storehold)[storenumh]._ivalue + (&spelldata)[itm._ivalue].sStaffCost;
	(&storehold)[storenumh]._ivalue = iVar5;
	iVar5 = (((((int)sVar1 - (int)sVar2) * 100) / (int)sVar1) * iVar5) / 100 >> 1;
	(&storehold)[iVar4]._ivalue = iVar5;
	(&storehold)[iVar4]._iIvalue = iVar5;
	(&storehidx)[iVar4] = itm._iSplLvlAdd;
	storenumh = storenumh + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartWRecharge__Fv()
 // line 1093, offset 0x80066970
	/* begin block 1 */
		// Start line: 1094
		// Start offset: 0x80066970
		// Variables:
	// 		int i; // $s0
	// 		unsigned char rechargeok; // $s2
	/* end block 1 */
	// End offset: 0x80066D70
	// End Line: 1135

	/* begin block 2 */
		// Start line: 2353
	/* end block 2 */
	// End Line: 2354

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartWRecharge__Fv(void)

{
	bool bVar1;
	PlayerStruct *pPVar2;
	int *piVar3;
	uchar uVar4;
	char *__format;
	undefined *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	int *piVar11;
	int *piVar12;
	int *piVar13;
	int i;
	int local_b0;
	undefined4 local_ac;
	undefined in_stack_ffffff58 [128];
	undefined in_stack_ffffffdc [12];
	
	bVar1 = false;
	puVar5 = &DAT_00001be8;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + (int)puVar5) = 0xffff;
		i = myplr;
		puVar5 = puVar5 + -0x98;
	} while (-1 < (int)puVar5);
	if ((plr[myplr].InvBody[4]._itype == 10) &&
		 (plr[myplr].InvBody[4]._iCharges != plr[myplr].InvBody[4]._iMaxCharges)) {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar11 = &plr[myplr].InvBody[4]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
		do {
			piVar12 = piVar3;
			piVar10 = piVar11;
			iVar6 = piVar10[1];
			iVar7 = piVar10[2];
			iVar8 = piVar10[3];
			*piVar12 = *piVar10;
			piVar12[1] = iVar6;
			piVar12[2] = iVar7;
			piVar12[3] = iVar8;
			piVar11 = piVar10 + 4;
			piVar3 = piVar12 + 4;
		} while (piVar11 != (int *)&pPVar2->InvBody[4]._iMinMag);
		iVar6 = piVar10[5];
		piVar12[4] = *piVar11;
		piVar12[5] = iVar6;
		AddStoreHoldRecharge__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xffffffff,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[i].InvBody[4]._iVAdd1);
	}
	i = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar6 = 0;
		do {
			uVar4 = WitchRechargeOk__Fi(i);
			if (uVar4 != '\0') {
				bVar1 = true;
				piVar10 = (int *)(iVar6 + myplr * 0x23a8 + -0x7ff20f00);
				piVar11 = piVar10 + 4;
				piVar3 = (int *)&stack0xffffff50;
				do {
					piVar13 = piVar3;
					piVar12 = piVar11;
					iVar7 = piVar12[1];
					iVar8 = piVar12[2];
					iVar9 = piVar12[3];
					*piVar13 = *piVar12;
					piVar13[1] = iVar7;
					piVar13[2] = iVar8;
					piVar13[3] = iVar9;
					piVar11 = piVar12 + 4;
					piVar3 = piVar13 + 4;
				} while (piVar11 != piVar10 + 0x24);
				iVar7 = piVar12[5];
				piVar13[4] = *piVar11;
				piVar13[5] = iVar7;
				AddStoreHoldRecharge__FG10ItemStructi
									((ItemStruct)
									 CONCAT12140(in_stack_ffffffdc,
															 CONCAT4136(i,CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)
																											))),*piVar10);
			}
			i = i + 1;
			iVar6 = iVar6 + 0x98;
		} while (i < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_RECHARGE_WHICH_ITEM_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_TO_RECHARGE_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartNoMoney__Fv()
 // line 1143, offset 0x80066d90
	/* begin block 1 */
		// Start line: 1144
		// Start offset: 0x80066D90
	/* end block 1 */
	// End offset: 0x80066DE8
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2468
	/* end block 2 */
	// End Line: 2469

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartNoMoney__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	StartStore__Fc((char)stextshold);
	stextsize = '\x01';
	stextscrl = '\0';
	ClearSText__Fii(5,0x17);
	str = GetStr__Fi(STR_YOU_DO_NOT_HAVE_ENOUGH_GOLD);
	AddSText__FiiUcPccUc(0,0xe,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartNoRoom__Fv()
 // line 1155, offset 0x80066df8
	/* begin block 1 */
		// Start line: 1156
		// Start offset: 0x80066DF8
	/* end block 1 */
	// End offset: 0x80066E48
	// End Line: 1161

	/* begin block 2 */
		// Start line: 2496
	/* end block 2 */
	// End Line: 2497

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartNoRoom__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	StartStore__Fc((char)stextshold);
	stextscrl = '\0';
	ClearSText__Fii(5,0x17);
	str = GetStr__Fi(STR_YOU_DO_NOT_HAVE_ENOUGH_ROOM_IN_INVENTORY);
	AddSText__FiiUcPccUc(0,0xe,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartConfirm__Fv()
 // line 1166, offset 0x80066e58
	/* begin block 1 */
		// Start line: 1167
		// Start offset: 0x80066E58
		// Variables:
	// 		char iclr; // $s0
	// 		unsigned char idprint; // $v1
	/* end block 1 */
	// End offset: 0x80067194
	// End Line: 1227

	/* begin block 2 */
		// Start line: 2524
	/* end block 2 */
	// End Line: 2525

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartConfirm__Fv(void)

{
	char cVar1;
	uint uVar2;
	char *str;
	text_strs StrId;
	ushort ItemNo;
	uint clr;
	
	SItemListFlag = '\0';
	StartStore__Fc((char)stextshold);
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
	str = MakeItemStr__FP10ItemStructUsUs(&plr[myplr].HoldItem,ItemNo,StoreBackRect.w - 0x40);
	AddSText__FiiUcPccUc(0xc,6,'\0',str,clr,0);
	AddSTextVal__Fii(6,plr[myplr].HoldItem._iIvalue);
	PrintStoreItem__FPC10ItemStructic(&plr[myplr].HoldItem,7,(char)clr);
	switch(stextshold) {
	case 2:
	case 6:
	case 0x10:
	case 0x12:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_BUY_THIS_ITEM_;
		break;
	case 3:
	case 7:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_SELL_THIS_ITEM_;
		break;
	case 4:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_REPAIR_THIS_ITEM_;
		break;
	default:
		goto switchD_800670dc_caseD_5;
	case 8:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_RECHARGE_THIS_ITEM_;
		break;
	case 0xd:
		StrId = STR_DO_WE_HAVE_A_DEAL_;
		break;
	case 0x11:
		StrId = STR_ARE_YOU_SURE_YOU_WANT_TO_IDENTIFY_THIS_ITEM_;
	}
	str = GetStr__Fi(StrId);
	strcpy(tempstr,str);
switchD_800670dc_caseD_5:
	AddSText__FiiUcPccUc(0,0xe,'\x01',tempstr,0,0);
	str = GetStr__Fi(STR_YES);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	str = GetStr__Fi(STR_NO);
	AddSText__FiiUcPccUc(0,0xe,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartBoy__Fv()
 // line 1232, offset 0x800671a8
	/* begin block 1 */
		// Start line: 1233
		// Start offset: 0x800671A8
	/* end block 1 */
	// End offset: 0x80067320
	// End Line: 1251

	/* begin block 2 */
		// Start line: 2657
	/* end block 2 */
	// End Line: 2658

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartBoy__Fv(void)

{
	char *str;
	int y;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WIRT_THE_PEG_LEGGED_BOY);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	AddSLine__Fi(3);
	if (boyitem._itype == -1) {
		str = GetStr__Fi(STR_TALK_TO_WIRT);
		AddSText__FiiUcPccUc(0,8,'\x01',str,1,1);
		str = GetStr__Fi(STR_SAY_GOODBYE);
		y = 0xc;
	}
	else {
		str = GetStr__Fi(STR_TALK_TO_WIRT);
		AddSText__FiiUcPccUc(0,6,'\x01',str,1,1);
		str = GetStr__Fi(STR_I_HAVE_SOMETHING_FOR_SALE_);
		AddSText__FiiUcPccUc(0,8,'\x01',str,3,0);
		str = GetStr__Fi(STR_BUT_IT_WILL_COST_50_GOLD);
		AddSText__FiiUcPccUc(0,9,'\x01',str,3,0);
		str = GetStr__Fi(STR_JUST_TO_TAKE_A_LOOK__);
		AddSText__FiiUcPccUc(0,10,'\x01',str,3,0);
		str = GetStr__Fi(STR_WHAT_HAVE_YOU_GOT_);
		AddSText__FiiUcPccUc(0,0xc,'\x01',str,0,1);
		str = GetStr__Fi(STR_SAY_GOODBYE);
		y = 0xd;
	}
	AddSText__FiiUcPccUc(0,y,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartBBoy__Fv()
 // line 1257, offset 0x80067338
	/* begin block 1 */
		// Start line: 1258
		// Start offset: 0x80067338
		// Variables:
	// 		int iclr; // $s1
	/* end block 1 */
	// End offset: 0x8006747C
	// End Line: 1282

	/* begin block 2 */
		// Start line: 2707
	/* end block 2 */
	// End Line: 2708

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartBBoy__Fv(void)

{
	char *__format;
	ushort ItemNo;
	uint clr;
	
	SItemListFlag = '\0';
	stextsize = '\x01';
	stextscrl = '\0';
	__format = GetStr__Fi(STR_I_HAVE_THIS_ITEM_FOR_SALE_____________YOUR_GOLD____I);
	sprintf(tempstr,__format,plr[myplr]._pGold);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(2);
	clr = (uint)(boyitem._iMagical != '\0');
	if (boyitem._iStatFlag == '\0') {
		clr = 2;
	}
	ItemNo = boyitem._iName;
	if (boyitem._iMagical != '\0') {
		ItemNo = boyitem._iIName;
	}
	__format = MakeItemStr__FP10ItemStructUsUs(&boyitem,ItemNo,StoreBackRect.w - 0x40);
	AddSText__FiiUcPccUc(0xc,10,'\0',__format,clr,1);
	AddSTextVal__Fii(10,boyitem._iIvalue + (boyitem._iIvalue >> 1));
	PrintStoreItem__FPC10ItemStructic(&boyitem,0xb,(char)clr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartHealer__Fv()
 // line 1289, offset 0x80067494
	/* begin block 1 */
		// Start line: 1290
		// Start offset: 0x80067494
	/* end block 1 */
	// End offset: 0x80067654
	// End Line: 1310

	/* begin block 2 */
		// Start line: 2775
	/* end block 2 */
	// End Line: 2776

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
	str = GetStr__Fi(STR_WELCOME_TO_THE);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_HEALER_S_HOME);
	AddSText__FiiUcPccUc(0,2,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_PEPIN);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_BUY_ITEMS);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	str = GetStr__Fi(STR_LEAVE_HEALER_S_HOME);
	AddSText__FiiUcPccUc(0,0xd,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_ScrollHBuy__Fi(int idx /*$s0*/)
 // line 1315, offset 0x80067668
	/* begin block 1 */
		// Start line: 1316
		// Start offset: 0x80067668
		// Variables:
	// 		int l; // $s3
	/* end block 1 */
	// End offset: 0x800677B4
	// End Line: 1338

	/* begin block 2 */
		// Start line: 2828
	/* end block 2 */
	// End Line: 2829

void S_ScrollHBuy__Fi(int idx)

{
	int *piVar1;
	char cVar2;
	char *str;
	int iVar3;
	ItemStruct *ItemPtr;
	int y;
	
	ClearSText__Fii(5,0x15);
	y = 5;
	stextup = 5;
	idx = idx * 0x98;
	do {
		if (*(short *)((int)&healitem._itype + idx) != -1) {
			ItemPtr = (ItemStruct *)((int)&healitem._iVAdd1 + idx);
			cVar2 = (&healitem._iStatFlag)[idx];
			str = MakeItemStr__FP10ItemStructUsUs
											(ItemPtr,*(ushort *)((int)&healitem._iName + idx),StoreBackRect.w - 0x40);
			iVar3 = (uint)(cVar2 == '\0') << 0x19;
			AddSText__FiiUcPccUc(0xc,y,'\0',str,iVar3 >> 0x18,1);
			piVar1 = (int *)((int)&healitem._iIvalue + idx);
			idx = idx + 0x98;
			AddSTextVal__Fii(y,*piVar1);
			PrintStoreItem__FPC10ItemStructic(ItemPtr,y + 1,(char)((uint)iVar3 >> 0x18));
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
// void /*$ra*/ S_StartHBuy__Fv()
 // line 1343, offset 0x800677d4
	/* begin block 1 */
		// Start line: 1344
		// Start offset: 0x800677D4
	/* end block 1 */
	// End offset: 0x800678E0
	// End Line: 1361

	/* begin block 2 */
		// Start line: 2895
	/* end block 2 */
	// End Line: 2896

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartHBuy__Fv(void)

{
	short *psVar1;
	char *__format;
	int iVar2;
	
	SItemListFlag = '\x01';
	stextsize = '\x01';
	stextscrl = '\x01';
	stextsval = 0;
	__format = GetStr__Fi(STR_I_HAVE_THESE_ITEMS_FOR_SALE_____________YOUR_GOLD____I);
	sprintf(tempstr,__format,plr[myplr]._pGold);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(2);
	S_ScrollHBuy__Fi(stextsval);
	storenumh = 0;
	if (healitem._itype != -1) {
		iVar2 = 0x98;
		do {
			psVar1 = (short *)((int)&healitem._itype + iVar2);
			storenumh = storenumh + 1;
			iVar2 = iVar2 + 0x98;
		} while (*psVar1 != -1);
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
 // line 1366, offset 0x800678f4
	/* begin block 1 */
		// Start line: 1367
		// Start offset: 0x800678F4
	/* end block 1 */
	// End offset: 0x800679D0
	// End Line: 1376

	/* begin block 2 */
		// Start line: 2944
	/* end block 2 */
	// End Line: 2945

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartStory__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_THE_TOWN_ELDER);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,5,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_CAIN);
	AddSText__FiiUcPccUc(0,7,'\x01',str,1,1);
	str = GetStr__Fi(STR_IDENTIFY_AN_ITEM);
	AddSText__FiiUcPccUc(0,9,'\x01',str,0,1);
	str = GetStr__Fi(STR_SAY_GOODBYE);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IdItemOk__FP10ItemStruct(struct ItemStruct *i /*$a0*/)
 // line 1381, offset 0x800679e4
	/* begin block 1 */
		// Start line: 1382
		// Start offset: 0x800679E4
	/* end block 1 */
	// End offset: 0x80067A10
	// End Line: 1386

	/* begin block 2 */
		// Start line: 2975
	/* end block 2 */
	// End Line: 2976

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
// void /*$ra*/ AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm /*stack 0*/, int i /*stack 152*/)
 // line 1393, offset 0x80067a18
	/* begin block 1 */
		// Start line: 1394
		// Start offset: 0x80067A18
	/* end block 1 */
	// End offset: 0x80067AE4
	// End Line: 1399

	/* begin block 2 */
		// Start line: 2998
	/* end block 2 */
	// End Line: 2999

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
	} while (piVar7 != (int *)&itm._iPLAC);
	iVar2 = piVar6[5];
	((ItemStruct *)&pIVar5->_iSeed)->_iVAdd1 = *piVar7;
	pIVar5->_ivalue = iVar2;
	iVar2 = storenumh;
	(&storehold)[storenumh]._ivalue = 100;
	(&storehold)[iVar2]._iIvalue = 100;
	(&storehidx)[iVar2] = itm._iSplLvlAdd;
	storenumh = storenumh + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartSIdentify__Fv()
 // line 1404, offset 0x80067aec
	/* begin block 1 */
		// Start line: 1405
		// Start offset: 0x80067AEC
		// Variables:
	// 		int i; // $s0
	// 		unsigned char idok; // $s3
	/* end block 1 */
	// End offset: 0x8006852C
	// End Line: 1476

	/* begin block 2 */
		// Start line: 3023
	/* end block 2 */
	// End Line: 3024

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartSIdentify__Fv(void)

{
	bool bVar1;
	PlayerStruct *pPVar2;
	int *piVar3;
	uchar uVar4;
	char *__format;
	undefined *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	int *piVar11;
	int *piVar12;
	int *piVar13;
	int iVar14;
	int local_b0;
	undefined4 local_ac;
	undefined in_stack_ffffff58 [128];
	undefined in_stack_ffffffdc [12];
	
	bVar1 = false;
	puVar5 = &DAT_00001be8;
	SItemListFlag = '\x02';
	stextsize = '\x01';
	storenumh = 0;
	do {
		*(undefined2 *)((int)&storehold._itype + (int)puVar5) = 0xffff;
		puVar5 = puVar5 + -0x98;
	} while (-1 < (int)puVar5);
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[0]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[0]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xffffffff,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[0]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 6);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[6]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[6]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xfffffffe,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[6]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 4);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[4]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[4]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xfffffffd,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[4]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 5);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[5]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[5]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xfffffffc,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[5]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 1);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[1]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[1]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xfffffffb,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[1]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 2);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[2]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[2]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xfffffffa,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[2]._iVAdd1);
	}
	uVar4 = IdItemOk__FP10ItemStruct(plr[myplr].InvBody + 3);
	iVar14 = myplr;
	if (uVar4 != '\0') {
		bVar1 = true;
		pPVar2 = plr + myplr;
		piVar10 = &plr[myplr].InvBody[3]._iSeed;
		piVar3 = (int *)&stack0xffffff50;
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
		} while (piVar10 != (int *)&pPVar2->InvBody[3]._iMinMag);
		iVar6 = piVar11[5];
		piVar12[4] = *piVar10;
		piVar12[5] = iVar6;
		AddStoreHoldId__FG10ItemStructi
							((ItemStruct)
							 CONCAT12140(in_stack_ffffffdc,
													 CONCAT4136(0xfffffff9,
																			CONCAT1288(in_stack_ffffff58,CONCAT44(local_ac,local_b0)))),
							 plr[iVar14].InvBody[3]._iVAdd1);
	}
	iVar14 = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar6 = 0;
		do {
			uVar4 = IdItemOk__FP10ItemStruct((ItemStruct *)(myplr * 0x23a8 + -0x7ff20f00 + iVar6));
			if (uVar4 != '\0') {
				bVar1 = true;
				piVar11 = (int *)(iVar6 + myplr * 0x23a8 + -0x7ff20f00);
				piVar10 = piVar11 + 4;
				piVar3 = (int *)&stack0xffffff50;
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
				} while (piVar10 != piVar11 + 0x24);
				iVar7 = piVar12[5];
				piVar13[4] = *piVar10;
				piVar13[5] = iVar7;
				AddStoreHoldId__FG10ItemStructi
									((ItemStruct)
									 CONCAT12140(in_stack_ffffffdc,
															 CONCAT4136(iVar14,CONCAT1288(in_stack_ffffff58,
																														CONCAT44(local_ac,local_b0)))),*piVar11)
				;
			}
			iVar14 = iVar14 + 1;
			iVar6 = iVar6 + 0x98;
		} while (iVar14 < plr[myplr]._pNumInv);
	}
	if (bVar1) {
		stextsval = 0;
		stextsmax = plr[myplr]._pNumInv;
		stextscrl = '\x01';
		__format = GetStr__Fi(STR_IDENTIFY_WHICH_ITEM_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
		S_ScrollSSell__Fi(stextsval);
	}
	else {
		stextscrl = '\0';
		__format = GetStr__Fi(STR_YOU_HAVE_NOTHING_TO_IDENTIFY_____________YOUR_GOLD____I);
		sprintf(tempstr,__format,plr[myplr]._pGold);
		AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
		AddSLine__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartIdShow__Fv()
 // line 1484, offset 0x8006854c
	/* begin block 1 */
		// Start line: 1485
		// Start offset: 0x8006854C
		// Variables:
	// 		char iclr; // $s1
	// 		char *StrPtr; // $s0
	/* end block 1 */
	// End offset: 0x80068704
	// End Line: 1509

	/* begin block 2 */
		// Start line: 3196
	/* end block 2 */
	// End Line: 3197

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartIdShow__Fv(void)

{
	char cVar1;
	char *str;
	int iVar2;
	uint clr;
	int l;
	
	SItemListFlag = '\x02';
	StartStore__Fc((char)stextshold);
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
	str = GetStr__Fi(STR_THIS_ITEM_IS_);
	AddSText__FiiUcPccUc(0,7,'\x01',str,0,0);
	str = MakeItemStr__FP10ItemStructUsUs(&plr[myplr].HoldItem,plr[myplr].HoldItem._iIName,0x100);
	AddSText__FiiUcPccUc(0xc,0xb,'\0',str,clr,0);
	iVar2 = GetStrWidth__5CFontPc(&MediumFont,str);
	l = 0xd;
	if ((int)StoreBackRect.w < iVar2) {
		l = 0xe;
	}
	PrintStoreItem__FPC10ItemStructic(&plr[myplr].HoldItem,l,(char)clr);
	str = GetStr__Fi(STR_DONE);
	AddSText__FiiUcPccUc(0,0x12,'\x01',str,0,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartTalk__Fv()
 // line 1514, offset 0x80068720
	/* begin block 1 */
		// Start line: 1515
		// Start offset: 0x80068720
		// Variables:
	// 		int i; // $s2
	// 		int tq; // $a1
	// 		int sn; // $s1
	// 		int la; // $s6
	// 		int gl; // $s4
	/* end block 1 */
	// End offset: 0x80068924
	// End Line: 1549

	/* begin block 2 */
		// Start line: 3263
	/* end block 2 */
	// End Line: 3264

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
	__format = GetStr__Fi(STR_TALK_TO__S);
	y = 0;
	pcVar1 = GetStr__Fi(talkname[talker]);
	sprintf(tempstr,__format,pcVar1);
	AddSText__FiiUcPccUc(0,1,'\x01',tempstr,3,0);
	AddSLine__Fi(3);
	iVar4 = 0;
	iVar3 = 0;
	piVar2 = &Qtalklist + talker * 0x10;
	do {
		if ((((&quests._qactive)[iVar3] == '\x02') && (*piVar2 != -1)) &&
			 ((&quests._qlog)[iVar3] != '\0')) {
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
		if ((((&quests._qactive)[iVar3] == '\x02') && ((&Qtalklist)[talker * 0x10 + iVar5] != -1)) &&
			 ((&quests._qlog)[iVar3] != '\0')) {
			__format = GetStr__Fi(*(text_strs *)((int)&questlist[0]._qlstr + iVar6));
			AddSText__FiiUcPccUc(0,y,'\x01',__format,0,1);
			y = y + 1;
		}
		iVar6 = iVar6 + 0x10;
		iVar5 = iVar5 + 1;
		iVar3 = iVar3 + 0x14;
	} while (iVar5 < 0x10);
	__format = GetStr__Fi(STR_GOSSIP);
	AddSText__FiiUcPccUc(0,-(iVar4 >> 1) + 8,'\x01',__format,1,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartTavern__Fv()
 // line 1555, offset 0x80068950
	/* begin block 1 */
		// Start line: 1556
		// Start offset: 0x80068950
	/* end block 1 */
	// End offset: 0x80068A34
	// End Line: 1566

	/* begin block 2 */
		// Start line: 3350
	/* end block 2 */
	// End Line: 3351

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartTavern__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_WELCOME_TO_THE);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_RISING_SUN);
	AddSText__FiiUcPccUc(0,2,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_OGDEN);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_LEAVE_THE_TAVERN);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartBarMaid__Fv()
 // line 1571, offset 0x80068a48
	/* begin block 1 */
		// Start line: 1572
		// Start offset: 0x80068A48
	/* end block 1 */
	// End offset: 0x80068B08
	// End Line: 1581

	/* begin block 2 */
		// Start line: 3382
	/* end block 2 */
	// End Line: 3383

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartBarMaid__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_GILLIAN);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_GILLIAN);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_SAY_GOODBYE);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_StartDrunk__Fv()
 // line 1586, offset 0x80068b1c
	/* begin block 1 */
		// Start line: 1587
		// Start offset: 0x80068B1C
	/* end block 1 */
	// End offset: 0x80068BDC
	// End Line: 1596

	/* begin block 2 */
		// Start line: 3412
	/* end block 2 */
	// End Line: 3413

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StartDrunk__Fv(void)

{
	char *str;
	
	SItemListFlag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	str = GetStr__Fi(STR_FARNHAM_THE_DRUNK);
	AddSText__FiiUcPccUc(0,1,'\x01',str,3,0);
	str = GetStr__Fi(STR_WOULD_YOU_LIKE_TO_);
	AddSText__FiiUcPccUc(0,7,'\x01',str,3,0);
	str = GetStr__Fi(STR_TALK_TO_FARNHAM);
	AddSText__FiiUcPccUc(0,9,'\x01',str,1,1);
	str = GetStr__Fi(STR_SAY_GOODBYE);
	AddSText__FiiUcPccUc(0,0xb,'\x01',str,0,1);
	AddSLine__Fi(3);
	storenumh = 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartStore__Fc(char s /*$s1*/)
 // line 1601, offset 0x80068bf0
	/* begin block 1 */
		// Start line: 1602
		// Start offset: 0x80068BF0
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x80068EC8
	// End Line: 1674

	/* begin block 2 */
		// Start line: 3442
	/* end block 2 */
	// End Line: 3443

void StartStore__Fc(char s)

{
	uchar *puVar1;
	int iVar2;
	uchar uVar3;
	int iVar4;
	
	SItemListFlag = '\x01';
	PlaySFX__Fi(IS_TITLSLCT);
	sbookflag = '\0';
	invflag = '\0';
	chrflag = '\0';
	questlog = '\0';
	dropGoldFlag = '\0';
	ClearSText__Fii(0,0x18);
	ReleaseStoreBtn__Fv();
	switch((int)(((uint)(byte)s - 1) * 0x1000000) >> 0x18) {
	case 0:
		S_StartSmith__Fv();
		break;
	case 1:
		if (0 < storenumh) {
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
		uVar3 = S_StartSPBuy__Fv();
		if (uVar3 == '\0') {
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
	}
	stextsel = 0;
	if ((stext._ssel == '\0') && (stextsel = 1, STextStruct_ARRAY_8012d254[0]._ssel == '\0')) {
		iVar2 = 2;
		iVar4 = 0x8c;
		do {
			stextsel = iVar2;
			if (0x17 < stextsel) break;
			puVar1 = &STextStruct_ARRAY_8012d254[0]._ssel + iVar4;
			iVar2 = stextsel + 1;
			iVar4 = iVar4 + 0x8c;
		} while (*puVar1 == '\0');
	}
	if (stextsel == 0x18) {
		stextsel = -1;
	}
	stextflag = s;
	if ((s == '\x02') && (stextflag = s, storenumh == 0)) {
		stextflag = s;
		StartStore__Fc('\x01');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSText__Fv()
 // line 1682, offset 0x80068ee0
	/* begin block 1 */
		// Start line: 1683
		// Start offset: 0x80068EE0
	/* end block 1 */
	// End offset: 0x80068F10
	// End Line: 1687

	/* begin block 2 */
		// Start line: 3612
	/* end block 2 */
	// End Line: 3613

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
 // line 1691, offset 0x80068f20
	/* begin block 1 */
		// Start line: 1692
		// Start offset: 0x80068F20
	/* end block 1 */
	// End offset: 0x80068FD8
	// End Line: 1706

	/* begin block 2 */
		// Start line: 3630
	/* end block 2 */
	// End Line: 3631

void DrawSTextTSK__FP4TASK(TASK *T)

{
	undefined *puVar1;
	
	InStoreFlag = '\x01';
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	while ((stextflag != '\0' && (puVar1 = (undefined *)GLUE_Finished__Fv(), puVar1 != &DAT_00000001))
				) {
		if (qtextflag == '\0') {
			DoThatDrawSText__Fv();
		}
		TSK_Sleep(1);
	}
	if (qtextflag == '\0') {
		DoThatDrawSText__Fv();
	}
	InStoreFlag = '\0';
	GLUE_ResumeGame__Fv();
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoThatDrawSText__Fv()
 // line 1709, offset 0x80068fe8
	/* begin block 1 */
		// Start line: 1710
		// Start offset: 0x80068FE8
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8006917C
	// End Line: 1763

	/* begin block 2 */
		// Start line: 3667
	/* end block 2 */
	// End Line: 3668

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoThatDrawSText__Fv(void)

{
	int iVar1;
	int y;
	
	StoreBackRect.x = 0x14;
	StoreBackRect.y = 0x18;
	StoreBackRect.w = 0x118;
	StoreBackRect.h = 0xc9;
	if (stextscrl == '\0') goto LAB_800690c0;
	switch((int)(((uint)(byte)stextflag - 2) * 0x1000000) >> 0x18) {
	case 0:
		y = 0;
		S_ScrollSBuy__Fi(stextsval);
		iVar1 = 0;
		break;
	case 1:
	case 2:
	case 5:
	case 6:
	case 0xf:
		y = 0;
		S_ScrollSSell__Fi(stextsval);
		iVar1 = 0;
		break;
	case 4:
		y = 0;
		S_ScrollWBuy__Fi(stextsval);
		iVar1 = 0;
		break;
	case 0xe:
		S_ScrollHBuy__Fi(stextsval);
	default:
LAB_800690c0:
		y = 0;
		iVar1 = 0;
		break;
	case 0x10:
		y = 0;
		S_ScrollSPBuy__Fi(stextsval);
		iVar1 = 0;
	}
	do {
		if ((&stext._sline)[iVar1] != '\0') {
			DrawSLine__Fi(y);
		}
		if (stext._sstr[iVar1] != '\0') {
			PrintSString__FiiUcPcci
								((int)(&stext._sx)[iVar1],y,(&stext._sjust)[iVar1],stext._sstr + iVar1,
								 (int)(&stext._sclr)[iVar1],*(int *)((int)&stext._sval + iVar1));
		}
		y = y + 1;
		iVar1 = iVar1 + 0x8c;
	} while (y < 0x18);
	if (stextsize == '\0') {
		DrawSTextBack__Fv();
	}
	else {
		DrawQTextBack__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextESC__Fv()
 // line 1770, offset 0x80069194
	/* begin block 1 */
		// Start line: 1771
		// Start offset: 0x80069194
	/* end block 1 */
	// End offset: 0x80069300
	// End Line: 1833

	/* begin block 2 */
		// Start line: 3791
	/* end block 2 */
	// End Line: 3792

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextESC__Fv(void)

{
	char s;
	
	if (qtextflag != '\0') {
		qtextflag = '\0';
		if (stextflag != '\0') goto LAB_8006920c;
LAB_80069204:
		options_pad = -1;
LAB_8006920c:
		stream_stop__Fv();
		return;
	}
	switch((int)(((uint)(byte)stextflag - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 4:
	case 0xb:
	case 0xc:
	case 0xd:
	case 0xe:
	case 0x14:
	case 0x15:
	case 0x16:
		stextflag = '\0';
		goto LAB_80069204;
	case 1:
		s = '\x01';
		goto LAB_800692bc;
	case 2:
		s = '\x01';
		goto LAB_800692a0;
	case 3:
		s = '\x01';
		goto LAB_80069284;
	case 5:
		s = '\x05';
		goto LAB_80069260;
	case 6:
		s = '\x05';
		goto LAB_800692a0;
	case 7:
		s = '\x05';
LAB_80069284:
		StartStore__Fc(s);
		stextsel = 0xc;
		break;
	case 8:
	case 9:
	case 10:
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
		stextsval = stextvhold;
		break;
	case 0xf:
		s = '\x0e';
LAB_800692a0:
		StartStore__Fc(s);
		stextsel = 0xb;
		break;
	case 0x10:
		s = '\x0f';
LAB_800692bc:
		StartStore__Fc(s);
		stextsel = 9;
		break;
	case 0x11:
		s = '\x01';
LAB_80069260:
		StartStore__Fc(s);
		stextsel = 10;
		break;
	case 0x12:
		StartStore__Fc((char)stextshold);
		stextsel = stextlhold;
		break;
	case 0x13:
		StartStore__Fc('\x11');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextUp__Fv()
 // line 1839, offset 0x80069310
	/* begin block 1 */
		// Start line: 1840
		// Start offset: 0x80069310
	/* end block 1 */
	// End offset: 0x80069488
	// End Line: 1874

	/* begin block 2 */
		// Start line: 3932
	/* end block 2 */
	// End Line: 3933

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextUp__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	
	PlaySFX__Fi(IS_TITLEMOV);
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
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ STextDown__Fv()
 // line 1883, offset 0x80069498
	/* begin block 1 */
		// Start line: 1884
		// Start offset: 0x80069498
	/* end block 1 */
	// End offset: 0x80069620
	// End Line: 1916

	/* begin block 2 */
		// Start line: 4021
	/* end block 2 */
	// End Line: 4022

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextDown__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	
	PlaySFX__Fi(IS_TITLEMOV);
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
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SmithEnter__Fv()
 // line 1927, offset 0x80069630
	/* begin block 1 */
		// Start line: 1928
		// Start offset: 0x80069630
	/* end block 1 */
	// End offset: 0x800696F4
	// End Line: 1950

	/* begin block 2 */
		// Start line: 4111
	/* end block 2 */
	// End Line: 4112

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SmithEnter__Fv(void)

{
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
 // line 1956, offset 0x80069704
	/* begin block 1 */
		// Start line: 1957
		// Start offset: 0x80069704
	/* end block 1 */
	// End offset: 0x80069778
	// End Line: 1968

	/* begin block 2 */
		// Start line: 4175
	/* end block 2 */
	// End Line: 4176

void SetGoldCurs__Fii(int pnum,int i)

{
	short sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = pnum * 0x475 + i * 0x13;
	iVar3 = (&plr[0].InvList[0]._ivalue)[iVar2 * 2];
	if (iVar3 < 0x9c4) {
		sVar1 = 4;
		if (1000 < iVar3) {
			sVar1 = 5;
		}
	}
	else {
		sVar1 = 6;
	}
	(&plr[0].InvList[0]._iCurs)[iVar2 * 4] = sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpdbarGoldCurs__Fii(int pnum /*$a0*/, int i /*$a1*/)
 // line 1975, offset 0x80069780
	/* begin block 1 */
		// Start line: 1976
		// Start offset: 0x80069780
	/* end block 1 */
	// End offset: 0x800697F4
	// End Line: 1986

	/* begin block 2 */
		// Start line: 4212
	/* end block 2 */
	// End Line: 4213

void SetSpdbarGoldCurs__Fii(int pnum,int i)

{
	short sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = pnum * 0x475 + i * 0x13;
	iVar3 = (&plr[0].SpdList[0]._ivalue)[iVar2 * 2];
	if (iVar3 < 0x9c4) {
		sVar1 = 4;
		if (1000 < iVar3) {
			sVar1 = 5;
		}
	}
	else {
		sVar1 = 6;
	}
	(&plr[0].SpdList[0]._iCurs)[iVar2 * 4] = sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TakePlrsMoney__Fl(long cost /*$s1*/)
 // line 1993, offset 0x800697fc
	/* begin block 1 */
		// Start line: 1994
		// Start offset: 0x800697FC
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80069C2C
	// End Line: 2085

	/* begin block 2 */
		// Start line: 4247
	/* end block 2 */
	// End Line: 4248

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
					iVar4 = -0x98;
					iv = -1;
				}
			}
		}
		iv = iv + 1;
		iVar4 = iVar4 + 0x98;
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
					iVar4 = -0x98;
					iv = -1;
				}
			}
			iv = iv + 1;
			iVar4 = iVar4 + 0x98;
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
								iVar4 = -0x98;
								iv = -1;
							}
						}
					}
					iv = iv + 1;
					iVar4 = iVar4 + 0x98;
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
							iVar4 = -0x98;
							iv = -1;
						}
					}
					iv = iv + 1;
					iVar4 = iVar4 + 0x98;
				} while (iv < plr[myplr]._pNumInv);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SmithBuyItem__Fv()
 // line 2093, offset 0x80069c48
	/* begin block 1 */
		// Start line: 2094
		// Start offset: 0x80069C48
		// Variables:
	// 		int idx; // $t2
	/* end block 1 */
	// End offset: 0x80069E2C
	// End Line: 2118

	/* begin block 2 */
		// Start line: 4467
	/* end block 2 */
	// End Line: 4468

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmithBuyItem__Fv(void)

{
	short *psVar1;
	int iVar2;
	ItemStruct *pIVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	ItemStruct *pIVar12;
	
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
		ItemStruct_ARRAY_800e3ea4[17]._itype = -1;
	}
	else {
		if ((&smithitem)[iVar4 + 1]._itype != -1) {
			pIVar11 = &ItemStruct_800e3e0c + iVar4;
			pIVar12 = &smithitem + iVar4;
			iVar2 = iVar4 * 0x98;
			do {
				pIVar9 = pIVar11;
				pIVar3 = pIVar12;
				do {
					pIVar10 = pIVar3;
					pIVar8 = pIVar9;
					iVar5 = pIVar8->_iVMult1;
					iVar6 = pIVar8->_iVAdd2;
					iVar7 = pIVar8->_iVMult2;
					pIVar10->_iVAdd1 = pIVar8->_iVAdd1;
					pIVar10->_iVMult1 = iVar5;
					pIVar10->_iVAdd2 = iVar6;
					pIVar10->_iVMult2 = iVar7;
					pIVar9 = (ItemStruct *)&pIVar8->_iSeed;
					pIVar3 = (ItemStruct *)&pIVar10->_iSeed;
				} while (pIVar9 != (ItemStruct *)&pIVar11->_iMinMag);
				iVar5 = pIVar8->_ivalue;
				((ItemStruct *)&pIVar10->_iSeed)->_iVAdd1 = pIVar9->_iVAdd1;
				pIVar10->_ivalue = iVar5;
				pIVar11 = pIVar11 + 1;
				pIVar12 = pIVar12 + 1;
				psVar1 = (short *)((int)&ItemStruct_ARRAY_800e3ea4[0]._itype + iVar2);
				iVar4 = iVar4 + 1;
				iVar2 = iVar2 + 0x98;
			} while (*psVar1 != -1);
		}
		(&smithitem)[iVar4]._itype = -1;
	}
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SBuyEnter__Fv()
 // line 2123, offset 0x80069e3c
	/* begin block 1 */
		// Start line: 2124
		// Start offset: 0x80069E3C
		// Variables:
	// 		int idx; // $a0
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x8006A04C
	// End Line: 2158

	/* begin block 2 */
		// Start line: 4527
	/* end block 2 */
	// End Line: 4528

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SBuyEnter__Fv(void)

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
	if (plr[myplr]._pGold < (&smithitem)[ii]._iIvalue) {
		StartStore__Fc('\t');
	}
	else {
		pIVar7 = &smithitem + ii;
		pIVar1 = &plr[myplr].HoldItem;
		do {
			pIVar8 = pIVar1;
			pIVar6 = pIVar7;
			iVar3 = pIVar6->_iVMult1;
			iVar4 = pIVar6->_iVAdd2;
			iVar5 = pIVar6->_iVMult2;
			pIVar8->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar8->_iVMult1 = iVar3;
			pIVar8->_iVAdd2 = iVar4;
			pIVar8->_iVMult2 = iVar5;
			pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
		} while (pIVar7 != (ItemStruct *)&(&smithitem)[ii]._iMinMag);
		ii = pIVar6->_ivalue;
		((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar8->_ivalue = ii;
		SetCursor__Fi((int)plr[myplr].HoldItem._iCurs + 0xc);
		ii = 0;
		do {
			iVar3 = cursW;
			if (cursW < 0) {
				iVar3 = cursW + 0xf;
			}
			iVar4 = cursH;
			if (cursH < 0) {
				iVar4 = cursH + 0xf;
			}
			uVar2 = AutoPlace__FiiiiUc(myplr,ii,iVar3 >> 4,iVar4 >> 4,0);
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
// void /*$ra*/ SmithBuyPItem__Fv()
 // line 2165, offset 0x8006a060
	/* begin block 1 */
		// Start line: 2166
		// Start offset: 0x8006A060
		// Variables:
	// 		int idx; // $a2
	// 		int i; // $a1
	// 		int xx; // $v1
	/* end block 1 */
	// End offset: 0x8006A1D8
	// End Line: 2192

	/* begin block 2 */
		// Start line: 4637
	/* end block 2 */
	// End Line: 4638

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SmithBuyPItem__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	if (plr[myplr].HoldItem._iMagical == '\0') {
		plr[myplr].HoldItem._iIdentified = '\0';
	}
	StoreAutoPlace__Fv();
	iVar1 = stextlhold - stextup;
	iVar4 = 0;
	if (iVar1 < 0) {
		iVar1 = iVar1 + 7;
	}
	iVar1 = (iVar1 >> 3) + stextvhold;
	iVar3 = 0;
	if (-1 < iVar1) {
		iVar2 = 0;
		do {
			if (*(short *)((int)&premiumitem._itype + iVar2) != -1) {
				iVar1 = iVar1 + -1;
				iVar4 = iVar3;
			}
			iVar2 = iVar2 + 0x98;
			iVar3 = iVar3 + 1;
		} while (-1 < iVar1);
	}
	(&premiumitem)[iVar4]._itype = -1;
	numpremium = numpremium + -1;
	SpawnPremium__Fi((int)plr[myplr]._pLevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SPBuyEnter__Fv()
 // line 2198, offset 0x8006a1e8
	/* begin block 1 */
		// Start line: 2199
		// Start offset: 0x8006A1E8
		// Variables:
	// 		int idx; // $a1
	// 		int i; // $s0
	// 		unsigned char done; // $v1

		/* begin block 1.1 */
			// Start line: 2199
			// Start offset: 0x8006A1E8
			// Variables:
		// 		int xx; // $v1
		/* end block 1.1 */
		// End offset: 0x8006A404
		// End Line: 2238
	/* end block 1 */
	// End offset: 0x8006A404
	// End Line: 2238

	/* begin block 2 */
		// Start line: 4717
	/* end block 2 */
	// End Line: 4718

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SPBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int ii;
	int iVar3;
	char s;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	int iVar8;
	
	stextshold = 0x12;
	ii = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (ii < 0) {
		ii = ii + 7;
	}
	iVar3 = (ii >> 3) + stextsval;
	ii = 0;
	iVar8 = 0;
	if (-1 < iVar3) {
		iVar4 = 0;
		do {
			if (*(short *)((int)&premiumitem._itype + iVar4) != -1) {
				iVar3 = iVar3 + -1;
				ii = iVar8;
			}
			iVar4 = iVar4 + 0x98;
			iVar8 = iVar8 + 1;
		} while (-1 < iVar3);
	}
	if (plr[myplr]._pGold < (&premiumitem)[ii]._iIvalue) {
		StartStore__Fc('\t');
	}
	else {
		pIVar6 = &premiumitem + ii;
		pIVar1 = &plr[myplr].HoldItem;
		do {
			pIVar7 = pIVar1;
			pIVar5 = pIVar6;
			iVar3 = pIVar5->_iVMult1;
			iVar8 = pIVar5->_iVAdd2;
			iVar4 = pIVar5->_iVMult2;
			pIVar7->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar7->_iVMult1 = iVar3;
			pIVar7->_iVAdd2 = iVar8;
			pIVar7->_iVMult2 = iVar4;
			pIVar6 = (ItemStruct *)&pIVar5->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
		} while (pIVar6 != (ItemStruct *)&(&premiumitem)[ii]._iMinMag);
		ii = pIVar5->_ivalue;
		((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar6->_iVAdd1;
		pIVar7->_ivalue = ii;
		SetCursor__Fi((int)plr[myplr].HoldItem._iCurs + 0xc);
		ii = 0;
		do {
			iVar3 = cursW;
			if (cursW < 0) {
				iVar3 = cursW + 0xf;
			}
			iVar8 = cursH;
			if (cursH < 0) {
				iVar8 = cursH + 0xf;
			}
			uVar2 = AutoPlace__FiiiiUc(myplr,ii,iVar3 >> 4,iVar8 >> 4,0);
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
 // line 2244, offset 0x8006a418
	/* begin block 1 */
		// Start line: 2245
		// Start offset: 0x8006A418
		// Variables:
	// 		int sz; // $s2
	// 		int numsqrs; // $s0
	// 		int i; // $a0
	// 		long cost; // $s1
	/* end block 1 */
	// End offset: 0x8006A6B4
	// End Line: 2275

	/* begin block 2 */
		// Start line: 4819
	/* end block 2 */
	// End Line: 4820

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
	SetCursor__Fi((int)(&storehold)[idx]._iCurs + 0xc);
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
		} while ((int)pcVar4 < myplr * 0x23a8 + -0x7ff1f714);
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
				iVar3 = iVar3 + 0x98;
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
 // line 2283, offset 0x8006a6d0
	/* begin block 1 */
		// Start line: 2284
		// Start offset: 0x8006A6D0
		// Variables:
	// 		int i; // $s0
	// 		int ii; // $s2
	// 		int xx; // $s3
	// 		int yy; // $s1
	// 		unsigned char done; // $a1

		/* begin block 1.1 */
			// Start line: 2284
			// Start offset: 0x8006A6D0

			/* begin block 1.1.1 */
				// Start line: 2290
				// Start offset: 0x8006A720

				/* begin block 1.1.1.1 */
					// Start line: 2290
					// Start offset: 0x8006A734

					/* begin block 1.1.1.1.1 */
						// Start line: 2295
						// Start offset: 0x8006A79C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006A8F8
					// End Line: 2306
				/* end block 1.1.1.1 */
				// End offset: 0x8006A8F8
				// End Line: 2306
			/* end block 1.1.1 */
			// End offset: 0x8006A8F8
			// End Line: 2306
		/* end block 1.1 */
		// End offset: 0x8006A900
		// End Line: 2308
	/* end block 1 */
	// End offset: 0x8006A900
	// End Line: 2308

	/* begin block 2 */
		// Start line: 4903
	/* end block 2 */
	// End Line: 4904

void PlaceStoreGold__Fl(long v)

{
	bool bVar1;
	int *piVar2;
	ItemStruct *pIVar3;
	int pnum;
	int iVar4;
	int iVar5;
	int *piVar6;
	ItemStruct *pIVar7;
	int i;
	int iVar8;
	
	bVar1 = false;
	iVar8 = 0;
	while ((iVar8 < 0x28 && (!bVar1))) {
		if (*(char *)(iVar8 + myplr * 0x23a8 + -0x7ff1f73c) == '\0') {
			i = plr[myplr]._pNumInv;
			GetGoldSeed__FiP10ItemStruct(myplr,&golditem);
			piVar2 = (int *)(i * 0x98 + myplr * 0x23a8 + -0x7ff20f00);
			pIVar3 = &golditem;
			do {
				pIVar7 = pIVar3;
				piVar6 = piVar2;
				pnum = pIVar7->_iVMult1;
				iVar4 = pIVar7->_iVAdd2;
				iVar5 = pIVar7->_iVMult2;
				*piVar6 = pIVar7->_iVAdd1;
				piVar6[1] = pnum;
				piVar6[2] = iVar4;
				piVar6[3] = iVar5;
				piVar2 = piVar6 + 4;
				pIVar3 = (ItemStruct *)&pIVar7->_iSeed;
			} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&golditem._iMinMag);
			pnum = pIVar7->_ivalue;
			piVar6[4] = golditem._144_4_;
			piVar6[5] = pnum;
			pnum = myplr;
			iVar4 = myplr * 0x23a8;
			plr[myplr]._pNumInv = plr[myplr]._pNumInv + 1;
			*(undefined *)(iVar4 + -0x7ff1f73c + iVar8) = (char)plr[pnum]._pNumInv;
			pnum = myplr;
			plr[myplr].InvList[i]._ivalue = v;
			SetGoldCurs__Fii(pnum,i);
			bVar1 = true;
		}
		iVar8 = iVar8 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StoreSellItem__Fv()
 // line 2313, offset 0x8006a934
	/* begin block 1 */
		// Start line: 2314
		// Start offset: 0x8006A934
		// Variables:
	// 		int idx; // $s0
	// 		int i; // $s0
	// 		long cost; // $s1
	/* end block 1 */
	// End offset: 0x8006AC08
	// End Line: 2370

	/* begin block 2 */
		// Start line: 5009
	/* end block 2 */
	// End Line: 5010

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
	
	iVar2 = stextlhold - stextup;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 7;
	}
	iVar2 = (iVar2 >> 3) + stextvhold;
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
		pIVar8 = &ItemStruct_800e666c + iVar2;
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
			} while (pIVar6 != (ItemStruct *)&pIVar8->_iMinMag);
			i = pIVar5->_ivalue;
			((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar7->_ivalue = i;
			pIVar8 = pIVar8 + 1;
			(&storehidx)[iVar2] = (&CHAR_00h_800e8255)[iVar2];
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
			iVar2 = iVar2 + 0x98;
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
 // line 2376, offset 0x8006ac28
	/* begin block 1 */
		// Start line: 2377
		// Start offset: 0x8006AC28
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x8006AD1C
	// End Line: 2394

	/* begin block 2 */
		// Start line: 5152
	/* end block 2 */
	// End Line: 5153

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SSellEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int idx;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 3;
	idx = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (idx < 0) {
		idx = idx + 7;
	}
	idx = (idx >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar8 = &storehold + idx;
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
	} while (pIVar8 != (ItemStruct *)&(&storehold)[idx]._iMinMag);
	iVar3 = pIVar7->_ivalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar6->_ivalue = iVar3;
	uVar2 = StoreGoldFit__Fi(idx);
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
 // line 2400, offset 0x8006ad2c
	/* begin block 1 */
		// Start line: 2401
		// Start offset: 0x8006AD2C
		// Variables:
	// 		int i; // $a1
	// 		int idx; // $a0
	/* end block 1 */
	// End offset: 0x8006AF8C
	// End Line: 2419

	/* begin block 2 */
		// Start line: 5211
	/* end block 2 */
	// End Line: 5212

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
		iVar1 = myplr * 0x475 + iVar1 * 0x13;
		(&plr[0].InvList[0]._iDurability)[iVar1 * 2] = (&plr[0].InvList[0]._iMaxDur)[iVar1 * 2];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_SRepairEnter__Fv()
 // line 2424, offset 0x8006af9c
	/* begin block 1 */
		// Start line: 2425
		// Start offset: 0x8006AF9C
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x8006B0E8
	// End Line: 2444

	/* begin block 2 */
		// Start line: 5270
	/* end block 2 */
	// End Line: 5271

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SRepairEnter__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 4;
	iVar2 = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 7;
	}
	iVar2 = (iVar2 >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar8 = &storehold + iVar2;
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
	} while (pIVar8 != (ItemStruct *)&(&storehold)[iVar2]._iMinMag);
	iVar3 = pIVar7->_ivalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar6->_ivalue = iVar3;
	s = '\v';
	if (plr[myplr]._pGold < (&storehold)[iVar2]._iIvalue) {
		s = '\t';
	}
	StartStore__Fc(s);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WitchEnter__Fv()
 // line 2450, offset 0x8006b0f8
	/* begin block 1 */
		// Start line: 2451
		// Start offset: 0x8006B0F8
	/* end block 1 */
	// End offset: 0x8006B198
	// End Line: 2468

	/* begin block 2 */
		// Start line: 5330
	/* end block 2 */
	// End Line: 5331

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WitchEnter__Fv(void)

{
	switch(stextsel) {
	case 9:
		talker = 6;
		stextshold = 5;
		stextlhold = 9;
		gossipstart = 0xd5;
		gossipend = 0xdf;
		StartStore__Fc('\x13');
		break;
	case 10:
		StartStore__Fc('\x06');
		break;
	case 0xb:
		StartStore__Fc('\a');
		break;
	case 0xc:
		StartStore__Fc('\b');
		break;
	case 0xd:
		stextflag = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WitchBuyItem__Fv()
 // line 2474, offset 0x8006b1a8
	/* begin block 1 */
		// Start line: 2475
		// Start offset: 0x8006B1A8
		// Variables:
	// 		int idx; // $s0
	/* end block 1 */
	// End offset: 0x8006B390
	// End Line: 2507

	/* begin block 2 */
		// Start line: 5383
	/* end block 2 */
	// End Line: 5384

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WitchBuyItem__Fv(void)

{
	short *psVar1;
	int iVar2;
	ItemStruct *pIVar3;
	int iVar4;
	long lVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	ItemStruct *pIVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	
	iVar4 = stextlhold - stextup;
	if (iVar4 < 0) {
		iVar4 = iVar4 + 7;
	}
	iVar4 = (iVar4 >> 3) + stextvhold;
	if (iVar4 < 3) {
		lVar5 = GetRndSeed__Fv();
		plr[myplr].HoldItem._iSeed = lVar5;
	}
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	StoreAutoPlace__Fv();
	if (iVar4 >= 3) {
		if (iVar4 == 0x13) {
			ItemStruct_ARRAY_800e4e14[17]._itype = -1;
		}
		else {
			if ((&witchitem)[iVar4 + 1]._itype != -1) {
				pIVar12 = &ItemStruct_800e4d7c + iVar4;
				pIVar13 = &witchitem + iVar4;
				iVar2 = iVar4 * 0x98;
				do {
					pIVar10 = pIVar12;
					pIVar3 = pIVar13;
					do {
						pIVar11 = pIVar3;
						pIVar9 = pIVar10;
						iVar6 = pIVar9->_iVMult1;
						iVar7 = pIVar9->_iVAdd2;
						iVar8 = pIVar9->_iVMult2;
						pIVar11->_iVAdd1 = pIVar9->_iVAdd1;
						pIVar11->_iVMult1 = iVar6;
						pIVar11->_iVAdd2 = iVar7;
						pIVar11->_iVMult2 = iVar8;
						pIVar10 = (ItemStruct *)&pIVar9->_iSeed;
						pIVar3 = (ItemStruct *)&pIVar11->_iSeed;
					} while (pIVar10 != (ItemStruct *)&pIVar12->_iMinMag);
					iVar6 = pIVar9->_ivalue;
					((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = pIVar10->_iVAdd1;
					pIVar11->_ivalue = iVar6;
					pIVar12 = pIVar12 + 1;
					pIVar13 = pIVar13 + 1;
					psVar1 = (short *)((int)&ItemStruct_ARRAY_800e4e14[0]._itype + iVar2);
					iVar4 = iVar4 + 1;
					iVar2 = iVar2 + 0x98;
				} while (*psVar1 != -1);
			}
			(&witchitem)[iVar4]._itype = -1;
		}
	}
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WBuyEnter__Fv()
 // line 2512, offset 0x8006b3a8
	/* begin block 1 */
		// Start line: 2513
		// Start offset: 0x8006B3A8
		// Variables:
	// 		int idx; // $a0
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x8006B580
	// End Line: 2544

	/* begin block 2 */
		// Start line: 5471
	/* end block 2 */
	// End Line: 5472

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int iVar3;
	char s;
	int ii;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 6;
	ii = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (ii < 0) {
		ii = ii + 7;
	}
	ii = (ii >> 3) + stextsval;
	if (plr[myplr]._pGold < (&witchitem)[ii]._iIvalue) {
		StartStore__Fc('\t');
	}
	else {
		pIVar7 = &witchitem + ii;
		pIVar1 = &plr[myplr].HoldItem;
		do {
			pIVar8 = pIVar1;
			pIVar6 = pIVar7;
			iVar3 = pIVar6->_iVMult1;
			iVar4 = pIVar6->_iVAdd2;
			iVar5 = pIVar6->_iVMult2;
			pIVar8->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar8->_iVMult1 = iVar3;
			pIVar8->_iVAdd2 = iVar4;
			pIVar8->_iVMult2 = iVar5;
			pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
		} while (pIVar7 != (ItemStruct *)&(&witchitem)[ii]._iMinMag);
		ii = pIVar6->_ivalue;
		((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar8->_ivalue = ii;
		SetCursor__Fi((int)plr[myplr].HoldItem._iCurs + 0xc);
		ii = 0;
		do {
			iVar3 = cursW;
			if (cursW < 0) {
				iVar3 = cursW + 0xf;
			}
			iVar4 = cursH;
			if (cursH < 0) {
				iVar4 = cursH + 0xf;
			}
			uVar2 = SpecialAutoPlace__FiiiiUc(myplr,ii,iVar3 >> 4,iVar4 >> 4,0);
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
// void /*$ra*/ S_WSellEnter__Fv()
 // line 2551, offset 0x8006b594
	/* begin block 1 */
		// Start line: 2552
		// Start offset: 0x8006B594
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x8006B688
	// End Line: 2569

	/* begin block 2 */
		// Start line: 5571
	/* end block 2 */
	// End Line: 5572

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WSellEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int idx;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 7;
	idx = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (idx < 0) {
		idx = idx + 7;
	}
	idx = (idx >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar8 = &storehold + idx;
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
	} while (pIVar8 != (ItemStruct *)&(&storehold)[idx]._iMinMag);
	iVar3 = pIVar7->_ivalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar6->_ivalue = iVar3;
	uVar2 = StoreGoldFit__Fi(idx);
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
 // line 2575, offset 0x8006b698
	/* begin block 1 */
		// Start line: 2576
		// Start offset: 0x8006B698
		// Variables:
	// 		int i; // $v0
	// 		int idx; // $a0
	/* end block 1 */
	// End offset: 0x8006B800
	// End Line: 2591

	/* begin block 2 */
		// Start line: 5630
	/* end block 2 */
	// End Line: 5631

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
	if ((int)(&storehidx)[iVar1] < 0) {
		plr[myplr].InvBody[4]._iCharges = plr[myplr].InvBody[4]._iMaxCharges;
	}
	else {
		iVar1 = myplr * 0x475 + (int)(&storehidx)[iVar1] * 0x13;
		(&plr[0].InvList[0]._iCharges)[iVar1 * 4] = (&plr[0].InvList[0]._iMaxCharges)[iVar1 * 4];
	}
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_WRechargeEnter__Fv()
 // line 2596, offset 0x8006b810
	/* begin block 1 */
		// Start line: 2597
		// Start offset: 0x8006B810
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x8006B95C
	// End Line: 2616

	/* begin block 2 */
		// Start line: 5683
	/* end block 2 */
	// End Line: 5684

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_WRechargeEnter__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	stextshold = 8;
	iVar2 = stextsel - stextup;
	stextlhold = stextsel;
	stextvhold = stextsval;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 7;
	}
	iVar2 = (iVar2 >> 3) + stextsval;
	pIVar1 = &plr[myplr].HoldItem;
	pIVar8 = &storehold + iVar2;
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
	} while (pIVar8 != (ItemStruct *)&(&storehold)[iVar2]._iMinMag);
	iVar3 = pIVar7->_ivalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
	pIVar6->_ivalue = iVar3;
	s = '\v';
	if (plr[myplr]._pGold < (&storehold)[iVar2]._iIvalue) {
		s = '\t';
	}
	StartStore__Fc(s);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_BoyEnter__Fv()
 // line 2622, offset 0x8006b96c
	/* begin block 1 */
		// Start line: 2623
		// Start offset: 0x8006B96C
	/* end block 1 */
	// End offset: 0x8006BA94
	// End Line: 2651

	/* begin block 2 */
		// Start line: 5742
	/* end block 2 */
	// End Line: 5743

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_BoyEnter__Fv(void)

{
	if ((boyitem._itype == -1) || (stextsel != 0xc)) {
		if (((stextsel == 6) && (boyitem._itype != -1)) || ((stextsel == 8 && (boyitem._itype == -1))))
		{
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
 // line 2657, offset 0x8006baa4
	/* begin block 1 */
		// Start line: 2658
		// Start offset: 0x8006BAA4
	/* end block 1 */
	// End offset: 0x8006BB18
	// End Line: 2669

	/* begin block 2 */
		// Start line: 5820
	/* end block 2 */
	// End Line: 5821

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BoyBuyItem__Fv(void)

{
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	StoreAutoPlace__Fv();
	boyitem._itype = -1;
	stextshold = 0xc;
	CalcPlrInv__FiUc(myplr,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealerBuyItem__Fv()
 // line 2674, offset 0x8006bb28
	/* begin block 1 */
		// Start line: 2675
		// Start offset: 0x8006BB28
		// Variables:
	// 		int idx; // $s0
	/* end block 1 */
	// End offset: 0x8006BDB8
	// End Line: 2721

	/* begin block 2 */
		// Start line: 5861
	/* end block 2 */
	// End Line: 5862

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HealerBuyItem__Fv(void)

{
	short *psVar1;
	bool bVar2;
	int iVar3;
	ItemStruct *pIVar4;
	int iVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	ItemStruct *pIVar14;
	
	iVar5 = stextlhold - stextup;
	if (iVar5 < 0) {
		iVar5 = iVar5 + 7;
	}
	iVar5 = (iVar5 >> 3) + stextvhold;
	bVar2 = iVar5 < 3;
	if (gbMaxPlayers == '\x01') {
		bVar2 = iVar5 < 2;
	}
	if (bVar2) {
		lVar6 = GetRndSeed__Fv();
		plr[myplr].HoldItem._iSeed = lVar6;
	}
	TakePlrsMoney__Fl(plr[myplr].HoldItem._iIvalue);
	if (plr[myplr].HoldItem._iMagical == '\0') {
		plr[myplr].HoldItem._iIdentified = '\0';
	}
	StoreAutoPlace__Fv();
	bVar2 = iVar5 < 3;
	if (gbMaxPlayers == '\x01') {
		bVar2 = iVar5 < 2;
	}
	if (!bVar2) {
		iVar5 = stextlhold - stextup;
		if (iVar5 < 0) {
			iVar5 = iVar5 + 3;
		}
		iVar5 = (iVar5 >> 2) + stextvhold;
		if (iVar5 == 0x13) {
			ItemStruct_ARRAY_800e5b24[17]._itype = -1;
		}
		else {
			if ((&healitem)[iVar5 + 1]._itype != -1) {
				pIVar13 = &ItemStruct_800e5a8c + iVar5;
				pIVar14 = &healitem + iVar5;
				iVar3 = iVar5 * 0x98;
				do {
					pIVar11 = pIVar13;
					pIVar4 = pIVar14;
					do {
						pIVar12 = pIVar4;
						pIVar10 = pIVar11;
						iVar7 = pIVar10->_iVMult1;
						iVar8 = pIVar10->_iVAdd2;
						iVar9 = pIVar10->_iVMult2;
						pIVar12->_iVAdd1 = pIVar10->_iVAdd1;
						pIVar12->_iVMult1 = iVar7;
						pIVar12->_iVAdd2 = iVar8;
						pIVar12->_iVMult2 = iVar9;
						pIVar11 = (ItemStruct *)&pIVar10->_iSeed;
						pIVar4 = (ItemStruct *)&pIVar12->_iSeed;
					} while (pIVar11 != (ItemStruct *)&pIVar13->_iMinMag);
					iVar7 = pIVar10->_ivalue;
					((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = pIVar11->_iVAdd1;
					pIVar12->_ivalue = iVar7;
					pIVar13 = pIVar13 + 1;
					pIVar14 = pIVar14 + 1;
					psVar1 = (short *)((int)&ItemStruct_ARRAY_800e5b24[0]._itype + iVar3);
					iVar5 = iVar5 + 1;
					iVar3 = iVar3 + 0x98;
				} while (*psVar1 != -1);
			}
			(&healitem)[iVar5]._itype = -1;
		}
		CalcPlrInv__FiUc(myplr,'\x01');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_BBuyEnter__Fv()
 // line 2726, offset 0x8006bdcc
	/* begin block 1 */
		// Start line: 2727
		// Start offset: 0x8006BDCC
		// Variables:
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x8006BF90
	// End Line: 2761

	/* begin block 2 */
		// Start line: 5965
	/* end block 2 */
	// End Line: 5966

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_BBuyEnter__Fv(void)

{
	short sVar1;
	ItemStruct *pIVar2;
	ItemStruct *pIVar3;
	uchar uVar4;
	int ii;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	if (stextsel == 10) {
		stextshold = 0xd;
		stextlhold = stextsel;
		stextvhold = stextsval;
		if (plr[myplr]._pGold < boyitem._iIvalue + (boyitem._iIvalue >> 1)) {
			StartStore__Fc('\t');
		}
		else {
			pIVar2 = &boyitem;
			pIVar3 = &plr[myplr].HoldItem;
			do {
				pIVar8 = pIVar3;
				pIVar7 = pIVar2;
				ii = pIVar7->_iVMult1;
				iVar5 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				pIVar8->_iVAdd1 = pIVar7->_iVAdd1;
				pIVar8->_iVMult1 = ii;
				pIVar8->_iVAdd2 = iVar5;
				pIVar8->_iVMult2 = iVar6;
				pIVar2 = (ItemStruct *)&pIVar7->_iSeed;
				pIVar3 = (ItemStruct *)&pIVar8->_iSeed;
			} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&boyitem._iMinMag);
			ii = pIVar7->_ivalue;
			((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = boyitem._144_4_;
			pIVar8->_ivalue = ii;
			sVar1 = plr[myplr].HoldItem._iCurs;
			ii = plr[myplr].HoldItem._iIvalue;
			plr[myplr].HoldItem._iIvalue = ii + (ii >> 1);
			SetCursor__Fi((int)sVar1 + 0xc);
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
			StartStore__Fc('\v');
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
 // line 2766, offset 0x8006bfa4
	/* begin block 1 */
		// Start line: 2767
		// Start offset: 0x8006BFA4
		// Variables:
	// 		int i; // $a1
	// 		int idx; // $v0
	/* end block 1 */
	// End offset: 0x8006C2E0
	// End Line: 2789

	/* begin block 2 */
		// Start line: 6066
	/* end block 2 */
	// End Line: 6067

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
 // line 2795, offset 0x8006c2f0
	/* begin block 1 */
		// Start line: 2796
		// Start offset: 0x8006C2F0
	/* end block 1 */
	// End offset: 0x8006C3FC
	// End Line: 2829

	/* begin block 2 */
		// Start line: 6124
	/* end block 2 */
	// End Line: 6125

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_ConfirmEnter__Fv(void)

{
	if (stextsel == 0xd) {
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
 // line 2835, offset 0x8006c40c
	/* begin block 1 */
		// Start line: 2836
		// Start offset: 0x8006C40C
	/* end block 1 */
	// End offset: 0x8006C494
	// End Line: 2854

	/* begin block 2 */
		// Start line: 6205
	/* end block 2 */
	// End Line: 6206

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
 // line 2860, offset 0x8006c4a4
	/* begin block 1 */
		// Start line: 2861
		// Start offset: 0x8006C4A4
		// Variables:
	// 		int idx; // $a0
	// 		int i; // $s0
	// 		unsigned char done; // $v1
	/* end block 1 */
	// End offset: 0x8006C69C
	// End Line: 2892

	/* begin block 2 */
		// Start line: 6257
	/* end block 2 */
	// End Line: 6258

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_HBuyEnter__Fv(void)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int iVar3;
	char s;
	int ii;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
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
		if (plr[myplr]._pGold < (&healitem)[ii]._iIvalue) {
			StartStore__Fc('\t');
		}
		else {
			pIVar7 = &healitem + ii;
			pIVar1 = &plr[myplr].HoldItem;
			do {
				pIVar8 = pIVar1;
				pIVar6 = pIVar7;
				iVar3 = pIVar6->_iVMult1;
				iVar4 = pIVar6->_iVAdd2;
				iVar5 = pIVar6->_iVMult2;
				pIVar8->_iVAdd1 = pIVar6->_iVAdd1;
				pIVar8->_iVMult1 = iVar3;
				pIVar8->_iVAdd2 = iVar4;
				pIVar8->_iVMult2 = iVar5;
				pIVar7 = (ItemStruct *)&pIVar6->_iSeed;
				pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
			} while (pIVar7 != (ItemStruct *)&(&healitem)[ii]._iMinMag);
			ii = pIVar6->_ivalue;
			((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = pIVar7->_iVAdd1;
			pIVar8->_ivalue = ii;
			SetCursor__Fi((int)plr[myplr].HoldItem._iCurs + 0xc);
			ii = 0;
			do {
				iVar3 = cursW;
				if (cursW < 0) {
					iVar3 = cursW + 0xf;
				}
				iVar4 = cursH;
				if (cursH < 0) {
					iVar4 = cursH + 0xf;
				}
				uVar2 = SpecialAutoPlace__FiiiiUc(myplr,ii,iVar3 >> 4,iVar4 >> 4,0);
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
 // line 2899, offset 0x8006c6b0
	/* begin block 1 */
		// Start line: 2900
		// Start offset: 0x8006C6B0
	/* end block 1 */
	// End offset: 0x8006C738
	// End Line: 2913

	/* begin block 2 */
		// Start line: 6348
	/* end block 2 */
	// End Line: 6349

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_StoryEnter__Fv(void)

{
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
 // line 2919, offset 0x8006c748
	/* begin block 1 */
		// Start line: 2920
		// Start offset: 0x8006C748
		// Variables:
	// 		int idx; // $t0
	/* end block 1 */
	// End offset: 0x8006C8B4
	// End Line: 2939

	/* begin block 2 */
		// Start line: 6390
	/* end block 2 */
	// End Line: 6391

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_SIDEnter__Fv(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	char s;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
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
		iVar2 = (iVar2 >> 3) + stextsval;
		pIVar1 = &plr[myplr].HoldItem;
		pIVar8 = &storehold + iVar2;
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
		} while (pIVar8 != (ItemStruct *)&(&storehold)[iVar2]._iMinMag);
		iVar3 = pIVar7->_ivalue;
		((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
		pIVar6->_ivalue = iVar3;
		s = '\v';
		if (plr[myplr]._pGold < (&storehold)[iVar2]._iIvalue) {
			s = '\t';
		}
		StartStore__Fc(s);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ S_TalkEnter__Fv()
 // line 2945, offset 0x8006c8c4
	/* begin block 1 */
		// Start line: 2946
		// Start offset: 0x8006C8C4
		// Variables:
	// 		int i; // $s0
	// 		int tq; // $a1
	// 		int sn; // $s2
	// 		int la; // $s5

		/* begin block 1.1 */
			// Start line: 2946
			// Start offset: 0x8006C8C4

			/* begin block 1.1.1 */
				// Start line: 2955
				// Start offset: 0x8006C910

				/* begin block 1.1.1.1 */
					// Start line: 2963
					// Start offset: 0x8006C990

					/* begin block 1.1.1.1.1 */
						// Start line: 2972
						// Start offset: 0x8006C9AC
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006C9AC
					// End Line: 2974
				/* end block 1.1.1.1 */
				// End offset: 0x8006CA94
				// End Line: 2988
			/* end block 1.1.1 */
			// End offset: 0x8006CA94
			// End Line: 2988
		/* end block 1.1 */
		// End offset: 0x8006CA94
		// End Line: 2988
	/* end block 1 */
	// End offset: 0x8006CA94
	// End Line: 2988

	/* begin block 2 */
		// Start line: 6447
	/* end block 2 */
	// End Line: 6448

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
			if ((((&quests._qactive)[iVar3] == '\x02') && (*piVar2 != -1)) &&
				 ((&quests._qlog)[iVar3] != '\0')) {
				iVar4 = iVar4 + 1;
			}
			piVar2 = piVar2 + 1;
			iVar5 = iVar5 + 1;
			iVar3 = iVar3 + 0x14;
		} while (iVar5 < 0x10);
		iVar3 = -(iVar4 >> 1) + 10;
		if (stextsel == -(iVar4 >> 1) + 8) {
			SetRndSeed__Fl(towner[talker]._tSeed);
			lVar1 = random__Fil(0,(gossipend - gossipstart) + 1);
			InitQTextMsg__Fi(lVar1 + gossipstart);
		}
		else {
			iVar4 = 0;
			iVar5 = 0;
			do {
				if ((((&quests._qactive)[iVar5] == '\x02') && ((&Qtalklist)[talker * 0x10 + iVar4] != -1))
					 && ((&quests._qlog)[iVar5] != '\0')) {
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
 // line 2996, offset 0x8006cabc
	/* begin block 1 */
		// Start line: 2997
		// Start offset: 0x8006CABC
	/* end block 1 */
	// End offset: 0x8006CB1C
	// End Line: 3008

	/* begin block 2 */
		// Start line: 6552
	/* end block 2 */
	// End Line: 6553

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_TavernEnter__Fv(void)

{
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
 // line 3014, offset 0x8006cb2c
	/* begin block 1 */
		// Start line: 3015
		// Start offset: 0x8006CB2C
	/* end block 1 */
	// End offset: 0x8006CB8C
	// End Line: 3027

	/* begin block 2 */
		// Start line: 6590
	/* end block 2 */
	// End Line: 6591

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_BarmaidEnter__Fv(void)

{
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
 // line 3033, offset 0x8006cb9c
	/* begin block 1 */
		// Start line: 3034
		// Start offset: 0x8006CB9C
	/* end block 1 */
	// End offset: 0x8006CBFC
	// End Line: 3045

	/* begin block 2 */
		// Start line: 6630
	/* end block 2 */
	// End Line: 6631

/* WARNING: Unknown calling convention yet parameter storage is locked */

void S_DrunkEnter__Fv(void)

{
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
 // line 3051, offset 0x8006cc0c
	/* begin block 1 */
		// Start line: 3052
		// Start offset: 0x8006CC0C
	/* end block 1 */
	// End offset: 0x8006CDFC
	// End Line: 3111

	/* begin block 2 */
		// Start line: 6670
	/* end block 2 */
	// End Line: 6671

/* WARNING: Unknown calling convention yet parameter storage is locked */

void STextEnter__Fv(void)

{
	if (qtextflag == '\0') {
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
	}
	else {
		qtextflag = '\0';
		stream_stop__Fv();
		if (stextflag == '\0') {
			options_pad = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckStoreBtn__Fv()
 // line 3118, offset 0x8006ce0c
	/* begin block 1 */
		// Start line: 3119
		// Start offset: 0x8006CE0C
		// Variables:
	// 		struct CPad *Pad; // $s0
	/* end block 1 */
	// End offset: 0x8006CF14
	// End Line: 3202

	/* begin block 2 */
		// Start line: 6805
	/* end block 2 */
	// End Line: 6806

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckStoreBtn__Fv(void)

{
	ushort uVar1;
	CPad *this;
	
	this = PAD_GetPad__FiUc(options_pad,'\0');
	if (qtextflag == '\0') {
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
		if ((uVar1 & 0x200) != 0) {
			STextESC__Fv();
		}
		if (stextflag == '\0') {
			options_pad = -1;
		}
	}
	else {
		uVar1 = GetDown__C4CPad(this);
		if ((uVar1 & 0x240) != 0) {
			qtextflag = '\0';
			if (stextflag == '\0') {
				options_pad = -1;
			}
			stream_stop__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseStoreBtn__Fv()
 // line 3207, offset 0x8006cf28
	/* begin block 1 */
		// Start line: 3208
		// Start offset: 0x8006CF28
	/* end block 1 */
	// End offset: 0x8006CF34
	// End Line: 3210

	/* begin block 2 */
		// Start line: 6988
	/* end block 2 */
	// End Line: 6989

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
 // line 3288, offset 0x8006cf3c
	/* begin block 1 */
		// Start line: 3289
		// Start offset: 0x8006CF3C
	/* end block 1 */
	// End offset: 0x8006CF54
	// End Line: 3289

	/* begin block 2 */
		// Start line: 7149
	/* end block 2 */
	// End Line: 7150

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_pSTextBoxCels(void)

{
	___6Dialog(&SBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.pSTextBoxCels()
 // line 3288, offset 0x8006cf64
	/* begin block 1 */
		// Start line: 3289
		// Start offset: 0x8006CF64
	/* end block 1 */
	// End offset: 0x8006CF7C
	// End Line: 3289

	/* begin block 2 */
		// Start line: 7149
	/* end block 2 */
	// End Line: 7150

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_pSTextBoxCels(void)

{
	__6Dialog(&SBack);
	return;
}





