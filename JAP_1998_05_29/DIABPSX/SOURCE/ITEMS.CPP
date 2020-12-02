#include "THISDUST.H"
#include "ITEMS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitItemGFX__Fv()
 // line 556, offset 0x8003e24c
	/* begin block 1 */
		// Start line: 557
		// Start offset: 0x8003E24C
	/* end block 1 */
	// End offset: 0x8003E24C
	// End Line: 557

	/* begin block 2 */
		// Start line: 1124
	/* end block 2 */
	// End Line: 1125

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitItemGFX__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ItemPlace__Fii(int xp /*$a0*/, int yp /*$a1*/)
 // line 573, offset 0x8003e254
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x8003E254
	/* end block 1 */
	// End offset: 0x8003E2E0
	// End Line: 582

	/* begin block 2 */
		// Start line: 1146
	/* end block 2 */
	// End Line: 1147

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ItemPlace__Fii(int xp,int yp)

{
	bool bVar1;
	void *pvVar2;
	
	bVar1 = false;
	if (((((&dung_map)[xp * 0x70 + yp].dMonster == 0) &&
			 (bVar1 = false, (&dung_map)[xp * 0x70 + yp].dItem == '\0')) &&
			(bVar1 = false, (&dung_map)[xp * 0x70 + yp].dObject == '\0')) &&
		 (bVar1 = false, ((&dung_map)[xp * 0x70 + yp].dFlags & 8U) == 0)) {
		pvVar2 = GetSOLID__Fii(xp,yp);
		bVar1 = pvVar2 == (void *)0x0;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddInitItems__Fv()
 // line 588, offset 0x8003e2f0
	/* begin block 1 */
		// Start line: 589
		// Start offset: 0x8003E2F0
		// Variables:
	// 		int j; // $s6

		/* begin block 1.1 */
			// Start line: 589
			// Start offset: 0x8003E2F0
			// Variables:
		// 		int i; // $s4

			/* begin block 1.1.1 */
				// Start line: 595
				// Start offset: 0x8003E32C
				// Variables:
			// 		int ii; // $s3
			// 		int xx; // $s2
			// 		int yy; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8003E434
			// End Line: 626
		/* end block 1.1 */
		// End offset: 0x8003E4CC
		// End Line: 635
	/* end block 1 */
	// End offset: 0x8003E4CC
	// End Line: 635

	/* begin block 2 */
		// Start line: 1177
	/* end block 2 */
	// End Line: 1178

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddInitItems__Fv(void)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	long lVar4;
	long s;
	int yp;
	int xp;
	int i;
	int iVar5;
	
	lVar4 = ENG_random__Fl(3);
	iVar5 = 0;
	while (cVar1 = itemavail, iVar5 < lVar4 + 3) {
		i = (int)itemavail;
		cVar2 = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = itemavail;
		itemavail = cVar2;
		do {
			s = ENG_random__Fl(0x40);
			xp = s + 0x10;
			s = ENG_random__Fl(0x40);
			yp = s + 0x10;
			uVar3 = ItemPlace__Fii(xp,yp);
		} while (uVar3 == '\0');
		item[i]._ix = (char)xp;
		item[i]._iy = (char)yp;
		(&dung_map)[xp * 0x70 + yp].dItem = cVar1 + '\x01';
		s = GetRndSeed__Fv();
		item[i]._iSeed = s;
		SetRndSeed__Fl(s);
		s = ENG_random__Fl(2);
		if (s == 0) {
			yp = 0x19;
		}
		else {
			yp = 0x18;
		}
		GetItemAttrs__Fiii(i,yp,(uint)currlevel);
		yp = FePlayerNo;
		item[i]._iCreateInfo = (ushort)currlevel | 0x8000;
		item[i]._PlrCreate = (char)yp;
		SetupItem__Fi(i);
		cVar1 = item[i]._iAnimLen;
		item[i]._iAnimFlag = '\0';
		item[i]._iSelFlag = '\x01';
		item[i]._iAnimFrame = cVar1;
		DeltaAddItem__Fi(i);
		numitems = numitems + 1;
		iVar5 = iVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitItems__Fb(void * re_init /*$a0*/)
 // line 641, offset 0x8003e4f8
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x8003E4F8
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8003E6A0
	// End Line: 678

	/* begin block 2 */
		// Start line: 1300
	/* end block 2 */
	// End Line: 1301

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitItems__Fb(void *re_init)

{
	ItemStruct *pIVar1;
	ItemStruct *pIVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	GetItemAttrs__Fiii(0,0,1);
	pIVar1 = _golditem + StorePlrNo;
	pIVar2 = item;
	do {
		pIVar7 = pIVar2;
		pIVar6 = pIVar1;
		iVar3 = pIVar7->_iVMult1;
		iVar4 = pIVar7->_iVAdd2;
		iVar5 = pIVar7->_iVMult2;
		pIVar6->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar6->_iVMult1 = iVar3;
		pIVar6->_iVAdd2 = iVar4;
		pIVar6->_iVMult2 = iVar5;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
		pIVar2 = (ItemStruct *)&pIVar7->_iSeed;
	} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar7->_ivalue;
	iVar4 = pIVar7->_iIvalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar6->_ivalue = iVar3;
	pIVar6->_iIvalue = iVar4;
	iVar4 = 0;
	iVar3 = 0;
	_golditem[StorePlrNo]._iStatFlag = '\x01';
	numitems = 0;
	do {
		(&item[0]._ix)[iVar3] = '\0';
		(&item[0]._iy)[iVar3] = '\0';
		(&item[0]._iAnimFlag)[iVar3] = '\0';
		(&item[0]._iSelFlag)[iVar3] = '\0';
		(&item[0]._iIdentified)[iVar3] = '\0';
		(&item[0]._iPostDraw)[iVar3] = '\0';
		iVar5 = FePlayerNo;
		iVar4 = iVar4 + 1;
		*(undefined2 *)((int)&item[0]._itype + iVar3) = 0;
		(&item[0]._PlrCreate)[iVar3] = (char)iVar5;
		iVar3 = iVar3 + 0x6c;
	} while (iVar4 < 0x7f);
	iVar3 = 0;
	do {
		(&itemavail)[iVar3] = (char)iVar3;
		(&itemactive)[iVar3] = '\0';
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x7f);
	if (((setlevel == '\0') && (currlevel != '\0')) && (currlevel < 0x10)) {
		AddInitItems__Fv();
	}
	uitemflag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrItemVals__FiUc(int p /*stack -176*/, unsigned char Loadgfx /*stack -168*/)
 // line 684, offset 0x8003e6b0
	/* begin block 1 */
		// Start line: 685
		// Start offset: 0x8003E6B0
		// Variables:
	// 		int mind; // $t3
	// 		int maxd; // $t2
	// 		int tac; // $t7
	// 		int g; // $a1
	// 		int i; // stack offset -48
	// 		int mi; // $v0
	// 		int bdam; // $t8
	// 		int btohit; // $t9
	// 		int bac; // stack offset -160
	// 		int sadd; // stack offset -152
	// 		int madd; // $s3
	// 		int dadd; // stack offset -144
	// 		int vadd; // $s2
	// 		int fr; // $s7
	// 		int lr; // $fp
	// 		int mr; // $s6
	// 		int dmod; // $t5
	// 		int ghit; // $t6
	// 		int lrad; // $s1
	// 		int ihp; // stack offset -136
	// 		int imana; // stack offset -128
	// 		int spllvladd; // stack offset -120
	// 		int enac; // stack offset -112
	// 		int fmin; // stack offset -104
	// 		int fmax; // stack offset -96
	// 		int lmin; // stack offset -88
	// 		int lmax; // stack offset -80
	// 		long iflgs; // stack offset -72
	// 		unsigned long spl; // $s4
	// 		unsigned long t; // $a2
	// 		struct PlayerStruct *ptrplr; // $s0

		/* begin block 1.1 */
			// Start line: 685
			// Start offset: 0x8003E6B0

			/* begin block 1.1.1 */
				// Start line: 728
				// Start offset: 0x8003E788
				// Variables:
			// 		struct ItemStruct *itm; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 746
					// Start offset: 0x8003E84C

					/* begin block 1.1.1.1.1 */
						// Start line: 749
						// Start offset: 0x8003E86C
						// Variables:
					// 		int tmpac; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003E8B4
					// End Line: 752
				/* end block 1.1.1.1 */
				// End offset: 0x8003E8B4
				// End Line: 752
			/* end block 1.1.1 */
			// End offset: 0x8003E9A4
			// End Line: 774
		/* end block 1.1 */
		// End offset: 0x8003E9B8
		// End Line: 775
	/* end block 1 */
	// End offset: 0x8003F0FC
	// End Line: 941

	/* begin block 2 */
		// Start line: 1407
	/* end block 2 */
	// End Line: 1408

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrItemVals__FiUc(int p,uchar Loadgfx)

{
	uint uVar1;
	short sVar2;
	int iVar3;
	short *psVar4;
	int iVar5;
	uint uVar6;
	int r;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uint uVar15;
	uint uVar16;
	char cVar17;
	int iVar18;
	char cVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23;
	int iVar24;
	int local_a0;
	int local_98;
	int local_90;
	int local_88;
	int local_80;
	int local_70;
	int local_68;
	int local_60;
	int local_58;
	int local_50;
	uint local_48;
	int local_30;
	
	iVar7 = 0;
	r = 0;
	iVar11 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar14 = 0;
	iVar13 = 0;
	uVar15 = 0;
	uVar16 = 0;
	iVar20 = 0;
	iVar24 = 0;
	iVar18 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar12 = 6;
	iVar8 = 0x1b0;
	local_a0 = 0;
	local_48 = 0;
	local_98 = 0;
	local_90 = 0;
	local_88 = 0;
	local_80 = 0;
	cVar19 = '\0';
	local_70 = 0;
	local_68 = 0;
	local_60 = 0;
	local_58 = 0;
	local_50 = 0;
	local_30 = 0;
	while( true ) {
		cVar17 = (char)iVar18;
		iVar5 = (int)&(&plr)[p]._pmode + iVar8;
		if (6 < local_30) break;
		if ((*(short *)(iVar5 + 0x2c) != -1) && (*(char *)(iVar5 + 0x66) != '\0')) {
			iVar7 = iVar7 + (int)*(char *)(iVar5 + 0x3b);
			r = r + (int)*(char *)(iVar5 + 0x3c);
			iVar11 = iVar11 + (int)*(char *)(iVar5 + 0x4a);
			if ((int)*(char *)(iVar5 + 0x3d) != 0) {
				uVar1 = (int)*(char *)(iVar5 + 0x3d) - 1;
				if ((int)(uVar1 * 0x4000000) < 0) {
					uVar6 = 1 << (uVar1 & 0x1f);
					uVar1 = 0;
				}
				else {
					uVar6 = 0 << (uVar1 & 0x1f);
					if (uVar1 * 0x4000000 != 0) {
						uVar6 = uVar6 | 1U >> (-uVar1 & 0x1f);
					}
					uVar1 = 1 << (uVar1 & 0x1f);
				}
				uVar16 = uVar16 | uVar6;
				uVar15 = uVar15 | uVar1;
			}
			if ((*(char *)(iVar5 + 0x51) == '\0') || (*(char *)(iVar5 + 0x69) != '\0')) {
				iVar21 = iVar21 + (int)*(short *)(iVar5 + 0x38);
				iVar22 = iVar22 + (int)*(short *)(iVar5 + 0x36);
				if (*(int *)(iVar5 + 0x20) != 0) {
					iVar3 = ((int)*(char *)(iVar5 + 0x4a) * *(int *)(iVar5 + 0x20)) / 100;
					if (iVar3 == 0) {
						iVar3 = 1;
					}
					local_a0 = local_a0 + iVar3;
				}
				local_48 = local_48 | *(uint *)(iVar5 + 0x1c);
				iVar14 = iVar14 + (int)*(char *)(iVar5 + 0x57);
				local_98 = local_98 + (int)*(char *)(iVar5 + 0x56);
				iVar13 = iVar13 + (int)*(char *)(iVar5 + 0x59);
				local_90 = local_90 + (int)*(char *)(iVar5 + 0x58);
				iVar24 = iVar24 + (int)*(char *)(iVar5 + 0x5b);
				iVar20 = iVar20 + (int)*(char *)(iVar5 + 0x5a);
				iVar9 = iVar9 + (int)*(char *)(iVar5 + 0x3a);
				iVar18 = iVar18 + (int)*(char *)(iVar5 + 0x5c);
				iVar12 = iVar12 + (int)*(char *)(iVar5 + 0x43);
				iVar10 = iVar10 + (int)*(char *)(iVar5 + 0x42);
				local_80 = local_80 + (int)*(short *)(iVar5 + 0x30);
				local_88 = local_88 + (int)*(short *)(iVar5 + 0x32);
				local_70 = local_70 + (int)*(char *)(iVar5 + 0x48);
				cVar19 = cVar19 + *(char *)(iVar5 + 0x5d);
				local_60 = local_60 + (int)*(char *)(iVar5 + 0x45);
				local_68 = local_68 + (int)*(char *)(iVar5 + 0x44);
				local_58 = local_58 + (int)*(char *)(iVar5 + 0x46);
				local_50 = local_50 + (int)*(char *)(iVar5 + 0x47);
			}
		}
		iVar8 = iVar8 + 0x6c;
		local_30 = local_30 + 1;
	}
	if ((iVar7 == 0) && (r == 0)) {
		iVar7 = 1;
		r = 1;
		if (((&plr)[p].InvBody[4]._itype == 5) && ((&plr)[p].InvBody[4]._iStatFlag != '\0')) {
			r = 3;
		}
		if (((&plr)[p].InvBody[5]._itype == 5) && ((&plr)[p].InvBody[5]._iStatFlag != '\0')) {
			r = 3;
		}
	}
	(&plr)[p]._pIMinDam = iVar7;
	(&plr)[p]._pIMaxDam = r;
	(&plr)[p]._pIAC = iVar11;
	(&plr)[p]._pIBonusDam = iVar21;
	(&plr)[p]._pIBonusToHit = iVar22;
	(&plr)[p]._pIBonusAC = local_a0;
	(&plr)[p]._pIBonusDamMod = iVar9;
	(&plr)[p]._pIGetHit = iVar10;
	(&plr)[p]._pIFlags = local_48;
	if (iVar12 < 2) {
		iVar12 = 2;
	}
	if (0xf < iVar12) {
		iVar12 = 0xf;
	}
	if ((int)(&plr)[p]._pLightRad != iVar12) {
		ChangeLightRadius__Fii((int)(&plr)[p]._plid,(int)(&DAT_000023f0 + iVar12));
		if (iVar12 < 10) {
			cVar23 = (&plr)[p]._pvid;
			r = 10;
		}
		else {
			cVar23 = (&plr)[p]._pvid;
			r = iVar12;
		}
		ChangeVisionRadius__Fii((int)cVar23,r);
		(&plr)[p]._pLightRad = (char)iVar12;
	}
	r = myplr;
	(&plr)[p]._pStrength = (&plr)[p]._pBaseStr + (short)local_98;
	if ((&plr)[r]._pStrength < 1) {
		(&plr)[r]._pStrength = 0;
	}
	r = myplr;
	(&plr)[p]._pMagic = (&plr)[p]._pBaseMag + (short)iVar14;
	if ((&plr)[r]._pMagic < 1) {
		(&plr)[r]._pMagic = 0;
	}
	r = myplr;
	(&plr)[p]._pDexterity = (&plr)[p]._pBaseDex + (short)local_90;
	if ((&plr)[r]._pDexterity < 1) {
		(&plr)[r]._pDexterity = 0;
	}
	r = myplr;
	(&plr)[p]._pVitality = (&plr)[p]._pBaseVit + (short)iVar13;
	if ((&plr)[r]._pVitality < 1) {
		(&plr)[r]._pVitality = 0;
	}
	if ((&plr)[p]._pClass == '\x01') {
		(&plr)[p]._pDamageMod =
				 (((int)(&plr)[p]._pStrength + (int)(&plr)[p]._pDexterity) * (int)(&plr)[p]._pLevel) / 200;
	}
	else {
		(&plr)[p]._pDamageMod = ((int)(&plr)[p]._pStrength * (int)(&plr)[p]._pLevel) / 100;
	}
	cVar23 = (&plr)[p]._pRSplType;
	*(uint *)&(&plr)[p]._pISpells = uVar15;
	*(uint *)((int)&(&plr)[p]._pISpells + 4) = uVar16;
	if (cVar23 == '\x03') {
		uVar1 = (&plr)[p]._pRSpell - 1;
		if ((int)(uVar1 * 0x4000000) < 0) {
			uVar15 = uVar16 >> (uVar1 & 0x1f);
		}
		else {
			uVar15 = uVar15 >> (uVar1 & 0x1f);
			if (uVar1 * 0x4000000 != 0) {
				uVar15 = uVar15 | uVar16 << (-uVar1 & 0x1f);
			}
		}
		if ((uVar15 & 1) == 0) {
			(&plr)[p]._pRSpell = -1;
			(&plr)[p]._pRSplType = '\x04';
			force_redraw = 0xff;
		}
	}
	(&plr)[p]._pISplLvlAdd = cVar19;
	(&plr)[p]._pIEnAc = local_70;
	if ((int)local_48 < 0) {
		cVar17 = '\0';
		iVar20 = 0;
		iVar24 = 0;
	}
	cVar23 = (char)iVar24;
	cVar19 = (char)iVar20;
	if ((int)local_48 >= 0 && 0x4b < iVar18) {
		cVar17 = 'K';
	}
	(&plr)[p]._pMagResist = cVar17;
	if (0x4b < iVar20) {
		cVar19 = 'K';
	}
	(&plr)[p]._pFireResist = cVar19;
	if (0x4b < iVar24) {
		cVar23 = 'K';
	}
	cVar19 = (&plr)[p]._pClass;
	(&plr)[p]._pLghtResist = cVar23;
	if (cVar19 == '\0') {
		iVar13 = iVar13 << 1;
	}
	if (cVar19 == '\x01') {
		iVar13 = iVar13 + (iVar13 >> 1);
	}
	local_88 = local_88 + iVar13 * 0x40;
	if (cVar19 == '\x02') {
		iVar14 = iVar14 << 1;
	}
	r = iVar14 << 6;
	if (cVar19 == '\x01') {
		r = (iVar14 + (iVar14 >> 1)) * 0x40;
	}
	(&plr)[p]._pHitPoints = (&plr)[p]._pHPBase + local_88;
	iVar7 = (&plr)[p]._pHitPoints;
	(&plr)[p]._pMaxHP = (&plr)[p]._pMaxHPBase + local_88;
	if (iVar7 >> 6 < 1) {
		SetPlayerHitPoints__Fii(p,0);
	}
	iVar7 = (&plr)[p]._pManaBase;
	(&plr)[p]._pIFMinDam = local_68;
	(&plr)[p]._pIFMaxDam = local_60;
	(&plr)[p]._pILMinDam = local_58;
	(&plr)[p]._pILMaxDam = local_50;
	iVar8 = (&plr)[p]._pMaxManaBase;
	(&plr)[p]._pMana = iVar7 + local_80 + r;
	(&plr)[p]._pMaxMana = iVar8 + local_80 + r;
	if ((local_48 & 1) == 0) {
		(&plr)[p]._pInfraFlag = '\0';
	}
	else {
		(&plr)[p]._pInfraFlag = '\x01';
	}
	uVar15 = 0;
	uVar16 = SEXT24((&plr)[p].InvBody[4]._itype);
	(&plr)[p]._pBlockFlag = '\0';
	(&plr)[p]._pwtype = '\0';
	if ((uVar16 != 0xffffffff) && ((&plr)[p].InvBody[4]._iClass == '\x01')) {
		uVar15 = uVar16 & -(uint)((&plr)[p].InvBody[4]._iStatFlag != '\0');
	}
	uVar1 = SEXT24((&plr)[p].InvBody[5]._itype);
	uVar16 = uVar15;
	if (((uVar1 == 0xffffffff) || (uVar16 = uVar15, (&plr)[p].InvBody[5]._iClass != '\x01')) ||
		 (uVar16 = uVar1, (&plr)[p].InvBody[5]._iStatFlag != '\0')) {
		uVar15 = uVar16;
	}
	switch(uVar15) {
	case 1:
		uVar15 = 2;
		break;
	case 2:
		uVar15 = 5;
		break;
	case 3:
		(&plr)[p]._pwtype = '\x01';
		uVar15 = 4;
		break;
	case 4:
		uVar15 = 6;
		break;
	case 10:
		uVar15 = 8;
	}
	if (((&plr)[p].InvBody[4]._itype == 5) && ((&plr)[p].InvBody[4]._iStatFlag != '\0')) {
		(&plr)[p]._pBlockFlag = '\x01';
		uVar15 = uVar15 + 1;
	}
	if (((&plr)[p].InvBody[5]._itype == 5) && ((&plr)[p].InvBody[5]._iStatFlag != '\0')) {
		(&plr)[p]._pBlockFlag = '\x01';
		uVar15 = uVar15 + 1;
	}
	sVar2 = (&plr)[p].InvBody[6]._itype;
	if ((sVar2 == 8) && ((&plr)[p].InvBody[6]._iStatFlag != '\0')) {
		uVar15 = uVar15 + 0x10;
		sVar2 = (&plr)[p].InvBody[6]._itype;
	}
	if ((sVar2 == 9) && ((&plr)[p].InvBody[6]._iStatFlag != '\0')) {
		uVar15 = uVar15 + 0x20;
	}
	if (((int)(&plr)[p]._pgfxnum == uVar15) || (Loadgfx == '\0')) {
		(&plr)[p]._pgfxnum = (char)uVar15;
	}
	else {
		(&plr)[p]._pgfxnum = (char)uVar15;
		(&plr)[p]._pGFXLoad = 0;
		SetPlrAnims__Fi(p);
		r = (&plr)[p]._pNFrames;
		(&plr)[p]._pAnimFrame = 1;
		(&plr)[p].peq = '\0';
		(&plr)[p]._pAnimCnt = 0;
		(&plr)[p]._pAnimDelay = 3;
		(&plr)[p]._pAnimLen = r;
	}
	r = nummissiles;
	local_30 = 0;
	if (0 < nummissiles) {
		psVar4 = &missileactive;
		do {
			iVar7 = (int)*psVar4;
			if ((missile[iVar7]._mitype == '\r') && ((int)missile[iVar7]._misource == p)) {
				missile[iVar7]._miVar1 = (short)(&plr)[p]._pHitPoints;
				missile[iVar7]._miVar2 = (short)(&plr)[p]._pHPBase;
			}
			psVar4 = psVar4 + 1;
			local_30 = local_30 + 1;
		} while (local_30 < r);
	}
	drawhpflag = '\x01';
	drawmanaflag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrScrolls__Fi(int p /*$t2*/)
 // line 945, offset 0x8003f130
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x8003F130
		// Variables:
	// 		int i; // $t3
	// 		unsigned long t; // $t0
	/* end block 1 */
	// End offset: 0x8003F4A4
	// End Line: 976

	/* begin block 2 */
		// Start line: 2337
	/* end block 2 */
	// End Line: 2338

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrScrolls__Fi(int p)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	
	*(undefined4 *)&(&plr)[p]._pScrlSpells = 0;
	*(undefined4 *)((int)&(&plr)[p]._pScrlSpells + 4) = 0;
	iVar3 = 0;
	if (0 < (&plr)[p]._pNumInv) {
		iVar4 = 0;
		do {
			if (((*(short *)((int)&(&plr)[p].InvList[0]._itype + iVar4) != -1) &&
					((uint)(&(&plr)[p].InvList[0]._iMiscId)[iVar4] - 0x15 < 2)) &&
				 ((&(&plr)[p].InvList[0]._iStatFlag)[iVar4] != '\0')) {
				uVar1 = *(uint *)((int)&(&plr)[p]._pScrlSpells + 4);
				uVar2 = (int)(&(&plr)[p].InvList[0]._iSpell)[iVar4] - 1;
				if ((int)(uVar2 * 0x4000000) < 0) {
					uVar5 = 1 << (uVar2 & 0x1f);
					uVar2 = 0;
				}
				else {
					uVar5 = 0 << (uVar2 & 0x1f);
					if (uVar2 * 0x4000000 != 0) {
						uVar5 = uVar5 | 1U >> (-uVar2 & 0x1f);
					}
					uVar2 = 1 << (uVar2 & 0x1f);
				}
				*(uint *)&(&plr)[p]._pScrlSpells = *(uint *)&(&plr)[p]._pScrlSpells | uVar2;
				*(uint *)((int)&(&plr)[p]._pScrlSpells + 4) = uVar1 | uVar5;
			}
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x6c;
		} while (iVar3 < (&plr)[p]._pNumInv);
	}
	iVar4 = 0;
	iVar3 = p * 0x19e8;
	do {
		if (((*(short *)((int)&plr.SpdList[0]._itype + iVar3) != -1) &&
				((uint)(&plr.SpdList[0]._iMiscId)[iVar3] - 0x15 < 2)) &&
			 ((&plr.SpdList[0]._iStatFlag)[iVar3] != '\0')) {
			uVar1 = *(uint *)((int)&(&plr)[p]._pScrlSpells + 4);
			uVar2 = (int)(&plr.SpdList[0]._iSpell)[iVar3] - 1;
			if ((int)(uVar2 * 0x4000000) < 0) {
				uVar5 = 1 << (uVar2 & 0x1f);
				uVar2 = 0;
			}
			else {
				uVar5 = 0 << (uVar2 & 0x1f);
				if (uVar2 * 0x4000000 != 0) {
					uVar5 = uVar5 | 1U >> (-uVar2 & 0x1f);
				}
				uVar2 = 1 << (uVar2 & 0x1f);
			}
			*(uint *)&(&plr)[p]._pScrlSpells = *(uint *)&(&plr)[p]._pScrlSpells | uVar2;
			*(uint *)((int)&(&plr)[p]._pScrlSpells + 4) = uVar1 | uVar5;
		}
		iVar4 = iVar4 + 1;
		iVar3 = iVar3 + 0x6c;
	} while (iVar4 < 8);
	if ((((&plr)[p]._pRSplType == '\x02') &&
			(uVar1 = 1 << ((&plr)[p]._pRSpell - 1U & 0x1f),
			(*(uint *)&(&plr)[p]._pScrlSpells & uVar1) == 0)) &&
		 ((*(uint *)((int)&(&plr)[p]._pScrlSpells + 4) & (int)uVar1 >> 0x1f) == 0)) {
		(&plr)[p]._pRSpell = -1;
		(&plr)[p]._pRSplType = '\x04';
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a3*/)
 // line 984, offset 0x8003f4b0
	/* begin block 1 */
		// Start line: 985
		// Start offset: 0x8003F4B0

		/* begin block 1.1 */
			// Start line: 989
			// Start offset: 0x8003F4E4

			/* begin block 1.1.1 */
				// Start line: 989
				// Start offset: 0x8003F4F4
				// Variables:
			// 		unsigned long t; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8003F4F4
			// End Line: 990
		/* end block 1.1 */
		// End offset: 0x8003F574
		// End Line: 998
	/* end block 1 */
	// End offset: 0x8003F574
	// End Line: 998

	/* begin block 2 */
		// Start line: 2415
	/* end block 2 */
	// End Line: 2416

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrStaff__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	
	sVar1 = ptrplr->InvBody[4]._itype;
	*(undefined4 *)&ptrplr->_pISpells = 0;
	*(undefined4 *)((int)&ptrplr->_pISpells + 4) = 0;
	if ((sVar1 != -1) && (ptrplr->InvBody[4]._iStatFlag != '\0')) {
		if (ptrplr->InvBody[4]._iCharges == '\0') {
			if (((int)ptrplr->InvBody[4]._iSpell == ptrplr->_pRSpell) && (ptrplr->_pRSplType == '\x03')) {
				ptrplr->_pRSpell = -1;
				ptrplr->_pRSplType = '\x04';
			}
		}
		else {
			uVar2 = (int)ptrplr->InvBody[4]._iSpell - 1;
			if ((int)(uVar2 * 0x4000000) < 0) {
				uVar4 = 1 << (uVar2 & 0x1f);
				iVar3 = 0;
			}
			else {
				uVar4 = 0 << (uVar2 & 0x1f);
				if (uVar2 * 0x4000000 != 0) {
					uVar4 = uVar4 | 1U >> (-uVar2 & 0x1f);
				}
				iVar3 = 1 << (uVar2 & 0x1f);
			}
			*(int *)&ptrplr->_pISpells = iVar3;
			*(uint *)((int)&ptrplr->_pISpells + 4) = uVar4;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcSelfItems__Fi(int pnum /*$a0*/)
 // line 1004, offset 0x8003f57c
	/* begin block 1 */
		// Start line: 1005
		// Start offset: 0x8003F57C
		// Variables:
	// 		int i; // $a2
	// 		struct PlayerStruct *p; // $a3
	// 		unsigned char sf; // $a1
	// 		unsigned char changeflag; // $t3
	// 		int sa; // $t2
	// 		int ma; // $t1
	// 		int da; // $t0
	/* end block 1 */
	// End offset: 0x8003F6D4
	// End Line: 1045

	/* begin block 2 */
		// Start line: 2462
	/* end block 2 */
	// End Line: 2463

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcSelfItems__Fi(int pnum)

{
	bool bVar1;
	char *pcVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	iVar5 = 0;
	iVar4 = 0;
	iVar3 = 6;
	pcVar2 = &(&plr)[pnum].InvBody[0]._iPLDex;
	do {
		if ((*(short *)(pcVar2 + -0x2c) != -1) && (pcVar2[0xe] = '\x01', pcVar2[0x11] != '\0')) {
			iVar6 = iVar6 + (int)pcVar2[-2];
			iVar4 = iVar4 + (int)*pcVar2;
			iVar5 = iVar5 + (int)pcVar2[-1];
		}
		iVar3 = iVar3 + -1;
		pcVar2 = pcVar2 + 0x6c;
	} while (iVar3 != -1);
	do {
		bVar1 = false;
		iVar3 = 6;
		pcVar2 = &(&plr)[pnum].InvBody[0]._iPLDex;
		do {
			if (((*(short *)(pcVar2 + -0x2c) != -1) && (pcVar2[0xe] != '\0')) &&
				 ((int)(&plr)[pnum]._pBaseDex + iVar4 < (int)(uint)(byte)pcVar2[10] ||
					((int)(&plr)[pnum]._pBaseMag + iVar5 < (int)(uint)(byte)pcVar2[0xc] ||
					(int)(&plr)[pnum]._pBaseStr + iVar6 < (int)(uint)(byte)pcVar2[9]))) {
				bVar1 = true;
				pcVar2[0xe] = '\0';
				if (pcVar2[0x11] != '\0') {
					iVar6 = iVar6 - (int)pcVar2[-2];
					iVar4 = iVar4 - (int)*pcVar2;
					iVar5 = iVar5 - (int)pcVar2[-1];
				}
			}
			iVar3 = iVar3 + -1;
			pcVar2 = pcVar2 + 0x6c;
		} while (iVar3 != -1);
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p /*$a0*/, struct ItemStruct *x /*$a1*/)
 // line 1050, offset 0x8003f6dc
	/* begin block 1 */
		// Start line: 1051
		// Start offset: 0x8003F6DC
	/* end block 1 */
	// End offset: 0x8003F720
	// End Line: 1055

	/* begin block 2 */
		// Start line: 2566
	/* end block 2 */
	// End Line: 2567

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ItemMinStats__FPC12PlayerStructPC10ItemStruct(PlayerStruct *p,ItemStruct *x)

{
	bool bVar1;
	
	bVar1 = false;
	if (((int)(uint)x->_iMinMag <= (int)p->_pMagic) &&
		 (bVar1 = false, (int)(uint)x->_iMinStr <= (int)p->_pStrength)) {
		bVar1 = (int)(uint)x->_iMinDex <= (int)p->_pDexterity;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetItemMinStats__FPC12PlayerStructP10ItemStruct(struct PlayerStruct *p /*$a0*/, struct ItemStruct *x /*$s0*/)
 // line 1058, offset 0x8003f728
	/* begin block 1 */
		// Start line: 1059
		// Start offset: 0x8003F728
	/* end block 1 */
	// End offset: 0x8003F740
	// End Line: 1060

	/* begin block 2 */
		// Start line: 2581
	/* end block 2 */
	// End Line: 2582

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetItemMinStats__FPC12PlayerStructP10ItemStruct(PlayerStruct *p,ItemStruct *x)

{
	uchar uVar1;
	
	uVar1 = ItemMinStats__FPC12PlayerStructPC10ItemStruct(p,x);
	x->_iStatFlag = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrItemMin__Fi(int pnum /*$a0*/)
 // line 1065, offset 0x8003f754
	/* begin block 1 */
		// Start line: 1066
		// Start offset: 0x8003F754
		// Variables:
	// 		int i; // $s0
	// 		struct ItemStruct *pi; // $s1
	// 		struct PlayerStruct *p; // $s3
	/* end block 1 */
	// End offset: 0x8003F810
	// End Line: 1081

	/* begin block 2 */
		// Start line: 2595
	/* end block 2 */
	// End Line: 2596

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrItemMin__Fi(int pnum)

{
	uchar uVar1;
	int iVar2;
	ItemStruct *x;
	uchar *puVar3;
	
	iVar2 = (&plr)[pnum]._pNumInv;
	x = (&plr)[pnum].InvList;
	while (iVar2 = iVar2 + -1, iVar2 != -1) {
		uVar1 = ItemMinStats__FPC12PlayerStructPC10ItemStruct(&plr + pnum,x);
		x->_iStatFlag = uVar1;
		x = x + 1;
	}
	x = (&plr)[pnum].SpdList;
	iVar2 = 7;
	puVar3 = (uchar *)&(&plr)[pnum].SpdList[0]._iStatFlag;
	do {
		if (*(short *)(puVar3 + -0x3a) != -1) {
			uVar1 = ItemMinStats__FPC12PlayerStructPC10ItemStruct(&plr + pnum,x);
			*puVar3 = uVar1;
		}
		puVar3 = puVar3 + 0x6c;
		iVar2 = iVar2 + -1;
		x = x + 1;
	} while (iVar2 != -1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrBookVals__Fi(int p /*$s1*/)
 // line 1086, offset 0x8003f834
	/* begin block 1 */
		// Start line: 1087
		// Start offset: 0x8003F834
		// Variables:
	// 		int i; // $s2
	// 		int slvl; // $a2
	/* end block 1 */
	// End offset: 0x8003FAF4
	// End Line: 1110

	/* begin block 2 */
		// Start line: 2647
	/* end block 2 */
	// End Line: 2648

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrBookVals__Fi(int p)

{
	short *psVar1;
	char cVar2;
	uchar uVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	int ii;
	int iVar7;
	
	if ((currlevel == '\0') && (ii = 1, (&ItemStruct_800dfa84)[StorePlrNo * 0x14]._itype != -1)) {
		iVar7 = 0x6c;
		do {
			if (0x13 < ii) break;
			WitchBookLevel__Fi(ii);
			psVar1 = (short *)((int)&(&_witchitem)[StorePlrNo * 0x14 + 1]._itype + iVar7);
			ii = ii + 1;
			iVar7 = iVar7 + 0x6c;
		} while (*psVar1 != -1);
	}
	ii = 0;
	if (0 < (&plr)[p]._pNumInv) {
		iVar7 = 0;
		do {
			if ((*(short *)((int)&(&plr)[p].InvList[0]._itype + iVar7) == 0) &&
				 ((&(&plr)[p].InvList[0]._iMiscId)[iVar7] == '\x18')) {
				cVar2 = (&(&plr)[p].InvList[0]._iSpell)[iVar7];
				(&(&plr)[p].InvList[0]._iMinMag)[iVar7] =
						 (uchar)(&spelldata)[(int)(&(&plr)[p].InvList[0]._iSpell)[iVar7]].sMinInt;
				iVar6 = (int)*(char *)(p * 0x19e8 + -0x7ff25a57 + (int)cVar2);
				while (iVar6 != 0) {
					uVar5 = (uint)(&(&plr)[p].InvList[0]._iMinMag)[iVar7];
					uVar5 = uVar5 + (int)uVar5 / 5;
					uVar4 = uVar5 & 0xff;
					(&(&plr)[p].InvList[0]._iMinMag)[iVar7] = (uchar)uVar5;
					iVar6 = iVar6 + -1;
					if (0xff < (int)(uVar4 + (int)uVar4 / 5)) {
						(&(&plr)[p].InvList[0]._iMinMag)[iVar7] = -1;
						iVar6 = 0;
					}
				}
				uVar3 = ItemMinStats__FPC12PlayerStructPC10ItemStruct
													(&plr + p,(ItemStruct *)(p * 0x19e8 + -0x7ff25624 + iVar7));
				(&(&plr)[p].InvList[0]._iStatFlag)[iVar7] = uVar3;
			}
			ii = ii + 1;
			iVar7 = iVar7 + 0x6c;
		} while (ii < (&plr)[p]._pNumInv);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrInv__FiUc(int p /*$s0*/, unsigned char Loadgfx /*$s1*/)
 // line 1114, offset 0x8003fb18
	/* begin block 1 */
		// Start line: 1115
		// Start offset: 0x8003FB18
	/* end block 1 */
	// End offset: 0x8003FBB0
	// End Line: 1125

	/* begin block 2 */
		// Start line: 2706
	/* end block 2 */
	// End Line: 2707

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrInv__FiUc(int p,uchar Loadgfx)

{
	CalcPlrItemMin__Fi(p);
	CalcSelfItems__Fi(p);
	CalcPlrItemVals__FiUc(p,Loadgfx);
	CalcPlrItemMin__Fi(p);
	CalcPlrBookVals__Fi(p);
	CalcPlrScrolls__Fi(p);
	CalcPlrStaff__FP12PlayerStruct(&plr + p);
	if (currlevel == '\0') {
		RecalcStoreStats__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h /*$s0*/, int idata /*$s2*/)
 // line 1130, offset 0x8003fbc8
	/* begin block 1 */
		// Start line: 1131
		// Start offset: 0x8003FBC8
		// Variables:
	// 		struct ItemDataStruct *pAllItem; // $s1
	/* end block 1 */
	// End offset: 0x8003FCC4
	// End Line: 1162

	/* begin block 2 */
		// Start line: 2738
	/* end block 2 */
	// End Line: 2739

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrHandItem__FP10ItemStructi(ItemStruct *h,int idata)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	uchar uVar6;
	uchar uVar7;
	uchar uVar8;
	uchar uVar9;
	byte bVar10;
	ushort uVar11;
	
	memset(h,0,0x6c);
	cVar1 = (&AllItemsList)[idata].itype;
	uVar2 = (&AllItemsList)[idata].iCurs;
	uVar11 = (&AllItemsList)[idata].iName;
	cVar3 = (&AllItemsList)[idata].iLoc;
	cVar4 = (&AllItemsList)[idata].iClass;
	uVar5 = (&AllItemsList)[idata].iMinDam;
	uVar6 = (&AllItemsList)[idata].iMaxDam;
	uVar7 = (&AllItemsList)[idata].iMinAC;
	uVar8 = (&AllItemsList)[idata].iMiscId;
	uVar9 = (&AllItemsList)[idata].iSpell;
	h->_iMiscId = uVar8;
	h->_itype = (short)cVar1;
	h->_iCurs = uVar2;
	h->_iName = uVar11;
	h->_iIName = uVar11;
	h->_iLoc = cVar3;
	h->_iClass = cVar4;
	h->_iMinDam = uVar5;
	h->_iMaxDam = uVar6;
	h->_iAC = uVar7;
	h->_iSpell = uVar9;
	if (uVar8 == '\x17') {
		h->_iCharges = '(';
	}
	bVar10 = (&AllItemsList)[idata].iDurability;
	uVar2 = (&AllItemsList)[idata].iMinStr;
	uVar5 = (&AllItemsList)[idata].iMinMag;
	uVar6 = (&AllItemsList)[idata].iMinDex;
	uVar11 = (&AllItemsList)[idata].iValue;
	h->_iPrePower = -1;
	h->_iSufPower = -1;
	h->IDidx = (short)idata;
	h->_iMagical = '\0';
	h->_iStatFlag = '\x01';
	h->_iMaxCharges = h->_iCharges;
	h->_iDurability = (ushort)bVar10;
	h->_iMaxDur = (ushort)bVar10;
	h->_iMinStr = uVar2;
	h->_iMinMag = uVar5;
	h->_iMinDex = uVar6;
	h->_ivalue = (uint)uVar11;
	h->_iIvalue = (uint)uVar11;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h /*$s0*/)
 // line 1167, offset 0x8003fce0
	/* begin block 1 */
		// Start line: 1168
		// Start offset: 0x8003FCE0
	/* end block 1 */
	// End offset: 0x8003FCF8
	// End Line: 1171

	/* begin block 2 */
		// Start line: 2870
	/* end block 2 */
	// End Line: 2871

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetPlrHandSeed__FP10ItemStruct(ItemStruct *h)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	h->_iSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetGoldSeed__FiP10ItemStruct(int pnum /*$s0*/, struct ItemStruct *h /*$s4*/)
 // line 1178, offset 0x8003fd0c
	/* begin block 1 */
		// Start line: 1179
		// Start offset: 0x8003FD0C
		// Variables:
	// 		int i; // $a0
	// 		int ii; // $v0
	// 		int s; // $a3
	// 		unsigned char doneflag; // $s1
	/* end block 1 */
	// End offset: 0x8003FE50
	// End Line: 1197

	/* begin block 2 */
		// Start line: 2892
	/* end block 2 */
	// End Line: 2893

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetGoldSeed__FiP10ItemStruct(int pnum,ItemStruct *h)

{
	bool bVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	
	do {
		bVar1 = true;
		lVar2 = GetRndSeed__Fv();
		iVar3 = 0;
		if (0 < numitems) {
			do {
				if (item[(int)(&itemactive)[iVar3]]._iSeed == lVar2) {
					bVar1 = false;
				}
				iVar3 = iVar3 + 1;
			} while (iVar3 < numitems);
		}
		iVar3 = 0;
		if (0 < (&plr)[pnum]._pNumInv) {
			iVar4 = 0;
			do {
				if (*(int *)((int)&(&plr)[pnum].InvList[0]._iSeed + iVar4) == lVar2) {
					bVar1 = false;
				}
				iVar3 = iVar3 + 1;
				iVar4 = iVar4 + 0x6c;
			} while (iVar3 < (&plr)[pnum]._pNumInv);
		}
	} while (!bVar1);
	h->_iSeed = lVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h /*$a0*/, int iseed /*$a1*/)
 // line 1203, offset 0x8003fe74
	/* begin block 1 */
		// Start line: 1204
		// Start offset: 0x8003FE74
	/* end block 1 */
	// End offset: 0x8003FE74
	// End Line: 1207

	/* begin block 2 */
		// Start line: 2957
	/* end block 2 */
	// End Line: 2958

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrHandSeed__FP10ItemStructi(ItemStruct *h,int iseed)

{
	h->_iSeed = iseed;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h /*$a0*/)
 // line 1214, offset 0x8003fe7c
	/* begin block 1 */
		// Start line: 1215
		// Start offset: 0x8003FE7C
	/* end block 1 */
	// End offset: 0x8003FEA4
	// End Line: 1220

	/* begin block 2 */
		// Start line: 2977
	/* end block 2 */
	// End Line: 2978

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrHandGoldCurs__FP10ItemStruct(ItemStruct *h)

{
	uchar uVar1;
	
	if (h->_ivalue < 0x9c4) {
		uVar1 = '\x04';
		if (1000 < h->_ivalue) {
			uVar1 = '\x05';
		}
	}
	else {
		uVar1 = '\x06';
	}
	h->_iCurs = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlrItems__Fi(int p /*$s3*/)
 // line 1225, offset 0x8003feac
	/* begin block 1 */
		// Start line: 1226
		// Start offset: 0x8003FEAC
		// Variables:
	// 		int i; // $v1
	// 		struct ItemStruct *pi; // $v0
	/* end block 1 */
	// End offset: 0x800403E4
	// End Line: 1352

	/* begin block 2 */
		// Start line: 2998
	/* end block 2 */
	// End Line: 2999

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreatePlrItems__Fi(int p)

{
	char cVar1;
	int *piVar2;
	int idata;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	int *piVar6;
	ItemStruct *pIVar7;
	ItemStruct *h;
	ItemStruct *pIVar8;
	
	idata = p * 0x19e8 + -0x7ff25918;
	iVar3 = 6;
	do {
		*(undefined2 *)(idata + 0x2c) = 0xffff;
		iVar3 = iVar3 + -1;
		idata = idata + 0x6c;
	} while (iVar3 != -1);
	memset((&plr)[p].InvGrid,0,0x28);
	idata = p * 0x19e8 + -0x7ff25624;
	iVar3 = 0x27;
	do {
		*(undefined2 *)(idata + 0x2c) = 0xffff;
		iVar3 = iVar3 + -1;
		idata = idata + 0x6c;
	} while (iVar3 != -1);
	(&plr)[p]._pNumInv = 0;
	idata = p * 0x19e8 + -0x7ff24518;
	iVar3 = 7;
	do {
		*(undefined2 *)(idata + 0x2c) = 0xffff;
		iVar3 = iVar3 + -1;
		idata = idata + 0x6c;
	} while (iVar3 != -1);
	cVar1 = (&plr)[p]._pClass;
	if (cVar1 == '\x01') {
		SetPlrHandItem__FP10ItemStructi((&plr)[p].InvBody + 4,4);
		GetPlrHandSeed__FP10ItemStruct((&plr)[p].InvBody + 4);
		SetPlrHandItem__FP10ItemStructi((&plr)[p].SpdList,0x18);
		GetPlrHandSeed__FP10ItemStruct((&plr)[p].SpdList);
		idata = 0x18;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 != '\0') goto LAB_80040178;
			SetPlrHandItem__FP10ItemStructi((&plr)[p].InvBody + 4,1);
			GetPlrHandSeed__FP10ItemStruct((&plr)[p].InvBody + 4);
			SetPlrHandItem__FP10ItemStructi((&plr)[p].InvBody + 5,2);
			GetPlrHandSeed__FP10ItemStruct((&plr)[p].InvBody + 5);
			SetPlrHandItem__FP10ItemStructi(&(&plr)[p].HoldItem,3);
			GetPlrHandSeed__FP10ItemStruct(&(&plr)[p].HoldItem);
			FUN_80159f24(p,0,1,3,1);
			SetPlrHandItem__FP10ItemStructi((&plr)[p].SpdList,0x18);
			GetPlrHandSeed__FP10ItemStruct((&plr)[p].SpdList);
			idata = 0x18;
		}
		else {
			if (cVar1 != '\x02') goto LAB_80040178;
			SetPlrHandItem__FP10ItemStructi((&plr)[p].InvBody + 4,5);
			GetPlrHandSeed__FP10ItemStruct((&plr)[p].InvBody + 4);
			SetPlrHandItem__FP10ItemStructi((&plr)[p].SpdList,0x19);
			GetPlrHandSeed__FP10ItemStruct((&plr)[p].SpdList);
			idata = 0x19;
		}
	}
	SetPlrHandItem__FP10ItemStructi((&plr)[p].SpdList + 1,idata);
	GetPlrHandSeed__FP10ItemStruct((&plr)[p].SpdList + 1);
LAB_80040178:
	if (FePlayerNo != 0) {
		GetItemAttrs__Fiii(0,0x22,1);
		h = item;
		pIVar8 = (&plr)[p].SpdList + 2;
		do {
			pIVar7 = pIVar8;
			pIVar5 = h;
			idata = pIVar5->_iVMult1;
			iVar3 = pIVar5->_iVAdd2;
			iVar4 = pIVar5->_iVMult2;
			pIVar7->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar7->_iVMult1 = idata;
			pIVar7->_iVAdd2 = iVar3;
			pIVar7->_iVMult2 = iVar4;
			h = (ItemStruct *)&pIVar5->_iSeed;
			pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
		} while ((ItemStruct *)&pIVar5->_iSeed != (ItemStruct *)&item[0]._iSufPower);
		idata = pIVar5->_ivalue;
		iVar3 = pIVar5->_iIvalue;
		((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = item[0]._96_4_;
		pIVar7->_ivalue = idata;
		pIVar7->_iIvalue = iVar3;
		(&plr)[p].SpdList[2]._iStatFlag = '\x01';
		idata = FePlayerNo;
		(&plr)[p].SpdList[2]._iCreateInfo = 1;
		(&plr)[p].SpdList[2]._PlrCreate = (char)idata;
		SetPlrHandItem__FP10ItemStructi((&plr)[p].SpdList + 2,0x22);
		GetPlrHandSeed__FP10ItemStruct((&plr)[p].SpdList + 2);
	}
	h = &(&plr)[p].HoldItem;
	SetPlrHandItem__FP10ItemStructi(h,0);
	GetPlrHandSeed__FP10ItemStruct(h);
	(&plr)[p].HoldItem._ivalue = 100;
	idata = (&plr)[p]._pNumInv;
	(&plr)[p].HoldItem._iCurs = '\x04';
	(&plr)[p]._pGold = (&plr)[p].HoldItem._ivalue;
	piVar2 = (int *)(idata * 0x6c + p * 0x19e8 + -0x7ff25624);
	do {
		pIVar8 = h;
		piVar6 = piVar2;
		idata = pIVar8->_iVMult1;
		iVar3 = pIVar8->_iVAdd2;
		iVar4 = pIVar8->_iVMult2;
		*piVar6 = pIVar8->_iVAdd1;
		piVar6[1] = idata;
		piVar6[2] = iVar3;
		piVar6[3] = iVar4;
		h = (ItemStruct *)&pIVar8->_iSeed;
		piVar2 = piVar6 + 4;
	} while (h != (ItemStruct *)&(&plr)[p].HoldItem._iSufPower);
	idata = pIVar8->_ivalue;
	iVar3 = pIVar8->_iIvalue;
	piVar6[4] = h->_iVAdd1;
	piVar6[5] = idata;
	piVar6[6] = iVar3;
	(&plr)[p]._pNumInv = (&plr)[p]._pNumInv + 1;
	(&plr)[p].InvGrid[0x1e] = (char)(&plr)[p]._pNumInv;
	CalcPlrInv__FiUc(p,'\0');
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ItemSpaceOk__Fii(int i /*$s1*/, int j /*$s2*/)
 // line 1358, offset 0x8004040c
	/* begin block 1 */
		// Start line: 1359
		// Start offset: 0x8004040C
		// Variables:
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80040670
	// End Line: 1390

	/* begin block 2 */
		// Start line: 3291
	/* end block 2 */
	// End Line: 3292

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ItemSpaceOk__Fii(int i,int j)

{
	uchar uVar1;
	bool bVar2;
	uint uVar3;
	void *pvVar4;
	uint uVar5;
	
	if (((uint)i < 0x60) && ((uint)j < 0x60)) {
		if ((&dung_map)[i * 0x70 + j].dMonster != 0) {
			return '\0';
		}
		uVar1 = IsDplayer__Fii(i,j);
		if (uVar1 != '\0') {
			return '\0';
		}
		if ((&dung_map)[i * 0x70 + j].dItem != '\0') {
			return '\0';
		}
		uVar3 = SEXT14((&dung_map)[i * 0x70 + j].dObject);
		if (uVar3 != 0) {
			uVar5 = uVar3 - 1;
			if ((int)uVar3 < 1) {
				uVar5 = ~uVar3;
			}
			if (object[uVar5]._oSolidFlag != '\0') {
				return '\0';
			}
		}
		if ((0 < (int)(&dung_map)[(i + 1) * 0x70 + j + 1].dObject) &&
			 (object[(int)(&dung_map)[(i + 1) * 0x70 + j + 1].dObject + -1]._oSelFlag != '\0')) {
			return '\0';
		}
		if (((int)(&dung_map)[(i + 1) * 0x70 + j + 1].dObject < 0) &&
			 (object[~(int)(&dung_map)[(i + 1) * 0x70 + j + 1].dObject]._oSelFlag != '\0')) {
			return '\0';
		}
		if (0 < (int)(&dung_map)[(i + 1) * 0x70 + j].dObject) {
			if (((0 < (int)(&dung_map)[i * 0x70 + j + 1].dObject) &&
					(object[(int)(&dung_map)[(i + 1) * 0x70 + j].dObject + -1]._oSelFlag != '\0')) &&
				 (object[(int)(&dung_map)[i * 0x70 + j + 1].dObject + -1]._oSelFlag != '\0'))
			goto LAB_80040658;
		}
		pvVar4 = GetSOLID__Fii(i,j);
		bVar2 = pvVar4 == (void *)0x0;
	}
	else {
LAB_80040658:
		bVar2 = false;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GetItemSpace__Fiic(int x /*$s5*/, int y /*$s6*/, char inum /*stack -56*/)
 // line 1397, offset 0x8004068c
	/* begin block 1 */
		// Start line: 1398
		// Start offset: 0x8004068C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int xx; // $a1
	// 		int yy; // $s2
	// 		int rs; // $a0
	// 		unsigned char savail; // $s0
	/* end block 1 */
	// End offset: 0x80040870
	// End Line: 1446

	/* begin block 2 */
		// Start line: 3373
	/* end block 2 */
	// End Line: 3374

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar GetItemSpace__Fiic(int x,int y,char inum)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	uchar *puVar4;
	int i;
	uchar *puVar5;
	int iVar6;
	int j;
	
	iVar6 = 0;
	j = y + -1;
	do {
		i = x + -1;
		if (i <= x + 1) {
			puVar5 = &itemhold;
			do {
				uVar2 = ItemSpaceOk__Fii(i,j);
				puVar5[iVar6] = uVar2;
				i = i + 1;
				puVar5 = puVar5 + 3;
			} while (i <= x + 1);
		}
		j = j + 1;
		iVar6 = iVar6 + 1;
	} while (j <= y + 1);
	bVar1 = false;
	iVar6 = 0;
	do {
		j = 0;
		puVar5 = &itemhold;
		do {
			if (puVar5[iVar6] != '\0') {
				bVar1 = true;
			}
			j = j + 1;
			puVar5 = puVar5 + 3;
		} while (j < 3);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 3);
	lVar3 = ENG_random__Fl(0xf);
	iVar6 = lVar3 + 1;
	j = 0;
	if (bVar1) {
		i = 0;
		if (0 < iVar6) {
			puVar5 = &itemhold;
			puVar4 = &itemhold;
			do {
				if (*puVar5 != '\0') {
					iVar6 = iVar6 + -1;
				}
				if (iVar6 < 1) break;
				j = j + 1;
				puVar4 = puVar4 + 3;
				if (j == 3) {
					i = i + 1;
					j = 0;
					puVar4 = &itemhold;
					if (i == 3) {
						i = 0;
						puVar4 = &itemhold;
					}
				}
				puVar5 = puVar4 + i;
			} while (0 < iVar6);
		}
		iVar6 = j + x + -1;
		j = i + y + -1;
		uVar2 = '\x01';
		item[(int)inum]._ix = (char)iVar6;
		item[(int)inum]._iy = (char)j;
		(&dung_map)[iVar6 * 0x70 + j].dItem = inum + '\x01';
	}
	else {
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetSuperItemSpace__Fiic(int x /*$fp*/, int y /*stack -64*/, char inum /*stack -56*/)
 // line 1452, offset 0x800408a4
	/* begin block 1 */
		// Start line: 1453
		// Start offset: 0x800408A4
		// Variables:
	// 		int xx; // $s0
	// 		int yy; // $s4

		/* begin block 1.1 */
			// Start line: 1460
			// Start offset: 0x800408FC
			// Variables:
		// 		int l; // $s2

			/* begin block 1.1.1 */
				// Start line: 1460
				// Start offset: 0x8004090C

				/* begin block 1.1.1.1 */
					// Start line: 1461
					// Start offset: 0x80040918
					// Variables:
				// 		int j; // $s5

					/* begin block 1.1.1.1.1 */
						// Start line: 1461
						// Start offset: 0x80040918

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1462
							// Start offset: 0x80040924
							// Variables:
						// 		int i; // $s1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800409B8
						// End Line: 1473
					/* end block 1.1.1.1.1 */
					// End offset: 0x800409B8
					// End Line: 1473
				/* end block 1.1.1.1 */
				// End offset: 0x800409C0
				// End Line: 1474
			/* end block 1.1.1 */
			// End offset: 0x800409C0
			// End Line: 1474
		/* end block 1.1 */
		// End offset: 0x800409C8
		// End Line: 1475
	/* end block 1 */
	// End offset: 0x800409C8
	// End Line: 1475

	/* begin block 2 */
		// Start line: 3501
	/* end block 2 */
	// End Line: 3502

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetSuperItemSpace__Fiic(int x,int y,char inum)

{
	uchar uVar1;
	int i;
	int iVar2;
	int iVar3;
	int j;
	int iVar4;
	
	uVar1 = GetItemSpace__Fiic(x,y,inum);
	iVar3 = 2;
	if (uVar1 == '\0') {
		while (iVar4 = -iVar3, iVar3 < 0x32) {
			while (iVar2 = -iVar3, iVar4 <= iVar3) {
				j = y + iVar4;
				while (iVar2 <= iVar3) {
					i = x + iVar2;
					uVar1 = ItemSpaceOk__Fii(i,j);
					iVar2 = iVar2 + 1;
					if (uVar1 != '\0') {
						item[(int)inum]._ix = (char)i;
						item[(int)inum]._iy = (char)j;
						(&dung_map)[i * 0x70 + j].dItem = inum + '\x01';
						return;
					}
				}
				iVar4 = iVar4 + 1;
			}
			iVar3 = iVar3 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetSuperItemLoc__FiiRiT2(int x /*$s4*/, int y /*$s6*/, int *xx /*$s5*/, int *yy /*$s3*/)
 // line 1481, offset 0x800409fc
	/* begin block 1 */
		// Start line: 1482
		// Start offset: 0x800409FC

		/* begin block 1.1 */
			// Start line: 1482
			// Start offset: 0x800409FC
			// Variables:
		// 		int l; // $s1

			/* begin block 1.1.1 */
				// Start line: 1484
				// Start offset: 0x80040A34

				/* begin block 1.1.1.1 */
					// Start line: 1485
					// Start offset: 0x80040A40
					// Variables:
				// 		int j; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 1485
						// Start offset: 0x80040A40

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1486
							// Start offset: 0x80040A4C
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80040A88
						// End Line: 1491
					/* end block 1.1.1.1.1 */
					// End offset: 0x80040A88
					// End Line: 1491
				/* end block 1.1.1.1 */
				// End offset: 0x80040A90
				// End Line: 1492
			/* end block 1.1.1 */
			// End offset: 0x80040A90
			// End Line: 1492
		/* end block 1.1 */
		// End offset: 0x80040A98
		// End Line: 1493
	/* end block 1 */
	// End offset: 0x80040A98
	// End Line: 1493

	/* begin block 2 */
		// Start line: 3568
	/* end block 2 */
	// End Line: 3569

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetSuperItemLoc__FiiRiT2(int x,int y,int *xx,int *yy)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 1;
	do {
		iVar4 = -iVar3;
		if (0x31 < iVar3) {
			return;
		}
		while (iVar4 <= iVar3) {
			*yy = y + iVar4;
			iVar2 = -iVar3;
			while (iVar2 <= iVar3) {
				*xx = x + iVar2;
				uVar1 = ItemSpaceOk__Fii(x + iVar2,*yy);
				iVar2 = iVar2 + 1;
				if (uVar1 != '\0') {
					return;
				}
			}
			iVar4 = iVar4 + 1;
		}
		iVar3 = iVar3 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcItemValue__Fi(int i /*$a0*/)
 // line 1499, offset 0x80040ac4
	/* begin block 1 */
		// Start line: 1500
		// Start offset: 0x80040AC4
		// Variables:
	// 		int v; // $a0
	/* end block 1 */
	// End offset: 0x80040B74
	// End Line: 1506

	/* begin block 2 */
		// Start line: 3607
	/* end block 2 */
	// End Line: 3608

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcItemValue__Fi(int i)

{
	int iVar1;
	
	iVar1 = item[i]._iVMult1 + item[i]._iVMult2;
	if (0 < iVar1) {
		iVar1 = iVar1 * item[i]._ivalue;
	}
	if (iVar1 < 0) {
		iVar1 = item[i]._ivalue / iVar1;
	}
	iVar1 = iVar1 + item[i]._iVAdd1 + item[i]._iVAdd2;
	if (iVar1 < 1) {
		iVar1 = 1;
	}
	item[i]._iIvalue = iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetBookSpell__Fii(int i /*$s2*/, int lvl /*$s1*/)
 // line 1512, offset 0x80040b7c
	/* begin block 1 */
		// Start line: 1513
		// Start offset: 0x80040B7C
		// Variables:
	// 		int rv; // $a1
	// 		int s; // $v1
	// 		int bs; // $s0
	/* end block 1 */
	// End offset: 0x80040DC0
	// End Line: 1558

	/* begin block 2 */
		// Start line: 3632
	/* end block 2 */
	// End Line: 3633

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetBookSpell__Fii(int i,int lvl)

{
	uchar uVar1;
	bool bVar2;
	long lVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	if (lvl == 0) {
		lvl = 1;
	}
	lVar3 = ENG_random__Fl(0x25);
	iVar7 = lVar3 + 1;
	iVar5 = 1;
	if (0 < iVar7) {
		iVar6 = 0x34;
		do {
			iVar4 = *(int *)((int)&spelldata.sBookLvl + iVar6);
			if ((iVar4 != -1) && (iVar4 <= lvl)) {
				iVar7 = iVar7 + -1;
				iVar8 = iVar5;
			}
			iVar6 = iVar6 + 0x34;
			iVar5 = iVar5 + 1;
			if (FePlayerNo != 1) {
				if (iVar5 == 0x20) {
					iVar6 = 0x6b4;
					iVar5 = 0x21;
				}
				if (iVar5 == 0x22) {
					iVar6 = 0x71c;
					iVar5 = 0x23;
				}
			}
			bVar2 = iVar5 < 0x25;
			if (FePlayerNo != 0) {
				if (iVar5 == 0x17) {
					iVar6 = 0x4e0;
					iVar5 = 0x18;
				}
				bVar2 = iVar5 < 0x25;
				if (iVar5 == 10) {
					iVar6 = 0x23c;
					iVar5 = 0xb;
					bVar2 = true;
				}
			}
			if (!bVar2) {
				iVar6 = 0x34;
				iVar5 = 1;
				iVar7 = iVar7 + -1;
				iVar8 = 1;
			}
		} while (0 < iVar7);
	}
	item[i]._iName = (ushort)(&spelldata)[iVar8].sNameText;
	iVar5 = (&spelldata)[iVar8].sNameText;
	item[i]._iSpell = (char)iVar8;
	item[i]._iIName = (ushort)iVar5;
	item[i]._iMinMag = (uchar)(&spelldata)[iVar8].sMinInt;
	item[i]._ivalue = item[i]._ivalue + (&spelldata)[iVar8].sBookCost;
	item[i]._iIvalue = item[i]._iIvalue + (&spelldata)[iVar8].sBookCost;
	if ((&spelldata)[iVar8].sType == '\0') {
		item[i]._iCurs = 'W';
	}
	uVar1 = (&spelldata)[iVar8].sType;
	if (uVar1 == '\x01') {
		item[i]._iCurs = 'X';
		uVar1 = (&spelldata)[iVar8].sType;
	}
	if (uVar1 == '\x02') {
		item[i]._iCurs = 'V';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetStaffPower__FiiiUc(int i /*$s2*/, int lvl /*$s3*/, int bs /*$a2*/, unsigned char onlygood /*$s0*/)
 // line 1564, offset 0x80040ddc
	/* begin block 1 */
		// Start line: 1565
		// Start offset: 0x80040DDC
		// Variables:
	// 		int l[256]; // stack offset -1176
	// 		int nl; // $a0
	// 		int j; // $a2
	// 		int preidx; // $s1
	// 		char istr[128]; // stack offset -152
	// 		unsigned char addok; // $v0
	/* end block 1 */
	// End offset: 0x80040FA4
	// End Line: 1627

	/* begin block 2 */
		// Start line: 3737
	/* end block 2 */
	// End Line: 3738

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetStaffPower__FiiiUc(int i,int lvl,int bs,uchar onlygood)

{
	int *piVar1;
	bool bVar2;
	long lVar3;
	int v;
	int *piVar4;
	int *piVar5;
	int minval;
	int maxval;
	int multval;
	int iVar6;
	int local_498 [288];
	
	lVar3 = ENG_random__Fl(10);
	if ((lVar3 == 0) || (onlygood != '\0')) {
		v = 0;
		minval = 0;
		if (PL_Prefix[0].PLPower != -1) {
			maxval = 0;
			multval = v;
			piVar4 = local_498;
			do {
				v = multval;
				piVar5 = piVar4;
				if (((*(uint *)((int)&PL_Prefix[0].PLIType + maxval) & 0x100) != 0) &&
					 (v = multval, piVar5 = piVar4, (int)(&PL_Prefix[0].PLMinLvl)[maxval] <= lvl)) {
					bVar2 = true;
					if (onlygood != '\0') {
						bVar2 = (&PL_Prefix[0].PLOk)[maxval] != '\0';
					}
					v = multval;
					piVar5 = piVar4;
					if (bVar2) {
						*piVar4 = minval;
						piVar5 = piVar4 + 1;
						v = multval + 1;
						if ((&PL_Prefix[0].PLDouble)[maxval] != '\0') {
							*piVar5 = minval;
							piVar5 = piVar4 + 2;
							v = multval + 2;
						}
					}
				}
				piVar1 = (int *)((int)&PL_Prefix[1].PLPower + maxval);
				minval = minval + 1;
				maxval = maxval + 0x28;
				multval = v;
				piVar4 = piVar5;
			} while (*piVar1 != -1);
		}
		if (v != 0) {
			lVar3 = ENG_random__Fl(v);
			iVar6 = local_498[lVar3];
			v = PL_Prefix[iVar6].PLPower;
			minval = PL_Prefix[iVar6].PLMinVal;
			maxval = PL_Prefix[iVar6].PLMaxVal;
			multval = PL_Prefix[iVar6].PLMultVal;
			item[i]._iMagical = '\x01';
			SaveItemPower__Fiiiiiii
								(i,v,PL_Prefix[iVar6].PLParam1,PL_Prefix[iVar6].PLParam2,minval,maxval,multval);
			item[i]._iPrePower = (char)iVar6;
		}
	}
	CalcItemValue__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetStaffSpell__FiiUc(int i /*$s4*/, int lvl /*$s5*/, unsigned char onlygood /*$s6*/)
 // line 1634, offset 0x80040fc4
	/* begin block 1 */
		// Start line: 1635
		// Start offset: 0x80040FC4
		// Variables:
	// 		int rv; // $a1
	// 		int s; // $v1
	// 		int l; // $s0
	// 		int bs; // $s3
	// 		int maxc; // $a0
	// 		int minc; // $s1

		/* begin block 1.1 */
			// Start line: 1635
			// Start offset: 0x80040FC4

			/* begin block 1.1.1 */
				// Start line: 1653
				// Start offset: 0x8004102C
				// Variables:
			// 		int v; // $t0
			/* end block 1.1.1 */
			// End offset: 0x80041270
			// End Line: 1710
		/* end block 1.1 */
		// End offset: 0x80041270
		// End Line: 1710
	/* end block 1 */
	// End offset: 0x80041270
	// End Line: 1710

	/* begin block 2 */
		// Start line: 3892
	/* end block 2 */
	// End Line: 3893

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetStaffSpell__FiiUc(int i,int lvl,uchar onlygood)

{
	byte bVar1;
	bool bVar2;
	uchar uVar3;
	long lVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	int minlvl;
	uint bs;
	
	bs = 0;
	lVar4 = ENG_random__Fl(4);
	minlvl = lvl >> 1;
	if (lVar4 == 0) {
		GetItemPower__FiiilUc(i,minlvl,lvl,0x100,(uint)onlygood);
	}
	else {
		if (minlvl == 0) {
			minlvl = 1;
		}
		lVar4 = ENG_random__Fl(0x25);
		iVar8 = lVar4 + 1;
		uVar6 = 1;
		if (0 < iVar8) {
			iVar7 = 0x34;
			do {
				iVar5 = *(int *)((int)&spelldata.sStaffLvl + iVar7);
				if ((iVar5 != -1) && (iVar5 <= minlvl)) {
					iVar8 = iVar8 + -1;
					bs = uVar6;
				}
				iVar7 = iVar7 + 0x34;
				uVar6 = uVar6 + 1;
				if (FePlayerNo == 0) {
					if (uVar6 == 0x20) {
						iVar7 = 0x6b4;
						uVar6 = 0x21;
					}
					bVar2 = (int)uVar6 < 0x25;
					if (uVar6 == 0x22) {
						iVar7 = 0x71c;
						uVar6 = 0x23;
LAB_800410e4:
						bVar2 = uVar6 < 0x25;
					}
				}
				else {
					if (uVar6 == 0x17) {
						iVar7 = 0x4e0;
						uVar6 = 0x18;
					}
					bVar2 = (int)uVar6 < 0x25;
					if (uVar6 == 10) {
						iVar7 = 0x23c;
						uVar6 = 0xb;
						goto LAB_800410e4;
					}
				}
				if (!bVar2) {
					iVar7 = 0x34;
					uVar6 = 1;
					iVar8 = iVar8 + -1;
					bs = 1;
				}
			} while (0 < iVar8);
		}
		if (0x24 < (int)bs) {
			DBG_Error((char *)0x0,"source/ITEMS.cpp",0x697);
		}
		if ((&spelldata)[bs].sNameText == 0) {
			DBG_Error((char *)0x0,"source/ITEMS.cpp",0x698);
		}
		item[i]._iSpell = (char)bs;
		minlvl = (&spelldata)[bs].sStaffMin;
		lVar4 = ENG_random__Fl(((&spelldata)[bs].sStaffMax - minlvl) + 1);
		uVar3 = (char)lVar4 + (char)minlvl;
		item[i]._iCharges = uVar3;
		item[i]._iMaxCharges = uVar3;
		bVar1 = item[i]._iCharges;
		item[i]._iMinMag = (uchar)(&spelldata)[bs].sMinInt;
		minlvl = (int)((&spelldata)[bs].sStaffCost * (uint)bVar1) / 5;
		iVar8 = item[i]._ivalue;
		item[i]._iIvalue = item[i]._iIvalue + minlvl;
		item[i]._ivalue = iVar8 + minlvl;
		GetStaffPower__FiiiUc(i,lvl,bs,onlygood);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemAttrs__Fiii(int i /*$s5*/, int idata /*$s2*/, int lvl /*$s6*/)
 // line 1750, offset 0x8004129c
	/* begin block 1 */
		// Start line: 1751
		// Start offset: 0x8004129C
		// Variables:
	// 		int rndv; // $s4
	/* end block 1 */
	// End offset: 0x800417E0
	// End Line: 1851

	/* begin block 2 */
		// Start line: 4145
	/* end block 2 */
	// End Line: 4146

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetItemAttrs__Fiii(int i,int idata,int lvl)

{
	byte bVar1;
	byte bVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	uchar uVar6;
	uchar uVar7;
	uchar uVar8;
	ushort uVar9;
	uchar uVar10;
	long lVar11;
	long lVar12;
	undefined *puVar13;
	
	puVar13 = (undefined *)0x0;
	bVar1 = (&AllItemsList)[idata].iMaxAC;
	bVar2 = (&AllItemsList)[idata].iMinAC;
	uVar10 = (&AllItemsList)[idata].iCurs;
	uVar9 = (&AllItemsList)[idata].iName;
	cVar3 = (&AllItemsList)[idata].iLoc;
	cVar4 = (&AllItemsList)[idata].iClass;
	uVar5 = (&AllItemsList)[idata].iMinDam;
	uVar6 = (&AllItemsList)[idata].iMaxDam;
	item[i]._itype = (short)(&AllItemsList)[idata].itype;
	item[i]._iCurs = uVar10;
	item[i]._iName = uVar9;
	item[i]._iIName = uVar9;
	item[i]._iLoc = cVar3;
	item[i]._iClass = cVar4;
	item[i]._iMinDam = uVar5;
	item[i]._iMaxDam = uVar6;
	lVar11 = ENG_random__Fl(((uint)bVar1 - (uint)bVar2) + 1);
	lVar12 = (&AllItemsList)[idata].iFlags;
	uVar10 = (&AllItemsList)[idata].iMiscId;
	uVar5 = (&AllItemsList)[idata].iSpell;
	uVar9 = (&AllItemsList)[idata].iValue;
	bVar1 = (&AllItemsList)[idata].iDurability;
	uVar6 = (&AllItemsList)[idata].iMinStr;
	uVar7 = (&AllItemsList)[idata].iMinMag;
	uVar8 = (&AllItemsList)[idata].iMinDex;
	item[i]._iAC = bVar2 + (char)lVar11;
	item[i]._iMagical = '\0';
	item[i]._iVAdd1 = 0;
	item[i]._iVMult1 = 0;
	item[i]._iVAdd2 = 0;
	item[i]._iVMult2 = 0;
	item[i]._iPLDam = 0;
	item[i]._iPLToHit = 0;
	item[i]._iPLAC = 0;
	item[i]._iPLStr = '\0';
	item[i]._iPLMag = '\0';
	item[i]._iPLDex = '\0';
	item[i]._iPLVit = '\0';
	item[i]._iCharges = '\0';
	item[i]._iMaxCharges = '\0';
	item[i]._iFlags = lVar12;
	item[i]._iMiscId = uVar10;
	item[i]._iSpell = uVar5;
	item[i]._ivalue = (uint)uVar9;
	item[i]._iIvalue = (uint)uVar9;
	item[i]._iDurability = (ushort)bVar1;
	item[i]._iMaxDur = (ushort)bVar1;
	item[i]._iMinStr = uVar6;
	item[i]._iMinMag = uVar7;
	item[i]._iMinDex = uVar8;
	item[i]._iPLFR = '\0';
	uVar10 = item[i]._iMiscId;
	item[i]._iPrePower = -1;
	item[i]._iSufPower = -1;
	item[i]._iPLLR = '\0';
	item[i]._iPLMR = '\0';
	item[i].IDidx = (short)idata;
	item[i]._iPLDamMod = '\0';
	item[i]._iPLGetHit = '\0';
	item[i]._iPLLight = '\0';
	item[i]._iSplLvlAdd = '\0';
	item[i]._iRequest = '\0';
	item[i]._iFMinDam = '\0';
	item[i]._iFMaxDam = '\0';
	item[i]._iLMinDam = '\0';
	item[i]._iLMaxDam = '\0';
	item[i]._iPLEnAc = '\0';
	item[i]._iPLMana = 0;
	item[i]._iPLHP = 0;
	if (uVar10 == '\x18') {
		GetBookSpell__Fii(i,lvl);
	}
	if (item[i]._itype == 0xb) {
		if (gnDifficulty == 0) {
			lVar11 = ENG_random__Fl((uint)currlevel * 10);
			puVar13 = (undefined *)((uint)currlevel * 5 + lVar11);
		}
		if (gnDifficulty == 1) {
			lVar11 = ENG_random__Fl(((uint)currlevel + 0x10) * 10);
			puVar13 = (undefined *)(((uint)currlevel + 0x10) * 5 + lVar11);
		}
		if (gnDifficulty == 2) {
			lVar11 = ENG_random__Fl(((uint)currlevel + 0x20) * 10);
			puVar13 = (undefined *)(((uint)currlevel + 0x20) * 5 + lVar11);
		}
		if (leveltype == '\x04') {
			puVar13 = puVar13 + ((int)puVar13 >> 3);
		}
		if (5000 < (int)puVar13) {
			puVar13 = &DAT_00001388;
		}
		*(undefined **)&item[i]._ivalue = puVar13;
		if ((int)puVar13 < 0x9c4) {
			uVar10 = '\x04';
			if (1000 < (int)puVar13) {
				uVar10 = '\x05';
			}
		}
		else {
			uVar10 = '\x06';
		}
		item[i]._iCurs = uVar10;
	}
	item[i]._PlrCreate = (char)FePlayerNo;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndPL__Fii(int param1 /*$s0*/, int param2 /*$a1*/)
 // line 1857, offset 0x8004180c
	/* begin block 1 */
		// Start line: 1858
		// Start offset: 0x8004180C
	/* end block 1 */
	// End offset: 0x8004182C
	// End Line: 1859

	/* begin block 2 */
		// Start line: 4519
	/* end block 2 */
	// End Line: 4520

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndPL__Fii(int param1,int param2)

{
	long lVar1;
	
	lVar1 = ENG_random__Fl((param2 - param1) + 1);
	return lVar1 + param1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLVal__Fiiiii(int pv /*$a0*/, int p1 /*$a1*/, int p2 /*$a2*/, int minv /*$a3*/, int maxv /*stack 16*/)
 // line 1865, offset 0x80041840
	/* begin block 1 */
		// Start line: 1866
		// Start offset: 0x80041840
	/* end block 1 */
	// End offset: 0x800418AC
	// End Line: 1869

	/* begin block 2 */
		// Start line: 4536
	/* end block 2 */
	// End Line: 4537

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PLVal__Fiiiii(int pv,int p1,int p2,int minv,int maxv)

{
	if ((p1 != p2) && (minv != maxv)) {
		minv = ((((pv - p1) * 100) / (p2 - p1)) * (maxv - minv)) / 100 + minv;
	}
	return minv;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveItemPower__Fiiiiiii(int i /*$s0*/, int power /*$s2*/, int param1 /*$s4*/, int param2 /*$s5*/, int minval /*stack 16*/, int maxval /*stack 20*/, int multval /*stack 24*/)
 // line 1875, offset 0x800418b4
	/* begin block 1 */
		// Start line: 1876
		// Start offset: 0x800418B4
		// Variables:
	// 		int r; // $s3
	// 		int r2; // $s1
	/* end block 1 */
	// End offset: 0x80042FB0
	// End Line: 2158

	/* begin block 2 */
		// Start line: 4556
	/* end block 2 */
	// End Line: 4557

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SaveItemPower__Fiiiiiii
							 (int i,int power,int param1,int param2,int minval,int maxval,int multval)

{
	char cVar1;
	short sVar2;
	short sVar3;
	int pv;
	int iVar4;
	int iVar5;
	uchar uVar6;
	char cVar7;
	uint uVar8;
	char cVar9;
	short sVar10;
	uint uVar11;
	uchar uVar12;
	
	sVar10 = 0;
	sVar3 = 0;
	pv = RndPL__Fii(param1,param2);
	iVar5 = myplr;
	cVar9 = (char)pv;
	uVar6 = (uchar)param1;
	uVar12 = (uchar)param2;
	sVar2 = (short)pv;
	switch(power) {
	case 0:
		item[i]._iPLToHit = item[i]._iPLToHit + sVar2;
		iVar5 = i << 3;
		break;
	case 1:
		item[i]._iPLToHit = item[i]._iPLToHit - sVar2;
		iVar5 = i << 3;
		break;
	case 2:
		item[i]._iPLDam = item[i]._iPLDam + sVar2;
		iVar5 = i << 3;
		break;
	case 3:
		item[i]._iPLDam = item[i]._iPLDam - sVar2;
		iVar5 = i << 3;
		break;
	case 4:
		pv = RndPL__Fii(param1,param2);
		item[i]._iPLDam = item[i]._iPLDam + (short)pv;
		if (param1 == 0x14) {
			iVar5 = RndPL__Fii(1,5);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x24) {
			iVar5 = RndPL__Fii(6,10);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x33) {
			iVar5 = RndPL__Fii(0xb,0xf);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x42) {
			iVar5 = RndPL__Fii(0x10,0x14);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x51) {
			iVar5 = RndPL__Fii(0x15,0x1e);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x60) {
			iVar5 = RndPL__Fii(0x1f,0x28);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x6f) {
			iVar5 = RndPL__Fii(0x29,0x32);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x7e) {
			iVar5 = RndPL__Fii(0x33,0x4b);
			sVar10 = (short)iVar5;
		}
		if (param1 == 0x97) {
			iVar5 = RndPL__Fii(0x4c,100);
			sVar10 = (short)iVar5;
		}
		item[i]._iPLToHit = item[i]._iPLToHit + sVar10;
		iVar5 = i << 3;
		break;
	case 5:
		item[i]._iPLDam = item[i]._iPLDam - sVar2;
		if (param1 == 0x19) {
			iVar5 = RndPL__Fii(1,5);
			sVar3 = (short)iVar5;
		}
		if (param1 == 0x32) {
			iVar5 = RndPL__Fii(6,10);
			sVar3 = (short)iVar5;
		}
		item[i]._iPLToHit = item[i]._iPLToHit - sVar3;
		iVar5 = i << 3;
		break;
	case 6:
		item[i]._iPLAC = item[i]._iPLAC + pv;
		iVar5 = i << 3;
		break;
	case 7:
		item[i]._iPLAC = item[i]._iPLAC - pv;
		iVar5 = i << 3;
		break;
	case 8:
		item[i]._iPLFR = item[i]._iPLFR + cVar9;
		iVar5 = i << 3;
		break;
	case 9:
		item[i]._iPLLR = item[i]._iPLLR + cVar9;
		iVar5 = i << 3;
		break;
	case 10:
		item[i]._iPLMR = item[i]._iPLMR + cVar9;
		iVar5 = i << 3;
		break;
	case 0xb:
		cVar1 = item[i]._iPLLR;
		item[i]._iPLFR = item[i]._iPLFR + cVar9;
		cVar7 = item[i]._iPLMR;
		item[i]._iPLLR = cVar1 + cVar9;
		cVar1 = item[i]._iPLFR;
		item[i]._iPLMR = cVar7 + cVar9;
		if (cVar1 < '\0') {
			item[i]._iPLFR = '\0';
		}
		if (item[i]._iPLLR < '\0') {
			item[i]._iPLLR = '\0';
		}
		iVar5 = i * 8;
		if (item[i]._iPLMR < '\0') {
			item[i]._iPLMR = '\0';
			iVar5 = i * 7;
			goto LAB_80042f00;
		}
		break;
	default:
switchD_8004192c_caseD_c:
		iVar5 = i << 3;
		break;
	case 0xe:
		item[i]._iSplLvlAdd = cVar9;
		iVar5 = i << 3;
		break;
	case 0xf:
		uVar6 = item[i]._iCharges * uVar6;
		item[i]._iCharges = uVar6;
		item[i]._iMaxCharges = uVar6;
		iVar5 = i << 3;
		break;
	case 0x10:
		uVar8 = item[i]._iFlags;
		item[i]._iFMinDam = uVar6;
		item[i]._iFMaxDam = uVar12;
		item[i]._iFlags = uVar8 | 0x10;
		iVar5 = i << 3;
		break;
	case 0x11:
		uVar8 = item[i]._iFlags;
		item[i]._iLMinDam = uVar6;
		item[i]._iLMaxDam = uVar12;
		item[i]._iFlags = uVar8 | 0x20;
		iVar5 = i << 3;
		break;
	case 0x13:
		item[i]._iPLStr = item[i]._iPLStr + cVar9;
		iVar5 = i << 3;
		break;
	case 0x14:
		item[i]._iPLStr = item[i]._iPLStr - cVar9;
		iVar5 = i << 3;
		break;
	case 0x15:
		item[i]._iPLMag = item[i]._iPLMag + cVar9;
		iVar5 = i << 3;
		break;
	case 0x16:
		item[i]._iPLMag = item[i]._iPLMag - cVar9;
		iVar5 = i << 3;
		break;
	case 0x17:
		item[i]._iPLDex = item[i]._iPLDex + cVar9;
		iVar5 = i << 3;
		break;
	case 0x18:
		item[i]._iPLDex = item[i]._iPLDex - cVar9;
		iVar5 = i << 3;
		break;
	case 0x19:
		item[i]._iPLVit = item[i]._iPLVit + cVar9;
		iVar5 = i << 3;
		break;
	case 0x1a:
		item[i]._iPLVit = item[i]._iPLVit - cVar9;
		iVar5 = i << 3;
		break;
	case 0x1b:
		cVar1 = item[i]._iPLMag;
		item[i]._iPLStr = item[i]._iPLStr + cVar9;
		cVar7 = item[i]._iPLDex;
		item[i]._iPLMag = cVar1 + cVar9;
		cVar7 = cVar7 + cVar9;
		cVar9 = item[i]._iPLVit + cVar9;
		goto LAB_8004228c;
	case 0x1c:
		cVar1 = item[i]._iPLMag;
		item[i]._iPLStr = item[i]._iPLStr - cVar9;
		cVar7 = item[i]._iPLDex;
		item[i]._iPLMag = cVar1 - cVar9;
		cVar7 = cVar7 - cVar9;
		cVar9 = item[i]._iPLVit - cVar9;
LAB_8004228c:
		item[i]._iPLDex = cVar7;
		item[i]._iPLVit = cVar9;
		iVar5 = i << 3;
		break;
	case 0x1d:
		item[i]._iPLGetHit = item[i]._iPLGetHit + cVar9;
		iVar5 = i << 3;
		break;
	case 0x1e:
		item[i]._iPLGetHit = item[i]._iPLGetHit - cVar9;
		iVar5 = i << 3;
		break;
	case 0x1f:
		item[i]._iPLHP = item[i]._iPLHP + sVar2 * 0x40;
		iVar5 = i << 3;
		break;
	case 0x20:
		item[i]._iPLHP = item[i]._iPLHP + sVar2 * -0x40;
		iVar5 = i << 3;
		break;
	case 0x21:
		drawmanaflag = '\x01';
		item[i]._iPLMana = item[i]._iPLMana + sVar2 * 0x40;
		iVar5 = i << 3;
		break;
	case 0x22:
		drawmanaflag = '\x01';
		item[i]._iPLMana = item[i]._iPLMana + sVar2 * -0x40;
		iVar5 = i << 3;
		break;
	case 0x23:
		sVar2 = item[i]._iDurability;
		sVar10 = (short)(((int)item[i]._iMaxDur * pv) / 100);
		item[i]._iMaxDur = item[i]._iMaxDur + sVar10;
		item[i]._iDurability = sVar2 + sVar10;
		iVar5 = i << 3;
		break;
	case 0x24:
		iVar5 = (int)item[i]._iMaxDur - ((int)item[i]._iMaxDur * pv) / 100;
		item[i]._iMaxDur = (short)iVar5;
		if (iVar5 * 0x10000 < 1) {
			item[i]._iMaxDur = 1;
		}
		item[i]._iDurability = item[i]._iMaxDur;
		iVar5 = i << 3;
		break;
	case 0x25:
		item[i]._iDurability = 0xff;
		item[i]._iMaxDur = 0xff;
		iVar5 = i << 3;
		break;
	case 0x26:
		item[i]._iPLLight = item[i]._iPLLight + uVar6;
		iVar5 = i << 3;
		break;
	case 0x27:
		item[i]._iPLLight = item[i]._iPLLight - uVar6;
		iVar5 = i << 3;
		break;
	case 0x2a:
		uVar8 = item[i]._iFlags;
		item[i]._iFMinDam = uVar6;
		item[i]._iFMaxDam = uVar12;
		item[i]._iFlags = uVar8 | 8;
		iVar5 = i << 3;
		break;
	case 0x2b:
		uVar8 = item[i]._iFlags;
		item[i]._iLMinDam = uVar6;
		item[i]._iLMaxDam = uVar12;
		uVar11 = 0x2000000;
		goto LAB_80042bf4;
	case 0x2c:
		item[i]._iCurs = uVar6;
		iVar5 = i << 3;
		break;
	case 0x2d:
		uVar8 = item[i]._iFlags;
		uVar11 = 0x4000000;
		goto LAB_80042bf4;
	case 0x2e:
		drawmanaflag = '\x01';
		uVar8 = item[i]._iFlags;
		uVar11 = 0x8000000;
		goto LAB_80042bf4;
	case 0x2f:
		item[i]._iFlags = item[i]._iFlags | 0x100;
		iVar5 = i << 3;
		break;
	case 0x34:
		uVar8 = item[i]._iFlags;
		uVar11 = 0x10000000;
		goto LAB_80042bf4;
	case 0x35:
		item[i]._iFlags = item[i]._iFlags | 0x800;
		iVar5 = i << 3;
		break;
	case 0x36:
		item[i]._iFlags = item[i]._iFlags | 0x1000;
		iVar5 = i << 3;
		break;
	case 0x37:
		if (param1 == 3) {
			item[i]._iFlags = item[i]._iFlags | 0x2000;
		}
		if (param1 == 5) {
			item[i]._iFlags = item[i]._iFlags | 0x4000;
		}
		drawmanaflag = '\x01';
		iVar5 = i << 3;
		break;
	case 0x38:
		if (param1 == 3) {
			item[i]._iFlags = item[i]._iFlags | 0x8000;
		}
		if (param1 == 5) {
			item[i]._iFlags = item[i]._iFlags | 0x10000;
		}
		drawhpflag = '\x01';
		iVar5 = i << 3;
		break;
	case 0x3a:
		if (param1 == 1) {
			item[i]._iFlags = item[i]._iFlags | 0x20000;
		}
		if (param1 == 2) {
			item[i]._iFlags = item[i]._iFlags | 0x40000;
		}
		if (param1 == 3) {
			item[i]._iFlags = item[i]._iFlags | 0x80000;
		}
		iVar5 = i * 8;
		if (param1 == 4) {
			uVar8 = item[i]._iFlags;
			uVar11 = 0x100000;
			goto LAB_80042bf4;
		}
		break;
	case 0x3b:
		if (param1 == 1) {
			item[i]._iFlags = item[i]._iFlags | 0x200000;
		}
		if (param1 == 2) {
			item[i]._iFlags = item[i]._iFlags | 0x400000;
		}
		iVar5 = i * 8;
		if (param1 == 3) {
			uVar8 = item[i]._iFlags;
			uVar11 = 0x800000;
			goto LAB_80042bf4;
		}
		break;
	case 0x3c:
		uVar8 = item[i]._iFlags;
		uVar11 = 0x1000000;
		goto LAB_80042bf4;
	case 0x3d:
		item[i]._iPLDamMod = item[i]._iPLDamMod + cVar9;
		iVar5 = i << 3;
		break;
	case 0x3e:
		item[i]._iFlags = item[i]._iFlags | 4;
		iVar5 = i << 3;
		break;
	case 0x3f:
		item[i]._iMinDam = uVar6;
		item[i]._iMaxDam = uVar12;
		iVar5 = i << 3;
		break;
	case 0x40:
		item[i]._iDurability = (short)param1;
		item[i]._iMaxDur = (short)param1;
		iVar5 = i << 3;
		break;
	case 0x41:
		item[i]._iMinStr = '\0';
		iVar5 = i << 3;
		break;
	case 0x42:
		item[i]._iSpell = uVar6;
		item[i]._iCharges = uVar6;
		item[i]._iMaxCharges = uVar12;
		iVar5 = i << 3;
		break;
	case 0x43:
		uVar8 = item[i]._iFlags;
		uVar11 = 0x80000;
		goto LAB_80042bf4;
	case 0x44:
		item[i]._iLoc = '\x01';
		iVar5 = i << 3;
		break;
	case 0x45:
		uVar8 = item[i]._iFlags;
		uVar11 = 0x40000000;
		goto LAB_80042bf4;
	case 0x46:
		uVar8 = item[i]._iFlags;
		uVar11 = 0x80000000;
LAB_80042bf4:
		item[i]._iFlags = uVar8 | uVar11;
		iVar5 = i << 3;
		break;
	case 0x48:
		item[i]._iFlags = item[i]._iFlags | 0x40;
		iVar5 = i << 3;
		break;
	case 0x49:
		item[i]._iFlags = item[i]._iFlags | 2;
		iVar5 = i << 3;
		break;
	case 0x4a:
		item[i]._iFlags = item[i]._iFlags | 1;
		iVar5 = i << 3;
		break;
	case 0x4b:
		item[i]._iAC = cVar9;
		iVar5 = i << 3;
		break;
	case 0x4c:
		sVar10 = (short)(&plr)[myplr]._pIBonusAC + (short)(&plr)[myplr]._pIAC;
		item[i]._iPLHP = sVar10;
		sVar2 = (&plr)[iVar5]._pDexterity;
		item[i]._iPLHP = (sVar10 + ((sVar2 / 5 + ((sVar2 >> 0x10) >> 0xf)) - (sVar2 >> 0xf))) * 0x40;
		iVar5 = i << 3;
		break;
	case 0x4d:
		cVar9 = (char)((uint)(&plr)[myplr]._pMaxManaBase >> 0x18);
		item[i]._iAC = item[i]._iAC +
									 (((char)(((&plr)[myplr]._pMaxManaBase >> 6) / 10) + ((cVar9 >> 6) >> 7)) -
									 (cVar9 >> 7));
		iVar5 = i << 3;
		break;
	case 0x4e:
		iVar4 = 0x1e - (uint)(byte)(&plr)[myplr]._pLevel;
		item[i]._iPLFR = (char)iVar4;
		iVar5 = i << 3;
		if (iVar4 * 0x1000000 < 0) {
			item[i]._iPLFR = '\0';
			goto switchD_8004192c_caseD_c;
		}
		break;
	case 0x4f:
		item[i]._iAC = item[i]._iAC - cVar9;
		iVar5 = i << 3;
	}
	iVar5 = iVar5 - i;
LAB_80042f00:
	iVar5 = iVar5 * 4 - i;
	if (((&item[0]._iVAdd1)[iVar5] == 0) && ((&item[0]._iVMult1)[iVar5] == 0)) {
		pv = PLVal__Fiiiii(pv,param1,param2,minval,maxval);
		(&item[0]._iVAdd1)[iVar5] = pv;
		(&item[0]._iVMult1)[iVar5] = multval;
	}
	else {
		iVar5 = PLVal__Fiiiii(pv,param1,param2,minval,maxval);
		item[i]._iVAdd2 = iVar5;
		item[i]._iVMult2 = multval;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemPower__FiiilUc(int i /*$s2*/, int minlvl /*stack -56*/, int maxlvl /*stack -48*/, long flgs /*$s3*/, int onlygood /*stack 16*/)
 // line 2165, offset 0x80042fe4
	/* begin block 1 */
		// Start line: 2166
		// Start offset: 0x80042FE4
		// Variables:
	// 		int pre; // $s0
	// 		int post; // $s7
	// 		int l[256]; // stack offset -1208
	// 		int nl; // $a0
	// 		int j; // $a3
	// 		int preidx; // $s4
	// 		int sufidx; // $fp
	// 		char istr[128]; // stack offset -184
	// 		unsigned char goe; // $s5
	/* end block 1 */
	// End offset: 0x80043400
	// End Line: 2268

	/* begin block 2 */
		// Start line: 5166
	/* end block 2 */
	// End Line: 5167

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetItemPower__FiiilUc(int i,int minlvl,int maxlvl,long flgs,int onlygood)

{
	long lVar1;
	long lVar2;
	long lVar3;
	int v;
	int iVar4;
	int *piVar5;
	int *piVar6;
	int iVar7;
	int *piVar8;
	int iVar9;
	int iVar10;
	byte bVar11;
	int iVar12;
	int local_4b8 [288];
	int local_38;
	int local_30;
	
	local_38 = minlvl;
	local_30 = maxlvl;
	lVar1 = ENG_random__Fl(4);
	lVar2 = ENG_random__Fl(3);
	if ((lVar1 != 0) && (lVar2 == 0)) {
		lVar3 = ENG_random__Fl(2);
		if (lVar3 == 0) {
			lVar1 = 0;
		}
		else {
			lVar2 = 1;
		}
	}
	iVar10 = -1;
	iVar12 = -1;
	bVar11 = 0;
	if (((char)onlygood == '\0') && (lVar3 = ENG_random__Fl(3), lVar3 != 0)) {
		onlygood._0_1_ = '\x01';
	}
	v = 0;
	if (lVar1 == 0) {
		iVar9 = 0;
		if (PL_Prefix[0].PLPower != -1) {
			piVar8 = &PL_Prefix[0].PLPower;
			iVar7 = 0;
			iVar4 = v;
			piVar5 = local_4b8;
			do {
				v = iVar4;
				piVar6 = piVar5;
				if ((((((*(uint *)((int)&PL_Prefix[0].PLIType + iVar7) & flgs) != 0) &&
							(v = iVar4, piVar6 = piVar5, local_38 <= (int)(&PL_Prefix[0].PLMinLvl)[iVar7])) &&
						 (v = iVar4, piVar6 = piVar5, (int)(&PL_Prefix[0].PLMinLvl)[iVar7] <= local_30)) &&
						(((char)onlygood == '\0' ||
						 (v = iVar4, piVar6 = piVar5, (&PL_Prefix[0].PLOk)[iVar7] != '\0')))) &&
					 ((flgs != 0x100 || (v = iVar4, piVar6 = piVar5, *piVar8 != 0xf)))) {
					*piVar5 = iVar9;
					piVar6 = piVar5 + 1;
					v = iVar4 + 1;
					if ((&PL_Prefix[0].PLDouble)[iVar7] != '\0') {
						*piVar6 = iVar9;
						piVar6 = piVar5 + 2;
						v = iVar4 + 2;
					}
				}
				piVar8 = piVar8 + 10;
				iVar7 = iVar7 + 0x28;
				iVar9 = iVar9 + 1;
				iVar4 = v;
				piVar5 = piVar6;
			} while (*piVar8 != -1);
		}
		if (v != 0) {
			lVar1 = ENG_random__Fl(v);
			iVar10 = local_4b8[lVar1];
			item[i]._iMagical = '\x01';
			SaveItemPower__Fiiiiiii
								(i,PL_Prefix[iVar10].PLPower,PL_Prefix[iVar10].PLParam1,PL_Prefix[iVar10].PLParam2,
								 PL_Prefix[iVar10].PLMinVal,PL_Prefix[iVar10].PLMaxVal,PL_Prefix[iVar10].PLMultVal);
			bVar11 = PL_Prefix[iVar10].PLGOE;
			item[i]._iPrePower = (char)iVar10;
		}
	}
	v = 0;
	if (lVar2 != 0) {
		iVar9 = 0;
		if (PL_Suffix[0].PLPower != -1) {
			piVar8 = local_4b8;
			iVar4 = 0;
			do {
				if (((((*(uint *)((int)&PL_Suffix[0].PLIType + iVar4) & flgs) != 0) &&
						 (local_38 <= (int)(&PL_Suffix[0].PLMinLvl)[iVar4])) &&
						(((int)(&PL_Suffix[0].PLMinLvl)[iVar4] <= local_30 &&
						 ((bVar11 | (&PL_Suffix[0].PLGOE)[iVar4]) != 0x11)))) &&
					 (((char)onlygood == '\0' || ((&PL_Suffix[0].PLOk)[iVar4] != '\0')))) {
					*piVar8 = iVar9;
					piVar8 = piVar8 + 1;
					v = v + 1;
				}
				piVar5 = (int *)((int)&PL_Suffix[1].PLPower + iVar4);
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + 0x28;
			} while (*piVar5 != -1);
		}
		if (v != 0) {
			lVar1 = ENG_random__Fl(v);
			iVar12 = local_4b8[lVar1];
			item[i]._iMagical = '\x01';
			SaveItemPower__Fiiiiiii
								(i,PL_Suffix[iVar12].PLPower,PL_Suffix[iVar12].PLParam1,PL_Suffix[iVar12].PLParam2,
								 PL_Suffix[iVar12].PLMinVal,PL_Suffix[iVar12].PLMaxVal,PL_Suffix[iVar12].PLMultVal);
			item[i]._iSufPower = (char)iVar12;
		}
	}
	if ((iVar10 != -1) || (iVar12 != -1)) {
		CalcItemValue__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemBonus__FiiiiUc(int i /*$a0*/, int idata /*$a1*/, int minlvl /*$a1*/, int maxlvl /*$a3*/, int onlygood /*stack 16*/)
 // line 2274, offset 0x80043434
	/* begin block 1 */
		// Start line: 2275
		// Start offset: 0x80043434
	/* end block 1 */
	// End offset: 0x80043520
	// End Line: 2307

	/* begin block 2 */
		// Start line: 5403
	/* end block 2 */
	// End Line: 5404

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetItemBonus__FiiiiUc(int i,int idata,int minlvl,int maxlvl,int onlygood)

{
	long flgs;
	
	if (item[i]._iClass == '\x04') {
		return;
	}
	if (0x19 < minlvl) {
		minlvl = 0x19;
	}
	switch((int)(((uint)(ushort)item[i]._itype - 1) * 0x10000) >> 0x10) {
	case 0:
	case 1:
	case 3:
		flgs = 0x1000;
		break;
	case 2:
		flgs = 0x10;
		break;
	case 4:
		flgs = 0x10000;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
		flgs = 0x100000;
		break;
	case 9:
		GetStaffSpell__FiiUc(i,maxlvl,(uchar)onlygood);
		return;
	default:
		goto switchD_800434b4_caseD_a;
	case 0xb:
	case 0xc:
		flgs = 1;
	}
	GetItemPower__FiiilUc(i,minlvl,maxlvl,flgs,onlygood & 0xff);
switchD_800434b4_caseD_a:
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupItem__Fi(int i /*$a0*/)
 // line 2314, offset 0x80043530
	/* begin block 1 */
		// Start line: 2315
		// Start offset: 0x80043530
		// Variables:
	// 		int it; // $v0
	/* end block 1 */
	// End offset: 0x80043658
	// End Line: 2344

	/* begin block 2 */
		// Start line: 5498
	/* end block 2 */
	// End Line: 5499

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupItem__Fi(int i)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	
	bVar1 = ItemCAnimTbl[(uint)item[i]._iCurs];
	item[i]._iIdentified = '\0';
	item[i]._iPostDraw = '\0';
	iVar3 = myplr;
	item[i].ItemFrame = Item2Frm[(uint)bVar1];
	if ((&plr)[iVar3].pLvlLoad == '\0') {
		item[i]._iAnimFrame = '\x01';
		item[i]._iAnimFlag = '\x01';
		item[i]._iSelFlag = '\0';
	}
	else {
		cVar2 = item[i]._iAnimLen;
		item[i]._iAnimFlag = '\0';
		item[i]._iSelFlag = '\x01';
		item[i]._iAnimFrame = cVar2;
	}
	item[i]._PlrCreate = (char)FePlayerNo;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndItem__Fi(int m /*$a0*/)
 // line 2352, offset 0x80043660
	/* begin block 1 */
		// Start line: 2353
		// Start offset: 0x80043660
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a0
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x80043880
	// End Line: 2389

	/* begin block 2 */
		// Start line: 5584
	/* end block 2 */
	// End Line: 5585

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndItem__Fi(int m)

{
	char *pcVar1;
	ushort uVar2;
	int iVar3;
	uint uVar4;
	long lVar5;
	uchar uVar6;
	int v;
	int *piVar7;
	int iVar8;
	int iVar9;
	int local_808 [512];
	
	uVar2 = (monster[m].MData)->mTreasure;
	if ((uVar2 & 0x8000) == 0) {
		uVar4 = 0;
		if ((uVar2 & 0x4000) == 0) {
			lVar5 = ENG_random__Fl(100);
			uVar4 = 0;
			if (lVar5 < 0x29) {
				lVar5 = ENG_random__Fl(100);
				iVar3 = FePlayerNo;
				v = 0;
				if (lVar5 < 0x1a) {
					iVar9 = 0;
					if (AllItemsList.iLoc != -1) {
						piVar7 = local_808;
						iVar8 = 0;
						do {
							if (((&AllItemsList.iRnd)[iVar8] == '\x02') &&
								 ((&AllItemsList.iMinMLvl)[iVar8] <= monster[m].mLevel)) {
								*piVar7 = iVar9;
								piVar7 = piVar7 + 1;
								v = v + 1;
							}
							if (((&AllItemsList.iRnd)[iVar8] != '\0') &&
								 ((&AllItemsList.iMinMLvl)[iVar8] <= monster[m].mLevel)) {
								*piVar7 = iVar9;
								piVar7 = piVar7 + 1;
								v = v + 1;
							}
							uVar6 = (&AllItemsList.iSpell)[iVar8];
							if ((uVar6 == ' ') && (iVar3 == 0)) {
								piVar7 = piVar7 + -1;
								v = v + -1;
								uVar6 = (&AllItemsList.iSpell)[iVar8];
							}
							if ((uVar6 == '\"') && (iVar3 == 0)) {
								piVar7 = piVar7 + -1;
								v = v + -1;
							}
							uVar6 = (&AllItemsList.iSpell)[iVar8];
							if ((uVar6 == '\x17') && (iVar3 != 0)) {
								piVar7 = piVar7 + -1;
								v = v + -1;
								uVar6 = (&AllItemsList.iSpell)[iVar8];
							}
							if ((uVar6 == '\n') && (iVar3 != 0)) {
								piVar7 = piVar7 + -1;
								v = v + -1;
							}
							pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar8;
							iVar9 = iVar9 + 1;
							iVar8 = iVar8 + 0x20;
						} while (*pcVar1 != -1);
					}
					lVar5 = ENG_random__Fl(v);
					uVar4 = local_808[lVar5] + 1;
				}
				else {
					uVar4 = 1;
				}
			}
		}
	}
	else {
		uVar4 = ~((uint)uVar2 & 0xfff);
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndUItem__Fi(int m /*$a0*/)
 // line 2396, offset 0x80043894
	/* begin block 1 */
		// Start line: 2397
		// Start offset: 0x80043894
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $t0
	// 		int i; // $t1
	// 		unsigned char okflag; // $a1
	/* end block 1 */
	// End offset: 0x80043ACC
	// End Line: 2428

	/* begin block 2 */
		// Start line: 5684
	/* end block 2 */
	// End Line: 5685

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndUItem__Fi(int m)

{
	char *pcVar1;
	char cVar2;
	ushort uVar3;
	bool bVar4;
	int iVar5;
	uint uVar6;
	uint uVar7;
	uchar uVar8;
	int iVar9;
	long v;
	uint local_808 [512];
	
	iVar5 = FePlayerNo;
	if (((m == -1) || (uVar3 = (monster[m].MData)->mTreasure, (uVar3 & 0x8000) == 0)) ||
		 (gbMaxPlayers != '\x01')) {
		v = 0;
		uVar6 = 0;
		if (AllItemsList.iLoc != -1) {
			uVar7 = (uint)currlevel;
			iVar9 = 0;
			do {
				if (m == -1) {
					bVar4 = (int)(uVar7 << 1) < (int)(&AllItemsList.iMinMLvl)[iVar9];
				}
				else {
					bVar4 = monster[m].mLevel < (&AllItemsList.iMinMLvl)[iVar9];
				}
				cVar2 = (&AllItemsList.itype)[iVar9];
				bVar4 = (&AllItemsList.iMiscId)[iVar9] == '\x18' ||
								cVar2 != '\x0e' &&
								(cVar2 != '\v' && (cVar2 != '\0' && (!bVar4 && (&AllItemsList.iRnd)[iVar9] != '\0'))
								);
				uVar8 = (&AllItemsList.iSpell)[iVar9];
				if ((uVar8 == ' ') && (iVar5 == 0)) {
					bVar4 = false;
					uVar8 = (&AllItemsList.iSpell)[iVar9];
				}
				if ((uVar8 == '\"') && (iVar5 == 0)) {
					bVar4 = false;
				}
				uVar8 = (&AllItemsList.iSpell)[iVar9];
				if ((uVar8 == '\x17') && (iVar5 != 0)) {
					bVar4 = false;
					uVar8 = (&AllItemsList.iSpell)[iVar9];
				}
				if ((uVar8 == '\n') && (iVar5 != 0)) {
					bVar4 = false;
				}
				if (bVar4) {
					local_808[v] = uVar6;
					v = v + 1;
				}
				pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar9;
				uVar6 = uVar6 + 1;
				iVar9 = iVar9 + 0x20;
			} while (*pcVar1 != -1);
		}
		v = ENG_random__Fl(v);
		uVar6 = local_808[v];
	}
	else {
		uVar6 = ~((uint)uVar3 & 0xfff);
	}
	return uVar6;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndAllItems__Fv()
 // line 2435, offset 0x80043adc
	/* begin block 1 */
		// Start line: 2436
		// Start offset: 0x80043ADC
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a0
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x80043C30
	// End Line: 2459

	/* begin block 2 */
		// Start line: 5762
	/* end block 2 */
	// End Line: 5763

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndAllItems__Fv(void)

{
	char *pcVar1;
	long lVar2;
	int iVar3;
	uint uVar4;
	uchar uVar5;
	int v;
	int iVar6;
	int iVar7;
	int local_808 [512];
	
	lVar2 = ENG_random__Fl(100);
	iVar3 = FePlayerNo;
	v = 0;
	if (lVar2 < 0x1a) {
		iVar7 = 0;
		if (AllItemsList.iLoc != -1) {
			uVar4 = (uint)currlevel;
			iVar6 = 0;
			do {
				if (((&AllItemsList.iRnd)[iVar6] != '\0') &&
					 ((int)(&AllItemsList.iMinMLvl)[iVar6] <= (int)(uVar4 << 1))) {
					local_808[v] = iVar7;
					v = v + 1;
				}
				uVar5 = (&AllItemsList.iSpell)[iVar6];
				if ((uVar5 == ' ') && (iVar3 == 0)) {
					v = v + -1;
					uVar5 = (&AllItemsList.iSpell)[iVar6];
				}
				if ((uVar5 == '\"') && (iVar3 == 0)) {
					v = v + -1;
				}
				uVar5 = (&AllItemsList.iSpell)[iVar6];
				if ((uVar5 == '\x17') && (iVar3 != 0)) {
					v = v + -1;
					uVar5 = (&AllItemsList.iSpell)[iVar6];
				}
				if ((uVar5 == '\n') && (iVar3 != 0)) {
					v = v + -1;
				}
				pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar6;
				iVar7 = iVar7 + 1;
				iVar6 = iVar6 + 0x20;
			} while (*pcVar1 != -1);
		}
		lVar2 = ENG_random__Fl(v);
		iVar3 = local_808[lVar2];
	}
	else {
		iVar3 = 0;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndTypeItems__Fii(int itype /*$t4*/, int imid /*$a1*/)
 // line 2466, offset 0x80043c40
	/* begin block 1 */
		// Start line: 2467
		// Start offset: 0x80043C40
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a0
	// 		int i; // $t0
	// 		unsigned char okflag; // $a3
	/* end block 1 */
	// End offset: 0x80043DA0
	// End Line: 2492

	/* begin block 2 */
		// Start line: 5824
	/* end block 2 */
	// End Line: 5825

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndTypeItems__Fii(int itype,int imid)

{
	char *pcVar1;
	bool bVar2;
	uint uVar3;
	long v;
	int iVar4;
	int iVar5;
	int local_808 [512];
	
	v = 0;
	iVar5 = 0;
	if (AllItemsList.iLoc != -1) {
		uVar3 = (uint)currlevel;
		iVar4 = 0;
		do {
			bVar2 = (int)(&AllItemsList.itype)[iVar4] == itype &&
							((int)(&AllItemsList.iMinMLvl)[iVar4] <= (int)(uVar3 << 1) &&
							(&AllItemsList.iRnd)[iVar4] != '\0');
			if ((imid != -1) && ((uint)(&AllItemsList.iMiscId)[iVar4] != imid)) {
				bVar2 = false;
			}
			if ((((FePlayerNo != 0) && (((imid == 0x15 || (imid == 0x18)) || (imid - 0x16U < 2)))) &&
					((uint)(&AllItemsList.iMiscId)[iVar4] == imid)) &&
				 (((&AllItemsList.iSpell)[iVar4] == '\x17' || ((&AllItemsList.iSpell)[iVar4] == '\n')))) {
				bVar2 = false;
			}
			if (bVar2) {
				local_808[v] = iVar5;
				v = v + 1;
			}
			pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar4;
			iVar5 = iVar5 + 1;
			iVar4 = iVar4 + 0x20;
		} while (*pcVar1 != -1);
	}
	v = ENG_random__Fl(v);
	return local_808[v];
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckUnique__FiiiUc(int i /*$s1*/, int lvl /*$s3*/, int uper /*$s0*/, unsigned char recreate /*$s2*/)
 // line 2498, offset 0x80043db0
	/* begin block 1 */
		// Start line: 2499
		// Start offset: 0x80043DB0
		// Variables:
	// 		int j; // $a0
	// 		int idata; // $v0
	// 		unsigned char uok[128]; // stack offset -152
	// 		int numu; // $s0
	/* end block 1 */
	// End offset: 0x80043F34
	// End Line: 2535

	/* begin block 2 */
		// Start line: 5889
	/* end block 2 */
	// End Line: 5890

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckUnique__FiiiUc(int i,int lvl,int uper,uchar recreate)

{
	long lVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;
	char local_98 [128];
	
	lVar1 = ENG_random__Fl(100);
	iVar2 = -1;
	if (lVar1 <= uper) {
		iVar5 = 0;
		memset(local_98,0,0x80);
		iVar2 = 0;
		if (UniqueItemList[0].UIItemId != -1) {
			pcVar3 = &UniqueItemList[0].UIItemId;
			iVar4 = 0;
			do {
				if (((*pcVar3 == (&AllItemsList)[(int)item[i].IDidx].iItemId) &&
						((int)(&UniqueItemList[0].UIMinLvl)[iVar4] <= lvl)) &&
					 ((recreate != '\0' || (((&UniqueItemFlag)[iVar2] == '\0' || (gbMaxPlayers != '\x01'))))))
				{
					local_98[iVar2] = '\x01';
					iVar5 = iVar5 + 1;
				}
				pcVar3 = pcVar3 + 0x54;
				iVar4 = iVar4 + 0x54;
				iVar2 = iVar2 + 1;
			} while (*pcVar3 != -1);
		}
		iVar2 = -1;
		if (iVar5 != 0) {
			ENG_random__Fl(10);
			iVar2 = 0;
			if (iVar5 < 1) {
				iVar2 = 0;
			}
			else {
				pcVar3 = local_98;
				while( true ) {
					if (*pcVar3 != '\0') {
						iVar5 = iVar5 + -1;
					}
					if (iVar5 < 1) break;
					iVar2 = iVar2 + 1;
					pcVar3 = pcVar3 + 1;
					if (iVar2 == 0x80) {
						iVar2 = 0;
						pcVar3 = local_98;
					}
				}
			}
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetUniqueItem__Fii(int i /*$s2*/, int _uid /*$s5*/)
 // line 2541, offset 0x80043f54
	/* begin block 1 */
		// Start line: 2542
		// Start offset: 0x80043F54
		// Variables:
	// 		long uid; // $s1
	// 		long OUid; // $s6
	/* end block 1 */
	// End offset: 0x80044288
	// End Line: 2592

	/* begin block 2 */
		// Start line: 5985
	/* end block 2 */
	// End Line: 5986

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetUniqueItem__Fii(int i,int _uid)

{
	char cVar1;
	ushort uVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	
	uVar5 = _uid & 0xff;
	SaveItemPower__Fiiiiiii
						(i,(int)UniqueItemList[uVar5].UIPower1,UniqueItemList[uVar5].UIParam1,
						 UniqueItemList[uVar5].UIParam2,0,0,1);
	cVar1 = UniqueItemList[uVar5].UINumPL;
	if ('\x01' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uVar5].UIPower2,UniqueItemList[uVar5].UIParam3,
							 UniqueItemList[uVar5].UIParam4,0,0,1);
	}
	if ('\x02' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uVar5].UIPower3,UniqueItemList[uVar5].UIParam5,
							 UniqueItemList[uVar5].UIParam6,0,0,1);
	}
	if ('\x03' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uVar5].UIPower4,UniqueItemList[uVar5].UIParam7,
							 UniqueItemList[uVar5].UIParam8,0,0,1);
	}
	if ('\x04' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uVar5].UIPower5,UniqueItemList[uVar5].UIParam9,
							 UniqueItemList[uVar5].UIParam10,0,0,1);
	}
	if ('\x05' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uVar5].UIPower6,UniqueItemList[uVar5].UIParam11,
							 UniqueItemList[uVar5].UIParam12,0,0,1);
	}
	iVar4 = UniqueItemList[uVar5].UIValue;
	item[i]._iIName = (ushort)UniqueItemList[uVar5].UIName;
	item[i]._iIvalue = iVar4;
	if ((_uid & 0xffffff00U) == 0) {
		(&UniqueItemFlag)[uVar5] = (&UniqueItemFlag)[uVar5] + '\x01';
		uVar3 = GetRndSeed__Fv();
		item[i]._iSeed = uVar3 & 0xffff00;
		item[i]._iSeed = uVar3 & 0xffff00 | uVar5 | (uint)(&UniqueItemFlag)[uVar5] << 0x18;
	}
	else {
		if ((&UniqueItemFlag)[uVar5] == '\0') {
			(&UniqueItemFlag)[uVar5] = (&UniqueItemFlag)[uVar5] + '\x01';
		}
		item[i]._iSeed = _uid;
	}
	item[i]._iMagical = '\x02';
	uVar2 = item[i]._iCreateInfo;
	item[i]._iUid = (char)uVar5;
	iVar4 = FePlayerNo;
	item[i]._iCreateInfo = uVar2 | 0x200;
	item[i]._PlrCreate = (char)iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnUnique__Fiii(int uid /*$s2*/, int x /*$a0*/, int y /*$a1*/)
 // line 2628, offset 0x800442b4
	/* begin block 1 */
		// Start line: 2629
		// Start offset: 0x800442B4
		// Variables:
	// 		int ii; // $s1
	// 		int itype; // $a3
	/* end block 1 */
	// End offset: 0x800443D8
	// End Line: 2648

	/* begin block 2 */
		// Start line: 6198
	/* end block 2 */
	// End Line: 6199

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnUnique__Fiii(int uid,int x,int y)

{
	char *pcVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	int iVar5;
	int idata;
	int i;
	
	cVar3 = itemavail;
	if ((numitems < 0x7f) && ((&UniqueItemFlag)[uid] == '\0')) {
		i = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		cVar4 = AllItemsList.iItemId;
		cVar2 = UniqueItemList[uid].UIItemId;
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar3;
		idata = 0;
		if (cVar4 != cVar2) {
			iVar5 = 0;
			do {
				pcVar1 = &ItemDataStruct_801113c4.iItemId + iVar5;
				idata = idata + 1;
				iVar5 = iVar5 + 0x20;
			} while (*pcVar1 != cVar2);
		}
		GetItemAttrs__Fiii(i,idata,(uint)currlevel);
		GetUniqueItem__Fii(i,uid);
		SetupItem__Fi(i);
		if (deltaload == '\0') {
			NetSendCmdDItem__FUci('\0',i);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ItemRndDur__Fi(int ii /*$a0*/)
 // line 2659, offset 0x800443f4
	/* begin block 1 */
		// Start line: 2660
		// Start offset: 0x800443F4
	/* end block 1 */
	// End offset: 0x8004447C
	// End Line: 2663

	/* begin block 2 */
		// Start line: 6271
	/* end block 2 */
	// End Line: 6272

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ItemRndDur__Fi(int ii)

{
	long lVar1;
	
	if ((item[ii]._iDurability != 0) && (item[ii]._iDurability != 0xff)) {
		lVar1 = ENG_random__Fl((int)((uint)(ushort)item[ii]._iMaxDur << 0x10) >> 0x11);
		item[ii]._iDurability = (short)lVar1 + (item[ii]._iMaxDur >> 2) + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupAllItems__FiiiiiUcUcUc(int ii /*$s2*/, int idx /*$fp*/, int _iseed /*$a2*/, int lvl /*$s3*/, int uper /*stack 16*/, int onlygood /*stack 20*/, int recreate /*stack 24*/, int pregen /*stack 28*/)
 // line 2670, offset 0x80044490
	/* begin block 1 */
		// Start line: 2671
		// Start offset: 0x80044490
		// Variables:
	// 		int iblvl; // $s0
	// 		int uid; // $a1
	// 		int iseed; // $s4
	/* end block 1 */
	// End offset: 0x80044794
	// End Line: 2739

	/* begin block 2 */
		// Start line: 6295
	/* end block 2 */
	// End Line: 6296

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupAllItems__FiiiiiUcUcUc
							 (int ii,int idx,int _iseed,int lvl,int uper,int onlygood,int recreate,int pregen)

{
	uchar uVar1;
	ushort uVar2;
	long lVar3;
	int _uid;
	int lvl_00;
	
	item[ii]._iSeed = _iseed;
	SetRndSeed__Fl(_iseed);
	item[ii]._PlrCreate = (char)FePlayerNo;
	GetItemAttrs__Fiii(ii,idx,lvl >> 1);
	lvl_00 = FePlayerNo;
	item[ii]._iCreateInfo = (ushort)lvl;
	item[ii]._PlrCreate = (char)lvl_00;
	if ((char)pregen != '\0') {
		item[ii]._iCreateInfo = item[ii]._iCreateInfo | 0x8000;
	}
	if ((char)onlygood != '\0') {
		item[ii]._iCreateInfo = item[ii]._iCreateInfo | 0x40;
	}
	if (uper == 0xf) {
		uVar2 = item[ii]._iCreateInfo | 0x80;
	}
	else {
		if (uper != 1) goto LAB_800445e8;
		uVar2 = item[ii]._iCreateInfo | 0x100;
	}
	item[ii]._iCreateInfo = uVar2;
LAB_800445e8:
	if ((item[ii]._iMiscId == '\x1b') || ((char)recreate != '\0')) {
		GetUniqueItem__Fii(ii,_iseed);
	}
	else {
		lVar3 = ENG_random__Fl(100);
		if ((lVar3 < 0xb) || (lVar3 = ENG_random__Fl(100), lvl_00 = -1, lVar3 <= lvl)) {
			lvl_00 = lvl;
		}
		if (lvl_00 == -1) {
			uVar1 = item[ii]._iMiscId;
			if (uVar1 == '\x17') {
				lvl_00 = lvl;
			}
			if (lvl_00 == -1) {
				if (uVar1 == '\x19') {
					lvl_00 = lvl;
				}
				if ((lvl_00 == -1) && (uVar1 == '\x1a')) {
					lvl_00 = lvl;
				}
			}
		}
		if ((char)onlygood != '\0') {
			lvl_00 = lvl;
		}
		if (uper == 0xf) {
			lvl_00 = lvl + 4;
		}
		if (lvl_00 != -1) {
			_uid = CheckUnique__FiiiUc(ii,lvl_00,uper,'\0');
			if (_uid == -1) {
				GetItemBonus__FiiiiUc(ii,idx,lvl_00 >> 1,lvl_00,onlygood & 0xff);
			}
			else {
				GetUniqueItem__Fii(ii,_uid);
				item[ii]._iCreateInfo = item[ii]._iCreateInfo | 0x200;
			}
		}
		if (item[ii]._iMagical != '\x02') {
			ItemRndDur__Fi(ii);
		}
	}
	SetupItem__Fi(ii);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnItem__FiiiUc(int m /*$s2*/, int x /*$s0*/, int y /*$s4*/, unsigned char sendmsg /*$s6*/)
 // line 2746, offset 0x800447c8
	/* begin block 1 */
		// Start line: 2747
		// Start offset: 0x800447C8
		// Variables:
	// 		int ii; // $s3
	// 		int idx; // $s1
	// 		unsigned char onlygood; // $s5
	/* end block 1 */
	// End offset: 0x800449F4
	// End Line: 2799

	/* begin block 2 */
		// Start line: 6479
	/* end block 2 */
	// End Line: 6480

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnItem__FiiiUc(int m,int x,int y,uchar sendmsg)

{
	char cVar1;
	uint idx;
	long _iseed;
	int uper;
	int ii;
	int onlygood;
	
	onlygood = 0;
	if ((monster[m]._uniqtype == '\0') &&
		 ((((monster[m].MData)->mTreasure & 0x8000) == 0 || (gbMaxPlayers == '\x01')))) {
		if ((QuestStruct_ARRAY_800dda54[0]._qactive == '\x02') &&
			 (QuestStruct_ARRAY_800dda54[0]._qvar1 == '\x05')) {
			QuestStruct_ARRAY_800dda54[0]._qvar1 = '\x06';
			idx = 0x12;
		}
		else {
			idx = RndItem__Fi(m);
			if (idx == 0) {
				return;
			}
			onlygood = 0;
			if ((int)idx < 1) goto LAB_800448d0;
			idx = idx - 1;
		}
	}
	else {
		idx = RndUItem__Fi(m);
		onlygood = 1;
		if ((int)idx < 0) {
LAB_800448d0:
			SpawnUnique__Fiii(~idx,x,y);
			return;
		}
	}
	cVar1 = itemavail;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar1;
		if (monster[m]._uniqtype == '\0') {
			_iseed = GetRndSeed__Fv();
			cVar1 = (monster[m].MData)->mLevel;
			uper = 1;
		}
		else {
			_iseed = GetRndSeed__Fv();
			cVar1 = (monster[m].MData)->mLevel;
			uper = 0xf;
		}
		SetupAllItems__FiiiiiUcUcUc(ii,idx,_iseed,(int)cVar1,uper,onlygood,0,0);
		if (sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateItem__Fiii(int uid /*$s2*/, int x /*$a0*/, int y /*$a1*/)
 // line 2808, offset 0x80044a20
	/* begin block 1 */
		// Start line: 2809
		// Start offset: 0x80044A20
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $a3
	/* end block 1 */
	// End offset: 0x80044BBC
	// End Line: 2853

	/* begin block 2 */
		// Start line: 6619
	/* end block 2 */
	// End Line: 6620

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateItem__Fiii(int uid,int x,int y)

{
	char *pcVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	int idata;
	int iVar5;
	int i;
	
	cVar3 = itemavail;
	if (0x7e < numitems) {
		return;
	}
	if (currlevel == '\0') {
		if (uid < 6) {
			idata = 2;
			if (3 < uid) goto LAB_80044aa8;
		}
		else {
			idata = 8;
		}
		if ((uid != idata) && (numitems < 0x7b)) {
			PlaySFX__Fi(IS_TITERR);
			return;
		}
	}
LAB_80044aa8:
	i = (int)itemavail;
	GetSuperItemSpace__Fiic(x,y,itemavail);
	cVar4 = AllItemsList.iItemId;
	cVar2 = UniqueItemList[uid].UIItemId;
	itemavail = s__800d53d5[0x7d - numitems];
	(&itemactive)[numitems] = cVar3;
	idata = 0;
	if (cVar4 != cVar2) {
		iVar5 = 0;
		do {
			pcVar1 = &ItemDataStruct_801113c4.iItemId + iVar5;
			idata = idata + 1;
			iVar5 = iVar5 + 0x20;
		} while (*pcVar1 != cVar2);
	}
	GetItemAttrs__Fiii(i,idata,(uint)currlevel);
	GetUniqueItem__Fii(i,uid);
	SetupItem__Fi(i);
	item[i]._iMagical = '\x02';
	if (((deltaload == '\0') && (uid != 7)) && (uid != 3)) {
		NetSendCmdDItem__FUci('\0',i);
	}
	numitems = numitems + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateRndItem__FiiUcUcUc(int x /*$s0*/, int y /*$s3*/, unsigned char onlygood /*$s4*/, unsigned char sendmsg /*$s6*/, int delta /*stack 16*/)
 // line 2862, offset 0x80044bd8
	/* begin block 1 */
		// Start line: 2863
		// Start offset: 0x80044BD8
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s2
	/* end block 1 */
	// End offset: 0x80044CF4
	// End Line: 2881

	/* begin block 2 */
		// Start line: 6736
	/* end block 2 */
	// End Line: 6737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateRndItem__FiiUcUcUc(int x,int y,uchar onlygood,uchar sendmsg,int delta)

{
	char cVar1;
	int idx;
	long _iseed;
	int ii;
	
	if (onlygood == '\0') {
		idx = RndAllItems__Fv();
	}
	else {
		idx = RndUItem__Fi(-1);
	}
	cVar1 = itemavail;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar1;
		_iseed = GetRndSeed__Fv();
		SetupAllItems__FiiiiiUcUcUc(ii,idx,_iseed,(uint)currlevel << 1,1,(uint)onlygood,0,delta & 0xff);
		if (sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		if ((char)delta != '\0') {
			DeltaAddItem__Fi(ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupAllUseful__Fiii(int ii /*$s1*/, int iseed /*$a0*/, int lvl /*$s2*/)
 // line 2892, offset 0x80044d20
	/* begin block 1 */
		// Start line: 2893
		// Start offset: 0x80044D20
		// Variables:
	// 		int idx; // $s0
	/* end block 1 */
	// End offset: 0x80044DE8
	// End Line: 2912

	/* begin block 2 */
		// Start line: 6804
	/* end block 2 */
	// End Line: 6805

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupAllUseful__Fiii(int ii,int iseed,int lvl)

{
	long lVar1;
	int idata;
	
	item[ii]._iSeed = iseed;
	SetRndSeed__Fl(iseed);
	lVar1 = ENG_random__Fl(2);
	idata = 0x19;
	if (lVar1 != 0) {
		idata = 0x18;
	}
	if ((1 < lvl) && (lVar1 = ENG_random__Fl(3), lVar1 == 0)) {
		idata = 0x1b;
	}
	GetItemAttrs__Fiii(ii,idata,lvl);
	idata = FePlayerNo;
	item[ii]._iCreateInfo = (short)lvl + 0x180;
	item[ii]._PlrCreate = (char)idata;
	SetupItem__Fi(ii);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateRndUseful__FiiiUc(int pnum /*$a0*/, int x /*$a0*/, int y /*$a1*/, unsigned char sendmsg /*$s2*/)
 // line 2915, offset 0x80044e04
	/* begin block 1 */
		// Start line: 2916
		// Start offset: 0x80044E04
		// Variables:
	// 		int ii; // $s1
	/* end block 1 */
	// End offset: 0x80044EA8
	// End Line: 2926

	/* begin block 2 */
		// Start line: 6861
	/* end block 2 */
	// End Line: 6862

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateRndUseful__FiiiUc(int pnum,int x,int y,uchar sendmsg)

{
	char cVar1;
	long iseed;
	int ii;
	
	cVar1 = itemavail;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar1;
		iseed = GetRndSeed__Fv();
		SetupAllUseful__Fiii(ii,iseed,(uint)currlevel);
		if (sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateTypeItem__FiiUciiUcUc(int x /*$s0*/, int y /*$s3*/, unsigned char onlygood /*$s4*/, int itype /*$a0*/, int imisc /*stack 16*/, int sendmsg /*stack 20*/, int delta /*stack 24*/)
 // line 2934, offset 0x80044ec4
	/* begin block 1 */
		// Start line: 2935
		// Start offset: 0x80044EC4
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s2
	/* end block 1 */
	// End offset: 0x80044FDC
	// End Line: 2951

	/* begin block 2 */
		// Start line: 6902
	/* end block 2 */
	// End Line: 6903

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateTypeItem__FiiUciiUcUc
							 (int x,int y,uchar onlygood,int itype,int imisc,int sendmsg,int delta)

{
	char cVar1;
	int idx;
	long _iseed;
	int ii;
	
	if (itype == 0xb) {
		idx = 0;
	}
	else {
		idx = RndTypeItems__Fii(itype,imisc);
	}
	cVar1 = itemavail;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar1;
		_iseed = GetRndSeed__Fv();
		SetupAllItems__FiiiiiUcUcUc(ii,idx,_iseed,(uint)currlevel << 1,1,(uint)onlygood,0,delta & 0xff);
		if ((char)sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		if ((char)delta != '\0') {
			DeltaAddItem__Fi(ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateEar__FiUsiUciiiiii(int ii /*$a0*/, unsigned short ic /*$fp*/, int iseed /*$v1*/, unsigned char Id /*$a3*/, int dur /*stack 16*/, int mdur /*stack 20*/, int ch /*stack 24*/, int mch /*stack 28*/, int ivalue /*stack 32*/, int ibuff /*stack 36*/)
 // line 2962, offset 0x80045008
	/* begin block 1 */
		// Start line: 2963
		// Start offset: 0x80045008
	/* end block 1 */
	// End offset: 0x800451D4
	// End Line: 2992

	/* begin block 2 */
		// Start line: 6964
	/* end block 2 */
	// End Line: 6965

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateEar__FiUsiUciiiiii
							 (int ii,ushort ic,int iseed,uchar Id,int dur,int mdur,int ch,int mch,int ivalue,
							 int ibuff)

{
	int iVar1;
	
	SetPlrHandItem__FP10ItemStructi(item + ii,0x17);
	tempstr = (byte)((uint)ic >> 8) & 0x7f;
	CHAR_00h_800cea11 = (byte)ic & 0x7f;
	CHAR_00h_800cea16 = Id & 0x7f;
	s__800cea20[0] = '\0';
	CHAR_00h_800cea12 = (byte)((uint)iseed >> 0x18) & 0x7f;
	CHAR_00h_800cea13 = (byte)((uint)iseed >> 0x10) & 0x7f;
	CHAR_00h_800cea14 = (byte)((uint)iseed >> 8) & 0x7f;
	CHAR_00h_800cea15 = (byte)iseed & 0x7f;
	CHAR_00h_800cea17 = (byte)dur & 0x7f;
	CHAR_00h_800cea18 = (byte)mdur & 0x7f;
	CHAR_00h_800cea19 = (byte)ch & 0x7f;
	CHAR_00h_800cea1a = (byte)mch & 0x7f;
	CHAR_00h_800cea1b = (byte)((uint)ivalue >> 8) & 0x7f;
	CHAR_00h_800cea1c = (byte)((uint)ibuff >> 0x18) & 0x7f;
	CHAR_00h_800cea1d = (byte)((uint)ibuff >> 0x10) & 0x7f;
	CHAR_00h_800cea1e = (byte)((uint)ibuff >> 8) & 0x7f;
	CHAR_00h_800cea1f = (byte)ibuff & 0x7f;
	item[ii]._iName = 0x122;
	item[ii]._iCurs = ((byte)(ivalue >> 6) & 3) + 0x13;
	iVar1 = FePlayerNo;
	item[ii]._ivalue = ivalue & 0x3f;
	item[ii]._iCreateInfo = ic;
	item[ii]._iSeed = iseed;
	item[ii]._PlrCreate = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnQuestItem__Fiiiii(int itemid /*$s6*/, int x /*$s3*/, int y /*$s4*/, int randarea /*$s1*/, int selflag /*stack 16*/)
 // line 3000, offset 0x80045208
	/* begin block 1 */
		// Start line: 3001
		// Start offset: 0x80045208
		// Variables:
	// 		int i; // $s2
	// 		int j; // $s0
	// 		unsigned char failed; // $v1

		/* begin block 1.1 */
			// Start line: 3001
			// Start offset: 0x80045208

			/* begin block 1.1.1 */
				// Start line: 3010
				// Start offset: 0x80045248
				// Variables:
			// 		int tries; // $s5
			/* end block 1.1.1 */
			// End offset: 0x800452EC
			// End Line: 3021
		/* end block 1.1 */
		// End offset: 0x800452EC
		// End Line: 3021
	/* end block 1 */
	// End offset: 0x80045424
	// End Line: 3047

	/* begin block 2 */
		// Start line: 7090
	/* end block 2 */
	// End Line: 7091

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnQuestItem__Fiiiii(int itemid,int x,int y,int randarea,int selflag)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	char cVar4;
	int iVar5;
	int iVar6;
	int i;
	
	if (randarea != 0) {
		i = 1;
		do {
			if ((1000 < i) && (1 < randarea)) {
				randarea = randarea + -1;
			}
			x = ENG_random__Fl(0x60);
			y = ENG_random__Fl(0x60);
			bVar2 = false;
			iVar6 = 0;
			if (0 < randarea) {
				do {
					iVar5 = 0;
					if (0 < randarea) {
						do {
							if (bVar2) break;
							uVar3 = ItemSpaceOk__Fii(x + iVar6,y + iVar5);
							bVar2 = uVar3 == '\0';
							iVar5 = iVar5 + 1;
						} while (iVar5 < randarea);
					}
					iVar6 = iVar6 + 1;
				} while ((iVar6 < randarea) && (!bVar2));
			}
			i = i + 1;
		} while (bVar2);
	}
	if (numitems < 0x7f) {
		i = (int)itemavail;
		cVar4 = itemavail + '\x01';
		cVar1 = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = itemavail;
		itemavail = cVar1;
		item[i]._ix = (char)x;
		item[i]._iy = (char)y;
		(&dung_map)[x * 0x70 + y].dItem = cVar4;
		GetItemAttrs__Fiii(i,itemid,(uint)currlevel);
		SetupItem__Fi(i);
		item[i]._iPostDraw = '\x01';
		if (selflag != 0) {
			cVar1 = item[i]._iAnimLen;
			item[i]._iSelFlag = (char)selflag;
			item[i]._iAnimFlag = '\0';
			item[i]._iAnimFrame = cVar1;
		}
		if ((((itemid != 0x10) && (itemid != 9)) && (itemid != 0x11)) && (deltaload == '\0')) {
			NetSendCmdDItem__FUci('\0',i);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnRock__Fv()
 // line 3055, offset 0x80045454
	/* begin block 1 */
		// Start line: 3056
		// Start offset: 0x80045454
		// Variables:
	// 		int i; // $v1
	// 		int ii; // $s1
	// 		int ostand; // $a1
	// 		int xx; // $a1
	// 		unsigned char done; // $a0
	/* end block 1 */
	// End offset: 0x800455E8
	// End Line: 3080

	/* begin block 2 */
		// Start line: 7206
	/* end block 2 */
	// End Line: 7207

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnRock__Fv(void)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	char cVar4;
	int i;
	int iVar5;
	
	cVar4 = itemavail;
	bVar3 = false;
	i = 0;
	iVar5 = 0;
	if (0 < numobjects) {
		do {
			iVar5 = (int)(&objectactive)[i];
			i = i + 1;
			bVar3 = object[iVar5]._otype == '\x17';
			if (numobjects <= i) break;
		} while (!bVar3);
	}
	if (bVar3) {
		i = (int)itemavail;
		cVar1 = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = itemavail;
		itemavail = cVar1;
		cVar1 = object[iVar5]._ox;
		item[i]._ix = cVar1;
		bVar2 = object[iVar5]._oy;
		item[i]._iy = bVar2;
		(&(&dung_map)[(int)cVar1 * 0x70].dItem)[(int)((uint)bVar2 << 0x18) >> 0x15] = cVar4 + '\x01';
		GetItemAttrs__Fiii(i,9,(uint)currlevel);
		SetupItem__Fi(i);
		item[i]._iSelFlag = '\x02';
		item[i]._iPostDraw = '\x01';
		item[i]._iAnimFrame = '\v';
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RespawnItem__FiUc(int i /*$a0*/, unsigned char FlipFlag /*$a1*/)
 // line 3088, offset 0x80045600
	/* begin block 1 */
		// Start line: 3089
		// Start offset: 0x80045600
		// Variables:
	// 		int it; // $a3
	/* end block 1 */
	// End offset: 0x800457A4
	// End Line: 3121

	/* begin block 2 */
		// Start line: 7290
	/* end block 2 */
	// End Line: 7291

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RespawnItem__FiUc(int i,uchar FlipFlag)

{
	uchar uVar1;
	char cVar2;
	uint uVar3;
	
	uVar3 = (uint)ItemCAnimTbl[(uint)item[i]._iCurs];
	item[i].ItemFrame = Item2Frm[uVar3];
	uVar1 = ItemAnimLs[uVar3];
	item[i]._iPostDraw = '\0';
	item[i]._iRequest = '\0';
	item[i]._iAnimLen = uVar1;
	if (FlipFlag == '\0') {
		cVar2 = item[i]._iAnimLen;
		item[i]._iAnimFlag = '\0';
		item[i]._iSelFlag = '\x01';
		item[i]._iAnimFrame = cVar2;
	}
	else {
		item[i]._iAnimFrame = '\x01';
		item[i]._iAnimFlag = '\x01';
		item[i]._iSelFlag = '\0';
	}
	uVar1 = item[i]._iCurs;
	if (uVar1 == 'L') {
		item[i]._iSelFlag = '\x01';
		PlaySfxLoc__Fiii(ItemAnimSnds[uVar3],(int)item[i]._ix,(int)item[i]._iy);
		uVar1 = item[i]._iCurs;
	}
	if (uVar1 == '~') {
		item[i]._iSelFlag = '\x01';
	}
	if (item[i]._iCurs == -0x74) {
		item[i]._iSelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteItem__Fii(int ii /*$a0*/, int i /*$a1*/)
 // line 3127, offset 0x800457b8
	/* begin block 1 */
		// Start line: 3128
		// Start offset: 0x800457B8
	/* end block 1 */
	// End offset: 0x80045804
	// End Line: 3132

	/* begin block 2 */
		// Start line: 7383
	/* end block 2 */
	// End Line: 7384

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeleteItem__Fii(int ii,int i)

{
	char *pcVar1;
	int iVar2;
	
	*(undefined *)(-0x7ff2abad - numitems) = (char)ii;
	iVar2 = numitems + -1;
	if ((0 < iVar2) && (i != iVar2)) {
		pcVar1 = (char *)(&ItemStruct_800d52e8.field_0x6b + numitems);
		numitems = iVar2;
		(&itemactive)[i] = *pcVar1;
		iVar2 = numitems;
	}
	numitems = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ItemDoppel__Fv()
 // line 3141, offset 0x8004580c
	/* begin block 1 */
		// Start line: 3142
		// Start offset: 0x8004580C
		// Variables:
	// 		int idoppelx; // $a0
	// 		struct ItemStruct *i; // $v1
	/* end block 1 */
	// End offset: 0x800458C4
	// End Line: 3156

	/* begin block 2 */
		// Start line: 7414
	/* end block 2 */
	// End Line: 7415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ItemDoppel__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (gbMaxPlayers != '\x01') {
		iVar2 = 0x10;
		iVar3 = 0x3800;
		do {
			if (((int)(&(&dung_map)[idoppely].dItem)[iVar3] != 0) &&
				 ((iVar1 = (int)(&(&dung_map)[idoppely].dItem)[iVar3] * 0x6c,
					(int)*(char *)((int)ItemInvSnds + iVar1 + 0x8a) != iVar2 ||
					((int)*(char *)((int)ItemInvSnds + iVar1 + 0x8b) != idoppely)))) {
				(&(&dung_map)[idoppely].dItem)[iVar3] = '\0';
			}
			iVar2 = iVar2 + 1;
			iVar3 = iVar3 + 0x380;
		} while (iVar2 < 0x60);
		idoppely = idoppely + 1;
		if (idoppely == 0x60) {
			idoppely = 0x10;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessItems__Fv()
 // line 3173, offset 0x800458cc
	/* begin block 1 */
		// Start line: 3174
		// Start offset: 0x800458CC
		// Variables:
	// 		int i; // $s3
	// 		int ii; // $a1
	// 		int numitemslist; // $s4
	// 		int count; // $a0

		/* begin block 1.1 */
			// Start line: 3174
			// Start offset: 0x800458CC

			/* begin block 1.1.1 */
				// Start line: 3183
				// Start offset: 0x800458F4

				/* begin block 1.1.1.1 */
					// Start line: 3183
					// Start offset: 0x80045908
					// Variables:
				// 		int j; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80045948
				// End Line: 3195
			/* end block 1.1.1 */
			// End offset: 0x80045960
			// End Line: 3199
		/* end block 1.1 */
		// End offset: 0x80045968
		// End Line: 3201

		/* begin block 1.2 */
			// Start line: 3203
			// Start offset: 0x80045968

			/* begin block 1.2.1 */
				// Start line: 3203
				// Start offset: 0x80045970

				/* begin block 1.2.1.1 */
					// Start line: 3215
					// Start offset: 0x80045A0C

					/* begin block 1.2.1.1.1 */
						// Start line: 3216
						// Start offset: 0x80045A60

						/* begin block 1.2.1.1.1.1 */
							// Start line: 3217
							// Start offset: 0x80045A60

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 3223
								// Start offset: 0x80045ABC

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 3230
									// Start offset: 0x80045AD0

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 3232
										// Start offset: 0x80045AF0
										// Variables:
									// 		int it; // $v0
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x80045AF0
									// End Line: 3233
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x80045AF0
								// End Line: 3233
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80045AF0
							// End Line: 3233
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80045B38
						// End Line: 3244
					/* end block 1.2.1.1.1 */
					// End offset: 0x80045B38
					// End Line: 3244
				/* end block 1.2.1.1 */
				// End offset: 0x80045B38
				// End Line: 3244
			/* end block 1.2.1 */
			// End offset: 0x80045B38
			// End Line: 3244
		/* end block 1.2 */
		// End offset: 0x80045B40
		// End Line: 3247
	/* end block 1 */
	// End offset: 0x80045B48
	// End Line: 3249

	/* begin block 2 */
		// Start line: 7475
	/* end block 2 */
	// End Line: 7476

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessItems__Fv(void)

{
	char cVar1;
	char cVar2;
	int iVar3;
	byte bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	iVar6 = 0;
	while (iVar3 = 0, iVar6 < numitems) {
		iVar5 = 0;
		if (0 < iVar7) {
			do {
				if ((&itemactive)[iVar6] == (&itemactivelist)[iVar3]) {
					iVar5 = iVar5 + 1;
				}
				iVar3 = iVar3 + 1;
			} while (iVar3 < iVar7);
		}
		if (iVar5 == 0) {
			(&itemactivelist)[iVar7] = (&itemactive)[iVar6];
			iVar7 = iVar7 + 1;
		}
		iVar6 = iVar6 + 1;
	}
	iVar6 = 0;
	do {
		if (iVar7 <= iVar6) {
			ItemDoppel__Fv();
			return;
		}
		iVar3 = (int)(&itemactivelist)[iVar6];
		if (item[iVar3]._iCurs == 'L') {
			cVar1 = item[iVar3]._iSelFlag;
			item[iVar3]._iAnimFlag = '\0';
			if (cVar1 == '\x01') {
				item[iVar3].ItemFrame = 0x12a;
			}
			if (item[iVar3]._iSelFlag == '\x02') {
				item[iVar3].ItemFrame = 299;
			}
		}
		if (((item[iVar3]._iAnimFlag != '\0') && (PauseMode == '\0')) && (CDWAIT == (void *)0x0)) {
			bVar4 = item[iVar3]._iAnimFrame + 1;
			cVar1 = item[iVar3]._iy;
			cVar2 = item[iVar3]._ix;
			item[iVar3]._iAnimFrame = bVar4;
			if (((&dung_map)[(int)cVar2 * 0x70 + (int)cVar1].dFlags & 3U) != 0) {
				if (bVar4 == 4) {
					PlaySfxLoc__Fiii(0x15,(int)cVar2,(int)cVar1);
				}
				if (-1 < SinTab[(uint)bVar4 & 0x1f]) goto LAB_80045b38;
				PlaySfxLoc__Fiii(ItemAnimSnds[(uint)ItemCAnimTbl[(uint)item[iVar3]._iCurs]],
												 (int)item[iVar3]._ix,(int)item[iVar3]._iy);
			}
			cVar1 = item[iVar3]._iAnimLen;
			item[iVar3]._iAnimFlag = '\0';
			item[iVar3]._iSelFlag = '\x01';
			item[iVar3]._iAnimFrame = cVar1;
		}
LAB_80045b38:
		iVar6 = iVar6 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeItemGFX__Fv()
 // line 3255, offset 0x80045b70
	/* begin block 1 */
		// Start line: 3256
		// Start offset: 0x80045B70
	/* end block 1 */
	// End offset: 0x80045B70
	// End Line: 3256

	/* begin block 2 */
		// Start line: 7670
	/* end block 2 */
	// End Line: 7671

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeItemGFX__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemStr__Fi(int i /*$s0*/)
 // line 3279, offset 0x80045b78
	/* begin block 1 */
		// Start line: 3280
		// Start offset: 0x80045B78

		/* begin block 1.1 */
			// Start line: 3280
			// Start offset: 0x80045B78

			/* begin block 1.1.1 */
				// Start line: 3283
				// Start offset: 0x80045BB8

				/* begin block 1.1.1.1 */
					// Start line: 3285
					// Start offset: 0x80045BB8
					// Variables:
				// 		int nGold; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x80045BB8
				// End Line: 3286
			/* end block 1.1.1 */
			// End offset: 0x80045D08
			// End Line: 3305
		/* end block 1.1 */
		// End offset: 0x80045D08
		// End Line: 3305
	/* end block 1 */
	// End offset: 0x80045D08
	// End Line: 3305

	/* begin block 2 */
		// Start line: 7713
	/* end block 2 */
	// End Line: 7714

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetItemStr__Fi(int i)

{
	char *__src;
	char *pcVar1;
	char cVar2;
	ushort ItemNo;
	int nGold;
	
	if (item[i]._itype == 0xb) {
		nGold = item[i]._ivalue;
		__src = GetStr__Fi(0x4ff);
		pcVar1 = get_pieces_str__Fi(nGold);
		sprintf(_infostr + sel_data * 0x100,__src,nGold,pcVar1);
	}
	else {
		if (item[i]._iIdentified == '\0') {
			ItemNo = item[i]._iName;
		}
		else {
			ItemNo = item[i]._iIName;
		}
		__src = MakeItemStr__FP10ItemStructUsUs(item + i,ItemNo,0x100);
		strcpy(_infostr + sel_data * 0x100,__src);
		_infoclr[sel_data] = '\0';
		cVar2 = item[i]._iMagical;
		if (cVar2 == '\x01') {
			_infoclr[sel_data] = '\x01';
			cVar2 = item[i]._iMagical;
		}
		if (cVar2 == '\x02') {
			_infoclr[sel_data] = '\x03';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckIdentify__Fii(int pnum /*$s2*/, int cii /*$s0*/)
 // line 3310, offset 0x80045d20
	/* begin block 1 */
		// Start line: 3311
		// Start offset: 0x80045D20
		// Variables:
	// 		struct ItemStruct *pi; // $v1
	// 		struct PlayerStruct *p; // $v0
	/* end block 1 */
	// End offset: 0x80045DFC
	// End Line: 3324

	/* begin block 2 */
		// Start line: 7777
	/* end block 2 */
	// End Line: 7778

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckIdentify__Fii(int pnum,int cii)

{
	int iVar1;
	
	PlaySfxLoc__Fiii(0x3d,(int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py);
	iVar1 = -0x7ff25918;
	if (cii < 7) {
		cii = cii * 0x6c;
	}
	else {
		iVar1 = -0x7ff25624;
		cii = cii * 0x6c + -0x2f4;
	}
	*(undefined *)(pnum * 0x19e8 + iVar1 + cii + 0x69) = 1;
	CalcPlrInv__FiUc(pnum,'\x01');
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RepairItem__FP10ItemStructi(struct ItemStruct *i /*$s0*/, int lvl /*$s3*/)
 // line 3328, offset 0x80045e1c
	/* begin block 1 */
		// Start line: 3329
		// Start offset: 0x80045E1C
		// Variables:
	// 		int d; // $a1
	// 		int rep; // $s1
	/* end block 1 */
	// End offset: 0x80045EEC
	// End Line: 3352

	/* begin block 2 */
		// Start line: 7820
	/* end block 2 */
	// End Line: 7821

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RepairItem__FP10ItemStructi(ItemStruct *i,int lvl)

{
	long lVar1;
	int iVar2;
	int iVar3;
	
	if (i->_iDurability != i->_iMaxDur) {
		iVar2 = 0;
		if (i->_iMaxDur < 1) {
LAB_80045e58:
			i->_itype = -1;
		}
		else {
			do {
				lVar1 = ENG_random__Fl(lvl);
				iVar3 = (int)i->_iMaxDur / (lvl + 9);
				iVar2 = iVar2 + lVar1 + lvl;
				if (iVar3 < 1) {
					iVar3 = 1;
				}
				iVar3 = (int)i->_iMaxDur - iVar3;
				i->_iMaxDur = (short)iVar3;
				iVar3 = iVar3 * 0x10000 >> 0x10;
				if (iVar3 == 0) goto LAB_80045e58;
			} while ((int)i->_iDurability + iVar2 < iVar3);
			iVar2 = (int)i->_iDurability + iVar2;
			i->_iDurability = (short)iVar2;
			if ((int)i->_iMaxDur < iVar2 * 0x10000 >> 0x10) {
				i->_iDurability = i->_iMaxDur;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoRepair__Fii(int pnum /*$s1*/, int cii /*$s0*/)
 // line 3356, offset 0x80045f0c
	/* begin block 1 */
		// Start line: 3357
		// Start offset: 0x80045F0C
		// Variables:
	// 		struct PlayerStruct *p; // $s2
	// 		struct ItemStruct *pi; // $a0
	/* end block 1 */
	// End offset: 0x80045FB4
	// End Line: 3370

	/* begin block 2 */
		// Start line: 7885
	/* end block 2 */
	// End Line: 7886

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoRepair__Fii(int pnum,int cii)

{
	PlaySfxLoc__Fiii(0x42,(int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py);
	RepairItem__FP10ItemStructi
						((ItemStruct *)(pnum * 0x19e8 + cii * 0x6c + -0x7ff25918),(int)(&plr)[pnum]._pLevel);
	CalcPlrInv__FiUc(pnum,'\x01');
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RechargeItem__FP10ItemStructi(struct ItemStruct *i /*$a0*/, int r /*$a1*/)
 // line 3374, offset 0x80045fd0
	/* begin block 1 */
		// Start line: 3375
		// Start offset: 0x80045FD0
	/* end block 1 */
	// End offset: 0x80046030
	// End Line: 3387

	/* begin block 2 */
		// Start line: 7924
	/* end block 2 */
	// End Line: 7925

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RechargeItem__FP10ItemStructi(ItemStruct *i,int r)

{
	byte bVar1;
	uchar uVar2;
	uint uVar3;
	uint uVar4;
	
	if (i->_iCharges != i->_iMaxCharges) {
		do {
			uVar2 = i->_iMaxCharges + -1;
			i->_iMaxCharges = uVar2;
			if (uVar2 == '\0') {
				return;
			}
			bVar1 = i->_iMaxCharges;
			uVar3 = (uint)i->_iCharges + r;
			uVar4 = uVar3 & 0xff;
			i->_iCharges = (uchar)uVar3;
		} while (uVar4 < (uint)bVar1);
		if ((uint)bVar1 < uVar4) {
			i->_iCharges = bVar1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoRecharge__Fii(int pnum /*$s1*/, int cii /*$s0*/)
 // line 3391, offset 0x80046038
	/* begin block 1 */
		// Start line: 3392
		// Start offset: 0x80046038
		// Variables:
	// 		struct PlayerStruct *p; // $s2
	// 		struct ItemStruct *pi; // $s0

		/* begin block 1.1 */
			// Start line: 3401
			// Start offset: 0x800460B0

			/* begin block 1.1.1 */
				// Start line: 3401
				// Start offset: 0x800460D0
				// Variables:
			// 		int r; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80046124
			// End Line: 3409
		/* end block 1.1 */
		// End offset: 0x80046124
		// End Line: 3409
	/* end block 1 */
	// End offset: 0x80046140
	// End Line: 3412

	/* begin block 2 */
		// Start line: 7959
	/* end block 2 */
	// End Line: 7960

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoRecharge__Fii(int pnum,int cii)

{
	long lVar1;
	ItemStruct *i;
	
	PlaySfxLoc__Fiii(0x42,(int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py);
	i = (ItemStruct *)(pnum * 0x19e8 + cii * 0x6c + -0x7ff25918);
	if ((i->_itype == 10) && ((int)i->_iSpell != 0)) {
		lVar1 = ENG_random__Fl((int)(&plr)[pnum]._pLevel / (&spelldata)[(int)i->_iSpell].sBookLvl);
		RechargeItem__FP10ItemStructi(i,lVar1 + 1);
		CalcPlrInv__FiUc(pnum,'\x01');
		PlaySFX__Fi(IS_TITLEMOV);
	}
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemOil__Fc(char IDidx /*$a0*/)
 // line 3516, offset 0x8004615c
	/* begin block 1 */
		// Start line: 3517
		// Start offset: 0x8004615C
		// Variables:
	// 		int StrVal; // $v1
	/* end block 1 */
	// End offset: 0x80046244
	// End Line: 3632

	/* begin block 2 */
		// Start line: 8211
	/* end block 2 */
	// End Line: 8212

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintItemOil__Fc(char IDidx)

{
	char *__src;
	int StrId;
	
	StrId = -1;
	switch((int)(((uint)(byte)IDidx - 2) * 0x1000000) >> 0x18) {
	case 0:
		StrId = 0x170;
		break;
	case 1:
		StrId = 0x352;
		break;
	case 2:
		StrId = 0x34f;
		break;
	case 3:
		StrId = 0xea;
		break;
	case 4:
		StrId = 0x351;
		break;
	case 5:
		StrId = 0x172;
		break;
	case 8:
		StrId = 0x215;
		break;
	case 9:
		StrId = 0x214;
		break;
	case 10:
		StrId = 0x213;
		break;
	case 0xb:
		StrId = 0x216;
		break;
	case 0xc:
	case 0xd:
		StrId = 0xf2;
		break;
	case 0xe:
		StrId = 0xf1;
		break;
	case 0xf:
		StrId = 0xf3;
		break;
	case 0x10:
		StrId = 0x350;
		break;
	case 0x11:
		StrId = 0x171;
	}
	if (StrId != -1) {
		__src = GetStr__Fi(StrId);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemPower__FcPC10ItemStruct(char plidx /*$a0*/, struct ItemStruct *x /*$s2*/)
 // line 3637, offset 0x80046258
	/* begin block 1 */
		// Start line: 3638
		// Start offset: 0x80046258
		// Variables:
	// 		int v; // $s0
	// 		char *tstr; // $s1
	/* end block 1 */
	// End offset: 0x80046A00
	// End Line: 3908

	/* begin block 2 */
		// Start line: 8455
	/* end block 2 */
	// End Line: 8456

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintItemPower__FcPC10ItemStruct(char plidx,ItemStruct *x)

{
	char cVar1;
	ushort uVar2;
	char *__format;
	char *pcVar3;
	size_t sVar4;
	int StrId;
	uint uVar5;
	int iVar6;
	
	if (x->_iIdentified == '\0') {
		return;
	}
	switch(plidx) {
	case '\0':
	case '\x01':
		__format = GetStr__Fi(0xab);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		sprintf(&tempstr + sVar4,(char *)PTR_ARRAY_8011b898,(int)x->_iPLToHit);
		return;
	case '\x02':
	case '\x03':
		sprintf(&tempstr,(char *)PTR_ARRAY_8011b898,(int)x->_iPLDam);
		__format = GetStr__Fi(0xe1);
		strcat(&tempstr,__format);
		return;
	case '\x04':
	case '\x05':
		__format = GetStr__Fi(0x495);
		pcVar3 = GetStr__Fi(0xe1);
		sprintf(&tempstr,"%s:%+i%%, %+i%%%s",__format,(int)x->_iPLToHit,(int)x->_iPLDam,pcVar3);
		return;
	case '\x06':
	case '\a':
		__format = GetStr__Fi(0x525);
		StrId = x->_iPLAC;
		goto LAB_800465d8;
	case '\b':
		iVar6 = (int)x->_iPLFR;
		StrId = 0x364;
		if (0x4a < iVar6) {
			StrId = 0x363;
LAB_80046428:
			__format = GetStr__Fi(StrId);
			sprintf(&tempstr,__format);
			return;
		}
		goto LAB_800469d4;
	case '\t':
		iVar6 = (int)x->_iPLLR;
		StrId = 0x366;
		if (0x4a < iVar6) {
			StrId = 0x365;
			goto LAB_80046428;
		}
		goto LAB_800469d4;
	case '\n':
		iVar6 = (int)x->_iPLMR;
		StrId = 0x368;
		if (0x4a < iVar6) {
			StrId = 0x367;
			goto LAB_80046428;
		}
		goto LAB_800469d4;
	case '\v':
		iVar6 = (int)x->_iPLFR;
		StrId = 0x362;
		if (0x4a < iVar6) {
			StrId = 0x361;
			goto LAB_80046428;
		}
		goto LAB_800469d4;
	default:
		tempstr = '\0';
		return;
	case '\x0e':
		cVar1 = x->_iSplLvlAdd;
		if (cVar1 == '\x01') {
			__format = GetStr__Fi(0x3f5);
			strcpy(&tempstr,__format);
		}
		if (cVar1 == '\x02') {
			__format = GetStr__Fi(0x3f6);
			strcpy(&tempstr,__format);
		}
		StrId = 0x3f4;
		if ('\0' < cVar1) {
			return;
		}
		break;
	case '\x0f':
		StrId = 0x137;
		break;
	case '\x10':
		__format = GetStr__Fi(0x155);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		StrId = (int)x->_iFMinDam;
		iVar6 = (int)x->_iFMaxDam;
		__format = &tempstr + sVar4;
		goto LAB_80046724;
	case '\x11':
		__format = GetStr__Fi(0x253);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		__format = &tempstr + sVar4;
		goto LAB_8004671c;
	case '\x13':
	case '\x14':
		StrId = 0x523;
		goto LAB_800465c4;
	case '\x15':
	case '\x16':
		__format = GetStr__Fi(0x522);
		StrId = (int)x->_iPLMag;
		goto LAB_800465d8;
	case '\x17':
	case '\x18':
		__format = GetStr__Fi(0x521);
		StrId = (int)x->_iPLDex;
		goto LAB_800465d8;
	case '\x19':
	case '\x1a':
		__format = GetStr__Fi(0x524);
		StrId = (int)x->_iPLVit;
		goto LAB_800465d8;
	case '\x1b':
	case '\x1c':
		StrId = 0x520;
LAB_800465c4:
		__format = GetStr__Fi(StrId);
		StrId = (int)x->_iPLStr;
		goto LAB_800465d8;
	case '\x1d':
	case '\x1e':
		__format = GetStr__Fi(0x51f);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		sprintf((char *)(sVar4 + 0x800cea0d),(char *)&PTR_DAT_8011b8a8,(int)x->_iPLGetHit);
		return;
	case '\x1f':
	case ' ':
		__format = GetStr__Fi(500);
		uVar2 = x->_iPLHP;
		goto LAB_80046660;
	case '!':
	case '\"':
		__format = GetStr__Fi(0x27f);
		uVar2 = x->_iPLMana;
LAB_80046660:
		sprintf(&tempstr,__format,(int)((uint)uVar2 << 0x10) >> 0x16);
		return;
	case '#':
		StrId = 0x1ef;
		break;
	case '$':
		StrId = 0xf0;
		break;
	case '&':
		StrId = 0x338;
		iVar6 = (int)x->_iPLLight * 10;
		goto LAB_800469d4;
	case '\'':
		StrId = 0x2dd;
		iVar6 = (int)x->_iPLLight * -10;
		goto LAB_800469d4;
	case '*':
		__format = GetStr__Fi(0x151);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		StrId = (int)x->_iFMinDam;
		iVar6 = (int)x->_iFMaxDam;
		__format = (char *)(sVar4 + 0x800cea0b);
		goto LAB_80046724;
	case '+':
		__format = GetStr__Fi(0x251);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		__format = (char *)(sVar4 + 0x800cea0b);
LAB_8004671c:
		StrId = (int)x->_iLMinDam;
		iVar6 = (int)x->_iLMaxDam;
LAB_80046724:
		sprintf(__format,(char *)PTR_ARRAY_8011b8a0,StrId,iVar6);
		return;
	case '-':
		StrId = 0x31;
		break;
	case '.':
		StrId = 0x4aa;
		break;
	case '/':
		StrId = 0x4e8;
		break;
	case '4':
		StrId = 5;
		break;
	case '5':
		StrId = 0x233;
		break;
	case '6':
		StrId = 0x1f0;
		break;
	case '7':
		uVar5 = x->_iFlags;
		if ((uVar5 & 0x2000) != 0) {
			__format = GetStr__Fi(0x1f6);
			strcpy(&tempstr,__format);
		}
		uVar5 = uVar5 & 0x4000;
		StrId = 0x1f8;
		goto joined_r0x800468f8;
	case '8':
		uVar5 = x->_iFlags;
		if ((uVar5 & 0x8000) != 0) {
			__format = GetStr__Fi(0x1f5);
			strcpy(&tempstr,__format);
		}
		uVar5 = uVar5 & 0x10000;
		StrId = 0x1f7;
		goto joined_r0x800468f8;
	case '9':
		StrId = 0xdf;
		break;
	case ':':
		uVar5 = x->_iFlags;
		if ((uVar5 & 0x20000) != 0) {
			__format = GetStr__Fi(0x33c);
			strcpy(&tempstr,__format);
		}
		if ((uVar5 & 0x40000) != 0) {
			__format = GetStr__Fi(0x145);
			strcpy(&tempstr,__format);
		}
		if ((uVar5 & 0x80000) != 0) {
			__format = GetStr__Fi(0x140);
			strcpy(&tempstr,__format);
		}
		uVar5 = uVar5 & 0x100000;
		StrId = 0x143;
		goto joined_r0x800468f8;
	case ';':
		uVar5 = x->_iFlags;
		if ((uVar5 & 0x200000) != 0) {
			__format = GetStr__Fi(0x147);
			strcpy(&tempstr,__format);
		}
		if ((uVar5 & 0x400000) != 0) {
			__format = GetStr__Fi(0x142);
			strcpy(&tempstr,__format);
		}
		uVar5 = uVar5 & 0x800000;
		StrId = 0x144;
joined_r0x800468f8:
		if (uVar5 == 0) {
			return;
		}
		break;
	case '<':
		StrId = 0x146;
		break;
	case '=':
		__format = GetStr__Fi(0xb);
		strcpy(&tempstr,__format);
		sVar4 = strlen(&tempstr);
		sprintf(&tempstr + sVar4,(char *)&PTR_DAT_8011b8ac,(int)x->_iPLDamMod);
		return;
	case '>':
		StrId = 0x14e;
		break;
	case '?':
		StrId = 0x4a6;
		break;
	case '@':
		StrId = 0x13;
		break;
	case 'A':
		StrId = 0x2db;
		break;
	case 'B':
		__format = GetStr__Fi(0x502);
		pcVar3 = GetStr__Fi((&spelldata)[(int)x->_iSpell].sNameText);
		sprintf(&tempstr,__format,(uint)x->_iMaxCharges,pcVar3);
		return;
	case 'C':
		StrId = 0x141;
		break;
	case 'D':
		StrId = 0x2f1;
		break;
	case 'E':
		StrId = 0x4fb;
		break;
	case 'F':
		StrId = 0x11;
		break;
	case 'H':
		StrId = 0xc9;
		break;
	case 'I':
		StrId = 0x24e;
		break;
	case 'J':
		StrId = 0x3b1;
		break;
	case 'K':
		__format = GetStr__Fi(0x2c);
		StrId = (int)x->_iAC;
		goto LAB_800465d8;
	case 'L':
		StrId = 0x2b;
		break;
	case 'M':
		StrId = 0;
		break;
	case 'N':
		iVar6 = (int)x->_iPLFR;
		StrId = 0x364;
		if (iVar6 < 1) {
			tempstr = '\0';
			return;
		}
LAB_800469d4:
		__format = GetStr__Fi(StrId);
		sprintf(&tempstr,__format,iVar6);
		return;
	case 'O':
		__format = GetStr__Fi(0x2c);
		StrId = (int)x->_iAC;
LAB_800465d8:
		sprintf(&tempstr,__format,StrId);
		return;
	}
	__format = GetStr__Fi(StrId);
	strcpy(&tempstr,__format);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x /*$s1*/)
 // line 3994, offset 0x80046a1c
	/* begin block 1 */
		// Start line: 3995
		// Start offset: 0x80046A1C
	/* end block 1 */
	// End offset: 0x80046C60
	// End Line: 4049

	/* begin block 2 */
		// Start line: 9176
	/* end block 2 */
	// End Line: 9177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintItemMisc__FPC10ItemStruct(ItemStruct *x)

{
	uchar uVar1;
	char *__src;
	
	uVar1 = x->_iMiscId;
	if (uVar1 == '\x15') {
		__src = GetStr__Fi(0x32a);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
		if ((invflag != '\0') && (x->_iStatFlag == '\0')) {
			__src = GetStr__Fi(0x35e);
			AddPanelString__FPCci(__src,1);
		}
		uVar1 = x->_iMiscId;
	}
	if (uVar1 == '\x16') {
		__src = GetStr__Fi(0x32a);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
		if ((invflag != '\0') && (x->_iStatFlag == '\0')) {
			__src = GetStr__Fi(0x35e);
			AddPanelString__FPCci(__src,1);
		}
	}
	if (((x->_iMiscId != 0) && (x->_iMiscId < 0x15)) ||
		 ((x->IDidx == 0x14 && (s__800d1b54[0] != '\0')))) {
		PrintItemOil__Fc(x->_iMiscId);
		__src = GetStr__Fi(0x32b);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
	}
	if (x->_iMiscId == '\x18') {
		__src = GetStr__Fi(0x32a);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
		if ((invflag != '\0') && (x->_iStatFlag == '\0')) {
			__src = GetStr__Fi(0x35e);
			AddPanelString__FPCci(__src,1);
		}
	}
	uVar1 = x->_iMiscId;
	if (uVar1 == '*') {
		__src = GetStr__Fi(0x32c);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
	}
	if (uVar1 == '+') {
		__src = GetStr__Fi(0x247);
		sprintf(&tempstr,__src,x->_ivalue);
		AddPanelString__FPCci(&tempstr,1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x /*$s1*/)
 // line 4055, offset 0x80046c7c
	/* begin block 1 */
		// Start line: 4056
		// Start offset: 0x80046C7C

		/* begin block 1.1 */
			// Start line: 4056
			// Start offset: 0x80046C7C

			/* begin block 1.1.1 */
				// Start line: 4059
				// Start offset: 0x80046CA4

				/* begin block 1.1.1.1 */
					// Start line: 4061
					// Start offset: 0x80046CA4

					/* begin block 1.1.1.1.1 */
						// Start line: 4067
						// Start offset: 0x80046CF8
						// Variables:
					// 		char tsrt[40]; // stack offset -64
					/* end block 1.1.1.1.1 */
					// End offset: 0x80046D64
					// End Line: 4073
				/* end block 1.1.1.1 */
				// End offset: 0x80046D64
				// End Line: 4073
			/* end block 1.1.1 */
			// End offset: 0x80046D74
			// End Line: 4075
		/* end block 1.1 */
		// End offset: 0x80046D74
		// End Line: 4075

		/* begin block 1.2 */
			// Start line: 4077
			// Start offset: 0x80046D74

			/* begin block 1.2.1 */
				// Start line: 4078
				// Start offset: 0x80046D84

				/* begin block 1.2.1.1 */
					// Start line: 4079
					// Start offset: 0x80046D84

					/* begin block 1.2.1.1.1 */
						// Start line: 4080
						// Start offset: 0x80046DB4

						/* begin block 1.2.1.1.1.1 */
							// Start line: 4081
							// Start offset: 0x80046DB4

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 4084
								// Start offset: 0x80046DE4
								// Variables:
							// 		char *tstr; // $v0
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80046DE4
							// End Line: 4086
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80046DE4
						// End Line: 4086
					/* end block 1.2.1.1.1 */
					// End offset: 0x80046DE4
					// End Line: 4086
				/* end block 1.2.1.1 */
				// End offset: 0x80046E84
				// End Line: 4097
			/* end block 1.2.1 */
			// End offset: 0x80046E94
			// End Line: 4099
		/* end block 1.2 */
		// End offset: 0x80046E94
		// End Line: 4099
	/* end block 1 */
	// End offset: 0x800470D8
	// End Line: 4148

	/* begin block 2 */
		// Start line: 9300
	/* end block 2 */
	// End Line: 9301

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintItemDetails__FPC10ItemStruct(ItemStruct *x)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	short sVar4;
	ItemStruct *pIVar5;
	char *__format;
	char *pcVar6;
	size_t sVar7;
	char cVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	ItemStruct *pIVar14;
	char acStack64 [40];
	
	cVar8 = x->_iClass;
	if (cVar8 == '\x01') {
		sVar4 = x->_iMaxDur;
		if ((int)sVar4 == 0xff) {
			__format = GetStr__Fi(0xe1);
			pcVar6 = GetStr__Fi(0x217);
			sprintf(&tempstr,"%s:%i-%i  %s",__format,(int)x->_iMinDam,(int)x->_iMaxDam,pcVar6);
		}
		else {
			__format = GetStr__Fi(0xe1);
			sprintf(&tempstr,"%s:%i-%i  ",__format,(int)x->_iMinDam,(int)x->_iMaxDam);
			__format = GetStr__Fi(0x11f);
			sprintf(acStack64,__format,(int)x->_iDurability,(int)sVar4);
			sVar7 = strlen(acStack64);
			(&stack0xffffffbf)[sVar7] = 0;
			strcat(&tempstr,acStack64);
		}
		AddPanelString__FPCci(&tempstr,1);
		cVar8 = x->_iClass;
	}
	if (cVar8 == '\x02') {
		if (((x->_iMagical == '\x02') && (x->_iIdentified != '\0')) && (x->_iIName != 0x2af)) {
			sVar4 = x->_iMaxDur;
			if ((int)sVar4 == 0xff) {
				__format = GetStr__Fi(0x217);
				strcpy(&tempstr,__format);
			}
			else {
				__format = GetStr__Fi(0x11f);
				strcpy(&tempstr,__format);
				sVar7 = strlen(&tempstr);
				sprintf((char *)(sVar7 + 0x800cea0a),(char *)&PTR_DAT_8011b8b0,(int)x->_iDurability,
								(int)sVar4);
			}
		}
		else {
			sVar4 = x->_iMaxDur;
			if ((int)sVar4 == 0xff) {
				__format = GetStr__Fi(0x2e);
				sprintf(&tempstr,__format,(int)x->_iAC);
			}
			else {
				__format = GetStr__Fi(0x2d);
				sprintf(&tempstr,__format,(int)x->_iAC,(int)x->_iDurability,(int)sVar4);
			}
		}
		AddPanelString__FPCci(&tempstr,1);
	}
	if ((x->_iMiscId == '\x17') && (bVar1 = x->_iMaxCharges, bVar1 != 0)) {
		__format = GetStr__Fi(0xe6);
		sprintf(&tempstr,__format,(int)x->_iMinDam,(int)x->_iMaxDam,(int)x->_iDurability,
						(int)x->_iMaxDur);
		__format = GetStr__Fi(0xb2);
		sprintf(&tempstr,__format,(uint)x->_iCharges,(uint)bVar1);
		AddPanelString__FPCci(&tempstr,1);
	}
	if ((int)x->_iPrePower != -1) {
		PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Prefix[(int)x->_iPrePower].PLPower,x);
		AddPanelString__FPCci(&tempstr,1);
	}
	if ((int)x->_iSufPower != -1) {
		PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Suffix[(int)x->_iSufPower].PLPower,x);
		AddPanelString__FPCci(&tempstr,1);
	}
	if (x->_iMagical == '\x02') {
		__format = GetStr__Fi(0x4a3);
		AddPanelString__FPCci(__format,1);
		uitemflag = '\x01';
		pIVar13 = x;
		pIVar5 = &curruitem;
		do {
			pIVar14 = pIVar5;
			pIVar12 = pIVar13;
			iVar9 = pIVar12->_iVMult1;
			iVar10 = pIVar12->_iVAdd2;
			iVar11 = pIVar12->_iVMult2;
			pIVar14->_iVAdd1 = pIVar12->_iVAdd1;
			pIVar14->_iVMult1 = iVar9;
			pIVar14->_iVAdd2 = iVar10;
			pIVar14->_iVMult2 = iVar11;
			pIVar13 = (ItemStruct *)&pIVar12->_iSeed;
			pIVar5 = (ItemStruct *)&pIVar14->_iSeed;
		} while (pIVar13 != (ItemStruct *)&x->_iSufPower);
		iVar9 = pIVar12->_ivalue;
		iVar10 = pIVar12->_iIvalue;
		((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = pIVar13->_iVAdd1;
		pIVar14->_ivalue = iVar9;
		pIVar14->_iIvalue = iVar10;
	}
	PrintItemMisc__FPC10ItemStruct(x);
	bVar1 = x->_iMinStr;
	bVar2 = x->_iMinMag;
	bVar3 = x->_iMinDex;
	if ((uint)bVar1 + (uint)bVar2 + (uint)bVar3 != 0) {
		__format = GetStr__Fi(0x35d);
		strcpy(&tempstr,__format);
		if (bVar1 != 0) {
			__format = GetStr__Fi(0x51c);
			sprintf(&tempstr,__format,&tempstr,(uint)bVar1);
		}
		if (bVar2 != 0) {
			__format = GetStr__Fi(0x51b);
			sprintf(&tempstr,__format,&tempstr,(uint)bVar2);
		}
		if (bVar3 != 0) {
			__format = GetStr__Fi(0x51a);
			sprintf(&tempstr,__format,&tempstr,(uint)bVar3);
		}
		AddPanelString__FPCci(&tempstr,1);
	}
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemDur__FPC10ItemStruct(struct ItemStruct *x /*$s1*/)
 // line 4153, offset 0x800470f8
	/* begin block 1 */
		// Start line: 4154
		// Start offset: 0x800470F8

		/* begin block 1.1 */
			// Start line: 4154
			// Start offset: 0x800470F8

			/* begin block 1.1.1 */
				// Start line: 4156
				// Start offset: 0x80047120

				/* begin block 1.1.1.1 */
					// Start line: 4157
					// Start offset: 0x80047120

					/* begin block 1.1.1.1.1 */
						// Start line: 4161
						// Start offset: 0x80047174
						// Variables:
					// 		char tsrt[40]; // stack offset -64
					/* end block 1.1.1.1.1 */
					// End offset: 0x800471E0
					// End Line: 4167
				/* end block 1.1.1.1 */
				// End offset: 0x800471E0
				// End Line: 4167
			/* end block 1.1.1 */
			// End offset: 0x80047260
			// End Line: 4180
		/* end block 1.1 */
		// End offset: 0x80047260
		// End Line: 4180
	/* end block 1 */
	// End offset: 0x80047444
	// End Line: 4228

	/* begin block 2 */
		// Start line: 9499
	/* end block 2 */
	// End Line: 9500

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintItemDur__FPC10ItemStruct(ItemStruct *x)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	short sVar4;
	char *__format;
	char *pcVar5;
	int local_48;
	size_t sVar6;
	char cVar7;
	char acStack64 [40];
	
	cVar7 = x->_iClass;
	if (cVar7 == '\x01') {
		sVar4 = x->_iMaxDur;
		if ((int)sVar4 == 0xff) {
			__format = GetStr__Fi(0xe1);
			pcVar5 = GetStr__Fi(0x217);
			local_48 = (int)x->_iMaxDam;
			sprintf(&tempstr,"%s:%i-%i  %s",__format,(int)x->_iMinDam,local_48,pcVar5);
		}
		else {
			__format = GetStr__Fi(0xe1);
			local_48 = (int)x->_iMaxDam;
			sprintf(&tempstr,"%s:%i-%i  ",__format,(int)x->_iMinDam,local_48);
			__format = GetStr__Fi(0x11f);
			sprintf(acStack64,__format,(int)x->_iDurability,(int)sVar4);
			sVar6 = strlen(acStack64);
			(&stack0xffffffbf)[sVar6] = 0;
			strcat(&tempstr,acStack64);
		}
		AddPanelString__FPCci(&tempstr,1);
		if ((x->_iMiscId == '\x17') && (bVar1 = x->_iMaxCharges, bVar1 != 0)) {
			__format = GetStr__Fi(0xb2);
			sprintf(&tempstr,__format,(uint)x->_iCharges,(uint)bVar1,local_48);
			AddPanelString__FPCci(&tempstr,1);
		}
		if (x->_iMagical != '\0') {
			__format = GetStr__Fi(0x2bf);
			AddPanelString__FPCci(__format,1);
		}
		cVar7 = x->_iClass;
	}
	if (cVar7 == '\x02') {
		sVar4 = x->_iMaxDur;
		if ((int)sVar4 == 0xff) {
			__format = GetStr__Fi(0x2e);
			sprintf(&tempstr,__format,(int)x->_iAC);
		}
		else {
			__format = GetStr__Fi(0x2d);
			sprintf(&tempstr,__format,(int)x->_iAC,(int)x->_iDurability,(int)sVar4);
		}
		AddPanelString__FPCci(&tempstr,1);
		if (x->_iMagical != '\0') {
			__format = GetStr__Fi(0x2bf);
			AddPanelString__FPCci(__format,1);
		}
		if ((x->_iMiscId == '\x17') && (bVar1 = x->_iMaxCharges, bVar1 != 0)) {
			__format = GetStr__Fi(0xb2);
			sprintf(&tempstr,__format,(uint)x->_iCharges,(uint)bVar1);
			AddPanelString__FPCci(&tempstr,1);
		}
	}
	if ((uint)(ushort)x->_itype - 0xc < 2) {
		__format = GetStr__Fi(0x2bf);
		AddPanelString__FPCci(__format,1);
	}
	PrintItemMisc__FPC10ItemStruct(x);
	bVar1 = x->_iMinStr;
	bVar2 = x->_iMinMag;
	bVar3 = x->_iMinDex;
	if ((uint)bVar1 + (uint)bVar2 + (uint)bVar3 != 0) {
		__format = GetStr__Fi(0x35d);
		strcpy(&tempstr,__format);
		if (bVar1 != 0) {
			__format = GetStr__Fi(0x51c);
			sprintf(&tempstr,__format,&tempstr,(uint)bVar1);
		}
		if (bVar2 != 0) {
			__format = GetStr__Fi(0x51b);
			sprintf(&tempstr,__format,&tempstr,(uint)bVar2);
		}
		if (bVar3 != 0) {
			__format = GetStr__Fi(0x51a);
			sprintf(&tempstr,__format,&tempstr,(uint)bVar3);
		}
		AddPanelString__FPCci(&tempstr,1);
	}
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CastScroll__Fii(int pnum /*$s2*/, int Spell /*$s0*/)
 // line 4234, offset 0x80047464
	/* begin block 1 */
		// Start line: 4235
		// Start offset: 0x80047464
		// Variables:
	// 		struct PlayerStruct *ptrplr; // $s1

		/* begin block 1.1 */
			// Start line: 4272
			// Start offset: 0x800475AC

			/* begin block 1.1.1 */
				// Start line: 4285
				// Start offset: 0x8004760C
				// Variables:
			// 		int dx; // $a2
			// 		int dy; // $a3
			/* end block 1.1.1 */
			// End offset: 0x800476D0
			// End Line: 4304
		/* end block 1.1 */
		// End offset: 0x800476D0
		// End Line: 4304
	/* end block 1 */
	// End offset: 0x800476D0
	// End Line: 4304

	/* begin block 2 */
		// Start line: 9666
	/* end block 2 */
	// End Line: 9667

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CastScroll__Fii(int pnum,int Spell)

{
	void *pvVar1;
	uint uVar2;
	int cx;
	int cy;
	
	if ((leveltype == '\0') && ((&spelldata)[Spell].sTownSpell == '\0')) {
		return;
	}
	if (FePlayerNo == 0) {
		if ((Spell == 0x22) || (Spell == 0x20)) {
LAB_800474fc:
			PlaySFX__Fi(IS_TITERR);
			return;
		}
	}
	else {
		if ((Spell == 0x17) || (Spell == 10)) goto LAB_800474fc;
		if (((Spell == 0x20) || (Spell == 0x22)) && ((&plr)[pnum ^ 1].plractive != '\0')) {
			return;
		}
	}
	(&ScrollFlag)[pnum] = 1;
	if ((Spell == 5) && (invflag != '\0')) {
		NewCursor__Fi(2);
		(&ScrollFlag)[pnum] = 0;
	}
	else {
		invflag = '\0';
	}
	(&plr)[pnum]._pSplType = '\x02';
	(&plr)[pnum]._pSpell = (char)Spell;
	pvVar1 = TargetingSpell__Fi(Spell);
	if (pvVar1 == (void *)0x0) {
		cx = (int)(&plr)[pnum]._px + (int)(&offset_x)[(int)(&plr)[pnum]._pdir];
		cy = (int)(&plr)[pnum]._py + (int)(&offset_y)[(int)(&plr)[pnum]._pdir];
		if ((FePlayerNo != 0) || ((Spell != 0x22 && (Spell != 0x20)))) {
			if ((Spell == 0x22) || (Spell == 0x20)) {
				uVar2 = pnum ^ 1;
				cx = (int)(&plr)[uVar2]._px;
				cy = (int)(&plr)[uVar2]._py;
				(&_pcursplr)[sel_data] = (char)uVar2;
			}
			StartSpell__FP12PlayerStructiii(&plr + pnum,0,cx,cy);
		}
	}
	else {
		(&plr)[pnum]._pTSplType = '\x02';
		(&plr)[pnum]._pTSpell = (char)Spell;
		InitTargetCursor__Fi(pnum);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UseItem__Fiii(int p /*$s2*/, int Mid /*$a1*/, int spl /*$s0*/)
 // line 4313, offset 0x800476f0
	/* begin block 1 */
		// Start line: 4314
		// Start offset: 0x800476F0
		// Variables:
	// 		long l; // $s0
	// 		unsigned long t; // $a0
	// 		struct PlayerStruct *ptrplr; // $s1
	/* end block 1 */
	// End offset: 0x80047CE4
	// End Line: 4512

	/* begin block 2 */
		// Start line: 9828
	/* end block 2 */
	// End Line: 9829

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UseItem__Fiii(int p,int Mid,int spl)

{
	char cVar1;
	long lVar2;
	int iVar3;
	uint uVar4;
	int l;
	uint uVar5;
	uint uVar6;
	int iVar7;
	
	switch(Mid) {
	case 2:
		lVar2 = (&plr)[p]._pMaxHPBase;
		drawhpflag = '\x01';
		(&plr)[p]._pHitPoints = (&plr)[p]._pMaxHP;
		(&plr)[p]._pHPBase = lVar2;
		break;
	case 3:
	case 0x1c:
		l = (&plr)[p]._pMaxHP;
		lVar2 = ENG_random__Fl(l >> 8);
		l = lVar2 + (l >> 9);
		iVar7 = l * 0x40;
		if ((&plr)[p]._pClass == '\0') {
			iVar7 = l * 0x80;
		}
		if ((&plr)[p]._pClass == '\x01') {
			iVar7 = iVar7 + (iVar7 >> 1);
		}
		iVar3 = (&plr)[p]._pMaxHP;
		l = (&plr)[p]._pHitPoints + iVar7;
		(&plr)[p]._pHitPoints = l;
		if (iVar3 < l) {
			(&plr)[p]._pHitPoints = iVar3;
		}
		l = (&plr)[p]._pMaxHPBase;
		iVar7 = (&plr)[p]._pHPBase + iVar7;
		(&plr)[p]._pHPBase = iVar7;
		if (l < iVar7) {
			(&plr)[p]._pHPBase = l;
		}
		drawhpflag = '\x01';
		break;
	case 6:
		l = (&plr)[p]._pMaxMana >> 8;
		if (l < 0) {
			l = -l;
		}
		lVar2 = ENG_random__Fl(l);
		iVar7 = lVar2 + (l >> 1);
		l = iVar7 * 0x40;
		if ((&plr)[p]._pClass == '\x02') {
			l = iVar7 * 0x80;
		}
		if ((&plr)[p]._pClass == '\x01') {
			l = l + (l >> 1);
		}
		if (l < 1) {
			l = 1;
		}
		if (((&plr)[p]._pIFlags & 0x8000000U) != 0) {
			return;
		}
		iVar3 = (&plr)[p]._pMaxMana;
		iVar7 = (&plr)[p]._pMana + l;
		(&plr)[p]._pMana = iVar7;
		if (iVar3 < iVar7) {
			(&plr)[p]._pMana = iVar3;
		}
		iVar7 = (&plr)[p]._pMaxManaBase;
		l = (&plr)[p]._pManaBase + l;
		(&plr)[p]._pManaBase = l;
		if (iVar7 < l) {
			(&plr)[p]._pManaBase = iVar7;
		}
		goto LAB_80047a48;
	case 7:
		if (((&plr)[p]._pIFlags & 0x8000000U) == 0) {
			lVar2 = (&plr)[p]._pMaxManaBase;
			drawmanaflag = '\x01';
			(&plr)[p]._pMana = (&plr)[p]._pMaxMana;
			(&plr)[p]._pManaBase = lVar2;
		}
		break;
	case 10:
		ModifyPlrStr__Fii(p,1);
		break;
	case 0xb:
		ModifyPlrMag__Fii(p,1);
		break;
	case 0xc:
		ModifyPlrDex__Fii(p,1);
		break;
	case 0xd:
		l = 1;
		goto LAB_80047cdc;
	case 0x12:
		l = (&plr)[p]._pMaxHP;
		lVar2 = ENG_random__Fl(l >> 8);
		l = lVar2 + (l >> 9);
		iVar7 = l * 0x40;
		if ((&plr)[p]._pClass == '\0') {
			iVar7 = l * 0x80;
		}
		if ((&plr)[p]._pClass == '\x01') {
			iVar7 = iVar7 + (iVar7 >> 1);
		}
		iVar3 = (&plr)[p]._pMaxHP;
		l = (&plr)[p]._pHitPoints + iVar7;
		(&plr)[p]._pHitPoints = l;
		if (iVar3 < l) {
			(&plr)[p]._pHitPoints = iVar3;
		}
		l = (&plr)[p]._pMaxHPBase;
		iVar7 = (&plr)[p]._pHPBase + iVar7;
		(&plr)[p]._pHPBase = iVar7;
		if (l < iVar7) {
			(&plr)[p]._pHPBase = l;
		}
		l = (&plr)[p]._pMaxMana;
		drawhpflag = '\x01';
		lVar2 = ENG_random__Fl(l >> 8);
		iVar7 = lVar2 + (l >> 9);
		l = iVar7 * 0x40;
		if ((&plr)[p]._pClass == '\x02') {
			l = iVar7 * 0x80;
		}
		if ((&plr)[p]._pClass == '\x01') {
			l = l + (l >> 1);
		}
		if (((&plr)[p]._pIFlags & 0x8000000U) == 0) {
			iVar3 = (&plr)[p]._pMaxMana;
			iVar7 = (&plr)[p]._pMana + l;
			(&plr)[p]._pMana = iVar7;
			if (iVar3 < iVar7) {
				(&plr)[p]._pMana = iVar3;
			}
			iVar7 = (&plr)[p]._pMaxManaBase;
			l = (&plr)[p]._pManaBase + l;
			(&plr)[p]._pManaBase = l;
			if (iVar7 < l) {
				(&plr)[p]._pManaBase = iVar7;
			}
			drawmanaflag = '\x01';
		}
		break;
	case 0x13:
		lVar2 = (&plr)[p]._pMaxHPBase;
		(&plr)[p]._pHitPoints = (&plr)[p]._pMaxHP;
		uVar5 = (&plr)[p]._pIFlags;
		drawhpflag = '\x01';
		(&plr)[p]._pHPBase = lVar2;
		if ((uVar5 & 0x8000000) == 0) {
			lVar2 = (&plr)[p]._pMaxManaBase;
			drawmanaflag = '\x01';
			(&plr)[p]._pMana = (&plr)[p]._pMaxMana;
			(&plr)[p]._pManaBase = lVar2;
		}
		break;
	case 0x15:
		if ((&spelldata)[spl].sTargeted != '\0') goto LAB_80047c2c;
		ClrPlrPath__Fi(p);
		(&plr)[p]._pTSplType = '\x04';
LAB_80047c48:
		(&plr)[p]._pSpell = (char)spl;
		(&plr)[p]._pSplFrom = '\x03';
		(&plr)[p].destParam1 = (char)cursmx;
		(&plr)[p].destParam2 = (char)cursmy;
		goto LAB_80047c74;
	case 0x16:
		if ((&spelldata)[spl].sTargeted == '\0') {
			ClrPlrPath__Fi(p);
			(&plr)[p]._pSplType = '\x04';
			goto LAB_80047c48;
		}
LAB_80047c2c:
		(&plr)[p]._pTSpell = (char)spl;
		(&plr)[p]._pTSplType = '\x04';
LAB_80047c74:
		CastScroll__Fii(p,spl);
		break;
	case 0x18:
		uVar5 = spl - 1;
		if ((int)(uVar5 * 0x4000000) < 0) {
			uVar6 = 1 << (uVar5 & 0x1f);
			uVar5 = 0;
		}
		else {
			uVar6 = 0 << (uVar5 & 0x1f);
			if (uVar5 * 0x4000000 != 0) {
				uVar6 = uVar6 | 1U >> (-uVar5 & 0x1f);
			}
			uVar5 = 1 << (uVar5 & 0x1f);
		}
		uVar4 = *(uint *)((int)&(&plr)[p]._pMemSpells + 4);
		l = (int)&(&plr)[p]._pmode + spl;
		*(uint *)&(&plr)[p]._pMemSpells = *(uint *)&(&plr)[p]._pMemSpells | uVar5;
		*(uint *)((int)&(&plr)[p]._pMemSpells + 4) = uVar4 | uVar6;
		cVar1 = *(char *)(l + 0x71);
		if (cVar1 < '\x0f') {
			*(char *)(l + 0x71) = cVar1 + '\x01';
		}
		iVar7 = (&plr)[p]._pMaxMana;
		l = (&plr)[p]._pMana + (uint)(&spelldata)[spl].sManaCost * 0x40;
		(&plr)[p]._pMana = l;
		if (iVar7 < l) {
			(&plr)[p]._pMana = iVar7;
		}
		iVar7 = (&plr)[p]._pMaxManaBase;
		l = (&plr)[p]._pManaBase + (uint)(&spelldata)[spl].sManaCost * 0x40;
		(&plr)[p]._pManaBase = l;
		if (iVar7 < l) {
			(&plr)[p]._pManaBase = iVar7;
		}
		if (p == myplr) {
			CalcPlrBookVals__Fi(p);
		}
LAB_80047a48:
		drawmanaflag = '\x01';
		break;
	case 0x2a:
		DBG_Error((char *)0x0,"source/ITEMS.cpp",(int)&DAT_00001193);
		break;
	case 0x2c:
		ModifyPlrStr__Fii(p,3);
		ModifyPlrMag__Fii(p,3);
		ModifyPlrDex__Fii(p,3);
		l = 3;
LAB_80047cdc:
		ModifyPlrVit__Fii(p,l);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ StoreStatOk__FP10ItemStruct(struct ItemStruct *h /*$a3*/)
 // line 4521, offset 0x80047d04
	/* begin block 1 */
		// Start line: 4522
		// Start offset: 0x80047D04
		// Variables:
	// 		unsigned char sf; // $a1
	/* end block 1 */
	// End offset: 0x80047D90
	// End Line: 4527

	/* begin block 2 */
		// Start line: 10280
	/* end block 2 */
	// End Line: 10281

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar StoreStatOk__FP10ItemStruct(ItemStruct *h)

{
	return (uchar)((int)(uint)h->_iMinDex <= (int)(&plr)[myplr]._pDexterity &&
								((int)(uint)h->_iMinMag <= (int)(&plr)[myplr]._pMagic &&
								(int)(uint)h->_iMinStr <= (int)(&plr)[myplr]._pStrength));
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PremiumItemOk__Fi(int i /*$a0*/)
 // line 4545, offset 0x80047d98
	/* begin block 1 */
		// Start line: 4546
		// Start offset: 0x80047D98
		// Variables:
	// 		unsigned char rv; // $v1
	/* end block 1 */
	// End offset: 0x80047E0C
	// End Line: 4570

	/* begin block 2 */
		// Start line: 10338
	/* end block 2 */
	// End Line: 10339

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PremiumItemOk__Fi(int i)

{
	char cVar1;
	bool bVar2;
	
	cVar1 = (&AllItemsList)[i].itype;
	bVar2 = cVar1 != '\n' && (cVar1 != '\x0e' && (cVar1 != '\v' && cVar1 != '\0'));
	if ((FePlayerNo != 0) && (bVar2 = cVar1 != '\f' && bVar2, cVar1 == '\r')) {
		bVar2 = false;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndPremiumItem__Fii(int minlvl /*$s4*/, int maxlvl /*$s5*/)
 // line 4575, offset 0x80047e14
	/* begin block 1 */
		// Start line: 4576
		// Start offset: 0x80047E14
		// Variables:
	// 		int ril[512]; // stack offset -2080
	// 		int ri; // $s3
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80047EF0
	// End Line: 4595

	/* begin block 2 */
		// Start line: 10389
	/* end block 2 */
	// End Line: 10390

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndPremiumItem__Fii(int minlvl,int maxlvl)

{
	char *pcVar1;
	uchar uVar2;
	int iVar3;
	int i;
	int *piVar4;
	long v;
	int local_820 [512];
	
	v = 0;
	i = 1;
	if (ItemDataStruct_801113c4.iLoc != -1) {
		piVar4 = local_820;
		iVar3 = 0x20;
		do {
			if (((((&AllItemsList.iRnd)[iVar3] != '\0') && (uVar2 = PremiumItemOk__Fi(i), uVar2 != '\0'))
					&& (minlvl <= (int)(&AllItemsList.iMinMLvl)[iVar3])) &&
				 ((int)(&AllItemsList.iMinMLvl)[iVar3] <= maxlvl)) {
				*piVar4 = i;
				piVar4 = piVar4 + 1;
				v = v + 1;
			}
			pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar3;
			i = i + 1;
			iVar3 = iVar3 + 0x20;
		} while (*pcVar1 != -1);
	}
	v = ENG_random__Fl(v);
	return local_820[v] + 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnOnePremium__Fii(int i /*$s2*/, int plvl /*$s1*/)
 // line 4602, offset 0x80047f18
	/* begin block 1 */
		// Start line: 4603
		// Start offset: 0x80047F18
		// Variables:
	// 		int itype; // $s0
	// 		int maxval; // $s4
	// 		struct ItemStruct holditem; // stack offset -136
	/* end block 1 */
	// End offset: 0x800481E8
	// End Line: 4643

	/* begin block 2 */
		// Start line: 10466
	/* end block 2 */
	// End Line: 10467

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnOnePremium__Fii(int i,int plvl)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	int *piVar8;
	int *piVar9;
	ItemStruct *pIVar10;
	int local_88 [24];
	int aiStack40 [4];
	
	pIVar1 = item;
	piVar9 = local_88;
	do {
		piVar8 = piVar9;
		pIVar6 = pIVar1;
		iVar3 = pIVar6->_iVMult1;
		iVar4 = pIVar6->_iVAdd2;
		iVar5 = pIVar6->_iVMult2;
		*piVar8 = pIVar6->_iVAdd1;
		piVar8[1] = iVar3;
		piVar8[2] = iVar4;
		piVar8[3] = iVar5;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
		piVar9 = piVar8 + 4;
	} while ((ItemStruct *)&pIVar6->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar6->_ivalue;
	iVar4 = pIVar6->_iIvalue;
	piVar8[4] = item[0]._96_4_;
	piVar8[5] = iVar3;
	piVar8[6] = iVar4;
	if (0x1e < plvl) {
		plvl = 0x1e;
	}
	if (plvl < 1) {
		plvl = 1;
	}
	do {
		item[0]._iSeed = GetRndSeed__Fv();
		SetRndSeed__Fl(item[0]._iSeed);
		iVar3 = RndPremiumItem__Fii(plvl >> 2,plvl);
		GetItemAttrs__Fiii(0,iVar3 + -1,plvl);
		GetItemBonus__FiiiiUc(0,iVar3 + -1,plvl >> 1,plvl,1);
	} while (140000 < item[0]._iIvalue);
	pIVar1 = &_premiumitem + StorePlrNo * 6 + i;
	pIVar6 = item;
	do {
		pIVar10 = pIVar6;
		pIVar7 = pIVar1;
		iVar3 = pIVar10->_iVMult1;
		iVar4 = pIVar10->_iVAdd2;
		iVar5 = pIVar10->_iVMult2;
		pIVar7->_iVAdd1 = pIVar10->_iVAdd1;
		pIVar7->_iVMult1 = iVar3;
		pIVar7->_iVAdd2 = iVar4;
		pIVar7->_iVMult2 = iVar5;
		pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
		pIVar6 = (ItemStruct *)&pIVar10->_iSeed;
	} while ((ItemStruct *)&pIVar10->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar10->_ivalue;
	iVar4 = pIVar10->_iIvalue;
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar7->_ivalue = iVar3;
	pIVar7->_iIvalue = iVar4;
	iVar3 = StorePlrNo;
	(&_premiumitem)[StorePlrNo * 6 + i]._PlrCreate = (char)FePlayerNo;
	iVar4 = StorePlrNo;
	(&_premiumitem)[iVar3 * 6 + i]._iCreateInfo = (ushort)plvl | 0x800;
	(&_premiumitem)[iVar4 * 6 + i]._iIdentified = '\x01';
	uVar2 = StoreStatOk__FP10ItemStruct(&_premiumitem + i + StorePlrNo * 6);
	(&_premiumitem)[StorePlrNo * 6 + i]._iStatFlag = uVar2;
	piVar9 = local_88;
	pIVar1 = item;
	do {
		pIVar6 = pIVar1;
		piVar8 = piVar9;
		iVar3 = piVar8[1];
		iVar4 = piVar8[2];
		iVar5 = piVar8[3];
		pIVar6->_iVAdd1 = *piVar8;
		pIVar6->_iVMult1 = iVar3;
		pIVar6->_iVAdd2 = iVar4;
		pIVar6->_iVMult2 = iVar5;
		piVar9 = piVar8 + 4;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
	} while (piVar9 != aiStack40);
	iVar3 = piVar8[5];
	iVar4 = piVar8[6];
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = *piVar9;
	pIVar6->_ivalue = iVar3;
	pIVar6->_iIvalue = iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnPremium__Fi(int lvl /*$s3*/)
 // line 4651, offset 0x8004820c
	/* begin block 1 */
		// Start line: 4652
		// Start offset: 0x8004820C
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8004857C
	// End Line: 4671

	/* begin block 2 */
		// Start line: 10587
	/* end block 2 */
	// End Line: 10588

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnPremium__Fi(int lvl)

{
	undefined4 *puVar1;
	ItemStruct *pIVar2;
	undefined4 uVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 uVar7;
	int *piVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	ItemStruct *pIVar11;
	undefined4 *puVar12;
	int i;
	int iVar13;
	int *piVar14;
	
	if (_numpremium[StorePlrNo] < 6) {
		i = 0;
		piVar14 = premiumlvladd;
		iVar13 = 0;
		do {
			if (*(short *)((int)&(&_premiumitem)[StorePlrNo * 6]._itype + iVar13) == -1) {
				SpawnOnePremium__Fii(i,_premiumlevel[StorePlrNo] + *piVar14);
			}
			piVar14 = piVar14 + 1;
			i = i + 1;
			iVar13 = iVar13 + 0x6c;
		} while (i < 6);
		_numpremium[StorePlrNo] = 6;
	}
	i = _premiumlevel[StorePlrNo];
	while (i < lvl) {
		iVar13 = StorePlrNo * 0x288;
		i = StorePlrNo * 6;
		_premiumlevel[StorePlrNo] = _premiumlevel[StorePlrNo] + 1;
		piVar14 = (int *)(&DAT_800df5e0 + iVar13);
		pIVar2 = &_premiumitem + i;
		do {
			pIVar11 = pIVar2;
			piVar8 = piVar14;
			i = piVar8[1];
			iVar4 = piVar8[2];
			iVar6 = piVar8[3];
			pIVar11->_iVAdd1 = *piVar8;
			pIVar11->_iVMult1 = i;
			pIVar11->_iVAdd2 = iVar4;
			pIVar11->_iVMult2 = iVar6;
			piVar14 = piVar8 + 4;
			pIVar2 = (ItemStruct *)&pIVar11->_iSeed;
		} while (piVar14 != (int *)(iVar13 + -0x7ff209c0));
		i = piVar8[5];
		iVar13 = piVar8[6];
		((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = *piVar14;
		pIVar11->_ivalue = i;
		pIVar11->_iIvalue = iVar13;
		i = StorePlrNo * 0x288;
		piVar14 = (int *)(&DAT_800df64c + i);
		pIVar2 = &ItemStruct_800df574 + StorePlrNo * 6;
		do {
			pIVar11 = pIVar2;
			piVar8 = piVar14;
			iVar13 = piVar8[1];
			iVar4 = piVar8[2];
			iVar6 = piVar8[3];
			pIVar11->_iVAdd1 = *piVar8;
			pIVar11->_iVMult1 = iVar13;
			pIVar11->_iVAdd2 = iVar4;
			pIVar11->_iVMult2 = iVar6;
			piVar14 = piVar8 + 4;
			pIVar2 = (ItemStruct *)&pIVar11->_iSeed;
		} while (piVar14 != (int *)(i + -0x7ff20954));
		i = piVar8[5];
		iVar13 = piVar8[6];
		((ItemStruct *)&pIVar11->_iSeed)->_iVAdd1 = *piVar14;
		pIVar11->_ivalue = i;
		pIVar11->_iIvalue = iVar13;
		i = StorePlrNo * 0x288;
		puVar9 = (undefined4 *)(&DAT_800df6b8 + i);
		puVar1 = (undefined4 *)(&DAT_800df5e0 + i);
		do {
			puVar12 = puVar1;
			puVar10 = puVar9;
			uVar3 = puVar10[1];
			uVar5 = puVar10[2];
			uVar7 = puVar10[3];
			*puVar12 = *puVar10;
			puVar12[1] = uVar3;
			puVar12[2] = uVar5;
			puVar12[3] = uVar7;
			puVar9 = puVar10 + 4;
			puVar1 = puVar12 + 4;
		} while (puVar9 != (undefined4 *)(i + -0x7ff208e8));
		uVar3 = puVar10[5];
		uVar5 = puVar10[6];
		puVar12[4] = *puVar9;
		puVar12[5] = uVar3;
		puVar12[6] = uVar5;
		SpawnOnePremium__Fii(3,_premiumlevel[StorePlrNo] + INT_ARRAY_800d1d48[0]);
		i = StorePlrNo * 0x288;
		puVar9 = (undefined4 *)(&DAT_800df724 + i);
		puVar1 = (undefined4 *)(&DAT_800df6b8 + i);
		do {
			puVar12 = puVar1;
			puVar10 = puVar9;
			uVar3 = puVar10[1];
			uVar5 = puVar10[2];
			uVar7 = puVar10[3];
			*puVar12 = *puVar10;
			puVar12[1] = uVar3;
			puVar12[2] = uVar5;
			puVar12[3] = uVar7;
			puVar9 = puVar10 + 4;
			puVar1 = puVar12 + 4;
		} while (puVar9 != (undefined4 *)(i + -0x7ff2087c));
		uVar3 = puVar10[5];
		uVar5 = puVar10[6];
		puVar12[4] = *puVar9;
		puVar12[5] = uVar3;
		puVar12[6] = uVar5;
		SpawnOnePremium__Fii(5,_premiumlevel[StorePlrNo] + INT_800d1d50);
		i = _premiumlevel[StorePlrNo];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WitchBookLevel__Fi(int ii /*$a0*/)
 // line 4683, offset 0x800485ac
	/* begin block 1 */
		// Start line: 4684
		// Start offset: 0x800485AC
		// Variables:
	// 		int slvl; // $a2
	/* end block 1 */
	// End offset: 0x8004877C
	// End Line: 4696

	/* begin block 2 */
		// Start line: 10654
	/* end block 2 */
	// End Line: 10655

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WitchBookLevel__Fi(int ii)

{
	int iVar1;
	
	if ((&_witchitem)[StorePlrNo * 0x14 + ii]._iMiscId == '\x18') {
		(&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag =
				 (uchar)(&spelldata)[(int)(&_witchitem)[StorePlrNo * 0x14 + ii]._iSpell].sMinInt;
		iVar1 = (int)*(char *)(myplr * 0x19e8 + -0x7ff25a57 +
													(int)(&_witchitem)[StorePlrNo * 0x14 + ii]._iSpell);
		while (iVar1 != 0) {
			(&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag =
					 (&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag +
					 (char)((int)(uint)(&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag / 5);
			iVar1 = iVar1 + -1;
			if (0xff < (int)((uint)(&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag +
											(int)(uint)(&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag / 5)) {
				(&_witchitem)[StorePlrNo * 0x14 + ii]._iMinMag = -1;
				iVar1 = 0;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnStoreGold__Fv()
 // line 4729, offset 0x80048788
	/* begin block 1 */
		// Start line: 4730
		// Start offset: 0x80048788
	/* end block 1 */
	// End offset: 0x80048848
	// End Line: 4734

	/* begin block 2 */
		// Start line: 10745
	/* end block 2 */
	// End Line: 10746

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnStoreGold__Fv(void)

{
	ItemStruct *pIVar1;
	ItemStruct *pIVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	GetItemAttrs__Fiii(0,0,1);
	pIVar1 = _golditem + StorePlrNo;
	pIVar2 = item;
	do {
		pIVar7 = pIVar2;
		pIVar6 = pIVar1;
		iVar3 = pIVar7->_iVMult1;
		iVar4 = pIVar7->_iVAdd2;
		iVar5 = pIVar7->_iVMult2;
		pIVar6->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar6->_iVMult1 = iVar3;
		pIVar6->_iVAdd2 = iVar4;
		pIVar6->_iVMult2 = iVar5;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
		pIVar2 = (ItemStruct *)&pIVar7->_iSeed;
	} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar7->_ivalue;
	iVar4 = pIVar7->_iIvalue;
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar6->_ivalue = iVar3;
	pIVar6->_iIvalue = iVar4;
	_golditem[StorePlrNo]._iStatFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecalcStoreStats__Fv()
 // line 4782, offset 0x80048858
	/* begin block 1 */
		// Start line: 4783
		// Start offset: 0x80048858
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80048B24
	// End Line: 4794

	/* begin block 2 */
		// Start line: 10853
	/* end block 2 */
	// End Line: 10854

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecalcStoreStats__Fv(void)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_smithitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct
												((ItemStruct *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
			(&(&_smithitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] = uVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_premiumitem)[StorePlrNo * 6]._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct
												((ItemStruct *)((int)&(&_premiumitem)[StorePlrNo * 6]._iVAdd1 + iVar2));
			(&(&_premiumitem)[StorePlrNo * 6]._iStatFlag)[iVar2] = uVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 6);
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_witchitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct
												((ItemStruct *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
			(&(&_witchitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] = uVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	iVar2 = 0;
	do {
		if (*(short *)((int)&(&_healitem)[StorePlrNo * 0x14]._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct
												((ItemStruct *)((int)&(&_healitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
			(&(&_healitem)[StorePlrNo * 0x14]._iStatFlag)[iVar2] = uVar1;
		}
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x6c;
	} while (iVar3 < 0x14);
	uVar1 = StoreStatOk__FP10ItemStruct(_boyitem + StorePlrNo);
	_boyitem[StorePlrNo]._iStatFlag = uVar1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ItemNoFlippy__Fv()
 // line 4805, offset 0x80048b3c
	/* begin block 1 */
		// Start line: 4806
		// Start offset: 0x80048B3C
		// Variables:
	// 		int r; // $v0
	/* end block 1 */
	// End offset: 0x80048B98
	// End Line: 4814

	/* begin block 2 */
		// Start line: 10908
	/* end block 2 */
	// End Line: 10909

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ItemNoFlippy__Fv(void)

{
	char cVar1;
	int iVar2;
	
	iVar2 = (int)*(char *)(&ItemStruct_800d52e8.field_0x6b + numitems);
	cVar1 = item[iVar2]._iAnimLen;
	item[iVar2]._iAnimFlag = '\0';
	item[iVar2]._iSelFlag = '\x01';
	item[iVar2]._iAnimFrame = cVar1;
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateSpellBook__FiiiUcUc(int x /*$s0*/, int y /*$s1*/, int ispell /*$s7*/, unsigned char sendmsg /*$fp*/, int delta /*stack 16*/)
 // line 4832, offset 0x80048ba0
	/* begin block 1 */
		// Start line: 4833
		// Start offset: 0x80048BA0
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s6
	// 		unsigned char done; // $s3
	/* end block 1 */
	// End offset: 0x80048CFC
	// End Line: 4855

	/* begin block 2 */
		// Start line: 10962
	/* end block 2 */
	// End Line: 10963

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateSpellBook__FiiiUcUc(int x,int y,int ispell,uchar sendmsg,int delta)

{
	bool bVar1;
	char cVar2;
	int idx;
	long _iseed;
	int ii;
	
	bVar1 = false;
	idx = RndTypeItems__Fii(0,0x18);
	cVar2 = itemavail;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar2;
		do {
			_iseed = GetRndSeed__Fv();
			SetupAllItems__FiiiiiUcUcUc(ii,idx,_iseed,(uint)currlevel << 1,1,1,0,delta & 0xff);
			if ((item[ii]._iMiscId == '\x18') && ((int)item[ii]._iSpell == ispell)) {
				bVar1 = true;
			}
		} while (!bVar1);
		if (sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		if ((char)delta != '\0') {
			DeltaAddItem__Fi(ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateMagicArmor__FiiiiUcUc(int x /*$a0*/, int y /*$a1*/, int imisc /*$s3*/, int icurs /*$s7*/, int sendmsg /*stack 16*/, int delta /*stack 20*/)
 // line 4862, offset 0x80048d30
	/* begin block 1 */
		// Start line: 4863
		// Start offset: 0x80048D30
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s0
	// 		unsigned char done; // $s2
	/* end block 1 */
	// End offset: 0x80048E78
	// End Line: 4884

	/* begin block 2 */
		// Start line: 11054
	/* end block 2 */
	// End Line: 11055

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateMagicArmor__FiiiiUcUc(int x,int y,int imisc,int icurs,int sendmsg,int delta)

{
	bool bVar1;
	char cVar2;
	int idx;
	long _iseed;
	int ii;
	
	cVar2 = itemavail;
	bVar1 = false;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar2;
		idx = RndTypeItems__Fii(imisc,0);
		do {
			_iseed = GetRndSeed__Fv();
			SetupAllItems__FiiiiiUcUcUc(ii,idx,_iseed,(uint)currlevel << 1,1,1,0,delta & 0xff);
			if ((uint)item[ii]._iCurs == icurs) {
				bVar1 = true;
			}
			else {
				idx = RndTypeItems__Fii(imisc,0);
			}
		} while (!bVar1);
		if ((char)sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		if ((char)delta != '\0') {
			DeltaAddItem__Fi(ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateMagicWeapon__FiiiiUcUc(int x /*$a0*/, int y /*$a1*/, int imisc /*$s3*/, int icurs /*$s7*/, int sendmsg /*stack 16*/, int delta /*stack 20*/)
 // line 4891, offset 0x80048eac
	/* begin block 1 */
		// Start line: 4892
		// Start offset: 0x80048EAC
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s0
	// 		unsigned char done; // $s2
	/* end block 1 */
	// End offset: 0x80048FF4
	// End Line: 4913

	/* begin block 2 */
		// Start line: 11128
	/* end block 2 */
	// End Line: 11129

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateMagicWeapon__FiiiiUcUc(int x,int y,int imisc,int icurs,int sendmsg,int delta)

{
	bool bVar1;
	char cVar2;
	int idx;
	long _iseed;
	int ii;
	
	cVar2 = itemavail;
	bVar1 = false;
	if (numitems < 0x7f) {
		ii = (int)itemavail;
		GetSuperItemSpace__Fiic(x,y,itemavail);
		itemavail = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = cVar2;
		idx = RndTypeItems__Fii(imisc,0);
		do {
			_iseed = GetRndSeed__Fv();
			SetupAllItems__FiiiiiUcUcUc(ii,idx,_iseed,(uint)currlevel << 1,1,1,0,delta & 0xff);
			if ((uint)item[ii]._iCurs == icurs) {
				bVar1 = true;
			}
			else {
				idx = RndTypeItems__Fii(imisc,0);
			}
		} while (!bVar1);
		if ((char)sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
		if ((char)delta != '\0') {
			DeltaAddItem__Fi(ii);
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawUniqueInfo__Fv()
 // line 5051, offset 0x80049028
	/* begin block 1 */
		// Start line: 5052
		// Start offset: 0x80049028
		// Variables:
	// 		int u; // $v1
	/* end block 1 */
	// End offset: 0x80049178
	// End Line: 5093

	/* begin block 2 */
		// Start line: 11458
	/* end block 2 */
	// End Line: 11459

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawUniqueInfo__Fv(void)

{
	char cVar1;
	int iVar2;
	
	iVar2 = (int)curruitem._iUid;
	PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower1,&curruitem);
	AddPanelString__FPCci(&tempstr,1);
	cVar1 = UniqueItemList[iVar2].UINumPL;
	if ('\x01' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower2,&curruitem);
		AddPanelString__FPCci(&tempstr,1);
	}
	if ('\x02' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower3,&curruitem);
		AddPanelString__FPCci(&tempstr,1);
	}
	if ('\x03' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower4,&curruitem);
		AddPanelString__FPCci(&tempstr,1);
	}
	if ('\x04' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower5,&curruitem);
		AddPanelString__FPCci(&tempstr,1);
	}
	if ('\x05' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower6,&curruitem);
		AddPanelString__FPCci(&tempstr,1);
	}
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr /*$s0*/, unsigned short ItemNo /*$s2*/, unsigned short MaxLen /*$a2*/)
 // line 5246, offset 0x80049198
	/* begin block 1 */
		// Start line: 5247
		// Start offset: 0x80049198
		// Variables:
	// 		int PreIdx; // $v1
	// 		int SufIdx; // $s1
	// 		char PreStr[64]; // stack offset -280
	// 		char ItemStr[64]; // stack offset -216
	// 		char SufStr[64]; // stack offset -152
	// 		char ltstr[64]; // stack offset -88
	/* end block 1 */
	// End offset: 0x800495E8
	// End Line: 5434

	/* begin block 2 */
		// Start line: 11852
	/* end block 2 */
	// End Line: 11853

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * MakeItemStr__FP10ItemStructUsUs(ItemStruct *ItemPtr,ushort ItemNo,ushort MaxLen)

{
	char *__src;
	LANG_TYPE LVar1;
	int iVar2;
	char *__dest;
	int **__format;
	int iVar3;
	char local_118 [64];
	char local_d8 [64];
	char local_98 [64];
	char acStack88 [64];
	
	if ((ItemPtr->_iMiscId == '\x1b') || (iVar3 = -1, ItemPtr->_iMagical == '\x02')) {
		__src = GetStr__Fi((uint)ItemNo);
		strcpy(local_d8,__src);
		return local_d8;
	}
	iVar2 = -1;
	if (ItemPtr->_iIdentified != '\0') {
		iVar2 = (int)ItemPtr->_iPrePower;
		iVar3 = (int)ItemPtr->_iSufPower;
	}
	local_118[0] = '\0';
	local_d8[0] = '\0';
	local_98[0] = '\0';
	OutStr[0] = '\0';
	if (iVar2 != -1) {
		__src = GetStr__Fi(PL_Prefix[iVar2].PLName);
		strcpy(local_118,__src);
	}
	if (iVar3 != -1) {
		__src = GetStr__Fi(PL_Suffix[iVar3].PLName);
		strcpy(local_98,__src);
	}
	switch(ItemPtr->_iMiscId) {
	default:
LAB_80049384:
		__src = GetStr__Fi((uint)ItemNo);
		break;
	case '\x17':
		if (ItemNo == 0x3ca) {
			__src = GetStr__Fi(0x3ca);
			__dest = local_d8;
		}
		else {
			if (ItemPtr->_iSpell == '\0') goto LAB_80049384;
			__src = GetStr__Fi(0x402);
			strcat(local_d8,__src);
			__src = GetStr__Fi((&spelldata)[(int)ItemPtr->_iSpell].sNameText);
			__dest = local_98;
		}
		strcpy(__dest,__src);
		goto LAB_80049398;
	case '\x18':
		__src = GetStr__Fi(0x7c);
		strcat(local_d8,__src);
		LVar1 = LANG_GetLang__Fv();
		if (LVar1 != LANG_ENGLISH) {
			strcat(local_d8,(char *)&PTR_DAT_8011b8c8);
		}
		__src = GetStr__Fi((uint)ItemNo);
	}
	strcat(local_d8,__src);
LAB_80049398:
	LVar1 = LANG_GetLang__Fv();
	switch(LVar1) {
	case LANG_ENGLISH:
	case LANG_SWEDISH:
		if (local_118[0] != '\0') {
			strcat(OutStr,local_118);
			strcat(OutStr,(char *)&PTR_DAT_8011b8c8);
		}
		strcat(OutStr,local_d8);
		if (local_98[0] == '\0') break;
		__format = (int **)GetStr__Fi(0x516);
		goto LAB_8004953c;
	case LANG_FRENCH:
		strcat(OutStr,local_d8);
		strcat(OutStr,(char *)&PTR_DAT_8011b8c8);
		if (local_118[0] != '\0') {
			strcat(OutStr,local_118);
		}
		strcat(OutStr,(char *)&PTR_DAT_8011b8c8);
		if (local_98[0] != '\0') {
			strcat(OutStr,local_98);
		}
		break;
	case LANG_GERMAN:
		if (local_118[0] != '\0') {
			strcat(OutStr,local_118);
			iVar3 = GetStrWidth__5CFontPc(&MediumFont,local_118);
			iVar2 = GetStrWidth__5CFontPc(&MediumFont,local_d8);
			if (0x94 < iVar3 + iVar2) {
				strcat(OutStr,(char *)&PTR_DAT_0000002c_1_8011b8cc);
			}
		}
		strcat(OutStr,local_d8);
		if (local_98[0] == '\0') break;
		__format = PTR_ARRAY_8011b8d0;
LAB_8004953c:
		sprintf(OutStr,(char *)__format,OutStr,local_98);
		break;
	case LANG_JAP:
		if (local_118[0] != '\0') {
			strcat(OutStr,local_118);
			__src = GetStr__Fi(0x2b1);
			strcat(OutStr,__src);
		}
		strcat(OutStr,local_d8);
		strcpy(acStack88,OutStr);
		if (local_98[0] != '\0') {
			__src = GetStr__Fi(0x2e0);
			sprintf(OutStr,"%s %s %s",acStack88,__src,local_98);
		}
	}
	return OutStr;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SmithItemOk__Fi(int i /*$a0*/)
 // line 5438, offset 0x80049608
	/* begin block 1 */
		// Start line: 5439
		// Start offset: 0x80049608
		// Variables:
	// 		unsigned char rv; // $v1
	/* end block 1 */
	// End offset: 0x80049664
	// End Line: 5455

	/* begin block 2 */
		// Start line: 12245
	/* end block 2 */
	// End Line: 12246

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar SmithItemOk__Fi(int i)

{
	char cVar1;
	
	cVar1 = (&AllItemsList)[i].itype;
	return (uchar)(cVar1 != '\r' &&
								(cVar1 != '\f' &&
								(cVar1 != '\n' && (cVar1 != '\x0e' && (cVar1 != '\v' && cVar1 != '\0')))));
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndSmithItem__Fi(int lvl /*$s5*/)
 // line 5461, offset 0x8004966c
	/* begin block 1 */
		// Start line: 5462
		// Start offset: 0x8004966C
		// Variables:
	// 		int ril[512]; // stack offset -2080
	// 		int ri; // $s3
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8004974C
	// End Line: 5482

	/* begin block 2 */
		// Start line: 12286
	/* end block 2 */
	// End Line: 12287

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndSmithItem__Fi(int lvl)

{
	char *pcVar1;
	uchar uVar2;
	uchar uVar3;
	long lVar4;
	int *piVar5;
	int *piVar6;
	int iVar7;
	int i;
	int v;
	int iVar8;
	int local_820 [512];
	
	v = 0;
	i = 1;
	if (ItemDataStruct_801113c4.iLoc != -1) {
		piVar5 = local_820;
		iVar7 = 0x20;
		iVar8 = v;
		do {
			uVar2 = (&AllItemsList.iRnd)[iVar7];
			piVar6 = piVar5;
			v = iVar8;
			if (((uVar2 != '\0') &&
					(uVar3 = SmithItemOk__Fi(i), piVar6 = piVar5, v = iVar8, uVar3 != '\0')) &&
				 (piVar6 = piVar5, v = iVar8, (int)(&AllItemsList.iMinMLvl)[iVar7] <= lvl)) {
				*piVar5 = i;
				piVar6 = piVar5 + 1;
				v = iVar8 + 1;
				if (uVar2 == '\x02') {
					*piVar6 = i;
					piVar6 = piVar5 + 2;
					v = iVar8 + 2;
				}
			}
			pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar7;
			i = i + 1;
			piVar5 = piVar6;
			iVar7 = iVar7 + 0x20;
			iVar8 = v;
		} while (*pcVar1 != -1);
	}
	lVar4 = ENG_random__Fl(v);
	return local_820[lVar4] + 1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WitchItemOk__Fi(int i /*$a0*/)
 // line 5487, offset 0x80049774
	/* begin block 1 */
		// Start line: 5488
		// Start offset: 0x80049774
		// Variables:
	// 		unsigned char rv; // $a1
	/* end block 1 */
	// End offset: 0x800497FC
	// End Line: 5509

	/* begin block 2 */
		// Start line: 12365
	/* end block 2 */
	// End Line: 12366

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WitchItemOk__Fi(int i)

{
	uchar uVar1;
	
	uVar1 = (&AllItemsList)[i].iMiscId;
	return (uchar)(uVar1 != '\x03' &&
								(uVar1 != '\x02' &&
								((&AllItemsList)[i].iSpell != '\a' &&
								(uVar1 != '\a' &&
								(uVar1 != '\x06' &&
								((&AllItemsList)[i].itype == '\n' || (&AllItemsList)[i].itype == '\0'))))));
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndWitchItem__Fi(int lvl /*$s5*/)
 // line 5513, offset 0x80049804
	/* begin block 1 */
		// Start line: 5514
		// Start offset: 0x80049804
		// Variables:
	// 		int ril[512]; // stack offset -2080
	// 		int ri; // $s3
	// 		int i; // $s0
	// 		int pi; // $s4

		/* begin block 1.1 */
			// Start line: 5541
			// Start offset: 0x8004988C

			/* begin block 1.1.1 */
				// Start line: 5542
				// Start offset: 0x800498A0

				/* begin block 1.1.1.1 */
					// Start line: 5551
					// Start offset: 0x800498B8

					/* begin block 1.1.1.1.1 */
						// Start line: 5552
						// Start offset: 0x80049900
						// Variables:
					// 		int is; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004995C
					// End Line: 5576
				/* end block 1.1.1.1 */
				// End offset: 0x8004995C
				// End Line: 5576
			/* end block 1.1.1 */
			// End offset: 0x8004995C
			// End Line: 5576
		/* end block 1.1 */
		// End offset: 0x8004996C
		// End Line: 5582
	/* end block 1 */
	// End offset: 0x80049988
	// End Line: 5585

	/* begin block 2 */
		// Start line: 12413
	/* end block 2 */
	// End Line: 12414

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndWitchItem__Fi(int lvl)

{
	char *pcVar1;
	uchar uVar2;
	uchar uVar3;
	long lVar4;
	int iVar5;
	int i;
	int iVar6;
	uchar *puVar7;
	int v;
	int iVar8;
	int local_820 [512];
	
	iVar8 = 0;
	i = 1;
	if (ItemDataStruct_801113c4.iLoc != -1) {
		iVar6 = 0x20;
		do {
			if (((&AllItemsList.iMiscId)[iVar6] == '\x06') && (iVar8 == 0)) {
				iVar8 = i;
			}
			pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar6;
			i = i + 1;
			iVar6 = iVar6 + 0x20;
		} while (*pcVar1 != -1);
	}
	v = 0;
	i = 1;
	puVar7 = &ItemDataStruct_801113c4.iSpell;
	iVar6 = 0x20;
	do {
		if ((&AllItemsList.iLoc)[iVar6] == -1) {
			lVar4 = ENG_random__Fl(v);
			return local_820[lVar4] + 1;
		}
		if ((((&AllItemsList.iRnd)[iVar6] != '\0') && (uVar2 = WitchItemOk__Fi(i), uVar2 != '\0')) &&
			 ((int)(&AllItemsList.iMinMLvl)[iVar6] <= lvl)) {
			if (FePlayerNo == 0) {
				uVar2 = *puVar7;
				uVar3 = '\"';
				if (uVar2 == ' ') goto LAB_80049944;
LAB_8004993c:
				iVar5 = i;
				if (uVar2 == uVar3) goto LAB_80049944;
			}
			else {
				uVar2 = *puVar7;
				uVar3 = '\x17';
				if (uVar2 != '\n') goto LAB_8004993c;
LAB_80049944:
				iVar5 = iVar8;
			}
			local_820[v] = iVar5;
			v = v + 1;
		}
		puVar7 = puVar7 + 0x20;
		iVar6 = iVar6 + 0x20;
		i = i + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ BubbleSwapItem__FP10ItemStructT0(struct ItemStruct *a /*$t0*/, struct ItemStruct *b /*$t1*/)
 // line 5590, offset 0x800499b0
	/* begin block 1 */
		// Start line: 5591
		// Start offset: 0x800499B0
		// Variables:
	// 		struct ItemStruct h; // stack offset -112
	/* end block 1 */
	// End offset: 0x80049AAC
	// End Line: 5596

	/* begin block 2 */
		// Start line: 12600
	/* end block 2 */
	// End Line: 12601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BubbleSwapItem__FP10ItemStructT0(ItemStruct *a,ItemStruct *b)

{
	int iVar1;
	int iVar2;
	int iVar3;
	ItemStruct *pIVar4;
	ItemStruct *pIVar5;
	int *piVar6;
	int *piVar7;
	ItemStruct *pIVar8;
	int local_70 [24];
	int aiStack16 [4];
	
	pIVar4 = a;
	piVar7 = local_70;
	do {
		piVar6 = piVar7;
		pIVar5 = pIVar4;
		iVar1 = pIVar5->_iVMult1;
		iVar2 = pIVar5->_iVAdd2;
		iVar3 = pIVar5->_iVMult2;
		*piVar6 = pIVar5->_iVAdd1;
		piVar6[1] = iVar1;
		piVar6[2] = iVar2;
		piVar6[3] = iVar3;
		pIVar4 = (ItemStruct *)&pIVar5->_iSeed;
		piVar7 = piVar6 + 4;
	} while (pIVar4 != (ItemStruct *)&a->_iSufPower);
	iVar1 = pIVar5->_ivalue;
	iVar2 = pIVar5->_iIvalue;
	piVar6[4] = pIVar4->_iVAdd1;
	piVar6[5] = iVar1;
	piVar6[6] = iVar2;
	pIVar4 = b;
	do {
		pIVar8 = a;
		pIVar5 = pIVar4;
		iVar1 = pIVar5->_iVMult1;
		iVar2 = pIVar5->_iVAdd2;
		iVar3 = pIVar5->_iVMult2;
		pIVar8->_iVAdd1 = pIVar5->_iVAdd1;
		pIVar8->_iVMult1 = iVar1;
		pIVar8->_iVAdd2 = iVar2;
		pIVar8->_iVMult2 = iVar3;
		pIVar4 = (ItemStruct *)&pIVar5->_iSeed;
		a = (ItemStruct *)&pIVar8->_iSeed;
	} while (pIVar4 != (ItemStruct *)&b->_iSufPower);
	iVar1 = pIVar5->_ivalue;
	iVar2 = pIVar5->_iIvalue;
	((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = pIVar4->_iVAdd1;
	pIVar8->_ivalue = iVar1;
	pIVar8->_iIvalue = iVar2;
	piVar7 = local_70;
	do {
		piVar6 = piVar7;
		pIVar4 = b;
		iVar1 = piVar6[1];
		iVar2 = piVar6[2];
		iVar3 = piVar6[3];
		pIVar4->_iVAdd1 = *piVar6;
		pIVar4->_iVMult1 = iVar1;
		pIVar4->_iVAdd2 = iVar2;
		pIVar4->_iVMult2 = iVar3;
		piVar7 = piVar6 + 4;
		b = (ItemStruct *)&pIVar4->_iSeed;
	} while (piVar7 != aiStack16);
	iVar1 = piVar6[5];
	iVar2 = piVar6[6];
	((ItemStruct *)&pIVar4->_iSeed)->_iVAdd1 = *piVar7;
	pIVar4->_ivalue = iVar1;
	pIVar4->_iIvalue = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortWitch__Fv()
 // line 5600, offset 0x80049ab8
	/* begin block 1 */
		// Start line: 5601
		// Start offset: 0x80049AB8
		// Variables:
	// 		int j; // $a0
	// 		int k; // $s1
	// 		unsigned char sorted; // $a1
	/* end block 1 */
	// End offset: 0x80049C28
	// End Line: 5616

	/* begin block 2 */
		// Start line: 12625
	/* end block 2 */
	// End Line: 12626

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SortWitch__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 3;
	if ((&DAT_800dfbf4)[StorePlrNo * 0x438] != -1) {
		iVar3 = 4;
		iVar4 = 3;
		do {
			iVar2 = iVar3;
			if (0x13 < iVar2) break;
			iVar3 = iVar2 + 1;
			iVar4 = iVar2;
		} while ((&_witchitem)[StorePlrNo * 0x14 + iVar2 + 1]._itype != -1);
	}
	if (3 < iVar4) {
		do {
			iVar3 = 3;
			bVar1 = true;
			if (3 < iVar4) {
				iVar2 = 0x18;
				do {
					iVar2 = iVar2 * 4 + iVar3 * -5;
					iVar3 = iVar3 + 1;
					if ((&_witchitem)[StorePlrNo * 0x14 + iVar3].IDidx <
							(&(&_witchitem)[StorePlrNo * 0x14].IDidx)[iVar2 * 2]) {
						BubbleSwapItem__FP10ItemStructT0
											((ItemStruct *)(&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2),
											 (ItemStruct *)(&(&ItemStruct_800dfa84)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
						bVar1 = false;
					}
					iVar2 = iVar3 * 8;
				} while (iVar3 < iVar4);
			}
			iVar4 = iVar4 + -1;
		} while ((3 < iVar4) && (!bVar1));
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndBoyItem__Fi(int lvl /*$s4*/)
 // line 5621, offset 0x80049c48
	/* begin block 1 */
		// Start line: 5622
		// Start offset: 0x80049C48
		// Variables:
	// 		int ril[512]; // stack offset -2080
	// 		int ri; // $s3
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80049D3C
	// End Line: 5646

	/* begin block 2 */
		// Start line: 12667
	/* end block 2 */
	// End Line: 12668

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndBoyItem__Fi(int lvl)

{
	char *pcVar1;
	uchar uVar2;
	long lVar3;
	int iVar4;
	int i;
	int *piVar5;
	int v;
	int local_820 [512];
	
	if (lvl == 0) {
		lvl = 1;
	}
	v = 0;
	i = 1;
	if (ItemDataStruct_801113c4.iLoc != -1) {
		piVar5 = local_820;
		iVar4 = 0x20;
		do {
			if ((((&AllItemsList.iRnd)[iVar4] != '\0') && (uVar2 = PremiumItemOk__Fi(i), uVar2 != '\0'))
				 && ((int)(&AllItemsList.iMinMLvl)[iVar4] <= lvl)) {
				*piVar5 = i;
				piVar5 = piVar5 + 1;
				v = v + 1;
			}
			pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar4;
			i = i + 1;
			iVar4 = iVar4 + 0x20;
		} while (*pcVar1 != -1);
	}
	if (v == 0) {
		DBG_Error((char *)0x0,"source/ITEMS.cpp",(int)&DAT_0000160b);
	}
	lVar3 = ENG_random__Fl(v);
	return local_820[lVar3] + 1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ HealerItemOk__Fi(int i /*$a0*/)
 // line 5651, offset 0x80049d64
	/* begin block 1 */
		// Start line: 5652
		// Start offset: 0x80049D64
		// Variables:
	// 		unsigned char rv; // $a2
	/* end block 1 */
	// End offset: 0x80049F10
	// End Line: 5682

	/* begin block 2 */
		// Start line: 12731
	/* end block 2 */
	// End Line: 12732

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar HealerItemOk__Fi(int i)

{
	uchar uVar1;
	uchar uVar2;
	int iVar3;
	
	uVar2 = '\0';
	if ((&AllItemsList)[i].itype != '\0') {
		return '\0';
	}
	if (((&AllItemsList)[i].iMiscId == '\x15') && ((&AllItemsList)[i].iSpell == '\x02')) {
		uVar2 = '\x01';
	}
	if ((&AllItemsList)[i].iMiscId == '\x16') {
		if (((&AllItemsList)[i].iSpell == ' ') && (FePlayerNo == 0)) {
			uVar2 = '\0';
		}
		if (((&AllItemsList)[i].iMiscId == '\x16') && ((&AllItemsList)[i].iSpell == '\"')) {
			iVar3 = i << 5;
			if (FePlayerNo != 0) goto LAB_80049ea8;
			uVar2 = '\0';
		}
	}
	iVar3 = i * 0x20;
	if (FePlayerNo == 0) {
		uVar1 = (&AllItemsList)[i].iMiscId;
		if (uVar1 == '\n') {
			uVar2 = '\x01';
		}
		if (uVar1 == '\v') {
			uVar2 = '\x01';
		}
		if (uVar1 == '\f') {
			uVar2 = '\x01';
		}
		iVar3 = i << 5;
		if (uVar1 == '\r') {
			uVar2 = '\x01';
		}
	}
LAB_80049ea8:
	uVar1 = (&AllItemsList.iMiscId)[iVar3];
	if (uVar1 == '\x02') {
		uVar2 = '\x01';
	}
	if (uVar1 == '\x12') {
		uVar2 = '\x01';
	}
	if (uVar1 == '\x13') {
		uVar2 = '\x01';
	}
	if (uVar1 == '\x03') {
		uVar2 = '\0';
	}
	if (uVar1 == '\x02') {
		uVar2 = '\0';
	}
	if (uVar1 == '\x06') {
		uVar2 = '\0';
	}
	if (uVar1 == '\a') {
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndHealerItem__Fi(int lvl /*$s4*/)
 // line 5697, offset 0x80049f18
	/* begin block 1 */
		// Start line: 5698
		// Start offset: 0x80049F18
		// Variables:
	// 		int ril[512]; // stack offset -2080
	// 		int ri; // $s3
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80049FEC
	// End Line: 5747

	/* begin block 2 */
		// Start line: 12819
	/* end block 2 */
	// End Line: 12820

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndHealerItem__Fi(int lvl)

{
	char *pcVar1;
	uchar uVar2;
	int iVar3;
	int i;
	int *piVar4;
	long v;
	int local_820 [512];
	
	v = 0;
	i = 1;
	if (ItemDataStruct_801113c4.iLoc != -1) {
		piVar4 = local_820;
		iVar3 = 0x20;
		do {
			if ((((&AllItemsList.iRnd)[iVar3] != '\0') && (uVar2 = HealerItemOk__Fi(i), uVar2 != '\0')) &&
				 ((int)(&AllItemsList.iMinMLvl)[iVar3] <= lvl)) {
				*piVar4 = i;
				piVar4 = piVar4 + 1;
				v = v + 1;
			}
			pcVar1 = &ItemDataStruct_801113c4.iLoc + iVar3;
			i = i + 1;
			iVar3 = iVar3 + 0x20;
		} while (*pcVar1 != -1);
	}
	v = ENG_random__Fl(v);
	return local_820[v] + 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreatePremiumItem__Fiiii(int ii /*$s2*/, int idx /*$a1*/, int plvl /*$s0*/, int iseed /*$s3*/)
 // line 5752, offset 0x8004a014
	/* begin block 1 */
		// Start line: 5753
		// Start offset: 0x8004A014
		// Variables:
	// 		int itype; // $s1
	/* end block 1 */
	// End offset: 0x8004A0D0
	// End Line: 5766

	/* begin block 2 */
		// Start line: 13014
	/* end block 2 */
	// End Line: 13015

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreatePremiumItem__Fiiii(int ii,int idx,int plvl,int iseed)

{
	int iVar1;
	
	SetRndSeed__Fl(iseed);
	iVar1 = RndPremiumItem__Fii(plvl >> 2,plvl);
	GetItemAttrs__Fiii(ii,iVar1 + -1,plvl);
	GetItemBonus__FiiiiUc(ii,iVar1 + -1,plvl >> 1,plvl,1);
	item[ii]._iIdentified = '\x01';
	iVar1 = FePlayerNo;
	item[ii]._iSeed = iseed;
	item[ii]._iCreateInfo = (ushort)plvl | 0x800;
	item[ii]._PlrCreate = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateWitchItem__Fiiii(int ii /*$s0*/, int idx /*$a1*/, int lvl /*$s2*/, int iseed /*$s4*/)
 // line 5770, offset 0x8004a0f0
	/* begin block 1 */
		// Start line: 5771
		// Start offset: 0x8004A0F0

		/* begin block 1.1 */
			// Start line: 5771
			// Start offset: 0x8004A0F0

			/* begin block 1.1.1 */
				// Start line: 5775
				// Start offset: 0x8004A148
				// Variables:
			// 		int itype; // $s3
			// 		int iblvl; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8004A1E0
			// End Line: 5787
		/* end block 1.1 */
		// End offset: 0x8004A1E0
		// End Line: 5787
	/* end block 1 */
	// End offset: 0x8004A234
	// End Line: 5796

	/* begin block 2 */
		// Start line: 13058
	/* end block 2 */
	// End Line: 13059

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateWitchItem__Fiiii(int ii,int idx,int lvl,int iseed)

{
	int iVar1;
	long lVar2;
	int maxlvl;
	
	if (((idx == 0x19) || (idx == 0x1e)) || (idx == 0x1b)) {
		GetItemAttrs__Fiii(ii,idx,lvl);
	}
	else {
		SetRndSeed__Fl(iseed);
		iVar1 = RndWitchItem__Fi(lvl);
		GetItemAttrs__Fiii(ii,iVar1 + -1,lvl);
		maxlvl = -1;
		lVar2 = ENG_random__Fl(100);
		if (lVar2 < 6) {
			maxlvl = lvl << 1;
		}
		if (maxlvl == -1) {
			if (item[ii]._iMiscId == '\x17') {
				maxlvl = lvl << 1;
			}
			if (maxlvl == -1) goto LAB_8004a1e4;
		}
		GetItemBonus__FiiiiUc(ii,iVar1 + -1,maxlvl >> 1,maxlvl,1);
	}
LAB_8004a1e4:
	item[ii]._iIdentified = '\x01';
	iVar1 = FePlayerNo;
	item[ii]._iSeed = iseed;
	item[ii]._iCreateInfo = (ushort)lvl | 0x2000;
	item[ii]._PlrCreate = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateSmithItem__Fiiii(int ii /*$s0*/, int idx /*$a1*/, int lvl /*$s1*/, int iseed /*$s2*/)
 // line 5801, offset 0x8004a258
	/* begin block 1 */
		// Start line: 5802
		// Start offset: 0x8004A258
	/* end block 1 */
	// End offset: 0x8004A2EC
	// End Line: 5813

	/* begin block 2 */
		// Start line: 13129
	/* end block 2 */
	// End Line: 13130

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateSmithItem__Fiiii(int ii,int idx,int lvl,int iseed)

{
	int iVar1;
	
	SetRndSeed__Fl(iseed);
	iVar1 = RndSmithItem__Fi(lvl);
	GetItemAttrs__Fiii(ii,iVar1 + -1,lvl);
	item[ii]._iIdentified = '\x01';
	iVar1 = FePlayerNo;
	item[ii]._iSeed = iseed;
	item[ii]._iCreateInfo = (ushort)lvl | 0x400;
	item[ii]._PlrCreate = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateHealerItem__Fiiii(int ii /*$s0*/, int idx /*$a1*/, int lvl /*$s1*/, int iseed /*$s2*/)
 // line 5821, offset 0x8004a308
	/* begin block 1 */
		// Start line: 5822
		// Start offset: 0x8004A308

		/* begin block 1.1 */
			// Start line: 5822
			// Start offset: 0x8004A308

			/* begin block 1.1.1 */
				// Start line: 5827
				// Start offset: 0x8004A34C
			/* end block 1.1.1 */
			// End offset: 0x8004A36C
			// End Line: 5835
		/* end block 1.1 */
		// End offset: 0x8004A36C
		// End Line: 5835
	/* end block 1 */
	// End offset: 0x8004A3C0
	// End Line: 5844

	/* begin block 2 */
		// Start line: 13174
	/* end block 2 */
	// End Line: 13175

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateHealerItem__Fiiii(int ii,int idx,int lvl,int iseed)

{
	int iVar1;
	
	if (((idx != 0x18) && (idx != 0x1d)) && (idx != 0x22)) {
		SetRndSeed__Fl(iseed);
		idx = RndHealerItem__Fi(lvl);
		idx = idx + -1;
	}
	GetItemAttrs__Fiii(ii,idx,lvl);
	item[ii]._iIdentified = '\x01';
	iVar1 = FePlayerNo;
	item[ii]._iSeed = iseed;
	item[ii]._iCreateInfo = (ushort)lvl | 0x4000;
	item[ii]._PlrCreate = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateBoyItem__Fiiii(int ii /*$s2*/, int idx /*$a1*/, int lvl /*$s0*/, int iseed /*$s3*/)
 // line 5848, offset 0x8004a3dc
	/* begin block 1 */
		// Start line: 5849
		// Start offset: 0x8004A3DC
		// Variables:
	// 		int itype; // $s1
	/* end block 1 */
	// End offset: 0x8004A494
	// End Line: 5863

	/* begin block 2 */
		// Start line: 13233
	/* end block 2 */
	// End Line: 13234

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateBoyItem__Fiiii(int ii,int idx,int lvl,int iseed)

{
	int iVar1;
	
	SetRndSeed__Fl(iseed);
	iVar1 = RndBoyItem__Fi(lvl);
	GetItemAttrs__Fiii(ii,iVar1 + -1,lvl);
	GetItemBonus__FiiiiUc(ii,iVar1 + -1,lvl,lvl << 1,1);
	item[ii]._iIdentified = '\x01';
	iVar1 = FePlayerNo;
	item[ii]._iSeed = iseed;
	item[ii]._iCreateInfo = (ushort)lvl | 0x1000;
	item[ii]._PlrCreate = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateTownItem__FiiUsii(int ii /*$a0*/, int idx /*$a1*/, unsigned short icreateinfo /*$a2*/, int iseed /*$a3*/, int ivalue /*stack 16*/)
 // line 5867, offset 0x8004a4b4
	/* begin block 1 */
		// Start line: 5868
		// Start offset: 0x8004A4B4
	/* end block 1 */
	// End offset: 0x8004A530
	// End Line: 5879

	/* begin block 2 */
		// Start line: 13279
	/* end block 2 */
	// End Line: 13280

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateTownItem__FiiUsii(int ii,int idx,ushort icreateinfo,int iseed,int ivalue)

{
	if ((icreateinfo & 0x800) == 0) {
		if ((icreateinfo & 0x1000) == 0) {
			if ((icreateinfo & 0x2000) == 0) {
				if ((icreateinfo & 0x4000) == 0) {
					if ((icreateinfo & 0x400) != 0) {
						RecreateSmithItem__Fiiii(ii,idx,(uint)icreateinfo & 0x3f,iseed);
					}
				}
				else {
					RecreateHealerItem__Fiiii(ii,idx,(uint)icreateinfo & 0x3f,iseed);
				}
			}
			else {
				RecreateWitchItem__Fiiii(ii,idx,(uint)icreateinfo & 0x3f,iseed);
			}
		}
		else {
			RecreateBoyItem__Fiiii(ii,idx,(uint)icreateinfo & 0x3f,iseed);
		}
	}
	else {
		RecreatePremiumItem__Fiiii(ii,idx,(uint)icreateinfo & 0x3f,iseed);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnSmith__Fi(int lvl /*$s2*/)
 // line 5883, offset 0x8004a540
	/* begin block 1 */
		// Start line: 5884
		// Start offset: 0x8004A540
		// Variables:
	// 		int i; // $s0
	// 		int nsi; // $s3
	// 		struct ItemStruct holditem; // stack offset -152
	/* end block 1 */
	// End offset: 0x8004A844
	// End Line: 5919

	/* begin block 2 */
		// Start line: 13311
	/* end block 2 */
	// End Line: 13312

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnSmith__Fi(int lvl)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	long lVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	ItemStruct *pIVar10;
	int *piVar11;
	int *piVar12;
	int local_98 [24];
	int aiStack56 [6];
	
	pIVar1 = item;
	piVar12 = local_98;
	do {
		piVar11 = piVar12;
		pIVar10 = pIVar1;
		iVar5 = pIVar10->_iVMult1;
		iVar6 = pIVar10->_iVAdd2;
		iVar8 = pIVar10->_iVMult2;
		*piVar11 = pIVar10->_iVAdd1;
		piVar11[1] = iVar5;
		piVar11[2] = iVar6;
		piVar11[3] = iVar8;
		pIVar1 = (ItemStruct *)&pIVar10->_iSeed;
		piVar12 = piVar11 + 4;
	} while ((ItemStruct *)&pIVar10->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar5 = pIVar10->_ivalue;
	iVar6 = pIVar10->_iIvalue;
	piVar11[4] = item[0]._96_4_;
	piVar11[5] = iVar5;
	piVar11[6] = iVar6;
	lVar3 = ENG_random__Fl(10);
	iVar6 = lVar3 + 10;
	iVar5 = 0;
	if (0 < iVar6) {
		iVar8 = 0;
		do {
			do {
				item[0]._iSeed = GetRndSeed__Fv();
				SetRndSeed__Fl(item[0]._iSeed);
				iVar4 = RndSmithItem__Fi(lvl);
				GetItemAttrs__Fiii(0,iVar4 + -1,lvl);
			} while (140000 < item[0]._iIvalue);
			piVar12 = (int *)((int)&(&_smithitem)[StorePlrNo * 0x14]._iVAdd1 + iVar8);
			pIVar1 = item;
			do {
				pIVar10 = pIVar1;
				piVar11 = piVar12;
				iVar4 = pIVar10->_iVMult1;
				iVar7 = pIVar10->_iVAdd2;
				iVar9 = pIVar10->_iVMult2;
				*piVar11 = pIVar10->_iVAdd1;
				piVar11[1] = iVar4;
				piVar11[2] = iVar7;
				piVar11[3] = iVar9;
				piVar12 = piVar11 + 4;
				pIVar1 = (ItemStruct *)&pIVar10->_iSeed;
			} while ((ItemStruct *)&pIVar10->_iSeed != (ItemStruct *)&item[0]._iSufPower);
			iVar4 = pIVar10->_ivalue;
			iVar7 = pIVar10->_iIvalue;
			piVar11[4] = item[0]._96_4_;
			piVar11[5] = iVar4;
			piVar11[6] = iVar7;
			iVar4 = StorePlrNo;
			(&(&_smithitem)[StorePlrNo * 0x14]._iIdentified)[iVar8] = '\x01';
			iVar7 = StorePlrNo;
			*(ushort *)((int)&(&_smithitem)[iVar4 * 0x14]._iCreateInfo + iVar8) = (ushort)lvl | 0x400;
			uVar2 = StoreStatOk__FP10ItemStruct
												((ItemStruct *)((int)&(&_smithitem)[iVar7 * 0x14]._iVAdd1 + iVar8));
			(&(&_smithitem)[StorePlrNo * 0x14]._iStatFlag)[iVar8] = uVar2;
			iVar5 = iVar5 + 1;
			(&(&_smithitem)[StorePlrNo * 0x14]._PlrCreate)[iVar8] = (char)FePlayerNo;
			iVar8 = iVar8 + 0x6c;
		} while (iVar5 < iVar6);
	}
	if (iVar6 < 0x14) {
		iVar5 = iVar6 * 0x6c + StorePlrNo * 0x870;
		do {
			*(undefined2 *)((int)&_smithitem._itype + iVar5) = 0xffff;
			iVar6 = iVar6 + 1;
			iVar5 = iVar5 + 0x6c;
		} while (iVar6 < 0x14);
	}
	SortSmith__Fv();
	piVar12 = local_98;
	pIVar1 = item;
	do {
		pIVar10 = pIVar1;
		piVar11 = piVar12;
		iVar5 = piVar11[1];
		iVar6 = piVar11[2];
		iVar8 = piVar11[3];
		pIVar10->_iVAdd1 = *piVar11;
		pIVar10->_iVMult1 = iVar5;
		pIVar10->_iVAdd2 = iVar6;
		pIVar10->_iVMult2 = iVar8;
		piVar12 = piVar11 + 4;
		pIVar1 = (ItemStruct *)&pIVar10->_iSeed;
	} while (piVar12 != aiStack56);
	iVar5 = piVar11[5];
	iVar6 = piVar11[6];
	((ItemStruct *)&pIVar10->_iSeed)->_iVAdd1 = *piVar12;
	pIVar10->_ivalue = iVar5;
	pIVar10->_iIvalue = iVar6;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnWitch__Fi(int lvl /*$s4*/)
 // line 5924, offset 0x8004a86c
	/* begin block 1 */
		// Start line: 5925
		// Start offset: 0x8004A86C
		// Variables:
	// 		int itype; // $s1
	// 		int iblvl; // $s0
	// 		int i; // $s2
	// 		int nsi; // $s5
	// 		struct ItemStruct holditem; // stack offset -152
	/* end block 1 */
	// End offset: 0x8004AE2C
	// End Line: 5990

	/* begin block 2 */
		// Start line: 13403
	/* end block 2 */
	// End Line: 13404

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnWitch__Fi(int lvl)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	long lVar3;
	int iVar4;
	int ii;
	int iVar5;
	int iVar6;
	int iVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int *piVar10;
	int *piVar11;
	ItemStruct *pIVar12;
	int maxlvl;
	ushort uVar13;
	int local_98 [24];
	int aiStack56 [4];
	
	pIVar1 = item;
	piVar11 = local_98;
	do {
		piVar10 = piVar11;
		pIVar8 = pIVar1;
		ii = pIVar8->_iVMult1;
		iVar5 = pIVar8->_iVAdd2;
		iVar6 = pIVar8->_iVMult2;
		*piVar10 = pIVar8->_iVAdd1;
		piVar10[1] = ii;
		piVar10[2] = iVar5;
		piVar10[3] = iVar6;
		pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
		piVar11 = piVar10 + 4;
	} while ((ItemStruct *)&pIVar8->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	ii = pIVar8->_ivalue;
	iVar5 = pIVar8->_iIvalue;
	piVar10[4] = item[0]._96_4_;
	piVar10[5] = ii;
	piVar10[6] = iVar5;
	GetItemAttrs__Fiii(0,0x19,1);
	pIVar1 = &_witchitem + StorePlrNo * 0x14;
	pIVar8 = item;
	do {
		pIVar12 = pIVar8;
		pIVar9 = pIVar1;
		ii = pIVar12->_iVMult1;
		iVar5 = pIVar12->_iVAdd2;
		iVar6 = pIVar12->_iVMult2;
		pIVar9->_iVAdd1 = pIVar12->_iVAdd1;
		pIVar9->_iVMult1 = ii;
		pIVar9->_iVAdd2 = iVar5;
		pIVar9->_iVMult2 = iVar6;
		pIVar1 = (ItemStruct *)&pIVar9->_iSeed;
		pIVar8 = (ItemStruct *)&pIVar12->_iSeed;
	} while ((ItemStruct *)&pIVar12->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	ii = pIVar12->_ivalue;
	iVar5 = pIVar12->_iIvalue;
	((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar9->_ivalue = ii;
	pIVar9->_iIvalue = iVar5;
	ii = StorePlrNo;
	uVar13 = (ushort)lvl;
	(&_witchitem)[StorePlrNo * 0x14]._iCreateInfo = uVar13;
	(&_witchitem)[ii * 0x14]._iStatFlag = '\x01';
	GetItemAttrs__Fiii(0,0x1e,1);
	pIVar1 = &ItemStruct_800dfa84 + StorePlrNo * 0x14;
	pIVar8 = item;
	do {
		pIVar12 = pIVar8;
		pIVar9 = pIVar1;
		ii = pIVar12->_iVMult1;
		iVar5 = pIVar12->_iVAdd2;
		iVar6 = pIVar12->_iVMult2;
		pIVar9->_iVAdd1 = pIVar12->_iVAdd1;
		pIVar9->_iVMult1 = ii;
		pIVar9->_iVAdd2 = iVar5;
		pIVar9->_iVMult2 = iVar6;
		pIVar1 = (ItemStruct *)&pIVar9->_iSeed;
		pIVar8 = (ItemStruct *)&pIVar12->_iSeed;
	} while ((ItemStruct *)&pIVar12->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	ii = pIVar12->_ivalue;
	iVar5 = pIVar12->_iIvalue;
	((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar9->_ivalue = ii;
	pIVar9->_iIvalue = iVar5;
	ii = StorePlrNo;
	(&ItemStruct_800dfa84)[StorePlrNo * 0x14]._iCreateInfo = uVar13;
	(&ItemStruct_800dfa84)[ii * 0x14]._iStatFlag = '\x01';
	GetItemAttrs__Fiii(0,0x1b,1);
	piVar11 = &DAT_800dfaf0 + StorePlrNo * 0x21c;
	pIVar1 = item;
	do {
		pIVar8 = pIVar1;
		piVar10 = piVar11;
		ii = pIVar8->_iVMult1;
		iVar5 = pIVar8->_iVAdd2;
		iVar6 = pIVar8->_iVMult2;
		*piVar10 = pIVar8->_iVAdd1;
		piVar10[1] = ii;
		piVar10[2] = iVar5;
		piVar10[3] = iVar6;
		piVar11 = piVar10 + 4;
		pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
	} while ((ItemStruct *)&pIVar8->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	ii = pIVar8->_ivalue;
	iVar5 = pIVar8->_iIvalue;
	piVar10[4] = item[0]._96_4_;
	piVar10[5] = ii;
	piVar10[6] = iVar5;
	ii = StorePlrNo * 0x870;
	(&DAT_800dfb14)[StorePlrNo * 0x438] = uVar13;
	(&DAT_800dfb56)[ii] = 1;
	ii = 3;
	lVar3 = ENG_random__Fl(8);
	iVar5 = lVar3 + 10;
	if (3 < iVar5) {
		iVar6 = 0x144;
		do {
			do {
				maxlvl = -1;
				item[0]._iSeed = GetRndSeed__Fv();
				SetRndSeed__Fl(item[0]._iSeed);
				iVar4 = RndWitchItem__Fi(lvl);
				GetItemAttrs__Fiii(0,iVar4 + -1,lvl);
				lVar3 = ENG_random__Fl(100);
				if (lVar3 < 6) {
					maxlvl = lvl << 1;
				}
				if (maxlvl == -1) {
					if (item[0]._iMiscId == '\x17') {
						maxlvl = lvl << 1;
					}
					if (maxlvl != -1) goto LAB_8004abd0;
				}
				else {
LAB_8004abd0:
					GetItemBonus__FiiiiUc(0,iVar4 + -1,maxlvl >> 1,maxlvl,1);
				}
			} while (140000 < item[0]._iIvalue);
			piVar11 = (int *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar6);
			pIVar1 = item;
			do {
				pIVar8 = pIVar1;
				piVar10 = piVar11;
				iVar4 = pIVar8->_iVMult1;
				maxlvl = pIVar8->_iVAdd2;
				iVar7 = pIVar8->_iVMult2;
				*piVar10 = pIVar8->_iVAdd1;
				piVar10[1] = iVar4;
				piVar10[2] = maxlvl;
				piVar10[3] = iVar7;
				piVar11 = piVar10 + 4;
				pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
			} while ((ItemStruct *)&pIVar8->_iSeed != (ItemStruct *)&item[0]._iSufPower);
			iVar4 = pIVar8->_ivalue;
			maxlvl = pIVar8->_iIvalue;
			piVar10[4] = item[0]._96_4_;
			piVar10[5] = iVar4;
			piVar10[6] = maxlvl;
			iVar4 = StorePlrNo;
			(&(&_witchitem)[StorePlrNo * 0x14]._PlrCreate)[iVar6] = (char)FePlayerNo;
			maxlvl = StorePlrNo;
			*(ushort *)((int)&(&_witchitem)[iVar4 * 0x14]._iCreateInfo + iVar6) = uVar13 | 0x2000;
			(&(&_witchitem)[maxlvl * 0x14]._iIdentified)[iVar6] = '\x01';
			WitchBookLevel__Fi(ii);
			uVar2 = StoreStatOk__FP10ItemStruct
												((ItemStruct *)((int)&(&_witchitem)[StorePlrNo * 0x14]._iVAdd1 + iVar6));
			ii = ii + 1;
			(&(&_witchitem)[StorePlrNo * 0x14]._iStatFlag)[iVar6] = uVar2;
			iVar6 = iVar6 + 0x6c;
		} while (ii < iVar5);
	}
	if (iVar5 < 0x14) {
		ii = iVar5 * 0x6c + StorePlrNo * 0x870;
		do {
			*(undefined2 *)((int)&_witchitem._itype + ii) = 0xffff;
			iVar5 = iVar5 + 1;
			ii = ii + 0x6c;
		} while (iVar5 < 0x14);
	}
	SortWitch__Fv();
	piVar11 = local_98;
	pIVar1 = item;
	do {
		pIVar8 = pIVar1;
		piVar10 = piVar11;
		ii = piVar10[1];
		iVar5 = piVar10[2];
		iVar6 = piVar10[3];
		pIVar8->_iVAdd1 = *piVar10;
		pIVar8->_iVMult1 = ii;
		pIVar8->_iVAdd2 = iVar5;
		pIVar8->_iVMult2 = iVar6;
		piVar11 = piVar10 + 4;
		pIVar1 = (ItemStruct *)&pIVar8->_iSeed;
	} while (piVar11 != aiStack56);
	ii = piVar10[5];
	iVar5 = piVar10[6];
	((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = *piVar11;
	pIVar8->_ivalue = ii;
	pIVar8->_iIvalue = iVar5;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnHealer__Fi(int lvl /*$s3*/)
 // line 5993, offset 0x8004ae5c
	/* begin block 1 */
		// Start line: 5994
		// Start offset: 0x8004AE5C
		// Variables:
	// 		int i; // $a0
	// 		int nsi; // $s1
	// 		int srnd; // $s0
	// 		struct ItemStruct holditem; // stack offset -144
	/* end block 1 */
	// End offset: 0x8004B3D0
	// End Line: 6044

	/* begin block 2 */
		// Start line: 13567
	/* end block 2 */
	// End Line: 13568

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnHealer__Fi(int lvl)

{
	uchar uVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int *piVar10;
	int *piVar11;
	ItemStruct *pIVar12;
	ItemStruct *pIVar13;
	ushort uVar14;
	int local_90 [24];
	int aiStack48 [4];
	
	pIVar13 = item;
	piVar11 = local_90;
	do {
		piVar10 = piVar11;
		pIVar8 = pIVar13;
		iVar3 = pIVar8->_iVMult1;
		iVar4 = pIVar8->_iVAdd2;
		iVar6 = pIVar8->_iVMult2;
		*piVar10 = pIVar8->_iVAdd1;
		piVar10[1] = iVar3;
		piVar10[2] = iVar4;
		piVar10[3] = iVar6;
		pIVar13 = (ItemStruct *)&pIVar8->_iSeed;
		piVar11 = piVar10 + 4;
	} while ((ItemStruct *)&pIVar8->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar8->_ivalue;
	iVar4 = pIVar8->_iIvalue;
	piVar10[4] = item[0]._96_4_;
	piVar10[5] = iVar3;
	piVar10[6] = iVar4;
	GetItemAttrs__Fiii(0,0x18,1);
	pIVar13 = &_healitem + StorePlrNo * 0x14;
	pIVar8 = item;
	do {
		pIVar12 = pIVar8;
		pIVar9 = pIVar13;
		iVar3 = pIVar12->_iVMult1;
		iVar4 = pIVar12->_iVAdd2;
		iVar6 = pIVar12->_iVMult2;
		pIVar9->_iVAdd1 = pIVar12->_iVAdd1;
		pIVar9->_iVMult1 = iVar3;
		pIVar9->_iVAdd2 = iVar4;
		pIVar9->_iVMult2 = iVar6;
		pIVar13 = (ItemStruct *)&pIVar9->_iSeed;
		pIVar8 = (ItemStruct *)&pIVar12->_iSeed;
	} while ((ItemStruct *)&pIVar12->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar12->_ivalue;
	iVar4 = pIVar12->_iIvalue;
	((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar9->_ivalue = iVar3;
	pIVar9->_iIvalue = iVar4;
	iVar3 = StorePlrNo;
	uVar14 = (ushort)lvl;
	(&_healitem)[StorePlrNo * 0x14]._iCreateInfo = uVar14;
	(&_healitem)[iVar3 * 0x14]._iStatFlag = '\x01';
	GetItemAttrs__Fiii(0,0x1d,1);
	pIVar13 = &ItemStruct_800e0c3c + StorePlrNo * 0x14;
	pIVar8 = item;
	do {
		pIVar12 = pIVar8;
		pIVar9 = pIVar13;
		iVar3 = pIVar12->_iVMult1;
		iVar4 = pIVar12->_iVAdd2;
		iVar6 = pIVar12->_iVMult2;
		pIVar9->_iVAdd1 = pIVar12->_iVAdd1;
		pIVar9->_iVMult1 = iVar3;
		pIVar9->_iVAdd2 = iVar4;
		pIVar9->_iVMult2 = iVar6;
		pIVar13 = (ItemStruct *)&pIVar9->_iSeed;
		pIVar8 = (ItemStruct *)&pIVar12->_iSeed;
	} while ((ItemStruct *)&pIVar12->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar12->_ivalue;
	iVar4 = pIVar12->_iIvalue;
	((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = item[0]._96_4_;
	pIVar9->_ivalue = iVar3;
	pIVar9->_iIvalue = iVar4;
	iVar4 = StorePlrNo;
	(&ItemStruct_800e0c3c)[StorePlrNo * 0x14]._iStatFlag = '\x01';
	iVar3 = FePlayerNo;
	(&ItemStruct_800e0c3c)[iVar4 * 0x14]._iCreateInfo = uVar14;
	if (iVar3 == 0) {
		iVar3 = 2;
	}
	else {
		GetItemAttrs__Fiii(0,0x22,1);
		piVar11 = &DAT_800e0ca8 + StorePlrNo * 0x21c;
		pIVar13 = item;
		do {
			pIVar8 = pIVar13;
			piVar10 = piVar11;
			iVar3 = pIVar8->_iVMult1;
			iVar4 = pIVar8->_iVAdd2;
			iVar6 = pIVar8->_iVMult2;
			*piVar10 = pIVar8->_iVAdd1;
			piVar10[1] = iVar3;
			piVar10[2] = iVar4;
			piVar10[3] = iVar6;
			piVar11 = piVar10 + 4;
			pIVar13 = (ItemStruct *)&pIVar8->_iSeed;
		} while ((ItemStruct *)&pIVar8->_iSeed != (ItemStruct *)&item[0]._iSufPower);
		iVar3 = pIVar8->_ivalue;
		iVar4 = pIVar8->_iIvalue;
		piVar10[4] = item[0]._96_4_;
		piVar10[5] = iVar3;
		piVar10[6] = iVar4;
		iVar3 = StorePlrNo * 0x870;
		(&DAT_800e0ccc)[StorePlrNo * 0x438] = uVar14;
		(&DAT_800e0d0e)[iVar3] = 1;
		iVar3 = 3;
	}
	lVar2 = ENG_random__Fl(8);
	iVar4 = lVar2 + 10;
	if (iVar3 < iVar4) {
		pIVar13 = &_healitem + iVar3;
		iVar3 = iVar3 * 0x6c;
		do {
			item[0]._iSeed = GetRndSeed__Fv();
			SetRndSeed__Fl(item[0]._iSeed);
			iVar6 = RndHealerItem__Fi(lvl);
			GetItemAttrs__Fiii(0,iVar6 + -1,lvl);
			piVar11 = (int *)((int)&(&_healitem)[StorePlrNo * 0x14]._iVAdd1 + iVar3);
			pIVar8 = item;
			do {
				pIVar9 = pIVar8;
				piVar10 = piVar11;
				iVar6 = pIVar9->_iVMult1;
				iVar5 = pIVar9->_iVAdd2;
				iVar7 = pIVar9->_iVMult2;
				*piVar10 = pIVar9->_iVAdd1;
				piVar10[1] = iVar6;
				piVar10[2] = iVar5;
				piVar10[3] = iVar7;
				piVar11 = piVar10 + 4;
				pIVar8 = (ItemStruct *)&pIVar9->_iSeed;
			} while ((ItemStruct *)&pIVar9->_iSeed != (ItemStruct *)&item[0]._iSufPower);
			iVar6 = pIVar9->_ivalue;
			iVar5 = pIVar9->_iIvalue;
			piVar10[4] = item[0]._96_4_;
			piVar10[5] = iVar6;
			piVar10[6] = iVar5;
			iVar6 = StorePlrNo;
			(&(&_healitem)[StorePlrNo * 0x14]._PlrCreate)[iVar3] = (char)FePlayerNo;
			iVar5 = StorePlrNo;
			*(ushort *)((int)&(&_healitem)[iVar6 * 0x14]._iCreateInfo + iVar3) = uVar14 | 0x4000;
			(&(&_healitem)[iVar5 * 0x14]._iIdentified)[iVar3] = '\x01';
			uVar1 = StoreStatOk__FP10ItemStruct(pIVar13 + StorePlrNo * 0x14);
			iVar6 = iVar3 + 0x6c;
			(&(&_healitem)[StorePlrNo * 0x14]._iStatFlag)[iVar3] = uVar1;
			pIVar13 = pIVar13 + 1;
			iVar3 = iVar6;
		} while (iVar6 < iVar4 * 0x6c);
	}
	if (iVar4 < 0x14) {
		iVar3 = iVar4 * 0x6c + StorePlrNo * 0x870;
		do {
			*(undefined2 *)((int)&_healitem._itype + iVar3) = 0xffff;
			iVar4 = iVar4 + 1;
			iVar3 = iVar3 + 0x6c;
		} while (iVar4 < 0x14);
	}
	SortHealer__Fv();
	piVar11 = local_90;
	pIVar13 = item;
	do {
		pIVar8 = pIVar13;
		piVar10 = piVar11;
		iVar3 = piVar10[1];
		iVar4 = piVar10[2];
		iVar6 = piVar10[3];
		pIVar8->_iVAdd1 = *piVar10;
		pIVar8->_iVMult1 = iVar3;
		pIVar8->_iVAdd2 = iVar4;
		pIVar8->_iVMult2 = iVar6;
		piVar11 = piVar10 + 4;
		pIVar13 = (ItemStruct *)&pIVar8->_iSeed;
	} while (piVar11 != aiStack48);
	iVar3 = piVar10[5];
	iVar4 = piVar10[6];
	((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = *piVar11;
	pIVar8->_ivalue = iVar3;
	pIVar8->_iIvalue = iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnBoy__Fi(int lvl /*$s1*/)
 // line 6047, offset 0x8004b3fc
	/* begin block 1 */
		// Start line: 6048
		// Start offset: 0x8004B3FC
		// Variables:
	// 		int itype; // $s0
	// 		struct ItemStruct holditem; // stack offset -136
	/* end block 1 */
	// End offset: 0x8004B6E0
	// End Line: 6082

	/* begin block 2 */
		// Start line: 13696
	/* end block 2 */
	// End Line: 13697

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnBoy__Fi(int lvl)

{
	ItemStruct *pIVar1;
	uchar uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	int *piVar8;
	int *piVar9;
	ItemStruct *pIVar10;
	int local_88 [24];
	int aiStack40 [4];
	
	pIVar1 = item;
	piVar9 = local_88;
	do {
		piVar8 = piVar9;
		pIVar6 = pIVar1;
		iVar3 = pIVar6->_iVMult1;
		iVar4 = pIVar6->_iVAdd2;
		iVar5 = pIVar6->_iVMult2;
		*piVar8 = pIVar6->_iVAdd1;
		piVar8[1] = iVar3;
		piVar8[2] = iVar4;
		piVar8[3] = iVar5;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
		piVar9 = piVar8 + 4;
	} while ((ItemStruct *)&pIVar6->_iSeed != (ItemStruct *)&item[0]._iSufPower);
	iVar3 = pIVar6->_ivalue;
	iVar4 = pIVar6->_iIvalue;
	piVar8[4] = item[0]._96_4_;
	piVar8[5] = iVar3;
	piVar8[6] = iVar4;
	if ((_boylevel[StorePlrNo] < lvl >> 1) || (_boyitem[StorePlrNo]._itype == -1)) {
		do {
			item[0]._iSeed = GetRndSeed__Fv();
			SetRndSeed__Fl(item[0]._iSeed);
			iVar3 = RndBoyItem__Fi(lvl);
			GetItemAttrs__Fiii(0,iVar3 + -1,lvl);
			GetItemBonus__FiiiiUc(0,iVar3 + -1,lvl,lvl << 1,1);
		} while (90000 < item[0]._iIvalue);
		pIVar1 = _boyitem + StorePlrNo;
		pIVar6 = item;
		do {
			pIVar10 = pIVar6;
			pIVar7 = pIVar1;
			iVar3 = pIVar10->_iVMult1;
			iVar4 = pIVar10->_iVAdd2;
			iVar5 = pIVar10->_iVMult2;
			pIVar7->_iVAdd1 = pIVar10->_iVAdd1;
			pIVar7->_iVMult1 = iVar3;
			pIVar7->_iVAdd2 = iVar4;
			pIVar7->_iVMult2 = iVar5;
			pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
			pIVar6 = (ItemStruct *)&pIVar10->_iSeed;
		} while ((ItemStruct *)&pIVar10->_iSeed != (ItemStruct *)&item[0]._iSufPower);
		iVar3 = pIVar10->_ivalue;
		iVar4 = pIVar10->_iIvalue;
		((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = item[0]._96_4_;
		pIVar7->_ivalue = iVar3;
		pIVar7->_iIvalue = iVar4;
		iVar3 = StorePlrNo;
		_boyitem[StorePlrNo]._PlrCreate = (char)FePlayerNo;
		iVar4 = StorePlrNo;
		_boyitem[iVar3]._iCreateInfo = (ushort)lvl | 0x1000;
		_boyitem[iVar4]._iIdentified = '\x01';
		uVar2 = StoreStatOk__FP10ItemStruct(_boyitem + StorePlrNo);
		_boyitem[StorePlrNo]._iStatFlag = uVar2;
		_boylevel[StorePlrNo] = lvl >> 1;
	}
	piVar9 = local_88;
	pIVar1 = item;
	do {
		pIVar6 = pIVar1;
		piVar8 = piVar9;
		iVar3 = piVar8[1];
		iVar4 = piVar8[2];
		iVar5 = piVar8[3];
		pIVar6->_iVAdd1 = *piVar8;
		pIVar6->_iVMult1 = iVar3;
		pIVar6->_iVAdd2 = iVar4;
		pIVar6->_iVMult2 = iVar5;
		piVar9 = piVar8 + 4;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
	} while (piVar9 != aiStack40);
	iVar3 = piVar8[5];
	iVar4 = piVar8[6];
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = *piVar9;
	pIVar6->_ivalue = iVar3;
	pIVar6->_iIvalue = iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortSmith__Fv()
 // line 6085, offset 0x8004b700
	/* begin block 1 */
		// Start line: 6086
		// Start offset: 0x8004B700
		// Variables:
	// 		int j; // $a0
	// 		int k; // $s1
	// 		unsigned char sorted; // $a1
	/* end block 1 */
	// End offset: 0x8004B864
	// End Line: 6103

	/* begin block 2 */
		// Start line: 13790
	/* end block 2 */
	// End Line: 13791

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SortSmith__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	if ((&ItemStruct_800de494)[StorePlrNo * 0x14]._itype != -1) {
		iVar3 = 1;
		iVar4 = 0;
		do {
			iVar2 = iVar3;
			if (0x13 < iVar2) break;
			iVar3 = iVar2 + 1;
			iVar4 = iVar2;
		} while ((&_smithitem)[StorePlrNo * 0x14 + iVar2 + 1]._itype != -1);
	}
	if (0 < iVar4) {
		do {
			bVar1 = true;
			iVar3 = 0;
			if (0 < iVar4) {
				iVar2 = 0;
				do {
					iVar2 = iVar2 * 4 + iVar3 * -5;
					iVar3 = iVar3 + 1;
					if ((&_smithitem)[StorePlrNo * 0x14 + iVar3].IDidx <
							(&(&_smithitem)[StorePlrNo * 0x14].IDidx)[iVar2 * 2]) {
						BubbleSwapItem__FP10ItemStructT0
											((ItemStruct *)(&(&_smithitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2),
											 (ItemStruct *)(&(&ItemStruct_800de494)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
						bVar1 = false;
					}
					iVar2 = iVar3 * 8;
				} while (iVar3 < iVar4);
			}
			iVar4 = iVar4 + -1;
		} while ((0 < iVar4) && (!bVar1));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortHealer__Fv()
 // line 6107, offset 0x8004b884
	/* begin block 1 */
		// Start line: 6108
		// Start offset: 0x8004B884
		// Variables:
	// 		int j; // $a0
	// 		int k; // $s1
	// 		unsigned char sorted; // $a1
	/* end block 1 */
	// End offset: 0x8004B9F4
	// End Line: 6122

	/* begin block 2 */
		// Start line: 13838
	/* end block 2 */
	// End Line: 13839

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SortHealer__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 2;
	if ((&DAT_800e0d40)[StorePlrNo * 0x438] != -1) {
		iVar3 = 3;
		iVar4 = 2;
		do {
			iVar2 = iVar3;
			if (0x13 < iVar2) break;
			iVar3 = iVar2 + 1;
			iVar4 = iVar2;
		} while ((&_healitem)[StorePlrNo * 0x14 + iVar2 + 1]._itype != -1);
	}
	if (2 < iVar4) {
		do {
			iVar3 = 2;
			bVar1 = true;
			if (2 < iVar4) {
				iVar2 = 0x10;
				do {
					iVar2 = iVar2 * 4 + iVar3 * -5;
					iVar3 = iVar3 + 1;
					if ((&_healitem)[StorePlrNo * 0x14 + iVar3].IDidx <
							(&(&_healitem)[StorePlrNo * 0x14].IDidx)[iVar2 * 2]) {
						BubbleSwapItem__FP10ItemStructT0
											((ItemStruct *)(&(&_healitem)[StorePlrNo * 0x14]._iVAdd1 + iVar2),
											 (ItemStruct *)(&(&ItemStruct_800e0c3c)[StorePlrNo * 0x14]._iVAdd1 + iVar2));
						bVar1 = false;
					}
					iVar2 = iVar3 * 8;
				} while (iVar3 < iVar4);
			}
			iVar4 = iVar4 + -1;
		} while ((2 < iVar4) && (!bVar1));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecreateItem__FiiUsiii(int ii /*$s1*/, int idx /*$a1*/, unsigned short icreateinfo /*$s3*/, int iseed /*$s2*/, int ivalue /*stack 16*/, int PlrCreate /*stack 20*/)
 // line 6127, offset 0x8004ba14
	/* begin block 1 */
		// Start line: 6128
		// Start offset: 0x8004BA14
		// Variables:
	// 		int OldFePlayerNo; // $s5
	// 		int uper; // $v1
	// 		unsigned char onlygood; // $t1
	// 		unsigned char uavail; // $t2
	// 		unsigned char pregen; // $t3
	/* end block 1 */
	// End offset: 0x8004BC40
	// End Line: 6222

	/* begin block 2 */
		// Start line: 13878
	/* end block 2 */
	// End Line: 13879

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecreateItem__FiiUsiii(int ii,int idx,ushort icreateinfo,int iseed,int ivalue,int PlrCreate)

{
	int iVar1;
	int iVar2;
	uint uper;
	
	iVar1 = FePlayerNo;
	if (PlrCreate != -1) {
		FePlayerNo = PlrCreate;
	}
	if (idx == 0) {
		SetPlrHandItem__FP10ItemStructi(item + ii,0);
		item[ii]._ivalue = ivalue;
		iVar2 = item[ii]._ivalue;
		item[ii]._iCreateInfo = icreateinfo;
		item[ii]._iSeed = iseed;
		if (iVar2 < 0x9c4) {
			if (ivalue < 0x3e9) {
				item[ii]._iCurs = '\x04';
			}
			else {
				item[ii]._iCurs = '\x05';
			}
		}
		else {
			item[ii]._iCurs = '\x06';
		}
	}
	else {
		if (icreateinfo == 0) {
			SetPlrHandItem__FP10ItemStructi(item + ii,idx);
			SetPlrHandSeed__FP10ItemStructi(item + ii,iseed);
		}
		else {
			if ((icreateinfo & 0x7c00) == 0) {
				if ((icreateinfo & 0x180) == 0x180) {
					SetupAllUseful__Fiii(ii,iseed,(uint)icreateinfo & 0x3f);
				}
				else {
					uper = (uint)((icreateinfo & 0x100) != 0);
					if ((icreateinfo & 0x80) != 0) {
						uper = 0xf;
					}
					SetupAllItems__FiiiiiUcUcUc
										(ii,idx,iseed,(uint)icreateinfo & 0x3f,uper,(uint)((icreateinfo & 0x40) != 0),
										 (uint)((icreateinfo & 0x200) != 0),(uint)((icreateinfo & 0x8000) != 0));
				}
			}
			else {
				RecreateTownItem__FiiUsii(ii,idx,icreateinfo,iseed,ivalue);
			}
		}
	}
	item[ii]._PlrCreate = (char)FePlayerNo;
	FePlayerNo = iVar1;
	return;
}





