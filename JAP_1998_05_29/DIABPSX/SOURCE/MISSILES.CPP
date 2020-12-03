#include "THISDUST.H"
#include "MISSILES.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GetDamageAmt__FiPiT1(int i /*$a0*/, int *mind /*$a3*/, int *maxd /*$a2*/)
 // line 274, offset 0x80139c04
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x80139C04
		// Variables:
	// 		int k; // $a0
	// 		int sl; // $a1
	// 		struct PlayerStruct *plr; // $a1
	// 		int _pMagic; // $t1
	// 		char _pLevel; // $t0
	// 		char _pClass; // $t2
	/* end block 1 */
	// End offset: 0x8013A1F0
	// End Line: 426

	/* begin block 2 */
		// Start line: 548
	/* end block 2 */
	// End Line: 549

void GetDamageAmt__FiPiT1(int i,int *mind,int *maxd)

{
	byte bVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = (int)plr[myplr]._pMagic;
	bVar1 = plr[myplr]._pLevel;
	cVar2 = plr[myplr]._pClass;
	iVar4 = (int)plr[myplr]._pSplLvl[i] + (int)plr[myplr]._pISplLvlAdd;
	if (0x23 < i - 1U) {
		return;
	}
	iVar3 = iVar5 >> 3;
	switch(i) {
	case 1:
		*mind = iVar3 + iVar4 + 1;
		iVar3 = iVar3 + iVar4 + 10;
		break;
	case 2:
		iVar3 = (int)(char)bVar1;
		iVar5 = iVar3 + iVar4 + 1;
		*mind = iVar5;
		if (cVar2 == '\0') {
			*mind = iVar5 * 2;
		}
		if (cVar2 == '\x01') {
			*mind = *mind + (*mind >> 1);
		}
		*maxd = 10;
		iVar5 = 0;
		if (0 < iVar3) {
			do {
				iVar5 = iVar5 + 1;
				*maxd = *maxd + 4;
			} while (iVar5 < iVar3);
		}
		iVar5 = 0;
		if (0 < iVar4) {
			do {
				iVar5 = iVar5 + 1;
				*maxd = *maxd + 6;
			} while (iVar5 < iVar4);
		}
		if (cVar2 == '\0') {
			*maxd = *maxd << 1;
		}
		if (cVar2 == '\x01') {
			*maxd = *maxd + (*maxd >> 1);
		}
		iVar3 = -1;
		goto LAB_8013a1e8;
	case 3:
		*mind = 2;
		iVar3 = (int)(char)bVar1 + 2;
		break;
	case 4:
		*mind = (int)(char)bVar1;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*mind = *mind + (*mind >> 3);
		}
		iVar3 = *mind + (*mind >> 1);
		*mind = iVar3;
		iVar3 = iVar3 * 2;
		break;
	default:
		iVar3 = -1;
		goto LAB_8013a1e8;
	case 6:
		*mind = ((int)(char)bVar1 + 2) * 2;
		*maxd = ((int)(char)bVar1 + 0x14) * 2;
		return;
	case 0xc:
		*mind = ((int)((uint)bVar1 << 0x18) >> 0x17) + 4;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*mind = *mind + (*mind >> 3);
		}
		*maxd = ((int)((uint)bVar1 << 0x18) >> 0x17) + 0x28;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*maxd = *maxd + (*maxd >> 3);
		}
		return;
	case 0xd:
		*mind = ((int)((uint)bVar1 << 0x18) >> 0x19) + 1;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*mind = *mind + (*mind >> 3);
		}
		*maxd = ((int)((uint)bVar1 << 0x18) >> 0x19) + 10;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*maxd = *maxd + (*maxd >> 3);
		}
		return;
	case 0xe:
		*mind = 4;
		iVar3 = ((int)((uint)bVar1 << 0x18) >> 0x17) + 4;
		break;
	case 0xf:
		iVar3 = ((int)(char)bVar1 + 10) * 6;
		*mind = ((int)(char)bVar1 + 1) * 6;
		break;
	case 0x12:
		*mind = (int)(char)bVar1 + 5 >> 1;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*mind = *mind + (*mind >> 3);
		}
		*mind = *mind * 5;
		*maxd = (int)(char)bVar1 + 0x1e >> 1;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*maxd = *maxd + (*maxd >> 3);
		}
		iVar3 = *maxd * 5;
		break;
	case 0x14:
		*mind = 3;
		iVar3 = (int)(char)bVar1 + 4 + ((int)(char)bVar1 + 4 >> 1);
		break;
	case 0x15:
		*mind = 0xb;
		iVar3 = 0x11;
		break;
	case 0x18:
		*mind = 0;
		iVar4 = 0;
		if (0 < (int)(char)bVar1) {
			do {
				iVar4 = iVar4 + 1;
				*mind = *mind + 1;
			} while (iVar4 < (int)(char)bVar1);
		}
		*maxd = 0;
		iVar4 = 0;
		if ((int)(char)bVar1 < 1) {
			return;
		}
		do {
			iVar4 = iVar4 + 1;
			*maxd = *maxd + 6;
		} while (iVar4 < (int)(char)bVar1);
		return;
	case 0x1d:
		*mind = ((int)((uint)bVar1 << 0x18) >> 0x17) + 4;
		iVar5 = iVar4;
		while (0 < iVar5) {
			iVar5 = iVar5 + -1;
			*mind = *mind + (*mind >> 3);
		}
		*maxd = ((int)((uint)bVar1 << 0x18) >> 0x17) + 0x28;
		while (0 < iVar4) {
			iVar4 = iVar4 + -1;
			*maxd = *maxd + (*maxd >> 3);
		}
		return;
	case 0x1e:
		*mind = 1;
		iVar3 = (iVar5 >> 2) + 1;
		break;
	case 0x1f:
		iVar3 = (int)(char)bVar1 + 0x12;
		*mind = (int)(char)bVar1 + 9;
		break;
	case 0x22:
		iVar3 = (int)(char)bVar1;
		iVar5 = iVar3 + iVar4 + 1;
		*mind = iVar5;
		if (cVar2 == '\0') {
			*mind = iVar5 * 2;
		}
		if (cVar2 == '\x01') {
			*mind = *mind + (*mind >> 1);
		}
		*maxd = 10;
		iVar5 = 0;
		if (0 < iVar3) {
			do {
				iVar5 = iVar5 + 1;
				*maxd = *maxd + 4;
			} while (iVar5 < iVar3);
		}
		iVar5 = 0;
		if (0 < iVar4) {
			do {
				iVar5 = iVar5 + 1;
				*maxd = *maxd + 6;
			} while (iVar5 < iVar4);
		}
		if (cVar2 == '\0') {
			*maxd = *maxd << 1;
		}
		if (cVar2 == '\x01') {
			*maxd = *maxd + (*maxd >> 1);
		}
		iVar3 = -1;
		goto LAB_8013a1e8;
	case 0x23:
		iVar3 = ((iVar5 >> 1) - iVar3) + iVar4 * 3;
LAB_8013a1e8:
		*mind = iVar3;
	}
	*maxd = iVar3;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckBlock__Fiiii(int fx /*$s0*/, int fy /*$s1*/, int tx /*$s2*/, int ty /*$s3*/)
 // line 443, offset 0x8013a1fc
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x8013A1FC
		// Variables:
	// 		int coll; // $s4
	/* end block 1 */
	// End offset: 0x8013A28C
	// End Line: 464

	/* begin block 2 */
		// Start line: 896
	/* end block 2 */
	// End Line: 897

int CheckBlock__Fiiii(int fx,int fy,int tx,int ty)

{
	int iVar1;
	void *pvVar2;
	int iVar3;
	
	iVar3 = 0;
	while ((fx != tx || (fy != ty))) {
		iVar1 = GetDirection__Fiiii(fx,fy,tx,ty);
		fx = fx + XDirAdd[iVar1];
		fy = fy + YDirAdd[iVar1];
		pvVar2 = GetSOLID__Fii(fx,fy);
		if (pvVar2 != (void *)0x0) {
			iVar3 = 1;
		}
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindClosest__Fiii(int sx /*$s4*/, int sy /*$s5*/, int rad /*$s6*/)
 // line 469, offset 0x8013a2b0
	/* begin block 1 */
		// Start line: 470
		// Start offset: 0x8013A2B0
		// Variables:
	// 		int cr; // $s3
	// 		int cidx; // $v0
	// 		int cent; // $s1
	// 		int cne; // $s2
	// 		int mid; // $s0
	// 		int tx; // $a2
	// 		int ty; // $a3
	// 		int CrawlNum[19]; // stack offset -112
	/* end block 1 */
	// End offset: 0x8013A410
	// End Line: 492

	/* begin block 2 */
		// Start line: 953
	/* end block 2 */
	// End Line: 954

int FindClosest__Fiii(int sx,int sy,int rad)

{
	short sVar1;
	undefined **ppuVar2;
	int *piVar3;
	int tx;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	int *piVar8;
	int ty;
	int iVar9;
	uint uVar10;
	int iVar11;
	int local_70 [20];
	
	ppuVar2 = (undefined **)&DAT_80119de4;
	piVar3 = local_70;
	do {
		piVar8 = piVar3;
		ppuVar7 = ppuVar2;
		puVar4 = ppuVar7[1];
		puVar5 = ppuVar7[2];
		puVar6 = ppuVar7[3];
		*(undefined **)piVar8 = *ppuVar7;
		*(undefined **)(piVar8 + 1) = puVar4;
		*(undefined **)(piVar8 + 2) = puVar5;
		*(undefined **)(piVar8 + 3) = puVar6;
		ppuVar2 = ppuVar7 + 4;
		piVar3 = piVar8 + 4;
	} while (ppuVar7 + 4 != PTR_ARRAY_80119e14 + 4);
	puVar4 = ppuVar7[5];
	puVar5 = ppuVar7[6];
	*(undefined **)(piVar8 + 4) = PTR_ARRAY_80119e14[4];
	*(undefined **)(piVar8 + 5) = puVar4;
	*(undefined **)(piVar8 + 6) = puVar5;
	iVar11 = 1;
	if (0x13 < rad) {
		rad = 0x13;
	}
	if (1 < rad) {
		tx = 4;
		do {
			uVar10 = (uint)(byte)(&CrawlTable)[*(int *)((int)local_70 + tx)];
			iVar9 = *(int *)((int)local_70 + tx) + 1;
			if ((&CrawlTable)[*(int *)((int)local_70 + tx)] != 0) {
				do {
					tx = sx + (int)(&CrawlTable)[iVar9];
					ty = sy + (int)(&CHAR_00h_800d5555)[iVar9];
					if ((((tx - 1U < 0x6f) && (ty - 1U < 0x6f)) &&
							(sVar1 = dung_map[tx * 0x70 + ty].dMonster, 0 < (int)sVar1)) &&
						 (tx = CheckBlock__Fiiii(sx,sy,tx,ty), tx == 0)) {
						return (int)sVar1 + -1;
					}
					uVar10 = uVar10 - 1;
					iVar9 = iVar9 + 2;
				} while (0 < (int)uVar10);
			}
			iVar11 = iVar11 + 1;
			tx = iVar11 * 4;
		} while (iVar11 < rad);
	}
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSpellLevel__Fii(int id /*$a0*/, int sn /*$a1*/)
 // line 498, offset 0x8013a43c
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x8013A43C
		// Variables:
	// 		int rv; // $v0
	/* end block 1 */
	// End offset: 0x8013A4A8
	// End Line: 509

	/* begin block 2 */
		// Start line: 1019
	/* end block 2 */
	// End Line: 1020

int GetSpellLevel__Fii(int id,int sn)

{
	int iVar1;
	
	if (id == myplr) {
		iVar1 = (int)*(char *)(id * 0x19e8 + -0x7ff25a57 + sn) + (int)plr[id]._pISplLvlAdd;
	}
	else {
		iVar1 = 1;
	}
	if (iVar1 < 0) {
		iVar1 = 0;
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetDirection8__Fiiii(int x1 /*$s7*/, int y1 /*$s1*/, int x2 /*$fp*/, int y2 /*$s2*/)
 // line 530, offset 0x8013a4b0
	/* begin block 1 */
		// Start line: 531
		// Start offset: 0x8013A4B0
		// Variables:
	// 		unsigned char Dirs[16][16]; // stack offset -328
	// 		unsigned char lrtoul[3]; // stack offset -72
	// 		unsigned char urtoll[3]; // stack offset -64
	// 		unsigned char lltour[3]; // stack offset -56
	// 		unsigned char ultolr[3]; // stack offset -48
	// 		int mx; // $s0
	// 		int my; // $v1
	// 		int md; // $v1
	/* end block 1 */
	// End offset: 0x8013A698
	// End Line: 571

	/* begin block 2 */
		// Start line: 1078
	/* end block 2 */
	// End Line: 1079

/* WARNING: Removing unreachable block (ram,0x8013a504) */
/* WARNING: Removing unreachable block (ram,0x8013a508) */
/* WARNING: Removing unreachable block (ram,0x8013a554) */

int GetDirection8__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	undefined4 uVar5;
	uint uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 local_148 [64];
	byte local_48 [8];
	byte local_40 [8];
	byte local_38 [8];
	byte local_30 [8];
	
	puVar10 = local_148;
	puVar9 = &DAT_80119e30;
	do {
		uVar5 = puVar9[1];
		uVar7 = puVar9[2];
		uVar8 = puVar9[3];
		*puVar10 = *puVar9;
		puVar10[1] = uVar5;
		puVar10[2] = uVar7;
		puVar10[3] = uVar8;
		puVar9 = puVar9 + 4;
		puVar10 = puVar10 + 4;
	} while (puVar9 != &DAT_80119f30);
	local_48[0] = DAT_8011c258;
	local_48[1] = DAT_8011c259;
	local_48[2] = DAT_8011c25a;
	local_40[0] = DAT_8011c25c;
	local_40[1] = DAT_8011c25d;
	local_40[2] = DAT_8011c25e;
	local_38[0] = DAT_8011c260;
	local_38[1] = DAT_8011c261;
	local_38[2] = DAT_8011c262;
	local_30[0] = DAT_8011c264;
	local_30[1] = DAT_8011c265;
	local_30[2] = DAT_8011c266;
	iVar1 = abs(x2 - x1);
	if (0xf < iVar1) {
		iVar1 = 0xf;
	}
	iVar2 = abs(y2 - y1);
	iVar3 = iVar2 << 4;
	if (0xf < iVar2) {
		iVar3 = 0xf0;
	}
	uVar6 = (uint)*(byte *)((int)local_148 + iVar1 + iVar3);
	if (x2 < x1) {
		pbVar4 = local_48 + uVar6;
		if (y1 <= y2) {
			pbVar4 = local_40 + uVar6;
		}
	}
	else {
		pbVar4 = local_38 + uVar6;
		if (y1 <= y2) {
			pbVar4 = local_30 + uVar6;
		}
	}
	return (uint)*pbVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetDirection16__Fiiii(int x1 /*$s7*/, int y1 /*$s1*/, int x2 /*$fp*/, int y2 /*$s2*/)
 // line 576, offset 0x8013a6cc
	/* begin block 1 */
		// Start line: 577
		// Start offset: 0x8013A6CC
		// Variables:
	// 		unsigned char Dirs[16][16]; // stack offset -328
	// 		unsigned char lrtoul[5]; // stack offset -72
	// 		unsigned char urtoll[5]; // stack offset -64
	// 		unsigned char lltour[5]; // stack offset -56
	// 		unsigned char ultolr[5]; // stack offset -48
	// 		int mx; // $s0
	// 		int my; // $v1
	// 		int md; // $v1
	/* end block 1 */
	// End offset: 0x8013A8B4
	// End Line: 617

	/* begin block 2 */
		// Start line: 1178
	/* end block 2 */
	// End Line: 1179

/* WARNING: Removing unreachable block (ram,0x8013a720) */
/* WARNING: Removing unreachable block (ram,0x8013a724) */
/* WARNING: Removing unreachable block (ram,0x8013a770) */

int GetDirection16__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	undefined4 uVar5;
	uint uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 local_148 [64];
	undefined4 local_48;
	undefined local_44;
	undefined4 local_40;
	undefined local_3c;
	undefined4 local_38;
	undefined local_34;
	undefined4 local_30;
	undefined local_2c;
	
	puVar10 = local_148;
	puVar9 = &DAT_80119f30;
	do {
		uVar5 = puVar9[1];
		uVar7 = puVar9[2];
		uVar8 = puVar9[3];
		*puVar10 = *puVar9;
		puVar10[1] = uVar5;
		puVar10[2] = uVar7;
		puVar10[3] = uVar8;
		puVar9 = puVar9 + 4;
		puVar10 = puVar10 + 4;
	} while (puVar9 != &DAT_8011a030);
	local_48 = DAT_8011c268;
	local_44 = DAT_8011c26c;
	local_40 = DAT_8011c270;
	local_3c = DAT_8011c274;
	local_38 = DAT_8011c278;
	local_34 = DAT_8011c27c;
	local_30 = DAT_8011c280;
	local_2c = DAT_8011c284;
	iVar1 = abs(x2 - x1);
	if (0xf < iVar1) {
		iVar1 = 0xf;
	}
	iVar2 = abs(y2 - y1);
	iVar3 = iVar2 << 4;
	if (0xf < iVar2) {
		iVar3 = 0xf0;
	}
	uVar6 = (uint)*(byte *)((int)local_148 + iVar1 + iVar3);
	if (x2 < x1) {
		pbVar4 = (byte *)((int)&local_48 + uVar6);
		if (y1 <= y2) {
			pbVar4 = (byte *)((int)&local_40 + uVar6);
		}
	}
	else {
		pbVar4 = (byte *)((int)&local_38 + uVar6);
		if (y1 <= y2) {
			pbVar4 = (byte *)((int)&local_30 + uVar6);
		}
	}
	return (uint)*pbVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteMissile__Fii(int mi /*$a0*/, int i /*$s0*/)
 // line 622, offset 0x8013a8e8
	/* begin block 1 */
		// Start line: 623
		// Start offset: 0x8013A8E8
	/* end block 1 */
	// End offset: 0x8013A974
	// End Line: 631

	/* begin block 2 */
		// Start line: 1278
	/* end block 2 */
	// End Line: 1279

void DeleteMissile__Fii(int mi,int i)

{
	int iVar1;
	
	iVar1 = 0x7d - nummissiles;
	nummissiles = nummissiles + -1;
	missileavail[iVar1] = (short)mi;
	AddUnLight__Fi((int)missile[mi]._mlid);
	if ((0 < nummissiles) && (i != nummissiles)) {
		(&missileactive)[i] = (&missileactive)[nummissiles];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetMissileVel__Fiiiiii(int i /*$s6*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int v /*stack 20*/)
 // line 637, offset 0x8013a988
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x8013A988
		// Variables:
	// 		long dxp; // $s0
	// 		long dyp; // $s2
	// 		long dr; // $s4
	/* end block 1 */
	// End offset: 0x8013AB14
	// End Line: 649

	/* begin block 2 */
		// Start line: 1312
	/* end block 2 */
	// End Line: 1313

void GetMissileVel__Fiiiiii(int i,int sx,int sy,int dx,int dy,int v)

{
	uint ix;
	long lVar1;
	uint uVar2;
	int iVar3;
	uint iy;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = (dx - sx) * 0x20;
	ix = (iVar3 + (dy - sy) * -0x20) * 0x10000;
	iVar4 = (int)ix >> 0x1f;
	iy = (iVar3 + (dy - sy) * 0x20) * 0x10000;
	iVar5 = (int)iy >> 0x1f;
	iVar3 = veclen2__Fii(ix,iy);
	iVar6 = iVar3 >> 0x1f;
	if ((ix == 0) && (iVar4 == 0)) {
		ix = 1;
		iVar4 = 0;
	}
	if ((iy == 0) && (iVar5 == 0)) {
		iy = 1;
		iVar5 = 0;
	}
	if ((iVar3 == 0) && (iVar6 == 0)) {
		iVar3 = 1;
		iVar6 = 0;
	}
	uVar2 = v * 0x10000;
	lVar1 = __divdi3((int)((ulonglong)uVar2 * (ulonglong)ix),
									 (int)((ulonglong)uVar2 * (ulonglong)ix >> 0x20) + uVar2 * iVar4 +
									 ix * ((int)uVar2 >> 0x1f),iVar3,iVar6);
	ix = v * 0x8000;
	missile[i]._mixvel = lVar1;
	lVar1 = __divdi3((int)((ulonglong)ix * (ulonglong)iy),
									 (int)((ulonglong)ix * (ulonglong)iy >> 0x20) + ix * iVar5 +
									 iy * ((int)ix >> 0x1f),iVar3,iVar6);
	missile[i]._miyvel = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutMissile__Fi(int i /*$a0*/)
 // line 656, offset 0x8013ab44
	/* begin block 1 */
		// Start line: 657
		// Start offset: 0x8013AB44
		// Variables:
	// 		int mx; // $a3
	// 		int my; // $t0
	// 		char m; // $a1

		/* begin block 1.1 */
			// Start line: 668
			// Start offset: 0x8013ABB4

			/* begin block 1.1.1 */
				// Start line: 668
				// Start offset: 0x8013ABE0

				/* begin block 1.1.1.1 */
					// Start line: 668
					// Start offset: 0x8013ABE0

					/* begin block 1.1.1.1.1 */
						// Start line: 673
						// Start offset: 0x8013AC38
						// Variables:
					// 		char dMiss; // $a2
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013AD64
					// End Line: 698
				/* end block 1.1.1.1 */
				// End offset: 0x8013AD64
				// End Line: 698
			/* end block 1.1.1 */
			// End offset: 0x8013AD94
			// End Line: 703
		/* end block 1.1 */
		// End offset: 0x8013AD94
		// End Line: 703
	/* end block 1 */
	// End offset: 0x8013AD94
	// End Line: 703

	/* begin block 2 */
		// Start line: 1362
	/* end block 2 */
	// End Line: 1363

void PutMissile__Fi(int i)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	uint uVar4;
	uint uVar5;
	int iVar6;
	byte bVar7;
	int iVar8;
	uint uVar9;
	int iVar10;
	
	iVar8 = (int)missile[i]._mix;
	iVar10 = (int)missile[i]._miy;
	if ((((iVar8 < 1) || (iVar10 < 1)) || (0x6f < iVar8)) || (0x6f < iVar10)) {
		missile[i]._miDelFlag = '\x01';
	}
	if (missile[i]._miDelFlag == '\0') {
		cVar1 = dung_map[iVar8 * 0x70 + iVar10].dMissile;
		uVar4 = SEXT14(cVar1);
		dung_map[iVar8 * 0x70 + iVar10].dFlags = dung_map[iVar8 * 0x70 + iVar10].dFlags | 0x40;
		cVar2 = (char)i;
		if (uVar4 == 0) {
			dung_map[iVar8 * 0x70 + iVar10].dMissile = cVar2 + '\x01';
		}
		else {
			if ((int)uVar4 < 0) {
				uVar9 = (uVar4 & 0x60) >> 5;
				uVar5 = uVar9 + 1;
				if (missile[i]._mitype ==
						missile[(int)(&dMissArray + (uVar4 & 0x1f) * 4)[uVar9] + -1]._mitype) {
					return;
				}
				if (uVar5 < 4) {
					(&dMissArray + (uVar4 & 0x1f) * 4)[uVar5] = cVar2 + '\x01';
					dung_map[iVar8 * 0x70 + iVar10].dMissile = dung_map[iVar8 * 0x70 + iVar10].dMissile + ' ';
				}
			}
			else {
				uVar4 = 0;
				bVar7 = 0;
				do {
					iVar6 = (int)(uVar4 << 0x18) >> 0x16;
					bVar3 = bVar7 + 1;
					if ((&dMissArray)[iVar6] == '\0') {
						(&dMissArray)[iVar6] = cVar1;
						s__80105175[iVar6] = cVar2 + '\x01';
						dung_map[iVar8 * 0x70 + iVar10].dMissile = bVar7 + 0xa0;
						break;
					}
					uVar4 = (uint)bVar3;
					bVar7 = bVar3;
				} while ((char)bVar3 < ' ');
			}
		}
		if (missile[i]._miPreFlag != '\0') {
			MissilePreFlag = '\x01';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetMissilePos__Fi(int i /*$a0*/)
 // line 719, offset 0x8013ada0
	/* begin block 1 */
		// Start line: 720
		// Start offset: 0x8013ADA0
		// Variables:
	// 		long mx; // $a3
	// 		long my; // $t1
	// 		long dx; // $a1
	// 		long dy; // $a2
	// 		long lx; // $t2
	// 		long ly; // $t0
	/* end block 1 */
	// End offset: 0x8013AEC4
	// End Line: 751

	/* begin block 2 */
		// Start line: 1492
	/* end block 2 */
	// End Line: 1493

void GetMissilePos__Fi(int i)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	char cVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	sVar3 = *(short *)((int)&missile[i]._mityoff + 2);
	sVar4 = *(short *)((int)&missile[i]._mitxoff + 2);
	iVar6 = (int)sVar3 * 2;
	iVar7 = (int)sVar4 + iVar6;
	iVar6 = iVar6 - (int)sVar4;
	if (iVar7 < 0) {
		iVar9 = -(-iVar7 >> 3);
		iVar7 = -(-iVar7 >> 6);
	}
	else {
		iVar9 = iVar7 >> 3;
		iVar7 = iVar7 >> 6;
	}
	iVar8 = iVar6 >> 3;
	if (iVar6 < 0) {
		iVar8 = -(-iVar6 >> 3);
		iVar6 = -(-iVar6 >> 6);
	}
	else {
		iVar6 = iVar6 >> 6;
	}
	cVar1 = (char)iVar6;
	cVar5 = (char)iVar7;
	missile[i]._mixoff = (char)sVar4 + (cVar5 - cVar1) * -0x20;
	missile[i]._miyoff = (char)sVar3 + (cVar5 + cVar1) * -0x10;
	cVar2 = missile[i]._misx;
	missile[i]._miy = missile[i]._misy + cVar1;
	cVar1 = missile[i]._mlid;
	missile[i]._mix = cVar2 + cVar5;
	ChangeLightOff__Fiii((int)cVar1,iVar9 + iVar7 * -8,iVar8 + iVar6 * -8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveMissilePos__Fi(int i /*$a0*/)
 // line 761, offset 0x8013aed4
	/* begin block 1 */
		// Start line: 762
		// Start offset: 0x8013AED4
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s1
	/* end block 1 */
	// End offset: 0x8013B030
	// End Line: 819

	/* begin block 2 */
		// Start line: 1594
	/* end block 2 */
	// End Line: 1595

void MoveMissilePos__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	iVar5 = 0;
	switch(missile[i]._mimfnum) {
	case '\0':
	case '\x01':
	case '\a':
		iVar6 = 1;
		goto LAB_8013af5c;
	case '\x02':
		iVar6 = 0;
LAB_8013af5c:
		iVar5 = 1;
		break;
	case '\x03':
	case '\x04':
	case '\x05':
		iVar6 = 0;
		iVar5 = 0;
		break;
	case '\x06':
		iVar6 = 1;
		iVar5 = 0;
	}
	uVar4 = PosOkMonst__Fiii((int)missile[i]._misource,(int)missile[i]._mix + iVar6,
													 (int)missile[i]._miy + iVar5);
	if (uVar4 != '\0') {
		cVar1 = missile[i]._miy;
		cVar2 = (char)iVar6;
		cVar3 = (char)iVar5;
		missile[i]._mix = missile[i]._mix + cVar2;
		missile[i]._miy = cVar1 + cVar3;
		missile[i]._mixoff = missile[i]._mixoff + (cVar2 - cVar3) * -0x20;
		missile[i]._miyoff = missile[i]._miyoff + (cVar2 + cVar3) * -0x10;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ MonsterTrapHit__FiiiiiUc(int m /*$s1*/, int mindam /*$s5*/, int maxdam /*$s7*/, int dist /*$s0*/, int t /*stack 16*/, int shift /*stack 20*/)
 // line 826, offset 0x8013b04c
	/* begin block 1 */
		// Start line: 827
		// Start offset: 0x8013B04C
		// Variables:
	// 		int hit; // $s3
	// 		int hper; // $s0
	// 		long dam; // $a2
	// 		int mor; // $a0
	// 		int mir; // $a1
	// 		unsigned char resist; // $s4
	// 		unsigned char ret; // stack offset -48
	/* end block 1 */
	// End offset: 0x8013B3A0
	// End Line: 900

	/* begin block 2 */
		// Start line: 1737
	/* end block 2 */
	// End Line: 1738

uchar MonsterTrapHit__FiiiiiUc(int m,int mindam,int maxdam,int dist,int t,int shift)

{
	ushort uVar1;
	bool bVar2;
	uchar uVar3;
	long lVar4;
	int iVar5;
	int iVar6;
	uchar local_30 [8];
	
	bVar2 = false;
	if (monster[m].mtalkmsg == 0) {
		if (monster[m]._mhitpoints >> 6 < 1) {
			return '\0';
		}
		if ((((monster[m].MType)->mtype != ' ') || (monster[m]._mgoal != '\x02')) &&
			 (monster[m]._mmode != '\x0e')) {
			uVar1 = monster[m].mMagicRes;
			uVar3 = missiledata[t].mResist;
			if (((uVar1 & 8) != 0) && (uVar3 == '\x03')) {
				return '\x01';
			}
			if (((uVar1 & 0x10) != 0) && (uVar3 == '\x01')) {
				return '\x01';
			}
			if (((uVar1 & 0x20) != 0) && (uVar3 == '\x02')) {
				return '\x01';
			}
			if ((((uVar1 & 1) != 0) && (uVar3 == '\x03')) ||
				 ((((uVar1 & 2) != 0 && (uVar3 == '\x01')) || (((uVar1 & 4) != 0 && (uVar3 == '\x02')))))) {
				bVar2 = true;
			}
			lVar4 = ENG_random__Fl(100);
			iVar5 = (0x5a - dist) - (int)monster[m].mArmorClass;
			iVar6 = iVar5;
			if (iVar5 < 5) {
				iVar6 = 5;
			}
			if (0x5f < iVar5) {
				iVar6 = 0x5f;
			}
			uVar3 = CheckMonsterHit__FiRUc(m,local_30);
			if (uVar3 != '\0') {
				return local_30[0];
			}
			if ((iVar6 <= lVar4) && (monster[m]._mmode != '\x0f')) {
				return '\x01';
			}
			lVar4 = ENG_random__Fl((maxdam - mindam) + 1);
			mindam = lVar4 + mindam;
			if ((char)shift == '\0') {
				mindam = mindam * 0x40;
			}
			if (bVar2) {
				iVar6 = monster[m]._mhitpoints - (mindam >> 2);
			}
			else {
				iVar6 = monster[m]._mhitpoints - mindam;
			}
			monster[m]._mhitpoints = iVar6;
			if (monster[m]._mhitpoints >> 6 < 1) {
				if (monster[m]._mmode != '\x0f') {
					M_StartKill__Fii(m,-1);
					return '\x01';
				}
				M_StartKill__Fii(m,-1);
			}
			else {
				if (bVar2) {
					PlayEffect__Fii(m,1);
					return '\x01';
				}
				if (monster[m]._mmode != '\x0f') {
					if (3 >= m) {
						return '\x01';
					}
					M_StartHit__Fiii(m,-1,mindam);
					return '\x01';
				}
				if (3 < m) {
					M_StartHit__Fiii(m,-1,mindam);
				}
			}
			monster[m]._mmode = '\x0f';
			return '\x01';
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ MonsterMHit__FiiiiiiUc(int pnum /*$s3*/, int m /*$s2*/, int mindam /*$s6*/, int maxdam /*$fp*/, int dist /*stack 16*/, int t /*stack 20*/, int shift /*stack 24*/)
 // line 906, offset 0x8013b3d0
	/* begin block 1 */
		// Start line: 907
		// Start offset: 0x8013B3D0
		// Variables:
	// 		int hit; // $s5
	// 		int hper; // $s0
	// 		long dam; // $s0
	// 		int mor; // $a0
	// 		int mir; // $a1
	// 		unsigned char resist; // $s7
	// 		unsigned char ret; // stack offset -56

		/* begin block 1.1 */
			// Start line: 958
			// Start offset: 0x8013B78C

			/* begin block 1.1.1 */
				// Start line: 963
				// Start offset: 0x8013B7AC

				/* begin block 1.1.1.1 */
					// Start line: 963
					// Start offset: 0x8013B7AC

					/* begin block 1.1.1.1.1 */
						// Start line: 963
						// Start offset: 0x8013B7B4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 990
							// Start offset: 0x8013B974

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 998
								// Start offset: 0x8013B9C8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 998
									// Start offset: 0x8013B9C8

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1003
										// Start offset: 0x8013B9E0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1004
											// Start offset: 0x8013B9E0

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1007
												// Start offset: 0x8013BA2C

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 1008
													// Start offset: 0x8013BA2C

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 1009
														// Start offset: 0x8013BA68
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8013BAAC
													// End Line: 1011
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8013BAAC
												// End Line: 1011
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8013BAC8
											// End Line: 1013
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8013BAC8
										// End Line: 1013
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8013BAC8
									// End Line: 1013
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8013BAC8
								// End Line: 1013
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8013BAC8
							// End Line: 1013
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8013BAC8
						// End Line: 1013
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013BB58
					// End Line: 1023
				/* end block 1.1.1.1 */
				// End offset: 0x8013BB5C
				// End Line: 1024
			/* end block 1.1.1 */
			// End offset: 0x8013BB5C
			// End Line: 1024
		/* end block 1.1 */
		// End offset: 0x8013BB5C
		// End Line: 1024
	/* end block 1 */
	// End offset: 0x8013BB5C
	// End Line: 1024

	/* begin block 2 */
		// Start line: 1926
	/* end block 2 */
	// End Line: 1927

uchar MonsterMHit__FiiiiiiUc(int pnum,int m,int mindam,int maxdam,int dist,int t,int shift)

{
	ushort uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	long lVar6;
	int d;
	uchar local_38 [8];
	char local_30;
	
	bVar4 = false;
	local_30 = (char)shift;
	if ((monster[m].mtalkmsg != 0) || (monster[m]._mhitpoints >> 6 < 1)) {
		return '\0';
	}
	if (((t == 0x35) && ((monster[m].MType)->mtype != 'n')) &&
		 ((monster[m].MData)->mMonstClass != '\0')) {
		return '\0';
	}
	if (((monster[m].MType)->mtype == ' ') && (monster[m]._mgoal == '\x02')) {
		return '\0';
	}
	if (monster[m]._mmode == '\x0e') {
		return '\0';
	}
	uVar1 = monster[m].mMagicRes;
	uVar5 = missiledata[t].mResist;
	if (((uVar1 & 8) != 0) && (uVar5 == '\x03')) {
		return '\0';
	}
	if (((uVar1 & 0x10) != 0) && (uVar5 == '\x01')) {
		return '\0';
	}
	if (((uVar1 & 0x20) != 0) && (uVar5 == '\x02')) {
		return '\0';
	}
	if (((uVar1 & 0x80) != 0) && (uVar5 == '\x04')) {
		return '\0';
	}
	if (((((uVar1 & 1) != 0) && (uVar5 == '\x03')) || (((uVar1 & 2) != 0 && (uVar5 == '\x01')))) ||
		 (((uVar1 & 4) != 0 && (uVar5 == '\x02')))) {
		bVar4 = true;
	}
	lVar6 = ENG_random__Fl(100);
	if (missiledata[t].mType == '\0') {
		dist = ((((int)plr[pnum]._pLevel - ((int)monster[m].mArmorClass + -0x32)) - plr[pnum]._pIEnAc) +
					 (int)plr[pnum]._pDexterity + plr[pnum]._pIBonusToHit) - (dist * dist >> 1);
		if (plr[pnum]._pClass == '\x01') {
			dist = dist + 0x14;
		}
		bVar2 = dist < 5;
		if (plr[pnum]._pClass == '\0') {
			dist = dist + 10;
LAB_8013b740:
			bVar2 = dist < 5;
		}
	}
	else {
		dist = ((int)plr[pnum]._pMagic - ((int)monster[m].mLevel * 2 + -0x32)) - dist;
		bVar2 = dist < 5;
		if (plr[pnum]._pClass == '\x02') {
			dist = dist + 0x14;
			goto LAB_8013b740;
		}
	}
	bVar3 = 0x5f < dist;
	if (bVar2) {
		dist = 5;
	}
	if (!bVar2 && bVar3) {
		dist = 0x5f;
	}
	if (monster[m]._mmode == '\x0f') {
		lVar6 = 0;
	}
	uVar5 = CheckMonsterHit__FiRUc(m,local_38);
	if (uVar5 != '\0') {
		return local_38[0];
	}
	if (dist <= lVar6) {
		return '\x01';
	}
	if (t == 0x3f) {
		mindam = monster[m]._mhitpoints / 3 >> 6;
	}
	else {
		lVar6 = ENG_random__Fl((maxdam - mindam) + 1);
		mindam = lVar6 + mindam;
	}
	if (missiledata[t].mType == '\0') {
		mindam = mindam + (mindam * plr[pnum]._pIBonusDam) / 100 + plr[pnum]._pIBonusDamMod;
		if (plr[pnum]._pClass == '\x01') {
			mindam = mindam + plr[pnum]._pDamageMod;
		}
		else {
			mindam = mindam + (plr[pnum]._pDamageMod >> 1);
		}
	}
	if (local_30 == '\0') {
		mindam = mindam << 6;
	}
	if (bVar4) {
		mindam = mindam >> 2;
	}
	monster[m]._mhitpoints = monster[m]._mhitpoints - mindam;
	if ((plr[pnum]._pIFlags & 0x100U) != 0) {
		monster[m]._mFlags = monster[m]._mFlags | 8;
	}
	if (monster[m]._mhitpoints >> 6 < 1) {
		if (monster[m]._mmode != '\x0f') {
			M_StartKill__Fii(m,pnum);
			goto LAB_8013bacc;
		}
		M_StartKill__Fii(m,pnum);
	}
	else {
		if (bVar4) {
			PlayEffect__Fii(m,1);
			goto LAB_8013bacc;
		}
		if (monster[m]._mmode != '\x0f') {
			if ((missiledata[t].mType == '\0') && ((plr[pnum]._pIFlags & 0x800U) != 0)) {
				d = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)monster[m]._mx,
																(int)monster[m]._my);
				M_GetKnockback__Fii(m,d);
			}
			if (3 < m) {
				M_StartHit__Fiii(m,pnum,mindam);
			}
			goto LAB_8013bacc;
		}
		if (3 < m) {
			M_StartHit__Fiii(m,pnum,mindam);
		}
	}
	monster[m]._mmode = '\x0f';
LAB_8013bacc:
	if (monster[m]._msquelch == '\0') {
		monster[m]._msquelch = -1;
		monster[m]._lastx = (char)plr[pnum]._px;
		monster[m]._lasty = (char)plr[pnum]._py;
		return '\x01';
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlayerMHit__FiiiiiiUcUc(int pnum /*$s0*/, int m /*$s2*/, int dist /*$s1*/, int mind /*$s7*/, int maxd /*stack 16*/, int mtype /*stack 20*/, int shift /*stack 24*/, int earflag /*stack 28*/)
 // line 1030, offset 0x8013bb90
	/* begin block 1 */
		// Start line: 1031
		// Start offset: 0x8013BB90
		// Variables:
	// 		int hit; // stack offset -48
	// 		int hper; // $s1
	// 		int tac; // $a0
	// 		long dam; // $a1
	// 		int blk; // $s5
	// 		int blkper; // $s4
	// 		int blkdir; // $v0
	// 		int resper; // $s3
	/* end block 1 */
	// End offset: 0x8013C5B8
	// End Line: 1156

	/* begin block 2 */
		// Start line: 2218
	/* end block 2 */
	// End Line: 2219

uchar PlayerMHit__FiiiiiiUcUc
								(int pnum,int m,int dist,int mind,int maxd,int mtype,int shift,int earflag)

{
	char cVar1;
	byte bVar2;
	long lVar3;
	int dir;
	int x;
	int y;
	long lVar4;
	
	if (plr[pnum]._pHitPoints >> 6 < 1) {
		return '\0';
	}
	if (plr[pnum]._pInvincible != '\0') {
		return '\0';
	}
	if (((plr[pnum]._pSpellFlags & 1U) != 0) && (missiledata[mtype].mType == '\0')) {
		return '\0';
	}
	lVar3 = ENG_random__Fl(100);
	if (missiledata[mtype].mType == '\0') {
		x = (uint)(ushort)plr[pnum]._pDexterity << 0x10;
		dir = x >> 0x10;
		dir = plr[pnum]._pIAC + plr[pnum]._pIBonusAC +
					(((dir / 5 + (dir >> 0x1f)) - (x >> 0x1f)) * 0x10000 >> 0x10);
		if (m == -1) {
			dir = (dist * -2 + 100) - (dir >> 1);
			goto LAB_8013bdf8;
		}
		dir = ((uint)monster[m].mHit - (dir + -0x1e)) +
					((int)monster[m].mLevel - (int)plr[pnum]._pLevel) * 2;
	}
	else {
		if (m == -1) {
			dir = 0x28;
			goto LAB_8013bdf8;
		}
		dir = (int)monster[m].mLevel * 2 - ((int)plr[pnum]._pLevel * 2 + -0x28);
	}
	dir = dir + dist * -2;
LAB_8013bdf8:
	if (dir < 10) {
		dir = 10;
	}
	if ((currlevel == '\x0e') && (dir < 0x14)) {
		dir = 0x14;
	}
	if ((currlevel == '\x0f') && (dir < 0x19)) {
		dir = 0x19;
	}
	if ((currlevel == '\x10') && (dir < 0x1e)) {
		dir = 0x1e;
	}
	if (((plr[pnum]._pmode == PM_STAND) || (lVar4 = 100, plr[pnum]._pmode == PM_ATTACK)) &&
		 (lVar4 = 100, plr[pnum]._pBlockFlag != '\0')) {
		lVar4 = ENG_random__Fl(100);
	}
	if ((char)shift == '\x01') {
		lVar4 = 100;
	}
	if (mtype == 0x3b) {
		lVar4 = 100;
	}
	if (m == -1) {
		x = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity;
	}
	else {
		x = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity +
				((int)monster[m].mLevel - (int)plr[pnum]._pLevel) * -2;
	}
	y = x;
	if (x < 0) {
		y = 0;
	}
	if (100 < x) {
		y = 100;
	}
	bVar2 = missiledata[mtype].mResist;
	if (bVar2 == 2) {
		x = (int)plr[pnum]._pLghtResist;
	}
	else {
		if (bVar2 < 3) {
			if (bVar2 == 1) {
				x = (int)plr[pnum]._pFireResist;
			}
			else {
				x = 0;
			}
		}
		else {
			x = 0;
			if (bVar2 < 5) {
				x = (int)plr[pnum]._pMagResist;
			}
		}
	}
	if (dir <= lVar3) {
		return '\0';
	}
	if (mtype == 0x3f) {
		mind = plr[pnum]._pHitPoints / 3;
	}
	else {
		if ((char)shift == '\0') {
			lVar3 = ENG_random__Fl(((maxd - mind) + 1) * 0x40);
			mind = lVar3 + mind * 0x40;
			if ((plr[pnum]._pIFlags & 0x10000000U) != 0) {
				mind = mind >> 1;
			}
			dir = plr[pnum]._pIGetHit << 6;
		}
		else {
			lVar3 = ENG_random__Fl((maxd - mind) + 1);
			mind = lVar3 + mind;
			if ((plr[pnum]._pIFlags & 0x10000000U) != 0) {
				mind = mind >> 1;
			}
			dir = plr[pnum]._pIGetHit;
		}
		mind = mind + dir;
		if (mind < 0x40) {
			mind = 0x40;
		}
	}
	if (0 < x) {
		mind = mind - (mind * x) / 100;
		x = plr[pnum]._pMaxHP;
		plr[pnum]._pHitPoints = plr[pnum]._pHitPoints - mind;
		dir = plr[pnum]._pHitPoints;
		plr[pnum]._pHPBase = plr[pnum]._pHPBase - mind;
		if (x < dir) {
			lVar3 = plr[pnum]._pMaxHPBase;
			plr[pnum]._pHitPoints = x;
			plr[pnum]._pHPBase = lVar3;
		}
		if (0 < plr[pnum]._pHitPoints >> 6) {
			cVar1 = plr[pnum]._pClass;
			if (cVar1 == '\0') {
				x = (int)plr[pnum]._px;
				y = (int)plr[pnum]._py;
				dir = 0x316;
			}
			else {
				if (cVar1 == '\x01') {
					x = (int)plr[pnum]._px;
					y = (int)plr[pnum]._py;
					dir = 0x2a8;
				}
				else {
					if (cVar1 != '\x02') {
						drawhpflag = '\x01';
						return '\x01';
					}
					x = (int)plr[pnum]._px;
					y = (int)plr[pnum]._py;
					dir = 0x240;
				}
			}
			PlaySfxLoc__Fiii(dir,x,y);
			drawhpflag = '\x01';
			return '\x01';
		}
		StartPlrKill__Fii(pnum,earflag & 0xff);
		return '\x01';
	}
	if (lVar4 < y) {
		if (m == -1) {
			dir = (int)plr[pnum]._pdir;
		}
		else {
			dir = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)monster[m]._mx,
																(int)monster[m]._my);
		}
		StartPlrBlock__Fii(pnum,dir);
		return '\x01';
	}
	if ((plr[pnum]._pmode == PM_GOTHIT) && ((char)shift == '\x01')) {
		return '\0';
	}
	x = plr[pnum]._pMaxHP;
	plr[pnum]._pHitPoints = plr[pnum]._pHitPoints - mind;
	dir = plr[pnum]._pHitPoints;
	plr[pnum]._pHPBase = plr[pnum]._pHPBase - mind;
	if (x < dir) {
		lVar3 = plr[pnum]._pMaxHPBase;
		plr[pnum]._pHitPoints = x;
		plr[pnum]._pHPBase = lVar3;
	}
	if (0 < plr[pnum]._pHitPoints >> 6) {
		StartPlrHit__FiiUc(pnum,mind,'\0');
		return '\x01';
	}
	StartPlrKill__Fii(pnum,earflag & 0xff);
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ Plr2PlrMHit__FiiiiiiUc(int pnum /*$s2*/, int p /*$s1*/, int mindam /*stack -56*/, int maxdam /*stack -48*/, int dist /*stack 16*/, int mtype /*stack 20*/, int shift /*stack 24*/)
 // line 1162, offset 0x8013c5ec
	/* begin block 1 */
		// Start line: 1163
		// Start offset: 0x8013C5EC
		// Variables:
	// 		int hit; // $a3
	// 		int hper; // $a2
	// 		int tac; // $a1
	// 		long dam; // $s0
	// 		int blk; // $s5
	// 		int blkper; // $s4
	// 		int resper; // $s7
	/* end block 1 */
	// End offset: 0x8013CD54
	// End Line: 1255

	/* begin block 2 */
		// Start line: 2517
	/* end block 2 */
	// End Line: 2518

uchar Plr2PlrMHit__FiiiiiiUc(int pnum,int p,int mindam,int maxdam,int dist,int mtype,int shift)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	long lVar6;
	long lVar7;
	int x;
	int y;
	ulong dwDam;
	int dir;
	
	if (plr[p]._pInvincible != '\0') {
		return '\0';
	}
	if (mtype == 0x35) {
		return '\0';
	}
	if (((plr[p]._pSpellFlags & 1U) != 0) && (missiledata[mtype].mType == '\0')) {
		return '\0';
	}
	bVar2 = missiledata[mtype].mResist;
	if (bVar2 == 2) {
		dir = (int)plr[p]._pLghtResist;
	}
	else {
		if (bVar2 < 3) {
			if (bVar2 == 1) {
				dir = (int)plr[p]._pFireResist;
			}
			else {
				dir = 0;
			}
		}
		else {
			dir = 0;
			if (bVar2 < 5) {
				dir = (int)plr[p]._pMagResist;
			}
		}
	}
	lVar6 = ENG_random__Fl(100);
	if (missiledata[mtype].mType == '\0') {
		y = (uint)(ushort)plr[p]._pDexterity << 0x10;
		x = y >> 0x10;
		dist = (((int)plr[pnum]._pLevel -
						(plr[p]._pIAC + plr[p]._pIBonusAC +
						 (((x / 5 + (x >> 0x1f)) - (y >> 0x1f)) * 0x10000 >> 0x10) + -0x32)) +
					 (int)plr[pnum]._pDexterity + plr[pnum]._pIBonusToHit) - (dist * dist >> 1);
		if (plr[pnum]._pClass == '\x01') {
			dist = dist + 0x14;
		}
		bVar4 = dist < 5;
		if (plr[pnum]._pClass != '\0') goto LAB_8013c964;
		dist = dist + 10;
	}
	else {
		dist = ((int)plr[pnum]._pMagic - ((int)plr[p]._pLevel * 2 + -0x32)) - dist;
		bVar4 = dist < 5;
		if (plr[pnum]._pClass != '\x02') goto LAB_8013c964;
		dist = dist + 0x14;
	}
	bVar4 = dist < 5;
LAB_8013c964:
	bVar5 = 0x5f < dist;
	if (bVar4) {
		dist = 5;
	}
	bVar3 = lVar6 < dist;
	if (!bVar4 && bVar5) {
		bVar3 = lVar6 < 0x5f;
	}
	if (!bVar3) {
		return '\0';
	}
	if (((plr[p]._pmode == PM_STAND) || (lVar6 = 100, plr[p]._pmode == PM_ATTACK)) &&
		 (lVar6 = 100, plr[p]._pBlockFlag != '\0')) {
		lVar6 = ENG_random__Fl(100);
	}
	if ((char)shift == '\x01') {
		lVar6 = 100;
	}
	y = plr[p]._pBaseToBlk + (int)plr[p]._pDexterity +
			((int)plr[pnum]._pLevel - (int)plr[p]._pLevel) * -2;
	x = y;
	if (y < 0) {
		x = 0;
	}
	if (100 < y) {
		x = 100;
	}
	if (mtype == 0x3f) {
		dwDam = plr[p]._pHitPoints / 3;
	}
	else {
		lVar7 = ENG_random__Fl((maxdam - mindam) + 1);
		dwDam = lVar7 + mindam;
		if (missiledata[mtype].mType == '\0') {
			dwDam = dwDam + (int)(dwDam * plr[pnum]._pIBonusDam) / 100 +
							plr[pnum]._pIBonusDamMod + plr[pnum]._pDamageMod;
		}
		if ((char)shift == '\0') {
			dwDam = dwDam << 6;
		}
	}
	if (missiledata[mtype].mType != '\0') {
		dwDam = (int)dwDam >> 1;
	}
	if (dir < 1) {
		if (x <= lVar6) {
			NetSendCmdDamage__FUcUcUl('\x01',(uchar)p,dwDam);
			StartPlrHit__FiiUc(p,dwDam,'\0');
			return '\x01';
		}
		dir = GetDirection__Fiiii((int)plr[p]._px,(int)plr[p]._py,(int)plr[pnum]._px,(int)plr[pnum]._py)
		;
		StartPlrBlock__Fii(p,dir);
		return '\x01';
	}
	NetSendCmdDamage__FUcUcUl('\x01',(uchar)p,dwDam - (int)(dwDam * dir) / 100);
	cVar1 = plr[pnum]._pClass;
	if (cVar1 == '\0') {
		x = (int)plr[pnum]._px;
		y = (int)plr[pnum]._py;
		dir = 0x316;
	}
	else {
		if (cVar1 == '\x01') {
			x = (int)plr[pnum]._px;
			y = (int)plr[pnum]._py;
			dir = 0x2a8;
		}
		else {
			if (cVar1 != '\x02') {
				return '\x01';
			}
			x = (int)plr[pnum]._px;
			y = (int)plr[pnum]._py;
			dir = 0x240;
		}
	}
	PlaySfxLoc__Fiii(dir,x,y);
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckMissileCol__FiiiUciiUcb(int i /*$a0*/, int mindam /*$s2*/, int maxdam /*$s3*/, unsigned char shift /*$s5*/, int mx /*stack 16*/, int my /*stack 20*/, int nodel /*stack 24*/, void * HurtPlr /*stack 28*/)
 // line 1261, offset 0x8013cd88
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x8013CD88
		// Variables:
	// 		int oi; // $a1
	// 		struct MissileStruct *miss; // $s1
	// 		struct map_info *dm; // $fp
	/* end block 1 */
	// End offset: 0x8013D284
	// End Line: 1354

	/* begin block 2 */
		// Start line: 2767
	/* end block 2 */
	// End Line: 2768

void CheckMissileCol__FiiiUciiUcb
							 (int i,int mindam,int maxdam,uchar shift,int mx,int my,int nodel,void *HurtPlr)

{
	char cVar1;
	short sVar2;
	bool bVar3;
	uchar uVar4;
	byte bVar5;
	void *pvVar6;
	int m;
	uint m_00;
	uint local_2c;
	map_info *pmVar7;
	
	pmVar7 = dung_map + my + mx * 0x70;
	if ((0x6f < mx) || (0x6f < my)) {
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)missile[i]._mlid);
		return;
	}
	if ((missile[i]._miAnimType == '\x04') || (m = (int)missile[i]._misource, m == -1)) {
		m = (int)pmVar7->dMonster;
		if (0 < m) {
			if (missile[i]._miAnimType == '\x04') {
				uVar4 = MonsterMHit__FiiiiiiUc
													((int)missile[i]._misource,m + -1,mindam,maxdam,(int)missile[i]._midist,
													 (int)missile[i]._mitype,(uint)shift);
			}
			else {
				uVar4 = MonsterTrapHit__FiiiiiUc
													(m + -1,mindam,maxdam,(int)missile[i]._midist,(int)missile[i]._mitype,
													 (uint)shift);
			}
			if (uVar4 != '\0') {
				if ((char)nodel == '\0') {
					missile[i]._mirange = 0;
				}
				missile[i]._miHitFlag = '\x01';
			}
		}
		uVar4 = IsDplayer__Fii(mx,my);
		if ((uVar4 == '\0') || (HurtPlr == (void *)0x0)) goto LAB_8013d19c;
		local_2c = (uint)(missile[i]._miAnimType == '\x04');
		bVar5 = IsDplayer__Fii(mx,my);
		m = -1;
		sVar2 = missile[i]._midist;
		cVar1 = missile[i]._mitype;
LAB_8013d178:
		uVar4 = PlayerMHit__FiiiiiiUcUc
											((uint)bVar5 - 1,m,(int)sVar2,mindam,maxdam,(int)cVar1,(uint)shift,local_2c);
	}
	else {
		if (missile[i]._micaster != 0) {
			if (((((monster[m]._mFlags & 0x10) != 0) &&
					 (m = (int)pmVar7->dMonster + -1, 0 < (int)pmVar7->dMonster)) &&
					((monster[m]._mFlags & 0x20) != 0)) &&
				 (uVar4 = MonsterTrapHit__FiiiiiUc
														(m,mindam,maxdam,(int)missile[i]._midist,(int)missile[i]._mitype,
														 (uint)shift), uVar4 != '\0')) {
				if ((char)nodel == '\0') {
					missile[i]._mirange = 0;
				}
				missile[i]._miHitFlag = '\x01';
			}
			uVar4 = IsDplayer__Fii(mx,my);
			if ((uVar4 == '\0') || (HurtPlr == (void *)0x0)) goto LAB_8013d19c;
			bVar5 = IsDplayer__Fii(mx,my);
			m = (int)missile[i]._misource;
			sVar2 = missile[i]._midist;
			cVar1 = missile[i]._mitype;
			local_2c = 0;
			goto LAB_8013d178;
		}
		local_2c = SEXT24(pmVar7->dMonster);
		m_00 = local_2c - 1;
		if (((0 < (int)local_2c) ||
				(((int)local_2c < 0 && (m_00 = ~local_2c, monster[m_00]._mmode == '\x0f')))) &&
			 (uVar4 = MonsterMHit__FiiiiiiUc
													(m,m_00,mindam,maxdam,(int)missile[i]._midist,(int)missile[i]._mitype,
													 (uint)shift), uVar4 != '\0')) {
			if ((char)nodel == '\0') {
				missile[i]._mirange = 0;
			}
			missile[i]._miHitFlag = '\x01';
		}
		bVar3 = false;
		uVar4 = IsDplayer__Fii(mx,my);
		if (uVar4 != '\0') {
			bVar5 = IsDplayer__Fii(mx,my);
			bVar3 = (uint)bVar5 - 1 != (int)missile[i]._misource;
		}
		if ((!bVar3) || (HurtPlr == (void *)0x0)) goto LAB_8013d19c;
		bVar5 = IsDplayer__Fii(mx,my);
		uVar4 = Plr2PlrMHit__FiiiiiiUc
											((int)missile[i]._misource,(uint)bVar5 - 1,mindam,maxdam,
											 (int)missile[i]._midist,(int)missile[i]._mitype,(uint)shift);
	}
	if (uVar4 != '\0') {
		if ((char)nodel == '\0') {
			missile[i]._mirange = 0;
		}
		missile[i]._miHitFlag = '\x01';
	}
LAB_8013d19c:
	local_2c = SEXT14(pmVar7->dObject);
	if (local_2c != 0) {
		m_00 = local_2c - 1;
		if ((int)local_2c < 1) {
			m_00 = ~local_2c;
		}
		if (object[m_00]._oMissFlag == '\0') {
			if (object[m_00]._oBreak == '\x01') {
				BreakObject__Fii(-1,m_00);
			}
			if ((char)nodel == '\0') {
				missile[i]._mirange = 0;
			}
			missile[i]._miHitFlag = '\0';
		}
	}
	pvVar6 = GetMISSILE__Fii(mx,my);
	if (pvVar6 != (void *)0x0) {
		if ((char)nodel == '\0') {
			missile[i]._mirange = 0;
		}
		missile[i]._miHitFlag = '\0';
	}
	if ((missile[i]._mirange == 0) && (missiledata[(int)missile[i]._mitype].miSFX != -1)) {
		PlaySfxLoc__Fiii(missiledata[(int)missile[i]._mitype].miSFX,(int)missile[i]._mix,
										 (int)missile[i]._miy);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GetTableValue__FUci(unsigned char code /*$a0*/, int dir /*$a1*/)
 // line 1358, offset 0x8013d2b8
	/* begin block 1 */
		// Start line: 1359
		// Start offset: 0x8013D2B8
		// Variables:
	// 		unsigned char hicode; // $v1
	// 		unsigned char locode; // $a3
	/* end block 1 */
	// End offset: 0x8013D344
	// End Line: 1373

	/* begin block 2 */
		// Start line: 2980
	/* end block 2 */
	// End Line: 2981

uchar GetTableValue__FUci(uchar code,int dir)

{
	byte bVar1;
	uint uVar2;
	
	bVar1 = code >> 4;
	uVar2 = (uint)bVar1;
	if (code != '\0') {
		if (bVar1 < 10) {
			if (bVar1 == 0) {
				uVar2 = 0x10;
			}
			if (dir < (int)uVar2) {
				return ValueTable[(uint)code & 0xf];
			}
		}
		else {
			if (dir < (int)((uint)code & 0xf)) {
				return StringTable[dir + (uVar2 - 10 & 0xff) * 9];
			}
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMissAnim__Fii(int mi /*$a0*/, int animtype /*$a1*/)
 // line 1378, offset 0x8013d34c
	/* begin block 1 */
		// Start line: 1379
		// Start offset: 0x8013D34C
		// Variables:
	// 		int dir; // $s2
	/* end block 1 */
	// End offset: 0x8013D408
	// End Line: 1398

	/* begin block 2 */
		// Start line: 3019
	/* end block 2 */
	// End Line: 3020

void SetMissAnim__Fii(int mi,int animtype)

{
	char cVar1;
	uchar uVar2;
	
	missile[mi]._miAnimType = (uchar)animtype;
	cVar1 = missile[mi]._mimfnum;
	missile[mi]._miAnimFlags = misfiledata[animtype].mFlags;
	uVar2 = GetTableValue__FUci(misfiledata[animtype].mAnimDelay,(int)cVar1);
	missile[mi]._miAnimDelay = uVar2;
	uVar2 = GetTableValue__FUci(misfiledata[animtype].mAnimLen,(int)cVar1);
	missile[mi]._miAnimLen = uVar2;
	missile[mi]._miAnimCnt = '\0';
	missile[mi]._miAnimFrame = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMissDir__Fii(int mi /*$a0*/, int dir /*$a1*/)
 // line 1402, offset 0x8013d424
	/* begin block 1 */
		// Start line: 1403
		// Start offset: 0x8013D424
	/* end block 1 */
	// End offset: 0x8013D460
	// End Line: 1406

	/* begin block 2 */
		// Start line: 3082
	/* end block 2 */
	// End Line: 3083

void SetMissDir__Fii(int mi,int dir)

{
	missile[mi]._mimfnum = (char)dir;
	SetMissAnim__Fii(mi,(uint)missile[mi]._miAnimType);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLArrow__Fiiiiiicii(int mi /*$s4*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$s0*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1558, offset 0x8013d470
	/* begin block 1 */
		// Start line: 1559
		// Start offset: 0x8013D470
	/* end block 1 */
	// End offset: 0x8013D634
	// End Line: 1585

	/* begin block 2 */
		// Start line: 3396
	/* end block 2 */
	// End Line: 3397

void AddLArrow__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	int v;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	if ((char)mienemy == '\0') {
		if (plr[id]._pClass == '\x01') {
			v = ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x1a) + 0x1f;
			goto LAB_8013d590;
		}
		if (plr[id]._pClass == '\0') {
			v = ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x1b) + 0x1f;
			goto LAB_8013d590;
		}
	}
	v = 0x20;
LAB_8013d590:
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,v);
	v = GetDirection16__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,v);
	cVar1 = missile[mi]._mitype;
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	if (cVar1 == '8') {
		v = 0x365;
	}
	else {
		v = 0x95;
	}
	v = AddLight__Fiii(sx,sy,v);
	missile[mi]._mlid = (char)v;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddArrow__Fiiiiiicii(int mi /*$s3*/, int sx /*$s4*/, int sy /*$s5*/, int dx /*$s1*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1591, offset 0x8013d658
	/* begin block 1 */
		// Start line: 1592
		// Start offset: 0x8013D658
		// Variables:
	// 		int av; // $v1
	/* end block 1 */
	// End offset: 0x8013D7F0
	// End Line: 1611

	/* begin block 2 */
		// Start line: 3469
	/* end block 2 */
	// End Line: 3470

void AddArrow__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int local_24;
	
	if ((sx == dx) && (sy == dy)) {
		dx = dx + XDirAdd[midir];
		dy = dy + YDirAdd[midir];
	}
	if ((char)mienemy == '\0') {
		local_24 = 0x20;
		if ((plr[id]._pIFlags & 4U) != 0) {
			lVar1 = ENG_random__Fl(0x20);
			local_24 = lVar1 + 0x10;
		}
		if (plr[id]._pClass == '\x01') {
			local_24 = local_24 + ((int)plr[id]._pLevel + -1 >> 2);
		}
		if (plr[id]._pClass == '\0') {
			local_24 = local_24 + ((int)plr[id]._pLevel + -1 >> 3);
		}
	}
	else {
		local_24 = 0x20;
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,local_24);
	local_24 = GetDirection16__Fiiii(sx,sy,dx,dy);
	missile[mi]._miAnimFrame = (char)local_24 + '\x01';
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetVileMissPos__Fiii(int mi /*$s6*/, int dx /*$s7*/, int dy /*$v1*/)
 // line 1616, offset 0x8013d818
	/* begin block 1 */
		// Start line: 1617
		// Start offset: 0x8013D818
		// Variables:
	// 		int xx; // $s1
	// 		int yy; // $s5

		/* begin block 1.1 */
			// Start line: 1617
			// Start offset: 0x8013D818
			// Variables:
		// 		int l; // $s2

			/* begin block 1.1.1 */
				// Start line: 1620
				// Start offset: 0x8013D864

				/* begin block 1.1.1.1 */
					// Start line: 1621
					// Start offset: 0x8013D870
					// Variables:
				// 		int j; // $s4

					/* begin block 1.1.1.1.1 */
						// Start line: 1621
						// Start offset: 0x8013D870

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1622
							// Start offset: 0x8013D87C
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8013D8E4
						// End Line: 1630
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013D8E4
					// End Line: 1630
				/* end block 1.1.1.1 */
				// End offset: 0x8013D8EC
				// End Line: 1631
			/* end block 1.1.1 */
			// End offset: 0x8013D8EC
			// End Line: 1631
		/* end block 1.1 */
		// End offset: 0x8013D8F4
		// End Line: 1632
	/* end block 1 */
	// End offset: 0x8013D920
	// End Line: 1635

	/* begin block 2 */
		// Start line: 3520
	/* end block 2 */
	// End Line: 3521

void GetVileMissPos__Fiii(int mi,int dx,int dy)

{
	uchar uVar1;
	int iVar2;
	int x;
	int iVar3;
	int iVar4;
	
	iVar3 = 1;
	do {
		iVar4 = -iVar3;
		if (0x31 < iVar3) {
			missile[mi]._mix = (char)dx;
			missile[mi]._miy = (char)dy;
			return;
		}
		while (iVar2 = -iVar3, iVar4 <= iVar3) {
			while (iVar2 <= iVar3) {
				x = dx + iVar2;
				uVar1 = PosOkPlayer__Fiii(myplr,x,dy + iVar4);
				iVar2 = iVar2 + 1;
				if (uVar1 != '\0') {
					missile[mi]._mix = (char)x;
					missile[mi]._miy = (char)(dy + iVar4);
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
// void /*$ra*/ AddRndTeleport__Fiiiiiicii(int mi /*$s4*/, int sx /*$s6*/, int sy /*$s7*/, int dx /*stack -56*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1646, offset 0x8013d954
	/* begin block 1 */
		// Start line: 1647
		// Start offset: 0x8013D954
		// Variables:
	// 		int r1; // $s3
	// 		int r2; // $s2
	// 		unsigned char dirok; // $s1
	// 		int nTries; // $s5

		/* begin block 1.1 */
			// Start line: 1683
			// Start offset: 0x8013DAF4

			/* begin block 1.1.1 */
				// Start line: 1687
				// Start offset: 0x8013DB48
				// Variables:
			// 		int oi; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8013DBF8
			// End Line: 1692
		/* end block 1.1 */
		// End offset: 0x8013DC64
		// End Line: 1699
	/* end block 1 */
	// End offset: 0x8013DC64
	// End Line: 1699

	/* begin block 2 */
		// Start line: 3586
	/* end block 2 */
	// End Line: 3587

void AddRndTeleport__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	uchar uVar1;
	long lVar2;
	void *pvVar3;
	char cVar4;
	int y;
	char cVar5;
	int x;
	int iVar6;
	char local_38;
	
	iVar6 = 1;
	do {
		uVar1 = '\x01';
		do {
			lVar2 = ENG_random__Fl(3);
			x = lVar2 + 4;
			lVar2 = ENG_random__Fl(3);
			y = lVar2 + 4;
			lVar2 = ENG_random__Fl(2);
			if (lVar2 == 1) {
				x = -x;
			}
			cVar5 = (char)x;
			lVar2 = ENG_random__Fl(2);
			if (lVar2 == 1) {
				y = -y;
			}
			cVar4 = (char)y;
			if ((((char)mienemy == '\0') && (plr[0].plractive != '\0')) && (plr[1].plractive != '\0')) {
				uVar1 = ChkPlrOffsets__Fiiii
													((sx + x) * 8,(sy + y) * 8,plr[id ^ 1U].WorldX,plr[id ^ 1U].WorldY);
			}
		} while (uVar1 == '\0');
		x = sx + x;
		y = sy + y;
		pvVar3 = GetSOLID__Fii(x,y);
		uVar1 = setlevel;
		if (((pvVar3 == (void *)0x0) && (dung_map[x * 0x70 + y].dObject == '\0')) &&
			 (dung_map[x * 0x70 + y].dMonster == 0)) goto LAB_8013daf8;
		iVar6 = iVar6 + 1;
		cVar5 = '\0';
	} while (iVar6 < 0x1f5);
	cVar4 = '\0';
LAB_8013daf8:
	missile[mi]._mirange = 2;
	missile[mi]._miVar1 = 0;
	if ((uVar1 == '\0') || (setlvlnum != '\x05')) {
		missile[mi]._mix = (char)sx + cVar5;
		missile[mi]._miy = (char)sy + cVar4;
		if ((char)mienemy == '\0') {
			UseMana__Fii(id,10);
		}
	}
	else {
		if ((uint)(byte)object[(int)dung_map[dx * 0x70 + dy].dObject + -1]._otype - 0x54 < 2) {
			local_38 = (char)dx;
			missile[mi]._mix = local_38;
			missile[mi]._miy = (char)dy;
			uVar1 = PosOkPlayer__Fiii(myplr,dx,dy);
			if (uVar1 == '\0') {
				GetVileMissPos__Fiii(mi,dx,dy);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFirebolt__Fiiiiiicii(int mi /*$s1*/, int sx /*$s0*/, int sy /*$s2*/, int dx /*$s3*/, int dy /*stack 16*/, int midir /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1709, offset 0x8013dc98
	/* begin block 1 */
		// Start line: 1710
		// Start offset: 0x8013DC98
		// Variables:
	// 		int sp; // $v1
	// 		int i; // $a0
	// 		int mx; // $v0
	/* end block 1 */
	// End offset: 0x8013DEA8
	// End Line: 1750

	/* begin block 2 */
		// Start line: 3752
	/* end block 2 */
	// End Line: 3753

void AddFirebolt__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int micaster,int id,int dam)

{
	int iVar1;
	int v;
	short *psVar2;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	v = 0x1a;
	if ((char)micaster == '\0') {
		v = 0;
		if (0 < nummissiles) {
			psVar2 = &missileactive;
			do {
				iVar1 = (int)*psVar2;
				if (((missile[iVar1]._mitype == '\x02') && ((int)missile[iVar1]._misource == id)) &&
					 ((int)missile[iVar1]._miVar3 == mi)) break;
				v = v + 1;
				psVar2 = psVar2 + 1;
			} while (v < nummissiles);
		}
		if (v == nummissiles) {
			UseMana__Fii(id,1);
		}
		if (id == -1) {
			v = 0x10;
		}
		else {
			v = (int)missile[mi]._mispllvl * 2 + 0x10;
			if (0x3e < v) {
				v = 0x3f;
			}
		}
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,v);
	v = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,v);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	v = AddLight__Fiii(sx,sy,0x96);
	missile[mi]._mlid = (char)v;
	SetParticle = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMagmaball__Fiiiiiicii(int mi /*$s1*/, int sx /*$s2*/, int sy /*$s3*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1757, offset 0x8013ded0
	/* begin block 1 */
		// Start line: 1758
		// Start offset: 0x8013DED0
	/* end block 1 */
	// End offset: 0x8013DFCC
	// End Line: 1772

	/* begin block 2 */
		// Start line: 3853
	/* end block 2 */
	// End Line: 3854

void AddMagmaball__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int iVar1;
	
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	iVar1 = missile[mi]._miyvel;
	missile[mi]._mitxoff = missile[mi]._mitxoff + missile[mi]._mixvel * 3;
	missile[mi]._mityoff = missile[mi]._mityoff + iVar1 * 3;
	GetMissilePos__Fi(mi);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	iVar1 = AddLight__Fiii(sx,sy,0x97);
	missile[mi]._mlid = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTeleport__Fiiiiiicii(int mi /*$s7*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*stack -48*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1791, offset 0x8013dfec
	/* begin block 1 */
		// Start line: 1792
		// Start offset: 0x8013DFEC
		// Variables:
	// 		int i; // $s5
	// 		int k; // $s6
	// 		int l; // $v0
	// 		int j; // $s4
	// 		int tx; // $s1
	// 		int ty; // $s2
	// 		int CrawlNum[6]; // stack offset -72
	/* end block 1 */
	// End offset: 0x8013E1F4
	// End Line: 1829

	/* begin block 2 */
		// Start line: 3927
	/* end block 2 */
	// End Line: 3928

void AddTeleport__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	byte bVar1;
	int x;
	void *pvVar2;
	int y;
	int iVar3;
	uint uVar4;
	int iVar5;
	int local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	undefined4 local_38;
	undefined4 local_34;
	int local_30;
	
	local_48 = DAT_8011a030;
	local_44 = DAT_8011a034;
	local_40 = DAT_8011a038;
	local_3c = DAT_8011a03c;
	local_38 = DAT_8011a040;
	local_34 = DAT_8011a044;
	iVar5 = 0;
	missile[mi]._miDelFlag = '\x01';
	x = 0;
	local_30 = dx;
	do {
		uVar4 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_48 + x)];
		iVar3 = *(int *)((int)&local_48 + x) + 1;
		if ((&CrawlTable)[*(int *)((int)&local_48 + x)] != 0) {
			do {
				x = local_30 + (int)(&CrawlTable)[iVar3];
				y = dy + (int)(&CHAR_00h_800d5555)[iVar3];
				if ((x - 1U < 0x6f) && (y - 1U < 0x6f)) {
					pvVar2 = GetSOLID__Fii(x,y);
					bVar1 = IsDplayer__Fii(x,y);
					if (((uint)pvVar2 | (int)dung_map[x * 0x70 + y].dMonster |
							 (int)dung_map[x * 0x70 + y].dObject | (uint)bVar1) == 0) {
						missile[mi]._mix = (char)x;
						missile[mi]._miy = (char)y;
						missile[mi]._misx = (char)x;
						missile[mi]._misy = (char)y;
						missile[mi]._miDelFlag = '\0';
						iVar5 = 6;
						break;
					}
				}
				uVar4 = uVar4 - 1;
				iVar3 = iVar3 + 2;
			} while (0 < (int)uVar4);
		}
		iVar5 = iVar5 + 1;
		x = iVar5 * 4;
		if (5 < iVar5) {
			if (missile[mi]._miDelFlag == '\0') {
				UseMana__Fii(id,0x17);
				missile[mi]._mirange = 2;
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLightball__Fiiiiiicii(int mi /*$s2*/, int sx /*$s4*/, int sy /*$s5*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1836, offset 0x8013e228
	/* begin block 1 */
		// Start line: 1837
		// Start offset: 0x8013E228
	/* end block 1 */
	// End offset: 0x8013E368
	// End Line: 1853

	/* begin block 2 */
		// Start line: 4021
	/* end block 2 */
	// End Line: 4022

void AddLightball__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	missile[mi]._midam = dam;
	lVar1 = ENG_random__Fl(8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	missile[mi]._mirange = 0xff;
	if (id < 0) {
		missile[mi]._miVar1 = (short)sx;
		missile[mi]._miVar2 = (short)sy;
	}
	else {
		missile[mi]._miVar1 = plr[id]._px;
		missile[mi]._miVar2 = plr[id]._py;
	}
	if ((mi & 2U) != 0) {
		iVar2 = AddLight__Fiii(sx,sy,0x243);
		missile[mi]._mlid = (char)iVar2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFirewall__Fiiiiiicii(int mi /*$s5*/, int sx /*$s2*/, int sy /*$s3*/, int dx /*$s4*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1858, offset 0x8013e390
	/* begin block 1 */
		// Start line: 1859
		// Start offset: 0x8013E390
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8013E558
	// End Line: 1875

	/* begin block 2 */
		// Start line: 4066
	/* end block 2 */
	// End Line: 4067

void AddFirewall__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	long lVar2;
	long lVar3;
	ushort uVar4;
	int iVar5;
	
	lVar2 = ENG_random__Fl(10);
	lVar3 = ENG_random__Fl(10);
	missile[mi]._midam = (lVar2 + lVar3 + (int)plr[id]._pLevel + 2) * 0x10 >> 1;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	iVar5 = (int)missile[mi]._mispllvl;
	missile[mi]._mirange = 10;
	while (0 < iVar5) {
		iVar5 = iVar5 + -1;
		missile[mi]._mirange = missile[mi]._mirange + 10;
	}
	uVar4 = missile[mi]._mirange;
	iVar5 = plr[id]._pISplDur;
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._miVar2 = 0;
	uVar4 = (uVar4 + (short)((int)((uint)uVar4 * iVar5) >> 7)) * 0x10;
	missile[mi]._mirange = uVar4;
	missile[mi]._miVar1 = uVar4 - (short)cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFireball__Fiiiiiicii(int mi /*$s2*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s5*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1883, offset 0x8013e588
	/* begin block 1 */
		// Start line: 1884
		// Start offset: 0x8013E588
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8013E7C4
	// End Line: 1922

	/* begin block 2 */
		// Start line: 4135
	/* end block 2 */
	// End Line: 4136

void AddFireball__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	long lVar2;
	int v;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	v = 0x10;
	if ((char)mienemy == '\0') {
		lVar1 = ENG_random__Fl(10);
		lVar2 = ENG_random__Fl(10);
		v = (int)missile[mi]._mispllvl;
		missile[mi]._midam = (lVar1 + lVar2 + (int)plr[id]._pLevel + 2) * 2;
		while (0 < v) {
			v = v + -1;
			missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
		}
		v = (int)missile[mi]._mispllvl * 2 + 0x10;
		if (0x32 < v) {
			v = 0x32;
		}
		UseMana__Fii(id,0xc);
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,v);
	v = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,v);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	missile[mi]._miVar3 = 0;
	missile[mi]._miVar4 = (short)sx;
	missile[mi]._miVar5 = (short)sy;
	v = AddLight__Fiii(sx,sy,0x95);
	missile[mi]._mlid = (char)v;
	SetParticle = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLightctrl__Fiiiiiicii(int mi /*$s0*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$s3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1929, offset 0x8013e7f4
	/* begin block 1 */
		// Start line: 1930
		// Start offset: 0x8013E7F4
	/* end block 1 */
	// End offset: 0x8013E8BC
	// End Line: 1941

	/* begin block 2 */
		// Start line: 4237
	/* end block 2 */
	// End Line: 4238

void AddLightctrl__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	
	if ((dam == 0) && ((mienemy & 0xffU) == 0)) {
		UseMana__Fii(id,3);
	}
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x20);
	lVar1 = ENG_random__Fl(8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLightning__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1944, offset 0x8013e8e0
	/* begin block 1 */
		// Start line: 1945
		// Start offset: 0x8013E8E0
	/* end block 1 */
	// End offset: 0x8013EAA8
	// End Line: 1972

	/* begin block 2 */
		// Start line: 4273
	/* end block 2 */
	// End Line: 4274

void AddLightning__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	ushort uVar3;
	
	missile[mi]._misx = (char)dx;
	missile[mi]._misy = (char)dy;
	if (-1 < midir) {
		missile[mi]._mixoff = missile[midir]._mixoff;
		missile[mi]._miyoff = missile[midir]._miyoff;
		missile[mi]._mitxoff = missile[midir]._mitxoff;
		missile[mi]._mityoff = missile[midir]._mityoff;
	}
	lVar1 = ENG_random__Fl(8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	if (midir < 0) {
LAB_8013ea44:
		uVar3 = 8;
	}
	else {
		if (((char)mienemy != '\x01') && (id != -1)) {
			missile[mi]._mirange = (short)((int)((uint)(byte)missile[mi]._mispllvl << 0x18) >> 0x19) + 6;
			goto LAB_8013ea6c;
		}
		if ((midir < 0) || (id == -1)) goto LAB_8013ea44;
		uVar3 = 10;
	}
	missile[mi]._mirange = uVar3;
LAB_8013ea6c:
	iVar2 = AddLight__Fiii((int)missile[mi]._mix,(int)missile[mi]._miy,0x243);
	missile[mi]._mlid = (char)iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMisexp__Fiiiiiicii(int mi /*$s0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$s2*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1980, offset 0x8013eacc
	/* begin block 1 */
		// Start line: 1981
		// Start offset: 0x8013EACC
	/* end block 1 */
	// End offset: 0x8013ECDC
	// End Line: 2005

	/* begin block 2 */
		// Start line: 4375
	/* end block 2 */
	// End Line: 4376

void AddMisexp__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	long lVar2;
	
	if (((char)mienemy != '\0') && (0 < id)) {
		if ((monster[id].MType)->mtype == 'e') {
			SetMissAnim__Fii(mi,0x17);
		}
		if ((monster[id].MType)->mtype == 'f') {
			SetMissAnim__Fii(mi,0x29);
		}
		if ((monster[id].MType)->mtype == 'g') {
			SetMissAnim__Fii(mi,0x2d);
		}
		if ((monster[id].MType)->mtype == 'h') {
			SetMissAnim__Fii(mi,0x2b);
		}
	}
	missile[mi]._mix = missile[dx]._mix;
	missile[mi]._miy = missile[dx]._miy;
	missile[mi]._misx = missile[dx]._misx;
	missile[mi]._misy = missile[dx]._misy;
	missile[mi]._mixoff = missile[dx]._mixoff;
	missile[mi]._miyoff = missile[dx]._miyoff;
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._mitxoff = missile[dx]._mitxoff;
	lVar2 = missile[dx]._mityoff;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._mirange = (short)cVar1;
	missile[mi]._miVar1 = 0;
	missile[mi]._mityoff = lVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddWeapexp__Fiiiiiicii(int mi /*$s0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2010, offset 0x8013ecf8
	/* begin block 1 */
		// Start line: 2011
		// Start offset: 0x8013ECF8
	/* end block 1 */
	// End offset: 0x8013EDE4
	// End Line: 2025

	/* begin block 2 */
		// Start line: 4455
	/* end block 2 */
	// End Line: 4456

void AddWeapexp__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int animtype;
	
	missile[mi]._mix = (char)sx;
	missile[mi]._miy = (char)sy;
	missile[mi]._misx = (char)sx;
	missile[mi]._misy = (char)sy;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._miVar1 = 0;
	missile[mi]._miVar2 = (short)dx;
	missile[mi]._mimfnum = '\0';
	animtype = 0x1a;
	if (dx == 1) {
		animtype = 5;
	}
	SetMissAnim__Fii(mi,animtype);
	missile[mi]._mirange = (short)missile[mi]._miAnimLen - 1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckIfTrig__Fii(int x /*$s4*/, int y /*$s5*/)
 // line 2028, offset 0x8013edf8
	/* begin block 1 */
		// Start line: 2029
		// Start offset: 0x8013EDF8
		// Variables:
	// 		int i; // $s3
	/* end block 1 */
	// End offset: 0x8013EF78
	// End Line: 2047

	/* begin block 2 */
		// Start line: 4497
	/* end block 2 */
	// End Line: 4498

uchar CheckIfTrig__Fii(int x,int y)

{
	bool bVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	if (0 < numtrigs) {
		piVar3 = &trigs._ty;
		iVar4 = 0;
		do {
			iVar2 = *(int *)((int)&trigs._tx + iVar4);
			bVar1 = false;
			if ((x == iVar2) && (y == *piVar3)) {
				return '\x01';
			}
			iVar2 = abs(iVar2 - x);
			if (iVar2 < 2) {
				iVar2 = abs(*piVar3 - y);
				bVar1 = iVar2 < 2;
			}
			if (bVar1) {
				return '\x01';
			}
			piVar3 = piVar3 + 4;
			iVar5 = iVar5 + 1;
			iVar4 = iVar4 + 0x10;
		} while (iVar5 < numtrigs);
	}
	iVar4 = 0;
	piVar3 = &quests[0]._qty;
	iVar5 = 0;
	do {
		if (((currlevel == (&quests[0]._qlevel)[iVar5]) && ((&quests[0]._qslvl)[iVar5] != '\0')) &&
			 ((&quests[0]._qactive)[iVar5] != '\0')) {
			iVar2 = *(int *)((int)&quests[0]._qtx + iVar5);
			bVar1 = false;
			if ((x == iVar2) && (y == *piVar3)) {
				return '\x01';
			}
			iVar2 = abs(iVar2 - x);
			if (iVar2 < 2) {
				iVar2 = abs(*piVar3 - y);
				bVar1 = iVar2 < 2;
			}
			if (bVar1) {
				return '\x01';
			}
		}
		piVar3 = piVar3 + 5;
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x14;
		if (0xf < iVar4) {
			return '\0';
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTown__Fiiiiiicii(int mi /*stack -72*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*stack -64*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2050, offset 0x8013efa0
	/* begin block 1 */
		// Start line: 2051
		// Start offset: 0x8013EFA0
		// Variables:
	// 		int i; // $s6
	// 		int k; // $fp
	// 		int l; // $v0
	// 		int j; // $s7
	// 		int tx; // $s4
	// 		int ty; // $s5
	// 		int mx; // $a0
	// 		int CrawlNum[6]; // stack offset -96
	// 		int omp; // $s0
	/* end block 1 */
	// End offset: 0x8013F3EC
	// End Line: 2124

	/* begin block 2 */
		// Start line: 4545
	/* end block 2 */
	// End Line: 4546

void AddTown__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	bool bVar2;
	byte bVar3;
	uchar x;
	int iVar4;
	void *pvVar5;
	void *pvVar6;
	short *psVar7;
	int x_00;
	uchar y;
	int y_00;
	uint uVar8;
	int iVar9;
	int iVar10;
	int local_60;
	undefined4 local_5c;
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	int local_48;
	int local_40;
	int local_38;
	
	local_60 = DAT_8011a030;
	local_5c = DAT_8011a034;
	local_58 = DAT_8011a038;
	local_54 = DAT_8011a03c;
	local_50 = DAT_8011a040;
	local_4c = DAT_8011a044;
	x_00 = 0;
	y_00 = 0;
	if (currlevel == '\0') {
		x = (uchar)dx;
		missile[mi]._mix = x;
		y = (uchar)dy;
		missile[mi]._miy = y;
		missile[mi]._misx = x;
		missile[mi]._misy = y;
		missile[mi]._miDelFlag = '\0';
		local_48 = mi;
		local_40 = dx;
	}
	else {
		iVar10 = 0;
		local_38 = mi * 0x13;
		missile[mi]._miDelFlag = '\x01';
		iVar4 = 0;
		local_48 = mi;
		local_40 = dx;
		do {
			uVar8 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_60 + iVar4)];
			iVar9 = *(int *)((int)&local_60 + iVar4) + 1;
			if ((&CrawlTable)[*(int *)((int)&local_60 + iVar4)] != 0) {
				iVar4 = local_38 * 4;
				do {
					x_00 = local_40 + (int)(&CrawlTable)[iVar9];
					y_00 = dy + (int)(&CHAR_00h_800d5555)[iVar9];
					if ((x_00 - 1U < 0x6f) && (y_00 - 1U < 0x6f)) {
						pvVar5 = GetSOLID__Fii(x_00,y_00);
						pvVar6 = GetMISSILE__Fii(x_00,y_00);
						bVar3 = IsDplayer__Fii(x_00,y_00);
						bVar2 = false;
						if (((uint)pvVar5 | (int)dung_map[x_00 * 0x70 + y_00].dObject | (uint)pvVar6 |
								 (uint)bVar3 | (int)dung_map[x_00 * 0x70 + y_00].dMissile |
								(int)dung_map[x_00 * 0x70 + y_00].dMonster) == 0) {
							x = CheckIfTrig__Fii(x_00,y_00);
							bVar2 = x == '\0';
						}
						if (bVar2) {
							(&missile[0]._mix)[iVar4] = (char)x_00;
							(&missile[0]._miy)[iVar4] = (char)y_00;
							(&missile[0]._misx)[iVar4] = (char)x_00;
							(&missile[0]._misy)[iVar4] = (char)y_00;
							(&missile[0]._miDelFlag)[iVar4] = '\0';
							iVar10 = 6;
							break;
						}
					}
					uVar8 = uVar8 - 1;
					iVar9 = iVar9 + 2;
				} while (0 < (int)uVar8);
			}
			y = (uchar)y_00;
			x = (uchar)x_00;
			iVar10 = iVar10 + 1;
			iVar4 = iVar10 * 4;
		} while (iVar10 < 6);
	}
	x_00 = nummissiles;
	cVar1 = missile[local_48]._miAnimLen;
	missile[local_48]._mirange = 100;
	missile[local_48]._miVar2 = 0;
	missile[local_48]._miVar1 = 100 - (short)cVar1;
	y_00 = 0;
	if (0 < x_00) {
		psVar7 = &missileactive;
		do {
			iVar4 = (int)*psVar7;
			if (((missile[iVar4]._mitype == '\n') && (iVar4 != local_48)) &&
				 ((int)missile[iVar4]._misource == id)) {
				missile[iVar4]._mirange = 0;
			}
			y_00 = y_00 + 1;
			psVar7 = psVar7 + 1;
		} while (y_00 < x_00);
	}
	PutMissile__Fi(local_48);
	x_00 = myplr;
	myplr = id;
	if ((missile[local_48]._miDelFlag == '\0') && (currlevel != '\0')) {
		NetSendCmdLocParam3__FUcUcUcUcUsUsUs
							('\x01','8',x,y,(uint)currlevel,(uint)leveltype,(uint)(setlevel != '\0'));
	}
	myplr = x_00;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlash__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2130, offset 0x8013f420
	/* begin block 1 */
		// Start line: 2131
		// Start offset: 0x8013F420
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8013F628
	// End Line: 2150

	/* begin block 2 */
		// Start line: 4717
	/* end block 2 */
	// End Line: 4718

void AddFlash__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	uint uVar2;
	int iVar3;
	
	if ((char)mienemy == '\0') {
		if (id != -1) {
			missile[mi]._midam = 0;
			iVar3 = 0;
			if (-1 < plr[id]._pLevel) {
				do {
					lVar1 = ENG_random__Fl(0x14);
					missile[mi]._midam = missile[mi]._midam + 1 + lVar1;
					iVar3 = iVar3 + 1;
				} while (iVar3 <= (int)plr[id]._pLevel);
			}
			iVar3 = (int)missile[mi]._mispllvl;
			while (0 < iVar3) {
				iVar3 = iVar3 + -1;
				missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
			}
			missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 1);
			UseMana__Fii(id,4);
			goto LAB_8013f608;
		}
		uVar2 = (uint)(currlevel >> 1);
	}
	else {
		uVar2 = (int)monster[id].mLevel << 1;
	}
	missile[mi]._midam = uVar2;
LAB_8013f608:
	missile[mi]._mirange = 0x13;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlash2__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2158, offset 0x8013f64c
	/* begin block 1 */
		// Start line: 2159
		// Start offset: 0x8013F64C
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8013F81C
	// End Line: 2186

	/* begin block 2 */
		// Start line: 4780
	/* end block 2 */
	// End Line: 4781

void AddFlash2__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	uint uVar2;
	int iVar3;
	
	if ((char)mienemy == '\0') {
		if (id == -1) {
			uVar2 = (uint)(currlevel >> 1);
		}
		else {
			missile[mi]._midam = 0;
			iVar3 = 0;
			if (-1 < plr[id]._pLevel) {
				do {
					lVar1 = ENG_random__Fl(2);
					missile[mi]._midam = missile[mi]._midam + 1 + lVar1;
					iVar3 = iVar3 + 1;
				} while (iVar3 <= (int)plr[id]._pLevel);
			}
			iVar3 = (int)missile[mi]._mispllvl;
			while (0 < iVar3) {
				iVar3 = iVar3 + -1;
				missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
			}
			uVar2 = missile[mi]._midam + (missile[mi]._midam >> 1);
		}
		missile[mi]._midam = uVar2;
	}
	missile[mi]._miPreFlag = '\x01';
	missile[mi]._mirange = 0x13;
	fadetor = '\x1e';
	fadetog = '\x1e';
	fadetob = '\x1e';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddManashield__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2189, offset 0x8013f83c
	/* begin block 1 */
		// Start line: 2190
		// Start offset: 0x8013F83C
	/* end block 1 */
	// End offset: 0x8013F900
	// End Line: 2200

	/* begin block 2 */
		// Start line: 4848
	/* end block 2 */
	// End Line: 4849

void AddManashield__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	short sVar1;
	long lVar2;
	
	sVar1 = (short)(((uint)(byte)plr[id]._pLevel << 0x18) >> 0x10);
	missile[mi]._mirange = (sVar1 >> 3) + (sVar1 >> 4);
	missile[mi]._miVar1 = (short)plr[id]._pHitPoints;
	lVar2 = plr[id]._pHPBase;
	missile[mi]._miVar8 = -1;
	missile[mi]._miVar2 = (short)lVar2;
	if ((mienemy & 0xffU) == 0) {
		UseMana__Fii(id,0xb);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFiremove__Fiiiiiicii(int mi /*$s0*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s5*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2208, offset 0x8013f910
	/* begin block 1 */
		// Start line: 2209
		// Start offset: 0x8013F910
	/* end block 1 */
	// End offset: 0x8013FA48
	// End Line: 2221

	/* begin block 2 */
		// Start line: 4901
	/* end block 2 */
	// End Line: 4902

void AddFiremove__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	long lVar2;
	
	lVar2 = ENG_random__Fl(10);
	missile[mi]._midam = lVar2 + (int)plr[id]._pLevel + 1;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	cVar1 = missile[mi]._mix;
	missile[mi]._mirange = 0xff;
	missile[mi]._miVar1 = 0;
	missile[mi]._miVar2 = 0;
	missile[mi]._mix = cVar1 + '\x01';
	missile[mi]._miy = missile[mi]._miy + '\x01';
	missile[mi]._miyoff = missile[mi]._miyoff + -0x20;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddGuardian__Fiiiiiicii(int mi /*$s7*/, int sx /*stack -72*/, int sy /*stack -64*/, int dx /*stack -56*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2225, offset 0x8013fa70
	/* begin block 1 */
		// Start line: 2226
		// Start offset: 0x8013FA70
		// Variables:
	// 		int i; // $s3
	// 		int k; // $s6
	// 		int l; // $v0
	// 		int j; // $s5
	// 		int tx; // $s1
	// 		int ty; // $s2
	// 		int CrawlNum[6]; // stack offset -96
	/* end block 1 */
	// End offset: 0x8013FEB0
	// End Line: 2279

	/* begin block 2 */
		// Start line: 4945
	/* end block 2 */
	// End Line: 4946

void AddGuardian__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	char cVar2;
	ushort uVar3;
	bool bVar4;
	uchar uVar5;
	long lVar6;
	void *pvVar7;
	void *pvVar8;
	int x2;
	int y2;
	int iVar9;
	uint uVar10;
	int iVar11;
	int iVar12;
	int local_60;
	undefined4 local_5c;
	undefined4 local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	int local_48;
	int local_40;
	int local_38;
	int local_30;
	
	local_60 = DAT_8011a030;
	local_5c = DAT_8011a034;
	local_58 = DAT_8011a038;
	local_54 = DAT_8011a03c;
	local_50 = DAT_8011a040;
	local_4c = DAT_8011a044;
	local_48 = sx;
	local_40 = sy;
	local_38 = dx;
	lVar6 = ENG_random__Fl(10);
	iVar9 = (int)missile[mi]._mispllvl;
	missile[mi]._midam = lVar6 + ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x19) + 1;
	while (0 < iVar9) {
		iVar9 = iVar9 + -1;
		missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
	}
	local_30 = mi * 0x13;
	iVar12 = 0;
	missile[mi]._miDelFlag = '\x01';
	iVar9 = 0;
	do {
		uVar10 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_60 + iVar9)];
		iVar11 = *(int *)((int)&local_60 + iVar9) + 1;
		if ((&CrawlTable)[*(int *)((int)&local_60 + iVar9)] != 0) {
			iVar9 = local_30 * 4;
			do {
				x2 = local_38 + (int)(&CrawlTable)[iVar11];
				y2 = dy + (int)(&CHAR_00h_800d5555)[iVar11];
				if ((x2 - 1U < 0x6f) && (bVar4 = false, y2 - 1U < 0x6f)) {
					uVar5 = LineClear__Fiiii(local_48,local_40,x2,y2);
					if (uVar5 != '\0') {
						pvVar7 = GetSOLID__Fii(x2,y2);
						pvVar8 = GetMISSILE__Fii(x2,y2);
						bVar4 = ((uint)pvVar7 | (int)dung_map[x2 * 0x70 + y2].dMonster |
										 (int)dung_map[x2 * 0x70 + y2].dObject | (uint)pvVar8 |
										(int)dung_map[x2 * 0x70 + y2].dMissile) == 0;
					}
					if (bVar4) {
						(&missile[0]._mix)[iVar9] = (char)x2;
						(&missile[0]._miy)[iVar9] = (char)y2;
						(&missile[0]._misx)[iVar9] = (char)x2;
						(&missile[0]._misy)[iVar9] = (char)y2;
						(&missile[0]._miDelFlag)[iVar9] = '\0';
						UseMana__Fii(id,0xd);
						iVar12 = 6;
						break;
					}
				}
				uVar10 = uVar10 - 1;
				iVar11 = iVar11 + 2;
			} while (0 < (int)uVar10);
		}
		iVar12 = iVar12 + 1;
		iVar9 = iVar12 * 4;
		if (5 < iVar12) {
			if (missile[mi]._miDelFlag != '\x01') {
				cVar1 = missile[mi]._mix;
				cVar2 = missile[mi]._miy;
				missile[mi]._misource = (short)id;
				iVar9 = AddLight__Fiii((int)cVar1,(int)cVar2,0x94);
				missile[mi]._mlid = (char)iVar9;
				uVar10 = ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x19) + (int)missile[mi]._mispllvl;
				missile[mi]._mirange = (ushort)uVar10;
				uVar10 = uVar10 + ((int)(plr[id]._pISplDur * (uVar10 & 0xffff)) >> 7);
				missile[mi]._mirange = (ushort)uVar10;
				if (0x1e < (uVar10 & 0xffff)) {
					missile[mi]._mirange = 0x1e;
				}
				uVar10 = (uint)missile[mi]._mirange << 4;
				missile[mi]._mirange = (ushort)uVar10;
				if ((uVar10 & 0xfff0) < 0x1e) {
					missile[mi]._mirange = 0x1e;
				}
				cVar1 = missile[mi]._miAnimLen;
				missile[mi]._miVar3 = 1;
				uVar3 = missile[mi]._mirange;
				missile[mi]._miVar2 = 0;
				missile[mi]._miVar1 = uVar3 - (short)cVar1;
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddChain__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2287, offset 0x8013fee4
	/* begin block 1 */
		// Start line: 2288
		// Start offset: 0x8013FEE4
	/* end block 1 */
	// End offset: 0x8013FF38
	// End Line: 2295

	/* begin block 2 */
		// Start line: 5081
	/* end block 2 */
	// End Line: 5082

void AddChain__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miVar1 = (short)dx;
	missile[mi]._mirange = 1;
	missile[mi]._miVar2 = (short)dy;
	UseMana__Fii(id,0xe);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddRhino__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2430, offset 0x8013ff48
	/* begin block 1 */
		// Start line: 2431
		// Start offset: 0x8013FF48
		// Variables:
	// 		struct AnimStruct *anim; // $s0
	/* end block 1 */
	// End offset: 0x801400AC
	// End Line: 2469

	/* begin block 2 */
		// Start line: 5375
	/* end block 2 */
	// End Line: 5376

void AddRhino__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	CMonster *pCVar2;
	AnimStruct *pAVar3;
	
	pCVar2 = monster[id].MType;
	pAVar3 = pCVar2->Anims + 5;
	if ((3 < (uint)pCVar2->mtype - 0x40) &&
		 (pAVar3 = pCVar2->Anims + 2, 3 < (uint)pCVar2->mtype - 0x59)) {
		pAVar3 = pCVar2->Anims + 1;
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x12);
	missile[mi]._mimfnum = (char)midir;
	missile[mi]._miAnimFlags = '\0';
	missile[mi]._miAnimDelay = pAVar3->Rate;
	cVar1 = pAVar3->Frames;
	missile[mi]._miAnimAdd = '\x01';
	missile[mi]._miAnimLen = cVar1;
	if ((uint)(monster[id].MType)->mtype - 0x59 < 4) {
		missile[mi]._miAnimFrame = '\a';
	}
	missile[mi]._miVar1 = 0;
	missile[mi]._miVar2 = 0;
	missile[mi]._miLightFlag = '\x01';
	missile[mi]._mirange = 0x100;
	PutMissile__Fi(mi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlare__Fiiiiiicii(int mi /*$s3*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2506, offset 0x801400cc
	/* begin block 1 */
		// Start line: 2507
		// Start offset: 0x801400CC
	/* end block 1 */
	// End offset: 0x801403B4
	// End Line: 2552

	/* begin block 2 */
		// Start line: 5550
	/* end block 2 */
	// End Line: 5551

void AddFlare__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	byte bVar1;
	int r;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	bVar1 = missile[mi]._miAnimType;
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	if (bVar1 == 0x28) {
		r = 0x243;
LAB_80140224:
		r = AddLight__Fiii(sx,sy,r);
		missile[mi]._mlid = (char)r;
	}
	else {
		if (bVar1 < 0x29) {
			if (bVar1 == 0x16) {
LAB_801401d4:
				r = AddLight__Fiii(sx,sy,0x93);
				missile[mi]._mlid = (char)r;
				goto LAB_80140260;
			}
		}
		else {
			if (bVar1 == 0x2a) {
				r = 0x1b3;
				goto LAB_80140224;
			}
			if (bVar1 == 0x2c) goto LAB_801401d4;
		}
		DBG_Error((char *)0x0,"source/MISSILES.cpp",0x9de);
	}
LAB_80140260:
	if ((char)mienemy == '\0') {
		UseMana__Fii(id,0x23);
		drawhpflag = '\x01';
		plr[id]._pHitPoints = plr[id]._pHitPoints + -0x140;
		r = plr[id]._pHitPoints;
		plr[id]._pHPBase = plr[id]._pHPBase + -0x140;
		if (r < 1) {
			StartPlrKill__Fii(id,0);
		}
	}
	else {
		if (0 < id) {
			if ((monster[id].MType)->mtype == 'e') {
				SetMissAnim__Fii(mi,0x16);
			}
			if ((monster[id].MType)->mtype == 'f') {
				SetMissAnim__Fii(mi,0x28);
			}
			if ((monster[id].MType)->mtype == 'g') {
				SetMissAnim__Fii(mi,0x2c);
			}
			if ((monster[id].MType)->mtype == 'h') {
				SetMissAnim__Fii(mi,0x2a);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddAcid__Fiiiiiicii(int mi /*$s0*/, int sx /*$s4*/, int sy /*$s5*/, int dx /*$s3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2559, offset 0x801403dc
	/* begin block 1 */
		// Start line: 2560
		// Start offset: 0x801403DC
	/* end block 1 */
	// End offset: 0x801404C8
	// End Line: 2572

	/* begin block 2 */
		// Start line: 5668
	/* end block 2 */
	// End Line: 5669

void AddAcid__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	byte bVar1;
	int dir;
	
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	dir = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,dir);
	bVar1 = monster[id]._mint;
	missile[mi]._mlid = -1;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	missile[mi]._mirange = ((ushort)bVar1 + 1) * 5 + 0xf;
	PutMissile__Fi(mi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddAcidpud__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2641, offset 0x801404f0
	/* begin block 1 */
		// Start line: 2642
		// Start offset: 0x801404F0
		// Variables:
	// 		int monst; // $s1
	/* end block 1 */
	// End offset: 0x801405B8
	// End Line: 2666

	/* begin block 2 */
		// Start line: 5843
	/* end block 2 */
	// End Line: 5844

void AddAcidpud__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	byte bVar1;
	short sVar2;
	long lVar3;
	
	sVar2 = missile[mi]._misource;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._mixoff = '\0';
	missile[mi]._miyoff = '\0';
	missile[mi]._miLightFlag = '\x01';
	lVar3 = ENG_random__Fl(0xf);
	bVar1 = monster[(int)sVar2]._mint;
	missile[mi]._miPreFlag = '\x01';
	missile[mi]._mirange = (short)lVar3 + ((ushort)bVar1 + 1) * 0x28;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStone__Fiiiiiicii(int mi /*$t5*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2669, offset 0x801405d4
	/* begin block 1 */
		// Start line: 2670
		// Start offset: 0x801405D4
		// Variables:
	// 		int i; // $a2
	// 		int j; // $t0
	// 		int k; // $t2
	// 		int l; // $v0
	// 		int tx; // $t1
	// 		int ty; // $t3
	// 		int mid; // $a0
	// 		int CrawlNum[6]; // stack offset -32
	/* end block 1 */
	// End offset: 0x801408F4
	// End Line: 2728

	/* begin block 2 */
		// Start line: 5939
	/* end block 2 */
	// End Line: 5940

void AddStone__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	byte bVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	int iVar5;
	uint uVar6;
	uint uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int local_20;
	undefined4 local_1c;
	undefined4 local_18;
	undefined4 local_14;
	undefined4 local_10;
	undefined4 local_c;
	
	local_20 = DAT_8011a030;
	local_1c = DAT_8011a034;
	local_18 = DAT_8011a038;
	local_14 = DAT_8011a03c;
	local_10 = DAT_8011a040;
	local_c = DAT_8011a044;
	iVar9 = 0;
	iVar11 = 0;
	iVar10 = 0;
	missile[mi]._misource = (short)id;
	iVar5 = 0;
	do {
		uVar7 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_20 + iVar5)];
		iVar8 = *(int *)((int)&local_20 + iVar5) + 1;
		if ((&CrawlTable)[*(int *)((int)&local_20 + iVar5)] != 0) {
			do {
				iVar9 = dx + (int)(&CrawlTable)[iVar8];
				iVar11 = dy + (int)(&CHAR_00h_800d5555)[iVar8];
				if ((iVar9 - 1U < 0x6f) && (iVar11 - 1U < 0x6f)) {
					uVar6 = SEXT24(dung_map[iVar9 * 0x70 + iVar11].dMonster);
					if ((int)uVar6 < 1) {
						uVar6 = ~uVar6;
					}
					else {
						uVar6 = uVar6 - 1;
					}
					if ((((3 < (int)uVar6) && (monster[uVar6]._mAi != '\x1b')) &&
							((monster[uVar6]._mFlags & 1) == 0)) &&
						 ((bVar1 = monster[uVar6]._mmode, 1 < (uint)bVar1 - 8 && (bVar1 != 0xe)))) {
						uVar7 = 0xffffff9d;
						missile[mi]._miVar1 = (short)(char)bVar1;
						missile[mi]._miVar2 = (short)uVar6;
						monster[uVar6]._mmode = '\x0f';
						iVar10 = 6;
						break;
					}
				}
				uVar7 = uVar7 - 1;
				iVar8 = iVar8 + 2;
			} while (0 < (int)uVar7);
		}
		iVar10 = iVar10 + 1;
		iVar5 = iVar10 * 4;
		if (5 < iVar10) {
			if (uVar7 == 0xffffff9d) {
				cVar2 = missile[mi]._mispllvl;
				missile[mi]._mix = (char)iVar9;
				cVar3 = missile[mi]._mix;
				missile[mi]._miy = (char)iVar11;
				cVar4 = missile[mi]._miy;
				uVar7 = (int)cVar2 + 6;
				missile[mi]._misx = cVar3;
				missile[mi]._misy = cVar4;
				missile[mi]._mirange = (ushort)uVar7;
				uVar7 = uVar7 + ((int)(plr[id]._pISplDur * (uVar7 & 0xffff)) >> 7);
				missile[mi]._mirange = (ushort)uVar7;
				if (0xf < (uVar7 & 0xffff)) {
					missile[mi]._mirange = 0xf;
				}
				missile[mi]._mirange = missile[mi]._mirange << 4;
				UseMana__Fii(id,8);
			}
			else {
				missile[mi]._miDelFlag = '\x01';
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddGolem__Fiiiiiicii(int mi /*$t0*/, int sx /*$fp*/, int sy /*stack -72*/, int dx /*stack -64*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2745, offset 0x80140904
	/* begin block 1 */
		// Start line: 2746
		// Start offset: 0x80140904
		// Variables:
	// 		int i; // $s3
	// 		int mx; // $v1
	// 		int CrawlNum[6]; // stack offset -96

		/* begin block 1.1 */
			// Start line: 2764
			// Start offset: 0x80140A3C
			// Variables:
		// 		int k; // $s6

			/* begin block 1.1.1 */
				// Start line: 2764
				// Start offset: 0x80140A54
				// Variables:
			// 		int l; // $v0
			// 		int j; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 2765
					// Start offset: 0x80140A60

					/* begin block 1.1.1.1.1 */
						// Start line: 2767
						// Start offset: 0x80140A80
						// Variables:
					// 		int tx; // $s1
					// 		int ty; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x80140BFC
					// End Line: 2785
				/* end block 1.1.1.1 */
				// End offset: 0x80140C08
				// End Line: 2786
			/* end block 1.1.1 */
			// End offset: 0x80140C08
			// End Line: 2786
		/* end block 1.1 */
		// End offset: 0x80140C10
		// End Line: 2787
	/* end block 1 */
	// End offset: 0x80140C10
	// End Line: 2787

	/* begin block 2 */
		// Start line: 6113
	/* end block 2 */
	// End Line: 6114

/* WARNING: Could not reconcile some variable overlaps */

void AddGolem__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	bool bVar1;
	uchar uVar2;
	byte bVar3;
	void *pvVar4;
	int iVar5;
	short *psVar6;
	int x2;
	int y2;
	int iVar7;
	uint uVar8;
	int iVar9;
	int local_60 [4];
	undefined4 local_50;
	undefined4 local_4c;
	int local_48;
	int local_40;
	int local_38;
	
	local_60[0] = DAT_8011a030;
	local_60[1] = DAT_8011a034;
	local_60[2] = DAT_8011a038;
	local_60[3] = DAT_8011a03c;
	local_50 = DAT_8011a040;
	local_4c = DAT_8011a044;
	missile[mi]._miDelFlag = '\0';
	iVar7 = 0;
	if (0 < nummissiles) {
		psVar6 = &missileactive;
		do {
			iVar5 = (int)*psVar6;
			if (((missile[iVar5]._mitype == '!') && (iVar5 != mi)) &&
				 ((int)missile[iVar5]._misource == id)) {
				missile[mi]._miDelFlag = '\x01';
				return;
			}
			iVar7 = iVar7 + 1;
			psVar6 = psVar6 + 1;
		} while (iVar7 < nummissiles);
	}
	iVar7 = 0;
	local_38 = mi * 0x13;
	local_48 = sy;
	local_40 = dx;
	do {
		iVar5 = local_38;
		if (5 < iVar7) {
			return;
		}
		iVar9 = local_60[iVar7] + 1;
		uVar8 = (uint)(byte)(&CrawlTable)[local_60[iVar7]];
		while (0 < (int)uVar8) {
			x2 = local_40 + (int)(&CrawlTable)[iVar9];
			y2 = dy + (int)(&CHAR_00h_800d5555)[iVar9];
			if ((x2 - 1U < 0x5f) && (bVar1 = false, y2 - 1U < 0x5f)) {
				uVar2 = LineClear__Fiiii(sx,local_48,x2,y2);
				if (uVar2 != '\0') {
					pvVar4 = GetSOLID__Fii(x2,y2);
					bVar3 = IsDplayer__Fii(x2,y2);
					bVar1 = ((uint)pvVar4 | (int)dung_map[x2 * 0x70 + y2].dMonster |
									 (int)dung_map[x2 * 0x70 + y2].dObject | (uint)bVar3) == 0;
				}
				if (bVar1) {
					(&missile[0]._miVar1)[iVar5 * 2] = (short)sx;
					(&missile[0]._miVar2)[iVar5 * 2] = (short)local_48;
					(&missile[0]._miVar4)[iVar5 * 2] = (short)local_40;
					(&missile[0]._miVar5)[iVar5 * 2] = (short)dy;
					if (((monster[id]._mx != '\x01') || (monster[id]._my != '\0')) && (id == myplr)) {
						M_StartKill__Fii(id,id);
					}
					UseMana__Fii(id,0x15);
					iVar7 = 6;
					break;
				}
			}
			iVar9 = iVar9 + 2;
			uVar8 = uVar8 - 1;
		}
		iVar7 = iVar7 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBoom__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2869, offset 0x80140c44
	/* begin block 1 */
		// Start line: 2870
		// Start offset: 0x80140C44
	/* end block 1 */
	// End offset: 0x80140CE0
	// End Line: 2881

	/* begin block 2 */
		// Start line: 6374
	/* end block 2 */
	// End Line: 6375

void AddBoom__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._mix = (char)dx;
	missile[mi]._misx = (char)dx;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._miVar1 = 0;
	missile[mi]._miy = (char)dy;
	missile[mi]._misy = (char)dy;
	missile[mi]._midam = dam;
	missile[mi]._mirange = (short)cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHeal__Fiiiiiicii(int mi /*$s4*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2886, offset 0x80140ce8
	/* begin block 1 */
		// Start line: 2887
		// Start offset: 0x80140CE8
		// Variables:
	// 		int i; // $s0
	// 		long l; // $s1
	/* end block 1 */
	// End offset: 0x80140EF0
	// End Line: 2906

	/* begin block 2 */
		// Start line: 6424
	/* end block 2 */
	// End Line: 6425

void AddHeal__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	lVar1 = ENG_random__Fl(10);
	iVar4 = (lVar1 + 1) * 0x40;
	iVar3 = 0;
	if ('\0' < plr[id]._pLevel) {
		do {
			lVar1 = ENG_random__Fl(4);
			iVar4 = iVar4 + (lVar1 + 1) * 0x40;
			iVar3 = iVar3 + 1;
		} while (iVar3 < (int)plr[id]._pLevel);
	}
	iVar3 = 0;
	if ('\0' < missile[mi]._mispllvl) {
		do {
			lVar1 = ENG_random__Fl(6);
			iVar4 = iVar4 + (lVar1 + 1) * 0x40;
			iVar3 = iVar3 + 1;
		} while (iVar3 < (int)missile[mi]._mispllvl);
	}
	if (plr[id]._pClass == '\0') {
		iVar4 = iVar4 << 1;
	}
	if (plr[id]._pClass == '\x01') {
		iVar4 = iVar4 + (iVar4 >> 1);
	}
	iVar2 = plr[id]._pMaxHP;
	iVar3 = plr[id]._pHitPoints + iVar4;
	plr[id]._pHitPoints = iVar3;
	if (iVar2 < iVar3) {
		plr[id]._pHitPoints = iVar2;
	}
	iVar3 = plr[id]._pMaxHPBase;
	iVar4 = plr[id]._pHPBase + iVar4;
	plr[id]._pHPBase = iVar4;
	if (iVar3 < iVar4) {
		plr[id]._pHPBase = iVar3;
	}
	UseMana__Fii(id,2);
	drawhpflag = '\x01';
	missile[mi]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHealOther__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2913, offset 0x80140f14
	/* begin block 1 */
		// Start line: 2914
		// Start offset: 0x80140F14
	/* end block 1 */
	// End offset: 0x80140F70
	// End Line: 2920

	/* begin block 2 */
		// Start line: 6487
	/* end block 2 */
	// End Line: 6488

void AddHealOther__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,0x22);
	if (id == myplr) {
		NewCursor__Fi(10);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddElement__Fiiiiiicii(int mi /*$s1*/, int sx /*$s2*/, int sy /*$s3*/, int dx /*$s4*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2927, offset 0x80140f84
	/* begin block 1 */
		// Start line: 2928
		// Start offset: 0x80140F84
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80141188
	// End Line: 2958

	/* begin block 2 */
		// Start line: 6522
	/* end block 2 */
	// End Line: 6523

void AddElement__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	long lVar2;
	int dir;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	lVar1 = ENG_random__Fl(10);
	lVar2 = ENG_random__Fl(10);
	dir = (int)missile[mi]._mispllvl;
	missile[mi]._midam = (lVar1 + lVar2 + (int)plr[id]._pLevel + 2) * 2;
	while (0 < dir) {
		dir = dir + -1;
		missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
	}
	missile[mi]._midam = missile[mi]._midam >> 1;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	dir = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,dir);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	missile[mi]._miVar3 = 0;
	missile[mi]._miVar4 = (short)dx;
	missile[mi]._miVar5 = (short)dy;
	dir = AddLight__Fiii(sx,sy,0x1b6);
	missile[mi]._mlid = (char)dir;
	UseMana__Fii(id,0x1d);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddIdentify__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2965, offset 0x801411b4
	/* begin block 1 */
		// Start line: 2966
		// Start offset: 0x801411B4
	/* end block 1 */
	// End offset: 0x80141240
	// End Line: 2975

	/* begin block 2 */
		// Start line: 6614
	/* end block 2 */
	// End Line: 6615

void AddIdentify__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,5);
	if (sbookflag != '\0') {
		sbookflag = '\0';
	}
	if (invflag == '\0') {
		invflag = '\x01';
	}
	options_pad = id;
	NewCursor__Fi(2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFirewallC__Fiiiiiicii(int mi /*stack -64*/, int sx /*$s7*/, int sy /*$fp*/, int dx /*stack -56*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2982, offset 0x80141258
	/* begin block 1 */
		// Start line: 2983
		// Start offset: 0x80141258
		// Variables:
	// 		int i; // $s5
	// 		int k; // $s6
	// 		int l; // $v0
	// 		int j; // $s4
	// 		int tx; // $s0
	// 		int ty; // $s1
	// 		int CrawlNum[6]; // stack offset -88
	/* end block 1 */
	// End offset: 0x801414E4
	// End Line: 3027

	/* begin block 2 */
		// Start line: 6658
	/* end block 2 */
	// End Line: 6659

void AddFirewallC__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	bool bVar1;
	int iVar2;
	uchar uVar3;
	int iVar4;
	void *pvVar5;
	int x2;
	int y2;
	int iVar6;
	uint uVar7;
	int iVar8;
	int local_58;
	undefined4 local_54;
	undefined4 local_50;
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
	int local_40;
	int local_38;
	int local_30;
	
	local_58 = DAT_8011a030;
	local_54 = DAT_8011a034;
	local_50 = DAT_8011a038;
	local_4c = DAT_8011a03c;
	local_48 = DAT_8011a040;
	local_44 = DAT_8011a044;
	iVar8 = 0;
	local_30 = mi * 0x13;
	missile[mi]._miDelFlag = '\x01';
	iVar4 = 0;
	local_40 = mi;
	local_38 = dx;
	do {
		iVar2 = local_30;
		uVar7 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_58 + iVar4)];
		iVar6 = *(int *)((int)&local_58 + iVar4) + 1;
		if ((&CrawlTable)[*(int *)((int)&local_58 + iVar4)] != 0) {
			iVar4 = local_30 * 4;
			do {
				x2 = local_38 + (int)(&CrawlTable)[iVar6];
				y2 = dy + (int)(&CHAR_00h_800d5555)[iVar6];
				if ((x2 - 1U < 0x6f) && (bVar1 = false, y2 - 1U < 0x6f)) {
					uVar3 = LineClear__Fiiii(sx,sy,x2,y2);
					if ((uVar3 != '\0') &&
						 (((sx != x2 || (sy != y2)) &&
							(pvVar5 = GetSOLID__Fii(x2,y2),
							((uint)pvVar5 | (int)dung_map[x2 * 0x70 + y2].dObject) == 0)))) {
						bVar1 = true;
					}
					if (bVar1) {
						(&missile[0]._miVar1)[iVar2 * 2] = (short)x2;
						(&missile[0]._miVar2)[iVar2 * 2] = (short)y2;
						(&missile[0]._miVar5)[iVar2 * 2] = (short)x2;
						(&missile[0]._miVar6)[iVar2 * 2] = (short)y2;
						(&missile[0]._miDelFlag)[iVar4] = '\0';
						iVar8 = 6;
						break;
					}
				}
				uVar7 = uVar7 - 1;
				iVar6 = iVar6 + 2;
			} while (0 < (int)uVar7);
		}
		iVar2 = local_40;
		iVar8 = iVar8 + 1;
		iVar4 = iVar8 * 4;
		if (5 < iVar8) {
			if (missile[local_40]._miDelFlag != '\x01') {
				missile[local_40]._miVar7 = 0;
				missile[local_40]._miVar8 = 0;
				iVar4 = GetDirection__Fiiii(sx,sy,local_38,dy);
				missile[iVar2]._miVar4 = (short)iVar4 + 2U & 7;
				missile[iVar2]._miVar3 = (short)iVar4 - 2U & 7;
				missile[iVar2]._mirange = 7;
				UseMana__Fii(id,6);
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddInfra__Fiiiiiicii(int mi /*$a2*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3033, offset 0x80141518
	/* begin block 1 */
		// Start line: 3034
		// Start offset: 0x80141518
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80141614
	// End Line: 3043

	/* begin block 2 */
		// Start line: 6773
	/* end block 2 */
	// End Line: 6774

void AddInfra__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int iVar1;
	
	iVar1 = (int)missile[mi]._mispllvl;
	missile[mi]._mirange = 0x630;
	while (0 < iVar1) {
		iVar1 = iVar1 + -1;
		missile[mi]._mirange = missile[mi]._mirange + (missile[mi]._mirange >> 3);
	}
	missile[mi]._mirange =
			 missile[mi]._mirange + (short)((int)((uint)missile[mi]._mirange * plr[id]._pISplDur) >> 7);
	if ((char)mienemy == '\0') {
		UseMana__Fii(id,9);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddWave__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3049, offset 0x80141624
	/* begin block 1 */
		// Start line: 3050
		// Start offset: 0x80141624
	/* end block 1 */
	// End offset: 0x801416A0
	// End Line: 3058

	/* begin block 2 */
		// Start line: 6816
	/* end block 2 */
	// End Line: 6817

void AddWave__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miVar1 = (short)dx;
	missile[mi]._miVar3 = 0;
	missile[mi]._miVar4 = 0;
	missile[mi]._mirange = 1;
	missile[mi]._miAnimFrame = '\x04';
	missile[mi]._miVar2 = (short)dy;
	UseMana__Fii(id,0xf);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddNova__Fiiiiiicii(int mi /*$s6*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3064, offset 0x801416b0
	/* begin block 1 */
		// Start line: 3065
		// Start offset: 0x801416B0
		// Variables:
	// 		int k; // $a1
	/* end block 1 */
	// End offset: 0x80141890
	// End Line: 3082

	/* begin block 2 */
		// Start line: 6862
	/* end block 2 */
	// End Line: 6863

void AddNova__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	uchar uVar1;
	long lVar2;
	long lVar3;
	long lVar4;
	long lVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	
	missile[mi]._miVar1 = (short)dx;
	missile[mi]._miVar2 = (short)dy;
	if (id == -1) {
		lVar2 = ENG_random__Fl(3);
		lVar3 = ENG_random__Fl(3);
		lVar4 = ENG_random__Fl(3);
		uVar1 = currlevel;
		iVar7 = lVar2 + lVar3 + lVar4;
		missile[mi]._midam = iVar7;
		missile[mi]._midam = iVar7 + (uint)(uVar1 >> 1);
	}
	else {
		lVar2 = ENG_random__Fl(6);
		lVar3 = ENG_random__Fl(6);
		lVar4 = ENG_random__Fl(6);
		lVar5 = ENG_random__Fl(6);
		lVar6 = ENG_random__Fl(6);
		iVar8 = lVar2 + lVar3 + lVar4 + lVar5 + lVar6;
		missile[mi]._midam = iVar8;
		iVar7 = (int)missile[mi]._mispllvl;
		missile[mi]._midam = iVar8 + 5 + (int)plr[id]._pLevel >> 1;
		while (0 < iVar7) {
			iVar7 = iVar7 + -1;
			missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
		}
		if ((char)mienemy == '\0') {
			UseMana__Fii(id,0x12);
		}
	}
	missile[mi]._mirange = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddRepair__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3104, offset 0x801418c0
	/* begin block 1 */
		// Start line: 3105
		// Start offset: 0x801418C0
	/* end block 1 */
	// End offset: 0x80141960
	// End Line: 3114

	/* begin block 2 */
		// Start line: 6969
	/* end block 2 */
	// End Line: 6970

void AddRepair__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,0x1a);
	if (id == myplr) {
		if (sbookflag != '\0') {
			sbookflag = '\0';
		}
		if (invflag == '\0') {
			invflag = '\x01';
		}
		options_pad = id;
		NewCursor__Fi(3);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddRecharge__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3121, offset 0x80141978
	/* begin block 1 */
		// Start line: 3122
		// Start offset: 0x80141978
	/* end block 1 */
	// End offset: 0x80141A18
	// End Line: 3131

	/* begin block 2 */
		// Start line: 7013
	/* end block 2 */
	// End Line: 7014

void AddRecharge__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,0x1b);
	if (id == myplr) {
		if (sbookflag != '\0') {
			sbookflag = '\0';
		}
		if (invflag == '\0') {
			invflag = '\x01';
		}
		options_pad = id;
		NewCursor__Fi(4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDisarm__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3138, offset 0x80141a30
	/* begin block 1 */
		// Start line: 3139
		// Start offset: 0x80141A30
	/* end block 1 */
	// End offset: 0x80141A8C
	// End Line: 3145

	/* begin block 2 */
		// Start line: 7057
	/* end block 2 */
	// End Line: 7058

void AddDisarm__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,0x1c);
	if (id == myplr) {
		NewCursor__Fi(5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddApoca__Fiiiiiicii(int mi /*$s4*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3153, offset 0x80141aa0
	/* begin block 1 */
		// Start line: 3154
		// Start offset: 0x80141AA0
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80141CE4
	// End Line: 3181

	/* begin block 2 */
		// Start line: 7094
	/* end block 2 */
	// End Line: 7095

void AddApoca__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	short sVar1;
	short sVar2;
	short sVar3;
	long lVar4;
	int iVar5;
	
	missile[mi]._miVar1 = 9;
	missile[mi]._miVar2 = (short)sy + -9;
	sVar1 = missile[mi]._miVar1;
	missile[mi]._miVar3 = missile[mi]._miVar1 + (short)sy;
	sVar2 = missile[mi]._miVar1;
	missile[mi]._miVar4 = (short)sx - sVar1;
	sVar3 = missile[mi]._miVar4;
	missile[mi]._miVar5 = sVar2 + (short)sx;
	sVar1 = missile[mi]._miVar2;
	missile[mi]._miVar6 = sVar3;
	if (sVar1 < 1) {
		missile[mi]._miVar2 = 1;
	}
	if (0x5f < missile[mi]._miVar3) {
		missile[mi]._miVar3 = 0x5f;
	}
	if (missile[mi]._miVar4 < 1) {
		missile[mi]._miVar4 = 1;
	}
	if (0x6f < missile[mi]._miVar5) {
		missile[mi]._miVar5 = 0x6f;
	}
	iVar5 = 0;
	if ('\0' < plr[id]._pLevel) {
		do {
			lVar4 = ENG_random__Fl(6);
			missile[mi]._midam = missile[mi]._midam + 1 + lVar4;
			iVar5 = iVar5 + 1;
		} while (iVar5 < (int)plr[id]._pLevel);
	}
	missile[mi]._mirange = 0xff;
	missile[mi]._miDelFlag = '\0';
	UseMana__Fii(id,0x18);
	GLUE_DoQuake__Fii(0xf,2);
	SPL_Arrow__F6TARGETiii(T_PLAYER,id,10,0x14);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlame__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int seqno /*stack 32*/)
 // line 3184, offset 0x80141d08
	/* begin block 1 */
		// Start line: 3185
		// Start offset: 0x80141D08
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x80141F24
	// End Line: 3214

	/* begin block 2 */
		// Start line: 7178
	/* end block 2 */
	// End Line: 7179

void AddFlame__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int seqno)

{
	long lVar1;
	int iVar2;
	long lVar3;
	
	missile[mi]._miVar2 = 0;
	if (0 < seqno) {
		do {
			seqno = seqno + -1;
			missile[mi]._miVar2 = missile[mi]._miVar2 + 5;
		} while (0 < seqno);
	}
	missile[mi]._misx = (char)dx;
	missile[mi]._misy = (char)dy;
	missile[mi]._mixoff = missile[midir]._mixoff;
	missile[mi]._miyoff = missile[midir]._miyoff;
	missile[mi]._mitxoff = missile[midir]._mitxoff;
	lVar1 = missile[midir]._mityoff;
	missile[mi]._mirange = missile[mi]._miVar2 + 0x14;
	missile[mi]._mityoff = lVar1;
	iVar2 = AddLight__Fiii(sx,sy,0x94);
	missile[mi]._mlid = (char)iVar2;
	if ((char)mienemy == '\0') {
		lVar1 = ENG_random__Fl((int)plr[id]._pLevel);
		lVar3 = ENG_random__Fl(2);
		iVar2 = (lVar1 + lVar3 + 2) * 8;
		missile[mi]._midam = iVar2 + (iVar2 >> 1);
	}
	else {
		lVar1 = ENG_random__Fl(((uint)monster[id].mMaxDamage - (uint)monster[id].mMinDamage) + 1);
		missile[mi]._midam = lVar1 + (uint)monster[id].mMinDamage;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlamec__Fiiiiiicii(int mi /*$s0*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3221, offset 0x80141f40
	/* begin block 1 */
		// Start line: 3222
		// Start offset: 0x80141F40
	/* end block 1 */
	// End offset: 0x80142018
	// End Line: 3239

	/* begin block 2 */
		// Start line: 7281
	/* end block 2 */
	// End Line: 7282

void AddFlamec__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x20);
	if ((char)mienemy == '\0') {
		UseMana__Fii(id,0x14);
	}
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	missile[mi]._miVar3 = 0;
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddCbolt__Fiiiiiicii(int mi /*$s0*/, int sx /*$s5*/, int sy /*$s2*/, int dx /*$s3*/, int dy /*stack 16*/, int midir /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3245, offset 0x80142038
	/* begin block 1 */
		// Start line: 3246
		// Start offset: 0x80142038
	/* end block 1 */
	// End offset: 0x8014221C
	// End Line: 3281

	/* begin block 2 */
		// Start line: 7333
	/* end block 2 */
	// End Line: 7334

void AddCbolt__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int micaster,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	if ((char)micaster == '\0') {
		lVar1 = ENG_random__Fl(0xf);
		missile[mi]._mirnd = lVar1 + 1;
		lVar1 = ENG_random__Fl((int)((uint)(ushort)plr[id]._pMagic << 0x10) >> 0x12);
		iVar2 = lVar1 + 1;
	}
	else {
		lVar1 = ENG_random__Fl(0xf);
		missile[mi]._mirnd = lVar1 + 1;
		iVar2 = 0xf;
	}
	missile[mi]._midam = iVar2;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	lVar1 = ENG_random__Fl(8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	if ((mi & 4U) != 0) {
		iVar2 = AddLight__Fiii(sx,sy,0x242);
		missile[mi]._mlid = (char)iVar2;
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,8);
	missile[mi]._miVar1 = 5;
	missile[mi]._miVar2 = (short)midir;
	missile[mi]._miVar3 = 0;
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHbolt__Fiiiiiicii(int mi /*$s1*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s0*/, int dy /*stack 16*/, int midir /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3289, offset 0x80142248
	/* begin block 1 */
		// Start line: 3290
		// Start offset: 0x80142248
		// Variables:
	// 		int sp; // $v1
	/* end block 1 */
	// End offset: 0x801423EC
	// End Line: 3314

	/* begin block 2 */
		// Start line: 7428
	/* end block 2 */
	// End Line: 7429

void AddHbolt__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int micaster,int id,int dam)

{
	long lVar1;
	int v;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	if (id == -1) {
		v = 0x10;
	}
	else {
		v = (int)missile[mi]._mispllvl * 2 + 0x10;
		if (0x3e < v) {
			v = 0x3f;
		}
	}
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,v);
	v = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,v);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	v = AddLight__Fiii(sx,sy,0x362);
	missile[mi]._mlid = (char)v;
	lVar1 = ENG_random__Fl(10);
	missile[mi]._midam = lVar1 + (int)plr[id]._pLevel + 9;
	UseMana__Fii(id,0x1f);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddResurrect__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3322, offset 0x80142414
	/* begin block 1 */
		// Start line: 3323
		// Start offset: 0x80142414
	/* end block 1 */
	// End offset: 0x80142478
	// End Line: 3331

	/* begin block 2 */
		// Start line: 7500
	/* end block 2 */
	// End Line: 7501

void AddResurrect__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	UseMana__Fii(id,0x20);
	if (id == myplr) {
		NewCursor__Fi(8);
	}
	missile[mi]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddResurrectBeam__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3334, offset 0x80142490
	/* begin block 1 */
		// Start line: 3335
		// Start offset: 0x80142490
	/* end block 1 */
	// End offset: 0x80142518
	// End Line: 3345

	/* begin block 2 */
		// Start line: 7529
	/* end block 2 */
	// End Line: 7530

void AddResurrectBeam__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	char cVar2;
	
	missile[mi]._mix = (char)dx;
	cVar1 = missile[mi]._mix;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._miy = (char)dy;
	cVar2 = missile[mi]._miy;
	missile[mi]._mirange = 0x10;
	missile[mi]._misx = cVar1;
	missile[mi]._misy = cVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTelekinesis__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3351, offset 0x80142520
	/* begin block 1 */
		// Start line: 3352
		// Start offset: 0x80142520
	/* end block 1 */
	// End offset: 0x8014257C
	// End Line: 3358

	/* begin block 2 */
		// Start line: 7572
	/* end block 2 */
	// End Line: 7573

void AddTelekinesis__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,0x21);
	if (id == myplr) {
		NewCursor__Fi(7);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBoneSpirit__Fiiiiiicii(int mi /*$s1*/, int sx /*$s2*/, int sy /*$s3*/, int dx /*$s4*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3365, offset 0x80142590
	/* begin block 1 */
		// Start line: 3366
		// Start offset: 0x80142590
	/* end block 1 */
	// End offset: 0x80142764
	// End Line: 3403

	/* begin block 2 */
		// Start line: 7607
	/* end block 2 */
	// End Line: 7608

void AddBoneSpirit__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int dir;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	missile[mi]._midam = 0;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	dir = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,dir);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	missile[mi]._miVar3 = 0;
	missile[mi]._miVar4 = (short)dx;
	missile[mi]._miVar5 = (short)dy;
	dir = AddLight__Fiii(sx,sy,0x3f4);
	missile[mi]._mlid = (char)dir;
	if ((char)mienemy == '\0') {
		UseMana__Fii(id,0x24);
		drawhpflag = '\x01';
		plr[id]._pHitPoints = plr[id]._pHitPoints + -0x180;
		dir = plr[id]._pHitPoints;
		plr[id]._pHPBase = plr[id]._pHPBase + -0x180;
		if (dir < 1) {
			StartPlrKill__Fii(id,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddRportal__Fiiiiiicii(int mi /*$s2*/, int sx /*$s0*/, int sy /*$s1*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3412, offset 0x80142794
	/* begin block 1 */
		// Start line: 3413
		// Start offset: 0x80142794
		// Variables:
	// 		int m2; // $a0

		/* begin block 1.1 */
			// Start line: 3413
			// Start offset: 0x80142794

			/* begin block 1.1.1 */
				// Start line: 3417
				// Start offset: 0x801427E0
				// Variables:
			// 		struct MissileStruct *miss; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80142814
			// End Line: 3421
		/* end block 1.1 */
		// End offset: 0x80142814
		// End Line: 3421
	/* end block 1 */
	// End offset: 0x801428A4
	// End Line: 3432

	/* begin block 2 */
		// Start line: 7719
	/* end block 2 */
	// End Line: 7720

void AddRportal__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	int i;
	
	i = (int)dung_map[sx * 0x70 + sy].dMissile + -1;
	if (0 < (int)dung_map[sx * 0x70 + sy].dMissile) {
		missile[i]._miy = missile[i]._miy + -1;
		PutMissile__Fi(i);
	}
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._mix = (char)sx;
	missile[mi]._miy = (char)sy;
	missile[mi]._misx = (char)sx;
	missile[mi]._misy = (char)sy;
	missile[mi]._mirange = 100;
	missile[mi]._miVar2 = 0;
	missile[mi]._miVar1 = 100 - (short)cVar1;
	PutMissile__Fi(mi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDiabApoca__Fiiiiiicii(int mi /*$s4*/, int sx /*$s6*/, int sy /*$s7*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3435, offset 0x801428c0
	/* begin block 1 */
		// Start line: 3436
		// Start offset: 0x801428C0
		// Variables:
	// 		int pnum; // $s3
	/* end block 1 */
	// End offset: 0x801429D0
	// End Line: 3447

	/* begin block 2 */
		// Start line: 7782
	/* end block 2 */
	// End Line: 7783

void AddDiabApoca__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	uchar uVar1;
	short *psVar2;
	short *psVar3;
	undefined *puVar4;
	int iVar5;
	
	iVar5 = 0;
	if (-1 < FePlayerNo) {
		psVar2 = &plr[0]._py;
		psVar3 = &plr[0]._px;
		puVar4 = (undefined *)0x0;
		do {
			if (((&plr[0].plractive)[(int)puVar4] != '\0') &&
				 (uVar1 = LineClear__Fiiii(sx,sy,(int)*psVar3,(int)*psVar2), uVar1 != '\0')) {
				AddMissile__Fiiiiiiciii
									((int)*psVar3,(int)*psVar2,(int)*psVar3,(int)*psVar2,0,0x42,(int)(char)mienemy,id,
									 dam,0);
			}
			psVar2 = psVar2 + 0xcf4;
			psVar3 = psVar3 + 0xcf4;
			iVar5 = iVar5 + 1;
			puVar4 = &DAT_000019e8 + (int)puVar4;
		} while (iVar5 <= FePlayerNo);
	}
	missile[mi]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMissile__Fiiiiiiciii(int sx /*$s4*/, int sy /*$s5*/, int v1 /*$fp*/, int v2 /*$s7*/, int midir /*stack 16*/, int mitype /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int v3 /*stack 32*/, int spllvl /*stack 36*/)
 // line 3451, offset 0x80142a04
	/* begin block 1 */
		// Start line: 3452
		// Start offset: 0x80142A04
		// Variables:
	// 		int mi; // $s0
	// 		int xyoffs[16]; // stack offset -104
	/* end block 1 */
	// End offset: 0x80142E5C
	// End Line: 3526

	/* begin block 2 */
		// Start line: 7822
	/* end block 2 */
	// End Line: 7823

int AddMissile__Fiiiiiiciii
							(int sx,int sy,int v1,int v2,int midir,int mitype,int micaster,int id,int v3,
							int spllvl)

{
	short *psVar1;
	uchar uVar2;
	short sVar3;
	int mi;
	_func_29 *p_Var4;
	int dir;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int local_68 [16];
	
	piVar7 = local_68;
	piVar6 = &DAT_8011a080;
	do {
		mi = piVar6[1];
		dir = piVar6[2];
		iVar5 = piVar6[3];
		*piVar7 = *piVar6;
		piVar7[1] = mi;
		piVar7[2] = dir;
		piVar7[3] = iVar5;
		piVar6 = piVar6 + 4;
		piVar7 = piVar7 + 4;
	} while (piVar6 != &DAT_8011a0c0);
	if (nummissiles < 0x7d) {
		mi = (int)missileavail[0];
		psVar1 = &missileactive + nummissiles;
		sVar3 = missileavail[0x7c - nummissiles];
		nummissiles = nummissiles + 1;
		*psVar1 = missileavail[0];
		missileavail[0] = sVar3;
		p_Var4 = (_func_29 *)MissPrintRoutines[mitype];
		missile[mi]._mitype = (char)mitype;
		missile[mi]._micaster = (short)(char)micaster;
		missile[mi]._misource = (short)id;
		missile[mi].PrintPtr = p_Var4;
		missile[mi]._miAnimType = missiledata[mitype].mFileNum;
		uVar2 = missiledata[mitype].mDraw;
		missile[mi]._mispllvl = (char)spllvl;
		missile[mi]._mimfnum = (char)midir;
		missile[mi]._miDrawFlag = uVar2;
		if ((missile[mi]._miAnimType == 0xff) ||
			 (dir = midir, misfiledata[(uint)missile[mi]._miAnimType].mAnimFAmt < 8)) {
			dir = 0;
		}
		SetMissDir__Fii(mi,dir);
		missile[mi]._mix = (char)sx;
		missile[mi]._miy = (char)sy;
		missile[mi]._misx = (char)sx;
		missile[mi]._misy = (char)sy;
		if ((((char)micaster == '\0') && (mitype != 0x2c)) && (mitype != 0x31)) {
			missile[mi]._miVar6 = (short)((int)plr[id]._pxoff + local_68[(int)plr[id]._pdir * 2] >> 1);
			missile[mi]._miVar7 = (short)((int)plr[id]._pyoff + local_68[(int)plr[id]._pdir * 2 + 1] >> 1)
			;
		}
		else {
			missile[mi]._miVar6 = 0;
			missile[mi]._miVar7 = 0;
		}
		missile[mi]._mitxoff = 0;
		missile[mi]._mityoff = 0;
		missile[mi]._mixoff = '\0';
		missile[mi]._miyoff = '\0';
		missile[mi]._miDelFlag = '\0';
		missile[mi]._miAnimAdd = '\x01';
		missile[mi]._miLightFlag = '\0';
		missile[mi]._miPreFlag = '\0';
		missile[mi]._mlid = -1;
		missile[mi]._miHitFlag = '\0';
		missile[mi]._midist = 0;
		missile[mi]._mirnd = 0;
		missile[mi]._midam = v3;
		if (missiledata[mitype].mlSFX != -1) {
			PlaySfxLoc__Fiii(missiledata[mitype].mlSFX,(int)missile[mi]._mix,(int)missile[mi]._miy);
		}
		(*missiledata[mitype].mAddProc)(mi,sx,sy,v1,v2,midir,(int)(char)micaster,id,v3);
	}
	else {
		mi = -1;
	}
	return mi;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Sentfire__Fiii(int i /*$s2*/, int sx /*$s3*/, int sy /*$s4*/)
 // line 3561, offset 0x80142e90
	/* begin block 1 */
		// Start line: 3562
		// Start offset: 0x80142E90
		// Variables:
	// 		int ex; // $s5
	// 		int dir; // $s0
	/* end block 1 */
	// End offset: 0x80143050
	// End Line: 3582

	/* begin block 2 */
		// Start line: 8090
	/* end block 2 */
	// End Line: 8091

int Sentfire__Fiii(int i,int sx,int sy)

{
	short sVar1;
	uchar uVar2;
	int spllvl;
	int midir;
	int iVar3;
	
	iVar3 = 0;
	uVar2 = LineClear__Fiiii((int)missile[i]._mix,(int)missile[i]._miy,sx,sy);
	if ((((uVar2 != '\0') &&
			 (midir = (int)dung_map[sx * 0x70 + sy].dMonster + -1,
			 0 < (int)dung_map[sx * 0x70 + sy].dMonster)) && (0 < monster[midir]._mhitpoints >> 6)) &&
		 (3 < midir)) {
		iVar3 = -1;
		midir = GetDirection__Fiiii((int)missile[i]._mix,(int)missile[i]._miy,sx,sy);
		sVar1 = missile[i]._misource;
		missile[i]._miVar3 = missileavail[0];
		spllvl = GetSpellLevel__Fii((int)sVar1,1);
		AddMissile__Fiiiiiiciii
							((int)missile[i]._mix,(int)missile[i]._miy,sx,sy,midir,1,0,(int)missile[i]._misource,
							 missile[i]._midam,spllvl);
	}
	if (iVar3 == -1) {
		SetMissDir__Fii(i,2);
		missile[i]._miVar2 = 3;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Dummy__Fi(int i /*$a0*/)
 // line 3587, offset 0x80143078
	/* begin block 1 */
		// Start line: 3588
		// Start offset: 0x80143078
	/* end block 1 */
	// End offset: 0x80143078
	// End Line: 3588

	/* begin block 2 */
		// Start line: 8160
	/* end block 2 */
	// End Line: 8161

void MI_Dummy__Fi(int i)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Golem__Fi(int i /*$s7*/)
 // line 3591, offset 0x80143080
	/* begin block 1 */
		// Start line: 3592
		// Start offset: 0x80143080
		// Variables:
	// 		int id; // $fp
	// 		int j; // $s4
	// 		int k; // $s6
	// 		int l; // $v0
	// 		int m; // $s5
	// 		int tx; // $s1
	// 		int ty; // $s2
	// 		int CrawlNum[6]; // stack offset -72
	/* end block 1 */
	// End offset: 0x801432C8
	// End Line: 3623

	/* begin block 2 */
		// Start line: 8167
	/* end block 2 */
	// End Line: 8168

void MI_Golem__Fi(int i)

{
	bool bVar1;
	int iVar2;
	uchar uVar3;
	byte bVar4;
	int x2;
	void *pvVar5;
	int y2;
	int iVar6;
	uint uVar7;
	int iVar8;
	int i_00;
	int local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	undefined4 local_38;
	undefined4 local_34;
	int local_30;
	
	local_48 = DAT_8011a030;
	local_44 = DAT_8011a034;
	local_40 = DAT_8011a038;
	local_3c = DAT_8011a03c;
	local_38 = DAT_8011a040;
	local_34 = DAT_8011a044;
	local_30 = i * 0x13;
	i_00 = (int)missile[i]._misource;
	if ((monster[i_00]._mx == '\x01') && (monster[i_00]._my == '\0')) {
		iVar8 = 0;
		x2 = 0;
		do {
			iVar2 = local_30;
			uVar7 = (uint)(byte)(&CrawlTable)[*(int *)((int)&local_48 + x2)];
			iVar6 = *(int *)((int)&local_48 + x2) + 1;
			if ((&CrawlTable)[*(int *)((int)&local_48 + x2)] != 0) {
				do {
					x2 = (int)(&missile[0]._miVar4)[iVar2 * 2] + (int)(&CrawlTable)[iVar6];
					y2 = (int)(&missile[0]._miVar5)[iVar2 * 2] + (int)(&CHAR_00h_800d5555)[iVar6];
					if ((x2 - 1U < 0x6f) && (bVar1 = false, y2 - 1U < 0x6f)) {
						uVar3 = LineClear__Fiiii((int)(&missile[0]._miVar1)[iVar2 * 2],
																		 (int)(&missile[0]._miVar2)[iVar2 * 2],x2,y2);
						if (uVar3 != '\0') {
							pvVar5 = GetSOLID__Fii(x2,y2);
							bVar4 = IsDplayer__Fii(x2,y2);
							bVar1 = ((uint)pvVar5 | (int)dung_map[x2 * 0x70 + y2].dMonster |
											 (int)dung_map[x2 * 0x70 + y2].dObject | (uint)bVar4) == 0;
						}
						if (bVar1) {
							SpawnGolum__Fiiii(i_00,x2,y2,i);
							iVar8 = 7;
							goto LAB_80143298;
						}
					}
					uVar7 = uVar7 - 1;
					iVar6 = iVar6 + 2;
				} while (0 < (int)uVar7);
			}
			iVar8 = iVar8 + 1;
LAB_80143298:
			x2 = iVar8 << 2;
		} while (iVar8 < 6);
	}
	missile[i]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_SetManashield__Fi(int i /*$a0*/)
 // line 3627, offset 0x801432fc
	/* begin block 1 */
		// Start line: 3628
		// Start offset: 0x801432FC
	/* end block 1 */
	// End offset: 0x80143338
	// End Line: 3631

	/* begin block 2 */
		// Start line: 8242
	/* end block 2 */
	// End Line: 8243

void MI_SetManashield__Fi(int i)

{
	if (missile[i]._misource == 0) {
		ManashieldFlag = '\x01';
	}
	else {
		ManashieldFlag2 = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_LArrow__Fi(int i /*$s2*/)
 // line 3635, offset 0x80143340
	/* begin block 1 */
		// Start line: 3636
		// Start offset: 0x80143340
		// Variables:
	// 		int p; // $s1
	// 		int mind; // $s3
	// 		int maxd; // $a2
	// 		int rst; // $s4
	/* end block 1 */
	// End offset: 0x80143B30
	// End Line: 3722

	/* begin block 2 */
		// Start line: 8256
	/* end block 2 */
	// End Line: 8257

void MI_LArrow__Fi(int i)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	char cVar4;
	long lVar5;
	int r;
	int mindam;
	uint maxdam;
	int iVar6;
	int maxdam_00;
	uint mindam_00;
	
	missile[i]._mirange = missile[i]._mirange - 1;
	maxdam_00 = (int)missile[i]._misource;
	if ((missile[i]._miAnimType == '\x1a') || (missile[i]._miAnimType == '\x05')) {
		if (missile[i]._mitype == '8') {
			cVar2 = missile[i]._mlid;
			cVar4 = missile[i]._mix;
			cVar1 = missile[i]._miy;
			r = (int)missile[i]._miAnimFrame + 0x360;
		}
		else {
			cVar2 = missile[i]._mlid;
			cVar4 = missile[i]._mix;
			cVar1 = missile[i]._miy;
			r = (int)missile[i]._miAnimFrame + 0x90;
		}
		ChangeLight__Fiiii((int)cVar2,(int)cVar4,(int)cVar1,r);
		uVar3 = missiledata[(int)missile[i]._mitype].mResist;
		if ((int)missile[i]._mitype == 0x38) {
			if (maxdam_00 == -1) {
				lVar5 = ENG_random__Fl(10);
				mindam = (uint)currlevel + lVar5 + 1;
				lVar5 = ENG_random__Fl(10);
				r = (uint)currlevel * 2 + lVar5 + 1;
			}
			else {
				mindam = plr[maxdam_00]._pILMinDam;
				r = plr[maxdam_00]._pILMaxDam;
			}
			missiledata[56].mResist = '\x02';
			CheckMissileCol__FiiiUciiUcb
								(i,mindam,r,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
		}
		if (missile[i]._mitype == '\x1b') {
			if (maxdam_00 == -1) {
				lVar5 = ENG_random__Fl(10);
				r = (uint)currlevel + lVar5 + 1;
				lVar5 = ENG_random__Fl(10);
				maxdam_00 = (uint)currlevel * 2 + lVar5 + 1;
			}
			else {
				r = plr[maxdam_00]._pIFMinDam;
				maxdam_00 = plr[maxdam_00]._pIFMaxDam;
			}
			missiledata[27].mResist = '\x01';
			CheckMissileCol__FiiiUciiUcb
								(i,r,maxdam_00,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
		}
		missiledata[(int)missile[i]._mitype].mResist = uVar3;
	}
	else {
		missile[i]._midist = missile[i]._midist + 1;
		r = missile[i]._mityoff;
		mindam = missile[i]._miyvel;
		missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
		missile[i]._mityoff = r + mindam;
		GetMissilePos__Fi(i);
		if (maxdam_00 == -1) {
			lVar5 = ENG_random__Fl(10);
			mindam_00 = (uint)currlevel + lVar5 + 1;
			lVar5 = ENG_random__Fl(10);
			maxdam = (uint)currlevel * 2 + lVar5 + 1;
		}
		else {
			if (missile[i]._micaster == 0) {
				mindam_00 = plr[maxdam_00]._pIMinDam;
				maxdam = plr[maxdam_00]._pIMaxDam;
			}
			else {
				mindam_00 = (uint)monster[maxdam_00].mMinDamage;
				maxdam = (uint)monster[maxdam_00].mMaxDamage;
			}
		}
		if ((missile[i]._mix != missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
			uVar3 = missiledata[(int)missile[i]._mitype].mResist;
			missiledata[(int)missile[i]._mitype].mResist = '\0';
			CheckMissileCol__FiiiUciiUcb
								(i,mindam_00,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
			missiledata[(int)missile[i]._mitype].mResist = uVar3;
		}
		if (missile[i]._mirange == 0) {
			maxdam_00 = missile[i]._mitxoff;
			mindam = missile[i]._mixvel;
			r = missile[i]._mityoff;
			iVar6 = missile[i]._miyvel;
			missile[i]._mimfnum = '\0';
			missile[i]._mitxoff = maxdam_00 - mindam;
			missile[i]._mityoff = r - iVar6;
			GetMissilePos__Fi(i);
			if (missile[i]._mitype == '8') {
				maxdam_00 = 0x1a;
			}
			else {
				maxdam_00 = 5;
			}
			SetMissAnim__Fii(i,maxdam_00);
			missile[i]._mirange = (short)missile[i]._miAnimLen - 1;
		}
		else {
			if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
				 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
				cVar4 = missile[i]._miy;
				cVar2 = missile[i]._mitype;
				missile[i]._miVar1 = (short)missile[i]._mix;
				missile[i]._miVar2 = (short)cVar4;
				if (cVar2 == '8') {
					ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._miVar1,(int)(short)cVar4,0x365);
				}
				else {
					ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._miVar1,(int)(short)cVar4,0x95);
				}
			}
		}
	}
	if (missile[i]._mirange == 0) {
		cVar2 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar2);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Arrow__Fi(int i /*$s1*/)
 // line 3725, offset 0x80143b54
	/* begin block 1 */
		// Start line: 3726
		// Start offset: 0x80143B54
		// Variables:
	// 		int p; // $v1
	// 		int mind; // $a1
	// 		int maxd; // $a2
	/* end block 1 */
	// End offset: 0x80143D80
	// End Line: 3751

	/* begin block 2 */
		// Start line: 8462
	/* end block 2 */
	// End Line: 8463

void MI_Arrow__Fi(int i)

{
	int iVar1;
	uint mindam;
	int iVar2;
	uint maxdam;
	
	missile[i]._mirange = missile[i]._mirange - 1;
	missile[i]._midist = missile[i]._midist + 1;
	iVar1 = missile[i]._mityoff;
	iVar2 = missile[i]._miyvel;
	missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
	missile[i]._mityoff = iVar1 + iVar2;
	GetMissilePos__Fi(i);
	iVar1 = (int)missile[i]._misource;
	if (iVar1 == -1) {
		mindam = (uint)currlevel;
		maxdam = mindam << 1;
	}
	else {
		if (missile[i]._micaster == 0) {
			mindam = plr[iVar1]._pIMinDam;
			maxdam = plr[iVar1]._pIMaxDam;
		}
		else {
			mindam = (uint)monster[iVar1].mMinDamage;
			maxdam = (uint)monster[iVar1].mMaxDamage;
		}
	}
	if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
		CheckMissileCol__FiiiUciiUcb
							(i,mindam,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
	}
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Firebolt__Fi(int i /*$s2*/)
 // line 3754, offset 0x80143d98
	/* begin block 1 */
		// Start line: 3755
		// Start offset: 0x80143D98
		// Variables:
	// 		int omx; // $s4
	// 		int omy; // $s5
	// 		int d; // $s3
	// 		int p; // $s1
	/* end block 1 */
	// End offset: 0x80144484
	// End Line: 3851

	/* begin block 2 */
		// Start line: 8530
	/* end block 2 */
	// End Line: 8531

void MI_Firebolt__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	short sVar5;
	long lVar6;
	int x;
	int r;
	int local_3c;
	int y;
	long lVar7;
	
	cVar1 = missile[i]._mitype;
	missile[i]._mirange = missile[i]._mirange - 1;
	local_3c = 0;
	if ((cVar1 == '?') && (missile[i]._mimfnum == '\b')) {
		if (missile[i]._mirange == 0) {
			if (-1 < (int)missile[i]._mlid) {
				AddUnLight__Fi((int)missile[i]._mlid);
			}
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
			missile[i]._miDelFlag = '\x01';
			PlaySfxLoc__Fiii(0x4b,(int)cVar1,(int)cVar2);
		}
		goto LAB_8014447c;
	}
	y = missile[i]._mitxoff;
	x = missile[i]._miyvel;
	missile[i]._mitxoff = y + missile[i]._mixvel;
	lVar7 = missile[i]._mityoff;
	missile[i]._mityoff = missile[i]._mityoff + x;
	GetMissilePos__Fi(i);
	x = (int)missile[i]._misource;
	if (x == -1) {
		lVar6 = ENG_random__Fl((uint)currlevel << 1);
		local_3c = lVar6 + (uint)currlevel;
	}
	else {
		if (missile[i]._micaster == 0) {
			cVar1 = missile[i]._mitype;
			if (cVar1 == '\x18') {
				local_3c = (uint)(ushort)plr[x]._pMagic << 0x10;
				local_3c = ((local_3c >> 0x11) - (local_3c >> 0x13)) + (int)missile[i]._mispllvl * 3;
			}
			else {
				if (cVar1 < '\x19') {
					if (cVar1 == '\x01') {
						lVar6 = ENG_random__Fl(10);
						local_3c = lVar6 + ((int)((uint)(ushort)plr[x]._pMagic << 0x10) >> 0x13) + 1 +
											 (int)missile[i]._mispllvl;
					}
				}
				else {
					if (cVar1 == '?') {
						local_3c = 0;
					}
				}
			}
		}
		else {
			lVar6 = ENG_random__Fl(((uint)monster[x].mMaxDamage - (uint)monster[x].mMinDamage) + 1);
			local_3c = lVar6 + (uint)monster[x].mMinDamage;
		}
	}
	if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
		CheckMissileCol__FiiiUciiUcb
							(i,local_3c,local_3c,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
	}
	if (missile[i]._mirange != 0) {
		if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
			 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
			cVar1 = missile[i]._miy;
			missile[i]._miVar1 = (short)missile[i]._mix;
			local_3c = (int)missile[i]._mlid;
			missile[i]._miVar2 = (short)cVar1;
			if (-1 < local_3c) {
				if (missile[i]._miAnimType == '(') {
					x = (int)missile[i]._miVar1;
					y = (int)(short)cVar1;
					r = 0x243;
				}
				else {
					if (missile[i]._miAnimType == '*') {
						x = (int)missile[i]._miVar1;
						y = (int)(short)cVar1;
						r = 0x1b3;
					}
					else {
						local_3c = (int)missile[i]._mlid;
						x = (int)missile[i]._miVar1;
						y = (int)missile[i]._miVar2;
						r = 0x95;
					}
				}
				ChangeLight__Fiiii(local_3c,x,y,r);
			}
		}
		goto LAB_8014447c;
	}
	missile[i]._miDelFlag = '\x01';
	missile[i]._mitxoff = y;
	missile[i]._mityoff = lVar7;
	GetMissilePos__Fi(i);
	cVar1 = missile[i]._mitype;
	if (cVar1 == '\x18') {
		cVar1 = missile[i]._mix;
		cVar2 = missile[i]._miy;
		cVar3 = missile[i]._mimfnum;
		local_3c = 0x19;
LAB_801442a4:
		cVar4 = *(char *)&missile[i]._micaster;
		sVar5 = missile[i]._misource;
LAB_801442cc:
		AddMissile__Fiiiiiiciii((int)cVar1,(int)cVar2,i,0,(int)cVar3,local_3c,(int)cVar4,(int)sVar5,0,0)
		;
LAB_80144314:
		local_3c = i << 2;
	}
	else {
		if ('\x18' < cVar1) {
			if (cVar1 == '9') {
				cVar1 = missile[i]._mix;
				cVar2 = missile[i]._miy;
				cVar3 = missile[i]._mimfnum;
				local_3c = 0x3a;
				goto LAB_801442a4;
			}
			if (cVar1 == '?') {
				SetMissDir__Fii(i,8);
				missile[i]._mirange = 7;
				missile[i]._miDelFlag = '\0';
				goto LAB_8014447c;
			}
			goto LAB_80144314;
		}
		if (cVar1 == '\x01') {
			local_3c = i << 2;
LAB_80144214:
			x = local_3c * 4 + i * 3;
			local_3c = x * 4;
			cVar1 = (&missile[0]._mix)[local_3c];
			cVar2 = (&missile[0]._miy)[local_3c];
			cVar3 = (&missile[0]._mimfnum)[local_3c];
			local_3c = 9;
			cVar4 = *(char *)(&missile[0]._micaster + x * 2);
			sVar5 = (&missile[0]._misource)[x * 2];
			goto LAB_801442cc;
		}
		local_3c = i * 4;
		if (cVar1 == '\x15') goto LAB_80144214;
	}
	if (-1 < (int)(&missile[0]._mlid)[local_3c * 0x10 + i * 0xc]) {
		AddUnLight__Fi((int)(&missile[0]._mlid)[local_3c * 0x10 + i * 0xc]);
	}
LAB_8014447c:
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Lightball__Fi(int i /*$s1*/)
 // line 3855, offset 0x801444ac
	/* begin block 1 */
		// Start line: 3856
		// Start offset: 0x801444AC
		// Variables:
	// 		int j; // $s4
	// 		int tx; // $s2
	// 		int ty; // $s3
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80144740
	// End Line: 3884

	/* begin block 2 */
		// Start line: 8755
	/* end block 2 */
	// End Line: 8756

void MI_Lightball__Fi(int i)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	
	iVar7 = missile[i]._mixvel;
	iVar5 = missile[i]._mityoff;
	iVar8 = missile[i]._miyvel;
	sVar1 = missile[i]._miVar1;
	sVar2 = missile[i]._miVar2;
	missile[i]._mirange = missile[i]._mirange - 1;
	iVar4 = missile[i]._mitxoff;
	missile[i]._mityoff = iVar5 + iVar8;
	missile[i]._mitxoff = iVar4 + iVar7;
	GetMissilePos__Fi(i);
	uVar3 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,
						 (void *)0x0);
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._mirange = uVar3;
	}
	uVar6 = SEXT14(dung_map[(int)sVar1 * 0x70 + (int)sVar2].dObject);
	if (((uVar6 != 0) && ((int)sVar1 == (int)missile[i]._mix)) && ((int)sVar2 == (int)missile[i]._miy)
		 ) {
		if ((int)uVar6 < 1) {
			uVar6 = ~uVar6;
		}
		else {
			uVar6 = uVar6 - 1;
		}
		if ((uint)(byte)object[uVar6]._otype - 0x3b < 2) {
			missile[i]._mirange = uVar3;
		}
	}
	if ((i & 2U) != 0) {
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x243);
	}
	if ((missile[i]._mirange == 0) && (missile[i]._miDelFlag = '\x01', (i & 2U) != 0)) {
		AddUnLight__Fi((int)missile[i]._mlid);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Acidpud__Fi(int i /*$s2*/)
 // line 3901, offset 0x80144764
	/* begin block 1 */
		// Start line: 3902
		// Start offset: 0x80144764
		// Variables:
	// 		int range; // $s0
	/* end block 1 */
	// End offset: 0x80144874
	// End Line: 3927

	/* begin block 2 */
		// Start line: 8862
	/* end block 2 */
	// End Line: 8863

void MI_Acidpud__Fi(int i)

{
	ushort uVar1;
	int mindam;
	
	mindam = missile[i]._midam;
	missile[i]._mirange = missile[i]._mirange - 1;
	uVar1 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUcb
						(i,mindam,mindam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
	missile[i]._mirange = uVar1;
	if (uVar1 == 0) {
		if (missile[i]._mimfnum == '\0') {
			SetMissDir__Fii(i,1);
			missile[i]._mirange = (short)missile[i]._miAnimLen;
		}
		else {
			missile[i]._miDelFlag = '\x01';
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Firewall__Fi(int i /*$s1*/)
 // line 3930, offset 0x80144890
	/* begin block 1 */
		// Start line: 3931
		// Start offset: 0x80144890
		// Variables:
	// 		int ExpLight[14]; // stack offset -72
	/* end block 1 */
	// End offset: 0x80144B94
	// End Line: 3967

	/* begin block 2 */
		// Start line: 8936
	/* end block 2 */
	// End Line: 8937

void MI_Firewall__Fi(int i)

{
	int *piVar1;
	int *piVar2;
	long lVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	int local_48 [14];
	
	piVar1 = &DAT_8011a0c0;
	piVar2 = local_48;
	do {
		piVar8 = piVar2;
		piVar7 = piVar1;
		iVar4 = piVar7[1];
		iVar5 = piVar7[2];
		iVar6 = piVar7[3];
		*piVar8 = *piVar7;
		piVar8[1] = iVar4;
		piVar8[2] = iVar5;
		piVar8[3] = iVar6;
		piVar1 = piVar7 + 4;
		piVar2 = piVar8 + 4;
	} while (piVar7 + 4 != (int *)0x8011a0f0);
	iVar4 = piVar7[5];
	piVar8[4] = iRam8011a0f0;
	piVar8[5] = iVar4;
	missile[i]._mirange = missile[i]._mirange - 1;
	if ((uint)missile[i]._mirange == (int)missile[i]._miVar1) {
		SetMissDir__Fii(i,1);
		lVar3 = ENG_random__Fl(0xb);
		missile[i]._miAnimFrame = (char)lVar3 + '\x01';
	}
	if ((uint)missile[i]._mirange == (int)missile[i]._miAnimLen - 1U) {
		SetMissDir__Fii(i,0);
		missile[i]._miAnimFrame = '\r';
		missile[i]._miAnimAdd = -1;
	}
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,
						 1,&DAT_00000001);
	if ((missile[i]._mirange == 0) && (missile[i]._miDelFlag = '\x01', (i & 0xffU) != 0)) {
		AddUnLight__Fi((int)missile[i]._mlid);
	}
	if ((((missile[i]._mimfnum == '\0') || (missile[i]._mirange == 0)) ||
			(missile[i]._miAnimAdd == -1)) || (0xb < missile[i]._miVar2)) goto LAB_80144b8c;
	if (missile[i]._miVar2 == 0) {
		if ((i & 0xffU) != 0) {
			iVar4 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_48[0] >> 3) + 0x10);
			missile[i]._mlid = (char)iVar4;
			goto LAB_80144b08;
		}
	}
	else {
LAB_80144b08:
		if ((i & 0xffU) != 0) {
			ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
												 (local_48[(int)missile[i]._miVar2] >> 2) + 0x10);
		}
	}
	missile[i]._miVar2 = missile[i]._miVar2 + 1;
LAB_80144b8c:
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Fireball__Fi(int i /*$s1*/)
 // line 3971, offset 0x80144bac
	/* begin block 1 */
		// Start line: 3972
		// Start offset: 0x80144BAC
		// Variables:
	// 		int dam; // $s2
	// 		int px; // $fp
	// 		int py; // $s7
	// 		int id; // $a0
	// 		int mx; // $s3
	// 		int my; // $s4
	/* end block 1 */
	// End offset: 0x801454F4
	// End Line: 4066

	/* begin block 2 */
		// Start line: 9020
	/* end block 2 */
	// End Line: 9021

void MI_Fireball__Fi(int i)

{
	char cVar1;
	char cVar2;
	short sVar3;
	bool bVar4;
	void *pvVar5;
	int iVar6;
	int fy;
	int x;
	int tx;
	int mindam;
	int y;
	int ty;
	int ty_00;
	int fx;
	
	fy = (int)missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange - 1;
	mindam = missile[i]._midam;
	if (missile[i]._micaster == 0) {
		fx = (int)plr[fy]._px;
		fy = (int)plr[fy]._py;
	}
	else {
		fx = (int)monster[fy]._mx;
		fy = (int)monster[fy]._my;
	}
	if (missile[i]._miAnimType == '\x13') {
		if (missile[i]._mirange == 0) {
			cVar1 = missile[i]._mlid;
			missile[i]._miDelFlag = '\x01';
			AddUnLight__Fi((int)cVar1);
		}
		goto LAB_801454ec;
	}
	iVar6 = missile[i]._mityoff;
	x = missile[i]._miyvel;
	missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
	missile[i]._mityoff = iVar6 + x;
	GetMissilePos__Fi(i);
	if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
		CheckMissileCol__FiiiUciiUcb
							(i,mindam,mindam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
	}
	if (missile[i]._mirange != 0) {
		if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
			 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
			cVar1 = missile[i]._mlid;
			cVar2 = missile[i]._miy;
			missile[i]._miVar1 = (short)missile[i]._mix;
			sVar3 = missile[i]._miVar1;
			missile[i]._miVar2 = (short)cVar2;
			ChangeLight__Fiiii((int)cVar1,(int)sVar3,(int)(short)cVar2,0x95);
		}
		goto LAB_801454ec;
	}
	x = (int)missile[i]._mix;
	y = (int)missile[i]._miy;
	ChangeLight__Fiiii((int)missile[i]._mlid,x,y,0x95);
	iVar6 = CheckBlock__Fiiii(fx,fy,x,y);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',x,y,1,&DAT_00000001);
	}
	ty_00 = y + 1;
	iVar6 = CheckBlock__Fiiii(fx,fy,x,ty_00);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',x,ty_00,1,&DAT_00000001);
	}
	ty = y + -1;
	iVar6 = CheckBlock__Fiiii(fx,fy,x,ty);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',x,ty,1,&DAT_00000001);
	}
	tx = x + 1;
	iVar6 = CheckBlock__Fiiii(fx,fy,tx,y);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',tx,y,1,&DAT_00000001);
	}
	iVar6 = CheckBlock__Fiiii(fx,fy,tx,ty);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',tx,ty,1,&DAT_00000001);
	}
	iVar6 = CheckBlock__Fiiii(fx,fy,tx,ty_00);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',tx,ty_00,1,&DAT_00000001);
	}
	tx = x + -1;
	iVar6 = CheckBlock__Fiiii(fx,fy,tx,y);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',tx,y,1,&DAT_00000001);
	}
	iVar6 = CheckBlock__Fiiii(fx,fy,tx,ty_00);
	if (iVar6 == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',tx,ty_00,1,&DAT_00000001);
	}
	fy = CheckBlock__Fiiii(fx,fy,tx,ty);
	if (fy == 0) {
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',tx,ty,1,&DAT_00000001);
	}
	if ((&TransList)[(int)dung_map[x * 0x70 + y].dTransVal] == '\0') {
LAB_80145198:
		missile[i]._mix = missile[i]._mix + '\x01';
		missile[i]._miy = missile[i]._miy + '\x01';
		missile[i]._miyoff = missile[i]._miyoff + -0x20;
	}
	else {
		if (missile[i]._mixvel < 0) {
			bVar4 = false;
			if ((((&TransList)[(int)dung_map[x * 0x70 + ty_00].dTransVal] != '\0') &&
					(pvVar5 = GetSOLID__Fii(x,ty_00), pvVar5 != (void *)0x0)) ||
				 (((&TransList)[(int)dung_map[x * 0x70 + ty].dTransVal] != '\0' &&
					(pvVar5 = GetSOLID__Fii(x,ty), pvVar5 != (void *)0x0)))) {
				bVar4 = true;
			}
			if (bVar4) goto LAB_80145198;
		}
	}
	if (0 < missile[i]._miyvel) {
		bVar4 = false;
		if ((((&TransList)[(int)dung_map[(x + 1) * 0x70 + y].dTransVal] != '\0') &&
				(pvVar5 = GetSOLID__Fii(x + 1,y), pvVar5 != (void *)0x0)) ||
			 (((&TransList)[(int)dung_map[(x + -1) * 0x70 + y].dTransVal] != '\0' &&
				(pvVar5 = GetSOLID__Fii(x + -1,y), pvVar5 != (void *)0x0)))) {
			bVar4 = true;
		}
		if (bVar4) {
			missile[i]._miyoff = missile[i]._miyoff + -0x20;
		}
	}
	if (0 < missile[i]._mixvel) {
		bVar4 = false;
		if ((((&TransList)[(int)dung_map[x * 0x70 + y + 1].dTransVal] != '\0') &&
				(pvVar5 = GetSOLID__Fii(x,y + 1), pvVar5 != (void *)0x0)) ||
			 (((&TransList)[(int)dung_map[x * 0x70 + y + -1].dTransVal] != '\0' &&
				(pvVar5 = GetSOLID__Fii(x,y + -1), pvVar5 != (void *)0x0)))) {
			bVar4 = true;
		}
		if (bVar4) {
			missile[i]._mixoff = missile[i]._mixoff + -0x20;
		}
	}
	missile[i]._mimfnum = '\0';
	SetMissAnim__Fii(i,0x13);
	missile[i]._mirange = (short)missile[i]._miAnimLen - 1;
LAB_801454ec:
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Lightctrl__Fi(int i /*$s4*/)
 // line 4070, offset 0x80145528
	/* begin block 1 */
		// Start line: 4071
		// Start offset: 0x80145528
		// Variables:
	// 		int dam; // $s3
	// 		int p; // $v1
	// 		int mx; // $s0
	// 		int my; // $s2
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x801458BC
	// End Line: 4136

	/* begin block 2 */
		// Start line: 9248
	/* end block 2 */
	// End Line: 9249

void MI_Lightctrl__Fi(int i)

{
	char cVar1;
	long lVar2;
	long lVar3;
	void *pvVar4;
	undefined *puVar5;
	int v3;
	int x;
	uint uVar6;
	int y;
	
	v3 = (int)missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange - 1;
	if (v3 == -1) {
		lVar2 = ENG_random__Fl((uint)currlevel);
		v3 = lVar2 + (uint)currlevel * 2;
	}
	else {
		if (missile[i]._micaster == 0) {
			lVar2 = ENG_random__Fl((int)plr[v3]._pLevel);
			lVar3 = ENG_random__Fl(2);
			v3 = (lVar2 + lVar3 + 2) * 0x40;
		}
		else {
			lVar2 = ENG_random__Fl(((uint)monster[v3].mMaxDamage - (uint)monster[v3].mMinDamage) + 1);
			v3 = (lVar2 + (uint)monster[v3].mMinDamage) * 2;
		}
	}
	x = missile[i]._mityoff;
	y = missile[i]._miyvel;
	missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
	missile[i]._mityoff = x + y;
	GetMissilePos__Fi(i);
	x = (int)missile[i]._mix;
	y = (int)missile[i]._miy;
	if ((x < 0x70) && (y < 0x70)) {
		if (((missile[i]._misource != -1) ||
				((x != (int)missile[i]._misx || (y != (int)missile[i]._misy)))) &&
			 (pvVar4 = GetMISSILE__Fii(x,y), pvVar4 != (void *)0x0)) {
			missile[i]._mirange = 0;
		}
		puVar5 = (undefined *)GetMISSILE__Fii(x,y);
		if (((puVar5 != &DAT_00000001) &&
				(((x != (int)missile[i]._miVar1 || (y != (int)missile[i]._miVar2)) && (0 < x)))) &&
			 (((0 < y && (x < 0x70)) && (y < 0x70)))) {
			if ((((int)missile[i]._misource == -1) || (missile[i]._micaster != 1)) ||
				 ((uVar6 = (uint)(monster[(int)missile[i]._misource].MType)->mtype, 3 < uVar6 - 0x4c &&
					(3 < uVar6 - 0x6b)))) {
				AddMissile__Fiiiiiiciii
									((int)missile[i]._mix,(int)missile[i]._miy,(int)missile[i]._misx,
									 (int)missile[i]._misy,i,8,(int)*(char *)&missile[i]._micaster,
									 (int)missile[i]._misource,v3,(int)missile[i]._mispllvl);
			}
			else {
				AddMissile__Fiiiiiiciii
									((int)missile[i]._mix,(int)missile[i]._miy,(int)missile[i]._misx,
									 (int)missile[i]._misy,i,0x17,(int)*(char *)&missile[i]._micaster,
									 (int)missile[i]._misource,v3,(int)missile[i]._mispllvl);
				if (0xfd < missile[i]._mirange) {
					PlaySfxLoc__Fiii(0x50,(int)missile[i]._mix,(int)missile[i]._miy);
				}
			}
			cVar1 = missile[i]._miy;
			missile[i]._miVar1 = (short)missile[i]._mix;
			missile[i]._miVar2 = (short)cVar1;
		}
		if ((((missile[i]._mirange == 0) || (x < 1)) || (y < 1)) || ((0x6f < x || (0x70 < y)))) {
			missile[i]._miDelFlag = '\x01';
		}
	}
	else {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Lightning__Fi(int i /*$s1*/)
 // line 4140, offset 0x801458e0
	/* begin block 1 */
		// Start line: 4141
		// Start offset: 0x801458E0
		// Variables:
	// 		int j; // $s2
	// 		struct MissileStruct *miss; // $s0
	/* end block 1 */
	// End offset: 0x801459C4
	// End Line: 4160

	/* begin block 2 */
		// Start line: 9404
	/* end block 2 */
	// End Line: 9405

void MI_Lightning__Fi(int i)

{
	char cVar1;
	ushort uVar2;
	uint uVar3;
	
	uVar2 = missile[i]._mirange;
	uVar3 = *(uint *)&missile[i]._mitype;
	missile[i]._mirange = uVar2 - 1;
	if ((uVar3 & 0xffff00) != (*(uint *)&missile[i]._miyoff & 0xffff00)) {
		CheckMissileCol__FiiiUciiUcb
							(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,
							 (int)missile[i]._miy,0,&DAT_00000001);
	}
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._mirange = uVar2 - 1;
	}
	ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x243);
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Town__Fi(int i /*$s1*/)
 // line 4166, offset 0x801459e0
	/* begin block 1 */
		// Start line: 4167
		// Start offset: 0x801459E0
		// Variables:
	// 		int p; // $a0
	// 		int ExpLight[17]; // stack offset -88

		/* begin block 1.1 */
			// Start line: 4187
			// Start offset: 0x80145B9C

			/* begin block 1.1.1 */
				// Start line: 4187
				// Start offset: 0x80145BB8
				// Variables:
			// 		struct PlayerStruct *player; // $a1
			/* end block 1.1.1 */
			// End offset: 0x80145CD8
			// End Line: 4207
		/* end block 1.1 */
		// End offset: 0x80145CE4
		// End Line: 4209
	/* end block 1 */
	// End offset: 0x80145D20
	// End Line: 4215

	/* begin block 2 */
		// Start line: 9481
	/* end block 2 */
	// End Line: 9482

void MI_Town__Fi(int i)

{
	int iVar1;
	int iVar2;
	uint pnum;
	int iVar3;
	int *piVar4;
	undefined *puVar5;
	int *piVar6;
	int local_58 [18];
	
	piVar6 = local_58;
	piVar4 = &DAT_8011a0f8;
	do {
		iVar1 = piVar4[1];
		iVar2 = piVar4[2];
		iVar3 = piVar4[3];
		*piVar6 = *piVar4;
		piVar6[1] = iVar1;
		piVar6[2] = iVar2;
		piVar6[3] = iVar3;
		piVar4 = piVar4 + 4;
		piVar6 = piVar6 + 4;
	} while (piVar4 != (int *)0x8011a138);
	*piVar6 = iRam8011a138;
	if (1 < missile[i]._mirange) {
		missile[i]._mirange = missile[i]._mirange - 1;
	}
	if ((uint)missile[i]._mirange == (int)missile[i]._miVar1) {
		SetMissDir__Fii(i,1);
	}
	if (((currlevel != '\0') && (missile[i]._mimfnum != '\x01')) && (missile[i]._mirange != 0)) {
		if (missile[i]._miVar2 == 0) {
			iVar1 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_58[0] >> 2) + 0x140);
			missile[i]._mlid = (char)iVar1;
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
											 (local_58[(int)missile[i]._miVar2] >> 2) + 0x140);
		missile[i]._miVar2 = missile[i]._miVar2 + 1;
	}
	pnum = 0;
	puVar5 = (undefined *)0x0;
	while( true ) {
		if (1 < (int)pnum) {
			if (missile[i]._mirange == 0) {
				missile[i]._miDelFlag = '\x01';
			}
			PutMissile__Fi(i);
			return;
		}
		if (((((&plr[0].plractive)[(int)puVar5] != '\0') &&
				 ((int)*(short *)((int)&plr[0]._px + (int)puVar5) == (int)missile[i]._mix)) &&
				(((int)*(short *)((int)&plr[0]._py + (int)puVar5) == (int)missile[i]._miy &&
				 ((qtextflag == '\0' && (PauseMode == '\0')))))) &&
			 ((gbMaxPlayers != '\x02' ||
				((plr[pnum ^ 1].plractive == '\0' || (plr[pnum ^ 1].destAction != '\r')))))) break;
		puVar5 = &DAT_000019e8 + (int)puVar5;
		pnum = pnum + 1;
	}
	ClrPlrPath__Fi(pnum);
	PutMissile__Fi(i);
	NetSendCmdParam1__FUcUcUs('\x01','\x1f',missile[i]._misource);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Flash__Fi(int i /*$s2*/)
 // line 4219, offset 0x80145d38
	/* begin block 1 */
		// Start line: 4220
		// Start offset: 0x80145D38
		// Variables:
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x80146090
	// End Line: 4253

	/* begin block 2 */
		// Start line: 9591
	/* end block 2 */
	// End Line: 9592

void MI_Flash__Fi(int i)

{
	char cVar1;
	
	if ((missile[i]._micaster == 0) && ((int)missile[i]._misource != -1)) {
		plr[(int)missile[i]._misource]._pInvincible = '\x01';
	}
	cVar1 = missile[i]._mix;
	missile[i]._mirange = missile[i]._mirange - 1;
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)cVar1 + -1,(int)missile[i]._miy,1,
						 &DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,
						 1,&DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + 1,
						 (int)missile[i]._miy,1,&DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + -1,
						 (int)missile[i]._miy + 1,1,&DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,
						 (int)missile[i]._miy + 1,1,&DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + 1,
						 (int)missile[i]._miy + 1,1,&DAT_00000001);
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
		if ((missile[i]._micaster == 0) && ((int)missile[i]._misource != -1)) {
			plr[(int)missile[i]._misource]._pInvincible = '\0';
		}
	}
	restore_r = (uint)fadetor + ((0x13 - (int)missile[i]._miAnimFrame) / 0x12) * 0xf0;
	restore_g = (uint)fadetog + ((0x13 - (int)missile[i]._miAnimFrame) / 0x12) * 0xf0;
	restore_b = (uint)fadetob + ((0x13 - (int)missile[i]._miAnimFrame) / 0x12) * 0xf0;
	if (0xff < restore_r) {
		restore_r = 0xff;
	}
	if (0xff < restore_g) {
		restore_g = 0xff;
	}
	if (0xff < restore_b) {
		restore_b = 0xff;
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Flash2__Fi(int i /*$s2*/)
 // line 4257, offset 0x801460ac
	/* begin block 1 */
		// Start line: 4258
		// Start offset: 0x801460AC
		// Variables:
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x8014626C
	// End Line: 4283

	/* begin block 2 */
		// Start line: 9684
	/* end block 2 */
	// End Line: 9685

void MI_Flash2__Fi(int i)

{
	char cVar1;
	
	if ((missile[i]._micaster == 0) && ((int)missile[i]._misource != -1)) {
		plr[(int)missile[i]._misource]._pInvincible = '\x01';
	}
	cVar1 = missile[i]._mix;
	missile[i]._mirange = missile[i]._mirange - 1;
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)cVar1 + -1,(int)missile[i]._miy + -1,
						 1,&DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,
						 (int)missile[i]._miy + -1,1,&DAT_00000001);
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + 1,
						 (int)missile[i]._miy + -1,1,&DAT_00000001);
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
		restore_r = ZEXT14(fadetor);
		restore_g = ZEXT14(fadetog);
		restore_b = ZEXT14(fadetob);
		if ((missile[i]._micaster == 0) && ((int)missile[i]._misource != -1)) {
			plr[(int)missile[i]._misource]._pInvincible = '\0';
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Manashield__Fi(int i /*$s3*/)
 // line 4288, offset 0x80146288
	/* begin block 1 */
		// Start line: 4289
		// Start offset: 0x80146288
		// Variables:
	// 		int j; // $v1
	// 		int id; // $s2
	// 		long diff; // $a1
	// 		long pct; // $a0
	// 		struct MissileStruct *miss; // $s1
	// 		struct PlayerStruct *player; // $s0
	/* end block 1 */
	// End offset: 0x80146568
	// End Line: 4380

	/* begin block 2 */
		// Start line: 9767
	/* end block 2 */
	// End Line: 9768

void MI_Manashield__Fi(int i)

{
	short sVar1;
	ushort uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int pnum;
	
	pnum = (int)missile[i]._misource;
	missile[i]._miVar6 =
			 (short)*(undefined4 *)
							 ((int)plr[pnum]._pdir * 4 + (int)plr[pnum]._pClass * 0x20 + -0x7fee5ec4);
	missile[i]._mix = (char)plr[pnum]._px;
	missile[i]._miy = (char)plr[pnum]._py;
	missile[i]._mitxoff = (int)plr[pnum]._pxoff << 0x10;
	missile[i]._mityoff = (int)plr[pnum]._pyoff << 0x10;
	missile[i]._misx = (char)plr[pnum]._px;
	missile[i]._misy = (char)plr[pnum]._py;
	GetMissilePos__Fi(i);
	if (plr[pnum]._pmode == PM_WALK3) {
		if (plr[pnum]._pdir == '\x02') {
			missile[i]._mix = missile[i]._mix + '\x01';
		}
		else {
			missile[i]._miy = missile[i]._miy + '\x01';
		}
	}
	if ((plr[pnum]._pMana < 1) || (plr[pnum].plractive == '\0')) {
		missile[i]._mirange = 0;
	}
	iVar6 = (int)missile[i]._miVar1 - plr[pnum]._pHitPoints;
	if (plr[pnum]._pHitPoints < (int)missile[i]._miVar1) {
		iVar3 = 0;
		iVar4 = 0;
		if (0 < (int)missile[i]._mispllvl) {
			do {
				if (6 < iVar3) break;
				iVar3 = iVar3 + 1;
				iVar4 = iVar4 + 3;
			} while (iVar3 < (int)missile[i]._mispllvl);
		}
		if (0 < iVar4) {
			iVar6 = iVar6 - iVar6 / iVar4;
		}
		if (iVar6 < 0) {
			iVar6 = 0;
		}
		iVar3 = plr[pnum]._pMana;
		drawmanaflag = '\x01';
		drawhpflag = '\x01';
		if (iVar3 < iVar6) {
			iVar5 = plr[pnum]._pMana;
			iVar4 = plr[pnum]._pHitPoints;
			plr[pnum]._pMana = 0;
			plr[pnum]._pHitPoints = iVar4 - (iVar6 - iVar3);
			iVar3 = plr[pnum]._pMaxManaBase;
			iVar4 = plr[pnum]._pMaxMana;
			plr[pnum]._pHPBase = plr[pnum]._pHPBase - (iVar6 - iVar5);
			plr[pnum]._pManaBase = iVar3 - iVar4;
			missile[i]._mirange = 0;
			missile[i]._miDelFlag = '\x01';
			iVar6 = plr[pnum]._pHitPoints;
			if (iVar6 < 0) {
				SetPlayerHitPoints__Fii(pnum,0);
				iVar6 = plr[pnum]._pHitPoints;
			}
			if ((iVar6 >> 6 == 0) && (pnum == myplr)) {
				StartPlrKill__Fii(pnum,(int)missile[i]._miVar8);
			}
		}
		else {
			iVar4 = plr[pnum]._pManaBase;
			plr[pnum]._pHitPoints = (int)missile[i]._miVar1;
			sVar1 = missile[i]._miVar2;
			iVar3 = plr[pnum]._pMana;
			plr[pnum]._pManaBase = iVar4 - iVar6;
			plr[pnum]._pMana = iVar3 - iVar6;
			plr[pnum]._pHPBase = (int)sVar1;
		}
	}
	uVar2 = missile[i]._mirange;
	missile[i]._miVar1 = (short)plr[pnum]._pHitPoints;
	missile[i]._miVar2 = (short)plr[pnum]._pHPBase;
	if (uVar2 == 0) {
		missile[i]._miDelFlag = '\x01';
		NetSendCmd__FUcUc('\x01','Y');
		ManashieldFlag = '\0';
		ManashieldFlag2 = '\0';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Firemove__Fi(int i /*$s2*/)
 // line 4426, offset 0x80146588
	/* begin block 1 */
		// Start line: 4427
		// Start offset: 0x80146588
		// Variables:
	// 		int j; // $s3
	// 		int ExpLight[14]; // stack offset -88
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x80146808
	// End Line: 4470

	/* begin block 2 */
		// Start line: 10082
	/* end block 2 */
	// End Line: 10083

void MI_Firemove__Fi(int i)

{
	char cVar1;
	char cVar2;
	ushort uVar3;
	int *piVar4;
	int *piVar5;
	short sVar6;
	long lVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int *piVar11;
	int *piVar12;
	int local_58 [16];
	
	piVar4 = &DAT_8011a0c0;
	piVar5 = local_58;
	do {
		piVar12 = piVar5;
		piVar11 = piVar4;
		iVar8 = piVar11[1];
		iVar9 = piVar11[2];
		iVar10 = piVar11[3];
		*piVar12 = *piVar11;
		piVar12[1] = iVar8;
		piVar12[2] = iVar9;
		piVar12[3] = iVar10;
		piVar4 = piVar11 + 4;
		piVar5 = piVar12 + 4;
	} while (piVar11 + 4 != (int *)0x8011a0f0);
	iVar8 = piVar11[5];
	piVar12[4] = iRam8011a0f0;
	piVar12[5] = iVar8;
	cVar1 = missile[i]._mix;
	missile[i]._miy = missile[i]._miy + -1;
	cVar2 = missile[i]._miyoff;
	missile[i]._mix = cVar1 + -1;
	sVar6 = missile[i]._miVar1 + 1;
	missile[i]._miVar1 = sVar6;
	missile[i]._miyoff = cVar2 + ' ';
	if ((int)sVar6 == (int)missile[i]._miAnimLen) {
		SetMissDir__Fii(i,1);
		lVar7 = ENG_random__Fl(0xb);
		missile[i]._miAnimFrame = (char)lVar7 + '\x01';
	}
	iVar8 = missile[i]._mityoff;
	iVar9 = missile[i]._miyvel;
	missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
	missile[i]._mityoff = iVar8 + iVar9;
	GetMissilePos__Fi(i);
	uVar3 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,
						 &DAT_00000001);
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._mirange = uVar3;
	}
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	if ((missile[i]._mimfnum == '\0') && (missile[i]._mirange != 0)) {
		if (missile[i]._miVar2 == 0) {
			iVar8 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_58[0] >> 1) + 0x90);
			missile[i]._mlid = (char)iVar8;
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
											 (local_58[(int)missile[i]._miVar2] >> 1) + 0x90);
		missile[i]._miVar2 = missile[i]._miVar2 + 1;
	}
	else {
		if (((int)missile[i]._mix != (int)missile[i]._miVar3) ||
			 ((int)missile[i]._miy != (int)missile[i]._miVar4)) {
			cVar1 = missile[i]._mlid;
			cVar2 = missile[i]._miy;
			missile[i]._miVar3 = (short)missile[i]._mix;
			sVar6 = missile[i]._miVar3;
			missile[i]._miVar4 = (short)cVar2;
			ChangeLight__Fiiii((int)cVar1,(int)sVar6,(int)(short)cVar2,0x94);
		}
	}
	cVar1 = missile[i]._miy;
	cVar2 = missile[i]._miyoff;
	missile[i]._mix = missile[i]._mix + '\x01';
	missile[i]._miy = cVar1 + '\x01';
	missile[i]._miyoff = cVar2 + -0x20;
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Guardian__Fi(int i /*$s4*/)
 // line 4473, offset 0x80146828
	/* begin block 1 */
		// Start line: 4474
		// Start offset: 0x80146828
		// Variables:
	// 		int j; // $s2
	// 		int k; // $s6
	// 		int sx1; // $fp
	// 		int sy1; // $s7
	// 		int ex; // $v1
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x80146AAC
	// End Line: 4541

	/* begin block 2 */
		// Start line: 10203
	/* end block 2 */
	// End Line: 10204

void MI_Guardian__Fi(int i)

{
	char cVar1;
	byte bVar2;
	short sVar3;
	int iVar4;
	byte *pbVar5;
	int iVar6;
	uchar *puVar7;
	int iVar8;
	byte bVar9;
	uint uVar10;
	
	uVar10 = 0;
	bVar9 = 0;
	sVar3 = missile[i]._miVar2;
	missile[i]._mirange = missile[i]._mirange - 1;
	if (0 < sVar3) {
		missile[i]._miVar2 = sVar3 + -1;
	}
	if (((uint)missile[i]._mirange == (int)missile[i]._miVar1) ||
		 ((missile[i]._mimfnum == '\x02' && (missile[i]._miVar2 == 0)))) {
		SetMissDir__Fii(i,1);
	}
	iVar4 = 0;
	if ((missile[i]._mirange & 0xf) == 0) {
		iVar8 = 0;
		puVar7 = &vCrawlTable;
		do {
			if (iVar4 == -1) break;
			iVar6 = 10;
			do {
				pbVar5 = puVar7 + iVar6;
				if ((iVar4 == -1) || ((bVar2 = *pbVar5, bVar2 == 0 && (pbVar5[1] == 0)))) break;
				if ((uVar10 != (uint)bVar2) || (bVar9 != pbVar5[1])) {
					iVar4 = Sentfire__Fiii(i,(int)missile[i]._mix + (uint)bVar2,
																 (int)missile[i]._miy + (uint)pbVar5[1]);
					if ((((iVar4 == -1) ||
							 (iVar4 = Sentfire__Fiii(i,(int)missile[i]._mix - (uint)*pbVar5,
																			 (int)missile[i]._miy - (uint)pbVar5[1]), iVar4 == -1)) ||
							(iVar4 = Sentfire__Fiii(i,(int)missile[i]._mix + (uint)*pbVar5,
																			(int)missile[i]._miy - (uint)pbVar5[1]), iVar4 == -1)) ||
						 (iVar4 = Sentfire__Fiii(i,(int)missile[i]._mix - (uint)*pbVar5,
																		 (int)missile[i]._miy + (uint)pbVar5[1]), iVar4 == -1)) break;
					uVar10 = (uint)*pbVar5;
					bVar9 = pbVar5[1];
				}
				iVar6 = iVar6 + -2;
			} while (-1 < iVar6);
			iVar8 = iVar8 + 1;
			puVar7 = puVar7 + 0x1e;
		} while (iVar8 < 0x17);
	}
	if (missile[i]._mirange == 0xe) {
		SetMissDir__Fii(i,0);
		missile[i]._miAnimFrame = '\x0f';
		missile[i]._miAnimAdd = -1;
	}
	iVar4 = (uint)(ushort)missile[i]._miVar3 + (int)missile[i]._miAnimAdd;
	missile[i]._miVar3 = (short)iVar4;
	iVar4 = iVar4 * 0x10000 >> 0x10;
	if (iVar4 < 0x10) {
		if (0 < iVar4) {
			ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x94);
		}
	}
	else {
		missile[i]._miVar3 = 0xf;
	}
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Chain__Fi(int i /*$a0*/)
 // line 4545, offset 0x80146ae0
	/* begin block 1 */
		// Start line: 4546
		// Start offset: 0x80146AE0
		// Variables:
	// 		struct MissileStruct *miss; // $s4
	// 		int sx; // $s7
	// 		int sy; // $s6
	// 		int id; // stack offset -48
	// 		int l; // $s2
	// 		int n; // $v0
	// 		int m; // $s5
	// 		int k; // $s3
	// 		int rad; // $fp
	// 		int tx; // $s0
	// 		int ty; // $s1
	// 		int CrawlNum[19]; // stack offset -128
	/* end block 1 */
	// End offset: 0x80146D14
	// End Line: 4582

	/* begin block 2 */
		// Start line: 10361
	/* end block 2 */
	// End Line: 10362

void MI_Chain__Fi(int i)

{
	undefined **ppuVar1;
	int *piVar2;
	ushort uVar3;
	int midir;
	int x2;
	int midir_00;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	int *piVar8;
	int y2;
	int iVar9;
	uint uVar10;
	int y1;
	int x1;
	int iVar11;
	int local_80 [20];
	int local_30;
	
	ppuVar1 = (undefined **)&DAT_80119de4;
	piVar2 = local_80;
	do {
		piVar8 = piVar2;
		ppuVar7 = ppuVar1;
		puVar4 = ppuVar7[1];
		puVar5 = ppuVar7[2];
		puVar6 = ppuVar7[3];
		*(undefined **)piVar8 = *ppuVar7;
		*(undefined **)(piVar8 + 1) = puVar4;
		*(undefined **)(piVar8 + 2) = puVar5;
		*(undefined **)(piVar8 + 3) = puVar6;
		ppuVar1 = ppuVar7 + 4;
		piVar2 = piVar8 + 4;
	} while (ppuVar7 + 4 != PTR_ARRAY_80119e14 + 4);
	puVar4 = ppuVar7[5];
	puVar5 = ppuVar7[6];
	*(undefined **)(piVar8 + 4) = PTR_ARRAY_80119e14[4];
	*(undefined **)(piVar8 + 5) = puVar4;
	*(undefined **)(piVar8 + 6) = puVar5;
	x1 = (int)missile[i]._mix;
	y1 = (int)missile[i]._miy;
	local_30 = (int)missile[i]._misource;
	midir = GetDirection__Fiiii(x1,y1,(int)missile[i]._miVar1,(int)missile[i]._miVar2);
	AddMissile__Fiiiiiiciii
						(x1,y1,(int)missile[i]._miVar1,(int)missile[i]._miVar2,midir,7,0,local_30,1,
						 (int)missile[i]._mispllvl);
	iVar11 = (int)missile[i]._mispllvl + 3;
	midir = 1;
	if (0x13 < iVar11) {
		iVar11 = 0x13;
	}
	x2 = 4;
	if (1 < iVar11) {
		do {
			uVar10 = (uint)(byte)(&CrawlTable)[*(int *)((int)local_80 + x2)];
			iVar9 = *(int *)((int)local_80 + x2) + 1;
			if ((&CrawlTable)[*(int *)((int)local_80 + x2)] != 0) {
				do {
					x2 = x1 + (int)(&CrawlTable)[iVar9];
					y2 = y1 + (int)(&CHAR_00h_800d5555)[iVar9];
					if (((x2 - 1U < 0x6f) && (y2 - 1U < 0x6f)) && (0 < dung_map[x2 * 0x70 + y2].dMonster)) {
						midir_00 = GetDirection__Fiiii(x1,y1,x2,y2);
						AddMissile__Fiiiiiiciii(x1,y1,x2,y2,midir_00,7,0,local_30,1,(int)missile[i]._mispllvl);
					}
					uVar10 = uVar10 - 1;
					iVar9 = iVar9 + 2;
				} while (0 < (int)uVar10);
			}
			midir = midir + 1;
			x2 = midir * 4;
		} while (midir < iVar11);
	}
	uVar3 = missile[i]._mirange - 1;
	missile[i]._mirange = uVar3;
	if (uVar3 == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Weapexp__Fi(int i /*$s2*/)
 // line 4674, offset 0x80146d48
	/* begin block 1 */
		// Start line: 4675
		// Start offset: 0x80146D48
		// Variables:
	// 		int id; // $a0
	// 		int mind; // $a3
	// 		int maxd; // $a2
	// 		int ExpLight[10]; // stack offset -56
	/* end block 1 */
	// End offset: 0x80147088
	// End Line: 4715

	/* begin block 2 */
		// Start line: 10633
	/* end block 2 */
	// End Line: 10634

void MI_Weapexp__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	ushort uVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	uchar uVar7;
	undefined4 uVar8;
	undefined4 uVar9;
	int maxdam;
	undefined4 uVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	int mindam;
	undefined4 local_38 [10];
	
	puVar5 = &DAT_8011a19c;
	puVar6 = local_38;
	do {
		puVar12 = puVar6;
		puVar11 = puVar5;
		uVar8 = puVar11[1];
		uVar9 = puVar11[2];
		uVar10 = puVar11[3];
		*puVar12 = *puVar11;
		puVar12[1] = uVar8;
		puVar12[2] = uVar9;
		puVar12[3] = uVar10;
		puVar5 = puVar11 + 4;
		puVar6 = puVar12 + 4;
	} while (puVar11 + 4 != (undefined4 *)0x8011a1bc);
	uVar8 = puVar11[5];
	puVar12[4] = uRam8011a1bc;
	puVar12[5] = uVar8;
	missile[i]._mirange = missile[i]._mirange - 1;
	maxdam = (int)missile[i]._misource;
	if (missile[i]._miVar2 == 1) {
		mindam = plr[maxdam]._pIFMinDam;
		cVar1 = missile[i]._mitype;
		maxdam = plr[maxdam]._pIFMaxDam;
		uVar7 = '\x01';
	}
	else {
		mindam = plr[maxdam]._pILMinDam;
		cVar1 = missile[i]._mitype;
		maxdam = plr[maxdam]._pILMaxDam;
		uVar7 = '\x02';
	}
	missiledata[(int)cVar1].mResist = uVar7;
	CheckMissileCol__FiiiUciiUcb
						(i,mindam,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0,&DAT_00000001);
	if (missile[i]._miVar1 == 0) {
		maxdam = 0x244;
		if (missile[i]._miVar2 == 1) {
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
			maxdam = 0x94;
		}
		else {
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
		}
		maxdam = AddLight__Fiii((int)cVar1,(int)cVar2,maxdam);
		missile[i]._mlid = (char)maxdam;
	}
	else {
		if (missile[i]._mirange != 0) {
			maxdam = 0x244;
			if (missile[i]._miVar2 == 1) {
				cVar1 = missile[i]._mlid;
				cVar2 = missile[i]._mix;
				cVar3 = missile[i]._miy;
				maxdam = 0x94;
			}
			else {
				cVar1 = missile[i]._mlid;
				cVar2 = missile[i]._mix;
				cVar3 = missile[i]._miy;
			}
			ChangeLight__Fiiii((int)cVar1,(int)cVar2,(int)cVar3,maxdam);
		}
	}
	uVar4 = missile[i]._mirange;
	missile[i]._miVar1 = missile[i]._miVar1 + 1;
	if (uVar4 == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	else {
		PutMissile__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Misexp__Fi(int i /*$s1*/)
 // line 4718, offset 0x801470a4
	/* begin block 1 */
		// Start line: 4719
		// Start offset: 0x801470A4
		// Variables:
	// 		int ExpLight[10]; // stack offset -56
	/* end block 1 */
	// End offset: 0x801473AC
	// End Line: 4770

	/* begin block 2 */
		// Start line: 10731
	/* end block 2 */
	// End Line: 10732

void MI_Misexp__Fi(int i)

{
	char cVar1;
	int *piVar2;
	int *piVar3;
	int r;
	int i_00;
	int x;
	int *piVar4;
	int y;
	int *piVar5;
	int local_38 [10];
	
	piVar2 = &DAT_8011a19c;
	piVar3 = local_38;
	do {
		piVar5 = piVar3;
		piVar4 = piVar2;
		r = piVar4[1];
		i_00 = piVar4[2];
		x = piVar4[3];
		*piVar5 = *piVar4;
		piVar5[1] = r;
		piVar5[2] = i_00;
		piVar5[3] = x;
		piVar2 = piVar4 + 4;
		piVar3 = piVar5 + 4;
	} while (piVar4 + 4 != (int *)0x8011a1bc);
	r = piVar4[5];
	piVar5[4] = iRam8011a1bc;
	piVar5[5] = r;
	missile[i]._mirange = missile[i]._mirange - 1;
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	else {
		r = (int)missile[i]._miVar1;
		if (r == 0) {
			if (missile[i]._miAnimType == '(') {
				AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_38[0] >> 2) + 0x240);
			}
			else {
				if (missile[i]._miAnimType == '*') {
					AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_38[0] >> 2) + 0x1b0);
				}
				else {
					r = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,
														 (local_38[(int)missile[i]._miVar1] >> 2) + 0x90);
					missile[i]._mlid = (char)r;
				}
			}
		}
		else {
			if (missile[i]._miAnimType == '(') {
				i_00 = (int)missile[i]._mlid;
				x = (int)missile[i]._mix;
				y = (int)missile[i]._miy;
				r = (local_38[r] >> 2) + 0x240;
			}
			else {
				if (missile[i]._miAnimType == '*') {
					i_00 = (int)missile[i]._mlid;
					x = (int)missile[i]._mix;
					y = (int)missile[i]._miy;
					r = (local_38[r] >> 2) + 0x1b0;
				}
				else {
					i_00 = (int)missile[i]._mlid;
					x = (int)missile[i]._mix;
					y = (int)missile[i]._miy;
					r = (local_38[(int)missile[i]._miVar1] >> 2) + 0x90;
				}
			}
			ChangeLight__Fiiii(i_00,x,y,r);
		}
		missile[i]._miVar1 = missile[i]._miVar1 + 1;
		PutMissile__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Acidsplat__Fi(int i /*$a2*/)
 // line 4773, offset 0x801473c4
	/* begin block 1 */
		// Start line: 4774
		// Start offset: 0x801473C4
		// Variables:
	// 		int monst; // $v1
	// 		int dam; // $t0
	/* end block 1 */
	// End offset: 0x80147560
	// End Line: 4794

	/* begin block 2 */
		// Start line: 10843
	/* end block 2 */
	// End Line: 10844

void MI_Acidsplat__Fi(int i)

{
	short sVar1;
	int v3;
	
	if ((uint)missile[i]._mirange == (int)missile[i]._miAnimLen) {
		missile[i]._mix = missile[i]._mix + '\x01';
		missile[i]._miy = missile[i]._miy + '\x01';
		missile[i]._miyoff = missile[i]._miyoff + -0x20;
	}
	missile[i]._mirange = missile[i]._mirange - 1;
	if (missile[i]._mirange == 0) {
		sVar1 = missile[i]._misource;
		missile[i]._miDelFlag = '\x01';
		v3 = 2;
		if ((monster[(int)sVar1].MData)->mLevel < '\x02') {
			v3 = 1;
		}
		AddMissile__Fiiiiiiciii
							((int)missile[i]._mix,(int)missile[i]._miy,i,0,(int)missile[i]._mimfnum,0x3b,1,
							 (int)missile[i]._misource,v3,(int)missile[i]._mispllvl);
	}
	else {
		PutMissile__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Teleport__Fi(int i /*$s0*/)
 // line 4797, offset 0x80147570
	/* begin block 1 */
		// Start line: 4798
		// Start offset: 0x80147570
		// Variables:
	// 		int id; // $s2
	// 		struct CBlocks *gblocks; // $s3
	/* end block 1 */
	// End offset: 0x801478B8
	// End Line: 4846

	/* begin block 2 */
		// Start line: 10897
	/* end block 2 */
	// End Line: 10898

void MI_Teleport__Fi(int i)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	CBlocks *Bg;
	uint pnum;
	
	Bg = BL_GetCurrentBlocks__Fv();
	if (Bg == (CBlocks *)0x0) {
		DBG_Error((char *)0x0,"source/MISSILES.cpp",(int)&DAT_000012c2);
	}
	missile[i]._mirange = missile[i]._mirange - 1;
	pnum = SEXT24(missile[i]._misource);
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	else {
		PlrClrTrans__Fii((int)plr[pnum]._px,(int)plr[pnum]._py);
		plr[pnum]._px = (short)missile[i]._mix;
		plr[pnum]._py = (short)missile[i]._miy;
		plr[pnum]._pyoff = '\0';
		sVar1 = plr[pnum]._px;
		sVar2 = plr[pnum]._py;
		sVar3 = plr[pnum]._px;
		sVar4 = plr[pnum]._py;
		plr[pnum]._pxoff = '\0';
		plr[pnum]._poldx = sVar3;
		plr[pnum]._poldy = sVar4;
		PlrDoTrans__Fii((int)sVar1,(int)sVar2);
		missile[i]._miVar1 = 1;
		WorldToOffset__Fiii(pnum,(int)plr[pnum]._px << 3 | 4,(int)plr[pnum]._py << 3 | 4);
		if (leveltype != '\0') {
			light_fix__Fi((int)plr[pnum]._plid);
			ChangeLightXY__Fiii((int)plr[pnum]._plid,(int)plr[pnum]._px,(int)plr[pnum]._py);
			light_fix__Fi((int)plr[pnum]._plid);
			ChangeVisionXY__Fiii((int)plr[pnum]._pvid,(int)plr[pnum]._px,(int)plr[pnum]._py);
		}
		if (pnum == myplr) {
			ViewX = (int)plr[pnum]._px - ScrollInfo._sdx;
			ViewY = (int)plr[pnum]._py - ScrollInfo._sdy;
		}
		SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(gplayer,plr + pnum,Bg);
		MoveToScrollTarget__7CBlocks(Bg);
		if (plr[pnum ^ 1].plractive != '\0') {
			PlacePlayer__FiiiUc(pnum ^ 1,(int)plr[pnum]._px,(int)plr[pnum]._py,'\0');
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Stone__Fi(int i /*$s0*/)
 // line 4964, offset 0x801478dc
	/* begin block 1 */
		// Start line: 4965
		// Start offset: 0x801478DC
		// Variables:
	// 		int m; // $a0
	/* end block 1 */
	// End offset: 0x80147AA4
	// End Line: 4992

	/* begin block 2 */
		// Start line: 11246
	/* end block 2 */
	// End Line: 11247

void MI_Stone__Fi(int i)

{
	int iVar1;
	
	iVar1 = (int)missile[i]._miVar2;
	missile[i]._mirange = missile[i]._mirange - 1;
	if ((monster[iVar1]._mhitpoints == 0) && (missile[i]._miAnimType != '\x12')) {
		missile[i]._mirange = 0xb;
	}
	if (monster[iVar1]._mmode == '\x0f') {
		if (missile[i]._mirange == 0) {
			missile[i]._miDelFlag = '\x01';
			if (monster[iVar1]._mhitpoints < 1) {
				AddDead__Fiici((int)monster[iVar1]._mx,(int)monster[iVar1]._my,(char)stonendx,
											 (int)monster[iVar1]._mdir);
			}
			else {
				monster[iVar1]._mmode = (char)missile[i]._miVar1;
			}
		}
		if (missile[i]._miAnimType == '\x12') {
			PutMissile__Fi(i);
		}
	}
	else {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveStoneMissiles__Fiii(int mon /*$a0*/, int mx /*$a1*/, int my /*$a2*/)
 // line 4997, offset 0x80147ab8
	/* begin block 1 */
		// Start line: 4998
		// Start offset: 0x80147AB8

		/* begin block 1.1 */
			// Start line: 4999
			// Start offset: 0x80147AB8
			// Variables:
		// 		int i; // $a2

			/* begin block 1.1.1 */
				// Start line: 4999
				// Start offset: 0x80147AD4
				// Variables:
			// 		int mi; // $v0
			// 		struct MissileStruct *pmissile; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80147B2C
			// End Line: 5006
		/* end block 1.1 */
		// End offset: 0x80147B38
		// End Line: 5008
	/* end block 1 */
	// End offset: 0x80147B38
	// End Line: 5008

	/* begin block 2 */
		// Start line: 11319
	/* end block 2 */
	// End Line: 11320

void RemoveStoneMissiles__Fiii(int mon,int mx,int my)

{
	int iVar1;
	short *psVar2;
	int iVar3;
	
	iVar3 = 0;
	psVar2 = &missileactive;
	while (iVar3 < nummissiles) {
		iVar1 = (int)*psVar2;
		if ((missile[iVar1]._mitype == '\x1e') && ((int)missile[iVar1]._miVar2 == mon)) {
			missile[iVar1]._miDelFlag = '\x01';
		}
		psVar2 = psVar2 + 1;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Boom__Fi(int i /*$s1*/)
 // line 5013, offset 0x80147b40
	/* begin block 1 */
		// Start line: 5014
		// Start offset: 0x80147B40
	/* end block 1 */
	// End offset: 0x80147C2C
	// End Line: 5021

	/* begin block 2 */
		// Start line: 11350
	/* end block 2 */
	// End Line: 11351

void MI_Boom__Fi(int i)

{
	short sVar1;
	
	sVar1 = missile[i]._miVar1;
	missile[i]._mirange = missile[i]._mirange - 1;
	if (sVar1 == 0) {
		CheckMissileCol__FiiiUciiUcb
							(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,
							 1,&DAT_00000001);
	}
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._miVar1 = 1;
	}
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Rhino__Fi(int i /*$s1*/)
 // line 5024, offset 0x80147c44
	/* begin block 1 */
		// Start line: 5025
		// Start offset: 0x80147C44
		// Variables:
	// 		int mix; // $s0
	// 		int miy; // $s2
	// 		int mix2; // $s7
	// 		int miy2; // $s6
	// 		int omx; // $s4
	// 		int omy; // $fp
	// 		int monst; // $s3
	/* end block 1 */
	// End offset: 0x80148020
	// End Line: 5096

	/* begin block 2 */
		// Start line: 11377
	/* end block 2 */
	// End Line: 11378

void MI_Rhino__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	ushort uVar5;
	bool bVar6;
	uchar uVar7;
	long lVar8;
	long lVar9;
	int x;
	int y;
	int i_00;
	int y_00;
	int x_00;
	
	x_00 = 0;
	uVar5 = missile[i]._misource;
	i_00 = (int)(short)uVar5;
	y_00 = 0;
	if (monster[i_00]._mmode == '\x0e') {
		GetMissilePos__Fi(i);
		cVar1 = missile[i]._miy;
		cVar2 = missile[i]._mix;
		dung_map[(int)cVar2 * 0x70 + (int)cVar1].dMonster = 0;
		if (monster[i_00]._mAi == '\x18') {
			y_00 = missile[i]._miyvel;
			missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel * 2;
			missile[i]._mityoff = missile[i]._mityoff + y_00 * 2;
			GetMissilePos__Fi(i);
			x_00 = (int)missile[i]._mix;
			y_00 = (int)missile[i]._miy;
			lVar8 = missile[i]._mitxoff - missile[i]._mixvel;
			lVar9 = missile[i]._mityoff - missile[i]._miyvel;
		}
		else {
			monster[i_00]._mAnimFrame = missile[i]._miAnimFrame;
			lVar8 = missile[i]._mitxoff + missile[i]._mixvel;
			lVar9 = missile[i]._mityoff + missile[i]._miyvel;
		}
		missile[i]._mitxoff = lVar8;
		missile[i]._mityoff = lVar9;
		GetMissilePos__Fi(i);
		bVar6 = false;
		cVar3 = missile[i]._mix;
		x = (int)cVar3;
		cVar4 = missile[i]._miy;
		y = (int)cVar4;
		uVar7 = PosOkMonst__Fiii(i_00,x,y);
		if ((uVar7 != '\0') &&
			 ((monster[i_00]._mAi != '\x18' || (uVar7 = PosOkMonst__Fiii(i_00,x_00,y_00), uVar7 != '\0')))
			 ) {
			bVar6 = true;
		}
		if (bVar6) {
			dung_map[x * 0x70 + y].dMonster = ~uVar5;
			monster[i_00]._mfutx = cVar3;
			monster[i_00]._moldx = cVar3;
			monster[i_00]._mx = cVar3;
			monster[i_00]._mfuty = cVar4;
			monster[i_00]._moldy = cVar4;
			monster[i_00]._my = cVar4;
			uVar7 = monster[i_00]._uniqtype;
			monster[i_00]._mxoff = missile[i]._mixoff;
			monster[i_00]._myoff = missile[i]._miyoff;
			if (uVar7 != '\0') {
				ChangeLightXY__Fiii((int)missile[i]._mlid,x,y);
			}
			MoveMissilePos__Fi(i);
			PutMissile__Fi(i);
		}
		else {
			MissToMonst__Fiii(i,(int)cVar2,(int)cVar1);
			missile[i]._miDelFlag = '\x01';
		}
	}
	else {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_FirewallC__Fi(int i /*$a0*/)
 // line 5179, offset 0x80148054
	/* begin block 1 */
		// Start line: 5180
		// Start offset: 0x80148054
		// Variables:
	// 		struct MissileStruct *miss; // $s0
	// 		int tx; // $s2
	// 		int ty; // $s3
	// 		int id; // $s1
	/* end block 1 */
	// End offset: 0x80148268
	// End Line: 5216

	/* begin block 2 */
		// Start line: 11719
	/* end block 2 */
	// End Line: 11720

void MI_FirewallC__Fi(int i)

{
	ushort uVar1;
	void *pvVar2;
	int id;
	int iVar3;
	int iVar4;
	
	id = (int)missile[i]._misource;
	uVar1 = missile[i]._mirange - 1;
	missile[i]._mirange = uVar1;
	if (uVar1 == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	else {
		iVar3 = (int)missile[i]._miVar1 + XDirAdd[(int)missile[i]._miVar3];
		iVar4 = (int)missile[i]._miVar2 + YDirAdd[(int)missile[i]._miVar3];
		pvVar2 = GetMISSILE__Fii((int)missile[i]._miVar1,(int)missile[i]._miVar2);
		if ((((pvVar2 == (void *)0x0) && (missile[i]._miVar8 == 0)) && (iVar3 - 1U < 0x6f)) &&
			 (iVar4 - 1U < 0x6f)) {
			AddMissile__Fiiiiiiciii
								((int)missile[i]._miVar1,(int)missile[i]._miVar2,(int)missile[i]._miVar1,
								 (int)missile[i]._miVar2,(int)plr[id]._pdir,5,0,id,0,(int)missile[i]._mispllvl);
			missile[i]._miVar1 = (short)iVar3;
			missile[i]._miVar2 = (short)iVar4;
		}
		else {
			missile[i]._miVar8 = 1;
		}
		iVar3 = (int)missile[i]._miVar5 + XDirAdd[(int)missile[i]._miVar4];
		iVar4 = (int)missile[i]._miVar6 + YDirAdd[(int)missile[i]._miVar4];
		pvVar2 = GetMISSILE__Fii((int)missile[i]._miVar5,(int)missile[i]._miVar6);
		if (((pvVar2 == (void *)0x0) && (missile[i]._miVar7 == 0)) &&
			 ((iVar3 - 1U < 0x6f && (iVar4 - 1U < 0x6f)))) {
			AddMissile__Fiiiiiiciii
								((int)missile[i]._miVar5,(int)missile[i]._miVar6,(int)missile[i]._miVar5,
								 (int)missile[i]._miVar6,(int)plr[id]._pdir,5,0,id,0,(int)missile[i]._mispllvl);
			missile[i]._miVar5 = (short)iVar3;
			missile[i]._miVar6 = (short)iVar4;
		}
		else {
			missile[i]._miVar7 = 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Infra__Fi(int i /*$a0*/)
 // line 5221, offset 0x80148288
	/* begin block 1 */
		// Start line: 5222
		// Start offset: 0x80148288
	/* end block 1 */
	// End offset: 0x80148338
	// End Line: 5230

	/* begin block 2 */
		// Start line: 11812
	/* end block 2 */
	// End Line: 11813

void MI_Infra__Fi(int i)

{
	short sVar1;
	
	sVar1 = missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange - 1;
	plr[(int)sVar1]._pInfraFlag = '\x01';
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
		CalcPlrItemVals__FiUc((int)missile[i]._misource,'\x01');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Apoca__Fi(int i /*$s0*/)
 // line 5235, offset 0x80148348
	/* begin block 1 */
		// Start line: 5236
		// Start offset: 0x80148348
		// Variables:
	// 		int j; // $s3
	// 		int k; // $s1
	// 		int id; // $s5
	// 		unsigned char exit; // $s4
	/* end block 1 */
	// End offset: 0x801485D0
	// End Line: 5261

	/* begin block 2 */
		// Start line: 11844
	/* end block 2 */
	// End Line: 11845

void MI_Apoca__Fi(int i)

{
	short sVar1;
	bool bVar2;
	void *pvVar3;
	short sVar4;
	int x;
	int iVar5;
	short sVar6;
	int y;
	
	sVar4 = 0;
	sVar6 = missile[i]._miVar2;
	y = (int)sVar6;
	sVar1 = missile[i]._misource;
	bVar2 = false;
	if (y < (int)missile[i]._miVar3) {
		do {
			sVar4 = missile[i]._miVar4;
			x = (int)sVar4;
			if (x < (int)missile[i]._miVar5) {
				if (!bVar2) {
					iVar5 = x * 0x380 + y * 8;
					do {
						if ((3 < *(short *)((int)&dung_map[0].dMonster + iVar5)) &&
							 (pvVar3 = GetSOLID__Fii(x,y), pvVar3 == (void *)0x0)) {
							bVar2 = true;
							AddMissile__Fiiiiiiciii
												(x,y,x,y,(int)plr[(int)sVar1]._pdir,0x24,0,(int)sVar1,missile[i]._midam,0);
						}
						x = x + 1;
						sVar4 = (short)x;
						iVar5 = iVar5 + 0x380;
					} while ((x < (int)missile[i]._miVar5) && (!bVar2));
					goto LAB_80148500;
				}
			}
			else {
LAB_80148500:
				if (!bVar2) {
					missile[i]._miVar4 = missile[i]._miVar6;
				}
			}
			y = y + 1;
			sVar6 = (short)y;
		} while ((y < (int)missile[i]._miVar3) && (!bVar2));
	}
	if (bVar2) {
		missile[i]._miVar2 = sVar6 + -1;
		missile[i]._miVar4 = sVar4;
	}
	else {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Wave__Fi(int i /*$s0*/)
 // line 5265, offset 0x80148600
	/* begin block 1 */
		// Start line: 5266
		// Start offset: 0x80148600
		// Variables:
	// 		int dira; // stack offset -120
	// 		int dirb; // stack offset -112
	// 		int nxa; // $s2
	// 		int nya; // $s1
	// 		int nxb; // $s4
	// 		int nyb; // $s3
	// 		int sd; // $v0
	// 		int j; // $s5
	// 		int f1; // stack offset -104
	// 		int f2; // stack offset -96
	// 		int id; // $s6
	// 		int sx; // $fp
	// 		int sy; // stack offset -88
	/* end block 1 */
	// End offset: 0x80148A68
	// End Line: 5322

	/* begin block 2 */
		// Start line: 11916
	/* end block 2 */
	// End Line: 11917

void MI_Wave__Fi(int i)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	uint uVar4;
	void *pvVar5;
	uint uVar6;
	int y1;
	int y;
	int x;
	int *piVar7;
	int iVar8;
	int id;
	int *piVar9;
	int x1;
	
	bVar1 = false;
	bVar2 = false;
	x1 = (int)missile[i]._mix;
	y1 = (int)missile[i]._miy;
	id = (int)missile[i]._misource;
	iVar3 = GetDirection__Fiiii(x1,y1,(int)missile[i]._miVar1,(int)missile[i]._miVar2);
	piVar7 = XDirAdd + iVar3;
	piVar9 = YDirAdd + iVar3;
	x = x1 + *piVar7;
	y = y1 + *piVar9;
	uVar6 = iVar3 - 2U & 7;
	uVar4 = iVar3 + 2U & 7;
	pvVar5 = GetMISSILE__Fii(x,y);
	if (pvVar5 == (void *)0x0) {
		AddMissile__Fiiiiiiciii
							(x,y,x + *piVar7,y + *piVar9,(int)plr[id]._pdir,0xe,0,id,0,(int)missile[i]._mispllvl);
		iVar8 = 0;
		x = x + XDirAdd[uVar6];
		y = y + YDirAdd[uVar6];
		x1 = x1 + *piVar7 + XDirAdd[uVar4];
		y1 = y1 + *piVar9 + YDirAdd[uVar4];
		if (0 < ((int)((uint)(byte)missile[i]._mispllvl << 0x18) >> 0x19) + 2) {
			do {
				pvVar5 = GetMISSILE__Fii(x,y);
				if ((((pvVar5 != (void *)0x0) || (bVar1)) || (0x6e < x - 1U)) || (0x6e < y - 1U)) {
					bVar1 = true;
				}
				else {
					AddMissile__Fiiiiiiciii
										(x,y,x + XDirAdd[iVar3],y + *piVar9,(int)plr[id]._pdir,0xe,0,id,0,
										 (int)missile[i]._mispllvl);
					x = x + XDirAdd[uVar6];
					y = y + YDirAdd[uVar6];
				}
				pvVar5 = GetMISSILE__Fii(x1,y1);
				if (((pvVar5 != (void *)0x0) || (bVar2)) || ((0x6e < x1 - 1U || (0x6e < y1 - 1U)))) {
					bVar2 = true;
				}
				else {
					AddMissile__Fiiiiiiciii
										(x1,y1,x1 + XDirAdd[iVar3],y1 + *piVar9,(int)plr[id]._pdir,0xe,0,id,0,
										 (int)missile[i]._mispllvl);
					x1 = x1 + XDirAdd[uVar4];
					y1 = y1 + YDirAdd[uVar4];
				}
				iVar8 = iVar8 + 1;
			} while (iVar8 < ((int)((uint)(byte)missile[i]._mispllvl << 0x18) >> 0x19) + 2);
		}
	}
	missile[i]._mirange = missile[i]._mirange - 1;
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Nova__Fi(int i /*$fp*/)
 // line 5328, offset 0x80148a9c
	/* begin block 1 */
		// Start line: 5329
		// Start offset: 0x80148A9C
		// Variables:
	// 		int k; // stack offset -56
	// 		int id; // $s5
	// 		int sx; // $s3
	// 		int sy; // $s2
	// 		int dir; // $s6
	// 		int en; // $v0
	// 		int sx1; // $a0
	// 		int sy1; // $a1
	// 		int dam; // stack offset -48
	/* end block 1 */
	// End offset: 0x80148D44
	// End Line: 5374

	/* begin block 2 */
		// Start line: 12103
	/* end block 2 */
	// End Line: 12104

void MI_Nova__Fi(int i)

{
	uint micaster;
	uint uVar1;
	byte bVar2;
	int v3;
	uchar *puVar3;
	int sy;
	int sx;
	uchar *puVar4;
	int id;
	int midir;
	int local_38;
	
	bVar2 = 0;
	id = (int)missile[i]._misource;
	v3 = missile[i]._midam;
	sx = (int)missile[i]._mix;
	sy = (int)missile[i]._miy;
	uVar1 = 0;
	if (id == -1) {
		midir = 0;
	}
	else {
		midir = (int)plr[id]._pdir;
	}
	micaster = (uint)(id == -1);
	local_38 = 0;
	puVar3 = s__800d601b;
	puVar4 = &UCHAR_04h_800d601a;
	do {
		if ((uVar1 != (uint)*puVar4) || (bVar2 != *puVar3)) {
			AddMissile__Fiiiiiiciii
								(sx,sy,sx + (uint)*puVar4,sy + (uint)*puVar3,midir,4,micaster,id,v3,
								 (int)missile[i]._mispllvl);
			AddMissile__Fiiiiiiciii
								(sx,sy,sx - (uint)*puVar4,sy - (uint)*puVar3,midir,4,micaster,id,v3,
								 (int)missile[i]._mispllvl);
			AddMissile__Fiiiiiiciii
								(sx,sy,sx - (uint)*puVar4,sy + (uint)*puVar3,midir,4,micaster,id,v3,
								 (int)missile[i]._mispllvl);
			AddMissile__Fiiiiiiciii
								(sx,sy,sx + (uint)*puVar4,sy - (uint)*puVar3,midir,4,micaster,id,v3,
								 (int)missile[i]._mispllvl);
			uVar1 = (uint)*puVar4;
			bVar2 = *puVar3;
		}
		puVar3 = puVar3 + 0x1e;
		puVar4 = puVar4 + 0x1e;
		local_38 = local_38 + 1;
	} while (local_38 < 0x17);
	missile[i]._mirange = missile[i]._mirange - 1;
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Flame__Fi(int i /*$s2*/)
 // line 5438, offset 0x80148d78
	/* begin block 1 */
		// Start line: 5439
		// Start offset: 0x80148D78
		// Variables:
	// 		int k; // $s1
	/* end block 1 */
	// End offset: 0x80148F74
	// End Line: 5462

	/* begin block 2 */
		// Start line: 12342
	/* end block 2 */
	// End Line: 12343

void MI_Flame__Fi(int i)

{
	char cVar1;
	ushort uVar2;
	short sVar3;
	int iVar4;
	
	missile[i]._mirange = missile[i]._mirange - 1;
	missile[i]._miVar2 = missile[i]._miVar2 + -1;
	uVar2 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUcb
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,
						 0,&DAT_00000001);
	if ((missile[i]._mirange == 0) && (missile[i]._miHitFlag == '\x01')) {
		missile[i]._mirange = uVar2;
	}
	sVar3 = missile[i]._miVar2;
	if (sVar3 == 0) {
		missile[i]._miAnimFrame = '\x14';
		sVar3 = missile[i]._miVar2;
	}
	if (sVar3 < 1) {
		iVar4 = (int)missile[i]._miAnimFrame;
		if (0xb < iVar4) {
			iVar4 = 0x18 - iVar4;
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
											 (iVar4 >> 3) + 0x94);
	}
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	if (missile[i]._miVar2 < 1) {
		PutMissile__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Flamec__Fi(int i /*$s1*/)
 // line 5466, offset 0x80148f94
	/* begin block 1 */
		// Start line: 5467
		// Start offset: 0x80148F94
		// Variables:
	// 		int id; // $s2
	/* end block 1 */
	// End offset: 0x801491F4
	// End Line: 5494

	/* begin block 2 */
		// Start line: 12413
	/* end block 2 */
	// End Line: 12414

void MI_Flamec__Fi(int i)

{
	char cVar1;
	short sVar2;
	int iVar3;
	void *pvVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = missile[i]._mixvel;
	iVar5 = missile[i]._mityoff;
	iVar7 = missile[i]._miyvel;
	sVar2 = missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange - 1;
	iVar3 = missile[i]._mitxoff;
	missile[i]._mityoff = iVar5 + iVar7;
	missile[i]._mitxoff = iVar3 + iVar6;
	GetMissilePos__Fi(i);
	if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
		 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
		pvVar4 = GetMISSILE__Fii((int)missile[i]._mix,(int)missile[i]._miy);
		if (pvVar4 == (void *)0x0) {
			AddMissile__Fiiiiiiciii
								((int)missile[i]._mix,(int)missile[i]._miy,(int)missile[i]._misx,
								 (int)missile[i]._misy,i,0x30,(int)*(char *)&missile[i]._micaster,(int)sVar2,
								 (int)missile[i]._miVar3,(int)missile[i]._mispllvl);
		}
		else {
			missile[i]._mirange = 0;
		}
		cVar1 = missile[i]._miy;
		sVar2 = missile[i]._miVar3;
		missile[i]._miVar1 = (short)missile[i]._mix;
		missile[i]._miVar2 = (short)cVar1;
		missile[i]._miVar3 = sVar2 + 1;
	}
	if ((missile[i]._mirange == 0) || (missile[i]._miVar3 == 3)) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Cbolt__Fi(int i /*$s2*/)
 // line 5498, offset 0x80149210
	/* begin block 1 */
		// Start line: 5499
		// Start offset: 0x80149210
		// Variables:
	// 		int bpath[16]; // stack offset -88
	// 		int sx; // $a1
	// 		int sy; // $a2
	// 		int dy; // $v0
	// 		int md; // $v0
	/* end block 1 */
	// End offset: 0x80149548
	// End Line: 5541

	/* begin block 2 */
		// Start line: 12496
	/* end block 2 */
	// End Line: 12497

void MI_Cbolt__Fi(int i)

{
	char cVar1;
	char cVar2;
	short sVar3;
	uint uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int local_58 [18];
	
	piVar9 = local_58;
	piVar8 = &DAT_8011a1c4;
	do {
		iVar5 = piVar8[1];
		iVar6 = piVar8[2];
		iVar7 = piVar8[3];
		*piVar9 = *piVar8;
		piVar9[1] = iVar5;
		piVar9[2] = iVar6;
		piVar9[3] = iVar7;
		piVar8 = piVar8 + 4;
		piVar9 = piVar9 + 4;
	} while (piVar8 != (int *)0x8011a204);
	missile[i]._mirange = missile[i]._mirange - 1;
	if (missile[i]._miAnimType != '\x03') {
		if (missile[i]._miVar3 == 0) {
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
			sVar3 = missile[i]._miVar2;
			iVar5 = local_58[missile[i]._mirnd];
			missile[i]._mirnd = missile[i]._mirnd + 1U & 0xf;
			uVar4 = (int)sVar3 + iVar5 & 7;
			GetMissileVel__Fiiiiii
								(i,(int)cVar1,(int)cVar2,(int)cVar1 + XDirAdd[uVar4],(int)cVar2 + YDirAdd[uVar4],8);
			missile[i]._miVar3 = 0x10;
		}
		else {
			missile[i]._miVar3 = missile[i]._miVar3 + -1;
		}
		iVar5 = missile[i]._mityoff;
		iVar6 = missile[i]._miyvel;
		missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
		missile[i]._mityoff = iVar5 + iVar6;
		GetMissilePos__Fi(i);
		CheckMissileCol__FiiiUciiUcb
							(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,
							 0,&DAT_00000001);
		if (missile[i]._miHitFlag == '\x01') {
			missile[i]._miVar1 = 8;
			missile[i]._mimfnum = '\0';
			missile[i]._mixoff = '\0';
			missile[i]._miyoff = '\0';
			SetMissAnim__Fii(i,3);
			missile[i]._mirange = (short)missile[i]._miAnimLen;
			GetMissilePos__Fi(i);
		}
		if ((i & 4U) != 0) {
			ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x242);
		}
	}
	if ((missile[i]._mirange == 0) && (missile[i]._miDelFlag = '\x01', (i & 4U) != 0)) {
		AddUnLight__Fi((int)missile[i]._mlid);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Hbolt__Fi(int i /*$s1*/)
 // line 5545, offset 0x80149564
	/* begin block 1 */
		// Start line: 5546
		// Start offset: 0x80149564
		// Variables:
	// 		int dam; // $a1
	/* end block 1 */
	// End offset: 0x80149878
	// End Line: 5583

	/* begin block 2 */
		// Start line: 12610
	/* end block 2 */
	// End Line: 12611

void MI_Hbolt__Fi(int i)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	short sVar4;
	int iVar5;
	int iVar6;
	
	uVar2 = missile[i]._miAnimType;
	missile[i]._mirange = missile[i]._mirange - 1;
	if (uVar2 == '\x1c') {
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x362);
		if (missile[i]._mirange == 0) {
			cVar1 = missile[i]._mlid;
			missile[i]._miDelFlag = '\x01';
			AddUnLight__Fi((int)cVar1);
		}
	}
	else {
		iVar5 = missile[i]._mityoff;
		iVar6 = missile[i]._miyvel;
		missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
		missile[i]._mityoff = iVar5 + iVar6;
		GetMissilePos__Fi(i);
		if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
			CheckMissileCol__FiiiUciiUcb
								(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,
								 (int)missile[i]._miy,0,&DAT_00000001);
		}
		if (missile[i]._mirange == 0) {
			iVar5 = missile[i]._mityoff;
			iVar6 = missile[i]._miyvel;
			missile[i]._mitxoff = missile[i]._mitxoff - missile[i]._mixvel;
			missile[i]._mityoff = iVar5 - iVar6;
			GetMissilePos__Fi(i);
			missile[i]._mimfnum = '\0';
			SetMissAnim__Fii(i,0x1c);
			missile[i]._mirange = (short)missile[i]._miAnimLen - 1;
		}
		else {
			if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
				 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
				cVar1 = missile[i]._mlid;
				cVar3 = missile[i]._miy;
				missile[i]._miVar1 = (short)missile[i]._mix;
				sVar4 = missile[i]._miVar1;
				missile[i]._miVar2 = (short)cVar3;
				ChangeLight__Fiiii((int)cVar1,(int)sVar4,(int)(short)cVar3,0x42);
			}
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Element__Fi(int i /*$s1*/)
 // line 5587, offset 0x80149890
	/* begin block 1 */
		// Start line: 5588
		// Start offset: 0x80149890
		// Variables:
	// 		int mid; // $v0
	// 		int sd; // $s0
	// 		int dam; // $s3
	// 		int cx; // $s4
	// 		int cy; // $s5
	// 		int px; // $s2
	// 		int py; // $s6
	// 		int id; // $s2
	/* end block 1 */
	// End offset: 0x80149F78
	// End Line: 5666

	/* begin block 2 */
		// Start line: 12717
	/* end block 2 */
	// End Line: 12718

void MI_Element__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	int tx;
	int dir;
	int my;
	int mindam;
	int mx;
	int dx;
	int fy;
	int ty;
	int ty_00;
	
	mindam = missile[i]._midam;
	missile[i]._mirange = missile[i]._mirange - 1;
	dir = (int)missile[i]._misource;
	if (missile[i]._miAnimType == '\x13') {
		mx = (int)missile[i]._mix;
		dx = (int)missile[i]._miy;
		my = (int)plr[dir]._px;
		fy = (int)plr[dir]._py;
		ChangeLight__Fiiii((int)missile[i]._mlid,mx,dx,0x1b6);
		dir = CheckBlock__Fiiii(my,fy,mx,dx);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',mx,dx,1,&DAT_00000001);
		}
		ty_00 = dx + 1;
		dir = CheckBlock__Fiiii(my,fy,mx,ty_00);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',mx,ty_00,1,&DAT_00000001);
		}
		ty = dx + -1;
		dir = CheckBlock__Fiiii(my,fy,mx,ty);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',mx,ty,1,&DAT_00000001);
		}
		tx = mx + 1;
		dir = CheckBlock__Fiiii(my,fy,tx,dx);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',tx,dx,1,&DAT_00000001);
		}
		dir = CheckBlock__Fiiii(my,fy,tx,ty);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',tx,ty,1,&DAT_00000001);
		}
		dir = CheckBlock__Fiiii(my,fy,tx,ty_00);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',tx,ty_00,1,&DAT_00000001);
		}
		mx = mx + -1;
		dir = CheckBlock__Fiiii(my,fy,mx,dx);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',mx,dx,1,&DAT_00000001);
		}
		dir = CheckBlock__Fiiii(my,fy,mx,ty_00);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',mx,ty_00,1,&DAT_00000001);
		}
		dir = CheckBlock__Fiiii(my,fy,mx,ty);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\x01',mx,ty,1,&DAT_00000001);
		}
		if (missile[i]._mirange == 0) {
			cVar1 = missile[i]._mlid;
			missile[i]._miDelFlag = '\x01';
			AddUnLight__Fi((int)cVar1);
		}
	}
	else {
		mx = missile[i]._mityoff;
		my = missile[i]._miyvel;
		missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
		missile[i]._mityoff = mx + my;
		GetMissilePos__Fi(i);
		cVar1 = missile[i]._mix;
		mx = (int)cVar1;
		cVar2 = missile[i]._miy;
		my = (int)cVar2;
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',mx,my,0,&DAT_00000001);
		if (((missile[i]._miVar3 == 0) && (mx == (int)missile[i]._miVar4)) &&
			 (my == (int)missile[i]._miVar5)) {
			missile[i]._miVar3 = 1;
		}
		if (missile[i]._miVar3 == 1) {
			missile[i]._miVar3 = 2;
			missile[i]._mirange = 0xff;
			mindam = FindClosest__Fiii(mx,my,0x13);
			if (mindam < 1) {
				dir = (int)plr[dir]._pdir;
				SetMissDir__Fii(i,dir);
				dx = mx + XDirAdd[dir];
				dir = my + YDirAdd[dir];
			}
			else {
				dir = GetDirection8__Fiiii(mx,my,(int)monster[mindam]._mx,(int)monster[mindam]._my);
				SetMissDir__Fii(i,dir);
				dx = (int)monster[mindam]._mx;
				dir = (int)monster[mindam]._my;
			}
			GetMissileVel__Fiiiiii(i,mx,my,dx,dir,0x10);
		}
		if ((mx != (int)missile[i]._miVar1) || (my != (int)missile[i]._miVar2)) {
			cVar3 = missile[i]._mlid;
			missile[i]._miVar1 = (short)cVar1;
			missile[i]._miVar2 = (short)cVar2;
			ChangeLight__Fiiii((int)cVar3,mx,my,0x1b6);
		}
		if (missile[i]._mirange == 0) {
			missile[i]._mimfnum = '\0';
			SetMissAnim__Fii(i,0x13);
			missile[i]._mirange = (short)missile[i]._miAnimLen - 1;
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Bonespirit__Fi(int i /*$s1*/)
 // line 5670, offset 0x80149fac
	/* begin block 1 */
		// Start line: 5671
		// Start offset: 0x80149FAC
		// Variables:
	// 		int mid; // $v0
	// 		int sd; // $s0
	// 		int dam; // $s2
	// 		int cx; // $s3
	// 		int cy; // $s4
	// 		int id; // $s5
	/* end block 1 */
	// End offset: 0x8014A3B8
	// End Line: 5739

	/* begin block 2 */
		// Start line: 12917
	/* end block 2 */
	// End Line: 12918

void MI_Bonespirit__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	short sVar4;
	int dir;
	int mx;
	int my;
	int mindam;
	
	mindam = missile[i]._midam;
	missile[i]._mirange = missile[i]._mirange - 1;
	sVar4 = missile[i]._misource;
	if (missile[i]._mimfnum == '\b') {
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x3f4);
		if (missile[i]._mirange == 0) {
			cVar1 = missile[i]._mlid;
			missile[i]._miDelFlag = '\x01';
			AddUnLight__Fi((int)cVar1);
		}
	}
	else {
		mx = missile[i]._mityoff;
		my = missile[i]._miyvel;
		missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
		missile[i]._mityoff = mx + my;
		GetMissilePos__Fi(i);
		cVar1 = missile[i]._mix;
		mx = (int)cVar1;
		cVar2 = missile[i]._miy;
		my = (int)cVar2;
		CheckMissileCol__FiiiUciiUcb(i,mindam,mindam,'\0',mx,my,0,&DAT_00000001);
		if (((missile[i]._miVar3 == 0) && (mx == (int)missile[i]._miVar4)) &&
			 (my == (int)missile[i]._miVar5)) {
			missile[i]._miVar3 = 1;
		}
		if (missile[i]._miVar3 == 1) {
			missile[i]._miVar3 = 2;
			missile[i]._mirange = 0xff;
			mindam = FindClosest__Fiii(mx,my,0x13);
			if (mindam < 1) {
				mindam = (int)plr[(int)sVar4]._pdir;
				SetMissDir__Fii(i,mindam);
				dir = mx + XDirAdd[mindam];
				mindam = my + YDirAdd[mindam];
			}
			else {
				missile[i]._midam = monster[mindam]._mhitpoints >> 7;
				dir = GetDirection8__Fiiii(mx,my,(int)monster[mindam]._mx,(int)monster[mindam]._my);
				SetMissDir__Fii(i,dir);
				dir = (int)monster[mindam]._mx;
				mindam = (int)monster[mindam]._my;
			}
			GetMissileVel__Fiiiiii(i,mx,my,dir,mindam,0x10);
		}
		if ((mx != (int)missile[i]._miVar1) || (my != (int)missile[i]._miVar2)) {
			cVar3 = missile[i]._mlid;
			missile[i]._miVar1 = (short)cVar1;
			missile[i]._miVar2 = (short)cVar2;
			ChangeLight__Fiiii((int)cVar3,mx,my,0x3f4);
		}
		if (missile[i]._mirange == 0) {
			SetMissDir__Fii(i,8);
			missile[i]._mirange = 7;
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_ResurrectBeam__Fi(int i /*$a0*/)
 // line 5743, offset 0x8014a3e0
	/* begin block 1 */
		// Start line: 5744
		// Start offset: 0x8014A3E0
	/* end block 1 */
	// End offset: 0x8014A448
	// End Line: 5749

	/* begin block 2 */
		// Start line: 13094
	/* end block 2 */
	// End Line: 13095

void MI_ResurrectBeam__Fi(int i)

{
	missile[i]._mirange = missile[i]._mirange - 1;
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Rportal__Fi(int i /*$s1*/)
 // line 5753, offset 0x8014a458
	/* begin block 1 */
		// Start line: 5754
		// Start offset: 0x8014A458
		// Variables:
	// 		int ExpLight[17]; // stack offset -88
	/* end block 1 */
	// End offset: 0x8014A67C
	// End Line: 5774

	/* begin block 2 */
		// Start line: 13117
	/* end block 2 */
	// End Line: 13118

void MI_Rportal__Fi(int i)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int *piVar5;
	int *piVar6;
	int local_58 [18];
	
	piVar6 = local_58;
	piVar5 = &DAT_8011a0f8;
	do {
		iVar2 = piVar5[1];
		iVar3 = piVar5[2];
		iVar4 = piVar5[3];
		*piVar6 = *piVar5;
		piVar6[1] = iVar2;
		piVar6[2] = iVar3;
		piVar6[3] = iVar4;
		piVar5 = piVar5 + 4;
		piVar6 = piVar6 + 4;
	} while (piVar5 != (int *)0x8011a138);
	*piVar6 = iRam8011a138;
	if (1 < missile[i]._mirange) {
		missile[i]._mirange = missile[i]._mirange - 1;
	}
	if ((uint)missile[i]._mirange == (int)missile[i]._miVar1) {
		SetMissDir__Fii(i,1);
	}
	if ((currlevel == '\0') || (missile[i]._mimfnum == '\x01')) {
LAB_8014a618:
		if (missile[i]._mirange != 0) goto LAB_8014a674;
	}
	else {
		if (missile[i]._mirange != 0) {
			if (missile[i]._miVar2 == 0) {
				iVar2 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_58[0] >> 2) + 0x90);
				missile[i]._mlid = (char)iVar2;
			}
			ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
												 (local_58[(int)missile[i]._miVar2] >> 2) + 0x90);
			missile[i]._miVar2 = missile[i]._miVar2 + 1;
			goto LAB_8014a618;
		}
	}
	cVar1 = missile[i]._mlid;
	missile[i]._miDelFlag = '\x01';
	AddUnLight__Fi((int)cVar1);
LAB_8014a674:
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessMissiles__Fv()
 // line 5780, offset 0x8014a694
	/* begin block 1 */
		// Start line: 5781
		// Start offset: 0x8014A694
		// Variables:
	// 		short i; // $s1
	// 		short j; // $v1
	// 		short mi; // $v1
	// 		struct MissileStruct *miss; // $s0
	// 		short *pmissileactive; // $s2
	/* end block 1 */
	// End offset: 0x8014AAA0
	// End Line: 5845

	/* begin block 2 */
		// Start line: 13178
	/* end block 2 */
	// End Line: 13179

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessMissiles__Fv(void)

{
	char cVar1;
	char cVar2;
	int i;
	int iVar3;
	int iVar4;
	short *psVar5;
	
	psVar5 = &missileactive;
	iVar4 = 0;
	if (0 < nummissiles) {
		do {
			iVar4 = iVar4 + 1;
			i = (int)*psVar5;
			dung_map[(int)missile[i]._mix * 0x70 + (int)missile[i]._miy].dFlags =
					 dung_map[(int)missile[i]._mix * 0x70 + (int)missile[i]._miy].dFlags & 0xbf;
			dung_map[(int)missile[i]._mix * 0x70 + (int)missile[i]._miy].dMissile = '\0';
			psVar5 = psVar5 + 1;
		} while (iVar4 * 0x10000 >> 0x10 < nummissiles);
	}
	iVar4 = 0;
	do {
		iVar3 = 0;
		i = 0;
		do {
			(&dMissArray)[(i >> 0x10) + ((iVar4 << 0x10) >> 0xe)] = '\0';
			iVar3 = iVar3 + 1;
			i = iVar3 * 0x10000;
		} while (iVar3 * 0x10000 >> 0x10 < 4);
		iVar4 = iVar4 + 1;
	} while (iVar4 * 0x10000 >> 0x10 < 0x20);
	iVar4 = 0;
	if (0 < nummissiles) {
		i = 0;
		do {
			iVar4 = iVar4 + 1;
			if (missile[(int)(&missileactive)[i >> 0x10]]._miDelFlag == '\0') {
				iVar3 = iVar4 * 0x10000;
			}
			else {
				iVar4 = 0;
				DeleteMissile__Fii((int)(&missileactive)[i >> 0x10],i >> 0x10);
				iVar3 = 0;
			}
			i = iVar4 << 0x10;
		} while (iVar3 >> 0x10 < nummissiles);
	}
	psVar5 = &missileactive;
	MissilePreFlag = '\0';
	ManashieldFlag = '\0';
	ManashieldFlag2 = '\0';
	iVar4 = 0;
	if (0 < nummissiles) {
		do {
			i = (int)*psVar5;
			psVar5 = psVar5 + 1;
			(*missiledata[(int)missile[i]._mitype].mProc)();
			if (((missile[i]._miAnimFlags & 2) == 0) &&
				 (cVar2 = missile[i]._miAnimDelay, cVar1 = missile[i]._miAnimCnt + '\x01',
				 missile[i]._miAnimCnt = cVar1, cVar2 <= cVar1)) {
				cVar2 = missile[i]._miAnimFrame;
				cVar1 = missile[i]._miAnimAdd;
				missile[i]._miAnimCnt = '\0';
				cVar2 = cVar2 + cVar1;
				missile[i]._miAnimFrame = cVar2;
				if (missile[i]._miAnimLen < cVar2) {
					missile[i]._miAnimFrame = '\x01';
				}
				if (missile[i]._miAnimFrame < '\x01') {
					missile[i]._miAnimFrame = missile[i]._miAnimLen;
				}
			}
			iVar4 = iVar4 + 1;
		} while (iVar4 * 0x10000 >> 0x10 < nummissiles);
	}
	if ((ManashieldFlag != '\0') || (ManashieldFlag2 != '\0')) {
		iVar4 = 0;
		if (nummissiles < 1) {
			return;
		}
		i = 0;
		do {
			i = (int)*(short *)((int)&missileactive + (i >> 0xf));
			if (missile[i]._mitype == '\r') {
				MI_Manashield__Fi(i);
			}
			iVar4 = iVar4 + 1;
			i = iVar4 * 0x10000;
		} while (iVar4 * 0x10000 >> 0x10 < nummissiles);
	}
	iVar4 = 0;
	if (0 < nummissiles) {
		i = 0;
		do {
			iVar4 = iVar4 + 1;
			if (missile[(int)(&missileactive)[i >> 0x10]]._miDelFlag == '\0') {
				iVar3 = iVar4 * 0x10000;
			}
			else {
				iVar4 = 0;
				DeleteMissile__Fii((int)(&missileactive)[i >> 0x10],i >> 0x10);
				iVar3 = 0;
			}
			i = iVar4 << 0x10;
		} while (iVar3 >> 0x10 < nummissiles);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearMissileSpot__Fi(int mi /*$a0*/)
 // line 5885, offset 0x8014aac0
	/* begin block 1 */
		// Start line: 5886
		// Start offset: 0x8014AAC0
	/* end block 1 */
	// End offset: 0x8014AB58
	// End Line: 5889

	/* begin block 2 */
		// Start line: 13417
	/* end block 2 */
	// End Line: 13418

void ClearMissileSpot__Fi(int mi)

{
	dung_map[(int)missile[mi]._mix * 0x70 + (int)missile[mi]._miy].dFlags =
			 dung_map[(int)missile[mi]._mix * 0x70 + (int)missile[mi]._miy].dFlags & 0xbf;
	dung_map[(int)missile[mi]._mix * 0x70 + (int)missile[mi]._miy].dMissile = '\0';
	return;
}





