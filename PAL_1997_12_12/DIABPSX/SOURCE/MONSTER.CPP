#include "THISDUST.H"
#include "MONSTER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MonstPartJump__Fi(int m /*$s0*/)
 // line 447, offset 0x80147234
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x80147234
		// Variables:
	// 		int ScrX; // $s1
	// 		int ScrXOff; // $s3
	// 		int ScrYOff; // $s4
	// 		int WorldX; // stack offset -40
	// 		int WorldY; // stack offset -36
	// 		struct CBlocks *gblocks; // $s5
	/* end block 1 */
	// End offset: 0x801473A0
	// End Line: 467

	/* begin block 2 */
		// Start line: 894
	/* end block 2 */
	// End Line: 895

void MonstPartJump__Fi(int m)

{
	char cVar1;
	char cVar2;
	CBlocks *this;
	int iVar3;
	int iVar4;
	int y;
	int x;
	undefined4 uStack40;
	undefined4 uStack36;
	
	this = BL_GetCurrentBlocks__Fv();
	GetXY__7CBlocksPiT1(this,&uStack40,&uStack36);
	cVar1 = monster[m]._mxoff;
	cVar2 = monster[m]._myoff;
	x = (int)monster[m]._mx * 0x14;
	y = (int)monster[m]._my * 0x14;
	iVar3 = WorldToScrX__7CBlocksii(this,x,y);
	iVar4 = WorldToScrX__7CBlocksii(this,(int)uStack40._2_2_,(int)uStack36._2_2_);
	y = WorldToScrY__7CBlocksii(this,x,y);
	x = WorldToScrY__7CBlocksii(this,(int)uStack40._2_2_,(int)uStack36._2_2_);
	StartPartJump__Fiiiiii
						((iVar3 + ((int)cVar1 * 0x271) / 1000) - iVar4,(y + ((int)cVar2 * 0x271) / 1000) - x,0,
						 0x8000,(int)&DAT_00606060,99);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteMonster__Fi(int i /*$a0*/)
 // line 485, offset 0x801473c8
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x801473C8
		// Variables:
	// 		int temp; // $a2
	/* end block 1 */
	// End offset: 0x801473F8
	// End Line: 493

	/* begin block 2 */
		// Start line: 997
	/* end block 2 */
	// End Line: 998

void DeleteMonster__Fi(int i)

{
	short sVar1;
	
	nummonsters = nummonsters + -1;
	sVar1 = monstactive[nummonsters];
	monstactive[nummonsters] = monstactive[i];
	monstactive[i] = sVar1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_GetDir__Fi(int i /*$a0*/)
 // line 511, offset 0x80147400
	/* begin block 1 */
		// Start line: 512
		// Start offset: 0x80147400
	/* end block 1 */
	// End offset: 0x8014744C
	// End Line: 514

	/* begin block 2 */
		// Start line: 1047
	/* end block 2 */
	// End Line: 1048

int M_GetDir__Fi(int i)

{
	int iVar1;
	
	iVar1 = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(uint)monster[i]._menemyx,
															(uint)monster[i]._menemyy);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartDelay__Fii(int i /*$a0*/, int len /*$a1*/)
 // line 532, offset 0x8014745c
	/* begin block 1 */
		// Start line: 533
		// Start offset: 0x8014745C
	/* end block 1 */
	// End offset: 0x8014749C
	// End Line: 539

	/* begin block 2 */
		// Start line: 1092
	/* end block 2 */
	// End Line: 1093

void M_StartDelay__Fii(int i,int len)

{
	if ((0 < len) && (monster[i]._mAi != '\x1c')) {
		monster[i]._mVar2 = (short)len;
		monster[i]._mmode = '\r';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartRAttack__Fiii(int i /*$s1*/, int missile_type /*$s3*/, int dam /*$s4*/)
 // line 555, offset 0x801474a4
	/* begin block 1 */
		// Start line: 556
		// Start offset: 0x801474A4
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x80147598
	// End Line: 578

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

void M_StartRAttack__Fiii(int i,int missile_type,int dam)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = M_GetDir__Fi(i);
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 2,md,2);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mmode = '\n';
	monster[i]._mVar1 = (short)missile_type;
	monster[i]._mVar2 = (short)dam;
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
// void /*$ra*/ M_StartRSpAttack__Fiii(int i /*$s1*/, int missile_type /*$s3*/, int dam /*$s4*/)
 // line 585, offset 0x801475bc
	/* begin block 1 */
		// Start line: 586
		// Start offset: 0x801475BC
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x801476BC
	// End Line: 609

	/* begin block 2 */
		// Start line: 1202
	/* end block 2 */
	// End Line: 1203

void M_StartRSpAttack__Fiii(int i,int missile_type,int dam)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = M_GetDir__Fi(i);
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,md,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mmode = '\f';
	monster[i]._mVar1 = (short)missile_type;
	monster[i]._mVar2 = 0;
	monster[i]._mVar3 = (short)dam;
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
// void /*$ra*/ M_StartSpAttack__Fi(int i /*$s1*/)
 // line 615, offset 0x801476e0
	/* begin block 1 */
		// Start line: 616
		// Start offset: 0x801476E0
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x801477AC
	// End Line: 636

	/* begin block 2 */
		// Start line: 1267
	/* end block 2 */
	// End Line: 1268

void M_StartSpAttack__Fi(int i)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = M_GetDir__Fi(i);
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,md,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mmode = '\a';
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
// void /*$ra*/ M_StartEat__Fi(int i /*$s1*/)
 // line 643, offset 0x801477c8
	/* begin block 1 */
		// Start line: 644
		// Start offset: 0x801477C8
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x80147880
	// End Line: 660

	/* begin block 2 */
		// Start line: 1328
	/* end block 2 */
	// End Line: 1329

void M_StartEat__Fi(int i)

{
	char cVar1;
	char cVar2;
	
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,(int)monster[i]._mdir,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mmode = '\a';
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	M_CheckEFlag__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_GetKnockback__Fi(int i /*$s3*/)
 // line 666, offset 0x80147898
	/* begin block 1 */
		// Start line: 667
		// Start offset: 0x80147898
		// Variables:
	// 		int d; // $s0

		/* begin block 1.1 */
			// Start line: 667
			// Start offset: 0x80147898

			/* begin block 1.1.1 */
				// Start line: 672
				// Start offset: 0x801478EC
				// Variables:
			// 		struct MonsterStruct *pmonster; // $v0
			// 		int _mx; // $s1
			// 		int _my; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80147A50
			// End Line: 696
		/* end block 1.1 */
		// End offset: 0x80147A50
		// End Line: 696
	/* end block 1 */
	// End offset: 0x80147A50
	// End Line: 696

	/* begin block 2 */
		// Start line: 1377
	/* end block 2 */
	// End Line: 1378

void M_GetKnockback__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	CMonster *pCVar6;
	uint mdir;
	
	mdir = (int)monster[i]._mdir + 4U & 7;
	uVar5 = DirOK__Fii(i,mdir);
	if (uVar5 != '\0') {
		M_ClearSquares__Fi(i);
		pCVar6 = monster[i].MType;
		cVar1 = monster[i]._mdir;
		monster[i]._moldx = monster[i]._moldx + offset_x[mdir];
		monster[i]._moldy = monster[i]._moldy + offset_y[mdir];
		NewMonsterAnim__FiR10AnimStructii(i,pCVar6->Anims + 3,(int)cVar1,3);
		cVar3 = monster[i]._moldx;
		cVar4 = monster[i]._moldy;
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		monster[i]._mmode = '\x05';
		monster[i]._mxoff = '\0';
		monster[i]._myoff = '\0';
		monster[i]._mx = cVar3;
		monster[i]._my = cVar4;
		monster[i]._mfutx = cVar1;
		monster[i]._mfuty = cVar2;
		monster[i]._moldx = cVar1;
		monster[i]._moldy = cVar2;
		M_CheckEFlag__Fi(i);
		M_ClearSquares__Fi(i);
		dung_map[(int)cVar1 * 0x6c + (int)cVar2].dMonster = (short)i + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartHit__Fiii(int i /*$s3*/, int pnum /*$s0*/, int dam /*$s2*/)
 // line 702, offset 0x80147a70
	/* begin block 1 */
		// Start line: 703
		// Start offset: 0x80147A70

		/* begin block 1.1 */
			// Start line: 739
			// Start offset: 0x80147C38

			/* begin block 1.1.1 */
				// Start line: 739
				// Start offset: 0x80147C5C
				// Variables:
			// 		struct MonsterStruct *pmonster; // $v0
			// 		int _moldx; // $s1
			// 		int _moldy; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80147D48
			// End Line: 757
		/* end block 1.1 */
		// End offset: 0x80147D48
		// End Line: 757
	/* end block 1 */
	// End offset: 0x80147D48
	// End Line: 757

	/* begin block 2 */
		// Start line: 1473
	/* end block 2 */
	// End Line: 1474

void M_StartHit__Fiii(int i,int pnum,int dam)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	short sVar4;
	int iVar5;
	
	if (-1 < pnum) {
		monster[i].mWhoHit = monster[i].mWhoHit | (byte)(1 << (pnum & 0x1fU));
	}
	delta_monster_hp__FilUc(i,(int)monster[i]._mhitpoints,currlevel);
	NetSendCmdParam2__FUcUcUsUs('\0','%',(ushort)i,(ushort)dam);
	PlayEffect__Fii(i,1);
	if (((uint)(monster[i].MType)->mtype - 0x1d < 4) || ((int)monster[i].mLevel + 3 <= dam >> 6)) {
		if (-1 < pnum) {
			monster[i]._menemy = (char)pnum;
			monster[i]._menemyx = (uchar)plr[pnum]._px;
			sVar4 = plr[pnum]._py;
			monster[i]._mFlags = monster[i]._mFlags & 0xffef;
			monster[i]._menemyy = (uchar)sVar4;
			iVar5 = M_GetDir__Fi(i);
			monster[i]._mdir = (char)iVar5;
		}
		bVar3 = (monster[i].MType)->mtype;
		if (bVar3 == 0x27) {
			M_Teleport__Fi(i);
		}
		else {
			if ((uint)bVar3 - 0x10 < 4) {
				monster[i]._mgoal = '\x01';
			}
		}
		if (monster[i]._mmode != '\x0f') {
			NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 3,(int)monster[i]._mdir,3);
			cVar1 = monster[i]._moldx;
			cVar2 = monster[i]._moldy;
			monster[i]._mmode = '\x05';
			monster[i]._mxoff = '\0';
			monster[i]._myoff = '\0';
			monster[i]._mx = cVar1;
			monster[i]._my = cVar2;
			monster[i]._mfutx = cVar1;
			monster[i]._mfuty = cVar2;
			monster[i]._moldx = cVar1;
			monster[i]._moldy = cVar2;
			M_CheckEFlag__Fi(i);
			M_ClearSquares__Fi(i);
			dung_map[(int)cVar1 * 0x6c + (int)cVar2].dMonster = (ushort)i + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_DiabloDeath__FiUc(int i /*$s5*/, unsigned char sendmsg /*$s0*/)
 // line 763, offset 0x80147d68
	/* begin block 1 */
		// Start line: 764
		// Start offset: 0x80147D68
		// Variables:
	// 		struct MonsterStruct *Monst; // $s6
	// 		struct MonsterStruct *pmonster; // $s7
	// 		int _mx; // $s2
	// 		int _my; // $s3
	// 		int steps; // $v1

		/* begin block 1.1 */
			// Start line: 774
			// Start offset: 0x80147DE0
			// Variables:
		// 		int j; // $s4

			/* begin block 1.1.1 */
				// Start line: 780
				// Start offset: 0x80147E04
				// Variables:
			// 		int k; // $s3

				/* begin block 1.1.1.1 */
					// Start line: 781
					// Start offset: 0x80147E18

					/* begin block 1.1.1.1.1 */
						// Start line: 782
						// Start offset: 0x80147E48
						// Variables:
					// 		int _moldx; // $s2
					// 		int _moldy; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80147F44
					// End Line: 800
				/* end block 1.1.1.1 */
				// End offset: 0x80147F44
				// End Line: 800
			/* end block 1.1.1 */
			// End offset: 0x80147F44
			// End Line: 800
		/* end block 1.1 */
		// End offset: 0x80147F4C
		// End Line: 802
	/* end block 1 */
	// End offset: 0x80148058
	// End Line: 820

	/* begin block 2 */
		// Start line: 1604
	/* end block 2 */
	// End Line: 1605

void M_DiabloDeath__FiUc(int i,uchar sendmsg)

{
	char cVar1;
	char cVar2;
	short sVar3;
	uint uVar4;
	uint uVar5;
	int x;
	int i_00;
	int y;
	int __x;
	undefined8 uVar6;
	
	PlaySFX__Fi(USFX_DIABLOD);
	QuestStruct_ARRAY_800e33dc[1]._qactive = '\x03';
	if (sendmsg != '\0') {
		NetSendCmdQuest__FUcUc('\x01','\x05');
	}
	sgbSaveSoundOn = gbSoundOn;
	__x = 0;
	gbSoundOn = '\0';
	gbProcessPlayers = '\0';
	while (__x < nummonsters) {
		sVar3 = monstactive[__x];
		i_00 = (int)sVar3;
		if ((i_00 != i) && (monster[i]._msquelch != '\0')) {
			NewMonsterAnim__FiR10AnimStructii
								(i_00,(monster[i_00].MType)->Anims + 4,(int)monster[i_00]._mdir,4);
			cVar1 = monster[i_00]._moldx;
			cVar2 = monster[i_00]._moldy;
			monster[i_00]._mmode = '\x06';
			monster[i_00]._mxoff = '\0';
			monster[i_00]._myoff = '\0';
			monster[i_00]._mVar1 = 0;
			monster[i_00]._mx = cVar1;
			monster[i_00]._my = cVar2;
			monster[i_00]._mfutx = cVar1;
			monster[i_00]._mfuty = cVar2;
			monster[i_00]._moldx = cVar1;
			monster[i_00]._moldy = cVar2;
			M_CheckEFlag__Fi(i_00);
			M_ClearSquares__Fi(i_00);
			dung_map[(int)cVar1 * 0x6c + (int)cVar2].dMonster = sVar3 + 1;
		}
		__x = __x + 1;
	}
	x = (int)monster[i]._mx;
	y = (int)monster[i]._my;
	AddLight__Fiii(x,y,8);
	DoVision__FiiiUcUc(x,y,8,'\0',1);
	__x = abs(ViewX - x);
	i_00 = abs(ViewY - y);
	if (i_00 < __x) {
		__x = ViewX - x;
	}
	else {
		__x = ViewY - y;
	}
	uVar4 = abs(__x);
	uVar5 = 0x14;
	if ((int)uVar4 < 0x15) {
		uVar5 = uVar4;
	}
	monster[i]._mVar3 = 0;
	sVar3 = monster[i]._mVar3;
	monster[i]._mVar4 = 0;
	uVar4 = (int)sVar3 + x * -0x10000;
	uVar6 = __divdi3(uVar4,(int)uVar4 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
	monster[i]._mVar5 = (short)((ulonglong)uVar6 >> 0x20);
	uVar4 = (int)monster[i]._mVar4 + y * -0x10000;
	uVar6 = __divdi3(uVar4,(int)uVar4 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
	monster[i]._mVar6 = (short)((ulonglong)uVar6 >> 0x20);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M2MStartHit__Fiii(int mid /*$s3*/, int i /*$s0*/, int dam /*$s2*/)
 // line 826, offset 0x8014808c
	/* begin block 1 */
		// Start line: 827
		// Start offset: 0x8014808C
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $s2
	// 		int _my; // $s1
	/* end block 1 */
	// End offset: 0x80148318
	// End Line: 877

	/* begin block 2 */
		// Start line: 1777
	/* end block 2 */
	// End Line: 1778

void M2MStartHit__Fiii(int mid,int i,int dam)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	
	if (-1 < i) {
		monster[i].mWhoHit = monster[i].mWhoHit | (byte)(1 << (i & 0x1fU));
	}
	delta_monster_hp__FilUc(mid,(int)monster[mid]._mhitpoints,currlevel);
	NetSendCmdParam2__FUcUcUsUs('\0','%',(ushort)mid,(ushort)dam);
	PlayEffect__Fii(mid,1);
	if (((uint)(monster[mid].MType)->mtype - 0x1d < 4) || ((int)monster[mid].mLevel + 3 <= dam >> 6))
	{
		if (-1 < i) {
			monster[mid]._mdir = monster[i]._mdir + 4U & 7;
		}
		bVar3 = (monster[mid].MType)->mtype;
		if (bVar3 == 0x27) {
			M_Teleport__Fi(mid);
		}
		else {
			if ((uint)bVar3 - 0x10 < 4) {
				monster[mid]._mgoal = '\x01';
			}
		}
		cVar1 = monster[mid]._moldx;
		cVar2 = monster[mid]._moldy;
		if (monster[mid]._mmode != '\x0f') {
			if ((monster[mid].MType)->mtype != 'm') {
				NewMonsterAnim__FiR10AnimStructii
									(mid,(monster[mid].MType)->Anims + 3,(int)monster[mid]._mdir,3);
				monster[mid]._mmode = '\x05';
			}
			monster[mid]._mxoff = '\0';
			monster[mid]._myoff = '\0';
			monster[mid]._mx = cVar1;
			monster[mid]._my = cVar2;
			monster[mid]._mfutx = cVar1;
			monster[mid]._mfuty = cVar2;
			monster[mid]._moldx = cVar1;
			monster[mid]._moldy = cVar2;
			M_CheckEFlag__Fi(mid);
			M_ClearSquares__Fi(mid);
			dung_map[(int)cVar1 * 0x6c + (int)cVar2].dMonster = (ushort)mid + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonstStartKill__FiiUc(int i /*$s2*/, int pnum /*$s4*/, unsigned char sendmsg /*$s5*/)
 // line 884, offset 0x80148338
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x80148338
		// Variables:
	// 		int md; // $v0
	// 		struct MonsterStruct *Monst; // $s1
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $s0
	// 		int _my; // $s3

		/* begin block 1.1 */
			// Start line: 899
			// Start offset: 0x8014838C

			/* begin block 1.1.1 */
				// Start line: 900
				// Start offset: 0x801483A0
				// Variables:
			// 		int omp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x801483CC
			// End Line: 904
		/* end block 1.1 */
		// End offset: 0x801483CC
		// End Line: 904
	/* end block 1 */
	// End offset: 0x801485E4
	// End Line: 949

	/* begin block 2 */
		// Start line: 1898
	/* end block 2 */
	// End Line: 1899

void MonstStartKill__FiiUc(int i,int pnum,uchar sendmsg)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int md;
	long s;
	CMonster *pCVar4;
	int x;
	int y;
	
	if (-1 < pnum) {
		monster[i].mWhoHit = (char)(1 << (pnum & 0x1fU));
	}
	x = myplr;
	if ((pnum < 2) && (2 < i)) {
		myplr = pnum;
		AddPlrMonstExper__Filc((int)monster[i].mLevel,(uint)monster[i].mExp,monster[i].mWhoHit);
	}
	myplr = x;
	monstkills[(uint)(monster[i].MType)->mtype] = monstkills[(uint)(monster[i].MType)->mtype] + 1;
	s = monster[i]._mRndSeed;
	monster[i]._mhitpoints = 0;
	SetRndSeed__Fl(s);
	uVar3 = QuestStatus__Fi(2);
	if ((uVar3 == '\0') || (monster[i].mName != (uint)UniqMonst[0].mName)) {
		if (3 < i) {
			SpawnItem__FiiiUc(i,(int)monster[i]._mx,(int)monster[i]._my,sendmsg);
		}
	}
	else {
		CreateTypeItem__FiiUciiUcUc((int)monster[i]._mx + 1,(int)monster[i]._my + 1,'\x01',4,0,1,0);
	}
	if ((monster[i].MType)->mtype == 'n') {
		M_DiabloDeath__FiUc(i,'\x01');
	}
	else {
		PlayEffect__Fii(i,2);
	}
	cVar1 = monster[i]._moldx;
	x = (int)cVar1;
	cVar2 = monster[i]._moldy;
	y = (int)cVar2;
	if (pnum < 0) {
		md = (int)monster[i]._mdir;
	}
	else {
		md = M_GetDir__Fi(i);
	}
	pCVar4 = monster[i].MType;
	monster[i]._mdir = (char)md;
	NewMonsterAnim__FiR10AnimStructii(i,pCVar4->Anims + 4,md,4);
	monster[i]._mmode = '\x06';
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mVar1 = 0;
	monster[i]._mx = cVar1;
	monster[i]._my = cVar2;
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	M_CheckEFlag__Fi(i);
	M_ClearSquares__Fi(i);
	dung_map[x * 0x6c + y].dMonster = (short)i + 1;
	CheckQuestKill__FiUc(i,sendmsg);
	M_FallenFear__Fii(x,y);
	if ((uint)(monster[i].MType)->mtype - 0x2e < 4) {
		AddMissile__Fiiiiiiciii(x,y,0,0,0,0x3b,1,i,(uint)monster[i]._mint + 1,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M2MStartKill__Fii(int i /*$s5*/, int mid /*$s3*/)
 // line 955, offset 0x8014860c
	/* begin block 1 */
		// Start line: 956
		// Start offset: 0x8014860C
		// Variables:
	// 		int md; // $a2
	// 		struct MonsterStruct *pmonster; // $s7
	// 		int _mx; // $s4
	// 		int _my; // $s6

		/* begin block 1.1 */
			// Start line: 971
			// Start offset: 0x80148688

			/* begin block 1.1.1 */
				// Start line: 976
				// Start offset: 0x801486F4
				// Variables:
			// 		int omp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80148738
			// End Line: 980
		/* end block 1.1 */
		// End offset: 0x80148738
		// End Line: 980
	/* end block 1 */
	// End offset: 0x801489A4
	// End Line: 1019

	/* begin block 2 */
		// Start line: 2066
	/* end block 2 */
	// End Line: 2067

void M2MStartKill__Fii(int i,int mid)

{
	uchar x;
	uchar y;
	char cVar1;
	char cVar2;
	long s;
	CMonster *pCVar3;
	uint md;
	int x_00;
	int y_00;
	
	x = monster[mid]._mx;
	y = monster[mid]._my;
	if (monster[i]._mmode == '\x0f') {
		MonstPartJump__Fi(i);
	}
	delta_kill_monster__FiUcUcUc(mid,x,y,currlevel);
	NetSendCmdLocParam1__FUcUcUcUcUs('\0','$',x,y,mid & 0xffff);
	monster[mid].mWhoHit = monster[mid].mWhoHit | (byte)(1 << (i & 0x1fU));
	x_00 = myplr;
	if (i < 2) {
		myplr = i;
		AddPlrMonstExper__Filc((int)monster[mid].mLevel,(uint)monster[mid].mExp,monster[mid].mWhoHit);
	}
	myplr = x_00;
	monstkills[(uint)(monster[mid].MType)->mtype] = monstkills[(uint)(monster[mid].MType)->mtype] + 1;
	s = monster[mid]._mRndSeed;
	monster[mid]._mhitpoints = 0;
	SetRndSeed__Fl(s);
	if (1 < mid) {
		SpawnItem__FiiiUc(mid,(int)(char)x,(int)(char)y,'\x01');
	}
	if ((monster[mid].MType)->mtype == 'n') {
		M_DiabloDeath__FiUc(mid,'\x01');
	}
	else {
		PlayEffect__Fii(i,2);
	}
	PlayEffect__Fii(mid,2);
	md = (int)monster[i]._mdir + 4U & 7;
	if ((monster[mid].MType)->mtype == 'm') {
		md = 0;
	}
	pCVar3 = monster[mid].MType;
	monster[mid]._mdir = (char)md;
	NewMonsterAnim__FiR10AnimStructii(mid,pCVar3->Anims + 4,md,4);
	cVar1 = monster[mid]._moldx;
	x_00 = (int)cVar1;
	cVar2 = monster[mid]._moldy;
	y_00 = (int)cVar2;
	monster[mid]._mmode = '\x06';
	monster[mid]._mxoff = '\0';
	monster[mid]._myoff = '\0';
	monster[mid]._mx = cVar1;
	monster[mid]._my = cVar2;
	monster[mid]._mfutx = cVar1;
	monster[mid]._mfuty = cVar2;
	monster[mid]._moldx = cVar1;
	monster[mid]._moldy = cVar2;
	M_CheckEFlag__Fi(mid);
	M_ClearSquares__Fi(mid);
	dung_map[x_00 * 0x6c + y_00].dMonster = (short)mid + 1;
	CheckQuestKill__FiUc(mid,'\x01');
	M_FallenFear__Fii(x_00,y_00);
	if ((uint)(monster[mid].MType)->mtype - 0x2e < 4) {
		AddMissile__Fiiiiiiciii(x_00,y_00,0,0,0,0x3b,1,mid,(uint)monster[mid]._mint + 1,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartKill__Fii(int i /*$s0*/, int pnum /*$s3*/)
 // line 1025, offset 0x801489d4
	/* begin block 1 */
		// Start line: 1026
		// Start offset: 0x801489D4
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $s1
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x80148AA4
	// End Line: 1045

	/* begin block 2 */
		// Start line: 2254
	/* end block 2 */
	// End Line: 2255

void M_StartKill__Fii(int i,int pnum)

{
	uchar x;
	uchar y;
	uint local_20;
	uchar bCmd;
	
	x = monster[i]._mx;
	y = monster[i]._my;
	if (monster[i]._mmode == '\x0f') {
		MonstPartJump__Fi(i);
	}
	delta_kill_monster__FiUcUcUc(i,x,y,currlevel);
	local_20 = i & 0xffff;
	if (i == pnum) {
		bCmd = 'W';
		local_20 = (uint)currlevel;
	}
	else {
		bCmd = '$';
	}
	NetSendCmdLocParam1__FUcUcUcUcUs('\0',bCmd,x,y,local_20);
	MonstStartKill__FiiUc(i,pnum,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartFadein__FiiUc(int i /*$s0*/, int md /*$s2*/, unsigned char backwards /*$s1*/)
 // line 1078, offset 0x80148ac4
	/* begin block 1 */
		// Start line: 1079
		// Start offset: 0x80148AC4
	/* end block 1 */
	// End offset: 0x80148BF8
	// End Line: 1099

	/* begin block 2 */
		// Start line: 2377
	/* end block 2 */
	// End Line: 2378

void M_StartFadein__FiiUc(int i,int md,uchar backwards)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	ushort uVar5;
	
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,md,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	cVar3 = monster[i]._mx;
	cVar4 = monster[i]._my;
	monster[i]._mmode = '\b';
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar3;
	monster[i]._moldy = cVar4;
	M_CheckEFlag__Fi(i);
	uVar5 = monster[i]._mFlags;
	monster[i]._mdir = (char)md;
	uVar5 = uVar5 & 0xfffe;
	monster[i]._mFlags = uVar5;
	if (backwards != '\0') {
		cVar1 = monster[i]._mAnimLen;
		monster[i]._mFlags = uVar5 | 2;
		monster[i]._mAnimFrame = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartFadeout__FiiUc(int i /*$s0*/, int md /*$s2*/, unsigned char backwards /*$s1*/)
 // line 1106, offset 0x80148c18
	/* begin block 1 */
		// Start line: 1107
		// Start offset: 0x80148C18
	/* end block 1 */
	// End offset: 0x80148D40
	// End Line: 1125

	/* begin block 2 */
		// Start line: 2457
	/* end block 2 */
	// End Line: 2458

void M_StartFadeout__FiiUc(int i,int md,uchar backwards)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,md,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	cVar3 = monster[i]._mx;
	cVar4 = monster[i]._my;
	monster[i]._mmode = '\t';
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar3;
	monster[i]._moldy = cVar4;
	M_CheckEFlag__Fi(i);
	monster[i]._mdir = (char)md;
	if (backwards != '\0') {
		cVar1 = monster[i]._mAnimLen;
		monster[i]._mFlags = monster[i]._mFlags | 2;
		monster[i]._mAnimFrame = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartHeal__Fi(int i /*$a0*/)
 // line 1132, offset 0x80148d60
	/* begin block 1 */
		// Start line: 1133
		// Start offset: 0x80148D60
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80148DCC
	// End Line: 1144

	/* begin block 2 */
		// Start line: 2532
	/* end block 2 */
	// End Line: 2533

void M_StartHeal__Fi(int i)

{
	char cVar1;
	long lVar2;
	
	cVar1 = (monster[i].MType)->Anims[5].Frames;
	monster[i]._mFlags = monster[i]._mFlags | 2;
	monster[i]._mmode = '\x10';
	monster[i]._mAnimFrame = cVar1;
	lVar2 = random__Fil(0x5c,5);
	monster[i]._mVar1 = (short)((int)monster[i]._mmaxhp / ((lVar2 + 4) * 0x10));
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_ChangeLightOffset__Fi(int monst /*$a0*/)
 // line 1150, offset 0x80148de0
	/* begin block 1 */
		// Start line: 1151
		// Start offset: 0x80148DE0
		// Variables:
	// 		int lx; // $a1
	// 		int ly; // $v1
	// 		int sign; // $v0
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mxoff; // $v0
	// 		int _myoff; // $v1
	/* end block 1 */
	// End offset: 0x80148E70
	// End Line: 1186

	/* begin block 2 */
		// Start line: 2586
	/* end block 2 */
	// End Line: 2587

void M_ChangeLightOffset__Fi(int monst)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = (int)monster[monst]._myoff * 2;
	iVar4 = (int)monster[monst]._mxoff + iVar3;
	iVar3 = iVar3 - (int)monster[monst]._mxoff;
	if (iVar4 < 0) {
		iVar1 = -1;
		iVar4 = -iVar4;
	}
	else {
		iVar1 = 1;
	}
	iVar2 = 1;
	if (iVar3 < 0) {
		iVar2 = -1;
		iVar3 = -iVar3;
	}
	ChangeLightOff__Fiii((uint)monster[monst].mlid,(iVar4 >> 3) * iVar1,(iVar3 >> 3) * iVar2);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoStand__Fi(int i /*$a0*/)
 // line 1192, offset 0x80148e80
	/* begin block 1 */
		// Start line: 1193
		// Start offset: 0x80148E80
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80148ED4
	// End Line: 1211

	/* begin block 2 */
		// Start line: 2672
	/* end block 2 */
	// End Line: 2673

int M_DoStand__Fi(int i)

{
	if (monster[i]._mAnimFrame == monster[i]._mAnimLen) {
		M_Enemy__Fi(i);
	}
	monster[i]._mVar2 = monster[i]._mVar2 + 1;
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoWalk__Fi(int i /*$s1*/)
 // line 1217, offset 0x80148ee8
	/* begin block 1 */
		// Start line: 1218
		// Start offset: 0x80148EE8
		// Variables:
	// 		int rv; // $s0
	/* end block 1 */
	// End offset: 0x80149154
	// End Line: 1249

	/* begin block 2 */
		// Start line: 2732
	/* end block 2 */
	// End Line: 2733

int M_DoWalk__Fi(int i)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	ushort uVar5;
	ushort uVar6;
	char cVar7;
	int iVar8;
	
	if ((int)monster[i]._mVar8 == (int)(monster[i].MType)->Anims[1].Frames) {
		dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = 0;
		cVar1 = monster[i]._mx;
		cVar2 = *(char *)&monster[i]._mVar1;
		cVar7 = monster[i]._my + *(char *)&monster[i]._mVar2;
		monster[i]._my = cVar7;
		monster[i]._mx = cVar1 + cVar2;
		dung_map[(int)monster[i]._mx * 0x6c + (int)cVar7].dMonster = (short)i + 1;
		if (monster[i]._uniqtype != '\0') {
			ChangeLightXY__Fiii((uint)monster[i].mlid,(int)monster[i]._mx,(int)monster[i]._my);
		}
		iVar8 = 1;
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	else {
		if (monster[i]._mAnimCnt == '\0') {
			monster[i]._mVar8 = monster[i]._mVar8 + 1;
			sVar3 = monster[i]._mVar7;
			sVar4 = monster[i]._myvel;
			monster[i]._mVar6 = monster[i]._mVar6 + monster[i]._mxvel;
			uVar5 = monster[i]._mVar6;
			monster[i]._mVar7 = sVar3 + sVar4;
			uVar6 = monster[i]._mVar7;
			monster[i]._mxoff = (char)(uVar5 >> 4);
			monster[i]._myoff = (char)(uVar6 >> 4);
		}
		iVar8 = 0;
	}
	if (monster[i]._uniqtype != '\0') {
		M_ChangeLightOffset__Fi(i);
	}
	return iVar8;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoWalk2__Fi(int i /*$s1*/)
 // line 1255, offset 0x8014916c
	/* begin block 1 */
		// Start line: 1256
		// Start offset: 0x8014916C
		// Variables:
	// 		int rv; // $s0
	/* end block 1 */
	// End offset: 0x80149340
	// End Line: 1283

	/* begin block 2 */
		// Start line: 2829
	/* end block 2 */
	// End Line: 2830

int M_DoWalk2__Fi(int i)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	ushort uVar4;
	int iVar5;
	
	if ((int)monster[i]._mVar8 == (int)(monster[i].MType)->Anims[1].Frames) {
		dung_map[(int)monster[i]._mVar1 * 0x6c + (int)monster[i]._mVar2].dMonster = 0;
		if (monster[i]._uniqtype != '\0') {
			ChangeLightXY__Fiii((uint)monster[i].mlid,(int)monster[i]._mx,(int)monster[i]._my);
		}
		iVar5 = 1;
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	else {
		if (monster[i]._mAnimCnt == '\0') {
			monster[i]._mVar8 = monster[i]._mVar8 + 1;
			sVar1 = monster[i]._mVar7;
			sVar2 = monster[i]._myvel;
			monster[i]._mVar6 = monster[i]._mVar6 + monster[i]._mxvel;
			uVar3 = monster[i]._mVar6;
			monster[i]._mVar7 = sVar1 + sVar2;
			uVar4 = monster[i]._mVar7;
			monster[i]._mxoff = (char)(uVar3 >> 4);
			monster[i]._myoff = (char)(uVar4 >> 4);
		}
		iVar5 = 0;
	}
	if (monster[i]._uniqtype != '\0') {
		M_ChangeLightOffset__Fi(i);
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoWalk3__Fi(int i /*$s1*/)
 // line 1289, offset 0x80149358
	/* begin block 1 */
		// Start line: 1290
		// Start offset: 0x80149358
		// Variables:
	// 		int rv; // $s0
	/* end block 1 */
	// End offset: 0x80149604
	// End Line: 1321

	/* begin block 2 */
		// Start line: 2915
	/* end block 2 */
	// End Line: 2916

int M_DoWalk3__Fi(int i)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	ushort uVar4;
	int iVar5;
	
	if ((int)monster[i]._mVar8 == (int)(monster[i].MType)->Anims[1].Frames) {
		dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = 0;
		sVar2 = monster[i]._mVar2;
		sVar1 = monster[i]._mVar5;
		monster[i]._mx = (char)monster[i]._mVar1;
		monster[i]._my = (char)sVar2;
		dung_map[(int)monster[i]._mVar4 * 0x6c + (int)sVar1].dFlags =
				 dung_map[(int)monster[i]._mVar4 * 0x6c + (int)sVar1].dFlags & 0xef;
		dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = (short)i + 1;
		if (monster[i]._uniqtype != '\0') {
			ChangeLightXY__Fiii((uint)monster[i].mlid,(int)monster[i]._mx,(int)monster[i]._my);
		}
		iVar5 = 1;
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	else {
		if (monster[i]._mAnimCnt == '\0') {
			monster[i]._mVar8 = monster[i]._mVar8 + 1;
			sVar1 = monster[i]._mVar7;
			sVar2 = monster[i]._myvel;
			monster[i]._mVar6 = monster[i]._mVar6 + monster[i]._mxvel;
			uVar3 = monster[i]._mVar6;
			monster[i]._mVar7 = sVar1 + sVar2;
			uVar4 = monster[i]._mVar7;
			monster[i]._mxoff = (char)(uVar3 >> 4);
			monster[i]._myoff = (char)(uVar4 >> 4);
		}
		iVar5 = 0;
	}
	if (monster[i]._uniqtype != '\0') {
		M_ChangeLightOffset__Fi(i);
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_TryM2MHit__Fiiiii(int i /*$s3*/, int mid /*$s1*/, int hper /*$s6*/, int mind /*$s5*/, int maxd /*stack 16*/)
 // line 1327, offset 0x8014961c
	/* begin block 1 */
		// Start line: 1328
		// Start offset: 0x8014961C
		// Variables:
	// 		int hit; // $s2
	// 		int dam; // $a2
	// 		unsigned char ret; // stack offset -48
	/* end block 1 */
	// End offset: 0x801497B4
	// End Line: 1364

	/* begin block 2 */
		// Start line: 3012
	/* end block 2 */
	// End Line: 3013

void M_TryM2MHit__Fiiiii(int i,int mid,int hper,int mind,int maxd)

{
	uchar uVar1;
	long lVar2;
	int iVar3;
	int dam;
	uchar auStack48 [8];
	
	if ((0 < (int)((uint)(ushort)monster[mid]._mhitpoints << 0x10) >> 0x16) &&
		 (((monster[mid].MType)->mtype != ' ' || (monster[mid]._mgoal != '\x02')))) {
		lVar2 = random__Fil(4,100);
		if (monster[mid]._mmode == '\x0f') {
			lVar2 = 0;
		}
		uVar1 = CheckMonsterHit__FiRUc(mid,auStack48);
		if ((uVar1 == '\0') && (lVar2 < hper)) {
			lVar2 = random__Fil(5,(maxd - mind) + 1);
			dam = (lVar2 + mind) * 0x40;
			iVar3 = (uint)(ushort)monster[mid]._mhitpoints + (lVar2 + mind) * -0x40;
			monster[mid]._mhitpoints = (short)iVar3;
			if (iVar3 * 0x10000 >> 0x16 < 1) {
				if (monster[mid]._mmode != '\x0f') {
					M2MStartKill__Fii(i,mid);
					return;
				}
				M2MStartKill__Fii(i,mid);
			}
			else {
				if (monster[mid]._mmode != '\x0f') {
					M2MStartHit__Fiii(mid,i,dam);
					return;
				}
				M2MStartHit__Fiii(mid,i,dam);
			}
			monster[mid]._mmode = '\x0f';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_TryH2HHit__Fiiiii(int i /*$s2*/, int pnum /*$s3*/, int Hit /*$s6*/, int MinDam /*$s5*/, int MaxDam /*stack 16*/)
 // line 1370, offset 0x801497e4
	/* begin block 1 */
		// Start line: 1371
		// Start offset: 0x801497E4
		// Variables:
	// 		struct PlayerStruct *ptrplr; // $s1
	// 		int hit; // $s6
	// 		int hper; // $s0
	// 		int tac; // $a0
	// 		long dam; // $s0
	// 		int dx; // $s0
	// 		int dy; // $v0
	// 		int blk; // $a2
	// 		int blkper; // $v1
	// 		int mdam; // $a2
	// 		struct MonsterStruct *pMonster; // $v0
	// 		int _mx; // stack offset -56
	// 		int _my; // stack offset -48
	// 		int _px; // $s7
	// 		int _py; // $fp

		/* begin block 1.1 */
			// Start line: 1403
			// Start offset: 0x801498E8

			/* begin block 1.1.1 */
				// Start line: 1405
				// Start offset: 0x80149914

				/* begin block 1.1.1.1 */
					// Start line: 1424
					// Start offset: 0x80149A84

					/* begin block 1.1.1.1.1 */
						// Start line: 1424
						// Start offset: 0x80149A8C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1425
							// Start offset: 0x80149A8C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1428
								// Start offset: 0x80149AB8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1469
									// Start offset: 0x80149C9C

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1472
										// Start offset: 0x80149CC0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1473
											// Start offset: 0x80149CC0

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1475
												// Start offset: 0x80149CF4
												// Variables:
											// 		int newx; // $s2
											// 		int newy; // $s0
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80149DC4
											// End Line: 1494
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80149DC4
										// End Line: 1494
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80149DC4
									// End Line: 1494
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80149DC4
								// End Line: 1494
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80149DC4
							// End Line: 1494
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80149DC4
						// End Line: 1494
					/* end block 1.1.1.1.1 */
					// End offset: 0x80149DC4
					// End Line: 1494
				/* end block 1.1.1.1 */
				// End offset: 0x80149DC4
				// End Line: 1494
			/* end block 1.1.1 */
			// End offset: 0x80149DC4
			// End Line: 1494
		/* end block 1.1 */
		// End offset: 0x80149DC4
		// End Line: 1494
	/* end block 1 */
	// End offset: 0x80149DC4
	// End Line: 1494

	/* begin block 2 */
		// Start line: 3124
	/* end block 2 */
	// End Line: 3125

void M_TryH2HHit__Fiiiii(int i,int pnum,int Hit,int MinDam,int MaxDam)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int dam;
	int iVar4;
	long lVar5;
	int iVar6;
	long lVar7;
	PlayerStruct *ptrplr;
	int px;
	int py;
	
	ptrplr = plr + pnum;
	if ((monster[i]._mFlags & 0x10) == 0) {
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		px = (int)plr[pnum]._px;
		py = (int)plr[pnum]._py;
		if (((0 < plr[pnum]._pHitPoints >> 6) && (plr[pnum]._pInvincible == '\0')) &&
			 ((plr[pnum]._pSpellFlags & 1U) == 0)) {
			dam = abs((int)cVar1 - px);
			iVar4 = abs((int)cVar2 - py);
			if ((dam < 2) && (iVar4 < 2)) {
				lVar5 = random__Fil(0x62,100);
				iVar4 = (uint)(ushort)plr[pnum]._pDexterity << 0x10;
				dam = iVar4 >> 0x10;
				dam = (Hit - (plr[pnum]._pIAC + plr[pnum]._pIBonusAC +
											(((dam / 5 + (dam >> 0x1f)) - (iVar4 >> 0x1f)) * 0x10000 >> 0x10) + -0x1e)) +
							((int)monster[i].mLevel - (int)plr[pnum]._pLevel) * 2;
				if (dam < 0xf) {
					dam = 0xf;
				}
				if ((currlevel == '\x0e') && (dam < 0x14)) {
					dam = 0x14;
				}
				if ((currlevel == '\x0f') && (dam < 0x19)) {
					dam = 0x19;
				}
				if ((currlevel == '\x10') && (dam < 0x1e)) {
					dam = 0x1e;
				}
				if ((ptrplr->_pmode == 0) || (lVar7 = 100, ptrplr->_pmode == 4)) {
					if (plr[pnum]._pBlockFlag == '\0') {
						lVar7 = 100;
					}
					else {
						lVar7 = random__Fil(0x62,100);
					}
				}
				iVar6 = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity +
								((int)monster[i].mLevel - (int)plr[pnum]._pLevel) * -2;
				iVar4 = iVar6;
				if (iVar6 < 0) {
					iVar4 = 0;
				}
				if (100 < iVar6) {
					iVar4 = 100;
				}
				if (lVar5 < dam) {
					if (lVar7 < iVar4) {
						py = GetDirection__Fiiii(px,py,(int)cVar1,(int)cVar2);
						StartPlrBlock__FP12PlayerStructi(ptrplr,py);
					}
					else {
						lVar5 = random__Fil(99,((MaxDam - MinDam) + 1) * 0x40);
						dam = lVar5 + MinDam * 0x40 + plr[pnum]._pIGetHit * 0x40;
						if (dam < 0x40) {
							dam = 0x40;
						}
						iVar4 = plr[pnum]._pHPBase;
						plr[pnum]._pHitPoints = plr[pnum]._pHitPoints - dam;
						plr[pnum]._pHPBase = iVar4 - dam;
						if ((((monster[i].MType)->mtype == '\x03') && (pnum == myplr)) &&
							 (iVar4 = plr[pnum]._pMaxHP + -0x40, 0x40 < plr[pnum]._pMaxHP)) {
							iVar6 = plr[pnum]._pHitPoints;
							plr[pnum]._pMaxHP = iVar4;
							if (iVar4 < iVar6) {
								plr[pnum]._pHitPoints = iVar4;
							}
							iVar4 = plr[pnum]._pHPBase;
							iVar6 = plr[pnum]._pMaxHPBase + -0x40;
							plr[pnum]._pMaxHPBase = iVar6;
							if (iVar6 < iVar4) {
								plr[pnum]._pHPBase = iVar6;
							}
						}
						if ((plr[pnum]._pIFlags & 0x4000000U) != 0) {
							lVar5 = random__Fil(99,3);
							iVar4 = (uint)(ushort)monster[i]._mhitpoints + (lVar5 + 1) * -0x40;
							monster[i]._mhitpoints = (short)iVar4;
							if (iVar4 * 0x10000 >> 0x16 < 1) {
								M_StartKill__Fii(i,pnum);
							}
							else {
								M_StartHit__Fiii(i,pnum,(lVar5 + 1) * 0x40);
							}
						}
						if ((((monster[i]._mFlags & 0x1000) == 0) && ((monster[i].MType)->mtype == '2')) &&
							 (gbMaxPlayers != '\x01')) {
							monster[i]._mhitpoints = monster[i]._mhitpoints + (short)dam;
						}
						if (plr[pnum]._pMaxHP < plr[pnum]._pHitPoints) {
							lVar5 = plr[pnum]._pMaxHPBase;
							plr[pnum]._pHitPoints = plr[pnum]._pMaxHP;
							plr[pnum]._pHPBase = lVar5;
						}
						if (plr[pnum]._pHitPoints >> 6 < 1) {
							StartPlrKill__FP12PlayerStructi(ptrplr,0);
						}
						else {
							StartPlrHit__FP12PlayerStructiUc(ptrplr,dam,'\0');
							if ((monster[i]._mFlags & 0x80) != 0) {
								if (plr[pnum]._pmode != 7) {
									StartPlrHit__FiiUc(pnum,0,'\x01');
								}
								px = px + (int)offset_x[(int)monster[i]._mdir];
								py = py + (int)offset_y[(int)monster[i]._mdir];
								uVar3 = PosOkPlayer__FP12PlayerStructii(ptrplr,px,py);
								if (uVar3 != '\0') {
									plr[pnum]._px = (short)px;
									plr[pnum]._py = (short)py;
									dung_map[px * 0x6c + py].dPlayer = (char)pnum + '\x01';
									SetPlayerOld__FP12PlayerStruct(ptrplr);
								}
							}
						}
					}
				}
			}
		}
	}
	else {
		M_TryM2MHit__Fiiiii(i,pnum,Hit,MinDam,MaxDam);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoAttack__Fi(int i /*$s1*/)
 // line 1506, offset 0x80149df8
	/* begin block 1 */
		// Start line: 1507
		// Start offset: 0x80149DF8
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		unsigned char mMinDamage; // $s5
	// 		unsigned char mMaxDamage; // $s3
	// 		unsigned char mHit; // $s4
	// 		int _menemy; // $s2
	/* end block 1 */
	// End offset: 0x80149F74
	// End Line: 1546

	/* begin block 2 */
		// Start line: 3462
	/* end block 2 */
	// End Line: 3463

int M_DoAttack__Fi(int i)

{
	bool bVar1;
	char cVar2;
	int pnum;
	uint MaxDam;
	uint Hit;
	uint MinDam;
	
	MinDam = (uint)monster[i].mMinDamage;
	MaxDam = (uint)monster[i].mMaxDamage;
	Hit = (uint)monster[i].mHit;
	pnum = (int)monster[i]._menemy;
	if ((int)monster[i]._mAnimFrame == (uint)(monster[i].MData)->mAFNum) {
		M_TryH2HHit__Fiiiii(i,pnum,Hit,MinDam,MaxDam);
		if (monster[i]._mAi != '\x18') {
			PlayEffect__Fii(i,0);
		}
	}
	if (((uint)(monster[i].MType)->mtype - 0x3c < 4) && (monster[i]._mAnimFrame == '\t')) {
		M_TryH2HHit__Fiiiii(i,pnum,Hit + 10,MinDam - 2,MaxDam - 2);
		PlayEffect__Fii(i,0);
	}
	if (((uint)(monster[i].MType)->mtype - 0x4c < 4) && (monster[i]._mAnimFrame == '\r')) {
		M_TryH2HHit__Fiiiii(i,pnum,Hit - 0x14,MinDam + 4,MaxDam + 4);
		PlayEffect__Fii(i,0);
	}
	if (monster[i]._mAi == '\x18') {
		cVar2 = monster[i]._mAnimFrame;
		if (cVar2 != '\x01') goto LAB_80149f54;
		PlayEffect__Fii(i,0);
	}
	cVar2 = monster[i]._mAnimFrame;
LAB_80149f54:
	bVar1 = cVar2 == monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoRAttack__Fi(int i /*$s2*/)
 // line 1553, offset 0x80149f9c
	/* begin block 1 */
		// Start line: 1554
		// Start offset: 0x80149F9C
		// Variables:
	// 		int multimissiles; // $s3
	// 		int mi; // $s1
	/* end block 1 */
	// End offset: 0x8014A0F4
	// End Line: 1576

	/* begin block 2 */
		// Start line: 3598
	/* end block 2 */
	// End Line: 3599

int M_DoRAttack__Fi(int i)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if ((int)monster[i]._mAnimFrame == (uint)(monster[i].MData)->mAFNum) {
		if (monster[i]._mVar1 != -1) {
			iVar3 = 1;
			if (monster[i]._mVar1 == 0x34) {
				iVar3 = 3;
			}
			iVar2 = 0;
			if (iVar3 != 0) {
				do {
					iVar2 = iVar2 + 1;
					AddMissile__Fiiiiiiciii
										((int)monster[i]._mx,(int)monster[i]._my,(uint)monster[i]._menemyx,
										 (uint)monster[i]._menemyy,(int)monster[i]._mdir,(int)monster[i]._mVar1,1,i,
										 (int)monster[i]._mVar2,0);
				} while (iVar2 < iVar3);
			}
		}
		PlayEffect__Fii(i,0);
	}
	bVar1 = monster[i]._mAnimFrame == monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoRSpAttack__Fi(int i /*$s0*/)
 // line 1583, offset 0x8014a114
	/* begin block 1 */
		// Start line: 1584
		// Start offset: 0x8014A114
	/* end block 1 */
	// End offset: 0x8014A2F0
	// End Line: 1606

	/* begin block 2 */
		// Start line: 3666
	/* end block 2 */
	// End Line: 3667

int M_DoRSpAttack__Fi(int i)

{
	bool bVar1;
	short sVar2;
	ushort uVar3;
	
	if (((int)monster[i]._mAnimFrame == (uint)(monster[i].MData)->mAFNum2) &&
		 (monster[i]._mAnimCnt == '\0')) {
		AddMissile__Fiiiiiiciii
							((int)monster[i]._mx,(int)monster[i]._my,(uint)monster[i]._menemyx,
							 (uint)monster[i]._menemyy,(int)monster[i]._mdir,(int)monster[i]._mVar1,1,i,
							 (int)monster[i]._mVar3,0);
		PlayEffect__Fii(i,3);
	}
	if ((monster[i]._mAi == '\x1a') && (monster[i]._mAnimFrame == '\x03')) {
		sVar2 = monster[i]._mVar2 + 1;
		monster[i]._mVar2 = sVar2;
		if (sVar2 == 1) {
			uVar3 = monster[i]._mFlags | 4;
		}
		else {
			if (monster[i]._mVar2 != 0xf) goto LAB_8014a2ac;
			uVar3 = monster[i]._mFlags & 0xfffb;
		}
		monster[i]._mFlags = uVar3;
	}
LAB_8014a2ac:
	bVar1 = monster[i]._mAnimFrame == monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoSAttack__Fi(int i /*$s1*/)
 // line 1613, offset 0x8014a304
	/* begin block 1 */
		// Start line: 1614
		// Start offset: 0x8014A304
	/* end block 1 */
	// End offset: 0x8014A3C0
	// End Line: 1624

	/* begin block 2 */
		// Start line: 3732
	/* end block 2 */
	// End Line: 3733

int M_DoSAttack__Fi(int i)

{
	bool bVar1;
	uint uVar2;
	
	uVar2 = SEXT14(monster[i]._mAnimFrame);
	if (uVar2 == (uint)(monster[i].MData)->mAFNum2) {
		M_TryH2HHit__Fiiiii(i,(int)monster[i]._menemy,(uint)monster[i].mHit2,
												(uint)monster[i].mMinDamage2,(uint)monster[i].mMaxDamage2);
		uVar2 = SEXT14(monster[i]._mAnimFrame);
	}
	bVar1 = uVar2 == (int)monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoFadein__Fi(int i /*$a0*/)
 // line 1631, offset 0x8014a3d8
	/* begin block 1 */
		// Start line: 1632
		// Start offset: 0x8014A3D8
	/* end block 1 */
	// End offset: 0x8014A494
	// End Line: 1641

	/* begin block 2 */
		// Start line: 3780
	/* end block 2 */
	// End Line: 3781

int M_DoFadein__Fi(int i)

{
	if ((monster[i]._mFlags & 2) == 0) {
		if (monster[i]._mAnimFrame != monster[i]._mAnimLen) {
			return 0;
		}
	}
	else {
		if (monster[i]._mAnimFrame != '\x01') {
			return 0;
		}
	}
	M_StartStand__Fii(i,(int)monster[i]._mdir);
	monster[i]._mFlags = monster[i]._mFlags & 0xfffd;
	return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoFadeout__Fi(int i /*$a0*/)
 // line 1647, offset 0x8014a4a8
	/* begin block 1 */
		// Start line: 1648
		// Start offset: 0x8014A4A8
		// Variables:
	// 		int mtype; // $v0
	/* end block 1 */
	// End offset: 0x8014A5AC
	// End Line: 1666

	/* begin block 2 */
		// Start line: 3816
	/* end block 2 */
	// End Line: 3817

int M_DoFadeout__Fi(int i)

{
	ushort uVar1;
	
	if ((monster[i]._mFlags & 2) == 0) {
		if (monster[i]._mAnimFrame != monster[i]._mAnimLen) {
			return 0;
		}
	}
	else {
		if (monster[i]._mAnimFrame != '\x01') {
			return 0;
		}
	}
	if ((uint)(monster[i].MType)->mtype - 0x48 < 4) {
		uVar1 = monster[i]._mFlags & 0xfffd;
	}
	else {
		uVar1 = monster[i]._mFlags & 0xfffd | 1;
	}
	monster[i]._mFlags = uVar1;
	M_StartStand__Fii(i,(int)monster[i]._mdir);
	return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoHeal__Fi(int i /*$a0*/)
 // line 1672, offset 0x8014a5bc
	/* begin block 1 */
		// Start line: 1673
		// Start offset: 0x8014A5BC
		// Variables:
	// 		struct MonsterStruct *Monst; // $a1
	/* end block 1 */
	// End offset: 0x8014A65C
	// End Line: 1693

	/* begin block 2 */
		// Start line: 3871
	/* end block 2 */
	// End Line: 3872

int M_DoHeal__Fi(int i)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	
	if (((monster[i]._mFlags & 8) == 0) && (monster[i]._mAnimFrame == '\x01')) {
		sVar1 = monster[i]._mVar1;
		sVar2 = monster[i]._mmaxhp;
		monster[i]._mFlags = monster[i]._mFlags & 0xfffd | 4;
		if ((int)monster[i]._mhitpoints + (int)sVar1 < (int)sVar2) {
			monster[i]._mhitpoints = monster[i]._mhitpoints + sVar1;
		}
		else {
			uVar3 = monster[i]._mFlags;
			monster[i]._mhitpoints = sVar2;
			monster[i]._mmode = '\a';
			monster[i]._mFlags = uVar3 & 0xfffb;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoTalk__Fi(int i /*$s2*/)
 // line 1699, offset 0x8014a668
	/* begin block 1 */
		// Start line: 1700
		// Start offset: 0x8014A668
		// Variables:
	// 		int tren; // $s0
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s5
	// 		int _my; // $s4
	// 		int mType; // $s3
	/* end block 1 */
	// End offset: 0x8014AAAC
	// End Line: 1790

	/* begin block 2 */
		// Start line: 3930
	/* end block 2 */
	// End Line: 3931

int M_DoTalk__Fi(int i)

{
	uchar uVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = (int)monster[i]._mx;
	iVar5 = (int)monster[i]._my;
	uVar1 = (monster[i].MType)->mtype;
	M_StartStand__Fii(i,(int)monster[i]._mdir);
	monster[i]._mgoal = '\a';
	uVar3 = effect_is_playing__Fi(alltext[monster[i].mtalkmsg].sfxnr);
	if (uVar3 == '\0') {
		InitQTextMsg__Fi(monster[i].mtalkmsg);
		if (uVar1 == '\"') {
			if (monster[i].mtalkmsg == 0x90) {
				QuestStruct_ARRAY_800e33a0[1]._qactive = '\x02';
			}
			QuestStruct_ARRAY_800e33a0[1]._qlog = '\x01';
			if ((monster[i].mtalkmsg == 0x91) && ((monster[i]._mFlags & 0x40) == 0)) {
				SpawnItem__FiiiUc(i,iVar6 + 1,iVar5 + 1,'\x01');
				monster[i]._mFlags = monster[i]._mFlags | 0x40;
			}
		}
		if (((uVar1 == 'i') && (monster[i].mtalkmsg == 0x94)) && ((monster[i]._mFlags & 0x40) == 0)) {
			QuestStruct_ARRAY_800e33a0[2]._qactive = '\x02';
			QuestStruct_ARRAY_800e33a0[2]._qlog = '\x01';
			CreateTypeItem__FiiUciiUcUc(iVar6 + 1,iVar5 + 1,'\0',0,0x18,1,0);
			monster[i]._mFlags = monster[i]._mFlags | 0x40;
		}
		if (((uVar1 == '\a') && (monster[i].mtalkmsg == 0x14)) && ((monster[i]._mFlags & 0x40) == 0)) {
			ObjChangeMap__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 2,setpc_y + (setpc_h >> 1) + -2
												 );
			cVar2 = TransVal;
			TransVal = '\t';
			DRLG_MRectTrans__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 4,setpc_y + (setpc_h >> 1));
			QuestStruct_ARRAY_800e3404[1]._qvar1 = '\x02';
			if (QuestStruct_ARRAY_800e3404[1]._qactive == '\x01') {
				QuestStruct_ARRAY_800e3404[1]._qactive = '\x02';
			}
			TransVal = cVar2;
			monster[i]._mFlags = monster[i]._mFlags | 0x40;
		}
		if (uVar1 == '`') {
			iVar4 = monster[i].mtalkmsg;
			if (iVar4 == 0x51) {
				QuestStruct_ARRAY_800e33dc[0]._qactive = '\x02';
				QuestStruct_ARRAY_800e33dc[0]._qlog = '\x01';
				iVar4 = monster[i].mtalkmsg;
			}
			if ((iVar4 == 0x53) && ((monster[i]._mFlags & 0x40) == 0)) {
				SpawnUnique__Fiii(6,iVar6 + 1,iVar5 + 1);
				monster[i]._mFlags = monster[i]._mFlags | 0x40;
			}
		}
		if (uVar1 == '_') {
			QuestStruct_ARRAY_800e3404[5]._qvar1 = '\x02';
		}
		if (uVar1 == 'l') {
			QuestStruct_800e34b8._qvar1 = '\x06';
			monster[i]._mgoal = '\x01';
			monster[i]._msquelch = -1;
			monster[i].mtalkmsg = 0;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_Teleport__Fi(int i /*$fp*/)
 // line 1799, offset 0x8014aad4
	/* begin block 1 */
		// Start line: 1800
		// Start offset: 0x8014AAD4
		// Variables:
	// 		struct MonsterStruct *Monst; // $s7
	// 		unsigned char done; // $s6
	// 		int mulx; // stack offset -64
	// 		int muly; // $v1
	// 		int x; // $s3
	// 		int y; // $s4
	// 		int a; // $s2
	// 		int b; // $s0
	// 		int px; // $s0
	// 		int py; // stack offset -56
	/* end block 1 */
	// End offset: 0x8014ACD4
	// End Line: 1844

	/* begin block 2 */
		// Start line: 4155
	/* end block 2 */
	// End Line: 4156

void M_Teleport__Fi(int i)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	uchar uVar4;
	long lVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	uint y;
	int iVar9;
	uint uVar10;
	uint uVar11;
	uint x;
	
	bVar3 = false;
	uVar11 = 0;
	uVar10 = 0;
	if (monster[i]._mmode != '\x0f') {
		bVar1 = monster[i]._menemyx;
		bVar2 = monster[i]._menemyy;
		lVar5 = random__Fil(100,2);
		iVar6 = lVar5 * 2 + -1;
		lVar5 = random__Fil(100,2);
		iVar7 = lVar5 * 2 + -1;
		iVar9 = -1;
		x = (uint)bVar1 - iVar6;
		do {
			iVar8 = -1;
			if (!bVar3) {
				y = (uint)bVar2 - iVar7;
				do {
					if (((((iVar9 != 0) || (iVar8 != 0)) && (uVar10 = x, uVar11 = y, y < 0x5e)) &&
							((uVar10 = x, uVar11 = y, x < 0x5e &&
							 (uVar10 = x, uVar11 = y, x != (int)monster[i]._mx)))) &&
						 (uVar10 = x, uVar11 = y, y != (int)monster[i]._my)) {
						uVar4 = PosOkMonst__Fiii(i,x,y);
						uVar10 = x;
						uVar11 = y;
						if (uVar4 != '\0') {
							bVar3 = true;
							uVar10 = x;
							uVar11 = y;
						}
					}
					iVar8 = iVar8 + 1;
					y = y + iVar7;
				} while ((iVar8 < 1) && (!bVar3));
			}
			iVar9 = iVar9 + 1;
			x = x + iVar6;
		} while ((iVar9 < 2) && (!bVar3));
		if (bVar3) {
			M_ClearSquares__Fi(i);
			dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = 0;
			dung_map[uVar10 * 0x6c + uVar11].dMonster = (short)i + 1;
			monster[i]._moldx = (char)uVar10;
			monster[i]._moldy = (char)uVar11;
			iVar6 = M_GetDir__Fi(i);
			monster[i]._mdir = (char)iVar6;
			M_CheckEFlag__Fi(i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoGotHit__Fi(int i /*$a0*/)
 // line 1851, offset 0x8014ad08
	/* begin block 1 */
		// Start line: 1852
		// Start offset: 0x8014AD08
	/* end block 1 */
	// End offset: 0x8014AD58
	// End Line: 1860

	/* begin block 2 */
		// Start line: 4290
	/* end block 2 */
	// End Line: 4291

int M_DoGotHit__Fi(int i)

{
	bool bVar1;
	
	bVar1 = monster[i]._mAnimFrame == monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoEnding__Fv()
 // line 1871, offset 0x8014ad68
	/* begin block 1 */
		// Start line: 1872
		// Start offset: 0x8014AD68
		// Variables:
	// 		unsigned char bMusicOn; // $s0
	/* end block 1 */
	// End offset: 0x8014AE0C
	// End Line: 1915

	/* begin block 2 */
		// Start line: 4351
	/* end block 2 */
	// End Line: 4352

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoEnding__Fv(void)

{
	uchar uVar1;
	
	play_movie("DIABVIC1.MOV");
	play_movie("DIABEND.MOV");
	uVar1 = gbMusicOn;
	gbMusicOn = '\x01';
	play_movie("LOOPEND.MOV");
	music_stop__Fv();
	user_start = &DAT_00000001;
	gbMusicOn = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrepDoEnding__Fv()
 // line 1920, offset 0x8014ae20
	/* begin block 1 */
		// Start line: 1921
		// Start offset: 0x8014AE20

		/* begin block 1.1 */
			// Start line: 1932
			// Start offset: 0x8014AE9C
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x8014AF3C
		// End Line: 1943
	/* end block 1 */
	// End offset: 0x8014AF3C
	// End Line: 1943

	/* begin block 2 */
		// Start line: 4470
	/* end block 2 */
	// End Line: 4471

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrepDoEnding__Fv(void)

{
	uchar uVar1;
	long *plVar2;
	int iVar3;
	uint uVar4;
	long *plVar5;
	int iVar6;
	
	gbRunGame = '\0';
	deathflag = '\0';
	gbDoEnding = '\x01';
	gbSoundOn = sgbSaveSoundOn;
	uVar4 = plr[myplr].pDiabloKillLevel;
	if (plr[myplr].pDiabloKillLevel < gnDifficulty + 1U) {
		uVar4 = gnDifficulty + 1U;
	}
	plr[myplr].pDiabloKillLevel = uVar4;
	iVar6 = 0;
	plVar2 = &plr[0]._pMana;
	plVar5 = &plr[0]._pHitPoints;
	iVar3 = 0;
	do {
		(&plr[0]._pInvincible)[iVar3] = '\x01';
		uVar1 = gbMaxPlayers;
		*(undefined4 *)((int)&plr[0]._pmode + iVar3) = 0xb;
		if (1 < uVar1) {
			if (*plVar5 >> 6 == 0) {
				*plVar5 = 0x40;
			}
			if (*plVar2 >> 6 == 0) {
				*plVar2 = 0x40;
			}
		}
		plVar2 = plVar2 + 0x8ea;
		plVar5 = plVar5 + 0x8ea;
		iVar6 = iVar6 + 1;
		iVar3 = iVar3 + 0x23a8;
	} while (iVar6 < 2);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoDeath__Fi(int i /*$s2*/)
 // line 1949, offset 0x8014af44
	/* begin block 1 */
		// Start line: 1950
		// Start offset: 0x8014AF44
		// Variables:
	// 		struct MonsterStruct *pMonster; // $v1
	// 		int _mx; // $s0
	// 		int _my; // $s1
	/* end block 1 */
	// End offset: 0x8014B0F8
	// End Line: 1980

	/* begin block 2 */
		// Start line: 4560
	/* end block 2 */
	// End Line: 4561

int M_DoDeath__Fi(int i)

{
	char dv;
	int dx;
	int dy;
	
	monster[i]._mVar1 = monster[i]._mVar1 + 1;
	dx = (int)monster[i]._mx;
	dy = (int)monster[i]._my;
	if ((monster[i].MType)->mtype == 'n') {
		if (dx - ViewX < 0) {
			ViewX = ViewX + -1;
		}
		else {
			ViewX = ViewX + (uint)(0 < dx - ViewX);
		}
		if (dy - ViewY < 0) {
			ViewY = ViewY + -1;
		}
		else {
			ViewY = ViewY + (uint)(0 < dy - ViewY);
		}
		if (monster[i]._mVar1 == 0x8c) {
			PrepDoEnding__Fv();
		}
	}
	else {
		if (monster[i]._mAnimFrame == monster[i]._mAnimLen) {
			if (monster[i]._uniqtype == '\0') {
				dv = (monster[i].MType)->mdeadval;
			}
			else {
				dv = monster[i]._udeadval;
			}
			AddDead__Fiici(dx,dy,dv,(int)monster[i]._mdir);
			dung_map[dx * 0x6c + dy].dMonster = 0;
			monster[i]._mDelFlag = '\x01';
			M_UpdateLeader__Fi(i);
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoSpStand__Fi(int i /*$s1*/)
 // line 1986, offset 0x8014b114
	/* begin block 1 */
		// Start line: 1987
		// Start offset: 0x8014B114
	/* end block 1 */
	// End offset: 0x8014B1A0
	// End Line: 1997

	/* begin block 2 */
		// Start line: 4659
	/* end block 2 */
	// End Line: 4660

int M_DoSpStand__Fi(int i)

{
	bool bVar1;
	uint uVar2;
	
	uVar2 = SEXT14(monster[i]._mAnimFrame);
	if (uVar2 == (uint)(monster[i].MData)->mAFNum2) {
		PlayEffect__Fii(i,3);
		uVar2 = SEXT14(monster[i]._mAnimFrame);
	}
	bVar1 = uVar2 == (int)monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoDelay__Fi(int i /*$s0*/)
 // line 2001, offset 0x8014b1b8
	/* begin block 1 */
		// Start line: 2002
		// Start offset: 0x8014B1B8

		/* begin block 1.1 */
			// Start line: 2014
			// Start offset: 0x8014B220

			/* begin block 1.1.1 */
				// Start line: 2014
				// Start offset: 0x8014B25C
				// Variables:
			// 		int tmp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8014B25C
			// End Line: 2021
		/* end block 1.1 */
		// End offset: 0x8014B290
		// End Line: 2021
	/* end block 1 */
	// End offset: 0x8014B290
	// End Line: 2021

	/* begin block 2 */
		// Start line: 4699
	/* end block 2 */
	// End Line: 4700

int M_DoDelay__Fi(int i)

{
	char cVar1;
	short sVar2;
	
	M_GetDir__Fi(i);
	if ((monster[i]._mAi == '\x1c') && (8 < (ushort)monster[i]._mVar2)) {
		monster[i]._mVar2 = 8;
	}
	sVar2 = monster[i]._mVar2 + -1;
	monster[i]._mVar2 = sVar2;
	if (sVar2 == -1) {
		cVar1 = monster[i]._mAnimFrame;
		M_StartStand__Fii(i,(int)monster[i]._mdir);
		monster[i]._mAnimFrame = cVar1;
	}
	return (uint)(sVar2 == -1);
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoStone__Fi(int i /*$a0*/)
 // line 2027, offset 0x8014b2a8
	/* begin block 1 */
		// Start line: 2028
		// Start offset: 0x8014B2A8
	/* end block 1 */
	// End offset: 0x8014B324
	// End Line: 2035

	/* begin block 2 */
		// Start line: 4757
	/* end block 2 */
	// End Line: 4758

int M_DoStone__Fi(int i)

{
	if (monster[i]._mhitpoints == 0) {
		dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = 0;
		monster[i]._mDelFlag = '\x01';
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_WalkDir__Fii(int i /*$a0*/, int md /*$a1*/)
 // line 2041, offset 0x8014b32c
	/* begin block 1 */
		// Start line: 2042
		// Start offset: 0x8014B32C
		// Variables:
	// 		int mwi; // $v1
	/* end block 1 */
	// End offset: 0x8014B544
	// End Line: 2101

	/* begin block 2 */
		// Start line: 4783
	/* end block 2 */
	// End Line: 4784

void M_WalkDir__Fii(int i,int md)

{
	int iVar1;
	int xvel;
	int yvel;
	int xadd;
	int local_10;
	int local_c;
	
	iVar1 = (int)(monster[i].MType)->Anims[1].Frames + -1;
	switch(md) {
	case 0:
		xvel = 0;
		xadd = 1;
		yvel = (&INT_8011463c)[iVar1 * 3];
		local_10 = 1;
		local_c = 0;
		break;
	case 1:
		xadd = 0;
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = 1;
		local_c = 1;
		xvel = -(&INT_8011463c)[iVar1 * 3];
		break;
	case 2:
		yvel = 0;
		xadd = -1;
		local_10 = 1;
		local_c = 2;
		xvel = -INT_ARRAY_80114640[iVar1 * 3];
		break;
	case 3:
		xadd = -1;
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = 0;
		local_c = 3;
		xvel = -(&INT_8011463c)[iVar1 * 3];
		goto LAB_8014b538;
	case 4:
		xvel = 0;
		xadd = -1;
		yvel = (&INT_8011463c)[iVar1 * 3];
		local_10 = -1;
		local_c = 4;
		goto LAB_8014b538;
	case 5:
		xadd = 0;
		xvel = (&INT_8011463c)[iVar1 * 3];
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = -1;
		local_c = 5;
LAB_8014b538:
		yvel = -yvel;
		break;
	case 6:
		yvel = 0;
		xadd = 1;
		xvel = INT_ARRAY_80114640[iVar1 * 3];
		local_10 = -1;
		local_c = 6;
		break;
	case 7:
		xadd = 1;
		xvel = (&INT_8011463c)[iVar1 * 3];
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = 0;
		local_c = 7;
		break;
	default:
		return;
	}
	M_StartWalk__Fiiiiii(i,xvel,yvel,xadd,local_10,local_c);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GroupUnity__Fi(int i /*$s4*/)
 // line 2109, offset 0x8014b554
	/* begin block 1 */
		// Start line: 2110
		// Start offset: 0x8014B554
		// Variables:
	// 		int leader; // $s3
	// 		int tmp; // $v1
	// 		int m; // $a1
	// 		struct MonsterStruct *pMonster; // $s7
	// 		int _mx; // $s6
	// 		int _my; // $s5
	/* end block 1 */
	// End offset: 0x8014B910
	// End Line: 2186

	/* begin block 2 */
		// Start line: 4924
	/* end block 2 */
	// End Line: 4925

void GroupUnity__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	int iVar5;
	int iVar6;
	short *psVar7;
	uint uVar8;
	
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	uVar8 = 0;
	if (monster[i].leaderflag == '\0') goto LAB_8014b6c8;
	uVar8 = (uint)monster[i].leader;
	uVar4 = LineClearF__FPFii_Uciiii
										(CheckNoSolid__Fii,(int)cVar1,(int)cVar2,(int)monster[uVar8]._mfutx,
										 (int)monster[uVar8]._mfuty);
	if (uVar4 == '\0') {
		if (monster[i].leaderflag != '\x01') goto LAB_8014b6c8;
		monster[uVar8].packsize = monster[uVar8].packsize + -1;
		uVar4 = '\x02';
	}
	else {
		if (monster[i].leaderflag != '\x02') goto LAB_8014b6c8;
		bVar3 = false;
		iVar6 = abs((int)cVar1 - (int)monster[uVar8]._mfutx);
		if (iVar6 < 4) {
			iVar6 = abs((int)cVar2 - (int)monster[uVar8]._mfuty);
			bVar3 = iVar6 < 4;
		}
		if (!bVar3) goto LAB_8014b6c8;
		monster[uVar8].packsize = monster[uVar8].packsize + '\x01';
		uVar4 = '\x01';
	}
	monster[i].leaderflag = uVar4;
LAB_8014b6c8:
	if (monster[i].leaderflag == '\x01') {
		if (monster[uVar8]._msquelch < monster[i]._msquelch) {
			monster[uVar8]._lastx = cVar1;
			monster[uVar8]._lasty = cVar2;
			monster[uVar8]._msquelch = monster[i]._msquelch + -1;
		}
		if ((monster[uVar8]._mAi == '\f') && ((monster[uVar8]._mFlags & 4) != 0)) {
			monster[uVar8]._mFlags = monster[uVar8]._mFlags & 0xfffb;
			monster[uVar8]._mmode = '\a';
		}
	}
	else {
		if (((monster[i]._uniqtype != 0) &&
				((UniqMonst[(uint)monster[i]._uniqtype - 1].mUnqAttr & 2) != 0)) &&
			 (iVar6 = 0, 0 < nummonsters)) {
			psVar7 = monstactive;
			do {
				iVar5 = (int)*psVar7;
				if ((monster[iVar5].leaderflag == '\x01') && ((uint)monster[iVar5].leader == i)) {
					if (monster[iVar5]._msquelch < monster[i]._msquelch) {
						monster[iVar5]._lastx = cVar1;
						monster[iVar5]._lasty = cVar2;
						monster[iVar5]._msquelch = monster[i]._msquelch + -1;
					}
					if ((monster[iVar5]._mAi == '\f') && ((monster[iVar5]._mFlags & 4) != 0)) {
						monster[iVar5]._mFlags = monster[iVar5]._mFlags & 0xfffb;
						monster[iVar5]._mmode = '\a';
					}
				}
				iVar6 = iVar6 + 1;
				psVar7 = psVar7 + 1;
			} while (iVar6 < nummonsters);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_CallWalk__Fii(int i /*$s2*/, int md /*$s1*/)
 // line 2194, offset 0x8014b940
	/* begin block 1 */
		// Start line: 2195
		// Start offset: 0x8014B940
		// Variables:
	// 		int mdtemp; // $s3
	// 		unsigned char ok; // $s0
	/* end block 1 */
	// End offset: 0x8014BB08
	// End Line: 2213

	/* begin block 2 */
		// Start line: 5128
	/* end block 2 */
	// End Line: 5129

uchar M_CallWalk__Fii(int i,int md)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	long lVar4;
	int mdir;
	
	uVar3 = DirOK__Fii(i,md);
	lVar4 = random__Fil(0x65,2);
	if (lVar4 == 0) {
		mdir = md;
		if (uVar3 == '\0') {
			mdir = (int)right[md];
			uVar3 = DirOK__Fii(i,mdir);
			if (uVar3 == '\0') {
				cVar1 = left[md];
				goto LAB_8014b9fc;
			}
		}
LAB_8014ba10:
		bVar2 = true;
	}
	else {
		mdir = md;
		if (uVar3 != '\0') goto LAB_8014ba10;
		cVar1 = left[md];
		uVar3 = DirOK__Fii(i,(int)cVar1);
		mdir = (int)cVar1;
		if (uVar3 != '\0') goto LAB_8014ba10;
		cVar1 = right[md];
LAB_8014b9fc:
		mdir = (int)cVar1;
		uVar3 = DirOK__Fii(i,mdir);
		bVar2 = false;
		if (uVar3 != '\0') goto LAB_8014ba10;
	}
	lVar4 = random__Fil(0x66,2);
	if (lVar4 == 0) {
		if (!bVar2) {
			mdir = (int)left[(int)left[md]];
			uVar3 = DirOK__Fii(i,mdir);
			if (uVar3 == '\0') {
				cVar1 = right[(int)right[md]];
				goto LAB_8014bad4;
			}
		}
	}
	else {
		if (!bVar2) {
			mdir = (int)right[(int)right[md]];
			uVar3 = DirOK__Fii(i,mdir);
			if (uVar3 == '\0') {
				cVar1 = left[(int)left[md]];
LAB_8014bad4:
				mdir = (int)cVar1;
				uVar3 = DirOK__Fii(i,mdir);
				bVar2 = false;
				if (uVar3 == '\0') goto LAB_8014baf0;
			}
		}
	}
	bVar2 = true;
LAB_8014baf0:
	if (bVar2) {
		M_WalkDir__Fii(i,mdir);
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_PathWalk__Fi(int i /*$s0*/)
 // line 2220, offset 0x8014bb2c
	/* begin block 1 */
		// Start line: 2221
		// Start offset: 0x8014BB2C
		// Variables:
	// 		char path[25]; // stack offset -40
	/* end block 1 */
	// End offset: 0x8014BBDC
	// End Line: 2235

	/* begin block 2 */
		// Start line: 5180
	/* end block 2 */
	// End Line: 5181

uchar M_PathWalk__Fi(int i)

{
	int iVar1;
	code *PosOk;
	char local_28 [32];
	
	PosOk = PosOkMonst__Fiii;
	if ((monster[i]._mFlags & 0x200) != 0) {
		PosOk = PosOkMonst3__Fiii;
	}
	iVar1 = FindPath__FPFiii_UciiiiiPc
										(PosOk,i,(int)monster[i]._mx,(int)monster[i]._my,(uint)monster[i]._menemyx,
										 (uint)monster[i]._menemyy,local_28);
	if (iVar1 != 0) {
		M_CallWalk__Fii(i,(int)(char)(&DAT_80129fb0)[(int)local_28[0]]);
	}
	return (uchar)(iVar1 != 0);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_CallWalk2__Fii(int i /*$s2*/, int md /*$s0*/)
 // line 2245, offset 0x8014bbf0
	/* begin block 1 */
		// Start line: 2246
		// Start offset: 0x8014BBF0
		// Variables:
	// 		int mdtemp; // $s4
	// 		unsigned char ok; // $s1
	/* end block 1 */
	// End offset: 0x8014BCE0
	// End Line: 2259

	/* begin block 2 */
		// Start line: 5236
	/* end block 2 */
	// End Line: 5237

uchar M_CallWalk2__Fii(int i,int md)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	long lVar4;
	int mdir;
	
	uVar3 = DirOK__Fii(i,md);
	lVar4 = random__Fil(0x65,2);
	if (lVar4 == 0) {
		mdir = md;
		if (uVar3 == '\0') {
			mdir = (int)right[md];
			uVar3 = DirOK__Fii(i,mdir);
			if (uVar3 == '\0') {
				cVar1 = left[md];
				goto LAB_8014bcac;
			}
		}
	}
	else {
		mdir = md;
		if (uVar3 == '\0') {
			cVar1 = left[md];
			uVar3 = DirOK__Fii(i,(int)cVar1);
			mdir = (int)cVar1;
			if (uVar3 == '\0') {
				cVar1 = right[md];
LAB_8014bcac:
				mdir = (int)cVar1;
				uVar3 = DirOK__Fii(i,mdir);
				bVar2 = false;
				if (uVar3 == '\0') goto LAB_8014bcc8;
			}
		}
	}
	bVar2 = true;
LAB_8014bcc8:
	if (bVar2) {
		M_WalkDir__Fii(i,mdir);
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_DumbWalk__Fii(int i /*$s0*/, int md /*$s2*/)
 // line 2266, offset 0x8014bd04
	/* begin block 1 */
		// Start line: 2267
		// Start offset: 0x8014BD04
	/* end block 1 */
	// End offset: 0x8014BD3C
	// End Line: 2274

	/* begin block 2 */
		// Start line: 5278
	/* end block 2 */
	// End Line: 5279

uchar M_DumbWalk__Fii(int i,int md)

{
	uchar uVar1;
	
	uVar1 = DirOK__Fii(i,md);
	if (uVar1 != '\0') {
		M_WalkDir__Fii(i,md);
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_RoundWalk__FiiRi(int i /*$s2*/, int md /*$s0*/, int *dir /*$s4*/)
 // line 2280, offset 0x8014bd58
	/* begin block 1 */
		// Start line: 2281
		// Start offset: 0x8014BD58
		// Variables:
	// 		int mdtemp; // $s3
	// 		unsigned char ok; // $s1
	/* end block 1 */
	// End offset: 0x8014BED4
	// End Line: 2313

	/* begin block 2 */
		// Start line: 5306
	/* end block 2 */
	// End Line: 5307

uchar M_RoundWalk__FiiRi(int i,int md,int *dir)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	uchar uVar4;
	int mdir;
	int mdir_00;
	
	if (*dir == 0) {
		cVar1 = right[(int)right[md]];
	}
	else {
		cVar1 = left[(int)left[md]];
	}
	mdir = (int)cVar1;
	uVar3 = DirOK__Fii(i,mdir);
	mdir_00 = mdir;
	if (uVar3 != '\0') goto LAB_8014be98;
	uVar3 = '\0';
	if (*dir == 0) {
		mdir_00 = (int)left[mdir];
		uVar4 = DirOK__Fii(i,mdir_00);
		if (uVar4 == '\0') {
			cVar1 = left[(int)left[mdir]];
			goto LAB_8014be74;
		}
LAB_8014be88:
		uVar3 = '\x01';
		bVar2 = true;
	}
	else {
		mdir_00 = (int)right[mdir];
		uVar4 = DirOK__Fii(i,mdir_00);
		if (uVar4 != '\0') goto LAB_8014be88;
		cVar1 = right[(int)right[mdir]];
LAB_8014be74:
		mdir_00 = (int)cVar1;
		uVar4 = DirOK__Fii(i,mdir_00);
		bVar2 = false;
		if (uVar4 != '\0') goto LAB_8014be88;
	}
	if (!bVar2) {
		*dir = (uint)(*dir == 0);
		uVar3 = M_CallWalk__Fii(i,(int)(&opposite)[mdir]);
		return uVar3;
	}
LAB_8014be98:
	M_WalkDir__Fii(i,mdir_00);
	return uVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Zombie__Fi(int i /*$s6*/)
 // line 2324, offset 0x8014bef8
	/* begin block 1 */
		// Start line: 2325
		// Start offset: 0x8014BEF8
		// Variables:
	// 		struct MonsterStruct *Monst; // $s1
	// 		int mx; // $s0
	// 		int my; // $s2
	// 		int md; // $s3
	// 		int v; // $s5
	/* end block 1 */
	// End offset: 0x8014C0C4
	// End Line: 2352

	/* begin block 2 */
		// Start line: 5396
	/* end block 2 */
	// End Line: 5397

void MAI_Zombie__Fi(int i)

{
	bool bVar1;
	long lVar2;
	int md;
	int __x;
	int __x_00;
	long md_00;
	
	if (monster[i]._mmode == '\0') {
		if ((dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dFlags & 2U) != 0) {
			bVar1 = false;
			md_00 = (long)monster[i]._mdir;
			__x = (int)monster[i]._mx - (uint)monster[i]._menemyx;
			__x_00 = (int)monster[i]._my - (uint)monster[i]._menemyy;
			lVar2 = random__Fil(0x67,100);
			md = abs(__x);
			if (md < 2) {
				md = abs(__x_00);
				bVar1 = md < 2;
			}
			if (bVar1) {
				if (lVar2 < (int)((uint)monster[i]._mint * 2 + 10)) {
					M_StartAttack__Fi(i);
				}
			}
			else {
				if (lVar2 < (int)((uint)monster[i]._mint * 2 + 10)) {
					md = abs(__x);
					bVar1 = false;
					if (md < (int)((uint)monster[i]._mint * 2 + 4)) {
						md = abs(__x_00);
						bVar1 = md < (int)((uint)monster[i]._mint * 2 + 4);
					}
					if (bVar1) {
						md = M_GetDir__Fi(i);
						M_CallWalk__Fii(i,md);
					}
					else {
						lVar2 = random__Fil(0x68,100);
						if (lVar2 < (int)((uint)monster[i]._mint * 2 + 0x14)) {
							md_00 = random__Fil(0x68,8);
						}
						M_DumbWalk__Fii(i,md_00);
					}
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SkelSd__Fi(int i /*$s3*/)
 // line 2365, offset 0x8014c0f0
	/* begin block 1 */
		// Start line: 2366
		// Start offset: 0x8014C0F0
		// Variables:
	// 		struct MonsterStruct *Monst; // $s1
	// 		int mx; // $s0
	// 		int my; // $s2
	// 		int md; // $s0
	/* end block 1 */
	// End offset: 0x8014C264
	// End Line: 2388

	/* begin block 2 */
		// Start line: 5492
	/* end block 2 */
	// End Line: 5493

void MAI_SkelSd__Fi(int i)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	int md;
	int iVar6;
	long lVar7;
	
	if ((monster[i]._mmode == '\0') && (bVar5 = false, monster[i]._msquelch != '\0')) {
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		bVar3 = monster[i]._menemyx;
		bVar4 = monster[i]._menemyy;
		md = GetDirection__Fiiii((int)cVar1,(int)cVar2,(int)monster[i]._lastx,(int)monster[i]._lasty);
		monster[i]._mdir = (char)md;
		iVar6 = abs((int)cVar1 - (uint)bVar3);
		if (iVar6 < 2) {
			iVar6 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar6 < 2;
		}
		if (bVar5) {
			if ((monster[i]._mVar1 == 0xd) ||
				 (lVar7 = random__Fil(0x69,100), lVar7 < (int)((uint)monster[i]._mint * 2 + 0x14))) {
				M_StartAttack__Fi(i);
				return;
			}
			md = random__Fil(0x69,10);
			iVar6 = (uint)monster[i]._mint * 2 + -10;
		}
		else {
			if ((monster[i]._mVar1 == 0xd) ||
				 (lVar7 = random__Fil(0x6a,100), (int)((uint)monster[i]._mint * -4 + 0x23) <= lVar7)) {
				M_CallWalk__Fii(i,md);
				return;
			}
			md = random__Fil(0x6a,10);
			iVar6 = (uint)monster[i]._mint * 2 + -0xf;
		}
		M_StartDelay__Fii(i,md - iVar6);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Snake__Fi(int i /*$s4*/)
 // line 2402, offset 0x8014c288
	/* begin block 1 */
		// Start line: 2403
		// Start offset: 0x8014C288
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int fx; // $s2
	// 		int fy; // $s5
	// 		int mx; // $s3
	// 		int my; // $s7
	// 		int md; // $s6
	// 		int pnum; // $fp
	// 		char pattern[6]; // stack offset -48
	// 		int tmp; // $v1
	/* end block 1 */
	// End offset: 0x8014C638
	// End Line: 2460

	/* begin block 2 */
		// Start line: 5578
	/* end block 2 */
	// End Line: 5579

void MAI_Snake__Fi(int i)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	int midir;
	int iVar4;
	long lVar5;
	short sVar6;
	uint x2;
	int __x;
	uint y2;
	int __x_00;
	undefined4 local_30;
	undefined local_2c;
	undefined local_2b;
	
	local_30 = DAT_8012bc78;
	local_2c = DAT_8012bc7c;
	local_2b = DAT_8012bc7d;
	cVar1 = monster[i]._menemy;
	if (monster[i]._mmode != '\0') {
		return;
	}
	bVar2 = false;
	if (monster[i]._msquelch == '\0') {
		return;
	}
	x2 = (uint)monster[i]._menemyx;
	y2 = (uint)monster[i]._menemyy;
	__x = (int)monster[i]._mx - x2;
	__x_00 = (int)monster[i]._my - y2;
	midir = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
															(int)monster[i]._lasty);
	monster[i]._mdir = (char)midir;
	iVar4 = abs(__x);
	if (iVar4 < 2) {
		iVar4 = abs(__x_00);
		bVar2 = iVar4 < 2;
	}
	if (bVar2) {
		if (((uint)(ushort)monster[i]._mVar1 - 0xd < 2) ||
			 (lVar5 = random__Fil(0x69,100), lVar5 < (int)((uint)monster[i]._mint + 0x14))) {
			M_StartAttack__Fi(i);
			return;
		}
		iVar4 = random__Fil(0x69,10);
		midir = (uint)monster[i]._mint - 10;
	}
	else {
		bVar2 = false;
		iVar4 = abs(__x);
		if ((iVar4 < 3) && (iVar4 = abs(__x_00), iVar4 < 3)) {
			uVar3 = LineClearF1__FPFiii_Uciiiii
												(PosOkMonst__Fiii,i,(int)monster[i]._mx,(int)monster[i]._my,x2,y2);
			bVar2 = uVar3 != '\0';
		}
		if (bVar2) {
			sVar6 = monster[i]._mVar1;
			if (sVar6 != 0xe) {
				iVar4 = AddMissile__Fiiiiiiciii
													((int)monster[i]._mx,(int)monster[i]._my,x2,y2,midir,0x14,(int)cVar1,i,0,0
													);
				if (iVar4 == -1) {
					return;
				}
				PlayEffect__Fii(i,0);
				dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = ~(ushort)i;
				monster[i]._mmode = '\x0e';
				return;
			}
		}
		else {
			sVar6 = monster[i]._mVar1;
		}
		if ((sVar6 == 0xd) ||
			 (lVar5 = random__Fil(0x6a,100), (int)((uint)monster[i]._mint * -2 + 0x23) <= lVar5)) {
			midir = midir + (int)*(char *)((int)&local_30 + monster[i]._mgoalvar1);
			if (midir < 0) {
				midir = midir + 8;
			}
			else {
				if (7 < midir) {
					midir = midir + -8;
				}
			}
			iVar4 = monster[i]._mgoalvar1 + 1;
			monster[i]._mgoalvar1 = iVar4;
			if (5 < iVar4) {
				monster[i]._mgoalvar1 = 0;
			}
			iVar4 = midir - monster[i]._mgoalvar2;
			if (iVar4 < 0) {
				iVar4 = iVar4 + 8;
			}
			else {
				if (7 < iVar4) {
					iVar4 = iVar4 + -8;
				}
			}
			if (0 < iVar4) {
				if (iVar4 < 4) {
					midir = monster[i]._mgoalvar2;
					iVar4 = midir + 1;
					if (iVar4 < 0) {
						iVar4 = midir + 9;
					}
					else {
						if (7 < iVar4) {
							iVar4 = midir + -7;
						}
					}
				}
				else {
					if (iVar4 == 4) {
						monster[i]._mgoalvar2 = midir;
						goto LAB_8014c614;
					}
					midir = monster[i]._mgoalvar2;
					iVar4 = midir + -1;
					if (iVar4 < 0) {
						iVar4 = midir + 7;
					}
					else {
						if (7 < iVar4) {
							iVar4 = midir + -9;
						}
					}
				}
				monster[i]._mgoalvar2 = iVar4;
			}
LAB_8014c614:
			uVar3 = M_DumbWalk__Fii(i,monster[i]._mgoalvar2);
			if (uVar3 != '\0') {
				return;
			}
			M_CallWalk2__Fii(i,(int)monster[i]._mdir);
			return;
		}
		iVar4 = random__Fil(0x6a,10);
		midir = (uint)monster[i]._mint - 0xf;
	}
	M_StartDelay__Fii(i,iVar4 - midir);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Bat__Fi(int i /*$s2*/)
 // line 2471, offset 0x8014c66c
	/* begin block 1 */
		// Start line: 2472
		// Start offset: 0x8014C66C
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int mx; // $s7
	// 		int my; // $fp
	// 		int md; // $s3
	// 		int v; // $s4
	// 		int pnum; // stack offset -48
	// 		int fx; // $s1
	// 		int fy; // $s5
	/* end block 1 */
	// End offset: 0x8014C9F0
	// End Line: 2539

	/* begin block 2 */
		// Start line: 5725
	/* end block 2 */
	// End Line: 5726

void MAI_Bat__Fi(int i)

{
	char cVar1;
	byte bVar2;
	byte bVar3;
	bool bVar4;
	uchar uVar5;
	int md;
	long lVar6;
	int iVar7;
	CMonster *pCVar8;
	int __x;
	int __x_00;
	
	cVar1 = monster[i]._menemy;
	if ((monster[i]._mmode == '\0') && (monster[i]._msquelch != '\0')) {
		__x = (int)monster[i]._mx - (uint)monster[i]._menemyx;
		__x_00 = (int)monster[i]._my - (uint)monster[i]._menemyy;
		md = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
														 (int)monster[i]._lasty);
		monster[i]._mdir = (char)md;
		lVar6 = random__Fil(0x6b,100);
		if (monster[i]._mgoal == '\x02') {
			if (monster[i]._mgoalvar1 == 0) {
				M_CallWalk__Fii(i,(int)(&opposite)[md]);
				monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + 1;
			}
			else {
				lVar6 = random__Fil(0x6c,2);
				if (lVar6 == 0) {
					cVar1 = right[md];
				}
				else {
					cVar1 = left[md];
				}
				M_CallWalk__Fii(i,(int)cVar1);
				monster[i]._mgoal = '\x01';
			}
		}
		else {
			bVar2 = monster[i]._menemyx;
			bVar3 = monster[i]._menemyy;
			bVar4 = false;
			if (((monster[i].MType)->mtype == '(') &&
				 (((iVar7 = abs(__x), 4 < iVar7 || (iVar7 = abs(__x_00), 4 < iVar7)) &&
					(lVar6 < (int)((uint)monster[i]._mint * 4 + 0x21))))) {
				uVar5 = LineClearF1__FPFiii_Uciiiii
													(PosOkMonst__Fiii,i,(int)monster[i]._mx,(int)monster[i]._my,(uint)bVar2,
													 (uint)bVar3);
				if (uVar5 != '\0') {
					bVar4 = true;
				}
			}
			if (bVar4) {
				md = AddMissile__Fiiiiiiciii
											 ((int)monster[i]._mx,(int)monster[i]._my,(uint)bVar2,(uint)bVar3,md,0x14,
												(int)cVar1,i,0,0);
				if (md != -1) {
					dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dMonster = ~(ushort)i;
					monster[i]._mmode = '\x0e';
				}
			}
			else {
				bVar4 = false;
				__x = abs(__x);
				if (__x < 2) {
					__x = abs(__x_00);
					bVar4 = __x < 2;
				}
				if (bVar4) {
					if (lVar6 < (int)((uint)monster[i]._mint * 4 + 8)) {
						M_StartAttack__Fi(i);
						pCVar8 = monster[i].MType;
						monster[i]._mgoal = '\x02';
						monster[i]._mgoalvar1 = 0;
						if (pCVar8->mtype == ')') {
							lVar6 = random__Fil(0x6d,10);
							AddMissile__Fiiiiiiciii
												((uint)monster[i]._menemyx,(uint)monster[i]._menemyy,
												 (uint)monster[i]._menemyx + 1,0,-1,8,1,i,lVar6 + 1,0);
						}
					}
				}
				else {
					if (((0x14 < monster[i]._mVar2) && (lVar6 < (int)((uint)monster[i]._mint + 0xd))) ||
						 ((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
							((monster[i]._mVar2 == 0 && (lVar6 < (int)((uint)monster[i]._mint + 0x3f))))))) {
						M_CallWalk__Fii(i,md);
					}
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SkelBow__Fi(int i /*$s4*/)
 // line 2551, offset 0x8014ca24
	/* begin block 1 */
		// Start line: 2552
		// Start offset: 0x8014CA24
		// Variables:
	// 		int mx; // $s0
	// 		int my; // $s2
	// 		int md; // $s5
	// 		int fx; // $s2
	// 		int fy; // $s3
	// 		unsigned char walking; // $s6
	// 		int v; // $s0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x8014CBDC
	// End Line: 2584

	/* begin block 2 */
		// Start line: 5909
	/* end block 2 */
	// End Line: 5910

void MAI_SkelBow__Fi(int i)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	uchar uVar6;
	int iVar7;
	long lVar8;
	int iVar9;
	
	if ((monster[i]._mmode == '\0') && (bVar5 = false, monster[i]._msquelch != '\0')) {
		cVar1 = monster[i]._mx;
		bVar3 = monster[i]._menemyx;
		cVar2 = monster[i]._my;
		bVar4 = monster[i]._menemyy;
		iVar7 = M_GetDir__Fi(i);
		monster[i]._mdir = (char)iVar7;
		lVar8 = random__Fil(0x6e,100);
		iVar9 = abs((int)cVar1 - (uint)bVar3);
		if (iVar9 < 4) {
			iVar9 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar9 < 4;
		}
		uVar6 = '\0';
		if ((bVar5) &&
			 (((0x14 < monster[i]._mVar2 && (lVar8 < (int)((uint)monster[i]._mint * 2 + 0xd))) ||
				((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (uVar6 = '\0', monster[i]._mVar1 == 3)) &&
				 ((uVar6 = '\0', monster[i]._mVar2 == 0 &&
					(uVar6 = '\0', lVar8 < (int)((uint)monster[i]._mint * 2 + 0x3f))))))))) {
			uVar6 = M_DumbWalk__Fii(i,(int)(&opposite)[iVar7]);
		}
		bVar3 = monster[i]._menemyx;
		bVar4 = monster[i]._menemyy;
		bVar5 = false;
		if ((uVar6 == '\0') &&
			 (lVar8 = random__Fil(0x6e,100), lVar8 < (int)((uint)monster[i]._mint * 2 + 3))) {
			uVar6 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(uint)bVar3,(uint)bVar4);
			bVar5 = uVar6 != '\0';
		}
		if (bVar5) {
			M_StartRAttack__Fiii(i,0,4);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Fat__Fi(int i /*$s2*/)
 // line 2594, offset 0x8014cc08
	/* begin block 1 */
		// Start line: 2595
		// Start offset: 0x8014CC08
		// Variables:
	// 		int mx; // $s0
	// 		int my; // $s3
	// 		int md; // $s5
	// 		int v; // $s0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x8014CD90
	// End Line: 2616

	/* begin block 2 */
		// Start line: 6015
	/* end block 2 */
	// End Line: 6016

void MAI_Fat__Fi(int i)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	int md;
	long lVar6;
	int iVar7;
	
	if ((monster[i]._mmode == '\0') && (bVar5 = false, monster[i]._msquelch != '\0')) {
		cVar1 = monster[i]._mx;
		bVar3 = monster[i]._menemyx;
		cVar2 = monster[i]._my;
		bVar4 = monster[i]._menemyy;
		md = M_GetDir__Fi(i);
		monster[i]._mdir = (char)md;
		lVar6 = random__Fil(0x6f,100);
		iVar7 = abs((int)cVar1 - (uint)bVar3);
		if (iVar7 < 2) {
			iVar7 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar7 < 2;
		}
		if (bVar5) {
			md = (uint)monster[i]._mint * 4;
			if (lVar6 < md + 0xf) {
				M_StartAttack__Fi(i);
			}
			else {
				if (lVar6 < md + 0x14) {
					M_StartSpAttack__Fi(i);
				}
			}
		}
		else {
			if (((0x14 < monster[i]._mVar2) && (lVar6 < (int)((uint)monster[i]._mint * 4 + 0x14))) ||
				 ((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
					((monster[i]._mVar2 == 0 && (lVar6 < (int)((uint)monster[i]._mint * 4 + 0x46))))))) {
				M_CallWalk__Fii(i,md);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Sneak__Fi(int i /*$s6*/)
 // line 2628, offset 0x8014cdb8
	/* begin block 1 */
		// Start line: 2629
		// Start offset: 0x8014CDB8
		// Variables:
	// 		int mx; // $s4
	// 		int my; // $s5
	// 		int md; // $s2
	// 		int v; // $fp
	// 		struct MonsterStruct *Monst; // $s0
	// 		int dist; // $s7
	/* end block 1 */
	// End offset: 0x8014D170
	// End Line: 2710

	/* begin block 2 */
		// Start line: 6094
	/* end block 2 */
	// End Line: 6095

void MAI_Sneak__Fi(int i)

{
	char *pcVar1;
	bool bVar2;
	bool bVar3;
	uchar uVar4;
	int md;
	long lVar5;
	int iVar6;
	int iVar7;
	int __x;
	int __x_00;
	
	if (monster[i]._mmode != '\0') {
		return;
	}
	__x = (int)monster[i]._mx - (uint)monster[i]._menemyx;
	__x_00 = (int)monster[i]._my - (uint)monster[i]._menemyy;
	md = M_GetDir__Fi(i);
	iVar7 = -(uint)monster[i]._mint;
	if (monster[i]._mVar1 == 5) {
		uVar4 = '\x02';
LAB_8014cea0:
		monster[i]._mgoal = uVar4;
		monster[i]._mgoalvar1 = 0;
	}
	else {
		bVar2 = false;
		iVar6 = abs(__x);
		if ((iVar7 + 8 <= iVar6) || (iVar6 = abs(__x_00), iVar7 + 8 <= iVar6)) {
			bVar2 = true;
		}
		uVar4 = '\x01';
		if ((bVar2) || (uVar4 = '\x01', 8 < monster[i]._mgoalvar1)) goto LAB_8014cea0;
	}
	if (monster[i]._mgoal == '\x02') {
		if ((monster[i]._mFlags & 0x10) != 0) {
			md = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,
															 (int)plr[(int)monster[i]._menemy]._pownerx,
															 (int)plr[(int)monster[i]._menemy]._pownery);
		}
		md = (int)(&opposite)[md];
		if ((monster[i].MType)->mtype != '\x1f') goto code_r0x8014cf74;
		lVar5 = random__Fil(0x70,2);
		if (lVar5 == 0) {
			md = (int)right[md];
			goto code_r0x8014cf74;
		}
		pcVar1 = left + md;
		md = (int)*pcVar1;
		monster[i]._mdir = *pcVar1;
	}
	else {
code_r0x8014cf74:
		monster[i]._mdir = (char)md;
	}
	lVar5 = random__Fil(0x70,100);
	bVar2 = false;
	iVar6 = abs(__x);
	if (iVar6 < iVar7 + 5) {
		iVar6 = abs(__x_00);
		bVar2 = iVar6 < iVar7 + 5;
	}
	bVar3 = false;
	if ((bVar2) && ((monster[i]._mFlags & 1) != 0)) {
		M_StartFadein__FiiUc(i,md,'\0');
	}
	else {
		iVar6 = abs(__x);
		if ((iVar7 + 6 <= iVar6) || (iVar6 = abs(__x_00), iVar7 + 6 <= iVar6)) {
			bVar3 = true;
		}
		if ((bVar3) && ((monster[i]._mFlags & 1) == 0)) {
			M_StartFadeout__FiiUc(i,md,'\x01');
		}
		else {
			bVar2 = false;
			if (monster[i]._mgoal != '\x02') {
				iVar7 = abs(__x);
				if ((1 < iVar7) || (iVar7 = abs(__x_00), 1 < iVar7)) {
					bVar2 = true;
				}
				if ((!bVar2) ||
					 (((monster[i]._mVar2 < 0x15 || ((int)((uint)monster[i]._mint * 4 + 0xe) <= lVar5)) &&
						(((1 < (uint)(ushort)monster[i]._mVar1 - 1 && (monster[i]._mVar1 != 3)) ||
						 ((monster[i]._mVar2 != 0 || ((int)((uint)monster[i]._mint * 4 + 0x40) <= lVar5))))))))
				goto LAB_8014d114;
			}
			monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + 1;
			M_CallWalk__Fii(i,md);
		}
	}
LAB_8014d114:
	bVar2 = false;
	if (monster[i]._mmode == '\0') {
		iVar7 = abs(__x);
		if (iVar7 < 2) {
			iVar7 = abs(__x_00);
			bVar2 = iVar7 < 2;
		}
		if ((bVar2) && (lVar5 < (int)((uint)monster[i]._mint * 4 + 10))) {
			M_StartAttack__Fi(i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Fireman__Fi(int i /*$s1*/)
 // line 2721, offset 0x8014d1a4
	/* begin block 1 */
		// Start line: 2722
		// Start offset: 0x8014D1A4
		// Variables:
	// 		int mx; // $s6
	// 		int my; // $s7
	// 		int md; // $s4
	// 		int pnum; // $s5
	// 		int fx; // $s2
	// 		int fy; // $s3
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x8014D46C
	// End Line: 2798

	/* begin block 2 */
		// Start line: 6292
	/* end block 2 */
	// End Line: 6293

void MAI_Fireman__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	bool bVar4;
	uchar uVar5;
	int md;
	int iVar6;
	long lVar7;
	uint x2;
	uint y2;
	
	if ((monster[i]._mmode == '\0') && (monster[i]._msquelch != '\0')) {
		x2 = (uint)monster[i]._menemyx;
		y2 = (uint)monster[i]._menemyy;
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		cVar3 = monster[i]._menemy;
		md = M_GetDir__Fi(i);
		uVar5 = monster[i]._mgoal;
		if (uVar5 == '\x01') {
			uVar5 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2);
			if ((uVar5 != '\0') &&
				 (iVar6 = AddMissile__Fiiiiiiciii
														((int)monster[i]._mx,(int)monster[i]._my,x2,y2,md,0x32,(int)cVar3,i,0,0)
				 , iVar6 != -1)) {
				monster[i]._mmode = '\x0e';
				monster[i]._mgoal = '\x05';
				monster[i]._mgoalvar1 = 0;
			}
		}
		else {
			if (uVar5 == '\x05') {
				if (monster[i]._mgoalvar1 == 3) {
					monster[i]._mgoal = '\x01';
					M_StartFadeout__FiiUc(i,md,'\x01');
				}
				else {
					uVar5 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2);
					if (uVar5 == '\0') {
						lVar7 = random__Fil(0x70,10);
						M_StartDelay__Fii(i,lVar7 + 5);
					}
					else {
						M_StartRAttack__Fiii(i,0x33,4);
					}
					monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + 1;
				}
			}
			else {
				if (uVar5 == '\x02') {
					M_StartFadein__FiiUc(i,md,'\0');
					monster[i]._mgoal = '\x05';
				}
			}
		}
		monster[i]._mdir = (char)md;
		random__Fil(0x70,100);
		bVar4 = false;
		if (monster[i]._mmode == '\0') {
			iVar6 = abs((int)cVar1 - x2);
			if (iVar6 < 2) {
				iVar6 = abs((int)cVar2 - y2);
				bVar4 = iVar6 < 2;
			}
			if ((bVar4) && (monster[i]._mgoal == '\x01')) {
				M_TryH2HHit__Fiiiii(i,(int)monster[i]._menemy,(uint)monster[i].mHit,
														(uint)monster[i].mMinDamage,(uint)monster[i].mMaxDamage);
				monster[i]._mgoal = '\x02';
				uVar5 = M_CallWalk__Fii(i,(int)(&opposite)[md]);
				if (uVar5 != '\0') {
					return;
				}
			}
			else {
				uVar5 = M_CallWalk__Fii(i,md);
				if (uVar5 != '\0') {
					return;
				}
				if (1 < (uint)monster[i]._mgoal - 1) {
					return;
				}
			}
			M_StartFadein__FiiUc(i,md,'\0');
			monster[i]._mgoal = '\x05';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Fallen__Fi(int i /*$s1*/)
 // line 2809, offset 0x8014d49c
	/* begin block 1 */
		// Start line: 2810
		// Start offset: 0x8014D49C
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int x; // $a2
	// 		int y; // $a3
	// 		int xpos; // $a1
	// 		int ypos; // $a0
	// 		int m; // $v1
	// 		int rad; // $t0
	// 		int my; // $s0
	// 		int aitype; // $v0
	/* end block 1 */
	// End offset: 0x8014D79C
	// End Line: 2888

	/* begin block 2 */
		// Start line: 6482
	/* end block 2 */
	// End Line: 6483

void MAI_Fallen__Fi(int i)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	int md;
	long lVar4;
	int iVar5;
	uint uVar6;
	uint uVar7;
	
	if (monster[i]._mgoal == '\x05') {
		if (monster[i]._mgoalvar1 == 0) {
			monster[i]._mgoal = '\x01';
		}
		else {
			monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + -1;
		}
	}
	if ((monster[i]._mmode == '\0') && (monster[i]._msquelch != '\0')) {
		if ((monster[i]._mgoal == '\x02') &&
			 (md = monster[i]._mgoalvar1 + -1, monster[i]._mgoalvar1 = md, md == -1)) {
			cVar1 = monster[i]._mdir;
			monster[i]._mgoal = '\x01';
			M_StartStand__Fii(i,(int)(&opposite)[(int)cVar1]);
		}
		if (monster[i]._mAnimFrame == monster[i]._mAnimLen) {
			lVar4 = random__Fil(0x71,4);
			if (lVar4 == 0) {
				if ((monster[i]._mFlags & 8) == 0) {
					M_StartSpStand__Fii(i,(int)monster[i]._mdir);
					if ((int)((int)monster[i]._mmaxhp + -2 + (uint)monster[i]._mint * -2) <
							(int)monster[i]._mhitpoints) {
						monster[i]._mhitpoints = monster[i]._mmaxhp;
					}
					else {
						monster[i]._mhitpoints = monster[i]._mhitpoints + 2 + (ushort)monster[i]._mint * 2;
					}
				}
				md = (uint)monster[i]._mint * 2 + 4;
				uVar7 = -md;
				while ((int)uVar7 <= md) {
					uVar6 = -md;
					if ((int)uVar6 <= md) {
						do {
							if ((((uVar7 < 0x5e) && (uVar6 < 0x5e)) &&
									(iVar5 = (int)dung_map[((int)monster[i]._mx + uVar6) * 0x6c +
																				 (int)monster[i]._my + uVar7].dMonster + -1,
									0 < (int)dung_map[((int)monster[i]._mx + uVar6) * 0x6c +
																		(int)monster[i]._my + uVar7].dMonster)) &&
								 (monster[iVar5]._mAi == '\b')) {
								monster[iVar5]._mgoal = '\x05';
								monster[iVar5]._mgoalvar1 = ((uint)monster[i]._mint * 2 + 7) * 0xf;
							}
							uVar6 = uVar6 + 1;
						} while ((int)uVar6 <= md);
					}
					uVar7 = uVar7 + 1;
				}
			}
		}
		else {
			if (monster[i]._mgoal == '\x02') {
				M_CallWalk__Fii(i,(int)monster[i]._mdir);
			}
			else {
				bVar3 = false;
				if (monster[i]._mgoal == '\x05') {
					cVar1 = monster[i]._my;
					bVar2 = monster[i]._menemyy;
					md = abs((int)monster[i]._mx - (uint)monster[i]._menemyx);
					if (md < 2) {
						md = abs((int)cVar1 - (uint)bVar2);
						bVar3 = md < 2;
					}
					if (bVar3) {
						M_StartAttack__Fi(i);
					}
					else {
						md = M_GetDir__Fi(i);
						M_CallWalk__Fii(i,md);
					}
				}
				else {
					MAI_SkelSd__Fi(i);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Cleaver__Fi(int i /*$s2*/)
 // line 2895, offset 0x8014d7b8
	/* begin block 1 */
		// Start line: 2896
		// Start offset: 0x8014D7B8
		// Variables:
	// 		struct MonsterStruct *Monst; // $s1
	// 		int mx; // $s0
	// 		int my; // $s3
	// 		int md; // $s0
	/* end block 1 */
	// End offset: 0x8014D87C
	// End Line: 2912

	/* begin block 2 */
		// Start line: 6662
	/* end block 2 */
	// End Line: 6663

void MAI_Cleaver__Fi(int i)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	int md;
	int iVar6;
	
	if ((monster[i]._mmode == '\0') && (bVar5 = false, monster[i]._msquelch != '\0')) {
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		bVar3 = monster[i]._menemyx;
		bVar4 = monster[i]._menemyy;
		md = GetDirection__Fiiii((int)cVar1,(int)cVar2,(int)monster[i]._lastx,(int)monster[i]._lasty);
		monster[i]._mdir = (char)md;
		iVar6 = abs((int)cVar1 - (uint)bVar3);
		if (iVar6 < 2) {
			iVar6 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar6 < 2;
		}
		if (bVar5) {
			M_StartAttack__Fi(i);
		}
		else {
			M_CallWalk__Fii(i,md);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Round__FiUc(int i /*$s3*/, unsigned char special /*stack -48*/)
 // line 2922, offset 0x8014d8a0
	/* begin block 1 */
		// Start line: 2923
		// Start offset: 0x8014D8A0
		// Variables:
	// 		int mx; // $s5
	// 		int my; // $s6
	// 		int md; // $s7
	// 		int v; // $fp
	// 		int fx; // $s2
	// 		int fy; // $s4
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x8014DCD8
	// End Line: 2990

	/* begin block 2 */
		// Start line: 6728
	/* end block 2 */
	// End Line: 6729

void MAI_Round__FiUc(int i,uchar special)

{
	bool bVar1;
	uchar uVar2;
	int mdir;
	long lVar3;
	int __x;
	long lVar4;
	int iVar5;
	int iVar6;
	uint uVar7;
	uint uVar8;
	int __x_00;
	int __x_01;
	
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._msquelch == '\0') {
		return;
	}
	uVar7 = (uint)monster[i]._menemyx;
	uVar8 = (uint)monster[i]._menemyy;
	__x_00 = (int)monster[i]._mx - uVar7;
	__x_01 = (int)monster[i]._my - uVar8;
	mdir = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
														 (int)monster[i]._lasty);
	if (monster[i]._msquelch != -1) {
		MonstCheckDoors__Fi(i);
	}
	lVar3 = random__Fil(0x72,100);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[i]._msquelch == -1)) &&
		 (dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dTransVal ==
			dung_map[uVar7 * 0x6c + uVar8].dTransVal)) {
		bVar1 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((3 < __x) || (__x = abs(__x_01), 3 < __x)) && (lVar4 = random__Fil(0x73,4), lVar4 == 0))
			{
				bVar1 = true;
			}
			if (!bVar1) goto LAB_8014db9c;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar4 = random__Fil(0x74,2);
				monster[i]._mgoalvar2 = lVar4;
			}
		}
		monster[i]._mgoal = '\x04';
		iVar5 = abs(__x_00);
		iVar6 = abs(__x_01);
		__x = __x_01;
		if (iVar6 < iVar5) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar5 = monster[i]._mgoalvar1;
		monster[i]._mgoalvar1 = iVar5 + 1;
		bVar1 = false;
		if (__x << 1 <= iVar5) {
			uVar2 = DirOK__Fii(i,mdir);
			bVar1 = uVar2 != '\0';
		}
		if ((!bVar1) &&
			 (dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dTransVal ==
				dung_map[uVar7 * 0x6c + uVar8].dTransVal)) {
			uVar2 = M_RoundWalk__FiiRi(i,mdir,&monster[i]._mgoalvar2);
			if (uVar2 == '\0') {
				lVar4 = random__Fil(0x7d,10);
				M_StartDelay__Fii(i,lVar4 + 10);
			}
			goto LAB_8014db9c;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_8014db9c:
	bVar1 = false;
	if (monster[i]._mgoal == '\x01') {
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar1 = __x_00 < 2;
		}
		if (bVar1) {
			if (lVar3 < (int)((uint)monster[i]._mint * 2 + 0x17)) {
				monster[i]._mdir = (char)mdir;
				if (((special == '\0') ||
						((int)((uint)(ushort)monster[i]._mmaxhp << 0x10) >> 0x11 <= (int)monster[i]._mhitpoints)
						) || (lVar3 = random__Fil(0x75,2), lVar3 == 0)) {
					M_StartAttack__Fi(i);
				}
				else {
					M_StartSpAttack__Fi(i);
				}
			}
		}
		else {
			if (((0x14 < monster[i]._mVar2) && (lVar3 < (int)((uint)monster[i]._mint * 2 + 0x1c))) ||
				 ((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
					((monster[i]._mVar2 == 0 && (lVar3 < (int)((uint)monster[i]._mint * 2 + 0x4e))))))) {
				M_CallWalk__Fii(i,mdir);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_GoatMc__Fi(int i /*$a0*/)
 // line 2999, offset 0x8014dd0c
	/* begin block 1 */
		// Start line: 3000
		// Start offset: 0x8014DD0C
	/* end block 1 */
	// End offset: 0x8014DD1C
	// End Line: 3001

	/* begin block 2 */
		// Start line: 6898
	/* end block 2 */
	// End Line: 6899

void MAI_GoatMc__Fi(int i)

{
	MAI_Round__FiUc(i,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Ranged__FiiUc(int i /*$s3*/, int missile_type /*$fp*/, unsigned char special /*stack -48*/)
 // line 3007, offset 0x8014dd2c
	/* begin block 1 */
		// Start line: 3008
		// Start offset: 0x8014DD2C
		// Variables:
	// 		int fx; // $s6
	// 		int fy; // $s7
	// 		int mx; // $s1
	// 		int my; // $s2
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x8014DF18
	// End Line: 3061

	/* begin block 2 */
		// Start line: 6914
	/* end block 2 */
	// End Line: 6915

void MAI_Ranged__FiiUc(int i,int missile_type,uchar special)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	short sVar5;
	bool bVar6;
	uchar uVar7;
	int md;
	long len;
	int iVar8;
	
	if (monster[i]._mmode == '\0') {
		if ((monster[i]._msquelch == -1) || ((monster[i]._mFlags & 0x10) != 0)) {
			bVar3 = monster[i]._menemyx;
			bVar4 = monster[i]._menemyy;
			cVar1 = monster[i]._mx;
			cVar2 = monster[i]._my;
			md = M_GetDir__Fi(i);
			if (monster[i]._msquelch != -1) {
				MonstCheckDoors__Fi(i);
			}
			sVar5 = monster[i]._mVar1;
			monster[i]._mdir = (char)md;
			if (sVar5 == 10) {
				len = random__Fil(0x76,0x14);
				M_StartDelay__Fii(i,len);
			}
			else {
				bVar6 = false;
				iVar8 = abs((int)cVar1 - (uint)bVar3);
				if ((iVar8 < 4) && (iVar8 = abs((int)cVar2 - (uint)bVar4), iVar8 < 4)) {
					len = random__Fil(0x77,100);
					bVar6 = len < (int)((uint)monster[i]._mint * 10 + 0x46);
				}
				if (bVar6) {
					M_CallWalk__Fii(i,(int)(&opposite)[md]);
				}
			}
			if ((monster[i]._mmode == '\0') &&
				 (uVar7 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(uint)bVar3,(uint)bVar4),
				 uVar7 != '\0')) {
				if (special == '\0') {
					M_StartRAttack__Fiii(i,missile_type,4);
				}
				else {
					M_StartRSpAttack__Fiii(i,missile_type,4);
				}
			}
		}
		else {
			if (monster[i]._msquelch != '\0') {
				md = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
																 (int)monster[i]._lasty);
				M_CallWalk__Fii(i,md);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_GoatBow__Fi(int i /*$a0*/)
 // line 3066, offset 0x8014df4c
	/* begin block 1 */
		// Start line: 3067
		// Start offset: 0x8014DF4C
	/* end block 1 */
	// End offset: 0x8014DF60
	// End Line: 3068

	/* begin block 2 */
		// Start line: 7054
	/* end block 2 */
	// End Line: 7055

void MAI_GoatBow__Fi(int i)

{
	MAI_Ranged__FiiUc(i,0,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Succ__Fi(int i /*$a0*/)
 // line 3071, offset 0x8014df70
	/* begin block 1 */
		// Start line: 3072
		// Start offset: 0x8014DF70
	/* end block 1 */
	// End offset: 0x8014DF84
	// End Line: 3073

	/* begin block 2 */
		// Start line: 7064
	/* end block 2 */
	// End Line: 7065

void MAI_Succ__Fi(int i)

{
	MAI_Ranged__FiiUc(i,0x18,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_AcidUniq__Fi(int i /*$a0*/)
 // line 3076, offset 0x8014df94
	/* begin block 1 */
		// Start line: 3077
		// Start offset: 0x8014DF94
	/* end block 1 */
	// End offset: 0x8014DFA8
	// End Line: 3078

	/* begin block 2 */
		// Start line: 7074
	/* end block 2 */
	// End Line: 7075

void MAI_AcidUniq__Fi(int i)

{
	MAI_Ranged__FiiUc(i,0x39,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Scav__Fi(int i /*$s4*/)
 // line 3091, offset 0x8014dfb8
	/* begin block 1 */
		// Start line: 3092
		// Start offset: 0x8014DFB8
		// Variables:
	// 		struct MonsterStruct *Monst; // $s2
	// 		int x; // $s1
	// 		int y; // $s0
	// 		unsigned char done; // $s3
	/* end block 1 */
	// End offset: 0x8014E3AC
	// End Line: 3178

	/* begin block 2 */
		// Start line: 7104
	/* end block 2 */
	// End Line: 7105

void MAI_Scav__Fi(int i)

{
	char cVar1;
	bool bVar2;
	uint uVar3;
	uchar uVar4;
	int y2;
	long lVar5;
	int x2;
	uint uVar6;
	uint uVar7;
	
	bVar2 = false;
	if (monster[i]._mmode != '\0') {
		return;
	}
	if ((int)monster[i]._mhitpoints < (int)((uint)(ushort)monster[i]._mmaxhp << 0x10) >> 0x11) {
		if (monster[i]._mgoal != '\x03') {
			if (monster[i].leaderflag != '\0') {
				monster[(uint)monster[i].leader].packsize = monster[(uint)monster[i].leader].packsize + -1;
				monster[i].leaderflag = '\0';
			}
			monster[i]._mgoal = '\x03';
			monster[i]._mgoalvar3 = 10;
			goto LAB_8014e098;
		}
	}
	else {
LAB_8014e098:
		if (monster[i]._mgoal != '\x03') goto LAB_8014e394;
	}
	if (monster[i]._mgoalvar3 != 0) {
		cVar1 = monster[i]._my;
		monster[i]._mgoalvar3 = monster[i]._mgoalvar3 + -1;
		if (dung_map[(int)monster[i]._mx * 0x6c + (int)cVar1].dDead == '\0') {
			if (monster[i]._mgoalvar1 == 0) {
				lVar5 = random__Fil(0x78,2);
				if (lVar5 == 0) {
					uVar3 = 4;
					do {
						uVar6 = uVar3;
						uVar7 = 4;
						do {
							if (bVar2) break;
							if ((uVar6 < 0x5e) && (uVar7 < 0x5e)) {
								y2 = (int)monster[i]._my + uVar6;
								x2 = (int)monster[i]._mx + uVar7;
								bVar2 = false;
								if (dung_map[x2 * 0x6c + y2].dDead != '\0') {
									uVar4 = LineClearF__FPFii_Uciiii
																		(CheckNoSolid__Fii,(int)monster[i]._mx,(int)monster[i]._my,x2,y2
																		);
									bVar2 = uVar4 != '\0';
								}
							}
							uVar7 = uVar7 - 1;
						} while (-5 < (int)uVar7);
					} while ((-5 < (int)(uVar6 - 1)) && (uVar3 = uVar6 - 1, !bVar2));
					y2 = uVar7 + 1;
				}
				else {
					uVar3 = 0xfffffffc;
					do {
						uVar6 = uVar3;
						uVar7 = 0xfffffffc;
						do {
							if (bVar2) break;
							if ((uVar6 < 0x5e) && (uVar7 < 0x5e)) {
								y2 = (int)monster[i]._my + uVar6;
								x2 = (int)monster[i]._mx + uVar7;
								bVar2 = false;
								if (dung_map[x2 * 0x6c + y2].dDead != '\0') {
									uVar4 = LineClearF__FPFii_Uciiii
																		(CheckNoSolid__Fii,(int)monster[i]._mx,(int)monster[i]._my,x2,y2
																		);
									bVar2 = uVar4 != '\0';
								}
							}
							uVar7 = uVar7 + 1;
						} while ((int)uVar7 < 5);
					} while (((int)(uVar6 + 1) < 5) && (uVar3 = uVar6 + 1, !bVar2));
					y2 = uVar7 - 1;
				}
				if (bVar2) {
					cVar1 = monster[i]._my;
					monster[i]._mgoalvar1 = (int)monster[i]._mx + y2 + 1;
					monster[i]._mgoalvar2 = (int)cVar1 + uVar6 + 1;
				}
				if (monster[i]._mgoalvar1 == 0) goto LAB_8014e394;
			}
			y2 = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,monster[i]._mgoalvar1 + -1,
															 monster[i]._mgoalvar2 + -1);
			monster[i]._mdir = (char)y2;
			M_CallWalk__Fii(i,(int)(char)y2);
		}
		else {
			M_StartEat__Fi(i);
			if ((monster[i]._mFlags & 8) == 0) {
				monster[i]._mhitpoints = monster[i]._mhitpoints + 0x40;
			}
			y2 = (uint)(ushort)monster[i]._mmaxhp << 0x10;
			if ((y2 >> 0x11) + (y2 >> 0x12) <= (int)monster[i]._mhitpoints) {
				monster[i]._mgoal = '\x01';
				monster[i]._mgoalvar1 = 0;
				monster[i]._mgoalvar2 = 0;
			}
		}
	}
LAB_8014e394:
	if (monster[i]._mmode == '\0') {
		MAI_SkelSd__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Garg__Fi(int i /*$s2*/)
 // line 3187, offset 0x8014e3d0
	/* begin block 1 */
		// Start line: 3188
		// Start offset: 0x8014E3D0
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int mx; // $s1
	// 		int my; // $s3
	// 		int md; // $s4
	/* end block 1 */
	// End offset: 0x8014E58C
	// End Line: 3228

	/* begin block 2 */
		// Start line: 7311
	/* end block 2 */
	// End Line: 7312

void MAI_Garg__Fi(int i)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	byte bVar5;
	bool bVar6;
	uchar uVar7;
	int iVar8;
	int iVar9;
	
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	cVar3 = monster[i]._lasty;
	cVar4 = monster[i]._lastx;
	iVar8 = M_GetDir__Fi(i);
	if ((monster[i]._msquelch == '\0') || ((monster[i]._mFlags & 4) == 0)) {
		if ((monster[i]._mmode == '\0') && (monster[i]._msquelch != '\0')) {
			if ((int)monster[i]._mhitpoints < (int)((uint)(ushort)monster[i]._mmaxhp << 0x10) >> 0x11) {
				monster[i]._mgoal = '\x02';
			}
			if (monster[i]._mgoal == '\x02') {
				iVar9 = abs((int)cVar1 - (int)cVar4);
				bVar6 = false;
				if (iVar9 < (int)((uint)monster[i]._mint + 2)) {
					iVar9 = abs((int)cVar2 - (int)cVar3);
					bVar6 = iVar9 < (int)((uint)monster[i]._mint + 2);
				}
				if (bVar6) {
					uVar7 = M_CallWalk__Fii(i,(int)(&opposite)[iVar8]);
					if (uVar7 == '\0') {
						monster[i]._mgoal = '\x01';
					}
				}
				else {
					monster[i]._mgoal = '\x01';
					M_StartHeal__Fi(i);
				}
			}
			MAI_Round__FiUc(i,'\0');
		}
	}
	else {
		M_Enemy__Fi(i);
		cVar1 = monster[i]._my;
		bVar5 = monster[i]._menemyy;
		iVar8 = abs((int)monster[i]._mx - (uint)monster[i]._menemyx);
		bVar6 = false;
		if (iVar8 < (int)((uint)monster[i]._mint + 2)) {
			iVar8 = abs((int)cVar1 - (uint)bVar5);
			bVar6 = iVar8 < (int)((uint)monster[i]._mint + 2);
		}
		if (bVar6) {
			monster[i]._mFlags = monster[i]._mFlags & 0xfffb;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_RoundRanged__FiiUciUc(int i /*$s2*/, int missile_type /*stack -72*/, unsigned char checkdoors /*$s0*/, int dam /*stack -64*/, int lessmissiles /*stack 16*/)
 // line 3240, offset 0x8014e5b0
	/* begin block 1 */
		// Start line: 3241
		// Start offset: 0x8014E5B0
		// Variables:
	// 		int fx; // $s5
	// 		int fy; // $fp
	// 		int mx; // $s6
	// 		int my; // $s7
	// 		int md; // stack offset -48
	// 		int v; // $s3
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x8014EA90
	// End Line: 3332

	/* begin block 2 */
		// Start line: 7425
	/* end block 2 */
	// End Line: 7426

void MAI_RoundRanged__FiiUciUc(int i,int missile_type,uchar checkdoors,int dam,int lessmissiles)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	int mdir;
	long lVar4;
	int __x;
	long lVar5;
	int iVar6;
	int iVar7;
	uint x2;
	int __x_00;
	int __x_01;
	uint y2;
	char local_30;
	
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._msquelch == '\0') {
		return;
	}
	x2 = (uint)monster[i]._menemyx;
	y2 = (uint)monster[i]._menemyy;
	__x_00 = (int)monster[i]._mx - x2;
	__x_01 = (int)monster[i]._my - y2;
	mdir = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
														 (int)monster[i]._lasty);
	if ((checkdoors != '\0') && (monster[i]._msquelch != -1)) {
		MonstCheckDoors__Fi(i);
	}
	lVar4 = random__Fil(0x79,(long)&DAT_00002710);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[i]._msquelch == -1)) &&
		 (dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dTransVal ==
			dung_map[x2 * 0x6c + y2].dTransVal)) {
		bVar1 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
				 (lVar5 = random__Fil(0x7a,4 << (lessmissiles & 0x1fU)), lVar5 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_8014e8a0;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar5 = random__Fil(0x7b,2);
				monster[i]._mgoalvar2 = lVar5;
			}
		}
		monster[i]._mgoal = '\x04';
		iVar6 = abs(__x_00);
		iVar7 = abs(__x_01);
		__x = __x_01;
		if (iVar7 < iVar6) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar6 = monster[i]._mgoalvar1;
		monster[i]._mgoalvar1 = iVar6 + 1;
		bVar1 = false;
		if (__x << 1 <= iVar6) {
			uVar3 = DirOK__Fii(i,mdir);
			bVar1 = uVar3 != '\0';
		}
		if (!bVar1) {
			if ((lVar4 < (int)((uint)monster[i]._mint * 500 + 500) >> (lessmissiles & 0x1fU)) &&
				 (uVar3 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2), uVar3 != '\0')) {
				M_StartRSpAttack__Fiii(i,missile_type,dam);
			}
			else {
				M_RoundWalk__FiiRi(i,mdir,&monster[i]._mgoalvar2);
			}
			goto LAB_8014e8a0;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_8014e8a0:
	bVar1 = false;
	if (monster[i]._mgoal == '\x01') {
		__x = abs(__x_00);
		if (((((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
				 (lVar4 < (int)((uint)monster[i]._mint * 500 + 1000) >> (lessmissiles & 0x1fU))) ||
				(lVar4 < (int)((uint)monster[i]._mint * 500 + 500) >> (lessmissiles & 0x1fU))) &&
			 (uVar3 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2), uVar3 != '\0')) {
			bVar1 = true;
		}
		bVar2 = false;
		if (bVar1) {
			M_StartRSpAttack__Fiii(i,missile_type,dam);
		}
		else {
			__x_00 = abs(__x_00);
			if (__x_00 < 2) {
				__x_00 = abs(__x_01);
				bVar2 = __x_00 < 2;
			}
			if (bVar2) {
				if (lVar4 < (int)((uint)monster[i]._mint * 1000 + 6000)) {
					local_30 = (char)mdir;
					monster[i]._mdir = local_30;
					M_StartAttack__Fi(i);
				}
			}
			else {
				lVar4 = random__Fil(0x7c,100);
				__x_00 = (uint)monster[i]._mint * 1000;
				if ((lVar4 < (int)(&DAT_00001388 + __x_00)) ||
					 ((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
						((monster[i]._mVar2 == 0 && (lVar4 < (int)(&DAT_00001f40 + __x_00))))))) {
					M_CallWalk__Fii(i,mdir);
				}
			}
		}
	}
	if (monster[i]._mmode == '\0') {
		lVar4 = random__Fil(0x7d,10);
		M_StartDelay__Fii(i,lVar4 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Magma__Fi(int i /*$a0*/)
 // line 3336, offset 0x8014eac4
	/* begin block 1 */
		// Start line: 3337
		// Start offset: 0x8014EAC4
	/* end block 1 */
	// End offset: 0x8014EAE0
	// End Line: 3338

	/* begin block 2 */
		// Start line: 7639
	/* end block 2 */
	// End Line: 7640

void MAI_Magma__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x15,'\x01',4,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Storm__Fi(int i /*$a0*/)
 // line 3341, offset 0x8014eaf0
	/* begin block 1 */
		// Start line: 3342
		// Start offset: 0x8014EAF0
	/* end block 1 */
	// End offset: 0x8014EB0C
	// End Line: 3343

	/* begin block 2 */
		// Start line: 7650
	/* end block 2 */
	// End Line: 7651

void MAI_Storm__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x16,'\x01',4,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Acid__Fi(int i /*$a0*/)
 // line 3346, offset 0x8014eb1c
	/* begin block 1 */
		// Start line: 3347
		// Start offset: 0x8014EB1C
	/* end block 1 */
	// End offset: 0x8014EB3C
	// End Line: 3348

	/* begin block 2 */
		// Start line: 7661
	/* end block 2 */
	// End Line: 7662

void MAI_Acid__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x39,'\0',4,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Diablo__Fi(int i /*$a0*/)
 // line 3352, offset 0x8014eb4c
	/* begin block 1 */
		// Start line: 3353
		// Start offset: 0x8014EB4C
	/* end block 1 */
	// End offset: 0x8014EB68
	// End Line: 3354

	/* begin block 2 */
		// Start line: 7674
	/* end block 2 */
	// End Line: 7675

void MAI_Diablo__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x43,'\0',0x28,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_RR2__Fiii(int i /*$s4*/, int mistype /*stack -56*/, int dam /*stack -48*/)
 // line 3357, offset 0x8014eb78
	/* begin block 1 */
		// Start line: 3358
		// Start offset: 0x8014EB78
		// Variables:
	// 		int fx; // $s6
	// 		int fy; // $s7
	// 		int mx; // $s2
	// 		int my; // $s3
	// 		int md; // $fp
	// 		int v; // $s5
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x8014F044
	// End Line: 3450

	/* begin block 2 */
		// Start line: 7685
	/* end block 2 */
	// End Line: 7686

void MAI_RR2__Fiii(int i,int mistype,int dam)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	int mdir;
	long lVar6;
	int __x;
	long lVar7;
	int iVar8;
	int iVar9;
	int __x_00;
	int __x_01;
	uint x2;
	uint y2;
	
	bVar3 = false;
	cVar1 = monster[i]._my;
	bVar2 = monster[i]._menemyy;
	mdir = abs((int)monster[i]._mx - (uint)monster[i]._menemyx);
	if ((4 < mdir) || (mdir = abs((int)cVar1 - (uint)bVar2), 4 < mdir)) {
		bVar3 = true;
	}
	if (bVar3) {
		MAI_SkelSd__Fi(i);
		return;
	}
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._msquelch == '\0') {
		return;
	}
	y2 = (uint)monster[i]._menemyy;
	x2 = (uint)monster[i]._menemyx;
	__x_01 = (int)monster[i]._my - y2;
	__x_00 = (int)monster[i]._mx - x2;
	mdir = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
														 (int)monster[i]._lasty);
	if (monster[i]._msquelch != -1) {
		MonstCheckDoors__Fi(i);
	}
	lVar6 = random__Fil(0x79,100);
	bVar3 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar3 = __x < 2;
	}
	if (((bVar3) || (monster[i]._msquelch != -1)) ||
		 (dung_map[(int)monster[i]._mx * 0x6c + (int)monster[i]._my].dTransVal !=
			dung_map[x2 * 0x6c + y2].dTransVal)) {
LAB_8014ee24:
		monster[i]._mgoal = '\x01';
	}
	else {
		bVar3 = false;
		if (monster[i]._mgoal == '\x04') {
LAB_8014eda8:
			monster[i]._mgoal = '\x04';
			monster[i]._mgoalvar3 = 4;
			iVar8 = abs(__x_00);
			iVar9 = abs(__x_01);
			__x = __x_01;
			if (iVar9 < iVar8) {
				__x = __x_00;
			}
			__x = abs(__x);
			iVar8 = monster[i]._mgoalvar1;
			monster[i]._mgoalvar1 = iVar8 + 1;
			bVar3 = false;
			if (__x << 1 <= iVar8) {
				uVar5 = DirOK__Fii(i,mdir);
				bVar3 = uVar5 != '\0';
			}
			if (bVar3) goto LAB_8014ee24;
			if (lVar6 < (int)((uint)monster[i]._mint * 5 + 0x50)) {
				M_RoundWalk__FiiRi(i,mdir,&monster[i]._mgoalvar2);
			}
		}
		else {
			__x = abs(__x_00);
			if ((2 < __x) || (__x = abs(__x_01), 2 < __x)) {
				bVar3 = true;
			}
			if (bVar3) {
				if (monster[i]._mgoal != '\x04') {
					monster[i]._mgoalvar1 = 0;
					lVar7 = random__Fil(0x7b,2);
					monster[i]._mgoalvar2 = lVar7;
				}
				goto LAB_8014eda8;
			}
		}
	}
	bVar3 = false;
	if (monster[i]._mgoal != '\x01') goto LAB_8014f020;
	__x = abs(__x_00);
	if (((((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
			 (lVar6 < (int)((uint)monster[i]._mint * 5 + 10))) ||
			((lVar6 < (int)((uint)monster[i]._mint * 5 + 5) || (monster[i]._mgoalvar3 == 4)))) &&
		 (uVar5 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2), uVar5 != '\0')) {
		bVar3 = true;
	}
	bVar4 = false;
	if (bVar3) {
LAB_8014ef80:
		M_StartRSpAttack__Fiii(i,mistype,dam);
	}
	else {
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar4 = __x_00 < 2;
		}
		if (bVar4) {
			lVar6 = random__Fil(0x7c,100);
			if (lVar6 < (int)((uint)monster[i]._mint * 10 + 0x28)) {
				monster[i]._mdir = (char)mdir;
				lVar6 = random__Fil(0x7c,2);
				if (lVar6 == 0) goto LAB_8014ef80;
				M_StartAttack__Fi(i);
			}
		}
		else {
			lVar6 = random__Fil(0x7c,100);
			__x_00 = (uint)monster[i]._mint * 10;
			if ((lVar6 < __x_00 + 0x32) ||
				 (((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
					 (monster[i]._mVar2 == 0)) && (lVar6 < __x_00 + 0x50)))) {
				M_CallWalk__Fii(i,mdir);
			}
		}
	}
	monster[i]._mgoalvar3 = 1;
LAB_8014f020:
	if (monster[i]._mmode == '\0') {
		lVar6 = random__Fil(0x7d,10);
		M_StartDelay__Fii(i,lVar6 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Mega__Fi(int i /*$a0*/)
 // line 3454, offset 0x8014f078
	/* begin block 1 */
		// Start line: 3455
		// Start offset: 0x8014F078
	/* end block 1 */
	// End offset: 0x8014F08C
	// End Line: 3456

	/* begin block 2 */
		// Start line: 7904
	/* end block 2 */
	// End Line: 7905

void MAI_Mega__Fi(int i)

{
	MAI_RR2__Fiii(i,0x31,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SkelKing__Fi(int i /*$s4*/)
 // line 3462, offset 0x8014f09c
	/* begin block 1 */
		// Start line: 3463
		// Start offset: 0x8014F09C
		// Variables:
	// 		int fx; // $s3
	// 		int fy; // $s7
	// 		int mx; // $fp
	// 		int my; // stack offset -56
	// 		int md; // $s6
	// 		int v; // stack offset -48
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	// 		int nx; // $s1
	// 		int ny; // $s0
	// 		int _mx; // $s2
	// 		int _my; // $s5
	/* end block 1 */
	// End offset: 0x8014F5A4
	// End Line: 3553

	/* begin block 2 */
		// Start line: 7920
	/* end block 2 */
	// End Line: 7921

void MAI_SkelKing__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	int mdir;
	long lVar5;
	int __x;
	long lVar6;
	int iVar7;
	int iVar8;
	int __x_00;
	int x1;
	uint x2;
	int y1;
	uint y2;
	int __x_01;
	
	x1 = (int)monster[i]._mx;
	y1 = (int)monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._msquelch == '\0') {
		return;
	}
	x2 = (uint)monster[i]._menemyx;
	y2 = (uint)monster[i]._menemyy;
	mdir = GetDirection__Fiiii(x1,y1,(int)monster[i]._lastx,(int)monster[i]._lasty);
	__x_01 = x1 - x2;
	__x_00 = y1 - y2;
	if (monster[i]._msquelch != -1) {
		MonstCheckDoors__Fi(i);
	}
	lVar5 = random__Fil(0x7e,100);
	bVar3 = false;
	__x = abs(__x_01);
	if (__x < 2) {
		__x = abs(__x_00);
		bVar3 = __x < 2;
	}
	if (((!bVar3) && (monster[i]._msquelch == -1)) &&
		 (dung_map[x1 * 0x6c + y1].dTransVal == dung_map[x2 * 0x6c + y2].dTransVal)) {
		bVar3 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_01);
			if (((2 < __x) || (__x = abs(__x_00), 2 < __x)) && (lVar6 = random__Fil(0x7f,4), lVar6 == 0))
			{
				bVar3 = true;
			}
			if (!bVar3) goto LAB_8014f394;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar6 = random__Fil(0x80,2);
				monster[i]._mgoalvar2 = lVar6;
			}
		}
		monster[i]._mgoal = '\x04';
		iVar7 = abs(__x_01);
		iVar8 = abs(__x_00);
		__x = __x_01;
		if (iVar7 <= iVar8) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar7 = monster[i]._mgoalvar1;
		monster[i]._mgoalvar1 = iVar7 + 1;
		bVar3 = false;
		if (__x << 1 <= iVar7) {
			uVar4 = DirOK__Fii(i,mdir);
			bVar3 = uVar4 != '\0';
		}
		if ((!bVar3) && (dung_map[x1 * 0x6c + y1].dTransVal == dung_map[x2 * 0x6c + y2].dTransVal)) {
			uVar4 = M_RoundWalk__FiiRi(i,mdir,&monster[i]._mgoalvar2);
			if (uVar4 == '\0') {
				lVar6 = random__Fil(0x7d,10);
				M_StartDelay__Fii(i,lVar6 + 10);
			}
			goto LAB_8014f394;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_8014f394:
	if (monster[i]._mgoal == '\x01') {
		bVar3 = false;
		if (((gbMaxPlayers == '\x01') &&
				((((__x = abs(__x_01), 2 < __x || (__x = abs(__x_00), 2 < __x)) &&
					(lVar5 < (int)((uint)monster[i]._mint * 4 + 0x23))) || (lVar5 < 6)))) &&
			 (uVar4 = LineClear__Fiiii(x1,y1,x2,y2), uVar4 != '\0')) {
			bVar3 = true;
		}
		if (bVar3) {
			cVar1 = offset_x[mdir];
			cVar2 = offset_y[mdir];
			uVar4 = PosOkMonst__Fiii(i,x1 + (int)cVar1,y1 + (int)cVar2);
			if ((uVar4 != '\0') && (nummonsters < 200)) {
				M_SpawnSkel__Fiii(x1 + (int)cVar1,y1 + (int)cVar2,mdir);
				M_StartSpStand__Fii(i,mdir);
			}
		}
		else {
			bVar3 = false;
			x1 = abs(__x_01);
			if (x1 < 2) {
				x1 = abs(__x_00);
				bVar3 = x1 < 2;
			}
			if (bVar3) {
				if (lVar5 < (int)((uint)monster[i]._mint + 0x14)) {
					monster[i]._mdir = (char)mdir;
					M_StartAttack__Fi(i);
				}
			}
			else {
				lVar5 = random__Fil(0x81,100);
				if ((lVar5 < (int)((uint)monster[i]._mint + 0x19)) ||
					 ((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
						((monster[i]._mVar2 == 0 && (lVar5 < (int)((uint)monster[i]._mint + 0x4b))))))) {
					M_CallWalk__Fii(i,mdir);
				}
				else {
					lVar5 = random__Fil(0x82,10);
					M_StartDelay__Fii(i,lVar5 + 10);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Rhino__Fi(int i /*$s3*/)
 // line 3566, offset 0x8014f5d8
	/* begin block 1 */
		// Start line: 3567
		// Start offset: 0x8014F5D8
		// Variables:
	// 		int fx; // $s7
	// 		int fy; // $fp
	// 		int mx; // $s5
	// 		int my; // $s6
	// 		int md; // stack offset -56
	// 		int v; // stack offset -48
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	// 		int _mx; // $s2
	// 		int _my; // $s4
	/* end block 1 */
	// End offset: 0x8014FA4C
	// End Line: 3645

	/* begin block 2 */
		// Start line: 8157
	/* end block 2 */
	// End Line: 8158

void MAI_Rhino__Fi(int i)

{
	bool bVar1;
	uchar uVar2;
	int md;
	long lVar3;
	int __x;
	long lVar4;
	int iVar5;
	int iVar6;
	int x1;
	int y1;
	int __x_00;
	int __x_01;
	uint x2;
	uint y2;
	char local_38;
	
	x1 = (int)monster[i]._mx;
	y1 = (int)monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._msquelch == '\0') {
		return;
	}
	x2 = (uint)monster[i]._menemyx;
	y2 = (uint)monster[i]._menemyy;
	md = GetDirection__Fiiii(x1,y1,(int)monster[i]._lastx,(int)monster[i]._lasty);
	__x_00 = x1 - x2;
	__x_01 = y1 - y2;
	if (monster[i]._msquelch != -1) {
		MonstCheckDoors__Fi(i);
	}
	lVar3 = random__Fil(0x83,100);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (!bVar1) {
		bVar1 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((4 < __x) || (__x = abs(__x_01), 4 < __x)) && (lVar4 = random__Fil(0x84,4), lVar4 != 0))
			{
				bVar1 = true;
			}
			if (!bVar1) goto LAB_8014f824;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar4 = random__Fil(0x85,2);
				monster[i]._mgoalvar2 = lVar4;
			}
		}
		monster[i]._mgoal = '\x04';
		iVar5 = abs(__x_00);
		iVar6 = abs(__x_01);
		__x = __x_01;
		if (iVar6 < iVar5) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar5 = monster[i]._mgoalvar1;
		monster[i]._mgoalvar1 = iVar5 + 1;
		if ((iVar5 < __x << 1) &&
			 (dung_map[x1 * 0x6c + y1].dTransVal == dung_map[x2 * 0x6c + y2].dTransVal)) {
			uVar2 = M_RoundWalk__FiiRi(i,md,&monster[i]._mgoalvar2);
			if (uVar2 == '\0') {
				lVar4 = random__Fil(0x7d,10);
				M_StartDelay__Fii(i,lVar4 + 10);
			}
			goto LAB_8014f824;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_8014f824:
	bVar1 = false;
	if (monster[i]._mgoal == '\x01') {
		__x = abs(__x_00);
		if (((4 < __x) || (__x = abs(__x_01), 4 < __x)) &&
			 ((lVar3 < (int)((uint)monster[i]._mint * 2 + 0x2b) &&
				(uVar2 = LineClearF1__FPFiii_Uciiiii(PosOkMonst__Fiii,i,x1,y1,x2,y2), uVar2 != '\0')))) {
			bVar1 = true;
		}
		if (bVar1) {
			md = AddMissile__Fiiiiiiciii(x1,y1,x2,y2,md,0x14,(int)monster[i]._menemy,i,0,0);
			if (md != -1) {
				if ((monster[i].MData)->snd_special != '\0') {
					PlayEffect__Fii(i,3);
				}
				dung_map[x1 * 0x6c + y1].dMonster = ~(ushort)i;
				monster[i]._mmode = '\x0e';
			}
		}
		else {
			bVar1 = false;
			x1 = abs(__x_00);
			if (x1 < 2) {
				x1 = abs(__x_01);
				bVar1 = x1 < 2;
			}
			if (bVar1) {
				if (lVar3 < (int)((uint)monster[i]._mint * 2 + 0x1c)) {
					local_38 = (char)md;
					monster[i]._mdir = local_38;
					M_StartAttack__Fi(i);
				}
			}
			else {
				lVar3 = random__Fil(0x86,100);
				x1 = (uint)monster[i]._mint * 2;
				if ((lVar3 < x1 + 0x21) ||
					 (((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
						 (monster[i]._mVar2 == 0)) && (lVar3 < x1 + 0x53)))) {
					M_CallWalk__Fii(i,md);
				}
				else {
					lVar3 = random__Fil(0x87,10);
					M_StartDelay__Fii(i,lVar3 + 10);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Counselor__Fi(int i /*$s2*/)
 // line 3657, offset 0x8014fa80
	/* begin block 1 */
		// Start line: 3658
		// Start offset: 0x8014FA80
		// Variables:
	// 		int fx; // stack offset -72
	// 		int fy; // stack offset -64
	// 		int mx; // $s3
	// 		int my; // $s5
	// 		int md; // $s6
	// 		int v; // stack offset -56
	// 		int dist; // $fp
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x8014FF18
	// End Line: 3752

	/* begin block 2 */
		// Start line: 8369
	/* end block 2 */
	// End Line: 8370

void MAI_Counselor__Fi(int i)

{
	byte bVar1;
	short sVar2;
	ushort uVar3;
	bool bVar4;
	uchar uVar5;
	int md;
	long lVar6;
	int iVar7;
	int iVar8;
	int __x;
	uint x2;
	uint y2;
	int __x_00;
	int x1;
	int __x_01;
	int y1;
	
	x1 = (int)monster[i]._mx;
	y1 = (int)monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._msquelch == '\0') {
		return;
	}
	x2 = (uint)monster[i]._menemyx;
	y2 = (uint)monster[i]._menemyy;
	md = GetDirection__Fiiii(x1,y1,(int)monster[i]._lastx,(int)monster[i]._lasty);
	__x_00 = x1 - x2;
	__x_01 = y1 - y2;
	if (monster[i]._msquelch != -1) {
		MonstCheckDoors__Fi(i);
	}
	lVar6 = random__Fil(0x79,100);
	bVar1 = monster[i]._mgoal;
	if (bVar1 == 2) {
		x1 = monster[i]._mgoalvar1;
		monster[i]._mgoalvar1 = x1 + 1;
		if (x1 < 4) {
			M_CallWalk__Fii(i,(int)(&opposite)[md]);
			goto LAB_8014fef4;
		}
	}
	else {
		if (bVar1 != 4) {
			bVar4 = false;
			if (bVar1 != 1) goto LAB_8014fef4;
			__x_00 = abs(__x_00);
			if (__x_00 < 2) {
				__x_00 = abs(__x_01);
				bVar4 = __x_00 < 2;
			}
			if (bVar4) {
				uVar3 = monster[i]._mmaxhp;
				sVar2 = monster[i]._mhitpoints;
				monster[i]._mdir = (char)md;
				if ((int)((uint)uVar3 << 0x10) >> 0x11 <= (int)sVar2) {
					if ((monster[i]._mVar1 == 0xd) ||
						 (lVar6 = random__Fil(0x69,100), lVar6 < (int)((uint)monster[i]._mint * 2 + 0x14))) {
						M_StartRAttack__Fiii(i,-1,0);
						AddMissile__Fiiiiiiciii(x1,y1,0,0,(int)monster[i]._mdir,0xb,(uint)bVar1,i,4,0);
						AddMissile__Fiiiiiiciii(x1,y1,0,0,(int)monster[i]._mdir,0xc,(uint)bVar1,i,4,0);
						goto LAB_8014fef4;
					}
LAB_8014fed4:
					lVar6 = random__Fil(0x69,10);
					M_StartDelay__Fii(i,lVar6 - ((uint)monster[i]._mint * 2 + -10));
					goto LAB_8014fef4;
				}
				uVar5 = '\x02';
			}
			else {
				if ((lVar6 < (int)((uint)monster[i]._mint * 5 + 0x32)) &&
					 (uVar5 = LineClear__Fiiii(x1,y1,x2,y2), uVar5 != '\0')) {
					lVar6 = random__Fil(0x4d,((uint)monster[i].mMaxDamage - (uint)monster[i].mMinDamage) + 1);
					M_StartRAttack__Fiii
										(i,(uint)(byte)(&DAT_8012bc80)[(uint)monster[i]._mint],
										 lVar6 + (uint)monster[i].mMinDamage);
					goto LAB_8014fef4;
				}
				lVar6 = random__Fil(0x7c,100);
				if (0x1d < lVar6) goto LAB_8014fed4;
				uVar5 = '\x04';
			}
			monster[i]._mgoal = uVar5;
			monster[i]._mgoalvar1 = 0;
			M_StartFadeout__FiiUc(i,md,'\0');
			goto LAB_8014fef4;
		}
		iVar7 = abs(__x_00);
		iVar8 = abs(__x_01);
		__x = __x_01;
		if (iVar8 < iVar7) {
			__x = __x_00;
		}
		bVar4 = false;
		__x = abs(__x);
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar4 = __x_00 < 2;
		}
		if (((!bVar4) && (monster[i]._msquelch == -1)) &&
			 (dung_map[x1 * 0x6c + y1].dTransVal == dung_map[x2 * 0x6c + y2].dTransVal)) {
			x1 = monster[i]._mgoalvar1;
			monster[i]._mgoalvar1 = x1 + 1;
			bVar4 = false;
			if (__x << 1 <= x1) {
				uVar5 = DirOK__Fii(i,md);
				bVar4 = uVar5 != '\0';
			}
			if (!bVar4) {
				M_RoundWalk__FiiRi(i,md,&monster[i]._mgoalvar2);
				goto LAB_8014fef4;
			}
		}
	}
	monster[i]._mgoal = '\x01';
	M_StartFadein__FiiUc(i,md,'\x01');
LAB_8014fef4:
	if (monster[i]._mmode == '\0') {
		lVar6 = random__Fil(0x7d,10);
		M_StartDelay__Fii(i,lVar6 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Garbud__Fi(int i /*$s3*/)
 // line 3759, offset 0x8014ff4c
	/* begin block 1 */
		// Start line: 3760
		// Start offset: 0x8014FF4C
		// Variables:
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s1
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x801500D8
	// End Line: 3789

	/* begin block 2 */
		// Start line: 8592
	/* end block 2 */
	// End Line: 8593

void MAI_Garbud__Fi(int i)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	MonsterStruct *pMVar5;
	
	pMVar5 = monster + i;
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	iVar4 = M_GetDir__Fi(i);
	if (pMVar5->mtalkmsg - 0x90U < 3) {
		if ((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) == 0) {
			if (monster[i]._mgoal == '\a') {
				pMVar5->mtalkmsg = pMVar5->mtalkmsg + 1;
				monster[i]._mgoal = '\x06';
			}
			goto LAB_80150018;
		}
LAB_80150054:
		if ((pMVar5->mtalkmsg == 0x93) && (uVar3 = effect_is_playing__Fi(0x34d), uVar3 == '\0')) {
			uVar3 = monster[i]._mgoal;
			if (uVar3 != '\a') goto LAB_801500a4;
			monster[i]._mgoal = '\x01';
			monster[i]._msquelch = -1;
			pMVar5->mtalkmsg = 0;
		}
	}
	else {
LAB_80150018:
		if ((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) != 0) goto LAB_80150054;
	}
	uVar3 = monster[i]._mgoal;
LAB_801500a4:
	if ((uVar3 == '\x01') || (uVar3 == '\x04')) {
		MAI_Round__FiUc(i,'\x01');
	}
	monster[i]._mdir = (char)iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Zhar__Fi(int i /*$s4*/)
 // line 3797, offset 0x801500fc
	/* begin block 1 */
		// Start line: 3798
		// Start offset: 0x801500FC
		// Variables:
	// 		int mx; // $s3
	// 		int my; // $s2
	// 		int md; // $s5
	// 		struct MonsterStruct *Monst; // $s1
	// 		int _mx; // $s0
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x801502CC
	// End Line: 3829

	/* begin block 2 */
		// Start line: 8687
	/* end block 2 */
	// End Line: 8688

void MAI_Zhar__Fi(int i)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int __x;
	MonsterStruct *pMVar5;
	int __x_00;
	
	pMVar5 = monster + i;
	__x = (int)monster[i]._mx;
	__x_00 = (int)monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	iVar2 = M_GetDir__Fi(i);
	iVar3 = __x_00 * 2;
	if (pMVar5->mtalkmsg == 0x94) {
		if ((dung_map[__x * 0x6c + __x_00].dFlags & 2U) == 0) {
			iVar3 = __x_00 << 1;
			if (monster[i]._mgoal == '\a') {
				pMVar5->mtalkmsg = 0x95;
				monster[i]._mgoal = '\x06';
				iVar3 = __x_00 << 1;
			}
			goto LAB_801501c8;
		}
	}
	else {
LAB_801501c8:
		if (((&dung_map[__x * 0x6c].dFlags)[(iVar3 + __x_00) * 4] & 2U) == 0) goto LAB_80150288;
	}
	__x = __x - (uint)monster[i]._menemyx;
	__x_00 = __x_00 - (uint)monster[i]._menemyy;
	iVar3 = abs(__x);
	iVar4 = abs(__x_00);
	if (iVar3 <= iVar4) {
		__x = __x_00;
	}
	abs(__x);
	if (((pMVar5->mtalkmsg == 0x95) && (uVar1 = effect_is_playing__Fi(0x35b), uVar1 == '\0')) &&
		 (monster[i]._mgoal == '\a')) {
		monster[i]._mgoal = '\x01';
		monster[i]._msquelch = -1;
		pMVar5->mtalkmsg = 0;
	}
LAB_80150288:
	if (((uint)monster[i]._mgoal - 1 < 2) || (monster[i]._mgoal == 4)) {
		MAI_Counselor__Fi(i);
	}
	monster[i]._mdir = (char)iVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SnotSpil__Fi(int i /*$s3*/)
 // line 3837, offset 0x801502f4
	/* begin block 1 */
		// Start line: 3838
		// Start offset: 0x801502F4
		// Variables:
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s1
	// 		int _my; // $s2

		/* begin block 1.1 */
			// Start line: 3838
			// Start offset: 0x801502F4

			/* begin block 1.1.1 */
				// Start line: 3850
				// Start offset: 0x80150340

				/* begin block 1.1.1.1 */
					// Start line: 3860
					// Start offset: 0x801503E8

					/* begin block 1.1.1.1.1 */
						// Start line: 3860
						// Start offset: 0x80150428

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3864
							// Start offset: 0x80150428

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3864
								// Start offset: 0x8015045C
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x801504B8
							// End Line: 3871
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x801504B8
						// End Line: 3871
					/* end block 1.1.1.1.1 */
					// End offset: 0x801504EC
					// End Line: 3876
				/* end block 1.1.1.1 */
				// End offset: 0x801504EC
				// End Line: 3876
			/* end block 1.1.1 */
			// End offset: 0x80150504
			// End Line: 3880
		/* end block 1.1 */
		// End offset: 0x80150504
		// End Line: 3880
	/* end block 1 */
	// End offset: 0x80150504
	// End Line: 3880

	/* begin block 2 */
		// Start line: 8784
	/* end block 2 */
	// End Line: 8785

void MAI_SnotSpil__Fi(int i)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	MonsterStruct *pMVar6;
	
	pMVar6 = monster + i;
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	if (monster[i]._mmode == '\0') {
		iVar4 = M_GetDir__Fi(i);
		iVar5 = pMVar6->mtalkmsg;
		if (iVar5 == 0x14) {
			if (((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) == 0) &&
				 (monster[i]._mgoal == '\a')) {
				pMVar6->mtalkmsg = 0x15;
				monster[i]._mgoal = '\x06';
			}
			iVar5 = pMVar6->mtalkmsg;
		}
		if ((iVar5 == 0x15) && (QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x03')) {
			pMVar6->mtalkmsg = 0;
			monster[i]._mgoal = '\x01';
		}
		if ((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) != 0) {
			if (((pMVar6->mtalkmsg == 0x16) && (uVar3 = effect_is_playing__Fi(0x357), uVar3 == '\0')) &&
				 (monster[i]._mgoal == '\a')) {
				ObjChangeMap__Fiiii(setpc_x,setpc_y,setpc_x + setpc_w + 1,setpc_y + setpc_h + 1);
				QuestStruct_ARRAY_800e3404[1]._qvar1 = '\x03';
				RedoPlayerVision__Fv();
				monster[i]._mgoal = '\x01';
				monster[i]._msquelch = -1;
				pMVar6->mtalkmsg = 0;
			}
			if ((QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x03') &&
				 ((monster[i]._mgoal == '\x01' || (monster[i]._mgoal == '\x05')))) {
				MAI_Fallen__Fi(i);
			}
		}
		monster[i]._mdir = (char)iVar4;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Lazurus__Fi(int i /*$s3*/)
 // line 3888, offset 0x80150528
	/* begin block 1 */
		// Start line: 3889
		// Start offset: 0x80150528
		// Variables:
	// 		int md; // $s1
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s1
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x8015075C
	// End Line: 3935

	/* begin block 2 */
		// Start line: 8906
	/* end block 2 */
	// End Line: 8907

void MAI_Lazurus__Fi(int i)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	MonsterStruct *pMVar5;
	
	pMVar5 = monster + i;
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	iVar4 = M_GetDir__Fi(i);
	if ((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) != 0) {
		if (gbMaxPlayers == '\x01') {
			if (pMVar5->mtalkmsg == 0x23) {
				if (((monster[i]._mgoal == '\x06') && (plr[myplr]._px == 0x23)) && (plr[myplr]._py == 0x2e))
				{
					monster[i]._mmode = '\x11';
					QuestStruct_800e34b8._qvar1 = '\x05';
				}
				if (((pMVar5->mtalkmsg == 0x23) && (uVar3 = effect_is_playing__Fi(0x352), uVar3 == '\0')) &&
					 (monster[i]._mgoal == '\a')) {
					ObjChangeMapResync__Fiiii(1,0x12,0x14,0x18);
					RedoPlayerVision__Fv();
					QuestStruct_800e34b8._qvar1 = '\x06';
					monster[i]._mgoal = '\x01';
					monster[i]._msquelch = -1;
					pMVar5->mtalkmsg = 0;
				}
			}
			if (gbMaxPlayers == '\x01') goto LAB_80150718;
		}
		if (((pMVar5->mtalkmsg == 0x23) && (monster[i]._mgoal == '\x06')) &&
			 (QuestStruct_800e34b8._qvar1 < 4)) {
			monster[i]._mmode = '\x11';
		}
	}
LAB_80150718:
	if (((uint)monster[i]._mgoal - 1 < 2) || (monster[i]._mgoal == 4)) {
		MAI_Counselor__Fi(i);
	}
	monster[i]._mdir = (char)iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Lazhelp__Fi(int i /*$s3*/)
 // line 3943, offset 0x8015077c
	/* begin block 1 */
		// Start line: 3944
		// Start offset: 0x8015077C
		// Variables:
	// 		int md; // $s1
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s1
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x8015087C
	// End Line: 3974

	/* begin block 2 */
		// Start line: 9034
	/* end block 2 */
	// End Line: 9035

void MAI_Lazhelp__Fi(int i)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	if (monster[i]._mmode == '\0') {
		iVar4 = M_GetDir__Fi(i);
		if ((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) != 0) {
			uVar3 = '\x01';
			if ((gbMaxPlayers == '\x01') && (uVar3 = '\x06', 5 < QuestStruct_800e34b8._qvar1)) {
				monster[i]._mgoal = '\x01';
				monster[i].mtalkmsg = 0;
			}
			else {
				monster[i]._mgoal = uVar3;
			}
		}
		if (monster[i]._mgoal == '\x01') {
			MAI_Succ__Fi(i);
		}
		monster[i]._mdir = (char)iVar4;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Lachdanan__Fi(int i /*$s3*/)
 // line 3981, offset 0x8015089c
	/* begin block 1 */
		// Start line: 3982
		// Start offset: 0x8015089C
		// Variables:
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s1
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x80150A08
	// End Line: 4012

	/* begin block 2 */
		// Start line: 9128
	/* end block 2 */
	// End Line: 9129

void MAI_Lachdanan__Fi(int i)

{
	char cVar1;
	uchar uVar2;
	int iVar3;
	int iVar4;
	MonsterStruct *pMVar5;
	int iVar6;
	
	pMVar5 = monster + i;
	cVar1 = monster[i]._mx;
	iVar6 = (int)monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	iVar3 = M_GetDir__Fi(i);
	iVar4 = iVar6 * 2;
	if (pMVar5->mtalkmsg == 0x51) {
		if ((dung_map[(int)cVar1 * 0x6c + iVar6].dFlags & 2U) == 0) {
			iVar4 = iVar6 << 1;
			if (monster[i]._mgoal == '\a') {
				pMVar5->mtalkmsg = 0x52;
				monster[i]._mgoal = '\x06';
				iVar4 = iVar6 << 1;
			}
			goto LAB_80150964;
		}
	}
	else {
LAB_80150964:
		if (((&dung_map[(int)cVar1 * 0x6c].dFlags)[(iVar4 + iVar6) * 4] & 2U) == 0) goto LAB_801509f4;
	}
	if (((pMVar5->mtalkmsg == 0x53) && (uVar2 = effect_is_playing__Fi(0x351), uVar2 == '\0')) &&
		 (monster[i]._mgoal == '\a')) {
		pMVar5->mtalkmsg = 0;
		QuestStruct_ARRAY_800e33dc[0]._qactive = '\x03';
		M_StartKill__Fii(i,-1);
	}
LAB_801509f4:
	monster[i]._mdir = (char)iVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Warlord__Fi(int i /*$s3*/)
 // line 4020, offset 0x80150a2c
	/* begin block 1 */
		// Start line: 4021
		// Start offset: 0x80150A2C
		// Variables:
	// 		int md; // $s1
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s1
	// 		int _my; // $s2

		/* begin block 1.1 */
			// Start line: 4021
			// Start offset: 0x80150A2C

			/* begin block 1.1.1 */
				// Start line: 4032
				// Start offset: 0x80150A74

				/* begin block 1.1.1.1 */
					// Start line: 4033
					// Start offset: 0x80150A74

					/* begin block 1.1.1.1.1 */
						// Start line: 4034
						// Start offset: 0x80150ABC
					/* end block 1.1.1.1.1 */
					// End offset: 0x80150B28
					// End Line: 4046
				/* end block 1.1.1.1 */
				// End offset: 0x80150B28
				// End Line: 4046
			/* end block 1.1.1 */
			// End offset: 0x80150B58
			// End Line: 4053
		/* end block 1.1 */
		// End offset: 0x80150B58
		// End Line: 4053
	/* end block 1 */
	// End offset: 0x80150B58
	// End Line: 4053

	/* begin block 2 */
		// Start line: 9226
	/* end block 2 */
	// End Line: 9227

void MAI_Warlord__Fi(int i)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	int iVar4;
	MonsterStruct *pMVar5;
	
	pMVar5 = monster + i;
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	iVar4 = M_GetDir__Fi(i);
	if (((dung_map[(int)cVar1 * 0x6c + (int)cVar2].dFlags & 2U) != 0) && (pMVar5->mtalkmsg == 0x6e)) {
		if (monster[i]._mgoal == '\x06') {
			monster[i]._mmode = '\x11';
		}
		if ((pMVar5->mtalkmsg == 0x6e) && (uVar3 = effect_is_playing__Fi(0x358), uVar3 == '\0')) {
			uVar3 = monster[i]._mgoal;
			if (uVar3 != '\a') goto LAB_80150b30;
			monster[i]._mgoal = '\x01';
			monster[i]._msquelch = -1;
			pMVar5->mtalkmsg = 0;
		}
	}
	uVar3 = monster[i]._mgoal;
LAB_80150b30:
	if (uVar3 == '\x01') {
		MAI_SkelSd__Fi(i);
	}
	monster[i]._mdir = (char)iVar4;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteMonsterList__Fv()
 // line 4061, offset 0x80150b78
	/* begin block 1 */
		// Start line: 4062
		// Start offset: 0x80150B78
		// Variables:
	// 		int i; // $a0
	// 		int mi; // $v0
	/* end block 1 */
	// End offset: 0x80150C80
	// End Line: 4085

	/* begin block 2 */
		// Start line: 9326
	/* end block 2 */
	// End Line: 9327

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeleteMonsterList__Fv(void)

{
	short sVar1;
	int i;
	int iVar2;
	char *pcVar3;
	short *psVar4;
	
	iVar2 = 0;
	pcVar3 = &monster[0]._mDelFlag;
	i = 0;
	do {
		if (*pcVar3 != '\0') {
			(&monster[0]._mx)[i] = '\x01';
			(&monster[0]._my)[i] = '\0';
			(&monster[0]._mfutx)[i] = '\0';
			(&monster[0]._mfuty)[i] = '\0';
			(&monster[0]._moldx)[i] = '\0';
			(&monster[0]._moldy)[i] = '\0';
			*pcVar3 = '\0';
		}
		pcVar3 = pcVar3 + 0x70;
		iVar2 = iVar2 + 1;
		i = i + 0x70;
	} while (iVar2 < 4);
	i = 4;
	if (4 < nummonsters) {
		psVar4 = monstactive + 4;
		do {
			sVar1 = *psVar4;
			psVar4 = psVar4 + 1;
			if (monster[(int)sVar1]._mDelFlag == '\0') {
				i = i + 1;
			}
			else {
				DeleteMonster__Fi(i);
				i = 0;
				psVar4 = monstactive;
			}
		} while (i < nummonsters);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessMonsters__Fv()
 // line 4092, offset 0x80150c94
	/* begin block 1 */
		// Start line: 4093
		// Start offset: 0x80150C94
		// Variables:
	// 		int i; // $s7
	// 		int mi; // $s1
	// 		int raflag; // $s2
	// 		int mx; // $s5
	// 		int my; // $s6
	// 		int _menemy; // $s3
	// 		struct MonsterStruct *Monst; // $s0
	// 		int oldmode; // $v1
	/* end block 1 */
	// End offset: 0x801511E8
	// End Line: 4288

	/* begin block 2 */
		// Start line: 9394
	/* end block 2 */
	// End Line: 9395

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessMonsters__Fv(void)

{
	ushort uVar1;
	short sVar2;
	uchar uVar3;
	char cVar4;
	int iVar5;
	long lVar6;
	char cVar7;
	int iVar8;
	int i;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	DeleteMonsterList__Fv();
	iVar12 = 0;
	if (0 < nummonsters) {
		iVar5 = 0;
		do {
			i = (int)*(short *)((int)monstactive + iVar5);
			iVar10 = (int)monster[i]._mx;
			iVar11 = (int)monster[i]._my;
			iVar9 = (int)monster[i]._menemy;
			iVar5 = 0;
			if (1 < gbMaxPlayers) {
				SetRndSeed__Fl(monster[i]._mAISeed);
				lVar6 = GetRndSeed__Fv();
				monster[i]._mAISeed = lVar6;
			}
			if ((monster[i]._mFlags & 8) == 0) {
				iVar8 = (uint)(ushort)monster[i]._mhitpoints << 0x10;
				if ((iVar8 >> 0x10 < (int)monster[i]._mmaxhp) && (0 < iVar8 >> 0x16)) {
					iVar8 = (uint)(byte)monster[i].mLevel << 0x18;
					sVar2 = (short)((uint)iVar8 >> 0x10);
					if (iVar8 >> 0x18 < 2) {
						sVar2 = sVar2 >> 8;
					}
					else {
						sVar2 = sVar2 >> 9;
					}
					monster[i]._mhitpoints = monster[i]._mhitpoints + sVar2;
				}
			}
			if ((((dung_map[iVar10 * 0x6c + iVar11].dFlags & 2U) != 0) && (monster[i]._msquelch == '\0'))
				 && ((monster[i].MType)->mtype == '3')) {
				PlaySFX__Fi(USFX_CLEAVER);
			}
			if ((monster[i]._mFlags & 0x10) == 0) {
				monster[i]._menemyx = (uchar)plr[iVar9]._px;
				monster[i]._menemyy = (uchar)plr[iVar9]._py;
				if ((dung_map[iVar10 * 0x6c + iVar11].dFlags & 2U) == 0) {
					if ((monster[i]._msquelch != '\0') && (monster[i]._mAi != 'n')) {
						monster[i]._msquelch = monster[i]._msquelch + -1;
					}
				}
				else {
					monster[i]._msquelch = -1;
					monster[i]._lastx = (char)plr[iVar9]._px;
					monster[i]._lasty = (char)plr[iVar9]._py;
				}
			}
			else {
				uVar3 = monster[iVar9]._mfutx;
				monster[i]._lastx = uVar3;
				monster[i]._menemyx = uVar3;
				uVar3 = monster[iVar9]._mfuty;
				monster[i]._lasty = uVar3;
				monster[i]._menemyy = uVar3;
			}
			if (((dung_map[iVar10 * 0x6c + iVar11].dFlags & 0x40U) != 0) || (monster[i]._msquelch != '\0')
				 ) {
				while( true ) {
					if (((monster[i]._mFlags & 0x100) == 0) || (uVar3 = MAI_Path__Fi(i), uVar3 == '\0')) {
						(*(code *)AiProc[(uint)monster[i]._mAi])(i);
					}
					switch(monster[i]._mmode) {
					case '\0':
						iVar5 = M_DoStand__Fi(i);
						break;
					case '\x01':
						iVar5 = M_DoWalk__Fi(i);
						break;
					case '\x02':
						iVar5 = M_DoWalk2__Fi(i);
						break;
					case '\x03':
						iVar5 = M_DoWalk3__Fi(i);
						break;
					case '\x04':
						iVar5 = M_DoAttack__Fi(i);
						break;
					case '\x05':
						iVar5 = M_DoGotHit__Fi(i);
						break;
					case '\x06':
						iVar5 = M_DoDeath__Fi(i);
						break;
					case '\a':
						iVar5 = M_DoSAttack__Fi(i);
						break;
					case '\b':
						iVar5 = M_DoFadein__Fi(i);
						break;
					case '\t':
						iVar5 = M_DoFadeout__Fi(i);
						break;
					case '\n':
						iVar5 = M_DoRAttack__Fi(i);
						break;
					case '\v':
						iVar5 = M_DoSpStand__Fi(i);
						break;
					case '\f':
						iVar5 = M_DoRSpAttack__Fi(i);
						break;
					case '\r':
						iVar5 = M_DoDelay__Fi(i);
						break;
					case '\x0e':
						iVar5 = 0;
						break;
					case '\x0f':
						iVar5 = M_DoStone__Fi(i);
						break;
					case '\x10':
						iVar5 = M_DoHeal__Fi(i);
						break;
					case '\x11':
						iVar5 = M_DoTalk__Fi(i);
					}
					if (iVar5 == 0) break;
					GroupUnity__Fi(i);
				}
				if (monster[i]._mmode != '\x0f') {
					uVar1 = monster[i]._mFlags;
					cVar7 = monster[i]._mAnimCnt + '\x01';
					monster[i]._mAnimCnt = cVar7;
					if (((uVar1 & 4) == 0) && (monster[i]._mAnimDelay <= cVar7)) {
						uVar1 = monster[i]._mFlags;
						monster[i]._mAnimCnt = '\0';
						if ((uVar1 & 2) == 0) {
							cVar7 = monster[i]._mAnimLen;
							cVar4 = monster[i]._mAnimFrame + '\x01';
							monster[i]._mAnimFrame = cVar4;
							if (cVar7 < cVar4) {
								monster[i]._mAnimFrame = '\x01';
							}
						}
						else {
							cVar7 = monster[i]._mAnimFrame;
							monster[i]._mAnimFrame = cVar7 + -1;
							if (cVar7 == '\x01') {
								monster[i]._mAnimFrame = monster[i]._mAnimLen;
							}
						}
					}
				}
			}
			iVar12 = iVar12 + 1;
			iVar5 = iVar12 * 2;
		} while (iVar12 < nummonsters);
	}
	DeleteMonsterList__Fv();
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DirOK__Fii(int i /*$s2*/, int mdir /*$s0*/)
 // line 4296, offset 0x8015121c
	/* begin block 1 */
		// Start line: 4297
		// Start offset: 0x8015121C
		// Variables:
	// 		long fx; // $s1
	// 		long fy; // $s3
	// 		int tmp; // $v1

		/* begin block 1.1 */
			// Start line: 4338
			// Start offset: 0x80151468

			/* begin block 1.1.1 */
				// Start line: 4339
				// Start offset: 0x801514A8
				// Variables:
			// 		int mcount; // $t0

				/* begin block 1.1.1.1 */
					// Start line: 4340
					// Start offset: 0x801514A8
					// Variables:
				// 		int x; // $a3

					/* begin block 1.1.1.1.1 */
						// Start line: 4341
						// Start offset: 0x801514C4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 4342
							// Start offset: 0x801514D4
							// Variables:
						// 		int y; // $a1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x801515AC
						// End Line: 4353
					/* end block 1.1.1.1.1 */
					// End offset: 0x801515AC
					// End Line: 4353
				/* end block 1.1.1.1 */
				// End offset: 0x801515B8
				// End Line: 4354
			/* end block 1.1.1 */
			// End offset: 0x801515E0
			// End Line: 4356
		/* end block 1.1 */
		// End offset: 0x801515E0
		// End Line: 4356
	/* end block 1 */
	// End offset: 0x801515E4
	// End Line: 4359

	/* begin block 2 */
		// Start line: 9823
	/* end block 2 */
	// End Line: 9824

uchar DirOK__Fii(int i,int mdir)

{
	uchar uVar1;
	byte bVar2;
	bool bVar3;
	int y;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	uint uVar8;
	uint uVar9;
	uint x;
	uint y_00;
	
	y_00 = (int)monster[i]._my + (int)offset_y[mdir];
	x = (int)monster[i]._mx + (int)offset_x[mdir];
	if (((y_00 < 0x5e) && (x < 0x5e)) && (uVar1 = PosOkMonst__Fiii(i,x,y_00), uVar1 != '\0')) {
		if (mdir == 6) {
			uVar1 = SolidLoc__Fii(x,y_00 + 1);
			if (uVar1 != '\0') goto LAB_801513c4;
			bVar2 = dung_map[x * 0x6c + y_00 + 1].dFlags & 0x10;
LAB_801513bc:
			if (bVar2 != 0) goto LAB_801513c4;
		}
		else {
			if (mdir == 2) {
				uVar1 = SolidLoc__Fii(x + 1,y_00);
				if (uVar1 == '\0') {
					bVar2 = dung_map[(x + 1) * 0x6c + y_00].dFlags & 0x10;
					goto LAB_801513bc;
				}
				goto LAB_801513c4;
			}
			if (mdir == 4) {
				uVar1 = SolidLoc__Fii(x + 1,y_00);
				if (uVar1 != '\0') {
					return '\0';
				}
				y = y_00 + 1;
LAB_801513b0:
				bVar2 = SolidLoc__Fii(x,y);
				goto LAB_801513bc;
			}
			if (mdir == 0) {
				uVar1 = SolidLoc__Fii(x - 1,y_00);
				if (uVar1 != '\0') {
					return '\0';
				}
				y = y_00 - 1;
				goto LAB_801513b0;
			}
		}
		if (monster[i].leaderflag == '\x01') {
			bVar3 = false;
			y = abs(x - (int)monster[(uint)monster[i].leader]._mfutx);
			if (y < 4) {
				y = abs(y_00 - (int)monster[(uint)monster[i].leader]._mfuty);
				bVar3 = y < 4;
			}
		}
		else {
			if ((monster[i]._uniqtype == 0) ||
				 (uVar9 = 0, (UniqMonst[(uint)monster[i]._uniqtype - 1].mUnqAttr & 2) == 0)) {
				bVar3 = true;
			}
			else {
				uVar8 = x - 3;
				y = uVar8 * 0x510;
				while (uVar6 = y_00 - 3, (int)uVar8 <= (int)(x + 3)) {
					if ((int)uVar6 <= (int)(y_00 + 3)) {
						iVar7 = uVar6 * 0xc + y;
						do {
							if ((uVar6 < 0x5e) && (uVar8 < 0x5e)) {
								iVar5 = (int)*(short *)((int)&dung_map[0].dMonster + iVar7);
								if (iVar5 < 0) {
									iVar5 = -iVar5;
								}
								iVar4 = iVar5 << 3;
								if (iVar5 != 0) {
									iVar5 = iVar5 + -1;
									iVar4 = iVar5 * 8;
								}
								iVar5 = (iVar4 - iVar5) * 0x10;
								if (((((&monster[0].leaderflag)[iVar5] == '\x01') &&
										 ((uint)(&monster[0].leader)[iVar5] == i)) &&
										((int)(&monster[0]._mfutx)[iVar5] == uVar8)) &&
									 ((int)(&monster[0]._mfuty)[iVar5] == uVar6)) {
									uVar9 = uVar9 + 1;
								}
							}
							uVar6 = uVar6 + 1;
							iVar7 = iVar7 + 0xc;
						} while ((int)uVar6 <= (int)(y_00 + 3));
					}
					y = y + 0x510;
					uVar8 = uVar8 + 1;
				}
				bVar3 = uVar9 == (uint)monster[i].packsize;
			}
		}
	}
	else {
LAB_801513c4:
		bVar3 = false;
	}
	return (uchar)bVar3;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkMissile__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 4365, offset 0x80151604
	/* begin block 1 */
		// Start line: 4366
		// Start offset: 0x80151604
	/* end block 1 */
	// End offset: 0x80151664
	// End Line: 4367

	/* begin block 2 */
		// Start line: 9968
	/* end block 2 */
	// End Line: 9969

uchar PosOkMissile__Fii(int x,int y)

{
	bool bVar1;
	
	bVar1 = false;
	if (nMissileTable[(int)dung_map[x * 0x6c + y].dPiece] == '\0') {
		bVar1 = (dung_map[x * 0x6c + y].dFlags & 0x10U) == 0;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckNoSolid__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 4373, offset 0x8015166c
	/* begin block 1 */
		// Start line: 4374
		// Start offset: 0x8015166C
	/* end block 1 */
	// End offset: 0x801516A8
	// End Line: 4375

	/* begin block 2 */
		// Start line: 9984
	/* end block 2 */
	// End Line: 9985

uchar CheckNoSolid__Fii(int x,int y)

{
	return (uchar)(nSolidTable[(int)dung_map[x * 0x6c + y].dPiece] == '\0');
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ LineClearF__FPFii_Uciiii(TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear Clear /*stack -64*/, int x1 /*$s4*/, int y1 /*$s3*/, int x2 /*$s7*/, int y2 /*stack 16*/)
 // line 4401, offset 0x801516b0
	/* begin block 1 */
		// Start line: 4402
		// Start offset: 0x801516B0
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s1
	// 		int d; // $s0
	// 		int dincH; // $s6
	// 		int dincD; // $s2
	// 		int xincD; // $s1
	// 		int yincD; // $s1
	// 		int xorg; // stack offset -56
	// 		int yorg; // stack offset -48
	// 		unsigned char done; // $s5
	// 		int tmp; // $v0
	/* end block 1 */
	// End offset: 0x80151904
	// End Line: 4521

	/* begin block 2 */
		// Start line: 10039
	/* end block 2 */
	// End Line: 10040

uchar LineClearF__FPFii_Uciiii
								(TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear Clear,int x1,int y1,int x2,int y2)

{
	bool bVar1;
	int iVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int __x;
	int __x_00;
	
	bVar1 = false;
	__x_00 = x2 - x1;
	__x = y2 - y1;
	iVar4 = abs(__x_00);
	iVar5 = abs(__x);
	if (iVar5 < iVar4) {
		iVar4 = y1;
		iVar5 = x1;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar4 = y2;
			iVar5 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = __x * 2;
		if (__x < 1) {
			iVar7 = iVar6 + __x_00;
			__x = (__x + __x_00) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar6 - __x_00;
			__x = (__x - __x_00) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar5 != x2 || (iVar4 != y2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar6;
			if (!bVar1) {
				iVar4 = iVar4 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar5 = iVar5 + 1;
			if ((iVar5 != x1) || (bVar1 = false, iVar4 != y1)) {
				uVar3 = (*Clear)(iVar5,iVar4);
				bVar1 = false;
				if (uVar3 == '\0') {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar4 = y1;
		iVar5 = x1;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar4 = y2;
			iVar5 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = __x_00 * 2;
		if (__x_00 < 1) {
			iVar7 = iVar6 + __x;
			__x = (__x_00 + __x) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar6 - __x;
			__x = (__x_00 - __x) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar4 != y2 || (iVar5 != x2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar6;
			if (!bVar1) {
				iVar5 = iVar5 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar4 = iVar4 + 1;
			if ((iVar4 != y1) || (bVar1 = false, iVar5 != x1)) {
				uVar3 = (*Clear)(iVar5,iVar4);
				bVar1 = false;
				if (uVar3 == '\0') {
					bVar1 = true;
				}
			}
		}
	}
	return (uchar)(iVar5 == x2 && iVar4 == y2);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ LineClear__Fiiii(int x1 /*$v0*/, int y1 /*$v1*/, int x2 /*$t0*/, int y2 /*$a3*/)
 // line 4528, offset 0x80151938
	/* begin block 1 */
		// Start line: 4529
		// Start offset: 0x80151938
	/* end block 1 */
	// End offset: 0x80151968
	// End Line: 4530

	/* begin block 2 */
		// Start line: 10348
	/* end block 2 */
	// End Line: 10349

uchar LineClear__Fiiii(int x1,int y1,int x2,int y2)

{
	uchar uVar1;
	
	uVar1 = LineClearF__FPFii_Uciiii(PosOkMissile__Fii,x1,y1,x2,y2);
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ LineClearF1__FPFiii_Uciiiii(TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear Clear /*stack -72*/, int monst /*stack -64*/, int x1 /*$s4*/, int y1 /*$s3*/, int x2 /*stack 16*/, int y2 /*stack 20*/)
 // line 4540, offset 0x80151978
	/* begin block 1 */
		// Start line: 4541
		// Start offset: 0x80151978
		// Variables:
	// 		int dx; // $s2
	// 		int dy; // $s1
	// 		int d; // $s0
	// 		int dincH; // $s6
	// 		int dincD; // $s2
	// 		int xincD; // $s1
	// 		int yincD; // $s1
	// 		int xorg; // stack offset -56
	// 		int yorg; // stack offset -48
	// 		unsigned char done; // $s5
	// 		int tmp; // $v0
	/* end block 1 */
	// End offset: 0x80151BD8
	// End Line: 4656

	/* begin block 2 */
		// Start line: 10373
	/* end block 2 */
	// End Line: 10374

uchar LineClearF1__FPFiii_Uciiiii
								(TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear Clear,int monst,int x1,int y1,int x2,
								int y2)

{
	bool bVar1;
	int iVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int __x;
	int __x_00;
	
	bVar1 = false;
	__x_00 = x2 - x1;
	__x = y2 - y1;
	iVar4 = abs(__x_00);
	iVar5 = abs(__x);
	if (iVar5 < iVar4) {
		iVar4 = y1;
		iVar5 = x1;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar4 = y2;
			iVar5 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = __x * 2;
		if (__x < 1) {
			iVar7 = iVar6 + __x_00;
			__x = (__x + __x_00) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar6 - __x_00;
			__x = (__x - __x_00) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar5 != x2 || (iVar4 != y2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar6;
			if (!bVar1) {
				iVar4 = iVar4 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar5 = iVar5 + 1;
			if ((iVar5 != x1) || (bVar1 = false, iVar4 != y1)) {
				uVar3 = (*Clear)(monst,iVar5,iVar4);
				bVar1 = false;
				if (uVar3 == '\0') {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar4 = y1;
		iVar5 = x1;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar4 = y2;
			iVar5 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar6 = __x_00 * 2;
		if (__x_00 < 1) {
			iVar7 = iVar6 + __x;
			__x = (__x_00 + __x) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar6 - __x;
			__x = (__x_00 - __x) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar4 != y2 || (iVar5 != x2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar6;
			if (!bVar1) {
				iVar5 = iVar5 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar4 = iVar4 + 1;
			if ((iVar4 != y1) || (bVar1 = false, iVar5 != x1)) {
				uVar3 = (*Clear)(monst,iVar5,iVar4);
				bVar1 = false;
				if (uVar3 == '\0') {
					bVar1 = true;
				}
			}
		}
	}
	return (uchar)(iVar5 == x2 && iVar4 == y2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_FallenFear__Fii(int x /*$s5*/, int y /*$s6*/)
 // line 4752, offset 0x80151c0c
	/* begin block 1 */
		// Start line: 4753
		// Start offset: 0x80151C0C
		// Variables:
	// 		int i; // $s3
	// 		int mi; // $a0
	// 		int rundist; // $s2
	// 		int aitype; // $v1
	/* end block 1 */
	// End offset: 0x80151DB0
	// End Line: 4793

	/* begin block 2 */
		// Start line: 10824
	/* end block 2 */
	// End Line: 10825

void M_FallenFear__Fii(int x,int y)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	if (0 < nummonsters) {
		iVar6 = 0;
		do {
			iVar3 = (int)monstactive[iVar5];
			iVar4 = 0;
			switch((monster[iVar3].MType)->mtype) {
			case '\x04':
			case '\f':
				iVar4 = 7;
				break;
			case '\x05':
			case '\r':
				iVar4 = 5;
				break;
			case '\x06':
			case '\x0e':
				iVar4 = 3;
				break;
			case '\a':
			case '\x0f':
				iVar4 = 2;
			}
			if ((monster[iVar3]._mAi == '\b') && (bVar1 = false, iVar4 != 0)) {
				iVar2 = abs(x - (int)monster[iVar3]._mx);
				if (iVar2 < 5) {
					iVar2 = abs(y - (int)monster[iVar3]._my);
					bVar1 = iVar2 < 5;
				}
				if ((bVar1) && (0 < (int)((uint)(ushort)monster[iVar3]._mhitpoints << 0x10) >> 0x16)) {
					monster[iVar3]._mgoal = '\x02';
					monster[iVar3]._mgoalvar1 = iVar4;
					iVar4 = GetDirection__Fiiii(x,y,(int)(&monster[0]._mx)[iVar6],
																			(int)(&monster[0]._my)[iVar6]);
					monster[iVar3]._mdir = (char)iVar4;
				}
			}
			iVar5 = iVar5 + 1;
			iVar6 = iVar6 + 0x70;
		} while (iVar5 < nummonsters);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMonstHistory__Fi(int mt /*$a0*/)
 // line 4799, offset 0x80151ddc
	/* begin block 1 */
		// Start line: 4800
		// Start offset: 0x80151DDC
		// Variables:
	// 		int res; // $s0
	/* end block 1 */
	// End offset: 0x80151FEC
	// End Line: 4859

	/* begin block 2 */
		// Start line: 10924
	/* end block 2 */
	// End Line: 10925

void PrintMonstHistory__Fi(int mt)

{
	ushort uVar1;
	char *__src;
	size_t sVar2;
	
	if (0xe < monstkills[mt]) {
		if (gnDifficulty == 2) {
			uVar1 = monsterdata[mt].mMagicRes2;
		}
		else {
			uVar1 = monsterdata[mt].mMagicRes;
		}
		if ((uVar1 & 0x3f) == 0) {
			__src = GetStr__Fi(STR_NO_MAGIC_RESISTANCE);
			strcpy(tempstr,__src);
		}
		else {
			if ((uVar1 & 7) != 0) {
				__src = GetStr__Fi(STR_RESISTS___);
				strcpy(tempstr,__src);
				if ((uVar1 & 1) != 0) {
					__src = GetStr__Fi(STR_MAGIC_);
					strcat(tempstr,__src);
				}
				if ((uVar1 & 2) != 0) {
					__src = GetStr__Fi(STR_FIRE_);
					strcat(tempstr,__src);
				}
				if ((uVar1 & 4) != 0) {
					__src = GetStr__Fi(STR_LIGHTNING_);
					strcat(tempstr,__src);
				}
				sVar2 = strlen(tempstr);
				(&DAT_800be923)[sVar2] = 0;
				AddPanelString__FPCci(tempstr,1);
			}
			if ((uVar1 & 0x38) == 0) goto LAB_80151fd4;
			__src = GetStr__Fi(STR_IMMUNE___);
			strcpy(tempstr,__src);
			if ((uVar1 & 8) != 0) {
				__src = GetStr__Fi(STR_MAGIC_);
				strcat(tempstr,__src);
			}
			if ((uVar1 & 0x10) != 0) {
				__src = GetStr__Fi(STR_FIRE_);
				strcat(tempstr,__src);
			}
			if ((uVar1 & 0x20) != 0) {
				__src = GetStr__Fi(STR_LIGHTNING_);
				strcat(tempstr,__src);
			}
			sVar2 = strlen(tempstr);
			(&DAT_800be923)[sVar2] = 0;
		}
		AddPanelString__FPCci(tempstr,1);
	}
LAB_80151fd4:
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintUniqueHistory__Fv()
 // line 4865, offset 0x80152004
	/* begin block 1 */
		// Start line: 4866
		// Start offset: 0x80152004
		// Variables:
	// 		int res; // $s0
	/* end block 1 */
	// End offset: 0x80152110
	// End Line: 4892

	/* begin block 2 */
		// Start line: 11094
	/* end block 2 */
	// End Line: 11095

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintUniqueHistory__Fv(void)

{
	ushort uVar1;
	char *__src;
	text_strs StrId;
	
	uVar1 = monster[(&_pcursmonst)[sel_data]].mMagicRes;
	if ((uVar1 & 0x3f) == 0) {
		__src = GetStr__Fi(STR_NO_RESISTANCES);
		strcpy(tempstr,__src);
		AddPanelString__FPCci(tempstr,1);
		StrId = STR_NO_IMMUNITIES;
	}
	else {
		StrId = STR_NO_RESISTANCES;
		if ((uVar1 & 7) != 0) {
			StrId = STR_SOME_MAGIC_RESISTANCES;
		}
		__src = GetStr__Fi(StrId);
		strcpy(tempstr,__src);
		AddPanelString__FPCci(tempstr,1);
		StrId = STR_SOME_MAGIC_IMMUNITIES;
		if ((uVar1 & 0x38) == 0) {
			StrId = STR_NO_IMMUNITIES;
		}
	}
	__src = GetStr__Fi(StrId);
	strcpy(tempstr,__src);
	AddPanelString__FPCci(tempstr,1);
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MissToMonst__Fiii(int i /*$a0*/, int x /*$a3*/, int y /*$a2*/)
 // line 4901, offset 0x80152128
	/* begin block 1 */
		// Start line: 4902
		// Start offset: 0x80152128
		// Variables:
	// 		int oldx; // $s4
	// 		int oldy; // $s5
	// 		int newx; // $s1
	// 		int newy; // $s2
	// 		struct MissileStruct *Miss; // $a1
	// 		int m; // $s2
	// 		struct MonsterStruct *Monst; // $s1
	// 		int pnum; // $s0
	/* end block 1 */
	// End offset: 0x80152560
	// End Line: 4983

	/* begin block 2 */
		// Start line: 11166
	/* end block 2 */
	// End Line: 11167

void MissToMonst__Fiii(int i,int x,int y)

{
	char cVar1;
	byte bVar2;
	uchar uVar3;
	int x_00;
	int iVar4;
	int i_00;
	int x_01;
	int y_00;
	
	i_00 = (int)missile[i]._misource;
	x_01 = (int)missile[i]._mix;
	y_00 = (int)missile[i]._miy;
	dung_map[x * 0x6c + y].dMonster = (short)missile[i]._misource + 1;
	cVar1 = missile[i]._mimfnum;
	monster[i_00]._mx = (char)x;
	monster[i_00]._my = (char)y;
	monster[i_00]._mdir = cVar1;
	M_StartStand__Fii(i_00,(int)monster[i_00]._mdir);
	if ((uint)(monster[i_00].MType)->mtype - 0x48 < 4) {
		M_StartFadein__FiiUc(i_00,(int)monster[i_00]._mdir,'\0');
	}
	else {
		if ((monster[i_00]._mFlags & 0x10) == 0) {
			M_StartHit__Fiii(i_00,-1,0);
		}
		else {
			M2MStartHit__Fiii(i_00,-1,0);
		}
	}
	if ((monster[i_00]._mFlags & 0x10) == 0) {
		x_00 = (int)dung_map[x_01 * 0x6c + y_00].dPlayer + -1;
		if (((0 < (int)dung_map[x_01 * 0x6c + y_00].dPlayer) &&
				(bVar2 = (monster[i_00].MType)->mtype, bVar2 != 0x28)) && (3 < (uint)bVar2 - 0x48)) {
			M_TryH2HHit__Fiiiii(i_00,x_00,500,(uint)monster[i_00].mMinDamage2,
													(uint)monster[i_00].mMaxDamage2);
			cVar1 = dung_map[x_01 * 0x6c + y_00].dPlayer;
			if ((x_00 == (int)cVar1 + -1) && (3 < (uint)(monster[i_00].MType)->mtype - 0x59)) {
				if (1 < plr[x_00]._pmode - 7U) {
					StartPlrHit__FiiUc(x_00,0,'\x01');
				}
				x_01 = x_01 + (int)offset_x[(int)monster[i_00]._mdir];
				y_00 = y_00 + (int)offset_y[(int)monster[i_00]._mdir];
				uVar3 = PosOkPlayer__Fiii(x_00,x_01,y_00);
				if (uVar3 != '\0') {
					plr[x_00]._px = (short)x_01;
					plr[x_00]._py = (short)y_00;
					dung_map[x_01 * 0x6c + y_00].dPlayer = cVar1;
					SetPlayerOld__Fi(x_00);
				}
			}
		}
	}
	else {
		if (((0 < (int)dung_map[x_01 * 0x6c + y_00].dMonster) &&
				(bVar2 = (monster[i_00].MType)->mtype, bVar2 != 0x28)) && (3 < (uint)bVar2 - 0x48)) {
			M_TryM2MHit__Fiiiii(i_00,(int)dung_map[x_01 * 0x6c + y_00].dMonster + -1,500,
													(uint)monster[i_00].mMinDamage2,(uint)monster[i_00].mMaxDamage2);
			if (3 < (uint)(monster[i_00].MType)->mtype - 0x59) {
				x_00 = x_01 + (int)offset_x[(int)monster[i_00]._mdir];
				i_00 = y_00 + (int)offset_y[(int)monster[i_00]._mdir];
				uVar3 = PosOkMonst__Fiii((int)dung_map[x_01 * 0x6c + y_00].dMonster + -1,x_00,i_00);
				if (uVar3 != '\0') {
					iVar4 = (int)dung_map[x_01 * 0x6c + y_00].dMonster + -1;
					dung_map[x_00 * 0x6c + i_00].dMonster = dung_map[x_01 * 0x6c + y_00].dMonster;
					dung_map[x_01 * 0x6c + y_00].dMonster = 0;
					monster[iVar4]._mx = (char)x_00;
					monster[iVar4]._mfutx = (char)x_00;
					monster[iVar4]._my = (char)i_00;
					monster[iVar4]._mfuty = (char)i_00;
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkMonst2__Fiii(int i /*$s3*/, int x /*$s0*/, int y /*$s1*/)
 // line 5004, offset 0x8015258c
	/* begin block 1 */
		// Start line: 5005
		// Start offset: 0x8015258C
		// Variables:
	// 		unsigned char ret; // $a3
	// 		int oi; // $v1
	// 		int mi; // $a0
	// 		unsigned char fire; // $s2
	/* end block 1 */
	// End offset: 0x80152788
	// End Line: 5034

	/* begin block 2 */
		// Start line: 11428
	/* end block 2 */
	// End Line: 11429

uchar PosOkMonst2__Fiii(int i,int x,int y)

{
	bool bVar1;
	uchar uVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	int *piVar6;
	bool bVar7;
	
	bVar1 = false;
	uVar2 = SolidLoc__Fii(x,y);
	bVar7 = uVar2 == '\0';
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
// unsigned char /*$ra*/ PosOkMonst3__Fiii(int i /*$s5*/, int x /*$s0*/, int y /*$s1*/)
 // line 5044, offset 0x801527a8
	/* begin block 1 */
		// Start line: 5045
		// Start offset: 0x801527A8
		// Variables:
	// 		unsigned char ret; // $s3
	// 		int oi; // $v1
	// 		int objtype; // $a0
	// 		int mi; // $a0
	// 		unsigned char fire; // $s4
	// 		unsigned char isdoor; // $s2
	/* end block 1 */
	// End offset: 0x80152A74
	// End Line: 5085

	/* begin block 2 */
		// Start line: 11514
	/* end block 2 */
	// End Line: 11515

uchar PosOkMonst3__Fiii(int i,int x,int y)

{
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	uchar uVar5;
	uint uVar6;
	uint uVar7;
	int iVar8;
	int *piVar9;
	
	bVar2 = true;
	bVar4 = false;
	uVar6 = SEXT14(dung_map[x * 0x6c + y].dObject);
	bVar1 = false;
	if (uVar6 != 0) {
		uVar7 = uVar6 - 1;
		if ((int)uVar6 < 1) {
			uVar7 = ~uVar6;
		}
		iVar8 = (int)object[uVar7]._otype;
		bVar1 = false;
		if (((iVar8 - 1U < 2) || (iVar8 - 0x2aU < 2)) || (iVar8 - 0x4aU < 2)) {
			bVar1 = true;
		}
		if ((object[uVar7]._oSolidFlag != '\0') && (!bVar1)) {
			bVar2 = false;
		}
	}
	if (bVar2) {
		bVar2 = false;
		uVar5 = SolidLoc__Fii(x,y);
		if ((uVar5 == '\0') || (bVar3 = false, bVar1)) {
			bVar3 = false;
			if ((dung_map[x * 0x6c + y].dPlayer == '\0') &&
				 (bVar3 = false, dung_map[x * 0x6c + y].dMonster == 0)) {
				bVar2 = true;
				bVar3 = true;
			}
		}
		if (((bVar3) && (iVar8 = (int)dung_map[x * 0x6c + y].dMissile, iVar8 != 0)) && (-1 < i)) {
			if (0 < iVar8) {
				if (missile[iVar8]._mitype == '\x05') {
					bVar4 = true;
				}
				else {
					iVar8 = 0;
					if (0 < nummissiles) {
						piVar9 = &missileactive;
						do {
							if (missile[*piVar9]._mitype == '\x05') {
								bVar4 = true;
							}
							iVar8 = iVar8 + 1;
							piVar9 = piVar9 + 1;
						} while (iVar8 < nummissiles);
					}
				}
			}
			if ((bVar4) && (((monster[i].mMagicRes & 0x10) == 0 || ((monster[i].MType)->mtype == 'n')))) {
				bVar2 = false;
			}
		}
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_SpawnSkel__Fiii(int x /*$s5*/, int y /*$s6*/, int dir /*$s4*/)
 // line 5097, offset 0x80152a9c
	/* begin block 1 */
		// Start line: 5098
		// Start offset: 0x80152A9C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int skeltypes; // $s2
	// 		int skel; // $s0
	/* end block 1 */
	// End offset: 0x80152BC8
	// End Line: 5121

	/* begin block 2 */
		// Start line: 11634
	/* end block 2 */
	// End Line: 11635

int M_SpawnSkel__Fiii(int x,int y,int dir)

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
	if (v == 0) {
		i = -1;
	}
	else {
		lVar2 = random__Fil(0x88,v);
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
		i = AddMonster__FiiiiUc(x,y,dir,i + -1,1);
		if (i != -1) {
			M_StartSpStand__Fii(i,dir);
		}
	}
	return i;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TalktoMonster__Fi(int i /*$a0*/)
 // line 5136, offset 0x80152bf4
	/* begin block 1 */
		// Start line: 5137
		// Start offset: 0x80152BF4
		// Variables:
	// 		int pnum; // $s1
	// 		int itm; // stack offset -24
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80152CFC
	// End Line: 5161

	/* begin block 2 */
		// Start line: 11720
	/* end block 2 */
	// End Line: 11721

void TalktoMonster__Fi(int i)

{
	uchar uVar1;
	ItemStruct *pIVar2;
	MonsterStruct *pMVar3;
	int pnum;
	int aiStack24 [2];
	
	pMVar3 = monster + i;
	monster[i]._mmode = '\x11';
	pnum = (int)monster[i]._menemy;
	if ((monster[i]._mAi == '\x17') || (monster[i]._mAi == '\x1e')) {
		uVar1 = QuestStatus__Fi(7);
		if ((uVar1 != '\0') &&
			 ((QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x02' &&
				(pIVar2 = PlrHasItem__FiiRi(pnum,0xc,aiStack24), pIVar2 != (ItemStruct *)0x0)))) {
			RemoveInvItem__Fii(pnum,aiStack24[0]);
			QuestStruct_ARRAY_800e3404[1]._qactive = '\x03';
			pMVar3->mtalkmsg = 0x16;
			monster[i]._mgoal = '\x06';
		}
		uVar1 = QuestStatus__Fi(4);
		if (((uVar1 != '\0') && (0x50 < pMVar3->mtalkmsg)) &&
			 (pIVar2 = PlrHasItem__FiiRi(pnum,0xf,aiStack24), pIVar2 != (ItemStruct *)0x0)) {
			RemoveInvItem__Fii(pnum,aiStack24[0]);
			pMVar3->mtalkmsg = 0x53;
			monster[i]._mgoal = '\x06';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnGolum__Fiiii(int i /*$s1*/, int x /*$a1*/, int y /*$a2*/, int mi /*$a3*/)
 // line 5170, offset 0x80152d14
	/* begin block 1 */
		// Start line: 5171
		// Start offset: 0x80152D14
	/* end block 1 */
	// End offset: 0x80152F54
	// End Line: 5196

	/* begin block 2 */
		// Start line: 11803
	/* end block 2 */
	// End Line: 11804

void SpawnGolum__Fiiii(int i,int x,int y,int mi)

{
	byte bVar1;
	short sVar2;
	int iVar3;
	char cVar4;
	int iVar5;
	char cVar6;
	
	dung_map[x * 0x6c + y].dMonster = (short)i + 1;
	cVar4 = (char)x;
	monster[i]._mx = cVar4;
	cVar6 = (char)y;
	monster[i]._my = cVar6;
	monster[i]._mfutx = cVar4;
	monster[i]._mfuty = cVar6;
	monster[i]._moldx = cVar4;
	monster[i]._moldy = cVar6;
	monster[i]._pathcount = '\0';
	iVar3 = plr[i]._pMaxMana;
	bVar1 = missile[mi]._mispllvl;
	monster[i].mArmorClass = '\x19';
	iVar5 = (uint)bVar1 << 0x18;
	sVar2 = ((short)((ulonglong)((longlong)iVar3 * 0x55555556) >> 0x20) - (short)(iVar3 >> 0x1f)) * 2
					+ (short)(iVar5 >> 0xf) + (short)(iVar5 >> 0x11);
	monster[i]._mmaxhp = sVar2;
	monster[i]._mhitpoints = sVar2;
	monster[i].mHit = plr[i]._pLevel * '\x02' + '(' + missile[mi]._mispllvl * '\x05';
	monster[i].mMinDamage = missile[mi]._mispllvl * '\x02' + '\b';
	cVar4 = missile[mi]._mispllvl;
	monster[i]._mFlags = monster[i]._mFlags | 0x20;
	monster[i].mMaxDamage = cVar4 * '\x02' + '\x10';
	M_StartSpStand__Fii(i,0);
	M_Enemy__Fi(i);
	NetSendCmdGolem__FUcUcUcUclUc
						(monster[i]._mx,monster[i]._my,monster[i]._mdir,monster[i]._menemy,
						 (int)monster[i]._mhitpoints,(uint)currlevel);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CanTalkToMonst__Fi(int m /*$a0*/)
 // line 5202, offset 0x80152f6c
	/* begin block 1 */
		// Start line: 5203
		// Start offset: 0x80152F6C
	/* end block 1 */
	// End offset: 0x80152F9C
	// End Line: 5208

	/* begin block 2 */
		// Start line: 11903
	/* end block 2 */
	// End Line: 11904

uchar CanTalkToMonst__Fi(int m)

{
	return (uchar)(monster[m]._mgoal == '\x06' || monster[m]._mgoal == '\a');
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckMonsterHit__FiRUc(int m /*$a0*/, unsigned char *ret /*$a1*/)
 // line 5214, offset 0x80152fa4
	/* begin block 1 */
		// Start line: 5215
		// Start offset: 0x80152FA4
	/* end block 1 */
	// End offset: 0x80153068
	// End Line: 5231

	/* begin block 2 */
		// Start line: 11927
	/* end block 2 */
	// End Line: 11928

uchar CheckMonsterHit__FiRUc(int m,uchar *ret)

{
	uchar uVar1;
	
	if ((monster[m]._mAi == '\f') && ((monster[m]._mFlags & 4) != 0)) {
		monster[m]._mFlags = monster[m]._mFlags & 0xfffb;
		monster[m]._mmode = '\a';
		*ret = '\x01';
		return '\x01';
	}
	uVar1 = '\x01';
	if (((uint)(monster[m].MType)->mtype - 0x69 < 4) && (monster[m]._mgoal != '\x01')) {
		*ret = '\0';
	}
	else {
		uVar1 = '\0';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Golum__Fi(int i /*$s4*/)
 // line 5239, offset 0x80153070
	/* begin block 1 */
		// Start line: 5240
		// Start offset: 0x80153070
		// Variables:
	// 		int ok; // $v1
	// 		int j; // $s0
	// 		int k; // $a1
	// 		int mid; // $v1
	// 		int mx; // $s0
	// 		int my; // $s5
	// 		int md; // $s2
	// 		unsigned char have_enemy; // stack offset -64
	// 		struct MonsterStruct *Monst; // $s1
	// 		int _menemy; // $v1
	// 		int _mex; // stack offset -48
	// 		int _mey; // $fp
	/* end block 1 */
	// End offset: 0x801533B0
	// End Line: 5298

	/* begin block 2 */
		// Start line: 11974
	/* end block 2 */
	// End Line: 11975

void MAI_Golum__Fi(int i)

{
	uchar uVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	bool bVar6;
	byte bVar7;
	uchar uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	uint mdir;
	
	if ((((*(short *)&monster[i]._mx != 1) && (iVar11 = (int)monster[i]._mmode, iVar11 != 6)) &&
			(iVar11 != 0xb)) && (2 < (iVar11 - 1U & 0xff))) {
		if ((monster[i]._mFlags & 0x10) == 0) {
			M_Enemy__Fi(i);
		}
		iVar11 = (int)monster[i]._menemy;
		bVar7 = ((byte)(monster[i]._mFlags >> 10) ^ 1) & 1;
		uVar8 = monster[iVar11]._mx;
		uVar1 = monster[iVar11]._my;
		bVar6 = false;
		if (monster[i]._mmode != '\x04') {
			cVar2 = monster[i]._mx;
			cVar3 = monster[i]._my;
			cVar4 = monster[iVar11]._mfutx;
			cVar5 = monster[iVar11]._mfuty;
			iVar9 = GetDirection__Fiiii((int)cVar2,(int)cVar3,(int)(char)uVar8,(int)(char)uVar1);
			monster[i]._mdir = (char)iVar9;
			iVar10 = abs((int)cVar2 - (int)cVar4);
			if (iVar10 < 2) {
				iVar10 = abs((int)cVar3 - (int)cVar5);
				bVar6 = iVar10 < 2;
			}
			if (bVar6) {
				if (bVar7 != 0) {
					monster[i]._menemyy = uVar1;
					monster[i]._menemyx = uVar8;
					iVar9 = 0;
					if (monster[iVar11]._msquelch == '\0') {
						monster[iVar11]._msquelch = -1;
						monster[iVar11]._lastx = monster[i]._mx;
						monster[iVar11]._lasty = monster[i]._my;
						do {
							iVar11 = 0;
							do {
								if (0 < (int)dung_map[((int)monster[i]._mx + iVar11 + -2) * 0x6c +
																			(int)monster[i]._my + iVar9 + -2].dMonster) {
									monster[(int)dung_map[((int)monster[i]._mx + iVar11 + -2) * 0x6c +
																				(int)monster[i]._my + iVar9 + -2].dMonster]._msquelch = -1;
								}
								iVar11 = iVar11 + 1;
							} while (iVar11 < 5);
							iVar9 = iVar9 + 1;
						} while (iVar9 < 5);
					}
					M_StartAttack__Fi(i);
					return;
				}
			}
			else {
				if ((bVar7 != 0) && (uVar8 = MAI_Path__Fi(i), uVar8 != '\0')) {
					return;
				}
			}
			bVar7 = monster[i]._pathcount + 1;
			monster[i]._pathcount = bVar7;
			if (8 < bVar7) {
				monster[i]._pathcount = '\x05';
			}
			uVar8 = M_CallWalk__Fii(i,(int)plr[i]._pdir);
			if (uVar8 == '\0') {
				mdir = iVar9 - 1U & 7;
				iVar11 = 0;
				do {
					mdir = mdir + 1 & 7;
					uVar8 = DirOK__Fii(i,mdir);
					iVar11 = iVar11 + 1;
					if (7 < iVar11) break;
				} while (uVar8 == '\0');
				if (uVar8 != '\0') {
					M_WalkDir__Fii(i,mdir);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ MAI_Path__Fi(int i /*$s1*/)
 // line 5311, offset 0x801533e4
	/* begin block 1 */
		// Start line: 5312
		// Start offset: 0x801533E4
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80153530
	// End Line: 5343

	/* begin block 2 */
		// Start line: 12163
	/* end block 2 */
	// End Line: 12164

uchar MAI_Path__Fi(int i)

{
	uchar uVar1;
	byte bVar2;
	
	if ((monster[i].MType)->mtype != 'm') {
		if (monster[i]._msquelch == '\0') {
			return '\0';
		}
		if (monster[i]._mmode != '\0') {
			return '\0';
		}
		if ((monster[i]._mgoal != 1) && (1 < (uint)monster[i]._mgoal - 4)) {
			return '\0';
		}
		if (*(short *)&monster[i]._mx == 1) {
			return '\0';
		}
	}
	uVar1 = LineClearF1__FPFiii_Uciiiii
										(PosOkMonst2__Fiii,i,(int)monster[i]._mx,(int)monster[i]._my,
										 (uint)monster[i]._menemyx,(uint)monster[i]._menemyy);
	if ((uVar1 == '\0') || ((uint)monster[i]._pathcount - 5 < 3)) {
		if ((monster[i]._mFlags & 0x200) != 0) {
			MonstCheckDoors__Fi(i);
		}
		bVar2 = monster[i]._pathcount + 1;
		monster[i]._pathcount = bVar2;
		if (bVar2 < 5) {
			return '\0';
		}
		uVar1 = M_PathWalk__Fi(i);
		if (uVar1 != '\0') {
			return '\x01';
		}
	}
	if ((monster[i].MType)->mtype != 'm') {
		monster[i]._pathcount = '\0';
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartAttack__Fi(int i /*$s1*/)
 // line 5346, offset 0x80153548
	/* begin block 1 */
		// Start line: 5347
		// Start offset: 0x80153548
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x80153614
	// End Line: 5367

	/* begin block 2 */
		// Start line: 12239
	/* end block 2 */
	// End Line: 12240

void M_StartAttack__Fi(int i)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = M_GetDir__Fi(i);
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 2,md,2);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mmode = '\x04';
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
// void /*$ra*/ M_StartWalk__Fiiiiii(int i /*$s1*/, int xvel /*$a1*/, int yvel /*$a2*/, int xadd /*$a3*/, int yadd /*stack 16*/, int EndDir /*stack 20*/)
 // line 5370, offset 0x80153630
	/* begin block 1 */
		// Start line: 5371
		// Start offset: 0x80153630
		// Variables:
	// 		long fx; // $t0
	// 		long fy; // $t1
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $t2
	// 		int _my; // $t3
	/* end block 1 */
	// End offset: 0x80153778
	// End Line: 5402

	/* begin block 2 */
		// Start line: 12292
	/* end block 2 */
	// End Line: 12293

void M_StartWalk__Fiiiiii(int i,int xvel,int yvel,int xadd,int yadd,int EndDir)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	CMonster *pCVar5;
	
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	iVar3 = (int)cVar1 + xadd;
	iVar4 = (int)cVar2 + yadd;
	dung_map[iVar3 * 0x6c + iVar4].dMonster = ~(ushort)i;
	pCVar5 = monster[i].MType;
	monster[i]._mVar1 = (short)xadd;
	monster[i]._mmode = '\x01';
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	monster[i]._mfutx = (char)iVar3;
	monster[i]._mfuty = (char)iVar4;
	monster[i]._mxvel = (short)xvel;
	monster[i]._myvel = (short)yvel;
	monster[i]._mVar2 = (short)yadd;
	monster[i]._mVar3 = (short)EndDir;
	monster[i]._mdir = (char)EndDir;
	NewMonsterAnim__FiR10AnimStructii(i,pCVar5->Anims + 1,EndDir,1);
	monster[i]._mVar6 = 0;
	monster[i]._mVar7 = 0;
	monster[i]._mVar8 = 0;
	M_CheckEFlag__Fi(i);
	return;
}





