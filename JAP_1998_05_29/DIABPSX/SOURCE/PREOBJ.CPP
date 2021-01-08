#include "THISDUST.H"
#include "PREOBJ.H"


// decompiled code
// original method signature: 
// void /*$ra*/ AddL1Door__Fiiii(int i /*$s3*/, int x /*$s1*/, int y /*$s2*/, int ot /*$a3*/)
 // line 123, offset 0x80155fd8
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x80155FD8
	/* end block 1 */
	// End offset: 0x801560A0
	// End Line: 142

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL1Door__Fiiii(int i,int x,int y,int ot)

{
	short sVar1;
	
	object[i]._oDoorFlag = '\x01';
	object[i]._oAnimFlag = '\0';
	if (ot == 1) {
		sVar1 = GetDPiece__Fii(x,y);
		y = y + -1;
	}
	else {
		sVar1 = GetDPiece__Fii(x,y);
		x = x + -1;
	}
	object[i]._oVar1 = sVar1;
	sVar1 = GetDPiece__Fii(x,y);
	object[i]._oVar2 = sVar1;
	object[i]._oVar4 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSCambBook__Fi(int i /*$a0*/)
 // line 148, offset 0x801560c0
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x801560C0
	/* end block 1 */
	// End offset: 0x80156158
	// End Line: 160

	/* begin block 2 */
		// Start line: 311
	/* end block 2 */
	// End Line: 312

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSCambBook__Fi(int i)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	short sVar5;
	
	iVar3 = setpc_w;
	iVar2 = setpc_y;
	cVar1 = object[i]._oAnimFrame;
	sVar5 = (short)setpc_x;
	object[i]._oVar1 = sVar5;
	iVar4 = setpc_h;
	object[i]._oVar2 = (short)iVar2;
	object[i]._oVar3 = sVar5 + (short)iVar3 + 1;
	object[i]._oVar6 = (short)cVar1 + 1;
	object[i]._oVar4 = (short)iVar2 + (short)iVar4 + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddChest__Fii(int i /*$s1*/, int t /*$s0*/)
 // line 166, offset 0x80156160
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x80156160
	/* end block 1 */
	// End offset: 0x80156318
	// End Line: 193

	/* begin block 2 */
		// Start line: 352
	/* end block 2 */
	// End Line: 353

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddChest__Fii(int i,int t)

{
	long v;
	
	v = GetRndSeed__Fv();
	object[i]._oRndSeed = v;
	if (t == 7) {
LAB_80156288:
		if (setlevel != '\0') {
			object[i]._oVar1 = 3;
			goto LAB_801562f0;
		}
		v = 4;
	}
	else {
		if (t < 8) {
			if (t == 5) {
LAB_80156200:
				if (setlevel != '\0') {
					object[i]._oVar1 = 1;
					goto LAB_801562f0;
				}
				v = 2;
				goto LAB_801562c8;
			}
			if (t != 6) goto LAB_801562f0;
		}
		else {
			if (t != 0x45) {
				if (0x45 < t) {
					if (t != 0x46) goto LAB_801562f0;
					goto LAB_80156288;
				}
				if (t != 0x44) goto LAB_801562f0;
				goto LAB_80156200;
			}
		}
		if (setlevel != '\0') {
			object[i]._oVar1 = 2;
			goto LAB_801562f0;
		}
		v = 3;
	}
LAB_801562c8:
	v = ENG_random__Fl(v);
	object[i]._oVar1 = (short)v;
LAB_801562f0:
	v = ENG_random__Fl(8);
	object[i]._oVar2 = (short)v;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL2Door__Fiiii(int i /*$s2*/, int x /*$s0*/, int y /*$s1*/, int ot /*$a3*/)
 // line 199, offset 0x80156330
	/* begin block 1 */
		// Start line: 200
		// Start offset: 0x80156330
	/* end block 1 */
	// End offset: 0x80156458
	// End Line: 218

	/* begin block 2 */
		// Start line: 418
	/* end block 2 */
	// End Line: 419

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL2Door__Fiiii(int i,int x,int y,int ot)

{
	object[i]._oDoorFlag = '\x01';
	if (ot == 0x2a) {
		ObjSetMicro__Fiii(x,y,0x21a);
		dungeon[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x96;
		object[i]._oAnimFrame = '\x01';
	}
	else {
		ObjSetMicro__Fiii(x,y,0x21c);
		dungeon[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x97;
		object[i]._oAnimFrame = '\x02';
	}
	object[i]._oVar4 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL3Door__Fiiii(int i /*$s0*/, int x /*$a0*/, int y /*$a1*/, int ot /*$a3*/)
 // line 224, offset 0x8015647c
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x8015647C
	/* end block 1 */
	// End offset: 0x801564FC
	// End Line: 234

	/* begin block 2 */
		// Start line: 477
	/* end block 2 */
	// End Line: 478

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL3Door__Fiiii(int i,int x,int y,int ot)

{
	int pn;
	
	object[i]._oDoorFlag = '\x01';
	object[i]._oAnimFlag = '\0';
	pn = 0x216;
	if (ot == 0x4a) {
		pn = 0x213;
	}
	ObjSetMicro__Fiii(x,y,pn);
	object[i]._oVar4 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSarc__Fi(int i /*$a0*/)
 // line 240, offset 0x80156510
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x80156510
		// Variables:
	// 		int x; // $a1
	// 		int y; // $v1
	/* end block 1 */
	// End offset: 0x801565C4
	// End Line: 254

	/* begin block 2 */
		// Start line: 511
	/* end block 2 */
	// End Line: 512

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSarc__Fi(int i)

{
	short sVar1;
	long lVar2;
	int iVar3;
	
	dung_map[(int)object[i]._ox * 0x70 + (int)object[i]._oy + -1].dObject = ~(byte)i;
	lVar2 = ENG_random__Fl(10);
	object[i]._oVar1 = (short)lVar2;
	lVar2 = GetRndSeed__Fv();
	sVar1 = object[i]._oVar1;
	object[i]._oRndSeed = lVar2;
	if (7 < sVar1) {
		iVar3 = PreSpawnSkeleton__Fv();
		object[i]._oVar2 = (short)iVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlameTrap__Fi(int i /*$a0*/)
 // line 260, offset 0x801565d8
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x801565D8
	/* end block 1 */
	// End offset: 0x8015662C
	// End Line: 266

	/* begin block 2 */
		// Start line: 567
	/* end block 2 */
	// End Line: 568

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddFlameTrap__Fi(int i)

{
	int iVar1;
	int iVar2;
	
	iVar2 = trapdir;
	iVar1 = trapid;
	object[i]._oVar2 = 0;
	object[i]._oVar4 = 0;
	object[i]._oVar1 = (short)iVar1;
	object[i]._oVar3 = (short)iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTrap__Fii(int i /*$s0*/, int ot /*$a1*/)
 // line 270, offset 0x80156634
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x80156634
		// Variables:
	// 		int mt; // $a0
	/* end block 1 */
	// End offset: 0x80156714
	// End Line: 282

	/* begin block 2 */
		// Start line: 594
	/* end block 2 */
	// End Line: 595

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddTrap__Fii(int i,int ot)

{
	long lVar1;
	int iVar2;
	
	lVar1 = ENG_random__Fl((uint)currlevel / 3 + 1);
	if (lVar1 == 0) {
		object[i]._oVar3 = 0;
	}
	if (lVar1 == 1) {
		object[i]._oVar3 = 1;
	}
	iVar2 = i * 2;
	if (lVar1 == 2) {
		object[i]._oVar3 = 7;
		iVar2 = i << 1;
	}
	(&object[0]._oVar4)[i * 6 + iVar2 * 8] = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddArmorStand__Fi(int i /*$s0*/)
 // line 288, offset 0x80156728
	/* begin block 1 */
		// Start line: 289
		// Start offset: 0x80156728
	/* end block 1 */
	// End offset: 0x8015679C
	// End Line: 299

	/* begin block 2 */
		// Start line: 632
	/* end block 2 */
	// End Line: 633

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddArmorStand__Fi(int i)

{
	long lVar1;
	
	if (armorFlag == '\0') {
		object[i]._oAnimFlag = '\x02';
		object[i]._oSelFlag = '\0';
	}
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddObjLight__Fii(int i /*$a0*/, int r /*$a2*/)
 // line 307, offset 0x801567b0
	/* begin block 1 */
		// Start line: 308
		// Start offset: 0x801567B0
	/* end block 1 */
	// End offset: 0x80156864
	// End Line: 322

	/* begin block 2 */
		// Start line: 673
	/* end block 2 */
	// End Line: 674

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddObjLight__Fii(int i,int r)

{
	int iVar1;
	
	if (level_lamp[(uint)leveltype] != '\0') {
		if (InitObjFlag == '\0') {
			object[i]._oVar1 = 0;
		}
		else {
			iVar1 = AddLight__Fiii((int)object[i]._ox,(int)object[i]._oy,r);
			object[i]._olid = (short)iVar1;
			object[i]._oVar1 = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBarrel__Fii(int i /*$a0*/, int ot /*$a1*/)
 // line 326, offset 0x80156878
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x80156878
	/* end block 1 */
	// End offset: 0x8015690C
	// End Line: 339

	/* begin block 2 */
		// Start line: 711
	/* end block 2 */
	// End Line: 712

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddBarrel__Fii(int i,int ot)

{
	short sVar1;
	long lVar2;
	int iVar3;
	
	object[i]._oVar1 = 0;
	lVar2 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar2;
	lVar2 = ENG_random__Fl(10);
	object[i]._oVar2 = (short)lVar2;
	lVar2 = ENG_random__Fl(3);
	sVar1 = object[i]._oVar2;
	object[i]._oVar3 = (short)lVar2;
	if (7 < sVar1) {
		iVar3 = PreSpawnSkeleton__Fv();
		object[i]._oVar4 = (short)iVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddShrine__Fi(int i /*$s1*/)
 // line 345, offset 0x80156920
	/* begin block 1 */
		// Start line: 346
		// Start offset: 0x80156920
		// Variables:
	// 		int st; // $v1
	// 		unsigned char slist[26]; // stack offset -48
	/* end block 1 */
	// End offset: 0x80156A50
	// End Line: 366

	/* begin block 2 */
		// Start line: 756
	/* end block 2 */
	// End Line: 757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddShrine__Fi(int i)

{
	bool bVar1;
	long lVar2;
	char *pcVar3;
	char *pcVar4;
	char acStack48 [7];
	char acStack41 [25];
	
	object[i]._oPreFlag = '\x01';
	pcVar3 = acStack48;
	pcVar4 = shrineavail;
	do {
		if (currlevel == '\0') {
LAB_801569ac:
			*pcVar3 = '\0';
		}
		else {
			if (pcVar3 == acStack41) {
				bVar1 = currlevel < 9;
			}
			else {
				bVar1 = currlevel < 0x11;
			}
			if (!bVar1) goto LAB_801569ac;
			*pcVar3 = '\x01';
		}
		if (gbMaxPlayers == '\x01') {
LAB_801569ec:
			if (*pcVar4 == '\x02') {
				*pcVar3 = '\0';
			}
		}
		else {
			if (*pcVar4 == '\x01') {
				*pcVar3 = '\0';
			}
			if (gbMaxPlayers == '\x01') goto LAB_801569ec;
		}
		pcVar4 = pcVar4 + 1;
		pcVar3 = pcVar3 + 1;
		if (-0x7ff273cb < (int)pcVar4) {
			do {
				lVar2 = ENG_random__Fl(0x1a);
			} while (acStack48[lVar2] == '\0');
			object[i]._oVar1 = (short)lVar2;
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBookcase__Fi(int i /*$s0*/)
 // line 378, offset 0x80156a68
	/* begin block 1 */
		// Start line: 379
		// Start offset: 0x80156A68
	/* end block 1 */
	// End offset: 0x80156AAC
	// End Line: 386

	/* begin block 2 */
		// Start line: 828
	/* end block 2 */
	// End Line: 829

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddBookcase__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	object[i]._oPreFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBookstand__Fi(int i /*$s0*/)
 // line 392, offset 0x80156ac0
	/* begin block 1 */
		// Start line: 393
		// Start offset: 0x80156AC0
	/* end block 1 */
	// End offset: 0x80156AF4
	// End Line: 397

	/* begin block 2 */
		// Start line: 856
	/* end block 2 */
	// End Line: 857

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddBookstand__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBloodFtn__Fi(int i /*$s0*/)
 // line 405, offset 0x80156b08
	/* begin block 1 */
		// Start line: 406
		// Start offset: 0x80156B08
	/* end block 1 */
	// End offset: 0x80156B3C
	// End Line: 410

	/* begin block 2 */
		// Start line: 882
	/* end block 2 */
	// End Line: 883

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddBloodFtn__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPurifyingFountain__Fi(int i /*$a0*/)
 // line 418, offset 0x80156b50
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x80156B50
		// Variables:
	// 		int x; // $v1
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x80156BF8
	// End Line: 430

	/* begin block 2 */
		// Start line: 908
	/* end block 2 */
	// End Line: 909

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddPurifyingFountain__Fi(int i)

{
	char cVar1;
	long lVar2;
	int iVar3;
	byte bVar4;
	int iVar5;
	
	bVar4 = ~(byte)i;
	cVar1 = object[i]._oy;
	iVar5 = (int)cVar1 + -1;
	iVar3 = (int)object[i]._ox + -1;
	dung_map[(int)object[i]._ox * 0x70 + iVar5].dObject = bVar4;
	dung_map[iVar3 * 0x70 + (int)cVar1].dObject = bVar4;
	dung_map[iVar3 * 0x70 + iVar5].dObject = bVar4;
	lVar2 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddGoatShrine__Fi(int i /*$s0*/)
 // line 438, offset 0x80156c0c
	/* begin block 1 */
		// Start line: 439
		// Start offset: 0x80156C0C
	/* end block 1 */
	// End offset: 0x80156C40
	// End Line: 443

	/* begin block 2 */
		// Start line: 957
	/* end block 2 */
	// End Line: 958

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddGoatShrine__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddCauldron__Fi(int i /*$s0*/)
 // line 451, offset 0x80156c54
	/* begin block 1 */
		// Start line: 452
		// Start offset: 0x80156C54
	/* end block 1 */
	// End offset: 0x80156C88
	// End Line: 456

	/* begin block 2 */
		// Start line: 983
	/* end block 2 */
	// End Line: 984

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddCauldron__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMurkyFountain__Fi(int i /*$a0*/)
 // line 464, offset 0x80156c9c
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x80156C9C
		// Variables:
	// 		int x; // $v1
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x80156D44
	// End Line: 476

	/* begin block 2 */
		// Start line: 1009
	/* end block 2 */
	// End Line: 1010

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddMurkyFountain__Fi(int i)

{
	char cVar1;
	long lVar2;
	int iVar3;
	byte bVar4;
	int iVar5;
	
	bVar4 = ~(byte)i;
	cVar1 = object[i]._oy;
	iVar5 = (int)cVar1 + -1;
	iVar3 = (int)object[i]._ox + -1;
	dung_map[(int)object[i]._ox * 0x70 + iVar5].dObject = bVar4;
	dung_map[iVar3 * 0x70 + (int)cVar1].dObject = bVar4;
	dung_map[iVar3 * 0x70 + iVar5].dObject = bVar4;
	lVar2 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTearFountain__Fi(int i /*$s0*/)
 // line 484, offset 0x80156d58
	/* begin block 1 */
		// Start line: 485
		// Start offset: 0x80156D58
	/* end block 1 */
	// End offset: 0x80156D8C
	// End Line: 489

	/* begin block 2 */
		// Start line: 1058
	/* end block 2 */
	// End Line: 1059

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddTearFountain__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDecap__Fi(int i /*$s0*/)
 // line 497, offset 0x80156da0
	/* begin block 1 */
		// Start line: 498
		// Start offset: 0x80156DA0
	/* end block 1 */
	// End offset: 0x80156DFC
	// End Line: 506

	/* begin block 2 */
		// Start line: 1084
	/* end block 2 */
	// End Line: 1085

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddDecap__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	lVar1 = ENG_random__Fl(1);
	object[i]._oAnimFrame = (char)lVar1;
	object[i]._oPreFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddVilebook__Fi(int i /*$a0*/)
 // line 511, offset 0x80156e14
	/* begin block 1 */
		// Start line: 512
		// Start offset: 0x80156E14
	/* end block 1 */
	// End offset: 0x80156E5C
	// End Line: 515

	/* begin block 2 */
		// Start line: 1113
	/* end block 2 */
	// End Line: 1114

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddVilebook__Fi(int i)

{
	if ((setlevel != '\0') && (setlvlnum == '\x05')) {
		object[i]._oAnimFrame = '\x04';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMagicCircle__Fi(int i /*$s0*/)
 // line 521, offset 0x80156e64
	/* begin block 1 */
		// Start line: 522
		// Start offset: 0x80156E64
	/* end block 1 */
	// End offset: 0x80156EC4
	// End Line: 532

	/* begin block 2 */
		// Start line: 1132
	/* end block 2 */
	// End Line: 1133

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddMagicCircle__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	object[i]._oPreFlag = '\x01';
	object[i]._oVar6 = 0;
	object[i]._oVar5 = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBrnCross__Fi(int i /*$s0*/)
 // line 538, offset 0x80156ed8
	/* begin block 1 */
		// Start line: 539
		// Start offset: 0x80156ED8
	/* end block 1 */
	// End offset: 0x80156F0C
	// End Line: 543

	/* begin block 2 */
		// Start line: 1167
	/* end block 2 */
	// End Line: 1168

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddBrnCross__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPedistal__Fi(int i /*$a0*/)
 // line 551, offset 0x80156f20
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x80156F20
	/* end block 1 */
	// End offset: 0x80156FC0
	// End Line: 562

	/* begin block 2 */
		// Start line: 1195
	/* end block 2 */
	// End Line: 1196

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddPedistal__Fi(int i)

{
	int iVar1;
	int iVar2;
	int iVar3;
	short sVar4;
	
	iVar3 = setpc_h;
	iVar2 = setpc_w;
	iVar1 = setpc_y;
	sVar4 = (short)setpc_x;
	object[i]._oVar1 = sVar4;
	object[i]._oVar2 = (short)iVar1;
	object[i]._oVar3 = sVar4 + (short)iVar2;
	object[i]._oVar4 = (short)iVar1 + (short)iVar3;
	if (quests[9]._qvar2 == '\0') {
		object[i]._oVar6 = 0;
	}
	else {
		object[i]._oVar6 = (ushort)quests[9]._qvar2 - 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoryBook__Fi(int i /*$s0*/)
 // line 573, offset 0x80156fc8
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x80156FC8
		// Variables:
	// 		int bookframe; // $v1
	/* end block 1 */
	// End offset: 0x80157134
	// End Line: 591

	/* begin block 2 */
		// Start line: 1242
	/* end block 2 */
	// End Line: 1243

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddStoryBook__Fi(int i)

{
	short sVar1;
	uchar uVar2;
	long lVar3;
	
	SetRndSeed__Fl(ULONG_800cf79c);
	lVar3 = ENG_random__Fl(3);
	uVar2 = currlevel;
	object[i]._oVar1 = (short)lVar3;
	if (uVar2 == '\x04') {
		object[i]._oVar2 = (&StoryText)[(int)(short)lVar3 * 3];
	}
	if (currlevel == '\b') {
		object[i]._oVar2 = (&USHORT_800e40b2)[(int)object[i]._oVar1 * 3];
	}
	if (currlevel == '\f') {
		object[i]._oVar2 = (&USHORT_800e40b4)[(int)object[i]._oVar1 * 3];
	}
	uVar2 = currlevel;
	sVar1 = object[i]._oVar1;
	object[i]._oAnimFrame = '\x01';
	object[i]._oVar4 = 2;
	object[i]._oVar3 = (ushort)(uVar2 >> 2) + sVar1 * 3 + -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddWeaponRack__Fi(int i /*$s0*/)
 // line 597, offset 0x80157148
	/* begin block 1 */
		// Start line: 598
		// Start offset: 0x80157148
	/* end block 1 */
	// End offset: 0x801571BC
	// End Line: 608

	/* begin block 2 */
		// Start line: 1304
	/* end block 2 */
	// End Line: 1305

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddWeaponRack__Fi(int i)

{
	long lVar1;
	
	if (weaponFlag == '\0') {
		object[i]._oAnimFlag = '\x02';
		object[i]._oSelFlag = '\0';
	}
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTorturedBody__Fi(int i /*$s1*/)
 // line 616, offset 0x801571d0
	/* begin block 1 */
		// Start line: 617
		// Start offset: 0x801571D0
	/* end block 1 */
	// End offset: 0x80157230
	// End Line: 625

	/* begin block 2 */
		// Start line: 1342
	/* end block 2 */
	// End Line: 1343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddTorturedBody__Fi(int i)

{
	long lVar1;
	
	lVar1 = GetRndSeed__Fv();
	object[i]._oRndSeed = lVar1;
	lVar1 = ENG_random__Fl(4);
	object[i]._oAnimFrame = (char)lVar1 + '\x01';
	object[i]._oPreFlag = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddFlameLvr__Fi(int i /*$a0*/)
 // line 632, offset 0x80157248
	/* begin block 1 */
		// Start line: 633
		// Start offset: 0x80157248
	/* end block 1 */
	// End offset: 0x80157280
	// End Line: 636

	/* begin block 2 */
		// Start line: 1376
	/* end block 2 */
	// End Line: 1377

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddFlameLvr__Fi(int i)

{
	int iVar1;
	
	iVar1 = trapid;
	object[i]._oVar2 = 0x31;
	object[i]._oVar1 = (short)iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetRndObjLoc__FiRiT1(int randarea /*$s2*/, int *xx /*$s4*/, int *yy /*$s5*/)
 // line 641, offset 0x80157288
	/* begin block 1 */
		// Start line: 642
		// Start offset: 0x80157288
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s0
	// 		unsigned char failed; // $v1

		/* begin block 1.1 */
			// Start line: 642
			// Start offset: 0x80157288

			/* begin block 1.1.1 */
				// Start line: 646
				// Start offset: 0x801572B8
				// Variables:
			// 		int tries; // $s3
			/* end block 1.1.1 */
			// End offset: 0x80157364
			// End Line: 657
		/* end block 1.1 */
		// End offset: 0x80157364
		// End Line: 657
	/* end block 1 */
	// End offset: 0x80157364
	// End Line: 657

	/* begin block 2 */
		// Start line: 1393
	/* end block 2 */
	// End Line: 1394

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetRndObjLoc__FiRiT1(int randarea,int *xx,int *yy)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (randarea != 0) {
		iVar6 = 1;
		do {
			if ((1000 < iVar6) && (1 < randarea)) {
				randarea = randarea + -1;
			}
			lVar3 = ENG_random__Fl(0x60);
			*xx = lVar3;
			lVar3 = ENG_random__Fl(0x60);
			bVar1 = false;
			iVar5 = 0;
			*yy = lVar3;
			if (0 < randarea) {
				do {
					iVar4 = 0;
					if (0 < randarea) {
						do {
							if (bVar1) break;
							uVar2 = RndLocOk__Fii(*xx + iVar5,*yy + iVar4);
							bVar1 = uVar2 == '\0';
							iVar4 = iVar4 + 1;
						} while (iVar4 < randarea);
					}
					iVar5 = iVar5 + 1;
				} while ((iVar5 < randarea) && (!bVar1));
			}
			iVar6 = iVar6 + 1;
		} while (bVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddMushPatch__Fv()
 // line 661, offset 0x8015738c
	/* begin block 1 */
		// Start line: 662
		// Start offset: 0x8015738C
		// Variables:
	// 		int x; // stack offset -16
	// 		int y; // stack offset -12

		/* begin block 1.1 */
			// Start line: 662
			// Start offset: 0x8015738C

			/* begin block 1.1.1 */
				// Start line: 665
				// Start offset: 0x801573A8
				// Variables:
			// 		int i; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8015746C
			// End Line: 672
		/* end block 1.1 */
		// End offset: 0x8015746C
		// End Line: 672
	/* end block 1 */
	// End offset: 0x8015746C
	// End Line: 672

	/* begin block 2 */
		// Start line: 1436
	/* end block 2 */
	// End Line: 1437

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddMushPatch__Fv(void)

{
	char cVar1;
	byte bVar2;
	int local_10;
	int local_c;
	
	cVar1 = objectavail;
	if (numobjects < 0x7f) {
		GetRndObjLoc__FiRiT1(5,&local_10,&local_c);
		bVar2 = ~cVar1;
		dung_map[(local_10 + 1) * 0x70 + local_c + 1].dObject = bVar2;
		dung_map[(local_10 + 2) * 0x70 + local_c + 1].dObject = bVar2;
		dung_map[(local_10 + 1) * 0x70 + local_c + 2].dObject = bVar2;
		AddObject__Fiii(0x5e,local_10 + 2,local_c + 2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSlainHero__Fv()
 // line 677, offset 0x80157480
	/* begin block 1 */
		// Start line: 678
		// Start offset: 0x80157480
		// Variables:
	// 		int x; // stack offset -16
	// 		int y; // stack offset -12
	/* end block 1 */
	// End offset: 0x801574B0
	// End Line: 682

	/* begin block 2 */
		// Start line: 1472
	/* end block 2 */
	// End Line: 1473

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSlainHero__Fv(void)

{
	int local_10;
	int local_c;
	
	GetRndObjLoc__FiRiT1(5,&local_10,&local_c);
	AddObject__Fiii(0x60,local_10 + 2,local_c + 2);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ RndLocOk__Fii(int xp /*$s1*/, int yp /*$s2*/)
 // line 685, offset 0x801574c0
	/* begin block 1 */
		// Start line: 686
		// Start offset: 0x801574C0
	/* end block 1 */
	// End offset: 0x801575BC
	// End Line: 699

	/* begin block 2 */
		// Start line: 1491
	/* end block 2 */
	// End Line: 1492

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar RndLocOk__Fii(int xp,int yp)

{
	bool bVar1;
	uchar uVar2;
	uchar uVar3;
	short sVar4;
	void *pvVar5;
	
	uVar2 = '\0';
	if (dung_map[xp * 0x70 + yp].dMonster == 0) {
		uVar3 = IsDplayer__Fii(xp,yp);
		uVar2 = '\0';
		if (((uVar3 == '\0') && (uVar2 = '\0', dung_map[xp * 0x70 + yp].dObject == '\0')) &&
			 (uVar2 = '\0', (dung_map[xp * 0x70 + yp].dFlags & 8U) == 0)) {
			pvVar5 = GetSOLID__Fii(xp,yp);
			uVar2 = '\0';
			if (pvVar5 == (void *)0x0) {
				uVar2 = '\x01';
				bVar1 = false;
				if (leveltype == '\x01') {
					sVar4 = GetDPiece__Fii(xp,yp);
					if (0x7e < sVar4) {
						sVar4 = GetDPiece__Fii(xp,yp);
						bVar1 = sVar4 < 0x90;
					}
					uVar2 = '\0';
					if (!bVar1) {
						uVar2 = '\x01';
					}
				}
			}
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TrapLocOk__Fii(int xp /*$a0*/, int yp /*$a1*/)
 // line 703, offset 0x801575d8
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x801575D8
	/* end block 1 */
	// End offset: 0x8015761C
	// End Line: 708

	/* begin block 2 */
		// Start line: 1529
	/* end block 2 */
	// End Line: 1530

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TrapLocOk__Fii(int xp,int yp)

{
	bool bVar1;
	void *pvVar2;
	
	bVar1 = false;
	if ((dung_map[xp * 0x70 + yp].dFlags & 8U) == 0) {
		pvVar2 = GetSOLID__Fii(xp,yp);
		bVar1 = pvVar2 == (void *)0x0;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitRndLocObj__Fiii(int min /*$s0*/, int max /*$a1*/, int objtype /*$fp*/)
 // line 726, offset 0x8015762c
	/* begin block 1 */
		// Start line: 727
		// Start offset: 0x8015762C
		// Variables:
	// 		int xp; // $s4
	// 		int yp; // $s5
	// 		int numobjs; // $s7

		/* begin block 1.1 */
			// Start line: 727
			// Start offset: 0x8015762C
			// Variables:
		// 		int i; // $s6
		/* end block 1.1 */
		// End offset: 0x80157778
		// End Line: 751
	/* end block 1 */
	// End offset: 0x80157778
	// End Line: 751

	/* begin block 2 */
		// Start line: 1576
	/* end block 2 */
	// End Line: 1577

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitRndLocObj__Fiii(int min,int max,int objtype)

{
	uchar uVar1;
	long lVar2;
	long lVar3;
	long lVar4;
	int yp;
	int xp;
	int xp_00;
	int xp_01;
	int yp_00;
	int iVar5;
	
	lVar2 = ENG_random__Fl(max - min);
	iVar5 = 0;
	if (0 < lVar2 + min) {
		do {
			do {
				do {
					do {
						lVar3 = ENG_random__Fl(0x40);
						lVar4 = ENG_random__Fl(0x40);
						xp_00 = lVar3 + 0xf;
						yp = lVar4 + 0xf;
						uVar1 = RndLocOk__Fii(xp_00,yp);
						xp_01 = lVar3 + 0x10;
						yp_00 = lVar4 + 0x10;
					} while (uVar1 == '\0');
					uVar1 = RndLocOk__Fii(xp_01,yp);
					xp = lVar3 + 0x11;
				} while ((((uVar1 == '\0') || (uVar1 = RndLocOk__Fii(xp,yp), uVar1 == '\0')) ||
								 (uVar1 = RndLocOk__Fii(xp_00,yp_00), uVar1 == '\0')) ||
								((uVar1 = RndLocOk__Fii(xp_01,yp_00), uVar1 == '\0' ||
								 (uVar1 = RndLocOk__Fii(xp,yp_00), uVar1 == '\0'))));
				yp = lVar4 + 0x11;
				uVar1 = RndLocOk__Fii(xp_00,yp);
			} while ((uVar1 == '\0') ||
							((uVar1 = RndLocOk__Fii(xp_01,yp), uVar1 == '\0' ||
							 (uVar1 = RndLocOk__Fii(xp,yp), uVar1 == '\0'))));
			AddObject__Fiii(objtype,xp_01,yp_00);
			iVar5 = iVar5 + 1;
		} while (iVar5 < lVar2 + min);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitRndLocBigObj__Fiii(int min /*$s0*/, int max /*$a1*/, int objtype /*$fp*/)
 // line 757, offset 0x801577ac
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x801577AC
		// Variables:
	// 		int xp; // $s2
	// 		int yp; // $s5
	// 		int numobjs; // $s7

		/* begin block 1.1 */
			// Start line: 758
			// Start offset: 0x801577AC
			// Variables:
		// 		int i; // $s6
		/* end block 1.1 */
		// End offset: 0x80157938
		// End Line: 788
	/* end block 1 */
	// End offset: 0x80157938
	// End Line: 788

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitRndLocBigObj__Fiii(int min,int max,int objtype)

{
	uchar uVar1;
	long lVar2;
	long lVar3;
	long lVar4;
	int yp;
	int xp;
	int xp_00;
	int xp_01;
	int yp_00;
	int iVar5;
	
	lVar2 = ENG_random__Fl(max - min);
	iVar5 = 0;
	if (0 < lVar2 + min) {
		do {
			do {
				do {
					do {
						do {
							lVar3 = ENG_random__Fl(0x40);
							lVar4 = ENG_random__Fl(0x40);
							xp_01 = lVar3 + 0xf;
							yp = lVar4 + 0xe;
							uVar1 = RndLocOk__Fii(xp_01,yp);
							xp_00 = lVar3 + 0x10;
							yp_00 = lVar4 + 0x10;
						} while (uVar1 == '\0');
						uVar1 = RndLocOk__Fii(xp_00,yp);
						xp = lVar3 + 0x11;
					} while ((uVar1 == '\0') || (uVar1 = RndLocOk__Fii(xp,yp), uVar1 == '\0'));
					yp = lVar4 + 0xf;
					uVar1 = RndLocOk__Fii(xp_01,yp);
				} while ((uVar1 == '\0') ||
								((((uVar1 = RndLocOk__Fii(xp_00,yp), uVar1 == '\0' ||
									 (uVar1 = RndLocOk__Fii(xp,yp), uVar1 == '\0')) ||
									(uVar1 = RndLocOk__Fii(xp_01,yp_00), uVar1 == '\0')) ||
								 ((uVar1 = RndLocOk__Fii(xp_00,yp_00), uVar1 == '\0' ||
									(uVar1 = RndLocOk__Fii(xp,yp_00), uVar1 == '\0'))))));
				yp = lVar4 + 0x11;
				uVar1 = RndLocOk__Fii(xp_01,yp);
			} while ((uVar1 == '\0') ||
							((uVar1 = RndLocOk__Fii(xp_00,yp), uVar1 == '\0' ||
							 (uVar1 = RndLocOk__Fii(xp,yp), uVar1 == '\0'))));
			AddObject__Fiii(objtype,xp_00,yp_00);
			iVar5 = iVar5 + 1;
		} while (iVar5 < lVar2 + min);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitRndLocObj5x5__Fiii(int min /*$s0*/, int max /*$a1*/, int objtype /*$fp*/)
 // line 792, offset 0x8015796c
	/* begin block 1 */
		// Start line: 793
		// Start offset: 0x8015796C
		// Variables:
	// 		int xp; // $s4
	// 		int yp; // $s2
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		int cnt; // $s5
	// 		unsigned char done; // $s3
	// 		int numobjs; // $s7

		/* begin block 1.1 */
			// Start line: 793
			// Start offset: 0x8015796C
			// Variables:
		// 		int i; // $s6
		/* end block 1.1 */
		// End offset: 0x80157A54
		// End Line: 818
	/* end block 1 */
	// End offset: 0x80157A54
	// End Line: 818

	/* begin block 2 */
		// Start line: 1728
	/* end block 2 */
	// End Line: 1729

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitRndLocObj5x5__Fiii(int min,int max,int objtype)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	long lVar4;
	long lVar5;
	int xp;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	lVar3 = ENG_random__Fl(max - min);
	iVar9 = 0;
	if (0 < lVar3 + min) {
		do {
			iVar8 = 0;
			while( true ) {
				bVar1 = true;
				lVar4 = ENG_random__Fl(0x40);
				lVar5 = ENG_random__Fl(0x40);
				iVar7 = -2;
				do {
					iVar6 = -2;
					xp = lVar4 + 0xe;
					do {
						uVar2 = RndLocOk__Fii(xp,lVar5 + 0x10 + iVar7);
						if (uVar2 == '\0') {
							bVar1 = false;
						}
						iVar6 = iVar6 + 1;
						xp = lVar4 + 0x10 + iVar6;
					} while (iVar6 < 3);
					iVar7 = iVar7 + 1;
				} while (iVar7 < 3);
				iVar8 = iVar8 + 1;
				if (bVar1) break;
				if (20000 < iVar8) {
					return;
				}
			}
			AddObject__Fiii(objtype,lVar4 + 0x10,lVar5 + 0x10);
			iVar9 = iVar9 + 1;
		} while (iVar9 < lVar3 + min);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMapObjects__FPUcii(unsigned char *pMap /*$s1*/, int startx /*$s5*/, int starty /*$s7*/)
 // line 823, offset 0x80157a88
	/* begin block 1 */
		// Start line: 824
		// Start offset: 0x80157A88
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	// 		int rw; // $s3
	// 		int rh; // $s4
	// 		unsigned char *lm; // $s1
	// 		unsigned char *h; // $a3
	// 		long mapoff; // $v0
	// 		int ot; // $v1
	// 		unsigned char fileload[56]; // stack offset -160
	// 		char filestr[32]; // stack offset -104
	/* end block 1 */
	// End offset: 0x80157CF8
	// End Line: 893

	/* begin block 2 */
		// Start line: 1794
	/* end block 2 */
	// End Line: 1795

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetMapObjects__FPUcii(uchar *pMap,int startx,int starty)

{
	byte bVar1;
	byte bVar2;
	char cVar3;
	undefined *puVar4;
	char *pcVar5;
	ObjDataStruct *pOVar6;
	int iVar7;
	int iVar8;
	byte *pbVar9;
	byte *pbVar10;
	int iVar11;
	int iVar12;
	char local_a0 [55];
	undefined local_69 [65];
	
	ClrAllObjects__Fv();
	iVar7 = 0x37;
	InitObjFlag = '\x01';
	puVar4 = local_69;
	do {
		*puVar4 = 0;
		iVar7 = iVar7 + -1;
		puVar4 = puVar4 + -1;
	} while (-1 < iVar7);
	if (AllObjects.oload != -1) {
		pOVar6 = &AllObjects;
		iVar7 = 0;
		cVar3 = AllObjects.oload;
		do {
			if ((cVar3 == '\x01') && ((uint)leveltype == (int)(&AllObjects.olvltype)[iVar7])) {
				local_a0[(int)(&AllObjects.ofindex)[iVar7]] = '\x01';
			}
			pOVar6 = pOVar6 + 1;
			cVar3 = pOVar6->oload;
			iVar7 = iVar7 + 0x12;
		} while (cVar3 != -1);
	}
	bVar1 = *pMap;
	bVar2 = pMap[2];
	iVar11 = (uint)bVar1 * 2;
	iVar12 = (uint)bVar2 * 2;
	iVar7 = 0;
	pbVar9 = pMap + 2 + (uint)bVar1 * (uint)bVar2 * 2 + 2 + iVar11 * iVar12 * 4;
	pbVar10 = pbVar9;
	if (bVar2 != 0) {
		do {
			iVar8 = 0;
			if (bVar1 != 0) {
				do {
					if (*pbVar10 != 0) {
						local_a0[(int)(&AllObjects)[ObjTypeConv[(uint)*pbVar10]].ofindex] = '\x01';
					}
					iVar8 = iVar8 + 1;
					pbVar10 = pbVar10 + 2;
				} while (iVar8 < iVar11);
			}
			iVar7 = iVar7 + 1;
		} while (iVar7 < iVar12);
	}
	iVar7 = 0;
	pcVar5 = local_a0;
	do {
		if (*pcVar5 != '\0') {
			(&ObjFileList)[numobjfiles] = (char)iVar7;
			numobjfiles = numobjfiles + 1;
		}
		iVar7 = iVar7 + 1;
		pcVar5 = pcVar5 + 1;
	} while (iVar7 < 0x38);
	iVar7 = 0;
	if (bVar2 != 0) {
		do {
			iVar8 = 0;
			if (bVar1 != 0) {
				do {
					if (*pbVar9 != 0) {
						AddObject__Fiii(ObjTypeConv[(uint)*pbVar9],iVar8 + startx + 0x10,iVar7 + starty + 0x10);
					}
					iVar8 = iVar8 + 1;
					pbVar9 = pbVar9 + 2;
				} while (iVar8 < iVar11);
			}
			iVar7 = iVar7 + 1;
		} while (iVar7 < iVar12);
	}
	InitObjFlag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrAllObjects__Fv()
 // line 896, offset 0x80157d28
	/* begin block 1 */
		// Start line: 897
		// Start offset: 0x80157D28
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x80157E10
	// End Line: 920

	/* begin block 2 */
		// Start line: 1954
	/* end block 2 */
	// End Line: 1955

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrAllObjects__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	do {
		(&object[0]._ox)[iVar1] = '\0';
		(&object[0]._oy)[iVar1] = '\0';
		*(undefined2 *)((int)&object[0]._oAnimDelay + iVar1) = 0;
		*(undefined2 *)((int)&object[0]._oAnimCnt + iVar1) = 0;
		*(undefined2 *)((int)&object[0]._oAnimLen + iVar1) = 0;
		(&object[0]._oAnimFrame)[iVar1] = '\0';
		(&object[0]._oDelFlag)[iVar1] = '\0';
		*(undefined2 *)((int)&object[0]._oVar1 + iVar1) = 0;
		*(undefined2 *)((int)&object[0]._oVar2 + iVar1) = 0;
		*(undefined2 *)((int)&object[0]._oVar3 + iVar1) = 0;
		*(undefined2 *)((int)&object[0]._oVar4 + iVar1) = 0;
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x2c;
	} while (iVar2 < 0x7f);
	numobjects = 0;
	iVar1 = 0;
	do {
		(&objectavail)[iVar1] = (char)iVar1;
		(&objectactive)[iVar1] = '\0';
		iVar1 = iVar1 + 1;
	} while (iVar1 < 0x7f);
	trapid = 1;
	trapdir = 0;
	leverid = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddTortures__Fv()
 // line 924, offset 0x80157e18
	/* begin block 1 */
		// Start line: 925
		// Start offset: 0x80157E18
		// Variables:
	// 		int yp; // $s3
	// 		int xp; // $s2
	/* end block 1 */
	// End offset: 0x80157F64
	// End Line: 946

	/* begin block 2 */
		// Start line: 2007
	/* end block 2 */
	// End Line: 2008

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddTortures__Fv(void)

{
	short sVar1;
	int ox;
	int ox_00;
	int x;
	int y;
	
	y = 0;
	do {
		x = 0;
		do {
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x16f) {
				AddObject__Fiii(0x24,x,y + 1);
				ox = x + 2;
				AddObject__Fiii(0x26,ox,y + -1);
				AddObject__Fiii(0x25,x,y + 3);
				ox_00 = x + 4;
				AddObject__Fiii(0x27,ox_00,y + -1);
				AddObject__Fiii(0x28,x,y + 5);
				AddObject__Fiii(0x1d,x + 1,y + 3);
				AddObject__Fiii(0x1e,ox_00,y + 5);
				AddObject__Fiii(0x1f,ox,y);
				AddObject__Fiii(0x20,x + 3,y + 2);
				AddObject__Fiii(0x21,ox,y + 4);
				AddObject__Fiii(0x22,ox,y + 1);
				AddObject__Fiii(0x23,ox_00,y + 2);
			}
			x = x + 1;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddCandles__Fv()
 // line 952, offset 0x80157f98
	/* begin block 1 */
		// Start line: 953
		// Start offset: 0x80157F98
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s1
	/* end block 1 */
	// End offset: 0x80158004
	// End Line: 962

	/* begin block 2 */
		// Start line: 2066
	/* end block 2 */
	// End Line: 2067

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddCandles__Fv(void)

{
	int iVar1;
	int iVar2;
	int oy;
	
	iVar2 = quests[13]._qty;
	iVar1 = quests[13]._qtx;
	oy = quests[13]._qty + 1;
	AddObject__Fiii(0x57,quests[13]._qtx + -2,oy);
	AddObject__Fiii(0x57,iVar1 + 3,oy);
	AddObject__Fiii(0x57,iVar1 + -1,iVar2 + 2);
	AddObject__Fiii(0x57,iVar1 + 2,iVar2 + 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddBookLever__Fiiiiiiiii(int lx1 /*$a0*/, int ly1 /*$a1*/, int lx2 /*$a2*/, int ly2 /*$a3*/, int x1 /*stack 16*/, int y1 /*stack 20*/, int x2 /*stack 24*/, int y2 /*stack 28*/, int msg /*stack 32*/)
 // line 1086, offset 0x80158020
	/* begin block 1 */
		// Start line: 1087
		// Start offset: 0x80158020
		// Variables:
	// 		int xp; // $s4
	// 		int yp; // $s3
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		int cnt; // $s5
	// 		unsigned char done; // $s2
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x801581E8
	// End Line: 1136

	/* begin block 2 */
		// Start line: 2343
	/* end block 2 */
	// End Line: 2344

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddBookLever__Fiiiiiiiii(int lx1,int ly1,int lx2,int ly2,int x1,int y1,int x2,int y2,int msg)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	long lVar4;
	int xp;
	int iVar5;
	int iVar6;
	int oy;
	int ox;
	int i;
	
	i = 0;
	while( true ) {
		bVar1 = true;
		lVar3 = ENG_random__Fl(0x40);
		ox = lVar3 + 0x10;
		lVar4 = ENG_random__Fl(0x40);
		oy = lVar4 + 0x10;
		iVar6 = -2;
		do {
			iVar5 = -2;
			xp = lVar3 + 0xe;
			do {
				uVar2 = RndLocOk__Fii(xp,oy + iVar6);
				if (uVar2 == '\0') {
					bVar1 = false;
				}
				iVar5 = iVar5 + 1;
				xp = ox + iVar5;
			} while (iVar5 < 3);
			iVar6 = iVar6 + 1;
		} while (iVar6 < 3);
		i = i + 1;
		if (bVar1) break;
		if (20000 < i) {
			return;
		}
	}
	uVar2 = QuestStatus__Fi(8);
	if (uVar2 != '\0') {
		AddObject__Fiii(0x47,ox,oy);
	}
	uVar2 = QuestStatus__Fi(0xb);
	if (uVar2 != '\0') {
		AddObject__Fiii(0x58,ox,oy);
	}
	uVar2 = QuestStatus__Fi(9);
	if (uVar2 != '\0') {
		ox = setpc_x * 2 + 0x19;
		oy = setpc_y * 2 + 0x28;
		AddObject__Fiii(0x48,ox,oy);
	}
	i = (int)dung_map[ox * 0x70 + oy].dObject + -1;
	SetObjMapRange__Fiiiiii(i,x1,y1,x2,y2,leverid);
	SetBookMsg__Fii(i,msg);
	object[i]._oVar6 = 2;
	leverid = leverid + 1;
	object[i]._oAnimFrame = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitRndBarrels__Fv()
 // line 1141, offset 0x80158214
	/* begin block 1 */
		// Start line: 1142
		// Start offset: 0x80158214
		// Variables:
	// 		int xp; // $s3
	// 		int yp; // $s2
	// 		int o; // $a0
	// 		int c; // $s4
	// 		int t; // $s1
	// 		int numobjs; // $fp

		/* begin block 1.1 */
			// Start line: 1142
			// Start offset: 0x80158214
			// Variables:
		// 		int i; // $s5

			/* begin block 1.1.1 */
				// Start line: 1149
				// Start offset: 0x80158260
				// Variables:
			// 		unsigned char found; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80158364
			// End Line: 1179
		/* end block 1.1 */
		// End offset: 0x8015836C
		// End Line: 1182
	/* end block 1 */
	// End offset: 0x8015836C
	// End Line: 1182

	/* begin block 2 */
		// Start line: 2483
	/* end block 2 */
	// End Line: 2484

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitRndBarrels__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	long lVar4;
	int ot;
	int ot_00;
	int yp;
	int xp;
	int iVar5;
	
	lVar3 = ENG_random__Fl(5);
	iVar5 = 0;
	do {
		if (lVar3 + 3 <= iVar5) {
			return;
		}
		do {
			lVar4 = ENG_random__Fl(0x40);
			xp = lVar4 + 0x10;
			lVar4 = ENG_random__Fl(0x40);
			yp = lVar4 + 0x10;
			uVar2 = RndLocOk__Fii(xp,yp);
		} while (uVar2 == '\0');
		lVar4 = ENG_random__Fl(4);
		ot = 0x3a;
		if (lVar4 != 0) {
			ot = 0x39;
		}
		AddObject__Fiii(ot,xp,yp);
		ot = 1;
		uVar2 = '\x01';
		while ((lVar4 = ENG_random__Fl(ot >> 1), lVar4 == 0 && (ot_00 = 0, uVar2 != '\0'))) {
			uVar2 = '\0';
			bVar1 = true;
			do {
				if (!bVar1) break;
				lVar4 = ENG_random__Fl(8);
				ot_00 = ot_00 + 1;
				xp = xp + bxadd[lVar4];
				yp = yp + byadd[lVar4];
				uVar2 = RndLocOk__Fii(xp,yp);
				bVar1 = ot_00 < 3;
			} while (uVar2 == '\0');
			if (uVar2 != '\0') {
				lVar4 = ENG_random__Fl(5);
				ot_00 = 0x3a;
				if (lVar4 != 0) {
					ot_00 = 0x39;
				}
				AddObject__Fiii(ot_00,xp,yp);
				ot = ot + 1;
			}
		}
		iVar5 = iVar5 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL1Objs__Fiiii(int x1 /*$s5*/, int y1 /*$a1*/, int x2 /*$s3*/, int y2 /*$s4*/)
 // line 1188, offset 0x801583a0
	/* begin block 1 */
		// Start line: 1189
		// Start offset: 0x801583A0
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s2
	// 		int pn; // $s0
	/* end block 1 */
	// End offset: 0x80158484
	// End Line: 1201

	/* begin block 2 */
		// Start line: 2588
	/* end block 2 */
	// End Line: 2589

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL1Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	short sVar1;
	int x;
	
	if (y1 < y2) {
		do {
			x = x1;
			if (x1 < x2) {
				do {
					sVar1 = GetDPiece__Fii(x,y1);
					if (sVar1 == 0x10e) {
						AddObject__Fiii(0,x,y1);
					}
					if (((sVar1 == 0x2c) || (sVar1 == 0x33)) || (sVar1 == 0xd6)) {
						AddObject__Fiii(1,x,y1);
					}
					if ((sVar1 == 0x2e) || (sVar1 == 0x38)) {
						AddObject__Fiii(2,x,y1);
					}
					x = x + 1;
				} while (x < x2);
			}
			y1 = y1 + 1;
		} while (y1 < y2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL2Objs__Fiiii(int x1 /*$s7*/, int y1 /*$a1*/, int x2 /*$s3*/, int y2 /*$s4*/)
 // line 1207, offset 0x801584ac
	/* begin block 1 */
		// Start line: 1208
		// Start offset: 0x801584AC
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s2
	// 		int pn; // $s0
	/* end block 1 */
	// End offset: 0x80158578
	// End Line: 1219

	/* begin block 2 */
		// Start line: 2632
	/* end block 2 */
	// End Line: 2633

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL2Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	short sVar1;
	int x;
	
	if (y1 < y2) {
		do {
			x = x1;
			if (x1 < x2) {
				do {
					sVar1 = GetDPiece__Fii(x,y1);
					if ((sVar1 == 0xd) || (sVar1 == 0x21d)) {
						AddObject__Fiii(0x2a,x,y1);
					}
					if ((sVar1 == 0x11) || (sVar1 == 0x21e)) {
						AddObject__Fiii(0x2b,x,y1);
					}
					x = x + 1;
				} while (x < x2);
			}
			y1 = y1 + 1;
		} while (y1 < y2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL3Objs__Fiiii(int x1 /*$s7*/, int y1 /*$a1*/, int x2 /*$s3*/, int y2 /*$s4*/)
 // line 1225, offset 0x801585a8
	/* begin block 1 */
		// Start line: 1226
		// Start offset: 0x801585A8
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	// 		int pn; // $s1
	/* end block 1 */
	// End offset: 0x80158658
	// End Line: 1237

	/* begin block 2 */
		// Start line: 2674
	/* end block 2 */
	// End Line: 2675

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL3Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	short sVar1;
	int x;
	
	if (y1 < y2) {
		do {
			x = x1;
			if (x1 < x2) {
				do {
					sVar1 = GetDPiece__Fii(x,y1);
					if (sVar1 == 0x213) {
						AddObject__Fiii(0x4a,x,y1);
					}
					if (sVar1 == 0x216) {
						AddObject__Fiii(0x4b,x,y1);
					}
					x = x + 1;
				} while (x < x2);
			}
			y1 = y1 + 1;
		} while (y1 < y2);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WallTrapLocOk__Fii(int xp /*$a0*/, int yp /*$a1*/)
 // line 1242, offset 0x80158688
	/* begin block 1 */
		// Start line: 1243
		// Start offset: 0x80158688
	/* end block 1 */
	// End offset: 0x801586D0
	// End Line: 1247

	/* begin block 2 */
		// Start line: 2714
	/* end block 2 */
	// End Line: 2715

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WallTrapLocOk__Fii(int xp,int yp)

{
	bool bVar1;
	undefined *puVar2;
	
	bVar1 = false;
	if ((dung_map[xp * 0x70 + yp].dFlags & 8U) == 0) {
		puVar2 = (undefined *)GetTRAP__Fii(xp,yp);
		bVar1 = puVar2 == &DAT_00000001;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ TorchLocOK__Fii(int xp /*$a0*/, int yp /*$a1*/)
 // line 1253, offset 0x801586e0
	/* begin block 1 */
		// Start line: 1254
		// Start offset: 0x801586E0
	/* end block 1 */
	// End offset: 0x80158708
	// End Line: 1256

	/* begin block 2 */
		// Start line: 2738
	/* end block 2 */
	// End Line: 2739

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar TorchLocOK__Fii(int xp,int yp)

{
	return (uchar)((dung_map[xp * 0x70 + yp].dFlags & 8U) == 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL2Torches__Fv()
 // line 1261, offset 0x80158710
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x80158710
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	// 		int pn; // $s2
	/* end block 1 */
	// End offset: 0x8015887C
	// End Line: 1277

	/* begin block 2 */
		// Start line: 2753
	/* end block 2 */
	// End Line: 2754

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL2Torches__Fv(void)

{
	uchar uVar1;
	short sVar2;
	long lVar3;
	int xp;
	int yp;
	int iVar4;
	int iVar5;
	int iVar6;
	
	yp = 0;
	iVar6 = -8;
	do {
		xp = 0;
		iVar4 = -0x380;
		iVar5 = iVar6;
		do {
			uVar1 = TorchLocOK__Fii(xp,yp);
			if (uVar1 != '\0') {
				sVar2 = GetDPiece__Fii(xp,yp);
				if ((sVar2 == 1) && (lVar3 = ENG_random__Fl(3), lVar3 == 0)) {
					AddObject__Fiii(0x2e,xp,yp);
				}
				if ((sVar2 == 5) && (lVar3 = ENG_random__Fl(3), lVar3 == 0)) {
					AddObject__Fiii(0x2f,xp,yp);
				}
				if (((sVar2 == 0x25) && (lVar3 = ENG_random__Fl(10), lVar3 == 0)) &&
					 ((&dung_map[yp].dObject)[iVar4] == '\0')) {
					AddObject__Fiii(0x2c,xp + -1,yp);
				}
				if (((sVar2 == 0x29) && (lVar3 = ENG_random__Fl(10), lVar3 == 0)) &&
					 ((&dung_map[0].dObject)[iVar5] == '\0')) {
					AddObject__Fiii(0x2d,xp,yp + -1);
				}
			}
			iVar5 = iVar5 + 0x380;
			xp = xp + 1;
			iVar4 = iVar4 + 0x380;
		} while (xp < 0x60);
		yp = yp + 1;
		iVar6 = iVar6 + 8;
	} while (yp < 0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddObjTraps__Fv()
 // line 1287, offset 0x801588ac
	/* begin block 1 */
		// Start line: 1288
		// Start offset: 0x801588AC
		// Variables:
	// 		int i; // $s2
	// 		int j; // $s3
	// 		int x; // $s0
	// 		int y; // $s1
	// 		int rndv; // $s5
	// 		char oi; // $s4
	/* end block 1 */
	// End offset: 0x80158B0C
	// End Line: 1358

	/* begin block 2 */
		// Start line: 2821
	/* end block 2 */
	// End Line: 2822

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddObjTraps__Fv(void)

{
	uchar uVar1;
	long lVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	int ot;
	int x;
	int y;
	int x_00;
	int y_00;
	uint uVar6;
	
	uVar6 = -(uint)(currlevel == '\x01') & 10;
	if (1 < currlevel) {
		uVar6 = 0xf;
	}
	if (4 < currlevel) {
		uVar6 = 0x14;
	}
	y_00 = 0;
	if (6 < currlevel) {
		uVar6 = 0x19;
	}
	do {
		x_00 = 0;
		do {
			if ((('\0' < dung_map[x_00 * 0x70 + y_00].dObject) &&
					(lVar2 = ENG_random__Fl(100), lVar2 < (int)uVar6)) &&
				 (iVar5 = (uint)(byte)dung_map[x_00 * 0x70 + y_00].dObject - 1,
				 (&AllObjects)[(int)object[iVar5 * 0x1000000 >> 0x18]._otype].oTrapFlag != '\0')) {
				lVar2 = ENG_random__Fl(2);
				x = x_00;
				y = y_00;
				if (lVar2 == 0) {
					do {
						x = x + -1;
						puVar4 = (undefined *)GetSOLID__Fii(x,y_00);
					} while (puVar4 != &DAT_00000001);
					uVar1 = WallTrapLocOk__Fii(x,y_00);
					iVar3 = x_00 - x;
					if (uVar1 != '\0') {
						ot = 0x35;
						y = y_00;
joined_r0x80158a50:
						if (1 < iVar3) {
							AddObject__Fiii(ot,x,y);
							x = (int)(((uint)(byte)dung_map[x * 0x70 + y].dObject - 1) * 0x1000000) >> 0x18;
							object[x]._oVar1 = (short)x_00;
							object[x]._oVar2 = (short)y_00;
							object[(int)(char)iVar5]._oTrapFlag = '\x01';
						}
					}
				}
				else {
					do {
						y = y + -1;
						puVar4 = (undefined *)GetSOLID__Fii(x_00,y);
					} while (puVar4 != &DAT_00000001);
					uVar1 = WallTrapLocOk__Fii(x_00,y);
					iVar3 = y_00 - y;
					if (uVar1 != '\0') {
						ot = 0x36;
						x = x_00;
						goto joined_r0x80158a50;
					}
				}
			}
			x_00 = x_00 + 1;
		} while (x_00 < 0x60);
		y_00 = y_00 + 1;
		if (0x5f < y_00) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddChestTraps__Fv()
 // line 1364, offset 0x80158b34
	/* begin block 1 */
		// Start line: 1365
		// Start offset: 0x80158B34
		// Variables:
	// 		int i; // $s2
	// 		int j; // $s3
	/* end block 1 */
	// End offset: 0x80158C50
	// End Line: 1384

	/* begin block 2 */
		// Start line: 2977
	/* end block 2 */
	// End Line: 2978

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddChestTraps__Fv(void)

{
	char cVar1;
	int iVar2;
	long v;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	do {
		iVar4 = 0;
		iVar3 = iVar5 << 3;
		do {
			if ((((0 < (int)(&dung_map[0].dObject)[iVar3]) &&
					 (iVar2 = ((int)(&dung_map[0].dObject)[iVar3] + -1) * 0x1000000 >> 0x18,
					 (uint)(byte)object[iVar2]._otype - 5 < 3)) && (object[iVar2]._oTrapFlag == '\0')) &&
				 (v = ENG_random__Fl(100), v < 10)) {
				cVar1 = object[iVar2]._otype;
				object[iVar2]._oTrapFlag = '\x01';
				object[iVar2]._otype = cVar1 + '?';
				v = 3;
				if (leveltype == '\x02') {
					v = 2;
				}
				v = ENG_random__Fl(v);
				object[iVar2]._oVar4 = (short)v;
			}
			iVar4 = iVar4 + 1;
			iVar3 = iVar3 + 0x380;
		} while (iVar4 < 0x60);
		iVar5 = iVar5 + 1;
	} while (iVar5 < 0x60);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadMapObjects__FPUciiiiiii(unsigned char *pMap /*$a0*/, int startx /*$fp*/, int starty /*$a2*/, int x1 /*$s7*/, int y1 /*stack 16*/, int w /*stack 20*/, int h /*stack 24*/, int leveridx /*stack 28*/)
 // line 1398, offset 0x80158c70
	/* begin block 1 */
		// Start line: 1399
		// Start offset: 0x80158C70
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s4
	// 		int rw; // $s5
	// 		int rh; // $s6
	// 		int ox; // $s0
	// 		int oy; // $s3
	// 		unsigned char *lm; // $s2
	// 		long mapoff; // $v0
	/* end block 1 */
	// End offset: 0x80158DA8
	// End Line: 1435

	/* begin block 2 */
		// Start line: 3050
	/* end block 2 */
	// End Line: 3051

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadMapObjects__FPUciiiiiii
							 (uchar *pMap,int startx,int starty,int x1,int y1,int w,int h,int leveridx)

{
	byte bVar1;
	byte bVar2;
	int ox;
	int iVar3;
	byte *pbVar4;
	int oy;
	int iVar5;
	int iVar6;
	int iVar7;
	
	InitObjFlag = '\x01';
	bVar1 = *pMap;
	bVar2 = pMap[2];
	iVar6 = (uint)bVar1 * 2;
	iVar7 = (uint)bVar2 * 2;
	iVar5 = 0;
	pbVar4 = pMap + 2 + (uint)bVar1 * (uint)bVar2 * 2 + 2 + iVar6 * iVar7 * 4;
	if (bVar2 != 0) {
		do {
			iVar3 = 0;
			if (bVar1 != 0) {
				oy = iVar5 + starty + 0x10;
				do {
					if (*pbVar4 != 0) {
						ox = iVar3 + startx + 0x10;
						AddObject__Fiii(ObjTypeConv[(uint)*pbVar4],ox,oy);
						ox = ObjIndex__Fii(ox,oy);
						SetObjMapRange__Fiiiiii(ox,x1,y1,x1 + w,y1 + h,leveridx);
					}
					iVar3 = iVar3 + 1;
					pbVar4 = pbVar4 + 2;
				} while (iVar3 < iVar6);
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < iVar7);
	}
	InitObjFlag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddDiabObjs__Fv()
 // line 1438, offset 0x80158ddc
	/* begin block 1 */
		// Start line: 1439
		// Start offset: 0x80158DDC
		// Variables:
	// 		unsigned char *lpSetPiece; // $s1

		/* begin block 1.1 */
			// Start line: 1439
			// Start offset: 0x80158DDC
		/* end block 1.1 */
		// End offset: 0x80158DDC
		// End Line: 1439

		/* begin block 1.2 */
			// Start line: 1439
			// Start offset: 0x80158DDC
		/* end block 1.2 */
		// End offset: 0x80158DDC
		// End Line: 1439

		/* begin block 1.3 */
			// Start line: 1439
			// Start offset: 0x80158DDC
		/* end block 1.3 */
		// End offset: 0x80158F18
		// End Line: 1459
	/* end block 1 */
	// End offset: 0x80158F18
	// End Line: 1459

	/* begin block 2 */
		// Start line: 3166
	/* end block 2 */
	// End Line: 3167

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddDiabObjs__Fv(void)

{
	uchar *pMap;
	
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab1.DUN",(ulong *)0x0);
	LoadMapObjects__FPUciiiiiii(pMap,diabquad1x << 1,diabquad1y << 1,diabquad2x,diabquad2y,0xb,0xc,1);
	mem_free_dbg__FPv(pMap);
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab2a.DUN",(ulong *)0x0);
	LoadMapObjects__FPUciiiiiii(pMap,diabquad2x << 1,diabquad2y << 1,diabquad3x,diabquad3y,0xb,0xb,2);
	mem_free_dbg__FPv(pMap);
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab3a.DUN",(ulong *)0x0);
	LoadMapObjects__FPUciiiiiii(pMap,diabquad3x << 1,diabquad3y << 1,diabquad4x,diabquad4y,9,9,3);
	mem_free_dbg__FPv(pMap);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddStoryBooks__Fv()
 // line 1465, offset 0x80158f30
	/* begin block 1 */
		// Start line: 1466
		// Start offset: 0x80158F30
		// Variables:
	// 		int xp; // $s3
	// 		int yp; // $s4
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		int cnt; // $s5
	// 		unsigned char done; // $s2
	/* end block 1 */
	// End offset: 0x80159050
	// End Line: 1490

	/* begin block 2 */
		// Start line: 3228
	/* end block 2 */
	// End Line: 3229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddStoryBooks__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	long lVar4;
	int xp;
	int iVar5;
	int iVar6;
	int oy;
	int iVar7;
	
	iVar7 = 0;
	while( true ) {
		bVar1 = true;
		lVar3 = ENG_random__Fl(0x40);
		lVar4 = ENG_random__Fl(0x40);
		oy = lVar4 + 0x10;
		iVar6 = -2;
		do {
			iVar5 = -3;
			xp = lVar3 + 0xd;
			do {
				uVar2 = RndLocOk__Fii(xp,oy + iVar6);
				if (uVar2 == '\0') {
					bVar1 = false;
				}
				iVar5 = iVar5 + 1;
				xp = lVar3 + 0x10 + iVar5;
			} while (iVar5 < 4);
			iVar6 = iVar6 + 1;
		} while (iVar6 < 3);
		iVar7 = iVar7 + 1;
		if (bVar1) break;
		if (20000 < iVar7) {
			return;
		}
	}
	AddObject__Fiii(0x56,lVar3 + 0x10,oy);
	AddObject__Fiii(0x57,lVar3 + 0xe,lVar4 + 0x11);
	AddObject__Fiii(0x57,lVar3 + 0xe,oy);
	AddObject__Fiii(0x57,lVar3 + 0xf,lVar4 + 0xf);
	AddObject__Fiii(0x57,lVar3 + 0x11,lVar4 + 0xf);
	AddObject__Fiii(0x57,lVar3 + 0x12,oy);
	AddObject__Fiii(0x57,lVar3 + 0x12,lVar4 + 0x11);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddHookedBodies__Fi(int freq /*stack -64*/)
 // line 1496, offset 0x80159078
	/* begin block 1 */
		// Start line: 1497
		// Start offset: 0x80159078
		// Variables:
	// 		int i; // $s7
	// 		int j; // stack offset -56
	// 		int ii; // $s3
	// 		int jj; // $s1
	/* end block 1 */
	// End offset: 0x80159238
	// End Line: 1531

	/* begin block 2 */
		// Start line: 3294
	/* end block 2 */
	// End Line: 3295

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddHookedBodies__Fi(int freq)

{
	ushort uVar1;
	bool bVar2;
	uchar uVar3;
	long lVar4;
	uint uVar5;
	int ot;
	int ox;
	int iVar6;
	ushort *puVar7;
	int x;
	int iVar8;
	int local_38;
	int iStack48;
	
	local_38 = 0;
	do {
		x = 0;
		puVar7 = dungeon;
		iVar6 = 0x11;
		iVar8 = -0x7ff1bedc;
		iStack48 = 0;
		do {
			if ((uint)puVar7[local_38] - 1 < 2) {
				bVar2 = false;
				lVar4 = ENG_random__Fl(freq);
				if (lVar4 == 0) {
					uVar3 = SkipThemeRoom__Fii(x,local_38);
					bVar2 = uVar3 != '\0';
				}
				if (bVar2) {
					uVar1 = puVar7[local_38];
					if ((uVar1 == 1) && (*(short *)(local_38 * 2 + iVar8) == 6)) {
						uVar5 = ENG_random__Fl(3);
						if (uVar5 == (uint)uVar1) {
							ot = 0x25;
							ox = iVar6;
							goto LAB_801591f4;
						}
						if ((int)uVar5 < 2) {
							ot = 0x24;
							ox = iVar6;
							if (uVar5 == 0) goto LAB_801591f4;
						}
						else {
							ot = 0x28;
							ox = iVar6;
							if (uVar5 == 2) goto LAB_801591f4;
						}
					}
					else {
						if ((puVar7[local_38] == 2) && ((puVar7 + local_38)[1] == 6)) {
							lVar4 = ENG_random__Fl(2);
							if (lVar4 == 0) {
								ot = 0x26;
								ox = iStack48 + 0x10;
							}
							else {
								ot = 0x27;
								ox = iStack48 + 0x10;
								if (lVar4 != 1) goto LAB_80159200;
							}
LAB_801591f4:
							AddObject__Fiii(ot,ox,local_38 * 2 + 0x10);
						}
					}
				}
			}
LAB_80159200:
			puVar7 = puVar7 + 0x30;
			iVar6 = iVar6 + 2;
			iVar8 = iVar8 + 0x60;
			x = x + 1;
			iStack48 = iStack48 + 2;
		} while (x < 0x28);
		local_38 = local_38 + 1;
		if (0x27 < local_38) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddL4Goodies__Fv()
 // line 1536, offset 0x8015926c
	/* begin block 1 */
		// Start line: 1537
		// Start offset: 0x8015926C
	/* end block 1 */
	// End offset: 0x8015930C
	// End Line: 1547

	/* begin block 2 */
		// Start line: 3375
	/* end block 2 */
	// End Line: 3376

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddL4Goodies__Fv(void)

{
	AddHookedBodies__Fi(6);
	InitRndLocObj__Fiii(2,6,0x1d);
	InitRndLocObj__Fiii(2,6,0x1e);
	InitRndLocObj__Fiii(2,6,0x1f);
	InitRndLocObj__Fiii(2,6,0x20);
	InitRndLocObj__Fiii(2,6,0x21);
	InitRndLocObj__Fiii(2,6,0x22);
	InitRndLocObj__Fiii(2,6,0x23);
	InitRndLocObj__Fiii(2,6,0x43);
	InitRndLocObj__Fiii(1,3,0x50);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLazStand__Fv()
 // line 1552, offset 0x8015931c
	/* begin block 1 */
		// Start line: 1553
		// Start offset: 0x8015931C
		// Variables:
	// 		int xp; // $s3
	// 		int yp; // $s4
	// 		int xx; // $s0
	// 		int yy; // $s1
	// 		int cnt; // $s5
	// 		unsigned char done; // $s2
	/* end block 1 */
	// End offset: 0x80159480
	// End Line: 1586

	/* begin block 2 */
		// Start line: 3407
	/* end block 2 */
	// End Line: 3408

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddLazStand__Fv(void)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	long lVar4;
	int xp;
	int iVar5;
	int iVar6;
	int ox;
	int oy;
	int oy_00;
	
	oy_00 = 0;
	while( true ) {
		bVar1 = true;
		lVar3 = ENG_random__Fl(0x40);
		ox = lVar3 + 0x10;
		lVar4 = ENG_random__Fl(0x40);
		oy = lVar4 + 0x10;
		iVar6 = -3;
		do {
			iVar5 = -2;
			xp = lVar3 + 0xe;
			do {
				uVar2 = RndLocOk__Fii(xp,oy + iVar6);
				if (uVar2 == '\0') {
					bVar1 = false;
				}
				iVar5 = iVar5 + 1;
				xp = ox + iVar5;
			} while (iVar5 < 4);
			iVar6 = iVar6 + 1;
		} while (iVar6 < 4);
		oy_00 = oy_00 + 1;
		if (bVar1) break;
		if (10000 < oy_00) {
			InitRndLocObj__Fiii(1,1,0x5f);
			return;
		}
	}
	AddObject__Fiii(0x5f,ox,oy);
	oy_00 = lVar4 + 0x12;
	AddObject__Fiii(0x1e,ox,oy_00);
	AddObject__Fiii(0x57,lVar3 + 0x11,oy_00);
	AddObject__Fiii(0x1f,lVar3 + 0x12,oy_00);
	oy_00 = lVar4 + 0xe;
	AddObject__Fiii(0x21,ox,oy_00);
	AddObject__Fiii(0x57,lVar3 + 0x11,oy_00);
	AddObject__Fiii(0x22,lVar3 + 0x12,oy_00);
	oy_00 = lVar3 + 0xf;
	AddObject__Fiii(0x57,oy_00,lVar4 + 0xf);
	AddObject__Fiii(0x23,oy_00,oy);
	AddObject__Fiii(0x57,oy_00,lVar4 + 0x11);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ saveplrpos__Fv()
 // line 1593, offset 0x801594a8
	/* begin block 1 */
		// Start line: 1594
		// Start offset: 0x801594A8
	/* end block 1 */
	// End offset: 0x8015955C
	// End Line: 1612

	/* begin block 2 */
		// Start line: 3496
	/* end block 2 */
	// End Line: 3497

/* WARNING: Unknown calling convention yet parameter storage is locked */

void saveplrpos__Fv(void)

{
	plr[0]._pVar6 = plr[1]._py;
	plr[0]._pVar5 = plr[1]._px;
	plr[0]._pVar4 = plr[0]._py;
	plr[0]._pVar3 = plr[0]._px;
	if (plr[0].plractive != '\0') {
		plr[0]._py = 0;
		plr[0]._px = 0;
	}
	if (plr[1].plractive != '\0') {
		plr[1]._py = 0;
		plr[1]._px = 0;
	}
	plr[0]._pVar1 = (short)ViewX;
	plr[0]._pVar2 = (short)ViewY;
	ViewX = 0;
	ViewY = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ restoreplrpos__Fv()
 // line 1615, offset 0x80159564
	/* begin block 1 */
		// Start line: 1616
		// Start offset: 0x80159564
	/* end block 1 */
	// End offset: 0x801595C4
	// End Line: 1622

	/* begin block 2 */
		// Start line: 3544
	/* end block 2 */
	// End Line: 3545

/* WARNING: Unknown calling convention yet parameter storage is locked */

void restoreplrpos__Fv(void)

{
	ViewX = (int)plr[0]._pVar1;
	ViewY = (int)plr[0]._pVar2;
	PlacePlayer__FiiiUc(0,(int)plr[0]._pVar3,(int)plr[0]._pVar4,'\0');
	PlacePlayer__FiiiUc(1,(int)plr[0]._pVar5,(int)plr[0]._pVar6,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitObjects__Fv()
 // line 1625, offset 0x801595d4
	/* begin block 1 */
		// Start line: 1626
		// Start offset: 0x801595D4
		// Variables:
	// 		int textdef; // $s1
	// 		unsigned char *setp; // $s0

		/* begin block 1.1 */
			// Start line: 1663
			// Start offset: 0x801597AC

			/* begin block 1.1.1 */
				// Start line: 1663
				// Start offset: 0x801597C0

				/* begin block 1.1.1.1 */
					// Start line: 1669
					// Start offset: 0x80159814

					/* begin block 1.1.1.1.1 */
						// Start line: 1671
						// Start offset: 0x80159844

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1675
							// Start offset: 0x801598B0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015994C
						// End Line: 1679
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015994C
					// End Line: 1679
				/* end block 1.1.1.1 */
				// End offset: 0x8015994C
				// End Line: 1679
			/* end block 1.1.1 */
			// End offset: 0x80159A48
			// End Line: 1689
		/* end block 1.1 */
		// End offset: 0x80159A48
		// End Line: 1689

		/* begin block 1.2 */
			// Start line: 1697
			// Start offset: 0x80159A78

			/* begin block 1.2.1 */
				// Start line: 1697
				// Start offset: 0x80159A8C

				/* begin block 1.2.1.1 */
					// Start line: 1698
					// Start offset: 0x80159A8C

					/* begin block 1.2.1.1.1 */
						// Start line: 1698
						// Start offset: 0x80159AA0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1702
							// Start offset: 0x80159B0C
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80159BA0
						// End Line: 1706
					/* end block 1.2.1.1.1 */
					// End offset: 0x80159BA0
					// End Line: 1706
				/* end block 1.2.1.1 */
				// End offset: 0x80159BA0
				// End Line: 1706
			/* end block 1.2.1 */
			// End offset: 0x80159BE0
			// End Line: 1712
		/* end block 1.2 */
		// End offset: 0x80159BE0
		// End Line: 1712
	/* end block 1 */
	// End offset: 0x80159C5C
	// End Line: 1722

	/* begin block 2 */
		// Start line: 3570
	/* end block 2 */
	// End Line: 3571

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitObjects__Fv(void)

{
	char cVar1;
	uchar uVar2;
	uchar *pMap;
	int msg;
	
	msg = 0;
	ClrAllObjects__Fv();
	if (currlevel == '\x10') {
		AddDiabObjs__Fv();
	}
	else {
		saveplrpos__Fv();
		InitObjFlag = '\x01';
		GetRndSeed__Fv();
		if ((currlevel == '\t') && (gbMaxPlayers == '\x01')) {
			AddSlainHero__Fv();
		}
		uVar2 = QuestStatus__Fi(1);
		if (((uVar2 != '\0') && (currlevel == quests[1]._qlevel)) && (gbMaxPlayers != '\x02')) {
			AddMushPatch__Fv();
		}
		if (currlevel == '\x04') {
			AddStoryBooks__Fv();
		}
		if (currlevel == '\b') {
			AddStoryBooks__Fv();
		}
		if (currlevel == '\f') {
			AddStoryBooks__Fv();
		}
		if (leveltype == '\x01') {
			uVar2 = QuestStatus__Fi(6);
			if (uVar2 != '\0') {
				AddTortures__Fv();
			}
			uVar2 = QuestStatus__Fi(0xd);
			if (uVar2 != '\0') {
				AddCandles__Fv();
			}
			uVar2 = QuestStatus__Fi(7);
			if (uVar2 != '\0') {
				AddObject__Fiii(0x61,setpc_x * 2 + 0x1a,setpc_y * 2 + 0x13);
			}
			InitRndLocBigObj__Fiii(10,0xf,0x30);
			AddL1Objs__Fiiii(0,0,0x60,0x60);
			InitRndBarrels__Fv();
		}
		if (leveltype == '\x02') {
			uVar2 = QuestStatus__Fi(0);
			if ((uVar2 != '\0') && (gbMaxPlayers != '\x02')) {
				InitRndLocObj5x5__Fiii(1,1,0x17);
			}
			uVar2 = QuestStatus__Fi(0xe);
			if (uVar2 != '\0') {
				InitRndLocObj5x5__Fiii(1,1,0x29);
			}
			AddL2Objs__Fiiii(0,0,0x60,0x60);
			AddL2Torches__Fv();
			uVar2 = QuestStatus__Fi(8);
			if (uVar2 != '\0') {
				cVar1 = plr[myplr]._pClass;
				if (cVar1 == '\0') {
					msg = 0xed;
				}
				else {
					if (cVar1 == '\x01') {
						msg = 0xf5;
					}
					else {
						if (cVar1 == '\x02') {
							msg = 0xf1;
						}
					}
				}
				quests[8]._qmsg = (uchar)msg;
				AddBookLever__Fiiiiiiiii
									(0,0,0x60,0x60,setpc_x,setpc_y,setpc_x + setpc_w + 1,setpc_y + setpc_h + 1,msg);
				pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L2Data\\Blind2.DUN",(ulong *)0x0);
				LoadMapObjs__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
				mem_free_dbg__FPv(pMap);
			}
			uVar2 = QuestStatus__Fi(9);
			if (uVar2 != '\0') {
				cVar1 = plr[myplr]._pClass;
				if (cVar1 == '\0') {
					msg = 0xec;
				}
				else {
					if (cVar1 == '\x01') {
						msg = 0xf4;
					}
					else {
						if (cVar1 == '\x02') {
							msg = 0xf0;
						}
					}
				}
				quests[9]._qmsg = (uchar)msg;
				AddBookLever__Fiiiiiiiii(0,0,0x60,0x60,setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7,msg);
				AddObject__Fiii(0x49,setpc_x * 2 + 0x19,setpc_y * 2 + 0x20);
			}
			InitRndBarrels__Fv();
		}
		if (leveltype == '\x03') {
			AddL3Objs__Fiiii(0,0,0x60,0x60);
			InitRndBarrels__Fv();
		}
		if (leveltype == '\x04') {
			uVar2 = QuestStatus__Fi(0xb);
			if (uVar2 != '\0') {
				cVar1 = plr[myplr]._pClass;
				if (cVar1 == '\0') {
					msg = 0xee;
				}
				else {
					if (cVar1 == '\x01') {
						msg = 0xf6;
					}
					else {
						if (cVar1 == '\x02') {
							msg = 0xf2;
						}
					}
				}
				quests[11]._qmsg = (uchar)msg;
				AddBookLever__Fiiiiiiiii
									(0,0,0x60,0x60,setpc_x,setpc_y,setpc_x + setpc_w,setpc_y + setpc_h,msg);
				pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L4Data\\Warlord.DUN",(ulong *)0x0);
				LoadMapObjs__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
				mem_free_dbg__FPv(pMap);
			}
			uVar2 = QuestStatus__Fi(0xf);
			if ((uVar2 != '\0') && (gbMaxPlayers == '\x01')) {
				AddLazStand__Fv();
			}
			InitRndBarrels__Fv();
			AddL4Goodies__Fv();
		}
		InitRndLocObj__Fiii(5,10,5);
		InitRndLocObj__Fiii(3,6,6);
		InitRndLocObj__Fiii(1,5,7);
		if (leveltype != '\x04') {
			AddObjTraps__Fv();
		}
		if (1 < leveltype) {
			AddChestTraps__Fv();
		}
		restoreplrpos__Fv();
		InitObjFlag = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PreObjObjAddSwitch__Fiiii(int ot /*$v1*/, int ox /*$a1*/, int oy /*$a2*/, int oi /*$s0*/)
 // line 1726, offset 0x80159c74
	/* begin block 1 */
		// Start line: 1727
		// Start offset: 0x80159C74
	/* end block 1 */
	// End offset: 0x80159EC8
	// End Line: 1855

	/* begin block 2 */
		// Start line: 3776
	/* end block 2 */
	// End Line: 3777

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PreObjObjAddSwitch__Fiiii(int ot,int ox,int oy,int oi)

{
	switch(ot) {
	case 1:
	case 2:
		AddL1Door__Fiiii(oi,ox,oy,ot);
		break;
	case 3:
	case 8:
	case 9:
	case 0x2c:
	case 0x2d:
	case 0x2e:
	case 0x2f:
	case 0x41:
	case 0x57:
		AddObjLight__Fii(oi,0x3f3);
		break;
	case 5:
	case 6:
	case 7:
	case 0x44:
	case 0x45:
	case 0x46:
		AddChest__Fii(oi,ot);
		break;
	case 0x19:
		AddVilebook__Fi(oi);
		break;
	case 0x1a:
	case 0x5b:
		AddBrnCross__Fi(oi);
	case 0:
		AddObjLight__Fii(oi,0x1b8);
		break;
	case 0x1e:
		AddTorturedBody__Fi(oi);
		break;
	case 0x29:
		AddSCambBook__Fi(oi);
		break;
	case 0x2a:
	case 0x2b:
		AddL2Door__Fiiii(oi,ox,oy,ot);
		break;
	case 0x30:
		AddSarc__Fi(oi);
		break;
	case 0x31:
		AddFlameTrap__Fi(oi);
		break;
	case 0x32:
		AddFlameLvr__Fi(oi);
		break;
	case 0x33:
		object[oi]._oAnimFrame = '\x01';
		break;
	case 0x35:
	case 0x36:
		AddTrap__Fii(oi,ot);
		break;
	case 0x39:
	case 0x3a:
		AddBarrel__Fii(oi,ot);
		break;
	case 0x3b:
	case 0x3c:
		AddShrine__Fi(oi);
		break;
	case 0x3d:
	case 0x40:
		AddBookstand__Fi(oi);
		break;
	case 0x3e:
	case 0x3f:
		AddBookcase__Fi(oi);
		break;
	case 0x42:
		AddBloodFtn__Fi(oi);
		break;
	case 0x43:
		AddDecap__Fi(oi);
		break;
	case 0x49:
		AddPedistal__Fi(oi);
		break;
	case 0x4a:
	case 0x4b:
		AddL3Door__Fiiii(oi,ox,oy,ot);
		break;
	case 0x4c:
		AddPurifyingFountain__Fi(oi);
		break;
	case 0x4d:
	case 0x59:
		AddArmorStand__Fi(oi);
		break;
	case 0x4f:
		AddGoatShrine__Fi(oi);
		break;
	case 0x50:
		AddCauldron__Fi(oi);
		break;
	case 0x51:
		AddMurkyFountain__Fi(oi);
		break;
	case 0x52:
		AddTearFountain__Fi(oi);
		break;
	case 0x54:
	case 0x55:
		AddMagicCircle__Fi(oi);
		break;
	case 0x56:
		AddStoryBook__Fi(oi);
		break;
	case 0x5a:
	case 0x5c:
		AddWeaponRack__Fi(oi);
	}
	return;
}





