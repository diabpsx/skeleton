#include "THISDUST.H"
#include "DRLG_L1.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_PlaceDoor__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 271, offset 0x8013bcb0
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x8013BCB0
		// Variables:
	// 		unsigned char c; // $a3
	// 		unsigned char df; // $t0
	/* end block 1 */
	// End offset: 0x8013C188
	// End Line: 309

	/* begin block 2 */
		// Start line: 545
	/* end block 2 */
	// End Line: 546

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_PlaceDoor__Fii(int x,int y)

{
	char cVar1;
	ushort *puVar2;
	byte bVar3;
	
	if ((mydflags[y * 0x28 + x] & 0x80) == 0) {
		bVar3 = mydflags[y * 0x28 + x] & 0x7f;
		puVar2 = dungeon + x * 0x30 + y;
		cVar1 = *(char *)puVar2;
		if (bVar3 == 1) {
			if (y != 1) {
				if (cVar1 == '\x02') {
					*puVar2 = 0x1a;
				}
				if (cVar1 == '\a') {
					*puVar2 = 0x1f;
				}
				if (cVar1 == '\x0e') {
					*puVar2 = 0x2a;
				}
				if (cVar1 == '\x04') {
					*puVar2 = 0x2b;
				}
			}
			if (x != 1) {
				if (cVar1 == '\x01') {
					dungeon[x * 0x30 + y] = 0x19;
				}
				if (cVar1 == '\n') {
					dungeon[x * 0x30 + y] = 0x28;
				}
				if (cVar1 == '\x06') {
					dungeon[x * 0x30 + y] = 0x1e;
				}
			}
		}
		if (bVar3 == 2) {
			if (x != 1) {
				if (cVar1 == '\x01') {
					dungeon[x * 0x30 + y] = 0x19;
				}
				if (cVar1 == '\x06') {
					dungeon[x * 0x30 + y] = 0x1e;
				}
				if (cVar1 == '\n') {
					dungeon[x * 0x30 + y] = 0x28;
				}
				if (cVar1 == '\x04') {
					dungeon[x * 0x30 + y] = 0x29;
				}
			}
			if (y != 1) {
				if (cVar1 == '\x02') {
					dungeon[x * 0x30 + y] = 0x1a;
				}
				if (cVar1 == '\x0e') {
					dungeon[x * 0x30 + y] = 0x2a;
				}
				if (cVar1 == '\a') {
					dungeon[x * 0x30 + y] = 0x1f;
				}
			}
		}
		if (bVar3 == 3) {
			if (x != 1) {
				if ((y != 1) && (cVar1 == '\x04')) {
					dungeon[x * 0x30 + y] = 0x1c;
				}
				if ((x != 1) && (cVar1 == '\n')) {
					dungeon[x * 0x30 + y] = 0x28;
				}
			}
			if (y != 1) {
				if (cVar1 == '\x0e') {
					dungeon[x * 0x30 + y] = 0x2a;
				}
				if (cVar1 == '\x02') {
					dungeon[x * 0x30 + y] = 0x1a;
				}
			}
			if ((x != 1) && (cVar1 == '\x01')) {
				dungeon[x * 0x30 + y] = 0x19;
			}
			if ((y != 1) && (cVar1 == '\a')) {
				dungeon[x * 0x30 + y] = 0x1f;
			}
			if ((x != 1) && (cVar1 == '\x06')) {
				dungeon[x * 0x30 + y] = 0x1e;
			}
		}
	}
	mydflags[y * 0x28 + x] = -0x80;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L1Shadows__Fv()
 // line 329, offset 0x8013c190
	/* begin block 1 */
		// Start line: 330
		// Start offset: 0x8013C190
		// Variables:
	// 		int x; // $t3
	// 		int y; // $t5
	// 		int i; // $a3
	// 		int patflag; // $a1
	// 		unsigned char sd[2][2]; // stack offset -24
	// 		unsigned char tnv3; // $v0
	/* end block 1 */
	// End offset: 0x8013C588
	// End Line: 394

	/* begin block 2 */
		// Start line: 658
	/* end block 2 */
	// End Line: 659

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L1Shadows__Fv(void)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	uchar uVar4;
	short sVar5;
	bool bVar6;
	uchar *puVar7;
	uchar *puVar8;
	ushort uVar9;
	ushort *puVar10;
	ushort *puVar11;
	ushort *puVar12;
	int iVar13;
	int iVar14;
	uchar *puVar15;
	int iVar16;
	ushort *puVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	puVar7 = mydflags;
	iVar18 = 1;
	iVar20 = 0x28;
	do {
		iVar16 = 1;
		puVar17 = dungeon;
		iVar19 = iVar20;
		puVar12 = dungeon;
		do {
			puVar12 = puVar12 + 0x30;
			iVar19 = iVar19 + 1;
			puVar11 = puVar12 + iVar18;
			uVar1 = BSTYPES[(uint)*puVar11];
			puVar10 = puVar17 + iVar18;
			uVar2 = BSTYPES[(uint)*puVar10];
			iVar14 = 0;
			uVar3 = BSTYPES[(uint)puVar11[-1]];
			puVar15 = puVar7 + iVar19;
			uVar4 = BSTYPES[(uint)puVar10[-1]];
			iVar13 = 0;
			do {
				if ((&SPATS.strig)[iVar13] == uVar1) {
					bVar6 = (&SPATS.s1)[iVar13] == '\0' || (&SPATS.s1)[iVar13] == uVar4;
					if (((&SPATS.s2)[iVar13] != '\0') && ((&SPATS.s2)[iVar13] != uVar3)) {
						bVar6 = false;
					}
					if (((&SPATS.s3)[iVar13] != '\0') && ((&SPATS.s3)[iVar13] != uVar2)) {
						bVar6 = false;
					}
					if (bVar6) {
						if (((&SPATS.nv1)[iVar13] != 0) && (puVar15[-0x29] == '\0')) {
							puVar10[-1] = (ushort)(&SPATS.nv1)[iVar13];
						}
						if (((&SPATS.nv2)[iVar13] != 0) && (puVar15[-0x28] == '\0')) {
							puVar11[-1] = (ushort)(&SPATS.nv2)[iVar13];
						}
						if (((&SPATS.nv3)[iVar13] != 0) && (puVar15[-1] == '\0')) {
							*puVar10 = (ushort)(&SPATS.nv3)[iVar13];
						}
					}
				}
				puVar8 = mydflags;
				iVar14 = iVar14 + 1;
				iVar13 = iVar13 + 7;
			} while (iVar14 < 0x25);
			iVar16 = iVar16 + 1;
			puVar17 = puVar17 + 0x30;
		} while (iVar16 < 0x28);
		iVar18 = iVar18 + 1;
		iVar20 = iVar20 + 0x28;
	} while (iVar18 < 0x28);
	iVar18 = 1;
	iVar20 = 0x28;
	do {
		iVar16 = iVar18 * 2;
		puVar12 = dungeon;
		iVar13 = 0x60;
		iVar14 = -0x7ff1bedc;
		iVar19 = iVar20;
		do {
			uVar9 = puVar12[iVar18];
			if ((uVar9 == 0x8b) && (puVar8[iVar19] == '\0')) {
				sVar5 = *(short *)(iVar16 + iVar14);
				uVar9 = 0x8b;
				if (sVar5 == 0x1d) {
					uVar9 = 0x8d;
				}
				if (sVar5 == 0x20) {
					uVar9 = 0x8d;
				}
				if (sVar5 == 0x23) {
					uVar9 = 0x8d;
				}
				if (sVar5 == 0x25) {
					uVar9 = 0x8d;
				}
				if (sVar5 == 0x26) {
					uVar9 = 0x8d;
				}
				if (sVar5 == 0x27) {
					uVar9 = 0x8d;
				}
				puVar12[iVar18] = uVar9;
				uVar9 = puVar12[iVar18];
			}
			if ((uVar9 == 0x95) && (puVar8[iVar19] == '\0')) {
				sVar5 = *(short *)((int)dungeon + iVar16 + iVar13);
				uVar9 = 0x95;
				if (sVar5 == 0x1d) {
					uVar9 = 0x99;
				}
				if (sVar5 == 0x20) {
					uVar9 = 0x99;
				}
				if (sVar5 == 0x23) {
					uVar9 = 0x99;
				}
				if (sVar5 == 0x25) {
					uVar9 = 0x99;
				}
				if (sVar5 == 0x26) {
					uVar9 = 0x99;
				}
				if (sVar5 == 0x27) {
					uVar9 = 0x99;
				}
				puVar12[iVar18] = uVar9;
			}
			if ((puVar12[iVar18] == 0x94) && (puVar8[iVar19] == '\0')) {
				sVar5 = *(short *)((int)dungeon + iVar16 + iVar13);
				uVar9 = 0x94;
				if (sVar5 == 0x1d) {
					uVar9 = 0x9a;
				}
				if (sVar5 == 0x20) {
					uVar9 = 0x9a;
				}
				if (sVar5 == 0x23) {
					uVar9 = 0x9a;
				}
				if (sVar5 == 0x25) {
					uVar9 = 0x9a;
				}
				if (sVar5 == 0x26) {
					uVar9 = 0x9a;
				}
				if (sVar5 == 0x27) {
					uVar9 = 0x9a;
				}
				puVar12[iVar18] = uVar9;
			}
			puVar12 = puVar12 + 0x30;
			iVar13 = iVar13 + 0x60;
			iVar14 = iVar14 + 0x60;
			iVar19 = iVar19 + 1;
		} while ((int)puVar12 < -0x7ff1b09c);
		iVar18 = iVar18 + 1;
		iVar20 = iVar20 + 0x28;
	} while (iVar18 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset /*$fp*/, int tmin /*$s3*/, int tmax /*$a2*/, int cx /*$s5*/, int cy /*stack 16*/, int setview /*stack 20*/, int noquad /*stack 24*/, int ldir /*stack 28*/)
 // line 399, offset 0x8013c5a0
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x8013C5A0
		// Variables:
	// 		int sx; // $s0
	// 		int sy; // $s1
	// 		int sw; // $s2
	// 		int sh; // $s4
	// 		int xx; // $a1
	// 		int yy; // $a3
	// 		int i; // $s3
	// 		int ii; // $t1
	// 		int numt; // stack offset -112
	// 		int found; // $t0
	// 		int abort; // $t4
	/* end block 1 */
	// End offset: 0x8013C9D4
	// End Line: 567

	/* begin block 2 */
		// Start line: 822
	/* end block 2 */
	// End Line: 823

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_PlaceMiniSet__FPCUciiiiiii
							(uchar *miniset,int tmin,int tmax,int cx,int cy,int setview,int noquad,int ldir)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	char cVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	byte *pbVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	long x1;
	long lVar14;
	uint uVar15;
	int iVar16;
	uint uVar17;
	int local_70;
	
	bVar1 = *miniset;
	uVar15 = (uint)bVar1;
	bVar2 = miniset[1];
	uVar17 = (uint)bVar2;
	x1 = 0;
	lVar14 = 0;
	if (tmax == tmin) {
		local_70 = 1;
	}
	else {
		lVar6 = ENG_random__Fl(tmax - tmin);
		local_70 = lVar6 + tmin;
	}
	iVar16 = 0;
	if (local_70 < 1) {
LAB_8013c8cc:
		cVar5 = TransVal;
		if (miniset == PWATERIN) {
			TransVal = '\0';
			DRLG_MRectTrans__Fiiii(x1,lVar14 + 2,x1 + 5,lVar14 + 4);
			quests[13]._qtx = x1 * 2 + 0x15;
			quests[13]._qty = lVar14 * 2 + 0x16;
		}
		if (setview == 1) {
			ViewX = x1 * 2 + 0x13;
			ViewY = lVar14 * 2 + 0x14;
		}
		if (ldir == 0) {
			LvlViewX = x1 * 2 + 0x13;
			LvlViewY = lVar14 * 2 + 0x14;
		}
		if ((cx <= x1) || (iVar16 = 0, cy <= lVar14)) {
			if ((cx < x1) && (lVar14 < cy)) {
				iVar16 = 1;
			}
			else {
				iVar16 = 3;
				if ((x1 < cx) && (cy < lVar14)) {
					iVar16 = 2;
				}
			}
		}
		TransVal = cVar5;
		return iVar16;
	}
LAB_8013c63c:
	x1 = ENG_random__Fl(0x28 - uVar15);
	lVar14 = ENG_random__Fl(0x28 - uVar17);
	iVar13 = 0;
	do {
		bVar11 = true;
		if (((cx != -1) && ((int)(cx - uVar15) <= x1)) && (x1 <= cx + 0xc)) {
			x1 = x1 + 1;
			bVar11 = false;
		}
		if (((cy != -1) && ((int)(cy - uVar17) <= lVar14)) && (lVar14 <= cy + 0xc)) {
			lVar14 = lVar14 + 1;
			bVar11 = false;
		}
		if (noquad == 1) {
			bVar4 = lVar14 < cy;
			if (cx < x1) goto LAB_8013c740;
		}
		else {
			if (noquad < 2) {
				if ((noquad == 0) && (bVar4 = lVar14 < cy, x1 < cx)) {
LAB_8013c740:
					if (bVar4) {
						bVar11 = false;
					}
				}
			}
			else {
				if (noquad == 2) {
					bVar3 = x1 < cx;
				}
				else {
					bVar3 = cx < x1;
					if (noquad != 3) goto LAB_8013c750;
				}
				bVar4 = cy < lVar14;
				if (bVar3) goto LAB_8013c740;
			}
		}
LAB_8013c750:
		iVar12 = 2;
		iVar10 = 0;
		if (bVar2 != 0) {
			do {
				if (!bVar11) break;
				iVar8 = 0;
				if (bVar1 != 0) {
					pbVar9 = miniset + iVar12;
					iVar7 = x1;
					do {
						if (!bVar11) break;
						if ((*pbVar9 != 0) && ((uint)dungeon[iVar7 * 0x30 + lVar14 + iVar10] != (uint)*pbVar9))
						{
							bVar11 = false;
						}
						if (mydflags[(lVar14 + iVar10) * 0x28 + iVar7] != '\0') {
							bVar11 = false;
						}
						pbVar9 = pbVar9 + 1;
						iVar12 = iVar12 + 1;
						iVar8 = iVar8 + 1;
						iVar7 = iVar7 + 1;
					} while (iVar8 < (int)uVar15);
				}
				iVar10 = iVar10 + 1;
			} while (iVar10 < (int)uVar17);
		}
		if (bVar11) break;
		x1 = x1 + 1;
		if (x1 == 0x28 - uVar15) {
			lVar14 = lVar14 + 1;
			x1 = 0;
			if (lVar14 == 0x28 - uVar17) {
				lVar14 = 0;
			}
		}
		iVar13 = iVar13 + 1;
		if (4000 < iVar13) {
			return -1;
		}
	} while( true );
	iVar13 = 0;
	iVar10 = uVar17 * uVar15 + 2;
	if (bVar2 != 0) {
		do {
			iVar12 = 0;
			if (bVar1 != 0) {
				pbVar9 = miniset + iVar10;
				do {
					if (*pbVar9 != 0) {
						dungeon[(x1 + iVar12) * 0x30 + lVar14 + iVar13] = (ushort)*pbVar9;
					}
					pbVar9 = pbVar9 + 1;
					iVar12 = iVar12 + 1;
					iVar10 = iVar10 + 1;
				} while (iVar12 < (int)uVar15);
			}
			iVar13 = iVar13 + 1;
		} while (iVar13 < (int)uVar17);
	}
	iVar16 = iVar16 + 1;
	if (local_70 <= iVar16) goto LAB_8013c8cc;
	goto LAB_8013c63c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_SetWalls__Fv()
 // line 614, offset 0x8013ca08
	/* begin block 1 */
		// Start line: 615
		// Start offset: 0x8013CA08
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a2
	// 		int yy; // $t0

		/* begin block 1.1 */
			// Start line: 619
			// Start offset: 0x8013CA08

			/* begin block 1.1.1 */
				// Start line: 621
				// Start offset: 0x8013CA24

				/* begin block 1.1.1.1 */
					// Start line: 625
					// Start offset: 0x8013CA30

					/* begin block 1.1.1.1.1 */
						// Start line: 625
						// Start offset: 0x8013CA40
						// Variables:
					// 		int v; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8013CAA0
					// End Line: 643
				/* end block 1.1.1.1 */
				// End offset: 0x8013CAB0
				// End Line: 644
			/* end block 1.1.1 */
			// End offset: 0x8013CAB0
			// End Line: 645
		/* end block 1.1 */
		// End offset: 0x8013CABC
		// End Line: 646
	/* end block 1 */
	// End offset: 0x8013CABC
	// End Line: 646

	/* begin block 2 */
		// Start line: 1342
	/* end block 2 */
	// End Line: 1343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_SetWalls__Fv(void)

{
	ushort uVar1;
	byte bVar2;
	int iVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0x10;
	iVar6 = 0;
	while (iVar5 = 0, iVar6 < 0x28) {
		iVar3 = iVar7 * 8 + 0x3800;
		puVar4 = dungeon;
		while (iVar5 < 0x28) {
			uVar1 = puVar4[iVar6];
			if (((uVar1 == 0xd) || (uVar1 == 0x16)) || (uVar1 == 0)) {
				bVar2 = (&dung_map[0].dFlags)[iVar3] | 0x20;
			}
			else {
				bVar2 = (&dung_map[0].dFlags)[iVar3] & 0xdf;
			}
			(&dung_map[0].dFlags)[iVar3] = bVar2;
			iVar3 = iVar3 + 0x700;
			puVar4 = puVar4 + 0x30;
			iVar5 = iVar5 + 1;
		}
		iVar7 = iVar7 + 2;
		iVar6 = iVar6 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L1Floor__Fv()
 // line 649, offset 0x8013cac4
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x8013CAC4
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s3
	// 		long rv; // $v1
	/* end block 1 */
	// End offset: 0x8013CB80
	// End Line: 663

	/* begin block 2 */
		// Start line: 1408
	/* end block 2 */
	// End Line: 1409

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L1Floor__Fv(void)

{
	long lVar1;
	ushort *puVar2;
	int iVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	iVar6 = 0;
	do {
		iVar3 = 0;
		puVar4 = dungeon;
		do {
			if ((mydflags[iVar6 + iVar3] == '\0') && (puVar2 = puVar4 + iVar5, *puVar2 == 0xd)) {
				lVar1 = ENG_random__Fl(3);
				if (lVar1 == 1) {
					*puVar2 = 0xa2;
				}
				if (lVar1 == 2) {
					*puVar2 = 0xa3;
				}
			}
			iVar3 = iVar3 + 1;
			puVar4 = puVar4 + 0x30;
		} while (iVar3 < 0x28);
		iVar5 = iVar5 + 1;
		iVar6 = iVar6 + 0x28;
	} while (iVar5 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L1Pass3__Fv()
 // line 689, offset 0x8013cba8
	/* begin block 1 */
		// Start line: 690
		// Start offset: 0x8013CBA8
		// Variables:
	// 		int i; // $s4
	// 		int j; // $fp
	// 		int xx; // $s1
	// 		int yy; // $s2
	// 		long v1; // $a3
	// 		long v2; // $s6
	// 		long v3; // $s5
	// 		long v4; // $s7
	// 		long lv; // $v0
	/* end block 1 */
	// End offset: 0x8013CD6C
	// End Line: 776

	/* begin block 2 */
		// Start line: 1531
	/* end block 2 */
	// End Line: 1532

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L1Pass3__Fv(void)

{
	short sVar1;
	short sVar2;
	short sVar3;
	int y;
	int x;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int x_00;
	int y_00;
	ushort *puVar7;
	
	y = (int)s__800ced54;
	iVar5 = (int)s__800ced56;
	y_00 = 0;
	x = (int)s__800ced58;
	iVar6 = (int)s__800ced5a._0_2_;
	do {
		x_00 = 0;
		do {
			SetDPiece__Fiis(x_00,y_00,(short)((uint)((y + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x_00 + 1,y_00,(short)((uint)((iVar5 + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x_00,y_00 + 1,(short)((uint)((x + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x_00 + 1,y_00 + 1,(short)((uint)((iVar6 + 1) * 0x10000) >> 0x10));
			x_00 = x_00 + 2;
		} while (x_00 < 0x60);
		y_00 = y_00 + 2;
		x_00 = 0;
	} while (y_00 < 0x60);
	y = 0x10;
	do {
		x = 0x10;
		iVar5 = 0;
		puVar7 = dungeon;
		do {
			puVar4 = puVar7 + x_00;
			puVar7 = puVar7 + 0x30;
			iVar5 = iVar5 + 1;
			iVar6 = ((uint)*puVar4 - 1) * 8;
			sVar1 = *(short *)(s__800cecae + iVar6);
			sVar2 = *(short *)(s__800cecb0 + iVar6);
			sVar3 = *(short *)(s__800cecb2 + iVar6);
			SetDPiece__Fiis(x,y,(short)((uint)(((int)*(short *)(pMegaTiles + iVar6) + 1) * 0x10000) >>
																 0x10));
			SetDPiece__Fiis(x + 1,y,(short)((uint)(((int)sVar1 + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x,y + 1,(short)((uint)(((int)sVar2 + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x + 1,y + 1,(short)((uint)(((int)sVar3 + 1) * 0x10000) >> 0x10));
			x = x + 2;
		} while (iVar5 < 0x28);
		x_00 = x_00 + 1;
		y = y + 2;
	} while (x_00 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_LoadL1SP__Fv()
 // line 787, offset 0x8013cda0
	/* begin block 1 */
		// Start line: 788
		// Start offset: 0x8013CDA0
	/* end block 1 */
	// End offset: 0x8013CE6C
	// End Line: 800

	/* begin block 2 */
		// Start line: 1813
	/* end block 2 */
	// End Line: 1814

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_LoadL1SP__Fv(void)

{
	uchar uVar1;
	
	setloadflag = '\0';
	uVar1 = QuestStatus__Fi(6);
	if (uVar1 != '\0') {
		pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("rnd6.DUN",(ulong *)0x0);
		setloadflag = '\x01';
	}
	uVar1 = QuestStatus__Fi(0xc);
	if ((uVar1 != '\0') && (gbMaxPlayers == '\x01')) {
		pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("SKngDO.DUN",(ulong *)0x0);
		setloadflag = '\x01';
	}
	uVar1 = QuestStatus__Fi(7);
	if (uVar1 != '\0') {
		pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("Banner2.DUN",(ulong *)0x0);
		setloadflag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_FreeL1SP__Fv()
 // line 805, offset 0x8013ce7c
	/* begin block 1 */
		// Start line: 806
		// Start offset: 0x8013CE7C

		/* begin block 1.1 */
			// Start line: 806
			// Start offset: 0x8013CE7C
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x8013CE9C
		// End Line: 807
	/* end block 1 */
	// End offset: 0x8013CE9C
	// End Line: 807

	/* begin block 2 */
		// Start line: 1850
	/* end block 2 */
	// End Line: 1851

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_FreeL1SP__Fv(void)

{
	uchar *p;
	
	p = pSetPiece;
	pSetPiece = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_Init_Globals__Fv()
 // line 812, offset 0x8013ceac
	/* begin block 1 */
		// Start line: 813
		// Start offset: 0x8013CEAC
	/* end block 1 */
	// End offset: 0x8013CEBC
	// End Line: 849

	/* begin block 2 */
		// Start line: 1864
	/* end block 2 */
	// End Line: 1865

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_Init_Globals__Fv(void)

{
	set_restore_lighting__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ set_restore_lighting__Fv()
 // line 855, offset 0x8013cecc
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x8013CECC
		// Variables:
	// 		int x; // $t2
	// 		int y; // $a2
	/* end block 1 */
	// End offset: 0x8013CF54
	// End Line: 866

	/* begin block 2 */
		// Start line: 1954
	/* end block 2 */
	// End Line: 1955

/* WARNING: Unknown calling convention yet parameter storage is locked */

void set_restore_lighting__Fv(void)

{
	uchar *puVar1;
	uchar *puVar2;
	int iVar3;
	uchar *puVar4;
	uchar *puVar5;
	uchar *puVar6;
	int iVar7;
	
	iVar3 = 0;
	do {
		iVar7 = 0;
		puVar4 = &dung_map_r;
		puVar5 = &dung_map_g;
		puVar6 = &dung_map_b;
		do {
			puVar2 = puVar6 + iVar3;
			puVar6 = puVar6 + 0x38;
			puVar1 = puVar5 + iVar3;
			puVar5 = puVar5 + 0x38;
			puVar4[iVar3] = (uchar)restore_r;
			*puVar1 = (uchar)restore_g;
			iVar7 = iVar7 + 1;
			*puVar2 = (uchar)restore_b;
			puVar4 = puVar4 + 0x38;
		} while (iVar7 < 0x30);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x30);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_InitL1Vals__Fv()
 // line 870, offset 0x8013cf5c
	/* begin block 1 */
		// Start line: 871
		// Start offset: 0x8013CF5C
	/* end block 1 */
	// End offset: 0x8013CF5C
	// End Line: 871

	/* begin block 2 */
		// Start line: 2016
	/* end block 2 */
	// End Line: 2017

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_InitL1Vals__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadL1Dungeon__FPcii(char *sFileName /*$s0*/, int vx /*$s1*/, int vy /*$s2*/)
 // line 905, offset 0x8013cf64
	/* begin block 1 */
		// Start line: 906
		// Start offset: 0x8013CF64
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a3
	// 		int rw; // $t3
	// 		int rh; // $t4
	// 		unsigned char *pLevelMap; // $s0
	// 		unsigned char *lm; // $t0

		/* begin block 1.1 */
			// Start line: 949
			// Start offset: 0x8013D0C4
		/* end block 1.1 */
		// End offset: 0x8013D11C
		// End Line: 965
	/* end block 1 */
	// End offset: 0x8013D11C
	// End Line: 965

	/* begin block 2 */
		// Start line: 2056
	/* end block 2 */
	// End Line: 2057

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadL1Dungeon__FPcii(char *sFileName,int vx,int vy)

{
	byte bVar1;
	byte bVar2;
	uchar *puVar3;
	byte *pMap;
	int iVar4;
	ushort *puVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	
	dminx = 0x10;
	dminy = 0x10;
	dmaxx = 0x50;
	dmaxy = 0x50;
	DRLG_InitTrans__Fv();
	pMap = GRL_LoadFileInMemSig__FPCcPUl(sFileName,(ulong *)0x0);
	iVar7 = 0;
	iVar9 = 0;
	do {
		iVar6 = 0;
		puVar5 = dungeon;
		do {
			puVar3 = mydflags;
			iVar4 = iVar9 + iVar6;
			iVar6 = iVar6 + 1;
			puVar5[iVar7] = 0x16;
			puVar3[iVar4] = '\0';
			puVar5 = puVar5 + 0x30;
		} while (iVar6 < 0x28);
		iVar7 = iVar7 + 1;
		iVar9 = iVar9 + 0x28;
	} while (iVar7 < 0x28);
	bVar1 = *pMap;
	iVar7 = 0;
	bVar2 = pMap[2];
	pbVar8 = pMap + 4;
	if (bVar2 != 0) {
		iVar9 = 0;
		do {
			iVar6 = 0;
			puVar5 = dungeon;
			if (bVar1 != 0) {
				do {
					if (*pbVar8 == 0) {
						puVar5[iVar7] = 0xd;
					}
					else {
						puVar5[iVar7] = (ushort)*pbVar8;
						mydflags[iVar9 + iVar6] = mydflags[iVar9 + iVar6] | 0x80;
					}
					pbVar8 = pbVar8 + 2;
					iVar6 = iVar6 + 1;
					puVar5 = puVar5 + 0x30;
				} while (iVar6 < (int)(uint)bVar1);
			}
			iVar7 = iVar7 + 1;
			iVar9 = iVar9 + 0x28;
		} while (iVar7 < (int)(uint)bVar2);
	}
	DRLG_L1Floor__Fv();
	ViewX = vx;
	ViewY = vy;
	DRLG_L1Pass3__Fv();
	DRLG_Init_Globals__Fv();
	DRLG_InitL1Vals__Fv();
	SetMapMonsters__FPUcii(pMap,0,0);
	SetMapObjects__FPUcii(pMap,0,0);
	mem_free_dbg__FPv(pMap);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadPreL1Dungeon__FPcii(char *sFileName /*$a0*/, int vx /*$a1*/, int vy /*$a2*/)
 // line 971, offset 0x8013d138
	/* begin block 1 */
		// Start line: 972
		// Start offset: 0x8013D138
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a3
	// 		int rw; // $t3
	// 		int rh; // $t4
	// 		unsigned char *pLevelMap; // $s0
	// 		unsigned char *lm; // $t0

		/* begin block 1.1 */
			// Start line: 1016
			// Start offset: 0x8013D2DC
		/* end block 1.1 */
		// End offset: 0x8013D2E4
		// End Line: 1016
	/* end block 1 */
	// End offset: 0x8013D2E4
	// End Line: 1016

	/* begin block 2 */
		// Start line: 2202
	/* end block 2 */
	// End Line: 2203

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadPreL1Dungeon__FPcii(char *sFileName,int vx,int vy)

{
	byte bVar1;
	byte bVar2;
	byte *p;
	ushort *puVar3;
	int iVar4;
	ushort *puVar5;
	uchar *puVar6;
	int iVar7;
	int iVar8;
	byte *pbVar9;
	int iVar10;
	
	dminx = 0x10;
	dminy = 0x10;
	dmaxx = 0x50;
	dmaxy = 0x50;
	p = GRL_LoadFileInMemSig__FPCcPUl(sFileName,(ulong *)0x0);
	iVar8 = 0;
	iVar10 = 0;
	do {
		iVar7 = 0;
		puVar5 = dungeon;
		do {
			puVar6 = mydflags;
			iVar4 = iVar10 + iVar7;
			iVar7 = iVar7 + 1;
			puVar5[iVar8] = 0x16;
			puVar6[iVar4] = '\0';
			puVar5 = puVar5 + 0x30;
		} while (iVar7 < 0x28);
		iVar8 = iVar8 + 1;
		iVar10 = iVar10 + 0x28;
	} while (iVar8 < 0x28);
	bVar1 = *p;
	iVar8 = 0;
	bVar2 = p[2];
	pbVar9 = p + 4;
	if (bVar2 != 0) {
		iVar10 = 0;
		do {
			iVar7 = 0;
			puVar5 = dungeon;
			if (bVar1 != 0) {
				do {
					if (*pbVar9 == 0) {
						puVar5[iVar8] = 0xd;
					}
					else {
						puVar5[iVar8] = (ushort)*pbVar9;
						mydflags[iVar10 + iVar7] = mydflags[iVar10 + iVar7] | 0x80;
					}
					pbVar9 = pbVar9 + 2;
					iVar7 = iVar7 + 1;
					puVar5 = puVar5 + 0x30;
				} while (iVar7 < (int)(uint)bVar1);
			}
			iVar8 = iVar8 + 1;
			iVar10 = iVar10 + 0x28;
		} while (iVar8 < (int)(uint)bVar2);
	}
	DRLG_L1Floor__Fv();
	iVar8 = 0;
	do {
		iVar10 = 0;
		puVar6 = &pdungeon;
		puVar5 = dungeon;
		do {
			puVar3 = puVar5 + iVar8;
			puVar5 = puVar5 + 0x30;
			iVar10 = iVar10 + 1;
			puVar6[iVar8] = (uchar)*puVar3;
			puVar6 = puVar6 + 0x28;
		} while (iVar10 < 0x28);
		iVar8 = iVar8 + 1;
	} while (iVar8 < 0x28);
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitL5Dungeon__Fv()
 // line 1054, offset 0x8013d2f8
	/* begin block 1 */
		// Start line: 1055
		// Start offset: 0x8013D2F8
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x8013D374
	// End Line: 1076

	/* begin block 2 */
		// Start line: 2391
	/* end block 2 */
	// End Line: 2392

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL5Dungeon__Fv(void)

{
	int iVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	do {
		iVar3 = 0;
		puVar2 = dungeon;
		do {
			puVar2[iVar5] = 0;
			iVar3 = iVar3 + 1;
			puVar2 = puVar2 + 0x30;
		} while (iVar3 < 0x30);
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x30);
	iVar5 = 0;
	iVar3 = 0;
	do {
		iVar4 = 0;
		do {
			iVar1 = iVar3 + iVar4;
			iVar4 = iVar4 + 1;
			mydflags[iVar1] = '\0';
		} while (iVar4 < 0x28);
		iVar5 = iVar5 + 1;
		iVar3 = iVar3 + 0x28;
	} while (iVar5 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5ClearFlags__Fv()
 // line 1081, offset 0x8013d37c
	/* begin block 1 */
		// Start line: 1082
		// Start offset: 0x8013D37C
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a2
	/* end block 1 */
	// End offset: 0x8013D3C4
	// End Line: 1087

	/* begin block 2 */
		// Start line: 2437
	/* end block 2 */
	// End Line: 2438

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5ClearFlags__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar3 = 0;
	do {
		iVar2 = 0;
		do {
			iVar1 = iVar3 + iVar2;
			iVar2 = iVar2 + 1;
			mydflags[iVar1] = mydflags[iVar1] & 0xbf;
		} while (iVar2 < 0x28);
		iVar4 = iVar4 + 1;
		iVar3 = iVar3 + 0x28;
	} while (iVar4 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5drawRoom__Fiiii(int x /*$a0*/, int y /*$a1*/, int w /*$a2*/, int h /*$a3*/)
 // line 1092, offset 0x8013d3cc
	/* begin block 1 */
		// Start line: 1093
		// Start offset: 0x8013D3CC
		// Variables:
	// 		int i; // $t0
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x8013D42C
	// End Line: 1102

	/* begin block 2 */
		// Start line: 2456
	/* end block 2 */
	// End Line: 2457

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5drawRoom__Fiiii(int x,int y,int w,int h)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	if (0 < h) {
		do {
			iVar2 = 0;
			if (0 < w) {
				do {
					iVar1 = iVar2 + x;
					iVar2 = iVar2 + 1;
					dungeon[iVar1 * 0x30 + iVar3 + y] = 1;
				} while (iVar2 < w);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < h);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ L5checkRoom__Fiiii(int x /*$a0*/, int y /*$a1*/, int width /*$a2*/, int height /*$a3*/)
 // line 1108, offset 0x8013d438
	/* begin block 1 */
		// Start line: 1109
		// Start offset: 0x8013D438
		// Variables:
	// 		int i; // $t0
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x8013D4C0
	// End Line: 1118

	/* begin block 2 */
		// Start line: 2488
	/* end block 2 */
	// End Line: 2489

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar L5checkRoom__Fiiii(int x,int y,int width,int height)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	if (0 < height) {
		do {
			iVar2 = 0;
			if (0 < width) {
				uVar1 = x;
				do {
					if (((0x27 < uVar1) || (0x27 < (uint)(y + iVar3))) ||
						 (iVar2 = iVar2 + 1, dungeon[uVar1 * 0x30 + y + iVar3] != 0)) {
						return '\0';
					}
					uVar1 = x + iVar2;
				} while (iVar2 < width);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < height);
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5roomGen__Fiiiii(int x /*$s1*/, int y /*stack -80*/, int w /*$s4*/, int h /*stack -72*/, int dir /*stack 16*/)
 // line 1124, offset 0x8013d4cc
	/* begin block 1 */
		// Start line: 1125
		// Start offset: 0x8013D4CC
		// Variables:
	// 		int rx; // $s7
	// 		int ry; // $fp
	// 		int ry2; // $s4
	// 		int height; // $s2
	// 		int width; // $s3
	// 		int cx1; // $s4
	// 		int cy1; // $s0
	// 		int cw; // $s5
	// 		int ch; // $s1
	// 		int num; // $s6
	// 		int dirProb; // $v1
	// 		int ran; // $v1
	/* end block 1 */
	// End offset: 0x8013D7C8
	// End Line: 1209

	/* begin block 2 */
		// Start line: 2520
	/* end block 2 */
	// End Line: 2521

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5roomGen__Fiiiii(int x,int y,int w,int h,int dir)

{
	bool bVar1;
	byte bVar2;
	uchar uVar3;
	uchar uVar4;
	long lVar5;
	uint h_00;
	uint w_00;
	int y_00;
	int x_00;
	int x_01;
	uint local_58;
	
	lVar5 = ENG_random__Fl(4);
	if (dir == 1) {
		bVar1 = lVar5 != 0;
	}
	else {
		bVar1 = lVar5 == 0;
	}
	if (bVar1) {
		y_00 = 0;
		if (!bVar1) {
			return;
		}
		do {
			lVar5 = ENG_random__Fl(5);
			w_00 = (lVar5 + 2 >> 1) << 1;
			lVar5 = ENG_random__Fl(5);
			h_00 = (lVar5 + 2 >> 1) << 1;
			if ((int)w_00 < 3) {
				w_00 = 3;
			}
			if ((int)h_00 < 3) {
				h_00 = 3;
			}
			x_00 = (x + ((int)(w + ((uint)w >> 0x1f)) >> 1)) - ((int)(w_00 + (w_00 >> 0x1f)) >> 1);
			x_01 = y - h_00;
			uVar3 = L5checkRoom__Fiiii(x_00 + -1,x_01 + -1,w_00 + 2,h_00 + 1);
			y_00 = y_00 + 1;
		} while ((uVar3 == '\0') && (y_00 < 0x14));
		if (uVar3 == '\x01') {
			L5drawRoom__Fiiii(x_00,x_01,w_00,h_00);
		}
		y_00 = y + h;
		uVar4 = L5checkRoom__Fiiii(x_00 + -1,y_00,w_00 + 2,h_00 + 1);
		if (uVar4 == '\x01') {
			L5drawRoom__Fiiii(x_00,y_00,w_00,h_00);
		}
		if (uVar3 == '\x01') {
			L5roomGen__Fiiiii(x_00,x_01,w_00,h_00,0);
		}
		if (uVar4 != '\x01') {
			return;
		}
		local_58 = 0;
	}
	else {
		x_00 = 0;
		do {
			lVar5 = ENG_random__Fl(5);
			w_00 = (lVar5 + 2 >> 1) << 1;
			lVar5 = ENG_random__Fl(5);
			h_00 = (lVar5 + 2 >> 1) << 1;
			if ((int)w_00 < 3) {
				w_00 = 3;
			}
			local_58 = h_00 >> 0x1f;
			if ((int)h_00 < 3) {
				h_00 = 3;
				local_58 = 0;
			}
			x_01 = x - w_00;
			y_00 = (y + ((int)(h + ((uint)h >> 0x1f)) >> 1)) - ((int)(h_00 + local_58) >> 1);
			uVar3 = L5checkRoom__Fiiii(x_01 + -1,y_00 + -1,h_00 + 2,w_00 + 1);
			x_00 = x_00 + 1;
		} while ((uVar3 == '\0') && (x_00 < 0x14));
		if (uVar3 == '\x01') {
			L5drawRoom__Fiiii(x_01,y_00,w_00,h_00);
		}
		x_00 = x + w;
		bVar2 = L5checkRoom__Fiiii(x_00,y_00 + -1,w_00 + 1,h_00 + 2);
		local_58 = (uint)bVar2;
		if (bVar2 == 1) {
			L5drawRoom__Fiiii(x_00,y_00,w_00,h_00);
		}
		if (uVar3 == '\x01') {
			L5roomGen__Fiiiii(x_01,y_00,w_00,h_00,1);
		}
		if (bVar2 != 1) {
			return;
		}
	}
	L5roomGen__Fiiiii(x_00,y_00,w_00,h_00,local_58);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5firstRoom__Fv()
 // line 1216, offset 0x8013d7fc
	/* begin block 1 */
		// Start line: 1217
		// Start offset: 0x8013D7FC
		// Variables:
	// 		int x; // $a0
	// 		int y; // $a1
	// 		int xs; // $s1
	// 		int xe; // $s0
	// 		int ys; // $s1
	// 		int ye; // $s0
	/* end block 1 */
	// End offset: 0x8013DB84
	// End Line: 1268

	/* begin block 2 */
		// Start line: 2742
	/* end block 2 */
	// End Line: 2743

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5firstRoom__Fv(void)

{
	long lVar1;
	uint uVar2;
	ushort *puVar3;
	int iVar4;
	ushort *puVar5;
	ushort *puVar6;
	ushort *puVar7;
	ushort *puVar8;
	ushort *puVar9;
	uint uVar10;
	uint uVar11;
	
	lVar1 = ENG_random__Fl(2);
	uVar11 = 1;
	if (lVar1 == 0) {
		lVar1 = ENG_random__Fl(2);
		VR1 = (uchar)lVar1;
		lVar1 = ENG_random__Fl(2);
		VR2 = (uchar)lVar1;
		uVar2 = ENG_random__Fl(2);
		VR3 = (uchar)uVar2;
		uVar10 = 0x27;
		if ((uint)VR1 + (uVar2 & 0xff) < 2) {
			VR2 = '\x01';
		}
		if (VR1 == '\0') {
			uVar11 = 0x12;
		}
		else {
			L5drawRoom__Fiiii(0xf,1,10,10);
		}
		if (VR2 != '\0') {
			L5drawRoom__Fiiii(0xf,0xf,10,10);
		}
		if (VR3 == '\0') {
			uVar10 = 0x16;
		}
		else {
			L5drawRoom__Fiiii(0xf,0x1d,10,10);
		}
		if (uVar11 < uVar10) {
			puVar9 = dungeon + uVar11 + 0x420;
			puVar8 = dungeon + uVar11 + 0x3f0;
			puVar7 = dungeon + uVar11 + 0x3c0;
			puVar6 = dungeon + uVar11 + 0x390;
			puVar5 = dungeon + uVar11 + 0x360;
			puVar3 = dungeon + uVar11 + 0x330;
			do {
				*puVar3 = 1;
				*puVar5 = 1;
				*puVar6 = 1;
				*puVar7 = 1;
				*puVar8 = 1;
				*puVar9 = 1;
				puVar9 = puVar9 + 1;
				puVar8 = puVar8 + 1;
				puVar7 = puVar7 + 1;
				puVar6 = puVar6 + 1;
				puVar5 = puVar5 + 1;
				uVar11 = uVar11 + 1;
				puVar3 = puVar3 + 1;
			} while ((int)uVar11 < (int)uVar10);
		}
		if (VR1 != '\0') {
			L5roomGen__Fiiiii(0xf,1,10,10,0);
		}
		if (VR2 != '\0') {
			L5roomGen__Fiiiii(0xf,0xf,10,10,0);
		}
		if (VR3 != '\0') {
			L5roomGen__Fiiiii(0xf,0x1d,10,10,0);
		}
		HR3 = '\0';
		HR2 = '\0';
		HR1 = '\0';
	}
	else {
		lVar1 = ENG_random__Fl(2);
		HR1 = (uchar)lVar1;
		lVar1 = ENG_random__Fl(2);
		HR2 = (uchar)lVar1;
		uVar2 = ENG_random__Fl(2);
		HR3 = (uchar)uVar2;
		uVar10 = 0x27;
		if ((uint)HR1 + (uVar2 & 0xff) < 2) {
			HR2 = '\x01';
		}
		if (HR1 == '\0') {
			uVar11 = 0x12;
		}
		else {
			L5drawRoom__Fiiii(1,0xf,10,10);
		}
		if (HR2 != '\0') {
			L5drawRoom__Fiiii(0xf,0xf,10,10);
		}
		if (HR3 == '\0') {
			uVar10 = 0x16;
		}
		else {
			L5drawRoom__Fiiii(0x1d,0xf,10,10);
		}
		if (uVar11 < uVar10) {
			iVar4 = uVar11 * 0x60;
			do {
				*(undefined2 *)((int)dungeon + iVar4 + 0x22) = 1;
				*(undefined2 *)((int)dungeon + iVar4 + 0x24) = 1;
				*(undefined2 *)((int)dungeon + iVar4 + 0x26) = 1;
				*(undefined2 *)((int)dungeon + iVar4 + 0x28) = 1;
				*(undefined2 *)((int)dungeon + iVar4 + 0x2a) = 1;
				*(undefined2 *)((int)dungeon + iVar4 + 0x2c) = 1;
				uVar11 = uVar11 + 1;
				iVar4 = iVar4 + 0x60;
			} while ((int)uVar11 < (int)uVar10);
		}
		if (HR1 != '\0') {
			L5roomGen__Fiiiii(1,0xf,10,10,1);
		}
		if (HR2 != '\0') {
			L5roomGen__Fiiiii(0xf,0xf,10,10,1);
		}
		if (HR3 != '\0') {
			L5roomGen__Fiiiii(0x1d,0xf,10,10,1);
		}
		VR3 = '\0';
		VR2 = '\0';
		VR1 = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ L5GetArea__Fv()
 // line 1274, offset 0x8013db9c
	/* begin block 1 */
		// Start line: 1275
		// Start offset: 0x8013DB9C
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	// 		long rv; // $a2
	/* end block 1 */
	// End offset: 0x8013DBF4
	// End Line: 1285

	/* begin block 2 */
		// Start line: 2868
	/* end block 2 */
	// End Line: 2869

/* WARNING: Unknown calling convention yet parameter storage is locked */

long L5GetArea__Fv(void)

{
	ushort *puVar1;
	int iVar2;
	int iVar3;
	long lVar4;
	
	lVar4 = 0;
	iVar3 = 0;
	do {
		iVar2 = 0;
		puVar1 = dungeon;
		do {
			if (puVar1[iVar3] == 1) {
				lVar4 = lVar4 + 1;
			}
			iVar2 = iVar2 + 1;
			puVar1 = puVar1 + 0x30;
		} while (iVar2 < 0x28);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x28);
	return lVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5makeDungeon__Fv()
 // line 1290, offset 0x8013dbfc
	/* begin block 1 */
		// Start line: 1291
		// Start offset: 0x8013DBFC
		// Variables:
	// 		int i; // $t2
	// 		int j; // $t3
	// 		int l; // $t1
	/* end block 1 */
	// End offset: 0x8013DC80
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2900
	/* end block 2 */
	// End Line: 2901

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5makeDungeon__Fv(void)

{
	ushort *puVar1;
	undefined1 *puVar2;
	uchar *puVar3;
	ushort *puVar4;
	undefined1 *puVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	do {
		iVar6 = 0;
		puVar3 = &L5dungeon;
		puVar4 = dungeon;
		puVar5 = &DAT_8013a400;
		do {
			puVar2 = puVar5 + iVar7 * 2;
			puVar5 = puVar5 + 0xa0;
			puVar1 = puVar4 + iVar7;
			puVar3[iVar7 * 2] = (uchar)*puVar1;
			puVar4 = puVar4 + 0x30;
			(puVar3 + iVar7 * 2)[1] = (uchar)*puVar1;
			*puVar2 = (char)*puVar1;
			iVar6 = iVar6 + 1;
			puVar2[1] = (char)*puVar1;
			puVar3 = puVar3 + 0xa0;
		} while (iVar6 < 0x28);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5makeDmt__Fv()
 // line 1309, offset 0x8013dc88
	/* begin block 1 */
		// Start line: 1310
		// Start offset: 0x8013DC88
		// Variables:
	// 		int i; // $a3
	// 		int j; // $t0
	// 		int idx; // $v0
	// 		int val; // $v0
	// 		int dmty; // $t4
	/* end block 1 */
	// End offset: 0x8013DD68
	// End Line: 1331

	/* begin block 2 */
		// Start line: 2948
	/* end block 2 */
	// End Line: 2949

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5makeDmt__Fv(void)

{
	ushort *puVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	undefined1 *puVar6;
	uchar *puVar7;
	
	iVar5 = 0;
	do {
		iVar3 = 0;
		puVar1 = dungeon;
		do {
			puVar1[iVar5] = 0x16;
			iVar3 = iVar3 + 1;
			puVar1 = puVar1 + 0x30;
		} while (iVar3 < 0x2f);
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x2f);
	iVar3 = 0;
	iVar5 = 1;
	do {
		iVar4 = 1;
		puVar6 = &DAT_8013a400;
		puVar1 = dungeon;
		puVar7 = &L5dungeon;
		do {
			puVar7 = puVar7 + 0xa0;
			puVar2 = puVar1 + iVar3;
			puVar1 = puVar1 + 0x30;
			iVar4 = iVar4 + 2;
			*puVar2 = (ushort)L5ConvTbl[(uint)(byte)puVar6[iVar5] + (uint)puVar7[iVar5] * 2 +
																	(uint)(byte)(puVar6 + iVar5)[1] * 4 +
																	(uint)(puVar7 + iVar5)[1] * 8];
			puVar6 = puVar6 + 0xa0;
		} while (iVar4 < 0x4e);
		iVar5 = iVar5 + 2;
		iVar3 = iVar3 + 1;
	} while (iVar5 < 0x4e);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ L5HWallOk__Fii(int i /*$a0*/, int j /*$a1*/)
 // line 1337, offset 0x8013dd70
	/* begin block 1 */
		// Start line: 1338
		// Start offset: 0x8013DD70
		// Variables:
	// 		int x; // $t1
	// 		unsigned char wallok; // $a0
	/* end block 1 */
	// End offset: 0x8013DEA4
	// End Line: 1353

	/* begin block 2 */
		// Start line: 3014
	/* end block 2 */
	// End Line: 3015

/* WARNING: Unknown calling convention yet parameter storage is locked */

int L5HWallOk__Fii(int i,int j)

{
	ushort uVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = i + 1;
	puVar2 = dungeon + iVar3 * 0x30 + j;
	iVar4 = 1;
	if ((*puVar2 == 0xd) && (uVar1 = puVar2[-1], uVar1 == 0xd)) {
		while ((puVar2[1] == uVar1 && (mydflags[j * 0x28 + iVar3] == '\0'))) {
			iVar4 = iVar4 + 1;
			iVar3 = i + iVar4;
			puVar2 = dungeon + iVar3 * 0x30 + j;
			if ((*puVar2 != 0xd) || (uVar1 = puVar2[-1], uVar1 != 0xd)) break;
		}
	}
	uVar1 = dungeon[(i + iVar4) * 0x30 + j];
	if (iVar4 == 1 || (uVar1 == 0x16 || 8 < (uint)uVar1 - 0x10 && 4 < (uint)uVar1 - 3)) {
		iVar4 = -1;
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ L5VWallOk__Fii(int i /*$t1*/, int j /*$a1*/)
 // line 1358, offset 0x8013deac
	/* begin block 1 */
		// Start line: 1359
		// Start offset: 0x8013DEAC
		// Variables:
	// 		int y; // $t0
	// 		unsigned char wallok; // $a0
	/* end block 1 */
	// End offset: 0x8013DFEC
	// End Line: 1374

	/* begin block 2 */
		// Start line: 3051
	/* end block 2 */
	// End Line: 3052

/* WARNING: Unknown calling convention yet parameter storage is locked */

int L5VWallOk__Fii(int i,int j)

{
	ushort uVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = j + 1;
	iVar3 = iVar4 * 2;
	iVar5 = 1;
	if (((dungeon + i * 0x30)[iVar4] == 0xd) &&
		 (sVar2 = *(short *)(iVar3 + (int)(PTR_ARRAY_800e4064 + i * 0x18)), sVar2 == 0xd)) {
		while ((*(short *)(iVar3 + i * 0x60 + -0x7ff1bedc) == sVar2 &&
					 (mydflags[iVar4 * 0x28 + i] == '\0'))) {
			iVar5 = iVar5 + 1;
			iVar4 = j + iVar5;
			iVar3 = iVar4 * 2;
			if (((dungeon + i * 0x30)[iVar4] != 0xd) ||
				 (sVar2 = *(short *)(iVar3 + (int)(PTR_ARRAY_800e4064 + i * 0x18)), sVar2 != 0xd)) break;
		}
	}
	uVar1 = dungeon[i * 0x30 + j + iVar5];
	if (iVar5 == 1 || (uVar1 == 0x16 || 8 < (uint)uVar1 - 0x10 && 4 < (uint)uVar1 - 3)) {
		iVar5 = -1;
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5HorizWall__Fiici(int i /*$s3*/, int j /*$s5*/, char p /*$s1*/, int dx /*$s4*/)
 // line 1379, offset 0x8013dff4
	/* begin block 1 */
		// Start line: 1380
		// Start offset: 0x8013DFF4
		// Variables:
	// 		int xx; // $a2
	// 		char wt; // $s2
	// 		char dt; // $s0
	/* end block 1 */
	// End offset: 0x8013E204
	// End Line: 1412

	/* begin block 2 */
		// Start line: 3093
	/* end block 2 */
	// End Line: 3094

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5HorizWall__Fiici(int i,int j,char p,int dx)

{
	long lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	lVar1 = ENG_random__Fl(4);
	if (lVar1 == 2) {
		iVar5 = 0xc;
		if (p == '\x02') {
			p = '\f';
		}
		if (p == '\x04') {
			p = '\n';
		}
	}
	else {
		if (lVar1 < 3) {
			if (-1 < lVar1) {
				iVar5 = 2;
			}
		}
		else {
			if (lVar1 == 3) {
				iVar5 = 0x24;
				if (p == '\x02') {
					p = '$';
				}
				if (p == '\x04') {
					p = '\x1b';
				}
			}
		}
	}
	lVar1 = ENG_random__Fl(6);
	iVar4 = 0x1a;
	if (lVar1 == 5) {
		iVar4 = 0xc;
	}
	if ((iVar5 << 0x18) >> 0x18 == 0xc) {
		iVar4 = 0xc;
	}
	dungeon[i * 0x30 + j] = (short)p;
	iVar3 = 1;
	if (1 < dx) {
		iVar2 = i + 1;
		do {
			dungeon[iVar2 * 0x30 + j] = (ushort)((iVar5 << 0x18) >> 0x18);
			iVar3 = iVar3 + 1;
			iVar2 = i + iVar3;
		} while (iVar3 < dx);
	}
	lVar1 = ENG_random__Fl(dx + -1);
	iVar5 = i + lVar1 + 1;
	if (iVar4 == 0xc) {
		dungeon[(i + lVar1 + 1) * 0x30 + j] = 0xc;
	}
	else {
		dungeon[iVar5 * 0x30 + j] = 2;
		mydflags[j * 0x28 + iVar5] = mydflags[j * 0x28 + iVar5] | 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5VertWall__Fiici(int i /*$s2*/, int j /*$s5*/, char p /*$s1*/, int dy /*$s4*/)
 // line 1418, offset 0x8013e22c
	/* begin block 1 */
		// Start line: 1419
		// Start offset: 0x8013E22C
		// Variables:
	// 		int yy; // $a1
	// 		char wt; // $s3
	// 		char dt; // $s0
	/* end block 1 */
	// End offset: 0x8013E430
	// End Line: 1451

	/* begin block 2 */
		// Start line: 3173
	/* end block 2 */
	// End Line: 3174

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5VertWall__Fiici(int i,int j,char p,int dy)

{
	long lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	lVar1 = ENG_random__Fl(4);
	if (lVar1 == 2) {
		iVar4 = 0xb;
		if (p == '\x01') {
			p = '\v';
		}
		if (p == '\x04') {
			p = '\x0e';
		}
	}
	else {
		if (lVar1 < 3) {
			if (-1 < lVar1) {
				iVar4 = 1;
			}
		}
		else {
			if (lVar1 == 3) {
				iVar4 = 0x23;
				if (p == '\x01') {
					p = '#';
				}
				if (p == '\x04') {
					p = '%';
				}
			}
		}
	}
	lVar1 = ENG_random__Fl(6);
	iVar3 = 0x19;
	if (lVar1 == 5) {
		iVar3 = 0xb;
	}
	if ((iVar4 << 0x18) >> 0x18 == 0xb) {
		iVar3 = 0xb;
	}
	(dungeon + i * 0x30)[j] = (short)p;
	iVar2 = 1;
	if (1 < dy) {
		do {
			(dungeon + i * 0x30)[j + iVar2] = (ushort)((iVar4 << 0x18) >> 0x18);
			iVar2 = iVar2 + 1;
		} while (iVar2 < dy);
	}
	lVar1 = ENG_random__Fl(dy + -1);
	if (iVar3 == 0xb) {
		dungeon[i * 0x30 + j + lVar1 + 1] = 0xb;
	}
	else {
		j = j + lVar1 + 1;
		dungeon[i * 0x30 + j] = 1;
		mydflags[j * 0x28 + i] = mydflags[j * 0x28 + i] | 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5AddWall__Fv()
 // line 1458, offset 0x8013e458
	/* begin block 1 */
		// Start line: 1459
		// Start offset: 0x8013E458
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int x; // $v0
	// 		int y; // $v0
	/* end block 1 */
	// End offset: 0x8013E68C
	// End Line: 1492

	/* begin block 2 */
		// Start line: 3255
	/* end block 2 */
	// End Line: 3256

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5AddWall__Fv(void)

{
	long lVar1;
	int dx;
	int i;
	int j;
	ushort *puVar2;
	
	j = 0;
	do {
		i = 0;
		puVar2 = dungeon;
		do {
			if (mydflags[j * 0x28 + i] == '\0') {
				if (puVar2[j] == 3) {
					lVar1 = ENG_random__Fl(100);
					if ((lVar1 < 100) && (dx = L5HWallOk__Fii(i,j), dx != -1)) {
						L5HorizWall__Fiici(i,j,'\x02',dx);
					}
					if (((puVar2[j] == 3) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
						 (dx = L5VWallOk__Fii(i,j), dx != -1)) {
						L5VertWall__Fiici(i,j,'\x01',dx);
					}
				}
				if (((puVar2[j] == 6) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L5HWallOk__Fii(i,j), dx != -1)) {
					L5HorizWall__Fiici(i,j,'\x04',dx);
				}
				if (((puVar2[j] == 7) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L5VWallOk__Fii(i,j), dx != -1)) {
					L5VertWall__Fiici(i,j,'\x04',dx);
				}
				if (((puVar2[j] == 2) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L5HWallOk__Fii(i,j), dx != -1)) {
					L5HorizWall__Fiici(i,j,'\x02',dx);
				}
				if (((puVar2[j] == 1) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L5VWallOk__Fii(i,j), dx != -1)) {
					L5VertWall__Fiici(i,j,'\x01',dx);
				}
			}
			i = i + 1;
			puVar2 = puVar2 + 0x30;
		} while (i < 0x28);
		j = j + 1;
	} while (j < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5GChamber__Fiiiiii(int sx /*$t1*/, int sy /*$t2*/, int topflag /*$a2*/, int bottomflag /*$t0*/, int leftflag /*stack 16*/, int rightflag /*stack 20*/)
 // line 1497, offset 0x8013e6b4
	/* begin block 1 */
		// Start line: 1498
		// Start offset: 0x8013E6B4
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a2
	/* end block 1 */
	// End offset: 0x8013E96C
	// End Line: 1552

	/* begin block 2 */
		// Start line: 3345
	/* end block 2 */
	// End Line: 3346

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5GChamber__Fiiiiii(int sx,int sy,int topflag,int bottomflag,int leftflag,int rightflag)

{
	uchar *puVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	short *psVar6;
	
	if (topflag == 1) {
		iVar4 = sx * 0x60;
		iVar5 = sy * 2;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1be7c) = 0xc;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1be1c) = 0xc;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bdbc) = 3;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bc9c) = 9;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bc3c) = 0xc;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bbdc) = 2;
	}
	if (bottomflag == 1) {
		iVar4 = sx * 0x60;
		iVar5 = (sy + 0xb) * 2;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1be7c) = 10;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1be1c) = 0xc;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bdbc) = 8;
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bc9c) = 5;
		psVar6 = (short *)(iVar5 + iVar4 + -0x7ff1bbdc);
		*(undefined2 *)(iVar5 + iVar4 + -0x7ff1bc3c) = 0xc;
		if (*psVar6 != 4) {
			*psVar6 = 0x15;
		}
	}
	if (leftflag == 1) {
		puVar2 = dungeon + sx * 0x30 + sy;
		puVar2[4] = 3;
		puVar2[7] = 8;
		puVar2[2] = 0xb;
		puVar2[3] = 0xb;
		puVar2[8] = 0xb;
		puVar2[9] = 1;
	}
	if (rightflag == 1) {
		puVar2 = dungeon + (sx + 0xb) * 0x30 + sy;
		puVar2[3] = 0xb;
		puVar2[8] = 0xb;
		puVar2[2] = 0xe;
		puVar2[4] = 9;
		puVar2[7] = 5;
		if (puVar2[9] != 4) {
			puVar2[9] = 0x15;
		}
	}
	iVar4 = 1;
	do {
		iVar5 = 1;
		do {
			puVar1 = mydflags;
			iVar3 = sx + iVar5;
			dungeon[iVar3 * 0x30 + sy + iVar4] = 0xd;
			iVar5 = iVar5 + 1;
			puVar1[(sy + iVar4) * 0x28 + iVar3] = puVar1[(sy + iVar4) * 0x28 + iVar3] | 0x40;
		} while (iVar5 < 0xb);
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0xb);
	iVar5 = sy * 2 + sx * 0x60 + -0x7ff1bdbc;
	iVar4 = sy * 2 + sx * 0x60 + -0x7ff1bc9c;
	*(undefined2 *)(iVar5 + 8) = 0xf;
	*(undefined2 *)(iVar4 + 8) = 0xf;
	*(undefined2 *)(iVar5 + 0xe) = 0xf;
	*(undefined2 *)(iVar4 + 0xe) = 0xf;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5GHall__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 1557, offset 0x8013e974
	/* begin block 1 */
		// Start line: 1558
		// Start offset: 0x8013E974
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x8013EA20
	// End Line: 1573

	/* begin block 2 */
		// Start line: 3487
	/* end block 2 */
	// End Line: 3488

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5GHall__Fiiii(int x1,int y1,int x2,int y2)

{
	ushort *puVar1;
	undefined2 *puVar2;
	
	if (y1 == y2) {
		if (x1 < x2) {
			puVar1 = dungeon + x1 * 0x30;
			do {
				x1 = x1 + 1;
				puVar1[y2] = 0xc;
				(puVar1 + y2)[3] = 0xc;
				puVar1 = puVar1 + 0x30;
			} while (x1 < x2);
		}
	}
	else {
		if (y1 < y2) {
			puVar2 = (undefined2 *)(y1 * 2 + x1 * 0x60 + -0x7ff1be1c);
			puVar1 = dungeon + x1 * 0x30 + y1;
			do {
				*puVar1 = 0xb;
				*puVar2 = 0xb;
				puVar2 = puVar2 + 1;
				y1 = y1 + 1;
				puVar1 = puVar1 + 1;
			} while (y1 < y2);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5tileFix__Fv()
 // line 1579, offset 0x8013ea28
	/* begin block 1 */
		// Start line: 1580
		// Start offset: 0x8013EA28
		// Variables:
	// 		int i; // $s0
	// 		int j; // $t2
	/* end block 1 */
	// End offset: 0x8013F2D0
	// End Line: 1643

	/* begin block 2 */
		// Start line: 3529
	/* end block 2 */
	// End Line: 3530

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5tileFix__Fv(void)

{
	ushort uVar1;
	short *psVar2;
	ushort *puVar3;
	ushort *puVar4;
	ushort *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar9 = 0;
	iVar6 = 0;
	do {
		iVar7 = 0;
		puVar5 = dungeon;
		iVar8 = -0x7ff1bedc;
		do {
			if ((*(short *)(iVar6 + (int)puVar5) == 2) && (*(short *)(iVar6 + iVar8) == 0x16)) {
				*(short *)(iVar6 + iVar8) = 0x17;
			}
			if (*(short *)(iVar6 + (int)puVar5) == 0xd) {
				psVar2 = (short *)(iVar6 + iVar7 + -0x7ff1bedc);
				if (*psVar2 == 0x16) {
					*psVar2 = 0x12;
				}
				if ((*(short *)(iVar6 + (int)puVar5) == 0xd) && (*psVar2 == 2)) {
					*psVar2 = 7;
				}
			}
			if ((*(short *)(iVar6 + (int)puVar5) == 6) &&
				 (psVar2 = (short *)(iVar6 + iVar7 + -0x7ff1bedc), *psVar2 == 0x16)) {
				*psVar2 = 0x18;
			}
			psVar2 = (short *)(iVar6 + (int)puVar5);
			if ((*psVar2 == 1) && (psVar2[1] == 0x16)) {
				psVar2[1] = 0x18;
			}
			psVar2 = (short *)(iVar6 + (int)puVar5);
			if (*psVar2 == 0xd) {
				if (psVar2[1] == 1) {
					psVar2[1] = 6;
				}
				if ((*psVar2 == 0xd) && (psVar2[1] == 0x16)) {
					psVar2[1] = 0x13;
				}
			}
			puVar5 = puVar5 + 0x30;
			iVar7 = iVar7 + 0x60;
			iVar8 = iVar8 + 0x60;
		} while ((int)puVar5 < -0x7ff1b03c);
		iVar9 = iVar9 + 1;
		iVar6 = iVar9 * 2;
	} while (iVar9 < 0x28);
	iVar6 = 0;
	do {
		iVar7 = 0;
		iVar9 = iVar6 * 2;
		iVar8 = 0;
		puVar5 = dungeon;
		do {
			if (puVar5[iVar6] == 0xd) {
				psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc);
				if (*psVar2 == 0x13) {
					*psVar2 = 0x15;
				}
				if ((puVar5[iVar6] == 0xd) && (*psVar2 == 0x16)) {
					*psVar2 = 0x14;
				}
			}
			if ((puVar5[iVar6] == 7) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x16)
				 ) {
				*psVar2 = 0x17;
			}
			if ((puVar5[iVar6] == 0xd) &&
				 (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x18)) {
				*psVar2 = 0x15;
			}
			if ((puVar5[iVar6] == 0x13) &&
				 (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x16)) {
				*psVar2 = 0x14;
			}
			if ((puVar5[iVar6] == 2) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x13)
				 ) {
				*psVar2 = 0x15;
			}
			if ((puVar5[iVar6] == 0x13) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 1)
				 ) {
				*psVar2 = 6;
			}
			if ((puVar5[iVar6] == 7) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x13)
				 ) {
				*psVar2 = 0x15;
			}
			if ((puVar5[iVar6] == 2) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 1)) {
				*psVar2 = 6;
			}
			if ((puVar5[iVar6] == 3) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x16)
				 ) {
				*psVar2 = 0x18;
			}
			if ((puVar5[iVar6] == 0x15) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 1)
				 ) {
				*psVar2 = 6;
			}
			if (puVar5[iVar6] == 7) {
				psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc);
				if (*psVar2 == 1) {
					*psVar2 = 6;
				}
				if ((puVar5[iVar6] == 7) && (*psVar2 == 0x18)) {
					*psVar2 = 0x15;
				}
			}
			if ((puVar5[iVar6] == 4) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0x10)
				 ) {
				*psVar2 = 0x11;
			}
			if ((puVar5[iVar6] == 7) && (psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc), *psVar2 == 0xd))
			{
				*psVar2 = 0x11;
			}
			if (puVar5[iVar6] == 2) {
				psVar2 = (short *)(iVar9 + iVar8 + -0x7ff1bedc);
				if (*psVar2 == 0x18) {
					*psVar2 = 0x15;
				}
				if ((puVar5[iVar6] == 2) && (*psVar2 == 0xd)) {
					*psVar2 = 0x11;
				}
			}
			if ((puVar5[iVar6] == 0x17) &&
				 (psVar2 = (short *)((int)PTR_ARRAY_800e4064 + iVar9 + iVar8), *psVar2 == 0x16)) {
				*psVar2 = 0x13;
			}
			if ((puVar5[iVar6] == 0x13) &&
				 (psVar2 = (short *)((int)PTR_ARRAY_800e4064 + iVar9 + iVar8), *psVar2 == 0x17)) {
				*psVar2 = 0x15;
			}
			if (puVar5[iVar6] == 6) {
				psVar2 = (short *)((int)PTR_ARRAY_800e4064 + iVar9 + iVar8);
				if (*psVar2 == 0x16) {
					*psVar2 = 0x18;
				}
				if ((puVar5[iVar6] == 6) && (*psVar2 == 0x17)) {
					*psVar2 = 0x15;
				}
			}
			puVar3 = puVar5 + iVar6;
			puVar4 = puVar5 + iVar6;
			if ((*puVar3 == 1) && (puVar3[1] == 2)) {
				puVar3[1] = 7;
			}
			if ((*puVar4 == 6) && (puVar4[1] == 0x12)) {
				puVar4[1] = 0x15;
			}
			puVar3 = puVar5 + iVar6;
			if ((*puVar3 == 0x12) && (puVar3[1] == 2)) {
				puVar3[1] = 7;
			}
			puVar3 = puVar5 + iVar6;
			if ((*puVar3 == 6) && (puVar3[1] == 2)) {
				puVar3[1] = 7;
			}
			puVar3 = puVar5 + iVar6;
			uVar1 = *puVar3;
			if (uVar1 == 0x15) {
				if (puVar3[1] == 2) {
					puVar3[1] = 7;
				}
				uVar1 = puVar5[iVar6];
			}
			puVar3 = puVar5 + iVar6;
			if (uVar1 == 6) {
				if (puVar3[1] == 0x16) {
					puVar3[1] = 0x18;
				}
				if ((*puVar3 == 6) && (puVar3[1] == 0xd)) {
					puVar3[1] = 0x10;
				}
			}
			puVar3 = puVar5 + iVar6;
			if ((*puVar3 == 1) && (puVar3[1] == 0xd)) {
				puVar3[1] = 0x10;
			}
			puVar3 = puVar5 + iVar6;
			if ((*puVar3 == 0xd) && (puVar3[1] == 0x10)) {
				puVar3[1] = 0x11;
			}
			puVar3 = puVar5 + iVar6;
			if (*puVar3 == 6) {
				if (puVar3[-1] == 0x16) {
					puVar3[-1] = 7;
				}
				if ((*puVar3 == 6) && (puVar3[-1] == 0x16)) {
					puVar3[-1] = 0x18;
				}
			}
			puVar3 = puVar5 + iVar6;
			if ((*puVar3 == 7) && (puVar3[-1] == 0x18)) {
				puVar3[-1] = 0x15;
			}
			puVar3 = puVar5 + iVar6;
			if ((*puVar3 == 0x12) && (puVar3[-1] == 0x18)) {
				puVar3[-1] = 0x15;
			}
			puVar5 = puVar5 + 0x30;
			iVar7 = iVar7 + 1;
			iVar8 = iVar8 + 0x60;
		} while (iVar7 < 0x28);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x28);
	iVar9 = 0;
	iVar6 = 0;
	do {
		iVar8 = 0;
		puVar5 = dungeon;
		do {
			psVar2 = (short *)(iVar6 + (int)puVar5);
			if ((*psVar2 == 4) && (psVar2[1] == 2)) {
				psVar2[1] = 7;
			}
			if ((*(short *)(iVar6 + (int)puVar5) == 2) &&
				 (psVar2 = (short *)(iVar6 + iVar8 + -0x7ff1bedc), *psVar2 == 0x13)) {
				*psVar2 = 0x15;
			}
			psVar2 = (short *)(iVar6 + (int)puVar5);
			if ((*psVar2 == 0x12) && (psVar2[1] == 0x16)) {
				psVar2[1] = 0x14;
			}
			puVar5 = puVar5 + 0x30;
			iVar8 = iVar8 + 0x60;
		} while ((int)puVar5 < -0x7ff1b03c);
		iVar9 = iVar9 + 1;
		iVar6 = iVar9 * 2;
	} while (iVar9 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5Subs__Fv()
 // line 1648, offset 0x8013f2ec
	/* begin block 1 */
		// Start line: 1649
		// Start offset: 0x8013F2EC
		// Variables:
	// 		int x; // $s5
	// 		int y; // $s6
	// 		int i; // $a0
	// 		int rv; // $v1
	/* end block 1 */
	// End offset: 0x8013F4C4
	// End Line: 1683

	/* begin block 2 */
		// Start line: 3673
	/* end block 2 */
	// End Line: 3674

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5Subs__Fv(void)

{
	uchar uVar1;
	long lVar2;
	ushort uVar3;
	int iVar4;
	int iVar5;
	undefined2 *puVar6;
	int iVar7;
	ushort *puVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar11 = 0;
	iVar12 = 0;
	do {
		iVar10 = 0;
		puVar8 = dungeon;
		iVar9 = 0;
		iVar7 = iVar12;
		do {
			lVar2 = ENG_random__Fl(4);
			if (((lVar2 == 0) && (uVar1 = L5BTYPES[(uint)*(byte *)(puVar8 + iVar11)], uVar1 != '\0')) &&
				 (mydflags[iVar7] == '\0')) {
				lVar2 = ENG_random__Fl(0x10);
				iVar4 = -1;
				if (-1 < lVar2) {
					iVar5 = 0;
					do {
						iVar4 = iVar5;
						if (iVar5 == 0xce) {
							iVar4 = 0;
						}
						if (uVar1 == L5BTYPES[iVar4]) {
							lVar2 = lVar2 + -1;
						}
						iVar5 = iVar4 + 1;
					} while (-1 < lVar2);
				}
				if (iVar4 == 0x59) {
					if ((L5BTYPES[(uint)*(byte *)(puVar8 + iVar11 + -1)] == 'O') &&
						 (mydflags[iVar7 + -0x28] == '\0')) {
						(puVar8 + iVar11)[-1] = 0x5a;
					}
					else {
						iVar4 = 0x4f;
					}
				}
				uVar3 = (ushort)iVar4;
				if (iVar4 == 0x5b) {
					puVar6 = (undefined2 *)(iVar11 * 2 + iVar9 + -0x7ff1bedc);
					if ((L5BTYPES[(uint)*(byte *)puVar6] == 'P') && (mydflags[iVar7 + 1] == '\0')) {
						*puVar6 = 0x5c;
					}
					else {
						uVar3 = 0x50;
					}
				}
				puVar8[iVar11] = uVar3;
			}
			puVar8 = puVar8 + 0x30;
			iVar9 = iVar9 + 0x60;
			iVar10 = iVar10 + 1;
			iVar7 = iVar7 + 1;
		} while (iVar10 < 0x28);
		iVar11 = iVar11 + 1;
		iVar12 = iVar12 + 0x28;
	} while (iVar11 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5SetRoom__Fii(int rx1 /*$a0*/, int ry1 /*$a1*/)
 // line 1688, offset 0x8013f4f8
	/* begin block 1 */
		// Start line: 1689
		// Start offset: 0x8013F4F8
		// Variables:
	// 		int rw; // $t4
	// 		int rh; // $t5
	// 		int i; // $a3
	// 		int j; // $t2
	// 		unsigned char *sp; // $t0
	/* end block 1 */
	// End offset: 0x8013F5EC
	// End Line: 1717

	/* begin block 2 */
		// Start line: 3765
	/* end block 2 */
	// End Line: 3766

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5SetRoom__Fii(int rx1,int ry1)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	byte *pbVar5;
	int iVar6;
	uint uVar7;
	uint uVar8;
	
	iVar6 = 0;
	bVar1 = *pSetPiece;
	uVar7 = (uint)bVar1;
	uVar8 = (uint)pSetPiece[2];
	pbVar5 = pSetPiece + 4;
	setpc_x = rx1;
	setpc_y = ry1;
	setpc_w = uVar7;
	setpc_h = uVar8;
	if (pSetPiece[2] != 0) {
		do {
			iVar4 = 0;
			if (bVar1 != 0) {
				iVar2 = ry1 + iVar6;
				iVar3 = rx1;
				do {
					if (*pbVar5 == 0) {
						dungeon[iVar3 * 0x30 + iVar2] = 0xd;
					}
					else {
						dungeon[iVar3 * 0x30 + iVar2] = (ushort)*pbVar5;
						mydflags[iVar2 * 0x28 + iVar3] = mydflags[iVar2 * 0x28 + iVar3] | 0x80;
					}
					pbVar5 = pbVar5 + 2;
					iVar4 = iVar4 + 1;
					iVar3 = iVar3 + 1;
				} while (iVar4 < (int)uVar7);
			}
			iVar6 = iVar6 + 1;
		} while (iVar6 < (int)uVar8);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L5FillChambers__Fv()
 // line 1722, offset 0x8013f5f8
	/* begin block 1 */
		// Start line: 1723
		// Start offset: 0x8013F5F8
		// Variables:
	// 		int c; // $s0
	/* end block 1 */
	// End offset: 0x8013FCD0
	// End Line: 1799

	/* begin block 2 */
		// Start line: 3864
	/* end block 2 */
	// End Line: 3865

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L5FillChambers__Fv(void)

{
	long lVar1;
	int rx1;
	int ry1;
	long lVar2;
	
	if (HR1 != '\0') {
		DRLG_L5GChamber__Fiiiiii(0,0xe,0,0,0,1);
	}
	if (HR2 == '\0') {
LAB_8013f72c:
		if (HR3 != '\0') goto LAB_8013f73c;
	}
	else {
		if (HR1 == '\0') {
LAB_8013f688:
			if (HR3 != '\0') {
				DRLG_L5GChamber__Fiiiiii(0xe,0xe,0,0,0,1);
			}
			if (HR1 != '\0') goto LAB_8013f6c4;
		}
		else {
			if (HR3 == '\0') {
				DRLG_L5GChamber__Fiiiiii(0xe,0xe,0,0,1,0);
			}
			if (HR1 == '\0') goto LAB_8013f688;
LAB_8013f6c4:
			if (HR3 != '\0') {
				DRLG_L5GChamber__Fiiiiii(0xe,0xe,0,0,1,1);
			}
			if (HR1 != '\0') goto LAB_8013f72c;
		}
		if (HR3 == '\0') {
			DRLG_L5GChamber__Fiiiiii(0xe,0xe,0,0,0,0);
			goto LAB_8013f72c;
		}
LAB_8013f73c:
		DRLG_L5GChamber__Fiiiiii(0x1c,0xe,0,0,1,0);
	}
	if (HR1 == '\0') {
LAB_8013f788:
		if ((HR2 != '\0') && (HR3 != '\0')) {
			DRLG_L5GHall__Fiiii(0x1a,0x12,0x1c,0x12);
		}
	}
	else {
		if (HR2 != '\0') {
			DRLG_L5GHall__Fiiii(0xc,0x12,0xe,0x12);
			goto LAB_8013f788;
		}
	}
	if (((HR1 != '\0') && (HR2 == '\0')) && (HR3 != '\0')) {
		DRLG_L5GHall__Fiiii(0xc,0x12,0x1c,0x12);
	}
	if (VR1 != '\0') {
		DRLG_L5GChamber__Fiiiiii(0xe,0,0,1,0,0);
	}
	if (VR2 == '\0') {
LAB_8013f910:
		if (VR3 != '\0') goto LAB_8013f920;
	}
	else {
		if (VR1 == '\0') {
LAB_8013f878:
			if (VR3 != '\0') {
				DRLG_L5GChamber__Fiiiiii(0xe,0xe,0,1,0,0);
			}
			if (VR1 != '\0') goto LAB_8013f8b0;
		}
		else {
			if (VR3 == '\0') {
				DRLG_L5GChamber__Fiiiiii(0xe,0xe,1,0,0,0);
			}
			if (VR1 == '\0') goto LAB_8013f878;
LAB_8013f8b0:
			if (VR3 != '\0') {
				DRLG_L5GChamber__Fiiiiii(0xe,0xe,1,1,0,0);
			}
			if (VR1 != '\0') goto LAB_8013f910;
		}
		if (VR3 == '\0') {
			DRLG_L5GChamber__Fiiiiii(0xe,0xe,0,0,0,0);
			goto LAB_8013f910;
		}
LAB_8013f920:
		DRLG_L5GChamber__Fiiiiii(0xe,0x1c,1,0,0,0);
	}
	if (VR1 == '\0') {
LAB_8013f968:
		if ((VR2 != '\0') && (VR3 != '\0')) {
			DRLG_L5GHall__Fiiii(0x12,0x1a,0x12,0x1c);
		}
	}
	else {
		if (VR2 != '\0') {
			DRLG_L5GHall__Fiiii(0x12,0xc,0x12,0xe);
			goto LAB_8013f968;
		}
	}
	if (((VR1 != '\0') && (VR2 == '\0')) && (VR3 != '\0')) {
		DRLG_L5GHall__Fiiii(0x12,0xc,0x12,0x1c);
	}
	if (setloadflag == '\0') {
		return;
	}
	lVar2 = 1;
	if (VR1 == '\0') {
		if ((VR2 == '\0') && (VR3 == '\0')) {
			if (HR1 == '\0') {
				if (((HR2 != '\0') && (HR3 != '\0')) && (lVar1 = ENG_random__Fl(2), lVar1 != 0)) {
					lVar2 = 2;
				}
				if (HR1 != '\0') goto LAB_8013fa70;
			}
			else {
LAB_8013fa70:
				if (((HR2 != '\0') && (HR3 == '\0')) && (lVar1 = ENG_random__Fl(2), lVar1 != 0)) {
					lVar2 = 0;
				}
				if (HR1 != '\0') {
					if ((HR2 == '\0') && (HR3 != '\0')) {
						lVar2 = ENG_random__Fl(2);
						lVar2 = (uint)(lVar2 == 0) << 1;
					}
					if (((HR1 != '\0') && (HR2 != '\0')) && (HR3 != '\0')) {
						lVar2 = ENG_random__Fl(3);
					}
				}
			}
			if (lVar2 == 1) {
				rx1 = 0x10;
				ry1 = 0x10;
			}
			else {
				if (lVar2 < 2) {
					rx1 = 2;
					if (lVar2 != 0) {
						return;
					}
					ry1 = 0x10;
				}
				else {
					rx1 = 0x1e;
					if (lVar2 != 2) {
						return;
					}
					ry1 = 0x10;
				}
			}
			goto LAB_8013fcc8;
		}
		lVar2 = 1;
		if ((VR2 != '\0') && ((VR3 != '\0' && (lVar1 = ENG_random__Fl(2), lVar1 != 0)))) {
			lVar2 = 2;
		}
		if (VR1 != '\0') goto LAB_8013fbc8;
	}
	else {
LAB_8013fbc8:
		if (((VR2 != '\0') && (VR3 == '\0')) && (lVar1 = ENG_random__Fl(2), lVar1 != 0)) {
			lVar2 = 0;
		}
		if (VR1 != '\0') {
			if ((VR2 == '\0') && (VR3 != '\0')) {
				lVar2 = ENG_random__Fl(2);
				lVar2 = (uint)(lVar2 == 0) << 1;
			}
			if (((VR1 != '\0') && (VR2 != '\0')) && (VR3 != '\0')) {
				lVar2 = ENG_random__Fl(3);
			}
		}
	}
	if (lVar2 == 1) {
		rx1 = 0x10;
		ry1 = 0x10;
	}
	else {
		if (lVar2 < 2) {
			rx1 = 0x10;
			if (lVar2 != 0) {
				return;
			}
			ry1 = 2;
		}
		else {
			rx1 = 0x10;
			if (lVar2 != 2) {
				return;
			}
			ry1 = 0x1e;
		}
	}
LAB_8013fcc8:
	DRLG_L5SetRoom__Fii(rx1,ry1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5FTVR__Fiiiii(int i /*$s1*/, int j /*$s7*/, int x /*$s0*/, int y /*$fp*/, int d /*stack 16*/)
 // line 1807, offset 0x8013fce4
	/* begin block 1 */
		// Start line: 1808
		// Start offset: 0x8013FCE4
	/* end block 1 */
	// End offset: 0x80140138
	// End Line: 1846

	/* begin block 2 */
		// Start line: 4034
	/* end block 2 */
	// End Line: 4035

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5FTVR__Fiiiii(int i,int j,int x,int y,int d)

{
	int i_00;
	int y_00;
	int j_00;
	int x_00;
	int i_01;
	int x_01;
	
	if ((dung_map[x * 0x70 + y].dTransVal == '\0') && (dungeon[i * 0x30 + j] == 0xd)) {
		i_00 = i + 1;
		x_01 = x + 2;
		dung_map[x * 0x70 + y].dTransVal = TransVal;
		dung_map[(x + 1) * 0x70 + y].dTransVal = TransVal;
		dung_map[x * 0x70 + y + 1].dTransVal = TransVal;
		dung_map[(x + 1) * 0x70 + y + 1].dTransVal = TransVal;
		DRLG_L5FTVR__Fiiiii(i_00,j,x_01,y,1);
		i_01 = i + -1;
		x_00 = x + -2;
		DRLG_L5FTVR__Fiiiii(i_01,j,x_00,y,2);
		j_00 = j + 1;
		y_00 = y + 2;
		DRLG_L5FTVR__Fiiiii(i,j_00,x,y_00,3);
		j = j + -1;
		y = y + -2;
		DRLG_L5FTVR__Fiiiii(i,j,x,y,4);
		DRLG_L5FTVR__Fiiiii(i_01,j,x_00,y,5);
		DRLG_L5FTVR__Fiiiii(i_00,j,x_01,y,6);
		DRLG_L5FTVR__Fiiiii(i_01,j_00,x_00,y_00,7);
		DRLG_L5FTVR__Fiiiii(i_00,j_00,x_01,y_00,8);
	}
	else {
		if (d == 1) {
			dung_map[x * 0x70 + y].dTransVal = TransVal;
			dung_map[x * 0x70 + y + 1].dTransVal = TransVal;
		}
		if (d == 2) {
			dung_map[(x + 1) * 0x70 + y].dTransVal = TransVal;
			dung_map[(x + 1) * 0x70 + y + 1].dTransVal = TransVal;
		}
		if (d == 3) {
			dung_map[x * 0x70 + y].dTransVal = TransVal;
			dung_map[(x + 1) * 0x70 + y].dTransVal = TransVal;
		}
		if (d == 4) {
			dung_map[x * 0x70 + y + 1].dTransVal = TransVal;
			dung_map[(x + 1) * 0x70 + y + 1].dTransVal = TransVal;
		}
		if (d == 5) {
			dung_map[(x + 1) * 0x70 + y + 1].dTransVal = TransVal;
		}
		if (d == 6) {
			dung_map[x * 0x70 + y + 1].dTransVal = TransVal;
		}
		if (d == 7) {
			dung_map[(x + 1) * 0x70 + y].dTransVal = TransVal;
		}
		if (d == 8) {
			dung_map[x * 0x70 + y].dTransVal = TransVal;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5FloodTVal__Fv()
 // line 1852, offset 0x8014016c
	/* begin block 1 */
		// Start line: 1853
		// Start offset: 0x8014016C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s4
	// 		int xx; // $s3
	// 		int yy; // $s5
	/* end block 1 */
	// End offset: 0x80140238
	// End Line: 1868

	/* begin block 2 */
		// Start line: 4132
	/* end block 2 */
	// End Line: 4133

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5FloodTVal__Fv(void)

{
	int i;
	int iVar1;
	ushort *puVar2;
	int x;
	int j;
	int y;
	
	y = 0x10;
	j = 0;
	do {
		x = 0x10;
		i = 0;
		iVar1 = y * 8 + 0x3800;
		puVar2 = dungeon;
		do {
			if ((puVar2[j] == 0xd) && ((&dung_map[0].dTransVal)[iVar1] == '\0')) {
				DRLG_L5FTVR__Fiiiii(i,j,x,y,0);
				TransVal = TransVal + '\x01';
			}
			iVar1 = iVar1 + 0x700;
			x = x + 2;
			i = i + 1;
			puVar2 = puVar2 + 0x30;
		} while (i < 0x28);
		j = j + 1;
		y = y + 2;
	} while (j < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5TransFix__Fv()
 // line 1875, offset 0x80140264
	/* begin block 1 */
		// Start line: 1876
		// Start offset: 0x80140264
		// Variables:
	// 		int j; // $s1
	// 		int yy; // $s0
	// 		int v; // $a2
	/* end block 1 */
	// End offset: 0x80140684
	// End Line: 1983

	/* begin block 2 */
		// Start line: 4192
	/* end block 2 */
	// End Line: 4193

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5TransFix__Fv(void)

{
	ushort uVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char **ppcVar6;
	ushort *puVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar12 = 0x10;
	iVar13 = 0;
	iVar14 = 0x78;
	iVar9 = 0x88;
	do {
		iVar5 = iVar13 * 2;
		iVar15 = 0;
		iVar3 = iVar12 * 8 + 0x3800;
		iVar11 = 0x3800;
		iVar10 = 0x3480;
		iVar4 = 0x3b80;
		iVar8 = iVar9 + 0x3800;
		ppcVar6 = PTR_ARRAY_800e4064;
		puVar7 = dungeon;
		do {
			uVar1 = puVar7[iVar13];
			if ((uVar1 == 0x17) && ((puVar7 + iVar13)[-1] == 0x12)) {
				(&dung_map[iVar12].dTransVal)[iVar4] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar9 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			if ((uVar1 == 0x18) && (*(short *)(iVar5 + iVar15 + -0x7ff1bedc) == 0x13)) {
				(&dung_map[0].dTransVal)[iVar8] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar9 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			if (uVar1 == 0x12) {
				(&dung_map[iVar12].dTransVal)[iVar4] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar9 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			if (uVar1 == 0x13) {
				(&dung_map[0].dTransVal)[iVar8] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar9 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			if (uVar1 == 0x14) {
				(&dung_map[iVar12].dTransVal)[iVar4] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar8] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar9 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			if ((uVar1 == 0x18) && (puVar7[iVar13 + -1] == 6)) {
				(&dung_map[0].dTransVal)[iVar3] = (&dung_map[iVar12 + -2].dTransVal)[iVar11];
			}
			if (uVar1 == 6) {
				if (*(short *)(char **)(iVar5 + (int)ppcVar6) == 2) {
					(&dung_map[0].dTransVal)[iVar3] = (&dung_map[iVar12].dTransVal)[iVar4];
				}
				if (*(short *)(char **)(iVar5 + (int)ppcVar6) == 0x25) {
					(&dung_map[0].dTransVal)[iVar3] = (&dung_map[0].dTransVal)[iVar8];
				}
			}
			if ((uVar1 == 0x1b) && (*(short *)(iVar5 + (int)ppcVar6) == 2)) {
				(&dung_map[0].dTransVal)[iVar3] = (&dung_map[iVar12].dTransVal)[iVar4];
			}
			if (uVar1 == 0x17) {
				sVar2 = *(short *)(char **)(iVar5 + (int)ppcVar6);
				if (sVar2 == 7) {
					(&dung_map[0].dTransVal)[iVar3] = -1;
					sVar2 = *(short *)(char **)(iVar5 + (int)ppcVar6);
				}
				if (sVar2 == 0xd) {
					(&dung_map[0].dTransVal)[iVar3] = (&dung_map[0].dTransVal)[iVar14 + iVar10];
				}
			}
			if ((uVar1 == 7) && (*(short *)(iVar5 + (int)ppcVar6) == 0xd)) {
				(&dung_map[0].dTransVal)[iVar3] = -1;
			}
			if ((uVar1 == 0xc) && (*(short *)(iVar5 + (int)ppcVar6) == 2)) {
				(&dung_map[0].dTransVal)[iVar3] = -1;
			}
			if ((uVar1 == 7) && (puVar7[iVar13 + -1] == 1)) {
				(&dung_map[0].dTransVal)[iVar3] = -1;
			}
			if ((uVar1 == 0x15) && (puVar7[iVar13 + -1] == 1)) {
				(&dung_map[0].dTransVal)[iVar3] = -1;
			}
			iVar3 = iVar3 + 0x700;
			iVar11 = iVar11 + 0x700;
			iVar10 = iVar10 + 0x700;
			iVar4 = iVar4 + 0x700;
			iVar8 = iVar8 + 0x700;
			puVar7 = puVar7 + 0x30;
			iVar15 = iVar15 + 0x60;
			ppcVar6 = ppcVar6 + 0x18;
		} while ((int)puVar7 < -0x7ff1b03c);
		iVar14 = iVar14 + 0x10;
		iVar9 = iVar9 + 0x10;
		iVar13 = iVar13 + 1;
		iVar12 = iVar12 + 2;
	} while (iVar13 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5DirtFix__Fv()
 // line 1987, offset 0x801406a8
	/* begin block 1 */
		// Start line: 1988
		// Start offset: 0x801406A8
		// Variables:
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x8014081C
	// End Line: 2002

	/* begin block 2 */
		// Start line: 4448
	/* end block 2 */
	// End Line: 4449

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5DirtFix__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	do {
		iVar4 = iVar7 * 2;
		iVar5 = 0;
		puVar3 = dungeon;
		iVar6 = -0x7ff1bedc;
		do {
			puVar2 = puVar3 + iVar7;
			if (*puVar2 == 0x15) {
				if (puVar2[1] == 0xd) {
					*puVar2 = 7;
				}
				if ((*puVar2 == 0x15) && (*(short *)(iVar4 + iVar6) != 0x13)) {
					*puVar2 = 0xca;
				}
			}
			if ((puVar3[iVar7] == 0x13) && (*(short *)(iVar4 + iVar5 + -0x7ff1bedc) != 0x13)) {
				puVar3[iVar7] = 200;
			}
			if ((puVar3[iVar7] == 0x18) && (*(short *)(iVar4 + iVar5 + -0x7ff1bedc) != 0x13)) {
				puVar3[iVar7] = 0xcd;
			}
			puVar2 = puVar3 + iVar7;
			uVar1 = *puVar2;
			if (uVar1 == 0x12) {
				if (puVar2[1] != 0x12) {
					*puVar2 = 199;
				}
				uVar1 = puVar3[iVar7];
			}
			puVar2 = puVar3 + iVar7;
			if ((uVar1 == 0x15) && (puVar2[1] != 0x12)) {
				*puVar2 = 0xca;
			}
			if ((*puVar2 == 0x17) && (puVar2[1] != 0x12)) {
				*puVar2 = 0xcc;
			}
			puVar3 = puVar3 + 0x30;
			iVar5 = iVar5 + 0x60;
			iVar6 = iVar6 + 0x60;
		} while ((int)puVar3 < -0x7ff1b03c);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5CornerFix__Fv()
 // line 2008, offset 0x80140824
	/* begin block 1 */
		// Start line: 2009
		// Start offset: 0x80140824
		// Variables:
	// 		int i; // $t1
	// 		int j; // $t3
	/* end block 1 */
	// End offset: 0x80140928
	// End Line: 2024

	/* begin block 2 */
		// Start line: 4490
	/* end block 2 */
	// End Line: 4491

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5CornerFix__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	byte *pbVar3;
	int iVar4;
	ushort *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 1;
	iVar7 = 0x28;
	do {
		iVar6 = 1;
		iVar4 = 0x60;
		puVar5 = dungeon;
		do {
			puVar5 = puVar5 + 0x30;
			pbVar3 = mydflags + iVar7 + iVar6;
			puVar2 = puVar5 + iVar8;
			if ((*pbVar3 & 0x80) == 0) {
				uVar1 = *puVar2;
				if (((uVar1 == 0x11) && (*(short *)((int)PTR_ARRAY_800e4064 + iVar8 * 2 + iVar4) == 0xd)) &&
					 (puVar2[-1] == 1)) {
					*puVar2 = 0x10;
					pbVar3[-0x28] = pbVar3[-0x28] & 0x80;
					goto LAB_801408cc;
				}
			}
			else {
LAB_801408cc:
				uVar1 = puVar5[iVar8];
			}
			if (((uVar1 == 0xca) && (*(short *)(iVar8 * 2 + iVar4 + -0x7ff1bedc) == 0xd)) &&
				 ((puVar5 + iVar8)[1] == 1)) {
				puVar5[iVar8] = 8;
			}
			iVar6 = iVar6 + 1;
			iVar4 = iVar4 + 0x60;
		} while (iVar6 < 0x27);
		iVar8 = iVar8 + 1;
		iVar7 = iVar7 + 0x28;
		if (0x26 < iVar8) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L5__Fi(int entry /*$s2*/)
 // line 2029, offset 0x80140930
	/* begin block 1 */
		// Start line: 2030
		// Start offset: 0x80140930
		// Variables:
	// 		long minarea; // $s4
	// 		unsigned char doneflag; // $s0
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int yy; // $s6
	/* end block 1 */
	// End offset: 0x80140E30
	// End Line: 2159

	/* begin block 2 */
		// Start line: 4529
	/* end block 2 */
	// End Line: 4530

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L5__Fi(int entry)

{
	uchar uVar1;
	long lVar2;
	ushort *puVar3;
	uchar *miniset;
	ushort *puVar4;
	uint uVar5;
	int iVar6;
	int sx;
	int sx_00;
	int iVar7;
	int local_3c;
	int local_34;
	
	iVar7 = 0;
	if (currlevel == '\x02') {
		iVar7 = 0x2b5;
	}
	else {
		if (currlevel < 3) {
			if (currlevel == '\x01') {
				iVar7 = 0x215;
			}
		}
		else {
			if (currlevel < 5) {
				iVar7 = 0x2f9;
			}
		}
	}
	do {
		UPDATEPROGRESS__Fi(1);
		DRLG_InitTrans__Fv();
		do {
			InitL5Dungeon__Fv();
			L5firstRoom__Fv();
			lVar2 = L5GetArea__Fv();
		} while (lVar2 < iVar7);
		uVar5 = 1;
		L5makeDungeon__Fv();
		L5makeDmt__Fv();
		L5FillChambers__Fv();
		L5tileFix__Fv();
		L5AddWall__Fv();
		L5ClearFlags__Fv();
		DRLG_L5FloodTVal__Fv();
		DRLG_SetWalls__Fv();
		uVar1 = QuestStatus__Fi(0xd);
		if (uVar1 != '\0') {
			if (entry == 0) {
				uVar5 = DRLG_PlaceMiniSet__FPCUciiiiiii(PWATERIN,1,1,0,0,1,-1,0);
				uVar5 = ~uVar5 >> 0x1f;
			}
			else {
				local_3c = DRLG_PlaceMiniSet__FPCUciiiiiii(PWATERIN,1,1,0,0,0,-1,0);
				uVar5 = (uint)(-1 < local_3c);
				ViewY = ViewY + -1;
			}
		}
		uVar1 = QuestStatus__Fi(7);
		if (uVar1 == '\0') {
			if (entry == 0) {
				local_3c = DRLG_PlaceMiniSet__FPCUciiiiiii(L5STAIRSUP,1,1,0,0,1,-1,0);
				if (-1 < local_3c) {
					miniset = STAIRSDOWN;
					local_3c = 0;
					local_34 = 1;
					goto LAB_80140bd4;
				}
LAB_80140be4:
				uVar5 = 0;
			}
			else {
				local_3c = DRLG_PlaceMiniSet__FPCUciiiiiii(L5STAIRSUP,1,1,0,0,0,-1,0);
				if ((local_3c < 0) ||
					 (local_3c = DRLG_PlaceMiniSet__FPCUciiiiiii(STAIRSDOWN,1,1,0,0,1,-1,1), local_3c < 0)) {
					uVar5 = 0;
				}
LAB_80140c48:
				ViewY = ViewY + -1;
			}
		}
		else {
			if (entry == 0) {
				miniset = STAIRSUP;
				local_3c = 1;
				local_34 = 0;
LAB_80140bd4:
				local_3c = DRLG_PlaceMiniSet__FPCUciiiiiii(miniset,1,1,0,0,local_3c,-1,local_34);
				if (local_3c < 0) goto LAB_80140be4;
			}
			else {
				local_3c = DRLG_PlaceMiniSet__FPCUciiiiiii(STAIRSUP,1,1,0,0,0,-1,0);
				if (local_3c < 0) {
					uVar5 = 0;
				}
				if (entry != 1) goto LAB_80140c48;
				ViewX = setpc_x * 2 + 0x14;
				ViewY = setpc_y * 2 + 0x1c;
			}
		}
		if (uVar5 != 0) {
			iVar7 = 0;
			local_34 = 0x11;
			local_3c = 0x10;
			do {
				iVar6 = 0;
				sx_00 = 0x11;
				sx = 0x10;
				puVar4 = dungeon;
				do {
					if (puVar4[iVar7] == 0x40) {
						DRLG_CopyTrans__Fiiii(sx,local_34,sx,local_3c);
						DRLG_CopyTrans__Fiiii(sx_00,local_34,sx_00,local_3c);
					}
					sx_00 = sx_00 + 2;
					sx = sx + 2;
					iVar6 = iVar6 + 1;
					puVar4 = puVar4 + 0x30;
				} while (iVar6 < 0x28);
				local_34 = local_34 + 2;
				iVar7 = iVar7 + 1;
				local_3c = local_3c + 2;
			} while (iVar7 < 0x28);
			local_3c = 0;
			DRLG_L5TransFix__Fv();
			iVar7 = 0;
			DRLG_L5DirtFix__Fv();
			DRLG_L5CornerFix__Fv();
			do {
				local_34 = 0;
				do {
					if ((mydflags[iVar7 + local_34] & 0x7f) != 0) {
						DRLG_PlaceDoor__Fii(local_34,local_3c);
					}
					local_34 = local_34 + 1;
				} while (local_34 < 0x28);
				local_3c = local_3c + 1;
				iVar7 = iVar7 + 0x28;
			} while (local_3c < 0x28);
			iVar7 = 0;
			DRLG_L5Subs__Fv();
			DRLG_L1Shadows__Fv();
			DRLG_PlaceMiniSet__FPCUciiiiiii(LAMPS,5,10,0,0,0,-1,4);
			DRLG_L1Floor__Fv();
			do {
				local_3c = 0;
				miniset = &pdungeon;
				puVar4 = dungeon;
				do {
					puVar3 = puVar4 + iVar7;
					puVar4 = puVar4 + 0x30;
					local_3c = local_3c + 1;
					miniset[iVar7] = (uchar)*puVar3;
					miniset = miniset + 0x28;
				} while (local_3c < 0x28);
				iVar7 = iVar7 + 1;
			} while (iVar7 < 0x28);
			DRLG_Init_Globals__Fv();
			DRLG_CheckQuests__Fii(setpc_x,setpc_y);
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateL5Dungeon__FUii(unsigned int rseed /*$a0*/, int entry /*$s0*/)
 // line 2176, offset 0x80140e64
	/* begin block 1 */
		// Start line: 2177
		// Start offset: 0x80140E64
	/* end block 1 */
	// End offset: 0x80140EE0
	// End Line: 2194

	/* begin block 2 */
		// Start line: 4833
	/* end block 2 */
	// End Line: 4834

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateL5Dungeon__FUii(uint rseed,int entry)

{
	SetRndSeed__Fl(rseed);
	dminx = 0x10;
	dminy = 0x10;
	dmaxx = 0x50;
	dmaxy = 0x50;
	DRLG_InitTrans__Fv();
	DRLG_InitSetPC__Fv();
	DRLG_LoadL1SP__Fv();
	DRLG_L5__Fi(entry);
	DRLG_L1Pass3__Fv();
	DRLG_FreeL1SP__Fv();
	DRLG_InitL1Vals__Fv();
	DRLG_SetPC__Fv();
	return;
}





