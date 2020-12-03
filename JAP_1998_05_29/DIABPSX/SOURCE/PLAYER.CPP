#include "THISDUST.H"
#include "PLAYER.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsDplayer__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 262, offset 0x8005fd10
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x8005FD10
	/* end block 1 */
	// End offset: 0x8005FD94
	// End Line: 266

	/* begin block 2 */
		// Start line: 525
	/* end block 2 */
	// End Line: 526

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar IsDplayer__Fii(int x,int y)

{
	uchar uVar1;
	
	if (((plr[0].plractive == '\0') || ((int)plr[0]._px != x)) || ((int)plr[0]._py != y)) {
		uVar1 = '\0';
		if ((plr[1].plractive != '\0') && ((int)plr[1]._px == x)) {
			uVar1 = ((int)plr[1]._py == y) << 1;
		}
	}
	else {
		uVar1 = '\x01';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 282, offset 0x8005fd9c
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x8005FD9C
	/* end block 1 */
	// End offset: 0x8005FDD8
	// End Line: 284

	/* begin block 2 */
		// Start line: 565
	/* end block 2 */
	// End Line: 566

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * ismyplr__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return (void *)(uint)(plr + myplr == ptrplr);
}



// decompiled code
// original method signature: 
// int /*$ra*/ plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 287, offset 0x8005fde0
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8005FDE0
	/* end block 1 */
	// End offset: 0x8005FDEC
	// End Line: 289

	/* begin block 2 */
		// Start line: 575
	/* end block 2 */
	// End Line: 576

/* WARNING: Unknown calling convention yet parameter storage is locked */

int plrind__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return (uint)(ptrplr != plr);
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 424, offset 0x8005fdf4
	/* begin block 1 */
		// Start line: 425
		// Start offset: 0x8005FDF4
	/* end block 1 */
	// End offset: 0x8005FE0C
	// End Line: 431

	/* begin block 2 */
		// Start line: 851
	/* end block 2 */
	// End Line: 852

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPlayerGFX__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	if (ptrplr->_pHitPoints >> 6 == 0) {
		ptrplr->_pgfxnum = '\0';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 540, offset 0x8005fe14
	/* begin block 1 */
		// Start line: 541
		// Start offset: 0x8005FE14
	/* end block 1 */
	// End offset: 0x8005FE14
	// End Line: 560

	/* begin block 2 */
		// Start line: 1099
	/* end block 2 */
	// End Line: 1100

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreePlayerGFX__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_pGFXLoad = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr /*$a0*/, int Peq /*$a1*/, int numFrames /*$a2*/, int Delay /*$a3*/)
 // line 566, offset 0x8005fe1c
	/* begin block 1 */
		// Start line: 567
		// Start offset: 0x8005FE1C
	/* end block 1 */
	// End offset: 0x8005FE30
	// End Line: 578

	/* begin block 2 */
		// Start line: 1141
	/* end block 2 */
	// End Line: 1142

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NewPlrAnim__FP12PlayerStructiii(PlayerStruct *ptrplr,int Peq,int numFrames,int Delay)

{
	ptrplr->peq = (uchar)Peq;
	ptrplr->_pAnimLen = numFrames;
	ptrplr->_pAnimFrame = 1;
	ptrplr->_pAnimCnt = 0;
	ptrplr->_pAnimDelay = Delay;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 586, offset 0x8005fe38
	/* begin block 1 */
		// Start line: 587
		// Start offset: 0x8005FE38
	/* end block 1 */
	// End offset: 0x8005FE4C
	// End Line: 598

	/* begin block 2 */
		// Start line: 1179
	/* end block 2 */
	// End Line: 1180

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearPlrPVars__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_pVar1 = 0;
	ptrplr->_pVar2 = 0;
	ptrplr->_pVar3 = 0;
	ptrplr->_pVar4 = 0;
	ptrplr->_pVar5 = 0;
	ptrplr->_pVar8 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 604, offset 0x8005fe54
	/* begin block 1 */
		// Start line: 605
		// Start offset: 0x8005FE54
		// Variables:
	// 		int gn; // $v1
	// 		int pc; // $a1
	/* end block 1 */
	// End offset: 0x80060088
	// End Line: 686

	/* begin block 2 */
		// Start line: 1228
	/* end block 2 */
	// End Line: 1229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrAnims__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	byte bVar2;
	int iVar3;
	
	iVar3 = (int)ptrplr->_pClass;
	if (leveltype == '\0') {
		iVar1 = iVar3 * 0xb;
		ptrplr->_pNFrames = (int)(char)(&DAT_800da3df)[iVar1];
		ptrplr->_pWFrames = (int)(char)(&DAT_800da3e0)[iVar1];
		ptrplr->_pDFrames = (int)(char)(&DAT_800da3dc)[iVar1];
		ptrplr->_pSFrames = (int)(char)(&DAT_800da3dd)[iVar1];
	}
	else {
		iVar1 = iVar3 * 0xb;
		ptrplr->_pNFrames = (int)(&PlrGFXAnimLens)[iVar1];
		ptrplr->_pWFrames = (int)(&CHAR_08h_800da3da)[iVar1];
		ptrplr->_pAFrames = (int)(&CHAR_10h_800da3d9)[iVar1];
		ptrplr->_pHFrames = (int)(char)(&DAT_800da3de)[iVar1];
		ptrplr->_pSFrames = (int)(char)(&DAT_800da3dd)[iVar1];
		ptrplr->_pDFrames = (int)(char)(&DAT_800da3dc)[iVar1];
		ptrplr->_pBFrames = (int)(char)(&DAT_800da3db)[iVar1];
		ptrplr->_pAFNum = (int)(char)(&DAT_800da3e1)[iVar1];
	}
	ptrplr->_pSFNum = (int)(char)(&DAT_800da3e2)[iVar3 * 0xb];
	bVar2 = ptrplr->_pgfxnum & 0xf;
	if (iVar3 == 0) {
		if (bVar2 == 4) {
			if (leveltype != '\0') {
				ptrplr->_pNFrames = 8;
			}
			iVar3 = 0xb;
		}
		else {
			if (bVar2 == 5) {
				ptrplr->_pAFrames = 0x14;
				iVar3 = 10;
			}
			else {
				if (bVar2 != 8) {
					return;
				}
				ptrplr->_pAFrames = 0x10;
				iVar3 = 0xb;
			}
		}
	}
	else {
		if (iVar3 == 1) {
			if (bVar2 == 5) {
				ptrplr->_pAFrames = 0x16;
				iVar3 = 0xd;
			}
			else {
				if (bVar2 == 4) {
					ptrplr->_pAFrames = 0xc;
					iVar3 = 7;
				}
				else {
					if (bVar2 != 8) {
						return;
					}
					ptrplr->_pAFrames = 0x10;
					iVar3 = 0xb;
				}
			}
		}
		else {
			if (iVar3 != 2) {
				return;
			}
			if ((ptrplr->_pgfxnum & 0xfU) == 0) {
				ptrplr->_pAFrames = 0x14;
				return;
			}
			if (bVar2 == 1) {
				iVar3 = 9;
			}
			else {
				if (bVar2 == 4) {
					iVar3 = 0x14;
				}
				else {
					iVar3 = 0x18;
					if (bVar2 != 5) {
						return;
					}
				}
				ptrplr->_pAFrames = iVar3;
				iVar3 = 0x10;
			}
		}
	}
	ptrplr->_pAFNum = iVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr /*$s1*/, char c /*$s2*/)
 // line 732, offset 0x80060090
	/* begin block 1 */
		// Start line: 733
		// Start offset: 0x80060090
		// Variables:
	// 		int i; // $v0
	// 		char vc; // $v1
	/* end block 1 */
	// End offset: 0x8006047C
	// End Line: 852

	/* begin block 2 */
		// Start line: 1468
	/* end block 2 */
	// End Line: 1469

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreatePlayer__FP12PlayerStructc(PlayerStruct *ptrplr,char c)

{
	long lVar1;
	char cVar2;
	ulong s;
	short sVar4;
	undefined4 uVar3;
	char *pcVar5;
	int iVar6;
	int iVar7;
	
	s = GTIMSYS_GetTimer();
	SetRndSeed__Fl(s);
	iVar7 = (int)((uint)(byte)c << 0x18) >> 0x16;
	ptrplr->_pClass = c;
	sVar4 = (short)((uint)(*(int *)((int)StrengthTbl + iVar7) << 0x18) >> 0x10);
	if (*(int *)((int)StrengthTbl + iVar7) << 0x18 < 0) {
		sVar4 = 0;
	}
	ptrplr->_pStrength = sVar4 >> 8;
	ptrplr->_pBaseStr = sVar4 >> 8;
	sVar4 = (short)((uint)(*(int *)((int)MagicTbl + iVar7) << 0x18) >> 0x10);
	if (*(int *)((int)MagicTbl + iVar7) << 0x18 < 0) {
		sVar4 = 0;
	}
	ptrplr->_pMagic = sVar4 >> 8;
	ptrplr->_pBaseMag = sVar4 >> 8;
	sVar4 = (short)((uint)(*(int *)((int)DexterityTbl + iVar7) << 0x18) >> 0x10);
	if (*(int *)((int)DexterityTbl + iVar7) << 0x18 < 0) {
		sVar4 = 0;
	}
	ptrplr->_pDexterity = sVar4 >> 8;
	ptrplr->_pBaseDex = sVar4 >> 8;
	sVar4 = (short)((uint)(*(int *)((int)VitalityTbl + iVar7) << 0x18) >> 0x10);
	if (*(int *)((int)VitalityTbl + iVar7) << 0x18 < 0) {
		sVar4 = 0;
	}
	ptrplr->_pVitality = sVar4 >> 8;
	ptrplr->_pBaseVit = sVar4 >> 8;
	ptrplr->_pStatPts = 0;
	ptrplr->pTownWarps = '\0';
	ptrplr->pDungMsgs = '\0';
	ptrplr->pLvlLoad = '\0';
	ptrplr->pDiabloKillLevel = 0;
	if (ptrplr->_pClass == '\x01') {
		ptrplr->_pDamageMod =
				 (((int)ptrplr->_pStrength + (int)ptrplr->_pDexterity) * (int)ptrplr->_pLevel) / 200;
	}
	else {
		ptrplr->_pDamageMod = ((int)ptrplr->_pStrength * (int)ptrplr->_pLevel) / 100;
	}
	iVar6 = (int)c;
	iVar7 = (int)ptrplr->_pVitality + 10;
	ptrplr->_pBaseToBlk = ToBlkTbl[iVar6];
	ptrplr->_pHitPoints = iVar7 * 0x40;
	if (ptrplr->_pClass == '\0') {
		ptrplr->_pHitPoints = iVar7 * 0x80;
	}
	if (ptrplr->_pClass == '\x01') {
		ptrplr->_pHitPoints = ptrplr->_pHitPoints + (ptrplr->_pHitPoints >> 1);
	}
	ptrplr->_pMaxHP = ptrplr->_pHitPoints;
	ptrplr->_pMana = (int)ptrplr->_pMagic << 6;
	ptrplr->_pHPBase = ptrplr->_pHitPoints;
	ptrplr->_pMaxHPBase = ptrplr->_pHitPoints;
	if (ptrplr->_pClass == '\x02') {
		ptrplr->_pMana = (int)ptrplr->_pMagic << 7;
	}
	if (ptrplr->_pClass == '\x01') {
		ptrplr->_pMana = ptrplr->_pMana + (ptrplr->_pMana >> 1);
	}
	ptrplr->_pLevel = '\x01';
	ptrplr->_pMaxLvl = '\x01';
	ptrplr->_pExperience = 0;
	ptrplr->_pMaxExp = 0;
	ptrplr->_pMaxMana = ptrplr->_pMana;
	ptrplr->_pManaBase = ptrplr->_pMana;
	ptrplr->_pMaxManaBase = ptrplr->_pMana;
	lVar1 = LONG_800da46c;
	*(undefined4 *)&ptrplr->_pScrlSpells = 0;
	*(undefined4 *)((int)&ptrplr->_pScrlSpells + 4) = 0;
	ptrplr->_pArmorClass = '\0';
	ptrplr->_pMagResist = '\0';
	ptrplr->_pFireResist = '\0';
	ptrplr->_pLghtResist = '\0';
	ptrplr->_pLightRad = '\x06';
	ptrplr->_pInfraFlag = '\0';
	ptrplr->_pNextExper = lVar1;
	if (iVar6 == 0) {
		uVar3 = 0x2000000;
LAB_80060384:
		*(undefined4 *)&ptrplr->_pAblSpells = uVar3;
		*(undefined4 *)((int)&ptrplr->_pAblSpells + 4) = 0;
		if (c != '\x02') goto LAB_800603b8;
		*(undefined4 *)&ptrplr->_pMemSpells = 1;
		*(undefined4 *)((int)&ptrplr->_pMemSpells + 4) = 0;
	}
	else {
		if (iVar6 == 1) {
			uVar3 = 0x8000000;
			goto LAB_80060384;
		}
		if (iVar6 == 2) {
			uVar3 = 0x4000000;
			goto LAB_80060384;
		}
LAB_800603b8:
		*(undefined4 *)&ptrplr->_pMemSpells = 0;
		*(undefined4 *)((int)&ptrplr->_pMemSpells + 4) = 0;
	}
	iVar7 = 0x3f;
	iVar6 = (int)&ptrplr->_pxvel + 1;
	do {
		*(undefined *)(iVar6 + 0x71) = 0;
		iVar7 = iVar7 + -1;
		iVar6 = iVar6 + -1;
	} while (-1 < iVar7);
	ptrplr->_pSpellFlags = '\0';
	if (ptrplr->_pClass == '\x02') {
		ptrplr->_pSplLvl[1] = '\x02';
	}
	if (c == '\0') {
		cVar2 = '\x03';
	}
	else {
		cVar2 = '\x04';
		if (c != '\x01') {
			if (c != '\x02') goto LAB_8006042c;
			cVar2 = '\b';
		}
	}
	ptrplr->_pgfxnum = cVar2;
LAB_8006042c:
	iVar7 = 0x10;
	pcVar5 = ptrplr->walkpath + 0xc;
	do {
		pcVar5[0x166] = '\0';
		iVar7 = iVar7 + -1;
		pcVar5 = pcVar5 + -1;
	} while (-1 < iVar7);
	iVar7 = 9;
	pcVar5 = ptrplr->walkpath + 5;
	do {
		pcVar5[0x177] = '\0';
		iVar7 = iVar7 + -1;
		pcVar5 = pcVar5 + -1;
	} while (-1 < iVar7);
	ptrplr->_pLvlChanging = '\0';
	ptrplr->pTownWarps = '\0';
	ptrplr->pLvlLoad = '\0';
	InitDungMsgs__FP12PlayerStruct(ptrplr);
	CreatePlrItems__FP12PlayerStruct(ptrplr);
	SetRndSeed__Fl(0);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 858, offset 0x80060498
	/* begin block 1 */
		// Start line: 859
		// Start offset: 0x80060498
		// Variables:
	// 		int c; // $a2
	// 		int d; // $v1
	/* end block 1 */
	// End offset: 0x800604F8
	// End Line: 865

	/* begin block 2 */
		// Start line: 1798
	/* end block 2 */
	// End Line: 1799

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CalcStatDiff__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	
	iVar1 = (int)ptrplr->_pClass;
	return ((&MaxStats)[iVar1 * 4] - (int)ptrplr->_pBaseStr) +
				 ((&INT_800da43c)[iVar1 * 4] - (int)ptrplr->_pBaseMag) +
				 ((&INT_800da440)[iVar1 * 4] - (int)ptrplr->_pBaseDex) +
				 (*(int *)(&DAT_800da444 + iVar1 * 0x10) - (int)ptrplr->_pBaseVit);
}



// decompiled code
// original method signature: 
// void /*$ra*/ NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 870, offset 0x80060500
	/* begin block 1 */
		// Start line: 871
		// Start offset: 0x80060500
		// Variables:
	// 		long l; // $a1
	/* end block 1 */
	// End offset: 0x80060664
	// End Line: 911

	/* begin block 2 */
		// Start line: 1824
	/* end block 2 */
	// End Line: 1825

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NextPlrLevel__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	int iVar2;
	void *pvVar3;
	
	ptrplr->_pLevel = ptrplr->_pLevel + '\x01';
	ptrplr->_pMaxLvl = ptrplr->_pMaxLvl + '\x01';
	PlaySFX__Fi(IS_LEVELUP);
	iVar1 = CalcStatDiff__FP12PlayerStruct(ptrplr);
	if (iVar1 < 5) {
		iVar1 = CalcStatDiff__FP12PlayerStruct(ptrplr);
		ptrplr->_pStatPts = iVar1;
	}
	else {
		ptrplr->_pStatPts = ptrplr->_pStatPts + 5;
	}
	ptrplr->_pNextExper = (&ExpLvlsTbl)[(int)ptrplr->_pLevel];
	iVar1 = 0x80;
	if (ptrplr->_pClass == '\x02') {
		iVar1 = 0x40;
	}
	if (gbMaxPlayers == '\x01') {
		iVar1 = iVar1 + 1;
	}
	iVar2 = ptrplr->_pMaxHP + iVar1;
	iVar1 = ptrplr->_pMaxHPBase + iVar1;
	ptrplr->_pMaxHP = iVar2;
	ptrplr->_pHitPoints = iVar2;
	ptrplr->_pMaxHPBase = iVar1;
	ptrplr->_pHPBase = iVar1;
	pvVar3 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar3 != (void *)0x0) {
		drawhpflag = '\x01';
	}
	iVar1 = 0x80;
	if (ptrplr->_pClass == '\0') {
		iVar1 = 0x40;
	}
	if (gbMaxPlayers == '\x01') {
		iVar1 = iVar1 + 1;
	}
	ptrplr->_pMaxMana = ptrplr->_pMaxMana + iVar1;
	ptrplr->_pMaxManaBase = ptrplr->_pMaxManaBase + iVar1;
	if ((ptrplr->_pIFlags & 0x8000000U) == 0) {
		ptrplr->_pMana = ptrplr->_pMaxMana;
		ptrplr->_pManaBase = ptrplr->_pMaxManaBase;
	}
	pvVar3 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar3 != (void *)0x0) {
		drawmanaflag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr /*$s2*/, int lvl /*$a1*/, long exp /*$a2*/)
 // line 917, offset 0x8006067c
	/* begin block 1 */
		// Start line: 918
		// Start offset: 0x8006067C
		// Variables:
	// 		int omp; // $s3
	// 		unsigned long v; // $v0
	// 		long e; // $a1

		/* begin block 1.1 */
			// Start line: 950
			// Start offset: 0x80060714

			/* begin block 1.1.1 */
				// Start line: 950
				// Start offset: 0x8006072C
				// Variables:
			// 		long lLevel; // $a0
			// 		long lMax; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800607A8
			// End Line: 956
		/* end block 1.1 */
		// End offset: 0x800607A8
		// End Line: 956

		/* begin block 1.2 */
			// Start line: 963
			// Start offset: 0x800607CC

			/* begin block 1.2.1 */
				// Start line: 966
				// Start offset: 0x800607F4
				// Variables:
			// 		int l; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 971
					// Start offset: 0x8006082C

					/* begin block 1.2.1.1.1 */
						// Start line: 971
						// Start offset: 0x8006083C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 971
							// Start offset: 0x8006083C
							// Variables:
						// 		int i; // $s0
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80060860
						// End Line: 975
					/* end block 1.2.1.1.1 */
					// End offset: 0x80060860
					// End Line: 975
				/* end block 1.2.1.1 */
				// End offset: 0x80060860
				// End Line: 975
			/* end block 1.2.1 */
			// End offset: 0x8006087C
			// End Line: 978
		/* end block 1.2 */
		// End offset: 0x8006087C
		// End Line: 978
	/* end block 1 */
	// End offset: 0x80060880
	// End Line: 981

	/* begin block 2 */
		// Start line: 1940
	/* end block 2 */
	// End Line: 1941

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddPlrExperience__FP12PlayerStructil(PlayerStruct *ptrplr,int lvl,long exp)

{
	uint uVar1;
	int iVar2;
	char cVar3;
	int iVar4;
	long *plVar5;
	int iVar6;
	uint uVar7;
	
	iVar2 = myplr;
	myplr = ZEXT14(ptrplr != plr);
	if (0 < ptrplr->_pHitPoints) {
		cVar3 = ptrplr->_pLevel;
		uVar7 = (((lvl - (int)cVar3) * 0x10000) / 10 + 0x10000) * exp;
		uVar7 = uVar7 >> 0x10 | ((int)uVar7 >> 0x1f) << 0x10;
		if ((int)uVar7 < 0) {
			uVar7 = 0;
		}
		if (1 < gbMaxPlayers) {
			if ((int)cVar3 < 0) {
				cVar3 = '\0';
			}
			iVar6 = (int)cVar3;
			iVar4 = iVar6 << 2;
			if (0x32 < iVar6) {
				iVar6 = 0x32;
				iVar4 = 200;
			}
			uVar1 = *(int *)((int)&ExpLvlsTbl + iVar4) / 0x14;
			if ((int)uVar1 < (int)uVar7) {
				uVar7 = uVar1;
			}
			if (iVar6 * 200 < (int)uVar7) {
				uVar7 = iVar6 * 200;
			}
		}
		uVar7 = ptrplr->_pExperience + uVar7;
		ptrplr->_pExperience = uVar7;
		if (2000000000 < uVar7) {
			ptrplr->_pExperience = 2000000000;
		}
		iVar4 = ptrplr->_pExperience;
		if (iVar4 < LONG_800da52c) {
			iVar6 = 0;
			if (ExpLvlsTbl <= iVar4) {
				plVar5 = &ExpLvlsTbl;
				do {
					plVar5 = plVar5 + 1;
					iVar6 = iVar6 + 1;
				} while (*plVar5 <= iVar4);
			}
			if (iVar6 != (int)ptrplr->_pLevel) {
				iVar6 = iVar6 - (int)ptrplr->_pLevel;
				iVar4 = 0;
				if (0 < iVar6) {
					do {
						NextPlrLevel__FP12PlayerStruct(ptrplr);
						iVar4 = iVar4 + 1;
					} while (iVar4 < iVar6);
				}
			}
			NetSendCmdParam1__FUcUcUs('\0','3',(short)ptrplr->_pLevel);
			myplr = iVar2;
		}
		else {
			ptrplr->_pLevel = '2';
			myplr = iVar2;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPlrMonstExper__Filc(int lvl /*$t0*/, long exp /*$a1*/, char pmask /*$a3*/)
 // line 987, offset 0x800608a0
	/* begin block 1 */
		// Start line: 988
		// Start offset: 0x800608A0
		// Variables:
	// 		int totplrs; // $v1

		/* begin block 1.1 */
			// Start line: 988
			// Start offset: 0x800608A0
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800608E4
		// End Line: 993

		/* begin block 1.2 */
			// Start line: 993
			// Start offset: 0x800608E4

			/* begin block 1.2.1 */
				// Start line: 993
				// Start offset: 0x800608EC
			/* end block 1.2.1 */
			// End offset: 0x80060914
			// End Line: 995
		/* end block 1.2 */
		// End offset: 0x80060914
		// End Line: 995
	/* end block 1 */
	// End offset: 0x80060914
	// End Line: 995

	/* begin block 2 */
		// Start line: 2096
	/* end block 2 */
	// End Line: 2097

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddPlrMonstExper__Filc(int lvl,long exp,char pmask)

{
	int iVar1;
	uint uVar2;
	
	iVar1 = 0;
	uVar2 = 0;
	do {
		if (((int)pmask >> (uVar2 & 0x1f) & 1U) != 0) {
			iVar1 = iVar1 + 1;
		}
		uVar2 = uVar2 + 1;
	} while ((int)uVar2 < 2);
	if (iVar1 != 0) {
		if (((int)pmask >> (myplr & 0x1fU) & 1U) != 0) {
			AddPlrExperience__Fiil(myplr,lvl,exp / iVar1);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr /*$s0*/, unsigned char FirstTime /*$s1*/)
 // line 1003, offset 0x80060924
	/* begin block 1 */
		// Start line: 1004
		// Start offset: 0x80060924

		/* begin block 1.1 */
			// Start line: 1041
			// Start offset: 0x80060990

			/* begin block 1.1.1 */
				// Start line: 1041
				// Start offset: 0x80060990

				/* begin block 1.1.1.1 */
					// Start line: 1061
					// Start offset: 0x80060A30

					/* begin block 1.1.1.1.1 */
						// Start line: 1088
						// Start offset: 0x80060AB4
					/* end block 1.1.1.1.1 */
					// End offset: 0x80060ADC
					// End Line: 1106
				/* end block 1.1.1.1 */
				// End offset: 0x80060ADC
				// End Line: 1106
			/* end block 1.1.1 */
			// End offset: 0x80060ADC
			// End Line: 1112
		/* end block 1.1 */
		// End offset: 0x80060ADC
		// End Line: 1112
	/* end block 1 */
	// End offset: 0x80060C2C
	// End Line: 1191

	/* begin block 2 */
		// Start line: 2129
	/* end block 2 */
	// End Line: 2130

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPlayer__FP12PlayerStructUc(PlayerStruct *ptrplr,uchar FirstTime)

{
	char cVar1;
	long lVar2;
	void *pvVar3;
	int x;
	int pnum;
	undefined4 uVar4;
	int y;
	
	if (FirstTime != '\0') {
		ptrplr->_pRSplType = '\x04';
		ptrplr->_pRSpell = -1;
		ptrplr->_pSBkSpell = -1;
		ptrplr->DeadLevel = 'd';
		ptrplr->_pSpell = (char)ptrplr->_pRSpell;
		ptrplr->_pSplType = ptrplr->_pRSplType;
		if ((ptrplr->_pgfxnum & 0xfU) == 4) {
			ptrplr->_pwtype = '\x01';
		}
		else {
			ptrplr->_pwtype = '\0';
		}
	}
	SetPlrAnims__FP12PlayerStruct(ptrplr);
	ptrplr->_pxoff = '\0';
	ptrplr->_pyoff = '\0';
	ptrplr->_pxvel = 0;
	ptrplr->_pyvel = 0;
	ClearPlrPVars__FP12PlayerStruct(ptrplr);
	if (ptrplr->_pHitPoints >> 6 < 1) {
		ptrplr->_pmode = PM_DEATH;
		NewPlrAnim__FP12PlayerStructiii(ptrplr,1,ptrplr->_pDFrames,1);
		ptrplr->_pAnimFrame = ptrplr->_pAnimLen + -1;
		ptrplr->_pVar8 = (short)(ptrplr->_pAnimLen << 1);
	}
	else {
		ptrplr->_pmode = PM_STAND;
		NewPlrAnim__FP12PlayerStructiii(ptrplr,0,ptrplr->_pNFrames,3);
		lVar2 = ENG_random__Fl(ptrplr->_pNFrames + -1);
		ptrplr->_pAnimFrame = lVar2 + 1;
		lVar2 = ENG_random__Fl(3);
		ptrplr->_pAnimCnt = lVar2;
	}
	ptrplr->_pdir = '\0';
	pvVar3 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar3 == (void *)0x0) {
LAB_80060ab4:
		pnum = plrind__FP12PlayerStruct(ptrplr);
		x = ViewX;
		y = ViewY;
LAB_80060ad4:
		PlacePlayer__FiiiUc(pnum,x,y,'\0');
	}
	else {
		if ((FirstTime == '\0') || (currlevel != '\0')) {
			x = plrind__FP12PlayerStruct(ptrplr);
			if ((x != 1) || (plr[0].plractive == '\0')) goto LAB_80060ab4;
			pnum = plrind__FP12PlayerStruct(ptrplr);
			x = ViewX + 1;
			y = ViewY + 1;
			goto LAB_80060ad4;
		}
	}
	ptrplr->walkpath[0] = -1;
	ptrplr->destAction = -1;
	WorldToOffset__FP12PlayerStructii(ptrplr,(int)ptrplr->_px << 3 | 4,(int)ptrplr->_py << 3 | 4);
	light_rad = ptrplr->_pLightRad;
	light_fix__Fi((int)ptrplr->_plid);
	x = AddLight__Fiii((int)ptrplr->_px,(int)ptrplr->_py,(int)(&DAT_000023f0 + (int)light_rad));
	ptrplr->_plid = (char)x;
	ChangeLightOff__Fiii((int)(char)x,0,0);
	ManashieldFlag = '\0';
	ManashieldFlag2 = '\0';
	x = plrind__FP12PlayerStruct(ptrplr);
	x = AddVision__FiiiUc((int)ptrplr->_px,(int)ptrplr->_py,10,(uchar)x);
	cVar1 = ptrplr->_pClass;
	ptrplr->_pvid = (char)x;
	if (cVar1 == '\0') {
		uVar4 = 0x2000000;
	}
	else {
		if (cVar1 == '\x01') {
			uVar4 = 0x8000000;
		}
		else {
			if (cVar1 != '\x02') goto LAB_80060bcc;
			uVar4 = 0x4000000;
		}
	}
	*(undefined4 *)&ptrplr->_pAblSpells = uVar4;
	*(undefined4 *)((int)&ptrplr->_pAblSpells + 4) = 0;
LAB_80060bcc:
	lVar2 = (&ExpLvlsTbl)[(int)ptrplr->_pLevel];
	ptrplr->_pInvincible = '\0';
	ptrplr->_pNextExper = lVar2;
	pvVar3 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar3 != (void *)0x0) {
		x = plrind__FP12PlayerStruct(ptrplr);
		deathdelay2[x] = '\0';
		deathflag = '\0';
		ScrollInfo._sxoff = 0;
		ScrollInfo._syoff = 0;
		ScrollInfo._sdir = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMultiView__Fv()
 // line 1200, offset 0x80060c44
	/* begin block 1 */
		// Start line: 1201
		// Start offset: 0x80060C44
	/* end block 1 */
	// End offset: 0x80060C44
	// End Line: 1201

	/* begin block 2 */
		// Start line: 2551
	/* end block 2 */
	// End Line: 2552

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMultiView__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SolidLoc__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 1339, offset 0x80060c4c
	/* begin block 1 */
		// Start line: 1340
		// Start offset: 0x80060C4C
	/* end block 1 */
	// End offset: 0x80060C5C
	// End Line: 1346

	/* begin block 2 */
		// Start line: 2823
	/* end block 2 */
	// End Line: 2824

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar SolidLoc__Fii(int x,int y)

{
	void *pvVar1;
	
	pvVar1 = GetSOLID__Fii(x,y);
	return (uchar)pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlrClrTrans__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 1402, offset 0x80060c6c
	/* begin block 1 */
		// Start line: 1403
		// Start offset: 0x80060C6C
		// Variables:
	// 		int i; // $a2
	// 		int j; // $a3
	/* end block 1 */
	// End offset: 0x80060CDC
	// End Line: 1412

	/* begin block 2 */
		// Start line: 2953
	/* end block 2 */
	// End Line: 2954

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlrClrTrans__Fii(int x,int y)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = y + -1;
	if (iVar3 <= y + 1) {
		do {
			iVar2 = x + -1;
			if (iVar2 <= x + 1) {
				iVar1 = iVar2 * 0x380 + iVar3 * 8;
				do {
					iVar2 = iVar2 + 1;
					(&TransList)[(int)(&dung_map[0].dTransVal)[iVar1]] = '\0';
					iVar1 = iVar1 + 0x380;
				} while (iVar2 <= x + 1);
			}
			iVar3 = iVar3 + 1;
		} while (iVar3 <= y + 1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlrDoTrans__Fii(int x /*$s4*/, int y /*$s5*/)
 // line 1418, offset 0x80060ce4
	/* begin block 1 */
		// Start line: 1419
		// Start offset: 0x80060CE4
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s2
	/* end block 1 */
	// End offset: 0x80060DD0
	// End Line: 1436

	/* begin block 2 */
		// Start line: 2986
	/* end block 2 */
	// End Line: 2987

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlrDoTrans__Fii(int x,int y)

{
	undefined *puVar1;
	int x_00;
	int iVar2;
	int y_00;
	
	if ((uint)leveltype - 1 < 2) {
		y_00 = y + -1;
		do {
			x_00 = x + -1;
			if (x_00 <= x + 1) {
				iVar2 = x_00 * 0x380 + y_00 * 8;
				do {
					puVar1 = (undefined *)GetSOLID__Fii(x_00,y_00);
					if ((puVar1 != &DAT_00000001) && ((int)(&dung_map[0].dTransVal)[iVar2] != 0)) {
						(&TransList)[(int)(&dung_map[0].dTransVal)[iVar2]] = '\x01';
					}
					x_00 = x_00 + 1;
					iVar2 = iVar2 + 0x380;
				} while (x_00 <= x + 1);
			}
			y_00 = y_00 + 1;
		} while (y_00 <= y + 1);
	}
	else {
		s__800e7929[0] = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1441, offset 0x80060dfc
	/* begin block 1 */
		// Start line: 1442
		// Start offset: 0x80060DFC
	/* end block 1 */
	// End offset: 0x80060E08
	// End Line: 1446

	/* begin block 2 */
		// Start line: 3035
	/* end block 2 */
	// End Line: 3036

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlayerOld__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_poldx = ptrplr->_px;
	ptrplr->_poldy = ptrplr->_py;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int dir /*$a1*/)
 // line 1480, offset 0x80060e10
	/* begin block 1 */
		// Start line: 1481
		// Start offset: 0x80060E10
	/* end block 1 */
	// End offset: 0x80060E88
	// End Line: 1501

	/* begin block 2 */
		// Start line: 3111
	/* end block 2 */
	// End Line: 3112

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartStand__FP12PlayerStructi(PlayerStruct *ptrplr,int dir)

{
	void *pvVar1;
	
	ptrplr->_pdir = (char)dir;
	if (((ptrplr->_pInvincible == '\0') || (ptrplr->_pHitPoints != 0)) ||
		 (pvVar1 = ismyplr__FP12PlayerStruct(ptrplr), pvVar1 == (void *)0x0)) {
		NewPlrAnim__FP12PlayerStructiii(ptrplr,0,ptrplr->_pNFrames,3);
		ptrplr->_pmode = PM_STAND;
		ptrplr->_pVar5 = 1;
		SetPlayerOld__FP12PlayerStruct(ptrplr);
	}
	else {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 1506, offset 0x80060e9c
	/* begin block 1 */
		// Start line: 1507
		// Start offset: 0x80060E9C
	/* end block 1 */
	// End offset: 0x80060EEC
	// End Line: 1526

	/* begin block 2 */
		// Start line: 3168
	/* end block 2 */
	// End Line: 3169

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartWalkStand__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	
	ptrplr->_pmode = PM_STAND;
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar1 != (void *)0x0) {
		ScrollInfo._sxoff = 0;
		ScrollInfo._syoff = 0;
		ScrollInfo._sdir = 0;
		ViewX = (int)ptrplr->_px;
		ViewY = (int)ptrplr->_py;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1533, offset 0x80060f00
	/* begin block 1 */
		// Start line: 1534
		// Start offset: 0x80060F00
	/* end block 1 */
	// End offset: 0x80060F28
	// End Line: 1596

	/* begin block 2 */
		// Start line: 3223
	/* end block 2 */
	// End Line: 3224

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PM_ChangeLightOff__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ChangeLightOff__Fiii((int)ptrplr->_plid,(ptrplr->WorldX & 0xfU) - 8,(ptrplr->WorldY & 0xfU) - 8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1603, offset 0x80060f38
	/* begin block 1 */
		// Start line: 1604
		// Start offset: 0x80060F38
	/* end block 1 */
	// End offset: 0x80060F54
	// End Line: 1626

	/* begin block 2 */
		// Start line: 3363
	/* end block 2 */
	// End Line: 3364

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PM_ChangeOffset__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_pVar8 = ptrplr->_pVar8 + 1;
	PM_ChangeLightOff__FP12PlayerStruct(ptrplr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int d /*$a1*/)
 // line 1722, offset 0x80060f64
	/* begin block 1 */
		// Start line: 1723
		// Start offset: 0x80060F64
		// Variables:
	// 		int co; // $s1
	// 		unsigned char closeattack; // $s2
	/* end block 1 */
	// End offset: 0x8006108C
	// End Line: 1756

	/* begin block 2 */
		// Start line: 3601
	/* end block 2 */
	// End Line: 3602

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartAttack__FP12PlayerStructi(PlayerStruct *ptrplr,int d)

{
	char cVar1;
	bool bVar2;
	void *pvVar3;
	
	cVar1 = dung_map[(int)ptrplr->_pVar6 * 0x70 + (int)ptrplr->_pVar7].dObject;
	bVar2 = false;
	if (((ptrplr->_pInvincible == '\0') || (ptrplr->_pHitPoints != 0)) ||
		 (pvVar3 = ismyplr__FP12PlayerStruct(ptrplr), pvVar3 == (void *)0x0)) {
		if ((0 < (int)cVar1) && (object[(int)cVar1 + -1]._oBreak == '\x01')) {
			bVar2 = true;
		}
		if ((ptrplr->_pwtype == '\0') || (bVar2)) {
			ptrplr->_pmode = PM_ATTACK;
		}
		else {
			if (ptrplr->_pVar6 < 1) {
				return;
			}
			if (ptrplr->_pVar7 < 1) {
				return;
			}
			ptrplr->_pmode = PM_RATTACK;
			ptrplr->_pVar1 = ptrplr->_pVar6;
			ptrplr->_pVar2 = ptrplr->_pVar7;
		}
		SetPlayerOld__FP12PlayerStruct(ptrplr);
		NewPlrAnim__FP12PlayerStructiii(ptrplr,2,ptrplr->_pAFrames,0);
	}
	else {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int dir /*$a1*/)
 // line 1786, offset 0x800610a8
	/* begin block 1 */
		// Start line: 1787
		// Start offset: 0x800610A8
	/* end block 1 */
	// End offset: 0x8006112C
	// End Line: 1801

	/* begin block 2 */
		// Start line: 3736
	/* end block 2 */
	// End Line: 3737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlrBlock__FP12PlayerStructi(PlayerStruct *ptrplr,int dir)

{
	void *pvVar1;
	
	if (((ptrplr->_pInvincible == '\0') || (ptrplr->_pHitPoints != 0)) ||
		 (pvVar1 = ismyplr__FP12PlayerStruct(ptrplr), pvVar1 == (void *)0x0)) {
		PlaySfxLoc__Fiii(0x2a,(int)ptrplr->_px,(int)ptrplr->_py);
		NewPlrAnim__FP12PlayerStructiii(ptrplr,3,ptrplr->_pBFrames,2);
		ptrplr->_pmode = PM_BLOCK;
		SetPlayerOld__FP12PlayerStruct(ptrplr);
	}
	else {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr /*$s0*/, int d /*$a1*/, int cx /*$s1*/, int cy /*$s2*/)
 // line 1807, offset 0x80061140
	/* begin block 1 */
		// Start line: 1808
		// Start offset: 0x80061140
	/* end block 1 */
	// End offset: 0x800612D8
	// End Line: 1849

	/* begin block 2 */
		// Start line: 3780
	/* end block 2 */
	// End Line: 3781

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartSpell__FP12PlayerStructiii(PlayerStruct *ptrplr,int d,int cx,int cy)

{
	byte bVar1;
	void *pvVar2;
	int Peq;
	
	if (((ptrplr->_pInvincible != '\0') && (ptrplr->_pHitPoints == 0)) &&
		 (pvVar2 = ismyplr__FP12PlayerStruct(ptrplr), pvVar2 != (void *)0x0)) {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
		return;
	}
	if (leveltype == '\0') goto LAB_80061238;
	bVar1 = (&spelldata)[(int)ptrplr->_pSpell].sType;
	if (bVar1 == 1) {
		Peq = 5;
	}
	else {
		if (bVar1 < 2) {
			if (bVar1 != 0) goto LAB_80061238;
			Peq = 4;
		}
		else {
			Peq = 6;
			if (bVar1 != 2) goto LAB_80061238;
		}
	}
	NewPlrAnim__FP12PlayerStructiii(ptrplr,Peq,ptrplr->_pSFrames,0);
LAB_80061238:
	PlaySfxLoc__Fiii((uint)(&spelldata)[(int)ptrplr->_pSpell].sSFX,(int)ptrplr->_px,(int)ptrplr->_py);
	ptrplr->_pmode = PM_SPELL;
	PostGamePad__Fiiii((uint)(ptrplr != (PlayerStruct *)(s__800d5560 + 0x220)),0,0,0);
	SetPlayerOld__FP12PlayerStruct(ptrplr);
	ptrplr->_pVar1 = (short)cx;
	ptrplr->_pVar2 = (short)cy;
	Peq = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,cx,cy);
	ptrplr->_pdir = (char)Peq;
	Peq = GetSpellLevel__FP12PlayerStructi(ptrplr,(int)ptrplr->_pSpell);
	ptrplr->_pVar4 = (short)Peq;
	ptrplr->_pVar8 = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1882, offset 0x800612f4
	/* begin block 1 */
		// Start line: 1883
		// Start offset: 0x800612F4
	/* end block 1 */
	// End offset: 0x800612F4
	// End Line: 1883

	/* begin block 2 */
		// Start line: 3954
	/* end block 2 */
	// End Line: 3955

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemovePlrFromMap__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr /*$s0*/, int dam /*$s2*/, unsigned char forcehit /*$s1*/)
 // line 1908, offset 0x800612fc
	/* begin block 1 */
		// Start line: 1909
		// Start offset: 0x800612FC
	/* end block 1 */
	// End offset: 0x8006142C
	// End Line: 1946

	/* begin block 2 */
		// Start line: 3986
	/* end block 2 */
	// End Line: 3987

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlrHit__FP12PlayerStructiUc(PlayerStruct *ptrplr,int dam,uchar forcehit)

{
	char cVar1;
	void *pvVar2;
	int psfx;
	int x;
	int y;
	
	(&_pcursplr)[sel_data] = -1;
	if (((ptrplr->_pInvincible != '\0') && (ptrplr->_pHitPoints == 0)) &&
		 (pvVar2 = ismyplr__FP12PlayerStruct(ptrplr), pvVar2 != (void *)0x0)) {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
		return;
	}
	cVar1 = ptrplr->_pClass;
	if (cVar1 == '\0') {
		x = (int)ptrplr->_px;
		y = (int)ptrplr->_py;
		psfx = 0x316;
	}
	else {
		if (cVar1 == '\x01') {
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			psfx = 0x2a8;
		}
		else {
			if (cVar1 != '\x02') goto LAB_800613c8;
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			psfx = 0x240;
		}
	}
	PlaySfxLoc__Fiii(psfx,x,y);
LAB_800613c8:
	drawhpflag = '\x01';
	if ((((int)ptrplr->_pLevel <= dam >> 6) || (forcehit != '\0')) &&
		 (ptrplr->_pAnimLen >> 1 <= ptrplr->_pAnimFrame)) {
		NewPlrAnim__FP12PlayerStructiii(ptrplr,7,ptrplr->_pHFrames,0);
		ptrplr->_pmode = PM_GOTHIT;
		ptrplr->_pVar8 = 1;
		SetPlayerOld__FP12PlayerStruct(ptrplr);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm /*$s0*/, int x /*$s1*/, int y /*$s2*/)
 // line 1953, offset 0x80061448
	/* begin block 1 */
		// Start line: 1954
		// Start offset: 0x80061448
		// Variables:
	// 		int ii; // $t0
	/* end block 1 */
	// End offset: 0x800615C0
	// End Line: 1982

	/* begin block 2 */
		// Start line: 4087
	/* end block 2 */
	// End Line: 4088

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RespawnDeadItem__FP10ItemStructii(ItemStruct *itm,int x,int y)

{
	ItemStruct *pIVar1;
	char cVar2;
	int i;
	int iVar3;
	int iVar4;
	int iVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	
	if (numitems < 0x7f) {
		i = FindGetItem__FiUsi((int)itm->IDidx,itm->_iCreateInfo,itm->_iSeed);
		if (-1 < i) {
			SyncGetItem__FiiiUsi(x,y,(int)itm->IDidx,itm->_iCreateInfo,itm->_iSeed);
		}
		i = (int)itemavail;
		dung_map[x * 0x70 + y].dItem = itemavail + '\x01';
		cVar2 = s__800d53d5[0x7d - numitems];
		(&itemactive)[numitems] = itemavail;
		itemavail = cVar2;
		pIVar1 = item + i;
		pIVar8 = itm;
		do {
			pIVar7 = pIVar8;
			pIVar6 = pIVar1;
			iVar3 = pIVar7->_iVMult1;
			iVar4 = pIVar7->_iVAdd2;
			iVar5 = pIVar7->_iVMult2;
			pIVar6->_iVAdd1 = pIVar7->_iVAdd1;
			pIVar6->_iVMult1 = iVar3;
			pIVar6->_iVAdd2 = iVar4;
			pIVar6->_iVMult2 = iVar5;
			pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
			pIVar1 = (ItemStruct *)&pIVar6->_iSeed;
		} while (pIVar8 != (ItemStruct *)&itm->_iSufPower);
		iVar3 = pIVar7->_ivalue;
		iVar4 = pIVar7->_iIvalue;
		((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
		pIVar6->_ivalue = iVar3;
		pIVar6->_iIvalue = iVar4;
		item[i]._ix = (char)x;
		item[i]._iy = (char)y;
		RespawnItem__FiUc(i,'\x01');
		itm->_itype = -1;
		numitems = numitems + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr /*$s5*/, struct ItemStruct *itm /*$s6*/, int xx /*$a2*/, int yy /*$a3*/)
 // line 1987, offset 0x800615dc
	/* begin block 1 */
		// Start line: 1988
		// Start offset: 0x800615DC
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s4

		/* begin block 1.1 */
			// Start line: 2010
			// Start offset: 0x80061694
			// Variables:
		// 		int l; // $s1

			/* begin block 1.1.1 */
				// Start line: 2010
				// Start offset: 0x80061698

				/* begin block 1.1.1.1 */
					// Start line: 2011
					// Start offset: 0x800616A4
					// Variables:
				// 		int j; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 2011
						// Start offset: 0x800616A4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2012
							// Start offset: 0x800616B0
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80061770
						// End Line: 2022
					/* end block 1.1.1.1.1 */
					// End offset: 0x80061770
					// End Line: 2022
				/* end block 1.1.1.1 */
				// End offset: 0x80061778
				// End Line: 2023
			/* end block 1.1.1 */
			// End offset: 0x80061778
			// End Line: 2023
		/* end block 1.1 */
		// End offset: 0x80061780
		// End Line: 2024
	/* end block 1 */
	// End offset: 0x80061780
	// End Line: 2024

	/* begin block 2 */
		// Start line: 4179
	/* end block 2 */
	// End Line: 4180

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlrDeadItem__FP12PlayerStructP10ItemStructii
							 (PlayerStruct *ptrplr,ItemStruct *itm,int xx,int yy)

{
	uchar uVar1;
	ItemStruct *pIVar2;
	ItemStruct *pIVar3;
	int iVar4;
	uchar i;
	int i_00;
	uchar j;
	int j_00;
	
	if (itm->_itype != -1) {
		_i = (int)ptrplr->_px + xx;
		i = (uchar)_i;
		_j = (int)ptrplr->_py + yy;
		j = (uchar)_j;
		if ((xx != 0) || (iVar4 = 1, yy != 0)) {
			uVar1 = ItemSpaceOk__Fii(_i,_j);
			if (uVar1 != '\0') {
				RespawnDeadItem__FP10ItemStructii(itm,_i,_j);
				pIVar2 = &ptrplr->HoldItem;
				pIVar3 = (ItemStruct *)&itm->_iSufPower;
				do {
					_i = itm->_iVMult1;
					_j = itm->_iVAdd2;
					iVar4 = itm->_iVMult2;
					pIVar2->_iVAdd1 = itm->_iVAdd1;
					pIVar2->_iVMult1 = _i;
					pIVar2->_iVAdd2 = _j;
					pIVar2->_iVMult2 = iVar4;
					itm = (ItemStruct *)&itm->_iSeed;
					pIVar2 = (ItemStruct *)&pIVar2->_iSeed;
				} while (itm != pIVar3);
LAB_8006172c:
				_i = itm->_iVMult1;
				_j = itm->_iVAdd2;
				pIVar2->_iVAdd1 = itm->_iVAdd1;
				pIVar2->_iVMult1 = _i;
				pIVar2->_iVAdd2 = _j;
				NetSendCmdPItem__FUcUcUcUc('\0','\v',i,j);
				return;
			}
			iVar4 = 1;
		}
		while (_i = -iVar4, iVar4 < 0x32) {
			while (_j = -iVar4, _i <= iVar4) {
				j_00 = (int)ptrplr->_py + _i;
				j = (uchar)j_00;
				while (_j <= iVar4) {
					i_00 = (int)ptrplr->_px + _j;
					i = (uchar)i_00;
					uVar1 = ItemSpaceOk__Fii(i_00,j_00);
					if (uVar1 != '\0') {
						RespawnDeadItem__FP10ItemStructii(itm,i_00,j_00);
						pIVar2 = &ptrplr->HoldItem;
						pIVar3 = (ItemStruct *)&itm->_iSufPower;
						do {
							_i = itm->_iVMult1;
							_j = itm->_iVAdd2;
							iVar4 = itm->_iVMult2;
							pIVar2->_iVAdd1 = itm->_iVAdd1;
							pIVar2->_iVMult1 = _i;
							pIVar2->_iVAdd2 = _j;
							pIVar2->_iVMult2 = iVar4;
							itm = (ItemStruct *)&itm->_iSeed;
							pIVar2 = (ItemStruct *)&pIVar2->_iSeed;
						} while (itm != pIVar3);
						goto LAB_8006172c;
					}
					_j = _j + 1;
				}
				_i = _i + 1;
			}
			iVar4 = iVar4 + 1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int EarFlag /*$s1*/)
 // line 2032, offset 0x800617ac
	/* begin block 1 */
		// Start line: 2033
		// Start offset: 0x800617AC
	/* end block 1 */
	// End offset: 0x800617F4
	// End Line: 2035

	/* begin block 2 */
		// Start line: 4271
	/* end block 2 */
	// End Line: 4272

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlayerDropItems__FP12PlayerStructi(PlayerStruct *ptrplr,int EarFlag)

{
	int iVar1;
	
	iVar1 = plrind__FP12PlayerStruct(ptrplr);
	PlayerDeathCount[iVar1] = 5;
	iVar1 = plrind__FP12PlayerStruct(ptrplr);
	PlayerEar[iVar1] = EarFlag;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s2*/)
 // line 2038, offset 0x8006180c
	/* begin block 1 */
		// Start line: 2039
		// Start offset: 0x8006180C
		// Variables:
	// 		unsigned char diablolevel; // $s0

		/* begin block 1.1 */
			// Start line: 2050
			// Start offset: 0x80061864

			/* begin block 1.1.1 */
				// Start line: 2051
				// Start offset: 0x80061874
				// Variables:
			// 		struct PlayerStruct *p; // $s4
			// 		struct ItemStruct *pi; // $s1
			// 		int i; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 2067
					// Start offset: 0x800618C4

					/* begin block 1.1.1.1.1 */
						// Start line: 2074
						// Start offset: 0x800618D8
						// Variables:
					// 		int pdd; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800618E4
					// End Line: 2076
				/* end block 1.1.1.1 */
				// End offset: 0x8006191C
				// End Line: 2078
			/* end block 1.1.1 */
			// End offset: 0x80061924
			// End Line: 2080
		/* end block 1.1 */
		// End offset: 0x80061924
		// End Line: 2080
	/* end block 1 */
	// End offset: 0x80061924
	// End Line: 2080

	/* begin block 2 */
		// Start line: 4283
	/* end block 2 */
	// End Line: 4284

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TryDropPlayerItems__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	int *piVar5;
	ItemStruct *itm;
	
	iVar3 = plrind__FP12PlayerStruct(ptrplr);
	piVar5 = PlayerDeathCount + iVar3;
	iVar3 = *piVar5;
	bVar1 = currlevel != '\x10';
	if (0 < iVar3) {
		*piVar5 = iVar3 + -1;
		iVar3 = *piVar5;
	}
	iVar2 = myplr;
	if (iVar3 == 0) {
		*piVar5 = -1;
		if (0xb < (&_pcurs)[iVar2]) {
			PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,&ptrplr->HoldItem,0,0);
			NewCursor__Fi(1);
		}
		if (bVar1) {
			DropHalfPlayersGold__FP12PlayerStruct(ptrplr);
			iVar3 = 6;
			itm = ptrplr->InvBody;
			while (iVar3 != -1) {
				uVar4 = (int)ptrplr->_pdir + iVar3 & 7;
				PlrDeadItem__FP12PlayerStructP10ItemStructii
									(ptrplr,itm,(int)offset_x[uVar4],(int)offset_y[uVar4]);
				iVar3 = iVar3 + -1;
				itm = itm + 1;
			}
			CalcPlrInv__FP12PlayerStructUc(ptrplr,'\0');
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s1*/, int earflag /*$s3*/)
 // line 2086, offset 0x80061948
	/* begin block 1 */
		// Start line: 2087
		// Start offset: 0x80061948
		// Variables:
	// 		struct ItemStruct ear; // stack offset -136
	// 		struct PlayerStruct *p; // $s2
	/* end block 1 */
	// End offset: 0x80061B24
	// End Line: 2202

	/* begin block 2 */
		// Start line: 4399
	/* end block 2 */
	// End Line: 4400

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlayerKill__FP12PlayerStructi(PlayerStruct *ptrplr,int earflag)

{
	char cVar1;
	uchar uVar2;
	int psfx;
	TASK *T;
	int x;
	int y;
	
	automapflag = '\0';
	if (gbActivePlayers == '\x01') {
		automapflag = '\0';
		PA_SetPauseOk__Fb((void *)0x0);
	}
	if ((ptrplr->_pHitPoints == 0) && (ptrplr->_pmode == PM_DEATH)) {
		return;
	}
	cVar1 = ptrplr->_pClass;
	psfx = 0xb;
	if (cVar1 == '\0') {
		x = (int)ptrplr->_px;
		y = (int)ptrplr->_py;
	}
	else {
		if (cVar1 == '\x01') {
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			psfx = 0x2ab;
		}
		else {
			psfx = 0x243;
			if (cVar1 != '\x02') goto LAB_80061a04;
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
		}
	}
	PlaySfxLoc__Fiii(psfx,x,y);
LAB_80061a04:
	if (gbActivePlayers == '\x01') {
		GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	}
	psfx = plrind__FP12PlayerStruct(ptrplr);
	T = (&_spselflag2)[psfx];
	if (T != (TASK *)0x0) {
		TSK_Kill(T);
	}
	(&_spselflag2)[psfx] = (TASK *)0x0;
	PauseMode = '\x01';
	psfx = 2;
	do {
		TSK_Sleep(psfx);
		psfx = 1;
	} while (sghStream != (SFXHDR *)0x0);
	PauseMode = '\0';
	if (ptrplr->_pgfxnum != '\0') {
		ptrplr->_pgfxnum = '\0';
		ptrplr->_pGFXLoad = 0;
		SetPlrAnims__FP12PlayerStruct(ptrplr);
	}
	NewPlrAnim__FP12PlayerStructiii(ptrplr,1,ptrplr->_pDFrames,1);
	ptrplr->_pmode = PM_DEATH;
	ptrplr->_pBlockFlag = '\0';
	ptrplr->_pInvincible = '\x01';
	SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0);
	uVar2 = currlevel;
	ptrplr->_pVar8 = 1;
	ptrplr->DeadLevel = uVar2;
	SetPlayerOld__FP12PlayerStruct(ptrplr);
	drawhpflag = '\x01';
	psfx = plrind__FP12PlayerStruct(ptrplr);
	deathdelay2[psfx] = '\x1e';
	StartPlayerDropItems__FP12PlayerStructi(ptrplr,earflag);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s1*/)
 // line 2213, offset 0x80061b44
	/* begin block 1 */
		// Start line: 2214
		// Start offset: 0x80061B44
		// Variables:
	// 		long hGold; // $s5
	// 		int i; // $s4

		/* begin block 1.1 */
			// Start line: 2214
			// Start offset: 0x80061B44

			/* begin block 1.1.1 */
				// Start line: 2219
				// Start offset: 0x80061B78

				/* begin block 1.1.1.1 */
					// Start line: 2220
					// Start offset: 0x80061B78

					/* begin block 1.1.1.1.1 */
						// Start line: 2220
						// Start offset: 0x80061B80

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2222
							// Start offset: 0x80061B9C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2224
								// Start offset: 0x80061BAC
								// Variables:
							// 		int newgold; // $s0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80061C14
							// End Line: 2243
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80061C14
						// End Line: 2243
					/* end block 1.1.1.1.1 */
					// End offset: 0x80061C14
					// End Line: 2243
				/* end block 1.1.1.1 */
				// End offset: 0x80061C20
				// End Line: 2245
			/* end block 1.1.1 */
			// End offset: 0x80061C20
			// End Line: 2245
		/* end block 1.1 */
		// End offset: 0x80061C20
		// End Line: 2245
	/* end block 1 */
	// End offset: 0x80061C2C
	// End Line: 2248

	/* begin block 2 */
		// Start line: 4712
	/* end block 2 */
	// End Line: 4713

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DropHalfPlayersGold__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	PlayerStruct *pPVar2;
	ItemStruct *h;
	int i;
	int iVar3;
	
	iVar3 = ptrplr->_pGold;
	i = 0;
	if (0 < iVar3) {
		h = &ptrplr->HoldItem;
		pPVar2 = ptrplr;
		while ((i < ptrplr->_pNumInv && (0 < iVar3))) {
			if (pPVar2->InvList[0]._itype == 0xb) {
				iVar1 = pPVar2->InvList[0]._ivalue;
				iVar3 = iVar3 - iVar1;
				iVar1 = iVar1 >> 1;
				if (iVar1 == 0) {
					pPVar2->InvList[0]._ivalue = 1;
				}
				else {
					SetGoldCurs__FP12PlayerStructi(ptrplr,i);
					SetPlrHandItem__FP10ItemStructi(h,0);
					GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
					SetPlrHandGoldCurs__FP10ItemStruct(h);
					(ptrplr->HoldItem)._ivalue = iVar1;
					PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
					pPVar2->InvList[0]._ivalue = iVar1;
				}
			}
			pPVar2 = (PlayerStruct *)&pPVar2->_pSBkSpell;
			i = i + 1;
		}
	}
	i = CalculateGold__FP12PlayerStruct(ptrplr);
	ptrplr->_pGold = i;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int earflag /*$s1*/)
 // line 2254, offset 0x80061c54
	/* begin block 1 */
		// Start line: 2255
		// Start offset: 0x80061C54
		// Variables:
	// 		int i; // $a1
	// 		int mx; // $a0
	/* end block 1 */
	// End offset: 0x80061D98
	// End Line: 2280

	/* begin block 2 */
		// Start line: 4794
	/* end block 2 */
	// End Line: 4795

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlrKill__FP12PlayerStructi(PlayerStruct *ptrplr,int earflag)

{
	ushort uVar1;
	int iVar2;
	int iVar3;
	short *psVar4;
	
	plrind__FP12PlayerStruct(ptrplr);
	if ((ptrplr->_pHitPoints == 0) && (currlevel == '\0')) {
		SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0x40);
	}
	else {
		iVar3 = 0;
		if (0 < nummissiles) {
			psVar4 = &missileactive;
			do {
				iVar2 = (int)*psVar4;
				if (missile[iVar2]._mitype == '\r') {
					uVar1 = missile[iVar2]._misource;
					if (ptrplr != plr) {
						uVar1 = uVar1 ^ 1;
					}
					if ((uVar1 == 0) && (missile[iVar2]._miDelFlag == '\0')) {
						if (earflag == -1) {
							return;
						}
						missile[iVar2]._miVar8 = (short)earflag;
						return;
					}
				}
				iVar3 = iVar3 + 1;
				psVar4 = psVar4 + 1;
			} while (iVar3 < nummissiles);
		}
		SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0);
		StartPlayerKill__FP12PlayerStructi(ptrplr,earflag);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int earflag /*$a1*/)
 // line 2286, offset 0x80061db0
	/* begin block 1 */
		// Start line: 2287
		// Start offset: 0x80061DB0
	/* end block 1 */
	// End offset: 0x80061DC0
	// End Line: 2289

	/* begin block 2 */
		// Start line: 4858
	/* end block 2 */
	// End Line: 4859

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncPlrKill__FP12PlayerStructi(PlayerStruct *ptrplr,int earflag)

{
	StartPlayerKill__FP12PlayerStructi(ptrplr,earflag);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s2*/)
 // line 2294, offset 0x80061dd0
	/* begin block 1 */
		// Start line: 2295
		// Start offset: 0x80061DD0
		// Variables:
	// 		int i; // $s1
	// 		int mx; // $s0

		/* begin block 1.1 */
			// Start line: 2295
			// Start offset: 0x80061DD0

			/* begin block 1.1.1 */
				// Start line: 2298
				// Start offset: 0x80061E54
			/* end block 1.1.1 */
			// End offset: 0x80061F20
			// End Line: 2304
		/* end block 1.1 */
		// End offset: 0x80061F20
		// End Line: 2304
	/* end block 1 */
	// End offset: 0x800620C8
	// End Line: 2320

	/* begin block 2 */
		// Start line: 4877
	/* end block 2 */
	// End Line: 4878

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemovePlrMissiles__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ushort uVar1;
	void *pvVar2;
	int mi;
	int i;
	
	if (((currlevel != '\0') && (pvVar2 = ismyplr__FP12PlayerStruct(ptrplr), pvVar2 != (void *)0x0))
		 && ((monster[myplr]._mx != '\x01' || (monster[myplr]._my != '\0')))) {
		M_StartKill__Fii(myplr,myplr);
		AddDead__Fiici((int)monster[myplr]._mx,(int)monster[myplr]._my,(monster[myplr].MType)->mdeadval,
									 (int)monster[myplr]._mdir);
		i = myplr;
		dung_map[(int)monster[myplr]._mx * 0x70 + (int)monster[myplr]._my].dMonster = 0;
		monster[i]._mDelFlag = '\x01';
		DeleteMonsterList__Fv();
	}
	i = 0;
	if (0 < nummissiles) {
		mi = 0;
		do {
			mi = (int)*(short *)((int)&missileactive + mi);
			if (missile[mi]._mitype == '\x1e') {
				uVar1 = missile[mi]._misource;
				if (ptrplr != plr) {
					uVar1 = uVar1 ^ 1;
				}
				if (uVar1 == 0) {
					monster[(int)missile[mi]._miVar2]._mmode = (char)missile[mi]._miVar1;
				}
			}
			if (missile[mi]._mitype == '\r') {
				uVar1 = missile[mi]._misource;
				if (ptrplr != plr) {
					uVar1 = uVar1 ^ 1;
				}
				if (uVar1 == 0) {
					ClearMissileSpot__Fi(mi);
					DeleteMissile__Fii(mi,i);
				}
			}
			if (missile[mi]._mitype == '\"') {
				uVar1 = missile[mi]._misource;
				if (ptrplr != plr) {
					uVar1 = uVar1 ^ 1;
				}
				if (uVar1 == 0) {
					ClearMissileSpot__Fi(mi);
					DeleteMissile__Fii(mi,i);
				}
			}
			i = i + 1;
			mi = i * 2;
		} while (i < nummissiles);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s1*/)
 // line 2325, offset 0x800620e8
	/* begin block 1 */
		// Start line: 2326
		// Start offset: 0x800620E8
	/* end block 1 */
	// End offset: 0x80062180
	// End Line: 2350

	/* begin block 2 */
		// Start line: 4940
	/* end block 2 */
	// End Line: 4941

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitLevelChange__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	
	RemovePlrMissiles__FP12PlayerStruct(ptrplr);
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if ((pvVar1 != (void *)0x0) && (qtextflag != '\0')) {
		LANG_ReloadMainTXT__Fv();
		qtextflag = '\0';
		stream_stop__Fv();
	}
	RemovePlrFromMap__FP12PlayerStruct(ptrplr);
	SetPlayerOld__FP12PlayerStruct(ptrplr);
	ptrplr->_pLvlVisited[ptrplr->plrlevel] = '\x01';
	ClrPlrPath__FP12PlayerStruct(ptrplr);
	ptrplr->destAction = -1;
	ptrplr->_pLvlChanging = '\x01';
	ptrplr->pLvlLoad = '\n';
	visible_level = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckPlrDead__Fi(int pnum /*$a0*/)
 // line 2355, offset 0x80062198
	/* begin block 1 */
		// Start line: 2356
		// Start offset: 0x80062198
		// Variables:
	// 		struct PlayerStruct *ptrplr; // $a0
	/* end block 1 */
	// End offset: 0x800621E4
	// End Line: 2362

	/* begin block 2 */
		// Start line: 5005
	/* end block 2 */
	// End Line: 5006

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckPlrDead__Fi(int pnum)

{
	int iVar1;
	
	if (plr[pnum]._pmode == PM_DEATH) {
		iVar1 = plr[pnum]._pAnimLen;
		plr[pnum].plractive = '\0';
		plr[pnum]._pAnimFrame = iVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$s1*/, int fom /*$s3*/, int lvl /*$s2*/)
 // line 2368, offset 0x800621ec
	/* begin block 1 */
		// Start line: 2369
		// Start offset: 0x800621EC
		// Variables:
	// 		void * oldpause; // $s4
	/* end block 1 */
	// End offset: 0x8006237C
	// End Line: 2436

	/* begin block 2 */
		// Start line: 5031
	/* end block 2 */
	// End Line: 5032

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartNewLvl__FP12PlayerStructii(PlayerStruct *ptrplr,int fom,int lvl)

{
	ulong hWnd;
	void *NewPause;
	void *pvVar1;
	
	if (ptrplr->plractive != '\0') {
		CheckPlrDead__Fi(0);
		CheckPlrDead__Fi(1);
		NewPause = PA_SetPauseOk__Fb((void *)0x0);
		InitGamePadVars__Fv();
		InitLevelChange__FP12PlayerStruct(plr);
		InitLevelChange__FP12PlayerStruct(plr + 1);
		switch(fom) {
		case 0x45:
			setlvlnum = (uchar)lvl;
			break;
		case 0x48:
			plr[myplr].pTownWarps = plr[myplr].pTownWarps | (byte)(1 << ((uint)leveltype - 2 & 0x1f));
			plr[myplr ^ 1U].pTownWarps =
					 plr[myplr ^ 1U].pTownWarps | (byte)(1 << ((uint)leveltype - 2 & 0x1f));
		case 0x42:
		case 0x43:
		case 0x44:
		case 0x47:
		case 0x4c:
			ptrplr->plrlevel = lvl;
		}
		pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
		if (pvVar1 != (void *)0x0) {
			ptrplr->_pInvincible = '\x01';
			hWnd = ghMainWnd;
			ptrplr->_pmode = PM_NEWLVL;
			GRL_PostMessage__FUlUilUl(hWnd,fom,0,0);
		}
		PA_SetPauseOk__Fb(NewPause);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s1*/)
 // line 2442, offset 0x800623a0
	/* begin block 1 */
		// Start line: 2443
		// Start offset: 0x800623A0
	/* end block 1 */
	// End offset: 0x80062430
	// End Line: 2466

	/* begin block 2 */
		// Start line: 5180
	/* end block 2 */
	// End Line: 5181

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RestartTownLvl__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ulong hWnd;
	void *pvVar1;
	
	InitLevelChange__FP12PlayerStruct(plr);
	InitLevelChange__FP12PlayerStruct(plr + 1);
	ptrplr->plrlevel = 0;
	SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0x40);
	ptrplr->_pMana = 0;
	ptrplr->_pManaBase = ptrplr->_pMaxManaBase - ptrplr->_pMaxMana;
	CalcPlrInv__FP12PlayerStructUc(ptrplr,'\0');
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar1 != (void *)0x0) {
		ptrplr->_pInvincible = '\x01';
		hWnd = ghMainWnd;
		ptrplr->_pmode = PM_NEWLVL;
		GRL_PostMessage__FUlUilUl(hWnd,0x49,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s1*/, int pidx /*$s2*/)
 // line 2474, offset 0x80062448
	/* begin block 1 */
		// Start line: 2475
		// Start offset: 0x80062448
		// Variables:
	// 		void * oldpause; // $s3
	/* end block 1 */
	// End offset: 0x80062540
	// End Line: 2506

	/* begin block 2 */
		// Start line: 5251
	/* end block 2 */
	// End Line: 5252

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartWarpLvl__FP12PlayerStructi(PlayerStruct *ptrplr,int pidx)

{
	ulong hWnd;
	void *NewPause;
	void *pvVar1;
	
	if (ptrplr->plractive != '\0') {
		NewPause = PA_SetPauseOk__Fb((void *)0x0);
		CheckPlrDead__Fi(0);
		CheckPlrDead__Fi(1);
		InitLevelChange__FP12PlayerStruct(plr);
		InitLevelChange__FP12PlayerStruct(plr + 1);
		InitGamePadVars__Fv();
		if (gbMaxPlayers != '\x01') {
			if (ptrplr->plrlevel == 0) {
				ptrplr->plrlevel = (int)portal[pidx].level;
			}
			else {
				ptrplr->plrlevel = 0;
			}
		}
		pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
		if (pvVar1 != (void *)0x0) {
			SetCurrentPortal__Fi(pidx);
			ptrplr->_pInvincible = '\x01';
			hWnd = ghMainWnd;
			ptrplr->_pmode = PM_NEWLVL;
			GRL_PostMessage__FUlUilUl(hWnd,0x46,0,0);
		}
		PA_SetPauseOk__Fb(NewPause);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 2513, offset 0x80062560
	/* begin block 1 */
		// Start line: 2514
		// Start offset: 0x80062560
	/* end block 1 */
	// End offset: 0x80062560
	// End Line: 2515

	/* begin block 2 */
		// Start line: 5331
	/* end block 2 */
	// End Line: 5332

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoStand__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return 0;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ChkPlrOffsets__Fiiii(int wx1 /*$a0*/, int wy1 /*$s2*/, int wx2 /*$a2*/, int wy2 /*$a3*/)
 // line 2542, offset 0x80062568
	/* begin block 1 */
		// Start line: 2543
		// Start offset: 0x80062568
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s0
	/* end block 1 */
	// End offset: 0x800625FC
	// End Line: 2563

	/* begin block 2 */
		// Start line: 5388
	/* end block 2 */
	// End Line: 5389

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar ChkPlrOffsets__Fiiii(int wx1,int wy1,int wx2,int wy2)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	if ((plr[0]._pmode == PM_DEATH) || (plr[1]._pmode == PM_DEATH)) {
		uVar1 = '\x01';
	}
	else {
		iVar2 = abs(((wx1 - wy1) - (wx2 - wy2)) * 4);
		iVar3 = abs((wx1 + wy1 >> 1) * 4 + (wx2 + wy2 >> 1) * -4);
		if ((0x13c < iVar2) || (uVar1 = '\x01', 0xdc < iVar3)) {
			uVar1 = '\0';
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 2566, offset 0x80062618
	/* begin block 1 */
		// Start line: 2567
		// Start offset: 0x80062618
		// Variables:
	// 		int owx; // $s1
	// 		int owy; // $s2
	/* end block 1 */
	// End offset: 0x8006280C
	// End Line: 2684

	/* begin block 2 */
		// Start line: 5439
	/* end block 2 */
	// End Line: 5440

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoWalk__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	int y;
	int x;
	int y_00;
	
	x = ptrplr->WorldX;
	y = ptrplr->_pAnimFrame;
	y_00 = ptrplr->WorldY;
	if (y != 3) {
		if (ptrplr->_pWFrames == 8) {
			if (y != 7) goto LAB_80062688;
		}
		else {
			if (y != 4) goto LAB_80062688;
		}
	}
	PlaySfxLoc__Fiii(0,(int)ptrplr->_px,(int)ptrplr->_py);
LAB_80062688:
	ChangeLightOff__Fiii((int)ptrplr->_plid,0,0);
	ptrplr->WorldX = ptrplr->WorldX + (int)ptrplr->_pVar1;
	y = ptrplr->WorldY + (int)ptrplr->_pVar2;
	ptrplr->WorldY = y;
	WorldToOffset__FP12PlayerStructii(ptrplr,ptrplr->WorldX,y);
	uVar1 = PosOkPlayer__FP12PlayerStructii(ptrplr,(int)ptrplr->_px,(int)ptrplr->_py);
	if (uVar1 == '\0') {
		WorldToOffset__FP12PlayerStructii(ptrplr,x,y_00);
		if (ptrplr->walkpath[0] == -1) {
			StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pVar3);
		}
		else {
			StartWalkStand__FP12PlayerStruct(ptrplr);
		}
		ClearPlrPVars__FP12PlayerStruct(ptrplr);
		y = 1;
	}
	else {
		if (((plr[0].plractive == '\0') || (plr[1].plractive == '\0')) ||
			 (uVar1 = ChkPlrOffsets__Fiiii(plr[0].WorldX,plr[0].WorldY,plr[1].WorldX,plr[1].WorldY),
			 uVar1 != '\0')) {
			PM_ChangeOffset__FP12PlayerStruct(ptrplr);
			ChangeLightXY__Fiii((int)ptrplr->_plid,(int)ptrplr->_px,(int)ptrplr->_py);
			ChangeVisionXY__Fiii((int)ptrplr->_pvid,(int)ptrplr->_px,(int)ptrplr->_py);
			y = 0;
		}
		else {
			WorldToOffset__FP12PlayerStructii(ptrplr,x,y_00);
			if (ptrplr->walkpath[0] == -1) {
				StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pVar3);
			}
			else {
				StartWalkStand__FP12PlayerStruct(ptrplr);
			}
			ClearPlrPVars__FP12PlayerStruct(ptrplr);
			ChangeLightOff__Fiii((int)ptrplr->_plid,0,0);
			y = 1;
		}
	}
	return y;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int durrnd /*$s1*/)
 // line 2690, offset 0x80062828
	/* begin block 1 */
		// Start line: 2691
		// Start offset: 0x80062828
	/* end block 1 */
	// End offset: 0x800629D0
	// End Line: 2740

	/* begin block 2 */
		// Start line: 5723
	/* end block 2 */
	// End Line: 5724

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar WeaponDur__FP12PlayerStructi(PlayerStruct *ptrplr,int durrnd)

{
	bool bVar1;
	void *pvVar2;
	long lVar3;
	uint uVar4;
	short sVar5;
	int iVar6;
	
	bVar1 = false;
	pvVar2 = ismyplr__FP12PlayerStruct(ptrplr);
	if ((pvVar2 == (void *)0x0) || (lVar3 = ENG_random__Fl(durrnd), lVar3 != 0)) {
		bVar1 = true;
	}
	if (bVar1) {
		return '\0';
	}
	if ((ptrplr->InvBody[4]._itype == -1) || (ptrplr->InvBody[4]._iClass != '\x01')) {
LAB_800628b4:
		if ((ptrplr->InvBody[5]._itype != -1) && (ptrplr->InvBody[5]._iClass == '\x01')) {
			iVar6 = (int)ptrplr->InvBody[5]._iDurability;
			if (iVar6 == 0xff) {
				return '\0';
			}
			uVar4 = iVar6 - 1;
			ptrplr->InvBody[5]._iDurability = (short)uVar4;
			if ((uVar4 & 0xffff) == 0) {
				NetSendCmdDelItem__FUcUc('\x01','\x05');
				ptrplr->InvBody[5]._itype = -1;
				goto LAB_800629b8;
			}
		}
		if (ptrplr->InvBody[4]._itype == -1) {
			sVar5 = ptrplr->InvBody[5]._itype;
			if (sVar5 == 5) {
				iVar6 = (int)ptrplr->InvBody[5]._iDurability;
				if (iVar6 == 0xff) {
					return '\0';
				}
				uVar4 = iVar6 - 1;
				ptrplr->InvBody[5]._iDurability = (short)uVar4;
				if ((uVar4 & 0xffff) == 0) {
					NetSendCmdDelItem__FUcUc('\x01','\x05');
					ptrplr->InvBody[5]._itype = -1;
					goto LAB_800629b8;
				}
				goto LAB_80062964;
			}
		}
		else {
LAB_80062964:
			sVar5 = ptrplr->InvBody[5]._itype;
		}
		if (sVar5 != -1) {
			return '\0';
		}
		if (ptrplr->InvBody[4]._itype != 5) {
			return '\0';
		}
		iVar6 = (int)ptrplr->InvBody[4]._iDurability;
		if ((iVar6 == 0xff) ||
			 (uVar4 = iVar6 - 1, ptrplr->InvBody[4]._iDurability = (short)uVar4, (uVar4 & 0xffff) != 0)) {
			return '\0';
		}
	}
	else {
		iVar6 = (int)ptrplr->InvBody[4]._iDurability;
		if (iVar6 == 0xff) {
			return '\0';
		}
		uVar4 = iVar6 - 1;
		ptrplr->InvBody[4]._iDurability = (short)uVar4;
		if ((uVar4 & 0xffff) != 0) goto LAB_800628b4;
	}
	NetSendCmdDelItem__FUcUc('\x01','\x04');
	ptrplr->InvBody[4]._itype = -1;
LAB_800629b8:
	CalcPlrInv__FP12PlayerStructUc(ptrplr,'\x01');
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s1*/, int m /*$s3*/)
 // line 2746, offset 0x800629ec
	/* begin block 1 */
		// Start line: 2747
		// Start offset: 0x800629EC
		// Variables:
	// 		int hit; // $s2
	// 		int hper; // $s0
	// 		int mind; // $s0
	// 		int maxd; // $a0
	// 		int ddp; // $s0
	// 		long dam; // $s2
	// 		long skdam; // $s4
	// 		int phanditype; // $a0
	// 		int tmac; // $v1
	// 		unsigned char rv; // $s5
	// 		unsigned char ret; // stack offset -40
	/* end block 1 */
	// End offset: 0x80063020
	// End Line: 2864

	/* begin block 2 */
		// Start line: 5835
	/* end block 2 */
	// End Line: 5836

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PlrHitMonst__FP12PlayerStructi(PlayerStruct *ptrplr,int m)

{
	char cVar1;
	uchar uVar2;
	long lVar3;
	void *pvVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int dam;
	int iVar8;
	uchar local_28 [8];
	
	iVar8 = 0;
	if ((monster[m]._mhitpoints >> 6 < 1) ||
		 ((((monster[m].MType)->mtype == ' ' && (monster[m]._mgoal == '\x02')) ||
			(monster[m]._mmode == '\x0e')))) {
		return '\0';
	}
	lVar3 = ENG_random__Fl(100);
	if (monster[m]._mmode == '\x0f') {
		lVar3 = 0;
	}
	iVar7 = ((int)ptrplr->_pLevel - (((int)monster[m].mArmorClass - ptrplr->_pIEnAc) + -0x32)) +
					((int)((uint)(ushort)ptrplr->_pDexterity << 0x10) >> 0x11);
	if (ptrplr->_pClass == '\0') {
		iVar7 = iVar7 + 0x14;
	}
	iVar7 = iVar7 + ptrplr->_pIBonusToHit;
	dam = iVar7;
	if (iVar7 < 5) {
		dam = 5;
	}
	if (0x5f < iVar7) {
		dam = 0x5f;
	}
	uVar2 = CheckMonsterHit__FiRUc(m,local_28);
	if (uVar2 != '\0') {
		return local_28[0];
	}
	if (dam <= lVar3) {
		return '\0';
	}
	iVar7 = ptrplr->_pIMinDam;
	lVar3 = ENG_random__Fl((ptrplr->_pIMaxDam - iVar7) + 1);
	iVar7 = lVar3 + iVar7;
	iVar7 = iVar7 + (iVar7 * ptrplr->_pIBonusDam) / 100 + ptrplr->_pIBonusDamMod + ptrplr->_pDamageMod
	;
	if ((ptrplr->_pClass == '\0') &&
		 (cVar1 = ptrplr->_pLevel, lVar3 = ENG_random__Fl(100), lVar3 < (int)cVar1)) {
		iVar7 = iVar7 * 2;
	}
	dam = -1;
	if ((ptrplr->InvBody[4]._itype == 1) || (ptrplr->InvBody[5]._itype == 1)) {
		dam = 1;
	}
	if ((ptrplr->InvBody[4]._itype == 4) || (ptrplr->InvBody[5]._itype == 4)) {
		dam = 4;
	}
	cVar1 = (monster[m].MData)->mMonstClass;
	if (cVar1 == '\0') {
		if (dam == 1) {
			iVar7 = iVar7 - (iVar7 >> 1);
		}
		iVar5 = 4;
LAB_80062c98:
		if (dam == iVar5) {
			iVar7 = iVar7 + (iVar7 >> 1);
		}
	}
	else {
		if (cVar1 == '\x02') {
			iVar5 = 1;
			if (dam == 4) {
				iVar7 = iVar7 - (iVar7 >> 1);
				iVar5 = 1;
			}
			goto LAB_80062c98;
		}
	}
	if (((ptrplr->_pIFlags & 0x40000000U) != 0) && ((monster[m].MData)->mMonstClass == '\x01')) {
		iVar7 = iVar7 * 3;
	}
	dam = iVar7 * 0x40;
	pvVar4 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar4 != (void *)0x0) {
		monster[m]._mhitpoints = monster[m]._mhitpoints + iVar7 * -0x40;
	}
	if ((ptrplr->_pIFlags & 2U) != 0) {
		iVar8 = ENG_random__Fl(dam >> 3);
		iVar5 = ptrplr->_pHitPoints + iVar8;
		ptrplr->_pHitPoints = iVar5;
		if (ptrplr->_pMaxHP < iVar5) {
			ptrplr->_pHitPoints = ptrplr->_pMaxHP;
		}
		iVar5 = ptrplr->_pHPBase + iVar8;
		ptrplr->_pHPBase = iVar5;
		if (ptrplr->_pMaxHPBase < iVar5) {
			ptrplr->_pHPBase = ptrplr->_pMaxHPBase;
		}
		drawhpflag = '\x01';
	}
	uVar6 = ptrplr->_pIFlags;
	if ((uVar6 & 0x6000) != 0) {
		if ((uVar6 & 0x8000000) != 0) goto LAB_80062e58;
		if ((uVar6 & 0x2000) != 0) {
			iVar8 = (iVar7 * 0xc0) / 100;
		}
		if ((uVar6 & 0x4000) != 0) {
			iVar8 = dam / 0x14;
		}
		iVar5 = ptrplr->_pMana + iVar8;
		ptrplr->_pMana = iVar5;
		if (ptrplr->_pMaxMana < iVar5) {
			ptrplr->_pMana = ptrplr->_pMaxMana;
		}
		iVar5 = ptrplr->_pManaBase + iVar8;
		ptrplr->_pManaBase = iVar5;
		if (ptrplr->_pMaxManaBase < iVar5) {
			ptrplr->_pManaBase = ptrplr->_pMaxManaBase;
		}
		drawmanaflag = '\x01';
	}
	uVar6 = ptrplr->_pIFlags;
LAB_80062e58:
	if ((uVar6 & 0x18000) != 0) {
		if ((uVar6 & 0x8000) != 0) {
			iVar8 = (iVar7 * 0xc0) / 100;
		}
		if ((uVar6 & 0x10000) != 0) {
			iVar8 = dam / 0x14;
		}
		iVar7 = ptrplr->_pHitPoints + iVar8;
		ptrplr->_pHitPoints = iVar7;
		if (ptrplr->_pMaxHP < iVar7) {
			ptrplr->_pHitPoints = ptrplr->_pMaxHP;
		}
		iVar8 = ptrplr->_pHPBase + iVar8;
		ptrplr->_pHPBase = iVar8;
		if (ptrplr->_pMaxHPBase < iVar8) {
			ptrplr->_pHPBase = ptrplr->_pMaxHPBase;
		}
		drawhpflag = '\x01';
	}
	if ((ptrplr->_pIFlags & 0x100U) != 0) {
		monster[m]._mFlags = monster[m]._mFlags | 8;
	}
	if (monster[m]._mhitpoints >> 6 < 1) {
		if (monster[m]._mmode != '\x0f') {
			M_StartKill__FiP12PlayerStruct(m,ptrplr);
			return '\x01';
		}
		M_StartKill__FiP12PlayerStruct(m,ptrplr);
	}
	else {
		if (monster[m]._mmode != '\x0f') {
			if ((ptrplr->_pIFlags & 0x800U) != 0) {
				M_GetKnockback__Fii(m,(int)ptrplr->_pdir);
			}
			M_StartHit__FiP12PlayerStructi(m,ptrplr,dam);
			return '\x01';
		}
		M_StartHit__FiP12PlayerStructi(m,ptrplr,dam);
	}
	monster[m]._mmode = '\x0f';
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr /*$s2*/, char p /*$s3*/)
 // line 2870, offset 0x80063048
	/* begin block 1 */
		// Start line: 2871
		// Start offset: 0x80063048
		// Variables:
	// 		int hit; // $s4
	// 		int hper; // $s0
	// 		int mind; // $s0
	// 		int maxd; // $a0
	// 		int ddp; // $s0
	// 		long dam; // $s1
	// 		long skdam; // $a0
	// 		int tac; // $a0
	// 		int blk; // $a3
	// 		int blkper; // $v1
	// 		unsigned char rv; // $s5
	/* end block 1 */
	// End offset: 0x800633C8
	// End Line: 2937

	/* begin block 2 */
		// Start line: 6105
	/* end block 2 */
	// End Line: 6106

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PlrHitPlr__FP12PlayerStructc(PlayerStruct *ptrplr,char p)

{
	char cVar1;
	int dir;
	long lVar2;
	void *pvVar3;
	int iVar4;
	long lVar5;
	int iVar6;
	int pnum;
	ulong dwDam;
	
	iVar6 = (int)p;
	dir = plrind__FP12PlayerStruct(ptrplr);
	if (((iVar6 == dir) || (plr[iVar6]._pInvincible != '\0')) || ((plr[iVar6]._pSpellFlags & 1U) != 0)
		 ) {
		return '\0';
	}
	lVar2 = ENG_random__Fl(100);
	iVar4 = (uint)(ushort)plr[iVar6]._pDexterity << 0x10;
	dir = iVar4 >> 0x10;
	dir = ((int)ptrplr->_pLevel -
				(plr[iVar6]._pIAC + plr[iVar6]._pIBonusAC +
				 (((dir / 5 + (dir >> 0x1f)) - (iVar4 >> 0x1f)) * 0x10000 >> 0x10) + -0x32)) +
				((int)((uint)(ushort)ptrplr->_pDexterity << 0x10) >> 0x11);
	if (ptrplr->_pClass == '\0') {
		dir = dir + 0x14;
	}
	dir = dir + ptrplr->_pIBonusToHit;
	iVar4 = dir;
	if (dir < 5) {
		iVar4 = 5;
	}
	if (0x5f < dir) {
		iVar4 = 0x5f;
	}
	if (((plr[iVar6]._pmode == PM_STAND) || (lVar5 = 100, plr[iVar6]._pmode == PM_ATTACK)) &&
		 (lVar5 = 100, plr[iVar6]._pBlockFlag != '\0')) {
		lVar5 = ENG_random__Fl(100);
	}
	pnum = (int)p;
	iVar6 = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity +
					((int)ptrplr->_pLevel - (int)plr[pnum]._pLevel) * -2;
	dir = iVar6;
	if (iVar6 < 0) {
		dir = 0;
	}
	if (100 < iVar6) {
		dir = 100;
	}
	if (iVar4 <= lVar2) {
		return '\0';
	}
	if (dir <= lVar5) {
		dir = ptrplr->_pIMinDam;
		lVar2 = ENG_random__Fl((ptrplr->_pIMaxDam - dir) + 1);
		dir = lVar2 + dir;
		dir = dir + (dir * ptrplr->_pIBonusDam) / 100 + ptrplr->_pIBonusDamMod + ptrplr->_pDamageMod;
		if ((ptrplr->_pClass == '\0') &&
			 (cVar1 = ptrplr->_pLevel, lVar2 = ENG_random__Fl(100), lVar2 < (int)cVar1)) {
			dir = dir * 2;
		}
		dwDam = dir << 6;
		if ((ptrplr->_pIFlags & 2U) != 0) {
			lVar2 = ENG_random__Fl((int)dwDam >> 3);
			dir = ptrplr->_pHitPoints + lVar2;
			ptrplr->_pHitPoints = dir;
			if (ptrplr->_pMaxHP < dir) {
				ptrplr->_pHitPoints = ptrplr->_pMaxHP;
			}
			dir = ptrplr->_pHPBase + lVar2;
			ptrplr->_pHPBase = dir;
			if (ptrplr->_pMaxHPBase < dir) {
				ptrplr->_pHPBase = ptrplr->_pMaxHPBase;
			}
			drawhpflag = '\x01';
		}
		pvVar3 = ismyplr__FP12PlayerStruct(ptrplr);
		if (pvVar3 != (void *)0x0) {
			NetSendCmdDamage__FUcUcUl('\x01',p,dwDam);
		}
		StartPlrHit__FiiUc((int)p,dwDam,'\0');
		return '\x01';
	}
	dir = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)ptrplr->_px,(int)ptrplr->_py)
	;
	StartPlrBlock__Fii(pnum,dir);
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$a0*/, int mx /*$a1*/, int my /*$a2*/)
 // line 2943, offset 0x800633f0
	/* begin block 1 */
		// Start line: 2944
		// Start offset: 0x800633F0
		// Variables:
	// 		int oi; // $a1
	/* end block 1 */
	// End offset: 0x80063460
	// End Line: 2951

	/* begin block 2 */
		// Start line: 6274
	/* end block 2 */
	// End Line: 6275

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PlrHitObj__FP12PlayerStructii(PlayerStruct *ptrplr,int mx,int my)

{
	bool bVar1;
	uint uVar2;
	uint val;
	
	uVar2 = SEXT14(dung_map[mx * 0x70 + my].dObject);
	val = uVar2 - 1;
	if ((int)uVar2 < 1) {
		val = ~uVar2;
	}
	bVar1 = object[val]._oBreak == '\x01';
	if (bVar1) {
		BreakObject__FP12PlayerStructi(ptrplr,val);
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 2958, offset 0x80063470
	/* begin block 1 */
		// Start line: 2959
		// Start offset: 0x80063470
		// Variables:
	// 		int dx; // $s1
	// 		int dy; // $s2
	// 		int m; // $a1
	// 		char p; // $v0
	// 		unsigned char didhit; // $s3
	// 		int frame; // $a0
	/* end block 1 */
	// End offset: 0x800637E4
	// End Line: 3031

	/* begin block 2 */
		// Start line: 6307
	/* end block 2 */
	// End Line: 6308

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoAttack__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	uchar uVar2;
	byte p;
	int psfx;
	uint uVar3;
	uint m;
	int sy;
	
	psfx = ptrplr->_pAnimFrame;
	uVar2 = '\0';
	if (((ptrplr->_pIFlags & 0x20000U) != 0) && (psfx == 1)) {
		ptrplr->_pAnimFrame = 2;
	}
	if (((ptrplr->_pIFlags & 0x40000U) != 0) && ((psfx == 1 || (psfx == 3)))) {
		ptrplr->_pAnimFrame = ptrplr->_pAnimFrame + 1;
	}
	if (((ptrplr->_pIFlags & 0x80000U) != 0) && (((psfx == 1 || (psfx == 3)) || (psfx == 5)))) {
		ptrplr->_pAnimFrame = ptrplr->_pAnimFrame + 1;
	}
	if (((ptrplr->_pIFlags & 0x100000U) != 0) && ((psfx == 1 || (psfx == 4)))) {
		ptrplr->_pAnimFrame = ptrplr->_pAnimFrame + 2;
	}
	psfx = ptrplr->_pAnimFrame;
	if (psfx == ptrplr->_pAFNum + -1) {
		psfx = 9;
		if (ptrplr->_pwtype != '\0') {
			psfx = 4;
		}
		PlaySfxLoc__Fiii(psfx,(int)ptrplr->_px,(int)ptrplr->_py);
		psfx = ptrplr->_pAnimFrame;
	}
	if (psfx == ptrplr->_pAFNum) {
		sy = (int)ptrplr->_pVar7;
		psfx = (int)ptrplr->_pVar6;
		uVar3 = SEXT24(dung_map[psfx * 0x70 + sy].dMonster);
		if (uVar3 != 0) {
			m = uVar3 - 1;
			if ((int)uVar3 < 1) {
				m = ~uVar3;
			}
			uVar1 = CanTalkToMonst__Fi(m);
			if (uVar1 != '\0') {
				ptrplr->_pVar1 = 0;
				return 0;
			}
		}
		if ((ptrplr->_pIFlags & 0x10U) != 0) {
			AddMissile__Fiiiiiiciii(psfx,sy,1,0,0,0x40,0,(uint)(ptrplr != plr),0,0);
		}
		if ((ptrplr->_pIFlags & 0x20U) != 0) {
			AddMissile__Fiiiiiiciii(psfx,sy,2,0,0,0x40,0,(uint)(ptrplr != plr),0,0);
		}
		uVar3 = SEXT24(dung_map[psfx * 0x70 + sy].dMonster);
		if (uVar3 == 0) {
			uVar1 = IsDplayer__Fii(psfx,sy);
			if ((uVar1 == '\0') || (FriendlyMode != '\0')) {
				if ('\0' < dung_map[psfx * 0x70 + sy].dObject) {
					uVar2 = PlrHitObj__FP12PlayerStructii(ptrplr,psfx,sy);
				}
			}
			else {
				uVar2 = IsDplayer__Fii(psfx,sy);
				if (uVar2 == '\0') {
					p = IsDplayer__Fii(psfx,sy);
					p = ~p;
				}
				else {
					uVar2 = IsDplayer__Fii(psfx,sy);
					p = uVar2 - 1;
				}
				uVar2 = PlrHitPlr__FP12PlayerStructc(ptrplr,p);
			}
		}
		else {
			m = uVar3 - 1;
			if ((int)uVar3 < 1) {
				m = ~uVar3;
			}
			uVar2 = PlrHitMonst__FP12PlayerStructi(ptrplr,m);
		}
		if ((uVar2 != '\0') && (uVar2 = WeaponDur__FP12PlayerStructi(ptrplr,0x1e), uVar2 != '\0'))
		goto LAB_800637cc;
	}
	if (ptrplr->_pAnimFrame != ptrplr->_pAFrames) {
		return 0;
	}
LAB_800637cc:
	StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
	ClearPlrPVars__FP12PlayerStruct(ptrplr);
	return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3040, offset 0x80063804
	/* begin block 1 */
		// Start line: 3041
		// Start offset: 0x80063804
		// Variables:
	// 		int mistype; // $t0
	/* end block 1 */
	// End offset: 0x800638F0
	// End Line: 3095

	/* begin block 2 */
		// Start line: 6485
	/* end block 2 */
	// End Line: 6486

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoRangeAttack__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	uint mitype;
	
	if (ptrplr->_pAnimFrame == ptrplr->_pAFNum) {
		mitype = -(uint)((ptrplr->_pIFlags & 8U) != 0) & 0x1b;
		if ((ptrplr->_pIFlags & 0x2000000U) != 0) {
			mitype = 0x38;
		}
		AddMissile__Fiiiiiiciii
							((int)ptrplr->_px,(int)ptrplr->_py,(int)ptrplr->_pVar1,(int)ptrplr->_pVar2,
							 (int)ptrplr->_pdir,mitype,0,(uint)(ptrplr != plr),4,0);
		PlaySfxLoc__Fiii(4,(int)ptrplr->_px,(int)ptrplr->_py);
		uVar1 = WeaponDur__FP12PlayerStructi(ptrplr,0x28);
		if (uVar1 != '\0') goto LAB_800638d8;
	}
	if (ptrplr->_pAnimFrame < ptrplr->_pAFrames) {
		return 0;
	}
LAB_800638d8:
	StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
	ClearPlrPVars__FP12PlayerStruct(ptrplr);
	return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3102, offset 0x80063904
	/* begin block 1 */
		// Start line: 3103
		// Start offset: 0x80063904
	/* end block 1 */
	// End offset: 0x800639C4
	// End Line: 3125

	/* begin block 2 */
		// Start line: 6609
	/* end block 2 */
	// End Line: 6610

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShieldDur__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	undefined *puVar1;
	uint uVar2;
	int iVar3;
	
	puVar1 = (undefined *)ismyplr__FP12PlayerStruct(ptrplr);
	if (puVar1 == &DAT_00000001) {
		if (ptrplr->InvBody[4]._itype == 5) {
			iVar3 = (int)ptrplr->InvBody[4]._iDurability;
			if (iVar3 == 0xff) {
				return;
			}
			uVar2 = iVar3 - 1;
			ptrplr->InvBody[4]._iDurability = (short)uVar2;
			if ((uVar2 & 0xffff) == 0) {
				NetSendCmdDelItem__FUcUc('\x01','\x04');
				ptrplr->InvBody[4]._itype = -1;
				CalcPlrInv__FP12PlayerStructUc(ptrplr,'\x01');
			}
		}
		if (((ptrplr->InvBody[5]._itype == 5) &&
				(iVar3 = (int)ptrplr->InvBody[5]._iDurability, iVar3 != 0xff)) &&
			 (uVar2 = iVar3 - 1, ptrplr->InvBody[5]._iDurability = (short)uVar2, (uVar2 & 0xffff) == 0)) {
			NetSendCmdDelItem__FUcUc('\x01','\x05');
			ptrplr->InvBody[5]._itype = -1;
			CalcPlrInv__FP12PlayerStructUc(ptrplr,'\x01');
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3133, offset 0x800639d8
	/* begin block 1 */
		// Start line: 3134
		// Start offset: 0x800639D8
	/* end block 1 */
	// End offset: 0x80063A60
	// End Line: 3146

	/* begin block 2 */
		// Start line: 6671
	/* end block 2 */
	// End Line: 6672

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoBlock__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	long lVar2;
	
	if (((ptrplr->_pIFlags & 0x1000000U) != 0) && (ptrplr->_pAnimFrame != 1)) {
		ptrplr->_pAnimFrame = ptrplr->_pBFrames;
	}
	iVar1 = 0;
	if (ptrplr->_pBFrames <= ptrplr->_pAnimFrame) {
		StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
		ClearPlrPVars__FP12PlayerStruct(ptrplr);
		lVar2 = ENG_random__Fl(10);
		iVar1 = 1;
		if (lVar2 == 0) {
			ShieldDur__FP12PlayerStruct(ptrplr);
			iVar1 = 1;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ do_spell_anim__FiiiP12PlayerStruct(int aframe /*$s2*/, int spell /*$s1*/, int clss /*$a2*/, struct PlayerStruct *ptrplr /*$s7*/)
 // line 3149, offset 0x80063a74
	/* begin block 1 */
		// Start line: 3150
		// Start offset: 0x80063A74
		// Variables:
	// 		struct CPlayer *test; // $s0
	// 		int OtPos; // $s6
	// 		int ScrX; // $s5
	// 		int ScrY; // $s4
	// 		struct TextDat *missdat; // $s3
	// 		struct TextDat *objdat; // $s1
	// 		struct POLY_FT4 *FT4a; // stack offset -48
	// 		struct POLY_FT4 *FT4b; // stack offset -44
	// 		int frame; // $s0
	/* end block 1 */
	// End offset: 0x80063F24
	// End Line: 3250

	/* begin block 2 */
		// Start line: 6703
	/* end block 2 */
	// End Line: 6704

/* WARNING: Unknown calling convention yet parameter storage is locked */

void do_spell_anim__FiiiP12PlayerStruct(int aframe,int spell,int clss,PlayerStruct *ptrplr)

{
	CPlayer *this;
	int iVar1;
	int X;
	int iVar2;
	uint uVar3;
	TextDat *this_00;
	ulong *puVar4;
	int Creature;
	POLY_FT4 *local_30;
	POLY_FT4 *local_2c;
	
	this = GetPlayer__7CPlayeri((uint)(ptrplr != plr));
	iVar1 = GetLastOtPos__C7CPlayer(this);
	X = GetLastScrX__C7CPlayer(this);
	iVar2 = GetLastScrY__C7CPlayer(this);
	this_00 = MissDat;
	switch(spell) {
	case 1:
	case 6:
	case 0xc:
	case 0xf:
	case 0x14:
	case 0x18:
	case 0x1d:
		this_00 = GM_UseTexData__Fi(0xce);
		PRIM_GetPrim__FPP8POLY_FT4(&local_30);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_30,aframe + 0x1e,X + 0x48,iVar2 + 0x46,0,0);
		local_30->r0 = -0x80;
		local_30->g0 = -0x80;
		local_30->b0 = -0x80;
		local_30->code = local_30->code & 0xfd;
		local_30->code = local_30->code & 0xfe;
		puVar4 = ThisOt + iVar1;
		local_30->tag = local_30->tag & 0xff000000 | *puVar4 & 0xffffff;
		*puVar4 = *puVar4 & 0xff000000 | (uint)local_30 & 0xffffff;
		GM_FinishedUsing__FP7TextDat(this_00);
		ChangeLightColour__Fii((int)ptrplr->_plid,0x90);
		break;
	case 2:
	case 4:
	case 5:
	case 7:
	case 8:
	case 9:
	case 10:
	case 0xb:
	case 0xd:
	case 0x13:
	case 0x15:
	case 0x17:
	case 0x1a:
	case 0x1b:
	case 0x1c:
	case 0x1f:
	case 0x20:
	case 0x21:
	case 0x22:
	case 0x23:
	case 0x24:
		if (leveltype == '\0') {
			Creature = 0;
		}
		else {
			Creature = 0x11;
		}
		uVar3 = GetFrNum__7TextDatiiii(MissDat,Creature,0,0,aframe);
		PRIM_GetPrim__FPP8POLY_FT4(&local_30);
		PrepareFt4__7TextDatP8POLY_FT4iiiii
							(this_00,local_30,uVar3 & 0xffff,X,iVar2 + 0xe + aframe * -2,0,0);
		if (leveltype == '\0') {
			Creature = 1;
		}
		else {
			Creature = 0x12;
		}
		uVar3 = GetFrNum__7TextDatiiii(this_00,Creature,0,0,aframe);
		PRIM_GetPrim__FPP8POLY_FT4(&local_2c);
		PrepareFt4__7TextDatP8POLY_FT4iiiii
							(this_00,local_2c,uVar3 & 0xffff,X,iVar2 + 0xe + aframe * -2,0,0);
		local_30->r0 = '@';
		local_30->g0 = '@';
		local_30->b0 = -0x10;
		local_2c->r0 = '@';
		local_2c->g0 = '@';
		local_2c->b0 = -0x10;
		local_30->code = local_30->code | 2;
		local_2c->code = local_2c->code | 2;
		local_30->code = local_30->code & 0xfe;
		local_2c->code = local_2c->code & 0xfe;
		puVar4 = ThisOt + iVar1;
		local_30->tag = local_30->tag & 0xff000000 | *puVar4 & 0xffffff;
		*puVar4 = *puVar4 & 0xff000000 | (uint)local_30 & 0xffffff;
		local_2c->tag = local_2c->tag & 0xff000000 | puVar4[-1] & 0xffffff;
		puVar4[-1] = puVar4[-1] & 0xff000000 | (uint)local_2c & 0xffffff;
		ChangeLightColour__Fii((int)ptrplr->_plid,0x3c0);
		break;
	case 3:
	case 0xe:
	case 0x12:
	case 0x1e:
		this_00 = GM_UseTexData__Fi(0xce);
		PRIM_GetPrim__FPP8POLY_FT4(&local_30);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_30,(aframe << 1) / 5 + 0x18,X,iVar2 + 2,0,0);
		local_30->r0 = -0x80;
		local_30->g0 = -0x80;
		local_30->b0 = -0x10;
		local_30->code = local_30->code & 0xfd;
		local_30->code = local_30->code & 0xfe;
		puVar4 = ThisOt + iVar1;
		local_30->tag = local_30->tag & 0xff000000 | *puVar4 & 0xffffff;
		*puVar4 = *puVar4 & 0xff000000 | (uint)local_30 & 0xffffff;
		GM_FinishedUsing__FP7TextDat(this_00);
		ChangeLightColour__Fii((int)ptrplr->_plid,0x40);
		break;
	default:
		DBG_Error((char *)0x0,"source/PLAYER.cpp",0xcb1);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3258, offset 0x80063f54
	/* begin block 1 */
		// Start line: 3259
		// Start offset: 0x80063F54
	/* end block 1 */
	// End offset: 0x80064308
	// End Line: 3321

	/* begin block 2 */
		// Start line: 6956
	/* end block 2 */
	// End Line: 6957

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoSpell__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	bool bVar1;
	short sVar2;
	uint uVar3;
	void *pvVar4;
	char cVar5;
	int aframe;
	uint uVar6;
	uint uVar7;
	
	if (invflag == '\0') {
		aframe = (int)ptrplr->_pVar8;
		if (aframe < ptrplr->_pSFNum) {
			do_spell_anim__FiiiP12PlayerStruct(aframe,(int)ptrplr->_pSpell,(int)ptrplr->_pClass,ptrplr);
		}
		else {
			if (aframe == ptrplr->_pSFNum) {
				if (ptrplr->_pSpell == '\x18') {
					ApocaStart__Fi((uint)(ptrplr != plr));
				}
				CastSpell__Fiiiiiiii
									((uint)(ptrplr != plr),(int)ptrplr->_pSpell,(int)ptrplr->_px,(int)ptrplr->_py,
									 (int)ptrplr->_pVar1,(int)ptrplr->_pVar2,0,(int)ptrplr->_pVar4);
				if (ptrplr->_pSplFrom == '\0') {
					cVar5 = ptrplr->_pRSplType;
					if (cVar5 == '\x02') {
						uVar6 = *(uint *)((int)&ptrplr->_pScrlSpells + 4);
						uVar3 = ptrplr->_pRSpell - 1;
						if ((int)(uVar3 * 0x4000000) < 0) {
							uVar7 = uVar6 >> (uVar3 & 0x1f);
						}
						else {
							uVar7 = *(uint *)&ptrplr->_pScrlSpells >> (uVar3 & 0x1f);
							if (uVar3 * 0x4000000 != 0) {
								uVar7 = uVar7 | uVar6 << (-uVar3 & 0x1f);
							}
						}
						if ((uVar7 & 1) == 0) {
							ptrplr->_pRSpell = -1;
							ptrplr->_pRSplType = '\x04';
						}
						cVar5 = ptrplr->_pRSplType;
					}
					if (cVar5 == '\x03') {
						uVar6 = *(uint *)((int)&ptrplr->_pISpells + 4);
						uVar3 = ptrplr->_pRSpell - 1;
						if ((int)(uVar3 * 0x4000000) < 0) {
							uVar7 = uVar6 >> (uVar3 & 0x1f);
						}
						else {
							uVar7 = *(uint *)&ptrplr->_pISpells >> (uVar3 & 0x1f);
							if (uVar3 * 0x4000000 != 0) {
								uVar7 = uVar7 | uVar6 << (-uVar3 & 0x1f);
							}
						}
						if ((uVar7 & 1) == 0) {
							ptrplr->_pRSpell = -1;
							ptrplr->_pRSplType = '\x04';
						}
					}
				}
			}
		}
		cVar5 = ptrplr->_pSpell;
		if (cVar5 == '\x17') {
			if (ptrplr->_pVar8 == 1) {
				TeleStart__FP12PlayerStruct(ptrplr);
			}
			cVar5 = ptrplr->_pSpell;
		}
		if ((cVar5 == '\n') && (ptrplr->_pVar8 == 1)) {
			PhaseStart__FP12PlayerStruct(ptrplr);
		}
		cVar5 = ptrplr->_pSpell;
		if (cVar5 == '\x02') {
			if (ptrplr->_pVar8 == 1) {
				HealStart__FP12PlayerStruct(ptrplr);
			}
			cVar5 = ptrplr->_pSpell;
		}
		if ((cVar5 == '\"') && (ptrplr->_pVar8 == 1)) {
			HealotherStart__FP12PlayerStruct(ptrplr);
		}
		sVar2 = ptrplr->_pVar8 + 1;
		bVar1 = leveltype == '\0';
		ptrplr->_pVar8 = sVar2;
		if (bVar1) {
			if ((int)sVar2 <= ptrplr->_pSFrames) {
				return 0;
			}
			aframe = plrind__FP12PlayerStruct(ptrplr);
			bVar1 = false;
			if ((&_spselflag2)[aframe] == (TASK *)0x0) {
				pvVar4 = SelectorActive__Fv();
				bVar1 = pvVar4 == (void *)0x0;
			}
			if (bVar1) {
				aframe = 6;
				if (ptrplr != plr) {
					aframe = 7;
				}
				PostGamePad__Fiiii(aframe,0,0,0);
			}
			StartWalkStand__FP12PlayerStruct(ptrplr);
		}
		else {
			if (ptrplr->_pAnimFrame != ptrplr->_pSFrames) {
				return 0;
			}
			aframe = plrind__FP12PlayerStruct(ptrplr);
			bVar1 = false;
			if ((&_spselflag2)[aframe] == (TASK *)0x0) {
				pvVar4 = SelectorActive__Fv();
				bVar1 = pvVar4 == (void *)0x0;
			}
			if (bVar1) {
				aframe = 6;
				if (ptrplr != plr) {
					aframe = 7;
				}
				PostGamePad__Fiiii(aframe,0,0,0);
			}
			StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
		}
		ClearPlrPVars__FP12PlayerStruct(ptrplr);
		aframe = 1;
		if (ptrplr->_pSpell != '\n') {
			PhaseEnd__FP12PlayerStruct(ptrplr);
			aframe = 1;
		}
	}
	else {
		aframe = 0;
	}
	return aframe;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3326, offset 0x80064320
	/* begin block 1 */
		// Start line: 3327
		// Start offset: 0x80064320
		// Variables:
	// 		struct PlayerStruct *p; // $s2
	// 		int a; // $a1
	// 		struct ItemStruct *pi; // $s1
	/* end block 1 */
	// End offset: 0x8006440C
	// End Line: 3350

	/* begin block 2 */
		// Start line: 7094
	/* end block 2 */
	// End Line: 7095

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ArmorDur__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	undefined *puVar1;
	long lVar2;
	uint uVar3;
	uchar bLoc;
	ItemStruct *pIVar4;
	
	puVar1 = (undefined *)ismyplr__FP12PlayerStruct(ptrplr);
	if ((puVar1 == &DAT_00000001) &&
		 ((ptrplr->InvBody[6]._itype != -1 || (ptrplr->InvBody[0]._itype != -1)))) {
		lVar2 = ENG_random__Fl(3);
		if (ptrplr->InvBody[6]._itype == -1) {
			if (ptrplr->InvBody[0]._itype != -1) {
				lVar2 = 0;
			}
		}
		else {
			if (ptrplr->InvBody[0]._itype == -1) {
				lVar2 = 1;
			}
		}
		pIVar4 = ptrplr->InvBody + 6;
		if (lVar2 == 0) {
			pIVar4 = ptrplr->InvBody;
		}
		if (((int)pIVar4->_iDurability != 0xff) &&
			 (uVar3 = (int)pIVar4->_iDurability - 1, pIVar4->_iDurability = (short)uVar3,
			 (uVar3 & 0xffff) == 0)) {
			if (lVar2 == 0) {
				bLoc = '\0';
			}
			else {
				bLoc = '\x06';
			}
			NetSendCmdDelItem__FUcUc('\x01',bLoc);
			pIVar4->_itype = -1;
			CalcPlrInv__FP12PlayerStructUc(ptrplr,'\x01');
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3356, offset 0x80064428
	/* begin block 1 */
		// Start line: 3357
		// Start offset: 0x80064428
		// Variables:
	// 		int rv; // $s1
	/* end block 1 */
	// End offset: 0x800644A0
	// End Line: 3374

	/* begin block 2 */
		// Start line: 7154
	/* end block 2 */
	// End Line: 7155

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoGotHit__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	long lVar1;
	int iVar2;
	
	if ((int)ptrplr->_pVar8 == ptrplr->_pHFrames) {
		StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
		ClearPlrPVars__FP12PlayerStruct(ptrplr);
		lVar1 = ENG_random__Fl(4);
		iVar2 = 1;
		if (lVar1 != 0) {
			ArmorDur__FP12PlayerStruct(ptrplr);
			iVar2 = 1;
		}
	}
	else {
		ptrplr->_pVar8 = ptrplr->_pVar8 + 1;
		iVar2 = 0;
	}
	ChangeLightColour__Fii((int)ptrplr->_plid,(int)&DAT_000023f0);
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3380, offset 0x800644b8
	/* begin block 1 */
		// Start line: 3381
		// Start offset: 0x800644B8
		// Variables:
	// 		int pnum; // $s1

		/* begin block 1.1 */
			// Start line: 3381
			// Start offset: 0x800644B8

			/* begin block 1.1.1 */
				// Start line: 3392
				// Start offset: 0x800644F4

				/* begin block 1.1.1.1 */
					// Start line: 3393
					// Start offset: 0x800644F4

					/* begin block 1.1.1.1.1 */
						// Start line: 3393
						// Start offset: 0x80064520

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3394
							// Start offset: 0x80064520

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3395
								// Start offset: 0x80064550

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 3396
									// Start offset: 0x80064550

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 3403
										// Start offset: 0x80064594
										// Variables:
									// 		int vid; // $a1
									// 		struct LightListStruct *vl; // $v0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 3403
											// Start offset: 0x80064594
											// Variables:
										// 		int i; // $a0
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80064614
										// End Line: 3417
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80064648
									// End Line: 3421
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80064648
								// End Line: 3421
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80064658
							// End Line: 3424
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80064658
						// End Line: 3424
					/* end block 1.1.1.1.1 */
					// End offset: 0x80064658
					// End Line: 3424
				/* end block 1.1.1.1 */
				// End offset: 0x80064658
				// End Line: 3424
			/* end block 1.1.1 */
			// End offset: 0x80064668
			// End Line: 3428
		/* end block 1.1 */
		// End offset: 0x80064668
		// End Line: 3428
	/* end block 1 */
	// End offset: 0x80064688
	// End Line: 3434

	/* begin block 2 */
		// Start line: 7202
	/* end block 2 */
	// End Line: 7203

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoDeath__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	char cVar1;
	int num;
	void *pvVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	num = plrind__FP12PlayerStruct(ptrplr);
	TryDropPlayerItems__FP12PlayerStruct(ptrplr);
	if (ptrplr->_pDFrames << 1 <= (int)ptrplr->_pVar8) {
		if ((('\x01' < deathdelay2[num]) &&
				(pvVar2 = ismyplr__FP12PlayerStruct(ptrplr), pvVar2 != (void *)0x0)) &&
			 (cVar1 = deathdelay2[num], deathdelay2[num] = cVar1 + -1, (char)(cVar1 + -1) == '\x01')) {
			RemovePlrFromMap__FP12PlayerStruct(ptrplr);
			ptrplr->plractive = '\0';
			gbActivePlayers = gbActivePlayers + -1;
			if (gbActivePlayers == '\0') {
				deathflag = '\x01';
				PA_SetPauseOk__Fb((void *)0x0);
			}
			else {
				iVar5 = (int)ptrplr->_pvid;
				dovision = '\0';
				iVar4 = 0;
				if (0 < numvision) {
					iVar3 = 0;
					do {
						if ((int)(&VisionList[0]._lid)[iVar3] == iVar5) {
							(&VisionList[0]._ldel)[iVar3] = '\x01';
							dovision = '\x01';
							iVar5 = iVar4;
						}
						iVar4 = iVar4 + 1;
						iVar3 = iVar3 + 0xe;
					} while ((iVar4 < numvision) && (dovision == '\0'));
				}
				DoUnVision__Fiiii((int)VisionList[iVar5]._lx,(int)VisionList[iVar5]._ly,
													(uint)VisionList[iVar5]._lradius,num);
				ptrplr->_pvid = -1;
			}
			num = plrind__FP12PlayerStruct(ptrplr);
			ClrCursor__Fi(num);
		}
		ptrplr->_pAnimDelay = 10000;
		ptrplr->_pAnimFrame = ptrplr->_pAnimLen;
	}
	if (ptrplr->_pVar8 < 100) {
		ptrplr->_pVar8 = ptrplr->_pVar8 + 1;
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3440, offset 0x800646a0
	/* begin block 1 */
		// Start line: 3441
		// Start offset: 0x800646A0
	/* end block 1 */
	// End offset: 0x800646A0
	// End Line: 3442

	/* begin block 2 */
		// Start line: 7325
	/* end block 2 */
	// End Line: 7326

/* WARNING: Unknown calling convention yet parameter storage is locked */

int PM_DoNewLvl__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s2*/)
 // line 3448, offset 0x800646a8
	/* begin block 1 */
		// Start line: 3449
		// Start offset: 0x800646A8
		// Variables:
	// 		int i; // $s1
	// 		int d; // $s1
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x80064B4C
	// End Line: 3762

	/* begin block 2 */
		// Start line: 7340
	/* end block 2 */
	// End Line: 7341

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckNewPath__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	byte bVar1;
	int d;
	int pnum;
	int cx;
	int cy;
	uint uVar2;
	
	if (ptrplr->walkpath[0] != -1) {
		return;
	}
	if ((int)ptrplr->destAction == -1) {
		return;
	}
	switch(((int)ptrplr->destAction + -9) * 0x1000000 >> 0x18) {
	case 0:
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)ptrplr->destParam1,
														(int)ptrplr->destParam2);
		StartAttack__FP12PlayerStructi(ptrplr,d);
		break;
	case 3:
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)ptrplr->destParam1,
														(int)ptrplr->destParam2);
		StartSpell__FP12PlayerStructiii(ptrplr,d,(int)ptrplr->destParam1,(int)ptrplr->destParam2);
		bVar1 = ptrplr->destParam3;
		goto LAB_800648b0;
	case 4:
		d = (int)ptrplr->destParam1;
		goto LAB_800648e0;
	case 5:
		d = (int)ptrplr->destParam1;
		TryDisarm__FP12PlayerStructi(ptrplr,d);
LAB_800648e0:
		OperateObject__FP12PlayerStructiUc(ptrplr,d,'\0');
		break;
	case 6:
		uVar2 = SEXT14(ptrplr->destParam1);
		abs((int)ptrplr->_px - (int)item[uVar2]._ix);
		abs((int)ptrplr->_py - (int)item[uVar2]._iy);
		if (item[uVar2]._iRequest == '\0') {
			NetSendCmdGItem__FUcUcUcUcUc('\x01','\'',(uchar)myplr,(uchar)myplr,uVar2 & 0xff);
			item[uVar2]._iRequest = '\x01';
		}
		break;
	case 7:
		uVar2 = SEXT14(ptrplr->destParam1);
		abs((int)ptrplr->_px - (int)item[uVar2]._ix);
		abs((int)ptrplr->_py - (int)item[uVar2]._iy);
		NetSendCmdGItem__FUcUcUcUcUc('\x01','(',(uchar)myplr,(uchar)myplr,uVar2 & 0xff);
		break;
	case 8:
		if (stextflag == '\0') {
			d = (int)ptrplr->destParam1;
			if (leveltype == '\0') {
				TalkToTowner__FP12PlayerStructi(ptrplr,d);
			}
			else {
				if ((((currlevel != '\x0f') || (setlevel == '\0')) && (monster[d].mtalkmsg != 0)) &&
					 (monster[d].mtalkmsg != 0x24)) {
					TalktoMonster__Fi(d);
					options_pad = plrind__FP12PlayerStruct(ptrplr);
				}
			}
			if (((options_pad != -1) || (qtextflag != '\0')) || (stextflag != '\0')) {
				options_pad = plrind__FP12PlayerStruct(ptrplr);
			}
		}
		break;
	case 9:
		if (object[(int)ptrplr->destParam1]._oBreak != '\x01') {
			OperateObject__FP12PlayerStructiUc(ptrplr,(int)ptrplr->destParam1,'\x01');
		}
		break;
	case 0xf:
		cy = (int)ptrplr->destParam1;
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)monster[cy]._mfutx,
														(int)monster[cy]._mfuty);
		pnum = plrind__FP12PlayerStruct(ptrplr);
		cx = (int)monster[cy]._mfutx;
		cy = (int)monster[cy]._mfuty;
		goto LAB_8006489c;
	case 0x10:
		cy = (int)ptrplr->destParam1;
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)plr[cy]._px,(int)plr[cy]._py);
		pnum = plrind__FP12PlayerStruct(ptrplr);
		cx = (int)plr[cy]._px;
		cy = (int)plr[cy]._py;
LAB_8006489c:
		StartSpell__Fiiii(pnum,d,cx,cy);
		bVar1 = ptrplr->destParam2;
LAB_800648b0:
		ptrplr->_pVar4 = (short)((int)((uint)bVar1 << 0x18) >> 0x18);
		break;
	case 0x11:
		StartSpell__Fiiii((uint)(ptrplr != plr),(int)ptrplr->destParam3,(int)ptrplr->destParam1,
											(int)ptrplr->destParam2);
		ptrplr->_pVar3 = (short)ptrplr->destParam3;
		ptrplr->_pVar4 = (short)ptrplr->destParam4;
	}
	ptrplr->destAction = -1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrDeathModeOK__Fi(int p /*$a0*/)
 // line 3773, offset 0x80064b68
	/* begin block 1 */
		// Start line: 3774
		// Start offset: 0x80064B68
	/* end block 1 */
	// End offset: 0x80064BC8
	// End Line: 3782

	/* begin block 2 */
		// Start line: 7994
	/* end block 2 */
	// End Line: 7995

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PlrDeathModeOK__Fi(int p)

{
	bool bVar1;
	PLR_MODE PVar2;
	
	bVar1 = true;
	if (p == myplr) {
		PVar2 = plr[p]._pmode;
		if ((PVar2 == PM_DEATH) || (PVar2 == PM_QUIT)) {
			bVar1 = true;
		}
		else {
			bVar1 = PVar2 == PM_NEWLVL;
		}
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ValidatePlayer__Fv()
 // line 3788, offset 0x80064bd0
	/* begin block 1 */
		// Start line: 3789
		// Start offset: 0x80064BD0
		// Variables:
	// 		int i; // $a1
	// 		int gt; // $t0
	// 		int pc; // $v0
	// 		unsigned long msk; // $t2
	// 		unsigned long b; // $t6
	/* end block 1 */
	// End offset: 0x800650C0
	// End Line: 3830

	/* begin block 2 */
		// Start line: 8034
	/* end block 2 */
	// End Line: 8035

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ValidatePlayer__Fv(void)

{
	uint uVar1;
	char *pcVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	uint uVar8;
	uint uVar9;
	
	uVar8 = 0;
	uVar9 = 0;
	if ('2' < plr[myplr]._pLevel) {
		plr[myplr]._pLevel = '2';
	}
	if (plr[myplr]._pNextExper < plr[myplr]._pExperience) {
		plr[myplr]._pExperience = plr[myplr]._pNextExper;
	}
	iVar7 = 0;
	iVar3 = myplr * 0x19e8;
	iVar4 = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar5 = 0;
		do {
			if (*(short *)((int)&plr[myplr].InvList[0]._itype + iVar5) == 0xb) {
				if ((goldcheat == (void *)0x0) &&
					 (5000 < *(int *)((int)&plr[myplr].InvList[0]._ivalue + iVar5))) {
					*(undefined4 *)((int)&plr[myplr].InvList[0]._ivalue + iVar5) = 5000;
				}
				iVar7 = iVar7 + *(int *)((int)&plr[0].InvList[0]._ivalue + iVar3);
			}
			iVar3 = iVar3 + 0x6c;
			iVar4 = iVar4 + 1;
			iVar5 = iVar5 + 0x6c;
		} while (iVar4 < plr[myplr]._pNumInv);
	}
	if (iVar7 != plr[myplr]._pGold) {
		plr[myplr]._pGold = iVar7;
	}
	iVar3 = (int)plr[myplr]._pClass;
	if ((&MaxStats)[iVar3 * 4] < (int)plr[myplr]._pBaseStr) {
		plr[myplr]._pBaseStr = (short)(&MaxStats)[iVar3 * 4];
	}
	if ((&INT_800da43c)[iVar3 * 4] < (int)plr[myplr]._pBaseMag) {
		plr[myplr]._pBaseMag = (short)(&INT_800da43c)[iVar3 * 4];
	}
	if ((&INT_800da440)[iVar3 * 4] < (int)plr[myplr]._pBaseDex) {
		plr[myplr]._pBaseDex = (short)(&INT_800da440)[iVar3 * 4];
	}
	if (*(int *)(&DAT_800da444 + iVar3 * 0x10) < (int)plr[myplr]._pBaseVit) {
		plr[myplr]._pBaseVit = (short)*(int *)(&DAT_800da444 + iVar3 * 0x10);
	}
	iVar3 = 1;
	if (allspellsflag == (void *)0x0) {
		iVar4 = 0x34;
		do {
			uVar1 = iVar3 - 1;
			if (*(int *)((int)&spelldata.sBookLvl + iVar4) != -1) {
				if ((int)(uVar1 * 0x4000000) < 0) {
					uVar6 = 1 << (uVar1 & 0x1f);
					uVar1 = 0;
				}
				else {
					uVar6 = 0 << (uVar1 & 0x1f);
					if (uVar1 * 0x4000000 != 0) {
						uVar6 = uVar6 | 1U >> (-uVar1 & 0x1f);
					}
					uVar1 = 1 << (uVar1 & 0x1f);
				}
				pcVar2 = (char *)(myplr * 0x19e8 + -0x7ff25a57 + iVar3);
				uVar8 = uVar8 | uVar1;
				uVar9 = uVar9 | uVar6;
				if ('\x0f' < *pcVar2) {
					*pcVar2 = '\x0f';
				}
			}
			iVar7 = myplr;
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x34;
		} while (iVar3 < 0x25);
		uVar1 = *(uint *)((int)&plr[myplr]._pMemSpells + 4);
		*(uint *)&plr[myplr]._pMemSpells = *(uint *)&plr[myplr]._pMemSpells & uVar8;
		*(uint *)((int)&plr[iVar7]._pMemSpells + 4) = uVar1 & uVar9;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3877, offset 0x800650cc
	/* begin block 1 */
		// Start line: 3878
		// Start offset: 0x800650CC
	/* end block 1 */
	// End offset: 0x80065160
	// End Line: 3895

	/* begin block 2 */
		// Start line: 8217
	/* end block 2 */
	// End Line: 8218

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckCheatStats__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	if (0x2ee < ptrplr->_pStrength) {
		ptrplr->_pStrength = 0x2ee;
	}
	if (0x2ee < ptrplr->_pDexterity) {
		ptrplr->_pDexterity = 0x2ee;
	}
	if (0x2ee < ptrplr->_pMagic) {
		ptrplr->_pMagic = 0x2ee;
	}
	if (0x2ee < ptrplr->_pVitality) {
		ptrplr->_pVitality = 0x2ee;
	}
	if (0x1f400 < ptrplr->_pHitPoints) {
		ptrplr->_pHitPoints = 0x1f400;
	}
	if (0x1f400 < ptrplr->_pMana) {
		ptrplr->_pMana = 0x1f400;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessPlayers__Fv()
 // line 3903, offset 0x80065168
	/* begin block 1 */
		// Start line: 3904
		// Start offset: 0x80065168
		// Variables:
	// 		int raflag; // $s0
	// 		int pnum; // $s2
	// 		int tplayer; // $s5

		/* begin block 1.1 */
			// Start line: 3924
			// Start offset: 0x800651BC

			/* begin block 1.1.1 */
				// Start line: 3924
				// Start offset: 0x800651CC
				// Variables:
			// 		struct PlayerStruct *ptrplr; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8006540C
			// End Line: 4032
		/* end block 1.1 */
		// End offset: 0x80065418
		// End Line: 4035
	/* end block 1 */
	// End offset: 0x80065424
	// End Line: 4036

	/* begin block 2 */
		// Start line: 8283
	/* end block 2 */
	// End Line: 8284

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessPlayers__Fv(void)

{
	int iVar1;
	uchar uVar2;
	void *pvVar3;
	int iVar4;
	int iVar5;
	PlayerStruct *ptrplr;
	int p;
	undefined *puVar6;
	
	iVar1 = myplr;
	if ((0 < sfxdelay) && (sfxdelay = sfxdelay + -1, sfxdelay == 0)) {
		PlaySFX__Fi(sfxdnum);
	}
	p = 0;
	puVar6 = (undefined *)0x0;
	while (p < 2) {
		ptrplr = (PlayerStruct *)((int)&plr[0]._pmode + (int)puVar6);
		sel_data = p;
		myplr = p;
		if ((&plr[0].pLvlLoad)[(int)puVar6] != '\0') {
			sel_data = p;
			myplr = p;
			(&plr[0].pLvlLoad)[(int)puVar6] = (&plr[0].pLvlLoad)[(int)puVar6] + -1;
		}
		if (((&plr[0].plractive)[(int)puVar6] != '\0') &&
			 (pvVar3 = IsGameLoading__Fv(), pvVar3 == (void *)0x0)) {
			ValidatePlayer__Fv();
			CheckCheatStats__FP12PlayerStruct(ptrplr);
			uVar2 = PlrDeathModeOK__Fi(p);
			if ((uVar2 == '\0') && (*(int *)((int)&plr[0]._pHitPoints + (int)puVar6) >> 6 < 1)) {
				StartPlrKill__Fii(p,0);
			}
			if (((*(uint *)((int)&plr[0]._pIFlags + (int)puVar6) & 0x40) != 0) && (currlevel != '\0')) {
				*(int *)((int)&plr[0]._pHitPoints + (int)puVar6) =
						 *(int *)((int)&plr[0]._pHitPoints + (int)puVar6) + -4;
				*(int *)((int)&plr[0]._pHPBase + (int)puVar6) =
						 *(int *)((int)&plr[0]._pHPBase + (int)puVar6) + -4;
				if (*(int *)((int)&plr[0]._pHitPoints + (int)puVar6) >> 6 < 1) {
					StartPlrKill__Fii(p,0);
				}
				drawhpflag = '\x01';
			}
			iVar5 = 0;
			if (((*(uint *)((int)&plr[0]._pIFlags + (int)puVar6) & 0x8000000) != 0) &&
				 (iVar4 = *(int *)((int)&plr[0]._pManaBase + (int)puVar6), 0 < iVar4)) {
				iVar5 = *(int *)((int)&plr[0]._pMana + (int)puVar6);
				*(undefined4 *)((int)&plr[0]._pMana + (int)puVar6) = 0;
				drawmanaflag = '\x01';
				*(int *)((int)&plr[0]._pManaBase + (int)puVar6) = iVar4 - iVar5;
				iVar5 = 0;
			}
			do {
				switch(ptrplr->_pmode) {
				case PM_STAND:
					iVar5 = PM_DoStand__FP12PlayerStruct(ptrplr);
					break;
				case PM_WALK:
					iVar5 = PM_DoWalk__FP12PlayerStruct(ptrplr);
					break;
				case PM_ATTACK:
					iVar5 = PM_DoAttack__FP12PlayerStruct(ptrplr);
					break;
				case PM_RATTACK:
					iVar5 = PM_DoRangeAttack__FP12PlayerStruct(ptrplr);
					break;
				case PM_BLOCK:
					iVar5 = PM_DoBlock__FP12PlayerStruct(ptrplr);
					break;
				case PM_GOTHIT:
					iVar5 = PM_DoGotHit__FP12PlayerStruct(ptrplr);
					break;
				case PM_DEATH:
					iVar5 = PM_DoDeath__FP12PlayerStruct(ptrplr);
					break;
				case PM_SPELL:
					iVar5 = PM_DoSpell__FP12PlayerStruct(ptrplr);
					break;
				case PM_NEWLVL:
					iVar5 = PM_DoNewLvl__FP12PlayerStruct(ptrplr);
				}
				CheckNewPath__FP12PlayerStruct(ptrplr);
			} while (iVar5 != 0);
			iVar5 = *(int *)((int)&plr[0]._pAnimCnt + (int)puVar6) + 1;
			*(int *)((int)&plr[0]._pAnimCnt + (int)puVar6) = iVar5;
			if (*(int *)((int)&plr[0]._pAnimDelay + (int)puVar6) < iVar5) {
				*(undefined4 *)((int)&plr[0]._pAnimCnt + (int)puVar6) = 0;
				iVar5 = *(int *)((int)&plr[0]._pAnimFrame + (int)puVar6) + 1;
				*(int *)((int)&plr[0]._pAnimFrame + (int)puVar6) = iVar5;
				if (*(int *)((int)&plr[0]._pAnimLen + (int)puVar6) < iVar5) {
					*(undefined4 *)((int)&plr[0]._pAnimFrame + (int)puVar6) = 1;
				}
			}
		}
		puVar6 = &DAT_000019e8 + (int)puVar6;
		p = p + 1;
	}
	sel_data = iVar1;
	myplr = iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4041, offset 0x8006544c
	/* begin block 1 */
		// Start line: 4042
		// Start offset: 0x8006544C
	/* end block 1 */
	// End offset: 0x80065464
	// End Line: 4045

	/* begin block 2 */
		// Start line: 8568
	/* end block 2 */
	// End Line: 8569

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrPlrPath__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	memset(ptrplr->walkpath,0xff,0x19);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$s2*/, int px /*$s0*/, int py /*$s1*/)
 // line 4052, offset 0x80065474
	/* begin block 1 */
		// Start line: 4053
		// Start offset: 0x80065474
		// Variables:
	// 		int mi; // $v0
	// 		int p; // $s0
	// 		char bv; // $v0
	// 		struct map_info *dm; // $s3
	/* end block 1 */
	// End offset: 0x8006562C
	// End Line: 4080

	/* begin block 2 */
		// Start line: 8590
	/* end block 2 */
	// End Line: 8591

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PosOkPlayer__FP12PlayerStructii(PlayerStruct *ptrplr,int px,int py)

{
	uchar uVar1;
	uchar uVar2;
	byte bVar3;
	uint uVar4;
	int iVar5;
	uint uVar6;
	
	uVar1 = SolidLoc__Fii(px,py);
	uVar2 = '\0';
	if (uVar1 == '\0') {
		uVar1 = IsDplayer__Fii(px,py);
		if (uVar1 != '\0') {
			uVar1 = IsDplayer__Fii(px,py);
			if (uVar1 == '\0') {
				bVar3 = IsDplayer__Fii(px,py);
				uVar6 = ~(uint)bVar3;
			}
			else {
				bVar3 = IsDplayer__Fii(px,py);
				uVar6 = (uint)bVar3 - 1;
			}
			uVar4 = plrind__FP12PlayerStruct(ptrplr);
			if ((uVar6 != uVar4) && (plr[uVar6]._pHitPoints != 0)) {
				return '\0';
			}
		}
		iVar5 = (int)dung_map[py + px * 0x70].dMonster;
		if ((iVar5 == 0) ||
			 (((currlevel != '\0' && (0 < iVar5)) && (monster[iVar5 + -1]._mhitpoints >> 6 < 1)))) {
			bVar3 = dung_map[py + px * 0x70].dObject;
			if (bVar3 != 0) {
				if ((char)bVar3 < '\x01') {
					bVar3 = ~bVar3;
				}
				else {
					bVar3 = bVar3 - 1;
				}
				if (object[(int)(char)bVar3]._oSolidFlag != '\0') {
					return '\0';
				}
			}
			uVar2 = '\x01';
		}
		else {
			uVar2 = '\0';
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr /*$a0*/, int xx /*$a1*/, int yy /*$a2*/, unsigned char endspace /*$a3*/)
 // line 4086, offset 0x8006564c
	/* begin block 1 */
		// Start line: 4087
		// Start offset: 0x8006564C
	/* end block 1 */
	// End offset: 0x8006564C
	// End Line: 4087

	/* begin block 2 */
		// Start line: 8719
	/* end block 2 */
	// End Line: 8720

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MakePlrPath__FP12PlayerStructiiUc(PlayerStruct *ptrplr,int xx,int yy,uchar endspace)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckPlrSpell__Fv()
 // line 4144, offset 0x80065654
	/* begin block 1 */
		// Start line: 4145
		// Start offset: 0x80065654
		// Variables:
	// 		int sd; // $s0
	// 		struct SpellTarget *spl; // $s2
	// 		unsigned char addflag; // $s0
	// 		struct PlayerStruct *player; // $s1
	// 		int rspell; // $v1

		/* begin block 1.1 */
			// Start line: 4210
			// Start offset: 0x8006583C

			/* begin block 1.1.1 */
				// Start line: 4229
				// Start offset: 0x800659F8

				/* begin block 1.1.1.1 */
					// Start line: 4230
					// Start offset: 0x800659F8

					/* begin block 1.1.1.1.1 */
						// Start line: 4231
						// Start offset: 0x80065A08
						// Variables:
					// 		int SplLvl; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80065A98
					// End Line: 4249
				/* end block 1.1.1.1 */
				// End offset: 0x80065A98
				// End Line: 4249
			/* end block 1.1.1 */
			// End offset: 0x80065A98
			// End Line: 4249
		/* end block 1.1 */
		// End offset: 0x80065A98
		// End Line: 4249
	/* end block 1 */
	// End offset: 0x80065A98
	// End Line: 4249

	/* begin block 2 */
		// Start line: 8785
	/* end block 2 */
	// End Line: 8786

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckPlrSpell__Fv(void)

{
	char st;
	int iVar1;
	uchar uVar2;
	SpellTarget *this;
	void *pvVar3;
	uint uVar4;
	uint uVar5;
	_135fake psfx;
	
	this = GetSpellTarget__Fi(myplr);
	iVar1 = myplr;
	pvVar3 = Active__11SpellTarget(this);
	if (pvVar3 == (void *)0x0) {
		cursmx = (int)plr[iVar1]._px + (int)offset_x[(int)plr[iVar1]._pdir];
		cursmy = (int)plr[iVar1]._py + (int)offset_y[(int)plr[iVar1]._pdir];
	}
	else {
		cursmx = ZEXT14(this->_stx);
		cursmy = ZEXT14(this->_sty);
	}
	if (plr[iVar1]._pRSpell == -1) {
		st = plr[iVar1]._pClass;
		if (st == '\0') {
			psfx = PS_WARR34;
			goto LAB_80065a90;
		}
		if (st == '\x01') {
			psfx = PS_ROGUE34;
			goto LAB_80065a90;
		}
		psfx = PS_MAGE34;
	}
	else {
		if ((leveltype == '\0') && ((&spelldata)[plr[iVar1]._pRSpell].sTownSpell == '\0')) {
			st = plr[iVar1]._pClass;
			if (st == '\0') {
				psfx = PS_WARR27;
				goto LAB_80065a90;
			}
			if (st == '\x01') {
				psfx = PS_ROGUE27;
				goto LAB_80065a90;
			}
			psfx = PS_MAGE27;
		}
		else {
			st = plr[iVar1]._pRSplType;
			if (st == '\x02') {
				uVar2 = UseScroll__Fv();
			}
			else {
				if (st < '\x03') {
					uVar2 = '\0';
					if (-1 < st) {
						uVar2 = CheckSpell__FiicUc(myplr,plr[iVar1]._pRSpell,st,'\0');
					}
				}
				else {
					uVar2 = '\0';
					if (st == '\x03') {
						uVar2 = UseStaff__Fv();
					}
				}
			}
			if (uVar2 != '\0') {
				if (plr[iVar1]._pRSpell == 6) {
					uVar4 = GetDirection__Fiiii((int)plr[iVar1]._px,(int)plr[iVar1]._py,cursmx,cursmy);
					uVar5 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
					NetSendCmdLocParam3__FUcUcUcUcUsUsUs
										('\x01','T',(uchar)cursmx,(uchar)cursmy,(uint)*(ushort *)&plr[iVar1]._pRSpell,
										 uVar4 & 0xffff,uVar5 & 0xffff);
					return;
				}
				if (((&_pcursmonst)[sel_data] != -1) && (this->active == (void *)0x0)) {
					uVar4 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
					NetSendCmdParam3__FUcUcUsUsUs
										('\x01','\x16',*(ushort *)(&_pcursmonst + sel_data),
										 *(ushort *)&plr[iVar1]._pRSpell,uVar4 & 0xffff);
					return;
				}
				if ((&_pcursplr)[sel_data] != -1) {
					uVar4 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
					NetSendCmdParam3__FUcUcUsUsUs
										('\x01','\x17',(short)(&_pcursplr)[sel_data],*(ushort *)&plr[iVar1]._pRSpell,
										 uVar4 & 0xffff);
					return;
				}
				uVar4 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
				NetSendCmdLocParam2__FUcUcUcUcUsUs
									('\x01','\x0e',(uchar)cursmx,(uchar)cursmy,(uint)*(ushort *)&plr[iVar1]._pRSpell,
									 uVar4 & 0xffff);
				return;
			}
			if (plr[iVar1]._pRSplType != '\x01') {
				return;
			}
			if ((int)plr[iVar1]._pSplLvl[plr[iVar1]._pRSpell] + (int)plr[iVar1]._pISplLvlAdd == 0) {
				st = plr[iVar1]._pClass;
				if (st == '\0') {
					psfx = PS_WARR28;
					goto LAB_80065a90;
				}
				if (st == '\x01') {
					psfx = PS_ROGUE28;
					goto LAB_80065a90;
				}
				psfx = PS_MAGE28;
			}
			else {
				st = plr[iVar1]._pClass;
				if (st == '\0') {
					psfx = PS_WARR35;
					goto LAB_80065a90;
				}
				if (st == '\x01') {
					psfx = PS_ROGUE35;
					goto LAB_80065a90;
				}
				psfx = PS_MAGE35;
			}
		}
	}
	if (st != '\x02') {
		return;
	}
LAB_80065a90:
	PlaySFX__Fi(psfx);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s1*/)
 // line 4320, offset 0x80065ab4
	/* begin block 1 */
		// Start line: 4321
		// Start offset: 0x80065AB4
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80065B74
	// End Line: 4342

	/* begin block 2 */
		// Start line: 9141
	/* end block 2 */
	// End Line: 9142

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncInitPlrPos__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	int *piVar5;
	
	if (gbMaxPlayers != '\x01') {
		iVar3 = 0;
		piVar5 = &plryoff2;
		piVar4 = &plrxoff2;
		do {
			uVar1 = PosOkPlayer__FP12PlayerStructii
												(ptrplr,(int)ptrplr->_px + *piVar4,(int)ptrplr->_py + *piVar5);
			iVar2 = iVar3 << 2;
			if (uVar1 != '\0') goto LAB_80065b48;
			piVar5 = piVar5 + 1;
			iVar3 = iVar3 + 1;
			piVar4 = piVar4 + 1;
		} while (iVar3 < 8);
		iVar2 = iVar3 * 4;
LAB_80065b48:
		ptrplr->_px = ptrplr->_px + (short)*(undefined4 *)((int)&plrxoff2 + iVar2);
		ptrplr->_py = ptrplr->_py + (short)*(undefined4 *)((int)&plryoff2 + iVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 4348, offset 0x80065b9c
	/* begin block 1 */
		// Start line: 4349
		// Start offset: 0x80065B9C
	/* end block 1 */
	// End offset: 0x80065BB8
	// End Line: 4354

	/* begin block 2 */
		// Start line: 9204
	/* end block 2 */
	// End Line: 9205

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncInitPlr__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	SetPlrAnims__FP12PlayerStruct(ptrplr);
	SyncInitPlrPos__FP12PlayerStruct(ptrplr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckStats__Fi(int p /*$a0*/)
 // line 4370, offset 0x80065bcc
	/* begin block 1 */
		// Start line: 4371
		// Start offset: 0x80065BCC
		// Variables:
	// 		int c; // $a0
	// 		int i; // $a2
	// 		struct PlayerStruct *player; // $a1
	/* end block 1 */
	// End offset: 0x80065D98
	// End Line: 4410

	/* begin block 2 */
		// Start line: 9250
	/* end block 2 */
	// End Line: 9251

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckStats__Fi(int p)

{
	char cVar1;
	int iVar2;
	int iVar3;
	
	cVar1 = plr[p]._pClass;
	iVar2 = 0;
	if (cVar1 != '\0') {
		if (cVar1 == '\x01') {
			iVar2 = 1;
		}
		else {
			if (cVar1 == '\x02') {
				iVar2 = 2;
			}
		}
	}
	iVar3 = 0;
	do {
		if (iVar3 == 1) {
			if ((&INT_800da43c)[iVar2 * 4] < (int)plr[p]._pBaseMag) {
				plr[p]._pBaseMag = (short)(&INT_800da43c)[iVar2 * 4];
			}
			else {
				if ((int)plr[p]._pBaseMag < 0) {
					plr[p]._pBaseMag = 0;
				}
			}
		}
		else {
			if (iVar3 < 2) {
				if (iVar3 == 0) {
					if ((&MaxStats)[iVar2 * 4] < (int)plr[p]._pBaseStr) {
						plr[p]._pBaseStr = (short)(&MaxStats)[iVar2 * 4];
					}
					else {
						if ((int)plr[p]._pBaseStr < 0) {
							plr[p]._pBaseStr = 0;
						}
					}
				}
			}
			else {
				if (iVar3 == 2) {
					if ((&INT_800da440)[iVar2 * 4] < (int)plr[p]._pBaseDex) {
						plr[p]._pBaseDex = (short)(&INT_800da440)[iVar2 * 4];
					}
					else {
						if ((int)plr[p]._pBaseDex < 0) {
							plr[p]._pBaseDex = 0;
						}
					}
				}
				else {
					if (iVar3 == 3) {
						if (*(int *)(&DAT_800da444 + iVar2 * 0x10) < (int)plr[p]._pBaseVit) {
							plr[p]._pBaseVit = (short)*(int *)(&DAT_800da444 + iVar2 * 0x10);
						}
						else {
							if ((int)plr[p]._pBaseVit < 0) {
								plr[p]._pBaseVit = 0;
							}
						}
					}
				}
			}
		}
		iVar3 = iVar3 + 1;
	} while (iVar3 < 4);
	if (plr[p]._pMaxMana < plr[p]._pMana) {
		plr[p]._pMana = plr[p]._pMaxMana;
	}
	if (plr[p]._pMaxManaBase < plr[p]._pManaBase) {
		plr[p]._pManaBase = plr[p]._pMaxManaBase;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ModifyPlrStr__Fii(int p /*$a3*/, int l /*$a1*/)
 // line 4417, offset 0x80065da0
	/* begin block 1 */
		// Start line: 4418
		// Start offset: 0x80065DA0
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x80065EAC
	// End Line: 4430

	/* begin block 2 */
		// Start line: 9342
	/* end block 2 */
	// End Line: 9343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ModifyPlrStr__Fii(int p,int l)

{
	char cVar1;
	short sVar2;
	short sVar3;
	
	sVar3 = (short)l;
	if ((&MaxStats)[(int)plr[p]._pClass * 4] < (int)plr[p]._pBaseStr + l) {
		sVar3 = (short)(&MaxStats)[(int)plr[p]._pClass * 4] - plr[p]._pBaseStr;
	}
	sVar2 = plr[p]._pStrength;
	plr[p]._pBaseStr = plr[p]._pBaseStr + sVar3;
	cVar1 = plr[p]._pClass;
	plr[p]._pStrength = sVar2 + sVar3;
	if (cVar1 == '\x01') {
		plr[p]._pDamageMod =
				 (((int)plr[p]._pStrength + (int)plr[p]._pDexterity) * (int)plr[p]._pLevel) / 200;
	}
	else {
		plr[p]._pDamageMod = ((int)plr[p]._pStrength * (int)plr[p]._pLevel) / 100;
	}
	CalcPlrInv__FiUc(p,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ModifyPlrMag__Fii(int p /*$a0*/, int l /*$a1*/)
 // line 4437, offset 0x80065ebc
	/* begin block 1 */
		// Start line: 4438
		// Start offset: 0x80065EBC
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x80065F98
	// End Line: 4455

	/* begin block 2 */
		// Start line: 9389
	/* end block 2 */
	// End Line: 9390

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ModifyPlrMag__Fii(int p,int l)

{
	char cVar1;
	short sVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	if ((&INT_800da43c)[(int)plr[p]._pClass * 4] < (int)plr[p]._pBaseMag + l) {
		l = (&INT_800da43c)[(int)plr[p]._pClass * 4] - (int)plr[p]._pBaseMag;
	}
	sVar2 = plr[p]._pMagic;
	plr[p]._pBaseMag = plr[p]._pBaseMag + (short)l;
	cVar1 = plr[p]._pClass;
	plr[p]._pMagic = sVar2 + (short)l;
	iVar5 = l << 6;
	if (cVar1 == '\x02') {
		iVar5 = l << 7;
	}
	iVar4 = plr[p]._pMaxMana;
	plr[p]._pMaxManaBase = plr[p]._pMaxManaBase + iVar5;
	uVar3 = plr[p]._pIFlags;
	plr[p]._pMaxMana = iVar4 + iVar5;
	if ((uVar3 & 0x8000000) == 0) {
		iVar4 = plr[p]._pMana;
		plr[p]._pManaBase = plr[p]._pManaBase + iVar5;
		plr[p]._pMana = iVar4 + iVar5;
	}
	CalcPlrInv__FiUc(p,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ModifyPlrDex__Fii(int p /*$a0*/, int l /*$a1*/)
 // line 4462, offset 0x80065fa8
	/* begin block 1 */
		// Start line: 4463
		// Start offset: 0x80065FA8
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x80066078
	// End Line: 4473

	/* begin block 2 */
		// Start line: 9452
	/* end block 2 */
	// End Line: 9453

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ModifyPlrDex__Fii(int p,int l)

{
	short sVar1;
	short sVar2;
	
	sVar2 = (short)l;
	if ((&INT_800da440)[(int)plr[p]._pClass * 4] < (int)plr[p]._pBaseDex + l) {
		sVar2 = (short)(&INT_800da440)[(int)plr[p]._pClass * 4] - plr[p]._pBaseDex;
	}
	sVar1 = plr[p]._pBaseDex;
	plr[p]._pDexterity = plr[p]._pDexterity + sVar2;
	plr[p]._pBaseDex = sVar1 + sVar2;
	CalcPlrInv__FiUc(p,'\x01');
	if (plr[p]._pClass == '\x01') {
		plr[p]._pDamageMod =
				 (((int)plr[p]._pStrength + (int)plr[p]._pDexterity) * (int)plr[p]._pLevel) / 200;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ModifyPlrVit__Fii(int p /*$a3*/, int l /*$a1*/)
 // line 4480, offset 0x8006608c
	/* begin block 1 */
		// Start line: 4481
		// Start offset: 0x8006608C
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x80066158
	// End Line: 4495

	/* begin block 2 */
		// Start line: 9498
	/* end block 2 */
	// End Line: 9499

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ModifyPlrVit__Fii(int p,int l)

{
	char cVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*(int *)(&DAT_800da444 + (int)plr[p]._pClass * 0x10) < (int)plr[p]._pBaseVit + l) {
		l = *(int *)(&DAT_800da444 + (int)plr[p]._pClass * 0x10) - (int)plr[p]._pBaseVit;
	}
	sVar2 = plr[p]._pBaseVit;
	cVar1 = plr[p]._pClass;
	iVar5 = l << 6;
	plr[p]._pVitality = plr[p]._pVitality + (short)l;
	plr[p]._pBaseVit = sVar2 + (short)l;
	if (cVar1 == '\0') {
		iVar5 = l << 7;
	}
	iVar4 = plr[p]._pMaxHPBase;
	plr[p]._pHPBase = plr[p]._pHPBase + iVar5;
	iVar3 = plr[p]._pHitPoints;
	plr[p]._pMaxHPBase = iVar4 + iVar5;
	iVar4 = plr[p]._pMaxHP;
	plr[p]._pHitPoints = iVar3 + iVar5;
	plr[p]._pMaxHP = iVar4 + iVar5;
	CalcPlrInv__FiUc(p,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int newhp /*$a1*/)
 // line 4502, offset 0x80066168
	/* begin block 1 */
		// Start line: 4503
		// Start offset: 0x80066168
	/* end block 1 */
	// End offset: 0x8006619C
	// End Line: 4508

	/* begin block 2 */
		// Start line: 9560
	/* end block 2 */
	// End Line: 9561

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlayerHitPoints__FP12PlayerStructi(PlayerStruct *ptrplr,int newhp)

{
	void *pvVar1;
	
	ptrplr->_pHitPoints = newhp;
	ptrplr->_pHPBase = newhp - (ptrplr->_pMaxHP - ptrplr->_pMaxHPBase);
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar1 != (void *)0x0) {
		drawhpflag = '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrStr__Fii(int p /*$a0*/, int v /*$a1*/)
 // line 4514, offset 0x800661ac
	/* begin block 1 */
		// Start line: 4515
		// Start offset: 0x800661AC
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	/* end block 1 */
	// End offset: 0x80066274
	// End Line: 4524

	/* begin block 2 */
		// Start line: 9585
	/* end block 2 */
	// End Line: 9586

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrStr__Fii(int p,int v)

{
	plr[p]._pBaseStr = (short)v;
	CalcPlrInv__FiUc(p,'\x01');
	if (plr[p]._pClass == '\x01') {
		plr[p]._pDamageMod =
				 (((int)plr[p]._pStrength + (int)plr[p]._pDexterity) * (int)plr[p]._pLevel) / 200;
	}
	else {
		plr[p]._pDamageMod = ((int)plr[p]._pStrength * (int)plr[p]._pLevel) / 100;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrMag__Fii(int p /*$a0*/, int v /*$a1*/)
 // line 4530, offset 0x80066288
	/* begin block 1 */
		// Start line: 4531
		// Start offset: 0x80066288
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	/* end block 1 */
	// End offset: 0x800662E8
	// End Line: 4540

	/* begin block 2 */
		// Start line: 9623
	/* end block 2 */
	// End Line: 9624

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrMag__Fii(int p,int v)

{
	long lVar1;
	
	plr[p]._pBaseMag = (short)v;
	lVar1 = v << 6;
	if (plr[p]._pClass == '\x02') {
		lVar1 = v << 7;
	}
	plr[p]._pMaxManaBase = lVar1;
	plr[p]._pMaxMana = lVar1;
	CalcPlrInv__FiUc(p,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrDex__Fii(int p /*$a0*/, int v /*$a1*/)
 // line 4546, offset 0x800662f8
	/* begin block 1 */
		// Start line: 4547
		// Start offset: 0x800662F8
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	/* end block 1 */
	// End offset: 0x800663C0
	// End Line: 4556

	/* begin block 2 */
		// Start line: 9658
	/* end block 2 */
	// End Line: 9659

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrDex__Fii(int p,int v)

{
	plr[p]._pBaseDex = (short)v;
	CalcPlrInv__FiUc(p,'\x01');
	if (plr[p]._pClass == '\x01') {
		plr[p]._pDamageMod =
				 (((int)plr[p]._pStrength + (int)plr[p]._pDexterity) * (int)plr[p]._pLevel) / 200;
	}
	else {
		plr[p]._pDamageMod = ((int)plr[p]._pStrength * (int)plr[p]._pLevel) / 100;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrVit__Fii(int p /*$a0*/, int v /*$a1*/)
 // line 4562, offset 0x800663d4
	/* begin block 1 */
		// Start line: 4563
		// Start offset: 0x800663D4
		// Variables:
	// 		struct PlayerStruct *player; // $v1
	/* end block 1 */
	// End offset: 0x80066430
	// End Line: 4572

	/* begin block 2 */
		// Start line: 9696
	/* end block 2 */
	// End Line: 9697

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrVit__Fii(int p,int v)

{
	char cVar1;
	long lVar2;
	
	cVar1 = plr[p]._pClass;
	plr[p]._pBaseVit = (short)v;
	lVar2 = v << 6;
	if (cVar1 == '\0') {
		lVar2 = v << 7;
	}
	plr[p]._pHPBase = lVar2;
	plr[p]._pMaxHPBase = lVar2;
	CalcPlrInv__FiUc(p,'\x01');
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4578, offset 0x80066440
	/* begin block 1 */
		// Start line: 4579
		// Start offset: 0x80066440
	/* end block 1 */
	// End offset: 0x80066440
	// End Line: 4582

	/* begin block 2 */
		// Start line: 9736
	/* end block 2 */
	// End Line: 9737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDungMsgs__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->pDungMsgs = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayDungMsgs__Fv()
 // line 4588, offset 0x80066448
	/* begin block 1 */
		// Start line: 4589
		// Start offset: 0x80066448
		// Variables:
	// 		struct PlayerStruct *player; // $a0
	/* end block 1 */
	// End offset: 0x80066770
	// End Line: 4656

	/* begin block 2 */
		// Start line: 9756
	/* end block 2 */
	// End Line: 9757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlayDungMsgs__Fv(void)

{
	int iVar1;
	uint uVar2;
	
	if ((((currlevel != '\x01') || (plr[myplr]._pLvlVisited[1] != '\0')) ||
			((uint)gbMaxPlayers != (uint)currlevel)) || ((plr[myplr].pDungMsgs & 1) != 0)) {
		if (((currlevel != '\x05') || (plr[myplr]._pLvlVisited[5] != '\0')) ||
			 ((gbMaxPlayers != '\x01' || ((plr[myplr].pDungMsgs & 2) != 0)))) {
			if (((currlevel != '\t') || (plr[myplr]._pLvlVisited[9] != '\0')) ||
				 ((gbMaxPlayers != '\x01' || ((plr[myplr].pDungMsgs & 4) != 0)))) {
				if ((((currlevel != '\r') || (plr[myplr]._pLvlVisited[0xd] != '\0')) ||
						(gbMaxPlayers != '\x01')) || ((plr[myplr].pDungMsgs & 8) != 0)) {
					if (((currlevel == '\x10') && (plr[myplr]._pLvlVisited[0x10] == '\0')) &&
						 ((gbMaxPlayers == '\x01' && ((plr[myplr].pDungMsgs & 0x10) == 0)))) {
						sfxdelay = 0x28;
						uVar2 = SEXT14(plr[myplr]._pClass);
						if (((uVar2 == 0) || (uVar2 == (uint)gbMaxPlayers)) || (uVar2 == 2)) {
							sfxdnum = 0x348;
						}
						plr[myplr].pDungMsgs = plr[myplr].pDungMsgs | 0x10;
						return;
					}
					sfxdelay = 0;
					return;
				}
				sfxdelay = 0x28;
				uVar2 = SEXT14(plr[myplr]._pClass);
				iVar1 = 0x33a;
				if (uVar2 != 0) {
					if (uVar2 == (uint)gbMaxPlayers) {
						iVar1 = 0x2c7;
					}
					else {
						iVar1 = 0x25f;
						if (uVar2 != 2) goto LAB_800666c0;
					}
				}
				sfxdnum = iVar1;
LAB_800666c0:
				plr[myplr].pDungMsgs = plr[myplr].pDungMsgs | 8;
				return;
			}
			sfxdelay = 0x28;
			uVar2 = SEXT14(plr[myplr]._pClass);
			iVar1 = 0x339;
			if (uVar2 != 0) {
				if (uVar2 == (uint)gbMaxPlayers) {
					iVar1 = 0x2c6;
				}
				else {
					iVar1 = 0x25e;
					if (uVar2 != 2) goto LAB_80066634;
				}
			}
			sfxdnum = iVar1;
LAB_80066634:
			plr[myplr].pDungMsgs = plr[myplr].pDungMsgs | 4;
			return;
		}
		sfxdelay = 0x28;
		uVar2 = SEXT14(plr[myplr]._pClass);
		iVar1 = 0x337;
		if (uVar2 != 0) {
			if (uVar2 == (uint)gbMaxPlayers) {
				iVar1 = 0x2c4;
			}
			else {
				iVar1 = 0x25c;
				if (uVar2 != 2) goto LAB_80066598;
			}
		}
		sfxdnum = iVar1;
LAB_80066598:
		plr[myplr].pDungMsgs = plr[myplr].pDungMsgs | 2;
		return;
	}
	sfxdelay = 0x28;
	uVar2 = SEXT14(plr[myplr]._pClass);
	iVar1 = 0x338;
	if (uVar2 != 0) {
		if (uVar2 == (uint)gbMaxPlayers) {
			iVar1 = 0x2c5;
		}
		else {
			iVar1 = 0x25d;
			if (uVar2 != 2) goto LAB_80066508;
		}
	}
	sfxdnum = iVar1;
LAB_80066508:
	plr[myplr].pDungMsgs = plr[myplr].pDungMsgs | 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4658, offset 0x80066778
	/* begin block 1 */
		// Start line: 4659
		// Start offset: 0x80066778
	/* end block 1 */
	// End offset: 0x80066790
	// End Line: 4659

	/* begin block 2 */
		// Start line: 9893
	/* end block 2 */
	// End Line: 9894

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreatePlrItems__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int p;
	
	p = plrind__FP12PlayerStruct(ptrplr);
	CreatePlrItems__Fi(p);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$a0*/, int x /*$s0*/, int y /*$s1*/)
 // line 4659, offset 0x800667a0
	/* begin block 1 */
		// Start line: 4660
		// Start offset: 0x800667A0
	/* end block 1 */
	// End offset: 0x800667CC
	// End Line: 4660

	/* begin block 2 */
		// Start line: 9895
	/* end block 2 */
	// End Line: 9896

/* WARNING: Unknown calling convention yet parameter storage is locked */

void WorldToOffset__FP12PlayerStructii(PlayerStruct *ptrplr,int x,int y)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	WorldToOffset__Fiii(pnum,x,y);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int i /*$s0*/)
 // line 4660, offset 0x800667e4
	/* begin block 1 */
		// Start line: 4661
		// Start offset: 0x800667E4
	/* end block 1 */
	// End offset: 0x80066804
	// End Line: 4661

	/* begin block 2 */
		// Start line: 9897
	/* end block 2 */
	// End Line: 9898

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetSpdbarGoldCurs__FP12PlayerStructi(PlayerStruct *ptrplr,int i)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	SetSpdbarGoldCurs__Fii(pnum,i);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int val /*$s0*/)
 // line 4661, offset 0x80066818
	/* begin block 1 */
		// Start line: 4662
		// Start offset: 0x80066818
	/* end block 1 */
	// End offset: 0x80066838
	// End Line: 4662

	/* begin block 2 */
		// Start line: 9899
	/* end block 2 */
	// End Line: 9900

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetSpellLevel__FP12PlayerStructi(PlayerStruct *ptrplr,int val)

{
	int id;
	
	id = plrind__FP12PlayerStruct(ptrplr);
	id = GetSpellLevel__Fii(id,val);
	return id;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int val /*$s0*/)
 // line 4662, offset 0x8006684c
	/* begin block 1 */
		// Start line: 4663
		// Start offset: 0x8006684C
	/* end block 1 */
	// End offset: 0x8006686C
	// End Line: 4663

	/* begin block 2 */
		// Start line: 9901
	/* end block 2 */
	// End Line: 9902

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BreakObject__FP12PlayerStructi(PlayerStruct *ptrplr,int val)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	BreakObject__Fii(pnum,val);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr /*$a0*/, unsigned char bl /*$s0*/)
 // line 4663, offset 0x80066880
	/* begin block 1 */
		// Start line: 4664
		// Start offset: 0x80066880
	/* end block 1 */
	// End offset: 0x800668A0
	// End Line: 4664

	/* begin block 2 */
		// Start line: 9903
	/* end block 2 */
	// End Line: 9904

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPlrInv__FP12PlayerStructUc(PlayerStruct *ptrplr,uchar bl)

{
	int p;
	
	p = plrind__FP12PlayerStruct(ptrplr);
	CalcPlrInv__FiUc(p,bl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int val /*$s0*/)
 // line 4664, offset 0x800668b4
	/* begin block 1 */
		// Start line: 4665
		// Start offset: 0x800668B4
	/* end block 1 */
	// End offset: 0x800668D4
	// End Line: 4665

	/* begin block 2 */
		// Start line: 9905
	/* end block 2 */
	// End Line: 9906

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveSpdBarItem__FP12PlayerStructi(PlayerStruct *ptrplr,int val)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	RemoveSpdBarItem__Fii(pnum,val);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartKill__FiP12PlayerStruct(int m /*$s0*/, struct PlayerStruct *ptrplr /*$a1*/)
 // line 4665, offset 0x800668e8
	/* begin block 1 */
		// Start line: 4666
		// Start offset: 0x800668E8
	/* end block 1 */
	// End offset: 0x8006690C
	// End Line: 4666

	/* begin block 2 */
		// Start line: 9907
	/* end block 2 */
	// End Line: 9908

/* WARNING: Unknown calling convention yet parameter storage is locked */

void M_StartKill__FiP12PlayerStruct(int m,PlayerStruct *ptrplr)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	M_StartKill__Fii(m,pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int i /*$s0*/)
 // line 4666, offset 0x80066920
	/* begin block 1 */
		// Start line: 4667
		// Start offset: 0x80066920
	/* end block 1 */
	// End offset: 0x80066940
	// End Line: 4667

	/* begin block 2 */
		// Start line: 9909
	/* end block 2 */
	// End Line: 9910

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetGoldCurs__FP12PlayerStructi(PlayerStruct *ptrplr,int i)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	SetGoldCurs__Fii(pnum,i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4667, offset 0x80066954
	/* begin block 1 */
		// Start line: 4668
		// Start offset: 0x80066954
	/* end block 1 */
	// End offset: 0x8006696C
	// End Line: 4668

	/* begin block 2 */
		// Start line: 9911
	/* end block 2 */
	// End Line: 9912

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HealStart__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int plr;
	
	plr = plrind__FP12PlayerStruct(ptrplr);
	HealStart__Fi(plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4668, offset 0x8006697c
	/* begin block 1 */
		// Start line: 4669
		// Start offset: 0x8006697C
	/* end block 1 */
	// End offset: 0x80066994
	// End Line: 4669

	/* begin block 2 */
		// Start line: 9913
	/* end block 2 */
	// End Line: 9914

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HealotherStart__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int plr;
	
	plr = plrind__FP12PlayerStruct(ptrplr);
	HealotherStart__Fi(plr);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4669, offset 0x800669a4
	/* begin block 1 */
		// Start line: 4670
		// Start offset: 0x800669A4
	/* end block 1 */
	// End offset: 0x800669BC
	// End Line: 4670

	/* begin block 2 */
		// Start line: 9915
	/* end block 2 */
	// End Line: 9916

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CalculateGold__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int pnum;
	long lVar1;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	lVar1 = CalculateGold__Fi(pnum);
	return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ M_StartHit__FiP12PlayerStructi(int m /*$s0*/, struct PlayerStruct *ptrplr /*$a1*/, int dam /*$s1*/)
 // line 4670, offset 0x800669cc
	/* begin block 1 */
		// Start line: 4671
		// Start offset: 0x800669CC
	/* end block 1 */
	// End offset: 0x800669FC
	// End Line: 4671

	/* begin block 2 */
		// Start line: 9917
	/* end block 2 */
	// End Line: 9918

/* WARNING: Unknown calling convention yet parameter storage is locked */

void M_StartHit__FiP12PlayerStructi(int m,PlayerStruct *ptrplr,int dam)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	M_StartHit__Fiii(m,pnum,dam);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4671, offset 0x80066a14
	/* begin block 1 */
		// Start line: 4672
		// Start offset: 0x80066A14
	/* end block 1 */
	// End offset: 0x80066A2C
	// End Line: 4672

	/* begin block 2 */
		// Start line: 9919
	/* end block 2 */
	// End Line: 9920

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TeleStart__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int plr;
	
	plr = plrind__FP12PlayerStruct(ptrplr);
	TeleStart__Fi(plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4672, offset 0x80066a3c
	/* begin block 1 */
		// Start line: 4673
		// Start offset: 0x80066A3C
	/* end block 1 */
	// End offset: 0x80066A54
	// End Line: 4673

	/* begin block 2 */
		// Start line: 9921
	/* end block 2 */
	// End Line: 9922

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PhaseStart__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int plr;
	
	plr = plrind__FP12PlayerStruct(ptrplr);
	PhaseStart__Fi(plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int i /*$s0*/)
 // line 4673, offset 0x80066a64
	/* begin block 1 */
		// Start line: 4674
		// Start offset: 0x80066A64
	/* end block 1 */
	// End offset: 0x80066A84
	// End Line: 4674

	/* begin block 2 */
		// Start line: 9923
	/* end block 2 */
	// End Line: 9924

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RemoveInvItem__FP12PlayerStructi(PlayerStruct *ptrplr,int i)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	RemoveInvItem__Fii(pnum,i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4674, offset 0x80066a98
	/* begin block 1 */
		// Start line: 4675
		// Start offset: 0x80066A98
	/* end block 1 */
	// End offset: 0x80066AB0
	// End Line: 4675

	/* begin block 2 */
		// Start line: 9925
	/* end block 2 */
	// End Line: 9926

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PhaseEnd__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int plr;
	
	plr = plrind__FP12PlayerStruct(ptrplr);
	PhaseEnd__Fi(plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr /*$a0*/, int oi /*$s1*/, unsigned char bl /*$s0*/)
 // line 4675, offset 0x80066ac0
	/* begin block 1 */
		// Start line: 4676
		// Start offset: 0x80066AC0
	/* end block 1 */
	// End offset: 0x80066AEC
	// End Line: 4676

	/* begin block 2 */
		// Start line: 9927
	/* end block 2 */
	// End Line: 9928

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OperateObject__FP12PlayerStructiUc(PlayerStruct *ptrplr,int oi,uchar bl)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	OperateObject__FiiUc(pnum,oi,bl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int oi /*$s0*/)
 // line 4676, offset 0x80066b04
	/* begin block 1 */
		// Start line: 4677
		// Start offset: 0x80066B04
	/* end block 1 */
	// End offset: 0x80066B24
	// End Line: 4677

	/* begin block 2 */
		// Start line: 9929
	/* end block 2 */
	// End Line: 9930

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TryDisarm__FP12PlayerStructi(PlayerStruct *ptrplr,int oi)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	TryDisarm__Fii(pnum,oi);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$a0*/, int val /*$s0*/)
 // line 4677, offset 0x80066b38
	/* begin block 1 */
		// Start line: 4678
		// Start offset: 0x80066B38
	/* end block 1 */
	// End offset: 0x80066B58
	// End Line: 4678

	/* begin block 2 */
		// Start line: 9931
	/* end block 2 */
	// End Line: 9932

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TalkToTowner__FP12PlayerStructi(PlayerStruct *ptrplr,int val)

{
	int p;
	
	p = plrind__FP12PlayerStruct(ptrplr);
	TalkToTowner__Fii(p,val);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkPlayer__Fiii(int pnum /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 4679, offset 0x80066b6c
	/* begin block 1 */
		// Start line: 4680
		// Start offset: 0x80066B6C
	/* end block 1 */
	// End offset: 0x80066BA8
	// End Line: 4680

	/* begin block 2 */
		// Start line: 9935
	/* end block 2 */
	// End Line: 9936

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar PosOkPlayer__Fiii(int pnum,int x,int y)

{
	uchar uVar1;
	
	uVar1 = PosOkPlayer__FP12PlayerStructii(plr + pnum,x,y);
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcStatDiff__Fi(int pnum /*$a0*/)
 // line 4680, offset 0x80066bb8
	/* begin block 1 */
		// Start line: 4681
		// Start offset: 0x80066BB8
	/* end block 1 */
	// End offset: 0x80066BF4
	// End Line: 4681

	/* begin block 2 */
		// Start line: 9937
	/* end block 2 */
	// End Line: 9938

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CalcStatDiff__Fi(int pnum)

{
	int iVar1;
	
	iVar1 = CalcStatDiff__FP12PlayerStruct(plr + pnum);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartNewLvl__Fiii(int pnum /*$a0*/, int fom /*$a1*/, int lvl /*$a2*/)
 // line 4681, offset 0x80066c04
	/* begin block 1 */
		// Start line: 4682
		// Start offset: 0x80066C04
	/* end block 1 */
	// End offset: 0x80066C40
	// End Line: 4682

	/* begin block 2 */
		// Start line: 9939
	/* end block 2 */
	// End Line: 9940

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartNewLvl__Fiii(int pnum,int fom,int lvl)

{
	StartNewLvl__FP12PlayerStructii(plr + pnum,fom,lvl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlayer__Fic(int pnum /*$a0*/, char c /*$a1*/)
 // line 4682, offset 0x80066c50
	/* begin block 1 */
		// Start line: 4683
		// Start offset: 0x80066C50
	/* end block 1 */
	// End offset: 0x80066C94
	// End Line: 4683

	/* begin block 2 */
		// Start line: 9941
	/* end block 2 */
	// End Line: 9942

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CreatePlayer__Fic(int pnum,char c)

{
	CreatePlayer__FP12PlayerStructc(plr + pnum,c);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartStand__Fii(int pnum /*$a0*/, int dir /*$a1*/)
 // line 4683, offset 0x80066ca4
	/* begin block 1 */
		// Start line: 4684
		// Start offset: 0x80066CA4
	/* end block 1 */
	// End offset: 0x80066CE0
	// End Line: 4684

	/* begin block 2 */
		// Start line: 9943
	/* end block 2 */
	// End Line: 9944

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartStand__Fii(int pnum,int dir)

{
	StartStand__FP12PlayerStructi(plr + pnum,dir);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerHitPoints__Fii(int pnum /*$a0*/, int val /*$a1*/)
 // line 4684, offset 0x80066cf0
	/* begin block 1 */
		// Start line: 4685
		// Start offset: 0x80066CF0
	/* end block 1 */
	// End offset: 0x80066D2C
	// End Line: 4685

	/* begin block 2 */
		// Start line: 9945
	/* end block 2 */
	// End Line: 9946

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlayerHitPoints__Fii(int pnum,int val)

{
	SetPlayerHitPoints__FP12PlayerStructi(plr + pnum,val);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePlrPath__FiiiUc(int pnum /*$a0*/, int xx /*$a1*/, int yy /*$a2*/, unsigned char endspace /*$a3*/)
 // line 4685, offset 0x80066d3c
	/* begin block 1 */
		// Start line: 4686
		// Start offset: 0x80066D3C
	/* end block 1 */
	// End offset: 0x80066D7C
	// End Line: 4686

	/* begin block 2 */
		// Start line: 9947
	/* end block 2 */
	// End Line: 9948

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MakePlrPath__FiiiUc(int pnum,int xx,int yy,uchar endspace)

{
	MakePlrPath__FP12PlayerStructiiUc(plr + pnum,xx,yy,endspace);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartWarpLvl__Fii(int pnum /*$a0*/, int pidx /*$a1*/)
 // line 4686, offset 0x80066d8c
	/* begin block 1 */
		// Start line: 4687
		// Start offset: 0x80066D8C
	/* end block 1 */
	// End offset: 0x80066DC8
	// End Line: 4687

	/* begin block 2 */
		// Start line: 9949
	/* end block 2 */
	// End Line: 9950

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartWarpLvl__Fii(int pnum,int pidx)

{
	StartWarpLvl__FP12PlayerStructi(plr + pnum,pidx);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncPlrKill__Fii(int pnum /*$a0*/, int earflag /*$a1*/)
 // line 4687, offset 0x80066dd8
	/* begin block 1 */
		// Start line: 4688
		// Start offset: 0x80066DD8
	/* end block 1 */
	// End offset: 0x80066E14
	// End Line: 4688

	/* begin block 2 */
		// Start line: 9951
	/* end block 2 */
	// End Line: 9952

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncPlrKill__Fii(int pnum,int earflag)

{
	SyncPlrKill__FP12PlayerStructi(plr + pnum,earflag);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrKill__Fii(int pnum /*$a0*/, int val /*$a1*/)
 // line 4688, offset 0x80066e24
	/* begin block 1 */
		// Start line: 4689
		// Start offset: 0x80066E24
	/* end block 1 */
	// End offset: 0x80066E60
	// End Line: 4689

	/* begin block 2 */
		// Start line: 9953
	/* end block 2 */
	// End Line: 9954

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlrKill__Fii(int pnum,int val)

{
	StartPlrKill__FP12PlayerStructi(plr + pnum,val);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewPlrAnim__Fiiii(int pnum /*$a0*/, int Peq /*$a1*/, int numFrames /*$a2*/, int Delay /*$a3*/)
 // line 4689, offset 0x80066e70
	/* begin block 1 */
		// Start line: 4690
		// Start offset: 0x80066E70
	/* end block 1 */
	// End offset: 0x80066EAC
	// End Line: 4690

	/* begin block 2 */
		// Start line: 9955
	/* end block 2 */
	// End Line: 9956

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NewPlrAnim__Fiiii(int pnum,int Peq,int numFrames,int Delay)

{
	NewPlrAnim__FP12PlayerStructiii(plr + pnum,Peq,numFrames,Delay);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPlrExperience__Fiil(int pnum /*$a0*/, int lvl /*$a1*/, long exp /*$a2*/)
 // line 4690, offset 0x80066ebc
	/* begin block 1 */
		// Start line: 4691
		// Start offset: 0x80066EBC
	/* end block 1 */
	// End offset: 0x80066EF8
	// End Line: 4691

	/* begin block 2 */
		// Start line: 9957
	/* end block 2 */
	// End Line: 9958

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AddPlrExperience__Fiil(int pnum,int lvl,long exp)

{
	AddPlrExperience__FP12PlayerStructil(plr + pnum,lvl,exp);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrBlock__Fii(int pnum /*$a0*/, int dir /*$a1*/)
 // line 4691, offset 0x80066f08
	/* begin block 1 */
		// Start line: 4692
		// Start offset: 0x80066F08
	/* end block 1 */
	// End offset: 0x80066F44
	// End Line: 4692

	/* begin block 2 */
		// Start line: 9959
	/* end block 2 */
	// End Line: 9960

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlrBlock__Fii(int pnum,int dir)

{
	StartPlrBlock__FP12PlayerStructi(plr + pnum,dir);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrHit__FiiUc(int pnum /*$a0*/, int dam /*$a1*/, unsigned char forcehit /*$a2*/)
 // line 4692, offset 0x80066f54
	/* begin block 1 */
		// Start line: 4693
		// Start offset: 0x80066F54
	/* end block 1 */
	// End offset: 0x80066F94
	// End Line: 4693

	/* begin block 2 */
		// Start line: 9961
	/* end block 2 */
	// End Line: 9962

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartPlrHit__FiiUc(int pnum,int dam,uchar forcehit)

{
	StartPlrHit__FP12PlayerStructiUc(plr + pnum,dam,forcehit);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartSpell__Fiiii(int pnum /*$a0*/, int d /*$a1*/, int cx /*$a2*/, int cy /*$a3*/)
 // line 4693, offset 0x80066fa4
	/* begin block 1 */
		// Start line: 4694
		// Start offset: 0x80066FA4
	/* end block 1 */
	// End offset: 0x80066FE0
	// End Line: 4694

	/* begin block 2 */
		// Start line: 9963
	/* end block 2 */
	// End Line: 9964

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartSpell__Fiiii(int pnum,int d,int cx,int cy)

{
	StartSpell__FP12PlayerStructiii(plr + pnum,d,cx,cy);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayer__FiUc(int pnum /*$a0*/, unsigned char FirstTime /*$a1*/)
 // line 4695, offset 0x80066ff0
	/* begin block 1 */
		// Start line: 4696
		// Start offset: 0x80066FF0
	/* end block 1 */
	// End offset: 0x80067030
	// End Line: 4696

	/* begin block 2 */
		// Start line: 9967
	/* end block 2 */
	// End Line: 9968

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPlayer__FiUc(int pnum,uchar FirstTime)

{
	InitPlayer__FP12PlayerStructUc(plr + pnum,FirstTime);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PM_ChangeLightOff__Fi(int pnum /*$a0*/)
 // line 4697, offset 0x80067040
	/* begin block 1 */
		// Start line: 4698
		// Start offset: 0x80067040
	/* end block 1 */
	// End offset: 0x8006707C
	// End Line: 4698

	/* begin block 2 */
		// Start line: 9971
	/* end block 2 */
	// End Line: 9972

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PM_ChangeLightOff__Fi(int pnum)

{
	PM_ChangeLightOff__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckNewPath__Fi(int pnum /*$a0*/)
 // line 4698, offset 0x8006708c
	/* begin block 1 */
		// Start line: 4699
		// Start offset: 0x8006708C
	/* end block 1 */
	// End offset: 0x800670C8
	// End Line: 4699

	/* begin block 2 */
		// Start line: 9973
	/* end block 2 */
	// End Line: 9974

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckNewPath__Fi(int pnum)

{
	CheckNewPath__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreePlayerGFX__Fi(int pnum /*$a0*/)
 // line 4699, offset 0x800670d8
	/* begin block 1 */
		// Start line: 4700
		// Start offset: 0x800670D8
	/* end block 1 */
	// End offset: 0x80067114
	// End Line: 4700

	/* begin block 2 */
		// Start line: 9975
	/* end block 2 */
	// End Line: 9976

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreePlayerGFX__Fi(int pnum)

{
	FreePlayerGFX__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDungMsgs__Fi(int pnum /*$a0*/)
 // line 4700, offset 0x80067124
	/* begin block 1 */
		// Start line: 4701
		// Start offset: 0x80067124
	/* end block 1 */
	// End offset: 0x80067160
	// End Line: 4701

	/* begin block 2 */
		// Start line: 9977
	/* end block 2 */
	// End Line: 9978

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitDungMsgs__Fi(int pnum)

{
	InitDungMsgs__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayerGFX__Fi(int pnum /*$a0*/)
 // line 4701, offset 0x80067170
	/* begin block 1 */
		// Start line: 4702
		// Start offset: 0x80067170
	/* end block 1 */
	// End offset: 0x800671AC
	// End Line: 4702

	/* begin block 2 */
		// Start line: 9979
	/* end block 2 */
	// End Line: 9980

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPlayerGFX__Fi(int pnum)

{
	InitPlayerGFX__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlrPos__Fi(int pnum /*$a0*/)
 // line 4702, offset 0x800671bc
	/* begin block 1 */
		// Start line: 4703
		// Start offset: 0x800671BC
	/* end block 1 */
	// End offset: 0x800671F8
	// End Line: 4703

	/* begin block 2 */
		// Start line: 9981
	/* end block 2 */
	// End Line: 9982

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncInitPlrPos__Fi(int pnum)

{
	SyncInitPlrPos__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrAnims__Fi(int pnum /*$a0*/)
 // line 4703, offset 0x80067208
	/* begin block 1 */
		// Start line: 4704
		// Start offset: 0x80067208
	/* end block 1 */
	// End offset: 0x80067244
	// End Line: 4704

	/* begin block 2 */
		// Start line: 9983
	/* end block 2 */
	// End Line: 9984

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlrAnims__Fi(int pnum)

{
	SetPlrAnims__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrPlrPath__Fi(int pnum /*$a0*/)
 // line 4704, offset 0x80067254
	/* begin block 1 */
		// Start line: 4705
		// Start offset: 0x80067254
	/* end block 1 */
	// End offset: 0x80067290
	// End Line: 4705

	/* begin block 2 */
		// Start line: 9985
	/* end block 2 */
	// End Line: 9986

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClrPlrPath__Fi(int pnum)

{
	ClrPlrPath__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlr__Fi(int pnum /*$a0*/)
 // line 4705, offset 0x800672a0
	/* begin block 1 */
		// Start line: 4706
		// Start offset: 0x800672A0
	/* end block 1 */
	// End offset: 0x800672DC
	// End Line: 4706

	/* begin block 2 */
		// Start line: 9987
	/* end block 2 */
	// End Line: 9988

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SyncInitPlr__Fi(int pnum)

{
	SyncInitPlr__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestartTownLvl__Fi(int pnum /*$a0*/)
 // line 4706, offset 0x800672ec
	/* begin block 1 */
		// Start line: 4707
		// Start offset: 0x800672EC
	/* end block 1 */
	// End offset: 0x80067328
	// End Line: 4707

	/* begin block 2 */
		// Start line: 9989
	/* end block 2 */
	// End Line: 9990

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RestartTownLvl__Fi(int pnum)

{
	RestartTownLvl__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerOld__Fi(int pnum /*$a0*/)
 // line 4707, offset 0x80067338
	/* begin block 1 */
		// Start line: 4708
		// Start offset: 0x80067338
	/* end block 1 */
	// End offset: 0x80067374
	// End Line: 4708

	/* begin block 2 */
		// Start line: 9991
	/* end block 2 */
	// End Line: 9992

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetPlayerOld__Fi(int pnum)

{
	SetPlayerOld__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr /*$a0*/, struct ItemStruct *h /*$s0*/)
 // line 4715, offset 0x80067384
	/* begin block 1 */
		// Start line: 4716
		// Start offset: 0x80067384
	/* end block 1 */
	// End offset: 0x800673A4
	// End Line: 4717

	/* begin block 2 */
		// Start line: 10007
	/* end block 2 */
	// End Line: 10008

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetGoldSeed__FP12PlayerStructP10ItemStruct(PlayerStruct *ptrplr,ItemStruct *h)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	GetGoldSeed__FiP10ItemStruct(pnum,h);
	return;
}





