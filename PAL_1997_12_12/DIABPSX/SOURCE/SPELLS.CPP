#include "THISDUST.H"
#include "SPELLS.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetManaAmount__Fii(int id /*$a0*/, int sn /*$a1*/)
 // line 45, offset 0x8006fbd8
	/* begin block 1 */
		// Start line: 46
		// Start offset: 0x8006FBD8
		// Variables:
	// 		int i; // $v1
	// 		int sl; // $t0
	// 		int ma; // $a2
	// 		int adj; // $a3
	/* end block 1 */
	// End offset: 0x8006FE98
	// End Line: 95

	/* begin block 2 */
		// Start line: 100
	/* end block 2 */
	// End Line: 101

int GetManaAmount__Fii(int id,int sn)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = (int)*(char *)(id * 0x23a8 + -0x7ff2147f + sn) + (int)plr[id]._pISplLvlAdd + -1;
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
			iVar2 = iVar2 + (uint)(SpellData_ARRAY_800e3534[30].sManaCost >> 3);
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
		iVar1 = (((int)plr[id]._pLevel * 2 + (uint)SpellData_ARRAY_800e3534[0].sManaCost) - iVar2) *
						0x40;
	}
	if (sn == 0x22) {
		iVar1 = (((int)plr[id]._pLevel * 2 + (uint)SpellData_ARRAY_800e3534[0].sManaCost) - iVar2) *
						0x40;
	}
	if (sn == 0x20) {
		while (0 < iVar3) {
			iVar3 = iVar3 + -1;
		}
	}
	if (plr[id]._pClass == '\x02') {
		iVar1 = iVar1 - (iVar1 >> 1);
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
 // line 101, offset 0x8006fea0
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x8006FEA0
		// Variables:
	// 		int ma; // $v0
	/* end block 1 */
	// End offset: 0x8006FFD0
	// End Line: 137

	/* begin block 2 */
		// Start line: 208
	/* end block 2 */
	// End Line: 209

void UseMana__Fii(int id,int sn)

{
	int iVar1;
	int iVar2;
	
	if (id == myplr) {
		switch(plr[id]._pSplType) {
		case '\x01':
			iVar1 = GetManaAmount__Fii(id,sn);
			drawmanaflag = '\x01';
			iVar2 = plr[id]._pManaBase;
			plr[id]._pMana = plr[id]._pMana - iVar1;
			plr[id]._pManaBase = iVar2 - iVar1;
			break;
		case '\x02':
			RemoveScroll__Fi(id);
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
 // line 144, offset 0x8006ffe4
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x8006FFE4
	/* end block 1 */
	// End offset: 0x8007006C
	// End Line: 166

	/* begin block 2 */
		// Start line: 298
	/* end block 2 */
	// End Line: 299

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
// void /*$ra*/ CastSpell__Fiiiiiiii(int id /*$s4*/, int spl /*$s3*/, int sx /*$s7*/, int sy /*$fp*/, int dx /*stack 16*/, int dy /*stack 20*/, int caster /*stack 24*/, int spllvl /*stack 28*/)
 // line 172, offset 0x80070084
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x80070084
		// Variables:
	// 		int i; // $s1
	// 		int dir; // $s5
	/* end block 1 */
	// End offset: 0x800702FC
	// End Line: 203

	/* begin block 2 */
		// Start line: 354
	/* end block 2 */
	// End Line: 355

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
		midir = (int)plr[id]._pdir;
		if (spl == 6) {
			midir = (int)plr[id]._pVar3;
		}
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
				iVar4 = spl * 0x34 + -0x7ff1cb17;
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
 // line 209, offset 0x80070330
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x80070330
	/* end block 1 */
	// End offset: 0x800705C4
	// End Line: 242

	/* begin block 2 */
		// Start line: 434
	/* end block 2 */
	// End Line: 435

void DoResurrect__Fii(int pnum,int rid)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((char)rid != -1) {
		PlacePlayer__FiiiUc(rid,(int)plr[pnum]._px,(int)plr[pnum]._py,'\0');
		AddMissile__Fiiiiiiciii
							((int)plr[rid]._px,(int)plr[rid]._py,(int)plr[rid]._px,(int)plr[rid]._py,0,0x3e,0,pnum
							 ,0,0);
	}
	NewCursor__Fi(1);
	if (((char)rid != -1) && (plr[rid]._pHitPoints == 0)) {
		if (rid == myplr) {
			deathflag = '\0';
			gamemenu_off__Fv();
			drawhpflag = '\x01';
			drawmanaflag = '\x01';
		}
		ClrPlrPath__Fi(rid);
		plr[rid].plractive = '\x01';
		gbActivePlayers = gbActivePlayers + '\x01';
		PostGamePad__Fiiii(rid + 6,0,0,0);
		plr[rid].destAction = -1;
		plr[rid]._pInvincible = '\0';
		SetPlayerHitPoints__Fii(rid,0x280);
		iVar4 = plr[rid]._pMaxHP;
		iVar1 = plr[rid]._pMaxHPBase;
		iVar5 = plr[rid]._pMaxMana;
		iVar3 = plr[rid]._pMaxManaBase;
		plr[rid]._pMana = 0;
		iVar2 = plr[rid]._pHitPoints;
		plr[rid]._pManaBase = iVar3 - iVar5;
		plr[rid]._pHPBase = iVar2 - (iVar4 - iVar1);
		CalcPlrInv__FiUc(rid,'\x01');
		if (plr[rid].plrlevel == (uint)currlevel) {
			StartStand__Fii(rid,(int)plr[rid]._pdir);
		}
		else {
			plr[rid]._pmode = 0;
		}
		(&_pcursplr)[pnum] = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoHealOther__Fii(int pnum /*$s2*/, int rid /*$s3*/)
 // line 249, offset 0x800705e4
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x800705E4
		// Variables:
	// 		int i; // $s0
	// 		long l; // $s1
	/* end block 1 */
	// End offset: 0x80070824
	// End Line: 271

	/* begin block 2 */
		// Start line: 531
	/* end block 2 */
	// End Line: 532

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
		lVar1 = random__Fil(0x39,10);
		iVar4 = (lVar1 + 1) * 0x40;
		iVar3 = 0;
		if ('\0' < plr[pnum]._pLevel) {
			do {
				lVar1 = random__Fil(0x39,4);
				iVar4 = iVar4 + (lVar1 + 1) * 0x40;
				iVar3 = iVar3 + 1;
			} while (iVar3 < (int)plr[pnum]._pLevel);
		}
		iVar3 = 0;
		while (iVar2 = GetSpellLevel__Fii(pnum,0x22), iVar3 < iVar2) {
			lVar1 = random__Fil(0x39,6);
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





