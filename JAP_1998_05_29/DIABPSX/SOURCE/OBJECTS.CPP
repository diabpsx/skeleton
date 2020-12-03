#include "THISDUST.H"
#include "OBJECTS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PostAddL1Door__Fiiii(int i /*$s3*/, int x /*$s1*/, int y /*$s2*/, int ot /*$a3*/)
 // line 264, offset 0x80053080
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x80053080
	/* end block 1 */
	// End offset: 0x80053148
	// End Line: 279

	/* begin block 2 */
		// Start line: 528
	/* end block 2 */
	// End Line: 529

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddL1Door__Fiiii(int i,int x,int y,int ot)

{
	short sVar1;
	
	object[i]._oDoorFlag = '\x01';
	object[i]._oAnimFlag = '\0';
	if (ot == 1) {
		_sVar1 = FindBlock__Fii(x,y);
		sVar1 = (short)_sVar1;
		y = y + -1;
	}
	else {
		_sVar1 = FindBlock__Fii(x,y);
		sVar1 = (short)_sVar1;
		x = x + -1;
	}
	object[i]._oVar1 = sVar1;
	_sVar1 = FindBlock__Fii(x,y);
	object[i]._oVar2 = (short)_sVar1;
	object[i]._oVar4 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddL2Door__Fiiii(int i /*$s2*/, int x /*$s0*/, int y /*$s1*/, int ot /*$a3*/)
 // line 285, offset 0x80053168
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80053168
	/* end block 1 */
	// End offset: 0x80053290
	// End Line: 304

	/* begin block 2 */
		// Start line: 578
	/* end block 2 */
	// End Line: 579

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddL2Door__Fiiii(int i,int x,int y,int ot)

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
// void /*$ra*/ PostAddArmorStand__Fi(int i /*$s0*/)
 // line 310, offset 0x800532b4
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x800532B4
	/* end block 1 */
	// End offset: 0x80053328
	// End Line: 321

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ PostAddObjLight__Fii(int i /*$a0*/, int r /*$a2*/)
 // line 359, offset 0x8005333c
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x8005333C
	/* end block 1 */
	// End offset: 0x800533EC
	// End Line: 374

	/* begin block 2 */
		// Start line: 740
	/* end block 2 */
	// End Line: 741

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddObjLight__Fii(int i,int r)

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
// void /*$ra*/ PostAddWeaponRack__Fi(int i /*$s0*/)
 // line 382, offset 0x80053400
	/* begin block 1 */
		// Start line: 383
		// Start offset: 0x80053400
	/* end block 1 */
	// End offset: 0x80053474
	// End Line: 393

	/* begin block 2 */
		// Start line: 788
	/* end block 2 */
	// End Line: 789

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddWeaponRack__Fi(int i)

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
// void /*$ra*/ PostObjObjAddSwitch__Fiiii(int ot /*$v1*/, int ox /*$a1*/, int oy /*$a2*/, int oi /*$a0*/)
 // line 401, offset 0x80053488
	/* begin block 1 */
		// Start line: 402
		// Start offset: 0x80053488
	/* end block 1 */
	// End offset: 0x80053514
	// End Line: 429

	/* begin block 2 */
		// Start line: 826
	/* end block 2 */
	// End Line: 827

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostObjObjAddSwitch__Fiiii(int ot,int ox,int oy,int oi)

{
	switch(ot) {
	case 0:
		PostAddObjLight__Fii(oi,0x1b8);
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
		PostAddObjLight__Fii(oi,0x1b6);
		break;
	case 0x4d:
	case 0x59:
		PostAddArmorStand__Fi(oi);
		break;
	case 0x5a:
	case 0x5c:
		PostAddWeaponRack__Fi(oi);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitObjectGFX__Fv()
 // line 435, offset 0x80053524
	/* begin block 1 */
		// Start line: 436
		// Start offset: 0x80053524
		// Variables:
	// 		unsigned char fileload[56]; // stack offset -120
	// 		int i; // $v1
	// 		int t; // $a1

		/* begin block 1.1 */
			// Start line: 466
			// Start offset: 0x800536C4

			/* begin block 1.1.1 */
				// Start line: 466
				// Start offset: 0x800536D4

				/* begin block 1.1.1.1 */
					// Start line: 468
					// Start offset: 0x800536E0

					/* begin block 1.1.1.1.1 */
						// Start line: 469
						// Start offset: 0x800536F0
						// Variables:
					// 		char filestr[32]; // stack offset -64
					/* end block 1.1.1.1.1 */
					// End offset: 0x80053710
					// End Line: 475
				/* end block 1.1.1.1 */
				// End offset: 0x80053710
				// End Line: 475
			/* end block 1.1.1 */
			// End offset: 0x80053710
			// End Line: 475
		/* end block 1.1 */
		// End offset: 0x8005371C
		// End Line: 477
	/* end block 1 */
	// End offset: 0x8005371C
	// End Line: 477

	/* begin block 2 */
		// Start line: 894
	/* end block 2 */
	// End Line: 895

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
 // line 481, offset 0x80053740
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x80053740
	/* end block 1 */
	// End offset: 0x80053744
	// End Line: 486

	/* begin block 2 */
		// Start line: 994
	/* end block 2 */
	// End Line: 995

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeObjectGFX__Fv(void)

{
	numobjfiles = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteObject__Fii(int oi /*$a0*/, int i /*$a2*/)
 // line 489, offset 0x8005374c
	/* begin block 1 */
		// Start line: 490
		// Start offset: 0x8005374C
		// Variables:
	// 		int ox; // $a1
	// 		int oy; // $v1
	/* end block 1 */
	// End offset: 0x800537E8
	// End Line: 501

	/* begin block 2 */
		// Start line: 1006
	/* end block 2 */
	// End Line: 1007

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeleteObject__Fii(int oi,int i)

{
	uchar *puVar1;
	int iVar2;
	
	dung_map[(int)object[oi]._ox * 0x70 + (int)object[oi]._oy].dObject = '\0';
	*(undefined *)(-0x7ff25ce1 - numobjects) = (char)oi;
	iVar2 = numobjects + -1;
	if ((0 < iVar2) && (i != iVar2)) {
		puVar1 = &object[0x7e]._oDoorFlag + numobjects;
		numobjects = iVar2;
		(&objectactive)[i] = *puVar1;
		iVar2 = numobjects;
	}
	numobjects = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupObject__Fiiii(int i /*$s2*/, int x /*$a1*/, int y /*$a2*/, int ot /*$s3*/)
 // line 508, offset 0x800537f0
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x800537F0
		// Variables:
	// 		int ai; // $a0
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x80053A50
	// End Line: 543

	/* begin block 2 */
		// Start line: 1045
	/* end block 2 */
	// End Line: 1046

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
		lVar4 = ENG_random__Fl((int)(&AllObjects)[ot].oAnimDelay);
		object[i]._oAnimCnt = (short)lVar4;
		object[i]._oAnimLen = (&AllObjects)[ot].oAnimLen;
		lVar4 = ENG_random__Fl((int)(&AllObjects)[ot].oAnimLen + -1);
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
 // line 549, offset 0x80053a70
	/* begin block 1 */
		// Start line: 550
		// Start offset: 0x80053A70
	/* end block 1 */
	// End offset: 0x80053AC8
	// End Line: 556

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 562, offset 0x80053ad0
	/* begin block 1 */
		// Start line: 563
		// Start offset: 0x80053AD0
	/* end block 1 */
	// End offset: 0x80053AF0
	// End Line: 565

	/* begin block 2 */
		// Start line: 1165
	/* end block 2 */
	// End Line: 1166

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetBookMsg__Fii(int i,int msg)

{
	object[i]._oVar7 = (short)msg;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddObject__Fiii(int ot /*$s2*/, int ox /*$s1*/, int oy /*$s3*/)
 // line 588, offset 0x80053af8
	/* begin block 1 */
		// Start line: 589
		// Start offset: 0x80053AF8
		// Variables:
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x80053BE8
	// End Line: 629

	/* begin block 2 */
		// Start line: 1229
	/* end block 2 */
	// End Line: 1230

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddObject__Fiii(int ot,int ox,int oy)

{
	char cVar1;
	long lVar2;
	int i;
	
	lVar2 = numobjects;
	cVar1 = objectavail[0];
	if ((numobjects < 0x7f) && (dung_map[ox * 0x70 + oy].dObject == '\0')) {
		i = (int)objectavail[0];
		objectavail[0] = objectavail[0x7e - numobjects];
		object[i]._olid = -1;
		(&objectactive)[lVar2] = cVar1;
		dung_map[ox * 0x70 + oy].dObject = cVar1 + '\x01';
		SetupObject__Fiiii(i,ox,oy,ot);
		if (ot != 0x53) {
			FUN_80159c74(ot,ox,oy,i);
		}
		numobjects = numobjects + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PostAddObject__Fiii(int ot /*$s3*/, int ox /*$s1*/, int oy /*$s2*/)
 // line 636, offset 0x80053c08
	/* begin block 1 */
		// Start line: 637
		// Start offset: 0x80053C08
		// Variables:
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x80054050
	// End Line: 748

	/* begin block 2 */
		// Start line: 1344
	/* end block 2 */
	// End Line: 1345

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddObject__Fiii(int ot,int ox,int oy)

{
	long lVar1;
	uchar uVar2;
	char cVar3;
	int i;
	
	if (0x7e < numobjects) {
		return;
	}
	uVar2 = QuestStatus__Fi(9);
	lVar1 = numobjects;
	cVar3 = objectavail[0];
	if ((uVar2 == '\0') || ((int)dung_map[ox * 0x70 + oy].dObject == 0)) {
LAB_80053f9c:
		i = (int)objectavail[0];
		objectavail[0] = objectavail[0x7e - numobjects];
		object[i]._olid = -1;
		(&objectactive)[lVar1] = cVar3;
		dung_map[ox * 0x70 + oy].dObject = cVar3 + '\x01';
		SetupObject__Fiiii(i,ox,oy,ot);
		if (ot != 0x53) {
			PostObjObjAddSwitch__Fiiii(ot,ox,oy,i);
		}
		numobjects = numobjects + 1;
	}
	else {
		i = (int)dung_map[ox * 0x70 + oy].dObject + -1;
		if (ot == 0x2a) {
			if (deltaload != '\0') {
				if (object[i]._oVar4 != 0) {
					ObjSetMicro__Fiii(ox,oy,0x11);
					dungeon[(ox + -0x10 >> 1) * 0x30 + (oy + -0x10 >> 1)] = 0x99;
					cVar3 = '\x04';
LAB_80053f74:
					object[i]._oAnimFrame = cVar3;
					object[i]._oVar4 = 1;
					return;
				}
				ObjSetMicro__Fiii(ox,oy,0x21a);
				dungeon[(ox + -0x10 >> 1) * 0x30 + (oy + -0x10 >> 1)] = 0x96;
				cVar3 = '\x01';
LAB_80053f0c:
				object[i]._oAnimFrame = cVar3;
				object[i]._oVar4 = 0;
				return;
			}
			if (object[i]._oVar4 == 1) {
				NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)i);
			}
			ObjSetMicro__Fiii(ox,oy,0x21a);
			dungeon[(ox + -0x10 >> 1) * 0x30 + (oy + -0x10 >> 1)] = 0x96;
			cVar3 = '\x01';
		}
		else {
			if (ot != 0x2b) goto LAB_80053f9c;
			if (deltaload != '\0') {
				if (object[i]._oVar4 != 0) {
					ObjSetMicro__Fiii(ox,oy,0xd);
					dungeon[(ox + -0x10 >> 1) * 0x30 + (oy + -0x10 >> 1)] = 0x98;
					cVar3 = '\x03';
					goto LAB_80053f74;
				}
				ObjSetMicro__Fiii(ox,oy,0x21c);
				dungeon[(ox + -0x10 >> 1) * 0x30 + (oy + -0x10 >> 1)] = 0x97;
				cVar3 = '\x02';
				goto LAB_80053f0c;
			}
			if (object[i]._oVar4 == 1) {
				NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)i);
			}
			ObjSetMicro__Fiii(ox,oy,0x21c);
			dungeon[(ox + -0x10 >> 1) * 0x30 + (oy + -0x10 >> 1)] = 0x97;
			cVar3 = '\x02';
		}
		object[i]._oAnimFrame = cVar3;
		object[i]._oVar4 = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Light__Fii(int i /*$s2*/, int lr /*$fp*/)
 // line 755, offset 0x80054070
	/* begin block 1 */
		// Start line: 756
		// Start offset: 0x80054070
		// Variables:
	// 		int ox; // $s6
	// 		int oy; // $s7
	// 		int dx; // $s0
	// 		int dy; // $v0
	// 		int p; // $s3
	// 		int tr; // $s5
	// 		unsigned char turnon; // $s4
	/* end block 1 */
	// End offset: 0x8005425C
	// End Line: 791

	/* begin block 2 */
		// Start line: 1600
	/* end block 2 */
	// End Line: 1601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Obj_Light__Fii(int i,int lr)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	int iVar7;
	int iVar8;
	
	if (level_lamp[(uint)leveltype] != '\0') {
		if (object[i]._oVar1 != -1) {
			iVar8 = (lr & 0xfU) + 6;
			bVar3 = false;
			iVar7 = 0;
			puVar6 = (undefined *)0x0;
			cVar1 = object[i]._ox;
			cVar2 = object[i]._oy;
			do {
				if (((&plr[0].plractive)[(int)puVar6] != '\0') &&
					 ((uint)currlevel == *(uint *)((int)&plr[0].plrlevel + (int)puVar6))) {
					iVar4 = abs((int)*(short *)((int)&plr[0]._px + (int)puVar6) - (int)cVar1);
					iVar5 = abs((int)*(short *)((int)&plr[0]._py + (int)puVar6) - (int)cVar2);
					if ((iVar4 < iVar8) && (iVar5 < iVar8)) {
						bVar3 = true;
					}
				}
				iVar7 = iVar7 + 1;
				puVar6 = &DAT_000019e8 + (int)puVar6;
			} while ((iVar7 < 2) && (!bVar3));
			if (bVar3) {
				if (object[i]._oVar1 == 0) {
					iVar7 = AddLight__Fiii((int)cVar1,(int)cVar2,lr);
					object[i]._olid = (short)iVar7;
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
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Circle__Fi(int i /*$a0*/)
 // line 798, offset 0x80054290
	/* begin block 1 */
		// Start line: 799
		// Start offset: 0x80054290
		// Variables:
	// 		int px; // $v0
	// 		int py; // $v1
	// 		int ox; // $s4
	// 		int oy; // $s3
	// 		int v1; // $s6
	// 		int v2; // $s7
	// 		void * done; // stack offset -48

		/* begin block 1.1 */
			// Start line: 799
			// Start offset: 0x80054290
			// Variables:
		// 		int pnum; // $s1

			/* begin block 1.1.1 */
				// Start line: 807
				// Start offset: 0x80054304

				/* begin block 1.1.1.1 */
					// Start line: 809
					// Start offset: 0x80054320

					/* begin block 1.1.1.1.1 */
						// Start line: 812
						// Start offset: 0x8005434C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 825
							// Start offset: 0x80054404

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 825
								// Start offset: 0x80054444
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800544DC
							// End Line: 836
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800544DC
						// End Line: 836
					/* end block 1.1.1.1.1 */
					// End offset: 0x800544DC
					// End Line: 836
				/* end block 1.1.1.1 */
				// End offset: 0x8005458C
				// End Line: 849
			/* end block 1.1.1 */
			// End offset: 0x8005458C
			// End Line: 849
		/* end block 1.1 */
		// End offset: 0x800545A0
		// End Line: 851
	/* end block 1 */
	// End offset: 0x800545A0
	// End Line: 851

	/* begin block 2 */
		// Start line: 1694
	/* end block 2 */
	// End Line: 1695

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Obj_Circle__Fi(int i)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	bool bVar5;
	char cVar6;
	int id;
	short *psVar7;
	int iVar8;
	int iVar9;
	short *psVar10;
	undefined *puVar11;
	
	id = 0;
	psVar7 = &plr[0]._py;
	psVar10 = &plr[0]._px;
	puVar11 = (undefined *)0x0;
	bVar5 = false;
	iVar9 = (int)object[i]._ox;
	iVar8 = (int)object[i]._oy;
	while ((id < 2 && (!bVar5))) {
		if ((((int)*psVar10 == iVar9) && ((int)*psVar7 == iVar8)) || (deltaload != '\0')) {
			bVar5 = true;
			cVar6 = object[i]._otype;
			if (cVar6 == 'T') {
				object[i]._oAnimFrame = '\x02';
				cVar6 = object[i]._otype;
			}
			if (cVar6 == 'U') {
				object[i]._oAnimFrame = '\x04';
			}
			if ((iVar9 == 0x2d) && (iVar8 == 0x2f)) {
				object[i]._oVar6 = 2;
			}
			else {
				if ((iVar9 == 0x1a) && (iVar8 == 0x2e)) {
					object[i]._oVar6 = 1;
				}
				else {
					object[i]._oVar6 = 0;
				}
			}
			if ((2 < object[i]._oVar5) && (((iVar9 == 0x23 && (iVar8 == 0x24)) || (deltaload != '\0')))) {
				sVar1 = object[i]._oVar1;
				sVar2 = object[i]._oVar2;
				sVar3 = object[i]._oVar3;
				sVar4 = object[i]._oVar4;
				object[i]._oVar6 = 4;
				ObjChangeMapResync__Fiiii((int)sVar1,(int)sVar2,(int)sVar3,(int)sVar4);
				if (((quests[15]._qactive == '\x02') && (quests[15]._qvar1 < 5)) &&
					 (quests[15]._qvar1 = '\x04', deltaload == '\0')) {
					NetSendCmdQuest__FUcUc('\x01','\x0f');
				}
				AddMissile__Fiiiiiiciii
									((int)*psVar10,(int)*psVar7,0x23,0x2e,(int)(&plr[0]._pdir)[(int)puVar11],3,0,id,0,
									 0);
				ClrPlrPath__Fi(id);
				StartStand__Fii(id,0);
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
		psVar7 = psVar7 + 0xcf4;
		psVar10 = psVar10 + 0xcf4;
		puVar11 = &DAT_000019e8 + (int)puVar11;
		id = id + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_StopAnim__Fi(int i /*$a0*/)
 // line 856, offset 0x800545d4
	/* begin block 1 */
		// Start line: 857
		// Start offset: 0x800545D4
	/* end block 1 */
	// End offset: 0x80054630
	// End Line: 862

	/* begin block 2 */
		// Start line: 1856
	/* end block 2 */
	// End Line: 1857

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 892, offset 0x80054638
	/* begin block 1 */
		// Start line: 893
		// Start offset: 0x80054638
		// Variables:
	// 		struct POLY_FT4 *Ft4; // $a0
	// 		int PhysFrame; // $fp
	// 		struct TextDat *ObjDat; // $s4
	// 		int temp; // $a1
	// 		int bright; // $s1
	// 		int W; // $v0
	// 		int H; // $v0
	/* end block 1 */
	// End offset: 0x800548FC
	// End Line: 957

	/* begin block 2 */
		// Start line: 1926
	/* end block 2 */
	// End Line: 1927

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawExpl__Fiiiiiccc(int sx,int sy,int f,int ot,int scale,int rtint,int gtint,int btint)

{
	short sVar1;
	short sVar2;
	short sVar3;
	TextDat *this;
	CBlocks *this_00;
	int iVar4;
	int Frm;
	POLY_FT4 *pPVar5;
	short sVar6;
	short sVar7;
	int iVar8;
	uchar uVar9;
	int iVar10;
	
	this = GM_UseTexData__Fi(0xce);
	iVar10 = 0xf0;
	this_00 = BL_GetCurrentBlocks__Fv();
	iVar4 = GetOtPos__7CBlocksi(this_00,sy + 0x18);
	Frm = GetNumOfFrames__7TextDatii(this,0,0);
	if (Frm <= f) {
		DBG_Error((char *)0x0,"source/OBJECTS.cpp",0x387);
	}
	if (f == 1) {
		Frm = scale;
		if (scale < 0) {
			Frm = scale + 3;
		}
		DrawSpinner__FiiUcUcUciiibiT8T8Uc
							(sx,sy + -10,~(byte)rtint,~(byte)gtint,~(btint & 0xffU) & 0xff,Frm >> 2,0x40,4,0,
							 iVar4 + 2,1,0,8);
	}
	if (0x100 < scale) {
		iVar10 = 0x78;
	}
	sy = sy + f * -4;
	Frm = GetFrNum__7TextDatiiii(this,0,0,0,f);
	pPVar5 = PrintFt4__7TextDatiiiiii(this,Frm,sx,sy,0,iVar4 + 1,0);
	iVar8 = f * 3 >> 2;
	if (iVar8 == 0) {
		iVar8 = 1;
	}
	sVar3 = (short)sx;
	sVar6 = (short)(((int)pPVar5->x1 - (int)pPVar5->x0) * scale >> 9);
	pPVar5->x1 = sVar3 + sVar6;
	pPVar5->x3 = sVar3 + sVar6;
	pPVar5->code = pPVar5->code & 0xfe | 2;
	pPVar5->x0 = sVar3 - sVar6;
	pPVar5->x2 = sVar3 - sVar6;
	sVar7 = (short)(((int)pPVar5->y2 - (int)pPVar5->y0) * scale >> 9);
	sVar1 = (short)sy;
	pPVar5->y0 = sVar1 - sVar7;
	pPVar5->y1 = sVar1 - sVar7;
	pPVar5->y2 = sVar1 + sVar7;
	pPVar5->y3 = sVar1 + sVar7;
	uVar9 = (uchar)(iVar10 / iVar8);
	pPVar5->r0 = uVar9;
	pPVar5->g0 = uVar9;
	pPVar5->b0 = uVar9;
	if (0x100 < scale) {
		pPVar5 = PrintFt4__7TextDatiiiiii(this,Frm,sx,sy + iVar8 * -4,0,iVar4 + 1,0);
		sVar2 = (sVar3 + 1) - sVar6;
		sVar6 = sVar3 + 1 + sVar6;
		pPVar5->x0 = sVar2;
		pPVar5->x2 = sVar2;
		sVar3 = (sVar1 + 1) - sVar7;
		pPVar5->y0 = sVar3;
		pPVar5->y1 = sVar3;
		pPVar5->x1 = sVar6;
		pPVar5->x3 = sVar6;
		sVar7 = sVar1 + 1 + sVar7;
		pPVar5->r0 = uVar9;
		pPVar5->g0 = uVar9;
		pPVar5->b0 = uVar9;
		pPVar5->y2 = sVar7;
		pPVar5->y3 = sVar7;
		pPVar5->code = pPVar5->code & 0xfe | 2;
	}
	GM_FinishedUsing__FP7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj /*$a0*/, int ScrX /*$a1*/, int ScrY /*$t0*/, int ot /*$a3*/)
 // line 961, offset 0x80054930
	/* begin block 1 */
		// Start line: 962
		// Start offset: 0x80054930
		// Variables:
	// 		int f; // $a2
	/* end block 1 */
	// End offset: 0x80054990
	// End Line: 970

	/* begin block 2 */
		// Start line: 2151
	/* end block 2 */
	// End Line: 2152

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ Obj_Door__Fi(int i /*$s1*/)
 // line 978, offset 0x800549a0
	/* begin block 1 */
		// Start line: 979
		// Start offset: 0x800549A0
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80054AF0
	// End Line: 1004

	/* begin block 2 */
		// Start line: 2186
	/* end block 2 */
	// End Line: 2187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Obj_Door__Fi(int i)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	uchar uVar4;
	short sVar5;
	int x;
	int y;
	
	if (object[i]._oVar4 == 0) {
		object[i]._oSelFlag = '\x03';
		object[i]._oMissFlag = '\0';
	}
	else {
		y = (int)object[i]._oy;
		x = (int)object[i]._ox;
		sVar2 = dung_map[x * 0x70 + y].dMonster;
		cVar1 = dung_map[x * 0x70 + y].dItem;
		uVar3 = GetdDead__Fii(x,y);
		uVar4 = IsDplayer__Fii(x,y);
		object[i]._oSelFlag = '\x02';
		sVar5 = 1;
		if (uVar4 != '\0' || (uVar3 != '\0' || (cVar1 != '\0' || sVar2 != 0))) {
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
 // line 1011, offset 0x80054b10
	/* begin block 1 */
		// Start line: 1012
		// Start offset: 0x80054B10
	/* end block 1 */
	// End offset: 0x80054B54
	// End Line: 1014

	/* begin block 2 */
		// Start line: 2261
	/* end block 2 */
	// End Line: 2262

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1020, offset 0x80054b5c
	/* begin block 1 */
		// Start line: 1021
		// Start offset: 0x80054B5C
		// Variables:
	// 		int i; // $s1
	// 		int oi; // $v0
	/* end block 1 */
	// End offset: 0x80054C48
	// End Line: 1032

	/* begin block 2 */
		// Start line: 2280
	/* end block 2 */
	// End Line: 2281

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
			iVar3 = (int)(&objectactive)[iVar5];
			if (((int)object[iVar3]._otype == ttype) && ((int)object[iVar3]._oVar1 == tid)) {
				cVar1 = object[iVar3]._ox;
				cVar2 = object[iVar3]._oy;
				object[iVar3]._oVar4 = 1;
				object[iVar3]._oAnimFlag = '\x01';
				object[iVar3]._oAnimDelay = 1;
				iVar4 = AddLight__Fiii((int)cVar1,(int)cVar2,0x126);
				object[iVar3]._olid = (short)iVar4;
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < numobjects);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_FlameTrap__Fi(int i /*$s5*/)
 // line 1038, offset 0x80054c6c
	/* begin block 1 */
		// Start line: 1039
		// Start offset: 0x80054C6C
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s2
	// 		int j; // $s3
	/* end block 1 */
	// End offset: 0x80054F28
	// End Line: 1080

	/* begin block 2 */
		// Start line: 2322
	/* end block 2 */
	// End Line: 2323

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Obj_FlameTrap__Fi(int i)

{
	char cVar1;
	short sVar2;
	bool bVar3;
	uchar uVar4;
	int r;
	int x;
	int y;
	
	if (object[i]._oVar2 == 0) {
		if (object[i]._oVar4 == 0) {
			r = 0;
			if (object[i]._oVar3 == 2) {
				cVar1 = object[i]._oy;
				x = (int)object[i]._ox + -2;
				y = x * 0x380 + (int)cVar1 * 8;
				do {
					uVar4 = IsDplayer__Fii(x,(int)cVar1);
					if ((uVar4 != '\0') || (*(short *)((int)&dung_map[0].dMonster + y) != 0)) {
						object[i]._oVar4 = 1;
					}
					y = y + 0x380;
					r = r + 1;
					x = x + 1;
				} while (r < 5);
			}
			else {
				cVar1 = object[i]._ox;
				y = (int)object[i]._oy + -2;
				x = y * 8 + (int)cVar1 * 0x380;
				do {
					uVar4 = IsDplayer__Fii((int)cVar1,y);
					if ((uVar4 != '\0') || (*(short *)((int)&dung_map[0].dMonster + x) != 0)) {
						object[i]._oVar4 = 1;
					}
					x = x + 8;
					r = r + 1;
					y = y + 1;
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
		bVar3 = r < 6;
	}
	else {
		if (object[i]._oVar4 == 0) {
			return;
		}
		object[i]._oAnimFrame = object[i]._oAnimFrame + -1;
		r = (int)object[i]._oAnimFrame;
		bVar3 = r < 5;
		if (r == 1) {
			sVar2 = object[i]._olid;
			object[i]._oVar4 = 0;
			AddUnLight__Fi((int)sVar2);
			return;
		}
	}
	if (bVar3) {
		ChangeLightRadius__Fii((int)object[i]._olid,r);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_Trap__Fi(int i /*$s7*/)
 // line 1088, offset 0x80054f50
	/* begin block 1 */
		// Start line: 1089
		// Start offset: 0x80054F50
		// Variables:
	// 		int oti; // $s3
	// 		unsigned char otrig; // $a1
	// 		int sx; // stack offset -64
	// 		int sy; // stack offset -56
	// 		int dx; // $s4
	// 		int dy; // $s5
	// 		int x; // $s0
	// 		int y; // $s1
	// 		int ax; // $s6
	/* end block 1 */
	// End offset: 0x80055260
	// End Line: 1140

	/* begin block 2 */
		// Start line: 2434
	/* end block 2 */
	// End Line: 2435

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Obj_Trap__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	int midir;
	int x;
	int y;
	int iVar5;
	int iVar6;
	int x2;
	int y2;
	
	bVar3 = false;
	if (object[i]._oVar4 == 0) {
		iVar5 = (int)dung_map[(int)object[i]._oVar1 * 0x70 + (int)object[i]._oVar2].dObject + -1;
		switch((int)(((uint)(byte)object[iVar5]._otype - 1) * 0x1000000) >> 0x18) {
		case 0:
		case 1:
		case 0x29:
		case 0x2a:
		case 0x49:
		case 0x4a:
			bVar3 = false;
			if (object[iVar5]._oVar4 != 0) {
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
			if (object[iVar5]._oSelFlag == '\0') {
				bVar3 = true;
			}
		}
		if (bVar3) {
			object[i]._oVar4 = 1;
			y2 = (int)object[iVar5]._oy;
			iVar6 = (int)object[iVar5]._ox;
			cVar1 = object[i]._ox;
			y = y2 + -1;
			midir = y2 + 1;
			cVar2 = object[i]._oy;
			x2 = iVar6;
			if (y <= midir) {
				x2 = iVar6;
				do {
					x = iVar6 + -1;
					if (x <= iVar6 + 1) {
						do {
							uVar4 = IsDplayer__Fii(x,y);
							if (uVar4 != '\0') {
								x2 = x;
								y2 = y;
							}
							x = x + 1;
						} while (x <= iVar6 + 1);
					}
					y = y + 1;
				} while (y <= midir);
			}
			if (deltaload == '\0') {
				midir = GetDirection__Fiiii((int)cVar1,(int)cVar2,x2,y2);
				AddMissile__Fiiiiiiciii((int)cVar1,(int)cVar2,x2,y2,midir,(int)object[i]._oVar3,1,-1,0,0);
				PlaySfxLoc__Fiii(0x35,(int)object[iVar5]._ox,(int)object[iVar5]._oy);
			}
			object[iVar5]._oTrapFlag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Obj_BCrossDamage__Fi(int i /*$s6*/)
 // line 1148, offset 0x80055294
	/* begin block 1 */
		// Start line: 1149
		// Start offset: 0x80055294
		// Variables:
	// 		int resist; // $v1
	// 		int damage[4]; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1149
			// Start offset: 0x80055294
			// Variables:
		// 		int pnum; // $s5
		/* end block 1.1 */
		// End offset: 0x800554B0
		// End Line: 1180
	/* end block 1 */
	// End offset: 0x800554B0
	// End Line: 1180

	/* begin block 2 */
		// Start line: 2575
	/* end block 2 */
	// End Line: 2576

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Obj_BCrossDamage__Fi(int i)

{
	char cVar1;
	uint uVar2;
	int psfx;
	int x;
	int y;
	short *psVar3;
	short *psVar4;
	undefined *puVar5;
	long *plVar6;
	long *plVar7;
	int pnum;
	int aiStack52 [4];
	undefined4 local_24;
	
	aiStack52[1] = DAT_80116b0c;
	aiStack52[2] = DAT_80116b10;
	aiStack52[3] = DAT_80116b14;
	local_24 = DAT_80116b18;
	pnum = 0;
	psVar3 = &plr[0]._py;
	psVar4 = &plr[0]._px;
	plVar6 = &plr[0]._pHitPoints;
	plVar7 = &plr[0]._pHPBase;
	puVar5 = (undefined *)0x0;
	do {
		if (*(int *)((int)&plr[0]._pmode + (int)puVar5) != 8) {
			if (0 < (int)(&plr[0]._pFireResist)[(int)puVar5]) {
				aiStack52[(uint)leveltype] =
						 aiStack52[(uint)leveltype] -
						 (aiStack52[(uint)leveltype] * (int)(&plr[0]._pFireResist)[(int)puVar5]) / 100;
			}
			if (((int)*psVar4 == (int)object[i]._ox) && ((int)*psVar3 == (int)object[i]._oy + -1)) {
				uVar2 = (uint)leveltype;
				*plVar6 = *plVar6 - aiStack52[uVar2];
				*plVar7 = *plVar7 - aiStack52[uVar2];
				if (*plVar6 >> 6 < 1) {
					StartPlrKill__Fii(pnum,0);
				}
				else {
					cVar1 = (&plr[0]._pClass)[(int)puVar5];
					if (cVar1 == '\0') {
						x = (int)*psVar4;
						y = (int)*psVar3;
						psfx = 0x315;
					}
					else {
						if (cVar1 == '\x01') {
							x = (int)*psVar4;
							y = (int)*psVar3;
							psfx = 0x2a7;
						}
						else {
							if (cVar1 != '\x02') goto LAB_80055488;
							x = (int)*psVar4;
							y = (int)*psVar3;
							psfx = 0x23f;
						}
					}
					PlaySfxLoc__Fiii(psfx,x,y);
				}
LAB_80055488:
				drawhpflag = '\x01';
			}
		}
		psVar3 = psVar3 + 0xcf4;
		psVar4 = psVar4 + 0xcf4;
		plVar6 = plVar6 + 0x67a;
		plVar7 = plVar7 + 0x67a;
		pnum = pnum + 1;
		puVar5 = &DAT_000019e8 + (int)puVar5;
		if (1 < pnum) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessObjects__Fv()
 // line 1186, offset 0x800554dc
	/* begin block 1 */
		// Start line: 1187
		// Start offset: 0x800554DC
		// Variables:
	// 		int i; // $s1
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x8005573C
	// End Line: 1271

	/* begin block 2 */
		// Start line: 2654
	/* end block 2 */
	// End Line: 2655

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessObjects__Fv(void)

{
	char cVar1;
	int i;
	int i_00;
	
	i_00 = 0;
	if (0 < numobjects) {
		do {
			i = (int)(&objectactive)[i_00];
			switch(object[i]._otype) {
			case '\0':
				Obj_Light__Fii(i,0x1b8);
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
			case ',':
			case '-':
			case '.':
			case '/':
			case 'A':
			case 'W':
				Obj_Light__Fii(i,0x3f3);
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
				Obj_Light__Fii(i,0x1b8);
				Obj_BCrossDamage__Fi(i);
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
			if (object[(int)(&objectactive)[i_00]]._oDelFlag == '\0') {
				i_00 = i_00 + 1;
			}
			else {
				DeleteObject__Fii((int)(&objectactive)[i_00],i_00);
				i_00 = 0;
			}
		} while (i_00 < numobjects);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjSetMicro__Fiii(int dx /*$s0*/, int dy /*$s1*/, int pn /*$s2*/)
 // line 1280, offset 0x80055754
	/* begin block 1 */
		// Start line: 1281
		// Start offset: 0x80055754
	/* end block 1 */
	// End offset: 0x800558A8
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2847
	/* end block 2 */
	// End Line: 2848

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ObjSetMicro__Fiii(int dx,int dy,int pn)

{
	if (dPiece == (short *)0x0) {
		dung_map[dx * 0x70 + dy].dBits = dung_map[dx * 0x70 + dy].dBits & 0xf0;
		if ((&nSolidTable)[pn] == '\0') {
			ClearSOLID__Fii(dx,dy);
		}
		else {
			SetSOLID__Fii(dx,dy);
		}
		if (nMissileTable[pn] == '\0') {
			ClearMISSILE__Fii(dx,dy);
		}
		else {
			SetMISSILE__Fii(dx,dy);
		}
		if ((&nBlockTable)[pn] == '\0') {
			ClearBLOCK__Fii(dx,dy);
		}
		else {
			SetBLOCK__Fii(dx,dy);
		}
		if (nTrapTable[pn] == '\0') {
			ClearTRAP__Fii(dx,dy);
		}
		else {
			SetTRAP__Fii(dx,dy);
		}
		if (pn == 0) {
			SetSOLID__Fii(dx,dy);
		}
		ChangeBlock__Fiii(dx,dy,pn);
	}
	else {
		SetDPiece__Fiis(dx,dy,(short)pn);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjSetMini__Fiii(int x /*$a0*/, int y /*$a1*/, int v /*$a2*/)
 // line 1320, offset 0x800558c4
	/* begin block 1 */
		// Start line: 1321
		// Start offset: 0x800558C4
		// Variables:
	// 		long v2; // $s0
	// 		long v3; // $s1
	// 		long v4; // $s3
	// 		int xx; // $s6
	// 		int yy; // $s5
	/* end block 1 */
	// End offset: 0x80055980
	// End Line: 1360

	/* begin block 2 */
		// Start line: 2927
	/* end block 2 */
	// End Line: 2928

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ObjSetMini__Fiii(int x,int y,int v)

{
	short sVar1;
	short sVar2;
	short sVar3;
	int dx;
	int dy;
	int dx_00;
	
	dx_00 = x * 2 + 0x10;
	dy = y * 2 + 0x10;
	sVar1 = *(short *)((int)&INT_800ceca4 + v * 8 + 2);
	sVar2 = *(short *)(&INT_800ceca8 + v * 2);
	sVar3 = *(short *)((int)&INT_800ceca8 + v * 8 + 2);
	ObjSetMicro__Fiii(dx_00,dy,(int)*(short *)(&INT_800ceca4 + v * 2) + 1);
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
 // line 1366, offset 0x800559ac
	/* begin block 1 */
		// Start line: 1367
		// Start offset: 0x800559AC
	/* end block 1 */
	// End offset: 0x800559AC
	// End Line: 1367

	/* begin block 2 */
		// Start line: 3190
	/* end block 2 */
	// End Line: 3191

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ObjL1Special__Fiiii(int x1,int y1,int x2,int y2)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjL2Special__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 1396, offset 0x800559b4
	/* begin block 1 */
		// Start line: 1397
		// Start offset: 0x800559B4
	/* end block 1 */
	// End offset: 0x800559B4
	// End Line: 1397

	/* begin block 2 */
		// Start line: 3255
	/* end block 2 */
	// End Line: 3256

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ObjL2Special__Fiiii(int x1,int y1,int x2,int y2)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoorSet__Fiii(int oi /*$s3*/, int dx /*$s0*/, int dy /*$s1*/)
 // line 1431, offset 0x800559bc
	/* begin block 1 */
		// Start line: 1432
		// Start offset: 0x800559BC
		// Variables:
	// 		int pn; // $s2
	/* end block 1 */
	// End offset: 0x80055C00
	// End Line: 1453

	/* begin block 2 */
		// Start line: 3296
	/* end block 2 */
	// End Line: 3297

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoorSet__Fiii(int oi,int dx,int dy)

{
	int iVar1;
	char cVar2;
	
	iVar1 = FindBlock__Fii(dx,dy);
	if (iVar1 == 0x2b) {
		ObjSetMicro__Fiii(dx,dy,0x188);
	}
	if (iVar1 == 0x2d) {
		ObjSetMicro__Fiii(dx,dy,0x18a);
	}
	if (iVar1 == 0x32) {
		cVar2 = object[oi]._otype;
		if (cVar2 == '\x01') {
			ObjSetMicro__Fiii(dx,dy,0x19b);
			cVar2 = object[oi]._otype;
		}
		if (cVar2 == '\x02') {
			ObjSetMicro__Fiii(dx,dy,0x19c);
		}
	}
	if (iVar1 == 0x36) {
		ObjSetMicro__Fiii(dx,dy,0x18d);
	}
	if (iVar1 == 0x37) {
		ObjSetMicro__Fiii(dx,dy,0x18e);
	}
	if (iVar1 == 0x3d) {
		ObjSetMicro__Fiii(dx,dy,399);
	}
	if (iVar1 == 0x43) {
		ObjSetMicro__Fiii(dx,dy,400);
	}
	if (iVar1 == 0x44) {
		ObjSetMicro__Fiii(dx,dy,0x191);
	}
	if (iVar1 == 0x45) {
		ObjSetMicro__Fiii(dx,dy,0x193);
	}
	if (iVar1 == 0x46) {
		ObjSetMicro__Fiii(dx,dy,0x194);
	}
	if (iVar1 == 0x48) {
		ObjSetMicro__Fiii(dx,dy,0x196);
	}
	if (iVar1 == 0xd4) {
		ObjSetMicro__Fiii(dx,dy,0x197);
	}
	if (iVar1 == 0x162) {
		ObjSetMicro__Fiii(dx,dy,0x199);
	}
	if (iVar1 == 0x163) {
		ObjSetMicro__Fiii(dx,dy,0x19a);
	}
	if (iVar1 == 0x19b) {
		ObjSetMicro__Fiii(dx,dy,0x18c);
	}
	if (iVar1 == 0x19c) {
		ObjSetMicro__Fiii(dx,dy,0x18c);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RedoPlayerVision__Fv()
 // line 1459, offset 0x80055c20
	/* begin block 1 */
		// Start line: 1460
		// Start offset: 0x80055C20
		// Variables:
	// 		int p; // $s1
	/* end block 1 */
	// End offset: 0x80055CAC
	// End Line: 1467

	/* begin block 2 */
		// Start line: 3356
	/* end block 2 */
	// End Line: 3357

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RedoPlayerVision__Fv(void)

{
	undefined *puVar1;
	int iVar2;
	
	iVar2 = 0;
	puVar1 = (undefined *)0x0;
	do {
		if (((&plr[0].plractive)[(int)puVar1] != '\0') &&
			 ((uint)currlevel == *(uint *)((int)&plr[0].plrlevel + (int)puVar1))) {
			ChangeVisionXY__Fiii
								((int)(&plr[0]._pvid)[(int)puVar1],(int)*(short *)((int)&plr[0]._px + (int)puVar1),
								 (int)*(short *)((int)&plr[0]._py + (int)puVar1));
		}
		iVar2 = iVar2 + 1;
		puVar1 = &DAT_000019e8 + (int)puVar1;
	} while (iVar2 < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL1RDoor__FiiUc(int pnum /*$s1*/, int oi /*$s2*/, unsigned char sendflag /*$s5*/)
 // line 1473, offset 0x80055cc4
	/* begin block 1 */
		// Start line: 1474
		// Start offset: 0x80055CC4
		// Variables:
	// 		int dx; // $s3
	// 		int dy; // $s4
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80055FFC
	// End Line: 1521

	/* begin block 2 */
		// Start line: 3390
	/* end block 2 */
	// End Line: 3391

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateL1RDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int pn;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x13,(int)object[oi]._ox,(int)object[oi]._oy);
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
				PlaySfxLoc__Fiii(0x14,(int)object[oi]._ox,(int)object[oi]._oy);
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
				PlaySfxLoc__Fiii(0x13,x,y);
			}
			sVar2 = dung_map[x * 0x70 + y].dMonster;
			cVar1 = dung_map[x * 0x70 + y].dItem;
			uVar3 = GetdDead__Fii(x,y);
			if (uVar3 == '\0' && (cVar1 == '\0' && sVar2 == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				sVar2 = object[oi]._oVar1;
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,(int)sVar2);
				pn = (int)object[oi]._oVar2;
				if (pn == 0x32) {
					pn = FindBlock__Fii(x + -1,y);
					if (pn == 0x18c) {
						pn = 0x19b;
					}
					else {
						pn = (int)object[oi]._oVar2;
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
// void /*$ra*/ OperateL1LDoor__FiiUc(int pnum /*$s2*/, int oi /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1528, offset 0x80056024
	/* begin block 1 */
		// Start line: 1529
		// Start offset: 0x80056024
		// Variables:
	// 		int dx; // $s4
	// 		int dy; // $s3
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80056394
	// End Line: 1576

	/* begin block 2 */
		// Start line: 3511
	/* end block 2 */
	// End Line: 3512

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateL1LDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int pn;
	int y;
	int x;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload != '\0') {
			return;
		}
		PlaySfxLoc__Fiii(0x13,(int)object[oi]._ox,(int)object[oi]._oy);
		return;
	}
	y = (int)object[oi]._oy;
	x = (int)object[oi]._ox;
	if (object[oi]._oVar4 == 0) {
		if ((pnum == myplr) && (sendflag != '\0')) {
			NetSendCmdParam1__FUcUcUs('\x01','+',(ushort)oi);
		}
		pn = oi * 2;
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x14,(int)object[oi]._ox,(int)object[oi]._oy);
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
		return;
	}
	if (deltaload == '\0') {
		PlaySfxLoc__Fiii(0x13,x,y);
	}
	sVar2 = dung_map[x * 0x70 + y].dMonster;
	cVar1 = dung_map[x * 0x70 + y].dItem;
	uVar3 = GetdDead__Fii(x,y);
	if (uVar3 != '\0' || (cVar1 != '\0' || sVar2 != 0)) {
		object[oi]._oVar4 = 2;
		return;
	}
	if ((pnum == myplr) && (sendflag != '\0')) {
		NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
	}
	sVar2 = object[oi]._oVar1;
	object[oi]._oVar4 = 0;
	object[oi]._oSelFlag = '\x03';
	ObjSetMicro__Fiii(x,y,(int)sVar2);
	pn = (int)object[oi]._oVar2;
	if (pn == 0x32) {
		pn = FindBlock__Fii(x + -1,y);
		if (pn == 0x18c) {
			pn = 0x19b;
			x = x + -1;
			goto LAB_8005633c;
		}
		pn = (int)object[oi]._oVar2;
	}
	y = y + -1;
LAB_8005633c:
	ObjSetMicro__Fiii(x,y,pn);
	object[oi]._oPreFlag = '\0';
	RedoPlayerVision__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL2RDoor__FiiUc(int pnum /*$s4*/, int oi /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1583, offset 0x800563bc
	/* begin block 1 */
		// Start line: 1584
		// Start offset: 0x800563BC
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80056700
	// End Line: 1623

	/* begin block 2 */
		// Start line: 3633
	/* end block 2 */
	// End Line: 3634

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateL2RDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x13,(int)object[oi]._ox,(int)object[oi]._oy);
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
				PlaySfxLoc__Fiii(0x14,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x11);
			dungeon[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x99;
			object[oi]._oAnimFrame = '\x04';
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(0x13,x,y);
			}
			sVar2 = dung_map[x * 0x70 + y].dMonster;
			cVar1 = dung_map[x * 0x70 + y].dItem;
			uVar3 = GetdDead__Fii(x,y);
			if (uVar3 == '\0' && (cVar1 == '\0' && sVar2 == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,0x21c);
				dungeon[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x97;
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
// void /*$ra*/ OperateL2LDoor__FiiUc(int pnum /*$s4*/, int oi /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1630, offset 0x80056728
	/* begin block 1 */
		// Start line: 1631
		// Start offset: 0x80056728
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80056A6C
	// End Line: 1670

	/* begin block 2 */
		// Start line: 3736
	/* end block 2 */
	// End Line: 3737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateL2LDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x13,(int)object[oi]._ox,(int)object[oi]._oy);
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
				PlaySfxLoc__Fiii(0x14,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0xd);
			dungeon[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x98;
			object[oi]._oAnimFrame = '\x03';
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(0x13,x,y);
			}
			sVar2 = dung_map[x * 0x70 + y].dMonster;
			cVar1 = dung_map[x * 0x70 + y].dItem;
			uVar3 = GetdDead__Fii(x,y);
			if (uVar3 == '\0' && (cVar1 == '\0' && sVar2 == 0)) {
				if ((pnum == myplr) && (sendflag != '\0')) {
					NetSendCmdParam1__FUcUcUs('\x01',',',(ushort)oi);
				}
				object[oi]._oVar4 = 0;
				object[oi]._oSelFlag = '\x03';
				ObjSetMicro__Fiii(x,y,0x21a);
				dungeon[(x + -0x10 >> 1) * 0x30 + (y + -0x10 >> 1)] = 0x96;
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
// void /*$ra*/ OperateL3RDoor__FiiUc(int pnum /*$s4*/, int oi /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1677, offset 0x80056a94
	/* begin block 1 */
		// Start line: 1678
		// Start offset: 0x80056A94
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80056D48
	// End Line: 1715

	/* begin block 2 */
		// Start line: 3839
	/* end block 2 */
	// End Line: 3840

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateL3RDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x13,(int)object[oi]._ox,(int)object[oi]._oy);
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
				PlaySfxLoc__Fiii(0x14,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x21d);
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(0x13,x,y);
			}
			sVar2 = dung_map[x * 0x70 + y].dMonster;
			cVar1 = dung_map[x * 0x70 + y].dItem;
			uVar3 = GetdDead__Fii(x,y);
			if (uVar3 == '\0' && (cVar1 == '\0' && sVar2 == 0)) {
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
// void /*$ra*/ OperateL3LDoor__FiiUc(int pnum /*$s4*/, int oi /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1720, offset 0x80056d70
	/* begin block 1 */
		// Start line: 1721
		// Start offset: 0x80056D70
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s3
	// 		unsigned char dok; // $s0
	/* end block 1 */
	// End offset: 0x80057024
	// End Line: 1776

	/* begin block 2 */
		// Start line: 3934
	/* end block 2 */
	// End Line: 3935

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateL3LDoor__FiiUc(int pnum,int oi,uchar sendflag)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	int x;
	int y;
	
	if (object[oi]._oVar4 == 2) {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x13,(int)object[oi]._ox,(int)object[oi]._oy);
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
				PlaySfxLoc__Fiii(0x14,(int)object[oi]._ox,(int)object[oi]._oy);
			}
			ObjSetMicro__Fiii(x,y,0x21a);
			object[oi]._oPreFlag = '\x01';
			object[oi]._oVar4 = 1;
			object[oi]._oSelFlag = '\x02';
			RedoPlayerVision__Fv();
		}
		else {
			if (deltaload == '\0') {
				PlaySfxLoc__Fiii(0x13,x,y);
			}
			sVar2 = dung_map[x * 0x70 + y].dMonster;
			cVar1 = dung_map[x * 0x70 + y].dItem;
			uVar3 = GetdDead__Fii(x,y);
			if (uVar3 == '\0' && (cVar1 == '\0' && sVar2 == 0)) {
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
 // line 1783, offset 0x8005704c
	/* begin block 1 */
		// Start line: 1784
		// Start offset: 0x8005704C
		// Variables:
	// 		int i; // $s4
	// 		int oi; // $s0
	// 		int dpx; // $s3
	// 		int dpy; // $s2
	// 		int mx; // $s5
	// 		int my; // $s7
	/* end block 1 */
	// End offset: 0x800574F0
	// End Line: 1827

	/* begin block 2 */
		// Start line: 4070
	/* end block 2 */
	// End Line: 4071

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MonstCheckDoors__Fi(int m)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int oi;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar7 = (int)monster[m]._my;
	iVar6 = (int)monster[m]._mx;
	iVar3 = iVar7 + -1;
	iVar4 = iVar6 + -1;
	if ((((dung_map[iVar4 * 0x70 + iVar3].dObject == '\0') &&
			 (oi = iVar6 + 1, dung_map[iVar6 * 0x70 + iVar3].dObject == '\0')) &&
			(dung_map[oi * 0x70 + iVar3].dObject == '\0')) &&
		 (((dung_map[iVar4 * 0x70 + iVar7].dObject == '\0' &&
			 (iVar3 = iVar7 + 1, dung_map[oi * 0x70 + iVar7].dObject == '\0')) &&
			((dung_map[iVar4 * 0x70 + iVar3].dObject == '\0' &&
			 ((dung_map[iVar6 * 0x70 + iVar3].dObject == '\0' &&
				(dung_map[oi * 0x70 + iVar3].dObject == '\0')))))))) {
		return;
	}
	iVar3 = 0;
	if (0 < numobjects) {
		do {
			oi = (int)(&objectactive)[iVar3];
			iVar4 = oi << 1;
			if (((uint)(byte)object[oi]._otype - 1 < 2) && (iVar4 = oi << 1, object[oi]._oVar4 == 0)) {
				iVar4 = abs((int)object[oi]._ox - iVar6);
				iVar1 = abs((int)object[oi]._oy - iVar7);
				if ((iVar4 == 1) && ((iVar1 < 2 && (object[oi]._otype == '\x01')))) {
					OperateL1LDoor__FiiUc(myplr,oi,'\x01');
				}
				if (iVar4 < 2) {
					iVar4 = oi * 2;
					if ((iVar1 != 1) || (iVar4 = oi << 1, object[oi]._otype != '\x02')) goto LAB_800572d4;
					OperateL1RDoor__FiiUc(myplr,oi,'\x01');
				}
				iVar4 = oi << 1;
			}
LAB_800572d4:
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
					if ((iVar2 != 1) || (iVar1 = oi << 1, object[oi]._otype != '+')) goto LAB_800573dc;
					OperateL2RDoor__FiiUc(myplr,oi,'\x01');
				}
				iVar1 = oi << 1;
			}
LAB_800573dc:
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
// void /*$ra*/ PostAddL1Objs__Fiiii(int x1 /*$s5*/, int y1 /*$a1*/, int x2 /*$s3*/, int y2 /*$s4*/)
 // line 1833, offset 0x80057520
	/* begin block 1 */
		// Start line: 1834
		// Start offset: 0x80057520
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s2
	// 		int pn; // $s0
	/* end block 1 */
	// End offset: 0x80057600
	// End Line: 1847

	/* begin block 2 */
		// Start line: 4178
	/* end block 2 */
	// End Line: 4179

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddL1Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int x;
	
	if (y1 < y2) {
		do {
			x = x1;
			if (x1 < x2) {
				do {
					iVar1 = FindBlock__Fii(x,y1);
					if (iVar1 == 0x10e) {
						PostAddObject__Fiii(0,x,y1);
					}
					if (((iVar1 == 0x2c) || (iVar1 == 0x33)) || (iVar1 == 0xd6)) {
						PostAddObject__Fiii(1,x,y1);
					}
					if ((iVar1 == 0x2e) || (iVar1 == 0x38)) {
						PostAddObject__Fiii(2,x,y1);
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
// void /*$ra*/ PostAddL2Objs__Fiiii(int x1 /*$fp*/, int y1 /*$a1*/, int x2 /*$s3*/, int y2 /*$s4*/)
 // line 1853, offset 0x80057628
	/* begin block 1 */
		// Start line: 1854
		// Start offset: 0x80057628
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s2
	// 		int pn; // $s0
	/* end block 1 */
	// End offset: 0x800576F0
	// End Line: 1865

	/* begin block 2 */
		// Start line: 4224
	/* end block 2 */
	// End Line: 4225

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PostAddL2Objs__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int x;
	
	if (y1 < y2) {
		do {
			x = x1;
			if (x1 < x2) {
				do {
					iVar1 = FindBlock__Fii(x,y1);
					if ((iVar1 == 0xd) || (iVar1 == 0x21d)) {
						PostAddObject__Fiii(0x2a,x,y1);
					}
					if ((iVar1 == 0x11) || (iVar1 == 0x21e)) {
						PostAddObject__Fiii(0x2b,x,y1);
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
// void /*$ra*/ ObjChangeMap__Fiiii(int x1 /*$s5*/, int y1 /*$fp*/, int x2 /*$s6*/, int y2 /*$s7*/)
 // line 1871, offset 0x80057724
	/* begin block 1 */
		// Start line: 1872
		// Start offset: 0x80057724
		// Variables:
	// 		int i; // $s4
	// 		int j; // $s2
	/* end block 1 */
	// End offset: 0x800578A8
	// End Line: 1888

	/* begin block 2 */
		// Start line: 4266
	/* end block 2 */
	// End Line: 4267

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ObjChangeMap__Fiiii(int x1,int y1,int x2,int y2)

{
	byte *pbVar1;
	undefined *puVar2;
	int x;
	int y;
	ushort *puVar3;
	int x1_00;
	int y1_00;
	
	y = y1;
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				puVar3 = dungeon + x1 * 0x30;
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
 // line 1896, offset 0x800578dc
	/* begin block 1 */
		// Start line: 1897
		// Start offset: 0x800578DC
		// Variables:
	// 		int i; // $t0
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x80057970
	// End Line: 1907

	/* begin block 2 */
		// Start line: 4325
	/* end block 2 */
	// End Line: 4326

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_MRectTrans__Fiiii(int x1,int y1,int x2,int y2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = y1 * 2 + 0x11;
	iVar2 = x1 * 2 + 0x11;
	iVar4 = x2 * 2 + 0x10;
	while (iVar3 <= y2 * 2 + 0x10) {
		if (iVar2 <= iVar4) {
			iVar1 = iVar2 * 0x380 + iVar3 * 8;
			iVar5 = iVar2;
			do {
				iVar5 = iVar5 + 1;
				(&dung_map[0].dTransVal)[iVar1] = TransVal;
				iVar1 = iVar1 + 0x380;
			} while (iVar5 <= iVar4);
		}
		iVar3 = iVar3 + 1;
	}
	TransVal = TransVal + '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ObjChangeMapResync__Fiiii(int x1 /*$s5*/, int y1 /*$fp*/, int x2 /*$s6*/, int y2 /*$s7*/)
 // line 1914, offset 0x80057978
	/* begin block 1 */
		// Start line: 1915
		// Start offset: 0x80057978
		// Variables:
	// 		int i; // $s4
	// 		int j; // $s2
	/* end block 1 */
	// End offset: 0x80057ABC
	// End Line: 1933

	/* begin block 2 */
		// Start line: 4361
	/* end block 2 */
	// End Line: 4362

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ObjChangeMapResync__Fiiii(int x1,int y1,int x2,int y2)

{
	byte *pbVar1;
	undefined *puVar2;
	int y;
	ushort *puVar3;
	int x;
	int iVar4;
	
	y = y1;
	if (y1 <= y2) {
		do {
			if (x1 <= x2) {
				puVar3 = dungeon + x1 * 0x30;
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
	FillCrapBits__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateL1Door__FiiUc(int pnum /*$s2*/, int i /*$s1*/, unsigned char sendflag /*$s5*/)
 // line 1938, offset 0x80057af0
	/* begin block 1 */
		// Start line: 1939
		// Start offset: 0x80057AF0
		// Variables:
	// 		int dpx; // $s0
	// 		int dpy; // $s4
	/* end block 1 */
	// End offset: 0x80057C24
	// End Line: 1946

	/* begin block 2 */
		// Start line: 4414
	/* end block 2 */
	// End Line: 4415

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ OperateLever__Fii(int pnum /*$a0*/, int i /*$s1*/)
 // line 1952, offset 0x80057c4c
	/* begin block 1 */
		// Start line: 1953
		// Start offset: 0x80057C4C
		// Variables:
	// 		unsigned char mapflag; // $a2
	// 		int j; // $a1
	// 		int oi; // $v0
	// 		int ot; // $v0
	/* end block 1 */
	// End offset: 0x80057E18
	// End Line: 1977

	/* begin block 2 */
		// Start line: 4459
	/* end block 2 */
	// End Line: 4460

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateLever__Fii(int pnum,int i)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x2b,(int)object[i]._ox,(int)object[i]._oy);
		}
		cVar1 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar1 + '\x01';
		bVar2 = true;
		if ((currlevel == '\x10') && (iVar4 = 0, 0 < numobjects)) {
			do {
				iVar3 = (int)(&objectactive)[iVar4];
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
		if (deltaload == '\0') {
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateBook__Fii(int pnum /*$s1*/, int i /*$s4*/)
 // line 1983, offset 0x80057e30
	/* begin block 1 */
		// Start line: 1984
		// Start offset: 0x80057E30
		// Variables:
	// 		int v1; // $s5
	// 		int v2; // $s3
	// 		int j; // $s0
	// 		int oi; // $v1
	// 		int ot; // $v1
	// 		int itm; // $s0

		/* begin block 1.1 */
			// Start line: 1990
			// Start offset: 0x80057E8C

			/* begin block 1.1.1 */
				// Start line: 1990
				// Start offset: 0x80057EB4
				// Variables:
			// 		unsigned char found; // $a2

				/* begin block 1.1.1.1 */
					// Start line: 1991
					// Start offset: 0x80057EB4

					/* begin block 1.1.1.1.1 */
						// Start line: 2005
						// Start offset: 0x80057FF0
						// Variables:
					// 		unsigned char dowarp; // $a1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800581AC
					// End Line: 2036
				/* end block 1.1.1.1 */
				// End offset: 0x800581AC
				// End Line: 2036
			/* end block 1.1.1 */
			// End offset: 0x800581B8
			// End Line: 2038
		/* end block 1.1 */
		// End offset: 0x800581B8
		// End Line: 2038

		/* begin block 1.2 */
			// Start line: 2048
			// Start offset: 0x800582A0

			/* begin block 1.2.1 */
				// Start line: 2048
				// Start offset: 0x800582C8
			/* end block 1.2.1 */
			// End offset: 0x800584C0
			// End Line: 2059
		/* end block 1.2 */
		// End offset: 0x800584C0
		// End Line: 2059
	/* end block 1 */
	// End offset: 0x800584D0
	// End Line: 2061

	/* begin block 2 */
		// Start line: 4532
	/* end block 2 */
	// End Line: 4533

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateBook__Fii(int pnum,int i)

{
	char *pcVar1;
	bool bVar2;
	char cVar3;
	bool bVar4;
	uchar uVar5;
	short sVar6;
	int iVar7;
	undefined4 uVar8;
	int iVar9;
	int v2;
	int v1;
	
	v1 = 0;
	v2 = 0;
	if (object[i]._oSelFlag != '\0') {
		if ((setlevel != '\0') && (setlvlnum == '\x05')) {
			bVar2 = false;
			if (deltaload == '\0') {
				bVar4 = false;
				iVar9 = 0;
				if (0 < numobjects) {
					do {
						iVar7 = (int)(&objectactive)[iVar9];
						if (object[iVar7]._otype == 'U') {
							sVar6 = object[iVar7]._oVar6;
							if (sVar6 == 1) {
								v1 = 0x1b;
								v2 = 0x1d;
								bVar4 = true;
								quests[15].pad_for_laz = quests[15].pad_for_laz | 2;
								object[iVar7]._oVar6 = 4;
								sVar6 = object[iVar7]._oVar6;
							}
							if (sVar6 == 2) {
								v1 = 0x2b;
								v2 = 0x1d;
								bVar4 = true;
								quests[15].pad_for_laz = quests[15].pad_for_laz | 1;
								object[iVar7]._oVar6 = 4;
							}
						}
						uVar5 = deltaload;
						if (bVar4) {
							object[(int)dung_map[35][36].dObject + -1]._oVar5 =
									 object[(int)dung_map[35][36].dObject + -1]._oVar5 + 1;
							if (uVar5 == '\0') {
								AddMissile__Fiiiiiiciii
													((int)plr[pnum]._px,(int)plr[pnum]._py,v1,v2,(int)plr[pnum]._pdir,3,0,pnum
													 ,0,0);
							}
							bVar2 = true;
							bVar4 = false;
						}
						iVar9 = iVar9 + 1;
					} while (iVar9 < numobjects);
				}
			}
			else {
				bVar2 = (quests[15].pad_for_laz & 2) != 0;
				if (bVar2) {
					object[(int)dung_map[35][36].dObject + -1]._oVar5 =
							 object[(int)dung_map[35][36].dObject + -1]._oVar5 + 1;
					object[(int)dung_map[26][46].dObject + -1]._oVar6 = 4;
				}
				if ((quests[15].pad_for_laz & 1) != 0) {
					object[(int)dung_map[35][36].dObject + -1]._oVar5 =
							 object[(int)dung_map[35][36].dObject + -1]._oVar5 + 1;
					object[(int)dung_map[45][47].dObject + -1]._oVar6 = 4;
					bVar2 = true;
				}
			}
			if (!bVar2) {
				return;
			}
		}
		cVar3 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar3 + '\x01';
		if ((setlevel != '\0') && (setlvlnum == '\x05')) {
			v2 = 0;
			ObjChangeMapResync__Fiiii
								((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
								 (int)object[i]._oVar4);
			if (0 < numobjects) {
				do {
					pcVar1 = &objectactive + v2;
					v2 = v2 + 1;
					SyncObjectAnim__Fi((int)*pcVar1);
				} while (v2 < numobjects);
			}
		}
		v2 = myplr;
		if (deltaload == '\0') {
			if ((setlevel != '\0') && (setlvlnum == '\x02')) {
				uVar8 = *(undefined4 *)((int)&plr[myplr]._pMemSpells + 4);
				*(uint *)&plr[myplr]._pMemSpells = *(uint *)&plr[myplr]._pMemSpells | 0x1000;
				*(undefined4 *)((int)&plr[v2]._pMemSpells + 4) = uVar8;
				if (plr[pnum]._pSplLvl[0xd] < '\x0f') {
					plr[v2]._pSplLvl[0xd] = plr[v2]._pSplLvl[0xd] + '\x01';
				}
				quests[14]._qactive = '\x03';
				if ((deltaload == '\0') && (NetSendCmdQuest__FUcUc('\x01','\x0e'), deltaload == '\0')) {
					PlaySfxLoc__Fiii(0xc,(int)object[i]._ox,(int)object[i]._oy);
				}
				InitDiabloMsg__Fc('+');
				v2 = myplr;
				(&ScrollFlag)[myplr] = 1;
				AddMissile__Fiiiiiiciii
									((int)plr[v2]._px,(int)plr[v2]._py,(int)object[i]._ox + -2,(int)object[i]._oy + -4
									 ,(int)plr[v2]._pdir,2,0,v2,0,0);
			}
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateBookLever__Fii(int pnum /*$a0*/, int i /*$s1*/)
 // line 2067, offset 0x800584fc
	/* begin block 1 */
		// Start line: 2068
		// Start offset: 0x800584FC
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s2
	// 		int tren; // $s0
	/* end block 1 */
	// End offset: 0x80058974
	// End Line: 2143

	/* begin block 2 */
		// Start line: 4726
	/* end block 2 */
	// End Line: 4727

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateBookLever__Fii(int pnum,int i)

{
	uchar uVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	
	uVar1 = deltaload;
	iVar3 = setpc_x * 2;
	iVar4 = setpc_y * 2;
	if (numitems < 0x7f) {
		if ((object[i]._oSelFlag != '\0') && (qtextflag == '\0')) {
			if ((object[i]._otype == 'G') && (quests[8]._qvar1 == '\0')) {
				quests[8]._qactive = '\x02';
				quests[8]._qlog = '\x01';
				quests[8]._qvar1 = '\x01';
				object[i]._oVar6 = 2;
				if (uVar1 == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\b');
				}
			}
			if (((object[i]._otype == 'H') && (quests[9]._qvar1 == '\0')) && (deltaload == '\0')) {
				quests[9]._qactive = '\x02';
				quests[9]._qlog = '\x01';
				quests[9]._qvar1 = '\x01';
				quests[9]._qvar2 = '\x01';
				object[i]._oVar6 = 2;
				SpawnQuestItem__Fiiiii(0x15,setpc_x * 2 + 0x19,setpc_y * 2 + 0x21,0,1);
				NetSendCmdQuest__FUcUc('\x01','\t');
			}
			uVar1 = deltaload;
			if ((object[i]._otype == 'X') && (quests[11]._qvar1 == '\0')) {
				quests[11]._qactive = '\x02';
				quests[11]._qlog = '\x01';
				quests[11]._qvar1 = '\x01';
				object[i]._oVar6 = 2;
				if (uVar1 == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\v');
				}
			}
			if ((int)object[i]._oAnimFrame != (int)object[i]._oVar6) {
				if ((object[i]._otype != 'H') &&
					 (ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
																(int)object[i]._oVar4), deltaload != '\0')) {
					ConvertdPiece__Fv();
				}
				cVar2 = TransVal;
				if (object[i]._otype == 'G') {
					TransVal = '\t';
					DRLG_MRectTrans__Fiiii
										((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
										 (int)object[i]._oVar4);
					TransVal = cVar2;
					if (deltaload != '\0') {
						TransVal = cVar2;
						ConvertdPiece__Fv();
					}
					if (quests[8].pad_for_laz == '\0') {
						CreateItem__Fiii(3,iVar3 + 0x15,iVar4 + 0x15);
					}
				}
			}
			if ((int)object[i]._oAnimFrame != (int)object[i]._oVar6) {
				PlaySfxLoc__Fiii(0x26,(int)object[i]._ox,(int)object[i]._oy);
			}
			object[i]._oAnimFrame = (char)object[i]._oVar6;
			if (deltaload == '\0') {
				InitQTextMsg__Fi((int)object[i]._oVar7);
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSChambBk__Fii(int pnum /*$a0*/, int i /*$s1*/)
 // line 2149, offset 0x80058994
	/* begin block 1 */
		// Start line: 2150
		// Start offset: 0x80058994
		// Variables:
	// 		int textdef; // $s2
	// 		int j; // $s0
	/* end block 1 */
	// End offset: 0x80058BB0
	// End Line: 2182

	/* begin block 2 */
		// Start line: 4901
	/* end block 2 */
	// End Line: 4902

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
					pcVar1 = &objectactive + iVar3;
					iVar3 = iVar3 + 1;
					SyncObjectAnim__Fi((int)*pcVar1);
				} while (iVar3 < numobjects);
			}
		}
		object[i]._oAnimFrame = (char)object[i]._oVar6;
		if (quests[14]._qactive == '\x01') {
			quests[14]._qactive = '\x02';
			quests[14]._qlog = '\x01';
			if (deltaload != '\0') {
				quests[14]._qactive = '\x02';
				quests[14]._qlog = '\x01';
				return;
			}
			NetSendCmdQuest__FUcUc('\x01','\x0e');
		}
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x26,(int)object[i]._ox,(int)object[i]._oy);
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
			quests[14]._qmsg = (uchar)m;
			InitQTextMsg__Fi(m);
			NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateChest__FiiUc(int pnum /*$s2*/, int i /*$s4*/, unsigned char sendmsg /*$s3*/)
 // line 2188, offset 0x80058bd0
	/* begin block 1 */
		// Start line: 2189
		// Start offset: 0x80058BD0
		// Variables:
	// 		int j; // $s1
	// 		int mdir; // $t0
	// 		int mtype; // $s5
	/* end block 1 */
	// End offset: 0x80058F68
	// End Line: 2235

	/* begin block 2 */
		// Start line: 4987
	/* end block 2 */
	// End Line: 4988

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateChest__FiiUc(int pnum,int i,uchar sendmsg)

{
	short sVar1;
	int midir;
	int mitype;
	
	mitype = 0;
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x12,(int)object[i]._ox,(int)object[i]._oy);
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
			NetSendCmdParam2__FUcUcUsUs('\0','.',(ushort)pnum,(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateMushPatch__Fii(int pnum /*$s1*/, int i /*$s2*/)
 // line 2241, offset 0x80058f90
	/* begin block 1 */
		// Start line: 2242
		// Start offset: 0x80058F90
		// Variables:
	// 		int x; // stack offset -24
	// 		int y; // stack offset -20
	/* end block 1 */
	// End offset: 0x80059188
	// End Line: 2287

	/* begin block 2 */
		// Start line: 5105
	/* end block 2 */
	// End Line: 5106

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateMushPatch__Fii(int pnum,int i)

{
	char cVar1;
	int local_18;
	int local_14;
	
	if (numitems < 0x7f) {
		if (object[i]._oSelFlag != '\0') {
			object[i]._oSelFlag = '\0';
			if ((quests[1]._qactive == '\x02') && (1 < quests[1]._qvar1)) {
				if (deltaload == '\0') {
					PlaySfxLoc__Fiii(0x12,(int)object[i]._ox,(int)object[i]._oy);
				}
				object[i]._oAnimFrame = '\x02';
				if (quests[1].pad_for_laz == '\0') {
					GetSuperItemLoc__FiiRiT2((int)object[i]._ox,(int)object[i]._oy,&local_18,&local_14);
					SpawnQuestItem__Fiiiii(0x11,local_18,local_14,0,0);
				}
				if (deltaload == '\0') {
					quests[1]._qvar1 = '\x03';
					NetSendCmdQuest__FUcUc('\x01','\x01');
					NetSendCmdParam2__FUcUcUsUs('\0','.',(ushort)pnum,(ushort)i);
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
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateInnSignChest__Fii(int pnum /*$a0*/, int i /*$s1*/)
 // line 2293, offset 0x800591a4
	/* begin block 1 */
		// Start line: 2294
		// Start offset: 0x800591A4
		// Variables:
	// 		int x; // stack offset -24
	// 		int y; // stack offset -20
	/* end block 1 */
	// End offset: 0x80059364
	// End Line: 2326

	/* begin block 2 */
		// Start line: 5216
	/* end block 2 */
	// End Line: 5217

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateInnSignChest__Fii(int pnum,int i)

{
	char cVar1;
	int local_18;
	int local_14;
	
	if (numitems < 0x7f) {
		if (quests[7]._qvar1 < 2) {
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
		else {
			if (object[i]._oSelFlag != '\0') {
				if (deltaload == '\0') {
					PlaySfxLoc__Fiii(0x12,(int)object[i]._ox,(int)object[i]._oy);
				}
				object[i]._oSelFlag = '\0';
				object[i]._oAnimFrame = '\x02';
				if (deltaload == '\0') {
					GetSuperItemLoc__FiiRiT2((int)object[i]._ox,(int)object[i]._oy,&local_18,&local_14);
					SpawnQuestItem__Fiiiii(0xc,local_18,local_14,0,0);
					NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
				}
			}
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSlainHero__FiiUc(int pnum /*$s0*/, int i /*$s1*/, unsigned char sendmsg /*$a2*/)
 // line 2332, offset 0x8005937c
	/* begin block 1 */
		// Start line: 2333
		// Start offset: 0x8005937C
	/* end block 1 */
	// End offset: 0x800595B4
	// End Line: 2358

	/* begin block 2 */
		// Start line: 5295
	/* end block 2 */
	// End Line: 5296

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateSlainHero__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	int psfx;
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
		CreateMagicArmor__FiiiiUcUc((int)object[i]._ox,(int)object[i]._oy,9,0x99,1,0);
		x = (int)plr[myplr]._px;
		y = (int)plr[myplr]._py;
		psfx = 0x2d4;
	}
	else {
		if (cVar1 == '\x01') {
			CreateMagicWeapon__FiiiiUcUc((int)object[i]._ox,(int)object[i]._oy,3,0x77,1,0);
			x = (int)plr[myplr]._px;
			y = (int)plr[myplr]._py;
			psfx = 0x26c;
		}
		else {
			if (cVar1 != '\x02') goto LAB_80059594;
			CreateSpellBook__FiiiUcUc((int)object[i]._ox,(int)object[i]._oy,3,'\x01',0);
			x = (int)plr[myplr]._px;
			y = (int)plr[myplr]._py;
			psfx = 0x204;
		}
	}
	PlaySfxLoc__Fiii(psfx,x,y);
LAB_80059594:
	if (pnum == myplr) {
		NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateTrapLvr__Fi(int i /*$a0*/)
 // line 2364, offset 0x800595cc
	/* begin block 1 */
		// Start line: 2365
		// Start offset: 0x800595CC
		// Variables:
	// 		int j; // $a1
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80059790
	// End Line: 2388

	/* begin block 2 */
		// Start line: 5361
	/* end block 2 */
	// End Line: 5362

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
				iVar2 = (int)(&objectactive)[iVar3];
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
				iVar2 = (int)(&objectactive)[iVar3];
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
 // line 2395, offset 0x8005979c
	/* begin block 1 */
		// Start line: 2396
		// Start offset: 0x8005979C
	/* end block 1 */
	// End offset: 0x80059934
	// End Line: 2418

	/* begin block 2 */
		// Start line: 5424
	/* end block 2 */
	// End Line: 5425

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateSarc__FiiUc(int pnum,int i,uchar sendmsg)

{
	long s;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x2f,(int)object[i]._ox,(int)object[i]._oy);
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
 // line 2424, offset 0x80059954
	/* begin block 1 */
		// Start line: 2425
		// Start offset: 0x80059954
		// Variables:
	// 		int dpx; // $s0
	// 		int dpy; // $s4
	/* end block 1 */
	// End offset: 0x80059A88
	// End Line: 2432

	/* begin block 2 */
		// Start line: 5491
	/* end block 2 */
	// End Line: 5492

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2438, offset 0x80059ab0
	/* begin block 1 */
		// Start line: 2439
		// Start offset: 0x80059AB0
		// Variables:
	// 		int dpx; // $s0
	// 		int dpy; // $s4
	/* end block 1 */
	// End offset: 0x80059BE4
	// End Line: 2446

	/* begin block 2 */
		// Start line: 5536
	/* end block 2 */
	// End Line: 5537

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2451, offset 0x80059c0c
	/* begin block 1 */
		// Start line: 2452
		// Start offset: 0x80059C0C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	// 		int rw; // $s3
	// 		int rh; // $s4
	// 		unsigned char *lm; // $s1
	// 		long mapoff; // $v0
	/* end block 1 */
	// End offset: 0x80059CE4
	// End Line: 2486

	/* begin block 2 */
		// Start line: 5579
	/* end block 2 */
	// End Line: 5580

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ OperatePedistal__Fii(int pnum /*$s0*/, int i /*$s2*/)
 // line 2493, offset 0x80059d14
	/* begin block 1 */
		// Start line: 2494
		// Start offset: 0x80059D14
		// Variables:
	// 		int jstn; // stack offset -32
	// 		void * JustOperated; // $s3

		/* begin block 1.1 */
			// Start line: 2506
			// Start offset: 0x80059D5C

			/* begin block 1.1.1 */
				// Start line: 2507
				// Start offset: 0x80059D70

				/* begin block 1.1.1.1 */
					// Start line: 2508
					// Start offset: 0x80059D70

					/* begin block 1.1.1.1.1 */
						// Start line: 2509
						// Start offset: 0x80059D9C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2537
							// Start offset: 0x80059F48

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2538
								// Start offset: 0x80059F60
								// Variables:
							// 		unsigned char *setp; // $s0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2539
									// Start offset: 0x80059F60
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80059F60
								// End Line: 2539
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8005A040
							// End Line: 2548
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005A040
						// End Line: 2548
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005A040
					// End Line: 2550
				/* end block 1.1.1.1 */
				// End offset: 0x8005A040
				// End Line: 2550
			/* end block 1.1.1 */
			// End offset: 0x8005A040
			// End Line: 2550

			/* begin block 1.1.2 */
				// Start line: 2554
				// Start offset: 0x8005A058

				/* begin block 1.1.2.1 */
					// Start line: 2570
					// Start offset: 0x8005A134

					/* begin block 1.1.2.1.1 */
						// Start line: 2571
						// Start offset: 0x8005A144
						// Variables:
					// 		unsigned char *setp; // $s1

						/* begin block 1.1.2.1.1.1 */
							// Start line: 2573
							// Start offset: 0x8005A144
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8005A144
						// End Line: 2573
					/* end block 1.1.2.1.1 */
					// End offset: 0x8005A234
					// End Line: 2587
				/* end block 1.1.2.1 */
				// End offset: 0x8005A234
				// End Line: 2587
			/* end block 1.1.2 */
			// End offset: 0x8005A234
			// End Line: 2587
		/* end block 1.1 */
		// End offset: 0x8005A234
		// End Line: 2587
	/* end block 1 */
	// End offset: 0x8005A234
	// End Line: 2587

	/* begin block 2 */
		// Start line: 5684
	/* end block 2 */
	// End Line: 5685

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperatePedistal__Fii(int pnum,int i)

{
	ItemStruct *pIVar1;
	uchar *pMap;
	int local_20 [2];
	
	if (numitems < 0x7f) {
		if (deltaload == '\0') {
			if ((object[i]._oVar6 != 3) &&
				 (pIVar1 = PlrHasItem__FiiRi(pnum,0x15,local_20), pIVar1 != (ItemStruct *)0x0)) {
				RemoveInvItem__Fii(pnum,local_20[0]);
				object[i]._oAnimFrame = object[i]._oAnimFrame + '\x01';
				object[i]._oVar6 = object[i]._oVar6 + 1;
				if (object[i]._oVar6 == 1) {
					PlaySfxLoc__Fiii(0x6a,(int)object[i]._ox,(int)object[i]._oy);
					ObjChangeMap__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
					quests[9]._qvar2 = '\x02';
					SpawnQuestItem__Fiiiii(0x15,setpc_x * 2 + 0x13,setpc_y * 2 + 0x1a,0,1);
					NetSendCmdQuest__FUcUc('\x01','\t');
				}
				if (object[i]._oVar6 == 2) {
					PlaySfxLoc__Fiii(0x6a,(int)object[i]._ox,(int)object[i]._oy);
					ObjChangeMap__Fiiii(setpc_x + 6,setpc_y + 3,setpc_x + setpc_w,setpc_y + 7);
					quests[9]._qvar2 = '\x03';
					SpawnQuestItem__Fiiiii(0x15,setpc_x * 2 + 0x1f,setpc_y * 2 + 0x1a,0,1);
					NetSendCmdQuest__FUcUc('\x01','\t');
				}
				if (object[i]._oVar6 == 3) {
					PlaySfxLoc__Fiii(0x48,(int)object[i]._ox,(int)object[i]._oy);
					ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
															(int)object[i]._oVar4);
					pMap = GRL_LoadFileInMemSig__FPCcPUl("Blood2.DUN",(ulong *)0x0);
					LoadMapObjs__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
					mem_free_dbg__FPv(pMap);
					CreateItem__Fiii(7,setpc_x * 2 + 0x19,setpc_y * 2 + 0x13);
					object[i]._oSelFlag = '\0';
					quests[9]._qvar2 = '\x04';
					NetSendCmdQuest__FUcUc('\x01','\t');
				}
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
		else {
			if (quests[9]._qvar2 == '\x02') {
				ObjChangeMap__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
				object[i]._oAnimFrame = '\x02';
			}
			if (quests[9]._qvar2 == '\x03') {
				ObjChangeMap__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
				ObjChangeMap__Fiiii(setpc_x + 6,setpc_y + 3,setpc_x + setpc_w,setpc_y + 7);
				object[i]._oAnimFrame = '\x03';
			}
			if (quests[9]._qvar2 == '\x04') {
				ObjChangeMap__Fiiii(setpc_x,setpc_y + 3,setpc_x + 2,setpc_y + 7);
				ObjChangeMap__Fiiii(setpc_x + 6,setpc_y + 3,setpc_x + setpc_w,setpc_y + 7);
				ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
														(int)object[i]._oVar4);
				pMap = GRL_LoadFileInMemSig__FPCcPUl("Blood2.DUN",(ulong *)0x0);
				LoadMapObjs__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
				mem_free_dbg__FPv(pMap);
				object[i]._oSelFlag = '\0';
				object[i]._oAnimFrame = '\x04';
			}
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TryDisarm__Fii(int pnum /*$s0*/, int i /*$s1*/)
 // line 2595, offset 0x8005a258
	/* begin block 1 */
		// Start line: 2596
		// Start offset: 0x8005A258
		// Variables:
	// 		int j; // $a2
	// 		int oi; // $v1
	// 		int oti; // $v0
	// 		int trapdisper; // $s0
	// 		unsigned char checkflag; // $v0
	/* end block 1 */
	// End offset: 0x8005A3EC
	// End Line: 2621

	/* begin block 2 */
		// Start line: 5901
	/* end block 2 */
	// End Line: 5902

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
			(sVar1 = plr[pnum]._pDexterity, uVar3 = (uint)currlevel, lVar2 = ENG_random__Fl(100),
			lVar2 <= (int)((int)sVar1 * 2 + uVar3 * -5))) && (iVar5 = 0, 0 < numobjects)) {
		do {
			iVar4 = (int)(&objectactive)[iVar5];
			if ((object[iVar4]._otype == '6' || object[iVar4]._otype == '5') &&
				 ((int)dung_map[(int)object[iVar4]._oVar1 * 0x70 + (int)object[iVar4]._oVar2].dObject + -1
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
 // line 2627, offset 0x8005a408
	/* begin block 1 */
		// Start line: 2628
		// Start offset: 0x8005A408
		// Variables:
	// 		int i; // $a1
	/* end block 1 */
	// End offset: 0x8005A470
	// End Line: 2631

	/* begin block 2 */
		// Start line: 5967
	/* end block 2 */
	// End Line: 5968

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2637, offset 0x8005a478
	/* begin block 1 */
		// Start line: 2638
		// Start offset: 0x8005A478
		// Variables:
	// 		int r; // $s2
	// 		int xx; // $a0
	// 		int yy; // $a1
	// 		int sc; // $a2
	// 		int v1; // $s1
	// 		int v2; // $s5
	// 		int v3; // $s6
	// 		int v4; // $s4
	// 		unsigned long lv; // $s0
	// 		unsigned long t; // $a2
	// 		unsigned char done; // $s5

		/* begin block 1.1 */
			// Start line: 2666
			// Start offset: 0x8005A558

			/* begin block 1.1.1 */
				// Start line: 2675
				// Start offset: 0x8005A5C8

				/* begin block 1.1.1.1 */
					// Start line: 3113
					// Start offset: 0x8005C204

					/* begin block 1.1.1.1.1 */
						// Start line: 3118
						// Start offset: 0x8005C228
						// Variables:
					// 		int mypnum; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005C228
					// End Line: 3119
				/* end block 1.1.1.1 */
				// End offset: 0x8005C228
				// End Line: 3119
			/* end block 1.1.1 */
			// End offset: 0x8005C7F0
			// End Line: 3233
		/* end block 1.1 */
		// End offset: 0x8005C7F0
		// End Line: 3233
	/* end block 1 */
	// End offset: 0x8005C81C
	// End Line: 3238

	/* begin block 2 */
		// Start line: 5996
	/* end block 2 */
	// End Line: 5997

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateShrine__Fiii(int pnum,int i,int sType)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	short sVar4;
	int *piVar5;
	void *pvVar6;
	long x;
	short sVar7;
	uchar *puVar8;
	undefined4 uVar9;
	int iVar10;
	char *pcVar11;
	int iVar12;
	long y;
	int iVar13;
	ItemStruct *pIVar14;
	int *piVar15;
	long lVar16;
	uint uVar17;
	ItemStruct *h;
	ItemStruct *pIVar18;
	ItemStruct *h_00;
	uint p;
	uint uVar19;
	int local_d0;
	ItemStruct *h_01;
	int l;
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
			sVar4 = object[i]._oVar1;
			object[i]._oAnimFlag = '\x01';
			object[i]._oAnimDelay = 1;
			switch(sVar4) {
			case 0:
				ModifyPlrStr__Fii(pnum,-1);
				ModifyPlrMag__Fii(pnum,-1);
				ModifyPlrDex__Fii(pnum,-1);
				ModifyPlrVit__Fii(pnum,-1);
				x = ENG_random__Fl(4);
				if (x == 1) {
					ModifyPlrMag__Fii(pnum,6);
				}
				else {
					if (x < 2) {
						if (x == 0) {
							ModifyPlrStr__Fii(pnum,6);
						}
					}
					else {
						if (x == 2) {
							ModifyPlrDex__Fii(pnum,6);
						}
						else {
							if (x == 3) {
								ModifyPlrVit__Fii(pnum,6);
							}
						}
					}
				}
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc('\f');
				break;
			case 1:
				l_00 = 0;
				l_01 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					if (((*(short *)((int)&plr[0].InvBody[0]._itype + local_d0) != -1) &&
							(sVar4 = *(short *)((int)&plr[0].InvBody[0]._iMaxDur + local_d0), sVar4 != 0xff)) &&
						 (sVar4 != 0)) {
						l_00 = l_00 + 1;
					}
					l_01 = l_01 + 1;
					local_d0 = local_d0 + 0x6c;
				} while (l_01 < 7);
				local_d0 = 0;
				if (0 < l_00) {
					l_00 = pnum * 0x19e8;
					do {
						if (((*(short *)((int)&plr[0].InvBody[0]._itype + l_00) != -1) &&
								(sVar4 = *(short *)((int)&plr[0].InvBody[0]._iMaxDur + l_00), sVar4 != 0xff)) &&
							 (sVar4 != 0)) {
							sVar4 = *(short *)((int)&plr[0].InvBody[0]._iDurability + l_00);
							sVar7 = *(short *)((int)&plr[0].InvBody[0]._iMaxDur + l_00) + 10;
							*(short *)((int)&plr[0].InvBody[0]._iMaxDur + l_00) = sVar7;
							*(short *)((int)&plr[0].InvBody[0]._iDurability + l_00) = sVar4 + 10;
							if (sVar7 < *(short *)((int)&plr[0].InvBody[0]._iDurability + l_00)) {
								*(short *)((int)&plr[0].InvBody[0]._iDurability + l_00) = sVar7;
							}
						}
						local_d0 = local_d0 + 1;
						l_00 = l_00 + 0x6c;
					} while (local_d0 < 7);
					do {
						do {
							x = ENG_random__Fl(7);
						} while (plr[pnum].InvBody[x]._itype == -1);
						sVar4 = plr[pnum].InvBody[x]._iMaxDur;
					} while ((sVar4 == 0xff) || (sVar4 == 0));
					plr[pnum].InvBody[x]._iDurability = plr[pnum].InvBody[x]._iDurability + -0x14;
					sVar4 = plr[pnum].InvBody[x]._iDurability;
					plr[pnum].InvBody[x]._iMaxDur = plr[pnum].InvBody[x]._iMaxDur + -0x14;
					if (sVar4 < 1) {
						plr[pnum].InvBody[x]._iDurability = 1;
					}
					if (plr[pnum].InvBody[x]._iMaxDur < 1) {
						plr[pnum].InvBody[x]._iMaxDur = 1;
					}
				}
				InitDiabloMsg__Fc('\r');
				break;
			case 2:
				if (plr[pnum].InvBody[0]._itype != -1) {
					plr[pnum].InvBody[0]._iAC = plr[pnum].InvBody[0]._iAC + '\x02';
				}
				if (plr[pnum].InvBody[6]._itype != -1) {
					plr[pnum].InvBody[6]._iAC = plr[pnum].InvBody[6]._iAC + '\x02';
				}
				sVar4 = plr[pnum].InvBody[4]._itype;
				if (sVar4 != -1) {
					if (sVar4 == 5) {
						plr[pnum].InvBody[4]._iAC = plr[pnum].InvBody[4]._iAC + '\x02';
					}
					else {
						cVar2 = plr[pnum].InvBody[4]._iMinDam;
						plr[pnum].InvBody[4]._iMaxDam = plr[pnum].InvBody[4]._iMaxDam + -1;
						if (plr[pnum].InvBody[4]._iMaxDam < cVar2) {
							plr[pnum].InvBody[4]._iMaxDam = cVar2;
						}
					}
				}
				sVar4 = plr[pnum].InvBody[5]._itype;
				if (sVar4 != -1) {
					if (sVar4 == 5) {
						plr[pnum].InvBody[5]._iAC = plr[pnum].InvBody[5]._iAC + '\x02';
					}
					else {
						cVar2 = plr[pnum].InvBody[5]._iMinDam;
						plr[pnum].InvBody[5]._iMaxDam = plr[pnum].InvBody[5]._iMaxDam + -1;
						if (plr[pnum].InvBody[5]._iMaxDam < cVar2) {
							plr[pnum].InvBody[5]._iMaxDam = cVar2;
						}
					}
				}
				local_d0 = pnum * 0x19e8;
				l_00 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_01 = 0;
					do {
						switch((int)(((uint)*(ushort *)((int)&plr[pnum].InvList[0]._itype + l_01) - 1) * 0x10000
												) >> 0x10) {
						case 0:
						case 1:
						case 2:
						case 3:
						case 9:
							cVar2 = (&plr[0].InvList[0]._iMinDam)[local_d0];
							(&plr[0].InvList[0]._iMaxDam)[local_d0] = (&plr[0].InvList[0]._iMaxDam)[local_d0] + -1
							;
							if ((&plr[0].InvList[0]._iMaxDam)[local_d0] < cVar2) {
								(&plr[0].InvList[0]._iMaxDam)[local_d0] = cVar2;
							}
							break;
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							(&plr[0].InvList[0]._iAC)[local_d0] = (&plr[0].InvList[0]._iAC)[local_d0] + '\x02';
						}
						local_d0 = local_d0 + 0x6c;
						l_00 = l_00 + 1;
						l_01 = l_01 + 0x6c;
					} while (l_00 < plr[pnum]._pNumInv);
				}
				InitDiabloMsg__Fc('\x0e');
				break;
			case 3:
				sVar4 = plr[pnum].InvBody[4]._itype;
				if ((sVar4 != -1) && (sVar4 != 5)) {
					plr[pnum].InvBody[4]._iMaxDam = plr[pnum].InvBody[4]._iMaxDam + '\x01';
				}
				sVar4 = plr[pnum].InvBody[5]._itype;
				if ((sVar4 != -1) && (sVar4 != 5)) {
					plr[pnum].InvBody[5]._iMaxDam = plr[pnum].InvBody[5]._iMaxDam + '\x01';
				}
				local_d0 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_00 = 0;
					do {
						sVar4 = *(short *)((int)&plr[pnum].InvList[0]._itype + l_00);
						if ((0 < sVar4) && ((sVar4 < 5 || (sVar4 == 10)))) {
							(&plr[pnum].InvList[0]._iMaxDam)[l_00] =
									 (&plr[pnum].InvList[0]._iMaxDam)[l_00] + '\x01';
						}
						local_d0 = local_d0 + 1;
						l_00 = l_00 + 0x6c;
					} while (local_d0 < plr[pnum]._pNumInv);
				}
				InitDiabloMsg__Fc('\x0f');
				break;
			case 4:
			case 0xb:
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,(int)plr[pnum]._px,(int)plr[pnum]._py,
									 (int)plr[pnum]._pdir,0xd,-1,pnum,0,(uint)leveltype << 1);
				InitDiabloMsg__Fc('\x10');
				break;
			case 5:
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					if (*(short *)((int)&plr[0].InvBody[0]._itype + local_d0) == 10) {
						(&plr[0].InvBody[0]._iCharges)[local_d0] = (&plr[0].InvBody[0]._iMaxCharges)[local_d0];
					}
					l_00 = l_00 + 1;
					local_d0 = local_d0 + 0x6c;
				} while (l_00 < 7);
				local_d0 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_00 = 0;
					do {
						if (*(short *)((int)&plr[pnum].InvList[0]._itype + l_00) == 10) {
							(&plr[pnum].InvList[0]._iCharges)[l_00] = (&plr[pnum].InvList[0]._iMaxCharges)[l_00];
						}
						local_d0 = local_d0 + 1;
						l_00 = l_00 + 0x6c;
					} while (local_d0 < plr[pnum]._pNumInv);
				}
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					if (*(short *)((int)&plr[0].SpdList[0]._itype + local_d0) == 10) {
						(&plr[0].SpdList[0]._iCharges)[local_d0] = (&plr[0].SpdList[0]._iMaxCharges)[local_d0];
					}
					l_00 = l_00 + 1;
					local_d0 = local_d0 + 0x6c;
				} while (l_00 < 8);
				InitDiabloMsg__Fc('\x11');
				break;
			case 6:
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					l_00 = l_00 + 1;
					*(undefined2 *)((int)&plr[0].InvBody[0]._iDurability + local_d0) =
							 *(undefined2 *)((int)&plr[0].InvBody[0]._iMaxDur + local_d0);
					local_d0 = local_d0 + 0x6c;
				} while (l_00 < 7);
				local_d0 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_00 = 0;
					do {
						*(undefined2 *)((int)&plr[pnum].InvList[0]._iDurability + l_00) =
								 *(undefined2 *)((int)&plr[pnum].InvList[0]._iMaxDur + l_00);
						local_d0 = local_d0 + 1;
						l_00 = l_00 + 0x6c;
					} while (local_d0 < plr[pnum]._pNumInv);
				}
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					l_00 = l_00 + 1;
					*(undefined2 *)((int)&plr[0].SpdList[0]._iDurability + local_d0) =
							 *(undefined2 *)((int)&plr[0].SpdList[0]._iMaxDur + local_d0);
					local_d0 = local_d0 + 0x6c;
				} while (l_00 < 8);
				InitDiabloMsg__Fc('\x12');
				break;
			case 7:
				local_d0 = 0;
				uVar19 = 0;
				uVar17 = 1;
				l_00 = 1;
				p = *(uint *)&plr[pnum]._pMemSpells & 1;
				do {
					if ((p != 0) || ((*(uint *)((int)&plr[pnum]._pMemSpells + 4) & uVar19) != 0)) {
						local_d0 = local_d0 + 1;
					}
					uVar19 = uVar19 << 1 | uVar17 >> 0x1f;
					uVar17 = uVar17 << 1;
					l_00 = l_00 + 1;
					p = *(uint *)&plr[pnum]._pMemSpells & uVar17;
				} while (l_00 < 0x26);
				l_00 = 1;
				if (1 < local_d0) {
					uVar17 = 0;
					p = 1;
					pcVar11 = plr[pnum]._pSplLvl;
					do {
						pcVar11 = pcVar11 + 1;
						if ((((*(uint *)&plr[pnum]._pMemSpells & p) != 0) ||
								((*(uint *)((int)&plr[pnum]._pMemSpells + 4) & uVar17) != 0)) && (*pcVar11 < '\x0f')
							 ) {
							*pcVar11 = *pcVar11 + '\x01';
						}
						uVar17 = uVar17 << 1 | p >> 0x1f;
						p = p << 1;
						l_00 = l_00 + 1;
					} while (l_00 < 0x26);
					do {
						p = ENG_random__Fl(0x25);
						if ((int)(p << 0x1a) < 0) {
							uVar17 = 1 << (p & 0x1f);
							uVar19 = 0;
						}
						else {
							uVar17 = 0 << (p & 0x1f);
							if (p << 0x1a != 0) {
								uVar17 = uVar17 | 1U >> (-p & 0x1f);
							}
							uVar19 = 1 << (p & 0x1f);
						}
					} while (((*(uint *)&plr[pnum]._pMemSpells & uVar19) == 0) &&
									((*(uint *)((int)&plr[pnum]._pMemSpells + 4) & uVar17) == 0));
					pcVar11 = plr[pnum]._pSplLvl + p + 1;
					if (*pcVar11 < '\x02') {
						*pcVar11 = '\0';
					}
					else {
						*pcVar11 = *pcVar11 + -2;
					}
				}
				InitDiabloMsg__Fc('\x13');
				break;
			case 8:
				local_d0 = 0;
				if (0 < numobjects) {
					do {
						l_00 = (int)(&objectactive)[local_d0];
						if ((((uint)(byte)object[l_00]._otype - 5 < 2) || (object[l_00]._otype == 7)) &&
							 (object[l_00]._oSelFlag == '\0')) {
							x = GetRndSeed__Fv();
							cVar2 = object[l_00]._oAnimFrame;
							object[l_00]._oRndSeed = x;
							object[l_00]._oSelFlag = '\x01';
							object[l_00]._oAnimFrame = cVar2 + -2;
						}
						local_d0 = local_d0 + 1;
					} while (local_d0 < numobjects);
				}
				InitDiabloMsg__Fc('\x14');
				break;
			case 9:
				uVar9 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
				cVar2 = plr[pnum]._pSplLvl[1];
				*(uint *)&plr[pnum]._pMemSpells = *(uint *)&plr[pnum]._pMemSpells | 1;
				*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar9;
				if (cVar2 < '\x0f') {
					plr[pnum]._pSplLvl[1] = cVar2 + '\x01';
					if (plr[pnum]._pSplLvl[1] < '\x0f') {
						plr[pnum]._pSplLvl[1] = plr[pnum]._pSplLvl[1] + '\x01';
					}
				}
				l = plr[pnum]._pMaxManaBase;
				iVar13 = plr[pnum]._pMana;
				l_00 = plr[pnum]._pManaBase;
				iVar12 = plr[pnum]._pMaxMana;
				local_d0 = l / 10;
				plr[pnum]._pManaBase = l_00 - local_d0;
				iVar10 = plr[pnum]._pMaxMana;
				plr[pnum]._pMana = plr[pnum]._pMana - local_d0;
				l_01 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMaxMana = iVar10 - local_d0;
				iVar10 = plr[pnum]._pMana;
				plr[pnum]._pMaxManaBase = l_01 - local_d0;
				if (iVar10 >> 6 < 1) {
					plr[pnum]._pMana = iVar13 - l_00;
					plr[pnum]._pManaBase = 0;
				}
				if (plr[pnum]._pMaxMana >> 6 < 1) {
					plr[pnum]._pMaxMana = iVar12 - l;
					plr[pnum]._pMaxManaBase = 0;
				}
				InitDiabloMsg__Fc('\x15');
				break;
			case 10:
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,(int)plr[pnum]._px,(int)plr[pnum]._py,
									 (int)plr[pnum]._pdir,0x2a,-1,pnum,0,(uint)leveltype << 1);
				x = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMana = plr[pnum]._pMaxMana;
				plr[pnum]._pManaBase = x;
				InitDiabloMsg__Fc('\x16');
				break;
			case 0xc:
				local_d0 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_00 = 0;
					do {
						if (*(short *)((int)&plr[pnum].InvList[0]._itype + l_00) == 0) {
							uVar3 = (&plr[pnum].InvList[0]._iMiscId)[l_00];
							if ((uVar3 == '\x03') || (uVar3 == '\x06')) {
								l_01 = ItemMiscIdIdx__Fi(0x12);
								h_01 = &plr[pnum].HoldItem;
								SetPlrHandItem__FP10ItemStructi(h_01,l_01);
								GetPlrHandSeed__FP10ItemStruct(h_01);
								plr[pnum].HoldItem._iStatFlag = '\x01';
								piVar5 = (int *)(l_00 + pnum * 0x19e8 + -0x7ff25624);
								do {
									h_00 = h_01;
									piVar15 = piVar5;
									l_01 = h_00->_iVMult1;
									l = h_00->_iVAdd2;
									iVar10 = h_00->_iVMult2;
									*piVar15 = h_00->_iVAdd1;
									piVar15[1] = l_01;
									piVar15[2] = l;
									piVar15[3] = iVar10;
									h_01 = (ItemStruct *)&h_00->_iSeed;
									piVar5 = piVar15 + 4;
								} while (h_01 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
								l_01 = h_00->_ivalue;
								l = h_00->_iIvalue;
								piVar15[4] = h_01->_iVAdd1;
								piVar15[5] = l_01;
								piVar15[6] = l;
							}
							uVar3 = (&plr[pnum].InvList[0]._iMiscId)[l_00];
							if ((uVar3 == '\x02') || (uVar3 == '\a')) {
								l_01 = ItemMiscIdIdx__Fi(0x13);
								h_01 = &plr[pnum].HoldItem;
								SetPlrHandItem__FP10ItemStructi(h_01,l_01);
								GetPlrHandSeed__FP10ItemStruct(h_01);
								plr[pnum].HoldItem._iStatFlag = '\x01';
								piVar5 = (int *)(l_00 + pnum * 0x19e8 + -0x7ff25624);
								do {
									h_00 = h_01;
									piVar15 = piVar5;
									l_01 = h_00->_iVMult1;
									l = h_00->_iVAdd2;
									iVar10 = h_00->_iVMult2;
									*piVar15 = h_00->_iVAdd1;
									piVar15[1] = l_01;
									piVar15[2] = l;
									piVar15[3] = iVar10;
									h_01 = (ItemStruct *)&h_00->_iSeed;
									piVar5 = piVar15 + 4;
								} while (h_01 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
								l_01 = h_00->_ivalue;
								l = h_00->_iIvalue;
								piVar15[4] = h_01->_iVAdd1;
								piVar15[5] = l_01;
								piVar15[6] = l;
							}
						}
						local_d0 = local_d0 + 1;
						l_00 = l_00 + 0x6c;
					} while (local_d0 < plr[pnum]._pNumInv);
				}
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				h_01 = plr[pnum].SpdList;
				do {
					if (*(short *)((int)&plr[0].SpdList[0]._itype + local_d0) == 0) {
						uVar3 = (&plr[0].SpdList[0]._iMiscId)[local_d0];
						if ((uVar3 == '\x03') || (uVar3 == '\x06')) {
							l_01 = ItemMiscIdIdx__Fi(0x12);
							h = &plr[pnum].HoldItem;
							SetPlrHandItem__FP10ItemStructi(h,l_01);
							GetPlrHandSeed__FP10ItemStruct(h);
							plr[pnum].HoldItem._iStatFlag = '\x01';
							h_00 = h_01;
							do {
								pIVar18 = h;
								pIVar14 = h_00;
								l_01 = pIVar18->_iVMult1;
								l = pIVar18->_iVAdd2;
								iVar10 = pIVar18->_iVMult2;
								pIVar14->_iVAdd1 = pIVar18->_iVAdd1;
								pIVar14->_iVMult1 = l_01;
								pIVar14->_iVAdd2 = l;
								pIVar14->_iVMult2 = iVar10;
								h = (ItemStruct *)&pIVar18->_iSeed;
								h_00 = (ItemStruct *)&pIVar14->_iSeed;
							} while (h != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
							l_01 = pIVar18->_ivalue;
							l = pIVar18->_iIvalue;
							((ItemStruct *)&pIVar14->_iSeed)->_iVAdd1 = h->_iVAdd1;
							pIVar14->_ivalue = l_01;
							pIVar14->_iIvalue = l;
							uVar3 = (&plr[0].SpdList[0]._iMiscId)[local_d0];
						}
						if ((uVar3 == '\x02') || (uVar3 == '\a')) {
							l_01 = ItemMiscIdIdx__Fi(0x13);
							h_00 = &plr[pnum].HoldItem;
							SetPlrHandItem__FP10ItemStructi(h_00,l_01);
							GetPlrHandSeed__FP10ItemStruct(h_00);
							plr[pnum].HoldItem._iStatFlag = '\x01';
							piVar5 = (int *)((int)&plr[pnum].SpdList[0]._iVAdd1 + l_00);
							do {
								h = h_00;
								piVar15 = piVar5;
								l_01 = h->_iVMult1;
								l = h->_iVAdd2;
								iVar10 = h->_iVMult2;
								*piVar15 = h->_iVAdd1;
								piVar15[1] = l_01;
								piVar15[2] = l;
								piVar15[3] = iVar10;
								h_00 = (ItemStruct *)&h->_iSeed;
								piVar5 = piVar15 + 4;
							} while (h_00 != (ItemStruct *)&plr[pnum].HoldItem._iSufPower);
							l_01 = h->_ivalue;
							l = h->_iIvalue;
							piVar15[4] = h_00->_iVAdd1;
							piVar15[5] = l_01;
							piVar15[6] = l;
						}
					}
					local_d0 = local_d0 + 0x6c;
					l_00 = l_00 + 0x6c;
					h_01 = h_01 + 1;
				} while (local_d0 < pnum * 0x19e8 + 0x360);
				InitDiabloMsg__Fc('\x18');
				break;
			case 0xd:
				ModifyPlrMag__Fii(pnum,2);
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc('\x19');
				break;
			case 0xe:
				if (currlevel < 4) {
					CreateTypeItem__FiiUciiUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',0,7,1,0);
					cVar2 = object[i]._ox;
					cVar1 = object[i]._oy;
					local_d0 = 2;
				}
				else {
					CreateTypeItem__FiiUciiUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',0,0x13,1,0);
					cVar2 = object[i]._ox;
					cVar1 = object[i]._oy;
					local_d0 = 0x13;
				}
				CreateTypeItem__FiiUciiUcUc((int)cVar2,(int)cVar1,'\0',0,local_d0,1,0);
				x = plr[pnum]._pMaxManaBase;
				y = plr[pnum]._pMaxHP;
				lVar16 = plr[pnum]._pMaxHPBase;
				plr[pnum]._pMana = plr[pnum]._pMaxMana;
				plr[pnum]._pManaBase = x;
				plr[pnum]._pHitPoints = y;
				plr[pnum]._pHPBase = lVar16;
				InitDiabloMsg__Fc('\x1a');
				break;
			case 0xf:
				local_d0 = 0;
				do {
					x = ENG_random__Fl(0x60);
					y = ENG_random__Fl(0x60);
					local_d0 = local_d0 + 1;
					if (0x2400 < local_d0) break;
					pvVar6 = GetSOLID__Fii(x,y);
				} while (((pvVar6 != (void *)0x0) || (dung_map[x * 0x70 + y].dObject != '\0')) ||
								(dung_map[x * 0x70 + y].dMonster != 0));
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,x,y,(int)plr[pnum]._pdir,3,-1,pnum,0,
									 (uint)leveltype << 1);
				InitDiabloMsg__Fc('\x1b');
				break;
			case 0x10:
				uVar9 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
				cVar2 = plr[pnum]._pSplLvl[0x1e];
				*(uint *)&plr[pnum]._pMemSpells = *(uint *)&plr[pnum]._pMemSpells | 0x20000000;
				*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar9;
				if (cVar2 < '\x0f') {
					plr[pnum]._pSplLvl[0x1e] = cVar2 + '\x01';
					if (plr[pnum]._pSplLvl[0x1e] < '\x0f') {
						plr[pnum]._pSplLvl[0x1e] = plr[pnum]._pSplLvl[0x1e] + '\x01';
					}
				}
				l = plr[pnum]._pMaxManaBase;
				iVar13 = plr[pnum]._pMana;
				l_00 = plr[pnum]._pManaBase;
				iVar12 = plr[pnum]._pMaxMana;
				local_d0 = l / 10;
				plr[pnum]._pManaBase = l_00 - local_d0;
				iVar10 = plr[pnum]._pMaxMana;
				plr[pnum]._pMana = plr[pnum]._pMana - local_d0;
				l_01 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMaxMana = iVar10 - local_d0;
				iVar10 = plr[pnum]._pMana;
				plr[pnum]._pMaxManaBase = l_01 - local_d0;
				if (iVar10 >> 6 < 1) {
					plr[pnum]._pMana = iVar13 - l_00;
					plr[pnum]._pManaBase = 0;
				}
				if (plr[pnum]._pMaxMana >> 6 < 1) {
					plr[pnum]._pMaxMana = iVar12 - l;
					plr[pnum]._pMaxManaBase = 0;
				}
				InitDiabloMsg__Fc('\x1c');
				break;
			case 0x11:
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					if (*(char *)(local_d0 + -0x7ff24540 + l_00) == '\0') {
						x = ENG_random__Fl((uint)leveltype * 10);
						l_01 = plr[pnum]._pNumInv;
						l = (uint)leveltype * 5 + x;
						h_01 = _golditem + StorePlrNo;
						h_00 = _golditem + StorePlrNo;
						piVar5 = (int *)(l_01 * 0x6c + local_d0 + -0x7ff25624);
						do {
							piVar15 = piVar5;
							h = h_00;
							iVar10 = h->_iVMult1;
							iVar12 = h->_iVAdd2;
							iVar13 = h->_iVMult2;
							*piVar15 = h->_iVAdd1;
							piVar15[1] = iVar10;
							piVar15[2] = iVar12;
							piVar15[3] = iVar13;
							h_00 = (ItemStruct *)&h->_iSeed;
							piVar5 = piVar15 + 4;
						} while (h_00 != (ItemStruct *)&h_01->_iSufPower);
						iVar10 = h->_ivalue;
						iVar12 = h->_iIvalue;
						piVar15[4] = h_00->_iVAdd1;
						piVar15[5] = iVar10;
						piVar15[6] = iVar12;
						x = GetRndSeed__Fv();
						plr[pnum].InvList[l_01]._iSeed = x;
						plr[pnum]._pNumInv = plr[pnum]._pNumInv + 1;
						*(undefined *)(local_d0 + -0x7ff24540 + l_00) = (char)plr[pnum]._pNumInv;
						plr[pnum].InvList[l_01]._ivalue = l;
						plr[pnum]._pGold = plr[pnum]._pGold + l;
						SetGoldCurs__Fii(pnum,l_01);
					}
					l_00 = l_00 + 1;
				} while (l_00 < 0x28);
				InitDiabloMsg__Fc('\x1d');
				break;
			case 0x12:
				if (gbMaxPlayers == '\x01') {
					InitDiabloMsg__Fc('\x1e');
				}
				else {
					InitDiabloMsg__Fc('\x1f');
					p = pnum ^ 1;
					x = plr[p]._pMaxHPBase;
					y = plr[p]._pMaxMana;
					lVar16 = plr[p]._pMaxManaBase;
					plr[p]._pHitPoints = plr[p]._pMaxHP;
					plr[p]._pHPBase = x;
					plr[p]._pMana = y;
					plr[p]._pManaBase = lVar16;
				}
				break;
			case 0x13:
				ModifyPlrDex__Fii(pnum,2);
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc(' ');
				break;
			case 0x14:
				ModifyPlrStr__Fii(pnum,2);
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc('!');
				break;
			case 0x15:
				ModifyPlrVit__Fii(pnum,2);
				CheckStats__Fi(pnum);
				InitDiabloMsg__Fc('\"');
				break;
			case 0x16:
				local_d0 = 0;
				do {
					l_00 = 0;
					puVar8 = &automapview;
					do {
						puVar8[local_d0] = -1;
						l_00 = l_00 + 1;
						puVar8 = puVar8 + 0x28;
					} while (l_00 < 5);
					local_d0 = local_d0 + 1;
				} while (local_d0 < 0x28);
				InitDiabloMsg__Fc('#');
				break;
			case 0x17:
				uVar9 = *(undefined4 *)((int)&plr[pnum]._pMemSpells + 4);
				cVar2 = plr[pnum]._pSplLvl[0x1f];
				*(uint *)&plr[pnum]._pMemSpells = *(uint *)&plr[pnum]._pMemSpells | 0x40000000;
				*(undefined4 *)((int)&plr[pnum]._pMemSpells + 4) = uVar9;
				if (cVar2 < '\x0f') {
					plr[pnum]._pSplLvl[0x1f] = cVar2 + '\x01';
					if (plr[pnum]._pSplLvl[0x1f] < '\x0f') {
						plr[pnum]._pSplLvl[0x1f] = plr[pnum]._pSplLvl[0x1f] + '\x01';
					}
				}
				l = plr[pnum]._pMaxManaBase;
				iVar13 = plr[pnum]._pMana;
				l_00 = plr[pnum]._pManaBase;
				iVar12 = plr[pnum]._pMaxMana;
				local_d0 = l / 10;
				plr[pnum]._pManaBase = l_00 - local_d0;
				iVar10 = plr[pnum]._pMaxMana;
				plr[pnum]._pMana = plr[pnum]._pMana - local_d0;
				l_01 = plr[pnum]._pMaxManaBase;
				plr[pnum]._pMaxMana = iVar10 - local_d0;
				iVar10 = plr[pnum]._pMana;
				plr[pnum]._pMaxManaBase = l_01 - local_d0;
				if (iVar10 >> 6 < 1) {
					plr[pnum]._pMana = iVar13 - l_00;
					plr[pnum]._pManaBase = 0;
				}
				if (plr[pnum]._pMaxMana >> 6 < 1) {
					plr[pnum]._pMaxMana = iVar12 - l;
					plr[pnum]._pMaxManaBase = 0;
				}
				InitDiabloMsg__Fc('$');
				break;
			case 0x18:
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					if (((&plr[0].InvBody[0]._iMagical)[local_d0] != '\0') &&
						 ((&plr[0].InvBody[0]._iIdentified)[local_d0] == '\0')) {
						(&plr[0].InvBody[0]._iIdentified)[local_d0] = '\x01';
					}
					l_00 = l_00 + 1;
					local_d0 = local_d0 + 0x6c;
				} while (l_00 < 7);
				local_d0 = 0;
				if (0 < plr[pnum]._pNumInv) {
					l_00 = 0;
					do {
						if (((&plr[pnum].InvList[0]._iMagical)[l_00] != '\0') &&
							 ((&plr[pnum].InvList[0]._iIdentified)[l_00] == '\0')) {
							(&plr[pnum].InvList[0]._iIdentified)[l_00] = '\x01';
						}
						local_d0 = local_d0 + 1;
						l_00 = l_00 + 0x6c;
					} while (local_d0 < plr[pnum]._pNumInv);
				}
				l_00 = 0;
				local_d0 = pnum * 0x19e8;
				do {
					if (((&plr[0].SpdList[0]._iMagical)[local_d0] != '\0') &&
						 ((&plr[0].SpdList[0]._iIdentified)[local_d0] == '\0')) {
						(&plr[0].SpdList[0]._iIdentified)[local_d0] = '\x01';
					}
					l_00 = l_00 + 1;
					local_d0 = local_d0 + 0x6c;
				} while (l_00 < 8);
				InitDiabloMsg__Fc('%');
				break;
			case 0x19:
				InitDiabloMsg__Fc('&');
				x = ENG_random__Fl(4);
				local_d0 = -1;
				if (x == 0) {
					local_d0 = 1;
				}
				l_00 = -1;
				if (x == 1) {
					l_00 = 1;
				}
				l_01 = -1;
				if (x == 2) {
					l_01 = 1;
				}
				l = -1;
				if (x == 3) {
					l = 1;
				}
				p = pnum ^ 1;
				ModifyPlrStr__Fii(p,local_d0);
				ModifyPlrMag__Fii(p,l_00);
				ModifyPlrDex__Fii(p,l_01);
				ModifyPlrVit__Fii(p,l);
				CheckStats__Fi(p);
			}
			CalcPlrInv__FiUc(pnum,'\x01');
			force_redraw = 0xff;
			NetSendCmdParam2__FUcUcUsUs('\0','.',(ushort)pnum,(ushort)i);
		}
		else {
			sVar4 = object[i]._oAnimLen;
			object[i]._oAnimFlag = '\0';
			object[i]._oAnimFrame = (char)sVar4;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateSkelBook__FiiUc(int pnum /*$s3*/, int i /*$s1*/, unsigned char sendmsg /*$s2*/)
 // line 3244, offset 0x8005c850
	/* begin block 1 */
		// Start line: 3245
		// Start offset: 0x8005C850
	/* end block 1 */
	// End offset: 0x8005C9A8
	// End Line: 3262

	/* begin block 2 */
		// Start line: 7279
	/* end block 2 */
	// End Line: 7280

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateSkelBook__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	char cVar2;
	long lVar3;
	int imisc;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x26,(int)object[i]._ox,(int)object[i]._oy);
		}
		cVar2 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar2 + '\x02';
		if (deltaload == '\0') {
			SetRndSeed__Fl(object[i]._oRndSeed);
			lVar3 = ENG_random__Fl(5);
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
 // line 3268, offset 0x8005c9c8
	/* begin block 1 */
		// Start line: 3269
		// Start offset: 0x8005C9C8
	/* end block 1 */
	// End offset: 0x8005CBC0
	// End Line: 3303

	/* begin block 2 */
		// Start line: 7332
	/* end block 2 */
	// End Line: 7333

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateBookCase__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	uchar uVar2;
	
	if (object[i]._oSelFlag != '\0') {
		if (deltaload == '\0') {
			PlaySfxLoc__Fiii(0x26,(int)object[i]._ox,(int)object[i]._oy);
		}
		cVar1 = object[i]._oAnimFrame;
		object[i]._oSelFlag = '\0';
		object[i]._oAnimFrame = cVar1 + -2;
		uVar2 = QuestStatus__Fi(3);
		if ((((uVar2 != '\0') && (monster[4].mName == (uint)UniqMonst[2].mName)) &&
				(quests[3]._qvar2 != '\x03')) &&
			 ((monster[4]._msquelch == -1 && (monster[4]._mhitpoints != 0)))) {
			monster[4].mtalkmsg = 0x95;
			M_StartStand__Fii(0,(int)monster[4]._mdir);
			monster[4]._mgoal = '\x05';
			monster[4]._mmode = '\x11';
			quests[3]._qvar2 = '\x03';
			if (deltaload != '\0') {
				quests[3]._qvar2 = '\x03';
				monster[4]._mmode = '\x11';
				monster[4]._mgoal = '\x05';
				return;
			}
			NetSendCmdQuest__FUcUc('\x01','\x03');
		}
		if (deltaload == '\0') {
			SetRndSeed__Fl(object[i]._oRndSeed);
			CreateTypeItem__FiiUciiUcUc((int)object[i]._ox,(int)object[i]._oy,'\0',0,0x18,(uint)sendmsg,0)
			;
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
 // line 3309, offset 0x8005cbe0
	/* begin block 1 */
		// Start line: 3310
		// Start offset: 0x8005CBE0
	/* end block 1 */
	// End offset: 0x8005CCA8
	// End Line: 3324

	/* begin block 2 */
		// Start line: 7423
	/* end block 2 */
	// End Line: 7424

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 3330, offset 0x8005ccc8
	/* begin block 1 */
		// Start line: 3331
		// Start offset: 0x8005CCC8
		// Variables:
	// 		int uniqueRnd; // $a2
	/* end block 1 */
	// End offset: 0x8005CE14
	// End Line: 3365

	/* begin block 2 */
		// Start line: 7469
	/* end block 2 */
	// End Line: 7470

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
	lVar2 = ENG_random__Fl(2);
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
			if ((2 < uVar3 - 10) && (onlygood = '\x01', 3 < uVar3 - 0xd)) goto LAB_8005cdf4;
			itype = 9;
		}
	}
	CreateTypeItem__FiiUciiUcUc
						((int)object[i]._ox,(int)object[i]._oy,onlygood,itype,0,(uint)sendmsg,0);
LAB_8005cdf4:
	if (pnum == myplr) {
		NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindValidShrine__Fi(int i /*$a0*/)
 // line 3377, offset 0x8005ce34
	/* begin block 1 */
		// Start line: 3378
		// Start offset: 0x8005CE34
		// Variables:
	// 		int rv; // $a0
	// 		unsigned char done; // $s0
	/* end block 1 */
	// End offset: 0x8005CF08
	// End Line: 3400

	/* begin block 2 */
		// Start line: 7574
	/* end block 2 */
	// End Line: 7575

/* WARNING: Unknown calling convention yet parameter storage is locked */

int FindValidShrine__Fi(int i)

{
	bool bVar1;
	bool bVar2;
	long lVar3;
	
	bVar2 = false;
	do {
		do {
			lVar3 = ENG_random__Fl(0x1a);
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
 // line 3406, offset 0x8005cf20
	/* begin block 1 */
		// Start line: 3407
		// Start offset: 0x8005CF20
	/* end block 1 */
	// End offset: 0x8005CFA8
	// End Line: 3420

	/* begin block 2 */
		// Start line: 7634
	/* end block 2 */
	// End Line: 7635

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 3426, offset 0x8005cfc8
	/* begin block 1 */
		// Start line: 3427
		// Start offset: 0x8005CFC8
	/* end block 1 */
	// End offset: 0x8005D04C
	// End Line: 3441

	/* begin block 2 */
		// Start line: 7679
	/* end block 2 */
	// End Line: 7680

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateCauldron__Fiii(int pnum,int i,int sType)

{
	int iVar1;
	
	SetRndSeed__Fl(object[i]._oRndSeed);
	iVar1 = FindValidShrine__Fi(i);
	object[i]._oVar1 = (short)iVar1;
	OperateShrine__Fiii(pnum,i,sType);
	object[i]._oAnimFlag = '\0';
	force_redraw = 0xff;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ OperateFountains__Fii(int pnum /*$s2*/, int i /*$s7*/)
 // line 3447, offset 0x8005d06c
	/* begin block 1 */
		// Start line: 3448
		// Start offset: 0x8005D06C
		// Variables:
	// 		int ii; // $s5
	// 		unsigned char rv; // $s3

		/* begin block 1.1 */
			// Start line: 3448
			// Start offset: 0x8005D06C

			/* begin block 1.1.1 */
				// Start line: 3462
				// Start offset: 0x8005D110

				/* begin block 1.1.1.1 */
					// Start line: 3507
					// Start offset: 0x8005D464

					/* begin block 1.1.1.1.1 */
						// Start line: 3507
						// Start offset: 0x8005D47C
						// Variables:
					// 		int rndVal; // $s0
					// 		int statVal; // $s3
					// 		int saveRnd; // $s4
					// 		int status; // $s6
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005D5D0
					// End Line: 3542
				/* end block 1.1.1.1 */
				// End offset: 0x8005D5D0
				// End Line: 3542
			/* end block 1.1.1 */
			// End offset: 0x8005D5D0
			// End Line: 3544
		/* end block 1.1 */
		// End offset: 0x8005D5D0
		// End Line: 3544
	/* end block 1 */
	// End offset: 0x8005D5E0
	// End Line: 3547

	/* begin block 2 */
		// Start line: 7727
	/* end block 2 */
	// End Line: 7728

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
LAB_8005d348:
			PlaySfxLoc__Fiii(0x5a,(int)object[i]._ox,(int)object[i]._oy);
			force_redraw = 0xff;
			return '\0';
		}
		PlaySfxLoc__Fiii(0x5a,(int)object[i]._ox,(int)object[i]._oy);
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
			if (plr[pnum]._pMaxHP <= plr[pnum]._pHitPoints) goto LAB_8005d348;
			PlaySfxLoc__Fiii(0x5a,(int)object[i]._ox,(int)object[i]._oy);
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
					PlaySfxLoc__Fiii(0x5a,(int)object[i]._ox,(int)object[i]._oy);
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
					PlaySfxLoc__Fiii(0x5a,(int)object[i]._ox,(int)object[i]._oy);
				}
				object[i]._oSelFlag = '\0';
				if (deltaload != '\0') {
					return '\0';
				}
				if (pnum != myplr) {
					return '\0';
				}
				do {
					lVar3 = ENG_random__Fl(4);
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
 // line 3553, offset 0x8005d610
	/* begin block 1 */
		// Start line: 3554
		// Start offset: 0x8005D610
		// Variables:
	// 		int weaponType; // $s1
	/* end block 1 */
	// End offset: 0x8005D798
	// End Line: 3603

	/* begin block 2 */
		// Start line: 7963
	/* end block 2 */
	// End Line: 7964

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateWeaponRack__FiiUc(int pnum,int i,uchar sendmsg)

{
	char cVar1;
	long lVar2;
	int iVar3;
	int itype;
	
	itype = 0;
	if (object[i]._oSelFlag != '\0') {
		SetRndSeed__Fl(object[i]._oRndSeed);
		lVar2 = ENG_random__Fl(4);
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
 // line 3609, offset 0x8005d7b8
	/* begin block 1 */
		// Start line: 3610
		// Start offset: 0x8005D7B8
	/* end block 1 */
	// End offset: 0x8005D894
	// End Line: 3624

	/* begin block 2 */
		// Start line: 8080
	/* end block 2 */
	// End Line: 8081

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateStoryBook__Fii(int pnum,int i)

{
	if ((((object[i]._oSelFlag != '\0') &&
			 (object[i]._oAnimFrame = (char)object[i]._oVar4, deltaload == '\0')) &&
			(PauseMode = '\x01', qtextflag == '\0')) && (pnum == myplr)) {
		PlaySfxLoc__Fiii(0x26,(int)object[i]._ox,(int)object[i]._oy);
		InitQTextMsg__Fi((int)object[i]._oVar2);
		NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateLazStand__Fii(int pnum /*$a0*/, int i /*$s0*/)
 // line 3632, offset 0x8005d8ac
	/* begin block 1 */
		// Start line: 3633
		// Start offset: 0x8005D8AC
		// Variables:
	// 		int x; // stack offset -16
	// 		int y; // stack offset -12
	/* end block 1 */
	// End offset: 0x8005DA1C
	// End Line: 3663

	/* begin block 2 */
		// Start line: 8138
	/* end block 2 */
	// End Line: 8139

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateLazStand__Fii(int pnum,int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	int local_10;
	int local_c;
	
	if ((numitems < 0x7f) || (object[i]._oSelFlag == '\0')) {
		if (deltaload == '\0') {
			if (((object[i]._oSelFlag != '\0') && (qtextflag == '\0')) && (pnum == myplr)) {
				cVar2 = object[i]._ox;
				cVar1 = object[i]._oy;
				cVar3 = object[i]._oAnimFrame;
				object[i]._oSelFlag = '\0';
				object[i]._oAnimFrame = cVar3 + '\x01';
				GetSuperItemLoc__FiiRiT2((int)cVar2,(int)cVar1,&local_10,&local_c);
				SpawnQuestItem__Fiiiii(0x21,local_10,local_c,0,0);
				NetSendCmdParam1__FUcUcUs('\0','-',(ushort)i);
			}
		}
		else {
			cVar2 = object[i]._oAnimFrame;
			object[i]._oSelFlag = '\0';
			object[i]._oAnimFrame = cVar2 + '\x01';
		}
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateObject__FiiUc(int pnum /*$s1*/, int i /*$s0*/, unsigned char TeleFlag /*$a2*/)
 // line 3670, offset 0x8005da30
	/* begin block 1 */
		// Start line: 3671
		// Start offset: 0x8005DA30
		// Variables:
	// 		unsigned char senditemmsg; // $v1
	/* end block 1 */
	// End offset: 0x8005DE4C
	// End Line: 3790

	/* begin block 2 */
		// Start line: 8218
	/* end block 2 */
	// End Line: 8219

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateObject__FiiUc(int pnum,int i,uchar TeleFlag)

{
	bool sendmsg;
	char cVar1;
	
	sendmsg = deltaload == '\0';
	switch((int)(((uint)(byte)object[i]._otype - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 1:
		if (TeleFlag == '\0') {
			if (pnum == myplr) {
				OperateL1Door__FiiUc(pnum,i,sendmsg);
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
				OperateL2Door__FiiUc(pnum,i,sendmsg);
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
				OperateL3Door__FiiUc(pnum,i,sendmsg);
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
 // line 3797, offset 0x8005de68
	/* begin block 1 */
		// Start line: 3798
		// Start offset: 0x8005DE68
		// Variables:
	// 		unsigned char opok; // $a0
	/* end block 1 */
	// End offset: 0x8005DF64
	// End Line: 3806

	/* begin block 2 */
		// Start line: 8488
	/* end block 2 */
	// End Line: 8489

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 3813, offset 0x8005df7c
	/* begin block 1 */
		// Start line: 3814
		// Start offset: 0x8005DF7C
		// Variables:
	// 		unsigned char opok; // $a0
	/* end block 1 */
	// End offset: 0x8005E078
	// End Line: 3822

	/* begin block 2 */
		// Start line: 8521
	/* end block 2 */
	// End Line: 8522

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 3829, offset 0x8005e090
	/* begin block 1 */
		// Start line: 3830
		// Start offset: 0x8005E090
		// Variables:
	// 		unsigned char opok; // $a0
	/* end block 1 */
	// End offset: 0x8005E18C
	// End Line: 3838

	/* begin block 2 */
		// Start line: 8554
	/* end block 2 */
	// End Line: 8555

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 3845, offset 0x8005e1a4
	/* begin block 1 */
		// Start line: 3846
		// Start offset: 0x8005E1A4
	/* end block 1 */
	// End offset: 0x8005E3A4
	// End Line: 3938

	/* begin block 2 */
		// Start line: 8586
	/* end block 2 */
	// End Line: 8587

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
	case 0x18:
		OperateBook__Fii(pnum,i);
		break;
	case 0x28:
		OperateSChambBk__Fii(pnum,i);
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
	case 0x5e:
		OperateLazStand__Fii(pnum,i);
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
// void /*$ra*/ BreakCrux__Fii(int pnum /*$s1*/, int i /*$s0*/)
 // line 3945, offset 0x8005e3b4
	/* begin block 1 */
		// Start line: 3946
		// Start offset: 0x8005E3B4
		// Variables:
	// 		int j; // $a1
	// 		int ot; // $v1
	// 		int oi; // $v0
	// 		unsigned char mapflag; // $a2
	/* end block 1 */
	// End offset: 0x8005E5D0
	// End Line: 3976

	/* begin block 2 */
		// Start line: 8788
	/* end block 2 */
	// End Line: 8789

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BreakCrux__Fii(int pnum,int i)

{
	bool bVar1;
	long lVar2;
	int iVar3;
	int iVar4;
	
	bVar1 = true;
	if (object[i]._oSelFlag != '\0') {
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
				iVar3 = (int)(&objectactive)[iVar4];
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
				PlaySfxLoc__Fiii(0x2b,(int)object[i]._ox,(int)object[i]._oy);
				iVar4 = i << 1;
			}
			iVar4 = iVar4 * 4 + i * 3;
			ObjChangeMap__Fiiii((int)(&object[0]._oVar1)[iVar4 * 2],(int)(&object[0]._oVar2)[iVar4 * 2],
													(int)(&object[0]._oVar3)[iVar4 * 2],(int)(&object[0]._oVar4)[iVar4 * 2]);
		}
		if (deltaload == '\0') {
			NetSendCmdParam2__FUcUcUsUs('\0','/',(ushort)pnum,(ushort)i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BreakBarrel__FiiiUcUc(int pnum /*$fp*/, int i /*$s3*/, int dam /*stack -64*/, unsigned char forcebreak /*$a3*/, int sendmsg /*stack 16*/)
 // line 3982, offset 0x8005e5e8
	/* begin block 1 */
		// Start line: 3983
		// Start offset: 0x8005E5E8
		// Variables:
	// 		int x; // $s0
	// 		int y; // $s1
	// 		int oi; // $a1
	/* end block 1 */
	// End offset: 0x8005EB0C
	// End Line: 4050

	/* begin block 2 */
		// Start line: 8873
	/* end block 2 */
	// End Line: 8874

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BreakBarrel__FiiiUcUc(int pnum,int i,int dam,uchar forcebreak,int sendmsg)

{
	char cVar1;
	short sVar2;
	uchar uVar3;
	byte bVar4;
	int y;
	int i_00;
	int x;
	int iVar5;
	
	y = myplr;
	if (object[i]._oSelFlag == '\0') {
		return;
	}
	if (forcebreak == '\0') {
		x = (uint)(ushort)object[i]._oVar1 - dam;
		object[i]._oVar1 = (short)x;
		if (pnum != y) {
			if (0 < x * 0x10000) goto LAB_8005e6d8;
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
		if (uVar3 == '\0') {
			if (object[i]._otype == ':') {
				PlaySfxLoc__Fiii(0xe,(int)object[i]._ox,(int)object[i]._oy);
				y = AddLight__Fiii((int)object[i]._ox,(int)object[i]._oy,0x33);
				cVar1 = object[i]._oy;
				object[i]._olid = (short)y;
				object[i]._oVar1 = 1;
				y = (int)cVar1 + -1;
				do {
					x = (int)object[i]._ox + -1;
					iVar5 = x * 0x380 + y * 8;
					do {
						i_00 = (int)*(short *)((int)&dung_map[0].dMonster + iVar5);
						if (0 < i_00) {
							MonsterTrapHit__FiiiiiUc(i_00 + -1,1,4,0,1,0);
						}
						uVar3 = IsDplayer__Fii(x,y);
						if (uVar3 != '\0') {
							bVar4 = IsDplayer__Fii(x,y);
							PlayerMHit__FiiiiiiUcUc((uint)bVar4 - 1,-1,0,8,0x10,1,0,0);
						}
						i_00 = (int)(&dung_map[0].dObject)[iVar5] + -1;
						if (((0 < (int)(&dung_map[0].dObject)[iVar5]) && (object[i_00]._otype == ':')) &&
							 (object[i_00]._oBreak != -1)) {
							BreakBarrel__FiiiUcUc(pnum,i_00,dam,'\x01',sendmsg & 0xff);
						}
						x = x + 1;
						iVar5 = iVar5 + 0x380;
					} while (x <= (int)object[i]._ox + 1);
					y = y + 1;
				} while (y <= (int)object[i]._oy + 1);
			}
			else {
				PlaySfxLoc__Fiii(0xf,(int)object[i]._ox,(int)object[i]._oy);
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
			NetSendCmdParam2__FUcUcUsUs('\0','/',(ushort)pnum,(ushort)i);
			return;
		}
		sVar2 = object[i]._oAnimLen;
		object[i]._oAnimCnt = 0;
		object[i]._oAnimDelay = 1000;
		object[i]._oAnimFrame = (char)sVar2;
		return;
	}
LAB_8005e6d8:
	if (deltaload == '\0') {
		PlaySfxLoc__Fiii(0x1d,(int)object[i]._ox,(int)object[i]._oy);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BreakObject__Fii(int pnum /*$s2*/, int oi /*$s3*/)
 // line 4056, offset 0x8005eb40
	/* begin block 1 */
		// Start line: 4057
		// Start offset: 0x8005EB40
		// Variables:
	// 		int objdam; // $a2
	// 		int mind; // $s1
	// 		int maxd; // $a0
	/* end block 1 */
	// End offset: 0x8005EC84
	// End Line: 4078

	/* begin block 2 */
		// Start line: 9053
	/* end block 2 */
	// End Line: 9054

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
		lVar2 = ENG_random__Fl((plr[pnum]._pIMaxDam - dam) + 1);
		dam = lVar2 + dam;
		dam = dam + (dam * plr[pnum]._pIBonusDam) / 100 +
					plr[pnum]._pIBonusDamMod + plr[pnum]._pDamageMod;
	}
	cVar1 = object[oi]._otype;
	if ('\x13' < cVar1) {
		if (cVar1 < '\x17') {
			BreakCrux__Fii(pnum,oi);
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
 // line 4085, offset 0x8005eca4
	/* begin block 1 */
		// Start line: 4086
		// Start offset: 0x8005ECA4
	/* end block 1 */
	// End offset: 0x8005ED10
	// End Line: 4097

	/* begin block 2 */
		// Start line: 9117
	/* end block 2 */
	// End Line: 9118

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncBreakObj__Fii(int pnum,int oi)

{
	char cVar1;
	
	cVar1 = object[oi]._otype;
	if ('\x13' < cVar1) {
		if (cVar1 < '\x17') {
			BreakCrux__Fii(pnum,oi);
		}
		else {
			if ((cVar1 < ';') && ('8' < cVar1)) {
				BreakBarrel__FiiiUcUc(pnum,oi,0,'\x01',0);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncL1Doors__Fi(int i /*$s2*/)
 // line 4104, offset 0x8005ed20
	/* begin block 1 */
		// Start line: 4105
		// Start offset: 0x8005ED20
		// Variables:
	// 		int dx; // $s0
	// 		int dy; // $s1
	/* end block 1 */
	// End offset: 0x8005EE1C
	// End Line: 4128

	/* begin block 2 */
		// Start line: 9157
	/* end block 2 */
	// End Line: 9158

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 4134, offset 0x8005ee38
	/* begin block 1 */
		// Start line: 4135
		// Start offset: 0x8005EE38
		// Variables:
	// 		int j; // $a2
	// 		int ot; // $v1
	// 		int oi; // $v0
	// 		unsigned char mapflag; // $a3
	/* end block 1 */
	// End offset: 0x8005EF60
	// End Line: 4151

	/* begin block 2 */
		// Start line: 9226
	/* end block 2 */
	// End Line: 9227

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncCrux__Fi(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = true;
	iVar3 = 0;
	if (0 < numobjects) {
		do {
			iVar2 = (int)(&objectactive)[iVar3];
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
 // line 4157, offset 0x8005ef70
	/* begin block 1 */
		// Start line: 4158
		// Start offset: 0x8005EF70
	/* end block 1 */
	// End offset: 0x8005EFE4
	// End Line: 4163

	/* begin block 2 */
		// Start line: 9272
	/* end block 2 */
	// End Line: 9273

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncLever__Fi(int i)

{
	if (object[i]._oSelFlag == '\0') {
		ObjChangeMap__Fiiii((int)object[i]._oVar1,(int)object[i]._oVar2,(int)object[i]._oVar3,
												(int)object[i]._oVar4);
	}
	FillCrapBits__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncQSTLever__Fi(int i /*$a0*/)
 // line 4169, offset 0x8005eff4
	/* begin block 1 */
		// Start line: 4170
		// Start offset: 0x8005EFF4
		// Variables:
	// 		int tren; // $s0
	/* end block 1 */
	// End offset: 0x8005F0D8
	// End Line: 4182

	/* begin block 2 */
		// Start line: 9298
	/* end block 2 */
	// End Line: 9299

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 4190, offset 0x8005f0ec
	/* begin block 1 */
		// Start line: 4191
		// Start offset: 0x8005F0EC
	/* end block 1 */
	// End offset: 0x8005F0EC
	// End Line: 4191

	/* begin block 2 */
		// Start line: 9372
	/* end block 2 */
	// End Line: 9373

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncPedistal__Fi(int i)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncL2Doors__Fi(int i /*$a0*/)
 // line 4214, offset 0x8005f0f4
	/* begin block 1 */
		// Start line: 4215
		// Start offset: 0x8005F0F4
		// Variables:
	// 		int dx; // $a3
	// 		int dy; // $a1
	/* end block 1 */
	// End offset: 0x8005F24C
	// End Line: 4239

	/* begin block 2 */
		// Start line: 9402
	/* end block 2 */
	// End Line: 9403

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
			goto LAB_8005f244;
		}
		pn = 0xd;
		if (((int)object[i]._oVar4 - 1U & 0xffff) < 2) goto LAB_8005f244;
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
LAB_8005f244:
	ObjSetMicro__Fiii((int)cVar1,(int)object[i]._oy,pn);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncL3Doors__Fi(int i /*$a0*/)
 // line 4246, offset 0x8005f25c
	/* begin block 1 */
		// Start line: 4247
		// Start offset: 0x8005F25C
		// Variables:
	// 		int dx; // $a3
	// 		int dy; // $a1
	/* end block 1 */
	// End offset: 0x8005F378
	// End Line: 4270

	/* begin block 2 */
		// Start line: 9481
	/* end block 2 */
	// End Line: 9482

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
			goto LAB_8005f370;
		}
		pn = 0x21a;
		if (((int)object[i]._oVar4 - 1U & 0xffff) < 2) goto LAB_8005f370;
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
LAB_8005f370:
	ObjSetMicro__Fiii((int)cVar1,(int)object[i]._oy,pn);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncObjectAnim__Fi(int o /*$a0*/)
 // line 4277, offset 0x8005f388
	/* begin block 1 */
		// Start line: 4278
		// Start offset: 0x8005F388
		// Variables:
	// 		int ai; // $a1
	// 		int ot; // $v1
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x8005F4B8
	// End Line: 4317

	/* begin block 2 */
		// Start line: 9558
	/* end block 2 */
	// End Line: 9559

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 4324, offset 0x8005f4c8
	/* begin block 1 */
		// Start line: 4325
		// Start offset: 0x8005F4C8
	/* end block 1 */
	// End offset: 0x8005F968
	// End Line: 4474

	/* begin block 2 */
		// Start line: 9656
	/* end block 2 */
	// End Line: 9657

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetObjectStr__Fi(int i)

{
	ushort uVar1;
	char *__src;
	text_strs StrId;
	int **__format;
	
	switch((int)(((uint)(byte)object[i]._otype - 1) * 0x1000000) >> 0x18) {
	case 0:
	case 1:
	case 0x29:
	case 0x2a:
	case 0x49:
	case 0x4a:
		if (object[i]._oVar4 == 1) {
			__src = GetStr__Fi(STR_OPEN_DOOR_755);
			strcpy(_infostr + sel_data * 0x100,__src);
		}
		if (object[i]._oVar4 == 0) {
			__src = GetStr__Fi(STR_CLOSED_DOOR_189);
			strcpy(_infostr + sel_data * 0x100,__src);
		}
		if (object[i]._oVar4 != 2) goto switchD_8005f52c_caseD_2;
		StrId = STR_BLOCKED_DOOR_94;
		break;
	default:
		goto switchD_8005f52c_caseD_2;
	case 3:
	case 0x31:
		StrId = STR_LEVER_584;
		break;
	case 4:
	case 0x43:
		StrId = STR_SMALL_CHEST_991;
		break;
	case 5:
	case 0x44:
		StrId = STR_CHEST_181;
		break;
	case 6:
	case 0x45:
	case 0x60:
		StrId = STR_LARGE_CHEST_569;
		break;
	case 0x13:
	case 0x14:
	case 0x15:
		StrId = STR_CRUCIFIED_SKELETON_218;
		break;
	case 0x18:
		if (setlevel == '\0') goto switchD_8005f52c_caseD_2;
		if (setlvlnum == '\x02') {
			StrId = STR_ANCIENT_TOME_23;
		}
		else {
			if (setlvlnum != '\x05') goto switchD_8005f52c_caseD_2;
			StrId = STR_BOOK_OF_VILENESS_123;
		}
		break;
	case 0x1b:
		StrId = STR_SKULL_LEVER_984;
		break;
	case 0x28:
		StrId = STR_MYTHICAL_BOOK_686;
		break;
	case 0x2f:
		StrId = STR_SARCOPHAGUS_899;
		break;
	case 0x36:
		StrId = STR_BOOKSHELF_120;
		break;
	case 0x38:
	case 0x39:
		StrId = STR_BARREL_64;
		break;
	case 0x3a:
	case 0x3b:
		uVar1 = shrinestrs[(int)object[i]._oVar1];
		if (uVar1 == 0x1ed) {
			__src = GetStr__Fi(STR_HIDDEN_SHRINE_494);
			__format = &PTR_DAT_8011b9c8;
		}
		else {
			if (uVar1 == 0x1fa) {
				__src = GetStr__Fi(STR_HOLY_SHRINE_509);
				__format = &PTR_DAT_8011b9c8;
			}
			else {
				if (uVar1 == 0x4c7) {
					__src = GetStr__Fi(STR_WEIRD_SHRINE_1224);
					__format = &PTR_DAT_8011b9c8;
				}
				else {
					__format = (int **)GetStr__Fi(STR__S_SHRINE_1303);
					__src = GetStr__Fi((uint)shrinestrs[(int)object[i]._oVar1]);
				}
			}
		}
		sprintf(tempstr,(char *)__format,__src);
		__src = tempstr;
		goto LAB_8005f880;
	case 0x3c:
		StrId = STR_SKELETON_TOME_979;
		break;
	case 0x3d:
	case 0x3e:
		StrId = STR_BOOKCASE_119;
		break;
	case 0x3f:
		StrId = STR_LIBRARY_BOOK_587;
		break;
	case 0x41:
		StrId = STR_BLOOD_FOUNTAIN_104;
		break;
	case 0x42:
		StrId = STR_DECAPITATED_BODY_239;
		break;
	case 0x46:
		StrId = STR_BOOK_OF_THE_BLIND_122;
		break;
	case 0x47:
		StrId = STR_BOOK_OF_BLOOD_121;
		break;
	case 0x48:
		StrId = STR_PEDESTAL_OF_BLOOD_772;
		break;
	case 0x4b:
		StrId = STR_PURIFYING_SPRING_823;
		break;
	case 0x4c:
	case 0x58:
		StrId = STR_ARMOR_40;
		break;
	case 0x4e:
		StrId = STR_GOAT_SHRINE_396;
		break;
	case 0x4f:
		StrId = STR_CAULDRON_163;
		break;
	case 0x50:
		StrId = STR_MURKY_POOL_681;
		break;
	case 0x51:
		StrId = STR_FOUNTAIN_OF_TEARS_361;
		break;
	case 0x55:
		__src = GetStr__Fi((uint)StoryBookName[(int)object[i]._oVar3]);
		goto LAB_8005f880;
	case 0x57:
		StrId = STR_STEEL_TOME_1037;
		break;
	case 0x59:
		StrId = STR_WEAPON_RACK_1220;
		break;
	case 0x5b:
		StrId = STR_WEAPON_RACK_1220;
		break;
	case 0x5d:
		StrId = STR_MUSHROOM_PATCH_682;
		break;
	case 0x5e:
		StrId = STR_VILE_STAND_1203;
		break;
	case 0x5f:
		StrId = STR_SLAIN_HERO_985;
	}
	__src = GetStr__Fi(StrId);
LAB_8005f880:
	strcpy(_infostr + sel_data * 0x100,__src);
switchD_8005f52c_caseD_2:
	if ((plr[sel_data]._pClass == '\x01') && (object[i]._oTrapFlag != '\0')) {
		__src = GetStr__Fi(STR_TRAPPED__S_1177);
		sprintf(tempstr,__src,_infostr + sel_data * 0x100);
		strcpy(_infostr + sel_data * 0x100,tempstr);
		_infoclr[sel_data] = '\x02';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddLamp__Fiii(int x /*$a0*/, int y /*$a1*/, int r /*$a2*/)
 // line 4478, offset 0x8005f984
	/* begin block 1 */
		// Start line: 4479
		// Start offset: 0x8005F984
	/* end block 1 */
	// End offset: 0x8005F9B4
	// End Line: 4481

	/* begin block 2 */
		// Start line: 9967
	/* end block 2 */
	// End Line: 9968

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddLamp__Fiii(int x,int y,int r)

{
	if (level_lamp[(uint)leveltype] != '\0') {
		AddLight__Fiii(x,y,r);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestoreObjectLight__Fv()
 // line 4484, offset 0x8005f9c4
	/* begin block 1 */
		// Start line: 4485
		// Start offset: 0x8005F9C4
		// Variables:
	// 		int i; // $s1
	// 		int oi; // $v0
	// 		int ox; // $a0
	// 		int oy; // $a1
	// 		struct MonsterStruct *Monst; // $v1
	/* end block 1 */
	// End offset: 0x8005FB78
	// End Line: 4653

	/* begin block 2 */
		// Start line: 9979
	/* end block 2 */
	// End Line: 9980

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RestoreObjectLight__Fv(void)

{
	int iVar1;
	int r;
	MonsterStruct *pMVar2;
	undefined *puVar3;
	int iVar4;
	
	InitLighting__Fv();
	iVar4 = 0;
	if (0 < nummonsters) {
		pMVar2 = monster + 0xbe;
		do {
			iVar1 = (int)*(short *)&pMVar2->mtalkmsg;
			if (monster[iVar1]._uniqtype != '\0') {
				AddLight__Fiii((int)monster[iVar1]._mx,(int)monster[iVar1]._my,(int)&DAT_000023f4);
			}
			iVar4 = iVar4 + 1;
			pMVar2 = (MonsterStruct *)((int)&pMVar2->mtalkmsg + 2);
		} while (iVar4 < nummonsters);
	}
	iVar4 = 0;
	if (-1 < FePlayerNo) {
		puVar3 = (undefined *)0x0;
		do {
			iVar4 = iVar4 + 1;
			iVar1 = AddLight__Fiii((int)*(short *)((int)&plr[0]._px + (int)puVar3),
														 (int)*(short *)((int)&plr[0]._py + (int)puVar3),
														 (int)(&DAT_000023f0 + (int)(&plr[0]._pLightRad)[(int)puVar3]));
			(&plr[0]._plid)[(int)puVar3] = (char)iVar1;
			puVar3 = &DAT_000019e8 + (int)puVar3;
		} while (iVar4 <= FePlayerNo);
	}
	iVar4 = 0;
	if (0 < numobjects) {
		do {
			iVar1 = (int)(&objectactive)[iVar4];
			switch(object[iVar1]._otype) {
			case '\0':
			case '\x1a':
			case '[':
				r = 0x1b8;
				break;
			default:
				goto switchD_8005fb38_caseD_1;
			case '\x03':
			case '\b':
			case '\t':
			case 'A':
				r = 0x3f3;
				break;
			case ',':
			case '-':
			case '.':
			case '/':
				r = 0x3f3;
				break;
			case 'W':
				r = 0x3f3;
			}
			AddLamp__Fiii((int)object[iVar1]._ox,(int)object[iVar1]._oy,r);
switchD_8005fb38_caseD_1:
			iVar4 = iVar4 + 1;
		} while (iVar4 < numobjects);
	}
	return;
}





