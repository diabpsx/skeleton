#include "THISDUST.H"
#include "MSG.H"


// decompiled code
// original method signature: 
// void /*$ra*/ delta_init__Fv()
 // line 187, offset 0x80047b84
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x80047B84
	/* end block 1 */
	// End offset: 0x80047BD4
	// End Line: 202

	/* begin block 2 */
		// Start line: 374
	/* end block 2 */
	// End Line: 375

/* WARNING: Unknown calling convention yet parameter storage is locked */

void delta_init__Fv(void)

{
	sgbDeltaChanged = '\0';
	memset(&sgJunk,0xff,0x16);
	memset(sgLevels,0xff,(size_t)&LAB_00013d4c);
	memset(sgLocals,0,(size_t)&DAT_00001068);
	deltaload = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_kill_monster__FiUcUcUc(int mi /*$s0*/, unsigned char x /*$s2*/, unsigned char y /*$s1*/, unsigned char bLevel /*$a3*/)
 // line 208, offset 0x80047be4
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x80047BE4
		// Variables:
	// 		struct DMonsterStr *p; // $a1
	// 		struct DLevel *Dl; // $v0
	/* end block 1 */
	// End offset: 0x80047C64
	// End Line: 230

	/* begin block 2 */
		// Start line: 418
	/* end block 2 */
	// End Line: 419

void delta_kill_monster__FiUcUcUc(int mi,uchar x,uchar y,uchar bLevel)

{
	uchar uVar1;
	DLevel *Dl;
	DMonsterStr *pDVar2;
	
	sgbDeltaChanged = '\x01';
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	pDVar2 = Dl->monster + mi;
	pDVar2->_mx = x;
	pDVar2->_my = y;
	uVar1 = monster[mi]._mdir;
	pDVar2->_mhitpoints = 0;
	pDVar2->_mdir = uVar1;
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_monster_hp__FilUc(int mi /*$s0*/, long hp /*$s1*/, unsigned char bLevel /*$a2*/)
 // line 236, offset 0x80047c80
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x80047C80
		// Variables:
	// 		struct DMonsterStr *p; // $v1
	// 		struct DLevel *Dl; // $a0
	/* end block 1 */
	// End offset: 0x80047CEC
	// End Line: 253

	/* begin block 2 */
		// Start line: 502
	/* end block 2 */
	// End Line: 503

void delta_monster_hp__FilUc(int mi,long hp,uchar bLevel)

{
	DLevel *Dl;
	
	sgbDeltaChanged = '\x01';
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	if (hp < (int)Dl->monster[mi]._mhitpoints) {
		Dl->monster[mi]._mhitpoints = (short)hp;
	}
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG /*$s0*/, int pnum /*$s1*/, unsigned char bLevel /*$a2*/)
 // line 261, offset 0x80047d04
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80047D04
		// Variables:
	// 		struct DLevel *Dl; // $v0
	// 		struct DMonsterStr *pD; // $v0
	/* end block 1 */
	// End offset: 0x80047D7C
	// End Line: 284

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

void delta_sync_golem__FPC9TCmdGolemiUc(TCmdGolem *pG,int pnum,uchar bLevel)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	short sVar4;
	DLevel *Dl;
	DMonsterStr *pDVar5;
	
	sgbDeltaChanged = '\x01';
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	uVar1 = pG->_my;
	uVar2 = pG->_menemy;
	uVar3 = pG->_mdir;
	sVar4 = pG->_mhitpoints;
	pDVar5 = Dl->monster + pnum;
	pDVar5->_mx = pG->_mx;
	pDVar5->_my = uVar1;
	pDVar5->_menemy = uVar2;
	pDVar5->_mdir = uVar3;
	pDVar5->_mhitpoints = sVar4;
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_leave_sync__FUc(unsigned char bLevel /*$s5*/)
 // line 289, offset 0x80047d94
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x80047D94
		// Variables:
	// 		struct DLevel *Dl; // $s4

		/* begin block 1.1 */
			// Start line: 300
			// Start offset: 0x80047DE4
			// Variables:
		// 		int i; // $s3

			/* begin block 1.1.1 */
				// Start line: 303
				// Start offset: 0x80047E08
				// Variables:
			// 		int ii; // $a0
			// 		struct DMonsterStr *pD; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80047EB4
			// End Line: 319
		/* end block 1.1 */
		// End offset: 0x80047EC0
		// End Line: 321
	/* end block 1 */
	// End offset: 0x80048098
	// End Line: 330

	/* begin block 2 */
		// Start line: 649
	/* end block 2 */
	// End Line: 650

/* WARNING: Removing unreachable block (ram,0x80047f14) */
/* WARNING: Removing unreachable block (ram,0x80047f60) */
/* WARNING: Removing unreachable block (ram,0x80047ff8) */
/* WARNING: Removing unreachable block (ram,0x80048044) */

void delta_leave_sync__FUc(uchar bLevel)

{
	LocalLevel *pLVar1;
	undefined4 *puVar2;
	uchar uVar3;
	DLevel *Dl;
	undefined4 uVar4;
	int iVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	undefined4 *puVar8;
	LocalLevel *pLVar9;
	DMonsterStr *pDVar10;
	short *psVar11;
	int iVar12;
	
	if ((currlevel != '\0') || (glSeedTbl[0] = GetRndSeed__Fv(), currlevel != '\0')) {
		iVar12 = 0;
		psVar11 = monstactive;
		Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
		while (iVar12 < nummonsters) {
			iVar5 = (int)*psVar11;
			if (monster[iVar5]._mhitpoints != 0) {
				sgbDeltaChanged = '\x01';
				pDVar10 = Dl->monster + iVar5;
				pDVar10->_mx = monster[iVar5]._mx;
				pDVar10->_my = monster[iVar5]._my;
				pDVar10->_mdir = monster[iVar5]._mdir;
				uVar3 = FUN_8015fb64();
				pDVar10->_menemy = uVar3;
				pDVar10->_mhitpoints = monster[iVar5]._mhitpoints;
			}
			psVar11 = psVar11 + 1;
			iVar12 = iVar12 + 1;
		}
		ReleaseDLevel__FP6DLevel(Dl);
		if (setlevel == '\0') {
			puVar2 = (undefined4 *)&automapview;
			pLVar1 = sgLocals + (uint)bLevel;
			do {
				pLVar9 = pLVar1;
				puVar8 = puVar2;
				uVar4 = puVar8[1];
				uVar6 = puVar8[2];
				uVar7 = puVar8[3];
				*(undefined4 *)pLVar9->automapsv = *puVar8;
				*(undefined4 *)(pLVar9->automapsv + 4) = uVar4;
				*(undefined4 *)(pLVar9->automapsv + 8) = uVar6;
				*(undefined4 *)(pLVar9->automapsv + 0xc) = uVar7;
				puVar2 = puVar8 + 4;
				pLVar1 = (LocalLevel *)(pLVar9->automapsv + 0x10);
			} while (puVar8 + 4 != (undefined4 *)0x8011d334);
			uVar4 = puVar8[5];
			*(undefined4 *)((LocalLevel *)(pLVar9->automapsv + 0x10))->automapsv = uRam8011d334;
			*(undefined4 *)(pLVar9->automapsv + 0x14) = uVar4;
		}
		else {
			pLVar1 = LocalLevel_ARRAY_800dc484 + (uint)setlvlnum;
			puVar2 = (undefined4 *)&automapview;
			do {
				puVar8 = puVar2;
				pLVar9 = pLVar1;
				uVar4 = puVar8[1];
				uVar6 = puVar8[2];
				uVar7 = puVar8[3];
				*(undefined4 *)pLVar9->automapsv = *puVar8;
				*(undefined4 *)(pLVar9->automapsv + 4) = uVar4;
				*(undefined4 *)(pLVar9->automapsv + 8) = uVar6;
				*(undefined4 *)(pLVar9->automapsv + 0xc) = uVar7;
				pLVar1 = (LocalLevel *)(pLVar9->automapsv + 0x10);
				puVar2 = puVar8 + 4;
			} while (puVar8 + 4 != (undefined4 *)0x8011d334);
			uVar4 = puVar8[5];
			*(undefined4 *)((LocalLevel *)(pLVar9->automapsv + 0x10))->automapsv = uRam8011d334;
			*(undefined4 *)(pLVar9->automapsv + 0x14) = uVar4;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_sync_object__FiUcUc(int oi /*$s0*/, unsigned char bCmd /*$s1*/, unsigned char bLevel /*$a2*/)
 // line 336, offset 0x800480c0
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x800480C0
		// Variables:
	// 		struct DLevel *Dl; // $v0
	// 		struct DObjectStr *p; // $v0
	/* end block 1 */
	// End offset: 0x80048108
	// End Line: 353

	/* begin block 2 */
		// Start line: 755
	/* end block 2 */
	// End Line: 756

void delta_sync_object__FiUcUc(int oi,uchar bCmd,uchar bLevel)

{
	DLevel *Dl;
	
	sgbDeltaChanged = '\x01';
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	Dl->object[oi].bCmd = bCmd;
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI /*$s0*/, unsigned char bLevel /*$s1*/)
 // line 359, offset 0x80048120
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x80048120
		// Variables:
	// 		struct DLevel *Dl; // $a0
	// 		struct TCmdPItem *pD; // $t7
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x800482CC
	// End Line: 479

	/* begin block 2 */
		// Start line: 815
	/* end block 2 */
	// End Line: 816

uchar delta_get_item__FPC9TCmdGItemUc(TCmdGItem *pI,uchar bLevel)

{
	uchar uVar1;
	uchar uVar2;
	uchar uVar3;
	uchar uVar4;
	uchar uVar5;
	uchar uVar6;
	ushort uVar7;
	ushort uVar8;
	ushort uVar9;
	uchar uVar10;
	DLevel *Dl;
	ulong *puVar11;
	int iVar12;
	ulong uVar13;
	DLevel *pDVar14;
	
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	iVar12 = 0;
	puVar11 = &Dl->item[0].dwSeed;
	pDVar14 = Dl;
	do {
		uVar10 = pDVar14->item[0].bCmd;
		if ((((uVar10 != -1) && (*(ushort *)((int)puVar11 + -6) == pI->wIndx)) &&
				(*(ushort *)(puVar11 + -1) == pI->wCI)) && (*puVar11 == pI->dwSeed)) {
			if (uVar10 == '\x01') goto LAB_800482c0;
			if (uVar10 == '\0') {
				sgbDeltaChanged = '\x01';
				pDVar14->item[0].bCmd = '\x01';
				goto LAB_800482c0;
			}
			if (uVar10 == '\x02') {
				sgbDeltaChanged = '\x01';
				pDVar14->item[0].bCmd = -1;
				goto LAB_800482c0;
			}
			break;
		}
		iVar12 = iVar12 + 1;
		puVar11 = puVar11 + 5;
		pDVar14 = (DLevel *)(pDVar14->item + 1);
	} while (iVar12 < 0x7f);
	ReleaseDLevel__FP6DLevel(Dl);
	if ((pI->wCI & 0x8000) == 0) {
		uVar10 = '\0';
	}
	else {
		Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
		iVar12 = 0;
		pDVar14 = Dl;
		do {
			iVar12 = iVar12 + 1;
			if (pDVar14->item[0].bCmd == -1) {
				uVar10 = pI->x;
				uVar1 = pI->y;
				uVar7 = pI->wIndx;
				uVar8 = pI->wCI;
				uVar13 = pI->dwSeed;
				uVar2 = pI->bId;
				uVar3 = pI->bDur;
				uVar4 = pI->bMDur;
				uVar5 = pI->bCh;
				uVar6 = pI->bMCh;
				uVar9 = pI->wValue;
				sgbDeltaChanged = '\x01';
				pDVar14->item[0].bCmd = '\x01';
				pDVar14->item[0].x = uVar10;
				pDVar14->item[0].y = uVar1;
				pDVar14->item[0].wIndx = uVar7;
				pDVar14->item[0].wCI = uVar8;
				pDVar14->item[0].dwSeed = uVar13;
				pDVar14->item[0].bId = uVar2;
				pDVar14->item[0].bDur = uVar3;
				pDVar14->item[0].bMDur = uVar4;
				pDVar14->item[0].bCh = uVar5;
				pDVar14->item[0].bMCh = uVar6;
				pDVar14->item[0].wValue = uVar9;
				break;
			}
			pDVar14 = (DLevel *)(pDVar14->item + 1);
		} while (iVar12 < 0x7f);
LAB_800482c0:
		ReleaseDLevel__FP6DLevel(Dl);
		uVar10 = '\x01';
	}
	return uVar10;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI /*$s0*/, int x /*$s2*/, int y /*$s3*/, unsigned char bLevel /*$s1*/)
 // line 485, offset 0x800482e4
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x800482E4
		// Variables:
	// 		struct DLevel *Dl; // $t1
	// 		struct TCmdPItem *pD; // $a3
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x8004844C
	// End Line: 546

	/* begin block 2 */
		// Start line: 1155
	/* end block 2 */
	// End Line: 1156

void delta_put_item__FPC9TCmdPItemiiUc(TCmdPItem *pI,int x,int y,uchar bLevel)

{
	uchar uVar1;
	DLevel *Dl;
	undefined4 uVar2;
	undefined4 uVar3;
	ulong *puVar4;
	undefined4 uVar5;
	uchar *puVar6;
	DLevel *pDVar7;
	int iVar8;
	
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	iVar8 = 0;
	puVar4 = &Dl->item[0].dwSeed;
	pDVar7 = Dl;
	do {
		uVar1 = pDVar7->item[0].bCmd;
		if ((((uVar1 != '\x01') && (uVar1 != -1)) && (*(ushort *)((int)puVar4 + -6) == pI->wIndx)) &&
			 (((*(ushort *)(puVar4 + -1) == pI->wCI && (*puVar4 == pI->dwSeed)) && (uVar1 == '\x02'))))
		goto LAB_80048444;
		iVar8 = iVar8 + 1;
		puVar4 = puVar4 + 5;
		pDVar7 = (DLevel *)(pDVar7->item + 1);
	} while (iVar8 < 0x7f);
	ReleaseDLevel__FP6DLevel(Dl);
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	iVar8 = 0;
	puVar6 = &Dl->item[0].y;
	pDVar7 = Dl;
	do {
		iVar8 = iVar8 + 1;
		if (pDVar7->item[0].bCmd == -1) {
			sgbDeltaChanged = '\x01';
			uVar2 = *(undefined4 *)&pI->bDur;
			uVar3 = *(undefined4 *)&pI->wValue;
			uVar5 = *(undefined4 *)&pI->wCI;
			*(undefined4 *)pDVar7->item = *(undefined4 *)pI;
			*(undefined4 *)&pDVar7->item[0].bDur = uVar2;
			*(undefined4 *)&pDVar7->item[0].wValue = uVar3;
			*(undefined4 *)&pDVar7->item[0].wCI = uVar5;
			pDVar7->item[0].dwSeed = pI->dwSeed;
			pDVar7->item[0].bCmd = '\x02';
			puVar6[-1] = (uchar)x;
			*puVar6 = (uchar)y;
			break;
		}
		puVar6 = puVar6 + 0x14;
		pDVar7 = (DLevel *)(pDVar7->item + 1);
	} while (iVar8 < 0x7f);
LAB_80048444:
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ delta_portal_inited__Fi(int i /*$a0*/)
 // line 552, offset 0x8004846c
	/* begin block 1 */
		// Start line: 553
		// Start offset: 0x8004846C
	/* end block 1 */
	// End offset: 0x80048488
	// End Line: 556

	/* begin block 2 */
		// Start line: 1306
	/* end block 2 */
	// End Line: 1307

uchar delta_portal_inited__Fi(int i)

{
	return (uchar)(sgJunk.portal[i].x == -1);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ delta_quest_inited__Fi(int i /*$a0*/)
 // line 561, offset 0x80048490
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x80048490
	/* end block 1 */
	// End offset: 0x800484AC
	// End Line: 565

	/* begin block 2 */
		// Start line: 1324
	/* end block 2 */
	// End Line: 1325

uchar delta_quest_inited__Fi(int i)

{
	return (uchar)(sgJunk.quests[i].qstate != -1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeltaAddItem__Fi(int ii /*$s0*/)
 // line 571, offset 0x800484b4
	/* begin block 1 */
		// Start line: 572
		// Start offset: 0x800484B4
		// Variables:
	// 		struct TCmdPItem *pD; // $a3
	// 		struct TCmdPItem *OpD; // $t2
	// 		struct DLevel *Dl; // $a0
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x800486B4
	// End Line: 634

	/* begin block 2 */
		// Start line: 1342
	/* end block 2 */
	// End Line: 1343

void DeltaAddItem__Fi(int ii)

{
	byte bVar1;
	DLevel *Dl;
	ulong *puVar2;
	ushort *puVar3;
	DLevel *pDVar4;
	int iVar5;
	
	Dl = GetDLevel__Fib((uint)currlevel,(void *)(uint)(setlevel != '\0'));
	iVar5 = 0;
	puVar2 = &Dl->item[0].dwSeed;
	pDVar4 = Dl;
	do {
		bVar1 = pDVar4->item[0].bCmd;
		if ((((bVar1 != 0xff) && ((uint)*(ushort *)((int)puVar2 + -6) == (int)item[ii].IDidx)) &&
				(*(ushort *)(puVar2 + -1) == item[ii]._iCreateInfo)) &&
			 ((*puVar2 == item[ii]._iSeed && (bVar1 < 2)))) goto LAB_800486ac;
		iVar5 = iVar5 + 1;
		puVar2 = puVar2 + 5;
		pDVar4 = (DLevel *)(pDVar4->item + 1);
	} while (iVar5 < 0x7f);
	iVar5 = 0;
	puVar3 = &Dl->item[0].wValue;
	pDVar4 = Dl;
	do {
		iVar5 = iVar5 + 1;
		if (pDVar4->item[0].bCmd == -1) {
			sgbDeltaChanged = '\x01';
			pDVar4->item[0].bCmd = '\0';
			*(char *)((int)puVar3 + -7) = item[ii]._ix;
			*(char *)(puVar3 + -3) = item[ii]._iy;
			puVar3[1] = item[ii].IDidx;
			puVar3[2] = item[ii]._iCreateInfo;
			*(int *)(puVar3 + 4) = item[ii]._iSeed;
			*(char *)((int)puVar3 + -5) = item[ii]._iIdentified;
			*(char *)(puVar3 + -2) = (char)item[ii]._iDurability;
			*(undefined *)((int)puVar3 + -3) = (char)item[ii]._iMaxDur;
			*(char *)(puVar3 + -1) = (char)item[ii]._iCharges;
			*(undefined *)((int)puVar3 + -1) = (char)item[ii]._iMaxCharges;
			*puVar3 = (ushort)item[ii]._ivalue;
			break;
		}
		puVar3 = puVar3 + 10;
		pDVar4 = (DLevel *)(pDVar4->item + 1);
	} while (iVar5 < 0x7f);
LAB_800486ac:
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DeltaExportData__FPc(char *Dst /*$a0*/)
 // line 639, offset 0x800486c8
	/* begin block 1 */
		// Start line: 640
		// Start offset: 0x800486C8
	/* end block 1 */
	// End offset: 0x800486E8
	// End Line: 648

	/* begin block 2 */
		// Start line: 1486
	/* end block 2 */
	// End Line: 1487

int DeltaExportData__FPc(char *Dst)

{
	memcpy(Dst,sgLevels,(size_t)&LAB_00013d4c);
	return (int)&LAB_00013d4c;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DeltaImportData__FPc(char *Src /*$a1*/)
 // line 658, offset 0x800486f8
	/* begin block 1 */
		// Start line: 659
		// Start offset: 0x800486F8
	/* end block 1 */
	// End offset: 0x8004871C
	// End Line: 667

	/* begin block 2 */
		// Start line: 1524
	/* end block 2 */
	// End Line: 1525

int DeltaImportData__FPc(char *Src)

{
	memcpy(sgLevels,Src,(size_t)&LAB_00013d4c);
	return (int)&LAB_00013d4c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeltaSaveLevel__Fv()
 // line 678, offset 0x8004872c
	/* begin block 1 */
		// Start line: 679
		// Start offset: 0x8004872C

		/* begin block 1.1 */
			// Start line: 679
			// Start offset: 0x8004872C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80048768
		// End Line: 687
	/* end block 1 */
	// End offset: 0x80048818
	// End Line: 694

	/* begin block 2 */
		// Start line: 1564
	/* end block 2 */
	// End Line: 1565

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeltaSaveLevel__Fv(void)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = myplr;
	iVar2 = 0;
	iVar4 = 0;
	do {
		if (iVar2 != iVar3) {
			*(undefined4 *)((int)&plr[0]._pGFXLoad + iVar4) = 0;
		}
		iVar2 = iVar2 + 1;
		iVar4 = iVar4 + 0x23a8;
	} while (iVar2 < 2);
	if (setlevel == '\0') {
		iVar3 = -0x7ff21372;
		bVar1 = currlevel;
	}
	else {
		iVar3 = -0x7ff21361;
		bVar1 = setlvlnum;
	}
	*(undefined *)(myplr * 0x23a8 + iVar3 + (uint)bVar1) = 1;
	delta_leave_sync__FUc(currlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmd__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/)
 // line 768, offset 0x80048828
	/* begin block 1 */
		// Start line: 769
		// Start offset: 0x80048828
		// Variables:
	// 		struct TCmd cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80048840
	// End Line: 773

	/* begin block 2 */
		// Start line: 1749
	/* end block 2 */
	// End Line: 1750

void NetSendCmd__FUcUc(uchar bHiPri,uchar bCmd)

{
	uchar local_10 [8];
	
	local_10[0] = bCmd;
	NetSendLoPri__FPCUcUc(local_10,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx /*$a0*/, unsigned char my /*$a1*/, unsigned char dir /*$a2*/, unsigned char menemy /*$a3*/, long hp /*stack 16*/, int cl /*stack 20*/)
 // line 778, offset 0x80048850
	/* begin block 1 */
		// Start line: 779
		// Start offset: 0x80048850
		// Variables:
	// 		struct TCmdGolem cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004888C
	// End Line: 793

	/* begin block 2 */
		// Start line: 1773
	/* end block 2 */
	// End Line: 1774

void NetSendCmdGolem__FUcUcUcUclUc(uchar mx,uchar my,uchar dir,uchar menemy,long hp,int cl)

{
	uchar local_10;
	uchar local_f;
	uchar local_e;
	uchar local_d;
	uchar local_c;
	undefined local_b;
	undefined2 local_a;
	
	local_10 = 'Z';
	local_a = (undefined2)hp;
	local_b = (undefined)cl;
	local_f = mx;
	local_e = my;
	local_d = dir;
	local_c = menemy;
	NetSendLoPri__FPCUcUc(&local_10,'\b');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char x /*$a2*/, unsigned char y /*$a3*/)
 // line 798, offset 0x8004889c
	/* begin block 1 */
		// Start line: 799
		// Start offset: 0x8004889C
		// Variables:
	// 		struct TCmdLoc cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x800488BC
	// End Line: 809

	/* begin block 2 */
		// Start line: 1833
	/* end block 2 */
	// End Line: 1834

void NetSendCmdLoc__FUcUcUcUc(uchar bHiPri,uchar bCmd,uchar x,uchar y)

{
	uchar local_10;
	uchar local_f;
	uchar local_e;
	
	local_10 = bCmd;
	local_f = x;
	local_e = y;
	NetSendLoPri__FPCUcUc(&local_10,'\x03');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char x /*$a2*/, unsigned char y /*$a3*/, int wParam1 /*stack 16*/)
 // line 814, offset 0x800488cc
	/* begin block 1 */
		// Start line: 815
		// Start offset: 0x800488CC
		// Variables:
	// 		struct TCmdLocParam1 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x800488F4
	// End Line: 824

	/* begin block 2 */
		// Start line: 1879
	/* end block 2 */
	// End Line: 1880

void NetSendCmdLocParam1__FUcUcUcUcUs(uchar bHiPri,uchar bCmd,uchar x,uchar y,int wParam1)

{
	uchar local_10;
	uchar local_f;
	uchar local_e;
	undefined2 local_c;
	
	local_c = (undefined2)wParam1;
	local_10 = bCmd;
	local_f = x;
	local_e = y;
	NetSendLoPri__FPCUcUc(&local_10,'\x06');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char x /*$a2*/, unsigned char y /*$a3*/, int wParam1 /*stack 16*/, int wParam2 /*stack 20*/)
 // line 829, offset 0x80048904
	/* begin block 1 */
		// Start line: 830
		// Start offset: 0x80048904
		// Variables:
	// 		struct TCmdLocParam2 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80048934
	// End Line: 840

	/* begin block 2 */
		// Start line: 1923
	/* end block 2 */
	// End Line: 1924

void NetSendCmdLocParam2__FUcUcUcUcUsUs
							 (uchar bHiPri,uchar bCmd,uchar x,uchar y,int wParam1,int wParam2)

{
	uchar local_10;
	uchar local_f;
	uchar local_e;
	undefined2 local_c;
	undefined2 local_a;
	
	local_c = (undefined2)wParam1;
	local_a = (undefined2)wParam2;
	local_10 = bCmd;
	local_f = x;
	local_e = y;
	NetSendLoPri__FPCUcUc(&local_10,'\b');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char x /*$a2*/, unsigned char y /*$a3*/, int wParam1 /*stack 16*/, int wParam2 /*stack 20*/, int wParam3 /*stack 24*/)
 // line 845, offset 0x80048944
	/* begin block 1 */
		// Start line: 846
		// Start offset: 0x80048944
		// Variables:
	// 		struct TCmdLocParam3 cmd; // stack offset -24
	/* end block 1 */
	// End offset: 0x8004897C
	// End Line: 857

	/* begin block 2 */
		// Start line: 1971
	/* end block 2 */
	// End Line: 1972

void NetSendCmdLocParam3__FUcUcUcUcUsUsUs
							 (uchar bHiPri,uchar bCmd,uchar x,uchar y,int wParam1,int wParam2,int wParam3)

{
	uchar local_18;
	uchar local_17;
	uchar local_16;
	undefined2 local_14;
	undefined2 local_12;
	undefined2 local_10;
	
	local_10 = (undefined2)wParam3;
	local_14 = (undefined2)wParam1;
	local_12 = (undefined2)wParam2;
	local_18 = bCmd;
	local_17 = x;
	local_16 = y;
	NetSendLoPri__FPCUcUc(&local_18,'\n');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdParam1__FUcUcUs(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned short wParam1 /*$a2*/)
 // line 862, offset 0x8004898c
	/* begin block 1 */
		// Start line: 863
		// Start offset: 0x8004898C
		// Variables:
	// 		struct TCmdParam1 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x800489A8
	// End Line: 868

	/* begin block 2 */
		// Start line: 2020
	/* end block 2 */
	// End Line: 2021

void NetSendCmdParam1__FUcUcUs(uchar bHiPri,uchar bCmd,ushort wParam1)

{
	uchar local_10 [2];
	ushort local_e;
	
	local_10[0] = bCmd;
	local_e = wParam1;
	NetSendLoPri__FPCUcUc(local_10,'\x04');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned short wParam1 /*$a2*/, unsigned short wParam2 /*$a3*/)
 // line 873, offset 0x800489b8
	/* begin block 1 */
		// Start line: 874
		// Start offset: 0x800489B8
		// Variables:
	// 		struct TCmdParam2 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x800489D8
	// End Line: 880

	/* begin block 2 */
		// Start line: 2050
	/* end block 2 */
	// End Line: 2051

void NetSendCmdParam2__FUcUcUsUs(uchar bHiPri,uchar bCmd,ushort wParam1,ushort wParam2)

{
	uchar local_10 [2];
	ushort local_e;
	ushort local_c;
	
	local_10[0] = bCmd;
	local_e = wParam1;
	local_c = wParam2;
	NetSendLoPri__FPCUcUc(local_10,'\x06');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned short wParam1 /*$a2*/, unsigned short wParam2 /*$a3*/, int wParam3 /*stack 16*/)
 // line 884, offset 0x800489e8
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x800489E8
		// Variables:
	// 		struct TCmdParam3 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80048A10
	// End Line: 892

	/* begin block 2 */
		// Start line: 2082
	/* end block 2 */
	// End Line: 2083

void NetSendCmdParam3__FUcUcUsUsUs
							 (uchar bHiPri,uchar bCmd,ushort wParam1,ushort wParam2,int wParam3)

{
	uchar local_10 [2];
	ushort local_e;
	ushort local_c;
	undefined2 local_a;
	
	local_a = (undefined2)wParam3;
	local_10[0] = bCmd;
	local_e = wParam1;
	local_c = wParam2;
	NetSendLoPri__FPCUcUc(local_10,'\b');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdQuest__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char q /*$a1*/)
 // line 896, offset 0x80048a20
	/* begin block 1 */
		// Start line: 897
		// Start offset: 0x80048A20
		// Variables:
	// 		struct TCmdQuest cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80048A84
	// End Line: 905

	/* begin block 2 */
		// Start line: 2118
	/* end block 2 */
	// End Line: 2119

void NetSendCmdQuest__FUcUc(uchar bHiPri,uchar q)

{
	uint uVar1;
	uchar local_10;
	uchar local_f;
	uchar local_e;
	uchar local_d;
	uchar local_c;
	
	uVar1 = (uint)q;
	local_10 = 'X';
	local_e = (&quests)[uVar1]._qactive;
	local_d = (&quests)[uVar1]._qlog;
	local_c = (&quests)[uVar1]._qvar1;
	local_f = q;
	NetSendLoPri__FPCUcUc(&local_10,'\x05');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char mast /*$a2*/, unsigned char pnum /*$a3*/, int ii /*stack 16*/)
 // line 909, offset 0x80048a94
	/* begin block 1 */
		// Start line: 910
		// Start offset: 0x80048A94
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -40
	/* end block 1 */
	// End offset: 0x80048BB8
	// End Line: 956

	/* begin block 2 */
		// Start line: 2153
	/* end block 2 */
	// End Line: 2154

void NetSendCmdGItem__FUcUcUcUcUc(uchar bHiPri,uchar bCmd,uchar mast,uchar pnum,int ii)

{
	uint uVar1;
	uchar local_28;
	uchar local_27;
	uchar local_26;
	undefined local_25;
	uchar local_24;
	char local_23;
	char local_22;
	char local_21;
	undefined local_20;
	undefined local_1f;
	undefined local_1e;
	undefined local_1d;
	undefined2 local_1c;
	short local_1a;
	ushort local_18;
	int local_14;
	undefined4 local_10;
	
	uVar1 = ii & 0xff;
	local_10 = 0;
	local_25 = (undefined)ii;
	local_24 = currlevel;
	local_23 = item[uVar1]._ix;
	local_22 = item[uVar1]._iy;
	local_1a = item[uVar1].IDidx;
	local_18 = item[uVar1]._iCreateInfo;
	local_14 = item[uVar1]._iSeed;
	local_21 = item[uVar1]._iIdentified;
	local_20 = (undefined)item[uVar1]._iDurability;
	local_1f = (undefined)item[uVar1]._iMaxDur;
	local_1e = (undefined)item[uVar1]._iCharges;
	local_1d = (undefined)item[uVar1]._iMaxCharges;
	local_1c = (undefined2)item[uVar1]._ivalue;
	local_28 = bCmd;
	local_27 = mast;
	local_26 = pnum;
	NetSendLoPri__FPCUcUc(&local_28,'\x1c');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char mast /*$a2*/, unsigned char pnum /*$a3*/, struct TCmdGItem *p /*stack 16*/)
 // line 961, offset 0x80048bc8
	/* begin block 1 */
		// Start line: 962
		// Start offset: 0x80048BC8
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -40
	/* end block 1 */
	// End offset: 0x80048C34
	// End Line: 977

	/* begin block 2 */
		// Start line: 2272
	/* end block 2 */
	// End Line: 2273

/* WARNING: Could not reconcile some variable overlaps */

void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem
							 (uchar usonly,uchar bCmd,uchar mast,uchar pnum,TCmdGItem *p)

{
	uint local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	ulong local_14;
	undefined4 local_10;
	
	local_24 = *(undefined4 *)&p->bLevel;
	local_20 = *(undefined4 *)&p->bDur;
	local_1c = *(undefined4 *)&p->wValue;
	local_18 = *(undefined4 *)&p->wCI;
	local_14 = p->dwSeed;
	local_28._0_2_ = CONCAT11(mast,bCmd);
	local_28 = *(uint *)p & 0xff000000 | (uint)pnum << 0x10 | (uint)(ushort)local_28;
	if (usonly == '\0') {
		local_10 = 0;
		NetSendLoPri__FPCUcUc((uchar *)&local_28,'\x1c');
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd /*$a0*/, unsigned char mast /*$a1*/, unsigned char pnum /*$a2*/, struct TCmdGItem *p /*$a3*/)
 // line 992, offset 0x80048c44
	/* begin block 1 */
		// Start line: 993
		// Start offset: 0x80048C44
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -32
	/* end block 1 */
	// End offset: 0x80048C90
	// End Line: 1012

	/* begin block 2 */
		// Start line: 2345
	/* end block 2 */
	// End Line: 2346

uchar NetSendCmdReq2__FUcUcUcPC9TCmdGItem(uchar bCmd,uchar mast,uchar pnum,TCmdGItem *p)

{
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p /*$a0*/)
 // line 1018, offset 0x80048c9c
	/* begin block 1 */
		// Start line: 1019
		// Start offset: 0x80048C9C
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -40
	/* end block 1 */
	// End offset: 0x80048CF4
	// End Line: 1026

	/* begin block 2 */
		// Start line: 2410
	/* end block 2 */
	// End Line: 2411

void NetSendCmdExtra__FPC9TCmdGItem(TCmdGItem *p)

{
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	ulong local_14;
	undefined4 local_10;
	
	local_24 = *(undefined4 *)&p->bLevel;
	local_20 = *(undefined4 *)&p->bDur;
	local_1c = *(undefined4 *)&p->wValue;
	local_18 = *(undefined4 *)&p->wCI;
	local_14 = p->dwSeed;
	local_28 = CONCAT31((int3)((uint)*(undefined4 *)p >> 8),0x55);
	local_10 = 0;
	NetSendLoPri__FPCUcUc((uchar *)&local_28,'\x1c');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char x /*$a2*/, unsigned char y /*$a3*/)
 // line 1030, offset 0x80048d04
	/* begin block 1 */
		// Start line: 1031
		// Start offset: 0x80048D04
		// Variables:
	// 		struct TCmdPItem cmd; // stack offset -32
	/* end block 1 */
	// End offset: 0x80048DFC
	// End Line: 1074

	/* begin block 2 */
		// Start line: 2444
	/* end block 2 */
	// End Line: 2445

void NetSendCmdPItem__FUcUcUcUc(uchar bHiPri,uchar bCmd,uchar x,uchar y)

{
	uchar local_20;
	uchar local_1f;
	uchar local_1e;
	char local_1d;
	undefined local_1c;
	undefined local_1b;
	undefined local_1a;
	undefined local_19;
	undefined2 local_18;
	short local_16;
	ushort local_14;
	int local_10;
	
	local_16 = plr[myplr].HoldItem.IDidx;
	local_14 = plr[myplr].HoldItem._iCreateInfo;
	local_10 = plr[myplr].HoldItem._iSeed;
	local_1d = plr[myplr].HoldItem._iIdentified;
	local_1c = (undefined)plr[myplr].HoldItem._iDurability;
	local_1b = (undefined)plr[myplr].HoldItem._iMaxDur;
	local_1a = (undefined)plr[myplr].HoldItem._iCharges;
	local_19 = (undefined)plr[myplr].HoldItem._iMaxCharges;
	local_18 = (undefined2)plr[myplr].HoldItem._ivalue;
	local_20 = bCmd;
	local_1f = x;
	local_1e = y;
	NetSendLoPri__FPCUcUc(&local_20,'\x14');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdChItem__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char bLoc /*$a1*/)
 // line 1079, offset 0x80048e0c
	/* begin block 1 */
		// Start line: 1080
		// Start offset: 0x80048E0C
		// Variables:
	// 		struct TCmdChItem cmd; // stack offset -24
	/* end block 1 */
	// End offset: 0x80048EA0
	// End Line: 1091

	/* begin block 2 */
		// Start line: 2546
	/* end block 2 */
	// End Line: 2547

void NetSendCmdChItem__FUcUc(uchar bHiPri,uchar bLoc)

{
	uchar local_18;
	uchar local_17;
	short local_16;
	ushort local_14;
	int local_10;
	char local_c;
	
	local_18 = '0';
	local_16 = plr[myplr].HoldItem.IDidx;
	local_14 = plr[myplr].HoldItem._iCreateInfo;
	local_10 = plr[myplr].HoldItem._iSeed;
	local_c = plr[myplr].HoldItem._iIdentified;
	local_17 = bLoc;
	NetSendLoPri__FPCUcUc(&local_18,'\x10');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdDelItem__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char bLoc /*$a1*/)
 // line 1096, offset 0x80048eb0
	/* begin block 1 */
		// Start line: 1097
		// Start offset: 0x80048EB0
		// Variables:
	// 		struct TCmdDelItem cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80048ED0
	// End Line: 1102

	/* begin block 2 */
		// Start line: 2589
	/* end block 2 */
	// End Line: 2590

void NetSendCmdDelItem__FUcUc(uchar bHiPri,uchar bLoc)

{
	uchar local_10;
	uchar local_f;
	
	local_10 = '1';
	local_f = bLoc;
	NetSendLoPri__FPCUcUc(&local_10,'\x02');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdDItem__FUci(unsigned char bHiPri /*$a0*/, int ii /*$a1*/)
 // line 1107, offset 0x80048ee0
	/* begin block 1 */
		// Start line: 1108
		// Start offset: 0x80048EE0
		// Variables:
	// 		struct TCmdPItem cmd; // stack offset -32
	/* end block 1 */
	// End offset: 0x80048FE4
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2618
	/* end block 2 */
	// End Line: 2619

void NetSendCmdDItem__FUci(uchar bHiPri,int ii)

{
	uchar local_20;
	char local_1f;
	char local_1e;
	char local_1d;
	undefined local_1c;
	undefined local_1b;
	undefined local_1a;
	undefined local_19;
	undefined2 local_18;
	short local_16;
	ushort local_14;
	int local_10;
	
	local_20 = '4';
	local_1f = item[ii]._ix;
	local_1e = item[ii]._iy;
	local_16 = item[ii].IDidx;
	local_14 = item[ii]._iCreateInfo;
	local_10 = item[ii]._iSeed;
	local_1d = item[ii]._iIdentified;
	local_1c = (undefined)item[ii]._iDurability;
	local_1b = (undefined)item[ii]._iMaxDur;
	local_1a = (undefined)item[ii]._iCharges;
	local_19 = (undefined)item[ii]._iMaxCharges;
	local_18 = (undefined2)item[ii]._ivalue;
	NetSendLoPri__FPCUcUc(&local_20,'\x14');
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ i_own_level__Fi(int nReqLevel /*$a0*/)
 // line 1154, offset 0x80048ff4
	/* begin block 1 */
		// Start line: 1155
		// Start offset: 0x80048FF4
	/* end block 1 */
	// End offset: 0x80048FF4
	// End Line: 1171

	/* begin block 2 */
		// Start line: 2737
	/* end block 2 */
	// End Line: 2738

uchar i_own_level__Fi(int nReqLevel)

{
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdDamage__FUcUcUl(unsigned char bHiPri /*$a0*/, unsigned char bPlr /*$a1*/, unsigned long dwDam /*$a2*/)
 // line 1176, offset 0x80048ffc
	/* begin block 1 */
		// Start line: 1177
		// Start offset: 0x80048FFC
		// Variables:
	// 		struct TCmdDamage cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x80049020
	// End Line: 1185

	/* begin block 2 */
		// Start line: 2765
	/* end block 2 */
	// End Line: 2766

void NetSendCmdDamage__FUcUcUl(uchar bHiPri,uchar bPlr,ulong dwDam)

{
	uchar local_10;
	uchar local_f;
	ulong local_c;
	
	local_10 = '2';
	local_f = bPlr;
	local_c = dwDam;
	NetSendLoPri__FPCUcUc(&local_10,'\b');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_open_portal__FiUcUcUcUcUc(int pnum /*$a0*/, unsigned char x /*$a1*/, unsigned char y /*$a2*/, unsigned char bLevel /*$a3*/, int bLType /*stack 16*/, int bSetLvl /*stack 20*/)
 // line 1199, offset 0x80049030
	/* begin block 1 */
		// Start line: 1200
		// Start offset: 0x80049030
	/* end block 1 */
	// End offset: 0x80049084
	// End Line: 1211

	/* begin block 2 */
		// Start line: 2828
	/* end block 2 */
	// End Line: 2829

void delta_open_portal__FiUcUcUcUcUc(int pnum,uchar x,uchar y,uchar bLevel,int bLType,int bSetLvl)

{
	sgJunk.portal[pnum].x = x;
	sgJunk.portal[pnum].y = y;
	sgJunk.portal[pnum].level = bLevel;
	sgJunk.portal[pnum].ltype = (uchar)bLType;
	sgJunk.portal[pnum].setlvl = (uchar)bSetLvl;
	sgbDeltaChanged = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_close_portal__Fi(int pnum /*$a0*/)
 // line 1216, offset 0x8004908c
	/* begin block 1 */
		// Start line: 1217
		// Start offset: 0x8004908C
	/* end block 1 */
	// End offset: 0x800490BC
	// End Line: 1220

	/* begin block 2 */
		// Start line: 2862
	/* end block 2 */
	// End Line: 2863

void delta_close_portal__Fi(int pnum)

{
	memset(sgJunk.portal + pnum,0xff,5);
	sgbDeltaChanged = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ check_update_plr__Fi(int pnum /*$a0*/)
 // line 1225, offset 0x800490cc
	/* begin block 1 */
		// Start line: 1226
		// Start offset: 0x800490CC
	/* end block 1 */
	// End offset: 0x800490CC
	// End Line: 1230

	/* begin block 2 */
		// Start line: 2891
	/* end block 2 */
	// End Line: 2892

void check_update_plr__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_WALKXY__FPC4TCmdi(struct TCmd *pCmd /*$s2*/, int pnum /*$s0*/)
 // line 1245, offset 0x800490d4
	/* begin block 1 */
		// Start line: 1246
		// Start offset: 0x800490D4

		/* begin block 1.1 */
			// Start line: 1246
			// Start offset: 0x800490D4

			/* begin block 1.1.1 */
				// Start line: 1248
				// Start offset: 0x80049130
			/* end block 1.1.1 */
			// End offset: 0x8004915C
			// End Line: 1253
		/* end block 1.1 */
		// End offset: 0x8004915C
		// End Line: 1253
	/* end block 1 */
	// End offset: 0x8004915C
	// End Line: 1253

	/* begin block 2 */
		// Start line: 2922
	/* end block 2 */
	// End Line: 2923

void On_WALKXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		ClrPlrPath__Fi(pnum);
		MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\x01');
		plr[pnum].destAction = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$v1*/)
 // line 1261, offset 0x80049178
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x80049178
	/* end block 1 */
	// End offset: 0x80049198
	// End Line: 1275

	/* begin block 2 */
		// Start line: 2956
	/* end block 2 */
	// End Line: 2957

void On_ADDSTR__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (*(ushort *)(pCmd + 2) < 0x101) {
		ModifyPlrStr__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$v1*/)
 // line 1280, offset 0x800491a8
	/* begin block 1 */
		// Start line: 1281
		// Start offset: 0x800491A8
	/* end block 1 */
	// End offset: 0x800491C8
	// End Line: 1289

	/* begin block 2 */
		// Start line: 2997
	/* end block 2 */
	// End Line: 2998

void On_ADDMAG__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (*(ushort *)(pCmd + 2) < 0x101) {
		ModifyPlrMag__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$v1*/)
 // line 1293, offset 0x800491d8
	/* begin block 1 */
		// Start line: 1294
		// Start offset: 0x800491D8
	/* end block 1 */
	// End offset: 0x800491F8
	// End Line: 1306

	/* begin block 2 */
		// Start line: 3027
	/* end block 2 */
	// End Line: 3028

void On_ADDDEX__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (*(ushort *)(pCmd + 2) < 0x101) {
		ModifyPlrDex__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$v1*/)
 // line 1312, offset 0x80049208
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x80049208
	/* end block 1 */
	// End offset: 0x80049228
	// End Line: 1325

	/* begin block 2 */
		// Start line: 3073
	/* end block 2 */
	// End Line: 3074

void On_ADDVIT__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (*(ushort *)(pCmd + 2) < 0x101) {
		ModifyPlrVit__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 1331, offset 0x80049238
	/* begin block 1 */
		// Start line: 1332
		// Start offset: 0x80049238
	/* end block 1 */
	// End offset: 0x800492A4
	// End Line: 1338

	/* begin block 2 */
		// Start line: 3122
	/* end block 2 */
	// End Line: 3123

void On_SBSPELL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	
	uVar2 = *(undefined2 *)(pCmd + 2);
	cVar1 = plr[pnum]._pSBkSplType;
	plr[pnum]._pSplFrom = '\x01';
	plr[pnum].destAction = '\f';
	plr[pnum]._pSpell = (char)uVar2;
	plr[pnum]._pSplType = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1346, offset 0x800492ac
	/* begin block 1 */
		// Start line: 1347
		// Start offset: 0x800492AC

		/* begin block 1.1 */
			// Start line: 1347
			// Start offset: 0x800492AC

			/* begin block 1.1.1 */
				// Start line: 1349
				// Start offset: 0x80049308
			/* end block 1.1.1 */
			// End offset: 0x80049338
			// End Line: 1353
		/* end block 1.1 */
		// End offset: 0x80049338
		// End Line: 1353
	/* end block 1 */
	// End offset: 0x80049338
	// End Line: 1353

	/* begin block 2 */
		// Start line: 3152
	/* end block 2 */
	// End Line: 3153

void On_GOTOGETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\0');
		uVar1 = *(undefined2 *)(pCmd + 4);
		plr[pnum].destAction = '\x0f';
		plr[pnum].destParam1 = (char)uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a1*/)
 // line 1359, offset 0x80049350
	/* begin block 1 */
		// Start line: 1360
		// Start offset: 0x80049350

		/* begin block 1.1 */
			// Start line: 1360
			// Start offset: 0x80049350

			/* begin block 1.1.1 */
				// Start line: 1364
				// Start offset: 0x800493B4
				// Variables:
			// 		int ii; // $s2
			/* end block 1.1.1 */
			// End offset: 0x8004946C
			// End Line: 1393
		/* end block 1.1 */
		// End offset: 0x8004946C
		// End Line: 1393
	/* end block 1 */
	// End offset: 0x8004946C
	// End Line: 1393

	/* begin block 2 */
		// Start line: 3181
	/* end block 2 */
	// End Line: 3182

void On_REQUESTGITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte pnum_00;
	ushort uVar1;
	ushort ci;
	uchar uVar2;
	int ii;
	
	uVar2 = i_own_level__Fi(plr[pnum].plrlevel);
	if (uVar2 != '\0') {
		uVar1 = *(ushort *)(pCmd + 0xe);
		ci = *(ushort *)(pCmd + 0x10);
		ii = FindGetItem__FiUsi((uint)uVar1,ci,*(int *)(pCmd + 0x14));
		if (ii == -1) {
			uVar2 = NetSendCmdReq2__FUcUcUcPC9TCmdGItem('\'',(uchar)myplr,pCmd[2].bCmd,(TCmdGItem *)pCmd);
			if (uVar2 == '\0') {
				NetSendCmdExtra__FPC9TCmdGItem((TCmdGItem *)pCmd);
			}
		}
		else {
			pnum_00 = pCmd[2].bCmd;
			NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\0','\b',(uchar)myplr,pnum_00,(TCmdGItem *)pCmd);
			if ((uint)pnum_00 == myplr) {
				InvGetItem__Fii((uint)pnum_00,ii);
			}
			else {
				SyncGetItem__FiiiUsi
									((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)uVar1,ci,*(int *)(pCmd + 0x14));
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_GETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 1402, offset 0x80049490
	/* begin block 1 */
		// Start line: 1403
		// Start offset: 0x80049490
		// Variables:
	// 		struct TCmdGItem *p; // $s1
	// 		int nIndex; // $s5

		/* begin block 1.1 */
			// Start line: 1403
			// Start offset: 0x80049490

			/* begin block 1.1.1 */
				// Start line: 1413
				// Start offset: 0x800494EC

				/* begin block 1.1.1.1 */
					// Start line: 1417
					// Start offset: 0x800494EC

					/* begin block 1.1.1.1.1 */
						// Start line: 1418
						// Start offset: 0x80049518

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1419
							// Start offset: 0x80049518

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1424
								// Start offset: 0x80049530

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1424
									// Start offset: 0x80049530

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1425
										// Start offset: 0x80049540

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1426
											// Start offset: 0x80049540

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1427
												// Start offset: 0x80049548
												// Variables:
											// 		int hitem; // $a1
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800495D8
											// End Line: 1430
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800495F0
										// End Line: 1433
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800495F0
									// End Line: 1433
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80049600
								// End Line: 1436
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80049600
							// End Line: 1436
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80049600
						// End Line: 1436
					/* end block 1.1.1.1.1 */
					// End offset: 0x80049600
					// End Line: 1436
				/* end block 1.1.1.1 */
				// End offset: 0x80049600
				// End Line: 1436
			/* end block 1.1.1 */
			// End offset: 0x80049600
			// End Line: 1436
		/* end block 1.1 */
		// End offset: 0x80049638
		// End Line: 1440
	/* end block 1 */
	// End offset: 0x80049638
	// End Line: 1440

	/* begin block 2 */
		// Start line: 3270
	/* end block 2 */
	// End Line: 3271

void On_GETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar bLevel;
	ushort ci;
	uchar uVar1;
	int ii;
	uint pnum_00;
	uint idx;
	
	idx = (uint)*(ushort *)(pCmd + 0xe);
	ci = *(ushort *)(pCmd + 0x10);
	ii = FindGetItem__FiUsi(idx,ci,*(int *)(pCmd + 0x14));
	bLevel = pCmd[4].bCmd;
	uVar1 = delta_get_item__FPC9TCmdGItemUc((TCmdGItem *)pCmd,bLevel);
	if (uVar1 == '\0') {
		NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\x01','\b',pCmd[1].bCmd,pCmd[2].bCmd,(TCmdGItem *)pCmd)
		;
	}
	else {
		if (((currlevel == bLevel) || ((uint)pCmd[2].bCmd == myplr)) && ((uint)pCmd[1].bCmd != myplr)) {
			pnum_00 = (uint)pCmd[2].bCmd;
			if (pnum_00 == myplr) {
				if (currlevel == bLevel) {
					InvGetItem__Fii(pnum_00,ii);
				}
				else {
					ii = SyncPutItem__FiiiiUsiUciiiiiUl
												 (pnum_00,(int)plr[pnum_00]._px,(int)plr[pnum_00]._py,idx,(uint)ci,
													*(int *)(pCmd + 0x14),(uint)pCmd[7].bCmd,(uint)pCmd[8].bCmd,
													(uint)pCmd[9].bCmd,(uint)pCmd[10].bCmd,(uint)pCmd[0xb].bCmd,
													(uint)*(ushort *)(pCmd + 0xc),0);
					if (ii != -1) {
						InvGetItem__Fii(myplr,ii);
					}
				}
			}
			else {
				SyncGetItem__FiiiUsi((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,idx,ci,*(int *)(pCmd + 0x14));
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1448, offset 0x80049660
	/* begin block 1 */
		// Start line: 1449
		// Start offset: 0x80049660

		/* begin block 1.1 */
			// Start line: 1449
			// Start offset: 0x80049660

			/* begin block 1.1.1 */
				// Start line: 1451
				// Start offset: 0x800496BC
			/* end block 1.1.1 */
			// End offset: 0x800496EC
			// End Line: 1455
		/* end block 1.1 */
		// End offset: 0x800496EC
		// End Line: 1455
	/* end block 1 */
	// End offset: 0x800496EC
	// End Line: 1455

	/* begin block 2 */
		// Start line: 3379
	/* end block 2 */
	// End Line: 3380

void On_GOTOAGETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\0');
		uVar1 = *(undefined2 *)(pCmd + 4);
		plr[pnum].destAction = '\x10';
		plr[pnum].destParam1 = (char)uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a1*/)
 // line 1461, offset 0x80049704
	/* begin block 1 */
		// Start line: 1462
		// Start offset: 0x80049704

		/* begin block 1.1 */
			// Start line: 1462
			// Start offset: 0x80049704

			/* begin block 1.1.1 */
				// Start line: 1466
				// Start offset: 0x80049764
			/* end block 1.1.1 */
			// End offset: 0x80049818
			// End Line: 1496
		/* end block 1.1 */
		// End offset: 0x80049818
		// End Line: 1496
	/* end block 1 */
	// End offset: 0x80049818
	// End Line: 1496

	/* begin block 2 */
		// Start line: 3408
	/* end block 2 */
	// End Line: 3409

void On_REQUESTAGITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte pnum_00;
	ushort uVar1;
	ushort ci;
	uchar uVar2;
	int iVar3;
	
	uVar2 = i_own_level__Fi(plr[pnum].plrlevel);
	if (uVar2 != '\0') {
		uVar1 = *(ushort *)(pCmd + 0xe);
		ci = *(ushort *)(pCmd + 0x10);
		iVar3 = FindGetItem__FiUsi((uint)uVar1,ci,*(int *)(pCmd + 0x14));
		if (iVar3 == -1) {
			uVar2 = NetSendCmdReq2__FUcUcUcPC9TCmdGItem('(',(uchar)myplr,pCmd[2].bCmd,(TCmdGItem *)pCmd);
			if (uVar2 == '\0') {
				NetSendCmdExtra__FPC9TCmdGItem((TCmdGItem *)pCmd);
			}
		}
		else {
			pnum_00 = pCmd[2].bCmd;
			NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\0','\t',(uchar)myplr,pnum_00,(TCmdGItem *)pCmd);
			if ((uint)pnum_00 == myplr) {
				AutoGetItem__Fii((uint)pnum_00,(uint)pCmd[3].bCmd);
			}
			else {
				SyncGetItem__FiiiUsi
									((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)uVar1,ci,*(int *)(pCmd + 0x14));
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 1504, offset 0x80049838
	/* begin block 1 */
		// Start line: 1505
		// Start offset: 0x80049838
		// Variables:
	// 		struct TCmdGItem *p; // $s1

		/* begin block 1.1 */
			// Start line: 1505
			// Start offset: 0x80049838

			/* begin block 1.1.1 */
				// Start line: 1516
				// Start offset: 0x8004988C

				/* begin block 1.1.1.1 */
					// Start line: 1521
					// Start offset: 0x8004988C

					/* begin block 1.1.1.1.1 */
						// Start line: 1522
						// Start offset: 0x800498B8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1524
							// Start offset: 0x800498B8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1528
								// Start offset: 0x800498D0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1528
									// Start offset: 0x800498D0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1529
										// Start offset: 0x800498E0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1533
											// Start offset: 0x800498E0

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1534
												// Start offset: 0x800498E8
												// Variables:
											// 		int hitem; // $a1
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80049978
											// End Line: 1537
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80049990
										// End Line: 1540
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80049990
									// End Line: 1540
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800499A4
								// End Line: 1544
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800499A4
							// End Line: 1544
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800499A4
						// End Line: 1544
					/* end block 1.1.1.1.1 */
					// End offset: 0x800499A4
					// End Line: 1544
				/* end block 1.1.1.1 */
				// End offset: 0x800499A4
				// End Line: 1544
			/* end block 1.1.1 */
			// End offset: 0x800499A4
			// End Line: 1544
		/* end block 1.1 */
		// End offset: 0x800499DC
		// End Line: 1548
	/* end block 1 */
	// End offset: 0x800499DC
	// End Line: 1548

	/* begin block 2 */
		// Start line: 3497
	/* end block 2 */
	// End Line: 3498

void On_AGETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar bLevel;
	ushort ci;
	uchar uVar1;
	int ii;
	uint pnum_00;
	uint idx;
	
	idx = (uint)*(ushort *)(pCmd + 0xe);
	ci = *(ushort *)(pCmd + 0x10);
	FindGetItem__FiUsi(idx,ci,*(int *)(pCmd + 0x14));
	bLevel = pCmd[4].bCmd;
	uVar1 = delta_get_item__FPC9TCmdGItemUc((TCmdGItem *)pCmd,bLevel);
	if (uVar1 == '\0') {
		NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\x01','\t',pCmd[1].bCmd,pCmd[2].bCmd,(TCmdGItem *)pCmd)
		;
	}
	else {
		if (((currlevel == bLevel) || ((uint)pCmd[2].bCmd == myplr)) && ((uint)pCmd[1].bCmd != myplr)) {
			pnum_00 = (uint)pCmd[2].bCmd;
			if (pnum_00 == myplr) {
				if (currlevel == bLevel) {
					AutoGetItem__Fii(pnum_00,(uint)pCmd[3].bCmd);
				}
				else {
					ii = SyncPutItem__FiiiiUsiUciiiiiUl
												 (pnum_00,(int)plr[pnum_00]._px,(int)plr[pnum_00]._py,idx,(uint)ci,
													*(int *)(pCmd + 0x14),(uint)pCmd[7].bCmd,(uint)pCmd[8].bCmd,
													(uint)pCmd[9].bCmd,(uint)pCmd[10].bCmd,(uint)pCmd[0xb].bCmd,
													(uint)*(ushort *)(pCmd + 0xc),0);
					if (ii != -1) {
						AutoGetItem__Fii(myplr,ii);
					}
				}
			}
			else {
				SyncGetItem__FiiiUsi((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,idx,ci,*(int *)(pCmd + 0x14));
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1555, offset 0x80049a00
	/* begin block 1 */
		// Start line: 1556
		// Start offset: 0x80049A00
	/* end block 1 */
	// End offset: 0x80049A84
	// End Line: 1569

	/* begin block 2 */
		// Start line: 3611
	/* end block 2 */
	// End Line: 3612

void On_ITEMEXTRA__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	delta_get_item__FPC9TCmdGItemUc((TCmdGItem *)pCmd,pCmd[4].bCmd);
	if ((uint)currlevel == plr[pnum].plrlevel) {
		SyncGetItem__FiiiUsi
							((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)*(ushort *)(pCmd + 0xe),
							 *(ushort *)(pCmd + 0x10),*(int *)(pCmd + 0x14));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 1575, offset 0x80049a9c
	/* begin block 1 */
		// Start line: 1576
		// Start offset: 0x80049A9C
		// Variables:
	// 		struct TCmdPItem *p; // $s0

		/* begin block 1.1 */
			// Start line: 1576
			// Start offset: 0x80049A9C

			/* begin block 1.1.1 */
				// Start line: 1582
				// Start offset: 0x80049AF4
				// Variables:
			// 		int ii; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80049BEC
			// End Line: 1597
		/* end block 1.1 */
		// End offset: 0x80049BEC
		// End Line: 1597
	/* end block 1 */
	// End offset: 0x80049C34
	// End Line: 1607

	/* begin block 2 */
		// Start line: 3658
	/* end block 2 */
	// End Line: 3659

void On_PUTITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int iVar1;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		if (pnum == myplr) {
			iVar1 = InvPutItem__Fiii(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd);
		}
		else {
			iVar1 = SyncPutItem__FiiiiUsiUciiiiiUl
												(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 10),
												 (uint)*(ushort *)(pCmd + 0xc),*(int *)(pCmd + 0x10),(uint)pCmd[3].bCmd,
												 (uint)pCmd[4].bCmd,(uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)pCmd[7].bCmd
												 ,(uint)*(ushort *)(pCmd + 8),0);
		}
		if (iVar1 != -1) {
			delta_put_item__FPC9TCmdPItemiiUc
								((TCmdPItem *)pCmd,(int)item[iVar1]._ix,(int)item[iVar1]._iy,
								 *(uchar *)&plr[pnum].plrlevel);
			check_update_plr__Fi(pnum);
		}
	}
	delta_put_item__FPC9TCmdPItemiiUc
						((TCmdPItem *)pCmd,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,*(uchar *)&plr[pnum].plrlevel);
	check_update_plr__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$s1*/)
 // line 1615, offset 0x80049c4c
	/* begin block 1 */
		// Start line: 1616
		// Start offset: 0x80049C4C

		/* begin block 1.1 */
			// Start line: 1616
			// Start offset: 0x80049C4C

			/* begin block 1.1.1 */
				// Start line: 1621
				// Start offset: 0x80049CA8
				// Variables:
			// 		int ii; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80049D10
			// End Line: 1630
		/* end block 1.1 */
		// End offset: 0x80049D6C
		// End Line: 1642
	/* end block 1 */
	// End offset: 0x80049D6C
	// End Line: 1642

	/* begin block 2 */
		// Start line: 3743
	/* end block 2 */
	// End Line: 3744

void On_SYNCPUTITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int iVar1;
	uint x;
	uint y;
	uchar bLevel;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		iVar1 = SyncPutItem__FiiiiUsiUciiiiiUl
											(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 10),
											 (uint)*(ushort *)(pCmd + 0xc),*(int *)(pCmd + 0x10),(uint)pCmd[3].bCmd,
											 (uint)pCmd[4].bCmd,(uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)pCmd[7].bCmd,
											 (uint)*(ushort *)(pCmd + 8),0);
		if (iVar1 == -1) {
			return;
		}
		x = SEXT14(item[iVar1]._ix);
		y = SEXT14(item[iVar1]._iy);
		bLevel = *(uchar *)&plr[pnum].plrlevel;
	}
	else {
		x = (uint)pCmd[1].bCmd;
		y = (uint)pCmd[2].bCmd;
		bLevel = (uchar)plr[pnum].plrlevel;
	}
	delta_put_item__FPC9TCmdPItemiiUc((TCmdPItem *)pCmd,x,y,bLevel);
	check_update_plr__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 1650, offset 0x80049d88
	/* begin block 1 */
		// Start line: 1651
		// Start offset: 0x80049D88
		// Variables:
	// 		struct TCmdPItem *p; // $s0
	/* end block 1 */
	// End offset: 0x80049E88
	// End Line: 1661

	/* begin block 2 */
		// Start line: 3821
	/* end block 2 */
	// End Line: 3822

void On_RESPAWNITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (((uint)currlevel == plr[pnum].plrlevel) && (pnum != myplr)) {
		SyncPutItem__FiiiiUsiUciiiiiUl
							(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 10),
							 (uint)*(ushort *)(pCmd + 0xc),*(int *)(pCmd + 0x10),(uint)pCmd[3].bCmd,
							 (uint)pCmd[4].bCmd,(uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)pCmd[7].bCmd,
							 (uint)*(ushort *)(pCmd + 8),0);
	}
	delta_put_item__FPC9TCmdPItemiiUc
						((TCmdPItem *)pCmd,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1667, offset 0x80049ea0
	/* begin block 1 */
		// Start line: 1668
		// Start offset: 0x80049EA0

		/* begin block 1.1 */
			// Start line: 1668
			// Start offset: 0x80049EA0

			/* begin block 1.1.1 */
				// Start line: 1670
				// Start offset: 0x80049EFC
			/* end block 1.1.1 */
			// End offset: 0x80049F34
			// End Line: 1676
		/* end block 1.1 */
		// End offset: 0x80049F34
		// End Line: 1676
	/* end block 1 */
	// End offset: 0x80049F34
	// End Line: 1676

	/* begin block 2 */
		// Start line: 3858
	/* end block 2 */
	// End Line: 3859

void On_SATTACKXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		ClrPlrPath__Fi(pnum);
		uVar1 = pCmd[1].bCmd;
		uVar2 = pCmd[2].bCmd;
		plr[pnum].destAction = '\t';
		plr[pnum].destParam1 = uVar1;
		plr[pnum].destParam2 = uVar2;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd /*$s2*/, int pnum /*$a0*/)
 // line 1682, offset 0x80049f4c
	/* begin block 1 */
		// Start line: 1683
		// Start offset: 0x80049F4C

		/* begin block 1.1 */
			// Start line: 1683
			// Start offset: 0x80049F4C

			/* begin block 1.1.1 */
				// Start line: 1685
				// Start offset: 0x80049FAC
			/* end block 1.1.1 */
			// End offset: 0x8004A038
			// End Line: 1699
		/* end block 1.1 */
		// End offset: 0x8004A038
		// End Line: 1699
	/* end block 1 */
	// End offset: 0x8004A038
	// End Line: 1699

	/* begin block 2 */
		// Start line: 3892
	/* end block 2 */
	// End Line: 3893

void On_SPELLXYD__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	undefined2 uVar4;
	undefined2 uVar5;
	undefined2 uVar6;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar4 = *(undefined2 *)(pCmd + 4);
		ClrPlrPath__Fi(pnum);
		uVar1 = pCmd[1].bCmd;
		uVar2 = pCmd[2].bCmd;
		uVar5 = *(undefined2 *)(pCmd + 6);
		uVar6 = *(undefined2 *)(pCmd + 8);
		cVar3 = plr[pnum]._pRSplType;
		plr[pnum].destAction = '\x1a';
		plr[pnum]._pSplFrom = '\0';
		plr[pnum].destParam1 = uVar1;
		plr[pnum].destParam2 = uVar2;
		plr[pnum].destParam3 = (char)uVar5;
		plr[pnum].destParam4 = (char)uVar6;
		plr[pnum]._pSpell = (char)uVar4;
		plr[pnum]._pSplType = cVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd /*$s2*/, int pnum /*$a0*/)
 // line 1706, offset 0x8004a054
	/* begin block 1 */
		// Start line: 1707
		// Start offset: 0x8004A054

		/* begin block 1.1 */
			// Start line: 1707
			// Start offset: 0x8004A054

			/* begin block 1.1.1 */
				// Start line: 1709
				// Start offset: 0x8004A0B4
			/* end block 1.1.1 */
			// End offset: 0x8004A130
			// End Line: 1722
		/* end block 1.1 */
		// End offset: 0x8004A130
		// End Line: 1722
	/* end block 1 */
	// End offset: 0x8004A130
	// End Line: 1722

	/* begin block 2 */
		// Start line: 3954
	/* end block 2 */
	// End Line: 3955

void On_SPELLXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	undefined2 uVar4;
	undefined2 uVar5;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar4 = *(undefined2 *)(pCmd + 4);
		ClrPlrPath__Fi(pnum);
		uVar1 = pCmd[1].bCmd;
		uVar2 = pCmd[2].bCmd;
		uVar5 = *(undefined2 *)(pCmd + 6);
		cVar3 = plr[pnum]._pRSplType;
		plr[pnum].destAction = '\f';
		plr[pnum]._pSplFrom = '\0';
		plr[pnum].destParam1 = uVar1;
		plr[pnum].destParam2 = uVar2;
		plr[pnum].destParam3 = (char)uVar5;
		plr[pnum]._pSpell = (char)uVar4;
		plr[pnum]._pSplType = cVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd /*$s2*/, int pnum /*$a0*/)
 // line 1728, offset 0x8004a14c
	/* begin block 1 */
		// Start line: 1729
		// Start offset: 0x8004A14C

		/* begin block 1.1 */
			// Start line: 1729
			// Start offset: 0x8004A14C

			/* begin block 1.1.1 */
				// Start line: 1731
				// Start offset: 0x8004A1AC
			/* end block 1.1.1 */
			// End offset: 0x8004A22C
			// End Line: 1744
		/* end block 1.1 */
		// End offset: 0x8004A22C
		// End Line: 1744
	/* end block 1 */
	// End offset: 0x8004A22C
	// End Line: 1744

	/* begin block 2 */
		// Start line: 4010
	/* end block 2 */
	// End Line: 4011

void On_TSPELLXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	undefined2 uVar4;
	undefined2 uVar5;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar4 = *(undefined2 *)(pCmd + 4);
		ClrPlrPath__Fi(pnum);
		uVar1 = pCmd[1].bCmd;
		uVar2 = pCmd[2].bCmd;
		uVar5 = *(undefined2 *)(pCmd + 6);
		cVar3 = plr[pnum]._pTSplType;
		plr[pnum].destAction = '\f';
		plr[pnum]._pSplFrom = '\x02';
		plr[pnum].destParam1 = uVar1;
		plr[pnum].destParam2 = uVar2;
		plr[pnum].destParam3 = (char)uVar5;
		plr[pnum]._pSpell = (char)uVar4;
		plr[pnum]._pSplType = cVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 1750, offset 0x8004a248
	/* begin block 1 */
		// Start line: 1751
		// Start offset: 0x8004A248

		/* begin block 1.1 */
			// Start line: 1751
			// Start offset: 0x8004A248

			/* begin block 1.1.1 */
				// Start line: 1753
				// Start offset: 0x8004A2A0
				// Variables:
			// 		struct TCmdLocParam1 *p; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8004A358
			// End Line: 1762
		/* end block 1.1 */
		// End offset: 0x8004A358
		// End Line: 1762
	/* end block 1 */
	// End offset: 0x8004A358
	// End Line: 1762

	/* begin block 2 */
		// Start line: 4066
	/* end block 2 */
	// End Line: 4067

void On_OPOBJXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	uchar endspace;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		if ((object[(uint)*(ushort *)(pCmd + 4)]._oSolidFlag == '\0') &&
			 (object[(uint)*(ushort *)(pCmd + 4)]._oDoorFlag == '\0')) {
			bVar1 = pCmd[1].bCmd;
			bVar2 = pCmd[2].bCmd;
			endspace = '\x01';
		}
		else {
			bVar1 = pCmd[1].bCmd;
			bVar2 = pCmd[2].bCmd;
			endspace = '\0';
		}
		MakePlrPath__FiiiUc(pnum,(uint)bVar1,(uint)bVar2,endspace);
		uVar3 = *(undefined2 *)(pCmd + 4);
		plr[pnum].destAction = '\r';
		plr[pnum].destParam1 = (char)uVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 1768, offset 0x8004a370
	/* begin block 1 */
		// Start line: 1769
		// Start offset: 0x8004A370

		/* begin block 1.1 */
			// Start line: 1769
			// Start offset: 0x8004A370

			/* begin block 1.1.1 */
				// Start line: 1771
				// Start offset: 0x8004A3C8
				// Variables:
			// 		struct TCmdLocParam1 *p; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8004A480
			// End Line: 1780
		/* end block 1.1 */
		// End offset: 0x8004A480
		// End Line: 1780
	/* end block 1 */
	// End offset: 0x8004A480
	// End Line: 1780

	/* begin block 2 */
		// Start line: 4104
	/* end block 2 */
	// End Line: 4105

void On_DISARMXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	uchar endspace;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		if ((object[(uint)*(ushort *)(pCmd + 4)]._oSolidFlag == '\0') &&
			 (object[(uint)*(ushort *)(pCmd + 4)]._oDoorFlag == '\0')) {
			bVar1 = pCmd[1].bCmd;
			bVar2 = pCmd[2].bCmd;
			endspace = '\x01';
		}
		else {
			bVar1 = pCmd[1].bCmd;
			bVar2 = pCmd[2].bCmd;
			endspace = '\0';
		}
		MakePlrPath__FiiiUc(pnum,(uint)bVar1,(uint)bVar2,endspace);
		uVar3 = *(undefined2 *)(pCmd + 4);
		plr[pnum].destAction = '\x0e';
		plr[pnum].destParam1 = (char)uVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 1787, offset 0x8004a498
	/* begin block 1 */
		// Start line: 1788
		// Start offset: 0x8004A498

		/* begin block 1.1 */
			// Start line: 1789
			// Start offset: 0x8004A498

			/* begin block 1.1.1 */
				// Start line: 1790
				// Start offset: 0x8004A4DC
			/* end block 1.1.1 */
			// End offset: 0x8004A4F8
			// End Line: 1794
		/* end block 1.1 */
		// End offset: 0x8004A4F8
		// End Line: 1794
	/* end block 1 */
	// End offset: 0x8004A4F8
	// End Line: 1794

	/* begin block 2 */
		// Start line: 4145
	/* end block 2 */
	// End Line: 4146

void On_OPOBJT__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar1 = *(undefined2 *)(pCmd + 2);
		plr[pnum].destAction = '\x12';
		plr[pnum].destParam1 = (char)uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 1800, offset 0x8004a500
	/* begin block 1 */
		// Start line: 1801
		// Start offset: 0x8004A500

		/* begin block 1.1 */
			// Start line: 1801
			// Start offset: 0x8004A500

			/* begin block 1.1.1 */
				// Start line: 1803
				// Start offset: 0x8004A560
				// Variables:
			// 		struct TCmdParam1 *p; // $s3
			// 		int dx; // $s0
			// 		int dy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8004A634
			// End Line: 1813
		/* end block 1.1 */
		// End offset: 0x8004A634
		// End Line: 1813
	/* end block 1 */
	// End offset: 0x8004A634
	// End Line: 1813

	/* begin block 2 */
		// Start line: 4171
	/* end block 2 */
	// End Line: 4172

void On_ATTACKID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar4 = (uint)*(ushort *)(pCmd + 2);
		iVar2 = abs((int)plr[pnum]._px - (int)monster[uVar4]._mfutx);
		iVar3 = abs((int)plr[pnum]._py - (int)monster[uVar4]._mfuty);
		if ((1 < iVar2) || (1 < iVar3)) {
			MakePlrPath__FiiiUc(pnum,(int)monster[uVar4]._mfutx,(int)monster[uVar4]._mfuty,'\0');
		}
		uVar1 = *(undefined2 *)(pCmd + 2);
		plr[pnum].destAction = '\x14';
		plr[pnum].destParam1 = (char)uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLID__FPC4TCmdi(struct TCmd *pCmd /*$s2*/, int pnum /*$a0*/)
 // line 1819, offset 0x8004a654
	/* begin block 1 */
		// Start line: 1820
		// Start offset: 0x8004A654

		/* begin block 1.1 */
			// Start line: 1820
			// Start offset: 0x8004A654

			/* begin block 1.1.1 */
				// Start line: 1822
				// Start offset: 0x8004A6B4
			/* end block 1.1.1 */
			// End offset: 0x8004A720
			// End Line: 1834
		/* end block 1.1 */
		// End offset: 0x8004A720
		// End Line: 1834
	/* end block 1 */
	// End offset: 0x8004A720
	// End Line: 1834

	/* begin block 2 */
		// Start line: 4213
	/* end block 2 */
	// End Line: 4214

void On_SPELLID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar2 = *(undefined2 *)(pCmd + 4);
		ClrPlrPath__Fi(pnum);
		uVar3 = *(undefined2 *)(pCmd + 2);
		uVar4 = *(undefined2 *)(pCmd + 6);
		cVar1 = plr[pnum]._pRSplType;
		plr[pnum].destAction = '\x18';
		plr[pnum]._pSplFrom = '\0';
		plr[pnum].destParam1 = (char)uVar3;
		plr[pnum].destParam2 = (char)uVar4;
		plr[pnum]._pSpell = (char)uVar2;
		plr[pnum]._pSplType = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1840, offset 0x8004a73c
	/* begin block 1 */
		// Start line: 1841
		// Start offset: 0x8004A73C

		/* begin block 1.1 */
			// Start line: 1841
			// Start offset: 0x8004A73C

			/* begin block 1.1.1 */
				// Start line: 1843
				// Start offset: 0x8004A798
			/* end block 1.1.1 */
			// End offset: 0x8004A804
			// End Line: 1852
		/* end block 1.1 */
		// End offset: 0x8004A804
		// End Line: 1852
	/* end block 1 */
	// End offset: 0x8004A804
	// End Line: 1852

	/* begin block 2 */
		// Start line: 4265
	/* end block 2 */
	// End Line: 4266

void On_SPELLPID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		ClrPlrPath__Fi(pnum);
		uVar2 = *(undefined2 *)(pCmd + 2);
		uVar3 = *(undefined2 *)(pCmd + 6);
		uVar4 = *(undefined2 *)(pCmd + 4);
		cVar1 = plr[pnum]._pRSplType;
		plr[pnum].destAction = '\x19';
		plr[pnum]._pSplFrom = '\0';
		plr[pnum].destParam1 = (char)uVar2;
		plr[pnum].destParam2 = (char)uVar3;
		plr[pnum]._pSpell = (char)uVar4;
		plr[pnum]._pSplType = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1859, offset 0x8004a81c
	/* begin block 1 */
		// Start line: 1860
		// Start offset: 0x8004A81C

		/* begin block 1.1 */
			// Start line: 1860
			// Start offset: 0x8004A81C

			/* begin block 1.1.1 */
				// Start line: 1862
				// Start offset: 0x8004A878
			/* end block 1.1.1 */
			// End offset: 0x8004A8E8
			// End Line: 1870
		/* end block 1.1 */
		// End offset: 0x8004A8E8
		// End Line: 1870
	/* end block 1 */
	// End offset: 0x8004A8E8
	// End Line: 1870

	/* begin block 2 */
		// Start line: 4313
	/* end block 2 */
	// End Line: 4314

void On_TSPELLID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		ClrPlrPath__Fi(pnum);
		uVar2 = *(undefined2 *)(pCmd + 2);
		uVar3 = *(undefined2 *)(pCmd + 6);
		uVar4 = *(undefined2 *)(pCmd + 4);
		cVar1 = plr[pnum]._pTSplType;
		plr[pnum].destAction = '\x18';
		plr[pnum]._pSplFrom = '\x02';
		plr[pnum].destParam1 = (char)uVar2;
		plr[pnum].destParam2 = (char)uVar3;
		plr[pnum]._pSpell = (char)uVar4;
		plr[pnum]._pSplType = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1876, offset 0x8004a900
	/* begin block 1 */
		// Start line: 1877
		// Start offset: 0x8004A900

		/* begin block 1.1 */
			// Start line: 1877
			// Start offset: 0x8004A900

			/* begin block 1.1.1 */
				// Start line: 1879
				// Start offset: 0x8004A95C
			/* end block 1.1.1 */
			// End offset: 0x8004A9CC
			// End Line: 1888
		/* end block 1.1 */
		// End offset: 0x8004A9CC
		// End Line: 1888
	/* end block 1 */
	// End offset: 0x8004A9CC
	// End Line: 1888

	/* begin block 2 */
		// Start line: 4357
	/* end block 2 */
	// End Line: 4358

void On_TSPELLPID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		ClrPlrPath__Fi(pnum);
		uVar2 = *(undefined2 *)(pCmd + 2);
		uVar3 = *(undefined2 *)(pCmd + 6);
		uVar4 = *(undefined2 *)(pCmd + 4);
		cVar1 = plr[pnum]._pTSplType;
		plr[pnum].destAction = '\x19';
		plr[pnum]._pSplFrom = '\x02';
		plr[pnum].destParam1 = (char)uVar2;
		plr[pnum].destParam2 = (char)uVar3;
		plr[pnum]._pSpell = (char)uVar4;
		plr[pnum]._pSplType = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 1894, offset 0x8004a9e4
	/* begin block 1 */
		// Start line: 1895
		// Start offset: 0x8004A9E4
	/* end block 1 */
	// End offset: 0x8004AA58
	// End Line: 1901

	/* begin block 2 */
		// Start line: 4403
	/* end block 2 */
	// End Line: 4404

void On_KNOCKBACK__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ushort uVar1;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		uVar1 = *(ushort *)(pCmd + 2);
		M_GetKnockback__Fi((uint)uVar1);
		M_StartHit__Fiii((uint)uVar1,pnum,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 1907, offset 0x8004aa70
	/* begin block 1 */
		// Start line: 1908
		// Start offset: 0x8004AA70
	/* end block 1 */
	// End offset: 0x8004AA94
	// End Line: 1912

	/* begin block 2 */
		// Start line: 4432
	/* end block 2 */
	// End Line: 4433

void On_RESURRECT__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	DoResurrect__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	check_update_plr__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd /*$a2*/, int pnum /*$a0*/)
 // line 1917, offset 0x8004aaa8
	/* begin block 1 */
		// Start line: 1918
		// Start offset: 0x8004AAA8

		/* begin block 1.1 */
			// Start line: 1918
			// Start offset: 0x8004AAA8

			/* begin block 1.1.1 */
				// Start line: 1920
				// Start offset: 0x8004AAFC
			/* end block 1.1.1 */
			// End offset: 0x8004AB08
			// End Line: 1922
		/* end block 1.1 */
		// End offset: 0x8004AB08
		// End Line: 1922
	/* end block 1 */
	// End offset: 0x8004AB08
	// End Line: 1922

	/* begin block 2 */
		// Start line: 4454
	/* end block 2 */
	// End Line: 4455

void On_HEALOTHER__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		DoHealOther__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TALKXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 1928, offset 0x8004ab18
	/* begin block 1 */
		// Start line: 1929
		// Start offset: 0x8004AB18

		/* begin block 1.1 */
			// Start line: 1929
			// Start offset: 0x8004AB18

			/* begin block 1.1.1 */
				// Start line: 1931
				// Start offset: 0x8004AB74
			/* end block 1.1.1 */
			// End offset: 0x8004ABA4
			// End Line: 1936
		/* end block 1.1 */
		// End offset: 0x8004ABA4
		// End Line: 1936
	/* end block 1 */
	// End offset: 0x8004ABA4
	// End Line: 1936

	/* begin block 2 */
		// Start line: 4477
	/* end block 2 */
	// End Line: 4478

void On_TALKXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\0');
		uVar1 = *(undefined2 *)(pCmd + 4);
		plr[pnum].destAction = '\x11';
		plr[pnum].destParam1 = (char)uVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$v1*/)
 // line 1943, offset 0x8004abbc
	/* begin block 1 */
		// Start line: 1944
		// Start offset: 0x8004ABBC

		/* begin block 1.1 */
			// Start line: 1944
			// Start offset: 0x8004ABBC

			/* begin block 1.1.1 */
				// Start line: 1946
				// Start offset: 0x8004ABD4
			/* end block 1.1.1 */
			// End offset: 0x8004ABE4
			// End Line: 1948
		/* end block 1.1 */
		// End offset: 0x8004ABE4
		// End Line: 1948
	/* end block 1 */
	// End offset: 0x8004ABE4
	// End Line: 1948

	/* begin block 2 */
		// Start line: 4510
	/* end block 2 */
	// End Line: 4511

void On_NEWLVL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum != myplr) {
		StartNewLvl__Fiii(pnum,(uint)*(ushort *)(pCmd + 2),(uint)*(ushort *)(pCmd + 4));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_WARP__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 1954, offset 0x8004abf4
	/* begin block 1 */
		// Start line: 1955
		// Start offset: 0x8004ABF4
	/* end block 1 */
	// End offset: 0x8004ACC4
	// End Line: 1964

	/* begin block 2 */
		// Start line: 4533
	/* end block 2 */
	// End Line: 4534

void On_WARP__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	StartWarpLvl__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	if ((pnum == myplr) && (0xb < _pcurs[pnum])) {
		pIVar6 = &plr[pnum].HoldItem;
		pIVar1 = &ItemStruct_800c5ee0;
		do {
			pIVar7 = pIVar1;
			pIVar5 = pIVar6;
			iVar2 = pIVar5->_iVMult1;
			iVar3 = pIVar5->_iVAdd2;
			iVar4 = pIVar5->_iVMult2;
			pIVar7->_iVAdd1 = pIVar5->_iVAdd1;
			pIVar7->_iVMult1 = iVar2;
			pIVar7->_iVAdd2 = iVar3;
			pIVar7->_iVMult2 = iVar4;
			pIVar6 = (ItemStruct *)&pIVar5->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
		} while (pIVar6 != (ItemStruct *)&plr[pnum].HoldItem._iMinMag);
		iVar2 = pIVar5->_ivalue;
		((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar6->_iVAdd1;
		pIVar7->_ivalue = iVar2;
		AutoGetItem__Fii(myplr,0x7f);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd /*$v1*/, int pnum /*$a1*/)
 // line 1971, offset 0x8004acd8
	/* begin block 1 */
		// Start line: 1972
		// Start offset: 0x8004ACD8

		/* begin block 1.1 */
			// Start line: 1972
			// Start offset: 0x8004ACD8

			/* begin block 1.1.1 */
				// Start line: 1974
				// Start offset: 0x8004ACF0
			/* end block 1.1.1 */
			// End offset: 0x8004AD34
			// End Line: 1978
		/* end block 1.1 */
		// End offset: 0x8004AD34
		// End Line: 1978
	/* end block 1 */
	// End offset: 0x8004AD34
	// End Line: 1978

	/* begin block 2 */
		// Start line: 4570
	/* end block 2 */
	// End Line: 4571

void On_MONSTDEATH__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum != myplr) {
		delta_kill_monster__FiUcUcUc
							((uint)*(ushort *)(pCmd + 4),pCmd[1].bCmd,pCmd[2].bCmd,*(uchar *)&plr[pnum].plrlevel);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd /*$v1*/, int pnum /*$a0*/)
 // line 1984, offset 0x8004ad44
	/* begin block 1 */
		// Start line: 1985
		// Start offset: 0x8004AD44

		/* begin block 1.1 */
			// Start line: 1985
			// Start offset: 0x8004AD44

			/* begin block 1.1.1 */
				// Start line: 1987
				// Start offset: 0x8004AD60
			/* end block 1.1.1 */
			// End offset: 0x8004ADA0
			// End Line: 1991
		/* end block 1.1 */
		// End offset: 0x8004ADA0
		// End Line: 1991
	/* end block 1 */
	// End offset: 0x8004ADA0
	// End Line: 1991

	/* begin block 2 */
		// Start line: 4597
	/* end block 2 */
	// End Line: 4598

void On_KILLGOLEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum != myplr) {
		delta_kill_monster__FiUcUcUc(pnum,pCmd[1].bCmd,pCmd[2].bCmd,*(uchar *)&plr[pnum].plrlevel);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd /*$t1*/, int pnum /*$a3*/)
 // line 1997, offset 0x8004adb0
	/* begin block 1 */
		// Start line: 1998
		// Start offset: 0x8004ADB0

		/* begin block 1.1 */
			// Start line: 1998
			// Start offset: 0x8004ADB0

			/* begin block 1.1.1 */
				// Start line: 2002
				// Start offset: 0x8004AE14

				/* begin block 1.1.1.1 */
					// Start line: 2003
					// Start offset: 0x8004AE14

					/* begin block 1.1.1.1.1 */
						// Start line: 2004
						// Start offset: 0x8004AE28
						// Variables:
					// 		unsigned char addok; // $a2

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2005
							// Start offset: 0x8004AE28
							// Variables:
						// 		int i; // $a1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2007
								// Start offset: 0x8004AE40
								// Variables:
							// 		int mi; // $v0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8004AE94
							// End Line: 2012
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8004AEA0
						// End Line: 2013
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004AF10
					// End Line: 2018
				/* end block 1.1.1.1 */
				// End offset: 0x8004AF10
				// End Line: 2018
			/* end block 1.1.1 */
			// End offset: 0x8004AF10
			// End Line: 2018
		/* end block 1.1 */
		// End offset: 0x8004AF10
		// End Line: 2018
	/* end block 1 */
	// End offset: 0x8004AF10
	// End Line: 2018

	/* begin block 2 */
		// Start line: 4624
	/* end block 2 */
	// End Line: 4625

void On_AWAKEGOLEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	bool bVar1;
	int *piVar2;
	int iVar3;
	
	if ((uint)currlevel == plr[pnum].plrlevel) {
		bVar1 = true;
		if (pnum != myplr) {
			iVar3 = 0;
			piVar2 = &missileactive;
			while (iVar3 < nummissiles) {
				if ((missile[*piVar2]._mitype == '!') && ((int)missile[*piVar2]._misource == pnum)) {
					bVar1 = false;
				}
				piVar2 = piVar2 + 1;
				iVar3 = iVar3 + 1;
			}
			if (bVar1) {
				AddMissile__Fiiiiiiciii
									((int)plr[pnum]._px,(int)plr[pnum]._py,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,
									 (uint)pCmd[3].bCmd,0x21,0,pnum,0,1);
			}
		}
	}
	else {
		delta_sync_golem__FPC9TCmdGolemiUc((TCmdGolem *)pCmd,pnum,pCmd[5].bCmd);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd /*$t1*/, int pnum /*$a1*/)
 // line 2026, offset 0x8004af20
	/* begin block 1 */
		// Start line: 2027
		// Start offset: 0x8004AF20

		/* begin block 1.1 */
			// Start line: 2027
			// Start offset: 0x8004AF20

			/* begin block 1.1.1 */
				// Start line: 2029
				// Start offset: 0x8004AF38
			/* end block 1.1.1 */
			// End offset: 0x8004B014
			// End Line: 2047
		/* end block 1.1 */
		// End offset: 0x8004B014
		// End Line: 2047
	/* end block 1 */
	// End offset: 0x8004B014
	// End Line: 2047

	/* begin block 2 */
		// Start line: 4683
	/* end block 2 */
	// End Line: 4684

void On_MONSTDAMAGE__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	short sVar1;
	int iVar2;
	uint mi;
	
	if ((pnum != myplr) && ((uint)currlevel == plr[pnum].plrlevel)) {
		mi = (uint)*(ushort *)(pCmd + 2);
		sVar1 = monster[mi]._mhitpoints;
		monster[mi].mWhoHit = monster[mi].mWhoHit | (byte)(1 << (pnum & 0x1fU));
		if ((int)sVar1 != 0) {
			iVar2 = (int)sVar1 - (uint)*(ushort *)(pCmd + 4);
			monster[mi]._mhitpoints = (short)iVar2;
			if (iVar2 * 0x10000 >> 0x16 < 1) {
				monster[mi]._mhitpoints = 0x40;
			}
			delta_monster_hp__FilUc(mi,(int)monster[mi]._mhitpoints,*(uchar *)&plr[pnum].plrlevel);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd /*$v1*/, int pnum /*$a0*/)
 // line 2056, offset 0x8004b024
	/* begin block 1 */
		// Start line: 2057
		// Start offset: 0x8004B024

		/* begin block 1.1 */
			// Start line: 2057
			// Start offset: 0x8004B024

			/* begin block 1.1.1 */
				// Start line: 2059
				// Start offset: 0x8004B040
			/* end block 1.1.1 */
			// End offset: 0x8004B040
			// End Line: 2061
		/* end block 1.1 */
		// End offset: 0x8004B05C
		// End Line: 2064
	/* end block 1 */
	// End offset: 0x8004B05C
	// End Line: 2064

	/* begin block 2 */
		// Start line: 4746
	/* end block 2 */
	// End Line: 4747

void On_PLRDEAD__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum == myplr) {
		check_update_plr__Fi(pnum);
	}
	else {
		SyncPlrKill__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2070, offset 0x8004b06c
	/* begin block 1 */
		// Start line: 2071
		// Start offset: 0x8004B06C
	/* end block 1 */
	// End offset: 0x8004B218
	// End Line: 2118

	/* begin block 2 */
		// Start line: 4779
	/* end block 2 */
	// End Line: 4780

void On_PLRDAMAGE__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	long lVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	
	uVar4 = (uint)pCmd[1].bCmd;
	if ((((uVar4 == myplr) && (currlevel != '\0')) && (gbBufferMsgs != '\x01')) &&
		 ((((uint)currlevel == plr[pnum].plrlevel && (uVar3 = *(uint *)(pCmd + 4), uVar3 < 0x2ee01)) &&
			(0 < plr[uVar4]._pHitPoints >> 6)))) {
		iVar5 = plr[uVar4]._pMaxHP;
		drawhpflag = '\x01';
		plr[uVar4]._pHitPoints = plr[uVar4]._pHitPoints - uVar3;
		iVar2 = plr[uVar4]._pHitPoints;
		plr[uVar4]._pHPBase = plr[uVar4]._pHPBase - uVar3;
		if (iVar5 < iVar2) {
			lVar1 = plr[uVar4]._pMaxHPBase;
			plr[uVar4]._pHitPoints = iVar5;
			plr[uVar4]._pHPBase = lVar1;
		}
		if (plr[myplr]._pHitPoints >> 6 < 1) {
			StartPlrKill__FP12PlayerStructi(plr + myplr,1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 2126, offset 0x8004b228
	/* begin block 1 */
		// Start line: 2127
		// Start offset: 0x8004B228
	/* end block 1 */
	// End offset: 0x8004B2A8
	// End Line: 2133

	/* begin block 2 */
		// Start line: 4897
	/* end block 2 */
	// End Line: 4898

void On_OPENDOOR__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		SyncOpObject__Fiii(pnum,0x2b,(uint)*(ushort *)(pCmd + 2));
	}
	delta_sync_object__FiUcUc((uint)*(ushort *)(pCmd + 2),'+',*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 2139, offset 0x8004b2c0
	/* begin block 1 */
		// Start line: 2140
		// Start offset: 0x8004B2C0
	/* end block 1 */
	// End offset: 0x8004B340
	// End Line: 2146

	/* begin block 2 */
		// Start line: 4929
	/* end block 2 */
	// End Line: 4930

void On_CLOSEDOOR__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		SyncOpObject__Fiii(pnum,0x2c,(uint)*(ushort *)(pCmd + 2));
	}
	delta_sync_object__FiUcUc((uint)*(ushort *)(pCmd + 2),',',*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a0*/)
 // line 2152, offset 0x8004b358
	/* begin block 1 */
		// Start line: 2153
		// Start offset: 0x8004B358
	/* end block 1 */
	// End offset: 0x8004B3D8
	// End Line: 2159

	/* begin block 2 */
		// Start line: 4961
	/* end block 2 */
	// End Line: 4962

void On_OPERATEOBJ__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		SyncOpObject__Fiii(pnum,0x2d,(uint)*(ushort *)(pCmd + 2));
	}
	delta_sync_object__FiUcUc((uint)*(ushort *)(pCmd + 2),'-',*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 2165, offset 0x8004b3f0
	/* begin block 1 */
		// Start line: 2166
		// Start offset: 0x8004B3F0
	/* end block 1 */
	// End offset: 0x8004B46C
	// End Line: 2172

	/* begin block 2 */
		// Start line: 4993
	/* end block 2 */
	// End Line: 4994

void On_PLROPOBJ__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		SyncOpObject__Fiii((uint)*(ushort *)(pCmd + 2),0x2e,(uint)*(ushort *)(pCmd + 4));
	}
	delta_sync_object__FiUcUc((uint)*(ushort *)(pCmd + 4),'.',*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 2177, offset 0x8004b484
	/* begin block 1 */
		// Start line: 2178
		// Start offset: 0x8004B484
	/* end block 1 */
	// End offset: 0x8004B500
	// End Line: 2183

	/* begin block 2 */
		// Start line: 5023
	/* end block 2 */
	// End Line: 5024

void On_BREAKOBJ__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((uint)currlevel == plr[pnum].plrlevel) {
		SyncBreakObj__Fii((uint)*(ushort *)(pCmd + 2),(uint)*(ushort *)(pCmd + 4));
	}
	delta_sync_object__FiUcUc((uint)*(ushort *)(pCmd + 4),'/',*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2188, offset 0x8004b518
	/* begin block 1 */
		// Start line: 2189
		// Start offset: 0x8004B518
	/* end block 1 */
	// End offset: 0x8004B518
	// End Line: 2190

	/* begin block 2 */
		// Start line: 5058
	/* end block 2 */
	// End Line: 5059

void On_CHANGEPLRITEMS__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2201, offset 0x8004b520
	/* begin block 1 */
		// Start line: 2202
		// Start offset: 0x8004B520
	/* end block 1 */
	// End offset: 0x8004B520
	// End Line: 2203

	/* begin block 2 */
		// Start line: 5080
	/* end block 2 */
	// End Line: 5081

void On_DELPLRITEMS__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2209, offset 0x8004b528
	/* begin block 1 */
		// Start line: 2210
		// Start offset: 0x8004B528
	/* end block 1 */
	// End offset: 0x8004B528
	// End Line: 2211

	/* begin block 2 */
		// Start line: 5099
	/* end block 2 */
	// End Line: 5100

void On_PLRLEVEL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2220, offset 0x8004b530
	/* begin block 1 */
		// Start line: 2221
		// Start offset: 0x8004B530
	/* end block 1 */
	// End offset: 0x8004B578
	// End Line: 2226

	/* begin block 2 */
		// Start line: 5115
	/* end block 2 */
	// End Line: 5116

void On_DROPITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	delta_put_item__FPC9TCmdPItemiiUc
						((TCmdPItem *)pCmd,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,*(uchar *)&plr[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 2231, offset 0x8004b588
	/* begin block 1 */
		// Start line: 2232
		// Start offset: 0x8004B588

		/* begin block 1.1 */
			// Start line: 2252
			// Start offset: 0x8004B610

			/* begin block 1.1.1 */
				// Start line: 2253
				// Start offset: 0x8004B630
			/* end block 1.1.1 */
			// End offset: 0x8004B804
			// End Line: 2280
		/* end block 1.1 */
		// End offset: 0x8004B804
		// End Line: 2280
	/* end block 1 */
	// End offset: 0x8004B804
	// End Line: 2280

	/* begin block 2 */
		// Start line: 5142
	/* end block 2 */
	// End Line: 5143

void On_PLAYER_JOINLEVEL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	byte bVar2;
	byte bVar3;
	short sVar4;
	short sVar5;
	uint uVar6;
	int numFrames;
	uint uVar7;
	
	cVar1 = plr[pnum]._pName[0];
	plr[pnum]._pLvlChanging = '\0';
	if (cVar1 != '\0') {
		if (plr[pnum].plractive != '\0') goto LAB_8004b628;
		gbActivePlayers = gbActivePlayers + '\x01';
	}
	if (plr[pnum].plractive == '\0') {
		return;
	}
LAB_8004b628:
	if (pnum != 0) {
		uVar7 = (uint)currlevel;
		plr[pnum].plrlevel = (uint)*(ushort *)(pCmd + 4);
		bVar2 = pCmd[1].bCmd;
		bVar3 = pCmd[2].bCmd;
		uVar6 = plr[pnum].plrlevel;
		plr[pnum]._pGFXLoad = 0;
		plr[pnum]._px = (ushort)bVar2;
		plr[pnum]._py = (ushort)bVar3;
		if (uVar7 == uVar6) {
			SyncInitPlr__Fi(pnum);
			if (plr[pnum]._pHitPoints >> 6 < 1) {
				numFrames = plr[pnum]._pDFrames;
				plr[pnum]._pgfxnum = '\0';
				plr[pnum]._pmode = 8;
				NewPlrAnim__Fiiii(pnum,1,numFrames,1);
				sVar4 = plr[pnum]._py;
				plr[pnum]._pAnimFrame = plr[pnum]._pAnimLen + -1;
				sVar5 = plr[pnum]._px;
				plr[pnum]._pVar8 = (short)(plr[pnum]._pAnimLen << 1);
				dung_map[(int)sVar5 * 0x6c + (int)sVar4].dFlags =
						 dung_map[(int)sVar5 * 0x6c + (int)sVar4].dFlags | 4;
			}
			else {
				StartStand__Fii(pnum,0);
			}
			numFrames = AddVision__FiiiUc((int)plr[pnum]._px,(int)plr[pnum]._py,10,pnum == myplr);
			plr[pnum]._pvid = (char)numFrames;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2287, offset 0x8004b81c
	/* begin block 1 */
		// Start line: 2288
		// Start offset: 0x8004B81C
		// Variables:
	// 		struct TCmdLocParam3 *p; // $s1

		/* begin block 1.1 */
			// Start line: 2288
			// Start offset: 0x8004B81C

			/* begin block 1.1.1 */
				// Start line: 2294
				// Start offset: 0x8004B86C

				/* begin block 1.1.1.1 */
					// Start line: 2295
					// Start offset: 0x8004B86C

					/* begin block 1.1.1.1.1 */
						// Start line: 2298
						// Start offset: 0x8004B890

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2299
							// Start offset: 0x8004B890

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2299
								// Start offset: 0x8004B8C8
								// Variables:
							// 		int i; // $a0
							// 		int mi; // $v0
							// 		unsigned char addok; // $a2
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8004B950
							// End Line: 2312
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8004B970
						// End Line: 2315
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004B970
					// End Line: 2315
				/* end block 1.1.1.1 */
				// End offset: 0x8004B970
				// End Line: 2315
			/* end block 1.1.1 */
			// End offset: 0x8004B970
			// End Line: 2315
		/* end block 1.1 */
		// End offset: 0x8004B970
		// End Line: 2315
	/* end block 1 */
	// End offset: 0x8004B994
	// End Line: 2320

	/* begin block 2 */
		// Start line: 5276
	/* end block 2 */
	// End Line: 5277

void On_ACTIVATEPORTAL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	bool bVar1;
	int iVar2;
	int *piVar3;
	
	ActivatePortal__FiiiiiUc
						(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 4),
						 (uint)*(ushort *)(pCmd + 6),(uint)pCmd[8].bCmd);
	if (pnum != myplr) {
		if (currlevel == '\0') {
			AddInTownPortal__Fi(pnum);
		}
		else {
			bVar1 = true;
			if ((uint)currlevel == plr[pnum].plrlevel) {
				iVar2 = 0;
				if (0 < nummissiles) {
					piVar3 = &missileactive;
					do {
						if ((missile[*piVar3]._mitype == '\n') && ((int)missile[*piVar3]._misource == pnum)) {
							bVar1 = false;
						}
						iVar2 = iVar2 + 1;
						piVar3 = piVar3 + 1;
					} while (iVar2 < nummissiles);
				}
				if (bVar1) {
					AddWarpMissile__Fiii(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd);
				}
			}
			else {
				RemovePortalMissile__Fi(pnum);
			}
		}
	}
	delta_open_portal__FiUcUcUcUcUc
						(pnum,pCmd[1].bCmd,pCmd[2].bCmd,pCmd[4].bCmd,(uint)pCmd[6].bCmd,(uint)pCmd[8].bCmd);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2325, offset 0x8004b9ac
	/* begin block 1 */
		// Start line: 2326
		// Start offset: 0x8004B9AC
	/* end block 1 */
	// End offset: 0x8004B9E8
	// End Line: 2331

	/* begin block 2 */
		// Start line: 5356
	/* end block 2 */
	// End Line: 5357

void On_DEACTIVATEPORTAL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	
	uVar1 = PortalOnLevel__Fi(pnum);
	if (uVar1 != '\0') {
		RemovePortalMissile__Fi(pnum);
	}
	DeactivatePortal__Fi(pnum);
	delta_close_portal__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_RETOWN__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2336, offset 0x8004b9fc
	/* begin block 1 */
		// Start line: 2337
		// Start offset: 0x8004B9FC
	/* end block 1 */
	// End offset: 0x8004BA30
	// End Line: 2344

	/* begin block 2 */
		// Start line: 5379
	/* end block 2 */
	// End Line: 5380

void On_RETOWN__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum == myplr) {
		deathflag = '\0';
		gamemenu_off__Fv();
	}
	RestartTownLvl__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SETSTR__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2349, offset 0x8004ba44
	/* begin block 1 */
		// Start line: 2350
		// Start offset: 0x8004BA44
	/* end block 1 */
	// End offset: 0x8004BA74
	// End Line: 2357

	/* begin block 2 */
		// Start line: 5408
	/* end block 2 */
	// End Line: 5409

void On_SETSTR__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((*(ushort *)(pCmd + 2) < 0x2ef) && (pnum != myplr)) {
		SetPlrStr__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SETDEX__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2362, offset 0x8004ba84
	/* begin block 1 */
		// Start line: 2363
		// Start offset: 0x8004BA84
	/* end block 1 */
	// End offset: 0x8004BAB4
	// End Line: 2370

	/* begin block 2 */
		// Start line: 5437
	/* end block 2 */
	// End Line: 5438

void On_SETDEX__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((*(ushort *)(pCmd + 2) < 0x2ef) && (pnum != myplr)) {
		SetPlrDex__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SETMAG__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2376, offset 0x8004bac4
	/* begin block 1 */
		// Start line: 2377
		// Start offset: 0x8004BAC4
	/* end block 1 */
	// End offset: 0x8004BAF4
	// End Line: 2384

	/* begin block 2 */
		// Start line: 5468
	/* end block 2 */
	// End Line: 5469

void On_SETMAG__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((*(ushort *)(pCmd + 2) < 0x2ef) && (pnum != myplr)) {
		SetPlrMag__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SETVIT__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2390, offset 0x8004bb04
	/* begin block 1 */
		// Start line: 2391
		// Start offset: 0x8004BB04
	/* end block 1 */
	// End offset: 0x8004BB34
	// End Line: 2398

	/* begin block 2 */
		// Start line: 5499
	/* end block 2 */
	// End Line: 5500

void On_SETVIT__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if ((*(ushort *)(pCmd + 2) < 0x2ef) && (pnum != myplr)) {
		SetPlrVit__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd /*$v1*/, int pnum /*$a1*/)
 // line 2404, offset 0x8004bb44
	/* begin block 1 */
		// Start line: 2405
		// Start offset: 0x8004BB44

		/* begin block 1.1 */
			// Start line: 2405
			// Start offset: 0x8004BB44

			/* begin block 1.1.1 */
				// Start line: 2407
				// Start offset: 0x8004BB5C
			/* end block 1.1.1 */
			// End offset: 0x8004BB74
			// End Line: 2409
		/* end block 1.1 */
		// End offset: 0x8004BB74
		// End Line: 2409
	/* end block 1 */
	// End offset: 0x8004BB7C
	// End Line: 2412

	/* begin block 2 */
		// Start line: 5527
	/* end block 2 */
	// End Line: 5528

void On_SYNCQUEST__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum != myplr) {
		SetMultiQuest__FiiUci((uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,pCmd[3].bCmd,(uint)pCmd[4].bCmd);
	}
	sgbDeltaChanged = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s2*/)
 // line 2418, offset 0x8004bb8c
	/* begin block 1 */
		// Start line: 2419
		// Start offset: 0x8004BB8C

		/* begin block 1.1 */
			// Start line: 2419
			// Start offset: 0x8004BB8C

			/* begin block 1.1.1 */
				// Start line: 2421
				// Start offset: 0x8004BBFC

				/* begin block 1.1.1.1 */
					// Start line: 2423
					// Start offset: 0x8004BBFC
					// Variables:
				// 		int i; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 2423
						// Start offset: 0x8004BC08
						// Variables:
					// 		int mi; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004BC78
					// End Line: 2429
				/* end block 1.1.1.1 */
				// End offset: 0x8004BC84
				// End Line: 2431
			/* end block 1.1.1 */
			// End offset: 0x8004BC84
			// End Line: 2431
		/* end block 1.1 */
		// End offset: 0x8004BC84
		// End Line: 2431
	/* end block 1 */
	// End offset: 0x8004BC84
	// End Line: 2431

	/* begin block 2 */
		// Start line: 5557
	/* end block 2 */
	// End Line: 5558

void On_ENDSHIELD__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int mi;
	int i;
	int *piVar1;
	
	if ((pnum != myplr) && (i = 0, (uint)currlevel == plr[pnum].plrlevel)) {
		piVar1 = &missileactive;
		while (i < nummissiles) {
			mi = *piVar1;
			if ((missile[mi]._mitype == '\r') && ((int)missile[mi]._misource == pnum)) {
				ClearMissileSpot__Fi(mi);
				DeleteMissile__Fii(mi,i);
			}
			piVar1 = piVar1 + 1;
			i = i + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ ParseCmd__FiPC4TCmd(int pnum /*$v1*/, struct TCmd *pCmd /*$a0*/)
 // line 2470, offset 0x8004bca8
	/* begin block 1 */
		// Start line: 2471
		// Start offset: 0x8004BCA8
		// Variables:
	// 		static unsigned char sbLastCmd; // offset 0x8012c164
	/* end block 1 */
	// End offset: 0x8004C0B8
	// End Line: 2573

	/* begin block 2 */
		// Start line: 5661
	/* end block 2 */
	// End Line: 5662

ulong ParseCmd__FiPC4TCmd(int pnum,TCmd *pCmd)

{
	sbLastCmd_244 = pCmd->bCmd;
	switch(sbLastCmd_244) {
	case '\x01':
		On_WALKXY__FPC4TCmdi(pCmd,pnum);
		break;
	default:
		DBG_Error((char *)0x0,"source/MSG.cpp",0xa00);
		break;
	case '\x03':
		On_ADDSTR__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x04':
		On_ADDMAG__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x05':
		On_ADDDEX__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x06':
		On_ADDVIT__FPC4TCmdi(pCmd,pnum);
		break;
	case '\a':
		On_SBSPELL__FPC4TCmdi(pCmd,pnum);
		break;
	case '\b':
		On_GETITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '\t':
		On_AGETITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '\n':
		On_PUTITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '\v':
		On_RESPAWNITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x0e':
		On_SPELLXY__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x0f':
		On_TSPELLXY__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x10':
		On_OPOBJXY__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x11':
		On_DISARMXY__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x12':
		On_ATTACKID__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x16':
		On_SPELLID__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x17':
		On_SPELLPID__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x18':
		On_TSPELLID__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x19':
		On_TSPELLPID__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x1a':
		On_RESURRECT__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x1b':
		On_OPOBJT__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x1c':
		On_KNOCKBACK__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x1d':
		On_TALKXY__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x1e':
		On_NEWLVL__FPC4TCmdi(pCmd,pnum);
		break;
	case '\x1f':
		On_WARP__FPC4TCmdi(pCmd,pnum);
		break;
	case '$':
		On_MONSTDEATH__FPC4TCmdi(pCmd,pnum);
		break;
	case '%':
		On_MONSTDAMAGE__FPC4TCmdi(pCmd,pnum);
		break;
	case '&':
		On_PLRDEAD__FPC4TCmdi(pCmd,pnum);
		break;
	case '\'':
		On_REQUESTGITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '(':
		On_REQUESTAGITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case ')':
		On_GOTOGETITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '*':
		On_GOTOAGETITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '+':
		On_OPENDOOR__FPC4TCmdi(pCmd,pnum);
		break;
	case ',':
		On_CLOSEDOOR__FPC4TCmdi(pCmd,pnum);
		break;
	case '-':
		On_OPERATEOBJ__FPC4TCmdi(pCmd,pnum);
		break;
	case '.':
		On_PLROPOBJ__FPC4TCmdi(pCmd,pnum);
		break;
	case '/':
		On_BREAKOBJ__FPC4TCmdi(pCmd,pnum);
		break;
	case '0':
		On_CHANGEPLRITEMS__FPC4TCmdi(pCmd,pnum);
		break;
	case '1':
		On_DELPLRITEMS__FPC4TCmdi(pCmd,pnum);
		break;
	case '2':
		On_PLRDAMAGE__FPC4TCmdi(pCmd,pnum);
		break;
	case '3':
		On_PLRLEVEL__FPC4TCmdi(pCmd,pnum);
		break;
	case '4':
		On_DROPITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case '5':
		On_PLAYER_JOINLEVEL__FPC4TCmdi(pCmd,pnum);
		break;
	case '7':
		On_SATTACKXY__FPC4TCmdi(pCmd,pnum);
		break;
	case '8':
		On_ACTIVATEPORTAL__FPC4TCmdi(pCmd,pnum);
		break;
	case '9':
		On_DEACTIVATEPORTAL__FPC4TCmdi(pCmd,pnum);
		break;
	case 'M':
		On_HEALOTHER__FPC4TCmdi(pCmd,pnum);
		break;
	case 'O':
		On_SETSTR__FPC4TCmdi(pCmd,pnum);
		break;
	case 'P':
		On_SETMAG__FPC4TCmdi(pCmd,pnum);
		break;
	case 'Q':
		On_SETDEX__FPC4TCmdi(pCmd,pnum);
		break;
	case 'R':
		On_SETVIT__FPC4TCmdi(pCmd,pnum);
		break;
	case 'S':
		On_RETOWN__FPC4TCmdi(pCmd,pnum);
		break;
	case 'T':
		On_SPELLXYD__FPC4TCmdi(pCmd,pnum);
		break;
	case 'U':
		On_ITEMEXTRA__FPC4TCmdi(pCmd,pnum);
		break;
	case 'V':
		On_SYNCPUTITEM__FPC4TCmdi(pCmd,pnum);
		break;
	case 'W':
		On_KILLGOLEM__FPC4TCmdi(pCmd,pnum);
		break;
	case 'X':
		On_SYNCQUEST__FPC4TCmdi(pCmd,pnum);
		break;
	case 'Y':
		On_ENDSHIELD__FPC4TCmdi(pCmd,pnum);
		break;
	case 'Z':
		On_AWAKEGOLEM__FPC4TCmdi(pCmd,pnum);
	}
	return 0;
}



// decompiled code
// original method signature: 
// struct DLevel * /*$ra*/ GetDLevel__Fib(int LevNum /*$s0*/, void * SetLevel /*$a1*/)
 // line 2583, offset 0x8004c0c8
	/* begin block 1 */
		// Start line: 2584
		// Start offset: 0x8004C0C8
	/* end block 1 */
	// End offset: 0x8004C144
	// End Line: 2594

	/* begin block 2 */
		// Start line: 5898
	/* end block 2 */
	// End Line: 5899

DLevel * GetDLevel__Fib(int LevNum,void *SetLevel)

{
	if (setlevel != '\0') {
		LevNum = (uint)setlvlnum + 0x10;
	}
	if (LevelOut != (void *)0x0) {
		DBG_Error((char *)0x0,"source/MSG.cpp",0xa1c);
	}
	LevelOut = &DAT_00000001;
	return sgLevels + LevNum;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseDLevel__FP6DLevel(struct DLevel *Dl /*$a0*/)
 // line 2600, offset 0x8004c158
	/* begin block 1 */
		// Start line: 2601
		// Start offset: 0x8004C158
	/* end block 1 */
	// End offset: 0x8004C180
	// End Line: 2605

	/* begin block 2 */
		// Start line: 5935
	/* end block 2 */
	// End Line: 5936

void ReleaseDLevel__FP6DLevel(DLevel *Dl)

{
	if (LevelOut == (void *)0x0) {
		DBG_Error((char *)0x0,"source/MSG.cpp",0xa2b);
	}
	LevelOut = (void *)0x0;
	return;
}





