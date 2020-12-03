#include "THISDUST.H"
#include "SPELLS.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetManaAmount__Fii(int id /*$a0*/, int sn /*$a1*/)
 // line 54, offset 0x80077054
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x80077054
		// Variables:
	// 		int i; // $v1
	// 		int sl; // $t0
	// 		int ma; // $a2
	// 		int adj; // $a3
	/* end block 1 */
	// End offset: 0x80077300
	// End Line: 103

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetManaAmount__Fii(int id,int sn)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = (int)*(char *)(id * 0x19e8 + -0x7ff25a57 + sn) + (int)plr[id]._pISplLvlAdd + -1;
	iVar2 = 0;
	if (iVar3 < 0) {
		iVar3 = 0;
	}
	if (0 < iVar3) {
		iVar1 = iVar3;
		do {
			iVar1 = iVar1 + -1;
			iVar2 = iVar2 + (uint)(&spelldata)[sn].sManaAdj;
		} while (0 < iVar1);
	}
	if (sn == 1) {
		iVar2 = iVar2 >> 1;
	}
	if ((sn == 0x20) && (0 < iVar3)) {
		iVar2 = 0;
		iVar1 = iVar3;
		do {
			iVar1 = iVar1 + -1;
			iVar2 = iVar2 + (uint)(SpellData_ARRAY_800ddcec[25].sManaCost >> 3);
		} while (0 < iVar1);
	}
	if ((&spelldata)[sn].sManaCost == 0xff) {
		iVar1 = (uint)*(byte *)&plr[id]._pMaxManaBase - iVar2;
	}
	else {
		iVar1 = (uint)(&spelldata)[sn].sManaCost - iVar2;
	}
	iVar1 = iVar1 << 6;
	if (sn == 2) {
		iVar1 = (((int)plr[id]._pLevel * 2 + (uint)SpellData_800ddbe8.sManaCost) - iVar2) * 0x40;
	}
	if (sn == 0x22) {
		iVar1 = (((int)plr[id]._pLevel * 2 + (uint)SpellData_800ddbe8.sManaCost) - iVar2) * 0x40;
	}
	if (sn == 0x20) {
		while (0 < iVar3) {
			iVar3 = iVar3 + -1;
		}
	}
	if (plr[id]._pClass == '\x01') {
		iVar1 = iVar1 - (iVar1 >> 2);
	}
	if (iVar1 >> 6 < (int)(uint)(&spelldata)[sn].sMinMana) {
		iVar1 = (uint)(&spelldata)[sn].sMinMana << 6;
	}
	return (iVar1 * (100 - (int)plr[id]._pISplCost)) / 100;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UseMana__Fii(int id /*$s0*/, int sn /*$a1*/)
 // line 110, offset 0x80077308
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x80077308
		// Variables:
	// 		int ma; // $v0
	/* end block 1 */
	// End offset: 0x80077480
	// End Line: 163

	/* begin block 2 */
		// Start line: 226
	/* end block 2 */
	// End Line: 227

/* WARNING: Unknown calling convention yet parameter storage is locked */

void UseMana__Fii(int id,int sn)

{
	int iVar1;
	int iVar2;
	
	if ((id == myplr) && ((gbMaxPlayers != '\x02' || ((sn != 0x17 && (sn != 10)))))) {
		switch(plr[id]._pSplType) {
		case '\x01':
			iVar1 = GetManaAmount__Fii(id,sn);
			drawmanaflag = '\x01';
			iVar2 = plr[id]._pManaBase;
			plr[id]._pMana = plr[id]._pMana - iVar1;
			plr[id]._pManaBase = iVar2 - iVar1;
			break;
		case '\x02':
			if ((&ScrollFlag)[id] == 0) {
				RemoveScroll__Fi(id);
			}
			(&ScrollFlag)[id] = 0;
			break;
		case '\x03':
			UseStaffCharge__FP12PlayerStruct(plr + id);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckSpell__FiicUc(int id /*$s0*/, int sn /*$s1*/, char st /*$a2*/, unsigned char manaonly /*$a3*/)
 // line 170, offset 0x80077498
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x80077498
	/* end block 1 */
	// End offset: 0x80077520
	// End Line: 197

	/* begin block 2 */
		// Start line: 350
	/* end block 2 */
	// End Line: 351

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar CheckSpell__FiicUc(int id,int sn,char st,uchar manaonly)

{
	bool bVar1;
	int iVar2;
	
	if (st == '\0') {
		bVar1 = true;
	}
	else {
		iVar2 = GetSpellLevel__Fii(id,sn);
		if (iVar2 < 1) {
			bVar1 = false;
		}
		else {
			iVar2 = GetManaAmount__Fii(id,sn);
			bVar1 = iVar2 <= plr[id]._pMana;
		}
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CastSpell__Fiiiiiiii(int id /*$s3*/, int spl /*$s4*/, int sx /*$s7*/, int sy /*$fp*/, int dx /*stack 16*/, int dy /*stack 20*/, int caster /*stack 24*/, int spllvl /*stack 28*/)
 // line 203, offset 0x80077538
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x80077538
		// Variables:
	// 		int i; // $s1
	// 		int dir; // $s5
	/* end block 1 */
	// End offset: 0x8007781C
	// End Line: 244

	/* begin block 2 */
		// Start line: 416
	/* end block 2 */
	// End Line: 417

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CastSpell__Fiiiiiiii(int id,int spl,int sx,int sy,int dx,int dy,int caster,int spllvl)

{
	uchar uVar1;
	bool bVar2;
	byte *pbVar3;
	int iVar4;
	int iVar5;
	int midir;
	
	midir = 0;
	if (caster == 0) {
		if (gbMaxPlayers == '\x02') {
			if (spl == 0x17) {
				return;
			}
			if (spl == 10) {
				return;
			}
		}
		midir = GetDirection__Fiiii(sx,sy,dx,dy);
		iVar5 = id * 2;
		if (spl == 6) {
			midir = (int)plr[id]._pVar3;
			iVar5 = id << 1;
		}
		ChangeLightColour__Fii((int)(&plr[0]._plid)[iVar5 * 0x800 + id * 0x9e8],(int)&DAT_000023f0);
	}
	else {
		if (caster == 1) {
			midir = (int)monster[id]._mdir;
		}
	}
	if ((spl == 0x1c) && ((int)(&_pcursobj)[sel_data] != 0xffffffff)) {
		NetSendCmdLocParam1__FUcUcUcUcUs
							('\x01','\x11',(uchar)dx,(uchar)dy,(int)(&_pcursobj)[sel_data] & 0xffff);
	}
	else {
		iVar5 = 0;
		if ((&spelldata)[spl].sMissiles[0] != '\0') {
			bVar2 = true;
			do {
				if (!bVar2) break;
				iVar4 = spl * 0x34 + -0x7ff22463;
				pbVar3 = (byte *)(iVar4 + iVar5);
				iVar5 = iVar5 + 1;
				AddMissile__Fiiiiiiciii(sx,sy,dx,dy,midir,(uint)*pbVar3,(int)(char)caster,id,0,spllvl);
				bVar2 = iVar5 < 3;
			} while (*(char *)(iVar4 + iVar5) != '\0');
		}
		uVar1 = (&spelldata)[spl].sMissiles[0];
		if (uVar1 == '\n') {
			UseMana__Fii(id,7);
			uVar1 = (&spelldata)[spl].sMissiles[0];
		}
		if (uVar1 == '4') {
			UseMana__Fii(id,0x1e);
			iVar5 = (spllvl >> 1) + 3;
			if (0 < iVar5) {
				do {
					AddMissile__Fiiiiiiciii(sx,sy,dx,dy,midir,0x34,(int)(char)caster,id,0,spllvl);
					iVar5 = iVar5 + -1;
				} while (0 < iVar5);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoResurrect__Fii(int pnum /*$s2*/, int rid /*$s1*/)
 // line 250, offset 0x80077850
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x80077850
		// Variables:
	// 		struct PlayerStruct *ptrplr; // $s0
	/* end block 1 */
	// End offset: 0x80077A98
	// End Line: 313

	/* begin block 2 */
		// Start line: 516
	/* end block 2 */
	// End Line: 517

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoResurrect__Fii(int pnum,int rid)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	NewCursor__Fi(1);
	if ((uchar)rid != -1) {
		if (rid == myplr) {
			deathflag = '\0';
			gamemenu_off__Fv();
			drawhpflag = '\x01';
			drawmanaflag = '\x01';
		}
		light_rad = plr[rid]._pLightRad;
		ClrPlrPath__Fi(rid);
		plr[rid].plractive = '\x01';
		gbActivePlayers = '\x02';
		PostGamePad__Fiiii(rid + 6,0,0,0);
		plr[rid].destAction = -1;
		plr[rid]._pInvincible = '\0';
		SetPlayerHitPoints__Fii(rid,0x280);
		iVar5 = plr[rid]._pMaxHP;
		iVar2 = plr[rid]._pMaxHPBase;
		iVar6 = plr[rid]._pMaxMana;
		iVar4 = plr[rid]._pMaxManaBase;
		plr[rid]._pMana = 0;
		iVar3 = plr[rid]._pHitPoints;
		plr[rid]._pManaBase = iVar4 - iVar6;
		plr[rid]._pHPBase = iVar3 - (iVar5 - iVar2);
		CalcPlrInv__FiUc(rid,'\x01');
		cVar1 = plr[rid]._pdir;
		plr[rid].plrlevel = (uint)currlevel;
		StartStand__Fii(rid,(int)cVar1);
		PlacePlayer__FiiiUc(rid,(int)plr[pnum]._px,(int)plr[pnum]._py,'\0');
		if ((int)plr[rid]._plid == -1) {
			iVar2 = AddLight__Fiii((int)plr[rid]._px,(int)plr[rid]._py,
														 (int)(&DAT_000023f0 + (int)light_rad));
			plr[rid]._plid = (char)iVar2;
		}
		else {
			ChangeLightXY__Fiii((int)plr[rid]._plid,(int)plr[rid]._px,(int)plr[rid]._py);
		}
		if ((int)plr[rid]._pvid == -1) {
			iVar2 = AddVision__FiiiUc((int)plr[rid]._px,(int)plr[rid]._py,10,(uchar)rid);
			plr[rid]._pvid = (char)iVar2;
		}
		else {
			ChangeVisionXY__Fiii((int)plr[rid]._pvid,(int)plr[rid]._px,(int)plr[rid]._py);
		}
		AddMissile__Fiiiiiiciii
							((int)plr[rid]._px,(int)plr[rid]._py,(int)plr[rid]._px,(int)plr[rid]._py,0,0x3e,0,pnum
							 ,0,0);
		(&_pcursplr)[pnum] = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoHealOther__Fii(int pnum /*$s2*/, int rid /*$s3*/)
 // line 320, offset 0x80077ab8
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x80077AB8
		// Variables:
	// 		int i; // $s0
	// 		long l; // $s1
	/* end block 1 */
	// End offset: 0x80077CF0
	// End Line: 342

	/* begin block 2 */
		// Start line: 678
	/* end block 2 */
	// End Line: 679

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoHealOther__Fii(int pnum,int rid)

{
	long lVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (pnum == myplr) {
		NewCursor__Fi(1);
	}
	if (((char)rid != -1) && (0 < plr[rid]._pHitPoints >> 6)) {
		lVar1 = ENG_random__Fl(10);
		iVar4 = (lVar1 + 1) * 0x40;
		iVar3 = 0;
		if ('\0' < plr[pnum]._pLevel) {
			do {
				lVar1 = ENG_random__Fl(4);
				iVar4 = iVar4 + (lVar1 + 1) * 0x40;
				iVar3 = iVar3 + 1;
			} while (iVar3 < (int)plr[pnum]._pLevel);
		}
		iVar3 = 0;
		while (iVar2 = GetSpellLevel__Fii(pnum,0x22), iVar3 < iVar2) {
			lVar1 = ENG_random__Fl(6);
			iVar4 = iVar4 + (lVar1 + 1) * 0x40;
			iVar3 = iVar3 + 1;
		}
		if (plr[pnum]._pClass == '\0') {
			iVar4 = iVar4 << 1;
		}
		if (plr[pnum]._pClass == '\x01') {
			iVar4 = iVar4 + (iVar4 >> 1);
		}
		iVar2 = plr[rid]._pMaxHP;
		iVar3 = plr[rid]._pHitPoints + iVar4;
		plr[rid]._pHitPoints = iVar3;
		if (iVar2 < iVar3) {
			plr[rid]._pHitPoints = iVar2;
		}
		iVar3 = plr[rid]._pMaxHPBase;
		iVar4 = plr[rid]._pHPBase + iVar4;
		plr[rid]._pHPBase = iVar4;
		if (iVar3 < iVar4) {
			plr[rid]._pHPBase = iVar3;
		}
		drawhpflag = '\x01';
	}
	return;
}





