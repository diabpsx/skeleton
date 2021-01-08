#include "THISDUST.H"
#include "THEMES.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TFit_Shrine__Fi(int i /*$a0*/)
 // line 106, offset 0x8015bc0c
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8015BC0C
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s5
	// 		int found; // stack offset -80
	/* end block 1 */
	// End offset: 0x8015BEC8
	// End Line: 151

	/* begin block 2 */
		// Start line: 212
	/* end block 2 */
	// End Line: 213

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TFit_Shrine__Fi(int i)

{
	bool bVar1;
	int iVar2;
	void *pvVar3;
	int x;
	int iVar4;
	int iVar5;
	int iVar6;
	int y;
	int iVar7;
	int x_00;
	int iVar8;
	int local_50;
	int local_40;
	int local_38;
	int local_30;
	
	x = 0;
	y = 0;
	local_40 = 8;
	iVar6 = -8;
	local_38 = 1;
	iVar8 = 0;
	iVar4 = -0x380;
	x_00 = -1;
	iVar5 = 0;
	iVar7 = 0x380;
	local_50 = 0;
	local_30 = -1;
	iVar2 = 0;
	do {
		bVar1 = false;
		if ((int)(&dung_map[0].dTransVal)[iVar2] == (&theme)[i].ttval) {
			pvVar3 = GetTRAP__Fii(x,local_30);
			if (pvVar3 != (void *)0x0) {
				pvVar3 = GetSOLID__Fii(x_00,y);
				if (pvVar3 == (void *)0x0) {
					pvVar3 = GetSOLID__Fii(x + 1,y);
					bVar1 = pvVar3 == (void *)0x0;
				}
			}
			if (bVar1) {
				if (((((int)(&dung_map[0].dTransVal)[iVar8 + iVar4] == (&theme)[i].ttval) &&
						 ((int)(&dung_map[0].dTransVal)[iVar8 + iVar7] ==
							(int)(&dung_map[0].dTransVal)[iVar8 + iVar4])) &&
						((&dung_map[0].dObject)[iVar6 + iVar4] == '\0')) &&
					 ((&dung_map[0].dObject)[iVar6 + iVar7] == '\0')) {
					local_50 = 1;
				}
			}
			bVar1 = false;
			if (local_50 != 0) {
				themex = x;
				themey = y;
				themeVar1 = local_50;
				return '\x01';
			}
			pvVar3 = GetTRAP__Fii(x_00,y);
			if ((pvVar3 != (void *)0x0) && (pvVar3 = GetSOLID__Fii(x,local_30), pvVar3 == (void *)0x0)) {
				pvVar3 = GetSOLID__Fii(x,local_38);
				bVar1 = pvVar3 == (void *)0x0;
			}
			if (((bVar1) && ((int)(&dung_map[0].dTransVal)[iVar6 + iVar5] == (&theme)[i].ttval)) &&
				 (((int)(&dung_map[0].dTransVal)[local_40 + iVar5] ==
					 (int)(&dung_map[0].dTransVal)[iVar6 + iVar5] &&
					(((&dung_map[0].dObject)[iVar6 + iVar4] == '\0' &&
					 ((&dung_map[0].dObject)[local_40 + iVar4] == '\0')))))) {
				local_50 = 2;
			}
		}
		if (local_50 != 0) {
			themex = x;
			themey = y;
			themeVar1 = local_50;
			return '\x01';
		}
		iVar4 = iVar4 + 0x380;
		x_00 = x_00 + 1;
		iVar5 = iVar5 + 0x380;
		x = x + 1;
		iVar7 = iVar7 + 0x380;
		if (x == 0x60) {
			iVar4 = -0x380;
			x_00 = -1;
			iVar5 = 0;
			iVar7 = 0x380;
			x = 0;
			iVar6 = iVar6 + 8;
			local_40 = local_40 + 8;
			local_38 = local_38 + 1;
			y = y + 1;
			local_30 = local_30 + 1;
			iVar8 = iVar8 + 8;
			if (y == 0x60) {
				return '\0';
			}
		}
		iVar2 = iVar8 + iVar5;
	} while( true );
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TFit_Obj5__Fi(int t /*$s0*/)
 // line 157, offset 0x8015befc
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8015BEFC
		// Variables:
	// 		int xp; // $s3
	// 		int yp; // $s4
	// 		int i; // $s2
	// 		int r; // $s6
	// 		int rs; // $fp
	// 		unsigned char found; // $s5
	/* end block 1 */
	// End offset: 0x8015C08C
	// End Line: 193

	/* begin block 2 */
		// Start line: 370
	/* end block 2 */
	// End Line: 371

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TFit_Obj5__Fi(int t)

{
	bool bVar1;
	long lVar2;
	undefined *puVar3;
	void *pvVar4;
	int iVar5;
	int *piVar6;
	int x;
	int y;
	int iVar7;
	int iVar8;
	
	x = 0;
	y = 0;
	lVar2 = ENG_random__Fl(5);
	iVar7 = lVar2 + 1;
	if (0 < iVar7) {
		iVar5 = 0;
		iVar8 = iVar7;
		do {
			bVar1 = false;
			if ((int)(&dung_map[x * 0x70].dTransVal)[iVar5] == (&theme)[t].ttval) {
				puVar3 = (undefined *)GetSOLID__Fii(x,y);
				bVar1 = false;
				if (puVar3 != &DAT_00000001) {
					bVar1 = true;
					iVar5 = 0;
					piVar6 = trm5x;
					do {
						if (0x18 < iVar5) break;
						pvVar4 = GetSOLID__Fii(x + *piVar6,y + trm5y[iVar5]);
						if (pvVar4 != (void *)0x0) {
							bVar1 = false;
						}
						if ((int)dung_map[(x + *piVar6) * 0x70 + y + trm5y[iVar5]].dTransVal !=
								(&theme)[t].ttval) {
							bVar1 = false;
						}
						piVar6 = piVar6 + 1;
						iVar5 = iVar5 + 1;
					} while (bVar1);
				}
			}
			if (bVar1) {
				iVar8 = iVar8 + -1;
			}
			else {
				x = x + 1;
				if (x == 0x60) {
					y = y + 1;
					x = 0;
					if ((y == 0x60) && (y = 0, iVar8 == iVar7)) {
						return '\0';
					}
				}
			}
			iVar5 = y << 3;
		} while (0 < iVar8);
	}
	themex = x;
	themey = y;
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TFit_SkelRoom__Fi(int t /*$s2*/)
 // line 199, offset 0x8015c0c0
	/* begin block 1 */
		// Start line: 200
		// Start offset: 0x8015C0C0
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8015C154
	// End Line: 214

	/* begin block 2 */
		// Start line: 473
	/* end block 2 */
	// End Line: 474

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TFit_SkelRoom__Fi(int t)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	if (((uint)leveltype - 1 < 2) && (iVar2 = 0, 0 < nummtypes)) {
		iVar3 = 0;
		do {
			uVar1 = IsSkel__Fi((uint)(&Monsters[0].mtype)[iVar3]);
			if (uVar1 != '\0') {
				themeVar1 = iVar2;
				uVar1 = TFit_Obj5__Fi(t);
				return uVar1;
			}
			iVar2 = iVar2 + 1;
			iVar3 = iVar3 + 0x1c;
		} while (iVar2 < nummtypes);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TFit_GoatShrine__Fi(int t /*$s2*/)
 // line 220, offset 0x8015c170
	/* begin block 1 */
		// Start line: 221
		// Start offset: 0x8015C170
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8015C1EC
	// End Line: 232

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TFit_GoatShrine__Fi(int t)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	if (0 < nummtypes) {
		iVar3 = 0;
		do {
			uVar1 = IsGoat__Fi((uint)(&Monsters[0].mtype)[iVar3]);
			if (uVar1 != '\0') {
				themeVar1 = iVar2;
				uVar1 = TFit_Obj5__Fi(t);
				return uVar1;
			}
			iVar2 = iVar2 + 1;
			iVar3 = iVar3 + 0x1c;
		} while (iVar2 < nummtypes);
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckThemeObj3__Fiiii(int xp /*$s3*/, int yp /*$s4*/, int t /*$s6*/, int f /*$s5*/)
 // line 238, offset 0x8015c208
	/* begin block 1 */
		// Start line: 239
		// Start offset: 0x8015C208

		/* begin block 1.1 */
			// Start line: 239
			// Start offset: 0x8015C208
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x8015C324
		// End Line: 253
	/* end block 1 */
	// End offset: 0x8015C328
	// End Line: 254

	/* begin block 2 */
		// Start line: 557
	/* end block 2 */
	// End Line: 558

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CheckThemeObj3__Fiiii(int xp,int yp,int t,int f)

{
	void *pvVar1;
	long lVar2;
	int y;
	int *piVar3;
	int iVar4;
	
	iVar4 = 0;
	piVar3 = &trm3x;
	while( true ) {
		if (xp + *piVar3 < 0) {
			return '\0';
		}
		y = yp + trm3y[iVar4];
		if (y < 0) {
			return '\0';
		}
		pvVar1 = GetSOLID__Fii(xp + *piVar3,y);
		if (pvVar1 != (void *)0x0) {
			return '\0';
		}
		y = yp + trm3y[iVar4];
		if ((int)dung_map[(xp + *piVar3) * 0x70 + y].dTransVal != (&theme)[t].ttval) break;
		if (dung_map[(xp + *piVar3) * 0x70 + y].dObject != '\0') {
			return '\0';
		}
		if ((f != -1) && (lVar2 = ENG_random__Fl(f), lVar2 == 0)) {
			return '\0';
		}
		iVar4 = iVar4 + 1;
		piVar3 = piVar3 + 1;
		if (8 < iVar4) {
			return '\x01';
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TFit_Obj3__Fi(int t /*$s3*/)
 // line 260, offset 0x8015c354
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x8015C354
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s1
	// 		char objrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015C3F4
	// End Line: 274

	/* begin block 2 */
		// Start line: 605
	/* end block 2 */
	// End Line: 606

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TFit_Obj3__Fi(int t)

{
	uchar uVar1;
	int xp;
	int yp;
	char cStack33;
	undefined4 uStack32;
	
	uStack32 = DAT_8011c15c;
	yp = 1;
	do {
		xp = 1;
		do {
			uVar1 = CheckThemeObj3__Fiiii(xp,yp,t,(int)(&cStack33)[(uint)leveltype]);
			if (uVar1 != '\0') {
				themex = xp;
				themey = yp;
				return '\x01';
			}
			xp = xp + 1;
		} while (xp < 0x5f);
		yp = yp + 1;
	} while (yp < 0x5f);
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckThemeReqs__Fi(int t /*$a0*/)
 // line 286, offset 0x8015c414
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x8015C414
		// Variables:
	// 		unsigned char rv; // $a1
	/* end block 1 */
	// End offset: 0x8015C4D8
	// End Line: 319

	/* begin block 2 */
		// Start line: 660
	/* end block 2 */
	// End Line: 661

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CheckThemeReqs__Fi(int t)

{
	uchar uVar1;
	uchar uVar2;
	
	uVar2 = '\x01';
	switch(t) {
	case 1:
	case 3:
	case 5:
		if (1 < (uint)leveltype - 3) {
			return '\x01';
		}
		return '\0';
	default:
		goto switchD_8015c438_caseD_2;
	case 7:
		uVar1 = bFountainFlag;
		break;
	case 9:
		uVar1 = pFountainFlag;
		break;
	case 10:
	case 0x10:
		if (leveltype != '\x01') {
			return '\x01';
		}
		return '\0';
	case 0xc:
		uVar1 = cauldronFlag;
		if (leveltype == '\x04') break;
		goto LAB_8015c4d4;
	case 0xd:
		uVar1 = mFountainFlag;
		break;
	case 0xe:
		uVar1 = tFountainFlag;
	}
	if (uVar1 == '\0') {
LAB_8015c4d4:
		uVar2 = '\0';
	}
switchD_8015c438_caseD_2:
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SpecialThemeFit__Fii(int i /*$s1*/, int t /*$s0*/)
 // line 325, offset 0x8015c4e0
	/* begin block 1 */
		// Start line: 326
		// Start offset: 0x8015C4E0
		// Variables:
	// 		unsigned char rv; // $v1
	/* end block 1 */
	// End offset: 0x8015C6A4
	// End Line: 381

	/* begin block 2 */
		// Start line: 735
	/* end block 2 */
	// End Line: 736

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar SpecialThemeFit__Fii(int i,int t)

{
	uchar uVar1;
	uchar uVar2;
	
	uVar2 = CheckThemeReqs__Fi(t);
	uVar1 = treasureFlag;
	switch(t) {
	case 1:
	case 5:
		if (uVar2 != '\0') {
			uVar2 = TFit_Shrine__Fi(i);
		}
		break;
	case 3:
		if (uVar2 != '\0') {
			uVar2 = TFit_SkelRoom__Fi(i);
		}
		break;
	case 4:
		uVar2 = uVar1;
		if (treasureFlag != '\0') {
			treasureFlag = '\0';
			uVar2 = uVar1;
		}
		break;
	case 6:
	case 8:
	case 10:
	case 0xf:
	case 0x10:
		if (uVar2 != '\0') {
			uVar2 = TFit_Obj3__Fi(i);
		}
		break;
	case 7:
		if ((uVar2 != '\0') && (uVar2 = TFit_Obj5__Fi(i), uVar2 != '\0')) {
			bFountainFlag = '\0';
		}
		break;
	case 9:
		if ((uVar2 != '\0') && (uVar2 = TFit_Obj5__Fi(i), uVar2 != '\0')) {
			pFountainFlag = '\0';
		}
		break;
	case 0xb:
		if (uVar2 != '\0') {
			uVar2 = TFit_GoatShrine__Fi(i);
		}
		break;
	case 0xc:
		if ((uVar2 != '\0') && (uVar2 = TFit_Obj5__Fi(i), uVar2 != '\0')) {
			cauldronFlag = '\0';
		}
		break;
	case 0xd:
		if ((uVar2 != '\0') && (uVar2 = TFit_Obj5__Fi(i), uVar2 != '\0')) {
			mFountainFlag = '\0';
		}
		break;
	case 0xe:
		if ((uVar2 != '\0') && (uVar2 = TFit_Obj5__Fi(i), uVar2 != '\0')) {
			tFountainFlag = '\0';
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckThemeRoom__Fi(int tv /*$s2*/)
 // line 387, offset 0x8015c6bc
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x8015C6BC
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int tarea; // $a0
	/* end block 1 */
	// End offset: 0x8015C94C
	// End Line: 427

	/* begin block 2 */
		// Start line: 863
	/* end block 2 */
	// End Line: 864

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CheckThemeRoom__Fi(int tv)

{
	int *piVar1;
	int *piVar2;
	uchar uVar3;
	undefined *puVar4;
	int x;
	int y;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iStack48;
	
	if (0 < numtrigs) {
		y = 0;
		do {
			piVar1 = (int *)((int)&trigs._ty + y);
			piVar2 = (int *)((int)&trigs._tx + y);
			y = y + 0x10;
			if ((int)dung_map[*piVar2 * 0x70 + *piVar1].dTransVal == tv) goto LAB_8015c7d4;
		} while (y < numtrigs << 4);
	}
	y = 0;
	iVar6 = 0;
	do {
		iVar5 = 0;
		x = iVar6 << 3;
		do {
			if (((int)(&dung_map[0].dTransVal)[x] == tv) &&
				 (y = y + 1, ((&dung_map[0].dFlags)[x] & 8U) != 0)) goto LAB_8015c7d4;
			iVar5 = iVar5 + 1;
			x = x + 0x380;
		} while (iVar5 < 0x60);
		iVar6 = iVar6 + 1;
	} while (iVar6 < 0x60);
	if ((leveltype == '\x01') && (0x5b < y - 9U)) {
LAB_8015c7d4:
		uVar3 = '\0';
	}
	else {
		y = 0;
		iStack48 = -8;
		do {
			x = 0;
			iVar9 = 0;
			iVar8 = 0x380;
			iVar7 = -0x380;
			iVar5 = y * 8;
			iVar6 = iStack48;
			do {
				if (((int)(&dung_map[0].dTransVal)[iVar5] == tv) &&
					 (puVar4 = (undefined *)GetSOLID__Fii(x,y), puVar4 != &DAT_00000001)) {
					if (((int)(&dung_map[y].dTransVal)[iVar7] != tv) &&
						 (puVar4 = (undefined *)GetSOLID__Fii(x + -1,y), puVar4 != &DAT_00000001)) {
						return '\0';
					}
					if (((int)(&dung_map[y].dTransVal)[iVar8] != tv) &&
						 (puVar4 = (undefined *)GetSOLID__Fii(x + 1,y), puVar4 != &DAT_00000001)) {
						return '\0';
					}
					if (((int)(&dung_map[0].dTransVal)[iVar6] != tv) &&
						 (puVar4 = (undefined *)GetSOLID__Fii(x,y + -1), puVar4 != &DAT_00000001)) {
						return '\0';
					}
					if (((int)(&dung_map[y + 1].dTransVal)[iVar9] != tv) &&
						 (puVar4 = (undefined *)GetSOLID__Fii(x,y + 1), puVar4 != &DAT_00000001)) {
						return '\0';
					}
				}
				iVar9 = iVar9 + 0x380;
				iVar6 = iVar6 + 0x380;
				iVar8 = iVar8 + 0x380;
				iVar7 = iVar7 + 0x380;
				x = x + 1;
				iVar5 = iVar5 + 0x380;
			} while (x < 0x60);
			y = y + 1;
			iStack48 = iStack48 + 8;
		} while (y < 0x60);
		uVar3 = '\x01';
	}
	return uVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitThemes__Fv()
 // line 433, offset 0x8015c980
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x8015C980
		// Variables:
	// 		int i; // $s1
	// 		int t; // $s0
	/* end block 1 */
	// End offset: 0x8015CCA4
	// End Line: 497

	/* begin block 2 */
		// Start line: 955
	/* end block 2 */
	// End Line: 956

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitThemes__Fv(void)

{
	uchar uVar1;
	uchar *puVar2;
	long t;
	int iVar3;
	int tv;
	int iVar4;
	ThemeStruct *pTVar5;
	
	zharlib = -1;
	armorFlag = '\x01';
	bFountainFlag = '\x01';
	cauldronFlag = '\x01';
	mFountainFlag = '\x01';
	pFountainFlag = '\x01';
	tFountainFlag = '\x01';
	treasureFlag = '\x01';
	weaponFlag = '\x01';
	numthemes = 0;
	bCrossFlag = '\0';
	if (currlevel != '\x10') {
		if (leveltype == '\x01') {
			tv = 3;
			puVar2 = &UCHAR_00h_8011c1af;
			do {
				*puVar2 = '\0';
				tv = tv + -1;
				puVar2 = puVar2 + -1;
			} while (-1 < tv);
			tv = 0;
			do {
				if (0x31 < numthemes) break;
				uVar1 = CheckThemeRoom__Fi(tv);
				if (uVar1 != '\0') {
					(&theme)[numthemes].ttval = tv;
					t = ENG_random__Fl(4);
					t = ThemeGood[t];
					while (uVar1 = SpecialThemeFit__Fii(numthemes,t), uVar1 == '\0') {
						t = ENG_random__Fl(0x11);
					}
					(&theme)[numthemes].ttype = (char)t;
					numthemes = numthemes + 1;
				}
				tv = tv + 1;
			} while (tv < 0x100);
		}
		if (((uint)leveltype - 2 < 2) || (leveltype == '\x04')) {
			tv = 0;
			if (0 < themeCount) {
				iVar3 = 0;
				do {
					(&theme.ttype)[iVar3] = -1;
					tv = tv + 1;
					iVar3 = iVar3 + 8;
				} while (tv < themeCount);
			}
			uVar1 = QuestStatus__Fi(3);
			if ((uVar1 != '\0') && (tv = 0, 0 < themeCount)) {
				iVar4 = 0;
				iVar3 = 0;
				do {
					*(undefined4 *)((int)&theme.ttval + iVar3) = *(undefined4 *)((int)&themeLoc.ttval + iVar4)
					;
					uVar1 = SpecialThemeFit__Fii(tv,5);
					if (uVar1 != '\0') {
						(&theme.ttype)[iVar3] = '\x05';
						zharlib = tv;
						break;
					}
					iVar4 = iVar4 + 0x14;
					tv = tv + 1;
					iVar3 = iVar3 + 8;
				} while (tv < themeCount);
			}
			tv = 0;
			if (0 < themeCount) {
				pTVar5 = &theme;
				iVar4 = 0;
				iVar3 = 0;
				do {
					if (pTVar5->ttype == -1) {
						*(undefined4 *)((int)&theme.ttval + iVar4) =
								 *(undefined4 *)((int)&themeLoc.ttval + iVar3);
						t = ENG_random__Fl(4);
						t = ThemeGood[t];
						while (uVar1 = SpecialThemeFit__Fii(tv,t), uVar1 == '\0') {
							t = ENG_random__Fl(0x11);
						}
						pTVar5->ttype = (char)t;
					}
					pTVar5 = pTVar5 + 1;
					iVar4 = iVar4 + 8;
					tv = tv + 1;
					iVar3 = iVar3 + 0x14;
				} while (tv < themeCount);
			}
			numthemes = numthemes + themeCount;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HoldThemeRooms__Fv()
 // line 504, offset 0x8015cccc
	/* begin block 1 */
		// Start line: 505
		// Start offset: 0x8015CCCC
		// Variables:
	// 		int i; // $a2
	// 		int x; // $a0
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x8015CDA0
	// End Line: 523

	/* begin block 2 */
		// Start line: 1126
	/* end block 2 */
	// End Line: 1127

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HoldThemeRooms__Fv(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (currlevel != '\x10') {
		if (leveltype == '\x01') {
			iVar5 = 0;
			if (0 < numthemes) {
				iVar6 = 0;
				do {
					iVar4 = 0;
					cVar1 = *(char *)((int)&theme.ttval + iVar6);
					do {
						iVar3 = 0;
						iVar2 = iVar4 << 3;
						do {
							if ((&dung_map[0].dTransVal)[iVar2] == cVar1) {
								(&dung_map[0].dFlags)[iVar2] = (&dung_map[0].dFlags)[iVar2] | 8;
							}
							iVar3 = iVar3 + 1;
							iVar2 = iVar2 + 0x380;
						} while (iVar3 < 0x60);
						iVar4 = iVar4 + 1;
					} while (iVar4 < 0x60);
					iVar5 = iVar5 + 1;
					iVar6 = iVar6 + 8;
				} while (iVar5 < numthemes);
			}
		}
		else {
			DRLG_HoldThemeRooms__Fv();
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceThemeMonsts__Fii(int t /*$s4*/, int f /*$s5*/)
 // line 530, offset 0x8015cdb0
	/* begin block 1 */
		// Start line: 531
		// Start offset: 0x8015CDB0
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s2
	// 		int mtype; // $s3
	// 		int scattertypes[111]; // stack offset -488
	// 		int numscattypes; // $a0
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8015CF0C
	// End Line: 555

	/* begin block 2 */
		// Start line: 1178
	/* end block 2 */
	// End Line: 1179

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceThemeMonsts__Fii(int t,int f)

{
	undefined *puVar1;
	int mtype;
	long v;
	int *piVar2;
	int iVar3;
	int x;
	int y;
	int local_1e8 [114];
	
	y = nummtypes;
	mtype = 0;
	v = 0;
	if (0 < nummtypes) {
		iVar3 = 0;
		piVar2 = local_1e8;
		do {
			if (((&Monsters[0].mPlaceFlags)[iVar3] & 1) != 0) {
				*piVar2 = mtype;
				piVar2 = piVar2 + 1;
				v = v + 1;
			}
			mtype = mtype + 1;
			iVar3 = iVar3 + 0x1c;
		} while (mtype < y);
	}
	y = 0;
	v = ENG_random__Fl(v);
	mtype = local_1e8[v];
	do {
		x = 0;
		iVar3 = y << 3;
		do {
			if (((((int)(&dung_map[0].dTransVal)[iVar3] == (&theme)[t].ttval) &&
					 (puVar1 = (undefined *)GetSOLID__Fii(x,y), puVar1 != &DAT_00000001)) &&
					((&dung_map[0].dItem)[iVar3] == '\0')) &&
				 (((&dung_map[0].dObject)[iVar3] == '\0' && (v = ENG_random__Fl(f), v == 0)))) {
				v = ENG_random__Fl(8);
				AddMonster__FiiiiUc(x,y,v,mtype,1);
			}
			x = x + 1;
			iVar3 = iVar3 + 0x380;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Barrel__Fi(int t /*$s4*/)
 // line 563, offset 0x8015cf34
	/* begin block 1 */
		// Start line: 564
		// Start offset: 0x8015CF34
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s1
	// 		int r; // $a0
	// 		char barrnd[4]; // stack offset -40
	// 		char monstrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015D06C
	// End Line: 582

	/* begin block 2 */
		// Start line: 1251
	/* end block 2 */
	// End Line: 1252

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Barrel__Fi(int t)

{
	undefined *puVar1;
	long lVar2;
	int ot;
	int x;
	int y;
	int iVar3;
	char cStack41;
	undefined4 local_28;
	char cStack33;
	undefined4 local_20;
	
	local_28 = DAT_8011c160;
	local_20 = DAT_8011c164;
	y = 0;
	do {
		x = 0;
		iVar3 = y << 3;
		do {
			if ((((int)(&dung_map[0].dTransVal)[iVar3] == (&theme)[t].ttval) &&
					(puVar1 = (undefined *)GetSOLID__Fii(x,y), puVar1 != &DAT_00000001)) &&
				 (lVar2 = ENG_random__Fl((int)(&cStack41)[(uint)leveltype]), lVar2 == 0)) {
				lVar2 = ENG_random__Fl((int)(&cStack41)[(uint)leveltype]);
				ot = 0x3a;
				if (lVar2 == 0) {
					ot = 0x39;
				}
				AddObject__Fiii(ot,x,y);
			}
			x = x + 1;
			iVar3 = iVar3 + 0x380;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	PlaceThemeMonsts__Fii(t,(int)(&cStack33)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Shrine__Fi(int t /*$s0*/)
 // line 588, offset 0x8015d090
	/* begin block 1 */
		// Start line: 589
		// Start offset: 0x8015D090
		// Variables:
	// 		char monstrnd[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8015D164
	// End Line: 602

	/* begin block 2 */
		// Start line: 1301
	/* end block 2 */
	// End Line: 1302

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Shrine__Fi(int t)

{
	int ox;
	int oy;
	char cStack17;
	undefined4 local_10;
	
	local_10 = DAT_8011c168;
	TFit_Shrine__Fi(t);
	if (themeVar1 == 1) {
		AddObject__Fiii(9,themex + -1,themey);
		AddObject__Fiii(0x3c,themex,themey);
		ox = themex + 1;
		oy = themey;
	}
	else {
		AddObject__Fiii(9,themex,themey + -1);
		AddObject__Fiii(0x3b,themex,themey);
		oy = themey + 1;
		ox = themex;
	}
	AddObject__Fiii(9,ox,oy);
	PlaceThemeMonsts__Fii(t,(int)(&cStack17)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_MonstPit__Fi(int t /*$s6*/)
 // line 608, offset 0x8015d178
	/* begin block 1 */
		// Start line: 609
		// Start offset: 0x8015D178
		// Variables:
	// 		int r; // $s3
	// 		int ixp; // $s0
	// 		int iyp; // $s1
	// 		char monstrnd[4]; // stack offset -40
	/* end block 1 */
	// End offset: 0x8015D290
	// End Line: 636

	/* begin block 2 */
		// Start line: 1341
	/* end block 2 */
	// End Line: 1342

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_MonstPit__Fi(int t)

{
	long lVar1;
	undefined *puVar2;
	int x;
	int y;
	int iVar3;
	int iVar4;
	char cStack41;
	undefined4 local_28;
	
	local_28 = DAT_8011c16c;
	lVar1 = ENG_random__Fl(100);
	iVar4 = lVar1 + 1;
	x = 0;
	y = 0;
	if (iVar4 < 1) {
		x = 0;
LAB_8015d254:
		CreateRndItem__FiiUcUcUc(x,y,'\x01','\0',1);
		ItemNoFlippy__Fv();
		PlaceThemeMonsts__Fii(t,(int)(&cStack41)[(uint)leveltype]);
	}
	else {
		iVar3 = 0;
		do {
			do {
				if (((int)(&dung_map[y].dTransVal)[iVar3] == (&theme)[t].ttval) &&
					 (puVar2 = (undefined *)GetSOLID__Fii(x,y), puVar2 != &DAT_00000001)) {
					iVar4 = iVar4 + -1;
				}
				if (iVar4 < 1) goto LAB_8015d254;
				x = x + 1;
				iVar3 = iVar3 + 0x380;
			} while (x != 0x60);
			iVar3 = 0;
			y = y + 1;
			x = 0;
		} while (y != 0x60);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_SkelRoom__Fi(int t /*$a0*/)
 // line 642, offset 0x8015d2bc
	/* begin block 1 */
		// Start line: 643
		// Start offset: 0x8015D2BC
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s2
	// 		char monstrnd[4]; // stack offset -24
	/* end block 1 */
	// End offset: 0x8015D5DC
	// End Line: 696

	/* begin block 2 */
		// Start line: 1409
	/* end block 2 */
	// End Line: 1410

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_SkelRoom__Fi(int t)

{
	int x;
	long lVar1;
	int ii;
	undefined *puVar2;
	int oy;
	int y;
	char cStack25;
	undefined4 local_18;
	
	local_18 = DAT_8011c16c;
	TFit_SkelRoom__Fi(t);
	oy = themey;
	x = themex;
	AddObject__Fiii(3,themex,themey);
	lVar1 = ENG_random__Fl((int)(&cStack25)[(uint)leveltype]);
	if (lVar1 == 0) {
		AddObject__Fiii(0xb,x + -1,oy + -1);
	}
	else {
		ii = PreSpawnSkeleton__Fv();
		SpawnSkeleton__Fiii(ii,x + -1,oy + -1);
	}
	y = oy + -1;
	ii = PreSpawnSkeleton__Fv();
	SpawnSkeleton__Fiii(ii,x,y);
	lVar1 = ENG_random__Fl((int)(&cStack25)[(uint)leveltype]);
	if (lVar1 == 0) {
		AddObject__Fiii(0xd,x + 1,y);
	}
	else {
		ii = PreSpawnSkeleton__Fv();
		SpawnSkeleton__Fiii(ii,x + 1,y);
	}
	lVar1 = ENG_random__Fl((int)(&cStack25)[(uint)leveltype]);
	if (lVar1 == 0) {
		AddObject__Fiii(0xc,x + -1,oy);
	}
	else {
		ii = PreSpawnSkeleton__Fv();
		SpawnSkeleton__Fiii(ii,x + -1,oy);
	}
	lVar1 = ENG_random__Fl((int)(&cStack25)[(uint)leveltype]);
	if (lVar1 == 0) {
		AddObject__Fiii(0xc,x + 1,oy);
	}
	else {
		ii = PreSpawnSkeleton__Fv();
		SpawnSkeleton__Fiii(ii,x + 1,oy);
	}
	lVar1 = ENG_random__Fl((int)(&cStack25)[(uint)leveltype]);
	if (lVar1 == 0) {
		AddObject__Fiii(0xd,x + -1,oy + 1);
	}
	else {
		ii = PreSpawnSkeleton__Fv();
		SpawnSkeleton__Fiii(ii,x + -1,oy + 1);
	}
	y = oy + 1;
	ii = PreSpawnSkeleton__Fv();
	SpawnSkeleton__Fiii(ii,x,y);
	lVar1 = ENG_random__Fl((int)(&cStack25)[(uint)leveltype]);
	if (lVar1 == 0) {
		AddObject__Fiii(0xb,x + 1,y);
	}
	else {
		ii = PreSpawnSkeleton__Fv();
		SpawnSkeleton__Fiii(ii,x + 1,y);
	}
	if (dung_map[x * 0x70 + oy + -3].dObject == '\0') {
		puVar2 = (undefined *)GetSOLID__Fii(x,oy + -3);
		if (puVar2 == &DAT_00000001) {
			ii = oy + -1;
		}
		else {
			ii = oy + -2;
		}
		AddObject__Fiii(0x3d,x,ii);
	}
	if (dung_map[x * 0x70 + oy + 3].dObject == '\0') {
		puVar2 = (undefined *)GetSOLID__Fii(x,oy + 3);
		if (puVar2 == &DAT_00000001) {
			oy = oy + 1;
		}
		else {
			oy = oy + 2;
		}
		AddObject__Fiii(0x3d,x,oy);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Treasure__Fi(int t /*$s6*/)
 // line 703, offset 0x8015d5f8
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x8015D5F8
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s2
	// 		int i; // $a0
	// 		char treasrnd[4]; // stack offset -48
	// 		char monstrnd[4]; // stack offset -40

		/* begin block 1.1 */
			// Start line: 704
			// Start offset: 0x8015D5F8

			/* begin block 1.1.1 */
				// Start line: 711
				// Start offset: 0x8015D668

				/* begin block 1.1.1.1 */
					// Start line: 713
					// Start offset: 0x8015D674

					/* begin block 1.1.1.1.1 */
						// Start line: 713
						// Start offset: 0x8015D678

						/* begin block 1.1.1.1.1.1 */
							// Start line: 715
							// Start offset: 0x8015D684

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 718
								// Start offset: 0x8015D6BC
								// Variables:
							// 		int rv; // $s1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8015D7E0
							// End Line: 731
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015D7E0
						// End Line: 731
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015D7E0
					// End Line: 731
				/* end block 1.1.1.1 */
				// End offset: 0x8015D7EC
				// End Line: 734
			/* end block 1.1.1 */
			// End offset: 0x8015D7EC
			// End Line: 734
		/* end block 1.1 */
		// End offset: 0x8015D7F4
		// End Line: 735
	/* end block 1 */
	// End offset: 0x8015D810
	// End Line: 736

	/* begin block 2 */
		// Start line: 1534
	/* end block 2 */
	// End Line: 1535

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Treasure__Fi(int t)

{
	undefined *puVar1;
	long lVar2;
	uint uVar3;
	int iVar4;
	int x;
	int y;
	int iVar5;
	char cStack49;
	undefined4 local_30;
	char cStack41;
	undefined4 local_28;
	
	local_30 = DAT_8011c170;
	local_28 = DAT_8011c174;
	y = 0;
	GetRndSeed__Fv();
	do {
		x = 0;
		if (0x5f < y) {
			PlaceThemeMonsts__Fii(t,(int)(&cStack41)[(uint)leveltype]);
			return;
		}
		iVar5 = y << 3;
		while (x < 0x60) {
			if (((int)(&dung_map[0].dTransVal)[iVar5] == (&theme)[t].ttval) &&
				 (puVar1 = (undefined *)GetSOLID__Fii(x,y), puVar1 != &DAT_00000001)) {
				lVar2 = ENG_random__Fl((int)(&cStack49)[(uint)leveltype]);
				uVar3 = ENG_random__Fl((int)(&cStack49)[(uint)leveltype]);
				if ((uVar3 & 0x7fffffff) == 0) {
					CreateTypeItem__FiiUciiUcUc(x,y,'\0',0xb,0,0,1);
					ItemNoFlippy__Fv();
				}
				if (lVar2 == 0) {
					CreateRndItem__FiiUcUcUc(x,y,'\0','\0',1);
					ItemNoFlippy__Fv();
				}
				else {
					if (lVar2 < (int)(&cStack49)[(uint)leveltype] + -2) goto LAB_8015d7e0;
				}
				iVar4 = ItemNoFlippy__Fv();
				if (((int)(&cStack49)[(uint)leveltype] + -2 <= lVar2) && (leveltype != '\x01')) {
					item[iVar4]._ivalue = item[iVar4]._ivalue >> 1;
				}
			}
LAB_8015d7e0:
			iVar5 = iVar5 + 0x380;
			x = x + 1;
		}
		y = y + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Library__Fi(int t /*$s5*/)
 // line 742, offset 0x8015d83c
	/* begin block 1 */
		// Start line: 743
		// Start offset: 0x8015D83C
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s3
	// 		int oi; // $v0
	// 		char librnd[4]; // stack offset -48
	// 		char monstrnd[4]; // stack offset -40

		/* begin block 1.1 */
			// Start line: 759
			// Start offset: 0x8015D924

			/* begin block 1.1.1 */
				// Start line: 759
				// Start offset: 0x8015D928

				/* begin block 1.1.1.1 */
					// Start line: 760
					// Start offset: 0x8015D934

					/* begin block 1.1.1.1.1 */
						// Start line: 760
						// Start offset: 0x8015D93C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 761
							// Start offset: 0x8015D948

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 763
								// Start offset: 0x8015D9A8
								// Variables:
							// 		int lnumobjects; // $s0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8015DA44
							// End Line: 772
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015DA44
						// End Line: 772
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015DA44
					// End Line: 772
				/* end block 1.1.1.1 */
				// End offset: 0x8015DA50
				// End Line: 776
			/* end block 1.1.1 */
			// End offset: 0x8015DA50
			// End Line: 776
		/* end block 1.1 */
		// End offset: 0x8015DA58
		// End Line: 777
	/* end block 1 */
	// End offset: 0x8015DA98
	// End Line: 783

	/* begin block 2 */
		// Start line: 1612
	/* end block 2 */
	// End Line: 1613

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Library__Fi(int t)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	long lVar4;
	int iVar5;
	int oy;
	int ox;
	int yp;
	char cStack49;
	undefined4 local_30;
	undefined4 local_28 [2];
	
	local_30 = DAT_8011c178;
	local_28[0] = DAT_8011c164;
	TFit_Shrine__Fi(t);
	if (themeVar1 == 1) {
		AddObject__Fiii(0x41,themex + -1,themey);
		AddObject__Fiii(0x3f,themex,themey);
		ox = themex + 1;
		oy = themey;
	}
	else {
		AddObject__Fiii(0x41,themex,themey + -1);
		AddObject__Fiii(0x3e,themex,themey);
		oy = themey + 1;
		ox = themex;
	}
	yp = 1;
	AddObject__Fiii(0x41,ox,oy);
	while (ox = 1, yp < 0x5f) {
		oy = yp * 8;
		while( true ) {
			bVar2 = false;
			if (0x5e < ox) break;
			uVar3 = CheckThemeObj3__Fiiii(ox,yp,t,-1);
			if ((uVar3 != '\0') && (*(short *)((int)&dung_map[0x70].dMonster + oy) == 0)) {
				lVar4 = ENG_random__Fl((int)(&cStack49)[(uint)leveltype]);
				bVar2 = lVar4 == 0;
			}
			lVar4 = numobjects;
			if (((bVar2) && (AddObject__Fiii(0x40,ox,yp), numobjects != lVar4)) &&
				 (lVar4 = ENG_random__Fl((int)(&cStack49)[(uint)leveltype] << 1), lVar4 != 0)) {
				iVar5 = (int)(&dung_map[0x70].dObject)[oy] + -1;
				cVar1 = object[iVar5]._oAnimFrame;
				object[iVar5]._oSelFlag = '\0';
				object[iVar5]._oAnimFrame = cVar1 + '\x02';
			}
			ox = ox + 1;
			oy = oy + 0x380;
		}
		yp = yp + 1;
	}
	uVar3 = QuestStatus__Fi(3);
	if ((uVar3 == '\0') || (t != zharlib)) {
		PlaceThemeMonsts__Fii(t,(int)*(char *)((int)local_28 + (uint)leveltype));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Torture__Fi(int t /*$s4*/)
 // line 789, offset 0x8015dac0
	/* begin block 1 */
		// Start line: 790
		// Start offset: 0x8015DAC0
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s2
	// 		char tortrnd[4]; // stack offset -40
	// 		char monstrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015DBF4
	// End Line: 806

	/* begin block 2 */
		// Start line: 1708
	/* end block 2 */
	// End Line: 1709

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Torture__Fi(int t)

{
	bool bVar1;
	int iVar2;
	uchar uVar3;
	undefined *puVar4;
	long lVar5;
	int x;
	int y;
	char cStack41;
	undefined4 local_28;
	char cStack33;
	undefined4 local_20;
	
	local_28 = DAT_8011c17c;
	local_20 = DAT_8011c180;
	y = 1;
	do {
		x = 1;
		iVar2 = y * 8;
		do {
			if ((int)(&dung_map[0x70].dTransVal)[iVar2] == (&theme)[t].ttval) {
				puVar4 = (undefined *)GetSOLID__Fii(x,y);
				bVar1 = false;
				if (puVar4 != &DAT_00000001) {
					uVar3 = CheckThemeObj3__Fiiii(x,y,t,-1);
					if (uVar3 != '\0') {
						lVar5 = ENG_random__Fl((int)(&cStack41)[(uint)leveltype]);
						bVar1 = lVar5 == 0;
					}
					if (bVar1) {
						AddObject__Fiii(0x1e,x,y);
					}
				}
			}
			x = x + 1;
			iVar2 = iVar2 + 0x380;
		} while (x < 0x5f);
		y = y + 1;
	} while (y < 0x5f);
	PlaceThemeMonsts__Fii(t,(int)(&cStack33)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_BloodFountain__Fi(int t /*$s0*/)
 // line 812, offset 0x8015dc18
	/* begin block 1 */
		// Start line: 813
		// Start offset: 0x8015DC18
		// Variables:
	// 		char monstrnd[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8015DC78
	// End Line: 818

	/* begin block 2 */
		// Start line: 1754
	/* end block 2 */
	// End Line: 1755

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_BloodFountain__Fi(int t)

{
	char cStack17;
	undefined4 local_10;
	
	local_10 = DAT_8011c180;
	TFit_Obj5__Fi(t);
	AddObject__Fiii(0x42,themex,themey);
	PlaceThemeMonsts__Fii(t,(int)(&cStack17)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Decap__Fi(int t /*$s4*/)
 // line 824, offset 0x8015dc8c
	/* begin block 1 */
		// Start line: 825
		// Start offset: 0x8015DC8C
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s2
	// 		char decaprnd[4]; // stack offset -40
	// 		char monstrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015DDC0
	// End Line: 841

	/* begin block 2 */
		// Start line: 1778
	/* end block 2 */
	// End Line: 1779

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Decap__Fi(int t)

{
	bool bVar1;
	int iVar2;
	uchar uVar3;
	undefined *puVar4;
	long lVar5;
	int x;
	int y;
	char cStack41;
	undefined4 local_28;
	char cStack33;
	undefined4 local_20;
	
	local_28 = DAT_8011c17c;
	local_20 = DAT_8011c180;
	y = 1;
	do {
		x = 1;
		iVar2 = y * 8;
		do {
			if ((int)(&dung_map[0x70].dTransVal)[iVar2] == (&theme)[t].ttval) {
				puVar4 = (undefined *)GetSOLID__Fii(x,y);
				bVar1 = false;
				if (puVar4 != &DAT_00000001) {
					uVar3 = CheckThemeObj3__Fiiii(x,y,t,-1);
					if (uVar3 != '\0') {
						lVar5 = ENG_random__Fl((int)(&cStack41)[(uint)leveltype]);
						bVar1 = lVar5 == 0;
					}
					if (bVar1) {
						AddObject__Fiii(0x43,x,y);
					}
				}
			}
			x = x + 1;
			iVar2 = iVar2 + 0x380;
		} while (x < 0x5f);
		y = y + 1;
	} while (y < 0x5f);
	PlaceThemeMonsts__Fii(t,(int)(&cStack33)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_PurifyingFountain__Fi(int t /*$s0*/)
 // line 847, offset 0x8015dde4
	/* begin block 1 */
		// Start line: 848
		// Start offset: 0x8015DDE4
		// Variables:
	// 		char monstrnd[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8015DE44
	// End Line: 853

	/* begin block 2 */
		// Start line: 1824
	/* end block 2 */
	// End Line: 1825

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_PurifyingFountain__Fi(int t)

{
	char cStack17;
	undefined4 local_10;
	
	local_10 = DAT_8011c16c;
	TFit_Obj5__Fi(t);
	AddObject__Fiii(0x4c,themex,themey);
	PlaceThemeMonsts__Fii(t,(int)(&cStack17)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_ArmorStand__Fi(int t /*$s4*/)
 // line 859, offset 0x8015de58
	/* begin block 1 */
		// Start line: 860
		// Start offset: 0x8015DE58
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s2
	// 		char armorrnd[4]; // stack offset -40
	// 		char monstrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015DFB0
	// End Line: 883

	/* begin block 2 */
		// Start line: 1848
	/* end block 2 */
	// End Line: 1849

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_ArmorStand__Fi(int t)

{
	bool bVar1;
	uchar uVar2;
	undefined *puVar3;
	long lVar4;
	int x;
	int y;
	int iVar5;
	char cStack41;
	undefined4 local_28;
	char cStack33;
	undefined4 local_20;
	
	local_28 = DAT_8011c17c;
	local_20 = DAT_8011c16c;
	y = 0;
	if (armorFlag != '\0') {
		TFit_Obj3__Fi(t);
		AddObject__Fiii(0x4d,themex,themey);
		y = 0;
	}
	do {
		x = 0;
		iVar5 = y << 3;
		do {
			if ((int)(&dung_map[0].dTransVal)[iVar5] == (&theme)[t].ttval) {
				puVar3 = (undefined *)GetSOLID__Fii(x,y);
				bVar1 = false;
				if (puVar3 != &DAT_00000001) {
					uVar2 = CheckThemeObj3__Fiiii(x,y,t,-1);
					if (uVar2 != '\0') {
						lVar4 = ENG_random__Fl((int)(&cStack41)[(uint)leveltype]);
						bVar1 = lVar4 == 0;
					}
					if (bVar1) {
						AddObject__Fiii(0x4e,x,y);
					}
				}
			}
			x = x + 1;
			iVar5 = iVar5 + 0x380;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	PlaceThemeMonsts__Fii(t,(int)(&cStack33)[(uint)leveltype]);
	armorFlag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_GoatShrine__Fi(int t /*$s3*/)
 // line 889, offset 0x8015dfd4
	/* begin block 1 */
		// Start line: 890
		// Start offset: 0x8015DFD4
		// Variables:
	// 		int xx; // $s0
	// 		int yy; // $s1
	/* end block 1 */
	// End offset: 0x8015E0E8
	// End Line: 907

	/* begin block 2 */
		// Start line: 1912
	/* end block 2 */
	// End Line: 1913

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_GoatShrine__Fi(int t)

{
	undefined *puVar1;
	int x;
	int y;
	int iVar2;
	
	TFit_GoatShrine__Fi(t);
	AddObject__Fiii(0x4f,themex,themey);
	y = themey + -1;
	do {
		x = themex + -1;
		iVar2 = x * 0x380 + y * 8;
		do {
			if ((((int)(&dung_map[0].dTransVal)[iVar2] == (&theme)[t].ttval) &&
					(puVar1 = (undefined *)GetSOLID__Fii(x,y), puVar1 != &DAT_00000001)) &&
				 ((x != themex || (y != themey)))) {
				AddMonster__FiiiiUc(x,y,1,themeVar1,1);
			}
			x = x + 1;
			iVar2 = iVar2 + 0x380;
		} while (x <= themex + 1);
		y = y + 1;
	} while (y <= themey + 1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_Cauldron__Fi(int t /*$s0*/)
 // line 913, offset 0x8015e108
	/* begin block 1 */
		// Start line: 914
		// Start offset: 0x8015E108
		// Variables:
	// 		char monstrnd[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8015E168
	// End Line: 919

	/* begin block 2 */
		// Start line: 1960
	/* end block 2 */
	// End Line: 1961

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_Cauldron__Fi(int t)

{
	char cStack17;
	undefined4 local_10;
	
	local_10 = DAT_8011c16c;
	TFit_Obj5__Fi(t);
	AddObject__Fiii(0x50,themex,themey);
	PlaceThemeMonsts__Fii(t,(int)(&cStack17)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_MurkyFountain__Fi(int t /*$s0*/)
 // line 925, offset 0x8015e17c
	/* begin block 1 */
		// Start line: 926
		// Start offset: 0x8015E17C
		// Variables:
	// 		char monstrnd[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8015E1DC
	// End Line: 931

	/* begin block 2 */
		// Start line: 1984
	/* end block 2 */
	// End Line: 1985

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_MurkyFountain__Fi(int t)

{
	char cStack17;
	undefined4 uStack16;
	
	uStack16 = DAT_8011c16c;
	TFit_Obj5__Fi(t);
	AddObject__Fiii(0x51,themex,themey);
	PlaceThemeMonsts__Fii(t,(int)(&cStack17)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_TearFountain__Fi(int t /*$s0*/)
 // line 937, offset 0x8015e1f0
	/* begin block 1 */
		// Start line: 938
		// Start offset: 0x8015E1F0
		// Variables:
	// 		char monstrnd[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8015E250
	// End Line: 943

	/* begin block 2 */
		// Start line: 2008
	/* end block 2 */
	// End Line: 2009

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_TearFountain__Fi(int t)

{
	char cStack17;
	undefined4 local_10;
	
	local_10 = DAT_8011c16c;
	TFit_Obj5__Fi(t);
	AddObject__Fiii(0x52,themex,themey);
	PlaceThemeMonsts__Fii(t,(int)(&cStack17)[(uint)leveltype]);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_BrnCross__Fi(int t /*$s4*/)
 // line 949, offset 0x8015e264
	/* begin block 1 */
		// Start line: 950
		// Start offset: 0x8015E264
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s2
	// 		char monstrnd[4]; // stack offset -40
	// 		char bcrossrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015E39C
	// End Line: 968

	/* begin block 2 */
		// Start line: 2032
	/* end block 2 */
	// End Line: 2033

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_BrnCross__Fi(int t)

{
	bool bVar1;
	uchar uVar2;
	undefined *puVar3;
	long lVar4;
	int x;
	int y;
	int iVar5;
	char cStack41;
	undefined4 local_28;
	char cStack33;
	undefined4 local_20;
	
	local_28 = DAT_8011c180;
	local_20 = DAT_8011c184;
	y = 0;
	do {
		x = 0;
		iVar5 = y << 3;
		do {
			if ((int)(&dung_map[0].dTransVal)[iVar5] == (&theme)[t].ttval) {
				puVar3 = (undefined *)GetSOLID__Fii(x,y);
				bVar1 = false;
				if (puVar3 != &DAT_00000001) {
					uVar2 = CheckThemeObj3__Fiiii(x,y,t,-1);
					if (uVar2 != '\0') {
						lVar4 = ENG_random__Fl((int)(&cStack33)[(uint)leveltype]);
						bVar1 = lVar4 == 0;
					}
					if (bVar1) {
						AddObject__Fiii(0x5b,x,y);
					}
				}
			}
			x = x + 1;
			iVar5 = iVar5 + 0x380;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	PlaceThemeMonsts__Fii(t,(int)(&cStack41)[(uint)leveltype]);
	bCrossFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Theme_WeaponRack__Fi(int t /*$s4*/)
 // line 974, offset 0x8015e3c0
	/* begin block 1 */
		// Start line: 975
		// Start offset: 0x8015E3C0
		// Variables:
	// 		int xp; // $s1
	// 		int yp; // $s2
	// 		char weaponrnd[4]; // stack offset -40
	// 		char monstrnd[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8015E518
	// End Line: 998

	/* begin block 2 */
		// Start line: 2082
	/* end block 2 */
	// End Line: 2083

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Theme_WeaponRack__Fi(int t)

{
	bool bVar1;
	uchar uVar2;
	undefined *puVar3;
	long lVar4;
	int x;
	int y;
	int iVar5;
	char cStack41;
	undefined4 local_28;
	char cStack33;
	undefined4 local_20;
	
	local_28 = DAT_8011c188;
	local_20 = DAT_8011c16c;
	y = 0;
	if (weaponFlag != '\0') {
		TFit_Obj3__Fi(t);
		AddObject__Fiii(0x5c,themex,themey);
		y = 0;
	}
	do {
		x = 0;
		iVar5 = y << 3;
		do {
			if ((int)(&dung_map[0].dTransVal)[iVar5] == (&theme)[t].ttval) {
				puVar3 = (undefined *)GetSOLID__Fii(x,y);
				bVar1 = false;
				if (puVar3 != &DAT_00000001) {
					uVar2 = CheckThemeObj3__Fiiii(x,y,t,-1);
					if (uVar2 != '\0') {
						lVar4 = ENG_random__Fl((int)(&cStack41)[(uint)leveltype]);
						bVar1 = lVar4 == 0;
					}
					if (bVar1) {
						AddObject__Fiii(0x5d,x,y);
					}
				}
			}
			x = x + 1;
			iVar5 = iVar5 + 0x380;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	PlaceThemeMonsts__Fii(t,(int)(&cStack33)[(uint)leveltype]);
	weaponFlag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateL4Trans__Fv()
 // line 1004, offset 0x8015e53c
	/* begin block 1 */
		// Start line: 1005
		// Start offset: 0x8015E53C
		// Variables:
	// 		int i; // $a0
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x8015E590
	// End Line: 1013

	/* begin block 2 */
		// Start line: 2149
	/* end block 2 */
	// End Line: 2150

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UpdateL4Trans__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	do {
		iVar2 = 0;
		iVar1 = iVar3 << 3;
		do {
			if ((&dung_map[0].dTransVal)[iVar1] != '\0') {
				(&dung_map[0].dTransVal)[iVar1] = '\x01';
			}
			iVar2 = iVar2 + 1;
			iVar1 = iVar1 + 0x380;
		} while (iVar2 < 0x60);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreateThemeRooms__Fv()
 // line 1019, offset 0x8015e598
	/* begin block 1 */
		// Start line: 1020
		// Start offset: 0x8015E598
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8015E764
	// End Line: 1104

	/* begin block 2 */
		// Start line: 2176
	/* end block 2 */
	// End Line: 2177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreateThemeRooms__Fv(void)

{
	int t;
	int iVar1;
	
	if (currlevel != '\x10') {
		InitObjFlag = '\x01';
		t = 0;
		if (0 < numthemes) {
			iVar1 = 0;
			do {
				themex = 0;
				themey = 0;
				switch((&theme.ttype)[iVar1]) {
				case '\0':
					Theme_Barrel__Fi(t);
					break;
				case '\x01':
					Theme_Shrine__Fi(t);
					break;
				case '\x02':
					Theme_MonstPit__Fi(t);
					break;
				case '\x03':
					Theme_SkelRoom__Fi(t);
					break;
				case '\x04':
					Theme_Treasure__Fi(t);
					break;
				case '\x05':
					Theme_Library__Fi(t);
					break;
				case '\x06':
					Theme_Torture__Fi(t);
					break;
				case '\a':
					Theme_BloodFountain__Fi(t);
					break;
				case '\b':
					Theme_Decap__Fi(t);
					break;
				case '\t':
					Theme_PurifyingFountain__Fi(t);
					break;
				case '\n':
					Theme_ArmorStand__Fi(t);
					break;
				case '\v':
					Theme_GoatShrine__Fi(t);
					break;
				case '\f':
					Theme_Cauldron__Fi(t);
					break;
				case '\r':
					Theme_MurkyFountain__Fi(t);
					break;
				case '\x0e':
					Theme_TearFountain__Fi(t);
					break;
				case '\x0f':
					Theme_BrnCross__Fi(t);
					break;
				case '\x10':
					Theme_WeaponRack__Fi(t);
				}
				t = t + 1;
				iVar1 = iVar1 + 8;
			} while (t < numthemes);
		}
		InitObjFlag = '\0';
		if ((leveltype == '\x04') && (0 < themeCount)) {
			UpdateL4Trans__Fv();
		}
	}
	return;
}





