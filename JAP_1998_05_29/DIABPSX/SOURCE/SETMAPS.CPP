#include "THISDUST.H"
#include "SETMAPS.H"


// decompiled code
// original method signature: 
// int /*$ra*/ ObjIndex__Fii(int x /*$a3*/, int y /*$a2*/)
 // line 103, offset 0x801552d8
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x801552D8
		// Variables:
	// 		int i; // $a1
	// 		int oi; // $a0
	/* end block 1 */
	// End offset: 0x8015537C
	// End Line: 113

	/* begin block 2 */
		// Start line: 206
	/* end block 2 */
	// End Line: 207

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ObjIndex__Fii(int x,int y)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	if (0 < numobjects) {
		do {
			iVar1 = (int)(&objectactive)[iVar2];
			if (((int)object[iVar1]._ox == x) && ((int)object[iVar1]._oy == y)) {
				return iVar1;
			}
			iVar2 = iVar2 + 1;
		} while (iVar2 < numobjects);
	}
	app_fatal("OBJINDEX__ACTIVE_OBJECT_NOT_FOUND_AT_ %d %d");
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSKingObjs__Fv()
 // line 119, offset 0x8015538c
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8015538C
	/* end block 1 */
	// End offset: 0x801554A4
	// End Line: 129

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSKingObjs__Fv(void)

{
	int i;
	
	i = ObjIndex__Fii(0x40,0x22);
	SetObjMapRange__Fiiiiii(i,0x14,7,0x17,10,1);
	i = ObjIndex__Fii(0x40,0x3b);
	SetObjMapRange__Fiiiiii(i,0x14,0xe,0x15,0x10,2);
	i = ObjIndex__Fii(0x1b,0x25);
	SetObjMapRange__Fiiiiii(i,8,1,0xf,0xb,3);
	i = ObjIndex__Fii(0x2e,0x23);
	SetObjMapRange__Fiiiiii(i,8,1,0xf,0xb,3);
	i = ObjIndex__Fii(0x31,0x35);
	SetObjMapRange__Fiiiiii(i,8,1,0xf,0xb,3);
	i = ObjIndex__Fii(0x1b,0x35);
	SetObjMapRange__Fiiiiii(i,8,1,0xf,0xb,3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddSChamObjs__Fv()
 // line 135, offset 0x801554bc
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x801554BC
	/* end block 1 */
	// End offset: 0x80155524
	// End Line: 139

	/* begin block 2 */
		// Start line: 272
	/* end block 2 */
	// End Line: 273

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddSChamObjs__Fv(void)

{
	int i;
	
	i = ObjIndex__Fii(0x25,0x1e);
	SetObjMapRange__Fiiiiii(i,0x11,0,0x15,5,1);
	i = ObjIndex__Fii(0x25,0x2e);
	SetObjMapRange__Fiiiiii(i,0xd,0,0x10,5,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddVileObjs__Fv()
 // line 145, offset 0x80155538
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x80155538
	/* end block 1 */
	// End offset: 0x801555D0
	// End Line: 152

	/* begin block 2 */
		// Start line: 294
	/* end block 2 */
	// End Line: 295

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddVileObjs__Fv(void)

{
	int i;
	
	i = ObjIndex__Fii(0x1a,0x2d);
	SetObjMapRange__Fiiiiii(i,1,1,9,10,1);
	i = ObjIndex__Fii(0x2d,0x2e);
	SetObjMapRange__Fiiiiii(i,0xb,1,0x14,10,2);
	i = ObjIndex__Fii(0x23,0x24);
	SetObjMapRange__Fiiiiii(i,7,0xb,0xd,0x12,3);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_SetMapTrans__FPc(char *sFileName /*$a0*/)
 // line 158, offset 0x801555e4
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x801555E4
		// Variables:
	// 		int i; // $a1
	// 		int j; // $t0
	// 		int rw; // $t1
	// 		int rh; // $t3
	// 		unsigned char *pLevelMap; // $t4
	// 		unsigned char *lm; // $a2
	// 		long mapoff; // $v0

		/* begin block 1.1 */
			// Start line: 191
			// Start offset: 0x80155690
		/* end block 1.1 */
		// End offset: 0x80155698
		// End Line: 191
	/* end block 1 */
	// End offset: 0x80155698
	// End Line: 191

	/* begin block 2 */
		// Start line: 322
	/* end block 2 */
	// End Line: 323

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_SetMapTrans__FPc(char *sFileName)

{
	byte bVar1;
	byte bVar2;
	byte *p;
	int iVar3;
	int iVar4;
	byte *pbVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	p = GRL_LoadFileInMemSig__FPCcPUl(sFileName,(ulong *)0x0);
	bVar1 = *p;
	bVar2 = p[2];
	iVar7 = (uint)bVar1 * 2;
	iVar9 = (uint)bVar2 * 2;
	iVar6 = 0;
	pbVar5 = p + (uint)bVar1 * (uint)bVar2 * 2 + 4 + iVar7 * iVar9 * 6;
	if (bVar2 != 0) {
		iVar8 = 0x80;
		do {
			iVar4 = 0;
			if (bVar1 != 0) {
				iVar3 = 0x3800;
				do {
					bVar2 = *pbVar5;
					pbVar5 = pbVar5 + 2;
					iVar4 = iVar4 + 1;
					(&dung_map[0].dTransVal)[iVar8 + iVar3] = bVar2;
					iVar3 = iVar3 + 0x380;
				} while (iVar4 < iVar7);
			}
			iVar6 = iVar6 + 1;
			iVar8 = iVar8 + 8;
		} while (iVar6 < iVar9);
	}
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadSetMap__Fv()
 // line 198, offset 0x801556a8
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x801556A8

		/* begin block 1.1 */
			// Start line: 199
			// Start offset: 0x801556A8

			/* begin block 1.1.1 */
				// Start line: 200
				// Start offset: 0x801556EC
				// Variables:
			// 		void * isdone; // $v1
			// 		int x; // $s2
			// 		int y; // $s1
			/* end block 1.1.1 */
			// End offset: 0x801559E8
			// End Line: 264
		/* end block 1.1 */
		// End offset: 0x801559E8
		// End Line: 264
	/* end block 1 */
	// End offset: 0x801559E8
	// End Line: 264

	/* begin block 2 */
		// Start line: 421
	/* end block 2 */
	// End Line: 422

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadSetMap__Fv(void)

{
	uchar uVar1;
	int vy;
	int vx;
	
	switch(setlvlnum) {
	case '\x01':
		if (quests[12]._qactive == '\x01') {
			quests[12]._qactive = '\x02';
			quests[12]._qvar1 = '\x01';
		}
		LoadPreL1Dungeon__FPcii("Levels\\L1Data\\SklKng1.DUN",0x53,0x2d);
		LoadL1Dungeon__FPcii("Levels\\L1Data\\SklKng2.DUN",0x53,0x2d);
		LoadPalette__FPCc("Levels\\L1Data\\L1_2.pal");
		DRLG_AreaTrans__FiPUc(2,SkelKingTrans1);
		DRLG_ListTrans__FiPUc(2,SkelKingTrans2);
		DRLG_AreaTrans__FiPUc(5,SkelKingTrans3);
		DRLG_ListTrans__FiPUc(7,SkelKingTrans4);
		AddL1Objs__Fiiii(0,0,0x60,0x60);
		AddSKingObjs__Fv();
		InitSKingTriggers__Fv();
		break;
	case '\x02':
		LoadPreL2Dungeon__FPcii("Levels\\L2Data\\Bonecha2.DUN",0x45,0x27);
		LoadL2Dungeon__FPcii("Levels\\L2Data\\Bonecha1.DUN",0x45,0x27);
		LoadPalette__FPCc("Levels\\L2Data\\L2_2.pal");
		DRLG_ListTrans__FiPUc(5,SkelChamTrans1);
		DRLG_AreaTrans__FiPUc(2,SkelChamTrans2);
		DRLG_ListTrans__FiPUc(9,SkelChamTrans3);
		AddL2Objs__Fiiii(0,0,0x60,0x60);
		AddSChamObjs__Fv();
		InitSChambTriggers__Fv();
		break;
	case '\x03':
		LoadPreL1Dungeon__FPcii("Levels\\L1Data\\Lv1MazeA.DUN",0x14,0x32);
		LoadL1Dungeon__FPcii("Levels\\L1Data\\Lv1MazeB.DUN",0x14,0x32);
		LoadPalette__FPCc("Levels\\L1Data\\L1_5.pal");
		AddL1Objs__Fiiii(0,0,0x60,0x60);
		DRLG_SetMapTrans__FPc("Levels\\L1Data\\Lv1MazeA.DUN");
		break;
	case '\x04':
		if (quests[13]._qactive == '\x01') {
			quests[13]._qactive = '\x02';
		}
		LoadPreL3Dungeon__FPcii("Levels\\L3Data\\Foulwatr.DUN",0x13,0x32);
		LoadL3Dungeon__FPcii("Levels\\L3Data\\Foulwatr.DUN",0x14,0x32);
		LoadPalette__FPCc("Levels\\L3Data\\L3pfoul.pal");
		InitPWaterTriggers__Fv();
		if (quests[13]._qactive == '\x03') {
			WaterDone = &DAT_00000001;
		}
		else {
			WaterDone = (void *)0x0;
		}
		break;
	case '\x05':
		vx = 0x23;
		if (quests[15]._qactive == '\x03') {
			vx = 0x24;
		}
		vy = 0x24;
		if (quests[15]._qactive != '\x03') {
			uVar1 = '\x03';
			if (quests[15]._qactive == '\x02') goto LAB_80155978;
		}
		else {
			vy = 0x21;
			uVar1 = '\x04';
LAB_80155978:
			quests[15]._qvar2 = uVar1;
		}
		LoadPreL1Dungeon__FPcii("Vile11.DUN",vx,vy);
		LoadL1Dungeon__FPcii("Vile21.DUN",vx,vy);
		LoadPalette__FPCc("Levels\\L1Data\\L1_2.pal");
		AddL1Objs__Fiiii(0,0,0x60,0x60);
		AddVileObjs__Fv();
		DRLG_SetMapTrans__FPc("Vile11.DUN");
		InitNoTriggers__Fv();
		break;
	default:
		return;
	}
	return;
}





