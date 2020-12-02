#include "THISDUST.H"
#include "MSG.H"


// decompiled code
// original method signature: 
// int /*$ra*/ DoComp__C6NoCompPUcPCUci(struct NoComp *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Src /*$a2*/, int SrcLen /*$s0*/)
 // line 111, offset 0x80052b6c
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x80052B6C
	/* end block 1 */
	// End offset: 0x80052B90
	// End Line: 114

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DoComp__C6NoCompPUcPCUci(NoComp *this,uchar *Dest,uchar *Src,int SrcLen)

{
	memcpy(Dest,Src,SrcLen);
	return SrcLen;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoDecomp__C6NoCompPUcPCUcii(struct NoComp *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Src /*$a2*/, int DstLen /*$a3*/, int SrcLen /*stack 16*/)
 // line 117, offset 0x80052b40
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x80052B40
	/* end block 1 */
	// End offset: 0x80052B5C
	// End Line: 119

	/* begin block 2 */
		// Start line: 234
	/* end block 2 */
	// End Line: 235

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoDecomp__C6NoCompPUcPCUcii(NoComp *this,uchar *Dest,uchar *Src,int DstLen,int SrcLen)

{
	memcpy(Dest,Src,SrcLen);
	return;
}



// decompiled code
// original method signature: 
// struct NoComp * /*$ra*/ __6NoComp(struct NoComp *this /*$a0*/)
 // line 120, offset 0x80052a1c
	/* begin block 1 */
		// Start line: 240
	/* end block 1 */
	// End Line: 241

/* WARNING: Unknown calling convention yet parameter storage is locked */

NoComp * __6NoComp(NoComp *this)

{
	__9CompClass((CompClass *)this);
	*(undefined4 *)this = 0x80116838;
	return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoComp__C7PakCompPUcPCUci(struct PakComp *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Src /*$a2*/, int SrcLen /*$a3*/)
 // line 129, offset 0x80052b18
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80052B18
	/* end block 1 */
	// End offset: 0x80052B30
	// End Line: 133

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DoComp__C7PakCompPUcPCUci(PakComp *this,uchar *Dest,uchar *Src,int SrcLen)

{
	int iVar1;
	
	iVar1 = PAK_DoPak__FPUcPCUci(Dest,Src,SrcLen);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoDecomp__C7PakCompPUcPCUcii(struct PakComp *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Src /*$a2*/, int DstLen /*$a3*/, int SrcLen /*stack 16*/)
 // line 136, offset 0x80052af4
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x80052AF4
	/* end block 1 */
	// End offset: 0x80052B08
	// End Line: 138

	/* begin block 2 */
		// Start line: 272
	/* end block 2 */
	// End Line: 273

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoDecomp__C7PakCompPUcPCUcii(PakComp *this,uchar *Dest,uchar *Src,int DstLen,int SrcLen)

{
	PAK_DoUnpak__FPUcPCUc(Dest,Src);
	return;
}



// decompiled code
// original method signature: 
// struct PakComp * /*$ra*/ __7PakComp(struct PakComp *this /*$a0*/)
 // line 139, offset 0x800529e4
	/* begin block 1 */
		// Start line: 278
	/* end block 1 */
	// End Line: 279

/* WARNING: Unknown calling convention yet parameter storage is locked */

PakComp * __7PakComp(PakComp *this)

{
	__9CompClass((CompClass *)this);
	*(undefined4 *)this = 0x80116820;
	return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoComp__C10CrunchCompPUcPCUci(struct CrunchComp *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Src /*$a2*/, int SrcLen /*$a3*/)
 // line 148, offset 0x80052acc
	/* begin block 1 */
		// Start line: 149
		// Start offset: 0x80052ACC
	/* end block 1 */
	// End offset: 0x80052AE4
	// End Line: 152

	/* begin block 2 */
		// Start line: 296
	/* end block 2 */
	// End Line: 297

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DoComp__C10CrunchCompPUcPCUci(CrunchComp *this,uchar *Dest,uchar *Src,int SrcLen)

{
	int iVar1;
	
	iVar1 = crunch(Src,Dest,SrcLen,0x800);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoDecomp__C10CrunchCompPUcPCUcii(struct CrunchComp *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Src /*$a2*/, int DstLen /*$a3*/, int SrcLen /*stack 16*/)
 // line 155, offset 0x80052aa4
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x80052AA4
	/* end block 1 */
	// End offset: 0x80052ABC
	// End Line: 157

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoDecomp__C10CrunchCompPUcPCUcii(CrunchComp *this,uchar *Dest,uchar *Src,int DstLen,int SrcLen)

{
	decrunch(Src,Dest,SrcLen);
	return;
}



// decompiled code
// original method signature: 
// struct CrunchComp * /*$ra*/ __10CrunchComp(struct CrunchComp *this /*$a0*/)
 // line 158, offset 0x800529ac
	/* begin block 1 */
		// Start line: 316
	/* end block 1 */
	// End Line: 317

/* WARNING: Unknown calling convention yet parameter storage is locked */

CrunchComp * __10CrunchComp(CrunchComp *this)

{
	__9CompClass((CompClass *)this);
	*(undefined4 *)this = 0x80116808;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_init__Fv()
 // line 266, offset 0x8004ea9c
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x8004EA9C
	/* end block 1 */
	// End offset: 0x8004EAE4
	// End Line: 278

	/* begin block 2 */
		// Start line: 532
	/* end block 2 */
	// End Line: 533

/* WARNING: Unknown calling convention yet parameter storage is locked */

void delta_init__Fv(void)

{
	sgbDeltaChanged = '\0';
	memset(&sgJunk,0xff,0x20);
	Init__13CompLevelMaps(&GameMaps);
	memset(sgLocals,0,(size_t)&DAT_00001130);
	deltaload = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_kill_monster__FiUcUcUc(int mi /*$s0*/, unsigned char x /*$s2*/, unsigned char y /*$s1*/, unsigned char bLevel /*$a3*/)
 // line 284, offset 0x8004eaf4
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x8004EAF4
		// Variables:
	// 		struct DMonsterStr *p; // $a1
	// 		struct DLevel *Dl; // $v0
	/* end block 1 */
	// End offset: 0x8004EB74
	// End Line: 306

	/* begin block 2 */
		// Start line: 570
	/* end block 2 */
	// End Line: 571

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 312, offset 0x8004eb90
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x8004EB90
		// Variables:
	// 		struct DMonsterStr *p; // $v1
	// 		struct DLevel *Dl; // $a0
	/* end block 1 */
	// End offset: 0x8004EBF4
	// End Line: 329

	/* begin block 2 */
		// Start line: 654
	/* end block 2 */
	// End Line: 655

/* WARNING: Unknown calling convention yet parameter storage is locked */

void delta_monster_hp__FilUc(int mi,long hp,uchar bLevel)

{
	DLevel *Dl;
	
	sgbDeltaChanged = '\x01';
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	if (hp < Dl->monster[mi]._mhitpoints) {
		Dl->monster[mi]._mhitpoints = hp;
	}
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_leave_sync__FUc(unsigned char bLevel /*$s5*/)
 // line 369, offset 0x8004ec0c
	/* begin block 1 */
		// Start line: 370
		// Start offset: 0x8004EC0C
		// Variables:
	// 		struct DLevel *Dl; // $s4

		/* begin block 1.1 */
			// Start line: 380
			// Start offset: 0x8004EC5C
			// Variables:
		// 		int i; // $s3

			/* begin block 1.1.1 */
				// Start line: 383
				// Start offset: 0x8004EC80
				// Variables:
			// 		int ii; // $a0
			// 		struct DMonsterStr *pD; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8004ED2C
			// End Line: 399
		/* end block 1.1 */
		// End offset: 0x8004ED38
		// End Line: 401
	/* end block 1 */
	// End offset: 0x8004EF10
	// End Line: 410

	/* begin block 2 */
		// Start line: 782
	/* end block 2 */
	// End Line: 783

/* WARNING: Removing unreachable block (ram,0x8004ed8c) */
/* WARNING: Removing unreachable block (ram,0x8004edd8) */
/* WARNING: Removing unreachable block (ram,0x8004ee70) */
/* WARNING: Removing unreachable block (ram,0x8004eebc) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void delta_leave_sync__FUc(uchar bLevel)

{
	LocalLevel *pLVar1;
	undefined4 *puVar2;
	DLevel *Dl;
	int iVar3;
	undefined4 uVar4;
	int m;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 *puVar7;
	LocalLevel *pLVar8;
	DMonsterStr *pDVar9;
	short *psVar10;
	int iVar11;
	
	if ((currlevel != '\0') || (glSeedTbl[0] = GetRndSeed__Fv(), currlevel != '\0')) {
		iVar11 = 0;
		psVar10 = &monstactive;
		Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
		while (iVar11 < nummonsters) {
			m = (int)*psVar10;
			if (monster[m]._mhitpoints != 0) {
				sgbDeltaChanged = '\x01';
				pDVar9 = Dl->monster + m;
				pDVar9->_mx = monster[m]._mx;
				pDVar9->_my = monster[m]._my;
				pDVar9->_mdir = monster[m]._mdir;
				iVar3 = encode_enemy__Fi(m);
				pDVar9->_menemy = (uchar)iVar3;
				pDVar9->_mhitpoints = monster[m]._mhitpoints;
			}
			psVar10 = psVar10 + 1;
			iVar11 = iVar11 + 1;
		}
		ReleaseDLevel__FP6DLevel(Dl);
		if (setlevel == '\0') {
			puVar2 = (undefined4 *)&automapview;
			pLVar1 = sgLocals + (uint)bLevel;
			do {
				pLVar8 = pLVar1;
				puVar7 = puVar2;
				uVar4 = puVar7[1];
				uVar5 = puVar7[2];
				uVar6 = puVar7[3];
				*(undefined4 *)pLVar8->automapsv = *puVar7;
				*(undefined4 *)(pLVar8->automapsv + 4) = uVar4;
				*(undefined4 *)(pLVar8->automapsv + 8) = uVar5;
				*(undefined4 *)(pLVar8->automapsv + 0xc) = uVar6;
				puVar2 = puVar7 + 4;
				pLVar1 = (LocalLevel *)(pLVar8->automapsv + 0x10);
			} while (puVar7 + 4 != (undefined4 *)0x8010d7a4);
			uVar4 = puVar7[5];
			*(undefined4 *)((LocalLevel *)(pLVar8->automapsv + 0x10))->automapsv = uRam8010d7a4;
			*(undefined4 *)(pLVar8->automapsv + 0x14) = uVar4;
		}
		else {
			pLVar1 = LocalLevel_ARRAY_800d7e3c + (uint)setlvlnum;
			puVar2 = (undefined4 *)&automapview;
			do {
				puVar7 = puVar2;
				pLVar8 = pLVar1;
				uVar4 = puVar7[1];
				uVar5 = puVar7[2];
				uVar6 = puVar7[3];
				*(undefined4 *)pLVar8->automapsv = *puVar7;
				*(undefined4 *)(pLVar8->automapsv + 4) = uVar4;
				*(undefined4 *)(pLVar8->automapsv + 8) = uVar5;
				*(undefined4 *)(pLVar8->automapsv + 0xc) = uVar6;
				pLVar1 = (LocalLevel *)(pLVar8->automapsv + 0x10);
				puVar2 = puVar7 + 4;
			} while (puVar7 + 4 != (undefined4 *)0x8010d7a4);
			uVar4 = puVar7[5];
			*(undefined4 *)((LocalLevel *)(pLVar8->automapsv + 0x10))->automapsv = uRam8010d7a4;
			*(undefined4 *)(pLVar8->automapsv + 0x14) = uVar4;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_sync_object__FiUcUc(int oi /*$s0*/, unsigned char bCmd /*$s1*/, unsigned char bLevel /*$a2*/)
 // line 416, offset 0x8004ef38
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x8004EF38
		// Variables:
	// 		struct DLevel *Dl; // $v0
	// 		struct DObjectStr *p; // $v0
	/* end block 1 */
	// End offset: 0x8004EF80
	// End Line: 433

	/* begin block 2 */
		// Start line: 888
	/* end block 2 */
	// End Line: 889

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 439, offset 0x8004ef98
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x8004EF98
		// Variables:
	// 		struct DLevel *Dl; // $a0
	// 		struct TCmdPItem *pD; // $t8
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x8004F14C
	// End Line: 562

	/* begin block 2 */
		// Start line: 948
	/* end block 2 */
	// End Line: 949

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
	ulong uVar14;
	DLevel *pDVar15;
	
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	iVar12 = 0;
	puVar11 = &Dl->item[0].dwSeed;
	pDVar15 = Dl;
	do {
		uVar10 = pDVar15->item[0].bCmd;
		if ((((uVar10 != -1) && (*(ushort *)((int)puVar11 + -6) == pI->wIndx)) &&
				(*(ushort *)(puVar11 + -1) == pI->wCI)) && (*puVar11 == pI->dwSeed)) {
			if (uVar10 == '\x01') goto LAB_8004f140;
			if (uVar10 == '\0') {
				sgbDeltaChanged = '\x01';
				pDVar15->item[0].bCmd = '\x01';
				goto LAB_8004f140;
			}
			if (uVar10 == '\x02') {
				sgbDeltaChanged = '\x01';
				pDVar15->item[0].bCmd = -1;
				goto LAB_8004f140;
			}
			break;
		}
		iVar12 = iVar12 + 1;
		puVar11 = puVar11 + 6;
		pDVar15 = (DLevel *)(pDVar15->item + 1);
	} while (iVar12 < 0x7f);
	ReleaseDLevel__FP6DLevel(Dl);
	if ((pI->wCI & 0x8000) == 0) {
		uVar10 = '\0';
	}
	else {
		Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
		iVar12 = 0;
		pDVar15 = Dl;
		do {
			iVar12 = iVar12 + 1;
			if (pDVar15->item[0].bCmd == -1) {
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
				uVar14 = pI->dwBuff;
				sgbDeltaChanged = '\x01';
				pDVar15->item[0].bCmd = '\x01';
				pDVar15->item[0].x = uVar10;
				pDVar15->item[0].y = uVar1;
				pDVar15->item[0].wIndx = uVar7;
				pDVar15->item[0].wCI = uVar8;
				pDVar15->item[0].dwSeed = uVar13;
				pDVar15->item[0].bId = uVar2;
				pDVar15->item[0].bDur = uVar3;
				pDVar15->item[0].bMDur = uVar4;
				pDVar15->item[0].bCh = uVar5;
				pDVar15->item[0].bMCh = uVar6;
				pDVar15->item[0].wValue = uVar9;
				pDVar15->item[0].dwBuff = uVar14;
				break;
			}
			pDVar15 = (DLevel *)(pDVar15->item + 1);
		} while (iVar12 < 0x7f);
LAB_8004f140:
		ReleaseDLevel__FP6DLevel(Dl);
		uVar10 = '\x01';
	}
	return uVar10;
}



// decompiled code
// original method signature: 
// void /*$ra*/ delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI /*$s0*/, int x /*$s2*/, int y /*$s3*/, unsigned char bLevel /*$s1*/)
 // line 568, offset 0x8004f164
	/* begin block 1 */
		// Start line: 569
		// Start offset: 0x8004F164
		// Variables:
	// 		struct DLevel *Dl; // $t1
	// 		struct TCmdPItem *pD; // $a3
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x8004F2D0
	// End Line: 630

	/* begin block 2 */
		// Start line: 1299
	/* end block 2 */
	// End Line: 1300

/* WARNING: Unknown calling convention yet parameter storage is locked */

void delta_put_item__FPC9TCmdPItemiiUc(TCmdPItem *pI,int x,int y,uchar bLevel)

{
	uchar uVar1;
	DLevel *Dl;
	undefined4 uVar2;
	ulong uVar3;
	undefined4 uVar4;
	ulong *puVar5;
	undefined4 uVar6;
	uchar *puVar7;
	DLevel *pDVar8;
	int iVar9;
	
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	iVar9 = 0;
	puVar5 = &Dl->item[0].dwSeed;
	pDVar8 = Dl;
	do {
		uVar1 = pDVar8->item[0].bCmd;
		if ((((uVar1 != '\x01') && (uVar1 != -1)) && (*(ushort *)((int)puVar5 + -6) == pI->wIndx)) &&
			 (((*(ushort *)(puVar5 + -1) == pI->wCI && (*puVar5 == pI->dwSeed)) && (uVar1 == '\x02'))))
		goto LAB_8004f2c8;
		iVar9 = iVar9 + 1;
		puVar5 = puVar5 + 6;
		pDVar8 = (DLevel *)(pDVar8->item + 1);
	} while (iVar9 < 0x7f);
	ReleaseDLevel__FP6DLevel(Dl);
	Dl = GetDLevel__Fib((uint)bLevel,(void *)(uint)(setlevel != '\0'));
	iVar9 = 0;
	puVar7 = &Dl->item[0].y;
	pDVar8 = Dl;
	do {
		iVar9 = iVar9 + 1;
		if (pDVar8->item[0].bCmd == -1) {
			sgbDeltaChanged = '\x01';
			uVar2 = *(undefined4 *)&pI->bDur;
			uVar4 = *(undefined4 *)&pI->wValue;
			uVar6 = *(undefined4 *)&pI->wCI;
			*(undefined4 *)pDVar8->item = *(undefined4 *)pI;
			*(undefined4 *)&pDVar8->item[0].bDur = uVar2;
			*(undefined4 *)&pDVar8->item[0].wValue = uVar4;
			*(undefined4 *)&pDVar8->item[0].wCI = uVar6;
			uVar3 = pI->dwBuff;
			pDVar8->item[0].dwSeed = pI->dwSeed;
			pDVar8->item[0].dwBuff = uVar3;
			pDVar8->item[0].bCmd = '\x02';
			puVar7[-1] = (uchar)x;
			*puVar7 = (uchar)y;
			break;
		}
		puVar7 = puVar7 + 0x18;
		pDVar8 = (DLevel *)(pDVar8->item + 1);
	} while (iVar9 < 0x7f);
LAB_8004f2c8:
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ delta_portal_inited__Fi(int i /*$a0*/)
 // line 636, offset 0x8004f2f0
	/* begin block 1 */
		// Start line: 637
		// Start offset: 0x8004F2F0
	/* end block 1 */
	// End offset: 0x8004F30C
	// End Line: 640

	/* begin block 2 */
		// Start line: 1452
	/* end block 2 */
	// End Line: 1453

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar delta_portal_inited__Fi(int i)

{
	return (uchar)(sgJunk.portal[i].x == -1);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ delta_quest_inited__Fi(int i /*$a0*/)
 // line 645, offset 0x8004f314
	/* begin block 1 */
		// Start line: 646
		// Start offset: 0x8004F314
	/* end block 1 */
	// End offset: 0x8004F330
	// End Line: 649

	/* begin block 2 */
		// Start line: 1470
	/* end block 2 */
	// End Line: 1471

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar delta_quest_inited__Fi(int i)

{
	return (uchar)(sgJunk.quests[i].qstate != -1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeltaAddItem__Fi(int ii /*$s0*/)
 // line 655, offset 0x8004f338
	/* begin block 1 */
		// Start line: 656
		// Start offset: 0x8004F338
		// Variables:
	// 		struct TCmdPItem *pD; // $a3
	// 		struct TCmdPItem *OpD; // $t2
	// 		struct DLevel *Dl; // $a0
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x8004F54C
	// End Line: 726

	/* begin block 2 */
		// Start line: 1488
	/* end block 2 */
	// End Line: 1489

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeltaAddItem__Fi(int ii)

{
	byte bVar1;
	DLevel *Dl;
	ulong *puVar2;
	DLevel *pDVar3;
	int iVar4;
	
	Dl = GetDLevel__Fib((uint)currlevel,(void *)(uint)(setlevel != '\0'));
	iVar4 = 0;
	puVar2 = &Dl->item[0].dwSeed;
	pDVar3 = Dl;
	do {
		bVar1 = pDVar3->item[0].bCmd;
		if ((((bVar1 != 0xff) && ((uint)*(ushort *)((int)puVar2 + -6) == (int)item[ii].IDidx)) &&
				(*(ushort *)(puVar2 + -1) == item[ii]._iCreateInfo)) &&
			 ((*puVar2 == item[ii]._iSeed && (bVar1 < 2)))) goto LAB_8004f544;
		iVar4 = iVar4 + 1;
		puVar2 = puVar2 + 6;
		pDVar3 = (DLevel *)(pDVar3->item + 1);
	} while (iVar4 < 0x7f);
	iVar4 = 0;
	puVar2 = &Dl->item[0].dwBuff;
	pDVar3 = Dl;
	do {
		iVar4 = iVar4 + 1;
		if (pDVar3->item[0].bCmd == -1) {
			sgbDeltaChanged = '\x01';
			pDVar3->item[0].bCmd = '\0';
			*(char *)((int)puVar2 + -0x13) = item[ii]._ix;
			*(char *)((int)puVar2 + -0x12) = item[ii]._iy;
			*(short *)((int)puVar2 + -10) = item[ii].IDidx;
			*(ushort *)(puVar2 + -2) = item[ii]._iCreateInfo;
			puVar2[-1] = item[ii]._iSeed;
			*(char *)((int)puVar2 + -0x11) = item[ii]._iIdentified;
			*(char *)(puVar2 + -4) = (char)item[ii]._iDurability;
			*(undefined *)((int)puVar2 + -0xf) = (char)item[ii]._iMaxDur;
			*(uchar *)((int)puVar2 + -0xe) = item[ii]._iCharges;
			*(uchar *)((int)puVar2 + -0xd) = item[ii]._iMaxCharges;
			*(short *)(puVar2 + -3) = (short)item[ii]._ivalue;
			*puVar2 = (int)item[ii]._PlrCreate;
			break;
		}
		puVar2 = puVar2 + 6;
		pDVar3 = (DLevel *)(pDVar3->item + 1);
	} while (iVar4 < 0x7f);
LAB_8004f544:
	ReleaseDLevel__FP6DLevel(Dl);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DeltaExportData__FPc(char *Dst /*$a1*/)
 // line 731, offset 0x8004f560
	/* begin block 1 */
		// Start line: 732
		// Start offset: 0x8004F560
	/* end block 1 */
	// End offset: 0x8004F57C
	// End Line: 748

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DeltaExportData__FPc(char *Dst)

{
	int iVar1;
	
	iVar1 = ExportData__13CompLevelMapsPUc(&GameMaps,(uchar *)Dst);
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DeltaImportData__FPc(char *Src /*$s1*/)
 // line 754, offset 0x8004f58c
	/* begin block 1 */
		// Start line: 755
		// Start offset: 0x8004F58C
		// Variables:
	// 		int osize; // $s0
	/* end block 1 */
	// End offset: 0x8004F5BC
	// End Line: 776

	/* begin block 2 */
		// Start line: 1694
	/* end block 2 */
	// End Line: 1695

/* WARNING: Unknown calling convention yet parameter storage is locked */

int DeltaImportData__FPc(char *Src)

{
	int iVar1;
	
	iVar1 = GetSize__14CompressedLevs((CompressedLevs *)Src);
	ImportData__13CompLevelMapsP14CompressedLevs(&GameMaps,(CompressedLevs *)Src);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeltaSaveLevel__Fv()
 // line 780, offset 0x8004f5d4
	/* begin block 1 */
		// Start line: 781
		// Start offset: 0x8004F5D4

		/* begin block 1.1 */
			// Start line: 781
			// Start offset: 0x8004F5D4
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8004F610
		// End Line: 789
	/* end block 1 */
	// End offset: 0x8004F6C0
	// End Line: 796

	/* begin block 2 */
		// Start line: 1747
	/* end block 2 */
	// End Line: 1748

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeltaSaveLevel__Fv(void)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	
	iVar3 = myplr;
	iVar2 = 0;
	puVar4 = (undefined *)0x0;
	do {
		if (iVar2 != iVar3) {
			*(undefined4 *)((int)&plr._pGFXLoad + (int)puVar4) = 0;
		}
		iVar2 = iVar2 + 1;
		puVar4 = &DAT_000019e8 + (int)puVar4;
	} while (iVar2 < 2);
	if (setlevel == '\0') {
		iVar3 = -0x7ff25962;
		bVar1 = currlevel;
	}
	else {
		iVar3 = -0x7ff25951;
		bVar1 = setlvlnum;
	}
	*(undefined *)(myplr * 0x19e8 + iVar3 + (uint)bVar1) = 1;
	delta_leave_sync__FUc(currlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmd__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/)
 // line 870, offset 0x8004f6d0
	/* begin block 1 */
		// Start line: 871
		// Start offset: 0x8004F6D0
		// Variables:
	// 		struct TCmd cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F6E8
	// End Line: 875

	/* begin block 2 */
		// Start line: 1932
	/* end block 2 */
	// End Line: 1933

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 880, offset 0x8004f6f8
	/* begin block 1 */
		// Start line: 881
		// Start offset: 0x8004F6F8
		// Variables:
	// 		struct TCmdGolem cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F734
	// End Line: 895

	/* begin block 2 */
		// Start line: 1956
	/* end block 2 */
	// End Line: 1957

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 900, offset 0x8004f744
	/* begin block 1 */
		// Start line: 901
		// Start offset: 0x8004F744
		// Variables:
	// 		struct TCmdLoc cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F764
	// End Line: 911

	/* begin block 2 */
		// Start line: 2016
	/* end block 2 */
	// End Line: 2017

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 916, offset 0x8004f774
	/* begin block 1 */
		// Start line: 917
		// Start offset: 0x8004F774
		// Variables:
	// 		struct TCmdLocParam1 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F79C
	// End Line: 926

	/* begin block 2 */
		// Start line: 2062
	/* end block 2 */
	// End Line: 2063

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 931, offset 0x8004f7ac
	/* begin block 1 */
		// Start line: 932
		// Start offset: 0x8004F7AC
		// Variables:
	// 		struct TCmdLocParam2 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F7DC
	// End Line: 942

	/* begin block 2 */
		// Start line: 2106
	/* end block 2 */
	// End Line: 2107

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 947, offset 0x8004f7ec
	/* begin block 1 */
		// Start line: 948
		// Start offset: 0x8004F7EC
		// Variables:
	// 		struct TCmdLocParam3 cmd; // stack offset -24
	/* end block 1 */
	// End offset: 0x8004F824
	// End Line: 959

	/* begin block 2 */
		// Start line: 2154
	/* end block 2 */
	// End Line: 2155

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 964, offset 0x8004f834
	/* begin block 1 */
		// Start line: 965
		// Start offset: 0x8004F834
		// Variables:
	// 		struct TCmdParam1 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F850
	// End Line: 970

	/* begin block 2 */
		// Start line: 2203
	/* end block 2 */
	// End Line: 2204

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 975, offset 0x8004f860
	/* begin block 1 */
		// Start line: 976
		// Start offset: 0x8004F860
		// Variables:
	// 		struct TCmdParam2 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F880
	// End Line: 982

	/* begin block 2 */
		// Start line: 2233
	/* end block 2 */
	// End Line: 2234

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 986, offset 0x8004f890
	/* begin block 1 */
		// Start line: 987
		// Start offset: 0x8004F890
		// Variables:
	// 		struct TCmdParam3 cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F8B8
	// End Line: 994

	/* begin block 2 */
		// Start line: 2265
	/* end block 2 */
	// End Line: 2266

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 998, offset 0x8004f8c8
	/* begin block 1 */
		// Start line: 999
		// Start offset: 0x8004F8C8
		// Variables:
	// 		struct TCmdQuest cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004F92C
	// End Line: 1007

	/* begin block 2 */
		// Start line: 2301
	/* end block 2 */
	// End Line: 2302

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1011, offset 0x8004f93c
	/* begin block 1 */
		// Start line: 1012
		// Start offset: 0x8004F93C
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -40
	/* end block 1 */
	// End offset: 0x8004FA74
	// End Line: 1064

	/* begin block 2 */
		// Start line: 2336
	/* end block 2 */
	// End Line: 2337

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
	uchar local_1e;
	uchar local_1d;
	undefined2 local_1c;
	short local_1a;
	ushort local_18;
	int local_14;
	int local_10;
	undefined4 local_c;
	
	uVar1 = ii & 0xff;
	local_c = 0;
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
	local_1e = item[uVar1]._iCharges;
	local_1d = item[uVar1]._iMaxCharges;
	local_1c = (undefined2)item[uVar1]._ivalue;
	local_10 = (int)item[uVar1]._PlrCreate;
	local_28 = bCmd;
	local_27 = mast;
	local_26 = pnum;
	NetSendLoPri__FPCUcUc(&local_28,' ');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char mast /*$a2*/, unsigned char pnum /*$a3*/, struct TCmdGItem *p /*stack 16*/)
 // line 1069, offset 0x8004fa84
	/* begin block 1 */
		// Start line: 1070
		// Start offset: 0x8004FA84
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -40
	/* end block 1 */
	// End offset: 0x8004FAF8
	// End Line: 1085

	/* begin block 2 */
		// Start line: 2468
	/* end block 2 */
	// End Line: 2469

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem
							 (uchar usonly,uchar bCmd,uchar mast,uchar pnum,TCmdGItem *p)

{
	uint local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	ulong local_14;
	ulong local_10;
	undefined4 local_c;
	
	local_24 = *(undefined4 *)&p->bLevel;
	local_20 = *(undefined4 *)&p->bDur;
	local_1c = *(undefined4 *)&p->wValue;
	local_18 = *(undefined4 *)&p->wCI;
	local_14 = p->dwSeed;
	local_10 = p->dwBuff;
	local_28._0_2_ = CONCAT11(mast,bCmd);
	local_28 = *(uint *)p & 0xff000000 | (uint)pnum << 0x10 | (uint)(ushort)local_28;
	if (usonly == '\0') {
		local_c = 0;
		NetSendLoPri__FPCUcUc((uchar *)&local_28,' ');
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd /*$a0*/, unsigned char mast /*$a1*/, unsigned char pnum /*$a2*/, struct TCmdGItem *p /*$a3*/)
 // line 1100, offset 0x8004fb08
	/* begin block 1 */
		// Start line: 1101
		// Start offset: 0x8004FB08
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -32
	/* end block 1 */
	// End offset: 0x8004FB5C
	// End Line: 1120

	/* begin block 2 */
		// Start line: 2541
	/* end block 2 */
	// End Line: 2542

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar NetSendCmdReq2__FUcUcUcPC9TCmdGItem(uchar bCmd,uchar mast,uchar pnum,TCmdGItem *p)

{
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p /*$a0*/)
 // line 1126, offset 0x8004fb68
	/* begin block 1 */
		// Start line: 1127
		// Start offset: 0x8004FB68
		// Variables:
	// 		struct TCmdGItem cmd; // stack offset -40
	/* end block 1 */
	// End offset: 0x8004FBC8
	// End Line: 1134

	/* begin block 2 */
		// Start line: 2606
	/* end block 2 */
	// End Line: 2607

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NetSendCmdExtra__FPC9TCmdGItem(TCmdGItem *p)

{
	undefined4 local_28;
	undefined4 local_24;
	undefined4 local_20;
	undefined4 local_1c;
	undefined4 local_18;
	ulong local_14;
	ulong local_10;
	undefined4 local_c;
	
	local_24 = *(undefined4 *)&p->bLevel;
	local_20 = *(undefined4 *)&p->bDur;
	local_1c = *(undefined4 *)&p->wValue;
	local_18 = *(undefined4 *)&p->wCI;
	local_14 = p->dwSeed;
	local_10 = p->dwBuff;
	local_28 = CONCAT31((int3)((uint)*(undefined4 *)p >> 8),0x55);
	local_c = 0;
	NetSendLoPri__FPCUcUc((uchar *)&local_28,' ');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri /*$a0*/, unsigned char bCmd /*$a1*/, unsigned char x /*$a2*/, unsigned char y /*$a3*/)
 // line 1138, offset 0x8004fbd8
	/* begin block 1 */
		// Start line: 1139
		// Start offset: 0x8004FBD8
		// Variables:
	// 		struct TCmdPItem cmd; // stack offset -32
	/* end block 1 */
	// End offset: 0x8004FCE4
	// End Line: 1187

	/* begin block 2 */
		// Start line: 2640
	/* end block 2 */
	// End Line: 2641

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NetSendCmdPItem__FUcUcUcUc(uchar bHiPri,uchar bCmd,uchar x,uchar y)

{
	uchar local_20;
	uchar local_1f;
	uchar local_1e;
	char local_1d;
	undefined local_1c;
	undefined local_1b;
	uchar local_1a;
	uchar local_19;
	undefined2 local_18;
	short local_16;
	ushort local_14;
	int local_10;
	int local_c;
	
	local_16 = (&plr)[myplr].HoldItem.IDidx;
	local_14 = (&plr)[myplr].HoldItem._iCreateInfo;
	local_10 = (&plr)[myplr].HoldItem._iSeed;
	local_1d = (&plr)[myplr].HoldItem._iIdentified;
	local_1c = (undefined)(&plr)[myplr].HoldItem._iDurability;
	local_1b = (undefined)(&plr)[myplr].HoldItem._iMaxDur;
	local_1a = (&plr)[myplr].HoldItem._iCharges;
	local_19 = (&plr)[myplr].HoldItem._iMaxCharges;
	local_18 = (undefined2)(&plr)[myplr].HoldItem._ivalue;
	local_c = (int)(&plr)[myplr].HoldItem._PlrCreate;
	local_20 = bCmd;
	local_1f = x;
	local_1e = y;
	NetSendLoPri__FPCUcUc(&local_20,'\x18');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdChItem__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char bLoc /*$a1*/)
 // line 1192, offset 0x8004fcf4
	/* begin block 1 */
		// Start line: 1193
		// Start offset: 0x8004FCF4
		// Variables:
	// 		struct TCmdChItem cmd; // stack offset -24
	/* end block 1 */
	// End offset: 0x8004FD88
	// End Line: 1207

	/* begin block 2 */
		// Start line: 2752
	/* end block 2 */
	// End Line: 2753

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NetSendCmdChItem__FUcUc(uchar bHiPri,uchar bLoc)

{
	uchar local_18;
	uchar local_17;
	short local_16;
	ushort local_14;
	int local_10;
	char local_c;
	
	local_18 = '0';
	local_16 = (&plr)[myplr].HoldItem.IDidx;
	local_14 = (&plr)[myplr].HoldItem._iCreateInfo;
	local_10 = (&plr)[myplr].HoldItem._iSeed;
	local_c = (&plr)[myplr].HoldItem._iIdentified;
	local_17 = bLoc;
	NetSendLoPri__FPCUcUc(&local_18,'\x10');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdDelItem__FUcUc(unsigned char bHiPri /*$a0*/, unsigned char bLoc /*$a1*/)
 // line 1212, offset 0x8004fd98
	/* begin block 1 */
		// Start line: 1213
		// Start offset: 0x8004FD98
		// Variables:
	// 		struct TCmdDelItem cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004FDB8
	// End Line: 1218

	/* begin block 2 */
		// Start line: 2803
	/* end block 2 */
	// End Line: 2804

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1223, offset 0x8004fdc8
	/* begin block 1 */
		// Start line: 1224
		// Start offset: 0x8004FDC8
		// Variables:
	// 		struct TCmdPItem cmd; // stack offset -32
	/* end block 1 */
	// End offset: 0x8004FEE0
	// End Line: 1270

	/* begin block 2 */
		// Start line: 2832
	/* end block 2 */
	// End Line: 2833

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NetSendCmdDItem__FUci(uchar bHiPri,int ii)

{
	uchar local_20;
	char local_1f;
	char local_1e;
	char local_1d;
	undefined local_1c;
	undefined local_1b;
	uchar local_1a;
	uchar local_19;
	undefined2 local_18;
	short local_16;
	ushort local_14;
	int local_10;
	int local_c;
	
	local_20 = '4';
	local_1f = item[ii]._ix;
	local_1e = item[ii]._iy;
	local_16 = item[ii].IDidx;
	local_14 = item[ii]._iCreateInfo;
	local_10 = item[ii]._iSeed;
	local_1d = item[ii]._iIdentified;
	local_1c = (undefined)item[ii]._iDurability;
	local_1b = (undefined)item[ii]._iMaxDur;
	local_1a = item[ii]._iCharges;
	local_19 = item[ii]._iMaxCharges;
	local_18 = (undefined2)item[ii]._ivalue;
	local_c = (int)item[ii]._PlrCreate;
	NetSendLoPri__FPCUcUc(&local_20,'\x18');
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ i_own_level__Fi(int nReqLevel /*$a0*/)
 // line 1274, offset 0x8004fef0
	/* begin block 1 */
		// Start line: 1275
		// Start offset: 0x8004FEF0
	/* end block 1 */
	// End offset: 0x8004FEF0
	// End Line: 1291

	/* begin block 2 */
		// Start line: 2959
	/* end block 2 */
	// End Line: 2960

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar i_own_level__Fi(int nReqLevel)

{
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ NetSendCmdDamage__FUcUcUl(unsigned char bHiPri /*$a0*/, unsigned char bPlr /*$a1*/, unsigned long dwDam /*$a2*/)
 // line 1296, offset 0x8004fef8
	/* begin block 1 */
		// Start line: 1297
		// Start offset: 0x8004FEF8
		// Variables:
	// 		struct TCmdDamage cmd; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004FF1C
	// End Line: 1305

	/* begin block 2 */
		// Start line: 2987
	/* end block 2 */
	// End Line: 2988

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ delta_close_portal__Fi(int pnum /*$a0*/)
 // line 1339, offset 0x8004ff2c
	/* begin block 1 */
		// Start line: 1340
		// Start offset: 0x8004FF2C
	/* end block 1 */
	// End offset: 0x8004FF5C
	// End Line: 1343

	/* begin block 2 */
		// Start line: 3084
	/* end block 2 */
	// End Line: 3085

/* WARNING: Unknown calling convention yet parameter storage is locked */

void delta_close_portal__Fi(int pnum)

{
	memset(sgJunk.portal + pnum,0xff,5);
	sgbDeltaChanged = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ check_update_plr__Fi(int pnum /*$a0*/)
 // line 1348, offset 0x8004ff6c
	/* begin block 1 */
		// Start line: 1349
		// Start offset: 0x8004FF6C
	/* end block 1 */
	// End offset: 0x8004FF6C
	// End Line: 1353

	/* begin block 2 */
		// Start line: 3113
	/* end block 2 */
	// End Line: 3114

/* WARNING: Unknown calling convention yet parameter storage is locked */

void check_update_plr__Fi(int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_WALKXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1368, offset 0x8004ff74
	/* begin block 1 */
		// Start line: 1369
		// Start offset: 0x8004FF74
	/* end block 1 */
	// End offset: 0x8004FFDC
	// End Line: 1376

	/* begin block 2 */
		// Start line: 3144
	/* end block 2 */
	// End Line: 3145

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_WALKXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ClrPlrPath__Fi(pnum);
	MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\x01');
	(&plr)[pnum].destAction = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$v1*/)
 // line 1384, offset 0x8004fff4
	/* begin block 1 */
		// Start line: 1385
		// Start offset: 0x8004FFF4
	/* end block 1 */
	// End offset: 0x80050014
	// End Line: 1398

	/* begin block 2 */
		// Start line: 3176
	/* end block 2 */
	// End Line: 3177

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1403, offset 0x80050024
	/* begin block 1 */
		// Start line: 1404
		// Start offset: 0x80050024
	/* end block 1 */
	// End offset: 0x80050044
	// End Line: 1412

	/* begin block 2 */
		// Start line: 3217
	/* end block 2 */
	// End Line: 3218

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1416, offset 0x80050054
	/* begin block 1 */
		// Start line: 1417
		// Start offset: 0x80050054
	/* end block 1 */
	// End offset: 0x80050074
	// End Line: 1429

	/* begin block 2 */
		// Start line: 3247
	/* end block 2 */
	// End Line: 3248

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1435, offset 0x80050084
	/* begin block 1 */
		// Start line: 1436
		// Start offset: 0x80050084
	/* end block 1 */
	// End offset: 0x800500A4
	// End Line: 1448

	/* begin block 2 */
		// Start line: 3293
	/* end block 2 */
	// End Line: 3294

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 1454, offset 0x800500b4
	/* begin block 1 */
		// Start line: 1455
		// Start offset: 0x800500B4
	/* end block 1 */
	// End offset: 0x80050120
	// End Line: 1461

	/* begin block 2 */
		// Start line: 3342
	/* end block 2 */
	// End Line: 3343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SBSPELL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	
	uVar2 = *(undefined2 *)(pCmd + 2);
	cVar1 = (&plr)[pnum]._pSBkSplType;
	(&plr)[pnum]._pSplFrom = '\x01';
	(&plr)[pnum].destAction = '\f';
	(&plr)[pnum]._pSpell = (char)uVar2;
	(&plr)[pnum]._pSplType = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1469, offset 0x80050128
	/* begin block 1 */
		// Start line: 1470
		// Start offset: 0x80050128
	/* end block 1 */
	// End offset: 0x80050198
	// End Line: 1476

	/* begin block 2 */
		// Start line: 3372
	/* end block 2 */
	// End Line: 3373

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_GOTOGETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\0');
	uVar1 = *(undefined2 *)(pCmd + 4);
	(&plr)[pnum].destAction = '\x0f';
	(&plr)[pnum].destParam1 = (char)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a1*/)
 // line 1482, offset 0x800501b0
	/* begin block 1 */
		// Start line: 1483
		// Start offset: 0x800501B0

		/* begin block 1.1 */
			// Start line: 1483
			// Start offset: 0x800501B0

			/* begin block 1.1.1 */
				// Start line: 1487
				// Start offset: 0x80050214
				// Variables:
			// 		int ii; // $s2
			/* end block 1.1.1 */
			// End offset: 0x800502CC
			// End Line: 1523
		/* end block 1.1 */
		// End offset: 0x800502CC
		// End Line: 1523
	/* end block 1 */
	// End offset: 0x800502CC
	// End Line: 1523

	/* begin block 2 */
		// Start line: 3403
	/* end block 2 */
	// End Line: 3404

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_REQUESTGITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte pnum_00;
	ushort ci;
	uchar uVar1;
	int iVar2;
	uint idx;
	
	uVar1 = i_own_level__Fi((&plr)[pnum].plrlevel);
	if (uVar1 != '\0') {
		idx = (uint)*(ushort *)(pCmd + 0xe);
		ci = *(ushort *)(pCmd + 0x10);
		iVar2 = FindGetItem__FiUsi(idx,ci,*(int *)(pCmd + 0x14));
		if (iVar2 == -1) {
			uVar1 = NetSendCmdReq2__FUcUcUcPC9TCmdGItem('\'',(uchar)myplr,pCmd[2].bCmd,(TCmdGItem *)pCmd);
			if (uVar1 == '\0') {
				NetSendCmdExtra__FPC9TCmdGItem((TCmdGItem *)pCmd);
			}
		}
		else {
			pnum_00 = pCmd[2].bCmd;
			NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\0','\b',(uchar)myplr,pnum_00,(TCmdGItem *)pCmd);
			if ((uint)pnum_00 == myplr) {
				FUN_8015e180((uint)pnum_00,iVar2,idx);
			}
			else {
				FUN_8015eeb8((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,idx,(uint)ci,*(undefined4 *)(pCmd + 0x14)
										);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_GETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 1532, offset 0x800502f0
	/* begin block 1 */
		// Start line: 1533
		// Start offset: 0x800502F0
		// Variables:
	// 		struct TCmdGItem *p; // $s1
	// 		int nIndex; // $s5

		/* begin block 1.1 */
			// Start line: 1533
			// Start offset: 0x800502F0

			/* begin block 1.1.1 */
				// Start line: 1546
				// Start offset: 0x8005034C

				/* begin block 1.1.1.1 */
					// Start line: 1550
					// Start offset: 0x8005034C

					/* begin block 1.1.1.1.1 */
						// Start line: 1551
						// Start offset: 0x80050378

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1552
							// Start offset: 0x80050378

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1557
								// Start offset: 0x80050390

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1557
									// Start offset: 0x80050390

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1558
										// Start offset: 0x800503A0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1559
											// Start offset: 0x800503A0

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1560
												// Start offset: 0x800503A8
												// Variables:
											// 		int hitem; // $a1
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8005043C
											// End Line: 1567
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80050454
										// End Line: 1570
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80050454
									// End Line: 1570
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80050464
								// End Line: 1574
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80050464
							// End Line: 1574
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80050464
						// End Line: 1574
					/* end block 1.1.1.1.1 */
					// End offset: 0x80050464
					// End Line: 1574
				/* end block 1.1.1.1 */
				// End offset: 0x80050464
				// End Line: 1574
			/* end block 1.1.1 */
			// End offset: 0x80050464
			// End Line: 1574
		/* end block 1.1 */
		// End offset: 0x8005049C
		// End Line: 1581
	/* end block 1 */
	// End offset: 0x8005049C
	// End Line: 1581

	/* begin block 2 */
		// Start line: 3506
	/* end block 2 */
	// End Line: 3507

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_GETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar bLevel;
	ushort ci;
	uchar uVar1;
	int iVar2;
	uint uVar3;
	uint idx;
	
	idx = (uint)*(ushort *)(pCmd + 0xe);
	ci = *(ushort *)(pCmd + 0x10);
	iVar2 = FindGetItem__FiUsi(idx,ci,*(int *)(pCmd + 0x14));
	bLevel = pCmd[4].bCmd;
	uVar1 = delta_get_item__FPC9TCmdGItemUc((TCmdGItem *)pCmd,bLevel);
	if (uVar1 == '\0') {
		NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\x01','\b',pCmd[1].bCmd,pCmd[2].bCmd,(TCmdGItem *)pCmd)
		;
	}
	else {
		if (((currlevel == bLevel) || ((uint)pCmd[2].bCmd == myplr)) && ((uint)pCmd[1].bCmd != myplr)) {
			uVar3 = (uint)pCmd[2].bCmd;
			if (uVar3 == myplr) {
				if (currlevel == bLevel) {
					FUN_8015e180(uVar3,iVar2);
				}
				else {
					iVar2 = FUN_8015f504(uVar3,(int)(&plr)[uVar3]._px,(int)(&plr)[uVar3]._py,idx,(uint)ci,
															 *(undefined4 *)(pCmd + 0x14),(uint)pCmd[7].bCmd,(uint)pCmd[8].bCmd,
															 (uint)pCmd[9].bCmd,(uint)pCmd[10].bCmd,(uint)pCmd[0xb].bCmd,
															 (uint)*(ushort *)(pCmd + 0xc),*(undefined4 *)(pCmd + 0x18));
					if (iVar2 != -1) {
						FUN_8015e180(myplr);
					}
				}
			}
			else {
				FUN_8015eeb8((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,idx,(uint)ci,*(undefined4 *)(pCmd + 0x14)
										);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1589, offset 0x800504c4
	/* begin block 1 */
		// Start line: 1590
		// Start offset: 0x800504C4
	/* end block 1 */
	// End offset: 0x80050534
	// End Line: 1597

	/* begin block 2 */
		// Start line: 3642
	/* end block 2 */
	// End Line: 3643

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_GOTOAGETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\0');
	uVar1 = *(undefined2 *)(pCmd + 4);
	(&plr)[pnum].destAction = '\x10';
	(&plr)[pnum].destParam1 = (char)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$a1*/)
 // line 1603, offset 0x8005054c
	/* begin block 1 */
		// Start line: 1604
		// Start offset: 0x8005054C

		/* begin block 1.1 */
			// Start line: 1604
			// Start offset: 0x8005054C

			/* begin block 1.1.1 */
				// Start line: 1608
				// Start offset: 0x800505AC
			/* end block 1.1.1 */
			// End offset: 0x80050660
			// End Line: 1646
		/* end block 1.1 */
		// End offset: 0x80050660
		// End Line: 1646
	/* end block 1 */
	// End offset: 0x80050660
	// End Line: 1646

	/* begin block 2 */
		// Start line: 3676
	/* end block 2 */
	// End Line: 3677

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_REQUESTAGITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte pnum_00;
	ushort ci;
	uchar uVar1;
	int iVar2;
	uint idx;
	
	uVar1 = i_own_level__Fi((&plr)[pnum].plrlevel);
	if (uVar1 != '\0') {
		idx = (uint)*(ushort *)(pCmd + 0xe);
		ci = *(ushort *)(pCmd + 0x10);
		iVar2 = FindGetItem__FiUsi(idx,ci,*(int *)(pCmd + 0x14));
		if (iVar2 == -1) {
			uVar1 = NetSendCmdReq2__FUcUcUcPC9TCmdGItem('(',(uchar)myplr,pCmd[2].bCmd,(TCmdGItem *)pCmd);
			if (uVar1 == '\0') {
				NetSendCmdExtra__FPC9TCmdGItem((TCmdGItem *)pCmd);
			}
		}
		else {
			pnum_00 = pCmd[2].bCmd;
			NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem('\0','\t',(uchar)myplr,pnum_00,(TCmdGItem *)pCmd);
			if ((uint)pnum_00 == myplr) {
				FUN_8015e45c((uint)pnum_00,(uint)pCmd[3].bCmd,idx);
			}
			else {
				FUN_8015eeb8((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,idx,(uint)ci,*(undefined4 *)(pCmd + 0x14)
										);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 1654, offset 0x80050680
	/* begin block 1 */
		// Start line: 1655
		// Start offset: 0x80050680
		// Variables:
	// 		struct TCmdGItem *p; // $s1

		/* begin block 1.1 */
			// Start line: 1655
			// Start offset: 0x80050680

			/* begin block 1.1.1 */
				// Start line: 1670
				// Start offset: 0x800506D4

				/* begin block 1.1.1.1 */
					// Start line: 1675
					// Start offset: 0x800506D4

					/* begin block 1.1.1.1.1 */
						// Start line: 1676
						// Start offset: 0x80050700

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1678
							// Start offset: 0x80050700

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1682
								// Start offset: 0x80050718

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1682
									// Start offset: 0x80050718

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1683
										// Start offset: 0x80050728

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1687
											// Start offset: 0x80050728

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1688
												// Start offset: 0x80050730
												// Variables:
											// 		int hitem; // $a1
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800507C4
											// End Line: 1695
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800507DC
										// End Line: 1698
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800507DC
									// End Line: 1698
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800507F0
								// End Line: 1703
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800507F0
							// End Line: 1703
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800507F0
						// End Line: 1703
					/* end block 1.1.1.1.1 */
					// End offset: 0x800507F0
					// End Line: 1703
				/* end block 1.1.1.1 */
				// End offset: 0x800507F0
				// End Line: 1703
			/* end block 1.1.1 */
			// End offset: 0x800507F0
			// End Line: 1703
		/* end block 1.1 */
		// End offset: 0x80050828
		// End Line: 1710
	/* end block 1 */
	// End offset: 0x80050828
	// End Line: 1710

	/* begin block 2 */
		// Start line: 3781
	/* end block 2 */
	// End Line: 3782

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_AGETITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar bLevel;
	ushort ci;
	uchar uVar1;
	int iVar2;
	uint uVar3;
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
			uVar3 = (uint)pCmd[2].bCmd;
			if (uVar3 == myplr) {
				if (currlevel == bLevel) {
					FUN_8015e45c(uVar3,(uint)pCmd[3].bCmd);
				}
				else {
					iVar2 = FUN_8015f504(uVar3,(int)(&plr)[uVar3]._px,(int)(&plr)[uVar3]._py,idx,(uint)ci,
															 *(undefined4 *)(pCmd + 0x14),(uint)pCmd[7].bCmd,(uint)pCmd[8].bCmd,
															 (uint)pCmd[9].bCmd,(uint)pCmd[10].bCmd,(uint)pCmd[0xb].bCmd,
															 (uint)*(ushort *)(pCmd + 0xc),*(undefined4 *)(pCmd + 0x18));
					if (iVar2 != -1) {
						FUN_8015e45c(myplr);
					}
				}
			}
			else {
				FUN_8015eeb8((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,idx,(uint)ci,*(undefined4 *)(pCmd + 0x14)
										);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a1*/)
 // line 1717, offset 0x8005084c
	/* begin block 1 */
		// Start line: 1718
		// Start offset: 0x8005084C
	/* end block 1 */
	// End offset: 0x80050884
	// End Line: 1732

	/* begin block 2 */
		// Start line: 3922
	/* end block 2 */
	// End Line: 3923

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_ITEMEXTRA__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	delta_get_item__FPC9TCmdGItemUc((TCmdGItem *)pCmd,pCmd[4].bCmd);
	FUN_8015eeb8((uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)*(ushort *)(pCmd + 0xe),
							 (uint)*(ushort *)(pCmd + 0x10),*(undefined4 *)(pCmd + 0x14));
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1741, offset 0x80050898
	/* begin block 1 */
		// Start line: 1742
		// Start offset: 0x80050898
		// Variables:
	// 		int ii; // $v1
	/* end block 1 */
	// End offset: 0x80050960
	// End Line: 1787

	/* begin block 2 */
		// Start line: 3983
	/* end block 2 */
	// End Line: 3984

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_PUTITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int iVar1;
	
	if (numitems < 0x7a) {
		iVar1 = FUN_8015f16c(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd);
		if (iVar1 != -1) {
			delta_put_item__FPC9TCmdPItemiiUc
								((TCmdPItem *)pCmd,(int)item[iVar1]._ix,(int)item[iVar1]._iy,
								 *(uchar *)&(&plr)[pnum].plrlevel);
			check_update_plr__Fi(pnum);
		}
		check_update_plr__Fi(pnum);
	}
	else {
		PlaySFX__Fi(IS_TITERR);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$s1*/)
 // line 1795, offset 0x80050978
	/* begin block 1 */
		// Start line: 1796
		// Start offset: 0x80050978
		// Variables:
	// 		int ii; // $v1
	/* end block 1 */
	// End offset: 0x80050A64
	// End Line: 1815

	/* begin block 2 */
		// Start line: 4091
	/* end block 2 */
	// End Line: 4092

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SYNCPUTITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int iVar1;
	
	iVar1 = FUN_8015f504(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 10),
											 (uint)*(ushort *)(pCmd + 0xc),*(undefined4 *)(pCmd + 0x10),(uint)pCmd[3].bCmd
											 ,(uint)pCmd[4].bCmd,(uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)pCmd[7].bCmd,
											 (uint)*(ushort *)(pCmd + 8),*(undefined4 *)(pCmd + 0x14));
	if (iVar1 != -1) {
		delta_put_item__FPC9TCmdPItemiiUc
							((TCmdPItem *)pCmd,(int)item[iVar1]._ix,(int)item[iVar1]._iy,
							 *(uchar *)&(&plr)[pnum].plrlevel);
		check_update_plr__Fi(pnum);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 1834, offset 0x80050a7c
	/* begin block 1 */
		// Start line: 1835
		// Start offset: 0x80050A7C
		// Variables:
	// 		struct TCmdPItem *p; // $s0
	/* end block 1 */
	// End offset: 0x80050B80
	// End Line: 1845

	/* begin block 2 */
		// Start line: 4176
	/* end block 2 */
	// End Line: 4177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_RESPAWNITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (((uint)currlevel == (&plr)[pnum].plrlevel) && (pnum != myplr)) {
		FUN_8015f504(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 10),
								 (uint)*(ushort *)(pCmd + 0xc),*(undefined4 *)(pCmd + 0x10),(uint)pCmd[3].bCmd,
								 (uint)pCmd[4].bCmd,(uint)pCmd[5].bCmd,(uint)pCmd[6].bCmd,(uint)pCmd[7].bCmd,
								 (uint)*(ushort *)(pCmd + 8),*(undefined4 *)(pCmd + 0x14));
	}
	delta_put_item__FPC9TCmdPItemiiUc
						((TCmdPItem *)pCmd,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,
						 *(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1851, offset 0x80050b98
	/* begin block 1 */
		// Start line: 1852
		// Start offset: 0x80050B98
	/* end block 1 */
	// End offset: 0x80050C0C
	// End Line: 1860

	/* begin block 2 */
		// Start line: 4213
	/* end block 2 */
	// End Line: 4214

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SATTACKXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	
	ClrPlrPath__Fi(pnum);
	uVar1 = pCmd[1].bCmd;
	uVar2 = pCmd[2].bCmd;
	(&plr)[pnum].destAction = '\t';
	(&plr)[pnum].destParam1 = uVar1;
	(&plr)[pnum].destParam2 = uVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1866, offset 0x80050c24
	/* begin block 1 */
		// Start line: 1867
		// Start offset: 0x80050C24
	/* end block 1 */
	// End offset: 0x80050CF0
	// End Line: 1883

	/* begin block 2 */
		// Start line: 4245
	/* end block 2 */
	// End Line: 4246

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SPELLXYD__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	undefined2 uVar4;
	undefined2 uVar5;
	undefined2 uVar6;
	
	uVar4 = *(undefined2 *)(pCmd + 4);
	ClrPlrPath__Fi(pnum);
	uVar1 = pCmd[1].bCmd;
	uVar2 = pCmd[2].bCmd;
	uVar5 = *(undefined2 *)(pCmd + 6);
	uVar6 = *(undefined2 *)(pCmd + 8);
	cVar3 = (&plr)[pnum]._pRSplType;
	(&plr)[pnum].destAction = '\x1a';
	(&plr)[pnum]._pSplFrom = '\0';
	(&plr)[pnum].destParam1 = uVar1;
	(&plr)[pnum].destParam2 = uVar2;
	(&plr)[pnum].destParam3 = (char)uVar5;
	(&plr)[pnum].destParam4 = (char)uVar6;
	(&plr)[pnum]._pSpell = (char)uVar4;
	(&plr)[pnum]._pSplType = cVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1890, offset 0x80050d0c
	/* begin block 1 */
		// Start line: 1891
		// Start offset: 0x80050D0C
	/* end block 1 */
	// End offset: 0x80050DC8
	// End Line: 1906

	/* begin block 2 */
		// Start line: 4311
	/* end block 2 */
	// End Line: 4312

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SPELLXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	undefined2 uVar4;
	undefined2 uVar5;
	
	uVar4 = *(undefined2 *)(pCmd + 4);
	ClrPlrPath__Fi(pnum);
	uVar1 = pCmd[1].bCmd;
	uVar2 = pCmd[2].bCmd;
	uVar5 = *(undefined2 *)(pCmd + 6);
	cVar3 = (&plr)[pnum]._pRSplType;
	(&plr)[pnum].destAction = '\f';
	(&plr)[pnum]._pSplFrom = '\0';
	(&plr)[pnum].destParam1 = uVar1;
	(&plr)[pnum].destParam2 = uVar2;
	(&plr)[pnum].destParam3 = (char)uVar5;
	(&plr)[pnum]._pSpell = (char)uVar4;
	(&plr)[pnum]._pSplType = cVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 1912, offset 0x80050de4
	/* begin block 1 */
		// Start line: 1913
		// Start offset: 0x80050DE4
	/* end block 1 */
	// End offset: 0x80050EA4
	// End Line: 1928

	/* begin block 2 */
		// Start line: 4371
	/* end block 2 */
	// End Line: 4372

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_TSPELLXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	undefined2 uVar4;
	undefined2 uVar5;
	
	uVar4 = *(undefined2 *)(pCmd + 4);
	ClrPlrPath__Fi(pnum);
	uVar1 = pCmd[1].bCmd;
	uVar2 = pCmd[2].bCmd;
	uVar5 = *(undefined2 *)(pCmd + 6);
	cVar3 = (&plr)[pnum]._pTSplType;
	(&plr)[pnum].destAction = '\f';
	(&plr)[pnum]._pSplFrom = '\x02';
	(&plr)[pnum].destParam1 = uVar1;
	(&plr)[pnum].destParam2 = uVar2;
	(&plr)[pnum].destParam3 = (char)uVar5;
	(&plr)[pnum]._pSpell = (char)uVar4;
	(&plr)[pnum]._pSplType = cVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 1934, offset 0x80050ec0
	/* begin block 1 */
		// Start line: 1935
		// Start offset: 0x80050EC0
		// Variables:
	// 		struct TCmdLocParam1 *p; // $s1
	/* end block 1 */
	// End offset: 0x80050F88
	// End Line: 1946

	/* begin block 2 */
		// Start line: 4431
	/* end block 2 */
	// End Line: 4432

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_OPOBJXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	uchar endspace;
	
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
	(&plr)[pnum].destAction = '\r';
	(&plr)[pnum].destParam1 = (char)uVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 1952, offset 0x80050fa0
	/* begin block 1 */
		// Start line: 1953
		// Start offset: 0x80050FA0
		// Variables:
	// 		struct TCmdLocParam1 *p; // $s1
	/* end block 1 */
	// End offset: 0x80051068
	// End Line: 1964

	/* begin block 2 */
		// Start line: 4473
	/* end block 2 */
	// End Line: 4474

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_DISARMXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	byte bVar1;
	byte bVar2;
	undefined2 uVar3;
	uchar endspace;
	
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
	(&plr)[pnum].destAction = '\x0e';
	(&plr)[pnum].destParam1 = (char)uVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 1971, offset 0x80051080
	/* begin block 1 */
		// Start line: 1972
		// Start offset: 0x80051080
	/* end block 1 */
	// End offset: 0x800510C4
	// End Line: 1978

	/* begin block 2 */
		// Start line: 4522
	/* end block 2 */
	// End Line: 4523

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_OPOBJT__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	uVar1 = *(undefined2 *)(pCmd + 2);
	(&plr)[pnum].destAction = '\x12';
	(&plr)[pnum].destParam1 = (char)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 1984, offset 0x800510cc
	/* begin block 1 */
		// Start line: 1985
		// Start offset: 0x800510CC
		// Variables:
	// 		struct TCmdParam1 *p; // $s3
	// 		int dx; // $s0
	// 		int dy; // $v0
	/* end block 1 */
	// End offset: 0x800511E8
	// End Line: 1997

	/* begin block 2 */
		// Start line: 4544
	/* end block 2 */
	// End Line: 4545

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_ATTACKID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	
	uVar4 = (uint)*(ushort *)(pCmd + 2);
	iVar2 = abs((int)(&plr)[pnum]._px - (int)monster[uVar4]._mfutx);
	iVar3 = abs((int)(&plr)[pnum]._py - (int)monster[uVar4]._mfuty);
	if ((1 < iVar2) || (1 < iVar3)) {
		MakePlrPath__FiiiUc(pnum,(int)monster[uVar4]._mfutx,(int)monster[uVar4]._mfuty,'\0');
	}
	uVar1 = *(undefined2 *)(pCmd + 2);
	(&plr)[pnum].destAction = '\x14';
	(&plr)[pnum].destParam1 = (char)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 2003, offset 0x80051208
	/* begin block 1 */
		// Start line: 2004
		// Start offset: 0x80051208
	/* end block 1 */
	// End offset: 0x800512B4
	// End Line: 2018

	/* begin block 2 */
		// Start line: 4592
	/* end block 2 */
	// End Line: 4593

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SPELLID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	uVar2 = *(undefined2 *)(pCmd + 4);
	ClrPlrPath__Fi(pnum);
	uVar3 = *(undefined2 *)(pCmd + 2);
	uVar4 = *(undefined2 *)(pCmd + 6);
	cVar1 = (&plr)[pnum]._pRSplType;
	(&plr)[pnum].destAction = '\x18';
	(&plr)[pnum]._pSplFrom = '\0';
	(&plr)[pnum].destParam1 = (char)uVar3;
	(&plr)[pnum].destParam2 = (char)uVar4;
	(&plr)[pnum]._pSpell = (char)uVar2;
	(&plr)[pnum]._pSplType = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 2024, offset 0x800512d0
	/* begin block 1 */
		// Start line: 2025
		// Start offset: 0x800512D0
	/* end block 1 */
	// End offset: 0x80051378
	// End Line: 2036

	/* begin block 2 */
		// Start line: 4648
	/* end block 2 */
	// End Line: 4649

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_SPELLPID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	ClrPlrPath__Fi(pnum);
	uVar2 = *(undefined2 *)(pCmd + 2);
	uVar3 = *(undefined2 *)(pCmd + 6);
	uVar4 = *(undefined2 *)(pCmd + 4);
	cVar1 = (&plr)[pnum]._pRSplType;
	(&plr)[pnum].destAction = '\x19';
	(&plr)[pnum]._pSplFrom = '\0';
	(&plr)[pnum].destParam1 = (char)uVar2;
	(&plr)[pnum].destParam2 = (char)uVar3;
	(&plr)[pnum]._pSpell = (char)uVar4;
	(&plr)[pnum]._pSplType = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 2043, offset 0x80051390
	/* begin block 1 */
		// Start line: 2044
		// Start offset: 0x80051390
	/* end block 1 */
	// End offset: 0x8005143C
	// End Line: 2054

	/* begin block 2 */
		// Start line: 4694
	/* end block 2 */
	// End Line: 4695

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_TSPELLID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	ClrPlrPath__Fi(pnum);
	uVar2 = *(undefined2 *)(pCmd + 2);
	uVar3 = *(undefined2 *)(pCmd + 6);
	uVar4 = *(undefined2 *)(pCmd + 4);
	cVar1 = (&plr)[pnum]._pTSplType;
	(&plr)[pnum].destAction = '\x18';
	(&plr)[pnum]._pSplFrom = '\x02';
	(&plr)[pnum].destParam1 = (char)uVar2;
	(&plr)[pnum].destParam2 = (char)uVar3;
	(&plr)[pnum]._pSpell = (char)uVar4;
	(&plr)[pnum]._pSplType = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 2060, offset 0x80051454
	/* begin block 1 */
		// Start line: 2061
		// Start offset: 0x80051454
	/* end block 1 */
	// End offset: 0x80051500
	// End Line: 2072

	/* begin block 2 */
		// Start line: 4736
	/* end block 2 */
	// End Line: 4737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_TSPELLPID__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	char cVar1;
	undefined2 uVar2;
	undefined2 uVar3;
	undefined2 uVar4;
	
	ClrPlrPath__Fi(pnum);
	uVar2 = *(undefined2 *)(pCmd + 2);
	uVar3 = *(undefined2 *)(pCmd + 6);
	uVar4 = *(undefined2 *)(pCmd + 4);
	cVar1 = (&plr)[pnum]._pTSplType;
	(&plr)[pnum].destAction = '\x19';
	(&plr)[pnum]._pSplFrom = '\x02';
	(&plr)[pnum].destParam1 = (char)uVar2;
	(&plr)[pnum].destParam2 = (char)uVar3;
	(&plr)[pnum]._pSpell = (char)uVar4;
	(&plr)[pnum]._pSplType = cVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 2078, offset 0x80051518
	/* begin block 1 */
		// Start line: 2079
		// Start offset: 0x80051518
	/* end block 1 */
	// End offset: 0x800515BC
	// End Line: 2085

	/* begin block 2 */
		// Start line: 4780
	/* end block 2 */
	// End Line: 4781

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_KNOCKBACK__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int iVar1;
	uint uVar2;
	
	uVar2 = (uint)*(ushort *)(pCmd + 2);
	iVar1 = GetDirection__Fiiii((int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py,(int)monster[uVar2]._mx,
															(int)monster[uVar2]._my);
	FUN_8014b0bc(uVar2,iVar1);
	FUN_8014b2d8(uVar2,pnum,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2091, offset 0x800515d4
	/* begin block 1 */
		// Start line: 2092
		// Start offset: 0x800515D4
	/* end block 1 */
	// End offset: 0x800515F8
	// End Line: 2096

	/* begin block 2 */
		// Start line: 4810
	/* end block 2 */
	// End Line: 4811

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_RESURRECT__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	DoResurrect__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	check_update_plr__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2101, offset 0x8005160c
	/* begin block 1 */
		// Start line: 2102
		// Start offset: 0x8005160C
	/* end block 1 */
	// End offset: 0x80051624
	// End Line: 2106

	/* begin block 2 */
		// Start line: 4832
	/* end block 2 */
	// End Line: 4833

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_HEALOTHER__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	DoHealOther__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_TALKXY__FPC4TCmdi(struct TCmd *pCmd /*$s1*/, int pnum /*$s0*/)
 // line 2112, offset 0x80051634
	/* begin block 1 */
		// Start line: 2113
		// Start offset: 0x80051634
	/* end block 1 */
	// End offset: 0x800516A4
	// End Line: 2120

	/* begin block 2 */
		// Start line: 4858
	/* end block 2 */
	// End Line: 4859

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_TALKXY__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	undefined2 uVar1;
	
	MakePlrPath__FiiiUc(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,'\0');
	uVar1 = *(undefined2 *)(pCmd + 4);
	(&plr)[pnum].destAction = '\x11';
	(&plr)[pnum].destParam1 = (char)uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd /*$v0*/, int pnum /*$a1*/)
 // line 2127, offset 0x800516bc
	/* begin block 1 */
		// Start line: 2128
		// Start offset: 0x800516BC
	/* end block 1 */
	// End offset: 0x800516DC
	// End Line: 2132

	/* begin block 2 */
		// Start line: 4894
	/* end block 2 */
	// End Line: 4895

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_NEWLVL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	StartNewLvl__Fiii(pnum,(uint)*(ushort *)(pCmd + 2),(uint)*(ushort *)(pCmd + 4));
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_WARP__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$s1*/)
 // line 2138, offset 0x800516ec
	/* begin block 1 */
		// Start line: 2139
		// Start offset: 0x800516EC
	/* end block 1 */
	// End offset: 0x800517E8
	// End Line: 2154

	/* begin block 2 */
		// Start line: 4920
	/* end block 2 */
	// End Line: 4921

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_WARP__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	
	InitGamePadVars__Fv();
	PA_SetPauseOk__Fb((void *)0x0);
	FadeGameOut__Fv();
	StartWarpLvl__Fii(pnum,(uint)*(ushort *)(pCmd + 2));
	TeleStop__Fi(pnum);
	if ((pnum == myplr) && (0xb < (&_pcurs)[pnum])) {
		pIVar6 = &(&plr)[pnum].HoldItem;
		pIVar1 = &ItemStruct_800d52e8;
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
		} while (pIVar6 != (ItemStruct *)&(&plr)[pnum].HoldItem._iSufPower);
		iVar2 = pIVar5->_ivalue;
		iVar3 = pIVar5->_iIvalue;
		((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar6->_iVAdd1;
		pIVar7->_ivalue = iVar2;
		pIVar7->_iIvalue = iVar3;
		FUN_8015e45c(myplr,0x7f);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd /*$s0*/, int pnum /*$a3*/)
 // line 2161, offset 0x80051800
	/* begin block 1 */
		// Start line: 2162
		// Start offset: 0x80051800

		/* begin block 1.1 */
			// Start line: 2162
			// Start offset: 0x80051800

			/* begin block 1.1.1 */
				// Start line: 2164
				// Start offset: 0x80051824
			/* end block 1.1.1 */
			// End offset: 0x8005189C
			// End Line: 2168
		/* end block 1.1 */
		// End offset: 0x8005189C
		// End Line: 2168
	/* end block 1 */
	// End offset: 0x8005189C
	// End Line: 2168

	/* begin block 2 */
		// Start line: 4966
	/* end block 2 */
	// End Line: 4967

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_MONSTDEATH__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum != myplr) {
		if ((uint)currlevel == (&plr)[pnum].plrlevel) {
			FUN_8014c4e0((uint)*(ushort *)(pCmd + 4),(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd);
		}
		delta_kill_monster__FiUcUcUc
							((uint)*(ushort *)(pCmd + 4),pCmd[1].bCmd,pCmd[2].bCmd,
							 *(uchar *)&(&plr)[pnum].plrlevel);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd /*$v1*/, int pnum /*$a0*/)
 // line 2174, offset 0x800518b4
	/* begin block 1 */
		// Start line: 2175
		// Start offset: 0x800518B4

		/* begin block 1.1 */
			// Start line: 2175
			// Start offset: 0x800518B4

			/* begin block 1.1.1 */
				// Start line: 2177
				// Start offset: 0x800518D0
			/* end block 1.1.1 */
			// End offset: 0x80051910
			// End Line: 2181
		/* end block 1.1 */
		// End offset: 0x80051910
		// End Line: 2181
	/* end block 1 */
	// End offset: 0x80051910
	// End Line: 2181

	/* begin block 2 */
		// Start line: 4993
	/* end block 2 */
	// End Line: 4994

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_KILLGOLEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum != myplr) {
		delta_kill_monster__FiUcUcUc(pnum,pCmd[1].bCmd,pCmd[2].bCmd,*(uchar *)&(&plr)[pnum].plrlevel);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd /*$t0*/, int pnum /*$a2*/)
 // line 2187, offset 0x80051920
	/* begin block 1 */
		// Start line: 2188
		// Start offset: 0x80051920

		/* begin block 1.1 */
			// Start line: 2188
			// Start offset: 0x80051920

			/* begin block 1.1.1 */
				// Start line: 2188
				// Start offset: 0x80051920

				/* begin block 1.1.1.1 */
					// Start line: 2194
					// Start offset: 0x8005193C
					// Variables:
				// 		unsigned char addok; // $a3

					/* begin block 1.1.1.1.1 */
						// Start line: 2195
						// Start offset: 0x8005193C
						// Variables:
					// 		int i; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2197
							// Start offset: 0x80051958
							// Variables:
						// 		int mi; // $v0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800519B4
						// End Line: 2202
					/* end block 1.1.1.1.1 */
					// End offset: 0x800519C0
					// End Line: 2203
				/* end block 1.1.1.1 */
				// End offset: 0x80051A30
				// End Line: 2208
			/* end block 1.1.1 */
			// End offset: 0x80051A30
			// End Line: 2208
		/* end block 1.1 */
		// End offset: 0x80051A30
		// End Line: 2208
	/* end block 1 */
	// End offset: 0x80051A30
	// End Line: 2208

	/* begin block 2 */
		// Start line: 5020
	/* end block 2 */
	// End Line: 5021

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_AWAKEGOLEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	bool bVar1;
	short *psVar2;
	int iVar3;
	
	if (pnum != myplr) {
		bVar1 = true;
		iVar3 = 0;
		psVar2 = &missileactive;
		while (iVar3 < nummissiles) {
			if ((missile[(int)*psVar2]._mitype == '!') && ((int)missile[(int)*psVar2]._misource == pnum))
			{
				bVar1 = false;
			}
			psVar2 = psVar2 + 1;
			iVar3 = iVar3 + 1;
		}
		if (bVar1) {
			FUN_80142a04((int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd
									 ,(uint)pCmd[3].bCmd,0x21,0,pnum,0,1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd /*$t0*/, int pnum /*$a1*/)
 // line 2216, offset 0x80051a40
	/* begin block 1 */
		// Start line: 2217
		// Start offset: 0x80051A40

		/* begin block 1.1 */
			// Start line: 2217
			// Start offset: 0x80051A40

			/* begin block 1.1.1 */
				// Start line: 2219
				// Start offset: 0x80051A58
			/* end block 1.1.1 */
			// End offset: 0x80051B20
			// End Line: 2233
		/* end block 1.1 */
		// End offset: 0x80051B20
		// End Line: 2233
	/* end block 1 */
	// End offset: 0x80051B20
	// End Line: 2233

	/* begin block 2 */
		// Start line: 5083
	/* end block 2 */
	// End Line: 5084

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_MONSTDAMAGE__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uint mi;
	int iVar1;
	
	if (pnum != myplr) {
		mi = (uint)*(ushort *)(pCmd + 2);
		iVar1 = monster[mi]._mhitpoints;
		monster[mi].mWhoHit = monster[mi].mWhoHit | (byte)(1 << (pnum & 0x1fU));
		if (iVar1 != 0) {
			iVar1 = iVar1 - (uint)*(ushort *)(pCmd + 4);
			monster[mi]._mhitpoints = iVar1;
			if (iVar1 >> 6 < 1) {
				monster[mi]._mhitpoints = 0x40;
			}
			delta_monster_hp__FilUc(mi,monster[mi]._mhitpoints,*(uchar *)&(&plr)[pnum].plrlevel);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd /*$v1*/, int pnum /*$a0*/)
 // line 2246, offset 0x80051b30
	/* begin block 1 */
		// Start line: 2247
		// Start offset: 0x80051B30

		/* begin block 1.1 */
			// Start line: 2247
			// Start offset: 0x80051B30

			/* begin block 1.1.1 */
				// Start line: 2249
				// Start offset: 0x80051B4C
			/* end block 1.1.1 */
			// End offset: 0x80051B4C
			// End Line: 2251
		/* end block 1.1 */
		// End offset: 0x80051B68
		// End Line: 2254
	/* end block 1 */
	// End offset: 0x80051B68
	// End Line: 2254

	/* begin block 2 */
		// Start line: 5146
	/* end block 2 */
	// End Line: 5147

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2260, offset 0x80051b78
	/* begin block 1 */
		// Start line: 2261
		// Start offset: 0x80051B78
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	/* end block 1 */
	// End offset: 0x80051C7C
	// End Line: 2314

	/* begin block 2 */
		// Start line: 5175
	/* end block 2 */
	// End Line: 5176

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_PLRDAMAGE__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	long lVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	int iVar5;
	
	uVar2 = (uint)pCmd[1].bCmd;
	if ((((currlevel != '\0') && (gbBufferMsgs != '\x01')) &&
			((uint)currlevel == (&plr)[uVar2].plrlevel)) &&
		 ((uVar4 = *(uint *)(pCmd + 4), uVar4 < 0x2ee01 && (0 < (&plr)[uVar2]._pHitPoints >> 6)))) {
		(&plr)[uVar2]._pHitPoints = (&plr)[uVar2]._pHitPoints - uVar4;
		iVar3 = (&plr)[uVar2]._pHitPoints;
		iVar5 = (&plr)[uVar2]._pMaxHP;
		(&plr)[uVar2]._pHPBase = (&plr)[uVar2]._pHPBase - uVar4;
		if (iVar5 < iVar3) {
			lVar1 = (&plr)[uVar2]._pMaxHPBase;
			(&plr)[uVar2]._pHitPoints = iVar5;
			(&plr)[uVar2]._pHPBase = lVar1;
		}
		if ((&plr)[pnum]._pHitPoints >> 6 < 1) {
			StartPlrKill__FP12PlayerStructi(&plr + pnum,1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2323, offset 0x80051c8c
	/* begin block 1 */
		// Start line: 2324
		// Start offset: 0x80051C8C
	/* end block 1 */
	// End offset: 0x80051CF0
	// End Line: 2330

	/* begin block 2 */
		// Start line: 5314
	/* end block 2 */
	// End Line: 5315

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_OPENDOOR__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ushort uVar1;
	
	uVar1 = *(ushort *)(pCmd + 2);
	SyncOpObject__Fiii(pnum,0x2b,(uint)uVar1);
	delta_sync_object__FiUcUc((uint)uVar1,'+',*(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2336, offset 0x80051d08
	/* begin block 1 */
		// Start line: 2337
		// Start offset: 0x80051D08
	/* end block 1 */
	// End offset: 0x80051D6C
	// End Line: 2343

	/* begin block 2 */
		// Start line: 5344
	/* end block 2 */
	// End Line: 5345

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_CLOSEDOOR__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ushort uVar1;
	
	uVar1 = *(ushort *)(pCmd + 2);
	SyncOpObject__Fiii(pnum,0x2c,(uint)uVar1);
	delta_sync_object__FiUcUc((uint)uVar1,',',*(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2349, offset 0x80051d84
	/* begin block 1 */
		// Start line: 2350
		// Start offset: 0x80051D84
	/* end block 1 */
	// End offset: 0x80051DE8
	// End Line: 2356

	/* begin block 2 */
		// Start line: 5374
	/* end block 2 */
	// End Line: 5375

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_OPERATEOBJ__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ushort uVar1;
	
	uVar1 = *(ushort *)(pCmd + 2);
	SyncOpObject__Fiii(pnum,0x2d,(uint)uVar1);
	delta_sync_object__FiUcUc((uint)uVar1,'-',*(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2362, offset 0x80051e00
	/* begin block 1 */
		// Start line: 2363
		// Start offset: 0x80051E00
	/* end block 1 */
	// End offset: 0x80051E64
	// End Line: 2369

	/* begin block 2 */
		// Start line: 5404
	/* end block 2 */
	// End Line: 5405

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_PLROPOBJ__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ushort uVar1;
	
	uVar1 = *(ushort *)(pCmd + 4);
	SyncOpObject__Fiii((uint)*(ushort *)(pCmd + 2),0x2e,(uint)uVar1);
	delta_sync_object__FiUcUc((uint)uVar1,'.',*(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2374, offset 0x80051e7c
	/* begin block 1 */
		// Start line: 2375
		// Start offset: 0x80051E7C
	/* end block 1 */
	// End offset: 0x80051EDC
	// End Line: 2380

	/* begin block 2 */
		// Start line: 5432
	/* end block 2 */
	// End Line: 5433

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_BREAKOBJ__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ushort uVar1;
	
	uVar1 = *(ushort *)(pCmd + 4);
	SyncBreakObj__Fii((uint)*(ushort *)(pCmd + 2),(uint)uVar1);
	delta_sync_object__FiUcUc((uint)uVar1,'/',*(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2385, offset 0x80051ef4
	/* begin block 1 */
		// Start line: 2386
		// Start offset: 0x80051EF4
	/* end block 1 */
	// End offset: 0x80051EF4
	// End Line: 2387

	/* begin block 2 */
		// Start line: 5465
	/* end block 2 */
	// End Line: 5466

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_CHANGEPLRITEMS__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2398, offset 0x80051efc
	/* begin block 1 */
		// Start line: 2399
		// Start offset: 0x80051EFC
	/* end block 1 */
	// End offset: 0x80051EFC
	// End Line: 2400

	/* begin block 2 */
		// Start line: 5487
	/* end block 2 */
	// End Line: 5488

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_DELPLRITEMS__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2406, offset 0x80051f04
	/* begin block 1 */
		// Start line: 2407
		// Start offset: 0x80051F04
	/* end block 1 */
	// End offset: 0x80051F04
	// End Line: 2408

	/* begin block 2 */
		// Start line: 5506
	/* end block 2 */
	// End Line: 5507

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_PLRLEVEL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2417, offset 0x80051f0c
	/* begin block 1 */
		// Start line: 2418
		// Start offset: 0x80051F0C
	/* end block 1 */
	// End offset: 0x80051F54
	// End Line: 2423

	/* begin block 2 */
		// Start line: 5522
	/* end block 2 */
	// End Line: 5523

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_DROPITEM__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	delta_put_item__FPC9TCmdPItemiiUc
						((TCmdPItem *)pCmd,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,
						 *(uchar *)&(&plr)[pnum].plrlevel);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s1*/)
 // line 2428, offset 0x80051f64
	/* begin block 1 */
		// Start line: 2429
		// Start offset: 0x80051F64

		/* begin block 1.1 */
			// Start line: 2429
			// Start offset: 0x80051F64

			/* begin block 1.1.1 */
				// Start line: 2449
				// Start offset: 0x80051FC4
			/* end block 1.1.1 */
			// End offset: 0x80052154
			// End Line: 2482
		/* end block 1.1 */
		// End offset: 0x80052154
		// End Line: 2482
	/* end block 1 */
	// End offset: 0x80052154
	// End Line: 2482

	/* begin block 2 */
		// Start line: 5549
	/* end block 2 */
	// End Line: 5550

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_PLAYER_JOINLEVEL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	byte bVar2;
	byte bVar3;
	ushort uVar4;
	int numFrames;
	
	uVar1 = (&plr)[pnum].plractive;
	(&plr)[pnum]._pLvlChanging = '\0';
	if ((uVar1 != '\0') && (pnum != 0)) {
		bVar2 = pCmd[1].bCmd;
		bVar3 = pCmd[2].bCmd;
		uVar4 = *(ushort *)(pCmd + 4);
		(&plr)[pnum]._pGFXLoad = 0;
		(&plr)[pnum]._px = (ushort)bVar2;
		(&plr)[pnum]._py = (ushort)bVar3;
		(&plr)[pnum].plrlevel = (uint)uVar4;
		SyncInitPlr__Fi(pnum);
		if ((&plr)[pnum]._pHitPoints >> 6 < 1) {
			numFrames = (&plr)[pnum]._pDFrames;
			(&plr)[pnum]._pgfxnum = '\0';
			(&plr)[pnum]._pmode = PM_DEATH;
			NewPlrAnim__Fiiii(pnum,1,numFrames,1);
			numFrames = (&plr)[pnum]._pAnimLen;
			(&plr)[pnum]._pAnimFrame = (&plr)[pnum]._pAnimLen + -1;
			(&plr)[pnum]._pVar8 = (short)(numFrames << 1);
		}
		else {
			StartStand__Fii(pnum,0);
		}
		if ((&plr)[pnum]._pvid == -1) {
			numFrames = AddVision__FiiiUc((int)(&plr)[pnum]._px,(int)(&plr)[pnum]._py,10,(uchar)pnum);
			(&plr)[pnum]._pvid = (char)numFrames;
		}
		gbActivePlayers = plr.plractive != '\0';
		if (PlayerStruct_800dbf20.plractive != '\0') {
			gbActivePlayers = gbActivePlayers + '\x01';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd /*$v0*/, int pnum /*$a1*/)
 // line 2487, offset 0x8005216c
	/* begin block 1 */
		// Start line: 2488
		// Start offset: 0x8005216C
	/* end block 1 */
	// End offset: 0x800521A0
	// End Line: 2492

	/* begin block 2 */
		// Start line: 5696
	/* end block 2 */
	// End Line: 5697

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_ACTIVATEPORTAL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	ActivatePortal__FiiiiiUc
						(pnum,(uint)pCmd[1].bCmd,(uint)pCmd[2].bCmd,(uint)*(ushort *)(pCmd + 4),
						 (uint)*(ushort *)(pCmd + 6),(uint)pCmd[8].bCmd);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s0*/)
 // line 2526, offset 0x800521b0
	/* begin block 1 */
		// Start line: 2527
		// Start offset: 0x800521B0
	/* end block 1 */
	// End offset: 0x800521FC
	// End Line: 2536

	/* begin block 2 */
		// Start line: 5782
	/* end block 2 */
	// End Line: 5783

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_DEACTIVATEPORTAL__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	uchar uVar1;
	int i;
	
	i = 0;
	do {
		uVar1 = PortalOnLevel__Fi(i);
		if (uVar1 != '\0') {
			RemovePortalMissile__Fi(i);
		}
		DeactivatePortal__Fi(i);
		delta_close_portal__Fi(i);
		i = i + 1;
	} while (i < 2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_RETOWN__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a0*/)
 // line 2542, offset 0x80052210
	/* begin block 1 */
		// Start line: 2543
		// Start offset: 0x80052210
	/* end block 1 */
	// End offset: 0x80052238
	// End Line: 2550

	/* begin block 2 */
		// Start line: 5816
	/* end block 2 */
	// End Line: 5817

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_RETOWN__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	if (pnum == myplr) {
		deathflag = '\0';
	}
	RestartTownLvl__Fi(pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ On_SETSTR__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$a1*/)
 // line 2555, offset 0x80052248
	/* begin block 1 */
		// Start line: 2556
		// Start offset: 0x80052248
	/* end block 1 */
	// End offset: 0x80052278
	// End Line: 2563

	/* begin block 2 */
		// Start line: 5846
	/* end block 2 */
	// End Line: 5847

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2568, offset 0x80052288
	/* begin block 1 */
		// Start line: 2569
		// Start offset: 0x80052288
	/* end block 1 */
	// End offset: 0x800522B8
	// End Line: 2576

	/* begin block 2 */
		// Start line: 5875
	/* end block 2 */
	// End Line: 5876

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2582, offset 0x800522c8
	/* begin block 1 */
		// Start line: 2583
		// Start offset: 0x800522C8
	/* end block 1 */
	// End offset: 0x800522F8
	// End Line: 2590

	/* begin block 2 */
		// Start line: 5906
	/* end block 2 */
	// End Line: 5907

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2596, offset 0x80052308
	/* begin block 1 */
		// Start line: 2597
		// Start offset: 0x80052308
	/* end block 1 */
	// End offset: 0x80052338
	// End Line: 2604

	/* begin block 2 */
		// Start line: 5937
	/* end block 2 */
	// End Line: 5938

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 2610, offset 0x80052348
	/* begin block 1 */
		// Start line: 2611
		// Start offset: 0x80052348

		/* begin block 1.1 */
			// Start line: 2611
			// Start offset: 0x80052348

			/* begin block 1.1.1 */
				// Start line: 2613
				// Start offset: 0x80052360
			/* end block 1.1.1 */
			// End offset: 0x80052378
			// End Line: 2615
		/* end block 1.1 */
		// End offset: 0x80052378
		// End Line: 2615
	/* end block 1 */
	// End offset: 0x80052380
	// End Line: 2618

	/* begin block 2 */
		// Start line: 5965
	/* end block 2 */
	// End Line: 5966

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
// void /*$ra*/ On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd /*$a0*/, int pnum /*$s3*/)
 // line 2624, offset 0x80052390
	/* begin block 1 */
		// Start line: 2625
		// Start offset: 0x80052390

		/* begin block 1.1 */
			// Start line: 2625
			// Start offset: 0x80052390

			/* begin block 1.1.1 */
				// Start line: 2627
				// Start offset: 0x800523B8

				/* begin block 1.1.1.1 */
					// Start line: 2629
					// Start offset: 0x800523B8
					// Variables:
				// 		int i; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 2629
						// Start offset: 0x800523C4
						// Variables:
					// 		int mi; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005243C
					// End Line: 2635
				/* end block 1.1.1.1 */
				// End offset: 0x80052448
				// End Line: 2637
			/* end block 1.1.1 */
			// End offset: 0x80052448
			// End Line: 2637
		/* end block 1.1 */
		// End offset: 0x80052448
		// End Line: 2637
	/* end block 1 */
	// End offset: 0x80052448
	// End Line: 2637

	/* begin block 2 */
		// Start line: 5995
	/* end block 2 */
	// End Line: 5996

/* WARNING: Unknown calling convention yet parameter storage is locked */

void On_ENDSHIELD__FPC4TCmdi(TCmd *pCmd,int pnum)

{
	int iVar1;
	int iVar2;
	short *psVar3;
	
	if (pnum != myplr) {
		iVar2 = 0;
		psVar3 = &missileactive;
		while (iVar2 < nummissiles) {
			iVar1 = (int)*psVar3;
			if ((missile[iVar1]._mitype == '\r') && ((int)missile[iVar1]._misource == pnum)) {
				FUN_8014aac0(iVar1);
				FUN_8013a8e8(iVar1,iVar2);
			}
			psVar3 = psVar3 + 1;
			iVar2 = iVar2 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ ParseCmd__FiPC4TCmd(int pnum /*$v1*/, struct TCmd *pCmd /*$a0*/)
 // line 2676, offset 0x80052468
	/* begin block 1 */
		// Start line: 2677
		// Start offset: 0x80052468
		// Variables:
	// 		static unsigned char sbLastCmd; // offset 0x8011c82c
	/* end block 1 */
	// End offset: 0x80052878
	// End Line: 2779

	/* begin block 2 */
		// Start line: 6099
	/* end block 2 */
	// End Line: 6100

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong ParseCmd__FiPC4TCmd(int pnum,TCmd *pCmd)

{
	sbLastCmd_358 = pCmd->bCmd;
	switch(sbLastCmd_358) {
	case '\x01':
		On_WALKXY__FPC4TCmdi(pCmd,pnum);
		break;
	default:
		DBG_Error((char *)0x0,"source/MSG.cpp",0xace);
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
// struct DLevel * /*$ra*/ GetDLevel__Fib(int LevNum /*$a1*/, void * SetLevel /*$a1*/)
 // line 2790, offset 0x80052888
	/* begin block 1 */
		// Start line: 2791
		// Start offset: 0x80052888
	/* end block 1 */
	// End offset: 0x800528C0
	// End Line: 2803

	/* begin block 2 */
		// Start line: 6337
	/* end block 2 */
	// End Line: 6338

/* WARNING: Unknown calling convention yet parameter storage is locked */

DLevel * GetDLevel__Fib(int LevNum,void *SetLevel)

{
	DLevel *pDVar1;
	
	if (setlevel != '\0') {
		LevNum = (uint)setlvlnum + 0x10;
	}
	pDVar1 = GetMap__13CompLevelMapsi(&GameMaps,LevNum);
	return pDVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseDLevel__FP6DLevel(struct DLevel *Dl /*$a1*/)
 // line 2807, offset 0x800528d0
	/* begin block 1 */
		// Start line: 2808
		// Start offset: 0x800528D0
	/* end block 1 */
	// End offset: 0x800528EC
	// End Line: 2816

	/* begin block 2 */
		// Start line: 6372
	/* end block 2 */
	// End Line: 6373

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ReleaseDLevel__FP6DLevel(DLevel *Dl)

{
	ReleaseMap__13CompLevelMapsP6DLevel(&GameMaps,Dl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MSG_ClearOutCompMap__Fv()
 // line 2821, offset 0x800528fc
	/* begin block 1 */
		// Start line: 2822
		// Start offset: 0x800528FC
	/* end block 1 */
	// End offset: 0x80052914
	// End Line: 2824

	/* begin block 2 */
		// Start line: 6400
	/* end block 2 */
	// End Line: 6401

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MSG_ClearOutCompMap__Fv(void)

{
	Init__13CompLevelMaps(&GameMaps);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.deltaload()
 // line 2828, offset 0x80052924
	/* begin block 1 */
		// Start line: 2829
		// Start offset: 0x80052924
	/* end block 1 */
	// End offset: 0x8005293C
	// End Line: 2829

	/* begin block 2 */
		// Start line: 6414
	/* end block 2 */
	// End Line: 6415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_deltaload(void)

{
	___13CompLevelMaps(&GameMaps,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.deltaload()
 // line 2828, offset 0x8005294c
	/* begin block 1 */
		// Start line: 2829
		// Start offset: 0x8005294C
	/* end block 1 */
	// End offset: 0x8005299C
	// End Line: 2829

	/* begin block 2 */
		// Start line: 6414
	/* end block 2 */
	// End Line: 6415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_deltaload(void)

{
	__6NoComp(&CompNoComp);
	__7PakComp(&CompPakComp);
	__10CrunchComp(&CompCrunchComp);
	__13CompLevelMapsRC9CompClass(&GameMaps,(CompClass *)&CompPakComp);
	return;
}





