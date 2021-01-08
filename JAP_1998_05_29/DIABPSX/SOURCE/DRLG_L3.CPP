#include "THISDUST.H"
#include "DRLG_L3.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitL3Dungeon__Fv()
 // line 399, offset 0x80148f98
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x80148F98
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a0
	/* end block 1 */
	// End offset: 0x80149014
	// End Line: 418

	/* begin block 2 */
		// Start line: 802
	/* end block 2 */
	// End Line: 803

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL3Dungeon__Fv(void)

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
// void /*$ra*/ SetBlankL3Dungeon__Fv()
 // line 421, offset 0x8014901c
	/* begin block 1 */
		// Start line: 422
		// Start offset: 0x8014901C
		// Variables:
	// 		int x; // $a1
	// 		int y; // $a2
	/* end block 1 */
	// End offset: 0x80149070
	// End Line: 428

	/* begin block 2 */
		// Start line: 845
	/* end block 2 */
	// End Line: 846

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBlankL3Dungeon__Fv(void)

{
	ushort *puVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	do {
		iVar2 = 0;
		puVar1 = dungeon;
		do {
			if (puVar1[iVar3] == 0) {
				puVar1[iVar3] = 8;
			}
			iVar2 = iVar2 + 1;
			puVar1 = puVar1 + 0x30;
		} while (iVar2 < 0x2f);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x2f);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FixL3Dungeon__Fv()
 // line 431, offset 0x80149078
	/* begin block 1 */
		// Start line: 432
		// Start offset: 0x80149078
		// Variables:
	// 		int x; // $a1
	// 		int y; // $a2
	/* end block 1 */
	// End offset: 0x801490E4
	// End Line: 439

	/* begin block 2 */
		// Start line: 865
	/* end block 2 */
	// End Line: 866

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FixL3Dungeon__Fv(void)

{
	ushort *puVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	do {
		iVar3 = 0;
		puVar2 = dungeon;
		do {
			puVar1 = puVar2 + iVar4;
			if ((*puVar1 == 0xd) && (puVar1[-1] == 9)) {
				puVar1[-1] = 0xc;
			}
			iVar3 = iVar3 + 1;
			puVar2 = puVar2 + 0x30;
		} while (iVar3 < 0x2f);
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x2f);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_L3FillRoom__Fiiii(int x1 /*$s5*/, int y1 /*$s6*/, int x2 /*$s3*/, int y2 /*$s4*/)
 // line 444, offset 0x801490ec
	/* begin block 1 */
		// Start line: 445
		// Start offset: 0x801490EC
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int v; // $a0
	// 		int rv; // $v0
	/* end block 1 */
	// End offset: 0x8014930C
	// End Line: 478

	/* begin block 2 */
		// Start line: 889
	/* end block 2 */
	// End Line: 890

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_L3FillRoom__Fiiii(int x1,int y1,int x2,int y2)

{
	long lVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	ushort *puVar6;
	
	if ((1 < x1) && (x2 < 0x22)) {
		if (y1 < 2) {
			return 0;
		}
		iVar3 = 0;
		if (y2 < 0x26) {
			iVar5 = y1;
			if (y1 <= y2) {
				do {
					if (x1 <= x2) {
						puVar2 = dungeon + x1 * 0x30;
						iVar4 = x1;
						do {
							iVar4 = iVar4 + 1;
							iVar3 = iVar3 + (uint)puVar2[iVar5];
							puVar2 = puVar2 + 0x30;
						} while (iVar4 <= x2);
					}
					iVar5 = iVar5 + 1;
				} while (iVar5 <= y2);
			}
			if (iVar3 != 0) {
				return 0;
			}
			iVar3 = y1 + 1;
			while (iVar3 < y2) {
				iVar5 = x1 + 1;
				if (iVar5 < x2) {
					puVar2 = dungeon + iVar5 * 0x30;
					do {
						puVar2[iVar3] = 1;
						iVar5 = iVar5 + 1;
						puVar2 = puVar2 + 0x30;
					} while (iVar5 < x2);
				}
				iVar3 = iVar3 + 1;
			}
			if (y1 <= y2) {
				puVar6 = dungeon + x2 * 0x30 + y1;
				puVar2 = dungeon + x1 * 0x30 + y1;
				iVar3 = y1;
				do {
					lVar1 = ENG_random__Fl(2);
					if (lVar1 != 0) {
						*puVar2 = 1;
					}
					lVar1 = ENG_random__Fl(2);
					if (lVar1 != 0) {
						*puVar6 = 1;
					}
					puVar6 = puVar6 + 1;
					iVar3 = iVar3 + 1;
					puVar2 = puVar2 + 1;
				} while (iVar3 <= y2);
			}
			if (x2 < x1) {
				return 1;
			}
			puVar2 = dungeon + x1 * 0x30;
			do {
				lVar1 = ENG_random__Fl(2);
				if (lVar1 != 0) {
					puVar2[y1] = 1;
				}
				lVar1 = ENG_random__Fl(2);
				if (lVar1 != 0) {
					puVar2[y2] = 1;
				}
				x1 = x1 + 1;
				puVar2 = puVar2 + 0x30;
			} while (x1 <= x2);
			return 1;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3CreateBlock__Fiiii(int x /*$s5*/, int y /*$s7*/, int obs /*$s4*/, int dir /*stack -48*/)
 // line 483, offset 0x8014933c
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x8014933C
		// Variables:
	// 		int blksizex; // $s1
	// 		int blksizey; // $s0
	// 		int x1; // $s2
	// 		int y1; // $s3
	// 		int x2; // $s6
	// 		int y2; // $fp
	// 		int contflag; // $s4
	/* end block 1 */
	// End offset: 0x80149588
	// End Line: 535

	/* begin block 2 */
		// Start line: 970
	/* end block 2 */
	// End Line: 971

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3CreateBlock__Fiiii(int x,int y,int obs,int dir)

{
	long lVar1;
	int iVar2;
	int v;
	int v_00;
	int x1;
	int y1;
	int x2;
	int y2;
	
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
	lVar1 = ENG_random__Fl(2);
	v_00 = lVar1 + 3;
	lVar1 = ENG_random__Fl(2);
	v = lVar1 + 3;
	if (dir == 0) {
		y2 = y + -1;
		y1 = y2 - v;
		if (v_00 < obs) {
			lVar1 = ENG_random__Fl(v_00);
			x1 = lVar1 + x;
		}
		if (v_00 == obs) {
			x1 = x;
		}
		if (obs < v_00) {
			lVar1 = ENG_random__Fl(v_00);
			x1 = x - lVar1;
		}
		x2 = x1 + v_00;
	}
	if (dir == 3) {
		x2 = x + -1;
		x1 = x2 - v_00;
		if (v < obs) {
			lVar1 = ENG_random__Fl(v);
			y1 = lVar1 + y;
		}
		if (v == obs) {
			y1 = y;
		}
		if (obs < v) {
			lVar1 = ENG_random__Fl(v);
			y1 = y - lVar1;
		}
		y2 = y1 + v;
	}
	if (dir == 2) {
		y1 = y + 1;
		y2 = y1 + v;
		if (v_00 < obs) {
			lVar1 = ENG_random__Fl(v_00);
			x1 = lVar1 + x;
		}
		if (v_00 == obs) {
			x1 = x;
		}
		x2 = x1 + v_00;
		if (obs < v_00) {
			lVar1 = ENG_random__Fl(v_00);
			x1 = x - lVar1;
			x2 = x1 + v_00;
		}
	}
	if (dir == 1) {
		x1 = x + 1;
		x2 = x1 + v_00;
		if (v < obs) {
			lVar1 = ENG_random__Fl(v);
			y1 = lVar1 + y;
		}
		if (v == obs) {
			y1 = y;
		}
		y2 = y1 + v;
		if (obs < v) {
			lVar1 = ENG_random__Fl(v);
			y1 = y - lVar1;
			y2 = y1 + v;
		}
	}
	iVar2 = DRLG_L3FillRoom__Fiiii(x1,y1,x2,y2);
	if ((iVar2 == 1) && (lVar1 = ENG_random__Fl(4), lVar1 != 0)) {
		if (dir != 2) {
			DRLG_L3CreateBlock__Fiiii(x1,y1,v,0);
		}
		if (dir != 3) {
			DRLG_L3CreateBlock__Fiiii(x2,y1,v_00,1);
		}
		if (dir != 0) {
			DRLG_L3CreateBlock__Fiiii(x1,y2,v,2);
		}
		if (dir != 1) {
			DRLG_L3CreateBlock__Fiiii(x1,y1,v_00,3);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3FloorArea__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 541, offset 0x801495bc
	/* begin block 1 */
		// Start line: 542
		// Start offset: 0x801495BC
		// Variables:
	// 		int i; // $v1
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x8014961C
	// End Line: 548

	/* begin block 2 */
		// Start line: 1100
	/* end block 2 */
	// End Line: 1101

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3FloorArea__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	ushort *puVar2;
	
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				puVar2 = dungeon + x1 * 0x30;
				iVar1 = x1;
				do {
					puVar2[y1] = 1;
					iVar1 = iVar1 + 1;
					puVar2 = puVar2 + 0x30;
				} while (iVar1 <= x2);
			}
			y1 = y1 + 1;
		} while (y1 <= y2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3FillDiags__Fv()
 // line 553, offset 0x80149624
	/* begin block 1 */
		// Start line: 554
		// Start offset: 0x80149624
		// Variables:
	// 		int j; // $s6
	// 		int v; // $s0
	/* end block 1 */
	// End offset: 0x8014971C
	// End Line: 578

	/* begin block 2 */
		// Start line: 1121
	/* end block 2 */
	// End Line: 1122

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3FillDiags__Fv(void)

{
	long lVar1;
	int iVar2;
	ushort *puVar3;
	ushort *puVar4;
	int iVar5;
	ushort *puVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	iVar7 = 0;
	do {
		puVar6 = dungeon;
		iVar5 = -0x7ff1bedc;
		do {
			puVar4 = (ushort *)(iVar7 + (int)puVar6);
			puVar3 = (ushort *)(iVar7 + iVar5);
			iVar2 = (uint)*puVar4 * 8 + (uint)*puVar3 * 4 + (uint)puVar4[1] * 2 + (uint)puVar3[1];
			if (iVar2 == 6) {
				lVar1 = ENG_random__Fl(2);
				if (lVar1 == 0) {
					*puVar4 = 1;
				}
				else {
					puVar3[1] = 1;
				}
			}
			if (iVar2 == 9) {
				lVar1 = ENG_random__Fl(2);
				if (lVar1 == 0) {
					*(undefined2 *)(iVar7 + iVar5) = 1;
				}
				else {
					*(undefined2 *)((int)puVar6 + iVar7 + 2) = 1;
				}
			}
			iVar5 = iVar5 + 0x60;
			puVar6 = puVar6 + 0x30;
		} while (iVar5 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
		iVar7 = iVar8 * 2;
	} while (iVar8 < 0x27);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3FillSingles__Fv()
 // line 583, offset 0x80149750
	/* begin block 1 */
		// Start line: 584
		// Start offset: 0x80149750
		// Variables:
	// 		int i; // $t4
	// 		int j; // $t5
	// 		int v; // $v1
	/* end block 1 */
	// End offset: 0x80149814
	// End Line: 605

	/* begin block 2 */
		// Start line: 1196
	/* end block 2 */
	// End Line: 1197

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3FillSingles__Fv(void)

{
	ushort *puVar1;
	ushort *puVar2;
	ushort *puVar3;
	ushort *puVar4;
	ushort *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 1;
	do {
		iVar7 = 1;
		iVar6 = -0x7ff1be7c;
		puVar5 = dungeon;
		puVar4 = dungeon;
		do {
			puVar4 = puVar4 + 0x30;
			puVar3 = puVar4 + iVar8;
			puVar1 = puVar5 + iVar8;
			if ((((*puVar3 == 0) &&
					 (puVar2 = (ushort *)(iVar8 * 2 + iVar6),
					 (uint)puVar1[-1] + (uint)puVar3[-1] + (uint)puVar2[-1] == 3)) &&
					((uint)*puVar1 + (uint)*puVar2 == 2)) &&
				 ((uint)puVar1[1] + (uint)puVar3[1] + (uint)puVar2[1] == 3)) {
				*puVar3 = 1;
			}
			iVar6 = iVar6 + 0x60;
			puVar5 = puVar5 + 0x30;
			iVar7 = iVar7 + 1;
		} while (iVar7 < 0x27);
		iVar8 = iVar8 + 1;
	} while (iVar8 < 0x27);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3FillStraights__Fv()
 // line 610, offset 0x8014981c
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x8014981C
		// Variables:
	// 		int i; // $s3
	// 		int j; // $s2
	// 		int xc; // $a1
	// 		int xs; // $s6
	// 		int yc; // $a0
	// 		int ys; // stack offset -48
	// 		int k; // $s0
	/* end block 1 */
	// End offset: 0x80149B94
	// End Line: 712

	/* begin block 2 */
		// Start line: 1247
	/* end block 2 */
	// End Line: 1248

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3FillStraights__Fv(void)

{
	bool bVar1;
	long lVar2;
	int iVar3;
	ushort *puVar4;
	ushort *puVar5;
	ushort *puVar6;
	int iVar7;
	int iVar8;
	ushort *puVar9;
	ushort *puVar10;
	int iVar11;
	int local_30;
	
	iVar11 = 0;
	iVar7 = 0;
	local_30 = 0;
	do {
		iVar3 = 0;
		iVar8 = 0;
		puVar9 = dungeon;
		do {
			if ((puVar9[iVar7] == 0) && ((puVar9 + iVar7)[1] == 1)) {
				if (iVar3 == 0) {
					iVar11 = iVar8;
				}
				iVar3 = iVar3 + 1;
			}
			else {
				bVar1 = 3 < iVar3;
				iVar3 = 0;
				if (bVar1) {
					lVar2 = ENG_random__Fl(2);
					if ((lVar2 != 0) && (iVar11 < iVar8)) {
						puVar4 = dungeon + iVar11 * 0x30;
						iVar3 = iVar11;
						do {
							lVar2 = ENG_random__Fl(2);
							puVar4[iVar7] = (ushort)lVar2;
							iVar3 = iVar3 + 1;
							puVar4 = puVar4 + 0x30;
						} while (iVar3 < iVar8);
					}
					iVar3 = 0;
				}
			}
			iVar8 = iVar8 + 1;
			puVar9 = puVar9 + 0x30;
		} while (iVar8 < 0x25);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x27);
	iVar7 = 0;
	do {
		iVar3 = 0;
		iVar8 = 0;
		puVar9 = dungeon;
		do {
			if ((puVar9[iVar7] == 1) && ((puVar9 + iVar7)[1] == 0)) {
				if (iVar3 == 0) {
					iVar11 = iVar8;
				}
				iVar3 = iVar3 + 1;
			}
			else {
				bVar1 = 3 < iVar3;
				iVar3 = 0;
				if (bVar1) {
					lVar2 = ENG_random__Fl(2);
					if ((lVar2 != 0) && (iVar11 < iVar8)) {
						puVar4 = dungeon + iVar11 * 0x30;
						iVar3 = iVar11;
						do {
							lVar2 = ENG_random__Fl(2);
							puVar4[iVar7 + 1] = (ushort)lVar2;
							iVar3 = iVar3 + 1;
							puVar4 = puVar4 + 0x30;
						} while (iVar3 < iVar8);
					}
					iVar3 = 0;
				}
			}
			iVar8 = iVar8 + 1;
			puVar9 = puVar9 + 0x30;
		} while (iVar8 < 0x25);
		iVar7 = iVar7 + 1;
		iVar3 = 0;
	} while (iVar7 < 0x27);
	puVar4 = dungeon;
	puVar9 = puVar4;
	do {
		puVar9 = puVar9 + 0x30;
		iVar11 = 0;
		iVar7 = 0;
		puVar6 = puVar4;
		puVar10 = puVar9;
		do {
			if ((*puVar6 == 0) && (*puVar10 == 1)) {
				if (iVar11 == 0) {
					local_30 = iVar7;
				}
				iVar11 = iVar11 + 1;
			}
			else {
				bVar1 = 3 < iVar11;
				iVar11 = 0;
				if (bVar1) {
					lVar2 = ENG_random__Fl(2);
					if ((lVar2 != 0) && (local_30 < iVar7)) {
						puVar5 = puVar4 + local_30;
						iVar11 = local_30;
						do {
							lVar2 = ENG_random__Fl(2);
							*puVar5 = (ushort)lVar2;
							iVar11 = iVar11 + 1;
							puVar5 = puVar5 + 1;
						} while (iVar11 < iVar7);
					}
					iVar11 = 0;
				}
			}
			puVar10 = puVar10 + 1;
			iVar7 = iVar7 + 1;
			puVar6 = puVar6 + 1;
		} while (iVar7 < 0x25);
		iVar3 = iVar3 + 1;
		puVar4 = puVar4 + 0x30;
	} while (iVar3 < 0x27);
	iVar11 = 0;
	puVar9 = dungeon;
	iVar7 = 0;
	do {
		puVar9 = puVar9 + 0x30;
		iVar3 = 0;
		iVar8 = 0;
		puVar4 = puVar9;
		do {
			if ((*(short *)((int)dungeon + iVar8 * 2 + iVar7) == 1) && (*puVar4 == 0)) {
				if (iVar3 == 0) {
					local_30 = iVar8;
				}
				iVar3 = iVar3 + 1;
			}
			else {
				bVar1 = 3 < iVar3;
				iVar3 = 0;
				if (bVar1) {
					lVar2 = ENG_random__Fl(2);
					if ((lVar2 != 0) && (local_30 < iVar8)) {
						puVar6 = puVar9 + local_30;
						iVar3 = local_30;
						do {
							lVar2 = ENG_random__Fl(2);
							*puVar6 = (ushort)lVar2;
							iVar3 = iVar3 + 1;
							puVar6 = puVar6 + 1;
						} while (iVar3 < iVar8);
					}
					iVar3 = 0;
				}
			}
			iVar8 = iVar8 + 1;
			puVar4 = puVar4 + 1;
		} while (iVar8 < 0x25);
		iVar11 = iVar11 + 1;
		iVar7 = iVar7 + 0x60;
	} while (iVar11 < 0x27);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3Edges__Fv()
 // line 717, offset 0x80149bc8
	/* begin block 1 */
		// Start line: 718
		// Start offset: 0x80149BC8
		// Variables:
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x80149C00
	// End Line: 722

	/* begin block 2 */
		// Start line: 1478
	/* end block 2 */
	// End Line: 1479

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3Edges__Fv(void)

{
	ushort *puVar1;
	int iVar2;
	
	iVar2 = 0x27;
	puVar1 = dungeon + 0x777;
	do {
		*puVar1 = 0;
		iVar2 = iVar2 + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < iVar2);
	iVar2 = 0xea0;
	do {
		*(undefined2 *)((int)dungeon + iVar2 + 0x4e) = 0;
		iVar2 = iVar2 + -0x60;
	} while (-1 < iVar2);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_L3GetFloorArea__Fv()
 // line 727, offset 0x80149c08
	/* begin block 1 */
		// Start line: 728
		// Start offset: 0x80149C08
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	// 		int gfa; // $a2
	/* end block 1 */
	// End offset: 0x80149C50
	// End Line: 736

	/* begin block 2 */
		// Start line: 1498
	/* end block 2 */
	// End Line: 1499

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_L3GetFloorArea__Fv(void)

{
	ushort *puVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar3 = 0;
	do {
		iVar2 = 0;
		puVar1 = dungeon;
		do {
			iVar2 = iVar2 + 1;
			iVar4 = iVar4 + (uint)puVar1[iVar3];
			puVar1 = puVar1 + 0x30;
		} while (iVar2 < 0x28);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x28);
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3MakeMegas__Fv()
 // line 741, offset 0x80149c58
	/* begin block 1 */
		// Start line: 742
		// Start offset: 0x80149C58
		// Variables:
	// 		int v; // $a2
	/* end block 1 */
	// End offset: 0x80149D6C
	// End Line: 769

	/* begin block 2 */
		// Start line: 1523
	/* end block 2 */
	// End Line: 1524

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3MakeMegas__Fv(void)

{
	long lVar1;
	int iVar2;
	int iVar3;
	ushort *puVar4;
	ushort *puVar5;
	int iVar6;
	
	iVar6 = 0;
	puVar4 = dungeon;
	iVar2 = -0x7ff1bedc;
	do {
		do {
			iVar3 = (uint)*(ushort *)(iVar6 + (int)puVar4) * 8 + (uint)*(ushort *)(iVar6 + iVar2) * 4 +
							(uint)((ushort *)(iVar6 + (int)puVar4))[1] * 2 + (uint)((ushort *)(iVar6 + iVar2))[1];
			if (iVar3 == 6) {
				lVar1 = ENG_random__Fl(2);
				iVar3 = 5;
				if (lVar1 == 0) {
					iVar3 = 0xc;
				}
			}
			if (iVar3 == 9) {
				lVar1 = ENG_random__Fl(2);
				iVar3 = 0xe;
				if (lVar1 == 0) {
					iVar3 = 0xd;
				}
			}
			puVar5 = puVar4 + 0x30;
			*(ushort *)(iVar6 + (int)puVar4) = (ushort)(&L3ConvTbl)[iVar3];
			puVar4 = puVar5;
			iVar2 = iVar2 + 0x60;
		} while ((int)puVar5 < -0x7ff1b09c);
		*(undefined2 *)((int)dungeon + iVar6 + 0xea0) = 8;
		iVar6 = iVar6 + 2;
		puVar4 = dungeon;
		iVar2 = -0x7ff1bedc;
	} while (iVar6 < 0x4e);
	iVar2 = 0x1140;
	do {
		*(undefined2 *)((int)dungeon + iVar2 + 0x4e) = 8;
		iVar2 = iVar2 + -0x60;
	} while (-1 < iVar2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3River__Fv()
 // line 774, offset 0x80149d94
	/* begin block 1 */
		// Start line: 775
		// Start offset: 0x80149D94
		// Variables:
	// 		int rx; // $s0
	// 		int ry; // $s2
	// 		int px; // $a1
	// 		int py; // $a2
	// 		int dir; // $s1
	// 		int pdir; // $fp
	// 		int nodir; // stack offset -104
	// 		int nodir2; // $s3
	// 		int dircheck; // $s4
	// 		int river[3][100]; // stack offset -1304
	// 		int rivercnt; // $s5
	// 		int riveramt; // stack offset -96
	// 		int i; // $t1
	// 		int trys; // stack offset -88
	// 		int found; // $t0
	// 		int bridge; // $s0
	// 		int lpcnt; // $s2
	// 		int bail; // $s3
	/* end block 1 */
	// End offset: 0x8014A788
	// End Line: 980

	/* begin block 2 */
		// Start line: 1602
	/* end block 2 */
	// End Line: 1603

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3River__Fv(void)

{
	ushort uVar1;
	bool bVar2;
	ushort *puVar3;
	int iVar4;
	int *piVar5;
	int iVar6;
	int *piVar7;
	uint uVar8;
	long lVar9;
	uint uVar10;
	int iVar11;
	int iVar12;
	uint uVar13;
	int iVar14;
	int iVar15;
	uint uVar16;
	int iVar17;
	int v;
	undefined4 *puVar18;
	uint uVar19;
	uint uVar20;
	int aiStack1304 [199];
	undefined4 auStack508 [101];
	uint local_68;
	int local_60;
	int local_58;
	int iStack80;
	int iStack76;
	int *piStack72;
	uint uStack68;
	long lStack64;
	uint uStack60;
	uint uStack56;
	uint uStack52;
	ushort *puStack48;
	
	uVar13 = 0;
	uVar19 = 0;
	v = 0;
	lVar9 = 0;
	puStack48 = dungeon;
	piStack72 = aiStack1304;
	uStack60 = 1;
	uStack56 = 2;
	local_68 = 0;
	local_60 = 0;
	local_58 = 0;
	do {
		uVar8 = 0;
		if (3 < local_60) {
			return;
		}
		uVar10 = 3;
		do {
			if (199 < local_58) break;
			iVar11 = 0;
			iVar14 = 0;
			v = 0;
			uVar1 = dungeon[0][0];
			local_58 = local_58 + 1;
			while (3 < (uint)uVar1 - 0x19) {
				if (99 < v) {
					return;
				}
				uStack68 = uVar8;
				lStack64 = lVar9;
				uStack52 = uVar10;
				iVar11 = ENG_random__Fl(0x28);
				iVar14 = ENG_random__Fl(0x28);
				v = v + 1;
				uVar8 = uStack68;
				lVar9 = lStack64;
				uVar10 = uStack52;
				if ((uint)puStack48[iVar11 * 0x30 + iVar14] - 0x19 < 4) break;
				puVar3 = dungeon + iVar11 * 0x30;
				do {
					if (0x27 < iVar14) break;
					iVar11 = iVar11 + 1;
					puVar3 = puVar3 + 0x30;
					if (0x27 < iVar11) {
						iVar11 = 0;
						iVar14 = iVar14 + 1;
						puVar3 = dungeon;
					}
				} while (3 < (uint)puVar3[iVar14] - 0x19);
				uVar1 = puStack48[iVar11 * 0x30 + iVar14];
				uVar8 = uStack68;
				lVar9 = lStack64;
				uVar10 = uStack52;
			}
			if (99 < v) {
				return;
			}
			uVar1 = puStack48[iVar11 * 0x30 + iVar14];
			if (uVar1 == 0x1a) {
				uVar13 = 0;
				local_68 = 1;
				v = 0x26;
LAB_80149ffc:
				piStack72[200] = v;
			}
			else {
				if (0x1a < uVar1) {
					if (uVar1 == 0x1b) {
						uVar13 = 1;
						v = 0x29;
						local_68 = 0;
					}
					else {
						if (uVar1 != 0x1c) goto LAB_8014a004;
						uVar13 = 2;
						v = 0x27;
						local_68 = 3;
					}
					goto LAB_80149ffc;
				}
				if (uVar1 == 0x19) {
					uVar13 = 3;
					v = 0x28;
					local_68 = 2;
					goto LAB_80149ffc;
				}
			}
LAB_8014a004:
			v = 1;
			uVar16 = 4;
			iVar17 = 0;
			puVar18 = auStack508;
			piVar5 = piStack72 + 1;
			*piStack72 = iVar11;
			piStack72[100] = iVar14;
			bVar2 = true;
			uVar20 = uVar19;
			do {
				uVar19 = uVar20;
				if (!bVar2) break;
				iVar4 = iVar11;
				iVar6 = iVar14;
				if (iVar17 != 0) goto LAB_8014a09c;
				iStack80 = iVar11;
				iStack76 = iVar14;
				uStack68 = uVar8;
				lStack64 = lVar9;
				uStack52 = uVar10;
				uVar13 = ENG_random__Fl(4);
				iVar4 = iStack80;
				iVar6 = iStack76;
				uVar8 = uStack68;
				lVar9 = lStack64;
				uVar10 = uStack52;
				while ((iVar17 = iVar17 + 1, uVar13 == local_68 || (uVar13 == uVar16))) {
LAB_8014a09c:
					uVar13 = uVar13 + 1 & 3;
				}
				iVar15 = iVar14;
				if ((uVar13 == 0) && (iVar15 = iVar14, 0 < iVar14)) {
					iVar15 = iVar14 + -1;
				}
				if ((uVar13 == uStack60) && (iVar15 < 0x28)) {
					iVar15 = iVar15 + 1;
				}
				iVar12 = iVar11;
				if ((uVar13 == uStack56) && (iVar12 = iVar11, iVar11 < 0x28)) {
					iVar12 = iVar11 + 1;
				}
				if ((uVar13 == uVar10) && (0 < iVar12)) {
					iVar12 = iVar12 + -1;
				}
				iVar11 = iVar4;
				iVar14 = iVar6;
				uVar19 = uVar20;
				if (puStack48[iVar12 * 0x30 + iVar15] == 7) {
					iVar17 = 0;
					if ((int)uVar13 < 2) {
						uStack68 = uVar8;
						lStack64 = lVar9;
						uStack52 = uVar10;
						uVar19 = ENG_random__Fl(2);
						piVar5[200] = (uVar19 & 0xff) + 0x11;
					}
					else {
						uStack68 = uVar8;
						lStack64 = lVar9;
						uStack52 = uVar10;
						uVar19 = ENG_random__Fl(2);
						piVar5[200] = (uVar19 & 0xff) + 0xf;
					}
					puVar18 = puVar18 + 1;
					*piVar5 = iVar12;
					piVar5[100] = iVar15;
					piVar5 = piVar5 + 1;
					v = v + 1;
					if (((uVar13 == 0) && (uVar20 == uStack56)) ||
						 ((uVar13 == uStack52 && (uVar20 == uStack60)))) {
						if (2 < v) {
							*puVar18 = 0x16;
						}
						uVar16 = 2;
						if (uVar13 == 0) {
							uVar16 = 1;
							goto LAB_8014a220;
						}
LAB_8014a230:
						if ((uVar13 == uStack56) && (uVar20 == uStack60)) goto LAB_8014a240;
					}
					else {
LAB_8014a220:
						if ((uVar13 != 0) || (uVar20 != uStack52)) goto LAB_8014a230;
LAB_8014a240:
						if (2 < v) {
							*puVar18 = 0x15;
						}
						uVar16 = 3;
						if (uVar13 == 0) {
							uVar16 = 1;
						}
					}
					if (((uVar13 == uStack60) && (uVar20 == uStack56)) ||
						 ((uVar13 == uStack52 && (uVar20 == 0)))) {
						if (2 < v) {
							*puVar18 = 0x14;
						}
						uVar16 = (uint)(uVar13 != 1) << 1;
					}
					if (((uVar13 == uStack60) && (uVar20 == uStack52)) ||
						 ((uVar8 = uStack68, lVar9 = lStack64, uVar10 = uStack52, iVar11 = iVar12,
							iVar14 = iVar15, uVar19 = uVar13, uVar13 == uStack56 &&
							(uVar8 = uStack68, lVar9 = lStack64, uVar10 = uStack52, iVar11 = iVar12,
							iVar14 = iVar15, uVar19 = uVar13, uVar20 == 0)))) {
						if (2 < v) {
							*puVar18 = 0x13;
						}
						uVar16 = -(uint)(uVar13 != 1) & 3;
						uVar8 = uStack68;
						lVar9 = lStack64;
						uVar10 = uStack52;
						iVar11 = iVar12;
						iVar14 = iVar15;
						uVar19 = uVar13;
					}
				}
				bVar2 = v < 100;
				uVar20 = uVar19;
			} while (iVar17 < 4);
			if (((uVar13 == 0) && ((puStack48 + iVar11 * 0x30 + iVar14)[-1] == 10)) &&
				 ((puStack48 + iVar11 * 0x30 + iVar14)[-2] == 8)) {
				piVar5 = piStack72 + v;
				piVar5[100] = iVar14 + -1;
				*piVar5 = iVar11;
				piVar5[200] = 0x18;
				if (uVar19 == uStack56) {
					auStack508[v] = 0x16;
				}
				uVar8 = 1;
				if (uVar19 == uVar10) {
					auStack508[v] = 0x15;
				}
			}
			if (((uVar13 == uStack60) && ((uint)(puStack48 + iVar11 * 0x30 + iVar14)[1] == uStack56)) &&
				 ((puStack48 + iVar11 * 0x30 + iVar14)[2] == 8)) {
				piVar5 = piStack72 + v;
				piVar5[100] = iVar14 + 1;
				*piVar5 = iVar11;
				piVar5[200] = 0x2a;
				if (uVar19 == uStack56) {
					auStack508[v] = 0x14;
				}
				uVar8 = 1;
				if (uVar19 == uVar10) {
					auStack508[v] = 0x13;
				}
			}
			if (uVar13 == uStack56) {
				if ((*(short *)(iVar14 * 2 + iVar11 * 0x60 + -0x7ff1bedc) == 4) &&
					 (*(short *)(iVar14 * 2 + iVar11 * 0x60 + -0x7ff1be7c) == 8)) {
					piVar5 = piStack72 + v;
					*piVar5 = iVar11 + 1;
					piVar5[100] = iVar14;
					piVar5[200] = 0x2b;
					if (uVar19 == 0) {
						auStack508[v] = 0x13;
					}
					uVar8 = 1;
					if (uVar19 == uStack60) {
						auStack508[v] = 0x15;
					}
				}
			}
			if (uVar13 == uVar10) {
				if ((*(short *)((int)PTR_ARRAY_800e4064 + iVar14 * 2 + iVar11 * 0x60) == 9) &&
					 (*(short *)(SkelChamTrans3 + iVar14 * 2 + iVar11 * 0x60) == 8)) {
					piVar5 = piStack72 + v;
					*piVar5 = iVar11 + -1;
					piVar5[100] = iVar14;
					piVar5[200] = 0x17;
					if (uVar19 == 0) {
						auStack508[v] = 0x14;
					}
					uVar8 = 1;
					if (uVar19 == uStack60) {
						auStack508[v] = 0x16;
					}
				}
			}
		} while (uVar8 == 0);
		if (uVar8 == uStack60) {
			if (v < 7) {
				uVar8 = 0;
			}
			uVar10 = 0;
			if (uVar8 == uStack60) {
				iVar11 = 0;
LAB_8014a54c:
				do {
					if (0x1d < iVar11) break;
					lVar9 = ENG_random__Fl(v);
					piVar5 = piStack72 + lVar9;
					iVar11 = iVar11 + 1;
					if (((piVar5[200] - 0xfU < 2) && ((puStack48 + *piVar5 * 0x30 + piVar5[100])[-1] == 7)) &&
						 ((puStack48 + *piVar5 * 0x30 + piVar5[100])[1] == 7)) {
						uVar10 = 1;
					}
					piVar5 = piStack72 + lVar9;
					if (piVar5[200] - 0x11U < 2) {
						if ((*(short *)((int)PTR_ARRAY_800e4064 + piVar5[100] * 2 + *piVar5 * 0x60) == 7) &&
							 (*(short *)(piVar5[100] * 2 + *piVar5 * 0x60 + -0x7ff1bedc) == 7)) {
							uVar10 = 2;
						}
					}
					if (0 < v) {
						piVar7 = piStack72 + lVar9;
						piVar5 = piStack72;
						do {
							if (uVar10 == 0) goto LAB_8014a54c;
							if (uVar10 == uStack60) {
								if (((piVar7[100] + -1 == piVar5[100]) || (piVar7[100] + 1 == piVar5[100])) &&
									 (*piVar7 == *piVar5)) {
									uVar10 = 0;
								}
							}
							if (uVar10 == uStack56) {
								if (((*piVar7 + -1 == *piVar5) || (*piVar7 + 1 == *piVar5)) &&
									 (piVar7[100] == piVar5[100])) {
									uVar10 = 0;
								}
							}
							piVar5 = piVar5 + 1;
						} while ((int)piVar5 < (int)(piStack72 + v));
					}
				} while (uVar10 == 0);
				if (uVar10 != 0) {
					if (uVar10 == uStack60) {
						iVar11 = 0x2c;
					}
					else {
						iVar11 = 0x2d;
					}
					piStack72[lVar9 + 200] = iVar11;
					lVar9 = 0;
					local_60 = local_60 + 1;
					piVar5 = piStack72;
					if (-1 < v) {
						do {
							lVar9 = lVar9 + 1;
							puStack48[*piVar5 * 0x30 + piVar5[100]] = (ushort)piVar5[200];
							piVar5 = piVar5 + 1;
						} while (lVar9 <= v);
					}
				}
			}
		}
		if (199 < local_58) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_L3SpawnEdge__FiiPi(int x /*$s0*/, int y /*$s2*/, int *totarea /*$s3*/)
 // line 987, offset 0x8014a7bc
	/* begin block 1 */
		// Start line: 988
		// Start offset: 0x8014A7BC
		// Variables:
	// 		unsigned char i; // $s1
	// 		static unsigned char spawntable[15]; // offset 0x801486b4
	/* end block 1 */
	// End offset: 0x8014AA28
	// End Line: 1012

	/* begin block 2 */
		// Start line: 2060
	/* end block 2 */
	// End Line: 2061

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_L3SpawnEdge__FiiPi(int x,int y,int *totarea)

{
	byte bVar1;
	ushort uVar2;
	int iVar3;
	uint uVar4;
	
	if ((((*totarea < 0x29) && (-1 < x)) && (-1 < y)) && ((x < 0x28 && (y < 0x28)))) {
		uVar2 = dungeon[x * 0x30 + y];
		uVar4 = (uint)uVar2;
		if ((uVar2 & 0x80) != 0) {
			return 0;
		}
		if (uVar2 < 0x10) {
			dungeon[x * 0x30 + y] = uVar2 | 0x80;
			bVar1 = (&DAT_801486b4)[uVar4 & 0xff];
			*totarea = *totarea + 1;
			if (((bVar1 & 8) != 0) && (iVar3 = DRLG_L3SpawnEdge__FiiPi(x,y + -1,totarea), iVar3 == 1)) {
				return 1;
			}
			if ((((&DAT_801486b4)[uVar4 & 0xff] & 4) != 0) &&
				 (iVar3 = DRLG_L3SpawnEdge__FiiPi(x,y + 1,totarea), iVar3 == 1)) {
				return 1;
			}
			if ((((&DAT_801486b4)[uVar4 & 0xff] & 2) != 0) &&
				 (iVar3 = DRLG_L3SpawnEdge__FiiPi(x + 1,y,totarea), iVar3 == 1)) {
				return 1;
			}
			if ((((&DAT_801486b4)[uVar4 & 0xff] & 1) != 0) &&
				 (iVar3 = DRLG_L3SpawnEdge__FiiPi(x + -1,y,totarea), iVar3 == 1)) {
				return 1;
			}
			if ((((&DAT_801486b4)[uVar4 & 0xff] & 0x80) != 0) &&
				 (iVar3 = DRLG_L3Spawn__FiiPi(x,y + -1,totarea), iVar3 == 1)) {
				return 1;
			}
			if ((((&DAT_801486b4)[uVar4 & 0xff] & 0x40) != 0) &&
				 (iVar3 = DRLG_L3Spawn__FiiPi(x,y + 1,totarea), iVar3 == 1)) {
				return 1;
			}
			if ((((&DAT_801486b4)[uVar4 & 0xff] & 0x20) != 0) &&
				 (iVar3 = DRLG_L3Spawn__FiiPi(x + 1,y,totarea), iVar3 == 1)) {
				return 1;
			}
			if (((&DAT_801486b4)[uVar4 & 0xff] & 0x10) == 0) {
				return 0;
			}
			iVar3 = DRLG_L3Spawn__FiiPi(x + -1,y,totarea);
			if (iVar3 != 1) {
				return 0;
			}
		}
	}
	return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_L3Spawn__FiiPi(int x /*$s0*/, int y /*$s1*/, int *totarea /*$s2*/)
 // line 1017, offset 0x8014aa48
	/* begin block 1 */
		// Start line: 1018
		// Start offset: 0x8014AA48
		// Variables:
	// 		unsigned char i; // $s3
	// 		static unsigned char spawntable[15]; // offset 0x801486c4
	/* end block 1 */
	// End offset: 0x8014AC34
	// End Line: 1047

	/* begin block 2 */
		// Start line: 2125
	/* end block 2 */
	// End Line: 2126

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_L3Spawn__FiiPi(int x,int y,int *totarea)

{
	ushort uVar1;
	int iVar2;
	uint uVar3;
	
	if ((((*totarea < 0x29) && (-1 < x)) && (-1 < y)) && ((x < 0x28 && (y < 0x28)))) {
		uVar1 = dungeon[x * 0x30 + y];
		uVar3 = (uint)uVar1;
		if ((uVar1 & 0x80) != 0) {
			return 0;
		}
		dungeon[x * 0x30 + y] = uVar1 | 0x80;
		*totarea = *totarea + 1;
		if ((uVar3 & 0xff) == 8) {
			iVar2 = DRLG_L3Spawn__FiiPi(x + 1,y,totarea);
			if (((iVar2 != 1) && (iVar2 = DRLG_L3Spawn__FiiPi(x + -1,y,totarea), iVar2 != 1)) &&
				 (iVar2 = DRLG_L3Spawn__FiiPi(x,y + 1,totarea), iVar2 != 1)) {
				iVar2 = DRLG_L3Spawn__FiiPi(x,y + -1,totarea);
				if (iVar2 != 1) {
					return 0;
				}
				return 1;
			}
		}
		else {
			if ((((&DAT_801486c4)[uVar3 & 0xff] & 8) != 0) &&
				 (iVar2 = DRLG_L3SpawnEdge__FiiPi(x,y + -1,totarea), iVar2 == 1)) {
				return 1;
			}
			if ((((&DAT_801486c4)[uVar3 & 0xff] & 4) != 0) &&
				 (iVar2 = DRLG_L3SpawnEdge__FiiPi(x,y + 1,totarea), iVar2 == 1)) {
				return 1;
			}
			if ((((&DAT_801486c4)[uVar3 & 0xff] & 2) != 0) &&
				 (iVar2 = DRLG_L3SpawnEdge__FiiPi(x + 1,y,totarea), iVar2 == 1)) {
				return 1;
			}
			if (((&DAT_801486c4)[uVar3 & 0xff] & 1) == 0) {
				return 0;
			}
			iVar2 = DRLG_L3SpawnEdge__FiiPi(x + -1,y,totarea);
			if (iVar2 != 1) {
				return 0;
			}
		}
	}
	return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3Pool__Fv()
 // line 1052, offset 0x8014ac54
	/* begin block 1 */
		// Start line: 1053
		// Start offset: 0x8014AC54
		// Variables:
	// 		int i; // $t0
	// 		int j; // $a0
	// 		int found; // $s0
	// 		int dunx; // $s1
	// 		int duny; // $s2
	// 		int totarea; // stack offset -40
	// 		int poolchance; // $a0
	// 		unsigned char k; // $v1
	// 		static unsigned char poolsub[15]; // offset 0x801486d4
	/* end block 1 */
	// End offset: 0x8014AE78
	// End Line: 1100

	/* begin block 2 */
		// Start line: 2198
	/* end block 2 */
	// End Line: 2199

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3Pool__Fv(void)

{
	byte bVar1;
	ushort uVar2;
	int iVar3;
	long lVar4;
	uint uVar5;
	uint uVar6;
	ushort *puVar7;
	ushort *puVar8;
	uint uVar9;
	int iVar10;
	int x;
	int y;
	ushort *puVar11;
	int local_28 [2];
	
	y = 0;
	do {
		x = 0;
		puVar11 = dungeon;
		do {
			uVar2 = puVar11[y];
			if (uVar2 == 8) {
				puVar11[y] = uVar2 | 0x80;
				local_28[0] = 1;
				if (x + 1 < 0x28) {
					iVar3 = DRLG_L3Spawn__FiiPi(x + 1,y,local_28);
				}
				else {
					iVar3 = 1;
				}
				if (x + -1 < 1) {
					iVar10 = 1;
				}
				else {
					iVar10 = 1;
					if (iVar3 == 0) {
						iVar10 = DRLG_L3Spawn__FiiPi(x + -1,y,local_28);
					}
				}
				if (y + 1 < 0x28) {
					iVar3 = 1;
					if (iVar10 == 0) {
						iVar3 = DRLG_L3Spawn__FiiPi(x,y + 1,local_28);
					}
				}
				else {
					iVar3 = 1;
				}
				if (y + -1 < 1) {
					iVar10 = 1;
				}
				else {
					iVar10 = 1;
					if (iVar3 == 0) {
						iVar10 = DRLG_L3Spawn__FiiPi(x,y + -1,local_28);
					}
				}
				lVar4 = ENG_random__Fl(100);
				uVar9 = y - local_28[0];
				if ((int)uVar9 < y + local_28[0]) {
					do {
						uVar6 = x - local_28[0];
						if ((int)uVar6 < x + local_28[0]) {
							puVar8 = dungeon + uVar6 * 0x30;
							do {
								puVar7 = puVar8 + uVar9;
								if ((((((*puVar7 & 0x80) != 0) && (uVar9 < 0x28)) &&
										 (uVar5 = (uint)*puVar7 & 0x7f, uVar6 < 0x28)) &&
										((*puVar7 = (ushort)uVar5, 4 < local_28[0] && (lVar4 < 0x19)))) && (iVar10 == 0)
									 ) {
									bVar1 = *(byte *)(uVar5 + 0x801486d4);
									if ((bVar1 != 0) && (bVar1 < 0x26)) {
										*puVar7 = (ushort)bVar1;
									}
									lavapool = '\x01';
								}
								uVar6 = uVar6 + 1;
								puVar8 = puVar8 + 0x30;
							} while ((int)uVar6 < x + local_28[0]);
						}
						uVar9 = uVar9 + 1;
					} while ((int)uVar9 < y + local_28[0]);
				}
			}
			x = x + 1;
			puVar11 = puVar11 + 0x30;
		} while (x < 0x28);
		y = y + 1;
	} while (y < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3PoolFix__Fv()
 // line 1105, offset 0x8014aea4
	/* begin block 1 */
		// Start line: 1106
		// Start offset: 0x8014AEA4
		// Variables:
	// 		int duny; // $t2
	/* end block 1 */
	// End offset: 0x8014B0BC
	// End Line: 1139

	/* begin block 2 */
		// Start line: 2333
	/* end block 2 */
	// End Line: 2334

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3PoolFix__Fv(void)

{
	char **ppcVar1;
	ushort *puVar2;
	ushort *puVar3;
	int iVar4;
	ushort *puVar5;
	int iVar6;
	char **ppcVar7;
	int iVar8;
	int iVar9;
	
	iVar9 = 0;
	do {
		iVar4 = iVar9 * 2;
		iVar6 = 0;
		puVar5 = dungeon;
		ppcVar7 = PTR_ARRAY_800e4064;
		iVar8 = -0x7ff1bedc;
		do {
			puVar3 = puVar5 + iVar9;
			ppcVar1 = (char **)(iVar4 + (int)ppcVar7);
			if (*puVar3 == 8) {
				if ((((((uint)*(ushort *)((int)ppcVar1 + -2) - 0x19 < 0x11) &&
							((uint)*(ushort *)ppcVar1 - 0x19 < 0x11)) &&
						 ((uint)*(ushort *)((int)ppcVar1 + 2) - 0x19 < 0x11)) &&
						(((uint)puVar3[-1] - 0x19 < 0x11 &&
						 (puVar2 = (ushort *)(iVar4 + iVar8), (uint)puVar3[1] - 0x19 < 0x11)))) &&
					 (((uint)puVar2[-1] - 0x19 < 0x11 &&
						(((uint)*puVar2 - 0x19 < 0x11 && ((uint)puVar2[1] - 0x19 < 0x11)))))) {
					*puVar3 = 0x21;
				}
				puVar3 = puVar5 + iVar9;
				if ((*puVar3 == 8) &&
					 ((((puVar2 = (ushort *)((int)PTR_ARRAY_800e4064 + iVar4 + iVar6),
							(uint)puVar2[-1] - 0x19 < 0x11 || ((uint)*puVar2 - 0x19 < 0x11)) ||
						 ((uint)puVar2[1] - 0x19 < 0x11)) ||
						((((uint)puVar3[-1] - 0x19 < 0x11 || ((uint)puVar3[1] - 0x19 < 0x11)) ||
						 ((puVar3 = (ushort *)(iVar4 + iVar6 + -0x7ff1bedc), (uint)puVar3[-1] - 0x19 < 0x11 ||
							(((uint)*puVar3 - 0x19 < 0x11 || ((uint)puVar3[1] - 0x19 < 0x11)))))))))) {
					puVar5[iVar9] = 0x21;
				}
			}
			puVar5 = puVar5 + 0x30;
			iVar6 = iVar6 + 0x60;
			iVar8 = iVar8 + 0x60;
			ppcVar7 = ppcVar7 + 0x18;
		} while ((int)puVar5 < -0x7ff1b03c);
		iVar9 = iVar9 + 1;
	} while (iVar9 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_L3PlaceMiniSet__FPCUciiiiii(unsigned char *miniset /*$s6*/, int tmin /*$s4*/, int tmax /*$a2*/, int cx /*$s7*/, int cy /*stack 16*/, int setview /*stack 20*/, int ldir /*stack 24*/)
 // line 1145, offset 0x8014b0c4
	/* begin block 1 */
		// Start line: 1146
		// Start offset: 0x8014B0C4
		// Variables:
	// 		int sx; // $s1
	// 		int sy; // $s0
	// 		int sw; // $s2
	// 		int sh; // $s3
	// 		int xx; // $a1
	// 		int yy; // $a3
	// 		int i; // $fp
	// 		int ii; // $t1
	// 		int numt; // stack offset -96
	// 		int found; // $t0
	// 		int trys; // $s4
	/* end block 1 */
	// End offset: 0x8014B3FC
	// End Line: 1284

	/* begin block 2 */
		// Start line: 2410
	/* end block 2 */
	// End Line: 2411

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_L3PlaceMiniSet__FPCUciiiiii
							(uchar *miniset,int tmin,int tmax,int cx,int cy,int setview,int ldir)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	long lVar5;
	int iVar6;
	int iVar7;
	byte *pbVar8;
	int iVar9;
	int iVar10;
	long lVar11;
	long lVar12;
	uint uVar13;
	uint uVar14;
	int iVar15;
	int iVar16;
	int local_60;
	
	bVar1 = *miniset;
	uVar13 = (uint)bVar1;
	bVar2 = miniset[1];
	uVar14 = (uint)bVar2;
	lVar12 = 0;
	lVar11 = 0;
	if (tmax == tmin) {
		local_60 = 1;
	}
	else {
		lVar5 = ENG_random__Fl(tmax - tmin);
		local_60 = lVar5 + tmin;
	}
	iVar16 = 0;
	if (0 < local_60) {
		do {
			lVar12 = ENG_random__Fl(0x28 - uVar13);
			lVar11 = ENG_random__Fl(0x28 - uVar14);
			iVar15 = 0;
			bVar3 = true;
			do {
				iVar15 = iVar15 + 1;
				if (!bVar3) {
					return 1;
				}
				bVar4 = true;
				if (((cx != -1) && ((int)(cx - uVar13) <= lVar12)) && (lVar12 <= cx + 0xc)) {
					lVar12 = ENG_random__Fl(0x28 - uVar13);
					lVar11 = ENG_random__Fl(0x28 - uVar14);
					bVar4 = false;
				}
				if (((cy != -1) && ((int)(cy - uVar14) <= lVar11)) && (lVar11 <= cy + 0xc)) {
					lVar12 = ENG_random__Fl(0x28 - uVar13);
					lVar11 = ENG_random__Fl(0x28 - uVar14);
					bVar4 = false;
				}
				iVar10 = 2;
				iVar9 = 0;
				if (bVar2 != 0) {
					do {
						if (!bVar4) break;
						iVar7 = 0;
						if (bVar1 != 0) {
							pbVar8 = miniset + iVar10;
							iVar6 = lVar12;
							do {
								if (!bVar4) break;
								if ((*pbVar8 != 0) &&
									 ((uint)dungeon[iVar6 * 0x30 + lVar11 + iVar9] != (uint)*pbVar8)) {
									bVar4 = false;
								}
								if (mydflags[(lVar11 + iVar9) * 0x28 + iVar6] != '\0') {
									bVar4 = false;
								}
								pbVar8 = pbVar8 + 1;
								iVar10 = iVar10 + 1;
								iVar7 = iVar7 + 1;
								iVar6 = iVar6 + 1;
							} while (iVar7 < (int)uVar13);
						}
						iVar9 = iVar9 + 1;
					} while (iVar9 < (int)uVar14);
				}
				if (bVar4) break;
				lVar12 = lVar12 + 1;
				if (lVar12 == 0x28 - uVar13) {
					lVar11 = lVar11 + 1;
					lVar12 = 0;
					if (lVar11 == 0x28 - uVar14) {
						lVar11 = 0;
					}
				}
				bVar3 = iVar15 < 200;
			} while (!bVar4);
			if (199 < iVar15) {
				return 1;
			}
			iVar15 = 0;
			iVar9 = uVar14 * uVar13 + 2;
			if (bVar2 != 0) {
				do {
					iVar10 = 0;
					if (bVar1 != 0) {
						pbVar8 = miniset + iVar9;
						do {
							if (*pbVar8 != 0) {
								dungeon[(lVar12 + iVar10) * 0x30 + lVar11 + iVar15] = (ushort)*pbVar8;
							}
							pbVar8 = pbVar8 + 1;
							iVar10 = iVar10 + 1;
							iVar9 = iVar9 + 1;
						} while (iVar10 < (int)uVar13);
					}
					iVar15 = iVar15 + 1;
				} while (iVar15 < (int)uVar14);
			}
			iVar16 = iVar16 + 1;
		} while (iVar16 < local_60);
	}
	if (setview == 1) {
		ViewX = lVar12 * 2 + 0x11;
		ViewY = lVar11 * 2 + 0x13;
	}
	if (ldir == 0) {
		LvlViewX = lVar12 * 2 + 0x11;
		LvlViewY = lVar11 * 2 + 0x13;
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3PlaceRndSet__FPCUci(unsigned char *miniset /*$fp*/, int rndper /*stack -136*/)
 // line 1289, offset 0x8014b430
	/* begin block 1 */
		// Start line: 1290
		// Start offset: 0x8014B430
		// Variables:
	// 		int sx; // $s1
	// 		int sy; // $s6
	// 		int sw; // $s2
	// 		int sh; // $s5
	// 		int xx; // $a0
	// 		int yy; // $a3
	// 		int ii; // $t1
	// 		int kk; // $s0
	// 		int found; // $t0
	/* end block 1 */
	// End offset: 0x8014B738
	// End Line: 1343

	/* begin block 2 */
		// Start line: 2719
	/* end block 2 */
	// End Line: 2720

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3PlaceRndSet__FPCUci(uchar *miniset,int rndper)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	long lVar4;
	int iVar5;
	int iVar6;
	byte *pbVar7;
	int iVar8;
	int iVar9;
	char **ppcVar10;
	int iVar11;
	uint uVar12;
	int iVar13;
	int iVar14;
	uint uVar15;
	int iVar16;
	ushort *puVar17;
	
	bVar1 = miniset[1];
	uVar15 = (uint)bVar1;
	iVar16 = 0;
	bVar2 = *miniset;
	uVar12 = (uint)bVar2;
	if (0 < (int)(0x28 - uVar15)) {
		do {
			iVar11 = 0;
			if (0 < (int)(0x28 - uVar12)) {
				iVar13 = iVar16 * 2;
				iVar14 = 0;
				ppcVar10 = PTR_ARRAY_800e4064;
				puVar17 = dungeon;
				do {
					bVar3 = true;
					iVar9 = 2;
					iVar8 = 0;
					if (bVar1 != 0) {
						do {
							if (!bVar3) break;
							iVar5 = 0;
							if (bVar2 != 0) {
								pbVar7 = miniset + iVar9;
								iVar6 = iVar11;
								do {
									if (!bVar3) break;
									if ((*pbVar7 != 0) &&
										 ((uint)dungeon[iVar6 * 0x30 + iVar16 + iVar8] != (uint)*pbVar7)) {
										bVar3 = false;
									}
									if (mydflags[(iVar16 + iVar8) * 0x28 + iVar6] != '\0') {
										bVar3 = false;
									}
									pbVar7 = pbVar7 + 1;
									iVar9 = iVar9 + 1;
									iVar5 = iVar5 + 1;
									iVar6 = iVar6 + 1;
								} while (iVar5 < (int)uVar12);
							}
							iVar8 = iVar8 + 1;
						} while (iVar8 < (int)uVar15);
					}
					iVar8 = uVar15 * uVar12 + 2;
					if ((uint)miniset[iVar8] - 0x54 < 0x11) {
						if (bVar3) {
							if ((uint)*(ushort *)(iVar13 + (int)ppcVar10) - 0x54 < 0x11) {
								bVar3 = false;
							}
							if ((0x53 < *(ushort *)(iVar13 + iVar14 + -0x7ff1bedc)) &&
								 (*(ushort *)(iVar13 + (int)ppcVar10) < 0x65)) {
								bVar3 = false;
							}
							if ((0x53 < (puVar17 + iVar16)[1]) &&
								 (*(ushort *)((int)PTR_ARRAY_800e4064 + iVar13 + iVar14) < 0x65)) {
								bVar3 = false;
							}
							if ((0x53 < (puVar17 + iVar16)[-1]) &&
								 (*(ushort *)((int)PTR_ARRAY_800e4064 + iVar13 + iVar14) < 0x65)) {
								bVar3 = false;
							}
							goto LAB_8014b660;
						}
					}
					else {
LAB_8014b660:
						if (((bVar3) && (lVar4 = ENG_random__Fl(100), lVar4 < rndper)) &&
							 (iVar9 = 0, bVar1 != 0)) {
							do {
								iVar5 = 0;
								if (bVar2 != 0) {
									pbVar7 = miniset + iVar8;
									do {
										if (*pbVar7 != 0) {
											dungeon[(iVar11 + iVar5) * 0x30 + iVar16 + iVar9] = (ushort)*pbVar7;
										}
										pbVar7 = pbVar7 + 1;
										iVar5 = iVar5 + 1;
										iVar8 = iVar8 + 1;
									} while (iVar5 < (int)uVar12);
								}
								iVar9 = iVar9 + 1;
							} while (iVar9 < (int)uVar15);
						}
					}
					puVar17 = puVar17 + 0x30;
					iVar14 = iVar14 + 0x60;
					iVar11 = iVar11 + 1;
					ppcVar10 = ppcVar10 + 0x18;
				} while (iVar11 < (int)(0x28 - uVar12));
			}
			iVar16 = iVar16 + 1;
		} while (iVar16 < (int)(0x28 - uVar15));
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WoodVertU__Fii(int i /*$a0*/, int y /*$a1*/)
 // line 1389, offset 0x8014b76c
	/* begin block 1 */
		// Start line: 1390
		// Start offset: 0x8014B76C
	/* end block 1 */
	// End offset: 0x8014B810
	// End Line: 1401

	/* begin block 2 */
		// Start line: 2954
	/* end block 2 */
	// End Line: 2955

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WoodVertU__Fii(int i,int y)

{
	ushort uVar1;
	uchar uVar2;
	
	uVar2 = '\0';
	if (((0x16 < (uint)*(ushort *)(y * 2 + i * 0x60 + -0x7ff1bedc) - 0x82) &&
			(uVar2 = '\0', 0x16 < (uint)*(ushort *)((int)PTR_ARRAY_800e4064 + y * 2 + i * 0x60) - 0x82))
		 && (((uVar1 = dungeon[i * 0x30 + y], uVar1 == 7 ||
					(((uVar1 == 10 || (uVar1 == 0x7e)) || (uVar1 == 0x81)))) ||
				 ((uVar1 == 0x86 || (uVar2 = '\0', uVar1 == 0x88)))))) {
		uVar2 = '\x01';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WoodVertD__Fii(int i /*$a0*/, int y /*$a1*/)
 // line 1406, offset 0x8014b818
	/* begin block 1 */
		// Start line: 1407
		// Start offset: 0x8014B818
	/* end block 1 */
	// End offset: 0x8014B8AC
	// End Line: 1416

	/* begin block 2 */
		// Start line: 2988
	/* end block 2 */
	// End Line: 2989

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WoodVertD__Fii(int i,int y)

{
	ushort uVar1;
	uchar uVar2;
	
	uVar2 = '\0';
	if (((0x16 < (uint)*(ushort *)(y * 2 + i * 0x60 + -0x7ff1bedc) - 0x82) &&
			(uVar2 = '\0', 0x16 < (uint)*(ushort *)((int)PTR_ARRAY_800e4064 + y * 2 + i * 0x60) - 0x82))
		 && ((uVar1 = dungeon[i * 0x30 + y], uVar1 == 7 ||
				 (((uVar1 == 2 || (uVar1 == 0x86)) || (uVar2 = '\0', uVar1 == 0x88)))))) {
		uVar2 = '\x01';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WoodHorizL__Fii(int x /*$a0*/, int j /*$a1*/)
 // line 1421, offset 0x8014b8b4
	/* begin block 1 */
		// Start line: 1422
		// Start offset: 0x8014B8B4
	/* end block 1 */
	// End offset: 0x8014B940
	// End Line: 1433

	/* begin block 2 */
		// Start line: 3018
	/* end block 2 */
	// End Line: 3019

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WoodHorizL__Fii(int x,int j)

{
	ushort uVar1;
	uchar uVar2;
	ushort *puVar3;
	
	puVar3 = dungeon + x * 0x30 + j;
	uVar2 = '\0';
	if (((0x16 < (uint)puVar3[1] - 0x82) && (uVar2 = '\0', 0x16 < (uint)puVar3[-1] - 0x82)) &&
		 (((uVar1 = *puVar3, uVar1 == 7 || (((uVar1 == 9 || (uVar1 == 0x79)) || (uVar1 == 0x7c)))) ||
			((uVar1 == 0x87 || (uVar2 = '\0', uVar1 == 0x89)))))) {
		uVar2 = '\x01';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WoodHorizR__Fii(int x /*$a0*/, int j /*$a1*/)
 // line 1438, offset 0x8014b948
	/* begin block 1 */
		// Start line: 1439
		// Start offset: 0x8014B948
	/* end block 1 */
	// End offset: 0x8014B9C4
	// End Line: 1448

	/* begin block 2 */
		// Start line: 3052
	/* end block 2 */
	// End Line: 3053

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WoodHorizR__Fii(int x,int j)

{
	ushort uVar1;
	uchar uVar2;
	ushort *puVar3;
	
	puVar3 = dungeon + x * 0x30 + j;
	uVar2 = '\0';
	if (((0x16 < (uint)puVar3[1] - 0x82) && (uVar2 = '\0', 0x16 < (uint)puVar3[-1] - 0x82)) &&
		 ((uVar1 = *puVar3, uVar1 == 7 ||
			(((uVar1 == 4 || (uVar1 == 0x87)) || (uVar2 = '\0', uVar1 == 0x89)))))) {
		uVar2 = '\x01';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFenceDoors__Fv()
 // line 1459, offset 0x8014b9cc
	/* begin block 1 */
		// Start line: 1460
		// Start offset: 0x8014B9CC
		// Variables:
	// 		int j; // $t0
	/* end block 1 */
	// End offset: 0x8014BAA8
	// End Line: 1478

	/* begin block 2 */
		// Start line: 3095
	/* end block 2 */
	// End Line: 3096

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddFenceDoors__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	do {
		iVar5 = 0;
		puVar3 = dungeon;
		iVar4 = -0x7ff1bedc;
		do {
			puVar2 = puVar3 + iVar6;
			if ((*puVar2 == 7) &&
				 ((((uint)*(ushort *)((int)PTR_ARRAY_800e4064 + iVar6 * 2 + iVar5) - 0x82 < 0x17 &&
					 (uVar1 = 0x92, (uint)*(ushort *)(iVar6 * 2 + iVar4) - 0x82 < 0x17)) ||
					((*puVar2 == 7 &&
					 (((uint)puVar2[-1] - 0x82 < 0x17 && (uVar1 = 0x93, (uint)puVar2[1] - 0x82 < 0x17))))))))
			{
				*puVar2 = uVar1;
			}
			puVar3 = puVar3 + 0x30;
			iVar5 = iVar5 + 0x60;
			iVar4 = iVar4 + 0x60;
		} while ((int)puVar3 < -0x7ff1b03c);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FenceDoorFix__Fv()
 // line 1490, offset 0x8014bab0
	/* begin block 1 */
		// Start line: 1491
		// Start offset: 0x8014BAB0
		// Variables:
	// 		int j; // $t3
	/* end block 1 */
	// End offset: 0x8014BC94
	// End Line: 1525

	/* begin block 2 */
		// Start line: 3154
	/* end block 2 */
	// End Line: 3155

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FenceDoorFix__Fv(void)

{
	ushort uVar1;
	ushort uVar2;
	short *psVar3;
	ushort *puVar4;
	int iVar5;
	char **ppcVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	iVar5 = 0;
	do {
		iVar7 = 0;
		puVar4 = dungeon;
		ppcVar6 = PTR_ARRAY_800e4064;
		do {
			psVar3 = (short *)(iVar5 + (int)puVar4);
			if (*(short *)(iVar5 + (int)puVar4) == 0x92) {
				uVar1 = *(ushort *)(iVar5 + iVar7 + -0x7ff1bedc);
				if ((((uint)uVar1 - 0x82 < 0x17) &&
						(uVar2 = *(ushort *)(iVar5 + (int)ppcVar6), (uint)uVar2 - 0x82 < 0x17)) &&
					 (((uVar1 == 0x82 ||
						 (((((uVar2 == 0x82 || (uVar1 == 0x84)) || (uVar2 == 0x84)) ||
							 ((uVar1 == 0x85 || (uVar2 == 0x85)))) || (uVar1 == 0x86)))) ||
						((((uVar2 == 0x86 || (uVar1 == 0x88)) || (uVar2 == 0x88)) ||
						 ((((uVar1 == 0x8a || (uVar2 == 0x8a)) || (uVar1 == 0x8c)) || (uVar2 == 0x8c))))))))
				goto LAB_8014bbb4;
				*(short *)(iVar5 + (int)puVar4) = 7;
			}
			else {
LAB_8014bbb4:
				if ((*psVar3 == 0x93) &&
					 (((uVar1 = psVar3[1], 0x16 < (uint)uVar1 - 0x82 ||
						 (uVar2 = psVar3[-1], 0x16 < (uint)uVar2 - 0x82)) ||
						(((((uVar1 != 0x83 && ((uVar2 != 0x83 && (uVar1 != 0x84)))) && (uVar2 != 0x84)) &&
							(((uVar1 != 0x85 && (uVar2 != 0x85)) && (uVar1 != 0x87)))) &&
						 ((((uVar2 != 0x87 && (uVar1 != 0x89)) &&
							 ((uVar2 != 0x89 && ((uVar1 != 0x8a && (uVar2 != 0x8a)))))) &&
							((uVar1 != 0x8b && (uVar2 != 0x8b)))))))))) {
					*psVar3 = 7;
				}
			}
			puVar4 = puVar4 + 0x30;
			iVar7 = iVar7 + 0x60;
			ppcVar6 = ppcVar6 + 0x18;
		} while ((int)puVar4 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
		iVar5 = iVar8 * 2;
		if (0x27 < iVar8) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3Wood__Fv()
 // line 1530, offset 0x8014bca4
	/* begin block 1 */
		// Start line: 1531
		// Start offset: 0x8014BCA4
		// Variables:
	// 		int i; // $s6
	// 		int j; // $s7
	// 		int x; // $s2
	// 		int y; // $s3
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		int rt; // stack offset -56
	// 		int rp; // $v1
	// 		int skip; // $s4
	// 		int x1; // $s0
	// 		int y1; // $s0
	// 		int x2; // $s1
	// 		int y2; // $s1
	/* end block 1 */
	// End offset: 0x8014C444
	// End Line: 1697

	/* begin block 2 */
		// Start line: 3234
	/* end block 2 */
	// End Line: 3235

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3Wood__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	undefined2 uVar3;
	ushort uVar4;
	long lVar5;
	long lVar6;
	ushort *puVar7;
	short *psVar8;
	ushort *puVar9;
	int iVar10;
	short sVar11;
	int y;
	ushort *puVar12;
	int x;
	int y_00;
	int y_01;
	int local_30;
	
	y_00 = 0;
	local_30 = 0;
	do {
		x = 0;
		puVar12 = dungeon;
		y_01 = 0;
		do {
			sVar11 = *(short *)(local_30 + (int)puVar12);
			if (sVar11 == 10) {
				lVar5 = ENG_random__Fl(2);
				if (lVar5 != 0) {
					y = x;
					if (*(short *)(local_30 + (int)puVar12) == 10) {
						puVar7 = dungeon + x * 0x30;
						y = x;
						do {
							puVar7 = puVar7 + 0x30;
							y = y + 1;
						} while (*(short *)(local_30 + (int)puVar7) == 10);
					}
					y = y + -1;
					if (0 < y - x) {
						*(undefined2 *)(local_30 + (int)puVar12) = 0x7f;
						iVar10 = x + 1;
						if (iVar10 < y) {
							puVar7 = dungeon + iVar10 * 0x30;
							do {
								lVar5 = ENG_random__Fl(2);
								if (lVar5 == 0) {
									uVar3 = 0x81;
								}
								else {
									uVar3 = 0x7e;
								}
								*(undefined2 *)(local_30 + (int)puVar7) = uVar3;
								iVar10 = iVar10 + 1;
								puVar7 = puVar7 + 0x30;
							} while (iVar10 < y);
						}
						*(undefined2 *)((int)dungeon + local_30 + y * 0x60) = 0x80;
					}
				}
				sVar11 = *(short *)(local_30 + (int)puVar12);
			}
			if ((sVar11 == 9) && (lVar5 = ENG_random__Fl(2), lVar5 != 0)) {
				y = y_00;
				if (*(short *)(local_30 + (int)puVar12) == 9) {
					psVar8 = (short *)((int)dungeon + y_00 * 2 + y_01);
					y = y_00;
					do {
						psVar8 = psVar8 + 1;
						y = y + 1;
					} while (*psVar8 == 9);
				}
				y = y + -1;
				if (0 < y - y_00) {
					*(undefined2 *)(local_30 + (int)puVar12) = 0x7b;
					iVar10 = y_00 + 1;
					if (iVar10 < y) {
						puVar7 = puVar12 + iVar10;
						do {
							lVar5 = ENG_random__Fl(2);
							uVar4 = 0x79;
							if (lVar5 == 0) {
								uVar4 = 0x7c;
							}
							*puVar7 = uVar4;
							puVar12[y] = 0x7a;
							iVar10 = iVar10 + 1;
							puVar7 = puVar7 + 1;
						} while (iVar10 < y);
					}
				}
			}
			psVar8 = (short *)(local_30 + (int)puVar12);
			if (((*psVar8 == 0xb) && (*(short *)(local_30 + y_01 + -0x7ff1bedc) == 10)) &&
				 (psVar8[1] == 9)) {
				lVar5 = ENG_random__Fl(2);
				y = x + 1;
				if (lVar5 != 0) {
					*psVar8 = 0x7d;
					if (*(short *)((int)dungeon + local_30 + y * 0x60) == 10) {
						puVar7 = dungeon + y * 0x30;
						do {
							puVar7 = puVar7 + 0x30;
							y = y + 1;
						} while (*(short *)(local_30 + (int)puVar7) == 10);
					}
					y = y + -1;
					iVar10 = x + 1;
					if (iVar10 < y) {
						puVar7 = dungeon + iVar10 * 0x30;
						do {
							lVar5 = ENG_random__Fl(2);
							if (lVar5 == 0) {
								uVar3 = 0x81;
							}
							else {
								uVar3 = 0x7e;
							}
							*(undefined2 *)(local_30 + (int)puVar7) = uVar3;
							iVar10 = iVar10 + 1;
							puVar7 = puVar7 + 0x30;
						} while (iVar10 < y);
					}
					iVar10 = y_00 + 1;
					*(undefined2 *)((int)dungeon + local_30 + y * 0x60) = 0x80;
					if (puVar12[iVar10] == 9) {
						psVar8 = (short *)((int)dungeon + iVar10 * 2 + y_01);
						do {
							psVar8 = psVar8 + 1;
							iVar10 = iVar10 + 1;
						} while (*psVar8 == 9);
					}
					iVar10 = iVar10 + -1;
					y = y_00 + 1;
					if (y < iVar10) {
						puVar7 = puVar12 + y;
						do {
							lVar5 = ENG_random__Fl(2);
							uVar4 = 0x79;
							if (lVar5 == 0) {
								uVar4 = 0x7c;
							}
							*puVar7 = uVar4;
							y = y + 1;
							puVar7 = puVar7 + 1;
						} while (y < iVar10);
					}
					puVar12[iVar10] = 0x7a;
				}
			}
			puVar12 = puVar12 + 0x30;
			x = x + 1;
			y_01 = y_01 + 0x60;
		} while (x < 0x27);
		y_00 = y_00 + 1;
		local_30 = local_30 + 2;
	} while (y_00 < 0x27);
	y_00 = 0;
	do {
		x = 0;
		puVar12 = dungeon;
		do {
			bVar1 = false;
			if ((puVar12[y_00] == 7) && (lVar5 = ENG_random__Fl(1), lVar5 == 0)) {
				uVar2 = SkipThemeRoom__Fii(x,y_00);
				bVar1 = uVar2 != '\0';
			}
			if (bVar1) {
				lVar5 = ENG_random__Fl(2);
				y_01 = y_00;
				if (lVar5 == 0) {
					while (uVar2 = WoodVertU__Fii(x,y_01), uVar2 != '\0') {
						y_01 = y_01 + -1;
					}
					y_01 = y_01 + 1;
					y = y_00;
					while( true ) {
						uVar2 = WoodVertD__Fii(x,y);
						if (uVar2 == '\0') break;
						y = y + 1;
					}
					puVar7 = puVar12 + y_01;
					y = y + -1;
					if ((1 < y - y_01) && (puVar12[y] != 7 && *puVar7 != 7)) {
						lVar6 = ENG_random__Fl((y - y_01) + -1);
						iVar10 = lVar6 + y_01;
						while (y_01 <= y) {
							if (y_01 != iVar10 + 1) {
								if (*puVar7 == 7) {
									lVar6 = ENG_random__Fl(2);
									uVar4 = 0x87;
									if (lVar6 == 0) {
										uVar4 = 0x89;
									}
									*puVar7 = uVar4;
								}
								uVar4 = *puVar7;
								if (uVar4 == 10) {
									*puVar7 = 0x83;
									uVar4 = *puVar7;
								}
								if (uVar4 == 0x7e) {
									*puVar7 = 0x85;
								}
								uVar4 = *puVar7;
								if (uVar4 == 0x81) {
									*puVar7 = 0x85;
									uVar4 = *puVar7;
								}
								if (uVar4 == 2) {
									*puVar7 = 0x8b;
								}
								uVar4 = *puVar7;
								if (uVar4 == 0x86) {
									*puVar7 = 0x8a;
									uVar4 = *puVar7;
								}
								if (uVar4 == 0x88) {
									*puVar7 = 0x8a;
								}
							}
							y_01 = y_01 + 1;
							puVar7 = puVar7 + 1;
						}
					}
				}
				y_01 = x;
				if (lVar5 == 1) {
					while (uVar2 = WoodHorizL__Fii(y_01,y_00), uVar2 != '\0') {
						y_01 = y_01 + -1;
					}
					y_01 = y_01 + 1;
					y = x;
					while (uVar2 = WoodHorizR__Fii(y,y_00), uVar2 != '\0') {
						y = y + 1;
					}
					puVar7 = dungeon + y_01 * 0x30;
					y = y + -1;
					if ((1 < y - y_01) && (dungeon[y * 0x30 + y_00] != 7 && puVar7[y_00] != 7)) {
						lVar5 = ENG_random__Fl((y - y_01) + -1);
						iVar10 = lVar5 + y_01;
						while (y_01 <= y) {
							if (y_01 != iVar10 + 1) {
								if (puVar7[y_00] == 7) {
									lVar5 = ENG_random__Fl(2);
									uVar4 = 0x86;
									if (lVar5 == 0) {
										uVar4 = 0x88;
									}
									puVar7[y_00] = uVar4;
								}
								puVar9 = puVar7 + y_00;
								uVar4 = *puVar9;
								if (uVar4 == 9) {
									*puVar9 = 0x82;
									uVar4 = *puVar9;
								}
								if (uVar4 == 0x79) {
									*puVar9 = 0x84;
								}
								uVar4 = *puVar9;
								if (uVar4 == 0x7c) {
									*puVar9 = 0x84;
									uVar4 = *puVar9;
								}
								if (uVar4 == 4) {
									*puVar9 = 0x8c;
								}
								uVar4 = *puVar9;
								if (uVar4 == 0x87) {
									*puVar9 = 0x8a;
									uVar4 = *puVar9;
								}
								if (uVar4 == 0x89) {
									*puVar9 = 0x8a;
								}
							}
							y_01 = y_01 + 1;
							puVar7 = puVar7 + 0x30;
						}
					}
				}
			}
			x = x + 1;
			puVar12 = puVar12 + 0x30;
		} while (x < 0x28);
		y_00 = y_00 + 1;
	} while (y_00 < 0x28);
	AddFenceDoors__Fv();
	FenceDoorFix__Fv();
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DRLG_L3Anvil__Fv()
 // line 1703, offset 0x8014c478
	/* begin block 1 */
		// Start line: 1704
		// Start offset: 0x8014C478
		// Variables:
	// 		int sx; // $s2
	// 		int sy; // $t3
	// 		int sw; // $s1
	// 		int sh; // $s3
	// 		int xx; // $a1
	// 		int yy; // $a3
	// 		int ii; // $t0
	// 		int found; // $a2
	// 		int trys; // $t4
	/* end block 1 */
	// End offset: 0x8014C6B0
	// End Line: 1770

	/* begin block 2 */
		// Start line: 3598
	/* end block 2 */
	// End Line: 3599

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DRLG_L3Anvil__Fv(void)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	uchar uVar4;
	long lVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	uint uVar12;
	uint uVar13;
	
	uVar4 = UCHAR_0Bh_80148865;
	uVar3 = L3ANVIL;
	uVar12 = (uint)L3ANVIL;
	uVar13 = (uint)UCHAR_0Bh_80148865;
	lVar5 = ENG_random__Fl(0x28 - uVar12);
	lVar6 = ENG_random__Fl(0x28 - uVar13);
	iVar11 = 0;
	bVar1 = true;
	do {
		iVar11 = iVar11 + 1;
		if (!bVar1) goto LAB_8014c5dc;
		bVar2 = true;
		iVar10 = 2;
		iVar9 = 0;
		if (uVar4 != '\0') {
			do {
				if (!bVar2) break;
				iVar8 = 0;
				if (uVar3 != '\0') {
					iVar7 = lVar5;
					do {
						if (!bVar2) break;
						if (((&L3ANVIL)[iVar10] != 0) &&
							 ((uint)dungeon[iVar7 * 0x30 + lVar6 + iVar9] != (uint)(&L3ANVIL)[iVar10])) {
							bVar2 = false;
						}
						if (mydflags[(lVar6 + iVar9) * 0x28 + iVar7] != '\0') {
							bVar2 = false;
						}
						iVar10 = iVar10 + 1;
						iVar8 = iVar8 + 1;
						iVar7 = iVar7 + 1;
					} while (iVar8 < (int)uVar12);
				}
				iVar9 = iVar9 + 1;
			} while (iVar9 < (int)uVar13);
		}
		if (bVar2) break;
		lVar5 = lVar5 + 1;
		if (lVar5 == 0x28 - uVar12) {
			lVar6 = lVar6 + 1;
			lVar5 = 0;
			if (lVar6 == 0x28 - uVar13) {
				lVar6 = 0;
			}
		}
		bVar1 = iVar11 < 200;
	} while (!bVar2);
	if (iVar11 < 200) {
		iVar11 = 0;
		iVar9 = uVar13 * uVar12 + 2;
		if (uVar4 != '\0') {
			do {
				iVar10 = 0;
				if (uVar3 != '\0') {
					iVar8 = lVar5;
					do {
						if ((&L3ANVIL)[iVar9] != 0) {
							dungeon[iVar8 * 0x30 + lVar6 + iVar11] = (ushort)(&L3ANVIL)[iVar9];
						}
						iVar9 = iVar9 + 1;
						iVar10 = iVar10 + 1;
						mydflags[(lVar6 + iVar11) * 0x28 + iVar8] =
								 mydflags[(lVar6 + iVar11) * 0x28 + iVar8] | 0x80;
						iVar8 = iVar8 + 1;
					} while (iVar10 < (int)uVar12);
				}
				iVar11 = iVar11 + 1;
			} while (iVar11 < (int)uVar13);
		}
		iVar11 = 0;
		setpc_x = lVar5;
		setpc_y = lVar6;
		setpc_w = uVar12;
		setpc_h = uVar13;
	}
	else {
LAB_8014c5dc:
		iVar11 = 1;
	}
	return iVar11;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FixL3Warp__Fv()
 // line 1776, offset 0x8014c6d0
	/* begin block 1 */
		// Start line: 1777
		// Start offset: 0x8014C6D0
		// Variables:
	// 		int j; // $t2
	/* end block 1 */
	// End offset: 0x8014C7B0
	// End Line: 1802

	/* begin block 2 */
		// Start line: 3785
	/* end block 2 */
	// End Line: 3786

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FixL3Warp__Fv(void)

{
	short *psVar1;
	ushort *puVar2;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	do {
		iVar5 = 0;
		puVar3 = dungeon;
		iVar4 = -0x7ff1bedc;
		do {
			puVar2 = puVar3 + iVar6;
			if ((((*puVar2 == 0x7d) && (psVar1 = (short *)(iVar6 * 2 + iVar4), *psVar1 == 0x7d)) &&
					(puVar2[1] == 0x7d)) && (psVar1[1] == 0x7d)) {
				*puVar2 = 0x9c;
				*psVar1 = 0x9b;
				puVar2[1] = 0x99;
				psVar1[1] = 0x9a;
				return;
			}
			if ((puVar3[iVar6] == 5) && (*(short *)((int)dungeon + iVar6 * 2 + iVar5 + 0x62) == 7)) {
				puVar3[iVar6] = 7;
			}
			puVar3 = puVar3 + 0x30;
			iVar5 = iVar5 + 0x60;
			iVar4 = iVar4 + 0x60;
		} while ((int)puVar3 < -0x7ff1b03c);
		iVar6 = iVar6 + 1;
		if (0x27 < iVar6) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ FixL3HallofHeroes__Fv()
 // line 1808, offset 0x8014c7b8
	/* begin block 1 */
		// Start line: 1809
		// Start offset: 0x8014C7B8
		// Variables:
	// 		int i; // $a2
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x8014C904
	// End Line: 1835

	/* begin block 2 */
		// Start line: 3849
	/* end block 2 */
	// End Line: 3850

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FixL3HallofHeroes__Fv(void)

{
	short *psVar1;
	undefined2 *puVar2;
	ushort *puVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	do {
		iVar6 = 0;
		puVar3 = dungeon;
		iVar5 = -0x7ff1bedc;
		do {
			if ((puVar3[iVar7] == 5) && (*(short *)(iVar7 * 2 + iVar5 + 2) == 7)) {
				puVar3[iVar7] = 7;
			}
			iVar5 = iVar5 + 0x60;
			iVar6 = iVar6 + 1;
			puVar3 = puVar3 + 0x30;
		} while (iVar6 < 0x28);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	iVar7 = 0;
	do {
		iVar6 = 0;
		puVar3 = dungeon;
		iVar5 = -0x7ff1bedc;
		do {
			puVar4 = puVar3 + iVar7;
			psVar1 = (short *)(iVar7 * 2 + iVar5);
			if (*puVar4 == 5) {
				if ((psVar1[1] == 0xc) && (*psVar1 == 7)) {
					*puVar4 = 7;
					puVar4[1] = 7;
					psVar1[1] = 7;
				}
				puVar4 = puVar3 + iVar7;
				if (((*puVar4 == 5) &&
						(puVar2 = (undefined2 *)(iVar7 * 2 + iVar6 + -0x7ff1bedc), puVar2[1] == 0xc)) &&
					 (puVar4[1] == 7)) {
					*puVar4 = 7;
					*puVar2 = 7;
					puVar2[1] = 7;
				}
			}
			puVar3 = puVar3 + 0x30;
			iVar6 = iVar6 + 0x60;
			iVar5 = iVar5 + 0x60;
		} while ((int)puVar3 < -0x7ff1b03c);
		iVar7 = iVar7 + 1;
	} while (iVar7 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3LockRec__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 1844, offset 0x8014c90c
	/* begin block 1 */
		// Start line: 1845
		// Start offset: 0x8014C90C
	/* end block 1 */
	// End offset: 0x8014C990
	// End Line: 1853

	/* begin block 2 */
		// Start line: 3918
	/* end block 2 */
	// End Line: 3919

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3LockRec__Fii(int x,int y)

{
	if (lockout[y + x * 0x28] != '\0') {
		lockout[y + x * 0x28] = '\0';
		lockoutcnt = lockoutcnt + 1;
		DRLG_L3LockRec__Fii(x,y + -1);
		DRLG_L3LockRec__Fii(x,y + 1);
		DRLG_L3LockRec__Fii(x + -1,y);
		DRLG_L3LockRec__Fii(x + 1,y);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DRLG_L3Lockout__Fv()
 // line 1857, offset 0x8014c9a8
	/* begin block 1 */
		// Start line: 1858
		// Start offset: 0x8014C9A8
		// Variables:
	// 		int i; // $a3
	// 		int j; // $v1
	// 		int t; // $s0
	// 		int fx; // $a0
	// 		int fy; // $a1
	/* end block 1 */
	// End offset: 0x8014CA54
	// End Line: 1879

	/* begin block 2 */
		// Start line: 3945
	/* end block 2 */
	// End Line: 3946

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DRLG_L3Lockout__Fv(void)

{
	int iVar1;
	int x;
	int y;
	uchar *puVar2;
	int iVar3;
	ushort *puVar4;
	int iVar5;
	
	x = 0;
	y = 0;
	iVar5 = 0;
	iVar1 = 0;
	do {
		iVar3 = 0;
		puVar2 = lockout;
		puVar4 = dungeon;
		do {
			if (puVar4[iVar1] == 0) {
				puVar2[iVar1] = '\0';
			}
			else {
				puVar2[iVar1] = '\x01';
				iVar5 = iVar5 + 1;
				x = iVar3;
				y = iVar1;
			}
			puVar2 = puVar2 + 0x28;
			iVar3 = iVar3 + 1;
			puVar4 = puVar4 + 0x30;
		} while (iVar3 < 0x28);
		iVar1 = iVar1 + 1;
	} while (iVar1 < 0x28);
	lockoutcnt = 0;
	DRLG_L3LockRec__Fii(x,y);
	return (uchar)(iVar5 == lockoutcnt);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3SetWalls__Fv()
 // line 1884, offset 0x8014ca68
	/* begin block 1 */
		// Start line: 1885
		// Start offset: 0x8014CA68
		// Variables:
	// 		int i; // $a2
	// 		int j; // $a3
	// 		int yy; // $t1

		/* begin block 1.1 */
			// Start line: 1889
			// Start offset: 0x8014CA68

			/* begin block 1.1.1 */
				// Start line: 1891
				// Start offset: 0x8014CA7C

				/* begin block 1.1.1.1 */
					// Start line: 1895
					// Start offset: 0x8014CA88

					/* begin block 1.1.1.1.1 */
						// Start line: 1895
						// Start offset: 0x8014CA98
						// Variables:
					// 		int v; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8014CAF8
					// End Line: 1913
				/* end block 1.1.1.1 */
				// End offset: 0x8014CB08
				// End Line: 1914
			/* end block 1.1.1 */
			// End offset: 0x8014CB08
			// End Line: 1915
		/* end block 1.1 */
		// End offset: 0x8014CB14
		// End Line: 1916
	/* end block 1 */
	// End offset: 0x8014CB14
	// End Line: 1916

	/* begin block 2 */
		// Start line: 4010
	/* end block 2 */
	// End Line: 4011

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3SetWalls__Fv(void)

{
	byte bVar1;
	int iVar2;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0x10;
	iVar5 = 0;
	while (iVar4 = 0, iVar5 < 0x28) {
		iVar2 = iVar6 * 8 + 0x3800;
		puVar3 = dungeon;
		while (iVar4 < 0x28) {
			if (((uint)puVar3[iVar5] - 7 < 2) || (puVar3[iVar5] == 0)) {
				bVar1 = (&dung_map[0].dFlags)[iVar2] | 0x20;
			}
			else {
				bVar1 = (&dung_map[0].dFlags)[iVar2] & 0xdf;
			}
			(&dung_map[0].dFlags)[iVar2] = bVar1;
			iVar2 = iVar2 + 0x700;
			puVar3 = puVar3 + 0x30;
			iVar4 = iVar4 + 1;
		}
		iVar6 = iVar6 + 2;
		iVar5 = iVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3__Fi(int entry /*$s6*/)
 // line 1919, offset 0x8014cb1c
	/* begin block 1 */
		// Start line: 1920
		// Start offset: 0x8014CB1C
		// Variables:
	// 		int x1; // $s3
	// 		int y1; // $s2
	// 		int x2; // $s0
	// 		int y2; // $s1
	// 		int sx1; // $a0
	// 		int i; // $a2
	// 		int j; // $a3
	// 		int found; // $s0
	// 		unsigned char genok; // $v0
	/* end block 1 */
	// End offset: 0x8014D20C
	// End Line: 2074

	/* begin block 2 */
		// Start line: 4076
	/* end block 2 */
	// End Line: 4077

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3__Fi(int entry)

{
	uchar uVar1;
	long lVar2;
	long lVar3;
	ushort *puVar4;
	int iVar5;
	uchar *puVar6;
	int iVar7;
	ushort *puVar8;
	int local_2c;
	int x1;
	
	lavapool = '\0';
	do {
		UPDATEPROGRESS__Fi(1);
		do {
			InitL3Dungeon__Fv();
			lVar2 = ENG_random__Fl(0x14);
			lVar3 = ENG_random__Fl(0x14);
			x1 = lVar2 + 10;
			local_2c = lVar3 + 10;
			DRLG_L3FillRoom__Fiiii(x1,local_2c,lVar2 + 0xc,lVar3 + 0xc);
			DRLG_L3CreateBlock__Fiiii(x1,local_2c,2,0);
			DRLG_L3CreateBlock__Fiiii(lVar2 + 0xc,local_2c,2,1);
			DRLG_L3CreateBlock__Fiiii(x1,lVar3 + 0xc,2,2);
			DRLG_L3CreateBlock__Fiiii(x1,local_2c,2,3);
			uVar1 = QuestStatus__Fi(10);
			if (uVar1 != '\0') {
				lVar2 = ENG_random__Fl(10);
				lVar3 = ENG_random__Fl(10);
				DRLG_L3FloorArea__Fiiii(lVar2 + 10,lVar3 + 10,lVar2 + 0x16,lVar3 + 0x16);
			}
			DRLG_L3FillDiags__Fv();
			DRLG_L3FillSingles__Fv();
			DRLG_L3FillStraights__Fv();
			DRLG_L3FillDiags__Fv();
			DRLG_L3Edges__Fv();
			local_2c = DRLG_L3GetFloorArea__Fv();
			if (local_2c < 600) {
				uVar1 = '\0';
			}
			else {
				uVar1 = DRLG_L3Lockout__Fv();
			}
		} while (uVar1 == '\0');
		DRLG_L3MakeMegas__Fv();
		if (entry == 0) {
			local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3UP,1,1,-1,-1,1,0);
			if (local_2c == 0) {
				local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3DOWN,1,1,-1,-1,0,1);
				if (local_2c == 0) {
					if (currlevel == '\t') {
						local_2c = 0;
						goto LAB_8014ce5c;
					}
					goto LAB_8014ce68;
				}
			}
		}
		else {
			if (entry == 1) {
				local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3UP,1,1,-1,-1,0,0);
				if (local_2c == 0) {
					local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3DOWN,1,1,-1,-1,1,1);
					ViewX = ViewX + 2;
					ViewY = ViewY + -2;
					if (local_2c == 0) {
						if (currlevel == '\t') {
							local_2c = 0;
LAB_8014ce5c:
							local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3HOLDWARP,1,1,-1,-1,local_2c,6);
						}
LAB_8014ce68:
						if ((local_2c == 0) && (uVar1 = QuestStatus__Fi(10), uVar1 != '\0')) {
							local_2c = DRLG_L3Anvil__Fv();
						}
					}
				}
			}
			else {
				local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3UP,1,1,-1,-1,0,0);
				if (local_2c == 0) {
					local_2c = DRLG_L3PlaceMiniSet__FPCUciiiiii(L3DOWN,1,1,-1,-1,0,1);
					if (local_2c == 0) {
						if (currlevel == '\t') {
							local_2c = 1;
							goto LAB_8014ce5c;
						}
						goto LAB_8014ce68;
					}
				}
			}
		}
		if ((local_2c != 1) && (DRLG_L3Pool__Fv(), lavapool != '\0')) {
			DRLG_L3PoolFix__Fv();
			FixL3Warp__Fv();
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE1,0x46);
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE2,0x46);
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE3,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE4,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE1,100);
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE2,100);
			DRLG_L3PlaceRndSet__FPCUci(L3ISLE5,0x5a);
			FixL3HallofHeroes__Fv();
			DRLG_L3River__Fv();
			uVar1 = QuestStatus__Fi(10);
			x1 = setpc_y;
			local_2c = setpc_x;
			if (uVar1 != '\0') {
				iVar5 = setpc_x * 0x60;
				iVar7 = setpc_y * 2;
				dungeon[setpc_x * 0x30 + setpc_y + 0x155] = 7;
				dungeon[local_2c * 0x30 + x1 + 0x185] = 7;
				iVar7 = iVar7 + iVar5 + -0x7ff1bb7c;
				dungeon[local_2c * 0x30 + x1 + 0x1b5] = 7;
				if ((uint)*(ushort *)(iVar7 + 10) - 0x11 < 2) {
					*(undefined2 *)(iVar7 + 10) = 0x2d;
				}
			}
			DRLG_PlaceThemeRooms__FiiiiUc(5,10,7,0,0);
			FixL3Dungeon__Fv();
			DRLG_L3Wood__Fv();
			DRLG_L3PlaceRndSet__FPCUci(L3TITE1,10);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE2,10);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE3,10);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE7,0x14);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE8,0x14);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE9,0x14);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE10,0x14);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE11,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE12,0x14);
			DRLG_L3PlaceRndSet__FPCUci(L3TITE13,0x14);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV1,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV2,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV3,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV4,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV5,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV6,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV7,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV8,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV9,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV10,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3CREV11,0x1e);
			DRLG_L3PlaceRndSet__FPCUci(L3XTRA1,0x19);
			DRLG_L3PlaceRndSet__FPCUci(L3XTRA2,0x19);
			DRLG_L3PlaceRndSet__FPCUci(L3XTRA3,0x19);
			DRLG_L3PlaceRndSet__FPCUci(L3XTRA4,0x19);
			DRLG_L3PlaceRndSet__FPCUci(L3XTRA5,0x19);
			DRLG_L3SetWalls__Fv();
			SetBlankL3Dungeon__Fv();
			local_2c = 0;
			do {
				x1 = 0;
				puVar6 = &pdungeon;
				puVar8 = dungeon;
				do {
					puVar4 = puVar8 + local_2c;
					puVar8 = puVar8 + 0x30;
					x1 = x1 + 1;
					puVar6[local_2c] = (uchar)*puVar4;
					puVar6 = puVar6 + 0x28;
				} while (x1 < 0x28);
				local_2c = local_2c + 1;
			} while (local_2c < 0x28);
			DRLG_Init_Globals__Fv();
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L3Pass3__Fv()
 // line 2081, offset 0x8014d238
	/* begin block 1 */
		// Start line: 2082
		// Start offset: 0x8014D238
		// Variables:
	// 		int i; // $s7
	// 		int j; // $fp
	// 		int xx; // $s1
	// 		int yy; // $s2
	// 		long v1; // $a2
	// 		long v2; // $s6
	// 		long v3; // $s4
	// 		long v4; // $s5
	// 		long lv; // $v0
	/* end block 1 */
	// End offset: 0x8014D41C
	// End Line: 2145

	/* begin block 2 */
		// Start line: 4432
	/* end block 2 */
	// End Line: 4433

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L3Pass3__Fv(void)

{
	int y;
	int iVar1;
	int x;
	int iVar2;
	short v;
	int x_00;
	int y_00;
	ushort *puVar3;
	short v_00;
	short v_01;
	short v_02;
	
	y = (int)s__800cece4;
	x = (int)s__800cece6;
	y_00 = 0;
	iVar1 = (int)s__800cece8;
	iVar2 = (int)s__800cecea._0_2_;
	do {
		x_00 = 0;
		do {
			SetDPiece__Fiis(x_00,y_00,(short)((uint)((y + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x_00 + 1,y_00,(short)((uint)((x + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x_00,y_00 + 1,(short)((uint)((iVar1 + 1) * 0x10000) >> 0x10));
			SetDPiece__Fiis(x_00 + 1,y_00 + 1,(short)((uint)((iVar2 + 1) * 0x10000) >> 0x10));
			x_00 = x_00 + 2;
		} while (x_00 < 0x60);
		y_00 = y_00 + 2;
	} while (y_00 < 0x60);
	y = 0x10;
	iVar1 = 0;
	do {
		x = 0x10;
		iVar2 = 0;
		puVar3 = dungeon;
		do {
			y_00 = ((uint)puVar3[iVar1] - 1) * 8;
			if ((int)((uint)puVar3[iVar1] - 1) < 0) {
				v = 0;
				v_02 = 0;
				v_00 = 0;
				v_01 = 0;
			}
			else {
				v = *(short *)(pMegaTiles + y_00) + 1;
				v_02 = *(short *)(s__800cecae + y_00) + 1;
				v_00 = *(short *)(s__800cecb0 + y_00) + 1;
				v_01 = *(short *)(s__800cecb2 + y_00) + 1;
			}
			SetDPiece__Fiis(x,y,v);
			SetDPiece__Fiis(x + 1,y,v_02);
			SetDPiece__Fiis(x,y + 1,v_00);
			SetDPiece__Fiis(x + 1,y + 1,v_01);
			x = x + 2;
			iVar2 = iVar2 + 1;
			puVar3 = puVar3 + 0x30;
		} while (iVar2 < 0x28);
		iVar1 = iVar1 + 1;
		y = y + 2;
	} while (iVar1 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateL3Dungeon__FUii(unsigned int rseed /*$a0*/, int entry /*$s0*/)
 // line 2153, offset 0x8014d450
	/* begin block 1 */
		// Start line: 2154
		// Start offset: 0x8014D450
	/* end block 1 */
	// End offset: 0x8014D4B4
	// End Line: 2211

	/* begin block 2 */
		// Start line: 4598
	/* end block 2 */
	// End Line: 4599

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateL3Dungeon__FUii(uint rseed,int entry)

{
	SetRndSeed__Fl(rseed);
	dminx = 0x10;
	dminy = 0x10;
	dmaxx = 0x50;
	dmaxy = 0x50;
	DRLG_InitTrans__Fv();
	DRLG_InitSetPC__Fv();
	DRLG_L3__Fi(entry);
	DRLG_L3Pass3__Fv();
	DRLG_SetPC__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadL3Dungeon__FPcii(char *sFileName /*$s0*/, int vx /*$a1*/, int vy /*$a2*/)
 // line 2218, offset 0x8014d4c8
	/* begin block 1 */
		// Start line: 2219
		// Start offset: 0x8014D4C8
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a2
	// 		int rw; // $t1
	// 		int rh; // $t2
	// 		unsigned char *pLevelMap; // $s0
	// 		unsigned char *lm; // $t0

		/* begin block 1.1 */
			// Start line: 2257
			// Start offset: 0x8014D5E0
		/* end block 1.1 */
		// End offset: 0x8014D638
		// End Line: 2281
	/* end block 1 */
	// End offset: 0x8014D638
	// End Line: 2281

	/* begin block 2 */
		// Start line: 4728
	/* end block 2 */
	// End Line: 4729

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadL3Dungeon__FPcii(char *sFileName,int vx,int vy)

{
	byte bVar1;
	byte bVar2;
	byte *pMap;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	byte *pbVar6;
	
	InitL3Dungeon__Fv();
	dminx = 0x10;
	dminy = 0x10;
	dmaxx = 0x50;
	dmaxy = 0x50;
	DRLG_InitTrans__Fv();
	pMap = GRL_LoadFileInMemSig__FPCcPUl(sFileName,(ulong *)0x0);
	pbVar6 = pMap + 4;
	bVar1 = pMap[2];
	bVar2 = *pMap;
	iVar5 = 0;
	if (bVar1 != 0) {
		do {
			iVar4 = 0;
			puVar3 = dungeon;
			if (bVar2 != 0) {
				do {
					if (*pbVar6 == 0) {
						puVar3[iVar5] = 7;
					}
					else {
						puVar3[iVar5] = (ushort)*pbVar6;
					}
					pbVar6 = pbVar6 + 2;
					iVar4 = iVar4 + 1;
					puVar3 = puVar3 + 0x30;
				} while (iVar4 < (int)(uint)bVar2);
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < (int)(uint)bVar1);
	}
	iVar5 = 0;
	do {
		iVar4 = 0;
		puVar3 = dungeon;
		do {
			if (puVar3[iVar5] == 0) {
				puVar3[iVar5] = 8;
			}
			iVar4 = iVar4 + 1;
			puVar3 = puVar3 + 0x30;
		} while (iVar4 < 0x2f);
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x2f);
	abyssx = 0x60;
	DRLG_L3Pass3__Fv();
	DRLG_Init_Globals__Fv();
	ViewX = 0x1f;
	ViewY = 0x53;
	SetMapMonsters__FPUcii(pMap,0,0);
	SetMapObjects__FPUcii(pMap,0,0);
	mem_free_dbg__FPv(pMap);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadPreL3Dungeon__FPcii(char *sFileName /*$s0*/, int vx /*$a1*/, int vy /*$a2*/)
 // line 2286, offset 0x8014d64c
	/* begin block 1 */
		// Start line: 2287
		// Start offset: 0x8014D64C
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a2
	// 		int rw; // $t1
	// 		int rh; // $t2
	// 		unsigned char *pLevelMap; // $t4
	// 		unsigned char *lm; // $t0

		/* begin block 1.1 */
			// Start line: 2322
			// Start offset: 0x8014D7DC
		/* end block 1.1 */
		// End offset: 0x8014D7E4
		// End Line: 2322
	/* end block 1 */
	// End offset: 0x8014D7E4
	// End Line: 2322

	/* begin block 2 */
		// Start line: 4870
	/* end block 2 */
	// End Line: 4871

/* WARNING: Removing unreachable block (ram,0x8014d75c) */
/* WARNING: Removing unreachable block (ram,0x8014d7a8) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadPreL3Dungeon__FPcii(char *sFileName,int vx,int vy)

{
	byte bVar1;
	byte bVar2;
	byte *p;
	undefined4 uVar3;
	ushort *puVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 uVar7;
	int iVar8;
	uchar *puVar9;
	byte *pbVar10;
	
	InitL3Dungeon__Fv();
	DRLG_InitTrans__Fv();
	p = GRL_LoadFileInMemSig__FPCcPUl(sFileName,(ulong *)0x0);
	pbVar10 = p + 4;
	bVar1 = p[2];
	bVar2 = *p;
	iVar8 = 0;
	if (bVar1 != 0) {
		do {
			iVar6 = 0;
			puVar4 = dungeon;
			if (bVar2 != 0) {
				do {
					if (*pbVar10 == 0) {
						puVar4[iVar8] = 7;
					}
					else {
						puVar4[iVar8] = (ushort)*pbVar10;
					}
					pbVar10 = pbVar10 + 2;
					iVar6 = iVar6 + 1;
					puVar4 = puVar4 + 0x30;
				} while (iVar6 < (int)(uint)bVar2);
			}
			iVar8 = iVar8 + 1;
		} while (iVar8 < (int)(uint)bVar1);
	}
	iVar8 = 0;
	do {
		iVar6 = 0;
		puVar4 = dungeon;
		do {
			if (puVar4[iVar8] == 0) {
				puVar4[iVar8] = 8;
			}
			iVar6 = iVar6 + 1;
			puVar4 = puVar4 + 0x30;
		} while (iVar6 < 0x2f);
		iVar8 = iVar8 + 1;
	} while (iVar8 < 0x2f);
	puVar9 = &pdungeon;
	puVar4 = dungeon;
	do {
		uVar3 = ((undefined4 *)puVar4)[1];
		uVar5 = ((undefined4 *)puVar4)[2];
		uVar7 = ((undefined4 *)puVar4)[3];
		*(undefined4 *)puVar9 = *(undefined4 *)puVar4;
		((undefined4 *)puVar9)[1] = uVar3;
		((undefined4 *)puVar9)[2] = uVar5;
		((undefined4 *)puVar9)[3] = uVar7;
		puVar4 = (ushort *)((undefined4 *)puVar4 + 4);
		puVar9 = (uchar *)((undefined4 *)puVar9 + 4);
	} while (puVar4 != dungeon + 800);
	mem_free_dbg__FPv(p);
	return;
}





