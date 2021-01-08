#include "THISDUST.H"
#include "PREMON.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SwapMonsterType__FPi(int *oldmt /*$a0*/)
 // line 111, offset 0x8015f6e8
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x8015F6E8
		// Variables:
	// 		int mt; // $a1
	/* end block 1 */
	// End offset: 0x8015F754
	// End Line: 129

	/* begin block 2 */
		// Start line: 225
	/* end block 2 */
	// End Line: 226

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SwapMonsterType__FPi(int *oldmt)

{
	int iVar1;
	
	iVar1 = *oldmt;
	if (currlevel == '\x10') {
		if ((iVar1 - 0x5dU < 2) || (iVar1 - 0x5fU < 2)) {
			iVar1 = 0x70;
		}
		if (iVar1 == 0x6b) {
			iVar1 = 0x6c;
		}
	}
	if (iVar1 == 0x46) {
		iVar1 = 0x4c;
	}
	if (iVar1 == 0x47) {
		iVar1 = 0x4e;
	}
	if (iVar1 == 0x45) {
		iVar1 = 0x4d;
	}
	*oldmt = iVar1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ MonstPlace__Fii(int xp /*$s0*/, int yp /*$s1*/)
 // line 133, offset 0x8015f75c
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x8015F75C
	/* end block 1 */
	// End offset: 0x8015F80C
	// End Line: 141

	/* begin block 2 */
		// Start line: 268
	/* end block 2 */
	// End Line: 269

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar MonstPlace__Fii(int xp,int yp)

{
	uchar uVar1;
	
	if (((uint)xp < 0x60) && ((uint)yp < 0x60)) {
		if (dung_map[xp * 0x70 + yp].dMonster != 0) {
			return '\0';
		}
		uVar1 = IsDplayer__Fii(xp,yp);
		if (uVar1 != '\0') {
			return '\0';
		}
		if ((dung_map[xp * 0x70 + yp].dFlags & 4U) != 0) {
			return '\0';
		}
		if ((dung_map[xp * 0x70 + yp].dFlags & 8U) == 0) {
			uVar1 = SolidLoc__Fii(xp,yp);
			return uVar1 == '\0';
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMonsterGFX__Fi(int monst /*$a0*/)
 // line 144, offset 0x8015f828
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x8015F828
		// Variables:
	// 		int anim; // $a2
	// 		char strBuff[256]; // stack offset -256
	// 		int mtype; // $v1
	// 		struct MonsterData *pmonsterdata; // $a3
	/* end block 1 */
	// End offset: 0x8015F8F4
	// End Line: 201

	/* begin block 2 */
		// Start line: 291
	/* end block 2 */
	// End Line: 292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMonsterGFX__Fi(int monst)

{
	uchar uVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	iVar2 = monst * 0x1c;
	uVar3 = (uint)Monsters[monst].mtype;
	do {
		iVar4 = (int)&monsterdata[uVar3].GraphicType + iVar5;
		(&Monsters[0].Anims[0].Frames)[iVar2] = *(char *)(iVar4 + 8);
		iVar5 = iVar5 + 1;
		(&Monsters[0].Anims[0].Rate)[iVar2] = *(char *)(iVar4 + 0xe);
		iVar2 = iVar2 + 2;
	} while (iVar5 < 6);
	Monsters[monst].mMinHP = (uchar)monsterdata[uVar3].mMinHP;
	Monsters[monst].mMaxHP = (uchar)monsterdata[uVar3].mMaxHP;
	Monsters[monst].has_special = monsterdata[uVar3].has_special;
	uVar1 = monsterdata[uVar3].mAFNum;
	Monsters[monst].MData = monsterdata + uVar3;
	Monsters[monst].mAFNum = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceMonster__Fiiii(int i /*$s2*/, int mtype /*$s3*/, int x /*$s0*/, int y /*$s1*/)
 // line 276, offset 0x8015f900
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x8015F900
	/* end block 1 */
	// End offset: 0x8015F96C
	// End Line: 283

	/* begin block 2 */
		// Start line: 566
	/* end block 2 */
	// End Line: 567

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceMonster__Fiiii(int i,int mtype,int x,int y)

{
	long rd;
	
	dung_map[x * 0x70 + y].dMonster = (short)i + 1;
	rd = ENG_random__Fl(8);
	InitMonster__Fiiiii(i,rd,mtype,x,y);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMonsterType__Fii(int type /*$a2*/, int placeflag /*$s1*/)
 // line 286, offset 0x8015f98c
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x8015F98C
		// Variables:
	// 		int i; // $s0
	// 		unsigned char done; // $a0
	/* end block 1 */
	// End offset: 0x8015FA70
	// End Line: 309

	/* begin block 2 */
		// Start line: 589
	/* end block 2 */
	// End Line: 590

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AddMonsterType__Fii(int type,int placeflag)

{
	bool bVar1;
	CMonster *pCVar2;
	int monst;
	int iVar3;
	int iVar4;
	
	monst = nummtypes;
	bVar1 = false;
	iVar4 = 0;
	if (0 < nummtypes) {
		iVar3 = 0;
		do {
			iVar4 = iVar4 + 1;
			bVar1 = (uint)(&Monsters[0].mtype)[iVar3] == type;
			iVar3 = iVar3 + 0x1c;
			if (nummtypes <= iVar4) break;
		} while (!bVar1);
	}
	iVar4 = iVar4 + -1;
	if (!bVar1) {
		pCVar2 = Monsters + nummtypes;
		nummtypes = nummtypes + 1;
		pCVar2->mtype = (uchar)type;
		InitMonsterGFX__Fi(monst);
		InitMonsterSND__Fi(monst);
		iVar4 = monst;
	}
	Monsters[iVar4].mPlaceFlags = Monsters[iVar4].mPlaceFlags | (byte)placeflag;
	return iVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetMonsterTypes__FUl(unsigned long QuestMask /*$a2*/)
 // line 318, offset 0x8015fa88
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x8015FA88
		// Variables:
	// 		int typelist[190]; // stack offset -792
	// 		int mt; // stack offset -32
	// 		int nt; // $s1
	/* end block 1 */
	// End offset: 0x8015FB28
	// End Line: 334

	/* begin block 2 */
		// Start line: 659
	/* end block 2 */
	// End Line: 660

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetMonsterTypes__FUl(ulong QuestMask)

{
	int v;
	long lVar1;
	int *piVar2;
	int *piVar3;
	int aiStack792 [190];
	int local_20 [2];
	
	v = ML_GetPresetMonsters__FiPiUl((uint)currlevel,aiStack792,QuestMask);
	if (0 < v) {
		piVar3 = aiStack792 + v;
		do {
			if (0xf < nummtypes) {
				return;
			}
			if (v == 0) {
				return;
			}
			lVar1 = ENG_random__Fl(v);
			piVar2 = aiStack792 + lVar1;
			local_20[0] = *piVar2;
			piVar3 = piVar3 + -1;
			SwapMonsterType__FPi(local_20);
			AddMonsterType__Fii(local_20[0],1);
			v = v + -1;
			*piVar2 = *piVar3;
		} while (0 < v);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrAllMonsters__Fv()
 // line 339, offset 0x8015fb48
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x8015FB48
		// Variables:
	// 		int i; // $s1
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x8015FC64
	// End Line: 377

	/* begin block 2 */
		// Start line: 709
	/* end block 2 */
	// End Line: 710

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrAllMonsters__Fv(void)

{
	long lVar1;
	uint v;
	int i;
	int iVar2;
	
	i = 0;
	iVar2 = 0;
	do {
		ClearMVars__Fi(i);
		*(undefined4 *)((int)&monster[0].mName + iVar2) = 0;
		(&monster[0]._mgoal)[iVar2] = '\0';
		(&monster[0]._mmode)[iVar2] = '\0';
		*(undefined2 *)((int)&monster[0]._mVar1 + iVar2) = 0;
		*(undefined2 *)((int)&monster[0]._mVar2 + iVar2) = 0;
		(&monster[0]._mx)[iVar2] = '\0';
		(&monster[0]._my)[iVar2] = '\0';
		(&monster[0]._mfutx)[iVar2] = '\0';
		(&monster[0]._mfuty)[iVar2] = '\0';
		(&monster[0]._moldx)[iVar2] = '\0';
		(&monster[0]._moldy)[iVar2] = '\0';
		lVar1 = ENG_random__Fl(8);
		(&monster[0]._mdir)[iVar2] = (char)lVar1;
		(&monster[0].Action)[iVar2] = '\0';
		(&monster[0]._mAnimDelay)[iVar2] = '\0';
		(&monster[0]._mAnimCnt)[iVar2] = '\0';
		(&monster[0]._mAnimLen)[iVar2] = '\0';
		(&monster[0]._mAnimFrame)[iVar2] = '\0';
		(&monster[0]._mDelFlag)[iVar2] = '\0';
		v = (uint)gbActivePlayers;
		*(undefined2 *)((int)&monster[0]._mxvel + iVar2) = 0;
		*(undefined2 *)((int)&monster[0]._myvel + iVar2) = 0;
		*(undefined2 *)((int)&monster[0]._mFlags + iVar2) = 0;
		v = ENG_random__Fl(v);
		(&monster[0]._menemy)[iVar2] = (uchar)v;
		(&monster[0]._menemyx)[iVar2] = (uchar)plr[v & 0xff]._px;
		i = i + 1;
		(&monster[0]._menemyy)[iVar2] = (uchar)plr[(uint)(&monster[0]._menemy)[iVar2]]._py;
		iVar2 = iVar2 + 0x68;
	} while (i < 0xbe);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLevelMonsters__Fv()
 // line 380, offset 0x8015fc80
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x8015FC80
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8015FCF4
	// End Line: 399

	/* begin block 2 */
		// Start line: 824
	/* end block 2 */
	// End Line: 825

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLevelMonsters__Fv(void)

{
	int iVar1;
	short *psVar2;
	
	iVar1 = 0x1a4;
	nummtypes = 0;
	monstimgtot = 0;
	do {
		(&Monsters[0].mPlaceFlags)[iVar1] = '\0';
		iVar1 = iVar1 + -0x1c;
	} while (-1 < iVar1);
	ClrAllMonsters__Fv();
	iVar1 = 0xbd;
	psVar2 = &SHORT_8010a23e;
	nummonsters = 0;
	totalmonsters = -0x42;
	do {
		*psVar2 = (short)iVar1;
		iVar1 = iVar1 + -1;
		psVar2 = psVar2 + -1;
	} while (-1 < iVar1);
	uniquetrans = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetLevelMTypes__Fv()
 // line 402, offset 0x8015fd04
	/* begin block 1 */
		// Start line: 403
		// Start offset: 0x8015FD04
		// Variables:
	// 		int i; // $s1
	// 		int minl; // $a0
	// 		int maxl; // $v0
	// 		int typelist[190]; // stack offset -1248
	// 		int mt; // stack offset -40
	// 		int nt; // $s1
	// 		char mamask; // $s4
	// 		unsigned long QuestMask; // $s2

		/* begin block 1.1 */
			// Start line: 434
			// Start offset: 0x8015FD70

			/* begin block 1.1.1 */
				// Start line: 435
				// Start offset: 0x8015FD84

				/* begin block 1.1.1.1 */
					// Start line: 496
					// Start offset: 0x8015FF10

					/* begin block 1.1.1.1.1 */
						// Start line: 497
						// Start offset: 0x8015FF40
						// Variables:
					// 		int skeltypes[111]; // stack offset -488
					// 		int numskeltypes; // $s3
					/* end block 1.1.1.1.1 */
					// End offset: 0x80160034
					// End Line: 516
				/* end block 1.1.1.1 */
				// End offset: 0x80160034
				// End Line: 516
			/* end block 1.1.1 */
			// End offset: 0x80160128
			// End Line: 578
		/* end block 1.1 */
		// End offset: 0x801601B4
		// End Line: 605
	/* end block 1 */
	// End offset: 0x801601B4
	// End Line: 605

	/* begin block 2 */
		// Start line: 879
	/* end block 2 */
	// End Line: 880

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetLevelMTypes__Fv(void)

{
	uchar uVar1;
	ulong uVar2;
	uint uVar3;
	uint uVar4;
	int QuestNum;
	int *oldmt;
	int *piVar5;
	int mt;
	ulong QuestsNeededMask;
	long v;
	int aiStack1248 [190];
	int aiStack488 [112];
	int aiStack40 [4];
	
	QuestsNeededMask = 0;
	AddMonsterType__Fii(0x6d,2);
	if (currlevel == '\x10') {
		AddMonsterType__Fii(0x6c,1);
		AddMonsterType__Fii(0x70,1);
		AddMonsterType__Fii(0x6e,2);
		QuestsNeededMask = 0;
	}
	else {
		if (setlevel == '\0') {
			uVar1 = QuestStatus__Fi(6);
			if (uVar1 != '\0') {
				AddMonsterType__Fii(0x33,2);
				QuestsNeededMask = CM_QuestToBitPattern__Fi(6);
			}
			uVar1 = QuestStatus__Fi(2);
			if (uVar1 != '\0') {
				AddMonsterType__Fii((int)UniqMonst.mtype,4);
				uVar2 = CM_QuestToBitPattern__Fi(2);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			uVar1 = QuestStatus__Fi(3);
			if (uVar1 != '\0') {
				AddMonsterType__Fii((int)UniqMonstStruct_8010c738.mtype,4);
				uVar2 = CM_QuestToBitPattern__Fi(3);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			uVar1 = QuestStatus__Fi(7);
			if (uVar1 != '\0') {
				AddMonsterType__Fii((int)UniqMonstStruct_8010c750.mtype,4);
				uVar2 = CM_QuestToBitPattern__Fi(7);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			uVar1 = QuestStatus__Fi(4);
			if (uVar1 != '\0') {
				AddMonsterType__Fii((int)UniqMonstStruct_8010c7b0.mtype,4);
				uVar2 = CM_QuestToBitPattern__Fi(4);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			uVar1 = QuestStatus__Fi(0xb);
			if (uVar1 != '\0') {
				AddMonsterType__Fii((int)UniqMonstStruct_ARRAY_8010c7c8[0].mtype,4);
				uVar2 = CM_QuestToBitPattern__Fi(0xb);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			uVar1 = QuestStatus__Fi(9);
			if (uVar1 != '\0') {
				uVar2 = CM_QuestToBitPattern__Fi(9);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			uVar1 = QuestStatus__Fi(10);
			if (uVar1 != '\0') {
				uVar2 = CM_QuestToBitPattern__Fi(10);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			if ((currlevel == '\x0f') && (gbMaxPlayers == '\x02')) {
				uVar2 = CM_QuestToBitPattern__Fi(0xf);
				QuestsNeededMask = QuestsNeededMask | uVar2;
			}
			if ((gbMaxPlayers != '\x01') && (currlevel == quests[12]._qlevel)) {
				uVar2 = CM_QuestToBitPattern__Fi(0xc);
				QuestsNeededMask = QuestsNeededMask | uVar2;
				AddMonsterType__Fii(0x32,4);
				v = 0;
				mt = 8;
				QuestNum = 0x1e0;
				do {
					uVar1 = IsSkel__Fi(mt);
					if (uVar1 != '\0') {
						uVar3 = (uint)(byte)(&monsterdata[0].mMinDLvl)[QuestNum] << 0x18;
						uVar4 = (uint)(byte)(&monsterdata[0].mMaxDLvl)[QuestNum] << 0x18;
						if (((((int)(((int)uVar3 >> 0x18) + (uVar3 >> 0x1f)) >> 1) + 1 <= (int)(uint)currlevel)
								&& ((int)(uint)currlevel <= ((int)(((int)uVar4 >> 0x18) + (uVar4 >> 0x1f)) >> 1) + 1
									 )) && ((MonstAvailTbl[mt] & 3U) != 0)) {
							aiStack488[v] = mt;
							v = v + 1;
						}
					}
					mt = mt + 1;
					QuestNum = QuestNum + 0x3c;
				} while (mt < 0x1c);
				v = ENG_random__Fl(v);
				AddMonsterType__Fii(aiStack488[v],1);
			}
			QuestNum = ML_GetPresetMonsters__FiPiUl((uint)currlevel,aiStack1248,QuestsNeededMask);
			if (monstdebug != '\0') {
				QuestNum = 0;
				if (debugmonsttypes < 1) {
					return;
				}
				oldmt = &DebugMonsters;
				do {
					SwapMonsterType__FPi(oldmt);
					mt = *oldmt;
					oldmt = oldmt + 1;
					AddMonsterType__Fii(mt,1);
					QuestNum = QuestNum + 1;
				} while (QuestNum < debugmonsttypes);
				return;
			}
			if (QuestNum < 1) {
				return;
			}
			oldmt = aiStack1248 + QuestNum;
			while( true ) {
				if (0xf < nummtypes) {
					return;
				}
				if (QuestNum == 0) break;
				v = ENG_random__Fl(QuestNum);
				piVar5 = aiStack1248 + v;
				aiStack40[0] = *piVar5;
				oldmt = oldmt + -1;
				SwapMonsterType__FPi(aiStack40);
				AddMonsterType__Fii(aiStack40[0],1);
				QuestNum = QuestNum + -1;
				*piVar5 = *oldmt;
				if (QuestNum < 1) {
					return;
				}
			}
			return;
		}
		if (setlvlnum == '\x02') {
			QuestNum = 0xe;
		}
		else {
			if (setlvlnum < 3) {
				QuestsNeededMask = 0;
				if (setlvlnum == '\x01') {
					QuestsNeededMask = CM_QuestToBitPattern__Fi(0xc);
					AddMonsterType__Fii(0x32,4);
				}
				goto LAB_801601ac;
			}
			if (setlvlnum == '\x04') {
				QuestNum = 0xd;
			}
			else {
				QuestNum = 0xf;
				if (setlvlnum != '\x05') {
					QuestsNeededMask = 0;
					goto LAB_801601ac;
				}
			}
		}
		QuestsNeededMask = CM_QuestToBitPattern__Fi(QuestNum);
	}
LAB_801601ac:
	GetMonsterTypes__FUl(QuestsNeededMask);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceQuestMonsters__Fv()
 // line 612, offset 0x801601d8
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x801601D8
		// Variables:
	// 		int skeltype; // $s0
	// 		unsigned char *setp; // $s0

		/* begin block 1.1 */
			// Start line: 613
			// Start offset: 0x801601D8

			/* begin block 1.1.1 */
				// Start line: 617
				// Start offset: 0x801601F4

				/* begin block 1.1.1.1 */
					// Start line: 631
					// Start offset: 0x801602A4

					/* begin block 1.1.1.1.1 */
						// Start line: 632
						// Start offset: 0x801602B8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 633
							// Start offset: 0x801602B8
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x801602F4
						// End Line: 635
					/* end block 1.1.1.1.1 */
					// End offset: 0x801602F4
					// End Line: 635
				/* end block 1.1.1.1 */
				// End offset: 0x801602F4
				// End Line: 635

				/* begin block 1.1.1.2 */
					// Start line: 638
					// Start offset: 0x801602F4

					/* begin block 1.1.1.2.1 */
						// Start line: 639
						// Start offset: 0x80160308

						/* begin block 1.1.1.2.1.1 */
							// Start line: 640
							// Start offset: 0x80160308
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80160344
						// End Line: 642
					/* end block 1.1.1.2.1 */
					// End offset: 0x80160344
					// End Line: 642
				/* end block 1.1.1.2 */
				// End offset: 0x80160344
				// End Line: 642

				/* begin block 1.1.1.3 */
					// Start line: 645
					// Start offset: 0x80160344

					/* begin block 1.1.1.3.1 */
						// Start line: 646
						// Start offset: 0x80160358

						/* begin block 1.1.1.3.1.1 */
							// Start line: 647
							// Start offset: 0x80160358
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80160394
						// End Line: 649
					/* end block 1.1.1.3.1 */
					// End offset: 0x80160394
					// End Line: 649
				/* end block 1.1.1.3 */
				// End offset: 0x80160394
				// End Line: 649

				/* begin block 1.1.1.4 */
					// Start line: 652
					// Start offset: 0x80160394

					/* begin block 1.1.1.4.1 */
						// Start line: 653
						// Start offset: 0x801603A8

						/* begin block 1.1.1.4.1.1 */
							// Start line: 654
							// Start offset: 0x801603A8
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x801603EC
						// End Line: 656
					/* end block 1.1.1.4.1 */
					// End offset: 0x801603EC
					// End Line: 656
				/* end block 1.1.1.4 */
				// End offset: 0x801603EC
				// End Line: 656

				/* begin block 1.1.1.5 */
					// Start line: 659
					// Start offset: 0x801603EC

					/* begin block 1.1.1.5.1 */
						// Start line: 660
						// Start offset: 0x80160400

						/* begin block 1.1.1.5.1.1 */
							// Start line: 661
							// Start offset: 0x80160400
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x80160400
						// End Line: 661
					/* end block 1.1.1.5.1 */
					// End offset: 0x8016044C
					// End Line: 664
				/* end block 1.1.1.5 */
				// End offset: 0x8016044C
				// End Line: 664

				/* begin block 1.1.1.6 */
					// Start line: 677
					// Start offset: 0x801604A0

					/* begin block 1.1.1.6.1 */
						// Start line: 677
						// Start offset: 0x801604D0

						/* begin block 1.1.1.6.1.1 */
							// Start line: 678
							// Start offset: 0x801604D0
						/* end block 1.1.1.6.1.1 */
						// End offset: 0x801604D0
						// End Line: 678
					/* end block 1.1.1.6.1 */
					// End offset: 0x801604D0
					// End Line: 678
				/* end block 1.1.1.6 */
				// End offset: 0x801604D0
				// End Line: 678
			/* end block 1.1.1 */
			// End offset: 0x801604D0
			// End Line: 678
		/* end block 1.1 */
		// End offset: 0x80160584
		// End Line: 690
	/* end block 1 */
	// End offset: 0x80160584
	// End Line: 690

	/* begin block 2 */
		// Start line: 1327
	/* end block 2 */
	// End Line: 1328

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceQuestMonsters__Fv(void)

{
	uchar uVar1;
	uchar *pMap;
	int miniontype;
	int iVar2;
	
	if (setlevel == '\0') {
		uVar1 = QuestStatus__Fi(6);
		if (uVar1 != '\0') {
			PlaceUniqueMonst__Fiii(9,0,0);
		}
		if ((currlevel == quests[12]._qlevel) && (gbMaxPlayers != '\x01')) {
			miniontype = 0;
			if (0 < nummtypes) {
				iVar2 = 0;
				do {
					uVar1 = IsSkel__Fi((uint)(&Monsters[0].mtype)[iVar2]);
					if (uVar1 != '\0') break;
					miniontype = miniontype + 1;
					iVar2 = iVar2 + 0x1c;
				} while (miniontype < nummtypes);
			}
			PlaceUniqueMonst__Fiii(1,miniontype,0x1e);
		}
		uVar1 = QuestStatus__Fi(7);
		if (uVar1 != '\0') {
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L1Data\\Banner1.DUN",(ulong *)0x0);
			SetMapMonsters__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
			mem_free_dbg__FPv(pMap);
		}
		uVar1 = QuestStatus__Fi(9);
		if (uVar1 != '\0') {
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L2Data\\Blood2.DUN",(ulong *)0x0);
			SetMapMonsters__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
			mem_free_dbg__FPv(pMap);
		}
		uVar1 = QuestStatus__Fi(8);
		if (uVar1 != '\0') {
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L2Data\\Blind2.DUN",(ulong *)0x0);
			SetMapMonsters__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
			mem_free_dbg__FPv(pMap);
		}
		uVar1 = QuestStatus__Fi(10);
		if (uVar1 != '\0') {
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L3Data\\Anvil.DUN",(ulong *)0x0);
			SetMapMonsters__FPUcii(pMap,(setpc_x + 1) * 2,(setpc_y + 1) * 2);
			mem_free_dbg__FPv(pMap);
		}
		uVar1 = QuestStatus__Fi(0xb);
		if (uVar1 != '\0') {
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Levels\\L4Data\\Warlord.DUN",(ulong *)0x0);
			SetMapMonsters__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
			mem_free_dbg__FPv(pMap);
			AddMonsterType__Fii((int)UniqMonstStruct_ARRAY_8010c7c8[0].mtype,1);
		}
		uVar1 = QuestStatus__Fi(4);
		if (uVar1 != '\0') {
			AddMonsterType__Fii((int)UniqMonstStruct_8010c7b0.mtype,1);
		}
		uVar1 = QuestStatus__Fi(3);
		if ((uVar1 != '\0') && (zharlib == -1)) {
			quests[3]._qactive = '\0';
		}
		if ((currlevel == quests[15]._qlevel) && (gbMaxPlayers != '\x01')) {
			AddMonsterType__Fii((int)UniqMonstStruct_8010c768.mtype,4);
			AddMonsterType__Fii((int)UniqMonstStruct_8010c780.mtype,4);
			PlaceUniqueMonst__Fiii(4,0,0);
			PlaceUniqueMonst__Fiii(5,0,0);
			PlaceUniqueMonst__Fiii(6,0,0);
			pMap = GRL_LoadFileInMemSig__FPCcPUl("Vile14.DUN",(ulong *)0x0);
			SetMapMonsters__FPUcii(pMap,setpc_x << 1,setpc_y << 1);
			mem_free_dbg__FPv(pMap);
		}
	}
	else {
		if (setlvlnum == '\x01') {
			PlaceUniqueMonst__Fiii(1,0,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadDiabMonsts__Fv()
 // line 698, offset 0x8016059c
	/* begin block 1 */
		// Start line: 699
		// Start offset: 0x8016059C
		// Variables:
	// 		unsigned char *lpSetPiece; // $s0

		/* begin block 1.1 */
			// Start line: 699
			// Start offset: 0x8016059C
		/* end block 1.1 */
		// End offset: 0x8016059C
		// End Line: 699

		/* begin block 1.2 */
			// Start line: 699
			// Start offset: 0x8016059C
		/* end block 1.2 */
		// End offset: 0x8016059C
		// End Line: 699

		/* begin block 1.3 */
			// Start line: 699
			// Start offset: 0x8016059C
		/* end block 1.3 */
		// End offset: 0x8016059C
		// End Line: 699

		/* begin block 1.4 */
			// Start line: 699
			// Start offset: 0x8016059C
		/* end block 1.4 */
		// End offset: 0x80160698
		// End Line: 725
	/* end block 1 */
	// End offset: 0x80160698
	// End Line: 725

	/* begin block 2 */
		// Start line: 1499
	/* end block 2 */
	// End Line: 1500

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadDiabMonsts__Fv(void)

{
	uchar *pMap;
	
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab1.DUN",(ulong *)0x0);
	SetMapMonsters__FPUcii(pMap,diabquad1x << 1,diabquad1y << 1);
	mem_free_dbg__FPv(pMap);
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab2a.DUN",(ulong *)0x0);
	SetMapMonsters__FPUcii(pMap,diabquad2x << 1,diabquad2y << 1);
	mem_free_dbg__FPv(pMap);
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab3a.DUN",(ulong *)0x0);
	SetMapMonsters__FPUcii(pMap,diabquad3x << 1,diabquad3y << 1);
	mem_free_dbg__FPv(pMap);
	pMap = GRL_LoadFileInMemSig__FPCcPUl("diab4a.DUN",(ulong *)0x0);
	SetMapMonsters__FPUcii(pMap,diabquad4x << 1,diabquad4y << 1);
	mem_free_dbg__FPv(pMap);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceGroup__FiiUci(int mtype /*stack -120*/, int num /*stack -112*/, unsigned char leaderf /*stack -104*/, int leader /*stack -96*/)
 // line 732, offset 0x801606ac
	/* begin block 1 */
		// Start line: 733
		// Start offset: 0x801606AC
		// Variables:
	// 		int xp; // $s0
	// 		int yp; // $s2
	// 		int x1; // $s5
	// 		int y1; // $s7
	// 		int j; // $s4
	// 		int placed; // $s3
	// 		int try1; // stack offset -88
	// 		int try2; // $s6
	// 		int rd; // $v0
	/* end block 1 */
	// End offset: 0x80160C6C
	// End Line: 821

	/* begin block 2 */
		// Start line: 1579
	/* end block 2 */
	// End Line: 1580

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceGroup__FiiUci(int mtype,int num,uchar leaderf,int leader)

{
	ushort uVar1;
	bool bVar2;
	bool bVar3;
	uchar uVar4;
	long yp;
	int iVar5;
	long lVar6;
	long xp;
	int xp_00;
	int yp_00;
	int iVar7;
	int iVar8;
	int iVar9;
	int local_70;
	uchar local_60;
	int local_58;
	byte local_38;
	
	iVar7 = 0;
	local_38 = leaderf & 2;
	local_58 = 0;
	local_70 = num;
	do {
		while (iVar7 != 0) {
			nummonsters = nummonsters + -1;
			iVar7 = iVar7 + -1;
			if ((0x5f < (byte)monster[nummonsters]._mx) || (0x5f < (byte)monster[nummonsters]._my)) {
				DBG_SendMessage("Warning - GT 4 DO XXX. Group monster off of map. %s %d");
			}
			dung_map[(int)monster[nummonsters]._mx * 0x70 + (int)monster[nummonsters]._my].dMonster = 0;
		}
		if ((leaderf & 1) == 0) {
			do {
				xp = ENG_random__Fl(0x60);
				yp = ENG_random__Fl(0x60);
				uVar4 = MonstPlace__Fii(xp,yp);
			} while (uVar4 == '\0');
		}
		else {
			yp = ENG_random__Fl(8);
			xp = (int)monster[leader]._mx + (int)(&offset_x)[yp];
			yp = (int)monster[leader]._my + (int)(&offset_y)[yp];
		}
		iVar9 = 0;
		if ((int)(uint)totalmonsters < nummonsters + local_70) {
			local_70 = (uint)totalmonsters - nummonsters;
		}
		iVar8 = 0;
		if (0 < local_70) {
			bVar2 = true;
			xp_00 = xp;
			yp_00 = yp;
			do {
				bVar3 = false;
				if (!bVar2) break;
				uVar4 = MonstPlace__Fii(xp_00,yp_00);
				if (((uVar4 != '\0') &&
						(dung_map[xp_00 * 0x70 + yp_00].dTransVal == dung_map[xp * 0x70 + yp].dTransVal)) &&
					 ((local_38 == 0 ||
						((iVar5 = abs(xp_00 - xp), iVar5 < 4 && (iVar5 = abs(yp_00 - yp), iVar5 < 4)))))) {
					bVar3 = true;
				}
				if (bVar3) {
					PlaceMonster__Fiiii(nummonsters,mtype,xp_00,yp_00);
					lVar6 = nummonsters;
					if ((leaderf & 1) != 0) {
						iVar5 = monster[nummonsters]._mmaxhp << 1;
						monster[nummonsters]._mmaxhp = iVar5;
						monster[lVar6]._mhitpoints = iVar5;
						monster[lVar6]._mint = monster[leader]._mint;
						if (local_38 != 0) {
							local_60 = (uchar)leader;
							monster[nummonsters].leader = local_60;
							monster[nummonsters].leaderflag = '\x01';
							monster[nummonsters]._mAi = monster[leader]._mAi;
						}
						if (monster[nummonsters]._mAi != '\f') {
							monster[nummonsters].Action = '\0';
							lVar6 = ENG_random__Fl((int)monster[nummonsters]._mAnimLen + -1);
							monster[nummonsters]._mAnimFrame = (char)lVar6 + '\x01';
							lVar6 = nummonsters;
							uVar1 = monster[nummonsters]._mFlags;
							monster[nummonsters]._mmode = '\0';
							monster[lVar6]._mFlags = uVar1 & 0xfffb;
						}
					}
					iVar7 = iVar7 + 1;
					nummonsters = nummonsters + 1;
					iVar8 = iVar8 + 1;
				}
				else {
					iVar9 = iVar9 + 1;
				}
				lVar6 = ENG_random__Fl(8);
				xp_00 = xp_00 + (int)(&offset_x)[lVar6];
				lVar6 = ENG_random__Fl(8);
				yp_00 = yp_00 + (int)(&offset_x)[lVar6];
				bVar2 = iVar9 < 100;
			} while (iVar8 < local_70);
		}
		if ((local_70 <= iVar7) || (local_58 = local_58 + 1, 9 < local_58)) {
			if ((leaderf & 2) != 0) {
				monster[leader].packsize = (uchar)iVar7;
			}
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMapMonsters__FPUcii(unsigned char *pMap /*$s0*/, int startx /*$s5*/, int starty /*$s6*/)
 // line 825, offset 0x80160ca0
	/* begin block 1 */
		// Start line: 826
		// Start offset: 0x80160CA0
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	// 		unsigned short rw; // $v0
	// 		unsigned short rh; // $s4
	// 		unsigned short *lm; // $s1
	// 		int mt; // stack offset -56
	/* end block 1 */
	// End offset: 0x80160EA8
	// End Line: 881

	/* begin block 2 */
		// Start line: 1803
	/* end block 2 */
	// End Line: 1804

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetMapMonsters__FPUcii(uchar *pMap,int startx,int starty)

{
	ushort uVar1;
	long i;
	int mtype;
	uint uVar2;
	int iVar3;
	int iVar4;
	ushort *puVar5;
	int iVar6;
	uint uVar7;
	int local_38 [6];
	
	AddMonsterType__Fii(0x6d,2);
	AddMonster__FiiiiUc(1,0,0,0,0);
	AddMonster__FiiiiUc(1,0,0,0,0);
	AddMonster__FiiiiUc(1,0,0,0,0);
	AddMonster__FiiiiUc(1,0,0,0,0);
	if ((setlevel != '\0') && (setlvlnum == '\x05')) {
		AddMonsterType__Fii((int)UniqMonstStruct_8010c768.mtype,4);
		AddMonsterType__Fii((int)UniqMonstStruct_8010c780.mtype,4);
		AddMonsterType__Fii((int)UniqMonstStruct_8010c798.mtype,4);
		PlaceUniqueMonst__Fiii(4,0,0);
		PlaceUniqueMonst__Fiii(5,0,0);
		PlaceUniqueMonst__Fiii(6,0,0);
	}
	uVar1 = *(ushort *)pMap;
	uVar7 = (uint)*(ushort *)(pMap + 2) << 1;
	iVar3 = ((uint)uVar1 & 0x7fff) * 2;
	uVar2 = uVar7 & 0xffff;
	iVar6 = 0;
	puVar5 = (ushort *)(pMap + iVar3 * uVar2 * 2 + (uint)*(ushort *)(pMap + 2) * (uint)uVar1 * 2 + 4);
	if (uVar2 != 0) {
		do {
			iVar4 = 0;
			if ((uVar1 & 0x7fff) != 0) {
				do {
					if (*puVar5 != 0) {
						local_38[0] = (int)*(char *)(&monsterdata[0x70].field_0x3b + (uint)*puVar5);
						SwapMonsterType__FPi(local_38);
						mtype = AddMonsterType__Fii(local_38[0],2);
						i = nummonsters;
						nummonsters = nummonsters + 1;
						PlaceMonster__Fiiii(i,mtype,iVar4 + startx + 0x10,iVar6 + starty + 0x10);
					}
					iVar4 = iVar4 + 1;
					puVar5 = puVar5 + 1;
				} while (iVar4 < iVar3);
			}
			iVar6 = iVar6 + 1;
		} while (iVar6 < (int)(uVar7 & 0xffff));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMonsters__Fv()
 // line 885, offset 0x80160ed4
	/* begin block 1 */
		// Start line: 886
		// Start offset: 0x80160ED4
		// Variables:
	// 		int i; // $s2
	// 		int mtype; // $s0
	// 		int na; // $a1
	// 		int nt; // $s4
	// 		int scattertypes[111]; // stack offset -504
	// 		int numscattypes; // $s5
	// 		long fv; // $s1
	// 		long j; // $s0
	// 		int numplacemonsters; // $a0
	// 		int s; // $s1
	// 		int t; // $s0
	/* end block 1 */
	// End offset: 0x80161260
	// End Line: 1000

	/* begin block 2 */
		// Start line: 1965
	/* end block 2 */
	// End Line: 1966

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMonsters__Fv(void)

{
	int iVar1;
	uchar uVar2;
	long lVar3;
	int *piVar4;
	char cVar5;
	int y;
	int x;
	int num;
	int iVar6;
	long v;
	int local_1f8 [118];
	
	v = 0;
	if (setlevel == '\0') {
		AddMonster__FiiiiUc(1,0,0,0,0);
		AddMonster__FiiiiUc(1,0,0,0,0);
		AddMonster__FiiiiUc(1,0,0,0,0);
		AddMonster__FiiiiUc(1,0,0,0,0);
		if ((setlevel == '\0') && (currlevel == '\x10')) {
			LoadDiabMonsts__Fv();
		}
	}
	iVar6 = numtrigs;
	if (currlevel == '\x0f') {
		iVar6 = 1;
	}
	num = 0;
	if (0 < iVar6) {
		do {
			x = -2;
			do {
				y = -2;
				do {
					DoVision__FiiiUcUc((&trigs)[num]._tx + x,(&trigs)[num]._ty + y,0xf,'\0',0);
					y = y + 1;
				} while (y < 2);
				x = x + 1;
			} while (x < 2);
			num = num + 1;
		} while (num < iVar6);
	}
	PlaceQuestMonsters__Fv();
	if (setlevel == '\0') {
		num = 0;
		PlaceUniques__Fv();
		x = 0;
		do {
			y = 0;
			do {
				uVar2 = SolidLoc__Fii(x,y);
				iVar1 = nummtypes;
				if (uVar2 == '\0') {
					num = num + 1;
				}
				y = y + 1;
			} while (y < 0x60);
			x = x + 1;
		} while (x < 0x60);
		num = num / 0x23;
		if (gbMaxPlayers != '\x01') {
			num = num + (num >> 1);
		}
		cVar5 = (char)num;
		if (0xb4 < num + nummonsters) {
			cVar5 = -0x4c - (char)nummonsters;
		}
		totalmonsters = (char)nummonsters + cVar5;
		num = 0;
		if (0 < nummtypes) {
			x = 0;
			piVar4 = local_1f8;
			do {
				if (((&Monsters[0].mPlaceFlags)[x] & 1) != 0) {
					*piVar4 = num;
					piVar4 = piVar4 + 1;
					v = v + 1;
				}
				num = num + 1;
				x = x + 0x1c;
			} while (num < iVar1);
		}
		while (nummonsters < (int)(uint)totalmonsters) {
			lVar3 = ENG_random__Fl(v);
			x = local_1f8[lVar3];
			num = 1;
			if (currlevel != '\x01') {
				lVar3 = ENG_random__Fl(2);
				if (lVar3 == 0) {
					num = 1;
				}
				else {
					if (currlevel == '\x02') {
						lVar3 = ENG_random__Fl(2);
						num = lVar3 + 2;
					}
					else {
						lVar3 = ENG_random__Fl(3);
						num = lVar3 + 3;
					}
				}
			}
			PlaceGroup__FiiUci(x,num,'\0',0);
		}
	}
	num = 0;
	if (0 < iVar6) {
		do {
			x = -2;
			do {
				y = -2;
				do {
					DoUnVision__Fiiii((&trigs)[num]._tx + x,(&trigs)[num]._ty + y,0xf,-1);
					y = y + 1;
				} while (y < 2);
				x = x + 1;
			} while (x < 2);
			num = num + 1;
		} while (num < iVar6);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceUniqueMonst__Fiii(int uniqindex /*stack -120*/, int miniontype /*stack -112*/, int unpackfilesize /*stack -104*/)
 // line 1005, offset 0x80161288
	/* begin block 1 */
		// Start line: 1006
		// Start offset: 0x80161288
		// Variables:
	// 		struct UniqMonstStruct *Uniq; // stack offset -96
	// 		struct MonsterStruct *Monst; // $s4
	// 		int xp; // $s7
	// 		int yp; // $s2
	// 		int x; // $s1
	// 		int y; // $s0
	// 		unsigned char done; // $v1
	// 		int count; // $s3
	// 		int count2; // stack offset -88
	// 		char filestr[64]; // stack offset -192
	// 		int uniqtype; // stack offset -80
	// 		int i; // $a1
	// 		unsigned char zharflag; // stack offset -72
	// 		int mMinDamage; // $s0
	// 		int mMaxDamage; // $s1

		/* begin block 1.1 */
			// Start line: 1029
			// Start offset: 0x8016132C

			/* begin block 1.1.1 */
				// Start line: 1029
				// Start offset: 0x80161338
				// Variables:
			// 		int monstype; // stack offset -128
			/* end block 1.1.1 */
			// End offset: 0x80161384
			// End Line: 1033
		/* end block 1.1 */
		// End offset: 0x80161398
		// End Line: 1034
	/* end block 1 */
	// End offset: 0x80161B98
	// End Line: 1272

	/* begin block 2 */
		// Start line: 2220
	/* end block 2 */
	// End Line: 2221

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceUniqueMonst__Fiii(int uniqindex,int miniontype,int unpackfilesize)

{
	byte *pbVar1;
	char cVar2;
	ushort uVar3;
	bool bVar4;
	long lVar5;
	uchar uVar6;
	char cVar7;
	uchar uVar8;
	short sVar9;
	long leader;
	long lVar10;
	uchar uVar11;
	int iVar12;
	int xp;
	uint yp;
	uint xp_00;
	int yp_00;
	int iVar13;
	MonsterStruct *pMVar14;
	uint local_80 [2];
	uint local_78;
	int local_70;
	int local_68;
	UniqMonstStruct *local_60;
	int local_58;
	int local_50;
	char local_48;
	int local_30;
	
	lVar5 = nummonsters;
	local_60 = &UniqMonst + uniqindex;
	local_58 = 0;
	local_48 = '\x01';
	pMVar14 = monster + nummonsters;
	if (uniquetrans * 0x100 + 0x1300 < 0x1b00) {
		local_50 = 0;
		xp = 0;
		local_78 = uniqindex;
		local_70 = miniontype;
		local_68 = unpackfilesize;
		while (local_50 < nummtypes) {
			local_80[0] = SEXT14((&UniqMonst)[uniqindex].mtype);
			SwapMonsterType__FPi((int *)local_80);
			pbVar1 = &Monsters[0].mtype + xp;
			xp = xp + 0x1c;
			if ((uint)*pbVar1 == local_80[0]) break;
			local_50 = local_50 + 1;
		}
		do {
			leader = ENG_random__Fl(0x40);
			xp = leader + 0x10;
			lVar10 = ENG_random__Fl(0x40);
			yp_00 = lVar10 + 0x10;
			iVar13 = 0;
			xp_00 = leader + 0xd;
			iVar12 = lVar10 + 0x13;
			do {
				yp = lVar10 + 0xd;
				if ((int)yp < iVar12) {
					do {
						if (((yp < 0x62) && (xp_00 < 0x62)) &&
							 (local_30 = iVar12, uVar6 = MonstPlace__Fii(xp_00,yp), iVar12 = local_30,
							 uVar6 != '\0')) {
							iVar13 = iVar13 + 1;
							iVar12 = local_30;
						}
						yp = yp + 1;
					} while ((int)yp < lVar10 + 0x13);
				}
				xp_00 = xp_00 + 1;
			} while ((int)xp_00 < leader + 0x13);
			bVar4 = false;
			if (((iVar13 < 9) && (local_58 = local_58 + 1, local_58 < 1000)) ||
				 (uVar6 = MonstPlace__Fii(xp,yp_00), uVar6 == '\0')) {
				bVar4 = true;
			}
		} while (bVar4);
		if (local_78 == 3) {
			xp = setpc_x * 2 + 0x18;
			yp_00 = setpc_y * 2 + 0x1c;
		}
		if (local_78 == 8) {
			xp = setpc_x * 2 + 0x16;
			yp_00 = setpc_y * 2 + 0x17;
		}
		if ((local_78 == 2) && (iVar12 = 0, 0 < themeCount)) {
			iVar13 = 0;
			do {
				if ((iVar12 == zharlib) && (local_48 == '\x01')) {
					local_48 = '\0';
					xp = *(int *)((int)&themeLoc.x + iVar13) * 2 + 0x14;
					yp_00 = *(int *)((int)&themeLoc.y + iVar13) * 2 + 0x14;
				}
				iVar12 = iVar12 + 1;
				iVar13 = iVar13 + 0x14;
			} while (iVar12 < themeCount);
		}
		if (gbMaxPlayers == '\x01') {
			if (local_78 == 4) {
				xp = 0x20;
				yp_00 = 0x2e;
			}
			if (local_78 == 5) {
				xp = 0x28;
				yp_00 = 0x2d;
			}
			if (local_78 == 6) {
				xp = 0x26;
				yp_00 = 0x31;
			}
			if (local_78 == (uint)gbMaxPlayers) {
				xp = 0x23;
				yp_00 = 0x2f;
			}
		}
		else {
			if (local_78 == 4) {
				xp = setpc_x * 2 + 0x13;
				yp_00 = setpc_y * 2 + 0x16;
			}
			if (local_78 == 5) {
				xp = setpc_x * 2 + 0x15;
				yp_00 = setpc_y * 2 + 0x13;
			}
			if (local_78 == 6) {
				xp = setpc_x * 2 + 0x15;
				yp_00 = setpc_y * 2 + 0x19;
			}
		}
		if (local_78 == 9) {
			bVar4 = false;
			yp_00 = 0;
			do {
				xp = 0;
				do {
					if (bVar4) break;
					sVar9 = GetDPiece__Fii(xp,yp_00);
					bVar4 = sVar9 == 0x16f;
					xp = xp + 1;
				} while (xp < 0x60);
				yp_00 = yp_00 + 1;
			} while ((yp_00 < 0x60) && (!bVar4));
		}
		PlaceMonster__Fiiii(nummonsters,local_50,xp,yp_00);
		monster[lVar5]._uniqtype = (char)local_78 + '\x01';
		cVar7 = local_60->mlevel << 1;
		if (local_60->mlevel == '\0') {
			cVar7 = monster[lVar5].mLevel + '\x05';
		}
		monster[lVar5].mLevel = cVar7;
		monster[lVar5].mExp = monster[lVar5].mExp << 1;
		monster[lVar5].mName = (uint)local_60->mName;
		xp = (uint)local_60->mmaxhp << 6;
		bVar4 = gbMaxPlayers == '\x01';
		monster[lVar5]._mmaxhp = xp;
		if ((bVar4) && (xp_00 = xp >> 1, monster[lVar5]._mmaxhp = xp_00, xp_00 < 0x40)) {
			monster[lVar5]._mmaxhp = 0x40;
		}
		cVar7 = monster[lVar5]._mx;
		cVar2 = monster[lVar5]._my;
		uVar6 = local_60->mMinDamage;
		uVar8 = local_60->mMaxDamage;
		monster[lVar5]._mhitpoints = monster[lVar5]._mmaxhp;
		monster[lVar5]._mAi = local_60->mAi;
		uVar11 = local_60->mint;
		monster[lVar5].mMinDamage = uVar6;
		monster[lVar5].mMaxDamage = uVar8;
		monster[lVar5].mMinDamage2 = uVar6;
		monster[lVar5].mMaxDamage2 = uVar8;
		monster[lVar5]._mint = uVar11;
		monster[lVar5].mMagicRes = local_60->mMagicRes;
		pMVar14->mtalkmsg = local_60->mtalkmsg;
		xp = AddLight__Fiii((int)cVar7,(int)cVar2,0x23f4);
		monster[lVar5].mlid = (uchar)xp;
		if ((gbMaxPlayers != '\x01') && (monster[lVar5]._mAi == '\x1d')) {
			pMVar14->mtalkmsg = 0;
		}
		if (pMVar14->mtalkmsg != 0) {
			monster[lVar5]._mgoal = '\x06';
		}
		if (gnDifficulty == 1) {
			uVar11 = uVar6 * '\x02' + '\x04';
			xp = monster[lVar5]._mmaxhp;
			monster[lVar5].mMinDamage = uVar11;
			monster[lVar5].mMinDamage2 = uVar11;
			uVar3 = monster[lVar5].mExp;
			uVar11 = uVar8 * '\x02' + '\x04';
			monster[lVar5].mMaxDamage = uVar11;
			monster[lVar5].mMaxDamage2 = uVar11;
			xp = xp * 3 + 100;
			monster[lVar5]._mmaxhp = xp;
			monster[lVar5]._mhitpoints = xp;
			cVar7 = monster[lVar5].mLevel;
			monster[lVar5].mExp = uVar3 * 2 + 2000;
			monster[lVar5].mLevel = cVar7 + '\x0f';
		}
		if (gnDifficulty == 2) {
			xp = monster[lVar5]._mmaxhp;
			uVar8 = uVar8 * '\x04' + '\x06';
			monster[lVar5].mMaxDamage = uVar8;
			monster[lVar5].mMaxDamage2 = uVar8;
			cVar7 = monster[lVar5].mLevel;
			uVar6 = uVar6 * '\x04' + '\x06';
			monster[lVar5].mMinDamage = uVar6;
			monster[lVar5].mMinDamage2 = uVar6;
			xp = xp * 4 + 200;
			monster[lVar5]._mmaxhp = xp;
			monster[lVar5]._mhitpoints = xp;
			uVar3 = monster[lVar5].mExp;
			monster[lVar5].mLevel = cVar7 + '\x1e';
			monster[lVar5].mExp = uVar3 * 4 + 4000;
		}
		if (local_78 == 3) {
			if (quests[7]._qvar1 == '\x02') {
				uVar3 = monster[lVar5]._mFlags;
				pMVar14->mtalkmsg = 0x15;
				monster[lVar5]._mFlags = uVar3 | 0x40;
			}
			if (quests[7]._qvar1 == '\x03') {
				monster[lVar5]._msquelch = -1;
				pMVar14->mtalkmsg = 0;
				monster[lVar5]._mgoal = '\x01';
			}
		}
		if ((local_78 == 8) && (quests[4]._qactive == '\x03')) {
			uVar3 = monster[lVar5]._mFlags;
			pMVar14->mtalkmsg = 0;
			monster[lVar5]._mFlags = uVar3 | 0x40;
		}
		if (local_78 == 0) {
			if (quests[2]._qvar1 == '\x03') {
				monster[lVar5]._mFlags = monster[lVar5]._mFlags | 0x40;
				pMVar14->mtalkmsg = (uint)quests[2]._qvar2;
			}
			if (quests[2]._qvar1 == '\x04') {
				monster[lVar5]._mgoal = '\x01';
				monster[lVar5]._msquelch = -1;
				pMVar14->mtalkmsg = 0;
			}
			if (quests[2]._qvar1 == '\x05') {
				monster[lVar5]._mgoal = '\x06';
				pMVar14->mtalkmsg = (uint)quests[2]._qvar2;
			}
		}
		if (local_78 == 2) {
			if (quests[3]._qvar2 == '\x02') {
				monster[lVar5]._mFlags = monster[lVar5]._mFlags | 0x40;
			}
			if (quests[3]._qvar2 == '\x03') {
				monster[lVar5]._mgoal = '\x01';
				monster[lVar5]._msquelch = -1;
				pMVar14->mtalkmsg = 0;
			}
		}
		if ((local_78 == 4) && (quests[15]._qvar1 == '\x06')) {
			if (gbMaxPlayers == '\x01') {
				ObjChangeMapResync__Fiiii(1,0x12,0x14,0x18);
			}
			RedoPlayerVision__Fv();
			monster[lVar5]._mgoal = '\x01';
			monster[lVar5]._msquelch = -1;
			pMVar14->mtalkmsg = 0;
		}
		uniquetrans = uniquetrans + 1;
		if ((local_60->mUnqAttr & 4) != 0) {
			monster[lVar5].mHit = local_60->mUnqVar1;
			monster[lVar5].mHit2 = local_60->mUnqVar1;
		}
		if ((local_60->mUnqAttr & 8) != 0) {
			monster[lVar5].mArmorClass = local_60->mUnqVar1;
		}
		leader = nummonsters;
		nummonsters = nummonsters + 1;
		if ((local_60->mUnqAttr & 1) != 0) {
			PlaceGroup__FiiUci(local_70,local_68,(uchar)local_60->mUnqAttr,leader);
		}
		if (monster[lVar5]._mAi != '\f') {
			cVar7 = monster[lVar5]._mAnimLen;
			monster[lVar5].Action = '\0';
			leader = ENG_random__Fl((int)cVar7 + -1);
			uVar3 = monster[lVar5]._mFlags;
			monster[lVar5]._mAnimFrame = (char)leader + '\x01';
			monster[lVar5]._mmode = '\0';
			monster[lVar5]._mFlags = uVar3 & 0xfffb;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceUniques__Fv()
 // line 1279, offset 0x80161bcc
	/* begin block 1 */
		// Start line: 1280
		// Start offset: 0x80161BCC
		// Variables:
	// 		int u; // $s1
	// 		int mt; // $a1
	// 		unsigned char done; // $s0

		/* begin block 1.1 */
			// Start line: 1280
			// Start offset: 0x80161BCC

			/* begin block 1.1.1 */
				// Start line: 1286
				// Start offset: 0x80161BE8

				/* begin block 1.1.1.1 */
					// Start line: 1293
					// Start offset: 0x80161C00

					/* begin block 1.1.1.1.1 */
						// Start line: 1293
						// Start offset: 0x80161C20
						// Variables:
					// 		int monsttype; // stack offset -32
					/* end block 1.1.1.1.1 */
					// End offset: 0x80161D34
					// End Line: 1321
				/* end block 1.1.1.1 */
				// End offset: 0x80161D34
				// End Line: 1321
			/* end block 1.1.1 */
			// End offset: 0x80161D34
			// End Line: 1321
		/* end block 1.1 */
		// End offset: 0x80161D40
		// End Line: 1324
	/* end block 1 */
	// End offset: 0x80161D40
	// End Line: 1324

	/* begin block 2 */
		// Start line: 2891
	/* end block 2 */
	// End Line: 2892

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlaceUniques__Fv(void)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int uniqindex;
	int iVar4;
	uint local_20 [4];
	
	uniqindex = 0;
	iVar4 = 0;
	do {
		local_20[0] = SEXT14((&UniqMonst.mtype)[iVar4]);
		if (local_20[0] == 0xffffffff) {
			return;
		}
		bVar1 = false;
		if ((&UniqMonst.mlevel)[iVar4] == currlevel) {
			SwapMonsterType__FPi((int *)local_20);
			iVar3 = 0;
			if (0 < nummtypes) {
				iVar2 = 0;
				do {
					iVar3 = iVar3 + 1;
					bVar1 = (uint)(&Monsters[0].mtype)[iVar2] == local_20[0];
					iVar2 = iVar2 + 0x1c;
					if (nummtypes <= iVar3) break;
				} while (!bVar1);
			}
			if ((uniqindex == 0) && (quests[2]._qactive == '\0')) {
				bVar1 = false;
			}
			if ((uniqindex == 2) && (quests[3]._qactive == '\0')) {
				bVar1 = false;
			}
			if ((uniqindex == 3) && (quests[7]._qactive == '\0')) {
				bVar1 = false;
			}
			if ((uniqindex == 7) && (quests[4]._qactive == '\0')) {
				bVar1 = false;
			}
			if ((uniqindex == 8) && (quests[11]._qactive == '\0')) {
				bVar1 = false;
			}
			if (bVar1) {
				PlaceUniqueMonst__Fiii(uniqindex,iVar3 + -1,8);
			}
		}
		iVar4 = iVar4 + 0x18;
		uniqindex = uniqindex + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ PreSpawnSkeleton__Fv()
 // line 1328, offset 0x80161d5c
	/* begin block 1 */
		// Start line: 1329
		// Start offset: 0x80161D5C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int skeltypes; // $s2
	// 		int skel; // $s0
	/* end block 1 */
	// End offset: 0x80161E74
	// End Line: 1354

	/* begin block 2 */
		// Start line: 3008
	/* end block 2 */
	// End Line: 3009

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PreSpawnSkeleton__Fv(void)

{
	uchar uVar1;
	long lVar2;
	int i;
	int iVar3;
	int v;
	
	v = 0;
	i = 0;
	if (0 < nummtypes) {
		iVar3 = 0;
		do {
			uVar1 = IsSkel__Fi((uint)(&Monsters[0].mtype)[iVar3]);
			if (uVar1 != '\0') {
				v = v + 1;
			}
			i = i + 1;
			iVar3 = iVar3 + 0x1c;
		} while (i < nummtypes);
	}
	i = -1;
	if (v != 0) {
		lVar2 = ENG_random__Fl(v);
		v = 0;
		i = 0;
		if (0 < nummtypes) {
			iVar3 = 0;
			do {
				if (lVar2 < v) break;
				uVar1 = IsSkel__Fi((uint)(&Monsters[0].mtype)[iVar3]);
				if (uVar1 != '\0') {
					v = v + 1;
				}
				i = i + 1;
				iVar3 = iVar3 + 0x1c;
			} while (i < nummtypes);
		}
		i = AddMonster__FiiiiUc(0,0,0,i + -1,0);
		if (i != -1) {
			M_StartStand__Fii(i,0);
		}
	}
	return i;
}



// decompiled code
// original method signature: 
// void /*$ra*/ decode_enemy__Fii(int m /*$a0*/, int enemy /*$a1*/)
 // line 1359, offset 0x80161e94
	/* begin block 1 */
		// Start line: 1360
		// Start offset: 0x80161E94
	/* end block 1 */
	// End offset: 0x80161FA8
	// End Line: 1372

	/* begin block 2 */
		// Start line: 3079
	/* end block 2 */
	// End Line: 3080

/* WARNING: Unknown calling convention yet parameter storage is locked */

void decode_enemy__Fii(int m,int enemy)

{
	ushort uVar1;
	uchar uVar2;
	
	if (enemy < 2) {
		uVar1 = monster[m]._mFlags;
		monster[m]._menemy = (uchar)enemy;
		monster[m]._mFlags = uVar1 & 0xffef;
		monster[m]._menemyx = (uchar)plr[enemy]._px;
		uVar2 = (uchar)plr[enemy]._py;
	}
	else {
		uVar1 = monster[m]._mFlags;
		enemy = enemy + -2;
		monster[m]._menemy = (uchar)enemy;
		monster[m]._mFlags = uVar1 | 0x10;
		monster[m]._menemyx = monster[enemy]._mfutx;
		uVar2 = monster[enemy]._mfuty;
	}
	monster[m]._menemyy = uVar2;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsGoat__Fi(int mt /*$a0*/)
 // line 1375, offset 0x80161fb0
	/* begin block 1 */
		// Start line: 1376
		// Start offset: 0x80161FB0
	/* end block 1 */
	// End offset: 0x80161FD4
	// End Line: 1378

	/* begin block 2 */
		// Start line: 3115
	/* end block 2 */
	// End Line: 3116

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar IsGoat__Fi(int mt)

{
	uchar uVar1;
	
	uVar1 = '\0';
	if ((mt - 0x22U < 4) || (mt - 0x2aU < 4)) {
		uVar1 = '\x01';
	}
	return uVar1;
}





