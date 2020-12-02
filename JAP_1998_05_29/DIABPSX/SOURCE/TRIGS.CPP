#include "THISDUST.H"
#include "TRIGS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitVPTriggers__Fv()
 // line 117, offset 0x80075018
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x80075018
	/* end block 1 */
	// End offset: 0x80075058
	// End Line: 123

	/* begin block 2 */
		// Start line: 239
	/* end block 2 */
	// End Line: 240

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitVPTriggers__Fv(void)

{
	numtrigs = 1;
	trigs._tx = 0x23;
	trigs._ty = 0x20;
	trigs._tmsg = 0x44;
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FindLevTrig__Fiii(int x /*$a0*/, int y /*$a1*/, int l /*$a2*/)
 // line 130, offset 0x80075060
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x80075060
	/* end block 1 */
	// End offset: 0x800750EC
	// End Line: 139

	/* begin block 2 */
		// Start line: 267
	/* end block 2 */
	// End Line: 268

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * FindLevTrig__Fiii(int x,int y,int l)

{
	short *psVar1;
	int iVar2;
	
	if ((&TrigList)[l * 0x40] != -1) {
		iVar2 = 0;
		do {
			psVar1 = (short *)((int)&TrigList + iVar2 + l * 0x80);
			if ((x == (int)*psVar1) && (y == (int)psVar1[1])) {
				return &DAT_00000001;
			}
			iVar2 = iVar2 + 4;
		} while (*(short *)((int)&TrigList + iVar2 + l * 0x80) != -1);
	}
	return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ScanMap__FPsi(short *list /*$s4*/, int l /*$a1*/)
 // line 142, offset 0x800750f8
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x800750F8
		// Variables:
	// 		int NoTrigs; // $s3

		/* begin block 1.1 */
			// Start line: 146
			// Start offset: 0x80075138

			/* begin block 1.1.1 */
				// Start line: 148
				// Start offset: 0x80075148
				// Variables:
			// 		int y; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 148
					// Start offset: 0x80075148

					/* begin block 1.1.1.1.1 */
						// Start line: 150
						// Start offset: 0x80075154
						// Variables:
					// 		int x; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800751C4
					// End Line: 163
				/* end block 1.1.1.1 */
				// End offset: 0x800751C4
				// End Line: 163
			/* end block 1.1.1 */
			// End offset: 0x800751CC
			// End Line: 164
		/* end block 1.1 */
		// End offset: 0x800751CC
		// End Line: 165
	/* end block 1 */
	// End offset: 0x800751D4
	// End Line: 165

	/* begin block 2 */
		// Start line: 288
	/* end block 2 */
	// End Line: 289

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ScanMap__FPsi(short *list,int l)

{
	short sVar1;
	int x;
	short *psVar2;
	short *psVar3;
	int y;
	int iVar4;
	
	iVar4 = 0;
	while (y = 0, *list != -1) {
		while (x = 0, y < 0x70) {
			psVar2 = &TrigList + l * 0x40 + iVar4 * 2;
			do {
				sVar1 = GetDPiece__Fii(x,y);
				psVar3 = psVar2;
				if (sVar1 == *list) {
					if (0x1f < iVar4) {
						DBG_Error((char *)0x0,"source/TRIGS.cpp",0x99);
					}
					*psVar2 = (short)x;
					psVar2[1] = (short)y;
					psVar3 = psVar2 + 2;
					iVar4 = iVar4 + 1;
					x = 0x70;
					y = 0x70;
					*psVar3 = -1;
					psVar2[3] = -1;
				}
				x = x + 1;
				psVar2 = psVar3;
			} while (x < 0x70);
			y = y + 1;
		}
		list = list + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindBlock__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 176, offset 0x80075200
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x80075200
		// Variables:
	// 		struct BLOCK *ptr; // $a2
	/* end block 1 */
	// End offset: 0x8007528C
	// End Line: 192

	/* begin block 2 */
		// Start line: 366
	/* end block 2 */
	// End Line: 367

/* WARNING: Unknown calling convention yet parameter storage is locked */

int FindBlock__Fii(int x,int y)

{
	short sVar1;
	int iVar2;
	ushort *puVar3;
	BLOCK *pBVar4;
	
	pBVar4 = &BlockList;
	if (dPiece == (short *)0x0) {
		iVar2 = 0;
		if (BlockList.block != 0) {
			puVar3 = &BlockList.block;
			do {
				if (((uint)pBVar4->x == x) && ((uint)*(byte *)((int)puVar3 + -1) == y)) {
					return (uint)pBVar4->block;
				}
				puVar3 = puVar3 + 2;
				pBVar4 = pBVar4 + 1;
			} while (*puVar3 != 0);
			iVar2 = 0;
		}
	}
	else {
		sVar1 = GetDPiece__Fii(x,y);
		iVar2 = (int)sVar1;
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChangeBlock__Fiii(int x /*$s4*/, int y /*$s5*/, int bl /*$s3*/)
 // line 196, offset 0x8007529c
	/* begin block 1 */
		// Start line: 197
		// Start offset: 0x8007529C
		// Variables:
	// 		struct BLOCK *ptr; // $s1
	// 		short *list; // $s2

		/* begin block 1.1 */
			// Start line: 197
			// Start offset: 0x8007529C
			// Variables:
		// 		int b; // $a0
		/* end block 1.1 */
		// End offset: 0x80075324
		// End Line: 208
	/* end block 1 */
	// End offset: 0x800753B4
	// End Line: 224

	/* begin block 2 */
		// Start line: 408
	/* end block 2 */
	// End Line: 409

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChangeBlock__Fiii(int x,int y,int bl)

{
	short sVar1;
	ushort *puVar2;
	int iVar3;
	BLOCK *pBVar4;
	short *psVar5;
	
	pBVar4 = &BlockList;
	iVar3 = 0;
	if (0 < NoBlocks) {
		puVar2 = &BlockList.block;
		do {
			if ((x == (uint)pBVar4->x) && (y == (uint)*(byte *)((int)puVar2 + -1))) {
				*puVar2 = (ushort)bl;
				return;
			}
			puVar2 = puVar2 + 2;
			iVar3 = iVar3 + 1;
			pBVar4 = pBVar4 + 1;
		} while (iVar3 < NoBlocks);
	}
	if ((levlist != (short *)0x0) && (sVar1 = *levlist, *levlist != -1)) {
		puVar2 = &pBVar4->block;
		psVar5 = levlist;
		do {
			psVar5 = psVar5 + 1;
			if (bl == (int)sVar1) {
				if (0x9f < NoBlocks) {
					DBG_Error((char *)0x0,"source/TRIGS.cpp",0xd9);
				}
				pBVar4->x = (uchar)x;
				*(undefined *)((int)puVar2 + -1) = (char)y;
				*puVar2 = (ushort)bl;
				puVar2 = puVar2 + 2;
				pBVar4 = pBVar4 + 1;
				*puVar2 = 0;
				NoBlocks = NoBlocks + 1;
			}
			sVar1 = *psVar5;
		} while (*psVar5 != -1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ScanBlocks__FPs(short *list /*$s5*/)
 // line 230, offset 0x800753e0
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x800753E0
		// Variables:
	// 		struct BLOCK *ptr; // $s3

		/* begin block 1.1 */
			// Start line: 235
			// Start offset: 0x8007541C
			// Variables:
		// 		int bl; // $s4

			/* begin block 1.1.1 */
				// Start line: 237
				// Start offset: 0x8007542C
				// Variables:
			// 		int y; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 238
					// Start offset: 0x80075434

					/* begin block 1.1.1.1.1 */
						// Start line: 240
						// Start offset: 0x80075440
						// Variables:
					// 		int x; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800754B8
					// End Line: 252
				/* end block 1.1.1.1 */
				// End offset: 0x800754B8
				// End Line: 252
			/* end block 1.1.1 */
			// End offset: 0x800754C0
			// End Line: 253
		/* end block 1.1 */
		// End offset: 0x800754C0
		// End Line: 253
	/* end block 1 */
	// End offset: 0x800754C0
	// End Line: 253

	/* begin block 2 */
		// Start line: 482
	/* end block 2 */
	// End Line: 483

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ScanBlocks__FPs(short *list)

{
	ushort uVar1;
	ushort uVar2;
	ushort *puVar3;
	int x;
	int y;
	BLOCK *pBVar4;
	
	pBVar4 = &BlockList + NoBlocks;
	levlist = list;
	while (uVar1 = *list, uVar1 != 0xffff) {
		list = (short *)((ushort *)list + 1);
		y = 0;
		while (x = 0, y < 0x70) {
			puVar3 = &pBVar4->block;
			do {
				uVar2 = GetDPiece__Fii(x,y);
				if (uVar2 == uVar1) {
					if (0x9f < NoBlocks) {
						DBG_Error((char *)0x0,"source/TRIGS.cpp",0xf3);
					}
					pBVar4->x = (uchar)x;
					*(undefined *)((int)puVar3 + -1) = (char)y;
					*puVar3 = uVar1;
					puVar3 = puVar3 + 2;
					pBVar4 = pBVar4 + 1;
					*puVar3 = 0;
					NoBlocks = NoBlocks + 1;
				}
				x = x + 1;
			} while (x < 0x70);
			y = y + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BuildLevTrigs__Fv()
 // line 258, offset 0x800754e8
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x800754E8
	/* end block 1 */
	// End offset: 0x8007566C
	// End Line: 294

	/* begin block 2 */
		// Start line: 547
	/* end block 2 */
	// End Line: 548

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BuildLevTrigs__Fv(void)

{
	short *list;
	
	NoBlocks = 0;
	levlist = (short *)0x0;
	switch(leveltype) {
	case '\0':
		ScanMap__FPsi(TownDownList,0);
		ScanMap__FPsi(TownWarp1List,1);
		ScanMap__FPsi(TownWarp2List,2);
		ScanMap__FPsi(TownWarp3List,3);
		return;
	case '\x01':
		ScanMap__FPsi(L1UpList,0);
		ScanMap__FPsi(L1DownList,1);
		list = L1BlockList;
		break;
	case '\x02':
		ScanMap__FPsi(L2UpList,0);
		ScanMap__FPsi(L2DownList,1);
		ScanMap__FPsi(L2TWarpUpList,2);
		list = L2BlockList;
		break;
	case '\x03':
		ScanMap__FPsi(L3UpList,0);
		ScanMap__FPsi(L3DownList,1);
		ScanMap__FPsi(L3TWarpUpList,2);
		list = L3BlockList;
		break;
	case '\x04':
		ScanMap__FPsi(L4UpList,0);
		ScanMap__FPsi(L4DownList,1);
		ScanMap__FPsi(L4TWarpUpList,2);
		ScanMap__FPsi(L4PentaList,3);
		list = L4BlockList;
		break;
	default:
		goto switchD_8007551c_caseD_5;
	}
	ScanBlocks__FPs(list);
switchD_8007551c_caseD_5:
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFRIG__Fv()
 // line 323, offset 0x8007567c
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x8007567C
	/* end block 1 */
	// End offset: 0x80075694
	// End Line: 328

	/* begin block 2 */
		// Start line: 678
	/* end block 2 */
	// End Line: 679

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawFRIG__Fv(void)

{
	if (FRIGFirst == 0) {
		FRIGFirst = 1;
		FRIGFLAG = &DAT_00000001;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceTownTrig__Fv()
 // line 371, offset 0x8007569c
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x8007569C
	/* end block 1 */
	// End offset: 0x80075878
	// End Line: 452

	/* begin block 2 */
		// Start line: 773
	/* end block 2 */
	// End Line: 774

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceTownTrig__Fv(void)

{
	uchar uVar1;
	void *pvVar2;
	char *__src;
	
	pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,0);
	if (pvVar2 == (void *)0x0) {
		if ((townwarps == '\0') || (pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,1), pvVar2 == (void *)0x0))
		{
			if ((UCHAR_00h_8011bb7d == '\0') ||
				 (pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,2), pvVar2 == (void *)0x0)) {
				uVar1 = '\0';
				if (UCHAR_00h_8011bb7e != '\0') {
					pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,3);
					if (pvVar2 == (void *)0x0) {
						uVar1 = '\0';
					}
					else {
						__src = GetStr__Fi(0x114);
						strcpy(_infostr + sel_data * 0x100,__src);
						cursmx = 0x29;
						cursmy = 0x50;
						uVar1 = '\x01';
					}
				}
			}
			else {
				__src = GetStr__Fi(0x111);
				strcpy(_infostr + sel_data * 0x100,__src);
				cursmx = 0x11;
				cursmy = 0x45;
				uVar1 = '\x01';
			}
		}
		else {
			__src = GetStr__Fi(0x110);
			strcpy(_infostr + sel_data * 0x100,__src);
			cursmx = 0x31;
			cursmy = 0x15;
			uVar1 = '\x01';
		}
	}
	else {
		__src = GetStr__Fi(0x113);
		strcpy(_infostr + sel_data * 0x100,__src);
		cursmx = 0x19;
		cursmy = 0x1d;
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL1Trig__Fv()
 // line 456, offset 0x80075888
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x80075888
		// Variables:
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x80075A38
	// End Line: 493

	/* begin block 2 */
		// Start line: 947
	/* end block 2 */
	// End Line: 948

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL1Trig__Fv(void)

{
	void *pvVar1;
	char *__src;
	int iVar2;
	int iVar3;
	
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,0);
	if (pvVar1 != (void *)0x0) {
		if (currlevel < 2) {
			__src = GetStr__Fi(0x4a8);
			strcpy(_infostr + sel_data * 0x100,__src);
		}
		else {
			__src = GetStr__Fi(0x4a7);
			sprintf(_infostr + sel_data * 0x100,__src,(uint)currlevel - 1);
		}
		iVar2 = 0;
		if (0 < numtrigs) {
			iVar3 = 0;
			do {
				iVar2 = iVar2 + 1;
				if (*(int *)((int)&trigs._tmsg + iVar3) == 0x43) goto LAB_80075904;
				iVar3 = iVar3 + 0x10;
			} while (iVar2 < numtrigs);
		}
	}
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,1);
	if (pvVar1 != (void *)0x0) {
		__src = GetStr__Fi(0x115);
		sprintf(_infostr + sel_data * 0x100,__src,(uint)currlevel + 1);
		if (0 < numtrigs) {
			iVar3 = 0;
			do {
				if (*(int *)((int)&trigs._tmsg + iVar3) == 0x42) {
LAB_80075904:
					cursmx = *(int *)((int)&trigs._tx + iVar3);
					cursmy = *(int *)((int)&trigs._ty + iVar3);
					return '\x01';
				}
				iVar3 = iVar3 + 0x10;
			} while (iVar3 < numtrigs << 4);
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL2Trig__Fv()
 // line 499, offset 0x80075a48
	/* begin block 1 */
		// Start line: 500
		// Start offset: 0x80075A48
		// Variables:
	// 		int j; // $s1
	// 		int dx; // $s0
	// 		int dy; // $v1
	/* end block 1 */
	// End offset: 0x80075D24
	// End Line: 558

	/* begin block 2 */
		// Start line: 1060
	/* end block 2 */
	// End Line: 1061

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL2Trig__Fv(void)

{
	void *pvVar1;
	int iVar2;
	int iVar3;
	char *__format;
	int iVar4;
	int *piVar5;
	TriggerStruct *pTVar6;
	int iVar7;
	
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,0);
	if ((pvVar1 != (void *)0x0) && (iVar4 = 0, 0 < numtrigs)) {
		piVar5 = &trigs._ty;
		pTVar6 = &trigs;
		iVar7 = 0;
		do {
			if (*(int *)((int)&trigs._tmsg + iVar7) == 0x43) {
				iVar2 = abs(pTVar6->_tx - cursmx);
				iVar3 = abs(*piVar5 - cursmy);
				if ((iVar2 < 4) && (iVar3 < 4)) {
					__format = GetStr__Fi(0x4a7);
					sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel - 1);
					goto LAB_80075ce4;
				}
			}
			piVar5 = piVar5 + 4;
			pTVar6 = pTVar6 + 1;
			iVar4 = iVar4 + 1;
			iVar7 = iVar7 + 0x10;
		} while (iVar4 < numtrigs);
	}
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,1);
	if (pvVar1 != (void *)0x0) {
		__format = GetStr__Fi(0x115);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel + 1);
		iVar4 = 0;
		if (0 < numtrigs) {
			iVar7 = 0;
			do {
				iVar4 = iVar4 + 1;
				if (*(int *)((int)&trigs._tmsg + iVar7) == 0x42) {
					cursmx = *(int *)((int)&trigs._tx + iVar7);
					cursmy = *(int *)((int)&trigs._ty + iVar7);
					return '\x01';
				}
				iVar7 = iVar7 + 0x10;
			} while (iVar4 < numtrigs);
		}
	}
	if (((currlevel == '\x05') && (pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,2), pvVar1 != (void *)0x0)
			) && (iVar4 = 0, 0 < numtrigs)) {
		piVar5 = &trigs._ty;
		pTVar6 = &trigs;
		iVar7 = 0;
		do {
			if (*(int *)((int)&trigs._tmsg + iVar7) == 0x48) {
				iVar2 = abs(pTVar6->_tx - cursmx);
				iVar3 = abs(*piVar5 - cursmy);
				if ((iVar2 < 4) && (iVar3 < 4)) {
					__format = GetStr__Fi(0x4a8);
					strcpy(_infostr + sel_data * 0x100,__format);
LAB_80075ce4:
					cursmx = pTVar6->_tx;
					cursmy = *piVar5;
					return '\x01';
				}
			}
			piVar5 = piVar5 + 4;
			pTVar6 = pTVar6 + 1;
			iVar4 = iVar4 + 1;
			iVar7 = iVar7 + 0x10;
		} while (iVar4 < numtrigs);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL3Trig__Fv()
 // line 564, offset 0x80075d48
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x80075D48
		// Variables:
	// 		int j; // $s1
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x80076030
	// End Line: 620

	/* begin block 2 */
		// Start line: 1197
	/* end block 2 */
	// End Line: 1198

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL3Trig__Fv(void)

{
	bool bVar1;
	void *pvVar2;
	char *__format;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	TriggerStruct *pTVar8;
	
	pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,0);
	if (pvVar2 != (void *)0x0) {
		__format = GetStr__Fi(0x4a7);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel - 1);
		iVar6 = 0;
		if (0 < numtrigs) {
			iVar5 = 0;
			do {
				iVar6 = iVar6 + 1;
				if (*(int *)((int)&trigs._tmsg + iVar5) == 0x43) {
					cursmx = *(int *)((int)&trigs._tx + iVar5);
					cursmy = *(int *)((int)&trigs._ty + iVar5);
					return '\x01';
				}
				iVar5 = iVar5 + 0x10;
			} while (iVar6 < numtrigs);
		}
	}
	bVar1 = false;
	pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,1);
	if (((pvVar2 != (void *)0x0) ||
			(pvVar2 = FindLevTrig__Fiii(cursmx + 1,cursmy,1), pvVar2 != (void *)0x0)) ||
		 (pvVar2 = FindLevTrig__Fiii(cursmx + 2,cursmy,1), pvVar2 != (void *)0x0)) {
		bVar1 = true;
	}
	if (bVar1) {
		__format = GetStr__Fi(0x115);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel + 1);
		iVar6 = 0;
		if (0 < numtrigs) {
			iVar5 = 0;
			do {
				iVar6 = iVar6 + 1;
				if (*(int *)((int)&trigs._tmsg + iVar5) == 0x42) {
					cursmx = *(int *)((int)&trigs._tx + iVar5);
					cursmy = *(int *)((int)&trigs._ty + iVar5);
					return '\x01';
				}
				iVar5 = iVar5 + 0x10;
			} while (iVar6 < numtrigs);
		}
	}
	if (((currlevel == '\t') && (pvVar2 = FindLevTrig__Fiii(cursmx,cursmy,2), pvVar2 != (void *)0x0))
		 && (iVar6 = 0, 0 < numtrigs)) {
		piVar7 = &trigs._ty;
		pTVar8 = &trigs;
		iVar5 = 0;
		do {
			if (*(int *)((int)&trigs._tmsg + iVar5) == 0x48) {
				iVar3 = abs(pTVar8->_tx - cursmx);
				iVar4 = abs(*piVar7 - cursmy);
				if ((iVar3 < 4) && (iVar4 < 4)) {
					__format = GetStr__Fi(0x4a8);
					strcpy(_infostr + sel_data * 0x100,__format);
					cursmx = pTVar8->_tx;
					cursmy = *piVar7;
					return '\x01';
				}
			}
			piVar7 = piVar7 + 4;
			pTVar8 = pTVar8 + 1;
			iVar6 = iVar6 + 1;
			iVar5 = iVar5 + 0x10;
		} while (iVar6 < numtrigs);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceL4Trig__Fv()
 // line 626, offset 0x80076054
	/* begin block 1 */
		// Start line: 627
		// Start offset: 0x80076054
		// Variables:
	// 		int j; // $s1
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x8007636C
	// End Line: 694

	/* begin block 2 */
		// Start line: 1326
	/* end block 2 */
	// End Line: 1327

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceL4Trig__Fv(void)

{
	void *pvVar1;
	char *__format;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	TriggerStruct *pTVar7;
	
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,0);
	if (pvVar1 != (void *)0x0) {
		__format = GetStr__Fi(0x4a7);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel - 1);
		iVar5 = 0;
		if (0 < numtrigs) {
			iVar4 = 0;
			do {
				iVar5 = iVar5 + 1;
				if (*(int *)((int)&trigs._tmsg + iVar4) == 0x43) goto LAB_80076328;
				iVar4 = iVar4 + 0x10;
			} while (iVar5 < numtrigs);
		}
	}
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,1);
	if (pvVar1 != (void *)0x0) {
		__format = GetStr__Fi(0x115);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)currlevel + 1);
		iVar5 = 0;
		if (0 < numtrigs) {
			iVar4 = 0;
			do {
				iVar5 = iVar5 + 1;
				if (*(int *)((int)&trigs._tmsg + iVar4) == 0x42) goto LAB_80076328;
				iVar4 = iVar4 + 0x10;
			} while (iVar5 < numtrigs);
		}
	}
	if (((currlevel == '\r') && (pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,2), pvVar1 != (void *)0x0))
		 && (iVar5 = 0, 0 < numtrigs)) {
		piVar6 = &trigs._ty;
		pTVar7 = &trigs;
		iVar4 = 0;
		do {
			if (*(int *)((int)&trigs._tmsg + iVar4) == 0x48) {
				iVar2 = abs(pTVar7->_tx - cursmx);
				iVar3 = abs(*piVar6 - cursmy);
				if ((iVar2 < 4) && (iVar3 < 4)) {
					__format = GetStr__Fi(0x4a8);
					strcpy(_infostr + sel_data * 0x100,__format);
					cursmx = pTVar7->_tx;
					cursmy = *piVar6;
					return '\x01';
				}
			}
			piVar6 = piVar6 + 4;
			pTVar7 = pTVar7 + 1;
			iVar5 = iVar5 + 1;
			iVar4 = iVar4 + 0x10;
		} while (iVar5 < numtrigs);
	}
	if ((currlevel == '\x0f') && (pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,3), pvVar1 != (void *)0x0))
	{
		__format = GetStr__Fi(0x112);
		strcpy(_infostr + sel_data * 0x100,__format);
		if (0 < numtrigs) {
			iVar4 = 0;
			do {
				if (*(int *)((int)&trigs._tmsg + iVar4) == 0x42) {
LAB_80076328:
					cursmx = *(int *)((int)&trigs._tx + iVar4);
					cursmy = *(int *)((int)&trigs._ty + iVar4);
					return '\x01';
				}
				iVar4 = iVar4 + 0x10;
			} while (iVar4 < numtrigs << 4);
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ Freeupstairs__Fv()
 // line 699, offset 0x80076390
	/* begin block 1 */
		// Start line: 700
		// Start offset: 0x80076390
		// Variables:
	// 		int j; // $t0
	// 		int tx; // $t1
	// 		int ty; // $t2
	// 		int xx; // $a0
	// 		int yy; // $a1
	/* end block 1 */
	// End offset: 0x80076434
	// End Line: 710

	/* begin block 2 */
		// Start line: 1477
	/* end block 2 */
	// End Line: 1478

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
					(&dung_map)[iVar2 * 0x70 + iVar1].dFlags = (&dung_map)[iVar2 * 0x70 + iVar1].dFlags | 8;
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
 // line 716, offset 0x80076440
	/* begin block 1 */
		// Start line: 717
		// Start offset: 0x80076440
	/* end block 1 */
	// End offset: 0x800764BC
	// End Line: 725

	/* begin block 2 */
		// Start line: 1513
	/* end block 2 */
	// End Line: 1514

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceSKingTrig__Fv(void)

{
	void *pvVar1;
	char *__format;
	
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,0);
	if (pvVar1 != (void *)0x0) {
		__format = GetStr__Fi(0x3b);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)QuestStruct_800ddb30._qlevel);
		cursmx = trigs._tx;
		cursmy = trigs._ty;
	}
	return (uchar)(pvVar1 != (void *)0x0);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForceSChambTrig__Fv()
 // line 733, offset 0x800764cc
	/* begin block 1 */
		// Start line: 734
		// Start offset: 0x800764CC
	/* end block 1 */
	// End offset: 0x80076548
	// End Line: 742

	/* begin block 2 */
		// Start line: 1552
	/* end block 2 */
	// End Line: 1553

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForceSChambTrig__Fv(void)

{
	void *pvVar1;
	char *__format;
	
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,1);
	if (pvVar1 != (void *)0x0) {
		__format = GetStr__Fi(0x3b);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)QuestStruct_800ddb58._qlevel);
		cursmx = trigs._tx;
		cursmy = trigs._ty;
	}
	return (uchar)(pvVar1 != (void *)0x0);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ForcePWaterTrig__Fv()
 // line 750, offset 0x80076558
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x80076558
	/* end block 1 */
	// End offset: 0x800765D4
	// End Line: 759

	/* begin block 2 */
		// Start line: 1591
	/* end block 2 */
	// End Line: 1592

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ForcePWaterTrig__Fv(void)

{
	void *pvVar1;
	char *__format;
	
	pvVar1 = FindLevTrig__Fiii(cursmx,cursmy,1);
	if (pvVar1 != (void *)0x0) {
		__format = GetStr__Fi(0x3b);
		sprintf(_infostr + sel_data * 0x100,__format,(uint)QuestStruct_800ddb44._qlevel);
		cursmx = trigs._tx;
		cursmy = trigs._ty;
	}
	return (uchar)(pvVar1 != (void *)0x0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckTrigForce__Fv()
 // line 769, offset 0x800765e4
	/* begin block 1 */
		// Start line: 770
		// Start offset: 0x800765E4
		// Variables:
	// 		int ocursmx; // $s3
	// 		int ocursmy; // $s2

		/* begin block 1.1 */
			// Start line: 770
			// Start offset: 0x800765E4

			/* begin block 1.1.1 */
				// Start line: 777
				// Start offset: 0x8007663C

				/* begin block 1.1.1.1 */
					// Start line: 778
					// Start offset: 0x8007663C
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x800767A4
				// End Line: 802
			/* end block 1.1.1 */
			// End offset: 0x800767A4
			// End Line: 802

			/* begin block 1.1.2 */
				// Start line: 802
				// Start offset: 0x800767A4

				/* begin block 1.1.2.1 */
					// Start line: 802
					// Start offset: 0x800767A4
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.2.1 */
				// End offset: 0x800768A8
				// End Line: 822
			/* end block 1.1.2 */
			// End offset: 0x800768A8
			// End Line: 822
		/* end block 1.1 */
		// End offset: 0x800768A8
		// End Line: 822
	/* end block 1 */
	// End offset: 0x800768D0
	// End Line: 824

	/* begin block 2 */
		// Start line: 1634
	/* end block 2 */
	// End Line: 1635

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckTrigForce__Fv(void)

{
	int iVar1;
	int iVar2;
	uchar uVar3;
	int iVar4;
	
	iVar2 = cursmy;
	iVar1 = cursmx;
	FRIGFirst = 0;
	_trigflag[sel_data] = '\0';
	if (setlevel == '\0') {
		uVar3 = _trigflag[sel_data];
		iVar4 = 0;
		while (uVar3 == '\0') {
			cursmx = iVar1 + (int)(&offset_x)[iVar4];
			cursmy = iVar2 + (int)(&offset_y)[iVar4];
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
				goto switchD_800766b8_caseD_5;
			}
			_trigflag[sel_data] = uVar3;
switchD_800766b8_caseD_5:
			if ((leveltype != '\0') && (_trigflag[sel_data] == '\0')) {
				uVar3 = ForceQuests__Fv();
				_trigflag[sel_data] = uVar3;
			}
			iVar4 = iVar4 + 1;
			if (7 < iVar4) goto LAB_800768a8;
			uVar3 = _trigflag[sel_data];
		}
	}
	else {
		iVar4 = 0;
		if (_trigflag[sel_data] == '\0') {
			do {
				cursmx = iVar1 + (int)(&offset_x)[iVar4];
				cursmy = iVar2 + (int)(&offset_y)[iVar4];
				if (setlvlnum == '\x02') {
					uVar3 = ForceSChambTrig__Fv();
LAB_80076864:
					_trigflag[sel_data] = uVar3;
				}
				else {
					if (setlvlnum < 3) {
						if (setlvlnum == '\x01') {
							uVar3 = ForceSKingTrig__Fv();
							goto LAB_80076864;
						}
					}
					else {
						if (setlvlnum == '\x04') {
							uVar3 = ForcePWaterTrig__Fv();
							goto LAB_80076864;
						}
					}
				}
				iVar4 = iVar4 + 1;
			} while ((iVar4 < 8) && (_trigflag[sel_data] == '\0'));
LAB_800768a8:
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
 // line 833, offset 0x800768f0
	/* begin block 1 */
		// Start line: 834
		// Start offset: 0x800768F0
	/* end block 1 */
	// End offset: 0x80076984
	// End Line: 856

	/* begin block 2 */
		// Start line: 1773
	/* end block 2 */
	// End Line: 1774

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FadeGameOut__Fv(void)

{
	void *pvVar1;
	
	PA_SetPauseOk__Fb((void *)0x0);
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	PauseMode = '\x01';
	music_fade__Fv();
	stream_stop__Fv();
	pvVar1 = PaletteFadeOut__Fi(8);
	if (pvVar1 != (void *)0x0) {
		while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
			TSK_Sleep(1);
		}
	}
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	BlackPalette__Fv();
	music_stop__Fv();
	PauseMode = '\0';
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsTrigger__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 863, offset 0x80076994
	/* begin block 1 */
		// Start line: 864
		// Start offset: 0x80076994
		// Variables:
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x80076A84
	// End Line: 883

	/* begin block 2 */
		// Start line: 1835
	/* end block 2 */
	// End Line: 1836

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * IsTrigger__Fii(int x,int y)

{
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (0 < numtrigs) {
		do {
			if ((x == *(int *)((int)&trigs._tx + iVar1)) && (y == *(int *)((int)&trigs._ty + iVar1))) {
				return &DAT_00000001;
			}
			iVar1 = iVar1 + 0x10;
		} while (iVar1 < numtrigs << 4);
	}
	iVar2 = 0;
	iVar1 = 0;
	while ((((currlevel != (&quests._qlevel)[iVar1] || ((&quests._qslvl)[iVar1] == '\0')) ||
					((&quests._qactive)[iVar1] == '\0')) ||
				 ((x != *(int *)((int)&quests._qtx + iVar1) || (y != *(int *)((int)&quests._qty + iVar1)))))
				) {
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x14;
		if (0xf < iVar2) {
			return (void *)0x0;
		}
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckTrigLevel__Fi(int level /*$a0*/)
 // line 888, offset 0x80076a8c
	/* begin block 1 */
		// Start line: 889
		// Start offset: 0x80076A8C
	/* end block 1 */
	// End offset: 0x80076AC0
	// End Line: 892

	/* begin block 2 */
		// Start line: 1884
	/* end block 2 */
	// End Line: 1885

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * CheckTrigLevel__Fi(int level)

{
	undefined *puVar1;
	
	puVar1 = &DAT_00000001;
	if (((int)plr._pLevel < level) &&
		 (puVar1 = (undefined *)0x0, level <= (int)PlayerStruct_800dbf20._pLevel)) {
		puVar1 = &DAT_00000001;
	}
	return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckTriggers__Fi(int pnum /*$s7*/)
 // line 895, offset 0x80076ac8
	/* begin block 1 */
		// Start line: 896
		// Start offset: 0x80076AC8
		// Variables:
	// 		int x; // $a1
	// 		int y; // $a2

		/* begin block 1.1 */
			// Start line: 905
			// Start offset: 0x80076B10
			// Variables:
		// 		int i; // $fp

			/* begin block 1.1.1 */
				// Start line: 905
				// Start offset: 0x80076B44

				/* begin block 1.1.1.1 */
					// Start line: 916
					// Start offset: 0x80076C30

					/* begin block 1.1.1.1.1 */
						// Start line: 916
						// Start offset: 0x80076C60

						/* begin block 1.1.1.1.1.1 */
							// Start line: 948
							// Start offset: 0x80076D28

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 948
								// Start offset: 0x80076D3C
								// Variables:
							// 		unsigned char abortflag; // $s0
							// 		int dx; // $s2
							// 		int dy; // $s1
							// 		char m; // $s3
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80076EA4
							// End Line: 978
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80076EA4
						// End Line: 978
					/* end block 1.1.1.1.1 */
					// End offset: 0x80076F1C
					// End Line: 1011
				/* end block 1.1.1.1 */
				// End offset: 0x80076F1C
				// End Line: 1011
			/* end block 1.1.1 */
			// End offset: 0x80077010
			// End Line: 1046
		/* end block 1.1 */
		// End offset: 0x80077020
		// End Line: 1051
	/* end block 1 */
	// End offset: 0x80077020
	// End Line: 1051

	/* begin block 2 */
		// Start line: 1904
	/* end block 2 */
	// End Line: 1905

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckTriggers__Fi(int pnum)

{
	bool bVar1;
	char cVar2;
	undefined *puVar3;
	int lvl;
	_135fake psfx;
	uint fom;
	int y;
	uchar y_00;
	uchar x;
	char e;
	int iVar4;
	uint *puVar5;
	int iVar6;
	
	if (plr.plractive == '\0') {
		myplr = 1;
	}
	iVar6 = 0;
	puVar5 = &trigs._tmsg;
	iVar4 = 0;
	do {
		if (numtrigs <= iVar6) {
			return;
		}
		if ((((((int)(&plr)[pnum]._px == *(int *)((int)&trigs._tx + iVar4)) &&
					((int)(&plr)[pnum]._py == *(int *)((int)&trigs._ty + iVar4))) && (qtextflag == '\0')) &&
				(PauseMode == '\0')) &&
			 (((gbMaxPlayers != '\x02' || ((&plr)[pnum ^ 1U].plractive == '\0')) ||
				((&plr)[pnum ^ 1U].destAction != '\r')))) {
			switch(*puVar5) {
			case 0x42:
				if ((0xb < (&_pcurs)[myplr]) && (fom = FUN_80160c9c(), (fom & 0xff) != 0)) {
					return;
				}
				FadeGameOut__Fv();
				fom = *puVar5;
				lvl = (uint)currlevel + 1;
				break;
			case 0x43:
				if ((0xb < (&_pcurs)[myplr]) && (fom = FUN_80160c9c(), (fom & 0xff) != 0)) {
					return;
				}
				FadeGameOut__Fv();
				fom = *puVar5;
				lvl = (uint)currlevel - 1;
				break;
			case 0x44:
				FadeGameOut__Fv();
				fom = *puVar5;
				lvl = ReturnLvl;
				break;
			default:
				goto switchD_80076c58_caseD_45;
			case 0x47:
				bVar1 = false;
				if (gbMaxPlayers != '\x01') {
					x = '\0';
					y_00 = '\0';
					lvl = *(int *)((int)&trigs._tlvl + iVar4);
					e = '\0';
					if (lvl == 5) {
						puVar3 = (undefined *)CheckTrigLevel__Fi(8);
						bVar1 = puVar3 != &DAT_00000001;
						x = '\0';
						y_00 = '\0';
						if (bVar1) {
							e = '(';
							x = (uchar)(&plr)[pnum]._px;
							y_00 = (char)(&plr)[pnum]._py + '\x01';
						}
						lvl = *(int *)((int)&trigs._tlvl + iVar4);
					}
					if (lvl == 9) {
						puVar3 = (undefined *)CheckTrigLevel__Fi(0xd);
						if (puVar3 != &DAT_00000001) {
							bVar1 = true;
							e = ')';
							y_00 = (uchar)(&plr)[pnum]._py;
							x = (char)(&plr)[pnum]._px + '\x01';
						}
						lvl = *(int *)((int)&trigs._tlvl + iVar4);
					}
					if ((lvl == 0xd) &&
						 (puVar3 = (undefined *)CheckTrigLevel__Fi(0x11), puVar3 != &DAT_00000001)) {
						e = '*';
						x = (uchar)(&plr)[pnum]._px;
						y_00 = (char)(&plr)[pnum]._py + '\x01';
						bVar1 = true;
					}
					if (bVar1) {
						cVar2 = (&plr)[pnum]._pClass;
						if (cVar2 == '\0') {
							psfx = PS_WARR43;
						}
						else {
							if (cVar2 == '\x01') {
								psfx = PS_ROGUE43;
							}
							else {
								psfx = PS_MAGE43;
								if (cVar2 != '\x02') goto LAB_80076e80;
							}
						}
						PlaySFX__Fi(psfx);
LAB_80076e80:
						InitDiabloMsg__Fc(e);
						NetSendCmdLoc__FUcUcUcUc('\x01','\x01',x,y_00);
						return;
					}
				}
				FadeGameOut__Fv();
				fom = *puVar5;
				lvl = *(int *)((int)&trigs._tlvl + iVar4);
				break;
			case 0x48:
				TWarpFrom = ZEXT14(currlevel);
				FadeGameOut__Fv();
				fom = *puVar5;
				lvl = 0;
			}
			StartNewLvl__Fiii(myplr,fom,lvl);
switchD_80076c58_caseD_45:
			lvl = ViewX;
			y = ViewY;
			if (plr.plractive != '\0') {
				PlacePlayer__FiiiUc(0,ViewX,ViewY,'\x01');
				lvl = (int)plr._px;
				y = (int)plr._py;
			}
			if ((FePlayerNo == 0) || (plr.plractive == '\0')) {
				if (PlayerStruct_800dbf20.plractive != '\0') {
					PlacePlayer__FiiiUc(1,lvl,y,'\0');
				}
			}
			else {
				if (PlayerStruct_800dbf20.plractive != '\0') {
					PlacePlayer__FiiiUc(1,(int)plr._px,(int)plr._py,'\0');
					ChangeLight__Fiiii((int)PlayerStruct_800dbf20._plid,(int)PlayerStruct_800dbf20._px,
														 (int)PlayerStruct_800dbf20._py,
														 (int)(&DAT_000023f0 + (int)PlayerStruct_800dbf20._pLightRad));
				}
			}
		}
		puVar5 = puVar5 + 4;
		iVar4 = iVar4 + 0x10;
		iVar6 = iVar6 + 1;
	} while( true );
}





