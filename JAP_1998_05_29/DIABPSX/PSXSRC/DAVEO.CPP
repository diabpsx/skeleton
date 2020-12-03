#include "THISDUST.H"
#include "DAVEO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ReadPad__Fi(int NoDeb /*$s1*/)
 // line 74, offset 0x8008463c
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x8008463C
		// Variables:
	// 		struct CPad *DPad; // $s0
	// 		int New; // $v0
	// 		int cmem; // $a0
	// 		int p1mema; // $a1
	// 		int p1memb; // $a2
	// 		int p2mema; // $a3
	// 		int p2memb; // $t0
	// 		int diffm; // $t1
	/* end block 1 */
	// End offset: 0x800847AC
	// End Line: 139

	/* begin block 2 */
		// Start line: 148
	/* end block 2 */
	// End Line: 149

void ReadPad__Fi(int NoDeb)

{
	bool bVar1;
	uchar both;
	ushort uVar2;
	CPad *this;
	int PadNum;
	
	bVar1 = 0xf < DaveDebCount;
	DaveDebCount = DaveDebCount + 1;
	if (bVar1) {
		DaveDebCount = 0;
		DavesPadDeb = DavesPadDeb & 0xfff0;
	}
	if (CDWAIT != (void *)0x0) {
		return;
	}
	PadNum = options_pad;
	if (FeFlag == '\0') {
LAB_8008476c:
		both = '\0';
LAB_80084770:
		this = PAD_GetPad__FiUc(PadNum,both);
	}
	else {
		if ((FeCurMenu == &FeNewP1NameMenu) || (FeCurMenu == &FeNewP1ClassMenu)) {
			PadNum = 0;
		}
		else {
			if ((FeCurMenu != &FeNewP2NameMenu) && (FeCurMenu != &FeNewP2ClassMenu)) {
				if ((FeCurMenu == &FeDifficultyMenu) && (FePlayerNo == 0)) {
					PadNum = 0;
					goto LAB_8008476c;
				}
				PadNum = 0;
				both = '\x01';
				goto LAB_80084770;
			}
			PadNum = 1;
		}
		this = PAD_GetPad__FiUc(PadNum,'\0');
		both = CheckActive__4CPad(this);
		if (both == '\0') {
			DavesPad = 0;
			DavesPadDeb = 0;
			Flush__4CPad(this);
			return;
		}
	}
	uVar2 = GetCur__C4CPad(this);
	if (uVar2 == 0) {
		DaveDebCount = 0;
	}
	DavesPad = uVar2 & ~DavesPadDeb;
	DavesPadDeb = uVar2 & (ushort)NoDeb;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DummyPoll__Fv()
 // line 300, offset 0x800847c4
	/* begin block 1 */
		// Start line: 301
		// Start offset: 0x800847C4
	/* end block 1 */
	// End offset: 0x800847C4
	// End Line: 301

	/* begin block 2 */
		// Start line: 621
	/* end block 2 */
	// End Line: 622

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DummyPoll__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveOwens__Fv()
 // line 306, offset 0x800847cc
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x800847CC
	/* end block 1 */
	// End offset: 0x800847CC
	// End Line: 307

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveOwens__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveCentreStuff__Fv()
 // line 319, offset 0x800847d4
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x800847D4
		// Variables:
	// 		char TempStr[40]; // stack offset -64
	/* end block 1 */
	// End offset: 0x800848FC
	// End Line: 339

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveCentreStuff__Fv(void)

{
	uint G;
	uint R;
	
	SetChar__5CFontiUs(&MediumFont,0x2e,0x7f);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0x9b,0x69,&DAT_8011ab10,JustLeft,(RECT *)0x0,R,G,G);
	SetChar__5CFontiUs(&MediumFont,0x2e,0x80);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0x9b,0x8e,&DAT_8011ab10,JustLeft,(RECT *)0x0,R,G,G);
	SetChar__5CFontiUs(&MediumFont,0x2e,0x81);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0x8b,0x7e,&DAT_8011ab10,JustLeft,(RECT *)0x0,R,G,G);
	SetChar__5CFontiUs(&MediumFont,0x2e,0x82);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0xb0,0x7d,&DAT_8011ab10,JustLeft,(RECT *)0x0,R,G,G);
	SetChar__5CFontiUs(&MediumFont,0x2e,0x6d);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceStoreGold2__Fil(int myplr /*$s5*/, long v /*stack -56*/)
 // line 379, offset 0x8008491c
	/* begin block 1 */
		// Start line: 380
		// Start offset: 0x8008491C
		// Variables:
	// 		int i; // $s1
	// 		int ii; // $s4
	// 		int xx; // $s6
	// 		int yy; // $s3
	// 		unsigned char done; // $a0

		/* begin block 1.1 */
			// Start line: 380
			// Start offset: 0x8008491C

			/* begin block 1.1.1 */
				// Start line: 386
				// Start offset: 0x8008498C

				/* begin block 1.1.1.1 */
					// Start line: 386
					// Start offset: 0x800849A0

					/* begin block 1.1.1.1.1 */
						// Start line: 391
						// Start offset: 0x800849DC
					/* end block 1.1.1.1.1 */
					// End offset: 0x80084B08
					// End Line: 402
				/* end block 1.1.1.1 */
				// End offset: 0x80084B08
				// End Line: 402
			/* end block 1.1.1 */
			// End offset: 0x80084B08
			// End Line: 402
		/* end block 1.1 */
		// End offset: 0x80084B10
		// End Line: 404
	/* end block 1 */
	// End offset: 0x80084B10
	// End Line: 404

	/* begin block 2 */
		// Start line: 783
	/* end block 2 */
	// End Line: 784

void PlaceStoreGold2__Fil(int myplr,long v)

{
	bool bVar1;
	ItemStruct *pIVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	ItemStruct *pIVar7;
	ItemStruct *pIVar8;
	int *piVar9;
	int i;
	int iVar10;
	int iVar11;
	
	bVar1 = false;
	iVar11 = 0;
	iVar10 = myplr * 0x19e8;
	while ((iVar11 < 0x28 && (!bVar1))) {
		if (*(char *)(iVar11 + iVar10 + -0x7ff24540) == '\0') {
			i = plr[myplr]._pNumInv;
			GetGoldSeed__FiP10ItemStruct(myplr,_golditem + StorePlrNo);
			pIVar2 = _golditem + StorePlrNo;
			pIVar8 = _golditem + StorePlrNo;
			piVar3 = (int *)(i * 0x6c + iVar10 + -0x7ff25624);
			do {
				piVar9 = piVar3;
				pIVar7 = pIVar8;
				iVar4 = pIVar7->_iVMult1;
				iVar5 = pIVar7->_iVAdd2;
				iVar6 = pIVar7->_iVMult2;
				*piVar9 = pIVar7->_iVAdd1;
				piVar9[1] = iVar4;
				piVar9[2] = iVar5;
				piVar9[3] = iVar6;
				pIVar8 = (ItemStruct *)&pIVar7->_iSeed;
				piVar3 = piVar9 + 4;
			} while (pIVar8 != (ItemStruct *)&pIVar2->_iSufPower);
			iVar4 = pIVar7->_ivalue;
			iVar5 = pIVar7->_iIvalue;
			piVar9[4] = pIVar8->_iVAdd1;
			piVar9[5] = iVar4;
			piVar9[6] = iVar5;
			plr[myplr]._pNumInv = plr[myplr]._pNumInv + 1;
			*(undefined *)(iVar10 + -0x7ff24540 + iVar11) = (char)plr[myplr]._pNumInv;
			plr[myplr].InvList[i]._ivalue = v;
			SetGoldCurs__Fii(myplr,i);
			bVar1 = true;
		}
		iVar11 = iVar11 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GivePlayerDosh__Fil(int PlayerNo /*$s0*/, long cost /*$s1*/)
 // line 408, offset 0x80084b44
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x80084B44
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x80084CD4
	// End Line: 440

	/* begin block 2 */
		// Start line: 877
	/* end block 2 */
	// End Line: 878

void GivePlayerDosh__Fil(int PlayerNo,long cost)

{
	undefined *puVar1;
	int iVar2;
	int i;
	
	iVar2 = plr[PlayerNo]._pNumInv;
	plr[PlayerNo]._pGold = plr[PlayerNo]._pGold + cost;
	i = 0;
	if (0 < iVar2) {
		iVar2 = 0;
		do {
			if (cost < 1) {
				return;
			}
			if (*(short *)((int)&plr[PlayerNo].InvList[0]._itype + iVar2) == 0xb) {
				puVar1 = *(undefined **)((int)&plr[PlayerNo].InvList[0]._ivalue + iVar2);
				if (puVar1 != &DAT_00001388) {
					if ((int)(puVar1 + cost) < 0x1389) {
						*(undefined **)((int)&plr[PlayerNo].InvList[0]._ivalue + iVar2) = puVar1 + cost;
						SetGoldCurs__Fii(PlayerNo,i);
						cost = 0;
					}
					else {
						cost = (long)(puVar1 + (int)((undefined *)cost + -5000));
						*(undefined4 *)((int)&plr[PlayerNo].InvList[0]._ivalue + iVar2) = 5000;
						SetGoldCurs__Fii(PlayerNo,i);
					}
				}
			}
			i = i + 1;
			iVar2 = iVar2 + 0x6c;
		} while (i < plr[PlayerNo]._pNumInv);
	}
	if (0 < cost) {
		while (5000 < cost) {
			PlaceStoreGold2__Fil(PlayerNo,(long)&DAT_00001388);
			cost = (long)((undefined *)cost + -5000);
		}
		PlaceStoreGold2__Fil(PlayerNo,cost);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcItemVal__FP10ItemStruct(struct ItemStruct *Item /*$a0*/)
 // line 444, offset 0x80084cf8
	/* begin block 1 */
		// Start line: 445
		// Start offset: 0x80084CF8
		// Variables:
	// 		int cost; // $v0
	/* end block 1 */
	// End offset: 0x80084D4C
	// End Line: 454

	/* begin block 2 */
		// Start line: 959
	/* end block 2 */
	// End Line: 960

int CalcItemVal__FP10ItemStruct(ItemStruct *Item)

{
	int iVar1;
	
	iVar1 = 0;
	if (Item->_itype != 0xb) {
		if ((Item->_iMagical == '\0') || (Item->_iIdentified == '\0')) {
			iVar1 = Item->_ivalue;
		}
		else {
			iVar1 = Item->_iIvalue;
		}
		iVar1 = iVar1 >> 2;
		if (iVar1 < 1) {
			iVar1 = 1;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveDupInvItem__Fii(int pnum /*$a3*/, int iv /*$t1*/)
 // line 457, offset 0x80084d54
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x80084D54
	/* end block 1 */
	// End offset: 0x80084F38
	// End Line: 481

	/* begin block 2 */
		// Start line: 983
	/* end block 2 */
	// End Line: 984

void RemoveDupInvItem__Fii(int pnum,int iv)

{
	char cVar1;
	undefined4 *puVar2;
	char *pcVar3;
	int iVar4;
	undefined4 uVar5;
	int iVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined4 *puVar9;
	undefined4 *puVar10;
	undefined4 *puVar11;
	undefined4 *puVar12;
	
	pcVar3 = plr[pnum].InvGrid;
	do {
		if (((int)*pcVar3 == iv + 1) || ((int)*pcVar3 == -(iv + 1))) {
			*pcVar3 = '\0';
		}
		pcVar3 = pcVar3 + 1;
	} while ((int)pcVar3 < pnum * 0x19e8 + -0x7ff24518);
	if (plr[pnum]._pNumInv != 0) {
		plr[pnum]._pNumInv = plr[pnum]._pNumInv + -1;
		iVar6 = plr[pnum]._pNumInv;
		if ((0 < iVar6) && (iVar6 != iv)) {
			iVar4 = pnum * 0x19e8 + -0x7ff25624;
			puVar9 = (undefined4 *)(iVar6 * 0x6c + iVar4);
			puVar11 = puVar9;
			puVar2 = (undefined4 *)(iv * 0x6c + iVar4);
			do {
				puVar12 = puVar2;
				puVar10 = puVar11;
				uVar5 = puVar10[1];
				uVar7 = puVar10[2];
				uVar8 = puVar10[3];
				*puVar12 = *puVar10;
				puVar12[1] = uVar5;
				puVar12[2] = uVar7;
				puVar12[3] = uVar8;
				puVar11 = puVar10 + 4;
				puVar2 = puVar12 + 4;
			} while (puVar11 != puVar9 + 0x18);
			uVar5 = puVar10[5];
			uVar7 = puVar10[6];
			puVar12[4] = *puVar11;
			puVar12[5] = uVar5;
			puVar12[6] = uVar7;
			cVar1 = (char)iv + '\x01';
			pcVar3 = plr[pnum].InvGrid;
			do {
				if ((int)*pcVar3 == plr[pnum]._pNumInv + 1) {
					*pcVar3 = cVar1;
				}
				if ((int)*pcVar3 == ~plr[pnum]._pNumInv) {
					*pcVar3 = -cVar1;
				}
				pcVar3 = pcVar3 + 1;
			} while ((int)pcVar3 < pnum * 0x19e8 + -0x7ff24518);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DetectDup__FP10ItemStructi(struct ItemStruct *Item /*$s6*/, int PlayerNo /*$s4*/)
 // line 494, offset 0x80084f44
	/* begin block 1 */
		// Start line: 495
		// Start offset: 0x80084F44
		// Variables:
	// 		long Value; // $a2
	// 		struct ItemStruct *pi; // $v1
	// 		int i; // $s1
	// 		int InvItem; // $s2
	// 		long DupSell; // $s5
	// 		unsigned char Flag; // $s3
	/* end block 1 */
	// End offset: 0x8008518C
	// End Line: 561

	/* begin block 2 */
		// Start line: 1059
	/* end block 2 */
	// End Line: 1060

long DetectDup__FP10ItemStructi(ItemStruct *Item,int PlayerNo)

{
	bool bVar1;
	long lVar2;
	short *psVar3;
	int *piVar4;
	int iVar5;
	int iv;
	int iVar6;
	
	lVar2 = CalcItemVal__FP10ItemStruct(Item);
	iVar6 = 0;
	iVar5 = 6;
	psVar3 = &plr[PlayerNo].InvBody[0]._itype;
	do {
		if (((*psVar3 != -1) && (Item->_iCreateInfo == psVar3[-4])) &&
			 (Item->_iSeed == *(int *)(psVar3 + -0xe))) {
			iVar6 = iVar6 + lVar2;
			*psVar3 = -1;
		}
		iVar5 = iVar5 + -1;
		psVar3 = psVar3 + 0x36;
	} while (iVar5 != -1);
LAB_80085034:
	do {
		bVar1 = true;
		iv = 0;
		iVar5 = plr[PlayerNo]._pNumInv + -1;
		if (iVar5 != -1) {
			piVar4 = &plr[PlayerNo].InvList[0]._iSeed;
			do {
				if (!bVar1) goto LAB_80085034;
				if (((*(short *)(piVar4 + 7) != -1) && (*(short *)(piVar4 + 7) != 0xb)) &&
					 ((Item->_iCreateInfo == *(ushort *)(piVar4 + 5) && (Item->_iSeed == *piVar4)))) {
					bVar1 = false;
					iVar6 = iVar6 + lVar2;
					RemoveDupInvItem__Fii(PlayerNo,iv);
				}
				iv = iv + 1;
				iVar5 = iVar5 + -1;
				piVar4 = piVar4 + 0x1b;
			} while (iVar5 != -1);
		}
		if (bVar1) {
			iVar5 = 7;
			psVar3 = &plr[PlayerNo].SpdList[0]._itype;
			do {
				if (((*psVar3 != -1) && (Item->_iCreateInfo == psVar3[-4])) &&
					 (Item->_iSeed == *(int *)(psVar3 + -0xe))) {
					iVar6 = iVar6 + lVar2;
					*psVar3 = -1;
				}
				iVar5 = iVar5 + -1;
				psVar3 = psVar3 + 0x36;
			} while (iVar5 != -1);
			if (iVar6 == 0) {
				lVar2 = 0;
			}
			else {
				(&PDosh)[PlayerNo] = (&PDosh)[PlayerNo] + iVar6;
			}
			return lVar2;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ WinterSales__Fi(int PlayerNo /*$s6*/)
 // line 565, offset 0x800851c0
	/* begin block 1 */
		// Start line: 566
		// Start offset: 0x800851C0
		// Variables:
	// 		int Value; // $s0
	// 		int i; // $s1
	// 		int InvItem; // $s2
	// 		struct ItemStruct *pi; // $s3
	// 		unsigned char Flag; // $s5
	/* end block 1 */
	// End offset: 0x800853C8
	// End Line: 636

	/* begin block 2 */
		// Start line: 1210
	/* end block 2 */
	// End Line: 1211

void WinterSales__Fi(int PlayerNo)

{
	bool bVar1;
	int iVar2;
	long lVar3;
	int iv;
	short *psVar4;
	ItemStruct *Item;
	
	if (PlayerNo != 0) {
		CalcPlrInv__FiUc(0,'\x01');
		CalcPlrInv__FiUc(1,'\x01');
		Item = plr[0].InvBody;
		iv = 6;
		psVar4 = &plr[0].InvBody[0]._itype;
		LONG_8011ab1c = 0;
		PDosh = 0;
		do {
			if ((*psVar4 != -1) && (lVar3 = DetectDup__FP10ItemStructi(Item,1), lVar3 != 0)) {
				*psVar4 = -1;
				PDosh = PDosh + lVar3;
			}
			psVar4 = psVar4 + 0x36;
			iv = iv + -1;
			Item = Item + 1;
		} while (iv != -1);
LAB_80085284:
		do {
			bVar1 = true;
			iv = 0;
			Item = plr[0].InvList;
			iVar2 = plr[0]._pNumInv;
			while (iVar2 = iVar2 + -1, iVar2 != -1) {
				if (!bVar1) goto LAB_80085284;
				if (((Item->_itype != -1) && (Item->_itype != 0xb)) &&
					 (lVar3 = DetectDup__FP10ItemStructi(Item,1), lVar3 != 0)) {
					RemoveDupInvItem__Fii(0,iv);
					bVar1 = false;
					PDosh = PDosh + lVar3;
				}
				iv = iv + 1;
				Item = Item + 1;
			}
		} while (!bVar1);
		Item = plr[0].SpdList;
		iv = 7;
		psVar4 = &plr[0].SpdList[0]._itype;
		do {
			if ((*psVar4 != -1) && (lVar3 = DetectDup__FP10ItemStructi(Item,1), lVar3 != 0)) {
				*psVar4 = -1;
				PDosh = PDosh + lVar3;
			}
			psVar4 = psVar4 + 0x36;
			iv = iv + -1;
			Item = Item + 1;
		} while (iv != -1);
		CalcPlrInv__FiUc(0,'\x01');
		CalcPlrInv__FiUc(1,'\x01');
		SpawnStoreGold__Fv();
		GivePlayerDosh__Fil(0,PDosh);
		GivePlayerDosh__Fil(1,LONG_8011ab1c);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SpecUn__FP10ItemStruct(struct ItemStruct *pi /*$a0*/)
 // line 646, offset 0x800853fc
	/* begin block 1 */
		// Start line: 647
		// Start offset: 0x800853FC
		// Variables:
	// 		int MrHappy; // $a1
	/* end block 1 */
	// End offset: 0x800854C8
	// End Line: 682

	/* begin block 2 */
		// Start line: 1381
	/* end block 2 */
	// End Line: 1382

int SpecUn__FP10ItemStruct(ItemStruct *pi)

{
	ushort uVar1;
	uint uVar2;
	
	uVar1 = pi->IDidx;
	uVar2 = (uint)((uint)uVar1 - 6 < 0x11);
	if ((uVar1 == 0x1c) || (((0x1b < (short)uVar1 && ((short)uVar1 < 0x22)) && (0x1e < (short)uVar1)))
		 ) {
		uVar2 = 1;
	}
	if (((uint)pi->_iMiscId - 0x15 < 2) &&
		 (((((pi->_iSpell == ' ' || (pi->_iSpell == '\"')) && (FePlayerNo == 0)) ||
			 ((pi->_iSpell == '\x17' && (FePlayerNo == 1)))) ||
			((pi->_iSpell == '\n' && (FePlayerNo == 1)))))) {
		uVar2 = 1;
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv()
 // line 685, offset 0x800854d0
	/* begin block 1 */
		// Start line: 686
		// Start offset: 0x800854D0
		// Variables:
	// 		int Uid; // $v1
	/* end block 1 */
	// End offset: 0x80085510
	// End Line: 696

	/* begin block 2 */
		// Start line: 1459
	/* end block 2 */
	// End Line: 1460

/* WARNING: Unknown calling convention yet parameter storage is locked */

void EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv(void)

{
	int iVar1;
	
	iVar1 = 6;
	do {
		s__800d53d5[iVar1 + 0x79] = '\0';
		iVar1 = iVar1 + 1;
	} while (iVar1 < 0x16);
	s__800d546a[0] = '\0';
	UCHAR_00h_800d546d = '\0';
	UCHAR_00h_800d546e = '\0';
	s__800d546f[0] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ KeefDaFeef__Fi(int PlayerNo /*$s6*/)
 // line 699, offset 0x80085518
	/* begin block 1 */
		// Start line: 700
		// Start offset: 0x80085518
		// Variables:
	// 		int i; // $s2
	// 		int InvItem; // $s4
	// 		struct ItemStruct *pi; // $s0
	// 		unsigned char Flag; // $s3
	/* end block 1 */
	// End offset: 0x800857C4
	// End Line: 778

	/* begin block 2 */
		// Start line: 1484
	/* end block 2 */
	// End Line: 1485

void KeefDaFeef__Fi(int PlayerNo)

{
	bool bVar1;
	long *plVar2;
	int iv;
	int iVar3;
	ItemStruct *pi;
	char *pcVar4;
	short *psVar5;
	int iVar6;
	
	CalcPlrInv__FiUc(0,'\x01');
	CalcPlrInv__FiUc(1,'\x01');
	pi = plr[PlayerNo].InvBody;
	iVar6 = 6;
	plVar2 = &PDosh + PlayerNo;
	pcVar4 = &plr[PlayerNo].InvBody[0]._iUid;
	LONG_8011ab1c = 0;
	*plVar2 = 0;
	do {
		if ((*(short *)(pcVar4 + -8) != -1) && (iv = SpecUn__FP10ItemStruct(pi), iv != 0)) {
			iv = CalcItemVal__FP10ItemStruct(pi);
			*plVar2 = *plVar2 + iv;
			*(undefined2 *)(pcVar4 + -8) = 0xffff;
			(&UniqueItemFlag)[(int)*pcVar4] = '\0';
		}
		pcVar4 = pcVar4 + 0x6c;
		iVar6 = iVar6 + -1;
		pi = pi + 1;
	} while (iVar6 != -1);
LAB_80085640:
	do {
		bVar1 = true;
		iv = 0;
		iVar6 = plr[PlayerNo]._pNumInv + -1;
		pi = plr[PlayerNo].InvList;
		if (iVar6 != -1) {
			pcVar4 = &plr[PlayerNo].InvList[0]._iUid;
			do {
				if (!bVar1) goto LAB_80085640;
				if ((*(short *)(pcVar4 + -8) != -1) && (iVar3 = SpecUn__FP10ItemStruct(pi), iVar3 != 0)) {
					iVar3 = CalcItemVal__FP10ItemStruct(pi);
					(&PDosh)[PlayerNo] = (&PDosh)[PlayerNo] + iVar3;
					RemoveDupInvItem__Fii(PlayerNo,iv);
					bVar1 = false;
					(&UniqueItemFlag)[(int)*pcVar4] = '\0';
				}
				iv = iv + 1;
				pcVar4 = pcVar4 + 0x6c;
				iVar6 = iVar6 + -1;
				pi = pi + 1;
			} while (iVar6 != -1);
		}
		if (bVar1) {
			pi = plr[PlayerNo].SpdList;
			iVar6 = 7;
			psVar5 = &plr[PlayerNo].SpdList[0]._itype;
			do {
				if ((*psVar5 != -1) && (iv = SpecUn__FP10ItemStruct(pi), iv != 0)) {
					iv = CalcItemVal__FP10ItemStruct(pi);
					(&PDosh)[PlayerNo] = (&PDosh)[PlayerNo] + iv;
					*psVar5 = -1;
				}
				psVar5 = psVar5 + 0x36;
				iVar6 = iVar6 + -1;
				pi = pi + 1;
			} while (iVar6 != -1);
			CalcPlrInv__FiUc(PlayerNo,'\x01');
			SpawnStoreGold__Fv();
			GivePlayerDosh__Fil(PlayerNo,(&PDosh)[PlayerNo]);
			EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv();
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearQuestFlags__Fv()
 // line 781, offset 0x800857f8
	/* begin block 1 */
		// Start line: 782
		// Start offset: 0x800857F8
	/* end block 1 */
	// End offset: 0x80085808
	// End Line: 785

	/* begin block 2 */
		// Start line: 1665
	/* end block 2 */
	// End Line: 1666

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearQuestFlags__Fv(void)

{
	EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv();
	return;
}





