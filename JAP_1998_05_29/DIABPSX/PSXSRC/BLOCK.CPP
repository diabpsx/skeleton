#include "THISDUST.H"
#include "BLOCK.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetHighlightCol__FiPcUsUsUs(int Index /*$a0*/, char *SelList /*$a1*/, unsigned short P1Col /*$a2*/, unsigned short P2Col /*$a3*/, int P12Col /*stack 16*/)
 // line 115, offset 0x800919f8
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x800919F8
	/* end block 1 */
	// End offset: 0x80091A38
	// End Line: 124

	/* begin block 2 */
		// Start line: 231
	/* end block 2 */
	// End Line: 232

int GetHighlightCol__FiPcUsUsUs(int Index,char *SelList,ushort P1Col,ushort P2Col,int P12Col)

{
	uint uVar1;
	
	uVar1 = P12Col & 0xffff;
	if (((((int)*SelList != (int)SelList[1]) || ((int)*SelList != Index)) &&
			(uVar1 = (uint)P1Col, Index != (int)*SelList)) &&
		 (uVar1 = 0xffffffff, Index == (int)SelList[1])) {
		uVar1 = (uint)P2Col;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetHighlightCol__FiPiUsUsUs(int Index /*$a0*/, int *SelList /*$a1*/, unsigned short P1Col /*$a2*/, unsigned short P2Col /*$a3*/, int P12Col /*stack 16*/)
 // line 115, offset 0x80091abc
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x80091ABC
	/* end block 1 */
	// End offset: 0x80091AFC
	// End Line: 124

	/* begin block 2 */
		// Start line: 231
	/* end block 2 */
	// End Line: 232

int GetHighlightCol__FiPiUsUsUs(int Index,int *SelList,ushort P1Col,ushort P2Col,int P12Col)

{
	uint uVar1;
	
	uVar1 = P12Col & 0xffff;
	if ((((*SelList != SelList[1]) || (*SelList != Index)) && (uVar1 = (uint)P1Col, Index != *SelList)
			) && (uVar1 = 0xffffffff, Index == SelList[1])) {
		uVar1 = (uint)P2Col;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetCreature__14TownToCreaturei(struct TownToCreature *this /*$a0*/, int GameCreature /*$a1*/)
 // line 239, offset 0x80091be4
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x80091BE4
	/* end block 1 */
	// End offset: 0x80091BF8
	// End Line: 242

	/* begin block 2 */
		// Start line: 479
	/* end block 2 */
	// End Line: 480

int GetCreature__14TownToCreaturei(TownToCreature *this,int GameCreature)

{
	uint uVar1;
	
	uVar1 = 0xffffffff;
	if (GameCreature == (uint)this->GameEqu) {
		uVar1 = (uint)this->CreatureEquate;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateSel__FPUsUsPUc(unsigned short *Col /*$a0*/, unsigned short Add /*$a1*/, unsigned char *Count /*$a2*/)
 // line 310, offset 0x8008d41c
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x8008D41C
	/* end block 1 */
	// End offset: 0x8008D454
	// End Line: 317

	/* begin block 2 */
		// Start line: 621
	/* end block 2 */
	// End Line: 622

void UpdateSel__FPUsUsPUc(ushort *Col,ushort Add,uchar *Count)

{
	ushort uVar1;
	
	uVar1 = *Col;
	*Col = uVar1 & 0x7fff;
	if (0xf < *Count) {
		Add = -Add;
	}
	*Col = (uVar1 & 0x7fff) + Add;
	*Col = *Col | 0x8000;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CycleSelCols__Fv()
 // line 321, offset 0x8008d45c
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x8008D45C
	/* end block 1 */
	// End offset: 0x8008D604
	// End Line: 350

	/* begin block 2 */
		// Start line: 643
	/* end block 2 */
	// End Line: 644

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CycleSelCols__Fv(void)

{
	if (((PauseMode == '\0') && (stextflag == '\0')) && (qtextflag == '\0')) {
		UpdateSel__FPUsUsPUc(&P1ObjSelCol,0x400,&P1ObjSelCount);
		P1ObjSelCount = P1ObjSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P2ObjSelCol,1,&P2ObjSelCount);
		P2ObjSelCount = P2ObjSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P12ObjSelCol,0x401,&P12ObjSelCount);
		P12ObjSelCount = P12ObjSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P1ItemSelCol,0x400,&P1ItemSelCount);
		P1ItemSelCount = P1ItemSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P2ItemSelCol,1,&P2ItemSelCount);
		P2ItemSelCount = P2ItemSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P12ItemSelCol,0x401,&P12ItemSelCount);
		P12ItemSelCount = P12ItemSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P1MonstSelCol,0x400,&P1MonstSelCount);
		P1MonstSelCount = P1MonstSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P2MonstSelCol,1,&P2MonstSelCount);
		P2MonstSelCount = P2MonstSelCount + 1 & 0x1f;
		UpdateSel__FPUsUsPUc(&P12MonstSelCol,0x401,&P12MonstSelCount);
		P12MonstSelCount = P12MonstSelCount + 1 & 0x1f;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindTownCreature__7CBlocksi(struct CBlocks *this /*$a0*/, int GameEqu /*$s2*/)
 // line 358, offset 0x8008d614
	/* begin block 1 */
		// Start line: 359
		// Start offset: 0x8008D614

		/* begin block 1.1 */
			// Start line: 359
			// Start offset: 0x8008D614
			// Variables:
		// 		unsigned int f; // $s1

			/* begin block 1.1.1 */
				// Start line: 360
				// Start offset: 0x8008D640
				// Variables:
			// 		int Creature; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8008D65C
			// End Line: 364
		/* end block 1.1 */
		// End offset: 0x8008D664
		// End Line: 365
	/* end block 1 */
	// End offset: 0x8008D668
	// End Line: 367

	/* begin block 2 */
		// Start line: 749
	/* end block 2 */
	// End Line: 750

int FindTownCreature__7CBlocksi(CBlocks *this,int GameEqu)

{
	int iVar1;
	TownToCreature *this_00;
	uint uVar2;
	
	uVar2 = 0;
	this_00 = TownConv;
	while( true ) {
		if (9 < uVar2) {
			return -1;
		}
		iVar1 = GetCreature__14TownToCreaturei(this_00,GameEqu);
		this_00 = this_00 + 1;
		if (iVar1 != -1) break;
		uVar2 = uVar2 + 1;
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindCreature__7CBlocksi(struct CBlocks *this /*$a0*/, int MgNum /*$a1*/)
 // line 375, offset 0x8008d688
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x8008D688

		/* begin block 1.1 */
			// Start line: 376
			// Start offset: 0x8008D688
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8008D6D4
		// End Line: 381
	/* end block 1 */
	// End offset: 0x8008D6EC
	// End Line: 384

	/* begin block 2 */
		// Start line: 786
	/* end block 2 */
	// End Line: 787

int FindCreature__7CBlocksi(CBlocks *this,int MgNum)

{
	ushort uVar1;
	uint uVar2;
	byte *pbVar3;
	
	uVar1 = this->MonsterList->NumOfMonsters;
	uVar2 = 0;
	if (uVar1 != 0) {
		pbVar3 = this->MonsterList->TheList;
		do {
			if ((uint)*pbVar3 == MgNum) {
				return uVar2;
			}
			uVar2 = uVar2 + 1;
			pbVar3 = pbVar3 + 1;
		} while (uVar2 < (uint)uVar1);
	}
	DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x17e);
	return -1;
}



// decompiled code
// original method signature: 
// struct CBlocks * /*$ra*/ __7CBlocksiiiii(struct CBlocks *this /*$s1*/, int BgId /*$s0*/, int ObjId /*$s5*/, int ItemId /*$s4*/, int Level /*stack 16*/, int List /*stack 20*/)
 // line 392, offset 0x8008d6fc
	/* begin block 1 */
		// Start line: 393
		// Start offset: 0x8008D6FC
	/* end block 1 */
	// End offset: 0x8008D824
	// End Line: 442

	/* begin block 2 */
		// Start line: 820
	/* end block 2 */
	// End Line: 821

CBlocks * __7CBlocksiiiii(CBlocks *this,int BgId,int ObjId,int ItemId,int Level,int List)

{
	__7TextDat((TextDat *)this);
	(this->ClipRect).x = 1;
	(this->ClipRect).w = 0x13e;
	this->CursX = -1;
	this->CursY = -1;
	this->RndX = 0;
	this->RndY = 0;
	this->IsTown = (void *)0x0;
	(this->ClipRect).y = 0;
	(this->ClipRect).h = 0xf0;
	SetScrollTarget__7CBlocksii(this,0,0);
	SetXY__7CBlocksii(this,0,0);
	this->MonstTexId = -1;
	this->MonstTexDat = (TextDat *)0x0;
	this->MonsterList = (MonstList *)0x0;
	this->ObjTexId = -1;
	this->ObjTexDat = (TextDat *)0x0;
	this->ItemTexId = -1;
	this->ItemTexDat = (TextDat *)0x0;
	this->BgTexId = -1;
	this->BgTexDat = (TextDat *)0x0;
	Load__7CBlocksi(this,BgId);
	InitColourCycling__7CBlocks(this);
	this->BgTexId = BgId;
	*(CBlocks **)&this->BgTexDat = this;
	if (ItemId != -1) {
		SetItemGraphics__7CBlocksi(this,ItemId);
	}
	UPDATEPROGRESS__Fi(1);
	if (ObjId != -1) {
		SetObjGraphics__7CBlocksi(this,ObjId);
	}
	UPDATEPROGRESS__Fi(1);
	if (((Level != -1) && (List != -1)) && (Level != 0)) {
		SetMonsterGraphics__7CBlocksii(this,Level,List);
	}
	UPDATEPROGRESS__Fi(1);
	CurrentBlocks = this;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTownersGraphics__7CBlocks(struct CBlocks *this /*$s0*/)
 // line 461, offset 0x8008d860
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8008D860
	/* end block 1 */
	// End offset: 0x8008D884
	// End Line: 464

	/* begin block 2 */
		// Start line: 988
	/* end block 2 */
	// End Line: 989

void SetTownersGraphics__7CBlocks(CBlocks *this)

{
	TextDat *pTVar1;
	
	this->MonstTexId = 0xcd;
	pTVar1 = GM_UseTexData__Fi(0xcd);
	this->MonstTexDat = pTVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMonsterGraphics__7CBlocksii(struct CBlocks *this /*$s2*/, int Level /*$s0*/, int List /*$s1*/)
 // line 472, offset 0x8008d898
	/* begin block 1 */
		// Start line: 473
		// Start offset: 0x8008D898
		// Variables:
	// 		struct MonstLevel *MLev; // $s0
	// 		struct MonstList *MList; // $s0
	/* end block 1 */
	// End offset: 0x8008D944
	// End Line: 484

	/* begin block 2 */
		// Start line: 1012
	/* end block 2 */
	// End Line: 1013

void SetMonsterGraphics__7CBlocksii(CBlocks *this,int Level,int List)

{
	TextDat *pTVar1;
	uint Id;
	MonstList *pMVar2;
	
	Level = Level + -1;
	if ((Level < 0) || (NumOfMonsterListLevels <= Level)) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x1db);
	}
	if ((List < 0) || (AllLevels[Level].NumOfLists < List)) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x1dd);
	}
	pMVar2 = AllLevels[Level].TheLists;
	Id = (uint)pMVar2[List].TexNum;
	this->MonstTexId = Id;
	pTVar1 = GM_UseTexData__Fi(Id);
	this->MonstTexDat = pTVar1;
	this->MonsterList = pMVar2 + List;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7CBlocks(struct CBlocks *this /*$s0*/, int __in_chrg /*$s1*/)
 // line 493, offset 0x8008d960
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x8008D960
	/* end block 1 */
	// End offset: 0x8008D9B8
	// End Line: 505

	/* begin block 2 */
		// Start line: 1054
	/* end block 2 */
	// End Line: 1055

void ___7CBlocks(CBlocks *this,int __in_chrg)

{
	DumpMonsters__7CBlocks(this);
	DumpObjs__7CBlocks(this);
	DumpItems__7CBlocks(this);
	DumpGt4s__7CBlocks(this);
	DumpRects__7CBlocks(this);
	if (MissDat != (TextDat *)0x0) {
		GM_FinishedUsing__FP7TextDat(MissDat);
	}
	MissDat = (TextDat *)0x0;
	CurrentBlocks = (CBlocks *)0x0;
	___7TextDat((TextDat *)this,__in_chrg);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpGt4s__7CBlocks(struct CBlocks *this /*$s0*/)
 // line 515, offset 0x8008d9e8
	/* begin block 1 */
		// Start line: 516
		// Start offset: 0x8008D9E8

		/* begin block 1.1 */
			// Start line: 516
			// Start offset: 0x8008D9E8

			/* begin block 1.1.1 */
				// Start line: 518
				// Start offset: 0x8008DA0C
			/* end block 1.1.1 */
			// End offset: 0x8008DA38
			// End Line: 523
		/* end block 1.1 */
		// End offset: 0x8008DA38
		// End Line: 523
	/* end block 1 */
	// End offset: 0x8008DA38
	// End Line: 523

	/* begin block 2 */
		// Start line: 1099
	/* end block 2 */
	// End Line: 1100

void DumpGt4s__7CBlocks(CBlocks *this)

{
	uchar uVar1;
	
	if (this->hndGt4s != -1) {
		uVar1 = GAL_Free(this->hndGt4s);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x208);
		}
		this->Gt4s = (LittleGt4 *)0x0;
		this->hndGt4s = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpRects__7CBlocks(struct CBlocks *this /*$s0*/)
 // line 531, offset 0x8008da50
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x8008DA50

		/* begin block 1.1 */
			// Start line: 532
			// Start offset: 0x8008DA50

			/* begin block 1.1.1 */
				// Start line: 534
				// Start offset: 0x8008DA74
			/* end block 1.1.1 */
			// End offset: 0x8008DAA0
			// End Line: 539
		/* end block 1.1 */
		// End offset: 0x8008DAA0
		// End Line: 539
	/* end block 1 */
	// End offset: 0x8008DAA0
	// End Line: 539

	/* begin block 2 */
		// Start line: 1131
	/* end block 2 */
	// End Line: 1132

void DumpRects__7CBlocks(CBlocks *this)

{
	uchar uVar1;
	
	if (this->hndRects != -1) {
		uVar1 = GAL_Free(this->hndRects);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x218);
		}
		this->Rects = (RECT *)0x0;
		this->hndRects = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this /*$a0*/, struct TextDat **TDat /*$s2*/, int *pId /*$s0*/, int Id /*$s1*/)
 // line 548, offset 0x8008dab8
	/* begin block 1 */
		// Start line: 549
		// Start offset: 0x8008DAB8
	/* end block 1 */
	// End offset: 0x8008DAF8
	// End Line: 554

	/* begin block 2 */
		// Start line: 1165
	/* end block 2 */
	// End Line: 1166

void SetGraphics__7CBlocksPP7TextDatPii(CBlocks *this,TextDat **TDat,int *pId,int Id)

{
	TextDat *pTVar1;
	
	if (Id != *pId) {
		DumpGraphics__7CBlocksPP7TextDatPi(this,TDat,pId);
		*pId = Id;
		pTVar1 = GM_UseTexData__Fi(Id);
		*TDat = pTVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this /*$a0*/, struct TextDat **TDat /*$s0*/, int *Id /*$s1*/)
 // line 563, offset 0x8008db14
	/* begin block 1 */
		// Start line: 564
		// Start offset: 0x8008DB14
	/* end block 1 */
	// End offset: 0x8008DB4C
	// End Line: 570

	/* begin block 2 */
		// Start line: 1196
	/* end block 2 */
	// End Line: 1197

void DumpGraphics__7CBlocksPP7TextDatPi(CBlocks *this,TextDat **TDat,int *Id)

{
	if (*TDat != (TextDat *)0x0) {
		GM_FinishedUsing__FP7TextDat(*TDat);
		*TDat = (TextDat *)0x0;
	}
	*Id = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7CBlocksi(struct CBlocks *this /*$s0*/, int Id /*$s1*/)
 // line 624, offset 0x8008db64
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x8008DB64

		/* begin block 1.1 */
			// Start line: 625
			// Start offset: 0x8008DB64

			/* begin block 1.1.1 */
				// Start line: 627
				// Start offset: 0x8008DB88
			/* end block 1.1.1 */
			// End offset: 0x8008DC04
			// End Line: 637
		/* end block 1.1 */
		// End offset: 0x8008DC04
		// End Line: 637
	/* end block 1 */
	// End offset: 0x8008DC04
	// End Line: 637

	/* begin block 2 */
		// Start line: 1318
	/* end block 2 */
	// End Line: 1319

void Load__7CBlocksi(CBlocks *this,int Id)

{
	if ((this->TextDat).Loaded == (void *)0x0) {
		SYSI_GetFs__Fv();
		SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,(CTextFileInfo *)TX_DatTab[Id],-1);
		Use__7TextDatlbi((TextDat *)this,-1,&DAT_00000001,0);
		if ((this->TextDat).hndBlockOffsets == -1) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x277);
		}
		this->NumOfBlocks = *(int *)(this->TextDat).Blocks;
		MakeGt4Table__7CBlocks(this);
		MakeRectTable__7CBlocks(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeRectTable__7CBlocks(struct CBlocks *this /*$s1*/)
 // line 648, offset 0x8008dc1c
	/* begin block 1 */
		// Start line: 649
		// Start offset: 0x8008DC1C
		// Variables:
	// 		unsigned char *MyBlocks; // $s3
	// 		int *BlockOffsets; // $s2

		/* begin block 1.1 */
			// Start line: 675
			// Start offset: 0x8008DCE0
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x8008DD24
		// End Line: 681
	/* end block 1 */
	// End offset: 0x8008DD50
	// End Line: 686

	/* begin block 2 */
		// Start line: 1366
	/* end block 2 */
	// End Line: 1367

void MakeRectTable__7CBlocks(CBlocks *this)

{
	long lVar1;
	RECT *pRVar2;
	int iVar3;
	int iVar4;
	int *piVar5;
	uchar *puVar6;
	
	lVar1 = GAL_Alloc(this->NumOfBlocks << 3,(ulong)&DAT_00008001,"RECTTAB");
	this->hndRects = lVar1;
	if (lVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x296);
	}
	pRVar2 = (RECT *)GAL_Lock(this->hndRects);
	this->Rects = pRVar2;
	if (pRVar2 == (RECT *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x299);
	}
	piVar5 = (int *)GAL_Lock((this->TextDat).hndBlockOffsets);
	if (piVar5 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x29f);
	}
	puVar6 = (this->TextDat).Blocks;
	if (puVar6 == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x2a2);
	}
	iVar4 = 0;
	if (0 < this->NumOfBlocks) {
		do {
			iVar3 = *piVar5;
			piVar5 = piVar5 + 1;
			GetBoundingBox__6CBlockR7TextDatR4RECT
								((CBlock *)(puVar6 + iVar3),(TextDat *)this,this->Rects + iVar4);
			iVar4 = iVar4 + 1;
		} while (iVar4 < this->NumOfBlocks);
	}
	GAL_Unlock((this->TextDat).hndBlockOffsets);
	if ((this->TextDat).hndBlockOffsets == 0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x2ad);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeGt4Table__7CBlocks(struct CBlocks *this /*$s0*/)
 // line 698, offset 0x8008dd70
	/* begin block 1 */
		// Start line: 699
		// Start offset: 0x8008DD70

		/* begin block 1.1 */
			// Start line: 705
			// Start offset: 0x8008DDF0
			// Variables:
		// 		unsigned int f; // $s3

			/* begin block 1.1.1 */
				// Start line: 705
				// Start offset: 0x8008DDF8
				// Variables:
			// 		struct POLY_GT4 ThisGt4; // stack offset -80
			/* end block 1.1.1 */
			// End offset: 0x8008DF28
			// End Line: 719
		/* end block 1.1 */
		// End offset: 0x8008DF34
		// End Line: 720
	/* end block 1 */
	// End offset: 0x8008DF34
	// End Line: 720

	/* begin block 2 */
		// Start line: 1477
	/* end block 2 */
	// End Line: 1478

void MakeGt4Table__7CBlocks(CBlocks *this)

{
	long lVar1;
	LittleGt4 *pLVar2;
	uint uVar3;
	int iVar4;
	uint uVar5;
	POLY_GT4 PStack80;
	
	lVar1 = GAL_Alloc((uint)*(ushort *)&((this->TextDat).Hdr)->NumOfFrames << 4,(ulong)&DAT_00008001,
										"GT4TAB");
	this->hndGt4s = lVar1;
	if (lVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",700);
	}
	pLVar2 = (LittleGt4 *)GAL_Lock(this->hndGt4s);
	this->Gt4s = pLVar2;
	if (pLVar2 == (LittleGt4 *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x2be);
	}
	uVar5 = 0;
	iVar4 = 0;
	while (uVar5 < (uint)*(ushort *)&((this->TextDat).Hdr)->NumOfFrames) {
		MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR
							(this,&PStack80,(FRAME_HDR *)((int)&((this->TextDat).Frames)->FrOffset + iVar4));
		uVar3 = *(uint *)((int)&((this->TextDat).Frames)->Y + iVar4);
		InitFromGt4__9LittleGt4P8POLY_GT4ii
							(this->Gt4s + uVar5,&PStack80,uVar3 & 0x1ff,uVar3 >> 9 & 0x1ff);
		this->Gt4s[uVar5].Flags = '\0';
		if ((*(uint *)((int)&((this->TextDat).Frames)->X + iVar4) & 0x20000000) != 0) {
			this->Gt4s[uVar5].Flags = this->Gt4s[uVar5].Flags | 1;
		}
		if ((*(uint *)((int)&((this->TextDat).Frames)->X + iVar4) & 0x21000000) != 0) {
			this->Gt4s[uVar5].Flags = this->Gt4s[uVar5].Flags | 2;
		}
		if (((*(uint *)((int)&((this->TextDat).Frames)->X + iVar4) & 0x40000000) != 0) &&
			 (leveltype == '\0')) {
			this->Gt4s[uVar5].Flags = this->Gt4s[uVar5].Flags | 0x10;
		}
		iVar4 = iVar4 + 0xc;
		uVar5 = uVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this /*$a0*/, struct POLY_GT4 *GT4 /*$s1*/, struct FRAME_HDR *Fr /*$s0*/)
 // line 729, offset 0x8008df54
	/* begin block 1 */
		// Start line: 730
		// Start offset: 0x8008DF54
		// Variables:
	// 		int H; // $v0
	// 		int Rotated; // $v1
	// 		int Tpage; // $t1
	// 		int zU; // $a3
	// 		int zV; // $t0
	// 		int zW; // $a0
	// 		int zH; // $a1
	/* end block 1 */
	// End offset: 0x8008E064
	// End Line: 790

	/* begin block 2 */
		// Start line: 1539
	/* end block 2 */
	// End Line: 1540

void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(CBlocks *this,POLY_GT4 *GT4,FRAME_HDR *Fr)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	ushort uVar6;
	PAL *pPVar7;
	uchar uVar8;
	ushort uVar9;
	uint uVar10;
	
	uVar10 = Fr->Y;
	*(undefined *)((int)&GT4->tag + 3) = 0xc;
	GT4->code = '<';
	GT4->x0 = 0;
	GT4->y0 = 0;
	GT4->y1 = 0;
	GT4->x2 = 0;
	uVar9 = (ushort)uVar10 & 0x1ff;
	uVar6 = (ushort)(uVar10 >> 9) & 0x1ff;
	GT4->x1 = uVar9;
	GT4->y2 = uVar6;
	GT4->x3 = uVar9;
	GT4->y3 = uVar6;
	pPVar7 = GetPal__7TextDati((TextDat *)this,(uint)*(byte *)((int)&Fr->X + 2));
	GT4->clut = *(ushort *)((int)&pPVar7->InVram + 2);
	uVar10 = Fr->X;
	uVar6 = *(ushort *)((int)&Fr->FrOffset + 2);
	uVar1 = *(uchar *)&Fr->FrOffset;
	uVar2 = *(uchar *)((int)&Fr->FrOffset + 1);
	cVar4 = (char)((uint)Fr->Y >> 9);
	cVar3 = (char)Fr->Y;
	GT4->code = GT4->code & 0xfd;
	if ((uVar10 >> 0x19 & 1) == 0) {
		uVar8 = uVar1 + cVar3;
		uVar5 = uVar2 + cVar4;
		GT4->u0 = uVar1;
		GT4->v0 = uVar2;
		GT4->u1 = uVar8;
		GT4->v1 = uVar2;
		GT4->u2 = uVar1;
		GT4->v2 = uVar5;
	}
	else {
		uVar5 = uVar2 + cVar3 + -1;
		uVar8 = uVar1 + cVar4;
		GT4->v0 = uVar5;
		GT4->v2 = uVar5;
		uVar5 = uVar2 + -1;
		GT4->u0 = uVar1;
		GT4->u2 = uVar8;
		GT4->u1 = uVar1;
		GT4->v1 = uVar5;
	}
	GT4->u3 = uVar8;
	GT4->v3 = uVar5;
	GT4->tpage = uVar6;
	GT4->code = GT4->code & 0xfe;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MyRoutine__FR7CBlocksii(struct CBlocks *B /*$s0*/, int x /*$s1*/, int y /*$s2*/)
 // line 801, offset 0x8008e07c
	/* begin block 1 */
		// Start line: 802
		// Start offset: 0x8008E07C
	/* end block 1 */
	// End offset: 0x8008E0C8
	// End Line: 807

	/* begin block 2 */
		// Start line: 1719
	/* end block 2 */
	// End Line: 1720

void MyRoutine__FR7CBlocksii(CBlocks *B,int x,int y)

{
	OldSp = SetSp(&DAT_1f8003f0);
	PrintMap__7CBlocksii(B,x,y);
	SetSp(OldSp);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRandOffset__7CBlocksi(struct CBlocks *this /*$s2*/, int QuakeAmount /*$s0*/)
 // line 810, offset 0x8008e0e4
	/* begin block 1 */
		// Start line: 811
		// Start offset: 0x8008E0E4
	/* end block 1 */
	// End offset: 0x8008E124
	// End Line: 813

	/* begin block 2 */
		// Start line: 1740
	/* end block 2 */
	// End Line: 1741

void SetRandOffset__7CBlocksi(CBlocks *this,int QuakeAmount)

{
	ulong uVar1;
	
	uVar1 = GU_GetRndRange(QuakeAmount << 1);
	this->RndX = uVar1 - QuakeAmount;
	uVar1 = GU_GetRndRange(QuakeAmount << 1);
	this->RndY = uVar1 - QuakeAmount;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Print__7CBlocks(struct CBlocks *this /*$s0*/)
 // line 816, offset 0x8008e140
	/* begin block 1 */
		// Start line: 817
		// Start offset: 0x8008E140
		// Variables:
	// 		int MxInt; // $s2
	// 		int MyInt; // $s1
	/* end block 1 */
	// End offset: 0x8008E240
	// End Line: 844

	/* begin block 2 */
		// Start line: 1755
	/* end block 2 */
	// End Line: 1756

void Print__7CBlocks(CBlocks *this)

{
	int y;
	int x;
	
	if ((plr._pInfraFlag == '\0') && (PlayerStruct_800dbf20._pInfraFlag == '\0')) {
		InfraFlag = (void *)0x0;
	}
	else {
		InfraFlag = &DAT_00000001;
	}
	x = (int)*(short *)((int)&this->Mx + 2) - this->RndX;
	y = (int)*(short *)((int)&this->My + 2) - this->RndY;
	MyRoutine__FR7CBlocksii(this,x,y);
	if (leveltype == '\0') {
		PrintItems__7CBlocksii(this,x,y);
		PrintTowners__7CBlocksii(this,x,y);
	}
	else {
		PrintDead__7CBlocksii(this,x,y);
		PrintMonsters__7CBlocksii(this,x,y);
		PrintObjects__7CBlocksii(this,x,y);
		PrintItems__7CBlocksii(this,x,y);
	}
	PrintMissiles__7CBlocksii(this,x,y);
	this->RndX = 0;
	this->RndY = 0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetXY__7CBlocksii(struct CBlocks *this /*$a0*/, int nx /*$a1*/, int ny /*$a2*/)
 // line 854, offset 0x8008e25c
	/* begin block 1 */
		// Start line: 855
		// Start offset: 0x8008E25C
	/* end block 1 */
	// End offset: 0x8008E274
	// End Line: 858

	/* begin block 2 */
		// Start line: 1836
	/* end block 2 */
	// End Line: 1837

void SetXY__7CBlocksii(CBlocks *this,int nx,int ny)

{
	this->Mx = nx;
	this->My = ny;
	SetScrollTarget__7CBlocksii(this,this->Mx,ny);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetXY__7CBlocksPiT1(struct CBlocks *this /*$a0*/, int *nx /*$a1*/, int *ny /*$a2*/)
 // line 867, offset 0x8008e284
	/* begin block 1 */
		// Start line: 868
		// Start offset: 0x8008E284
	/* end block 1 */
	// End offset: 0x8008E294
	// End Line: 870

	/* begin block 2 */
		// Start line: 1863
	/* end block 2 */
	// End Line: 1864

void GetXY__7CBlocksPiT1(CBlocks *this,int *nx,int *ny)

{
	*nx = this->Mx;
	*ny = this->My;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitColourCycling__7CBlocks(struct CBlocks *this /*$s1*/)
 // line 879, offset 0x8008e29c
	/* begin block 1 */
		// Start line: 880
		// Start offset: 0x8008E29C
		// Variables:
	// 		int CycleIndex; // $s0

		/* begin block 1.1 */
			// Start line: 880
			// Start offset: 0x8008E29C
			// Variables:
		// 		int f; // $s3

			/* begin block 1.1.1 */
				// Start line: 885
				// Start offset: 0x8008E2D4

				/* begin block 1.1.1.1 */
					// Start line: 887
					// Start offset: 0x8008E2F0

					/* begin block 1.1.1.1.1 */
						// Start line: 888
						// Start offset: 0x8008E310
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008E320
					// End Line: 893
				/* end block 1.1.1.1 */
				// End offset: 0x8008E320
				// End Line: 893
			/* end block 1.1.1 */
			// End offset: 0x8008E320
			// End Line: 893
		/* end block 1.1 */
		// End offset: 0x8008E32C
		// End Line: 895

		/* begin block 1.2 */
			// Start line: 903
			// Start offset: 0x8008E340
			// Variables:
		// 		int f; // $s3
		// 		int f; // $s3

			/* begin block 1.2.1 */
				// Start line: 905
				// Start offset: 0x8008E354

				/* begin block 1.2.1.1 */
					// Start line: 907
					// Start offset: 0x8008E370

					/* begin block 1.2.1.1.1 */
						// Start line: 908
						// Start offset: 0x8008E390
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008E3A0
					// End Line: 913
				/* end block 1.2.1.1 */
				// End offset: 0x8008E3A0
				// End Line: 913
			/* end block 1.2.1 */
			// End offset: 0x8008E3A0
			// End Line: 913
		/* end block 1.2 */
		// End offset: 0x8008E3AC
		// End Line: 915
	/* end block 1 */
	// End offset: 0x8008E3C0
	// End Line: 919

	/* begin block 2 */
		// Start line: 1886
	/* end block 2 */
	// End Line: 1887

void InitColourCycling__7CBlocks(CBlocks *this)

{
	int iVar1;
	PAL *pPVar2;
	uint uVar3;
	int iVar4;
	int iVar5;
	
	uVar3 = 0xffffffff;
	iVar5 = 0;
	iVar4 = 0;
	while (iVar1 = GetNumOfFrames__7TextDat((TextDat *)this), iVar5 < iVar1) {
		if (uVar3 != 0xffffffff) goto LAB_8008e338;
		iVar1 = (int)&((this->TextDat).Frames)->FrOffset + iVar4;
		if ((*(uint *)(iVar1 + 4) & 0x40000000) != 0) {
			pPVar2 = GetPal__7TextDati((TextDat *)this,(uint)*(byte *)(iVar1 + 6));
			uVar3 = (uint)*(ushort *)((int)&pPVar2->InVram + 2);
		}
		iVar4 = iVar4 + 0xc;
		iVar5 = iVar5 + 1;
	}
	if (uVar3 != 0xffffffff) {
LAB_8008e338:
		water_clut = (ushort)uVar3;
	}
	uVar3 = 0xffffffff;
	iVar5 = 0;
	iVar4 = 0;
	while (iVar1 = GetNumOfFrames__7TextDat((TextDat *)this), iVar5 < iVar1) {
		if (uVar3 != 0xffffffff) goto LAB_8008e3b8;
		iVar1 = (int)&((this->TextDat).Frames)->FrOffset + iVar4;
		if ((*(uint *)(iVar1 + 8) & 0x40000) != 0) {
			pPVar2 = GetPal__7TextDati((TextDat *)this,(uint)*(byte *)(iVar1 + 6));
			uVar3 = (uint)*(ushort *)((int)&pPVar2->InVram + 2);
		}
		iVar4 = iVar4 + 0xc;
		iVar5 = iVar5 + 1;
	}
	if (uVar3 != 0xffffffff) {
LAB_8008e3b8:
		penta_clut = (ushort)uVar3;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetGCol__7CBlocksiiPUcP7RGBData(struct CBlocks *this /*$a0*/, int x /*$a0*/, int y /*$a2*/, unsigned char *Rgb /*$t2*/, struct RGBData *Data /*stack 16*/)
 // line 958, offset 0x8008e3e8
	/* begin block 1 */
		// Start line: 959
		// Start offset: 0x8008E3E8
		// Variables:
	// 		int rgb_itxr; // $v0
	// 		int rgb_itxg; // $v0
	// 		int rgb_itxb; // $v0
	// 		int rgb_leftr; // $a3
	// 		int rgb_leftg; // $a2
	// 		int rgb_leftb; // $a1
	// 		int rgb_rightr; // $v0
	// 		int rgb_rightg; // $v0
	// 		int rgb_rightb; // $v0
	// 		int rgb_cordr; // $a0
	// 		int rgb_cordg; // $v1
	// 		int rgb_cordb; // $v0
	/* end block 1 */
	// End offset: 0x8008E520
	// End Line: 1010

	/* begin block 2 */
		// Start line: 2067
	/* end block 2 */
	// End Line: 2068

void GetGCol__7CBlocksiiPUcP7RGBData(CBlocks *this,int x,int y,uchar *Rgb,RGBData *Data)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (0x40 < x) {
		x = 0x40;
	}
	if (0x80 < y) {
		y = 0x80;
	}
	if (x < 0) {
		x = 0;
	}
	if (y < 0) {
		y = 0;
	}
	iVar3 = (Data->rgb_ity2).g;
	iVar4 = (Data->rgb_ity2).b;
	iVar7 = (y * (Data->rgb_ity1).r >> 0x10) + (uint)(Data->rgbb).r1;
	bVar1 = (Data->rgbb).g2;
	iVar6 = (y * (Data->rgb_ity1).g >> 0x10) + (uint)(Data->rgbb).g1;
	bVar2 = (Data->rgbb).b2;
	iVar5 = (y * (Data->rgb_ity1).b >> 0x10) + (uint)(Data->rgbb).b1;
	*Rgb = (char)(x * (((y * (Data->rgb_ity2).r >> 0x10) + (uint)(Data->rgbb).r2) - iVar7) * 0x400 >>
							 0x10) + (char)iVar7;
	Rgb[1] = (char)(x * (((y * iVar3 >> 0x10) + (uint)bVar1) - iVar6) * 0x400 >> 0x10) + (char)iVar6;
	Rgb[2] = (char)(x * (((y * iVar4 >> 0x10) + (uint)bVar2) - iVar5) * 0x400 >> 0x10) + (char)iVar5;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMap__7CBlocksii(struct CBlocks *this /*stack -200*/, int x /*stack -192*/, int y /*stack -184*/)
 // line 1025, offset 0x8008e528
	/* begin block 1 */
		// Start line: 1026
		// Start offset: 0x8008E528
		// Variables:
	// 		int XPos; // stack offset -176
	// 		int YPos; // stack offset -168
	// 		int xx; // stack offset -160
	// 		int BlankBlock; // stack offset -152
	// 		unsigned char *MyBlocks; // stack offset -144
	// 		int *BlockOffsets; // stack offset -136
	// 		int XPix; // $s4
	// 		int YPix; // $s5
	// 		int nx; // $s3
	// 		int ny; // $s0
	// 		int CLeft; // stack offset -128
	// 		int CRight; // stack offset -120
	// 		int CTop; // stack offset -112
	// 		int CBottom; // stack offset -104

		/* begin block 1.1 */
			// Start line: 1118
			// Start offset: 0x8008E7FC
			// Variables:
		// 		int ThisY; // stack offset -96
		// 		int ThisXPos; // stack offset -88
		// 		int ThisYPos; // $s5
		// 		int Height; // stack offset -80

			/* begin block 1.1.1 */
				// Start line: 1131
				// Start offset: 0x8008E84C
				// Variables:
			// 		struct CPart *Parts; // $s6
			// 		struct CBlock *MyBlock; // $s2
			// 		int BlockNum; // $a2
			// 		struct RGBData MyRgbData; // stack offset -248
			// 		int bx; // $s0
			// 		int by; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1181
					// Start offset: 0x8008EA40

					/* begin block 1.1.1.1.1 */
						// Start line: 1185
						// Start offset: 0x8008EA58
						// Variables:
					// 		struct RECT *BlockR; // $a1
					// 		int clipx; // $a0
					// 		int clipy; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1186
							// Start offset: 0x8008EA58

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1199
								// Start offset: 0x8008EAF0
								// Variables:
							// 		int NumOfParts; // stack offset -72
							// 		void * DoTrans; // $a3
							// 		int OtPos; // $s4
							// 		void * PFlag; // stack offset -64

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1206
									// Start offset: 0x8008EAF0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1218
										// Start offset: 0x8008EB94

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1219
											// Start offset: 0x8008EB94
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8008EC80
										// End Line: 1237
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8008EC80
									// End Line: 1237
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8008EC80
								// End Line: 1237

								/* begin block 1.1.1.1.1.1.1.2 */
									// Start line: 1252
									// Start offset: 0x8008ECCC
									// Variables:
								// 		int f; // stack offset -56

									/* begin block 1.1.1.1.1.1.1.2.1 */
										// Start line: 1256
										// Start offset: 0x8008ED14
										// Variables:
									// 		struct POLY_GT4 *DestGt4; // stack offset -208
									// 		struct LittleGt4 *ThisGt4; // $s0
									// 		unsigned char Flags; // $v1
									// 		int W; // $s3
									// 		int H; // $s0

										/* begin block 1.1.1.1.1.1.1.2.1.1 */
											// Start line: 1274
											// Start offset: 0x8008EE28

											/* begin block 1.1.1.1.1.1.1.2.1.1.1 */
												// Start line: 1278
												// Start offset: 0x8008EE3C
												// Variables:
											// 		int r; // $v1
											// 		int g; // $a0
											// 		int b; // $a1
											/* end block 1.1.1.1.1.1.1.2.1.1.1 */
											// End offset: 0x8008EE3C
											// End Line: 1281
										/* end block 1.1.1.1.1.1.1.2.1.1 */
										// End offset: 0x8008EF84
										// End Line: 1314
									/* end block 1.1.1.1.1.1.1.2.1 */
									// End offset: 0x8008EF84
									// End Line: 1317
								/* end block 1.1.1.1.1.1.1.2 */
								// End offset: 0x8008EF9C
								// End Line: 1318
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8008EF9C
							// End Line: 1318
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008EF9C
						// End Line: 1318
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008EF9C
					// End Line: 1318
				/* end block 1.1.1.1 */
				// End offset: 0x8008EF9C
				// End Line: 1318
			/* end block 1.1.1 */
			// End offset: 0x8008EF9C
			// End Line: 1322
		/* end block 1.1 */
		// End offset: 0x8008EFF8
		// End Line: 1333
	/* end block 1 */
	// End offset: 0x8008F064
	// End Line: 1342

	/* begin block 2 */
		// Start line: 2279
	/* end block 2 */
	// End Line: 2280

void PrintMap__7CBlocksii(CBlocks *this,int x,int y)

{
	byte bVar1;
	byte bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	ulong *puVar7;
	RECT *pRVar8;
	short *psVar9;
	uint uVar10;
	bool bVar11;
	LittleGt4 *pLVar12;
	int y_00;
	int x_00;
	int iVar13;
	int iVar14;
	uint uVar15;
	int *piVar16;
	RGBData local_f8;
	POLY_GT4 *local_d0 [2];
	CBlocks *local_c8;
	int local_c0;
	int local_b8;
	uint local_b0;
	uint local_a8;
	uint local_a0;
	uint local_98;
	uchar *local_90;
	void *local_88;
	int local_80;
	int local_78;
	int local_70;
	int local_68;
	int local_60;
	uint local_58;
	int local_50;
	int local_48;
	uint local_40;
	int local_38;
	uint local_30;
	
	local_c8 = this;
	local_c0 = x;
	local_b8 = y;
	local_88 = GAL_Lock((this->TextDat).hndBlockOffsets);
	if (local_88 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x40c);
	}
	local_90 = (local_c8->TextDat).Blocks;
	if (local_90 == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x40f);
	}
	CycleSelCols__Fv();
	switch(leveltype) {
	case '\0':
		local_98 = 3;
		break;
	case '\x01':
		local_98 = 0x16;
		break;
	case '\x02':
		local_98 = 0xc;
		break;
	case '\x03':
		local_98 = 8;
		break;
	case '\x04':
		local_98 = 0x14;
		break;
	default:
		local_98 = 0;
	}
	local_b0 = local_c0 / 0x28;
	iVar13 = local_c0 % 0x28;
	local_a8 = local_b8 / 0x28;
	iVar14 = local_b8 % 0x28;
	if (local_c0 < 0) {
		local_b0 = local_b0 - 1;
		iVar13 = iVar13 + 0x28;
	}
	iVar3 = WorldToScrX__7CBlocksii(local_c8,local_c0,local_b8);
	x_00 = local_c0 - iVar13;
	y_00 = local_b8 - iVar14;
	iVar4 = WorldToScrX__7CBlocksii(local_c8,x_00,y_00);
	iVar3 = iVar3 - iVar4;
	iVar4 = WorldToScrY__7CBlocksii(local_c8,local_c0,local_b8);
	y_00 = WorldToScrY__7CBlocksii(local_c8,x_00,y_00);
	iVar4 = iVar4 - y_00;
	if (local_c8->IsTown == (void *)0x0) {
		y_00 = WorldToScrX__7CBlocksii(local_c8,0x140,0x140);
		iVar3 = iVar3 - y_00;
		y_00 = WorldToScrX__7CBlocksii(local_c8,0x140,0x140);
		iVar4 = iVar4 - y_00;
		local_b0 = local_b0 - 8;
		local_a8 = local_a8 - 8;
	}
	local_80 = (int)(local_c8->ClipRect).x;
	local_70 = (int)(local_c8->ClipRect).y;
	local_c0 = (GMXAdj2 - iVar3) + local_80;
	local_b8 = (GMYAdj2 - iVar4) + local_70;
	local_78 = local_80 + (int)(local_c8->ClipRect).w;
	local_68 = local_70 + (int)(local_c8->ClipRect).h;
	if (iVar13 - iVar14 < 0) {
		local_b0 = local_b0 - 1;
		local_a0 = 1;
		local_c0 = local_c0 + -0x28;
	}
	else {
		local_a0 = 0;
	}
	while (local_c0 < local_78) {
		local_60 = local_b8;
		if ((local_a0 & 1) != 0) {
			local_60 = local_b8 + -0x14;
		}
		local_50 = 0;
		iVar13 = local_b0 * 0x38;
		local_58 = local_b0;
		uVar15 = local_a8;
		while ((local_b8 < local_68 && (local_50 = local_50 + 1, local_50 < 0xb))) {
			if ((uVar15 < 0x2f) && (local_58 < 0x2f)) {
				local_f8.rgbb.r1 = *(byte *)(iVar13 + -0x7feffe10 + uVar15);
				local_f8.rgbb.g1 = *(byte *)(iVar13 + -0x7feff1d0 + uVar15);
				local_f8.rgbb.b1 = *(byte *)(iVar13 + -0x7fefe590 + uVar15);
				local_f8.rgbb.r2 = (&dung_map_r + uVar15 + iVar13)[-1];
				local_f8.rgbb.g2 = (&dung_map_g + uVar15 + iVar13)[-1];
				local_f8.rgbb.b2 = (&dung_map_b + uVar15 + iVar13)[-1];
				local_f8.rgbb.r3 = (&dung_map_r + uVar15 + iVar13)[1];
				local_f8.rgbb.g3 = (&dung_map_g + uVar15 + iVar13)[1];
				local_f8.rgbb.b3 = (&dung_map_b + uVar15 + iVar13)[1];
				local_f8.rgbb.r4 = (&DAT_80100260)[uVar15 + iVar13];
				local_f8.rgbb.g4 = (&DAT_80100ea0)[uVar15 + iVar13];
				local_f8.rgbb.b4 = (&DAT_80101ae0)[uVar15 + iVar13];
				uVar10 = (uint)dungeon[local_58 * 0x30 + uVar15];
			}
			else {
				local_f8.rgbb.r4 = (byte)restore_r;
				local_f8.rgbb.r3 = (byte)restore_r;
				local_f8.rgbb.r2 = (byte)restore_r;
				local_f8.rgbb.r1 = (byte)restore_r;
				local_f8.rgbb.g4 = (byte)restore_g;
				local_f8.rgbb.g3 = (byte)restore_g;
				local_f8.rgbb.g2 = (byte)restore_g;
				local_f8.rgbb.g1 = (byte)restore_g;
				local_f8.rgbb.b4 = (byte)restore_b;
				local_f8.rgbb.b3 = (byte)restore_b;
				local_f8.rgbb.b2 = (byte)restore_b;
				local_f8.rgbb.b1 = (byte)restore_b;
				uVar10 = local_98;
			}
			if ((int)(local_58 - 1) < 1) {
				local_f8.rgbb.r1 = (byte)restore_r;
				local_f8.rgbb.g1 = (byte)restore_g;
				local_f8.rgbb.b1 = (byte)restore_b;
			}
			iVar14 = uVar15 + 8;
			y_00 = iVar14 * 2;
			iVar3 = local_58 + 8;
			iVar4 = iVar3 * 2;
			if (uVar10 != 0) {
				pRVar8 = local_c8->Rects + (uVar10 - 1);
				piVar16 = (int *)(local_90 + *(int *)((uVar10 - 1) * 4 + (int)local_88));
				iVar5 = (int)pRVar8->x + local_c0;
				x_00 = (int)pRVar8->y + local_60;
				if ((((local_80 <= iVar5 + (int)pRVar8->w) && (iVar5 < local_78)) &&
						(local_70 <= x_00 + (int)pRVar8->h)) && (bVar11 = false, x_00 < local_68)) {
					local_f8.rgb_ity1.r = ((uint)local_f8.rgbb.r3 - (uint)local_f8.rgbb.r1) * 0x200;
					local_f8.rgb_ity1.g = ((uint)local_f8.rgbb.g3 - (uint)local_f8.rgbb.g1) * 0x200;
					local_f8.rgb_ity1.b = ((uint)local_f8.rgbb.b3 - (uint)local_f8.rgbb.b1) * 0x200;
					local_f8.rgb_ity2.r = ((uint)local_f8.rgbb.r4 - (uint)local_f8.rgbb.r2) * 0x200;
					local_f8.rgb_ity2.g = ((uint)local_f8.rgbb.g4 - (uint)local_f8.rgbb.g2) * 0x200;
					local_f8.rgb_ity2.b = ((uint)local_f8.rgbb.b4 - (uint)local_f8.rgbb.b2) * 0x200;
					local_48 = *piVar16;
					if ((&dung_map)[iVar3 * 0xe0 + iVar14 * 2].dTransVal != '\0') {
						psVar9 = &plr._py;
						puVar6 = (undefined *)0x0;
						do {
							if ((&plr.plractive)[(int)puVar6] != '\0') {
								x_00 = (int)*psVar9;
								if ((x_00 + -6 < y_00) && (y_00 < x_00 + 6)) {
									x_00 = (int)*(short *)((int)&plr._px + (int)puVar6);
									if ((x_00 + -6 < iVar4) && (iVar4 < x_00 + 6)) {
										bVar11 = true;
									}
									x_00 = (int)*psVar9;
								}
								if (((x_00 + -4 < y_00) && (y_00 < x_00 + 4)) &&
									 ((x_00 = (int)*(short *)((int)&plr._px + (int)puVar6), x_00 + -4 < iVar4 &&
										((iVar4 < x_00 + 4 && (!bVar11)))))) {
									bVar11 = true;
								}
							}
							psVar9 = psVar9 + 0xcf4;
							puVar6 = &DAT_000019e8 + (int)puVar6;
						} while ((int)psVar9 < -0x7ff226c6);
					}
					ABL_SetBlockRGBXY(&local_c8->GlBlockInf,local_c0,local_60);
					piVar16 = piVar16 + local_48 * 2 + -1;
					y_00 = local_60 + -0x28;
					iVar4 = y_00;
					if (y_00 < -0x43) {
						iVar4 = -0x43;
					}
					iVar4 = iVar4 + 0x4d;
					if (0x19b < y_00) {
						iVar4 = 0x1e8;
					}
					local_38 = 0;
					psVar9 = (short *)((int)piVar16 + 6);
					local_40 = (uint)((byte)(&dung_map)[iVar3 * 0xe0 + iVar14 * 2].dFlags >> 5) & 1;
					uVar10 = 0xff000000;
					while (local_38 < local_48) {
						pLVar12 = local_c8->Gt4s + *piVar16;
						local_30 = uVar10;
						PRIM_GetPrim__FPP8POLY_GT4(local_d0);
						ABL_PrintPart(piVar16,pLVar12,local_d0[0]);
						puVar7 = ThisOt;
						if ((pLVar12->Flags & 0x10) == 0) {
							if ((pLVar12->Flags & 1) == 0) {
								puVar7 = ThisOt + iVar4;
								local_d0[0]->tag = local_d0[0]->tag & local_30 | *puVar7 & 0xffffff;
								*puVar7 = *puVar7 & local_30 | (uint)local_d0[0] & 0xffffff;
							}
							else {
								local_d0[0]->tag = local_d0[0]->tag & local_30 | ThisOt[3] & 0xffffff;
								puVar7[3] = puVar7[3] & local_30 | (uint)local_d0[0] & 0xffffff;
							}
						}
						else {
							local_d0[0]->tag = local_d0[0]->tag & local_30 | ThisOt[1] & 0xffffff;
							puVar7[1] = puVar7[1] & local_30 | (uint)local_d0[0] & 0xffffff;
						}
						bVar1 = pLVar12->w;
						bVar2 = pLVar12->h;
						if (local_40 == 0) {
							GetGCol__7CBlocksiiPUcP7RGBData
												(local_c8,(int)psVar9[-1],0x80 - (int)*psVar9,&local_d0[0]->r0,&local_f8);
							GetGCol__7CBlocksiiPUcP7RGBData
												(local_c8,(int)psVar9[-1] + (uint)bVar1,0x80 - (int)*psVar9,&local_d0[0]->r1
												 ,&local_f8);
							iVar14 = (uint)bVar2 + 0x80;
							GetGCol__7CBlocksiiPUcP7RGBData
												(local_c8,(int)psVar9[-1],iVar14 - (int)*psVar9,&local_d0[0]->r2,&local_f8);
							GetGCol__7CBlocksiiPUcP7RGBData
												(local_c8,(int)psVar9[-1] + (uint)bVar1,iVar14 - (int)*psVar9,
												 &local_d0[0]->r3,&local_f8);
						}
						else {
							local_d0[0]->r0 = local_f8.rgbb.r1;
							local_d0[0]->g0 = local_f8.rgbb.g1;
							local_d0[0]->b0 = local_f8.rgbb.b1;
							local_d0[0]->r1 = local_f8.rgbb.r2;
							local_d0[0]->g1 = local_f8.rgbb.g2;
							local_d0[0]->b1 = local_f8.rgbb.b2;
							local_d0[0]->r2 = local_f8.rgbb.r3;
							local_d0[0]->g2 = local_f8.rgbb.g3;
							local_d0[0]->b2 = local_f8.rgbb.b3;
							local_d0[0]->r3 = local_f8.rgbb.r4;
							local_d0[0]->g3 = local_f8.rgbb.g4;
							local_d0[0]->b3 = local_f8.rgbb.b4;
						}
						psVar9 = psVar9 + -4;
						piVar16 = piVar16 + -2;
						local_38 = local_38 + 1;
						uVar10 = local_30;
					}
				}
			}
			iVar13 = iVar13 + 0x38;
			uVar15 = uVar15 + 1;
			local_58 = local_58 + 1;
			local_60 = local_60 + 0x28;
		}
		if ((local_a0 & 1) == 0) {
			local_a8 = local_a8 - 1;
		}
		else {
			local_b0 = local_b0 + 1;
		}
		local_c0 = local_c0 + 0x28;
		local_a0 = local_a0 + 1;
	}
	PRIM_Clip__FP4RECTi(&local_c8->ClipRect,1);
	PRIM_FullScreen__Fi(100);
	GAL_Unlock((local_c8->TextDat).hndBlockOffsets);
	if ((local_c8->TextDat).hndBlockOffsets == 0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x53d);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib(struct CBlocks *this /*$t0*/, int x /*stack -128*/, int y /*$a2*/, TDRFuncPtr_IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib3Func Func /*stack -120*/, void * VisCheck /*stack 16*/)
 // line 1350, offset 0x8008f098
	/* begin block 1 */
		// Start line: 1351
		// Start offset: 0x8008F098
		// Variables:
	// 		int XPos; // stack offset -112
	// 		int YPos; // stack offset -104
	// 		int xx; // stack offset -96
	// 		void * Infra; // $v0
	// 		int MyXShifter; // stack offset -88
	// 		int MyYShifter; // stack offset -80
	// 		int Total; // $s2
	// 		void * DoVisCheck; // stack offset -72
	// 		int XPix; // $a3
	// 		int YPix; // $a1
	// 		int CRight; // stack offset -64

		/* begin block 1.1 */
			// Start line: 1427
			// Start offset: 0x8008F1FC
			// Variables:
		// 		int ThisXPos; // $fp
		// 		int ThisYPos; // $s7
		// 		int Height; // stack offset -56

			/* begin block 1.1.1 */
				// Start line: 1440
				// Start offset: 0x8008F220

				/* begin block 1.1.1.1 */
					// Start line: 1447
					// Start offset: 0x8008F24C

					/* begin block 1.1.1.1.1 */
						// Start line: 1448
						// Start offset: 0x8008F260
						// Variables:
					// 		struct map_info *p0; // $a1
					// 		struct map_info *p1; // $s3
					// 		struct map_info *p2; // $s6
					// 		struct map_info *p3; // stack offset -48
					// 		int myx; // $s5
					// 		int myy; // $s4
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008F474
					// End Line: 1483
				/* end block 1.1.1.1 */
				// End offset: 0x8008F474
				// End Line: 1483
			/* end block 1.1.1 */
			// End offset: 0x8008F474
			// End Line: 1487
		/* end block 1.1 */
		// End offset: 0x8008F4B8
		// End Line: 1498
	/* end block 1 */
	// End offset: 0x8008F4DC
	// End Line: 1502

	/* begin block 2 */
		// Start line: 3046
	/* end block 2 */
	// End Line: 3047

/* WARNING: Unknown calling convention yet parameter storage is locked */

void IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
							 (CBlocks *this,int x,int y,
							 TDRFuncPtr_IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib3Func Func,
							 void *VisCheck)

{
	short sVar1;
	byte bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	map_info *pmVar6;
	uint uVar7;
	int iVar8;
	uint uVar9;
	uint uVar10;
	int iVar11;
	undefined2 *puVar12;
	map_info *pmVar13;
	uint uVar14;
	uint uVar15;
	int local_80;
	uint local_70;
	uint local_68;
	int local_58;
	int local_50;
	void *local_48;
	int local_38;
	
	local_48 = VisCheck;
	if (InfraFlag != (void *)0x0) {
		local_48 = (void *)0x0;
	}
	iVar11 = 0;
	if (this->IsTown == (void *)0x0) {
		local_80 = x + -0x140;
		y = y + -0x140;
		local_58 = 8;
		local_50 = 8;
	}
	else {
		local_58 = 0;
		local_50 = 0;
		local_80 = x;
	}
	local_70 = local_80 / 0x28;
	iVar8 = local_80 % 0x28;
	local_68 = y / 0x28;
	if (local_80 < 0) {
		local_70 = local_70 - 1;
		iVar8 = iVar8 + 0x28;
	}
	iVar3 = (int)(this->ClipRect).x;
	sVar1 = (this->ClipRect).w;
	local_80 = (y % 0x28 - iVar8) + -0x28 + iVar3;
	if (iVar8 - y % 0x28 < 0) {
		local_70 = local_70 - 1;
		local_80 = local_80 + -0x28;
		bVar2 = 1;
	}
	else {
		bVar2 = 0;
	}
	do {
		if (iVar3 + (int)sVar1 <= local_80) {
			DAT_1f800000 = iVar11;
			return;
		}
		local_38 = 0;
		uVar14 = local_68;
		uVar15 = local_70;
		while ((((int)uVar14 < 0x2e && ((int)uVar15 < 0x2e)) &&
					 (local_38 = local_38 + 1, local_38 < 0xb))) {
			if ((uVar14 < 0x2e) && (uVar15 < 0x2f)) {
				iVar8 = uVar15 + local_58;
				uVar9 = iVar8 * 2;
				iVar5 = uVar14 + local_50;
				uVar10 = iVar5 * 2;
				pmVar6 = &dung_map + iVar5 * 2 + iVar8 * 0xe0;
				puVar12 = &DAT_800e7da8 + iVar5 * 8 + iVar8 * 0x380;
				pmVar13 = map_info_ARRAY_800e7a30 + iVar8 * 0xe0 + iVar5 * 2;
				iVar8 = iVar8 * 0x700 + -0x7ff18250 + iVar5 * 0x10;
				if (local_48 == (void *)0x0) {
					iVar5 = (*Func)(&DAT_1f800004 + iVar11 * 4,pmVar6,uVar9,uVar10);
					uVar7 = uVar9 + 1;
					iVar4 = (*Func)(&DAT_1f800004 + (iVar11 + iVar5) * 4,puVar12,uVar7,uVar10);
					iVar4 = iVar11 + iVar5 + iVar4;
					uVar10 = uVar10 + 1;
					iVar11 = (*Func)(&DAT_1f800004 + iVar4 * 4,pmVar13,uVar9,uVar10);
					iVar11 = iVar4 + iVar11;
				}
				else {
					if ((pmVar6->dFlags & 3U) != 0) {
						iVar5 = (*Func)(&DAT_1f800004 + iVar11 * 4,pmVar6,uVar9,uVar10);
						iVar11 = iVar11 + iVar5;
					}
					if ((*(byte *)(puVar12 + 3) & 3) != 0) {
						iVar5 = (*Func)(&DAT_1f800004 + iVar11 * 4,puVar12,uVar9 | 1,uVar10);
						iVar11 = iVar11 + iVar5;
					}
					if ((pmVar13->dFlags & 3U) != 0) {
						iVar5 = (*Func)(&DAT_1f800004 + iVar11 * 4,pmVar13,uVar9,uVar10 | 1);
						iVar11 = iVar11 + iVar5;
					}
					if ((*(byte *)(iVar8 + 6) & 3) == 0) goto LAB_8008f474;
					uVar7 = uVar9 | 1;
					uVar10 = uVar10 | 1;
				}
				iVar8 = (*Func)(&DAT_1f800004 + iVar11 * 4,iVar8,uVar7,uVar10);
				iVar11 = iVar11 + iVar8;
			}
LAB_8008f474:
			uVar15 = uVar15 + 1;
			uVar14 = uVar14 + 1;
		}
		if ((bool)(bVar2 & 1)) {
			local_70 = local_70 + 1;
		}
		else {
			local_68 = local_68 - 1;
		}
		local_80 = local_80 + 0x28;
		bVar2 = bVar2 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMonst__FP9CacheInfoP8map_infoii(struct CacheInfo *Info /*$a3*/, struct map_info *p0 /*$a1*/, int bx /*$a2*/, int by /*$a3*/)
 // line 1510, offset 0x8008f510
	/* begin block 1 */
		// Start line: 1511
		// Start offset: 0x8008F510
		// Variables:
	// 		int nMonster; // $v0
	// 		int Index; // $t0
	// 		int bFlags; // $t1

		/* begin block 1.1 */
			// Start line: 1511
			// Start offset: 0x8008F510

			/* begin block 1.1.1 */
				// Start line: 1522
				// Start offset: 0x8008F524
				// Variables:
			// 		struct MonsterStruct *MyMonst; // $v1
			// 		int mi; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8008F560
			// End Line: 1532
		/* end block 1.1 */
		// End offset: 0x8008F560
		// End Line: 1532

		/* begin block 1.2 */
			// Start line: 1535
			// Start offset: 0x8008F560

			/* begin block 1.2.1 */
				// Start line: 1536
				// Start offset: 0x8008F56C

				/* begin block 1.2.1.1 */
					// Start line: 1537
					// Start offset: 0x8008F56C

					/* begin block 1.2.1.1.1 */
						// Start line: 1538
						// Start offset: 0x8008F57C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1539
							// Start offset: 0x8008F57C

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1539
								// Start offset: 0x8008F5A8
								// Variables:
							// 		int ThisIndex; // $a0
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8008F5F0
							// End Line: 1544
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8008F5F0
						// End Line: 1544
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008F5F0
					// End Line: 1544
				/* end block 1.2.1.1 */
				// End offset: 0x8008F5F0
				// End Line: 1544
			/* end block 1.2.1 */
			// End offset: 0x8008F5F0
			// End Line: 1544
		/* end block 1.2 */
		// End offset: 0x8008F5F0
		// End Line: 1544
	/* end block 1 */
	// End offset: 0x8008F5F0
	// End Line: 1550

	/* begin block 2 */
		// Start line: 3401
	/* end block 2 */
	// End Line: 3402

int AddMonst__FP9CacheInfoP8map_infoii(CacheInfo *Info,map_info *p0,int bx,int by)

{
	byte bVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	uint *puVar5;
	uint uVar6;
	
	iVar3 = (int)p0->dMonster;
	bVar1 = p0->dFlags;
	if (0 < iVar3) {
		*(uint *)Info = (uint)(byte)*Info | (int)(monster + iVar3 + -1) * 0x100;
		*Info = SUB41(iVar3 + -1,0);
	}
	uVar6 = (uint)(0 < iVar3);
	if (((bVar1 & 0x40) != 0) && (iVar3 = (int)p0->dMissile + -1, 0 < (int)p0->dMissile)) {
		iVar4 = uVar6 * 4;
		if (missile[iVar3]._mitype == '\x14') {
			uVar6 = uVar6 + 1;
			puVar5 = (uint *)(Info + iVar4);
			sVar2 = missile[iVar3]._misource;
			*puVar5 = (uint)(byte)*(CacheInfo *)puVar5 | (int)(monster + (int)sVar2) * 0x100;
			*(CacheInfo *)puVar5 = SUB21(sVar2,0);
		}
	}
	return uVar6;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMonsters__7CBlocksii(struct CBlocks *this /*stack -288*/, int x /*$s0*/, int y /*$s1*/)
 // line 1556, offset 0x8008f5f8
	/* begin block 1 */
		// Start line: 1557
		// Start offset: 0x8008F5F8
		// Variables:
	// 		struct TextDat *CMonstGraphics; // stack offset -280
	// 		int Total; // stack offset -272
	// 		int Wx; // stack offset -264
	// 		int Wy; // stack offset -256
	// 		int Cx; // stack offset -248
	// 		int Cy; // stack offset -240
	// 		struct TextDat *GolemGraphics; // stack offset -232
	// 		void * MyInfraFlag; // stack offset -152

		/* begin block 1.1 */
			// Start line: 1557
			// Start offset: 0x8008F5F8
			// Variables:
		// 		int f; // stack offset -224

			/* begin block 1.1.1 */
				// Start line: 1590
				// Start offset: 0x8008F6D8
				// Variables:
			// 		int Index; // stack offset -216

				/* begin block 1.1.1.1 */
					// Start line: 1593
					// Start offset: 0x8008F6F0

					/* begin block 1.1.1.1.1 */
						// Start line: 1596
						// Start offset: 0x8008F70C
						// Variables:
					// 		struct MonsterStruct *MyMonst; // $s6
					// 		int Frame; // $s5
					// 		int Action; // $s4
					// 		int Dir; // $s0
					// 		int PhysFrame; // $s0
					// 		int Creature; // $fp
					// 		int ScrXOff; // $s0
					// 		int ScrYOff; // $s1
					// 		struct POLY_FT4 *Ft4; // $a1
					// 		struct POLY_FT4 *ShadFt4; // $s0
					// 		void * StartAnim; // stack offset -208
					// 		static int AddVal[4]; // offset 0x8011cbd0
					// 		int bx; // stack offset -200
					// 		int by; // $s7
					// 		int Sx; // stack offset -184
					// 		int Sy; // stack offset -176
					// 		int OtPos; // stack offset -168

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1639
							// Start offset: 0x8008F87C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1645
								// Start offset: 0x8008F8C0
								// Variables:
							// 		int blockr; // $s1
							// 		int blockg; // $s2
							// 		int blockb; // $s3

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1646
									// Start offset: 0x8008F8C0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1660
										// Start offset: 0x8008F990
										// Variables:
									// 		int AVal; // $a2
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8008FA08
									// End Line: 1675
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8008FA08
								// End Line: 1675
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8008FA64
							// End Line: 1680
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008FA64
						// End Line: 1680
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008FA64
					// End Line: 1680
				/* end block 1.1.1.1 */
				// End offset: 0x8008FA64
				// End Line: 1680
			/* end block 1.1.1 */
			// End offset: 0x8008FA64
			// End Line: 1680
		/* end block 1.1 */
		// End offset: 0x8008FA80
		// End Line: 1683

		/* begin block 1.2 */
			// Start line: 1686
			// Start offset: 0x8008FA80
			// Variables:
		// 		int DoCompress; // stack offset -144
		// 		int f; // stack offset -224

			/* begin block 1.2.1 */
				// Start line: 1691
				// Start offset: 0x8008FAA4
				// Variables:
			// 		int MaxDecompress; // stack offset -136

				/* begin block 1.2.1.1 */
					// Start line: 1693
					// Start offset: 0x8008FAB8
					// Variables:
				// 		int f; // stack offset -128

					/* begin block 1.2.1.1.1 */
						// Start line: 1695
						// Start offset: 0x8008FAC8
						// Variables:
					// 		int Frame; // $s4
					// 		int Action; // stack offset -120
					// 		int Dir; // stack offset -112
					// 		int Creature; // $s3
					// 		int ScrXOff; // stack offset -104
					// 		int ScrYOff; // stack offset -96
					// 		struct RECT R; // stack offset -296
					// 		int GType; // $a2
					// 		int Sx; // $s1
					// 		int Sy; // $s0
					// 		int Index; // stack offset -88
					// 		int transfile; // $a1
					// 		int Mg; // stack offset -80

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1709
							// Start offset: 0x8008FAE0

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1712
								// Start offset: 0x8008FAFC
								// Variables:
							// 		struct MonsterStruct *MyMonst; // $s2

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 1714
									// Start offset: 0x8008FAFC

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 1718
										// Start offset: 0x8008FB28
										// Variables:
									// 		int bx; // $fp
									// 		int by; // $s7
									// 		int mx; // $s5
									// 		int my; // $s6
									// 		void * PrintIt; // $v1
									// 		void * Compressed; // $v0

										/* begin block 1.2.1.1.1.1.1.1.1.1 */
											// Start line: 1740
											// Start offset: 0x8008FC04
											// Variables:
										// 		unsigned int g; // $a0
										/* end block 1.2.1.1.1.1.1.1.1.1 */
										// End offset: 0x8008FC50
										// End Line: 1751

										/* begin block 1.2.1.1.1.1.1.1.1.2 */
											// Start line: 1765
											// Start offset: 0x8008FC7C

											/* begin block 1.2.1.1.1.1.1.1.1.2.1 */
												// Start line: 1766
												// Start offset: 0x8008FC84
												// Variables:
											// 		int OtPos; // $s3
											// 		struct POLY_FT4 *Ft4; // $s1
											// 		int blockr; // $a2
											// 		int blockg; // $a1
											// 		int blockb; // $v0
											// 		struct POLY_FT4 *ShadFt4; // $s0
											// 		int paloff; // $a0
											// 		int Col; // $a1

												/* begin block 1.2.1.1.1.1.1.1.1.2.1.1 */
													// Start line: 1768
													// Start offset: 0x8008FC84

													/* begin block 1.2.1.1.1.1.1.1.1.2.1.1.1 */
														// Start line: 1769
														// Start offset: 0x8008FC8C

														/* begin block 1.2.1.1.1.1.1.1.1.2.1.1.1.1 */
															// Start line: 1770
															// Start offset: 0x8008FC8C

															/* begin block 1.2.1.1.1.1.1.1.1.2.1.1.1.1.1 */
																// Start line: 1773
																// Start offset: 0x8008FCA4
															/* end block 1.2.1.1.1.1.1.1.1.2.1.1.1.1.1 */
															// End offset: 0x8008FCCC
															// End Line: 1784
														/* end block 1.2.1.1.1.1.1.1.1.2.1.1.1.1 */
														// End offset: 0x8008FCCC
														// End Line: 1784
													/* end block 1.2.1.1.1.1.1.1.1.2.1.1.1 */
													// End offset: 0x8008FCCC
													// End Line: 1784
												/* end block 1.2.1.1.1.1.1.1.1.2.1.1 */
												// End offset: 0x8008FCCC
												// End Line: 1784

												/* begin block 1.2.1.1.1.1.1.1.1.2.1.2 */
													// Start line: 1847
													// Start offset: 0x8008FEEC

													/* begin block 1.2.1.1.1.1.1.1.1.2.1.2.1 */
														// Start line: 1848
														// Start offset: 0x8008FF20
														// Variables:
													// 		int SPal; // $a1
													/* end block 1.2.1.1.1.1.1.1.1.2.1.2.1 */
													// End offset: 0x8008FF68
													// End Line: 1858

													/* begin block 1.2.1.1.1.1.1.1.1.2.1.2.2 */
														// Start line: 1861
														// Start offset: 0x8008FF70

														/* begin block 1.2.1.1.1.1.1.1.1.2.1.2.2.1 */
															// Start line: 1861
															// Start offset: 0x8008FF70

															/* begin block 1.2.1.1.1.1.1.1.1.2.1.2.2.1.1 */
																// Start line: 1862
																// Start offset: 0x8008FF78
															/* end block 1.2.1.1.1.1.1.1.1.2.1.2.2.1.1 */
															// End offset: 0x8008FFA0
															// End Line: 1867
														/* end block 1.2.1.1.1.1.1.1.1.2.1.2.2.1 */
														// End offset: 0x8008FFA0
														// End Line: 1867
													/* end block 1.2.1.1.1.1.1.1.1.2.1.2.2 */
													// End offset: 0x8008FFA0
													// End Line: 1867
												/* end block 1.2.1.1.1.1.1.1.1.2.1.2 */
												// End offset: 0x8008FFA0
												// End Line: 1867
											/* end block 1.2.1.1.1.1.1.1.1.2.1 */
											// End offset: 0x80090038
											// End Line: 1890
										/* end block 1.2.1.1.1.1.1.1.1.2 */
										// End offset: 0x80090038
										// End Line: 1890
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x80090038
									// End Line: 1890
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x80090038
								// End Line: 1890
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80090038
							// End Line: 1890
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80090038
						// End Line: 1890
					/* end block 1.2.1.1.1 */
					// End offset: 0x80090038
					// End Line: 1890
				/* end block 1.2.1.1 */
				// End offset: 0x80090054
				// End Line: 1895
			/* end block 1.2.1 */
			// End offset: 0x80090054
			// End Line: 1895
		/* end block 1.2 */
		// End offset: 0x80090068
		// End Line: 1896
	/* end block 1 */
	// End offset: 0x80090068
	// End Line: 1896

	/* begin block 2 */
		// Start line: 3505
	/* end block 2 */
	// End Line: 3506

void PrintMonsters__7CBlocksii(CBlocks *this,int x,int y)

{
	char cVar1;
	char cVar2;
	char cVar3;
	byte bVar4;
	ushort uVar5;
	bool bVar6;
	short sVar7;
	int iVar8;
	uchar uVar9;
	ushort uVar10;
	int iVar11;
	int iVar12;
	TextDat *Fin;
	int iVar13;
	void *XFlip;
	POLY_FT4 *Prim;
	void *pvVar14;
	POLY_FT4 *Ft4;
	FRAME_HDR *Fr;
	byte *pbVar15;
	ulong *puVar16;
	uint uVar17;
	uchar uVar18;
	uchar uVar19;
	int Frame;
	int LogicalY;
	uint uVar20;
	uint uVar21;
	int iVar22;
	TextDat *this_00;
	int iVar23;
	uint mi;
	int y_00;
	int OtPos;
	int Action;
	int Frame_00;
	uint Creature;
	int iVar24;
	int local_e0;
	int local_90;
	int local_88;
	int local_80;
	int local_78;
	int local_38;
	int local_30;
	
	IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
						(this,x,y,AddMonst__FP9CacheInfoP8map_infoii,&DAT_00000001);
	iVar8 = DAT_1f800000;
	this_00 = this->MonstTexDat;
	iVar11 = WorldToScrX__7CBlocksii(this,x + -7,y + -0xb);
	iVar12 = WorldToScrY__7CBlocksii(this,x + -7,y + -0xb);
	iVar22 = (int)(this->ClipRect).x;
	iVar23 = (int)(this->ClipRect).y;
	Fin = GM_UseTexData__Fi(0xd0);
	local_e0 = 0;
	local_30 = 0x1f800000;
	while (local_e0 < iVar8) {
		mi = (uint)*(byte *)(local_30 + 4);
		if (*(byte *)(local_30 + 4) < 4) {
			bVar6 = false;
			Creature = *(uint *)(local_30 + 4) >> 8 | 0x80000000;
			cVar1 = *(char *)(Creature + 0x3a);
			cVar2 = *(char *)(Creature + 0x3b);
			uVar21 = (uint)*(byte *)(Creature + 0x34) << 0x18;
			LogicalY = (int)uVar21 >> 0x18;
			OtPos = LogicalY * 0x14;
			uVar20 = (uint)*(byte *)(Creature + 0x35) << 0x18;
			Frame = (int)uVar20 >> 0x18;
			y_00 = Frame * 0x14;
			iVar24 = ((int)(Frame + (uVar20 >> 0x1f)) >> 1) + -8;
			Frame = WorldToScrX__7CBlocksii(this,OtPos,y_00);
			y_00 = WorldToScrY__7CBlocksii(this,OtPos,y_00);
			y_00 = (iVar23 + y_00 + ((int)cVar2 * 0x271) / 1000) - iVar12;
			OtPos = GetOtPos__7CBlocksi(this,y_00);
			Action = (int)*(char *)(Creature + 0x5a);
			Frame_00 = (int)*(char *)(Creature + 0x41) + -1;
			if (Action == 5) {
				Action = 0;
				bVar6 = true;
				if (Frame_00 == 0) {
					*(undefined4 *)(&AddVal_184 + mi * 4) = 0;
				}
			}
			iVar13 = GetNumOfActions__7TextDati(Fin,1);
			if (Action < iVar13) {
				cVar2 = *(char *)(Creature + 0x3c);
				LogicalY = (((int)(LogicalY + (uVar21 >> 0x1f)) >> 1) + -8) * 0x38;
				uVar19 = (&dung_map_g)[iVar24 + LogicalY];
				uVar18 = (&dung_map_r)[iVar24 + LogicalY];
				uVar9 = (&dung_map_b)[iVar24 + LogicalY];
				LogicalY = GetFrNum__7TextDatiiii(Fin,1,Action,(int)cVar2,Frame_00);
				XFlip = IsDirAliased__7TextDatiii(Fin,1,Action,(int)cVar2);
				Prim = PrintFt4__7TextDatiiiiii
												 (Fin,LogicalY,(iVar22 + Frame + ((int)cVar1 * 0x271) / 1000) - iVar11,y_00,
													(int)XFlip,OtPos,0);
				Prim->r0 = uVar18;
				Prim->g0 = uVar19;
				Prim->b0 = uVar9;
				Prim->code = Prim->code & 0xfe;
				if (bVar6) {
					Frame = *(int *)(&AddVal_184 + mi * 4);
					Prim->y0 = Prim->y0 - (short)Frame;
					y_00 = Frame + 1;
					Prim->y1 = Prim->y1 - (short)Frame;
					sVar7 = (short)(Frame >> 2);
					Prim->x0 = Prim->x0 + sVar7;
					Prim->x2 = Prim->x2 + sVar7;
					Prim->x1 = Prim->x1 - sVar7;
					Prim->x3 = Prim->x3 - sVar7;
					if (0x28 < y_00) {
						y_00 = 0x28;
					}
					*(int *)(&AddVal_184 + mi * 4) = y_00;
				}
				Prim = PRIM_GetCopy__FP8POLY_FT4(Prim);
				ShadScaleSkew__7CBlocksP8POLY_FT4(Prim);
				puVar16 = ThisOt + OtPos;
				Prim->tag = Prim->tag & 0xff000000 | *puVar16 & 0xffffff;
				*puVar16 = *puVar16 & 0xff000000 | (uint)Prim & 0xffffff;
			}
			else {
				if (Frame_00 == 1) {
					StartPartJump__Fiiiii(mi,0,0x8000,(int)&DAT_00606060,OtPos);
				}
			}
		}
		local_30 = local_30 + 4;
		local_e0 = local_e0 + 1;
	}
	GM_FinishedUsing__FP7TextDat(Fin);
	XFlip = InfraFlag;
	local_90 = 0;
	do {
		if (1 < local_90) {
			return;
		}
		local_88 = 8;
		local_80 = 0;
		local_38 = 0x1f800000;
		while (local_80 < iVar8) {
			bVar4 = *(byte *)(local_38 + 4);
			if ((3 < bVar4) &&
				 (mi = *(uint *)(local_38 + 4) >> 8 | 0x80000000, (*(ushort *)(mi + 0x2c) & 1) == 0)) {
				cVar1 = *(char *)(mi + 0x3a);
				cVar2 = *(char *)(mi + 0x3b);
				Frame = (int)*(char *)(mi + 0x41) + -1;
				uVar10 = **(ushort **)(mi + 100);
				uVar20 = SEXT14(*(char *)(mi + 0x34));
				uVar21 = SEXT14(*(char *)(mi + 0x35));
				cVar3 = *(char *)(mi + 0x3c);
				if ((*(char *)(*(int *)(mi + 0x60) + 0x12) == '(') && (*(char *)(mi + 0x33) == '\x0e')) {
					local_78 = 0;
					Frame = 0;
				}
				else {
					local_78 = (int)*(char *)(mi + 0x5a);
				}
				uVar17 = 0;
				uVar5 = this->MonsterList->NumOfMonsters;
				Creature = 0;
				if (uVar5 != 0) {
					pbVar15 = this->MonsterList->TheList;
					do {
						Creature = uVar17;
						if ((uint)*pbVar15 == (uint)uVar10) break;
						uVar17 = uVar17 + 1;
						pbVar15 = pbVar15 + 1;
						Creature = 0;
					} while (uVar17 < (uint)uVar5);
				}
				pvVar14 = IsCompressed__7TextDatiiii(this_00,Creature,local_78,(int)cVar3,Frame);
				bVar6 = pvVar14 != (void *)0x0;
				if (local_90 == 0) {
					bVar6 = !bVar6;
				}
				if (bVar6) {
					y_00 = local_88;
					if ((((pvVar14 != (void *)0x0) && (y_00 = local_88 + -1, local_88 == 0)) &&
							(OtPos = GetNumOfFrames__7TextDatii(this_00,Creature,local_78), y_00 = local_88,
							OtPos != 1)) && (bVar6 = Frame == 0, Frame = Frame + -1, y_00 = local_88, bVar6)) {
						Frame = 1;
						y_00 = local_88;
					}
					local_88 = y_00;
					Action = ((int)(uVar21 + (uVar21 >> 0x1f)) >> 1) + -8;
					y_00 = WorldToScrX__7CBlocksii(this,uVar20 * 0x14,uVar21 * 0x14);
					OtPos = WorldToScrY__7CBlocksii(this,uVar20 * 0x14,uVar21 * 0x14);
					LogicalY = (iVar23 + OtPos + ((int)cVar2 * 0x271) / 1000) - iVar12;
					OtPos = GetOtPos__7CBlocksi(this,LogicalY);
					Prim = PrintMonster__7TextDatiiiiiii
													 (this_00,Creature,local_78,(int)cVar3,Frame,
														(iVar22 + y_00 + ((int)cVar1 * 0x271) / 1000) - iVar11,LogicalY,OtPos);
					if ((((&dung_map)[uVar20 * 0x70 + uVar21].dFlags & 3U) == 0) &&
						 (uVar19 = -0x70, XFlip != (void *)0x0)) {
						uVar18 = '\0';
						uVar9 = '\0';
					}
					else {
						Frame = (((int)(uVar20 + (uVar20 >> 0x1f)) >> 1) + -8) * 0x38;
						uVar19 = (&dung_map_r)[Action + Frame];
						uVar18 = (&dung_map_g)[Action + Frame];
						uVar9 = (&dung_map_b)[Action + Frame];
					}
					Prim->r0 = uVar19;
					Prim->g0 = uVar18;
					Prim->b0 = uVar9;
					Ft4 = PRIM_GetCopy__FP8POLY_FT4(Prim);
					ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
					puVar16 = ThisOt + OtPos;
					Ft4->tag = Ft4->tag & 0xff000000 | *puVar16 & 0xffffff;
					*puVar16 = *puVar16 & 0xff000000 | (uint)Ft4 & 0xffffff;
					if (*(byte *)(mi + 0x4f) == 0) {
						Frame = (&TransPals)[(int)*(char *)(*(int *)(mi + 100) + 7) * 2 + (uint)(local_78 == 4)]
						;
					}
					else {
						Frame = UniqTransPals[((uint)*(byte *)(mi + 0x4f) - 1) * 2 + (uint)(local_78 == 4)];
					}
					if ((*(char *)(mi + 0x33) == '\x0f') ||
						 ((uVar10 == 10 && ((*(ushort *)(mi + 0x2c) & 4) != 0)))) {
						Frame = StonePals[(uint)uVar10].StonePal;
						if ((local_78 == 4) && (Frame == 2)) {
							Frame = 3;
						}
						if (uVar10 == 0x1d) {
							Frame = Frame + local_78;
						}
LAB_8008ff78:
						Fr = GetFr__7TextDati(this->ObjTexDat,Frame);
						SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this->ObjTexDat,Fr,Prim);
					}
					else {
						if (Frame != 0) goto LAB_8008ff78;
					}
					if (uVar10 == 1) {
						Ft4->y0 = Ft4->y0 + 0x14;
						Ft4->y1 = Ft4->y1 + 0x14;
						Ft4->y2 = Ft4->y2 + 0x14;
						Ft4->y3 = Ft4->y3 + 0x14;
					}
					Frame = GetHighlightCol__FiPiUsUsUs
														((uint)bVar4,&_pcursmonst,P1ObjSelCol | 0x8000,P2ObjSelCol | 0x8000,
														 (uint)P12ObjSelCol | 0x8000);
					if (Frame != -1) {
						uVar10 = SCR_NeedHighlightPal__FUsUsi(Prim->clut,(ushort)Frame,0x10);
						Prim->clut = uVar10;
						Prim->code = Prim->code | 2;
					}
				}
			}
			local_38 = local_38 + 4;
			local_80 = local_80 + 1;
		}
		local_90 = local_90 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddTowners__FP9CacheInfoP8map_infoii(struct CacheInfo *Info /*$a3*/, struct map_info *p0 /*$a1*/, int bx /*$a2*/, int by /*$a3*/)
 // line 1915, offset 0x8009009c
	/* begin block 1 */
		// Start line: 1916
		// Start offset: 0x8009009C
		// Variables:
	// 		int nMonster; // $v1

		/* begin block 1.1 */
			// Start line: 1916
			// Start offset: 0x8009009C

			/* begin block 1.1.1 */
				// Start line: 1921
				// Start offset: 0x800900AC
				// Variables:
			// 		struct MonsterStruct *MyMonst; // $a0
			// 		int mi; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800900B4
			// End Line: 1934
		/* end block 1.1 */
		// End offset: 0x800900B4
		// End Line: 1934
	/* end block 1 */
	// End offset: 0x800900F0
	// End Line: 1934

	/* begin block 2 */
		// Start line: 4419
	/* end block 2 */
	// End Line: 4420

int AddTowners__FP9CacheInfoP8map_infoii(CacheInfo *Info,map_info *p0,int bx,int by)

{
	int iVar1;
	
	iVar1 = (int)p0->dMonster;
	if (0 < iVar1) {
		*(uint *)Info = (uint)(byte)*Info | (int)(monster + iVar1 + -1) * 0x100;
		*Info = SUB41(iVar1 + -1,0);
	}
	return (uint)(0 < iVar1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintTowners__7CBlocksii(struct CBlocks *this /*$s5*/, int x /*$s1*/, int y /*$s0*/)
 // line 1942, offset 0x800900f8
	/* begin block 1 */
		// Start line: 1943
		// Start offset: 0x800900F8
		// Variables:
	// 		static int YPos; // offset 0x8011acd8
	// 		static int YVel; // offset 0x8011acdc
	// 		int Total; // stack offset -80
	// 		int Wx; // stack offset -72
	// 		int Wy; // stack offset -64
	// 		int Cx; // stack offset -56
	// 		int Cy; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1957
			// Start offset: 0x8009015C
			// Variables:
		// 		int f; // $s7

			/* begin block 1.1.1 */
				// Start line: 1977
				// Start offset: 0x800901D8
				// Variables:
			// 		int Creature; // $fp
			// 		int mi; // $s4
			// 		struct POLY_FT4 *Ft4; // stack offset -88
			// 		struct TextDat *ThisData; // $s3
			// 		int PhysFrame; // $s2
			// 		int GameFrame; // $s1
			// 		int Dir; // $s2
			// 		int Sx; // $s1
			// 		int Sy; // $s0
			// 		int OtPos; // $s0
			// 		int Col; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 2034
					// Start offset: 0x80090414

					/* begin block 1.1.1.1.1 */
						// Start line: 2035
						// Start offset: 0x80090420
						// Variables:
					// 		struct POLY_FT4 *ShadFt4; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80090474
					// End Line: 2039
				/* end block 1.1.1.1 */
				// End offset: 0x80090474
				// End Line: 2039
			/* end block 1.1.1 */
			// End offset: 0x80090474
			// End Line: 2039
		/* end block 1.1 */
		// End offset: 0x8009047C
		// End Line: 2043
	/* end block 1 */
	// End offset: 0x8009047C
	// End Line: 2043

	/* begin block 2 */
		// Start line: 4478
	/* end block 2 */
	// End Line: 4479

void PrintTowners__7CBlocksii(CBlocks *this,int x,int y)

{
	ushort P1Col;
	int Creature;
	POLY_FT4 *Ft4;
	uint uVar1;
	ushort P2Col;
	ulong *puVar2;
	int y_00;
	int Frm;
	int x_00;
	int X;
	int Direction;
	TextDat *this_00;
	uint Index;
	int iVar3;
	POLY_FT4 *local_58 [2];
	int local_50;
	int local_48;
	int local_40;
	int local_38;
	int local_30;
	
	PTR_LAB_8011acdc = PTR_LAB_8011acdc + -0x8000;
	DAT_8011acd8 = PTR_LAB_8011acdc + (int)DAT_8011acd8;
	if ((int)DAT_8011acd8 < 0) {
		DAT_8011acd8 = (undefined *)0x0;
		PTR_LAB_8011acdc = &LAB_000a0000;
	}
	IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
						(this,x,y,AddTowners__FP9CacheInfoP8map_infoii,&DAT_00000001);
	local_50 = DAT_1f800000;
	local_48 = WorldToScrX__7CBlocksii(this,x + -7,y + -0xb);
	local_40 = WorldToScrY__7CBlocksii(this,x + -7,y + -0xb);
	iVar3 = 0;
	local_38 = (int)(this->ClipRect).x;
	local_30 = (int)(this->ClipRect).y;
	while (iVar3 < local_50) {
		if (this->MonstTexDat == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x7c2);
		}
		Index = (uint)(byte)(&DAT_1f800004)[iVar3 * 4];
		this_00 = this->MonstTexDat;
		Frm = towner[Index]._tAnimFrame;
		Direction = towner[Index]._tdir;
		Creature = FindTownCreature__7CBlocksi(this,towner[Index]._ttype);
		Frm = GetFrNum__7TextDatiiii(this_00,Creature,0,Direction,Frm + -1);
		PRIM_GetPrim__FPP8POLY_FT4(local_58);
		x_00 = towner[Index]._tx * 0x14;
		y_00 = towner[Index]._ty * 0x14;
		Direction = WorldToScrX__7CBlocksii(this,x_00,y_00);
		X = (local_38 + Direction) - local_48;
		Direction = WorldToScrY__7CBlocksii(this,x_00,y_00);
		y_00 = (local_30 + Direction) - local_40;
		Direction = GetOtPos__7CBlocksi(this,y_00);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this_00,local_58[0],Frm,X,y_00,0,0);
		if (FRIGFLAG != (void *)0x0) {
			local_58[0]->y0 = local_58[0]->y0 - DAT_8011acd8._2_2_;
			local_58[0]->y1 = local_58[0]->y1 - DAT_8011acd8._2_2_;
		}
		P1Col = P1MonstSelCol | 0x8000;
		puVar2 = ThisOt + Direction;
		P2Col = P2MonstSelCol | 0x8000;
		local_58[0]->tag = local_58[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
		uVar1 = (uint)P12MonstSelCol;
		*puVar2 = *puVar2 & 0xff000000 | (uint)local_58[0] & 0xffffff;
		Frm = GetHighlightCol__FiPiUsUsUs(Index,&_pcursmonst,P1Col,P2Col,uVar1 | 0x8000);
		if (Frm != -1) {
			P1Col = SCR_NeedHighlightPal__FUsUsi(local_58[0]->clut,(ushort)Frm,0x10);
			local_58[0]->clut = P1Col;
			local_58[0]->code = local_58[0]->code | 2;
		}
		if (Creature != 4) {
			Ft4 = PRIM_GetCopy__FP8POLY_FT4(local_58[0]);
			ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
			puVar2 = ThisOt + Direction;
			Ft4->tag = Ft4->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)Ft4 & 0xffffff;
		}
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddObject__FP9CacheInfoP8map_infoii(struct CacheInfo *Info /*$a3*/, struct map_info *p0 /*$a1*/, int bx /*$a2*/, int by /*$a3*/)
 // line 2051, offset 0x800904b0
	/* begin block 1 */
		// Start line: 2052
		// Start offset: 0x800904B0
		// Variables:
	// 		int bObject; // $a2

		/* begin block 1.1 */
			// Start line: 2052
			// Start offset: 0x800904B0

			/* begin block 1.1.1 */
				// Start line: 2057
				// Start offset: 0x800904C0
				// Variables:
			// 		struct ObjectStruct *OStr; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800904C8
			// End Line: 2066
		/* end block 1.1 */
		// End offset: 0x800904C8
		// End Line: 2066
	/* end block 1 */
	// End offset: 0x80090504
	// End Line: 2066

	/* begin block 2 */
		// Start line: 4756
	/* end block 2 */
	// End Line: 4757

int AddObject__FP9CacheInfoP8map_infoii(CacheInfo *Info,map_info *p0,int bx,int by)

{
	char cVar1;
	int iVar2;
	
	cVar1 = p0->dObject;
	iVar2 = (int)cVar1;
	if (0 < iVar2) {
		*(uint *)Info = (uint)(byte)*Info | (iVar2 * 0x2c + -0x7ff273e0) * 0x100;
		*(char *)Info = cVar1 + -1;
	}
	return (uint)(0 < iVar2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintObjects__7CBlocksii(struct CBlocks *this /*$fp*/, int x /*$s0*/, int y /*$s1*/)
 // line 2074, offset 0x8009050c
	/* begin block 1 */
		// Start line: 2075
		// Start offset: 0x8009050C
		// Variables:
	// 		int Total; // stack offset -136
	// 		int Wx; // stack offset -128
	// 		int Wy; // stack offset -120
	// 		int Cx; // stack offset -112
	// 		int Cy; // stack offset -104

		/* begin block 1.1 */
			// Start line: 2075
			// Start offset: 0x8009050C
			// Variables:
		// 		int z; // stack offset -96

			/* begin block 1.1.1 */
				// Start line: 2092
				// Start offset: 0x800905B8

				/* begin block 1.1.1.1 */
					// Start line: 2094
					// Start offset: 0x800905CC
					// Variables:
				// 		int f; // stack offset -88

					/* begin block 1.1.1.1.1 */
						// Start line: 2094
						// Start offset: 0x800905D4
						// Variables:
					// 		int Sx; // $s6
					// 		int Sy; // $s4
					// 		int LoadIndex; // $v1
					// 		struct ObjectStruct *OStr; // $s2
					// 		void * DoCreature; // $v0
					// 		struct POLY_FT4 (**PFunc)(); // $s7
					// 		int Index; // stack offset -80

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2116
							// Start offset: 0x8009062C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2117
								// Start offset: 0x80090634
								// Variables:
							// 		int AnimFrame; // $s0
							// 		int OtPos; // $s5
							// 		struct POLY_FT4 *Ft4; // $s1
							// 		int Creature; // $s1
							// 		int PhysFrame; // $s0
							// 		struct TextDat *ObjDat; // $s3
							// 		int bx; // stack offset -72
							// 		int by; // stack offset -64
							// 		int Col; // $a1
							// 		int blockr; // $v1
							// 		int blockg; // $a0
							// 		int blockb; // $v0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2134
									// Start offset: 0x80090684

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 2156
										// Start offset: 0x800907A8

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 2157
											// Start offset: 0x800907A8

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 2160
												// Start offset: 0x800907EC
												// Variables:
											// 		struct POLY_FT4 *ShadFt4; // $s0
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80090844
											// End Line: 2164
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80090844
										// End Line: 2164
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80090844
									// End Line: 2164
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80090844
								// End Line: 2164
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80090904
							// End Line: 2182
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80090904
						// End Line: 2182
					/* end block 1.1.1.1.1 */
					// End offset: 0x80090904
					// End Line: 2182
				/* end block 1.1.1.1 */
				// End offset: 0x80090920
				// End Line: 2184
			/* end block 1.1.1 */
			// End offset: 0x80090920
			// End Line: 2184
		/* end block 1.1 */
		// End offset: 0x80090934
		// End Line: 2185
	/* end block 1 */
	// End offset: 0x80090934
	// End Line: 2185

	/* begin block 2 */
		// Start line: 4806
	/* end block 2 */
	// End Line: 4807

void PrintObjects__7CBlocksii(CBlocks *this,int x,int y)

{
	char cVar1;
	byte bVar2;
	uchar uVar3;
	uchar uVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	bool bVar8;
	int iVar9;
	ushort uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int OtPos;
	POLY_FT4 *Prim;
	FRAME_HDR *pFVar14;
	POLY_FT4 *Ft4;
	uint uVar15;
	ulong *puVar16;
	int iVar17;
	uint uVar18;
	int y_00;
	int x_00;
	uint uVar19;
	TextDat *this_00;
	int X;
	code *pcVar20;
	int local_60;
	int local_58;
	int local_30;
	
	IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
						(this,x,y,AddObject__FP9CacheInfoP8map_infoii,(void *)0x0);
	iVar9 = DAT_1f800000;
	iVar11 = WorldToScrX__7CBlocksii(this,x + -7,y + -0xb);
	iVar12 = WorldToScrY__7CBlocksii(this,x + -7,y + -0xb);
	local_60 = 0;
	sVar5 = (this->ClipRect).x;
	sVar6 = (this->ClipRect).y;
	while (local_60 < 2) {
		local_58 = 0;
		local_30 = 0x1f800000;
		while (local_58 < iVar9) {
			bVar2 = *(byte *)(local_30 + 4);
			uVar19 = *(uint *)(local_30 + 4) >> 8 | 0x80000000;
			pcVar20 = (code *)ObjPrintFuncs[(int)*(char *)(uVar19 + 0x1e)];
			bVar8 = pcVar20 != (code *)0x0;
			if (local_60 == 0) {
				bVar8 = pcVar20 == (code *)0x0;
			}
			if (bVar8) {
				if (ObjMasterLoadList[(int)(&AllObjects)[(int)*(char *)(uVar19 + 0x1e)].ofindex].TexDat == 0
					 ) {
					this_00 = this->ObjTexDat;
				}
				else {
					this_00 = this->BgTexDat;
				}
				uVar18 = (uint)*(byte *)(uVar19 + 0x1f) << 0x18;
				iVar17 = (int)uVar18 >> 0x18;
				x_00 = iVar17 * 0x14;
				uVar15 = (uint)*(byte *)(uVar19 + 0x20) << 0x18;
				iVar13 = (int)uVar15 >> 0x18;
				y_00 = iVar13 * 0x14;
				iVar13 = ((int)(iVar13 + (uVar15 >> 0x1f)) >> 1) + -8;
				OtPos = WorldToScrX__7CBlocksii(this,x_00,y_00);
				X = ((int)sVar5 + OtPos) - iVar11;
				OtPos = WorldToScrY__7CBlocksii(this,x_00,y_00);
				x_00 = ((int)sVar6 + OtPos) - iVar12;
				OtPos = GetOtPos__7CBlocksi(this,x_00);
				cVar1 = *(char *)(uVar19 + 0x21);
				sVar7 = ObjMasterLoadList[(int)(&AllObjects)[(int)*(char *)(uVar19 + 0x1e)].ofindex].
								Creature;
				GetCreature__7TextDati(this_00,(int)sVar7);
				y_00 = GetFrNum__7TextDatiiii(this_00,(int)sVar7,0,0,(int)cVar1 + -1);
				if (pcVar20 == (code *)0x0) {
					Prim = PrintFt4__7TextDatiiiiii(this_00,y_00,X,x_00,0,OtPos,0);
					pFVar14 = GetFr__7TextDati(this_00,y_00);
					if ((pFVar14->X & 0x1000000U) != 0) {
						Ft4 = PRIM_GetCopy__FP8POLY_FT4(Prim);
						ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
						puVar16 = ThisOt + OtPos;
						Ft4->tag = Ft4->tag & 0xff000000 | *puVar16 & 0xffffff;
						*puVar16 = *puVar16 & 0xff000000 | (uint)Ft4 & 0xffffff;
					}
				}
				else {
					Prim = (POLY_FT4 *)(*pcVar20)(uVar19,X,x_00,this_00,OtPos);
				}
				Prim->code = Prim->code & 0xfe;
				OtPos = GetHighlightCol__FiPcUsUsUs
													((uint)bVar2,&_pcursobj,P1ObjSelCol | 0x8000,P2ObjSelCol | 0x8000,
													 (uint)P12ObjSelCol | 0x8000);
				if (OtPos != -1) {
					uVar10 = SCR_NeedHighlightPal__FUsUsi(Prim->clut,(ushort)OtPos,0x10);
					Prim->clut = uVar10;
					Prim->code = Prim->code | 2;
				}
				OtPos = (((int)(iVar17 + (uVar18 >> 0x1f)) >> 1) + -8) * 0x38;
				uVar3 = (&dung_map_g)[iVar13 + OtPos];
				uVar4 = (&dung_map_b)[iVar13 + OtPos];
				Prim->r0 = (&dung_map_r)[iVar13 + OtPos];
				Prim->g0 = uVar3;
				Prim->b0 = uVar4;
			}
			local_30 = local_30 + 4;
			local_58 = local_58 + 1;
		}
		local_60 = local_60 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddDead__FP9CacheInfoP8map_infoii(struct CacheInfo *Info /*$s1*/, struct map_info *p0 /*$a1*/, int bx /*$s2*/, int by /*$s3*/)
 // line 2193, offset 0x80090968
	/* begin block 1 */
		// Start line: 2194
		// Start offset: 0x80090968
		// Variables:
	// 		int bDead; // $s0
	/* end block 1 */
	// End offset: 0x800909D4
	// End Line: 2209

	/* begin block 2 */
		// Start line: 5090
	/* end block 2 */
	// End Line: 5091

int AddDead__FP9CacheInfoP8map_infoii(CacheInfo *Info,map_info *p0,int bx,int by)

{
	CacheInfo CVar1;
	
	CVar1 = (CacheInfo)GetdDead__Fii(bx,by);
	if (0xf < (byte)CVar1) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x896);
	}
	if (CVar1 != (CacheInfo)0x0) {
		Info[1] = SUB41(bx,0);
		Info[2] = SUB41(by,0);
		*Info = CVar1;
	}
	return (uint)(CVar1 != (CacheInfo)0x0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintDead__7CBlocksii(struct CBlocks *this /*$s6*/, int x /*$s0*/, int y /*$s1*/)
 // line 2217, offset 0x800909f4
	/* begin block 1 */
		// Start line: 2218
		// Start offset: 0x800909F4
		// Variables:
	// 		int Total; // stack offset -88
	// 		int Wx; // stack offset -80
	// 		int Wy; // stack offset -72
	// 		int Cx; // stack offset -64
	// 		int Cy; // stack offset -56

		/* begin block 1.1 */
			// Start line: 2218
			// Start offset: 0x800909F4
			// Variables:
		// 		int f; // stack offset -48

			/* begin block 1.1.1 */
				// Start line: 2238
				// Start offset: 0x80090A94
				// Variables:
			// 		int bDead; // $v1
			// 		int dx; // $s2
			// 		int dy; // $s3
			// 		int Frame; // $s4
			// 		int Creature; // $s5
			// 		struct POLY_FT4 *Ft4; // $s0
			// 		int transfile; // $v1
			// 		int Sx; // $s1
			// 		int Sy; // $s0
			// 		int Mg; // $a1
			// 		struct CMonster *MyMonst; // $fp

				/* begin block 1.1.1.1 */
					// Start line: 2253
					// Start offset: 0x80090AAC

					/* begin block 1.1.1.1.1 */
						// Start line: 2260
						// Start offset: 0x80090B04
						// Variables:
					// 		int bx; // $v0
					// 		int by; // $a2
					// 		int blockr; // $a1
					// 		int blockg; // $a0
					// 		int blockb; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2261
							// Start offset: 0x80090B04

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2280
								// Start offset: 0x80090BD4
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80090C00
							// End Line: 2283
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80090C00
						// End Line: 2283
					/* end block 1.1.1.1.1 */
					// End offset: 0x80090C70
					// End Line: 2294
				/* end block 1.1.1.1 */
				// End offset: 0x80090C70
				// End Line: 2294
			/* end block 1.1.1 */
			// End offset: 0x80090C70
			// End Line: 2294
		/* end block 1.1 */
		// End offset: 0x80090C84
		// End Line: 2300
	/* end block 1 */
	// End offset: 0x80090C84
	// End Line: 2300

	/* begin block 2 */
		// Start line: 5147
	/* end block 2 */
	// End Line: 5148

void PrintDead__7CBlocksii(CBlocks *this,int x,int y)

{
	byte bVar1;
	byte bVar2;
	uchar uVar3;
	uchar uVar4;
	short sVar5;
	short sVar6;
	ushort uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int Creature;
	int iVar11;
	int iVar12;
	POLY_FT4 *FT4;
	FRAME_HDR *Fr;
	int iVar13;
	int y_00;
	int x_00;
	int iVar14;
	int local_30;
	
	IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
						(this,x,y,AddDead__FP9CacheInfoP8map_infoii,(void *)0x0);
	iVar8 = DAT_1f800000;
	iVar9 = WorldToScrX__7CBlocksii(this,x + -7,y + -0xb);
	iVar10 = WorldToScrY__7CBlocksii(this,x + -7,y + -0xb);
	local_30 = 0;
	sVar5 = (this->ClipRect).x;
	iVar14 = 0x1f800000;
	sVar6 = (this->ClipRect).y;
	while (local_30 < iVar8) {
		iVar13 = *(int *)(s__800ceb04 + ((uint)*(byte *)(iVar14 + 4) & 0x1f) * 0xc);
		uVar7 = (Monsters[iVar13].MData)->GraphicType;
		if (uVar7 != 0xd) {
			Creature = FindCreature__7CBlocksi(this,(uint)uVar7);
			bVar1 = *(byte *)(iVar14 + 5);
			bVar2 = *(byte *)(iVar14 + 6);
			iVar11 = GetNumOfFrames__7TextDatii(this->MonstTexDat,Creature,4);
			x_00 = (uint)bVar1 * 0x14;
			y_00 = (uint)bVar2 * 0x14;
			iVar12 = WorldToScrX__7CBlocksii(this,x_00,y_00);
			y_00 = WorldToScrY__7CBlocksii(this,x_00,y_00);
			y_00 = ((int)sVar6 + y_00) - iVar10;
			GetOtPos__7CBlocksi(this,y_00);
			FT4 = PrintMonster__7TextDatiiiiiii
											(this->MonstTexDat,Creature,4,0,iVar11 + -1,((int)sVar5 + iVar12) - iVar9,y_00
											 ,4);
			iVar13 = (int)(Monsters[iVar13].MData)->TransFile;
			if (iVar13 != 0) {
				Fr = GetFr__7TextDati(this->ObjTexDat,INT_ARRAY_8010a580[iVar13 * 2]);
				SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this->ObjTexDat,Fr,FT4);
			}
			Creature = ((uint)bVar2 + 0x10 >> 1) - 0x10;
			iVar13 = (((uint)bVar1 + 0x10 >> 1) - 0x10) * 0x38;
			uVar3 = (&dung_map_g)[Creature + iVar13];
			uVar4 = (&dung_map_b)[Creature + iVar13];
			FT4->r0 = (&dung_map_r)[Creature + iVar13];
			FT4->g0 = uVar3;
			FT4->b0 = uVar4;
			FT4->code = FT4->code & 0xfe;
		}
		iVar14 = iVar14 + 4;
		local_30 = local_30 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddItem__FP9CacheInfoP8map_infoii(struct CacheInfo *Info /*$a3*/, struct map_info *p0 /*$a1*/, int bx /*$a2*/, int by /*$a3*/)
 // line 2308, offset 0x80090cb8
	/* begin block 1 */
		// Start line: 2309
		// Start offset: 0x80090CB8
		// Variables:
	// 		int bItem; // $a2
	/* end block 1 */
	// End offset: 0x80090D0C
	// End Line: 2321

	/* begin block 2 */
		// Start line: 5382
	/* end block 2 */
	// End Line: 5383

int AddItem__FP9CacheInfoP8map_infoii(CacheInfo *Info,map_info *p0,int bx,int by)

{
	char cVar1;
	int iVar2;
	
	cVar1 = p0->dItem;
	iVar2 = (int)cVar1;
	if (iVar2 != 0) {
		*(uint *)Info = (uint)(byte)*Info | (iVar2 * 0x6c + -0x7ff2e318) * 0x100;
		*(char *)Info = cVar1 + -1;
	}
	return (uint)(iVar2 != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintItems__7CBlocksii(struct CBlocks *this /*stack -136*/, int x /*$s0*/, int y /*$s1*/)
 // line 2329, offset 0x80090d14
	/* begin block 1 */
		// Start line: 2330
		// Start offset: 0x80090D14
		// Variables:
	// 		int Total; // stack offset -128
	// 		int Wx; // stack offset -120
	// 		int Wy; // stack offset -112
	// 		int Cx; // stack offset -104
	// 		int Cy; // stack offset -96

		/* begin block 1.1 */
			// Start line: 2330
			// Start offset: 0x80090D14
			// Variables:
		// 		int z; // stack offset -88

			/* begin block 1.1.1 */
				// Start line: 2347
				// Start offset: 0x80090DC0
				// Variables:
			// 		void * DoAnim; // stack offset -80

				/* begin block 1.1.1.1 */
					// Start line: 2351
					// Start offset: 0x80090DD4
					// Variables:
				// 		int f; // stack offset -72

					/* begin block 1.1.1.1.1 */
						// Start line: 2353
						// Start offset: 0x80090DDC
						// Variables:
					// 		int Sx; // $s5
					// 		int Sy; // $s4
					// 		struct ItemStruct *IStr; // $s3
					// 		int OtPos; // $fp
					// 		struct POLY_FT4 *Ft4; // $s2
					// 		int Index; // stack offset -64
					// 		int bx; // stack offset -56
					// 		int by; // stack offset -48
					// 		int Col; // $a1
					// 		int blockr; // $a1
					// 		int blockg; // $a0
					// 		int blockb; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2363
							// Start offset: 0x80090DF4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2379
								// Start offset: 0x80090ECC

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2380
									// Start offset: 0x80090ECC

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 2381
										// Start offset: 0x80090EDC
										// Variables:
									// 		struct FRAME_HDR *Fr; // $s7
									// 		int W; // $s1
									// 		int H; // $s0
									// 		short height; // $a0

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 2410
											// Start offset: 0x80090F6C

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 2419
												// Start offset: 0x80090FB8
												// Variables:
											// 		int it; // $v0
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80091024
											// End Line: 2425
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80091024
										// End Line: 2425
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800910B0
									// End Line: 2444
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800910B0
								// End Line: 2444
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800910B0
							// End Line: 2444
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009118C
						// End Line: 2453
					/* end block 1.1.1.1.1 */
					// End offset: 0x80091264
					// End Line: 2477
				/* end block 1.1.1.1 */
				// End offset: 0x8009128C
				// End Line: 2479
			/* end block 1.1.1 */
			// End offset: 0x8009128C
			// End Line: 2479
		/* end block 1.1 */
		// End offset: 0x800912A0
		// End Line: 2480
	/* end block 1 */
	// End offset: 0x800912A0
	// End Line: 2480

	/* begin block 2 */
		// Start line: 5427
	/* end block 2 */
	// End Line: 5428

void PrintItems__7CBlocksii(CBlocks *this,int x,int y)

{
	byte bVar1;
	char cVar2;
	short sVar3;
	short sVar4;
	int iVar5;
	ushort uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int OtPos;
	FRAME_HDR *pFVar10;
	uchar uVar11;
	uint uVar12;
	uchar uVar13;
	short sVar14;
	TextDat *this_00;
	uchar SpinR;
	int iVar15;
	uint uVar16;
	int y_00;
	int iVar17;
	int x_00;
	int iVar18;
	POLY_FT4 *pPVar19;
	uint uVar20;
	int X;
	int local_b0;
	int local_58;
	int local_48;
	
	IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
						(this,x,y,AddItem__FP9CacheInfoP8map_infoii,(void *)0x0);
	iVar5 = DAT_1f800000;
	iVar7 = WorldToScrX__7CBlocksii(this,x + -7,y + -0xb);
	iVar8 = WorldToScrY__7CBlocksii(this,x + -7,y + -0xb);
	local_58 = 0;
	sVar3 = (this->ClipRect).x;
	sVar4 = (this->ClipRect).y;
	while (local_58 < 2) {
		local_48 = 0;
		while (local_48 < iVar5) {
			pPVar19 = (POLY_FT4 *)0x0;
			uVar20 = *(uint *)(&DAT_1f800004 + local_48 * 4) >> 8 | 0x80000000;
			uVar16 = (uint)*(byte *)(uVar20 + 0x52) << 0x18;
			iVar15 = (int)uVar16 >> 0x18;
			x_00 = iVar15 * 0x14;
			uVar12 = (uint)*(byte *)(uVar20 + 0x53) << 0x18;
			iVar9 = (int)uVar12 >> 0x18;
			y_00 = iVar9 * 0x14;
			iVar9 = ((int)(iVar9 + (uVar12 >> 0x1f)) >> 1) + -8;
			bVar1 = (&DAT_1f800004)[local_48 * 4];
			OtPos = WorldToScrX__7CBlocksii(this,x_00,y_00);
			X = ((int)sVar3 + OtPos) - iVar7;
			OtPos = WorldToScrY__7CBlocksii(this,x_00,y_00);
			y_00 = ((int)sVar4 + OtPos) - iVar8;
			OtPos = GetOtPos__7CBlocksi(this,y_00);
			if (local_58 == 0) {
				if (*(char *)(uVar20 + 0x68) != '\0') {
					pPVar19 = PrintFt4__7TextDatiiiiii
															(this->ItemTexDat,(uint)*(ushort *)(uVar20 + 0x2a),X,y_00,0,OtPos,0);
					pFVar10 = GetFr__7TextDati(this->ItemTexDat,(uint)*(ushort *)(uVar20 + 0x2a));
					uVar12 = pFVar10->Y;
					if ((pFVar10->X & 0x2000000U) == 0) {
						pPVar19->v2 = pPVar19->v2 + -1;
						pPVar19->v3 = pPVar19->v3 + -1;
					}
					else {
						pPVar19->v0 = pPVar19->v0 + -1;
						pPVar19->v2 = pPVar19->v2 + -1;
					}
					iVar18 = (int)(uVar12 & 0x1ff) >> 1;
					iVar17 = (int)(uVar12 >> 9 & 0x1ff) >> 1;
					uVar12 = (uint)*(byte *)(uVar20 + 0x4f) & 0x1f;
					GTE_RotateFT4(pPVar19,(int)pPVar19->x0 + iVar18,(int)pPVar19->y0 + iVar17,uVar12 << 8);
					x_00 = (int)SinTab[uVar12] >> 2;
					if (x_00 < 0) {
						PlaySfxLoc__Fiii(ItemAnimSnds[(uint)ItemCAnimTbl[(uint)*(byte *)(uVar20 + 0x4c)]],
														 (int)*(char *)(uVar20 + 0x52),(int)*(char *)(uVar20 + 0x53));
						x_00 = 0;
						cVar2 = item[(uint)bVar1]._iAnimLen;
						*(undefined *)(uVar20 + 0x68) = 0;
						*(undefined *)(uVar20 + 0x50) = 1;
						*(char *)(uVar20 + 0x4f) = cVar2;
					}
					sVar14 = (short)x_00;
					if (0 < x_00 << 0x10) {
						sVar14 = -sVar14;
					}
					pPVar19->y0 = pPVar19->y0 + sVar14;
					pPVar19->y1 = pPVar19->y1 + sVar14;
					pPVar19->y3 = pPVar19->y3 + sVar14;
					pPVar19->y2 = pPVar19->y2 + sVar14;
					if (*(short *)(uVar20 + 0x2e) == 0) {
						SpinR = -0x80;
						local_b0 = 0x20;
						x_00 = 0x30;
					}
					else {
						SpinR = '`';
						local_b0 = 0x60;
						x_00 = 0x10;
					}
					DrawSpinner__FiiUcUcUciiibiT8T8Uc
										(X + (iVar18 >> 1) + (int)*(char *)&pFVar10->X,
										 y_00 + (iVar17 >> 1) + (int)*(char *)((int)&pFVar10->X + 1) + (int)sVar14,SpinR
										 ,'`',local_b0,x_00,(int)sVar14 * -2,uVar12 * -4,(void *)0x0,OtPos + 1,
										 &DAT_00000001,(void *)0x0,8);
				}
			}
			else {
				if (*(char *)(uVar20 + 0x68) == '\0') {
					if ((*(short *)(uVar20 + 0x2e) == 9) && (*(char *)(uVar20 + 0x50) == '\x02')) {
						uVar6 = *(ushort *)(uVar20 + 0x2a);
						this_00 = this->ItemTexDat;
					}
					else {
						uVar6 = *(ushort *)(uVar20 + 0x2a);
						this_00 = this->ItemTexDat;
					}
					pPVar19 = PrintFt4__7TextDatiiiiii(this_00,(uint)uVar6,X,y_00,0,OtPos,0);
				}
			}
			OtPos = GetHighlightCol__FiPcUsUsUs
												((uint)bVar1,&_pcursitem,P1ItemSelCol | 0x8000,P2ItemSelCol | 0x8000,
												 (uint)P12ItemSelCol | 0x8000);
			if (OtPos == -1) {
				pPVar19->code = pPVar19->code & 0xfd;
			}
			else {
				uVar6 = SCR_NeedHighlightPal__FUsUsi(pPVar19->clut,(ushort)OtPos,0x10);
				pPVar19->clut = uVar6;
				pPVar19->code = pPVar19->code | 2;
			}
			OtPos = (((int)(iVar15 + (uVar16 >> 0x1f)) >> 1) + -8) * 0x38;
			SpinR = (&dung_map_r)[iVar9 + OtPos];
			uVar13 = (&dung_map_g)[iVar9 + OtPos];
			uVar11 = (&dung_map_b)[iVar9 + OtPos];
			if (leveltype == '\0') {
				uVar11 = -0x80;
				uVar13 = -0x80;
				SpinR = -0x80;
			}
			local_48 = local_48 + 1;
			pPVar19->r0 = SpinR;
			pPVar19->g0 = uVar13;
			pPVar19->b0 = uVar11;
			pPVar19->code = pPVar19->code & 0xfe;
		}
		local_58 = local_58 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddMissile__FP9CacheInfoP8map_infoii(struct CacheInfo *Info /*$a0*/, struct map_info *p0 /*$a1*/, int bx /*$a2*/, int by /*$a3*/)
 // line 2489, offset 0x800912d4
	/* begin block 1 */
		// Start line: 2490
		// Start offset: 0x800912D4
		// Variables:
	// 		int bFlags; // $v0

		/* begin block 1.1 */
			// Start line: 2490
			// Start offset: 0x800912D4

			/* begin block 1.1.1 */
				// Start line: 2495
				// Start offset: 0x800912E8

				/* begin block 1.1.1.1 */
					// Start line: 2496
					// Start offset: 0x800912E8

					/* begin block 1.1.1.1.1 */
						// Start line: 2497
						// Start offset: 0x800912F8
						// Variables:
					// 		int MissIndex; // $a2
					/* end block 1.1.1.1.1 */
					// End offset: 0x80091348
					// End Line: 2504
				/* end block 1.1.1.1 */
				// End offset: 0x80091348
				// End Line: 2504

				/* begin block 1.1.1.2 */
					// Start line: 2507
					// Start offset: 0x80091348

					/* begin block 1.1.1.2.1 */
						// Start line: 2507
						// Start offset: 0x8009135C
						// Variables:
					// 		int dMiss; // $a1
					// 		int nMiss; // $t0
					// 		int MissIndex; // $v0
					// 		int Index; // $a3
					/* end block 1.1.1.2.1 */
					// End offset: 0x800913DC
					// End Line: 2520
				/* end block 1.1.1.2 */
				// End offset: 0x800913DC
				// End Line: 2520
			/* end block 1.1.1 */
			// End offset: 0x800913DC
			// End Line: 2520
		/* end block 1.1 */
		// End offset: 0x800913DC
		// End Line: 2520
	/* end block 1 */
	// End offset: 0x800913E0
	// End Line: 2524

	/* begin block 2 */
		// Start line: 5828
	/* end block 2 */
	// End Line: 5829

int AddMissile__FP9CacheInfoP8map_infoii(CacheInfo *Info,map_info *p0,int bx,int by)

{
	char cVar1;
	int iVar2;
	char *pcVar3;
	int iVar4;
	char *pcVar5;
	
	if ((p0->dFlags & 0x40U) != 0) {
		iVar2 = (int)p0->dMissile + -1;
		if ((0 < (int)p0->dMissile) && (missile[iVar2]._mitype != '\x14')) {
			*(uint *)Info = (uint)(byte)*Info | (int)(missile + iVar2) * 0x100;
			*Info = SUB41(iVar2,0);
			return 1;
		}
		iVar2 = (uint)(byte)p0->dMissile << 0x18;
		if (iVar2 < 0) {
			iVar4 = (iVar2 >> 0x1d & 3U) + 1;
			iVar2 = 0;
			if (iVar4 == 0) {
				return 0;
			}
			pcVar3 = &dMissArray + ((uint)(byte)p0->dMissile & 0x1f) * 4;
			pcVar5 = pcVar3 + iVar4;
			do {
				iVar2 = iVar2 + 1;
				cVar1 = *pcVar3;
				pcVar3 = pcVar3 + 1;
				*(uint *)Info = (uint)(byte)*Info | (int)(missile + (int)cVar1 + -1) * 0x100;
				*Info = SUB41((int)cVar1 + -1,0);
				Info = (CacheInfo *)((uint *)Info + 1);
			} while ((int)pcVar3 < (int)pcVar5);
			return iVar2;
		}
	}
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMissiles__7CBlocksii(struct CBlocks *this /*$s4*/, int x /*$s0*/, int y /*$s1*/)
 // line 2531, offset 0x800913ec
	/* begin block 1 */
		// Start line: 2532
		// Start offset: 0x800913EC
		// Variables:
	// 		struct CachedInfoList *InfoList; // $s7
	// 		int Wx; // stack offset -72
	// 		int Wy; // stack offset -64
	// 		int Cx; // stack offset -56
	// 		int Cy; // $fp
	// 		int Total; // stack offset -48

		/* begin block 1.1 */
			// Start line: 2532
			// Start offset: 0x800913EC
			// Variables:
		// 		int f; // $s5

			/* begin block 1.1.1 */
				// Start line: 2549
				// Start offset: 0x80091488
				// Variables:
			// 		int Sx; // $s3
			// 		int Sy; // $s0
			// 		struct MissileStruct *MissStr; // $s2
			/* end block 1.1.1 */
			// End offset: 0x8009149C
			// End Line: 2559
		/* end block 1.1 */
		// End offset: 0x800915B0
		// End Line: 2574
	/* end block 1 */
	// End offset: 0x800915B0
	// End Line: 2574

	/* begin block 2 */
		// Start line: 5917
	/* end block 2 */
	// End Line: 5918

void PrintMissiles__7CBlocksii(CBlocks *this,int x,int y)

{
	char cVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int y_00;
	int x_00;
	uint uVar8;
	int iVar9;
	
	IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib
						(this,x,y,AddMissile__FP9CacheInfoP8map_infoii,(void *)0x0);
	iVar4 = DAT_1f800000;
	iVar5 = WorldToScrX__7CBlocksii(this,x + -7,y + -0xb);
	iVar6 = WorldToScrY__7CBlocksii(this,x + -7,y + -0xb);
	iVar9 = 0;
	sVar2 = (this->ClipRect).x;
	sVar3 = (this->ClipRect).y;
	while (iVar9 < iVar4) {
		uVar8 = *(uint *)(&DAT_1f800004 + iVar9 * 4) >> 8 | 0x80000000;
		x_00 = (int)*(char *)(uVar8 + 0x31) * 0x14;
		y_00 = (int)*(char *)(uVar8 + 0x32) * 0x14;
		iVar7 = WorldToScrX__7CBlocksii(this,x_00,y_00);
		y_00 = WorldToScrY__7CBlocksii(this,x_00,y_00);
		cVar1 = *(char *)(uVar8 + 0x33);
		iVar9 = iVar9 + 1;
		x_00 = (((int)sVar3 + y_00) - iVar6) + ((int)*(char *)(uVar8 + 0x34) * 0x271) / 1000;
		y_00 = GetOtPos__7CBlocksi(this,x_00);
		(**(code **)(uVar8 + 0x48))
							(uVar8,(((int)sVar2 + iVar7) - iVar5) + ((int)cVar1 * 0x271) / 1000,x_00,y_00);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ScrToWorldX__7CBlocksii(struct CBlocks *this /*$a0*/, int sx /*$a1*/, int sy /*$a2*/)
 // line 2597, offset 0x800915e4
	/* begin block 1 */
		// Start line: 2598
		// Start offset: 0x800915E4
	/* end block 1 */
	// End offset: 0x800915F0
	// End Line: 2599

	/* begin block 2 */
		// Start line: 6086
	/* end block 2 */
	// End Line: 6087

int ScrToWorldX__7CBlocksii(CBlocks *this,int sx,int sy)

{
	return ((int)(((uint)sx >> 0x1f) + sx) >> 1) + sy;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ScrToWorldY__7CBlocksii(struct CBlocks *this /*$a0*/, int sx /*$a1*/, int sy /*$a2*/)
 // line 2608, offset 0x800915f8
	/* begin block 1 */
		// Start line: 2609
		// Start offset: 0x800915F8
	/* end block 1 */
	// End offset: 0x80091604
	// End Line: 2610

	/* begin block 2 */
		// Start line: 6108
	/* end block 2 */
	// End Line: 6109

int ScrToWorldY__7CBlocksii(CBlocks *this,int sx,int sy)

{
	return sy - ((int)(((uint)sx >> 0x1f) + sx) >> 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetScrollTarget__7CBlocksii(struct CBlocks *this /*$s0*/, int x /*$s1*/, int y /*$s2*/)
 // line 2619, offset 0x8009160c
	/* begin block 1 */
		// Start line: 2620
		// Start offset: 0x8009160C
	/* end block 1 */
	// End offset: 0x800916B4
	// End Line: 2622

	/* begin block 2 */
		// Start line: 6129
	/* end block 2 */
	// End Line: 6130

void SetScrollTarget__7CBlocksii(CBlocks *this,int x,int y)

{
	ushort uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	
	uVar2 = (uint)(ushort)(this->ClipRect).w << 0x10;
	uVar3 = (uint)(ushort)(this->ClipRect).h << 0x10;
	iVar4 = ScrToWorldX__7CBlocksii
										(this,(int)(((int)uVar2 >> 0x10) + (uVar2 >> 0x1f)) >> 1,
										 (int)(((int)uVar3 >> 0x10) + (uVar3 >> 0x1f)) >> 1);
	uVar1 = (this->ClipRect).w;
	this->StX = (x - iVar4) * 0x10000;
	uVar2 = (uint)uVar1 << 0x10;
	uVar3 = (uint)(ushort)(this->ClipRect).h << 0x10;
	iVar4 = ScrToWorldY__7CBlocksii
										(this,(int)(((int)uVar2 >> 0x10) + (uVar2 >> 0x1f)) >> 1,
										 (int)(((int)uVar3 >> 0x10) + (uVar3 >> 0x1f)) >> 1);
	this->StY = (y - iVar4) * 0x10000;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoScroll__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 2633, offset 0x800916d0
	/* begin block 1 */
		// Start line: 2634
		// Start offset: 0x800916D0
		// Variables:
	// 		int XDiff; // $t4
	// 		int YDiff; // $t0
	// 		int divnum; // $a1
	/* end block 1 */
	// End offset: 0x800917B4
	// End Line: 2693

	/* begin block 2 */
		// Start line: 6209
	/* end block 2 */
	// End Line: 6210

void DoScroll__7CBlocks(CBlocks *this)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = this->StX - this->Mx;
	iVar1 = INT_8011cbe4 + INT_8011cbe8;
	iVar3 = this->StY - this->My;
	iVar2 = INT_8011cbf4 + INT_8011cbf8;
	dx = INT_8011cbe4;
	INT_8011cbe4 = INT_8011cbe8;
	dy = INT_8011cbf4;
	INT_8011cbf4 = INT_8011cbf8;
	INT_8011cbe8 = iVar4;
	INT_8011cbf8 = iVar3;
	this->Mx = this->Mx + ((iVar1 + iVar4) / 3) / 0x10;
	this->My = this->My + ((iVar2 + iVar3) / 3) / 0x10;
	gr_scrxoff = this->Mx;
	gr_scryoff = this->My;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this /*$s3*/, int PlayerNum /*$s2*/, int bx /*$s0*/, int by /*$s1*/)
 // line 2702, offset 0x800917bc
	/* begin block 1 */
		// Start line: 2703
		// Start offset: 0x800917BC
	/* end block 1 */
	// End offset: 0x8009183C
	// End Line: 2713

	/* begin block 2 */
		// Start line: 6563
	/* end block 2 */
	// End Line: 6564

void SetPlayerPosBlocks__7CBlocksiii(CBlocks *this,int PlayerNum,int bx,int by)

{
	void **ppvVar1;
	
	if (1 < (uint)PlayerNum) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0xa8f);
	}
	if (this->IsTown == (void *)0x0) {
		bx = bx - 0x10;
		by = by - 0x10;
	}
	ppvVar1 = &(this->TextDat).OwnDat + PlayerNum;
	ppvVar1[0x36] = (void *)((int)(bx + ((uint)bx >> 0x1f)) >> 1);
	ppvVar1[0x38] = (void *)((int)(by + ((uint)by >> 0x1f)) >> 1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this /*$s1*/, struct RECT *R /*$s5*/, int x /*$s0*/, int y /*$s3*/, int sxoff /*stack 16*/, int syoff /*stack 20*/)
 // line 2723, offset 0x8009185c
	/* begin block 1 */
		// Start line: 2724
		// Start offset: 0x8009185C
		// Variables:
	// 		int Sx; // $s0
	// 		int Sy; // $v1
	/* end block 1 */
	// End offset: 0x80091904
	// End Line: 2735

	/* begin block 2 */
		// Start line: 6605
	/* end block 2 */
	// End Line: 6606

void GetScrXY__7CBlocksR4RECTiiii(CBlocks *this,RECT *R,int x,int y,int sxoff,int syoff)

{
	short sVar1;
	short sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = WorldToScrX__7CBlocksii(this,x,y);
	iVar4 = WorldToScrX__7CBlocksii
										(this,(int)*(short *)((int)&this->Mx + 2),(int)*(short *)((int)&this->My + 2));
	sVar1 = (this->ClipRect).x;
	iVar5 = WorldToScrY__7CBlocksii(this,x,y);
	iVar6 = WorldToScrY__7CBlocksii
										(this,(int)*(short *)((int)&this->Mx + 2),(int)*(short *)((int)&this->My + 2));
	sVar2 = (this->ClipRect).y;
	R->x = (sVar1 + (short)iVar3 + (short)sxoff) - (short)iVar4;
	R->y = (sVar2 + (short)iVar5 + (short)syoff) - (short)iVar6;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4 /*$s0*/)
 // line 2745, offset 0x80091930
	/* begin block 1 */
		// Start line: 2746
		// Start offset: 0x80091930
		// Variables:
	// 		int H; // $a1
	// 		int NewTop; // $v1
	// 		int W; // $a0
	/* end block 1 */
	// End offset: 0x800919BC
	// End Line: 2773

	/* begin block 2 */
		// Start line: 6665
	/* end block 2 */
	// End Line: 6666

void ShadScaleSkew__7CBlocksP8POLY_FT4(POLY_FT4 *Ft4)

{
	ushort uVar1;
	short sVar2;
	int iVar3;
	
	Ft4->r0 = '@';
	Ft4->g0 = '@';
	Ft4->b0 = '@';
	iVar3 = (int)Ft4->y2 - (int)Ft4->y0;
	sVar2 = Ft4->y2 - (short)(iVar3 * 3 >> 3);
	Ft4->y0 = sVar2;
	Ft4->y1 = sVar2;
	sVar2 = (short)(iVar3 * 9 >> 5);
	Ft4->x0 = Ft4->x0 - sVar2;
	Ft4->code = Ft4->code & 0xfe;
	Ft4->x1 = Ft4->x1 - sVar2;
	Ft4->code = Ft4->code | 2;
	uVar1 = SCR_GetBlackClut__Fv();
	Ft4->clut = uVar1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WorldToScrX__7CBlocksii(struct CBlocks *this /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 2789, offset 0x800919d0
	/* begin block 1 */
		// Start line: 2790
		// Start offset: 0x800919D0
	/* end block 1 */
	// End offset: 0x800919D0
	// End Line: 2791

	/* begin block 2 */
		// Start line: 6790
	/* end block 2 */
	// End Line: 6791

int WorldToScrX__7CBlocksii(CBlocks *this,int x,int y)

{
	return x - y;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WorldToScrY__7CBlocksii(struct CBlocks *this /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 2800, offset 0x800919d8
	/* begin block 1 */
		// Start line: 2801
		// Start offset: 0x800919D8
	/* end block 1 */
	// End offset: 0x800919E4
	// End Line: 2802

	/* begin block 2 */
		// Start line: 6812
	/* end block 2 */
	// End Line: 6813

int WorldToScrY__7CBlocksii(CBlocks *this,int x,int y)

{
	return (int)(x + y + ((uint)(x + y) >> 0x1f)) >> 1;
}



// decompiled code
// original method signature: 
// struct CBlocks * /*$ra*/ BL_GetCurrentBlocks__Fv()
 // line 2805, offset 0x800919ec
	/* begin block 1 */
		// Start line: 2806
		// Start offset: 0x800919EC
	/* end block 1 */
	// End offset: 0x800919F0
	// End Line: 2813

	/* begin block 2 */
		// Start line: 6828
	/* end block 2 */
	// End Line: 6829

/* WARNING: Unknown calling convention yet parameter storage is locked */

CBlocks * BL_GetCurrentBlocks__Fv(void)

{
	return CurrentBlocks;
}





