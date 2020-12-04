#include "THISDUST.H"
#include "BIRD.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ BirdDistanceOK__Fiiii(int WorldXa /*$a0*/, int WorldYa /*$s1*/, int WorldXb /*$a2*/, int WorldYb /*$s0*/)
 // line 72, offset 0x8009e440
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x8009E440
		// Variables:
	// 		int wx; // $s0
	// 		int wy; // $v1
	/* end block 1 */
	// End offset: 0x8009E480
	// End Line: 80

	/* begin block 2 */
		// Start line: 144
	/* end block 2 */
	// End Line: 145

uchar BirdDistanceOK__Fiiii(int WorldXa,int WorldYa,int WorldXb,int WorldYb)

{
	int iVar1;
	int iVar2;
	
	iVar1 = abs(WorldXa - WorldXb);
	iVar2 = abs(WorldYa - WorldYb);
	return (uchar)(iVar1 < 0x19 && iVar2 < 0x19);
}



// decompiled code
// original method signature: 
// void /*$ra*/ AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b /*$s0*/, unsigned char rnd /*$s1*/)
 // line 88, offset 0x8009e498
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x8009E498
		// Variables:
	// 		int offsx; // $s2
	// 		int offsy; // $s3
	/* end block 1 */
	// End offset: 0x8009E654
	// End Line: 130

	/* begin block 2 */
		// Start line: 177
	/* end block 2 */
	// End Line: 178

void AlterBirdPos__FP10BIRDSTRUCTUc(BIRDSTRUCT *b,uchar rnd)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	char cVar4;
	char cVar5;
	uchar uVar6;
	long lVar7;
	int iVar8;
	
	cVar1 = offset_x[(int)b->dir];
	iVar8 = (int)offset_y[(int)b->dir];
	if (rnd == '\0') {
		cVar4 = b->flyvar + -1;
	}
	else {
		cVar4 = b->flyvar + -2;
	}
	b->flyvar = cVar4;
	if ('\0' < b->flyvar) goto LAB_8009e588;
	lVar7 = random__Fil(0,10);
	cVar4 = b->dir;
	cVar2 = b->newdir;
	b->flyvar = (char)lVar7 + '\x05';
	if (cVar2 == cVar4) goto LAB_8009e588;
	if (rnd == '\0') {
		cVar5 = cVar4 + '\x01';
		if ((cVar4 < cVar2) || (cVar5 = cVar4 + -1, cVar2 < cVar4)) goto LAB_8009e55c;
	}
	else {
		cVar5 = cVar4 + b->rnddir;
LAB_8009e55c:
		b->dir = cVar5;
	}
	cVar4 = b->dir;
	if (cVar4 < '\0') {
		cVar2 = '\b';
	}
	else {
		cVar2 = -8;
		if (cVar4 < '\b') goto LAB_8009e588;
	}
	b->dir = cVar4 + cVar2;
LAB_8009e588:
	bVar3 = false;
	if ((b->height < '\x1a') && (uVar6 = SolidLoc__Fii((int)b->_bx,(int)b->_by), uVar6 == '\0')) {
		uVar6 = SolidLoc__Fii((int)b->WorldX + (int)cVar1 >> 3,(int)b->WorldY + iVar8 >> 3);
		bVar3 = uVar6 != '\0';
	}
	if (bVar3) {
		cVar1 = b->dir;
		cVar4 = cVar1 + '\x04';
		b->dir = cVar4;
		if ('\a' < cVar4) {
			b->dir = cVar1 + -4;
		}
		cVar1 = offset_x[(int)b->dir];
		iVar8 = (int)offset_y[(int)b->dir];
	}
	iVar8 = (uint)(ushort)b->WorldY + iVar8;
	b->WorldY = (short)iVar8;
	b->WorldX = b->WorldX + (short)cVar1;
	BirdWorld__FP10BIRDSTRUCTii(b,(int)b->WorldX,iVar8 * 0x10000 >> 0x10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b /*$a0*/, int wx /*$a1*/, int wy /*$a2*/)
 // line 139, offset 0x8009e674
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x8009E674
		// Variables:
	// 		int x; // $a3
	// 		int y; // $v1
	/* end block 1 */
	// End offset: 0x8009E6E8
	// End Line: 150

	/* begin block 2 */
		// Start line: 289
	/* end block 2 */
	// End Line: 290

void BirdWorld__FP10BIRDSTRUCTii(BIRDSTRUCT *b,int wx,int wy)

{
	int iVar1;
	int iVar2;
	
	iVar1 = wx;
	if (wx < 0) {
		iVar1 = wx + 7;
	}
	iVar2 = wx + (iVar1 >> 3) * -8;
	iVar1 = wy;
	if (wy < 0) {
		iVar1 = wy + 7;
	}
	iVar1 = wy + (iVar1 >> 3) * -8;
	if (wx < 0) {
		wx = 0;
	}
	if (wy < 0) {
		wy = 0;
	}
	b->_bx = (char)(wx >> 3);
	b->_by = (char)(wy >> 3);
	b->_bxoff = ((char)iVar2 - (char)iVar1) * '\x04';
	b->WorldX = (short)wx;
	b->WorldY = (short)wy;
	b->_byoff = (char)((iVar2 + iVar1 + -8 >> 1) << 2);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 158, offset 0x8009e6f0
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x8009E6F0
		// Variables:
	// 		int scared; // $s1
	// 		int type; // $v0
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8009E7B8
	// End Line: 177

	/* begin block 2 */
		// Start line: 331
	/* end block 2 */
	// End Line: 332

int BirdScared__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	iVar4 = GetPerch__FP10BIRDSTRUCT(b);
	birdcheck = '\x01';
	if ((b->mode == '\x01') && (b->leader == (BIRDSTRUCT *)0x0)) {
		cVar1 = perches[iVar4].x;
		cVar2 = perches[iVar4].y;
	}
	else {
		cVar1 = b->_bx;
		cVar2 = b->_by;
	}
	uVar3 = CheckArea__FiiicUci((int)cVar1,(int)cVar2,3,'\b',0,-1);
	if (uVar3 != '\0') {
		cVar1 = (&_pcursplr)[sel_data];
		(&_pcursplr)[sel_data] = -1;
		iVar5 = (int)cVar1 + 1;
	}
	birdcheck = '\0';
	return iVar5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$a0*/)
 // line 185, offset 0x8009e7d0
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x8009E7D0

		/* begin block 1.1 */
			// Start line: 190
			// Start offset: 0x8009E7E4
			// Variables:
		// 		int n; // $v1
		/* end block 1.1 */
		// End offset: 0x8009E818
		// End Line: 194
	/* end block 1 */
	// End offset: 0x8009E81C
	// End Line: 195

	/* begin block 2 */
		// Start line: 389
	/* end block 2 */
	// End Line: 390

int GetPerch__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	int iVar1;
	BIRDSTRUCT *pBVar2;
	
	iVar1 = 0;
	if (b->leader != (BIRDSTRUCT *)0x0) {
		b = b->leader;
	}
	pBVar2 = BirdList;
	do {
		if (pBVar2 == b) {
			if (iVar1 < 0) {
				iVar1 = iVar1 + 3;
			}
			return iVar1 >> 2;
		}
		iVar1 = iVar1 + 4;
		pBVar2 = pBVar2 + 4;
	} while (iVar1 < 0x10);
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 203, offset 0x8009e824
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x8009E824
		// Variables:
	// 		int nd; // $s1
	// 		int x; // $t1
	// 		int y; // $t0
	/* end block 1 */
	// End offset: 0x8009E974
	// End Line: 231

	/* begin block 2 */
		// Start line: 424
	/* end block 2 */
	// End Line: 425

void BIRD_StartHop__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	uchar uVar1;
	long lVar2;
	long lVar3;
	int iVar4;
	
	lVar2 = random__Fil(0,8);
	if ((b->leadflag == '\0') &&
		 (uVar1 = BirdDistanceOK__Fiiii
												((int)b->leader->WorldX,(int)b->leader->WorldY,
												 (int)b->WorldX + (int)offset_x[lVar2] * (int)hop_height,
												 (int)b->WorldY + (int)offset_y[lVar2] * (int)hop_height), uVar1 == '\0')) {
		lVar2 = GetDirection__Fiiii((int)b->_bx,(int)b->_by,(int)b->leader->_bx,(int)b->leader->_by);
	}
	lVar3 = random__Fil(0,3);
	b->flyvar = (char)(lVar3 + 1);
	iVar4 = (int)hop_height + ((lVar3 + 1) * 0x1000000 >> 0x18);
	uVar1 = SolidLoc__Fii((int)b->WorldX + (int)offset_x[lVar2] * iVar4 >> 3,
												(int)b->WorldY + (int)offset_y[lVar2] * iVar4 >> 3);
	if (uVar1 == '\0') {
		b->dir = (char)lVar2;
		b->mode = '\x04';
		b->flytime = hop_height;
	}
	else {
		lVar2 = random__Fil(0,0x32);
		b->flytime = (char)lVar2 + '\n';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 239, offset 0x8009e98c
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x8009E98C
	/* end block 1 */
	// End offset: 0x8009EA7C
	// End Line: 260

	/* begin block 2 */
		// Start line: 505
	/* end block 2 */
	// End Line: 506

void BIRD_DoHop__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	byte bVar2;
	int iVar3;
	
	if ((int)(((int)((uint)(byte)hop_height << 0x18) >> 0x18) +
					 (((uint)(byte)hop_height << 0x18) >> 0x1f)) >> 1 < (int)b->flytime) {
		cVar1 = b->height + '\x01';
	}
	else {
		cVar1 = b->height + -1;
	}
	b->height = cVar1;
	b->WorldX = b->WorldX + (short)offset_x[(int)b->dir];
	iVar3 = (uint)(ushort)b->WorldY + (int)offset_y[(int)b->dir];
	b->WorldY = (short)iVar3;
	BirdWorld__FP10BIRDSTRUCTii(b,(int)b->WorldX,iVar3 * 0x10000 >> 0x10);
	b->animcount = '\0';
	bVar2 = b->flytime - 1;
	b->flytime = bVar2;
	if ((int)((uint)bVar2 << 0x18) < 1) {
		cVar1 = b->flyvar;
		b->height = '\0';
		b->flyvar = cVar1 + -1;
		if (cVar1 == '\x01') {
			BIRD_StartPerch__FP10BIRDSTRUCT(b);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 270, offset 0x8009ea90
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x8009EA90
	/* end block 1 */
	// End offset: 0x8009EAB8
	// End Line: 273

	/* begin block 2 */
		// Start line: 573
	/* end block 2 */
	// End Line: 574

void BIRD_StartPerch__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	long lVar1;
	
	b->mode = '\0';
	lVar1 = random__Fil(0,0x32);
	b->flytime = (char)lVar1 + '2';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 281, offset 0x8009eacc
	/* begin block 1 */
		// Start line: 282
		// Start offset: 0x8009EACC
	/* end block 1 */
	// End offset: 0x8009EB3C
	// End Line: 296

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

void BIRD_DoPerch__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	int iVar2;
	
	iVar2 = BirdScared__FP10BIRDSTRUCT(b);
	if (iVar2 == 0) {
		cVar1 = b->flytime;
		b->flytime = cVar1 + -1;
		if (cVar1 == '\x01') {
			BIRD_StartHop__FP10BIRDSTRUCT(b);
		}
	}
	else {
		if (b->leader == (BIRDSTRUCT *)0x0) {
			BIRD_StartFly__FP10BIRDSTRUCT(b);
		}
		else {
			BIRD_StartFly__FP10BIRDSTRUCT(b->leader);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 305, offset 0x8009eb50
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x8009EB50
	/* end block 1 */
	// End offset: 0x8009EBE8
	// End Line: 319

	/* begin block 2 */
		// Start line: 645
	/* end block 2 */
	// End Line: 646

void BIRD_DoScatter__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	byte bVar1;
	long lVar2;
	
	bVar1 = b->flytime - 1;
	b->flytime = bVar1;
	if ((int)((uint)bVar1 << 0x18) < 1) {
		b->mode = '\x01';
		lVar2 = random__Fil(0,0x32);
		b->flytime = (char)lVar2 + '2';
		lVar2 = random__Fil(0,10);
		b->flyvar = (char)lVar2 + '\x05';
	}
	if (b->height < '2') {
		lVar2 = random__Fil(0,2);
		b->height = b->height + (char)lVar2;
		b->animcount = b->animcount + '\b';
	}
	AlterBirdPos__FP10BIRDSTRUCTUc(b,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 326, offset 0x8009ebfc
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8009EBFC
	/* end block 1 */
	// End offset: 0x8009EC8C
	// End Line: 337

	/* begin block 2 */
		// Start line: 691
	/* end block 2 */
	// End Line: 692

void BIRD_StartScatter__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	long lVar1;
	int iVar2;
	
	b->mode = '\x02';
	lVar1 = random__Fil(0,100);
	b->flytime = (char)lVar1 + '2';
	lVar1 = random__Fil(0,0x32);
	b->flyvar = (char)lVar1 + '\x05';
	if (b->leadflag == '\0') {
		iVar2 = GetDirection__Fiiii((int)b->_bx,(int)b->_by,(int)b->leader->_bx,(int)b->leader->_by);
		b->newdir = (char)(iVar2 + -4);
		if ((iVar2 + -4) * 0x1000000 < 0) {
			b->newdir = (char)iVar2;
		}
	}
	else {
		lVar1 = random__Fil(0,8);
		b->newdir = (char)lVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s1*/)
 // line 346, offset 0x8009eca0
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x8009ECA0
		// Variables:
	// 		struct BIRDSTRUCT *leader; // $s0

		/* begin block 1.1 */
			// Start line: 363
			// Start offset: 0x8009ED04

			/* begin block 1.1.1 */
				// Start line: 364
				// Start offset: 0x8009ED0C

				/* begin block 1.1.1.1 */
					// Start line: 365
					// Start offset: 0x8009ED0C
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8009ED2C
				// End Line: 367
			/* end block 1.1.1 */
			// End offset: 0x8009ED2C
			// End Line: 367
		/* end block 1.1 */
		// End offset: 0x8009ED2C
		// End Line: 367
	/* end block 1 */
	// End offset: 0x8009ED2C
	// End Line: 367

	/* begin block 2 */
		// Start line: 735
	/* end block 2 */
	// End Line: 736

void BIRD_StartFly__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	_125fake psfx;
	BIRDSTRUCT *b_00;
	int iVar1;
	
	b_00 = b->leader;
	if (1 < (uint)(byte)b->mode - 1) {
		BIRD_StartScatter__FP10BIRDSTRUCT(b);
		if (b->visible != '\0') {
			psfx = TSFX_BIRDCHR1;
			if ((b->newdir & 1U) != 0) {
				psfx = TSFX_BIRDCHR2;
			}
			PlaySFX__Fi(psfx);
		}
		if (b_00 == (BIRDSTRUCT *)0x0) {
			iVar1 = 0;
			b_00 = b + 1;
			do {
				BIRD_StartScatter__FP10BIRDSTRUCT(b_00);
				iVar1 = iVar1 + 1;
				b_00 = b_00 + 1;
			} while (iVar1 < 3);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 377, offset 0x8009ed44
	/* begin block 1 */
		// Start line: 378
		// Start offset: 0x8009ED44
		// Variables:
	// 		int pnum; // $s4

		/* begin block 1.1 */
			// Start line: 378
			// Start offset: 0x8009ED44

			/* begin block 1.1.1 */
				// Start line: 384
				// Start offset: 0x8009ED84

				/* begin block 1.1.1.1 */
					// Start line: 397
					// Start offset: 0x8009EE0C

					/* begin block 1.1.1.1.1 */
						// Start line: 398
						// Start offset: 0x8009EE1C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 399
							// Start offset: 0x8009EE1C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 400
								// Start offset: 0x8009EE2C
								// Variables:
							// 		int x; // $s1
							// 		int y; // $s2
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8009EEDC
							// End Line: 407
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009EEDC
						// End Line: 407
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009EEDC
					// End Line: 407
				/* end block 1.1.1.1 */
				// End offset: 0x8009EEDC
				// End Line: 407
			/* end block 1.1.1 */
			// End offset: 0x8009EEDC
			// End Line: 407
		/* end block 1.1 */
		// End offset: 0x8009EEDC
		// End Line: 407
	/* end block 1 */
	// End offset: 0x8009EFCC
	// End Line: 430

	/* begin block 2 */
		// Start line: 799
	/* end block 2 */
	// End Line: 800

void BIRD_DoFly__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	char cVar2;
	char cVar3;
	bool bVar4;
	uchar uVar5;
	int iVar6;
	long lVar7;
	int iVar8;
	char cVar9;
	int iVar10;
	
	iVar6 = GetPerch__FP10BIRDSTRUCT(b);
	cVar9 = b->flytime;
	b->flytime = cVar9 + -1;
	if (cVar9 == '\x01') {
		lVar7 = random__Fil(0,0x14);
		b->flytime = (char)lVar7 + '\n';
		if (b->leadflag == '\0') {
			cVar9 = b->_bx;
			cVar1 = b->_by;
			cVar2 = b->leader->_bx;
			cVar3 = b->leader->_by;
LAB_8009ee00:
			iVar8 = GetDirection__Fiiii((int)cVar9,(int)cVar1,(int)cVar2,(int)cVar3);
			b->newdir = (char)iVar8;
		}
		else {
			iVar8 = BirdScared__FP10BIRDSTRUCT(b);
			if (iVar8 == 0) {
				cVar9 = b->_bx;
				cVar1 = b->_by;
				cVar2 = perches[iVar6].x;
				cVar3 = perches[iVar6].y;
				goto LAB_8009ee00;
			}
			lVar7 = random__Fil(0,8);
			b->newdir = (char)lVar7;
		}
		if (b->leadflag != '\0') {
			iVar8 = BirdScared__FP10BIRDSTRUCT(b);
			bVar4 = false;
			if (iVar8 == 0) {
				iVar8 = (int)offset_x[(int)b->dir] * (int)b->height;
				iVar10 = (int)offset_y[(int)b->dir] * (int)b->height;
				uVar5 = BirdDistanceOK__Fiiii
													((int)perches[iVar6].x << 3,(int)perches[iVar6].y << 3,
													 (int)b->WorldX + iVar8,(int)b->WorldY + iVar10);
				if (uVar5 != '\0') {
					uVar5 = SolidLoc__Fii((int)b->WorldX + iVar8 >> 3,(int)b->WorldY + iVar10 >> 3);
					bVar4 = uVar5 == '\0';
				}
				if (bVar4) {
					BIRD_StartLanding__FP10BIRDSTRUCT(b);
				}
			}
			goto LAB_8009eedc;
		}
	}
	else {
LAB_8009eedc:
		if (b->leadflag != '\0') {
			if (b->height < '2') {
				b->animcount = b->animcount + '\b';
				lVar7 = random__Fil(0,2);
				b->height = b->height + (char)lVar7;
			}
			goto LAB_8009efc4;
		}
	}
	cVar9 = b->leader->mode;
	if ((cVar9 == '\x03') || (cVar9 == '\0')) goto LAB_8009efc4;
	cVar9 = b->leader->height;
	if (b->height < cVar9) {
		lVar7 = random__Fil(0,2);
		cVar9 = b->height + (char)lVar7;
LAB_8009ef94:
		b->height = cVar9;
	}
	else {
		if (cVar9 < b->height) {
			lVar7 = random__Fil(0,2);
			cVar9 = b->height - (char)lVar7;
			goto LAB_8009ef94;
		}
	}
	if (b->height != b->leader->height) {
		b->animcount = b->animcount + '\b';
	}
LAB_8009efc4:
	AlterBirdPos__FP10BIRDSTRUCTUc(b,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$a0*/)
 // line 439, offset 0x8009eff0
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x8009EFF0
	/* end block 1 */
	// End offset: 0x8009EFF4
	// End Line: 441

	/* begin block 2 */
		// Start line: 932
	/* end block 2 */
	// End Line: 933

void BIRD_StartLanding__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	b->mode = '\x03';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 449, offset 0x8009effc
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x8009EFFC
	/* end block 1 */
	// End offset: 0x8009F038
	// End Line: 454

	/* begin block 2 */
		// Start line: 951
	/* end block 2 */
	// End Line: 952

void BIRD_DoLanding__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	b->height = b->height + -1;
	AlterBirdPos__FP10BIRDSTRUCTUc(b,'\x01');
	if (b->height < '\x01') {
		BIRD_StartPerch__FP10BIRDSTRUCT(b);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader /*$s1*/)
 // line 462, offset 0x8009f04c
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x8009F04C
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s2

		/* begin block 1.1 */
			// Start line: 463
			// Start offset: 0x8009F04C
			// Variables:
		// 		int i; // $s3
		/* end block 1.1 */
		// End offset: 0x8009F118
		// End Line: 480
	/* end block 1 */
	// End offset: 0x8009F118
	// End Line: 480

	/* begin block 2 */
		// Start line: 978
	/* end block 2 */
	// End Line: 979

void PlaceFlock__FP10BIRDSTRUCT(BIRDSTRUCT *leader)

{
	long lVar1;
	int iVar2;
	char *pcVar3;
	BIRDSTRUCT *b;
	int iVar4;
	
	b = leader + 1;
	iVar4 = 0;
	pcVar3 = &leader[1].rnddir;
	do {
		b->leader = leader;
		pcVar3[3] = '\0';
		pcVar3[2] = '\0';
		lVar1 = random__Fil(0,0x14);
		*(short *)(pcVar3 + -10) = leader->WorldX + -10 + (short)lVar1;
		lVar1 = random__Fil(0,0x14);
		iVar2 = ((uint)(ushort)leader->WorldY - 10) + lVar1;
		*(short *)(pcVar3 + -8) = (short)iVar2;
		BirdWorld__FP10BIRDSTRUCTii(b,(int)*(short *)(pcVar3 + -10),iVar2 * 0x10000 >> 0x10);
		pcVar3[6] = '\0';
		lVar1 = random__Fil(0,8);
		pcVar3[-2] = (char)lVar1;
		lVar1 = random__Fil(0,2);
		*pcVar3 = (char)(lVar1 - 1U);
		if ((lVar1 - 1U & 0xff) == 0) {
			*pcVar3 = '\x01';
		}
		pcVar3 = pcVar3 + 0x18;
		iVar4 = iVar4 + 1;
		b = b + 1;
	} while (iVar4 < 3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader /*$s5*/)
 // line 487, offset 0x8009f138
	/* begin block 1 */
		// Start line: 488
		// Start offset: 0x8009F138
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s3

		/* begin block 1.1 */
			// Start line: 488
			// Start offset: 0x8009F138
			// Variables:
		// 		int i; // $s4

			/* begin block 1.1.1 */
				// Start line: 492
				// Start offset: 0x8009F16C

				/* begin block 1.1.1.1 */
					// Start line: 494
					// Start offset: 0x8009F178

					/* begin block 1.1.1.1.1 */
						// Start line: 497
						// Start offset: 0x8009F1A0
						// Variables:
					// 		int x; // $s1
					// 		int y; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009F230
					// End Line: 504
				/* end block 1.1.1.1 */
				// End offset: 0x8009F230
				// End Line: 504
			/* end block 1.1.1 */
			// End offset: 0x8009F230
			// End Line: 506
		/* end block 1.1 */
		// End offset: 0x8009F240
		// End Line: 507
	/* end block 1 */
	// End offset: 0x8009F240
	// End Line: 507

	/* begin block 2 */
		// Start line: 1042
	/* end block 2 */
	// End Line: 1043

void ProcessFlock__FP10BIRDSTRUCT(BIRDSTRUCT *leader)

{
	uchar uVar1;
	short *psVar2;
	BIRDSTRUCT *b;
	int iVar3;
	int iVar4;
	int iVar5;
	
	b = leader + 1;
	iVar3 = 0;
	psVar2 = &leader[1].WorldY;
	while (iVar3 < 3) {
		if ((*(char *)(psVar2 + 6) == '\x01') && ((leader->mode == '\0' || (leader->mode == '\x04')))) {
			iVar4 = (int)offset_x[(int)*(char *)(psVar2 + 3)] * (int)*(char *)((int)psVar2 + 0xd);
			iVar5 = (int)offset_y[(int)*(char *)(psVar2 + 3)] * (int)*(char *)((int)psVar2 + 0xd);
			uVar1 = BirdDistanceOK__Fiiii
												((int)leader->WorldX,(int)leader->WorldY,(int)psVar2[-1] + iVar4,
												 (int)*psVar2 + iVar5);
			if ((uVar1 != '\0') &&
				 (uVar1 = SolidLoc__Fii((int)psVar2[-1] + iVar4 >> 3,(int)*psVar2 + iVar5 >> 3),
				 uVar1 == '\0')) {
				BIRD_StartLanding__FP10BIRDSTRUCT(b);
			}
		}
		psVar2 = psVar2 + 0xc;
		b = b + 1;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBird__Fv()
 // line 530, offset 0x8009f268
	/* begin block 1 */
		// Start line: 531
		// Start offset: 0x8009F268
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s1

		/* begin block 1.1 */
			// Start line: 531
			// Start offset: 0x8009F268
			// Variables:
		// 		int i; // $s3
		/* end block 1.1 */
		// End offset: 0x8009F320
		// End Line: 550
	/* end block 1 */
	// End offset: 0x8009F320
	// End Line: 550

	/* begin block 2 */
		// Start line: 1144
	/* end block 2 */
	// End Line: 1145

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitBird__Fv(void)

{
	byte *pbVar1;
	long lVar2;
	int iVar3;
	uchar *puVar4;
	BIRDSTRUCT *b;
	int iVar5;
	int iVar6;
	
	b = BirdList;
	iVar6 = 0;
	iVar5 = 0;
	puVar4 = &BirdList[0].leadflag;
	do {
		lVar2 = random__Fil(0,7);
		puVar4[-8] = (uchar)lVar2;
		puVar4[-3] = '\0';
		puVar4[-4] = '\0';
		puVar4[-1] = '\0';
		iVar6 = iVar6 + 4;
		*(short *)(puVar4 + -0x10) = (short)((int)((uint)(byte)(&perches[0].x)[iVar5] << 0x18) >> 0x15);
		pbVar1 = (byte *)(&perches[0].y + iVar5);
		iVar5 = iVar5 + 2;
		iVar3 = (uint)*pbVar1 << 0x18;
		*(short *)(puVar4 + -0xe) = (short)(iVar3 >> 0x15);
		BirdWorld__FP10BIRDSTRUCTii(b,(int)*(short *)(puVar4 + -0x10),iVar3 >> 0x15);
		BIRD_StartPerch__FP10BIRDSTRUCT(b);
		PlaceFlock__FP10BIRDSTRUCT(b);
		*puVar4 = '\x01';
		puVar4 = puVar4 + 0x60;
		b->leader = (BIRDSTRUCT *)0x0;
		b = b + 4;
	} while (iVar6 < 0x10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessBird__Fv()
 // line 561, offset 0x8009f340
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x8009F340
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s0

		/* begin block 1.1 */
			// Start line: 568
			// Start offset: 0x8009F3A8
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x8009F478
		// End Line: 602
	/* end block 1 */
	// End offset: 0x8009F478
	// End Line: 602

	/* begin block 2 */
		// Start line: 1245
	/* end block 2 */
	// End Line: 1246

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessBird__Fv(void)

{
	char cVar1;
	BIRDSTRUCT *b;
	char *pcVar2;
	int iVar3;
	
	b = BirdList;
	if ((((PauseMode == '\0') && (daylight != '\0')) && (stextflag == '\0')) &&
		 (iVar3 = 0, qtextflag == '\0')) {
		pcVar2 = &BirdList[0].animcount;
		do {
			switch(pcVar2[1]) {
			case '\0':
				BIRD_DoPerch__FP10BIRDSTRUCT(b);
				break;
			case '\x01':
				BIRD_DoFly__FP10BIRDSTRUCT(b);
				break;
			case '\x02':
				BIRD_DoScatter__FP10BIRDSTRUCT(b);
				break;
			case '\x03':
				BIRD_DoLanding__FP10BIRDSTRUCT(b);
				break;
			case '\x04':
				BIRD_DoHop__FP10BIRDSTRUCT(b);
			}
			if (pcVar2[3] != '\0') {
				ProcessFlock__FP10BIRDSTRUCT(b);
			}
			cVar1 = *pcVar2;
			*pcVar2 = cVar1 + '\x01';
			if ('\x0f' < (char)(cVar1 + '\x01')) {
				*pcVar2 = '\0';
			}
			pcVar2 = pcVar2 + 0x18;
			iVar3 = iVar3 + 1;
			b = b + 1;
		} while (iVar3 < 0x10);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$a0*/)
 // line 610, offset 0x8009f498
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x8009F498
		// Variables:
	// 		int banim; // $a1
	/* end block 1 */
	// End offset: 0x8009F52C
	// End Line: 640

	/* begin block 2 */
		// Start line: 1347
	/* end block 2 */
	// End Line: 1348

int GetBirdFrame__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	int iVar2;
	int iVar3;
	
	cVar1 = b->mode;
	iVar3 = (int)b->dir;
	if ((cVar1 == '\0') || (cVar1 == '\x04')) {
		switch(b->dir) {
		case '\0':
		case '\x05':
		case '\x06':
		case '\a':
			iVar3 = 1;
			break;
		case '\x01':
		case '\x02':
		case '\x03':
		case '\x04':
			iVar3 = 0;
		}
		iVar2 = 0xcb0011;
		iVar3 = iVar3 * 2 + ((int)((uint)(byte)b->animcount << 0x18) >> 0x1b);
	}
	else {
		if (cVar1 == '\x03') {
			iVar3 = iVar3 * 2 + 1;
		}
		else {
			iVar3 = iVar3 * 2 + ((int)((uint)(byte)b->animcount << 0x18) >> 0x1b);
		}
		iVar2 = 0xcb0001;
	}
	return iVar3 + iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4 /*$s0*/, int height /*$s2*/)
 // line 645, offset 0x8009f534
	/* begin block 1 */
		// Start line: 646
		// Start offset: 0x8009F534
		// Variables:
	// 		int x; // $s1
	// 		int y; // $a0
	/* end block 1 */
	// End offset: 0x8009F648
	// End Line: 666

	/* begin block 2 */
		// Start line: 1418
	/* end block 2 */
	// End Line: 1419

void bscale__FP8POLY_FT4i(POLY_FT4 *Ft4,int height)

{
	short sVar1;
	uint uVar2;
	uint uVar3;
	
	uVar2 = abs((int)Ft4->x1 - (int)Ft4->x0);
	uVar3 = abs((int)Ft4->y1 - (int)Ft4->y0);
	if (height == 0) {
		height = 1;
	}
	sVar1 = (short)((uint)(((((int)((uVar2 >> 0x1f) + uVar2) >> 1) << 8) / 0x32) * height) >> 8);
	Ft4->x0 = Ft4->x0 + sVar1;
	Ft4->x1 = Ft4->x1 - sVar1;
	Ft4->x2 = Ft4->x2 + sVar1;
	Ft4->x3 = Ft4->x3 - sVar1;
	sVar1 = (short)((uint)(((((int)((uVar3 >> 0x1f) + uVar3) >> 1) << 8) / 0x32) * height) >> 8);
	Ft4->y0 = Ft4->y0 + sVar1;
	Ft4->y1 = Ft4->y1 + sVar1;
	Ft4->y2 = Ft4->y2 - sVar1;
	Ft4->y3 = Ft4->y3 - sVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b /*$s2*/, int x /*$s1*/, int y /*$s0*/)
 // line 670, offset 0x8009f664
	/* begin block 1 */
		// Start line: 671
		// Start offset: 0x8009F664
		// Variables:
	// 		struct POLY_FT4 *Ft4; // stack offset -32
	// 		struct TextDat *Dat; // $s3
	/* end block 1 */
	// End offset: 0x8009F750
	// End Line: 688

	/* begin block 2 */
		// Start line: 1496
	/* end block 2 */
	// End Line: 1497

void doshadow__FP10BIRDSTRUCTii(BIRDSTRUCT *b,int x,int y)

{
	ulong *puVar1;
	TextDat *this;
	int Frm;
	int iVar2;
	uint Y;
	uint X;
	POLY_FT4 *local_20 [2];
	
	BL_GetCurrentBlocks__Fv();
	this = MissDat;
	iVar2 = (uint)(byte)b->height << 0x18;
	Frm = iVar2 >> 0x18;
	X = x - Frm;
	if (Frm < 0x29) {
		Y = y - (iVar2 >> 0x19);
		if ((X < 0x140) && (Y < 0xf0)) {
			PRIM_GetPrim__FPP8POLY_FT4(local_20);
			Frm = GetBirdFrame__FP10BIRDSTRUCT(b);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_20[0],Frm,X,Y,0,0);
			bscale__FP8POLY_FT4i(local_20[0],(int)b->height);
			puVar1 = ThisOt;
			local_20[0]->tag = local_20[0]->tag & 0xff000000 | ThisOt[99] & 0xffffff;
			puVar1[99] = puVar1[99] & 0xff000000 | (uint)local_20[0] & 0xffffff;
			ShadScaleSkew__7CBlocksP8POLY_FT4(local_20[0]);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLBird__Fv()
 // line 728, offset 0x8009f770
	/* begin block 1 */
		// Start line: 729
		// Start offset: 0x8009F770
		// Variables:
	// 		struct BIRDSTRUCT *ThisBird; // $s3
	// 		struct POLY_FT4 *Ft4; // stack offset -56
	// 		struct CBlocks *gblock; // stack offset -48
	// 		int ScrXOff; // $v0
	// 		int ScrYOff; // $v0
	// 		int x; // $s1
	// 		int y; // $s2
	// 		struct RECT R; // stack offset -64
	// 		struct TextDat *Dat; // $fp

		/* begin block 1.1 */
			// Start line: 729
			// Start offset: 0x8009F770

			/* begin block 1.1.1 */
				// Start line: 741
				// Start offset: 0x8009F7D8

				/* begin block 1.1.1.1 */
					// Start line: 742
					// Start offset: 0x8009F7D8
					// Variables:
				// 		int i; // $s5
				/* end block 1.1.1.1 */
				// End offset: 0x8009F948
				// End Line: 791
			/* end block 1.1.1 */
			// End offset: 0x8009F948
			// End Line: 791
		/* end block 1.1 */
		// End offset: 0x8009F948
		// End Line: 791
	/* end block 1 */
	// End offset: 0x8009F948
	// End Line: 791

	/* begin block 2 */
		// Start line: 1614
	/* end block 2 */
	// End Line: 1615

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawLBird__Fv(void)

{
	ulong *puVar1;
	TextDat *this;
	int Frm;
	uchar *puVar2;
	uint X;
	uint Y;
	BIRDSTRUCT *b;
	int iVar3;
	RECT local_40;
	POLY_FT4 *local_38 [2];
	CBlocks *local_30;
	
	b = BirdList;
	local_30 = BL_GetCurrentBlocks__Fv();
	this = MissDat;
	if ((leveltype == '\0') && (iVar3 = 0, daylight != '\0')) {
		puVar2 = &BirdList[0].visible;
		do {
			GetScrXY__7CBlocksR4RECTiiii
								(local_30,&local_40,(int)(char)puVar2[-0xd] * 0x14,(int)(char)puVar2[-0xc] * 0x14,
								 ((int)(char)puVar2[-0xb] * 0x271) / 1000,((int)(char)puVar2[-10] * 0x271) / 1000);
			X = SEXT24(local_40.x);
			Y = (int)local_40.y - (int)(char)puVar2[-2];
			if ((X < 0x140) && (Y < 0xf0)) {
				PRIM_GetPrim__FPP8POLY_FT4(local_38);
				Frm = GetBirdFrame__FP10BIRDSTRUCT(b);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_38[0],Frm,X,Y,0,0);
				puVar1 = ThisOt;
				local_38[0]->tag = local_38[0]->tag & 0xff000000 | ThisOt[99] & 0xffffff;
				puVar1[99] = puVar1[99] & 0xff000000 | (uint)local_38[0] & 0xffffff;
				*puVar2 = '\x01';
			}
			else {
				*puVar2 = '\0';
			}
			doshadow__FP10BIRDSTRUCTii(b,X,Y);
			puVar2 = puVar2 + 0x18;
			iVar3 = iVar3 + 1;
			b = b + 1;
		} while (iVar3 < 0x10);
	}
	return;
}





