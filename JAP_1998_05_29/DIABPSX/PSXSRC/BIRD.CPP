#include "THISDUST.H"
#include "BIRD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SetBirdFrig__Fb(void * f /*$a0*/)
 // line 47, offset 0x800ab6b0
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x800AB6B0
	/* end block 1 */
	// End offset: 0x800AB6D4
	// End Line: 52

	/* begin block 2 */
		// Start line: 95
	/* end block 2 */
	// End Line: 96

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBirdFrig__Fb(void *f)

{
	if (f != BirdFrig) {
		BirdFrig = f;
		HappyMan__Fi(-(uint)(f != (void *)0x0) & 0x1c);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ BirdDistanceOK__Fiiii(int WorldXa /*$a0*/, int WorldYa /*$s1*/, int WorldXb /*$a2*/, int WorldYb /*$s0*/)
 // line 84, offset 0x800ab6e4
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800AB6E4
		// Variables:
	// 		int wx; // $s0
	// 		int wy; // $v1
	/* end block 1 */
	// End offset: 0x800AB724
	// End Line: 92

	/* begin block 2 */
		// Start line: 169
	/* end block 2 */
	// End Line: 170

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 100, offset 0x800ab73c
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x800AB73C
		// Variables:
	// 		int offsx; // $s2
	// 		int offsy; // $s3
	/* end block 1 */
	// End offset: 0x800AB874
	// End Line: 147

	/* begin block 2 */
		// Start line: 202
	/* end block 2 */
	// End Line: 203

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AlterBirdPos__FP10BIRDSTRUCTUc(BIRDSTRUCT *b,uchar rnd)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	long v;
	int iVar6;
	
	cVar1 = offset_x[(int)b->dir];
	cVar2 = offset_y[(int)b->dir];
	if (rnd == '\0') {
		cVar4 = b->flyvar + -1;
	}
	else {
		cVar4 = b->flyvar + -2;
	}
	b->flyvar = cVar4;
	if ('\0' < b->flyvar) goto LAB_800ab84c;
	v = 10;
	if (BirdFrig != (void *)0x0) {
		v = 5;
	}
	v = ENG_random__Fl(v);
	b->flyvar = (char)v + '\x05';
	cVar4 = b->dir;
	cVar3 = b->newdir;
	if (cVar3 == cVar4) goto LAB_800ab84c;
	if (rnd == '\0') {
		cVar5 = cVar4 + '\x01';
		if ((cVar4 < cVar3) || (cVar5 = cVar4 + -1, cVar3 < cVar4)) goto LAB_800ab818;
	}
	else {
		cVar5 = cVar4 + b->rnddir;
LAB_800ab818:
		b->dir = cVar5;
	}
	cVar4 = b->dir;
	if (cVar4 < '\0') {
		cVar3 = '\b';
	}
	else {
		if (cVar4 < '\b') goto LAB_800ab84c;
		cVar3 = -8;
	}
	b->dir = cVar4 + cVar3;
LAB_800ab84c:
	iVar6 = (uint)(ushort)b->WorldY + (int)cVar2;
	b->WorldY = (short)iVar6;
	b->WorldX = b->WorldX + (short)cVar1;
	BirdWorld__FP10BIRDSTRUCTii(b,(int)b->WorldX,iVar6 * 0x10000 >> 0x10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b /*$a0*/, int wx /*$a1*/, int wy /*$a2*/)
 // line 156, offset 0x800ab894
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x800AB894
		// Variables:
	// 		int x; // $a3
	// 		int y; // $v1
	/* end block 1 */
	// End offset: 0x800AB908
	// End Line: 167

	/* begin block 2 */
		// Start line: 325
	/* end block 2 */
	// End Line: 326

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void * /*$ra*/ CheckDist__Fii(int x /*$s4*/, int y /*$s5*/)
 // line 174, offset 0x800ab910
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x800AB910
		// Variables:
	// 		int x1; // $s0
	// 		int y1; // $s0

		/* begin block 1.1 */
			// Start line: 175
			// Start offset: 0x800AB910
			// Variables:
		// 		int i; // $s3
		/* end block 1.1 */
		// End offset: 0x800AB9CC
		// End Line: 187
	/* end block 1 */
	// End offset: 0x800AB9D0
	// End Line: 190

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

int CheckDist__Fii(int x,int y)

{
	bool bVar1;
	int __x;
	int __x_00;
	undefined *puVar2;
	int iVar3;
	
	iVar3 = 0;
	puVar2 = (undefined *)0x0;
	do {
		if ((&plr[0].plractive)[(int)puVar2] != '\0') {
			__x = abs(x - (int)*(short *)((int)&plr[0]._px + (int)puVar2));
			bVar1 = false;
			__x_00 = abs(y - (int)*(short *)((int)&plr[0]._py + (int)puVar2));
			__x = abs(__x);
			if (__x < 5) {
				__x = abs(__x_00);
				bVar1 = __x < 5;
			}
			if (bVar1) {
				return (uint)(iVar3 != -1);
			}
		}
		iVar3 = iVar3 + 1;
		puVar2 = &DAT_000019e8 + (int)puVar2;
		if (1 < iVar3) {
			return 0;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 200, offset 0x800ab9f8
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x800AB9F8
		// Variables:
	// 		int scared; // $s1
	// 		int p; // $a0
	// 		int i; // $a0

		/* begin block 1.1 */
			// Start line: 212
			// Start offset: 0x800ABA6C

			/* begin block 1.1.1 */
				// Start line: 213
				// Start offset: 0x800ABA74
				// Variables:
			// 		struct PlayerStruct *player; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800ABB08
			// End Line: 220
		/* end block 1.1 */
		// End offset: 0x800ABB08
		// End Line: 220
	/* end block 1 */
	// End offset: 0x800ABB0C
	// End Line: 224

	/* begin block 2 */
		// Start line: 425
	/* end block 2 */
	// End Line: 426

/* WARNING: Unknown calling convention yet parameter storage is locked */

int BirdScared__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	iVar3 = GetPerch__FP10BIRDSTRUCT(b);
	if ((b->mode == BIRD_FLY) && (b->leader == (BIRDSTRUCT *)0x0)) {
		cVar1 = perches[iVar3].x;
		cVar2 = perches[iVar3].y;
	}
	else {
		cVar1 = b->_bx;
		cVar2 = b->_by;
	}
	iVar3 = CheckDist__Fii((int)cVar1,(int)cVar2);
	iVar4 = iVar3 + -1;
	if (iVar3 != 0) {
		if ((last_seenx[iVar4] != plr[iVar4].WorldX) || (last_seeny[iVar4] != plr[iVar4].WorldY)) {
			iVar5 = iVar3;
		}
		last_seenx[iVar4] = plr[iVar4].WorldX;
		last_seeny[iVar4] = plr[iVar4].WorldY;
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$a0*/)
 // line 232, offset 0x800abb24
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800ABB24

		/* begin block 1.1 */
			// Start line: 237
			// Start offset: 0x800ABB38
			// Variables:
		// 		int n; // $v1
		/* end block 1.1 */
		// End offset: 0x800ABB6C
		// End Line: 241
	/* end block 1 */
	// End offset: 0x800ABB70
	// End Line: 242

	/* begin block 2 */
		// Start line: 490
	/* end block 2 */
	// End Line: 491

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 250, offset 0x800abb78
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x800ABB78
		// Variables:
	// 		int nd; // $s4
	// 		int x; // $s3
	// 		int y; // $s2

		/* begin block 1.1 */
			// Start line: 251
			// Start offset: 0x800ABB78

			/* begin block 1.1.1 */
				// Start line: 264
				// Start offset: 0x800ABC2C
				// Variables:
			// 		struct Perch *p; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800ABC90
			// End Line: 268
		/* end block 1.1 */
		// End offset: 0x800ABC90
		// End Line: 268
	/* end block 1 */
	// End offset: 0x800ABD28
	// End Line: 284

	/* begin block 2 */
		// Start line: 525
	/* end block 2 */
	// End Line: 526

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_StartHop__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	long lVar6;
	int iVar7;
	long lVar8;
	int iVar9;
	int iVar10;
	
	lVar6 = ENG_random__Fl(8);
	iVar9 = (int)offset_x[lVar6] * (int)hop_height;
	iVar10 = (int)offset_y[lVar6] * (int)hop_height;
	if (b->leadflag == '\0') {
		uVar5 = BirdDistanceOK__Fiiii
											((int)b->leader->WorldX,(int)b->leader->WorldY,(int)b->WorldX + iVar9,
											 (int)b->WorldY + iVar10);
		if (uVar5 != '\0') goto LAB_800abc90;
		cVar1 = b->_bx;
		cVar2 = b->_by;
		cVar3 = b->leader->_bx;
		cVar4 = b->leader->_by;
	}
	else {
		iVar7 = GetPerch__FP10BIRDSTRUCT(b);
		uVar5 = BirdDistanceOK__Fiiii
											((int)perches[iVar7].x << 3,(int)perches[iVar7].y << 3,(int)b->WorldX + iVar9,
											 (int)b->WorldY + iVar10);
		if (uVar5 != '\0') goto LAB_800abc90;
		cVar1 = b->_bx;
		cVar2 = b->_by;
		cVar3 = perches[iVar7].x;
		cVar4 = perches[iVar7].y;
	}
	lVar6 = GetDirection__Fiiii((int)cVar1,(int)cVar2,(int)cVar3,(int)cVar4);
LAB_800abc90:
	lVar8 = ENG_random__Fl(3);
	b->flyvar = (char)(lVar8 + 1);
	iVar9 = (int)hop_height + ((lVar8 + 1) * 0x1000000 >> 0x18);
	uVar5 = SolidLoc__Fii((int)b->WorldX + (int)offset_x[lVar6] * iVar9 >> 3,
												(int)b->WorldY + (int)offset_y[lVar6] * iVar9 >> 3);
	if (uVar5 == '\0') {
		b->dir = (char)lVar6;
		b->mode = BIRD_HOP;
		b->flytime = hop_height;
	}
	else {
		lVar6 = ENG_random__Fl(0x32);
		b->flytime = (char)lVar6 + '\n';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 292, offset 0x800abd4c
	/* begin block 1 */
		// Start line: 293
		// Start offset: 0x800ABD4C
	/* end block 1 */
	// End offset: 0x800ABE3C
	// End Line: 313

	/* begin block 2 */
		// Start line: 617
	/* end block 2 */
	// End Line: 618

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 323, offset 0x800abe50
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x800ABE50
	/* end block 1 */
	// End offset: 0x800ABEA4
	// End Line: 331

	/* begin block 2 */
		// Start line: 685
	/* end block 2 */
	// End Line: 686

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_StartPerch__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	long lVar1;
	
	b->mode = BIRD_PERCH;
	lVar1 = ENG_random__Fl(0x32);
	b->flytime = (char)lVar1 + '2';
	last_seenx[0] = plr[0].WorldX;
	last_seenx[1] = plr[1].WorldX;
	last_seeny[0] = plr[0].WorldY;
	last_seeny[1] = plr[1].WorldY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 339, offset 0x800abeb8
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x800ABEB8
	/* end block 1 */
	// End offset: 0x800ABF28
	// End Line: 354

	/* begin block 2 */
		// Start line: 722
	/* end block 2 */
	// End Line: 723

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 363, offset 0x800abf3c
	/* begin block 1 */
		// Start line: 364
		// Start offset: 0x800ABF3C
	/* end block 1 */
	// End offset: 0x800ABFCC
	// End Line: 377

	/* begin block 2 */
		// Start line: 770
	/* end block 2 */
	// End Line: 771

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_DoScatter__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	byte bVar1;
	long lVar2;
	
	bVar1 = b->flytime - 1;
	b->flytime = bVar1;
	if ((int)((uint)bVar1 << 0x18) < 1) {
		b->mode = BIRD_FLY;
		lVar2 = ENG_random__Fl(0x32);
		b->flytime = (char)lVar2 + '2';
		lVar2 = ENG_random__Fl(10);
		b->flyvar = (char)lVar2 + '\x05';
	}
	if (b->height < '2') {
		lVar2 = ENG_random__Fl(2);
		b->height = b->height + (char)lVar2;
		b->animcount = b->animcount + '\b';
	}
	AlterBirdPos__FP10BIRDSTRUCTUc(b,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s3*/)
 // line 381, offset 0x800abfe0
	/* begin block 1 */
		// Start line: 382
		// Start offset: 0x800ABFE0
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s0
	// 		int ofx; // $s5
	// 		int ofy; // $s4
	// 		void * posok; // $s6

		/* begin block 1.1 */
			// Start line: 382
			// Start offset: 0x800ABFE0
			// Variables:
		// 		int d; // $s7

			/* begin block 1.1.1 */
				// Start line: 388
				// Start offset: 0x800AC010

				/* begin block 1.1.1.1 */
					// Start line: 390
					// Start offset: 0x800AC01C
					// Variables:
				// 		int i; // $s2
				/* end block 1.1.1.1 */
				// End offset: 0x800AC07C
				// End Line: 404
			/* end block 1.1.1 */
			// End offset: 0x800AC0A8
			// End Line: 407
		/* end block 1.1 */
		// End offset: 0x800AC0C0
		// End Line: 408
	/* end block 1 */
	// End offset: 0x800AC0C0
	// End Line: 408

	/* begin block 2 */
		// Start line: 809
	/* end block 2 */
	// End Line: 810

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckDirOk__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	char cVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	while( true ) {
		bVar2 = true;
		if (7 < iVar8) {
			return;
		}
		iVar7 = 0;
		iVar6 = (int)b->WorldX;
		iVar5 = (int)b->WorldY;
		cVar4 = offset_x[(int)b->dir];
		cVar1 = offset_y[(int)b->dir];
		do {
			uVar3 = SolidLoc__Fii(iVar6 >> 3,iVar5 >> 3);
			if (uVar3 == '\0') {
				iVar6 = iVar6 + (int)cVar4;
				iVar5 = iVar5 + (int)cVar1;
			}
			else {
				bVar2 = false;
			}
			iVar7 = iVar7 + 1;
		} while (iVar7 < 0x32);
		if (bVar2) break;
		cVar4 = b->dir + '\x01';
		iVar5 = (int)cVar4;
		b->dir = cVar4;
		if (iVar5 < 0) {
			iVar5 = iVar5 + 7;
		}
		b->dir = cVar4 + (char)(iVar5 >> 3) * -8;
		iVar8 = iVar8 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 416, offset 0x800ac0f0
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x800AC0F0
	/* end block 1 */
	// End offset: 0x800AC17C
	// End Line: 429

	/* begin block 2 */
		// Start line: 890
	/* end block 2 */
	// End Line: 891

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_StartScatter__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	long lVar1;
	int iVar2;
	
	b->mode = BIRD_SCATTER;
	lVar1 = ENG_random__Fl(100);
	b->flytime = (char)lVar1 + '2';
	lVar1 = ENG_random__Fl(0x32);
	b->flyvar = (char)lVar1 + '\x05';
	if (b->leadflag == '\0') {
		iVar2 = GetDirection__Fiiii((int)b->_bx,(int)b->_by,(int)b->leader->_bx,(int)b->leader->_by);
		b->newdir = (char)(iVar2 + -4);
		if ((iVar2 + -4) * 0x1000000 < 0) {
			b->newdir = (char)iVar2;
		}
	}
	else {
		lVar1 = ENG_random__Fl(8);
		b->newdir = (char)lVar1;
	}
	CheckDirOk__FP10BIRDSTRUCT(b);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 437, offset 0x800ac190
	/* begin block 1 */
		// Start line: 438
		// Start offset: 0x800AC190
		// Variables:
	// 		struct BIRDSTRUCT *leader; // $s1

		/* begin block 1.1 */
			// Start line: 454
			// Start offset: 0x800AC1DC

			/* begin block 1.1.1 */
				// Start line: 455
				// Start offset: 0x800AC1E4

				/* begin block 1.1.1.1 */
					// Start line: 456
					// Start offset: 0x800AC1E4
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x800AC204
				// End Line: 458
			/* end block 1.1.1 */
			// End offset: 0x800AC204
			// End Line: 458
		/* end block 1.1 */
		// End offset: 0x800AC204
		// End Line: 458
	/* end block 1 */
	// End offset: 0x800AC204
	// End Line: 458

	/* begin block 2 */
		// Start line: 936
	/* end block 2 */
	// End Line: 937

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_StartFly__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	BIRDSTRUCT *b_00;
	int iVar1;
	
	b_00 = b->leader;
	if (1 < (uint)b->mode - 1) {
		BIRD_StartScatter__FP10BIRDSTRUCT(b);
		if (b->visible != '\0') {
			PlaySFX__Fi(TSFX_BIRDCHR1);
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
 // line 468, offset 0x800ac21c
	/* begin block 1 */
		// Start line: 469
		// Start offset: 0x800AC21C
		// Variables:
	// 		int pnum; // $s4

		/* begin block 1.1 */
			// Start line: 469
			// Start offset: 0x800AC21C

			/* begin block 1.1.1 */
				// Start line: 475
				// Start offset: 0x800AC25C

				/* begin block 1.1.1.1 */
					// Start line: 494
					// Start offset: 0x800AC324

					/* begin block 1.1.1.1.1 */
						// Start line: 495
						// Start offset: 0x800AC334

						/* begin block 1.1.1.1.1.1 */
							// Start line: 496
							// Start offset: 0x800AC334

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 497
								// Start offset: 0x800AC354
								// Variables:
							// 		int x; // $s1
							// 		int y; // $s2
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800AC404
							// End Line: 504
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800AC404
						// End Line: 504
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AC404
					// End Line: 504
				/* end block 1.1.1.1 */
				// End offset: 0x800AC404
				// End Line: 504
			/* end block 1.1.1 */
			// End offset: 0x800AC404
			// End Line: 504
		/* end block 1.1 */
		// End offset: 0x800AC404
		// End Line: 504
	/* end block 1 */
	// End offset: 0x800AC4F0
	// End Line: 527

	/* begin block 2 */
		// Start line: 1000
	/* end block 2 */
	// End Line: 1001

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_DoFly__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	char cVar1;
	char cVar2;
	char cVar3;
	_224fake _Var4;
	bool bVar5;
	uchar uVar6;
	int iVar7;
	long lVar8;
	int iVar9;
	char cVar10;
	int iVar11;
	
	iVar7 = GetPerch__FP10BIRDSTRUCT(b);
	cVar10 = b->flytime;
	b->flytime = cVar10 + -1;
	if (cVar10 == '\x01') {
		if (BirdFrig == (void *)0x0) {
			lVar8 = ENG_random__Fl(0x14);
			b->flytime = (char)lVar8 + '\n';
			if (b->leadflag == '\0') {
				cVar10 = b->_bx;
				cVar1 = b->_by;
				cVar2 = b->leader->_bx;
				cVar3 = b->leader->_by;
			}
			else {
				iVar9 = BirdScared__FP10BIRDSTRUCT(b);
				if (iVar9 != 0) {
					lVar8 = ENG_random__Fl(8);
					b->newdir = (char)lVar8;
					goto LAB_800ac324;
				}
				cVar10 = b->_bx;
				cVar1 = b->_by;
				cVar2 = perches[iVar7].x;
				cVar3 = perches[iVar7].y;
			}
			iVar9 = GetDirection__Fiiii((int)cVar10,(int)cVar1,(int)cVar2,(int)cVar3);
			b->newdir = (char)iVar9;
		}
		else {
			iVar9 = GetDirection__Fiiii((int)b->_bx,(int)b->_by,(int)plr[0]._px,(int)plr[0]._py);
			b->newdir = (char)iVar9;
			lVar8 = ENG_random__Fl(5);
			b->flytime = (char)lVar8 + '\x05';
		}
LAB_800ac324:
		if (b->leadflag != '\0') {
			iVar9 = BirdScared__FP10BIRDSTRUCT(b);
			if ((iVar9 == 0) && (bVar5 = false, BirdFrig == (void *)0x0)) {
				iVar9 = (int)offset_x[(int)b->dir] * (int)b->height;
				iVar11 = (int)offset_y[(int)b->dir] * (int)b->height;
				uVar6 = BirdDistanceOK__Fiiii
													((int)perches[iVar7].x << 3,(int)perches[iVar7].y << 3,
													 (int)b->WorldX + iVar9,(int)b->WorldY + iVar11);
				if (uVar6 != '\0') {
					uVar6 = SolidLoc__Fii((int)b->WorldX + iVar9 >> 3,(int)b->WorldY + iVar11 >> 3);
					bVar5 = uVar6 == '\0';
				}
				if (bVar5) {
					BIRD_StartLanding__FP10BIRDSTRUCT(b);
				}
			}
			goto LAB_800ac404;
		}
	}
	else {
LAB_800ac404:
		if (b->leadflag != '\0') {
			if (b->height < '2') {
				b->animcount = b->animcount + '\b';
				lVar8 = ENG_random__Fl(2);
				b->height = b->height + (char)lVar8;
			}
			goto LAB_800ac4e8;
		}
	}
	_Var4 = b->leader->mode;
	if ((_Var4 == BIRD_LANDING) || (_Var4 == BIRD_PERCH)) goto LAB_800ac4e8;
	cVar10 = b->leader->height;
	if (b->height < cVar10) {
		lVar8 = ENG_random__Fl(2);
		cVar10 = b->height + (char)lVar8;
LAB_800ac4b8:
		b->height = cVar10;
	}
	else {
		if (cVar10 < b->height) {
			lVar8 = ENG_random__Fl(2);
			cVar10 = b->height - (char)lVar8;
			goto LAB_800ac4b8;
		}
	}
	if (b->height != b->leader->height) {
		b->animcount = b->animcount + '\b';
	}
LAB_800ac4e8:
	AlterBirdPos__FP10BIRDSTRUCTUc(b,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$a0*/)
 // line 536, offset 0x800ac514
	/* begin block 1 */
		// Start line: 537
		// Start offset: 0x800AC514
	/* end block 1 */
	// End offset: 0x800AC518
	// End Line: 541

	/* begin block 2 */
		// Start line: 1144
	/* end block 2 */
	// End Line: 1145

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_StartLanding__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	b->mode = BIRD_LANDING;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 555, offset 0x800ac520
	/* begin block 1 */
		// Start line: 556
		// Start offset: 0x800AC520
	/* end block 1 */
	// End offset: 0x800AC578
	// End Line: 563

	/* begin block 2 */
		// Start line: 1181
	/* end block 2 */
	// End Line: 1182

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BIRD_DoLanding__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	uchar uVar1;
	
	b->height = b->height + -1;
	AlterBirdPos__FP10BIRDSTRUCTUc(b,'\x01');
	if (b->height < '\x01') {
		b->height = '\0';
		uVar1 = SolidLoc__Fii((int)b->_bx,(int)b->_by);
		if (uVar1 == '\0') {
			BIRD_StartPerch__FP10BIRDSTRUCT(b);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader /*$s3*/)
 // line 572, offset 0x800ac58c
	/* begin block 1 */
		// Start line: 573
		// Start offset: 0x800AC58C
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s1

		/* begin block 1.1 */
			// Start line: 573
			// Start offset: 0x800AC58C
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x800AC654
		// End Line: 592
	/* end block 1 */
	// End offset: 0x800AC654
	// End Line: 592

	/* begin block 2 */
		// Start line: 1216
	/* end block 2 */
	// End Line: 1217

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
		lVar1 = ENG_random__Fl(0x14);
		*(short *)(pcVar3 + -10) = leader->WorldX + -10 + (short)lVar1;
		lVar1 = ENG_random__Fl(0x14);
		iVar2 = ((uint)(ushort)leader->WorldY - 10) + lVar1;
		*(short *)(pcVar3 + -8) = (short)iVar2;
		BirdWorld__FP10BIRDSTRUCTii(b,(int)*(short *)(pcVar3 + -10),iVar2 * 0x10000 >> 0x10);
		BIRD_StartPerch__FP10BIRDSTRUCT(b);
		pcVar3[6] = '\0';
		lVar1 = ENG_random__Fl(8);
		pcVar3[-2] = (char)lVar1;
		lVar1 = ENG_random__Fl(2);
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
// void /*$ra*/ ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *b /*$s0*/)
 // line 599, offset 0x800ac674
	/* begin block 1 */
		// Start line: 600
		// Start offset: 0x800AC674
		// Variables:
	// 		struct BIRDSTRUCT *leader; // $a1

		/* begin block 1.1 */
			// Start line: 600
			// Start offset: 0x800AC674

			/* begin block 1.1.1 */
				// Start line: 606
				// Start offset: 0x800AC6B8
				// Variables:
			// 		int x; // $s1
			// 		int y; // $s2
			/* end block 1.1.1 */
			// End offset: 0x800AC748
			// End Line: 613
		/* end block 1.1 */
		// End offset: 0x800AC748
		// End Line: 613
	/* end block 1 */
	// End offset: 0x800AC748
	// End Line: 613

	/* begin block 2 */
		// Start line: 1287
	/* end block 2 */
	// End Line: 1288

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessFlock__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	uchar uVar1;
	BIRDSTRUCT *pBVar2;
	int iVar3;
	int iVar4;
	
	pBVar2 = b->leader;
	if ((b->mode == BIRD_FLY) && ((pBVar2->mode == BIRD_PERCH || (pBVar2->mode == BIRD_HOP)))) {
		iVar3 = (int)offset_x[(int)b->dir] * (int)b->height;
		iVar4 = (int)offset_y[(int)b->dir] * (int)b->height;
		uVar1 = BirdDistanceOK__Fiiii
											((int)pBVar2->WorldX,(int)pBVar2->WorldY,(int)b->WorldX + iVar3,
											 (int)b->WorldY + iVar4);
		if ((uVar1 != '\0') &&
			 (uVar1 = SolidLoc__Fii((int)b->WorldX + iVar3 >> 3,(int)b->WorldY + iVar4 >> 3),
			 uVar1 == '\0')) {
			BIRD_StartLanding__FP10BIRDSTRUCT(b);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitBird__Fv()
 // line 637, offset 0x800ac764
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x800AC764
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s1

		/* begin block 1.1 */
			// Start line: 638
			// Start offset: 0x800AC764
			// Variables:
		// 		int i; // $s3
		/* end block 1.1 */
		// End offset: 0x800AC818
		// End Line: 657
	/* end block 1 */
	// End offset: 0x800AC818
	// End Line: 657

	/* begin block 2 */
		// Start line: 1377
	/* end block 2 */
	// End Line: 1378

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
		lVar2 = ENG_random__Fl(7);
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
 // line 668, offset 0x800ac838
	/* begin block 1 */
		// Start line: 669
		// Start offset: 0x800AC838
		// Variables:
	// 		struct BIRDSTRUCT *b; // $s0

		/* begin block 1.1 */
			// Start line: 675
			// Start offset: 0x800AC88C
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x800AC95C
		// End Line: 707
	/* end block 1 */
	// End offset: 0x800AC95C
	// End Line: 707

	/* begin block 2 */
		// Start line: 1478
	/* end block 2 */
	// End Line: 1479

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessBird__Fv(void)

{
	char cVar1;
	BIRDSTRUCT *b;
	char *pcVar2;
	int iVar3;
	
	b = BirdList;
	if (((PauseMode == '\0') && (stextflag == '\0')) && (iVar3 = 0, qtextflag == '\0')) {
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
			if (pcVar2[3] == '\0') {
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
 // line 715, offset 0x800ac97c
	/* begin block 1 */
		// Start line: 716
		// Start offset: 0x800AC97C
		// Variables:
	// 		int banim; // $v1
	/* end block 1 */
	// End offset: 0x800ACA0C
	// End Line: 745

	/* begin block 2 */
		// Start line: 1576
	/* end block 2 */
	// End Line: 1577

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetBirdFrame__FP10BIRDSTRUCT(BIRDSTRUCT *b)

{
	_224fake _Var1;
	int iVar2;
	
	_Var1 = b->mode;
	iVar2 = (int)b->dir;
	if ((_Var1 == BIRD_PERCH) || (_Var1 == BIRD_HOP)) {
		switch(b->dir) {
		case '\0':
		case '\x05':
		case '\x06':
		case '\a':
			iVar2 = 1;
			break;
		case '\x01':
		case '\x02':
		case '\x03':
		case '\x04':
			iVar2 = 0;
		}
		iVar2 = iVar2 * 2 + ((int)((uint)(byte)b->animcount << 0x18) >> 0x1b) + 0x10;
	}
	else {
		if (_Var1 == BIRD_LANDING) {
			iVar2 = iVar2 * 2 + 1;
		}
		else {
			iVar2 = iVar2 * 2 + ((int)((uint)(byte)b->animcount << 0x18) >> 0x1b);
		}
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4 /*$s0*/, int height /*$s2*/)
 // line 750, offset 0x800aca14
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x800ACA14
		// Variables:
	// 		int x; // $s1
	// 		int y; // $a0
	/* end block 1 */
	// End offset: 0x800ACB28
	// End Line: 771

	/* begin block 2 */
		// Start line: 1646
	/* end block 2 */
	// End Line: 1647

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b /*$s3*/, int x /*$s2*/, int y /*$s1*/)
 // line 775, offset 0x800acb44
	/* begin block 1 */
		// Start line: 776
		// Start offset: 0x800ACB44
		// Variables:
	// 		struct CBlocks *gb; // $a0
	// 		struct POLY_FT4 *Ft4; // stack offset -32
	// 		struct TextDat *Dat; // $s4

		/* begin block 1.1 */
			// Start line: 784
			// Start offset: 0x800ACB94

			/* begin block 1.1.1 */
				// Start line: 788
				// Start offset: 0x800ACBB0
				// Variables:
			// 		int ot; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800ACC48
			// End Line: 794
		/* end block 1.1 */
		// End offset: 0x800ACC48
		// End Line: 794
	/* end block 1 */
	// End offset: 0x800ACC48
	// End Line: 794

	/* begin block 2 */
		// Start line: 1724
	/* end block 2 */
	// End Line: 1725

/* WARNING: Unknown calling convention yet parameter storage is locked */

void doshadow__FP10BIRDSTRUCTii(BIRDSTRUCT *b,int x,int y)

{
	TextDat *this;
	CBlocks *this_00;
	int iVar1;
	int Frm;
	ulong *puVar2;
	uint LogicalY;
	uint X;
	POLY_FT4 *local_20 [2];
	
	this_00 = BL_GetCurrentBlocks__Fv();
	this = MissDat;
	iVar1 = (uint)(byte)b->height << 0x18;
	Frm = iVar1 >> 0x18;
	X = x - Frm;
	if (Frm < 0x29) {
		LogicalY = y - (iVar1 >> 0x19);
		if ((X < 0x140) && (LogicalY < 0xf0)) {
			iVar1 = GetOtPos__7CBlocksi(this_00,LogicalY);
			PRIM_GetPrim__FPP8POLY_FT4(local_20);
			Frm = GetBirdFrame__FP10BIRDSTRUCT(b);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_20[0],Frm,X,LogicalY,0,0);
			bscale__FP8POLY_FT4i(local_20[0],(int)b->height);
			puVar2 = ThisOt + iVar1;
			local_20[0]->tag = local_20[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)local_20[0] & 0xffffff;
			ShadScaleSkew__7CBlocksP8POLY_FT4(local_20[0]);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLBird__Fv()
 // line 834, offset 0x800acc6c
	/* begin block 1 */
		// Start line: 835
		// Start offset: 0x800ACC6C
		// Variables:
	// 		struct BIRDSTRUCT *ThisBird; // $s4
	// 		struct POLY_FT4 *Ft4; // stack offset -56
	// 		struct CBlocks *gblock; // $fp
	// 		int ScrXOff; // $v0
	// 		int ScrYOff; // $v0
	// 		int x; // $s3
	// 		int y; // $s2
	// 		struct RECT R; // stack offset -64
	// 		struct TextDat *Dat; // stack offset -48

		/* begin block 1.1 */
			// Start line: 835
			// Start offset: 0x800ACC6C

			/* begin block 1.1.1 */
				// Start line: 847
				// Start offset: 0x800ACCC0

				/* begin block 1.1.1.1 */
					// Start line: 848
					// Start offset: 0x800ACCC0
					// Variables:
				// 		int i; // $s6

					/* begin block 1.1.1.1.1 */
						// Start line: 848
						// Start offset: 0x800ACCD8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 874
							// Start offset: 0x800ACCE4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 883
								// Start offset: 0x800ACDAC
								// Variables:
							// 		int ot; // $s0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800ACDAC
							// End Line: 884
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800ACE44
						// End Line: 895
					/* end block 1.1.1.1.1 */
					// End offset: 0x800ACE44
					// End Line: 897
				/* end block 1.1.1.1 */
				// End offset: 0x800ACE6C
				// End Line: 899
			/* end block 1.1.1 */
			// End offset: 0x800ACE6C
			// End Line: 899
		/* end block 1.1 */
		// End offset: 0x800ACE6C
		// End Line: 899
	/* end block 1 */
	// End offset: 0x800ACE6C
	// End Line: 899

	/* begin block 2 */
		// Start line: 1844
	/* end block 2 */
	// End Line: 1845

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawLBird__Fv(void)

{
	char cVar1;
	bool bVar2;
	CBlocks *this;
	int iVar3;
	int Frm;
	ulong *puVar4;
	char *pcVar5;
	int iVar6;
	uint X;
	BIRDSTRUCT *b;
	int iVar7;
	RECT local_40;
	POLY_FT4 *local_38 [2];
	TextDat *local_30;
	
	this = BL_GetCurrentBlocks__Fv();
	local_30 = MissDat;
	if (leveltype == '\0') {
		iVar7 = 0;
		pcVar5 = &BirdList[0].height;
		bVar2 = true;
		b = BirdList;
		while (bVar2) {
			GetScrXY__7CBlocksR4RECTiiii
								(this,&local_40,(int)pcVar5[-0xb] * 0x14,(int)pcVar5[-10] * 0x14,
								 ((int)pcVar5[-9] * 0x271) / 1000,((int)pcVar5[-8] * 0x271) / 1000);
			X = SEXT24(local_40.x);
			iVar6 = (int)local_40.y;
			if (((X < 0x140) && (-1 < iVar6)) && (iVar6 - (int)*pcVar5 < 0xf0)) {
				iVar3 = GetOtPos__7CBlocksi(this,iVar6 + (int)*pcVar5);
				PRIM_GetPrim__FPP8POLY_FT4(local_38);
				Frm = GetBirdFrame__FP10BIRDSTRUCT(b);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(local_30,local_38[0],Frm,X,iVar6 - (int)*pcVar5,0,0);
				puVar4 = ThisOt + iVar3;
				local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar4 & 0xffffff;
				*puVar4 = *puVar4 & 0xff000000 | (uint)local_38[0] & 0xffffff;
				pcVar5[2] = '\x01';
			}
			else {
				pcVar5[2] = '\0';
			}
			cVar1 = *pcVar5;
			pcVar5 = pcVar5 + 0x18;
			iVar7 = iVar7 + 1;
			doshadow__FP10BIRDSTRUCTii(b,X,iVar6 - (int)cVar1);
			bVar2 = iVar7 < 0x10;
			b = b + 1;
		}
	}
	return;
}





