#include "THISDUST.H"
#include "PLAYER.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 270, offset 0x80058c14
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x80058C14
	/* end block 1 */
	// End offset: 0x80058C50
	// End Line: 272

	/* begin block 2 */
		// Start line: 541
	/* end block 2 */
	// End Line: 542

void * ismyplr__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return (void *)(uint)(plr + myplr == ptrplr);
}



// decompiled code
// original method signature: 
// int /*$ra*/ plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 275, offset 0x80058c58
	/* begin block 1 */
		// Start line: 276
		// Start offset: 0x80058C58
	/* end block 1 */
	// End offset: 0x80058C64
	// End Line: 277

	/* begin block 2 */
		// Start line: 551
	/* end block 2 */
	// End Line: 552

int plrind__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return (uint)(ptrplr != plr);
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 412, offset 0x80058c6c
	/* begin block 1 */
		// Start line: 413
		// Start offset: 0x80058C6C
	/* end block 1 */
	// End offset: 0x80058C84
	// End Line: 419

	/* begin block 2 */
		// Start line: 827
	/* end block 2 */
	// End Line: 828

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
 // line 528, offset 0x80058c8c
	/* begin block 1 */
		// Start line: 529
		// Start offset: 0x80058C8C
	/* end block 1 */
	// End offset: 0x80058C8C
	// End Line: 548

	/* begin block 2 */
		// Start line: 1075
	/* end block 2 */
	// End Line: 1076

void FreePlayerGFX__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_pGFXLoad = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr /*$a0*/, int Peq /*$a1*/, int numFrames /*$a2*/, int Delay /*$a3*/)
 // line 554, offset 0x80058c94
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x80058C94
	/* end block 1 */
	// End offset: 0x80058CA8
	// End Line: 566

	/* begin block 2 */
		// Start line: 1117
	/* end block 2 */
	// End Line: 1118

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
 // line 574, offset 0x80058cb0
	/* begin block 1 */
		// Start line: 575
		// Start offset: 0x80058CB0
	/* end block 1 */
	// End offset: 0x80058CCC
	// End Line: 586

	/* begin block 2 */
		// Start line: 1155
	/* end block 2 */
	// End Line: 1156

void ClearPlrPVars__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_pVar1 = 0;
	ptrplr->_pVar2 = 0;
	ptrplr->_pVar3 = 0;
	ptrplr->_pVar4 = 0;
	ptrplr->_pVar5 = 0;
	ptrplr->_pVar6 = 0;
	ptrplr->_pVar7 = 0;
	ptrplr->_pVar8 = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 591, offset 0x80058cd4
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x80058CD4
		// Variables:
	// 		int gn; // $v1
	// 		int pc; // $a1
	/* end block 1 */
	// End offset: 0x80058F08
	// End Line: 673

	/* begin block 2 */
		// Start line: 1202
	/* end block 2 */
	// End Line: 1203

void SetPlrAnims__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	byte bVar2;
	int iVar3;
	
	iVar3 = (int)ptrplr->_pClass;
	if (leveltype == '\0') {
		iVar1 = iVar3 * 0xb;
		ptrplr->_pNFrames = (int)(char)(&DAT_800de9a3)[iVar1];
		ptrplr->_pWFrames = (int)(char)(&DAT_800de9a4)[iVar1];
		ptrplr->_pDFrames = (int)(char)(&DAT_800de9a0)[iVar1];
		ptrplr->_pSFrames = (int)(char)(&DAT_800de9a1)[iVar1];
	}
	else {
		iVar1 = iVar3 * 0xb;
		ptrplr->_pNFrames = (int)(&PlrGFXAnimLens)[iVar1];
		ptrplr->_pWFrames = (int)(&CHAR_08h_800de99e)[iVar1];
		ptrplr->_pAFrames = (int)(&CHAR_10h_800de99d)[iVar1];
		ptrplr->_pHFrames = (int)(char)(&DAT_800de9a2)[iVar1];
		ptrplr->_pSFrames = (int)(char)(&DAT_800de9a1)[iVar1];
		ptrplr->_pDFrames = (int)(char)(&DAT_800de9a0)[iVar1];
		ptrplr->_pBFrames = (int)(char)(&DAT_800de99f)[iVar1];
		ptrplr->_pAFNum = (int)(char)(&DAT_800de9a5)[iVar1];
	}
	ptrplr->_pSFNum = (int)(char)(&DAT_800de9a6)[iVar3 * 0xb];
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
 // line 719, offset 0x80058f10
	/* begin block 1 */
		// Start line: 720
		// Start offset: 0x80058F10
		// Variables:
	// 		int i; // $v0
	// 		char vc; // $v1
	/* end block 1 */
	// End offset: 0x80059310
	// End Line: 837

	/* begin block 2 */
		// Start line: 1442
	/* end block 2 */
	// End Line: 1443

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
	lVar1 = LONG_800dea30;
	ptrplr->_pArmorClass = '\0';
	ptrplr->_pMagResist = '\0';
	ptrplr->_pFireResist = '\0';
	ptrplr->_pLghtResist = '\0';
	ptrplr->_pLightRad = '\x04';
	ptrplr->_pInfraFlag = '\0';
	ptrplr->_pNextExper = lVar1;
	if (iVar6 == 0) {
		uVar3 = 0x2000000;
LAB_800591f4:
		*(undefined4 *)&ptrplr->_pAblSpells = uVar3;
		*(undefined4 *)((int)&ptrplr->_pAblSpells + 4) = 0;
		if (c != '\x02') goto LAB_80059228;
		*(undefined4 *)&ptrplr->_pMemSpells = 1;
		*(undefined4 *)((int)&ptrplr->_pMemSpells + 4) = 0;
	}
	else {
		if (iVar6 == 1) {
			uVar3 = 0x8000000;
			goto LAB_800591f4;
		}
		if (iVar6 == 2) {
			uVar3 = 0x4000000;
			goto LAB_800591f4;
		}
LAB_80059228:
		*(undefined4 *)&ptrplr->_pMemSpells = 0;
		*(undefined4 *)((int)&ptrplr->_pMemSpells + 4) = 0;
	}
	iVar7 = 0x3f;
	iVar6 = (int)&ptrplr->_pownery + 1;
	do {
		*(undefined *)(iVar6 + 0x7d) = 0;
		iVar7 = iVar7 + -1;
		iVar6 = iVar6 + -1;
	} while (-1 < iVar7);
	ptrplr->_pSpellFlags = '\0';
	if (ptrplr->_pClass == '\x02') {
		ptrplr->_pSplLvl[1] = '\x02';
	}
	iVar7 = 2;
	pcVar5 = ptrplr->walkpath + 4;
	do {
		*(undefined4 *)(pcVar5 + 0xdc) = 0xffffffff;
		iVar7 = iVar7 + -1;
		pcVar5 = pcVar5 + -4;
	} while (-1 < iVar7);
	if (c == '\0') {
		cVar2 = '\x03';
	}
	else {
		if (c == '\x01') {
			cVar2 = '\x04';
		}
		else {
			if (c != '\x02') goto LAB_800592c0;
			cVar2 = '\b';
		}
	}
	ptrplr->_pgfxnum = cVar2;
LAB_800592c0:
	iVar7 = 0x10;
	pcVar5 = ptrplr->walkpath + 0xc;
	do {
		pcVar5[0x18a] = '\0';
		iVar7 = iVar7 + -1;
		pcVar5 = pcVar5 + -1;
	} while (-1 < iVar7);
	iVar7 = 9;
	pcVar5 = ptrplr->walkpath + 5;
	do {
		pcVar5[0x19b] = '\0';
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
 // line 843, offset 0x8005932c
	/* begin block 1 */
		// Start line: 844
		// Start offset: 0x8005932C
		// Variables:
	// 		int c; // $a2
	// 		int d; // $v1
	/* end block 1 */
	// End offset: 0x8005938C
	// End Line: 850

	/* begin block 2 */
		// Start line: 1754
	/* end block 2 */
	// End Line: 1755

int CalcStatDiff__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	
	iVar1 = (int)ptrplr->_pClass;
	return ((&MaxStats)[iVar1 * 4] - (int)ptrplr->_pBaseStr) +
				 ((&INT_800dea00)[iVar1 * 4] - (int)ptrplr->_pBaseMag) +
				 ((&INT_800dea04)[iVar1 * 4] - (int)ptrplr->_pBaseDex) +
				 (*(int *)(&DAT_800dea08 + iVar1 * 0x10) - (int)ptrplr->_pBaseVit);
}



// decompiled code
// original method signature: 
// void /*$ra*/ NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 855, offset 0x80059394
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x80059394
		// Variables:
	// 		long l; // $a1
	/* end block 1 */
	// End offset: 0x800594EC
	// End Line: 892

	/* begin block 2 */
		// Start line: 1780
	/* end block 2 */
	// End Line: 1781

void NextPlrLevel__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	int iVar2;
	void *pvVar3;
	
	ptrplr->_pLevel = ptrplr->_pLevel + '\x01';
	ptrplr->_pMaxLvl = ptrplr->_pMaxLvl + '\x01';
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
 // line 898, offset 0x80059504
	/* begin block 1 */
		// Start line: 899
		// Start offset: 0x80059504
		// Variables:
	// 		int omp; // $s3
	// 		long v; // $-1
	// 		long e; // $a2

		/* begin block 1.1 */
			// Start line: 930
			// Start offset: 0x80059584

			/* begin block 1.1.1 */
				// Start line: 930
				// Start offset: 0x8005959C
				// Variables:
			// 		long lLevel; // $a0
			// 		long lMax; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80059618
			// End Line: 936
		/* end block 1.1 */
		// End offset: 0x80059618
		// End Line: 936

		/* begin block 1.2 */
			// Start line: 943
			// Start offset: 0x8005963C

			/* begin block 1.2.1 */
				// Start line: 946
				// Start offset: 0x80059664
				// Variables:
			// 		int l; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 951
					// Start offset: 0x8005969C

					/* begin block 1.2.1.1.1 */
						// Start line: 951
						// Start offset: 0x800596AC

						/* begin block 1.2.1.1.1.1 */
							// Start line: 951
							// Start offset: 0x800596AC
							// Variables:
						// 		int i; // $s0
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800596D0
						// End Line: 955
					/* end block 1.2.1.1.1 */
					// End offset: 0x800596D0
					// End Line: 955
				/* end block 1.2.1.1 */
				// End offset: 0x800596D0
				// End Line: 955
			/* end block 1.2.1 */
			// End offset: 0x800596EC
			// End Line: 958
		/* end block 1.2 */
		// End offset: 0x800596EC
		// End Line: 958
	/* end block 1 */
	// End offset: 0x800596F0
	// End Line: 961

	/* begin block 2 */
		// Start line: 1878
	/* end block 2 */
	// End Line: 1879

void AddPlrExperience__FP12PlayerStructil(PlayerStruct *ptrplr,int lvl,long exp)

{
	int iVar1;
	char cVar2;
	int iVar3;
	uint uVar4;
	long *plVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = myplr;
	myplr = ZEXT14(ptrplr != plr);
	if (0 < ptrplr->_pHitPoints) {
		cVar2 = ptrplr->_pLevel;
		iVar7 = (((lvl - (int)cVar2) * 0x100) / 10 + 0x100) * exp >> 8;
		if (iVar7 < 0) {
			iVar7 = 0;
		}
		if (1 < gbMaxPlayers) {
			if ((int)cVar2 < 0) {
				cVar2 = '\0';
			}
			iVar6 = (int)cVar2;
			iVar3 = iVar6 << 2;
			if (0x32 < iVar6) {
				iVar6 = 0x32;
				iVar3 = 200;
			}
			iVar3 = *(int *)((int)&ExpLvlsTbl + iVar3) / 0x14;
			if (iVar3 < iVar7) {
				iVar7 = iVar3;
			}
			if (iVar6 * 200 < iVar7) {
				iVar7 = iVar6 * 200;
			}
		}
		uVar4 = ptrplr->_pExperience + iVar7;
		ptrplr->_pExperience = uVar4;
		if (2000000000 < uVar4) {
			ptrplr->_pExperience = 2000000000;
		}
		iVar7 = ptrplr->_pExperience;
		if (iVar7 < LONG_800deaf0) {
			iVar3 = 0;
			if (ExpLvlsTbl <= iVar7) {
				plVar5 = &ExpLvlsTbl;
				do {
					plVar5 = plVar5 + 1;
					iVar3 = iVar3 + 1;
				} while (*plVar5 <= iVar7);
			}
			if (iVar3 != (int)ptrplr->_pLevel) {
				iVar3 = iVar3 - (int)ptrplr->_pLevel;
				iVar7 = 0;
				if (0 < iVar3) {
					do {
						NextPlrLevel__FP12PlayerStruct(ptrplr);
						iVar7 = iVar7 + 1;
					} while (iVar7 < iVar3);
				}
			}
			NetSendCmdParam1__FUcUcUs('\0','3',(short)ptrplr->_pLevel);
			myplr = iVar1;
		}
		else {
			ptrplr->_pLevel = '2';
			myplr = iVar1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPlrMonstExper__Filc(int lvl /*$t0*/, long exp /*$a1*/, char pmask /*$a3*/)
 // line 967, offset 0x80059710
	/* begin block 1 */
		// Start line: 968
		// Start offset: 0x80059710
		// Variables:
	// 		int totplrs; // $v1

		/* begin block 1.1 */
			// Start line: 968
			// Start offset: 0x80059710
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x80059754
		// End Line: 973

		/* begin block 1.2 */
			// Start line: 973
			// Start offset: 0x80059754

			/* begin block 1.2.1 */
				// Start line: 973
				// Start offset: 0x8005975C
			/* end block 1.2.1 */
			// End offset: 0x80059784
			// End Line: 975
		/* end block 1.2 */
		// End offset: 0x80059784
		// End Line: 975
	/* end block 1 */
	// End offset: 0x80059784
	// End Line: 975

	/* begin block 2 */
		// Start line: 2032
	/* end block 2 */
	// End Line: 2033

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
 // line 983, offset 0x80059794
	/* begin block 1 */
		// Start line: 984
		// Start offset: 0x80059794

		/* begin block 1.1 */
			// Start line: 1021
			// Start offset: 0x80059808

			/* begin block 1.1.1 */
				// Start line: 1021
				// Start offset: 0x80059834

				/* begin block 1.1.1.1 */
					// Start line: 1041
					// Start offset: 0x800598DC

					/* begin block 1.1.1.1.1 */
						// Start line: 1062
						// Start offset: 0x80059928
						// Variables:
					// 		int i; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800599B4
					// End Line: 1078
				/* end block 1.1.1.1 */
				// End offset: 0x800599B4
				// End Line: 1078
			/* end block 1.1.1 */
			// End offset: 0x80059A98
			// End Line: 1109
		/* end block 1.1 */
		// End offset: 0x80059A98
		// End Line: 1109
	/* end block 1 */
	// End offset: 0x80059B38
	// End Line: 1154

	/* begin block 2 */
		// Start line: 2065
	/* end block 2 */
	// End Line: 2066

void InitPlayer__FP12PlayerStructUc(PlayerStruct *ptrplr,uchar FirstTime)

{
	char cVar1;
	short sVar2;
	short sVar3;
	uchar uVar4;
	long lVar5;
	void *pvVar6;
	undefined4 uVar7;
	int iVar8;
	int r;
	int *piVar9;
	int *piVar10;
	
	if (FirstTime != '\0') {
		ptrplr->_pRSplType = '\x04';
		ptrplr->_pRSpell = -1;
		ptrplr->_pSBkSpell = -1;
		ptrplr->_pSpell = (char)ptrplr->_pRSpell;
		ptrplr->_pSplType = ptrplr->_pRSplType;
		if ((ptrplr->_pgfxnum & 0xfU) == 4) {
			ptrplr->_pwtype = 1;
		}
		else {
			ptrplr->_pwtype = 0;
		}
	}
	if ((ptrplr->plrlevel == (uint)currlevel) || (leveldebug != '\0')) {
		SetPlrAnims__FP12PlayerStruct(ptrplr);
		ptrplr->_pxoff = '\0';
		ptrplr->_pyoff = '\0';
		ptrplr->_pxvel = 0;
		ptrplr->_pyvel = 0;
		ClearPlrPVars__FP12PlayerStruct(ptrplr);
		if (ptrplr->_pHitPoints >> 6 < 1) {
			ptrplr->_pmode = 8;
			NewPlrAnim__FP12PlayerStructiii(ptrplr,1,ptrplr->_pDFrames,1);
			ptrplr->_pAnimFrame = ptrplr->_pAnimLen + -1;
			ptrplr->_pVar8 = (short)(ptrplr->_pAnimLen << 1);
		}
		else {
			ptrplr->_pmode = 0;
			NewPlrAnim__FP12PlayerStructiii(ptrplr,0,ptrplr->_pNFrames,3);
			lVar5 = random__Fil(2,ptrplr->_pNFrames + -1);
			ptrplr->_pAnimFrame = lVar5 + 1;
			lVar5 = random__Fil(2,3);
			ptrplr->_pAnimCnt = lVar5;
		}
		ptrplr->_pdir = '\0';
		pvVar6 = ismyplr__FP12PlayerStruct(ptrplr);
		r = ViewY;
		if (pvVar6 == (void *)0x0) {
			r = 0;
			piVar10 = &plryoff2;
			piVar9 = &plrxoff2;
			do {
				uVar4 = PosOkPlayer__FP12PlayerStructii
													(ptrplr,(int)ptrplr->_px + *piVar9,(int)ptrplr->_py + *piVar10);
				iVar8 = r << 2;
				if (uVar4 != '\0') goto LAB_80059988;
				piVar10 = piVar10 + 1;
				r = r + 1;
				piVar9 = piVar9 + 1;
			} while (r < 8);
			iVar8 = r * 4;
LAB_80059988:
			ptrplr->_px = ptrplr->_px + (short)*(undefined4 *)((int)&plrxoff2 + iVar8);
			ptrplr->_py = ptrplr->_py + (short)*(undefined4 *)((int)&plryoff2 + iVar8);
		}
		else {
			if ((FirstTime == '\0') || (currlevel != '\0')) {
				ptrplr->_px = (short)ViewX;
				ptrplr->_py = (short)r;
			}
		}
		ptrplr->walkpath[0] = -1;
		ptrplr->destAction = -1;
		WorldToOffset__FP12PlayerStructii(ptrplr,(int)ptrplr->_px << 3 | 4,(int)ptrplr->_py << 3 | 4);
		light_rad = light_level[(uint)leveltype] + ptrplr->_pLightRad;
		if ('\x0f' < light_rad) {
			light_rad = '\x0f';
		}
		light_fix__Fi((int)ptrplr->_plid);
		if (leveltype == '\0') {
			sVar2 = ptrplr->_px;
			sVar3 = ptrplr->_py;
			r = (int)light_rad + 0x21f0;
		}
		else {
			sVar2 = ptrplr->_px;
			sVar3 = ptrplr->_py;
			r = (int)light_rad + 0x2070;
		}
		r = AddLight__Fiii((int)sVar2,(int)sVar3,r);
		ptrplr->_plid = (char)r;
		light_fix__Fi((int)ptrplr->_plid);
		pvVar6 = ismyplr__FP12PlayerStruct(ptrplr);
		r = AddVision__FiiiUc((int)ptrplr->_px,(int)ptrplr->_py,10,(uchar)pvVar6);
		ptrplr->_pvid = (char)r;
	}
	cVar1 = ptrplr->_pClass;
	if (cVar1 == '\0') {
		uVar7 = 0x2000000;
	}
	else {
		if (cVar1 == '\x01') {
			uVar7 = 0x8000000;
		}
		else {
			if (cVar1 != '\x02') goto LAB_80059ae8;
			uVar7 = 0x4000000;
		}
	}
	*(undefined4 *)&ptrplr->_pAblSpells = uVar7;
	*(undefined4 *)((int)&ptrplr->_pAblSpells + 4) = 0;
LAB_80059ae8:
	lVar5 = (&ExpLvlsTbl)[(int)ptrplr->_pLevel];
	ptrplr->_pInvincible = '\0';
	ptrplr->_pNextExper = lVar5;
	pvVar6 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar6 != (void *)0x0) {
		deathdelay = 0;
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
 // line 1163, offset 0x80059b60
	/* begin block 1 */
		// Start line: 1164
		// Start offset: 0x80059B60
	/* end block 1 */
	// End offset: 0x80059B60
	// End Line: 1164

	/* begin block 2 */
		// Start line: 2461
	/* end block 2 */
	// End Line: 2462

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMultiView__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckLeighSolid__Fii(int x /*$t1*/, int y /*$t2*/)
 // line 1270, offset 0x80059b68
	/* begin block 1 */
		// Start line: 1271
		// Start offset: 0x80059B68
		// Variables:
	// 		struct bbssbb bodge[10]; // stack offset -80

		/* begin block 1.1 */
			// Start line: 1290
			// Start offset: 0x80059BB0
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x80059BF0
		// End Line: 1294
	/* end block 1 */
	// End offset: 0x80059BF4
	// End Line: 1295

	/* begin block 2 */
		// Start line: 2669
	/* end block 2 */
	// End Line: 2670

void * CheckLeighSolid__Fii(int x,int y)

{
	undefined4 uVar1;
	int *piVar2;
	undefined4 uVar3;
	int iVar4;
	undefined4 uVar5;
	undefined4 *puVar6;
	int *piVar7;
	int local_50 [20];
	
	piVar7 = local_50;
	piVar2 = local_50;
	puVar6 = &DAT_801275c0;
	do {
		uVar1 = puVar6[1];
		uVar3 = puVar6[2];
		uVar5 = puVar6[3];
		*piVar7 = *puVar6;
		piVar7[1] = uVar1;
		piVar7[2] = uVar3;
		piVar7[3] = uVar5;
		puVar6 = puVar6 + 4;
		piVar7 = piVar7 + 4;
	} while (puVar6 != (undefined4 *)"fucked up player class");
	iVar4 = 0;
	while ((x != *piVar2 || (y != piVar2[1]))) {
		iVar4 = iVar4 + 1;
		piVar2 = piVar2 + 2;
		if (9 < iVar4) {
			return (void *)0x0;
		}
	}
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SolidLoc__Fii(int x /*$s1*/, int y /*$s0*/)
 // line 1298, offset 0x80059c00
	/* begin block 1 */
		// Start line: 1299
		// Start offset: 0x80059C00
	/* end block 1 */
	// End offset: 0x80059C70
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2727
	/* end block 2 */
	// End Line: 2728

uchar SolidLoc__Fii(int x,int y)

{
	void *pvVar1;
	
	if ((leveltype == '\0') && (pvVar1 = CheckLeighSolid__Fii(x,y), pvVar1 != (void *)0x0)) {
		return '\x01';
	}
	return nSolidTable[(int)dung_map[x * 0x6c + y].dPiece];
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlrClrTrans__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 1357, offset 0x80059c88
	/* begin block 1 */
		// Start line: 1358
		// Start offset: 0x80059C88
		// Variables:
	// 		int i; // $v1
	// 		int j; // $a3
	/* end block 1 */
	// End offset: 0x80059D10
	// End Line: 1367

	/* begin block 2 */
		// Start line: 2845
	/* end block 2 */
	// End Line: 2846

void PlrClrTrans__Fii(int x,int y)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = y + -1;
	iVar4 = iVar3 * 0xc;
	do {
		iVar1 = x + -1;
		if (iVar1 <= x + 1) {
			iVar2 = iVar1 * 0x510 + iVar4;
			do {
				iVar1 = iVar1 + 1;
				(&TransList)[(int)(&dung_map[0].dTransVal)[iVar2]] = (void *)0x0;
				iVar2 = iVar2 + 0x510;
			} while (iVar1 <= x + 1);
		}
		iVar3 = iVar3 + 1;
		iVar4 = iVar4 + 0xc;
	} while (iVar3 <= y + 1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlrDoTrans__Fii(int x /*$a0*/, int y /*$a1*/)
 // line 1373, offset 0x80059d1c
	/* begin block 1 */
		// Start line: 1374
		// Start offset: 0x80059D1C
		// Variables:
	// 		int i; // $v1
	// 		int j; // $a3
	/* end block 1 */
	// End offset: 0x80059E04
	// End Line: 1387

	/* begin block 2 */
		// Start line: 2882
	/* end block 2 */
	// End Line: 2883

void PlrDoTrans__Fii(int x,int y)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if ((uint)leveltype - 1 < 2) {
		iVar3 = y + -1;
		iVar4 = iVar3 * 0xc;
		do {
			iVar1 = x + -1;
			if (iVar1 <= x + 1) {
				iVar2 = iVar1 * 0x510 + iVar4;
				do {
					if ((nSolidTable[(int)*(short *)((int)&dung_map[0].dPiece + iVar2)] == '\0') &&
						 ((int)(&dung_map[0].dTransVal)[iVar2] != 0)) {
						(&TransList)[(int)(&dung_map[0].dTransVal)[iVar2]] = (void *)0x1;
					}
					iVar1 = iVar1 + 1;
					iVar2 = iVar2 + 0x510;
				} while (iVar1 <= x + 1);
			}
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0xc;
		} while (iVar3 <= y + 1);
	}
	else {
		PTR_ARRAY_800ed254[0] = &DAT_00000001;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1392, offset 0x80059e10
	/* begin block 1 */
		// Start line: 1393
		// Start offset: 0x80059E10
	/* end block 1 */
	// End offset: 0x80059E1C
	// End Line: 1397

	/* begin block 2 */
		// Start line: 2919
	/* end block 2 */
	// End Line: 2920

void SetPlayerOld__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_poldx = ptrplr->_px;
	ptrplr->_poldy = ptrplr->_py;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int dir /*$a1*/)
 // line 1431, offset 0x80059e24
	/* begin block 1 */
		// Start line: 1432
		// Start offset: 0x80059E24
	/* end block 1 */
	// End offset: 0x80059E9C
	// End Line: 1452

	/* begin block 2 */
		// Start line: 2995
	/* end block 2 */
	// End Line: 2996

void StartStand__FP12PlayerStructi(PlayerStruct *ptrplr,int dir)

{
	void *pvVar1;
	
	ptrplr->_pdir = (char)dir;
	if (((ptrplr->_pInvincible == '\0') || (ptrplr->_pHitPoints != 0)) ||
		 (pvVar1 = ismyplr__FP12PlayerStruct(ptrplr), pvVar1 == (void *)0x0)) {
		NewPlrAnim__FP12PlayerStructiii(ptrplr,0,ptrplr->_pNFrames,3);
		ptrplr->_pmode = 0;
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
 // line 1457, offset 0x80059eb0
	/* begin block 1 */
		// Start line: 1458
		// Start offset: 0x80059EB0
	/* end block 1 */
	// End offset: 0x80059F00
	// End Line: 1477

	/* begin block 2 */
		// Start line: 3052
	/* end block 2 */
	// End Line: 3053

void StartWalkStand__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	
	ptrplr->_pmode = 0;
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
// void /*$ra*/ PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a3*/)
 // line 1484, offset 0x80059f14
	/* begin block 1 */
		// Start line: 1485
		// Start offset: 0x80059F14
		// Variables:
	// 		int lx; // $a0
	// 		int ly; // $v0
	// 		static unsigned char fix[9]; // offset 0x800deaf8
	/* end block 1 */
	// End offset: 0x80059F40
	// End Line: 1543

	/* begin block 2 */
		// Start line: 3107
	/* end block 2 */
	// End Line: 3108

void PM_ChangeLightOff__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ChangeLightOff__Fiii((int)ptrplr->_plid,(ptrplr->WorldX & 0xfU) - 8,(ptrplr->WorldY & 0xfU) - 8);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1550, offset 0x80059f50
	/* begin block 1 */
		// Start line: 1551
		// Start offset: 0x80059F50
	/* end block 1 */
	// End offset: 0x80059F6C
	// End Line: 1573

	/* begin block 2 */
		// Start line: 3239
	/* end block 2 */
	// End Line: 3240

void PM_ChangeOffset__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->_pVar8 = ptrplr->_pVar8 + 1;
	PM_ChangeLightOff__FP12PlayerStruct(ptrplr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int d /*$a1*/)
 // line 1669, offset 0x80059f7c
	/* begin block 1 */
		// Start line: 1670
		// Start offset: 0x80059F7C
		// Variables:
	// 		int co; // $s1
	// 		unsigned char closeattack; // $s2
	/* end block 1 */
	// End offset: 0x8005A098
	// End Line: 1700

	/* begin block 2 */
		// Start line: 3477
	/* end block 2 */
	// End Line: 3478

void StartAttack__FP12PlayerStructi(PlayerStruct *ptrplr,int d)

{
	char cVar1;
	bool bVar2;
	void *pvVar3;
	
	cVar1 = dung_map[(int)ptrplr->_pVar6 * 0x6c + (int)ptrplr->_pVar7].dObject;
	bVar2 = false;
	if (((ptrplr->_pInvincible == '\0') || (ptrplr->_pHitPoints != 0)) ||
		 (pvVar3 = ismyplr__FP12PlayerStruct(ptrplr), pvVar3 == (void *)0x0)) {
		NewPlrAnim__FP12PlayerStructiii(ptrplr,2,ptrplr->_pAFrames,0);
		if ((0 < (int)cVar1) && (object[(int)cVar1 + -1]._oBreak == '\x01')) {
			bVar2 = true;
		}
		if ((ptrplr->_pwtype == 0) || (bVar2)) {
			ptrplr->_pmode = 4;
		}
		else {
			ptrplr->_pmode = 5;
			ptrplr->_pVar1 = ptrplr->_pVar6;
			ptrplr->_pVar2 = ptrplr->_pVar7;
		}
		SetPlayerOld__FP12PlayerStruct(ptrplr);
	}
	else {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int dir /*$a1*/)
 // line 1727, offset 0x8005a0b4
	/* begin block 1 */
		// Start line: 1728
		// Start offset: 0x8005A0B4
	/* end block 1 */
	// End offset: 0x8005A138
	// End Line: 1742

	/* begin block 2 */
		// Start line: 3600
	/* end block 2 */
	// End Line: 3601

void StartPlrBlock__FP12PlayerStructi(PlayerStruct *ptrplr,int dir)

{
	void *pvVar1;
	
	if (((ptrplr->_pInvincible == '\0') || (ptrplr->_pHitPoints != 0)) ||
		 (pvVar1 = ismyplr__FP12PlayerStruct(ptrplr), pvVar1 == (void *)0x0)) {
		PlaySfxLoc__Fiii(IS_ISWORD,(int)ptrplr->_px,(int)ptrplr->_py);
		NewPlrAnim__FP12PlayerStructiii(ptrplr,3,ptrplr->_pBFrames,2);
		ptrplr->_pmode = 6;
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
 // line 1748, offset 0x8005a14c
	/* begin block 1 */
		// Start line: 1749
		// Start offset: 0x8005A14C
	/* end block 1 */
	// End offset: 0x8005A2CC
	// End Line: 1789

	/* begin block 2 */
		// Start line: 3644
	/* end block 2 */
	// End Line: 3645

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
	if (leveltype == '\0') goto LAB_8005a244;
	bVar1 = (&spelldata)[(int)ptrplr->_pSpell].sType;
	if (bVar1 == 1) {
		Peq = 5;
	}
	else {
		if (bVar1 < 2) {
			if (bVar1 != 0) goto LAB_8005a244;
			Peq = 4;
		}
		else {
			Peq = 6;
			if (bVar1 != 2) goto LAB_8005a244;
		}
	}
	NewPlrAnim__FP12PlayerStructiii(ptrplr,Peq,ptrplr->_pSFrames,0);
LAB_8005a244:
	PlaySfxLoc__Fiii((uint)(&spelldata)[(int)ptrplr->_pSpell].sSFX,(int)ptrplr->_px,(int)ptrplr->_py);
	ptrplr->_pmode = 9;
	PostGamePad__Fiiii((uint)(ptrplr != (PlayerStruct *)&sgLevels[0x11].item[0x39].bDur),0,0,0);
	SetPlayerOld__FP12PlayerStruct(ptrplr);
	ptrplr->_pVar1 = (short)cx;
	ptrplr->_pVar2 = (short)cy;
	Peq = GetSpellLevel__FP12PlayerStructi(ptrplr,(int)ptrplr->_pSpell);
	ptrplr->_pVar4 = (short)Peq;
	ptrplr->_pVar8 = 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 1822, offset 0x8005a2e8
	/* begin block 1 */
		// Start line: 1823
		// Start offset: 0x8005A2E8
		// Variables:
	// 		int pp; // $t5
	// 		int pn; // $a0
	// 		int x; // $a1
	// 		int y; // $t2
	/* end block 1 */
	// End offset: 0x8005A400
	// End Line: 1839

	/* begin block 2 */
		// Start line: 3798
	/* end block 2 */
	// End Line: 3799

void RemovePlrFromMap__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int iVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	uVar2 = ~(uint)(ptrplr != plr);
	iVar7 = 1;
	iVar6 = 0xc;
	iVar8 = 0;
	do {
		iVar3 = 1;
		iVar5 = 0;
		iVar4 = iVar6;
		iVar1 = iVar8;
		do {
			if ((((int)(char)(&DAT_800ed78a)[iVar1] == uVar2) ||
					((int)(&dung_map[0].dPlayer)[iVar6 + iVar5] == uVar2)) &&
				 (((&DAT_800ed783)[iVar4] & 0x20) != 0)) {
				(&DAT_800ed783)[iVar4] = (&DAT_800ed783)[iVar4] & 0xdf;
			}
			iVar5 = iVar5 + 0x510;
			iVar3 = iVar3 + 1;
			iVar4 = iVar4 + 0x510;
			iVar1 = iVar1 + 0x510;
		} while (iVar3 < 0x70);
		iVar6 = iVar6 + 0xc;
		iVar7 = iVar7 + 1;
		iVar8 = iVar8 + 0xc;
	} while (iVar7 < 0x70);
	iVar7 = 0;
	iVar6 = 0;
	do {
		iVar4 = 0;
		iVar8 = iVar6;
		do {
			if (((int)(&dung_map[0].dPlayer)[iVar8] == (uint)(ptrplr != plr) + 1) ||
				 ((int)(&dung_map[0].dPlayer)[iVar8] == uVar2)) {
				(&dung_map[0].dPlayer)[iVar8] = '\0';
			}
			iVar4 = iVar4 + 1;
			iVar8 = iVar8 + 0x510;
		} while (iVar4 < 0x70);
		iVar7 = iVar7 + 1;
		iVar6 = iVar6 + 0xc;
	} while (iVar7 < 0x70);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr /*$s0*/, int dam /*$s1*/, unsigned char forcehit /*$s2*/)
 // line 1845, offset 0x8005a408
	/* begin block 1 */
		// Start line: 1846
		// Start offset: 0x8005A408
	/* end block 1 */
	// End offset: 0x8005A50C
	// End Line: 1878

	/* begin block 2 */
		// Start line: 3843
	/* end block 2 */
	// End Line: 3844

void StartPlrHit__FP12PlayerStructiUc(PlayerStruct *ptrplr,int dam,uchar forcehit)

{
	char cVar1;
	void *pvVar2;
	_125fake psfx;
	int x;
	int y;
	
	if (((ptrplr->_pInvincible != '\0') && (ptrplr->_pHitPoints == 0)) &&
		 (pvVar2 = ismyplr__FP12PlayerStruct(ptrplr), pvVar2 != (void *)0x0)) {
		StartPlrKill__FP12PlayerStructi(ptrplr,-1);
		return;
	}
	cVar1 = ptrplr->_pClass;
	if (cVar1 == '\0') {
		x = (int)ptrplr->_px;
		y = (int)ptrplr->_py;
		psfx = PS_WARR69;
	}
	else {
		if (cVar1 == '\x01') {
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			psfx = PS_ROGUE69;
		}
		else {
			if (cVar1 != '\x02') goto LAB_8005a4bc;
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			psfx = PS_MAGE69;
		}
	}
	PlaySfxLoc__Fiii(psfx,x,y);
LAB_8005a4bc:
	drawhpflag = '\x01';
	if (((int)ptrplr->_pLevel <= dam >> 6) || (forcehit != '\0')) {
		NewPlrAnim__FP12PlayerStructiii(ptrplr,7,ptrplr->_pHFrames,0);
		ptrplr->_pmode = 7;
		ptrplr->_pVar8 = 1;
		SetPlayerOld__FP12PlayerStruct(ptrplr);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm /*$s0*/, int x /*$s1*/, int y /*$s2*/)
 // line 1885, offset 0x8005a528
	/* begin block 1 */
		// Start line: 1886
		// Start offset: 0x8005A528
		// Variables:
	// 		int ii; // $t0
	/* end block 1 */
	// End offset: 0x8005A6A8
	// End Line: 1915

	/* begin block 2 */
		// Start line: 3931
	/* end block 2 */
	// End Line: 3932

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
		i = (int)itemavail[0];
		dung_map[x * 0x6c + y].dItem = itemavail[0] + '\x01';
		cVar2 = itemavail[0x7e - numitems];
		itemactive[numitems] = itemavail[0];
		itemavail[0] = cVar2;
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
		} while (pIVar8 != (ItemStruct *)&itm->_iMinMag);
		iVar3 = pIVar7->_ivalue;
		((ItemStruct *)&pIVar6->_iSeed)->_iVAdd1 = pIVar8->_iVAdd1;
		pIVar6->_ivalue = iVar3;
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
 // line 1920, offset 0x8005a6c4
	/* begin block 1 */
		// Start line: 1921
		// Start offset: 0x8005A6C4
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s4

		/* begin block 1.1 */
			// Start line: 1943
			// Start offset: 0x8005A77C
			// Variables:
		// 		int l; // $s1

			/* begin block 1.1.1 */
				// Start line: 1943
				// Start offset: 0x8005A780

				/* begin block 1.1.1.1 */
					// Start line: 1944
					// Start offset: 0x8005A78C
					// Variables:
				// 		int j; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 1944
						// Start offset: 0x8005A78C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1945
							// Start offset: 0x8005A798
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005A850
						// End Line: 1955
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005A850
					// End Line: 1955
				/* end block 1.1.1.1 */
				// End offset: 0x8005A858
				// End Line: 1956
			/* end block 1.1.1 */
			// End offset: 0x8005A858
			// End Line: 1956
		/* end block 1.1 */
		// End offset: 0x8005A860
		// End Line: 1957
	/* end block 1 */
	// End offset: 0x8005A860
	// End Line: 1957

	/* begin block 2 */
		// Start line: 4025
	/* end block 2 */
	// End Line: 4026

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
				pIVar3 = (ItemStruct *)&itm->_iMinMag;
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
LAB_8005a814:
				_i = itm->_iVMult1;
				pIVar2->_iVAdd1 = itm->_iVAdd1;
				pIVar2->_iVMult1 = _i;
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
						pIVar3 = (ItemStruct *)&itm->_iMinMag;
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
						goto LAB_8005a814;
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
// void /*$ra*/ StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s1*/, int earflag /*$s2*/)
 // line 1962, offset 0x8005a88c
	/* begin block 1 */
		// Start line: 1963
		// Start offset: 0x8005A88C
		// Variables:
	// 		struct ItemStruct *pi; // $s2
	// 		struct ItemStruct ear; // stack offset -176
	// 		int i; // $s0
	// 		struct PlayerStruct *p; // $s3
	// 		unsigned char diablolevel; // $s4

		/* begin block 1.1 */
			// Start line: 2060
			// Start offset: 0x8005AA68

			/* begin block 1.1.1 */
				// Start line: 2061
				// Start offset: 0x8005AA70
			/* end block 1.1.1 */
			// End offset: 0x8005AB10
			// End Line: 2075

			/* begin block 1.1.2 */
				// Start line: 2076
				// Start offset: 0x8005AB28

				/* begin block 1.1.2.1 */
					// Start line: 2078
					// Start offset: 0x8005AB28

					/* begin block 1.1.2.1.1 */
						// Start line: 2079
						// Start offset: 0x8005AB34
						// Variables:
					// 		int pdd; // $v0
					/* end block 1.1.2.1.1 */
					// End offset: 0x8005AB40
					// End Line: 2080
				/* end block 1.1.2.1 */
				// End offset: 0x8005AB78
				// End Line: 2082
			/* end block 1.1.2 */
			// End offset: 0x8005AB80
			// End Line: 2083
		/* end block 1.1 */
		// End offset: 0x8005AB80
		// End Line: 2083
	/* end block 1 */
	// End offset: 0x8005AB80
	// End Line: 2083

	/* begin block 2 */
		// Start line: 4111
	/* end block 2 */
	// End Line: 4112

void StartPlayerKill__FP12PlayerStructi(PlayerStruct *ptrplr,int earflag)

{
	char cVar1;
	short sVar2;
	int iVar3;
	uint uVar4;
	_125fake psfx;
	int x;
	int y;
	ItemStruct *itm;
	ItemStruct IStack176;
	
	if ((ptrplr->_pHitPoints == 0) && (ptrplr->_pmode == 8)) {
		return;
	}
	iVar3 = ptrplr->plrlevel;
	cVar1 = ptrplr->_pClass;
	if (cVar1 == '\0') {
		x = (int)ptrplr->_px;
		y = (int)ptrplr->_py;
		psfx = PS_DEAD;
LAB_8005a924:
		PlaySfxLoc__Fiii(psfx,x,y);
	}
	else {
		if (cVar1 == '\x01') {
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			psfx = PS_ROGUE71;
			goto LAB_8005a924;
		}
		psfx = PS_MAGE71;
		if (cVar1 == '\x02') {
			x = (int)ptrplr->_px;
			y = (int)ptrplr->_py;
			goto LAB_8005a924;
		}
	}
	if (ptrplr->_pgfxnum != '\0') {
		ptrplr->_pgfxnum = '\0';
		ptrplr->_pGFXLoad = 0;
		SetPlrAnims__FP12PlayerStruct(ptrplr);
	}
	NewPlrAnim__FP12PlayerStructiii(ptrplr,1,ptrplr->_pDFrames,1);
	ptrplr->_pmode = 8;
	ptrplr->_pBlockFlag = '\0';
	ptrplr->_pInvincible = '\x01';
	SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0);
	uVar4 = (uint)currlevel;
	ptrplr->_pVar8 = 1;
	if (ptrplr->plrlevel != uVar4) {
		return;
	}
	RemovePlrFromMap__FP12PlayerStruct(ptrplr);
	dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dFlags =
			 dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dFlags | 4;
	SetPlayerOld__FP12PlayerStruct(ptrplr);
	drawhpflag = '\x01';
	deathdelay = 0x1e;
	if (0xb < _pcurs[myplr]) {
		PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,&ptrplr->HoldItem,0,0);
		NewCursor__Fi(1);
	}
	if (iVar3 == 0x10) {
		return;
	}
	DropHalfPlayersGold__FP12PlayerStruct(ptrplr);
	if (earflag == -1) {
		return;
	}
	if (earflag == 0) {
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
		return;
	}
	SetPlrHandItem__FP10ItemStructi(&IStack176,0x17);
	cVar1 = ptrplr->_pClass;
	sVar2 = 0x13;
	if (cVar1 != '\x02') {
		if (cVar1 == '\0') {
			sVar2 = 0x14;
		}
		else {
			sVar2 = 0x15;
			if (cVar1 != '\x01') goto LAB_8005aaa4;
		}
	}
	IStack176._iCurs = sVar2;
LAB_8005aaa4:
	IStack176._iCreateInfo =
			 (short)ptrplr->_pName[1] | (ushort)(((uint)(byte)ptrplr->_pName[0] << 0x18) >> 0x10);
	IStack176._iSeed =
			 (int)ptrplr->_pName[2] << 0x18 | (int)ptrplr->_pName[3] << 0x10 | (int)ptrplr->_pName[4] << 8
			 | (int)ptrplr->_pName[5];
	IStack176._ivalue = (int)ptrplr->_pLevel;
	iVar3 = FindGetItem__FiUsi(0x17,IStack176._iCreateInfo,IStack176._iSeed);
	if (iVar3 == -1) {
		PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,&IStack176,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 2091, offset 0x8005aba4
	/* begin block 1 */
		// Start line: 2092
		// Start offset: 0x8005ABA4
		// Variables:
	// 		int i; // $s1
	// 		long hGold; // $s2
	/* end block 1 */
	// End offset: 0x8005AFC8
	// End Line: 2258

	/* begin block 2 */
		// Start line: 4413
	/* end block 2 */
	// End Line: 4414

void DropHalfPlayersGold__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ItemStruct *pIVar1;
	undefined *puVar2;
	int i;
	int val;
	int iVar3;
	ItemStruct *h;
	PlayerStruct *pPVar4;
	
	val = 0;
	h = &ptrplr->HoldItem;
	iVar3 = ptrplr->_pGold >> 1;
	pPVar4 = ptrplr;
	do {
		if (iVar3 < 1) goto LAB_8005afbc;
		if (pPVar4->SpdList[0]._itype == 0xb) {
			puVar2 = (undefined *)pPVar4->SpdList[0]._ivalue;
			if (puVar2 != &DAT_00001388) {
				if (iVar3 < (int)puVar2) {
					*(undefined **)&pPVar4->SpdList[0]._ivalue = puVar2 + -iVar3;
					SetSpdbarGoldCurs__FP12PlayerStructi(ptrplr,val);
					SetPlrHandItem__FP10ItemStructi(h,0);
					GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
					SetPlrHandGoldCurs__FP10ItemStruct(h);
					(ptrplr->HoldItem)._ivalue = iVar3;
					PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
					iVar3 = 0;
				}
				else {
					iVar3 = iVar3 - (int)puVar2;
					RemoveSpdBarItem__FP12PlayerStructi(ptrplr,val);
					SetPlrHandItem__FP10ItemStructi(h,0);
					GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
					SetPlrHandGoldCurs__FP10ItemStruct(h);
					pIVar1 = pPVar4->SpdList;
					pPVar4 = (PlayerStruct *)&ptrplr->InvList[0x1c]._iMinDam;
					val = -1;
					(ptrplr->HoldItem)._ivalue = pIVar1->_ivalue;
					PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
				}
			}
		}
		val = val + 1;
		pPVar4 = (PlayerStruct *)(pPVar4->_pSplLvl + 0x1b);
	} while (val < 8);
	if (0 < iVar3) {
		val = 0;
		h = &ptrplr->HoldItem;
		pPVar4 = ptrplr;
		do {
			if (iVar3 < 1) goto LAB_8005afbc;
			if (pPVar4->SpdList[0]._itype == 0xb) {
				i = pPVar4->SpdList[0]._ivalue;
				if (iVar3 < i) {
					pPVar4->SpdList[0]._ivalue = i - iVar3;
					SetSpdbarGoldCurs__FP12PlayerStructi(ptrplr,val);
					SetPlrHandItem__FP10ItemStructi(h,0);
					GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
					SetPlrHandGoldCurs__FP10ItemStruct(h);
					(ptrplr->HoldItem)._ivalue = iVar3;
					PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
					iVar3 = 0;
				}
				else {
					iVar3 = iVar3 - i;
					RemoveSpdBarItem__FP12PlayerStructi(ptrplr,val);
					SetPlrHandItem__FP10ItemStructi(h,0);
					GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
					SetPlrHandGoldCurs__FP10ItemStruct(h);
					pIVar1 = pPVar4->SpdList;
					pPVar4 = (PlayerStruct *)&ptrplr->InvList[0x1c]._iMinDam;
					val = -1;
					(ptrplr->HoldItem)._ivalue = pIVar1->_ivalue;
					PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
				}
			}
			val = val + 1;
			pPVar4 = (PlayerStruct *)(pPVar4->_pSplLvl + 0x1b);
		} while (val < 8);
		if (0 < iVar3) {
			val = ptrplr->_pNumInv;
			i = 0;
			if (0 < val) {
				h = &ptrplr->HoldItem;
				pPVar4 = ptrplr;
				do {
					if (iVar3 < 1) goto LAB_8005afbc;
					if (pPVar4->InvList[0]._itype == 0xb) {
						puVar2 = (undefined *)pPVar4->InvList[0]._ivalue;
						if (puVar2 != &DAT_00001388) {
							if (iVar3 < (int)puVar2) {
								*(undefined **)&pPVar4->InvList[0]._ivalue = puVar2 + -iVar3;
								SetGoldCurs__FP12PlayerStructi(ptrplr,i);
								SetPlrHandItem__FP10ItemStructi(h,0);
								GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
								SetPlrHandGoldCurs__FP10ItemStruct(h);
								(ptrplr->HoldItem)._ivalue = iVar3;
								PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
								iVar3 = 0;
							}
							else {
								iVar3 = iVar3 - (int)puVar2;
								RemoveInvItem__FP12PlayerStructi(ptrplr,i);
								SetPlrHandItem__FP10ItemStructi(h,0);
								GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
								SetPlrHandGoldCurs__FP10ItemStruct(h);
								pIVar1 = pPVar4->InvList;
								pPVar4 = (PlayerStruct *)&ptrplr->InvList[0x1c]._iMinDam;
								i = -1;
								(ptrplr->HoldItem)._ivalue = pIVar1->_ivalue;
								PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
							}
						}
					}
					i = i + 1;
					pPVar4 = (PlayerStruct *)(pPVar4->_pSplLvl + 0x1b);
				} while (i < ptrplr->_pNumInv);
				if (iVar3 < 1) goto LAB_8005afbc;
				val = ptrplr->_pNumInv;
			}
			i = 0;
			if (0 < val) {
				h = &ptrplr->HoldItem;
				pPVar4 = ptrplr;
				do {
					if (iVar3 < 1) break;
					if (pPVar4->InvList[0]._itype == 0xb) {
						val = pPVar4->InvList[0]._ivalue;
						if (iVar3 < val) {
							pPVar4->InvList[0]._ivalue = val - iVar3;
							SetGoldCurs__FP12PlayerStructi(ptrplr,i);
							SetPlrHandItem__FP10ItemStructi(h,0);
							GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
							SetPlrHandGoldCurs__FP10ItemStruct(h);
							(ptrplr->HoldItem)._ivalue = iVar3;
							PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
							iVar3 = 0;
						}
						else {
							iVar3 = iVar3 - val;
							RemoveInvItem__FP12PlayerStructi(ptrplr,i);
							SetPlrHandItem__FP10ItemStructi(h,0);
							GetGoldSeed__FP12PlayerStructP10ItemStruct(ptrplr,h);
							SetPlrHandGoldCurs__FP10ItemStruct(h);
							pIVar1 = pPVar4->InvList;
							pPVar4 = (PlayerStruct *)&ptrplr->InvList[0x1c]._iMinDam;
							i = -1;
							(ptrplr->HoldItem)._ivalue = pIVar1->_ivalue;
							PlrDeadItem__FP12PlayerStructP10ItemStructii(ptrplr,h,0,0);
						}
					}
					i = i + 1;
					pPVar4 = (PlayerStruct *)(pPVar4->_pSplLvl + 0x1b);
				} while (i < ptrplr->_pNumInv);
			}
		}
	}
LAB_8005afbc:
	val = CalculateGold__FP12PlayerStruct(ptrplr);
	ptrplr->_pGold = val;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int earflag /*$s1*/)
 // line 2264, offset 0x8005afec
	/* begin block 1 */
		// Start line: 2265
		// Start offset: 0x8005AFEC
		// Variables:
	// 		int i; // $a1
	// 		int mx; // $a0
	/* end block 1 */
	// End offset: 0x8005B118
	// End Line: 2286

	/* begin block 2 */
		// Start line: 4811
	/* end block 2 */
	// End Line: 4812

void StartPlrKill__FP12PlayerStructi(PlayerStruct *ptrplr,int earflag)

{
	byte bVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	
	if ((ptrplr->_pHitPoints == 0) && (currlevel == '\0')) {
		SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0x40);
	}
	else {
		iVar3 = 0;
		if (0 < nummissiles) {
			piVar4 = &missileactive;
			do {
				iVar2 = *piVar4;
				if (missile[iVar2]._mitype == '\r') {
					bVar1 = missile[iVar2]._misource;
					if (ptrplr != plr) {
						bVar1 = bVar1 ^ 1;
					}
					if ((bVar1 == 0) && (missile[iVar2]._miDelFlag == '\0')) {
						if (earflag == -1) {
							return;
						}
						missile[iVar2]._miVar8 = (short)earflag;
						return;
					}
				}
				iVar3 = iVar3 + 1;
				piVar4 = piVar4 + 1;
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
 // line 2292, offset 0x8005b130
	/* begin block 1 */
		// Start line: 2293
		// Start offset: 0x8005B130
	/* end block 1 */
	// End offset: 0x8005B140
	// End Line: 2295

	/* begin block 2 */
		// Start line: 4867
	/* end block 2 */
	// End Line: 4868

void SyncPlrKill__FP12PlayerStructi(PlayerStruct *ptrplr,int earflag)

{
	StartPlayerKill__FP12PlayerStructi(ptrplr,earflag);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s2*/)
 // line 2300, offset 0x8005b150
	/* begin block 1 */
		// Start line: 2301
		// Start offset: 0x8005B150
		// Variables:
	// 		int i; // $s1
	// 		int mx; // $s0

		/* begin block 1.1 */
			// Start line: 2301
			// Start offset: 0x8005B150

			/* begin block 1.1.1 */
				// Start line: 2304
				// Start offset: 0x8005B1CC
			/* end block 1.1.1 */
			// End offset: 0x8005B298
			// End Line: 2310
		/* end block 1.1 */
		// End offset: 0x8005B298
		// End Line: 2310
	/* end block 1 */
	// End offset: 0x8005B418
	// End Line: 2326

	/* begin block 2 */
		// Start line: 4886
	/* end block 2 */
	// End Line: 4887

void RemovePlrMissiles__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	byte bVar1;
	void *pvVar2;
	int mi;
	int i;
	
	if (((currlevel != '\0') && (pvVar2 = ismyplr__FP12PlayerStruct(ptrplr), pvVar2 != (void *)0x0))
		 && ((monster[myplr]._mx != '\x01' || (monster[myplr]._my != '\0')))) {
		M_StartKill__Fii(myplr,myplr);
		AddDead__Fiici((int)monster[myplr]._mx,(int)monster[myplr]._my,(monster[myplr].MType)->mdeadval,
									 (int)monster[myplr]._mdir);
		i = myplr;
		dung_map[(int)monster[myplr]._mx * 0x6c + (int)monster[myplr]._my].dMonster = 0;
		monster[i]._mDelFlag = '\x01';
		DeleteMonsterList__Fv();
	}
	i = 0;
	if (0 < nummissiles) {
		mi = 0;
		do {
			mi = *(int *)((int)&missileactive + mi);
			if (missile[mi]._mitype == '\x1e') {
				bVar1 = missile[mi]._misource;
				if (ptrplr != plr) {
					bVar1 = bVar1 ^ 1;
				}
				if (bVar1 == 0) {
					monster[(int)missile[mi]._miVar2]._mmode = (char)missile[mi]._miVar1;
				}
			}
			if (missile[mi]._mitype == '\r') {
				bVar1 = missile[mi]._misource;
				if (ptrplr != plr) {
					bVar1 = bVar1 ^ 1;
				}
				if (bVar1 == 0) {
					ClearMissileSpot__Fi(mi);
					DeleteMissile__Fii(mi,i);
				}
			}
			if (missile[mi]._mitype == '\"') {
				bVar1 = missile[mi]._misource;
				if (ptrplr != plr) {
					bVar1 = bVar1 ^ 1;
				}
				if (bVar1 == 0) {
					ClearMissileSpot__Fi(mi);
					DeleteMissile__Fii(mi,i);
				}
			}
			i = i + 1;
			mi = i * 4;
		} while (i < nummissiles);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s1*/)
 // line 2331, offset 0x8005b438
	/* begin block 1 */
		// Start line: 2332
		// Start offset: 0x8005B438
	/* end block 1 */
	// End offset: 0x8005B4D8
	// End Line: 2352

	/* begin block 2 */
		// Start line: 4949
	/* end block 2 */
	// End Line: 4950

void InitLevelChange__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	
	RemovePlrMissiles__FP12PlayerStruct(ptrplr);
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if ((pvVar1 != (void *)0x0) && (qtextflag != '\0')) {
		qtextflag = '\0';
		stream_stop__Fv();
	}
	RemovePlrFromMap__FP12PlayerStruct(ptrplr);
	SetPlayerOld__FP12PlayerStruct(ptrplr);
	ptrplr->_pLvlVisited[ptrplr->plrlevel] = '\x01';
	ClrPlrPath__FP12PlayerStruct(ptrplr);
	ptrplr->destAction = -1;
	ptrplr->_pLvlChanging = '\x01';
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar1 != (void *)0x0) {
		ptrplr->pLvlLoad = '\n';
	}
	visible_level = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$s0*/, int fom /*$s2*/, int lvl /*$s1*/)
 // line 2358, offset 0x8005b4f4
	/* begin block 1 */
		// Start line: 2359
		// Start offset: 0x8005B4F4
	/* end block 1 */
	// End offset: 0x8005B61C
	// End Line: 2411

	/* begin block 2 */
		// Start line: 5007
	/* end block 2 */
	// End Line: 5008

void StartNewLvl__FP12PlayerStructii(PlayerStruct *ptrplr,int fom,int lvl)

{
	ulong hWnd;
	void *pvVar1;
	
	if (ptrplr->plractive != '\0') {
		InitGamePadVars__Fv();
		InitLevelChange__FP12PlayerStruct(ptrplr);
		switch(fom) {
		case 0x45:
			setlvlnum = (uchar)lvl;
			break;
		case 0x48:
			plr[myplr].pTownWarps = plr[myplr].pTownWarps | (byte)(1 << ((uint)leveltype - 2 & 0x1f));
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
			ptrplr->_pmode = 10;
			GRL_PostMessage__FUlUilUl(hWnd,fom,0,0);
			if (1 < gbMaxPlayers) {
				NetSendCmdParam2__FUcUcUsUs('\x01','\x1e',(ushort)fom,(ushort)lvl);
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 2417, offset 0x8005b638
	/* begin block 1 */
		// Start line: 2418
		// Start offset: 0x8005B638
	/* end block 1 */
	// End offset: 0x8005B6B4
	// End Line: 2436

	/* begin block 2 */
		// Start line: 5128
	/* end block 2 */
	// End Line: 5129

void RestartTownLvl__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ulong hWnd;
	void *pvVar1;
	
	InitLevelChange__FP12PlayerStruct(ptrplr);
	ptrplr->plrlevel = 0;
	ptrplr->_pInvincible = '\0';
	SetPlayerHitPoints__FP12PlayerStructi(ptrplr,0x40);
	ptrplr->_pMana = 0;
	ptrplr->_pManaBase = ptrplr->_pMaxManaBase - ptrplr->_pMaxMana;
	CalcPlrInv__FP12PlayerStructUc(ptrplr,'\0');
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar1 != (void *)0x0) {
		ptrplr->_pInvincible = '\x01';
		hWnd = ghMainWnd;
		ptrplr->_pmode = 10;
		GRL_PostMessage__FUlUilUl(hWnd,0x49,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s0*/, int pidx /*$s1*/)
 // line 2443, offset 0x8005b6c8
	/* begin block 1 */
		// Start line: 2444
		// Start offset: 0x8005B6C8
	/* end block 1 */
	// End offset: 0x8005B76C
	// End Line: 2460

	/* begin block 2 */
		// Start line: 5187
	/* end block 2 */
	// End Line: 5188

void StartWarpLvl__FP12PlayerStructi(PlayerStruct *ptrplr,int pidx)

{
	ulong hWnd;
	void *pvVar1;
	
	InitLevelChange__FP12PlayerStruct(ptrplr);
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
		ptrplr->_pmode = 10;
		GRL_PostMessage__FUlUilUl(hWnd,0x46,0,0);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 2467, offset 0x8005b784
	/* begin block 1 */
		// Start line: 2468
		// Start offset: 0x8005B784
	/* end block 1 */
	// End offset: 0x8005B784
	// End Line: 2469

	/* begin block 2 */
		// Start line: 5237
	/* end block 2 */
	// End Line: 5238

int PM_DoStand__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return 0;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ ChkPlrOffsets__Fiiii(int wx1 /*$a0*/, int wy1 /*$s2*/, int wx2 /*$a2*/, int wy2 /*$a3*/)
 // line 2496, offset 0x8005b78c
	/* begin block 1 */
		// Start line: 2497
		// Start offset: 0x8005B78C
		// Variables:
	// 		int x; // $s1
	// 		int y; // $s0
	/* end block 1 */
	// End offset: 0x8005B7F8
	// End Line: 2514

	/* begin block 2 */
		// Start line: 5294
	/* end block 2 */
	// End Line: 5295

uchar ChkPlrOffsets__Fiiii(int wx1,int wy1,int wx2,int wy2)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = abs(((wx1 - wy1) - (wx2 - wy2)) * 4);
	iVar3 = abs((wx1 + wy1 >> 1) * 4 + (wx2 + wy2 >> 1) * -4);
	if ((0x13c < iVar2) || (uVar1 = '\x01', 0xdc < iVar3)) {
		uVar1 = '\0';
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 2517, offset 0x8005b814
	/* begin block 1 */
		// Start line: 2518
		// Start offset: 0x8005B814
		// Variables:
	// 		int owx; // $s2
	// 		int owy; // $s3
	/* end block 1 */
	// End offset: 0x8005BB60
	// End Line: 2635

	/* begin block 2 */
		// Start line: 5362
	/* end block 2 */
	// End Line: 5363

int PM_DoWalk__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	char cVar2;
	int y;
	int x;
	int y_00;
	
	x = ptrplr->WorldX;
	y = ptrplr->_pAnimFrame;
	y_00 = ptrplr->WorldY;
	if (y != 3) {
		if (ptrplr->_pWFrames == 8) {
			if (y != 7) goto LAB_8005b888;
		}
		else {
			if (y != 4) goto LAB_8005b888;
		}
	}
	PlaySfxLoc__Fiii(PS_WALK1,(int)ptrplr->_px,(int)ptrplr->_py);
LAB_8005b888:
	ChangeLightOff__Fiii((int)ptrplr->_plid,0,0);
	dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dPlayer = '\0';
	ptrplr->WorldX = ptrplr->WorldX + (int)ptrplr->_pVar1;
	y = ptrplr->WorldY + (int)ptrplr->_pVar2;
	ptrplr->WorldY = y;
	WorldToOffset__FP12PlayerStructii(ptrplr,ptrplr->WorldX,y);
	uVar1 = PosOkPlayer__FP12PlayerStructii(ptrplr,(int)ptrplr->_px,(int)ptrplr->_py);
	if (uVar1 == '\0') {
		WorldToOffset__FP12PlayerStructii(ptrplr,x,y_00);
		cVar2 = '\x02';
		if (ptrplr == plr) {
			cVar2 = '\x01';
		}
		dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dPlayer = cVar2;
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
		cVar2 = '\x02';
		if (ptrplr == plr) {
			cVar2 = '\x01';
		}
		dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dPlayer = cVar2;
		if (((plr[0].plractive == '\0') || (plr[1].plractive == '\0')) ||
			 (uVar1 = ChkPlrOffsets__Fiiii(plr[0].WorldX,plr[0].WorldY,plr[1].WorldX,plr[1].WorldY),
			 uVar1 != '\0')) {
			PM_ChangeOffset__FP12PlayerStruct(ptrplr);
			ChangeLightXY__Fiii((int)ptrplr->_plid,(int)ptrplr->_px,(int)ptrplr->_py);
			ChangeVisionXY__Fiii((int)ptrplr->_pvid,(int)ptrplr->_px,(int)ptrplr->_py);
			y = 0;
		}
		else {
			dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dPlayer = '\0';
			WorldToOffset__FP12PlayerStructii(ptrplr,x,y_00);
			cVar2 = '\x02';
			if (ptrplr == plr) {
				cVar2 = '\x01';
			}
			dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dPlayer = cVar2;
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
 // line 2641, offset 0x8005bb80
	/* begin block 1 */
		// Start line: 2642
		// Start offset: 0x8005BB80
	/* end block 1 */
	// End offset: 0x8005BD04
	// End Line: 2691

	/* begin block 2 */
		// Start line: 5655
	/* end block 2 */
	// End Line: 5656

uchar WeaponDur__FP12PlayerStructi(PlayerStruct *ptrplr,int durrnd)

{
	bool bVar1;
	void *pvVar2;
	long lVar3;
	int iVar4;
	short sVar5;
	int iVar6;
	
	bVar1 = false;
	pvVar2 = ismyplr__FP12PlayerStruct(ptrplr);
	if ((pvVar2 == (void *)0x0) || (lVar3 = random__Fil(3,durrnd), lVar3 != 0)) {
		bVar1 = true;
	}
	if (bVar1) {
		return '\0';
	}
	if ((ptrplr->InvBody[4]._itype == -1) || (ptrplr->InvBody[4]._iClass != '\x01')) {
LAB_8005bc00:
		if ((ptrplr->InvBody[5]._itype != -1) && (ptrplr->InvBody[5]._iClass == '\x01')) {
			iVar6 = ptrplr->InvBody[5]._iDurability;
			iVar4 = iVar6 + -1;
			if (iVar6 == 0xff) {
				return '\0';
			}
			ptrplr->InvBody[5]._iDurability = iVar4;
			if (iVar4 == 0) {
				NetSendCmdDelItem__FUcUc('\x01','\x05');
				ptrplr->InvBody[5]._itype = -1;
				goto LAB_8005bcec;
			}
		}
		if (ptrplr->InvBody[4]._itype == -1) {
			sVar5 = ptrplr->InvBody[5]._itype;
			if (sVar5 == 5) {
				iVar6 = ptrplr->InvBody[5]._iDurability;
				iVar4 = iVar6 + -1;
				if (iVar6 == 0xff) {
					return '\0';
				}
				ptrplr->InvBody[5]._iDurability = iVar4;
				if (iVar4 == 0) {
					NetSendCmdDelItem__FUcUc('\x01','\x05');
					ptrplr->InvBody[5]._itype = -1;
					goto LAB_8005bcec;
				}
				goto LAB_8005bca0;
			}
		}
		else {
LAB_8005bca0:
			sVar5 = ptrplr->InvBody[5]._itype;
		}
		if (sVar5 != -1) {
			return '\0';
		}
		if (ptrplr->InvBody[4]._itype != 5) {
			return '\0';
		}
		iVar6 = ptrplr->InvBody[4]._iDurability;
		iVar4 = iVar6 + -1;
		if ((iVar6 == 0xff) || (ptrplr->InvBody[4]._iDurability = iVar4, iVar4 != 0)) {
			return '\0';
		}
	}
	else {
		iVar6 = ptrplr->InvBody[4]._iDurability;
		iVar4 = iVar6 + -1;
		if (iVar6 == 0xff) {
			return '\0';
		}
		ptrplr->InvBody[4]._iDurability = iVar4;
		if (iVar4 != 0) goto LAB_8005bc00;
	}
	NetSendCmdDelItem__FUcUc('\x01','\x04');
	ptrplr->InvBody[4]._itype = -1;
LAB_8005bcec:
	CalcPlrInv__FP12PlayerStructUc(ptrplr,'\x01');
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr /*$s1*/, int m /*$s3*/)
 // line 2697, offset 0x8005bd20
	/* begin block 1 */
		// Start line: 2698
		// Start offset: 0x8005BD20
		// Variables:
	// 		int hit; // $s2
	// 		int hper; // $s0
	// 		int mind; // $s0
	// 		int maxd; // $a1
	// 		int ddp; // $s0
	// 		long dam; // $s2
	// 		long skdam; // $s4
	// 		int phanditype; // $a0
	// 		int tmac; // $v1
	// 		unsigned char rv; // $s5
	// 		unsigned char ret; // stack offset -40
	/* end block 1 */
	// End offset: 0x8005C328
	// End Line: 2812

	/* begin block 2 */
		// Start line: 5767
	/* end block 2 */
	// End Line: 5768

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
	if (((int)((uint)(ushort)monster[m]._mhitpoints << 0x10) >> 0x16 < 1) ||
		 ((((monster[m].MType)->mtype == ' ' && (monster[m]._mgoal == '\x02')) ||
			(monster[m]._mmode == '\x0e')))) {
		return '\0';
	}
	lVar3 = random__Fil(4,100);
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
	lVar3 = random__Fil(5,(ptrplr->_pIMaxDam - iVar7) + 1);
	iVar7 = lVar3 + iVar7;
	iVar7 = iVar7 + (iVar7 * ptrplr->_pIBonusDam) / 100 + ptrplr->_pIBonusDamMod + ptrplr->_pDamageMod
	;
	if ((ptrplr->_pClass == '\0') &&
		 (cVar1 = ptrplr->_pLevel, lVar3 = random__Fil(6,100), lVar3 < (int)cVar1)) {
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
LAB_8005bfc0:
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
			goto LAB_8005bfc0;
		}
	}
	if (((ptrplr->_pIFlags & 0x40000000U) != 0) && ((monster[m].MData)->mMonstClass == '\x01')) {
		iVar7 = iVar7 * 3;
	}
	dam = iVar7 * 0x40;
	pvVar4 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar4 != (void *)0x0) {
		monster[m]._mhitpoints = monster[m]._mhitpoints + (short)iVar7 * -0x40;
	}
	if ((ptrplr->_pIFlags & 2U) != 0) {
		iVar8 = random__Fil(7,dam >> 3);
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
		if ((uVar6 & 0x8000000) != 0) goto LAB_8005c170;
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
LAB_8005c170:
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
	if ((int)((uint)(ushort)monster[m]._mhitpoints << 0x10) >> 0x16 < 1) {
		if (monster[m]._mmode != '\x0f') {
			M_StartKill__FiP12PlayerStruct(m,ptrplr);
			return '\x01';
		}
		M_StartKill__FiP12PlayerStruct(m,ptrplr);
	}
	else {
		if (monster[m]._mmode != '\x0f') {
			if ((ptrplr->_pIFlags & 0x800U) != 0) {
				M_GetKnockback__Fi(m);
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
 // line 2818, offset 0x8005c350
	/* begin block 1 */
		// Start line: 2819
		// Start offset: 0x8005C350
		// Variables:
	// 		int hit; // $s4
	// 		int hper; // $s0
	// 		int mind; // $s0
	// 		int maxd; // $a1
	// 		int ddp; // $s0
	// 		long dam; // $s1
	// 		long skdam; // $a0
	// 		int tac; // $a0
	// 		int blk; // $a3
	// 		int blkper; // $v1
	// 		unsigned char rv; // $s5
	/* end block 1 */
	// End offset: 0x8005C6D8
	// End Line: 2882

	/* begin block 2 */
		// Start line: 6032
	/* end block 2 */
	// End Line: 6033

uchar PlrHitPlr__FP12PlayerStructc(PlayerStruct *ptrplr,char p)

{
	char cVar1;
	uchar uVar2;
	long lVar3;
	void *pvVar4;
	int dir;
	int iVar5;
	int iVar6;
	long lVar7;
	int pnum;
	ulong dwDam;
	
	uVar2 = '\0';
	dir = (int)p;
	if ((plr[dir]._pInvincible == '\0') && ((plr[dir]._pSpellFlags & 1U) == 0)) {
		lVar3 = random__Fil(4,100);
		iVar6 = (uint)(ushort)plr[dir]._pDexterity << 0x10;
		iVar5 = iVar6 >> 0x10;
		iVar5 = ((int)ptrplr->_pLevel -
						(plr[dir]._pIAC + plr[dir]._pIBonusAC +
						 (((iVar5 / 5 + (iVar5 >> 0x1f)) - (iVar6 >> 0x1f)) * 0x10000 >> 0x10) + -0x32)) +
						((int)((uint)(ushort)ptrplr->_pDexterity << 0x10) >> 0x11);
		if (ptrplr->_pClass == '\0') {
			iVar5 = iVar5 + 0x14;
		}
		iVar5 = iVar5 + ptrplr->_pIBonusToHit;
		iVar6 = iVar5;
		if (iVar5 < 5) {
			iVar6 = 5;
		}
		if (0x5f < iVar5) {
			iVar6 = 0x5f;
		}
		if ((plr[dir]._pmode == 0) || (lVar7 = 100, plr[dir]._pmode == 4)) {
			if (plr[dir]._pBlockFlag == '\0') {
				lVar7 = 100;
			}
			else {
				lVar7 = random__Fil(5,100);
			}
		}
		pnum = (int)p;
		iVar5 = plr[pnum]._pBaseToBlk + (int)plr[pnum]._pDexterity +
						((int)ptrplr->_pLevel - (int)plr[pnum]._pLevel) * -2;
		dir = iVar5;
		if (iVar5 < 0) {
			dir = 0;
		}
		if (100 < iVar5) {
			dir = 100;
		}
		if (lVar3 < iVar6) {
			if (lVar7 < dir) {
				dir = GetDirection__Fiiii((int)plr[pnum]._px,(int)plr[pnum]._py,(int)ptrplr->_px,
																	(int)ptrplr->_py);
				StartPlrBlock__Fii(pnum,dir);
				uVar2 = '\x01';
			}
			else {
				dir = ptrplr->_pIMinDam;
				lVar3 = random__Fil(5,(ptrplr->_pIMaxDam - dir) + 1);
				dir = lVar3 + dir;
				dir = dir + (dir * ptrplr->_pIBonusDam) / 100 + ptrplr->_pIBonusDamMod + ptrplr->_pDamageMod
				;
				if ((ptrplr->_pClass == '\0') &&
					 (cVar1 = ptrplr->_pLevel, lVar3 = random__Fil(6,100), lVar3 < (int)cVar1)) {
					dir = dir * 2;
				}
				dwDam = dir << 6;
				if ((ptrplr->_pIFlags & 2U) != 0) {
					lVar3 = random__Fil(7,(int)dwDam >> 3);
					dir = ptrplr->_pHitPoints + lVar3;
					ptrplr->_pHitPoints = dir;
					if (ptrplr->_pMaxHP < dir) {
						ptrplr->_pHitPoints = ptrplr->_pMaxHP;
					}
					dir = ptrplr->_pHPBase + lVar3;
					ptrplr->_pHPBase = dir;
					if (ptrplr->_pMaxHPBase < dir) {
						ptrplr->_pHPBase = ptrplr->_pMaxHPBase;
					}
					drawhpflag = '\x01';
				}
				pvVar4 = ismyplr__FP12PlayerStruct(ptrplr);
				if (pvVar4 != (void *)0x0) {
					NetSendCmdDamage__FUcUcUl('\x01',p,dwDam);
				}
				StartPlrHit__FiiUc((int)p,dwDam,'\0');
				uVar2 = '\x01';
			}
		}
	}
	else {
		uVar2 = '\0';
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$a0*/, int mx /*$a1*/, int my /*$a2*/)
 // line 2888, offset 0x8005c700
	/* begin block 1 */
		// Start line: 2889
		// Start offset: 0x8005C700
		// Variables:
	// 		int oi; // $a1
	/* end block 1 */
	// End offset: 0x8005C780
	// End Line: 2896

	/* begin block 2 */
		// Start line: 6204
	/* end block 2 */
	// End Line: 6205

uchar PlrHitObj__FP12PlayerStructii(PlayerStruct *ptrplr,int mx,int my)

{
	bool bVar1;
	uint uVar2;
	uint val;
	
	uVar2 = SEXT14(dung_map[mx * 0x6c + my].dObject);
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
 // line 2903, offset 0x8005c790
	/* begin block 1 */
		// Start line: 2904
		// Start offset: 0x8005C790
		// Variables:
	// 		int dx; // $s1
	// 		int dy; // $s2
	// 		int m; // $a1
	// 		char p; // $a1
	// 		unsigned char didhit; // $s3
	// 		int frame; // $a0
	/* end block 1 */
	// End offset: 0x8005CAFC
	// End Line: 2975

	/* begin block 2 */
		// Start line: 6237
	/* end block 2 */
	// End Line: 6238

int PM_DoAttack__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	byte bVar1;
	uchar uVar2;
	uchar uVar3;
	int sx;
	uint uVar4;
	byte p;
	uint m;
	int sy;
	
	sx = ptrplr->_pAnimFrame;
	uVar3 = '\0';
	if (((ptrplr->_pIFlags & 0x20000U) != 0) && (sx == 1)) {
		ptrplr->_pAnimFrame = 2;
	}
	if (((ptrplr->_pIFlags & 0x40000U) != 0) && ((sx == 1 || (sx == 3)))) {
		ptrplr->_pAnimFrame = ptrplr->_pAnimFrame + 1;
	}
	if (((ptrplr->_pIFlags & 0x80000U) != 0) && (((sx == 1 || (sx == 3)) || (sx == 5)))) {
		ptrplr->_pAnimFrame = ptrplr->_pAnimFrame + 1;
	}
	if (((ptrplr->_pIFlags & 0x100000U) != 0) && ((sx == 1 || (sx == 4)))) {
		ptrplr->_pAnimFrame = ptrplr->_pAnimFrame + 2;
	}
	sx = ptrplr->_pAnimFrame;
	if (sx == ptrplr->_pAFNum + -1) {
		PlaySfxLoc__Fiii(PS_SWING,(int)ptrplr->_px,(int)ptrplr->_py);
		sx = ptrplr->_pAnimFrame;
	}
	if (sx == ptrplr->_pAFNum) {
		sy = (int)ptrplr->_pVar7;
		sx = (int)ptrplr->_pVar6;
		uVar4 = SEXT24(dung_map[sx * 0x6c + sy].dMonster);
		if (uVar4 != 0) {
			m = uVar4 - 1;
			if ((int)uVar4 < 1) {
				m = ~uVar4;
			}
			uVar2 = CanTalkToMonst__Fi(m);
			if (uVar2 != '\0') {
				ptrplr->_pVar1 = 0;
				return 0;
			}
		}
		if ((ptrplr->_pIFlags & 0x10U) != 0) {
			AddMissile__Fiiiiiiciii(sx,sy,1,0,0,0x40,0,(uint)(ptrplr != plr),0,0);
		}
		if ((ptrplr->_pIFlags & 0x20U) != 0) {
			AddMissile__Fiiiiiiciii(sx,sy,2,0,0,0x40,0,(uint)(ptrplr != plr),0,0);
		}
		uVar4 = SEXT24(dung_map[sx * 0x6c + sy].dMonster);
		if (uVar4 == 0) {
			bVar1 = dung_map[sx * 0x6c + sy].dPlayer;
			if ((bVar1 == 0) || (FriendlyMode != '\0')) {
				if ('\0' < dung_map[sx * 0x6c + sy].dObject) {
					uVar3 = PlrHitObj__FP12PlayerStructii(ptrplr,sx,sy);
				}
			}
			else {
				p = bVar1 - 1;
				if ((char)bVar1 < '\x01') {
					p = ~bVar1;
				}
				uVar3 = PlrHitPlr__FP12PlayerStructc(ptrplr,p);
			}
		}
		else {
			m = uVar4 - 1;
			if ((int)uVar4 < 1) {
				m = ~uVar4;
			}
			uVar3 = PlrHitMonst__FP12PlayerStructi(ptrplr,m);
		}
		if ((uVar3 != '\0') && (uVar3 = WeaponDur__FP12PlayerStructi(ptrplr,0x1e), uVar3 != '\0'))
		goto LAB_8005cae4;
	}
	if (ptrplr->_pAnimFrame != ptrplr->_pAFrames) {
		return 0;
	}
LAB_8005cae4:
	StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
	ClearPlrPVars__FP12PlayerStruct(ptrplr);
	return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 2982, offset 0x8005cb1c
	/* begin block 1 */
		// Start line: 2983
		// Start offset: 0x8005CB1C
		// Variables:
	// 		int mistype; // $t0
	/* end block 1 */
	// End offset: 0x8005CC08
	// End Line: 3004

	/* begin block 2 */
		// Start line: 6409
	/* end block 2 */
	// End Line: 6410

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
		PlaySfxLoc__Fiii(PS_BFIRE,(int)ptrplr->_px,(int)ptrplr->_py);
		uVar1 = WeaponDur__FP12PlayerStructi(ptrplr,0x28);
		if (uVar1 != '\0') goto LAB_8005cbf0;
	}
	if (ptrplr->_pAnimFrame < ptrplr->_pAFrames) {
		return 0;
	}
LAB_8005cbf0:
	StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
	ClearPlrPVars__FP12PlayerStruct(ptrplr);
	return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3011, offset 0x8005cc1c
	/* begin block 1 */
		// Start line: 3012
		// Start offset: 0x8005CC1C
	/* end block 1 */
	// End offset: 0x8005CCC8
	// End Line: 3034

	/* begin block 2 */
		// Start line: 6467
	/* end block 2 */
	// End Line: 6468

void ShieldDur__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	int iVar2;
	int iVar3;
	
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if (pvVar1 == (void *)0x0) {
		if (ptrplr->InvBody[4]._itype == 5) {
			iVar3 = ptrplr->InvBody[4]._iDurability;
			iVar2 = iVar3 + -1;
			if (iVar3 == 0xff) {
				return;
			}
			ptrplr->InvBody[4]._iDurability = iVar2;
			if (iVar2 == 0) {
				NetSendCmdDelItem__FUcUc('\x01','\x04');
				ptrplr->InvBody[4]._itype = -1;
				CalcPlrInv__FP12PlayerStructUc(ptrplr,'\x01');
			}
		}
		if (((ptrplr->InvBody[5]._itype == 5) &&
				(iVar3 = ptrplr->InvBody[5]._iDurability, iVar2 = iVar3 + -1, iVar3 != 0xff)) &&
			 (ptrplr->InvBody[5]._iDurability = iVar2, iVar2 == 0)) {
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
 // line 3042, offset 0x8005ccdc
	/* begin block 1 */
		// Start line: 3043
		// Start offset: 0x8005CCDC
	/* end block 1 */
	// End offset: 0x8005CD68
	// End Line: 3055

	/* begin block 2 */
		// Start line: 6529
	/* end block 2 */
	// End Line: 6530

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
		lVar2 = random__Fil(3,10);
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
// void /*$ra*/ do_spell_anim__FiiiP12PlayerStruct(int aframe /*$s6*/, int spell /*$s1*/, int clss /*$s3*/, struct PlayerStruct *ptrplr /*$a3*/)
 // line 3058, offset 0x8005cd7c
	/* begin block 1 */
		// Start line: 3059
		// Start offset: 0x8005CD7C
		// Variables:
	// 		struct CPlayer *test; // $s0
	// 		int OtPos; // $fp
	// 		int ScrX; // $s7
	// 		int ScrY; // $s2
	// 		struct TextDat *missdat; // $s4
	// 		struct TextDat *objdat; // $s0
	// 		int otad; // $s5
	// 		struct POLY_FT4 *FT4a; // stack offset -120
	// 		struct POLY_FT4 *FT4b; // stack offset -116
	// 		struct POLY_FT4 *FT4c; // stack offset -112
	// 		int frame; // $s3
	// 		unsigned int rnd; // $v0
	// 		unsigned int rot; // $s2
	/* end block 1 */
	// End offset: 0x8005DD0C
	// End Line: 3223

	/* begin block 2 */
		// Start line: 6561
	/* end block 2 */
	// End Line: 6562

void do_spell_anim__FiiiP12PlayerStruct(int aframe,int spell,int clss,PlayerStruct *ptrplr)

{
	short sVar1;
	CPlayer *this;
	int Creature;
	int X;
	int b;
	ulong uVar2;
	TextDat *this_00;
	ulong *puVar3;
	short sVar4;
	int Y;
	uint Frm;
	int iVar5;
	uchar uVar6;
	int iVar7;
	POLY_FT4 *local_78;
	POLY_FT4 *local_74;
	POLY_FT4 *local_70 [18];
	
	this = GetPlayer__7CPlayeri((uint)(ptrplr != plr));
	Creature = GetLastOtPos__C7CPlayer(this);
	iVar7 = Creature + 1;
	X = GetLastScrX__C7CPlayer(this);
	b = GetLastScrY__C7CPlayer(this);
	this_00 = MissDat;
	Y = b + -2;
	iVar5 = 0;
	sVar4 = (short)aframe;
	switch(spell) {
	case 1:
	case 6:
	case 0xc:
	case 0xf:
	case 0x14:
	case 0x18:
	case 0x1d:
		Frm = GetFrNum__7TextDatiiii(MissDat,2,0,0,aframe % 0xb);
		PRIM_GetPrim__FPP8POLY_FT4(&local_78);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_78,Frm & 0xffff,X + 0x10,Y,0,0);
		local_78->r0 = -0x80;
		local_78->g0 = -0x80;
		local_78->b0 = -0x80;
		local_78->code = local_78->code | 2;
		local_78->code = local_78->code & 0xfe;
		uVar2 = GU_GetRnd();
		local_78->y0 = local_78->y0 + (0x1a - ((ushort)uVar2 & 0xf)) + sVar4 * -2;
		local_78->y1 = local_78->y1 + (0x1a - ((ushort)(uVar2 >> 4) & 0xf)) + sVar4 * -2;
		Creature = (aframe * 0x31) / 10;
		Frm = Creature + 8U & 0x3f;
		X = veclenx__Fii(0x18,Frm);
		local_78->x1 = local_78->x0 + (short)X;
		X = veclenx__Fii(0x18,Frm);
		local_78->x3 = local_78->x2 + (short)X;
		X = veclenx__Fii(0x18,Creature);
		local_78->x0 = local_78->x0 + (short)X;
		X = veclenx__Fii(0x18,Creature);
		local_78->x2 = local_78->x2 + (short)X;
		X = vecleny__Fii(0xc,Creature);
		local_78->y0 = local_78->y0 + (short)X;
		X = vecleny__Fii(0xc,Creature);
		local_78->y2 = local_78->y2 + (short)X;
		X = vecleny__Fii(0xc,Frm);
		local_78->y1 = local_78->y1 + (short)X;
		X = vecleny__Fii(0xc,Frm);
		local_78->y3 = local_78->y3 + (short)X;
		Creature = vecleny__Fii(0xc,Creature);
		if (Creature < 0) {
			iVar5 = -1;
		}
		puVar3 = ThisOt + iVar7 + iVar5;
		local_78->tag = local_78->tag & 0xff000000 | *puVar3 & 0xffffff;
		Frm = *puVar3;
		local_74 = local_78;
LAB_8005d4f8:
		*puVar3 = Frm & 0xff000000 | (uint)local_74 & 0xffffff;
		return;
	case 2:
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
		if (clss == 1) {
			if (leveltype == '\0') {
				Y = (int)((ulonglong)((longlong)aframe * 0x2e8ba2e9) >> 0x20);
				Creature = 0;
			}
			else {
				Y = (int)((ulonglong)((longlong)aframe * 0x2e8ba2e9) >> 0x20);
				Creature = 0xc;
			}
			Frm = GetFrNum__7TextDatiiii
											(MissDat,Creature,0,0,aframe + ((Y >> 1) - (aframe >> 0x1f)) * -0xb);
			PRIM_GetPrim__FPP8POLY_FT4(&local_78);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_78,Frm & 0xffff,X,b + -10,0,0);
			uVar6 = (uchar)(aframe * 0x20);
			local_78->tpage = local_78->tpage | 0x20;
			if (0xff < aframe * 0x20) {
				uVar6 = (char)aframe * -0x20 + -0x70;
			}
			local_78->r0 = uVar6;
			local_78->g0 = uVar6;
			local_78->b0 = uVar6;
			local_78->code = local_78->code | 2;
			local_78->code = local_78->code | 1;
			Frm = (int)local_78->x1 - (int)local_78->x0;
			sVar4 = (short)((int)(Frm + (Frm >> 0x1f)) >> 1);
			local_78->x3 = local_78->x3 + -1 + sVar4;
			local_78->x0 = local_78->x0 - sVar4;
			local_78->x1 = local_78->x1 + -1 + sVar4;
			local_78->x2 = local_78->x2 - sVar4;
			Frm = (int)local_78->y2 - (int)local_78->y0;
			sVar4 = (short)((int)(Frm + (Frm >> 0x1f)) >> 1);
			local_78->y0 = local_78->y0 - sVar4;
			local_78->y1 = local_78->y1 - sVar4;
			local_78->y2 = local_78->y2 + -1 + sVar4;
			local_78->y3 = local_78->y3 + -1 + sVar4;
			puVar3 = ThisOt + iVar7;
			local_78->tag = local_78->tag & 0xff000000 | puVar3[-1] & 0xffffff;
			puVar3[-1] = puVar3[-1] & 0xff000000 | (uint)local_78 & 0xffffff;
			return;
		}
		if (clss < 2) {
			if (clss == 0) {
				this_00 = GM_UseTexData__Fi(0);
				b = aframe % 9 + 0xcc0102;
				PRIM_GetPrim__FPP8POLY_FT4(&local_78);
				PRIM_GetPrim__FPP8POLY_FT4(&local_74);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_78,b,X + 2,Y,0,0);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_74,b,X + 2,Y,0,0);
				local_78->r0 = -0x70;
				local_78->g0 = -0x70;
				local_78->b0 = 'p';
				local_78->code = local_78->code & 0xfd;
				local_78->code = local_78->code & 0xfe;
				local_74->r0 = -0x70;
				local_74->g0 = -0x70;
				local_74->b0 = 'p';
				b = aframe * -2 + 0x20;
				local_74->code = local_74->code | 2;
				Frm = (aframe * 0x31) / 5 & 0x3f;
				local_74->code = local_74->code & 0xfe;
				X = veclenx__Fii(b,Frm);
				sVar1 = (short)(aframe / 2);
				local_78->x0 = local_78->x0 + ((short)X - sVar1);
				X = veclenx__Fii(b,Frm);
				local_78->x2 = local_78->x2 + ((short)X - sVar1);
				X = veclenx__Fii(b,Frm);
				local_78->x1 = local_78->x1 + ((short)X - sVar1);
				X = veclenx__Fii(b,Frm);
				aframe = 0x10 - aframe;
				local_78->x3 = local_78->x3 + ((short)X - sVar1);
				X = vecleny__Fii(aframe,Frm);
				local_78->y0 = local_78->y0 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				local_78->y2 = local_78->y2 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				local_78->y1 = local_78->y1 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				local_78->y3 = local_78->y3 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				if (X < 0) {
					iVar5 = -1;
				}
				Frm = Frm + 4 & 0x3f;
				puVar3 = ThisOt + iVar7 + iVar5;
				local_78->tag = local_78->tag & 0xff000000 | *puVar3 & 0xffffff;
				*puVar3 = *puVar3 & 0xff000000 | (uint)local_78 & 0xffffff;
				X = veclenx__Fii(b,Frm);
				local_74->x0 = local_74->x0 + ((short)X - sVar1);
				X = veclenx__Fii(b,Frm);
				local_74->x2 = local_74->x2 + ((short)X - sVar1);
				X = veclenx__Fii(b,Frm);
				local_74->x1 = local_74->x1 + ((short)X - sVar1);
				X = veclenx__Fii(b,Frm);
				local_74->x3 = local_74->x3 + ((short)X - sVar1);
				X = vecleny__Fii(aframe,Frm);
				local_74->y0 = local_74->y0 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				local_74->y2 = local_74->y2 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				local_74->y1 = local_74->y1 + (short)X + sVar4 * -2;
				X = vecleny__Fii(aframe,Frm);
				local_74->y3 = local_74->y3 + (short)X + sVar4 * -2;
				b = vecleny__Fii(aframe,Frm);
				X = iVar7 + iVar5;
				if (b < 0) {
					X = Creature;
				}
				puVar3 = ThisOt + X;
				local_74->tag = local_74->tag & 0xff000000 | *puVar3 & 0xffffff;
				Frm = *puVar3;
				goto LAB_8005d4f8;
			}
		}
		else {
			if (clss == 2) {
				Frm = GetFrNum__7TextDatiiii(MissDat,(uint)(leveltype == '\0'),0,0,aframe);
				Frm = Frm & 0xffff;
				PRIM_GetPrim__FPP8POLY_FT4(&local_78);
				PRIM_GetPrim__FPP8POLY_FT4(&local_74);
				PRIM_GetPrim__FPP8POLY_FT4(local_70);
				Y = Y - (aframe * 2 + -0x10);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_78,Frm,X,Y,0,1);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_74,Frm,X,Y,0,1);
				PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_70[0],Frm,X,Y,0,1);
				local_78->r0 = ' ';
				local_78->g0 = '@';
				local_78->b0 = -0x40;
				local_74->r0 = ' ';
				local_74->g0 = '@';
				local_74->b0 = -0x40;
				local_70[0]->r0 = ' ';
				local_70[0]->g0 = '@';
				local_70[0]->b0 = -0x40;
				local_78->code = local_78->code | 2;
				local_78->code = local_78->code & 0xfe;
				local_74->code = local_74->code | 2;
				local_74->code = local_74->code & 0xfe;
				local_70[0]->code = local_70[0]->code | 2;
				b = aframe * 2 + 0x10;
				local_70[0]->code = local_70[0]->code & 0xfe;
				sVar4 = (short)X;
				local_78->x1 = sVar4;
				Creature = veclenx__Fii(0xe,b);
				local_78->x0 = local_78->x0 + (short)Creature;
				Creature = veclenx__Fii(0xe,b);
				X = 0xd - aframe;
				Frm = aframe * -2 + 0x10U & 0x3f;
				local_78->x3 = sVar4;
				local_78->x2 = local_78->x2 + (short)Creature;
				local_78->y0 = local_78->y0 + (short)((((int)local_78->y2 - (int)local_78->y0) * X) / 0xd);
				local_78->y1 = local_78->y1 + (short)((((int)local_78->y3 - (int)local_78->y1) * X) / 0xd);
				local_74->x0 = sVar4;
				Creature = veclenx__Fii(0xe,Frm);
				local_74->x1 = local_74->x1 + (short)Creature;
				Creature = veclenx__Fii(0xe,Frm);
				local_74->x2 = sVar4;
				local_74->x3 = local_74->x3 + (short)Creature;
				local_74->y0 = local_74->y0 + (short)((((int)local_74->y2 - (int)local_74->y0) * X) / 0xd);
				local_74->y1 = local_74->y1 + (short)((((int)local_74->y3 - (int)local_74->y1) * X) / 0xd);
				Creature = veclenx__Fii(0xe,b);
				local_70[0]->x0 = local_70[0]->x0 + (short)Creature;
				Creature = veclenx__Fii(0xe,Frm);
				local_70[0]->x1 = local_70[0]->x1 + (short)Creature;
				Creature = veclenx__Fii(0xe,Frm);
				local_70[0]->x3 = local_70[0]->x3 + (short)Creature;
				Creature = veclenx__Fii(0xe,b);
				local_70[0]->x2 = local_70[0]->x2 + (short)Creature;
				local_70[0]->y0 =
						 local_70[0]->y0 + (short)((((int)local_70[0]->y2 - (int)local_70[0]->y0) * X) / 0xd);
				local_70[0]->y1 =
						 local_70[0]->y1 + (short)((((int)local_70[0]->y3 - (int)local_70[0]->y1) * X) / 0xd);
				puVar3 = ThisOt + iVar7;
				local_78->tag = local_78->tag & 0xff000000 | puVar3[-1] & 0xffffff;
				puVar3[-1] = puVar3[-1] & 0xff000000 | (uint)local_78 & 0xffffff;
				local_74->tag = local_74->tag & 0xff000000 | (uint)local_78 & 0xffffff;
				puVar3[-1] = puVar3[-1] & 0xff000000 | (uint)local_74 & 0xffffff;
				local_70[0]->tag = local_70[0]->tag & 0xff000000 | *puVar3 & 0xffffff;
				*puVar3 = *puVar3 & 0xff000000 | (uint)local_70[0] & 0xffffff;
				return;
			}
		}
		Creature = 0xc82;
		break;
	case 3:
	case 4:
	case 0xe:
	case 0x12:
	case 0x1e:
		this_00 = GM_UseTexData__Fi(0xcc);
		PRIM_GetPrim__FPP8POLY_FT4(&local_78);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_78,(aframe << 1) / 5 + 0xcc0000,X,b + 2,0,0);
		local_78->r0 = -0x80;
		local_78->g0 = -0x80;
		local_78->b0 = -0x80;
		local_78->code = local_78->code & 0xfd;
		local_78->code = local_78->code & 0xfe;
		puVar3 = ThisOt + iVar7;
		local_78->tag = local_78->tag & 0xff000000 | *puVar3 & 0xffffff;
		*puVar3 = *puVar3 & 0xff000000 | (uint)local_78 & 0xffffff;
		GM_FinishedUsing__FP7TextDat(this_00);
		return;
	default:
		Creature = 0xc96;
	}
	DBG_Error((char *)0x0,"source/PLAYER.cpp",Creature);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3229, offset 0x8005dd40
	/* begin block 1 */
		// Start line: 3230
		// Start offset: 0x8005DD40
	/* end block 1 */
	// End offset: 0x8005E09C
	// End Line: 3291

	/* begin block 2 */
		// Start line: 7058
	/* end block 2 */
	// End Line: 7059

int PM_DoSpell__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	bool bVar1;
	short sVar2;
	uint uVar3;
	char cVar4;
	int aframe;
	uint uVar5;
	uint uVar6;
	
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
				cVar4 = ptrplr->_pRSplType;
				if (cVar4 == '\x02') {
					uVar5 = *(uint *)((int)&ptrplr->_pScrlSpells + 4);
					uVar3 = ptrplr->_pRSpell - 1;
					if ((int)(uVar3 * 0x4000000) < 0) {
						uVar6 = uVar5 >> (uVar3 & 0x1f);
					}
					else {
						uVar6 = *(uint *)&ptrplr->_pScrlSpells >> (uVar3 & 0x1f);
						if (uVar3 * 0x4000000 != 0) {
							uVar6 = uVar6 | uVar5 << (-uVar3 & 0x1f);
						}
					}
					if ((uVar6 & 1) == 0) {
						ptrplr->_pRSpell = -1;
						ptrplr->_pRSplType = '\x04';
					}
					cVar4 = ptrplr->_pRSplType;
				}
				if (cVar4 == '\x03') {
					uVar5 = *(uint *)((int)&ptrplr->_pISpells + 4);
					uVar3 = ptrplr->_pRSpell - 1;
					if ((int)(uVar3 * 0x4000000) < 0) {
						uVar6 = uVar5 >> (uVar3 & 0x1f);
					}
					else {
						uVar6 = *(uint *)&ptrplr->_pISpells >> (uVar3 & 0x1f);
						if (uVar3 * 0x4000000 != 0) {
							uVar6 = uVar6 | uVar5 << (-uVar3 & 0x1f);
						}
					}
					if ((uVar6 & 1) == 0) {
						ptrplr->_pRSpell = -1;
						ptrplr->_pRSplType = '\x04';
					}
				}
			}
		}
	}
	cVar4 = ptrplr->_pSpell;
	if (cVar4 == '\x17') {
		if (ptrplr->_pVar8 == 1) {
			TeleStart__FP12PlayerStruct(ptrplr);
		}
		cVar4 = ptrplr->_pSpell;
	}
	if ((cVar4 == '\n') && (ptrplr->_pVar8 == 1)) {
		PhaseStart__FP12PlayerStruct(ptrplr);
	}
	cVar4 = ptrplr->_pSpell;
	if (cVar4 == '\x13') {
		if (ptrplr->_pVar8 == 1) {
			InvisStart__FP12PlayerStruct(ptrplr);
		}
		cVar4 = ptrplr->_pSpell;
	}
	if ((cVar4 == '\x02') && (ptrplr->_pVar8 == 1)) {
		HealStart__FP12PlayerStruct(ptrplr);
	}
	if ((ptrplr->_pSpell == '\"') && (ptrplr->_pVar8 == 1)) {
		HealotherStart__FP12PlayerStruct(ptrplr);
	}
	sVar2 = ptrplr->_pVar8 + 1;
	bVar1 = leveltype == '\0';
	ptrplr->_pVar8 = sVar2;
	if (bVar1) {
		if ((int)sVar2 <= ptrplr->_pSFrames) {
			return 0;
		}
		aframe = 6;
		if (ptrplr != plr) {
			aframe = 7;
		}
		PostGamePad__Fiiii(aframe,0,0,0);
		StartWalkStand__FP12PlayerStruct(ptrplr);
	}
	else {
		if (ptrplr->_pAnimFrame != ptrplr->_pSFrames) {
			return 0;
		}
		aframe = 6;
		if (ptrplr != plr) {
			aframe = 7;
		}
		PostGamePad__Fiiii(aframe,0,0,0);
		StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
	}
	ClearPlrPVars__FP12PlayerStruct(ptrplr);
	if (ptrplr->_pSpell != '\x13') {
		if (ptrplr->_pSpell == '\n') {
			return 1;
		}
		PhaseEnd__FP12PlayerStruct(ptrplr);
	}
	return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3296, offset 0x8005e0b0
	/* begin block 1 */
		// Start line: 3297
		// Start offset: 0x8005E0B0
		// Variables:
	// 		struct PlayerStruct *p; // $s2
	// 		int a; // $a0
	// 		struct ItemStruct *pi; // $s1
	/* end block 1 */
	// End offset: 0x8005E190
	// End Line: 3320

	/* begin block 2 */
		// Start line: 7194
	/* end block 2 */
	// End Line: 7195

void ArmorDur__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	long lVar2;
	int iVar3;
	uchar bLoc;
	ItemStruct *pIVar4;
	
	pvVar1 = ismyplr__FP12PlayerStruct(ptrplr);
	if ((pvVar1 == (void *)0x0) &&
		 ((ptrplr->InvBody[6]._itype != -1 || (ptrplr->InvBody[0]._itype != -1)))) {
		lVar2 = random__Fil(8,3);
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
		iVar3 = pIVar4->_iDurability + -1;
		if ((pIVar4->_iDurability != 0xff) && (pIVar4->_iDurability = iVar3, iVar3 == 0)) {
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
 // line 3326, offset 0x8005e1ac
	/* begin block 1 */
		// Start line: 3327
		// Start offset: 0x8005E1AC
		// Variables:
	// 		int rv; // $v0
	/* end block 1 */
	// End offset: 0x8005E214
	// End Line: 3343

	/* begin block 2 */
		// Start line: 7254
	/* end block 2 */
	// End Line: 7255

int PM_DoGotHit__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	long lVar1;
	int iVar2;
	
	if ((int)ptrplr->_pVar8 == ptrplr->_pHFrames) {
		StartStand__FP12PlayerStructi(ptrplr,(int)ptrplr->_pdir);
		ClearPlrPVars__FP12PlayerStruct(ptrplr);
		lVar1 = random__Fil(3,4);
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
	return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 3349, offset 0x8005e228
	/* begin block 1 */
		// Start line: 3350
		// Start offset: 0x8005E228
	/* end block 1 */
	// End offset: 0x8005E354
	// End Line: 3375

	/* begin block 2 */
		// Start line: 7300
	/* end block 2 */
	// End Line: 7301

int PM_DoDeath__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	void *pvVar1;
	
	if (ptrplr->_pDFrames << 1 <= (int)ptrplr->_pVar8) {
		if ((1 < deathdelay) && (pvVar1 = ismyplr__FP12PlayerStruct(ptrplr), pvVar1 != (void *)0x0)) {
			deathdelay = deathdelay + -1;
			if (deathdelay == 1) {
				ptrplr->plractive = '\0';
				gbActivePlayers = gbActivePlayers + -1;
				if (gbActivePlayers == '\0') {
					deathflag = '\x01';
				}
				if (gbMaxPlayers == '\x01') {
					gamemenu_on__Fv();
				}
			}
		}
		ptrplr->_pAnimDelay = 10000;
		ptrplr->_pAnimFrame = ptrplr->_pAnimLen;
		dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dFlags =
				 dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dFlags | 4;
	}
	if (ptrplr->_pVar8 < 100) {
		ptrplr->_pVar8 = ptrplr->_pVar8 + 1;
	}
	return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3381, offset 0x8005e368
	/* begin block 1 */
		// Start line: 3382
		// Start offset: 0x8005E368
	/* end block 1 */
	// End offset: 0x8005E368
	// End Line: 3383

	/* begin block 2 */
		// Start line: 7368
	/* end block 2 */
	// End Line: 7369

int PM_DoNewLvl__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s2*/)
 // line 3389, offset 0x8005e370
	/* begin block 1 */
		// Start line: 3390
		// Start offset: 0x8005E370
		// Variables:
	// 		int i; // $s1
	// 		int d; // $s1
	// 		int oi; // $s0
	/* end block 1 */
	// End offset: 0x8005E794
	// End Line: 3697

	/* begin block 2 */
		// Start line: 7383
	/* end block 2 */
	// End Line: 7384

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
	d = options_pad;
	switch(((int)ptrplr->destAction + -9) * 0x1000000 >> 0x18) {
	case 0:
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)ptrplr->destParam1,
														(int)ptrplr->destParam2);
		StartAttack__FP12PlayerStructi(ptrplr,d);
		d = options_pad;
		break;
	case 3:
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)ptrplr->destParam1,
														(int)ptrplr->destParam2);
		StartSpell__FP12PlayerStructiii(ptrplr,d,(int)ptrplr->destParam1,(int)ptrplr->destParam2);
		bVar1 = ptrplr->destParam3;
		goto LAB_8005e570;
	case 4:
		d = (int)ptrplr->destParam1;
		goto LAB_8005e5a0;
	case 5:
		d = (int)ptrplr->destParam1;
		TryDisarm__FP12PlayerStructi(ptrplr,d);
LAB_8005e5a0:
		OperateObject__FP12PlayerStructiUc(ptrplr,d,'\0');
		d = options_pad;
		break;
	case 6:
		uVar2 = SEXT14(ptrplr->destParam1);
		abs((int)ptrplr->_px - (int)item[uVar2]._ix);
		abs((int)ptrplr->_py - (int)item[uVar2]._iy);
		d = options_pad;
		if (item[uVar2]._iRequest == '\0') {
			NetSendCmdGItem__FUcUcUcUcUc('\x01','\'',(uchar)myplr,(uchar)myplr,uVar2 & 0xff);
			item[uVar2]._iRequest = '\x01';
			d = options_pad;
		}
		break;
	case 7:
		uVar2 = SEXT14(ptrplr->destParam1);
		abs((int)ptrplr->_px - (int)item[uVar2]._ix);
		abs((int)ptrplr->_py - (int)item[uVar2]._iy);
		NetSendCmdGItem__FUcUcUcUcUc('\x01','(',(uchar)myplr,(uchar)myplr,uVar2 & 0xff);
		d = options_pad;
		break;
	case 8:
		d = (int)ptrplr->destParam1;
		if (leveltype == '\0') {
			TalkToTowner__FP12PlayerStructi(ptrplr,d);
		}
		else {
			if ((monster[d].mtalkmsg != 0) && (monster[d].mtalkmsg != 0x24)) {
				TalktoMonster__Fi(d);
			}
		}
		if ((qtextflag != '\0') || (d = -1, stextflag != '\0')) {
			d = plrind__FP12PlayerStruct(ptrplr);
		}
		break;
	case 9:
		d = options_pad;
		if (object[(int)ptrplr->destParam1]._oBreak != '\x01') {
			OperateObject__FP12PlayerStructiUc(ptrplr,(int)ptrplr->destParam1,'\x01');
			d = options_pad;
		}
		break;
	case 0xf:
		cy = (int)ptrplr->destParam1;
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)monster[cy]._mfutx,
														(int)monster[cy]._mfuty);
		pnum = plrind__FP12PlayerStruct(ptrplr);
		cx = (int)monster[cy]._mfutx;
		cy = (int)monster[cy]._mfuty;
		goto LAB_8005e55c;
	case 0x10:
		cy = (int)ptrplr->destParam1;
		d = GetDirection__Fiiii((int)ptrplr->_px,(int)ptrplr->_py,(int)plr[cy]._pfutx,
														(int)plr[cy]._pfuty);
		pnum = plrind__FP12PlayerStruct(ptrplr);
		cx = (int)plr[cy]._pfutx;
		cy = (int)plr[cy]._pfuty;
LAB_8005e55c:
		StartSpell__Fiiii(pnum,d,cx,cy);
		bVar1 = ptrplr->destParam2;
LAB_8005e570:
		ptrplr->_pVar4 = (short)((int)((uint)bVar1 << 0x18) >> 0x18);
		d = options_pad;
		break;
	case 0x11:
		StartSpell__Fiiii((uint)(ptrplr != plr),(int)ptrplr->destParam3,(int)ptrplr->destParam1,
											(int)ptrplr->destParam2);
		ptrplr->_pVar3 = (short)ptrplr->destParam3;
		ptrplr->_pVar4 = (short)ptrplr->destParam4;
		d = options_pad;
	}
	options_pad = d;
	ptrplr->destAction = -1;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PlrDeathModeOK__Fi(int p /*$a0*/)
 // line 3708, offset 0x8005e7b0
	/* begin block 1 */
		// Start line: 3709
		// Start offset: 0x8005E7B0
	/* end block 1 */
	// End offset: 0x8005E810
	// End Line: 3717

	/* begin block 2 */
		// Start line: 8025
	/* end block 2 */
	// End Line: 8026

uchar PlrDeathModeOK__Fi(int p)

{
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	if (p == myplr) {
		iVar2 = plr[p]._pmode;
		if ((iVar2 == 8) || (iVar2 == 0xb)) {
			bVar1 = true;
		}
		else {
			bVar1 = iVar2 == 10;
		}
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ValidatePlayer__Fv()
 // line 3723, offset 0x8005e818
	/* begin block 1 */
		// Start line: 3724
		// Start offset: 0x8005E818
		// Variables:
	// 		int i; // $a1
	// 		int gt; // $a3
	// 		int pc; // $v0
	// 		unsigned long msk; // $t2
	// 		unsigned long b; // $t6
	/* end block 1 */
	// End offset: 0x8005ECE8
	// End Line: 3762

	/* begin block 2 */
		// Start line: 8065
	/* end block 2 */
	// End Line: 8066

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ValidatePlayer__Fv(void)

{
	uint uVar1;
	char *pcVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	uint uVar7;
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
	iVar6 = 0;
	iVar3 = myplr * 0x23a8;
	iVar5 = 0;
	if (0 < plr[myplr]._pNumInv) {
		iVar4 = 0;
		do {
			if (*(short *)((int)&plr[myplr].InvList[0]._itype + iVar4) == 0xb) {
				if (5000 < *(int *)((int)&plr[myplr].InvList[0]._ivalue + iVar4)) {
					*(undefined4 *)((int)&plr[myplr].InvList[0]._ivalue + iVar4) = 5000;
				}
				iVar6 = iVar6 + *(int *)((int)&plr[0].InvList[0]._ivalue + iVar3);
			}
			iVar3 = iVar3 + 0x98;
			iVar5 = iVar5 + 1;
			iVar4 = iVar4 + 0x98;
		} while (iVar5 < plr[myplr]._pNumInv);
	}
	if (iVar6 != plr[myplr]._pGold) {
		plr[myplr]._pGold = iVar6;
	}
	iVar3 = (int)plr[myplr]._pClass;
	if ((&MaxStats)[iVar3 * 4] < (int)plr[myplr]._pBaseStr) {
		plr[myplr]._pBaseStr = (short)(&MaxStats)[iVar3 * 4];
	}
	if ((&INT_800dea00)[iVar3 * 4] < (int)plr[myplr]._pBaseMag) {
		plr[myplr]._pBaseMag = (short)(&INT_800dea00)[iVar3 * 4];
	}
	if ((&INT_800dea04)[iVar3 * 4] < (int)plr[myplr]._pBaseDex) {
		plr[myplr]._pBaseDex = (short)(&INT_800dea04)[iVar3 * 4];
	}
	iVar5 = 1;
	if (*(int *)(&DAT_800dea08 + iVar3 * 0x10) < (int)plr[myplr]._pBaseVit) {
		plr[myplr]._pBaseVit = (short)*(int *)(&DAT_800dea08 + iVar3 * 0x10);
	}
	iVar3 = 0x34;
	do {
		uVar1 = iVar5 - 1;
		if (*(int *)((int)&spelldata.sBookLvl + iVar3) != -1) {
			if ((int)(uVar1 * 0x4000000) < 0) {
				uVar7 = 1 << (uVar1 & 0x1f);
				uVar1 = 0;
			}
			else {
				uVar7 = 0 << (uVar1 & 0x1f);
				if (uVar1 * 0x4000000 != 0) {
					uVar7 = uVar7 | 1U >> (-uVar1 & 0x1f);
				}
				uVar1 = 1 << (uVar1 & 0x1f);
			}
			pcVar2 = (char *)(myplr * 0x23a8 + -0x7ff2147f + iVar5);
			uVar8 = uVar8 | uVar1;
			uVar9 = uVar9 | uVar7;
			if ('\x0f' < *pcVar2) {
				*pcVar2 = '\x0f';
			}
		}
		iVar6 = myplr;
		iVar5 = iVar5 + 1;
		iVar3 = iVar3 + 0x34;
	} while (iVar5 < 0x25);
	uVar1 = *(uint *)((int)&plr[myplr]._pMemSpells + 4);
	*(uint *)&plr[myplr]._pMemSpells = *(uint *)&plr[myplr]._pMemSpells & uVar8;
	*(uint *)((int)&plr[iVar6]._pMemSpells + 4) = uVar1 & uVar9;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3808, offset 0x8005ecf4
	/* begin block 1 */
		// Start line: 3809
		// Start offset: 0x8005ECF4
	/* end block 1 */
	// End offset: 0x8005ED88
	// End Line: 3826

	/* begin block 2 */
		// Start line: 8240
	/* end block 2 */
	// End Line: 8241

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
 // line 3834, offset 0x8005ed90
	/* begin block 1 */
		// Start line: 3835
		// Start offset: 0x8005ED90
		// Variables:
	// 		int raflag; // $s0
	// 		int pnum; // $s2
	// 		int tplayer; // $s4

		/* begin block 1.1 */
			// Start line: 3856
			// Start offset: 0x8005EE30

			/* begin block 1.1.1 */
				// Start line: 3856
				// Start offset: 0x8005EE40
				// Variables:
			// 		struct PlayerStruct *ptrplr; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8005F084
			// End Line: 3952
		/* end block 1.1 */
		// End offset: 0x8005F090
		// End Line: 3955
	/* end block 1 */
	// End offset: 0x8005F09C
	// End Line: 3956

	/* begin block 2 */
		// Start line: 8291
	/* end block 2 */
	// End Line: 8292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ProcessPlayers__Fv(void)

{
	int iVar1;
	uchar uVar2;
	int p;
	void *pvVar3;
	int iVar4;
	int iVar5;
	PlayerStruct *ptrplr;
	int iVar6;
	
	iVar1 = myplr;
	if (plr[myplr].pLvlLoad != '\0') {
		plr[myplr].pLvlLoad = plr[myplr].pLvlLoad + -1;
	}
	p = sfxdelay + -1;
	if ((0 < sfxdelay) && (sfxdelay = p, p == 0)) {
		sfxdelay = p;
		PlaySFX__Fi(sfxdnum);
	}
	p = 0;
	iVar6 = 0;
	while (p < 2) {
		ptrplr = (PlayerStruct *)((int)&plr[0]._pmode + iVar6);
		if (((&plr[0].plractive)[iVar6] != '\0') &&
			 (sel_data = p, myplr = p, pvVar3 = IsGameLoading__Fv(), pvVar3 == (void *)0x0)) {
			if (allspellsflag == (void *)0x0) {
				ValidatePlayer__Fv();
				CheckCheatStats__FP12PlayerStruct(ptrplr);
			}
			uVar2 = PlrDeathModeOK__Fi(p);
			if ((uVar2 == '\0') && (*(int *)((int)&plr[0]._pHitPoints + iVar6) >> 6 < 1)) {
				StartPlrKill__Fii(p,-1);
			}
			if (((*(uint *)((int)&plr[0]._pIFlags + iVar6) & 0x40) != 0) && (currlevel != '\0')) {
				*(int *)((int)&plr[0]._pHitPoints + iVar6) = *(int *)((int)&plr[0]._pHitPoints + iVar6) + -4
				;
				*(int *)((int)&plr[0]._pHPBase + iVar6) = *(int *)((int)&plr[0]._pHPBase + iVar6) + -4;
				if (*(int *)((int)&plr[0]._pHitPoints + iVar6) >> 6 < 1) {
					StartPlrKill__Fii(p,0);
				}
				drawhpflag = '\x01';
			}
			iVar5 = 0;
			if (((*(uint *)((int)&plr[0]._pIFlags + iVar6) & 0x8000000) != 0) &&
				 (iVar4 = *(int *)((int)&plr[0]._pManaBase + iVar6), 0 < iVar4)) {
				iVar5 = *(int *)((int)&plr[0]._pMana + iVar6);
				*(undefined4 *)((int)&plr[0]._pMana + iVar6) = 0;
				drawmanaflag = '\x01';
				*(int *)((int)&plr[0]._pManaBase + iVar6) = iVar4 - iVar5;
				iVar5 = 0;
			}
			do {
				switch(ptrplr->_pmode) {
				case 0:
					iVar5 = PM_DoStand__FP12PlayerStruct(ptrplr);
					break;
				case 1:
					iVar5 = PM_DoWalk__FP12PlayerStruct(ptrplr);
					break;
				case 4:
					iVar5 = PM_DoAttack__FP12PlayerStruct(ptrplr);
					break;
				case 5:
					iVar5 = PM_DoRangeAttack__FP12PlayerStruct(ptrplr);
					break;
				case 6:
					iVar5 = PM_DoBlock__FP12PlayerStruct(ptrplr);
					break;
				case 7:
					iVar5 = PM_DoGotHit__FP12PlayerStruct(ptrplr);
					break;
				case 8:
					iVar5 = PM_DoDeath__FP12PlayerStruct(ptrplr);
					break;
				case 9:
					iVar5 = PM_DoSpell__FP12PlayerStruct(ptrplr);
					break;
				case 10:
					iVar5 = PM_DoNewLvl__FP12PlayerStruct(ptrplr);
				}
				CheckNewPath__FP12PlayerStruct(ptrplr);
			} while (iVar5 != 0);
			iVar5 = *(int *)((int)&plr[0]._pAnimCnt + iVar6) + 1;
			*(int *)((int)&plr[0]._pAnimCnt + iVar6) = iVar5;
			if (*(int *)((int)&plr[0]._pAnimDelay + iVar6) < iVar5) {
				*(undefined4 *)((int)&plr[0]._pAnimCnt + iVar6) = 0;
				iVar5 = *(int *)((int)&plr[0]._pAnimFrame + iVar6) + 1;
				*(int *)((int)&plr[0]._pAnimFrame + iVar6) = iVar5;
				if (*(int *)((int)&plr[0]._pAnimLen + iVar6) < iVar5) {
					*(undefined4 *)((int)&plr[0]._pAnimFrame + iVar6) = 1;
				}
			}
		}
		iVar6 = iVar6 + 0x23a8;
		p = p + 1;
	}
	sel_data = iVar1;
	myplr = iVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 3961, offset 0x8005f0c4
	/* begin block 1 */
		// Start line: 3962
		// Start offset: 0x8005F0C4
	/* end block 1 */
	// End offset: 0x8005F0DC
	// End Line: 3965

	/* begin block 2 */
		// Start line: 8554
	/* end block 2 */
	// End Line: 8555

void ClrPlrPath__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	memset(ptrplr->walkpath,0xff,0x19);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr /*$s2*/, int px /*$a1*/, int py /*$a2*/)
 // line 3972, offset 0x8005f0ec
	/* begin block 1 */
		// Start line: 3973
		// Start offset: 0x8005F0EC
		// Variables:
	// 		int mi; // $v0
	// 		int p; // $s0
	// 		char bv; // $v0
	// 		struct map_info *dm; // $s1
	/* end block 1 */
	// End offset: 0x8005F278
	// End Line: 3998

	/* begin block 2 */
		// Start line: 8576
	/* end block 2 */
	// End Line: 8577

uchar PosOkPlayer__FP12PlayerStructii(PlayerStruct *ptrplr,int px,int py)

{
	uchar uVar1;
	byte bVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	map_info *pmVar6;
	
	pmVar6 = dung_map + py + px * 0x6c;
	if (pmVar6->dPiece != 0) {
		uVar1 = SolidLoc__Fii(px,py);
		if (uVar1 != '\0') {
			return '\0';
		}
		uVar3 = SEXT14(pmVar6->dPlayer);
		if (uVar3 != 0) {
			uVar5 = uVar3 - 1;
			if ((int)uVar3 < 1) {
				uVar5 = ~uVar3;
			}
			uVar3 = plrind__FP12PlayerStruct(ptrplr);
			if ((uVar5 != uVar3) && (plr[uVar5]._pHitPoints != 0)) {
				return '\0';
			}
		}
		iVar4 = (int)pmVar6->dMonster;
		if ((iVar4 == 0) ||
			 (((currlevel != '\0' && (0 < iVar4)) &&
				((int)((uint)(ushort)monster[iVar4 + -1]._mhitpoints << 0x10) >> 0x16 < 1)))) {
			bVar2 = pmVar6->dObject;
			if (bVar2 != 0) {
				if ((char)bVar2 < '\x01') {
					bVar2 = ~bVar2;
				}
				else {
					bVar2 = bVar2 - 1;
				}
				if (object[(int)(char)bVar2]._oSolidFlag != '\0') {
					return '\0';
				}
			}
			return '\x01';
		}
	}
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr /*$a0*/, int xx /*$a1*/, int yy /*$a2*/, unsigned char endspace /*$a3*/)
 // line 4004, offset 0x8005f294
	/* begin block 1 */
		// Start line: 4005
		// Start offset: 0x8005F294
	/* end block 1 */
	// End offset: 0x8005F294
	// End Line: 4005

	/* begin block 2 */
		// Start line: 8698
	/* end block 2 */
	// End Line: 8699

void MakePlrPath__FP12PlayerStructiiUc(PlayerStruct *ptrplr,int xx,int yy,uchar endspace)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckPlrSpell__Fv()
 // line 4062, offset 0x8005f29c
	/* begin block 1 */
		// Start line: 4063
		// Start offset: 0x8005F29C
		// Variables:
	// 		int sd; // $s0
	// 		struct Spell_Target *spl; // $s2
	// 		unsigned char addflag; // $a3
	// 		struct PlayerStruct *player; // $s1
	// 		int rspell; // $v1
	/* end block 1 */
	// End offset: 0x8005F688
	// End Line: 4152

	/* begin block 2 */
		// Start line: 8762
	/* end block 2 */
	// End Line: 8763

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CheckPlrSpell__Fv(void)

{
	char st;
	int iVar1;
	uchar uVar2;
	uint uVar3;
	uint uVar4;
	_125fake psfx;
	
	iVar1 = myplr;
	if (SplTarget[myplr].active == '\x01') {
		cursmx = ZEXT14(SplTarget[myplr]._sx);
		cursmy = ZEXT14(SplTarget[myplr]._sy);
	}
	else {
		cursmx = (int)plr[myplr]._px + (int)offset_x[(int)plr[myplr]._pdir];
		cursmy = (int)plr[myplr]._py + (int)offset_y[(int)plr[myplr]._pdir];
	}
	if (plr[myplr]._pRSpell == -1) {
		st = plr[myplr]._pClass;
		if (st == '\0') {
			psfx = PS_WARR34;
			goto LAB_8005f680;
		}
		if (st == '\x01') {
			psfx = PS_ROGUE34;
			goto LAB_8005f680;
		}
		psfx = PS_MAGE34;
	}
	else {
		if ((leveltype == '\0') && ((&spelldata)[plr[myplr]._pRSpell].sTownSpell == '\0')) {
			st = plr[myplr]._pClass;
			if (st == '\0') {
				psfx = PS_WARR27;
				goto LAB_8005f680;
			}
			if (st == '\x01') {
				psfx = PS_ROGUE27;
				goto LAB_8005f680;
			}
			psfx = PS_MAGE27;
		}
		else {
			st = plr[myplr]._pRSplType;
			if (st == '\x02') {
				uVar2 = UseScroll__Fv();
			}
			else {
				if (st < '\x03') {
					uVar2 = '\0';
					if (-1 < st) {
						uVar2 = CheckSpell__FiicUc(myplr,plr[myplr]._pRSpell,st,'\0');
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
					uVar3 = GetDirection__Fiiii((int)plr[iVar1]._px,(int)plr[iVar1]._py,cursmx,cursmy);
					uVar4 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
					NetSendCmdLocParam3__FUcUcUcUcUsUsUs
										('\x01','T',(uchar)cursmx,(uchar)cursmy,(uint)*(ushort *)&plr[iVar1]._pRSpell,
										 uVar3 & 0xffff,uVar4 & 0xffff);
					return;
				}
				if (((&_pcursmonst)[sel_data] != -1) && (SplTarget[iVar1].active == '\0')) {
					uVar3 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
					NetSendCmdParam3__FUcUcUsUsUs
										('\x01','\x16',*(ushort *)(&_pcursmonst + sel_data),
										 *(ushort *)&plr[iVar1]._pRSpell,uVar3 & 0xffff);
					return;
				}
				if ((&_pcursplr)[sel_data] != -1) {
					uVar3 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
					NetSendCmdParam3__FUcUcUsUsUs
										('\x01','\x17',(short)(&_pcursplr)[sel_data],*(ushort *)&plr[iVar1]._pRSpell,
										 uVar3 & 0xffff);
					return;
				}
				uVar3 = GetSpellLevel__Fii(myplr,plr[iVar1]._pRSpell);
				NetSendCmdLocParam2__FUcUcUcUcUsUs
									('\x01','\x0e',(uchar)cursmx,(uchar)cursmy,(uint)*(ushort *)&plr[iVar1]._pRSpell,
									 uVar3 & 0xffff);
				return;
			}
			if (plr[iVar1]._pRSplType != '\x01') {
				return;
			}
			st = plr[iVar1]._pClass;
			if (st == '\0') {
				psfx = PS_WARR35;
				goto LAB_8005f680;
			}
			if (st == '\x01') {
				psfx = PS_ROGUE35;
				goto LAB_8005f680;
			}
			psfx = PS_MAGE35;
		}
	}
	if (st != '\x02') {
		return;
	}
LAB_8005f680:
	PlaySFX__Fi(psfx);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s1*/)
 // line 4222, offset 0x8005f6a4
	/* begin block 1 */
		// Start line: 4223
		// Start offset: 0x8005F6A4

		/* begin block 1.1 */
			// Start line: 4232
			// Start offset: 0x8005F6D8

			/* begin block 1.1.1 */
				// Start line: 4232
				// Start offset: 0x8005F6F0
				// Variables:
			// 		int i; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8005F7B8
			// End Line: 4245
		/* end block 1.1 */
		// End offset: 0x8005F7B8
		// End Line: 4245
	/* end block 1 */
	// End offset: 0x8005F7B8
	// End Line: 4245

	/* begin block 2 */
		// Start line: 9084
	/* end block 2 */
	// End Line: 9085

void SyncInitPlrPos__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	uchar uVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	int *piVar5;
	
	if ((gbMaxPlayers != '\x01') && (iVar3 = 0, ptrplr->plrlevel == (uint)currlevel)) {
		piVar5 = &plryoff2;
		piVar4 = &plrxoff2;
		do {
			uVar1 = PosOkPlayer__FP12PlayerStructii
												(ptrplr,(int)ptrplr->_px + *piVar4,(int)ptrplr->_py + *piVar5);
			iVar2 = iVar3 << 2;
			if (uVar1 != '\0') goto LAB_8005f74c;
			piVar5 = piVar5 + 1;
			iVar3 = iVar3 + 1;
			piVar4 = piVar4 + 1;
		} while (iVar3 < 8);
		iVar2 = iVar3 * 4;
LAB_8005f74c:
		ptrplr->_px = ptrplr->_px + (short)*(undefined4 *)((int)&plrxoff2 + iVar2);
		ptrplr->_py = ptrplr->_py + (short)*(undefined4 *)((int)&plryoff2 + iVar2);
		iVar3 = plrind__FP12PlayerStruct(ptrplr);
		dung_map[(int)ptrplr->_px * 0x6c + (int)ptrplr->_py].dPlayer = (char)iVar3 + '\x01';
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$s0*/)
 // line 4250, offset 0x8005f7e0
	/* begin block 1 */
		// Start line: 4251
		// Start offset: 0x8005F7E0
	/* end block 1 */
	// End offset: 0x8005F7FC
	// End Line: 4256

	/* begin block 2 */
		// Start line: 9148
	/* end block 2 */
	// End Line: 9149

void SyncInitPlr__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	SetPlrAnims__FP12PlayerStruct(ptrplr);
	SyncInitPlrPos__FP12PlayerStruct(ptrplr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckStats__Fi(int p /*$a0*/)
 // line 4272, offset 0x8005f810
	/* begin block 1 */
		// Start line: 4273
		// Start offset: 0x8005F810
		// Variables:
	// 		int c; // $a0
	// 		int i; // $a2
	// 		struct PlayerStruct *player; // $a1
	/* end block 1 */
	// End offset: 0x8005F9A4
	// End Line: 4307

	/* begin block 2 */
		// Start line: 9194
	/* end block 2 */
	// End Line: 9195

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
			if ((&INT_800dea00)[iVar2 * 4] < (int)plr[p]._pBaseMag) {
				plr[p]._pBaseMag = (short)(&INT_800dea00)[iVar2 * 4];
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
					if ((&INT_800dea04)[iVar2 * 4] < (int)plr[p]._pBaseDex) {
						plr[p]._pBaseDex = (short)(&INT_800dea04)[iVar2 * 4];
					}
					else {
						if ((int)plr[p]._pBaseDex < 0) {
							plr[p]._pBaseDex = 0;
						}
					}
				}
				else {
					if (iVar3 == 3) {
						if (*(int *)(&DAT_800dea08 + iVar2 * 0x10) < (int)plr[p]._pBaseVit) {
							plr[p]._pBaseVit = (short)*(int *)(&DAT_800dea08 + iVar2 * 0x10);
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
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ModifyPlrStr__Fii(int p /*$a3*/, int l /*$a1*/)
 // line 4313, offset 0x8005f9ac
	/* begin block 1 */
		// Start line: 4314
		// Start offset: 0x8005F9AC
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x8005FAB8
	// End Line: 4326

	/* begin block 2 */
		// Start line: 9274
	/* end block 2 */
	// End Line: 9275

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
 // line 4333, offset 0x8005fac8
	/* begin block 1 */
		// Start line: 4334
		// Start offset: 0x8005FAC8
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x8005FBA4
	// End Line: 4351

	/* begin block 2 */
		// Start line: 9321
	/* end block 2 */
	// End Line: 9322

void ModifyPlrMag__Fii(int p,int l)

{
	char cVar1;
	short sVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	if ((&INT_800dea00)[(int)plr[p]._pClass * 4] < (int)plr[p]._pBaseMag + l) {
		l = (&INT_800dea00)[(int)plr[p]._pClass * 4] - (int)plr[p]._pBaseMag;
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
 // line 4358, offset 0x8005fbb4
	/* begin block 1 */
		// Start line: 4359
		// Start offset: 0x8005FBB4
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x8005FC84
	// End Line: 4369

	/* begin block 2 */
		// Start line: 9384
	/* end block 2 */
	// End Line: 9385

void ModifyPlrDex__Fii(int p,int l)

{
	short sVar1;
	short sVar2;
	
	sVar2 = (short)l;
	if ((&INT_800dea04)[(int)plr[p]._pClass * 4] < (int)plr[p]._pBaseDex + l) {
		sVar2 = (short)(&INT_800dea04)[(int)plr[p]._pClass * 4] - plr[p]._pBaseDex;
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
 // line 4376, offset 0x8005fc98
	/* begin block 1 */
		// Start line: 4377
		// Start offset: 0x8005FC98
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	// 		int ms; // $v1
	/* end block 1 */
	// End offset: 0x8005FD64
	// End Line: 4391

	/* begin block 2 */
		// Start line: 9430
	/* end block 2 */
	// End Line: 9431

void ModifyPlrVit__Fii(int p,int l)

{
	char cVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*(int *)(&DAT_800dea08 + (int)plr[p]._pClass * 0x10) < (int)plr[p]._pBaseVit + l) {
		l = *(int *)(&DAT_800dea08 + (int)plr[p]._pClass * 0x10) - (int)plr[p]._pBaseVit;
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
 // line 4398, offset 0x8005fd74
	/* begin block 1 */
		// Start line: 4399
		// Start offset: 0x8005FD74
	/* end block 1 */
	// End offset: 0x8005FDA8
	// End Line: 4404

	/* begin block 2 */
		// Start line: 9492
	/* end block 2 */
	// End Line: 9493

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
 // line 4410, offset 0x8005fdb8
	/* begin block 1 */
		// Start line: 4411
		// Start offset: 0x8005FDB8
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	/* end block 1 */
	// End offset: 0x8005FE80
	// End Line: 4420

	/* begin block 2 */
		// Start line: 9517
	/* end block 2 */
	// End Line: 9518

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
 // line 4426, offset 0x8005fe94
	/* begin block 1 */
		// Start line: 4427
		// Start offset: 0x8005FE94
		// Variables:
	// 		struct PlayerStruct *player; // $a2
	/* end block 1 */
	// End offset: 0x8005FEF4
	// End Line: 4436

	/* begin block 2 */
		// Start line: 9555
	/* end block 2 */
	// End Line: 9556

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
 // line 4442, offset 0x8005ff04
	/* begin block 1 */
		// Start line: 4443
		// Start offset: 0x8005FF04
		// Variables:
	// 		struct PlayerStruct *player; // $s0
	/* end block 1 */
	// End offset: 0x8005FFCC
	// End Line: 4452

	/* begin block 2 */
		// Start line: 9590
	/* end block 2 */
	// End Line: 9591

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
 // line 4458, offset 0x8005ffe0
	/* begin block 1 */
		// Start line: 4459
		// Start offset: 0x8005FFE0
		// Variables:
	// 		struct PlayerStruct *player; // $v1
	/* end block 1 */
	// End offset: 0x8006003C
	// End Line: 4468

	/* begin block 2 */
		// Start line: 9628
	/* end block 2 */
	// End Line: 9629

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
 // line 4474, offset 0x8006004c
	/* begin block 1 */
		// Start line: 4475
		// Start offset: 0x8006004C
	/* end block 1 */
	// End offset: 0x8006004C
	// End Line: 4478

	/* begin block 2 */
		// Start line: 9668
	/* end block 2 */
	// End Line: 9669

void InitDungMsgs__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	ptrplr->pDungMsgs = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayDungMsgs__Fv()
 // line 4484, offset 0x80060054
	/* begin block 1 */
		// Start line: 4485
		// Start offset: 0x80060054
		// Variables:
	// 		struct PlayerStruct *player; // $a0
	/* end block 1 */
	// End offset: 0x8006037C
	// End Line: 4552

	/* begin block 2 */
		// Start line: 9688
	/* end block 2 */
	// End Line: 9689

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
					if (((currlevel == '\x10') && (plr[myplr]._pLvlVisited[0xf] == '\0')) &&
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
						if (uVar2 != 2) goto LAB_800602cc;
					}
				}
				sfxdnum = iVar1;
LAB_800602cc:
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
					if (uVar2 != 2) goto LAB_80060240;
				}
			}
			sfxdnum = iVar1;
LAB_80060240:
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
				if (uVar2 != 2) goto LAB_800601a4;
			}
		}
		sfxdnum = iVar1;
LAB_800601a4:
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
			if (uVar2 != 2) goto LAB_80060114;
		}
	}
	sfxdnum = iVar1;
LAB_80060114:
	plr[myplr].pDungMsgs = plr[myplr].pDungMsgs | 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4554, offset 0x80060384
	/* begin block 1 */
		// Start line: 4555
		// Start offset: 0x80060384
	/* end block 1 */
	// End offset: 0x8006039C
	// End Line: 4555

	/* begin block 2 */
		// Start line: 9825
	/* end block 2 */
	// End Line: 9826

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
 // line 4555, offset 0x800603ac
	/* begin block 1 */
		// Start line: 4556
		// Start offset: 0x800603AC
	/* end block 1 */
	// End offset: 0x800603D8
	// End Line: 4556

	/* begin block 2 */
		// Start line: 9827
	/* end block 2 */
	// End Line: 9828

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
 // line 4556, offset 0x800603f0
	/* begin block 1 */
		// Start line: 4557
		// Start offset: 0x800603F0
	/* end block 1 */
	// End offset: 0x80060410
	// End Line: 4557

	/* begin block 2 */
		// Start line: 9829
	/* end block 2 */
	// End Line: 9830

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
 // line 4557, offset 0x80060424
	/* begin block 1 */
		// Start line: 4558
		// Start offset: 0x80060424
	/* end block 1 */
	// End offset: 0x80060444
	// End Line: 4558

	/* begin block 2 */
		// Start line: 9831
	/* end block 2 */
	// End Line: 9832

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
 // line 4558, offset 0x80060458
	/* begin block 1 */
		// Start line: 4559
		// Start offset: 0x80060458
	/* end block 1 */
	// End offset: 0x80060478
	// End Line: 4559

	/* begin block 2 */
		// Start line: 9833
	/* end block 2 */
	// End Line: 9834

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
 // line 4559, offset 0x8006048c
	/* begin block 1 */
		// Start line: 4560
		// Start offset: 0x8006048C
	/* end block 1 */
	// End offset: 0x800604AC
	// End Line: 4560

	/* begin block 2 */
		// Start line: 9835
	/* end block 2 */
	// End Line: 9836

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
 // line 4560, offset 0x800604c0
	/* begin block 1 */
		// Start line: 4561
		// Start offset: 0x800604C0
	/* end block 1 */
	// End offset: 0x800604E0
	// End Line: 4561

	/* begin block 2 */
		// Start line: 9837
	/* end block 2 */
	// End Line: 9838

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
 // line 4561, offset 0x800604f4
	/* begin block 1 */
		// Start line: 4562
		// Start offset: 0x800604F4
	/* end block 1 */
	// End offset: 0x80060518
	// End Line: 4562

	/* begin block 2 */
		// Start line: 9839
	/* end block 2 */
	// End Line: 9840

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
 // line 4562, offset 0x8006052c
	/* begin block 1 */
		// Start line: 4563
		// Start offset: 0x8006052C
	/* end block 1 */
	// End offset: 0x8006054C
	// End Line: 4563

	/* begin block 2 */
		// Start line: 9841
	/* end block 2 */
	// End Line: 9842

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
 // line 4563, offset 0x80060560
	/* begin block 1 */
		// Start line: 4564
		// Start offset: 0x80060560
	/* end block 1 */
	// End offset: 0x80060578
	// End Line: 4564

	/* begin block 2 */
		// Start line: 9843
	/* end block 2 */
	// End Line: 9844

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
 // line 4564, offset 0x80060588
	/* begin block 1 */
		// Start line: 4565
		// Start offset: 0x80060588
	/* end block 1 */
	// End offset: 0x800605A0
	// End Line: 4565

	/* begin block 2 */
		// Start line: 9845
	/* end block 2 */
	// End Line: 9846

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
 // line 4565, offset 0x800605b0
	/* begin block 1 */
		// Start line: 4566
		// Start offset: 0x800605B0
	/* end block 1 */
	// End offset: 0x800605C8
	// End Line: 4566

	/* begin block 2 */
		// Start line: 9847
	/* end block 2 */
	// End Line: 9848

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
 // line 4566, offset 0x800605d8
	/* begin block 1 */
		// Start line: 4567
		// Start offset: 0x800605D8
	/* end block 1 */
	// End offset: 0x80060608
	// End Line: 4567

	/* begin block 2 */
		// Start line: 9849
	/* end block 2 */
	// End Line: 9850

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
 // line 4567, offset 0x80060620
	/* begin block 1 */
		// Start line: 4568
		// Start offset: 0x80060620
	/* end block 1 */
	// End offset: 0x80060638
	// End Line: 4568

	/* begin block 2 */
		// Start line: 9851
	/* end block 2 */
	// End Line: 9852

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
 // line 4568, offset 0x80060648
	/* begin block 1 */
		// Start line: 4569
		// Start offset: 0x80060648
	/* end block 1 */
	// End offset: 0x80060660
	// End Line: 4569

	/* begin block 2 */
		// Start line: 9853
	/* end block 2 */
	// End Line: 9854

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
 // line 4569, offset 0x80060670
	/* begin block 1 */
		// Start line: 4570
		// Start offset: 0x80060670
	/* end block 1 */
	// End offset: 0x80060690
	// End Line: 4570

	/* begin block 2 */
		// Start line: 9855
	/* end block 2 */
	// End Line: 9856

void RemoveInvItem__FP12PlayerStructi(PlayerStruct *ptrplr,int i)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	RemoveInvItem__Fii(pnum,i);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4570, offset 0x800606a4
	/* begin block 1 */
		// Start line: 4571
		// Start offset: 0x800606A4
	/* end block 1 */
	// End offset: 0x800606BC
	// End Line: 4571

	/* begin block 2 */
		// Start line: 9857
	/* end block 2 */
	// End Line: 9858

void InvisStart__FP12PlayerStruct(PlayerStruct *ptrplr)

{
	int plr;
	
	plr = plrind__FP12PlayerStruct(ptrplr);
	InvisStart__Fi(plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr /*$a0*/)
 // line 4571, offset 0x800606cc
	/* begin block 1 */
		// Start line: 4572
		// Start offset: 0x800606CC
	/* end block 1 */
	// End offset: 0x800606E4
	// End Line: 4572

	/* begin block 2 */
		// Start line: 9859
	/* end block 2 */
	// End Line: 9860

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
 // line 4572, offset 0x800606f4
	/* begin block 1 */
		// Start line: 4573
		// Start offset: 0x800606F4
	/* end block 1 */
	// End offset: 0x80060720
	// End Line: 4573

	/* begin block 2 */
		// Start line: 9861
	/* end block 2 */
	// End Line: 9862

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
 // line 4573, offset 0x80060738
	/* begin block 1 */
		// Start line: 4574
		// Start offset: 0x80060738
	/* end block 1 */
	// End offset: 0x80060758
	// End Line: 4574

	/* begin block 2 */
		// Start line: 9863
	/* end block 2 */
	// End Line: 9864

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
 // line 4574, offset 0x8006076c
	/* begin block 1 */
		// Start line: 4575
		// Start offset: 0x8006076C
	/* end block 1 */
	// End offset: 0x8006078C
	// End Line: 4575

	/* begin block 2 */
		// Start line: 9865
	/* end block 2 */
	// End Line: 9866

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
 // line 4576, offset 0x800607a0
	/* begin block 1 */
		// Start line: 4577
		// Start offset: 0x800607A0
	/* end block 1 */
	// End offset: 0x800607DC
	// End Line: 4577

	/* begin block 2 */
		// Start line: 9869
	/* end block 2 */
	// End Line: 9870

uchar PosOkPlayer__Fiii(int pnum,int x,int y)

{
	uchar uVar1;
	
	uVar1 = PosOkPlayer__FP12PlayerStructii(plr + pnum,x,y);
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcStatDiff__Fi(int pnum /*$a0*/)
 // line 4577, offset 0x800607ec
	/* begin block 1 */
		// Start line: 4578
		// Start offset: 0x800607EC
	/* end block 1 */
	// End offset: 0x80060828
	// End Line: 4578

	/* begin block 2 */
		// Start line: 9871
	/* end block 2 */
	// End Line: 9872

int CalcStatDiff__Fi(int pnum)

{
	int iVar1;
	
	iVar1 = CalcStatDiff__FP12PlayerStruct(plr + pnum);
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartNewLvl__Fiii(int pnum /*$a0*/, int fom /*$a1*/, int lvl /*$a2*/)
 // line 4578, offset 0x80060838
	/* begin block 1 */
		// Start line: 4579
		// Start offset: 0x80060838
	/* end block 1 */
	// End offset: 0x80060874
	// End Line: 4579

	/* begin block 2 */
		// Start line: 9873
	/* end block 2 */
	// End Line: 9874

void StartNewLvl__Fiii(int pnum,int fom,int lvl)

{
	StartNewLvl__FP12PlayerStructii(plr + pnum,fom,lvl);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlayer__Fic(int pnum /*$a0*/, char c /*$a1*/)
 // line 4579, offset 0x80060884
	/* begin block 1 */
		// Start line: 4580
		// Start offset: 0x80060884
	/* end block 1 */
	// End offset: 0x800608C8
	// End Line: 4580

	/* begin block 2 */
		// Start line: 9875
	/* end block 2 */
	// End Line: 9876

void CreatePlayer__Fic(int pnum,char c)

{
	CreatePlayer__FP12PlayerStructc(plr + pnum,c);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartStand__Fii(int pnum /*$a0*/, int dir /*$a1*/)
 // line 4580, offset 0x800608d8
	/* begin block 1 */
		// Start line: 4581
		// Start offset: 0x800608D8
	/* end block 1 */
	// End offset: 0x80060914
	// End Line: 4581

	/* begin block 2 */
		// Start line: 9877
	/* end block 2 */
	// End Line: 9878

void StartStand__Fii(int pnum,int dir)

{
	StartStand__FP12PlayerStructi(plr + pnum,dir);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerHitPoints__Fii(int pnum /*$a0*/, int val /*$a1*/)
 // line 4581, offset 0x80060924
	/* begin block 1 */
		// Start line: 4582
		// Start offset: 0x80060924
	/* end block 1 */
	// End offset: 0x80060960
	// End Line: 4582

	/* begin block 2 */
		// Start line: 9879
	/* end block 2 */
	// End Line: 9880

void SetPlayerHitPoints__Fii(int pnum,int val)

{
	SetPlayerHitPoints__FP12PlayerStructi(plr + pnum,val);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePlrPath__FiiiUc(int pnum /*$a0*/, int xx /*$a1*/, int yy /*$a2*/, unsigned char endspace /*$a3*/)
 // line 4582, offset 0x80060970
	/* begin block 1 */
		// Start line: 4583
		// Start offset: 0x80060970
	/* end block 1 */
	// End offset: 0x800609B0
	// End Line: 4583

	/* begin block 2 */
		// Start line: 9881
	/* end block 2 */
	// End Line: 9882

void MakePlrPath__FiiiUc(int pnum,int xx,int yy,uchar endspace)

{
	MakePlrPath__FP12PlayerStructiiUc(plr + pnum,xx,yy,endspace);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartWarpLvl__Fii(int pnum /*$a0*/, int pidx /*$a1*/)
 // line 4583, offset 0x800609c0
	/* begin block 1 */
		// Start line: 4584
		// Start offset: 0x800609C0
	/* end block 1 */
	// End offset: 0x800609FC
	// End Line: 4584

	/* begin block 2 */
		// Start line: 9883
	/* end block 2 */
	// End Line: 9884

void StartWarpLvl__Fii(int pnum,int pidx)

{
	StartWarpLvl__FP12PlayerStructi(plr + pnum,pidx);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncPlrKill__Fii(int pnum /*$a0*/, int earflag /*$a1*/)
 // line 4584, offset 0x80060a0c
	/* begin block 1 */
		// Start line: 4585
		// Start offset: 0x80060A0C
	/* end block 1 */
	// End offset: 0x80060A48
	// End Line: 4585

	/* begin block 2 */
		// Start line: 9885
	/* end block 2 */
	// End Line: 9886

void SyncPlrKill__Fii(int pnum,int earflag)

{
	SyncPlrKill__FP12PlayerStructi(plr + pnum,earflag);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrKill__Fii(int pnum /*$a0*/, int val /*$a1*/)
 // line 4585, offset 0x80060a58
	/* begin block 1 */
		// Start line: 4586
		// Start offset: 0x80060A58
	/* end block 1 */
	// End offset: 0x80060A94
	// End Line: 4586

	/* begin block 2 */
		// Start line: 9887
	/* end block 2 */
	// End Line: 9888

void StartPlrKill__Fii(int pnum,int val)

{
	StartPlrKill__FP12PlayerStructi(plr + pnum,val);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewPlrAnim__Fiiii(int pnum /*$a0*/, int Peq /*$a1*/, int numFrames /*$a2*/, int Delay /*$a3*/)
 // line 4586, offset 0x80060aa4
	/* begin block 1 */
		// Start line: 4587
		// Start offset: 0x80060AA4
	/* end block 1 */
	// End offset: 0x80060AE0
	// End Line: 4587

	/* begin block 2 */
		// Start line: 9889
	/* end block 2 */
	// End Line: 9890

void NewPlrAnim__Fiiii(int pnum,int Peq,int numFrames,int Delay)

{
	NewPlrAnim__FP12PlayerStructiii(plr + pnum,Peq,numFrames,Delay);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPlrExperience__Fiil(int pnum /*$a0*/, int lvl /*$a1*/, long exp /*$a2*/)
 // line 4587, offset 0x80060af0
	/* begin block 1 */
		// Start line: 4588
		// Start offset: 0x80060AF0
	/* end block 1 */
	// End offset: 0x80060B2C
	// End Line: 4588

	/* begin block 2 */
		// Start line: 9891
	/* end block 2 */
	// End Line: 9892

void AddPlrExperience__Fiil(int pnum,int lvl,long exp)

{
	AddPlrExperience__FP12PlayerStructil(plr + pnum,lvl,exp);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrBlock__Fii(int pnum /*$a0*/, int dir /*$a1*/)
 // line 4588, offset 0x80060b3c
	/* begin block 1 */
		// Start line: 4589
		// Start offset: 0x80060B3C
	/* end block 1 */
	// End offset: 0x80060B78
	// End Line: 4589

	/* begin block 2 */
		// Start line: 9893
	/* end block 2 */
	// End Line: 9894

void StartPlrBlock__Fii(int pnum,int dir)

{
	StartPlrBlock__FP12PlayerStructi(plr + pnum,dir);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartPlrHit__FiiUc(int pnum /*$a0*/, int dam /*$a1*/, unsigned char forcehit /*$a2*/)
 // line 4589, offset 0x80060b88
	/* begin block 1 */
		// Start line: 4590
		// Start offset: 0x80060B88
	/* end block 1 */
	// End offset: 0x80060BC8
	// End Line: 4590

	/* begin block 2 */
		// Start line: 9895
	/* end block 2 */
	// End Line: 9896

void StartPlrHit__FiiUc(int pnum,int dam,uchar forcehit)

{
	StartPlrHit__FP12PlayerStructiUc(plr + pnum,dam,forcehit);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartSpell__Fiiii(int pnum /*$a0*/, int d /*$a1*/, int cx /*$a2*/, int cy /*$a3*/)
 // line 4590, offset 0x80060bd8
	/* begin block 1 */
		// Start line: 4591
		// Start offset: 0x80060BD8
	/* end block 1 */
	// End offset: 0x80060C14
	// End Line: 4591

	/* begin block 2 */
		// Start line: 9897
	/* end block 2 */
	// End Line: 9898

void StartSpell__Fiiii(int pnum,int d,int cx,int cy)

{
	StartSpell__FP12PlayerStructiii(plr + pnum,d,cx,cy);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayer__FiUc(int pnum /*$a0*/, unsigned char FirstTime /*$a1*/)
 // line 4592, offset 0x80060c24
	/* begin block 1 */
		// Start line: 4593
		// Start offset: 0x80060C24
	/* end block 1 */
	// End offset: 0x80060C64
	// End Line: 4593

	/* begin block 2 */
		// Start line: 9901
	/* end block 2 */
	// End Line: 9902

void InitPlayer__FiUc(int pnum,uchar FirstTime)

{
	InitPlayer__FP12PlayerStructUc(plr + pnum,FirstTime);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PM_ChangeLightOff__Fi(int pnum /*$a0*/)
 // line 4594, offset 0x80060c74
	/* begin block 1 */
		// Start line: 4595
		// Start offset: 0x80060C74
	/* end block 1 */
	// End offset: 0x80060CB0
	// End Line: 4595

	/* begin block 2 */
		// Start line: 9905
	/* end block 2 */
	// End Line: 9906

void PM_ChangeLightOff__Fi(int pnum)

{
	PM_ChangeLightOff__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckNewPath__Fi(int pnum /*$a0*/)
 // line 4595, offset 0x80060cc0
	/* begin block 1 */
		// Start line: 4596
		// Start offset: 0x80060CC0
	/* end block 1 */
	// End offset: 0x80060CFC
	// End Line: 4596

	/* begin block 2 */
		// Start line: 9907
	/* end block 2 */
	// End Line: 9908

void CheckNewPath__Fi(int pnum)

{
	CheckNewPath__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreePlayerGFX__Fi(int pnum /*$a0*/)
 // line 4596, offset 0x80060d0c
	/* begin block 1 */
		// Start line: 4597
		// Start offset: 0x80060D0C
	/* end block 1 */
	// End offset: 0x80060D48
	// End Line: 4597

	/* begin block 2 */
		// Start line: 9909
	/* end block 2 */
	// End Line: 9910

void FreePlayerGFX__Fi(int pnum)

{
	FreePlayerGFX__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDungMsgs__Fi(int pnum /*$a0*/)
 // line 4597, offset 0x80060d58
	/* begin block 1 */
		// Start line: 4598
		// Start offset: 0x80060D58
	/* end block 1 */
	// End offset: 0x80060D94
	// End Line: 4598

	/* begin block 2 */
		// Start line: 9911
	/* end block 2 */
	// End Line: 9912

void InitDungMsgs__Fi(int pnum)

{
	InitDungMsgs__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPlayerGFX__Fi(int pnum /*$a0*/)
 // line 4598, offset 0x80060da4
	/* begin block 1 */
		// Start line: 4599
		// Start offset: 0x80060DA4
	/* end block 1 */
	// End offset: 0x80060DE0
	// End Line: 4599

	/* begin block 2 */
		// Start line: 9913
	/* end block 2 */
	// End Line: 9914

void InitPlayerGFX__Fi(int pnum)

{
	InitPlayerGFX__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlrPos__Fi(int pnum /*$a0*/)
 // line 4599, offset 0x80060df0
	/* begin block 1 */
		// Start line: 4600
		// Start offset: 0x80060DF0
	/* end block 1 */
	// End offset: 0x80060E2C
	// End Line: 4600

	/* begin block 2 */
		// Start line: 9915
	/* end block 2 */
	// End Line: 9916

void SyncInitPlrPos__Fi(int pnum)

{
	SyncInitPlrPos__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlrAnims__Fi(int pnum /*$a0*/)
 // line 4600, offset 0x80060e3c
	/* begin block 1 */
		// Start line: 4601
		// Start offset: 0x80060E3C
	/* end block 1 */
	// End offset: 0x80060E78
	// End Line: 4601

	/* begin block 2 */
		// Start line: 9917
	/* end block 2 */
	// End Line: 9918

void SetPlrAnims__Fi(int pnum)

{
	SetPlrAnims__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClrPlrPath__Fi(int pnum /*$a0*/)
 // line 4601, offset 0x80060e88
	/* begin block 1 */
		// Start line: 4602
		// Start offset: 0x80060E88
	/* end block 1 */
	// End offset: 0x80060EC4
	// End Line: 4602

	/* begin block 2 */
		// Start line: 9919
	/* end block 2 */
	// End Line: 9920

void ClrPlrPath__Fi(int pnum)

{
	ClrPlrPath__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SyncInitPlr__Fi(int pnum /*$a0*/)
 // line 4602, offset 0x80060ed4
	/* begin block 1 */
		// Start line: 4603
		// Start offset: 0x80060ED4
	/* end block 1 */
	// End offset: 0x80060F10
	// End Line: 4603

	/* begin block 2 */
		// Start line: 9921
	/* end block 2 */
	// End Line: 9922

void SyncInitPlr__Fi(int pnum)

{
	SyncInitPlr__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestartTownLvl__Fi(int pnum /*$a0*/)
 // line 4603, offset 0x80060f20
	/* begin block 1 */
		// Start line: 4604
		// Start offset: 0x80060F20
	/* end block 1 */
	// End offset: 0x80060F5C
	// End Line: 4604

	/* begin block 2 */
		// Start line: 9923
	/* end block 2 */
	// End Line: 9924

void RestartTownLvl__Fi(int pnum)

{
	RestartTownLvl__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerOld__Fi(int pnum /*$a0*/)
 // line 4604, offset 0x80060f6c
	/* begin block 1 */
		// Start line: 4605
		// Start offset: 0x80060F6C
	/* end block 1 */
	// End offset: 0x80060FA8
	// End Line: 4605

	/* begin block 2 */
		// Start line: 9925
	/* end block 2 */
	// End Line: 9926

void SetPlayerOld__Fi(int pnum)

{
	SetPlayerOld__FP12PlayerStruct(plr + pnum);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr /*$a0*/, struct ItemStruct *h /*$s0*/)
 // line 4612, offset 0x80060fb8
	/* begin block 1 */
		// Start line: 4613
		// Start offset: 0x80060FB8
	/* end block 1 */
	// End offset: 0x80060FD8
	// End Line: 4614

	/* begin block 2 */
		// Start line: 9941
	/* end block 2 */
	// End Line: 9942

void GetGoldSeed__FP12PlayerStructP10ItemStruct(PlayerStruct *ptrplr,ItemStruct *h)

{
	int pnum;
	
	pnum = plrind__FP12PlayerStruct(ptrplr);
	GetGoldSeed__FiP10ItemStruct(pnum,h);
	return;
}





