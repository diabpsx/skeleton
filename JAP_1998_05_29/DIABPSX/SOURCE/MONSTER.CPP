#include "THISDUST.H"
#include "COREAUTO.H"


// decompiled code
// original method signature: 
// void FUN_8014ab74(int iParm1);
 // line -1, offset 0x8014ab74
// function 'FUN_8014ab74' @0x8014AB74 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ab74(int iParm1)

{
	short sVar1;
	
	sVar1 = (&monstactive)[iGp00001b4c + -1];
	(&monstactive)[iGp00001b4c + -1] = (&monstactive)[iParm1];
	(&monstactive)[iParm1] = sVar1;
	iGp00001b4c = iGp00001b4c + -1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014abac(int iParm1);
 // line -1, offset 0x8014abac
// function 'FUN_8014abac' @0x8014ABAC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014abac(int iParm1)

{
	GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
											(uint)monster[iParm1]._menemyx,(uint)monster[iParm1]._menemyy);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014ac10(int iParm1,int iParm2);
 // line -1, offset 0x8014ac10
// function 'FUN_8014ac10' @0x8014AC10 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ac10(int iParm1,int iParm2)

{
	if ((0 < iParm2) && (monster[iParm1]._mAi != '\x1c')) {
		monster[iParm1]._mVar2 = (short)iParm2;
		monster[iParm1]._mmode = '\r';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014ac60(int iParm1,short sParm2,short sParm3);
 // line -1, offset 0x8014ac60
// function 'FUN_8014ac60' @0x8014AC60 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ac60(int iParm1,short sParm2,short sParm3)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = FUN_8014abac();
	NewMonsterAnim__FiR10AnimStructii(iParm1,(monster[iParm1].MType)->Anims + 2,md,2);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	monster[iParm1]._mmode = '\n';
	monster[iParm1]._mVar1 = sParm2;
	monster[iParm1]._mVar2 = sParm3;
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mdir = (char)md;
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	M_CheckEFlag__Fi(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014ad80(int iParm1,int iParm2,short sParm3);
 // line -1, offset 0x8014ad80
// function 'FUN_8014ad80' @0x8014AD80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ad80(int iParm1,int iParm2,short sParm3)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = FUN_8014abac();
	NewMonsterAnim__FiR10AnimStructii(iParm1,(monster[iParm1].MType)->Anims + 5,md,5);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	if (iParm2 == 0x43) {
		SetLightFX__FiisssUcUcUc((int)cVar1,(int)cVar2,0xa00,0xa00,0xa00,0x40,0x40,0x40);
	}
	monster[iParm1]._mmode = '\f';
	monster[iParm1]._mVar1 = (short)iParm2;
	monster[iParm1]._mVar2 = 0;
	monster[iParm1]._mVar3 = sParm3;
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	monster[iParm1]._mdir = (char)md;
	M_CheckEFlag__Fi(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014aef4(int iParm1);
 // line -1, offset 0x8014aef4
// function 'FUN_8014aef4' @0x8014AEF4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014aef4(int iParm1)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = FUN_8014abac();
	NewMonsterAnim__FiR10AnimStructii(iParm1,(monster[iParm1].MType)->Anims + 5,md,5);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	monster[iParm1]._mmode = '\a';
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mdir = (char)md;
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	M_CheckEFlag__Fi(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014afe4(int iParm1);
 // line -1, offset 0x8014afe4
// function 'FUN_8014afe4' @0x8014AFE4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014afe4(int iParm1)

{
	char cVar1;
	char cVar2;
	
	NewMonsterAnim__FiR10AnimStructii
						(iParm1,(monster[iParm1].MType)->Anims + 5,(int)monster[iParm1]._mdir,5);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	monster[iParm1]._mmode = '\a';
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	M_CheckEFlag__Fi(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014b0bc(int iParm1,int iParm2);
 // line -1, offset 0x8014b0bc
// function 'FUN_8014b0bc' @0x8014B0BC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014b0bc(int iParm1,int iParm2)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	short sVar5;
	uint uVar6;
	CMonster *pCVar7;
	
	uVar6 = FUN_80154fac();
	if ((uVar6 & 0xff) != 0) {
		M_ClearSquares__Fi(iParm1);
		pCVar7 = monster[iParm1].MType;
		cVar1 = monster[iParm1]._mdir;
		monster[iParm1]._mx = monster[iParm1]._mx + (&offset_x)[iParm2];
		monster[iParm1]._my = monster[iParm1]._my + (&offset_y)[iParm2];
		NewMonsterAnim__FiR10AnimStructii(iParm1,pCVar7->Anims + 3,(int)cVar1,3);
		cVar3 = monster[iParm1]._mx;
		cVar4 = monster[iParm1]._my;
		cVar1 = monster[iParm1]._mx;
		cVar2 = monster[iParm1]._my;
		monster[iParm1]._mmode = '\x05';
		monster[iParm1]._mxoff = '\0';
		monster[iParm1]._myoff = '\0';
		monster[iParm1]._moldx = cVar3;
		monster[iParm1]._moldy = cVar4;
		monster[iParm1]._mfutx = cVar1;
		monster[iParm1]._mfuty = cVar2;
		monster[iParm1]._moldx = cVar1;
		monster[iParm1]._moldy = cVar2;
		M_CheckEFlag__Fi(iParm1);
		M_ClearSquares__Fi(iParm1);
		(&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (short)iParm1 + 1;
		sVar5 = monster[iParm1]._mVar8;
		monster[iParm1]._mVar1 = 0;
		monster[iParm1]._mVar2 = 0;
		monster[iParm1]._mxvel = 0;
		monster[iParm1]._myvel = 0;
		monster[iParm1]._mVar6 = 0;
		monster[iParm1]._mVar7 = 0;
		monster[iParm1]._mVar8 = sVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014b2d8(int iParm1,uint uParm2,int iParm3);
 // line -1, offset 0x8014b2d8
// function 'FUN_8014b2d8' @0x8014B2D8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014b2d8(int iParm1,uint uParm2,int iParm3)

{
	char cVar1;
	byte bVar2;
	short sVar3;
	char cVar4;
	
	if (-1 < (int)uParm2) {
		monster[iParm1].mWhoHit = monster[iParm1].mWhoHit | (byte)(1 << (uParm2 & 0x1f));
	}
	delta_monster_hp__FilUc(iParm1,monster[iParm1]._mhitpoints,currlevel);
	NetSendCmdParam2__FUcUcUsUs('\0','%',(ushort)iParm1,(ushort)iParm3);
	PlayEffect__Fii(iParm1,1);
	if (-1 < (int)uParm2) {
		monster[iParm1]._menemy = (uchar)uParm2;
		monster[iParm1]._menemyx = (uchar)(&plr)[uParm2]._px;
		sVar3 = (&plr)[uParm2]._py;
		monster[iParm1]._mFlags = monster[iParm1]._mFlags & 0xffef;
		monster[iParm1]._menemyy = (uchar)sVar3;
		cVar4 = FUN_8014abac(iParm1);
		monster[iParm1]._mdir = cVar4;
	}
	bVar2 = (monster[iParm1].MType)->mtype;
	if (((uint)bVar2 - 0x1d < 4) || ((int)monster[iParm1].mLevel + 3 <= iParm3 >> 6)) {
		if (bVar2 == 0x27) {
			FUN_8014e8a0(iParm1);
		}
		else {
			if ((uint)bVar2 - 0x10 < 4) {
				monster[iParm1]._mgoal = '\x01';
			}
		}
		if (monster[iParm1]._mmode != '\x0f') {
			NewMonsterAnim__FiR10AnimStructii
								(iParm1,(monster[iParm1].MType)->Anims + 3,(int)monster[iParm1]._mdir,3);
			cVar4 = monster[iParm1]._moldx;
			cVar1 = monster[iParm1]._moldy;
			monster[iParm1]._mmode = '\x05';
			monster[iParm1]._mxoff = '\0';
			monster[iParm1]._myoff = '\0';
			monster[iParm1]._mx = cVar4;
			monster[iParm1]._my = cVar1;
			monster[iParm1]._mfutx = cVar4;
			monster[iParm1]._mfuty = cVar1;
			monster[iParm1]._moldx = cVar4;
			monster[iParm1]._moldy = cVar1;
			M_CheckEFlag__Fi(iParm1);
			M_ClearSquares__Fi(iParm1);
			(&dung_map)[(int)cVar4 * 0x70 + (int)cVar1].dMonster = (ushort)iParm1 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014b5c0(int iParm1,char cParm2,short sParm3);
 // line -1, offset 0x8014b5c0
// function 'FUN_8014b5c0' @0x8014B5C0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014b5c0(int iParm1,char cParm2,short sParm3)

{
	char cVar1;
	char cVar2;
	short sVar3;
	int nXPos;
	int i;
	int nYPos;
	int __x;
	
	PlaySFX__Fi(USFX_DIABLOD);
	QuestStruct_ARRAY_800dda90[1]._qactive = '\x03';
	if (cParm2 != '\0') {
		NetSendCmdQuest__FUcUc('\x01','\x05');
	}
	gbProcessPlayers = '\0';
	__x = 0;
	while (__x < iGp00001b4c) {
		sVar3 = (&monstactive)[__x];
		i = (int)sVar3;
		if ((i != iParm1) && (monster[iParm1]._msquelch != '\0')) {
			NewMonsterAnim__FiR10AnimStructii(i,(monster[i].MType)->Anims + 4,(int)monster[i]._mdir,4);
			cVar1 = monster[i]._moldx;
			cVar2 = monster[i]._moldy;
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
			(&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dMonster = sVar3 + 1;
		}
		__x = __x + 1;
	}
	nXPos = (int)monster[iParm1]._mx;
	nYPos = (int)monster[iParm1]._my;
	__x = AddLight__Fiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,3);
	monster[iParm1].mlid = (uchar)__x;
	DoVision__FiiiUcUc(nXPos,nYPos,8,'\0',1);
	__x = abs(ViewX - nXPos);
	i = abs(ViewY - nYPos);
	if (i < __x) {
		__x = ViewX - nXPos;
	}
	else {
		__x = ViewY - nYPos;
	}
	i = abs(__x);
	__x = 0x14;
	if (i < 0x15) {
		__x = i;
	}
	monster[iParm1]._mVar3 = 0;
	monster[iParm1]._mVar4 = 0;
	i = (int)monster[iParm1]._mVar3 + nXPos * -0x10000;
	monster[iParm1]._mVar8 = sParm3;
	sVar3 = __divdi3(i,i >> 0x1f,__x,__x >> 0x1f);
	monster[iParm1]._mVar5 = sVar3;
	i = (int)monster[iParm1]._mVar4 + nYPos * -0x10000;
	sVar3 = __divdi3(i,i >> 0x1f,__x,__x >> 0x1f);
	monster[iParm1]._mVar6 = sVar3;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014b8e8(int iParm1,uint uParm2,int iParm3);
 // line -1, offset 0x8014b8e8
// function 'FUN_8014b8e8' @0x8014B8E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014b8e8(int iParm1,uint uParm2,int iParm3)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	
	if (-1 < (int)uParm2) {
		monster[uParm2].mWhoHit = monster[uParm2].mWhoHit | (byte)(1 << (uParm2 & 0x1f));
	}
	delta_monster_hp__FilUc(iParm1,monster[iParm1]._mhitpoints,currlevel);
	NetSendCmdParam2__FUcUcUsUs('\0','%',(ushort)iParm1,(ushort)iParm3);
	PlayEffect__Fii(iParm1,1);
	if (((uint)(monster[iParm1].MType)->mtype - 0x1d < 4) ||
		 ((int)monster[iParm1].mLevel + 3 <= iParm3 >> 6)) {
		if (-1 < (int)uParm2) {
			monster[iParm1]._mdir = monster[uParm2]._mdir + 4U & 7;
		}
		bVar3 = (monster[iParm1].MType)->mtype;
		if (bVar3 == 0x27) {
			FUN_8014e8a0(iParm1);
		}
		else {
			if ((uint)bVar3 - 0x10 < 4) {
				monster[iParm1]._mgoal = '\x01';
			}
		}
		cVar1 = monster[iParm1]._moldx;
		cVar2 = monster[iParm1]._moldy;
		if (monster[iParm1]._mmode != '\x0f') {
			if ((monster[iParm1].MType)->mtype != 'm') {
				NewMonsterAnim__FiR10AnimStructii
									(iParm1,(monster[iParm1].MType)->Anims + 3,(int)monster[iParm1]._mdir,3);
				monster[iParm1]._mmode = '\x05';
			}
			monster[iParm1]._mxoff = '\0';
			monster[iParm1]._myoff = '\0';
			monster[iParm1]._mx = cVar1;
			monster[iParm1]._my = cVar2;
			monster[iParm1]._mfutx = cVar1;
			monster[iParm1]._mfuty = cVar2;
			monster[iParm1]._moldx = cVar1;
			monster[iParm1]._moldy = cVar2;
			M_CheckEFlag__Fi(iParm1);
			M_ClearSquares__Fi(iParm1);
			(&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (ushort)iParm1 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014bba4(int iParm1,uint uParm2,uchar uParm3);
 // line -1, offset 0x8014bba4
// function 'FUN_8014bba4' @0x8014BBA4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014bba4(int iParm1,uint uParm2,uchar uParm3)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	long v;
	int md;
	CMonster *pCVar4;
	int iVar5;
	int iVar6;
	
	if (-1 < (int)uParm2) {
		monster[iParm1].mWhoHit = (char)(1 << (uParm2 & 0x1f));
	}
	iVar5 = myplr;
	if (((int)uParm2 < 2) && (2 < iParm1)) {
		myplr = uParm2;
		AddPlrMonstExper__Filc
							((int)monster[iParm1].mLevel,(uint)monster[iParm1].mExp,monster[iParm1].mWhoHit);
	}
	myplr = iVar5;
	monstkills[(uint)(monster[iParm1].MType)->mtype] =
			 monstkills[(uint)(monster[iParm1].MType)->mtype] + 1;
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	monster[iParm1]._mhitpoints = 0;
	FUN_80147ab8(iParm1,(int)cVar1,(int)cVar2);
	v = GetRndSeed__Fv();
	v = ENG_random__Fl(v);
	SetRndSeed__Fl(v);
	uVar3 = QuestStatus__Fi(2);
	if ((uVar3 == '\0') || (monster[iParm1].mName != (uint)UniqMonst[0].mName)) {
		if (3 < iParm1) {
			SpawnItem__FiiiUc(iParm1,(int)monster[iParm1]._mx,(int)monster[iParm1]._my,uParm3);
		}
	}
	else {
		CreateTypeItem__FiiUciiUcUc
							((int)monster[iParm1]._mx + 1,(int)monster[iParm1]._my + 1,'\x01',4,0,1,0);
	}
	if (monster[iParm1]._uniqtype != '\0') {
		stream_stop__Fv();
	}
	if ((monster[iParm1].MType)->mtype == 'n') {
		FUN_8014b5c0(iParm1,1,uParm2);
	}
	else {
		PlayEffect__Fii(iParm1,2);
	}
	cVar1 = monster[iParm1]._moldx;
	iVar5 = (int)cVar1;
	cVar2 = monster[iParm1]._moldy;
	iVar6 = (int)cVar2;
	if ((int)uParm2 < 0) {
		md = (int)monster[iParm1]._mdir;
	}
	else {
		md = FUN_8014abac(iParm1);
	}
	pCVar4 = monster[iParm1].MType;
	monster[iParm1]._mdir = (char)md;
	NewMonsterAnim__FiR10AnimStructii(iParm1,pCVar4->Anims + 4,md,4);
	monster[iParm1]._mmode = '\x06';
	if (3 < iParm1) {
		monster[iParm1]._mxoff = '\0';
		monster[iParm1]._myoff = '\0';
	}
	monster[iParm1]._mVar1 = 0;
	monster[iParm1]._mx = cVar1;
	monster[iParm1]._my = cVar2;
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	M_CheckEFlag__Fi(iParm1);
	M_ClearSquares__Fi(iParm1);
	(&dung_map)[iVar5 * 0x70 + iVar6].dMonster = (short)iParm1 + 1;
	CheckQuestKill__FiUc(iParm1,uParm3);
	FUN_8015574c(iVar5,iVar6);
	if ((uint)(monster[iParm1].MType)->mtype - 0x2e < 4) {
		FUN_80142a04(iVar5,iVar6,0,0,0,0x3b,1,iParm1,(uint)monster[iParm1]._mint + 1,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014bec0(int iParm1,uint uParm2,uchar uParm3);
 // line -1, offset 0x8014bec0
// function 'FUN_8014bec0' @0x8014BEC0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014bec0(int iParm1,uint uParm2,uchar uParm3)

{
	char cVar1;
	char cVar2;
	long v;
	int md;
	CMonster *pCVar3;
	
	if (-1 < (int)uParm2) {
		monster[iParm1].mWhoHit = (char)(1 << (uParm2 & 0x1f));
	}
	monster[iParm1]._mhitpoints = 0;
	v = GetRndSeed__Fv();
	v = ENG_random__Fl(v);
	SetRndSeed__Fl(v);
	if (3 < iParm1) {
		SpawnItem__FiiiUc(iParm1,(int)monster[iParm1]._mx,(int)monster[iParm1]._my,uParm3);
	}
	cVar1 = monster[iParm1]._moldx;
	cVar2 = monster[iParm1]._moldy;
	if ((int)uParm2 < 0) {
		md = (int)monster[iParm1]._mdir;
	}
	else {
		md = FUN_8014abac(iParm1);
	}
	pCVar3 = monster[iParm1].MType;
	monster[iParm1]._mdir = (char)md;
	NewMonsterAnim__FiR10AnimStructii(iParm1,pCVar3->Anims + 4,md,4);
	monster[iParm1]._mmode = '\x06';
	if (3 < iParm1) {
		monster[iParm1]._mxoff = '\0';
		monster[iParm1]._myoff = '\0';
	}
	monster[iParm1]._mVar1 = 0;
	monster[iParm1]._mx = cVar1;
	monster[iParm1]._my = cVar2;
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	M_ClearSquares__Fi(iParm1);
	(&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dMonster = (short)iParm1 + 1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c010(uint uParm1,uint uParm2);
 // line -1, offset 0x8014c010
// function 'FUN_8014c010' @0x8014C010 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c010(uint uParm1,uint uParm2)

{
	uchar x;
	uchar y;
	char cVar1;
	char cVar2;
	CMonster *pCVar3;
	uint md;
	int iVar4;
	int iVar5;
	
	x = monster[uParm2]._mx;
	y = monster[uParm2]._my;
	if (monster[uParm1]._mmode == '\x0f') {
		MonstPartJump__Fi(uParm1);
	}
	delta_kill_monster__FiUcUcUc(uParm2,x,y,currlevel);
	NetSendCmdLocParam1__FUcUcUcUcUs('\0','$',x,y,uParm2 & 0xffff);
	monster[uParm2].mWhoHit = monster[uParm2].mWhoHit | (byte)(1 << (uParm1 & 0x1f));
	iVar4 = myplr;
	if ((int)uParm1 < 2) {
		myplr = uParm1;
		AddPlrMonstExper__Filc
							((int)monster[uParm2].mLevel,(uint)monster[uParm2].mExp,monster[uParm2].mWhoHit);
	}
	myplr = iVar4;
	monstkills[(uint)(monster[uParm2].MType)->mtype] =
			 monstkills[(uint)(monster[uParm2].MType)->mtype] + 1;
	monster[uParm2]._mhitpoints = 0;
	if (1 < (int)uParm2) {
		SpawnItem__FiiiUc(uParm2,(int)(char)x,(int)(char)y,'\x01');
	}
	if ((monster[uParm2].MType)->mtype == 'n') {
		FUN_8014b5c0(uParm2,1,0);
	}
	else {
		PlayEffect__Fii(uParm1,2);
	}
	PlayEffect__Fii(uParm2,2);
	md = (int)monster[uParm1]._mdir + 4U & 7;
	if ((monster[uParm2].MType)->mtype == 'm') {
		md = 0;
	}
	pCVar3 = monster[uParm2].MType;
	monster[uParm2]._mdir = (char)md;
	NewMonsterAnim__FiR10AnimStructii(uParm2,pCVar3->Anims + 4,md,4);
	cVar1 = monster[uParm2]._moldx;
	iVar4 = (int)cVar1;
	cVar2 = monster[uParm2]._moldy;
	iVar5 = (int)cVar2;
	monster[uParm2]._mmode = '\x06';
	monster[uParm2]._mxoff = '\0';
	monster[uParm2]._myoff = '\0';
	monster[uParm2]._mx = cVar1;
	monster[uParm2]._my = cVar2;
	monster[uParm2]._mfutx = cVar1;
	monster[uParm2]._mfuty = cVar2;
	monster[uParm2]._moldx = cVar1;
	monster[uParm2]._moldy = cVar2;
	M_CheckEFlag__Fi(uParm2);
	M_ClearSquares__Fi(uParm2);
	(&dung_map)[iVar4 * 0x70 + iVar5].dMonster = (short)uParm2 + 1;
	CheckQuestKill__FiUc(uParm2,'\x01');
	FUN_8015574c(iVar4,iVar5);
	if ((uint)(monster[uParm2].MType)->mtype - 0x2e < 4) {
		FUN_80142a04(iVar4,iVar5,0,0,0,0x3b,1,uParm2,(uint)monster[uParm2]._mint + 1,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c3d8(uint uParm1,uint uParm2);
 // line -1, offset 0x8014c3d8
// function 'FUN_8014c3d8' @0x8014C3D8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c3d8(uint uParm1,uint uParm2)

{
	uchar x;
	uchar y;
	uint local_20;
	uchar bCmd;
	
	x = monster[uParm1]._mx;
	y = monster[uParm1]._my;
	if (monster[uParm1]._mmode == '\x0f') {
		MonstPartJump__Fi(uParm1);
		FUN_80147ab8(uParm1,(int)(char)x,(int)(char)y);
	}
	delta_kill_monster__FiUcUcUc(uParm1,x,y,currlevel);
	local_20 = uParm1 & 0xffff;
	if (uParm1 == uParm2) {
		bCmd = 'W';
		local_20 = (uint)currlevel;
	}
	else {
		bCmd = '$';
	}
	NetSendCmdLocParam1__FUcUcUcUcUs('\0',bCmd,x,y,local_20);
	FUN_8014bba4(uParm1,uParm2,1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c4e0(int iParm1,int iParm2,int iParm3,undefined4 uParm4);
 // line -1, offset 0x8014c4e0
// function 'FUN_8014c4e0' @0x8014C4E0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c4e0(int iParm1,int iParm2,int iParm3,undefined4 uParm4)

{
	if ((monster[iParm1]._mhitpoints != 0) && (monster[iParm1]._mmode != '\x06')) {
		if ((&dung_map)[iParm2 * 0x70 + iParm3].dMonster == 0) {
			M_ClearSquares__Fi(iParm1);
			monster[iParm1]._mx = (char)iParm2;
			monster[iParm1]._my = (char)iParm3;
			monster[iParm1]._moldx = (char)iParm2;
			monster[iParm1]._moldy = (char)iParm3;
		}
		if (deltaload != '\0') {
			FUN_8014bec0(iParm1,uParm4,0);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c5f0(int iParm1,int iParm2,char cParm3);
 // line -1, offset 0x8014c5f0
// function 'FUN_8014c5f0' @0x8014C5F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c5f0(int iParm1,int iParm2,char cParm3)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	ushort uVar5;
	
	NewMonsterAnim__FiR10AnimStructii(iParm1,(monster[iParm1].MType)->Anims + 5,iParm2,5);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	cVar3 = monster[iParm1]._mx;
	cVar4 = monster[iParm1]._my;
	monster[iParm1]._mmode = '\b';
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar3;
	monster[iParm1]._moldy = cVar4;
	M_CheckEFlag__Fi(iParm1);
	uVar5 = monster[iParm1]._mFlags;
	monster[iParm1]._mdir = (char)iParm2;
	uVar5 = uVar5 & 0xfffe;
	monster[iParm1]._mFlags = uVar5;
	if (cParm3 != '\0') {
		cVar1 = monster[iParm1]._mAnimLen;
		monster[iParm1]._mFlags = uVar5 | 2;
		monster[iParm1]._mAnimFrame = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c74c(int iParm1,int iParm2,char cParm3);
 // line -1, offset 0x8014c74c
// function 'FUN_8014c74c' @0x8014C74C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c74c(int iParm1,int iParm2,char cParm3)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	
	NewMonsterAnim__FiR10AnimStructii(iParm1,(monster[iParm1].MType)->Anims + 5,iParm2,5);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	cVar3 = monster[iParm1]._mx;
	cVar4 = monster[iParm1]._my;
	monster[iParm1]._mmode = '\t';
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar3;
	monster[iParm1]._moldy = cVar4;
	M_CheckEFlag__Fi(iParm1);
	monster[iParm1]._mdir = (char)iParm2;
	if (cParm3 != '\0') {
		cVar1 = monster[iParm1]._mAnimLen;
		monster[iParm1]._mFlags = monster[iParm1]._mFlags | 2;
		monster[iParm1]._mAnimFrame = cVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c89c(int iParm1);
 // line -1, offset 0x8014c89c
// function 'FUN_8014c89c' @0x8014C89C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c89c(int iParm1)

{
	char cVar1;
	long lVar2;
	CMonster *pCVar3;
	
	pCVar3 = monster[iParm1].MType;
	monster[iParm1].Action = '\x05';
	cVar1 = pCVar3->Anims[5].Frames;
	monster[iParm1]._mFlags = monster[iParm1]._mFlags | 2;
	monster[iParm1]._mmode = '\x10';
	monster[iParm1]._mAnimFrame = cVar1;
	lVar2 = ENG_random__Fl(5);
	monster[iParm1]._mVar1 = (short)(monster[iParm1]._mmaxhp / ((lVar2 + 4) * 0x10));
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c928(int iParm1);
 // line -1, offset 0x8014c928
// function 'FUN_8014c928' @0x8014C928 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c928(int iParm1)

{
	int iVar1;
	int iVar2;
	
	iVar1 = (int)monster[iParm1]._myoff * 2;
	iVar2 = (((int)monster[iParm1]._mxoff + iVar1) * 100) / 0xca;
	iVar1 = ((iVar1 - (int)monster[iParm1]._mxoff) * 100) / 0xca;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 0x20;
		if (-1 < iVar1) {
			if (monster[iParm1]._mdir == '\x01') {
				iVar2 = 0x20 - iVar2;
			}
			goto LAB_8014ca00;
		}
	}
	else {
LAB_8014ca00:
		if (-1 < iVar1) {
			if (monster[iParm1]._mdir == '\x06') {
				iVar1 = 0x1f - iVar1;
			}
			goto LAB_8014ca38;
		}
	}
	iVar1 = iVar1 + 0x20;
LAB_8014ca38:
	ChangeLightOff__Fiii
						((uint)monster[iParm1].mlid,
						 (iVar2 >> 2) + ((int)LightList[(uint)monster[iParm1].mlid]._lx & 1U) * 8 + -8,
						 (iVar1 >> 2) + ((int)LightList[(uint)monster[iParm1].mlid]._ly & 1U) * 8 + -8);
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014ca90(int iParm1);
 // line -1, offset 0x8014ca90
// function 'FUN_8014ca90' @0x8014CA90 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014ca90(int iParm1)

{
	if ((monster[iParm1].MType)->mtype == 'm') {
		monster[iParm1].Action = '\x01';
	}
	else {
		monster[iParm1].Action = '\0';
	}
	monster[iParm1]._mVar2 = monster[iParm1]._mVar2 + 1;
	return 0;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014caf0(int iParm1);
 // line -1, offset 0x8014caf0
// function 'FUN_8014caf0' @0x8014CAF0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014caf0(int iParm1)

{
	char cVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	ushort uVar5;
	ushort uVar6;
	byte bVar7;
	undefined4 uVar8;
	
	if ((int)monster[iParm1]._mVar8 == (int)(monster[iParm1].MType)->Anims[1].Frames) {
		(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster = 0;
		cVar1 = monster[iParm1]._mx;
		cVar2 = *(char *)&monster[iParm1]._mVar1;
		bVar7 = monster[iParm1]._my + *(char *)&monster[iParm1]._mVar2;
		monster[iParm1]._my = bVar7;
		monster[iParm1]._mx = cVar1 + cVar2;
		*(short *)((int)&(&dung_map)[(int)monster[iParm1]._mx * 0x70].dMonster +
							((int)((uint)bVar7 << 0x18) >> 0x15)) = (short)iParm1 + 1;
		if (monster[iParm1]._uniqtype != '\0') {
			ChangeLightXY__Fiii((uint)monster[iParm1].mlid,(int)monster[iParm1]._mx,
													(int)monster[iParm1]._my);
		}
		uVar8 = 1;
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	else {
		if (monster[iParm1]._mAnimCnt == '\0') {
			monster[iParm1]._mVar8 = monster[iParm1]._mVar8 + 1;
			sVar3 = monster[iParm1]._mVar7;
			sVar4 = monster[iParm1]._myvel;
			monster[iParm1]._mVar6 = monster[iParm1]._mVar6 + monster[iParm1]._mxvel;
			uVar5 = monster[iParm1]._mVar6;
			monster[iParm1]._mVar7 = sVar3 + sVar4;
			uVar6 = monster[iParm1]._mVar7;
			monster[iParm1]._mxoff = (char)(uVar5 >> 4);
			monster[iParm1]._myoff = (char)(uVar6 >> 4);
		}
		uVar8 = 0;
	}
	if (monster[iParm1]._uniqtype != '\0') {
		FUN_8014c928(iParm1);
	}
	return uVar8;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014cd60(int iParm1);
 // line -1, offset 0x8014cd60
// function 'FUN_8014cd60' @0x8014CD60 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014cd60(int iParm1)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	ushort uVar4;
	undefined4 uVar5;
	
	if ((int)monster[iParm1]._mVar8 == (int)(monster[iParm1].MType)->Anims[1].Frames) {
		(&dung_map)[(int)monster[iParm1]._mVar1 * 0x70 + (int)monster[iParm1]._mVar2].dMonster = 0;
		if (monster[iParm1]._uniqtype != '\0') {
			ChangeLightXY__Fiii((uint)monster[iParm1].mlid,(int)monster[iParm1]._mx,
													(int)monster[iParm1]._my);
		}
		uVar5 = 1;
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	else {
		if (monster[iParm1]._mAnimCnt == '\0') {
			monster[iParm1]._mVar8 = monster[iParm1]._mVar8 + 1;
			sVar1 = monster[iParm1]._mVar7;
			sVar2 = monster[iParm1]._myvel;
			monster[iParm1]._mVar6 = monster[iParm1]._mVar6 + monster[iParm1]._mxvel;
			uVar3 = monster[iParm1]._mVar6;
			monster[iParm1]._mVar7 = sVar1 + sVar2;
			uVar4 = monster[iParm1]._mVar7;
			monster[iParm1]._mxoff = (char)(uVar3 >> 4);
			monster[iParm1]._myoff = (char)(uVar4 >> 4);
		}
		uVar5 = 0;
	}
	if (monster[iParm1]._uniqtype != '\0') {
		FUN_8014c928(iParm1);
	}
	return uVar5;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014cf4c(int iParm1);
 // line -1, offset 0x8014cf4c
// function 'FUN_8014cf4c' @0x8014CF4C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014cf4c(int iParm1)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	ushort uVar4;
	undefined4 uVar5;
	
	if ((int)monster[iParm1]._mVar8 == (int)(monster[iParm1].MType)->Anims[1].Frames) {
		(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster = 0;
		sVar2 = monster[iParm1]._mVar2;
		sVar1 = monster[iParm1]._mVar4;
		monster[iParm1]._mx = (char)monster[iParm1]._mVar1;
		monster[iParm1]._my = (char)sVar2;
		(&dung_map)[(int)sVar1 * 0x70 + (int)monster[iParm1]._mVar5].dFlags =
				 (&dung_map)[(int)sVar1 * 0x70 + (int)monster[iParm1]._mVar5].dFlags & 0xef;
		(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster =
				 (short)iParm1 + 1;
		if (monster[iParm1]._uniqtype != '\0') {
			ChangeLightXY__Fiii((uint)monster[iParm1].mlid,(int)monster[iParm1]._mx,
													(int)monster[iParm1]._my);
		}
		uVar5 = 1;
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	else {
		if (monster[iParm1]._mAnimCnt == '\0') {
			monster[iParm1]._mVar8 = monster[iParm1]._mVar8 + 1;
			sVar1 = monster[iParm1]._mVar7;
			sVar2 = monster[iParm1]._myvel;
			monster[iParm1]._mVar6 = monster[iParm1]._mVar6 + monster[iParm1]._mxvel;
			uVar3 = monster[iParm1]._mVar6;
			monster[iParm1]._mVar7 = sVar1 + sVar2;
			uVar4 = monster[iParm1]._mVar7;
			monster[iParm1]._mxoff = (char)(uVar3 >> 4);
			monster[iParm1]._myoff = (char)(uVar4 >> 4);
		}
		uVar5 = 0;
	}
	if (monster[iParm1]._uniqtype != '\0') {
		FUN_8014c928(iParm1);
	}
	return uVar5;
}



// decompiled code
// original method signature: 
// void FUN_8014d1f0(int param_1,int param_2,int param_3,int param_4,int param_5);
 // line -1, offset 0x8014d1f0
// function 'FUN_8014d1f0' @0x8014D1F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014d1f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
	long lVar1;
	uint uVar2;
	int iVar3;
	undefined auStack48 [8];
	
	if ((0 < monster[param_2]._mhitpoints >> 6) &&
		 (((monster[param_2].MType)->mtype != ' ' || (monster[param_2]._mgoal != '\x02')))) {
		lVar1 = ENG_random__Fl(100);
		if (monster[param_2]._mmode == '\x0f') {
			lVar1 = 0;
		}
		uVar2 = FUN_8015698c(param_2,auStack48);
		if (((uVar2 & 0xff) == 0) && (lVar1 < param_3)) {
			lVar1 = ENG_random__Fl((param_5 - param_4) + 1);
			monster[param_2]._mhitpoints = monster[param_2]._mhitpoints + (lVar1 + param_4) * -0x40;
			iVar3 = monster[param_2]._mhitpoints;
			monster[param_2]._mFlags = monster[param_2]._mFlags | 0x10;
			if (iVar3 >> 6 < 1) {
				if ((monster[param_1].MType)->mtype != 'm') {
					monster[param_1]._mFlags = monster[param_1]._mFlags & 0xffef;
				}
				if (monster[param_2]._mmode != '\x0f') {
					FUN_8014c010(param_1,param_2);
					return;
				}
				FUN_8014c010(param_1,param_2);
			}
			else {
				if (monster[param_2]._mmode != '\x0f') {
					FUN_8014b8e8(param_2,param_1);
					return;
				}
				FUN_8014b8e8(param_2,param_1);
			}
			monster[param_2]._mmode = '\x0f';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014d428(int iParm1,uint uParm2,int iParm3,int iParm4,int iParm5);
 // line -1, offset 0x8014d428
// function 'FUN_8014d428' @0x8014D428 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014d428(int iParm1,uint uParm2,int iParm3,int iParm4,int iParm5)

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
	
	ptrplr = &plr + uParm2;
	if ((monster[iParm1]._mFlags & 0x10) == 0) {
		cVar1 = monster[iParm1]._mx;
		cVar2 = monster[iParm1]._my;
		px = (int)(&plr)[uParm2]._px;
		py = (int)(&plr)[uParm2]._py;
		if (((0 < (&plr)[uParm2]._pHitPoints >> 6) && ((&plr)[uParm2]._pInvincible == '\0')) &&
			 (((&plr)[uParm2]._pSpellFlags & 1U) == 0)) {
			dam = abs((int)cVar1 - px);
			iVar5 = abs((int)cVar2 - py);
			if ((dam < 2) && (iVar5 < 2)) {
				lVar6 = ENG_random__Fl(100);
				iVar5 = (uint)(ushort)(&plr)[uParm2]._pDexterity << 0x10;
				dam = iVar5 >> 0x10;
				dam = (iParm3 - ((&plr)[uParm2]._pIAC + (&plr)[uParm2]._pIBonusAC +
												 (((dam / 5 + (dam >> 0x1f)) - (iVar5 >> 0x1f)) * 0x10000 >> 0x10) + -0x1e))
							+ ((int)monster[iParm1].mLevel - (int)(&plr)[uParm2]._pLevel) * 2;
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
					 (lVar9 = 100, (&plr)[uParm2]._pBlockFlag != '\0')) {
					lVar9 = ENG_random__Fl(100);
				}
				iVar8 = (&plr)[uParm2]._pBaseToBlk + (int)(&plr)[uParm2]._pDexterity +
								((int)monster[iParm1].mLevel - (int)(&plr)[uParm2]._pLevel) * -2;
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
						lVar6 = ENG_random__Fl(((iParm5 - iParm4) + 1) * 0x40);
						dam = lVar6 + iParm4 * 0x40 + (&plr)[uParm2]._pIGetHit * 0x40;
						if (dam < 0x40) {
							dam = 0x40;
						}
						iVar5 = (&plr)[uParm2]._pHPBase;
						(&plr)[uParm2]._pHitPoints = (&plr)[uParm2]._pHitPoints - dam;
						uVar7 = (&plr)[uParm2]._pIFlags;
						(&plr)[uParm2]._pHPBase = iVar5 - dam;
						if ((uVar7 & 0x4000000) != 0) {
							lVar6 = ENG_random__Fl(3);
							iVar5 = monster[iParm1]._mhitpoints + (lVar6 + 1) * -0x40;
							monster[iParm1]._mhitpoints = iVar5;
							if (iVar5 >> 6 < 1) {
								FUN_8014c3d8(iParm1,uParm2);
							}
							else {
								FUN_8014b2d8(iParm1,uParm2);
							}
						}
						if ((((monster[iParm1]._mFlags & 0x1000) == 0) &&
								((monster[iParm1].MType)->mtype == '2')) && (gbMaxPlayers != '\x01')) {
							monster[iParm1]._mhitpoints = monster[iParm1]._mhitpoints + dam;
						}
						if ((&plr)[uParm2]._pMaxHP < (&plr)[uParm2]._pHitPoints) {
							lVar6 = (&plr)[uParm2]._pMaxHPBase;
							(&plr)[uParm2]._pHitPoints = (&plr)[uParm2]._pMaxHP;
							(&plr)[uParm2]._pHPBase = lVar6;
						}
						if ((&plr)[uParm2]._pHitPoints >> 6 < 1) {
							StartPlrKill__FP12PlayerStructi(ptrplr,0);
						}
						else {
							StartPlrHit__FP12PlayerStructiUc(ptrplr,dam,'\0');
							if ((monster[iParm1]._mFlags & 0x80) != 0) {
								bVar3 = true;
								if ((&plr)[uParm2]._pmode != PM_GOTHIT) {
									StartPlrHit__FiiUc(uParm2,0,'\x01');
								}
								px = px + (int)(&offset_x)[(int)monster[iParm1]._mdir];
								py = py + (int)(&offset_y)[(int)monster[iParm1]._mdir];
								if (((FePlayerNo != 0) && (uVar7 = uParm2 ^ 1, (&plr)[uParm2].plractive != '\0')) &&
									 (((&plr)[uVar7].plractive != '\0' &&
										(uVar4 = ChkPlrOffsets__Fiiii
																			 (px * 8,py * 8,(&plr)[uVar7].WorldX,(&plr)[uVar7].WorldY),
										uVar4 == '\0')))) {
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
		FUN_8014d1f0(iParm1);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014d450(void);
 // line -1, offset 0x8014d450
// function 'FUN_8014d450' @0x8014D450 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014d450(void)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	int dam;
	int iVar5;
	long lVar6;
	int pnum;
	int in_v1;
	int iVar7;
	int iVar8;
	uint uVar9;
	long lVar10;
	PlayerStruct *ptrplr;
	int unaff_s2;
	uint pnum_00;
	int unaff_s5;
	int unaff_s6;
	int px;
	int py;
	int param_21;
	
	pnum = in_v1 * 0x100 + pnum_00 * 0x13d;
	iVar7 = pnum * 8;
	ptrplr = (PlayerStruct *)(&plr._pmode + pnum * 2);
	if ((monster[unaff_s2]._mFlags & 0x10) == 0) {
		cVar1 = monster[unaff_s2]._mx;
		cVar2 = monster[unaff_s2]._my;
		px = (int)(&plr._px)[pnum * 4];
		py = (int)(&plr._py)[pnum * 4];
		if (((0 < (&plr._pHitPoints)[pnum * 2] >> 6) && ((&plr._pInvincible)[iVar7] == '\0')) &&
			 (((&plr._pSpellFlags)[iVar7] & 1U) == 0)) {
			dam = abs((int)cVar1 - px);
			iVar5 = abs((int)cVar2 - py);
			if ((dam < 2) && (iVar5 < 2)) {
				lVar6 = ENG_random__Fl(100);
				iVar5 = (uint)(ushort)(&plr._pDexterity)[pnum * 4] << 0x10;
				dam = iVar5 >> 0x10;
				dam = (unaff_s6 -
							((&plr._pIAC)[pnum * 2] + (&plr._pIBonusAC)[pnum * 2] +
							 (((dam / 5 + (dam >> 0x1f)) - (iVar5 >> 0x1f)) * 0x10000 >> 0x10) + -0x1e)) +
							((int)monster[unaff_s2].mLevel - (int)(&plr._pLevel)[iVar7]) * 2;
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
				if (((ptrplr->_pmode == PM_STAND) || (lVar10 = 100, ptrplr->_pmode == PM_ATTACK)) &&
					 (lVar10 = 100, (&plr._pBlockFlag)[iVar7] != '\0')) {
					lVar10 = ENG_random__Fl(100);
				}
				iVar8 = (&plr._pBaseToBlk)[pnum * 2] + (int)(&plr._pDexterity)[pnum * 4] +
								((int)monster[unaff_s2].mLevel - (int)(&plr._pLevel)[iVar7]) * -2;
				iVar5 = iVar8;
				if (iVar8 < 0) {
					iVar5 = 0;
				}
				if (100 < iVar8) {
					iVar5 = 100;
				}
				if (lVar6 < dam) {
					if (lVar10 < iVar5) {
						pnum = GetDirection__Fiiii(px,py,(int)cVar1,(int)cVar2);
						StartPlrBlock__FP12PlayerStructi(ptrplr,pnum);
					}
					else {
						lVar6 = ENG_random__Fl(((param_21 - unaff_s5) + 1) * 0x40);
						dam = lVar6 + unaff_s5 * 0x40 + (&plr._pIGetHit)[pnum * 2] * 0x40;
						if (dam < 0x40) {
							dam = 0x40;
						}
						(&plr._pHitPoints)[pnum * 2] = (&plr._pHitPoints)[pnum * 2] - dam;
						(&plr._pHPBase)[pnum * 2] = (&plr._pHPBase)[pnum * 2] - dam;
						if (((&plr._pIFlags)[pnum * 2] & 0x4000000U) != 0) {
							lVar6 = ENG_random__Fl(3);
							iVar5 = monster[unaff_s2]._mhitpoints + (lVar6 + 1) * -0x40;
							monster[unaff_s2]._mhitpoints = iVar5;
							if (iVar5 >> 6 < 1) {
								FUN_8014c3d8();
							}
							else {
								FUN_8014b2d8();
							}
						}
						if ((((monster[unaff_s2]._mFlags & 0x1000) == 0) &&
								((monster[unaff_s2].MType)->mtype == '2')) && (gbMaxPlayers != '\x01')) {
							monster[unaff_s2]._mhitpoints = monster[unaff_s2]._mhitpoints + dam;
						}
						if ((&plr._pMaxHP)[pnum * 2] < (&plr._pHitPoints)[pnum * 2]) {
							(&plr._pHitPoints)[pnum * 2] = (&plr._pMaxHP)[pnum * 2];
							(&plr._pHPBase)[pnum * 2] = (&plr._pMaxHPBase)[pnum * 2];
						}
						if ((&plr._pHitPoints)[pnum * 2] >> 6 < 1) {
							StartPlrKill__FP12PlayerStructi(ptrplr,0);
						}
						else {
							StartPlrHit__FP12PlayerStructiUc(ptrplr,dam,'\0');
							if ((monster[unaff_s2]._mFlags & 0x80) != 0) {
								bVar3 = true;
								if ((&plr)[pnum_00]._pmode != PM_GOTHIT) {
									StartPlrHit__FiiUc(pnum_00,0,'\x01');
								}
								px = px + (int)(&offset_x)[(int)monster[unaff_s2]._mdir];
								py = py + (int)(&offset_y)[(int)monster[unaff_s2]._mdir];
								if (((FePlayerNo != 0) && (uVar9 = pnum_00 ^ 1, (&plr.plractive)[iVar7] != '\0')) &&
									 (((&plr)[uVar9].plractive != '\0' &&
										(uVar4 = ChkPlrOffsets__Fiiii
																			 (px * 8,py * 8,(&plr)[uVar9].WorldX,(&plr)[uVar9].WorldY),
										uVar4 == '\0')))) {
									bVar3 = false;
								}
								if ((bVar3) &&
									 (uVar4 = PosOkPlayer__FP12PlayerStructii(ptrplr,px,py), uVar4 != '\0')) {
									SetPlayerOld__FP12PlayerStruct(ptrplr);
									pnum = plrind__FP12PlayerStruct(ptrplr);
									WorldToOffset__Fiii(pnum,px * 8 | 4,py * 8 | 4);
								}
							}
						}
					}
				}
			}
		}
	}
	else {
		FUN_8014d1f0();
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_8014da3c(int iParm1);
 // line -1, offset 0x8014da3c
// function 'FUN_8014da3c' @0x8014DA3C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014da3c(int iParm1)

{
	bool bVar1;
	char cVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	
	uVar6 = (uint)monster[iParm1].mMinDamage;
	uVar4 = (uint)monster[iParm1].mMaxDamage;
	uVar5 = (uint)monster[iParm1].mHit;
	uVar3 = (uint)monster[iParm1]._menemy;
	if ((int)monster[iParm1]._mAnimFrame == (uint)(monster[iParm1].MData)->mAFNum) {
		FUN_8014d428(iParm1,uVar3,uVar5,uVar6,uVar4);
		if (monster[iParm1]._mAi != '\x18') {
			PlayEffect__Fii(iParm1,0);
		}
	}
	if (((uint)(monster[iParm1].MType)->mtype - 0x3c < 4) && (monster[iParm1]._mAnimFrame == '\t')) {
		FUN_8014d428(iParm1,uVar3,uVar5 + 10,uVar6 - 2,uVar4 - 2);
		PlayEffect__Fii(iParm1,0);
	}
	if (((uint)(monster[iParm1].MType)->mtype - 0x4c < 4) && (monster[iParm1]._mAnimFrame == '\r')) {
		FUN_8014d428(iParm1,uVar3,uVar5 - 0x14,uVar6 + 4,uVar4 + 4);
		PlayEffect__Fii(iParm1,0);
	}
	if (monster[iParm1]._mAi == '\x18') {
		cVar2 = monster[iParm1]._mAnimFrame;
		if (cVar2 != '\x01') goto LAB_8014dba0;
		PlayEffect__Fii(iParm1,0);
	}
	cVar2 = monster[iParm1]._mAnimFrame;
LAB_8014dba0:
	bVar1 = cVar2 == monster[iParm1]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// uint FUN_8014dbe8(int iParm1);
 // line -1, offset 0x8014dbe8
// function 'FUN_8014dbe8' @0x8014DBE8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014dbe8(int iParm1)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if ((int)monster[iParm1]._mAnimFrame == (uint)(monster[iParm1].MData)->mAFNum) {
		if (monster[iParm1]._mVar1 != -1) {
			iVar3 = 1;
			if (monster[iParm1]._mVar1 == 0x34) {
				iVar3 = 3;
			}
			iVar2 = 0;
			if (iVar3 != 0) {
				do {
					iVar2 = iVar2 + 1;
					FUN_80142a04((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
											 (uint)monster[iParm1]._menemyx,(uint)monster[iParm1]._menemyy,
											 (int)monster[iParm1]._mdir,(int)monster[iParm1]._mVar1,1,iParm1,
											 (int)monster[iParm1]._mVar2,0);
				} while (iVar2 < iVar3);
			}
		}
		PlayEffect__Fii(iParm1,0);
	}
	bVar1 = monster[iParm1]._mAnimFrame == monster[iParm1]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// uint FUN_8014dd70(int iParm1);
 // line -1, offset 0x8014dd70
// function 'FUN_8014dd70' @0x8014DD70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014dd70(int iParm1)

{
	bool bVar1;
	short sVar2;
	ushort uVar3;
	
	if (((int)monster[iParm1]._mAnimFrame == (uint)(monster[iParm1].MData)->mAFNum2) &&
		 (monster[iParm1]._mAnimCnt == '\0')) {
		FUN_80142a04((int)monster[iParm1]._mx,(int)monster[iParm1]._my,(uint)monster[iParm1]._menemyx,
								 (uint)monster[iParm1]._menemyy,(int)monster[iParm1]._mdir,
								 (int)monster[iParm1]._mVar1,1,iParm1,(int)monster[iParm1]._mVar3,0);
		PlayEffect__Fii(iParm1,3);
	}
	if ((monster[iParm1]._mAi == '\x1a') && (monster[iParm1]._mAnimFrame == '\x03')) {
		sVar2 = monster[iParm1]._mVar2 + 1;
		monster[iParm1]._mVar2 = sVar2;
		if (sVar2 == 1) {
			uVar3 = monster[iParm1]._mFlags | 4;
		}
		else {
			if (monster[iParm1]._mVar2 != 0xf) goto LAB_8014df18;
			uVar3 = monster[iParm1]._mFlags & 0xfffb;
		}
		monster[iParm1]._mFlags = uVar3;
	}
LAB_8014df18:
	bVar1 = monster[iParm1]._mAnimFrame == monster[iParm1]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// uint FUN_8014df78(int iParm1);
 // line -1, offset 0x8014df78
// function 'FUN_8014df78' @0x8014DF78 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014df78(int iParm1)

{
	bool bVar1;
	uint uVar2;
	
	uVar2 = SEXT14(monster[iParm1]._mAnimFrame);
	if (uVar2 == (uint)(monster[iParm1].MData)->mAFNum2) {
		FUN_8014d428(iParm1,(uint)monster[iParm1]._menemy,(uint)monster[iParm1].mHit2,
								 (uint)monster[iParm1].mMinDamage2,(uint)monster[iParm1].mMaxDamage2);
		uVar2 = SEXT14(monster[iParm1]._mAnimFrame);
	}
	bVar1 = uVar2 == (int)monster[iParm1]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014e054(int iParm1);
 // line -1, offset 0x8014e054
// function 'FUN_8014e054' @0x8014E054 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014e054(int iParm1)

{
	if ((monster[iParm1]._mFlags & 2) == 0) {
		if (monster[iParm1]._mAnimFrame != monster[iParm1]._mAnimLen) {
			return 0;
		}
	}
	else {
		if (monster[iParm1]._mAnimFrame != '\x01') {
			return 0;
		}
	}
	M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	monster[iParm1]._mFlags = monster[iParm1]._mFlags & 0xfffd;
	return 1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014e134(int iParm1);
 // line -1, offset 0x8014e134
// function 'FUN_8014e134' @0x8014E134 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014e134(int iParm1)

{
	ushort uVar1;
	
	if ((monster[iParm1]._mFlags & 2) == 0) {
		if (monster[iParm1]._mAnimFrame != monster[iParm1]._mAnimLen) {
			return 0;
		}
	}
	else {
		if (monster[iParm1]._mAnimFrame != '\x01') {
			return 0;
		}
	}
	if ((uint)(monster[iParm1].MType)->mtype - 0x48 < 4) {
		uVar1 = monster[iParm1]._mFlags & 0xfffd;
	}
	else {
		uVar1 = monster[iParm1]._mFlags & 0xfffd | 1;
	}
	monster[iParm1]._mFlags = uVar1;
	M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	return 1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014e260(int iParm1);
 // line -1, offset 0x8014e260
// function 'FUN_8014e260' @0x8014E260 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014e260(int iParm1)

{
	short sVar1;
	ushort uVar2;
	int iVar3;
	
	if (((monster[iParm1]._mFlags & 8) == 0) && (monster[iParm1]._mAnimFrame == '\x01')) {
		sVar1 = monster[iParm1]._mVar1;
		monster[iParm1]._mFlags = monster[iParm1]._mFlags & 0xfffd | 4;
		iVar3 = monster[iParm1]._mhitpoints + (int)sVar1;
		if (iVar3 < monster[iParm1]._mmaxhp) {
			monster[iParm1]._mhitpoints = iVar3;
		}
		else {
			uVar2 = monster[iParm1]._mFlags;
			monster[iParm1]._mhitpoints = monster[iParm1]._mmaxhp;
			monster[iParm1]._mmode = '\a';
			monster[iParm1]._mFlags = uVar2 & 0xfffb;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014e2fc(int iParm1);
 // line -1, offset 0x8014e2fc
// function 'FUN_8014e2fc' @0x8014E2FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014e2fc(int iParm1)

{
	char cVar1;
	uchar uVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = (int)monster[iParm1]._mx;
	iVar5 = (int)monster[iParm1]._my;
	uVar3 = monster[iParm1].mName;
	M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	monster[iParm1]._mgoal = '\a';
	uVar2 = effect_is_playing__Fi(alltext[monster[iParm1].mtalkmsg].sfxnr);
	if (uVar2 == '\0') {
		InitQTextMsg__Fi(monster[iParm1].mtalkmsg);
		if (uVar3 == (uint)UniqMonst[0].mName) {
			if (monster[iParm1].mtalkmsg == 0x90) {
				QuestStruct_ARRAY_800dda54[1]._qactive = '\x02';
				QuestStruct_ARRAY_800dda54[1]._qvar1 = '\x02';
				QuestStruct_ARRAY_800dda54[1]._qlog = '\x01';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x02');
				}
			}
			if ((monster[iParm1].mtalkmsg == 0x91) && ((monster[iParm1]._mFlags & 0x40) == 0)) {
				QuestStruct_ARRAY_800dda54[1]._qvar1 = '\x03';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x02');
				}
				SpawnItem__FiiiUc(iParm1,iVar4 + 1,iVar5 + 1,'\x01');
				monster[iParm1]._mFlags = monster[iParm1]._mFlags | 0x40;
			}
		}
		if (((uVar3 == (uint)UniqMonst[2].mName) && (monster[iParm1].mtalkmsg == 0x94)) &&
			 ((monster[iParm1]._mFlags & 0x40) == 0)) {
			QuestStruct_ARRAY_800dda54[2]._qactive = '\x02';
			QuestStruct_ARRAY_800dda54[2]._qlog = '\x01';
			QuestStruct_ARRAY_800dda54[2]._qvar2 = '\x02';
			if (deltaload == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x03');
				CreateTypeItem__FiiUciiUcUc(iVar4 + 1,iVar5 + 1,'\0',0,0x18,1,0);
			}
			monster[iParm1]._mFlags = monster[iParm1]._mFlags | 0x40;
		}
		if (((uVar3 == (uint)UniqMonst[3].mName) && (monster[iParm1].mtalkmsg == 0x14)) &&
			 ((monster[iParm1]._mFlags & 0x40) == 0)) {
			ObjChangeMap__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 2,setpc_y + (setpc_h >> 1) + -2
												 );
			cVar1 = TransVal;
			TransVal = '\t';
			DRLG_MRectTrans__Fiiii(setpc_x,setpc_y,setpc_x + (setpc_w >> 1) + 4,setpc_y + (setpc_h >> 1));
			QuestStruct_ARRAY_800dda90[3]._qvar1 = '\x02';
			if (QuestStruct_ARRAY_800dda90[3]._qactive == '\x01') {
				QuestStruct_ARRAY_800dda90[3]._qactive = '\x02';
			}
			TransVal = cVar1;
			monster[iParm1]._mFlags = monster[iParm1]._mFlags | 0x40;
			NetSendCmdQuest__FUcUc('\x01','\a');
		}
		if (uVar3 == (uint)UniqMonst[7].mName) {
			if (monster[iParm1].mtalkmsg == 0x51) {
				QuestStruct_ARRAY_800dda90[0]._qactive = '\x02';
				QuestStruct_ARRAY_800dda90[0]._qlog = '\x01';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x04');
				}
			}
			if ((monster[iParm1].mtalkmsg == 0x53) && ((monster[iParm1]._mFlags & 0x40) == 0)) {
				SpawnUnique__Fiii(6,iVar4 + 1,iVar5 + 1);
				monster[iParm1]._mFlags = monster[iParm1]._mFlags | 0x40;
			}
		}
		if ((uVar3 == (uint)UniqMonst[8].mName) &&
			 (QuestStruct_ARRAY_800dda90[7]._qvar1 = '\x02', deltaload == '\0')) {
			NetSendCmdQuest__FUcUc('\x01','\b');
		}
		if ((uVar3 == (uint)UniqMonst[4].mName) && (gbMaxPlayers != '\x01')) {
			QuestStruct_800ddb6c._qvar1 = '\x06';
			if (deltaload == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x0f');
			}
			monster[iParm1]._mgoal = '\x01';
			monster[iParm1]._msquelch = -1;
			monster[iParm1].mtalkmsg = 0;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void FUN_8014e8a0(int iParm1);
 // line -1, offset 0x8014e8a0
// function 'FUN_8014e8a0' @0x8014E8A0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014e8a0(int iParm1)

{
	byte bVar1;
	byte bVar2;
	bool bVar3;
	uchar uVar4;
	char cVar5;
	long lVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	uint y;
	int iVar10;
	uint uVar11;
	uint x;
	uint uVar12;
	
	bVar3 = false;
	uVar12 = 0;
	uVar11 = 0;
	if (monster[iParm1]._mmode != '\x0f') {
		bVar1 = monster[iParm1]._menemyx;
		bVar2 = monster[iParm1]._menemyy;
		lVar6 = ENG_random__Fl(2);
		iVar7 = lVar6 * 2 + -1;
		lVar6 = ENG_random__Fl(2);
		iVar8 = lVar6 * 2 + -1;
		iVar10 = -1;
		x = (uint)bVar1 - iVar7;
		do {
			iVar9 = -1;
			if (!bVar3) {
				y = (uint)bVar2 - iVar8;
				do {
					if (((((iVar10 != 0) || (iVar9 != 0)) && (uVar11 = x, uVar12 = y, y < 0x62)) &&
							((uVar11 = x, uVar12 = y, x < 0x62 &&
							 (uVar11 = x, uVar12 = y, x != (int)monster[iParm1]._mx)))) &&
						 (uVar11 = x, uVar12 = y, y != (int)monster[iParm1]._my)) {
						uVar4 = PosOkMonst__Fiii(iParm1,x,y);
						uVar11 = x;
						uVar12 = y;
						if (uVar4 != '\0') {
							bVar3 = true;
							uVar11 = x;
							uVar12 = y;
						}
					}
					iVar9 = iVar9 + 1;
					y = y + iVar8;
				} while ((iVar9 < 1) && (!bVar3));
			}
			iVar10 = iVar10 + 1;
			x = x + iVar7;
		} while ((iVar10 < 2) && (!bVar3));
		if (bVar3) {
			M_ClearSquares__Fi(iParm1);
			(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster = 0;
			(&dung_map)[uVar11 * 0x70 + uVar12].dMonster = (short)iParm1 + 1;
			monster[iParm1]._moldx = (char)uVar11;
			monster[iParm1]._moldy = (char)uVar12;
			cVar5 = FUN_8014abac(iParm1);
			monster[iParm1]._mdir = cVar5;
			M_CheckEFlag__Fi(iParm1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_8014eab4(int iParm1);
 // line -1, offset 0x8014eab4
// function 'FUN_8014eab4' @0x8014EAB4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014eab4(int iParm1)

{
	bool bVar1;
	
	bVar1 = monster[iParm1]._mAnimFrame == monster[iParm1]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// void FUN_8014eb1c(int iParm1);
 // line -1, offset 0x8014eb1c
// function 'FUN_8014eb1c' @0x8014EB1C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014eb1c(int iParm1)

{
	char *pszMovie;
	
	user_start = (void *)0x0;
	if ((&plr)[iParm1]._pClass == '\0') {
		pszMovie = "DIABVIC3.MOV";
	}
	else {
		pszMovie = "DIABVIC2.MOV";
		if ((&plr)[iParm1]._pClass == '\x02') {
			pszMovie = "DIABVIC1.MOV";
		}
	}
	myplr = iParm1;
	play_movie(pszMovie);
	music_stop__Fv();
	user_start = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014ebc4(char cParm1);
 // line -1, offset 0x8014ebc4
// function 'FUN_8014ebc4' @0x8014EBC4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ebc4(char cParm1)

{
	uchar uVar1;
	uint uVar2;
	long *plVar3;
	undefined *puVar4;
	long *plVar5;
	int n;
	
	gbDoEnding = cParm1 + '\x01';
	gbRunGame = '\0';
	deathflag = '\0';
	uVar2 = (&plr)[myplr].pDiabloKillLevel;
	if ((&plr)[myplr].pDiabloKillLevel < gnDifficulty + 1U) {
		uVar2 = gnDifficulty + 1U;
	}
	(&plr)[myplr].pDiabloKillLevel = uVar2;
	n = 0;
	plVar3 = &plr._pMana;
	plVar5 = &plr._pHitPoints;
	puVar4 = (undefined *)0x0;
	do {
		(&plr._pInvincible)[(int)puVar4] = '\x01';
		uVar1 = gbMaxPlayers;
		*(undefined4 *)((int)&plr._pmode + (int)puVar4) = 0xb;
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
// undefined4 FUN_8014ed0c(int iParm1);
 // line -1, offset 0x8014ed0c
// function 'FUN_8014ed0c' @0x8014ED0C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014ed0c(int iParm1)

{
	uchar uVar1;
	int dx;
	int dy;
	
	dx = (int)monster[iParm1]._mx;
	monster[iParm1]._mVar1 = monster[iParm1]._mVar1 + 1;
	dy = (int)monster[iParm1]._my;
	uVar1 = (monster[iParm1].MType)->mtype;
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
		if (monster[iParm1]._mVar1 == 0x8c) {
			gbMaxPlayers = '\x01';
			FUN_8014ebc4((int)monster[iParm1]._mVar8);
		}
	}
	else {
		if (monster[iParm1]._mAnimFrame == monster[iParm1]._mAnimLen) {
			if (uVar1 != 'm') {
				AddDead__Fiici(dx,dy,(monster[iParm1].MType)->mdeadval,(int)monster[iParm1]._mdir);
			}
			(&dung_map)[dx * 0x70 + dy].dMonster = 0;
			monster[iParm1]._mDelFlag = '\x01';
			M_UpdateLeader__Fi(iParm1);
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// uint FUN_8014eed0(int iParm1);
 // line -1, offset 0x8014eed0
// function 'FUN_8014eed0' @0x8014EED0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014eed0(int iParm1)

{
	bool bVar1;
	uint uVar2;
	
	uVar2 = SEXT14(monster[iParm1]._mAnimFrame);
	if (uVar2 == (uint)(monster[iParm1].MData)->mAFNum2) {
		PlayEffect__Fii(iParm1,3);
		uVar2 = SEXT14(monster[iParm1]._mAnimFrame);
	}
	bVar1 = uVar2 == (int)monster[iParm1]._mAnimLen;
	if (bVar1) {
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// uint FUN_8014ef7c(int iParm1);
 // line -1, offset 0x8014ef7c
// function 'FUN_8014ef7c' @0x8014EF7C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014ef7c(int iParm1)

{
	char cVar1;
	short sVar2;
	
	FUN_8014abac();
	monster[iParm1].Action = '\0';
	M_Enemy__Fi(iParm1);
	if ((monster[iParm1]._mAi == '\x1c') && (8 < (ushort)monster[iParm1]._mVar2)) {
		monster[iParm1]._mVar2 = 8;
	}
	sVar2 = monster[iParm1]._mVar2 + -1;
	monster[iParm1]._mVar2 = sVar2;
	if (sVar2 == -1) {
		cVar1 = monster[iParm1]._mAnimFrame;
		M_StartStand__Fii(iParm1,(int)monster[iParm1]._mdir);
		monster[iParm1]._mAnimFrame = cVar1;
	}
	return (uint)(sVar2 == -1);
}



// decompiled code
// original method signature: 
// undefined4 FUN_8014f090(int iParm1);
 // line -1, offset 0x8014f090
// function 'FUN_8014f090' @0x8014F090 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8014f090(int iParm1)

{
	if (monster[iParm1]._mhitpoints == 0) {
		(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster = 0;
		monster[iParm1]._mDelFlag = '\x01';
	}
	return 0;
}



// decompiled code
// original method signature: 
// void FUN_8014f10c(int iParm1,undefined4 uParm2);
 // line -1, offset 0x8014f10c
// function 'FUN_8014f10c' @0x8014F10C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014f10c(int iParm1,undefined4 uParm2)

{
	int iVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	undefined4 local_10;
	undefined4 local_c;
	
	iVar1 = (int)(monster[iParm1].MType)->Anims[1].Frames + -1;
	switch(uParm2) {
	case 0:
		iVar2 = 0;
		uVar4 = 1;
		iVar3 = (&INT_801051f8)[iVar1 * 3];
		local_10 = 1;
		local_c = 0;
		break;
	case 1:
		uVar4 = 0;
		iVar3 = (&MWVel)[iVar1 * 3];
		local_10 = 1;
		local_c = 1;
		iVar2 = -(&INT_801051f8)[iVar1 * 3];
		break;
	case 2:
		iVar3 = 0;
		uVar4 = 0xffffffff;
		local_10 = 1;
		local_c = 2;
		iVar2 = -INT_ARRAY_801051fc[iVar1 * 3];
		break;
	case 3:
		uVar4 = 0xffffffff;
		iVar3 = (&MWVel)[iVar1 * 3];
		local_10 = 0;
		local_c = 3;
		iVar2 = -(&INT_801051f8)[iVar1 * 3];
		goto LAB_8014f320;
	case 4:
		iVar2 = 0;
		uVar4 = 0xffffffff;
		iVar3 = (&INT_801051f8)[iVar1 * 3];
		local_10 = 0xffffffff;
		local_c = 4;
		goto LAB_8014f320;
	case 5:
		uVar4 = 0;
		iVar2 = (&INT_801051f8)[iVar1 * 3];
		iVar3 = (&MWVel)[iVar1 * 3];
		local_10 = 0xffffffff;
		local_c = 5;
LAB_8014f320:
		iVar3 = -iVar3;
		break;
	case 6:
		iVar3 = 0;
		uVar4 = 1;
		iVar2 = INT_ARRAY_801051fc[iVar1 * 3];
		local_10 = 0xffffffff;
		local_c = 6;
		break;
	case 7:
		uVar4 = 1;
		iVar2 = (&INT_801051f8)[iVar1 * 3];
		iVar3 = (&MWVel)[iVar1 * 3];
		local_10 = 0;
		local_c = 7;
		break;
	default:
		return;
	}
	FUN_8015711c(iParm1,iVar2,iVar3,uVar4,local_10,local_c);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014f33c(uint uParm1);
 // line -1, offset 0x8014f33c
// function 'FUN_8014f33c' @0x8014F33C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014f33c(uint uParm1)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	short *psVar8;
	uint uVar9;
	
	cVar1 = monster[uParm1]._mx;
	cVar2 = monster[uParm1]._my;
	uVar9 = 0;
	if (monster[uParm1].leaderflag == '\0') goto LAB_8014f4c0;
	uVar9 = (uint)monster[uParm1].leader;
	uVar5 = FUN_801551f0(&LAB_801551d0,(int)cVar1,(int)cVar2,(int)monster[uVar9]._mfutx,
											 (int)monster[uVar9]._mfuty);
	if ((uVar5 & 0xff) == 0) {
		if (monster[uParm1].leaderflag != '\x01') goto LAB_8014f4c0;
		monster[uVar9].packsize = monster[uVar9].packsize + -1;
		uVar4 = '\x02';
	}
	else {
		if (monster[uParm1].leaderflag != '\x02') goto LAB_8014f4c0;
		bVar3 = false;
		iVar7 = abs((int)cVar1 - (int)monster[uVar9]._mfutx);
		if (iVar7 < 4) {
			iVar7 = abs((int)cVar2 - (int)monster[uVar9]._mfuty);
			bVar3 = iVar7 < 4;
		}
		if (!bVar3) goto LAB_8014f4c0;
		monster[uVar9].packsize = monster[uVar9].packsize + '\x01';
		uVar4 = '\x01';
	}
	monster[uParm1].leaderflag = uVar4;
LAB_8014f4c0:
	if (monster[uParm1].leaderflag == '\x01') {
		if (monster[uVar9]._msquelch < monster[uParm1]._msquelch) {
			monster[uVar9]._lastx = cVar1;
			monster[uVar9]._lasty = cVar2;
			monster[uVar9]._msquelch = monster[uParm1]._msquelch + -1;
		}
		if ((monster[uVar9]._mAi == '\f') && ((monster[uVar9]._mFlags & 4) != 0)) {
			monster[uVar9]._mFlags = monster[uVar9]._mFlags & 0xfffb;
			monster[uVar9]._mmode = '\a';
		}
	}
	else {
		if (((monster[uParm1]._uniqtype != 0) &&
				((UniqMonst[(uint)monster[uParm1]._uniqtype - 1].mUnqAttr & 2) != 0)) &&
			 (iVar7 = 0, 0 < iGp00001b4c)) {
			psVar8 = &monstactive;
			do {
				iVar6 = (int)*psVar8;
				if ((monster[iVar6].leaderflag == '\x01') && ((uint)monster[iVar6].leader == uParm1)) {
					if (monster[iVar6]._msquelch < monster[uParm1]._msquelch) {
						monster[iVar6]._lastx = cVar1;
						monster[iVar6]._lasty = cVar2;
						monster[iVar6]._msquelch = monster[uParm1]._msquelch + -1;
					}
					if ((monster[iVar6]._mAi == '\f') && ((monster[iVar6]._mFlags & 4) != 0)) {
						monster[iVar6]._mFlags = monster[iVar6]._mFlags & 0xfffb;
						monster[iVar6]._mmode = '\a';
					}
				}
				iVar7 = iVar7 + 1;
				psVar8 = psVar8 + 1;
			} while (iVar7 < iGp00001b4c);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_8014f750(undefined4 uParm1,uint uParm2);
 // line -1, offset 0x8014f750
// function 'FUN_8014f750' @0x8014F750 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8014f750(undefined4 uParm1,uint uParm2)

{
	bool bVar1;
	uint uVar2;
	long lVar3;
	uint uVar4;
	int iVar5;
	uint uVar6;
	
	uVar2 = FUN_80154fac();
	lVar3 = ENG_random__Fl(2);
	if (lVar3 == 0) {
		uVar6 = uParm2;
		if ((uVar2 & 0xff) == 0) {
			uVar6 = uParm2 + 1 & 7;
			uVar2 = FUN_80154fac(uParm1,uVar6);
			uVar4 = uParm2 - 1;
			if ((uVar2 & 0xff) == 0) goto LAB_8014f7ec;
		}
LAB_8014f804:
		bVar1 = true;
	}
	else {
		uVar6 = uParm2;
		if ((uVar2 & 0xff) != 0) goto LAB_8014f804;
		uVar6 = uParm2 - 1 & 7;
		uVar2 = FUN_80154fac(uParm1,uVar6);
		uVar4 = uParm2 + 1;
		if ((uVar2 & 0xff) != 0) goto LAB_8014f804;
LAB_8014f7ec:
		uVar6 = uVar4 & 7;
		uVar2 = FUN_80154fac(uParm1,uVar6);
		bVar1 = false;
		if ((uVar2 & 0xff) != 0) goto LAB_8014f804;
	}
	lVar3 = ENG_random__Fl(2);
	if (lVar3 == 0) {
		if (!bVar1) {
			uVar6 = (uParm2 - 1 & 7) - 1 & 7;
			uVar2 = FUN_80154fac(uParm1,uVar6);
			if ((uVar2 & 0xff) == 0) {
				uVar6 = (uParm2 + 1 & 7) + 1;
				goto LAB_8014f890;
			}
		}
	}
	else {
		if (!bVar1) {
			uVar6 = (uParm2 + 1 & 7) + 1 & 7;
			uVar2 = FUN_80154fac(uParm1,uVar6);
			if ((uVar2 & 0xff) == 0) {
				uVar6 = (uParm2 - 1 & 7) - 1;
LAB_8014f890:
				uVar6 = uVar6 & 7;
				uVar2 = FUN_80154fac(uParm1,uVar6);
				iVar5 = 0;
				if ((uVar2 & 0xff) == 0) goto LAB_8014f8b4;
			}
		}
	}
	iVar5 = 1;
LAB_8014f8b4:
	if (iVar5 != 0) {
		FUN_8014f10c(uParm1,uVar6);
	}
	return iVar5;
}



// decompiled code
// original method signature: 
// int FUN_8014f8f0(undefined4 uParm1,uint uParm2);
 // line -1, offset 0x8014f8f0
// function 'FUN_8014f8f0' @0x8014F8F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8014f8f0(undefined4 uParm1,uint uParm2)

{
	uint uVar1;
	long lVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	
	uVar1 = FUN_80154fac();
	lVar2 = ENG_random__Fl(2);
	if (lVar2 == 0) {
		if ((uVar1 & 0xff) == 0) {
			uVar5 = uParm2 + 1 & 7;
			uVar3 = FUN_80154fac(uParm1,uVar5);
			uVar1 = uParm2 - 1;
			uParm2 = uVar5;
			goto joined_r0x8014f980;
		}
	}
	else {
		if ((uVar1 & 0xff) == 0) {
			uVar5 = uParm2 - 1 & 7;
			uVar3 = FUN_80154fac(uParm1,uVar5);
			uVar1 = uParm2 + 1;
			uParm2 = uVar5;
joined_r0x8014f980:
			if ((uVar3 & 0xff) == 0) {
				uParm2 = uVar1 & 7;
				uVar1 = FUN_80154fac(uParm1,uParm2);
				iVar4 = 0;
				if ((uVar1 & 0xff) == 0) goto LAB_8014f9ac;
			}
		}
	}
	iVar4 = 1;
LAB_8014f9ac:
	if (iVar4 != 0) {
		FUN_8014f10c(uParm1,uParm2);
	}
	return iVar4;
}



// decompiled code
// original method signature: 
// uint FUN_8014f9e8(undefined4 uParm1,undefined4 uParm2);
 // line -1, offset 0x8014f9e8
// function 'FUN_8014f9e8' @0x8014F9E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014f9e8(undefined4 uParm1,undefined4 uParm2)

{
	uint uVar1;
	
	uVar1 = FUN_80154fac();
	if ((uVar1 & 0xff) != 0) {
		FUN_8014f10c(uParm1,uParm2);
	}
	return uVar1 & 0xff;
}



// decompiled code
// original method signature: 
// uint FUN_8014fa3c(undefined4 uParm1,int iParm2,uint *puParm3);
 // line -1, offset 0x8014fa3c
// function 'FUN_8014fa3c' @0x8014FA3C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8014fa3c(undefined4 uParm1,int iParm2,uint *puParm3)

{
	bool bVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	uint uVar6;
	
	if (*puParm3 == 0) {
		uVar2 = (iParm2 + 1U & 7) + 1;
	}
	else {
		uVar2 = (iParm2 - 1U & 7) - 1;
	}
	uVar2 = uVar2 & 7;
	uVar3 = FUN_80154fac(uParm1,uVar2);
	uVar6 = uVar2;
	if ((uVar3 & 0xff) == 0) {
		uVar3 = 0;
		if (*puParm3 == 0) {
			uVar6 = uVar2 - 1 & 7;
			uVar4 = FUN_80154fac(uParm1,uVar6);
			uVar5 = uVar6 - 1;
			if ((uVar4 & 0xff) == 0) goto LAB_8014fb0c;
LAB_8014fb24:
			uVar3 = 1;
			bVar1 = true;
		}
		else {
			uVar6 = uVar2 + 1 & 7;
			uVar4 = FUN_80154fac(uParm1,uVar6);
			uVar5 = uVar6 + 1;
			if ((uVar4 & 0xff) != 0) goto LAB_8014fb24;
LAB_8014fb0c:
			uVar6 = uVar5 & 7;
			uVar4 = FUN_80154fac(uParm1,uVar6);
			bVar1 = false;
			if ((uVar4 & 0xff) != 0) goto LAB_8014fb24;
		}
		if (!bVar1) {
			*puParm3 = (uint)(*puParm3 == 0);
			uVar3 = FUN_8014f750(uParm1,uVar2 + 4 & 7);
			goto LAB_8014fb64;
		}
	}
	FUN_8014f10c(uParm1,uVar6);
LAB_8014fb64:
	return uVar3 & 0xff;
}



// decompiled code
// original method signature: 
// void FUN_8014fb88(int iParm1);
 // line -1, offset 0x8014fb88
// function 'FUN_8014fb88' @0x8014FB88 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014fb88(int iParm1)

{
	bool bVar1;
	long lVar2;
	int iVar3;
	undefined4 uVar4;
	int __x;
	int __x_00;
	long lVar5;
	
	if (monster[iParm1]._mmode == '\0') {
		if (((&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dFlags & 4U) != 0)
		{
			bVar1 = false;
			lVar5 = (long)monster[iParm1]._mdir;
			__x = (int)monster[iParm1]._mx - (uint)monster[iParm1]._menemyx;
			__x_00 = (int)monster[iParm1]._my - (uint)monster[iParm1]._menemyy;
			lVar2 = ENG_random__Fl(100);
			iVar3 = abs(__x);
			if (iVar3 < 2) {
				iVar3 = abs(__x_00);
				bVar1 = iVar3 < 2;
			}
			if (bVar1) {
				if (lVar2 < (int)((uint)monster[iParm1]._mint * 2 + 10)) {
					FUN_8015702c(iParm1);
				}
			}
			else {
				if (lVar2 < (int)((uint)monster[iParm1]._mint * 2 + 10)) {
					iVar3 = abs(__x);
					bVar1 = false;
					if (iVar3 < (int)((uint)monster[iParm1]._mint * 2 + 4)) {
						iVar3 = abs(__x_00);
						bVar1 = iVar3 < (int)((uint)monster[iParm1]._mint * 2 + 4);
					}
					if (bVar1) {
						uVar4 = FUN_8014abac(iParm1);
						FUN_8014f750(iParm1,uVar4);
					}
					else {
						lVar2 = ENG_random__Fl(100);
						if (lVar2 < (int)((uint)monster[iParm1]._mint * 2 + 0x14)) {
							lVar5 = ENG_random__Fl(8);
						}
						FUN_8014f9e8(iParm1,lVar5);
					}
				}
			}
			if (monster[iParm1]._mmode == '\0') {
				monster[iParm1].Action = '\0';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014fd88(int iParm1);
 // line -1, offset 0x8014fd88
// function 'FUN_8014fd88' @0x8014FD88 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014fd88(int iParm1)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	long lVar8;
	
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	bVar5 = false;
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	bVar3 = monster[iParm1]._menemyx;
	bVar4 = monster[iParm1]._menemyy;
	iVar6 = GetDirection__Fiiii((int)cVar1,(int)cVar2,(int)monster[iParm1]._lastx,
															(int)monster[iParm1]._lasty);
	monster[iParm1]._mdir = (char)iVar6;
	iVar7 = abs((int)cVar1 - (uint)bVar3);
	if (iVar7 < 2) {
		iVar7 = abs((int)cVar2 - (uint)bVar4);
		bVar5 = iVar7 < 2;
	}
	if (bVar5) {
		if ((monster[iParm1]._mVar1 == 0xd) ||
			 (lVar8 = ENG_random__Fl(100), lVar8 < (int)((uint)monster[iParm1]._mint * 2 + 0x14))) {
			FUN_8015702c(iParm1);
			goto LAB_8014ff00;
		}
		iVar6 = ENG_random__Fl(10);
		iVar7 = (uint)monster[iParm1]._mint * 2 + -10;
	}
	else {
		if ((monster[iParm1]._mVar1 == 0xd) ||
			 (lVar8 = ENG_random__Fl(100), (int)((uint)monster[iParm1]._mint * -4 + 0x23) <= lVar8)) {
			FUN_8014f750(iParm1,iVar6);
			goto LAB_8014ff00;
		}
		iVar6 = ENG_random__Fl(10);
		iVar7 = (uint)monster[iParm1]._mint * 2 + -0xf;
	}
	FUN_8014ac10(iParm1,iVar6 - iVar7);
LAB_8014ff00:
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014ff38(int iParm1);
 // line -1, offset 0x8014ff38
// function 'FUN_8014ff38' @0x8014FF38 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014ff38(int iParm1)

{
	uchar uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	long lVar5;
	uint uVar6;
	short sVar7;
	uint uVar8;
	int __x;
	uint uVar9;
	int __x_00;
	undefined4 local_30;
	undefined local_2c;
	undefined local_2b;
	
	local_30 = DAT_8011c2b8;
	local_2c = DAT_8011c2bc;
	local_2b = DAT_8011c2bd;
	uVar1 = monster[iParm1]._menemy;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	bVar2 = false;
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	uVar8 = (uint)monster[iParm1]._menemyx;
	uVar9 = (uint)monster[iParm1]._menemyy;
	__x = (int)monster[iParm1]._mx - uVar8;
	__x_00 = (int)monster[iParm1]._my - uVar9;
	iVar3 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
															(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
	monster[iParm1]._mdir = (char)iVar3;
	iVar4 = abs(__x);
	if (iVar4 < 2) {
		iVar4 = abs(__x_00);
		bVar2 = iVar4 < 2;
	}
	if (bVar2) {
		if (((uint)(ushort)monster[iParm1]._mVar1 - 0xd < 2) ||
			 (lVar5 = ENG_random__Fl(100), lVar5 < (int)((uint)monster[iParm1]._mint + 0x14))) {
			FUN_8015702c(iParm1);
			goto LAB_801502ec;
		}
		iVar4 = ENG_random__Fl(10);
		iVar3 = (uint)monster[iParm1]._mint - 10;
	}
	else {
		bVar2 = false;
		iVar4 = abs(__x);
		if ((iVar4 < 3) && (iVar4 = abs(__x_00), iVar4 < 3)) {
			uVar6 = FUN_801554b8(PosOkMonst__Fiii,iParm1,(int)monster[iParm1]._mx,(int)monster[iParm1]._my
													 ,uVar8,uVar9);
			bVar2 = (uVar6 & 0xff) != 0;
		}
		if (bVar2) {
			sVar7 = monster[iParm1]._mVar1;
			if (sVar7 != 0xe) {
				iVar4 = FUN_80142a04((int)monster[iParm1]._mx,(int)monster[iParm1]._my,uVar8,uVar9,iVar3,
														 0x14,(int)(char)uVar1,iParm1,0,0);
				if (iVar4 != -1) {
					PlayEffect__Fii(iParm1,0);
					(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster =
							 ~(ushort)iParm1;
					monster[iParm1]._mmode = '\x0e';
				}
				goto LAB_801502ec;
			}
		}
		else {
			sVar7 = monster[iParm1]._mVar1;
		}
		if ((sVar7 == 0xd) ||
			 (lVar5 = ENG_random__Fl(100), (int)((uint)monster[iParm1]._mint * -2 + 0x23) <= lVar5)) {
			iVar3 = iVar3 + (int)*(char *)((int)&local_30 + monster[iParm1]._mgoalvar1);
			if (iVar3 < 0) {
				iVar3 = iVar3 + 8;
			}
			else {
				if (7 < iVar3) {
					iVar3 = iVar3 + -8;
				}
			}
			iVar4 = monster[iParm1]._mgoalvar1 + 1;
			monster[iParm1]._mgoalvar1 = iVar4;
			if (5 < iVar4) {
				monster[iParm1]._mgoalvar1 = 0;
			}
			iVar4 = iVar3 - monster[iParm1]._mgoalvar2;
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
					iVar3 = monster[iParm1]._mgoalvar2;
					iVar4 = iVar3 + 1;
					if (iVar4 < 0) {
						iVar4 = iVar3 + 9;
					}
					else {
						if (7 < iVar4) {
							iVar4 = iVar3 + -7;
						}
					}
				}
				else {
					if (iVar4 == 4) {
						monster[iParm1]._mgoalvar2 = iVar3;
						goto LAB_801502c8;
					}
					iVar3 = monster[iParm1]._mgoalvar2;
					iVar4 = iVar3 + -1;
					if (iVar4 < 0) {
						iVar4 = iVar3 + 7;
					}
					else {
						if (7 < iVar4) {
							iVar4 = iVar3 + -9;
						}
					}
				}
				monster[iParm1]._mgoalvar2 = iVar4;
			}
LAB_801502c8:
			uVar8 = FUN_8014f9e8(iParm1,monster[iParm1]._mgoalvar2);
			if ((uVar8 & 0xff) == 0) {
				FUN_8014f8f0(iParm1,(int)monster[iParm1]._mdir);
			}
			goto LAB_801502ec;
		}
		iVar4 = ENG_random__Fl(10);
		iVar3 = (uint)monster[iParm1]._mint - 0xf;
	}
	FUN_8014ac10(iParm1,iVar4 - iVar3);
LAB_801502ec:
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80150334(int iParm1);
 // line -1, offset 0x80150334
// function 'FUN_80150334' @0x80150334 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80150334(int iParm1)

{
	uchar uVar1;
	byte bVar2;
	byte bVar3;
	bool bVar4;
	int iVar5;
	long lVar6;
	int iVar7;
	CMonster *pCVar8;
	uint uVar9;
	int __x;
	int __x_00;
	
	uVar1 = monster[iParm1]._menemy;
	if ((monster[iParm1]._mmode == '\0') && (monster[iParm1]._msquelch != '\0')) {
		__x = (int)monster[iParm1]._mx - (uint)monster[iParm1]._menemyx;
		__x_00 = (int)monster[iParm1]._my - (uint)monster[iParm1]._menemyy;
		iVar5 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
																(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
		monster[iParm1]._mdir = (char)iVar5;
		lVar6 = ENG_random__Fl(100);
		if (monster[iParm1]._mgoal == '\x02') {
			if (monster[iParm1]._mgoalvar1 == 0) {
				FUN_8014f750(iParm1,iVar5 + 4U & 7);
				monster[iParm1]._mgoalvar1 = monster[iParm1]._mgoalvar1 + 1;
			}
			else {
				lVar6 = ENG_random__Fl(2);
				if (lVar6 == 0) {
					uVar9 = iVar5 + 1;
				}
				else {
					uVar9 = iVar5 - 1;
				}
				FUN_8014f750(iParm1,uVar9 & 7);
				monster[iParm1]._mgoal = '\x01';
			}
		}
		else {
			bVar2 = monster[iParm1]._menemyx;
			bVar3 = monster[iParm1]._menemyy;
			bVar4 = false;
			if (((monster[iParm1].MType)->mtype == '(') &&
				 (((iVar7 = abs(__x), 4 < iVar7 || (iVar7 = abs(__x_00), 4 < iVar7)) &&
					(lVar6 < (int)((uint)monster[iParm1]._mint * 4 + 0x21))))) {
				uVar9 = FUN_801554b8(PosOkMonst__Fiii,iParm1,(int)monster[iParm1]._mx,
														 (int)monster[iParm1]._my,(uint)bVar2,(uint)bVar3);
				if ((uVar9 & 0xff) != 0) {
					bVar4 = true;
				}
			}
			if (bVar4) {
				iVar5 = FUN_80142a04((int)monster[iParm1]._mx,(int)monster[iParm1]._my,(uint)bVar2,
														 (uint)bVar3,iVar5,0x14,(int)(char)uVar1,iParm1,0,0);
				if (iVar5 != -1) {
					(&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dMonster =
							 ~(ushort)iParm1;
					monster[iParm1]._mmode = '\x0e';
					monster[iParm1].Action = '\x05';
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
					if (lVar6 < (int)((uint)monster[iParm1]._mint * 4 + 8)) {
						FUN_8015702c(iParm1);
						pCVar8 = monster[iParm1].MType;
						monster[iParm1]._mgoal = '\x02';
						monster[iParm1]._mgoalvar1 = 0;
						if (pCVar8->mtype == ')') {
							lVar6 = ENG_random__Fl(10);
							FUN_80142a04((uint)monster[iParm1]._menemyx,(uint)monster[iParm1]._menemyy,
													 (uint)monster[iParm1]._menemyx + 1,0,0xffffffff,8,1,iParm1,lVar6 + 1,0);
						}
					}
				}
				else {
					if (((0x14 < monster[iParm1]._mVar2) && (lVar6 < (int)((uint)monster[iParm1]._mint + 0xd))
							) || ((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 || (monster[iParm1]._mVar1 == 3))
										&& ((monster[iParm1]._mVar2 == 0 &&
												(lVar6 < (int)((uint)monster[iParm1]._mint + 0x3f))))))) {
						FUN_8014f750(iParm1,iVar5);
					}
				}
			}
			if (monster[iParm1]._mmode == '\0') {
				monster[iParm1].Action = '\0';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801506e8(int iParm1);
 // line -1, offset 0x801506e8
// function 'FUN_801506e8' @0x801506E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801506e8(int iParm1)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	int iVar6;
	long lVar7;
	int iVar8;
	uint uVar9;
	
	if ((monster[iParm1]._mmode == '\0') && (bVar5 = false, monster[iParm1]._msquelch != '\0')) {
		cVar1 = monster[iParm1]._mx;
		bVar3 = monster[iParm1]._menemyx;
		cVar2 = monster[iParm1]._my;
		bVar4 = monster[iParm1]._menemyy;
		iVar6 = FUN_8014abac();
		monster[iParm1]._mdir = (char)iVar6;
		lVar7 = ENG_random__Fl(100);
		iVar8 = abs((int)cVar1 - (uint)bVar3);
		if (iVar8 < 4) {
			iVar8 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar8 < 4;
		}
		uVar9 = 0;
		if ((bVar5) &&
			 (((0x14 < monster[iParm1]._mVar2 && (lVar7 < (int)((uint)monster[iParm1]._mint * 2 + 0xd)))
				|| ((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 ||
						 (uVar9 = 0, monster[iParm1]._mVar1 == 3)) &&
						((uVar9 = 0, monster[iParm1]._mVar2 == 0 &&
						 (uVar9 = 0, lVar7 < (int)((uint)monster[iParm1]._mint * 2 + 0x3f))))))))) {
			uVar9 = FUN_8014f9e8(iParm1,iVar6 + 4U & 7);
			uVar9 = uVar9 & 0xff;
		}
		bVar3 = monster[iParm1]._menemyx;
		bVar4 = monster[iParm1]._menemyy;
		bVar5 = false;
		if ((uVar9 == 0) &&
			 (lVar7 = ENG_random__Fl(100), lVar7 < (int)((uint)monster[iParm1]._mint * 2 + 3))) {
			uVar9 = FUN_80155478((int)monster[iParm1]._mx,(int)monster[iParm1]._my,(uint)bVar3,(uint)bVar4
													);
			bVar5 = (uVar9 & 0xff) != 0;
		}
		if (bVar5) {
			FUN_8014ac60(iParm1,0,4);
		}
		if (monster[iParm1]._mmode == '\0') {
			monster[iParm1].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801508dc(int iParm1);
 // line -1, offset 0x801508dc
// function 'FUN_801508dc' @0x801508DC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801508dc(int iParm1)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	undefined4 uVar6;
	long lVar7;
	int iVar8;
	
	if ((monster[iParm1]._mmode == '\0') && (bVar5 = false, monster[iParm1]._msquelch != '\0')) {
		cVar1 = monster[iParm1]._mx;
		bVar3 = monster[iParm1]._menemyx;
		cVar2 = monster[iParm1]._my;
		bVar4 = monster[iParm1]._menemyy;
		uVar6 = FUN_8014abac();
		monster[iParm1]._mdir = (char)uVar6;
		lVar7 = ENG_random__Fl(100);
		iVar8 = abs((int)cVar1 - (uint)bVar3);
		if (iVar8 < 2) {
			iVar8 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar8 < 2;
		}
		if (bVar5) {
			iVar8 = (uint)monster[iParm1]._mint * 4;
			if (lVar7 < iVar8 + 0xf) {
				FUN_8015702c(iParm1);
			}
			else {
				if (lVar7 < iVar8 + 0x14) {
					FUN_8014aef4(iParm1);
				}
			}
		}
		else {
			if (((0x14 < monster[iParm1]._mVar2) &&
					(lVar7 < (int)((uint)monster[iParm1]._mint * 4 + 0x14))) ||
				 ((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 || (monster[iParm1]._mVar1 == 3)) &&
					((monster[iParm1]._mVar2 == 0 && (lVar7 < (int)((uint)monster[iParm1]._mint * 4 + 0x46))))
					))) {
				FUN_8014f750(iParm1,uVar6);
			}
		}
		if (monster[iParm1]._mmode == '\0') {
			monster[iParm1].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80150aa4(int iParm1);
 // line -1, offset 0x80150aa4
// function 'FUN_80150aa4' @0x80150AA4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80150aa4(int iParm1)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	uint uVar4;
	long lVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	int __x;
	int __x_00;
	
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	__x = (int)monster[iParm1]._mx - (uint)monster[iParm1]._menemyx;
	__x_00 = (int)monster[iParm1]._my - (uint)monster[iParm1]._menemyy;
	uVar4 = FUN_8014abac();
	iVar8 = -(uint)monster[iParm1]._mint;
	if (monster[iParm1]._mVar1 == 5) {
		uVar3 = '\x02';
LAB_80150b94:
		monster[iParm1]._mgoal = uVar3;
		monster[iParm1]._mgoalvar1 = 0;
	}
	else {
		bVar1 = false;
		iVar7 = abs(__x);
		if ((iVar8 + 8 <= iVar7) || (iVar7 = abs(__x_00), iVar8 + 8 <= iVar7)) {
			bVar1 = true;
		}
		uVar3 = '\x01';
		if ((bVar1) || (uVar3 = '\x01', 8 < monster[iParm1]._mgoalvar1)) goto LAB_80150b94;
	}
	if (monster[iParm1]._mgoal == '\x02') {
		if ((monster[iParm1]._mFlags & 0x10) != 0) {
			uVar4 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
																	(int)(&plr)[(uint)monster[iParm1]._menemy]._pownerx,
																	(int)(&plr)[(uint)monster[iParm1]._menemy]._pownery);
		}
		uVar4 = uVar4 + 4 & 7;
		if ((monster[iParm1].MType)->mtype == '\x1f') {
			lVar5 = ENG_random__Fl(2);
			uVar6 = uVar4 - 1;
			if (lVar5 == 0) {
				uVar6 = uVar4 + 1;
			}
			uVar4 = uVar6 & 7;
		}
	}
	monster[iParm1]._mdir = (char)uVar4;
	lVar5 = ENG_random__Fl(100);
	bVar1 = false;
	iVar7 = abs(__x);
	if (iVar7 < iVar8 + 5) {
		iVar7 = abs(__x_00);
		bVar1 = iVar7 < iVar8 + 5;
	}
	bVar2 = false;
	if ((bVar1) && ((monster[iParm1]._mFlags & 1) != 0)) {
		FUN_8014c5f0(iParm1,uVar4,0);
	}
	else {
		iVar7 = abs(__x);
		if ((iVar8 + 6 <= iVar7) || (iVar7 = abs(__x_00), iVar8 + 6 <= iVar7)) {
			bVar2 = true;
		}
		if ((bVar2) && ((monster[iParm1]._mFlags & 1) == 0)) {
			FUN_8014c74c(iParm1,uVar4,1);
		}
		else {
			bVar1 = false;
			if (monster[iParm1]._mgoal != '\x02') {
				iVar8 = abs(__x);
				if ((1 < iVar8) || (iVar8 = abs(__x_00), 1 < iVar8)) {
					bVar1 = true;
				}
				if ((!bVar1) ||
					 (((monster[iParm1]._mVar2 < 0x15 ||
						 ((int)((uint)monster[iParm1]._mint * 4 + 0xe) <= lVar5)) &&
						(((1 < (uint)(ushort)monster[iParm1]._mVar1 - 1 && (monster[iParm1]._mVar1 != 3)) ||
						 ((monster[iParm1]._mVar2 != 0 ||
							((int)((uint)monster[iParm1]._mint * 4 + 0x40) <= lVar5)))))))) goto LAB_80150de4;
			}
			monster[iParm1]._mgoalvar1 = monster[iParm1]._mgoalvar1 + 1;
			FUN_8014f750(iParm1,uVar4);
		}
	}
LAB_80150de4:
	bVar1 = false;
	if (monster[iParm1]._mmode == '\0') {
		iVar8 = abs(__x);
		if (iVar8 < 2) {
			iVar8 = abs(__x_00);
			bVar1 = iVar8 < 2;
		}
		if ((bVar1) && (lVar5 < (int)((uint)monster[iParm1]._mint * 4 + 10))) {
			FUN_8015702c(iParm1);
		}
		else {
			monster[iParm1].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80150e80(int iParm1);
 // line -1, offset 0x80150e80
// function 'FUN_80150e80' @0x80150E80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80150e80(int iParm1)

{
	char cVar1;
	char cVar2;
	uchar uVar3;
	uchar uVar4;
	bool bVar5;
	int iVar6;
	uint uVar7;
	int iVar8;
	long lVar9;
	uint uVar10;
	uint uVar11;
	
	if ((monster[iParm1]._mmode == '\0') && (monster[iParm1]._msquelch != '\0')) {
		uVar10 = (uint)monster[iParm1]._menemyx;
		uVar11 = (uint)monster[iParm1]._menemyy;
		cVar1 = monster[iParm1]._mx;
		cVar2 = monster[iParm1]._my;
		uVar3 = monster[iParm1]._menemy;
		iVar6 = FUN_8014abac();
		uVar4 = monster[iParm1]._mgoal;
		if (uVar4 == '\x01') {
			uVar7 = FUN_80155478((int)monster[iParm1]._mx,(int)monster[iParm1]._my,uVar10,uVar11);
			if (((uVar7 & 0xff) != 0) &&
				 (iVar8 = FUN_80142a04((int)monster[iParm1]._mx,(int)monster[iParm1]._my,uVar10,uVar11,iVar6
															 ,0x32,(int)(char)uVar3,iParm1,0,0), iVar8 != -1)) {
				monster[iParm1]._mmode = '\x0e';
				monster[iParm1]._mgoal = '\x05';
				monster[iParm1]._mgoalvar1 = 0;
			}
		}
		else {
			if (uVar4 == '\x05') {
				if (monster[iParm1]._mgoalvar1 == 3) {
					monster[iParm1]._mgoal = '\x01';
					FUN_8014c74c(iParm1,iVar6,1);
				}
				else {
					uVar7 = FUN_80155478((int)monster[iParm1]._mx,(int)monster[iParm1]._my,uVar10,uVar11);
					if ((uVar7 & 0xff) == 0) {
						lVar9 = ENG_random__Fl(10);
						FUN_8014ac10(iParm1,lVar9 + 5);
					}
					else {
						FUN_8014ac60(iParm1,0x33,4);
					}
					monster[iParm1]._mgoalvar1 = monster[iParm1]._mgoalvar1 + 1;
				}
			}
			else {
				if (uVar4 == '\x02') {
					FUN_8014c5f0(iParm1,iVar6,0);
					monster[iParm1]._mgoal = '\x05';
				}
			}
		}
		monster[iParm1]._mdir = (char)iVar6;
		ENG_random__Fl(100);
		bVar5 = false;
		if (monster[iParm1]._mmode == '\0') {
			iVar8 = abs((int)cVar1 - uVar10);
			if (iVar8 < 2) {
				iVar8 = abs((int)cVar2 - uVar11);
				bVar5 = iVar8 < 2;
			}
			if ((bVar5) && (monster[iParm1]._mgoal == '\x01')) {
				FUN_8014d428(iParm1,(uint)monster[iParm1]._menemy,(uint)monster[iParm1].mHit,
										 (uint)monster[iParm1].mMinDamage,(uint)monster[iParm1].mMaxDamage);
				monster[iParm1]._mgoal = '\x02';
				uVar10 = FUN_8014f750(iParm1,iVar6 + 4U & 7);
				if ((uVar10 & 0xff) != 0) {
					return;
				}
			}
			else {
				uVar10 = FUN_8014f750(iParm1,iVar6);
				if ((uVar10 & 0xff) != 0) {
					return;
				}
				if (1 < (uint)monster[iParm1]._mgoal - 1) {
					return;
				}
			}
			FUN_8014c5f0(iParm1,iVar6,0);
			monster[iParm1]._mgoal = '\x05';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80151184(int iParm1);
 // line -1, offset 0x80151184
// function 'FUN_80151184' @0x80151184 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80151184(int iParm1)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	int iVar4;
	long lVar5;
	undefined4 uVar6;
	int iVar7;
	uint uVar8;
	uint uVar9;
	
	if (monster[iParm1]._mgoal == '\x05') {
		if (monster[iParm1]._mgoalvar1 == 0) {
			monster[iParm1]._mgoal = '\x01';
		}
		else {
			monster[iParm1]._mgoalvar1 = monster[iParm1]._mgoalvar1 + -1;
		}
	}
	if ((monster[iParm1]._mmode == '\0') && (monster[iParm1]._msquelch != '\0')) {
		if ((monster[iParm1]._mgoal == '\x02') &&
			 (iVar4 = monster[iParm1]._mgoalvar1 + -1, monster[iParm1]._mgoalvar1 = iVar4, iVar4 == -1)) {
			cVar1 = monster[iParm1]._mdir;
			monster[iParm1]._mgoal = '\x01';
			M_StartStand__Fii(iParm1,(int)cVar1 + 4U & 7);
		}
		if (monster[iParm1]._mAnimFrame == monster[iParm1]._mAnimLen) {
			lVar5 = ENG_random__Fl(4);
			if (lVar5 == 0) {
				if ((monster[iParm1]._mFlags & 8) == 0) {
					M_StartSpStand__Fii(iParm1,(int)monster[iParm1]._mdir);
					if ((int)(monster[iParm1]._mmaxhp + -2 + (uint)monster[iParm1]._mint * -2) <
							monster[iParm1]._mhitpoints) {
						monster[iParm1]._mhitpoints = monster[iParm1]._mmaxhp;
					}
					else {
						monster[iParm1]._mhitpoints =
								 monster[iParm1]._mhitpoints + 2 + (uint)monster[iParm1]._mint * 2;
					}
				}
				iVar4 = (uint)monster[iParm1]._mint * 2 + 4;
				uVar9 = -iVar4;
				while ((int)uVar9 <= iVar4) {
					uVar8 = -iVar4;
					if ((int)uVar8 <= iVar4) {
						do {
							if ((((uVar9 < 0x62) && (uVar8 < 0x62)) &&
									(iVar7 = (int)(&dung_map)
																[((int)monster[iParm1]._mx + uVar8) * 0x70 +
																 (int)monster[iParm1]._my + uVar9].dMonster + -1,
									0 < (int)(&dung_map)
													 [((int)monster[iParm1]._mx + uVar8) * 0x70 +
														(int)monster[iParm1]._my + uVar9].dMonster)) &&
								 (monster[iVar7]._mAi == '\b')) {
								monster[iVar7]._mgoal = '\x05';
								monster[iVar7]._mgoalvar1 = ((uint)monster[iParm1]._mint * 2 + 7) * 0xf;
							}
							uVar8 = uVar8 + 1;
						} while ((int)uVar8 <= iVar4);
					}
					uVar9 = uVar9 + 1;
				}
			}
		}
		else {
			if (monster[iParm1]._mgoal == '\x02') {
				FUN_8014f750(iParm1,(int)monster[iParm1]._mdir);
			}
			else {
				bVar3 = false;
				if (monster[iParm1]._mgoal == '\x05') {
					cVar1 = monster[iParm1]._my;
					bVar2 = monster[iParm1]._menemyy;
					iVar4 = abs((int)monster[iParm1]._mx - (uint)monster[iParm1]._menemyx);
					if (iVar4 < 2) {
						iVar4 = abs((int)cVar1 - (uint)bVar2);
						bVar3 = iVar4 < 2;
					}
					if (bVar3) {
						FUN_8015702c(iParm1);
					}
					else {
						uVar6 = FUN_8014abac(iParm1);
						FUN_8014f750(iParm1,uVar6);
					}
				}
				else {
					FUN_8014fd88(iParm1);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80151498(int iParm1);
 // line -1, offset 0x80151498
// function 'FUN_80151498' @0x80151498 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80151498(int iParm1)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	if ((monster[iParm1]._mmode == '\0') && (bVar5 = false, monster[iParm1]._msquelch != '\0')) {
		cVar1 = monster[iParm1]._mx;
		cVar2 = monster[iParm1]._my;
		bVar3 = monster[iParm1]._menemyx;
		bVar4 = monster[iParm1]._menemyy;
		iVar6 = GetDirection__Fiiii((int)cVar1,(int)cVar2,(int)monster[iParm1]._lastx,
																(int)monster[iParm1]._lasty);
		monster[iParm1]._mdir = (char)iVar6;
		iVar7 = abs((int)cVar1 - (uint)bVar3);
		if (iVar7 < 2) {
			iVar7 = abs((int)cVar2 - (uint)bVar4);
			bVar5 = iVar7 < 2;
		}
		if (bVar5) {
			FUN_8015702c(iParm1);
		}
		else {
			FUN_8014f750(iParm1,iVar6);
		}
		if (monster[iParm1]._mmode == '\0') {
			monster[iParm1].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015159c(int iParm1,char cParm2);
 // line -1, offset 0x8015159c
// function 'FUN_8015159c' @0x8015159C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015159c(int iParm1,char cParm2)

{
	bool bVar1;
	int iVar2;
	long lVar3;
	int __x;
	long lVar4;
	int iVar5;
	int iVar6;
	uint uVar7;
	uint uVar8;
	int __x_00;
	int __x_01;
	uint uVar9;
	
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	uVar8 = (uint)monster[iParm1]._menemyx;
	uVar9 = (uint)monster[iParm1]._menemyy;
	__x_00 = (int)monster[iParm1]._mx - uVar8;
	__x_01 = (int)monster[iParm1]._my - uVar9;
	iVar2 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
															(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
	if (monster[iParm1]._msquelch != -1) {
		MonstCheckDoors__Fi(iParm1);
	}
	lVar3 = ENG_random__Fl(100);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[iParm1]._msquelch == -1)) &&
		 ((&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dTransVal ==
			(&dung_map)[uVar8 * 0x70 + uVar9].dTransVal)) {
		bVar1 = false;
		if (monster[iParm1]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((3 < __x) || (__x = abs(__x_01), 3 < __x)) && (lVar4 = ENG_random__Fl(4), lVar4 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_8015185c;
			if (monster[iParm1]._mgoal != '\x04') {
				monster[iParm1]._mgoalvar1 = 0;
				lVar4 = ENG_random__Fl(2);
				monster[iParm1]._mgoalvar2 = lVar4;
			}
		}
		monster[iParm1]._mgoal = '\x04';
		iVar5 = abs(__x_00);
		iVar6 = abs(__x_01);
		__x = __x_01;
		if (iVar6 < iVar5) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar5 = monster[iParm1]._mgoalvar1;
		monster[iParm1]._mgoalvar1 = iVar5 + 1;
		bVar1 = false;
		if (__x << 1 <= iVar5) {
			uVar7 = FUN_80154fac(iParm1,iVar2);
			bVar1 = (uVar7 & 0xff) != 0;
		}
		if ((!bVar1) &&
			 ((&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dTransVal ==
				(&dung_map)[uVar8 * 0x70 + uVar9].dTransVal)) {
			uVar8 = FUN_8014fa3c(iParm1,iVar2,iParm1 * 0x68 + -0x7fefac64);
			if ((uVar8 & 0xff) == 0) {
				lVar4 = ENG_random__Fl(10);
				FUN_8014ac10(iParm1,lVar4 + 10);
			}
			goto LAB_8015185c;
		}
	}
	monster[iParm1]._mgoal = '\x01';
LAB_8015185c:
	bVar1 = false;
	if (monster[iParm1]._mgoal == '\x01') {
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar1 = __x_00 < 2;
		}
		if (bVar1) {
			if (lVar3 < (int)((uint)monster[iParm1]._mint * 2 + 0x17)) {
				monster[iParm1]._mdir = (char)iVar2;
				if (((cParm2 == '\0') || (monster[iParm1]._mmaxhp >> 1 <= monster[iParm1]._mhitpoints)) ||
					 (lVar3 = ENG_random__Fl(2), lVar3 == 0)) {
					FUN_8015702c(iParm1);
				}
				else {
					FUN_8014aef4(iParm1);
				}
			}
		}
		else {
			if (((0x14 < monster[iParm1]._mVar2) &&
					(lVar3 < (int)((uint)monster[iParm1]._mint * 2 + 0x1c))) ||
				 ((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 || (monster[iParm1]._mVar1 == 3)) &&
					((monster[iParm1]._mVar2 == 0 && (lVar3 < (int)((uint)monster[iParm1]._mint * 2 + 0x4e))))
					))) {
				FUN_8014f750(iParm1,iVar2);
			}
		}
	}
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801519dc(undefined4 uParm1);
 // line -1, offset 0x801519dc
// function 'FUN_801519dc' @0x801519DC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801519dc(undefined4 uParm1)

{
	FUN_8015159c(uParm1,1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801519fc(int iParm1,undefined4 uParm2,char cParm3);
 // line -1, offset 0x801519fc
// function 'FUN_801519fc' @0x801519FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801519fc(int iParm1,undefined4 uParm2,char cParm3)

{
	char cVar1;
	char cVar2;
	byte bVar3;
	byte bVar4;
	short sVar5;
	bool bVar6;
	int iVar7;
	long lVar8;
	int iVar9;
	uint uVar10;
	
	if (monster[iParm1]._mmode == '\0') {
		if ((monster[iParm1]._msquelch == -1) || ((monster[iParm1]._mFlags & 0x10) != 0)) {
			bVar3 = monster[iParm1]._menemyx;
			bVar4 = monster[iParm1]._menemyy;
			cVar1 = monster[iParm1]._mx;
			cVar2 = monster[iParm1]._my;
			iVar7 = FUN_8014abac(iParm1);
			if (monster[iParm1]._msquelch != -1) {
				MonstCheckDoors__Fi(iParm1);
			}
			sVar5 = monster[iParm1]._mVar1;
			monster[iParm1]._mdir = (char)iVar7;
			if (sVar5 == 10) {
				lVar8 = ENG_random__Fl(0x14);
				FUN_8014ac10(iParm1,lVar8);
			}
			else {
				bVar6 = false;
				iVar9 = abs((int)cVar1 - (uint)bVar3);
				if ((iVar9 < 4) && (iVar9 = abs((int)cVar2 - (uint)bVar4), iVar9 < 4)) {
					lVar8 = ENG_random__Fl(100);
					bVar6 = lVar8 < (int)((uint)monster[iParm1]._mint * 10 + 0x46);
				}
				if (bVar6) {
					FUN_8014f750(iParm1,iVar7 + 4U & 7);
				}
			}
			if (monster[iParm1]._mmode == '\0') {
				uVar10 = FUN_80155478((int)monster[iParm1]._mx,(int)monster[iParm1]._my,(uint)bVar3,
															(uint)bVar4);
				if ((uVar10 & 0xff) == 0) {
					monster[iParm1].Action = '\0';
				}
				else {
					if (cParm3 == '\0') {
						FUN_8014ac60(iParm1,uParm2,4);
					}
					else {
						FUN_8014ad80(iParm1,uParm2,4);
					}
				}
			}
		}
		else {
			if (monster[iParm1]._msquelch != '\0') {
				iVar7 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
																		(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
				FUN_8014f750(iParm1,iVar7);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80151c20(undefined4 uParm1);
 // line -1, offset 0x80151c20
// function 'FUN_80151c20' @0x80151C20 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80151c20(undefined4 uParm1)

{
	FUN_801519fc(uParm1,0,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80151c44(undefined4 uParm1);
 // line -1, offset 0x80151c44
// function 'FUN_80151c44' @0x80151C44 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80151c44(undefined4 uParm1)

{
	FUN_801519fc(uParm1,0x18,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80151c68(undefined4 uParm1);
 // line -1, offset 0x80151c68
// function 'FUN_80151c68' @0x80151C68 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80151c68(undefined4 uParm1)

{
	FUN_801519fc(uParm1,0x39,1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80151c8c(int iParm1);
 // line -1, offset 0x80151c8c
// function 'FUN_80151c8c' @0x80151C8C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80151c8c(int iParm1)

{
	char cVar1;
	char cVar2;
	bool bVar3;
	uchar uVar4;
	long lVar5;
	uint uVar6;
	uint uVar7;
	uint uVar8;
	int iVar9;
	
	bVar3 = false;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	if (monster[iParm1]._mhitpoints < monster[iParm1]._mmaxhp >> 1) {
		if (monster[iParm1]._mgoal != '\x03') {
			if (monster[iParm1].leaderflag != '\0') {
				monster[(uint)monster[iParm1].leader].packsize =
						 monster[(uint)monster[iParm1].leader].packsize + -1;
				monster[iParm1].leaderflag = '\0';
			}
			monster[iParm1]._mgoal = '\x03';
			monster[iParm1]._mgoalvar3 = 10;
			goto LAB_80151d78;
		}
	}
	else {
LAB_80151d78:
		if (monster[iParm1]._mgoal != '\x03') goto LAB_80152014;
	}
	if (monster[iParm1]._mgoalvar3 != 0) {
		cVar1 = monster[iParm1]._mx;
		cVar2 = monster[iParm1]._my;
		monster[iParm1]._mgoalvar3 = monster[iParm1]._mgoalvar3 + -1;
		uVar4 = GetdDead__Fii((int)cVar1,(int)cVar2);
		if (uVar4 == '\0') {
			if (monster[iParm1]._mgoalvar1 == 0) {
				lVar5 = ENG_random__Fl(2);
				if (lVar5 == 0) {
					uVar6 = 4;
					do {
						uVar7 = uVar6;
						uVar8 = 4;
						do {
							if (bVar3) break;
							if ((uVar7 < 0x62) && (uVar8 < 0x62)) {
								bVar3 = false;
								uVar4 = GetdDead__Fii((int)monster[iParm1]._mx + uVar8,
																			(int)monster[iParm1]._my + uVar7);
								if (uVar4 != '\0') {
									uVar6 = FUN_801551f0(&LAB_801551d0,(int)monster[iParm1]._mx,
																			 (int)monster[iParm1]._my,(int)monster[iParm1]._mx + uVar8,
																			 (int)monster[iParm1]._my + uVar7);
									bVar3 = (uVar6 & 0xff) != 0;
								}
							}
							uVar8 = uVar8 - 1;
						} while (-5 < (int)uVar8);
					} while ((-5 < (int)(uVar7 - 1)) && (uVar6 = uVar7 - 1, !bVar3));
					iVar9 = uVar8 + 1;
				}
				else {
					uVar6 = 0xfffffffc;
					do {
						uVar7 = uVar6;
						uVar8 = 0xfffffffc;
						do {
							if (bVar3) break;
							if ((uVar7 < 0x62) && (uVar8 < 0x62)) {
								bVar3 = false;
								uVar4 = GetdDead__Fii((int)monster[iParm1]._mx + uVar8,
																			(int)monster[iParm1]._my + uVar7);
								if (uVar4 != '\0') {
									uVar6 = FUN_801551f0(&LAB_801551d0,(int)monster[iParm1]._mx,
																			 (int)monster[iParm1]._my,(int)monster[iParm1]._mx + uVar8,
																			 (int)monster[iParm1]._my + uVar7);
									bVar3 = (uVar6 & 0xff) != 0;
								}
							}
							uVar8 = uVar8 + 1;
						} while ((int)uVar8 < 5);
					} while (((int)(uVar7 + 1) < 5) && (uVar6 = uVar7 + 1, !bVar3));
					iVar9 = uVar8 - 1;
				}
				if (bVar3) {
					cVar1 = monster[iParm1]._my;
					monster[iParm1]._mgoalvar1 = (int)monster[iParm1]._mx + iVar9 + 1;
					monster[iParm1]._mgoalvar2 = (int)cVar1 + uVar7 + 1;
				}
				if (monster[iParm1]._mgoalvar1 == 0) goto LAB_80152014;
			}
			iVar9 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
																	monster[iParm1]._mgoalvar1 + -1,monster[iParm1]._mgoalvar2 + -1);
			monster[iParm1]._mdir = (char)iVar9;
			FUN_8014f750(iParm1,(int)(char)iVar9);
		}
		else {
			FUN_8014afe4(iParm1);
			if ((monster[iParm1]._mFlags & 8) == 0) {
				monster[iParm1]._mhitpoints = monster[iParm1]._mhitpoints + 0x40;
			}
			if ((monster[iParm1]._mmaxhp >> 1) + (monster[iParm1]._mmaxhp >> 2) <=
					monster[iParm1]._mhitpoints) {
				monster[iParm1]._mgoal = '\x01';
				monster[iParm1]._mgoalvar1 = 0;
				monster[iParm1]._mgoalvar2 = 0;
			}
		}
	}
LAB_80152014:
	if (monster[iParm1]._mmode == '\0') {
		FUN_8014fd88(iParm1);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152050(int iParm1);
 // line -1, offset 0x80152050
// function 'FUN_80152050' @0x80152050 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152050(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	byte bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	uint uVar9;
	
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	cVar3 = monster[iParm1]._lasty;
	cVar4 = monster[iParm1]._lastx;
	iVar7 = FUN_8014abac();
	if ((monster[iParm1]._msquelch == '\0') || ((monster[iParm1]._mFlags & 4) == 0)) {
		if ((monster[iParm1]._mmode == '\0') && (monster[iParm1]._msquelch != '\0')) {
			if (monster[iParm1]._mhitpoints < monster[iParm1]._mmaxhp >> 1) {
				monster[iParm1]._mgoal = '\x02';
			}
			if (monster[iParm1]._mgoal == '\x02') {
				iVar8 = abs((int)cVar1 - (int)cVar4);
				bVar6 = false;
				if (iVar8 < (int)((uint)monster[iParm1]._mint + 2)) {
					iVar8 = abs((int)cVar2 - (int)cVar3);
					bVar6 = iVar8 < (int)((uint)monster[iParm1]._mint + 2);
				}
				if (bVar6) {
					uVar9 = FUN_8014f750(iParm1,iVar7 + 4U & 7);
					if ((uVar9 & 0xff) == 0) {
						monster[iParm1]._mgoal = '\x01';
					}
				}
				else {
					monster[iParm1]._mgoal = '\x01';
					FUN_8014c89c(iParm1);
				}
			}
			FUN_8015159c(iParm1,0);
		}
	}
	else {
		M_Enemy__Fi(iParm1);
		cVar1 = monster[iParm1]._my;
		bVar5 = monster[iParm1]._menemyy;
		iVar7 = abs((int)monster[iParm1]._mx - (uint)monster[iParm1]._menemyx);
		bVar6 = false;
		if (iVar7 < (int)((uint)monster[iParm1]._mint + 2)) {
			iVar7 = abs((int)cVar1 - (uint)bVar5);
			bVar6 = iVar7 < (int)((uint)monster[iParm1]._mint + 2);
		}
		if (bVar6) {
			monster[iParm1]._mFlags = monster[iParm1]._mFlags & 0xfffb;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152230(int param_1,undefined4 param_2,char param_3,undefined4 param_4,byte param_5);
 // line -1, offset 0x80152230
// function 'FUN_80152230' @0x80152230 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152230(int param_1,undefined4 param_2,char param_3,undefined4 param_4,byte param_5)

{
	bool bVar1;
	bool bVar2;
	int iVar3;
	long lVar4;
	int __x;
	long lVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	int __x_00;
	int __x_01;
	uint uVar9;
	uint uVar10;
	char local_30;
	
	if (monster[param_1]._mmode != '\0') {
		return;
	}
	if (monster[param_1]._msquelch == '\0') {
		return;
	}
	uVar9 = (uint)monster[param_1]._menemyx;
	uVar10 = (uint)monster[param_1]._menemyy;
	__x_00 = (int)monster[param_1]._mx - uVar9;
	__x_01 = (int)monster[param_1]._my - uVar10;
	iVar3 = GetDirection__Fiiii((int)monster[param_1]._mx,(int)monster[param_1]._my,
															(int)monster[param_1]._lastx,(int)monster[param_1]._lasty);
	if ((param_3 != '\0') && (monster[param_1]._msquelch != -1)) {
		MonstCheckDoors__Fi(param_1);
	}
	lVar4 = ENG_random__Fl((long)&DAT_00002710);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[param_1]._msquelch == -1)) &&
		 ((&dung_map)[(int)monster[param_1]._mx * 0x70 + (int)monster[param_1]._my].dTransVal ==
			(&dung_map)[uVar9 * 0x70 + uVar10].dTransVal)) {
		bVar1 = false;
		if (monster[param_1]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
				 (lVar5 = ENG_random__Fl(4 << ((uint)param_5 & 0x1f)), lVar5 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_80152500;
			if (monster[param_1]._mgoal != '\x04') {
				monster[param_1]._mgoalvar1 = 0;
				lVar5 = ENG_random__Fl(2);
				monster[param_1]._mgoalvar2 = lVar5;
			}
		}
		monster[param_1]._mgoal = '\x04';
		iVar6 = abs(__x_00);
		iVar7 = abs(__x_01);
		__x = __x_01;
		if (iVar7 < iVar6) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar6 = monster[param_1]._mgoalvar1;
		monster[param_1]._mgoalvar1 = iVar6 + 1;
		bVar1 = false;
		if (__x << 1 <= iVar6) {
			uVar8 = FUN_80154fac(param_1,iVar3);
			bVar1 = (uVar8 & 0xff) != 0;
		}
		if (!bVar1) {
			if ((lVar4 < (int)((uint)monster[param_1]._mint * 500 + 500) >> ((uint)param_5 & 0x1f)) &&
				 (uVar8 = FUN_80155478((int)monster[param_1]._mx,(int)monster[param_1]._my,uVar9,uVar10),
				 (uVar8 & 0xff) != 0)) {
				FUN_8014ad80(param_1,param_2,param_4);
			}
			else {
				FUN_8014fa3c(param_1,iVar3,param_1 * 0x68 + -0x7fefac64);
			}
			goto LAB_80152500;
		}
	}
	monster[param_1]._mgoal = '\x01';
LAB_80152500:
	bVar1 = false;
	if (monster[param_1]._mgoal == '\x01') {
		__x = abs(__x_00);
		if (((((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
				 (lVar4 < (int)((uint)monster[param_1]._mint * 500 + 1000) >> ((uint)param_5 & 0x1f))) ||
				(lVar4 < (int)((uint)monster[param_1]._mint * 500 + 500) >> ((uint)param_5 & 0x1f))) &&
			 (uVar9 = FUN_80155478((int)monster[param_1]._mx,(int)monster[param_1]._my,uVar9,uVar10),
			 (uVar9 & 0xff) != 0)) {
			bVar1 = true;
		}
		bVar2 = false;
		if (bVar1) {
			FUN_8014ad80(param_1,param_2,param_4);
		}
		else {
			__x_00 = abs(__x_00);
			if (__x_00 < 2) {
				__x_00 = abs(__x_01);
				bVar2 = __x_00 < 2;
			}
			if (bVar2) {
				if (lVar4 < (int)((uint)monster[param_1]._mint * 1000 + 6000)) {
					local_30 = (char)iVar3;
					monster[param_1]._mdir = local_30;
					FUN_8015702c(param_1);
				}
			}
			else {
				lVar4 = ENG_random__Fl(100);
				__x_00 = (uint)monster[param_1]._mint * 1000;
				if ((lVar4 < (int)(&DAT_00001388 + __x_00)) ||
					 ((((uint)(ushort)monster[param_1]._mVar1 - 1 < 2 || (monster[param_1]._mVar1 == 3)) &&
						((monster[param_1]._mVar2 == 0 && (lVar4 < (int)(&DAT_00001f40 + __x_00))))))) {
					FUN_8014f750(param_1,iVar3);
				}
			}
		}
	}
	if (monster[param_1]._mmode == '\0') {
		lVar4 = ENG_random__Fl(10);
		FUN_8014ac10(param_1,lVar4 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152720(undefined4 uParm1);
 // line -1, offset 0x80152720
// function 'FUN_80152720' @0x80152720 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152720(undefined4 uParm1)

{
	FUN_80152230(uParm1,0x15,1,4,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015274c(undefined4 uParm1);
 // line -1, offset 0x8015274c
// function 'FUN_8015274c' @0x8015274C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015274c(undefined4 uParm1)

{
	FUN_80152230(uParm1,0x16,1,4,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152778(undefined4 uParm1);
 // line -1, offset 0x80152778
// function 'FUN_80152778' @0x80152778 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152778(undefined4 uParm1)

{
	FUN_80152230(uParm1,0x39,0,4,1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801527a8(undefined4 uParm1);
 // line -1, offset 0x801527a8
// function 'FUN_801527a8' @0x801527A8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801527a8(undefined4 uParm1)

{
	FUN_80152230(uParm1,0x43,0,0x28,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801527d4(int iParm1,undefined4 uParm2,undefined4 uParm3);
 // line -1, offset 0x801527d4
// function 'FUN_801527d4' @0x801527D4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801527d4(int iParm1,undefined4 uParm2,undefined4 uParm3)

{
	char cVar1;
	byte bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	long lVar6;
	int __x;
	long lVar7;
	int iVar8;
	int iVar9;
	uint uVar10;
	int __x_00;
	int __x_01;
	uint uVar11;
	uint uVar12;
	
	bVar3 = false;
	cVar1 = monster[iParm1]._my;
	bVar2 = monster[iParm1]._menemyy;
	iVar5 = abs((int)monster[iParm1]._mx - (uint)monster[iParm1]._menemyx);
	if ((4 < iVar5) || (iVar5 = abs((int)cVar1 - (uint)bVar2), 4 < iVar5)) {
		bVar3 = true;
	}
	if (bVar3) {
		FUN_8014fd88(iParm1);
		return;
	}
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	uVar12 = (uint)monster[iParm1]._menemyy;
	uVar11 = (uint)monster[iParm1]._menemyx;
	__x_01 = (int)monster[iParm1]._my - uVar12;
	__x_00 = (int)monster[iParm1]._mx - uVar11;
	iVar5 = GetDirection__Fiiii((int)monster[iParm1]._mx,(int)monster[iParm1]._my,
															(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
	if (monster[iParm1]._msquelch != -1) {
		MonstCheckDoors__Fi(iParm1);
	}
	lVar6 = ENG_random__Fl(100);
	bVar3 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar3 = __x < 2;
	}
	if (((bVar3) || (monster[iParm1]._msquelch != -1)) ||
		 ((&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dTransVal !=
			(&dung_map)[uVar11 * 0x70 + uVar12].dTransVal)) {
LAB_80152a64:
		monster[iParm1]._mgoal = '\x01';
	}
	else {
		bVar3 = false;
		if (monster[iParm1]._mgoal == '\x04') {
LAB_801529e8:
			monster[iParm1]._mgoal = '\x04';
			monster[iParm1]._mgoalvar3 = 4;
			iVar8 = abs(__x_00);
			iVar9 = abs(__x_01);
			__x = __x_01;
			if (iVar9 < iVar8) {
				__x = __x_00;
			}
			__x = abs(__x);
			iVar8 = monster[iParm1]._mgoalvar1;
			monster[iParm1]._mgoalvar1 = iVar8 + 1;
			bVar3 = false;
			if (__x << 1 <= iVar8) {
				uVar10 = FUN_80154fac(iParm1,iVar5);
				bVar3 = (uVar10 & 0xff) != 0;
			}
			if (bVar3) goto LAB_80152a64;
			if (lVar6 < (int)((uint)monster[iParm1]._mint * 5 + 0x50)) {
				FUN_8014fa3c(iParm1,iVar5,iParm1 * 0x68 + -0x7fefac64);
			}
		}
		else {
			__x = abs(__x_00);
			if ((2 < __x) || (__x = abs(__x_01), 2 < __x)) {
				bVar3 = true;
			}
			if (bVar3) {
				if (monster[iParm1]._mgoal != '\x04') {
					monster[iParm1]._mgoalvar1 = 0;
					lVar7 = ENG_random__Fl(2);
					monster[iParm1]._mgoalvar2 = lVar7;
				}
				goto LAB_801529e8;
			}
		}
	}
	bVar3 = false;
	if (monster[iParm1]._mgoal != '\x01') goto LAB_80152c60;
	__x = abs(__x_00);
	if (((((2 < __x) || (__x = abs(__x_01), 2 < __x)) &&
			 (lVar6 < (int)((uint)monster[iParm1]._mint * 5 + 10))) ||
			((lVar6 < (int)((uint)monster[iParm1]._mint * 5 + 5) || (monster[iParm1]._mgoalvar3 == 4))))
		 && (uVar11 = FUN_80155478((int)monster[iParm1]._mx,(int)monster[iParm1]._my,uVar11,uVar12),
				(uVar11 & 0xff) != 0)) {
		bVar3 = true;
	}
	bVar4 = false;
	if (bVar3) {
LAB_80152bc0:
		FUN_8014ad80(iParm1,uParm2,uParm3);
	}
	else {
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar4 = __x_00 < 2;
		}
		if (bVar4) {
			lVar6 = ENG_random__Fl(100);
			if (lVar6 < (int)((uint)monster[iParm1]._mint * 10 + 0x28)) {
				monster[iParm1]._mdir = (char)iVar5;
				lVar6 = ENG_random__Fl(2);
				if (lVar6 == 0) goto LAB_80152bc0;
				FUN_8015702c(iParm1);
			}
		}
		else {
			lVar6 = ENG_random__Fl(100);
			__x_00 = (uint)monster[iParm1]._mint * 10;
			if ((lVar6 < __x_00 + 0x32) ||
				 (((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 || (monster[iParm1]._mVar1 == 3)) &&
					 (monster[iParm1]._mVar2 == 0)) && (lVar6 < __x_00 + 0x50)))) {
				FUN_8014f750(iParm1,iVar5);
			}
		}
	}
	monster[iParm1]._mgoalvar3 = 1;
LAB_80152c60:
	if (monster[iParm1]._mmode == '\0') {
		lVar6 = ENG_random__Fl(10);
		FUN_8014ac10(iParm1,lVar6 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152cb8(undefined4 uParm1);
 // line -1, offset 0x80152cb8
// function 'FUN_80152cb8' @0x80152CB8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152cb8(undefined4 uParm1)

{
	FUN_801527d4(uParm1,0x31,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152cdc(int iParm1);
 // line -1, offset 0x80152cdc
// function 'FUN_80152cdc' @0x80152CDC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152cdc(int iParm1)

{
	bool bVar1;
	bool bVar2;
	uchar uVar3;
	int md;
	long lVar4;
	int __x;
	long lVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	int y1;
	uint uVar9;
	int x1;
	uint uVar10;
	int __x_00;
	int __x_01;
	
	x1 = (int)monster[iParm1]._mx;
	y1 = (int)monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	uVar10 = (uint)monster[iParm1]._menemyx;
	uVar9 = (uint)monster[iParm1]._menemyy;
	md = GetDirection__Fiiii(x1,y1,(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
	__x_00 = x1 - uVar10;
	__x_01 = y1 - uVar9;
	if (monster[iParm1]._msquelch != -1) {
		MonstCheckDoors__Fi(iParm1);
	}
	lVar4 = ENG_random__Fl(100);
	bVar1 = false;
	__x = abs(__x_00);
	if (__x < 2) {
		__x = abs(__x_01);
		bVar1 = __x < 2;
	}
	if (((!bVar1) && (monster[iParm1]._msquelch == -1)) &&
		 ((&dung_map)[x1 * 0x70 + y1].dTransVal == (&dung_map)[uVar10 * 0x70 + uVar9].dTransVal)) {
		bVar1 = false;
		if (monster[iParm1]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((2 < __x) || (__x = abs(__x_01), 2 < __x)) && (lVar5 = ENG_random__Fl(4), lVar5 == 0)) {
				bVar1 = true;
			}
			if (!bVar1) goto LAB_80152fac;
			if (monster[iParm1]._mgoal != '\x04') {
				monster[iParm1]._mgoalvar1 = 0;
				lVar5 = ENG_random__Fl(2);
				monster[iParm1]._mgoalvar2 = lVar5;
			}
		}
		monster[iParm1]._mgoal = '\x04';
		iVar6 = abs(__x_00);
		iVar7 = abs(__x_01);
		__x = __x_01;
		if (iVar7 < iVar6) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar6 = monster[iParm1]._mgoalvar1;
		monster[iParm1]._mgoalvar1 = iVar6 + 1;
		bVar1 = false;
		if (__x << 1 <= iVar6) {
			uVar8 = FUN_80154fac(iParm1,md);
			bVar1 = (uVar8 & 0xff) != 0;
		}
		if ((!bVar1) &&
			 ((&dung_map)[x1 * 0x70 + y1].dTransVal == (&dung_map)[uVar10 * 0x70 + uVar9].dTransVal)) {
			uVar8 = FUN_8014fa3c(iParm1,md,iParm1 * 0x68 + -0x7fefac64);
			if ((uVar8 & 0xff) == 0) {
				lVar5 = ENG_random__Fl(10);
				FUN_8014ac10(iParm1,lVar5 + 10);
			}
			goto LAB_80152fac;
		}
	}
	monster[iParm1]._mgoal = '\x01';
LAB_80152fac:
	if (monster[iParm1]._mgoal == '\x01') {
		bVar1 = false;
		if (((gbMaxPlayers == '\x01') &&
				((((__x = abs(__x_00), 2 < __x || (__x = abs(__x_01), 2 < __x)) &&
					(lVar4 < (int)((uint)monster[iParm1]._mint * 4 + 0x23))) || (lVar4 < 6)))) &&
			 (uVar9 = FUN_80155478(x1,y1,uVar10,uVar9), (uVar9 & 0xff) != 0)) {
			bVar1 = true;
		}
		bVar2 = false;
		if (bVar1) {
			x1 = x1 + (int)(&offset_x)[md];
			y1 = y1 + (int)(&offset_y)[md];
			uVar3 = PosOkMonst__Fiii(iParm1,x1,y1);
			if ((uVar3 != '\0') && (iGp00001b4c < 0xbe)) {
				uVar3 = GetdDead__Fii(x1,y1);
				bVar2 = uVar3 != '\0';
			}
			if (bVar2) {
				__x_00 = FUN_8015648c(x1,y1,md);
				if (__x_00 != -1) {
					SetdDead__FiiUc(x1,y1,'\0');
				}
				M_StartSpStand__Fii(iParm1,md);
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
				if (lVar4 < (int)((uint)monster[iParm1]._mint + 0x14)) {
					monster[iParm1]._mdir = (char)md;
					FUN_8015702c(iParm1);
				}
			}
			else {
				lVar4 = ENG_random__Fl(100);
				if ((lVar4 < (int)((uint)monster[iParm1]._mint + 0x19)) ||
					 ((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 || (monster[iParm1]._mVar1 == 3)) &&
						((monster[iParm1]._mVar2 == 0 && (lVar4 < (int)((uint)monster[iParm1]._mint + 0x4b))))))
					 ) {
					FUN_8014f750(iParm1,md);
				}
				else {
					lVar4 = ENG_random__Fl(10);
					FUN_8014ac10(iParm1,lVar4 + 10);
				}
			}
		}
	}
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80153218(int iParm1);
 // line -1, offset 0x80153218
// function 'FUN_80153218' @0x80153218 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80153218(int iParm1)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	long lVar4;
	int __x;
	long lVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	uint uVar9;
	int x1;
	int __x_00;
	int __x_01;
	uint uVar10;
	int y1;
	char local_30;
	
	x1 = (int)monster[iParm1]._mx;
	y1 = (int)monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	uVar10 = (uint)monster[iParm1]._menemyx;
	uVar9 = (uint)monster[iParm1]._menemyy;
	iVar3 = GetDirection__Fiiii(x1,y1,(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
	__x_00 = x1 - uVar10;
	__x_01 = y1 - uVar9;
	if (monster[iParm1]._msquelch != -1) {
		MonstCheckDoors__Fi(iParm1);
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
		if (monster[iParm1]._mgoal != '\x04') {
			__x = abs(__x_00);
			if (((4 < __x) || (__x = abs(__x_01), 4 < __x)) && (lVar5 = ENG_random__Fl(4), lVar5 != 0)) {
				bVar2 = true;
			}
			if (!bVar2) goto LAB_80153454;
			if (monster[iParm1]._mgoal != '\x04') {
				monster[iParm1]._mgoalvar1 = 0;
				lVar5 = ENG_random__Fl(2);
				monster[iParm1]._mgoalvar2 = lVar5;
			}
		}
		monster[iParm1]._mgoal = '\x04';
		iVar6 = abs(__x_00);
		iVar7 = abs(__x_01);
		__x = __x_01;
		if (iVar7 < iVar6) {
			__x = __x_00;
		}
		__x = abs(__x);
		iVar6 = monster[iParm1]._mgoalvar1;
		monster[iParm1]._mgoalvar1 = iVar6 + 1;
		if ((iVar6 < __x << 1) &&
			 ((&dung_map)[x1 * 0x70 + y1].dTransVal == (&dung_map)[uVar10 * 0x70 + uVar9].dTransVal)) {
			uVar8 = FUN_8014fa3c(iParm1,iVar3,iParm1 * 0x68 + -0x7fefac64);
			if ((uVar8 & 0xff) == 0) {
				lVar5 = ENG_random__Fl(10);
				FUN_8014ac10(iParm1,lVar5 + 10);
			}
			goto LAB_80153454;
		}
	}
	monster[iParm1]._mgoal = '\x01';
LAB_80153454:
	bVar2 = false;
	if (monster[iParm1]._mgoal == '\x01') {
		__x = abs(__x_00);
		if (((4 < __x) || (__x = abs(__x_01), 4 < __x)) &&
			 ((lVar4 < (int)((uint)monster[iParm1]._mint * 2 + 0x2b) &&
				(uVar8 = FUN_801554b8(PosOkMonst__Fiii,iParm1,x1,y1,uVar10,uVar9), (uVar8 & 0xff) != 0)))) {
			bVar2 = true;
		}
		if (bVar2) {
			iVar3 = FUN_80142a04(x1,y1,uVar10,uVar9,iVar3,0x14,(int)(char)monster[iParm1]._menemy,iParm1,0
													 ,0);
			if (iVar3 != -1) {
				if ((monster[iParm1].MData)->snd_special != '\0') {
					PlayEffect__Fii(iParm1,3);
				}
				(&dung_map)[x1 * 0x70 + y1].dMonster = ~(ushort)iParm1;
				monster[iParm1]._mmode = '\x0e';
				cVar1 = missile[iVar3]._mimfnum;
				monster[iParm1].Action = '\x05';
				monster[iParm1]._mdir = cVar1;
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
				if (lVar4 < (int)((uint)monster[iParm1]._mint * 2 + 0x1c)) {
					local_30 = (char)iVar3;
					monster[iParm1]._mdir = local_30;
					FUN_8015702c(iParm1);
				}
			}
			else {
				lVar4 = ENG_random__Fl(100);
				x1 = (uint)monster[iParm1]._mint * 2;
				if ((lVar4 < x1 + 0x21) ||
					 (((((uint)(ushort)monster[iParm1]._mVar1 - 1 < 2 || (monster[iParm1]._mVar1 == 3)) &&
						 (monster[iParm1]._mVar2 == 0)) && (lVar4 < x1 + 0x53)))) {
					FUN_8014f750(iParm1,iVar3);
				}
				else {
					lVar4 = ENG_random__Fl(10);
					FUN_8014ac10(iParm1,lVar4 + 10);
				}
			}
		}
	}
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801536d4(int iParm1);
 // line -1, offset 0x801536d4
// function 'FUN_801536d4' @0x801536D4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801536d4(int iParm1)

{
	byte bVar1;
	bool bVar2;
	uchar uVar3;
	int iVar4;
	long lVar5;
	int iVar6;
	int iVar7;
	int __x;
	uint uVar8;
	int y1;
	int __x_00;
	int __x_01;
	int x1;
	uint uVar9;
	
	x1 = (int)monster[iParm1]._mx;
	y1 = (int)monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	if (monster[iParm1]._msquelch == '\0') {
		return;
	}
	uVar9 = (uint)monster[iParm1]._menemyx;
	uVar8 = (uint)monster[iParm1]._menemyy;
	iVar4 = GetDirection__Fiiii(x1,y1,(int)monster[iParm1]._lastx,(int)monster[iParm1]._lasty);
	__x_00 = x1 - uVar9;
	__x_01 = y1 - uVar8;
	if (monster[iParm1]._msquelch != -1) {
		MonstCheckDoors__Fi(iParm1);
	}
	lVar5 = ENG_random__Fl(100);
	bVar1 = monster[iParm1]._mgoal;
	if (bVar1 == 2) {
		y1 = monster[iParm1]._mgoalvar1;
		monster[iParm1]._mgoalvar1 = y1 + 1;
		if (y1 < 4) {
			FUN_8014f750(iParm1,iVar4 + 4U & 7);
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
				__x_00 = monster[iParm1]._mmaxhp;
				__x_01 = monster[iParm1]._mhitpoints;
				monster[iParm1]._mdir = (char)iVar4;
				if (__x_00 >> 1 <= __x_01) {
					if ((monster[iParm1]._mVar1 == 0xd) ||
						 (lVar5 = ENG_random__Fl(100), lVar5 < (int)((uint)monster[iParm1]._mint * 2 + 0x14))) {
						FUN_8014ac60(iParm1,0xffffffff,0);
						FUN_80142a04(x1,y1,0,0,(int)monster[iParm1]._mdir,0xb,(uint)bVar1,iParm1,4,0);
						FUN_80142a04(x1,y1,0,0,(int)monster[iParm1]._mdir,0xc,(uint)bVar1,iParm1,4,0);
						goto LAB_80153b18;
					}
LAB_80153af8:
					lVar5 = ENG_random__Fl(10);
					FUN_8014ac10(iParm1,lVar5 - ((uint)monster[iParm1]._mint * 2 + -10));
					goto LAB_80153b18;
				}
				uVar3 = '\x02';
			}
			else {
				if ((lVar5 < (int)((uint)monster[iParm1]._mint * 5 + 0x32)) &&
					 (uVar8 = FUN_80155478(x1,y1,uVar9,uVar8), (uVar8 & 0xff) != 0)) {
					lVar5 = ENG_random__Fl(((uint)monster[iParm1].mMaxDamage -
																 (uint)monster[iParm1].mMinDamage) + 1);
					FUN_8014ac60(iParm1,(uint)(byte)(&DAT_8011c2c0)[(uint)monster[iParm1]._mint],
											 lVar5 + (uint)monster[iParm1].mMinDamage);
					goto LAB_80153b18;
				}
				lVar5 = ENG_random__Fl(100);
				if (0x1d < lVar5) goto LAB_80153af8;
				uVar3 = '\x04';
			}
			monster[iParm1]._mgoal = uVar3;
			monster[iParm1]._mgoalvar1 = 0;
			FUN_8014c74c(iParm1,iVar4,0);
			goto LAB_80153b18;
		}
		iVar6 = abs(__x_00);
		iVar7 = abs(__x_01);
		__x = __x_01;
		if (iVar7 < iVar6) {
			__x = __x_00;
		}
		bVar2 = false;
		__x = abs(__x);
		__x_00 = abs(__x_00);
		if (__x_00 < 2) {
			__x_00 = abs(__x_01);
			bVar2 = __x_00 < 2;
		}
		if (((!bVar2) && (monster[iParm1]._msquelch == -1)) &&
			 ((&dung_map)[x1 * 0x70 + y1].dTransVal == (&dung_map)[uVar9 * 0x70 + uVar8].dTransVal)) {
			y1 = monster[iParm1]._mgoalvar1;
			monster[iParm1]._mgoalvar1 = y1 + 1;
			bVar2 = false;
			if (__x << 1 <= y1) {
				uVar8 = FUN_80154fac(iParm1,iVar4);
				bVar2 = (uVar8 & 0xff) != 0;
			}
			if (!bVar2) {
				FUN_8014fa3c(iParm1,iVar4,iParm1 * 0x68 + -0x7fefac64);
				goto LAB_80153b18;
			}
		}
	}
	monster[iParm1]._mgoal = '\x01';
	FUN_8014c5f0(iParm1,iVar4,1);
LAB_80153b18:
	if (monster[iParm1]._mmode == '\0') {
		lVar5 = ENG_random__Fl(10);
		FUN_8014ac10(iParm1,lVar5 + 5);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80153b70(int iParm1);
 // line -1, offset 0x80153b70
// function 'FUN_80153b70' @0x80153B70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80153b70(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	MonsterStruct *pMVar5;
	
	pMVar5 = monster + iParm1;
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	cVar3 = FUN_8014abac();
	if (pMVar5->mtalkmsg - 0x90U < 3) {
		if (((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) == 0) {
			if (monster[iParm1]._mgoal == '\a') {
				pMVar5->mtalkmsg = pMVar5->mtalkmsg + 1;
				monster[iParm1]._mgoal = '\x06';
				QuestStruct_ARRAY_800dda54[1]._qvar1 = '\x05';
				QuestStruct_ARRAY_800dda54[1]._qvar2 = (uchar)pMVar5->mtalkmsg;
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\x02');
				}
			}
			goto LAB_80153c68;
		}
LAB_80153c94:
		if ((pMVar5->mtalkmsg == 0x93) && (uVar4 = effect_is_playing__Fi(0x34d), uVar4 == '\0')) {
			uVar4 = monster[iParm1]._mgoal;
			if (uVar4 != '\a') goto LAB_80153d08;
			monster[iParm1]._mgoal = '\x01';
			monster[iParm1]._msquelch = -1;
			uVar4 = deltaload;
			pMVar5->mtalkmsg = 0;
			QuestStruct_ARRAY_800dda54[1]._qvar1 = '\x04';
			if (uVar4 == '\0') {
				NetSendCmdQuest__FUcUc('\x01','\x02');
			}
		}
	}
	else {
LAB_80153c68:
		if (((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) goto LAB_80153c94;
	}
	uVar4 = monster[iParm1]._mgoal;
LAB_80153d08:
	if ((uVar4 == '\x01') || (uVar4 == '\x04')) {
		FUN_8015159c(iParm1,1);
	}
	else {
		monster[iParm1]._mdir = cVar3;
	}
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80153d80(int iParm1);
 // line -1, offset 0x80153d80
// function 'FUN_80153d80' @0x80153D80 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80153d80(int iParm1)

{
	char cVar1;
	uchar uVar2;
	int iVar3;
	int iVar4;
	int __x;
	MonsterStruct *pMVar5;
	int __x_00;
	
	pMVar5 = monster + iParm1;
	__x = (int)monster[iParm1]._mx;
	__x_00 = (int)monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	cVar1 = FUN_8014abac();
	iVar3 = __x_00 * 8;
	if (pMVar5->mtalkmsg == 0x94) {
		if (((&dung_map)[__x * 0x70 + __x_00].dFlags & 4U) == 0) {
			iVar3 = __x_00 << 3;
			if (monster[iParm1]._mgoal == '\a') {
				pMVar5->mtalkmsg = 0x95;
				monster[iParm1]._mgoal = '\x06';
				iVar3 = __x_00 << 3;
			}
			goto LAB_80153e44;
		}
	}
	else {
LAB_80153e44:
		if (((&(&dung_map)[__x * 0x70].dFlags)[iVar3] & 4U) == 0) goto LAB_80153ef4;
	}
	__x = __x - (uint)monster[iParm1]._menemyx;
	__x_00 = __x_00 - (uint)monster[iParm1]._menemyy;
	iVar3 = abs(__x);
	iVar4 = abs(__x_00);
	if (iVar3 <= iVar4) {
		__x = __x_00;
	}
	abs(__x);
	if (((pMVar5->mtalkmsg == 0x95) && (uVar2 = effect_is_playing__Fi(0x35b), uVar2 == '\0')) &&
		 (monster[iParm1]._mgoal == '\a')) {
		monster[iParm1]._mgoal = '\x01';
		monster[iParm1]._msquelch = -1;
		pMVar5->mtalkmsg = 0;
	}
LAB_80153ef4:
	if (((uint)monster[iParm1]._mgoal - 1 < 2) || (monster[iParm1]._mgoal == 4)) {
		FUN_801536d4(iParm1);
	}
	monster[iParm1]._mdir = cVar1;
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80153f7c(int iParm1);
 // line -1, offset 0x80153f7c
// function 'FUN_80153f7c' @0x80153F7C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80153f7c(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	int iVar5;
	MonsterStruct *pMVar6;
	
	pMVar6 = monster + iParm1;
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	if (monster[iParm1]._mmode == '\0') {
		cVar3 = FUN_8014abac();
		iVar5 = pMVar6->mtalkmsg;
		if (iVar5 == 0x14) {
			if ((((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) == 0) &&
				 (monster[iParm1]._mgoal == '\a')) {
				pMVar6->mtalkmsg = 0x15;
				monster[iParm1]._mgoal = '\x06';
			}
			iVar5 = pMVar6->mtalkmsg;
		}
		if ((iVar5 == 0x15) && (QuestStruct_ARRAY_800dda90[3]._qvar1 == '\x03')) {
			pMVar6->mtalkmsg = 0;
			monster[iParm1]._mgoal = '\x01';
		}
		if (((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) {
			if (((pMVar6->mtalkmsg == 0x16) && (uVar4 = effect_is_playing__Fi(0x357), uVar4 == '\0')) &&
				 (monster[iParm1]._mgoal == '\a')) {
				ObjChangeMap__Fiiii(setpc_x,setpc_y,setpc_x + setpc_w + 1,setpc_y + setpc_h + 1);
				QuestStruct_ARRAY_800dda90[3]._qvar1 = '\x03';
				if (deltaload == '\0') {
					NetSendCmdQuest__FUcUc('\x01','\a');
				}
				RedoPlayerVision__Fv();
				monster[iParm1]._mgoal = '\x01';
				monster[iParm1]._msquelch = -1;
				pMVar6->mtalkmsg = 0;
			}
			if ((QuestStruct_ARRAY_800dda90[3]._qvar1 == '\x03') &&
				 ((monster[iParm1]._mgoal == '\x01' || (monster[iParm1]._mgoal == '\x05')))) {
				FUN_80151184(iParm1);
			}
		}
		monster[iParm1]._mdir = cVar3;
		if (monster[iParm1]._mmode == '\0') {
			monster[iParm1].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801541cc(int iParm1);
 // line -1, offset 0x801541cc
// function 'FUN_801541cc' @0x801541CC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801541cc(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	MonsterStruct *pMVar5;
	
	pMVar5 = monster + iParm1;
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	cVar3 = FUN_8014abac();
	if (((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) {
		if (gbMaxPlayers == '\x01') {
			if (pMVar5->mtalkmsg == 0x23) {
				if (((monster[iParm1]._mgoal == '\x06') && ((&plr)[myplr]._px == 0x23)) &&
					 ((&plr)[myplr]._py == 0x2e)) {
					monster[iParm1]._mmode = '\x11';
					QuestStruct_800ddb6c._qvar1 = '\x05';
					if (deltaload == '\0') {
						NetSendCmdQuest__FUcUc('\x01','\x0f');
					}
				}
				if (((pMVar5->mtalkmsg == 0x23) && (uVar4 = effect_is_playing__Fi(0x352), uVar4 == '\0')) &&
					 (monster[iParm1]._mgoal == '\a')) {
					ObjChangeMapResync__Fiiii(1,0x12,0x14,0x18);
					RedoPlayerVision__Fv();
					QuestStruct_800ddb6c._qvar1 = '\x06';
					if (deltaload == '\0') {
						NetSendCmdQuest__FUcUc('\x01','\x0f');
					}
					monster[iParm1]._mgoal = '\x01';
					monster[iParm1]._msquelch = -1;
					pMVar5->mtalkmsg = 0;
				}
			}
			if (gbMaxPlayers == '\x01') goto LAB_801543e8;
		}
		if (((pMVar5->mtalkmsg == 0x23) && (monster[iParm1]._mgoal == '\x06')) &&
			 (QuestStruct_800ddb6c._qvar1 < 4)) {
			monster[iParm1]._mmode = '\x11';
		}
	}
LAB_801543e8:
	if (((uint)monster[iParm1]._mgoal - 1 < 2) || (monster[iParm1]._mgoal == 4)) {
		FUN_801536d4(iParm1);
	}
	monster[iParm1]._mdir = cVar3;
	if ((monster[iParm1]._mmode == '\0') || (monster[iParm1]._mmode == '\x11')) {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80154470(int iParm1);
 // line -1, offset 0x80154470
// function 'FUN_80154470' @0x80154470 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80154470(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	if (monster[iParm1]._mmode == '\0') {
		cVar3 = FUN_8014abac();
		if (((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) {
			uVar4 = '\x01';
			if ((gbMaxPlayers == '\x01') && (uVar4 = '\x06', 5 < QuestStruct_800ddb6c._qvar1)) {
				monster[iParm1]._mgoal = '\x01';
				monster[iParm1].mtalkmsg = 0;
			}
			else {
				monster[iParm1]._mgoal = uVar4;
			}
		}
		if (monster[iParm1]._mgoal == '\x01') {
			FUN_80151c44(iParm1);
		}
		else {
			monster[iParm1]._mdir = cVar3;
		}
		if (monster[iParm1]._mmode == '\0') {
			monster[iParm1].Action = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801545a8(int iParm1);
 // line -1, offset 0x801545a8
// function 'FUN_801545a8' @0x801545A8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801545a8(int iParm1)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	uchar uVar4;
	int iVar5;
	MonsterStruct *pMVar6;
	int iVar7;
	
	pMVar6 = monster + iParm1;
	cVar1 = monster[iParm1]._mx;
	iVar7 = (int)monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	cVar3 = FUN_8014abac();
	iVar5 = iVar7 * 8;
	if (pMVar6->mtalkmsg == 0x51) {
		if (((&dung_map)[(int)cVar1 * 0x70 + iVar7].dFlags & 4U) == 0) {
			iVar5 = iVar7 << 3;
			if (monster[iParm1]._mgoal == '\a') {
				pMVar6->mtalkmsg = 0x52;
				monster[iParm1]._mgoal = '\x06';
				iVar5 = iVar7 << 3;
			}
			goto LAB_80154668;
		}
	}
	else {
LAB_80154668:
		if (((&(&dung_map)[(int)cVar1 * 0x70].dFlags)[iVar5] & 4U) == 0) goto LAB_80154704;
	}
	if (((pMVar6->mtalkmsg == 0x53) &&
			(uVar4 = effect_is_playing__Fi(0x351), uVar2 = deltaload, uVar4 == '\0')) &&
		 (monster[iParm1]._mgoal == '\a')) {
		pMVar6->mtalkmsg = 0;
		QuestStruct_ARRAY_800dda90[0]._qactive = '\x03';
		if (uVar2 == '\0') {
			NetSendCmdQuest__FUcUc('\x01','\x04');
		}
		FUN_8014c3d8(iParm1,0xffffffff);
	}
LAB_80154704:
	monster[iParm1]._mdir = cVar3;
	if (monster[iParm1]._mmode == '\0') {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80154758(int iParm1);
 // line -1, offset 0x80154758
// function 'FUN_80154758' @0x80154758 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80154758(int iParm1)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	MonsterStruct *pMVar5;
	
	pMVar5 = monster + iParm1;
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	if (monster[iParm1]._mmode != '\0') {
		return;
	}
	cVar3 = FUN_8014abac();
	if ((((&dung_map)[(int)cVar1 * 0x70 + (int)cVar2].dFlags & 4U) != 0) && (pMVar5->mtalkmsg == 0x6e)
		 ) {
		if (monster[iParm1]._mgoal == '\x06') {
			monster[iParm1]._mmode = '\x11';
		}
		if ((pMVar5->mtalkmsg == 0x6e) && (uVar4 = effect_is_playing__Fi(0x358), uVar4 == '\0')) {
			uVar4 = monster[iParm1]._mgoal;
			if (uVar4 != '\a') goto LAB_80154854;
			monster[iParm1]._mgoal = '\x01';
			monster[iParm1]._msquelch = -1;
			pMVar5->mtalkmsg = 0;
		}
	}
	uVar4 = monster[iParm1]._mgoal;
LAB_80154854:
	if (uVar4 == '\x01') {
		FUN_8014fd88(iParm1);
	}
	monster[iParm1]._mdir = cVar3;
	if ((monster[iParm1]._mmode == '\0') || (monster[iParm1]._mmode == '\x11')) {
		monster[iParm1].Action = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801548c0(void);
 // line -1, offset 0x801548c0
// function 'FUN_801548c0' @0x801548C0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801548c0(void)

{
	short sVar1;
	int iVar2;
	int iVar3;
	char *pcVar4;
	short *psVar5;
	
	iVar3 = 0;
	pcVar4 = &monster[0]._mDelFlag;
	iVar2 = 0;
	do {
		if (*pcVar4 != '\0') {
			(&monster[0]._mx)[iVar2] = '\x01';
			(&monster[0]._my)[iVar2] = '\0';
			(&monster[0]._mfutx)[iVar2] = '\0';
			(&monster[0]._mfuty)[iVar2] = '\0';
			(&monster[0]._moldx)[iVar2] = '\0';
			(&monster[0]._moldy)[iVar2] = '\0';
			*pcVar4 = '\0';
		}
		pcVar4 = pcVar4 + 0x68;
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x68;
	} while (iVar3 < 4);
	iVar2 = 4;
	if (4 < iGp00001b4c) {
		psVar5 = &SHORT_8010a0cc;
		do {
			sVar1 = *psVar5;
			psVar5 = psVar5 + 1;
			if (monster[(int)sVar1]._mDelFlag == '\0') {
				iVar2 = iVar2 + 1;
			}
			else {
				FUN_8014ab74();
				iVar2 = 0;
				psVar5 = &monstactive;
			}
		} while (iVar2 < iGp00001b4c);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_801549e4(void);
 // line -1, offset 0x801549e4
// function 'FUN_801549e4' @0x801549E4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801549e4(void)

{
	uchar uVar1;
	ushort uVar2;
	char cVar3;
	int iVar4;
	char cVar5;
	int iVar6;
	uint uVar7;
	int iVar8;
	int iVar9;
	uint uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	FUN_801548c0();
	uGp00001b44 = uGp00001b44 + 1;
	iVar14 = 0;
	uVar7 = uGp00001b44 % 200;
	if (0 < iGp00001b4c) {
		iVar4 = 0;
		do {
			iVar4 = (int)*(short *)((int)&monstactive + iVar4);
			if ((uVar7 == 0) && (3 < iVar4)) {
				monster[iVar4]._mFlags = monster[iVar4]._mFlags & 0xffef;
			}
			uVar10 = (uint)monster[iVar4]._menemy;
			iVar12 = (int)monster[iVar4]._mx;
			iVar13 = (int)monster[iVar4]._my;
			iVar11 = 0;
			if ((monster[iVar4]._mFlags & 8) == 0) {
				iVar9 = monster[iVar4]._mhitpoints;
				if ((iVar9 < monster[iVar4]._mmaxhp) && (0 < iVar9 >> 6)) {
					iVar8 = (uint)(byte)monster[iVar4].mLevel << 0x18;
					iVar6 = iVar8 >> 0x18;
					if (1 < iVar6) {
						iVar6 = iVar8 >> 0x19;
					}
					monster[iVar4]._mhitpoints = iVar9 + iVar6;
				}
			}
			if ((((((&dung_map)[iVar12 * 0x70 + iVar13].dFlags & 3U) != 0) &&
					 (((&dung_map)[iVar12 * 0x70 + iVar13].dFlags & 4U) != 0)) &&
					(monster[iVar4]._msquelch == '\0')) && ((monster[iVar4].MType)->mtype == '3')) {
				PlaySFX__Fi(USFX_CLEAVER);
			}
			if ((monster[iVar4]._mFlags & 0x10) == 0) {
				if ((&plr)[uVar10].plractive == '\0') {
					uVar10 = uVar10 ^ 1;
					monster[iVar4]._menemy = (uchar)uVar10;
				}
				monster[iVar4]._menemyx = (uchar)(&plr)[uVar10]._px;
				monster[iVar4]._menemyy = (uchar)(&plr)[uVar10]._py;
				if (((&dung_map)[iVar12 * 0x70 + iVar13].dFlags & 3U) == 0) {
					if ((monster[iVar4]._msquelch != '\0') && (monster[iVar4]._mAi != 'n')) {
						monster[iVar4]._msquelch = monster[iVar4]._msquelch + -1;
					}
				}
				else {
					monster[iVar4]._msquelch = -1;
					monster[iVar4]._lastx = (char)(&plr)[uVar10]._px;
					monster[iVar4]._lasty = (char)(&plr)[uVar10]._py;
				}
			}
			else {
				uVar1 = monster[uVar10]._mfutx;
				monster[iVar4]._lastx = uVar1;
				monster[iVar4]._menemyx = uVar1;
				uVar1 = monster[uVar10]._mfuty;
				monster[iVar4]._lasty = uVar1;
				monster[iVar4]._menemyy = uVar1;
			}
			if (((((&dung_map)[iVar12 * 0x70 + iVar13].dFlags & 3U) != 0) ||
					(monster[iVar4]._msquelch != '\0')) || (iVar14 < 4)) {
				while( true ) {
					(*(code *)AiProc[(uint)monster[iVar4]._mAi])(iVar4);
					switch(monster[iVar4]._mmode) {
					case '\0':
						iVar11 = FUN_8014ca90(iVar4);
						break;
					case '\x01':
						iVar11 = FUN_8014caf0(iVar4);
						break;
					case '\x02':
						iVar11 = FUN_8014cd60(iVar4);
						break;
					case '\x03':
						iVar11 = FUN_8014cf4c(iVar4);
						break;
					case '\x04':
						iVar11 = FUN_8014da3c(iVar4);
						break;
					case '\x05':
						iVar11 = FUN_8014eab4(iVar4);
						break;
					case '\x06':
						iVar11 = FUN_8014ed0c(iVar4);
						break;
					case '\a':
						iVar11 = FUN_8014df78(iVar4);
						break;
					case '\b':
						iVar11 = FUN_8014e054(iVar4);
						break;
					case '\t':
						iVar11 = FUN_8014e134(iVar4);
						break;
					case '\n':
						iVar11 = FUN_8014dbe8(iVar4);
						break;
					case '\v':
						iVar11 = FUN_8014eed0(iVar4);
						break;
					case '\f':
						iVar11 = FUN_8014dd70(iVar4);
						break;
					case '\r':
						iVar11 = FUN_8014ef7c(iVar4);
						break;
					case '\x0e':
						iVar11 = 0;
						break;
					case '\x0f':
						iVar11 = FUN_8014f090(iVar4);
						break;
					case '\x10':
						iVar11 = FUN_8014e260(iVar4);
						break;
					case '\x11':
						iVar11 = FUN_8014e2fc(iVar4);
					}
					if (iVar11 == 0) break;
					FUN_8014f33c(iVar4);
				}
				if (monster[iVar4]._mmode != '\x0f') {
					uVar2 = monster[iVar4]._mFlags;
					cVar5 = monster[iVar4]._mAnimCnt + '\x01';
					monster[iVar4]._mAnimCnt = cVar5;
					if (((uVar2 & 4) == 0) && (monster[iVar4]._mAnimDelay <= cVar5)) {
						uVar2 = monster[iVar4]._mFlags;
						monster[iVar4]._mAnimCnt = '\0';
						if ((uVar2 & 2) == 0) {
							cVar5 = monster[iVar4]._mAnimLen;
							cVar3 = monster[iVar4]._mAnimFrame + '\x01';
							monster[iVar4]._mAnimFrame = cVar3;
							if (cVar5 < cVar3) {
								monster[iVar4]._mAnimFrame = '\x01';
							}
						}
						else {
							cVar5 = monster[iVar4]._mAnimFrame;
							monster[iVar4]._mAnimFrame = cVar5 + -1;
							if (cVar5 == '\x01') {
								monster[iVar4]._mAnimFrame = monster[iVar4]._mAnimLen;
							}
						}
					}
				}
			}
			iVar14 = iVar14 + 1;
			iVar4 = iVar14 * 2;
		} while (iVar14 < iGp00001b4c);
	}
	FUN_801548c0();
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_80154fac(int iParm1,int iParm2);
 // line -1, offset 0x80154fac
// function 'FUN_80154fac' @0x80154FAC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_80154fac(int iParm1,int iParm2)

{
	uchar uVar1;
	byte bVar2;
	int y;
	uint x;
	uint y_00;
	
	y_00 = (int)monster[iParm1]._my + (int)(&offset_y)[iParm2];
	x = (int)monster[iParm1]._mx + (int)(&offset_x)[iParm2];
	if (((y_00 < 0x62) && (x < 0x62)) && (uVar1 = PosOkMonst__Fiii(iParm1,x,y_00), uVar1 != '\0')) {
		if (iParm2 == 6) {
			uVar1 = SolidLoc__Fii(x,y_00 + 1);
			if (uVar1 != '\0') {
				return 0;
			}
			bVar2 = (&dung_map)[x * 0x70 + y_00 + 1].dFlags & 0x10;
		}
		else {
			if (iParm2 == 2) {
				uVar1 = SolidLoc__Fii(x + 1,y_00);
				if (uVar1 != '\0') {
					return 0;
				}
				bVar2 = (&dung_map)[(x + 1) * 0x70 + y_00].dFlags & 0x10;
			}
			else {
				if (iParm2 == 4) {
					uVar1 = SolidLoc__Fii(x + 1,y_00);
					if (uVar1 != '\0') {
						return 0;
					}
					y = y_00 + 1;
				}
				else {
					if (iParm2 != 0) {
						return 1;
					}
					uVar1 = SolidLoc__Fii(x - 1,y_00);
					if (uVar1 != '\0') {
						return 0;
					}
					y = y_00 - 1;
				}
				bVar2 = SolidLoc__Fii(x,y);
			}
		}
		if (bVar2 == 0) {
			return 1;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// uint FUN_80155158(int iParm1,int iParm2);
 // line -1, offset 0x80155158
// function 'FUN_80155158' @0x80155158 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_80155158(int iParm1,int iParm2)

{
	undefined *puVar1;
	uint uVar2;
	
	uVar2 = 0;
	puVar1 = (undefined *)GetMISSILE__Fii(iParm1,iParm2);
	if (puVar1 != &DAT_00000001) {
		uVar2 = (uint)(((&dung_map)[iParm1 * 0x70 + iParm2].dFlags & 0x10U) == 0);
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// uint FUN_801551f0(code *pcParm1,int iParm2,int iParm3,int iParm4,int iParm5);
 // line -1, offset 0x801551f0
// function 'FUN_801551f0' @0x801551F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_801551f0(code *pcParm1,int iParm2,int iParm3,int iParm4,int iParm5)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int __x;
	int __x_00;
	
	bVar1 = false;
	__x_00 = iParm4 - iParm2;
	__x = iParm5 - iParm3;
	iVar3 = abs(__x_00);
	iVar4 = abs(__x);
	if (iVar4 < iVar3) {
		iVar3 = iParm3;
		iVar4 = iParm2;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar3 = iParm5;
			iVar4 = iParm4;
			iParm4 = iParm2;
			iParm5 = iParm3;
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
		while ((!bVar1 && ((iVar4 != iParm4 || (iVar3 != iParm5))))) {
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
			if ((iVar4 != iParm2) || (bVar1 = false, iVar3 != iParm3)) {
				uVar6 = (*pcParm1)(iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar3 = iParm3;
		iVar4 = iParm2;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar3 = iParm5;
			iVar4 = iParm4;
			iParm4 = iParm2;
			iParm5 = iParm3;
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
		while ((!bVar1 && ((iVar3 != iParm5 || (iVar4 != iParm4))))) {
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
			if ((iVar3 != iParm3) || (bVar1 = false, iVar4 != iParm2)) {
				uVar6 = (*pcParm1)(iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	uVar6 = 0;
	if (iVar4 == iParm4) {
		uVar6 = (uint)(iVar3 == iParm5);
	}
	return uVar6;
}



// decompiled code
// original method signature: 
// uint FUN_801551f8(code *param_1,int param_2,int param_3,int param_4);
 // line -1, offset 0x801551f8
// function 'FUN_801551f8' @0x801551F8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_801551f8(code *param_1,int param_2,int param_3,int param_4)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int __x;
	int __x_00;
	code *param_5;
	int param_21;
	
	bVar1 = false;
	__x_00 = param_4 - param_2;
	__x = param_21 - param_3;
	param_5 = param_1;
	iVar3 = abs(__x_00);
	iVar4 = abs(__x);
	if (iVar4 < iVar3) {
		iVar3 = param_3;
		iVar4 = param_2;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar3 = param_21;
			iVar4 = param_4;
			param_4 = param_2;
			param_21 = param_3;
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
		while ((!bVar1 && ((iVar4 != param_4 || (iVar3 != param_21))))) {
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
			if ((iVar4 != param_2) || (bVar1 = false, iVar3 != param_3)) {
				uVar6 = (*param_5)(iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar3 = param_3;
		iVar4 = param_2;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar3 = param_21;
			iVar4 = param_4;
			param_4 = param_2;
			param_21 = param_3;
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
		while ((!bVar1 && ((iVar3 != param_21 || (iVar4 != param_4))))) {
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
			if ((iVar3 != param_3) || (bVar1 = false, iVar4 != param_2)) {
				uVar6 = (*param_5)(iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	uVar6 = 0;
	if (iVar4 == param_4) {
		uVar6 = (uint)(iVar3 == param_21);
	}
	return uVar6;
}



// decompiled code
// original method signature: 
// uint FUN_80155478(undefined4 uParm1,undefined4 uParm2,undefined4 uParm3,undefined4 uParm4);
 // line -1, offset 0x80155478
// function 'FUN_80155478' @0x80155478 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_80155478(undefined4 uParm1,undefined4 uParm2,undefined4 uParm3,undefined4 uParm4)

{
	uint uVar1;
	
	uVar1 = FUN_801551f0(FUN_80155158,uParm1,uParm2,uParm3,uParm4);
	return uVar1 & 0xff;
}



// decompiled code
// original method signature: 
// uint FUN_801554b8(code *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6);
 // line -1, offset 0x801554b8
// function 'FUN_801554b8' @0x801554B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_801554b8(code *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int __x;
	int __x_00;
	
	bVar1 = false;
	__x_00 = param_5 - param_3;
	__x = param_6 - param_4;
	iVar3 = abs(__x_00);
	iVar4 = abs(__x);
	if (iVar4 < iVar3) {
		iVar3 = param_4;
		iVar4 = param_3;
		if (__x_00 < 0) {
			__x_00 = -__x_00;
			__x = -__x;
			iVar3 = param_6;
			iVar4 = param_5;
			param_5 = param_3;
			param_6 = param_4;
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
		while ((!bVar1 && ((iVar4 != param_5 || (iVar3 != param_6))))) {
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
			if ((iVar4 != param_3) || (bVar1 = false, iVar3 != param_4)) {
				uVar6 = (*param_1)(param_2,iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	else {
		iVar3 = param_4;
		iVar4 = param_3;
		if (__x < 0) {
			__x = -__x;
			__x_00 = -__x_00;
			iVar3 = param_6;
			iVar4 = param_5;
			param_5 = param_3;
			param_6 = param_4;
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
		while ((!bVar1 && ((iVar3 != param_6 || (iVar4 != param_5))))) {
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
			if ((iVar3 != param_4) || (bVar1 = false, iVar4 != param_3)) {
				uVar6 = (*param_1)(param_2,iVar4,iVar3);
				bVar1 = false;
				if ((uVar6 & 0xff) == 0) {
					bVar1 = true;
				}
			}
		}
	}
	uVar6 = 0;
	if (iVar4 == param_5) {
		uVar6 = (uint)(iVar3 == param_6);
	}
	return uVar6;
}



// decompiled code
// original method signature: 
// uint FUN_801556a8(void);
 // line -1, offset 0x801556a8
// function 'FUN_801556a8' @0x801556A8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_801556a8(void)

{
	bool bVar1;
	uint uVar2;
	int unaff_s0;
	int unaff_s1;
	int unaff_s2;
	int unaff_s3;
	int unaff_s4;
	int unaff_s6;
	int unaff_s7;
	int unaff_s8;
	code *param_5;
	undefined4 param_7;
	int param_9;
	int param_11;
	
	do {
		unaff_s0 = unaff_s0 + unaff_s2;
		unaff_s4 = unaff_s4 + unaff_s1;
		while( true ) {
			unaff_s3 = unaff_s3 + 1;
			if ((unaff_s3 != param_11) || (bVar1 = false, unaff_s4 != param_9)) {
				uVar2 = (*param_5)(param_7,unaff_s4,unaff_s3);
				bVar1 = false;
				if ((uVar2 & 0xff) == 0) {
					bVar1 = true;
				}
			}
			if ((bVar1) || ((unaff_s3 == unaff_s8 && (unaff_s4 == unaff_s7)))) {
				uVar2 = 0;
				if (unaff_s4 == unaff_s7) {
					uVar2 = (uint)(unaff_s3 == unaff_s8);
				}
				return uVar2;
			}
			bVar1 = unaff_s0 < 1;
			if (unaff_s1 < 0) {
				bVar1 = !bVar1;
			}
			if (!bVar1) break;
			unaff_s0 = unaff_s0 + unaff_s6;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void FUN_8015574c(int iParm1,int iParm2);
 // line -1, offset 0x8015574c
// function 'FUN_8015574c' @0x8015574C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015574c(int iParm1,int iParm2)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = 0;
	if (0 < iGp00001b4c) {
		iVar5 = 0;
		iVar7 = 0;
		do {
			iVar3 = (int)*(short *)((int)&monstactive + iVar7);
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
				iVar2 = abs(iParm1 - (int)monster[iVar3]._mx);
				if (iVar2 < 5) {
					iVar2 = abs(iParm2 - (int)monster[iVar3]._my);
					bVar1 = iVar2 < 5;
				}
				if ((bVar1) && (0 < monster[iVar3]._mhitpoints >> 6)) {
					monster[iVar3]._mgoal = '\x02';
					monster[iVar3]._mgoalvar1 = iVar4;
					iVar4 = GetDirection__Fiiii(iParm1,iParm2,(int)(&monster[0]._mx)[iVar5],
																			(int)(&monster[0]._my)[iVar5]);
					monster[iVar3]._mdir = (char)iVar4;
				}
			}
			iVar5 = iVar5 + 0x68;
			iVar6 = iVar6 + 1;
			iVar7 = iVar7 + 2;
		} while (iVar6 < iGp00001b4c);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80155934(int iParm1);
 // line -1, offset 0x80155934
// function 'FUN_80155934' @0x80155934 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80155934(int iParm1)

{
	ushort uVar1;
	char *__src;
	
	if (0xe < monstkills[iParm1]) {
		if (gnDifficulty == 2) {
			uVar1 = monsterdata[iParm1].mMagicRes2;
		}
		else {
			uVar1 = monsterdata[iParm1].mMagicRes;
		}
		if ((uVar1 & 0x3f) == 0) {
			__src = GetStr__Fi(0x2ce);
			strcpy(&tempstr,__src);
		}
		else {
			if ((uVar1 & 7) != 0) {
				__src = GetStr__Fi(0x35f);
				strcpy(&tempstr,__src);
				if ((uVar1 & 1) != 0) {
					__src = GetStr__Fi(0x273);
					strcat(&tempstr,__src);
				}
				if ((uVar1 & 2) != 0) {
					if ((uVar1 & 1) != 0) {
						strcat(&tempstr,(char *)&PTR_DAT_8011c2c8);
					}
					__src = GetStr__Fi(0x157);
					strcat(&tempstr,__src);
				}
				if ((uVar1 & 4) != 0) {
					if ((uVar1 & 2) != 0) {
						strcat(&tempstr,(char *)&PTR_DAT_8011c2c8);
					}
					__src = GetStr__Fi(0x254);
					strcat(&tempstr,__src);
				}
				AddPanelString__FPCci(&tempstr,1);
			}
			if ((uVar1 & 0x38) == 0) goto LAB_80155b84;
			__src = GetStr__Fi(0x20d);
			strcpy(&tempstr,__src);
			if ((uVar1 & 8) != 0) {
				__src = GetStr__Fi(0x273);
				strcat(&tempstr,__src);
			}
			if ((uVar1 & 0x10) != 0) {
				if ((uVar1 & 8) != 0) {
					strcat(&tempstr,(char *)&PTR_DAT_8011c2c8);
				}
				__src = GetStr__Fi(0x157);
				strcat(&tempstr,__src);
			}
			if ((uVar1 & 0x20) != 0) {
				if ((uVar1 & 0x10) != 0) {
					strcat(&tempstr,(char *)&PTR_DAT_8011c2c8);
				}
				__src = GetStr__Fi(0x254);
				strcat(&tempstr,__src);
			}
		}
		AddPanelString__FPCci(&tempstr,1);
	}
LAB_80155b84:
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_80155adc(void);
 // line -1, offset 0x80155adc
// function 'FUN_80155adc' @0x80155ADC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80155adc(void)

{
	char *__src;
	uint unaff_s0;
	int unaff_s1;
	char *__dest;
	
	if (unaff_s1 != 0) {
		__src = GetStr__Fi(0x273);
		strcat(__dest,__src);
	}
	if ((unaff_s0 & 0x10) != 0) {
		if (unaff_s1 != 0) {
			strcat(__dest,(char *)&PTR_DAT_8011c2c8);
		}
		__src = GetStr__Fi(0x157);
		strcat(__dest,__src);
	}
	if ((unaff_s0 & 0x20) != 0) {
		if ((unaff_s0 & 0x10) != 0) {
			strcat(&tempstr,(char *)&PTR_DAT_8011c2c8);
		}
		__src = GetStr__Fi(0x254);
		strcat(&tempstr,__src);
	}
	AddPanelString__FPCci(&tempstr,1);
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_80155ae4(void);
 // line -1, offset 0x80155ae4
// function 'FUN_80155ae4' @0x80155AE4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80155ae4(void)

{
	char *__src;
	uint unaff_s0;
	int unaff_s1;
	char *__dest;
	
	__src = GetStr__Fi(0x273);
	strcat(__dest,__src);
	if ((unaff_s0 & 0x10) != 0) {
		if (unaff_s1 != 0) {
			strcat(__dest,(char *)&PTR_DAT_8011c2c8);
		}
		__src = GetStr__Fi(0x157);
		strcat(__dest,__src);
	}
	if ((unaff_s0 & 0x20) != 0) {
		if ((unaff_s0 & 0x10) != 0) {
			strcat(&tempstr,(char *)&PTR_DAT_8011c2c8);
		}
		__src = GetStr__Fi(0x254);
		strcat(&tempstr,__src);
	}
	AddPanelString__FPCci(&tempstr,1);
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_80155bb8(void);
 // line -1, offset 0x80155bb8
// function 'FUN_80155bb8' @0x80155BB8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80155bb8(void)

{
	ushort uVar1;
	char *__src;
	int StrId;
	
	uVar1 = monster[(&_pcursmonst)[sel_data]].mMagicRes;
	if ((uVar1 & 0x3f) == 0) {
		__src = GetStr__Fi(0x2d2);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
		StrId = 0x2cd;
	}
	else {
		StrId = 0x2d2;
		if ((uVar1 & 7) != 0) {
			StrId = 999;
		}
		__src = GetStr__Fi(StrId);
		strcpy(&tempstr,__src);
		AddPanelString__FPCci(&tempstr,1);
		StrId = 0x3e6;
		if ((uVar1 & 0x38) == 0) {
			StrId = 0x2cd;
		}
	}
	__src = GetStr__Fi(StrId);
	strcpy(&tempstr,__src);
	AddPanelString__FPCci(&tempstr,1);
	_pinfoflag[sel_data] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_80155ce4(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x80155ce4
// function 'FUN_80155ce4' @0x80155CE4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80155ce4(int iParm1,int iParm2,int iParm3)

{
	char cVar1;
	bool bVar2;
	byte bVar3;
	uchar uVar4;
	uint uVar5;
	int x;
	uint pnum;
	int iVar6;
	int i;
	int x_00;
	int y;
	
	i = (int)missile[iParm1]._misource;
	x_00 = (int)missile[iParm1]._mix;
	y = (int)missile[iParm1]._miy;
	(&dung_map)[iParm2 * 0x70 + iParm3].dMonster = missile[iParm1]._misource + 1;
	cVar1 = missile[iParm1]._mimfnum;
	monster[i]._mx = (char)iParm2;
	monster[i]._my = (char)iParm3;
	monster[i]._mdir = cVar1;
	cVar1 = monster[i]._mdir;
	monster[i]._mxoff = missile[iParm1]._mixoff;
	monster[i]._myoff = missile[iParm1]._miyoff;
	monster[i]._mAnimFrame = missile[iParm1]._miAnimFrame;
	M_StartStand__Fii(i,(int)cVar1);
	if ((uint)(monster[i].MType)->mtype - 0x48 < 4) {
		FUN_8014c5f0(i,(int)monster[i]._mdir,0);
	}
	else {
		if ((monster[i]._mFlags & 0x10) == 0) {
			FUN_8014b2d8(i,0xffffffff,0);
		}
		else {
			FUN_8014b8e8(i,0xffffffff,0);
		}
	}
	if ((monster[i]._mFlags & 0x10) == 0) {
		bVar3 = IsDplayer__Fii(x_00,y);
		pnum = (uint)bVar3 - 1;
		uVar4 = IsDplayer__Fii(x_00,y);
		if (((uVar4 != '\0') && (bVar3 = (monster[i].MType)->mtype, bVar3 != 0x28)) &&
			 (3 < (uint)bVar3 - 0x48)) {
			bVar3 = IsDplayer__Fii(x_00,y);
			FUN_8014d428(i,(uint)bVar3 - 1,500,(uint)monster[i].mMinDamage2,(uint)monster[i].mMaxDamage2);
			bVar3 = IsDplayer__Fii(x_00,y);
			if ((pnum == (uint)bVar3 - 1) && (3 < (uint)(monster[i].MType)->mtype - 0x59)) {
				bVar2 = true;
				if (1 < (&plr)[pnum]._pmode + ~PM_BLOCK) {
					StartPlrHit__FiiUc(pnum,0,'\x01');
				}
				x_00 = x_00 + (int)(&offset_x)[(int)monster[i]._mdir];
				y = y + (int)(&offset_y)[(int)monster[i]._mdir];
				if ((((FePlayerNo != 0) && (uVar5 = pnum ^ 1, (&plr)[pnum].plractive != '\0')) &&
						((&plr)[uVar5].plractive != '\0')) &&
					 (uVar4 = ChkPlrOffsets__Fiiii(x_00 * 8,y * 8,(&plr)[uVar5].WorldX,(&plr)[uVar5].WorldY),
					 uVar4 == '\0')) {
					bVar2 = false;
				}
				if ((bVar2) && (uVar4 = PosOkPlayer__Fiii(pnum,x_00,y), uVar4 != '\0')) {
					SetPlayerOld__Fi(pnum);
					WorldToOffset__Fiii(pnum,x_00 * 8 | 4,y * 8 | 4);
				}
			}
		}
	}
	else {
		if (((0 < (int)(&dung_map)[x_00 * 0x70 + y].dMonster) &&
				(bVar3 = (monster[i].MType)->mtype, bVar3 != 0x28)) && (3 < (uint)bVar3 - 0x48)) {
			FUN_8014d1f0(i,(int)(&dung_map)[x_00 * 0x70 + y].dMonster + -1,500,
									 (uint)monster[i].mMinDamage2,(uint)monster[i].mMaxDamage2);
			if (3 < (uint)(monster[i].MType)->mtype - 0x59) {
				x = x_00 + (int)(&offset_x)[(int)monster[i]._mdir];
				i = y + (int)(&offset_y)[(int)monster[i]._mdir];
				uVar4 = PosOkMonst__Fiii((int)(&dung_map)[x_00 * 0x70 + y].dMonster + -1,x,i);
				if (uVar4 != '\0') {
					iVar6 = (int)(&dung_map)[x_00 * 0x70 + y].dMonster + -1;
					(&dung_map)[x * 0x70 + i].dMonster = (&dung_map)[x_00 * 0x70 + y].dMonster;
					(&dung_map)[x_00 * 0x70 + y].dMonster = 0;
					monster[iVar6]._mx = (char)x;
					monster[iVar6]._mfutx = (char)x;
					monster[iVar6]._my = (char)i;
					monster[iVar6]._mfuty = (char)i;
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_801561b0(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x801561b0
// function 'FUN_801561b0' @0x801561B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_801561b0(int iParm1,int iParm2,int iParm3)

{
	bool bVar1;
	bool bVar2;
	bool bVar3;
	uchar uVar4;
	uint uVar5;
	uint uVar6;
	int iVar7;
	short *psVar8;
	int iVar9;
	
	iVar9 = 1;
	bVar3 = false;
	uVar5 = SEXT14((&dung_map)[iParm2 * 0x70 + iParm3].dObject);
	bVar1 = false;
	if (uVar5 != 0) {
		uVar6 = uVar5 - 1;
		if ((int)uVar5 < 1) {
			uVar6 = ~uVar5;
		}
		iVar7 = (int)object[uVar6]._otype;
		bVar1 = false;
		if (((iVar7 - 1U < 2) || (iVar7 - 0x2aU < 2)) || (iVar7 - 0x4aU < 2)) {
			bVar1 = true;
		}
		if ((object[uVar6]._oSolidFlag != '\0') && (!bVar1)) {
			iVar9 = 0;
		}
	}
	if (iVar9 != 0) {
		iVar9 = 0;
		uVar4 = SolidLoc__Fii(iParm2,iParm3);
		if ((uVar4 == '\0') || (bVar2 = false, bVar1)) {
			uVar4 = IsDplayer__Fii(iParm2,iParm3);
			bVar2 = false;
			if ((uVar4 == '\0') && (bVar2 = false, (&dung_map)[iParm2 * 0x70 + iParm3].dMonster == 0)) {
				iVar9 = 1;
				bVar2 = true;
			}
		}
		if (((bVar2) && (iVar7 = (int)(&dung_map)[iParm2 * 0x70 + iParm3].dMissile, iVar7 != 0)) &&
			 (-1 < iParm1)) {
			if (0 < iVar7) {
				if (missile[iVar7]._mitype == '\x05') {
					bVar3 = true;
				}
				else {
					iVar7 = 0;
					if (0 < nummissiles) {
						psVar8 = &missileactive;
						do {
							if (missile[(int)*psVar8]._mitype == '\x05') {
								bVar3 = true;
							}
							iVar7 = iVar7 + 1;
							psVar8 = psVar8 + 1;
						} while (iVar7 < nummissiles);
					}
				}
			}
			if ((bVar3) &&
				 (((monster[iParm1].mMagicRes & 0x10) == 0 || ((monster[iParm1].MType)->mtype == 'n')))) {
				iVar9 = 0;
			}
		}
	}
	return iVar9;
}



// decompiled code
// original method signature: 
// int FUN_8015648c(int iParm1,int iParm2,int iParm3);
 // line -1, offset 0x8015648c
// function 'FUN_8015648c' @0x8015648C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015648c(int iParm1,int iParm2,int iParm3)

{
	uchar uVar1;
	long lVar2;
	int i;
	int iVar3;
	int v;
	
	v = 0;
	i = 0;
	if (0 < iGp00001b1c) {
		iVar3 = 0;
		do {
			uVar1 = IsSkel__Fi((uint)(&Monsters[0].mtype)[iVar3]);
			if (uVar1 != '\0') {
				v = v + 1;
			}
			i = i + 1;
			iVar3 = iVar3 + 0x1c;
		} while (i < iGp00001b1c);
	}
	i = -1;
	if (v != 0) {
		lVar2 = ENG_random__Fl(v);
		v = 0;
		i = 0;
		if (0 < iGp00001b1c) {
			iVar3 = 0;
			do {
				if (lVar2 < v) break;
				uVar1 = IsSkel__Fi((uint)(&Monsters[0].mtype)[iVar3]);
				if (uVar1 != '\0') {
					v = v + 1;
				}
				i = i + 1;
				iVar3 = iVar3 + 0x1c;
			} while (i < iGp00001b1c);
		}
		i = AddMonster__FiiiiUc(iParm1,iParm2,iParm3,i + -1,1);
		if (i != -1) {
			M_StartSpStand__Fii(i,iParm3);
		}
	}
	return i;
}



// decompiled code
// original method signature: 
// void FUN_801565dc(int iParm1);
 // line -1, offset 0x801565dc
// function 'FUN_801565dc' @0x801565DC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801565dc(int iParm1)

{
	uchar uVar1;
	ItemStruct *pIVar2;
	MonsterStruct *pMVar3;
	uint pnum;
	int local_18 [2];
	
	pMVar3 = monster + iParm1;
	pnum = (uint)monster[iParm1]._menemy;
	if (monster[iParm1]._mmode != '\x11') {
		uVar1 = monster[iParm1]._mAi;
		monster[iParm1]._mmode = '\x11';
		if ((uVar1 == '\x17') || (uVar1 == '\x1e')) {
			uVar1 = QuestStatus__Fi(7);
			if ((uVar1 != '\0') &&
				 ((QuestStruct_ARRAY_800dda90[3]._qvar1 == '\x02' &&
					(pIVar2 = PlrHasItem__FiiRi(pnum,0xc,local_18), pIVar2 != (ItemStruct *)0x0)))) {
				FUN_8015d6fc(pnum,local_18[0]);
				QuestStruct_ARRAY_800dda90[3]._qactive = '\x03';
				pMVar3->mtalkmsg = 0x16;
				monster[iParm1]._mgoal = '\x06';
				NetSendCmdQuest__FUcUc('\x01','\a');
			}
			uVar1 = QuestStatus__Fi(4);
			if (((uVar1 != '\0') && (0x50 < pMVar3->mtalkmsg)) &&
				 (pIVar2 = PlrHasItem__FiiRi(pnum,0xf,local_18), pIVar2 != (ItemStruct *)0x0)) {
				FUN_8015d6fc(pnum,local_18[0]);
				pMVar3->mtalkmsg = 0x53;
				monster[iParm1]._mgoal = '\x06';
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015671c(int iParm1,int iParm2,int iParm3,int iParm4);
 // line -1, offset 0x8015671c
// function 'FUN_8015671c' @0x8015671C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015671c(int iParm1,int iParm2,int iParm3,int iParm4)

{
	ushort uVar1;
	char cVar2;
	int iVar3;
	char cVar4;
	
	(&dung_map)[iParm2 * 0x70 + iParm3].dMonster = (short)iParm1 + 1;
	cVar2 = (char)iParm2;
	monster[iParm1]._mx = cVar2;
	cVar4 = (char)iParm3;
	monster[iParm1]._my = cVar4;
	monster[iParm1]._mfutx = cVar2;
	monster[iParm1]._mfuty = cVar4;
	monster[iParm1]._moldx = cVar2;
	monster[iParm1]._moldy = cVar4;
	iVar3 = (&plr)[iParm1]._pMaxMana;
	cVar2 = missile[iParm4]._mispllvl;
	monster[iParm1].mArmorClass = '\x19';
	iVar3 = (iVar3 / 3) * 2 + (int)cVar2 * 0x280;
	monster[iParm1]._mmaxhp = iVar3;
	monster[iParm1]._mhitpoints = iVar3;
	monster[iParm1].mHit = (&plr)[iParm1]._pLevel * '\x02' + '(' + missile[iParm4]._mispllvl * '\x05';
	monster[iParm1].mMinDamage = missile[iParm4]._mispllvl * '\x02' + '\b';
	uVar1 = monster[iParm1]._mFlags;
	cVar2 = missile[iParm4]._mispllvl;
	monster[iParm1]._menemy = '\0';
	monster[iParm1]._mFlags = uVar1 | 0x30;
	monster[iParm1].mMaxDamage = cVar2 * '\x02' + '\x10';
	M_StartSpStand__Fii(iParm1,0);
	NetSendCmdGolem__FUcUcUcUclUc
						(monster[iParm1]._mx,monster[iParm1]._my,monster[iParm1]._mdir,monster[iParm1]._menemy,
						 monster[iParm1]._mhitpoints,(uint)currlevel);
	return;
}



// decompiled code
// original method signature: 
// uint FUN_8015694c(int iParm1);
 // line -1, offset 0x8015694c
// function 'FUN_8015694c' @0x8015694C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015694c(int iParm1)

{
	uint uVar1;
	
	if (monster[iParm1]._mgoal == '\x06') {
		uVar1 = 1;
	}
	else {
		uVar1 = (uint)(monster[iParm1]._mgoal == '\a');
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8015698c(int iParm1,undefined *puParm2);
 // line -1, offset 0x8015698c
// function 'FUN_8015698c' @0x8015698C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8015698c(int iParm1,undefined *puParm2)

{
	undefined4 uVar1;
	
	if ((monster[iParm1]._mAi == '\f') && ((monster[iParm1]._mFlags & 4) != 0)) {
		monster[iParm1]._mFlags = monster[iParm1]._mFlags & 0xfffb;
		monster[iParm1]._mmode = '\a';
		*puParm2 = 1;
		return 1;
	}
	uVar1 = 1;
	if (((uint)(monster[iParm1].MType)->mtype - 0x69 < 4) && (monster[iParm1]._mgoal != '\x01')) {
		*puParm2 = 0;
	}
	else {
		uVar1 = 0;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// uint FUN_80156a68(int iParm1,int iParm2);
 // line -1, offset 0x80156a68
// function 'FUN_80156a68' @0x80156A68 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_80156a68(int iParm1,int iParm2)

{
	return (uint)((&dung_map)[(int)monster[iParm1]._mx * 0x70 + (int)monster[iParm1]._my].dTransVal ==
							 (&dung_map)[(int)monster[iParm2]._mx * 0x70 + (int)monster[iParm2]._my].dTransVal);
}



// decompiled code
// original method signature: 
// void FUN_80156b00(int iParm1);
 // line -1, offset 0x80156b00
// function 'FUN_80156b00' @0x80156B00 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80156b00(int iParm1)

{
	int *piVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	uint uVar9;
	int iVar10;
	uint uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uint uVar15;
	int iVar16;
	
	iVar8 = myplr;
	iVar7 = sel_data;
	iVar16 = (&_pcursmonst)[sel_data];
	if (*(short *)&monster[iParm1]._mx == 1) {
		return;
	}
	iVar12 = (int)monster[iParm1]._mmode;
	if (iVar12 == 6) {
		return;
	}
	if (iVar12 == 0xb) {
		return;
	}
	if ((iVar12 - 1U & 0xff) < 3) {
		return;
	}
	sel_data = 0;
	myplr = -1;
	_pcursmonst = -1;
	if ((monster[iParm1]._menemy != 0) &&
		 (monster[(uint)monster[iParm1]._menemy]._mhitpoints >> 6 < 1)) {
		monster[iParm1]._menemy = '\0';
	}
	if (monster[iParm1]._mmode == '\x04') goto LAB_80156fcc;
	uVar11 = (uint)monster[iParm1]._menemy;
	if ((monster[iParm1]._menemy == 0) || (bVar6 = false, monster[iParm1]._msquelch == '\0')) {
		cVar2 = monster[iParm1]._mx;
		cVar3 = monster[iParm1]._my;
		monster[iParm1]._msquelch = -6;
		CheckArea__FiiiUci((int)cVar2,(int)cVar3,4,'\0',-1);
		if ((0 < (&_pcursmonst)[sel_data]) &&
			 (iVar12 = FUN_80156a68((&_pcursmonst)[sel_data],iParm1), iVar12 != 0)) {
			monster[iParm1]._menemy = (uchar)(&_pcursmonst)[sel_data];
			monster[iParm1]._menemyx = monster[(&_pcursmonst)[sel_data]]._mfutx;
			monster[iParm1]._menemyy = monster[(&_pcursmonst)[sel_data]]._mfuty;
			goto LAB_80156fcc;
		}
		uVar9 = 1;
		monster[iParm1]._menemy = '\0';
		uVar15 = SEXT14((&plr)[iParm1]._pdir);
		uVar11 = FUN_80154fac(iParm1,uVar15);
		if ((uVar11 & 0xff) == 0) {
			uVar11 = 0;
			do {
				uVar15 = uVar11;
				uVar9 = FUN_80154fac(iParm1,uVar15);
				uVar9 = uVar9 & 0xff;
				if (7 < (int)(uVar15 + 1)) break;
				uVar11 = uVar15 + 1;
			} while (uVar9 == 0);
		}
		if (uVar9 == 0) goto LAB_80156fcc;
	}
	else {
		cVar2 = monster[iParm1]._mx;
		cVar3 = monster[iParm1]._my;
		cVar4 = monster[uVar11]._mfutx;
		cVar5 = monster[uVar11]._mfuty;
		uVar15 = GetDirection__Fiiii((int)cVar2,(int)cVar3,(int)monster[uVar11]._mx,
																 (int)monster[uVar11]._my);
		monster[iParm1]._mdir = (char)uVar15;
		iVar12 = abs((int)cVar2 - (int)cVar4);
		if (iVar12 < 2) {
			iVar12 = abs((int)cVar3 - (int)cVar5);
			bVar6 = iVar12 < 2;
		}
		if (bVar6) {
			if (monster[uVar11]._msquelch == '\0') {
				monster[uVar11]._msquelch = -1;
				iVar12 = 0;
				monster[uVar11]._lastx = monster[iParm1]._mx;
				monster[uVar11]._lasty = monster[iParm1]._my;
				do {
					iVar10 = -2;
					iVar13 = 0;
					do {
						if (0 < (int)(&dung_map)
												 [((int)monster[iParm1]._mx + iVar10) * 0x70 +
													(int)monster[iParm1]._my + iVar12 + -2].dMonster) {
							monster[(int)(&dung_map)
													 [((int)monster[iParm1]._mx + iVar10) * 0x70 +
														(int)monster[iParm1]._my + iVar12 + -2].dMonster]._msquelch = -1;
						}
						iVar14 = iVar13 + 1;
						iVar10 = iVar13 + -1;
						iVar13 = iVar14;
					} while (iVar14 < 5);
					iVar12 = iVar12 + 1;
				} while (iVar12 < 5);
			}
			FUN_8015702c(iParm1);
			goto LAB_80156fcc;
		}
		if (monster[iParm1]._msquelch == '\0') {
			monster[iParm1]._msquelch = '\0';
		}
		else {
			monster[iParm1]._msquelch = monster[iParm1]._msquelch + -1;
		}
		uVar9 = 1;
		uVar11 = FUN_80154fac(iParm1,uVar15);
		if ((uVar11 & 0xff) == 0) {
			uVar11 = uVar15 + 1 & 7;
			uVar9 = 0;
			if (uVar11 != uVar15) {
				do {
					uVar11 = uVar11 & 7;
					uVar9 = FUN_80154fac(iParm1,uVar11);
					uVar9 = uVar9 & 0xff;
					if (uVar9 != 0) {
						uVar15 = uVar11;
					}
					uVar11 = uVar11 + 1;
				} while ((uVar11 != uVar15) && (uVar9 == 0));
			}
		}
		if (uVar9 == 0) {
			monster[iParm1]._menemy = '\0';
			goto LAB_80156fcc;
		}
	}
	FUN_8014f10c(iParm1,uVar15);
LAB_80156fcc:
	piVar1 = &_pcursmonst + sel_data;
	sel_data = iVar7;
	myplr = iVar8;
	*piVar1 = iVar16;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015702c(int iParm1);
 // line -1, offset 0x8015702c
// function 'FUN_8015702c' @0x8015702C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015702c(int iParm1)

{
	char cVar1;
	char cVar2;
	int md;
	
	md = FUN_8014abac();
	NewMonsterAnim__FiR10AnimStructii(iParm1,(monster[iParm1].MType)->Anims + 2,md,2);
	cVar1 = monster[iParm1]._mx;
	cVar2 = monster[iParm1]._my;
	monster[iParm1]._mmode = '\x04';
	monster[iParm1]._mxoff = '\0';
	monster[iParm1]._myoff = '\0';
	monster[iParm1]._mdir = (char)md;
	monster[iParm1]._mfutx = cVar1;
	monster[iParm1]._mfuty = cVar2;
	monster[iParm1]._moldx = cVar1;
	monster[iParm1]._moldy = cVar2;
	M_CheckEFlag__Fi(iParm1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015711c(int param_1,short param_2,short param_3,int param_4,int param_5,int param_6);
 // line -1, offset 0x8015711c
// function 'FUN_8015711c' @0x8015711C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015711c(int param_1,short param_2,short param_3,int param_4,int param_5,int param_6)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	CMonster *pCVar5;
	
	cVar1 = monster[param_1]._mx;
	cVar2 = monster[param_1]._my;
	iVar3 = (int)cVar1 + param_4;
	iVar4 = (int)cVar2 + param_5;
	(&dung_map)[iVar3 * 0x70 + iVar4].dMonster = ~(ushort)param_1;
	pCVar5 = monster[param_1].MType;
	monster[param_1]._mVar1 = (short)param_4;
	monster[param_1]._mmode = '\x01';
	monster[param_1]._moldx = cVar1;
	monster[param_1]._moldy = cVar2;
	monster[param_1]._mfutx = (char)iVar3;
	monster[param_1]._mfuty = (char)iVar4;
	monster[param_1]._mxvel = param_2;
	monster[param_1]._myvel = param_3;
	monster[param_1]._mVar2 = (short)param_5;
	monster[param_1]._mVar3 = (short)param_6;
	monster[param_1]._mdir = (char)param_6;
	NewMonsterAnim__FiR10AnimStructii(param_1,pCVar5->Anims + 1,param_6,1);
	monster[param_1]._mVar6 = 0;
	monster[param_1]._mVar7 = 0;
	monster[param_1]._mVar8 = 0;
	M_CheckEFlag__Fi(param_1);
	return;
}



