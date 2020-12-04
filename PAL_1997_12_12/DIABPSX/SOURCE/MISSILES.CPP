#include "THISDUST.H"
#include "MISSILES.H"


// decompiled code
// original method signature: 
// int /*$ra*/ vecleny__Fii(int a /*$a0*/, int b /*$a1*/)
 // line 106, offset 0x8013768c
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8013768C
	/* end block 1 */
	// End offset: 0x801376A8
	// End Line: 108

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

int vecleny__Fii(int a,int b)

{
	return a * (int)Circle[b] >> 8;
}



// decompiled code
// original method signature: 
// int /*$ra*/ veclenx__Fii(int a /*$a0*/, int b /*$a1*/)
 // line 111, offset 0x801376b0
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x801376B0
	/* end block 1 */
	// End offset: 0x801376D4
	// End Line: 113

	/* begin block 2 */
		// Start line: 223
	/* end block 2 */
	// End Line: 224

int veclenx__Fii(int a,int b)

{
	return a * (int)Circle[b + 0x10U & 0x3f] >> 8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetDamageAmt__FiPiT1(int i /*$a0*/, int *mind /*$a3*/, int *maxd /*$a2*/)
 // line 265, offset 0x801376dc
	/* begin block 1 */
		// Start line: 266
		// Start offset: 0x801376DC
		// Variables:
	// 		int k; // $a0
	// 		int sl; // $a1
	// 		struct PlayerStruct *plr; // $a1
	// 		int _pMagic; // $t1
	// 		char _pLevel; // $t0
	// 		char _pClass; // $t2
	/* end block 1 */
	// End offset: 0x80137CC8
	// End Line: 417

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

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
		goto LAB_80137cc0;
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
		goto LAB_80137cc0;
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
		goto LAB_80137cc0;
	case 0x23:
		iVar3 = ((iVar5 >> 1) - iVar3) + iVar4 * 3;
LAB_80137cc0:
		*mind = iVar3;
	}
	*maxd = iVar3;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckBlock__Fiiii(int fx /*$s0*/, int fy /*$s1*/, int tx /*$s2*/, int ty /*$s3*/)
 // line 434, offset 0x80137cd4
	/* begin block 1 */
		// Start line: 435
		// Start offset: 0x80137CD4
		// Variables:
	// 		int pn; // $v0
	// 		int coll; // $s4
	/* end block 1 */
	// End offset: 0x80137D98
	// End Line: 451

	/* begin block 2 */
		// Start line: 878
	/* end block 2 */
	// End Line: 879

int CheckBlock__Fiiii(int fx,int fy,int tx,int ty)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while ((fx != tx || (fy != ty))) {
		iVar1 = GetDirection__Fiiii(fx,fy,tx,ty);
		fx = fx + XDirAdd[iVar1];
		fy = fy + YDirAdd[iVar1];
		if (nSolidTable[(int)dung_map[fx * 0x6c + fy].dPiece] != '\0') {
			iVar2 = 1;
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindClosest__Fiii(int sx /*$s4*/, int sy /*$s5*/, int rad /*$s6*/)
 // line 456, offset 0x80137dbc
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x80137DBC
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
	// End offset: 0x80137F2C
	// End Line: 479

	/* begin block 2 */
		// Start line: 926
	/* end block 2 */
	// End Line: 927

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
	
	ppuVar2 = (undefined **)&DAT_80129c44;
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
	} while (ppuVar7 + 4 != PTR_ARRAY_80129c74 + 4);
	puVar4 = ppuVar7[5];
	puVar5 = ppuVar7[6];
	*(undefined **)(piVar8 + 4) = PTR_ARRAY_80129c74[4];
	*(undefined **)(piVar8 + 5) = puVar4;
	*(undefined **)(piVar8 + 6) = puVar5;
	iVar11 = 1;
	if (0x13 < rad) {
		rad = 0x13;
	}
	if (1 < rad) {
		tx = 4;
		do {
			uVar10 = (uint)(byte)CrawlTable[*(int *)((int)local_70 + tx)];
			iVar9 = *(int *)((int)local_70 + tx) + 1;
			if (CrawlTable[*(int *)((int)local_70 + tx)] != 0) {
				do {
					tx = sx + (int)CrawlTable[iVar9];
					ty = sy + (int)CrawlTable[iVar9 + 1];
					if ((((tx - 1U < 0x5b) && (ty - 1U < 0x5b)) &&
							(sVar1 = dung_map[tx * 0x6c + ty].dMonster, 0 < (int)sVar1)) &&
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
 // line 485, offset 0x80137f58
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x80137F58
		// Variables:
	// 		int rv; // $v0
	/* end block 1 */
	// End offset: 0x80137FC4
	// End Line: 496

	/* begin block 2 */
		// Start line: 992
	/* end block 2 */
	// End Line: 993

int GetSpellLevel__Fii(int id,int sn)

{
	int iVar1;
	
	if (id == myplr) {
		iVar1 = (int)*(char *)(id * 0x23a8 + -0x7ff2147f + sn) + (int)plr[id]._pISplLvlAdd;
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
 // line 517, offset 0x80137fcc
	/* begin block 1 */
		// Start line: 518
		// Start offset: 0x80137FCC
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
	// End offset: 0x801381B4
	// End Line: 558

	/* begin block 2 */
		// Start line: 1051
	/* end block 2 */
	// End Line: 1052

/* WARNING: Removing unreachable block (ram,0x80138020) */
/* WARNING: Removing unreachable block (ram,0x80138024) */
/* WARNING: Removing unreachable block (ram,0x80138070) */

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
	puVar9 = &DAT_80129c90;
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
	} while (puVar9 != &DAT_80129d90);
	local_48[0] = DAT_8012bc10;
	local_48[1] = DAT_8012bc11;
	local_48[2] = DAT_8012bc12;
	local_40[0] = DAT_8012bc14;
	local_40[1] = DAT_8012bc15;
	local_40[2] = DAT_8012bc16;
	local_38[0] = DAT_8012bc18;
	local_38[1] = DAT_8012bc19;
	local_38[2] = DAT_8012bc1a;
	local_30[0] = DAT_8012bc1c;
	local_30[1] = DAT_8012bc1d;
	local_30[2] = DAT_8012bc1e;
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
// void /*$ra*/ DeleteMissile__Fii(int mi /*$a0*/, int i /*$a1*/)
 // line 609, offset 0x801381e8
	/* begin block 1 */
		// Start line: 610
		// Start offset: 0x801381E8
	/* end block 1 */
	// End offset: 0x80138238
	// End Line: 617

	/* begin block 2 */
		// Start line: 1245
	/* end block 2 */
	// End Line: 1246

void DeleteMissile__Fii(int mi,int i)

{
	missileavail[0x7d - nummissiles] = mi;
	nummissiles = nummissiles + -1;
	if ((0 < nummissiles) && (i != nummissiles)) {
		(&missileactive)[i] = (&missileactive)[nummissiles];
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetMissileVel__Fiiiiii(int i /*$s6*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int v /*stack 20*/)
 // line 623, offset 0x80138240
	/* begin block 1 */
		// Start line: 624
		// Start offset: 0x80138240
		// Variables:
	// 		long dxp; // $s0
	// 		long dyp; // $s2
	// 		long dr; // $s4
	/* end block 1 */
	// End offset: 0x801383C4
	// End Line: 635

	/* begin block 2 */
		// Start line: 1271
	/* end block 2 */
	// End Line: 1272

void GetMissileVel__Fiiiiii(int i,int sx,int sy,int dx,int dy,int v)

{
	uint ix;
	uint uVar1;
	uint uVar2;
	int iVar3;
	uint iy;
	int iVar4;
	uint uVar5;
	undefined8 uVar6;
	
	iVar3 = (dx - sx) * 0x20;
	ix = (iVar3 + (dy - sy) * -0x20) * 0x10000;
	iVar4 = (int)ix >> 0x1f;
	iy = (iVar3 + (dy - sy) * 0x20) * 0x10000;
	iVar3 = (int)iy >> 0x1f;
	uVar1 = veclen2__Fii(ix,iy);
	uVar5 = (int)uVar1 >> 0x1f;
	if ((ix == 0) && (iVar4 == 0)) {
		ix = 1;
		iVar4 = 0;
	}
	if ((iy == 0) && (iVar3 == 0)) {
		iy = 1;
		iVar3 = 0;
	}
	if ((uVar1 == 0) && (uVar5 == 0)) {
		uVar1 = 1;
		uVar5 = 0;
	}
	uVar2 = v * 0x10000;
	uVar6 = __divdi3((uint)((ulonglong)uVar2 * (ulonglong)ix),
									 (int)((ulonglong)uVar2 * (ulonglong)ix >> 0x20) + uVar2 * iVar4 +
									 ix * ((int)uVar2 >> 0x1f),uVar1,uVar5);
	ix = v * 0x8000;
	missile[i]._mixvel = (long)((ulonglong)uVar6 >> 0x20);
	uVar6 = __divdi3((uint)((ulonglong)ix * (ulonglong)iy),
									 (int)((ulonglong)ix * (ulonglong)iy >> 0x20) + ix * iVar3 +
									 iy * ((int)ix >> 0x1f),uVar1,uVar5);
	missile[i]._miyvel = (long)((ulonglong)uVar6 >> 0x20);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutMissile__Fi(int i /*$a0*/)
 // line 640, offset 0x801383f4
	/* begin block 1 */
		// Start line: 641
		// Start offset: 0x801383F4
		// Variables:
	// 		int mx; // $a2
	// 		int my; // $a1
	/* end block 1 */
	// End offset: 0x801384F0
	// End Line: 655

	/* begin block 2 */
		// Start line: 1316
	/* end block 2 */
	// End Line: 1317

void PutMissile__Fi(int i)

{
	char cVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = (int)missile[i]._mix;
	iVar2 = (int)missile[i]._miy;
	if ((((iVar3 < 1) || (iVar2 < 1)) || (0x6f < iVar3)) || (0x6f < iVar2)) {
		missile[i]._miDelFlag = '\x01';
	}
	if (missile[i]._miDelFlag == '\0') {
		cVar1 = dung_map[iVar3 * 0x6c + iVar2].dMissile;
		dung_map[iVar3 * 0x6c + iVar2].dFlags = dung_map[iVar3 * 0x6c + iVar2].dFlags | 1;
		if (cVar1 == '\0') {
			dung_map[iVar3 * 0x6c + iVar2].dMissile = (char)i + '\x01';
		}
		if (missile[i]._miPreFlag != '\0') {
			MissilePreFlag = '\x01';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetMissilePos__Fi(int i /*$a3*/)
 // line 671, offset 0x801384f8
	/* begin block 1 */
		// Start line: 672
		// Start offset: 0x801384F8
		// Variables:
	// 		long mx; // $t0
	// 		long my; // $t2
	// 		long dx; // $a1
	// 		long dy; // $a2
	// 		long lx; // $t3
	// 		long ly; // $t1
	/* end block 1 */
	// End offset: 0x80138610
	// End Line: 703

	/* begin block 2 */
		// Start line: 1375
	/* end block 2 */
	// End Line: 1376

void GetMissilePos__Fi(int i)

{
	char cVar1;
	short sVar2;
	short sVar3;
	char cVar4;
	char cVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	sVar2 = *(short *)((int)&missile[i]._mityoff + 2);
	sVar3 = *(short *)((int)&missile[i]._mitxoff + 2);
	iVar6 = (int)sVar2 * 2;
	iVar7 = (int)sVar3 + iVar6;
	iVar6 = iVar6 - (int)sVar3;
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
	cVar5 = (char)iVar6;
	cVar4 = (char)iVar7;
	missile[i]._mixoff = (char)sVar3 + (cVar4 - cVar5) * -0x20;
	missile[i]._miyoff = (char)sVar2 + (cVar4 + cVar5) * -0x10;
	cVar1 = missile[i]._misy;
	missile[i]._mix = missile[i]._misx + cVar4;
	missile[i]._miy = cVar1 + cVar5;
	ChangeLightOff__Fiii((int)missile[i]._mlid,iVar9 + iVar7 * -8,iVar8 + iVar6 * -8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveMissilePos__Fi(int i /*$a0*/)
 // line 713, offset 0x80138620
	/* begin block 1 */
		// Start line: 714
		// Start offset: 0x80138620
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s1
	/* end block 1 */
	// End offset: 0x8013876C
	// End Line: 771

	/* begin block 2 */
		// Start line: 1474
	/* end block 2 */
	// End Line: 1475

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
		goto LAB_801386a0;
	case '\x02':
		iVar6 = 0;
LAB_801386a0:
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
 // line 778, offset 0x80138788
	/* begin block 1 */
		// Start line: 779
		// Start offset: 0x80138788
		// Variables:
	// 		int hit; // $s3
	// 		int hper; // $s0
	// 		long dam; // $a2
	// 		int mor; // $a0
	// 		int mir; // $a1
	// 		unsigned char resist; // $s4
	// 		unsigned char ret; // stack offset -48
	/* end block 1 */
	// End offset: 0x80138ACC
	// End Line: 852

	/* begin block 2 */
		// Start line: 1617
	/* end block 2 */
	// End Line: 1618

uchar MonsterTrapHit__FiiiiiUc(int m,int mindam,int maxdam,int dist,int t,int shift)

{
	ushort uVar1;
	bool bVar2;
	uchar uVar3;
	short sVar4;
	long lVar5;
	int iVar6;
	int iVar7;
	uchar local_30 [8];
	
	bVar2 = false;
	if (monster[m].mtalkmsg == 0) {
		if ((int)((uint)(ushort)monster[m]._mhitpoints << 0x10) >> 0x16 < 1) {
			return '\0';
		}
		if ((((monster[m].MType)->mtype != ' ') || (monster[m]._mgoal != '\x02')) &&
			 (monster[m]._mmode != '\x0e')) {
			uVar1 = monster[m].mMagicRes;
			uVar3 = missiledata[t].mResist;
			if (((uVar1 & 8) != 0) && (uVar3 == '\x03')) {
				return '\0';
			}
			if (((uVar1 & 0x10) != 0) && (uVar3 == '\x01')) {
				return '\0';
			}
			if (((uVar1 & 0x20) != 0) && (uVar3 == '\x02')) {
				return '\0';
			}
			if ((((uVar1 & 1) != 0) && (uVar3 == '\x03')) ||
				 ((((uVar1 & 2) != 0 && (uVar3 == '\x01')) || (((uVar1 & 4) != 0 && (uVar3 == '\x02')))))) {
				bVar2 = true;
			}
			lVar5 = random__Fil(0x44,100);
			iVar6 = (0x5a - dist) - (int)monster[m].mArmorClass;
			iVar7 = iVar6;
			if (iVar6 < 5) {
				iVar7 = 5;
			}
			if (0x5f < iVar6) {
				iVar7 = 0x5f;
			}
			uVar3 = CheckMonsterHit__FiRUc(m,local_30);
			if (uVar3 != '\0') {
				return local_30[0];
			}
			if ((iVar7 <= lVar5) && (monster[m]._mmode != '\x0f')) {
				return '\0';
			}
			lVar5 = random__Fil(0x44,(maxdam - mindam) + 1);
			mindam = lVar5 + mindam;
			if ((char)shift == '\0') {
				mindam = mindam * 0x40;
			}
			if (bVar2) {
				sVar4 = monster[m]._mhitpoints - (short)(mindam >> 2);
			}
			else {
				sVar4 = monster[m]._mhitpoints - (short)mindam;
			}
			monster[m]._mhitpoints = sVar4;
			if ((int)((uint)(ushort)monster[m]._mhitpoints << 0x10) >> 0x16 < 1) {
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
// unsigned char /*$ra*/ MonsterMHit__FiiiiiiUc(int pnum /*$s2*/, int m /*$s3*/, int mindam /*$s6*/, int maxdam /*$fp*/, int dist /*stack 16*/, int t /*stack 20*/, int shift /*stack 24*/)
 // line 858, offset 0x80138afc
	/* begin block 1 */
		// Start line: 859
		// Start offset: 0x80138AFC
		// Variables:
	// 		int hit; // $s5
	// 		int hper; // $s0
	// 		long dam; // $s0
	// 		int mor; // $a0
	// 		int mir; // $a1
	// 		unsigned char resist; // $s7
	// 		unsigned char ret; // stack offset -56
	/* end block 1 */
	// End offset: 0x80139228
	// End Line: 967

	/* begin block 2 */
		// Start line: 1806
	/* end block 2 */
	// End Line: 1807

uchar MonsterMHit__FiiiiiiUc(int pnum,int m,int mindam,int maxdam,int dist,int t,int shift)

{
	ushort uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	uchar local_38 [8];
	char local_30;
	
	bVar4 = false;
	local_30 = (char)shift;
	if (monster[m].mtalkmsg != 0) {
		return '\0';
	}
	if ((int)((uint)(ushort)monster[m]._mhitpoints << 0x10) >> 0x16 < 1) {
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
	lVar6 = random__Fil(0x45,100);
	if (missiledata[t].mType == '\0') {
		dist = ((((int)plr[pnum]._pLevel - ((int)monster[m].mArmorClass + -0x32)) - plr[pnum]._pIEnAc) +
					 (int)plr[pnum]._pDexterity + plr[pnum]._pIBonusToHit) - (dist * dist >> 1);
		if (plr[pnum]._pClass == '\x01') {
			dist = dist + 0x14;
		}
		bVar2 = dist < 5;
		if (plr[pnum]._pClass == '\0') {
			dist = dist + 10;
LAB_80138e44:
			bVar2 = dist < 5;
		}
	}
	else {
		dist = ((int)plr[pnum]._pMagic - ((int)monster[m].mLevel * 2 + -0x32)) - dist;
		bVar2 = dist < 5;
		if (plr[pnum]._pClass == '\x02') {
			dist = dist + 0x14;
			goto LAB_80138e44;
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
		return '\0';
	}
	if (t == 0x3f) {
		iVar7 = (uint)(ushort)monster[m]._mhitpoints << 0x10;
		iVar8 = iVar7 >> 0x10;
		mindam = ((iVar8 / 3 + (iVar8 >> 0x1f)) - (iVar7 >> 0x1f)) * 0x10000 >> 0x16;
	}
	else {
		lVar6 = random__Fil(0x46,(maxdam - mindam) + 1);
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
	monster[m]._mhitpoints = monster[m]._mhitpoints - (short)mindam;
	if ((plr[pnum]._pIFlags & 8U) != 0) {
		monster[m]._mFlags = monster[m]._mFlags | 8;
	}
	if ((int)((uint)(ushort)monster[m]._mhitpoints << 0x10) >> 0x16 < 1) {
		if (monster[m]._mmode != '\x0f') {
			M_StartKill__Fii(m,pnum);
			goto LAB_8013919c;
		}
		M_StartKill__Fii(m,pnum);
	}
	else {
		if (bVar4) {
			PlayEffect__Fii(m,1);
			goto LAB_8013919c;
		}
		if (monster[m]._mmode != '\x0f') {
			if ((missiledata[t].mType == '\0') && ((plr[pnum]._pIFlags & 0x800U) != 0)) {
				M_GetKnockback__Fi(m);
			}
			if (3 < m) {
				M_StartHit__Fiii(m,pnum,mindam);
			}
			goto LAB_8013919c;
		}
		if (3 < m) {
			M_StartHit__Fiii(m,pnum,mindam);
		}
	}
	monster[m]._mmode = '\x0f';
LAB_8013919c:
	if (monster[m]._msquelch == '\0') {
		monster[m]._msquelch = -1;
		monster[m]._lastx = (char)plr[pnum]._px;
		monster[m]._lasty = (char)plr[pnum]._py;
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlayerMHit__FiiiiiiUcUc(int pnum /*$s0*/, int m /*$s3*/, int dist /*$s1*/, int mind /*$s7*/, int maxd /*stack 16*/, int mtype /*stack 20*/, int shift /*stack 24*/, int earflag /*stack 28*/)
 // line 973, offset 0x8013925c
	/* begin block 1 */
		// Start line: 974
		// Start offset: 0x8013925C
		// Variables:
	// 		int hit; // stack offset -48
	// 		int hper; // $s1
	// 		int tac; // $a0
	// 		long dam; // $a1
	// 		int blk; // $s5
	// 		int blkper; // $s4
	// 		int blkdir; // $v0
	// 		int resper; // $s2
	/* end block 1 */
	// End offset: 0x80139C94
	// End Line: 1097

	/* begin block 2 */
		// Start line: 2078
	/* end block 2 */
	// End Line: 2079

uchar PlayerMHit__FiiiiiiUcUc
								(int pnum,int m,int dist,int mind,int maxd,int mtype,int shift,int earflag)

{
	char cVar1;
	byte bVar2;
	long lVar3;
	int dir;
	int y;
	_125fake psfx;
	int iVar4;
	long lVar5;
	
	if (plr[pnum]._pHitPoints >> 6 < 1) {
		return '\0';
	}
	if (plr[pnum]._pInvincible != '\0') {
		return '\0';
	}
	if (((plr[pnum]._pSpellFlags & 1U) != 0) && (missiledata[mtype].mType == '\0')) {
		return '\0';
	}
	lVar3 = random__Fil(0x48,100);
	if (missiledata[mtype].mType == '\0') {
		y = (uint)(ushort)plr[pnum]._pDexterity << 0x10;
		dir = y >> 0x10;
		dir = plr[pnum]._pIAC + plr[pnum]._pIBonusAC +
					(((dir / 5 + (dir >> 0x1f)) - (y >> 0x1f)) * 0x10000 >> 0x10);
		if (m == -1) {
			dir = (dist * -2 + 100) - (dir >> 1);
			goto LAB_801394b8;
		}
		dir = ((uint)monster[m].mHit - (dir + -0x1e)) +
					((int)monster[m].mLevel - (int)plr[pnum]._pLevel) * 2;
	}
	else {
		if (m == -1) {
			dir = 0x28;
			goto LAB_801394b8;
		}
		dir = (int)monster[m].mLevel * 2 - ((int)plr[pnum]._pLevel * 2 + -0x28);
	}
	dir = dir + dist * -2;
LAB_801394b8:
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
	if ((plr[pnum]._pmode == 0) || (lVar5 = 100, plr[pnum]._pmode == 4)) {
		if (plr[pnum]._pBlockFlag == '\0') {
			lVar5 = 100;
		}
		else {
			lVar5 = random__Fil(0x49,100);
		}
	}
	if ((char)shift == '\x01') {
		lVar5 = 100;
	}
	if (mtype == 0x3b) {
		lVar5 = 100;
	}
	if (m == -1) {
		y = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity;
	}
	else {
		y = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity +
				((int)monster[m].mLevel - (int)plr[pnum]._pLevel) * -2;
	}
	iVar4 = y;
	if (y < 0) {
		iVar4 = 0;
	}
	if (100 < y) {
		iVar4 = 100;
	}
	bVar2 = missiledata[mtype].mResist;
	if (bVar2 == 2) {
		y = (int)plr[pnum]._pLghtResist;
	}
	else {
		if (bVar2 < 3) {
			if (bVar2 == 1) {
				y = (int)plr[pnum]._pFireResist;
			}
			else {
				y = 0;
			}
		}
		else {
			y = 0;
			if (bVar2 < 5) {
				y = (int)plr[pnum]._pMagResist;
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
			lVar3 = random__Fil(0x4b,((maxd - mind) + 1) * 0x40);
			mind = lVar3 + mind * 0x40;
			if ((plr[pnum]._pIFlags & 0x10000000U) != 0) {
				mind = mind >> 1;
			}
			dir = plr[pnum]._pIGetHit << 6;
		}
		else {
			lVar3 = random__Fil(0x4b,(maxd - mind) + 1);
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
	if (0 < y) {
		mind = mind - (mind * y) / 100;
		if (pnum == myplr) {
			dir = plr[pnum]._pHPBase;
			plr[pnum]._pHitPoints = plr[pnum]._pHitPoints - mind;
			plr[pnum]._pHPBase = dir - mind;
		}
		if (plr[pnum]._pMaxHP < plr[pnum]._pHitPoints) {
			lVar3 = plr[pnum]._pMaxHPBase;
			plr[pnum]._pHitPoints = plr[pnum]._pMaxHP;
			plr[pnum]._pHPBase = lVar3;
		}
		if (0 < plr[pnum]._pHitPoints >> 6) {
			cVar1 = plr[pnum]._pClass;
			if (cVar1 == '\0') {
				dir = (int)plr[pnum]._px;
				y = (int)plr[pnum]._py;
				psfx = PS_WARR69;
			}
			else {
				if (cVar1 == '\x01') {
					dir = (int)plr[pnum]._px;
					y = (int)plr[pnum]._py;
					psfx = PS_ROGUE69;
				}
				else {
					if (cVar1 != '\x02') {
						drawhpflag = '\x01';
						return '\x01';
					}
					dir = (int)plr[pnum]._px;
					y = (int)plr[pnum]._py;
					psfx = PS_MAGE69;
				}
			}
			PlaySfxLoc__Fiii(psfx,dir,y);
			drawhpflag = '\x01';
			return '\x01';
		}
		StartPlrKill__Fii(pnum,earflag & 0xff);
		return '\x01';
	}
	if (lVar5 < iVar4) {
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
	dir = pnum * 8;
	if (pnum == myplr) {
		dir = plr[pnum]._pHPBase;
		plr[pnum]._pHitPoints = plr[pnum]._pHitPoints - mind;
		plr[pnum]._pHPBase = dir - mind;
		dir = pnum << 3;
	}
	dir = dir * 0x80 + pnum * 0x75;
	if ((&plr[0]._pMaxHP)[dir * 2] < (&plr[0]._pHitPoints)[dir * 2]) {
		(&plr[0]._pHitPoints)[dir * 2] = (&plr[0]._pMaxHP)[dir * 2];
		(&plr[0]._pHPBase)[dir * 2] = (&plr[0]._pMaxHPBase)[dir * 2];
	}
	if (0 < (&plr[0]._pHitPoints)[dir * 2] >> 6) {
		StartPlrHit__FiiUc(pnum,mind,'\0');
		return '\x01';
	}
	StartPlrKill__Fii(pnum,earflag & 0xff);
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ Plr2PlrMHit__FiiiiiiUc(int pnum /*$s2*/, int p /*$s1*/, int mindam /*stack -56*/, int maxdam /*stack -48*/, int dist /*stack 16*/, int mtype /*stack 20*/, int shift /*stack 24*/)
 // line 1103, offset 0x80139cc8
	/* begin block 1 */
		// Start line: 1104
		// Start offset: 0x80139CC8
		// Variables:
	// 		int hit; // $a3
	// 		int hper; // $a2
	// 		int tac; // $a1
	// 		long dam; // $s0
	// 		int blk; // $s5
	// 		int blkper; // $s4
	// 		int resper; // $s7
	/* end block 1 */
	// End offset: 0x8013A470
	// End Line: 1196

	/* begin block 2 */
		// Start line: 2361
	/* end block 2 */
	// End Line: 2362

uchar Plr2PlrMHit__FiiiiiiUc(int pnum,int p,int mindam,int maxdam,int dist,int mtype,int shift)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	long lVar6;
	long lVar7;
	int y;
	int iVar8;
	_125fake psfx;
	int dir;
	ulong dwDam;
	
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
LAB_80139e7c:
				dir = 0;
			}
		}
		else {
			if (4 < bVar2) goto LAB_80139e7c;
			dir = (int)plr[p]._pMagResist;
		}
	}
	lVar6 = random__Fil(0x45,100);
	if (missiledata[mtype].mType == '\0') {
		iVar8 = (uint)(ushort)plr[p]._pDexterity << 0x10;
		y = iVar8 >> 0x10;
		dist = (((int)plr[pnum]._pLevel -
						(plr[p]._pIAC + plr[p]._pIBonusAC +
						 (((y / 5 + (y >> 0x1f)) - (iVar8 >> 0x1f)) * 0x10000 >> 0x10) + -0x32)) +
					 (int)plr[pnum]._pDexterity + plr[pnum]._pIBonusToHit) - (dist * dist >> 1);
		if (plr[pnum]._pClass == '\x01') {
			dist = dist + 0x14;
		}
		bVar4 = dist < 5;
		if (plr[pnum]._pClass != '\0') goto LAB_8013a04c;
		dist = dist + 10;
	}
	else {
		dist = ((int)plr[pnum]._pMagic - ((int)plr[p]._pLevel * 2 + -0x32)) - dist;
		bVar4 = dist < 5;
		if (plr[pnum]._pClass != '\x02') goto LAB_8013a04c;
		dist = dist + 0x14;
	}
	bVar4 = dist < 5;
LAB_8013a04c:
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
	if ((plr[p]._pmode == 0) || (lVar6 = 100, plr[p]._pmode == 4)) {
		if (plr[p]._pBlockFlag == '\0') {
			lVar6 = 100;
		}
		else {
			lVar6 = random__Fil(0x49,100);
		}
	}
	if ((char)shift == '\x01') {
		lVar6 = 100;
	}
	iVar8 = plr[p]._pBaseToBlk + (int)plr[p]._pDexterity +
					((int)plr[pnum]._pLevel - (int)plr[p]._pLevel) * -2;
	y = iVar8;
	if (iVar8 < 0) {
		y = 0;
	}
	if (100 < iVar8) {
		y = 100;
	}
	if (mtype == 0x3f) {
		dwDam = plr[p]._pHitPoints / 3;
	}
	else {
		lVar7 = random__Fil(0x46,(maxdam - mindam) + 1);
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
		if (y <= lVar6) {
			if (pnum == myplr) {
				NetSendCmdDamage__FUcUcUl('\x01',(uchar)p,dwDam);
			}
			StartPlrHit__FiiUc(p,dwDam,'\0');
			return '\x01';
		}
		dir = GetDirection__Fiiii((int)plr[p]._px,(int)plr[p]._py,(int)plr[pnum]._px,(int)plr[pnum]._py)
		;
		StartPlrBlock__Fii(p,dir);
		return '\x01';
	}
	if (pnum == myplr) {
		NetSendCmdDamage__FUcUcUl('\x01',(uchar)p,dwDam - (int)(dwDam * dir) / 100);
	}
	cVar1 = plr[pnum]._pClass;
	if (cVar1 == '\0') {
		dir = (int)plr[pnum]._px;
		y = (int)plr[pnum]._py;
		psfx = PS_WARR69;
	}
	else {
		if (cVar1 == '\x01') {
			dir = (int)plr[pnum]._px;
			y = (int)plr[pnum]._py;
			psfx = PS_ROGUE69;
		}
		else {
			if (cVar1 != '\x02') {
				return '\x01';
			}
			dir = (int)plr[pnum]._px;
			y = (int)plr[pnum]._py;
			psfx = PS_MAGE69;
		}
	}
	PlaySfxLoc__Fiii(psfx,dir,y);
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckMissileCol__FiiiUciiUc(int i /*$a0*/, int mindam /*$s1*/, int maxdam /*$s2*/, unsigned char shift /*$s3*/, int mx /*stack 16*/, int my /*stack 20*/, int nodel /*stack 24*/)
 // line 1202, offset 0x8013a4a4
	/* begin block 1 */
		// Start line: 1203
		// Start offset: 0x8013A4A4
		// Variables:
	// 		int pn; // $v0
	// 		int oi; // $a1
	// 		struct MissileStruct *miss; // $s0
	// 		struct map_info *dm; // $s5
	/* end block 1 */
	// End offset: 0x8013A8F8
	// End Line: 1292

	/* begin block 2 */
		// Start line: 2609
	/* end block 2 */
	// End Line: 2610

void CheckMissileCol__FiiiUciiUc(int i,int mindam,int maxdam,uchar shift,int mx,int my,int nodel)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	uint local_24;
	int m;
	int m_00;
	uint m_01;
	map_info *pmVar4;
	
	pmVar4 = dung_map + my + mx * 0x6c;
	if ((0x5b < mx) || (0x5b < my)) {
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)missile[i]._mlid);
		return;
	}
	if ((missile[i]._miAnimType == '\x04') || (m = (int)missile[i]._misource, m == -1)) {
		m = (int)pmVar4->dMonster;
		if (0 < m) {
			if (missile[i]._miAnimType == '\x04') {
				uVar3 = MonsterMHit__FiiiiiiUc
													((int)missile[i]._misource,m + -1,mindam,maxdam,(int)missile[i]._midist,
													 (int)missile[i]._mitype,(uint)shift);
			}
			else {
				uVar3 = MonsterTrapHit__FiiiiiUc
													(m + -1,mindam,maxdam,(int)missile[i]._midist,(int)missile[i]._mitype,
													 (uint)shift);
			}
			if (uVar3 != '\0') {
				if ((char)nodel == '\0') {
					missile[i]._mirange = 0;
				}
				missile[i]._miHitFlag = '\x01';
			}
		}
		m = (int)pmVar4->dPlayer;
		if (m < 1) goto LAB_8013a808;
		m_00 = -1;
		sVar2 = missile[i]._midist;
		cVar1 = missile[i]._mitype;
		local_24 = (uint)(missile[i]._miAnimType == '\x04');
LAB_8013a7e4:
		uVar3 = PlayerMHit__FiiiiiiUcUc
											(m + -1,m_00,(int)sVar2,mindam,maxdam,(int)cVar1,(uint)shift,local_24);
	}
	else {
		if (missile[i]._micaster != 0) {
			if (((((monster[m]._mFlags & 0x10) != 0) &&
					 (m = (int)pmVar4->dMonster + -1, 0 < (int)pmVar4->dMonster)) &&
					((monster[m]._mFlags & 0x20) != 0)) &&
				 (uVar3 = MonsterTrapHit__FiiiiiUc
														(m,mindam,maxdam,(int)missile[i]._midist,(int)missile[i]._mitype,
														 (uint)shift), uVar3 != '\0')) {
				if ((char)nodel == '\0') {
					missile[i]._mirange = 0;
				}
				missile[i]._miHitFlag = '\x01';
			}
			m = (int)pmVar4->dPlayer;
			if (m < 1) goto LAB_8013a808;
			m_00 = (int)missile[i]._misource;
			sVar2 = missile[i]._midist;
			cVar1 = missile[i]._mitype;
			local_24 = 0;
			goto LAB_8013a7e4;
		}
		local_24 = SEXT24(pmVar4->dMonster);
		m_01 = local_24 - 1;
		if (((0 < (int)local_24) ||
				((m_01 = ~local_24, (int)local_24 < 0 && (monster[m_01]._mmode == '\x0f')))) &&
			 (uVar3 = MonsterMHit__FiiiiiiUc
													(m,m_01,mindam,maxdam,(int)missile[i]._midist,(int)missile[i]._mitype,
													 (uint)shift), uVar3 != '\0')) {
			if ((char)nodel == '\0') {
				missile[i]._mirange = 0;
			}
			missile[i]._miHitFlag = '\x01';
		}
		m = (int)pmVar4->dPlayer + -1;
		if (((int)pmVar4->dPlayer < 1) || (m == (int)missile[i]._misource)) goto LAB_8013a808;
		uVar3 = Plr2PlrMHit__FiiiiiiUc
											((int)missile[i]._misource,m,mindam,maxdam,(int)missile[i]._midist,
											 (int)missile[i]._mitype,(uint)shift);
	}
	if (uVar3 != '\0') {
		if ((char)nodel == '\0') {
			missile[i]._mirange = 0;
		}
		missile[i]._miHitFlag = '\x01';
	}
LAB_8013a808:
	local_24 = SEXT14(pmVar4->dObject);
	if (local_24 != 0) {
		m_01 = local_24 - 1;
		if ((int)local_24 < 1) {
			m_01 = ~local_24;
		}
		if (object[m_01]._oMissFlag == '\0') {
			if (object[m_01]._oBreak == '\x01') {
				BreakObject__Fii(-1,m_01);
			}
			if ((char)nodel == '\0') {
				missile[i]._mirange = 0;
			}
			missile[i]._miHitFlag = '\0';
		}
	}
	if (nMissileTable[(int)pmVar4->dPiece] != '\0') {
		if ((char)nodel == '\0') {
			missile[i]._mirange = 0;
		}
		missile[i]._miHitFlag = '\0';
	}
	if ((missile[i]._mirange == 0) && (missiledata[(int)missile[i]._mitype].miSFX != ~PS_WALK1)) {
		PlaySfxLoc__Fiii(missiledata[(int)missile[i]._mitype].miSFX,(int)missile[i]._mix,
										 (int)missile[i]._miy);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GetTableValue__FUci(unsigned char code /*$a0*/, int dir /*$a1*/)
 // line 1296, offset 0x8013a920
	/* begin block 1 */
		// Start line: 1297
		// Start offset: 0x8013A920
		// Variables:
	// 		unsigned char hicode; // $v1
	// 		unsigned char locode; // $a3
	/* end block 1 */
	// End offset: 0x8013A9AC
	// End Line: 1311

	/* begin block 2 */
		// Start line: 2815
	/* end block 2 */
	// End Line: 2816

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
 // line 1316, offset 0x8013a9b4
	/* begin block 1 */
		// Start line: 1317
		// Start offset: 0x8013A9B4
		// Variables:
	// 		int dir; // $s2
	/* end block 1 */
	// End offset: 0x8013AA68
	// End Line: 1336

	/* begin block 2 */
		// Start line: 2854
	/* end block 2 */
	// End Line: 2855

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
 // line 1340, offset 0x8013aa84
	/* begin block 1 */
		// Start line: 1341
		// Start offset: 0x8013AA84
	/* end block 1 */
	// End offset: 0x8013AAB8
	// End Line: 1344

	/* begin block 2 */
		// Start line: 2917
	/* end block 2 */
	// End Line: 2918

void SetMissDir__Fii(int mi,int dir)

{
	missile[mi]._mimfnum = (char)dir;
	SetMissAnim__Fii(mi,(uint)missile[mi]._miAnimType);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLArrow__Fiiiiiicii(int mi /*$s4*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$s0*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1496, offset 0x8013aac8
	/* begin block 1 */
		// Start line: 1497
		// Start offset: 0x8013AAC8
	/* end block 1 */
	// End offset: 0x8013AC84
	// End Line: 1517

	/* begin block 2 */
		// Start line: 3231
	/* end block 2 */
	// End Line: 3232

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
			goto LAB_8013abe8;
		}
		if (plr[id]._pClass == '\0') {
			v = ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x1b) + 0x1f;
			goto LAB_8013abe8;
		}
	}
	v = 0x20;
LAB_8013abe8:
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,v);
	v = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,v);
	cVar1 = missile[mi]._mitype;
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	if (cVar1 == '8') {
		v = 0x41;
	}
	else {
		v = 0x11;
	}
	v = AddLight__Fiii(sx,sy,v);
	missile[mi]._mlid = (char)v;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddArrow__Fiiiiiicii(int mi /*$s5*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s1*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1522, offset 0x8013aca8
	/* begin block 1 */
		// Start line: 1523
		// Start offset: 0x8013ACA8
		// Variables:
	// 		int av; // $v1
	/* end block 1 */
	// End offset: 0x8013AE3C
	// End Line: 1542

	/* begin block 2 */
		// Start line: 3290
	/* end block 2 */
	// End Line: 3291

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
			lVar1 = random__Fil(0x40,0x20);
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
	local_24 = GetDirection8__Fiiii(sx,sy,dx,dy);
	missile[mi]._miAnimFrame = (char)local_24 + '\x01';
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetVileMissPos__Fiii(int mi /*$s7*/, int dx /*$s6*/, int dy /*$fp*/)
 // line 1547, offset 0x8013ae64
	/* begin block 1 */
		// Start line: 1548
		// Start offset: 0x8013AE64
		// Variables:
	// 		int xx; // $s1
	// 		int yy; // $s4

		/* begin block 1.1 */
			// Start line: 1548
			// Start offset: 0x8013AE64
			// Variables:
		// 		int l; // $s2

			/* begin block 1.1.1 */
				// Start line: 1551
				// Start offset: 0x8013AEAC

				/* begin block 1.1.1.1 */
					// Start line: 1552
					// Start offset: 0x8013AEB8
					// Variables:
				// 		int j; // $s3

					/* begin block 1.1.1.1.1 */
						// Start line: 1552
						// Start offset: 0x8013AEB8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1553
							// Start offset: 0x8013AEC4
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8013AF20
						// End Line: 1561
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013AF20
					// End Line: 1561
				/* end block 1.1.1.1 */
				// End offset: 0x8013AF28
				// End Line: 1562
			/* end block 1.1.1 */
			// End offset: 0x8013AF28
			// End Line: 1562
		/* end block 1.1 */
		// End offset: 0x8013AF30
		// End Line: 1563
	/* end block 1 */
	// End offset: 0x8013AF54
	// End Line: 1566

	/* begin block 2 */
		// Start line: 3341
	/* end block 2 */
	// End Line: 3342

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
// void /*$ra*/ AddRndTeleport__Fiiiiiicii(int mi /*stack -64*/, int sx /*$s6*/, int sy /*$s7*/, int dx /*$fp*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1577, offset 0x8013af88
	/* begin block 1 */
		// Start line: 1578
		// Start offset: 0x8013AF88
		// Variables:
	// 		int pn; // $v0
	// 		int r1; // $s2
	// 		int r2; // $s1
	// 		unsigned char dirok; // $s3
	// 		int nTries; // $s5

		/* begin block 1.1 */
			// Start line: 1613
			// Start offset: 0x8013B164

			/* begin block 1.1.1 */
				// Start line: 1617
				// Start offset: 0x8013B1B4
				// Variables:
			// 		int oi; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8013B25C
			// End Line: 1622
		/* end block 1.1 */
		// End offset: 0x8013B2C4
		// End Line: 1629
	/* end block 1 */
	// End offset: 0x8013B2C4
	// End Line: 1629

	/* begin block 2 */
		// Start line: 3407
	/* end block 2 */
	// End Line: 3408

void AddRndTeleport__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	uchar uVar1;
	uchar uVar2;
	long lVar3;
	char cVar4;
	int iVar5;
	char cVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 1;
	do {
		uVar2 = '\x01';
		do {
			lVar3 = random__Fil(0x3a,3);
			iVar7 = lVar3 + 4;
			lVar3 = random__Fil(0x3a,3);
			iVar5 = lVar3 + 4;
			lVar3 = random__Fil(0x3a,2);
			if (lVar3 == 1) {
				iVar7 = -iVar7;
			}
			cVar6 = (char)iVar7;
			lVar3 = random__Fil(0x3a,2);
			if (lVar3 == 1) {
				iVar5 = -iVar5;
			}
			cVar4 = (char)iVar5;
			if ((((char)mienemy == '\0') && (plr[0].plractive != '\0')) && (plr[1].plractive != '\0')) {
				uVar2 = ChkPlrOffsets__Fiiii
													((sx + iVar7) * 8,(sy + iVar5) * 8,plr[id ^ 1U].WorldX,plr[id ^ 1U].WorldY
													);
			}
			uVar1 = setlevel;
		} while (uVar2 == '\0');
		iVar5 = sy + iVar5;
		iVar7 = sx + iVar7;
		if (((nSolidTable[(int)dung_map[iVar7 * 0x6c + iVar5].dPiece] == '\0') &&
				(dung_map[iVar7 * 0x6c + iVar5].dObject == '\0')) &&
			 (dung_map[iVar7 * 0x6c + iVar5].dMonster == 0)) goto LAB_8013b164;
		iVar8 = iVar8 + 1;
		cVar6 = '\0';
	} while (iVar8 < 0x1f5);
	cVar4 = '\0';
LAB_8013b164:
	missile[mi]._mirange = 2;
	missile[mi]._miVar1 = 0;
	if ((uVar1 == '\0') || (setlvlnum != '\x05')) {
		missile[mi]._mix = (char)sx + cVar6;
		missile[mi]._miy = (char)sy + cVar4;
		if ((char)mienemy == '\0') {
			UseMana__Fii(id,10);
		}
	}
	else {
		if ((uint)(byte)object[(int)dung_map[dx * 0x6c + dy].dObject + -1]._otype - 0x54 < 2) {
			missile[mi]._mix = (char)dx;
			missile[mi]._miy = (char)dy;
			uVar2 = PosOkPlayer__Fiii(myplr,dx,dy);
			if (uVar2 == '\0') {
				GetVileMissPos__Fiii(mi,dx,dy);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFirebolt__Fiiiiiicii(int mi /*$s1*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s0*/, int dy /*stack 16*/, int midir /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1639, offset 0x8013b2f8
	/* begin block 1 */
		// Start line: 1640
		// Start offset: 0x8013B2F8
		// Variables:
	// 		int sp; // $v1
	// 		int i; // $a0
	// 		int mx; // $v0
	/* end block 1 */
	// End offset: 0x8013B53C
	// End Line: 1682

	/* begin block 2 */
		// Start line: 3567
	/* end block 2 */
	// End Line: 3568

void AddFirebolt__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int micaster,int id,int dam)

{
	int iVar1;
	int v;
	uint uVar2;
	int *piVar3;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	v = 0x1a;
	if ((char)micaster == '\0') {
		v = 0;
		if (0 < nummissiles) {
			piVar3 = &missileactive;
			do {
				iVar1 = *piVar3;
				if (((missile[iVar1]._mitype == '\x02') && ((int)missile[iVar1]._misource == id)) &&
					 ((int)missile[iVar1]._miVar3 == mi)) break;
				v = v + 1;
				piVar3 = piVar3 + 1;
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
	uVar2 = missile[mi]._miyvel;
	missile[mi]._mixvel = (int)(missile[mi]._mixvel + ((uint)missile[mi]._mixvel >> 0x1f)) >> 1;
	missile[mi]._miyvel = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
	v = GetDirection8__Fiiii(sx,sy,dx,dy);
	SetMissDir__Fii(mi,v);
	missile[mi]._mirange = 0x100;
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	v = AddLight__Fiii(sx,sy,0x12);
	missile[mi]._mlid = (char)v;
	SetParticle = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMagmaball__Fiiiiiicii(int mi /*$s1*/, int sx /*$s2*/, int sy /*$s3*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1689, offset 0x8013b564
	/* begin block 1 */
		// Start line: 1690
		// Start offset: 0x8013B564
	/* end block 1 */
	// End offset: 0x8013B658
	// End Line: 1704

	/* begin block 2 */
		// Start line: 3675
	/* end block 2 */
	// End Line: 3676

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
	iVar1 = AddLight__Fiii(sx,sy,0x34);
	missile[mi]._mlid = (char)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTeleport__Fiiiiiicii(int mi /*$t4*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1723, offset 0x8013b678
	/* begin block 1 */
		// Start line: 1724
		// Start offset: 0x8013B678
		// Variables:
	// 		int i; // $t2
	// 		int pn; // $v0
	// 		int k; // $t3
	// 		int l; // $v0
	// 		int j; // $t1
	// 		int tx; // $a1
	// 		int ty; // $a2
	// 		int CrawlNum[6]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8013B85C
	// End Line: 1760

	/* begin block 2 */
		// Start line: 3749
	/* end block 2 */
	// End Line: 3750

void AddTeleport__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int iVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	int iVar5;
	int local_20;
	undefined4 local_1c;
	undefined4 local_18;
	undefined4 local_14;
	undefined4 local_10;
	undefined4 local_c;
	
	local_20 = DAT_80129d90;
	local_1c = DAT_80129d94;
	local_18 = DAT_80129d98;
	local_14 = DAT_80129d9c;
	local_10 = DAT_80129da0;
	local_c = DAT_80129da4;
	iVar5 = 0;
	missile[mi]._miDelFlag = '\x01';
	iVar1 = 0;
	do {
		uVar4 = (uint)(byte)CrawlTable[*(int *)((int)&local_20 + iVar1)];
		iVar3 = *(int *)((int)&local_20 + iVar1) + 1;
		if (CrawlTable[*(int *)((int)&local_20 + iVar1)] != 0) {
			do {
				iVar1 = dx + (int)CrawlTable[iVar3];
				iVar2 = dy + (int)CrawlTable[iVar3 + 1];
				if (((iVar1 - 1U < 0x5b) && (iVar2 - 1U < 0x5b)) &&
					 (((uint)nSolidTable[(int)dung_map[iVar1 * 0x6c + iVar2].dPiece] |
						 (int)dung_map[iVar1 * 0x6c + iVar2].dMonster |
						 (int)dung_map[iVar1 * 0x6c + iVar2].dObject |
						(int)dung_map[iVar1 * 0x6c + iVar2].dPlayer) == 0)) {
					missile[mi]._mix = (char)iVar1;
					missile[mi]._miy = (char)iVar2;
					missile[mi]._misx = (char)iVar1;
					missile[mi]._misy = (char)iVar2;
					missile[mi]._miDelFlag = '\0';
					iVar5 = 6;
					break;
				}
				uVar4 = uVar4 - 1;
				iVar3 = iVar3 + 2;
			} while (0 < (int)uVar4);
		}
		iVar5 = iVar5 + 1;
		iVar1 = iVar5 * 4;
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
 // line 1767, offset 0x8013b870
	/* begin block 1 */
		// Start line: 1768
		// Start offset: 0x8013B870
	/* end block 1 */
	// End offset: 0x8013B99C
	// End Line: 1784

	/* begin block 2 */
		// Start line: 3840
	/* end block 2 */
	// End Line: 3841

void AddLightball__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	missile[mi]._midam = dam;
	lVar1 = random__Fil(0x3f,8);
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
	iVar2 = AddLight__Fiii(sx,sy,0x44);
	missile[mi]._mlid = (char)iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFirewall__Fiiiiiicii(int mi /*$s6*/, int sx /*$s1*/, int sy /*$s3*/, int dx /*$s4*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1789, offset 0x8013b9c4
	/* begin block 1 */
		// Start line: 1790
		// Start offset: 0x8013B9C4
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8013BB80
	// End Line: 1806

	/* begin block 2 */
		// Start line: 3887
	/* end block 2 */
	// End Line: 3888

void AddFirewall__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	long lVar2;
	long lVar3;
	int iVar4;
	int iVar5;
	
	lVar2 = random__Fil(0x35,10);
	lVar3 = random__Fil(0x35,10);
	missile[mi]._midam = (lVar2 + lVar3 + (int)plr[id]._pLevel + 2) * 0x10 >> 1;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,0x10);
	iVar5 = (int)missile[mi]._mispllvl;
	missile[mi]._mirange = 10;
	while (0 < iVar5) {
		iVar5 = iVar5 + -1;
		missile[mi]._mirange = missile[mi]._mirange + 10;
	}
	iVar4 = plr[id]._pISplDur;
	iVar5 = missile[mi]._mirange;
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._miVar2 = 0;
	iVar5 = (iVar5 + (iVar4 * iVar5 >> 7)) * 0x10;
	missile[mi]._mirange = iVar5;
	missile[mi]._miVar1 = (short)iVar5 - (short)cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFireball__Fiiiiiicii(int mi /*$s2*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s5*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1814, offset 0x8013bbac
	/* begin block 1 */
		// Start line: 1815
		// Start offset: 0x8013BBAC
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x8013BDD8
	// End Line: 1853

	/* begin block 2 */
		// Start line: 3961
	/* end block 2 */
	// End Line: 3962

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
		lVar1 = random__Fil(0x3c,10);
		lVar2 = random__Fil(0x3c,10);
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
	v = AddLight__Fiii(sx,sy,0x13);
	missile[mi]._mlid = (char)v;
	SetParticle = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLightctrl__Fiiiiiicii(int mi /*$s0*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$s3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1860, offset 0x8013be08
	/* begin block 1 */
		// Start line: 1861
		// Start offset: 0x8013BE08
	/* end block 1 */
	// End offset: 0x8013BECC
	// End Line: 1872

	/* begin block 2 */
		// Start line: 4063
	/* end block 2 */
	// End Line: 4064

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
	lVar1 = random__Fil(0x34,8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLightning__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1875, offset 0x8013bef0
	/* begin block 1 */
		// Start line: 1876
		// Start offset: 0x8013BEF0
	/* end block 1 */
	// End offset: 0x8013C094
	// End Line: 1903

	/* begin block 2 */
		// Start line: 4099
	/* end block 2 */
	// End Line: 4100

void AddLightning__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	missile[mi]._misx = (char)dx;
	missile[mi]._misy = (char)dy;
	if (-1 < midir) {
		missile[mi]._mixoff = missile[midir]._mixoff;
		missile[mi]._miyoff = missile[midir]._miyoff;
		missile[mi]._mitxoff = missile[midir]._mitxoff;
		missile[mi]._mityoff = missile[midir]._mityoff;
	}
	lVar1 = random__Fil(0x34,8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	if (midir < 0) {
LAB_8013c040:
		iVar2 = 8;
	}
	else {
		if (((char)mienemy != '\x01') && (id != -1)) {
			missile[mi]._mirange = ((int)((uint)(byte)missile[mi]._mispllvl << 0x18) >> 0x19) + 6;
			goto LAB_8013c060;
		}
		if ((midir < 0) || (id == -1)) goto LAB_8013c040;
		iVar2 = 10;
	}
	missile[mi]._mirange = iVar2;
LAB_8013c060:
	iVar2 = AddLight__Fiii((int)missile[mi]._mix,(int)missile[mi]._miy,0x43);
	missile[mi]._mlid = (char)iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMisexp__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$s2*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1911, offset 0x8013c0b8
	/* begin block 1 */
		// Start line: 1912
		// Start offset: 0x8013C0B8
	/* end block 1 */
	// End offset: 0x8013C2A8
	// End Line: 1936

	/* begin block 2 */
		// Start line: 4189
	/* end block 2 */
	// End Line: 4190

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
	missile[mi]._mitxoff = missile[dx]._mitxoff;
	lVar2 = missile[dx]._mityoff;
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._miVar1 = 0;
	missile[mi]._mirange = (int)cVar1;
	missile[mi]._mityoff = lVar2;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckIfTrig__Fii(int x /*$s4*/, int y /*$s5*/)
 // line 1959, offset 0x8013c2c4
	/* begin block 1 */
		// Start line: 1960
		// Start offset: 0x8013C2C4
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8013C380
	// End Line: 1968

	/* begin block 2 */
		// Start line: 4299
	/* end block 2 */
	// End Line: 4300

uchar CheckIfTrig__Fii(int x,int y)

{
	bool bVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = 0;
	if (0 < numtrigs) {
		piVar3 = &trigs._ty;
		iVar5 = 0;
		do {
			iVar2 = *(int *)((int)&trigs._tx + iVar5);
			bVar1 = false;
			if ((x == iVar2) && (y == *piVar3)) {
				return '\x01';
			}
			iVar2 = abs(iVar2 - x);
			if (iVar2 < 2) {
				iVar2 = abs(*piVar3 - y);
				bVar1 = iVar2 < 2;
			}
			piVar3 = piVar3 + 4;
			if (bVar1) {
				return '\x01';
			}
			iVar4 = iVar4 + 1;
			iVar5 = iVar5 + 0x10;
		} while (iVar4 < numtrigs);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTown__Fiiiiiicii(int mi /*$s6*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$s7*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 1971, offset 0x8013c3a8
	/* begin block 1 */
		// Start line: 1972
		// Start offset: 0x8013C3A8
		// Variables:
	// 		int i; // $s1
	// 		int pn; // $a0
	// 		int k; // $s5
	// 		int l; // $v0
	// 		int j; // $s2
	// 		int tx; // $s3
	// 		int ty; // $s4
	// 		int mx; // $v1
	// 		int CrawlNum[6]; // stack offset -72
	/* end block 1 */
	// End offset: 0x8013C798
	// End Line: 2037

	/* begin block 2 */
		// Start line: 4327
	/* end block 2 */
	// End Line: 4328

void AddTown__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	byte bVar2;
	uchar x;
	int iVar3;
	int *piVar4;
	uint uVar5;
	int iVar6;
	int x_00;
	uchar y;
	int y_00;
	int iVar7;
	int local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	undefined4 local_38;
	undefined4 local_34;
	
	x = (uchar)dx;
	y = (uchar)dy;
	local_48 = DAT_80129d90;
	local_44 = DAT_80129d94;
	local_40 = DAT_80129d98;
	local_3c = DAT_80129d9c;
	local_38 = DAT_80129da0;
	local_34 = DAT_80129da4;
	x_00 = 0;
	y_00 = 0;
	if (currlevel == '\0') {
		missile[mi]._mix = x;
		missile[mi]._miy = y;
		missile[mi]._misx = x;
		missile[mi]._misy = y;
		missile[mi]._miDelFlag = '\0';
	}
	else {
		missile[mi]._miDelFlag = '\x01';
		iVar7 = 0;
		iVar3 = 0;
		do {
			uVar5 = (uint)(byte)CrawlTable[*(int *)((int)&local_48 + iVar3)];
			iVar6 = *(int *)((int)&local_48 + iVar3) + 1;
			if (CrawlTable[*(int *)((int)&local_48 + iVar3)] != 0) {
				do {
					x_00 = dx + (int)CrawlTable[iVar6];
					y_00 = dy + (int)CrawlTable[iVar6 + 1];
					if ((((x_00 - 1U < 0x5b) && (y_00 - 1U < 0x5b)) &&
							(((uint)nSolidTable[(int)dung_map[x_00 * 0x6c + y_00].dPiece] |
								(int)dung_map[x_00 * 0x6c + y_00].dObject |
								(uint)nMissileTable[(int)dung_map[x_00 * 0x6c + y_00].dPiece] |
								(int)dung_map[x_00 * 0x6c + y_00].dPlayer |
							 (int)dung_map[x_00 * 0x6c + y_00].dMissile) == 0)) &&
						 (x = CheckIfTrig__Fii(x_00,y_00), x == '\0')) {
						missile[mi]._mix = (char)x_00;
						missile[mi]._miy = (char)y_00;
						missile[mi]._misx = (char)x_00;
						missile[mi]._misy = (char)y_00;
						missile[mi]._miDelFlag = '\0';
						iVar7 = 6;
						break;
					}
					uVar5 = uVar5 - 1;
					iVar6 = iVar6 + 2;
				} while (0 < (int)uVar5);
			}
			y = (uchar)y_00;
			x = (uchar)x_00;
			iVar7 = iVar7 + 1;
			iVar3 = iVar7 * 4;
		} while (iVar7 < 6);
	}
	x_00 = nummissiles;
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._mirange = 100;
	missile[mi]._miVar2 = 0;
	missile[mi]._miVar1 = 100 - (short)cVar1;
	y_00 = 0;
	if (0 < x_00) {
		piVar4 = &missileactive;
		do {
			iVar3 = *piVar4;
			if (((missile[iVar3]._mitype == '\n') && (iVar3 != mi)) &&
				 ((int)missile[iVar3]._misource == id)) {
				missile[iVar3]._mirange = 0;
			}
			y_00 = y_00 + 1;
			piVar4 = piVar4 + 1;
		} while (y_00 < x_00);
	}
	PutMissile__Fi(mi);
	if (((id == myplr) && (missile[mi]._miDelFlag == '\0')) && (currlevel != '\0')) {
		bVar2 = setlvlnum;
		if (setlevel == '\0') {
			bVar2 = currlevel;
		}
		NetSendCmdLocParam3__FUcUcUcUcUsUsUs
							('\x01','8',x,y,(uint)bVar2,(uint)leveltype,(uint)(setlevel != '\0'));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlash__Fiiiiiicii(int mi /*$s2*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2044, offset 0x8013c7cc
	/* begin block 1 */
		// Start line: 2045
		// Start offset: 0x8013C7CC
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8013C9B8
	// End Line: 2064

	/* begin block 2 */
		// Start line: 4480
	/* end block 2 */
	// End Line: 4481

void AddFlash__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	if ((char)mienemy == '\0') {
		if (id == -1) {
			missile[mi]._midam = (uint)(currlevel >> 1);
		}
		else {
			missile[mi]._midam = 0;
			iVar2 = 0;
			if (-1 < plr[id]._pLevel) {
				do {
					lVar1 = random__Fil(0x37,0x14);
					missile[mi]._midam = missile[mi]._midam + 1 + lVar1;
					iVar2 = iVar2 + 1;
				} while (iVar2 <= (int)plr[id]._pLevel);
			}
			iVar2 = (int)missile[mi]._mispllvl;
			while (0 < iVar2) {
				iVar2 = iVar2 + -1;
				missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
			}
			missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 1);
			UseMana__Fii(id,4);
		}
	}
	else {
		missile[mi]._midam = (int)monster[id].mLevel << 1;
	}
	missile[mi]._mirange = 0x13;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlash2__Fiiiiiicii(int mi /*$s2*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2072, offset 0x8013c9dc
	/* begin block 1 */
		// Start line: 2073
		// Start offset: 0x8013C9DC
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8013CB9C
	// End Line: 2100

	/* begin block 2 */
		// Start line: 4543
	/* end block 2 */
	// End Line: 4544

void AddFlash2__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	if ((char)mienemy == '\0') {
		if (id == -1) {
			missile[mi]._midam = (uint)(currlevel >> 1);
		}
		else {
			missile[mi]._midam = 0;
			iVar2 = 0;
			if (-1 < plr[id]._pLevel) {
				do {
					lVar1 = random__Fil(0x38,2);
					missile[mi]._midam = missile[mi]._midam + 1 + lVar1;
					iVar2 = iVar2 + 1;
				} while (iVar2 <= (int)plr[id]._pLevel);
			}
			iVar2 = (int)missile[mi]._mispllvl;
			while (0 < iVar2) {
				iVar2 = iVar2 + -1;
				missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 3);
			}
			missile[mi]._midam = missile[mi]._midam + (missile[mi]._midam >> 1);
		}
	}
	missile[mi]._miPreFlag = '\x01';
	missile[mi]._mirange = 0x13;
	fadetor = ' ';
	fadetog = ' ';
	fadetob = ' ';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddManashield__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2103, offset 0x8013cbbc
	/* begin block 1 */
		// Start line: 2104
		// Start offset: 0x8013CBBC
	/* end block 1 */
	// End offset: 0x8013CC74
	// End Line: 2114

	/* begin block 2 */
		// Start line: 4611
	/* end block 2 */
	// End Line: 4612

void AddManashield__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	
	missile[mi]._mirange = (int)plr[id]._pLevel * 0x30;
	missile[mi]._miVar1 = (short)plr[id]._pHitPoints;
	lVar1 = plr[id]._pHPBase;
	missile[mi]._miVar8 = -1;
	missile[mi]._miVar2 = (short)lVar1;
	if ((mienemy & 0xffU) == 0) {
		UseMana__Fii(id,0xb);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFiremove__Fiiiiiicii(int mi /*$s0*/, int sx /*$s2*/, int sy /*$s4*/, int dx /*$s5*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2122, offset 0x8013cc84
	/* begin block 1 */
		// Start line: 2123
		// Start offset: 0x8013CC84
	/* end block 1 */
	// End offset: 0x8013CDB8
	// End Line: 2135

	/* begin block 2 */
		// Start line: 4664
	/* end block 2 */
	// End Line: 4665

void AddFiremove__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	long lVar2;
	
	lVar2 = random__Fil(0x3b,10);
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
// void /*$ra*/ AddGuardian__Fiiiiiicii(int mi /*stack -72*/, int sx /*stack -64*/, int sy /*stack -56*/, int dx /*stack -48*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2139, offset 0x8013cde0
	/* begin block 1 */
		// Start line: 2140
		// Start offset: 0x8013CDE0
		// Variables:
	// 		int i; // $s4
	// 		int pn; // $s3
	// 		int k; // $s7
	// 		int l; // $v0
	// 		int j; // $s6
	// 		int tx; // $s0
	// 		int ty; // $s1
	// 		int CrawlNum[6]; // stack offset -96
	/* end block 1 */
	// End offset: 0x8013D218
	// End Line: 2192

	/* begin block 2 */
		// Start line: 4710
	/* end block 2 */
	// End Line: 4711

void AddGuardian__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	char cVar2;
	short sVar3;
	int iVar4;
	uchar uVar5;
	long lVar6;
	int y2;
	int x2;
	uint uVar7;
	int iVar8;
	int iVar9;
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
	
	local_60 = DAT_80129d90;
	local_5c = DAT_80129d94;
	local_58 = DAT_80129d98;
	local_54 = DAT_80129d9c;
	local_50 = DAT_80129da0;
	local_4c = DAT_80129da4;
	local_48 = mi;
	local_40 = sx;
	local_38 = sy;
	local_30 = dx;
	lVar6 = random__Fil(0x3e,10);
	iVar4 = local_48;
	x2 = (int)missile[local_48]._mispllvl;
	missile[local_48]._midam = lVar6 + ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x19) + 1;
	while (0 < x2) {
		x2 = x2 + -1;
		missile[local_48]._midam = missile[local_48]._midam + (missile[local_48]._midam >> 3);
	}
	iVar9 = 0;
	missile[local_48]._miDelFlag = '\x01';
	x2 = 0;
	do {
		uVar7 = (uint)(byte)CrawlTable[*(int *)((int)&local_60 + x2)];
		iVar8 = *(int *)((int)&local_60 + x2) + 1;
		if (CrawlTable[*(int *)((int)&local_60 + x2)] != 0) {
			do {
				x2 = local_30 + (int)CrawlTable[iVar8];
				y2 = dy + (int)CrawlTable[iVar8 + 1];
				sVar3 = dung_map[x2 * 0x6c + y2].dPiece;
				if ((((x2 - 1U < 0x5b) && (y2 - 1U < 0x5b)) &&
						(uVar5 = LineClear__Fiiii(local_40,local_38,x2,y2), uVar5 != '\0')) &&
					 (((uint)nSolidTable[(int)sVar3] | (int)dung_map[x2 * 0x6c + y2].dMonster |
						 (int)dung_map[x2 * 0x6c + y2].dObject | (uint)nMissileTable[(int)sVar3] |
						(int)dung_map[x2 * 0x6c + y2].dMissile) == 0)) {
					missile[iVar4]._mix = (char)x2;
					missile[iVar4]._miy = (char)y2;
					missile[iVar4]._misx = (char)x2;
					missile[iVar4]._misy = (char)y2;
					missile[iVar4]._miDelFlag = '\0';
					UseMana__Fii(id,0xd);
					iVar9 = 6;
					break;
				}
				uVar7 = uVar7 - 1;
				iVar8 = iVar8 + 2;
			} while (0 < (int)uVar7);
		}
		iVar8 = local_48;
		iVar9 = iVar9 + 1;
		x2 = iVar9 * 4;
		if (5 < iVar9) {
			if (missile[local_48]._miDelFlag != '\x01') {
				cVar1 = missile[local_48]._mix;
				cVar2 = missile[local_48]._miy;
				missile[local_48]._misource = (char)id;
				x2 = AddLight__Fiii((int)cVar1,(int)cVar2,0x71);
				missile[iVar8]._mlid = (char)x2;
				x2 = ((int)((uint)(byte)plr[id]._pLevel << 0x18) >> 0x19) + (int)missile[iVar8]._mispllvl;
				missile[iVar8]._mirange = x2;
				x2 = x2 + (plr[id]._pISplDur * x2 >> 7);
				missile[iVar8]._mirange = x2;
				if (0x1e < x2) {
					missile[iVar8]._mirange = 0x1e;
				}
				x2 = missile[iVar8]._mirange << 4;
				missile[iVar8]._mirange = x2;
				if (x2 < 0x1e) {
					missile[iVar8]._mirange = 0x1e;
				}
				cVar1 = missile[iVar8]._miAnimLen;
				missile[iVar8]._miVar3 = 1;
				x2 = missile[iVar8]._mirange;
				missile[iVar8]._miVar2 = 0;
				missile[iVar8]._miVar1 = (short)x2 - (short)cVar1;
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddChain__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2200, offset 0x8013d24c
	/* begin block 1 */
		// Start line: 2201
		// Start offset: 0x8013D24C
	/* end block 1 */
	// End offset: 0x8013D298
	// End Line: 2208

	/* begin block 2 */
		// Start line: 4848
	/* end block 2 */
	// End Line: 4849

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
 // line 2343, offset 0x8013d2a8
	/* begin block 1 */
		// Start line: 2344
		// Start offset: 0x8013D2A8
		// Variables:
	// 		struct AnimStruct *anim; // $s0
	/* end block 1 */
	// End offset: 0x8013D444
	// End Line: 2381

	/* begin block 2 */
		// Start line: 5142
	/* end block 2 */
	// End Line: 5143

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
	if (monster[id]._uniqtype != '\0') {
		missile[mi]._miUniqTrans = monster[id]._uniqtrans + '\x01';
		missile[mi]._mlid = monster[id].mlid;
	}
	missile[mi]._mirange = 0x100;
	PutMissile__Fi(mi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlare__Fiiiiiicii(int mi /*$s3*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2418, offset 0x8013d464
	/* begin block 1 */
		// Start line: 2419
		// Start offset: 0x8013D464
	/* end block 1 */
	// End offset: 0x8013D734
	// End Line: 2464

	/* begin block 2 */
		// Start line: 5305
	/* end block 2 */
	// End Line: 5306

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
		r = 0x41;
LAB_8013d5ac:
		r = AddLight__Fiii(sx,sy,r);
		missile[mi]._mlid = (char)r;
	}
	else {
		if (bVar1 < 0x29) {
			if (bVar1 == 0x16) {
LAB_8013d564:
				r = AddLight__Fiii(sx,sy,0x11);
				missile[mi]._mlid = (char)r;
				goto LAB_8013d5e8;
			}
		}
		else {
			if (bVar1 == 0x2a) {
				r = 0x31;
				goto LAB_8013d5ac;
			}
			if (bVar1 == 0x2c) goto LAB_8013d564;
		}
		DBG_Error((char *)0x0,"source/MISSILES.cpp",0x986);
	}
LAB_8013d5e8:
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
// void /*$ra*/ AddAcid__Fiiiiiicii(int mi /*$s0*/, int sx /*$s2*/, int sy /*$s3*/, int dx /*$s4*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2471, offset 0x8013d75c
	/* begin block 1 */
		// Start line: 2472
		// Start offset: 0x8013D75C
	/* end block 1 */
	// End offset: 0x8013D838
	// End Line: 2484

	/* begin block 2 */
		// Start line: 5423
	/* end block 2 */
	// End Line: 5424

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
	missile[mi]._mirange = ((uint)bVar1 + 1) * 5 + 0xf;
	PutMissile__Fi(mi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddAcidpud__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2553, offset 0x8013d860
	/* begin block 1 */
		// Start line: 2554
		// Start offset: 0x8013D860
		// Variables:
	// 		int monst; // $s1
	/* end block 1 */
	// End offset: 0x8013D91C
	// End Line: 2578

	/* begin block 2 */
		// Start line: 5598
	/* end block 2 */
	// End Line: 5599

void AddAcidpud__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	byte bVar2;
	long lVar3;
	
	cVar1 = missile[mi]._misource;
	missile[mi]._mixvel = 0;
	missile[mi]._miyvel = 0;
	missile[mi]._mixoff = '\0';
	missile[mi]._miyoff = '\0';
	missile[mi]._miLightFlag = '\x01';
	lVar3 = random__Fil(0x32,0xf);
	bVar2 = monster[(int)cVar1]._mint;
	missile[mi]._miPreFlag = '\x01';
	missile[mi]._mirange = lVar3 + ((uint)bVar2 + 1) * 0x28;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStone__Fiiiiiicii(int mi /*$t5*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2581, offset 0x8013d938
	/* begin block 1 */
		// Start line: 2582
		// Start offset: 0x8013D938
		// Variables:
	// 		int i; // $a2
	// 		int j; // $t1
	// 		int k; // $t3
	// 		int l; // $v0
	// 		int tx; // $t0
	// 		int ty; // $t2
	// 		int mid; // $a0
	// 		int CrawlNum[6]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8013DC20
	// End Line: 2639

	/* begin block 2 */
		// Start line: 5699
	/* end block 2 */
	// End Line: 5700

void AddStone__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	byte bVar2;
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
	
	local_20 = DAT_80129d90;
	local_1c = DAT_80129d94;
	local_18 = DAT_80129d98;
	local_14 = DAT_80129d9c;
	local_10 = DAT_80129da0;
	local_c = DAT_80129da4;
	iVar8 = 0;
	iVar10 = 0;
	iVar11 = 0;
	missile[mi]._misource = (char)id;
	iVar5 = 0;
	do {
		uVar7 = (uint)(byte)CrawlTable[*(int *)((int)&local_20 + iVar5)];
		iVar9 = *(int *)((int)&local_20 + iVar5) + 1;
		if (CrawlTable[*(int *)((int)&local_20 + iVar5)] != 0) {
			do {
				iVar8 = dx + (int)CrawlTable[iVar9];
				iVar10 = dy + (int)CrawlTable[iVar9 + 1];
				if ((iVar8 - 1U < 0x5b) && (iVar10 - 1U < 0x5b)) {
					uVar6 = SEXT24(dung_map[iVar8 * 0x6c + iVar10].dMonster);
					if ((int)uVar6 < 1) {
						uVar6 = ~uVar6;
					}
					else {
						uVar6 = uVar6 - 1;
					}
					if ((((3 < (int)uVar6) && (monster[uVar6]._mAi != '\x1b')) &&
							(bVar2 = monster[uVar6]._mmode, 1 < (uint)bVar2 - 8)) && (bVar2 != 0xe)) {
						uVar7 = 0xffffff9d;
						missile[mi]._miVar1 = (short)(char)bVar2;
						missile[mi]._miVar2 = (short)uVar6;
						monster[uVar6]._mmode = '\x0f';
						iVar11 = 6;
						break;
					}
				}
				uVar7 = uVar7 - 1;
				iVar9 = iVar9 + 2;
			} while (0 < (int)uVar7);
		}
		iVar11 = iVar11 + 1;
		iVar5 = iVar11 * 4;
		if (5 < iVar11) {
			if (uVar7 == 0xffffff9d) {
				missile[mi]._mix = (char)iVar8;
				cVar3 = missile[mi]._mix;
				cVar1 = missile[mi]._mispllvl;
				missile[mi]._miy = (char)iVar10;
				cVar4 = missile[mi]._miy;
				iVar5 = (int)cVar1 + 6;
				missile[mi]._misx = cVar3;
				missile[mi]._misy = cVar4;
				missile[mi]._mirange = iVar5;
				iVar5 = iVar5 + (plr[id]._pISplDur * iVar5 >> 7);
				missile[mi]._mirange = iVar5;
				if (0xf < iVar5) {
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
// void /*$ra*/ AddGolem__Fiiiiiicii(int mi /*$t1*/, int sx /*$t5*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2656, offset 0x8013dc30
	/* begin block 1 */
		// Start line: 2657
		// Start offset: 0x8013DC30
		// Variables:
	// 		int i; // $a1
	// 		int mx; // $v1
	// 		int CrawlNum[6]; // stack offset -40
	/* end block 1 */
	// End offset: 0x8013DDD4
	// End Line: 2691

	/* begin block 2 */
		// Start line: 5869
	/* end block 2 */
	// End Line: 5870

void AddGolem__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	
	missile[mi]._miDelFlag = '\0';
	iVar2 = 0;
	if (0 < nummissiles) {
		piVar3 = &missileactive;
		do {
			iVar1 = *piVar3;
			if (((missile[iVar1]._mitype == '!') && (iVar1 != mi)) &&
				 ((int)missile[iVar1]._misource == id)) {
				missile[mi]._miDelFlag = '\x01';
				return;
			}
			iVar2 = iVar2 + 1;
			piVar3 = piVar3 + 1;
		} while (iVar2 < nummissiles);
	}
	missile[mi]._miVar1 = (short)sx;
	missile[mi]._miVar2 = (short)sy;
	missile[mi]._miVar4 = (short)dx;
	missile[mi]._miVar5 = (short)dy;
	if (((monster[id]._mx != '\x01') || (monster[id]._my != '\0')) && (id == myplr)) {
		M_StartKill__Fii(id,id);
	}
	UseMana__Fii(id,0x15);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBoom__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2780, offset 0x8013dde8
	/* begin block 1 */
		// Start line: 2781
		// Start offset: 0x8013DDE8
	/* end block 1 */
	// End offset: 0x8013DE74
	// End Line: 2792

	/* begin block 2 */
		// Start line: 6119
	/* end block 2 */
	// End Line: 6120

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
	missile[mi]._mirange = (int)cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHeal__Fiiiiiicii(int mi /*$s4*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2797, offset 0x8013de7c
	/* begin block 1 */
		// Start line: 2798
		// Start offset: 0x8013DE7C
		// Variables:
	// 		int i; // $s0
	// 		long l; // $s1
	/* end block 1 */
	// End offset: 0x8013E080
	// End Line: 2817

	/* begin block 2 */
		// Start line: 6169
	/* end block 2 */
	// End Line: 6170

void AddHeal__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	lVar1 = random__Fil(0x39,10);
	iVar4 = (lVar1 + 1) * 0x40;
	iVar3 = 0;
	if ('\0' < plr[id]._pLevel) {
		do {
			lVar1 = random__Fil(0x39,4);
			iVar4 = iVar4 + (lVar1 + 1) * 0x40;
			iVar3 = iVar3 + 1;
		} while (iVar3 < (int)plr[id]._pLevel);
	}
	iVar3 = 0;
	if ('\0' < missile[mi]._mispllvl) {
		do {
			lVar1 = random__Fil(0x39,6);
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
 // line 2824, offset 0x8013e0a4
	/* begin block 1 */
		// Start line: 2825
		// Start offset: 0x8013E0A4
	/* end block 1 */
	// End offset: 0x8013E0F8
	// End Line: 2831

	/* begin block 2 */
		// Start line: 6237
	/* end block 2 */
	// End Line: 6238

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
 // line 2838, offset 0x8013e10c
	/* begin block 1 */
		// Start line: 2839
		// Start offset: 0x8013E10C
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8013E30C
	// End Line: 2869

	/* begin block 2 */
		// Start line: 6272
	/* end block 2 */
	// End Line: 6273

void AddElement__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	long lVar1;
	long lVar2;
	int dir;
	
	if ((sx == dx) && (sy == dy)) {
		dx = sx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	lVar1 = random__Fil(0x3c,10);
	lVar2 = random__Fil(0x3c,10);
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
	dir = AddLight__Fiii(sx,sy,0x32);
	missile[mi]._mlid = (char)dir;
	UseMana__Fii(id,0x1d);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddIdentify__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2876, offset 0x8013e338
	/* begin block 1 */
		// Start line: 2877
		// Start offset: 0x8013E338
	/* end block 1 */
	// End offset: 0x8013E3D0
	// End Line: 2886

	/* begin block 2 */
		// Start line: 6364
	/* end block 2 */
	// End Line: 6365

void AddIdentify__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	missile[mi]._miDelFlag = '\x01';
	UseMana__Fii(id,5);
	if (id == myplr) {
		if (sbookflag != '\0') {
			sbookflag = '\0';
		}
		if (invflag == '\0') {
			invflag = '\x01';
		}
		options_pad = id;
		NewCursor__Fi(2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFirewallC__Fiiiiiicii(int mi /*$t1*/, int sx /*$fp*/, int sy /*$t0*/, int dx /*stack -56*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2893, offset 0x8013e3e8
	/* begin block 1 */
		// Start line: 2894
		// Start offset: 0x8013E3E8
		// Variables:
	// 		int i; // $s6
	// 		int pn; // $s3
	// 		int k; // $s7
	// 		int l; // $v0
	// 		int j; // $s5
	// 		int tx; // $s0
	// 		int ty; // $s1
	// 		int CrawlNum[6]; // stack offset -80
	/* end block 1 */
	// End offset: 0x8013E664
	// End Line: 2937

	/* begin block 2 */
		// Start line: 6408
	/* end block 2 */
	// End Line: 6409

void AddFirewallC__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	short sVar1;
	uchar uVar2;
	int x2;
	int iVar3;
	int y2;
	int iVar4;
	uint uVar5;
	int iVar6;
	int local_50;
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined4 local_3c;
	int local_38;
	int local_30;
	int local_2c;
	
	local_50 = DAT_80129d90;
	local_4c = DAT_80129d94;
	local_48 = DAT_80129d98;
	local_44 = DAT_80129d9c;
	local_40 = DAT_80129da0;
	local_3c = DAT_80129da4;
	iVar6 = 0;
	missile[mi]._miDelFlag = '\x01';
	x2 = 0;
	iVar3 = mi;
	local_38 = dx;
	do {
		uVar5 = (uint)(byte)CrawlTable[*(int *)((int)&local_50 + x2)];
		iVar4 = *(int *)((int)&local_50 + x2) + 1;
		if (CrawlTable[*(int *)((int)&local_50 + x2)] != 0) {
			do {
				x2 = local_38 + (int)CrawlTable[iVar4];
				y2 = dy + (int)CrawlTable[iVar4 + 1];
				if ((x2 - 1U < 0x5b) && (y2 - 1U < 0x5b)) {
					sVar1 = dung_map[x2 * 0x6c + y2].dPiece;
					local_30 = sy;
					local_2c = iVar3;
					uVar2 = LineClear__Fiiii(sx,sy,x2,y2);
					sy = local_30;
					iVar3 = local_2c;
					if ((uVar2 != '\0') &&
						 (((sx != x2 || (sy = local_30, iVar3 = local_2c, local_30 != y2)) &&
							(sy = local_30, iVar3 = local_2c,
							((uint)nSolidTable[(int)sVar1] | (int)dung_map[x2 * 0x6c + y2].dObject) == 0)))) {
						missile[mi]._miVar1 = (short)x2;
						missile[mi]._miVar2 = (short)y2;
						missile[mi]._miVar5 = (short)x2;
						missile[mi]._miVar6 = (short)y2;
						missile[mi]._miDelFlag = '\0';
						iVar6 = 6;
						sy = local_30;
						iVar3 = local_2c;
						break;
					}
				}
				uVar5 = uVar5 - 1;
				iVar4 = iVar4 + 2;
			} while (0 < (int)uVar5);
		}
		iVar6 = iVar6 + 1;
		x2 = iVar6 * 4;
		if (5 < iVar6) {
			if (missile[iVar3]._miDelFlag != '\x01') {
				missile[iVar3]._miVar7 = 0;
				missile[iVar3]._miVar8 = 0;
				missile[iVar3]._miVar3 = (short)midir - 2U & 7;
				missile[iVar3]._miVar4 = (short)midir + 2U & 7;
				missile[iVar3]._mirange = 7;
				UseMana__Fii(id,6);
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddInfra__Fiiiiiicii(int mi /*$a2*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2943, offset 0x8013e698
	/* begin block 1 */
		// Start line: 2944
		// Start offset: 0x8013E698
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8013E784
	// End Line: 2953

	/* begin block 2 */
		// Start line: 6526
	/* end block 2 */
	// End Line: 6527

void AddInfra__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	int iVar1;
	
	iVar1 = (int)missile[mi]._mispllvl;
	missile[mi]._mirange = 0x630;
	while (0 < iVar1) {
		iVar1 = iVar1 + -1;
		missile[mi]._mirange = missile[mi]._mirange + (missile[mi]._mirange >> 3);
	}
	missile[mi]._mirange = missile[mi]._mirange + (plr[id]._pISplDur * missile[mi]._mirange >> 7);
	if ((char)mienemy == '\0') {
		UseMana__Fii(id,9);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddWave__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 2959, offset 0x8013e794
	/* begin block 1 */
		// Start line: 2960
		// Start offset: 0x8013E794
	/* end block 1 */
	// End offset: 0x8013E808
	// End Line: 2968

	/* begin block 2 */
		// Start line: 6569
	/* end block 2 */
	// End Line: 6570

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
 // line 2974, offset 0x8013e818
	/* begin block 1 */
		// Start line: 2975
		// Start offset: 0x8013E818
		// Variables:
	// 		int k; // $a1
	/* end block 1 */
	// End offset: 0x8013EA00
	// End Line: 2992

	/* begin block 2 */
		// Start line: 6615
	/* end block 2 */
	// End Line: 6616

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
		lVar2 = random__Fil(0x42,3);
		lVar3 = random__Fil(0x42,3);
		lVar4 = random__Fil(0x42,3);
		uVar1 = currlevel;
		iVar7 = lVar2 + lVar3 + lVar4;
		missile[mi]._midam = iVar7;
		missile[mi]._midam = iVar7 + (uint)(uVar1 >> 1);
	}
	else {
		lVar2 = random__Fil(0x42,6);
		lVar3 = random__Fil(0x42,6);
		lVar4 = random__Fil(0x42,6);
		lVar5 = random__Fil(0x42,6);
		lVar6 = random__Fil(0x42,6);
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
 // line 3014, offset 0x8013ea30
	/* begin block 1 */
		// Start line: 3015
		// Start offset: 0x8013EA30
	/* end block 1 */
	// End offset: 0x8013EAC8
	// End Line: 3024

	/* begin block 2 */
		// Start line: 6722
	/* end block 2 */
	// End Line: 6723

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
 // line 3031, offset 0x8013eae0
	/* begin block 1 */
		// Start line: 3032
		// Start offset: 0x8013EAE0
	/* end block 1 */
	// End offset: 0x8013EB78
	// End Line: 3041

	/* begin block 2 */
		// Start line: 6766
	/* end block 2 */
	// End Line: 6767

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
 // line 3048, offset 0x8013eb90
	/* begin block 1 */
		// Start line: 3049
		// Start offset: 0x8013EB90
	/* end block 1 */
	// End offset: 0x8013EBE4
	// End Line: 3055

	/* begin block 2 */
		// Start line: 6810
	/* end block 2 */
	// End Line: 6811

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
 // line 3062, offset 0x8013ebf8
	/* begin block 1 */
		// Start line: 3063
		// Start offset: 0x8013EBF8
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8013EE10
	// End Line: 3085

	/* begin block 2 */
		// Start line: 6845
	/* end block 2 */
	// End Line: 6846

void AddApoca__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	short sVar1;
	short sVar2;
	short sVar3;
	long lVar4;
	int iVar5;
	
	missile[mi]._miVar1 = 8;
	missile[mi]._miVar2 = (short)sy + -8;
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
	if (0x5c < missile[mi]._miVar3) {
		missile[mi]._miVar3 = 0x5c;
	}
	if (missile[mi]._miVar4 < 1) {
		missile[mi]._miVar4 = 1;
	}
	if (0x5b < missile[mi]._miVar5) {
		missile[mi]._miVar5 = 0x5b;
	}
	iVar5 = 0;
	if ('\0' < plr[id]._pLevel) {
		do {
			lVar4 = random__Fil(0x43,6);
			missile[mi]._midam = missile[mi]._midam + 1 + lVar4;
			iVar5 = iVar5 + 1;
		} while (iVar5 < (int)plr[id]._pLevel);
	}
	missile[mi]._mirange = 0xff;
	missile[mi]._miDelFlag = '\0';
	UseMana__Fii(id,0x18);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlame__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int seqno /*stack 32*/)
 // line 3091, offset 0x8013ee34
	/* begin block 1 */
		// Start line: 3092
		// Start offset: 0x8013EE34
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x8013F034
	// End Line: 3121

	/* begin block 2 */
		// Start line: 6925
	/* end block 2 */
	// End Line: 6926

void AddFlame__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int seqno)

{
	int iVar1;
	long lVar2;
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
	lVar3 = missile[midir]._mityoff;
	missile[mi]._mirange = (int)missile[mi]._miVar2 + 0x14;
	missile[mi]._mityoff = lVar3;
	iVar1 = AddLight__Fiii(sx,sy,0x12);
	missile[mi]._mlid = (char)iVar1;
	if ((char)mienemy == '\0') {
		lVar3 = random__Fil(0x4f,(int)plr[id]._pLevel);
		lVar2 = random__Fil(0x4f,2);
		iVar1 = (lVar3 + lVar2 + 2) * 8;
		missile[mi]._midam = iVar1 + (iVar1 >> 1);
	}
	else {
		lVar3 = random__Fil(0x4d,((uint)monster[id].mMaxDamage - (uint)monster[id].mMinDamage) + 1);
		missile[mi]._midam = lVar3 + (uint)monster[id].mMinDamage;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlamec__Fiiiiiicii(int mi /*$s2*/, int sx /*$s0*/, int sy /*$s1*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3128, offset 0x8013f050
	/* begin block 1 */
		// Start line: 3129
		// Start offset: 0x8013F050
	/* end block 1 */
	// End offset: 0x8013F120
	// End Line: 3146

	/* begin block 2 */
		// Start line: 7028
	/* end block 2 */
	// End Line: 7029

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
// void /*$ra*/ AddCbolt__Fiiiiiicii(int mi /*$s1*/, int sx /*$s5*/, int sy /*$s2*/, int dx /*$s3*/, int dy /*stack 16*/, int midir /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3152, offset 0x8013f140
	/* begin block 1 */
		// Start line: 3153
		// Start offset: 0x8013F140
	/* end block 1 */
	// End offset: 0x8013F308
	// End Line: 3188

	/* begin block 2 */
		// Start line: 7080
	/* end block 2 */
	// End Line: 7081

void AddCbolt__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int micaster,int id,int dam)

{
	long lVar1;
	int iVar2;
	
	if ((char)micaster == '\0') {
		lVar1 = random__Fil(0x3f,0xf);
		missile[mi]._mirnd = lVar1 + 1;
		lVar1 = random__Fil(0x44,(int)((uint)(ushort)plr[id]._pMagic << 0x10) >> 0x12);
		iVar2 = lVar1 + 1;
	}
	else {
		lVar1 = random__Fil(0x3f,0xf);
		missile[mi]._mirnd = lVar1 + 1;
		iVar2 = 0xf;
	}
	missile[mi]._midam = iVar2;
	if ((sx == dx) && (sy == dy)) {
		dx = dx + XDirAdd[midir];
		dy = sy + YDirAdd[midir];
	}
	lVar1 = random__Fil(0x3f,8);
	missile[mi]._miAnimFrame = (char)lVar1 + '\x01';
	iVar2 = AddLight__Fiii(sx,sy,0x42);
	missile[mi]._mlid = (char)iVar2;
	GetMissileVel__Fiiiiii(mi,sx,sy,dx,dy,8);
	missile[mi]._miVar1 = 5;
	missile[mi]._miVar2 = (short)midir;
	missile[mi]._miVar3 = 0;
	missile[mi]._mirange = 0x100;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHbolt__Fiiiiiicii(int mi /*$s2*/, int sx /*$s3*/, int sy /*$s4*/, int dx /*$s0*/, int dy /*stack 16*/, int midir /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3196, offset 0x8013f334
	/* begin block 1 */
		// Start line: 3197
		// Start offset: 0x8013F334
		// Variables:
	// 		int sp; // $v1
	/* end block 1 */
	// End offset: 0x8013F4CC
	// End Line: 3221

	/* begin block 2 */
		// Start line: 7177
	/* end block 2 */
	// End Line: 7178

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
	v = AddLight__Fiii(sx,sy,0x42);
	missile[mi]._mlid = (char)v;
	lVar1 = random__Fil(0x45,10);
	missile[mi]._midam = lVar1 + (int)plr[id]._pLevel + 9;
	UseMana__Fii(id,0x1f);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddResurrect__Fiiiiiicii(int mi /*$s1*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3229, offset 0x8013f4f4
	/* begin block 1 */
		// Start line: 3230
		// Start offset: 0x8013F4F4
	/* end block 1 */
	// End offset: 0x8013F550
	// End Line: 3238

	/* begin block 2 */
		// Start line: 7250
	/* end block 2 */
	// End Line: 7251

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
 // line 3241, offset 0x8013f568
	/* begin block 1 */
		// Start line: 3242
		// Start offset: 0x8013F568
	/* end block 1 */
	// End offset: 0x8013F5E8
	// End Line: 3252

	/* begin block 2 */
		// Start line: 7279
	/* end block 2 */
	// End Line: 7280

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
 // line 3258, offset 0x8013f5f0
	/* begin block 1 */
		// Start line: 3259
		// Start offset: 0x8013F5F0
	/* end block 1 */
	// End offset: 0x8013F644
	// End Line: 3265

	/* begin block 2 */
		// Start line: 7322
	/* end block 2 */
	// End Line: 7323

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
// void /*$ra*/ AddBoneSpirit__Fiiiiiicii(int mi /*$s3*/, int sx /*$s1*/, int sy /*$s2*/, int dx /*$s4*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3272, offset 0x8013f658
	/* begin block 1 */
		// Start line: 3273
		// Start offset: 0x8013F658
	/* end block 1 */
	// End offset: 0x8013F824
	// End Line: 3310

	/* begin block 2 */
		// Start line: 7357
	/* end block 2 */
	// End Line: 7358

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
	dir = AddLight__Fiii(sx,sy,0x71);
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
// void /*$ra*/ AddRportal__Fiiiiiicii(int mi /*$a0*/, int sx /*$a1*/, int sy /*$a2*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3319, offset 0x8013f854
	/* begin block 1 */
		// Start line: 3320
		// Start offset: 0x8013F854
	/* end block 1 */
	// End offset: 0x8013F8E4
	// End Line: 3331

	/* begin block 2 */
		// Start line: 7469
	/* end block 2 */
	// End Line: 7470

void AddRportal__Fiiiiiicii(int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	char cVar1;
	
	missile[mi]._mix = (char)sx;
	missile[mi]._misx = (char)sx;
	cVar1 = missile[mi]._miAnimLen;
	missile[mi]._mirange = 100;
	missile[mi]._miy = (char)sy;
	missile[mi]._misy = (char)sy;
	missile[mi]._miVar2 = 0;
	missile[mi]._miVar1 = 100 - (short)cVar1;
	PutMissile__Fi(mi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDiabApoca__Fiiiiiicii(int mi /*$s7*/, int sx /*$s5*/, int sy /*$s6*/, int dx /*$a3*/, int dy /*stack 16*/, int midir /*stack 20*/, int mienemy /*stack 24*/, int id /*stack 28*/, int dam /*stack 32*/)
 // line 3334, offset 0x8013f8f4
	/* begin block 1 */
		// Start line: 3335
		// Start offset: 0x8013F8F4
		// Variables:
	// 		int pnum; // $s2
	/* end block 1 */
	// End offset: 0x8013F9FC
	// End Line: 3346

	/* begin block 2 */
		// Start line: 7508
	/* end block 2 */
	// End Line: 7509

void AddDiabApoca__Fiiiiiicii
							 (int mi,int sx,int sy,int dx,int dy,int midir,int mienemy,int id,int dam)

{
	uchar uVar1;
	short *psVar2;
	short *psVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = 0;
	if (gbMaxPlayers != '\0') {
		psVar2 = &plr[0]._pfuty;
		psVar3 = &plr[0]._pfutx;
		iVar5 = 0;
		do {
			if (((&plr[0].plractive)[iVar5] != '\0') &&
				 (uVar1 = LineClear__Fiiii(sx,sy,(int)*psVar3,(int)*psVar2), uVar1 != '\0')) {
				AddMissile__Fiiiiiiciii(0,0,(int)*psVar3,(int)*psVar2,0,0x42,(int)(char)mienemy,id,dam,0);
			}
			psVar2 = psVar2 + 0x11d4;
			psVar3 = psVar3 + 0x11d4;
			iVar4 = iVar4 + 1;
			iVar5 = iVar5 + 0x23a8;
		} while (iVar4 < (int)(uint)gbMaxPlayers);
	}
	missile[mi]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMissile__Fiiiiiiciii(int sx /*$s2*/, int sy /*$s3*/, int v1 /*$s7*/, int v2 /*$s5*/, int midir /*stack 16*/, int mitype /*stack 20*/, int micaster /*stack 24*/, int id /*stack 28*/, int v3 /*stack 32*/, int spllvl /*stack 36*/)
 // line 3349, offset 0x8013fa30
	/* begin block 1 */
		// Start line: 3350
		// Start offset: 0x8013FA30
		// Variables:
	// 		int mi; // $s0
	/* end block 1 */
	// End offset: 0x8013FD48
	// End Line: 3418

	/* begin block 2 */
		// Start line: 7546
	/* end block 2 */
	// End Line: 7547

int AddMissile__Fiiiiiiciii
							(int sx,int sy,int v1,int v2,int midir,int mitype,int micaster,int id,int v3,
							int spllvl)

{
	int *piVar1;
	uchar uVar2;
	int mi;
	_func_31 *p_Var3;
	int dir;
	
	mi = missileavail[0];
	if (nummissiles < 0x7d) {
		piVar1 = &missileactive + nummissiles;
		dir = missileavail[0x7c - nummissiles];
		nummissiles = nummissiles + 1;
		*piVar1 = missileavail[0];
		missileavail[0] = dir;
		p_Var3 = (_func_31 *)MissPrintRoutines[mitype];
		missile[mi]._micaster = (int)(char)micaster;
		missile[mi]._mitype = (char)mitype;
		missile[mi]._misource = (char)id;
		missile[mi].PrintPtr = p_Var3;
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
		missile[mi]._mitxoff = 0;
		missile[mi]._mityoff = 0;
		missile[mi]._mixoff = '\0';
		missile[mi]._miyoff = '\0';
		missile[mi]._miDelFlag = '\0';
		missile[mi]._miAnimAdd = '\x01';
		missile[mi]._miLightFlag = '\0';
		missile[mi]._miPreFlag = '\0';
		missile[mi]._miUniqTrans = '\0';
		missile[mi]._mlid = -1;
		missile[mi]._miHitFlag = '\0';
		missile[mi]._midist = 0;
		missile[mi]._mirnd = 0;
		missile[mi]._midam = v3;
		if (missiledata[mitype].mlSFX != ~PS_WALK1) {
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
// int /*$ra*/ Sentfire__Fiii(int i /*$s4*/, int sx /*$s2*/, int sy /*$s3*/)
 // line 3453, offset 0x8013fd7c
	/* begin block 1 */
		// Start line: 3454
		// Start offset: 0x8013FD7C
		// Variables:
	// 		int ex; // $s5
	// 		int dir; // $s0
	/* end block 1 */
	// End offset: 0x8013FF38
	// End Line: 3474

	/* begin block 2 */
		// Start line: 7806
	/* end block 2 */
	// End Line: 7807

int Sentfire__Fiii(int i,int sx,int sy)

{
	char cVar1;
	uchar uVar2;
	int spllvl;
	int midir;
	int iVar3;
	
	iVar3 = 0;
	uVar2 = LineClear__Fiiii((int)missile[i]._mix,(int)missile[i]._miy,sx,sy);
	if ((((uVar2 != '\0') &&
			 (midir = (int)dung_map[sx * 0x6c + sy].dMonster + -1,
			 0 < (int)dung_map[sx * 0x6c + sy].dMonster)) &&
			(0 < (int)((uint)(ushort)monster[midir]._mhitpoints << 0x10) >> 0x16)) && (3 < midir)) {
		iVar3 = -1;
		midir = GetDirection__Fiiii((int)missile[i]._mix,(int)missile[i]._miy,sx,sy);
		cVar1 = missile[i]._misource;
		missile[i]._miVar3 = (short)missileavail[0];
		spllvl = GetSpellLevel__Fii((int)cVar1,1);
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
 // line 3479, offset 0x8013ff60
	/* begin block 1 */
		// Start line: 3480
		// Start offset: 0x8013FF60
	/* end block 1 */
	// End offset: 0x8013FF60
	// End Line: 3480

	/* begin block 2 */
		// Start line: 7876
	/* end block 2 */
	// End Line: 7877

void MI_Dummy__Fi(int i)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Golem__Fi(int i /*$fp*/)
 // line 3483, offset 0x8013ff68
	/* begin block 1 */
		// Start line: 3484
		// Start offset: 0x8013FF68
		// Variables:
	// 		int id; // stack offset -48
	// 		int pn; // $s2
	// 		int j; // $s4
	// 		int k; // $s7
	// 		int l; // $v0
	// 		int m; // $s5
	// 		int tx; // $s1
	// 		int ty; // $s3
	// 		int CrawlNum[6]; // stack offset -72
	/* end block 1 */
	// End offset: 0x80140190
	// End Line: 3514

	/* begin block 2 */
		// Start line: 7883
	/* end block 2 */
	// End Line: 7884

void MI_Golem__Fi(int i)

{
	short sVar1;
	uchar uVar2;
	int x2;
	int y2;
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
	
	local_48 = DAT_80129d90;
	local_44 = DAT_80129d94;
	local_40 = DAT_80129d98;
	local_3c = DAT_80129d9c;
	local_38 = DAT_80129da0;
	local_34 = DAT_80129da4;
	local_30 = (int)missile[i]._misource;
	if ((monster[local_30]._mx == '\x01') && (monster[local_30]._my == '\0')) {
		iVar5 = 0;
		x2 = 0;
		do {
			uVar4 = (uint)(byte)CrawlTable[*(int *)((int)&local_48 + x2)];
			iVar3 = *(int *)((int)&local_48 + x2) + 1;
			if (CrawlTable[*(int *)((int)&local_48 + x2)] != 0) {
				do {
					x2 = (int)missile[i]._miVar4 + (int)CrawlTable[iVar3];
					y2 = (int)missile[i]._miVar5 + (int)CrawlTable[iVar3 + 1];
					if ((x2 - 1U < 0x5b) && (y2 - 1U < 0x5b)) {
						sVar1 = dung_map[x2 * 0x6c + y2].dPiece;
						uVar2 = LineClear__Fiiii((int)missile[i]._miVar1,(int)missile[i]._miVar2,x2,y2);
						if ((uVar2 != '\0') &&
							 (((uint)nSolidTable[(int)sVar1] | (int)dung_map[x2 * 0x6c + y2].dMonster |
								(int)dung_map[x2 * 0x6c + y2].dObject) == 0)) {
							SpawnGolum__Fiiii(local_30,x2,y2,i);
							iVar5 = 7;
							goto LAB_80140168;
						}
					}
					uVar4 = uVar4 - 1;
					iVar3 = iVar3 + 2;
				} while (0 < (int)uVar4);
			}
			iVar5 = iVar5 + 1;
LAB_80140168:
			x2 = iVar5 << 2;
		} while (iVar5 < 6);
	}
	missile[i]._miDelFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_SetManashield__Fi(int i /*$a0*/)
 // line 3518, offset 0x801401c4
	/* begin block 1 */
		// Start line: 3519
		// Start offset: 0x801401C4
	/* end block 1 */
	// End offset: 0x801401F8
	// End Line: 3522

	/* begin block 2 */
		// Start line: 7960
	/* end block 2 */
	// End Line: 7961

void MI_SetManashield__Fi(int i)

{
	if (missile[i]._misource == '\0') {
		ManashieldFlag = '\x01';
	}
	else {
		ManashieldFlag2 = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_LArrow__Fi(int i /*$s3*/)
 // line 3526, offset 0x80140200
	/* begin block 1 */
		// Start line: 3527
		// Start offset: 0x80140200
		// Variables:
	// 		int p; // $s1
	// 		int mind; // $s2
	// 		int maxd; // $a2
	// 		int rst; // $s4
	/* end block 1 */
	// End offset: 0x80140998
	// End Line: 3613

	/* begin block 2 */
		// Start line: 7974
	/* end block 2 */
	// End Line: 7975

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
	
	missile[i]._mirange = missile[i]._mirange + -1;
	maxdam_00 = (int)missile[i]._misource;
	if ((missile[i]._miAnimType == '\x1a') || (missile[i]._miAnimType == '\x05')) {
		if (missile[i]._mitype == '8') {
			cVar2 = missile[i]._mlid;
			cVar4 = missile[i]._mix;
			cVar1 = missile[i]._miy;
			r = (int)missile[i]._miAnimFrame + 0x40;
		}
		else {
			cVar2 = missile[i]._mlid;
			cVar4 = missile[i]._mix;
			cVar1 = missile[i]._miy;
			r = (int)missile[i]._miAnimFrame + 0x10;
		}
		ChangeLight__Fiiii((int)cVar2,(int)cVar4,(int)cVar1,r);
		uVar3 = missiledata[(int)missile[i]._mitype].mResist;
		if ((int)missile[i]._mitype == 0x38) {
			if (maxdam_00 == -1) {
				lVar5 = random__Fil(0x44,10);
				mindam = (uint)currlevel + lVar5 + 1;
				lVar5 = random__Fil(0x44,10);
				r = (uint)currlevel * 2 + lVar5 + 1;
			}
			else {
				mindam = plr[maxdam_00]._pILMinDam;
				r = plr[maxdam_00]._pILMaxDam;
			}
			missiledata[56].mResist = '\x02';
			CheckMissileCol__FiiiUciiUc(i,mindam,r,'\0',(int)missile[i]._mix,(int)missile[i]._miy,1);
		}
		if (missile[i]._mitype == '\x1b') {
			if (maxdam_00 == -1) {
				lVar5 = random__Fil(0x44,10);
				r = (uint)currlevel + lVar5 + 1;
				lVar5 = random__Fil(0x44,10);
				maxdam_00 = (uint)currlevel * 2 + lVar5 + 1;
			}
			else {
				r = plr[maxdam_00]._pIFMinDam;
				maxdam_00 = plr[maxdam_00]._pIFMaxDam;
			}
			missiledata[27].mResist = '\x01';
			CheckMissileCol__FiiiUciiUc(i,r,maxdam_00,'\0',(int)missile[i]._mix,(int)missile[i]._miy,1);
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
			lVar5 = random__Fil(0x44,10);
			mindam_00 = (uint)currlevel + lVar5 + 1;
			lVar5 = random__Fil(0x44,10);
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
			CheckMissileCol__FiiiUciiUc
								(i,mindam_00,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0);
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
			missile[i]._mirange = (int)missile[i]._miAnimLen + -1;
		}
		else {
			if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
				 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
				cVar4 = missile[i]._miy;
				cVar2 = missile[i]._mitype;
				missile[i]._miVar1 = (short)missile[i]._mix;
				missile[i]._miVar2 = (short)cVar4;
				if (cVar2 == '8') {
					ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._miVar1,(int)(short)cVar4,0x41);
				}
				else {
					ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._miVar1,(int)(short)cVar4,0x11);
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
 // line 3616, offset 0x801409bc
	/* begin block 1 */
		// Start line: 3617
		// Start offset: 0x801409BC
		// Variables:
	// 		int p; // $v1
	// 		int mind; // $a1
	// 		int maxd; // $a2
	/* end block 1 */
	// End offset: 0x80140BC0
	// End Line: 3642

	/* begin block 2 */
		// Start line: 8181
	/* end block 2 */
	// End Line: 8182

void MI_Arrow__Fi(int i)

{
	int iVar1;
	uint mindam;
	int iVar2;
	uint maxdam;
	
	missile[i]._mirange = missile[i]._mirange + -1;
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
		CheckMissileCol__FiiiUciiUc(i,mindam,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0);
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
 // line 3645, offset 0x80140bd8
	/* begin block 1 */
		// Start line: 3646
		// Start offset: 0x80140BD8
		// Variables:
	// 		int omx; // $s4
	// 		int omy; // $s5
	// 		int d; // $s3
	// 		int p; // $s1
	/* end block 1 */
	// End offset: 0x8014127C
	// End Line: 3731

	/* begin block 2 */
		// Start line: 8249
	/* end block 2 */
	// End Line: 8250

void MI_Firebolt__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	long lVar6;
	int x;
	int r;
	int local_3c;
	int y;
	long lVar7;
	
	cVar1 = missile[i]._mitype;
	missile[i]._mirange = missile[i]._mirange + -1;
	local_3c = 0;
	if ((cVar1 == '?') && (missile[i]._mimfnum == '\b')) {
		if (missile[i]._mirange == 0) {
			if (-1 < (int)missile[i]._mlid) {
				AddUnLight__Fi((int)missile[i]._mlid);
			}
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
			missile[i]._miDelFlag = '\x01';
			PlaySfxLoc__Fiii(LS_BSIMPCT,(int)cVar1,(int)cVar2);
		}
		goto LAB_80141274;
	}
	y = missile[i]._mitxoff;
	x = missile[i]._miyvel;
	missile[i]._mitxoff = y + missile[i]._mixvel;
	lVar7 = missile[i]._mityoff;
	missile[i]._mityoff = missile[i]._mityoff + x;
	GetMissilePos__Fi(i);
	x = (int)missile[i]._misource;
	if (x == -1) {
		lVar6 = random__Fil(0x4e,(uint)currlevel << 1);
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
						lVar6 = random__Fil(0x4b,10);
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
			lVar6 = random__Fil(0x4d,((uint)monster[x].mMaxDamage - (uint)monster[x].mMinDamage) + 1);
			local_3c = lVar6 + (uint)monster[x].mMinDamage;
		}
	}
	if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
		CheckMissileCol__FiiiUciiUc
							(i,local_3c,local_3c,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0);
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
					r = 0x41;
				}
				else {
					if (missile[i]._miAnimType == '*') {
						x = (int)missile[i]._miVar1;
						y = (int)(short)cVar1;
						r = 0x31;
					}
					else {
						local_3c = (int)missile[i]._mlid;
						x = (int)missile[i]._miVar1;
						y = (int)missile[i]._miVar2;
						r = 0x11;
					}
				}
				ChangeLight__Fiiii(local_3c,x,y,r);
			}
		}
		goto LAB_80141274;
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
LAB_801410ac:
		cVar4 = *(char *)&missile[i]._micaster;
		cVar5 = missile[i]._misource;
LAB_801410d4:
		AddMissile__Fiiiiiiciii((int)cVar1,(int)cVar2,i,0,(int)cVar3,local_3c,(int)cVar4,(int)cVar5,0,0)
		;
LAB_8014111c:
		x = i << 2;
	}
	else {
		if ('\x18' < cVar1) {
			if (cVar1 == '9') {
				cVar1 = missile[i]._mix;
				cVar2 = missile[i]._miy;
				cVar3 = missile[i]._mimfnum;
				local_3c = 0x3a;
				goto LAB_801410ac;
			}
			if (cVar1 == '?') {
				SetMissDir__Fii(i,8);
				missile[i]._mirange = 7;
				missile[i]._miDelFlag = '\0';
				goto LAB_80141274;
			}
			goto LAB_8014111c;
		}
		if (cVar1 == '\x01') {
			x = i << 2;
LAB_80141024:
			y = (x + i) * 0x10;
			cVar1 = (&missile[0]._mix)[y];
			cVar2 = (&missile[0]._miy)[y];
			cVar3 = (&missile[0]._mimfnum)[y];
			local_3c = 9;
			cVar4 = *(char *)(&missile[0]._micaster + (x + i) * 4);
			cVar5 = (&missile[0]._misource)[y];
			goto LAB_801410d4;
		}
		x = i * 4;
		if (cVar1 == '\x15') goto LAB_80141024;
	}
	if (-1 < (int)(&missile[0]._mlid)[(x + i) * 0x10]) {
		AddUnLight__Fi((int)(&missile[0]._mlid)[(x + i) * 0x10]);
	}
LAB_80141274:
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Lightball__Fi(int i /*$s1*/)
 // line 3735, offset 0x801412a4
	/* begin block 1 */
		// Start line: 3736
		// Start offset: 0x801412A4
		// Variables:
	// 		int j; // $s4
	// 		int tx; // $s2
	// 		int ty; // $s3
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80141508
	// End Line: 3764

	/* begin block 2 */
		// Start line: 8452
	/* end block 2 */
	// End Line: 8453

void MI_Lightball__Fi(int i)

{
	char cVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	
	iVar7 = missile[i]._mixvel;
	iVar5 = missile[i]._mityoff;
	iVar8 = missile[i]._miyvel;
	sVar2 = missile[i]._miVar1;
	sVar3 = missile[i]._miVar2;
	missile[i]._mirange = missile[i]._mirange + -1;
	iVar4 = missile[i]._mitxoff;
	missile[i]._mityoff = iVar5 + iVar8;
	missile[i]._mitxoff = iVar4 + iVar7;
	GetMissilePos__Fi(i);
	iVar4 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0)
	;
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._mirange = iVar4;
	}
	uVar6 = SEXT14(dung_map[(int)sVar2 * 0x6c + (int)sVar3].dObject);
	if (((uVar6 != 0) && ((int)sVar2 == (int)missile[i]._mix)) && ((int)sVar3 == (int)missile[i]._miy)
		 ) {
		if ((int)uVar6 < 1) {
			uVar6 = ~uVar6;
		}
		else {
			uVar6 = uVar6 - 1;
		}
		if ((uint)(byte)object[uVar6]._otype - 0x3b < 2) {
			missile[i]._mirange = iVar4;
		}
	}
	ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x44);
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
// void /*$ra*/ MI_Acidpud__Fi(int i /*$s2*/)
 // line 3781, offset 0x8014152c
	/* begin block 1 */
		// Start line: 3782
		// Start offset: 0x8014152C
		// Variables:
	// 		int range; // $s0
	/* end block 1 */
	// End offset: 0x80141620
	// End Line: 3807

	/* begin block 2 */
		// Start line: 8560
	/* end block 2 */
	// End Line: 8561

void MI_Acidpud__Fi(int i)

{
	int mindam;
	int iVar1;
	
	mindam = missile[i]._midam;
	missile[i]._mirange = missile[i]._mirange + -1;
	iVar1 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,0);
	missile[i]._mirange = iVar1;
	if (iVar1 == 0) {
		if (missile[i]._mimfnum == '\0') {
			SetMissDir__Fii(i,1);
			missile[i]._mirange = (int)missile[i]._miAnimLen;
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
 // line 3810, offset 0x8014163c
	/* begin block 1 */
		// Start line: 3811
		// Start offset: 0x8014163C
		// Variables:
	// 		int ExpLight[14]; // stack offset -72
	/* end block 1 */
	// End offset: 0x801418E4
	// End Line: 3845

	/* begin block 2 */
		// Start line: 8630
	/* end block 2 */
	// End Line: 8631

void MI_Firewall__Fi(int i)

{
	char cVar1;
	int *piVar2;
	int *piVar3;
	long lVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int *piVar8;
	int *piVar9;
	int local_48 [14];
	
	piVar2 = &DAT_80129de0;
	piVar3 = local_48;
	do {
		piVar9 = piVar3;
		piVar8 = piVar2;
		iVar5 = piVar8[1];
		iVar6 = piVar8[2];
		iVar7 = piVar8[3];
		*piVar9 = *piVar8;
		piVar9[1] = iVar5;
		piVar9[2] = iVar6;
		piVar9[3] = iVar7;
		piVar2 = piVar8 + 4;
		piVar3 = piVar9 + 4;
	} while (piVar8 + 4 != (int *)0x80129e10);
	iVar5 = piVar8[5];
	piVar9[4] = iRam80129e10;
	piVar9[5] = iVar5;
	missile[i]._mirange = missile[i]._mirange + -1;
	if (missile[i]._mirange == (int)missile[i]._miVar1) {
		SetMissDir__Fii(i,1);
		lVar4 = random__Fil(0x53,0xb);
		missile[i]._miAnimFrame = (char)lVar4 + '\x01';
	}
	if (missile[i]._mirange == (int)missile[i]._miAnimLen + -1) {
		SetMissDir__Fii(i,0);
		missile[i]._miAnimFrame = '\r';
		missile[i]._miAnimAdd = -1;
	}
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,
						 1);
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	if ((((missile[i]._mimfnum != '\0') && (missile[i]._mirange != 0)) &&
			(missile[i]._miAnimAdd != -1)) && (missile[i]._miVar2 < 0xc)) {
		if (missile[i]._miVar2 == 0) {
			iVar5 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_48[0] >> 3) + 0x10);
			missile[i]._mlid = (char)iVar5;
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
											 (local_48[(int)missile[i]._miVar2] >> 3) + 0x10);
		missile[i]._miVar2 = missile[i]._miVar2 + 1;
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Fireball__Fi(int i /*$s1*/)
 // line 3849, offset 0x80141900
	/* begin block 1 */
		// Start line: 3850
		// Start offset: 0x80141900
		// Variables:
	// 		int dam; // $s2
	// 		int px; // $s7
	// 		int py; // $s6
	// 		int id; // $a0
	// 		int mx; // $s3
	// 		int my; // $s4
	/* end block 1 */
	// End offset: 0x80142290
	// End Line: 3940

	/* begin block 2 */
		// Start line: 8711
	/* end block 2 */
	// End Line: 8712

void MI_Fireball__Fi(int i)

{
	char cVar1;
	char cVar2;
	short sVar3;
	int iVar4;
	int fy;
	int x;
	int tx;
	int mindam;
	int y;
	int ty;
	int fx;
	int ty_00;
	
	fy = (int)missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange + -1;
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
	}
	else {
		iVar4 = missile[i]._mityoff;
		x = missile[i]._miyvel;
		missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
		missile[i]._mityoff = iVar4 + x;
		GetMissilePos__Fi(i);
		if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0);
		}
		if (missile[i]._mirange == 0) {
			x = (int)missile[i]._mix;
			y = (int)missile[i]._miy;
			ChangeLight__Fiiii((int)missile[i]._mlid,x,y,0x14);
			iVar4 = CheckBlock__Fiiii(fx,fy,x,y);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',x,y,1);
			}
			ty_00 = y + 1;
			iVar4 = CheckBlock__Fiiii(fx,fy,x,ty_00);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',x,ty_00,1);
			}
			ty = y + -1;
			iVar4 = CheckBlock__Fiiii(fx,fy,x,ty);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',x,ty,1);
			}
			tx = x + 1;
			iVar4 = CheckBlock__Fiiii(fx,fy,tx,y);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',tx,y,1);
			}
			iVar4 = CheckBlock__Fiiii(fx,fy,tx,ty);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',tx,ty,1);
			}
			iVar4 = CheckBlock__Fiiii(fx,fy,tx,ty_00);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',tx,ty_00,1);
			}
			tx = x + -1;
			iVar4 = CheckBlock__Fiiii(fx,fy,tx,y);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',tx,y,1);
			}
			iVar4 = CheckBlock__Fiiii(fx,fy,tx,ty_00);
			if (iVar4 == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',tx,ty_00,1);
			}
			fy = CheckBlock__Fiiii(fx,fy,tx,ty);
			if (fy == 0) {
				CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',tx,ty,1);
			}
			if (((&TransList)[(int)dung_map[x * 0x6c + y].dTransVal] == (void *)0x0) ||
				 ((missile[i]._mixvel < 0 &&
					((((&TransList)[(int)dung_map[x * 0x6c + ty_00].dTransVal] != (void *)0x0 &&
						(nSolidTable[(int)dung_map[x * 0x6c + ty_00].dPiece] != '\0')) ||
					 (((&TransList)[(int)dung_map[x * 0x6c + ty].dTransVal] != (void *)0x0 &&
						(nSolidTable[(int)dung_map[x * 0x6c + ty].dPiece] != '\0')))))))) {
				missile[i]._mix = missile[i]._mix + '\x01';
				missile[i]._miy = missile[i]._miy + '\x01';
				missile[i]._miyoff = missile[i]._miyoff + -0x20;
			}
			if (0 < missile[i]._miyvel) {
				if ((((&TransList)[(int)dung_map[(x + 1) * 0x6c + y].dTransVal] != (void *)0x0) &&
						(nSolidTable[(int)dung_map[(x + 1) * 0x6c + y].dPiece] != '\0')) ||
					 (((&TransList)[(int)dung_map[(x + -1) * 0x6c + y].dTransVal] != (void *)0x0 &&
						(nSolidTable[(int)dung_map[(x + -1) * 0x6c + y].dPiece] != '\0')))) {
					missile[i]._miyoff = missile[i]._miyoff + -0x20;
				}
			}
			if (0 < missile[i]._mixvel) {
				if ((((&TransList)[(int)dung_map[x * 0x6c + y + 1].dTransVal] != (void *)0x0) &&
						(nSolidTable[(int)dung_map[x * 0x6c + y + 1].dPiece] != '\0')) ||
					 (((&TransList)[(int)dung_map[x * 0x6c + y + -1].dTransVal] != (void *)0x0 &&
						(nSolidTable[(int)dung_map[x * 0x6c + y + -1].dPiece] != '\0')))) {
					missile[i]._mixoff = missile[i]._mixoff + -0x20;
				}
			}
			missile[i]._mimfnum = '\0';
			SetMissAnim__Fii(i,0x13);
			missile[i]._mirange = (int)missile[i]._miAnimLen + -1;
		}
		else {
			if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
				 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
				cVar1 = missile[i]._mlid;
				cVar2 = missile[i]._miy;
				missile[i]._miVar1 = (short)missile[i]._mix;
				sVar3 = missile[i]._miVar1;
				missile[i]._miVar2 = (short)cVar2;
				ChangeLight__Fiiii((int)cVar1,(int)sVar3,(int)(short)cVar2,0x13);
			}
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Lightctrl__Fi(int i /*$s4*/)
 // line 3944, offset 0x801422c4
	/* begin block 1 */
		// Start line: 3945
		// Start offset: 0x801422C4
		// Variables:
	// 		int pn; // $v1
	// 		int dam; // $s3
	// 		int p; // $v1
	// 		int mx; // $s0
	// 		int my; // $s2
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x8014261C
	// End Line: 4002

	/* begin block 2 */
		// Start line: 8931
	/* end block 2 */
	// End Line: 8932

void MI_Lightctrl__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	short sVar5;
	long lVar6;
	long lVar7;
	int mitype;
	int v3;
	int iVar8;
	int iVar9;
	
	v3 = (int)missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange + -1;
	if (v3 == -1) {
		lVar6 = random__Fil(0x51,(uint)currlevel);
		v3 = lVar6 + (uint)currlevel * 2;
	}
	else {
		if (missile[i]._micaster == 0) {
			lVar6 = random__Fil(0x4f,(int)plr[v3]._pLevel);
			lVar7 = random__Fil(0x4f,2);
			v3 = (lVar6 + lVar7 + 2) * 0x40;
		}
		else {
			lVar6 = random__Fil(0x50,((uint)monster[v3].mMaxDamage - (uint)monster[v3].mMinDamage) + 1);
			v3 = (lVar6 + (uint)monster[v3].mMinDamage) * 2;
		}
	}
	iVar8 = missile[i]._mityoff;
	iVar9 = missile[i]._miyvel;
	missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
	missile[i]._mityoff = iVar8 + iVar9;
	GetMissilePos__Fi(i);
	iVar8 = (int)missile[i]._mix;
	iVar9 = (int)missile[i]._miy;
	if ((0x5b < iVar8) || (0x5b < iVar9)) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
		return;
	}
	sVar5 = dung_map[iVar8 * 0x6c + iVar9].dPiece;
	if (((missile[i]._misource == -1) && (iVar8 == (int)missile[i]._misx)) &&
		 (iVar9 == (int)missile[i]._misy)) {
LAB_801424c4:
		if (nMissileTable[(int)sVar5] != '\0') goto LAB_801425e4;
	}
	else {
		if (nMissileTable[(int)sVar5] != '\0') {
			missile[i]._mirange = 0;
			goto LAB_801424c4;
		}
	}
	if ((((iVar8 != (int)missile[i]._miVar1) || (iVar9 != (int)missile[i]._miVar2)) &&
			((0 < iVar8 && ((0 < iVar9 && (iVar8 < 0x70)))))) && (iVar9 < 0x70)) {
		if ((((int)missile[i]._misource == -1) || (missile[i]._micaster != 1)) ||
			 (mitype = 0x17, 3 < (uint)(monster[(int)missile[i]._misource].MType)->mtype - 0x4c)) {
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
			cVar3 = missile[i]._misx;
			cVar4 = missile[i]._misy;
			mitype = 8;
		}
		else {
			cVar1 = missile[i]._mix;
			cVar2 = missile[i]._miy;
			cVar3 = missile[i]._misx;
			cVar4 = missile[i]._misy;
		}
		AddMissile__Fiiiiiiciii
							((int)cVar1,(int)cVar2,(int)cVar3,(int)cVar4,i,mitype,
							 (int)*(char *)&missile[i]._micaster,(int)missile[i]._misource,v3,
							 (int)missile[i]._mispllvl);
		cVar1 = missile[i]._miy;
		missile[i]._miVar1 = (short)missile[i]._mix;
		missile[i]._miVar2 = (short)cVar1;
	}
LAB_801425e4:
	if (((missile[i]._mirange == 0) || (iVar8 < 1)) ||
		 ((iVar9 < 1 || ((0x6f < iVar8 || (0x70 < iVar9)))))) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Lightning__Fi(int i /*$s1*/)
 // line 4006, offset 0x80142640
	/* begin block 1 */
		// Start line: 4007
		// Start offset: 0x80142640
		// Variables:
	// 		int j; // $s2
	// 		struct MissileStruct *miss; // $s0
	/* end block 1 */
	// End offset: 0x80142710
	// End Line: 4025

	/* begin block 2 */
		// Start line: 9073
	/* end block 2 */
	// End Line: 9074

void MI_Lightning__Fi(int i)

{
	char cVar1;
	char cVar2;
	int iVar3;
	
	cVar1 = missile[i]._mix;
	cVar2 = missile[i]._misx;
	iVar3 = missile[i]._mirange + -1;
	missile[i]._mirange = iVar3;
	if (((int)cVar1 != (int)cVar2) || (missile[i]._miy != missile[i]._misy)) {
		CheckMissileCol__FiiiUciiUc
							(i,missile[i]._midam,missile[i]._midam,'\x01',(int)cVar1,(int)missile[i]._miy,0);
	}
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._mirange = iVar3;
	}
	ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x42);
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
// void /*$ra*/ MI_Town__Fi(int i /*$s4*/)
 // line 4029, offset 0x8014272c
	/* begin block 1 */
		// Start line: 4030
		// Start offset: 0x8014272C
		// Variables:
	// 		int p; // $s1
	// 		int ExpLight[17]; // stack offset -96

		/* begin block 1.1 */
			// Start line: 4050
			// Start offset: 0x80142858

			/* begin block 1.1.1 */
				// Start line: 4050
				// Start offset: 0x8014286C
				// Variables:
			// 		struct PlayerStruct *player; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80142900
			// End Line: 4062
		/* end block 1.1 */
		// End offset: 0x8014290C
		// End Line: 4064
	/* end block 1 */
	// End offset: 0x80142940
	// End Line: 4070

	/* begin block 2 */
		// Start line: 9128
	/* end block 2 */
	// End Line: 9129

void MI_Town__Fi(int i)

{
	undefined4 uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	int pnum;
	int iVar6;
	undefined4 local_60 [18];
	
	puVar5 = local_60;
	puVar4 = &DAT_80129e18;
	do {
		uVar1 = puVar4[1];
		uVar2 = puVar4[2];
		uVar3 = puVar4[3];
		*puVar5 = *puVar4;
		puVar5[1] = uVar1;
		puVar5[2] = uVar2;
		puVar5[3] = uVar3;
		puVar4 = puVar4 + 4;
		puVar5 = puVar5 + 4;
	} while (puVar4 != (undefined4 *)0x80129e58);
	*puVar5 = uRam80129e58;
	if (1 < missile[i]._mirange) {
		missile[i]._mirange = missile[i]._mirange + -1;
	}
	if (missile[i]._mirange == (int)missile[i]._miVar1) {
		SetMissDir__Fii(i,1);
	}
	if (((currlevel != '\0') && (missile[i]._mimfnum != '\x01')) && (missile[i]._mirange != 0)) {
		missile[i]._miVar2 = missile[i]._miVar2 + 1;
	}
	pnum = 0;
	iVar6 = 0;
	while (pnum < 2) {
		if ((((&plr[0].plractive)[iVar6] != '\0') &&
				((int)*(short *)((int)&plr[0]._px + iVar6) == (int)missile[i]._mix)) &&
			 ((int)*(short *)((int)&plr[0]._py + iVar6) == (int)missile[i]._miy)) {
			ClrPlrPath__Fi(pnum);
			NetSendCmdParam1__FUcUcUs('\x01','\x1f',(short)missile[i]._misource);
			*(undefined4 *)((int)&plr[0]._pmode + iVar6) = 10;
		}
		iVar6 = iVar6 + 0x23a8;
		pnum = pnum + 1;
	}
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Flash__Fi(int i /*$s2*/)
 // line 4074, offset 0x80142964
	/* begin block 1 */
		// Start line: 4075
		// Start offset: 0x80142964
		// Variables:
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x80142C9C
	// End Line: 4108

	/* begin block 2 */
		// Start line: 9222
	/* end block 2 */
	// End Line: 9223

void MI_Flash__Fi(int i)

{
	char cVar1;
	
	if ((missile[i]._micaster == 0) && ((int)missile[i]._misource != -1)) {
		plr[(int)missile[i]._misource]._pInvincible = '\x01';
	}
	cVar1 = missile[i]._mix;
	missile[i]._mirange = missile[i]._mirange + -1;
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)cVar1 + -1,(int)missile[i]._miy,1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,
						 1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + 1,
						 (int)missile[i]._miy,1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + -1,
						 (int)missile[i]._miy + 1,1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,
						 (int)missile[i]._miy + 1,1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + 1,
						 (int)missile[i]._miy + 1,1);
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
 // line 4112, offset 0x80142cb8
	/* begin block 1 */
		// Start line: 4113
		// Start offset: 0x80142CB8
		// Variables:
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x80142E64
	// End Line: 4138

	/* begin block 2 */
		// Start line: 9315
	/* end block 2 */
	// End Line: 9316

void MI_Flash2__Fi(int i)

{
	char cVar1;
	
	if ((missile[i]._micaster == 0) && ((int)missile[i]._misource != -1)) {
		plr[(int)missile[i]._misource]._pInvincible = '\x01';
	}
	cVar1 = missile[i]._mix;
	missile[i]._mirange = missile[i]._mirange + -1;
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)cVar1 + -1,(int)missile[i]._miy + -1,
						 1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,
						 (int)missile[i]._miy + -1,1);
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix + 1,
						 (int)missile[i]._miy + -1,1);
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
 // line 4142, offset 0x80142e80
	/* begin block 1 */
		// Start line: 4143
		// Start offset: 0x80142E80
		// Variables:
	// 		int j; // $v1
	// 		int id; // $s2
	// 		long diff; // $a1
	// 		long pct; // $a0
	// 		struct MissileStruct *miss; // $s1
	// 		struct PlayerStruct *player; // $s0
	/* end block 1 */
	// End offset: 0x80143184
	// End Line: 4215

	/* begin block 2 */
		// Start line: 9396
	/* end block 2 */
	// End Line: 9397

void MI_Manashield__Fi(int i)

{
	short sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int pnum;
	
	pnum = (int)missile[i]._misource;
	missile[i]._mix = (char)plr[pnum]._px;
	missile[i]._miy = (char)plr[pnum]._py;
	missile[i]._mitxoff = (int)plr[pnum]._pxoff << 0x10;
	missile[i]._mityoff = (int)plr[pnum]._pyoff << 0x10;
	if (plr[pnum]._pmode == 3) {
		missile[i]._misx = (char)plr[pnum]._pfutx;
		missile[i]._misy = (char)plr[pnum]._pfuty;
	}
	else {
		missile[i]._misx = (char)plr[pnum]._px;
		missile[i]._misy = (char)plr[pnum]._py;
	}
	GetMissilePos__Fi(i);
	if (plr[pnum]._pmode == 3) {
		if (plr[pnum]._pdir == '\x02') {
			missile[i]._mix = missile[i]._mix + '\x01';
		}
		else {
			missile[i]._miy = missile[i]._miy + '\x01';
		}
	}
	if (pnum == myplr) {
		if ((plr[pnum]._pMana < 1) || (plr[pnum].plractive == '\0')) {
			missile[i]._mirange = 0;
		}
		iVar5 = (int)missile[i]._miVar1 - plr[pnum]._pHitPoints;
		if (plr[pnum]._pHitPoints < (int)missile[i]._miVar1) {
			iVar2 = 0;
			iVar3 = 0;
			if (0 < (int)missile[i]._mispllvl) {
				do {
					if (6 < iVar2) break;
					iVar2 = iVar2 + 1;
					iVar3 = iVar3 + 3;
				} while (iVar2 < (int)missile[i]._mispllvl);
			}
			if (0 < iVar3) {
				iVar5 = iVar5 - iVar5 / iVar3;
			}
			if (iVar5 < 0) {
				iVar5 = 0;
			}
			iVar2 = plr[pnum]._pMana;
			drawmanaflag = '\x01';
			drawhpflag = '\x01';
			if (iVar2 < iVar5) {
				iVar4 = plr[pnum]._pMana;
				iVar3 = plr[pnum]._pHitPoints;
				plr[pnum]._pMana = 0;
				plr[pnum]._pHitPoints = iVar3 - (iVar5 - iVar2);
				iVar2 = plr[pnum]._pMaxManaBase;
				iVar3 = plr[pnum]._pMaxMana;
				plr[pnum]._pHPBase = plr[pnum]._pHPBase - (iVar5 - iVar4);
				plr[pnum]._pManaBase = iVar2 - iVar3;
				missile[i]._mirange = 0;
				missile[i]._miDelFlag = '\x01';
				iVar5 = plr[pnum]._pHitPoints;
				if (iVar5 < 0) {
					SetPlayerHitPoints__Fii(pnum,0);
					iVar5 = plr[pnum]._pHitPoints;
				}
				if ((iVar5 >> 6 == 0) && (pnum == myplr)) {
					StartPlrKill__Fii(pnum,(int)missile[i]._miVar8);
				}
			}
			else {
				iVar3 = plr[pnum]._pManaBase;
				plr[pnum]._pHitPoints = (int)missile[i]._miVar1;
				sVar1 = missile[i]._miVar2;
				iVar2 = plr[pnum]._pMana;
				plr[pnum]._pManaBase = iVar3 - iVar5;
				plr[pnum]._pMana = iVar2 - iVar5;
				plr[pnum]._pHPBase = (int)sVar1;
			}
		}
		iVar5 = missile[i]._mirange;
		missile[i]._miVar1 = (short)plr[pnum]._pHitPoints;
		missile[i]._miVar2 = (short)plr[pnum]._pHPBase;
		if (iVar5 == 0) {
			missile[i]._miDelFlag = '\x01';
			NetSendCmd__FUcUc('\x01','Y');
		}
	}
	else {
		if ((uint)currlevel != plr[pnum].plrlevel) {
			missile[i]._miDelFlag = '\x01';
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Firemove__Fi(int i /*$s2*/)
 // line 4261, offset 0x801431a4
	/* begin block 1 */
		// Start line: 4262
		// Start offset: 0x801431A4
		// Variables:
	// 		int j; // $s1
	// 		int ExpLight[14]; // stack offset -80
	// 		struct MissileStruct *miss; // $s0
	/* end block 1 */
	// End offset: 0x80143414
	// End Line: 4305

	/* begin block 2 */
		// Start line: 9659
	/* end block 2 */
	// End Line: 9660

void MI_Firemove__Fi(int i)

{
	char cVar1;
	char cVar2;
	int *piVar3;
	int *piVar4;
	short sVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int *piVar10;
	int *piVar11;
	int local_50 [16];
	
	piVar3 = &DAT_80129de0;
	piVar4 = local_50;
	do {
		piVar11 = piVar4;
		piVar10 = piVar3;
		iVar7 = piVar10[1];
		iVar8 = piVar10[2];
		iVar9 = piVar10[3];
		*piVar11 = *piVar10;
		piVar11[1] = iVar7;
		piVar11[2] = iVar8;
		piVar11[3] = iVar9;
		piVar3 = piVar10 + 4;
		piVar4 = piVar11 + 4;
	} while (piVar10 + 4 != (int *)0x80129e10);
	iVar7 = piVar10[5];
	piVar11[4] = iRam80129e10;
	piVar11[5] = iVar7;
	cVar1 = missile[i]._mix;
	missile[i]._miy = missile[i]._miy + -1;
	cVar2 = missile[i]._miyoff;
	missile[i]._mix = cVar1 + -1;
	sVar5 = missile[i]._miVar1 + 1;
	missile[i]._miVar1 = sVar5;
	missile[i]._miyoff = cVar2 + ' ';
	if ((int)sVar5 == (int)missile[i]._miAnimLen) {
		SetMissDir__Fii(i,1);
		lVar6 = random__Fil(0x52,0xb);
		missile[i]._miAnimFrame = (char)lVar6 + '\x01';
	}
	iVar7 = missile[i]._mityoff;
	iVar8 = missile[i]._miyvel;
	missile[i]._mitxoff = missile[i]._mitxoff + missile[i]._mixvel;
	missile[i]._mityoff = iVar7 + iVar8;
	GetMissilePos__Fi(i);
	iVar7 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0)
	;
	if (missile[i]._miHitFlag == '\x01') {
		missile[i]._mirange = iVar7;
	}
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	if ((missile[i]._mimfnum == '\0') && (missile[i]._mirange != 0)) {
		if (missile[i]._miVar2 == 0) {
			iVar7 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_50[0] >> 1) + 0x10);
			missile[i]._mlid = (char)iVar7;
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
											 (local_50[(int)missile[i]._miVar2] >> 1) + 0x10);
		missile[i]._miVar2 = missile[i]._miVar2 + 1;
	}
	else {
		if (((int)missile[i]._mix != (int)missile[i]._miVar3) ||
			 ((int)missile[i]._miy != (int)missile[i]._miVar4)) {
			cVar1 = missile[i]._mlid;
			cVar2 = missile[i]._miy;
			missile[i]._miVar3 = (short)missile[i]._mix;
			sVar5 = missile[i]._miVar3;
			missile[i]._miVar4 = (short)cVar2;
			ChangeLight__Fiiii((int)cVar1,(int)sVar5,(int)(short)cVar2,0x18);
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
 // line 4308, offset 0x80143430
	/* begin block 1 */
		// Start line: 4309
		// Start offset: 0x80143430
		// Variables:
	// 		int j; // $s2
	// 		int k; // $s6
	// 		int sx1; // $fp
	// 		int sy1; // $s7
	// 		int ex; // $v1
	// 		struct MissileStruct *miss; // $s1
	/* end block 1 */
	// End offset: 0x801436AC
	// End Line: 4376

	/* begin block 2 */
		// Start line: 9780
	/* end block 2 */
	// End Line: 9781

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
	missile[i]._mirange = missile[i]._mirange + -1;
	if (0 < sVar3) {
		missile[i]._miVar2 = sVar3 + -1;
	}
	if ((missile[i]._mirange == (int)missile[i]._miVar1) ||
		 ((missile[i]._mimfnum == '\x02' && (missile[i]._miVar2 == 0)))) {
		SetMissDir__Fii(i,1);
	}
	iVar4 = 0;
	if ((missile[i]._mirange & 0xfU) == 0) {
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
			ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x71);
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
 // line 4380, offset 0x801436e0
	/* begin block 1 */
		// Start line: 4381
		// Start offset: 0x801436E0
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
	// End offset: 0x80143918
	// End Line: 4417

	/* begin block 2 */
		// Start line: 9938
	/* end block 2 */
	// End Line: 9939

void MI_Chain__Fi(int i)

{
	undefined **ppuVar1;
	int *piVar2;
	int midir;
	int x2;
	int midir_00;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	int *piVar7;
	int y2;
	int iVar8;
	uint uVar9;
	int y1;
	int x1;
	int iVar10;
	int local_80 [20];
	int local_30;
	
	ppuVar1 = (undefined **)&DAT_80129c44;
	piVar2 = local_80;
	do {
		piVar7 = piVar2;
		ppuVar6 = ppuVar1;
		puVar3 = ppuVar6[1];
		puVar4 = ppuVar6[2];
		puVar5 = ppuVar6[3];
		*(undefined **)piVar7 = *ppuVar6;
		*(undefined **)(piVar7 + 1) = puVar3;
		*(undefined **)(piVar7 + 2) = puVar4;
		*(undefined **)(piVar7 + 3) = puVar5;
		ppuVar1 = ppuVar6 + 4;
		piVar2 = piVar7 + 4;
	} while (ppuVar6 + 4 != PTR_ARRAY_80129c74 + 4);
	puVar3 = ppuVar6[5];
	puVar4 = ppuVar6[6];
	*(undefined **)(piVar7 + 4) = PTR_ARRAY_80129c74[4];
	*(undefined **)(piVar7 + 5) = puVar3;
	*(undefined **)(piVar7 + 6) = puVar4;
	x1 = (int)missile[i]._mix;
	y1 = (int)missile[i]._miy;
	local_30 = (int)missile[i]._misource;
	midir = GetDirection__Fiiii(x1,y1,(int)missile[i]._miVar1,(int)missile[i]._miVar2);
	AddMissile__Fiiiiiiciii
						(x1,y1,(int)missile[i]._miVar1,(int)missile[i]._miVar2,midir,7,0,local_30,1,
						 (int)missile[i]._mispllvl);
	iVar10 = (int)missile[i]._mispllvl + 3;
	midir = 1;
	if (0x13 < iVar10) {
		iVar10 = 0x13;
	}
	x2 = 4;
	if (1 < iVar10) {
		do {
			uVar9 = (uint)(byte)CrawlTable[*(int *)((int)local_80 + x2)];
			iVar8 = *(int *)((int)local_80 + x2) + 1;
			if (CrawlTable[*(int *)((int)local_80 + x2)] != 0) {
				do {
					x2 = x1 + (int)CrawlTable[iVar8];
					y2 = y1 + (int)CrawlTable[iVar8 + 1];
					if (((x2 - 1U < 0x5b) && (y2 - 1U < 0x5b)) && (0 < dung_map[x2 * 0x6c + y2].dMonster)) {
						midir_00 = GetDirection__Fiiii(x1,y1,x2,y2);
						AddMissile__Fiiiiiiciii(x1,y1,x2,y2,midir_00,7,0,local_30,1,(int)missile[i]._mispllvl);
					}
					uVar9 = uVar9 - 1;
					iVar8 = iVar8 + 2;
				} while (0 < (int)uVar9);
			}
			midir = midir + 1;
			x2 = midir * 4;
		} while (midir < iVar10);
	}
	midir = missile[i]._mirange + -1;
	missile[i]._mirange = midir;
	if (midir == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Misexp__Fi(int i /*$s1*/)
 // line 4547, offset 0x8014394c
	/* begin block 1 */
		// Start line: 4548
		// Start offset: 0x8014394C
		// Variables:
	// 		int ExpLight[10]; // stack offset -56
	/* end block 1 */
	// End offset: 0x80143C34
	// End Line: 4575

	/* begin block 2 */
		// Start line: 10286
	/* end block 2 */
	// End Line: 10287

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
	
	piVar2 = &DAT_80129e5c;
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
	} while (piVar4 + 4 != (int *)0x80129e7c);
	r = piVar4[5];
	piVar5[4] = iRam80129e7c;
	piVar5[5] = r;
	missile[i]._mirange = missile[i]._mirange + -1;
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	else {
		r = (int)missile[i]._miVar1;
		if (r == 0) {
			if (missile[i]._miAnimType == '(') {
				AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_38[0] >> 2) + 0x40);
			}
			else {
				if (missile[i]._miAnimType == '*') {
					AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_38[0] >> 2) + 0x30);
				}
				else {
					r = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,
														 (local_38[(int)missile[i]._miVar1] >> 2) + 0x10);
					missile[i]._mlid = (char)r;
				}
			}
		}
		else {
			if (missile[i]._miAnimType == '(') {
				i_00 = (int)missile[i]._mlid;
				x = (int)missile[i]._mix;
				y = (int)missile[i]._miy;
				r = (local_38[r] >> 2) + 0x40;
			}
			else {
				if (missile[i]._miAnimType == '*') {
					i_00 = (int)missile[i]._mlid;
					x = (int)missile[i]._mix;
					y = (int)missile[i]._miy;
					r = (local_38[r] >> 2) + 0x30;
				}
				else {
					i_00 = (int)missile[i]._mlid;
					x = (int)missile[i]._mix;
					y = (int)missile[i]._miy;
					r = (local_38[(int)missile[i]._miVar1] >> 2) + 0x10;
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
 // line 4578, offset 0x80143c4c
	/* begin block 1 */
		// Start line: 4579
		// Start offset: 0x80143C4C
		// Variables:
	// 		int monst; // $v1
	// 		int dam; // $t0
	/* end block 1 */
	// End offset: 0x80143DD8
	// End Line: 4599

	/* begin block 2 */
		// Start line: 10350
	/* end block 2 */
	// End Line: 10351

void MI_Acidsplat__Fi(int i)

{
	char cVar1;
	int v3;
	
	v3 = missile[i]._mirange;
	if (v3 == (int)missile[i]._miAnimLen) {
		missile[i]._mix = missile[i]._mix + '\x01';
		missile[i]._miy = missile[i]._miy + '\x01';
		missile[i]._miyoff = missile[i]._miyoff + -0x20;
		v3 = missile[i]._mirange;
	}
	missile[i]._mirange = v3 + -1;
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._misource;
		missile[i]._miDelFlag = '\x01';
		v3 = 2;
		if ((monster[(int)cVar1].MData)->mLevel < '\x02') {
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
 // line 4602, offset 0x80143de8
	/* begin block 1 */
		// Start line: 4603
		// Start offset: 0x80143DE8
		// Variables:
	// 		int id; // $s2
	// 		struct CBlocks *gblocks; // $s3
	/* end block 1 */
	// End offset: 0x8014418C
	// End Line: 4649

	/* begin block 2 */
		// Start line: 10404
	/* end block 2 */
	// End Line: 10405

void MI_Teleport__Fi(int i)

{
	char cVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	CBlocks *Bg;
	int pnum;
	
	Bg = BL_GetCurrentBlocks__Fv();
	if (Bg == (CBlocks *)0x0) {
		DBG_Error((char *)0x0,"source/MISSILES.cpp",(int)&DAT_000011ff);
	}
	missile[i]._mirange = missile[i]._mirange + -1;
	cVar1 = missile[i]._misource;
	pnum = (int)cVar1;
	if (missile[i]._mirange < 1) {
		missile[i]._miDelFlag = '\x01';
	}
	else {
		dung_map[(int)plr[pnum]._px * 0x6c + (int)plr[pnum]._py].dPlayer = '\0';
		PlrClrTrans__Fii((int)plr[pnum]._px,(int)plr[pnum]._py);
		plr[pnum]._px = (short)missile[i]._mix;
		plr[pnum]._py = (short)missile[i]._miy;
		plr[pnum]._pyoff = '\0';
		sVar2 = plr[pnum]._px;
		sVar3 = plr[pnum]._py;
		sVar4 = plr[pnum]._px;
		sVar5 = plr[pnum]._py;
		sVar6 = plr[pnum]._px;
		sVar7 = plr[pnum]._py;
		plr[pnum]._pxoff = '\0';
		plr[pnum]._pfutx = sVar4;
		plr[pnum]._pfuty = sVar5;
		plr[pnum]._poldx = sVar6;
		plr[pnum]._poldy = sVar7;
		PlrDoTrans__Fii((int)sVar2,(int)sVar3);
		missile[i]._miVar1 = 1;
		WorldToOffset__Fiii(pnum,(int)plr[pnum]._px << 3 | 4,(int)plr[pnum]._py << 3 | 4);
		dung_map[(int)plr[pnum]._px * 0x6c + (int)plr[pnum]._py].dPlayer = cVar1 + '\x01';
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
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Stone__Fi(int i /*$s0*/)
 // line 4768, offset 0x801441b0
	/* begin block 1 */
		// Start line: 4769
		// Start offset: 0x801441B0
		// Variables:
	// 		int m; // $a1
	/* end block 1 */
	// End offset: 0x80144348
	// End Line: 4796

	/* begin block 2 */
		// Start line: 10753
	/* end block 2 */
	// End Line: 10754

void MI_Stone__Fi(int i)

{
	int iVar1;
	
	iVar1 = (int)missile[i]._miVar2;
	missile[i]._mirange = missile[i]._mirange + -1;
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
// void /*$ra*/ MI_Boom__Fi(int i /*$s1*/)
 // line 4801, offset 0x8014435c
	/* begin block 1 */
		// Start line: 4802
		// Start offset: 0x8014435C
	/* end block 1 */
	// End offset: 0x8014443C
	// End Line: 4809

	/* begin block 2 */
		// Start line: 10825
	/* end block 2 */
	// End Line: 10826

void MI_Boom__Fi(int i)

{
	short sVar1;
	
	sVar1 = missile[i]._miVar1;
	missile[i]._mirange = missile[i]._mirange + -1;
	if (sVar1 == 0) {
		CheckMissileCol__FiiiUciiUc
							(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,
							 1);
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
 // line 4812, offset 0x80144454
	/* begin block 1 */
		// Start line: 4813
		// Start offset: 0x80144454
		// Variables:
	// 		int mix; // $s0
	// 		int miy; // $s3
	// 		int mix2; // $fp
	// 		int miy2; // $s7
	// 		int omx; // $s4
	// 		int omy; // $s6
	// 		int monst; // $s2
	/* end block 1 */
	// End offset: 0x801447CC
	// End Line: 4882

	/* begin block 2 */
		// Start line: 10852
	/* end block 2 */
	// End Line: 10853

void MI_Rhino__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	bool bVar6;
	uchar uVar7;
	long lVar8;
	long lVar9;
	int x;
	int i_00;
	int y;
	int y_00;
	int x_00;
	
	x_00 = 0;
	cVar1 = missile[i]._misource;
	i_00 = (int)cVar1;
	y_00 = 0;
	if (monster[i_00]._mmode == '\x0e') {
		GetMissilePos__Fi(i);
		cVar2 = missile[i]._miy;
		cVar3 = missile[i]._mix;
		dung_map[(int)cVar3 * 0x6c + (int)cVar2].dMonster = 0;
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
			lVar8 = missile[i]._mitxoff + missile[i]._mixvel;
			lVar9 = missile[i]._mityoff + missile[i]._miyvel;
		}
		missile[i]._mitxoff = lVar8;
		missile[i]._mityoff = lVar9;
		GetMissilePos__Fi(i);
		bVar6 = false;
		cVar4 = missile[i]._mix;
		x = (int)cVar4;
		cVar5 = missile[i]._miy;
		y = (int)cVar5;
		uVar7 = PosOkMonst__Fiii(i_00,x,y);
		if ((uVar7 != '\0') &&
			 ((monster[i_00]._mAi != '\x18' || (uVar7 = PosOkMonst__Fiii(i_00,x_00,y_00), uVar7 != '\0')))
			 ) {
			bVar6 = true;
		}
		if (bVar6) {
			dung_map[x * 0x6c + y].dMonster = ~(short)cVar1;
			monster[i_00]._mfutx = cVar4;
			monster[i_00]._moldx = cVar4;
			monster[i_00]._mx = cVar4;
			monster[i_00]._mfuty = cVar5;
			monster[i_00]._moldy = cVar5;
			uVar7 = monster[i_00]._uniqtype;
			monster[i_00]._my = cVar5;
			if (uVar7 != '\0') {
				ChangeLightXY__Fiii((int)missile[i]._mlid,x,y);
			}
			MoveMissilePos__Fi(i);
			PutMissile__Fi(i);
		}
		else {
			MissToMonst__Fiii(i,(int)cVar3,(int)cVar2);
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
 // line 4965, offset 0x80144800
	/* begin block 1 */
		// Start line: 4966
		// Start offset: 0x80144800
		// Variables:
	// 		struct MissileStruct *miss; // $s0
	// 		int tx; // $s3
	// 		int ty; // $s2
	// 		int pn; // $v1
	// 		int id; // $s1
	/* end block 1 */
	// End offset: 0x80144A68
	// End Line: 5000

	/* begin block 2 */
		// Start line: 11190
	/* end block 2 */
	// End Line: 11191

void MI_FirewallC__Fi(int i)

{
	int iVar1;
	int iVar2;
	int sy;
	int sx;
	int id;
	
	id = (int)missile[i]._misource;
	iVar1 = missile[i]._mirange + -1;
	missile[i]._mirange = iVar1;
	if (iVar1 == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	else {
		sy = (int)missile[i]._miVar2;
		sx = (int)missile[i]._miVar1;
		iVar1 = XDirAdd[(int)missile[i]._miVar3];
		iVar2 = YDirAdd[(int)missile[i]._miVar3];
		if ((((nMissileTable[(int)dung_map[sx * 0x6c + sy].dPiece] == '\0') && (missile[i]._miVar8 == 0)
				 ) && ((sx + iVar1) - 1U < 0x5b)) && ((sy + iVar2) - 1U < 0x5b)) {
			AddMissile__Fiiiiiiciii(sx,sy,sx,sy,(int)plr[id]._pdir,5,0,id,0,(int)missile[i]._mispllvl);
			missile[i]._miVar1 = (short)(sx + iVar1);
			missile[i]._miVar2 = (short)(sy + iVar2);
		}
		else {
			missile[i]._miVar8 = 1;
		}
		sy = (int)missile[i]._miVar6;
		sx = (int)missile[i]._miVar5;
		iVar1 = XDirAdd[(int)missile[i]._miVar4];
		iVar2 = YDirAdd[(int)missile[i]._miVar4];
		if (((nMissileTable[(int)dung_map[sx * 0x6c + sy].dPiece] == '\0') && (missile[i]._miVar7 == 0))
			 && (((sx + iVar1) - 1U < 0x5b && ((sy + iVar2) - 1U < 0x5b)))) {
			AddMissile__Fiiiiiiciii(sx,sy,sx,sy,(int)plr[id]._pdir,5,0,id,0,(int)missile[i]._mispllvl);
			missile[i]._miVar5 = (short)(sx + iVar1);
			missile[i]._miVar6 = (short)(sy + iVar2);
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
 // line 5005, offset 0x80144a88
	/* begin block 1 */
		// Start line: 5006
		// Start offset: 0x80144A88
	/* end block 1 */
	// End offset: 0x80144B30
	// End Line: 5014

	/* begin block 2 */
		// Start line: 11283
	/* end block 2 */
	// End Line: 11284

void MI_Infra__Fi(int i)

{
	char cVar1;
	
	cVar1 = missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange + -1;
	plr[(int)cVar1]._pInfraFlag = '\x01';
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
		CalcPlrItemVals__FiUc((int)missile[i]._misource,'\x01');
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Apoca__Fi(int i /*$s2*/)
 // line 5019, offset 0x80144b40
	/* begin block 1 */
		// Start line: 5020
		// Start offset: 0x80144B40
		// Variables:
	// 		int j; // $s3
	// 		int k; // $s1
	// 		int id; // $s4
	// 		unsigned char exit; // $a1
	/* end block 1 */
	// End offset: 0x80144DA4
	// End Line: 5044

	/* begin block 2 */
		// Start line: 11315
	/* end block 2 */
	// End Line: 11316

void MI_Apoca__Fi(int i)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	short sVar4;
	int sx;
	short sVar5;
	int sy;
	int iVar6;
	
	sVar4 = 0;
	sVar5 = missile[i]._miVar2;
	sy = (int)sVar5;
	cVar1 = missile[i]._misource;
	bVar2 = false;
	if (sy < (int)missile[i]._miVar3) {
		iVar6 = sy * 0xc;
		do {
			sVar4 = missile[i]._miVar4;
			sx = (int)sVar4;
			if (sx < (int)missile[i]._miVar5) {
				if (!bVar2) {
					iVar3 = sx * 0x510 + iVar6;
					do {
						if ((3 < *(short *)((int)&dung_map[0].dMonster + iVar3)) &&
							 (nSolidTable[(int)*(short *)((int)&dung_map[0].dPiece + iVar3)] == '\0')) {
							AddMissile__Fiiiiiiciii
												(sx,sy,sx,sy,(int)plr[(int)cVar1]._pdir,0x24,0,(int)cVar1,missile[i]._midam,
												 0);
							bVar2 = true;
						}
						sx = sx + 1;
						sVar4 = (short)sx;
						iVar3 = iVar3 + 0x510;
					} while ((sx < (int)missile[i]._miVar5) && (!bVar2));
					goto LAB_80144cec;
				}
			}
			else {
LAB_80144cec:
				if (!bVar2) {
					missile[i]._miVar4 = missile[i]._miVar6;
				}
			}
			sy = sy + 1;
			sVar5 = (short)sy;
			iVar6 = iVar6 + 0xc;
		} while ((sy < (int)missile[i]._miVar3) && (!bVar2));
	}
	if (bVar2) {
		missile[i]._miVar2 = sVar5 + -1;
		missile[i]._miVar4 = sVar4;
	}
	else {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Wave__Fi(int i /*$s4*/)
 // line 5048, offset 0x80144dd4
	/* begin block 1 */
		// Start line: 5049
		// Start offset: 0x80144DD4
		// Variables:
	// 		int dira; // stack offset -128
	// 		int dirb; // stack offset -120
	// 		int nxa; // $s1
	// 		int nya; // $s2
	// 		int nxb; // $s0
	// 		int nyb; // $s3
	// 		int pn; // $a0
	// 		int sd; // $v0
	// 		int j; // $s5
	// 		int f1; // stack offset -112
	// 		int f2; // stack offset -104
	// 		int id; // $s6
	// 		int sx; // $s0
	// 		int sy; // $s7
	/* end block 1 */
	// End offset: 0x8014529C
	// End Line: 5104

	/* begin block 2 */
		// Start line: 11384
	/* end block 2 */
	// End Line: 11385

void MI_Wave__Fi(int i)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	uint uVar4;
	uint uVar5;
	int sx;
	int x1;
	int sx_00;
	int sy;
	int iVar6;
	int id;
	int y1;
	int *piVar7;
	
	bVar1 = false;
	bVar2 = false;
	x1 = (int)missile[i]._mix;
	y1 = (int)missile[i]._miy;
	id = (int)missile[i]._misource;
	iVar3 = GetDirection__Fiiii(x1,y1,(int)missile[i]._miVar1,(int)missile[i]._miVar2);
	piVar7 = YDirAdd + iVar3;
	sy = y1 + *piVar7;
	sx = XDirAdd[iVar3];
	sx_00 = x1 + sx;
	uVar5 = iVar3 - 2U & 7;
	uVar4 = iVar3 + 2U & 7;
	if (nMissileTable[(int)dung_map[sx_00 * 0x6c + sy].dPiece] == '\0') {
		AddMissile__Fiiiiiiciii
							(sx_00,sy,sx_00 + sx,sy + *piVar7,(int)plr[id]._pdir,0xe,0,id,0,
							 (int)missile[i]._mispllvl);
		iVar6 = 0;
		sx_00 = sx_00 + XDirAdd[uVar5];
		sy = sy + YDirAdd[uVar5];
		sx = x1 + XDirAdd[iVar3] + XDirAdd[uVar4];
		x1 = y1 + *piVar7 + YDirAdd[uVar4];
		if (0 < ((int)((uint)(byte)missile[i]._mispllvl << 0x18) >> 0x19) + 2) {
			y1 = sy * 2;
			do {
				if ((((nMissileTable[(int)(&dung_map[sx_00 * 0x6c].dPiece)[(y1 + sy) * 2]] != '\0') ||
						 (bVar1)) || (0x5a < sx_00 - 1U)) || (0x5a < sy - 1U)) {
					bVar1 = true;
				}
				else {
					AddMissile__Fiiiiiiciii
										(sx_00,sy,sx_00 + XDirAdd[iVar3],sy + *piVar7,(int)plr[id]._pdir,0xe,0,id,0,
										 (int)missile[i]._mispllvl);
					sx_00 = sx_00 + XDirAdd[uVar5];
					sy = sy + YDirAdd[uVar5];
				}
				if (((nMissileTable[(int)dung_map[sx * 0x6c + x1].dPiece] != '\0') || (bVar2)) ||
					 ((0x5a < sx - 1U || (0x5a < x1 - 1U)))) {
					bVar2 = true;
				}
				else {
					AddMissile__Fiiiiiiciii
										(sx,x1,sx + XDirAdd[iVar3],x1 + *piVar7,(int)plr[id]._pdir,0xe,0,id,0,
										 (int)missile[i]._mispllvl);
					sx = sx + XDirAdd[uVar4];
					x1 = x1 + YDirAdd[uVar4];
				}
				iVar6 = iVar6 + 1;
				y1 = sy << 1;
			} while (iVar6 < ((int)((uint)(byte)missile[i]._mispllvl << 0x18) >> 0x19) + 2);
		}
	}
	missile[i]._mirange = missile[i]._mirange + -1;
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Nova__Fi(int i /*stack -56*/)
 // line 5110, offset 0x801452d0
	/* begin block 1 */
		// Start line: 5111
		// Start offset: 0x801452D0
		// Variables:
	// 		int k; // stack offset -48
	// 		int id; // $s5
	// 		int sx; // $s3
	// 		int sy; // $s2
	// 		int dir; // $s6
	// 		int en; // $v0
	// 		int sx1; // $a0
	// 		int sy1; // $a1
	// 		int dam; // $fp
	/* end block 1 */
	// End offset: 0x8014555C
	// End Line: 5156

	/* begin block 2 */
		// Start line: 11583
	/* end block 2 */
	// End Line: 11584

void MI_Nova__Fi(int i)

{
	uint micaster;
	uint uVar1;
	byte bVar2;
	uchar *puVar3;
	int sy;
	int sx;
	uchar *puVar4;
	int id;
	int midir;
	int v3;
	int local_30;
	
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
	local_30 = 0;
	puVar3 = s__800c6c3f;
	puVar4 = &UCHAR_04h_800c6c3e;
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
		local_30 = local_30 + 1;
	} while (local_30 < 0x17);
	missile[i]._mirange = missile[i]._mirange + -1;
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Flame__Fi(int i /*$s2*/)
 // line 5220, offset 0x80145590
	/* begin block 1 */
		// Start line: 5221
		// Start offset: 0x80145590
		// Variables:
	// 		int k; // $s1
	/* end block 1 */
	// End offset: 0x8014576C
	// End Line: 5244

	/* begin block 2 */
		// Start line: 11828
	/* end block 2 */
	// End Line: 11829

void MI_Flame__Fi(int i)

{
	char cVar1;
	short sVar2;
	int iVar3;
	
	missile[i]._mirange = missile[i]._mirange + -1;
	missile[i]._miVar2 = missile[i]._miVar2 + -1;
	iVar3 = missile[i]._mirange;
	CheckMissileCol__FiiiUciiUc
						(i,missile[i]._midam,missile[i]._midam,'\x01',(int)missile[i]._mix,(int)missile[i]._miy,
						 0);
	if ((missile[i]._mirange == 0) && (missile[i]._miHitFlag == '\x01')) {
		missile[i]._mirange = iVar3;
	}
	sVar2 = missile[i]._miVar2;
	if (sVar2 == 0) {
		missile[i]._miAnimFrame = '\x14';
		sVar2 = missile[i]._miVar2;
	}
	if (sVar2 < 1) {
		iVar3 = (int)missile[i]._miAnimFrame;
		if (0xb < iVar3) {
			iVar3 = 0x18 - iVar3;
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
											 (iVar3 >> 3) + 0x11);
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
 // line 5248, offset 0x80145788
	/* begin block 1 */
		// Start line: 5249
		// Start offset: 0x80145788
		// Variables:
	// 		int id; // $s2
	// 		int pn; // $v0
	/* end block 1 */
	// End offset: 0x801459F4
	// End Line: 5275

	/* begin block 2 */
		// Start line: 11896
	/* end block 2 */
	// End Line: 11897

void MI_Flamec__Fi(int i)

{
	char cVar1;
	short sVar2;
	int sx;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = missile[i]._mixvel;
	iVar3 = missile[i]._mityoff;
	iVar5 = missile[i]._miyvel;
	cVar1 = missile[i]._misource;
	missile[i]._mirange = missile[i]._mirange + -1;
	sx = missile[i]._mitxoff;
	missile[i]._mityoff = iVar3 + iVar5;
	missile[i]._mitxoff = sx + iVar4;
	GetMissilePos__Fi(i);
	sx = (int)missile[i]._mix;
	if ((sx != (int)missile[i]._miVar1) || ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
		if (nMissileTable[(int)dung_map[sx * 0x6c + (int)missile[i]._miy].dPiece] == '\0') {
			AddMissile__Fiiiiiiciii
								(sx,(int)missile[i]._miy,(int)missile[i]._misx,(int)missile[i]._misy,i,0x30,
								 (int)*(char *)&missile[i]._micaster,(int)cVar1,(int)missile[i]._miVar3,
								 (int)missile[i]._mispllvl);
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
// void /*$ra*/ MI_Cbolt__Fi(int i /*$s1*/)
 // line 5279, offset 0x80145a10
	/* begin block 1 */
		// Start line: 5280
		// Start offset: 0x80145A10
		// Variables:
	// 		int bpath[16]; // stack offset -88
	// 		int sx; // $a1
	// 		int sy; // $a2
	// 		int dy; // $v0
	// 		int md; // $v0
	/* end block 1 */
	// End offset: 0x80145CFC
	// End Line: 5322

	/* begin block 2 */
		// Start line: 11977
	/* end block 2 */
	// End Line: 11978

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
	piVar8 = &DAT_80129e84;
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
	} while (piVar8 != (int *)0x80129ec4);
	missile[i]._mirange = missile[i]._mirange + -1;
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
		CheckMissileCol__FiiiUciiUc
							(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,
							 0);
		if (missile[i]._miHitFlag == '\x01') {
			missile[i]._miVar1 = 8;
			missile[i]._mimfnum = '\0';
			missile[i]._mixoff = '\0';
			missile[i]._miyoff = '\0';
			SetMissAnim__Fii(i,3);
			missile[i]._mirange = (int)missile[i]._miAnimLen;
			GetMissilePos__Fi(i);
		}
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x41);
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
// void /*$ra*/ MI_Hbolt__Fi(int i /*$s1*/)
 // line 5326, offset 0x80145d14
	/* begin block 1 */
		// Start line: 5327
		// Start offset: 0x80145D14
		// Variables:
	// 		int dam; // $a1
	/* end block 1 */
	// End offset: 0x80146008
	// End Line: 5364

	/* begin block 2 */
		// Start line: 12088
	/* end block 2 */
	// End Line: 12089

void MI_Hbolt__Fi(int i)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	short sVar4;
	int iVar5;
	int iVar6;
	
	uVar2 = missile[i]._miAnimType;
	missile[i]._mirange = missile[i]._mirange + -1;
	if (uVar2 == '\x1c') {
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x44);
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
			CheckMissileCol__FiiiUciiUc
								(i,missile[i]._midam,missile[i]._midam,'\0',(int)missile[i]._mix,
								 (int)missile[i]._miy,0);
		}
		if (missile[i]._mirange == 0) {
			iVar5 = missile[i]._mityoff;
			iVar6 = missile[i]._miyvel;
			missile[i]._mitxoff = missile[i]._mitxoff - missile[i]._mixvel;
			missile[i]._mityoff = iVar5 - iVar6;
			GetMissilePos__Fi(i);
			missile[i]._mimfnum = '\0';
			SetMissAnim__Fii(i,0x1c);
			missile[i]._mirange = (int)missile[i]._miAnimLen + -1;
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
// void /*$ra*/ MI_Element__Fi(int i /*$s4*/)
 // line 5368, offset 0x80146020
	/* begin block 1 */
		// Start line: 5369
		// Start offset: 0x80146020
		// Variables:
	// 		int mid; // $v0
	// 		int sd; // $s0
	// 		int dam; // $s2
	// 		int cx; // $s3
	// 		int cy; // $s5
	// 		int px; // $s1
	// 		int py; // $s6
	// 		int id; // $s1
	/* end block 1 */
	// End offset: 0x801466A4
	// End Line: 5447

	/* begin block 2 */
		// Start line: 12195
	/* end block 2 */
	// End Line: 12196

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
	missile[i]._mirange = missile[i]._mirange + -1;
	dir = (int)missile[i]._misource;
	if (missile[i]._miAnimType == '\x13') {
		mx = (int)missile[i]._mix;
		dx = (int)missile[i]._miy;
		my = (int)plr[dir]._px;
		fy = (int)plr[dir]._py;
		ChangeLight__Fiiii((int)missile[i]._mlid,mx,dx,0x34);
		dir = CheckBlock__Fiiii(my,fy,mx,dx);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',mx,dx,1);
		}
		ty_00 = dx + 1;
		dir = CheckBlock__Fiiii(my,fy,mx,ty_00);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',mx,ty_00,1);
		}
		ty = dx + -1;
		dir = CheckBlock__Fiiii(my,fy,mx,ty);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',mx,ty,1);
		}
		tx = mx + 1;
		dir = CheckBlock__Fiiii(my,fy,tx,dx);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',tx,dx,1);
		}
		dir = CheckBlock__Fiiii(my,fy,tx,ty);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',tx,ty,1);
		}
		dir = CheckBlock__Fiiii(my,fy,tx,ty_00);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',tx,ty_00,1);
		}
		mx = mx + -1;
		dir = CheckBlock__Fiiii(my,fy,mx,dx);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',mx,dx,1);
		}
		dir = CheckBlock__Fiiii(my,fy,mx,ty_00);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',mx,ty_00,1);
		}
		dir = CheckBlock__Fiiii(my,fy,mx,ty);
		if (dir == 0) {
			CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\x01',mx,ty,1);
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
		CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',mx,my,0);
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
			ChangeLight__Fiiii((int)cVar3,mx,my,0x31);
		}
		if (missile[i]._mirange == 0) {
			missile[i]._mimfnum = '\0';
			SetMissAnim__Fii(i,0x13);
			missile[i]._mirange = (int)missile[i]._miAnimLen + -1;
		}
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Bonespirit__Fi(int i /*$s1*/)
 // line 5451, offset 0x801466d8
	/* begin block 1 */
		// Start line: 5452
		// Start offset: 0x801466D8
		// Variables:
	// 		int mid; // $v0
	// 		int sd; // $s0
	// 		int dam; // $s2
	// 		int cx; // $s3
	// 		int cy; // $s4
	// 		int id; // $s5
	/* end block 1 */
	// End offset: 0x80146AB8
	// End Line: 5520

	/* begin block 2 */
		// Start line: 12395
	/* end block 2 */
	// End Line: 12396

void MI_Bonespirit__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	int dir;
	int mx;
	int my;
	int mindam;
	
	mindam = missile[i]._midam;
	missile[i]._mirange = missile[i]._mirange + -1;
	cVar1 = missile[i]._misource;
	if (missile[i]._mimfnum == '\b') {
		ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,0x71);
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
		cVar2 = missile[i]._mix;
		mx = (int)cVar2;
		cVar3 = missile[i]._miy;
		my = (int)cVar3;
		CheckMissileCol__FiiiUciiUc(i,mindam,mindam,'\0',mx,my,0);
		if (((missile[i]._miVar3 == 0) && (mx == (int)missile[i]._miVar4)) &&
			 (my == (int)missile[i]._miVar5)) {
			missile[i]._miVar3 = 1;
		}
		if (missile[i]._miVar3 == 1) {
			missile[i]._miVar3 = 2;
			missile[i]._mirange = 0xff;
			mindam = FindClosest__Fiii(mx,my,0x13);
			if (mindam < 1) {
				mindam = (int)plr[(int)cVar1]._pdir;
				SetMissDir__Fii(i,mindam);
				dir = mx + XDirAdd[mindam];
				mindam = my + YDirAdd[mindam];
			}
			else {
				missile[i]._midam = (int)((uint)(ushort)monster[mindam]._mhitpoints << 0x10) >> 0x17;
				dir = GetDirection8__Fiiii(mx,my,(int)monster[mindam]._mx,(int)monster[mindam]._my);
				SetMissDir__Fii(i,dir);
				dir = (int)monster[mindam]._mx;
				mindam = (int)monster[mindam]._my;
			}
			GetMissileVel__Fiiiiii(i,mx,my,dir,mindam,0x10);
		}
		if ((mx != (int)missile[i]._miVar1) || (my != (int)missile[i]._miVar2)) {
			cVar1 = missile[i]._mlid;
			missile[i]._miVar1 = (short)cVar2;
			missile[i]._miVar2 = (short)cVar3;
			ChangeLight__Fiiii((int)cVar1,mx,my,0x72);
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
 // line 5524, offset 0x80146ae0
	/* begin block 1 */
		// Start line: 5525
		// Start offset: 0x80146AE0
	/* end block 1 */
	// End offset: 0x80146B40
	// End Line: 5530

	/* begin block 2 */
		// Start line: 12572
	/* end block 2 */
	// End Line: 12573

void MI_ResurrectBeam__Fi(int i)

{
	missile[i]._mirange = missile[i]._mirange + -1;
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MI_Rportal__Fi(int i /*$s1*/)
 // line 5534, offset 0x80146b50
	/* begin block 1 */
		// Start line: 5535
		// Start offset: 0x80146B50
		// Variables:
	// 		int ExpLight[17]; // stack offset -88
	/* end block 1 */
	// End offset: 0x80146D5C
	// End Line: 5555

	/* begin block 2 */
		// Start line: 12595
	/* end block 2 */
	// End Line: 12596

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
	piVar5 = &DAT_80129e18;
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
	} while (piVar5 != (int *)0x80129e58);
	*piVar6 = iRam80129e58;
	if (1 < missile[i]._mirange) {
		missile[i]._mirange = missile[i]._mirange + -1;
	}
	if (missile[i]._mirange == (int)missile[i]._miVar1) {
		SetMissDir__Fii(i,1);
	}
	if ((currlevel == '\0') || (missile[i]._mimfnum == '\x01')) {
LAB_80146d08:
		if (missile[i]._mirange != 0) goto LAB_80146d54;
	}
	else {
		if (missile[i]._mirange != 0) {
			if (missile[i]._miVar2 == 0) {
				iVar2 = AddLight__Fiii((int)missile[i]._mix,(int)missile[i]._miy,(local_58[0] >> 2) + 0x10);
				missile[i]._mlid = (char)iVar2;
			}
			ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._mix,(int)missile[i]._miy,
												 (local_58[(int)missile[i]._miVar2] >> 2) + 0x10);
			missile[i]._miVar2 = missile[i]._miVar2 + 1;
			goto LAB_80146d08;
		}
	}
	cVar1 = missile[i]._mlid;
	missile[i]._miDelFlag = '\x01';
	AddUnLight__Fi((int)cVar1);
LAB_80146d54:
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessMissiles__Fv()
 // line 5561, offset 0x80146d74
	/* begin block 1 */
		// Start line: 5562
		// Start offset: 0x80146D74
		// Variables:
	// 		int i; // $s1
	// 		int mi; // $a0
	/* end block 1 */
	// End offset: 0x8014714C
	// End Line: 5614

	/* begin block 2 */
		// Start line: 12655
	/* end block 2 */
	// End Line: 12656

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessMissiles__Fv(void)

{
	char cVar1;
	char cVar2;
	int *piVar3;
	int mi;
	int i;
	
	i = 0;
	if (0 < nummissiles) {
		piVar3 = &missileactive;
		do {
			mi = *piVar3;
			dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dFlags =
					 dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dFlags & 0xfe;
			dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dMissile = '\0';
			i = i + 1;
			piVar3 = piVar3 + 1;
		} while (i < nummissiles);
	}
	i = 0;
	if (0 < nummissiles) {
		piVar3 = &missileactive;
		do {
			mi = *piVar3;
			piVar3 = piVar3 + 1;
			if (missile[mi]._miDelFlag == '\0') {
				i = i + 1;
			}
			else {
				DeleteMissile__Fii(mi,i);
				i = 0;
				piVar3 = &missileactive;
			}
		} while (i < nummissiles);
	}
	MissilePreFlag = '\0';
	ManashieldFlag = '\0';
	ManashieldFlag2 = '\0';
	i = 0;
	if (0 < nummissiles) {
		mi = 0;
		do {
			mi = *(int *)((int)&missileactive + mi);
			(*missiledata[(int)missile[mi]._mitype].mProc)();
			if (((missile[mi]._miAnimFlags & 2) == 0) &&
				 (cVar2 = missile[mi]._miAnimDelay, missile[mi]._miAnimCnt = missile[mi]._miAnimCnt + '\x01'
				 , cVar2 <= missile[mi]._miAnimCnt)) {
				cVar2 = missile[mi]._miAnimFrame;
				cVar1 = missile[mi]._miAnimAdd;
				missile[mi]._miAnimCnt = '\0';
				cVar2 = cVar2 + cVar1;
				missile[mi]._miAnimFrame = cVar2;
				if (missile[mi]._miAnimLen < cVar2) {
					missile[mi]._miAnimFrame = '\x01';
				}
				if (missile[mi]._miAnimFrame < '\x01') {
					missile[mi]._miAnimFrame = missile[mi]._miAnimLen;
				}
			}
			i = i + 1;
			mi = i * 4;
		} while (i < nummissiles);
	}
	if (((ManashieldFlag != '\0') || (ManashieldFlag2 != '\0')) && (i = 0, 0 < nummissiles)) {
		piVar3 = &missileactive;
		do {
			if (missile[*piVar3]._mitype == '\r') {
				MI_Manashield__Fi(*piVar3);
			}
			i = i + 1;
			piVar3 = piVar3 + 1;
		} while (i < nummissiles);
	}
	i = 0;
	if (0 < nummissiles) {
		piVar3 = &missileactive;
		do {
			mi = *piVar3;
			piVar3 = piVar3 + 1;
			if (missile[mi]._miDelFlag == '\0') {
				i = i + 1;
			}
			else {
				DeleteMissile__Fii(mi,i);
				i = 0;
				piVar3 = &missileactive;
			}
		} while (i < nummissiles);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearMissileSpot__Fi(int mi /*$a0*/)
 // line 5653, offset 0x80147168
	/* begin block 1 */
		// Start line: 5654
		// Start offset: 0x80147168
	/* end block 1 */
	// End offset: 0x80147218
	// End Line: 5657

	/* begin block 2 */
		// Start line: 12850
	/* end block 2 */
	// End Line: 12851

void ClearMissileSpot__Fi(int mi)

{
	dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dFlags =
			 dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dFlags & 0xfe;
	dung_map[(int)missile[mi]._mix * 0x6c + (int)missile[mi]._miy].dMissile = '\0';
	return;
}





