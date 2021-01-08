#include "THISDUST.H"
#include "DRLG_L2.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char *miniset /*$s4*/, int tmin /*$s0*/, int tmax /*$a2*/, int cx /*$s5*/, int cy /*stack 16*/, int setview /*stack 20*/, int ldir /*stack 24*/)
 // line 1205, offset 0x80143408
	/* begin block 1 */
		// Start line: 1206
		// Start offset: 0x80143408
		// Variables:
	// 		int sx; // $t1
	// 		int sy; // $t3
	// 		int sw; // $s1
	// 		int sh; // $s2
	// 		int xx; // $a1
	// 		int yy; // $a3
	// 		int i; // $s0
	// 		int ii; // $t0
	// 		int numt; // stack offset -48
	// 		int found; // $a2
	// 		int randxy[128]; // stack offset -592
	// 		int rcount; // $s3
	// 		int failed; // $t6

		/* begin block 1.1 */
			// Start line: 1267
			// Start offset: 0x8014361C

			/* begin block 1.1.1 */
				// Start line: 1267
				// Start offset: 0x80143628
			/* end block 1.1.1 */
			// End offset: 0x801436CC
			// End Line: 1284
		/* end block 1.1 */
		// End offset: 0x801436D4
		// End Line: 1337
	/* end block 1 */
	// End offset: 0x80143764
	// End Line: 1354

	/* begin block 2 */
		// Start line: 2410
	/* end block 2 */
	// End Line: 2411

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DRLG_L2PlaceMiniSet__FPUciiiiii
								(uchar *miniset,int tmin,int tmax,int cx,int cy,int setview,int ldir)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	uchar *puVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	byte *pbVar10;
	int v;
	int iVar11;
	int iVar12;
	int iVar13;
	uint uVar14;
	uint uVar15;
	int aiStack592 [136];
	int iStack48;
	
	bVar1 = *miniset;
	uVar14 = (uint)bVar1;
	bVar2 = miniset[1];
	uVar15 = (uint)bVar2;
	if (tmax == tmin) {
		iStack48 = 1;
	}
	else {
		lVar6 = ENG_random__Fl(tmax - tmin);
		iStack48 = lVar6 + tmin;
	}
	puVar5 = mydflags;
	bVar4 = false;
	iVar11 = 0;
	iVar12 = 0;
	iVar13 = 0;
	do {
		bVar3 = true;
		if (((nSx1 <= iVar11) && (iVar11 <= nSx2)) && (nSy1 <= iVar12)) {
			bVar3 = nSy2 < iVar12;
		}
		if (((cx != -1) && ((int)(cx - uVar14) <= iVar11)) && (iVar11 <= cx + 0xc)) {
			bVar3 = false;
		}
		if (((cy != -1) && ((int)(cy - uVar15) <= iVar12)) && (iVar12 <= cy + 0xc)) {
			bVar3 = false;
		}
		v = 0;
		if (bVar2 != 0) {
			do {
				iVar8 = 0;
				if (bVar1 != 0) {
					iVar7 = iVar11;
					do {
						if ((miniset[2] != 0) && ((uint)dungeon[iVar7 * 0x30 + iVar12 + v] != (uint)miniset[2]))
						{
							bVar3 = false;
						}
						if (puVar5[(iVar12 + v) * 0x28 + iVar7] != '\0') {
							bVar3 = false;
						}
						iVar8 = iVar8 + 1;
						iVar7 = iVar7 + 1;
					} while (iVar8 < (int)uVar14);
				}
				v = v + 1;
			} while (v < (int)uVar15);
		}
		v = iVar13;
		if (bVar3) {
			v = iVar13 + 1;
			aiStack592[iVar13 * 2] = iVar11;
			aiStack592[iVar13 * 2 + 1] = iVar12;
			if (0x3f < v) {
				bVar4 = true;
			}
		}
		iVar11 = iVar11 + 1;
		if (iVar11 == 0x28 - uVar14) {
			iVar12 = iVar12 + 1;
			iVar11 = 0;
			if (iVar12 == 0x28 - uVar15) {
				bVar4 = true;
			}
		}
		iVar13 = v;
	} while (!bVar4);
	iVar13 = 0;
	while (iVar13 < iStack48) {
		lVar6 = ENG_random__Fl(v);
		iVar8 = 0;
		iVar11 = aiStack592[lVar6 * 2];
		iVar12 = aiStack592[lVar6 * 2 + 1];
		iVar7 = uVar15 * uVar14 + 2;
		if (bVar2 != 0) {
			do {
				iVar9 = 0;
				if (bVar1 != 0) {
					pbVar10 = miniset + iVar7;
					do {
						if (*pbVar10 != 0) {
							dungeon[(iVar11 + iVar9) * 0x30 + iVar12 + iVar8] = (ushort)*pbVar10;
						}
						pbVar10 = pbVar10 + 1;
						iVar9 = iVar9 + 1;
						iVar7 = iVar7 + 1;
					} while (iVar9 < (int)uVar14);
				}
				iVar8 = iVar8 + 1;
			} while (iVar8 < (int)uVar15);
		}
		iVar13 = iVar13 + 1;
	}
	if (setview == 1) {
		ViewX = iVar11 * 2 + 0x15;
		ViewY = iVar12 * 2 + 0x16;
	}
	if (ldir == 0) {
		LvlViewX = iVar11 * 2 + 0x15;
		LvlViewY = iVar12 * 2 + 0x16;
	}
	if (ldir == 6) {
		LvlViewX = iVar11 * 2 + 0x15;
		LvlViewY = iVar12 * 2 + 0x16;
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2PlaceRndSet__FPUci(unsigned char *miniset /*$s6*/, int rndper /*stack -104*/)
 // line 1361, offset 0x80143798
	/* begin block 1 */
		// Start line: 1362
		// Start offset: 0x80143798
		// Variables:
	// 		int sx; // $s0
	// 		int sy; // $s3
	// 		int sw; // $s1
	// 		int sh; // $s4
	// 		int xx; // $a0
	// 		int yy; // $a3
	// 		int ii; // $t0
	// 		int jj; // $a0
	// 		int kk; // $s2
	// 		int found; // $t1
	/* end block 1 */
	// End offset: 0x80143A5C
	// End Line: 1410

	/* begin block 2 */
		// Start line: 2729
	/* end block 2 */
	// End Line: 2730

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2PlaceRndSet__FPUci(uchar *miniset,int rndper)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	long lVar4;
	ushort *puVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	uint uVar12;
	int iVar13;
	uint uVar14;
	
	bVar1 = miniset[1];
	uVar14 = (uint)bVar1;
	bVar2 = *miniset;
	uVar12 = (uint)bVar2;
	iVar13 = 0;
	if (0 < (int)(0x28 - uVar14)) {
		do {
			iVar11 = 0;
			if (0 < (int)(0x28 - uVar12)) {
				do {
					bVar3 = true;
					iVar10 = 2;
					if (((nSx1 <= iVar11) && (iVar11 <= nSx2)) && (nSy1 <= iVar13)) {
						bVar3 = nSy2 < iVar13;
					}
					iVar9 = 0;
					if (bVar1 != 0) {
						do {
							if (!bVar3) break;
							iVar6 = 0;
							if (bVar2 != 0) {
								pbVar8 = miniset + iVar10;
								iVar7 = iVar11;
								do {
									if (!bVar3) break;
									if ((*pbVar8 != 0) &&
										 ((uint)dungeon[iVar7 * 0x30 + iVar13 + iVar9] != (uint)*pbVar8)) {
										bVar3 = false;
									}
									if (mydflags[(iVar13 + iVar9) * 0x28 + iVar7] != '\0') {
										bVar3 = false;
									}
									pbVar8 = pbVar8 + 1;
									iVar10 = iVar10 + 1;
									iVar6 = iVar6 + 1;
									iVar7 = iVar7 + 1;
								} while (iVar6 < (int)uVar12);
							}
							iVar9 = iVar9 + 1;
						} while (iVar9 < (int)uVar14);
					}
					iVar10 = uVar14 * uVar12 + 2;
					if (bVar3) {
						iVar9 = iVar13 - uVar14;
						if (iVar9 < (int)(iVar13 + uVar14 * 2)) {
							do {
								if (!bVar3) goto LAB_80143a38;
								iVar6 = iVar11 - uVar12;
								if (iVar6 < (int)(iVar11 + uVar12 * 2)) {
									puVar5 = dungeon + iVar6 * 0x30;
									do {
										if ((uint)puVar5[iVar9] == (uint)miniset[iVar10]) {
											bVar3 = false;
										}
										iVar6 = iVar6 + 1;
										puVar5 = puVar5 + 0x30;
									} while (iVar6 < (int)(iVar11 + uVar12 * 2));
								}
								iVar9 = iVar9 + 1;
							} while (iVar9 < (int)(iVar13 + uVar14 * 2));
						}
						if (((bVar3) && (lVar4 = ENG_random__Fl(100), lVar4 < rndper)) &&
							 (iVar9 = 0, bVar1 != 0)) {
							do {
								iVar6 = 0;
								if (bVar2 != 0) {
									pbVar8 = miniset + iVar10;
									do {
										if (*pbVar8 != 0) {
											dungeon[(iVar11 + iVar6) * 0x30 + iVar13 + iVar9] = (ushort)*pbVar8;
										}
										pbVar8 = pbVar8 + 1;
										iVar6 = iVar6 + 1;
										iVar10 = iVar10 + 1;
									} while (iVar6 < (int)uVar12);
								}
								iVar9 = iVar9 + 1;
							} while (iVar9 < (int)uVar14);
						}
					}
LAB_80143a38:
					iVar11 = iVar11 + 1;
				} while (iVar11 < (int)(0x28 - uVar12));
			}
			iVar13 = iVar13 + 1;
		} while (iVar13 < (int)(0x28 - uVar14));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2Subs__Fv()
 // line 1417, offset 0x80143a90
	/* begin block 1 */
		// Start line: 1418
		// Start offset: 0x80143A90
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s2
	// 		int i; // $a3
	// 		int j; // $a2
	// 		int k; // $a0
	// 		int rv; // $v1
	/* end block 1 */
	// End offset: 0x80143C50
	// End Line: 1451

	/* begin block 2 */
		// Start line: 2855
	/* end block 2 */
	// End Line: 2856

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2Subs__Fv(void)

{
	uchar uVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	ushort *puVar9;
	int iVar10;
	
	iVar8 = 0;
	iVar10 = 2;
	do {
		iVar7 = 0;
		puVar9 = dungeon;
		do {
			if (((iVar7 < nSx1) || (nSx2 < iVar7)) && ((iVar8 < nSy1 || (nSy2 < iVar8)))) {
				lVar2 = ENG_random__Fl(4);
				if ((lVar2 == 0) && (uVar1 = BTYPESL2[(uint)*(byte *)(puVar9 + iVar8)], uVar1 != '\0')) {
					lVar2 = ENG_random__Fl(0x10);
					uVar5 = 0xffffffff;
					if (-1 < lVar2) {
						uVar6 = 0;
						do {
							uVar5 = uVar6;
							if (uVar6 == 0xa1) {
								uVar5 = 0;
							}
							if (uVar1 == BTYPESL2[uVar5]) {
								lVar2 = lVar2 + -1;
							}
							uVar6 = uVar5 + 1;
						} while (-1 < lVar2);
					}
					iVar4 = iVar8 + -2;
					if (iVar4 < iVar10) {
						do {
							iVar3 = iVar7 + -2;
							if (iVar3 < iVar7 + 2) {
								do {
									if ((uint)dungeon[iVar3 * 0x30 + iVar4] == uVar5) {
										iVar4 = iVar8 + 3;
										iVar3 = iVar7 + 2;
									}
									iVar3 = iVar3 + 1;
								} while (iVar3 < iVar7 + 2);
							}
							iVar4 = iVar4 + 1;
						} while (iVar4 < iVar10);
					}
					if (iVar4 < iVar8 + 3) {
						puVar9[iVar8] = (ushort)uVar5;
					}
				}
			}
			iVar7 = iVar7 + 1;
			puVar9 = puVar9 + 0x30;
		} while (iVar7 < 0x28);
		iVar8 = iVar8 + 1;
		iVar10 = iVar10 + 1;
	} while (iVar8 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2Shadows__Fv()
 // line 1458, offset 0x80143c80
	/* begin block 1 */
		// Start line: 1459
		// Start offset: 0x80143C80
		// Variables:
	// 		int x; // $t1
	// 		int y; // $t4
	// 		int i; // $a3
	// 		int patflag; // $a2
	// 		unsigned char sd[2][2]; // stack offset -8
	/* end block 1 */
	// End offset: 0x80143E38
	// End Line: 1484

	/* begin block 2 */
		// Start line: 2953
	/* end block 2 */
	// End Line: 2954

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2Shadows__Fv(void)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	uchar uVar4;
	bool bVar5;
	ushort *puVar6;
	ushort *puVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	ushort *puVar11;
	ushort *puVar12;
	int iVar13;
	
	iVar13 = 1;
	do {
		iVar10 = 1;
		puVar11 = dungeon;
		puVar12 = dungeon;
		do {
			puVar12 = puVar12 + 0x30;
			puVar7 = puVar12 + iVar13;
			uVar1 = BSTYPESL2[(uint)*puVar7];
			puVar6 = puVar11 + iVar13;
			uVar2 = BSTYPESL2[(uint)*puVar6];
			uVar3 = BSTYPESL2[(uint)puVar7[-1]];
			iVar9 = 0;
			uVar4 = BSTYPESL2[(uint)puVar6[-1]];
			iVar8 = 0;
			do {
				if ((&SPATSL2.strig)[iVar8] == uVar1) {
					bVar5 = (&SPATSL2.s1)[iVar8] == '\0' || (&SPATSL2.s1)[iVar8] == uVar4;
					if (((&SPATSL2.s2)[iVar8] != '\0') && ((&SPATSL2.s2)[iVar8] != uVar3)) {
						bVar5 = false;
					}
					if (((&SPATSL2.s3)[iVar8] != '\0') && ((&SPATSL2.s3)[iVar8] != uVar2)) {
						bVar5 = false;
					}
					if (bVar5) {
						if ((&SPATSL2.nv1)[iVar8] != 0) {
							puVar6[-1] = (ushort)(&SPATSL2.nv1)[iVar8];
						}
						if ((&SPATSL2.nv2)[iVar8] != 0) {
							puVar7[-1] = (ushort)(&SPATSL2.nv2)[iVar8];
						}
						if ((&SPATSL2.nv3)[iVar8] != 0) {
							*puVar6 = (ushort)(&SPATSL2.nv3)[iVar8];
						}
					}
				}
				iVar9 = iVar9 + 1;
				iVar8 = iVar8 + 7;
			} while (iVar9 < 2);
			iVar10 = iVar10 + 1;
			puVar11 = puVar11 + 0x30;
		} while (iVar10 < 0x28);
		iVar13 = iVar13 + 1;
	} while (iVar13 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDungeon__Fv()
 // line 1490, offset 0x80143e44
	/* begin block 1 */
		// Start line: 1491
		// Start offset: 0x80143E44
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a0
	/* end block 1 */
	// End offset: 0x80143E84
	// End Line: 1498

	/* begin block 2 */
		// Start line: 3025
	/* end block 2 */
	// End Line: 3026

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDungeon__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	do {
		iVar2 = 0;
		puVar1 = &predungeon;
		do {
			puVar1[iVar3] = ' ';
			iVar2 = iVar2 + 1;
			puVar1 = puVar1 + 0x28;
		} while (iVar2 < 0x28);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_LoadL2SP__Fv()
 // line 1509, offset 0x80143e8c
	/* begin block 1 */
		// Start line: 1510
		// Start offset: 0x80143E8C
	/* end block 1 */
	// End offset: 0x80143F1C
	// End Line: 1524

	/* begin block 2 */
		// Start line: 3060
	/* end block 2 */
	// End Line: 3061

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_LoadL2SP__Fv(void)

{
	uchar uVar1;
	char *Name;
	
	setloadflag = '\0';
	uVar1 = QuestStatus__Fi(8);
	if (uVar1 == '\0') {
		uVar1 = QuestStatus__Fi(9);
		if (uVar1 == '\0') {
			uVar1 = QuestStatus__Fi(0xe);
			if (uVar1 == '\0') {
				return;
			}
			Name = "Bonestr2.DUN";
		}
		else {
			Name = "Blood1.DUN";
		}
	}
	else {
		Name = "Blind2.DUN";
	}
	pSetPiece = GRL_LoadFileInMemSig__FPCcPUl(Name,(ulong *)0x0);
	setloadflag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_FreeL2SP__Fv()
 // line 1531, offset 0x80143f2c
	/* begin block 1 */
		// Start line: 1532
		// Start offset: 0x80143F2C

		/* begin block 1.1 */
			// Start line: 1532
			// Start offset: 0x80143F2C
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x80143F4C
		// End Line: 1533
	/* end block 1 */
	// End offset: 0x80143F4C
	// End Line: 1533

	/* begin block 2 */
		// Start line: 3105
	/* end block 2 */
	// End Line: 3106

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_FreeL2SP__Fv(void)

{
	uchar *p;
	
	p = pSetPiece;
	pSetPiece = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2SetRoom__Fii(int rx1 /*$a0*/, int ry1 /*$a1*/)
 // line 1540, offset 0x80143f5c
	/* begin block 1 */
		// Start line: 1541
		// Start offset: 0x80143F5C
		// Variables:
	// 		int rw; // $t4
	// 		int rh; // $t5
	// 		int i; // $a3
	// 		int j; // $t2
	// 		unsigned char *sp; // $t0
	/* end block 1 */
	// End offset: 0x80144050
	// End Line: 1569

	/* begin block 2 */
		// Start line: 3123
	/* end block 2 */
	// End Line: 3124

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2SetRoom__Fii(int rx1,int ry1)

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
						dungeon[iVar3 * 0x30 + iVar2] = 3;
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
// void /*$ra*/ DefineRoom__Fiiiii(int nX1 /*$t3*/, int nY1 /*$t0*/, int nX2 /*$t1*/, int nY2 /*$a3*/, int ForceHW /*stack 16*/)
 // line 1576, offset 0x8014405c
	/* begin block 1 */
		// Start line: 1577
		// Start offset: 0x8014405C
		// Variables:
	// 		int i; // $a1
	// 		int j; // $v1
	// 		unsigned char ft; // $t5
	/* end block 1 */
	// End offset: 0x80144258
	// End Line: 1620

	/* begin block 2 */
		// Start line: 3223
	/* end block 2 */
	// End Line: 3224

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DefineRoom__Fiiiii(int nX1,int nY1,int nX2,int nY2,int ForceHW)

{
	int iVar1;
	uchar *puVar2;
	uchar *puVar3;
	uchar *puVar4;
	int iVar5;
	
	(&predungeon + nX1 * 0x28)[nY1] = 'C';
	(&predungeon + nX1 * 0x28)[nY2] = 'E';
	(&predungeon + nX2 * 0x28)[nY1] = 'B';
	(&predungeon + nX2 * 0x28)[nY2] = 'A';
	nRoomCnt = nRoomCnt + 1;
	RoomList[nRoomCnt].nRoomx1 = nX1;
	RoomList[nRoomCnt].nRoomx2 = nX2;
	RoomList[nRoomCnt].nRoomy1 = nY1;
	RoomList[nRoomCnt].nRoomy2 = nY2;
	if ((ForceHW == 1) && (nX1 < nX2)) {
		iVar5 = nX1;
		do {
			while (iVar1 = nY1 * 0x28 + iVar5, iVar5 < nY2) {
				iVar5 = iVar5 + 1;
				mydflags[iVar1] = mydflags[iVar1] | 0x80;
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < nX2);
	}
	iVar5 = nX1 + 1;
	if (iVar5 <= nX2 + -1) {
		puVar4 = &predungeon + iVar5 * 0x28;
		do {
			puVar2 = puVar4 + nY1;
			puVar3 = puVar4 + nY2;
			puVar4 = puVar4 + 0x28;
			iVar5 = iVar5 + 1;
			*puVar2 = '#';
			*puVar3 = '#';
		} while (iVar5 <= nX2 + -1);
	}
	nY1 = nY1 + 1;
	if (nY1 <= nY2 + -1) {
		puVar2 = &predungeon + nY1 + nX2 * 0x28;
		puVar4 = &predungeon + nY1 + nX1 * 0x28;
		do {
			iVar5 = nX1 + 1;
			*puVar4 = '#';
			*puVar2 = '#';
			if (iVar5 < nX2) {
				puVar3 = &predungeon + iVar5 * 0x28;
				do {
					puVar3[nY1] = '.';
					iVar5 = iVar5 + 1;
					puVar3 = puVar3 + 0x28;
				} while (iVar5 < nX2);
			}
			puVar2 = puVar2 + 1;
			nY1 = nY1 + 1;
			puVar4 = puVar4 + 1;
		} while (nY1 <= nY2 + -1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateDoorType__Fii(int nX /*$a0*/, int nY /*$a1*/)
 // line 1627, offset 0x80144260
	/* begin block 1 */
		// Start line: 1628
		// Start offset: 0x80144260
		// Variables:
	// 		unsigned char fDoneflag; // $a2
	/* end block 1 */
	// End offset: 0x8014433C
	// End Line: 1650

	/* begin block 2 */
		// Start line: 3352
	/* end block 2 */
	// End Line: 3353

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateDoorType__Fii(int nX,int nY)

{
	byte bVar1;
	bool bVar2;
	byte *pbVar3;
	
	pbVar3 = &predungeon + nY + nX * 0x28;
	bVar2 = pbVar3[1] == 0x44 ||
					(pbVar3[-1] == 0x44 ||
					((&DAT_80142df0)[nY + nX * 0x28] == 'D' ||
					*(char *)((int)&ROOMNODE_ARRAY_80142da0[nX * 2].nRoomx1 + nY) == 'D'));
	bVar1 = *pbVar3;
	if ((((uint)bVar1 - 0x42 < 2) || (bVar1 == 0x41)) || (bVar1 == 0x45)) {
		bVar2 = true;
	}
	if (!bVar2) {
		(&predungeon)[nY + nX * 0x28] = 'D';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceHallExt__Fii(int nX /*$a0*/, int nY /*$a1*/)
 // line 1657, offset 0x80144344
	/* begin block 1 */
		// Start line: 1658
		// Start offset: 0x80144344
	/* end block 1 */
	// End offset: 0x80144374
	// End Line: 1660

	/* begin block 2 */
		// Start line: 3410
	/* end block 2 */
	// End Line: 3411

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceHallExt__Fii(int nX,int nY)

{
	if ((&predungeon)[nY + nX * 0x28] == ' ') {
		(&predungeon)[nY + nX * 0x28] = ',';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHall__Fiiiii(int nX1 /*$s0*/, int nY1 /*$s1*/, int nX2 /*$s2*/, int nY2 /*$s3*/, int nHd /*stack 16*/)
 // line 1668, offset 0x8014437c
	/* begin block 1 */
		// Start line: 1669
		// Start offset: 0x8014437C
		// Variables:
	// 		struct NODE *p1; // $v1
	// 		struct NODE *p2; // $a0
	/* end block 1 */
	// End offset: 0x80144430
	// End Line: 1694

	/* begin block 2 */
		// Start line: 3435
	/* end block 2 */
	// End Line: 3436

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddHall__Fiiiii(int nX1,int nY1,int nX2,int nY2,int nHd)

{
	NODE *pNVar1;
	NODE *pNVar2;
	NODE *pNVar3;
	
	if (pHallList == (NODE *)0x0) {
		pNVar3 = (NODE *)DiabloAllocPtr__FUl(0x18);
		pHallList = pNVar3;
		pNVar3->nHallx1 = nX1;
		pNVar3->nHally1 = nY1;
		pNVar3->nHallx2 = nX2;
		pNVar3->nHally2 = nY2;
		pNVar3->nHalldir = nHd;
		pNVar3->pNext = (NODE *)0x0;
	}
	else {
		pNVar1 = (NODE *)DiabloAllocPtr__FUl(0x18);
		pNVar3 = pHallList;
		pNVar1->nHallx1 = nX1;
		pNVar1->nHally1 = nY1;
		pNVar1->nHallx2 = nX2;
		pNVar1->nHally2 = nY2;
		pNVar1->nHalldir = nHd;
		pNVar1->pNext = (NODE *)0x0;
		pNVar2 = pNVar3->pNext;
		while (pNVar2 != (NODE *)0x0) {
			pNVar3 = pNVar3->pNext;
			pNVar2 = pNVar3->pNext;
		}
		pNVar3->pNext = pNVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateRoom__Fiiiiiiiii(int nX1 /*stack -104*/, int nY1 /*stack -96*/, int nX2 /*stack -88*/, int nY2 /*stack -80*/, int nRDest /*stack 16*/, int nHDir /*stack 20*/, int ForceHW /*stack 24*/, int nH /*stack 28*/, int nW /*stack 32*/)
 // line 1702, offset 0x80144454
	/* begin block 1 */
		// Start line: 1703
		// Start offset: 0x80144454
		// Variables:
	// 		int nAw; // $a0
	// 		int nAh; // $s0
	// 		int nRw; // stack offset -72
	// 		int nRh; // stack offset -64
	// 		int nRx1; // $s5
	// 		int nRy1; // $s4
	// 		int nRx2; // $s6
	// 		int nRy2; // $s7
	// 		int nHx1; // stack offset -56
	// 		int nHy1; // stack offset -48
	// 		int nHx2; // $s2
	// 		int nHy2; // $s1
	// 		int nRid; // $fp
	/* end block 1 */
	// End offset: 0x80144A90
	// End Line: 1817

	/* begin block 2 */
		// Start line: 3517
	/* end block 2 */
	// End Line: 3518

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateRoom__Fiiiiiiiii
							 (int nX1,int nY1,int nX2,int nY2,int nRDest,int nHDir,int ForceHW,int nH,int nW)

{
	int nRDest_00;
	long v;
	int nY2_00;
	int nX2_00;
	int nY1_00;
	int nX1_00;
	int nX2_01;
	int nY2_01;
	int local_48;
	int local_40;
	int local_38;
	int local_30;
	
	nX2_00 = 0;
	nY2_00 = 0;
	local_38 = 0;
	local_30 = 0;
	if (0x4f < nRoomCnt) {
		return;
	}
	local_48 = nX2 - nX1;
	local_40 = nY2 - nY1;
	if (local_48 < Area_Min) {
		return;
	}
	if (local_40 < Area_Min) {
		return;
	}
	if (Room_Max < local_48) {
		v = Room_Max - Room_Min;
LAB_80144510:
		v = ENG_random__Fl(v);
		local_48 = v + Room_Min;
	}
	else {
		if (Room_Min < local_48) {
			v = local_48 - Room_Min;
			goto LAB_80144510;
		}
	}
	if (Room_Max < local_40) {
		v = Room_Max - Room_Min;
	}
	else {
		v = local_40 - Room_Min;
		if (local_40 <= Room_Min) goto LAB_80144584;
	}
	v = ENG_random__Fl(v);
	local_40 = v + Room_Min;
LAB_80144584:
	if (ForceHW == 1) {
		local_48 = nW;
		local_40 = nH;
	}
	v = ENG_random__Fl(nX2 - nX1);
	nX1_00 = v + nX1;
	v = ENG_random__Fl(nY2 - nY1);
	nY1_00 = v + nY1;
	nX2_01 = nX1_00 + local_48;
	if (nX2 < nX1_00 + local_48) {
		nX1_00 = nX2 - local_48;
		nX2_01 = nX2;
	}
	nY2_01 = nY1_00 + local_40;
	if (nY2 < nY1_00 + local_40) {
		nY1_00 = nY2 - local_40;
		nY2_01 = nY2;
	}
	if (0x25 < nX1_00) {
		nX1_00 = 0x26;
	}
	if (0x25 < nY1_00) {
		nY1_00 = 0x26;
	}
	if (nX1_00 < 2) {
		nX1_00 = 1;
	}
	if (nY1_00 < 2) {
		nY1_00 = 1;
	}
	if (0x25 < nX2_01) {
		nX2_01 = 0x26;
	}
	if (0x25 < nY2_01) {
		nY2_01 = 0x26;
	}
	if (nX2_01 < 2) {
		nX2_01 = 1;
	}
	if (nY2_01 < 2) {
		nY2_01 = 1;
	}
	DefineRoom__Fiiiii(nX1_00,nY1_00,nX2_01,nY2_01,ForceHW);
	nRDest_00 = nRoomCnt;
	if (ForceHW == 1) {
		nSy1 = nY1_00 + 2;
		nSx1 = nX1_00 + 2;
		nSx2 = nX2_01;
		nSy2 = nY2_01;
	}
	RoomList[nRoomCnt].nRoomDest = nRDest;
	if (nRDest != 0) {
		if (nHDir == 1) {
			v = ENG_random__Fl((nX2_01 - nX1_00) + -2);
			local_38 = v + nX1_00 + 1;
			v = ENG_random__Fl((RoomList[nRDest].nRoomx2 - RoomList[nRDest].nRoomx1) + -2);
			nY2_00 = RoomList[nRDest].nRoomy2;
			nX2_00 = v + RoomList[nRDest].nRoomx1 + 1;
			local_30 = nY1_00;
		}
		if (nHDir == 3) {
			v = ENG_random__Fl((nX2_01 - nX1_00) + -2);
			local_38 = v + nX1_00 + 1;
			v = ENG_random__Fl((RoomList[nRDest].nRoomx2 - RoomList[nRDest].nRoomx1) + -2);
			nY2_00 = RoomList[nRDest].nRoomy1;
			nX2_00 = v + RoomList[nRDest].nRoomx1 + 1;
			local_30 = nY2_01;
		}
		if (nHDir == 2) {
			v = ENG_random__Fl((nY2_01 - nY1_00) + -2);
			local_30 = v + nY1_00 + 1;
			nX2_00 = RoomList[nRDest].nRoomx1;
			v = ENG_random__Fl((RoomList[nRDest].nRoomy2 - RoomList[nRDest].nRoomy1) + -2);
			nY2_00 = v + RoomList[nRDest].nRoomy1 + 1;
			local_38 = nX2_01;
		}
		if (nHDir == 4) {
			v = ENG_random__Fl((nY2_01 - nY1_00) + -2);
			local_30 = v + nY1_00 + 1;
			nX2_00 = RoomList[nRDest].nRoomx2;
			v = ENG_random__Fl((RoomList[nRDest].nRoomy2 - RoomList[nRDest].nRoomy1) + -2);
			nY2_00 = v + RoomList[nRDest].nRoomy1 + 1;
			local_38 = nX1_00;
		}
		AddHall__Fiiiii(local_38,local_30,nX2_00,nY2_00,nHDir);
	}
	if (local_48 < local_40) {
		CreateRoom__Fiiiiiiiii(nX1 + 2,nY1 + 2,nX1_00 + -2,nY2_01 + -2,nRDest_00,2,0,0,0);
		CreateRoom__Fiiiiiiiii(nX2_01 + 2,nY1_00 + 2,nX2 + -2,nY2 + -2,nRDest_00,4,0,0,0);
		CreateRoom__Fiiiiiiiii(nX1 + 2,nY2_01 + 2,nX2_01 + -2,nY2 + -2,nRDest_00,1,0,0,0);
		nX2_00 = 3;
		nX2_01 = nX1_00;
		nY2_01 = nY1_00;
	}
	else {
		CreateRoom__Fiiiiiiiii(nX1 + 2,nY1 + 2,nX2_01 + -2,nY1_00 + -2,nRDest_00,3,0,0,0);
		CreateRoom__Fiiiiiiiii(nX1_00 + 2,nY2_01 + 2,nX2 + -2,nY2 + -2,nRDest_00,1,0,0,0);
		CreateRoom__Fiiiiiiiii(nX1 + 2,nY1_00 + 2,nX1_00 + -2,nY2 + -2,nRDest_00,2,0,0,0);
		nX2_00 = 4;
	}
	CreateRoom__Fiiiiiiiii(nX2_01 + 2,nY1 + 2,nX2 + -2,nY2_01 + -2,nRDest_00,nX2_00,0,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetHall__FPiN40(int *nX1 /*$a0*/, int *nY1 /*$a1*/, int *nX2 /*$a2*/, int *nY2 /*$a3*/, int *nHd /*stack 16*/)
 // line 1826, offset 0x80144ac4
	/* begin block 1 */
		// Start line: 1827
		// Start offset: 0x80144AC4
		// Variables:
	// 		struct NODE *p1; // $s0

		/* begin block 1.1 */
			// Start line: 1827
			// Start offset: 0x80144AC4
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x80144AC4
		// End Line: 1827
	/* end block 1 */
	// End offset: 0x80144B48
	// End Line: 1837

	/* begin block 2 */
		// Start line: 3796
	/* end block 2 */
	// End Line: 3797

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetHall__FPiN40(int *nX1,int *nY1,int *nX2,int *nY2,int *nHd)

{
	NODE *p;
	NODE *pNVar1;
	
	pNVar1 = pHallList->pNext;
	*nX1 = pHallList->nHallx1;
	*nY1 = pHallList->nHally1;
	*nX2 = pHallList->nHallx2;
	*nY2 = pHallList->nHally2;
	*nHd = pHallList->nHalldir;
	p = pHallList;
	pHallList = (NODE *)0x0;
	mem_free_dbg__FPv(p);
	pHallList = pNVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ConnectHall__Fiiiii(int nX1 /*$s2*/, int nY1 /*$s3*/, int nX2 /*$s6*/, int nY2 /*$s7*/, int nHd /*stack 16*/)
 // line 1844, offset 0x80144b5c
	/* begin block 1 */
		// Start line: 1845
		// Start offset: 0x80144B5C
		// Variables:
	// 		unsigned char fDoneflag; // stack offset -88
	// 		unsigned char fInroom; // stack offset -80
	// 		int nCurrd; // $s1
	// 		int nDx; // $s5
	// 		int nDy; // $s4
	// 		int nRp; // $s0
	// 		int nOrigX1; // stack offset -72
	// 		int nOrigY1; // stack offset -64
	// 		int fMinusFlag; // stack offset -56
	// 		int fPlusFlag; // stack offset -48
	/* end block 1 */
	// End offset: 0x80145188
	// End Line: 1987

	/* begin block 2 */
		// Start line: 3836
	/* end block 2 */
	// End Line: 3837

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ConnectHall__Fiiiii(int nX1,int nY1,int nX2,int nY2,int nHd)

{
	bool bVar1;
	bool bVar2;
	bool bVar3;
	long lVar4;
	long lVar5;
	int nX;
	int nY;
	long lVar6;
	int iVar7;
	int nX_00;
	int nY_00;
	
	bVar3 = false;
	lVar4 = ENG_random__Fl(100);
	lVar5 = ENG_random__Fl(100);
	CreateDoorType__Fii(nX1,nY1);
	CreateDoorType__Fii(nX2,nY2);
	abs(nX2 - nX1);
	abs(nY2 - nY1);
	bVar2 = false;
	nX2 = nX2 - (&Dir_Xadd)[nHd];
	nY2 = nY2 - (&Dir_Yadd)[nHd];
	(&predungeon)[nY2 + nX2 * 0x28] = ',';
	bVar1 = nX1 < 0x26;
	nX_00 = nX1;
	nY_00 = nY1;
	do {
		if ((!bVar1) && (nHd == 2)) {
			nHd = 4;
		}
		if ((0x25 < nY_00) && (nHd == 3)) {
			nHd = 1;
		}
		if ((nX_00 < 2) && (nHd == 4)) {
			nHd = 2;
		}
		if ((nY_00 < 2) && (nHd == 1)) {
			nHd = 3;
		}
		if (((&predungeon)[nY_00 + nX_00 * 0x28] == 'C') && ((nHd == 1 || (nHd == 4)))) {
			nHd = 2;
		}
		if (((&predungeon)[nY_00 + nX_00 * 0x28] == 'B') && (nHd - 1U < 2)) {
			nHd = 3;
		}
		if (((&predungeon)[nY_00 + nX_00 * 0x28] == 'E') && (nHd - 3U < 2)) {
			nHd = 1;
		}
		nX = nHd << 2;
		if (((&predungeon)[nY_00 + nX_00 * 0x28] == 'A') && (nX = nHd << 2, nHd - 2U < 2)) {
			nHd = 4;
			nX = 0x10;
		}
		nX_00 = nX_00 + *(int *)((int)&Dir_Xadd + nX);
		nY_00 = nY_00 + *(int *)((int)&Dir_Yadd + nX);
		if ((&predungeon)[nY_00 + nX_00 * 0x28] == ' ') {
			if (bVar2) {
				CreateDoorType__Fii(nX_00 - *(int *)((int)&Dir_Xadd + nX),
														nY_00 - *(int *)((int)&Dir_Yadd + nX));
			}
			else {
				if (lVar4 < 0x4b) {
					if ((nHd == 1) || (nHd == 3)) {
						nX = nX_00 + -1;
						nY = nY_00;
					}
					else {
						nY = nY_00 + -1;
						nX = nX_00;
					}
					PlaceHallExt__Fii(nX,nY);
				}
				if (lVar5 < 0x4b) {
					if ((nHd == 1) || (nHd == 3)) {
						nX = nX_00 + 1;
						nY = nY_00;
					}
					else {
						nY = nY_00 + 1;
						nX = nX_00;
					}
					PlaceHallExt__Fii(nX,nY);
				}
			}
			(&predungeon)[nY_00 + nX_00 * 0x28] = ',';
			bVar2 = false;
		}
		else {
			if ((!bVar2) && ((&predungeon)[nY_00 + nX_00 * 0x28] == '#')) {
				CreateDoorType__Fii(nX_00,nY_00);
			}
			if ((&predungeon)[nY_00 + nX_00 * 0x28] != ',') {
				bVar2 = true;
			}
		}
		nX = abs(nX2 - nX_00);
		nY = abs(nY2 - nY_00);
		iVar7 = nX << 1;
		if (nY < nX) {
			if (0x1e < iVar7) {
				iVar7 = 0x1e;
			}
			lVar6 = ENG_random__Fl(100);
			if (((lVar6 < iVar7) && (nHd = 4, nX_00 < nX2)) && (nX_00 < 0x28)) {
				nHd = 2;
			}
		}
		else {
			iVar7 = nY * 5;
			if (0x50 < iVar7) {
				iVar7 = 0x50;
			}
			lVar6 = ENG_random__Fl(100);
			if (((lVar6 < iVar7) && (nHd = 1, nY_00 < nY2)) && (nY_00 < 0x28)) {
				nHd = 3;
			}
		}
		if (((nY < 10) && (nX_00 == nX2)) &&
			 (((nHd == 2 || (nHd == 4)) && ((nHd = 1, nY_00 < nY2 && (nY_00 < 0x28)))))) {
			nHd = 3;
		}
		if ((((nX < 10) && (nY_00 == nY2)) && ((nHd == 1 || (nHd == 3)))) &&
			 ((nHd = 4, nX_00 < nX2 && (nX_00 < 0x28)))) {
			nHd = 2;
		}
		if ((((nY == 1) && (1 < nX)) && ((nHd == 1 || (nHd == 3)))) &&
			 ((nHd = 4, nX_00 < nX2 && (nX_00 < 0x28)))) {
			nHd = 2;
		}
		if ((((nX == 1) && (1 < nY)) && ((nHd == 2 || (nHd == 4)))) &&
			 ((nHd = 1, nY_00 < nY2 && (nX_00 < 0x28)))) {
			nHd = 3;
		}
		if ((((nX == 0) && ((&predungeon)[nY_00 + nX_00 * 0x28] != ' ')) && ((nHd == 2 || (nHd == 4))))
			 && ((nHd = 1, nX1 < nX2 && (nX_00 < 0x28)))) {
			nHd = 3;
		}
		if ((((nY == 0) && ((&predungeon)[nY_00 + nX_00 * 0x28] != ' ')) && ((nHd == 1 || (nHd == 3))))
			 && ((nHd = 4, nY1 < nY2 && (nY_00 < 0x28)))) {
			nHd = 2;
		}
		if ((nX_00 == nX2) && (nY_00 == nY2)) {
			bVar3 = true;
		}
		bVar1 = nX_00 < 0x26;
	} while (!bVar3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoPatternCheck__Fii(int i /*$t3*/, int j /*$a1*/)
 // line 1998, offset 0x801451bc
	/* begin block 1 */
		// Start line: 1999
		// Start offset: 0x801451BC
		// Variables:
	// 		int k; // $t9
	// 		int l; // $t0
	// 		int x; // $a0
	// 		int y; // $a3
	// 		int nOk; // $a2
	/* end block 1 */
	// End offset: 0x8014548C
	// End Line: 2068

	/* begin block 2 */
		// Start line: 4162
	/* end block 2 */
	// End Line: 4163

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoPatternCheck__Fii(int i,int j)

{
	uchar uVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	int iVar5;
	int *piVar6;
	int iVar7;
	int *piVar8;
	int iVar9;
	
	iVar9 = 0;
	if (INT_ARRAY_801417bc[0] != 0xff) {
		piVar8 = Patterns;
		iVar7 = 0;
		do {
			uVar2 = i - 1;
			uVar4 = j - 1;
			iVar3 = 0xfe;
			iVar5 = 0;
			piVar6 = piVar8;
			do {
				if (iVar3 != 0xfe) goto LAB_8014546c;
				iVar3 = 0xff;
				if ((iVar5 == 3) || (iVar5 == 6)) {
					uVar4 = uVar4 + 1;
					uVar2 = i - 1;
				}
				if ((0x27 < uVar2) || (0x27 < uVar4)) goto switchD_80145268_caseD_0;
				switch(*piVar6) {
				case 0:
					goto switchD_80145268_caseD_0;
				case 1:
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == '#') {
						iVar3 = 0xfe;
					}
					break;
				case 2:
					uVar1 = (&predungeon)[uVar4 + uVar2 * 0x28];
LAB_801453fc:
					if (uVar1 == '.') goto switchD_80145268_caseD_0;
					break;
				case 3:
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == 'D') {
						iVar3 = 0xfe;
					}
					break;
				case 4:
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == ' ') {
						iVar3 = 0xfe;
					}
					break;
				case 5:
					uVar1 = (&predungeon)[uVar4 + uVar2 * 0x28];
					if (uVar1 != 'D') goto LAB_801453fc;
					goto switchD_80145268_caseD_0;
				case 6:
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == 'D') goto switchD_80145268_caseD_0;
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == '#') {
						iVar3 = 0xfe;
					}
					break;
				case 7:
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == ' ') goto switchD_80145268_caseD_0;
					if ((&predungeon)[uVar4 + uVar2 * 0x28] == '.') {
						iVar3 = 0xfe;
					}
					break;
				case 8:
					uVar1 = (&predungeon)[uVar4 + uVar2 * 0x28];
					if ((uVar1 != 'D') && (uVar1 != '#')) goto LAB_801453fc;
switchD_80145268_caseD_0:
					iVar3 = 0xfe;
				}
				uVar2 = uVar2 + 1;
				iVar5 = iVar5 + 1;
				piVar6 = piVar6 + 1;
			} while (iVar5 < 9);
			if (iVar3 == 0xfe) {
				if ((i == 9) && (j == 0x13)) {
					myk = iVar9;
				}
				dungeon[i * 0x30 + j] = (ushort)*(byte *)((int)INT_ARRAY_801417d0 + iVar7);
			}
LAB_8014546c:
			piVar8 = piVar8 + 10;
			piVar6 = (int *)((int)INT_ARRAY_801417e4 + iVar7);
			iVar9 = iVar9 + 1;
			iVar7 = iVar7 + 0x28;
		} while (*piVar6 != 0xff);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L2TileFix__Fv()
 // line 2075, offset 0x80145494
	/* begin block 1 */
		// Start line: 2076
		// Start offset: 0x80145494
		// Variables:
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x801455B0
	// End Line: 2088

	/* begin block 2 */
		// Start line: 4319
	/* end block 2 */
	// End Line: 4320

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L2TileFix__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	short *psVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	do {
		iVar5 = iVar7 * 2;
		iVar6 = 0;
		puVar4 = dungeon;
		do {
			puVar2 = puVar4 + iVar7;
			uVar1 = *puVar2;
			if (uVar1 == 1) {
				if (puVar2[1] == 3) {
					puVar2[1] = 1;
				}
				uVar1 = puVar4[iVar7];
			}
			puVar2 = puVar4 + iVar7;
			if (uVar1 == 3) {
				if (puVar2[1] == 1) {
					puVar2[1] = 3;
				}
				if ((*puVar2 == 3) && (psVar3 = (short *)(iVar5 + iVar6 + -0x7ff1bedc), *psVar3 == 7)) {
					*psVar3 = 3;
				}
			}
			if ((puVar4[iVar7] == 2) && (psVar3 = (short *)(iVar5 + iVar6 + -0x7ff1bedc), *psVar3 == 3)) {
				*psVar3 = 2;
			}
			if ((puVar4[iVar7] == 0xb) &&
				 (psVar3 = (short *)(iVar5 + iVar6 + -0x7ff1bedc), *psVar3 == 0xe)) {
				*psVar3 = 0x10;
			}
			puVar4 = puVar4 + 0x30;
			iVar6 = iVar6 + 0x60;
		} while ((int)puVar4 < -0x7ff1b03c);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DL2_Cont__FUcUcUcUc(unsigned char x1f /*$a0*/, unsigned char y1f /*$a1*/, unsigned char x2f /*$a2*/, unsigned char y2f /*$a3*/)
 // line 2099, offset 0x801455b8
	/* begin block 1 */
		// Start line: 2100
		// Start offset: 0x801455B8
	/* end block 1 */
	// End offset: 0x80145630
	// End Line: 2104

	/* begin block 2 */
		// Start line: 4365
	/* end block 2 */
	// End Line: 4366

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DL2_Cont__FUcUcUcUc(uchar x1f,uchar y1f,uchar x2f,uchar y2f)

{
	uchar uVar1;
	
	if (((x1f == '\0') ||
			((((x2f == '\0' || (y1f == '\0')) || (uVar1 = '\0', y2f == '\0')) &&
			 (((x1f == '\0' || (x2f == '\0')) ||
				((uVar1 = '\x01', y1f == '\0' && (uVar1 = '\x01', y2f == '\0')))))))) &&
		 (((y1f == '\0' || (y2f == '\0')) ||
			((uVar1 = '\x01', x1f == '\0' && (uVar1 = '\x01', x2f == '\0')))))) {
		uVar1 = '\0';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DL2_NumNoChar__Fv()
 // line 2111, offset 0x80145638
	/* begin block 1 */
		// Start line: 2112
		// Start offset: 0x80145638
		// Variables:
	// 		int t; // $a2
	// 		int ii; // $a0
	// 		int jj; // $a1
	/* end block 1 */
	// End offset: 0x8014568C
	// End Line: 2118

	/* begin block 2 */
		// Start line: 4389
	/* end block 2 */
	// End Line: 4390

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DL2_NumNoChar__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar3 = 0;
	do {
		iVar2 = 0;
		puVar1 = &predungeon;
		do {
			if (puVar1[iVar3] == ' ') {
				iVar4 = iVar4 + 1;
			}
			iVar2 = iVar2 + 1;
			puVar1 = puVar1 + 0x28;
		} while (iVar2 < 0x28);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x28);
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DL2_DrawRoom__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 2125, offset 0x80145694
	/* begin block 1 */
		// Start line: 2126
		// Start offset: 0x80145694
		// Variables:
	// 		int ii; // $t0
	// 		int jj; // $t1
	/* end block 1 */
	// End offset: 0x80145790
	// End Line: 2139

	/* begin block 2 */
		// Start line: 4419
	/* end block 2 */
	// End Line: 4420

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DL2_DrawRoom__Fiiii(int x1,int y1,int x2,int y2)

{
	uchar *puVar1;
	uchar *puVar2;
	int iVar3;
	uchar *puVar4;
	int iVar5;
	
	iVar5 = y1;
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				puVar1 = &predungeon + x1 * 0x28;
				iVar3 = x1;
				do {
					puVar1[iVar5] = '.';
					iVar3 = iVar3 + 1;
					puVar1 = puVar1 + 0x28;
				} while (iVar3 <= x2);
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 <= y2);
		if (y1 <= y2) {
			puVar4 = &predungeon + y1 + x2 * 0x28;
			puVar1 = &predungeon + y1 + x1 * 0x28;
			iVar5 = y1;
			do {
				*puVar1 = '#';
				*puVar4 = '#';
				puVar4 = puVar4 + 1;
				iVar5 = iVar5 + 1;
				puVar1 = puVar1 + 1;
			} while (iVar5 <= y2);
		}
	}
	if (x1 <= x2) {
		puVar1 = &predungeon + x1 * 0x28;
		do {
			puVar4 = puVar1 + y1;
			puVar2 = puVar1 + y2;
			puVar1 = puVar1 + 0x28;
			x1 = x1 + 1;
			*puVar4 = '#';
			*puVar2 = '#';
		} while (x1 <= x2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DL2_KnockWalls__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 2146, offset 0x80145798
	/* begin block 1 */
		// Start line: 2147
		// Start offset: 0x80145798
		// Variables:
	// 		int ii; // $t0
	// 		int jj; // $t0
	/* end block 1 */
	// End offset: 0x80145960
	// End Line: 2161

	/* begin block 2 */
		// Start line: 4463
	/* end block 2 */
	// End Line: 4464

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DL2_KnockWalls__Fiiii(int x1,int y1,int x2,int y2)

{
	char *pcVar1;
	char *pcVar2;
	uchar *puVar3;
	uchar *puVar4;
	char *pcVar5;
	
	if (x1 + 1 < x2) {
		puVar4 = &predungeon + (x1 + 1) * 0x28;
		do {
			puVar3 = puVar4 + y1;
			if ((puVar3[-1] == '.') && (puVar3[1] == '.')) {
				*puVar3 = '.';
			}
			puVar3 = puVar4 + y2;
			if ((puVar3[-1] == '.') && (puVar3[1] == '.')) {
				*puVar3 = '.';
			}
			if ((puVar4 + y1)[-1] == 'D') {
				(puVar4 + y1)[-1] = '.';
			}
			if ((puVar4 + y2)[1] == 'D') {
				(puVar4 + y2)[1] = '.';
			}
			puVar4 = puVar4 + 0x28;
		} while ((int)puVar4 < (int)(&predungeon + x2 * 0x28));
	}
	y1 = y1 + 1;
	if (y1 < y2) {
		pcVar5 = &DAT_80142df0 + y1 + x2 * 0x28;
		pcVar2 = (char *)((int)&ROOMNODE_ARRAY_80142da0[x1 * 2].nRoomx1 + y1);
		puVar3 = &predungeon + y1 + x2 * 0x28;
		puVar4 = &predungeon + y1 + x1 * 0x28;
		pcVar1 = &DAT_80142df0 + y1 + x1 * 0x28;
		do {
			if ((*pcVar2 == '.') && (*pcVar1 == '.')) {
				*puVar4 = '.';
			}
			if ((*(char *)((int)&ROOMNODE_ARRAY_80142da0[x2 * 2].nRoomx1 + y1) == '.') && (*pcVar5 == '.')
				 ) {
				*puVar3 = '.';
			}
			if (*pcVar2 == 'D') {
				*pcVar2 = '.';
			}
			if (*pcVar5 == 'D') {
				*pcVar5 = '.';
			}
			pcVar5 = pcVar5 + 1;
			pcVar2 = pcVar2 + 1;
			puVar3 = puVar3 + 1;
			puVar4 = puVar4 + 1;
			y1 = y1 + 1;
			pcVar1 = pcVar1 + 1;
		} while (y1 < y2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DL2_FillVoids__Fv()
 // line 2206, offset 0x80145968
	/* begin block 1 */
		// Start line: 2207
		// Start offset: 0x80145968
		// Variables:
	// 		int ii; // $a0
	// 		int jj; // $v1
	// 		int xx; // $s1
	// 		int yy; // $s3
	// 		int x1; // $s0
	// 		int x2; // $s2
	// 		int y1; // $s1
	// 		int y2; // $s3
	// 		unsigned char xf1; // $s7
	// 		unsigned char xf2; // $t1
	// 		unsigned char yf1; // $fp
	// 		unsigned char yf2; // $t0
	// 		int to; // stack offset -64
	/* end block 1 */
	// End offset: 0x801462B0
	// End Line: 2403

	/* begin block 2 */
		// Start line: 4580
	/* end block 2 */
	// End Line: 4581

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DL2_FillVoids__Fv(void)

{
	bool y1f;
	uchar uVar1;
	int y2;
	long lVar2;
	long lVar3;
	char *pcVar4;
	int iVar5;
	uchar *puVar6;
	uchar *puVar7;
	char *pcVar8;
	uchar y2f;
	uchar x2f;
	int x1;
	int x2;
	int y1;
	uchar x1f;
	int local_40;
	
	local_40 = 0;
	do {
		do {
			y2 = DL2_NumNoChar__Fv();
			if ((y2 < 0x2bd) || (99 < local_40)) {
				y2 = DL2_NumNoChar__Fv();
				return (uchar)(y2 < 0x2bd);
			}
			lVar2 = ENG_random__Fl(0x26);
			x2 = lVar2 + 1;
			lVar3 = ENG_random__Fl(0x26);
			y2 = lVar3 + 1;
			y2f = '\0';
		} while ((&predungeon)[y2 + x2 * 0x28] != '#');
		y1f = false;
		x2f = '\0';
		pcVar8 = (char *)((int)&ROOMNODE_ARRAY_80142da0[x2 * 2].nRoomx1 + y2);
		x1f = '\0';
		if ((*pcVar8 == ' ') && (pcVar4 = &DAT_80142df0 + y2 + x2 * 0x28, *pcVar4 == '.')) {
			if (((pcVar4[-1] == '.') && (pcVar4[1] == '.')) && ((pcVar8[-1] == ' ' && (pcVar8[1] == ' ')))
				 ) {
				y2f = '\x01';
				y1f = true;
				x1f = '\x01';
			}
		}
		else {
			pcVar8 = &DAT_80142df0 + y2 + x2 * 0x28;
			if ((*pcVar8 == ' ') &&
				 (pcVar4 = (char *)((int)&ROOMNODE_ARRAY_80142da0[x2 * 2].nRoomx1 + y2), *pcVar4 == '.')) {
				if ((((pcVar4[-1] == '.') && (pcVar4[1] == '.')) && (pcVar8[-1] == ' ')) &&
					 (pcVar8[1] == ' ')) {
					y2f = '\x01';
					y1f = true;
					x2f = '\x01';
				}
			}
			else {
				if (((&predungeon + y2 + x2 * 0x28)[-1] == ' ') &&
					 ((&predungeon + y2 + x2 * 0x28)[1] == '.')) {
					x1 = (int)&ROOMNODE_ARRAY_80142da0[x2 * 2].nRoomx1 + y2;
					if (((*(char *)(x1 + 1) == '.') &&
							(((&DAT_80142df0 + y2 + x2 * 0x28)[1] == '.' && (*(char *)(x1 + -1) == ' ')))) &&
						 ((&DAT_80142df0 + y2 + x2 * 0x28)[-1] == ' ')) {
						x2f = '\x01';
						x1f = '\x01';
						y1f = true;
					}
				}
				else {
					if (((((&predungeon + y2 + x2 * 0x28)[1] == ' ') &&
							 ((&predungeon + y2 + x2 * 0x28)[-1] == '.')) &&
							(x1 = (int)&ROOMNODE_ARRAY_80142da0[x2 * 2].nRoomx1 + y2, *(char *)(x1 + -1) == '.'))
						 && ((((&DAT_80142df0 + y2 + x2 * 0x28)[-1] == '.' && (*(char *)(x1 + 1) == ' ')) &&
								 ((&DAT_80142df0 + y2 + x2 * 0x28)[1] == ' ')))) {
						x2f = '\x01';
						x1f = '\x01';
						y2f = '\x01';
					}
				}
			}
		}
		uVar1 = DL2_Cont__FUcUcUcUc(x1f,y1f,x2f,y2f);
		if (uVar1 != '\0') {
			x1 = x2;
			if (x1f != '\0') {
				x1 = lVar2;
			}
			if (x2f != '\0') {
				x2 = lVar2 + 2;
			}
			y1 = y2;
			if (y1f) {
				y1 = lVar3;
			}
			if (y2f != '\0') {
				y2 = lVar3 + 2;
			}
			if (x1f == '\0') {
				if (y1f) goto LAB_80145d1c;
				while (y2f != '\0') {
LAB_80145d1c:
					do {
						if (y1 == 0) {
							y1f = false;
						}
						if (y2 == 0x27) {
							y2f = '\0';
						}
						if (0xd < y2 - y1) {
							y1f = false;
							y2f = '\0';
						}
						if (y1f) {
							y1 = y1 + -1;
						}
						if (y2f != '\0') {
							y2 = y2 + 1;
						}
						if ((&predungeon + x2 * 0x28)[y1] != ' ') {
							y1f = false;
						}
						if ((&predungeon + x2 * 0x28)[y2] != ' ') {
							y2f = '\0';
						}
					} while (y1f);
				}
				y1 = y1 + 2;
				y2 = y2 + -2;
				if (5 < y2 - y1) {
					if (x2f != '\0') {
						puVar7 = &predungeon + x2 * 0x28;
						while( true ) {
							if (x2 == 0x27) {
								x2f = '\0';
							}
							if (0xb < x2 - x1) {
								x2f = '\0';
							}
							if (y1 <= y2) {
								puVar6 = puVar7 + y1;
								iVar5 = y1;
								do {
									if (*puVar6 != ' ') {
										x2f = '\0';
									}
									iVar5 = iVar5 + 1;
									puVar6 = puVar6 + 1;
								} while (iVar5 <= y2);
							}
							puVar7 = puVar7 + 0x28;
							if (x2f == '\0') break;
							x2 = x2 + 1;
						}
					}
					x2 = x2 + -2;
					iVar5 = x2 - x1;
LAB_80146258:
					if (5 < iVar5) {
						DL2_DrawRoom__Fiiii(x1,y1,x2,y2);
						DL2_KnockWalls__Fiiii(x1,y1,x2,y2);
					}
				}
			}
			else {
				if (x2f == '\0') {
					if (y1f) goto LAB_80145e74;
					while (y2f != '\0') {
LAB_80145e74:
						do {
							if (y1 == 0) {
								y1f = false;
							}
							if (y2 == 0x27) {
								y2f = '\0';
							}
							if (0xd < y2 - y1) {
								y1f = false;
								y2f = '\0';
							}
							if (y1f) {
								y1 = y1 + -1;
							}
							if (y2f != '\0') {
								y2 = y2 + 1;
							}
							if ((&predungeon + x1 * 0x28)[y1] != ' ') {
								y1f = false;
							}
							if ((&predungeon + x1 * 0x28)[y2] != ' ') {
								y2f = '\0';
							}
						} while (y1f);
					}
					y1 = y1 + 2;
					y2 = y2 + -2;
					if (5 < y2 - y1) {
						if (x1f != '\0') {
							puVar7 = &predungeon + x1 * 0x28;
							while( true ) {
								if (x1 == 0) {
									x1f = '\0';
								}
								if (0xb < x2 - x1) {
									x1f = '\0';
								}
								if (y1 <= y2) {
									puVar6 = puVar7 + y1;
									iVar5 = y1;
									do {
										if (*puVar6 != ' ') {
											x1f = '\0';
										}
										iVar5 = iVar5 + 1;
										puVar6 = puVar6 + 1;
									} while (iVar5 <= y2);
								}
								puVar7 = puVar7 + -0x28;
								if (x1f == '\0') break;
								x1 = x1 + -1;
							}
						}
						x1 = x1 + 2;
						iVar5 = x2 - x1;
						goto LAB_80146258;
					}
				}
				else {
					if (y1f) {
						if (y2f == '\0') {
							puVar6 = &predungeon + x2 * 0x28;
							puVar7 = &predungeon + x1 * 0x28;
							do {
								if (x1 == 0) {
									x1f = '\0';
								}
								if (x2 == 0x27) {
									x2f = '\0';
								}
								if (0xd < x2 - x1) {
									x1f = '\0';
									x2f = '\0';
								}
								if (x1f != '\0') {
									puVar7 = puVar7 + -0x28;
									x1 = x1 + -1;
								}
								if (x2f != '\0') {
									puVar6 = puVar6 + 0x28;
									x2 = x2 + 1;
								}
								if (puVar7[y1] != ' ') {
									x1f = '\0';
								}
								if (puVar6[y1] != ' ') {
									x2f = '\0';
								}
							} while ((x1f != '\0') || (x2f != '\0'));
							x1 = x1 + 2;
							x2 = x2 + -2;
							if (5 < x2 - x1) {
								if (y1f) {
									while( true ) {
										if (y1 == 0) {
											y1f = false;
										}
										if (0xb < y2 - y1) {
											y1f = false;
										}
										if (x1 <= x2) {
											puVar7 = &predungeon + x1 * 0x28;
											iVar5 = x1;
											do {
												if (puVar7[y1] != ' ') {
													y1f = false;
												}
												iVar5 = iVar5 + 1;
												puVar7 = puVar7 + 0x28;
											} while (iVar5 <= x2);
										}
										if (!y1f) break;
										y1 = y1 + -1;
									}
								}
								y1 = y1 + 2;
								goto LAB_80146254;
							}
						}
					}
					else {
						puVar6 = &predungeon + x2 * 0x28;
						puVar7 = &predungeon + x1 * 0x28;
						do {
							if (x1 == 0) {
								x1f = '\0';
							}
							if (x2 == 0x27) {
								x2f = '\0';
							}
							if (0xd < x2 - x1) {
								x1f = '\0';
								x2f = '\0';
							}
							if (x1f != '\0') {
								puVar7 = puVar7 + -0x28;
								x1 = x1 + -1;
							}
							if (x2f != '\0') {
								puVar6 = puVar6 + 0x28;
								x2 = x2 + 1;
							}
							if (puVar7[y2] != ' ') {
								x1f = '\0';
							}
							if (puVar6[y2] != ' ') {
								x2f = '\0';
							}
						} while ((x1f != '\0') || (x2f != '\0'));
						x1 = x1 + 2;
						x2 = x2 + -2;
						if (5 < x2 - x1) {
							if (y2f != '\0') {
								while( true ) {
									if (y2 == 0x27) {
										y2f = '\0';
									}
									if (0xb < y2 - y1) {
										y2f = '\0';
									}
									if (x1 <= x2) {
										puVar7 = &predungeon + x1 * 0x28;
										iVar5 = x1;
										do {
											if (puVar7[y2] != ' ') {
												y2f = '\0';
											}
											iVar5 = iVar5 + 1;
											puVar7 = puVar7 + 0x28;
										} while (iVar5 <= x2);
									}
									if (y2f == '\0') break;
									y2 = y2 + 1;
								}
							}
							y2 = y2 + -2;
LAB_80146254:
							iVar5 = y2 - y1;
							goto LAB_80146258;
						}
					}
				}
			}
		}
		local_40 = local_40 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CreateDungeon__Fv()
 // line 2410, offset 0x801462e4
	/* begin block 1 */
		// Start line: 2411
		// Start offset: 0x801462E4
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int nHx1; // stack offset -40
	// 		int nHy1; // stack offset -36
	// 		int nHx2; // stack offset -32
	// 		int nHy2; // stack offset -28
	// 		int nHd; // stack offset -24
	// 		int ForceH; // $t0
	// 		int ForceW; // $t1
	// 		int ForceHW; // $t2
	/* end block 1 */
	// End offset: 0x801465D8
	// End Line: 2488

	/* begin block 2 */
		// Start line: 4994
	/* end block 2 */
	// End Line: 4995

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CreateDungeon__Fv(void)

{
	uchar uVar1;
	char *pcVar2;
	uchar *puVar3;
	int nH;
	uchar *puVar4;
	int nW;
	int ForceHW;
	int local_28;
	int local_24;
	int local_20;
	int local_1c;
	int local_18 [2];
	
	nW = 0;
	nH = 0;
	ForceHW = 0;
	if (currlevel == '\x06') {
		if (quests[14]._qactive != '\0') {
			ForceHW = 1;
			nW = 10;
			nH = 10;
		}
	}
	else {
		if (currlevel < 7) {
			if ((currlevel == '\x05') && (quests[9]._qactive != '\0')) {
				ForceHW = 1;
				nH = 0x14;
				nW = 0xe;
			}
		}
		else {
			if ((currlevel == '\a') && (quests[8]._qactive != '\0')) {
				ForceHW = 1;
				nW = 0xf;
				nH = 0xf;
			}
		}
	}
	CreateRoom__Fiiiiiiiii(2,2,0x27,0x27,0,0,ForceHW,nH,nW);
	while (pHallList != (NODE *)0x0) {
		GetHall__FPiN40(&local_28,&local_24,&local_20,&local_1c,local_18);
		ConnectHall__Fiiiii(local_28,local_24,local_20,local_1c,local_18[0]);
	}
	nH = 0;
	do {
		ForceHW = 0;
		nW = 0;
		puVar4 = &predungeon;
		do {
			puVar3 = puVar4 + nH;
			uVar1 = *puVar3;
			if (uVar1 == 'C') {
				*puVar3 = '#';
				uVar1 = *puVar3;
			}
			if (uVar1 == 'B') {
				*puVar3 = '#';
			}
			uVar1 = *puVar3;
			if (uVar1 == 'E') {
				*puVar3 = '#';
				uVar1 = *puVar3;
			}
			if (uVar1 == 'A') {
				*puVar3 = '#';
			}
			if (*puVar3 == ',') {
				*puVar3 = '.';
				pcVar2 = (char *)((int)&ROOMNODE_ARRAY_80142da0[0].nRoomx1 + nH + nW);
				if (pcVar2[-1] == ' ') {
					pcVar2[-1] = '#';
				}
				if (*pcVar2 == ' ') {
					*pcVar2 = '#';
				}
				if (pcVar2[1] == ' ') {
					pcVar2[1] = '#';
				}
				pcVar2 = &DAT_80142df0 + nH + nW;
				if (pcVar2[-1] == ' ') {
					pcVar2[-1] = '#';
				}
				if (*pcVar2 == ' ') {
					*pcVar2 = '#';
				}
				if (pcVar2[1] == ' ') {
					pcVar2[1] = '#';
				}
				puVar3 = puVar4 + nH;
				if (puVar3[-1] == ' ') {
					puVar3[-1] = '#';
				}
				if (puVar3[1] == ' ') {
					puVar3[1] = '#';
				}
			}
			puVar4 = puVar4 + 0x28;
			ForceHW = ForceHW + 1;
			nW = nW + 0x28;
		} while (ForceHW < 0x29);
		nH = nH + 1;
	} while (nH < 0x29);
	uVar1 = DL2_FillVoids__Fv();
	nH = 0;
	if (uVar1 == '\0') {
		uVar1 = '\0';
	}
	else {
		do {
			nW = 0;
			do {
				DoPatternCheck__Fii(nW,nH);
				nW = nW + 1;
			} while (nW < 0x28);
			nH = nH + 1;
			uVar1 = '\x01';
		} while (nH < 0x28);
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2Pass3__Fv()
 // line 2495, offset 0x801465f0
	/* begin block 1 */
		// Start line: 2496
		// Start offset: 0x801465F0
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
	// End offset: 0x801467B4
	// End Line: 2596

	/* begin block 2 */
		// Start line: 5198
	/* end block 2 */
	// End Line: 5199

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2Pass3__Fv(void)

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
	
	y = (int)s__800ced04;
	iVar5 = (int)s__800ced06;
	y_00 = 0;
	x = (int)s__800ced08;
	iVar6 = (int)s__800ced0a._0_2_;
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
// void /*$ra*/ DRLG_L2FTVR__Fiiiii(int i /*$s1*/, int j /*$s7*/, int x /*$s0*/, int y /*$fp*/, int d /*stack 16*/)
 // line 2603, offset 0x801467e8
	/* begin block 1 */
		// Start line: 2604
		// Start offset: 0x801467E8
	/* end block 1 */
	// End offset: 0x80146C3C
	// End Line: 2639

	/* begin block 2 */
		// Start line: 5568
	/* end block 2 */
	// End Line: 5569

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2FTVR__Fiiiii(int i,int j,int x,int y,int d)

{
	ushort uVar1;
	int i_00;
	int x_00;
	int y_00;
	int j_00;
	int x_01;
	int i_01;
	
	if ((dung_map[x * 0x70 + y].dTransVal == '\0') && (uVar1 = dungeon[i * 0x30 + j], uVar1 == 3)) {
		i_00 = i + 1;
		x_00 = x + 2;
		dung_map[x * 0x70 + y].dTransVal = TransVal;
		dung_map[(x + 1) * 0x70 + y].dTransVal = TransVal;
		dung_map[x * 0x70 + y + 1].dTransVal = TransVal;
		dung_map[(x + 1) * 0x70 + y + 1].dTransVal = TransVal;
		DRLG_L2FTVR__Fiiiii(i_00,j,x_00,y,1);
		i_01 = i + -1;
		x_01 = x + -2;
		DRLG_L2FTVR__Fiiiii(i_01,j,x_01,y,2);
		j_00 = j + 1;
		y_00 = y + 2;
		DRLG_L2FTVR__Fiiiii(i,j_00,x,y_00,(uint)uVar1);
		j = j + -1;
		y = y + -2;
		DRLG_L2FTVR__Fiiiii(i,j,x,y,4);
		DRLG_L2FTVR__Fiiiii(i_01,j,x_01,y,5);
		DRLG_L2FTVR__Fiiiii(i_00,j,x_00,y,6);
		DRLG_L2FTVR__Fiiiii(i_01,j_00,x_01,y_00,7);
		DRLG_L2FTVR__Fiiiii(i_00,j_00,x_00,y_00,8);
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
// void /*$ra*/ DRLG_L2FloodTVal__Fv()
 // line 2647, offset 0x80146c70
	/* begin block 1 */
		// Start line: 2648
		// Start offset: 0x80146C70
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s4
	// 		int xx; // $s3
	// 		int yy; // $s5
	/* end block 1 */
	// End offset: 0x80146D3C
	// End Line: 2663

	/* begin block 2 */
		// Start line: 5662
	/* end block 2 */
	// End Line: 5663

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2FloodTVal__Fv(void)

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
			if ((puVar2[j] == 3) && ((&dung_map[0].dTransVal)[iVar1] == '\0')) {
				DRLG_L2FTVR__Fiiiii(i,j,x,y,0);
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
// void /*$ra*/ DRLG_L2TransFix__Fv()
 // line 2670, offset 0x80146d68
	/* begin block 1 */
		// Start line: 2671
		// Start offset: 0x80146D68
		// Variables:
	// 		int j; // $t5
	// 		int yy; // $t6
	/* end block 1 */
	// End offset: 0x80146F84
	// End Line: 2703

	/* begin block 2 */
		// Start line: 5722
	/* end block 2 */
	// End Line: 5723

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2TransFix__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	ushort *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar10 = 0x10;
	iVar9 = 0;
	iVar6 = 0x88;
	do {
		iVar8 = 0;
		iVar7 = iVar6 + 0x3800;
		iVar3 = iVar10 * 8 + 0x3800;
		iVar4 = 0x3b80;
		puVar5 = dungeon;
		do {
			if ((puVar5[iVar9] == 0xe) && ((puVar5 + iVar9)[-1] == 10)) {
				(&dung_map[iVar10].dTransVal)[iVar4] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar6 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			puVar2 = puVar5 + iVar9;
			if ((puVar5[iVar9] == 0xf) && (*(short *)(iVar9 * 2 + iVar8 + -0x7ff1bedc) == 0xb)) {
				(&dung_map[0].dTransVal)[iVar7] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar6 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			uVar1 = *puVar2;
			if (uVar1 == 10) {
				(&dung_map[iVar10].dTransVal)[iVar4] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar6 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
				uVar1 = *puVar2;
			}
			if (uVar1 == 0xb) {
				(&dung_map[0].dTransVal)[iVar7] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar6 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			if (*puVar2 == 0x10) {
				(&dung_map[iVar10].dTransVal)[iVar4] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar7] = (&dung_map[0].dTransVal)[iVar3];
				(&dung_map[0].dTransVal)[iVar6 + iVar4] = (&dung_map[0].dTransVal)[iVar3];
			}
			iVar7 = iVar7 + 0x700;
			iVar3 = iVar3 + 0x700;
			iVar4 = iVar4 + 0x700;
			puVar5 = puVar5 + 0x30;
			iVar8 = iVar8 + 0x60;
		} while ((int)puVar5 < -0x7ff1b03c);
		iVar6 = iVar6 + 0x10;
		iVar9 = iVar9 + 1;
		iVar10 = iVar10 + 2;
	} while (iVar9 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L2DirtFix__Fv()
 // line 2710, offset 0x80146f94
	/* begin block 1 */
		// Start line: 2711
		// Start offset: 0x80146F94
		// Variables:
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x801470EC
	// End Line: 2726

	/* begin block 2 */
		// Start line: 5805
	/* end block 2 */
	// End Line: 5806

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L2DirtFix__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	ushort *puVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	do {
		iVar5 = iVar8 * 2;
		iVar6 = 0;
		puVar4 = dungeon;
		iVar7 = -0x7ff1bedc;
		do {
			uVar1 = puVar4[iVar8];
			if (uVar1 == 0xd) {
				if (*(short *)(iVar5 + iVar7) != 0xb) {
					puVar4[iVar8] = 0x92;
				}
				uVar1 = puVar4[iVar8];
			}
			if ((uVar1 == 0xb) && (*(short *)(iVar5 + iVar6 + -0x7ff1bedc) != 0xb)) {
				puVar4[iVar8] = 0x90;
			}
			uVar1 = puVar4[iVar8];
			if (uVar1 == 0xf) {
				if (*(short *)(iVar5 + iVar6 + -0x7ff1bedc) != 0xb) {
					puVar4[iVar8] = 0x94;
				}
				uVar1 = puVar4[iVar8];
			}
			if ((uVar1 == 10) && ((puVar4 + iVar8)[1] != 10)) {
				puVar4[iVar8] = 0x8f;
			}
			puVar2 = puVar4 + iVar8;
			puVar3 = puVar4 + iVar8;
			if ((*puVar2 == 0xd) && (puVar2[1] != 10)) {
				*puVar2 = 0x92;
			}
			if ((*puVar3 == 0xe) && (puVar3[1] != 0xf)) {
				*puVar3 = 0x93;
			}
			puVar4 = puVar4 + 0x30;
			iVar6 = iVar6 + 0x60;
			iVar7 = iVar7 + 0x60;
		} while ((int)puVar4 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
	} while (iVar8 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L2LockoutFix__Fv()
 // line 2733, offset 0x801470f4
	/* begin block 1 */
		// Start line: 2734
		// Start offset: 0x801470F4
		// Variables:
	// 		int i; // $t3
	// 		int j; // $t4
	// 		unsigned char doorok; // $t0
	/* end block 1 */
	// End offset: 0x80147464
	// End Line: 2776

	/* begin block 2 */
		// Start line: 5848
	/* end block 2 */
	// End Line: 5849

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L2LockoutFix__Fv(void)

{
	short sVar1;
	ushort uVar2;
	bool bVar3;
	uchar *puVar4;
	uchar *puVar5;
	ushort *puVar6;
	ushort *puVar7;
	char **ppcVar8;
	ushort *puVar9;
	int iVar10;
	ushort *puVar11;
	short *psVar12;
	ushort *puVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	iVar10 = 0;
	puVar6 = dungeon;
	ppcVar8 = PTR_ARRAY_800e4064;
	do {
		do {
			sVar1 = *(short *)(iVar10 + (int)puVar6);
			if (sVar1 == 4) {
				if (*(short *)(iVar10 + (int)ppcVar8) != 3) {
					*(short *)(iVar10 + (int)puVar6) = 1;
				}
				sVar1 = *(short *)(iVar10 + (int)puVar6);
			}
			if ((sVar1 == 5) && (((undefined2 *)(iVar10 + (int)puVar6))[-1] != 3)) {
				*(undefined2 *)(iVar10 + (int)puVar6) = 2;
			}
			puVar4 = mydflags;
			puVar6 = puVar6 + 0x30;
			ppcVar8 = ppcVar8 + 0x18;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar15 = iVar15 + 1;
		iVar10 = iVar15 * 2;
		puVar6 = dungeon;
		ppcVar8 = PTR_ARRAY_800e4064;
	} while (iVar15 < 0x28);
	iVar10 = 1;
	iVar15 = 0x28;
	do {
		iVar14 = 1;
		puVar11 = dungeon;
		puVar6 = dungeon;
		do {
			puVar6 = puVar6 + 0x30;
			puVar13 = puVar6 + iVar10;
			if (((puVar4[iVar15 + iVar14] & 0x80) == 0) &&
				 ((((*puVar13 == 2 || (*puVar13 == 5)) && (puVar13[-1] == 3)) && (puVar13[1] == 3)))) {
				puVar13 = dungeon + iVar14 * 0x30;
				uVar2 = puVar13[iVar10];
				bVar3 = false;
				while (((uVar2 == 2 || (uVar2 == 5)) &&
							 ((puVar7 = puVar13 + iVar10, puVar7[-1] == 3 && (puVar7[1] == 3))))) {
					if (*puVar7 == 5) {
						bVar3 = true;
					}
					puVar13 = puVar13 + 0x30;
					puVar11 = puVar11 + 0x30;
					puVar6 = puVar6 + 0x30;
					uVar2 = puVar13[iVar10];
					iVar14 = iVar14 + 1;
				}
				if ((!bVar3) && ((puVar4[iVar15 + iVar14 + -1] & 0x80) == 0)) {
					puVar11[iVar10] = 5;
				}
			}
			puVar5 = mydflags;
			puVar11 = puVar11 + 0x30;
			iVar14 = iVar14 + 1;
		} while (iVar14 < 0x27);
		iVar10 = iVar10 + 1;
		iVar15 = iVar15 + 0x28;
	} while (iVar10 < 0x27);
	iVar10 = 1;
	puVar11 = dungeon;
	iVar15 = 0x60;
	puVar6 = puVar11;
	do {
		iVar16 = 1;
		puVar13 = puVar6 + 0x31;
		iVar14 = iVar10;
		do {
			iVar14 = iVar14 + 0x28;
			if ((puVar5[iVar14] & 0x80) == 0) {
				if (((*puVar13 == 1) || (*puVar13 == 4)) && (puVar7 = puVar11 + iVar16, *puVar7 == 3)) {
					psVar12 = (short *)(iVar16 * 2 + iVar15 + -0x7ff1bedc);
					bVar3 = false;
					if (*psVar12 == 3) {
						puVar9 = puVar6 + 0x30 + iVar16;
						uVar2 = *puVar9;
						while (((uVar2 == 1 || (uVar2 == 4)) && ((*puVar7 == 3 && (*psVar12 == 3))))) {
							if (*puVar9 == 4) {
								bVar3 = true;
							}
							puVar9 = puVar9 + 1;
							psVar12 = psVar12 + 1;
							puVar7 = puVar7 + 1;
							puVar13 = puVar13 + 1;
							iVar14 = iVar14 + 0x28;
							uVar2 = *puVar9;
							iVar16 = iVar16 + 1;
						}
						if ((!bVar3) && ((puVar5[iVar14 + -0x28] & 0x80) == 0)) {
							puVar13[-1] = 4;
						}
					}
				}
			}
			puVar13 = puVar13 + 1;
			iVar16 = iVar16 + 1;
		} while (iVar16 < 0x27);
		puVar11 = puVar11 + 0x30;
		iVar10 = iVar10 + 1;
		iVar15 = iVar15 + 0x60;
		puVar6 = puVar6 + 0x30;
	} while (iVar10 < 0x27);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L2DoorFix__Fv()
 // line 2781, offset 0x80147478
	/* begin block 1 */
		// Start line: 2782
		// Start offset: 0x80147478
		// Variables:
	// 		int j; // $a3
	/* end block 1 */
	// End offset: 0x80147520
	// End Line: 2792

	/* begin block 2 */
		// Start line: 5951
	/* end block 2 */
	// End Line: 5952

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L2DoorFix__Fv(void)

{
	short sVar1;
	short *psVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 1;
	do {
		iVar5 = iVar6 * 2;
		iVar3 = -0x7ff1bedc;
		iVar4 = 0x60;
		do {
			psVar2 = (short *)(iVar5 + iVar3);
			sVar1 = *psVar2;
			if (sVar1 == 4) {
				if (psVar2[-1] == 3) {
					*psVar2 = 7;
				}
				sVar1 = *(short *)(iVar5 + iVar3);
			}
			if ((sVar1 == 5) && (*(short *)((int)PTR_ARRAY_800e4064 + iVar5 + iVar4) == 3)) {
				*(undefined2 *)(iVar5 + iVar3) = 9;
			}
			iVar3 = iVar3 + 0x60;
			iVar4 = iVar4 + 0x60;
		} while (iVar3 < -0x7ff1b03c);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2SetWalls__Fv()
 // line 2795, offset 0x80147528
	/* begin block 1 */
		// Start line: 2796
		// Start offset: 0x80147528
		// Variables:
	// 		int i; // $t0
	// 		int j; // $t2
	// 		int yy; // $t6

		/* begin block 1.1 */
			// Start line: 2800
			// Start offset: 0x80147528

			/* begin block 1.1.1 */
				// Start line: 2802
				// Start offset: 0x80147540

				/* begin block 1.1.1.1 */
					// Start line: 2806
					// Start offset: 0x8014754C

					/* begin block 1.1.1.1.1 */
						// Start line: 2806
						// Start offset: 0x80147564
						// Variables:
					// 		int v; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x801476B0
					// End Line: 2825
				/* end block 1.1.1.1 */
				// End offset: 0x801476C8
				// End Line: 2826
			/* end block 1.1.1 */
			// End offset: 0x801476C8
			// End Line: 2827
		/* end block 1.1 */
		// End offset: 0x801476D8
		// End Line: 2828
	/* end block 1 */
	// End offset: 0x801476D8
	// End Line: 2828

	/* begin block 2 */
		// Start line: 5980
	/* end block 2 */
	// End Line: 5981

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2SetWalls__Fv(void)

{
	ushort uVar1;
	byte bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ushort *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar10 = 0x10;
	iVar8 = 0;
	iVar9 = 0x88;
	while (iVar7 = 0, iVar8 < 0x28) {
		iVar5 = iVar9 + 0x3800;
		iVar4 = 0x3b80;
		iVar3 = iVar10 * 8 + 0x3800;
		puVar6 = dungeon;
		while (iVar7 < 0x28) {
			uVar1 = puVar6[iVar8];
			if ((((uVar1 == 3) || (uVar1 == 0xc)) || (uVar1 == 0)) ||
				 (((uVar1 == 0x4c || (uVar1 == 0x9f)) || (uVar1 == 0x32)))) {
				(&dung_map[0].dFlags)[iVar3] = (&dung_map[0].dFlags)[iVar3] | 0x20;
				(&dung_map[iVar10].dFlags)[iVar4] = (&dung_map[iVar10].dFlags)[iVar4] | 0x20;
				(&dung_map[0].dFlags)[iVar5] = (&dung_map[0].dFlags)[iVar5] | 0x20;
				bVar2 = (&dung_map[0].dFlags)[iVar9 + iVar4] | 0x20;
			}
			else {
				(&dung_map[0].dFlags)[iVar3] = (&dung_map[0].dFlags)[iVar3] & 0xdf;
				(&dung_map[iVar10].dFlags)[iVar4] = (&dung_map[iVar10].dFlags)[iVar4] & 0xdf;
				(&dung_map[0].dFlags)[iVar5] = (&dung_map[0].dFlags)[iVar5] & 0xdf;
				bVar2 = (&dung_map[0].dFlags)[iVar9 + iVar4] & 0xdf;
			}
			(&dung_map[0].dFlags)[iVar9 + iVar4] = bVar2;
			iVar5 = iVar5 + 0x700;
			iVar4 = iVar4 + 0x700;
			iVar3 = iVar3 + 0x700;
			puVar6 = puVar6 + 0x30;
			iVar7 = iVar7 + 1;
		}
		iVar9 = iVar9 + 0x10;
		iVar10 = iVar10 + 2;
		iVar8 = iVar8 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L2__Fi(int entry /*$s3*/)
 // line 2834, offset 0x801476e0
	/* begin block 1 */
		// Start line: 2835
		// Start offset: 0x801476E0
		// Variables:
	// 		int i; // $a2
	// 		int j; // $a3
	// 		unsigned char doneflag; // $s0
	/* end block 1 */
	// End offset: 0x8014810C
	// End Line: 3049

	/* begin block 2 */
		// Start line: 6057
	/* end block 2 */
	// End Line: 6058

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L2__Fi(int entry)

{
	uchar uVar1;
	uchar uVar2;
	ushort *puVar3;
	uchar *puVar4;
	ushort *puVar5;
	int iVar6;
	int local_2c;
	
	uVar2 = '\0';
	do {
		UPDATEPROGRESS__Fi(1);
		nRoomCnt = 0;
		InitDungeon__Fv();
		DRLG_InitTrans__Fv();
		uVar1 = CreateDungeon__Fv();
		if (uVar1 != '\0') {
			L2TileFix__Fv();
			if (setloadflag != '\0') {
				DRLG_L2SetRoom__Fii(nSx1,nSy1);
			}
			DRLG_L2FloodTVal__Fv();
			DRLG_L2TransFix__Fv();
			if (entry == 0) {
				uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(USTAIRS,1,1,-1,-1,1,0);
				if (uVar2 != '\0') {
					uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(DSTAIRS,1,1,-1,-1,0,1);
					if ((uVar2 != '\0') && (currlevel == '\x05')) {
						local_2c = 0;
LAB_80147964:
						uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(WARPSTAIRS,1,1,-1,-1,local_2c,6);
					}
				}
			}
			else {
				if (entry == 1) {
					uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(USTAIRS,1,1,-1,-1,0,0);
					if (uVar2 != '\0') {
						uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(DSTAIRS,1,1,-1,-1,1,1);
						if ((uVar2 != '\0') && (currlevel == '\x05')) {
							uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(WARPSTAIRS,1,1,-1,-1,0,6);
						}
					}
					ViewX = ViewX + -1;
					goto LAB_8014798c;
				}
				uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(USTAIRS,1,1,-1,-1,0,0);
				if (uVar2 != '\0') {
					uVar2 = DRLG_L2PlaceMiniSet__FPUciiiiii(DSTAIRS,1,1,-1,-1,0,1);
					if ((uVar2 != '\0') && (currlevel == '\x05')) {
						local_2c = 1;
						goto LAB_80147964;
					}
				}
			}
			ViewY = ViewY + -2;
		}
LAB_8014798c:
		if (uVar2 != '\0') {
			L2LockoutFix__Fv();
			L2DoorFix__Fv();
			L2DirtFix__Fv();
			DRLG_PlaceThemeRooms__FiiiiUc(6,10,3,0,0);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR1,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR2,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR3,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR4,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR5,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR6,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR7,100);
			DRLG_L2PlaceRndSet__FPUci(CTRDOOR8,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH33,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH34,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH35,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH36,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH37,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH38,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH39,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH40,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH1,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH2,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH3,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH4,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH5,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH6,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH7,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH8,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH9,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH10,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH11,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH12,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH13,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH14,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH15,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH16,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH17,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH18,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH19,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH20,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH21,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH22,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH23,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH24,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH25,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH26,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH27,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH28,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH29,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH30,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH31,100);
			DRLG_L2PlaceRndSet__FPUci(VARCH32,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH1,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH2,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH3,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH4,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH5,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH6,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH7,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH8,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH9,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH10,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH11,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH12,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH13,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH14,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH15,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH16,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH17,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH18,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH19,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH20,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH21,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH22,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH23,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH24,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH25,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH26,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH27,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH28,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH29,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH30,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH31,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH32,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH33,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH34,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH35,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH36,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH37,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH38,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH39,100);
			DRLG_L2PlaceRndSet__FPUci(HARCH40,100);
			DRLG_L2PlaceRndSet__FPUci(CRUSHCOL,99);
			DRLG_L2PlaceRndSet__FPUci(RUINS1,10);
			DRLG_L2PlaceRndSet__FPUci(RUINS2,10);
			DRLG_L2PlaceRndSet__FPUci(RUINS3,10);
			DRLG_L2PlaceRndSet__FPUci(RUINS4,10);
			DRLG_L2PlaceRndSet__FPUci(RUINS5,10);
			DRLG_L2PlaceRndSet__FPUci(RUINS6,10);
			DRLG_L2PlaceRndSet__FPUci(RUINS7,0x32);
			DRLG_L2PlaceRndSet__FPUci(PANCREAS1,1);
			DRLG_L2PlaceRndSet__FPUci(PANCREAS2,1);
			DRLG_L2SetWalls__Fv();
			DRLG_L2PlaceRndSet__FPUci(BIG1,3);
			DRLG_L2PlaceRndSet__FPUci(BIG2,3);
			DRLG_L2PlaceRndSet__FPUci(BIG3,3);
			DRLG_L2PlaceRndSet__FPUci(BIG4,3);
			DRLG_L2PlaceRndSet__FPUci(BIG5,3);
			DRLG_L2PlaceRndSet__FPUci(BIG6,0x14);
			DRLG_L2PlaceRndSet__FPUci(BIG7,0x14);
			DRLG_L2PlaceRndSet__FPUci(BIG8,3);
			DRLG_L2PlaceRndSet__FPUci(BIG9,0x14);
			DRLG_L2PlaceRndSet__FPUci(BIG10,0x14);
			DRLG_L2Subs__Fv();
			DRLG_L2Shadows__Fv();
			local_2c = 0;
			do {
				iVar6 = 0;
				puVar4 = &pdungeon;
				puVar5 = dungeon;
				do {
					puVar3 = puVar5 + local_2c;
					puVar5 = puVar5 + 0x30;
					iVar6 = iVar6 + 1;
					puVar4[local_2c] = (uchar)*puVar3;
					puVar4 = puVar4 + 0x28;
				} while (iVar6 < 0x28);
				local_2c = local_2c + 1;
			} while (local_2c < 0x28);
			DRLG_Init_Globals__Fv();
			DRLG_CheckQuests__Fii(nSx1,nSy1);
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_InitL2Vals__Fv()
 // line 3057, offset 0x80148134
	/* begin block 1 */
		// Start line: 3058
		// Start offset: 0x80148134
	/* end block 1 */
	// End offset: 0x80148134
	// End Line: 3058

	/* begin block 2 */
		// Start line: 6561
	/* end block 2 */
	// End Line: 6562

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_InitL2Vals__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadL2Dungeon__FPcii(char *sFileName /*$s0*/, int vx /*$s1*/, int vy /*$s2*/)
 // line 3098, offset 0x8014813c
	/* begin block 1 */
		// Start line: 3099
		// Start offset: 0x8014813C
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a2
	// 		int rw; // $t3
	// 		int rh; // $t4
	// 		unsigned char *pLevelMap; // $s0
	// 		unsigned char *lm; // $t0

		/* begin block 1.1 */
			// Start line: 3142
			// Start offset: 0x801482F4
		/* end block 1.1 */
		// End offset: 0x8014833C
		// End Line: 3182
	/* end block 1 */
	// End offset: 0x8014833C
	// End Line: 3182

	/* begin block 2 */
		// Start line: 6609
	/* end block 2 */
	// End Line: 6610

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadL2Dungeon__FPcii(char *sFileName,int vx,int vy)

{
	byte bVar1;
	byte bVar2;
	byte *pMap;
	int iVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	
	InitDungeon__Fv();
	DRLG_InitTrans__Fv();
	pMap = GRL_LoadFileInMemSig__FPCcPUl(sFileName,(ulong *)0x0);
	iVar7 = 0;
	do {
		iVar5 = 0;
		puVar4 = dungeon;
		do {
			puVar4[iVar7] = 0xc;
			iVar5 = iVar5 + 1;
			puVar4 = puVar4 + 0x30;
		} while (iVar5 < 0x28);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	iVar7 = 0;
	iVar5 = 0;
	do {
		iVar6 = 0;
		do {
			iVar3 = iVar5 + iVar6;
			iVar6 = iVar6 + 1;
			mydflags[iVar3] = '\0';
		} while (iVar6 < 0x28);
		iVar7 = iVar7 + 1;
		iVar5 = iVar5 + 0x28;
	} while (iVar7 < 0x28);
	bVar1 = *pMap;
	iVar7 = 0;
	bVar2 = pMap[2];
	pbVar8 = pMap + 4;
	if (bVar2 != 0) {
		iVar5 = 0;
		do {
			iVar6 = 0;
			puVar4 = dungeon;
			if (bVar1 != 0) {
				do {
					if (*pbVar8 == 0) {
						puVar4[iVar7] = 3;
					}
					else {
						puVar4[iVar7] = (ushort)*pbVar8;
						mydflags[iVar5 + iVar6] = mydflags[iVar5 + iVar6] | 0x80;
					}
					pbVar8 = pbVar8 + 2;
					iVar6 = iVar6 + 1;
					puVar4 = puVar4 + 0x30;
				} while (iVar6 < (int)(uint)bVar1);
			}
			iVar7 = iVar7 + 1;
			iVar5 = iVar5 + 0x28;
		} while (iVar7 < (int)(uint)bVar2);
	}
	iVar7 = 0;
	do {
		iVar5 = 0;
		puVar4 = dungeon;
		do {
			if (puVar4[iVar7] == 0) {
				puVar4[iVar7] = 0xc;
			}
			iVar5 = iVar5 + 1;
			puVar4 = puVar4 + 0x30;
		} while (iVar5 < 0x28);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	DRLG_L2Pass3__Fv();
	DRLG_Init_Globals__Fv();
	ViewX = vx;
	ViewY = vy;
	SetMapMonsters__FPUcii(pMap,0,0);
	SetMapObjects__FPUcii(pMap,0,0);
	mem_free_dbg__FPv(pMap);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadPreL2Dungeon__FPcii(char *sFileName /*$s0*/, int vx /*$a1*/, int vy /*$a2*/)
 // line 3189, offset 0x80148358
	/* begin block 1 */
		// Start line: 3190
		// Start offset: 0x80148358
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a3
	// 		int rw; // $t3
	// 		int rh; // $t4
	// 		unsigned char *pLevelMap; // $t7
	// 		unsigned char *lm; // $t0

		/* begin block 1.1 */
			// Start line: 3231
			// Start offset: 0x80148530
		/* end block 1.1 */
		// End offset: 0x80148538
		// End Line: 3231
	/* end block 1 */
	// End offset: 0x80148538
	// End Line: 3231

	/* begin block 2 */
		// Start line: 6798
	/* end block 2 */
	// End Line: 6799

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadPreL2Dungeon__FPcii(char *sFileName,int vx,int vy)

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
	
	InitDungeon__Fv();
	DRLG_InitTrans__Fv();
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
			puVar5[iVar8] = 0xc;
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
						puVar5[iVar8] = 3;
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
	iVar8 = 0;
	do {
		iVar10 = 0;
		puVar5 = dungeon;
		do {
			if (puVar5[iVar8] == 0) {
				puVar5[iVar8] = 0xc;
			}
			iVar10 = iVar10 + 1;
			puVar5 = puVar5 + 0x30;
		} while (iVar10 < 0x28);
		iVar8 = iVar8 + 1;
	} while (iVar8 < 0x28);
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
// void /*$ra*/ CreateL2Dungeon__FUii(unsigned int rseed /*$a2*/, int entry /*$s3*/)
 // line 3238, offset 0x8014854c
	/* begin block 1 */
		// Start line: 3239
		// Start offset: 0x8014854C
	/* end block 1 */
	// End offset: 0x80148680
	// End Line: 3315

	/* begin block 2 */
		// Start line: 6901
	/* end block 2 */
	// End Line: 6902

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateL2Dungeon__FUii(uint rseed,int entry)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	
	iVar2 = (uint)currlevel - 4;
	piVar3 = &nSxy + iVar2 * 4;
	if (*piVar3 != -1) {
		nSy1 = (&INT_801026ec)[iVar2 * 4];
		nSx2 = (&INT_801026f0)[iVar2 * 4];
		nSy2 = INT_ARRAY_801026f4[iVar2 * 4];
		nSx1 = *piVar3;
	}
	pSetPiece = (uchar *)0x0;
	SetRndSeed__Fl(rseed);
	dminx = 0x10;
	dminy = 0x10;
	dmaxx = 0x50;
	dmaxy = 0x50;
	DRLG_InitTrans__Fv();
	DRLG_InitSetPC__Fv();
	DRLG_LoadL2SP__Fv();
	DRLG_L2__Fi(entry);
	DRLG_L2Pass3__Fv();
	DRLG_FreeL2SP__Fv();
	DRLG_InitL2Vals__Fv();
	DRLG_SetPC__Fv();
	iVar1 = nSy1;
	if (*piVar3 == -1) {
		*piVar3 = nSx1;
		(&INT_801026ec)[iVar2 * 4] = iVar1;
		(&INT_801026f0)[iVar2 * 4] = nSx2;
		INT_ARRAY_801026f4[iVar2 * 4] = nSy2;
	}
	return;
}





