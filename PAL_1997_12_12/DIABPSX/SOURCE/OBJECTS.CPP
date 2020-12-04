#include "THISDUST.H"
#include "OBJECTS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PostAddL1Door__Fiiii(int i /*$t1*/, int x /*$a1*/, int y /*$a2*/, int ot /*$a3*/)
 // line 256, offset 0x8004c634
	/* begin block 1 */
		// Start line: 257
		// Start offset: 0x8004C634
	/* end block 1 */
	// End offset: 0x8004C764
	// End Line: 271

	/* begin block 2 */
		// Start line: 512
	/* end block 2 */
	// End Line: 513

void PostAddL1Door__Fiiii(int i,int x,int y,int ot)

{
	short sVar1;
	
	object[i]._oDoorFlag = '\x01';
	object[i]._oAnimFlag = '\0';
	if (ot == 1) {
		object[i]._oVar1 = dung_map[x * 0x6c + y].dPiece;
		sVar1 = dung_map[x * 0x6c + y + -1].dPiece;
	}
	else {
		object[i]._oVar1 = dung_map[x * 0x6c + y].dPiece;
		sVar1 = dung_map[(x + -1) * 0x6c + y].dPiece;
	}
	object[i]._oVar2 = sVar1;
	object[i]._oVar4 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddL2Door__Fiiii(int i /*$s2*/, int x /*$s0*/, int y /*$s1*/, int ot /*$a3*/)
 // line 277, offset 0x8004c76c
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x8004C76C
	/* end block 1 */
	// End offset: 0x8004C894
	// End Line: 296

	/* begin block 2 */
		// Start line: 559
	/* end block 2 */
	// End Line: 560

void PostAddL2Door__Fiiii(int i,int x,int y,int ot)

{
	object[i]._oDoorFlag = '\x01';
	if (ot == 0x2a) {
		ObjSetMicro__Fiii(x,y,0x21a);
		(&dungeon)[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x96;
		object[i]._oAnimFrame = '\x01';
	}
	else {
		ObjSetMicro__Fiii(x,y,0x21c);
		(&dungeon)[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x97;
		object[i]._oAnimFrame = '\x02';
	}
	object[i]._oVar4 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddArmorStand__Fi(int i /*$s0*/)
 // line 302, offset 0x8004c8b8
	/* begin block 1 */
		// Start line: 303
		// Start offset: 0x8004C8B8
	/* end block 1 */
	// End offset: 0x8004C92C
	// End Line: 311

	/* begin block 2 */
		// Start line: 620
	/* end block 2 */
	// End Line: 621

void PostAddArmorStand__Fi(int i)

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
// unsigned char /*$ra*/ PostTorchLocOK__Fii(int xp /*$a0*/, int yp /*$a1*/)
 // line 317, offset 0x8004c940
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x8004C940
	/* end block 1 */
	// End offset: 0x8004C978
	// End Line: 320

	/* begin block 2 */
		// Start line: 651
	/* end block 2 */
	// End Line: 652

uchar PostTorchLocOK__Fii(int xp,int yp)

{
	return (uchar)((dung_map[xp * 0x6c + yp].dFlags & 8U) == 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddObjLight__Fii(int i /*$a0*/, int r /*$a2*/)
 // line 346, offset 0x8004c980
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x8004C980
	/* end block 1 */
	// End offset: 0x8004CA10
	// End Line: 358

	/* begin block 2 */
		// Start line: 708
	/* end block 2 */
	// End Line: 709

void PostAddObjLight__Fii(int i,int r)

{
	int iVar1;
	
	if (InitObjFlag == '\0') {
		object[i]._oVar1 = 0;
	}
	else {
		iVar1 = AddLight__Fiii((int)object[i]._ox,(int)object[i]._oy,r);
		object[i]._olid = (short)iVar1;
		object[i]._oVar1 = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostObjObjAddSwitch__Fiiii(int ot /*$v1*/, int ox /*$a1*/, int oy /*$a2*/, int oi /*$a0*/)
 // line 365, offset 0x8004ca24
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x8004CA24
	/* end block 1 */
	// End offset: 0x8004CAC8
	// End Line: 389

	/* begin block 2 */
		// Start line: 748
	/* end block 2 */
	// End Line: 749

void PostObjObjAddSwitch__Fiiii(int ot,int ox,int oy,int oi)

{
	switch(ot) {
	case 0:
		PostAddObjLight__Fii(oi,(int)light_level[(uint)leveltype] + 0x435);
		break;
	case 1:
	case 2:
		PostAddL1Door__Fiiii(oi,ox,oy,ot);
		break;
	case 0x2a:
	case 0x2b:
		PostAddL2Door__Fiiii(oi,ox,oy,ot);
		break;
	case 0x2c:
	case 0x2d:
	case 0x2e:
	case 0x2f:
		PostAddObjLight__Fii(oi,(int)light_level[(uint)leveltype] + 0x432);
		break;
	case 0x4d:
	case 0x59:
		PostAddArmorStand__Fi(oi);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitObjectGFX__Fv()
 // line 510, offset 0x8004cad8
	/* begin block 1 */
		// Start line: 511
		// Start offset: 0x8004CAD8
		// Variables:
	// 		unsigned char fileload[56]; // stack offset -120
	// 		int i; // $v1
	// 		int t; // $a1

		/* begin block 1.1 */
			// Start line: 541
			// Start offset: 0x8004CC78

			/* begin block 1.1.1 */
				// Start line: 541
				// Start offset: 0x8004CC88

				/* begin block 1.1.1.1 */
					// Start line: 543
					// Start offset: 0x8004CC94

					/* begin block 1.1.1.1.1 */
						// Start line: 544
						// Start offset: 0x8004CCA4
						// Variables:
					// 		char filestr[32]; // stack offset -64
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004CCC4
					// End Line: 550
				/* end block 1.1.1.1 */
				// End offset: 0x8004CCC4
				// End Line: 550
			/* end block 1.1.1 */
			// End offset: 0x8004CCC4
			// End Line: 550
		/* end block 1.1 */
		// End offset: 0x8004CCD0
		// End Line: 552
	/* end block 1 */
	// End offset: 0x8004CCD0
	// End Line: 552

	/* begin block 2 */
		// Start line: 1038
	/* end block 2 */
	// End Line: 1039

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitObjectGFX__Fv(void)

{
	char cVar1;
	uchar uVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	ObjDataStruct *pOVar7;
	char local_78 [96];
	
	memset(local_78,0,0x38);
	if (AllObjects.oload != -1) {
		pOVar7 = &AllObjects;
		iVar6 = 0;
		cVar1 = AllObjects.oload;
		do {
			if (((cVar1 == '\x01') && ((int)(&AllObjects.ominlvl)[iVar6] <= (int)(uint)currlevel)) &&
				 ((int)(uint)currlevel <= (int)(&AllObjects.omaxlvl)[iVar6])) {
				local_78[(int)(&AllObjects.ofindex)[iVar6]] = '\x01';
			}
			if (((&AllObjects.otheme)[iVar6] != -1) && (iVar5 = 0, 0 < numthemes)) {
				iVar3 = 0;
				do {
					if ((&theme.ttype)[iVar3] == (&AllObjects.otheme)[iVar6]) {
						local_78[(int)(&AllObjects.ofindex)[iVar6]] = '\x01';
					}
					iVar5 = iVar5 + 1;
					iVar3 = iVar3 + 8;
				} while (iVar5 < numthemes);
			}
			if (((int)(&AllObjects.oquest)[iVar6] != -1) &&
				 (uVar2 = QuestStatus__Fi((int)(&AllObjects.oquest)[iVar6]), uVar2 != '\0')) {
				local_78[(int)(&AllObjects.ofindex)[iVar6]] = '\x01';
			}
			pOVar7 = pOVar7 + 1;
			cVar1 = pOVar7->oload;
			iVar6 = iVar6 + 0x12;
		} while (cVar1 != -1);
	}
	iVar6 = 0;
	pcVar4 = local_78;
	while (iVar6 < 0x38) {
		if (*pcVar4 != '\0') {
			(&ObjFileList)[numobjfiles] = (char)iVar6;
			numobjfiles = numobjfiles + 1;
		}
		pcVar4 = pcVar4 + 1;
		iVar6 = iVar6 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeObjectGFX__Fv()
 // line 556, offset 0x8004ccf4
	/* begin block 1 */
		// Start line: 557
		// Start offset: 0x8004CCF4
	/* end block 1 */
	// End offset: 0x8004CCF8
	// End Line: 561

	/* begin block 2 */
		// Start line: 1138
	/* end block 2 */
	// End Line: 1139

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeObjectGFX__Fv(void)

{
	numobjfiles = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteObject__Fii(int oi /*$a0*/, int i /*$a2*/)
 // line 564, offset 0x8004cd00
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x8004CD00
		// Variables:
	// 		int ox; // $a1
	// 		int oy; // $a1
	/* end block 1 */
	// End offset: 0x8004CDB0
	// End Line: 576

	/* begin block 2 */
		// Start line: 1150
	/* end block 2 */
	// End Line: 1151

void DeleteObject__Fii(int oi,int i)

{
	uchar *puVar1;
	int iVar2;
	
	dung_map[(int)object[oi]._ox * 0x6c + (int)object[oi]._oy].dObject = '\0';
	*(undefined *)(-0x7ff2171d - numobjects) = (char)oi;
	iVar2 = numobjects + -1;
	if ((0 < iVar2) && (i != iVar2)) {
		puVar1 = &object[0x7e]._oDoorFlag + numobjects;
		numobjects = iVar2;
		objectactive[i] = *puVar1;
		iVar2 = numobjects;
	}
	numobjects = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupObject__Fiiii(int i /*$s2*/, int x /*$a1*/, int y /*$a2*/, int ot /*$s3*/)
 // line 583, offset 0x8004cdb8
	/* begin block 1 */
		// Start line: 584
		// Start offset: 0x8004CDB8
		// Variables:
	// 		int ai; // $a0
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x8004D01C
	// End Line: 618

	/* begin block 2 */
		// Start line: 1190
	/* end block 2 */
	// End Line: 1191

void SetupObject__Fiiii(int i,int x,int y,int ot)

{
	char *pcVar1;
	uchar uVar2;
	char cVar3;
	long lVar4;
	int iVar5;
	
	object[i]._otype = (char)ot;
	object[i]._ox = (char)x;
	object[i]._oy = (char)y;
	if (ObjFileList != (&AllObjects)[ot].ofindex) {
		iVar5 = 1;
		do {
			pcVar1 = &ObjFileList + iVar5;
			iVar5 = iVar5 + 1;
		} while (*pcVar1 != (&AllObjects)[ot].ofindex);
	}
	uVar2 = (&AllObjects)[ot].oAnimFlag;
	object[i]._oAnimFlag = uVar2;
	if (uVar2 == '\0') {
		object[i]._oAnimDelay = 1000;
		object[i]._oAnimCnt = 0;
		object[i]._oAnimLen = (&AllObjects)[ot].oAnimLen;
		cVar3 = (char)(&AllObjects)[ot].oAnimDelay;
	}
	else {
		object[i]._oAnimDelay = (&AllObjects)[ot].oAnimDelay;
		lVar4 = random__Fil(0x92,(int)(&AllObjects)[ot].oAnimDelay);
		object[i]._oAnimCnt = (short)lVar4;
		object[i]._oAnimLen = (&AllObjects)[ot].oAnimLen;
		lVar4 = random__Fil(0x92,(int)(&AllObjects)[ot].oAnimLen + -1);
		cVar3 = (char)lVar4 + '\x01';
	}
	object[i]._oAnimFrame = cVar3;
	object[i]._oSolidFlag = (&AllObjects)[ot].oSolidFlag;
	object[i]._oMissFlag = (&AllObjects)[ot].oMissFlag;
	uVar2 = (&AllObjects)[ot].oLightFlag;
	object[i]._oDelFlag = '\0';
	object[i]._oLight = uVar2;
	object[i]._oBreak = (&AllObjects)[ot].oBreak;
	cVar3 = (&AllObjects)[ot].oSelFlag;
	object[i]._oPreFlag = '\0';
	object[i]._oTrapFlag = '\0';
	object[i]._oDoorFlag = '\0';
	object[i]._oSelFlag = cVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetObjMapRange__Fiiiiii(int i /*$a0*/, int x1 /*$a1*/, int y1 /*$a2*/, int x2 /*$a3*/, int y2 /*stack 16*/, int v /*stack 20*/)
 // line 624, offset 0x8004d03c
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x8004D03C
	/* end block 1 */
	// End offset: 0x8004D094
	// End Line: 631

	/* begin block 2 */
		// Start line: 1282
	/* end block 2 */
	// End Line: 1283

void SetObjMapRange__Fiiiiii(int i,int x1,int y1,int x2,int y2,int v)

{
	object[i]._oVar1 = (short)x1;
	object[i]._oVar2 = (short)y1;
	object[i]._oVar3 = (short)x2;
	object[i]._oVar4 = (short)y2;
	object[i]._oVar8 = (short)v;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBookMsg__Fii(int i /*$a0*/, int msg /*$a1*/)
 // line 637, offset 0x8004d09c
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x8004D09C
	/* end block 1 */
	// End offset: 0x8004D0BC
	// End Line: 640

	/* begin block 2 */
		// Start line: 1310
	/* end block 2 */
	// End Line: 1311

void SetBookMsg__Fii(int i,int msg)

{
	object[i]._oVar7 = (short)msg;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddObject__Fiii(int ot /*$s3*/, int ox /*$s1*/, int oy /*$s2*/)
 // line 663, offset 0x8004d0c4
	/* begin block 1 */
		// Start line: 664
		// Start offset: 0x8004D0C4
		// Variables:
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x8004D1B0
	// End Line: 701

	/* begin block 2 */
		// Start line: 1374
	/* end block 2 */
	// End Line: 1375

void AddObject__Fiii(int ot,int ox,int oy)

{
	char cVar1;
	long lVar2;
	int i;
	
	lVar2 = numobjects;
	cVar1 = objectavail[0];
	if (numobjects < 0x7f) {
		i = (int)objectavail[0];
		objectavail[0] = objectavail[0x7e - numobjects];
		object[i]._olid = -1;
		objectactive[lVar2] = cVar1;
		dung_map[ox * 0x6c + oy].dObject = cVar1 + '\x01';
		SetupObject__Fiiii(i,ox,oy,ot);
		if (ot != 0x53) {
			FUN_80157ca0();
		}
		numobjects = numobjects + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddObject__Fiii(int ot /*$s3*/, int ox /*$s1*/, int oy /*$s2*/)
 // line 708, offset 0x8004d1d0
	/* begin block 1 */
		// Start line: 709
		// Start offset: 0x8004D1D0
		// Variables:
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x8004D2BC
	// End Line: 746

	/* begin block 2 */
		// Start line: 1491
	/* end block 2 */
	// End Line: 1492

void PostAddObject__Fiii(int ot,int ox,int oy)

{
	char cVar1;
	long lVar2;
	int i;
	
	lVar2 = numobjects;
	cVar1 = objectavail[0];
	if (numobjects < 0x7f) {
		i = (int)objectavail[0];
		objectavail[0] = objectavail[0x7e - numobjects];
		object[i]._olid = -1;
		objectactive[lVar2] = cVar1;
		dung_map[ox * 0x6c + oy].dObject = cVar1 + '\x01';
		SetupObject__Fiiii(i,ox,oy,ot);
		if (ot != 0x53) {
			PostObjObjAddSwitch__Fiiii(ot,ox,oy,i);
		}
		numobjects = numobjects + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Light__Fii(int i /*$s2*/, int lr /*$fp*/)
 // line 753, offset 0x8004d2dc
	/* begin block 1 */
		// Start line: 754
		// Start offset: 0x8004D2DC
		// Variables:
	// 		int ox; // $s7
	// 		int oy; // $s6
	// 		int dx; // $s0
	// 		int dy; // $v0
	// 		int p; // $s3
	// 		int tr; // $s5
	// 		unsigned char turnon; // $s4
	/* end block 1 */
	// End offset: 0x8004D4B8
	// End Line: 780

	/* begin block 2 */
		// Start line: 1594
	/* end block 2 */
	// End Line: 1595

void Obj_Light__Fii(int i,int lr)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (object[i]._oVar1 != -1) {
		iVar8 = (lr & 0xfU) + 4;
		cVar1 = object[i]._ox;
		cVar2 = object[i]._oy;
		bVar3 = false;
		if (lightflag == 0) {
			iVar7 = 0;
			iVar6 = 0;
			do {
				if (((&plr[0].plractive)[iVar6] != '\0') &&
					 ((uint)currlevel == *(uint *)((int)&plr[0].plrlevel + iVar6))) {
					iVar4 = abs((int)*(short *)((int)&plr[0]._px + iVar6) - (int)cVar1);
					iVar5 = abs((int)*(short *)((int)&plr[0]._py + iVar6) - (int)cVar2);
					if ((iVar4 < iVar8) && (iVar5 < iVar8)) {
						bVar3 = true;
					}
				}
				iVar7 = iVar7 + 1;
				iVar6 = iVar6 + 0x23a8;
			} while ((iVar7 < 2) && (!bVar3));
		}
		if (bVar3) {
			if (object[i]._oVar1 == 0) {
				iVar8 = AddLight__Fiii((int)cVar1,(int)cVar2,lr);
				object[i]._olid = (short)iVar8;
			}
			object[i]._oVar1 = 1;
		}
		else {
			if (object[i]._oVar1 == 1) {
				AddUnLight__Fi((int)object[i]._olid);
			}
			object[i]._oVar1 = 0;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Circle__Fi(int i /*$a0*/)
 // line 787, offset 0x8004d4ec
	/* begin block 1 */
		// Start line: 788
		// Start offset: 0x8004D4EC
		// Variables:
	// 		int px; // $v1
	// 		int py; // $v0
	// 		int ox; // $a2
	// 		int oy; // $a3

		/* begin block 1.1 */
			// Start line: 788
			// Start offset: 0x8004D4EC

			/* begin block 1.1.1 */
				// Start line: 797
				// Start offset: 0x8004D578

				/* begin block 1.1.1.1 */
					// Start line: 803
					// Start offset: 0x8004D650

					/* begin block 1.1.1.1.1 */
						// Start line: 803
						// Start offset: 0x8004D68C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004D6EC
					// End Line: 812
				/* end block 1.1.1.1 */
				// End offset: 0x8004D6EC
				// End Line: 812
			/* end block 1.1.1 */
			// End offset: 0x8004D6EC
			// End Line: 812
		/* end block 1.1 */
		// End offset: 0x8004D7FC
		// End Line: 831
	/* end block 1 */
	// End offset: 0x8004D7FC
	// End Line: 831

	/* begin block 2 */
		// Start line: 1674
	/* end block 2 */
	// End Line: 1675

void Obj_Circle__Fi(int i)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	int iVar5;
	char cVar6;
	int iVar7;
	int iVar8;
	
	iVar7 = (int)object[i]._ox;
	iVar8 = (int)object[i]._oy;
	if (((int)plr[myplr]._px == iVar7) && ((int)plr[myplr]._py == iVar8)) {
		cVar6 = object[i]._otype;
		if (cVar6 == 'T') {
			object[i]._oAnimFrame = '\x02';
			cVar6 = object[i]._otype;
		}
		if (cVar6 == 'U') {
			object[i]._oAnimFrame = '\x04';
		}
		if ((iVar7 == 0x2d) && (iVar8 == 0x2f)) {
			object[i]._oVar6 = 2;
		}
		else {
			iVar5 = i << 1;
			if ((iVar7 == 0x1a) && (iVar5 = i * 2, iVar8 == 0x2e)) {
				object[i]._oVar6 = 1;
			}
			else {
				(&object[0]._oVar6)[i * 6 + iVar5 * 8] = 0;
			}
		}
		if (((iVar7 == 0x23) && (iVar8 == 0x24)) && (object[i]._oVar5 == 3)) {
			sVar1 = object[i]._oVar1;
			sVar2 = object[i]._oVar2;
			sVar3 = object[i]._oVar3;
			sVar4 = object[i]._oVar4;
			object[i]._oVar6 = 4;
			ObjChangeMapResync__Fiiii((int)sVar1,(int)sVar2,(int)sVar3,(int)sVar4);
			if (QuestStruct_800e34b8._qactive == '\x02') {
				QuestStruct_800e34b8._qvar1 = '\x04';
			}
			AddMissile__Fiiiiiiciii
								((int)plr[myplr]._px,(int)plr[myplr]._py,0x23,0x2e,(int)plr[myplr]._pdir,3,0,myplr,0
								 ,0);
			sgbMouseDown = '\0';
			ClrPlrPath__Fi(myplr);
			StartStand__Fii(myplr,0);
		}
	}
	else {
		cVar6 = object[i]._otype;
		if (cVar6 == 'T') {
			object[i]._oAnimFrame = '\x01';
			cVar6 = object[i]._otype;
		}
		if (cVar6 == 'U') {
			object[i]._oAnimFrame = '\x03';
		}
		object[i]._oVar6 = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_StopAnim__Fi(int i /*$a0*/)
 // line 837, offset 0x8004d810
	/* begin block 1 */
		// Start line: 838
		// Start offset: 0x8004D810
	/* end block 1 */
	// End offset: 0x8004D86C
	// End Line: 843

	/* begin block 2 */
		// Start line: 1788
	/* end block 2 */
	// End Line: 1789

void Obj_StopAnim__Fi(int i)

{
	if ((int)object[i]._oAnimFrame == (int)object[i]._oAnimLen) {
		object[i]._oAnimCnt = 0;
		object[i]._oAnimDelay = 1000;
		object[i]._oAnimFlag = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawExpl__Fiiiiiccc(int sx /*$s3*/, int sy /*$s2*/, int f /*$s0*/, int ot /*stack -64*/, int scale /*stack 16*/, int rtint /*stack 20*/, int gtint /*stack 24*/, int btint /*stack 28*/)
 // line 873, offset 0x8004d874
	/* begin block 1 */
		// Start line: 874
		// Start offset: 0x8004D874
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		int PhysFrame; // $fp
	// 		struct TextDat *ObjDat; // $s5
	// 		int temp; // $a1
	// 		int bright; // $s1
	// 		int W; // $v0
	// 		int H; // $v0
	/* end block 1 */
	// End offset: 0x8004DB1C
	// End Line: 936

	/* begin block 2 */
		// Start line: 1858
	/* end block 2 */
	// End Line: 1859

void DrawExpl__Fiiiiiccc(int sx,int sy,int f,int ot,int scale,int rtint,int gtint,int btint)

{
	short sVar1;
	short sVar2;
	short sVar3;
	TextDat *this;
	int Frm;
	POLY_FT4 *pPVar4;
	short sVar5;
	short sVar6;
	int iVar7;
	uchar uVar8;
	int iVar9;
	
	this = GM_UseTexData__Fi(0xcc);
	iVar9 = 0xf0;
	Frm = GetNumOfFrames__7TextDatii(this,0,0);
	if (Frm <= f) {
		DBG_Error((char *)0x0,"source/OBJECTS.cpp",0x372);
	}
	if (f == 1) {
		Frm = scale;
		if (scale < 0) {
			Frm = scale + 3;
		}
		DrawSpinner__FiiUcUcUciiibiT8
							(sx,sy + -10,~(byte)rtint,~(byte)gtint,~(btint & 0xffU) & 0xff,Frm >> 2,0x40,4,
							 (void *)0x0,ot + 2,&DAT_00000001);
	}
	if (0x100 < scale) {
		iVar9 = 0x78;
	}
	sy = sy + f * -4;
	Frm = GetFrNum__7TextDatiiii(this,0,0,0,f);
	pPVar4 = PrintFt4__7TextDatiiiiii(this,Frm,sx,sy,0,ot + 1,0);
	iVar7 = f * 3 >> 2;
	if (iVar7 == 0) {
		iVar7 = 1;
	}
	sVar3 = (short)sx;
	sVar5 = (short)(((int)pPVar4->x1 - (int)pPVar4->x0) * scale >> 9);
	pPVar4->x1 = sVar3 + sVar5;
	pPVar4->x3 = sVar3 + sVar5;
	pPVar4->code = pPVar4->code & 0xfe | 2;
	pPVar4->x0 = sVar3 - sVar5;
	pPVar4->x2 = sVar3 - sVar5;
	sVar6 = (short)(((int)pPVar4->y2 - (int)pPVar4->y0) * scale >> 9);
	sVar1 = (short)sy;
	pPVar4->y0 = sVar1 - sVar6;
	pPVar4->y1 = sVar1 - sVar6;
	pPVar4->y2 = sVar1 + sVar6;
	pPVar4->y3 = sVar1 + sVar6;
	uVar8 = (uchar)(iVar9 / iVar7);
	pPVar4->r0 = uVar8;
	pPVar4->g0 = uVar8;
	pPVar4->b0 = uVar8;
	if (0x100 < scale) {
		pPVar4 = PrintFt4__7TextDatiiiiii(this,Frm,sx,sy + iVar7 * -4,0,ot + 1,0);
		sVar2 = (sVar3 + 1) - sVar5;
		sVar5 = sVar3 + 1 + sVar5;
		pPVar4->x0 = sVar2;
		pPVar4->x2 = sVar2;
		sVar3 = (sVar1 + 1) - sVar6;
		pPVar4->y0 = sVar3;
		pPVar4->y1 = sVar3;
		pPVar4->x1 = sVar5;
		pPVar4->x3 = sVar5;
		sVar6 = sVar1 + 1 + sVar6;
		pPVar4->r0 = uVar8;
		pPVar4->g0 = uVar8;
		pPVar4->b0 = uVar8;
		pPVar4->y2 = sVar6;
		pPVar4->y3 = sVar6;
		pPVar4->code = pPVar4->code & 0xfe | 2;
	}
	GM_FinishedUsing__FP7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj /*$a0*/, int ScrX /*$a1*/, int ScrY /*$t0*/, int ot /*$a3*/)
 // line 940, offset 0x8004db50
	/* begin block 1 */
		// Start line: 941
		// Start offset: 0x8004DB50
		// Variables:
	// 		int f; // $a2
	/* end block 1 */
	// End offset: 0x8004DBB0
	// End Line: 949

	/* begin block 2 */
		// Start line: 2081
	/* end block 2 */
	// End Line: 2082

void DrawObjExpl__FP12ObjectStructiii(ObjectStruct *obj,int ScrX,int ScrY,int ot)

{
	int f;
	
	f = (int)obj->_oAnimFrame + -1;
	if (f == (int)obj->_oAnimLen + -1) {
		if ((int)obj->_olid != 0) {
			AddUnLight__Fi((int)obj->_olid);
		}
	}
	else {
		DrawExpl__Fiiiiiccc(ScrX,ScrY,f,ot,0x200,0,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Door__Fi(int i /*$a0*/)
 // line 957, offset 0x8004dbc0
	/* begin block 1 */
		// Start line: 958
		// Start offset: 0x8004DBC0
		// Variables:
	// 		int dx; // $a1
	// 		int dy; // $a3
	// 		unsigned char dok; // $a2
	/* end block 1 */
	// End offset: 0x8004DD4C
	// End Line: 983

	/* begin block 2 */
		// Start line: 2121
	/* end block 2 */
	// End Line: 2122

void Obj_Door__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	short sVar4;
	short sVar5;
	int iVar6;
	int iVar7;
	
	if (object[i]._oVar4 == 0) {
		object[i]._oSelFlag = '\x03';
		object[i]._oMissFlag = '\0';
	}
	else {
		iVar7 = (int)object[i]._oy;
		iVar6 = (int)object[i]._ox;
		sVar4 = dung_map[iVar6 * 0x6c + iVar7].dMonster;
		cVar1 = dung_map[iVar6 * 0x6c + iVar7].dItem;
		cVar2 = dung_map[iVar6 * 0x6c + iVar7].dDead;
		cVar3 = dung_map[iVar6 * 0x6c + iVar7].dPlayer;
		object[i]._oSelFlag = '\x02';
		sVar5 = 1;
		if (cVar3 != '\0' || (cVar2 != '\0' || (cVar1 != '\0' || sVar4 != 0))) {
			sVar5 = 2;
		}
		object[i]._oVar4 = sVar5;
		object[i]._oMissFlag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Sarc__Fi(int i /*$a0*/)
 // line 990, offset 0x8004dd54
	/* begin block 1 */
		// Start line: 991
		// Start offset: 0x8004DD54
	/* end block 1 */
	// End offset: 0x8004DD98
	// End Line: 993

	/* begin block 2 */
		// Start line: 2186
	/* end block 2 */
	// End Line: 2187

void Obj_Sarc__Fi(int i)

{
	if ((int)object[i]._oAnimFrame == (int)object[i]._oAnimLen) {
		object[i]._oAnimFlag = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActivateTrapLine__Fii(int ttype /*$s3*/, int tid /*$s4*/)
 // line 999, offset 0x8004dda0
	/* begin block 1 */
		// Start line: 1000
		// Start offset: 0x8004DDA0
		// Variables:
	// 		int i; // $s1
	// 		int oi; // $v0
	/* end block 1 */
	// End offset: 0x8004DE8C
	// End Line: 1011

	/* begin block 2 */
		// Start line: 2205
	/* end block 2 */
	// End Line: 2206

void ActivateTrapLine__Fii(int ttype,int tid)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	if (0 < numobjects) {
		do {
			iVar3 = (int)objectactive[iVar5];
			if (((int)object[iVar3]._otype == ttype) && ((int)object[iVar3]._oVar1 == tid)) {
				cVar1 = object[iVar3]._ox;
				cVar2 = object[iVar3]._oy;
				object[iVar3]._oVar4 = 1;
				object[iVar3]._oAnimFlag = '\x01';
				object[iVar3]._oAnimDelay = 1;
				iVar4 = AddLight__Fiii((int)cVar1,(int)cVar2,0x21);
				object[iVar3]._olid = (short)iVar4;
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < numobjects);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_FlameTrap__Fi(int i /*$a0*/)
 // line 1017, offset 0x8004deb0
	/* begin block 1 */
		// Start line: 1018
		// Start offset: 0x8004DEB0
		// Variables:
	// 		int xp; // $a1
	// 		int yp; // $a2
	// 		int j; // $a3
	/* end block 1 */
	// End offset: 0x8004E170
	// End Line: 1059

	/* begin block 2 */
		// Start line: 2247
	/* end block 2 */
	// End Line: 2248

void Obj_FlameTrap__Fi(int i)

{
	short sVar1;
	bool bVar2;
	int iVar3;
	int r;
	
	if (object[i]._oVar2 == 0) {
		if (object[i]._oVar4 == 0) {
			r = 0;
			if (object[i]._oVar3 == 2) {
				iVar3 = ((int)object[i]._ox + -2) * 0x510 + (int)object[i]._oy * 0xc;
				do {
					if (((&dung_map[0].dPlayer)[iVar3] != '\0') ||
						 (*(short *)((int)&dung_map[0].dMonster + iVar3) != 0)) {
						object[i]._oVar4 = 1;
					}
					r = r + 1;
					iVar3 = iVar3 + 0x510;
				} while (r < 5);
			}
			else {
				iVar3 = ((int)object[i]._oy + -2) * 0xc + (int)object[i]._ox * 0x510;
				do {
					if (((&dung_map[0].dPlayer)[iVar3] != '\0') ||
						 (*(short *)((int)&dung_map[0].dMonster + iVar3) != 0)) {
						object[i]._oVar4 = 1;
					}
					r = r + 1;
					iVar3 = iVar3 + 0xc;
				} while (r < 5);
			}
			if (object[i]._oVar4 == 0) {
				return;
			}
			ActivateTrapLine__Fii((int)object[i]._otype,(int)object[i]._oVar1);
			return;
		}
		if ((int)object[i]._oAnimFrame == (int)object[i]._oAnimLen) {
			object[i]._oAnimFrame = '\v';
		}
		r = (int)object[i]._oAnimFrame;
		bVar2 = r < 6;
	}
	else {
		if (object[i]._oVar4 == 0) {
			return;
		}
		object[i]._oAnimFrame = object[i]._oAnimFrame + -1;
		r = (int)object[i]._oAnimFrame;
		bVar2 = r < 5;
		if (r == 1) {
			sVar1 = object[i]._olid;
			object[i]._oVar4 = 0;
			AddUnLight__Fi((int)sVar1);
			return;
		}
	}
	if (bVar2) {
		ChangeLightRadius__Fii((int)object[i]._olid,r);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Trap__Fi(int i /*$s3*/)
 // line 1067, offset 0x8004e180
	/* begin block 1 */
		// Start line: 1068
		// Start offset: 0x8004E180
		// Variables:
	// 		int oti; // $s0
	// 		unsigned char otrig; // $a1
	// 		int sx; // $s4
	// 		int sy; // $s5
	// 		int dx; // $s2
	// 		int dy; // $s1
	// 		int x; // $v1
	// 		int y; // $a1
	// 		int ax; // $t0
	// 		int ay; // $t1
	/* end block 1 */
	// End offset: 0x8004E4A8
	// End Line: 1119

	/* begin block 2 */
		// Start line: 2359
	/* end block 2 */
	// End Line: 2360

void Obj_Trap__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int midir;
	int iVar6;
	int iVar7;
	int iVar8;
	int y2;
	int iVar9;
	int x2;
	
	bVar3 = false;
	if (object[i]._oVar4 == 0) {
		iVar7 = (int)dung_map[(int)object[i]._oVar1 * 0x6c + (int)object[i]._oVar2].dObject + -1;
		switch((int)(((uint)(byte)object[iVar7]._otype - 1) * 0x1000000) >> 0x18) {
		case 0:
		case 1:
		case 0x29:
		case 0x2a:
		case 0x49:
		case 0x4a:
			bVar3 = false;
			if (object[iVar7]._oVar4 != 0) {
				bVar3 = true;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 0x1b:
		case 0x2f:
			bVar3 = false;
			if (object[iVar7]._oSelFlag == '\0') {
				bVar3 = true;
			}
		}
		if (bVar3) {
			object[i]._oVar4 = 1;
			iVar8 = (int)object[iVar7]._oy;
			iVar9 = (int)object[iVar7]._ox;
			cVar1 = object[i]._ox;
			cVar2 = object[i]._oy;
			midir = iVar8 + -1;
			iVar6 = midir * 0xc;
			y2 = iVar8;
			x2 = iVar9;
			do {
				iVar4 = iVar9 + -1;
				if (iVar4 <= iVar9 + 1) {
					iVar5 = iVar4 * 0x510 + iVar6;
					do {
						if ((&dung_map[0].dPlayer)[iVar5] != '\0') {
							y2 = midir;
							x2 = iVar4;
						}
						iVar4 = iVar4 + 1;
						iVar5 = iVar5 + 0x510;
					} while (iVar4 <= iVar9 + 1);
				}
				midir = midir + 1;
				iVar6 = iVar6 + 0xc;
			} while (midir <= iVar8 + 1);
			if (deltaload == '\0') {
				midir = GetDirection__Fiiii((int)cVar1,(int)cVar2,x2,y2);
				AddMissile__Fiiiiiiciii((int)cVar1,(int)cVar2,x2,y2,midir,(int)object[i]._oVar3,1,-1,0,0);
				PlaySfxLoc__Fiii(IS_TRAP,(int)object[iVar7]._ox,(int)object[iVar7]._oy);
			}
			object[iVar7]._oTrapFlag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_BCrossDamage__Fi(int i /*$a3*/)
 // line 1127, offset 0x8004e4d0
	/* begin block 1 */
		// Start line: 1128
		// Start offset: 0x8004E4D0
		// Variables:
	// 		int resist; // $v0
	// 		int damage[4]; // stack offset -24
	/* end block 1 */
	// End offset: 0x8004E750
	// End Line: 1154

	/* begin block 2 */
		// Start line: 2498
	/* end block 2 */
	// End Line: 2499

void Obj_BCrossDamage__Fi(int i)

{
	char cVar1;
	int x;
	uint uVar2;
	_125fake psfx;
	int y;
	int aiStack28 [4];
	undefined4 local_c;
	
	aiStack28[1] = DAT_8012694c;
	aiStack28[2] = DAT_80126950;
	aiStack28[3] = DAT_80126954;
	local_c = DAT_80126958;
	if (plr[myplr]._pmode == 8) {
		return;
	}
	if (0 < (int)plr[myplr]._pFireResist) {
		aiStack28[(uint)leveltype] =
				 aiStack28[(uint)leveltype] -
				 (aiStack28[(uint)leveltype] * (int)plr[myplr]._pFireResist) / 100;
	}
	y = myplr;
	if ((int)plr[myplr]._px == (int)object[i]._ox) {
		if ((int)plr[myplr]._py != (int)object[i]._oy + -1) {
			return;
		}
		uVar2 = (uint)leveltype;
		plr[myplr]._pHitPoints = plr[myplr]._pHitPoints - aiStack28[uVar2];
		x = plr[y]._pHitPoints;
		plr[y]._pHPBase = plr[y]._pHPBase - aiStack28[uVar2];
		if (x >> 6 < 1) {
			StartPlrKill__Fii(y,0);
		}
		else {
			cVar1 = plr[y]._pClass;
			if (cVar1 == '\0') {
				x = (int)plr[y]._px;
				y = (int)plr[y]._py;
				psfx = PS_WARR68;
			}
			else {
				if (cVar1 == '\x01') {
					x = (int)plr[y]._px;
					y = (int)plr[y]._py;
					psfx = PS_ROGUE68;
				}
				else {
					if (cVar1 != '\x02') {
						drawhpflag = '\x01';
						return;
					}
					x = (int)plr[y]._px;
					y = (int)plr[y]._py;
					psfx = PS_MAGE68;
				}
			}
			PlaySfxLoc__Fiii(psfx,x,y);
		}
		drawhpflag = '\x01';
		return;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessObjects__Fv()
 // line 1162, offset 0x8004e760
	/* begin block 1 */
		// Start line: 1163
		// Start offset: 0x8004E760
		// Variables:
	// 		int i; // $s1
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x8004E9E8
	// End Line: 1245

	/* begin block 2 */
		// Start line: 2575
	/* end block 2 */
	// End Line: 2576

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessObjects__Fv(void)

{
	char cVar1;
	int i;
	int i_00;
	
	i_00 = 0;
	if (0 < numobjects) {
		do {
			i = (int)objectactive[i_00];
			switch(object[i]._otype) {
			case '\0':
				Obj_Light__Fii(i,0x44);
				break;
			case '\x01':
			case '\x02':
			case '*':
			case '+':
			case 'J':
			case 'K':
				Obj_Door__Fi(i);
				break;
			case '\x03':
			case '\t':
			case 'A':
				Obj_Light__Fii(i,5);
				break;
			case '\x14':
			case '\x15':
			case '\x16':
			case '9':
			case ':':
			case ';':
			case '<':
				Obj_StopAnim__Fi(i);
				break;
			case '\x1a':
			case '[':
				Obj_Light__Fii(i,10);
				Obj_BCrossDamage__Fi(i);
				break;
			case ',':
			case '-':
			case '.':
			case '/':
				Obj_Light__Fii(i,8);
				break;
			case '0':
				Obj_Sarc__Fi(i);
				break;
			case '1':
				Obj_FlameTrap__Fi(i);
				break;
			case '5':
			case '6':
				Obj_Trap__Fi(i);
				break;
			case 'T':
			case 'U':
				Obj_Circle__Fi(i);
				break;
			case 'W':
				Obj_Light__Fii(i,3);
			}
			if ((object[i]._oAnimFlag != '\0') &&
				 (object[i]._oAnimCnt = object[i]._oAnimCnt + 1,
				 object[i]._oAnimDelay <= object[i]._oAnimCnt)) {
				cVar1 = object[i]._oAnimFrame;
				object[i]._oAnimCnt = 0;
				object[i]._oAnimFrame = cVar1 + '\x01';
				if ((int)object[i]._oAnimLen < (int)object[i]._oAnimFrame) {
					object[i]._oAnimFrame = '\x01';
				}
			}
			i_00 = i_00 + 1;
		} while (i_00 < numobjects);
	}
	i_00 = 0;
	if (0 < numobjects) {
		do {
			if (object[(int)objectactive[i_00]]._oDelFlag == '\0') {
				i_00 = i_00 + 1;
			}
			else {
				DeleteObject__Fii((int)objectactive[i_00],i_00);
				i_00 = 0;
			}
		} while (i_00 < numobjects);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjSetMicro__Fiii(int dx /*$a0*/, int dy /*$a1*/, int pn /*$a2*/)
 // line 1252, offset 0x8004ea00
	/* begin block 1 */
		// Start line: 1253
		// Start offset: 0x8004EA00
	/* end block 1 */
	// End offset: 0x8004EA30
	// End Line: 1254

	/* begin block 2 */
		// Start line: 2760
	/* end block 2 */
	// End Line: 2761

void ObjSetMicro__Fiii(int dx,int dy,int pn)

{
	dung_map[dx * 0x6c + dy].dPiece = (short)pn;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjSetMini__Fiii(int x /*$a0*/, int y /*$a1*/, int v /*$a2*/)
 // line 1266, offset 0x8004ea38
	/* begin block 1 */
		// Start line: 1267
		// Start offset: 0x8004EA38
		// Variables:
	// 		long v2; // $s0
	// 		long v3; // $s1
	// 		long v4; // $s2
	// 		int xx; // $s6
	// 		int yy; // $s5
	/* end block 1 */
	// End offset: 0x8004EAE0
	// End Line: 1306

	/* begin block 2 */
		// Start line: 2787
	/* end block 2 */
	// End Line: 2788

void ObjSetMini__Fiii(int x,int y,int v)

{
	short sVar1;
	short sVar2;
	short sVar3;
	uchar *puVar4;
	int dx;
	int dy;
	int dx_00;
	
	dx_00 = x * 2 + 0x10;
	dy = y * 2 + 0x10;
	puVar4 = pMegaTiles + v * 8;
	sVar1 = *(short *)(puVar4 + -6);
	sVar2 = *(short *)(puVar4 + -4);
	sVar3 = *(short *)(puVar4 + -2);
	ObjSetMicro__Fiii(dx_00,dy,(int)*(short *)(puVar4 + -8) + 1);
	dx = x * 2 + 0x11;
	ObjSetMicro__Fiii(dx,dy,(int)sVar1 + 1);
	dy = y * 2 + 0x11;
	ObjSetMicro__Fiii(dx_00,dy,(int)sVar2 + 1);
	ObjSetMicro__Fiii(dx,dy,(int)sVar3 + 1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjL1Special__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 1312, offset 0x8004eb0c
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x8004EB0C
	/* end block 1 */
	// End offset: 0x8004EB0C
	// End Line: 1313

	/* begin block 2 */
		// Start line: 3050
	/* end block 2 */
	// End Line: 3051

void ObjL1Special__Fiiii(int x1,int y1,int x2,int y2)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjL2Special__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 1342, offset 0x8004eb14
	/* begin block 1 */
		// Start line: 1343
		// Start offset: 0x8004EB14
	/* end block 1 */
	// End offset: 0x8004EB14
	// End Line: 1343

	/* begin block 2 */
		// Start line: 3115
	/* end block 2 */
	// End Line: 3116

void ObjL2Special__Fiiii(int x1,int y1,int x2,int y2)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoorSet__Fiii(int oi /*$s3*/, int dx /*$s0*/, int dy /*$s1*/)
 // line 1377, offset 0x8004eb1c
	/* begin block 1 */
		// Start line: 1378
		// Start offset: 0x8004EB1C
		// Variables:
	// 		int pn; // $s2
	/* end block 1 */
	// End offset: 0x8004ED7C
	// End Line: 1399

	/* begin block 2 */
		// Start line: 3156
	/* end block 2 */
	// End Line: 3157

void DoorSet__Fiii(int oi,int dx,int dy)

{
	short sVar1;
	char cVar2;
	
	sVar1 = dung_map[dx * 0x6c + dy].dPiece;
	if (sVar1 == 0x2b) {
		ObjSetMicro__Fiii(dx,dy,0x188);
	}
	if (sVar1 == 0x2d) {
		ObjSetMicro__Fiii(dx,dy,0x18a);
	}
	if (sVar1 == 0x32) {
		cVar2 = object[oi]._otype;
		if (cVar2 == '\x01') {
			ObjSetMicro__Fiii(dx,dy,0x19b);
			cVar2 = object[oi]._otype;
		}
		if (cVar2 == '\x02') {
			ObjSetMicro__Fiii(dx,dy,0x19c);
		}
	}
	if (sVar1 == 0x36) {
		ObjSetMicro__Fiii(dx,dy,0x18d);
	}
	if (sVar1 == 0x37) {
		ObjSetMicro__Fiii(dx,dy,0x18e);
	}
	if (sVar1 == 0x3d) {
		ObjSetMicro__Fiii(dx,dy,399);
	}
	if (sVar1 == 0x43) {
		ObjSetMicro__Fiii(dx,dy,400);
	}
	if (sVar1 == 0x44) {
		ObjSetMicro__Fiii(dx,dy,0x191);
	}
	if (sVar1 == 0x45) {
		ObjSetMicro__Fiii(dx,dy,0x193);
	}
	if (sVar1 == 0x46) {
		ObjSetMicro__Fiii(dx,dy,0x194);
	}
	if (sVar1 == 0x48) {
		ObjSetMicro__Fiii(dx,dy,0x196);
	}
	if (sVar1 == 0xd4) {
		ObjSetMicro__Fiii(dx,dy,0x197);
	}
	if (sVar1 == 0x162) {
		ObjSetMicro__Fiii(dx,dy,0x199);
	}
	if (sVar1 == 0x163) {
		ObjSetMicro__Fiii(dx,dy,0x19a);
	}
	if (sVar1 == 0x19b) {
		ObjSetMicro__Fiii(dx,dy,0x18c);
	}
	if (sVar1 == 0x19c) {
		ObjSetMicro__Fiii(dx,dy,0x18c);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RedoPlayerVision__Fv()
 // line 1405, offset 0x8004ed9c
	/* begin block 1 */
		// Start line: 1406
		// Start offset: 0x8004ED9C
		// Variables:
	// 		int p; // $s1
	/* end block 1 */
	// End offset: 0x8004EE28
	// End Line: 1413

	/* begin block 2 */
		// Start line: 3216
	/* end block 2 */
	// End Line: 3217

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RedoPlayerVision__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	do {
		if (((&plr[0].plractive)[iVar1] != '\0') &&
			 ((uint)currlevel == *(uint *)((int)&plr[0].plrlevel + iVar1))) {
			ChangeVisionXY__Fiii
								((int)(&plr[0]._pvid)[iVar1],(int)*(short *)((int)&plr[0]._px + iVar1),
								 (int)*(short *)((int)&plr[0]._py + iVar1));
		}
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x23a8;
	} while (iVar2 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL1RDoor__FiiUc(int pnum /*$s0*/, int oi /*$s1*/, unsigned char sendflag /*$s4*/)
 // line 1419, offset 0x8004ee40
	/* begin block 1 */
		// Start line: 1420
		// Start offset: 0x8004EE40
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $a0
	/* end block 1 */
	// End offset: 0x8004F1C0
	// End Line: 1465

	/* begin block 2 */
		// Start line: 3250
	/* end block 2 */
	// End Line: 3251

void OperateL1RDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	short sVar1;
	int pn;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_DOORCLOS,(int)object[oi]._ox,(int)object[oi]._oy);
		}
	}
	else {
		x = (int)object[oi]._ox;
		y = (int)object[oi]._oy;
		if (object[oi]._oVar4 == 0) {
			if ((pnum == myplr) && (sendflag != '\0')) {
				NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
			}
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOOROPEN,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x18b);
			object[oi]._oPreFlag = '\x01';
			DoorSet__Fiii(oi,x + -1,y);
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOORCLOS,x,y);
			}
			if (dung_map[x * 0x6c + y].dDead == '\0' &&
					(dung_map[x * 0x6c + y].dItem == '\0' && dung_map[x * 0x6c + y].dMonster == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				sVar1 = object[oi]._oVar1;
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,(int)sVar1);
				pn = (int)object[oi]._oVar2;
				if (pn == 0x32) {
					if (dung_map[(x + -1) * 0x6c + y].dPiece == 0x18c) {
						pn = 0x19b;
					}
					else {
						pn = 0x32;
					}
				}
				ObjSetMicro__Fiii(x + -1,y,pn);
				object[oi]._oPreFlag = '\0';
				RedoPlayerVision__Fv();
			}
			else {
				object[oi]._oVar4 = 2;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL1LDoor__FiiUc(int pnum /*$s0*/, int oi /*$s2*/, unsigned char sendflag /*$s4*/)
 // line 1472, offset 0x8004f1e4
	/* begin block 1 */
		// Start line: 1473
		// Start offset: 0x8004F1E4
		// Variables:
	// 		int dx; // $s1
	// 		int dy; // $s3
	// 		unsigned char dok; // $a0
	/* end block 1 */
	// End offset: 0x8004F598
	// End Line: 1519

	/* begin block 2 */
		// Start line: 3367
	/* end block 2 */
	// End Line: 3368

void OperateL1LDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	short sVar1;
	int pn;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_DOORCLOS,(int)object[oi]._ox,(int)object[oi]._oy);
		}
	}
	else {
		y = (int)object[oi]._oy;
		x = (int)object[oi]._ox;
		if (object[oi]._oVar4 == 0) {
			if ((pnum == myplr) && (sendflag != '\0')) {
				NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
			}
			pn = oi * 2;
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOOROPEN,(int)object[oi]._ox,(int)object[oi]._oy);
				pn = oi << 1;
			}
			if ((&object[0]._oVar1)[oi * 6 + pn * 8] == 0xd6) {
				pn = 0x198;
			}
			else {
				pn = 0x189;
			}
			ObjSetMicro__Fiii(x,y,pn);
			object[oi]._oPreFlag = '\x01';
			DoorSet__Fiii(oi,x,y + -1);
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOORCLOS,x,y);
			}
			if (dung_map[x * 0x6c + y].dDead == '\0' &&
					(dung_map[x * 0x6c + y].dItem == '\0' && dung_map[x * 0x6c + y].dMonster == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				sVar1 = object[oi]._oVar1;
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,(int)sVar1);
				pn = (int)object[oi]._oVar2;
				if ((pn == 0x32) && (pn = 0x32, dung_map[x * 0x6c + y + -1].dPiece == 0x18c)) {
					pn = 0x19c;
				}
				ObjSetMicro__Fiii(x,y + -1,pn);
				object[oi]._oPreFlag = '\0';
				RedoPlayerVision__Fv();
			}
			else {
				object[oi]._oVar4 = 2;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL2RDoor__FiiUc(int pnum /*$s0*/, int oi /*$s1*/, unsigned char sendflag /*$s4*/)
 // line 1526, offset 0x8004f5bc
	/* begin block 1 */
		// Start line: 1527
		// Start offset: 0x8004F5BC
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $a0
	/* end block 1 */
	// End offset: 0x8004F930
	// End Line: 1566

	/* begin block 2 */
		// Start line: 3487
	/* end block 2 */
	// End Line: 3488

void OperateL2RDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_DOORCLOS,(int)object[oi]._ox,(int)object[oi]._oy);
		}
	}
	else {
		x = (int)object[oi]._ox;
		y = (int)object[oi]._oy;
		if (object[oi]._oVar4 == 0) {
			if ((pnum == myplr) && (sendflag != '\0')) {
				NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
			}
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOOROPEN,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x11);
			(&dungeon)[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x99;
			object[oi]._oAnimFrame = '\x04';
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOORCLOS,x,y);
			}
			if (dung_map[x * 0x6c + y].dDead == '\0' &&
					(dung_map[x * 0x6c + y].dItem == '\0' && dung_map[x * 0x6c + y].dMonster == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,0x21c);
				(&dungeon)[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x97;
				object[oi]._oAnimFrame = '\x02';
				object[oi]._oPreFlag = '\0';
				RedoPlayerVision__Fv();
			}
			else {
				object[oi]._oVar4 = 2;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL2LDoor__FiiUc(int pnum /*$s0*/, int oi /*$s1*/, unsigned char sendflag /*$s4*/)
 // line 1573, offset 0x8004f954
	/* begin block 1 */
		// Start line: 1574
		// Start offset: 0x8004F954
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $a0
	/* end block 1 */
	// End offset: 0x8004FCC8
	// End Line: 1613

	/* begin block 2 */
		// Start line: 3590
	/* end block 2 */
	// End Line: 3591

void OperateL2LDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_DOORCLOS,(int)object[oi]._ox,(int)object[oi]._oy);
		}
	}
	else {
		x = (int)object[oi]._ox;
		y = (int)object[oi]._oy;
		if (object[oi]._oVar4 == 0) {
			if ((pnum == myplr) && (sendflag != '\0')) {
				NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
			}
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOOROPEN,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0xd);
			(&dungeon)[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x98;
			object[oi]._oAnimFrame = '\x04';
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOORCLOS,x,y);
			}
			if (dung_map[x * 0x6c + y].dDead == '\0' &&
					(dung_map[x * 0x6c + y].dItem == '\0' && dung_map[x * 0x6c + y].dMonster == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,0x21a);
				(&dungeon)[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x96;
				object[oi]._oAnimFrame = '\x01';
				object[oi]._oPreFlag = '\0';
				RedoPlayerVision__Fv();
			}
			else {
				object[oi]._oVar4 = 2;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL3RDoor__FiiUc(int pnum /*$s3*/, int oi /*$s1*/, unsigned char sendflag /*$s4*/)
 // line 1620, offset 0x8004fcec
	/* begin block 1 */
		// Start line: 1621
		// Start offset: 0x8004FCEC
		// Variables:
	// 		int dx; // $s0
	// 		int dy; // $s2
	// 		unsigned char dok; // $a0
	/* end block 1 */
	// End offset: 0x8004FFD0
	// End Line: 1658

	/* begin block 2 */
		// Start line: 3693
	/* end block 2 */
	// End Line: 3694

void OperateL3RDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_DOORCLOS,(int)object[oi]._ox,(int)object[oi]._oy);
		}
	}
	else {
		x = (int)object[oi]._ox;
		y = (int)object[oi]._oy;
		if (object[oi]._oVar4 == 0) {
			if ((pnum == myplr) && (sendflag != '\0')) {
				NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
			}
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOOROPEN,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x21d);
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOORCLOS,x,y);
			}
			if (dung_map[x * 0x6c + y].dDead == '\0' &&
					(dung_map[x * 0x6c + y].dItem == '\0' && dung_map[x * 0x6c + y].dMonster == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,0x216);
				object[oi]._oPreFlag = '\0';
				RedoPlayerVision__Fv();
			}
			else {
				object[oi]._oVar4 = 2;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL3LDoor__FiiUc(int pnum /*$s3*/, int oi /*$s1*/, unsigned char sendflag /*$s4*/)
 // line 1663, offset 0x8004fff4
	/* begin block 1 */
		// Start line: 1664
		// Start offset: 0x8004FFF4
		// Variables:
	// 		int dx; // $s0
	// 		int dy; // $s2
	// 		unsigned char dok; // $a0
	/* end block 1 */
	// End offset: 0x800502D8
	// End Line: 1719

	/* begin block 2 */
		// Start line: 3788
	/* end block 2 */
	// End Line: 3789

void OperateL3LDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_DOORCLOS,(int)object[oi]._ox,(int)object[oi]._oy);
		}
	}
	else {
		x = (int)object[oi]._ox;
		y = (int)object[oi]._oy;
		if (object[oi]._oVar4 == 0) {
			if ((pnum == myplr) && (sendflag != '\0')) {
				NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
			}
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOOROPEN,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x21a);
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_DOORCLOS,x,y);
			}
			if (dung_map[x * 0x6c + y].dDead == '\0' &&
					(dung_map[x * 0x6c + y].dItem == '\0' && dung_map[x * 0x6c + y].dMonster == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,0x213);
				object[oi]._oPreFlag = '\0';
				RedoPlayerVision__Fv();
			}
			else {
				object[oi]._oVar4 = 2;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonstCheckDoors__Fi(int m /*$a0*/)
 // line 1726, offset 0x800502fc
	/* begin block 1 */
		// Start line: 1727
		// Start offset: 0x800502FC
		// Variables:
	// 		int i; // $s4
	// 		int oi; // $s0
	// 		int dpx; // $s3
	// 		int dpy; // $s2
	// 		int mx; // $s5
	// 		int my; // $s6
	/* end block 1 */
	// End offset: 0x800507C8
	// End Line: 1770

	/* begin block 2 */
		// Start line: 3924
	/* end block 2 */
	// End Line: 3925

void MonstCheckDoors__Fi(int m)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int oi;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = (int)monster[m]._my;
	iVar6 = (int)monster[m]._mx;
	iVar4 = iVar7 + -1;
	iVar3 = iVar6 + -1;
	if ((((dung_map[iVar3 * 0x6c + iVar4].dObject == '\0') &&
			 (oi = iVar6 + 1, dung_map[iVar6 * 0x6c + iVar4].dObject == '\0')) &&
			(dung_map[oi * 0x6c + iVar4].dObject == '\0')) &&
		 (((dung_map[iVar3 * 0x6c + iVar7].dObject == '\0' &&
			 (iVar4 = iVar7 + 1, dung_map[oi * 0x6c + iVar7].dObject == '\0')) &&
			((dung_map[iVar3 * 0x6c + iVar4].dObject == '\0' &&
			 ((dung_map[iVar6 * 0x6c + iVar4].dObject == '\0' &&
				(dung_map[oi * 0x6c + iVar4].dObject == '\0')))))))) {
		return;
	}
	iVar3 = 0;
	if (0 < numobjects) {
		do {
			oi = (int)objectactive[iVar3];
			iVar4 = oi << 1;
			if (((uint)(byte)object[oi]._otype - 1 < 2) && (iVar4 = oi << 1, object[oi]._oVar4 == 0)) {
				iVar4 = abs((int)object[oi]._ox - iVar6);
				iVar1 = abs((int)object[oi]._oy - iVar7);
				if ((iVar4 == 1) && ((iVar1 < 2 && (object[oi]._otype == '\x01')))) {
					OperateL1LDoor__FiiUc(myplr,oi,'\x01');
				}
				if (iVar4 < 2) {
					iVar4 = oi * 2;
					if ((iVar1 != 1) || (iVar4 = oi << 1, object[oi]._otype != '\x02')) goto LAB_800505ac;
					OperateL1RDoor__FiiUc(myplr,oi,'\x01');
				}
				iVar4 = oi << 1;
			}
LAB_800505ac:
			iVar4 = iVar4 * 4 + oi * 3;
			iVar5 = iVar4 * 4;
			iVar1 = oi << 1;
			if (((uint)(byte)(&object[0]._otype)[iVar5] - 0x2a < 2) &&
				 (iVar1 = oi << 1, (&object[0]._oVar4)[iVar4 * 2] == 0)) {
				iVar4 = abs((int)(&object[0]._ox)[iVar5] - iVar6);
				iVar2 = abs((int)(&object[0]._oy)[iVar5] - iVar7);
				if ((iVar4 == 1) && ((iVar2 < 2 && ((&object[0]._otype)[iVar5] == '*')))) {
					OperateL2LDoor__FiiUc(myplr,oi,'\x01');
				}
				if (iVar4 < 2) {
					iVar1 = oi * 2;
					if ((iVar2 != 1) || (iVar1 = oi << 1, object[oi]._otype != '+')) goto LAB_800506b4;
					OperateL2RDoor__FiiUc(myplr,oi,'\x01');
				}
				iVar1 = oi << 1;
			}
LAB_800506b4:
			iVar4 = iVar1 * 4 + oi * 3;
			iVar1 = iVar4 * 4;
			if (((uint)(byte)(&object[0]._otype)[iVar1] - 0x4a < 2) &&
				 ((&object[0]._oVar4)[iVar4 * 2] == 0)) {
				iVar4 = abs((int)(&object[0]._ox)[iVar1] - iVar6);
				iVar5 = abs((int)(&object[0]._oy)[iVar1] - iVar7);
				if ((iVar4 == 1) && ((iVar5 < 2 && ((&object[0]._otype)[iVar1] == 'K')))) {
					OperateL3RDoor__FiiUc(myplr,oi,'\x01');
				}
				if (((iVar4 < 2) && (iVar5 == 1)) && (object[oi]._otype == 'J')) {
					OperateL3LDoor__FiiUc(myplr,oi,'\x01');
				}
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < numobjects);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddL1Objs__Fiiii(int x1 /*$s7*/, int y1 /*$a1*/, int x2 /*$s5*/, int y2 /*$s6*/)
 // line 1776, offset 0x800507f8
	/* begin block 1 */
		// Start line: 1777
		// Start offset: 0x800507F8
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s2
	// 		int pn; // $s0
	/* end block 1 */
	// End offset: 0x80050900
	// End Line: 1789

	/* begin block 2 */
		// Start line: 4032
	/* end block 2 */
	// End Line: 4033

void PostAddL1Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	short sVar1;
	int ox;
	int iVar2;
	int iVar3;
	
	if (y1 < y2) {
		iVar3 = y1 * 0xc;
		do {
			if (x1 < x2) {
				iVar2 = x1 * 0x510 + iVar3;
				ox = x1;
				do {
					sVar1 = *(short *)((int)&dung_map[0].dPiece + iVar2);
					if (sVar1 == 0x10e) {
						PostAddObject__Fiii(0,ox,y1);
					}
					if (((sVar1 == 0x2c) || (sVar1 == 0x33)) || (sVar1 == 0xd6)) {
						PostAddObject__Fiii(1,ox,y1);
					}
					if ((sVar1 == 0x2e) || (sVar1 == 0x38)) {
						PostAddObject__Fiii(2,ox,y1);
					}
					ox = ox + 1;
					iVar2 = iVar2 + 0x510;
				} while (ox < x2);
			}
			y1 = y1 + 1;
			iVar3 = iVar3 + 0xc;
		} while (y1 < y2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddL2Objs__Fiiii(int x1 /*$s7*/, int y1 /*$a1*/, int x2 /*$s5*/, int y2 /*$s6*/)
 // line 1795, offset 0x80050930
	/* begin block 1 */
		// Start line: 1796
		// Start offset: 0x80050930
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s2
	// 		int pn; // $s0
	/* end block 1 */
	// End offset: 0x80050A14
	// End Line: 1806

	/* begin block 2 */
		// Start line: 4076
	/* end block 2 */
	// End Line: 4077

void PostAddL2Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	short sVar1;
	int ox;
	int iVar2;
	int iVar3;
	
	if (y1 < y2) {
		iVar3 = y1 * 0xc;
		do {
			if (x1 < x2) {
				iVar2 = x1 * 0x510 + iVar3;
				ox = x1;
				do {
					sVar1 = *(short *)((int)&dung_map[0].dPiece + iVar2);
					if ((sVar1 == 0xd) || (sVar1 == 0x21d)) {
						PostAddObject__Fiii(0x2a,ox,y1);
					}
					if ((sVar1 == 0x11) || (sVar1 == 0x21e)) {
						PostAddObject__Fiii(0x2b,ox,y1);
					}
					ox = ox + 1;
					iVar2 = iVar2 + 0x510;
				} while (ox < x2);
			}
			y1 = y1 + 1;
			iVar3 = iVar3 + 0xc;
		} while (y1 < y2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjChangeMap__Fiiii(int x1 /*$s5*/, int y1 /*$fp*/, int x2 /*$s6*/, int y2 /*$s7*/)
 // line 1812, offset 0x80050a44
	/* begin block 1 */
		// Start line: 1813
		// Start offset: 0x80050A44
		// Variables:
	// 		int i; // $s4
	// 		int j; // $s2
	/* end block 1 */
	// End offset: 0x80050BC8
	// End Line: 1828

	/* begin block 2 */
		// Start line: 4116
	/* end block 2 */
	// End Line: 4117

void ObjChangeMap__Fiiii(int x1,int y1,int x2,int y2)

{
	byte *pbVar1;
	uchar *puVar2;
	int x;
	int y;
	ushort *puVar3;
	int x1_00;
	int y1_00;
	
	y = y1;
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				puVar3 = &dungeon + x1 * 0x30;
				puVar2 = &pdungeon + x1 * 0x28;
				x = x1;
				do {
					pbVar1 = puVar2 + y;
					puVar2 = puVar2 + 0x28;
					y1_00 = x + 1;
					ObjSetMini__Fiii(x,y,(uint)*pbVar1);
					puVar3[y] = (ushort)*pbVar1;
					puVar3 = puVar3 + 0x30;
					x = y1_00;
				} while (y1_00 <= x2);
			}
			y = y + 1;
		} while (y <= y2);
	}
	if (leveltype == '\x01') {
		x1_00 = x1 * 2 + 0x10;
		y1_00 = y1 * 2 + 0x10;
		x = x2 * 2 + 0x11;
		y = y2 * 2 + 0x11;
		ObjL1Special__Fiiii(x1_00,y1_00,x,y);
		PostAddL1Objs__Fiiii(x1_00,y1_00,x,y);
	}
	if (leveltype == '\x02') {
		x1_00 = x1 * 2 + 0x10;
		y1_00 = y1 * 2 + 0x10;
		x = x2 * 2 + 0x11;
		y = y2 * 2 + 0x11;
		ObjL2Special__Fiiii(x1_00,y1_00,x,y);
		PostAddL2Objs__Fiiii(x1_00,y1_00,x,y);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_MRectTrans__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 1836, offset 0x80050bfc
	/* begin block 1 */
		// Start line: 1837
		// Start offset: 0x80050BFC
		// Variables:
	// 		int i; // $v1
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x80050CA0
	// End Line: 1847

	/* begin block 2 */
		// Start line: 4173
	/* end block 2 */
	// End Line: 4174

void DRLG_MRectTrans__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar3 = y1 * 2 + 0x11;
	iVar2 = x1 * 2 + 0x11;
	iVar5 = y2 * 2 + 0x10;
	iVar4 = x2 * 2 + 0x10;
	if (iVar3 <= iVar5) {
		iVar7 = iVar3 * 0xc;
		do {
			if (iVar2 <= iVar4) {
				iVar6 = iVar2 * 0x510 + iVar7;
				iVar1 = iVar2;
				do {
					iVar1 = iVar1 + 1;
					(&dung_map[0].dTransVal)[iVar6] = TransVal;
					iVar6 = iVar6 + 0x510;
				} while (iVar1 <= iVar4);
			}
			iVar3 = iVar3 + 1;
			iVar7 = iVar7 + 0xc;
		} while (iVar3 <= iVar5);
	}
	TransVal = TransVal + '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjChangeMapResync__Fiiii(int x1 /*$s5*/, int y1 /*$fp*/, int x2 /*$s6*/, int y2 /*$s7*/)
 // line 1854, offset 0x80050ca8
	/* begin block 1 */
		// Start line: 1855
		// Start offset: 0x80050CA8
		// Variables:
	// 		int i; // $s4
	// 		int j; // $s2
	/* end block 1 */
	// End offset: 0x80050DE4
	// End Line: 1869

	/* begin block 2 */
		// Start line: 4209
	/* end block 2 */
	// End Line: 4210

void ObjChangeMapResync__Fiiii(int x1,int y1,int x2,int y2)

{
	byte *pbVar1;
	uchar *puVar2;
	int y;
	ushort *puVar3;
	int x;
	int iVar4;
	
	y = y1;
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				puVar3 = &dungeon + x1 * 0x30;
				puVar2 = &pdungeon + x1 * 0x28;
				x = x1;
				do {
					pbVar1 = puVar2 + y;
					puVar2 = puVar2 + 0x28;
					iVar4 = x + 1;
					ObjSetMini__Fiii(x,y,(uint)*pbVar1);
					puVar3[y] = (ushort)*pbVar1;
					puVar3 = puVar3 + 0x30;
					x = iVar4;
				} while (iVar4 <= x2);
			}
			y = y + 1;
		} while (y <= y2);
	}
	if (leveltype == '\x01') {
		ObjL1Special__Fiiii(x1 * 2 + 0x10,y1 * 2 + 0x10,x2 * 2 + 0x11,y2 * 2 + 0x11);
	}
	if (leveltype == '\x02') {
		ObjL2Special__Fiiii(x1 * 2 + 0x10,y1 * 2 + 0x10,x2 * 2 + 0x11,y2 * 2 + 0x11);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL1Door__FiiUc(int pnum /*$s2*/, int i /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1875, offset 0x80050e18
	/* begin block 1 */
		// Start line: 1876
		// Start offset: 0x80050E18
		// Variables:
	// 		int dpx; // $s0
	// 		int dpy; // $s4
	/* end block 1 */
	// End offset: 0x80050F4C
	// End Line: 1883

	/* begin block 2 */
		// Start line: 4256
	/* end block 2 */
	// End Line: 4257

void OperateL1Door__FiiUc(int pnum,int i,uchar sendflag)

{
	int iVar1;
	int iVar2;
	
	iVar1 = abs((int)object[i]._ox - (int)plr[pnum]._px);
	iVar2 = abs((int)object[i]._oy - (int)plr[pnum]._py);
	if (((iVar1 == 1) && (iVar2 < 2)) && (object[i]._otype == '\x01')) {
		OperateL1LDoor__FiiUc(pnum,i,sendflag);
	}
	if (((iVar1 < 2) && (iVar2 == 1)) && (object[i]._otype == '\x02')) {
		OperateL1RDoor__FiiUc(pnum,i,sendflag);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateLever__Fii(int pnum /*$s2*/, int i /*$s1*/)
 // line 1889, offset 0x80050f74
	/* begin block 1 */
		// Start line: 1890
		// Start offset: 0x80050F74
		// Variables:
	// 		unsigned char mapflag; // $a2
	// 		int j; // $a1
	// 		int oi; // $v0
	// 		int ot; // $v0
	/* end block 1 */
	// End offset: 0x80051144
	// End Line: 1914

	/* begin block 2 */
		// Start line: 4301
	/* end block 2 */
	// End Line: 4302

void OperateLever__Fii(int pnum,int i)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_LEVER,(int)object[i]._ox,(int)object[i]._oy);
		}
		cVar1 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar1 + '\x01';
		bVar2 = true;
		if ((currlevel == '\x10') && (iVar4 = 0, 0 < numobjects)) {
			do {
				iVar3 = (int)objectactive[iVar4];
				if ((object[iVar3]._otype == '\x1c') &&
					 ((object[i]._oVar8 == object[iVar3]._oVar8 && (object[iVar3]._oSelFlag != '\0')))) {
					bVar2 = false;
				}
				iVar4 = iVar4 + 1;
			} while (iVar4 < numobjects);
		}
		if (bVar2) {
			ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
													(int)object[i]._oVar4);
		}
		if (pnum == myplr) {
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateBook__Fii(int pnum /*$s1*/, int i /*$s4*/)
 // line 1920, offset 0x80051160
	/* begin block 1 */
		// Start line: 1921
		// Start offset: 0x80051160
		// Variables:
	// 		int v1; // $s5
	// 		int v2; // $s3
	// 		int j; // $s0
	// 		int oi; // $v1
	// 		int ot; // $v1
	// 		int itm; // $s0

		/* begin block 1.1 */
			// Start line: 1927
			// Start offset: 0x800511BC

			/* begin block 1.1.1 */
				// Start line: 1927
				// Start offset: 0x800511E4
				// Variables:
			// 		unsigned char found; // $a2
			// 		unsigned char dowarp; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8005137C
			// End Line: 1959
		/* end block 1.1 */
		// End offset: 0x8005137C
		// End Line: 1959

		/* begin block 1.2 */
			// Start line: 1962
			// Start offset: 0x8005137C

			/* begin block 1.2.1 */
				// Start line: 1964
				// Start offset: 0x800513E0
			/* end block 1.2.1 */
			// End offset: 0x80051580
			// End Line: 1973
		/* end block 1.2 */
		// End offset: 0x80051580
		// End Line: 1973
	/* end block 1 */
	// End offset: 0x80051628
	// End Line: 1977

	/* begin block 2 */
		// Start line: 4374
	/* end block 2 */
	// End Line: 4375

void OperateBook__Fii(int pnum,int i)

{
	char *pcVar1;
	char cVar2;
	bool bVar3;
	bool bVar4;
	short sVar5;
	int iVar6;
	undefined4 uVar7;
	int iVar8;
	uint mitype;
	int v2;
	int v1;
	
	v1 = 0;
	v2 = 0;
	if (object[i]._oSelFlag != '\0') {
		if ((setlevel != '\0') && (setlvlnum == '\x05')) {
			bVar4 = false;
			bVar3 = false;
			iVar8 = 0;
			if (0 < numobjects) {
				do {
					iVar6 = (int)objectactive[iVar8];
					if (object[iVar6]._otype == 'U') {
						sVar5 = object[iVar6]._oVar6;
						if (sVar5 == 1) {
							v1 = 0x1b;
							v2 = 0x1d;
							object[iVar6]._oVar6 = 4;
							bVar3 = true;
							sVar5 = object[iVar6]._oVar6;
						}
						if (sVar5 == 2) {
							v1 = 0x2b;
							v2 = 0x1d;
							object[iVar6]._oVar6 = 4;
							bVar3 = true;
						}
					}
					if (bVar3) {
						object[(int)DAT_800f8550 + -1]._oVar5 = object[(int)DAT_800f8550 + -1]._oVar5 + 1;
						AddMissile__Fiiiiiiciii
											((int)plr[pnum]._px,(int)plr[pnum]._py,v1,v2,(int)plr[pnum]._pdir,3,0,pnum,0,0
											);
						bVar4 = true;
						bVar3 = false;
					}
					iVar8 = iVar8 + 1;
				} while (iVar8 < numobjects);
			}
			if (!bVar4) {
				return;
			}
		}
		cVar2 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar2 + '\x01';
		v2 = myplr;
		if (setlevel != '\0') {
			mitype = (uint)setlvlnum;
			if (setlvlnum == '\x02') {
				uVar7 = *(undefined4 *)((int)&plr[myplr]._pMemSpells + 4);
				*(uint *)&plr[myplr]._pMemSpells = *(uint *)&plr[myplr]._pMemSpells | 0x1000;
				*(undefined4 *)((int)&plr[v2]._pMemSpells + 4) = uVar7;
				if (plr[pnum]._pSplLvl[0xd] < '\x0f') {
					plr[v2]._pSplLvl[0xd] = plr[v2]._pSplLvl[0xd] + '\x01';
				}
				QuestStruct_800e34a4._qactive = '\x03';
				if (deltaload == '\0') {
					PlaySfxLoc__Fiii(IS_QUESTDN,(int)object[i]._ox,(int)object[i]._oy);
				}
				InitDiabloMsg__Fc('+');
				AddMissile__Fiiiiiiciii
									((int)plr[myplr]._px,(int)plr[myplr]._py,(int)object[i]._ox + -2,
									 (int)object[i]._oy + -4,(int)plr[myplr]._pdir,mitype,0,myplr,0,0);
			}
			if ((setlevel != '\0') && (setlvlnum == '\x05')) {
				v2 = 0;
				ObjChangeMapResync__Fiiii
									((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
									 (int)object[i]._oVar4);
				if (0 < numobjects) {
					do {
						pcVar1 = objectactive + v2;
						v2 = v2 + 1;
						SyncObjectAnim__Fi((int)*pcVar1);
					} while (v2 < numobjects);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateBookLever__Fii(int pnum /*$s4*/, int i /*$s1*/)
 // line 1984, offset 0x80051654
	/* begin block 1 */
		// Start line: 1985
		// Start offset: 0x80051654
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s2
	// 		int tren; // $s0
	/* end block 1 */
	// End offset: 0x800519D8
	// End Line: 2029

	/* begin block 2 */
		// Start line: 4514
	/* end block 2 */
	// End Line: 4515

void OperateBookLever__Fii(int pnum,int i)

{
	short sVar1;
	int iVar2;
	char cVar3;
	int iVar4;
	
	iVar2 = setpc_x * 2;
	iVar4 = setpc_y * 2;
	if ((object[i]._oSelFlag != '\0') && (qtextflag == '\0')) {
		if ((object[i]._otype == 'G') && (QuestStruct_ARRAY_800e3404[2]._qvar1 == '\0')) {
			QuestStruct_ARRAY_800e3404[2]._qactive = '\x02';
			QuestStruct_ARRAY_800e3404[2]._qlog = '\x01';
			QuestStruct_ARRAY_800e3404[2]._qvar1 = '\x01';
		}
		if ((object[i]._otype == 'H') && (QuestStruct_ARRAY_800e3404[3]._qvar1 == '\0')) {
			QuestStruct_ARRAY_800e3404[3]._qactive = '\x02';
			QuestStruct_ARRAY_800e3404[3]._qlog = '\x01';
			QuestStruct_ARRAY_800e3404[3]._qvar1 = '\x01';
			SpawnQuestItem__Fiiiii(0x15,setpc_x * 2 + 0x13,setpc_y * 2 + 0x1a,0,1);
			SpawnQuestItem__Fiiiii(0x15,setpc_x * 2 + 0x1f,setpc_y * 2 + 0x1a,0,1);
			SpawnQuestItem__Fiiiii(0x15,setpc_x * 2 + 0x19,setpc_y * 2 + 0x21,0,1);
		}
		if ((object[i]._otype == 'X') && (QuestStruct_ARRAY_800e3404[5]._qvar1 == '\0')) {
			QuestStruct_ARRAY_800e3404[5]._qactive = '\x02';
			QuestStruct_ARRAY_800e3404[5]._qlog = '\x01';
			QuestStruct_ARRAY_800e3404[5]._qvar1 = '\x01';
		}
		if ((int)object[i]._oAnimFrame != (int)object[i]._oVar6) {
			cVar3 = object[i]._otype;
			if (cVar3 != 'H') {
				ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
														(int)object[i]._oVar4);
				cVar3 = object[i]._otype;
			}
			if (cVar3 == 'G') {
				CreateItem__Fiii(3,iVar2 + 0x15,iVar4 + 0x15);
				cVar3 = TransVal;
				TransVal = '\t';
				DRLG_MRectTrans__Fiiii
									((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
									 (int)object[i]._oVar4);
				TransVal = cVar3;
			}
		}
		sVar1 = object[i]._oVar7;
		object[i]._oAnimFrame = (char)object[i]._oVar6;
		InitQTextMsg__Fi((int)sVar1);
		if (pnum == myplr) {
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSChambBk__Fii(int pnum /*$a0*/, int i /*$s1*/)
 // line 2035, offset 0x800519fc
	/* begin block 1 */
		// Start line: 2036
		// Start offset: 0x800519FC
		// Variables:
	// 		int textdef; // $s2
	// 		int j; // $s0
	/* end block 1 */
	// End offset: 0x80051BB8
	// End Line: 2059

	/* begin block 2 */
		// Start line: 4624
	/* end block 2 */
	// End Line: 4625

void OperateSChambBk__Fii(int pnum,int i)

{
	char *pcVar1;
	char cVar2;
	int iVar3;
	int m;
	
	m = 0;
	if ((object[i]._oSelFlag != '\0') && (qtextflag == '\0')) {
		if ((int)object[i]._oAnimFrame != (int)object[i]._oVar6) {
			iVar3 = 0;
			ObjChangeMapResync__Fiiii
								((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
								 (int)object[i]._oVar4);
			if (0 < numobjects) {
				do {
					pcVar1 = objectactive + iVar3;
					iVar3 = iVar3 + 1;
					SyncObjectAnim__Fi((int)*pcVar1);
				} while (iVar3 < numobjects);
			}
		}
		object[i]._oAnimFrame = (char)object[i]._oVar6;
		if (QuestStruct_800e34a4._qactive == '\x01') {
			QuestStruct_800e34a4._qactive = '\x02';
			QuestStruct_800e34a4._qlog = '\x01';
		}
		cVar2 = plr[myplr]._pClass;
		if (cVar2 == '\0') {
			m = 0xeb;
		}
		else {
			if (cVar2 == '\x01') {
				m = 0xf3;
			}
			else {
				if (cVar2 == '\x02') {
					m = 0xef;
				}
			}
		}
		QuestStruct_800e34a4._qmsg = (uchar)m;
		InitQTextMsg__Fi(m);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateChest__FiiUc(int pnum /*$s2*/, int i /*$s4*/, unsigned char sendmsg /*$s3*/)
 // line 2065, offset 0x80051bd4
	/* begin block 1 */
		// Start line: 2066
		// Start offset: 0x80051BD4
		// Variables:
	// 		int j; // $s1
	// 		int mdir; // $t0
	// 		int mtype; // $s5
	/* end block 1 */
	// End offset: 0x80051F7C
	// End Line: 2106

	/* begin block 2 */
		// Start line: 4688
	/* end block 2 */
	// End Line: 4689

void OperateChest__FiiUc(int pnum,int i,uchar sendmsg)

{
	short sVar1;
	int midir;
	int mitype;
	
	mitype = 0;
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_CHEST,(int)object[i]._ox,(int)object[i]._oy);
		}
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = '\x02';
		if (deltaload == '\0') {
			SetRndSeed__Fl(object[i]._oRndSeed);
			if (setlevel == '\0') {
				midir = 0;
				if (0 < object[i]._oVar1) {
					do {
						if (object[i]._oVar2 == 0) {
							CreateRndUseful__FiiiUc(pnum,(int)object[i]._ox,(int)object[i]._oy,sendmsg);
						}
						else {
							CreateRndItem__FiiUcUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',sendmsg,0);
						}
						midir = midir + 1;
					} while (midir < (int)object[i]._oVar1);
				}
			}
			else {
				midir = 0;
				if (0 < object[i]._oVar1) {
					do {
						CreateRndItem__FiiUcUcUc((int)object[i]._ox,(int)object[i]._oy,'\x01',sendmsg,0);
						midir = midir + 1;
					} while (midir < (int)object[i]._oVar1);
				}
			}
			if ((object[i]._oTrapFlag != '\0') && ((uint)(byte)object[i]._otype - 0x44 < 3)) {
				midir = GetDirection__Fiiii((int)object[i]._ox,(int)object[i]._oy,(int)plr[pnum]._px,
																		(int)plr[pnum]._py);
				sVar1 = object[i]._oVar4;
				if (sVar1 == 1) {
					mitype = 0x1b;
				}
				else {
					if (sVar1 < 2) {
						if (sVar1 == 0) {
							mitype = 0;
						}
					}
					else {
						if (sVar1 == 2) {
							mitype = 0x2a;
						}
					}
				}
				AddMissile__Fiiiiiiciii
									((int)object[i]._ox,(int)object[i]._oy,(int)plr[pnum]._px,(int)plr[pnum]._py,midir
									 ,mitype,1,-1,0,0);
				object[i]._oTrapFlag = '\0';
			}
			if (pnum == myplr) {
				NetSendCmdParam2__FUcUcUsUs('\0','.',(ushort)pnum,(ushort)i);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateMushPatch__Fii(int pnum /*$a0*/, int i /*$a1*/)
 // line 2112, offset 0x80051fa4
	/* begin block 1 */
		// Start line: 2113
		// Start offset: 0x80051FA4
		// Variables:
	// 		int x; // stack offset -16
	// 		int y; // stack offset -12
	/* end block 1 */
	// End offset: 0x80052154
	// End Line: 2138

	/* begin block 2 */
		// Start line: 4791
	/* end block 2 */
	// End Line: 4792

void OperateMushPatch__Fii(int pnum,int i)

{
	char cVar1;
	int local_10;
	int local_c;
	
	if ((QuestStruct_ARRAY_800e33a0[0]._qactive == '\x02') &&
		 (1 < QuestStruct_ARRAY_800e33a0[0]._qvar1)) {
		if (object[i]._oSelFlag != '\0') {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_CHEST,(int)object[i]._ox,(int)object[i]._oy);
			}
			cVar1 = object[i]._oAnimFrame;
			object[i]._oSelFlag = '\0';
			object[i]._oAnimFrame = cVar1 + '\x01';
			if (deltaload == '\0') {
				GetSuperItemLoc__FiiRiT2((int)object[i]._ox,(int)object[i]._oy,&local_10,&local_c);
				SpawnQuestItem__Fiiiii(0x11,local_10,local_c,0,0);
				QuestStruct_ARRAY_800e33a0[0]._qvar1 = '\x03';
			}
		}
	}
	else {
		if ((deltaload == '\0') && (pnum == myplr)) {
			cVar1 = plr[pnum]._pClass;
			if (cVar1 == '\0') {
				PlaySFX__Fi(PS_WARR13);
			}
			else {
				if (cVar1 == '\x01') {
					PlaySFX__Fi(PS_ROGUE13);
				}
				else {
					if (cVar1 == '\x02') {
						PlaySFX__Fi(PS_MAGE13);
					}
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateInnSignChest__Fii(int pnum /*$a0*/, int i /*$a1*/)
 // line 2144, offset 0x80052168
	/* begin block 1 */
		// Start line: 2145
		// Start offset: 0x80052168
		// Variables:
	// 		int x; // stack offset -16
	// 		int y; // stack offset -12
	/* end block 1 */
	// End offset: 0x800522EC
	// End Line: 2167

	/* begin block 2 */
		// Start line: 4860
	/* end block 2 */
	// End Line: 4861

void OperateInnSignChest__Fii(int pnum,int i)

{
	char cVar1;
	int local_10;
	int local_c;
	
	if (QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x02') {
		if (object[i]._oSelFlag != '\0') {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(IS_CHEST,(int)object[i]._ox,(int)object[i]._oy);
			}
			object[i]._oSelFlag = '\0';
			object[i]._oAnimFrame = '\x02';
			if (deltaload == '\0') {
				GetSuperItemLoc__FiiRiT2((int)object[i]._ox,(int)object[i]._oy,&local_10,&local_c);
				SpawnQuestItem__Fiiiii(0xc,local_10,local_c,0,0);
			}
		}
	}
	else {
		if ((deltaload == '\0') && (pnum == myplr)) {
			cVar1 = plr[pnum]._pClass;
			if (cVar1 == '\0') {
				PlaySFX__Fi(PS_WARR24);
			}
			else {
				if (cVar1 == '\x01') {
					PlaySFX__Fi(PS_ROGUE24);
				}
				else {
					if (cVar1 == '\x02') {
						PlaySFX__Fi(PS_MAGE24);
					}
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSlainHero__FiiUc(int pnum /*$s0*/, int i /*$s1*/, unsigned char sendmsg /*$a2*/)
 // line 2173, offset 0x80052300
	/* begin block 1 */
		// Start line: 2174
		// Start offset: 0x80052300
	/* end block 1 */
	// End offset: 0x8005253C
	// End Line: 2199

	/* begin block 2 */
		// Start line: 4922
	/* end block 2 */
	// End Line: 4923

void OperateSlainHero__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	_125fake psfx;
	int x;
	int y;
	
	if (object[i]._oSelFlag == '\0') {
		return;
	}
	object[i]._oSelFlag = '\0';
	if (deltaload != '\0') {
		return;
	}
	cVar1 = plr[pnum]._pClass;
	if (cVar1 == '\0') {
		CreateMagicArmor__FiiiiUcUc((int)object[i]._ox,(int)object[i]._oy,9,0x99,0,1);
		x = (int)plr[myplr]._px;
		y = (int)plr[myplr]._py;
		psfx = PS_WARR9;
	}
	else {
		if (cVar1 == '\x01') {
			CreateMagicWeapon__FiiiiUcUc((int)object[i]._ox,(int)object[i]._oy,3,0x77,0,1);
			x = (int)plr[myplr]._px;
			y = (int)plr[myplr]._py;
			psfx = PS_ROGUE9;
		}
		else {
			if (cVar1 != '\x02') goto LAB_8005251c;
			CreateSpellBook__FiiiUcUc((int)object[i]._ox,(int)object[i]._oy,3,'\0',1);
			x = (int)plr[myplr]._px;
			y = (int)plr[myplr]._py;
			psfx = PS_MAGE9;
		}
	}
	PlaySfxLoc__Fiii(psfx,x,y);
LAB_8005251c:
	if (pnum == myplr) {
		NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateTrapLvr__Fi(int i /*$a0*/)
 // line 2205, offset 0x80052554
	/* begin block 1 */
		// Start line: 2206
		// Start offset: 0x80052554
		// Variables:
	// 		int j; // $a1
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80052718
	// End Line: 2229

	/* begin block 2 */
		// Start line: 4988
	/* end block 2 */
	// End Line: 4989

void OperateTrapLvr__Fi(int i)

{
	short sVar1;
	int iVar2;
	int iVar3;
	
	if (object[i]._oAnimFrame == '\x01') {
		object[i]._oAnimFrame = '\x02';
		iVar3 = 0;
		if (0 < numobjects) {
			do {
				iVar2 = (int)objectactive[iVar3];
				if (((int)object[iVar2]._otype == (int)object[i]._oVar2) &&
					 (object[iVar2]._oVar1 == object[i]._oVar1)) {
					object[iVar2]._oVar2 = 1;
					object[iVar2]._oAnimFlag = '\0';
				}
				iVar3 = iVar3 + 1;
			} while (iVar3 < numobjects);
		}
	}
	else {
		object[i]._oAnimFrame = object[i]._oAnimFrame + -1;
		iVar3 = 0;
		if (0 < numobjects) {
			do {
				iVar2 = (int)objectactive[iVar3];
				if ((((int)object[iVar2]._otype == (int)object[i]._oVar2) &&
						(object[iVar2]._oVar1 == object[i]._oVar1)) &&
					 (sVar1 = object[iVar2]._oVar4, object[iVar2]._oVar2 = 0, sVar1 != 0)) {
					object[iVar2]._oAnimFlag = '\x01';
				}
				iVar3 = iVar3 + 1;
			} while (iVar3 < numobjects);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSarc__FiiUc(int pnum /*$s3*/, int i /*$s1*/, unsigned char sendmsg /*$s2*/)
 // line 2236, offset 0x80052724
	/* begin block 1 */
		// Start line: 2237
		// Start offset: 0x80052724
	/* end block 1 */
	// End offset: 0x800528BC
	// End Line: 2252

	/* begin block 2 */
		// Start line: 5051
	/* end block 2 */
	// End Line: 5052

void OperateSarc__FiiUc(int pnum,int i,uchar sendmsg)

{
	long s;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_SARC,(int)object[i]._ox,(int)object[i]._oy);
		}
		object[i]._oSelFlag = '\0';
		if (deltaload == '\0') {
			s = object[i]._oRndSeed;
			object[i]._oAnimFlag = '\x01';
			object[i]._oAnimDelay = 3;
			SetRndSeed__Fl(s);
			if (object[i]._oVar1 < 3) {
				CreateRndItem__FiiUcUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',sendmsg,0);
			}
			if (7 < object[i]._oVar1) {
				SpawnSkeleton__Fiii((int)object[i]._oVar2,(int)object[i]._ox,(int)object[i]._oy);
			}
			if (pnum == myplr) {
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
		else {
			object[i]._oAnimFrame = (char)object[i]._oAnimLen;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL2Door__FiiUc(int pnum /*$s2*/, int i /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 2258, offset 0x800528dc
	/* begin block 1 */
		// Start line: 2259
		// Start offset: 0x800528DC
		// Variables:
	// 		int dpx; // $s0
	// 		int dpy; // $s4
	/* end block 1 */
	// End offset: 0x80052A10
	// End Line: 2266

	/* begin block 2 */
		// Start line: 5102
	/* end block 2 */
	// End Line: 5103

void OperateL2Door__FiiUc(int pnum,int i,uchar sendflag)

{
	int iVar1;
	int iVar2;
	
	iVar1 = abs((int)object[i]._ox - (int)plr[pnum]._px);
	iVar2 = abs((int)object[i]._oy - (int)plr[pnum]._py);
	if (((iVar1 == 1) && (iVar2 < 2)) && (object[i]._otype == '*')) {
		OperateL2LDoor__FiiUc(pnum,i,sendflag);
	}
	if (((iVar1 < 2) && (iVar2 == 1)) && (object[i]._otype == '+')) {
		OperateL2RDoor__FiiUc(pnum,i,sendflag);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL3Door__FiiUc(int pnum /*$s2*/, int i /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 2272, offset 0x80052a38
	/* begin block 1 */
		// Start line: 2273
		// Start offset: 0x80052A38
		// Variables:
	// 		int dpx; // $s0
	// 		int dpy; // $s4
	/* end block 1 */
	// End offset: 0x80052B6C
	// End Line: 2280

	/* begin block 2 */
		// Start line: 5147
	/* end block 2 */
	// End Line: 5148

void OperateL3Door__FiiUc(int pnum,int i,uchar sendflag)

{
	int iVar1;
	int iVar2;
	
	iVar1 = abs((int)object[i]._ox - (int)plr[pnum]._px);
	iVar2 = abs((int)object[i]._oy - (int)plr[pnum]._py);
	if (((iVar1 == 1) && (iVar2 < 2)) && (object[i]._otype == 'K')) {
		OperateL3RDoor__FiiUc(pnum,i,sendflag);
	}
	if (((iVar1 < 2) && (iVar2 == 1)) && (object[i]._otype == 'J')) {
		OperateL3LDoor__FiiUc(pnum,i,sendflag);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadMapObjs__FPUcii(unsigned char *pMap /*$a0*/, int startx /*$a1*/, int starty /*$a2*/)
 // line 2285, offset 0x80052b94
	/* begin block 1 */
		// Start line: 2286
		// Start offset: 0x80052B94
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	// 		int rw; // $s3
	// 		int rh; // $s4
	// 		unsigned char *lm; // $s1
	// 		long mapoff; // $v0
	/* end block 1 */
	// End offset: 0x80052C6C
	// End Line: 2320

	/* begin block 2 */
		// Start line: 5190
	/* end block 2 */
	// End Line: 5191

void LoadMapObjs__FPUcii(uchar *pMap,int startx,int starty)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	byte *pbVar4;
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
				do {
					if (*pbVar4 != 0) {
						PostAddObject__Fiii(ObjTypeConv[(uint)*pbVar4],iVar3 + startx + 0x10,
																iVar5 + starty + 0x10);
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
// void /*$ra*/ OperatePedistal__Fii(int pnum /*$s2*/, int i /*$s1*/)
 // line 2327, offset 0x80052c9c
	/* begin block 1 */
		// Start line: 2328
		// Start offset: 0x80052C9C
		// Variables:
	// 		int jstn; // stack offset -24

		/* begin block 1.1 */
			// Start line: 2328
			// Start offset: 0x80052C9C

			/* begin block 1.1.1 */
				// Start line: 2333
				// Start offset: 0x80052CE0

				/* begin block 1.1.1.1 */
					// Start line: 2353
					// Start offset: 0x80052E30

					/* begin block 1.1.1.1.1 */
						// Start line: 2354
						// Start offset: 0x80052E5C
						// Variables:
					// 		unsigned char *setp; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2356
							// Start offset: 0x80052E90
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80052E90
						// End Line: 2356
					/* end block 1.1.1.1.1 */
					// End offset: 0x80052F38
					// End Line: 2362
				/* end block 1.1.1.1 */
				// End offset: 0x80052F38
				// End Line: 2362
			/* end block 1.1.1 */
			// End offset: 0x80052F38
			// End Line: 2362
		/* end block 1.1 */
		// End offset: 0x80052F38
		// End Line: 2362
	/* end block 1 */
	// End offset: 0x80052F38
	// End Line: 2362

	/* begin block 2 */
		// Start line: 5291
	/* end block 2 */
	// End Line: 5292

void OperatePedistal__Fii(int pnum,int i)

{
	ItemStruct *pIVar1;
	uchar *pMap;
	int local_18 [2];
	
	if (object[i]._oVar6 != 3) {
		pIVar1 = PlrHasItem__FiiRi(pnum,0x15,local_18);
		if (pIVar1 != (ItemStruct *)0x0) {
			RemoveInvItem__Fii(pnum,local_18[0]);
			object[i]._oAnimFrame = object[i]._oAnimFrame + '\x01';
			object[i]._oVar6 = object[i]._oVar6 + 1;
		}
		if (object[i]._oVar6 == 1) {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(LS_PUDDLE,(int)object[i]._ox,(int)object[i]._oy);
			}
			ObjChangeMap__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
		}
		if (object[i]._oVar6 == 2) {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(LS_PUDDLE,(int)object[i]._ox,(int)object[i]._oy);
			}
			ObjChangeMap__Fiiii(setpc_x + 6,setpc_y + 3,setpc_x + setpc_w,setpc_y + 7);
		}
		if (object[i]._oVar6 == 3) {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(LS_BLODSTAR,(int)object[i]._ox,(int)object[i]._oy);
			}
			ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
													(int)object[i]._oVar4);
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Blood2.DUN",(ulong *)0x0);
			LoadMapObjs__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
			mem_free_dbg__FPv(pMap);
			CreateItem__Fiii(7,setpc_x * 2 + 0x19,setpc_y * 2 + 0x13);
			object[i]._oSelFlag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TryDisarm__Fii(int pnum /*$s0*/, int i /*$s1*/)
 // line 2370, offset 0x80052f54
	/* begin block 1 */
		// Start line: 2371
		// Start offset: 0x80052F54
		// Variables:
	// 		int j; // $a2
	// 		int oi; // $v1
	// 		int oti; // $v0
	// 		int trapdisper; // $s0
	// 		unsigned char checkflag; // $v0
	/* end block 1 */
	// End offset: 0x800530FC
	// End Line: 2396

	/* begin block 2 */
		// Start line: 5390
	/* end block 2 */
	// End Line: 5391

void TryDisarm__Fii(int pnum,int i)

{
	short sVar1;
	long lVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	if (((object[i]._oTrapFlag != '\0') &&
			(sVar1 = plr[pnum]._pDexterity, uVar3 = (uint)currlevel, lVar2 = random__Fil(0x9a,100),
			lVar2 <= (int)((int)sVar1 * 2 + uVar3 * -5))) && (iVar5 = 0, 0 < numobjects)) {
		do {
			iVar4 = (int)objectactive[iVar5];
			if ((object[iVar4]._otype == '6' || object[iVar4]._otype == '5') &&
				 ((int)dung_map[(int)object[iVar4]._oVar1 * 0x6c + (int)object[iVar4]._oVar2].dObject + -1
					== i)) {
				object[iVar4]._oVar4 = 1;
				object[i]._oTrapFlag = '\0';
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < numobjects);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ItemMiscIdIdx__Fi(int imiscid /*$a0*/)
 // line 2402, offset 0x80053118
	/* begin block 1 */
		// Start line: 2403
		// Start offset: 0x80053118
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x80053180
	// End Line: 2406

	/* begin block 2 */
		// Start line: 5457
	/* end block 2 */
	// End Line: 5458

int ItemMiscIdIdx__Fi(int imiscid)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	if ((AllItemsList.iRnd == '\0') || ((uint)AllItemsList.iMiscId != imiscid)) {
		iVar1 = 1;
		do {
			do {
				iVar2 = iVar1;
				iVar1 = iVar2 + 1;
			} while ((&AllItemsList)[iVar2].iRnd == '\0');
			iVar1 = iVar2 + 1;
		} while ((uint)(&AllItemsList)[iVar2].iMiscId != imiscid);
	}
	return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateShrine__Fiii(int pnum /*$s3*/, int i /*$fp*/, int sType /*$s1*/)
 // line 2412, offset 0x80053188
	/* begin block 1 */
		// Start line: 2413
		// Start offset: 0x80053188
		// Variables:
	// 		int r; // $s2
	// 		int xx; // $a0
	// 		int yy; // $a1
	// 		int sc; // $a2
	// 		int v1; // $s0
	// 		int v2; // $s4
	// 		int v3; // $s5
	// 		int v4; // $s1
	// 		unsigned long lv; // $s0
	// 		unsigned long t; // $a2
	// 		unsigned char done; // $s5
	/* end block 1 */
	// End offset: 0x80055730
	// End Line: 2965

	/* begin block 2 */
		// Start line: 5482
	/* end block 2 */
	// End Line: 5483

/* WARNING: Type propagation algorithm not settling */

void OperateShrine__Fiii(int pnum,int i,int sType)

{
	char cVar1;
	char cVar2;
	int *piVar3;
	uint uVar4;
	long v1;
	short sVar5;
	uchar *puVar6;
	undefined4 uVar7;
	int iVar8;
	char *pcVar9;
	int iVar10;
	long v2;
	int iVar11;
	ItemStruct *pIVar12;
	int *piVar13;
	long lVar14;
	uint uVar15;
	ItemStruct *h;
	ItemStruct *pIVar16;
	ItemStruct *h_00;
	int local_b8;
	uint uVar17;
	int l;
	ItemStruct *h_01;
	int l_00;
	int l_01;
	
	if (dropGoldFlag != '\0') {
		dropGoldFlag = '\0';
		dropGoldValue = 0;
	}
	if (object[i]._oSelFlag != '\0') {
		SetRndSeed__Fl(object[i]._oRndSeed);
		object[i]._oSelFlag = '\0';
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(sType,(int)object[i]._ox,(int)object[i]._oy);
			object[i]._oAnimFlag = '\x01';
			object[i]._oAnimDelay = 1;
		}
		else {
			sVar5 = object[i]._oAnimLen;
			object[i]._oAnimFlag = '\0';
			object[i]._oAnimFrame = (char)sVar5;
		}
		if (deltaload == '\0') {
			switch(object[i]._oVar1) {
			case 0:
				if (pnum != myplr) {
					return;
				}
				ModifyPlrStr__Fii(pnum,-1);
				ModifyPlrMag__Fii(pnum,-1);
				ModifyPlrDex__Fii(pnum,-1);
				ModifyPlrVit__Fii(pnum,-1);
				v1 = random__Fil(0,4);
				if (v1 == 1) {
					ModifyPlrMag__Fii(pnum,6);
				}
				else {
					if (v1 < 2) {
						if (v1 == 0) {
							ModifyPlrStr__Fii(pnum,6);
						}
					}
					else {
						if (v1 == 2) {
							ModifyPlrDex__Fii(pnum,6);
						}
						else {
							if (v1 == 3) {
								ModifyPlrVit__Fii(pnum,6);
							}
						}
					}
				}
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc('\f');
				break;
			case 1:
				local_b8 = 0;
				if (pnum != myplr) {
					return;
				}
				l_01 = 0;
				l_00 = pnum * 0x23a8;
				do {
					if (*(short *)((int)&plr[0].InvBody[0]._itype + l_00) != -1) {
						local_b8 = local_b8 + 1;
					}
					l_01 = l_01 + 1;
					l_00 = l_00 + 0x98;
				} while (l_01 < 7);
				l_00 = 0;
				if (0 < local_b8) {
					local_b8 = pnum * 0x23a8;
					do {
						if (((*(short *)((int)&plr[0].InvBody[0]._itype + local_b8) != -1) &&
								(l_01 = *(int *)((int)&plr[0].InvBody[0]._iMaxDur + local_b8), l_01 != 0xff)) &&
							 (l = l_01 + 10, l_01 != 0)) {
							*(int *)((int)&plr[0].InvBody[0]._iDurability + local_b8) =
									 *(int *)((int)&plr[0].InvBody[0]._iDurability + local_b8) + 10;
							l_01 = *(int *)((int)&plr[0].InvBody[0]._iDurability + local_b8);
							*(int *)((int)&plr[0].InvBody[0]._iMaxDur + local_b8) = l;
							if (l < l_01) {
								*(int *)((int)&plr[0].InvBody[0]._iDurability + local_b8) = l;
							}
						}
						l_00 = l_00 + 1;
						local_b8 = local_b8 + 0x98;
					} while (l_00 < 7);
					do {
						do {
							v1 = random__Fil(0,7);
						} while (plr[pnum].InvBody[v1]._itype == -1);
						local_b8 = plr[pnum].InvBody[v1]._iMaxDur;
					} while ((local_b8 == 0xff) || (local_b8 == 0));
					plr[pnum].InvBody[v1]._iDurability = plr[pnum].InvBody[v1]._iDurability + -0x14;
					local_b8 = plr[pnum].InvBody[v1]._iDurability;
					plr[pnum].InvBody[v1]._iMaxDur = plr[pnum].InvBody[v1]._iMaxDur + -0x14;
					if (local_b8 < 1) {
						plr[pnum].InvBody[v1]._iDurability = 1;
					}
					if (plr[pnum].InvBody[v1]._iMaxDur < 1) {
						plr[pnum].InvBody[v1]._iMaxDur = 1;
					}
				}
				InitDiabloMsg__Fc('\r');
				break;
			case 2:
				if (pnum == myplr) {
					if (plr[pnum].InvBody[0]._itype != -1) {
						plr[pnum].InvBody[0]._iAC = plr[pnum].InvBody[0]._iAC + 2;
					}
					if (plr[pnum].InvBody[6]._itype != -1) {
						plr[pnum].InvBody[6]._iAC = plr[pnum].InvBody[6]._iAC + 2;
					}
					sVar5 = plr[pnum].InvBody[4]._itype;
					if (sVar5 != -1) {
						if (sVar5 == 5) {
							plr[pnum].InvBody[4]._iAC = plr[pnum].InvBody[4]._iAC + 2;
						}
						else {
							local_b8 = plr[pnum].InvBody[4]._iMinDam;
							plr[pnum].InvBody[4]._iMaxDam = plr[pnum].InvBody[4]._iMaxDam + -1;
							if (plr[pnum].InvBody[4]._iMaxDam < local_b8) {
								plr[pnum].InvBody[4]._iMaxDam = local_b8;
							}
						}
					}
					sVar5 = plr[pnum].InvBody[5]._itype;
					if (sVar5 != -1) {
						if (sVar5 == 5) {
							plr[pnum].InvBody[5]._iAC = plr[pnum].InvBody[5]._iAC + 2;
						}
						else {
							local_b8 = plr[pnum].InvBody[5]._iMinDam;
							plr[pnum].InvBody[5]._iMaxDam = plr[pnum].InvBody[5]._iMaxDam + -1;
							if (plr[pnum].InvBody[5]._iMaxDam < local_b8) {
								plr[pnum].InvBody[5]._iMaxDam = local_b8;
							}
						}
					}
					local_b8 = pnum * 0x23a8;
					l_00 = 0;
					if (0 < plr[pnum]._pNumInv) {
						l_01 = 0;
						do {
							switch((int)(((uint)*(ushort *)((int)&plr[pnum].InvList[0]._itype + l_01) - 1) *
													0x10000) >> 0x10) {
							case 0:
							case 1:
							case 2:
							case 3:
							case 9:
								l = *(int *)((int)&plr[0].InvList[0]._iMinDam + local_b8);
								*(int *)((int)&plr[0].InvList[0]._iMaxDam + local_b8) =
										 *(int *)((int)&plr[0].InvList[0]._iMaxDam + local_b8) + -1;
								if (*(int *)((int)&plr[0].InvList[0]._iMaxDam + local_b8) < l) {
									*(int *)((int)&plr[0].InvList[0]._iMaxDam + local_b8) = l;
								}
								break;
							case 4:
							case 5:
							case 6:
							case 7:
							case 8:
								*(short *)((int)&plr[0].InvList[0]._iAC + local_b8) =
										 *(short *)((int)&plr[0].InvList[0]._iAC + local_b8) + 2;
							}
							local_b8 = local_b8 + 0x98;
							l_00 = l_00 + 1;
							l_01 = l_01 + 0x98;
						} while (l_00 < plr[pnum]._pNumInv);
					}
					InitDiabloMsg__Fc('\x0e');
				}
				break;
			case 3:
				if (pnum == myplr) {
					sVar5 = plr[pnum].InvBody[4]._itype;
					if ((sVar5 != -1) && (sVar5 != 5)) {
						plr[pnum].InvBody[4]._iMaxDam = plr[pnum].InvBody[4]._iMaxDam + 1;
					}
					sVar5 = plr[pnum].InvBody[5]._itype;
					if ((sVar5 != -1) && (sVar5 != 5)) {
						plr[pnum].InvBody[5]._iMaxDam = plr[pnum].InvBody[5]._iMaxDam + 1;
					}
					local_b8 = 0;
					if (0 < plr[pnum]._pNumInv) {
						l_00 = 0;
						do {
							sVar5 = *(short *)((int)&plr[pnum].InvList[0]._itype + l_00);
							if ((0 < sVar5) && ((sVar5 < 5 || (sVar5 == 10)))) {
								*(int *)((int)&plr[pnum].InvList[0]._iMaxDam + l_00) =
										 *(int *)((int)&plr[pnum].InvList[0]._iMaxDam + l_00) + 1;
							}
							local_b8 = local_b8 + 1;
							l_00 = l_00 + 0x98;
						} while (local_b8 < plr[pnum]._pNumInv);
					}
					InitDiabloMsg__Fc('\x0f');
				}
				break;
			case 4:
			case 0xb:
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,(int)plr[pnum]._px,(int)plr[pnum]._py,
									 (int)plr[pnum]._pdir,0xd,-1,pnum,0,(uint)leveltype << 1);
				if (pnum != myplr) {
					return;
				}
				InitDiabloMsg__Fc('\x10');
				break;
			case 5:
				if (pnum == myplr) {
					l_00 = 0;
					local_b8 = pnum * 0x23a8;
					do {
						if (*(short *)((int)&plr[0].InvBody[0]._itype + local_b8) == 10) {
							*(undefined2 *)((int)&plr[0].InvBody[0]._iCharges + local_b8) =
									 *(undefined2 *)((int)&plr[0].InvBody[0]._iMaxCharges + local_b8);
						}
						l_00 = l_00 + 1;
						local_b8 = local_b8 + 0x98;
					} while (l_00 < 7);
					local_b8 = 0;
					if (0 < plr[pnum]._pNumInv) {
						l_00 = 0;
						do {
							if (*(short *)((int)&plr[pnum].InvList[0]._itype + l_00) == 10) {
								*(undefined2 *)((int)&plr[pnum].InvList[0]._iCharges + l_00) =
										 *(undefined2 *)((int)&plr[pnum].InvList[0]._iMaxCharges + l_00);
							}
							local_b8 = local_b8 + 1;
							l_00 = l_00 + 0x98;
						} while (local_b8 < plr[pnum]._pNumInv);
					}
					l_00 = 0;
					local_b8 = pnum * 0x23a8;
					do {
						if (*(short *)((int)&plr[0].SpdList[0]._itype + local_b8) == 10) {
							*(undefined2 *)((int)&plr[0].SpdList[0]._iCharges + local_b8) =
									 *(undefined2 *)((int)&plr[0].SpdList[0]._iMaxCharges + local_b8);
						}
						l_00 = l_00 + 1;
						local_b8 = local_b8 + 0x98;
					} while (l_00 < 8);
					InitDiabloMsg__Fc('\x11');
				}
				break;
			case 6:
				if (pnum == myplr) {
					l_00 = 0;
					local_b8 = pnum * 0x23a8;
					do {
						l_00 = l_00 + 1;
						*(undefined4 *)((int)&plr[0].InvBody[0]._iDurability + local_b8) =
								 *(undefined4 *)((int)&plr[0].InvBody[0]._iMaxDur + local_b8);
						local_b8 = local_b8 + 0x98;
					} while (l_00 < 7);
					local_b8 = 0;
					if (0 < plr[pnum]._pNumInv) {
						l_00 = 0;
						do {
							*(undefined4 *)((int)&plr[pnum].InvList[0]._iDurability + l_00) =
									 *(undefined4 *)((int)&plr[pnum].InvList[0]._iMaxDur + l_00);
							local_b8 = local_b8 + 1;
							l_00 = l_00 + 0x98;
						} while (local_b8 < plr[pnum]._pNumInv);
					}
					l_00 = 0;
					local_b8 = pnum * 0x23a8;
					do {
						l_00 = l_00 + 1;
						*(undefined4 *)((int)&plr[0].SpdList[0]._iDurability + local_b8) =
								 *(undefined4 *)((int)&plr[0].SpdList[0]._iMaxDur + local_b8);
						local_b8 = local_b8 + 0x98;
					} while (l_00 < 8);
					InitDiabloMsg__Fc('\x12');
				}
				break;
			case 7:
				local_b8 = 0;
				if (pnum != myplr) {
					return;
				}
				uVar17 = 0;
				uVar15 = 1;
				l_00 = 1;
				uVar4 = *(uint *)&plr[pnum]._pMemSpells & 1;
				do {
					if ((uVar4 != 0) || ((*(uint *)((int)&plr[pnum]._pMemSpells + 4) & uVar17) != 0)) {
						local_b8 = local_b8 + 1;
					}
					uVar17 = uVar17 << 1 | uVar15 >> 0x1f;
					uVar15 = uVar15 << 1;
					l_00 = l_00 + 1;
					uVar4 = *(uint *)&plr[pnum]._pMemSpells & uVar15;
				} while (l_00 < 0x26);
				l_00 = 1;
				if (1 < local_b8) {
					uVar15 = 0;
					uVar4 = 1;
					pcVar9 = plr[pnum]._pSplLvl;
					do {
						pcVar9 = pcVar9 + 1;
						if ((((*(uint *)&plr[pnum]._pMemSpells & uVar4) != 0) ||
								((*(uint *)((int)&plr[pnum]._pMemSpells + 4) & uVar15) != 0)) && (*pcVar9 < '\x0f'))
						{
							*pcVar9 = *pcVar9 + '\x01';
						}
						uVar15 = uVar15 << 1 | uVar4 >> 0x1f;
						uVar4 = uVar4 << 1;
						l_00 = l_00 + 1;
					} while (l_00 < 0x26);
					do {
						uVar4 = random__Fil(0,0x25);
						if ((int)(uVar4 << 0x1a) < 0) {
							uVar15 = 1 << (uVar4 & 0x1f);
							uVar17 = 0;
						}
						else {
							uVar15 = 0 << (uVar4 & 0x1f);
							if (uVar4 << 0x1a != 0) {
								uVar15 = uVar15 | 1U >> (-uVar4 & 0x1f);
							}
							uVar17 = 1 << (uVar4 & 0x1f);
						}
					} while (((*(uint *)&plr[pnum]._pMemSpells & uVar17) == 0) &&
									((*(uint *)((int)&plr[pnum]._pMemSpells + 4) & uVar15) == 0));
					pcVar9 = plr[pnum]._pSplLvl + uVar4 + 1;
					if (*pcVar9 < '\x02') {
						*pcVar9 = '\0';
					}
					else {
						*pcVar9 = *pcVar9 + -2;
					}
				}
				InitDiabloMsg__Fc('\x13');
				break;
			case 8:
				local_b8 = 0;
				if (0 < numobjects) {
					do {
						l_00 = (int)objectactive[local_b8];
						if ((((uint)(byte)object[l_00]._otype - 5 < 2) || (object[l_00]._otype == 7)) &&
							 (object[l_00]._oSelFlag == '\0')) {
							v1 = GetRndSeed__Fv();
							cVar2 = object[l_00]._oAnimFrame;
							object[l_00]._oRndSeed = v1;
							object[l_00]._oSelFlag = '\x01';
							object[l_00]._oAnimFrame = cVar2 + -2;
						}
						local_b8 = local_b8 + 1;
					} while (local_b8 < numobjects);
				}
				if (pnum == myplr) {
					InitDiabloMsg__Fc('\x14');
				}
				break;
			case 9:
				if (pnum != myplr) {
					return;
				}
				uVar7 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
				cVar2 = plr[pnum]._pSplLvl[1];
				*(uint *)&plr[pnum]._pMemSpells = *(uint *)&plr[pnum]._pMemSpells | 1;
				*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar7;
				if (cVar2 < '\x0f') {
					plr[pnum]._pSplLvl[1] = cVar2 + '\x01';
					if (plr[pnum]._pSplLvl[1] < '\x0f') {
						plr[pnum]._pSplLvl[1] = plr[pnum]._pSplLvl[1] + '\x01';
					}
				}
				l = plr[pnum]._pMaxManaBase;
				iVar11 = plr[pnum]._pMana;
				l_00 = plr[pnum]._pManaBase;
				iVar10 = plr[pnum]._pMaxMana;
				local_b8 = l / 10;
				plr[pnum]._pManaBase = l_00 - local_b8;
				iVar8 = plr[pnum]._pMaxMana;
				plr[pnum]._pMana = plr[pnum]._pMana - local_b8;
				l_01 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMaxMana = iVar8 - local_b8;
				iVar8 = plr[pnum]._pMana;
				plr[pnum]._pMaxManaBase = l_01 - local_b8;
				if (iVar8 >> 6 < 1) {
					plr[pnum]._pMana = iVar11 - l_00;
					plr[pnum]._pManaBase = 0;
				}
				if (plr[pnum]._pMaxMana >> 6 < 1) {
					plr[pnum]._pMaxMana = iVar10 - l;
					plr[pnum]._pMaxManaBase = 0;
				}
				InitDiabloMsg__Fc('\x15');
				break;
			case 10:
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,(int)plr[pnum]._px,(int)plr[pnum]._py,
									 (int)plr[pnum]._pdir,0x2a,-1,pnum,0,(uint)leveltype << 1);
				if (pnum != myplr) {
					return;
				}
				v1 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMana = plr[pnum]._pMaxMana;
				plr[pnum]._pManaBase = v1;
				InitDiabloMsg__Fc('\x16');
				break;
			case 0xc:
				if (pnum == myplr) {
					local_b8 = 0;
					if (0 < plr[pnum]._pNumInv) {
						l_00 = 0;
						do {
							if (*(short *)((int)&plr[pnum].InvList[0]._itype + l_00) == 0) {
								sVar5 = *(short *)((int)&plr[pnum].InvList[0]._iMiscId + l_00);
								if ((sVar5 == 3) || (sVar5 == 6)) {
									l_01 = ItemMiscIdIdx__Fi(0x12);
									h_01 = &plr[pnum].HoldItem;
									SetPlrHandItem__FP10ItemStructi(h_01,l_01);
									GetPlrHandSeed__FP10ItemStruct(h_01);
									plr[pnum].HoldItem._iStatFlag = '\x01';
									piVar3 = (int *)(l_00 + pnum * 0x23a8 + -0x7ff20f00);
									do {
										h_00 = h_01;
										piVar13 = piVar3;
										l_01 = h_00->_iVMult1;
										l = h_00->_iVAdd2;
										iVar8 = h_00->_iVMult2;
										*piVar13 = h_00->_iVAdd1;
										piVar13[1] = l_01;
										piVar13[2] = l;
										piVar13[3] = iVar8;
										h_01 = (ItemStruct *)&h_00->_iSeed;
										piVar3 = piVar13 + 4;
									} while (h_01 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
									l_01 = h_00->_ivalue;
									piVar13[4] = h_01->_iVAdd1;
									piVar13[5] = l_01;
								}
								sVar5 = *(short *)((int)&plr[pnum].InvList[0]._iMiscId + l_00);
								if ((sVar5 == 2) || (sVar5 == 7)) {
									l_01 = ItemMiscIdIdx__Fi(0x13);
									h_01 = &plr[pnum].HoldItem;
									SetPlrHandItem__FP10ItemStructi(h_01,l_01);
									GetPlrHandSeed__FP10ItemStruct(h_01);
									plr[pnum].HoldItem._iStatFlag = '\x01';
									piVar3 = (int *)(l_00 + pnum * 0x23a8 + -0x7ff20f00);
									do {
										h_00 = h_01;
										piVar13 = piVar3;
										l_01 = h_00->_iVMult1;
										l = h_00->_iVAdd2;
										iVar8 = h_00->_iVMult2;
										*piVar13 = h_00->_iVAdd1;
										piVar13[1] = l_01;
										piVar13[2] = l;
										piVar13[3] = iVar8;
										h_01 = (ItemStruct *)&h_00->_iSeed;
										piVar3 = piVar13 + 4;
									} while (h_01 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
									l_01 = h_00->_ivalue;
									piVar13[4] = h_01->_iVAdd1;
									piVar13[5] = l_01;
								}
							}
							local_b8 = local_b8 + 1;
							l_00 = l_00 + 0x98;
						} while (local_b8 < plr[pnum]._pNumInv);
					}
					l_00 = 0;
					local_b8 = pnum * 0x23a8;
					h_01 = plr[pnum].SpdList;
					do {
						if (*(short *)((int)&plr[0].SpdList[0]._itype + local_b8) == 0) {
							sVar5 = *(short *)((int)&plr[0].SpdList[0]._iMiscId + local_b8);
							if ((sVar5 == 3) || (sVar5 == 6)) {
								l_01 = ItemMiscIdIdx__Fi(0x12);
								h = &plr[pnum].HoldItem;
								SetPlrHandItem__FP10ItemStructi(h,l_01);
								GetPlrHandSeed__FP10ItemStruct(h);
								plr[pnum].HoldItem._iStatFlag = '\x01';
								h_00 = h_01;
								do {
									pIVar16 = h;
									pIVar12 = h_00;
									l_01 = pIVar16->_iVMult1;
									l = pIVar16->_iVAdd2;
									iVar8 = pIVar16->_iVMult2;
									pIVar12->_iVAdd1 = pIVar16->_iVAdd1;
									pIVar12->_iVMult1 = l_01;
									pIVar12->_iVAdd2 = l;
									pIVar12->_iVMult2 = iVar8;
									h = (ItemStruct *)&pIVar16->_iSeed;
									h_00 = (ItemStruct *)&pIVar12->_iSeed;
								} while (h != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
								l_01 = pIVar16->_ivalue;
								((ItemStruct *)&pIVar12->_iSeed)->_iVAdd1 = h->_iVAdd1;
								pIVar12->_ivalue = l_01;
								sVar5 = *(short *)((int)&plr[0].SpdList[0]._iMiscId + local_b8);
							}
							if ((sVar5 == 2) || (sVar5 == 7)) {
								l_01 = ItemMiscIdIdx__Fi(0x13);
								h_00 = &plr[pnum].HoldItem;
								SetPlrHandItem__FP10ItemStructi(h_00,l_01);
								GetPlrHandSeed__FP10ItemStruct(h_00);
								plr[pnum].HoldItem._iStatFlag = '\x01';
								piVar3 = (int *)((int)&plr[pnum].SpdList[0]._iVAdd1 + l_00);
								do {
									h = h_00;
									piVar13 = piVar3;
									l_01 = h->_iVMult1;
									l = h->_iVAdd2;
									iVar8 = h->_iVMult2;
									*piVar13 = h->_iVAdd1;
									piVar13[1] = l_01;
									piVar13[2] = l;
									piVar13[3] = iVar8;
									h_00 = (ItemStruct *)&h->_iSeed;
									piVar3 = piVar13 + 4;
								} while (h_00 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
								l_01 = h->_ivalue;
								piVar13[4] = h_00->_iVAdd1;
								piVar13[5] = l_01;
							}
						}
						local_b8 = local_b8 + 0x98;
						l_00 = l_00 + 0x98;
						h_01 = h_01 + 1;
					} while (local_b8 < pnum * 0x23a8 + 0x4c0);
					InitDiabloMsg__Fc('\x18');
				}
				break;
			case 0xd:
				if (pnum != myplr) {
					return;
				}
				ModifyPlrMag__Fii(pnum,2);
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc('\x19');
				break;
			case 0xe:
				if (pnum != myplr) {
					return;
				}
				if (currlevel < 4) {
					CreateTypeItem__FiiUciiUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',0,7,0,1);
					cVar2 = object[i]._ox;
					cVar1 = object[i]._oy;
					local_b8 = 2;
				}
				else {
					CreateTypeItem__FiiUciiUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',0,0x13,0,1);
					cVar2 = object[i]._ox;
					cVar1 = object[i]._oy;
					local_b8 = 0x13;
				}
				CreateTypeItem__FiiUciiUcUc((int)cVar2,(int)cVar1,'\0',0,local_b8,0,1);
				v1 = plr[pnum]._pMaxManaBase;
				v2 = plr[pnum]._pMaxHP;
				lVar14 = plr[pnum]._pMaxHPBase;
				plr[pnum]._pMana = plr[pnum]._pMaxMana;
				plr[pnum]._pManaBase = v1;
				plr[pnum]._pHitPoints = v2;
				plr[pnum]._pHPBase = lVar14;
				InitDiabloMsg__Fc('\x1a');
				break;
			case 0xf:
				local_b8 = 0;
				do {
					v1 = random__Fil(0x9f,0x70);
					v2 = random__Fil(0x9f,0x70);
					local_b8 = local_b8 + 1;
					if (0x3100 < local_b8) break;
				} while (((nSolidTable[(int)dung_map[v1 * 0x6c + v2].dPiece] != '\0') ||
								 (dung_map[v1 * 0x6c + v2].dObject != '\0')) ||
								(dung_map[v1 * 0x6c + v2].dMonster != 0));
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,v1,v2,(int)plr[pnum]._pdir,3,-1,pnum,0,
									 (uint)leveltype << 1);
				if (pnum != myplr) {
					return;
				}
				InitDiabloMsg__Fc('\x1b');
				break;
			case 0x10:
				if (pnum != myplr) {
					return;
				}
				uVar7 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
				cVar2 = plr[pnum]._pSplLvl[0x1e];
				*(uint *)&plr[pnum]._pMemSpells = *(uint *)&plr[pnum]._pMemSpells | 0x20000000;
				*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar7;
				if (cVar2 < '\x0f') {
					plr[pnum]._pSplLvl[0x1e] = cVar2 + '\x01';
					if (plr[pnum]._pSplLvl[0x1e] < '\x0f') {
						plr[pnum]._pSplLvl[0x1e] = plr[pnum]._pSplLvl[0x1e] + '\x01';
					}
				}
				l = plr[pnum]._pMaxManaBase;
				iVar11 = plr[pnum]._pMana;
				l_00 = plr[pnum]._pManaBase;
				iVar10 = plr[pnum]._pMaxMana;
				local_b8 = l / 10;
				plr[pnum]._pManaBase = l_00 - local_b8;
				iVar8 = plr[pnum]._pMaxMana;
				plr[pnum]._pMana = plr[pnum]._pMana - local_b8;
				l_01 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMaxMana = iVar8 - local_b8;
				iVar8 = plr[pnum]._pMana;
				plr[pnum]._pMaxManaBase = l_01 - local_b8;
				if (iVar8 >> 6 < 1) {
					plr[pnum]._pMana = iVar11 - l_00;
					plr[pnum]._pManaBase = 0;
				}
				if (plr[pnum]._pMaxMana >> 6 < 1) {
					plr[pnum]._pMaxMana = iVar10 - l;
					plr[pnum]._pMaxManaBase = 0;
				}
				InitDiabloMsg__Fc('\x1c');
				break;
			case 0x11:
				local_b8 = 0;
				if (pnum != myplr) {
					return;
				}
				l_00 = pnum * 0x23a8;
				do {
					if (*(char *)(l_00 + -0x7ff1f73c + local_b8) == '\0') {
						v1 = random__Fil(0xa0,(uint)leveltype * 10);
						l_01 = plr[pnum]._pNumInv;
						l = (uint)leveltype * 5 + v1;
						piVar3 = (int *)(l_01 * 0x98 + l_00 + -0x7ff20f00);
						h_01 = &golditem;
						do {
							h_00 = h_01;
							piVar13 = piVar3;
							iVar8 = h_00->_iVMult1;
							iVar10 = h_00->_iVAdd2;
							iVar11 = h_00->_iVMult2;
							*piVar13 = h_00->_iVAdd1;
							piVar13[1] = iVar8;
							piVar13[2] = iVar10;
							piVar13[3] = iVar11;
							piVar3 = piVar13 + 4;
							h_01 = (ItemStruct *)&h_00->_iSeed;
						} while ((ItemStruct *)&h_00->_iSeed != (ItemStruct *)&golditem._iMinMag);
						iVar8 = h_00->_ivalue;
						piVar13[4] = golditem._144_4_;
						piVar13[5] = iVar8;
						v1 = GetRndSeed__Fv();
						plr[pnum].InvList[l_01]._iSeed = v1;
						plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
						*(undefined *)(l_00 + -0x7ff1f73c + local_b8) = (char)plr[pnum]._pNumInv;
						plr[pnum].InvList[l_01]._ivalue = l;
						plr[pnum]._pGold = plr[pnum]._pGold + l;
						SetGoldCurs__Fii(pnum,l_01);
					}
					local_b8 = local_b8 + 1;
				} while (local_b8 < 0x28);
				InitDiabloMsg__Fc('\x1d');
				break;
			case 0x12:
				if (pnum == myplr) {
					InitDiabloMsg__Fc('\x1e');
				}
				else {
					InitDiabloMsg__Fc('\x1f');
					local_b8 = myplr;
					v1 = plr[myplr]._pMaxHPBase;
					v2 = plr[myplr]._pMaxMana;
					lVar14 = plr[myplr]._pMaxManaBase;
					plr[myplr]._pHitPoints = plr[myplr]._pMaxHP;
					plr[local_b8]._pHPBase = v1;
					plr[local_b8]._pMana = v2;
					plr[local_b8]._pManaBase = lVar14;
				}
				break;
			case 0x13:
				if (pnum != myplr) {
					return;
				}
				ModifyPlrDex__Fii(pnum,2);
				CheckStats__Fi(pnum);
				if (pnum == myplr) {
					InitDiabloMsg__Fc(' ');
				}
				break;
			case 0x14:
				if (pnum != myplr) {
					return;
				}
				ModifyPlrStr__Fii(pnum,2);
				CheckStats__Fi(pnum);
				if (pnum == myplr) {
					InitDiabloMsg__Fc('!');
				}
				break;
			case 0x15:
				if (pnum != myplr) {
					return;
				}
				ModifyPlrVit__Fii(pnum,2);
				CheckStats__Fi(pnum);
				if (pnum == myplr) {
					InitDiabloMsg__Fc('\"');
				}
				break;
			case 0x16:
				if (pnum == myplr) {
					local_b8 = 0;
					do {
						l_00 = 0;
						puVar6 = &automapview;
						do {
							puVar6[local_b8] = -1;
							l_00 = l_00 + 1;
							puVar6 = puVar6 + 0x28;
						} while (l_00 < 5);
						local_b8 = local_b8 + 1;
					} while (local_b8 < 0x28);
					InitDiabloMsg__Fc('#');
				}
				break;
			case 0x17:
				if (pnum != myplr) {
					return;
				}
				uVar7 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
				cVar2 = plr[pnum]._pSplLvl[0x1f];
				*(uint *)&plr[pnum]._pMemSpells = *(uint *)&plr[pnum]._pMemSpells | 0x40000000;
				*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar7;
				if (cVar2 < '\x0f') {
					plr[pnum]._pSplLvl[0x1f] = cVar2 + '\x01';
					if (plr[pnum]._pSplLvl[0x1f] < '\x0f') {
						plr[pnum]._pSplLvl[0x1f] = plr[pnum]._pSplLvl[0x1f] + '\x01';
					}
				}
				l = plr[pnum]._pMaxManaBase;
				iVar11 = plr[pnum]._pMana;
				l_00 = plr[pnum]._pManaBase;
				iVar10 = plr[pnum]._pMaxMana;
				local_b8 = l / 10;
				plr[pnum]._pManaBase = l_00 - local_b8;
				iVar8 = plr[pnum]._pMaxMana;
				plr[pnum]._pMana = plr[pnum]._pMana - local_b8;
				l_01 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMaxMana = iVar8 - local_b8;
				iVar8 = plr[pnum]._pMana;
				plr[pnum]._pMaxManaBase = l_01 - local_b8;
				if (iVar8 >> 6 < 1) {
					plr[pnum]._pMana = iVar11 - l_00;
					plr[pnum]._pManaBase = 0;
				}
				if (plr[pnum]._pMaxMana >> 6 < 1) {
					plr[pnum]._pMaxMana = iVar10 - l;
					plr[pnum]._pMaxManaBase = 0;
				}
				InitDiabloMsg__Fc('$');
				break;
			case 0x18:
				local_b8 = 0;
				if (pnum != myplr) {
					return;
				}
				l_00 = pnum * 0x23a8;
				do {
					if (((&plr[0].InvBody[0]._iMagical)[l_00] != '\0') &&
						 ((&plr[0].InvBody[0]._iIdentified)[l_00] == '\0')) {
						(&plr[0].InvBody[0]._iIdentified)[l_00] = '\x01';
					}
					local_b8 = local_b8 + 1;
					l_00 = l_00 + 0x98;
				} while (local_b8 < 7);
				local_b8 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_00 = 0;
					do {
						if (((&plr[pnum].InvList[0]._iMagical)[l_00] != '\0') &&
							 ((&plr[pnum].InvList[0]._iIdentified)[l_00] == '\0')) {
							(&plr[pnum].InvList[0]._iIdentified)[l_00] = '\x01';
						}
						local_b8 = local_b8 + 1;
						l_00 = l_00 + 0x98;
					} while (local_b8 < plr[pnum]._pNumInv);
				}
				l_00 = 0;
				local_b8 = pnum * 0x23a8;
				do {
					if (((&plr[0].SpdList[0]._iMagical)[local_b8] != '\0') &&
						 ((&plr[0].SpdList[0]._iIdentified)[local_b8] == '\0')) {
						(&plr[0].SpdList[0]._iIdentified)[local_b8] = '\x01';
					}
					l_00 = l_00 + 1;
					local_b8 = local_b8 + 0x98;
				} while (l_00 < 8);
				InitDiabloMsg__Fc('%');
				break;
			case 0x19:
				if (pnum == myplr) {
					InitDiabloMsg__Fc('&');
				}
				else {
					InitDiabloMsg__Fc('\'');
					v1 = random__Fil(0x9b,4);
					local_b8 = -1;
					if (v1 == 0) {
						local_b8 = 1;
					}
					l_00 = -1;
					if (v1 == 1) {
						l_00 = 1;
					}
					l_01 = -1;
					if (v1 == 2) {
						l_01 = 1;
					}
					l = -1;
					if (v1 == 3) {
						l = 1;
					}
					ModifyPlrStr__Fii(myplr,local_b8);
					ModifyPlrMag__Fii(myplr,l_00);
					ModifyPlrDex__Fii(myplr,l_01);
					ModifyPlrVit__Fii(myplr,l);
					CheckStats__Fi(myplr);
				}
			}
			CalcPlrInv__FiUc(pnum,'\x01');
			force_redraw = 0xff;
			if (pnum == myplr) {
				NetSendCmdParam2__FUcUcUsUs('\0','.',(ushort)pnum,(ushort)i);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSkelBook__FiiUc(int pnum /*$s3*/, int i /*$s1*/, unsigned char sendmsg /*$s2*/)
 // line 2971, offset 0x80055764
	/* begin block 1 */
		// Start line: 2972
		// Start offset: 0x80055764
	/* end block 1 */
	// End offset: 0x800558C0
	// End Line: 2982

	/* begin block 2 */
		// Start line: 6650
	/* end block 2 */
	// End Line: 6651

void OperateSkelBook__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	char cVar2;
	long lVar3;
	int imisc;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_ISCROL,(int)object[i]._ox,(int)object[i]._oy);
		}
		cVar2 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar2 + '\x02';
		if (deltaload == '\0') {
			SetRndSeed__Fl(object[i]._oRndSeed);
			lVar3 = random__Fil(0xa1,5);
			if (lVar3 == 0) {
				cVar2 = object[i]._ox;
				cVar1 = object[i]._oy;
				imisc = 0x18;
			}
			else {
				cVar2 = object[i]._ox;
				cVar1 = object[i]._oy;
				imisc = 0x15;
			}
			CreateTypeItem__FiiUciiUcUc((int)cVar2,(int)cVar1,'\0',0,imisc,(uint)sendmsg,0);
			if (pnum == myplr) {
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateBookCase__FiiUc(int pnum /*$s3*/, int i /*$s1*/, unsigned char sendmsg /*$s2*/)
 // line 2988, offset 0x800558e0
	/* begin block 1 */
		// Start line: 2989
		// Start offset: 0x800558E0
	/* end block 1 */
	// End offset: 0x80055A90
	// End Line: 3009

	/* begin block 2 */
		// Start line: 6689
	/* end block 2 */
	// End Line: 6690

void OperateBookCase__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	uchar uVar2;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_ISCROL,(int)object[i]._ox,(int)object[i]._oy);
		}
		cVar1 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar1 + -2;
		if (deltaload == '\0') {
			SetRndSeed__Fl(object[i]._oRndSeed);
			CreateTypeItem__FiiUciiUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',0,0x18,(uint)sendmsg,0)
			;
			uVar2 = QuestStatus__Fi(3);
			if ((((uVar2 != '\0') && (MonsterStruct_ARRAY_80114998[0].mName == (uint)UniqMonst[2].mName))
					&& (MonsterStruct_ARRAY_80114998[0]._msquelch == -1)) &&
				 (MonsterStruct_ARRAY_80114998[0]._mhitpoints != 0)) {
				MonsterStruct_ARRAY_80114998[0].mtalkmsg = 0x95;
				M_StartStand__Fii(0,(int)MonsterStruct_ARRAY_80114998[0]._mdir);
				MonsterStruct_ARRAY_80114998[0]._mgoal = '\x05';
				MonsterStruct_ARRAY_80114998[0]._mmode = '\x11';
			}
			if (pnum == myplr) {
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateDecap__FiiUc(int pnum /*$s3*/, int i /*$s1*/, unsigned char sendmsg /*$s2*/)
 // line 3015, offset 0x80055ab0
	/* begin block 1 */
		// Start line: 3016
		// Start offset: 0x80055AB0
	/* end block 1 */
	// End offset: 0x80055B78
	// End Line: 3023

	/* begin block 2 */
		// Start line: 6749
	/* end block 2 */
	// End Line: 6750

void OperateDecap__FiiUc(int pnum,int i,uchar sendmsg)

{
	if ((object[i]._oSelFlag != '\0') && (object[i]._oSelFlag = '\0', deltaload == '\0')) {
		SetRndSeed__Fl(object[i]._oRndSeed);
		CreateRndItem__FiiUcUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',sendmsg,0);
		if (pnum == myplr) {
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateArmorStand__FiiUc(int pnum /*$s3*/, int i /*$s2*/, unsigned char sendmsg /*$s1*/)
 // line 3029, offset 0x80055b98
	/* begin block 1 */
		// Start line: 3030
		// Start offset: 0x80055B98
		// Variables:
	// 		int uniqueRnd; // $a2
	/* end block 1 */
	// End offset: 0x80055CE8
	// End Line: 3057

	/* begin block 2 */
		// Start line: 6781
	/* end block 2 */
	// End Line: 6782

void OperateArmorStand__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	long lVar2;
	uint uVar3;
	uchar onlygood;
	int itype;
	
	if (object[i]._oSelFlag == '\0') {
		return;
	}
	cVar1 = object[i]._oAnimFrame;
	object[i]._oSelFlag = '\0';
	object[i]._oAnimFrame = cVar1 + '\x01';
	if (deltaload != '\0') {
		return;
	}
	SetRndSeed__Fl(object[i]._oRndSeed);
	lVar2 = random__Fil(0,2);
	uVar3 = (uint)currlevel;
	itype = 6;
	if (currlevel < 6) {
		onlygood = '\x01';
	}
	else {
		onlygood = (uchar)lVar2;
		if (uVar3 - 6 < 4) {
			itype = 8;
		}
		else {
			onlygood = '\0';
			if ((2 < uVar3 - 10) && (onlygood = '\x01', 3 < uVar3 - 0xd)) goto LAB_80055cc8;
			itype = 9;
		}
	}
	CreateTypeItem__FiiUciiUcUc
						((int)object[i]._ox,(int)object[i]._oy,onlygood,itype,0,(uint)sendmsg,0);
LAB_80055cc8:
	if (pnum == myplr) {
		NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindValidShrine__Fi(int i /*$a0*/)
 // line 3069, offset 0x80055d08
	/* begin block 1 */
		// Start line: 3070
		// Start offset: 0x80055D08
		// Variables:
	// 		int rv; // $a0
	// 		unsigned char done; // $s0
	/* end block 1 */
	// End offset: 0x80055DE0
	// End Line: 3092

	/* begin block 2 */
		// Start line: 6872
	/* end block 2 */
	// End Line: 6873

int FindValidShrine__Fi(int i)

{
	bool bVar1;
	bool bVar2;
	long lVar3;
	
	bVar2 = false;
	do {
		do {
			lVar3 = random__Fil(0,0x1a);
			if (currlevel != '\0') {
				bVar1 = currlevel < 0x11;
				if (lVar3 == 7) {
					bVar1 = currlevel < 9;
				}
				if ((bVar1) && (lVar3 != 8)) {
					bVar2 = true;
				}
			}
		} while (!bVar2);
		if ((gbMaxPlayers == '\x01') || (shrineavail[lVar3] != '\x01')) {
			bVar2 = true;
			if (gbMaxPlayers == '\x01') {
				bVar2 = shrineavail[lVar3] != '\x02';
			}
		}
		else {
			bVar2 = false;
		}
	} while (!bVar2);
	return lVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateGoatShrine__Fiii(int pnum /*$s2*/, int i /*$s1*/, int sType /*$s3*/)
 // line 3098, offset 0x80055df8
	/* begin block 1 */
		// Start line: 3099
		// Start offset: 0x80055DF8
	/* end block 1 */
	// End offset: 0x80055E80
	// End Line: 3105

	/* begin block 2 */
		// Start line: 6932
	/* end block 2 */
	// End Line: 6933

void OperateGoatShrine__Fiii(int pnum,int i,int sType)

{
	int iVar1;
	
	SetRndSeed__Fl(object[i]._oRndSeed);
	iVar1 = FindValidShrine__Fi(i);
	object[i]._oVar1 = (short)iVar1;
	OperateShrine__Fiii(pnum,i,sType);
	object[i]._oAnimDelay = 2;
	force_redraw = 0xff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateCauldron__Fiii(int pnum /*$s2*/, int i /*$s1*/, int sType /*$s3*/)
 // line 3111, offset 0x80055ea0
	/* begin block 1 */
		// Start line: 3112
		// Start offset: 0x80055EA0
	/* end block 1 */
	// End offset: 0x80055F34
	// End Line: 3119

	/* begin block 2 */
		// Start line: 6961
	/* end block 2 */
	// End Line: 6962

void OperateCauldron__Fiii(int pnum,int i,int sType)

{
	int iVar1;
	
	SetRndSeed__Fl(object[i]._oRndSeed);
	iVar1 = FindValidShrine__Fi(i);
	object[i]._oVar1 = (short)iVar1;
	OperateShrine__Fiii(pnum,i,sType);
	object[i]._oAnimFrame = '\x03';
	object[i]._oAnimFlag = '\0';
	force_redraw = 0xff;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ OperateFountains__Fii(int pnum /*$s2*/, int i /*$s7*/)
 // line 3125, offset 0x80055f54
	/* begin block 1 */
		// Start line: 3126
		// Start offset: 0x80055F54
		// Variables:
	// 		int ii; // $s5
	// 		unsigned char rv; // $s3

		/* begin block 1.1 */
			// Start line: 3126
			// Start offset: 0x80055F54

			/* begin block 1.1.1 */
				// Start line: 3133
				// Start offset: 0x80055FF8

				/* begin block 1.1.1.1 */
					// Start line: 3178
					// Start offset: 0x8005634C

					/* begin block 1.1.1.1.1 */
						// Start line: 3178
						// Start offset: 0x80056364
						// Variables:
					// 		int rndVal; // $s0
					// 		int statVal; // $s3
					// 		int saveRnd; // $s4
					// 		int status; // $s6
					/* end block 1.1.1.1.1 */
					// End offset: 0x800564C0
					// End Line: 3213
				/* end block 1.1.1.1 */
				// End offset: 0x800564C0
				// End Line: 3213
			/* end block 1.1.1 */
			// End offset: 0x800564C0
			// End Line: 3215
		/* end block 1.1 */
		// End offset: 0x800564C0
		// End Line: 3215
	/* end block 1 */
	// End offset: 0x800564D0
	// End Line: 3218

	/* begin block 2 */
		// Start line: 6993
	/* end block 2 */
	// End Line: 6994

uchar OperateFountains__Fii(int pnum,int i)

{
	char cVar1;
	bool bVar2;
	long lVar3;
	int iVar4;
	int l;
	int iVar5;
	
	SetRndSeed__Fl(object[i]._oRndSeed);
	cVar1 = object[i]._otype;
	if (cVar1 == 'L') {
		if (deltaload != '\0') {
			return '\0';
		}
		if (pnum != myplr) {
			return '\0';
		}
		if (plr[pnum]._pMaxMana <= plr[pnum]._pMana) {
LAB_80056230:
			PlaySfxLoc__Fiii(LS_FOUNTAIN,(int)object[i]._ox,(int)object[i]._oy);
			force_redraw = 0xff;
			return '\0';
		}
		PlaySfxLoc__Fiii(LS_FOUNTAIN,(int)object[i]._ox,(int)object[i]._oy);
		l = plr[pnum]._pMaxMana;
		plr[pnum]._pMana = plr[pnum]._pMana + 0x40;
		iVar4 = plr[pnum]._pMana;
		plr[pnum]._pManaBase = plr[pnum]._pManaBase + 0x40;
		if (l < iVar4) {
			lVar3 = plr[pnum]._pMaxManaBase;
			plr[pnum]._pMana = l;
			plr[pnum]._pManaBase = lVar3;
			force_redraw = 0xff;
			return '\x01';
		}
	}
	else {
		if (cVar1 < 'M') {
			if (cVar1 != 'B') {
				force_redraw = 0xff;
				return '\0';
			}
			if (deltaload != '\0') {
				return '\0';
			}
			if (pnum != myplr) {
				return '\0';
			}
			if (plr[pnum]._pMaxHP <= plr[pnum]._pHitPoints) goto LAB_80056230;
			PlaySfxLoc__Fiii(LS_FOUNTAIN,(int)object[i]._ox,(int)object[i]._oy);
			l = plr[pnum]._pMaxHP;
			plr[pnum]._pHitPoints = plr[pnum]._pHitPoints + 0x40;
			iVar4 = plr[pnum]._pHitPoints;
			plr[pnum]._pHPBase = plr[pnum]._pHPBase + 0x40;
			if (l < iVar4) {
				lVar3 = plr[pnum]._pMaxHPBase;
				plr[pnum]._pHitPoints = l;
				plr[pnum]._pHPBase = lVar3;
				force_redraw = 0xff;
				return '\x01';
			}
		}
		else {
			if (cVar1 == 'Q') {
				if (object[i]._oSelFlag == '\0') {
					force_redraw = 0xff;
					return '\0';
				}
				if (deltaload == '\0') {
					PlaySfxLoc__Fiii(LS_FOUNTAIN,(int)object[i]._ox,(int)object[i]._oy);
				}
				object[i]._oSelFlag = '\0';
				if (deltaload != '\0') {
					return '\0';
				}
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,(int)plr[pnum]._px,(int)plr[pnum]._py,
									 (int)plr[pnum]._pdir,0x27,-1,pnum,0,(uint)leveltype << 1);
			}
			else {
				if (cVar1 != 'R') {
					force_redraw = 0xff;
					return '\0';
				}
				if (object[i]._oSelFlag == '\0') {
					force_redraw = 0xff;
					return '\0';
				}
				l = -1;
				iVar4 = -1;
				bVar2 = false;
				iVar5 = 0;
				if (deltaload == '\0') {
					PlaySfxLoc__Fiii(LS_FOUNTAIN,(int)object[i]._ox,(int)object[i]._oy);
				}
				object[i]._oSelFlag = '\0';
				if (deltaload != '\0') {
					return '\0';
				}
				if (pnum != myplr) {
					return '\0';
				}
				do {
					lVar3 = random__Fil(0,4);
					if (lVar3 != iVar4) {
						if (lVar3 == 1) {
							ModifyPlrMag__Fii(pnum,l);
						}
						else {
							if (lVar3 < 2) {
								if (lVar3 == 0) {
									ModifyPlrStr__Fii(pnum,l);
								}
							}
							else {
								if (lVar3 == 2) {
									ModifyPlrDex__Fii(pnum,l);
								}
								else {
									if (lVar3 == 3) {
										ModifyPlrVit__Fii(pnum,l);
									}
								}
							}
						}
						l = 1;
						iVar5 = iVar5 + 1;
						iVar4 = lVar3;
					}
					if (1 < iVar5) {
						bVar2 = true;
					}
				} while (!bVar2);
				CheckStats__Fi(pnum);
			}
			if (pnum == myplr) {
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
	}
	force_redraw = 0xff;
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateWeaponRack__FiiUc(int pnum /*$s3*/, int i /*$s0*/, unsigned char sendmsg /*$s2*/)
 // line 3224, offset 0x80056500
	/* begin block 1 */
		// Start line: 3225
		// Start offset: 0x80056500
		// Variables:
	// 		int weaponType; // $s1
	/* end block 1 */
	// End offset: 0x8005668C
	// End Line: 3264

	/* begin block 2 */
		// Start line: 7211
	/* end block 2 */
	// End Line: 7212

void OperateWeaponRack__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	long lVar2;
	int iVar3;
	int itype;
	
	itype = 0;
	if (object[i]._oSelFlag != '\0') {
		SetRndSeed__Fl(object[i]._oRndSeed);
		lVar2 = random__Fil(0,4);
		iVar3 = lVar2 + 1;
		if (iVar3 == 2) {
			itype = 2;
		}
		else {
			if (iVar3 < 3) {
				if (iVar3 == 1) {
					itype = 1;
				}
			}
			else {
				if (iVar3 == 3) {
					itype = 3;
				}
				else {
					if (iVar3 == 4) {
						itype = 4;
					}
				}
			}
		}
		cVar1 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar1 + '\x01';
		if ((deltaload == '\0') &&
			 (CreateTypeItem__FiiUciiUcUc
									((int)object[i]._ox,(int)object[i]._oy,1 < leveltype,itype,0,(uint)sendmsg,0),
			 pnum == myplr)) {
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateStoryBook__Fii(int pnum /*$a0*/, int i /*$s1*/)
 // line 3270, offset 0x800566ac
	/* begin block 1 */
		// Start line: 3271
		// Start offset: 0x800566AC
	/* end block 1 */
	// End offset: 0x80056798
	// End Line: 3281

	/* begin block 2 */
		// Start line: 7308
	/* end block 2 */
	// End Line: 7309

void OperateStoryBook__Fii(int pnum,int i)

{
	if ((((object[i]._oSelFlag != '\0') && (deltaload == '\0')) && (qtextflag == '\0')) &&
		 (pnum == myplr)) {
		object[i]._oAnimFrame = (char)object[i]._oVar4;
		DBG_SendMessage("object[i]._oAnimFrame = %d");
		PlaySfxLoc__Fiii(IS_ISCROL,(int)object[i]._ox,(int)object[i]._oy);
		InitQTextMsg__Fi((int)object[i]._oVar2);
		NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateLazStand__Fii(int pnum /*$a0*/, int i /*$a1*/)
 // line 3287, offset 0x800567b0
	/* begin block 1 */
		// Start line: 3288
		// Start offset: 0x800567B0
		// Variables:
	// 		int x; // stack offset -16
	// 		int y; // stack offset -12
	/* end block 1 */
	// End offset: 0x80056880
	// End Line: 3299

	/* begin block 2 */
		// Start line: 7347
	/* end block 2 */
	// End Line: 7348

void OperateLazStand__Fii(int pnum,int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	int local_10;
	int local_c;
	
	if ((((object[i]._oSelFlag != '\0') && (deltaload == '\0')) && (qtextflag == '\0')) &&
		 (pnum == myplr)) {
		cVar1 = object[i]._ox;
		cVar2 = object[i]._oy;
		cVar3 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar3 + '\x01';
		GetSuperItemLoc__FiiRiT2((int)cVar1,(int)cVar2,&local_10,&local_c);
		SpawnQuestItem__Fiiiii(0x21,local_10,local_c,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateObject__FiiUc(int pnum /*$s0*/, int i /*$s1*/, unsigned char TeleFlag /*$a2*/)
 // line 3306, offset 0x80056890
	/* begin block 1 */
		// Start line: 3307
		// Start offset: 0x80056890
		// Variables:
	// 		unsigned char senditemmsg; // $v1
	/* end block 1 */
	// End offset: 0x80056CAC
	// End Line: 3424

	/* begin block 2 */
		// Start line: 7392
	/* end block 2 */
	// End Line: 7393

void OperateObject__FiiUc(int pnum,int i,uchar TeleFlag)

{
	bool sendmsg;
	char cVar1;
	
	sendmsg = pnum == myplr;
	switch((int)(((uint)(byte)object[i]._otype - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 1:
		if (TeleFlag == '\0') {
			if (pnum == myplr) {
				OperateL1Door__FiiUc(pnum,i,'\x01');
			}
		}
		else {
			cVar1 = object[i]._otype;
			if (cVar1 == '\x01') {
				OperateL1LDoor__FiiUc(pnum,i,'\x01');
				cVar1 = object[i]._otype;
			}
			if (cVar1 == '\x02') {
				OperateL1RDoor__FiiUc(pnum,i,'\x01');
			}
		}
		break;
	case 3:
	case 0x1b:
		OperateLever__Fii(pnum,i);
		break;
	case 4:
	case 5:
	case 6:
	case 0x43:
	case 0x44:
	case 0x45:
		OperateChest__FiiUc(pnum,i,sendmsg);
		break;
	case 0x18:
		OperateBook__Fii(pnum,i);
		break;
	case 0x28:
		OperateSChambBk__Fii(pnum,i);
		break;
	case 0x29:
	case 0x2a:
		if (TeleFlag == '\0') {
			if (pnum == myplr) {
				OperateL2Door__FiiUc(pnum,i,'\x01');
			}
		}
		else {
			cVar1 = object[i]._otype;
			if (cVar1 == '*') {
				OperateL2LDoor__FiiUc(pnum,i,'\x01');
				cVar1 = object[i]._otype;
			}
			if (cVar1 == '+') {
				OperateL2RDoor__FiiUc(pnum,i,'\x01');
			}
		}
		break;
	case 0x2f:
		OperateSarc__FiiUc(pnum,i,sendmsg);
		break;
	case 0x31:
		OperateTrapLvr__Fi(i);
		break;
	case 0x3a:
	case 0x3b:
		OperateShrine__Fiii(pnum,i,0x2c);
		break;
	case 0x3c:
	case 0x3f:
		OperateSkelBook__FiiUc(pnum,i,sendmsg);
		break;
	case 0x3d:
	case 0x3e:
		OperateBookCase__FiiUc(pnum,i,sendmsg);
		break;
	case 0x41:
	case 0x4b:
	case 0x50:
	case 0x51:
		OperateFountains__Fii(pnum,i);
		break;
	case 0x42:
		OperateDecap__FiiUc(pnum,i,sendmsg);
		break;
	case 0x46:
	case 0x47:
	case 0x57:
		OperateBookLever__Fii(pnum,i);
		break;
	case 0x48:
		OperatePedistal__Fii(pnum,i);
		break;
	case 0x49:
	case 0x4a:
		if (TeleFlag == '\0') {
			if (pnum == myplr) {
				OperateL3Door__FiiUc(pnum,i,'\x01');
			}
		}
		else {
			cVar1 = object[i]._otype;
			if (cVar1 == 'J') {
				OperateL3LDoor__FiiUc(pnum,i,'\x01');
				cVar1 = object[i]._otype;
			}
			if (cVar1 == 'K') {
				OperateL3RDoor__FiiUc(pnum,i,'\x01');
			}
		}
		break;
	case 0x4c:
	case 0x58:
		OperateArmorStand__FiiUc(pnum,i,sendmsg);
		break;
	case 0x4e:
		OperateGoatShrine__Fiii(pnum,i,0x5d);
		break;
	case 0x4f:
		OperateCauldron__Fiii(pnum,i,0x4c);
		break;
	case 0x55:
		OperateStoryBook__Fii(pnum,i);
		break;
	case 0x59:
	case 0x5b:
		OperateWeaponRack__FiiUc(pnum,i,sendmsg);
		break;
	case 0x5d:
		OperateMushPatch__Fii(pnum,i);
		break;
	case 0x5e:
		OperateLazStand__Fii(pnum,i);
		break;
	case 0x5f:
		OperateSlainHero__FiiUc(pnum,i,sendmsg);
		break;
	case 0x60:
		OperateInnSignChest__Fii(pnum,i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncOpL1Door__Fiii(int pnum /*$a0*/, int cmd /*$a1*/, int i /*$s0*/)
 // line 3431, offset 0x80056cc8
	/* begin block 1 */
		// Start line: 3432
		// Start offset: 0x80056CC8
		// Variables:
	// 		unsigned char opok; // $a0
	/* end block 1 */
	// End offset: 0x80056DC4
	// End Line: 3440

	/* begin block 2 */
		// Start line: 7658
	/* end block 2 */
	// End Line: 7659

void SyncOpL1Door__Fiii(int pnum,int cmd,int i)

{
	bool bVar1;
	char cVar2;
	
	if (pnum != myplr) {
		bVar1 = false;
		if (cmd == 0x2b) {
			bVar1 = object[i]._oVar4 == 0;
		}
		if ((cmd == 0x2c) && (object[i]._oVar4 == 1)) {
			bVar1 = true;
		}
		if (bVar1) {
			cVar2 = object[i]._otype;
			if (cVar2 == '\x01') {
				OperateL1LDoor__FiiUc(-1,i,'\0');
				cVar2 = object[i]._otype;
			}
			if (cVar2 == '\x02') {
				OperateL1RDoor__FiiUc(-1,i,'\0');
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncOpL2Door__Fiii(int pnum /*$a0*/, int cmd /*$a1*/, int i /*$s0*/)
 // line 3447, offset 0x80056ddc
	/* begin block 1 */
		// Start line: 3448
		// Start offset: 0x80056DDC
		// Variables:
	// 		unsigned char opok; // $a0
	/* end block 1 */
	// End offset: 0x80056ED8
	// End Line: 3456

	/* begin block 2 */
		// Start line: 7691
	/* end block 2 */
	// End Line: 7692

void SyncOpL2Door__Fiii(int pnum,int cmd,int i)

{
	bool bVar1;
	char cVar2;
	
	if (pnum != myplr) {
		bVar1 = false;
		if (cmd == 0x2b) {
			bVar1 = object[i]._oVar4 == 0;
		}
		if ((cmd == 0x2c) && (object[i]._oVar4 == 1)) {
			bVar1 = true;
		}
		if (bVar1) {
			cVar2 = object[i]._otype;
			if (cVar2 == '*') {
				OperateL2LDoor__FiiUc(-1,i,'\0');
				cVar2 = object[i]._otype;
			}
			if (cVar2 == '+') {
				OperateL2RDoor__FiiUc(-1,i,'\0');
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncOpL3Door__Fiii(int pnum /*$a0*/, int cmd /*$a1*/, int i /*$s0*/)
 // line 3463, offset 0x80056ef0
	/* begin block 1 */
		// Start line: 3464
		// Start offset: 0x80056EF0
		// Variables:
	// 		unsigned char opok; // $a0
	/* end block 1 */
	// End offset: 0x80056FEC
	// End Line: 3472

	/* begin block 2 */
		// Start line: 7724
	/* end block 2 */
	// End Line: 7725

void SyncOpL3Door__Fiii(int pnum,int cmd,int i)

{
	bool bVar1;
	char cVar2;
	
	if (pnum != myplr) {
		bVar1 = false;
		if (cmd == 0x2b) {
			bVar1 = object[i]._oVar4 == 0;
		}
		if ((cmd == 0x2c) && (object[i]._oVar4 == 1)) {
			bVar1 = true;
		}
		if (bVar1) {
			cVar2 = object[i]._otype;
			if (cVar2 == 'J') {
				OperateL3LDoor__FiiUc(-1,i,'\0');
				cVar2 = object[i]._otype;
			}
			if (cVar2 == 'K') {
				OperateL3RDoor__FiiUc(-1,i,'\0');
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncOpObject__Fiii(int pnum /*$a0*/, int cmd /*$a1*/, int i /*$a2*/)
 // line 3479, offset 0x80057004
	/* begin block 1 */
		// Start line: 3480
		// Start offset: 0x80057004
	/* end block 1 */
	// End offset: 0x800571D4
	// End Line: 3563

	/* begin block 2 */
		// Start line: 7756
	/* end block 2 */
	// End Line: 7757

void SyncOpObject__Fiii(int pnum,int cmd,int i)

{
	switch((int)(((uint)(byte)object[i]._otype - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 1:
		SyncOpL1Door__Fiii(pnum,cmd,i);
		break;
	case 3:
	case 0x1b:
		OperateLever__Fii(pnum,i);
		break;
	case 4:
	case 5:
	case 6:
	case 0x43:
	case 0x44:
	case 0x45:
		OperateChest__FiiUc(pnum,i,'\0');
		break;
	case 0x29:
	case 0x2a:
		SyncOpL2Door__Fiii(pnum,cmd,i);
		break;
	case 0x2f:
		OperateSarc__FiiUc(pnum,i,'\0');
		break;
	case 0x3a:
	case 0x3b:
		OperateShrine__Fiii(pnum,i,0x2c);
		break;
	case 0x3c:
	case 0x3f:
		OperateSkelBook__FiiUc(pnum,i,'\0');
		break;
	case 0x3d:
	case 0x3e:
		OperateBookCase__FiiUc(pnum,i,'\0');
		break;
	case 0x42:
		OperateDecap__FiiUc(pnum,i,'\0');
		break;
	case 0x46:
	case 0x47:
	case 0x57:
		OperateBookLever__Fii(pnum,i);
		break;
	case 0x48:
		OperatePedistal__Fii(pnum,i);
		break;
	case 0x49:
	case 0x4a:
		SyncOpL3Door__Fiii(pnum,cmd,i);
		break;
	case 0x4c:
	case 0x58:
		OperateArmorStand__FiiUc(pnum,i,'\0');
		break;
	case 0x4e:
		OperateGoatShrine__Fiii(pnum,i,0x5d);
		break;
	case 0x4f:
		OperateCauldron__Fiii(pnum,i,0x4c);
		break;
	case 0x50:
	case 0x51:
		OperateFountains__Fii(pnum,i);
		break;
	case 0x55:
		OperateStoryBook__Fii(pnum,i);
		break;
	case 0x59:
	case 0x5b:
		OperateWeaponRack__FiiUc(pnum,i,'\0');
		break;
	case 0x5d:
		OperateMushPatch__Fii(pnum,i);
		break;
	case 0x5f:
		OperateSlainHero__FiiUc(pnum,i,'\0');
		break;
	case 0x60:
		OperateInnSignChest__Fii(pnum,i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BreakCrux__Fi(int i /*$s0*/)
 // line 3570, offset 0x800571e4
	/* begin block 1 */
		// Start line: 3571
		// Start offset: 0x800571E4
		// Variables:
	// 		int j; // $a1
	// 		int ot; // $v1
	// 		int oi; // $v0
	// 		unsigned char mapflag; // $a2
	/* end block 1 */
	// End offset: 0x800573C0
	// End Line: 3597

	/* begin block 2 */
		// Start line: 7940
	/* end block 2 */
	// End Line: 7941

void BreakCrux__Fi(int i)

{
	bool bVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	
	bVar1 = true;
	object[i]._oAnimFlag = '\x01';
	object[i]._oAnimFrame = '\x01';
	object[i]._oSolidFlag = '\x01';
	object[i]._oMissFlag = '\x01';
	object[i]._oBreak = -1;
	object[i]._oSelFlag = '\0';
	lVar2 = numobjects;
	object[i]._oAnimDelay = 1;
	iVar4 = 0;
	if (0 < lVar2) {
		do {
			iVar3 = (int)objectactive[iVar4];
			if (((((int)object[iVar3]._otype - 0x14U < 2) || ((int)object[iVar3]._otype == 0x16)) &&
					(object[i]._oVar8 == object[iVar3]._oVar8)) && (object[iVar3]._oBreak != -1)) {
				bVar1 = false;
			}
			iVar4 = iVar4 + 1;
		} while (iVar4 < numobjects);
	}
	if (bVar1) {
		iVar4 = i * 2;
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(IS_LEVER,(int)object[i]._ox,(int)object[i]._oy);
			iVar4 = i << 1;
		}
		iVar4 = iVar4 * 4 + i * 3;
		ObjChangeMap__Fiiii((int)(&object[0]._oVar1)[iVar4 * 2],(int)(&object[0]._oVar2)[iVar4 * 2],
												(int)(&object[0]._oVar3)[iVar4 * 2],(int)(&object[0]._oVar4)[iVar4 * 2]);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BreakBarrel__FiiiUcUc(int pnum /*$s6*/, int i /*$s4*/, int dam /*stack -64*/, unsigned char forcebreak /*$a3*/, int sendmsg /*stack 16*/)
 // line 3604, offset 0x800573d4
	/* begin block 1 */
		// Start line: 3605
		// Start offset: 0x800573D4
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s2
	// 		int oi; // $a1
	/* end block 1 */
	// End offset: 0x800578F4
	// End Line: 3665

	/* begin block 2 */
		// Start line: 8028
	/* end block 2 */
	// End Line: 8029

void BreakBarrel__FiiiUcUc(int pnum,int i,int dam,uchar forcebreak,int sendmsg)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int iVar4;
	int i_00;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar4 = myplr;
	if (object[i]._oSelFlag == '\0') {
		return;
	}
	if (forcebreak == '\0') {
		iVar7 = (uint)(ushort)object[i]._oVar1 - dam;
		object[i]._oVar1 = (short)iVar7;
		if (pnum != iVar4) {
			if (0 < iVar7 * 0x10000) goto LAB_800574c4;
			object[i]._oVar1 = 1;
		}
	}
	else {
		object[i]._oVar1 = 0;
	}
	if (object[i]._oVar1 < 1) {
		object[i]._oAnimFlag = '\x01';
		object[i]._oAnimFrame = '\x01';
		object[i]._oSolidFlag = '\0';
		object[i]._oMissFlag = '\x01';
		object[i]._oBreak = -1;
		object[i]._oSelFlag = '\0';
		object[i]._oPreFlag = '\x01';
		uVar3 = deltaload;
		object[i]._oVar1 = 0;
		object[i]._oAnimDelay = 1;
		if (uVar3 != '\0') {
			sVar2 = object[i]._oAnimLen;
			object[i]._oAnimCnt = 0;
			object[i]._oAnimDelay = 1000;
			object[i]._oAnimFrame = (char)sVar2;
			return;
		}
		if (object[i]._otype == ':') {
			PlaySfxLoc__Fiii(IS_BARLFIRE,(int)object[i]._ox,(int)object[i]._oy);
			iVar4 = AddLight__Fiii((int)object[i]._ox,(int)object[i]._oy,0x33);
			cVar1 = object[i]._oy;
			object[i]._olid = (short)iVar4;
			object[i]._oVar1 = 1;
			iVar4 = (int)cVar1 + -1;
			iVar7 = iVar4 * 0xc;
			do {
				iVar6 = (int)object[i]._ox + -1;
				iVar5 = iVar6 * 0x510 + iVar7;
				do {
					i_00 = (int)*(short *)((int)&dung_map[0].dMonster + iVar5);
					if (0 < i_00) {
						MonsterTrapHit__FiiiiiUc(i_00 + -1,1,4,0,1,0);
					}
					if (0 < (int)(&dung_map[0].dPlayer)[iVar5]) {
						PlayerMHit__FiiiiiiUcUc((int)(&dung_map[0].dPlayer)[iVar5] + -1,-1,0,8,0x10,1,0,0);
					}
					i_00 = (int)(&dung_map[0].dObject)[iVar5] + -1;
					if (((0 < (int)(&dung_map[0].dObject)[iVar5]) && (object[i_00]._otype == ':')) &&
						 (object[i_00]._oBreak != -1)) {
						BreakBarrel__FiiiUcUc(pnum,i_00,dam,'\x01',sendmsg & 0xff);
					}
					iVar6 = iVar6 + 1;
					iVar5 = iVar5 + 0x510;
				} while (iVar6 <= (int)object[i]._ox + 1);
				iVar4 = iVar4 + 1;
				iVar7 = iVar7 + 0xc;
			} while (iVar4 <= (int)object[i]._oy + 1);
		}
		else {
			PlaySfxLoc__Fiii(IS_BARREL,(int)object[i]._ox,(int)object[i]._oy);
			SetRndSeed__Fl(object[i]._oRndSeed);
			if (object[i]._oVar2 < 2) {
				if (object[i]._oVar3 == 0) {
					CreateRndUseful__FiiiUc(pnum,(int)object[i]._ox,(int)object[i]._oy,(uchar)sendmsg);
				}
				else {
					CreateRndItem__FiiUcUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',(uchar)sendmsg,0);
				}
			}
			if (7 < object[i]._oVar2) {
				SpawnSkeleton__Fiii((int)object[i]._oVar4,(int)object[i]._ox,(int)object[i]._oy);
			}
		}
		if (pnum != myplr) {
			return;
		}
		NetSendCmdParam2__FUcUcUsUs('\0','/',(ushort)pnum,(ushort)i);
		return;
	}
LAB_800574c4:
	if (deltaload == '\0') {
		PlaySfxLoc__Fiii(IS_IBOW,(int)object[i]._ox,(int)object[i]._oy);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BreakObject__Fii(int pnum /*$s2*/, int oi /*$s3*/)
 // line 3671, offset 0x80057928
	/* begin block 1 */
		// Start line: 3672
		// Start offset: 0x80057928
		// Variables:
	// 		int objdam; // $a2
	// 		int mind; // $s1
	// 		int maxd; // $a1
	/* end block 1 */
	// End offset: 0x80057A68
	// End Line: 3693

	/* begin block 2 */
		// Start line: 8194
	/* end block 2 */
	// End Line: 8195

void BreakObject__Fii(int pnum,int oi)

{
	char cVar1;
	long lVar2;
	int dam;
	
	if (pnum == -1) {
		dam = 10;
	}
	else {
		dam = plr[pnum]._pIMinDam;
		lVar2 = random__Fil(0xa3,(plr[pnum]._pIMaxDam - dam) + 1);
		dam = lVar2 + dam;
		dam = dam + (dam * plr[pnum]._pIBonusDam) / 100 +
					plr[pnum]._pIBonusDamMod + plr[pnum]._pDamageMod;
	}
	cVar1 = object[oi]._otype;
	if ('\x13' < cVar1) {
		if (cVar1 < '\x17') {
			BreakCrux__Fi(oi);
		}
		else {
			if ((cVar1 < ';') && ('8' < cVar1)) {
				BreakBarrel__FiiiUcUc(pnum,oi,dam,'\0',1);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncBreakObj__Fii(int pnum /*$a0*/, int oi /*$a1*/)
 // line 3700, offset 0x80057a88
	/* begin block 1 */
		// Start line: 3701
		// Start offset: 0x80057A88
	/* end block 1 */
	// End offset: 0x80057AD4
	// End Line: 3707

	/* begin block 2 */
		// Start line: 8258
	/* end block 2 */
	// End Line: 8259

void SyncBreakObj__Fii(int pnum,int oi)

{
	if ((object[oi]._otype < ';') && ('8' < object[oi]._otype)) {
		BreakBarrel__FiiiUcUc(pnum,oi,0,'\x01',0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncL1Doors__Fi(int i /*$s2*/)
 // line 3714, offset 0x80057ae4
	/* begin block 1 */
		// Start line: 3715
		// Start offset: 0x80057AE4
		// Variables:
	// 		int dx; // $s0
	// 		int dy; // $s1
	/* end block 1 */
	// End offset: 0x80057BE0
	// End Line: 3738

	/* begin block 2 */
		// Start line: 8288
	/* end block 2 */
	// End Line: 8289

void SyncL1Doors__Fi(int i)

{
	int pn;
	int dx;
	int dy;
	
	if (object[i]._oVar4 == 0) {
		object[i]._oMissFlag = '\0';
	}
	else {
		object[i]._oMissFlag = '\x01';
		object[i]._oSelFlag = '\x02';
		dx = (int)object[i]._ox;
		dy = (int)object[i]._oy;
		if (object[i]._otype == '\x01') {
			if (object[i]._oVar1 == 0xd6) {
				pn = 0x198;
			}
			else {
				pn = 0x189;
			}
			ObjSetMicro__Fiii(dx,dy,pn);
			dy = dy + -1;
		}
		else {
			ObjSetMicro__Fiii(dx,dy,0x18b);
			dx = dx + -1;
		}
		DoorSet__Fiii(i,dx,dy);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncCrux__Fi(int i /*$a0*/)
 // line 3744, offset 0x80057bfc
	/* begin block 1 */
		// Start line: 3745
		// Start offset: 0x80057BFC
		// Variables:
	// 		int j; // $a2
	// 		int ot; // $v1
	// 		int oi; // $v0
	// 		unsigned char mapflag; // $a3
	/* end block 1 */
	// End offset: 0x80057D24
	// End Line: 3761

	/* begin block 2 */
		// Start line: 8357
	/* end block 2 */
	// End Line: 8358

void SyncCrux__Fi(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = true;
	iVar3 = 0;
	if (0 < numobjects) {
		do {
			iVar2 = (int)objectactive[iVar3];
			if (((((int)object[iVar2]._otype - 0x14U < 2) || ((int)object[iVar2]._otype == 0x16)) &&
					(object[i]._oVar8 == object[iVar2]._oVar8)) && (object[iVar2]._oBreak != -1)) {
				bVar1 = false;
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < numobjects);
	}
	if (bVar1) {
		ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
												(int)object[i]._oVar4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncLever__Fi(int i /*$a0*/)
 // line 3767, offset 0x80057d34
	/* begin block 1 */
		// Start line: 3768
		// Start offset: 0x80057D34
	/* end block 1 */
	// End offset: 0x80057DA0
	// End Line: 3771

	/* begin block 2 */
		// Start line: 8403
	/* end block 2 */
	// End Line: 8404

void SyncLever__Fi(int i)

{
	if (object[i]._oSelFlag == '\0') {
		ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
												(int)object[i]._oVar4);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncQSTLever__Fi(int i /*$a0*/)
 // line 3778, offset 0x80057db0
	/* begin block 1 */
		// Start line: 3779
		// Start offset: 0x80057DB0
		// Variables:
	// 		int tren; // $s0
	/* end block 1 */
	// End offset: 0x80057E94
	// End Line: 3789

	/* begin block 2 */
		// Start line: 8427
	/* end block 2 */
	// End Line: 8428

void SyncQSTLever__Fi(int i)

{
	char cVar1;
	
	if (((int)object[i]._oAnimFrame == (int)object[i]._oVar6) &&
		 (ObjChangeMapResync__Fiiii
								((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
								 (int)object[i]._oVar4), cVar1 = TransVal, TransVal = cVar1, object[i]._otype == 'G'
		 )) {
		TransVal = '\t';
		DRLG_MRectTrans__Fiiii
							((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
							 (int)object[i]._oVar4);
		TransVal = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncPedistal__Fi(int i /*$a0*/)
 // line 3797, offset 0x80057ea8
	/* begin block 1 */
		// Start line: 3798
		// Start offset: 0x80057EA8
		// Variables:
	// 		unsigned char *setp; // $s0

		/* begin block 1.1 */
			// Start line: 3809
			// Start offset: 0x80057F64

			/* begin block 1.1.1 */
				// Start line: 3809
				// Start offset: 0x80057F7C

				/* begin block 1.1.1.1 */
					// Start line: 3810
					// Start offset: 0x80057F7C
				/* end block 1.1.1.1 */
				// End offset: 0x80057FF0
				// End Line: 3813
			/* end block 1.1.1 */
			// End offset: 0x80057FF0
			// End Line: 3813
		/* end block 1.1 */
		// End offset: 0x80057FF0
		// End Line: 3813
	/* end block 1 */
	// End offset: 0x80057FF0
	// End Line: 3813

	/* begin block 2 */
		// Start line: 8475
	/* end block 2 */
	// End Line: 8476

void SyncPedistal__Fi(int i)

{
	uchar *pMap;
	short sVar1;
	
	sVar1 = object[i]._oVar6;
	if (sVar1 == 1) {
		ObjChangeMapResync__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
		sVar1 = object[i]._oVar6;
	}
	if (sVar1 == 2) {
		ObjChangeMapResync__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
		ObjChangeMapResync__Fiiii(setpc_x + 6,setpc_y + 3,setpc_x + setpc_w,setpc_y + 7);
	}
	if (object[i]._oVar6 == 3) {
		ObjChangeMapResync__Fiiii
							((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
							 (int)object[i]._oVar4);
		pMap = GRL_LoadFileInMemSig__FPCcPUl("Blood2.DUN",(ulong *)0x0);
		LoadMapObjs__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
		mem_free_dbg__FPv(pMap);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncL2Doors__Fi(int i /*$a0*/)
 // line 3820, offset 0x80058004
	/* begin block 1 */
		// Start line: 3821
		// Start offset: 0x80058004
		// Variables:
	// 		int dx; // $a3
	// 		int dy; // $a1
	/* end block 1 */
	// End offset: 0x8005815C
	// End Line: 3845

	/* begin block 2 */
		// Start line: 8529
	/* end block 2 */
	// End Line: 8530

void SyncL2Doors__Fi(int i)

{
	char cVar1;
	int pn;
	
	if (object[i]._oVar4 == 0) {
		object[i]._oMissFlag = '\0';
	}
	else {
		object[i]._oMissFlag = '\x01';
	}
	cVar1 = object[i]._ox;
	object[i]._oSelFlag = '\x02';
	if (object[i]._otype == '*') {
		if ((int)object[i]._oVar4 == 0) {
			pn = 0x21a;
			goto LAB_80058154;
		}
		pn = 0xd;
		if (((int)object[i]._oVar4 - 1U & 0xffff) < 2) goto LAB_80058154;
	}
	if (object[i]._otype != '+') {
		return;
	}
	if ((int)object[i]._oVar4 == 0) {
		pn = 0x21c;
	}
	else {
		if (1 < ((int)object[i]._oVar4 - 1U & 0xffff)) {
			return;
		}
		pn = 0x11;
	}
LAB_80058154:
	ObjSetMicro__Fiii((int)cVar1,(int)object[i]._oy,pn);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncL3Doors__Fi(int i /*$a0*/)
 // line 3852, offset 0x8005816c
	/* begin block 1 */
		// Start line: 3853
		// Start offset: 0x8005816C
		// Variables:
	// 		int dx; // $a3
	// 		int dy; // $a1
	/* end block 1 */
	// End offset: 0x80058288
	// End Line: 3876

	/* begin block 2 */
		// Start line: 8608
	/* end block 2 */
	// End Line: 8609

void SyncL3Doors__Fi(int i)

{
	char cVar1;
	int pn;
	
	object[i]._oMissFlag = '\x01';
	cVar1 = object[i]._ox;
	object[i]._oSelFlag = '\x02';
	if (object[i]._otype == 'J') {
		if ((int)object[i]._oVar4 == 0) {
			pn = 0x213;
			goto LAB_80058280;
		}
		pn = 0x21a;
		if (((int)object[i]._oVar4 - 1U & 0xffff) < 2) goto LAB_80058280;
	}
	if (object[i]._otype != 'K') {
		return;
	}
	if ((int)object[i]._oVar4 == 0) {
		pn = 0x216;
	}
	else {
		if (1 < ((int)object[i]._oVar4 - 1U & 0xffff)) {
			return;
		}
		pn = 0x21d;
	}
LAB_80058280:
	ObjSetMicro__Fiii((int)cVar1,(int)object[i]._oy,pn);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncObjectAnim__Fi(int o /*$a0*/)
 // line 3883, offset 0x80058298
	/* begin block 1 */
		// Start line: 3884
		// Start offset: 0x80058298
		// Variables:
	// 		int ai; // $a1
	// 		int ot; // $v1
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x800583C8
	// End Line: 3923

	/* begin block 2 */
		// Start line: 8685
	/* end block 2 */
	// End Line: 8686

void SyncObjectAnim__Fi(int o)

{
	char *pcVar1;
	int iVar2;
	
	if (ObjFileList != (&AllObjects)[(int)object[o]._otype].ofindex) {
		iVar2 = 1;
		do {
			pcVar1 = &ObjFileList + iVar2;
			iVar2 = iVar2 + 1;
		} while (*pcVar1 != (&AllObjects)[(int)object[o]._otype].ofindex);
	}
	switch((int)(((uint)(byte)object[o]._otype - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 1:
		SyncL1Doors__Fi(o);
		break;
	case 3:
	case 0x18:
	case 0x1b:
		SyncLever__Fi(o);
		break;
	case 0x13:
	case 0x14:
	case 0x15:
		SyncCrux__Fi(o);
		break;
	case 0x28:
	case 0x46:
	case 0x57:
		SyncQSTLever__Fi(o);
		break;
	case 0x29:
	case 0x2a:
		SyncL2Doors__Fi(o);
		break;
	case 0x48:
		SyncPedistal__Fi(o);
		break;
	case 0x49:
	case 0x4a:
		SyncL3Doors__Fi(o);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetObjectStr__Fi(int i /*$s2*/)
 // line 3930, offset 0x800583d8
	/* begin block 1 */
		// Start line: 3931
		// Start offset: 0x800583D8
	/* end block 1 */
	// End offset: 0x800587D8
	// End Line: 4072

	/* begin block 2 */
		// Start line: 8783
	/* end block 2 */
	// End Line: 8784

void GetObjectStr__Fi(int i)

{
	char *pcVar1;
	char *__format;
	text_strs StrId;
	
	switch((int)(((uint)(byte)object[i]._otype - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 1:
	case 0x29:
	case 0x2a:
	case 0x49:
	case 0x4a:
		if (object[i]._oVar4 == 1) {
			__format = GetStr__Fi(STR_OPEN_DOOR);
			strcpy(_infostr + sel_data * 0x100,__format);
		}
		if (object[i]._oVar4 == 0) {
			__format = GetStr__Fi(STR_CLOSED_DOOR);
			strcpy(_infostr + sel_data * 0x100,__format);
		}
		if (object[i]._oVar4 != 2) goto switchD_8005843c_caseD_2;
		StrId = STR_BLOCKED_DOOR;
		break;
	default:
		goto switchD_8005843c_caseD_2;
	case 3:
	case 0x31:
		StrId = STR_LEVER;
		break;
	case 4:
	case 0x43:
		StrId = STR_SMALL_CHEST;
		break;
	case 5:
	case 0x44:
		StrId = STR_CHEST;
		break;
	case 6:
	case 0x45:
	case 0x60:
		StrId = STR_LARGE_CHEST;
		break;
	case 0x13:
	case 0x14:
	case 0x15:
		StrId = STR_CRUCIFIED_SKELETON;
		break;
	case 0x18:
		if (setlevel == '\0') goto switchD_8005843c_caseD_2;
		if (setlvlnum == '\x02') {
			StrId = STR_ANCIENT_TOME;
		}
		else {
			if (setlvlnum != '\x05') goto switchD_8005843c_caseD_2;
			StrId = STR_BOOK_OF_VILENESS;
		}
		break;
	case 0x1b:
		StrId = STR_SKULL_LEVER;
		break;
	case 0x28:
		StrId = STR_MYTHICAL_BOOK;
		break;
	case 0x2f:
		StrId = STR_SARCOPHAGUS;
		break;
	case 0x36:
		StrId = STR_BOOKSHELF;
		break;
	case 0x38:
	case 0x39:
		StrId = STR_BARREL;
		break;
	case 0x3a:
	case 0x3b:
		__format = GetStr__Fi(STR__S_SHRINE);
		pcVar1 = GetStr__Fi(shrinestrs[(int)object[i]._oVar1]);
		sprintf(tempstr,__format,pcVar1);
		__format = tempstr;
		goto LAB_800586f0;
	case 0x3c:
		StrId = STR_SKELETON_TOME;
		break;
	case 0x3d:
	case 0x3e:
		StrId = STR_BOOKCASE;
		break;
	case 0x3f:
		StrId = STR_LIBRARY_BOOK;
		break;
	case 0x41:
		StrId = STR_BLOOD_FOUNTAIN;
		break;
	case 0x42:
		StrId = STR_DECAPITATED_BODY;
		break;
	case 0x46:
		StrId = STR_BOOK_OF_THE_BLIND;
		break;
	case 0x47:
		StrId = STR_BOOK_OF_BLOOD;
		break;
	case 0x48:
		StrId = STR_PEDESTAL_OF_BLOOD;
		break;
	case 0x4b:
		StrId = STR_PURIFYING_SPRING;
		break;
	case 0x4c:
	case 0x58:
		StrId = STR_ARMOR;
		break;
	case 0x4e:
		StrId = STR_GOAT_SHRINE;
		break;
	case 0x4f:
		StrId = STR_CAULDRON;
		break;
	case 0x50:
		StrId = STR_MURKY_POOL;
		break;
	case 0x51:
		StrId = STR_FOUNTAIN_OF_TEARS;
		break;
	case 0x55:
		__format = GetStr__Fi(StoryBookName[(int)object[i]._oVar3]);
		goto LAB_800586f0;
	case 0x57:
		StrId = STR_STEEL_TOME;
		break;
	case 0x59:
		StrId = STR_WEAPON_RACK;
		break;
	case 0x5b:
		StrId = STR_WEAPON_RACK;
		break;
	case 0x5d:
		StrId = STR_MUSHROOM_PATCH;
		break;
	case 0x5e:
		StrId = STR_VILE_STAND;
		break;
	case 0x5f:
		StrId = STR_SLAIN_HERO;
	}
	__format = GetStr__Fi(StrId);
LAB_800586f0:
	strcpy(_infostr + sel_data * 0x100,__format);
switchD_8005843c_caseD_2:
	if ((plr[myplr]._pClass == '\x01') && (object[i]._oTrapFlag != '\0')) {
		__format = GetStr__Fi(STR_TRAPPED__S);
		sprintf(tempstr,__format,_infostr + sel_data * 0x100);
		strcpy(_infostr + sel_data * 0x100,tempstr);
		_infoclr[sel_data] = '\x02';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestoreObjectLight__Fv()
 // line 4076, offset 0x800587f4
	/* begin block 1 */
		// Start line: 4077
		// Start offset: 0x800587F4
		// Variables:
	// 		int i; // $s0
	// 		int oi; // $v0
	// 		int ox; // $a0
	// 		int oy; // $a1
	/* end block 1 */
	// End offset: 0x80058A34
	// End Line: 4232

	/* begin block 2 */
		// Start line: 9077
	/* end block 2 */
	// End Line: 9078

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RestoreObjectLight__Fv(void)

{
	short sVar1;
	short sVar2;
	int r;
	int r_00;
	int iVar3;
	
	InitLighting__Fv();
	if (leveltype == '\0') {
		sVar1 = plr[myplr]._px;
		sVar2 = plr[myplr]._py;
		r = (int)plr[myplr]._pLightRad + 0x21f0;
	}
	else {
		sVar1 = plr[myplr]._px;
		sVar2 = plr[myplr]._py;
		r = (int)plr[myplr]._pLightRad + 0x2070;
	}
	iVar3 = 0;
	r = AddLight__Fiii((int)sVar1,(int)sVar2,r);
	plr[myplr]._plid = (char)r;
	if (0 < numobjects) {
		do {
			r = (int)objectactive[iVar3];
			switch(object[r]._otype) {
			case '\0':
				r_00 = (int)light_level[(uint)leveltype] + 0x435;
				break;
			default:
				goto switchD_80058984_caseD_1;
			case '\x03':
			case '\b':
			case '\t':
			case 'A':
				r_00 = (int)light_level[(uint)leveltype] + 0x42;
				break;
			case '\x1a':
			case '[':
				r_00 = (int)light_level[(uint)leveltype] + 0x45;
				break;
			case ',':
			case '-':
			case '.':
			case '/':
				r_00 = (int)light_level[(uint)leveltype] + 0x432;
				break;
			case 'W':
				r_00 = (int)light_level[(uint)leveltype] + 0x53;
			}
			AddLight__Fiii((int)object[r]._ox,(int)object[r]._oy,r_00);
switchD_80058984_caseD_1:
			iVar3 = iVar3 + 1;
		} while (iVar3 < numobjects);
	}
	return;
}





