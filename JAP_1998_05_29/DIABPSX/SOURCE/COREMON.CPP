#include "THISDUST.H"
#include "COREMON.H"


// decompiled code
// original method signature: 
// void /*$ra*/ M_CheckEFlag__Fi(int i /*$a0*/)
 // line 110, offset 0x8007f354
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x8007F354
	/* end block 1 */
	// End offset: 0x8007F354
	// End Line: 111

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

void M_CheckEFlag__Fi(int i)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_ClearSquares__Fi(int i /*$a0*/)
 // line 139, offset 0x8007f35c
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x8007F35C
		// Variables:
	// 		int mx; // $a3
	// 		int my; // $t2
	// 		int mt; // $t3
	// 		int mt2; // $a0

		/* begin block 1.1 */
			// Start line: 142
			// Start offset: 0x8007F35C
			// Variables:
		// 		int y; // $a2

			/* begin block 1.1.1 */
				// Start line: 149
				// Start offset: 0x8007F39C

				/* begin block 1.1.1.1 */
					// Start line: 151
					// Start offset: 0x8007F3A8
					// Variables:
				// 		int x; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x8007F41C
				// End Line: 160
			/* end block 1.1.1 */
			// End offset: 0x8007F41C
			// End Line: 160
		/* end block 1.1 */
		// End offset: 0x8007F424
		// End Line: 161
	/* end block 1 */
	// End offset: 0x8007F494
	// End Line: 164

	/* begin block 2 */
		// Start line: 282
	/* end block 2 */
	// End Line: 283

void M_ClearSquares__Fi(int i)

{
	uint uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = (int)monster[i]._moldy;
	iVar5 = (int)monster[i]._moldx;
	iVar4 = iVar6 + -1;
	while (iVar3 = iVar5 + -1, iVar4 <= iVar6 + 1) {
		if (iVar3 <= iVar5 + 1) {
			iVar2 = iVar3 * 0x380 + iVar4 * 8;
			do {
				if (((iVar3 < 0x60) && (iVar4 < 0x60)) &&
					 ((uVar1 = SEXT24(*(short *)((int)&dung_map[0].dMonster + iVar2)), uVar1 == ~i ||
						(uVar1 == i + 1U)))) {
					*(undefined2 *)((int)&dung_map[0].dMonster + iVar2) = 0;
				}
				iVar3 = iVar3 + 1;
				iVar2 = iVar2 + 0x380;
			} while (iVar3 <= iVar5 + 1);
		}
		iVar4 = iVar4 + 1;
	}
	dung_map[(iVar5 + 1) * 0x70 + iVar6].dFlags = dung_map[(iVar5 + 1) * 0x70 + iVar6].dFlags & 0xef;
	dung_map[iVar5 * 0x70 + iVar6 + 1].dFlags = dung_map[iVar5 * 0x70 + iVar6 + 1].dFlags & 0xef;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsSkel__Fi(int mt /*$a0*/)
 // line 168, offset 0x8007f49c
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x8007F49C
	/* end block 1 */
	// End offset: 0x8007F4F4
	// End Line: 174

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

uchar IsSkel__Fi(int mt)

{
	uchar uVar1;
	
	if (((currlevel != '\x10') || (uVar1 = '\x01', 3 < mt - 0x70U)) &&
		 ((mt - 8U < 4 || ((mt - 0x14U < 4 || (uVar1 = '\0', mt - 0x18U < 4)))))) {
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewMonsterAnim__FiR10AnimStructii(int i /*$a0*/, struct AnimStruct *anim /*$a1*/, int md /*$a2*/, int AnimType /*$a3*/)
 // line 178, offset 0x8007f4fc
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x8007F4FC
		// Variables:
	// 		struct MonsterStruct *Monst; // $v0
	/* end block 1 */
	// End offset: 0x8007F548
	// End Line: 191

	/* begin block 2 */
		// Start line: 366
	/* end block 2 */
	// End Line: 367

void NewMonsterAnim__FiR10AnimStructii(int i,AnimStruct *anim,int md,int AnimType)

{
	char cVar1;
	ushort uVar2;
	
	cVar1 = anim->Frames;
	monster[i]._mAnimFrame = '\x01';
	uVar2 = monster[i]._mFlags;
	monster[i]._mAnimCnt = '\0';
	monster[i]._mAnimLen = cVar1;
	cVar1 = anim->Rate;
	monster[i]._mdir = (char)md;
	monster[i]._mFlags = uVar2 & 0xfff9;
	monster[i].Action = (char)AnimType;
	monster[i]._mAnimDelay = cVar1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_Talker__Fi(int i /*$a0*/)
 // line 209, offset 0x8007f550
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x8007F550
		// Variables:
	// 		unsigned char _mAi; // $a0
	/* end block 1 */
	// End offset: 0x8007F5B0
	// End Line: 222

	/* begin block 2 */
		// Start line: 435
	/* end block 2 */
	// End Line: 436

uchar M_Talker__Fi(int i)

{
	byte bVar1;
	uchar uVar2;
	
	bVar1 = monster[i]._mAi;
	if ((((bVar1 == 0x1c) || (bVar1 == 0x1f)) || (bVar1 == 0x12)) ||
		 ((uVar2 = '\x01', 1 < (uint)bVar1 - 0x16 && (uVar2 = '\0', (uint)bVar1 - 0x1d < 2)))) {
		uVar2 = '\x01';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_Enemy__Fi(int i /*$a0*/)
 // line 225, offset 0x8007f5b8
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8007F5B8
		// Variables:
	// 		struct MonsterStruct *Monst; // $s2
	// 		int closest; // $a1
	// 		int _mx; // $s3
	// 		int _my; // $s4
	// 		int _menemy; // $s0
	// 		struct PlayerStruct *plr1; // $s5
	// 		struct PlayerStruct *plr2; // $s7

		/* begin block 1.1 */
			// Start line: 226
			// Start offset: 0x8007F5B8

			/* begin block 1.1.1 */
				// Start line: 236
				// Start offset: 0x8007F628

				/* begin block 1.1.1.1 */
					// Start line: 237
					// Start offset: 0x8007F628

					/* begin block 1.1.1.1.1 */
						// Start line: 238
						// Start offset: 0x8007F63C
						// Variables:
					// 		struct PlayerStruct *enemy; // $v0
					// 		int y; // $s1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 239
							// Start offset: 0x8007F63C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 243
								// Start offset: 0x8007F6A4
								// Variables:
							// 		int x1; // $s1
							// 		int y1; // $s3
							// 		int x2; // $s0
							// 		int y2; // $v1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007F704
							// End Line: 250
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007F70C
						// End Line: 256
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007F70C
					// End Line: 256
				/* end block 1.1.1.1 */
				// End offset: 0x8007F70C
				// End Line: 260
			/* end block 1.1.1 */
			// End offset: 0x8007F70C
			// End Line: 260
		/* end block 1.1 */
		// End offset: 0x8007F72C
		// End Line: 265
	/* end block 1 */
	// End offset: 0x8007F7A0
	// End Line: 276

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

void M_Enemy__Fi(int i)

{
	short sVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = (int)monster[i]._mx;
	iVar7 = (int)monster[i]._my;
	uVar5 = (uint)monster[i]._menemy;
	if (plr[0].plractive == '\0') {
		uVar5 = 0xffffffff;
		if (plr[1].plractive != '\0') {
			uVar5 = 1;
		}
	}
	else {
		bVar2 = false;
		if (plr[1].plractive == '\0') {
			uVar5 = 0;
		}
		else {
			sVar1 = plr[uVar5]._py;
			iVar3 = abs((int)plr[uVar5]._px - iVar6);
			if ((1 < iVar3) || (iVar3 = abs((int)sVar1 - iVar7), 1 < iVar3)) {
				bVar2 = true;
			}
			if (bVar2) {
				iVar3 = abs((int)plr[0]._px - iVar6);
				iVar4 = abs((int)plr[0]._py - iVar7);
				iVar6 = abs((int)plr[1]._px - iVar6);
				iVar7 = abs((int)plr[1]._py - iVar7);
				if (iVar3 < iVar4) {
					iVar3 = iVar4;
				}
				uVar5 = (uint)(iVar6 < iVar3);
				if (iVar6 < iVar7) {
					uVar5 = (uint)(iVar7 < iVar3);
				}
			}
		}
	}
	if (uVar5 == 0xffffffff) {
		monster[i]._mFlags = monster[i]._mFlags | 0x400;
	}
	else {
		monster[i]._menemy = (uchar)uVar5;
		monster[i]._menemyx = (uchar)plr[uVar5]._px;
		sVar1 = plr[uVar5]._py;
		monster[i]._mFlags = monster[i]._mFlags & 0xfbff;
		monster[i]._menemyy = (uchar)sVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearMVars__Fi(int i /*$a0*/)
 // line 370, offset 0x8007f7d0
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x8007F7D0
	/* end block 1 */
	// End offset: 0x8007F844
	// End Line: 380

	/* begin block 2 */
		// Start line: 775
	/* end block 2 */
	// End Line: 776

void ClearMVars__Fi(int i)

{
	monster[i]._mVar1 = 0;
	monster[i]._mVar2 = 0;
	monster[i]._mVar3 = 0;
	monster[i]._mVar4 = 0;
	monster[i]._mVar5 = 0;
	monster[i]._mVar6 = 0;
	monster[i]._mVar7 = 0;
	monster[i]._mVar8 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMonster__Fiiiii(int i /*$s2*/, int rd /*$a1*/, int mtype /*$a2*/, int x /*$a3*/, int y /*stack 16*/)
 // line 383, offset 0x8007f84c
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x8007F84C
		// Variables:
	// 		struct CMonster *monst; // $s1
	// 		struct MonsterStruct *pmonster; // $s0

		/* begin block 1.1 */
			// Start line: 425
			// Start offset: 0x8007F9A8

			/* begin block 1.1.1 */
				// Start line: 447
				// Start offset: 0x8007FA30
				// Variables:
			// 		int slvl; // $a2
			/* end block 1.1.1 */
			// End offset: 0x8007FA7C
			// End Line: 450
		/* end block 1.1 */
		// End offset: 0x8007FBA0
		// End Line: 464
	/* end block 1 */
	// End offset: 0x8007FDB4
	// End Line: 509

	/* begin block 2 */
		// Start line: 799
	/* end block 2 */
	// End Line: 800

void InitMonster__Fiiiii(int i,int rd,int mtype,int x,int y)

{
	uchar uVar1;
	uchar uVar2;
	ushort uVar3;
	char cVar4;
	int iVar5;
	int iVar6;
	MonsterData *pMVar7;
	long lVar8;
	char cVar9;
	CMonster *pCVar10;
	
	iVar5 = mtype * 0x1c;
	pCVar10 = (CMonster *)(&monster[0xc5]._mVar5 + mtype * 0xe);
	monster[i]._mdir = (char)rd;
	cVar9 = (char)x;
	monster[i]._mx = cVar9;
	monster[i]._mfutx = cVar9;
	monster[i]._moldx = cVar9;
	monster[i]._mMTidx = (char)mtype;
	monster[i]._mmode = '\0';
	cVar9 = (char)y;
	monster[i]._my = cVar9;
	monster[i]._mfuty = cVar9;
	monster[i]._moldy = cVar9;
	iVar6 = pCVar10->MData->mName;
	monster[i].MType = pCVar10;
	monster[i].mName = iVar6;
	pMVar7 = pCVar10->MData;
	monster[i].Action = '\0';
	monster[i].MData = pMVar7;
	cVar9 = *(char *)((int)&monster[0xc5]._mVar7 + iVar5 + 1);
	monster[i]._mAnimDelay = cVar9;
	lVar8 = ENG_random__Fl((int)cVar9 + -1);
	monster[i]._mAnimCnt = (char)lVar8;
	cVar9 = *(char *)(&monster[0xc5]._mVar7 + mtype * 0xe);
	monster[i]._mAnimLen = cVar9;
	lVar8 = ENG_random__Fl((int)cVar9 + -1);
	monster[i]._mAnimFrame = (char)lVar8 + '\x01';
	if ((&monster[0xc5]._mMTidx)[iVar5] == 'n') {
		lVar8 = ENG_random__Fl(1);
		iVar5 = lVar8 + 0x682;
	}
	else {
		lVar8 = ENG_random__Fl(((uint)(byte)(&monster[0xc5]._my)[iVar5] -
													 (uint)(byte)(&monster[0xc5]._mx)[iVar5]) + 1);
		iVar5 = lVar8 + (uint)(byte)(&monster[0xc5]._mx)[iVar5];
	}
	monster[i]._mmaxhp = iVar5 << 6;
	if ((gbMaxPlayers == '\x01') &&
		 (iVar5 = monster[i]._mmaxhp >> 1, monster[i]._mmaxhp = iVar5, iVar5 < 0x40)) {
		monster[i]._mmaxhp = 0x40;
	}
	monster[i]._mhitpoints = monster[i]._mmaxhp;
	monster[i]._mAi = pCVar10->MData->mAi;
	uVar1 = pCVar10->MData->mInt;
	monster[i]._mgoal = '\x01';
	monster[i]._mgoalvar1 = 0;
	monster[i]._mgoalvar2 = 0;
	monster[i]._mgoalvar3 = 0;
	monster[i]._mDelFlag = '\0';
	monster[i]._uniqtype = '\0';
	monster[i]._msquelch = '\0';
	monster[i].mWhoHit = '\0';
	monster[i]._mint = uVar1;
	monster[i].mLevel = pCVar10->MData->mLevel;
	monster[i].mExp = pCVar10->MData->mExp;
	if (i < 2) {
		iVar5 = (int)plr[i]._pSplLvl[0x15] + (int)plr[i]._pISplLvlAdd;
		if (iVar5 < 0) {
			iVar5 = 0;
		}
		monster[i].mHit = pCVar10->MData->mHit;
		monster[i].mMinDamage = pCVar10->MData->mMinDamage;
		monster[i].mMaxDamage = pCVar10->MData->mMaxDamage;
		iVar6 = plr[i]._pMaxMana;
		monster[i].mArmorClass = '\x19';
		cVar4 = (char)iVar5 * '\x02';
		monster[i]._mmaxhp = (iVar6 / 3) * 2 + iVar5 * 0x280;
		cVar9 = plr[i]._pLevel;
		monster[i].mMaxDamage = cVar4 + '\x10';
		monster[i].mMinDamage = cVar4 + '\b';
		monster[i].mHit = cVar9 * '\x02' + '(' + (char)iVar5 * '\x05';
	}
	else {
		monster[i].mHit = pCVar10->MData->mHit;
		monster[i].mMinDamage = pCVar10->MData->mMinDamage;
		monster[i].mMaxDamage = pCVar10->MData->mMaxDamage;
	}
	monster[i].mHit2 = pCVar10->MData->mHit2;
	monster[i].mMinDamage2 = pCVar10->MData->mMinDamage2;
	monster[i].mMaxDamage2 = pCVar10->MData->mMaxDamage2;
	monster[i].mArmorClass = pCVar10->MData->mArmorClass;
	uVar3 = pCVar10->MData->mMagicRes;
	monster[i].leader = '\0';
	monster[i].leaderflag = '\0';
	monster[i].mMagicRes = uVar3;
	uVar1 = monster[i]._mAi;
	uVar3 = pCVar10->MData->mFlags;
	monster[i].mtalkmsg = 0;
	monster[i]._mFlags = uVar3;
	if (uVar1 == '\f') {
		monster[i].Action = '\x05';
		monster[i]._mAnimFrame = '\x01';
		uVar3 = monster[i]._mFlags;
		monster[i]._mmode = '\a';
		monster[i]._mFlags = uVar3 | 4;
	}
	if (gnDifficulty == 1) {
		iVar5 = monster[i]._mmaxhp * 3 + 100;
		monster[i]._mmaxhp = iVar5;
		monster[i]._mhitpoints = iVar5;
		uVar3 = monster[i].mExp;
		monster[i].mLevel = monster[i].mLevel + '\x0f';
		uVar1 = monster[i].mHit;
		monster[i].mExp = uVar3 * 2 + 2000;
		uVar2 = monster[i].mMinDamage;
		monster[i].mHit = uVar1 + 'U';
		uVar1 = monster[i].mMaxDamage;
		monster[i].mMinDamage = uVar2 * '\x02' + '\x04';
		uVar2 = monster[i].mMinDamage2;
		monster[i].mMaxDamage = uVar1 * '\x02' + '\x04';
		uVar1 = monster[i].mHit2;
		monster[i].mMinDamage2 = uVar2 * '\x02' + '\x04';
		cVar9 = monster[i].mArmorClass;
		monster[i].mHit2 = uVar1 + 'U';
		uVar1 = monster[i].mMaxDamage2;
		monster[i].mArmorClass = cVar9 + '2';
		monster[i].mMaxDamage2 = uVar1 * '\x02' + '\x04';
	}
	if (gnDifficulty == 2) {
		uVar3 = monster[i].mExp;
		iVar5 = monster[i]._mmaxhp * 4 + 200;
		monster[i]._mmaxhp = iVar5;
		monster[i]._mhitpoints = iVar5;
		cVar9 = monster[i].mLevel;
		monster[i].mExp = uVar3 * 4 + 4000;
		uVar1 = monster[i].mMinDamage;
		monster[i].mLevel = cVar9 + '\x1e';
		uVar2 = monster[i].mHit;
		monster[i].mMinDamage = uVar1 * '\x04' + '\x06';
		uVar1 = monster[i].mMinDamage2;
		monster[i].mHit = uVar2 + 'x';
		uVar2 = monster[i].mMaxDamage;
		monster[i].mMinDamage2 = uVar1 * '\x04' + '\x06';
		monster[i].mMaxDamage = uVar2 * '\x04' + '\x06';
		cVar9 = monster[i].mArmorClass;
		monster[i].mHit2 = monster[i].mHit2 + 'x';
		uVar1 = monster[i].mMaxDamage2;
		monster[i].mArmorClass = cVar9 + 'P';
		monster[i].mMaxDamage2 = uVar1 * '\x04' + '\x06';
		monster[i].mMagicRes = pCVar10->MData->mMagicRes2;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMonster__FiiiiUc(int x /*$t0*/, int y /*$a1*/, int dir /*$a2*/, int mtype /*$a3*/, int InMap /*stack 16*/)
 // line 513, offset 0x8007fdd0
	/* begin block 1 */
		// Start line: 514
		// Start offset: 0x8007FDD0
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8007FE5C
	// End Line: 522

	/* begin block 2 */
		// Start line: 1156
	/* end block 2 */
	// End Line: 1157

int AddMonster__FiiiiUc(int x,int y,int dir,int mtype,int InMap)

{
	short sVar1;
	int iVar2;
	int i;
	
	if (nummonsters < 0xbe) {
		iVar2 = nummonsters + 1;
		sVar1 = *(short *)((int)&monster[0xbe].mtalkmsg + nummonsters * 2);
		i = (int)sVar1;
		nummonsters = iVar2;
		if ((char)InMap != '\0') {
			nummonsters = iVar2;
			dung_map[x * 0x70 + y].dMonster = sVar1 + 1;
		}
		InitMonster__Fiiiii(i,dir,mtype,x,y);
	}
	else {
		i = -1;
	}
	return i;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartStand__Fii(int i /*$s0*/, int md /*$s1*/)
 // line 526, offset 0x8007fe70
	/* begin block 1 */
		// Start line: 527
		// Start offset: 0x8007FE70
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $a1
	// 		int _my; // $v1
	/* end block 1 */
	// End offset: 0x8007FFBC
	// End Line: 556

	/* begin block 2 */
		// Start line: 1185
	/* end block 2 */
	// End Line: 1186

void M_StartStand__Fii(int i,int md)

{
	bool bVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	CMonster *pCVar5;
	AnimStruct *anim;
	
	ClearMVars__Fi(i);
	pCVar5 = monster[i].MType;
	bVar1 = pCVar5->mtype != 'm';
	if (bVar1) {
		anim = pCVar5->Anims;
	}
	else {
		anim = pCVar5->Anims + 1;
	}
	NewMonsterAnim__FiR10AnimStructii(i,anim,md,(uint)!bVar1);
	cVar4 = monster[i]._mmode;
	cVar2 = monster[i]._mx;
	cVar3 = monster[i]._my;
	monster[i]._mVar2 = 0;
	monster[i]._mmode = '\0';
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mdir = (char)md;
	monster[i]._mVar1 = (short)cVar4;
	monster[i]._mfutx = cVar2;
	monster[i]._mfuty = cVar3;
	monster[i]._moldx = cVar2;
	monster[i]._moldy = cVar3;
	if ((monster[0].MType)->mtype != 'm') {
		M_Enemy__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_UpdateLeader__Fi(int i /*$a0*/)
 // line 559, offset 0x8007ffd4
	/* begin block 1 */
		// Start line: 560
		// Start offset: 0x8007FFD4
		// Variables:
	// 		int x; // $a1
	// 		int tmp; // $v0
	/* end block 1 */
	// End offset: 0x800800D8
	// End Line: 579

	/* begin block 2 */
		// Start line: 1264
	/* end block 2 */
	// End Line: 1265

void M_UpdateLeader__Fi(int i)

{
	int iVar1;
	int iVar2;
	MonsterStruct *pMVar3;
	
	iVar2 = 0;
	if (0 < nummonsters) {
		pMVar3 = monster + 0xbe;
		do {
			iVar1 = (int)*(short *)&pMVar3->mtalkmsg;
			if ((monster[iVar1].leaderflag == '\x01') && ((uint)monster[iVar1].leader == i)) {
				monster[iVar1].leaderflag = '\0';
			}
			iVar2 = iVar2 + 1;
			pMVar3 = (MonsterStruct *)((int)&pMVar3->mtalkmsg + 2);
		} while (iVar2 < nummonsters);
	}
	if (monster[i].leaderflag == '\x01') {
		monster[(uint)monster[i].leader].packsize = monster[(uint)monster[i].leader].packsize + -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActivateSpawn__Fiiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/, int dir /*$a3*/)
 // line 582, offset 0x800800e4
	/* begin block 1 */
		// Start line: 583
		// Start offset: 0x800800E4
	/* end block 1 */
	// End offset: 0x80080174
	// End Line: 591

	/* begin block 2 */
		// Start line: 1310
	/* end block 2 */
	// End Line: 1311

void ActivateSpawn__Fiiii(int i,int x,int y,int dir)

{
	char cVar1;
	
	dung_map[x * 0x70 + y].dMonster = (short)i + 1;
	cVar1 = (char)x;
	monster[i]._mx = cVar1;
	monster[i]._mfutx = cVar1;
	monster[i]._moldx = cVar1;
	cVar1 = (char)y;
	monster[i]._my = cVar1;
	monster[i]._mfuty = cVar1;
	monster[i]._moldy = cVar1;
	M_StartSpStand__Fii(i,dir);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SpawnSkeleton__Fiii(int ii /*stack -64*/, int x /*$s7*/, int y /*$fp*/)
 // line 594, offset 0x80080184
	/* begin block 1 */
		// Start line: 595
		// Start offset: 0x80080184
		// Variables:
	// 		int monstok[3][3]; // stack offset -104
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int xx; // $s0
	// 		int yy; // $s2
	// 		int rs; // $a0
	// 		unsigned char savail; // $s4
	/* end block 1 */
	// End offset: 0x80080340
	// End Line: 641

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

uchar SpawnSkeleton__Fiii(int ii,int x,int y)

{
	uchar uVar1;
	byte bVar2;
	int x_00;
	long lVar3;
	int iVar4;
	undefined *puVar5;
	int x1;
	int y_00;
	uint uVar6;
	undefined local_68 [40];
	int local_40;
	undefined *local_38;
	
	if (ii == -1) {
LAB_8008028c:
		uVar1 = '\0';
	}
	else {
		local_40 = ii;
		uVar1 = PosOkMonst__Fiii(-1,x,y);
		if (uVar1 == '\0') {
			uVar6 = 0;
			x1 = 0;
			y_00 = y + -1;
			local_38 = local_68;
			do {
				x_00 = x + -1;
				if (x_00 <= x + 1) {
					puVar5 = local_38;
					do {
						bVar2 = PosOkMonst__Fiii(-1,x_00,y_00);
						*(uint *)(puVar5 + x1 * 4) = (uint)bVar2;
						uVar6 = uVar6 | (uint)bVar2;
						x_00 = x_00 + 1;
						puVar5 = puVar5 + 0xc;
					} while (x_00 <= x + 1);
				}
				y_00 = y_00 + 1;
				x1 = x1 + 1;
			} while (y_00 <= y + 1);
			if (uVar6 == 0) goto LAB_8008028c;
			lVar3 = ENG_random__Fl(0xf);
			x1 = lVar3 + 1;
			y_00 = 0;
			x_00 = 0;
			if (0 < x1) {
				iVar4 = 0;
				puVar5 = local_68;
				do {
					if (*(int *)(puVar5 + iVar4) != 0) {
						x1 = x1 + -1;
					}
					if (x1 < 1) break;
					y_00 = y_00 + 1;
					puVar5 = puVar5 + 0xc;
					if (y_00 == 3) {
						x_00 = x_00 + 1;
						y_00 = 0;
						puVar5 = local_68;
						if (x_00 == 3) {
							x_00 = 0;
							puVar5 = local_68;
						}
					}
					iVar4 = x_00 << 2;
				} while (0 < x1);
			}
			x1 = y_00 + x + -1;
			y_00 = x_00 + y + -1;
			x_00 = GetDirection__Fiiii(x1,y_00,x,y);
		}
		else {
			x_00 = GetDirection__Fiiii(x,y,x,y);
			x1 = x;
			y_00 = y;
		}
		ActivateSpawn__Fiiii(local_40,x1,y_00,x_00);
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartSpStand__Fii(int i /*$s1*/, int md /*$s2*/)
 // line 644, offset 0x80080374
	/* begin block 1 */
		// Start line: 645
		// Start offset: 0x80080374
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x80080440
	// End Line: 662

	/* begin block 2 */
		// Start line: 1443
	/* end block 2 */
	// End Line: 1444

void M_StartSpStand__Fii(int i,int md)

{
	char cVar1;
	char cVar2;
	
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,md,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mmode = '\v';
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mdir = (char)md;
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	M_CheckEFlag__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkMonst__Fiii(int i /*$s4*/, int x /*$s0*/, int y /*$s1*/)
 // line 665, offset 0x8008045c
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x8008045C
		// Variables:
	// 		unsigned char ret; // $s2
	// 		int oi; // $v1
	// 		int mi; // $a0
	// 		unsigned char fire; // $s3
	/* end block 1 */
	// End offset: 0x8008069C
	// End Line: 695

	/* begin block 2 */
		// Start line: 1492
	/* end block 2 */
	// End Line: 1493

uchar PosOkMonst__Fiii(int i,int x,int y)

{
	bool bVar1;
	uchar uVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	short *psVar6;
	bool bVar7;
	
	bVar1 = false;
	bVar7 = false;
	uVar2 = SolidLoc__Fii(x,y);
	if ((uVar2 == '\0') && (uVar2 = IsDplayer__Fii(x,y), uVar2 == '\0')) {
		bVar7 = dung_map[x * 0x70 + y].dMonster == 0;
	}
	if (bVar7) {
		uVar3 = SEXT14(dung_map[x * 0x70 + y].dObject);
		if (uVar3 != 0) {
			uVar5 = uVar3 - 1;
			if ((int)uVar3 < 1) {
				uVar5 = ~uVar3;
			}
			if (object[uVar5]._oSolidFlag != '\0') {
				bVar7 = false;
			}
		}
		if (((bVar7 != false) && (iVar4 = (int)dung_map[x * 0x70 + y].dMissile, iVar4 != 0)) && (-1 < i)
			 ) {
			if (0 < iVar4) {
				if (missile[iVar4]._mitype == '\x05') {
					bVar1 = true;
				}
				else {
					iVar4 = 0;
					if (0 < nummissiles) {
						psVar6 = &missileactive;
						do {
							if (missile[(int)*psVar6]._mitype == '\x05') {
								bVar1 = true;
							}
							iVar4 = iVar4 + 1;
							psVar6 = psVar6 + 1;
						} while (iVar4 < nummissiles);
					}
				}
			}
			if ((bVar1) && (((monster[i].mMagicRes & 0x10) == 0 || ((monster[i].MType)->mtype == 'n')))) {
				bVar7 = false;
			}
		}
	}
	return (uchar)bVar7;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CanPut__Fii(int i /*$s1*/, int j /*$s2*/)
 // line 699, offset 0x800806c0
	/* begin block 1 */
		// Start line: 700
		// Start offset: 0x800806C0
		// Variables:
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80080958
	// End Line: 732

	/* begin block 2 */
		// Start line: 1570
	/* end block 2 */
	// End Line: 1571

uchar CanPut__Fii(int i,int j)

{
	uchar uVar1;
	void *pvVar2;
	uint uVar3;
	uint uVar4;
	
	uVar1 = '\0';
	if (dung_map[i * 0x70 + j].dItem == '\0') {
		pvVar2 = GetSOLID__Fii(i,j);
		uVar1 = '\0';
		if (pvVar2 == (void *)0x0) {
			uVar3 = SEXT14(dung_map[i * 0x70 + j].dObject);
			if (uVar3 != 0) {
				uVar4 = uVar3 - 1;
				if ((int)uVar3 < 1) {
					uVar4 = ~uVar3;
				}
				if (object[uVar4]._oSolidFlag != '\0') {
					return '\0';
				}
			}
			if ((((int)dung_map[(i + 1) * 0x70 + j + 1].dObject < 1) ||
					(uVar1 = '\0',
					object[(int)dung_map[(i + 1) * 0x70 + j + 1].dObject + -1]._oSelFlag == '\0')) &&
				 ((-1 < (int)dung_map[(i + 1) * 0x70 + j + 1].dObject ||
					(uVar1 = '\0', object[~(int)dung_map[(i + 1) * 0x70 + j + 1].dObject]._oSelFlag == '\0')))
				 ) {
				if (0 < (int)dung_map[(i + 1) * 0x70 + j].dObject) {
					if (((0 < (int)dung_map[i * 0x70 + j + 1].dObject) &&
							(object[(int)dung_map[(i + 1) * 0x70 + j].dObject + -1]._oSelFlag != '\0')) &&
						 (object[(int)dung_map[i * 0x70 + j + 1].dObject + -1]._oSelFlag != '\0')) {
						return '\0';
					}
				}
				uVar1 = '\x01';
				if (((currlevel == '\0') && (uVar1 = '\0', dung_map[i * 0x70 + j].dMonster == 0)) &&
					 (uVar1 = '\0', dung_map[(i + 1) * 0x70 + j + 1].dMonster == 0)) {
					uVar1 = '\x01';
				}
			}
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ encode_enemy__Fi(int m /*$a0*/)
 // line 739, offset 0x80080974
	/* begin block 1 */
		// Start line: 740
		// Start offset: 0x80080974
	/* end block 1 */
	// End offset: 0x800809CC
	// End Line: 745

	/* begin block 2 */
		// Start line: 1657
	/* end block 2 */
	// End Line: 1658

int encode_enemy__Fi(int m)

{
	uint uVar1;
	
	if ((monster[m]._mFlags & 0x10) == 0) {
		uVar1 = (uint)monster[m]._menemy;
	}
	else {
		uVar1 = (uint)monster[m]._menemy + 2;
	}
	return uVar1;
}





