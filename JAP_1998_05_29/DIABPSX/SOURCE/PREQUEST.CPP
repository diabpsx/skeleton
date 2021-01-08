#include "THISDUST.H"
#include "PREQUEST.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitQuests__Fv()
 // line 108, offset 0x8015e7dc
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x8015E7DC
		// Variables:
	// 		int i; // stack offset -24
	// 		int gri; // $v1
	// 		int deltaq; // $s0

		/* begin block 1.1 */
			// Start line: 190
			// Start offset: 0x8015ED28

			/* begin block 1.1.1 */
				// Start line: 194
				// Start offset: 0x8015ED38
				// Variables:
			// 		struct ItemStruct *Item; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8015ED78
			// End Line: 198
		/* end block 1.1 */
		// End offset: 0x8015ED78
		// End Line: 198
	/* end block 1 */
	// End offset: 0x8015ED78
	// End Line: 198

	/* begin block 2 */
		// Start line: 216
	/* end block 2 */
	// End Line: 217

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitQuests__Fv(void)

{
	uchar uVar1;
	long lVar2;
	ItemStruct *pIVar3;
	int i;
	int local_18;
	
	if (gbMaxPlayers == '\x01') {
		local_18 = 0;
		do {
			quests[local_18]._qactive = '\0';
			local_18 = local_18 + 1;
		} while (local_18 < 0x10);
	}
	else {
		local_18 = 0;
		do {
			if ((questlist[local_18]._qflags & 1) == 0) {
				quests[local_18]._qactive = '\0';
			}
			local_18 = local_18 + 1;
		} while (local_18 < 0x10);
	}
	i = 0;
	questlog = '\0';
	WaterDone = (void *)0x0;
	local_18 = 0;
	if (0 < ALLQUESTS) {
		do {
			if ((gbMaxPlayers < 2) || ((questlist[local_18]._qflags & 1) != 0)) {
				quests[local_18]._qtype = questlist[local_18]._qdtype;
				if (gbMaxPlayers < 2) {
					quests[local_18]._qactive = '\x01';
					quests[local_18]._qlevel = questlist[local_18]._qdlvl;
					quests[local_18]._qvar1 = '\0';
					quests[local_18]._qlog = '\0';
				}
				else {
					quests[local_18]._qlevel = questlist[local_18]._qdmultlvl;
					uVar1 = delta_quest_inited__Fi(i);
					if (uVar1 == '\0') {
						quests[local_18]._qactive = '\x01';
						quests[local_18]._qvar1 = '\0';
						quests[local_18]._qlog = '\0';
					}
					i = i + 1;
				}
				quests[local_18]._qslvl = questlist[local_18]._qslvl;
				quests[local_18]._qidx = (uchar)local_18;
				quests[local_18]._qtx = 0;
				quests[local_18]._qty = 0;
				quests[local_18]._qlvltype = questlist[local_18]._qlvlt;
				quests[local_18]._qvar2 = '\0';
				quests[local_18]._qmsg = (uchar)questlist[local_18]._qdmsg;
				quests[local_18].pad_for_laz = '\0';
			}
			local_18 = local_18 + 1;
		} while (local_18 < ALLQUESTS);
	}
	if (gbMaxPlayers == '\x01') {
		SetRndSeed__Fl(ULONG_800cf798);
		lVar2 = ENG_random__Fl(2);
		if (lVar2 == 0) {
			quests[12]._qactive = '\0';
		}
		else {
			quests[13]._qactive = '\0';
		}
		lVar2 = ENG_random__Fl(3);
		quests[QuestGroup1[lVar2]]._qactive = '\0';
		lVar2 = ENG_random__Fl(3);
		quests[QuestGroup2[lVar2]]._qactive = '\0';
		lVar2 = ENG_random__Fl(3);
		quests[QuestGroup3[lVar2]]._qactive = '\0';
		lVar2 = ENG_random__Fl(2);
		quests[QuestGroup4[lVar2]]._qactive = '\0';
	}
	if (quests[12]._qactive == '\0') {
		quests[12]._qvar2 = '\x02';
	}
	if (quests[0]._qactive == '\0') {
		quests[0]._qvar2 = '\x02';
	}
	quests[7]._qvar1 = '\x01';
	if (gbMaxPlayers == '\x01') {
		pIVar3 = PlrHasItem__FiiRi(0,0x14,&local_18);
		if ((pIVar3 != (ItemStruct *)0x0) && (quests[1]._qactive != '\x03')) {
			(&AllItemsUseable)[(int)pIVar3->IDidx] = '\0';
		}
	}
	else {
		quests[15]._qvar1 = '\x02';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawButcher__Fv()
 // line 203, offset 0x8015ed8c
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x8015ED8C
	/* end block 1 */
	// End offset: 0x8015EDC0
	// End Line: 209

	/* begin block 2 */
		// Start line: 423
	/* end block 2 */
	// End Line: 424

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawButcher__Fv(void)

{
	DRLG_RectTrans__Fiiii(setpc_x * 2 + 0x13,setpc_y * 2 + 0x13,setpc_x * 2 + 0x1a,setpc_y * 2 + 0x1a)
	;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSkelKing__Fiii(int q /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 215, offset 0x8015edd0
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x8015EDD0
	/* end block 1 */
	// End offset: 0x8015EE48
	// End Line: 226

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSkelKing__Fiii(int q,int x,int y)

{
	int x_00;
	int y_00;
	
	y_00 = y * 2 + 0x17;
	quests[q]._qtx = x * 2 + 0x1c;
	quests[q]._qty = y_00;
	if ((0 < x) && (x_00 = x * 2 + 0x1b, 2 < y)) {
		SetSOLID__Fii(x_00,y_00);
		SetMISSILE__Fii(x_00,y_00);
		SetSOLID__Fii(x_00,y * 2 + 0x15);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawWarLord__Fii(int x /*$s1*/, int y /*$s0*/)
 // line 233, offset 0x8015ee64
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8015EE64
		// Variables:
	// 		int rw; // $t5
	// 		int rh; // $t4
	// 		int i; // $a1
	// 		int j; // $t0
	// 		unsigned char *sp; // $t1
	// 		unsigned char *setp; // $a0

		/* begin block 1.1 */
			// Start line: 259
			// Start offset: 0x8015EF40
		/* end block 1.1 */
		// End offset: 0x8015EF48
		// End Line: 259
	/* end block 1 */
	// End offset: 0x8015EF48
	// End Line: 259

	/* begin block 2 */
		// Start line: 502
	/* end block 2 */
	// End Line: 503

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawWarLord__Fii(int x,int y)

{
	byte *p;
	ushort uVar1;
	int iVar2;
	ushort *puVar3;
	int iVar4;
	byte *pbVar5;
	uint uVar6;
	uint uVar7;
	
	p = GRL_LoadFileInMemSig__FPCcPUl("Warlord2.DUN",(ulong *)0x0);
	uVar7 = (uint)*p;
	uVar6 = (uint)p[2];
	pbVar5 = p + 4;
	iVar4 = y;
	setpc_x = x;
	setpc_y = y;
	setpc_w = uVar7;
	setpc_h = uVar6;
	if (y < (int)(uVar6 + y)) {
		do {
			if (x < (int)(uVar7 + x)) {
				puVar3 = dungeon + x * 0x30;
				iVar2 = x;
				do {
					uVar1 = 6;
					if (*pbVar5 != 0) {
						uVar1 = (ushort)*pbVar5;
					}
					puVar3[iVar4] = uVar1;
					pbVar5 = pbVar5 + 2;
					iVar2 = iVar2 + 1;
					puVar3 = puVar3 + 0x30;
				} while (iVar2 < (int)(uVar7 + x));
			}
			iVar4 = iVar4 + 1;
		} while (iVar4 < (int)(uVar6 + y));
	}
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSChamber__Fiii(int q /*$s2*/, int x /*$s0*/, int y /*$s1*/)
 // line 265, offset 0x8015ef60
	/* begin block 1 */
		// Start line: 266
		// Start offset: 0x8015EF60
		// Variables:
	// 		int i; // $a3
	// 		int j; // $t1
	// 		int rw; // $t5
	// 		int rh; // $t4
	// 		int xx; // $v0
	// 		int yy; // $v0
	// 		unsigned char *sp; // $t0
	// 		unsigned char *setp; // $a0

		/* begin block 1.1 */
			// Start line: 293
			// Start offset: 0x8015F044
		/* end block 1.1 */
		// End offset: 0x8015F080
		// End Line: 298
	/* end block 1 */
	// End offset: 0x8015F080
	// End Line: 298

	/* begin block 2 */
		// Start line: 583
	/* end block 2 */
	// End Line: 584

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawSChamber__Fiii(int q,int x,int y)

{
	byte *p;
	ushort uVar1;
	ushort *puVar2;
	int iVar3;
	byte *pbVar4;
	int iVar5;
	uint uVar6;
	uint uVar7;
	
	p = GRL_LoadFileInMemSig__FPCcPUl("Bonestr1.DUN",(ulong *)0x0);
	pbVar4 = p + 4;
	uVar7 = (uint)*p;
	uVar6 = (uint)p[2];
	setpc_x = x;
	setpc_y = y;
	setpc_w = uVar7;
	setpc_h = uVar6;
	if (y < (int)(uVar6 + y)) {
		iVar5 = y;
		setpc_x = x;
		setpc_y = y;
		setpc_w = uVar7;
		setpc_h = uVar6;
		do {
			if (x < (int)(uVar7 + x)) {
				puVar2 = dungeon + x * 0x30;
				iVar3 = x;
				do {
					uVar1 = 3;
					if (*pbVar4 != 0) {
						uVar1 = (ushort)*pbVar4;
					}
					puVar2[iVar5] = uVar1;
					pbVar4 = pbVar4 + 2;
					iVar3 = iVar3 + 1;
					puVar2 = puVar2 + 0x30;
				} while (iVar3 < (int)(uVar7 + x));
			}
			iVar5 = iVar5 + 1;
		} while (iVar5 < (int)(uVar6 + y));
	}
	quests[q]._qtx = x * 2 + 0x16;
	quests[q]._qty = y * 2 + 0x17;
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLTBanner__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 304, offset 0x8015f09c
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x8015F09C
		// Variables:
	// 		int rw; // $t2
	// 		int rh; // $t3
	// 		int i; // $a1
	// 		int j; // $a3
	// 		unsigned char *sp; // $t0
	// 		unsigned char *setp; // $a0

		/* begin block 1.1 */
			// Start line: 330
			// Start offset: 0x8015F158
		/* end block 1.1 */
		// End offset: 0x8015F160
		// End Line: 330
	/* end block 1 */
	// End offset: 0x8015F160
	// End Line: 330

	/* begin block 2 */
		// Start line: 679
	/* end block 2 */
	// End Line: 680

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawLTBanner__Fii(int x,int y)

{
	byte bVar1;
	byte *p;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	uint uVar5;
	uint uVar6;
	
	p = GRL_LoadFileInMemSig__FPCcPUl("Banner1.DUN",(ulong *)0x0);
	pbVar4 = p + 4;
	bVar1 = *p;
	uVar5 = (uint)bVar1;
	uVar6 = (uint)p[2];
	iVar3 = 0;
	setpc_x = x;
	setpc_y = y;
	setpc_w = uVar5;
	setpc_h = uVar6;
	if (p[2] != 0) {
		do {
			iVar2 = 0;
			if (bVar1 != 0) {
				do {
					if (*pbVar4 != 0) {
						(&pdungeon)[y + iVar3 + (x + iVar2) * 0x28] = *pbVar4;
					}
					iVar2 = iVar2 + 1;
					pbVar4 = pbVar4 + 2;
				} while (iVar2 < (int)uVar5);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < (int)uVar6);
	}
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBlind__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 336, offset 0x8015f178
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x8015F178
		// Variables:
	// 		int rw; // $t2
	// 		int rh; // $t3
	// 		int i; // $a1
	// 		int j; // $a3
	// 		unsigned char *sp; // $t0
	// 		unsigned char *setp; // $a0

		/* begin block 1.1 */
			// Start line: 362
			// Start offset: 0x8015F234
		/* end block 1.1 */
		// End offset: 0x8015F23C
		// End Line: 362
	/* end block 1 */
	// End offset: 0x8015F23C
	// End Line: 362

	/* begin block 2 */
		// Start line: 754
	/* end block 2 */
	// End Line: 755

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawBlind__Fii(int x,int y)

{
	byte bVar1;
	byte *p;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	uint uVar5;
	uint uVar6;
	
	p = GRL_LoadFileInMemSig__FPCcPUl("Blind1.DUN",(ulong *)0x0);
	pbVar4 = p + 4;
	bVar1 = *p;
	uVar5 = (uint)bVar1;
	uVar6 = (uint)p[2];
	iVar3 = 0;
	setpc_x = x;
	setpc_y = y;
	setpc_w = uVar5;
	setpc_h = uVar6;
	if (p[2] != 0) {
		do {
			iVar2 = 0;
			if (bVar1 != 0) {
				do {
					if (*pbVar4 != 0) {
						(&pdungeon)[y + iVar3 + (x + iVar2) * 0x28] = *pbVar4;
					}
					iVar2 = iVar2 + 1;
					pbVar4 = pbVar4 + 2;
				} while (iVar2 < (int)uVar5);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < (int)uVar6);
	}
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBlood__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 368, offset 0x8015f254
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x8015F254
		// Variables:
	// 		int rw; // $t2
	// 		int rh; // $t3
	// 		int i; // $a1
	// 		int j; // $a3
	// 		unsigned char *sp; // $t0
	// 		unsigned char *setp; // $a0

		/* begin block 1.1 */
			// Start line: 398
			// Start offset: 0x8015F314
		/* end block 1.1 */
		// End offset: 0x8015F31C
		// End Line: 398
	/* end block 1 */
	// End offset: 0x8015F31C
	// End Line: 398

	/* begin block 2 */
		// Start line: 826
	/* end block 2 */
	// End Line: 827

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawBlood__Fii(int x,int y)

{
	byte bVar1;
	byte *p;
	int iVar2;
	int iVar3;
	byte *pbVar4;
	uint uVar5;
	uint uVar6;
	
	p = GRL_LoadFileInMemSig__FPCcPUl("Blood2.DUN",(ulong *)0x0);
	pbVar4 = p + 4;
	bVar1 = *p;
	uVar5 = (uint)bVar1;
	uVar6 = (uint)p[2];
	iVar3 = 0;
	setpc_x = x;
	setpc_y = y;
	setpc_w = uVar5;
	setpc_h = uVar6;
	if (p[2] != 0) {
		do {
			iVar2 = 0;
			if (bVar1 != 0) {
				do {
					if (*pbVar4 != 0) {
						dungeon[(x + iVar2) * 0x30 + y + iVar3] = (ushort)*pbVar4;
					}
					iVar2 = iVar2 + 1;
					pbVar4 = pbVar4 + 2;
				} while (iVar2 < (int)uVar5);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 < (int)uVar6);
	}
	mem_free_dbg__FPv(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DRLG_CheckQuests__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 401, offset 0x8015f334
	/* begin block 1 */
		// Start line: 402
		// Start offset: 0x8015F334
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8015F44C
	// End Line: 431

	/* begin block 2 */
		// Start line: 902
	/* end block 2 */
	// End Line: 903

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DRLG_CheckQuests__Fii(int x,int y)

{
	uchar uVar1;
	int i;
	int iVar2;
	
	i = 0;
	iVar2 = 0;
	do {
		uVar1 = QuestStatus__Fi(i);
		if (uVar1 != '\0') {
			switch((&quests[0]._qtype)[iVar2]) {
			case '\x06':
				DrawButcher__Fv();
				break;
			case '\a':
				DrawLTBanner__Fii(x,y);
				break;
			case '\b':
				DrawBlind__Fii(x,y);
				break;
			case '\t':
				DrawBlood__Fii(x,y);
				break;
			case '\v':
				DrawWarLord__Fii(x,y);
				break;
			case '\f':
				DrawSkelKing__Fiii(i,x,y);
				break;
			case '\x0e':
				DrawSChamber__Fiii(i,x,y);
			}
		}
		iVar2 = iVar2 + 0x14;
		i = i + 1;
	} while (i < 0x10);
	return;
}





