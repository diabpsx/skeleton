#include "THISDUST.H"
#include "MONSTER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DeleteMonster__Fi(int i /*$a0*/)
 // line 432, offset 0x8014ab74
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x8014AB74
		// Variables:
	// 		int temp; // $a2
	/* end block 1 */
	// End offset: 0x8014ABA4
	// End Line: 440

	/* begin block 2 */
		// Start line: 869
	/* end block 2 */
	// End Line: 870

void DeleteMonster__Fi(int i)

{
	undefined2 uVar1;
	int *piVar2;
	int *piVar3;
	
	piVar3 = (int *)((int)&monster[0xbe].mtalkmsg + i * 2);
	nummonsters = nummonsters + -1;
	piVar2 = (int *)((int)&monster[0xbe].mtalkmsg + nummonsters * 2);
	uVar1 = *(undefined2 *)piVar2;
	*(undefined2 *)piVar2 = *(undefined2 *)piVar3;
	*(undefined2 *)piVar3 = uVar1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_GetDir__Fi(int i /*$a0*/)
 // line 458, offset 0x8014abac
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x8014ABAC
	/* end block 1 */
	// End offset: 0x8014AC00
	// End Line: 461

	/* begin block 2 */
		// Start line: 919
	/* end block 2 */
	// End Line: 920

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
 // line 479, offset 0x8014ac10
	/* begin block 1 */
		// Start line: 480
		// Start offset: 0x8014AC10
	/* end block 1 */
	// End offset: 0x8014AC58
	// End Line: 486

	/* begin block 2 */
		// Start line: 964
	/* end block 2 */
	// End Line: 965

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
 // line 502, offset 0x8014ac60
	/* begin block 1 */
		// Start line: 503
		// Start offset: 0x8014AC60
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x8014AD5C
	// End Line: 525

	/* begin block 2 */
		// Start line: 1009
	/* end block 2 */
	// End Line: 1010

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
// void /*$ra*/ M_StartRSpAttack__Fiii(int i /*$s1*/, int missile_type /*$s4*/, int dam /*$s6*/)
 // line 532, offset 0x8014ad80
	/* begin block 1 */
		// Start line: 533
		// Start offset: 0x8014AD80
		// Variables:
	// 		int md; // $s5
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $s2
	// 		int _my; // $s3
	/* end block 1 */
	// End offset: 0x8014AEC8
	// End Line: 558

	/* begin block 2 */
		// Start line: 1074
	/* end block 2 */
	// End Line: 1075

void M_StartRSpAttack__Fiii(int i,int missile_type,int dam)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = M_GetDir__Fi(i);
	NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 5,md,5);
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	if (missile_type == 0x43) {
		SetLightFX__FiisssUcUcUc((int)cVar1,(int)cVar2,0xa00,0xa00,0xa00,0x40,0x40,0x40);
	}
	monster[i]._mmode = '\f';
	monster[i]._mVar1 = (short)missile_type;
	monster[i]._mVar2 = 0;
	monster[i]._mVar3 = (short)dam;
	monster[i]._mxoff = '\0';
	monster[i]._myoff = '\0';
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	monster[i]._mdir = (char)md;
	M_CheckEFlag__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartSpAttack__Fi(int i /*$s1*/)
 // line 564, offset 0x8014aef4
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x8014AEF4
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x8014AFC8
	// End Line: 585

	/* begin block 2 */
		// Start line: 1142
	/* end block 2 */
	// End Line: 1143

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
 // line 592, offset 0x8014afe4
	/* begin block 1 */
		// Start line: 593
		// Start offset: 0x8014AFE4
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x8014B0A4
	// End Line: 609

	/* begin block 2 */
		// Start line: 1203
	/* end block 2 */
	// End Line: 1204

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
// void /*$ra*/ M_GetKnockback__Fii(int i /*$s4*/, int d /*$s1*/)
 // line 615, offset 0x8014b0bc
	/* begin block 1 */
		// Start line: 616
		// Start offset: 0x8014B0BC

		/* begin block 1.1 */
			// Start line: 616
			// Start offset: 0x8014B0BC

			/* begin block 1.1.1 */
				// Start line: 623
				// Start offset: 0x8014B0F0
				// Variables:
			// 		struct MonsterStruct *pmonster; // $s3
			// 		int _mx; // $s2
			// 		int _my; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8014B2B4
			// End Line: 676
		/* end block 1.1 */
		// End offset: 0x8014B2B4
		// End Line: 676
	/* end block 1 */
	// End offset: 0x8014B2B4
	// End Line: 676

	/* begin block 2 */
		// Start line: 1252
	/* end block 2 */
	// End Line: 1253

void M_GetKnockback__Fii(int i,int d)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	short sVar5;
	uchar uVar6;
	CMonster *pCVar7;
	
	uVar6 = DirOK__Fii(i,d);
	if (uVar6 != '\0') {
		M_ClearSquares__Fi(i);
		pCVar7 = monster[i].MType;
		cVar1 = monster[i]._mdir;
		monster[i]._mx = monster[i]._mx + offset_x[d];
		monster[i]._my = monster[i]._my + offset_y[d];
		NewMonsterAnim__FiR10AnimStructii(i,pCVar7->Anims + 3,(int)cVar1,3);
		cVar3 = monster[i]._mx;
		cVar4 = monster[i]._my;
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		monster[i]._mmode = '\x05';
		monster[i]._mxoff = '\0';
		monster[i]._myoff = '\0';
		monster[i]._moldx = cVar3;
		monster[i]._moldy = cVar4;
		monster[i]._mfutx = cVar1;
		monster[i]._mfuty = cVar2;
		monster[i]._moldx = cVar1;
		monster[i]._moldy = cVar2;
		M_CheckEFlag__Fi(i);
		M_ClearSquares__Fi(i);
		dung_map[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (short)i + 1;
		sVar5 = monster[i]._mVar8;
		monster[i]._mVar1 = 0;
		monster[i]._mVar2 = 0;
		monster[i]._mxvel = 0;
		monster[i]._myvel = 0;
		monster[i]._mVar6 = 0;
		monster[i]._mVar7 = 0;
		monster[i]._mVar8 = sVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartHit__Fiii(int i /*$s3*/, int pnum /*$s0*/, int dam /*$s2*/)
 // line 682, offset 0x8014b2d8
	/* begin block 1 */
		// Start line: 683
		// Start offset: 0x8014B2D8

		/* begin block 1.1 */
			// Start line: 721
			// Start offset: 0x8014B498

			/* begin block 1.1.1 */
				// Start line: 721
				// Start offset: 0x8014B4C4
				// Variables:
			// 		struct MonsterStruct *pmonster; // $v0
			// 		int _moldx; // $s1
			// 		int _moldy; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8014B5A0
			// End Line: 739
		/* end block 1.1 */
		// End offset: 0x8014B5A0
		// End Line: 739
	/* end block 1 */
	// End offset: 0x8014B5A0
	// End Line: 739

	/* begin block 2 */
		// Start line: 1419
	/* end block 2 */
	// End Line: 1420

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
	delta_monster_hp__FilUc(i,monster[i]._mhitpoints,currlevel);
	NetSendCmdParam2__FUcUcUsUs('\0','%',(ushort)i,(ushort)dam);
	PlayEffect__Fii(i,1);
	if (-1 < pnum) {
		monster[i]._menemy = (uchar)pnum;
		monster[i]._menemyx = (uchar)plr[pnum]._px;
		sVar4 = plr[pnum]._py;
		monster[i]._mFlags = monster[i]._mFlags & 0xffef;
		monster[i]._menemyy = (uchar)sVar4;
		iVar5 = M_GetDir__Fi(i);
		monster[i]._mdir = (char)iVar5;
	}
	bVar3 = (monster[i].MType)->mtype;
	if (((uint)bVar3 - 0x1d < 4) || ((int)monster[i].mLevel + 3 <= dam >> 6)) {
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
			dung_map[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (ushort)i + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_DiabloDeath__FiUci(int i /*$s5*/, unsigned char sendmsg /*$s0*/, int pnum /*stack -48*/)
 // line 745, offset 0x8014b5c0
	/* begin block 1 */
		// Start line: 746
		// Start offset: 0x8014B5C0
		// Variables:
	// 		struct MonsterStruct *Monst; // $s6
	// 		struct MonsterStruct *pmonster; // $fp
	// 		int _mx; // $s2
	// 		int _my; // $s3
	// 		int steps; // $v1

		/* begin block 1.1 */
			// Start line: 759
			// Start offset: 0x8014B644
			// Variables:
		// 		int j; // $s4

			/* begin block 1.1.1 */
				// Start line: 762
				// Start offset: 0x8014B654
				// Variables:
			// 		int k; // $s3

				/* begin block 1.1.1.1 */
					// Start line: 763
					// Start offset: 0x8014B668

					/* begin block 1.1.1.1.1 */
						// Start line: 764
						// Start offset: 0x8014B698
						// Variables:
					// 		int _moldx; // $s2
					// 		int _moldy; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8014B78C
					// End Line: 782
				/* end block 1.1.1.1 */
				// End offset: 0x8014B78C
				// End Line: 782
			/* end block 1.1.1 */
			// End offset: 0x8014B78C
			// End Line: 782
		/* end block 1.1 */
		// End offset: 0x8014B794
		// End Line: 784
	/* end block 1 */
	// End offset: 0x8014B8B4
	// End Line: 804

	/* begin block 2 */
		// Start line: 1554
	/* end block 2 */
	// End Line: 1555

void M_DiabloDeath__FiUci(int i,uchar sendmsg,int pnum)

{
	char cVar1;
	char cVar2;
	short sVar3;
	int nXPos;
	int i_00;
	int nYPos;
	int __x;
	short local_30;
	
	PlaySFX__Fi(USFX_DIABLOD);
	quests[5]._qactive = '\x03';
	if (sendmsg != '\0') {
		NetSendCmdQuest__FUcUc('\x01','\x05');
	}
	gbProcessPlayers = '\0';
	__x = 0;
	while (__x < nummonsters) {
		sVar3 = *(short *)((int)&monster[0xbe].mtalkmsg + __x * 2);
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
			dung_map[(int)cVar1 * 0x70 + (int)cVar2].dMonster = sVar3 + 1;
		}
		__x = __x + 1;
	}
	nXPos = (int)monster[i]._mx;
	nYPos = (int)monster[i]._my;
	__x = AddLight__Fiii((int)monster[i]._mx,(int)monster[i]._my,3);
	monster[i].mlid = (uchar)__x;
	DoVision__FiiiUcUc(nXPos,nYPos,8,'\0',1);
	__x = abs(ViewX - nXPos);
	i_00 = abs(ViewY - nYPos);
	if (i_00 < __x) {
		__x = ViewX - nXPos;
	}
	else {
		__x = ViewY - nYPos;
	}
	i_00 = abs(__x);
	__x = 0x14;
	if (i_00 < 0x15) {
		__x = i_00;
	}
	monster[i]._mVar3 = 0;
	monster[i]._mVar4 = 0;
	local_30 = (short)pnum;
	i_00 = (int)monster[i]._mVar3 + nXPos * -0x10000;
	monster[i]._mVar8 = local_30;
	sVar3 = __divdi3(i_00,i_00 >> 0x1f,__x,__x >> 0x1f);
	monster[i]._mVar5 = sVar3;
	i_00 = (int)monster[i]._mVar4 + nYPos * -0x10000;
	sVar3 = __divdi3(i_00,i_00 >> 0x1f,__x,__x >> 0x1f);
	monster[i]._mVar6 = sVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M2MStartHit__Fiii(int mid /*$s1*/, int i /*$s0*/, int dam /*$s3*/)
 // line 810, offset 0x8014b8e8
	/* begin block 1 */
		// Start line: 811
		// Start offset: 0x8014B8E8
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $s2
	// 		int _my; // $s3
	/* end block 1 */
	// End offset: 0x8014BB84
	// End Line: 861

	/* begin block 2 */
		// Start line: 1716
	/* end block 2 */
	// End Line: 1717

void M2MStartHit__Fiii(int mid,int i,int dam)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	
	if (-1 < i) {
		monster[i].mWhoHit = monster[i].mWhoHit | (byte)(1 << (i & 0x1fU));
	}
	delta_monster_hp__FilUc(mid,monster[mid]._mhitpoints,currlevel);
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
			dung_map[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (ushort)mid + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MonstStartKill__FiiUc(int i /*$s2*/, int pnum /*$s4*/, unsigned char sendmsg /*$s5*/)
 // line 868, offset 0x8014bba4
	/* begin block 1 */
		// Start line: 869
		// Start offset: 0x8014BBA4
		// Variables:
	// 		int md; // $v0
	// 		struct MonsterStruct *Monst; // $s1
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $s0
	// 		int _my; // $s3

		/* begin block 1.1 */
			// Start line: 883
			// Start offset: 0x8014BC00

			/* begin block 1.1.1 */
				// Start line: 884
				// Start offset: 0x8014BC14
				// Variables:
			// 		int omp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8014BC40
			// End Line: 888
		/* end block 1.1 */
		// End offset: 0x8014BC40
		// End Line: 888
	/* end block 1 */
	// End offset: 0x8014BE98
	// End Line: 947

	/* begin block 2 */
		// Start line: 1837
	/* end block 2 */
	// End Line: 1838

void MonstStartKill__FiiUc(int i,int pnum,uchar sendmsg)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	long v;
	int md;
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
	*(short *)(&monster[0xc1]._lasty + (uint)(monster[i].MType)->mtype * 2) =
			 *(short *)(&monster[0xc1]._lasty + (uint)(monster[i].MType)->mtype * 2) + 1;
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	monster[i]._mhitpoints = 0;
	RemoveStoneMissiles__Fiii(i,(int)cVar1,(int)cVar2);
	v = GetRndSeed__Fv();
	v = ENG_random__Fl(v);
	SetRndSeed__Fl(v);
	uVar3 = QuestStatus__Fi(2);
	if ((uVar3 == '\0') || (monster[i].mName != (uint)UniqMonst[0].mName)) {
		if (3 < i) {
			SpawnItem__FiiiUc(i,(int)monster[i]._mx,(int)monster[i]._my,sendmsg);
		}
	}
	else {
		CreateTypeItem__FiiUciiUcUc((int)monster[i]._mx + 1,(int)monster[i]._my + 1,'\x01',4,0,1,0);
	}
	if (monster[i]._uniqtype != '\0') {
		stream_stop__Fv();
	}
	if ((monster[i].MType)->mtype == 'n') {
		M_DiabloDeath__FiUci(i,'\x01',pnum);
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
	if (3 < i) {
		monster[i]._mxoff = '\0';
		monster[i]._myoff = '\0';
	}
	monster[i]._mVar1 = 0;
	monster[i]._mx = cVar1;
	monster[i]._my = cVar2;
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	M_CheckEFlag__Fi(i);
	M_ClearSquares__Fi(i);
	dung_map[x * 0x70 + y].dMonster = (short)i + 1;
	CheckQuestKill__FiUc(i,sendmsg);
	M_FallenFear__Fii(x,y);
	if ((uint)(monster[i].MType)->mtype - 0x2e < 4) {
		AddMissile__Fiiiiiiciii(x,y,0,0,0,0x3b,1,i,(uint)monster[i]._mint + 1,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncMonstStartKill__FiiUc(int i /*$s1*/, int pnum /*$s4*/, unsigned char sendmsg /*$s2*/)
 // line 953, offset 0x8014bec0
	/* begin block 1 */
		// Start line: 954
		// Start offset: 0x8014BEC0
		// Variables:
	// 		int md; // $v0
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s2
	// 		int _my; // $s3
	/* end block 1 */
	// End offset: 0x8014BFEC
	// End Line: 993

	/* begin block 2 */
		// Start line: 2030
	/* end block 2 */
	// End Line: 2031

void SyncMonstStartKill__FiiUc(int i,int pnum,uchar sendmsg)

{
	char cVar1;
	char cVar2;
	long v;
	int md;
	CMonster *pCVar3;
	
	if (-1 < pnum) {
		monster[i].mWhoHit = (char)(1 << (pnum & 0x1fU));
	}
	monster[i]._mhitpoints = 0;
	v = GetRndSeed__Fv();
	v = ENG_random__Fl(v);
	SetRndSeed__Fl(v);
	if (3 < i) {
		SpawnItem__FiiiUc(i,(int)monster[i]._mx,(int)monster[i]._my,sendmsg);
	}
	cVar1 = monster[i]._moldx;
	cVar2 = monster[i]._moldy;
	if (pnum < 0) {
		md = (int)monster[i]._mdir;
	}
	else {
		md = M_GetDir__Fi(i);
	}
	pCVar3 = monster[i].MType;
	monster[i]._mdir = (char)md;
	NewMonsterAnim__FiR10AnimStructii(i,pCVar3->Anims + 4,md,4);
	monster[i]._mmode = '\x06';
	if (3 < i) {
		monster[i]._mxoff = '\0';
		monster[i]._myoff = '\0';
	}
	monster[i]._mVar1 = 0;
	monster[i]._mx = cVar1;
	monster[i]._my = cVar2;
	monster[i]._mfutx = cVar1;
	monster[i]._mfuty = cVar2;
	monster[i]._moldx = cVar1;
	monster[i]._moldy = cVar2;
	M_ClearSquares__Fi(i);
	dung_map[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (short)i + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M2MStartKill__Fii(int i /*$s4*/, int mid /*$s2*/)
 // line 999, offset 0x8014c010
	/* begin block 1 */
		// Start line: 1000
		// Start offset: 0x8014C010
		// Variables:
	// 		int md; // $a2
	// 		struct MonsterStruct *pmonster; // $s7
	// 		int _mx; // $s5
	// 		int _my; // $s6

		/* begin block 1.1 */
			// Start line: 1015
			// Start offset: 0x8014C09C

			/* begin block 1.1.1 */
				// Start line: 1020
				// Start offset: 0x8014C108
				// Variables:
			// 		int omp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8014C14C
			// End Line: 1024
		/* end block 1.1 */
		// End offset: 0x8014C14C
		// End Line: 1024
	/* end block 1 */
	// End offset: 0x8014C3A8
	// End Line: 1063

	/* begin block 2 */
		// Start line: 2133
	/* end block 2 */
	// End Line: 2134

void M2MStartKill__Fii(int i,int mid)

{
	uchar x;
	uchar y;
	char cVar1;
	char cVar2;
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
	*(short *)(&monster[0xc1]._lasty + (uint)(monster[mid].MType)->mtype * 2) =
			 *(short *)(&monster[0xc1]._lasty + (uint)(monster[mid].MType)->mtype * 2) + 1;
	monster[mid]._mhitpoints = 0;
	if (1 < mid) {
		SpawnItem__FiiiUc(mid,(int)(char)x,(int)(char)y,'\x01');
	}
	if ((monster[mid].MType)->mtype == 'n') {
		M_DiabloDeath__FiUci(mid,'\x01',0);
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
	dung_map[x_00 * 0x70 + y_00].dMonster = (short)mid + 1;
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
 // line 1069, offset 0x8014c3d8
	/* begin block 1 */
		// Start line: 1070
		// Start offset: 0x8014C3D8
		// Variables:
	// 		struct MonsterStruct *pmonster; // $v1
	// 		int _mx; // $s1
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x8014C4C0
	// End Line: 1093

	/* begin block 2 */
		// Start line: 2323
	/* end block 2 */
	// End Line: 2324

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
		RemoveStoneMissiles__Fiii(i,(int)(char)x,(int)(char)y);
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
// void /*$ra*/ M_SyncStartKill__Fiiii(int i /*$s1*/, int x /*$s2*/, int y /*$s3*/, int pnum /*$s4*/)
 // line 1099, offset 0x8014c4e0
	/* begin block 1 */
		// Start line: 1100
		// Start offset: 0x8014C4E0
	/* end block 1 */
	// End offset: 0x8014C5CC
	// End Line: 1116

	/* begin block 2 */
		// Start line: 2400
	/* end block 2 */
	// End Line: 2401

void M_SyncStartKill__Fiiii(int i,int x,int y,int pnum)

{
	if ((monster[i]._mhitpoints != 0) && (monster[i]._mmode != '\x06')) {
		if (dung_map[x * 0x70 + y].dMonster == 0) {
			M_ClearSquares__Fi(i);
			monster[i]._mx = (char)x;
			monster[i]._my = (char)y;
			monster[i]._moldx = (char)x;
			monster[i]._moldy = (char)y;
		}
		if (deltaload != '\0') {
			SyncMonstStartKill__FiiUc(i,pnum,'\0');
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartFadein__FiiUc(int i /*$s0*/, int md /*$s2*/, unsigned char backwards /*$s1*/)
 // line 1122, offset 0x8014c5f0
	/* begin block 1 */
		// Start line: 1123
		// Start offset: 0x8014C5F0
	/* end block 1 */
	// End offset: 0x8014C72C
	// End Line: 1143

	/* begin block 2 */
		// Start line: 2454
	/* end block 2 */
	// End Line: 2455

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
 // line 1150, offset 0x8014c74c
	/* begin block 1 */
		// Start line: 1151
		// Start offset: 0x8014C74C
	/* end block 1 */
	// End offset: 0x8014C87C
	// End Line: 1169

	/* begin block 2 */
		// Start line: 2534
	/* end block 2 */
	// End Line: 2535

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
 // line 1176, offset 0x8014c89c
	/* begin block 1 */
		// Start line: 1177
		// Start offset: 0x8014C89C
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x8014C914
	// End Line: 1189

	/* begin block 2 */
		// Start line: 2609
	/* end block 2 */
	// End Line: 2610

void M_StartHeal__Fi(int i)

{
	char cVar1;
	long lVar2;
	CMonster *pCVar3;
	
	pCVar3 = monster[i].MType;
	monster[i].Action = '\x05';
	cVar1 = pCVar3->Anims[5].Frames;
	monster[i]._mFlags = monster[i]._mFlags | 2;
	monster[i]._mmode = '\x10';
	monster[i]._mAnimFrame = cVar1;
	lVar2 = ENG_random__Fl(5);
	monster[i]._mVar1 = (short)(monster[i]._mmaxhp / ((lVar2 + 4) * 0x10));
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_ChangeLightOffset__Fi(int monst /*$a3*/)
 // line 1195, offset 0x8014c928
	/* begin block 1 */
		// Start line: 1196
		// Start offset: 0x8014C928
		// Variables:
	// 		int lx; // $a1
	// 		int ly; // $a0
	// 		int xm; // $a2
	// 		int ym; // $t1
	// 		int x2; // $a1
	// 		int y2; // $a0
	// 		int ox; // $v0
	// 		int oy; // $a0
	// 		struct MonsterStruct *pmonster; // $t2
	/* end block 1 */
	// End offset: 0x8014CA80
	// End Line: 1267

	/* begin block 2 */
		// Start line: 2660
	/* end block 2 */
	// End Line: 2661

void M_ChangeLightOffset__Fi(int monst)

{
	int iVar1;
	int iVar2;
	
	iVar1 = (int)monster[monst]._myoff * 2;
	iVar2 = (((int)monster[monst]._mxoff + iVar1) * 100) / 0xca;
	iVar1 = ((iVar1 - (int)monster[monst]._mxoff) * 100) / 0xca;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 0x20;
		if (-1 < iVar1) {
			if (monster[monst]._mdir == '\x01') {
				iVar2 = 0x20 - iVar2;
			}
			goto LAB_8014ca00;
		}
	}
	else {
LAB_8014ca00:
		if (-1 < iVar1) {
			if (monster[monst]._mdir == '\x06') {
				iVar1 = 0x1f - iVar1;
			}
			goto LAB_8014ca38;
		}
	}
	iVar1 = iVar1 + 0x20;
LAB_8014ca38:
	ChangeLightOff__Fiii
						((uint)monster[monst].mlid,
						 (iVar2 >> 2) + ((int)LightList[(uint)monster[monst].mlid]._lx & 1U) * 8 + -8,
						 (iVar1 >> 2) + ((int)LightList[(uint)monster[monst].mlid]._ly & 1U) * 8 + -8);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoStand__Fi(int i /*$a0*/)
 // line 1275, offset 0x8014ca90
	/* begin block 1 */
		// Start line: 1276
		// Start offset: 0x8014CA90
		// Variables:
	// 		struct MonsterStruct *Monst; // $a0
	/* end block 1 */
	// End offset: 0x8014CAE8
	// End Line: 1295

	/* begin block 2 */
		// Start line: 2878
	/* end block 2 */
	// End Line: 2879

int M_DoStand__Fi(int i)

{
	if ((monster[i].MType)->mtype == 'm') {
		monster[i].Action = '\x01';
	}
	else {
		monster[i].Action = '\0';
	}
	monster[i]._mVar2 = monster[i]._mVar2 + 1;
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoWalk__Fi(int i /*$s1*/)
 // line 1301, offset 0x8014caf0
	/* begin block 1 */
		// Start line: 1302
		// Start offset: 0x8014CAF0
		// Variables:
	// 		int rv; // $s0
	/* end block 1 */
	// End offset: 0x8014CD48
	// End Line: 1349

	/* begin block 2 */
		// Start line: 2925
	/* end block 2 */
	// End Line: 2926

int M_DoWalk__Fi(int i)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	ushort uVar5;
	ushort uVar6;
	byte bVar7;
	int iVar8;
	
	if ((int)monster[i]._mVar8 == (int)(monster[i].MType)->Anims[1].Frames) {
		dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = 0;
		cVar1 = monster[i]._mx;
		cVar2 = *(char *)&monster[i]._mVar1;
		bVar7 = monster[i]._my + *(char *)&monster[i]._mVar2;
		monster[i]._my = bVar7;
		monster[i]._mx = cVar1 + cVar2;
		*(short *)((int)&dung_map[(int)monster[i]._mx * 0x70].dMonster +
							((int)((uint)bVar7 << 0x18) >> 0x15)) = (short)i + 1;
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
 // line 1355, offset 0x8014cd60
	/* begin block 1 */
		// Start line: 1356
		// Start offset: 0x8014CD60
		// Variables:
	// 		int rv; // $s0
	/* end block 1 */
	// End offset: 0x8014CF34
	// End Line: 1383

	/* begin block 2 */
		// Start line: 3062
	/* end block 2 */
	// End Line: 3063

int M_DoWalk2__Fi(int i)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	ushort uVar4;
	int iVar5;
	
	if ((int)monster[i]._mVar8 == (int)(monster[i].MType)->Anims[1].Frames) {
		dung_map[(int)monster[i]._mVar1 * 0x70 + (int)monster[i]._mVar2].dMonster = 0;
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
 // line 1389, offset 0x8014cf4c
	/* begin block 1 */
		// Start line: 1390
		// Start offset: 0x8014CF4C
		// Variables:
	// 		int rv; // $s0
	/* end block 1 */
	// End offset: 0x8014D1D8
	// End Line: 1421

	/* begin block 2 */
		// Start line: 3148
	/* end block 2 */
	// End Line: 3149

int M_DoWalk3__Fi(int i)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	ushort uVar4;
	int iVar5;
	
	if ((int)monster[i]._mVar8 == (int)(monster[i].MType)->Anims[1].Frames) {
		dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = 0;
		sVar2 = monster[i]._mVar2;
		sVar1 = monster[i]._mVar4;
		monster[i]._mx = (char)monster[i]._mVar1;
		monster[i]._my = (char)sVar2;
		dung_map[(int)sVar1 * 0x70 + (int)monster[i]._mVar5].dFlags =
				 dung_map[(int)sVar1 * 0x70 + (int)monster[i]._mVar5].dFlags & 0xef;
		dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = (short)i + 1;
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
// void /*$ra*/ M_TryM2MHit__Fiiiii(int i /*$s2*/, int mid /*$s1*/, int hper /*$s6*/, int mind /*$s5*/, int maxd /*stack 16*/)
 // line 1427, offset 0x8014d1f0
	/* begin block 1 */
		// Start line: 1428
		// Start offset: 0x8014D1F0
		// Variables:
	// 		int hit; // $s3
	// 		int dam; // $a2
	// 		unsigned char ret; // stack offset -48
	/* end block 1 */
	// End offset: 0x8014D3F8
	// End Line: 1472

	/* begin block 2 */
		// Start line: 3245
	/* end block 2 */
	// End Line: 3246

void M_TryM2MHit__Fiiiii(int i,int mid,int hper,int mind,int maxd)

{
	uchar uVar1;
	long lVar2;
	int iVar3;
	int dam;
	uchar auStack48 [8];
	
	if ((0 < monster[mid]._mhitpoints >> 6) &&
		 (((monster[mid].MType)->mtype != ' ' || (monster[mid]._mgoal != '\x02')))) {
		lVar2 = ENG_random__Fl(100);
		if (monster[mid]._mmode == '\x0f') {
			lVar2 = 0;
		}
		uVar1 = CheckMonsterHit__FiRUc(mid,auStack48);
		if ((uVar1 == '\0') && (lVar2 < hper)) {
			lVar2 = ENG_random__Fl((maxd - mind) + 1);
			dam = (lVar2 + mind) * 0x40;
			monster[mid]._mhitpoints = monster[mid]._mhitpoints + (lVar2 + mind) * -0x40;
			iVar3 = monster[mid]._mhitpoints;
			monster[mid]._mFlags = monster[mid]._mFlags | 0x10;
			if (iVar3 >> 6 < 1) {
				if ((monster[i].MType)->mtype != 'm') {
					monster[i]._mFlags = monster[i]._mFlags & 0xffef;
				}
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
 // line 1478, offset 0x8014d428
	/* begin block 1 */
		// Start line: 1479
		// Start offset: 0x8014D428
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
			// Start line: 1511
			// Start offset: 0x8014D534

			/* begin block 1.1.1 */
				// Start line: 1513
				// Start offset: 0x8014D560

				/* begin block 1.1.1.1 */
					// Start line: 1532
					// Start offset: 0x8014D6D0

					/* begin block 1.1.1.1.1 */
						// Start line: 1532
						// Start offset: 0x8014D6D8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1533
							// Start offset: 0x8014D6D8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1536
								// Start offset: 0x8014D708

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1582
									// Start offset: 0x8014D868

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1585
										// Start offset: 0x8014D88C

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1586
											// Start offset: 0x8014D88C

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1589
												// Start offset: 0x8014D8C8
												// Variables:
											// 		void * KnockOk; // $s4
											// 		int newx; // $s2
											// 		int newy; // $s0

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 1600
													// Start offset: 0x8014D910

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 1604
														// Start offset: 0x8014D950
														// Variables:
													// 		struct PlayerStruct *plr2; // $v1
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8014D9C0
													// End Line: 1609
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8014D9C0
												// End Line: 1609
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8014DA08
											// End Line: 1622
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8014DA08
										// End Line: 1622
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8014DA08
									// End Line: 1622
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8014DA08
								// End Line: 1622
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8014DA08
							// End Line: 1622
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8014DA08
						// End Line: 1622
					/* end block 1.1.1.1.1 */
					// End offset: 0x8014DA08
					// End Line: 1622
				/* end block 1.1.1.1 */
				// End offset: 0x8014DA08
				// End Line: 1622
			/* end block 1.1.1 */
			// End offset: 0x8014DA08
			// End Line: 1622
		/* end block 1.1 */
		// End offset: 0x8014DA08
		// End Line: 1622
	/* end block 1 */
	// End offset: 0x8014DA08
	// End Line: 1622

	/* begin block 2 */
		// Start line: 3379
	/* end block 2 */
	// End Line: 3380

void M_TryH2HHit__Fiiiii(int i,int pnum,int Hit,int MinDam,int MaxDam)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	int dam;
	int iVar5;
	long lVar6;
	uint uVar7;
	int iVar8;
	long lVar9;
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
			iVar5 = abs((int)cVar2 - py);
			if ((dam < 2) && (iVar5 < 2)) {
				lVar6 = ENG_random__Fl(100);
				iVar5 = (uint)(ushort)plr[pnum]._pDexterity << 0x10;
				dam = iVar5 >> 0x10;
				dam = (Hit - (plr[pnum]._pIAC + plr[pnum]._pIBonusAC +
											(((dam / 5 + (dam >> 0x1f)) - (iVar5 >> 0x1f)) * 0x10000 >> 0x10) + -0x1e)) +
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
				if (((ptrplr->_pmode == PM_STAND) || (lVar9 = 100, ptrplr->_pmode == PM_ATTACK)) &&
					 (lVar9 = 100, plr[pnum]._pBlockFlag != '\0')) {
					lVar9 = ENG_random__Fl(100);
				}
				iVar8 = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity +
								((int)monster[i].mLevel - (int)plr[pnum]._pLevel) * -2;
				iVar5 = iVar8;
				if (iVar8 < 0) {
					iVar5 = 0;
				}
				if (100 < iVar8) {
					iVar5 = 100;
				}
				if (lVar6 < dam) {
					if (lVar9 < iVar5) {
						py = GetDirection__Fiiii(px,py,(int)cVar1,(int)cVar2);
						StartPlrBlock__FP12PlayerStructi(ptrplr,py);
					}
					else {
						lVar6 = ENG_random__Fl(((MaxDam - MinDam) + 1) * 0x40);
						dam = lVar6 + MinDam * 0x40 + plr[pnum]._pIGetHit * 0x40;
						if (dam < 0x40) {
							dam = 0x40;
						}
						iVar5 = plr[pnum]._pHPBase;
						plr[pnum]._pHitPoints = plr[pnum]._pHitPoints - dam;
						uVar7 = plr[pnum]._pIFlags;
						plr[pnum]._pHPBase = iVar5 - dam;
						if ((uVar7 & 0x4000000) != 0) {
							lVar6 = ENG_random__Fl(3);
							iVar5 = monster[i]._mhitpoints + (lVar6 + 1) * -0x40;
							monster[i]._mhitpoints = iVar5;
							if (iVar5 >> 6 < 1) {
								M_StartKill__Fii(i,pnum);
							}
							else {
								M_StartHit__Fiii(i,pnum,(lVar6 + 1) * 0x40);
							}
						}
						if ((((monster[i]._mFlags & 0x1000) == 0) && ((monster[i].MType)->mtype == '2')) &&
							 (gbMaxPlayers != '\x01')) {
							monster[i]._mhitpoints = monster[i]._mhitpoints + dam;
						}
						if (plr[pnum]._pMaxHP < plr[pnum]._pHitPoints) {
							lVar6 = plr[pnum]._pMaxHPBase;
							plr[pnum]._pHitPoints = plr[pnum]._pMaxHP;
							plr[pnum]._pHPBase = lVar6;
						}
						if (plr[pnum]._pHitPoints >> 6 < 1) {
							StartPlrKill__FP12PlayerStructi(ptrplr,0);
						}
						else {
							StartPlrHit__FP12PlayerStructiUc(ptrplr,dam,'\0');
							if ((monster[i]._mFlags & 0x80) != 0) {
								bVar3 = true;
								if (plr[pnum]._pmode != PM_GOTHIT) {
									StartPlrHit__FiiUc(pnum,0,'\x01');
								}
								px = px + (int)offset_x[(int)monster[i]._mdir];
								py = py + (int)offset_y[(int)monster[i]._mdir];
								if (((FePlayerNo != 0) && (uVar7 = pnum ^ 1, plr[pnum].plractive != '\0')) &&
									 ((plr[uVar7].plractive != '\0' &&
										(uVar4 = ChkPlrOffsets__Fiiii(px * 8,py * 8,plr[uVar7].WorldX,plr[uVar7].WorldY)
										, uVar4 == '\0')))) {
									bVar3 = false;
								}
								if ((bVar3) &&
									 (uVar4 = PosOkPlayer__FP12PlayerStructii(ptrplr,px,py), uVar4 != '\0')) {
									SetPlayerOld__FP12PlayerStruct(ptrplr);
									dam = plrind__FP12PlayerStruct(ptrplr);
									WorldToOffset__Fiii(dam,px * 8 | 4,py * 8 | 4);
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
 // line 1634, offset 0x8014da3c
	/* begin block 1 */
		// Start line: 1635
		// Start offset: 0x8014DA3C
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		unsigned char mMinDamage; // $s5
	// 		unsigned char mMaxDamage; // $s3
	// 		unsigned char mHit; // $s4
	// 		int _menemy; // $s2
	/* end block 1 */
	// End offset: 0x8014DBC0
	// End Line: 1674

	/* begin block 2 */
		// Start line: 3766
	/* end block 2 */
	// End Line: 3767

int M_DoAttack__Fi(int i)

{
	bool bVar1;
	char cVar2;
	uint pnum;
	uint MaxDam;
	uint Hit;
	uint MinDam;
	
	MinDam = (uint)monster[i].mMinDamage;
	MaxDam = (uint)monster[i].mMaxDamage;
	Hit = (uint)monster[i].mHit;
	pnum = (uint)monster[i]._menemy;
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
		if (cVar2 != '\x01') goto LAB_8014dba0;
		PlayEffect__Fii(i,0);
	}
	cVar2 = monster[i]._mAnimFrame;
LAB_8014dba0:
	bVar1 = cVar2 == monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoRAttack__Fi(int i /*$s2*/)
 // line 1681, offset 0x8014dbe8
	/* begin block 1 */
		// Start line: 1682
		// Start offset: 0x8014DBE8
		// Variables:
	// 		int multimissiles; // $s3
	// 		int mi; // $s1
	/* end block 1 */
	// End offset: 0x8014DD50
	// End Line: 1704

	/* begin block 2 */
		// Start line: 3902
	/* end block 2 */
	// End Line: 3903

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
 // line 1711, offset 0x8014dd70
	/* begin block 1 */
		// Start line: 1712
		// Start offset: 0x8014DD70
	/* end block 1 */
	// End offset: 0x8014DF64
	// End Line: 1734

	/* begin block 2 */
		// Start line: 3970
	/* end block 2 */
	// End Line: 3971

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
			if (monster[i]._mVar2 != 0xf) goto LAB_8014df18;
			uVar3 = monster[i]._mFlags & 0xfffb;
		}
		monster[i]._mFlags = uVar3;
	}
LAB_8014df18:
	bVar1 = monster[i]._mAnimFrame == monster[i]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(i,(int)monster[i]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoSAttack__Fi(int i /*$s1*/)
 // line 1741, offset 0x8014df78
	/* begin block 1 */
		// Start line: 1742
		// Start offset: 0x8014DF78
	/* end block 1 */
	// End offset: 0x8014E03C
	// End Line: 1752

	/* begin block 2 */
		// Start line: 4036
	/* end block 2 */
	// End Line: 4037

int M_DoSAttack__Fi(int i)

{
	bool bVar1;
	uint uVar2;
	
	uVar2 = SEXT14(monster[i]._mAnimFrame);
	if (uVar2 == (uint)(monster[i].MData)->mAFNum2) {
		M_TryH2HHit__Fiiiii(i,(uint)monster[i]._menemy,(uint)monster[i].mHit2,
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
 // line 1759, offset 0x8014e054
	/* begin block 1 */
		// Start line: 1760
		// Start offset: 0x8014E054
	/* end block 1 */
	// End offset: 0x8014E120
	// End Line: 1769

	/* begin block 2 */
		// Start line: 4084
	/* end block 2 */
	// End Line: 4085

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
 // line 1775, offset 0x8014e134
	/* begin block 1 */
		// Start line: 1776
		// Start offset: 0x8014E134
		// Variables:
	// 		int mtype; // $v0
	/* end block 1 */
	// End offset: 0x8014E250
	// End Line: 1794

	/* begin block 2 */
		// Start line: 4120
	/* end block 2 */
	// End Line: 4121

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
 // line 1800, offset 0x8014e260
	/* begin block 1 */
		// Start line: 1801
		// Start offset: 0x8014E260
		// Variables:
	// 		struct MonsterStruct *Monst; // $a0
	/* end block 1 */
	// End offset: 0x8014E2F4
	// End Line: 1821

	/* begin block 2 */
		// Start line: 4178
	/* end block 2 */
	// End Line: 4179

int M_DoHeal__Fi(int i)

{
	short sVar1;
	ushort uVar2;
	int iVar3;
	
	if (((monster[i]._mFlags & 8) == 0) && (monster[i]._mAnimFrame == '\x01')) {
		sVar1 = monster[i]._mVar1;
		monster[i]._mFlags = monster[i]._mFlags & 0xfffd | 4;
		iVar3 = monster[i]._mhitpoints + (int)sVar1;
		if (iVar3 < monster[i]._mmaxhp) {
			monster[i]._mhitpoints = iVar3;
		}
		else {
			uVar2 = monster[i]._mFlags;
			monster[i]._mhitpoints = monster[i]._mmaxhp;
			monster[i]._mmode = '\a';
			monster[i]._mFlags = uVar2 & 0xfffb;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoTalk__Fi(int i /*$s2*/)
 // line 1827, offset 0x8014e2fc
	/* begin block 1 */
		// Start line: 1828
		// Start offset: 0x8014E2FC
		// Variables:
	// 		int tren; // $s0
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s4
	// 		int _my; // $s5
	// 		int mName; // $s3
	/* end block 1 */
	// End offset: 0x8014E878
	// End Line: 1935

	/* begin block 2 */
		// Start line: 4234
	/* end block 2 */
	// End Line: 4235

int M_DoTalk__Fi(int i)

{
	char cVar1;
	uchar uVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = (int)monster[i]._mx;
	iVar5 = (int)monster[i]._my;
	uVar3 = monster[i].mName;
	M_StartStand__Fii(i,(int)monster[i]._mdir);
	monster[i]._mgoal = '\a';
	uVar2 = effect_is_playing__Fi(alltext[monster[i].mtalkmsg].sfxnr);
	if (uVar2 == '\0') {
		InitQTextMsg__Fi(monster[i].mtalkmsg);
		if (uVar3 == (uint)UniqMonst[0].mName) {
			if (monster[i].mtalkmsg == 0x90) {
				quests[2]._qactive = '\x02';
				quests[2]._qvar1 = '\x02';
				quests[2]._qlog = '\x01';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x02');
				}
			}
			if ((monster[i].mtalkmsg == 0x91) && ((monster[i]._mFlags & 0x40) == 0)) {
				quests[2]._qvar1 = '\x03';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x02');
				}
				SpawnItem__FiiiUc(i,iVar4 + 1,iVar5 + 1,'\x01');
				monster[i]._mFlags = monster[i]._mFlags | 0x40;
			}
		}
		if (((uVar3 == (uint)UniqMonst[2].mName) && (monster[i].mtalkmsg == 0x94)) &&
			 ((monster[i]._mFlags & 0x40) == 0)) {
			quests[3]._qactive = '\x02';
			quests[3]._qlog = '\x01';
			quests[3]._qvar2 = '\x02';
			if (deltaload == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x03');
				CreateTypeItem__FiiUciiUcUc(iVar4 + 1,iVar5 + 1,'\0',0,0x18,1,0);
			}
			monster[i]._mFlags = monster[i]._mFlags | 0x40;
		}
		if (((uVar3 == (uint)UniqMonst[3].mName) && (monster[i].mtalkmsg == 0x14)) &&
			 ((monster[i]._mFlags & 0x40) == 0)) {
			ObjChangeMap__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 2,setpc_y + (setpc_h >> 1) + -2
												 );
			cVar1 = TransVal;
			TransVal = '\t';
			DRLG_MRectTrans__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 4,setpc_y + (setpc_h >> 1));
			quests[7]._qvar1 = '\x02';
			if (quests[7]._qactive == '\x01') {
				quests[7]._qactive = '\x02';
			}
			TransVal = cVar1;
			monster[i]._mFlags = monster[i]._mFlags | 0x40;
			NetSendCmdQuest__FUcUc('\x01','\a');
		}
		if (uVar3 == (uint)UniqMonst[7].mName) {
			if (monster[i].mtalkmsg == 0x51) {
				quests[4]._qactive = '\x02';
				quests[4]._qlog = '\x01';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x04');
				}
			}
			if ((monster[i].mtalkmsg == 0x53) && ((monster[i]._mFlags & 0x40) == 0)) {
				SpawnUnique__Fiii(6,iVar4 + 1,iVar5 + 1);
				monster[i]._mFlags = monster[i]._mFlags | 0x40;
			}
		}
		if ((uVar3 == (uint)UniqMonst[8].mName) && (quests[11]._qvar1 = '\x02', deltaload == '\0')) {
			NetSendCmdQuest__FUcUc('\x01','\b');
		}
		if ((uVar3 == (uint)UniqMonst[4].mName) && (gbMaxPlayers != '\x01')) {
			quests[15]._qvar1 = '\x06';
			if (deltaload == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x0f');
			}
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
 // line 1944, offset 0x8014e8a0
	/* begin block 1 */
		// Start line: 1945
		// Start offset: 0x8014E8A0
		// Variables:
	// 		struct MonsterStruct *Monst; // $s5
	// 		unsigned char done; // $s6
	// 		int mulx; // stack offset -64
	// 		int muly; // $v1
	// 		int x; // $s3
	// 		int y; // $s7
	// 		int a; // $s2
	// 		int b; // $s0
	// 		int px; // $s0
	// 		int py; // stack offset -56
	/* end block 1 */
	// End offset: 0x8014EA80
	// End Line: 1989

	/* begin block 2 */
		// Start line: 4501
	/* end block 2 */
	// End Line: 4502

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
	uint x;
	uint uVar11;
	
	bVar3 = false;
	uVar11 = 0;
	uVar10 = 0;
	if (monster[i]._mmode != '\x0f') {
		bVar1 = monster[i]._menemyx;
		bVar2 = monster[i]._menemyy;
		lVar5 = ENG_random__Fl(2);
		iVar6 = lVar5 * 2 + -1;
		lVar5 = ENG_random__Fl(2);
		iVar7 = lVar5 * 2 + -1;
		iVar9 = -1;
		x = (uint)bVar1 - iVar6;
		do {
			iVar8 = -1;
			if (!bVar3) {
				y = (uint)bVar2 - iVar7;
				do {
					if (((((iVar9 != 0) || (iVar8 != 0)) && (uVar10 = x, uVar11 = y, y < 0x62)) &&
							((uVar10 = x, uVar11 = y, x < 0x62 &&
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
			dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = 0;
			dung_map[uVar10 * 0x70 + uVar11].dMonster = (short)i + 1;
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
 // line 1996, offset 0x8014eab4
	/* begin block 1 */
		// Start line: 1997
		// Start offset: 0x8014EAB4
	/* end block 1 */
	// End offset: 0x8014EB0C
	// End Line: 2005

	/* begin block 2 */
		// Start line: 4632
	/* end block 2 */
	// End Line: 4633

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
// void /*$ra*/ DoEnding__Fi(int p /*$a0*/)
 // line 2016, offset 0x8014eb1c
	/* begin block 1 */
		// Start line: 2017
		// Start offset: 0x8014EB1C
	/* end block 1 */
	// End offset: 0x8014EBB4
	// End Line: 2062

	/* begin block 2 */
		// Start line: 4678
	/* end block 2 */
	// End Line: 4679

void DoEnding__Fi(int p)

{
	char *pszMovie;
	
	user_start = (void *)0x0;
	if (plr[p]._pClass == '\0') {
		pszMovie = "DIABVIC3.MOV";
	}
	else {
		pszMovie = "DIABVIC2.MOV";
		if (plr[p]._pClass == '\x02') {
			pszMovie = "DIABVIC1.MOV";
		}
	}
	myplr = p;
	play_movie(pszMovie);
	music_stop__Fv();
	user_start = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrepDoEnding__Fi(int pnum /*$a0*/)
 // line 2067, offset 0x8014ebc4
	/* begin block 1 */
		// Start line: 2068
		// Start offset: 0x8014EBC4

		/* begin block 1.1 */
			// Start line: 2078
			// Start offset: 0x8014EC3C
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x8014ECDC
		// End Line: 2089
	/* end block 1 */
	// End offset: 0x8014ECFC
	// End Line: 2091

	/* begin block 2 */
		// Start line: 4798
	/* end block 2 */
	// End Line: 4799

void PrepDoEnding__Fi(int pnum)

{
	uchar uVar1;
	uint uVar2;
	long *plVar3;
	undefined *puVar4;
	long *plVar5;
	int n;
	
	gbDoEnding = (char)pnum + '\x01';
	gbRunGame = '\0';
	deathflag = '\0';
	uVar2 = plr[myplr].pDiabloKillLevel;
	if (plr[myplr].pDiabloKillLevel < gnDifficulty + 1U) {
		uVar2 = gnDifficulty + 1U;
	}
	plr[myplr].pDiabloKillLevel = uVar2;
	n = 0;
	plVar3 = &plr[0]._pMana;
	plVar5 = &plr[0]._pHitPoints;
	puVar4 = (undefined *)0x0;
	do {
		(&plr[0]._pInvincible)[(int)puVar4] = '\x01';
		uVar1 = gbMaxPlayers;
		*(undefined4 *)((int)&plr[0]._pmode + (int)puVar4) = 0xb;
		if (1 < uVar1) {
			if (*plVar5 >> 6 == 0) {
				*plVar5 = 0x40;
			}
			if (*plVar3 >> 6 == 0) {
				*plVar3 = 0x40;
			}
		}
		plVar3 = plVar3 + 0x67a;
		plVar5 = plVar5 + 0x67a;
		n = n + 1;
		puVar4 = &DAT_000019e8 + (int)puVar4;
	} while (n < 2);
	n = 0x18;
	if (FePlayerNo != 0) {
		n = 0x30;
	}
	HappyMan__Fi(n);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoDeath__Fi(int i /*$s1*/)
 // line 2097, offset 0x8014ed0c
	/* begin block 1 */
		// Start line: 2098
		// Start offset: 0x8014ED0C
		// Variables:
	// 		struct MonsterStruct *pMonster; // $v1
	// 		int _mx; // $s2
	// 		int _my; // $s3

		/* begin block 1.1 */
			// Start line: 2098
			// Start offset: 0x8014ED0C

			/* begin block 1.1.1 */
				// Start line: 2109
				// Start offset: 0x8014ED80
			/* end block 1.1.1 */
			// End offset: 0x8014EE04
			// End Line: 2119
		/* end block 1.1 */
		// End offset: 0x8014EEAC
		// End Line: 2138
	/* end block 1 */
	// End offset: 0x8014EEB0
	// End Line: 2141

	/* begin block 2 */
		// Start line: 4870
	/* end block 2 */
	// End Line: 4871

int M_DoDeath__Fi(int i)

{
	uchar uVar1;
	int dx;
	int dy;
	
	dx = (int)monster[i]._mx;
	monster[i]._mVar1 = monster[i]._mVar1 + 1;
	dy = (int)monster[i]._my;
	uVar1 = (monster[i].MType)->mtype;
	if (uVar1 == 'n') {
		DiabloDieFlag = &DAT_00000001;
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
			gbMaxPlayers = '\x01';
			PrepDoEnding__Fi((int)monster[i]._mVar8);
		}
	}
	else {
		if (monster[i]._mAnimFrame == monster[i]._mAnimLen) {
			if (uVar1 != 'm') {
				AddDead__Fiici(dx,dy,(monster[i].MType)->mdeadval,(int)monster[i]._mdir);
			}
			dung_map[dx * 0x70 + dy].dMonster = 0;
			monster[i]._mDelFlag = '\x01';
			M_UpdateLeader__Fi(i);
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ M_DoSpStand__Fi(int i /*$s1*/)
 // line 2147, offset 0x8014eed0
	/* begin block 1 */
		// Start line: 2148
		// Start offset: 0x8014EED0
	/* end block 1 */
	// End offset: 0x8014EF64
	// End Line: 2158

	/* begin block 2 */
		// Start line: 4995
	/* end block 2 */
	// End Line: 4996

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
 // line 2162, offset 0x8014ef7c
	/* begin block 1 */
		// Start line: 2163
		// Start offset: 0x8014EF7C

		/* begin block 1.1 */
			// Start line: 2179
			// Start offset: 0x8014F000

			/* begin block 1.1.1 */
				// Start line: 2179
				// Start offset: 0x8014F044
				// Variables:
			// 		int tmp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8014F044
			// End Line: 2186
		/* end block 1.1 */
		// End offset: 0x8014F078
		// End Line: 2186
	/* end block 1 */
	// End offset: 0x8014F078
	// End Line: 2186

	/* begin block 2 */
		// Start line: 5035
	/* end block 2 */
	// End Line: 5036

int M_DoDelay__Fi(int i)

{
	char cVar1;
	short sVar2;
	
	M_GetDir__Fi(i);
	monster[i].Action = '\0';
	M_Enemy__Fi(i);
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
 // line 2192, offset 0x8014f090
	/* begin block 1 */
		// Start line: 2193
		// Start offset: 0x8014F090
	/* end block 1 */
	// End offset: 0x8014F104
	// End Line: 2200

	/* begin block 2 */
		// Start line: 5101
	/* end block 2 */
	// End Line: 5102

int M_DoStone__Fi(int i)

{
	if (monster[i]._mhitpoints == 0) {
		dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = 0;
		monster[i]._mDelFlag = '\x01';
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_WalkDir__Fii(int i /*$a0*/, int md /*$a1*/)
 // line 2206, offset 0x8014f10c
	/* begin block 1 */
		// Start line: 2207
		// Start offset: 0x8014F10C
		// Variables:
	// 		int mwi; // $v1
	/* end block 1 */
	// End offset: 0x8014F32C
	// End Line: 2266

	/* begin block 2 */
		// Start line: 5127
	/* end block 2 */
	// End Line: 5128

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
		yvel = (&INT_801051f8)[iVar1 * 3];
		local_10 = 1;
		local_c = 0;
		break;
	case 1:
		xadd = 0;
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = 1;
		local_c = 1;
		xvel = -(&INT_801051f8)[iVar1 * 3];
		break;
	case 2:
		yvel = 0;
		xadd = -1;
		local_10 = 1;
		local_c = 2;
		xvel = -INT_ARRAY_801051fc[iVar1 * 3];
		break;
	case 3:
		xadd = -1;
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = 0;
		local_c = 3;
		xvel = -(&INT_801051f8)[iVar1 * 3];
		goto LAB_8014f320;
	case 4:
		xvel = 0;
		xadd = -1;
		yvel = (&INT_801051f8)[iVar1 * 3];
		local_10 = -1;
		local_c = 4;
		goto LAB_8014f320;
	case 5:
		xadd = 0;
		xvel = (&INT_801051f8)[iVar1 * 3];
		yvel = (&MWVel)[iVar1 * 3];
		local_10 = -1;
		local_c = 5;
LAB_8014f320:
		yvel = -yvel;
		break;
	case 6:
		yvel = 0;
		xadd = 1;
		xvel = INT_ARRAY_801051fc[iVar1 * 3];
		local_10 = -1;
		local_c = 6;
		break;
	case 7:
		xadd = 1;
		xvel = (&INT_801051f8)[iVar1 * 3];
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
 // line 2274, offset 0x8014f33c
	/* begin block 1 */
		// Start line: 2275
		// Start offset: 0x8014F33C
		// Variables:
	// 		int leader; // $s3
	// 		int tmp; // $v1
	// 		int m; // $a1
	// 		struct MonsterStruct *pMonster; // $s7
	// 		int _mx; // $s6
	// 		int _my; // $s5
	/* end block 1 */
	// End offset: 0x8014F720
	// End Line: 2351

	/* begin block 2 */
		// Start line: 5268
	/* end block 2 */
	// End Line: 5269

void GroupUnity__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	int iVar5;
	int iVar6;
	MonsterStruct *pMVar7;
	uint uVar8;
	
	cVar1 = monster[i]._mx;
	cVar2 = monster[i]._my;
	uVar8 = 0;
	if (monster[i].leaderflag == '\0') goto LAB_8014f4c0;
	uVar8 = (uint)monster[i].leader;
	uVar4 = LineClearF__FPFii_Uciiii
										(0xd0,(int)cVar1,(int)cVar2,(int)monster[uVar8]._mfutx,
										 (int)monster[uVar8]._mfuty);
	if (uVar4 == '\0') {
		if (monster[i].leaderflag != '\x01') goto LAB_8014f4c0;
		monster[uVar8].packsize = monster[uVar8].packsize + -1;
		uVar4 = '\x02';
	}
	else {
		if (monster[i].leaderflag != '\x02') goto LAB_8014f4c0;
		bVar3 = false;
		iVar6 = abs((int)cVar1 - (int)monster[uVar8]._mfutx);
		if (iVar6 < 4) {
			iVar6 = abs((int)cVar2 - (int)monster[uVar8]._mfuty);
			bVar3 = iVar6 < 4;
		}
		if (!bVar3) goto LAB_8014f4c0;
		monster[uVar8].packsize = monster[uVar8].packsize + '\x01';
		uVar4 = '\x01';
	}
	monster[i].leaderflag = uVar4;
LAB_8014f4c0:
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
			pMVar7 = monster + 0xbe;
			do {
				iVar5 = (int)*(short *)&pMVar7->mtalkmsg;
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
				pMVar7 = (MonsterStruct *)((int)&pMVar7->mtalkmsg + 2);
			} while (iVar6 < nummonsters);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_CallWalk__Fii(int i /*$s2*/, int md /*$s1*/)
 // line 2359, offset 0x8014f750
	/* begin block 1 */
		// Start line: 2360
		// Start offset: 0x8014F750
		// Variables:
	// 		int mdtemp; // $s3
	// 		unsigned char ok; // $s0
	/* end block 1 */
	// End offset: 0x8014F8CC
	// End Line: 2378

	/* begin block 2 */
		// Start line: 5472
	/* end block 2 */
	// End Line: 5473

uchar M_CallWalk__Fii(int i,int md)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	uint uVar4;
	uint mdir;
	
	uVar2 = DirOK__Fii(i,md);
	lVar3 = ENG_random__Fl(2);
	if (lVar3 == 0) {
		mdir = md;
		if (uVar2 == '\0') {
			mdir = md + 1U & 7;
			uVar2 = DirOK__Fii(i,mdir);
			uVar4 = md - 1;
			if (uVar2 == '\0') goto LAB_8014f7ec;
		}
LAB_8014f804:
		bVar1 = true;
	}
	else {
		mdir = md;
		if (uVar2 != '\0') goto LAB_8014f804;
		mdir = md - 1U & 7;
		uVar2 = DirOK__Fii(i,mdir);
		uVar4 = md + 1;
		if (uVar2 != '\0') goto LAB_8014f804;
LAB_8014f7ec:
		mdir = uVar4 & 7;
		uVar2 = DirOK__Fii(i,mdir);
		bVar1 = false;
		if (uVar2 != '\0') goto LAB_8014f804;
	}
	lVar3 = ENG_random__Fl(2);
	if (lVar3 == 0) {
		if (!bVar1) {
			mdir = (md - 1U & 7) - 1 & 7;
			uVar2 = DirOK__Fii(i,mdir);
			if (uVar2 == '\0') {
				mdir = (md + 1U & 7) + 1;
				goto LAB_8014f890;
			}
		}
	}
	else {
		if (!bVar1) {
			mdir = (md + 1U & 7) + 1 & 7;
			uVar2 = DirOK__Fii(i,mdir);
			if (uVar2 == '\0') {
				mdir = (md - 1U & 7) - 1;
LAB_8014f890:
				mdir = mdir & 7;
				uVar2 = DirOK__Fii(i,mdir);
				bVar1 = false;
				if (uVar2 == '\0') goto LAB_8014f8b4;
			}
		}
	}
	bVar1 = true;
LAB_8014f8b4:
	if (bVar1) {
		M_WalkDir__Fii(i,mdir);
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_CallWalk2__Fii(int i /*$s2*/, int md /*$s1*/)
 // line 2410, offset 0x8014f8f0
	/* begin block 1 */
		// Start line: 2411
		// Start offset: 0x8014F8F0
		// Variables:
	// 		int mdtemp; // $s4
	// 		unsigned char ok; // $s0
	/* end block 1 */
	// End offset: 0x8014F9C4
	// End Line: 2424

	/* begin block 2 */
		// Start line: 5574
	/* end block 2 */
	// End Line: 5575

uchar M_CallWalk2__Fii(int i,int md)

{
	bool bVar1;
	uchar uVar2;
	long lVar3;
	uint uVar4;
	uint mdir;
	
	uVar2 = DirOK__Fii(i,md);
	lVar3 = ENG_random__Fl(2);
	if (lVar3 == 0) {
		if (uVar2 == '\0') {
			mdir = md + 1U & 7;
			uVar2 = DirOK__Fii(i,mdir);
			uVar4 = md - 1;
			md = mdir;
			goto joined_r0x8014f980;
		}
	}
	else {
		if (uVar2 == '\0') {
			mdir = md - 1U & 7;
			uVar2 = DirOK__Fii(i,mdir);
			uVar4 = md + 1;
			md = mdir;
joined_r0x8014f980:
			if (uVar2 == '\0') {
				md = uVar4 & 7;
				uVar2 = DirOK__Fii(i,md);
				bVar1 = false;
				if (uVar2 == '\0') goto LAB_8014f9ac;
			}
		}
	}
	bVar1 = true;
LAB_8014f9ac:
	if (bVar1) {
		M_WalkDir__Fii(i,md);
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ M_DumbWalk__Fii(int i /*$s0*/, int md /*$s2*/)
 // line 2431, offset 0x8014f9e8
	/* begin block 1 */
		// Start line: 2432
		// Start offset: 0x8014F9E8
	/* end block 1 */
	// End offset: 0x8014FA20
	// End Line: 2439

	/* begin block 2 */
		// Start line: 5616
	/* end block 2 */
	// End Line: 5617

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
 // line 2445, offset 0x8014fa3c
	/* begin block 1 */
		// Start line: 2446
		// Start offset: 0x8014FA3C
		// Variables:
	// 		int mdtemp; // $s3
	// 		unsigned char ok; // $s1
	/* end block 1 */
	// End offset: 0x8014FB64
	// End Line: 2478

	/* begin block 2 */
		// Start line: 5644
	/* end block 2 */
	// End Line: 5645

uchar M_RoundWalk__FiiRi(int i,int md,int *dir)

{
	bool bVar1;
	uchar uVar2;
	uchar uVar3;
	uint mdir;
	uint uVar4;
	uint mdir_00;
	
	if (*dir == 0) {
		mdir = (md + 1U & 7) + 1;
	}
	else {
		mdir = (md - 1U & 7) - 1;
	}
	mdir = mdir & 7;
	uVar2 = DirOK__Fii(i,mdir);
	mdir_00 = mdir;
	if (uVar2 != '\0') goto LAB_8014fb34;
	uVar2 = '\0';
	if (*dir == 0) {
		mdir_00 = mdir - 1 & 7;
		uVar3 = DirOK__Fii(i,mdir_00);
		uVar4 = mdir_00 - 1;
		if (uVar3 == '\0') goto LAB_8014fb0c;
LAB_8014fb24:
		uVar2 = '\x01';
		bVar1 = true;
	}
	else {
		mdir_00 = mdir + 1 & 7;
		uVar3 = DirOK__Fii(i,mdir_00);
		uVar4 = mdir_00 + 1;
		if (uVar3 != '\0') goto LAB_8014fb24;
LAB_8014fb0c:
		mdir_00 = uVar4 & 7;
		uVar3 = DirOK__Fii(i,mdir_00);
		bVar1 = false;
		if (uVar3 != '\0') goto LAB_8014fb24;
	}
	if (!bVar1) {
		*dir = (uint)(*dir == 0);
		uVar2 = M_CallWalk__Fii(i,mdir + 4 & 7);
		return uVar2;
	}
LAB_8014fb34:
	M_WalkDir__Fii(i,mdir_00);
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Zombie__Fi(int i /*$s2*/)
 // line 2489, offset 0x8014fb88
	/* begin block 1 */
		// Start line: 2490
		// Start offset: 0x8014FB88
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int mx; // $s1
	// 		int my; // $s3
	// 		int md; // $s4
	// 		int v; // $s6
	/* end block 1 */
	// End offset: 0x8014FD5C
	// End Line: 2524

	/* begin block 2 */
		// Start line: 5736
	/* end block 2 */
	// End Line: 5737

void MAI_Zombie__Fi(int i)

{
	bool bVar1;
	long lVar2;
	int md;
	int __x;
	int __x_00;
	long md_00;
	
	if (monster[i]._mmode == '\0') {
		if ((dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dFlags & 4U) != 0) {
			bVar1 = false;
			md_00 = (long)monster[i]._mdir;
			__x = (int)monster[i]._mx - (uint)monster[i]._menemyx;
			__x_00 = (int)monster[i]._my - (uint)monster[i]._menemyy;
			lVar2 = ENG_random__Fl(100);
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
						lVar2 = ENG_random__Fl(100);
						if (lVar2 < (int)((uint)monster[i]._mint * 2 + 0x14)) {
							md_00 = ENG_random__Fl(8);
						}
						M_DumbWalk__Fii(i,md_00);
					}
				}
			}
			if (monster[i]._mmode == '\0') {
				monster[i].Action = '\0';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SkelSd__Fi(int i /*$s2*/)
 // line 2532, offset 0x8014fd88
	/* begin block 1 */
		// Start line: 2533
		// Start offset: 0x8014FD88
		// Variables:
	// 		struct MonsterStruct *Monst; // $s1
	// 		int mx; // $s0
	// 		int my; // $s3
	// 		int md; // $s0
	/* end block 1 */
	// End offset: 0x8014FF14
	// End Line: 2559

	/* begin block 2 */
		// Start line: 5836
	/* end block 2 */
	// End Line: 5837

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
	
	if (monster[i]._mmode != '\0') {
		return;
	}
	bVar5 = false;
	if (monster[i]._msquelch == '\0') {
		return;
	}
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
			 (lVar7 = ENG_random__Fl(100), lVar7 < (int)((uint)monster[i]._mint * 2 + 0x14))) {
			M_StartAttack__Fi(i);
			goto LAB_8014ff00;
		}
		md = ENG_random__Fl(10);
		iVar6 = (uint)monster[i]._mint * 2 + -10;
	}
	else {
		if ((monster[i]._mVar1 == 0xd) ||
			 (lVar7 = ENG_random__Fl(100), (int)((uint)monster[i]._mint * -4 + 0x23) <= lVar7)) {
			M_CallWalk__Fii(i,md);
			goto LAB_8014ff00;
		}
		md = ENG_random__Fl(10);
		iVar6 = (uint)monster[i]._mint * 2 + -0xf;
	}
	M_StartDelay__Fii(i,md - iVar6);
LAB_8014ff00:
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Snake__Fi(int i /*$s2*/)
 // line 2570, offset 0x8014ff38
	/* begin block 1 */
		// Start line: 2571
		// Start offset: 0x8014FF38
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int fx; // $s3
	// 		int fy; // $s5
	// 		int mx; // $s4
	// 		int my; // $s7
	// 		int md; // $s6
	// 		int pnum; // $fp
	// 		char pattern[6]; // stack offset -48
	// 		int tmp; // $v1
	/* end block 1 */
	// End offset: 0x80150300
	// End Line: 2634

	/* begin block 2 */
		// Start line: 5924
	/* end block 2 */
	// End Line: 5925

void MAI_Snake__Fi(int i)

{
	bool bVar1;
	uchar uVar2;
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
	
	local_30 = DAT_8011c2b8;
	local_2c = DAT_8011c2bc;
	local_2b = DAT_8011c2bd;
	uVar3 = monster[i]._menemy;
	if (monster[i]._mmode != '\0') {
		return;
	}
	bVar1 = false;
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
		bVar1 = iVar4 < 2;
	}
	if (bVar1) {
		if (((uint)(ushort)monster[i]._mVar1 - 0xd < 2) ||
			 (lVar5 = ENG_random__Fl(100), lVar5 < (int)((uint)monster[i]._mint + 0x14))) {
			M_StartAttack__Fi(i);
			goto LAB_801502ec;
		}
		iVar4 = ENG_random__Fl(10);
		midir = (uint)monster[i]._mint - 10;
	}
	else {
		bVar1 = false;
		iVar4 = abs(__x);
		if ((iVar4 < 3) && (iVar4 = abs(__x_00), iVar4 < 3)) {
			uVar2 = LineClearF1__FPFiii_Uciiiii(0x5c,i,(int)monster[i]._mx,(int)monster[i]._my,x2,y2);
			bVar1 = uVar2 != '\0';
		}
		if (bVar1) {
			sVar6 = monster[i]._mVar1;
			if (sVar6 != 0xe) {
				iVar4 = AddMissile__Fiiiiiiciii
													((int)monster[i]._mx,(int)monster[i]._my,x2,y2,midir,0x14,(int)(char)uVar3
													 ,i,0,0);
				if (iVar4 != -1) {
					PlayEffect__Fii(i,0);
					dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = ~(ushort)i;
					monster[i]._mmode = '\x0e';
				}
				goto LAB_801502ec;
			}
		}
		else {
			sVar6 = monster[i]._mVar1;
		}
		if ((sVar6 == 0xd) ||
			 (lVar5 = ENG_random__Fl(100), (int)((uint)monster[i]._mint * -2 + 0x23) <= lVar5)) {
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
						goto LAB_801502c8;
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
LAB_801502c8:
			uVar3 = M_DumbWalk__Fii(i,monster[i]._mgoalvar2);
			if (uVar3 == '\0') {
				M_CallWalk2__Fii(i,(int)monster[i]._mdir);
			}
			goto LAB_801502ec;
		}
		iVar4 = ENG_random__Fl(10);
		midir = (uint)monster[i]._mint - 0xf;
	}
	M_StartDelay__Fii(i,iVar4 - midir);
LAB_801502ec:
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Bat__Fi(int i /*$s2*/)
 // line 2641, offset 0x80150334
	/* begin block 1 */
		// Start line: 2642
		// Start offset: 0x80150334
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
	// End offset: 0x801506B4
	// End Line: 2715

	/* begin block 2 */
		// Start line: 6075
	/* end block 2 */
	// End Line: 6076

void MAI_Bat__Fi(int i)

{
	uchar uVar1;
	byte bVar2;
	byte bVar3;
	bool bVar4;
	uchar uVar5;
	int md;
	long lVar6;
	int iVar7;
	CMonster *pCVar8;
	uint uVar9;
	int __x;
	int __x_00;
	
	uVar1 = monster[i]._menemy;
	if ((monster[i]._mmode == '\0') && (monster[i]._msquelch != '\0')) {
		__x = (int)monster[i]._mx - (uint)monster[i]._menemyx;
		__x_00 = (int)monster[i]._my - (uint)monster[i]._menemyy;
		md = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(int)monster[i]._lastx,
														 (int)monster[i]._lasty);
		monster[i]._mdir = (char)md;
		lVar6 = ENG_random__Fl(100);
		if (monster[i]._mgoal == '\x02') {
			if (monster[i]._mgoalvar1 == 0) {
				M_CallWalk__Fii(i,md + 4U & 7);
				monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + 1;
			}
			else {
				lVar6 = ENG_random__Fl(2);
				if (lVar6 == 0) {
					uVar9 = md + 1;
				}
				else {
					uVar9 = md - 1;
				}
				M_CallWalk__Fii(i,uVar9 & 7);
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
													(0x5c,i,(int)monster[i]._mx,(int)monster[i]._my,(uint)bVar2,(uint)bVar3);
				if (uVar5 != '\0') {
					bVar4 = true;
				}
			}
			if (bVar4) {
				md = AddMissile__Fiiiiiiciii
											 ((int)monster[i]._mx,(int)monster[i]._my,(uint)bVar2,(uint)bVar3,md,0x14,
												(int)(char)uVar1,i,0,0);
				if (md != -1) {
					dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dMonster = ~(ushort)i;
					monster[i]._mmode = '\x0e';
					monster[i].Action = '\x05';
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
							lVar6 = ENG_random__Fl(10);
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
			if (monster[i]._mmode == '\0') {
				monster[i].Action = '\0';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SkelBow__Fi(int i /*$s3*/)
 // line 2723, offset 0x801506e8
	/* begin block 1 */
		// Start line: 2724
		// Start offset: 0x801506E8
		// Variables:
	// 		int mx; // $s0
	// 		int my; // $s2
	// 		int md; // $s5
	// 		int fx; // $s2
	// 		int fy; // $s4
	// 		unsigned char walking; // $s6
	// 		int v; // $s0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x801508B0
	// End Line: 2760

	/* begin block 2 */
		// Start line: 6263
	/* end block 2 */
	// End Line: 6264

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
		lVar8 = ENG_random__Fl(100);
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
			uVar6 = M_DumbWalk__Fii(i,iVar7 + 4U & 7);
		}
		bVar3 = monster[i]._menemyx;
		bVar4 = monster[i]._menemyy;
		bVar5 = false;
		if ((uVar6 == '\0') &&
			 (lVar8 = ENG_random__Fl(100), lVar8 < (int)((uint)monster[i]._mint * 2 + 3))) {
			uVar6 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(uint)bVar3,(uint)bVar4);
			bVar5 = uVar6 != '\0';
		}
		if (bVar5) {
			M_StartRAttack__Fiii(i,0,4);
		}
		if (monster[i]._mmode == '\0') {
			monster[i].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Fat__Fi(int i /*$s2*/)
 // line 2767, offset 0x801508dc
	/* begin block 1 */
		// Start line: 2768
		// Start offset: 0x801508DC
		// Variables:
	// 		int mx; // $s0
	// 		int my; // $s3
	// 		int md; // $s5
	// 		int v; // $s0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x80150A7C
	// End Line: 2795

	/* begin block 2 */
		// Start line: 6371
	/* end block 2 */
	// End Line: 6372

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
		lVar6 = ENG_random__Fl(100);
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
		if (monster[i]._mmode == '\0') {
			monster[i].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Sneak__Fi(int i /*$s5*/)
 // line 2803, offset 0x80150aa4
	/* begin block 1 */
		// Start line: 2804
		// Start offset: 0x80150AA4
		// Variables:
	// 		int mx; // $s4
	// 		int my; // $s6
	// 		int md; // $s2
	// 		int v; // $fp
	// 		struct MonsterStruct *Monst; // $s0
	// 		int dist; // $s7
	/* end block 1 */
	// End offset: 0x80150E4C
	// End Line: 2886

	/* begin block 2 */
		// Start line: 6454
	/* end block 2 */
	// End Line: 6455

void MAI_Sneak__Fi(int i)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	uint md;
	long lVar4;
	uint uVar5;
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
		uVar3 = '\x02';
LAB_80150b94:
		monster[i]._mgoal = uVar3;
		monster[i]._mgoalvar1 = 0;
	}
	else {
		bVar1 = false;
		iVar6 = abs(__x);
		if ((iVar7 + 8 <= iVar6) || (iVar6 = abs(__x_00), iVar7 + 8 <= iVar6)) {
			bVar1 = true;
		}
		uVar3 = '\x01';
		if ((bVar1) || (uVar3 = '\x01', 8 < monster[i]._mgoalvar1)) goto LAB_80150b94;
	}
	if (monster[i]._mgoal == '\x02') {
		if ((monster[i]._mFlags & 0x10) != 0) {
			md = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,
															 (int)plr[(uint)monster[i]._menemy]._pownerx,
															 (int)plr[(uint)monster[i]._menemy]._pownery);
		}
		md = md + 4 & 7;
		if ((monster[i].MType)->mtype == '\x1f') {
			lVar4 = ENG_random__Fl(2);
			uVar5 = md - 1;
			if (lVar4 == 0) {
				uVar5 = md + 1;
			}
			md = uVar5 & 7;
		}
	}
	monster[i]._mdir = (char)md;
	lVar4 = ENG_random__Fl(100);
	bVar1 = false;
	iVar6 = abs(__x);
	if (iVar6 < iVar7 + 5) {
		iVar6 = abs(__x_00);
		bVar1 = iVar6 < iVar7 + 5;
	}
	bVar2 = false;
	if ((bVar1) && ((monster[i]._mFlags & 1) != 0)) {
		M_StartFadein__FiiUc(i,md,'\0');
	}
	else {
		iVar6 = abs(__x);
		if ((iVar7 + 6 <= iVar6) || (iVar6 = abs(__x_00), iVar7 + 6 <= iVar6)) {
			bVar2 = true;
		}
		if ((bVar2) && ((monster[i]._mFlags & 1) == 0)) {
			M_StartFadeout__FiiUc(i,md,'\x01');
		}
		else {
			bVar1 = false;
			if (monster[i]._mgoal != '\x02') {
				iVar7 = abs(__x);
				if ((1 < iVar7) || (iVar7 = abs(__x_00), 1 < iVar7)) {
					bVar1 = true;
				}
				if ((!bVar1) ||
					 (((monster[i]._mVar2 < 0x15 || ((int)((uint)monster[i]._mint * 4 + 0xe) <= lVar4)) &&
						(((1 < (uint)(ushort)monster[i]._mVar1 - 1 && (monster[i]._mVar1 != 3)) ||
						 ((monster[i]._mVar2 != 0 || ((int)((uint)monster[i]._mint * 4 + 0x40) <= lVar4))))))))
				goto LAB_80150de4;
			}
			monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + 1;
			M_CallWalk__Fii(i,md);
		}
	}
LAB_80150de4:
	bVar1 = false;
	if (monster[i]._mmode == '\0') {
		iVar7 = abs(__x);
		if (iVar7 < 2) {
			iVar7 = abs(__x_00);
			bVar1 = iVar7 < 2;
		}
		if ((bVar1) && (lVar4 < (int)((uint)monster[i]._mint * 4 + 10))) {
			M_StartAttack__Fi(i);
		}
		else {
			monster[i].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Fireman__Fi(int i /*$s1*/)
 // line 2896, offset 0x80150e80
	/* begin block 1 */
		// Start line: 2897
		// Start offset: 0x80150E80
		// Variables:
	// 		int mx; // $s6
	// 		int my; // $s7
	// 		int md; // $s4
	// 		int pnum; // $s5
	// 		int fx; // $s2
	// 		int fy; // $s3
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80151154
	// End Line: 2973

	/* begin block 2 */
		// Start line: 6652
	/* end block 2 */
	// End Line: 6653

void MAI_Fireman__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
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
		uVar5 = monster[i]._menemy;
		md = M_GetDir__Fi(i);
		uVar4 = monster[i]._mgoal;
		if (uVar4 == '\x01') {
			uVar4 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2);
			if ((uVar4 != '\0') &&
				 (iVar6 = AddMissile__Fiiiiiiciii
														((int)monster[i]._mx,(int)monster[i]._my,x2,y2,md,0x32,(int)(char)uVar5,
														 i,0,0), iVar6 != -1)) {
				monster[i]._mmode = '\x0e';
				monster[i]._mgoal = '\x05';
				monster[i]._mgoalvar1 = 0;
			}
		}
		else {
			if (uVar4 == '\x05') {
				if (monster[i]._mgoalvar1 == 3) {
					monster[i]._mgoal = '\x01';
					M_StartFadeout__FiiUc(i,md,'\x01');
				}
				else {
					uVar5 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2);
					if (uVar5 == '\0') {
						lVar7 = ENG_random__Fl(10);
						M_StartDelay__Fii(i,lVar7 + 5);
					}
					else {
						M_StartRAttack__Fiii(i,0x33,4);
					}
					monster[i]._mgoalvar1 = monster[i]._mgoalvar1 + 1;
				}
			}
			else {
				if (uVar4 == '\x02') {
					M_StartFadein__FiiUc(i,md,'\0');
					monster[i]._mgoal = '\x05';
				}
			}
		}
		monster[i]._mdir = (char)md;
		ENG_random__Fl(100);
		bVar3 = false;
		if (monster[i]._mmode == '\0') {
			iVar6 = abs((int)cVar1 - x2);
			if (iVar6 < 2) {
				iVar6 = abs((int)cVar2 - y2);
				bVar3 = iVar6 < 2;
			}
			if ((bVar3) && (monster[i]._mgoal == '\x01')) {
				M_TryH2HHit__Fiiiii(i,(uint)monster[i]._menemy,(uint)monster[i].mHit,
														(uint)monster[i].mMinDamage,(uint)monster[i].mMaxDamage);
				monster[i]._mgoal = '\x02';
				uVar5 = M_CallWalk__Fii(i,md + 4U & 7);
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
 // line 2984, offset 0x80151184
	/* begin block 1 */
		// Start line: 2985
		// Start offset: 0x80151184
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int x; // $a1
	// 		int y; // $a2
	// 		int xpos; // $a0
	// 		int ypos; // $v1
	// 		int m; // $v1
	// 		int rad; // $a3
	// 		int my; // $s0
	// 		int aitype; // $v0
	/* end block 1 */
	// End offset: 0x8015147C
	// End Line: 3063

	/* begin block 2 */
		// Start line: 6843
	/* end block 2 */
	// End Line: 6844

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
			M_StartStand__Fii(i,(int)cVar1 + 4U & 7);
		}
		if (monster[i]._mAnimFrame == monster[i]._mAnimLen) {
			lVar4 = ENG_random__Fl(4);
			if (lVar4 == 0) {
				if ((monster[i]._mFlags & 8) == 0) {
					M_StartSpStand__Fii(i,(int)monster[i]._mdir);
					if ((int)(monster[i]._mmaxhp + -2 + (uint)monster[i]._mint * -2) < monster[i]._mhitpoints)
					{
						monster[i]._mhitpoints = monster[i]._mmaxhp;
					}
					else {
						monster[i]._mhitpoints = monster[i]._mhitpoints + 2 + (uint)monster[i]._mint * 2;
					}
				}
				md = (uint)monster[i]._mint * 2 + 4;
				uVar7 = -md;
				while ((int)uVar7 <= md) {
					uVar6 = -md;
					if ((int)uVar6 <= md) {
						do {
							if ((((uVar7 < 0x62) && (uVar6 < 0x62)) &&
									(iVar5 = (int)dung_map[((int)monster[i]._mx + uVar6) * 0x70 +
																				 (int)monster[i]._my + uVar7].dMonster + -1,
									0 < (int)dung_map[((int)monster[i]._mx + uVar6) * 0x70 +
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
 // line 3070, offset 0x80151498
	/* begin block 1 */
		// Start line: 3071
		// Start offset: 0x80151498
		// Variables:
	// 		struct MonsterStruct *Monst; // $s1
	// 		int mx; // $s0
	// 		int my; // $s3
	// 		int md; // $s0
	/* end block 1 */
	// End offset: 0x80151578
	// End Line: 3091

	/* begin block 2 */
		// Start line: 7023
	/* end block 2 */
	// End Line: 7024

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
		if (monster[i]._mmode == '\0') {
			monster[i].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Round__FiUc(int i /*$s2*/, unsigned char special /*stack -48*/)
 // line 3098, offset 0x8015159c
	/* begin block 1 */
		// Start line: 3099
		// Start offset: 0x8015159C
		// Variables:
	// 		int mx; // $s4
	// 		int my; // $s5
	// 		int md; // $s7
	// 		int v; // $fp
	// 		int fx; // $s3
	// 		int fy; // $s6
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x801519A8
	// End Line: 3172

	/* begin block 2 */
		// Start line: 7091
	/* end block 2 */
	// End Line: 7092

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
	int __x_00;
	int __x_01;
	uint uVar8;
	
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
	lVar3 = ENG_random__Fl(100);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[i]._msquelch == -1)) &&
		 (dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dTransVal ==
			dung_map[uVar7 * 0x70 + uVar8].dTransVal)) {
		bVar1 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((3 < __x) || (__x = abs(__x_01), 3 < __x)) && (lVar4 = ENG_random__Fl(4), lVar4 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_8015185c;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar4 = ENG_random__Fl(2);
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
			 (dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dTransVal ==
				dung_map[uVar7 * 0x70 + uVar8].dTransVal)) {
			uVar2 = M_RoundWalk__FiiRi(i,mdir,&monster[i]._mgoalvar2);
			if (uVar2 == '\0') {
				lVar4 = ENG_random__Fl(10);
				M_StartDelay__Fii(i,lVar4 + 10);
			}
			goto LAB_8015185c;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_8015185c:
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
				if (((special == '\0') || (monster[i]._mmaxhp >> 1 <= monster[i]._mhitpoints)) ||
					 (lVar3 = ENG_random__Fl(2), lVar3 == 0)) {
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
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_GoatMc__Fi(int i /*$a0*/)
 // line 3176, offset 0x801519dc
	/* begin block 1 */
		// Start line: 3177
		// Start offset: 0x801519DC
	/* end block 1 */
	// End offset: 0x801519EC
	// End Line: 3178

	/* begin block 2 */
		// Start line: 7263
	/* end block 2 */
	// End Line: 7264

void MAI_GoatMc__Fi(int i)

{
	MAI_Round__FiUc(i,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Ranged__FiiUc(int i /*$s3*/, int missile_type /*$fp*/, unsigned char special /*stack -48*/)
 // line 3184, offset 0x801519fc
	/* begin block 1 */
		// Start line: 3185
		// Start offset: 0x801519FC
		// Variables:
	// 		int fx; // $s6
	// 		int fy; // $s7
	// 		int mx; // $s1
	// 		int my; // $s2
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80151BEC
	// End Line: 3238

	/* begin block 2 */
		// Start line: 7279
	/* end block 2 */
	// End Line: 7280

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
				len = ENG_random__Fl(0x14);
				M_StartDelay__Fii(i,len);
			}
			else {
				bVar6 = false;
				iVar8 = abs((int)cVar1 - (uint)bVar3);
				if ((iVar8 < 4) && (iVar8 = abs((int)cVar2 - (uint)bVar4), iVar8 < 4)) {
					len = ENG_random__Fl(100);
					bVar6 = len < (int)((uint)monster[i]._mint * 10 + 0x46);
				}
				if (bVar6) {
					M_CallWalk__Fii(i,md + 4U & 7);
				}
			}
			if (monster[i]._mmode == '\0') {
				uVar7 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,(uint)bVar3,(uint)bVar4);
				if (uVar7 == '\0') {
					monster[i].Action = '\0';
				}
				else {
					if (special == '\0') {
						M_StartRAttack__Fiii(i,missile_type,4);
					}
					else {
						M_StartRSpAttack__Fiii(i,missile_type,4);
					}
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
 // line 3243, offset 0x80151c20
	/* begin block 1 */
		// Start line: 3244
		// Start offset: 0x80151C20
	/* end block 1 */
	// End offset: 0x80151C34
	// End Line: 3245

	/* begin block 2 */
		// Start line: 7419
	/* end block 2 */
	// End Line: 7420

void MAI_GoatBow__Fi(int i)

{
	MAI_Ranged__FiiUc(i,0,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Succ__Fi(int i /*$a0*/)
 // line 3248, offset 0x80151c44
	/* begin block 1 */
		// Start line: 3249
		// Start offset: 0x80151C44
	/* end block 1 */
	// End offset: 0x80151C58
	// End Line: 3250

	/* begin block 2 */
		// Start line: 7429
	/* end block 2 */
	// End Line: 7430

void MAI_Succ__Fi(int i)

{
	MAI_Ranged__FiiUc(i,0x18,'\0');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_AcidUniq__Fi(int i /*$a0*/)
 // line 3253, offset 0x80151c68
	/* begin block 1 */
		// Start line: 3254
		// Start offset: 0x80151C68
	/* end block 1 */
	// End offset: 0x80151C7C
	// End Line: 3255

	/* begin block 2 */
		// Start line: 7439
	/* end block 2 */
	// End Line: 7440

void MAI_AcidUniq__Fi(int i)

{
	MAI_Ranged__FiiUc(i,0x39,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Scav__Fi(int i /*$s4*/)
 // line 3268, offset 0x80151c8c
	/* begin block 1 */
		// Start line: 3269
		// Start offset: 0x80151C8C
		// Variables:
	// 		struct MonsterStruct *Monst; // $s2
	// 		int x; // $s1
	// 		int y; // $s0
	// 		unsigned char done; // $s3
	/* end block 1 */
	// End offset: 0x8015202C
	// End Line: 3355

	/* begin block 2 */
		// Start line: 7469
	/* end block 2 */
	// End Line: 7470

void MAI_Scav__Fi(int i)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uint uVar4;
	uchar uVar5;
	long lVar6;
	uint uVar7;
	uint uVar8;
	int iVar9;
	
	bVar3 = false;
	if (monster[i]._mmode != '\0') {
		return;
	}
	if (monster[i]._mhitpoints < monster[i]._mmaxhp >> 1) {
		if (monster[i]._mgoal != '\x03') {
			if (monster[i].leaderflag != '\0') {
				monster[(uint)monster[i].leader].packsize = monster[(uint)monster[i].leader].packsize + -1;
				monster[i].leaderflag = '\0';
			}
			monster[i]._mgoal = '\x03';
			monster[i]._mgoalvar3 = 10;
			goto LAB_80151d78;
		}
	}
	else {
LAB_80151d78:
		if (monster[i]._mgoal != '\x03') goto LAB_80152014;
	}
	if (monster[i]._mgoalvar3 != 0) {
		cVar1 = monster[i]._mx;
		cVar2 = monster[i]._my;
		monster[i]._mgoalvar3 = monster[i]._mgoalvar3 + -1;
		uVar5 = GetdDead__Fii((int)cVar1,(int)cVar2);
		if (uVar5 == '\0') {
			if (monster[i]._mgoalvar1 == 0) {
				lVar6 = ENG_random__Fl(2);
				if (lVar6 == 0) {
					uVar4 = 4;
					do {
						uVar7 = uVar4;
						uVar8 = 4;
						do {
							if (bVar3) break;
							if ((uVar7 < 0x62) && (uVar8 < 0x62)) {
								bVar3 = false;
								uVar5 = GetdDead__Fii((int)monster[i]._mx + uVar8,(int)monster[i]._my + uVar7);
								if (uVar5 != '\0') {
									uVar5 = LineClearF__FPFii_Uciiii
																		(0xd0,(int)monster[i]._mx,(int)monster[i]._my,
																		 (int)monster[i]._mx + uVar8,(int)monster[i]._my + uVar7);
									bVar3 = uVar5 != '\0';
								}
							}
							uVar8 = uVar8 - 1;
						} while (-5 < (int)uVar8);
					} while ((-5 < (int)(uVar7 - 1)) && (uVar4 = uVar7 - 1, !bVar3));
					iVar9 = uVar8 + 1;
				}
				else {
					uVar4 = 0xfffffffc;
					do {
						uVar7 = uVar4;
						uVar8 = 0xfffffffc;
						do {
							if (bVar3) break;
							if ((uVar7 < 0x62) && (uVar8 < 0x62)) {
								bVar3 = false;
								uVar5 = GetdDead__Fii((int)monster[i]._mx + uVar8,(int)monster[i]._my + uVar7);
								if (uVar5 != '\0') {
									uVar5 = LineClearF__FPFii_Uciiii
																		(0xd0,(int)monster[i]._mx,(int)monster[i]._my,
																		 (int)monster[i]._mx + uVar8,(int)monster[i]._my + uVar7);
									bVar3 = uVar5 != '\0';
								}
							}
							uVar8 = uVar8 + 1;
						} while ((int)uVar8 < 5);
					} while (((int)(uVar7 + 1) < 5) && (uVar4 = uVar7 + 1, !bVar3));
					iVar9 = uVar8 - 1;
				}
				if (bVar3) {
					cVar1 = monster[i]._my;
					monster[i]._mgoalvar1 = (int)monster[i]._mx + iVar9 + 1;
					monster[i]._mgoalvar2 = (int)cVar1 + uVar7 + 1;
				}
				if (monster[i]._mgoalvar1 == 0) goto LAB_80152014;
			}
			iVar9 = GetDirection__Fiiii((int)monster[i]._mx,(int)monster[i]._my,monster[i]._mgoalvar1 + -1
																	,monster[i]._mgoalvar2 + -1);
			monster[i]._mdir = (char)iVar9;
			M_CallWalk__Fii(i,(int)(char)iVar9);
		}
		else {
			M_StartEat__Fi(i);
			if ((monster[i]._mFlags & 8) == 0) {
				monster[i]._mhitpoints = monster[i]._mhitpoints + 0x40;
			}
			if ((monster[i]._mmaxhp >> 1) + (monster[i]._mmaxhp >> 2) <= monster[i]._mhitpoints) {
				monster[i]._mgoal = '\x01';
				monster[i]._mgoalvar1 = 0;
				monster[i]._mgoalvar2 = 0;
			}
		}
	}
LAB_80152014:
	if (monster[i]._mmode == '\0') {
		MAI_SkelSd__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Garg__Fi(int i /*$s2*/)
 // line 3364, offset 0x80152050
	/* begin block 1 */
		// Start line: 3365
		// Start offset: 0x80152050
		// Variables:
	// 		struct MonsterStruct *Monst; // $s0
	// 		int mx; // $s1
	// 		int my; // $s3
	// 		int md; // $s4
	/* end block 1 */
	// End offset: 0x8015220C
	// End Line: 3405

	/* begin block 2 */
		// Start line: 7673
	/* end block 2 */
	// End Line: 7674

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
			if (monster[i]._mhitpoints < monster[i]._mmaxhp >> 1) {
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
					uVar7 = M_CallWalk__Fii(i,iVar8 + 4U & 7);
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
 // line 3417, offset 0x80152230
	/* begin block 1 */
		// Start line: 3418
		// Start offset: 0x80152230
		// Variables:
	// 		int fx; // $s7
	// 		int fy; // $fp
	// 		int mx; // $s5
	// 		int my; // $s6
	// 		int md; // stack offset -48
	// 		int v; // $s3
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x801526EC
	// End Line: 3509

	/* begin block 2 */
		// Start line: 7787
	/* end block 2 */
	// End Line: 7788

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
	int __x_00;
	int __x_01;
	uint x2;
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
	lVar4 = ENG_random__Fl((long)&DAT_00002710);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[i]._msquelch == -1)) &&
		 (dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dTransVal ==
			dung_map[x2 * 0x70 + y2].dTransVal)) {
		bVar1 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
				 (lVar5 = ENG_random__Fl(4 << (lessmissiles & 0x1fU)), lVar5 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_80152500;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar5 = ENG_random__Fl(2);
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
			goto LAB_80152500;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_80152500:
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
				lVar4 = ENG_random__Fl(100);
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
		lVar4 = ENG_random__Fl(10);
		M_StartDelay__Fii(i,lVar4 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Magma__Fi(int i /*$a0*/)
 // line 3513, offset 0x80152720
	/* begin block 1 */
		// Start line: 3514
		// Start offset: 0x80152720
	/* end block 1 */
	// End offset: 0x8015273C
	// End Line: 3515

	/* begin block 2 */
		// Start line: 8001
	/* end block 2 */
	// End Line: 8002

void MAI_Magma__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x15,'\x01',4,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Storm__Fi(int i /*$a0*/)
 // line 3518, offset 0x8015274c
	/* begin block 1 */
		// Start line: 3519
		// Start offset: 0x8015274C
	/* end block 1 */
	// End offset: 0x80152768
	// End Line: 3520

	/* begin block 2 */
		// Start line: 8012
	/* end block 2 */
	// End Line: 8013

void MAI_Storm__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x16,'\x01',4,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Acid__Fi(int i /*$a0*/)
 // line 3523, offset 0x80152778
	/* begin block 1 */
		// Start line: 3524
		// Start offset: 0x80152778
	/* end block 1 */
	// End offset: 0x80152798
	// End Line: 3525

	/* begin block 2 */
		// Start line: 8023
	/* end block 2 */
	// End Line: 8024

void MAI_Acid__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x39,'\0',4,1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Diablo__Fi(int i /*$a0*/)
 // line 3529, offset 0x801527a8
	/* begin block 1 */
		// Start line: 3530
		// Start offset: 0x801527A8
	/* end block 1 */
	// End offset: 0x801527C4
	// End Line: 3531

	/* begin block 2 */
		// Start line: 8036
	/* end block 2 */
	// End Line: 8037

void MAI_Diablo__Fi(int i)

{
	MAI_RoundRanged__FiiUciUc(i,0x43,'\0',0x28,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_RR2__Fiii(int i /*$s4*/, int mistype /*stack -56*/, int dam /*stack -48*/)
 // line 3534, offset 0x801527d4
	/* begin block 1 */
		// Start line: 3535
		// Start offset: 0x801527D4
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
	// End offset: 0x80152C84
	// End Line: 3627

	/* begin block 2 */
		// Start line: 8047
	/* end block 2 */
	// End Line: 8048

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
	lVar6 = ENG_random__Fl(100);
	bVar3 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar3 = __x < 2;
	}
	if (((bVar3) || (monster[i]._msquelch != -1)) ||
		 (dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dTransVal !=
			dung_map[x2 * 0x70 + y2].dTransVal)) {
LAB_80152a64:
		monster[i]._mgoal = '\x01';
	}
	else {
		bVar3 = false;
		if (monster[i]._mgoal == '\x04') {
LAB_801529e8:
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
			if (bVar3) goto LAB_80152a64;
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
					lVar7 = ENG_random__Fl(2);
					monster[i]._mgoalvar2 = lVar7;
				}
				goto LAB_801529e8;
			}
		}
	}
	bVar3 = false;
	if (monster[i]._mgoal != '\x01') goto LAB_80152c60;
	__x = abs(__x_00);
	if (((((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
			 (lVar6 < (int)((uint)monster[i]._mint * 5 + 10))) ||
			((lVar6 < (int)((uint)monster[i]._mint * 5 + 5) || (monster[i]._mgoalvar3 == 4)))) &&
		 (uVar5 = LineClear__Fiiii((int)monster[i]._mx,(int)monster[i]._my,x2,y2), uVar5 != '\0')) {
		bVar3 = true;
	}
	bVar4 = false;
	if (bVar3) {
LAB_80152bc0:
		M_StartRSpAttack__Fiii(i,mistype,dam);
	}
	else {
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar4 = __x_00 < 2;
		}
		if (bVar4) {
			lVar6 = ENG_random__Fl(100);
			if (lVar6 < (int)((uint)monster[i]._mint * 10 + 0x28)) {
				monster[i]._mdir = (char)mdir;
				lVar6 = ENG_random__Fl(2);
				if (lVar6 == 0) goto LAB_80152bc0;
				M_StartAttack__Fi(i);
			}
		}
		else {
			lVar6 = ENG_random__Fl(100);
			__x_00 = (uint)monster[i]._mint * 10;
			if ((lVar6 < __x_00 + 0x32) ||
				 (((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
					 (monster[i]._mVar2 == 0)) && (lVar6 < __x_00 + 0x50)))) {
				M_CallWalk__Fii(i,mdir);
			}
		}
	}
	monster[i]._mgoalvar3 = 1;
LAB_80152c60:
	if (monster[i]._mmode == '\0') {
		lVar6 = ENG_random__Fl(10);
		M_StartDelay__Fii(i,lVar6 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Mega__Fi(int i /*$a0*/)
 // line 3631, offset 0x80152cb8
	/* begin block 1 */
		// Start line: 3632
		// Start offset: 0x80152CB8
	/* end block 1 */
	// End offset: 0x80152CCC
	// End Line: 3633

	/* begin block 2 */
		// Start line: 8266
	/* end block 2 */
	// End Line: 8267

void MAI_Mega__Fi(int i)

{
	MAI_RR2__Fiii(i,0x31,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SkelKing__Fi(int i /*$s4*/)
 // line 3639, offset 0x80152cdc
	/* begin block 1 */
		// Start line: 3640
		// Start offset: 0x80152CDC
		// Variables:
	// 		int fx; // $s3
	// 		int fy; // stack offset -56
	// 		int mx; // $s6
	// 		int my; // $s7
	// 		int md; // $s5
	// 		int v; // $fp
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	// 		int nx; // $s2
	// 		int ny; // $s0
	// 		int _mx; // $s2
	// 		int _my; // stack offset -48

		/* begin block 1.1 */
			// Start line: 3640
			// Start offset: 0x80152CDC

			/* begin block 1.1.1 */
				// Start line: 3653
				// Start offset: 0x80152D54

				/* begin block 1.1.1.1 */
					// Start line: 3697
					// Start offset: 0x80152FAC

					/* begin block 1.1.1.1.1 */
						// Start line: 3698
						// Start offset: 0x80152FBC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3700
							// Start offset: 0x80152FBC

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3705
								// Start offset: 0x80153048
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x801530D8
							// End Line: 3717
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x801531D0
						// End Line: 3733
					/* end block 1.1.1.1.1 */
					// End offset: 0x801531D0
					// End Line: 3733
				/* end block 1.1.1.1 */
				// End offset: 0x801531D0
				// End Line: 3733
			/* end block 1.1.1 */
			// End offset: 0x801531E4
			// End Line: 3738
		/* end block 1.1 */
		// End offset: 0x801531E4
		// End Line: 3738
	/* end block 1 */
	// End offset: 0x801531E4
	// End Line: 3738

	/* begin block 2 */
		// Start line: 8282
	/* end block 2 */
	// End Line: 8283

void MAI_SkelKing__Fi(int i)

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
	int y1;
	uint y2;
	int x1;
	uint x2;
	int __x_00;
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
	__x_00 = x1 - x2;
	__x_01 = y1 - y2;
	if (monster[i]._msquelch != -1) {
		MonstCheckDoors__Fi(i);
	}
	lVar4 = ENG_random__Fl(100);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[i]._msquelch == -1)) &&
		 (dung_map[x1 * 0x70 + y1].dTransVal == dung_map[x2 * 0x70 + y2].dTransVal)) {
		bVar1 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((2 < __x) || (__x = abs(__x_01), 2 < __x)) && (lVar5 = ENG_random__Fl(4), lVar5 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_80152fac;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar5 = ENG_random__Fl(2);
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
		if ((!bVar1) && (dung_map[x1 * 0x70 + y1].dTransVal == dung_map[x2 * 0x70 + y2].dTransVal)) {
			uVar3 = M_RoundWalk__FiiRi(i,mdir,&monster[i]._mgoalvar2);
			if (uVar3 == '\0') {
				lVar5 = ENG_random__Fl(10);
				M_StartDelay__Fii(i,lVar5 + 10);
			}
			goto LAB_80152fac;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_80152fac:
	if (monster[i]._mgoal == '\x01') {
		bVar1 = false;
		if (((gbMaxPlayers == '\x01') &&
				((((__x = abs(__x_00), 2 < __x || (__x = abs(__x_01), 2 < __x)) &&
					(lVar4 < (int)((uint)monster[i]._mint * 4 + 0x23))) || (lVar4 < 6)))) &&
			 (uVar3 = LineClear__Fiiii(x1,y1,x2,y2), uVar3 != '\0')) {
			bVar1 = true;
		}
		bVar2 = false;
		if (bVar1) {
			x1 = x1 + (int)offset_x[mdir];
			y1 = y1 + (int)offset_y[mdir];
			uVar3 = PosOkMonst__Fiii(i,x1,y1);
			if ((uVar3 != '\0') && (nummonsters < 0xbe)) {
				uVar3 = GetdDead__Fii(x1,y1);
				bVar2 = uVar3 != '\0';
			}
			if (bVar2) {
				__x_00 = M_SpawnSkel__Fiii(x1,y1,mdir);
				if (__x_00 != -1) {
					SetdDead__FiiUc(x1,y1,'\0');
				}
				M_StartSpStand__Fii(i,mdir);
			}
		}
		else {
			bVar1 = false;
			y1 = abs(__x_00);
			if (y1 < 2) {
				y1 = abs(__x_01);
				bVar1 = y1 < 2;
			}
			if (bVar1) {
				if (lVar4 < (int)((uint)monster[i]._mint + 0x14)) {
					monster[i]._mdir = (char)mdir;
					M_StartAttack__Fi(i);
				}
			}
			else {
				lVar4 = ENG_random__Fl(100);
				if ((lVar4 < (int)((uint)monster[i]._mint + 0x19)) ||
					 ((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
						((monster[i]._mVar2 == 0 && (lVar4 < (int)((uint)monster[i]._mint + 0x4b))))))) {
					M_CallWalk__Fii(i,mdir);
				}
				else {
					lVar4 = ENG_random__Fl(10);
					M_StartDelay__Fii(i,lVar4 + 10);
				}
			}
		}
	}
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Rhino__Fi(int i /*$s2*/)
 // line 3746, offset 0x80153218
	/* begin block 1 */
		// Start line: 3747
		// Start offset: 0x80153218
		// Variables:
	// 		int fx; // $s6
	// 		int fy; // stack offset -56
	// 		int mx; // $s4
	// 		int my; // $s5
	// 		int md; // stack offset -48
	// 		int v; // $fp
	// 		int dist; // $a0
	// 		struct MonsterStruct *Monst; // $s1
	// 		int _mx; // $s3
	// 		int _my; // $s7

		/* begin block 1.1 */
			// Start line: 3747
			// Start offset: 0x80153218

			/* begin block 1.1.1 */
				// Start line: 3759
				// Start offset: 0x8015328C

				/* begin block 1.1.1.1 */
					// Start line: 3799
					// Start offset: 0x80153454

					/* begin block 1.1.1.1.1 */
						// Start line: 3800
						// Start offset: 0x80153464

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3802
							// Start offset: 0x80153464

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3804
								// Start offset: 0x801534E0
								// Variables:
							// 		int mi; // $s0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80153544
							// End Line: 3809
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8015368C
						// End Line: 3828
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015368C
					// End Line: 3828
				/* end block 1.1.1.1 */
				// End offset: 0x8015368C
				// End Line: 3828
			/* end block 1.1.1 */
			// End offset: 0x801536A0
			// End Line: 3833
		/* end block 1.1 */
		// End offset: 0x801536A0
		// End Line: 3833
	/* end block 1 */
	// End offset: 0x801536A0
	// End Line: 3833

	/* begin block 2 */
		// Start line: 8530
	/* end block 2 */
	// End Line: 8531

void MAI_Rhino__Fi(int i)

{
	char cVar1;
	bool bVar2;
	uchar uVar3;
	int md;
	long lVar4;
	int __x;
	long lVar5;
	int iVar6;
	int iVar7;
	uint y2;
	int x1;
	int __x_00;
	int __x_01;
	uint x2;
	int y1;
	char local_30;
	
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
	lVar4 = ENG_random__Fl(100);
	bVar2 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar2 = __x < 2;
	}
	if (!bVar2) {
		bVar2 = false;
		if (monster[i]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((4 < __x) || (__x = abs(__x_01), 4 < __x)) && (lVar5 = ENG_random__Fl(4), lVar5 != 0)) {
				bVar2 = true;
			}
			if (!bVar2) goto LAB_80153454;
			if (monster[i]._mgoal != '\x04') {
				monster[i]._mgoalvar1 = 0;
				lVar5 = ENG_random__Fl(2);
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
		if ((iVar6 < __x << 1) &&
			 (dung_map[x1 * 0x70 + y1].dTransVal == dung_map[x2 * 0x70 + y2].dTransVal)) {
			uVar3 = M_RoundWalk__FiiRi(i,md,&monster[i]._mgoalvar2);
			if (uVar3 == '\0') {
				lVar5 = ENG_random__Fl(10);
				M_StartDelay__Fii(i,lVar5 + 10);
			}
			goto LAB_80153454;
		}
	}
	monster[i]._mgoal = '\x01';
LAB_80153454:
	bVar2 = false;
	if (monster[i]._mgoal == '\x01') {
		__x = abs(__x_00);
		if (((4 < __x) || (__x = abs(__x_01), 4 < __x)) &&
			 ((lVar4 < (int)((uint)monster[i]._mint * 2 + 0x2b) &&
				(uVar3 = LineClearF1__FPFiii_Uciiiii(0x5c,i,x1,y1,x2,y2), uVar3 != '\0')))) {
			bVar2 = true;
		}
		if (bVar2) {
			md = AddMissile__Fiiiiiiciii(x1,y1,x2,y2,md,0x14,(int)(char)monster[i]._menemy,i,0,0);
			if (md != -1) {
				if ((monster[i].MData)->snd_special != '\0') {
					PlayEffect__Fii(i,3);
				}
				dung_map[x1 * 0x70 + y1].dMonster = ~(ushort)i;
				monster[i]._mmode = '\x0e';
				cVar1 = missile[md]._mimfnum;
				monster[i].Action = '\x05';
				monster[i]._mdir = cVar1;
			}
		}
		else {
			bVar2 = false;
			x1 = abs(__x_00);
			if (x1 < 2) {
				x1 = abs(__x_01);
				bVar2 = x1 < 2;
			}
			if (bVar2) {
				if (lVar4 < (int)((uint)monster[i]._mint * 2 + 0x1c)) {
					local_30 = (char)md;
					monster[i]._mdir = local_30;
					M_StartAttack__Fi(i);
				}
			}
			else {
				lVar4 = ENG_random__Fl(100);
				x1 = (uint)monster[i]._mint * 2;
				if ((lVar4 < x1 + 0x21) ||
					 (((((uint)(ushort)monster[i]._mVar1 - 1 < 2 || (monster[i]._mVar1 == 3)) &&
						 (monster[i]._mVar2 == 0)) && (lVar4 < x1 + 0x53)))) {
					M_CallWalk__Fii(i,md);
				}
				else {
					lVar4 = ENG_random__Fl(10);
					M_StartDelay__Fii(i,lVar4 + 10);
				}
			}
		}
	}
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Counselor__Fi(int i /*$s2*/)
 // line 3841, offset 0x801536d4
	/* begin block 1 */
		// Start line: 3842
		// Start offset: 0x801536D4
		// Variables:
	// 		int fx; // $fp
	// 		int fy; // stack offset -72
	// 		int mx; // $s3
	// 		int my; // $s5
	// 		int md; // $s4
	// 		int v; // stack offset -64
	// 		int dist; // $s7
	// 		struct MonsterStruct *Monst; // $s1
	/* end block 1 */
	// End offset: 0x80153B3C
	// End Line: 3936

	/* begin block 2 */
		// Start line: 8750
	/* end block 2 */
	// End Line: 8751

void MAI_Counselor__Fi(int i)

{
	byte bVar1;
	bool bVar2;
	uchar uVar3;
	int md;
	long lVar4;
	int iVar5;
	int iVar6;
	int __x;
	uint y2;
	int y1;
	int __x_00;
	int __x_01;
	int x1;
	uint x2;
	
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
	lVar4 = ENG_random__Fl(100);
	bVar1 = monster[i]._mgoal;
	if (bVar1 == 2) {
		y1 = monster[i]._mgoalvar1;
		monster[i]._mgoalvar1 = y1 + 1;
		if (y1 < 4) {
			M_CallWalk__Fii(i,md + 4U & 7);
			goto LAB_80153b18;
		}
	}
	else {
		if (bVar1 != 4) {
			bVar2 = false;
			if (bVar1 != 1) goto LAB_80153b18;
			__x_00 = abs(__x_00);
			if (__x_00 < 2) {
				__x_00 = abs(__x_01);
				bVar2 = __x_00 < 2;
			}
			if (bVar2) {
				__x_00 = monster[i]._mmaxhp;
				__x_01 = monster[i]._mhitpoints;
				monster[i]._mdir = (char)md;
				if (__x_00 >> 1 <= __x_01) {
					if ((monster[i]._mVar1 == 0xd) ||
						 (lVar4 = ENG_random__Fl(100), lVar4 < (int)((uint)monster[i]._mint * 2 + 0x14))) {
						M_StartRAttack__Fiii(i,-1,0);
						AddMissile__Fiiiiiiciii(x1,y1,0,0,(int)monster[i]._mdir,0xb,(uint)bVar1,i,4,0);
						AddMissile__Fiiiiiiciii(x1,y1,0,0,(int)monster[i]._mdir,0xc,(uint)bVar1,i,4,0);
						goto LAB_80153b18;
					}
LAB_80153af8:
					lVar4 = ENG_random__Fl(10);
					M_StartDelay__Fii(i,lVar4 - ((uint)monster[i]._mint * 2 + -10));
					goto LAB_80153b18;
				}
				uVar3 = '\x02';
			}
			else {
				if ((lVar4 < (int)((uint)monster[i]._mint * 5 + 0x32)) &&
					 (uVar3 = LineClear__Fiiii(x1,y1,x2,y2), uVar3 != '\0')) {
					lVar4 = ENG_random__Fl(((uint)monster[i].mMaxDamage - (uint)monster[i].mMinDamage) + 1);
					M_StartRAttack__Fiii
										(i,(uint)(byte)(&DAT_8011c2c0)[(uint)monster[i]._mint],
										 lVar4 + (uint)monster[i].mMinDamage);
					goto LAB_80153b18;
				}
				lVar4 = ENG_random__Fl(100);
				if (0x1d < lVar4) goto LAB_80153af8;
				uVar3 = '\x04';
			}
			monster[i]._mgoal = uVar3;
			monster[i]._mgoalvar1 = 0;
			M_StartFadeout__FiiUc(i,md,'\0');
			goto LAB_80153b18;
		}
		iVar5 = abs(__x_00);
		iVar6 = abs(__x_01);
		__x = __x_01;
		if (iVar6 < iVar5) {
			__x = __x_00;
		}
		bVar2 = false;
		__x = abs(__x);
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar2 = __x_00 < 2;
		}
		if (((!bVar2) && (monster[i]._msquelch == -1)) &&
			 (dung_map[x1 * 0x70 + y1].dTransVal == dung_map[x2 * 0x70 + y2].dTransVal)) {
			y1 = monster[i]._mgoalvar1;
			monster[i]._mgoalvar1 = y1 + 1;
			bVar2 = false;
			if (__x << 1 <= y1) {
				uVar3 = DirOK__Fii(i,md);
				bVar2 = uVar3 != '\0';
			}
			if (!bVar2) {
				M_RoundWalk__FiiRi(i,md,&monster[i]._mgoalvar2);
				goto LAB_80153b18;
			}
		}
	}
	monster[i]._mgoal = '\x01';
	M_StartFadein__FiiUc(i,md,'\x01');
LAB_80153b18:
	if (monster[i]._mmode == '\0') {
		lVar4 = ENG_random__Fl(10);
		M_StartDelay__Fii(i,lVar4 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Garbud__Fi(int i /*$s1*/)
 // line 3943, offset 0x80153b70
	/* begin block 1 */
		// Start line: 3944
		// Start offset: 0x80153B70
		// Variables:
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s2
	// 		int _my; // $s3
	/* end block 1 */
	// End offset: 0x80153D5C
	// End Line: 3983

	/* begin block 2 */
		// Start line: 8968
	/* end block 2 */
	// End Line: 8969

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
		if ((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) == 0) {
			if (monster[i]._mgoal == '\a') {
				pMVar5->mtalkmsg = pMVar5->mtalkmsg + 1;
				monster[i]._mgoal = '\x06';
				quests[2]._qvar1 = '\x05';
				quests[2]._qvar2 = (uchar)pMVar5->mtalkmsg;
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x02');
				}
			}
			goto LAB_80153c68;
		}
LAB_80153c94:
		if ((pMVar5->mtalkmsg == 0x93) && (uVar3 = effect_is_playing__Fi(0x34d), uVar3 == '\0')) {
			uVar3 = monster[i]._mgoal;
			if (uVar3 != '\a') goto LAB_80153d08;
			monster[i]._mgoal = '\x01';
			monster[i]._msquelch = -1;
			uVar3 = deltaload;
			pMVar5->mtalkmsg = 0;
			quests[2]._qvar1 = '\x04';
			if (uVar3 == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x02');
			}
		}
	}
	else {
LAB_80153c68:
		if ((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) goto LAB_80153c94;
	}
	uVar3 = monster[i]._mgoal;
LAB_80153d08:
	if ((uVar3 == '\x01') || (uVar3 == '\x04')) {
		MAI_Round__FiUc(i,'\x01');
	}
	else {
		monster[i]._mdir = (char)iVar4;
	}
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Zhar__Fi(int i /*$s3*/)
 // line 3990, offset 0x80153d80
	/* begin block 1 */
		// Start line: 3991
		// Start offset: 0x80153D80
		// Variables:
	// 		int mx; // $s4
	// 		int my; // $s2
	// 		int md; // $s5
	// 		struct MonsterStruct *Monst; // $s1
	// 		int _mx; // $s0
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x80153F54
	// End Line: 4024

	/* begin block 2 */
		// Start line: 9084
	/* end block 2 */
	// End Line: 9085

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
	iVar3 = __x_00 * 8;
	if (pMVar5->mtalkmsg == 0x94) {
		if ((dung_map[__x * 0x70 + __x_00].dFlags & 4U) == 0) {
			iVar3 = __x_00 << 3;
			if (monster[i]._mgoal == '\a') {
				pMVar5->mtalkmsg = 0x95;
				monster[i]._mgoal = '\x06';
				iVar3 = __x_00 << 3;
			}
			goto LAB_80153e44;
		}
	}
	else {
LAB_80153e44:
		if (((&dung_map[__x * 0x70].dFlags)[iVar3] & 4U) == 0) goto LAB_80153ef4;
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
LAB_80153ef4:
	if (((uint)monster[i]._mgoal - 1 < 2) || (monster[i]._mgoal == 4)) {
		MAI_Counselor__Fi(i);
	}
	monster[i]._mdir = (char)iVar2;
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_SnotSpil__Fi(int i /*$s1*/)
 // line 4031, offset 0x80153f7c
	/* begin block 1 */
		// Start line: 4032
		// Start offset: 0x80153F7C
		// Variables:
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s2
	// 		int _my; // $s3

		/* begin block 1.1 */
			// Start line: 4032
			// Start offset: 0x80153F7C

			/* begin block 1.1.1 */
				// Start line: 4044
				// Start offset: 0x80153FD0

				/* begin block 1.1.1.1 */
					// Start line: 4054
					// Start offset: 0x80154068

					/* begin block 1.1.1.1.1 */
						// Start line: 4054
						// Start offset: 0x80154098

						/* begin block 1.1.1.1.1.1 */
							// Start line: 4058
							// Start offset: 0x80154098

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 4058
								// Start offset: 0x801540CC
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80154140
							// End Line: 4066
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80154140
						// End Line: 4066
					/* end block 1.1.1.1.1 */
					// End offset: 0x80154174
					// End Line: 4071
				/* end block 1.1.1.1 */
				// End offset: 0x80154174
				// End Line: 4071
			/* end block 1.1.1 */
			// End offset: 0x801541A8
			// End Line: 4077
		/* end block 1.1 */
		// End offset: 0x801541A8
		// End Line: 4077
	/* end block 1 */
	// End offset: 0x801541A8
	// End Line: 4077

	/* begin block 2 */
		// Start line: 9183
	/* end block 2 */
	// End Line: 9184

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
			if (((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) == 0) &&
				 (monster[i]._mgoal == '\a')) {
				pMVar6->mtalkmsg = 0x15;
				monster[i]._mgoal = '\x06';
			}
			iVar5 = pMVar6->mtalkmsg;
		}
		if ((iVar5 == 0x15) && (quests[7]._qvar1 == '\x03')) {
			pMVar6->mtalkmsg = 0;
			monster[i]._mgoal = '\x01';
		}
		if ((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) {
			if (((pMVar6->mtalkmsg == 0x16) && (uVar3 = effect_is_playing__Fi(0x357), uVar3 == '\0')) &&
				 (monster[i]._mgoal == '\a')) {
				ObjChangeMap__Fiiii(setpc_x,setpc_y,setpc_x + setpc_w + 1,setpc_y + setpc_h + 1);
				quests[7]._qvar1 = '\x03';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\a');
				}
				RedoPlayerVision__Fv();
				monster[i]._mgoal = '\x01';
				monster[i]._msquelch = -1;
				pMVar6->mtalkmsg = 0;
			}
			if ((quests[7]._qvar1 == '\x03') &&
				 ((monster[i]._mgoal == '\x01' || (monster[i]._mgoal == '\x05')))) {
				MAI_Fallen__Fi(i);
			}
		}
		monster[i]._mdir = (char)iVar4;
		if (monster[i]._mmode == '\0') {
			monster[i].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Lazurus__Fi(int i /*$s3*/)
 // line 4084, offset 0x801541cc
	/* begin block 1 */
		// Start line: 4085
		// Start offset: 0x801541CC
		// Variables:
	// 		int md; // $s1
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s2
	// 		int _my; // $s1
	/* end block 1 */
	// End offset: 0x80154450
	// End Line: 4137

	/* begin block 2 */
		// Start line: 9310
	/* end block 2 */
	// End Line: 9311

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
	if ((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) {
		if (gbMaxPlayers == '\x01') {
			if (pMVar5->mtalkmsg == 0x23) {
				if (((monster[i]._mgoal == '\x06') && (plr[myplr]._px == 0x23)) && (plr[myplr]._py == 0x2e))
				{
					monster[i]._mmode = '\x11';
					quests[15]._qvar1 = '\x05';
					if (deltaload == '\0') {
						NetSendCmdQuest__FUcUc('\x01','\x0f');
					}
				}
				if (((pMVar5->mtalkmsg == 0x23) && (uVar3 = effect_is_playing__Fi(0x352), uVar3 == '\0')) &&
					 (monster[i]._mgoal == '\a')) {
					ObjChangeMapResync__Fiiii(1,0x12,0x14,0x18);
					RedoPlayerVision__Fv();
					quests[15]._qvar1 = '\x06';
					if (deltaload == '\0') {
						NetSendCmdQuest__FUcUc('\x01','\x0f');
					}
					monster[i]._mgoal = '\x01';
					monster[i]._msquelch = -1;
					pMVar5->mtalkmsg = 0;
				}
			}
			if (gbMaxPlayers == '\x01') goto LAB_801543e8;
		}
		if (((pMVar5->mtalkmsg == 0x23) && (monster[i]._mgoal == '\x06')) && (quests[15]._qvar1 < 4)) {
			monster[i]._mmode = '\x11';
		}
	}
LAB_801543e8:
	if (((uint)monster[i]._mgoal - 1 < 2) || (monster[i]._mgoal == 4)) {
		MAI_Counselor__Fi(i);
	}
	monster[i]._mdir = (char)iVar4;
	if ((monster[i]._mmode == '\0') || (monster[i]._mmode == '\x11')) {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Lazhelp__Fi(int i /*$s1*/)
 // line 4144, offset 0x80154470
	/* begin block 1 */
		// Start line: 4145
		// Start offset: 0x80154470
		// Variables:
	// 		int md; // $a0
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s3
	// 		int _my; // $s2
	/* end block 1 */
	// End offset: 0x80154588
	// End Line: 4179

	/* begin block 2 */
		// Start line: 9450
	/* end block 2 */
	// End Line: 9451

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
		if ((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) {
			uVar3 = '\x01';
			if ((gbMaxPlayers == '\x01') && (uVar3 = '\x06', 5 < quests[15]._qvar1)) {
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
		else {
			monster[i]._mdir = (char)iVar4;
		}
		if (monster[i]._mmode == '\0') {
			monster[i].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Lachdanan__Fi(int i /*$s1*/)
 // line 4185, offset 0x801545a8
	/* begin block 1 */
		// Start line: 4186
		// Start offset: 0x801545A8
		// Variables:
	// 		int md; // $s4
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s2
	// 		int _my; // $s3
	/* end block 1 */
	// End offset: 0x80154734
	// End Line: 4220

	/* begin block 2 */
		// Start line: 9550
	/* end block 2 */
	// End Line: 9551

void MAI_Lachdanan__Fi(int i)

{
	char cVar1;
	uchar uVar2;
	uchar uVar3;
	int iVar4;
	int iVar5;
	MonsterStruct *pMVar6;
	int iVar7;
	
	pMVar6 = monster + i;
	cVar1 = monster[i]._mx;
	iVar7 = (int)monster[i]._my;
	if (monster[i]._mmode != '\0') {
		return;
	}
	iVar4 = M_GetDir__Fi(i);
	iVar5 = iVar7 * 8;
	if (pMVar6->mtalkmsg == 0x51) {
		if ((dung_map[(int)cVar1 * 0x70 + iVar7].dFlags & 4U) == 0) {
			iVar5 = iVar7 << 3;
			if (monster[i]._mgoal == '\a') {
				pMVar6->mtalkmsg = 0x52;
				monster[i]._mgoal = '\x06';
				iVar5 = iVar7 << 3;
			}
			goto LAB_80154668;
		}
	}
	else {
LAB_80154668:
		if (((&dung_map[(int)cVar1 * 0x70].dFlags)[iVar5] & 4U) == 0) goto LAB_80154704;
	}
	if (((pMVar6->mtalkmsg == 0x53) &&
			(uVar3 = effect_is_playing__Fi(0x351), uVar2 = deltaload, uVar3 == '\0')) &&
		 (monster[i]._mgoal == '\a')) {
		pMVar6->mtalkmsg = 0;
		quests[4]._qactive = '\x03';
		if (uVar2 == '\0') {
			NetSendCmdQuest__FUcUc('\x01','\x04');
		}
		M_StartKill__Fii(i,-1);
	}
LAB_80154704:
	monster[i]._mdir = (char)iVar4;
	if (monster[i]._mmode == '\0') {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Warlord__Fi(int i /*$s1*/)
 // line 4227, offset 0x80154758
	/* begin block 1 */
		// Start line: 4228
		// Start offset: 0x80154758
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *Monst; // $s0
	// 		int _mx; // $s3
	// 		int _my; // $s2

		/* begin block 1.1 */
			// Start line: 4228
			// Start offset: 0x80154758

			/* begin block 1.1.1 */
				// Start line: 4239
				// Start offset: 0x801547A8

				/* begin block 1.1.1.1 */
					// Start line: 4240
					// Start offset: 0x801547A8

					/* begin block 1.1.1.1.1 */
						// Start line: 4241
						// Start offset: 0x801547E0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8015484C
					// End Line: 4253
				/* end block 1.1.1.1 */
				// End offset: 0x8015484C
				// End Line: 4253
			/* end block 1.1.1 */
			// End offset: 0x801548A0
			// End Line: 4262
		/* end block 1.1 */
		// End offset: 0x801548A0
		// End Line: 4262
	/* end block 1 */
	// End offset: 0x801548A0
	// End Line: 4262

	/* begin block 2 */
		// Start line: 9654
	/* end block 2 */
	// End Line: 9655

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
	if (((dung_map[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) && (pMVar5->mtalkmsg == 0x6e)) {
		if (monster[i]._mgoal == '\x06') {
			monster[i]._mmode = '\x11';
		}
		if ((pMVar5->mtalkmsg == 0x6e) && (uVar3 = effect_is_playing__Fi(0x358), uVar3 == '\0')) {
			uVar3 = monster[i]._mgoal;
			if (uVar3 != '\a') goto LAB_80154854;
			monster[i]._mgoal = '\x01';
			monster[i]._msquelch = -1;
			pMVar5->mtalkmsg = 0;
		}
	}
	uVar3 = monster[i]._mgoal;
LAB_80154854:
	if (uVar3 == '\x01') {
		MAI_SkelSd__Fi(i);
	}
	monster[i]._mdir = (char)iVar4;
	if ((monster[i]._mmode == '\0') || (monster[i]._mmode == '\x11')) {
		monster[i].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteMonsterList__Fv()
 // line 4269, offset 0x801548c0
	/* begin block 1 */
		// Start line: 4270
		// Start offset: 0x801548C0
		// Variables:
	// 		int i; // $a0
	// 		int mi; // $v0
	/* end block 1 */
	// End offset: 0x801549D0
	// End Line: 4293

	/* begin block 2 */
		// Start line: 9756
	/* end block 2 */
	// End Line: 9757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeleteMonsterList__Fv(void)

{
	int *piVar1;
	int i;
	int iVar2;
	char *pcVar3;
	MonsterStruct *pMVar4;
	
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
		pcVar3 = pcVar3 + 0x68;
		iVar2 = iVar2 + 1;
		i = i + 0x68;
	} while (iVar2 < 4);
	i = 4;
	if (4 < nummonsters) {
		pMVar4 = (MonsterStruct *)&monster[0xbe]._mgoalvar2;
		do {
			piVar1 = &pMVar4->mtalkmsg;
			pMVar4 = (MonsterStruct *)((int)&pMVar4->mtalkmsg + 2);
			if (monster[(int)*(short *)piVar1]._mDelFlag == '\0') {
				i = i + 1;
			}
			else {
				DeleteMonster__Fi(i);
				i = 0;
				pMVar4 = monster + 0xbe;
			}
		} while (i < nummonsters);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessMonsters__Fv()
 // line 4300, offset 0x801549e4
	/* begin block 1 */
		// Start line: 4301
		// Start offset: 0x801549E4
		// Variables:
	// 		int i; // $s6
	// 		int mi; // $s2
	// 		int raflag; // $s3
	// 		int mx; // $s4
	// 		int my; // $s5
	// 		int _menemy; // $s0
	/* end block 1 */
	// End offset: 0x80154F7C
	// End Line: 4545

	/* begin block 2 */
		// Start line: 9824
	/* end block 2 */
	// End Line: 9825

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessMonsters__Fv(void)

{
	uchar uVar1;
	ushort uVar2;
	char cVar3;
	int i;
	char cVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	uint uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	DeleteMonsterList__Fv();
	DAT_8011c2c4 = DAT_8011c2c4 + 1;
	iVar13 = 0;
	uVar6 = DAT_8011c2c4 % 200;
	if (0 < nummonsters) {
		i = 0;
		do {
			i = (int)*(short *)((int)&monster[0xbe].mtalkmsg + i);
			if ((uVar6 == 0) && (3 < i)) {
				monster[i]._mFlags = monster[i]._mFlags & 0xffef;
			}
			uVar9 = (uint)monster[i]._menemy;
			iVar11 = (int)monster[i]._mx;
			iVar12 = (int)monster[i]._my;
			iVar10 = 0;
			if ((monster[i]._mFlags & 8) == 0) {
				iVar8 = monster[i]._mhitpoints;
				if ((iVar8 < monster[i]._mmaxhp) && (0 < iVar8 >> 6)) {
					iVar7 = (uint)(byte)monster[i].mLevel << 0x18;
					iVar5 = iVar7 >> 0x18;
					if (1 < iVar5) {
						iVar5 = iVar7 >> 0x19;
					}
					monster[i]._mhitpoints = iVar8 + iVar5;
				}
			}
			if (((((dung_map[iVar11 * 0x70 + iVar12].dFlags & 3U) != 0) &&
					 ((dung_map[iVar11 * 0x70 + iVar12].dFlags & 4U) != 0)) && (monster[i]._msquelch == '\0'))
				 && ((monster[i].MType)->mtype == '3')) {
				PlaySFX__Fi(USFX_CLEAVER);
			}
			if ((monster[i]._mFlags & 0x10) == 0) {
				if (plr[uVar9].plractive == '\0') {
					uVar9 = uVar9 ^ 1;
					monster[i]._menemy = (uchar)uVar9;
				}
				monster[i]._menemyx = (uchar)plr[uVar9]._px;
				monster[i]._menemyy = (uchar)plr[uVar9]._py;
				if ((dung_map[iVar11 * 0x70 + iVar12].dFlags & 3U) == 0) {
					if ((monster[i]._msquelch != '\0') && (monster[i]._mAi != 'n')) {
						monster[i]._msquelch = monster[i]._msquelch + -1;
					}
				}
				else {
					monster[i]._msquelch = -1;
					monster[i]._lastx = (char)plr[uVar9]._px;
					monster[i]._lasty = (char)plr[uVar9]._py;
				}
			}
			else {
				uVar1 = monster[uVar9]._mfutx;
				monster[i]._lastx = uVar1;
				monster[i]._menemyx = uVar1;
				uVar1 = monster[uVar9]._mfuty;
				monster[i]._lasty = uVar1;
				monster[i]._menemyy = uVar1;
			}
			if ((((dung_map[iVar11 * 0x70 + iVar12].dFlags & 3U) != 0) || (monster[i]._msquelch != '\0'))
				 || (iVar13 < 4)) {
				while( true ) {
					(*(code *)AiProc[(uint)monster[i]._mAi])(i);
					switch(monster[i]._mmode) {
					case '\0':
						iVar10 = M_DoStand__Fi(i);
						break;
					case '\x01':
						iVar10 = M_DoWalk__Fi(i);
						break;
					case '\x02':
						iVar10 = M_DoWalk2__Fi(i);
						break;
					case '\x03':
						iVar10 = M_DoWalk3__Fi(i);
						break;
					case '\x04':
						iVar10 = M_DoAttack__Fi(i);
						break;
					case '\x05':
						iVar10 = M_DoGotHit__Fi(i);
						break;
					case '\x06':
						iVar10 = M_DoDeath__Fi(i);
						break;
					case '\a':
						iVar10 = M_DoSAttack__Fi(i);
						break;
					case '\b':
						iVar10 = M_DoFadein__Fi(i);
						break;
					case '\t':
						iVar10 = M_DoFadeout__Fi(i);
						break;
					case '\n':
						iVar10 = M_DoRAttack__Fi(i);
						break;
					case '\v':
						iVar10 = M_DoSpStand__Fi(i);
						break;
					case '\f':
						iVar10 = M_DoRSpAttack__Fi(i);
						break;
					case '\r':
						iVar10 = M_DoDelay__Fi(i);
						break;
					case '\x0e':
						iVar10 = 0;
						break;
					case '\x0f':
						iVar10 = M_DoStone__Fi(i);
						break;
					case '\x10':
						iVar10 = M_DoHeal__Fi(i);
						break;
					case '\x11':
						iVar10 = M_DoTalk__Fi(i);
					}
					if (iVar10 == 0) break;
					GroupUnity__Fi(i);
				}
				if (monster[i]._mmode != '\x0f') {
					uVar2 = monster[i]._mFlags;
					cVar4 = monster[i]._mAnimCnt + '\x01';
					monster[i]._mAnimCnt = cVar4;
					if (((uVar2 & 4) == 0) && (monster[i]._mAnimDelay <= cVar4)) {
						uVar2 = monster[i]._mFlags;
						monster[i]._mAnimCnt = '\0';
						if ((uVar2 & 2) == 0) {
							cVar4 = monster[i]._mAnimLen;
							cVar3 = monster[i]._mAnimFrame + '\x01';
							monster[i]._mAnimFrame = cVar3;
							if (cVar4 < cVar3) {
								monster[i]._mAnimFrame = '\x01';
							}
						}
						else {
							cVar4 = monster[i]._mAnimFrame;
							monster[i]._mAnimFrame = cVar4 + -1;
							if (cVar4 == '\x01') {
								monster[i]._mAnimFrame = monster[i]._mAnimLen;
							}
						}
					}
				}
			}
			iVar13 = iVar13 + 1;
			i = iVar13 * 2;
		} while (iVar13 < nummonsters);
	}
	DeleteMonsterList__Fv();
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DirOK__Fii(int i /*$a2*/, int mdir /*$s2*/)
 // line 4553, offset 0x80154fac
	/* begin block 1 */
		// Start line: 4554
		// Start offset: 0x80154FAC
		// Variables:
	// 		long fx; // $s0
	// 		long fy; // $s1
	/* end block 1 */
	// End offset: 0x8015513C
	// End Line: 4619

	/* begin block 2 */
		// Start line: 10356
	/* end block 2 */
	// End Line: 10357

uchar DirOK__Fii(int i,int mdir)

{
	uchar uVar1;
	byte bVar2;
	int y;
	uint x;
	uint y_00;
	
	y_00 = (int)monster[i]._my + (int)offset_y[mdir];
	x = (int)monster[i]._mx + (int)offset_x[mdir];
	if (((y_00 < 0x62) && (x < 0x62)) && (uVar1 = PosOkMonst__Fiii(i,x,y_00), uVar1 != '\0')) {
		if (mdir == 6) {
			uVar1 = SolidLoc__Fii(x,y_00 + 1);
			if (uVar1 != '\0') {
				return '\0';
			}
			bVar2 = dung_map[x * 0x70 + y_00 + 1].dFlags & 0x10;
		}
		else {
			if (mdir == 2) {
				uVar1 = SolidLoc__Fii(x + 1,y_00);
				if (uVar1 != '\0') {
					return '\0';
				}
				bVar2 = dung_map[(x + 1) * 0x70 + y_00].dFlags & 0x10;
			}
			else {
				if (mdir == 4) {
					uVar1 = SolidLoc__Fii(x + 1,y_00);
					if (uVar1 != '\0') {
						return '\0';
					}
					y = y_00 + 1;
				}
				else {
					if (mdir != 0) {
						return '\x01';
					}
					uVar1 = SolidLoc__Fii(x - 1,y_00);
					if (uVar1 != '\0') {
						return '\0';
					}
					y = y_00 - 1;
				}
				bVar2 = SolidLoc__Fii(x,y);
			}
		}
		if (bVar2 == 0) {
			return '\x01';
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkMissile__Fii(int x /*$s0*/, int y /*$s1*/)
 // line 4625, offset 0x80155158
	/* begin block 1 */
		// Start line: 4626
		// Start offset: 0x80155158
	/* end block 1 */
	// End offset: 0x801551B4
	// End Line: 4628

	/* begin block 2 */
		// Start line: 10506
	/* end block 2 */
	// End Line: 10507

uchar PosOkMissile__Fii(int x,int y)

{
	undefined *puVar1;
	bool bVar2;
	
	bVar2 = false;
	puVar1 = (undefined *)GetMISSILE__Fii(x,y);
	if (puVar1 != &DAT_00000001) {
		bVar2 = (dung_map[x * 0x70 + y].dFlags & 0x10U) == 0;
	}
	return (uchar)bVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckNoSolid__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 4634, offset 0x801551d0
	/* begin block 1 */
		// Start line: 4635
		// Start offset: 0x801551D0
	/* end block 1 */
	// End offset: 0x801551E0
	// End Line: 4637

	/* begin block 2 */
		// Start line: 10524
	/* end block 2 */
	// End Line: 10525

uchar CheckNoSolid__Fii(int x,int y)

{
	void *pvVar1;
	
	pvVar1 = GetSOLID__Fii(x,y);
	return (uchar)((byte)pvVar1 ^ 1);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ LineClearF__FPFii_Uciiii(TDRFuncPtr_LineClearF__FPFii_Uciiii0Clear Clear /*stack -64*/, int x1 /*$s4*/, int y1 /*$s3*/, int x2 /*$s7*/, int y2 /*stack 16*/)
 // line 4663, offset 0x801551f0
	/* begin block 1 */
		// Start line: 4664
		// Start offset: 0x801551F0
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
	// End offset: 0x80155444
	// End Line: 4783

	/* begin block 2 */
		// Start line: 10582
	/* end block 2 */
	// End Line: 10583

uchar LineClearF__FPFii_Uciiii(undefined Clear,int x1,int y1,int x2,int y2)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	undefined3 in_register_00000011;
	int iVar7;
	int __x;
	int __x_00;
	
	bVar1 = false;
	__x_00 = x2 - x1;
	__x = y2 - y1;
	iVar3 = abs(__x_00);
	iVar4 = abs(__x);
	if (iVar4 < iVar3) {
		iVar3 = y1;
		iVar4 = x1;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar3 = y2;
			iVar4 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar5 = __x * 2;
		if (__x < 1) {
			iVar7 = iVar5 + __x_00;
			__x = (__x + __x_00) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar5 - __x_00;
			__x = (__x - __x_00) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar4 != x2 || (iVar3 != y2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar5;
			if (!bVar1) {
				iVar3 = iVar3 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar4 = iVar4 + 1;
			if ((iVar4 != x1) || (bVar1 = false, iVar3 != y1)) {
				uVar6 = (*(code *)CONCAT31(in_register_00000011,Clear))(iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar3 = y1;
		iVar4 = x1;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar3 = y2;
			iVar4 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar5 = __x_00 * 2;
		if (__x_00 < 1) {
			iVar7 = iVar5 + __x;
			__x = (__x_00 + __x) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar5 - __x;
			__x = (__x_00 - __x) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar3 != y2 || (iVar4 != x2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar5;
			if (!bVar1) {
				iVar4 = iVar4 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar3 = iVar3 + 1;
			if ((iVar3 != y1) || (bVar1 = false, iVar4 != x1)) {
				uVar6 = (*(code *)CONCAT31(in_register_00000011,Clear))(iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	return (uchar)(iVar4 == x2 && iVar3 == y2);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ LineClear__Fiiii(int x1 /*$v0*/, int y1 /*$v1*/, int x2 /*$t0*/, int y2 /*$a3*/)
 // line 4790, offset 0x80155478
	/* begin block 1 */
		// Start line: 4791
		// Start offset: 0x80155478
	/* end block 1 */
	// End offset: 0x801554A8
	// End Line: 4792

	/* begin block 2 */
		// Start line: 10891
	/* end block 2 */
	// End Line: 10892

uchar LineClear__Fiiii(int x1,int y1,int x2,int y2)

{
	uchar uVar1;
	
	uVar1 = LineClearF__FPFii_Uciiii(0x58,x1,y1,x2,y2);
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ LineClearF1__FPFiii_Uciiiii(TDRFuncPtr_LineClearF1__FPFiii_Uciiiii0Clear Clear /*stack -72*/, int monst /*stack -64*/, int x1 /*$s4*/, int y1 /*$s3*/, int x2 /*stack 16*/, int y2 /*stack 20*/)
 // line 4802, offset 0x801554b8
	/* begin block 1 */
		// Start line: 4803
		// Start offset: 0x801554B8
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
	// End offset: 0x80155718
	// End Line: 4918

	/* begin block 2 */
		// Start line: 10916
	/* end block 2 */
	// End Line: 10917

uchar LineClearF1__FPFiii_Uciiiii(undefined Clear,int monst,int x1,int y1,int x2,int y2)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	undefined3 in_register_00000011;
	int iVar7;
	int __x;
	int __x_00;
	
	bVar1 = false;
	__x_00 = x2 - x1;
	__x = y2 - y1;
	iVar3 = abs(__x_00);
	iVar4 = abs(__x);
	if (iVar4 < iVar3) {
		iVar3 = y1;
		iVar4 = x1;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar3 = y2;
			iVar4 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar5 = __x * 2;
		if (__x < 1) {
			iVar7 = iVar5 + __x_00;
			__x = (__x + __x_00) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar5 - __x_00;
			__x = (__x - __x_00) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar4 != x2 || (iVar3 != y2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar5;
			if (!bVar1) {
				iVar3 = iVar3 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar4 = iVar4 + 1;
			if ((iVar4 != x1) || (bVar1 = false, iVar3 != y1)) {
				uVar6 = (*(code *)CONCAT31(in_register_00000011,Clear))(monst,iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar3 = y1;
		iVar4 = x1;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar3 = y2;
			iVar4 = x2;
			x2 = x1;
			y2 = y1;
		}
		iVar5 = __x_00 * 2;
		if (__x_00 < 1) {
			iVar7 = iVar5 + __x;
			__x = (__x_00 + __x) * 2;
			__x_00 = 0xffffffff;
		}
		else {
			iVar7 = iVar5 - __x;
			__x = (__x_00 - __x) * 2;
			__x_00 = 1;
		}
		while ((!bVar1 && ((iVar3 != y2 || (iVar4 != x2))))) {
			bVar1 = iVar7 < 1;
			if (__x_00 < 0) {
				bVar1 = !bVar1;
			}
			iVar2 = iVar5;
			if (!bVar1) {
				iVar4 = iVar4 + __x_00;
				iVar2 = __x;
			}
			iVar7 = iVar7 + iVar2;
			iVar3 = iVar3 + 1;
			if ((iVar3 != y1) || (bVar1 = false, iVar4 != x1)) {
				uVar6 = (*(code *)CONCAT31(in_register_00000011,Clear))(monst,iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	return (uchar)(iVar4 == x2 && iVar3 == y2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_FallenFear__Fii(int x /*$s6*/, int y /*$s7*/)
 // line 5014, offset 0x8015574c
	/* begin block 1 */
		// Start line: 5015
		// Start offset: 0x8015574C
		// Variables:
	// 		int i; // $s4
	// 		int mi; // $a0
	// 		int rundist; // $s2
	// 		int aitype; // $v1
	/* end block 1 */
	// End offset: 0x80155904
	// End Line: 5055

	/* begin block 2 */
		// Start line: 11367
	/* end block 2 */
	// End Line: 11368

void M_FallenFear__Fii(int x,int y)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = 0;
	if (0 < nummonsters) {
		iVar5 = 0;
		iVar7 = 0;
		do {
			iVar3 = (int)*(short *)((int)&monster[0xbe].mtalkmsg + iVar7);
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
				if ((bVar1) && (0 < monster[iVar3]._mhitpoints >> 6)) {
					monster[iVar3]._mgoal = '\x02';
					monster[iVar3]._mgoalvar1 = iVar4;
					iVar4 = GetDirection__Fiiii(x,y,(int)(&monster[0]._mx)[iVar5],
																			(int)(&monster[0]._my)[iVar5]);
					monster[iVar3]._mdir = (char)iVar4;
				}
			}
			iVar5 = iVar5 + 0x68;
			iVar6 = iVar6 + 1;
			iVar7 = iVar7 + 2;
		} while (iVar6 < nummonsters);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMonstHistory__Fi(int mt /*$a0*/)
 // line 5061, offset 0x80155934
	/* begin block 1 */
		// Start line: 5062
		// Start offset: 0x80155934
		// Variables:
	// 		int res; // $s0
	/* end block 1 */
	// End offset: 0x80155B9C
	// End Line: 5145

	/* begin block 2 */
		// Start line: 11467
	/* end block 2 */
	// End Line: 11468

void PrintMonstHistory__Fi(int mt)

{
	ushort uVar1;
	char *__src;
	
	if (0xe < *(short *)(&monster[0xc1]._lasty + mt * 2)) {
		if (gnDifficulty == 2) {
			uVar1 = monsterdata[mt].mMagicRes2;
		}
		else {
			uVar1 = monsterdata[mt].mMagicRes;
		}
		if ((uVar1 & 0x3f) == 0) {
			__src = GetStr__Fi(STR_NO_MAGIC_RESISTANCE_718);
			strcpy(tempstr,__src);
		}
		else {
			if ((uVar1 & 7) != 0) {
				__src = GetStr__Fi(STR_RESISTS____863);
				strcpy(tempstr,__src);
				if ((uVar1 & 1) != 0) {
					__src = GetStr__Fi(STR_MAGIC__627);
					strcat(tempstr,__src);
				}
				if ((uVar1 & 2) != 0) {
					if ((uVar1 & 1) != 0) {
						strcat(tempstr,(char *)&PTR_DAT_8011c2c8);
					}
					__src = GetStr__Fi(STR_FIRE__343);
					strcat(tempstr,__src);
				}
				if ((uVar1 & 4) != 0) {
					if ((uVar1 & 2) != 0) {
						strcat(tempstr,(char *)&PTR_DAT_8011c2c8);
					}
					__src = GetStr__Fi(STR_LIGHTNING__596);
					strcat(tempstr,__src);
				}
				AddPanelString__FPCci(tempstr,1);
			}
			if ((uVar1 & 0x38) == 0) goto LAB_80155b84;
			__src = GetStr__Fi(STR_IMMUNE____525);
			strcpy(tempstr,__src);
			if ((uVar1 & 8) != 0) {
				__src = GetStr__Fi(STR_MAGIC__627);
				strcat(tempstr,__src);
			}
			if ((uVar1 & 0x10) != 0) {
				if ((uVar1 & 8) != 0) {
					strcat(tempstr,(char *)&PTR_DAT_8011c2c8);
				}
				__src = GetStr__Fi(STR_FIRE__343);
				strcat(tempstr,__src);
			}
			if ((uVar1 & 0x20) != 0) {
				if ((uVar1 & 0x10) != 0) {
					strcat(tempstr,(char *)&PTR_DAT_8011c2c8);
				}
				__src = GetStr__Fi(STR_LIGHTNING__596);
				strcat(tempstr,__src);
			}
		}
		AddPanelString__FPCci(tempstr,1);
	}
LAB_80155b84:
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintUniqueHistory__Fv()
 // line 5151, offset 0x80155bb8
	/* begin block 1 */
		// Start line: 5152
		// Start offset: 0x80155BB8
		// Variables:
	// 		int res; // $s0
	/* end block 1 */
	// End offset: 0x80155CCC
	// End Line: 5178

	/* begin block 2 */
		// Start line: 11685
	/* end block 2 */
	// End Line: 11686

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintUniqueHistory__Fv(void)

{
	ushort uVar1;
	char *__src;
	text_strs StrId;
	
	uVar1 = monster[(&_pcursmonst)[sel_data]].mMagicRes;
	if ((uVar1 & 0x3f) == 0) {
		__src = GetStr__Fi(STR_NO_RESISTANCES_722);
		strcpy(tempstr,__src);
		AddPanelString__FPCci(tempstr,1);
		StrId = STR_NO_IMMUNITIES_717;
	}
	else {
		StrId = STR_NO_RESISTANCES_722;
		if ((uVar1 & 7) != 0) {
			StrId = STR_SOME_MAGIC_RESISTANCES_999;
		}
		__src = GetStr__Fi(StrId);
		strcpy(tempstr,__src);
		AddPanelString__FPCci(tempstr,1);
		StrId = STR_SOME_MAGIC_IMMUNITIES_998;
		if ((uVar1 & 0x38) == 0) {
			StrId = STR_NO_IMMUNITIES_717;
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
// void /*$ra*/ MissToMonst__Fiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 5187, offset 0x80155ce4
	/* begin block 1 */
		// Start line: 5188
		// Start offset: 0x80155CE4
		// Variables:
	// 		int oldx; // $s4
	// 		int oldy; // $s5
	// 		int newx; // $s0
	// 		int newy; // $s2
	// 		struct MissileStruct *Miss; // $v1
	// 		int m; // $s2
	// 		struct MonsterStruct *Monst; // $s0
	// 		int pnum; // $s1

		/* begin block 1.1 */
			// Start line: 5226
			// Start offset: 0x80155E14

			/* begin block 1.1.1 */
				// Start line: 5226
				// Start offset: 0x80155E28

				/* begin block 1.1.1.1 */
					// Start line: 5227
					// Start offset: 0x80155E28

					/* begin block 1.1.1.1.1 */
						// Start line: 5231
						// Start offset: 0x80155E7C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 5232
							// Start offset: 0x80155E7C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 5237
								// Start offset: 0x80155EE0
								// Variables:
							// 		void * KnockOk; // $s6

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 5244
									// Start offset: 0x80155F30

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 5248
										// Start offset: 0x80155F68
										// Variables:
									// 		struct PlayerStruct *ptrplr; // $a1
									// 		struct PlayerStruct *plr2; // $a1
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80155FDC
									// End Line: 5254
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80155FDC
								// End Line: 5254
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80155FFC
							// End Line: 5267
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80155FFC
						// End Line: 5267
					/* end block 1.1.1.1.1 */
					// End offset: 0x80155FFC
					// End Line: 5267
				/* end block 1.1.1.1 */
				// End offset: 0x80155FFC
				// End Line: 5267
			/* end block 1.1.1 */
			// End offset: 0x80155FFC
			// End Line: 5267
		/* end block 1.1 */
		// End offset: 0x80156184
		// End Line: 5290
	/* end block 1 */
	// End offset: 0x80156184
	// End Line: 5290

	/* begin block 2 */
		// Start line: 11757
	/* end block 2 */
	// End Line: 11758

void MissToMonst__Fiii(int i,int x,int y)

{
	char cVar1;
	bool bVar2;
	byte bVar3;
	uchar uVar4;
	uint uVar5;
	int x_00;
	uint pnum;
	int iVar6;
	int i_00;
	int x_01;
	int y_00;
	
	i_00 = (int)missile[i]._misource;
	x_01 = (int)missile[i]._mix;
	y_00 = (int)missile[i]._miy;
	dung_map[x * 0x70 + y].dMonster = missile[i]._misource + 1;
	cVar1 = missile[i]._mimfnum;
	monster[i_00]._mx = (char)x;
	monster[i_00]._my = (char)y;
	monster[i_00]._mdir = cVar1;
	cVar1 = monster[i_00]._mdir;
	monster[i_00]._mxoff = missile[i]._mixoff;
	monster[i_00]._myoff = missile[i]._miyoff;
	monster[i_00]._mAnimFrame = missile[i]._miAnimFrame;
	M_StartStand__Fii(i_00,(int)cVar1);
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
		bVar3 = IsDplayer__Fii(x_01,y_00);
		pnum = (uint)bVar3 - 1;
		uVar4 = IsDplayer__Fii(x_01,y_00);
		if (((uVar4 != '\0') && (bVar3 = (monster[i_00].MType)->mtype, bVar3 != 0x28)) &&
			 (3 < (uint)bVar3 - 0x48)) {
			bVar3 = IsDplayer__Fii(x_01,y_00);
			M_TryH2HHit__Fiiiii(i_00,(uint)bVar3 - 1,500,(uint)monster[i_00].mMinDamage2,
													(uint)monster[i_00].mMaxDamage2);
			bVar3 = IsDplayer__Fii(x_01,y_00);
			if ((pnum == (uint)bVar3 - 1) && (3 < (uint)(monster[i_00].MType)->mtype - 0x59)) {
				bVar2 = true;
				if (1 < plr[pnum]._pmode + ~PM_BLOCK) {
					StartPlrHit__FiiUc(pnum,0,'\x01');
				}
				x_01 = x_01 + (int)offset_x[(int)monster[i_00]._mdir];
				y_00 = y_00 + (int)offset_y[(int)monster[i_00]._mdir];
				if ((((FePlayerNo != 0) && (uVar5 = pnum ^ 1, plr[pnum].plractive != '\0')) &&
						(plr[uVar5].plractive != '\0')) &&
					 (uVar4 = ChkPlrOffsets__Fiiii(x_01 * 8,y_00 * 8,plr[uVar5].WorldX,plr[uVar5].WorldY),
					 uVar4 == '\0')) {
					bVar2 = false;
				}
				if ((bVar2) && (uVar4 = PosOkPlayer__Fiii(pnum,x_01,y_00), uVar4 != '\0')) {
					SetPlayerOld__Fi(pnum);
					WorldToOffset__Fiii(pnum,x_01 * 8 | 4,y_00 * 8 | 4);
				}
			}
		}
	}
	else {
		if (((0 < (int)dung_map[x_01 * 0x70 + y_00].dMonster) &&
				(bVar3 = (monster[i_00].MType)->mtype, bVar3 != 0x28)) && (3 < (uint)bVar3 - 0x48)) {
			M_TryM2MHit__Fiiiii(i_00,(int)dung_map[x_01 * 0x70 + y_00].dMonster + -1,500,
													(uint)monster[i_00].mMinDamage2,(uint)monster[i_00].mMaxDamage2);
			if (3 < (uint)(monster[i_00].MType)->mtype - 0x59) {
				x_00 = x_01 + (int)offset_x[(int)monster[i_00]._mdir];
				i_00 = y_00 + (int)offset_y[(int)monster[i_00]._mdir];
				uVar4 = PosOkMonst__Fiii((int)dung_map[x_01 * 0x70 + y_00].dMonster + -1,x_00,i_00);
				if (uVar4 != '\0') {
					iVar6 = (int)dung_map[x_01 * 0x70 + y_00].dMonster + -1;
					dung_map[x_00 * 0x70 + i_00].dMonster = dung_map[x_01 * 0x70 + y_00].dMonster;
					dung_map[x_01 * 0x70 + y_00].dMonster = 0;
					monster[iVar6]._mx = (char)x_00;
					monster[iVar6]._mfutx = (char)x_00;
					monster[iVar6]._my = (char)i_00;
					monster[iVar6]._mfuty = (char)i_00;
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkMonst3__Fiii(int i /*$s5*/, int x /*$s0*/, int y /*$s3*/)
 // line 5353, offset 0x801561b0
	/* begin block 1 */
		// Start line: 5354
		// Start offset: 0x801561B0
		// Variables:
	// 		unsigned char ret; // $s2
	// 		int oi; // $v1
	// 		int objtype; // $a0
	// 		int mi; // $a0
	// 		unsigned char fire; // $s4
	// 		unsigned char isdoor; // $s1
	/* end block 1 */
	// End offset: 0x80156464
	// End Line: 5394

	/* begin block 2 */
		// Start line: 12142
	/* end block 2 */
	// End Line: 12143

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
	short *psVar9;
	
	bVar2 = true;
	bVar4 = false;
	uVar6 = SEXT14(dung_map[x * 0x70 + y].dObject);
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
			uVar5 = IsDplayer__Fii(x,y);
			bVar3 = false;
			if ((uVar5 == '\0') && (bVar3 = false, dung_map[x * 0x70 + y].dMonster == 0)) {
				bVar2 = true;
				bVar3 = true;
			}
		}
		if (((bVar3) && (iVar8 = (int)dung_map[x * 0x70 + y].dMissile, iVar8 != 0)) && (-1 < i)) {
			if (0 < iVar8) {
				if (missile[iVar8]._mitype == '\x05') {
					bVar4 = true;
				}
				else {
					iVar8 = 0;
					if (0 < nummissiles) {
						psVar9 = &missileactive;
						do {
							if (missile[(int)*psVar9]._mitype == '\x05') {
								bVar4 = true;
							}
							iVar8 = iVar8 + 1;
							psVar9 = psVar9 + 1;
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
 // line 5406, offset 0x8015648c
	/* begin block 1 */
		// Start line: 5407
		// Start offset: 0x8015648C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int skeltypes; // $s2
	// 		int skel; // $s0
	/* end block 1 */
	// End offset: 0x801565B0
	// End Line: 5430

	/* begin block 2 */
		// Start line: 12262
	/* end block 2 */
	// End Line: 12263

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
			uVar1 = IsSkel__Fi((uint)(byte)(&monster[0xc5]._mMTidx)[iVar3]);
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
				uVar1 = IsSkel__Fi((uint)(byte)(&monster[0xc5]._mMTidx)[iVar3]);
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
 // line 5445, offset 0x801565dc
	/* begin block 1 */
		// Start line: 5446
		// Start offset: 0x801565DC
		// Variables:
	// 		int pnum; // $s1
	// 		int itm; // stack offset -24
	// 		struct MonsterStruct *Monst; // $s0
	/* end block 1 */
	// End offset: 0x80156704
	// End Line: 5476

	/* begin block 2 */
		// Start line: 12348
	/* end block 2 */
	// End Line: 12349

void TalktoMonster__Fi(int i)

{
	uchar uVar1;
	ItemStruct *pIVar2;
	MonsterStruct *pMVar3;
	uint pnum;
	int local_18 [2];
	
	pMVar3 = monster + i;
	pnum = (uint)monster[i]._menemy;
	if (monster[i]._mmode != '\x11') {
		uVar1 = monster[i]._mAi;
		monster[i]._mmode = '\x11';
		if ((uVar1 == '\x17') || (uVar1 == '\x1e')) {
			uVar1 = QuestStatus__Fi(7);
			if ((uVar1 != '\0') &&
				 ((quests[7]._qvar1 == '\x02' &&
					(pIVar2 = PlrHasItem__FiiRi(pnum,0xc,local_18), pIVar2 != (ItemStruct *)0x0)))) {
				RemoveInvItem__Fii(pnum,local_18[0]);
				quests[7]._qactive = '\x03';
				pMVar3->mtalkmsg = 0x16;
				monster[i]._mgoal = '\x06';
				NetSendCmdQuest__FUcUc('\x01','\a');
			}
			uVar1 = QuestStatus__Fi(4);
			if (((uVar1 != '\0') && (0x50 < pMVar3->mtalkmsg)) &&
				 (pIVar2 = PlrHasItem__FiiRi(pnum,0xf,local_18), pIVar2 != (ItemStruct *)0x0)) {
				RemoveInvItem__Fii(pnum,local_18[0]);
				pMVar3->mtalkmsg = 0x53;
				monster[i]._mgoal = '\x06';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpawnGolum__Fiiii(int i /*$a0*/, int x /*$a1*/, int y /*$a2*/, int mi /*$a3*/)
 // line 5485, offset 0x8015671c
	/* begin block 1 */
		// Start line: 5486
		// Start offset: 0x8015671C
	/* end block 1 */
	// End offset: 0x80156938
	// End Line: 5513

	/* begin block 2 */
		// Start line: 12446
	/* end block 2 */
	// End Line: 12447

void SpawnGolum__Fiiii(int i,int x,int y,int mi)

{
	ushort uVar1;
	char cVar2;
	int iVar3;
	char cVar4;
	
	dung_map[x * 0x70 + y].dMonster = (short)i + 1;
	cVar2 = (char)x;
	monster[i]._mx = cVar2;
	cVar4 = (char)y;
	monster[i]._my = cVar4;
	monster[i]._mfutx = cVar2;
	monster[i]._mfuty = cVar4;
	monster[i]._moldx = cVar2;
	monster[i]._moldy = cVar4;
	iVar3 = plr[i]._pMaxMana;
	cVar2 = missile[mi]._mispllvl;
	monster[i].mArmorClass = '\x19';
	iVar3 = (iVar3 / 3) * 2 + (int)cVar2 * 0x280;
	monster[i]._mmaxhp = iVar3;
	monster[i]._mhitpoints = iVar3;
	monster[i].mHit = plr[i]._pLevel * '\x02' + '(' + missile[mi]._mispllvl * '\x05';
	monster[i].mMinDamage = missile[mi]._mispllvl * '\x02' + '\b';
	uVar1 = monster[i]._mFlags;
	cVar2 = missile[mi]._mispllvl;
	monster[i]._menemy = '\0';
	monster[i]._mFlags = uVar1 | 0x30;
	monster[i].mMaxDamage = cVar2 * '\x02' + '\x10';
	M_StartSpStand__Fii(i,0);
	NetSendCmdGolem__FUcUcUcUclUc
						(monster[i]._mx,monster[i]._my,monster[i]._mdir,monster[i]._menemy,
						 monster[i]._mhitpoints,(uint)currlevel);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CanTalkToMonst__Fi(int m /*$a0*/)
 // line 5519, offset 0x8015694c
	/* begin block 1 */
		// Start line: 5520
		// Start offset: 0x8015694C
	/* end block 1 */
	// End offset: 0x80156984
	// End Line: 5525

	/* begin block 2 */
		// Start line: 12550
	/* end block 2 */
	// End Line: 12551

uchar CanTalkToMonst__Fi(int m)

{
	return (uchar)(monster[m]._mgoal == '\x06' || monster[m]._mgoal == '\a');
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckMonsterHit__FiRUc(int m /*$a0*/, unsigned char *ret /*$a1*/)
 // line 5531, offset 0x8015698c
	/* begin block 1 */
		// Start line: 5532
		// Start offset: 0x8015698C
	/* end block 1 */
	// End offset: 0x80156A60
	// End Line: 5548

	/* begin block 2 */
		// Start line: 12574
	/* end block 2 */
	// End Line: 12575

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
// void * /*$ra*/ gSameRoom__Fii(int m /*$a0*/, int i /*$a1*/)
 // line 5556, offset 0x80156a68
	/* begin block 1 */
		// Start line: 5557
		// Start offset: 0x80156A68
		// Variables:
	// 		struct MonsterStruct *m1; // $v0
	// 		struct MonsterStruct *m2; // $v1
	/* end block 1 */
	// End offset: 0x80156AF8
	// End Line: 5563

	/* begin block 2 */
		// Start line: 12622
	/* end block 2 */
	// End Line: 12623

void * gSameRoom__Fii(int m,int i)

{
	return (void *)(uint)(dung_map[(int)monster[m]._mx * 0x70 + (int)monster[m]._my].dTransVal ==
											 dung_map[(int)monster[i]._mx * 0x70 + (int)monster[i]._my].dTransVal);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MAI_Golum__Fi(int i /*$s4*/)
 // line 5566, offset 0x80156b00
	/* begin block 1 */
		// Start line: 5567
		// Start offset: 0x80156B00
		// Variables:
	// 		int ok; // $s2
	// 		int j; // $s0
	// 		int k; // $a1
	// 		int mid; // $v1
	// 		int mx; // $s0
	// 		int my; // $s5
	// 		int md; // $s1
	// 		int cursm; // $fp
	// 		int sdata; // stack offset -64
	// 		int omp; // $s7
	// 		struct MonsterStruct *Monst; // $s3
	// 		struct MonsterStruct *pMonster; // $s1

		/* begin block 1.1 */
			// Start line: 5599
			// Start offset: 0x80156C0C

			/* begin block 1.1.1 */
				// Start line: 5600
				// Start offset: 0x80156C1C

				/* begin block 1.1.1.1 */
					// Start line: 5601
					// Start offset: 0x80156C1C

					/* begin block 1.1.1.1.1 */
						// Start line: 5633
						// Start offset: 0x80156DC8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 5635
							// Start offset: 0x80156DC8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 5662
								// Start offset: 0x80156F38

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 5667
									// Start offset: 0x80156F54

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 5669
										// Start offset: 0x80156F70
										// Variables:
									// 		int nd; // $v0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80156FB0
									// End Line: 5680
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80156FB0
								// End Line: 5680
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80156FCC
							// End Line: 5685
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80156FCC
						// End Line: 5685
					/* end block 1.1.1.1.1 */
					// End offset: 0x80156FCC
					// End Line: 5685
				/* end block 1.1.1.1 */
				// End offset: 0x80156FCC
				// End Line: 5685
			/* end block 1.1.1 */
			// End offset: 0x80156FCC
			// End Line: 5685
		/* end block 1.1 */
		// End offset: 0x80156FCC
		// End Line: 5685
	/* end block 1 */
	// End offset: 0x80156FF8
	// End Line: 5741

	/* begin block 2 */
		// Start line: 12641
	/* end block 2 */
	// End Line: 12642

void MAI_Golum__Fi(int i)

{
	int *piVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	uchar uVar9;
	uchar uVar10;
	void *pvVar11;
	int iVar12;
	uint mdir;
	int iVar13;
	int iVar14;
	int iVar15;
	uint mdir_00;
	int iVar16;
	
	iVar8 = myplr;
	iVar7 = sel_data;
	iVar16 = (&_pcursmonst)[sel_data];
	if (*(short *)&monster[i]._mx == 1) {
		return;
	}
	iVar13 = (int)monster[i]._mmode;
	if (iVar13 == 6) {
		return;
	}
	if (iVar13 == 0xb) {
		return;
	}
	if ((iVar13 - 1U & 0xff) < 3) {
		return;
	}
	sel_data = 0;
	myplr = -1;
	_pcursmonst = -1;
	if ((monster[i]._menemy != 0) && (monster[(uint)monster[i]._menemy]._mhitpoints >> 6 < 1)) {
		monster[i]._menemy = '\0';
	}
	if (monster[i]._mmode == '\x04') goto LAB_80156fcc;
	mdir = (uint)monster[i]._menemy;
	if ((monster[i]._menemy == 0) || (bVar6 = false, monster[i]._msquelch == '\0')) {
		cVar2 = monster[i]._mx;
		cVar3 = monster[i]._my;
		monster[i]._msquelch = -6;
		CheckArea__FiiiUci((int)cVar2,(int)cVar3,4,'\0',-1);
		if ((0 < (&_pcursmonst)[sel_data]) &&
			 (pvVar11 = gSameRoom__Fii((&_pcursmonst)[sel_data],i), pvVar11 != (void *)0x0)) {
			monster[i]._menemy = (uchar)(&_pcursmonst)[sel_data];
			monster[i]._menemyx = monster[(&_pcursmonst)[sel_data]]._mfutx;
			monster[i]._menemyy = monster[(&_pcursmonst)[sel_data]]._mfuty;
			goto LAB_80156fcc;
		}
		uVar10 = '\x01';
		monster[i]._menemy = '\0';
		mdir_00 = SEXT14(plr[i]._pdir);
		uVar9 = DirOK__Fii(i,mdir_00);
		if (uVar9 == '\0') {
			mdir = 0;
			do {
				mdir_00 = mdir;
				uVar10 = DirOK__Fii(i,mdir_00);
				if (7 < (int)(mdir_00 + 1)) break;
				mdir = mdir_00 + 1;
			} while (uVar10 == '\0');
		}
		if (uVar10 == '\0') goto LAB_80156fcc;
	}
	else {
		cVar2 = monster[i]._mx;
		cVar3 = monster[i]._my;
		cVar4 = monster[mdir]._mfutx;
		cVar5 = monster[mdir]._mfuty;
		mdir_00 = GetDirection__Fiiii((int)cVar2,(int)cVar3,(int)monster[mdir]._mx,
																	(int)monster[mdir]._my);
		monster[i]._mdir = (char)mdir_00;
		iVar13 = abs((int)cVar2 - (int)cVar4);
		if (iVar13 < 2) {
			iVar13 = abs((int)cVar3 - (int)cVar5);
			bVar6 = iVar13 < 2;
		}
		if (bVar6) {
			if (monster[mdir]._msquelch == '\0') {
				monster[mdir]._msquelch = -1;
				iVar13 = 0;
				monster[mdir]._lastx = monster[i]._mx;
				monster[mdir]._lasty = monster[i]._my;
				do {
					iVar12 = -2;
					iVar14 = 0;
					do {
						if (0 < (int)dung_map[((int)monster[i]._mx + iVar12) * 0x70 +
																	(int)monster[i]._my + iVar13 + -2].dMonster) {
							monster[(int)dung_map[((int)monster[i]._mx + iVar12) * 0x70 +
																		(int)monster[i]._my + iVar13 + -2].dMonster]._msquelch = -1;
						}
						iVar15 = iVar14 + 1;
						iVar12 = iVar14 + -1;
						iVar14 = iVar15;
					} while (iVar15 < 5);
					iVar13 = iVar13 + 1;
				} while (iVar13 < 5);
			}
			M_StartAttack__Fi(i);
			goto LAB_80156fcc;
		}
		if (monster[i]._msquelch == '\0') {
			monster[i]._msquelch = '\0';
		}
		else {
			monster[i]._msquelch = monster[i]._msquelch + -1;
		}
		uVar10 = '\x01';
		uVar9 = DirOK__Fii(i,mdir_00);
		if (uVar9 == '\0') {
			mdir = mdir_00 + 1 & 7;
			uVar10 = '\0';
			if (mdir != mdir_00) {
				do {
					mdir = mdir & 7;
					uVar10 = DirOK__Fii(i,mdir);
					if (uVar10 != '\0') {
						mdir_00 = mdir;
					}
					mdir = mdir + 1;
				} while ((mdir != mdir_00) && (uVar10 == '\0'));
			}
		}
		if (uVar10 == '\0') {
			monster[i]._menemy = '\0';
			goto LAB_80156fcc;
		}
	}
	M_WalkDir__Fii(i,mdir_00);
LAB_80156fcc:
	piVar1 = &_pcursmonst + sel_data;
	sel_data = iVar7;
	myplr = iVar8;
	*piVar1 = iVar16;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartAttack__Fi(int i /*$s1*/)
 // line 5786, offset 0x8015702c
	/* begin block 1 */
		// Start line: 5787
		// Start offset: 0x8015702C
		// Variables:
	// 		int md; // $s2
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $v1
	// 		int _my; // $a1
	/* end block 1 */
	// End offset: 0x80157100
	// End Line: 5807

	/* begin block 2 */
		// Start line: 13125
	/* end block 2 */
	// End Line: 13126

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
 // line 5810, offset 0x8015711c
	/* begin block 1 */
		// Start line: 5811
		// Start offset: 0x8015711C
		// Variables:
	// 		long fx; // $t0
	// 		long fy; // $t3
	// 		struct MonsterStruct *pmonster; // $v0
	// 		int _mx; // $t1
	// 		int _my; // $t2
	/* end block 1 */
	// End offset: 0x8015725C
	// End Line: 5842

	/* begin block 2 */
		// Start line: 13178
	/* end block 2 */
	// End Line: 13179

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
	dung_map[iVar3 * 0x70 + iVar4].dMonster = ~(ushort)i;
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





