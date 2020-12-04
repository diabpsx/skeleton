#include "THISDUST.H"
#include "COREMON.H"


// decompiled code
// original method signature: 
// void /*$ra*/ M_CheckEFlag__Fi(int i /*$a0*/)
 // line 110, offset 0x8007818c
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x8007818C
	/* end block 1 */
	// End offset: 0x800781A4
	// End Line: 136

	/* begin block 2 */
		// Start line: 245
	/* end block 2 */
	// End Line: 246

void M_CheckEFlag__Fi(int i)

{
	monster[i]._meflag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_ClearSquares__Fi(int i /*$a0*/)
 // line 139, offset 0x800781ac
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x800781AC
		// Variables:
	// 		int mx; // $t0
	// 		int my; // $t2
	// 		int mt; // $t4
	// 		int mt2; // $t3

		/* begin block 1.1 */
			// Start line: 142
			// Start offset: 0x800781AC
			// Variables:
		// 		int y; // $a1

			/* begin block 1.1.1 */
				// Start line: 149
				// Start offset: 0x800781E8

				/* begin block 1.1.1.1 */
					// Start line: 151
					// Start offset: 0x800781F8
					// Variables:
				// 		int x; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80078274
				// End Line: 160
			/* end block 1.1.1 */
			// End offset: 0x80078274
			// End Line: 160
		/* end block 1.1 */
		// End offset: 0x80078280
		// End Line: 161
	/* end block 1 */
	// End offset: 0x80078310
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
	int iVar7;
	
	iVar7 = (int)monster[i]._moldy;
	iVar5 = (int)monster[i]._moldx;
	iVar4 = iVar7 + -1;
	iVar6 = iVar4 * 0xc;
	while (iVar2 = iVar5 + -1, iVar4 <= iVar7 + 1) {
		if (iVar2 <= iVar5 + 1) {
			iVar3 = iVar2 * 0x510 + iVar6;
			do {
				if (((iVar2 < 0x5c) && (iVar4 < 0x5c)) &&
					 ((uVar1 = SEXT24(*(short *)((int)&dung_map[0].dMonster + iVar3)), uVar1 == ~i ||
						(uVar1 == i + 1U)))) {
					*(undefined2 *)((int)&dung_map[0].dMonster + iVar3) = 0;
				}
				iVar2 = iVar2 + 1;
				iVar3 = iVar3 + 0x510;
			} while (iVar2 <= iVar5 + 1);
		}
		iVar6 = iVar6 + 0xc;
		iVar4 = iVar4 + 1;
	}
	dung_map[(iVar5 + 1) * 0x6c + iVar7].dFlags = dung_map[(iVar5 + 1) * 0x6c + iVar7].dFlags & 0xef;
	dung_map[iVar5 * 0x6c + iVar7 + 1].dFlags = dung_map[iVar5 * 0x6c + iVar7 + 1].dFlags & 0xef;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsSkel__Fi(int mt /*$a0*/)
 // line 168, offset 0x80078318
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x80078318
	/* end block 1 */
	// End offset: 0x8007834C
	// End Line: 172

	/* begin block 2 */
		// Start line: 343
	/* end block 2 */
	// End Line: 344

uchar IsSkel__Fi(int mt)

{
	uchar uVar1;
	
	uVar1 = '\0';
	if (((mt - 8U < 4) || (mt - 0x14U < 4)) || (mt - 0x18U < 4)) {
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewMonsterAnim__FiR10AnimStructii(int i /*$a0*/, struct AnimStruct *anim /*$a1*/, int md /*$a2*/, int AnimType /*$a3*/)
 // line 176, offset 0x80078354
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x80078354
		// Variables:
	// 		struct MonsterStruct *Monst; // $v0
	/* end block 1 */
	// End offset: 0x80078398
	// End Line: 189

	/* begin block 2 */
		// Start line: 359
	/* end block 2 */
	// End Line: 360

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
// unsigned char /*$ra*/ M_Ranged__Fi(int i /*$a0*/)
 // line 192, offset 0x800783a0
	/* begin block 1 */
		// Start line: 193
		// Start offset: 0x800783A0
	/* end block 1 */
	// End offset: 0x800783E0
	// End Line: 202

	/* begin block 2 */
		// Start line: 398
	/* end block 2 */
	// End Line: 399

uchar M_Ranged__Fi(int i)

{
	uchar uVar1;
	uchar uVar2;
	
	uVar1 = monster[i]._mAi;
	if ((((uVar1 == '\x03') || (uVar1 == '\a')) || (uVar1 == '\x0e')) ||
		 (uVar2 = '\0', uVar1 == '\x1d')) {
		uVar2 = '\x01';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_Talker__Fi(int i /*$a0*/)
 // line 205, offset 0x800783e8
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x800783E8
		// Variables:
	// 		unsigned char _mAi; // $a0
	/* end block 1 */
	// End offset: 0x80078440
	// End Line: 218

	/* begin block 2 */
		// Start line: 424
	/* end block 2 */
	// End Line: 425

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
// void /*$ra*/ M_Enemy__Fi(int i /*stack -96*/)
 // line 221, offset 0x80078448
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80078448
		// Variables:
	// 		int j; // stack offset -88
	// 		int mi; // $s3
	// 		int pnum; // $s5
	// 		int closest; // stack offset -80
	// 		int dist; // $v1
	// 		int bestdist; // stack offset -72
	// 		unsigned char sameroom; // $s4
	// 		unsigned char bestsameroom; // stack offset -64
	// 		struct MonsterStruct *Monst; // $s6
	// 		unsigned char enemyx; // stack offset -56
	// 		unsigned char enemyy; // stack offset -48
	// 		int _mxi; // $s7
	// 		int _myi; // $fp

		/* begin block 1.1 */
			// Start line: 265
			// Start offset: 0x800786BC

			/* begin block 1.1.1 */
				// Start line: 271
				// Start offset: 0x800786E4
				// Variables:
			// 		int _mx; // $s1
			// 		int _my; // $s5
			/* end block 1.1.1 */
			// End offset: 0x80078948
			// End Line: 292
		/* end block 1.1 */
		// End offset: 0x8007895C
		// End Line: 295
	/* end block 1 */
	// End offset: 0x800789A8
	// End Line: 306

	/* begin block 2 */
		// Start line: 455
	/* end block 2 */
	// End Line: 456

/* WARNING: Could not reconcile some variable overlaps */

void M_Enemy__Fi(int i)

{
	char cVar1;
	short sVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	ushort uVar6;
	int i_00;
	int iVar7;
	int iVar8;
	int iVar9;
	short *psVar10;
	int iVar11;
	short *psVar12;
	int iVar13;
	int __x;
	int local_58;
	int local_50;
	int local_48;
	uchar local_38;
	uchar local_30;
	
	local_50 = -1;
	local_30 = '\0';
	local_38 = '\0';
	local_48 = -1;
	bVar4 = false;
	if ((monster[i]._mFlags & 0x20) == 0) {
		iVar13 = 0;
		psVar10 = &plr[0]._py;
		psVar12 = &plr[0]._px;
		iVar11 = 0;
		__x = 0;
		do {
			if (((((&plr[0].plractive)[iVar11] != '\0') &&
					 ((uint)currlevel == *(uint *)((int)&plr[0].plrlevel + iVar11))) &&
					((&plr[0]._pLvlChanging)[iVar11] == '\0')) &&
				 ((*(int *)((int)&plr[0]._pHitPoints + iVar11) != 0 &&
					(*(int *)((int)&SpellFXDat.phaseflag + __x) == 0)))) {
				bVar3 = dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dTransVal ==
								dung_map[(int)*psVar12 * 0x6c + (int)*psVar10].dTransVal;
				i_00 = abs((int)monster[i]._mx - (int)*psVar12);
				iVar7 = abs((int)monster[i]._my - (int)*psVar10);
				if (iVar7 < i_00) {
					cVar1 = monster[i]._mx;
					sVar2 = *psVar12;
				}
				else {
					cVar1 = monster[i]._my;
					sVar2 = *psVar10;
				}
				i_00 = abs((int)cVar1 - (int)sVar2);
				if (bVar3) {
					if (bVar4) {
LAB_8007864c:
						if (local_48 <= i_00) goto LAB_80078660;
					}
				}
				else {
					if (!bVar4) goto LAB_8007864c;
LAB_80078660:
					if (local_50 != -1) goto LAB_800786a0;
				}
				monster[i]._mFlags = monster[i]._mFlags & 0xffef;
				local_38 = *(uchar *)psVar12;
				local_30 = *(uchar *)psVar10;
				local_50 = iVar13;
				local_48 = i_00;
				bVar4 = bVar3;
			}
LAB_800786a0:
			psVar10 = psVar10 + 0x11d4;
			psVar12 = psVar12 + 0x11d4;
			iVar11 = iVar11 + 0x23a8;
			iVar13 = iVar13 + 1;
			__x = __x + 0x48;
		} while (iVar13 < 2);
	}
	local_58 = 0;
	iVar11 = (int)monster[i]._mx;
	iVar13 = (int)monster[i]._my;
	do {
		if (nummonsters <= local_58) {
			if (local_50 == -1) {
				uVar6 = monster[i]._mFlags | 0x400;
			}
			else {
				uVar6 = monster[i]._mFlags;
				monster[i]._menemy = (char)local_50;
				monster[i]._menemyx = local_38;
				uVar6 = uVar6 & 0xfbff;
				monster[i]._menemyy = local_30;
			}
			monster[i]._mFlags = uVar6;
			return;
		}
		i_00 = (int)monstactive[local_58];
		__x = (int)monster[i_00]._mx;
		iVar7 = (int)monster[i_00]._my;
		bVar3 = false;
		if ((((i_00 != i) && ((__x != 1 || (iVar7 != 0)))) &&
				((uVar5 = M_Talker__Fi(i_00), uVar5 == '\0' || (monster[i_00].mtalkmsg == 0)))) &&
			 (((monster[i]._mFlags & 0x20) != 0 ||
				(((iVar8 = abs(__x - iVar11), iVar8 < 2 && (iVar8 = abs(iVar7 - iVar13), iVar8 < 2)) ||
				 (uVar5 = M_Ranged__Fi(i), uVar5 != '\0')))))) {
			bVar3 = true;
		}
		if ((bVar3) && (((monster[i]._mFlags & 0x20) != 0 || ((monster[i_00]._mFlags & 0x20) != 0)))) {
			bVar3 = dung_map[iVar11 * 0x6c + iVar13].dTransVal == dung_map[__x * 0x6c + iVar7].dTransVal;
			iVar8 = abs(iVar11 - __x);
			iVar9 = abs(iVar13 - iVar7);
			__x = iVar11 - __x;
			if (iVar8 <= iVar9) {
				__x = iVar13 - iVar7;
			}
			__x = abs(__x);
			if (bVar3) {
				if (bVar4) {
LAB_800788e4:
					if (local_48 <= __x) goto LAB_800788f8;
				}
			}
			else {
				if (!bVar4) goto LAB_800788e4;
LAB_800788f8:
				if (local_50 != -1) goto LAB_80078948;
			}
			local_38 = monster[i_00]._mfutx;
			local_30 = monster[i_00]._mfuty;
			monster[i]._mFlags = monster[i]._mFlags | 0x10;
			local_50 = i_00;
			local_48 = __x;
			bVar4 = bVar3;
		}
LAB_80078948:
		local_58 = local_58 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearMVars__Fi(int i /*$a0*/)
 // line 310, offset 0x800789dc
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x800789DC
	/* end block 1 */
	// End offset: 0x80078A48
	// End Line: 320

	/* begin block 2 */
		// Start line: 699
	/* end block 2 */
	// End Line: 700

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
// void /*$ra*/ InitMonster__Fiiiii(int i /*$a0*/, int rd /*$a1*/, int mtype /*$a2*/, int x /*$a3*/, int y /*stack 16*/)
 // line 323, offset 0x80078a50
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x80078A50
		// Variables:
	// 		struct CMonster *monst; // $s1
	// 		struct MonsterStruct *pmonster; // $s0
	/* end block 1 */
	// End offset: 0x80078E80
	// End Line: 431

	/* begin block 2 */
		// Start line: 723
	/* end block 2 */
	// End Line: 724

void InitMonster__Fiiiii(int i,int rd,int mtype,int x,int y)

{
	uchar uVar1;
	uchar uVar2;
	ushort uVar3;
	short sVar4;
	int iVar5;
	long lVar6;
	char cVar7;
	CMonster *pCVar8;
	
	pCVar8 = Monsters + mtype;
	monster[i]._mdir = (char)rd;
	cVar7 = (char)x;
	monster[i]._mx = cVar7;
	monster[i]._mfutx = cVar7;
	monster[i]._moldx = cVar7;
	monster[i]._mMTidx = (char)mtype;
	monster[i]._mmode = '\0';
	cVar7 = (char)y;
	monster[i]._my = cVar7;
	monster[i]._mfuty = cVar7;
	monster[i]._moldy = cVar7;
	iVar5 = pCVar8->MData->mName;
	monster[i].MType = pCVar8;
	monster[i].mName = iVar5;
	monster[i].MData = pCVar8->MData;
	cVar7 = Monsters[mtype].Anims[0].Rate;
	monster[i]._mAnimDelay = cVar7;
	lVar6 = random__Fil(0x58,(int)cVar7 + -1);
	monster[i]._mAnimCnt = (char)lVar6;
	cVar7 = Monsters[mtype].Anims[0].Frames;
	monster[i]._mAnimLen = cVar7;
	lVar6 = random__Fil(0x58,(int)cVar7 + -1);
	monster[i]._mAnimFrame = (char)lVar6 + '\x01';
	if (Monsters[mtype].mtype == 'n') {
		lVar6 = random__Fil(0x58,1);
		monster[i]._mmaxhp = ((short)lVar6 + 0x682) * 0x40;
	}
	else {
		lVar6 = random__Fil(0x58,((uint)Monsters[mtype].mMaxHP - (uint)Monsters[mtype].mMinHP) + 1);
		monster[i]._mmaxhp = ((ushort)Monsters[mtype].mMinHP + (short)lVar6) * 0x40;
	}
	if ((gbMaxPlayers == '\x01') &&
		 (uVar3 = monster[i]._mmaxhp, monster[i]._mmaxhp = (short)uVar3 >> 1,
		 (int)((uint)uVar3 << 0x10) >> 0x11 < 0x40)) {
		monster[i]._mmaxhp = 0x40;
	}
	monster[i]._mhitpoints = monster[i]._mmaxhp;
	monster[i]._mAi = pCVar8->MData->mAi;
	uVar1 = pCVar8->MData->mInt;
	monster[i]._mgoal = '\x01';
	monster[i]._mgoalvar1 = 0;
	monster[i]._mgoalvar2 = 0;
	monster[i]._mgoalvar3 = 0;
	monster[i]._pathcount = '\0';
	monster[i]._mDelFlag = '\0';
	monster[i]._uniqtype = '\0';
	monster[i]._msquelch = '\0';
	monster[i]._mint = uVar1;
	lVar6 = GetRndSeed__Fv();
	monster[i]._mRndSeed = lVar6;
	lVar6 = GetRndSeed__Fv();
	monster[i]._mAISeed = lVar6;
	monster[i].mWhoHit = '\0';
	monster[i].mLevel = pCVar8->MData->mLevel;
	monster[i].mExp = pCVar8->MData->mExp;
	monster[i].mHit = pCVar8->MData->mHit;
	monster[i].mMinDamage = pCVar8->MData->mMinDamage;
	monster[i].mMaxDamage = pCVar8->MData->mMaxDamage;
	monster[i].mHit2 = pCVar8->MData->mHit2;
	monster[i].mMinDamage2 = pCVar8->MData->mMinDamage2;
	monster[i].mMaxDamage2 = pCVar8->MData->mMaxDamage2;
	monster[i].mArmorClass = pCVar8->MData->mArmorClass;
	uVar3 = pCVar8->MData->mMagicRes;
	monster[i].leader = '\0';
	monster[i].mMagicRes = uVar3;
	monster[i].leaderflag = '\0';
	uVar1 = monster[i]._mAi;
	uVar3 = pCVar8->MData->mFlags;
	monster[i].mtalkmsg = 0;
	monster[i]._mFlags = uVar3;
	if (uVar1 == '\f') {
		uVar3 = monster[i]._mFlags;
		monster[i]._mAnimFrame = '\x01';
		monster[i]._mmode = '\a';
		monster[i]._mFlags = uVar3 | 4;
	}
	if (gnDifficulty == 1) {
		sVar4 = monster[i]._mmaxhp * 3 + 100;
		monster[i]._mmaxhp = sVar4;
		monster[i]._mhitpoints = sVar4;
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
		cVar7 = monster[i].mArmorClass;
		monster[i].mHit2 = uVar1 + 'U';
		uVar1 = monster[i].mMaxDamage2;
		monster[i].mArmorClass = cVar7 + '2';
		monster[i].mMaxDamage2 = uVar1 * '\x02' + '\x04';
	}
	if (gnDifficulty == 2) {
		uVar3 = monster[i].mExp;
		sVar4 = monster[i]._mmaxhp * 4 + 200;
		monster[i]._mmaxhp = sVar4;
		monster[i]._mhitpoints = sVar4;
		cVar7 = monster[i].mLevel;
		monster[i].mExp = uVar3 * 4 + 4000;
		uVar1 = monster[i].mMinDamage;
		monster[i].mLevel = cVar7 + '\x1e';
		uVar2 = monster[i].mHit;
		monster[i].mMinDamage = uVar1 * '\x04' + '\x06';
		uVar1 = monster[i].mMinDamage2;
		monster[i].mHit = uVar2 + 'x';
		uVar2 = monster[i].mMaxDamage;
		monster[i].mMinDamage2 = uVar1 * '\x04' + '\x06';
		monster[i].mMaxDamage = uVar2 * '\x04' + '\x06';
		cVar7 = monster[i].mArmorClass;
		monster[i].mHit2 = monster[i].mHit2 + 'x';
		uVar1 = monster[i].mMaxDamage2;
		monster[i].mArmorClass = cVar7 + 'P';
		monster[i].mMaxDamage2 = uVar1 * '\x04' + '\x06';
		monster[i].mMagicRes = pCVar8->MData->mMagicRes2;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMonster__FiiiiUc(int x /*$t0*/, int y /*$a1*/, int dir /*$a2*/, int mtype /*$a3*/, int InMap /*stack 16*/)
 // line 435, offset 0x80078e9c
	/* begin block 1 */
		// Start line: 436
		// Start offset: 0x80078E9C
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80078F38
	// End Line: 444

	/* begin block 2 */
		// Start line: 1020
	/* end block 2 */
	// End Line: 1021

int AddMonster__FiiiiUc(int x,int y,int dir,int mtype,int InMap)

{
	short *psVar1;
	int iVar2;
	int i;
	
	if (nummonsters < 200) {
		iVar2 = nummonsters + 1;
		psVar1 = monstactive + nummonsters;
		i = (int)*psVar1;
		nummonsters = iVar2;
		if ((char)InMap != '\0') {
			nummonsters = iVar2;
			dung_map[x * 0x6c + y].dMonster = *psVar1 + 1;
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
 // line 448, offset 0x80078f4c
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x80078F4C
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $a2
	// 		int _my; // $v1
	/* end block 1 */
	// End offset: 0x80079078
	// End Line: 477

	/* begin block 2 */
		// Start line: 1049
	/* end block 2 */
	// End Line: 1050

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
	monster[i]._meflag = '\0';
	monster[i]._mVar1 = (short)cVar4;
	monster[i]._mfutx = cVar2;
	monster[i]._mfuty = cVar3;
	monster[i]._moldx = cVar2;
	monster[i]._moldy = cVar3;
	M_Enemy__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_UpdateLeader__Fi(int i /*$a0*/)
 // line 480, offset 0x80079090
	/* begin block 1 */
		// Start line: 481
		// Start offset: 0x80079090
		// Variables:
	// 		int x; // $a1
	// 		int tmp; // $v0
	/* end block 1 */
	// End offset: 0x8007917C
	// End Line: 500

	/* begin block 2 */
		// Start line: 1127
	/* end block 2 */
	// End Line: 1128

void M_UpdateLeader__Fi(int i)

{
	int iVar1;
	int iVar2;
	short *psVar3;
	
	iVar2 = 0;
	if (0 < nummonsters) {
		psVar3 = monstactive;
		do {
			iVar1 = (int)*psVar3;
			if ((monster[iVar1].leaderflag == '\x01') && ((uint)monster[iVar1].leader == i)) {
				monster[iVar1].leaderflag = '\0';
			}
			iVar2 = iVar2 + 1;
			psVar3 = psVar3 + 1;
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
 // line 503, offset 0x80079188
	/* begin block 1 */
		// Start line: 504
		// Start offset: 0x80079188
	/* end block 1 */
	// End offset: 0x80079220
	// End Line: 512

	/* begin block 2 */
		// Start line: 1173
	/* end block 2 */
	// End Line: 1174

void ActivateSpawn__Fiiii(int i,int x,int y,int dir)

{
	char cVar1;
	
	dung_map[x * 0x6c + y].dMonster = (short)i + 1;
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
 // line 515, offset 0x80079230
	/* begin block 1 */
		// Start line: 516
		// Start offset: 0x80079230
		// Variables:
	// 		int monstok[3][3]; // stack offset -104
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int xx; // $s0
	// 		int yy; // $s2
	// 		int rs; // $a0
	// 		unsigned char savail; // $s4
	/* end block 1 */
	// End offset: 0x800793EC
	// End Line: 561

	/* begin block 2 */
		// Start line: 1201
	/* end block 2 */
	// End Line: 1202

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
LAB_80079338:
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
			if (uVar6 == 0) goto LAB_80079338;
			lVar3 = random__Fil(0x89,0xf);
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
 // line 564, offset 0x80079420
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x80079420
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x800794E4
	// End Line: 582

	/* begin block 2 */
		// Start line: 1304
	/* end block 2 */
	// End Line: 1305

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
 // line 585, offset 0x80079500
	/* begin block 1 */
		// Start line: 586
		// Start offset: 0x80079500
		// Variables:
	// 		unsigned char ret; // $s2
	// 		int oi; // $v1
	// 		int mi; // $a0
	// 		unsigned char fire; // $s3
	/* end block 1 */
	// End offset: 0x80079758
	// End Line: 615

	/* begin block 2 */
		// Start line: 1353
	/* end block 2 */
	// End Line: 1354

uchar PosOkMonst__Fiii(int i,int x,int y)

{
	bool bVar1;
	uchar uVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	int *piVar6;
	bool bVar7;
	
	bVar1 = false;
	bVar7 = false;
	uVar2 = SolidLoc__Fii(x,y);
	if ((uVar2 == '\0') && (dung_map[x * 0x6c + y].dPlayer == '\0')) {
		bVar7 = dung_map[x * 0x6c + y].dMonster == 0;
	}
	if (bVar7) {
		uVar3 = SEXT14(dung_map[x * 0x6c + y].dObject);
		if (uVar3 != 0) {
			uVar5 = uVar3 - 1;
			if ((int)uVar3 < 1) {
				uVar5 = ~uVar3;
			}
			if (object[uVar5]._oSolidFlag != '\0') {
				bVar7 = false;
			}
		}
		if (((bVar7 != false) && (iVar4 = (int)dung_map[x * 0x6c + y].dMissile, iVar4 != 0)) && (-1 < i)
			 ) {
			if (0 < iVar4) {
				if (missile[iVar4]._mitype == '\x05') {
					bVar1 = true;
				}
				else {
					iVar4 = 0;
					if (0 < nummissiles) {
						piVar6 = &missileactive;
						do {
							if (missile[*piVar6]._mitype == '\x05') {
								bVar1 = true;
							}
							iVar4 = iVar4 + 1;
							piVar6 = piVar6 + 1;
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
// unsigned char /*$ra*/ CanPut__Fii(int i /*$a2*/, int j /*$a1*/)
 // line 619, offset 0x8007977c
	/* begin block 1 */
		// Start line: 620
		// Start offset: 0x8007977C
		// Variables:
	// 		int oi; // $v1
	/* end block 1 */
	// End offset: 0x80079A7C
	// End Line: 651

	/* begin block 2 */
		// Start line: 1431
	/* end block 2 */
	// End Line: 1432

uchar CanPut__Fii(int i,int j)

{
	uchar uVar1;
	uint uVar2;
	uint uVar3;
	
	uVar1 = '\0';
	if ((dung_map[i * 0x6c + j].dItem == '\0') &&
		 (uVar1 = '\0', nSolidTable[(int)dung_map[i * 0x6c + j].dPiece] == '\0')) {
		uVar2 = SEXT14(dung_map[i * 0x6c + j].dObject);
		if (uVar2 != 0) {
			uVar3 = uVar2 - 1;
			if ((int)uVar2 < 1) {
				uVar3 = ~uVar2;
			}
			if (object[uVar3]._oSolidFlag != '\0') {
				return '\0';
			}
		}
		if ((((int)dung_map[(i + 1) * 0x6c + j + 1].dObject < 1) ||
				(uVar1 = '\0', object[(int)dung_map[(i + 1) * 0x6c + j + 1].dObject + -1]._oSelFlag == '\0')
				) && ((-1 < (int)dung_map[(i + 1) * 0x6c + j + 1].dObject ||
							(uVar1 = '\0',
							object[~(int)dung_map[(i + 1) * 0x6c + j + 1].dObject]._oSelFlag == '\0')))) {
			if (0 < (int)dung_map[(i + 1) * 0x6c + j].dObject) {
				if (((0 < (int)dung_map[i * 0x6c + j + 1].dObject) &&
						(object[(int)dung_map[(i + 1) * 0x6c + j].dObject + -1]._oSelFlag != '\0')) &&
					 (object[(int)dung_map[i * 0x6c + j + 1].dObject + -1]._oSelFlag != '\0')) {
					return '\0';
				}
			}
			uVar1 = '\x01';
			if (((currlevel == '\0') && (uVar1 = '\0', dung_map[i * 0x6c + j].dMonster == 0)) &&
				 (uVar1 = '\0', dung_map[(i + 1) * 0x6c + j + 1].dMonster == 0)) {
				uVar1 = '\x01';
			}
		}
	}
	return uVar1;
}





