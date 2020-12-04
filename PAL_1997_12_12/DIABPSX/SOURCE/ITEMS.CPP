#include "THISDUST.H"
#include "ITEMS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitItemGFX__Fv()
 // line 508, offset 0x8003b124
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x8003B124
	/* end block 1 */
	// End offset: 0x8003B140
	// End Line: 520

	/* begin block 2 */
		// Start line: 1016
	/* end block 2 */
	// End Line: 1017

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitItemGFX__Fv(void)

{
	memset(UniqueItemFlag,0,0x80);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ItemPlace__Fii(int xp /*$a0*/, int yp /*$a1*/)
 // line 525, offset 0x8003b150
	/* begin block 1 */
		// Start line: 526
		// Start offset: 0x8003B150
	/* end block 1 */
	// End offset: 0x8003B210
	// End Line: 533

	/* begin block 2 */
		// Start line: 1051
	/* end block 2 */
	// End Line: 1052

uchar ItemPlace__Fii(int xp,int yp)

{
	bool bVar1;
	
	bVar1 = false;
	if ((((dung_map[xp * 0x6c + yp].dMonster == 0) &&
			 (bVar1 = false, dung_map[xp * 0x6c + yp].dPlayer == '\0')) &&
			(bVar1 = false, dung_map[xp * 0x6c + yp].dItem == '\0')) &&
		 ((bVar1 = false, dung_map[xp * 0x6c + yp].dObject == '\0' &&
			(bVar1 = false, (dung_map[xp * 0x6c + yp].dFlags & 8U) == 0)))) {
		bVar1 = nSolidTable[(int)dung_map[xp * 0x6c + yp].dPiece] == '\0';
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddInitItems__Fv()
 // line 539, offset 0x8003b218
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x8003B218
		// Variables:
	// 		int j; // $s6

		/* begin block 1.1 */
			// Start line: 540
			// Start offset: 0x8003B218
			// Variables:
		// 		int i; // $s4

			/* begin block 1.1.1 */
				// Start line: 546
				// Start offset: 0x8003B258
				// Variables:
			// 		int ii; // $s3
			// 		int xx; // $s2
			// 		int yy; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8003B380
			// End Line: 570
		/* end block 1.1 */
		// End offset: 0x8003B404
		// End Line: 577
	/* end block 1 */
	// End offset: 0x8003B404
	// End Line: 577

	/* begin block 2 */
		// Start line: 1078
	/* end block 2 */
	// End Line: 1079

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
	
	lVar4 = random__Fil(0xb,3);
	iVar5 = 0;
	while (cVar1 = itemavail[0], iVar5 < lVar4 + 3) {
		i = (int)itemavail[0];
		cVar2 = itemavail[0x7e - numitems];
		itemactive[numitems] = itemavail[0];
		itemavail[0] = cVar2;
		do {
			s = random__Fil(0xc,0x50);
			xp = s + 0x10;
			s = random__Fil(0xc,0x50);
			yp = s + 0x10;
			uVar3 = ItemPlace__Fii(xp,yp);
		} while (uVar3 == '\0');
		item[i]._ix = (char)xp;
		item[i]._iy = (char)yp;
		dung_map[xp * 0x6c + yp].dItem = cVar1 + '\x01';
		s = GetRndSeed__Fv();
		item[i]._iSeed = s;
		SetRndSeed__Fl(s);
		s = random__Fil(0xc,2);
		if (s == 0) {
			yp = 0x19;
		}
		else {
			yp = 0x18;
		}
		GetItemAttrs__Fiii(i,yp,(uint)currlevel);
		item[i]._iCreateInfo = (ushort)currlevel | 0x8000;
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
// void /*$ra*/ InitItems__Fv()
 // line 583, offset 0x8003b430
	/* begin block 1 */
		// Start line: 584
		// Start offset: 0x8003B430
		// Variables:
	// 		int i; // $a0

		/* begin block 1.1 */
			// Start line: 613
			// Start offset: 0x8003B540

			/* begin block 1.1.1 */
				// Start line: 613
				// Start offset: 0x8003B554
			/* end block 1.1.1 */
			// End offset: 0x8003B5E0
			// End Line: 628
		/* end block 1.1 */
		// End offset: 0x8003B5E0
		// End Line: 628
	/* end block 1 */
	// End offset: 0x8003B5E4
	// End Line: 631

	/* begin block 2 */
		// Start line: 1182
	/* end block 2 */
	// End Line: 1183

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitItems__Fv(void)

{
	ItemStruct *pIVar1;
	ItemStruct *pIVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	GetItemAttrs__Fiii(0,0,1);
	pIVar1 = item;
	pIVar2 = &golditem;
	do {
		pIVar8 = pIVar2;
		pIVar7 = pIVar1;
		iVar4 = pIVar7->_iVMult1;
		iVar5 = pIVar7->_iVAdd2;
		iVar6 = pIVar7->_iVMult2;
		pIVar8->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar8->_iVMult1 = iVar4;
		pIVar8->_iVAdd2 = iVar5;
		pIVar8->_iVMult2 = iVar6;
		pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
		pIVar2 = (ItemStruct *)&pIVar8->_iSeed;
	} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&item[0]._iMinMag);
	iVar4 = pIVar7->_ivalue;
	((ItemStruct *)&pIVar8->_iSeed)->_iVAdd1 = item[0]._144_4_;
	pIVar8->_ivalue = iVar4;
	iVar5 = 0;
	iVar4 = 0;
	golditem._iStatFlag = '\x01';
	numitems = 0;
	do {
		*(undefined2 *)((int)&item[0]._itype + iVar4) = 0;
		(&item[0]._ix)[iVar4] = '\0';
		(&item[0]._iy)[iVar4] = '\0';
		(&item[0]._iAnimFlag)[iVar4] = '\0';
		(&item[0]._iSelFlag)[iVar4] = '\0';
		(&item[0]._iIdentified)[iVar4] = '\0';
		(&item[0]._iPostDraw)[iVar4] = '\0';
		iVar5 = iVar5 + 1;
		iVar4 = iVar4 + 0x98;
	} while (iVar5 < 0x7f);
	iVar4 = 0;
	do {
		itemavail[iVar4] = (char)iVar4;
		itemactive[iVar4] = '\0';
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x7f);
	if (setlevel == '\0') {
		GetRndSeed__Fv();
		uVar3 = QuestStatus__Fi(0);
		if (uVar3 != '\0') {
			SpawnRock__Fv();
		}
		uVar3 = QuestStatus__Fi(10);
		if (uVar3 != '\0') {
			SpawnQuestItem__Fiiiii(0x10,setpc_x * 2 + 0x1b,setpc_y * 2 + 0x1b,0,1);
		}
		if ((currlevel != '\0') && (currlevel < 0x10)) {
			AddInitItems__Fv();
		}
	}
	uitemflag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrItemVals__FiUc(int p /*stack -176*/, unsigned char Loadgfx /*stack -168*/)
 // line 637, offset 0x8003b5f4
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x8003B5F4
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
			// Start line: 638
			// Start offset: 0x8003B5F4

			/* begin block 1.1.1 */
				// Start line: 681
				// Start offset: 0x8003B6CC
				// Variables:
			// 		struct ItemStruct *itm; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 699
					// Start offset: 0x8003B790

					/* begin block 1.1.1.1.1 */
						// Start line: 702
						// Start offset: 0x8003B7B0
						// Variables:
					// 		int tmpac; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003B7F8
					// End Line: 705
				/* end block 1.1.1.1 */
				// End offset: 0x8003B7F8
				// End Line: 705
			/* end block 1.1.1 */
			// End offset: 0x8003B8E8
			// End Line: 727
		/* end block 1.1 */
		// End offset: 0x8003B8FC
		// End Line: 728
	/* end block 1 */
	// End offset: 0x8003C070
	// End Line: 891

	/* begin block 2 */
		// Start line: 1293
	/* end block 2 */
	// End Line: 1294

void CalcPlrItemVals__FiUc(int p,uchar Loadgfx)

{
	uint uVar1;
	short sVar2;
	int iVar3;
	int *piVar4;
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
	iVar12 = 4;
	iVar8 = 0x1d4;
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
		iVar5 = (int)&plr[p]._pmode + iVar8;
		if (6 < local_30) break;
		if ((*(short *)(iVar5 + 0x5a) != -1) && (*(char *)(iVar5 + 0x92) != '\0')) {
			iVar7 = iVar7 + *(int *)(iVar5 + 0x1c);
			r = r + *(int *)(iVar5 + 0x20);
			iVar11 = iVar11 + (int)*(short *)(iVar5 + 0x58);
			if (*(int *)(iVar5 + 0x24) != 0) {
				uVar1 = *(int *)(iVar5 + 0x24) - 1;
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
			if ((*(char *)(iVar5 + 0x7b) == '\0') || (*(char *)(iVar5 + 0x95) != '\0')) {
				iVar21 = iVar21 + *(int *)(iVar5 + 0x30);
				iVar22 = iVar22 + *(int *)(iVar5 + 0x34);
				if ((int)*(char *)(iVar5 + 0x80) != 0) {
					iVar3 = ((int)*(short *)(iVar5 + 0x58) * (int)*(char *)(iVar5 + 0x80)) / 100;
					if (iVar3 == 0) {
						iVar3 = 1;
					}
					local_a0 = local_a0 + iVar3;
				}
				local_48 = local_48 | *(uint *)(iVar5 + 0x60);
				iVar14 = iVar14 + (int)*(char *)(iVar5 + 0x82);
				local_98 = local_98 + (int)*(char *)(iVar5 + 0x81);
				iVar13 = iVar13 + (int)*(char *)(iVar5 + 0x84);
				local_90 = local_90 + (int)*(char *)(iVar5 + 0x83);
				iVar24 = iVar24 + (int)*(char *)(iVar5 + 0x86);
				iVar20 = iVar20 + (int)*(char *)(iVar5 + 0x85);
				iVar9 = iVar9 + *(int *)(iVar5 + 0x38);
				iVar18 = iVar18 + (int)*(char *)(iVar5 + 0x87);
				iVar12 = iVar12 + *(int *)(iVar5 + 0x40);
				iVar10 = iVar10 + *(int *)(iVar5 + 0x3c);
				local_80 = local_80 + (int)*(short *)(iVar5 + 100);
				local_88 = local_88 + (int)*(short *)(iVar5 + 0x66);
				local_70 = local_70 + (int)*(short *)(iVar5 + 0x54);
				cVar19 = cVar19 + *(char *)(iVar5 + 0x88);
				local_60 = local_60 + *(int *)(iVar5 + 0x48);
				local_68 = local_68 + *(int *)(iVar5 + 0x44);
				local_58 = local_58 + *(int *)(iVar5 + 0x4c);
				local_50 = local_50 + *(int *)(iVar5 + 0x50);
			}
		}
		iVar8 = iVar8 + 0x98;
		local_30 = local_30 + 1;
	}
	if ((iVar7 == 0) && (r == 0)) {
		iVar7 = 1;
		r = 1;
		if ((plr[p].InvBody[4]._itype == 5) && (plr[p].InvBody[4]._iStatFlag != '\0')) {
			r = 3;
		}
		if ((plr[p].InvBody[5]._itype == 5) && (plr[p].InvBody[5]._iStatFlag != '\0')) {
			r = 3;
		}
	}
	plr[p]._pIMinDam = iVar7;
	plr[p]._pIMaxDam = r;
	plr[p]._pIAC = iVar11;
	plr[p]._pIBonusDam = iVar21;
	plr[p]._pIBonusToHit = iVar22;
	plr[p]._pIBonusAC = local_a0;
	plr[p]._pIBonusDamMod = iVar9;
	plr[p]._pIGetHit = iVar10;
	plr[p]._pIFlags = local_48;
	if (iVar12 < 2) {
		iVar12 = 2;
	}
	if (0xf < iVar12) {
		iVar12 = 0xf;
	}
	if (((int)plr[p]._pLightRad != iVar12) && (p == myplr)) {
		ChangeLightRadius__Fii((int)plr[p]._plid,iVar12 + 0x70);
		if (iVar12 < 10) {
			cVar23 = plr[p]._pvid;
			r = 10;
		}
		else {
			cVar23 = plr[p]._pvid;
			r = iVar12;
		}
		ChangeVisionRadius__Fii((int)cVar23,r);
		plr[p]._pLightRad = (char)iVar12;
	}
	r = myplr;
	plr[p]._pStrength = plr[p]._pBaseStr + (short)local_98;
	if (plr[r]._pStrength < 1) {
		plr[r]._pStrength = 0;
	}
	r = myplr;
	plr[p]._pMagic = plr[p]._pBaseMag + (short)iVar14;
	if (plr[r]._pMagic < 1) {
		plr[r]._pMagic = 0;
	}
	r = myplr;
	plr[p]._pDexterity = plr[p]._pBaseDex + (short)local_90;
	if (plr[r]._pDexterity < 1) {
		plr[r]._pDexterity = 0;
	}
	r = myplr;
	plr[p]._pVitality = plr[p]._pBaseVit + (short)iVar13;
	if (plr[r]._pVitality < 1) {
		plr[r]._pVitality = 0;
	}
	if (plr[p]._pClass == '\x01') {
		plr[p]._pDamageMod =
				 (((int)plr[p]._pStrength + (int)plr[p]._pDexterity) * (int)plr[p]._pLevel) / 200;
	}
	else {
		plr[p]._pDamageMod = ((int)plr[p]._pStrength * (int)plr[p]._pLevel) / 100;
	}
	cVar23 = plr[p]._pRSplType;
	*(uint *)&plr[p]._pISpells = uVar15;
	*(uint *)((int)&plr[p]._pISpells + 4) = uVar16;
	if (cVar23 == '\x03') {
		uVar1 = plr[p]._pRSpell - 1;
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
			plr[p]._pRSpell = -1;
			plr[p]._pRSplType = '\x04';
			force_redraw = 0xff;
		}
	}
	plr[p]._pISplLvlAdd = cVar19;
	plr[p]._pIEnAc = local_70;
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
	plr[p]._pMagResist = cVar17;
	if (0x4b < iVar20) {
		cVar19 = 'K';
	}
	plr[p]._pFireResist = cVar19;
	if (0x4b < iVar24) {
		cVar23 = 'K';
	}
	cVar19 = plr[p]._pClass;
	plr[p]._pLghtResist = cVar23;
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
	plr[p]._pHitPoints = plr[p]._pHPBase + local_88;
	iVar7 = myplr;
	plr[p]._pMaxHP = plr[p]._pMaxHPBase + local_88;
	if ((p == iVar7) && (plr[p]._pHitPoints >> 6 < 1)) {
		SetPlayerHitPoints__Fii(p,0);
	}
	iVar7 = plr[p]._pManaBase;
	plr[p]._pIFMinDam = local_68;
	plr[p]._pIFMaxDam = local_60;
	plr[p]._pILMinDam = local_58;
	plr[p]._pILMaxDam = local_50;
	iVar8 = plr[p]._pMaxManaBase;
	plr[p]._pMana = iVar7 + local_80 + r;
	plr[p]._pMaxMana = iVar8 + local_80 + r;
	if ((local_48 & 1) == 0) {
		plr[p]._pInfraFlag = '\0';
	}
	else {
		plr[p]._pInfraFlag = '\x01';
	}
	uVar15 = 0;
	uVar16 = SEXT24(plr[p].InvBody[4]._itype);
	plr[p]._pBlockFlag = '\0';
	plr[p]._pwtype = 0;
	if ((uVar16 != 0xffffffff) && (plr[p].InvBody[4]._iClass == '\x01')) {
		uVar15 = uVar16 & -(uint)(plr[p].InvBody[4]._iStatFlag != '\0');
	}
	uVar1 = SEXT24(plr[p].InvBody[5]._itype);
	uVar16 = uVar15;
	if (((uVar1 == 0xffffffff) || (uVar16 = uVar15, plr[p].InvBody[5]._iClass != '\x01')) ||
		 (uVar16 = uVar1, plr[p].InvBody[5]._iStatFlag != '\0')) {
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
		plr[p]._pwtype = 1;
		uVar15 = 4;
		break;
	case 4:
		uVar15 = 6;
		break;
	case 10:
		uVar15 = 8;
	}
	if ((plr[p].InvBody[4]._itype == 5) && (plr[p].InvBody[4]._iStatFlag != '\0')) {
		plr[p]._pBlockFlag = '\x01';
		uVar15 = uVar15 + 1;
	}
	if ((plr[p].InvBody[5]._itype == 5) && (plr[p].InvBody[5]._iStatFlag != '\0')) {
		plr[p]._pBlockFlag = '\x01';
		uVar15 = uVar15 + 1;
	}
	sVar2 = plr[p].InvBody[6]._itype;
	if ((sVar2 == 8) && (plr[p].InvBody[6]._iStatFlag != '\0')) {
		uVar15 = uVar15 + 0x10;
		sVar2 = plr[p].InvBody[6]._itype;
	}
	if ((sVar2 == 9) && (plr[p].InvBody[6]._iStatFlag != '\0')) {
		uVar15 = uVar15 + 0x20;
	}
	if (((int)plr[p]._pgfxnum == uVar15) || (Loadgfx == '\0')) {
		plr[p]._pgfxnum = (char)uVar15;
	}
	else {
		plr[p]._pgfxnum = (char)uVar15;
		plr[p]._pGFXLoad = 0;
		SetPlrAnims__Fi(p);
		r = plr[p]._pNFrames;
		plr[p]._pAnimFrame = 1;
		plr[p].peq = '\0';
		plr[p]._pAnimCnt = 0;
		plr[p]._pAnimDelay = 3;
		plr[p]._pAnimLen = r;
	}
	r = nummissiles;
	local_30 = 0;
	if (0 < nummissiles) {
		piVar4 = &missileactive;
		do {
			iVar7 = *piVar4;
			if ((missile[iVar7]._mitype == '\r') && ((int)missile[iVar7]._misource == p)) {
				missile[iVar7]._miVar1 = (short)plr[p]._pHitPoints;
				missile[iVar7]._miVar2 = (short)plr[p]._pHPBase;
			}
			piVar4 = piVar4 + 1;
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
 // line 895, offset 0x8003c0a4
	/* begin block 1 */
		// Start line: 896
		// Start offset: 0x8003C0A4
		// Variables:
	// 		int i; // $t3
	// 		unsigned long t; // $t0
	/* end block 1 */
	// End offset: 0x8003C418
	// End Line: 926

	/* begin block 2 */
		// Start line: 2217
	/* end block 2 */
	// End Line: 2218

void CalcPlrScrolls__Fi(int p)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	
	*(undefined4 *)&plr[p]._pScrlSpells = 0;
	*(undefined4 *)((int)&plr[p]._pScrlSpells + 4) = 0;
	iVar3 = 0;
	if (0 < plr[p]._pNumInv) {
		iVar4 = 0;
		do {
			if (((*(short *)((int)&plr[p].InvList[0]._itype + iVar4) != -1) &&
					((uint)*(ushort *)((int)&plr[p].InvList[0]._iMiscId + iVar4) - 0x15 < 2)) &&
				 ((&plr[p].InvList[0]._iStatFlag)[iVar4] != '\0')) {
				uVar1 = *(uint *)((int)&plr[p]._pScrlSpells + 4);
				uVar2 = *(int *)((int)&plr[p].InvList[0]._iSpell + iVar4) - 1;
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
				*(uint *)&plr[p]._pScrlSpells = *(uint *)&plr[p]._pScrlSpells | uVar2;
				*(uint *)((int)&plr[p]._pScrlSpells + 4) = uVar1 | uVar5;
			}
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x98;
		} while (iVar3 < plr[p]._pNumInv);
	}
	iVar4 = 0;
	iVar3 = p * 0x23a8;
	do {
		if (((*(short *)((int)&plr[0].SpdList[0]._itype + iVar3) != -1) &&
				((uint)*(ushort *)((int)&plr[0].SpdList[0]._iMiscId + iVar3) - 0x15 < 2)) &&
			 ((&plr[0].SpdList[0]._iStatFlag)[iVar3] != '\0')) {
			uVar1 = *(uint *)((int)&plr[p]._pScrlSpells + 4);
			uVar2 = *(int *)((int)&plr[0].SpdList[0]._iSpell + iVar3) - 1;
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
			*(uint *)&plr[p]._pScrlSpells = *(uint *)&plr[p]._pScrlSpells | uVar2;
			*(uint *)((int)&plr[p]._pScrlSpells + 4) = uVar1 | uVar5;
		}
		iVar4 = iVar4 + 1;
		iVar3 = iVar3 + 0x98;
	} while (iVar4 < 8);
	if (((plr[p]._pRSplType == '\x02') &&
			(uVar1 = 1 << (plr[p]._pRSpell - 1U & 0x1f), (*(uint *)&plr[p]._pScrlSpells & uVar1) == 0)) &&
		 ((*(uint *)((int)&plr[p]._pScrlSpells + 4) & (int)uVar1 >> 0x1f) == 0)) {
		plr[p]._pRSpell = -1;
		plr[p]._pRSplType = '\x04';
		force_redraw = 0xff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a3*/)
 // line 934, offset 0x8003c424
	/* begin block 1 */
		// Start line: 935
		// Start offset: 0x8003C424

		/* begin block 1.1 */
			// Start line: 939
			// Start offset: 0x8003C458

			/* begin block 1.1.1 */
				// Start line: 939
				// Start offset: 0x8003C468
				// Variables:
			// 		unsigned long t; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8003C4B8
			// End Line: 941
		/* end block 1.1 */
		// End offset: 0x8003C4B8
		// End Line: 941
	/* end block 1 */
	// End offset: 0x8003C4B8
	// End Line: 941

	/* begin block 2 */
		// Start line: 2295
	/* end block 2 */
	// End Line: 2296

void CalcPlrStaff__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	short sVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	
	sVar1 = ptrplr->InvBody[4]._itype;
	*(undefined4 *)&ptrplr->_pISpells = 0;
	*(undefined4 *)((int)&ptrplr->_pISpells + 4) = 0;
	if (((sVar1 != -1) && (ptrplr->InvBody[4]._iStatFlag != '\0')) &&
		 (0 < ptrplr->InvBody[4]._iCharges)) {
		uVar2 = ptrplr->InvBody[4]._iSpell - 1;
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
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcSelfItems__Fi(int pnum /*$a0*/)
 // line 946, offset 0x8003c4c0
	/* begin block 1 */
		// Start line: 947
		// Start offset: 0x8003C4C0
		// Variables:
	// 		int i; // $a2
	// 		struct PlayerStruct *p; // $a3
	// 		unsigned char sf; // $a1
	// 		unsigned char changeflag; // $t3
	// 		int sa; // $t2
	// 		int ma; // $t1
	// 		int da; // $t0
	/* end block 1 */
	// End offset: 0x8003C618
	// End Line: 987

	/* begin block 2 */
		// Start line: 2326
	/* end block 2 */
	// End Line: 2327

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
	pcVar2 = &plr[pnum].InvBody[0]._iPLDex;
	do {
		if ((*(short *)(pcVar2 + -0x29) != -1) && (pcVar2[0xf] = '\x01', pcVar2[0x12] != '\0')) {
			iVar6 = iVar6 + (int)pcVar2[-2];
			iVar4 = iVar4 + (int)*pcVar2;
			iVar5 = iVar5 + (int)pcVar2[-1];
		}
		iVar3 = iVar3 + -1;
		pcVar2 = pcVar2 + 0x98;
	} while (iVar3 != -1);
	do {
		bVar1 = false;
		iVar3 = 6;
		pcVar2 = &plr[pnum].InvBody[0]._iPLDex;
		do {
			if (((*(short *)(pcVar2 + -0x29) != -1) && (pcVar2[0xf] != '\0')) &&
				 ((int)plr[pnum]._pBaseDex + iVar4 < (int)pcVar2[10] ||
					((int)plr[pnum]._pBaseMag + iVar5 < (int)(uint)(byte)pcVar2[0xd] ||
					(int)plr[pnum]._pBaseStr + iVar6 < (int)pcVar2[9]))) {
				bVar1 = true;
				pcVar2[0xf] = '\0';
				if (pcVar2[0x12] != '\0') {
					iVar6 = iVar6 - (int)pcVar2[-2];
					iVar4 = iVar4 - (int)*pcVar2;
					iVar5 = iVar5 - (int)pcVar2[-1];
				}
			}
			iVar3 = iVar3 + -1;
			pcVar2 = pcVar2 + 0x98;
		} while (iVar3 != -1);
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p /*$a0*/, struct ItemStruct *x /*$a1*/)
 // line 992, offset 0x8003c620
	/* begin block 1 */
		// Start line: 993
		// Start offset: 0x8003C620
	/* end block 1 */
	// End offset: 0x8003C664
	// End Line: 997

	/* begin block 2 */
		// Start line: 2430
	/* end block 2 */
	// End Line: 2431

uchar ItemMinStats__FPC12PlayerStructPC10ItemStruct(PlayerStruct *p,ItemStruct *x)

{
	bool bVar1;
	
	bVar1 = false;
	if (((int)(uint)x->_iMinMag <= (int)p->_pMagic) &&
		 (bVar1 = false, (int)x->_iMinStr <= (int)p->_pStrength)) {
		bVar1 = (int)x->_iMinDex <= (int)p->_pDexterity;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrItemMin__Fi(int pnum /*$a0*/)
 // line 1002, offset 0x8003c66c
	/* begin block 1 */
		// Start line: 1003
		// Start offset: 0x8003C66C
		// Variables:
	// 		int i; // $s0
	// 		struct ItemStruct *pi; // $s1
	// 		struct PlayerStruct *p; // $s3
	/* end block 1 */
	// End offset: 0x8003C728
	// End Line: 1018

	/* begin block 2 */
		// Start line: 2449
	/* end block 2 */
	// End Line: 2450

void CalcPlrItemMin__Fi(int pnum)

{
	uchar uVar1;
	int iVar2;
	ItemStruct *x;
	uchar *puVar3;
	
	iVar2 = plr[pnum]._pNumInv;
	x = plr[pnum].InvList;
	while (iVar2 = iVar2 + -1, iVar2 != -1) {
		uVar1 = ItemMinStats__FPC12PlayerStructPC10ItemStruct(plr + pnum,x);
		x->_iStatFlag = uVar1;
		x = x + 1;
	}
	x = plr[pnum].SpdList;
	iVar2 = 7;
	puVar3 = (uchar *)&plr[pnum].SpdList[0]._iStatFlag;
	do {
		if (*(short *)(puVar3 + -0x38) != -1) {
			uVar1 = ItemMinStats__FPC12PlayerStructPC10ItemStruct(plr + pnum,x);
			*puVar3 = uVar1;
		}
		puVar3 = puVar3 + 0x98;
		iVar2 = iVar2 + -1;
		x = x + 1;
	} while (iVar2 != -1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrBookVals__Fi(int p /*$s1*/)
 // line 1023, offset 0x8003c74c
	/* begin block 1 */
		// Start line: 1024
		// Start offset: 0x8003C74C
		// Variables:
	// 		int i; // $s2
	// 		int slvl; // $a2
	/* end block 1 */
	// End offset: 0x8003C9BC
	// End Line: 1047

	/* begin block 2 */
		// Start line: 2501
	/* end block 2 */
	// End Line: 2502

void CalcPlrBookVals__Fi(int p)

{
	short *psVar1;
	uchar uVar2;
	int iVar3;
	uint uVar4;
	uint uVar5;
	int ii;
	int iVar6;
	
	if ((currlevel == '\0') && (ii = 1, ItemStruct_800e4d7c._itype != -1)) {
		iVar6 = 0x98;
		do {
			WitchBookLevel__Fi(ii);
			psVar1 = (short *)((int)&ItemStruct_800e4d7c._itype + iVar6);
			ii = ii + 1;
			iVar6 = iVar6 + 0x98;
		} while (*psVar1 != -1);
	}
	ii = 0;
	if (0 < plr[p]._pNumInv) {
		iVar6 = 0;
		do {
			if ((*(short *)((int)&plr[p].InvList[0]._itype + iVar6) == 0) &&
				 (*(short *)((int)&plr[p].InvList[0]._iMiscId + iVar6) == 0x18)) {
				iVar3 = *(int *)((int)&plr[p].InvList[0]._iSpell + iVar6);
				(&plr[p].InvList[0]._iMinMag)[iVar6] =
						 (uchar)(&spelldata)[*(int *)((int)&plr[p].InvList[0]._iSpell + iVar6)].sMinInt;
				iVar3 = (int)*(char *)(p * 0x23a8 + -0x7ff2147f + iVar3);
				while (iVar3 != 0) {
					uVar5 = (uint)(&plr[p].InvList[0]._iMinMag)[iVar6];
					uVar5 = uVar5 + (int)uVar5 / 5;
					uVar4 = uVar5 & 0xff;
					(&plr[p].InvList[0]._iMinMag)[iVar6] = (uchar)uVar5;
					iVar3 = iVar3 + -1;
					if (0xff < (int)(uVar4 + (int)uVar4 / 5)) {
						(&plr[p].InvList[0]._iMinMag)[iVar6] = -1;
						iVar3 = 0;
					}
				}
				uVar2 = ItemMinStats__FPC12PlayerStructPC10ItemStruct
													(plr + p,(ItemStruct *)(p * 0x23a8 + -0x7ff20f00 + iVar6));
				(&plr[p].InvList[0]._iStatFlag)[iVar6] = uVar2;
			}
			ii = ii + 1;
			iVar6 = iVar6 + 0x98;
		} while (ii < plr[p]._pNumInv);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrInv__FiUc(int p /*$s1*/, unsigned char Loadgfx /*$s0*/)
 // line 1051, offset 0x8003c9e0
	/* begin block 1 */
		// Start line: 1052
		// Start offset: 0x8003C9E0
	/* end block 1 */
	// End offset: 0x8003CA8C
	// End Line: 1062

	/* begin block 2 */
		// Start line: 2560
	/* end block 2 */
	// End Line: 2561

void CalcPlrInv__FiUc(int p,uchar Loadgfx)

{
	CalcPlrItemMin__Fi(p);
	CalcSelfItems__Fi(p);
	CalcPlrItemVals__FiUc(p,Loadgfx);
	CalcPlrItemMin__Fi(p);
	if (p == myplr) {
		CalcPlrBookVals__Fi(p);
		CalcPlrScrolls__Fi(p);
		CalcPlrStaff__FP12PlayerStruct(plr + p);
	}
	if (currlevel == '\0') {
		RecalcStoreStats__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h /*$s0*/, int idata /*$s2*/)
 // line 1067, offset 0x8003caa4
	/* begin block 1 */
		// Start line: 1068
		// Start offset: 0x8003CAA4
		// Variables:
	// 		struct ItemDataStruct *pAllItem; // $s1
	/* end block 1 */
	// End offset: 0x8003CBA0
	// End Line: 1099

	/* begin block 2 */
		// Start line: 2592
	/* end block 2 */
	// End Line: 2593

void SetPlrHandItem__FP10ItemStructi(ItemStruct *h,int idata)

{
	char cVar1;
	byte bVar2;
	char cVar3;
	char cVar4;
	byte bVar5;
	byte bVar6;
	byte bVar7;
	byte bVar8;
	byte bVar9;
	uchar uVar10;
	ushort uVar11;
	
	memset(h,0,0x98);
	cVar1 = (&AllItemsList)[idata].itype;
	bVar2 = (&AllItemsList)[idata].iCurs;
	uVar11 = (&AllItemsList)[idata].iName;
	cVar3 = (&AllItemsList)[idata].iLoc;
	cVar4 = (&AllItemsList)[idata].iClass;
	bVar5 = (&AllItemsList)[idata].iMinDam;
	bVar6 = (&AllItemsList)[idata].iMaxDam;
	bVar7 = (&AllItemsList)[idata].iMinAC;
	bVar8 = (&AllItemsList)[idata].iMiscId;
	bVar9 = (&AllItemsList)[idata].iSpell;
	h->_iMiscId = (ushort)bVar8;
	h->_itype = (short)cVar1;
	h->_iCurs = (ushort)bVar2;
	h->_iName = uVar11;
	h->_iIName = uVar11;
	h->_iLoc = cVar3;
	h->_iClass = cVar4;
	h->_iMinDam = (uint)bVar5;
	h->_iMaxDam = (uint)bVar6;
	h->_iAC = (ushort)bVar7;
	h->_iSpell = (uint)bVar9;
	if (bVar8 == 0x17) {
		h->_iCharges = 0x28;
	}
	bVar2 = (&AllItemsList)[idata].iDurability;
	cVar1 = (&AllItemsList)[idata].iMinStr;
	uVar10 = (&AllItemsList)[idata].iMinMag;
	cVar3 = (&AllItemsList)[idata].iMinDex;
	uVar11 = (&AllItemsList)[idata].iValue;
	h->_iPrePower = -1;
	h->_iSufPower = -1;
	h->IDidx = (short)idata;
	h->_iMagical = '\0';
	h->_iStatFlag = '\x01';
	h->_iMaxCharges = h->_iCharges;
	h->_iDurability = (uint)bVar2;
	h->_iMaxDur = (uint)bVar2;
	h->_iMinStr = cVar1;
	h->_iMinMag = uVar10;
	h->_iMinDex = cVar3;
	h->_ivalue = (uint)uVar11;
	h->_iIvalue = (uint)uVar11;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h /*$s0*/)
 // line 1104, offset 0x8003cbbc
	/* begin block 1 */
		// Start line: 1105
		// Start offset: 0x8003CBBC
	/* end block 1 */
	// End offset: 0x8003CBD4
	// End Line: 1106

	/* begin block 2 */
		// Start line: 2724
	/* end block 2 */
	// End Line: 2725

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
 // line 1111, offset 0x8003cbe8
	/* begin block 1 */
		// Start line: 1112
		// Start offset: 0x8003CBE8
		// Variables:
	// 		int i; // $a0
	// 		int ii; // $v0
	// 		int s; // $a3
	// 		unsigned char doneflag; // $s1
	/* end block 1 */
	// End offset: 0x8003CD40
	// End Line: 1128

	/* begin block 2 */
		// Start line: 2738
	/* end block 2 */
	// End Line: 2739

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
				if (item[(int)itemactive[iVar3]]._iSeed == lVar2) {
					bVar1 = false;
				}
				iVar3 = iVar3 + 1;
			} while (iVar3 < numitems);
		}
		if ((pnum == myplr) && (iVar3 = 0, 0 < plr[pnum]._pNumInv)) {
			iVar4 = 0;
			do {
				if (*(int *)((int)&plr[pnum].InvList[0]._iSeed + iVar4) == lVar2) {
					bVar1 = false;
				}
				iVar3 = iVar3 + 1;
				iVar4 = iVar4 + 0x98;
			} while (iVar3 < plr[pnum]._pNumInv);
		}
	} while (!bVar1);
	h->_iSeed = lVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h /*$a0*/, int iseed /*$a1*/)
 // line 1133, offset 0x8003cd64
	/* begin block 1 */
		// Start line: 1134
		// Start offset: 0x8003CD64
	/* end block 1 */
	// End offset: 0x8003CD64
	// End Line: 1135

	/* begin block 2 */
		// Start line: 2791
	/* end block 2 */
	// End Line: 2792

void SetPlrHandSeed__FP10ItemStructi(ItemStruct *h,int iseed)

{
	h->_iSeed = iseed;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h /*$a0*/)
 // line 1140, offset 0x8003cd6c
	/* begin block 1 */
		// Start line: 1141
		// Start offset: 0x8003CD6C
	/* end block 1 */
	// End offset: 0x8003CD94
	// End Line: 1146

	/* begin block 2 */
		// Start line: 2805
	/* end block 2 */
	// End Line: 2806

void SetPlrHandGoldCurs__FP10ItemStruct(ItemStruct *h)

{
	short sVar1;
	
	if (h->_ivalue < 0x9c4) {
		sVar1 = 4;
		if (1000 < h->_ivalue) {
			sVar1 = 5;
		}
	}
	else {
		sVar1 = 6;
	}
	h->_iCurs = sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlrItems__Fi(int p /*$s3*/)
 // line 1151, offset 0x8003cd9c
	/* begin block 1 */
		// Start line: 1152
		// Start offset: 0x8003CD9C
		// Variables:
	// 		int i; // $v1
	// 		struct ItemStruct *pi; // $v0
	/* end block 1 */
	// End offset: 0x8003D1B0
	// End Line: 1263

	/* begin block 2 */
		// Start line: 2826
	/* end block 2 */
	// End Line: 2827

void CreatePlrItems__Fi(int p)

{
	char cVar1;
	int *piVar2;
	int idata;
	int iVar3;
	int iVar4;
	int *piVar5;
	ItemStruct *h;
	ItemStruct *pIVar6;
	
	idata = p * 0x23a8 + -0x7ff21328;
	iVar3 = 6;
	do {
		*(undefined2 *)(idata + 0x5a) = 0xffff;
		iVar3 = iVar3 + -1;
		idata = idata + 0x98;
	} while (iVar3 != -1);
	memset(plr[p].InvGrid,0,0x28);
	idata = p * 0x23a8 + -0x7ff20f00;
	iVar3 = 0x27;
	do {
		*(undefined2 *)(idata + 0x5a) = 0xffff;
		iVar3 = iVar3 + -1;
		idata = idata + 0x98;
	} while (iVar3 != -1);
	plr[p]._pNumInv = 0;
	idata = p * 0x23a8 + -0x7ff1f714;
	iVar3 = 7;
	do {
		*(undefined2 *)(idata + 0x5a) = 0xffff;
		iVar3 = iVar3 + -1;
		idata = idata + 0x98;
	} while (iVar3 != -1);
	cVar1 = plr[p]._pClass;
	if (cVar1 == '\x01') {
		SetPlrHandItem__FP10ItemStructi(plr[p].InvBody + 4,4);
		GetPlrHandSeed__FP10ItemStruct(plr[p].InvBody + 4);
		SetPlrHandItem__FP10ItemStructi(plr[p].SpdList,0x18);
		GetPlrHandSeed__FP10ItemStruct(plr[p].SpdList);
		idata = 0x18;
	}
	else {
		if (cVar1 < '\x02') {
			if (cVar1 != '\0') goto LAB_8003d068;
			SetPlrHandItem__FP10ItemStructi(plr[p].InvBody + 4,1);
			GetPlrHandSeed__FP10ItemStruct(plr[p].InvBody + 4);
			SetPlrHandItem__FP10ItemStructi(plr[p].InvBody + 5,2);
			GetPlrHandSeed__FP10ItemStruct(plr[p].InvBody + 5);
			SetPlrHandItem__FP10ItemStructi(&plr[p].HoldItem,3);
			GetPlrHandSeed__FP10ItemStruct(&plr[p].HoldItem);
			AutoPlace__FiiiiUc(p,0,1,3,1);
			SetPlrHandItem__FP10ItemStructi(plr[p].SpdList,0x18);
			GetPlrHandSeed__FP10ItemStruct(plr[p].SpdList);
			idata = 0x18;
		}
		else {
			if (cVar1 != '\x02') goto LAB_8003d068;
			SetPlrHandItem__FP10ItemStructi(plr[p].InvBody + 4,5);
			GetPlrHandSeed__FP10ItemStruct(plr[p].InvBody + 4);
			SetPlrHandItem__FP10ItemStructi(plr[p].SpdList,0x19);
			GetPlrHandSeed__FP10ItemStruct(plr[p].SpdList);
			idata = 0x19;
		}
	}
	SetPlrHandItem__FP10ItemStructi(plr[p].SpdList + 1,idata);
	GetPlrHandSeed__FP10ItemStruct(plr[p].SpdList + 1);
LAB_8003d068:
	h = &plr[p].HoldItem;
	SetPlrHandItem__FP10ItemStructi(h,0);
	GetPlrHandSeed__FP10ItemStruct(h);
	plr[p].HoldItem._ivalue = 100;
	idata = plr[p]._pNumInv;
	plr[p].HoldItem._iCurs = 4;
	plr[p]._pGold = plr[p].HoldItem._ivalue;
	piVar2 = (int *)(idata * 0x98 + p * 0x23a8 + -0x7ff20f00);
	do {
		pIVar6 = h;
		piVar5 = piVar2;
		idata = pIVar6->_iVMult1;
		iVar3 = pIVar6->_iVAdd2;
		iVar4 = pIVar6->_iVMult2;
		*piVar5 = pIVar6->_iVAdd1;
		piVar5[1] = idata;
		piVar5[2] = iVar3;
		piVar5[3] = iVar4;
		h = (ItemStruct *)&pIVar6->_iSeed;
		piVar2 = piVar5 + 4;
	} while (h != (ItemStruct *)&plr[p].HoldItem._iMinMag);
	idata = pIVar6->_ivalue;
	piVar5[4] = h->_iVAdd1;
	piVar5[5] = idata;
	plr[p]._pNumInv = plr[p]._pNumInv + 1;
	plr[p].InvGrid[0x1e] = (char)plr[p]._pNumInv;
	CalcPlrItemVals__FiUc(p,'\0');
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ItemSpaceOk__Fii(int i /*$a2*/, int j /*$a1*/)
 // line 1269, offset 0x8003d1d8
	/* begin block 1 */
		// Start line: 1270
		// Start offset: 0x8003D1D8
		// Variables:
	// 		int pn; // $v0
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x8003D4A8
	// End Line: 1299

	/* begin block 2 */
		// Start line: 3084
	/* end block 2 */
	// End Line: 3085

uchar ItemSpaceOk__Fii(int i,int j)

{
	bool bVar1;
	uint uVar2;
	uint uVar3;
	
	if (((uint)i < 0x70) && ((uint)j < 0x70)) {
		if (dung_map[i * 0x6c + j].dMonster != 0) {
			return '\0';
		}
		if (dung_map[i * 0x6c + j].dPlayer != '\0') {
			return '\0';
		}
		if (dung_map[i * 0x6c + j].dItem != '\0') {
			return '\0';
		}
		uVar2 = SEXT14(dung_map[i * 0x6c + j].dObject);
		if (uVar2 != 0) {
			uVar3 = uVar2 - 1;
			if ((int)uVar2 < 1) {
				uVar3 = ~uVar2;
			}
			if (object[uVar3]._oSolidFlag != '\0') {
				return '\0';
			}
		}
		if ((0 < (int)dung_map[(i + 1) * 0x6c + j + 1].dObject) &&
			 (object[(int)dung_map[(i + 1) * 0x6c + j + 1].dObject + -1]._oSelFlag != '\0')) {
			return '\0';
		}
		if (((int)dung_map[(i + 1) * 0x6c + j + 1].dObject < 0) &&
			 (object[~(int)dung_map[(i + 1) * 0x6c + j + 1].dObject]._oSelFlag != '\0')) {
			return '\0';
		}
		if (0 < (int)dung_map[(i + 1) * 0x6c + j].dObject) {
			if (((0 < (int)dung_map[i * 0x6c + j + 1].dObject) &&
					(object[(int)dung_map[(i + 1) * 0x6c + j].dObject + -1]._oSelFlag != '\0')) &&
				 (object[(int)dung_map[i * 0x6c + j + 1].dObject + -1]._oSelFlag != '\0'))
			goto LAB_8003d45c;
		}
		bVar1 = nSolidTable[(int)dung_map[i * 0x6c + j].dPiece] == '\0';
	}
	else {
LAB_8003d45c:
		bVar1 = false;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GetItemSpace__Fiic(int x /*$s5*/, int y /*$s6*/, char inum /*stack -56*/)
 // line 1306, offset 0x8003d4b0
	/* begin block 1 */
		// Start line: 1307
		// Start offset: 0x8003D4B0
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int xx; // $a1
	// 		int yy; // $s2
	// 		int rs; // $a0
	// 		unsigned char savail; // $s0
	/* end block 1 */
	// End offset: 0x8003D6A8
	// End Line: 1355

	/* begin block 2 */
		// Start line: 3158
	/* end block 2 */
	// End Line: 3159

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
	lVar3 = random__Fil(0xd,0xf);
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
		dung_map[iVar6 * 0x6c + j].dItem = inum + '\x01';
	}
	else {
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetSuperItemSpace__Fiic(int x /*$fp*/, int y /*stack -64*/, char inum /*stack -56*/)
 // line 1361, offset 0x8003d6dc
	/* begin block 1 */
		// Start line: 1362
		// Start offset: 0x8003D6DC
		// Variables:
	// 		int xx; // $s0
	// 		int yy; // $s2

		/* begin block 1.1 */
			// Start line: 1369
			// Start offset: 0x8003D734
			// Variables:
		// 		int l; // $s3

			/* begin block 1.1.1 */
				// Start line: 1369
				// Start offset: 0x8003D744

				/* begin block 1.1.1.1 */
					// Start line: 1370
					// Start offset: 0x8003D750
					// Variables:
				// 		int j; // $s5

					/* begin block 1.1.1.1.1 */
						// Start line: 1370
						// Start offset: 0x8003D750

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1371
							// Start offset: 0x8003D75C
							// Variables:
						// 		int i; // $s1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003D800
						// End Line: 1382
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003D800
					// End Line: 1382
				/* end block 1.1.1.1 */
				// End offset: 0x8003D808
				// End Line: 1383
			/* end block 1.1.1 */
			// End offset: 0x8003D808
			// End Line: 1383
		/* end block 1.1 */
		// End offset: 0x8003D810
		// End Line: 1384
	/* end block 1 */
	// End offset: 0x8003D810
	// End Line: 1384

	/* begin block 2 */
		// Start line: 3286
	/* end block 2 */
	// End Line: 3287

void GetSuperItemSpace__Fiic(int x,int y,char inum)

{
	uchar uVar1;
	int i;
	int iVar2;
	int j;
	int iVar3;
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
						dung_map[i * 0x6c + j].dItem = inum + '\x01';
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
 // line 1390, offset 0x8003d844
	/* begin block 1 */
		// Start line: 1391
		// Start offset: 0x8003D844

		/* begin block 1.1 */
			// Start line: 1391
			// Start offset: 0x8003D844
			// Variables:
		// 		int l; // $s1

			/* begin block 1.1.1 */
				// Start line: 1393
				// Start offset: 0x8003D87C

				/* begin block 1.1.1.1 */
					// Start line: 1394
					// Start offset: 0x8003D888
					// Variables:
				// 		int j; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 1394
						// Start offset: 0x8003D888

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1395
							// Start offset: 0x8003D894
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003D8D0
						// End Line: 1400
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003D8D0
					// End Line: 1400
				/* end block 1.1.1.1 */
				// End offset: 0x8003D8D8
				// End Line: 1401
			/* end block 1.1.1 */
			// End offset: 0x8003D8D8
			// End Line: 1401
		/* end block 1.1 */
		// End offset: 0x8003D8E0
		// End Line: 1402
	/* end block 1 */
	// End offset: 0x8003D8E0
	// End Line: 1402

	/* begin block 2 */
		// Start line: 3353
	/* end block 2 */
	// End Line: 3354

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
 // line 1408, offset 0x8003d90c
	/* begin block 1 */
		// Start line: 1409
		// Start offset: 0x8003D90C
		// Variables:
	// 		int v; // $a0
	/* end block 1 */
	// End offset: 0x8003D9BC
	// End Line: 1415

	/* begin block 2 */
		// Start line: 3392
	/* end block 2 */
	// End Line: 3393

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
 // line 1421, offset 0x8003d9c4
	/* begin block 1 */
		// Start line: 1422
		// Start offset: 0x8003D9C4
		// Variables:
	// 		int rv; // $a1
	// 		int s; // $v1
	// 		int bs; // $s0
	/* end block 1 */
	// End offset: 0x8003DC10
	// End Line: 1467

	/* begin block 2 */
		// Start line: 3417
	/* end block 2 */
	// End Line: 3418

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
	lVar3 = random__Fil(0xe,0x25);
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
			if (gbMaxPlayers == '\x01') {
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
	item[i]._iSpell = iVar8;
	item[i]._iIName = (ushort)iVar5;
	item[i]._iMinMag = (uchar)(&spelldata)[iVar8].sMinInt;
	item[i]._ivalue = item[i]._ivalue + (&spelldata)[iVar8].sBookCost;
	item[i]._iIvalue = item[i]._iIvalue + (&spelldata)[iVar8].sBookCost;
	if ((&spelldata)[iVar8].sType == '\0') {
		item[i]._iCurs = 0x57;
	}
	uVar1 = (&spelldata)[iVar8].sType;
	if (uVar1 == '\x01') {
		item[i]._iCurs = 0x58;
		uVar1 = (&spelldata)[iVar8].sType;
	}
	if (uVar1 == '\x02') {
		item[i]._iCurs = 0x56;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetStaffPower__FiiiUc(int i /*$s2*/, int lvl /*$s3*/, int bs /*$a2*/, unsigned char onlygood /*$s0*/)
 // line 1473, offset 0x8003dc2c
	/* begin block 1 */
		// Start line: 1474
		// Start offset: 0x8003DC2C
		// Variables:
	// 		int l[256]; // stack offset -1176
	// 		int nl; // $a1
	// 		int j; // $a2
	// 		int preidx; // $s1
	// 		char istr[128]; // stack offset -152
	// 		unsigned char addok; // $v0
	/* end block 1 */
	// End offset: 0x8003DDFC
	// End Line: 1534

	/* begin block 2 */
		// Start line: 3522
	/* end block 2 */
	// End Line: 3523

void GetStaffPower__FiiiUc(int i,int lvl,int bs,uchar onlygood)

{
	int *piVar1;
	bool bVar2;
	long lVar3;
	int iVar4;
	int *piVar5;
	int *piVar6;
	int v;
	int iVar7;
	int iVar8;
	int local_498 [288];
	
	lVar3 = random__Fil(0xf,10);
	if ((lVar3 == 0) || (onlygood != '\0')) {
		v = 0;
		iVar8 = 0;
		if (PL_Prefix[0].PLPower != -1) {
			iVar4 = 0;
			piVar5 = local_498;
			iVar7 = v;
			do {
				piVar6 = piVar5;
				v = iVar7;
				if (((*(uint *)((int)&PL_Prefix[0].PLIType + iVar4) & 0x100) != 0) &&
					 (piVar6 = piVar5, v = iVar7, (int)(&PL_Prefix[0].PLMinLvl)[iVar4] <= lvl)) {
					bVar2 = true;
					if (onlygood != '\0') {
						bVar2 = (&PL_Prefix[0].PLOk)[iVar4] != '\0';
					}
					piVar6 = piVar5;
					v = iVar7;
					if (bVar2) {
						*piVar5 = iVar8;
						piVar6 = piVar5 + 1;
						v = iVar7 + 1;
						if ((&PL_Prefix[0].PLDouble)[iVar4] != '\0') {
							*piVar6 = iVar8;
							piVar6 = piVar5 + 2;
							v = iVar7 + 2;
						}
					}
				}
				piVar1 = (int *)((int)&PL_Prefix[1].PLPower + iVar4);
				iVar8 = iVar8 + 1;
				iVar4 = iVar4 + 0x28;
				piVar5 = piVar6;
				iVar7 = v;
			} while (*piVar1 != -1);
		}
		if (v != 0) {
			lVar3 = random__Fil(0x10,v);
			v = local_498[lVar3];
			item[i]._iMagical = '\x01';
			SaveItemPower__Fiiiiiii
								(i,PL_Prefix[v].PLPower,PL_Prefix[v].PLParam1,PL_Prefix[v].PLParam2,
								 PL_Prefix[v].PLMinVal,PL_Prefix[v].PLMaxVal,PL_Prefix[v].PLMultVal);
			item[i]._iPrePower = (char)v;
		}
	}
	CalcItemValue__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetStaffSpell__FiiUc(int i /*$s4*/, int lvl /*$s5*/, unsigned char onlygood /*$s6*/)
 // line 1541, offset 0x8003de1c
	/* begin block 1 */
		// Start line: 1542
		// Start offset: 0x8003DE1C
		// Variables:
	// 		int rv; // $a1
	// 		int s; // $v1
	// 		int l; // $s0
	// 		int bs; // $s3
	// 		int maxc; // $a1
	// 		int minc; // $s1

		/* begin block 1.1 */
			// Start line: 1542
			// Start offset: 0x8003DE1C

			/* begin block 1.1.1 */
				// Start line: 1553
				// Start offset: 0x8003DE88
				// Variables:
			// 		int v; // $t0
			/* end block 1.1.1 */
			// End offset: 0x8003E0A4
			// End Line: 1610
		/* end block 1.1 */
		// End offset: 0x8003E0A4
		// End Line: 1610
	/* end block 1 */
	// End offset: 0x8003E0A4
	// End Line: 1610

	/* begin block 2 */
		// Start line: 3670
	/* end block 2 */
	// End Line: 3671

void GetStaffSpell__FiiUc(int i,int lvl,uchar onlygood)

{
	short sVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int minlvl;
	int bs;
	
	bs = 0;
	lVar2 = random__Fil(0x11,4);
	minlvl = lvl >> 1;
	if (lVar2 == 0) {
		GetItemPower__FiiilUc(i,minlvl,lvl,0x100,(uint)onlygood);
	}
	else {
		if (minlvl == 0) {
			minlvl = 1;
		}
		lVar2 = random__Fil(0x12,0x25);
		iVar6 = lVar2 + 1;
		iVar4 = 1;
		if (0 < iVar6) {
			iVar5 = 0x34;
			do {
				iVar3 = *(int *)((int)&spelldata.sStaffLvl + iVar5);
				if ((iVar3 != -1) && (iVar3 <= minlvl)) {
					iVar6 = iVar6 + -1;
					bs = iVar4;
				}
				iVar5 = iVar5 + 0x34;
				iVar4 = iVar4 + 1;
				if (gbMaxPlayers == '\x01') {
					if (iVar4 == 0x20) {
						iVar5 = 0x6b4;
						iVar4 = 0x21;
					}
					if (iVar4 == 0x22) {
						iVar5 = 0x71c;
						iVar4 = 0x23;
					}
				}
				if (0x24 < iVar4) {
					iVar5 = 0x34;
					iVar4 = 1;
					iVar6 = iVar6 + -1;
					bs = 1;
				}
			} while (0 < iVar6);
		}
		if (0x24 < bs) {
			DBG_Error((char *)0x0,"source/ITEMS.cpp",0x633);
		}
		if ((&spelldata)[bs].sNameText == 0) {
			DBG_Error((char *)0x0,"source/ITEMS.cpp",0x634);
		}
		item[i]._iSpell = bs;
		minlvl = (&spelldata)[bs].sStaffMin;
		lVar2 = random__Fil(0x13,((&spelldata)[bs].sStaffMax - minlvl) + 1);
		sVar1 = (short)lVar2 + (short)minlvl;
		item[i]._iCharges = sVar1;
		item[i]._iMaxCharges = sVar1;
		sVar1 = item[i]._iCharges;
		item[i]._iMinMag = (uchar)(&spelldata)[bs].sMinInt;
		minlvl = ((&spelldata)[bs].sStaffCost * (int)sVar1) / 5;
		iVar4 = item[i]._ivalue;
		item[i]._iIvalue = item[i]._iIvalue + minlvl;
		item[i]._ivalue = iVar4 + minlvl;
		GetStaffPower__FiiiUc(i,lvl,bs,onlygood);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemAttrs__Fiii(int i /*$s5*/, int idata /*$s2*/, int lvl /*$s6*/)
 // line 1650, offset 0x8003e0d0
	/* begin block 1 */
		// Start line: 1651
		// Start offset: 0x8003E0D0
		// Variables:
	// 		int rndv; // $s4
	/* end block 1 */
	// End offset: 0x8003E5F0
	// End Line: 1741

	/* begin block 2 */
		// Start line: 3903
	/* end block 2 */
	// End Line: 3904

void GetItemAttrs__Fiii(int i,int idata,int lvl)

{
	byte bVar1;
	byte bVar2;
	byte bVar3;
	char cVar4;
	char cVar5;
	byte bVar6;
	byte bVar7;
	uchar uVar8;
	ushort uVar9;
	short sVar10;
	long lVar11;
	long lVar12;
	undefined *puVar13;
	
	puVar13 = (undefined *)0x0;
	bVar1 = (&AllItemsList)[idata].iMaxAC;
	bVar2 = (&AllItemsList)[idata].iMinAC;
	bVar3 = (&AllItemsList)[idata].iCurs;
	uVar9 = (&AllItemsList)[idata].iName;
	cVar4 = (&AllItemsList)[idata].iLoc;
	cVar5 = (&AllItemsList)[idata].iClass;
	bVar6 = (&AllItemsList)[idata].iMinDam;
	bVar7 = (&AllItemsList)[idata].iMaxDam;
	item[i]._itype = (short)(&AllItemsList)[idata].itype;
	item[i]._iCurs = (ushort)bVar3;
	item[i]._iName = uVar9;
	item[i]._iIName = uVar9;
	item[i]._iLoc = cVar4;
	item[i]._iClass = cVar5;
	item[i]._iMinDam = (uint)bVar6;
	item[i]._iMaxDam = (uint)bVar7;
	lVar11 = random__Fil(0x14,((uint)bVar1 - (uint)bVar2) + 1);
	lVar12 = (&AllItemsList)[idata].iFlags;
	bVar1 = (&AllItemsList)[idata].iMiscId;
	bVar3 = (&AllItemsList)[idata].iSpell;
	uVar9 = (&AllItemsList)[idata].iValue;
	bVar6 = (&AllItemsList)[idata].iDurability;
	cVar4 = (&AllItemsList)[idata].iMinStr;
	uVar8 = (&AllItemsList)[idata].iMinMag;
	cVar5 = (&AllItemsList)[idata].iMinDex;
	item[i]._iAC = (ushort)bVar2 + (short)lVar11;
	item[i]._iMagical = '\0';
	item[i]._iVAdd1 = 0;
	item[i]._iVMult1 = 0;
	item[i]._iVAdd2 = 0;
	item[i]._iVMult2 = 0;
	item[i]._iPLDam = 0;
	item[i]._iPLToHit = 0;
	item[i]._iPLAC = '\0';
	item[i]._iPLStr = '\0';
	item[i]._iPLMag = '\0';
	item[i]._iPLDex = '\0';
	item[i]._iPLVit = '\0';
	item[i]._iCharges = 0;
	item[i]._iMaxCharges = 0;
	item[i]._iFlags = lVar12;
	item[i]._iMiscId = (ushort)bVar1;
	item[i]._iSpell = (uint)bVar3;
	item[i]._ivalue = (uint)uVar9;
	item[i]._iIvalue = (uint)uVar9;
	item[i]._iDurability = (uint)bVar6;
	item[i]._iMaxDur = (uint)bVar6;
	item[i]._iMinStr = cVar4;
	item[i]._iMinMag = uVar8;
	item[i]._iMinDex = cVar5;
	item[i]._iPLFR = '\0';
	sVar10 = item[i]._iMiscId;
	item[i]._iPrePower = -1;
	item[i]._iSufPower = -1;
	item[i]._iPLLR = '\0';
	item[i]._iPLMR = '\0';
	item[i].IDidx = (short)idata;
	item[i]._iPLDamMod = 0;
	item[i]._iPLGetHit = 0;
	item[i]._iPLLight = 0;
	item[i]._iSplLvlAdd = '\0';
	item[i]._iRequest = '\0';
	item[i]._iFMinDam = 0;
	item[i]._iFMaxDam = 0;
	item[i]._iLMinDam = 0;
	item[i]._iLMaxDam = 0;
	item[i]._iPLEnAc = 0;
	item[i]._iPLMana = 0;
	item[i]._iPLHP = 0;
	if (sVar10 == 0x18) {
		GetBookSpell__Fii(i,lvl);
	}
	if (item[i]._itype == 0xb) {
		if (gnDifficulty == 0) {
			lVar11 = random__Fil(0x15,(uint)currlevel * 10);
			puVar13 = (undefined *)((uint)currlevel * 5 + lVar11);
		}
		if (gnDifficulty == 1) {
			lVar11 = random__Fil(0x15,((uint)currlevel + 0x10) * 10);
			puVar13 = (undefined *)(((uint)currlevel + 0x10) * 5 + lVar11);
		}
		if (gnDifficulty == 2) {
			lVar11 = random__Fil(0x15,((uint)currlevel + 0x20) * 10);
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
			sVar10 = 4;
			if (1000 < (int)puVar13) {
				sVar10 = 5;
			}
		}
		else {
			sVar10 = 6;
		}
		item[i]._iCurs = sVar10;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndPL__Fii(int param1 /*$s0*/, int param2 /*$a1*/)
 // line 1749, offset 0x8003e61c
	/* begin block 1 */
		// Start line: 1750
		// Start offset: 0x8003E61C
	/* end block 1 */
	// End offset: 0x8003E640
	// End Line: 1751

	/* begin block 2 */
		// Start line: 4241
	/* end block 2 */
	// End Line: 4242

int RndPL__Fii(int param1,int param2)

{
	long lVar1;
	
	lVar1 = random__Fil(0x16,(param2 - param1) + 1);
	return lVar1 + param1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PLVal__Fiiiii(int pv /*$a0*/, int p1 /*$a1*/, int p2 /*$a2*/, int minv /*$a3*/, int maxv /*stack 16*/)
 // line 1757, offset 0x8003e654
	/* begin block 1 */
		// Start line: 1758
		// Start offset: 0x8003E654
	/* end block 1 */
	// End offset: 0x8003E6C0
	// End Line: 1761

	/* begin block 2 */
		// Start line: 4258
	/* end block 2 */
	// End Line: 4259

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
 // line 1767, offset 0x8003e6c8
	/* begin block 1 */
		// Start line: 1768
		// Start offset: 0x8003E6C8
		// Variables:
	// 		int r; // $s3
	// 		int r2; // $s1
	/* end block 1 */
	// End offset: 0x8003FDC0
	// End Line: 2049

	/* begin block 2 */
		// Start line: 4278
	/* end block 2 */
	// End Line: 4279

void SaveItemPower__Fiiiiiii
							 (int i,int power,int param1,int param2,int minval,int maxval,int multval)

{
	char cVar1;
	int pv;
	int iVar2;
	char cVar3;
	short sVar4;
	uint uVar5;
	char cVar6;
	short sVar7;
	uint uVar8;
	int iVar9;
	
	iVar9 = 0;
	pv = RndPL__Fii(param1,param2);
	iVar2 = myplr;
	sVar4 = (short)param1;
	cVar6 = (char)pv;
	sVar7 = (short)pv;
	switch(power) {
	case 0:
		item[i]._iPLToHit = item[i]._iPLToHit + pv;
		iVar2 = i << 2;
		break;
	case 1:
		item[i]._iPLToHit = item[i]._iPLToHit - pv;
		iVar2 = i << 2;
		break;
	case 2:
		item[i]._iPLDam = item[i]._iPLDam + pv;
		iVar2 = i << 2;
		break;
	case 3:
		item[i]._iPLDam = item[i]._iPLDam - pv;
		iVar2 = i << 2;
		break;
	case 4:
		pv = RndPL__Fii(param1,param2);
		item[i]._iPLDam = item[i]._iPLDam + pv;
		if (param1 == 0x14) {
			iVar9 = RndPL__Fii(1,5);
		}
		if (param1 == 0x24) {
			iVar9 = RndPL__Fii(6,10);
		}
		if (param1 == 0x33) {
			iVar9 = RndPL__Fii(0xb,0xf);
		}
		if (param1 == 0x42) {
			iVar9 = RndPL__Fii(0x10,0x14);
		}
		if (param1 == 0x51) {
			iVar9 = RndPL__Fii(0x15,0x1e);
		}
		if (param1 == 0x60) {
			iVar9 = RndPL__Fii(0x1f,0x28);
		}
		if (param1 == 0x6f) {
			iVar9 = RndPL__Fii(0x29,0x32);
		}
		if (param1 == 0x7e) {
			iVar9 = RndPL__Fii(0x33,0x4b);
		}
		if (param1 == 0x97) {
			iVar9 = RndPL__Fii(0x4c,100);
		}
		item[i]._iPLToHit = item[i]._iPLToHit + iVar9;
		iVar2 = i << 2;
		break;
	case 5:
		item[i]._iPLDam = item[i]._iPLDam - pv;
		if (param1 == 0x19) {
			iVar9 = RndPL__Fii(1,5);
		}
		if (param1 == 0x32) {
			iVar9 = RndPL__Fii(6,10);
		}
		item[i]._iPLToHit = item[i]._iPLToHit - iVar9;
		iVar2 = i << 2;
		break;
	case 6:
		item[i]._iPLAC = item[i]._iPLAC + cVar6;
		iVar2 = i << 2;
		break;
	case 7:
		item[i]._iPLAC = item[i]._iPLAC - cVar6;
		iVar2 = i << 2;
		break;
	case 8:
		item[i]._iPLFR = item[i]._iPLFR + cVar6;
		iVar2 = i << 2;
		break;
	case 9:
		item[i]._iPLLR = item[i]._iPLLR + cVar6;
		iVar2 = i << 2;
		break;
	case 10:
		item[i]._iPLMR = item[i]._iPLMR + cVar6;
		iVar2 = i << 2;
		break;
	case 0xb:
		cVar1 = item[i]._iPLLR;
		item[i]._iPLFR = item[i]._iPLFR + cVar6;
		cVar3 = item[i]._iPLMR;
		item[i]._iPLLR = cVar1 + cVar6;
		cVar1 = item[i]._iPLFR;
		item[i]._iPLMR = cVar3 + cVar6;
		if (cVar1 < '\0') {
			item[i]._iPLFR = '\0';
		}
		if (item[i]._iPLLR < '\0') {
			item[i]._iPLLR = '\0';
		}
		iVar2 = i * 4;
		if (item[i]._iPLMR < '\0') {
			item[i]._iPLMR = '\0';
		}
		break;
	default:
		goto switchD_8003e740_caseD_c;
	case 0xe:
		item[i]._iSplLvlAdd = cVar6;
		iVar2 = i << 2;
		break;
	case 0xf:
		sVar4 = item[i]._iCharges * sVar4;
		item[i]._iCharges = sVar4;
		item[i]._iMaxCharges = sVar4;
		iVar2 = i << 2;
		break;
	case 0x10:
		uVar5 = item[i]._iFlags;
		item[i]._iFMinDam = param1;
		item[i]._iFMaxDam = param2;
		item[i]._iFlags = uVar5 | 0x10;
		iVar2 = i << 2;
		break;
	case 0x11:
		uVar5 = item[i]._iFlags;
		item[i]._iLMinDam = param1;
		item[i]._iLMaxDam = param2;
		item[i]._iFlags = uVar5 | 0x20;
		iVar2 = i << 2;
		break;
	case 0x13:
		item[i]._iPLStr = item[i]._iPLStr + cVar6;
		iVar2 = i << 2;
		break;
	case 0x14:
		item[i]._iPLStr = item[i]._iPLStr - cVar6;
		iVar2 = i << 2;
		break;
	case 0x15:
		item[i]._iPLMag = item[i]._iPLMag + cVar6;
		iVar2 = i << 2;
		break;
	case 0x16:
		item[i]._iPLMag = item[i]._iPLMag - cVar6;
		iVar2 = i << 2;
		break;
	case 0x17:
		item[i]._iPLDex = item[i]._iPLDex + cVar6;
		iVar2 = i << 2;
		break;
	case 0x18:
		item[i]._iPLDex = item[i]._iPLDex - cVar6;
		iVar2 = i << 2;
		break;
	case 0x19:
		item[i]._iPLVit = item[i]._iPLVit + cVar6;
		iVar2 = i << 2;
		break;
	case 0x1a:
		item[i]._iPLVit = item[i]._iPLVit - cVar6;
		iVar2 = i << 2;
		break;
	case 0x1b:
		cVar1 = item[i]._iPLMag;
		item[i]._iPLStr = item[i]._iPLStr + cVar6;
		cVar3 = item[i]._iPLDex;
		item[i]._iPLMag = cVar1 + cVar6;
		cVar3 = cVar3 + cVar6;
		cVar6 = item[i]._iPLVit + cVar6;
		goto LAB_8003f0a0;
	case 0x1c:
		cVar1 = item[i]._iPLMag;
		item[i]._iPLStr = item[i]._iPLStr - cVar6;
		cVar3 = item[i]._iPLDex;
		item[i]._iPLMag = cVar1 - cVar6;
		cVar3 = cVar3 - cVar6;
		cVar6 = item[i]._iPLVit - cVar6;
LAB_8003f0a0:
		item[i]._iPLDex = cVar3;
		item[i]._iPLVit = cVar6;
		iVar2 = i << 2;
		break;
	case 0x1d:
		item[i]._iPLGetHit = item[i]._iPLGetHit + pv;
		iVar2 = i << 2;
		break;
	case 0x1e:
		item[i]._iPLGetHit = item[i]._iPLGetHit - pv;
		iVar2 = i << 2;
		break;
	case 0x1f:
		item[i]._iPLHP = item[i]._iPLHP + sVar7 * 0x40;
		iVar2 = i << 2;
		break;
	case 0x20:
		item[i]._iPLHP = item[i]._iPLHP + sVar7 * -0x40;
		iVar2 = i << 2;
		break;
	case 0x21:
		drawmanaflag = '\x01';
		item[i]._iPLMana = item[i]._iPLMana + sVar7 * 0x40;
		iVar2 = i << 2;
		break;
	case 0x22:
		drawmanaflag = '\x01';
		item[i]._iPLMana = item[i]._iPLMana + sVar7 * -0x40;
		iVar2 = i << 2;
		break;
	case 0x23:
		iVar2 = (item[i]._iMaxDur * pv) / 100;
		iVar9 = item[i]._iDurability;
		item[i]._iMaxDur = item[i]._iMaxDur + iVar2;
		item[i]._iDurability = iVar9 + iVar2;
		iVar2 = i << 2;
		break;
	case 0x24:
		iVar2 = item[i]._iMaxDur - (item[i]._iMaxDur * pv) / 100;
		item[i]._iMaxDur = iVar2;
		if (iVar2 < 1) {
			item[i]._iMaxDur = 1;
		}
		item[i]._iDurability = item[i]._iMaxDur;
		iVar2 = i << 2;
		break;
	case 0x25:
		item[i]._iDurability = 0xff;
		item[i]._iMaxDur = 0xff;
		iVar2 = i << 2;
		break;
	case 0x26:
		item[i]._iPLLight = item[i]._iPLLight + param1;
		iVar2 = i << 2;
		break;
	case 0x27:
		item[i]._iPLLight = item[i]._iPLLight - param1;
		iVar2 = i << 2;
		break;
	case 0x2a:
		uVar5 = item[i]._iFlags;
		item[i]._iFMinDam = param1;
		item[i]._iFMaxDam = param2;
		item[i]._iFlags = uVar5 | 8;
		iVar2 = i << 2;
		break;
	case 0x2b:
		uVar5 = item[i]._iFlags;
		item[i]._iLMinDam = param1;
		item[i]._iLMaxDam = param2;
		uVar8 = 0x2000000;
		goto LAB_8003fa04;
	case 0x2c:
		item[i]._iCurs = sVar4;
		iVar2 = i << 2;
		break;
	case 0x2d:
		uVar5 = item[i]._iFlags;
		uVar8 = 0x4000000;
		goto LAB_8003fa04;
	case 0x2e:
		drawmanaflag = '\x01';
		uVar5 = item[i]._iFlags;
		uVar8 = 0x8000000;
		goto LAB_8003fa04;
	case 0x2f:
		item[i]._iFlags = item[i]._iFlags | 0x100;
		iVar2 = i << 2;
		break;
	case 0x34:
		uVar5 = item[i]._iFlags;
		uVar8 = 0x10000000;
		goto LAB_8003fa04;
	case 0x35:
		item[i]._iFlags = item[i]._iFlags | 0x800;
		iVar2 = i << 2;
		break;
	case 0x36:
		item[i]._iFlags = item[i]._iFlags | 0x1000;
		iVar2 = i << 2;
		break;
	case 0x37:
		if (param1 == 3) {
			item[i]._iFlags = item[i]._iFlags | 0x2000;
		}
		if (param1 == 5) {
			item[i]._iFlags = item[i]._iFlags | 0x4000;
		}
		drawmanaflag = '\x01';
		iVar2 = i << 2;
		break;
	case 0x38:
		if (param1 == 3) {
			item[i]._iFlags = item[i]._iFlags | 0x8000;
		}
		if (param1 == 5) {
			item[i]._iFlags = item[i]._iFlags | 0x10000;
		}
		drawhpflag = '\x01';
		iVar2 = i << 2;
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
		iVar2 = i * 4;
		if (param1 != 4) break;
		uVar5 = item[i]._iFlags;
		uVar8 = 0x100000;
		goto LAB_8003fa04;
	case 0x3b:
		if (param1 == 1) {
			item[i]._iFlags = item[i]._iFlags | 0x200000;
		}
		if (param1 == 2) {
			item[i]._iFlags = item[i]._iFlags | 0x400000;
		}
		iVar2 = i * 4;
		if (param1 != 3) break;
		uVar5 = item[i]._iFlags;
		uVar8 = 0x800000;
		goto LAB_8003fa04;
	case 0x3c:
		uVar5 = item[i]._iFlags;
		uVar8 = 0x1000000;
		goto LAB_8003fa04;
	case 0x3d:
		item[i]._iPLDamMod = item[i]._iPLDamMod + pv;
		iVar2 = i << 2;
		break;
	case 0x3e:
		item[i]._iFlags = item[i]._iFlags | 4;
		iVar2 = i << 2;
		break;
	case 0x3f:
		item[i]._iMinDam = param1;
		item[i]._iMaxDam = param2;
		iVar2 = i << 2;
		break;
	case 0x40:
		item[i]._iDurability = param1;
		item[i]._iMaxDur = param1;
		iVar2 = i << 2;
		break;
	case 0x41:
		item[i]._iMinStr = '\0';
		iVar2 = i << 2;
		break;
	case 0x42:
		item[i]._iSpell = param1;
		item[i]._iCharges = sVar4;
		item[i]._iMaxCharges = (short)param2;
		iVar2 = i << 2;
		break;
	case 0x43:
		uVar5 = item[i]._iFlags;
		uVar8 = 0x80000;
		goto LAB_8003fa04;
	case 0x44:
		item[i]._iLoc = '\x01';
		iVar2 = i << 2;
		break;
	case 0x45:
		uVar5 = item[i]._iFlags;
		uVar8 = 0x40000000;
		goto LAB_8003fa04;
	case 0x46:
		uVar5 = item[i]._iFlags;
		uVar8 = 0x80000000;
LAB_8003fa04:
		item[i]._iFlags = uVar5 | uVar8;
		iVar2 = i << 2;
		break;
	case 0x48:
		item[i]._iFlags = item[i]._iFlags | 0x40;
		iVar2 = i << 2;
		break;
	case 0x49:
		item[i]._iFlags = item[i]._iFlags | 2;
		iVar2 = i << 2;
		break;
	case 0x4a:
		item[i]._iFlags = item[i]._iFlags | 1;
		iVar2 = i << 2;
		break;
	case 0x4b:
		item[i]._iAC = sVar7;
		iVar2 = i << 2;
		break;
	case 0x4c:
		sVar7 = (short)plr[myplr]._pIBonusAC + (short)plr[myplr]._pIAC;
		item[i]._iPLHP = sVar7;
		sVar4 = plr[iVar2]._pDexterity;
		item[i]._iPLHP = (sVar7 + ((sVar4 / 5 + ((sVar4 >> 0x10) >> 0xf)) - (sVar4 >> 0xf))) * 0x40;
		iVar2 = i << 2;
		break;
	case 0x4d:
		sVar4 = (short)((uint)plr[myplr]._pMaxManaBase >> 0x10);
		item[i]._iAC = item[i]._iAC +
									 (((short)((plr[myplr]._pMaxManaBase >> 6) / 10) + ((sVar4 >> 6) >> 0xf)) -
									 (sVar4 >> 0xf));
		iVar2 = i << 2;
		break;
	case 0x4e:
		iVar9 = 0x1e - (uint)(byte)plr[myplr]._pLevel;
		item[i]._iPLFR = (char)iVar9;
		iVar2 = i << 2;
		if (-1 < iVar9 * 0x1000000) break;
		item[i]._iPLFR = '\0';
		goto switchD_8003e740_caseD_c;
	case 0x4f:
		item[i]._iAC = item[i]._iAC - sVar7;
		iVar2 = i << 2;
	}
	goto LAB_8003fd10;
switchD_8003e740_caseD_c:
	iVar2 = i << 2;
LAB_8003fd10:
	iVar2 = iVar2 * 4 + i * 3;
	if (((&item[0]._iVAdd1)[iVar2 * 2] == 0) && ((&item[0]._iVMult1)[iVar2 * 2] == 0)) {
		pv = PLVal__Fiiiii(pv,param1,param2,minval,maxval);
		(&item[0]._iVAdd1)[iVar2 * 2] = pv;
		(&item[0]._iVMult1)[iVar2 * 2] = multval;
	}
	else {
		iVar2 = PLVal__Fiiiii(pv,param1,param2,minval,maxval);
		item[i]._iVAdd2 = iVar2;
		item[i]._iVMult2 = multval;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemPower__FiiilUc(int i /*$s2*/, int minlvl /*stack -56*/, int maxlvl /*stack -48*/, long flgs /*$s3*/, int onlygood /*stack 16*/)
 // line 2056, offset 0x8003fdf4
	/* begin block 1 */
		// Start line: 2057
		// Start offset: 0x8003FDF4
		// Variables:
	// 		int pre; // $s0
	// 		int post; // $s7
	// 		int l[256]; // stack offset -1208
	// 		int nl; // $a1
	// 		int j; // $a3
	// 		int preidx; // $s4
	// 		int sufidx; // $fp
	// 		char istr[128]; // stack offset -184
	// 		unsigned char goe; // $s5
	/* end block 1 */
	// End offset: 0x80040228
	// End Line: 2155

	/* begin block 2 */
		// Start line: 4886
	/* end block 2 */
	// End Line: 4887

void GetItemPower__FiiilUc(int i,int minlvl,int maxlvl,long flgs,int onlygood)

{
	long lVar1;
	long lVar2;
	long lVar3;
	int *piVar4;
	int *piVar5;
	int iVar6;
	int v;
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
	lVar1 = random__Fil(0x17,4);
	lVar2 = random__Fil(0x17,3);
	if ((lVar1 != 0) && (lVar2 == 0)) {
		lVar3 = random__Fil(0x17,2);
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
	if (((char)onlygood == '\0') && (lVar3 = random__Fil(0,3), lVar3 != 0)) {
		onlygood._0_1_ = '\x01';
	}
	v = 0;
	if (lVar1 == 0) {
		iVar9 = 0;
		if (PL_Prefix[0].PLPower != -1) {
			piVar8 = &PL_Prefix[0].PLPower;
			iVar7 = 0;
			piVar4 = local_4b8;
			iVar6 = v;
			do {
				piVar5 = piVar4;
				v = iVar6;
				if ((((((*(uint *)((int)&PL_Prefix[0].PLIType + iVar7) & flgs) != 0) &&
							(piVar5 = piVar4, v = iVar6, local_38 <= (int)(&PL_Prefix[0].PLMinLvl)[iVar7])) &&
						 (piVar5 = piVar4, v = iVar6, (int)(&PL_Prefix[0].PLMinLvl)[iVar7] <= local_30)) &&
						(((char)onlygood == '\0' ||
						 (piVar5 = piVar4, v = iVar6, (&PL_Prefix[0].PLOk)[iVar7] != '\0')))) &&
					 ((flgs != 0x100 || (piVar5 = piVar4, v = iVar6, *piVar8 != 0xf)))) {
					*piVar4 = iVar9;
					piVar5 = piVar4 + 1;
					v = iVar6 + 1;
					if ((&PL_Prefix[0].PLDouble)[iVar7] != '\0') {
						*piVar5 = iVar9;
						piVar5 = piVar4 + 2;
						v = iVar6 + 2;
					}
				}
				piVar8 = piVar8 + 10;
				iVar7 = iVar7 + 0x28;
				iVar9 = iVar9 + 1;
				piVar4 = piVar5;
				iVar6 = v;
			} while (*piVar8 != -1);
		}
		if (v != 0) {
			lVar1 = random__Fil(0x17,v);
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
			iVar6 = 0;
			do {
				if (((((*(uint *)((int)&PL_Suffix[0].PLIType + iVar6) & flgs) != 0) &&
						 (local_38 <= (int)(&PL_Suffix[0].PLMinLvl)[iVar6])) &&
						(((int)(&PL_Suffix[0].PLMinLvl)[iVar6] <= local_30 &&
						 ((bVar11 | (&PL_Suffix[0].PLGOE)[iVar6]) != 0x11)))) &&
					 (((char)onlygood == '\0' || ((&PL_Suffix[0].PLOk)[iVar6] != '\0')))) {
					*piVar8 = iVar9;
					piVar8 = piVar8 + 1;
					v = v + 1;
				}
				piVar4 = (int *)((int)&PL_Suffix[1].PLPower + iVar6);
				iVar9 = iVar9 + 1;
				iVar6 = iVar6 + 0x28;
			} while (*piVar4 != -1);
		}
		if (v != 0) {
			lVar1 = random__Fil(0x17,v);
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
 // line 2161, offset 0x8004025c
	/* begin block 1 */
		// Start line: 2162
		// Start offset: 0x8004025C
	/* end block 1 */
	// End offset: 0x80040348
	// End Line: 2190

	/* begin block 2 */
		// Start line: 5119
	/* end block 2 */
	// End Line: 5120

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
		goto switchD_800402dc_caseD_a;
	case 0xb:
	case 0xc:
		flgs = 1;
	}
	GetItemPower__FiiilUc(i,minlvl,maxlvl,flgs,onlygood & 0xff);
switchD_800402dc_caseD_a:
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupItem__Fi(int i /*$a0*/)
 // line 2197, offset 0x80040358
	/* begin block 1 */
		// Start line: 2198
		// Start offset: 0x80040358
		// Variables:
	// 		int it; // $v0
	/* end block 1 */
	// End offset: 0x80040464
	// End Line: 2225

	/* begin block 2 */
		// Start line: 5198
	/* end block 2 */
	// End Line: 5199

void SetupItem__Fi(int i)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	
	bVar1 = ItemCAnimTbl[(int)item[i]._iCurs];
	item[i]._iIdentified = '\0';
	item[i]._iPostDraw = '\0';
	item[i]._isin = '\0';
	iVar3 = myplr;
	item[i].ItemFrame = Item2Frm[(uint)bVar1];
	if (plr[iVar3].pLvlLoad == '\0') {
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
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndItem__Fi(int m /*$a0*/)
 // line 2233, offset 0x8004046c
	/* begin block 1 */
		// Start line: 2234
		// Start offset: 0x8004046C
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a1
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x8004069C
	// End Line: 2270

	/* begin block 2 */
		// Start line: 5280
	/* end block 2 */
	// End Line: 5281

int RndItem__Fi(int m)

{
	char *pcVar1;
	ushort uVar2;
	int iVar3;
	uchar uVar4;
	uint uVar5;
	long lVar6;
	uchar uVar7;
	int *piVar8;
	int v;
	int iVar9;
	int iVar10;
	int local_808 [512];
	
	uVar2 = (monster[m].MData)->mTreasure;
	if ((uVar2 & 0x8000) == 0) {
		uVar5 = 0;
		if ((uVar2 & 0x4000) == 0) {
			lVar6 = random__Fil(0x18,100);
			if (lVar6 < 0x29) {
				lVar6 = random__Fil(0x18,100);
				uVar4 = gbMaxPlayers;
				iVar3 = FePlayerNo;
				v = 0;
				if (lVar6 < 0x1a) {
					iVar10 = 0;
					if (AllItemsList.iLoc != -1) {
						piVar8 = local_808;
						iVar9 = 0;
						do {
							if (((&AllItemsList.iRnd)[iVar9] == '\x02') &&
								 ((&AllItemsList.iMinMLvl)[iVar9] <= monster[m].mLevel)) {
								*piVar8 = iVar10;
								piVar8 = piVar8 + 1;
								v = v + 1;
							}
							if (((&AllItemsList.iRnd)[iVar9] != '\0') &&
								 ((&AllItemsList.iMinMLvl)[iVar9] <= monster[m].mLevel)) {
								*piVar8 = iVar10;
								piVar8 = piVar8 + 1;
								v = v + 1;
							}
							uVar7 = (&AllItemsList.iSpell)[iVar9];
							if ((uVar7 == ' ') && (uVar4 == '\x01')) {
								piVar8 = piVar8 + -1;
								v = v + -1;
								uVar7 = (&AllItemsList.iSpell)[iVar9];
							}
							if ((uVar7 == '\"') && (uVar4 == '\x01')) {
								piVar8 = piVar8 + -1;
								v = v + -1;
							}
							uVar7 = (&AllItemsList.iSpell)[iVar9];
							if ((uVar7 == '\x17') && (iVar3 != 0)) {
								piVar8 = piVar8 + -1;
								v = v + -1;
								uVar7 = (&AllItemsList.iSpell)[iVar9];
							}
							if ((uVar7 == '\n') && (iVar3 != 0)) {
								piVar8 = piVar8 + -1;
								v = v + -1;
							}
							pcVar1 = &ItemDataStruct_80121384.iLoc + iVar9;
							iVar10 = iVar10 + 1;
							iVar9 = iVar9 + 0x20;
						} while (*pcVar1 != -1);
					}
					lVar6 = random__Fil(0x18,v);
					uVar5 = local_808[lVar6] + 1;
				}
				else {
					uVar5 = 1;
				}
			}
			else {
				uVar5 = 0;
			}
		}
	}
	else {
		uVar5 = ~((uint)uVar2 & 0xfff);
	}
	return uVar5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndUItem__Fi(int m /*$a0*/)
 // line 2277, offset 0x800406b0
	/* begin block 1 */
		// Start line: 2278
		// Start offset: 0x800406B0
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a1
	// 		int i; // $t0
	// 		unsigned char okflag; // $a2
	/* end block 1 */
	// End offset: 0x800408E0
	// End Line: 2309

	/* begin block 2 */
		// Start line: 5380
	/* end block 2 */
	// End Line: 5381

int RndUItem__Fi(int m)

{
	char *pcVar1;
	char cVar2;
	ushort uVar3;
	bool bVar4;
	int iVar5;
	uchar uVar6;
	uint uVar7;
	uint uVar8;
	uchar uVar9;
	long v;
	int iVar10;
	uint local_808 [512];
	
	uVar6 = gbMaxPlayers;
	iVar5 = FePlayerNo;
	if (((m == -1) || (uVar3 = (monster[m].MData)->mTreasure, (uVar3 & 0x8000) == 0)) ||
		 (gbMaxPlayers != '\x01')) {
		v = 0;
		uVar7 = 0;
		if (AllItemsList.iLoc != -1) {
			uVar8 = (uint)currlevel;
			iVar10 = 0;
			do {
				if (m == -1) {
					bVar4 = (int)(uVar8 << 1) < (int)(&AllItemsList.iMinMLvl)[iVar10];
				}
				else {
					bVar4 = monster[m].mLevel < (&AllItemsList.iMinMLvl)[iVar10];
				}
				cVar2 = (&AllItemsList.itype)[iVar10];
				bVar4 = (&AllItemsList.iMiscId)[iVar10] == '\x18' ||
								cVar2 != '\x0e' &&
								(cVar2 != '\v' &&
								(cVar2 != '\0' && (!bVar4 && (&AllItemsList.iRnd)[iVar10] != '\0')));
				uVar9 = (&AllItemsList.iSpell)[iVar10];
				if ((uVar9 == ' ') && (uVar6 == '\x01')) {
					bVar4 = false;
					uVar9 = (&AllItemsList.iSpell)[iVar10];
				}
				if ((uVar9 == '\"') && (uVar6 == '\x01')) {
					bVar4 = false;
				}
				uVar9 = (&AllItemsList.iSpell)[iVar10];
				if ((uVar9 == '\x17') && (iVar5 != 0)) {
					bVar4 = false;
					uVar9 = (&AllItemsList.iSpell)[iVar10];
				}
				if ((uVar9 == '\n') && (iVar5 != 0)) {
					bVar4 = false;
				}
				if (bVar4) {
					local_808[v] = uVar7;
					v = v + 1;
				}
				pcVar1 = &ItemDataStruct_80121384.iLoc + iVar10;
				uVar7 = uVar7 + 1;
				iVar10 = iVar10 + 0x20;
			} while (*pcVar1 != -1);
		}
		v = random__Fil(0x19,v);
		uVar7 = local_808[v];
	}
	else {
		uVar7 = ~((uint)uVar3 & 0xfff);
	}
	return uVar7;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndAllItems__Fv()
 // line 2316, offset 0x800408f0
	/* begin block 1 */
		// Start line: 2317
		// Start offset: 0x800408F0
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a1
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x80040A54
	// End Line: 2340

	/* begin block 2 */
		// Start line: 5458
	/* end block 2 */
	// End Line: 5459

/* WARNING: Unknown calling convention yet parameter storage is locked */

int RndAllItems__Fv(void)

{
	char *pcVar1;
	uchar uVar2;
	long lVar3;
	int iVar4;
	uint uVar5;
	uchar uVar6;
	int iVar7;
	int v;
	int iVar8;
	int local_808 [512];
	
	lVar3 = random__Fil(0x1a,100);
	uVar2 = gbMaxPlayers;
	iVar4 = FePlayerNo;
	v = 0;
	if (lVar3 < 0x1a) {
		iVar8 = 0;
		if (AllItemsList.iLoc != -1) {
			uVar5 = (uint)currlevel;
			iVar7 = 0;
			do {
				if (((&AllItemsList.iRnd)[iVar7] != '\0') &&
					 ((int)(&AllItemsList.iMinMLvl)[iVar7] <= (int)(uVar5 << 1))) {
					local_808[v] = iVar8;
					v = v + 1;
				}
				uVar6 = (&AllItemsList.iSpell)[iVar7];
				if ((uVar6 == ' ') && (uVar2 == '\x01')) {
					v = v + -1;
					uVar6 = (&AllItemsList.iSpell)[iVar7];
				}
				if ((uVar6 == '\"') && (uVar2 == '\x01')) {
					v = v + -1;
				}
				uVar6 = (&AllItemsList.iSpell)[iVar7];
				if ((uVar6 == '\x17') && (iVar4 != 0)) {
					v = v + -1;
					uVar6 = (&AllItemsList.iSpell)[iVar7];
				}
				if ((uVar6 == '\n') && (iVar4 != 0)) {
					v = v + -1;
				}
				pcVar1 = &ItemDataStruct_80121384.iLoc + iVar7;
				iVar8 = iVar8 + 1;
				iVar7 = iVar7 + 0x20;
			} while (*pcVar1 != -1);
		}
		lVar3 = random__Fil(0x1a,v);
		iVar4 = local_808[lVar3];
	}
	else {
		iVar4 = 0;
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndTypeItems__Fii(int itype /*$a0*/, int imid /*$t2*/)
 // line 2347, offset 0x80040a64
	/* begin block 1 */
		// Start line: 2348
		// Start offset: 0x80040A64
		// Variables:
	// 		int ril[512]; // stack offset -2056
	// 		int ri; // $a1
	// 		int i; // $t1
	// 		unsigned char okflag; // $a2
	/* end block 1 */
	// End offset: 0x80040B54
	// End Line: 2363

	/* begin block 2 */
		// Start line: 5520
	/* end block 2 */
	// End Line: 5521

int RndTypeItems__Fii(int itype,int imid)

{
	char *pcVar1;
	bool bVar2;
	uint uVar3;
	long v;
	int iVar4;
	int *piVar5;
	int iVar6;
	int local_808 [512];
	
	v = 0;
	iVar6 = 0;
	if (AllItemsList.iLoc != -1) {
		uVar3 = (uint)currlevel;
		piVar5 = local_808;
		iVar4 = 0;
		do {
			bVar2 = (int)(&AllItemsList.itype)[iVar4] == itype &&
							((int)(&AllItemsList.iMinMLvl)[iVar4] <= (int)(uVar3 << 1) &&
							(&AllItemsList.iRnd)[iVar4] != '\0');
			if ((imid != -1) && ((uint)(&AllItemsList.iMiscId)[iVar4] != imid)) {
				bVar2 = false;
			}
			if (bVar2) {
				*piVar5 = iVar6;
				piVar5 = piVar5 + 1;
				v = v + 1;
			}
			pcVar1 = &ItemDataStruct_80121384.iLoc + iVar4;
			iVar6 = iVar6 + 1;
			iVar4 = iVar4 + 0x20;
		} while (*pcVar1 != -1);
	}
	v = random__Fil(0x1b,v);
	return local_808[v];
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckUnique__FiiiUc(int i /*$s1*/, int lvl /*$s3*/, int uper /*$s0*/, unsigned char recreate /*$s2*/)
 // line 2369, offset 0x80040b64
	/* begin block 1 */
		// Start line: 2370
		// Start offset: 0x80040B64
		// Variables:
	// 		int j; // $a0
	// 		int idata; // $v0
	// 		unsigned char uok[128]; // stack offset -152
	// 		int numu; // $s0
	/* end block 1 */
	// End offset: 0x80040CF4
	// End Line: 2404

	/* begin block 2 */
		// Start line: 5565
	/* end block 2 */
	// End Line: 5566

int CheckUnique__FiiiUc(int i,int lvl,int uper,uchar recreate)

{
	long lVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	int iVar5;
	char local_98 [128];
	
	lVar1 = random__Fil(0x1c,100);
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
					 ((recreate != '\0' || ((UniqueItemFlag[iVar2] == '\0' || (gbMaxPlayers != '\x01')))))) {
					local_98[iVar2] = '\x01';
					iVar5 = iVar5 + 1;
				}
				pcVar3 = pcVar3 + 0x54;
				iVar4 = iVar4 + 0x54;
				iVar2 = iVar2 + 1;
			} while (*pcVar3 != -1);
		}
		if (iVar5 == 0) {
			iVar2 = -1;
		}
		else {
			random__Fil(0x1d,10);
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
// void /*$ra*/ GetUniqueItem__Fii(int i /*$s1*/, int uid /*$s3*/)
 // line 2410, offset 0x80040d14
	/* begin block 1 */
		// Start line: 2411
		// Start offset: 0x80040D14
	/* end block 1 */
	// End offset: 0x80040F98
	// End Line: 2433

	/* begin block 2 */
		// Start line: 5657
	/* end block 2 */
	// End Line: 5658

void GetUniqueItem__Fii(int i,int uid)

{
	char cVar1;
	short sVar2;
	ushort uVar3;
	int iVar4;
	
	UniqueItemFlag[uid] = '\x01';
	SaveItemPower__Fiiiiiii
						(i,(int)UniqueItemList[uid].UIPower1,UniqueItemList[uid].UIParam1,
						 UniqueItemList[uid].UIParam2,0,0,1);
	cVar1 = UniqueItemList[uid].UINumPL;
	if ('\x01' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uid].UIPower2,UniqueItemList[uid].UIParam3,
							 UniqueItemList[uid].UIParam4,0,0,1);
	}
	if ('\x02' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uid].UIPower3,UniqueItemList[uid].UIParam5,
							 UniqueItemList[uid].UIParam6,0,0,1);
	}
	if ('\x03' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uid].UIPower4,UniqueItemList[uid].UIParam7,
							 UniqueItemList[uid].UIParam8,0,0,1);
	}
	if ('\x04' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uid].UIPower5,UniqueItemList[uid].UIParam9,
							 UniqueItemList[uid].UIParam10,0,0,1);
	}
	if ('\x05' < cVar1) {
		SaveItemPower__Fiiiiiii
							(i,(int)UniqueItemList[uid].UIPower6,UniqueItemList[uid].UIParam11,
							 UniqueItemList[uid].UIParam12,0,0,1);
	}
	iVar4 = UniqueItemList[uid].UIValue;
	item[i]._iIName = (ushort)UniqueItemList[uid].UIName;
	sVar2 = item[i]._iMiscId;
	item[i]._iIvalue = iVar4;
	if (sVar2 == 0x1b) {
		item[i]._iSeed = uid;
	}
	uVar3 = item[i]._iCreateInfo;
	item[i]._iUid = (short)uid;
	item[i]._iMagical = '\x02';
	item[i]._iCreateInfo = uVar3 | 0x200;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnUnique__Fiii(int uid /*$s2*/, int x /*$a0*/, int y /*$a1*/)
 // line 2439, offset 0x80040fbc
	/* begin block 1 */
		// Start line: 2440
		// Start offset: 0x80040FBC
		// Variables:
	// 		int ii; // $s1
	// 		int itype; // $a3
	/* end block 1 */
	// End offset: 0x800410AC
	// End Line: 2453

	/* begin block 2 */
		// Start line: 5721
	/* end block 2 */
	// End Line: 5722

void SpawnUnique__Fiii(int uid,int x,int y)

{
	char *pcVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	int iVar5;
	int idata;
	int i;
	
	cVar3 = itemavail[0];
	if (numitems < 0x7f) {
		i = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		cVar4 = AllItemsList.iItemId;
		cVar2 = UniqueItemList[uid].UIItemId;
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar3;
		idata = 0;
		if (cVar4 != cVar2) {
			iVar5 = 0;
			do {
				pcVar1 = &ItemDataStruct_80121384.iItemId + iVar5;
				idata = idata + 1;
				iVar5 = iVar5 + 0x20;
			} while (*pcVar1 != cVar2);
		}
		GetItemAttrs__Fiii(i,idata,(uint)currlevel);
		GetUniqueItem__Fii(i,uid);
		SetupItem__Fi(i);
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ItemRndDur__Fi(int ii /*$a0*/)
 // line 2462, offset 0x800410c8
	/* begin block 1 */
		// Start line: 2463
		// Start offset: 0x800410C8
	/* end block 1 */
	// End offset: 0x80041144
	// End Line: 2466

	/* begin block 2 */
		// Start line: 5776
	/* end block 2 */
	// End Line: 5777

void ItemRndDur__Fi(int ii)

{
	long lVar1;
	
	if ((item[ii]._iDurability != 0) && (item[ii]._iDurability != 0xff)) {
		lVar1 = random__Fil(0,item[ii]._iMaxDur >> 1);
		item[ii]._iDurability = lVar1 + (item[ii]._iMaxDur >> 2) + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupAllItems__FiiiiiUcUcUc(int ii /*$s2*/, int idx /*$s7*/, int iseed /*$s4*/, int lvl /*$s3*/, int uper /*stack 16*/, int onlygood /*stack 20*/, int recreate /*stack 24*/, int pregen /*stack 28*/)
 // line 2473, offset 0x80041158
	/* begin block 1 */
		// Start line: 2474
		// Start offset: 0x80041158
		// Variables:
	// 		int iblvl; // $s0
	// 		int uid; // $v0
	/* end block 1 */
	// End offset: 0x80041430
	// End Line: 2512

	/* begin block 2 */
		// Start line: 5800
	/* end block 2 */
	// End Line: 5801

void SetupAllItems__FiiiiiUcUcUc
							 (int ii,int idx,int iseed,int lvl,int uper,int onlygood,int recreate,int pregen)

{
	short sVar1;
	ushort uVar2;
	long lVar3;
	int uid;
	int lvl_00;
	
	item[ii]._iSeed = iseed;
	SetRndSeed__Fl(iseed);
	GetItemAttrs__Fiii(ii,idx,lvl >> 1);
	item[ii]._iCreateInfo = (ushort)lvl;
	if ((char)pregen != '\0') {
		item[ii]._iCreateInfo = (ushort)lvl | 0x8000;
	}
	if ((char)onlygood != '\0') {
		item[ii]._iCreateInfo = item[ii]._iCreateInfo | 0x40;
	}
	if (uper == 0xf) {
		uVar2 = item[ii]._iCreateInfo | 0x80;
	}
	else {
		if (uper != 1) goto LAB_80041274;
		uVar2 = item[ii]._iCreateInfo | 0x100;
	}
	item[ii]._iCreateInfo = uVar2;
LAB_80041274:
	if (item[ii]._iMiscId == 0x1b) {
		if (item[ii]._iLoc != '\a') {
			GetUniqueItem__Fii(ii,iseed);
		}
	}
	else {
		lVar3 = random__Fil(0x20,100);
		if ((lVar3 < 0xb) || (lVar3 = random__Fil(0x21,100), lvl_00 = -1, lVar3 <= lvl)) {
			lvl_00 = lvl;
		}
		if (lvl_00 == -1) {
			sVar1 = item[ii]._iMiscId;
			if (sVar1 == 0x17) {
				lvl_00 = lvl;
			}
			if (lvl_00 == -1) {
				if (sVar1 == 0x19) {
					lvl_00 = lvl;
				}
				if ((lvl_00 == -1) && (sVar1 == 0x1a)) {
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
			uid = CheckUnique__FiiiUc(ii,lvl_00,uper,(uchar)recreate);
			if (uid == -1) {
				GetItemBonus__FiiiiUc(ii,idx,lvl_00 >> 1,lvl_00,onlygood & 0xff);
			}
			else {
				GetUniqueItem__Fii(ii,uid);
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
 // line 2519, offset 0x80041464
	/* begin block 1 */
		// Start line: 2520
		// Start offset: 0x80041464
		// Variables:
	// 		int ii; // $s3
	// 		int idx; // $s1
	// 		unsigned char onlygood; // $s5
	/* end block 1 */
	// End offset: 0x80041680
	// End Line: 2561

	/* begin block 2 */
		// Start line: 5901
	/* end block 2 */
	// End Line: 5902

void SpawnItem__FiiiUc(int m,int x,int y,uchar sendmsg)

{
	char cVar1;
	uint idx;
	long iseed;
	int uper;
	int ii;
	int onlygood;
	
	onlygood = 0;
	if ((monster[m]._uniqtype == '\0') &&
		 ((((monster[m].MData)->mTreasure & 0x8000) == 0 || (gbMaxPlayers == '\x01')))) {
		if ((QuestStruct_ARRAY_800e33a0[0]._qactive == '\x02') &&
			 (QuestStruct_ARRAY_800e33a0[0]._qvar1 == '\x05')) {
			QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\x06';
			idx = 0x12;
		}
		else {
			idx = RndItem__Fi(m);
			if (idx == 0) {
				return;
			}
			onlygood = 0;
			if ((int)idx < 1) goto LAB_80041564;
			idx = idx - 1;
		}
	}
	else {
		idx = RndUItem__Fi(m);
		onlygood = 1;
		if ((int)idx < 0) {
LAB_80041564:
			SpawnUnique__Fiii(~idx,x,y);
			return;
		}
	}
	cVar1 = itemavail[0];
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar1;
		if (monster[m]._uniqtype == '\0') {
			iseed = GetRndSeed__Fv();
			cVar1 = (monster[m].MData)->mLevel;
			uper = 1;
		}
		else {
			iseed = GetRndSeed__Fv();
			cVar1 = (monster[m].MData)->mLevel;
			uper = 0xf;
		}
		SetupAllItems__FiiiiiUcUcUc(ii,idx,iseed,(int)cVar1,uper,onlygood,0,0);
		numitems = numitems + 1;
		if (sendmsg != '\0') {
			NetSendCmdDItem__FUci('\0',ii);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateItem__Fiii(int uid /*$s2*/, int x /*$a0*/, int y /*$a1*/)
 // line 2570, offset 0x800416ac
	/* begin block 1 */
		// Start line: 2571
		// Start offset: 0x800416AC
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $a3
	/* end block 1 */
	// End offset: 0x800417C0
	// End Line: 2585

	/* begin block 2 */
		// Start line: 6013
	/* end block 2 */
	// End Line: 6014

void CreateItem__Fiii(int uid,int x,int y)

{
	char *pcVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	int iVar5;
	int idata;
	int i;
	
	cVar3 = itemavail[0];
	if (numitems < 0x7f) {
		i = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		cVar4 = AllItemsList.iItemId;
		cVar2 = UniqueItemList[uid].UIItemId;
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar3;
		idata = 0;
		if (cVar4 != cVar2) {
			iVar5 = 0;
			do {
				pcVar1 = &ItemDataStruct_80121384.iItemId + iVar5;
				idata = idata + 1;
				iVar5 = iVar5 + 0x20;
			} while (*pcVar1 != cVar2);
		}
		GetItemAttrs__Fiii(i,idata,(uint)currlevel);
		GetUniqueItem__Fii(i,uid);
		SetupItem__Fi(i);
		item[i]._iMagical = '\x02';
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateRndItem__FiiUcUcUc(int x /*$s0*/, int y /*$s3*/, unsigned char onlygood /*$s4*/, unsigned char sendmsg /*$s6*/, int delta /*stack 16*/)
 // line 2594, offset 0x800417dc
	/* begin block 1 */
		// Start line: 2595
		// Start offset: 0x800417DC
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s2
	/* end block 1 */
	// End offset: 0x800418F8
	// End Line: 2610

	/* begin block 2 */
		// Start line: 6070
	/* end block 2 */
	// End Line: 6071

void CreateRndItem__FiiUcUcUc(int x,int y,uchar onlygood,uchar sendmsg,int delta)

{
	char cVar1;
	int idx;
	long iseed;
	int ii;
	
	if (onlygood == '\0') {
		idx = RndAllItems__Fv();
	}
	else {
		idx = RndUItem__Fi(-1);
	}
	cVar1 = itemavail[0];
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar1;
		iseed = GetRndSeed__Fv();
		SetupAllItems__FiiiiiUcUcUc(ii,idx,iseed,(uint)currlevel << 1,1,(uint)onlygood,0,delta & 0xff);
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
// void /*$ra*/ SetupAllUseful__Fiii(int ii /*$s0*/, int iseed /*$a0*/, int lvl /*$s2*/)
 // line 2621, offset 0x80041924
	/* begin block 1 */
		// Start line: 2622
		// Start offset: 0x80041924
		// Variables:
	// 		int idx; // $s1
	/* end block 1 */
	// End offset: 0x800419E0
	// End Line: 2632

	/* begin block 2 */
		// Start line: 6129
	/* end block 2 */
	// End Line: 6130

void SetupAllUseful__Fiii(int ii,int iseed,int lvl)

{
	long lVar1;
	int idata;
	
	item[ii]._iSeed = iseed;
	SetRndSeed__Fl(iseed);
	lVar1 = random__Fil(0x22,2);
	idata = 0x19;
	if (lVar1 != 0) {
		idata = 0x18;
	}
	if ((1 < lvl) && (lVar1 = random__Fil(0x22,3), lVar1 == 0)) {
		idata = 0x1b;
	}
	GetItemAttrs__Fiii(ii,idata,lvl);
	item[ii]._iCreateInfo = (short)lvl + 0x180;
	SetupItem__Fi(ii);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateRndUseful__FiiiUc(int pnum /*$a0*/, int x /*$a0*/, int y /*$a1*/, unsigned char sendmsg /*$s2*/)
 // line 2635, offset 0x800419fc
	/* begin block 1 */
		// Start line: 2636
		// Start offset: 0x800419FC
		// Variables:
	// 		int ii; // $s1
	/* end block 1 */
	// End offset: 0x80041AA0
	// End Line: 2646

	/* begin block 2 */
		// Start line: 6160
	/* end block 2 */
	// End Line: 6161

void CreateRndUseful__FiiiUc(int pnum,int x,int y,uchar sendmsg)

{
	char cVar1;
	long iseed;
	int ii;
	
	cVar1 = itemavail[0];
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar1;
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
 // line 2654, offset 0x80041abc
	/* begin block 1 */
		// Start line: 2655
		// Start offset: 0x80041ABC
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s2
	/* end block 1 */
	// End offset: 0x80041BD4
	// End Line: 2670

	/* begin block 2 */
		// Start line: 6201
	/* end block 2 */
	// End Line: 6202

void CreateTypeItem__FiiUciiUcUc
							 (int x,int y,uchar onlygood,int itype,int imisc,int sendmsg,int delta)

{
	char cVar1;
	int idx;
	long iseed;
	int ii;
	
	if (itype == 0xb) {
		idx = 0;
	}
	else {
		idx = RndTypeItems__Fii(itype,imisc);
	}
	cVar1 = itemavail[0];
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar1;
		iseed = GetRndSeed__Fv();
		SetupAllItems__FiiiiiUcUcUc(ii,idx,iseed,(uint)currlevel << 1,1,(uint)onlygood,0,delta & 0xff);
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
 // line 2681, offset 0x80041c00
	/* begin block 1 */
		// Start line: 2682
		// Start offset: 0x80041C00
	/* end block 1 */
	// End offset: 0x80041DB8
	// End Line: 2706

	/* begin block 2 */
		// Start line: 6260
	/* end block 2 */
	// End Line: 6261

void RecreateEar__FiUsiUciiiiii
							 (int ii,ushort ic,int iseed,uchar Id,int dur,int mdur,int ch,int mch,int ivalue,
							 int ibuff)

{
	SetPlrHandItem__FP10ItemStructi(item + ii,0x17);
	tempstr[0] = (byte)((uint)ic >> 8) & 0x7f;
	tempstr[1] = (byte)ic & 0x7f;
	tempstr[6] = Id & 0x7f;
	tempstr[16] = '\0';
	tempstr[2] = (byte)((uint)iseed >> 0x18) & 0x7f;
	tempstr[3] = (byte)((uint)iseed >> 0x10) & 0x7f;
	tempstr[4] = (byte)((uint)iseed >> 8) & 0x7f;
	tempstr[5] = (byte)iseed & 0x7f;
	tempstr[7] = (byte)dur & 0x7f;
	tempstr[8] = (byte)mdur & 0x7f;
	tempstr[9] = (byte)ch & 0x7f;
	tempstr[10] = (byte)mch & 0x7f;
	tempstr[11] = (byte)((uint)ivalue >> 8) & 0x7f;
	tempstr[12] = (byte)((uint)ibuff >> 0x18) & 0x7f;
	tempstr[13] = (byte)((uint)ibuff >> 0x10) & 0x7f;
	tempstr[14] = (byte)((uint)ibuff >> 8) & 0x7f;
	tempstr[15] = (byte)ibuff & 0x7f;
	item[ii]._iName = 0x11f;
	item[ii]._iCurs = ((ushort)(ivalue >> 6) & 3) + 0x13;
	item[ii]._ivalue = ivalue & 0x3f;
	item[ii]._iCreateInfo = ic;
	item[ii]._iSeed = iseed;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnQuestItem__Fiiiii(int itemid /*$s6*/, int x /*$s4*/, int y /*$s3*/, int randarea /*$s2*/, int selflag /*stack 16*/)
 // line 2712, offset 0x80041dec
	/* begin block 1 */
		// Start line: 2713
		// Start offset: 0x80041DEC
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s0
	// 		unsigned char failed; // $v1

		/* begin block 1.1 */
			// Start line: 2713
			// Start offset: 0x80041DEC

			/* begin block 1.1.1 */
				// Start line: 2717
				// Start offset: 0x80041E2C
				// Variables:
			// 		int tries; // $s5
			/* end block 1.1.1 */
			// End offset: 0x80041ED8
			// End Line: 2728
		/* end block 1.1 */
		// End offset: 0x80041ED8
		// End Line: 2728
	/* end block 1 */
	// End offset: 0x80041FE8
	// End Line: 2748

	/* begin block 2 */
		// Start line: 6366
	/* end block 2 */
	// End Line: 6367

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
			x = random__Fil(0,0x70);
			y = random__Fil(0,0x70);
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
		i = (int)itemavail[0];
		cVar4 = itemavail[0] + '\x01';
		cVar1 = itemavail[0x7e - numitems];
		itemactive[numitems] = itemavail[0];
		itemavail[0] = cVar1;
		item[i]._ix = (char)x;
		item[i]._iy = (char)y;
		dung_map[x * 0x6c + y].dItem = cVar4;
		GetItemAttrs__Fiii(i,itemid,(uint)currlevel);
		SetupItem__Fi(i);
		item[i]._iPostDraw = '\x01';
		if (selflag != 0) {
			cVar1 = item[i]._iAnimLen;
			item[i]._iSelFlag = (char)selflag;
			item[i]._iAnimFlag = '\0';
			item[i]._iAnimFrame = cVar1;
		}
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnRock__Fv()
 // line 2754, offset 0x80042018
	/* begin block 1 */
		// Start line: 2755
		// Start offset: 0x80042018
		// Variables:
	// 		int i; // $v1
	// 		int ii; // $s1
	// 		int ostand; // $a1
	// 		int xx; // $a1
	// 		int yy; // $v0
	// 		unsigned char done; // $a0
	/* end block 1 */
	// End offset: 0x800421C0
	// End Line: 2780

	/* begin block 2 */
		// Start line: 6456
	/* end block 2 */
	// End Line: 6457

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SpawnRock__Fv(void)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	char cVar4;
	int i;
	int iVar5;
	
	cVar4 = itemavail[0];
	bVar3 = false;
	i = 0;
	iVar5 = 0;
	if (0 < numobjects) {
		do {
			iVar5 = (int)objectactive[i];
			i = i + 1;
			bVar3 = object[iVar5]._otype == '\x17';
			if (numobjects <= i) break;
		} while (!bVar3);
	}
	if (bVar3) {
		i = (int)itemavail[0];
		cVar1 = itemavail[0x7e - numitems];
		itemactive[numitems] = itemavail[0];
		itemavail[0] = cVar1;
		cVar1 = object[iVar5]._ox;
		item[i]._ix = cVar1;
		cVar2 = object[iVar5]._oy;
		item[i]._iy = cVar2;
		dung_map[(int)cVar1 * 0x6c + (int)cVar2].dItem = cVar4 + '\x01';
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
 // line 2787, offset 0x800421d8
	/* begin block 1 */
		// Start line: 2788
		// Start offset: 0x800421D8
		// Variables:
	// 		int it; // $a3
	/* end block 1 */
	// End offset: 0x80042388
	// End Line: 2820

	/* begin block 2 */
		// Start line: 6540
	/* end block 2 */
	// End Line: 6541

void RespawnItem__FiUc(int i,uchar FlipFlag)

{
	uchar uVar1;
	char cVar2;
	short sVar3;
	uint uVar4;
	
	uVar4 = (uint)ItemCAnimTbl[(int)item[i]._iCurs];
	item[i].ItemFrame = Item2Frm[uVar4];
	uVar1 = ItemAnimLs[uVar4];
	item[i]._iPostDraw = '\0';
	item[i]._iRequest = '\0';
	item[i]._isin = '\0';
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
	sVar3 = item[i]._iCurs;
	if (sVar3 == 0x4c) {
		item[i]._iSelFlag = '\x01';
		PlaySfxLoc__Fiii(ItemAnimSnds[uVar4],(int)item[i]._ix,(int)item[i]._iy);
		sVar3 = item[i]._iCurs;
	}
	if (sVar3 == 0x7e) {
		item[i]._iSelFlag = '\x01';
	}
	if (item[i]._iCurs == 0x8c) {
		item[i]._iSelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteItem__Fii(int ii /*$a0*/, int i /*$a1*/)
 // line 2826, offset 0x8004239c
	/* begin block 1 */
		// Start line: 2827
		// Start offset: 0x8004239C
	/* end block 1 */
	// End offset: 0x800423E8
	// End Line: 2831

	/* begin block 2 */
		// Start line: 6634
	/* end block 2 */
	// End Line: 6635

void DeleteItem__Fii(int ii,int i)

{
	char *pcVar1;
	int iVar2;
	
	*(undefined *)(-0x7ff39f89 - numitems) = (char)ii;
	iVar2 = numitems + -1;
	if ((0 < iVar2) && (i != iVar2)) {
		pcVar1 = (char *)(&ItemStruct_800c5ee0.field_0x97 + numitems);
		numitems = iVar2;
		itemactive[i] = *pcVar1;
		iVar2 = numitems;
	}
	numitems = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ItemDoppel__Fv()
 // line 2840, offset 0x800423f0
	/* begin block 1 */
		// Start line: 2841
		// Start offset: 0x800423F0
		// Variables:
	// 		int idoppelx; // $a1
	// 		struct ItemStruct *i; // $v1
	/* end block 1 */
	// End offset: 0x800424B0
	// End Line: 2855

	/* begin block 2 */
		// Start line: 6665
	/* end block 2 */
	// End Line: 6666

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ItemDoppel__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (gbMaxPlayers != '\x01') {
		iVar2 = 0x10;
		iVar3 = 0x5100;
		do {
			iVar1 = (int)(&dung_map[idoppely].dItem)[iVar3];
			if ((iVar1 != 0) &&
				 (((int)*(char *)(&INT_800c135c + iVar1 * 0x26) != iVar2 ||
					((int)*(char *)((int)&INT_800c135c + iVar1 * 0x98 + 1) != idoppely)))) {
				(&dung_map[idoppely].dItem)[iVar3] = '\0';
			}
			iVar2 = iVar2 + 1;
			iVar3 = iVar3 + 0x510;
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
 // line 2861, offset 0x800424b8
	/* begin block 1 */
		// Start line: 2862
		// Start offset: 0x800424B8
		// Variables:
	// 		int i; // $a2
	// 		int ii; // $a1
	/* end block 1 */
	// End offset: 0x800425EC
	// End Line: 2901

	/* begin block 2 */
		// Start line: 6704
	/* end block 2 */
	// End Line: 6705

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessItems__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	if (0 < numitems) {
		do {
			iVar1 = (int)itemactive[iVar2];
			if ((item[iVar1]._iAnimFlag != '\0') &&
				 (item[iVar1]._iAnimFrame = item[iVar1]._iAnimFrame + '\x01', item[iVar1]._iCurs == 0x4c)) {
				if ((item[iVar1]._iSelFlag == '\x01') && (item[iVar1]._iAnimFrame == '\v')) {
					item[iVar1]._iAnimFrame = '\x01';
				}
				if ((item[iVar1]._iSelFlag == '\x02') && (item[iVar1]._iAnimFrame == '\x15')) {
					item[iVar1]._iAnimFrame = '\v';
				}
			}
			iVar2 = iVar2 + 1;
		} while (iVar2 < numitems);
	}
	ItemDoppel__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeItemGFX__Fv()
 // line 2907, offset 0x800425fc
	/* begin block 1 */
		// Start line: 2908
		// Start offset: 0x800425FC
	/* end block 1 */
	// End offset: 0x800425FC
	// End Line: 2908

	/* begin block 2 */
		// Start line: 6801
	/* end block 2 */
	// End Line: 6802

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeItemGFX__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetItemStr__Fi(int i /*$s0*/)
 // line 2931, offset 0x80042604
	/* begin block 1 */
		// Start line: 2932
		// Start offset: 0x80042604

		/* begin block 1.1 */
			// Start line: 2932
			// Start offset: 0x80042604

			/* begin block 1.1.1 */
				// Start line: 2935
				// Start offset: 0x80042644

				/* begin block 1.1.1.1 */
					// Start line: 2937
					// Start offset: 0x80042644
					// Variables:
				// 		int nGold; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x80042644
				// End Line: 2938
			/* end block 1.1.1 */
			// End offset: 0x8004277C
			// End Line: 2956
		/* end block 1.1 */
		// End offset: 0x8004277C
		// End Line: 2956
	/* end block 1 */
	// End offset: 0x8004277C
	// End Line: 2956

	/* begin block 2 */
		// Start line: 6844
	/* end block 2 */
	// End Line: 6845

void GetItemStr__Fi(int i)

{
	char *__src;
	char *pcVar1;
	char cVar2;
	ushort ItemNo;
	int nGold;
	
	if (item[i]._itype == 0xb) {
		nGold = item[i]._ivalue;
		__src = GetStr__Fi(STR__I_GOLD__S);
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
// void /*$ra*/ CheckIdentify__Fii(int pnum /*$s0*/, int cii /*$a1*/)
 // line 2961, offset 0x80042794
	/* begin block 1 */
		// Start line: 2962
		// Start offset: 0x80042794
		// Variables:
	// 		struct ItemStruct *pi; // $v1
	/* end block 1 */
	// End offset: 0x80042870
	// End Line: 2972

	/* begin block 2 */
		// Start line: 6906
	/* end block 2 */
	// End Line: 6907

void CheckIdentify__Fii(int pnum,int cii)

{
	int iVar1;
	
	if (cii < 7) {
		iVar1 = pnum * 0x23a8 + -0x7ff21328;
		cii = cii * 0x98;
	}
	else {
		iVar1 = pnum * 0x23a8 + -0x7ff20f00;
		cii = cii * 0x98 + -0x428;
	}
	*(undefined *)(iVar1 + cii + 0x95) = 1;
	CalcPlrInv__FiUc(pnum,'\x01');
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RepairItem__FP10ItemStructi(struct ItemStruct *i /*$s0*/, int lvl /*$s3*/)
 // line 2976, offset 0x80042884
	/* begin block 1 */
		// Start line: 2977
		// Start offset: 0x80042884
		// Variables:
	// 		int d; // $a0
	// 		int rep; // $s1
	/* end block 1 */
	// End offset: 0x80042934
	// End Line: 3000

	/* begin block 2 */
		// Start line: 6937
	/* end block 2 */
	// End Line: 6938

void RepairItem__FP10ItemStructi(ItemStruct *i,int lvl)

{
	long lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (i->_iDurability != i->_iMaxDur) {
		iVar3 = 0;
		if (i->_iMaxDur < 1) {
LAB_800428bc:
			i->_itype = -1;
		}
		else {
			do {
				lVar1 = random__Fil(0x25,lvl);
				iVar4 = i->_iMaxDur / (lvl + 9);
				iVar3 = iVar3 + lVar1 + lvl;
				if (iVar4 < 1) {
					iVar4 = 1;
				}
				iVar4 = i->_iMaxDur - iVar4;
				i->_iMaxDur = iVar4;
				if (iVar4 == 0) goto LAB_800428bc;
				iVar2 = i->_iDurability + iVar3;
			} while (iVar2 < iVar4);
			i->_iDurability = iVar2;
			if (i->_iMaxDur < iVar2) {
				i->_iDurability = i->_iMaxDur;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoRepair__Fii(int pnum /*$s1*/, int cii /*$s0*/)
 // line 3004, offset 0x80042954
	/* begin block 1 */
		// Start line: 3005
		// Start offset: 0x80042954
		// Variables:
	// 		struct PlayerStruct *p; // $s2
	// 		struct ItemStruct *pi; // $a0
	/* end block 1 */
	// End offset: 0x800429FC
	// End Line: 3018

	/* begin block 2 */
		// Start line: 7002
	/* end block 2 */
	// End Line: 7003

void DoRepair__Fii(int pnum,int cii)

{
	PlaySfxLoc__Fiii(IS_REPAIR,(int)plr[pnum]._px,(int)plr[pnum]._py);
	RepairItem__FP10ItemStructi
						((ItemStruct *)(pnum * 0x23a8 + cii * 0x98 + -0x7ff21328),(int)plr[pnum]._pLevel);
	CalcPlrInv__FiUc(pnum,'\x01');
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RechargeItem__FP10ItemStructi(struct ItemStruct *i /*$a0*/, int r /*$a1*/)
 // line 3022, offset 0x80042a18
	/* begin block 1 */
		// Start line: 3023
		// Start offset: 0x80042A18
	/* end block 1 */
	// End offset: 0x80042A7C
	// End Line: 3035

	/* begin block 2 */
		// Start line: 7041
	/* end block 2 */
	// End Line: 7042

void RechargeItem__FP10ItemStructi(ItemStruct *i,int r)

{
	short sVar1;
	int iVar2;
	
	if (i->_iCharges != i->_iMaxCharges) {
		do {
			sVar1 = i->_iMaxCharges;
			i->_iMaxCharges = sVar1 + -1;
			if (sVar1 == 1) {
				return;
			}
			sVar1 = i->_iMaxCharges;
			iVar2 = (uint)(ushort)i->_iCharges + r;
			i->_iCharges = (short)iVar2;
			iVar2 = iVar2 * 0x10000 >> 0x10;
		} while (iVar2 < (int)sVar1);
		if ((int)sVar1 < iVar2) {
			i->_iCharges = sVar1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoRecharge__Fii(int pnum /*$s1*/, int cii /*$a1*/)
 // line 3039, offset 0x80042a88
	/* begin block 1 */
		// Start line: 3040
		// Start offset: 0x80042A88
		// Variables:
	// 		struct PlayerStruct *p; // $a0
	// 		struct ItemStruct *pi; // $s0

		/* begin block 1.1 */
			// Start line: 3048
			// Start offset: 0x80042AE8

			/* begin block 1.1.1 */
				// Start line: 3048
				// Start offset: 0x80042B08
				// Variables:
			// 		int r; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80042B54
			// End Line: 3055
		/* end block 1.1 */
		// End offset: 0x80042B54
		// End Line: 3055
	/* end block 1 */
	// End offset: 0x80042B70
	// End Line: 3058

	/* begin block 2 */
		// Start line: 7075
	/* end block 2 */
	// End Line: 7076

void DoRecharge__Fii(int pnum,int cii)

{
	long lVar1;
	ItemStruct *i;
	
	i = (ItemStruct *)(pnum * 0x23a8 + cii * 0x98 + -0x7ff21328);
	if ((i->_itype == 10) && (i->_iSpell != 0)) {
		lVar1 = random__Fil(0x26,(int)plr[pnum]._pLevel / (&spelldata)[i->_iSpell].sBookLvl);
		RechargeItem__FP10ItemStructi(i,lVar1 + 1);
		CalcPlrInv__FiUc(pnum,'\x01');
	}
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemOil__Fc(char IDidx /*$a0*/)
 // line 3162, offset 0x80042b88
	/* begin block 1 */
		// Start line: 3163
		// Start offset: 0x80042B88
	/* end block 1 */
	// End offset: 0x80042C68
	// End Line: 3287

	/* begin block 2 */
		// Start line: 7322
	/* end block 2 */
	// End Line: 7323

void PrintItemOil__Fc(char IDidx)

{
	char *__src;
	text_strs StrId;
	
	switch((int)(((uint)(byte)IDidx - 2) * 0x1000000) >> 0x18) {
	case 0:
		StrId = STR_FULLY_RECOVER_LIFE;
		break;
	case 1:
		StrId = STR_RECOVER_PARTIAL_LIFE;
		break;
	case 2:
		StrId = STR_RECOVER_LIFE;
		break;
	case 3:
		StrId = STR_DEADLY_HEAL;
		break;
	case 4:
		StrId = STR_RECOVER_MANA;
		break;
	case 5:
		StrId = STR_FULLY_RECOVER_MANA;
		break;
	default:
		goto switchD_80042bbc_caseD_6;
	case 8:
		StrId = STR_INCREASE_STRENGTH;
		break;
	case 9:
		StrId = STR_INCREASE_MAGIC;
		break;
	case 10:
		StrId = STR_INCREASE_DEXTERITY;
		break;
	case 0xb:
		StrId = STR_INCREASE_VITALITY;
		break;
	case 0xc:
		StrId = STR_DECREASE_STRENGTH;
		break;
	case 0xd:
		StrId = STR_DECREASE_STRENGTH;
		break;
	case 0xe:
		StrId = STR_DECREASE_DEXTERITY;
		break;
	case 0xf:
		StrId = STR_DECREASE_VITALITY;
		break;
	case 0x10:
		StrId = STR_RECOVER_LIFE_AND_MANA;
		break;
	case 0x11:
		StrId = STR_FULLY_RECOVER_LIFE_AND_MANA;
	}
	__src = GetStr__Fi(StrId);
	strcpy(tempstr,__src);
	AddPanelString__FPCci(tempstr,1);
switchD_80042bbc_caseD_6:
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemPower__FcPC10ItemStruct(char plidx /*$a0*/, struct ItemStruct *x /*$s1*/)
 // line 3292, offset 0x80042c7c
	/* begin block 1 */
		// Start line: 3293
		// Start offset: 0x80042C7C
		// Variables:
	// 		int v; // $s0
	/* end block 1 */
	// End offset: 0x80043318
	// End Line: 3503

	/* begin block 2 */
		// Start line: 7583
	/* end block 2 */
	// End Line: 7584

void PrintItemPower__FcPC10ItemStruct(char plidx,ItemStruct *x)

{
	char cVar1;
	ushort uVar2;
	char *pcVar3;
	char *__format;
	text_strs StrId;
	int iVar4;
	int iVar5;
	uint uVar6;
	
	if (x->_iIdentified == '\0') {
		return;
	}
	switch(plidx) {
	case '\0':
	case '\x01':
		__format = GetStr__Fi(STR_CHANCE_TO_HIT_____I__);
		iVar4 = x->_iPLToHit;
		goto LAB_80043234;
	case '\x02':
	case '\x03':
		__format = GetStr__Fi(STR___I___DAMAGE);
		iVar4 = x->_iPLDam;
		goto LAB_80043234;
	case '\x04':
	case '\x05':
		__format = GetStr__Fi(STR_TO_HIT____I______I___DAMAGE);
		iVar4 = x->_iPLToHit;
		iVar5 = x->_iPLDam;
		goto LAB_8004303c;
	case '\x06':
	case '\a':
		__format = GetStr__Fi(STR___I___ARMOR);
		iVar4 = (int)x->_iPLAC;
		goto LAB_80043234;
	case '\b':
		iVar4 = (int)x->_iPLFR;
		StrId = STR_RESIST_FIRE_____I__;
		if (iVar4 < 0x4b) goto LAB_800432d8;
		StrId = STR_RESIST_FIRE___75___MAX;
		goto LAB_800432b8;
	case '\t':
		iVar4 = (int)x->_iPLLR;
		StrId = STR_RESIST_LIGHTNING_____I__;
		if (iVar4 < 0x4b) goto LAB_800432d8;
		StrId = STR_RESIST_LIGHTNING___75___MAX;
		goto LAB_800432b8;
	case '\n':
		iVar4 = (int)x->_iPLMR;
		StrId = STR_RESIST_MAGIC_____I__;
		if (iVar4 < 0x4b) goto LAB_800432d8;
		StrId = STR_RESIST_MAGIC___75___MAX;
		goto LAB_800432b8;
	case '\v':
		iVar4 = (int)x->_iPLFR;
		StrId = STR_RESIST_ALL_____I__;
		if (iVar4 < 0x4b) goto LAB_800432d8;
		StrId = STR_RESIST_ALL___75___MAX;
		goto LAB_800432b8;
	default:
		StrId = STR_ANOTHER_ABILITY__NW_;
		break;
	case '\x0e':
		cVar1 = x->_iSplLvlAdd;
		if (cVar1 == '\x01') {
			__format = GetStr__Fi(STR_SPELLS_ARE_INCREASED_1_LEVEL);
			strcpy(tempstr,__format);
		}
		if (cVar1 == '\x02') {
			__format = GetStr__Fi(STR_SPELLS_ARE_INCREASED_2_LEVELS);
			strcpy(tempstr,__format);
		}
		StrId = STR_SPELLS_ARE_DECREASED_1_LEVEL;
		if ('\0' < cVar1) {
			return;
		}
		break;
	case '\x0f':
		StrId = STR_EXTRA_CHARGES;
		break;
	case '\x10':
		__format = GetStr__Fi(STR_FIRE_HIT_DAMAGE___I__I);
		iVar4 = x->_iFMinDam;
		iVar5 = x->_iFMaxDam;
		goto LAB_8004303c;
	case '\x11':
		StrId = STR_LIGHTNING_HIT_DAMAGE___I__I;
		goto LAB_80043024;
	case '\x13':
	case '\x14':
		__format = GetStr__Fi(STR___I_TO_STRENGTH);
		iVar4 = (int)x->_iPLStr;
		goto LAB_80043234;
	case '\x15':
	case '\x16':
		__format = GetStr__Fi(STR___I_TO_MAGIC);
		iVar4 = (int)x->_iPLMag;
		goto LAB_80043234;
	case '\x17':
	case '\x18':
		__format = GetStr__Fi(STR___I_TO_DEXTERITY);
		iVar4 = (int)x->_iPLDex;
		goto LAB_80043234;
	case '\x19':
	case '\x1a':
		__format = GetStr__Fi(STR___I_TO_VITALITY);
		iVar4 = (int)x->_iPLVit;
		goto LAB_80043234;
	case '\x1b':
	case '\x1c':
		__format = GetStr__Fi(STR___I_TO_ALL_ATTRIBUTES);
		iVar4 = (int)x->_iPLStr;
		goto LAB_80043234;
	case '\x1d':
	case '\x1e':
		__format = GetStr__Fi(STR___I_DAMAGE_FROM_ENEMIES);
		iVar4 = x->_iPLGetHit;
		goto LAB_80043234;
	case '\x1f':
	case ' ':
		__format = GetStr__Fi(STR_HIT_POINTS_____I);
		uVar2 = x->_iPLHP;
		goto LAB_80042fa0;
	case '!':
	case '\"':
		__format = GetStr__Fi(STR_MANA_____I);
		uVar2 = x->_iPLMana;
LAB_80042fa0:
		sprintf(tempstr,__format,(int)((uint)uVar2 << 0x10) >> 0x16);
		return;
	case '#':
		StrId = STR_HIGH_DURABILITY;
		break;
	case '$':
		StrId = STR_DECREASED_DURABILITY;
		break;
	case '%':
		StrId = STR_INDESTRUCTIBLE;
		break;
	case '&':
		StrId = STR_P_I___LIGHT_RADIUS;
		iVar4 = x->_iPLLight * 10;
		goto LAB_800432d8;
	case '\'':
		StrId = STR_N_I___LIGHT_RADIUS;
		iVar4 = x->_iPLLight * -10;
LAB_800432d8:
		__format = GetStr__Fi(StrId);
		sprintf(tempstr,__format,iVar4);
		return;
	case '*':
		__format = GetStr__Fi(STR_FIRE_ARROWS_DAMAGE___I__I);
		iVar4 = x->_iFMinDam;
		iVar5 = x->_iFMaxDam;
		goto LAB_8004303c;
	case '+':
		StrId = STR_LIGHTNING_ARROWS_DAMAGE__I__I;
LAB_80043024:
		__format = GetStr__Fi(StrId);
		iVar4 = x->_iLMinDam;
		iVar5 = x->_iLMaxDam;
LAB_8004303c:
		sprintf(tempstr,__format,iVar4,iVar5);
		return;
	case ',':
		StrId = STR__;
		break;
	case '-':
		StrId = STR_ATTACKER_TAKES_1_3_DAMAGE;
		break;
	case '.':
		StrId = STR_USER_LOSES_ALL_MANA;
		break;
	case '/':
		StrId = STR_YOU_CAN_T_HEAL;
		break;
	case '4':
		StrId = STR_ABSORBS_HALF_OF_TRAP_DAMAGE;
		break;
	case '5':
		StrId = STR_KNOCKS_TARGET_BACK;
		break;
	case '6':
		StrId = STR_HIT_MONSTER_DOESN_T_HEAL;
		break;
	case '7':
		uVar6 = x->_iFlags;
		if ((uVar6 & 0x2000) != 0) {
			__format = GetStr__Fi(STR_HIT_STEALS_3__MANA);
			strcpy(tempstr,__format);
		}
		uVar6 = uVar6 & 0x4000;
		StrId = STR_HIT_STEALS_5__MANA;
		goto joined_r0x80043208;
	case '8':
		uVar6 = x->_iFlags;
		if ((uVar6 & 0x8000) != 0) {
			__format = GetStr__Fi(STR_HIT_STEALS_3__LIFE);
			strcpy(tempstr,__format);
		}
		uVar6 = uVar6 & 0x10000;
		StrId = STR_HIT_STEALS_5__LIFE;
		goto joined_r0x80043208;
	case '9':
		StrId = STR_DAMAGES_TARGET_S_ARMOR;
		break;
	case ':':
		uVar6 = x->_iFlags;
		if ((uVar6 & 0x20000) != 0) {
			__format = GetStr__Fi(STR_QUICK_ATTACK);
			strcpy(tempstr,__format);
		}
		if ((uVar6 & 0x40000) != 0) {
			__format = GetStr__Fi(STR_FAST_ATTACK);
			strcpy(tempstr,__format);
		}
		if ((uVar6 & 0x80000) != 0) {
			__format = GetStr__Fi(STR_FASTER_ATTACK);
			strcpy(tempstr,__format);
		}
		uVar6 = uVar6 & 0x100000;
		StrId = STR_FASTEST_ATTACK;
		goto joined_r0x80043208;
	case ';':
		uVar6 = x->_iFlags;
		if ((uVar6 & 0x200000) != 0) {
			__format = GetStr__Fi(STR_FAST_HIT_RECOVERY);
			strcpy(tempstr,__format);
		}
		if ((uVar6 & 0x400000) != 0) {
			__format = GetStr__Fi(STR_FASTER_HIT_RECOVERY);
			strcpy(tempstr,__format);
		}
		uVar6 = uVar6 & 0x800000;
		StrId = STR_FASTEST_HIT_RECOVERY;
joined_r0x80043208:
		if (uVar6 == 0) {
			return;
		}
		break;
	case '<':
		StrId = STR_FAST_BLOCK;
		break;
	case '=':
		__format = GetStr__Fi(STR_ADDS__I_POINTS_TO_DAMAGE);
		iVar4 = x->_iPLDamMod;
		goto LAB_80043234;
	case '>':
		StrId = STR_FIRES_RANDOM_SPEED_ARROWS;
		break;
	case '?':
		StrId = STR_UNUSUAL_ITEM_DAMAGE;
		goto LAB_800432b8;
	case '@':
		StrId = STR_ALTERED_DURABILITY;
		break;
	case 'A':
		StrId = STR_NO_STRENGTH_REQUIREMENT;
		break;
	case 'B':
		__format = GetStr__Fi(STR__I__S_CHARGES);
		pcVar3 = GetStr__Fi((&spelldata)[x->_iSpell].sNameText);
		sprintf(tempstr,__format,(int)x->_iMaxCharges,pcVar3);
		return;
	case 'C':
		StrId = STR_FASTER_ATTACK_SWING;
		break;
	case 'D':
		StrId = STR_ONE_HANDED_SWORD;
		break;
	case 'E':
		StrId = STR__200__DAMAGE_VS__DEMONS;
		break;
	case 'F':
		StrId = STR_ALL_RESISTANCE_EQUALS_0;
		break;
	case 'H':
		StrId = STR_CONSTANTLY_LOSE_HIT_POINTS;
		break;
	case 'I':
		StrId = STR_LIFE_STEALING;
		break;
	case 'J':
		StrId = STR_SEE_WITH_INFRAVISION;
		break;
	case 'K':
		__format = GetStr__Fi(STR_ARMOR_CLASS___I);
		iVar4 = (int)x->_iAC;
		goto LAB_80043234;
	case 'L':
		StrId = STR_ARMOR_CLASS_ADDED_TO_LIFE;
		break;
	case 'M':
		StrId = STR_10__OF_MANA_ADDED_TO_ARMOR;
		break;
	case 'N':
		iVar4 = (int)x->_iPLFR;
		StrId = STR_RESIST_FIRE_____I__;
		if (0 < iVar4) goto LAB_800432d8;
		StrId = STR__;
LAB_800432b8:
		__format = GetStr__Fi(StrId);
		sprintf(tempstr,__format);
		return;
	case 'O':
		__format = GetStr__Fi(STR_ARMOR_CLASS___I);
		iVar4 = (int)x->_iAC;
LAB_80043234:
		sprintf(tempstr,__format,iVar4);
		return;
	}
	__format = GetStr__Fi(StrId);
	strcpy(tempstr,__format);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintUString__FiiUcPcc(int x /*$a0*/, int y /*$a1*/, unsigned char cjustflag /*$a2*/, char *str /*$a3*/, int col /*stack 16*/)
 // line 3548, offset 0x80043330
	/* begin block 1 */
		// Start line: 3549
		// Start offset: 0x80043330
	/* end block 1 */
	// End offset: 0x80043330
	// End Line: 3549

	/* begin block 2 */
		// Start line: 8127
	/* end block 2 */
	// End Line: 8128

void PrintUString__FiiUcPcc(int x,int y,uchar cjustflag,char *str,int col)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x /*$s2*/)
 // line 3589, offset 0x80043338
	/* begin block 1 */
		// Start line: 3590
		// Start offset: 0x80043338
	/* end block 1 */
	// End offset: 0x800435A8
	// End Line: 3628

	/* begin block 2 */
		// Start line: 8181
	/* end block 2 */
	// End Line: 8182

void PrintItemMisc__FPC10ItemStruct(ItemStruct *x)

{
	short sVar1;
	char *__format;
	int iVar2;
	
	sVar1 = x->_iMiscId;
	iVar2 = (int)sVar1;
	if (iVar2 == 0x15) {
		tempstr._0_4_ = DAT_80126138;
		tempstr._4_4_ = DAT_8012613c;
		tempstr._8_4_ = DAT_80126140;
		tempstr._12_4_ = PTR_DAT_80126144;
		AddPanelString__FPCci(tempstr,1);
	}
	if (iVar2 == 0x16) {
		tempstr._0_4_ = DAT_80126138;
		tempstr._4_4_ = DAT_8012613c;
		tempstr._8_4_ = DAT_80126140;
		tempstr._12_4_ = PTR_DAT_80126144;
		AddPanelString__FPCci(tempstr,1);
	}
	if ((iVar2 - 1U & 0xffff) < 0x14) {
		PrintItemOil__Fc((char)sVar1);
		tempstr._0_4_ = 0x73657250;
		tempstr._4_4_ = 0x203c2073;
		tempstr._8_4_ = 0x75206f74;
		tempstr._12_4_ = (undefined *)((uint)tempstr._12_4_ & 0xff000000 | 0x6573);
		AddPanelString__FPCci(tempstr,1);
	}
	if (iVar2 == 0x18) {
		tempstr._0_4_ = DAT_80126138;
		tempstr._4_4_ = DAT_8012613c;
		tempstr._8_4_ = DAT_80126140;
		tempstr._12_4_ = PTR_DAT_80126144;
		AddPanelString__FPCci(tempstr,1);
	}
	if (iVar2 == 0x2a) {
		tempstr._0_4_ = DAT_80126158;
		tempstr._4_4_ = DAT_8012615c;
		tempstr._8_4_ = DAT_80126160;
		tempstr._12_4_ = PTR_DAT_80126164;
		AddPanelString__FPCci(tempstr,1);
	}
	if (iVar2 == 0x2b) {
		__format = GetStr__Fi(STR_LEVEL____I);
		sprintf(tempstr,__format,x->_ivalue);
		AddPanelString__FPCci(tempstr,1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x /*$s1*/)
 // line 3634, offset 0x800435c4
	/* begin block 1 */
		// Start line: 3635
		// Start offset: 0x800435C4
	/* end block 1 */
	// End offset: 0x80043914
	// End Line: 3680

	/* begin block 2 */
		// Start line: 8273
	/* end block 2 */
	// End Line: 8274

void PrintItemDetails__FPC10ItemStruct(ItemStruct *x)

{
	byte bVar1;
	short sVar2;
	ItemStruct *pIVar3;
	char *__format;
	char cVar4;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	ItemStruct *pIVar9;
	int iVar10;
	
	cVar4 = x->_iClass;
	if (cVar4 == '\x01') {
		iVar10 = x->_iMaxDur;
		if (iVar10 == 0xff) {
			__format = GetStr__Fi(STR_DAMAGE___I__I__INDESTRUCTIBLE);
			sprintf(tempstr,__format,x->_iMinDam,x->_iMaxDam);
		}
		else {
			__format = GetStr__Fi(STR_DAMAGE___I__I__DUR___I__I);
			sprintf(tempstr,__format,x->_iMinDam,x->_iMaxDam,x->_iDurability,iVar10);
		}
		AddPanelString__FPCci(tempstr,1);
		cVar4 = x->_iClass;
	}
	if (cVar4 == '\x02') {
		iVar10 = x->_iMaxDur;
		if (iVar10 == 0xff) {
			__format = GetStr__Fi(STR_ARMOR___I__INDESTRUCTIBLE);
			sprintf(tempstr,__format,(int)x->_iAC);
		}
		else {
			__format = GetStr__Fi(STR_ARMOR___I__DUR___I__I);
			sprintf(tempstr,__format,(int)x->_iAC,x->_iDurability,iVar10);
		}
		AddPanelString__FPCci(tempstr,1);
	}
	if ((x->_iMiscId == 0x17) && (sVar2 = x->_iMaxCharges, (int)sVar2 != 0)) {
		__format = GetStr__Fi(STR_DAM___I__I__DUR___I__I);
		sprintf(tempstr,__format,x->_iMinDam,x->_iMaxDam,x->_iDurability,x->_iMaxDur);
		__format = GetStr__Fi(STR_CHARGES___I__I);
		sprintf(tempstr,__format,(int)x->_iCharges,(int)sVar2);
		AddPanelString__FPCci(tempstr,1);
	}
	if ((int)x->_iPrePower != -1) {
		PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Prefix[(int)x->_iPrePower].PLPower,x);
		AddPanelString__FPCci(tempstr,1);
	}
	if ((int)x->_iSufPower != -1) {
		PrintItemPower__FcPC10ItemStruct(*(char *)&PL_Suffix[(int)x->_iSufPower].PLPower,x);
		AddPanelString__FPCci(tempstr,1);
	}
	if (x->_iMagical == '\x02') {
		__format = GetStr__Fi(STR_UNIQUE_ITEM);
		AddPanelString__FPCci(__format,1);
		uitemflag = '\x01';
		pIVar8 = x;
		pIVar3 = &curruitem;
		do {
			pIVar9 = pIVar3;
			pIVar7 = pIVar8;
			iVar10 = pIVar7->_iVMult1;
			iVar5 = pIVar7->_iVAdd2;
			iVar6 = pIVar7->_iVMult2;
			pIVar9->_iVAdd1 = pIVar7->_iVAdd1;
			pIVar9->_iVMult1 = iVar10;
			pIVar9->_iVAdd2 = iVar5;
			pIVar9->_iVMult2 = iVar6;
			pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
			pIVar3 = (ItemStruct *)&pIVar9->_iSeed;
		} while (pIVar8 != (ItemStruct *)&x->_iMinMag);
		iVar10 = pIVar7->_ivalue;
		((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
		pIVar9->_ivalue = iVar10;
	}
	PrintItemMisc__FPC10ItemStruct(x);
	iVar5 = (int)x->_iMinStr;
	bVar1 = x->_iMinMag;
	iVar10 = (int)x->_iMinDex;
	if (iVar5 + (uint)bVar1 + iVar10 != 0) {
		__format = GetStr__Fi(STR_REQUIRED_);
		strcpy(tempstr,__format);
		if (iVar5 != 0) {
			__format = GetStr__Fi(STR__S__I_STR);
			sprintf(tempstr,__format,tempstr,iVar5);
		}
		if (bVar1 != 0) {
			__format = GetStr__Fi(STR__S__I_MAG);
			sprintf(tempstr,__format,tempstr,(uint)bVar1);
		}
		if (iVar10 != 0) {
			__format = GetStr__Fi(STR__S__I_DEX);
			sprintf(tempstr,__format,tempstr,iVar10);
		}
		AddPanelString__FPCci(tempstr,1);
	}
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItemDur__FPC10ItemStruct(struct ItemStruct *x /*$s0*/)
 // line 3685, offset 0x80043934
	/* begin block 1 */
		// Start line: 3686
		// Start offset: 0x80043934
	/* end block 1 */
	// End offset: 0x80043C24
	// End Line: 3726

	/* begin block 2 */
		// Start line: 8376
	/* end block 2 */
	// End Line: 8377

void PrintItemDur__FPC10ItemStruct(ItemStruct *x)

{
	byte bVar1;
	short sVar2;
	char *__format;
	char cVar3;
	int iVar4;
	int iVar5;
	
	cVar3 = x->_iClass;
	if (cVar3 == '\x01') {
		iVar4 = x->_iMaxDur;
		if (iVar4 == 0xff) {
			__format = GetStr__Fi(STR_DAMAGE___I__I__INDESTRUCTIBLE);
			sprintf(tempstr,__format,x->_iMinDam,x->_iMaxDam);
		}
		else {
			__format = GetStr__Fi(STR_DAMAGE___I__I__DUR___I__I);
			sprintf(tempstr,__format,x->_iMinDam,x->_iMaxDam,x->_iDurability,iVar4);
		}
		AddPanelString__FPCci(tempstr,1);
		if ((x->_iMiscId == 0x17) && (sVar2 = x->_iMaxCharges, (int)sVar2 != 0)) {
			__format = GetStr__Fi(STR_CHARGES___I__I);
			sprintf(tempstr,__format,(int)x->_iCharges,(int)sVar2);
			AddPanelString__FPCci(tempstr,1);
		}
		if (x->_iMagical != '\0') {
			__format = GetStr__Fi(STR_NOT_IDENTIFIED);
			AddPanelString__FPCci(__format,1);
		}
		cVar3 = x->_iClass;
	}
	if (cVar3 == '\x02') {
		iVar4 = x->_iMaxDur;
		if (iVar4 == 0xff) {
			__format = GetStr__Fi(STR_ARMOR___I__INDESTRUCTIBLE);
			sprintf(tempstr,__format,(int)x->_iAC);
		}
		else {
			__format = GetStr__Fi(STR_ARMOR___I__DUR___I__I);
			sprintf(tempstr,__format,(int)x->_iAC,x->_iDurability,iVar4);
		}
		AddPanelString__FPCci(tempstr,1);
		if (x->_iMagical != '\0') {
			__format = GetStr__Fi(STR_NOT_IDENTIFIED);
			AddPanelString__FPCci(__format,1);
		}
		if ((x->_iMiscId == 0x17) && (sVar2 = x->_iMaxCharges, (int)sVar2 != 0)) {
			__format = GetStr__Fi(STR_CHARGES___I__I);
			sprintf(tempstr,__format,(int)x->_iCharges,(int)sVar2);
			AddPanelString__FPCci(tempstr,1);
		}
	}
	if ((uint)(ushort)x->_itype - 0xc < 2) {
		__format = GetStr__Fi(STR_NOT_IDENTIFIED);
		AddPanelString__FPCci(__format,1);
	}
	PrintItemMisc__FPC10ItemStruct(x);
	iVar4 = (int)x->_iMinStr;
	bVar1 = x->_iMinMag;
	iVar5 = (int)x->_iMinDex;
	if (iVar4 + (uint)bVar1 + iVar5 != 0) {
		__format = GetStr__Fi(STR_REQUIRED_);
		strcpy(tempstr,__format);
		if (iVar4 != 0) {
			__format = GetStr__Fi(STR__S__I_STR);
			sprintf(tempstr,__format,tempstr,iVar4);
		}
		if (bVar1 != 0) {
			__format = GetStr__Fi(STR__S__I_MAG);
			sprintf(tempstr,__format,tempstr,(uint)bVar1);
		}
		if (iVar5 != 0) {
			__format = GetStr__Fi(STR__S__I_DEX);
			sprintf(tempstr,__format,tempstr,iVar5);
		}
		AddPanelString__FPCci(tempstr,1);
	}
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CastScroll__Fii(int pnum /*$a0*/, int Spell /*$a1*/)
 // line 3732, offset 0x80043c44
	/* begin block 1 */
		// Start line: 3733
		// Start offset: 0x80043C44
	/* end block 1 */
	// End offset: 0x80043C4C
	// End Line: 3736

	/* begin block 2 */
		// Start line: 8474
	/* end block 2 */
	// End Line: 8475

void CastScroll__Fii(int pnum,int Spell)

{
	ScrollFlag = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UseItem__Fiii(int p /*$s2*/, int Mid /*$a1*/, int spl /*$s0*/)
 // line 3743, offset 0x80043c54
	/* begin block 1 */
		// Start line: 3744
		// Start offset: 0x80043C54
		// Variables:
	// 		long l; // $a0
	// 		unsigned long t; // $a0
	// 		struct PlayerStruct *ptrplr; // $s1
	/* end block 1 */
	// End offset: 0x8004424C
	// End Line: 3934

	/* begin block 2 */
		// Start line: 8493
	/* end block 2 */
	// End Line: 8494

void UseItem__Fiii(int p,int Mid,int spl)

{
	char cVar1;
	long lVar2;
	int iVar3;
	uint uVar4;
	int iVar5;
	int l;
	uint uVar6;
	uint uVar7;
	
	switch(Mid) {
	case 2:
		lVar2 = plr[p]._pMaxHPBase;
		drawhpflag = '\x01';
		plr[p]._pHitPoints = plr[p]._pMaxHP;
		plr[p]._pHPBase = lVar2;
		break;
	case 3:
	case 0x1c:
		l = plr[p]._pMaxHP;
		lVar2 = random__Fil(0x27,l >> 8);
		l = lVar2 + (l >> 9);
		iVar5 = l * 0x40;
		if (plr[p]._pClass == '\0') {
			iVar5 = l * 0x80;
		}
		if (plr[p]._pClass == '\x01') {
			iVar5 = iVar5 + (iVar5 >> 1);
		}
		iVar3 = plr[p]._pMaxHP;
		l = plr[p]._pHitPoints + iVar5;
		plr[p]._pHitPoints = l;
		if (iVar3 < l) {
			plr[p]._pHitPoints = iVar3;
		}
		l = plr[p]._pMaxHPBase;
		iVar5 = plr[p]._pHPBase + iVar5;
		plr[p]._pHPBase = iVar5;
		if (l < iVar5) {
			plr[p]._pHPBase = l;
		}
		drawhpflag = '\x01';
		break;
	case 6:
		l = plr[p]._pMaxMana;
		lVar2 = random__Fil(0x28,l >> 8);
		iVar5 = lVar2 + (l >> 9);
		l = iVar5 * 0x40;
		if (plr[p]._pClass == '\x02') {
			l = iVar5 * 0x80;
		}
		if (plr[p]._pClass == '\x01') {
			l = l + (l >> 1);
		}
		if ((plr[p]._pIFlags & 0x8000000U) != 0) {
			return;
		}
		iVar3 = plr[p]._pMaxMana;
		iVar5 = plr[p]._pMana + l;
		plr[p]._pMana = iVar5;
		if (iVar3 < iVar5) {
			plr[p]._pMana = iVar3;
		}
		iVar5 = plr[p]._pMaxManaBase;
		l = plr[p]._pManaBase + l;
		plr[p]._pManaBase = l;
		if (iVar5 < l) {
			plr[p]._pManaBase = iVar5;
		}
		goto LAB_80043f94;
	case 7:
		if ((plr[p]._pIFlags & 0x8000000U) == 0) {
			lVar2 = plr[p]._pMaxManaBase;
			drawmanaflag = '\x01';
			plr[p]._pMana = plr[p]._pMaxMana;
			plr[p]._pManaBase = lVar2;
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
		goto LAB_80044244;
	case 0x12:
		l = plr[p]._pMaxHP;
		lVar2 = random__Fil(0x27,l >> 8);
		l = lVar2 + (l >> 9);
		iVar5 = l * 0x40;
		if (plr[p]._pClass == '\0') {
			iVar5 = l * 0x80;
		}
		if (plr[p]._pClass == '\x01') {
			iVar5 = iVar5 + (iVar5 >> 1);
		}
		iVar3 = plr[p]._pMaxHP;
		l = plr[p]._pHitPoints + iVar5;
		plr[p]._pHitPoints = l;
		if (iVar3 < l) {
			plr[p]._pHitPoints = iVar3;
		}
		l = plr[p]._pMaxHPBase;
		iVar5 = plr[p]._pHPBase + iVar5;
		plr[p]._pHPBase = iVar5;
		if (l < iVar5) {
			plr[p]._pHPBase = l;
		}
		l = plr[p]._pMaxMana;
		drawhpflag = '\x01';
		lVar2 = random__Fil(0x28,l >> 8);
		iVar5 = lVar2 + (l >> 9);
		l = iVar5 * 0x40;
		if (plr[p]._pClass == '\x02') {
			l = iVar5 * 0x80;
		}
		if (plr[p]._pClass == '\x01') {
			l = l + (l >> 1);
		}
		if ((plr[p]._pIFlags & 0x8000000U) == 0) {
			iVar3 = plr[p]._pMaxMana;
			iVar5 = plr[p]._pMana + l;
			plr[p]._pMana = iVar5;
			if (iVar3 < iVar5) {
				plr[p]._pMana = iVar3;
			}
			iVar5 = plr[p]._pMaxManaBase;
			l = plr[p]._pManaBase + l;
			plr[p]._pManaBase = l;
			if (iVar5 < l) {
				plr[p]._pManaBase = iVar5;
			}
			drawmanaflag = '\x01';
		}
		break;
	case 0x13:
		lVar2 = plr[p]._pMaxHPBase;
		plr[p]._pHitPoints = plr[p]._pMaxHP;
		uVar6 = plr[p]._pIFlags;
		drawhpflag = '\x01';
		plr[p]._pHPBase = lVar2;
		if ((uVar6 & 0x8000000) == 0) {
			lVar2 = plr[p]._pMaxManaBase;
			drawmanaflag = '\x01';
			plr[p]._pMana = plr[p]._pMaxMana;
			plr[p]._pManaBase = lVar2;
		}
		break;
	case 0x15:
		if ((&spelldata)[spl].sTargeted != '\0') goto LAB_80044180;
		ClrPlrPath__Fi(p);
		plr[p]._pTSplType = '\x04';
LAB_800441a8:
		plr[p]._pSplFrom = '\x03';
		plr[p]._pSpell = (char)spl;
		plr[p].destAction = '\f';
		plr[p].destParam1 = (char)cursmx;
		plr[p].destParam2 = (char)cursmy;
		goto LAB_800441e0;
	case 0x16:
		if ((&spelldata)[spl].sTargeted == '\0') {
			ClrPlrPath__Fi(p);
			plr[p]._pSplType = '\x04';
			goto LAB_800441a8;
		}
LAB_80044180:
		plr[p]._pTSpell = (char)spl;
		plr[p]._pTSplType = '\x04';
		InitTargetCursor__Fi(p);
LAB_800441e0:
		CastScroll__Fii(p,spl);
		break;
	case 0x18:
		uVar6 = spl - 1;
		if ((int)(uVar6 * 0x4000000) < 0) {
			uVar7 = 1 << (uVar6 & 0x1f);
			uVar6 = 0;
		}
		else {
			uVar7 = 0 << (uVar6 & 0x1f);
			if (uVar6 * 0x4000000 != 0) {
				uVar7 = uVar7 | 1U >> (-uVar6 & 0x1f);
			}
			uVar6 = 1 << (uVar6 & 0x1f);
		}
		uVar4 = *(uint *)((int)&plr[p]._pMemSpells + 4);
		l = (int)&plr[p]._pmode + spl;
		*(uint *)&plr[p]._pMemSpells = *(uint *)&plr[p]._pMemSpells | uVar6;
		*(uint *)((int)&plr[p]._pMemSpells + 4) = uVar4 | uVar7;
		cVar1 = *(char *)(l + 0x7d);
		if (cVar1 < '\x0f') {
			*(char *)(l + 0x7d) = cVar1 + '\x01';
		}
		iVar5 = plr[p]._pMaxMana;
		l = plr[p]._pMana + (uint)(&spelldata)[spl].sManaCost * 0x40;
		plr[p]._pMana = l;
		if (iVar5 < l) {
			plr[p]._pMana = iVar5;
		}
		iVar5 = plr[p]._pMaxManaBase;
		l = plr[p]._pManaBase + (uint)(&spelldata)[spl].sManaCost * 0x40;
		plr[p]._pManaBase = l;
		if (iVar5 < l) {
			plr[p]._pManaBase = iVar5;
		}
		if (p == myplr) {
			CalcPlrBookVals__Fi(p);
		}
LAB_80043f94:
		drawmanaflag = '\x01';
		break;
	case 0x2a:
		DBG_Error((char *)0x0,"source/ITEMS.cpp",0xf51);
		break;
	case 0x2c:
		ModifyPlrStr__Fii(p,3);
		ModifyPlrMag__Fii(p,3);
		ModifyPlrDex__Fii(p,3);
		l = 3;
LAB_80044244:
		ModifyPlrVit__Fii(p,l);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ StoreStatOk__FP10ItemStruct(struct ItemStruct *h /*$a3*/)
 // line 3942, offset 0x8004426c
	/* begin block 1 */
		// Start line: 3943
		// Start offset: 0x8004426C
		// Variables:
	// 		unsigned char sf; // $a1
	/* end block 1 */
	// End offset: 0x800442F8
	// End Line: 3948

	/* begin block 2 */
		// Start line: 8931
	/* end block 2 */
	// End Line: 8932

uchar StoreStatOk__FP10ItemStruct(ItemStruct *h)

{
	return (uchar)((int)h->_iMinDex <= (int)plr[myplr]._pDexterity &&
								((int)(uint)h->_iMinMag <= (int)plr[myplr]._pMagic &&
								(int)h->_iMinStr <= (int)plr[myplr]._pStrength));
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PremiumItemOk__Fi(int i /*$a0*/)
 // line 3966, offset 0x80044300
	/* begin block 1 */
		// Start line: 3967
		// Start offset: 0x80044300
		// Variables:
	// 		unsigned char rv; // $a0
	/* end block 1 */
	// End offset: 0x80044374
	// End Line: 3982

	/* begin block 2 */
		// Start line: 8984
	/* end block 2 */
	// End Line: 8985

uchar PremiumItemOk__Fi(int i)

{
	char cVar1;
	bool bVar2;
	
	cVar1 = (&AllItemsList)[i].itype;
	bVar2 = cVar1 != '\n' && (cVar1 != '\x0e' && (cVar1 != '\v' && cVar1 != '\0'));
	if ((gbMaxPlayers != '\x01') && (bVar2 = cVar1 != '\f' && bVar2, cVar1 == '\r')) {
		bVar2 = false;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RndPremiumItem__Fii(int minlvl /*$s4*/, int maxlvl /*$s5*/)
 // line 3987, offset 0x8004437c
	/* begin block 1 */
		// Start line: 3988
		// Start offset: 0x8004437C
		// Variables:
	// 		int ril[512]; // stack offset -2080
	// 		int ri; // $s3
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8004445C
	// End Line: 4007

	/* begin block 2 */
		// Start line: 9022
	/* end block 2 */
	// End Line: 9023

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
	if (ItemDataStruct_80121384.iLoc != -1) {
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
			pcVar1 = &ItemDataStruct_80121384.iLoc + iVar3;
			i = i + 1;
			iVar3 = iVar3 + 0x20;
		} while (*pcVar1 != -1);
	}
	v = random__Fil(0x32,v);
	return local_820[v] + 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnOnePremium__Fii(int i /*$s2*/, int plvl /*$s1*/)
 // line 4014, offset 0x80044484
	/* begin block 1 */
		// Start line: 4015
		// Start offset: 0x80044484
		// Variables:
	// 		int itype; // $s0
	// 		int maxval; // $s4
	// 		struct ItemStruct holditem; // stack offset -176
	/* end block 1 */
	// End offset: 0x80044680
	// End Line: 4040

	/* begin block 2 */
		// Start line: 9099
	/* end block 2 */
	// End Line: 9100

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
	int local_b0 [36];
	int aiStack32 [2];
	
	pIVar1 = item;
	piVar9 = local_b0;
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
	} while ((ItemStruct *)&pIVar6->_iSeed != (ItemStruct *)&item[0]._iMinMag);
	iVar3 = pIVar6->_ivalue;
	piVar8[4] = item[0]._144_4_;
	piVar8[5] = iVar3;
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
	pIVar1 = item;
	pIVar6 = &premiumitem + i;
	do {
		pIVar10 = pIVar6;
		pIVar7 = pIVar1;
		iVar3 = pIVar7->_iVMult1;
		iVar4 = pIVar7->_iVAdd2;
		iVar5 = pIVar7->_iVMult2;
		pIVar10->_iVAdd1 = pIVar7->_iVAdd1;
		pIVar10->_iVMult1 = iVar3;
		pIVar10->_iVAdd2 = iVar4;
		pIVar10->_iVMult2 = iVar5;
		pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
		pIVar6 = (ItemStruct *)&pIVar10->_iSeed;
	} while ((ItemStruct *)&pIVar7->_iSeed != (ItemStruct *)&item[0]._iMinMag);
	iVar3 = pIVar7->_ivalue;
	((ItemStruct *)&pIVar10->_iSeed)->_iVAdd1 = item[0]._144_4_;
	pIVar10->_ivalue = iVar3;
	(&premiumitem)[i]._iCreateInfo = (ushort)plvl | 0x800;
	(&premiumitem)[i]._iIdentified = '\x01';
	uVar2 = StoreStatOk__FP10ItemStruct(&premiumitem + i);
	(&premiumitem)[i]._iStatFlag = uVar2;
	piVar9 = local_b0;
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
	} while (piVar9 != aiStack32);
	iVar3 = piVar8[5];
	((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = *piVar9;
	pIVar6->_ivalue = iVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnPremium__Fi(int lvl /*$s3*/)
 // line 4048, offset 0x800446a4
	/* begin block 1 */
		// Start line: 4049
		// Start offset: 0x800446A4
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800448C4
	// End Line: 4068

	/* begin block 2 */
		// Start line: 9180
	/* end block 2 */
	// End Line: 9181

void SpawnPremium__Fi(int lvl)

{
	ItemStruct *pIVar1;
	ItemStruct *pIVar2;
	int iVar3;
	ItemStruct *pIVar4;
	ItemStruct *pIVar5;
	int i;
	int iVar6;
	int *piVar7;
	
	if (numpremium < 6) {
		i = 0;
		piVar7 = premiumlvladd;
		iVar6 = 0;
		do {
			if (*(short *)((int)&premiumitem._itype + iVar6) == -1) {
				SpawnOnePremium__Fii(i,premiumlevel + *piVar7);
			}
			piVar7 = piVar7 + 1;
			i = i + 1;
			iVar6 = iVar6 + 0x98;
		} while (i < 6);
		numpremium = 6;
	}
	while (premiumlevel < lvl) {
		pIVar1 = &premiumitem;
		pIVar2 = &ItemStruct_800e4a84;
		premiumlevel = premiumlevel + 1;
		do {
			pIVar5 = pIVar2;
			pIVar4 = pIVar1;
			i = pIVar5->_iVMult1;
			iVar6 = pIVar5->_iVAdd2;
			iVar3 = pIVar5->_iVMult2;
			pIVar4->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar4->_iVMult1 = i;
			pIVar4->_iVAdd2 = iVar6;
			pIVar4->_iVMult2 = iVar3;
			pIVar1 = (ItemStruct *)&pIVar4->_iSeed;
			pIVar2 = (ItemStruct *)&pIVar5->_iSeed;
		} while ((ItemStruct *)&pIVar5->_iSeed != (ItemStruct *)&ItemStruct_800e4a84._iMinMag);
		i = pIVar5->_ivalue;
		((ItemStruct *)&pIVar4->_iSeed)->_iVAdd1 = ItemStruct_800e4a84._144_4_;
		pIVar4->_ivalue = i;
		pIVar1 = &ItemStruct_800e49ec;
		pIVar2 = &ItemStruct_800e4b1c;
		do {
			pIVar5 = pIVar2;
			pIVar4 = pIVar1;
			i = pIVar5->_iVMult1;
			iVar6 = pIVar5->_iVAdd2;
			iVar3 = pIVar5->_iVMult2;
			pIVar4->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar4->_iVMult1 = i;
			pIVar4->_iVAdd2 = iVar6;
			pIVar4->_iVMult2 = iVar3;
			pIVar1 = (ItemStruct *)&pIVar4->_iSeed;
			pIVar2 = (ItemStruct *)&pIVar5->_iSeed;
		} while ((ItemStruct *)&pIVar5->_iSeed != (ItemStruct *)&ItemStruct_800e4b1c._iMinMag);
		i = pIVar5->_ivalue;
		((ItemStruct *)&pIVar4->_iSeed)->_iVAdd1 = ItemStruct_800e4b1c._144_4_;
		pIVar4->_ivalue = i;
		pIVar1 = &ItemStruct_800e4a84;
		pIVar2 = &ItemStruct_800e4bb4;
		do {
			pIVar5 = pIVar2;
			pIVar4 = pIVar1;
			i = pIVar5->_iVMult1;
			iVar6 = pIVar5->_iVAdd2;
			iVar3 = pIVar5->_iVMult2;
			pIVar4->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar4->_iVMult1 = i;
			pIVar4->_iVAdd2 = iVar6;
			pIVar4->_iVMult2 = iVar3;
			pIVar1 = (ItemStruct *)&pIVar4->_iSeed;
			pIVar2 = (ItemStruct *)&pIVar5->_iSeed;
		} while ((ItemStruct *)&pIVar5->_iSeed != (ItemStruct *)&ItemStruct_800e4bb4._iMinMag);
		i = pIVar5->_ivalue;
		((ItemStruct *)&pIVar4->_iSeed)->_iVAdd1 = ItemStruct_800e4bb4._144_4_;
		pIVar4->_ivalue = i;
		SpawnOnePremium__Fii(3,premiumlevel + INT_ARRAY_800c136c[0]);
		pIVar1 = &ItemStruct_800e4bb4;
		pIVar2 = &ItemStruct_800e4c4c;
		do {
			pIVar5 = pIVar2;
			pIVar4 = pIVar1;
			i = pIVar5->_iVMult1;
			iVar6 = pIVar5->_iVAdd2;
			iVar3 = pIVar5->_iVMult2;
			pIVar4->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar4->_iVMult1 = i;
			pIVar4->_iVAdd2 = iVar6;
			pIVar4->_iVMult2 = iVar3;
			pIVar1 = (ItemStruct *)&pIVar4->_iSeed;
			pIVar2 = (ItemStruct *)&pIVar5->_iSeed;
		} while ((ItemStruct *)&pIVar5->_iSeed != (ItemStruct *)&ItemStruct_800e4c4c._iMinMag);
		i = pIVar5->_ivalue;
		((ItemStruct *)&pIVar4->_iSeed)->_iVAdd1 = ItemStruct_800e4c4c._144_4_;
		pIVar4->_ivalue = i;
		SpawnOnePremium__Fii(5,premiumlevel + INT_800c1374);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WitchBookLevel__Fi(int ii /*$a0*/)
 // line 4080, offset 0x800448e8
	/* begin block 1 */
		// Start line: 4081
		// Start offset: 0x800448E8
		// Variables:
	// 		int slvl; // $a2
	/* end block 1 */
	// End offset: 0x80044A30
	// End Line: 4093

	/* begin block 2 */
		// Start line: 9245
	/* end block 2 */
	// End Line: 9246

void WitchBookLevel__Fi(int ii)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	
	if ((&witchitem)[ii]._iMiscId == 0x18) {
		(&witchitem)[ii]._iMinMag = (uchar)(&spelldata)[(&witchitem)[ii]._iSpell].sMinInt;
		iVar3 = (int)*(char *)(myplr * 0x23a8 + -0x7ff2147f + (&witchitem)[ii]._iSpell);
		while (iVar3 != 0) {
			uVar2 = (uint)(&witchitem)[ii]._iMinMag + (int)(uint)(&witchitem)[ii]._iMinMag / 5;
			uVar1 = uVar2 & 0xff;
			(&witchitem)[ii]._iMinMag = (uchar)uVar2;
			iVar3 = iVar3 + -1;
			if (0xff < (int)(uVar1 + (int)uVar1 / 5)) {
				(&witchitem)[ii]._iMinMag = -1;
				iVar3 = 0;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnStoreGold__Fv()
 // line 4126, offset 0x80044a38
	/* begin block 1 */
		// Start line: 4127
		// Start offset: 0x80044A38
	/* end block 1 */
	// End offset: 0x80044AAC
	// End Line: 4131

	/* begin block 2 */
		// Start line: 9338
	/* end block 2 */
	// End Line: 9339

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
	pIVar1 = item;
	pIVar2 = &golditem;
	do {
		pIVar7 = pIVar2;
		pIVar6 = pIVar1;
		iVar3 = pIVar6->_iVMult1;
		iVar4 = pIVar6->_iVAdd2;
		iVar5 = pIVar6->_iVMult2;
		pIVar7->_iVAdd1 = pIVar6->_iVAdd1;
		pIVar7->_iVMult1 = iVar3;
		pIVar7->_iVAdd2 = iVar4;
		pIVar7->_iVMult2 = iVar5;
		pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
		pIVar2 = (ItemStruct *)&pIVar7->_iSeed;
	} while ((ItemStruct *)&pIVar6->_iSeed != (ItemStruct *)&item[0]._iMinMag);
	iVar3 = pIVar6->_ivalue;
	((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = item[0]._144_4_;
	pIVar7->_ivalue = iVar3;
	golditem._iStatFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RecalcStoreStats__Fv()
 // line 4179, offset 0x80044abc
	/* begin block 1 */
		// Start line: 4180
		// Start offset: 0x80044ABC
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80044C3C
	// End Line: 4191

	/* begin block 2 */
		// Start line: 9444
	/* end block 2 */
	// End Line: 9445

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RecalcStoreStats__Fv(void)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	ItemStruct *h;
	
	iVar3 = 0;
	h = &smithitem;
	iVar2 = 0;
	do {
		if (*(short *)((int)&smithitem._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct(h);
			(&smithitem._iStatFlag)[iVar2] = uVar1;
		}
		h = h + 1;
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x98;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	h = &premiumitem;
	iVar2 = 0;
	do {
		if (*(short *)((int)&premiumitem._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct(h);
			(&premiumitem._iStatFlag)[iVar2] = uVar1;
		}
		h = h + 1;
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x98;
	} while (iVar3 < 6);
	iVar3 = 0;
	h = &witchitem;
	iVar2 = 0;
	do {
		if (*(short *)((int)&witchitem._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct(h);
			(&witchitem._iStatFlag)[iVar2] = uVar1;
		}
		h = h + 1;
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x98;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	h = &healitem;
	iVar2 = 0;
	do {
		if (*(short *)((int)&healitem._itype + iVar2) != -1) {
			uVar1 = StoreStatOk__FP10ItemStruct(h);
			(&healitem._iStatFlag)[iVar2] = uVar1;
		}
		h = h + 1;
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x98;
	} while (iVar3 < 0x14);
	boyitem._iStatFlag = StoreStatOk__FP10ItemStruct(&boyitem);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ItemNoFlippy__Fv()
 // line 4202, offset 0x80044c5c
	/* begin block 1 */
		// Start line: 4203
		// Start offset: 0x80044C5C
		// Variables:
	// 		int r; // $v0
	/* end block 1 */
	// End offset: 0x80044CB8
	// End Line: 4211

	/* begin block 2 */
		// Start line: 9505
	/* end block 2 */
	// End Line: 9506

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ItemNoFlippy__Fv(void)

{
	char cVar1;
	int iVar2;
	
	iVar2 = (int)*(char *)(&ItemStruct_800c5ee0.field_0x97 + numitems);
	cVar1 = item[iVar2]._iAnimLen;
	item[iVar2]._iAnimFlag = '\0';
	item[iVar2]._iSelFlag = '\x01';
	item[iVar2]._iAnimFrame = cVar1;
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateSpellBook__FiiiUcUc(int x /*$s0*/, int y /*$s1*/, int ispell /*$s7*/, unsigned char sendmsg /*$fp*/, int delta /*stack 16*/)
 // line 4229, offset 0x80044cc0
	/* begin block 1 */
		// Start line: 4230
		// Start offset: 0x80044CC0
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s6
	// 		unsigned char done; // $s3
	/* end block 1 */
	// End offset: 0x80044E1C
	// End Line: 4252

	/* begin block 2 */
		// Start line: 9559
	/* end block 2 */
	// End Line: 9560

void CreateSpellBook__FiiiUcUc(int x,int y,int ispell,uchar sendmsg,int delta)

{
	bool bVar1;
	char cVar2;
	int idx;
	long iseed;
	int ii;
	
	bVar1 = false;
	idx = RndTypeItems__Fii(0,0x18);
	cVar2 = itemavail[0];
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar2;
		do {
			iseed = GetRndSeed__Fv();
			SetupAllItems__FiiiiiUcUcUc(ii,idx,iseed,(uint)currlevel << 1,1,1,0,delta & 0xff);
			if ((item[ii]._iMiscId == 0x18) && (item[ii]._iSpell == ispell)) {
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
 // line 4259, offset 0x80044e50
	/* begin block 1 */
		// Start line: 4260
		// Start offset: 0x80044E50
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s0
	// 		unsigned char done; // $s2
	/* end block 1 */
	// End offset: 0x80044F98
	// End Line: 4281

	/* begin block 2 */
		// Start line: 9651
	/* end block 2 */
	// End Line: 9652

void CreateMagicArmor__FiiiiUcUc(int x,int y,int imisc,int icurs,int sendmsg,int delta)

{
	bool bVar1;
	char cVar2;
	int idx;
	long iseed;
	int ii;
	
	cVar2 = itemavail[0];
	bVar1 = false;
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar2;
		idx = RndTypeItems__Fii(imisc,0);
		do {
			iseed = GetRndSeed__Fv();
			SetupAllItems__FiiiiiUcUcUc(ii,idx,iseed,(uint)currlevel << 1,1,1,0,delta & 0xff);
			if ((int)item[ii]._iCurs == icurs) {
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
 // line 4288, offset 0x80044fcc
	/* begin block 1 */
		// Start line: 4289
		// Start offset: 0x80044FCC
		// Variables:
	// 		int ii; // $s1
	// 		int idx; // $s0
	// 		unsigned char done; // $s2
	/* end block 1 */
	// End offset: 0x80045114
	// End Line: 4310

	/* begin block 2 */
		// Start line: 9725
	/* end block 2 */
	// End Line: 9726

void CreateMagicWeapon__FiiiiUcUc(int x,int y,int imisc,int icurs,int sendmsg,int delta)

{
	bool bVar1;
	char cVar2;
	int idx;
	long iseed;
	int ii;
	
	cVar2 = itemavail[0];
	bVar1 = false;
	if (numitems < 0x7f) {
		ii = (int)itemavail[0];
		GetSuperItemSpace__Fiic(x,y,itemavail[0]);
		itemavail[0] = itemavail[0x7e - numitems];
		itemactive[numitems] = cVar2;
		idx = RndTypeItems__Fii(imisc,0);
		do {
			iseed = GetRndSeed__Fv();
			SetupAllItems__FiiiiiUcUcUc(ii,idx,iseed,(uint)currlevel << 1,1,1,0,delta & 0xff);
			if ((int)item[ii]._iCurs == icurs) {
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
 // line 4448, offset 0x80045148
	/* begin block 1 */
		// Start line: 4449
		// Start offset: 0x80045148
		// Variables:
	// 		int u; // $v1
	/* end block 1 */
	// End offset: 0x8004529C
	// End Line: 4490

	/* begin block 2 */
		// Start line: 10055
	/* end block 2 */
	// End Line: 10056

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawUniqueInfo__Fv(void)

{
	char cVar1;
	int iVar2;
	
	ClearPanel__Fv();
	iVar2 = (int)curruitem._iUid;
	PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower1,&curruitem);
	AddPanelString__FPCci(tempstr,1);
	cVar1 = UniqueItemList[iVar2].UINumPL;
	if ('\x01' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower2,&curruitem);
		AddPanelString__FPCci(tempstr,1);
	}
	if ('\x02' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower3,&curruitem);
		AddPanelString__FPCci(tempstr,1);
	}
	if ('\x03' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower4,&curruitem);
		AddPanelString__FPCci(tempstr,1);
	}
	if ('\x04' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower5,&curruitem);
		AddPanelString__FPCci(tempstr,1);
	}
	if ('\x05' < cVar1) {
		PrintItemPower__FcPC10ItemStruct(UniqueItemList[iVar2].UIPower6,&curruitem);
		AddPanelString__FPCci(tempstr,1);
	}
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr /*$s0*/, unsigned short ItemNo /*$s1*/, unsigned short MaxLen /*$s4*/)
 // line 4643, offset 0x800452bc
	/* begin block 1 */
		// Start line: 4644
		// Start offset: 0x800452BC
		// Variables:
	// 		int PreIdx; // $v1
	// 		int SufIdx; // $s3
	/* end block 1 */
	// End offset: 0x80045430
	// End Line: 4742

	/* begin block 2 */
		// Start line: 10445
	/* end block 2 */
	// End Line: 10446

char * MakeItemStr__FP10ItemStructUsUs(ItemStruct *ItemPtr,ushort ItemNo,ushort MaxLen)

{
	char *__src;
	char *pcVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = -1;
	iVar2 = -1;
	if (ItemPtr->_iIdentified != '\0') {
		iVar2 = (int)ItemPtr->_iPrePower;
		iVar3 = (int)ItemPtr->_iSufPower;
	}
	ItemStr[0] = '\0';
	if (iVar2 != -1) {
		__src = GetStr__Fi(PL_Prefix[iVar2].PLName);
		sprintf(ItemStr,(char *)&PTR_DAT_8012b37c,__src);
	}
	switch(ItemPtr->_iMiscId) {
	case 0x18:
		__src = GetStr__Fi(STR_BOOK_OF_);
		strcat(ItemStr,__src);
	}
	__src = GetStr__Fi((uint)ItemNo);
	strcat(ItemStr,__src);
	if (iVar3 != -1) {
		__src = GetStr__Fi(STR__S_OF__S);
		pcVar1 = GetStr__Fi(PL_Suffix[iVar3].PLName);
		sprintf(SufStr,__src,ItemStr,pcVar1);
		iVar2 = GetStrWidth__5CFontPc(&MediumFont,SufStr);
		if (iVar2 <= (int)(uint)MaxLen) {
			strcpy(ItemStr,SufStr);
		}
	}
	return ItemStr;
}





