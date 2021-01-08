#include "THISDUST.H"
#include "GENDUNG.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FillSolidBlockTbls__Fv()
 // line 162, offset 0x80159edc
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x80159EDC
		// Variables:
	// 		unsigned long dwTiles; // stack offset -16
	// 		unsigned char *pSBFile; // $s0
	// 		unsigned char *pTmp; // $a2

		/* begin block 1.1 */
			// Start line: 195
			// Start offset: 0x80159FBC
			// Variables:
		// 		unsigned long d; // $a0

			/* begin block 1.1.1 */
				// Start line: 197
				// Start offset: 0x80159FC8
				// Variables:
			// 		unsigned char bv; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8015A03C
			// End Line: 204
		/* end block 1.1 */
		// End offset: 0x8015A044
		// End Line: 206

		/* begin block 1.2 */
			// Start line: 208
			// Start offset: 0x8015A044
		/* end block 1.2 */
		// End offset: 0x8015A054
		// End Line: 211
	/* end block 1 */
	// End offset: 0x8015A054
	// End Line: 211

	/* begin block 2 */
		// Start line: 324
	/* end block 2 */
	// End Line: 325

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FillSolidBlockTbls__Fv(void)

{
	byte bVar1;
	char *Name;
	uint uVar2;
	byte *pbVar3;
	byte *p;
	uint auStack16 [2];
	
	memset(&nBlockTable,0,0x801);
	memset(&nSolidTable,0,0x801);
	memset(&nMissileTable,0,0x801);
	memset(&nTrapTable,0,0x801);
	p = (byte *)0x0;
	switch(leveltype) {
	case '\0':
		Name = "Levels\\TownData\\Town.SOL";
		break;
	case '\x01':
		Name = "Levels\\L1Data\\L1.SOL";
		break;
	case '\x02':
		Name = "Levels\\L2Data\\L2.SOL";
		break;
	case '\x03':
		Name = "Levels\\L3Data\\L3.SOL";
		break;
	case '\x04':
		Name = "Levels\\L4Data\\L4.SOL";
		break;
	default:
		goto switchD_80159f60_caseD_5;
	}
	p = GRL_LoadFileInMemSig__FPCcPUl(Name,auStack16);
switchD_80159f60_caseD_5:
	uVar2 = 1;
	pbVar3 = p;
	while (uVar2 <= auStack16[0]) {
		bVar1 = *pbVar3;
		pbVar3 = pbVar3 + 1;
		if ((bVar1 & 1) != 0) {
			(&nSolidTable)[uVar2] = '\x01';
		}
		if ((bVar1 & 2) != 0) {
			(&nBlockTable)[uVar2] = '\x01';
		}
		if ((bVar1 & 4) != 0) {
			(&nMissileTable)[uVar2] = '\x01';
		}
		if ((bVar1 & 0x80) != 0) {
			(&nTrapTable)[uVar2] = '\x01';
		}
		uVar2 = uVar2 + 1;
	}
	ConvertdPiece__Fv();
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDungeonMicros__Fv()
 // line 222, offset 0x8015a068
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x8015A068
	/* end block 1 */
	// End offset: 0x8015A068
	// End Line: 223

	/* begin block 2 */
		// Start line: 449
	/* end block 2 */
	// End Line: 450

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetDungeonMicros__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_InitTrans__Fv()
 // line 229, offset 0x8015a070
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8015A070
		// Variables:
	// 		int x; // $a0
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x8015A0D4
	// End Line: 241

	/* begin block 2 */
		// Start line: 462
	/* end block 2 */
	// End Line: 463

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_InitTrans__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	do {
		iVar2 = 0x5f;
		iVar1 = iVar3 * 8 + 0x14c80;
		do {
			(&dung_map[0].dTransVal)[iVar1] = '\0';
			iVar2 = iVar2 + -1;
			iVar1 = iVar1 + -0x380;
		} while (-1 < iVar2);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x60);
	memset(&TransList,0,0x100);
	TransVal = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_RectTrans__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 248, offset 0x8015a0e4
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x8015A0E4
		// Variables:
	// 		int i; // $t0
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x8015A150
	// End Line: 255

	/* begin block 2 */
		// Start line: 503
	/* end block 2 */
	// End Line: 504

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_RectTrans__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int iVar2;
	
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				iVar1 = x1 * 0x380 + y1 * 8;
				iVar2 = x1;
				do {
					iVar2 = iVar2 + 1;
					(&dung_map[0].dTransVal)[iVar1] = TransVal;
					iVar1 = iVar1 + 0x380;
				} while (iVar2 <= x2);
			}
			y1 = y1 + 1;
		} while (y1 <= y2);
	}
	TransVal = TransVal + '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_CopyTrans__Fiiii(int sx /*$a0*/, int sy /*$a1*/, int dx /*$a2*/, int dy /*$a3*/)
 // line 262, offset 0x8015a158
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x8015A158
	/* end block 1 */
	// End offset: 0x8015A198
	// End Line: 264

	/* begin block 2 */
		// Start line: 529
	/* end block 2 */
	// End Line: 530

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_CopyTrans__Fiiii(int sx,int sy,int dx,int dy)

{
	dung_map[dx * 0x70 + dy].dTransVal = dung_map[sx * 0x70 + sy].dTransVal;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_ListTrans__FiPUc(int num /*$s2*/, unsigned char *List /*$s0*/)
 // line 270, offset 0x8015a1a0
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x8015A1A0
		// Variables:
	// 		int i; // $s1
	// 		unsigned char x1; // $a0
	// 		unsigned char y1; // $a1
	// 		unsigned char x2; // $a2
	// 		unsigned char y2; // $a3
	/* end block 1 */
	// End offset: 0x8015A1F8
	// End Line: 281

	/* begin block 2 */
		// Start line: 544
	/* end block 2 */
	// End Line: 545

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_ListTrans__FiPUc(int num,uchar *List)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;
	
	iVar5 = 0;
	if (0 < num) {
		do {
			bVar1 = *List;
			pbVar2 = List + 1;
			pbVar3 = List + 2;
			pbVar4 = List + 3;
			List = List + 4;
			iVar5 = iVar5 + 1;
			DRLG_RectTrans__Fiiii((uint)bVar1,(uint)*pbVar2,(uint)*pbVar3,(uint)*pbVar4);
		} while (iVar5 < num);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_AreaTrans__FiPUc(int num /*$s2*/, unsigned char *List /*$s0*/)
 // line 287, offset 0x8015a214
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8015A214
		// Variables:
	// 		int i; // $s1
	// 		unsigned char x1; // $a0
	// 		unsigned char y1; // $a1
	// 		unsigned char x2; // $a2
	// 		unsigned char y2; // $a3
	/* end block 1 */
	// End offset: 0x8015A288
	// End Line: 300

	/* begin block 2 */
		// Start line: 578
	/* end block 2 */
	// End Line: 579

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_AreaTrans__FiPUc(int num,uchar *List)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;
	int iVar5;
	
	iVar5 = 0;
	if (0 < num) {
		do {
			bVar1 = *List;
			pbVar2 = List + 1;
			pbVar3 = List + 2;
			pbVar4 = List + 3;
			List = List + 4;
			DRLG_RectTrans__Fiiii((uint)bVar1,(uint)*pbVar2,(uint)*pbVar3,(uint)*pbVar4);
			iVar5 = iVar5 + 1;
			TransVal = TransVal + -1;
		} while (iVar5 < num);
	}
	TransVal = TransVal + '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_InitSetPC__Fv()
 // line 307, offset 0x8015a2a4
	/* begin block 1 */
		// Start line: 308
		// Start offset: 0x8015A2A4
	/* end block 1 */
	// End offset: 0x8015A2B4
	// End Line: 312

	/* begin block 2 */
		// Start line: 620
	/* end block 2 */
	// End Line: 621

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_InitSetPC__Fv(void)

{
	setpc_x = 0;
	setpc_y = 0;
	setpc_w = 0;
	setpc_h = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_SetPC__Fv()
 // line 319, offset 0x8015a2bc
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x8015A2BC
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	// 		int x; // $t0
	// 		int y; // $t2
	// 		int w; // $a3
	// 		int h; // $t1
	/* end block 1 */
	// End offset: 0x8015A350
	// End Line: 330

	/* begin block 2 */
		// Start line: 643
	/* end block 2 */
	// End Line: 644

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_SetPC__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar5 = 0;
	iVar6 = setpc_w << 1;
	iVar8 = setpc_h << 1;
	iVar7 = setpc_x * 2 + 0x10;
	iVar1 = setpc_y * 2;
	if (0 < iVar8) {
		do {
			iVar4 = 0;
			if (0 < iVar6) {
				iVar2 = iVar1 + 0x10 + iVar5;
				iVar3 = iVar7;
				do {
					iVar4 = iVar4 + 1;
					dung_map[iVar3 * 0x70 + iVar2].dFlags = dung_map[iVar3 * 0x70 + iVar2].dFlags | 8;
					iVar3 = iVar7 + iVar4;
				} while (iVar4 < iVar6);
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < iVar8);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Make_SetPC__Fiiii(int x /*$a0*/, int y /*$a1*/, int w /*$a2*/, int h /*$a3*/)
 // line 336, offset 0x8015a35c
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x8015A35C
		// Variables:
	// 		int i; // $t0
	// 		int j; // $t1
	// 		int dx; // $a0
	// 		int dy; // $a1
	// 		int dh; // $a3
	// 		int dw; // $a2
	/* end block 1 */
	// End offset: 0x8015A3E0
	// End Line: 347

	/* begin block 2 */
		// Start line: 685
	/* end block 2 */
	// End Line: 686

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Make_SetPC__Fiiii(int x,int y,int w,int h)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	iVar3 = x * 2 + 0x10;
	if (0 < h << 1) {
		do {
			iVar4 = 0;
			if (0 < w << 1) {
				iVar1 = y * 2 + 0x10 + iVar5;
				iVar2 = iVar3;
				do {
					iVar4 = iVar4 + 1;
					dung_map[iVar2 * 0x70 + iVar1].dFlags = dung_map[iVar2 * 0x70 + iVar1].dFlags | 8;
					iVar2 = iVar3 + iVar4;
				} while (iVar4 < w << 1);
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < h << 1);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DRLG_WillThemeRoomFit__FiiiiiPiT5(int floor /*$s7*/, int x /*$s1*/, int y /*$fp*/, int minSize /*$s0*/, int maxSize /*stack 16*/, int *width /*stack 20*/, int *height /*stack 24*/)
 // line 380, offset 0x8015a3ec
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x8015A3EC
		// Variables:
	// 		int ii; // $a3
	// 		int xx; // $a0
	// 		int yy; // $a0
	// 		int xSmallest; // $v1
	// 		int ySmallest; // $t0
	// 		int xArray[20]; // stack offset -224
	// 		int yArray[20]; // stack offset -144
	// 		int xCount; // $s3
	// 		int yCount; // $s2
	// 		unsigned char yFlag; // $s5
	// 		unsigned char xFlag; // $s4
	/* end block 1 */
	// End offset: 0x8015A680
	// End Line: 452

	/* begin block 2 */
		// Start line: 777
	/* end block 2 */
	// End Line: 778

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DRLG_WillThemeRoomFit__FiiiiiPiT5
								(int floor,int x,int y,int minSize,int maxSize,int *width,int *height)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	ushort *puVar4;
	int *piVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int local_e0 [20];
	int local_90 [26];
	
	iVar9 = 0;
	iVar8 = 0;
	bVar2 = true;
	bVar1 = true;
	if ((x <= 0x28 - maxSize) || (uVar3 = '\0', y <= 0x28 - maxSize)) {
		uVar3 = SkipThemeRoom__Fii(x,y);
		if (uVar3 == '\0') {
LAB_8015a5ec:
			uVar3 = '\0';
		}
		else {
			memset(local_e0,0,0x50);
			memset(local_90,0,0x50);
			iVar7 = 0;
			if (0 < maxSize) {
				piVar5 = local_e0;
				do {
					if (bVar1) {
						if (x < x + maxSize) {
							puVar4 = dungeon + x * 0x30;
							iVar6 = x;
							do {
								if ((uint)puVar4[y + iVar7] == floor) {
									iVar9 = iVar9 + 1;
								}
								else {
									if (minSize <= iVar6) break;
									bVar1 = false;
								}
								iVar6 = iVar6 + 1;
								puVar4 = puVar4 + 0x30;
							} while (iVar6 < x + maxSize);
						}
						if (bVar1) {
							*piVar5 = iVar9;
							iVar9 = 0;
						}
					}
					if (bVar2) {
						if (y < y + maxSize) {
							puVar4 = dungeon + (x + iVar7) * 0x30 + y;
							iVar6 = y;
							do {
								if ((uint)*puVar4 == floor) {
									iVar8 = iVar8 + 1;
								}
								else {
									if (minSize <= iVar6) break;
									bVar2 = false;
								}
								iVar6 = iVar6 + 1;
								puVar4 = puVar4 + 1;
							} while (iVar6 < y + maxSize);
						}
						if (bVar2) {
							piVar5[0x14] = iVar8;
							iVar8 = 0;
						}
					}
					iVar7 = iVar7 + 1;
					piVar5 = piVar5 + 1;
				} while (iVar7 < maxSize);
			}
			iVar8 = 0;
			if (0 < minSize) {
				piVar5 = local_e0;
				do {
					if (*piVar5 < minSize) {
						return '\0';
					}
					iVar8 = iVar8 + 1;
					if (piVar5[0x14] < minSize) goto LAB_8015a5ec;
					piVar5 = piVar5 + 1;
				} while (iVar8 < minSize);
			}
			iVar8 = 0;
			if (0 < maxSize) {
				piVar5 = local_e0;
				do {
					iVar9 = *piVar5;
					if (iVar9 < minSize) break;
					iVar7 = piVar5[0x14];
					if (iVar7 < minSize) break;
					if (iVar9 < local_e0[0]) {
						local_e0[0] = iVar9;
					}
					if (iVar7 < local_90[0]) {
						local_90[0] = iVar7;
					}
					iVar8 = iVar8 + 1;
					piVar5 = piVar5 + 1;
				} while (iVar8 < maxSize);
			}
			uVar3 = '\x01';
			*width = local_e0[0] + -2;
			*height = local_90[0] + -2;
		}
	}
	return uVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_CreateThemeRoom__Fi(int themeIndex /*$s0*/)
 // line 463, offset 0x8015a6b4
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x8015A6B4
		// Variables:
	// 		int xx; // $a2
	// 		int yy; // $a3
	/* end block 1 */
	// End offset: 0x8015B6A4
	// End Line: 567

	/* begin block 2 */
		// Start line: 972
	/* end block 2 */
	// End Line: 973

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_CreateThemeRoom__Fi(int themeIndex)

{
	uchar uVar1;
	ushort uVar2;
	int iVar3;
	long lVar4;
	int iVar5;
	int iVar6;
	ushort *puVar7;
	
	uVar1 = leveltype;
	iVar6 = (&themeLoc)[themeIndex].y;
	if (iVar6 < iVar6 + (&themeLoc)[themeIndex].height) {
		do {
			iVar5 = (&themeLoc)[themeIndex].x;
			if (iVar5 < iVar5 + (&themeLoc)[themeIndex].width) {
				puVar7 = dungeon + iVar5 * 0x30;
				do {
					if (uVar1 == '\x02') {
						if ((((iVar6 == (&themeLoc)[themeIndex].y) && ((&themeLoc)[themeIndex].x <= iVar5)) &&
								(iVar5 <= (&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width)) ||
							 (((iVar6 == (&themeLoc)[themeIndex].y + -1 + (&themeLoc)[themeIndex].height &&
								 ((&themeLoc)[themeIndex].x <= iVar5)) &&
								(iVar5 <= (&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width)))) {
							puVar7[iVar6] = 2;
						}
						else {
							iVar3 = (&themeLoc)[themeIndex].x;
							if (iVar5 == iVar3) {
								if ((iVar6 < (&themeLoc)[themeIndex].y) ||
									 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height < iVar6)) {
									iVar3 = (&themeLoc)[themeIndex].x;
									goto LAB_8015a880;
								}
LAB_8015a8d8:
								uVar2 = 1;
							}
							else {
LAB_8015a880:
								if (((iVar5 == iVar3 + -1 + (&themeLoc)[themeIndex].width) &&
										((&themeLoc)[themeIndex].y <= iVar6)) &&
									 (iVar6 <= (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height))
								goto LAB_8015a8d8;
								uVar2 = 3;
							}
							puVar7[iVar6] = uVar2;
						}
					}
					if (uVar1 == '\x03') {
						iVar3 = (&themeLoc)[themeIndex].y;
						if (iVar6 == iVar3) {
							if ((iVar5 < (&themeLoc)[themeIndex].x) ||
								 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width < iVar5)) {
								iVar3 = (&themeLoc)[themeIndex].y;
								goto LAB_8015a958;
							}
LAB_8015a9b0:
							uVar2 = 0x86;
						}
						else {
LAB_8015a958:
							if (((iVar6 == iVar3 + -1 + (&themeLoc)[themeIndex].height) &&
									((&themeLoc)[themeIndex].x <= iVar5)) &&
								 (iVar5 <= (&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width))
							goto LAB_8015a9b0;
							iVar3 = (&themeLoc)[themeIndex].x;
							if (iVar5 == iVar3) {
								if ((iVar6 < (&themeLoc)[themeIndex].y) ||
									 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height < iVar6)) {
									iVar3 = (&themeLoc)[themeIndex].x;
									goto LAB_8015aa18;
								}
LAB_8015aa70:
								uVar2 = 0x89;
							}
							else {
LAB_8015aa18:
								if (((iVar5 == iVar3 + -1 + (&themeLoc)[themeIndex].width) &&
										((&themeLoc)[themeIndex].y <= iVar6)) &&
									 (iVar6 <= (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height))
								goto LAB_8015aa70;
								uVar2 = 7;
							}
						}
						puVar7[iVar6] = uVar2;
					}
					if (uVar1 == '\x04') {
						iVar3 = (&themeLoc)[themeIndex].y;
						if (iVar6 == iVar3) {
							if ((iVar5 < (&themeLoc)[themeIndex].x) ||
								 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width < iVar5)) {
								iVar3 = (&themeLoc)[themeIndex].y;
								goto LAB_8015aaf0;
							}
						}
						else {
LAB_8015aaf0:
							if (((iVar6 != iVar3 + -1 + (&themeLoc)[themeIndex].height) ||
									(iVar5 < (&themeLoc)[themeIndex].x)) ||
								 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width < iVar5)) {
								iVar3 = (&themeLoc)[themeIndex].x;
								if (iVar5 == iVar3) {
									if ((iVar6 < (&themeLoc)[themeIndex].y) ||
										 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height < iVar6)) {
										iVar3 = (&themeLoc)[themeIndex].x;
										goto LAB_8015abb0;
									}
LAB_8015ac08:
									uVar2 = 1;
								}
								else {
LAB_8015abb0:
									if (((iVar5 == iVar3 + -1 + (&themeLoc)[themeIndex].width) &&
											((&themeLoc)[themeIndex].y <= iVar6)) &&
										 (iVar6 <= (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height))
									goto LAB_8015ac08;
									uVar2 = 6;
								}
								puVar7[iVar6] = uVar2;
								goto LAB_8015ac20;
							}
						}
						puVar7[iVar6] = 2;
					}
LAB_8015ac20:
					iVar5 = iVar5 + 1;
					puVar7 = puVar7 + 0x30;
				} while (iVar5 < (&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width);
			}
			iVar6 = iVar6 + 1;
		} while (iVar6 < (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height);
	}
	if (leveltype == '\x02') {
		dungeon[(&themeLoc)[themeIndex].x * 0x30 + (&themeLoc)[themeIndex].y] = 8;
		*(undefined2 *)
		 ((int)PTR_ARRAY_800e4064 +
		 (&themeLoc)[themeIndex].y * 2 +
		 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60) = 7;
		(&DAT_800e40c2)
		[(&themeLoc)[themeIndex].x * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height]
				 = 9;
		*(undefined2 *)
		 ((int)MgToText34 +
		 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height) * 2 +
		 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60 + 0x3a) = 6;
	}
	if (leveltype == '\x03') {
		dungeon[(&themeLoc)[themeIndex].x * 0x30 + (&themeLoc)[themeIndex].y] = 0x96;
		*(undefined2 *)
		 ((int)PTR_ARRAY_800e4064 +
		 (&themeLoc)[themeIndex].y * 2 +
		 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60) = 0x97;
		(&DAT_800e40c2)
		[(&themeLoc)[themeIndex].x * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height]
				 = 0x98;
		*(undefined2 *)
		 ((int)MgToText34 +
		 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height) * 2 +
		 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60 + 0x3a) = 0x8a;
	}
	if (leveltype == '\x04') {
		dungeon[(&themeLoc)[themeIndex].x * 0x30 + (&themeLoc)[themeIndex].y] = 9;
		*(undefined2 *)
		 ((int)PTR_ARRAY_800e4064 +
		 (&themeLoc)[themeIndex].y * 2 +
		 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60) = 0x10;
		(&DAT_800e40c2)
		[(&themeLoc)[themeIndex].x * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height]
				 = 0xf;
		*(undefined2 *)
		 ((int)MgToText34 +
		 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height) * 2 +
		 ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60 + 0x3a) = 0xc;
	}
	if (leveltype == '\x02') {
		lVar4 = ENG_random__Fl(2);
		if (lVar4 == 0) {
			*(undefined2 *)
			 ((int)PTR_ARRAY_800e4064 +
			 ((&themeLoc)[themeIndex].y +
			 ((int)((&themeLoc)[themeIndex].height + ((uint)(&themeLoc)[themeIndex].height >> 0x1f)) >> 1)
			 ) * 2 + ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60) = 4;
		}
		else {
			if (lVar4 == 1) {
				(&DAT_800e40c2)
				[((&themeLoc)[themeIndex].x +
				 ((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)) >> 1)
				 ) * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height] = 5;
			}
		}
	}
	if (leveltype == '\x03') {
		lVar4 = ENG_random__Fl(2);
		if (lVar4 == 0) {
			*(undefined2 *)
			 ((int)PTR_ARRAY_800e4064 +
			 ((&themeLoc)[themeIndex].y +
			 ((int)((&themeLoc)[themeIndex].height + ((uint)(&themeLoc)[themeIndex].height >> 0x1f)) >> 1)
			 ) * 2 + ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60) = 0x93;
		}
		else {
			if (lVar4 == 1) {
				(&DAT_800e40c2)
				[((&themeLoc)[themeIndex].x +
				 ((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)) >> 1)
				 ) * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height] = 0x92;
			}
		}
	}
	if (leveltype == '\x04') {
		lVar4 = ENG_random__Fl(2);
		if (lVar4 == 0) {
			*(undefined2 *)
			 ((int)MgToText34 +
			 ((&themeLoc)[themeIndex].y +
			 ((int)((&themeLoc)[themeIndex].height + ((uint)(&themeLoc)[themeIndex].height >> 0x1f)) >> 1)
			 ) * 2 + ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60 + 0x3a) = 0x35;
			*(undefined2 *)
			 ((int)PTR_ARRAY_800e4064 +
			 ((&themeLoc)[themeIndex].y +
			 ((int)((&themeLoc)[themeIndex].height + ((uint)(&themeLoc)[themeIndex].height >> 0x1f)) >> 1)
			 ) * 2 + ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60) = 6;
			*(undefined2 *)
			 ((int)PTR_ARRAY_800e4064 +
			 ((&themeLoc)[themeIndex].y +
			 ((int)((&themeLoc)[themeIndex].height + ((uint)(&themeLoc)[themeIndex].height >> 0x1f)) >> 1)
			 ) * 2 + ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60 + 2) = 0x34;
			*(undefined2 *)
			 (s_2____800e4000 +
			 ((&themeLoc)[themeIndex].y +
			 ((int)((&themeLoc)[themeIndex].height + ((uint)(&themeLoc)[themeIndex].height >> 0x1f)) >> 1)
			 ) * 2 + ((&themeLoc)[themeIndex].x + (&themeLoc)[themeIndex].width) * 0x60 + 2) = 0x36;
		}
		else {
			if (lVar4 == 1) {
				*(undefined2 *)
				 ((int)MgToText34 +
				 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height) * 2 +
				 ((&themeLoc)[themeIndex].x +
				 ((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)) >> 1)
				 ) * 0x60 + 0x3a) = 0x39;
				(&DAT_800e40c2)
				[((&themeLoc)[themeIndex].x +
				 ((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)) >> 1)
				 ) * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height] = 6;
				dungeon[((&themeLoc)[themeIndex].x +
								((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)
											) >> 1)) * 0x30 +
								(&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height + 0x2f] = 0x38;
				(&DAT_800e40c0)
				[((&themeLoc)[themeIndex].x +
				 ((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)) >> 1)
				 ) * 0x30 + (&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height] = 0x3b;
				*(undefined2 *)
				 ((int)MgToText34 +
				 ((&themeLoc)[themeIndex].y + (&themeLoc)[themeIndex].height) * 2 +
				 ((&themeLoc)[themeIndex].x +
				 ((int)((&themeLoc)[themeIndex].width + ((uint)(&themeLoc)[themeIndex].width >> 0x1f)) >> 1)
				 ) * 0x60 + 0x38) = 0x3a;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_PlaceThemeRooms__FiiiiUc(int minSize /*$s6*/, int maxSize /*$s7*/, int floor /*$fp*/, int freq /*stack -56*/, int rndSize /*stack 16*/)
 // line 590, offset 0x8015b6b8
	/* begin block 1 */
		// Start line: 591
		// Start offset: 0x8015B6B8
		// Variables:
	// 		int i; // $s2
	// 		int j; // $s3
	// 		int themeW; // stack offset -64
	// 		int themeH; // stack offset -60

		/* begin block 1.1 */
			// Start line: 591
			// Start offset: 0x8015B6B8

			/* begin block 1.1.1 */
				// Start line: 602
				// Start offset: 0x8015B718

				/* begin block 1.1.1.1 */
					// Start line: 603
					// Start offset: 0x8015B724

					/* begin block 1.1.1.1.1 */
						// Start line: 603
						// Start offset: 0x8015B72C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 605
							// Start offset: 0x8015B738

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 605
								// Start offset: 0x8015B778

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 607
									// Start offset: 0x8015B778

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 607
										// Start offset: 0x8015B7A8

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 609
											// Start offset: 0x8015B7A8

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 609
												// Start offset: 0x8015B7B8
												// Variables:
											// 		int rv2; // $v1
											// 		int min; // $s0
											// 		int max; // $s1
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8015B83C
											// End Line: 622
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8015B83C
										// End Line: 622
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8015B910
									// End Line: 642
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8015B910
								// End Line: 642
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8015B910
							// End Line: 642
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015B910
						// End Line: 642
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015B910
					// End Line: 642
				/* end block 1.1.1.1 */
				// End offset: 0x8015B91C
				// End Line: 645
			/* end block 1.1.1 */
			// End offset: 0x8015B91C
			// End Line: 645
		/* end block 1.1 */
		// End offset: 0x8015B924
		// End Line: 646
	/* end block 1 */
	// End offset: 0x8015B924
	// End Line: 646

	/* begin block 2 */
		// Start line: 1233
	/* end block 2 */
	// End Line: 1234

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_PlaceThemeRooms__FiiiiUc(int minSize,int maxSize,int floor,int freq,int rndSize)

{
	uchar uVar1;
	long v;
	int iVar2;
	int themeIndex;
	int x;
	int y;
	int x1;
	int local_40;
	int local_3c;
	int local_38;
	char local_30;
	
	themeCount = 0;
	local_30 = (char)rndSize;
	local_38 = freq;
	memset(&themeLoc,0,0x14);
	y = 0;
	while (x = 0, y < 0x28) {
		x1 = 0x14;
		while (x < 0x28) {
			if ((((uint)dungeon[x * 0x30 + y] == floor) && (v = ENG_random__Fl(local_38), v == 0)) &&
				 (uVar1 = DRLG_WillThemeRoomFit__FiiiiiPiT5(floor,x,y,minSize,maxSize,&local_40,&local_3c),
				 uVar1 != '\0')) {
				themeIndex = minSize + -2;
				if (local_30 != '\0') {
					v = ENG_random__Fl((local_40 - themeIndex) + 1);
					v = ENG_random__Fl(v);
					local_40 = themeIndex + v;
					if ((local_40 < themeIndex) || (maxSize + -2 < local_40)) {
						local_40 = themeIndex;
					}
					v = ENG_random__Fl((local_3c - themeIndex) + 1);
					v = ENG_random__Fl(v);
					iVar2 = themeIndex + v;
					local_3c = themeIndex;
					if ((themeIndex <= iVar2) && (local_3c = themeIndex, iVar2 <= maxSize + -2)) {
						local_3c = iVar2;
					}
				}
				themeIndex = themeCount;
				(&themeLoc)[themeCount].x = x + 1;
				(&themeLoc)[themeIndex].y = y + 1;
				(&themeLoc)[themeIndex].width = local_40;
				(&themeLoc)[themeIndex].height = local_3c;
				if (leveltype == '\x03') {
					DRLG_RectTrans__Fiiii(x1,y * 2 + 0x14,(x + local_40) * 2 + 0xf,(y + local_3c) * 2 + 0xf);
				}
				else {
					DRLG_MRectTrans__Fiiii(x + 1,y + 1,x + local_40,y + local_3c);
				}
				themeIndex = themeCount;
				(&themeLoc)[themeCount].ttval = (int)TransVal + -1;
				DRLG_CreateThemeRoom__Fi(themeIndex);
				themeCount = themeCount + 1;
			}
			x1 = x1 + 2;
			x = x + 1;
		}
		y = y + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_HoldThemeRooms__Fv()
 // line 657, offset 0x8015b958
	/* begin block 1 */
		// Start line: 658
		// Start offset: 0x8015B958
		// Variables:
	// 		int i; // $t9
	// 		int x; // $a3
	// 		int y; // $t0
	/* end block 1 */
	// End offset: 0x8015BAF0
	// End Line: 674

	/* begin block 2 */
		// Start line: 1389
	/* end block 2 */
	// End Line: 1390

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_HoldThemeRooms__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int *piVar9;
	int *piVar10;
	int iVar11;
	
	if ((0 < themeCount) && (iVar11 = 0, 0 < themeCount)) {
		piVar9 = &themeLoc.height;
		piVar10 = &themeLoc.y;
		iVar8 = 0;
		do {
			iVar5 = *piVar10;
			if (iVar5 < iVar5 + *piVar9 + -1) {
				iVar7 = iVar5 * 0x10 + 0x88;
				iVar6 = iVar5 * 0x10 + 0x80;
				do {
					iVar4 = *(int *)((int)&themeLoc.x + iVar8);
					if (iVar4 < iVar4 + *(int *)((int)&themeLoc.width + iVar8) + -1) {
						iVar3 = iVar4 * 0x700 + 0x3b80;
						iVar2 = iVar4 * 0x700 + 0x3800;
						do {
							(&dung_map[0].dFlags)[iVar6 + iVar2] = (&dung_map[0].dFlags)[iVar6 + iVar2] | 8;
							iVar1 = iVar7 + iVar3;
							(&dung_map[0].dFlags)[iVar6 + iVar3] = (&dung_map[0].dFlags)[iVar6 + iVar3] | 8;
							iVar4 = iVar4 + 1;
							(&dung_map[0].dFlags)[iVar7 + iVar2] = (&dung_map[0].dFlags)[iVar7 + iVar2] | 8;
							iVar3 = iVar3 + 0x700;
							(&dung_map[0].dFlags)[iVar1] = (&dung_map[0].dFlags)[iVar1] | 8;
							iVar2 = iVar2 + 0x700;
						} while (iVar4 < *(int *)((int)&themeLoc.x + iVar8) +
														 *(int *)((int)&themeLoc.width + iVar8) + -1);
					}
					iVar7 = iVar7 + 0x10;
					iVar5 = iVar5 + 1;
					iVar6 = iVar6 + 0x10;
				} while (iVar5 < *piVar10 + *piVar9 + -1);
			}
			piVar9 = piVar9 + 5;
			piVar10 = piVar10 + 5;
			iVar11 = iVar11 + 1;
			iVar8 = iVar8 + 0x14;
		} while (iVar11 < themeCount);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SkipThemeRoom__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 687, offset 0x8015bafc
	/* begin block 1 */
		// Start line: 688
		// Start offset: 0x8015BAFC
		// Variables:
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x8015BBBC
	// End Line: 699

	/* begin block 2 */
		// Start line: 1451
	/* end block 2 */
	// End Line: 1452

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar SkipThemeRoom__Fii(int x,int y)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	if (0 < themeCount) {
		iVar2 = 0;
		do {
			iVar1 = *(int *)((int)&themeLoc.x + iVar2);
			if ((((iVar1 + -2 <= x) && (x <= iVar1 + *(int *)((int)&themeLoc.width + iVar2) + 2)) &&
					(iVar1 = *(int *)((int)&themeLoc.y + iVar2), iVar1 + -2 <= y)) &&
				 (y <= iVar1 + *(int *)((int)&themeLoc.height + iVar2) + 2)) {
				return '\0';
			}
			iVar3 = iVar3 + 1;
			iVar2 = iVar2 + 0x14;
		} while (iVar3 < themeCount);
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLevels__Fv()
 // line 704, offset 0x8015bbc8
	/* begin block 1 */
		// Start line: 705
		// Start offset: 0x8015BBC8

		/* begin block 1.1 */
			// Start line: 711
			// Start offset: 0x8015BBE8
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8015BC04
		// End Line: 711
	/* end block 1 */
	// End offset: 0x8015BC04
	// End Line: 711

	/* begin block 2 */
		// Start line: 1486
	/* end block 2 */
	// End Line: 1487

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLevels__Fv(void)

{
	int *piVar1;
	int iVar2;
	
	if (leveldebug == '\0') {
		currlevel = '\0';
		leveltype = '\0';
		setlevel = '\0';
	}
	iVar2 = 0xf;
	piVar1 = &INT_80102724;
	do {
		*piVar1 = -1;
		iVar2 = iVar2 + -1;
		piVar1 = piVar1 + -1;
	} while (-1 < iVar2);
	return;
}





