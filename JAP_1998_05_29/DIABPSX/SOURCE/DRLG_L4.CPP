#include "THISDUST.H"
#include "DRLG_L4.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4Shadows__Fv()
 // line 144, offset 0x8014f4a8
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x8014F4A8
		// Variables:
	// 		int x; // $a2
	// 		int y; // $t0
	// 		unsigned char okflag; // $v0
	/* end block 1 */
	// End offset: 0x8014F564
	// End Line: 161

	/* begin block 2 */
		// Start line: 292
	/* end block 2 */
	// End Line: 293

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4Shadows__Fv(void)

{
	ushort uVar1;
	ushort *puVar2;
	ushort *puVar3;
	ushort *puVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 1;
	do {
		iVar5 = 1;
		puVar4 = dungeon;
		puVar3 = dungeon;
		do {
			puVar3 = puVar3 + 0x30;
			uVar1 = puVar3[iVar6];
			puVar2 = puVar4 + iVar6;
			if (uVar1 == 0xf || (uVar1 == 8 || (uVar1 == 4 || uVar1 == 3))) {
				if (*puVar2 == 6) {
					*puVar2 = 0x2f;
				}
				if (puVar2[-1] == 6) {
					puVar2[-1] = 0x30;
				}
			}
			puVar4 = puVar4 + 0x30;
			iVar5 = iVar5 + 1;
		} while (iVar5 < 0x28);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitL4Dungeon__Fv()
 // line 166, offset 0x8014f56c
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x8014F56C

		/* begin block 1.1 */
			// Start line: 167
			// Start offset: 0x8014F56C
			// Variables:
		// 		int j; // $a1

			/* begin block 1.1.1 */
				// Start line: 171
				// Start offset: 0x8014F598

				/* begin block 1.1.1.1 */
					// Start line: 172
					// Start offset: 0x8014F5A4
					// Variables:
				// 		int i; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8014F5C4
				// End Line: 174
			/* end block 1.1.1 */
			// End offset: 0x8014F5C4
			// End Line: 174
		/* end block 1.1 */
		// End offset: 0x8014F5CC
		// End Line: 175

		/* begin block 1.2 */
			// Start line: 176
			// Start offset: 0x8014F5CC
			// Variables:
		// 		int j; // $a3
		// 		int j; // $a1

			/* begin block 1.2.1 */
				// Start line: 176
				// Start offset: 0x8014F5D4

				/* begin block 1.2.1.1 */
					// Start line: 177
					// Start offset: 0x8014F5E0
					// Variables:
				// 		int i; // $a0
				/* end block 1.2.1.1 */
				// End offset: 0x8014F604
				// End Line: 179
			/* end block 1.2.1 */
			// End offset: 0x8014F604
			// End Line: 179
		/* end block 1.2 */
		// End offset: 0x8014F610
		// End Line: 180
	/* end block 1 */
	// End offset: 0x8014F610
	// End Line: 180

	/* begin block 2 */
		// Start line: 332
	/* end block 2 */
	// End Line: 333

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL4Dungeon__Fv(void)

{
	int iVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	memset(&L4dungeon,0,0x1900);
	iVar5 = 0;
	while (iVar3 = 0, puVar2 = dungeon, iVar5 < 0x30) {
		do {
			puVar2[iVar5] = 0x1e;
			iVar3 = iVar3 + 1;
			puVar2 = puVar2 + 0x30;
		} while (iVar3 < 0x30);
		iVar5 = iVar5 + 1;
	}
	iVar3 = 0;
	iVar5 = 0;
	while (iVar4 = 0, iVar3 < 0x28) {
		do {
			iVar1 = iVar5 + iVar4;
			iVar4 = iVar4 + 1;
			mydflags[iVar1] = '\0';
		} while (iVar4 < 0x28);
		iVar5 = iVar5 + 0x28;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_LoadL4SP__Fv()
 // line 187, offset 0x8014f620
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x8014F620
	/* end block 1 */
	// End offset: 0x8014F6B4
	// End Line: 197

	/* begin block 2 */
		// Start line: 375
	/* end block 2 */
	// End Line: 376

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_LoadL4SP__Fv(void)

{
	uchar uVar1;
	
	setloadflag = '\0';
	uVar1 = QuestStatus__Fi(0xb);
	if (uVar1 != '\0') {
		pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("Warlord.DUN",(ulong *)0x0);
		setloadflag = '\x01';
	}
	if ((currlevel == '\x0f') && (gbMaxPlayers != '\x01')) {
		pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("Vile14.DUN",(ulong *)0x0);
		setloadflag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_FreeL4SP__Fv()
 // line 202, offset 0x8014f6c4
	/* begin block 1 */
		// Start line: 203
		// Start offset: 0x8014F6C4

		/* begin block 1.1 */
			// Start line: 203
			// Start offset: 0x8014F6C4
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x8014F6E4
		// End Line: 205
	/* end block 1 */
	// End offset: 0x8014F6E4
	// End Line: 205

	/* begin block 2 */
		// Start line: 407
	/* end block 2 */
	// End Line: 408

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_FreeL4SP__Fv(void)

{
	uchar *p;
	
	p = pSetPiece;
	pSetPiece = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4SetSPRoom__Fii(int rx1 /*$a0*/, int ry1 /*$a1*/)
 // line 211, offset 0x8014f6f4
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x8014F6F4
		// Variables:
	// 		int rw; // $t4
	// 		int rh; // $t5
	// 		int i; // $a3
	// 		int j; // $t2
	// 		unsigned char *sp; // $t0
	/* end block 1 */
	// End offset: 0x8014F7E8
	// End Line: 237

	/* begin block 2 */
		// Start line: 425
	/* end block 2 */
	// End Line: 426

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4SetSPRoom__Fii(int rx1,int ry1)

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
						dungeon[iVar3 * 0x30 + iVar2] = 6;
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
// void /*$ra*/ L4makeDmt__Fv()
 // line 243, offset 0x8014f7f4
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8014F7F4
		// Variables:
	// 		int i; // $t2
	// 		int j; // $t3
	// 		int idx; // $v0
	// 		int val; // $v0
	// 		int dmty; // $t4
	/* end block 1 */
	// End offset: 0x8014F890
	// End Line: 261

	/* begin block 2 */
		// Start line: 517
	/* end block 2 */
	// End Line: 518

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4makeDmt__Fv(void)

{
	ushort *puVar1;
	ushort *puVar2;
	undefined1 *puVar3;
	uchar *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = 0;
	iVar6 = 1;
	do {
		iVar5 = 1;
		puVar3 = &DAT_8014da68;
		puVar2 = dungeon;
		puVar4 = &L4dungeon;
		do {
			puVar4 = puVar4 + 0xa0;
			puVar1 = puVar2 + iVar7;
			puVar2 = puVar2 + 0x30;
			iVar5 = iVar5 + 2;
			*puVar1 = (ushort)L4ConvTbl[(uint)(byte)puVar3[iVar6] + (uint)puVar4[iVar6] * 2 +
																	(uint)(byte)(puVar3 + iVar6)[1] * 4 +
																	(uint)(puVar4 + iVar6)[1] * 8];
			puVar3 = puVar3 + 0xa0;
		} while (iVar5 < 0x4e);
		iVar6 = iVar6 + 2;
		iVar7 = iVar7 + 1;
	} while (iVar6 < 0x4e);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ L4HWallOk__Fii(int i /*$a0*/, int j /*$a1*/)
 // line 266, offset 0x8014f898
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x8014F898
		// Variables:
	// 		int x; // $t1
	// 		unsigned char wallok; // $v1
	/* end block 1 */
	// End offset: 0x8014F9E0
	// End Line: 286

	/* begin block 2 */
		// Start line: 570
	/* end block 2 */
	// End Line: 571

/* WARNING: Unknown calling convention yet parameter storage is locked */

int L4HWallOk__Fii(int i,int j)

{
	ushort uVar1;
	int iVar2;
	ushort *puVar3;
	int iVar4;
	
	iVar4 = 1;
	iVar2 = i + 1;
	puVar3 = dungeon + iVar2 * 0x30 + j;
	uVar1 = *puVar3;
	while ((((uVar1 == 6 && (mydflags[j * 0x28 + iVar2] == '\0')) && (puVar3[-1] == 6)) &&
				 (puVar3[1] == 6))) {
		iVar4 = iVar4 + 1;
		iVar2 = i + iVar4;
		puVar3 = dungeon + iVar2 * 0x30 + j;
		uVar1 = *puVar3;
	}
	uVar1 = dungeon[(i + iVar4) * 0x30 + j];
	if (iVar4 < 4 ||
			uVar1 != 0x16 &&
			(uVar1 != 0x15 &&
			(uVar1 != 0x10 && (uVar1 != 0xf && (uVar1 != 0xd && (uVar1 != 0xc && uVar1 != 10)))))) {
		iVar4 = -1;
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ L4VWallOk__Fii(int i /*$t0*/, int j /*$a1*/)
 // line 291, offset 0x8014f9e8
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x8014F9E8
		// Variables:
	// 		int y; // $t2
	// 		unsigned char wallok; // $v1
	/* end block 1 */
	// End offset: 0x8014FB50
	// End Line: 312

	/* begin block 2 */
		// Start line: 616
	/* end block 2 */
	// End Line: 617

/* WARNING: Unknown calling convention yet parameter storage is locked */

int L4VWallOk__Fii(int i,int j)

{
	ushort uVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 1;
	iVar2 = j + 1;
	uVar1 = (dungeon + i * 0x30)[iVar2];
	while ((((uVar1 == 6 && (mydflags[iVar2 * 0x28 + i] == '\0')) &&
					(*(short *)((int)PTR_ARRAY_800e4064 + iVar2 * 2 + i * 0x60) == 6)) &&
				 (*(short *)(iVar2 * 2 + i * 0x60 + -0x7ff1bedc) == 6))) {
		iVar3 = iVar3 + 1;
		iVar2 = j + iVar3;
		uVar1 = (dungeon + i * 0x30)[iVar2];
	}
	uVar1 = dungeon[i * 0x30 + j + iVar3];
	if (iVar3 < 4 ||
			uVar1 != 0x17 &&
			(uVar1 != 0x15 &&
			(uVar1 != 0x10 &&
			(uVar1 != 0xf && (uVar1 != 0xe && (uVar1 != 0xb && (uVar1 != 9 && uVar1 != 8))))))) {
		iVar3 = -1;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4HorizWall__Fiii(int i /*$s1*/, int j /*$a1*/, int dx /*$a2*/)
 // line 317, offset 0x8014fb58
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x8014FB58
		// Variables:
	// 		int xx; // $a3
	/* end block 1 */
	// End offset: 0x8014FD0C
	// End Line: 339

	/* begin block 2 */
		// Start line: 668
	/* end block 2 */
	// End Line: 669

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4HorizWall__Fiii(int i,int j,int dx)

{
	ushort uVar1;
	int iVar2;
	long lVar3;
	undefined2 *puVar4;
	ushort *puVar5;
	int iVar6;
	
	puVar5 = dungeon + i * 0x30 + j;
	uVar1 = *puVar5;
	if (uVar1 == 0xd) {
		*puVar5 = 0x11;
		uVar1 = *puVar5;
	}
	if (uVar1 == 0x10) {
		*puVar5 = 0xb;
	}
	if (*puVar5 == 0xc) {
		*puVar5 = 0xe;
	}
	iVar6 = 1;
	if (1 < dx) {
		do {
			iVar2 = i + iVar6;
			iVar6 = iVar6 + 1;
			dungeon[iVar2 * 0x30 + j] = 2;
		} while (iVar6 < dx);
	}
	puVar5 = dungeon + (i + dx) * 0x30 + j;
	uVar1 = *puVar5;
	if (uVar1 == 0xf) {
		*puVar5 = 0xe;
		uVar1 = *puVar5;
	}
	if (uVar1 == 10) {
		*puVar5 = 0x11;
	}
	uVar1 = *puVar5;
	if (uVar1 == 0x15) {
		*puVar5 = 0x17;
		uVar1 = *puVar5;
	}
	if (uVar1 == 0x16) {
		*puVar5 = 0x1d;
	}
	lVar3 = ENG_random__Fl(dx + -3);
	i = i + lVar3 + 1;
	iVar6 = i * 0x60;
	puVar5 = dungeon + i * 0x30 + j;
	*puVar5 = 0x39;
	*(undefined2 *)(j * 2 + iVar6 + -0x7ff1be7c) = 0x38;
	puVar4 = (undefined2 *)(j * 2 + iVar6 + -0x7ff1bedc);
	*puVar4 = 0x3c;
	if (puVar5[-1] == 6) {
		puVar5[-1] = 0x3a;
	}
	if (puVar4[-1] == 6) {
		puVar4[-1] = 0x3b;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4VertWall__Fiii(int i /*$a0*/, int j /*$s0*/, int dy /*$a2*/)
 // line 344, offset 0x8014fd28
	/* begin block 1 */
		// Start line: 345
		// Start offset: 0x8014FD28
		// Variables:
	// 		int yy; // $v1
	/* end block 1 */
	// End offset: 0x8014FECC
	// End Line: 367

	/* begin block 2 */
		// Start line: 726
	/* end block 2 */
	// End Line: 727

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4VertWall__Fiii(int i,int j,int dy)

{
	ushort uVar1;
	int iVar2;
	long lVar3;
	int iVar4;
	short *psVar5;
	ushort *puVar6;
	
	puVar6 = dungeon + i * 0x30 + j;
	uVar1 = *puVar6;
	if (uVar1 == 0xe) {
		*puVar6 = 0x11;
		uVar1 = *puVar6;
	}
	if (uVar1 == 8) {
		*puVar6 = 9;
	}
	iVar4 = 1;
	if (*puVar6 == 0xf) {
		*puVar6 = 10;
	}
	if (1 < dy) {
		iVar2 = j + 1;
		do {
			(dungeon + i * 0x30)[iVar2] = 1;
			iVar4 = iVar4 + 1;
			iVar2 = j + iVar4;
		} while (iVar4 < dy);
	}
	puVar6 = dungeon + i * 0x30 + j + dy;
	uVar1 = *puVar6;
	if (uVar1 == 0xb) {
		*puVar6 = 0x11;
		uVar1 = *puVar6;
	}
	if (uVar1 == 9) {
		*puVar6 = 10;
	}
	uVar1 = *puVar6;
	if (uVar1 == 0x10) {
		*puVar6 = 0xd;
		uVar1 = *puVar6;
	}
	if (uVar1 == 0x15) {
		*puVar6 = 0x16;
	}
	if (*puVar6 == 0x17) {
		*puVar6 = 0x1d;
	}
	lVar3 = ENG_random__Fl(dy + -3);
	j = j + lVar3 + 1;
	puVar6 = dungeon + i * 0x30 + j;
	*puVar6 = 0x35;
	puVar6[2] = 0x34;
	puVar6[1] = 6;
	psVar5 = (short *)((int)PTR_ARRAY_800e4064 + j * 2 + i * 0x60);
	if (*psVar5 == 6) {
		*psVar5 = 0x36;
	}
	if (psVar5[-1] == 6) {
		psVar5[-1] = 0x37;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4AddWall__Fv()
 // line 373, offset 0x8014feec
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x8014FEEC
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int x; // $v0
	// 		int y; // $v0
	/* end block 1 */
	// End offset: 0x8015036C
	// End Line: 445

	/* begin block 2 */
		// Start line: 788
	/* end block 2 */
	// End Line: 789

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4AddWall__Fv(void)

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
				if (((puVar2[j] == 10) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0xc) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0xd) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0xf) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0x10) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0x15) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0x16) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4HWallOk__Fii(i,j), dx != -1)) {
					L4HorizWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 8) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 9) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0xb) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0xe) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0xf) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0x10) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0x15) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
				}
				if (((puVar2[j] == 0x17) && (lVar1 = ENG_random__Fl(100), lVar1 < 100)) &&
					 (dx = L4VWallOk__Fii(i,j), dx != -1)) {
					L4VertWall__Fiii(i,j,dx);
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
// void /*$ra*/ L4tileFix__Fv()
 // line 450, offset 0x80150394
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x80150394
		// Variables:
	// 		int j; // $t7
	/* end block 1 */
	// End offset: 0x8015254C
	// End Line: 659

	/* begin block 2 */
		// Start line: 954
	/* end block 2 */
	// End Line: 955

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4tileFix__Fv(void)

{
	short sVar1;
	undefined2 *puVar2;
	short *psVar3;
	short *psVar4;
	ushort *puVar5;
	ushort *puVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar10 = 0;
	iVar8 = 0;
	puVar6 = dungeon;
	iVar11 = -0x7ff1bedc;
	do {
		do {
			if (*(short *)(iVar8 + (int)puVar6) == 2) {
				psVar4 = (short *)(iVar8 + iVar11);
				if (*psVar4 == 6) {
					*psVar4 = 5;
				}
				if ((*(short *)(iVar8 + (int)puVar6) == 2) && (*psVar4 == 1)) {
					*psVar4 = 0xd;
				}
			}
			psVar4 = (short *)(iVar8 + (int)puVar6);
			if ((*psVar4 == 1) && (psVar4[1] == 2)) {
				psVar4[1] = 0xe;
			}
			puVar6 = puVar6 + 0x30;
			iVar11 = iVar11 + 0x60;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar10 = iVar10 + 1;
		iVar8 = iVar10 * 2;
		puVar6 = dungeon;
		iVar11 = -0x7ff1bedc;
	} while (iVar10 < 0x28);
	iVar11 = 0;
	do {
		iVar10 = iVar11 * 2;
		iVar9 = 0;
		puVar6 = dungeon;
		iVar8 = -0x7ff1bedc;
		do {
			if (puVar6[iVar11] == 2) {
				psVar4 = (short *)(iVar10 + iVar8);
				if (*psVar4 == 6) {
					*psVar4 = 2;
				}
				if ((puVar6[iVar11] == 2) && (*psVar4 == 9)) {
					*psVar4 = 0xb;
				}
			}
			if ((puVar6[iVar11] == 9) && (psVar4 = (short *)(iVar10 + iVar9 + -0x7ff1bedc), *psVar4 == 6))
			{
				*psVar4 = 0xc;
			}
			puVar5 = puVar6 + iVar11;
			if ((puVar6[iVar11] == 0xe) &&
				 (psVar4 = (short *)(iVar10 + iVar9 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0xd;
			}
			if (*puVar5 == 6) {
				psVar4 = (short *)(iVar10 + iVar9 + -0x7ff1bedc);
				if (*psVar4 == 0xe) {
					*psVar4 = 0xf;
				}
				if ((*puVar5 == 6) && (puVar5[1] == 0xd)) {
					puVar5[1] = 0x10;
				}
			}
			puVar5 = puVar6 + iVar11;
			if ((*puVar5 == 1) && (puVar5[1] == 9)) {
				puVar5[1] = 10;
			}
			puVar5 = puVar6 + iVar11;
			if ((*puVar5 == 6) && (puVar5[-1] == 1)) {
				puVar5[-1] = 1;
			}
			puVar6 = puVar6 + 0x30;
			iVar9 = iVar9 + 0x60;
			iVar8 = iVar8 + 0x60;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar11 = iVar11 + 1;
	} while (iVar11 < 0x28);
	iVar8 = 0;
	iVar11 = 0;
	do {
		iVar10 = 0;
		puVar6 = dungeon;
		do {
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0xd) && (psVar4[1] == 0x1e)) {
				psVar4[1] = 0x1b;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1b) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 1) && (psVar4[1] == 0x1e)) {
				psVar4[1] = 0x1b;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1b) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1b)) {
				*psVar4 = 0x1a;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1b) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 2) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0xf)) {
				*psVar4 = 0xe;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0xf)) {
				*psVar4 = 0xe;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x16) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1b) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 6) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1b)) && (psVar4[1] != 0))
			{
				*psVar4 = 0x16;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x16) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) && (psVar4[-1] == 1)) {
				*psVar4 = 0xd;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) &&
				 (((short *)(iVar11 + (int)puVar6))[1] == 6)) {
				*psVar4 = 0x1c;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 0x10) {
				if ((*(short *)(iVar11 + iVar10 + -0x7ff1bedc) == 6) && (psVar4[1] == 0x1e)) {
					psVar4[1] = 0x1b;
				}
				psVar4 = (short *)(iVar11 + (int)puVar6);
				if (((*psVar4 == 0x10) && (psVar4[1] == 0x1e)) &&
					 (*(short *)((int)dungeon + iVar11 + iVar10 + 0x62) == 0x1e)) {
					psVar4[1] = 0x1b;
				}
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 6) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) && (psVar4[-1] == 6)
				 ) {
				*psVar4 = 0x15;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 2) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1b)) && (psVar4[1] == 9))
			{
				*psVar4 = 0x1d;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 9) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0xf)) {
				*psVar4 = 0xe;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1b)) && (psVar4[1] == 2))
			{
				*psVar4 = 0x1d;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x12)) {
				*psVar4 = 0x18;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 9) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0xf)) {
				*psVar4 = 0xe;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x13)) &&
				 (psVar4[-1] == 0x1e)) {
				*psVar4 = 0x18;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (((*psVar4 == 0x18) && (psVar4[-1] == 0x1e)) && (psVar4[-2] == 6)) {
				psVar4[-1] = 0x15;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 2) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x1c;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x1c;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 0x1c) {
				if (psVar4[1] == 0x1e) {
					psVar4[1] = 0x12;
				}
				if ((*psVar4 == 0x1c) && (psVar4[1] == 2)) {
					psVar4[1] = 0xf;
				}
			}
			if (*(short *)(iVar11 + (int)puVar6) == 0x13) {
				if (((*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 2) &&
						(puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[-1] == 0x12)) &&
					 (puVar2[1] == 1)) {
					*puVar2 = 0x11;
				}
				if (*(short *)(iVar11 + (int)puVar6) == 0x13) {
					if (((*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 2) &&
							(puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[-1] == 0x16)) &&
						 (puVar2[1] == 1)) {
						*puVar2 = 0x11;
					}
					if (((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
							(*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 2)) &&
						 ((puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[-1] == 0x12 &&
							(puVar2[1] == 0xd)))) {
						*puVar2 = 0x11;
					}
				}
			}
			if (*(short *)(iVar11 + (int)puVar6) == 0x15) {
				if (((*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 2) &&
						(puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[-1] == 0x12)) &&
					 (puVar2[1] == 1)) {
					*puVar2 = 0x11;
				}
				if (((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
						(puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[1] == 1)) &&
					 ((puVar2[-1] == 0x16 && (*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 3)))) {
					*puVar2 = 0x11;
				}
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1c)) &&
				 ((*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 0x1e && (psVar4[-1] == 6)))) {
				*psVar4 = 0x17;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1c)) &&
				 (*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 1)) {
				*psVar4 = 0x17;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1b)) &&
				 (psVar4[1] == 0x1e)) {
				*psVar4 = 0x1d;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x1c) && (psVar4[1] == 9)) {
				psVar4[1] = 0xf;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
				 (puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[-1] == 0x15)) {
				*puVar2 = 0x18;
			}
			if (*(short *)(iVar11 + (int)puVar6) == 2) {
				psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if ((*psVar4 == 0x1b) && (psVar4[1] == 0x1e)) {
					*psVar4 = 0x1d;
				}
				if ((*(short *)(iVar11 + (int)puVar6) == 2) &&
					 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x12)) {
					*psVar4 = 0x19;
				}
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 9)) &&
				 (*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 2)) {
				*psVar4 = 0xb;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 10)) {
				*psVar4 = 0x11;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0xf) && (psVar4[1] == 3)) {
				psVar4[1] = 4;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x16) && (psVar4[1] == 9)) {
				psVar4[1] = 0xf;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x12) && (psVar4[1] == 0x1e)) {
				psVar4[1] = 0x12;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x18) &&
				 (psVar4 = (short *)((int)PTR_ARRAY_800e4064 + iVar11 + iVar10), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 0x15) {
				if (psVar4[1] == 2) {
					psVar4[1] = 0xf;
				}
				if ((*psVar4 == 0x15) && (psVar4[1] == 9)) {
					psVar4[1] = 10;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			sVar1 = *psVar4;
			if (sVar1 == 0x16) {
				if (psVar4[1] == 0x1e) {
					psVar4[1] = 0x12;
				}
				sVar1 = *(short *)(iVar11 + (int)puVar6);
			}
			if ((sVar1 == 0x15) && (*(short *)(iVar11 + (int)puVar6 + 2) == 0x1e)) {
				*(undefined2 *)(iVar11 + (int)puVar6 + 2) = 0x12;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			sVar1 = *psVar4;
			if (sVar1 == 0x10) {
				if (psVar4[1] == 2) {
					psVar4[1] = 0xf;
				}
				sVar1 = *(short *)(iVar11 + (int)puVar6);
			}
			if ((sVar1 == 0xd) && (*(short *)(iVar11 + (int)puVar6 + 2) == 2)) {
				*(undefined2 *)(iVar11 + (int)puVar6 + 2) = 0xf;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x16) && (psVar4[1] == 2)) {
				psVar4[1] = 0xf;
			}
			if (*(short *)(iVar11 + (int)puVar6) == 0x15) {
				psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if ((*psVar4 == 0x12) && (*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 0x1e)) {
					*psVar4 = 0x18;
				}
				if (((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
						(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 9)) && (psVar4[1] == 1))
				{
					*psVar4 = 0x10;
				}
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 2) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1b)) && (psVar4[1] == 2))
			{
				*psVar4 = 0x1d;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 0x17) {
				if (psVar4[1] == 2) {
					psVar4[1] = 0xf;
				}
				if ((*psVar4 == 0x17) && (psVar4[1] == 9)) {
					psVar4[1] = 0xf;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x19) && (psVar4[1] == 2)) {
				psVar4[1] = 0xf;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x16) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 9)) {
				*psVar4 = 0xb;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x17) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 9)) {
				*psVar4 = 0xb;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xb) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0xf)) {
				*psVar4 = 0xe;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x17) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			if (*(short *)(iVar11 + (int)puVar6) == 0x15) {
				psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if (*psVar4 == 0x1b) {
					*psVar4 = 0x1a;
				}
				if ((*(short *)(iVar11 + (int)puVar6) == 0x15) && (*psVar4 == 0x12)) {
					*psVar4 = 0x18;
				}
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1a) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 0x1d) {
				psVar3 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if (*psVar3 == 1) {
					*psVar3 = 0x10;
				}
				if ((*psVar4 == 0x1d) && (psVar4[1] == 2)) {
					psVar4[1] = 0xf;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 1) && (psVar4[-1] == 0xf)) {
				psVar4[-1] = 10;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			psVar3 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x12) && (psVar4[1] == 2)) {
				psVar4[1] = 0xf;
			}
			if ((*psVar3 == 0x17) && (psVar3[1] == 0x1e)) {
				psVar3[1] = 0x12;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x12) && (psVar4[1] == 9)) {
				psVar4[1] = 10;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) &&
				 (psVar4[1] == 0x1e)) {
				*psVar4 = 0x17;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 2) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1c)) && (psVar4[-1] == 6)
				 ) {
				*psVar4 = 0x17;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x17) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x12)) &&
				 (((short *)(iVar11 + (int)puVar6))[-1] == 6)) {
				*psVar4 = 0x18;
			}
			if (*(short *)(iVar11 + (int)puVar6) == 0xe) {
				psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if ((*psVar4 == 0x17) && (*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 0x1e)) {
					*psVar4 = 0x1c;
				}
				if ((((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
						 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1c)) &&
						(*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 0x1e)) && (psVar4[-1] == 6)) {
					*psVar4 = 0x17;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*(short *)(iVar11 + (int)puVar6) == 0x17) &&
				 (psVar3 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar3 == 0x1e)) {
				*psVar3 = 0x13;
			}
			if (*psVar4 == 0x1d) {
				psVar3 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if (*psVar3 == 0x1e) {
					*psVar3 = 0x13;
				}
				if ((*psVar4 == 0x1d) && (psVar4[1] == 0x1e)) {
					psVar4[1] = 0x12;
				}
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1a) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x1e)) {
				*psVar4 = 0x13;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x10) && (psVar4[1] == 0x1e)) {
				psVar4[1] = 0x12;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0xd) && (psVar4[1] == 9)) {
				psVar4[1] = 10;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x19) && (psVar4[1] == 0x1e)) {
				psVar4[1] = 0x12;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x12) && (psVar4[1] == 2)) {
				psVar4[1] = 0xf;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xb) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 3)) {
				*psVar4 = 5;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 0x13) {
				psVar3 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if (*psVar3 == 9) {
					*psVar3 = 0xb;
				}
				if (*psVar4 == 0x13) {
					if (*psVar3 == 1) {
						*psVar3 = 0xd;
					}
					if (((*psVar4 == 0x13) && (*psVar3 == 0xd)) && (psVar3[-1] == 6)) {
						*psVar3 = 0x10;
					}
				}
			}
			puVar6 = puVar6 + 0x30;
			iVar10 = iVar10 + 0x60;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
		iVar11 = iVar8 * 2;
	} while (iVar8 < 0x28);
	iVar8 = 0;
	iVar11 = 0;
	do {
		iVar10 = 0;
		puVar6 = dungeon;
		do {
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (((*psVar4 == 0x15) && (psVar4[1] == 0x18)) && (psVar4[2] == 1)) {
				psVar4[1] = 0x11;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
					(puVar2 = (undefined2 *)(iVar11 + iVar10 + -0x7ff1bedc), puVar2[1] == 9)) &&
				 ((puVar2[-1] == 1 && (*(short *)(iVar11 + iVar10 + -0x7ff1be7c) == 0x10)))) {
				*puVar2 = 0x1d;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 2) &&
				 (psVar4 = (short *)((int)PTR_ARRAY_800e4064 + iVar11 + iVar10), *psVar4 == 6)) {
				*psVar4 = 8;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 1) && (psVar4[-1] == 6)) {
				psVar4[-1] = 7;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 6) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0xf)) && (psVar4[1] == 4))
			{
				*psVar4 = 10;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 1) {
				if (psVar4[1] == 3) {
					psVar4[1] = 4;
				}
				if ((*psVar4 == 1) && (psVar4[1] == 6)) {
					psVar4[1] = 4;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			psVar3 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 9) && (psVar4[1] == 3)) {
				psVar4[1] = 4;
			}
			if ((*psVar3 == 10) && (psVar3[1] == 3)) {
				psVar3[1] = 4;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0xd) && (psVar4[1] == 3)) {
				psVar4[1] = 4;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if (*psVar4 == 1) {
				if (psVar4[1] == 5) {
					psVar4[1] = 0xc;
				}
				if ((*psVar4 == 1) && (psVar4[1] == 0x10)) {
					psVar4[1] = 0xd;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 6) && (psVar4[1] == 0xd)) {
				psVar4[1] = 0x10;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			sVar1 = *psVar4;
			if ((sVar1 == 0x19) && (psVar4[1] == 9)) {
				psVar4[1] = 10;
				sVar1 = *(short *)(iVar11 + (int)puVar6);
			}
			if ((sVar1 == 0xd) && (*(short *)(iVar11 + (int)puVar6 + 2) == 5)) {
				*(undefined2 *)(iVar11 + (int)puVar6 + 2) = 0xc;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x1c) &&
					(((short *)(iVar11 + (int)puVar6))[-1] == 6)) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x17;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 10)) {
				*psVar4 = 0x11;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 9)) {
				*psVar4 = 0xb;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xb) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 3)) {
				*psVar4 = 5;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 10) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 4)) {
				*psVar4 = 0xc;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 4)) {
				*psVar4 = 0xc;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x1b) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 9)) {
				*psVar4 = 0xb;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 4)) {
				*psVar4 = 0xc;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 1)) {
				*psVar4 = 0x10;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xb) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 4)) {
				*psVar4 = 0xc;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 2) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 3)) {
				*psVar4 = 5;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 9) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 3)) {
				*psVar4 = 5;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xe) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 3)) {
				*psVar4 = 5;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
				 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 3)) {
				*psVar4 = 5;
			}
			if (*(short *)(iVar11 + (int)puVar6) == 2) {
				psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc);
				if ((*psVar4 == 5) && (psVar4[-1] == 0x10)) {
					*psVar4 = 0xc;
				}
				if ((*(short *)(iVar11 + (int)puVar6) == 2) &&
					 (psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 4)) {
					*psVar4 = 0xc;
				}
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*(short *)(iVar11 + (int)puVar6) == 9) &&
				 (psVar3 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar3 == 4)) {
				*psVar3 = 0xc;
			}
			if ((*psVar4 == 1) && (psVar4[-1] == 8)) {
				psVar4[-1] = 9;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x1c) &&
					(psVar4 = (short *)(iVar11 + iVar10 + -0x7ff1bedc), *psVar4 == 0x17)) && (psVar4[1] == 3))
			{
				*psVar4 = 0x10;
			}
			puVar6 = puVar6 + 0x30;
			iVar10 = iVar10 + 0x60;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
		iVar11 = iVar8 * 2;
	} while (iVar8 < 0x28);
	iVar8 = 0;
	iVar11 = 0;
	do {
		iVar9 = 0;
		puVar6 = dungeon;
		iVar10 = -0x7ff1bedc;
		do {
			if ((*(short *)(iVar11 + (int)puVar6) == 0x15) && (*(short *)(iVar11 + iVar10) == 10)) {
				*(short *)(iVar11 + iVar10) = 0x11;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 0x11) &&
				 (psVar4 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar4 == 4)) {
				*psVar4 = 0xc;
			}
			if ((*(short *)(iVar11 + (int)puVar6) == 10) &&
				 (psVar4 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar4 == 4)) {
				*psVar4 = 0xc;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			psVar3 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x11) && (psVar4[1] == 5)) {
				psVar4[1] = 0xc;
			}
			if ((*psVar3 == 0x1d) && (psVar3[1] == 9)) {
				psVar3[1] = 10;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			psVar3 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0xd) && (psVar4[1] == 5)) {
				psVar4[1] = 0xc;
			}
			if ((*psVar3 == 9) && (psVar3[1] == 0x10)) {
				psVar3[1] = 0xd;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			psVar3 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 10) && (psVar4[1] == 0x10)) {
				psVar4[1] = 0xd;
			}
			if ((*psVar3 == 0x10) && (psVar3[1] == 3)) {
				psVar3[1] = 4;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0xb) && (psVar4[1] == 5)) {
				psVar4[1] = 0xc;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 10) &&
					(psVar4 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar4 == 3)) && (psVar4[-1] == 0x10))
			{
				*psVar4 = 0xc;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			psVar3 = (short *)(iVar11 + (int)puVar6);
			if ((*psVar4 == 0x10) && (psVar4[1] == 5)) {
				psVar4[1] = 0xc;
			}
			if ((*psVar3 == 1) && (psVar3[1] == 6)) {
				psVar3[1] = 4;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
					(psVar4 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar4 == 0xd)) &&
				 (((short *)(iVar11 + (int)puVar6))[1] == 10)) {
				psVar4[1] = 0xc;
			}
			psVar4 = (short *)(iVar11 + (int)puVar6);
			if ((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
				 (psVar3 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar3 == 10)) {
				*psVar3 = 0x11;
			}
			if ((*psVar4 == 0x16) && (psVar4[1] == 0xb)) {
				psVar4[1] = 0x11;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0xf) &&
					(psVar4 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar4 == 0x1c)) &&
				 (*(short *)(iVar11 + iVar9 + -0x7ff1be7c) == 0x10)) {
				*psVar4 = 0x17;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x1c) &&
					(psVar4 = (short *)(iVar11 + iVar9 + -0x7ff1bedc), *psVar4 == 0x17)) &&
				 ((psVar4[1] == 1 && (*(short *)(iVar11 + iVar9 + -0x7ff1be7c) == 6)))) {
				*psVar4 = 0x10;
			}
			puVar6 = puVar6 + 0x30;
			iVar9 = iVar9 + 0x60;
			iVar10 = iVar10 + 0x60;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
		iVar11 = iVar8 * 2;
	} while (iVar8 < 0x28);
	iVar8 = 0;
	iVar11 = 0;
	do {
		iVar7 = 0;
		puVar6 = dungeon;
		iVar10 = -0x7ff1bedc;
		iVar9 = -0x7ff1be7c;
		do {
			if (((*(short *)(iVar11 + (int)puVar6) == 0xf) && (*(short *)(iVar11 + iVar10) == 0x1c)) &&
				 (*(short *)(iVar11 + iVar9) == 0x10)) {
				*(short *)(iVar11 + iVar10) = 0x17;
			}
			if ((((*(short *)(iVar11 + (int)puVar6) == 0x15) &&
					 (puVar2 = (undefined2 *)(iVar11 + iVar7 + -0x7ff1bedc), puVar2[-1] == 0x15)) &&
					(puVar2[1] == 0xd)) && (*(short *)(iVar11 + iVar7 + -0x7ff1be7c) == 2)) {
				*puVar2 = 0x11;
			}
			if (((*(short *)(iVar11 + (int)puVar6) == 0x13) &&
					(psVar4 = (short *)(iVar11 + iVar7 + -0x7ff1bedc), *psVar4 == 0xf)) && (psVar4[1] == 0xc))
			{
				*psVar4 = 0x11;
			}
			puVar6 = puVar6 + 0x30;
			iVar7 = iVar7 + 0x60;
			iVar9 = iVar9 + 0x60;
			iVar10 = iVar10 + 0x60;
		} while ((int)puVar6 < -0x7ff1b03c);
		iVar8 = iVar8 + 1;
		iVar11 = iVar8 * 2;
	} while (iVar8 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4Subs__Fv()
 // line 664, offset 0x8015257c
	/* begin block 1 */
		// Start line: 665
		// Start offset: 0x8015257C
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s3
	// 		int i; // $a0
	// 		int rv; // $v1
	/* end block 1 */
	// End offset: 0x80152728
	// End Line: 698

	/* begin block 2 */
		// Start line: 1385
	/* end block 2 */
	// End Line: 1386

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4Subs__Fv(void)

{
	uchar uVar1;
	long lVar2;
	ushort uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ushort *puVar7;
	int iVar8;
	int iVar9;
	
	iVar8 = 0;
	iVar9 = 0;
	do {
		iVar6 = 0;
		puVar7 = dungeon;
		do {
			lVar2 = ENG_random__Fl(3);
			if (((lVar2 == 0) && (uVar1 = L4BTYPES[(uint)*(byte *)(puVar7 + iVar8)], uVar1 != '\0')) &&
				 (mydflags[iVar9 + iVar6] == '\0')) {
				lVar2 = ENG_random__Fl(0x10);
				uVar3 = 0xffff;
				if (-1 < lVar2) {
					iVar4 = 0;
					do {
						iVar5 = iVar4;
						if (iVar4 == 0x8c) {
							iVar5 = 0;
						}
						if (uVar1 == L4BTYPES[iVar5]) {
							lVar2 = lVar2 + -1;
						}
						iVar4 = iVar5 + 1;
					} while (-1 < lVar2);
					uVar3 = (ushort)iVar5;
				}
				puVar7[iVar8] = uVar3;
			}
			iVar6 = iVar6 + 1;
			puVar7 = puVar7 + 0x30;
		} while (iVar6 < 0x28);
		iVar8 = iVar8 + 1;
		iVar9 = iVar9 + 0x28;
	} while (iVar8 < 0x28);
	iVar8 = 0;
	iVar9 = 0;
	do {
		iVar6 = 0;
		puVar7 = dungeon;
		do {
			lVar2 = ENG_random__Fl(10);
			if (lVar2 == 0) {
				if ((L4BTYPES[(uint)*(byte *)(puVar7 + iVar8)] == '\x06') &&
					 (mydflags[iVar9 + iVar6] == '\0')) {
					lVar2 = ENG_random__Fl(3);
					puVar7[iVar8] = (short)lVar2 + 0x5f;
				}
			}
			iVar6 = iVar6 + 1;
			puVar7 = puVar7 + 0x30;
		} while (iVar6 < 0x28);
		iVar8 = iVar8 + 1;
		iVar9 = iVar9 + 0x28;
	} while (iVar8 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4makeDungeon__Fv()
 // line 703, offset 0x8015275c
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x8015275C
		// Variables:
	// 		int i; // $a2
	// 		int j; // $a3
	// 		int l; // $t2
	/* end block 1 */
	// End offset: 0x8015298C
	// End Line: 751

	/* begin block 2 */
		// Start line: 1484
	/* end block 2 */
	// End Line: 1485

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4makeDungeon__Fv(void)

{
	uchar *puVar1;
	uchar *puVar2;
	undefined1 *puVar3;
	undefined1 *puVar4;
	int iVar5;
	int iVar6;
	uchar *puVar7;
	uchar *puVar8;
	undefined1 *puVar9;
	
	iVar6 = 0;
	do {
		iVar5 = 0;
		puVar7 = &L4dungeon;
		puVar8 = &dung;
		puVar9 = &DAT_8014da68;
		do {
			puVar2 = puVar9 + iVar6 * 2;
			puVar9 = puVar9 + 0xa0;
			puVar1 = puVar8 + iVar6;
			puVar7[iVar6 * 2] = *puVar1;
			puVar8 = puVar8 + 0x14;
			(puVar7 + iVar6 * 2)[1] = *puVar1;
			*puVar2 = *puVar1;
			iVar5 = iVar5 + 1;
			puVar2[1] = *puVar1;
			puVar7 = puVar7 + 0xa0;
		} while (iVar5 < 0x14);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x14);
	iVar6 = 0;
	do {
		iVar5 = 0;
		puVar7 = &L4dungeon;
		puVar8 = &dung;
		puVar9 = &DAT_8014da68;
		do {
			puVar3 = puVar9 + iVar6 * 2;
			puVar9 = puVar9 + 0xa0;
			puVar1 = puVar8 + (0x13 - iVar6);
			(puVar7 + iVar6 * 2)[0x28] = *puVar1;
			puVar8 = puVar8 + 0x14;
			(puVar7 + iVar6 * 2)[0x29] = *puVar1;
			puVar3[0x28] = *puVar1;
			iVar5 = iVar5 + 1;
			puVar3[0x29] = *puVar1;
			puVar7 = puVar7 + 0xa0;
		} while (iVar5 < 0x14);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x14);
	iVar6 = 0;
	do {
		iVar5 = 0;
		puVar9 = &DAT_8014e698;
		puVar3 = &DAT_8014e6e8;
		do {
			puVar7 = &dung + iVar6 + (0x13 - iVar5) * 0x14;
			puVar8 = puVar3 + iVar6 * 2;
			puVar9[iVar6 * 2] = *puVar7;
			puVar3 = puVar3 + 0xa0;
			(puVar9 + iVar6 * 2)[1] = *puVar7;
			*puVar8 = *puVar7;
			iVar5 = iVar5 + 1;
			puVar8[1] = *puVar7;
			puVar9 = puVar9 + 0xa0;
		} while (iVar5 < 0x14);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x14);
	iVar6 = 0;
	do {
		iVar5 = 0;
		puVar9 = &DAT_8014e698;
		puVar3 = &DAT_8014e6e8;
		do {
			puVar7 = &UCHAR_00h_8014d887 + ((0x13 - iVar5) * 0x14 - iVar6);
			puVar4 = puVar3 + iVar6 * 2;
			(puVar9 + iVar6 * 2)[0x28] = *puVar7;
			puVar3 = puVar3 + 0xa0;
			(puVar9 + iVar6 * 2)[0x29] = *puVar7;
			puVar4[0x28] = *puVar7;
			iVar5 = iVar5 + 1;
			puVar4[0x29] = *puVar7;
			puVar9 = puVar9 + 0xa0;
		} while (iVar5 < 0x14);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x14);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ uShape__Fv()
 // line 757, offset 0x80152994
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x80152994
		// Variables:
	// 		int j; // $a2
	// 		int i; // $a3
	// 		int rv; // $a0
	/* end block 1 */
	// End offset: 0x80152C20
	// End Line: 822

	/* begin block 2 */
		// Start line: 1615
	/* end block 2 */
	// End Line: 1616

/* WARNING: Unknown calling convention yet parameter storage is locked */

void uShape__Fv(void)

{
	long lVar1;
	uchar *puVar2;
	char *pcVar3;
	char *pcVar4;
	uchar *puVar5;
	uchar *puVar6;
	undefined1 *puVar7;
	int iVar8;
	int iVar9;
	uchar *puVar10;
	
	iVar8 = 0x13;
	puVar10 = &UCHAR_00h_8014da17;
	do {
		iVar9 = 0x13;
		puVar6 = &hallok;
		puVar5 = &DAT_8014d9f0;
		do {
			puVar2 = puVar5 + iVar8;
			if ((*puVar2 == '\x01') || (*puVar10 = '\0', *puVar2 == '\x01')) {
				if ((puVar2[1] == '\x01') && (puVar6[iVar8 + 1] == '\0')) {
					*puVar10 = '\x01';
				}
				else {
					*puVar10 = '\0';
				}
				iVar9 = 0;
				puVar5 = &dung;
				puVar6 = &DAT_8014d888;
			}
			puVar6 = puVar6 + -0x14;
			iVar9 = iVar9 + -1;
			puVar5 = puVar5 + -0x14;
		} while (-1 < iVar9);
		iVar8 = iVar8 + -1;
		puVar10 = puVar10 + -1;
	} while (-1 < iVar8);
	lVar1 = ENG_random__Fl(0x13);
	iVar8 = lVar1 + 1;
	do {
		iVar9 = 0x13;
		if ((&hallok)[iVar8] == '\0') {
			iVar8 = iVar8 + 1;
			if (iVar8 == 0x14) {
				iVar8 = 1;
			}
		}
		else {
			puVar7 = &DAT_8014d9f0;
			do {
				pcVar3 = puVar7 + iVar8;
				if (*pcVar3 == '\x01') {
					puVar7 = (undefined1 *)0x8014d860;
					iVar9 = -1;
					iVar8 = 0;
				}
				else {
					*pcVar3 = '\x01';
					pcVar3[1] = '\x01';
				}
				iVar9 = iVar9 + -1;
				puVar7 = puVar7 + -0x14;
			} while (-1 < iVar9);
		}
		iVar9 = 0x13;
	} while (iVar8 != 0);
	puVar5 = &UCHAR_00h_8014da17;
	puVar10 = &hallok;
	pcVar3 = &DAT_8014d9f0;
	do {
		iVar8 = 0x13;
		puVar6 = puVar10 + 0x13;
		pcVar4 = pcVar3 + 0x13;
		do {
			if ((*pcVar4 == '\x01') || (*puVar5 = '\0', *pcVar4 == '\x01')) {
				if ((*puVar6 == '\x01') && (puVar6[1] == '\0')) {
					*puVar5 = '\x01';
				}
				else {
					*puVar5 = '\0';
				}
				iVar8 = 0;
				pcVar4 = pcVar3;
				puVar6 = puVar10;
			}
			puVar6 = puVar6 + -1;
			iVar8 = iVar8 + -1;
			pcVar4 = pcVar4 + -1;
		} while (-1 < iVar8);
		puVar5 = puVar5 + -1;
		puVar10 = puVar10 + -0x14;
		iVar9 = iVar9 + -1;
		pcVar3 = pcVar3 + -0x14;
	} while (-1 < iVar9);
	lVar1 = ENG_random__Fl(0x13);
	iVar8 = lVar1 + 1;
	do {
		iVar9 = 0x13;
		if ((&hallok)[iVar8] == '\0') {
			iVar8 = iVar8 + 1;
			if (iVar8 == 0x14) {
				iVar8 = 1;
			}
		}
		else {
			do {
				if ((&dung)[iVar9 + iVar8 * 0x14] == '\x01') {
					iVar9 = -1;
					iVar8 = 0;
				}
				else {
					(&dung)[iVar9 + iVar8 * 0x14] = '\x01';
					(&DAT_8014d888)[iVar9 + iVar8 * 0x14] = 1;
				}
				iVar9 = iVar9 + -1;
			} while (-1 < iVar9);
		}
	} while (iVar8 != 0);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetArea__Fv()
 // line 827, offset 0x80152c30
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x80152C30
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	// 		long rv; // $a2
	/* end block 1 */
	// End offset: 0x80152C84
	// End Line: 838

	/* begin block 2 */
		// Start line: 1760
	/* end block 2 */
	// End Line: 1761

/* WARNING: Unknown calling convention yet parameter storage is locked */

long GetArea__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	int iVar3;
	long lVar4;
	
	lVar4 = 0;
	iVar3 = 0;
	do {
		iVar2 = 0;
		puVar1 = &dung;
		do {
			if (puVar1[iVar3] == '\x01') {
				lVar4 = lVar4 + 1;
			}
			iVar2 = iVar2 + 1;
			puVar1 = puVar1 + 0x14;
		} while (iVar2 < 0x14);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x14);
	return lVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4drawRoom__Fiiii(int x /*$a0*/, int y /*$a1*/, int width /*$a2*/, int height /*$a3*/)
 // line 843, offset 0x80152c8c
	/* begin block 1 */
		// Start line: 844
		// Start offset: 0x80152C8C
		// Variables:
	// 		int i; // $t0
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x80152CE8
	// End Line: 851

	/* begin block 2 */
		// Start line: 1788
	/* end block 2 */
	// End Line: 1789

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4drawRoom__Fiiii(int x,int y,int width,int height)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	if (0 < height) {
		do {
			iVar2 = 0;
			if (0 < width) {
				do {
					iVar1 = x + iVar2;
					iVar2 = iVar2 + 1;
					(&dung)[y + iVar3 + iVar1 * 0x14] = '\x01';
				} while (iVar2 < width);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < height);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ L4checkRoom__Fiiii(int x /*$a0*/, int y /*$a1*/, int width /*$a2*/, int height /*$a3*/)
 // line 857, offset 0x80152cf4
	/* begin block 1 */
		// Start line: 858
		// Start offset: 0x80152CF4
		// Variables:
	// 		int i; // $t0
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x80152D84
	// End Line: 869

	/* begin block 2 */
		// Start line: 1819
	/* end block 2 */
	// End Line: 1820

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar L4checkRoom__Fiiii(int x,int y,int width,int height)

{
	uchar uVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	
	if (x < 1) {
LAB_80152d3c:
		uVar1 = '\0';
	}
	else {
		uVar1 = '\0';
		if (0 < y) {
			iVar4 = 0;
			if (0 < height) {
				do {
					iVar3 = 0;
					if (0 < width) {
						uVar2 = x;
						do {
							if (((0x13 < uVar2) || (0x13 < (uint)(y + iVar4))) ||
								 (iVar3 = iVar3 + 1, (&dung)[y + iVar4 + uVar2 * 0x14] != '\0')) goto LAB_80152d3c;
							uVar2 = x + iVar3;
						} while (iVar3 < width);
					}
					iVar4 = iVar4 + 1;
				} while (iVar4 < height);
			}
			uVar1 = '\x01';
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4roomGen__Fiiiii(int x /*$s1*/, int y /*stack -104*/, int w /*$s3*/, int h /*stack -96*/, int dir /*stack 16*/)
 // line 875, offset 0x80152d90
	/* begin block 1 */
		// Start line: 876
		// Start offset: 0x80152D90
		// Variables:
	// 		int rx; // $s7
	// 		int ry; // $fp
	// 		int ry2; // $s3
	// 		int height; // $s2
	// 		int width; // $s4
	// 		int cx1; // $s3
	// 		int cy1; // $s0
	// 		int cw; // $s5
	// 		int ch; // $s1
	// 		int num; // $s6
	// 		int dirProb; // $v1
	// 		int ran; // $v1
	/* end block 1 */
	// End offset: 0x80153044
	// End Line: 951

	/* begin block 2 */
		// Start line: 1852
	/* end block 2 */
	// End Line: 1853

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4roomGen__Fiiiii(int x,int y,int w,int h,int dir)

{
	bool bVar1;
	byte bVar2;
	uchar uVar3;
	uchar uVar4;
	long lVar5;
	int y_00;
	int height;
	uint width;
	int x_00;
	int x_01;
	int y_01;
	uint local_70;
	
	lVar5 = ENG_random__Fl(4);
	if (dir == 1) {
		bVar1 = lVar5 != 0;
	}
	else {
		bVar1 = lVar5 == 0;
	}
	if (bVar1) {
		x_00 = 0;
		if (!bVar1) {
			return;
		}
		do {
			lVar5 = ENG_random__Fl(5);
			width = (lVar5 + 2 >> 1) * 2;
			lVar5 = ENG_random__Fl(5);
			y_00 = lVar5 + 2 >> 1;
			height = y_00 * 2;
			x_01 = (x + ((int)(w + ((uint)w >> 0x1f)) >> 1)) - ((int)width >> 1);
			y_01 = y + y_00 * -2;
			uVar3 = L4checkRoom__Fiiii(x_01 + -1,y_01 + -1,width + 2,height + 1);
			x_00 = x_00 + 1;
			if (uVar3 != '\0') break;
		} while (x_00 < 0x14);
		if (uVar3 == '\x01') {
			L4drawRoom__Fiiii(x_01,y_01,width,height);
		}
		y_00 = y + h;
		uVar4 = L4checkRoom__Fiiii(x_01 + -1,y_00,width + 2,height + 1);
		if (uVar4 == '\x01') {
			L4drawRoom__Fiiii(x_01,y_00,width,height);
		}
		if (uVar3 == '\x01') {
			L4roomGen__Fiiiii(x_01,y_01,width,height,0);
		}
		if (uVar4 != '\x01') {
			return;
		}
		local_70 = 0;
	}
	else {
		x_01 = 0;
		do {
			lVar5 = ENG_random__Fl(5);
			x_00 = lVar5 + 2 >> 1;
			width = x_00 * 2;
			lVar5 = ENG_random__Fl(5);
			y_00 = lVar5 + 2 >> 1;
			height = y_00 * 2;
			x_00 = x + x_00 * -2;
			y_00 = (y + ((int)(h + ((uint)h >> 0x1f)) >> 1)) - y_00;
			uVar3 = L4checkRoom__Fiiii(x_00 + -1,y_00 + -1,height + 2,width | 1);
			x_01 = x_01 + 1;
			if (uVar3 != '\0') break;
		} while (x_01 < 0x14);
		if (uVar3 == '\x01') {
			L4drawRoom__Fiiii(x_00,y_00,width,height);
		}
		x_01 = x + w;
		bVar2 = L4checkRoom__Fiiii(x_01,y_00 + -1,width | 1,height + 2);
		local_70 = (uint)bVar2;
		if (bVar2 == 1) {
			L4drawRoom__Fiiii(x_01,y_00,width,height);
		}
		if (uVar3 == '\x01') {
			L4roomGen__Fiiiii(x_00,y_00,width,height,1);
		}
		if (bVar2 != 1) {
			return;
		}
	}
	L4roomGen__Fiiiii(x_01,y_00,width,height,local_70);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4firstRoom__Fv()
 // line 957, offset 0x80153078
	/* begin block 1 */
		// Start line: 958
		// Start offset: 0x80153078
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s0
	// 		int w; // $s2
	// 		int h; // $s1
	// 		int rndx; // $a0
	// 		int rndy; // $a1
	// 		int xmin; // $s0
	// 		int xmax; // $a0
	// 		int ymin; // $s0
	// 		int ymax; // $a0
	/* end block 1 */
	// End offset: 0x80153264
	// End Line: 1020

	/* begin block 2 */
		// Start line: 2054
	/* end block 2 */
	// End Line: 2055

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4firstRoom__Fv(void)

{
	uchar uVar1;
	long dir;
	int x;
	int y;
	int height;
	int width;
	
	if (currlevel == '\x10') {
		width = 0xe;
		height = 0xe;
	}
	else {
		if (((currlevel == quests[11]._qlevel) && (quests[11]._qactive != '\0')) ||
			 ((currlevel == quests[15]._qlevel && (gbMaxPlayers != '\x01')))) {
			width = 0xb;
			height = 0xb;
		}
		else {
			dir = ENG_random__Fl(5);
			width = dir + 2;
			dir = ENG_random__Fl(5);
			height = dir + 2;
		}
	}
	x = 0x14 - width >> 1;
	dir = ENG_random__Fl((-x - width) + 0x14);
	x = dir + x;
	if (0x13 < width + x) {
		x = (x - (width + x)) + 0x14;
	}
	y = 0x14 - height >> 1;
	dir = ENG_random__Fl((-y - height) + 0x14);
	y = dir + y;
	if (0x13 < height + y) {
		y = (y - (height + y)) + 0x14;
	}
	if (currlevel == '\x10') {
		l4holdx = x;
		l4holdy = y;
	}
	uVar1 = QuestStatus__Fi(0xb);
	if ((uVar1 == '\0') && ((currlevel != quests[15]._qlevel || (gbMaxPlayers == '\x01')))) {
		SP4x1 = 0;
		SP4y1 = 0;
		SP4x2 = 0;
		SP4y2 = 0;
	}
	else {
		SP4x1 = x + 1;
		SP4y1 = y + 1;
		SP4x2 = SP4x1 + width;
		SP4y2 = SP4y1 + height;
	}
	L4drawRoom__Fiiii(x,y,width,height);
	dir = ENG_random__Fl(2);
	L4roomGen__Fiiiii(x,y,width,height,dir);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4SaveQuads__Fv()
 // line 1027, offset 0x80153284
	/* begin block 1 */
		// Start line: 1028
		// Start offset: 0x80153284
		// Variables:
	// 		int i; // $a2
	// 		int j; // $t1
	// 		int x; // $t3
	// 		int y; // $t4
	/* end block 1 */
	// End offset: 0x8015333C
	// End Line: 1040

	/* begin block 2 */
		// Start line: 2208
	/* end block 2 */
	// End Line: 2209

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4SaveQuads__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = l4holdy;
	iVar1 = l4holdx;
	iVar8 = 0;
	do {
		iVar5 = 0;
		iVar7 = (iVar2 + iVar8) * 0x28;
		iVar6 = ((0x27 - iVar8) - iVar2) * 0x28;
		do {
			iVar4 = iVar1 + iVar5;
			iVar3 = 0x27 - iVar5;
			iVar5 = iVar5 + 1;
			iVar3 = iVar3 - iVar1;
			mydflags[iVar7 + iVar4] = '\x01';
			mydflags[iVar7 + iVar3] = '\x01';
			mydflags[iVar6 + iVar4] = '\x01';
			mydflags[iVar6 + iVar3] = '\x01';
		} while (iVar5 < 0xe);
		iVar8 = iVar8 + 1;
	} while (iVar8 < 0xe);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4SetRoom__FPUcii(unsigned char *pSetPiece /*$a0*/, int rx1 /*$a1*/, int ry1 /*$a2*/)
 // line 1045, offset 0x80153344
	/* begin block 1 */
		// Start line: 1046
		// Start offset: 0x80153344
		// Variables:
	// 		int rw; // $t4
	// 		int rh; // $t5
	// 		int i; // $a3
	// 		int j; // $t2
	// 		unsigned char *sp; // $t0
	/* end block 1 */
	// End offset: 0x8015340C
	// End Line: 1066

	/* begin block 2 */
		// Start line: 2246
	/* end block 2 */
	// End Line: 2247

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4SetRoom__FPUcii(uchar *pSetPiece,int rx1,int ry1)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	byte *pbVar6;
	int iVar7;
	
	bVar1 = *pSetPiece;
	bVar2 = pSetPiece[2];
	pbVar6 = pSetPiece + 4;
	iVar7 = 0;
	if (bVar2 != 0) {
		do {
			iVar5 = 0;
			if (bVar1 != 0) {
				iVar3 = ry1 + iVar7;
				iVar4 = rx1;
				do {
					if (*pbVar6 == 0) {
						dungeon[iVar4 * 0x30 + iVar3] = 6;
					}
					else {
						dungeon[iVar4 * 0x30 + iVar3] = (ushort)*pbVar6;
						mydflags[iVar3 * 0x28 + iVar4] = mydflags[iVar3 * 0x28 + iVar4] | 0x80;
					}
					pbVar6 = pbVar6 + 2;
					iVar5 = iVar5 + 1;
					iVar4 = iVar4 + 1;
				} while (iVar5 < (int)(uint)bVar1);
			}
			iVar7 = iVar7 + 1;
		} while (iVar7 < (int)(uint)bVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_LoadDiabQuads__FUc(unsigned char preflag /*$s0*/)
 // line 1081, offset 0x80153418
	/* begin block 1 */
		// Start line: 1082
		// Start offset: 0x80153418
		// Variables:
	// 		unsigned char *ptrSetPiece; // $a0
	/* end block 1 */
	// End offset: 0x80153600
	// End Line: 1134

	/* begin block 2 */
		// Start line: 2322
	/* end block 2 */
	// End Line: 2323

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_LoadDiabQuads__FUc(uchar preflag)

{
	uchar *pSetPiece;
	
	if (lpSetPiece1 == (uchar *)0x0) {
		lpSetPiece1 = GRL_LoadFileInMemSig__FPCcPUl("diab1.DUN",(ulong *)0x0);
	}
	diabquad1x = l4holdx + 4;
	diabquad1y = l4holdy + 4;
	DRLG_L4SetRoom__FPUcii(lpSetPiece1,diabquad1x,diabquad1y);
	if (preflag == '\0') {
		pSetPiece = lpSetPiece2;
		if (lpSetPiece2 == (uchar *)0x0) {
			pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("diab2a.DUN",(ulong *)0x0);
			lpSetPiece2 = pSetPiece;
		}
	}
	else {
		pSetPiece = lppSetPiece2;
		if (lppSetPiece2 == (uchar *)0x0) {
			pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("diab2b.DUN",(ulong *)0x0);
			lppSetPiece2 = pSetPiece;
		}
	}
	diabquad2x = 0x1b - l4holdx;
	diabquad2y = l4holdy + 1;
	DRLG_L4SetRoom__FPUcii(pSetPiece,diabquad2x,diabquad2y);
	if (preflag == '\0') {
		pSetPiece = lpSetPiece3;
		if (lpSetPiece3 == (uchar *)0x0) {
			pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("diab3a.DUN",(ulong *)0x0);
			lpSetPiece3 = pSetPiece;
		}
	}
	else {
		pSetPiece = lppSetPiece3;
		if (lppSetPiece3 == (uchar *)0x0) {
			pSetPiece = GRL_LoadFileInMemSig__FPCcPUl(&DAT_8014d844,(ulong *)0x0);
			lppSetPiece3 = pSetPiece;
		}
	}
	diabquad3x = l4holdx + 1;
	diabquad3y = 0x1b - l4holdy;
	DRLG_L4SetRoom__FPUcii(pSetPiece,diabquad3x,diabquad3y);
	if (preflag == '\0') {
		pSetPiece = lpSetPiece4;
		if (lpSetPiece4 == (uchar *)0x0) {
			pSetPiece = GRL_LoadFileInMemSig__FPCcPUl(&DAT_8014d868,(ulong *)0x0);
			lpSetPiece4 = pSetPiece;
		}
	}
	else {
		pSetPiece = lppSetPiece4;
		if (lppSetPiece4 == (uchar *)0x0) {
			pSetPiece = GRL_LoadFileInMemSig__FPCcPUl("diab4b.DUN",(ulong *)0x0);
			lppSetPiece4 = pSetPiece;
		}
	}
	diabquad4x = 0x1c - l4holdx;
	diabquad4y = 0x1c - l4holdy;
	DRLG_L4SetRoom__FPUcii(pSetPiece,diabquad4x,diabquad4y);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DRLG_L4PlaceMiniSet__FPCUciiiiii(unsigned char *miniset /*$s6*/, int tmin /*$s3*/, int tmax /*$a2*/, int cx /*$s7*/, int cy /*stack 16*/, int setview /*stack 20*/, int ldir /*stack 24*/)
 // line 1141, offset 0x80153614
	/* begin block 1 */
		// Start line: 1142
		// Start offset: 0x80153614
		// Variables:
	// 		int sx; // $s1
	// 		int sy; // $s0
	// 		int sw; // $s2
	// 		int sh; // $s4
	// 		int xx; // $a1
	// 		int yy; // $a3
	// 		int i; // $fp
	// 		int ii; // $t1
	// 		int numt; // stack offset -96
	// 		int found; // $t0
	// 		int bailcnt; // $s3
	/* end block 1 */
	// End offset: 0x801539FC
	// End Line: 1290

	/* begin block 2 */
		// Start line: 2452
	/* end block 2 */
	// End Line: 2453

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DRLG_L4PlaceMiniSet__FPCUciiiiii
								(uchar *miniset,int tmin,int tmax,int cx,int cy,int setview,int ldir)

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
	long lVar10;
	long lVar11;
	uint uVar12;
	int iVar13;
	uint uVar14;
	int iVar15;
	int local_60;
	
	bVar1 = *miniset;
	uVar12 = (uint)bVar1;
	bVar2 = miniset[1];
	uVar14 = (uint)bVar2;
	lVar11 = 0;
	lVar10 = 0;
	if (tmax == tmin) {
		local_60 = 1;
	}
	else {
		lVar4 = ENG_random__Fl(tmax - tmin);
		local_60 = lVar4 + tmin;
	}
	iVar15 = 0;
	if (0 < local_60) {
		do {
			lVar11 = ENG_random__Fl(0x28 - uVar12);
			lVar10 = ENG_random__Fl(0x28 - uVar14);
			iVar13 = 0;
			do {
				if (199 < iVar13) {
					return '\0';
				}
				bVar3 = true;
				if (((SP4x1 <= lVar11) && (lVar11 <= SP4x2)) && (SP4y1 <= lVar10)) {
					bVar3 = SP4y2 < lVar10;
				}
				if (((cx != -1) && ((int)(cx - uVar12) <= lVar11)) && (lVar11 <= cx + 0xc)) {
					lVar11 = ENG_random__Fl(0x28 - uVar12);
					lVar10 = ENG_random__Fl(0x28 - uVar14);
					bVar3 = false;
				}
				if (((cy != -1) && ((int)(cy - uVar14) <= lVar10)) && (lVar10 <= cy + 0xc)) {
					lVar11 = ENG_random__Fl(0x28 - uVar12);
					lVar10 = ENG_random__Fl(0x28 - uVar14);
					bVar3 = false;
				}
				iVar9 = 2;
				iVar8 = 0;
				if (bVar2 != 0) {
					do {
						if (!bVar3) break;
						iVar6 = 0;
						if (bVar1 != 0) {
							pbVar7 = miniset + iVar9;
							iVar5 = lVar11;
							do {
								if (!bVar3) break;
								if ((*pbVar7 != 0) &&
									 ((uint)dungeon[iVar5 * 0x30 + lVar10 + iVar8] != (uint)*pbVar7)) {
									bVar3 = false;
								}
								if (mydflags[(lVar10 + iVar8) * 0x28 + iVar5] != '\0') {
									bVar3 = false;
								}
								pbVar7 = pbVar7 + 1;
								iVar9 = iVar9 + 1;
								iVar6 = iVar6 + 1;
								iVar5 = iVar5 + 1;
							} while (iVar6 < (int)uVar12);
						}
						iVar8 = iVar8 + 1;
					} while (iVar8 < (int)uVar14);
				}
				if ((!bVar3) && (lVar11 = lVar11 + 1, lVar11 == 0x28 - uVar12)) {
					lVar10 = lVar10 + 1;
					lVar11 = 0;
					if (lVar10 == 0x28 - uVar14) {
						lVar10 = 0;
					}
				}
				iVar13 = iVar13 + 1;
			} while (!bVar3);
			if (199 < iVar13) {
				return '\0';
			}
			iVar13 = 0;
			iVar8 = uVar14 * uVar12 + 2;
			if (bVar2 != 0) {
				do {
					iVar9 = 0;
					if (bVar1 != 0) {
						pbVar7 = miniset + iVar8;
						do {
							if (*pbVar7 != 0) {
								dungeon[(lVar11 + iVar9) * 0x30 + lVar10 + iVar13] = (ushort)*pbVar7;
								mydflags[(lVar10 + iVar13) * 0x28 + lVar11 + iVar9] =
										 mydflags[(lVar10 + iVar13) * 0x28 + lVar11 + iVar9] | 8;
							}
							pbVar7 = pbVar7 + 1;
							iVar9 = iVar9 + 1;
							iVar8 = iVar8 + 1;
						} while (iVar9 < (int)uVar12);
					}
					iVar13 = iVar13 + 1;
				} while (iVar13 < (int)uVar14);
			}
			iVar15 = iVar15 + 1;
		} while (iVar15 < local_60);
	}
	if ((currlevel == '\x0f') && (1 < quests[15]._qactive)) {
		quests[15]._qty = lVar10 + 1;
		quests[15]._qtx = lVar11 + 1;
	}
	if (setview == 1) {
		ViewX = lVar11 * 2 + 0x15;
		ViewY = lVar10 * 2 + 0x16;
	}
	if (ldir == 0) {
		LvlViewX = lVar11 * 2 + 0x15;
		LvlViewY = lVar10 * 2 + 0x16;
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4FTVR__Fiiiii(int i /*$s1*/, int j /*$s7*/, int x /*$s0*/, int y /*$fp*/, int d /*stack 16*/)
 // line 1299, offset 0x80153a30
	/* begin block 1 */
		// Start line: 1300
		// Start offset: 0x80153A30
	/* end block 1 */
	// End offset: 0x80153EA4
	// End Line: 1338

	/* begin block 2 */
		// Start line: 2789
	/* end block 2 */
	// End Line: 2790

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4FTVR__Fiiiii(int i,int j,int x,int y,int d)

{
	ushort uVar1;
	int i_00;
	int y_00;
	int j_00;
	int x_00;
	int i_01;
	int x_01;
	
	recurs = recurs + 1;
	if ((dung_map[x * 0x70 + y].dTransVal == '\0') && (uVar1 = dungeon[i * 0x30 + j], uVar1 == 6)) {
		i_00 = i + 1;
		x_01 = x + 2;
		dung_map[x * 0x70 + y].dTransVal = TransVal;
		dung_map[(x + 1) * 0x70 + y].dTransVal = TransVal;
		dung_map[x * 0x70 + y + 1].dTransVal = TransVal;
		dung_map[(x + 1) * 0x70 + y + 1].dTransVal = TransVal;
		DRLG_L4FTVR__Fiiiii(i_00,j,x_01,y,1);
		i_01 = i + -1;
		x_00 = x + -2;
		DRLG_L4FTVR__Fiiiii(i_01,j,x_00,y,2);
		j_00 = j + 1;
		y_00 = y + 2;
		DRLG_L4FTVR__Fiiiii(i,j_00,x,y_00,3);
		j = j + -1;
		y = y + -2;
		DRLG_L4FTVR__Fiiiii(i,j,x,y,4);
		DRLG_L4FTVR__Fiiiii(i_01,j,x_00,y,5);
		DRLG_L4FTVR__Fiiiii(i_00,j,x_01,y,(uint)uVar1);
		DRLG_L4FTVR__Fiiiii(i_01,j_00,x_00,y_00,7);
		DRLG_L4FTVR__Fiiiii(i_00,j_00,x_01,y_00,8);
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
	recurs = recurs + -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4FloodTVal__Fv()
 // line 1343, offset 0x80153ed8
	/* begin block 1 */
		// Start line: 1344
		// Start offset: 0x80153ED8
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int xx; // $s4
	// 		int yy; // $s5
	/* end block 1 */
	// End offset: 0x801540C4
	// End Line: 1382

	/* begin block 2 */
		// Start line: 2888
	/* end block 2 */
	// End Line: 2889

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4FloodTVal__Fv(void)

{
	int iVar1;
	int x;
	int iVar2;
	ushort *puVar3;
	int j;
	int iVar4;
	int i;
	int y;
	
	if (TransVal == '\0') {
		TransVal = '\x01';
	}
	y = 0x10;
	if (currlevel == '\x10') {
		i = 0;
		j = 0x88;
		do {
			iVar4 = 0;
			x = 0x3b80;
			iVar1 = y * 8 + 0x3800;
			iVar2 = 0x3800;
			puVar3 = dungeon;
			do {
				if ((puVar3[i] == 6) && ((&dung_map[0].dTransVal)[iVar1] == '\0')) {
					(&dung_map[0].dTransVal)[iVar1] = TransVal;
					(&dung_map[y].dTransVal)[x] = TransVal;
					(&dung_map[0].dTransVal)[j + iVar2] = TransVal;
					(&dung_map[0].dTransVal)[j + x] = TransVal;
				}
				x = x + 0x700;
				iVar1 = iVar1 + 0x700;
				iVar2 = iVar2 + 0x700;
				iVar4 = iVar4 + 1;
				puVar3 = puVar3 + 0x30;
			} while (iVar4 < 0x28);
			j = j + 0x10;
			i = i + 1;
			y = y + 2;
		} while (i < 0x28);
	}
	else {
		j = 0;
		do {
			x = 0x10;
			i = 0;
			iVar1 = y * 8 + 0x3800;
			puVar3 = dungeon;
			do {
				if ((puVar3[j] == 6) && ((&dung_map[0].dTransVal)[iVar1] == '\0')) {
					recurs = 0;
					DRLG_L4FTVR__Fiiiii(i,j,x,y,0);
					TransVal = TransVal + '\x01';
				}
				iVar1 = iVar1 + 0x700;
				x = x + 2;
				i = i + 1;
				puVar3 = puVar3 + 0x30;
			} while (i < 0x28);
			j = j + 1;
			y = y + 2;
		} while (j < 0x28);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsDURWall__Fc(char d /*$a0*/)
 // line 1388, offset 0x801540f0
	/* begin block 1 */
		// Start line: 1389
		// Start offset: 0x801540F0
	/* end block 1 */
	// End offset: 0x80154118
	// End Line: 1393

	/* begin block 2 */
		// Start line: 2980
	/* end block 2 */
	// End Line: 2981

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar IsDURWall__Fc(char d)

{
	bool bVar1;
	
	if ((d == '\x19') || (d == '\x1c')) {
		bVar1 = true;
	}
	else {
		bVar1 = d == '\x17';
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsDLLWall__Fc(char dd /*$a0*/)
 // line 1398, offset 0x80154120
	/* begin block 1 */
		// Start line: 1399
		// Start offset: 0x80154120
	/* end block 1 */
	// End offset: 0x80154148
	// End Line: 1403

	/* begin block 2 */
		// Start line: 3000
	/* end block 2 */
	// End Line: 3001

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar IsDLLWall__Fc(char dd)

{
	bool bVar1;
	
	if ((dd == '\x1b') || (dd == '\x1a')) {
		bVar1 = true;
	}
	else {
		bVar1 = dd == '\x16';
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4TransFix__Fv()
 // line 1407, offset 0x80154150
	/* begin block 1 */
		// Start line: 1408
		// Start offset: 0x80154150
		// Variables:
	// 		int j; // $a3
	// 		int yy; // stack offset -72
	/* end block 1 */
	// End offset: 0x80154488
	// End Line: 1449

	/* begin block 2 */
		// Start line: 3017
	/* end block 2 */
	// End Line: 3018

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4TransFix__Fv(void)

{
	ushort uVar1;
	uchar uVar2;
	ushort *puVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	ushort *puVar11;
	int iVar12;
	int local_48;
	int local_40;
	
	iVar6 = 0;
	local_48 = 0x10;
	iVar10 = 0x88;
	local_40 = 0x78;
	do {
		puVar11 = dungeon;
		iVar5 = 0;
		iVar8 = 0x3b80;
		iVar4 = 0x3800;
		iVar9 = iVar10 + 0x3800;
		iVar12 = 0x3480;
		iVar7 = local_48 * 8 + 0x3800;
		do {
			uVar2 = IsDURWall__Fc(*(char *)(puVar11 + iVar6));
			if ((uVar2 != '\0') && ((puVar11 + iVar6)[-1] == 0x12)) {
				(&dung_map[local_48].dTransVal)[iVar8] = (&dung_map[0].dTransVal)[iVar7];
				(&dung_map[0].dTransVal)[iVar10 + iVar8] = (&dung_map[0].dTransVal)[iVar7];
			}
			uVar2 = IsDLLWall__Fc(*(char *)(puVar11 + iVar6));
			puVar3 = puVar11 + iVar6;
			if ((uVar2 != '\0') && (*(short *)(iVar6 * 2 + iVar5 + -0x7ff1bedc) == 0x13)) {
				(&dung_map[0].dTransVal)[iVar9] = (&dung_map[0].dTransVal)[iVar7];
				(&dung_map[0].dTransVal)[iVar10 + iVar8] = (&dung_map[0].dTransVal)[iVar7];
			}
			uVar1 = *puVar3;
			if (uVar1 == 0x12) {
				(&dung_map[local_48].dTransVal)[iVar8] = (&dung_map[0].dTransVal)[iVar7];
				(&dung_map[0].dTransVal)[iVar10 + iVar8] = (&dung_map[0].dTransVal)[iVar7];
				uVar1 = *puVar3;
			}
			if (uVar1 == 0x13) {
				(&dung_map[0].dTransVal)[iVar9] = (&dung_map[0].dTransVal)[iVar7];
				(&dung_map[0].dTransVal)[iVar10 + iVar8] = (&dung_map[0].dTransVal)[iVar7];
			}
			uVar1 = *puVar3;
			if (uVar1 == 0x18) {
				(&dung_map[local_48].dTransVal)[iVar8] = (&dung_map[0].dTransVal)[iVar7];
				(&dung_map[0].dTransVal)[iVar9] = (&dung_map[0].dTransVal)[iVar7];
				(&dung_map[0].dTransVal)[iVar10 + iVar8] = (&dung_map[0].dTransVal)[iVar7];
				uVar1 = *puVar3;
			}
			if (uVar1 == 0x39) {
				(&dung_map[local_48].dTransVal)[iVar12] = (&dung_map[0].dTransVal)[iVar9];
				(&dung_map[0].dTransVal)[iVar7] = (&dung_map[0].dTransVal)[iVar9];
			}
			if (*puVar3 == 0x35) {
				(&dung_map[0].dTransVal)[local_40 + iVar4] = (&dung_map[local_48].dTransVal)[iVar8];
				(&dung_map[0].dTransVal)[iVar7] = (&dung_map[local_48].dTransVal)[iVar8];
			}
			iVar7 = iVar7 + 0x700;
			iVar8 = iVar8 + 0x700;
			iVar4 = iVar4 + 0x700;
			iVar9 = iVar9 + 0x700;
			iVar12 = iVar12 + 0x700;
			puVar11 = puVar11 + 0x30;
			iVar5 = iVar5 + 0x60;
		} while ((int)puVar11 < -0x7ff1b03c);
		iVar10 = iVar10 + 0x10;
		iVar6 = iVar6 + 1;
		local_40 = local_40 + 0x10;
		local_48 = local_48 + 2;
	} while (iVar6 < 0x28);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4Corners__Fv()
 // line 1454, offset 0x801544bc
	/* begin block 1 */
		// Start line: 1455
		// Start offset: 0x801544BC
		// Variables:
	// 		int i; // $a3
	// 		int j; // $t1
	/* end block 1 */
	// End offset: 0x80154548
	// End Line: 1467

	/* begin block 2 */
		// Start line: 3127
	/* end block 2 */
	// End Line: 3128

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4Corners__Fv(void)

{
	ushort *puVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 1;
	do {
		iVar4 = 1;
		iVar3 = -0x7ff1be7c;
		puVar2 = dungeon;
		do {
			puVar2 = puVar2 + 0x30;
			puVar1 = puVar2 + iVar5;
			if (((uint)*puVar1 - 0x12 < 0xd) &&
				 ((*(ushort *)(iVar5 * 2 + iVar3) < 0x12 || (puVar1[1] < 0x12)))) {
				*puVar1 = *puVar1 + 0x62;
			}
			iVar3 = iVar3 + 0x60;
			iVar4 = iVar4 + 1;
		} while (iVar4 < 0x27);
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x27);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ L4FixRim__Fv()
 // line 1472, offset 0x80154550
	/* begin block 1 */
		// Start line: 1473
		// Start offset: 0x80154550

		/* begin block 1.1 */
			// Start line: 1474
			// Start offset: 0x80154550
		/* end block 1.1 */
		// End offset: 0x8015456C
		// End Line: 1474

		/* begin block 1.2 */
			// Start line: 1475
			// Start offset: 0x8015456C
			// Variables:
		// 		int j; // $v1
		/* end block 1.2 */
		// End offset: 0x80154584
		// End Line: 1475
	/* end block 1 */
	// End offset: 0x80154584
	// End Line: 1475

	/* begin block 2 */
		// Start line: 3161
	/* end block 2 */
	// End Line: 3162

/* WARNING: Unknown calling convention yet parameter storage is locked */

void L4FixRim__Fv(void)

{
	int iVar1;
	uchar *puVar2;
	int iVar3;
	
	iVar1 = 0x17c;
	do {
		(&dung)[iVar1] = '\0';
		iVar1 = iVar1 + -0x14;
		iVar3 = 0x13;
	} while (-1 < iVar1);
	puVar2 = &UCHAR_00h_8014d887;
	do {
		*puVar2 = '\0';
		iVar3 = iVar3 + -1;
		puVar2 = puVar2 + -1;
	} while (-1 < iVar3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4GeneralFix__Fv()
 // line 1480, offset 0x8015458c
	/* begin block 1 */
		// Start line: 1481
		// Start offset: 0x8015458C
		// Variables:
	// 		int i; // $a2
	// 		int j; // $t0
	/* end block 1 */
	// End offset: 0x80154628
	// End Line: 1490

	/* begin block 2 */
		// Start line: 3179
	/* end block 2 */
	// End Line: 3180

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4GeneralFix__Fv(void)

{
	ushort *puVar1;
	ushort *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	do {
		iVar4 = 0;
		puVar2 = dungeon;
		iVar3 = -0x7ff1bedc;
		do {
			puVar1 = puVar2 + iVar5;
			if ((((*puVar1 == 0x18) || (*puVar1 == 0x7a)) && (*(short *)(iVar5 * 2 + iVar3) == 2)) &&
				 (puVar1[1] == 5)) {
				*puVar1 = 0x11;
			}
			iVar3 = iVar3 + 0x60;
			iVar4 = iVar4 + 1;
			puVar2 = puVar2 + 0x30;
		} while (iVar4 < 0x27);
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x27);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4SetWalls__Fv()
 // line 1493, offset 0x80154630
	/* begin block 1 */
		// Start line: 1494
		// Start offset: 0x80154630
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a2
	// 		int yy; // $t0

		/* begin block 1.1 */
			// Start line: 1498
			// Start offset: 0x80154630

			/* begin block 1.1.1 */
				// Start line: 1500
				// Start offset: 0x80154648

				/* begin block 1.1.1.1 */
					// Start line: 1504
					// Start offset: 0x80154654

					/* begin block 1.1.1.1.1 */
						// Start line: 1504
						// Start offset: 0x80154664
						// Variables:
					// 		int v; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x801546BC
					// End Line: 1522
				/* end block 1.1.1.1 */
				// End offset: 0x801546CC
				// End Line: 1523
			/* end block 1.1.1 */
			// End offset: 0x801546CC
			// End Line: 1524
		/* end block 1.1 */
		// End offset: 0x801546D8
		// End Line: 1525
	/* end block 1 */
	// End offset: 0x801546D8
	// End Line: 1525

	/* begin block 2 */
		// Start line: 3206
	/* end block 2 */
	// End Line: 3207

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4SetWalls__Fv(void)

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
			if ((puVar3[iVar5] == 6) || (puVar3[iVar5] == 0)) {
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
// void /*$ra*/ DRLG_L4__Fi(int entry /*$s3*/)
 // line 1530, offset 0x801546e0
	/* begin block 1 */
		// Start line: 1531
		// Start offset: 0x801546E0
		// Variables:
	// 		unsigned char doneflag; // $a0
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int spi; // $a1
	// 		int spj; // $v1
	/* end block 1 */
	// End offset: 0x80154FB4
	// End Line: 1690

	/* begin block 2 */
		// Start line: 3276
	/* end block 2 */
	// End Line: 3277

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4__Fi(int entry)

{
	ushort uVar1;
	uchar uVar2;
	long lVar3;
	ushort *puVar4;
	int ldir;
	int x;
	uchar *miniset;
	int setview;
	ushort *puVar5;
	uint setview_00;
	uint ldir_00;
	
	do {
		UPDATEPROGRESS__Fi(1);
		DRLG_InitTrans__Fv();
		do {
			do {
				InitL4Dungeon__Fv();
				L4firstRoom__Fv();
				L4FixRim__Fv();
				lVar3 = GetArea__Fv();
			} while (lVar3 < 0xad);
			uShape__Fv();
		} while (lVar3 < 0xad);
		L4makeDungeon__Fv();
		L4makeDmt__Fv();
		L4tileFix__Fv();
		if (currlevel == '\x10') {
			L4SaveQuads__Fv();
		}
		uVar2 = QuestStatus__Fi(0xb);
		if (((uVar2 != '\0') || ((currlevel == quests[15]._qlevel && (gbMaxPlayers != '\x01')))) &&
			 (setview = SP4x1, SP4x1 < SP4x2)) {
			do {
				if (SP4y1 < SP4y2) {
					x = SP4y1 * 0x28 + setview;
					ldir = SP4y1;
					do {
						ldir = ldir + 1;
						mydflags[x] = '\x01';
						x = x + 0x28;
					} while (ldir < SP4y2);
				}
				setview = setview + 1;
			} while (setview < SP4x2);
		}
		L4AddWall__Fv();
		DRLG_L4FloodTVal__Fv();
		DRLG_L4TransFix__Fv();
		if (setloadflag != '\0') {
			DRLG_L4SetSPRoom__Fii(SP4x1,SP4y1);
		}
		if (currlevel == '\x10') {
			DRLG_LoadDiabQuads__FUc('\x01');
		}
		uVar2 = QuestStatus__Fi(0xb);
		if (uVar2 == '\0') {
			if (currlevel == '\x0f') {
				if (entry != 0) {
					uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,0,0);
					if (uVar2 != '\0') {
						setview_00 = (uint)gbMaxPlayers;
						if ((gbMaxPlayers == '\x01') && (quests[5]._qactive != '\x02')) {
							miniset = L4PENTA;
							ldir_00 = setview_00;
						}
						else {
							miniset = L4PENTA2;
							setview_00 = 1;
							ldir_00 = 1;
						}
LAB_80154da0:
						uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(miniset,1,1,-1,-1,setview_00,ldir_00);
					}
LAB_80154dac:
					ViewY = ViewY + 1;
					goto LAB_80154dc8;
				}
				uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,1,0);
				if (uVar2 != '\0') {
					if ((gbMaxPlayers == '\x01') && (quests[5]._qactive != '\x02')) {
						miniset = L4PENTA;
					}
					else {
						miniset = L4PENTA2;
					}
					setview = 0;
					ldir = 1;
					goto LAB_80154cdc;
				}
			}
			else {
				if (entry == 0) {
					uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,1,0);
					if (uVar2 != '\0') {
						if (currlevel != '\x10') {
							uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4DSTAIRS,1,1,-1,-1,0,1);
						}
						if ((uVar2 != '\0') && (currlevel == '\r')) {
							miniset = L4TWARP;
							setview = 0;
							ldir = 6;
							goto LAB_80154cdc;
						}
					}
				}
				else {
					if (entry == 1) {
						uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,0,0);
						if (uVar2 != '\0') {
							if (currlevel != '\x10') {
								uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4DSTAIRS,1,1,-1,-1,1,1);
							}
							if ((uVar2 != '\0') && (currlevel == '\r')) {
								miniset = L4TWARP;
								setview_00 = 0;
								ldir_00 = 6;
								goto LAB_80154da0;
							}
						}
						goto LAB_80154dac;
					}
					uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,0,0);
					if (uVar2 != '\0') {
						if (currlevel != '\x10') {
							uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4DSTAIRS,1,1,-1,-1,0,1);
						}
						if ((uVar2 != '\0') && (currlevel == '\r')) {
							miniset = L4TWARP;
							setview = 1;
							ldir = 6;
							goto LAB_80154cdc;
						}
					}
				}
			}
LAB_80154ce8:
			ViewX = ViewX + 1;
		}
		else {
			if (entry == 0) {
				uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,1,0);
				if ((uVar2 != '\0') && (currlevel == '\r')) {
					miniset = L4TWARP;
					setview = 0;
					ldir = 6;
LAB_80154cdc:
					uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(miniset,1,1,-1,-1,setview,ldir);
				}
				goto LAB_80154ce8;
			}
			if (entry != 1) {
				uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,0,0);
				if ((uVar2 != '\0') && (currlevel == '\r')) {
					miniset = L4TWARP;
					setview = 1;
					ldir = 6;
					goto LAB_80154cdc;
				}
				goto LAB_80154ce8;
			}
			uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4USTAIRS,1,1,-1,-1,0,0);
			if ((uVar2 != '\0') && (currlevel == '\r')) {
				uVar2 = DRLG_L4PlaceMiniSet__FPCUciiiiii(L4TWARP,1,1,-1,-1,0,6);
			}
			ViewX = setpc_x * 2 + 0x16;
			ViewY = setpc_y * 2 + 0x16;
		}
LAB_80154dc8:
		if (uVar2 != '\0') {
			DRLG_L4GeneralFix__Fv();
			if (currlevel != '\x10') {
				DRLG_PlaceThemeRooms__FiiiiUc(7,10,6,8,1);
			}
			DRLG_L4Shadows__Fv();
			DRLG_L4SetWalls__Fv();
			DRLG_L4Corners__Fv();
			DRLG_L4Subs__Fv();
			DRLG_Init_Globals__Fv();
			uVar2 = QuestStatus__Fi(0xb);
			if (uVar2 != '\0') {
				setview = 0;
				do {
					ldir = 0;
					miniset = &pdungeon;
					puVar5 = dungeon;
					do {
						puVar4 = puVar5 + setview;
						puVar5 = puVar5 + 0x30;
						ldir = ldir + 1;
						miniset[setview] = (uchar)*puVar4;
						miniset = miniset + 0x28;
					} while (ldir < 0x28);
					setview = setview + 1;
				} while (setview < 0x28);
			}
			DRLG_CheckQuests__Fii(SP4x1,SP4y1);
			if (currlevel == '\x0f') {
				setview = 0;
				do {
					ldir = 0;
					x = -1;
					puVar5 = dungeon;
					do {
						uVar1 = puVar5[setview];
						if (uVar1 == 0x62) {
							Make_SetPC__Fiiii(x,setview + -1,5,5);
							uVar1 = puVar5[setview];
						}
						if (uVar1 == 0x6b) {
							Make_SetPC__Fiiii(x,setview + -1,5,5);
						}
						x = x + 1;
						ldir = ldir + 1;
						puVar5 = puVar5 + 0x30;
					} while (ldir < 0x28);
					setview = setview + 1;
				} while (setview < 0x28);
			}
			setview = 0;
			if (currlevel == '\x10') {
				do {
					ldir = 0;
					miniset = &pdungeon;
					puVar5 = dungeon;
					do {
						puVar4 = puVar5 + setview;
						puVar5 = puVar5 + 0x30;
						ldir = ldir + 1;
						miniset[setview] = (uchar)*puVar4;
						miniset = miniset + 0x28;
					} while (ldir < 0x28);
					setview = setview + 1;
				} while (setview < 0x28);
				DRLG_LoadDiabQuads__FUc('\0');
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_L4Pass3__Fv()
 // line 1696, offset 0x80154fe0
	/* begin block 1 */
		// Start line: 1697
		// Start offset: 0x80154FE0
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
	// End offset: 0x801551C4
	// End Line: 1795

	/* begin block 2 */
		// Start line: 3677
	/* end block 2 */
	// End Line: 3678

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_L4Pass3__Fv(void)

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
	
	y = (int)s__800ced94;
	x = (int)s__800ced96;
	y_00 = 0;
	iVar1 = (int)s__800ced98;
	iVar2 = (int)s__800ced9a._0_2_;
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
// void /*$ra*/ CreateL4Dungeon__FUii(unsigned int rseed /*$a0*/, int entry /*$s0*/)
 // line 1801, offset 0x801551f8
	/* begin block 1 */
		// Start line: 1802
		// Start offset: 0x801551F8

		/* begin block 1.1 */
			// Start line: 1802
			// Start offset: 0x801551F8
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.1 */
		// End offset: 0x801551F8
		// End Line: 1802

		/* begin block 1.2 */
			// Start line: 1802
			// Start offset: 0x801551F8
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.2 */
		// End offset: 0x801551F8
		// End Line: 1802

		/* begin block 1.3 */
			// Start line: 1802
			// Start offset: 0x801551F8
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.3 */
		// End offset: 0x801551F8
		// End Line: 1802

		/* begin block 1.4 */
			// Start line: 1802
			// Start offset: 0x801551F8
			// Variables:
		// 		void *p__p; // $a0
		/* end block 1.4 */
		// End offset: 0x801552C4
		// End Line: 1842
	/* end block 1 */
	// End offset: 0x801552C4
	// End Line: 1842

	/* begin block 2 */
		// Start line: 3930
	/* end block 2 */
	// End Line: 3931

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateL4Dungeon__FUii(uint rseed,int entry)

{
	uchar *p;
	
	SetRndSeed__Fl(rseed);
	dmaxx = 0x60;
	dmaxy = 0x60;
	dminx = 0;
	dminy = 0;
	ViewX = 0x28;
	ViewY = 0x28;
	lpSetPiece1 = (uchar *)0x0;
	lpSetPiece2 = (uchar *)0x0;
	lpSetPiece3 = (uchar *)0x0;
	lpSetPiece4 = (uchar *)0x0;
	DRLG_InitSetPC__Fv();
	DRLG_LoadL4SP__Fv();
	DRLG_L4__Fi(entry);
	DRLG_L4Pass3__Fv();
	DRLG_FreeL4SP__Fv();
	DRLG_SetPC__Fv();
	p = lpSetPiece1;
	lpSetPiece1 = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = lpSetPiece2;
	lpSetPiece2 = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = lpSetPiece3;
	lpSetPiece3 = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	p = lpSetPiece4;
	lpSetPiece4 = (uchar *)0x0;
	mem_free_dbg__FPv(p);
	return;
}





