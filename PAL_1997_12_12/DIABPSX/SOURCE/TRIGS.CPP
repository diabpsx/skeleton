#include "THISDUST.H"
#include "TRIGS.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceTownTrig__Fv()
 // line 76, offset 0x8006db60
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x8006DB60
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8006DE68
	// End Line: 118

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceTownTrig__Fv(void)

{
	bool bVar1;
	int iVar2;
	char *__src;
	int *piVar3;
	
	piVar3 = &TownDownList;
	if (TownDownList != -1) {
		do {
			iVar2 = *piVar3;
			piVar3 = piVar3 + 1;
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar2) {
				__src = GetStr__Fi(STR_DOWN_TO_DUNGEON);
				strcpy(_infostr + sel_data * 0x100,__src);
				cursmx = 0x19;
				cursmy = 0x1d;
				return '\x01';
			}
		} while (*piVar3 != -1);
	}
	if ((townwarps != '\0') && (piVar3 = &TownWarp1List, TownWarp1List != -1)) {
		do {
			iVar2 = *piVar3;
			piVar3 = piVar3 + 1;
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar2) {
				__src = GetStr__Fi(STR_DOWN_TO_CATACOMBS);
				strcpy(_infostr + sel_data * 0x100,__src);
				cursmx = 0x31;
				cursmy = 0x15;
				return '\x01';
			}
		} while (*piVar3 != -1);
	}
	if (UCHAR_00h_8012b555 != '\0') {
		iVar2 = 0x4af;
		do {
			bVar1 = (int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar2;
			iVar2 = iVar2 + 1;
			if (bVar1) {
				__src = GetStr__Fi(STR_DOWN_TO_CAVES);
				strcpy(_infostr + sel_data * 0x100,__src);
				cursmx = 0x11;
				cursmy = 0x45;
				return '\x01';
			}
		} while (iVar2 < 0x4c5);
	}
	if (UCHAR_00h_8012b556 != '\0') {
		iVar2 = 0x4d8;
		do {
			bVar1 = (int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar2;
			iVar2 = iVar2 + 1;
			if (bVar1) {
				__src = GetStr__Fi(STR_DOWN_TO_HELL);
				strcpy(_infostr + sel_data * 0x100,__src);
				cursmx = 0x29;
				cursmy = 0x50;
				return '\x01';
			}
		} while (iVar2 < 0x4e8);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL1Trig__Fv()
 // line 122, offset 0x8006de78
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x8006DE78
		// Variables:
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x8006E10C
	// End Line: 151

	/* begin block 2 */
		// Start line: 247
	/* end block 2 */
	// End Line: 248

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL1Trig__Fv(void)

{
	int *piVar1;
	char *__src;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (L1UpList != -1) {
		iVar4 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L1UpList + iVar4)) {
				if (currlevel < 2) {
					__src = GetStr__Fi(STR_UP_TO_TOWN);
					strcpy(_infostr + sel_data * 0x100,__src);
				}
				else {
					__src = GetStr__Fi(STR_UP_TO_LEVEL__I);
					sprintf(_infostr + sel_data * 0x100,__src,(uint)currlevel - 1);
				}
				iVar2 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar2 = iVar2 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x43) goto LAB_8006e0ac;
						iVar3 = iVar3 + 0x10;
					} while (iVar2 < numtrigs);
				}
			}
			piVar1 = (int *)((int)INT_ARRAY_800e82e8 + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar1 != -1);
	}
	if (L1DownList != -1) {
		iVar4 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L1DownList + iVar4)) {
				__src = GetStr__Fi(STR_DOWN_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__src,(uint)currlevel + 1);
				iVar2 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar2 = iVar2 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x42) {
LAB_8006e0ac:
							cursmx = *(int *)((int)&trigs._tx + iVar3);
							cursmy = *(int *)((int)&trigs._ty + iVar3);
							return '\x01';
						}
						iVar3 = iVar3 + 0x10;
					} while (iVar2 < numtrigs);
				}
			}
			piVar1 = (int *)((int)INT_ARRAY_800e8318 + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar1 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL2Trig__Fv()
 // line 157, offset 0x8006e128
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8006E128
		// Variables:
	// 		int j; // $s1
	// 		int dx; // $s0
	// 		int dy; // $v1
	/* end block 1 */
	// End offset: 0x8006E560
	// End Line: 207

	/* begin block 2 */
		// Start line: 321
	/* end block 2 */
	// End Line: 322

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL2Trig__Fv(void)

{
	int iVar1;
	int iVar2;
	char *__format;
	int iVar3;
	int iVar4;
	int *piVar5;
	int iVar6;
	TriggerStruct *pTVar7;
	
	if (L2UpList != -1) {
		iVar3 = 0;
		do {
			if (((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L2UpList + iVar3)) &&
				 (iVar4 = 0, 0 < numtrigs)) {
				piVar5 = &trigs._ty;
				pTVar7 = &trigs;
				iVar6 = 0;
				do {
					if (*(int *)((int)&trigs._tmsg + iVar6) == 0x43) {
						iVar1 = abs(pTVar7->_tx - cursmx);
						iVar2 = abs(*piVar5 - cursmy);
						if ((iVar1 < 4) && (iVar2 < 4)) {
							__format = GetStr__Fi(STR_UP_TO_LEVEL__I);
							sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel - 1);
							goto LAB_8006e500;
						}
					}
					piVar5 = piVar5 + 4;
					pTVar7 = pTVar7 + 1;
					iVar4 = iVar4 + 1;
					iVar6 = iVar6 + 0x10;
				} while (iVar4 < numtrigs);
			}
			piVar5 = (int *)((int)INT_ARRAY_800e8340 + iVar3);
			iVar3 = iVar3 + 4;
		} while (*piVar5 != -1);
	}
	if (L2DownList != -1) {
		iVar3 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L2DownList + iVar3)) {
				__format = GetStr__Fi(STR_DOWN_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel + 1);
				iVar4 = 0;
				if (0 < numtrigs) {
					iVar6 = 0;
					do {
						iVar4 = iVar4 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar6) == 0x42) {
							cursmx = *(int *)((int)&trigs._tx + iVar6);
							cursmy = *(int *)((int)&trigs._ty + iVar6);
							return '\x01';
						}
						iVar6 = iVar6 + 0x10;
					} while (iVar4 < numtrigs);
				}
			}
			piVar5 = (int *)((int)INT_ARRAY_800e834c + iVar3);
			iVar3 = iVar3 + 4;
		} while (*piVar5 != -1);
	}
	if ((currlevel == '\x05') && (L2TWarpUpList != -1)) {
		iVar3 = 0;
		do {
			if (((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L2TWarpUpList + iVar3)) &&
				 (iVar4 = 0, 0 < numtrigs)) {
				piVar5 = &trigs._ty;
				pTVar7 = &trigs;
				iVar6 = 0;
				do {
					if (*(int *)((int)&trigs._tmsg + iVar6) == 0x48) {
						iVar1 = abs(pTVar7->_tx - cursmx);
						iVar2 = abs(*piVar5 - cursmy);
						if ((iVar1 < 4) && (iVar2 < 4)) {
							__format = GetStr__Fi(STR_UP_TO_TOWN);
							strcpy(_infostr + sel_data * 0x100,__format);
LAB_8006e500:
							cursmx = pTVar7->_tx;
							cursmy = *piVar5;
							return '\x01';
						}
					}
					piVar5 = piVar5 + 4;
					pTVar7 = pTVar7 + 1;
					iVar4 = iVar4 + 1;
					iVar6 = iVar6 + 0x10;
				} while (iVar4 < numtrigs);
			}
			piVar5 = (int *)((int)INT_ARRAY_800e8360 + iVar3);
			iVar3 = iVar3 + 4;
		} while (*piVar5 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL3Trig__Fv()
 // line 213, offset 0x8006e588
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x8006E588
		// Variables:
	// 		int j; // $s1
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x8006E9DC
	// End Line: 261

	/* begin block 2 */
		// Start line: 439
	/* end block 2 */
	// End Line: 440

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL3Trig__Fv(void)

{
	char *__format;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	TriggerStruct *pTVar7;
	
	if (L3UpList != -1) {
		iVar4 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L3UpList + iVar4)) {
				__format = GetStr__Fi(STR_UP_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel - 1);
				iVar5 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar5 = iVar5 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x43) {
							cursmx = *(int *)((int)&trigs._tx + iVar3);
							cursmy = *(int *)((int)&trigs._ty + iVar3);
							return '\x01';
						}
						iVar3 = iVar3 + 0x10;
					} while (iVar5 < numtrigs);
				}
			}
			piVar6 = (int *)((int)INT_ARRAY_800e836c + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	if (L3DownList != -1) {
		iVar4 = 0;
		do {
			iVar5 = *(int *)((int)&L3DownList + iVar4);
			if ((((int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar5) ||
					((int)dung_map[(cursmx + 1) * 0x6c + cursmy].dPiece == iVar5)) ||
				 ((int)dung_map[(cursmx + 2) * 0x6c + cursmy].dPiece == iVar5)) {
				__format = GetStr__Fi(STR_DOWN_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel + 1);
				iVar5 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar5 = iVar5 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x42) {
							cursmx = *(int *)((int)&trigs._tx + iVar3);
							cursmy = *(int *)((int)&trigs._ty + iVar3);
							return '\x01';
						}
						iVar3 = iVar3 + 0x10;
					} while (iVar5 < numtrigs);
				}
			}
			piVar6 = (int *)((int)INT_ARRAY_800e83a8 + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	if ((currlevel == '\t') && (L3TWarpUpList != -1)) {
		iVar4 = 0;
		do {
			if (((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L3TWarpUpList + iVar4)) &&
				 (iVar5 = 0, 0 < numtrigs)) {
				piVar6 = &trigs._ty;
				pTVar7 = &trigs;
				iVar3 = 0;
				do {
					if (*(int *)((int)&trigs._tmsg + iVar3) == 0x48) {
						iVar1 = abs(pTVar7->_tx - cursmx);
						iVar2 = abs(*piVar6 - cursmy);
						if ((iVar1 < 4) && (iVar2 < 4)) {
							__format = GetStr__Fi(STR_UP_TO_TOWN);
							strcpy(_infostr + sel_data * 0x100,__format);
							cursmx = pTVar7->_tx;
							cursmy = *piVar6;
							return '\x01';
						}
					}
					piVar6 = piVar6 + 4;
					pTVar7 = pTVar7 + 1;
					iVar5 = iVar5 + 1;
					iVar3 = iVar3 + 0x10;
				} while (iVar5 < numtrigs);
			}
			piVar6 = (int *)((int)INT_ARRAY_800e83cc + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL4Trig__Fv()
 // line 267, offset 0x8006ea04
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x8006EA04
		// Variables:
	// 		int j; // $s1
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x8006EEE8
	// End Line: 327

	/* begin block 2 */
		// Start line: 552
	/* end block 2 */
	// End Line: 553

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL4Trig__Fv(void)

{
	char *__format;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	TriggerStruct *pTVar7;
	
	if (L4UpList != -1) {
		iVar4 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L4UpList + iVar4)) {
				__format = GetStr__Fi(STR_UP_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel - 1);
				iVar5 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar5 = iVar5 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x43) goto LAB_8006ee88;
						iVar3 = iVar3 + 0x10;
					} while (iVar5 < numtrigs);
				}
			}
			piVar6 = (int *)((int)INT_ARRAY_800e8404 + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	if (L4DownList != -1) {
		iVar4 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L4DownList + iVar4)) {
				__format = GetStr__Fi(STR_DOWN_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel + 1);
				iVar5 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar5 = iVar5 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x42) goto LAB_8006ee88;
						iVar3 = iVar3 + 0x10;
					} while (iVar5 < numtrigs);
				}
			}
			piVar6 = (int *)((int)INT_ARRAY_800e8414 + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	if ((currlevel == '\r') && (L4TWarpUpList != -1)) {
		iVar4 = 0;
		do {
			if (((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L4TWarpUpList + iVar4)) &&
				 (iVar5 = 0, 0 < numtrigs)) {
				piVar6 = &trigs._ty;
				pTVar7 = &trigs;
				iVar3 = 0;
				do {
					if (*(int *)((int)&trigs._tmsg + iVar3) == 0x48) {
						iVar1 = abs(pTVar7->_tx - cursmx);
						iVar2 = abs(*piVar6 - cursmy);
						if ((iVar1 < 4) && (iVar2 < 4)) {
							__format = GetStr__Fi(STR_UP_TO_TOWN);
							strcpy(_infostr + sel_data * 0x100,__format);
							cursmx = pTVar7->_tx;
							cursmy = *piVar6;
							return '\x01';
						}
					}
					piVar6 = piVar6 + 4;
					pTVar7 = pTVar7 + 1;
					iVar5 = iVar5 + 1;
					iVar3 = iVar3 + 0x10;
				} while (iVar5 < numtrigs);
			}
			piVar6 = (int *)((int)INT_ARRAY_800e842c + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	if ((currlevel == '\x0f') && (L4PentaList != -1)) {
		iVar4 = 0;
		do {
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == *(int *)((int)&L4PentaList + iVar4)) {
				__format = GetStr__Fi(STR_DOWN_TO_DIABLO);
				strcpy(_infostr + sel_data * 0x100,__format);
				iVar5 = 0;
				if (0 < numtrigs) {
					iVar3 = 0;
					do {
						iVar5 = iVar5 + 1;
						if (*(int *)((int)&trigs._tmsg + iVar3) == 0x42) {
LAB_8006ee88:
							cursmx = *(int *)((int)&trigs._tx + iVar3);
							cursmy = *(int *)((int)&trigs._ty + iVar3);
							return '\x01';
						}
						iVar3 = iVar3 + 0x10;
					} while (iVar5 < numtrigs);
				}
			}
			piVar6 = (int *)((int)INT_ARRAY_800e843c + iVar4);
			iVar4 = iVar4 + 4;
		} while (*piVar6 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ Freeupstairs__Fv()
 // line 332, offset 0x8006ef10
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x8006EF10
		// Variables:
	// 		int j; // $t0
	// 		int tx; // $t1
	// 		int ty; // $t2
	// 		int xx; // $a0
	// 		int yy; // $a1
	/* end block 1 */
	// End offset: 0x8006EFC4
	// End Line: 343

	/* begin block 2 */
		// Start line: 687
	/* end block 2 */
	// End Line: 688

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Freeupstairs__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar6 = 0;
	if (0 < numtrigs) {
		iVar5 = 0;
		do {
			iVar4 = -2;
			iVar7 = *(int *)((int)&trigs._tx + iVar5);
			iVar8 = *(int *)((int)&trigs._ty + iVar5);
			do {
				iVar3 = -2;
				iVar1 = iVar8 + iVar4;
				do {
					iVar2 = iVar7 + iVar3;
					iVar3 = iVar3 + 1;
					dung_map[iVar2 * 0x6c + iVar1].dFlags = dung_map[iVar2 * 0x6c + iVar1].dFlags | 8;
				} while (iVar3 < 3);
				iVar4 = iVar4 + 1;
			} while (iVar4 < 3);
			iVar6 = iVar6 + 1;
			iVar5 = iVar5 + 0x10;
		} while (iVar6 < numtrigs);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceSKingTrig__Fv()
 // line 349, offset 0x8006efd0
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x8006EFD0
	/* end block 1 */
	// End offset: 0x8006F0B0
	// End Line: 361

	/* begin block 2 */
		// Start line: 723
	/* end block 2 */
	// End Line: 724

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceSKingTrig__Fv(void)

{
	int iVar1;
	char *__format;
	int *piVar2;
	
	piVar2 = &L1UpList;
	if (L1UpList != -1) {
		do {
			iVar1 = *piVar2;
			piVar2 = piVar2 + 1;
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar1) {
				__format = GetStr__Fi(STR_BACK_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)QuestStruct_800e347c._qlevel);
				cursmx = trigs._tx;
				cursmy = trigs._ty;
				return '\x01';
			}
		} while (*piVar2 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceSChambTrig__Fv()
 // line 367, offset 0x8006f0c4
	/* begin block 1 */
		// Start line: 368
		// Start offset: 0x8006F0C4
	/* end block 1 */
	// End offset: 0x8006F1A4
	// End Line: 379

	/* begin block 2 */
		// Start line: 763
	/* end block 2 */
	// End Line: 764

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceSChambTrig__Fv(void)

{
	int iVar1;
	char *__format;
	int *piVar2;
	
	piVar2 = &L2DownList;
	if (L2DownList != -1) {
		do {
			iVar1 = *piVar2;
			piVar2 = piVar2 + 1;
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar1) {
				__format = GetStr__Fi(STR_BACK_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)QuestStruct_800e34a4._qlevel);
				cursmx = trigs._tx;
				cursmy = trigs._ty;
				return '\x01';
			}
		} while (*piVar2 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForcePWaterTrig__Fv()
 // line 385, offset 0x8006f1b8
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x8006F1B8
	/* end block 1 */
	// End offset: 0x8006F298
	// End Line: 397

	/* begin block 2 */
		// Start line: 803
	/* end block 2 */
	// End Line: 804

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForcePWaterTrig__Fv(void)

{
	int iVar1;
	char *__format;
	int *piVar2;
	
	piVar2 = &L3DownList;
	if (L3DownList != -1) {
		do {
			iVar1 = *piVar2;
			piVar2 = piVar2 + 1;
			if ((int)dung_map[cursmx * 0x6c + cursmy].dPiece == iVar1) {
				__format = GetStr__Fi(STR_BACK_TO_LEVEL__I);
				sprintf(_infostr + sel_data * 0x100,__format,(uint)QuestStruct_800e3490._qlevel);
				cursmx = trigs._tx;
				cursmy = trigs._ty;
				return '\x01';
			}
		} while (*piVar2 != -1);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckTrigForce__Fv()
 // line 414, offset 0x8006f2ac
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x8006F2AC
		// Variables:
	// 		int ocursmx; // $s5
	// 		int ocursmy; // $s4

		/* begin block 1.1 */
			// Start line: 415
			// Start offset: 0x8006F2AC

			/* begin block 1.1.1 */
				// Start line: 421
				// Start offset: 0x8006F308

				/* begin block 1.1.1.1 */
					// Start line: 422
					// Start offset: 0x8006F308
					// Variables:
				// 		int i; // $s3
				/* end block 1.1.1.1 */
				// End offset: 0x8006F474
				// End Line: 445
			/* end block 1.1.1 */
			// End offset: 0x8006F474
			// End Line: 445

			/* begin block 1.1.2 */
				// Start line: 445
				// Start offset: 0x8006F474

				/* begin block 1.1.2.1 */
					// Start line: 445
					// Start offset: 0x8006F474
					// Variables:
				// 		int i; // $s3
				/* end block 1.1.2.1 */
				// End offset: 0x8006F578
				// End Line: 465
			/* end block 1.1.2 */
			// End offset: 0x8006F578
			// End Line: 465
		/* end block 1.1 */
		// End offset: 0x8006F578
		// End Line: 465
	/* end block 1 */
	// End offset: 0x8006F5A0
	// End Line: 467

	/* begin block 2 */
		// Start line: 869
	/* end block 2 */
	// End Line: 870

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckTrigForce__Fv(void)

{
	int iVar1;
	int iVar2;
	uchar uVar3;
	char *pcVar4;
	char *pcVar5;
	int iVar6;
	
	iVar2 = cursmy;
	iVar1 = cursmx;
	_trigflag[sel_data] = '\0';
	if (setlevel == '\0') {
		iVar6 = 0;
		if (_trigflag[sel_data] == '\0') {
			pcVar4 = &cursoff;
			pcVar5 = &CHAR_00h_80128815;
			do {
				cursmx = iVar1 + (int)*pcVar4;
				cursmy = iVar2 + (int)*pcVar5;
				switch(leveltype) {
				case '\0':
					uVar3 = ForceTownTrig__Fv();
					break;
				case '\x01':
					uVar3 = ForceL1Trig__Fv();
					break;
				case '\x02':
					uVar3 = ForceL2Trig__Fv();
					break;
				case '\x03':
					uVar3 = ForceL3Trig__Fv();
					break;
				case '\x04':
					uVar3 = ForceL4Trig__Fv();
					break;
				default:
					goto switchD_8006f384_caseD_5;
				}
				_trigflag[sel_data] = uVar3;
switchD_8006f384_caseD_5:
				if ((leveltype != '\0') && (_trigflag[sel_data] == '\0')) {
					uVar3 = ForceQuests__Fv();
					_trigflag[sel_data] = uVar3;
				}
				pcVar5 = pcVar5 + 2;
				iVar6 = iVar6 + 1;
				pcVar4 = pcVar4 + 2;
				if (2 < iVar6) goto LAB_8006f578;
			} while (_trigflag[sel_data] == '\0');
		}
	}
	else {
		iVar6 = 0;
		if (_trigflag[sel_data] == '\0') {
			pcVar4 = &cursoff;
			pcVar5 = &CHAR_00h_80128815;
			do {
				cursmy = iVar2 + (int)*pcVar5;
				cursmx = iVar1 + (int)*pcVar4;
				if (setlvlnum == '\x02') {
					uVar3 = ForceSChambTrig__Fv();
LAB_8006f530:
					_trigflag[sel_data] = uVar3;
				}
				else {
					if (setlvlnum < 3) {
						if (setlvlnum == '\x01') {
							uVar3 = ForceSKingTrig__Fv();
							goto LAB_8006f530;
						}
					}
					else {
						if (setlvlnum == '\x04') {
							uVar3 = ForcePWaterTrig__Fv();
							goto LAB_8006f530;
						}
					}
				}
				pcVar5 = pcVar5 + 2;
				iVar6 = iVar6 + 1;
				pcVar4 = pcVar4 + 2;
			} while ((iVar6 < 3) && (_trigflag[sel_data] == '\0'));
LAB_8006f578:
			if (_trigflag[sel_data] == '\0') {
				return;
			}
		}
	}
	ClearPanel__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FadeGameOut__Fv()
 // line 476, offset 0x8006f5c8
	/* begin block 1 */
		// Start line: 477
		// Start offset: 0x8006F5C8
	/* end block 1 */
	// End offset: 0x8006F654
	// End Line: 498

	/* begin block 2 */
		// Start line: 1002
	/* end block 2 */
	// End Line: 1003

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FadeGameOut__Fv(void)

{
	void *pvVar1;
	
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	PauseMode = '\x01';
	music_fade__Fv();
	sound_stop__Fv();
	pvVar1 = PaletteFadeOut__Fi(8);
	if (pvVar1 != (void *)0x0) {
		while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
			TSK_Sleep(1);
		}
	}
	PauseMode = '\0';
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	BlackPalette__Fv();
	music_stop__Fv();
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsTrigger__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 502, offset 0x8006f664
	/* begin block 1 */
		// Start line: 503
		// Start offset: 0x8006F664

		/* begin block 1.1 */
			// Start line: 504
			// Start offset: 0x8006F664
		/* end block 1.1 */
		// End offset: 0x8006F6BC
		// End Line: 509
	/* end block 1 */
	// End offset: 0x8006F6C0
	// End Line: 510

	/* begin block 2 */
		// Start line: 1055
	/* end block 2 */
	// End Line: 1056

void * IsTrigger__Fii(int x,int y)

{
	int iVar1;
	
	if (0 < numtrigs) {
		iVar1 = 0;
		do {
			if ((x == *(int *)((int)&trigs._tx + iVar1)) && (y == *(int *)((int)&trigs._ty + iVar1))) {
				return &DAT_00000001;
			}
			iVar1 = iVar1 + 0x10;
		} while (iVar1 < numtrigs << 4);
	}
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckTriggers__Fi(int pnum /*$a0*/)
 // line 513, offset 0x8006f6c8
	/* begin block 1 */
		// Start line: 514
		// Start offset: 0x8006F6C8
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s0

		/* begin block 1.1 */
			// Start line: 523
			// Start offset: 0x8006F708
			// Variables:
		// 		int i; // $s7

			/* begin block 1.1.1 */
				// Start line: 523
				// Start offset: 0x8006F740

				/* begin block 1.1.1.1 */
					// Start line: 530
					// Start offset: 0x8006F79C

					/* begin block 1.1.1.1.1 */
						// Start line: 530
						// Start offset: 0x8006F7D4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 562
							// Start offset: 0x8006F8E0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 562
								// Start offset: 0x8006F8F4
								// Variables:
							// 		unsigned char abortflag; // $a0
							// 		int dx; // $s1
							// 		int dy; // $s0
							// 		char m; // $s3
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8006FA5C
							// End Line: 592
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8006FA5C
						// End Line: 592
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006FAF0
					// End Line: 625
				/* end block 1.1.1.1 */
				// End offset: 0x8006FAF0
				// End Line: 625
			/* end block 1.1.1 */
			// End offset: 0x8006FB94
			// End Line: 652
		/* end block 1.1 */
		// End offset: 0x8006FBA8
		// End Line: 655
	/* end block 1 */
	// End offset: 0x8006FBA8
	// End Line: 655

	/* begin block 2 */
		// Start line: 1083
	/* end block 2 */
	// End Line: 1084

void CheckTriggers__Fi(int pnum)

{
	char cVar1;
	bool bVar2;
	_125fake psfx;
	uint fom;
	uchar y;
	int lvl;
	uchar x;
	int x_00;
	uint *puVar3;
	char e;
	int *piVar4;
	int iVar5;
	int iVar6;
	
	if (plr[0].plractive == '\0') {
		myplr = 1;
	}
	iVar6 = 0;
	piVar4 = &trigs._tlvl;
	puVar3 = &trigs._tmsg;
	iVar5 = 0;
	do {
		if (numtrigs <= iVar6) {
			return;
		}
		if (((int)plr[pnum]._px != *(int *)((int)&trigs._tx + iVar5)) ||
			 ((int)plr[pnum]._py != *(int *)((int)&trigs._ty + iVar5))) goto LAB_8006fb94;
		switch(*(undefined4 *)((int)&trigs._tmsg + iVar5)) {
		case 0x42:
			if ((0xb < _pcurs[myplr]) && (x = DropItemBeforeTrig__Fv(), x != '\0')) {
				return;
			}
			FadeGameOut__Fv();
			StartNewLvl__Fiii(0,*puVar3,(uint)currlevel + 1);
			fom = *puVar3;
			lvl = (uint)currlevel + 1;
			goto LAB_8006f8c0;
		case 0x43:
			if ((0xb < _pcurs[myplr]) && (x = DropItemBeforeTrig__Fv(), x != '\0')) {
				return;
			}
			FadeGameOut__Fv();
			StartNewLvl__Fiii(0,*puVar3,(uint)currlevel - 1);
			fom = *puVar3;
			lvl = (uint)currlevel - 1;
LAB_8006f8c0:
			StartNewLvl__Fiii(1,fom,lvl);
			plr[1].plrlevel = plr[0].plrlevel;
			goto switchD_8006f7cc_caseD_45;
		case 0x44:
			FadeGameOut__Fv();
			StartNewLvl__Fiii(0,*puVar3,ReturnLvl);
			fom = *puVar3;
			lvl = ReturnLvl;
			break;
		default:
			goto switchD_8006f7cc_caseD_45;
		case 0x47:
			bVar2 = false;
			if (gbMaxPlayers != '\x01') {
				x = '\0';
				y = '\0';
				lvl = *piVar4;
				e = '\0';
				if ((lvl == 5) && (x = '\0', y = '\0', plr[pnum]._pLevel < '\b')) {
					bVar2 = true;
					e = '(';
					x = (uchar)plr[pnum]._px;
					y = (char)plr[pnum]._py + '\x01';
					lvl = *piVar4;
				}
				if ((lvl == 9) && (plr[pnum]._pLevel < '\r')) {
					bVar2 = true;
					e = ')';
					y = (uchar)plr[pnum]._py;
					x = (char)plr[pnum]._px + '\x01';
				}
				if ((*piVar4 == 0xd) && (plr[pnum]._pLevel < '\x11')) {
					e = '*';
					x = (uchar)plr[pnum]._px;
					y = (char)plr[pnum]._py + '\x01';
					bVar2 = true;
				}
				if (bVar2) {
					cVar1 = plr[pnum]._pClass;
					if (cVar1 == '\0') {
						psfx = PS_WARR43;
					}
					else {
						if (cVar1 == '\x01') {
							psfx = PS_ROGUE43;
						}
						else {
							psfx = PS_MAGE43;
							if (cVar1 != '\x02') goto LAB_8006fa38;
						}
					}
					PlaySFX__Fi(psfx);
LAB_8006fa38:
					InitDiabloMsg__Fc(e);
					NetSendCmdLoc__FUcUcUcUc('\x01','\x01',x,y);
					return;
				}
			}
		case 0x4c:
			FadeGameOut__Fv();
			StartNewLvl__Fiii(0,*puVar3,*piVar4);
			fom = *puVar3;
			lvl = *piVar4;
			break;
		case 0x48:
			TWarpFrom = ZEXT14(currlevel);
			FadeGameOut__Fv();
			StartNewLvl__Fiii(0,*puVar3,0);
			fom = *puVar3;
			lvl = 0;
		}
		StartNewLvl__Fiii(1,fom,lvl);
switchD_8006f7cc_caseD_45:
		lvl = ViewY;
		x_00 = ViewX;
		if (plr[0].plractive != '\0') {
			x_00 = (int)plr[0]._px;
			lvl = (int)plr[0]._py;
			PlacePlayer__FiiiUc(0,x_00,lvl,'\x01');
		}
		if (plr[1].plractive != '\0') {
			myplr = 1;
			NetSendCmdLocParam1__FUcUcUcUcUs('\x01','5',(uchar)x_00,(uchar)lvl,plr[0].plrlevel & 0xffff);
			myplr = 0;
			PlacePlayer__FiiiUc(1,x_00 + -1,lvl,'\0');
		}
LAB_8006fb94:
		piVar4 = piVar4 + 4;
		puVar3 = puVar3 + 4;
		iVar5 = iVar5 + 0x10;
		iVar6 = iVar6 + 1;
	} while( true );
}





