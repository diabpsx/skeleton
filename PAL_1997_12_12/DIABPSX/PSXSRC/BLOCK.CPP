#include "THISDUST.H"
#include "BLOCK.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetHighlightCol__FiPiUsUsUs(int Index /*$a0*/, int *SelList /*$a1*/, unsigned short P1Col /*$a2*/, unsigned short P2Col /*$a3*/, int P12Col /*stack 16*/)
 // line 97, offset 0x8008b6d8
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x8008B6D8
	/* end block 1 */
	// End offset: 0x8008B718
	// End Line: 106

	/* begin block 2 */
		// Start line: 195
	/* end block 2 */
	// End Line: 196

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
// int /*$ra*/ GetHighlightCol__FiPcUsUsUs(int Index /*$a0*/, char *SelList /*$a1*/, unsigned short P1Col /*$a2*/, unsigned short P2Col /*$a3*/, int P12Col /*stack 16*/)
 // line 97, offset 0x8008b75c
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x8008B75C
	/* end block 1 */
	// End offset: 0x8008B79C
	// End Line: 106

	/* begin block 2 */
		// Start line: 195
	/* end block 2 */
	// End Line: 196

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
// int /*$ra*/ GetCreature__14TownToCreaturei(struct TownToCreature *this /*$a0*/, int GameCreature /*$a1*/)
 // line 174, offset 0x8008b8c4
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x8008B8C4
	/* end block 1 */
	// End offset: 0x8008B8D8
	// End Line: 177

	/* begin block 2 */
		// Start line: 349
	/* end block 2 */
	// End Line: 350

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
 // line 234, offset 0x800877cc
	/* begin block 1 */
		// Start line: 235
		// Start offset: 0x800877CC
	/* end block 1 */
	// End offset: 0x80087804
	// End Line: 241

	/* begin block 2 */
		// Start line: 469
	/* end block 2 */
	// End Line: 470

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
 // line 245, offset 0x8008780c
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x8008780C
	/* end block 1 */
	// End offset: 0x8008798C
	// End Line: 274

	/* begin block 2 */
		// Start line: 491
	/* end block 2 */
	// End Line: 492

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CycleSelCols__Fv(void)

{
	if (PauseMode == '\0') {
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
 // line 282, offset 0x8008799c
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x8008799C

		/* begin block 1.1 */
			// Start line: 283
			// Start offset: 0x8008799C
			// Variables:
		// 		unsigned int f; // $s1

			/* begin block 1.1.1 */
				// Start line: 284
				// Start offset: 0x800879C8
				// Variables:
			// 		int Creature; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800879E4
			// End Line: 288
		/* end block 1.1 */
		// End offset: 0x800879EC
		// End Line: 289
	/* end block 1 */
	// End offset: 0x800879F0
	// End Line: 291

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

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
 // line 299, offset 0x80087a10
	/* begin block 1 */
		// Start line: 300
		// Start offset: 0x80087A10

		/* begin block 1.1 */
			// Start line: 300
			// Start offset: 0x80087A10
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x80087A54
		// End Line: 305
	/* end block 1 */
	// End offset: 0x80087A58
	// End Line: 306

	/* begin block 2 */
		// Start line: 635
	/* end block 2 */
	// End Line: 636

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
	return -1;
}



// decompiled code
// original method signature: 
// struct CBlocks * /*$ra*/ __7CBlocksiiiii(struct CBlocks *this /*$s1*/, int BgId /*$s0*/, int ObjId /*$s5*/, int ItemId /*$s4*/, int Level /*stack 16*/, int List /*stack 20*/)
 // line 314, offset 0x80087a64
	/* begin block 1 */
		// Start line: 315
		// Start offset: 0x80087A64
	/* end block 1 */
	// End offset: 0x80087B7C
	// End Line: 359

	/* begin block 2 */
		// Start line: 665
	/* end block 2 */
	// End Line: 666

CBlocks * __7CBlocksiiiii(CBlocks *this,int BgId,int ObjId,int ItemId,int Level,int List)

{
	__7TextDat((TextDat *)this);
	(this->ClipRect).x = 1;
	(this->ClipRect).w = 0x13e;
	this->CursX = -1;
	this->CursY = -1;
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
 // line 378, offset 0x80087bb8
	/* begin block 1 */
		// Start line: 379
		// Start offset: 0x80087BB8
	/* end block 1 */
	// End offset: 0x80087BDC
	// End Line: 381

	/* begin block 2 */
		// Start line: 817
	/* end block 2 */
	// End Line: 818

void SetTownersGraphics__7CBlocks(CBlocks *this)

{
	TextDat *pTVar1;
	
	this->MonstTexId = 0xcb;
	pTVar1 = GM_UseTexData__Fi(0xcb);
	this->MonstTexDat = pTVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMonsterGraphics__7CBlocksii(struct CBlocks *this /*$s2*/, int Level /*$s0*/, int List /*$s1*/)
 // line 389, offset 0x80087bf0
	/* begin block 1 */
		// Start line: 390
		// Start offset: 0x80087BF0
		// Variables:
	// 		struct MonstLevel *MLev; // $s0
	// 		struct MonstList *MList; // $s0
	/* end block 1 */
	// End offset: 0x80087C9C
	// End Line: 401

	/* begin block 2 */
		// Start line: 841
	/* end block 2 */
	// End Line: 842

void SetMonsterGraphics__7CBlocksii(CBlocks *this,int Level,int List)

{
	TextDat *pTVar1;
	uint Id;
	MonstList *pMVar2;
	
	Level = Level + -1;
	if ((Level < 0) || (NumOfMonsterListLevels <= Level)) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x188);
	}
	if ((List < 0) || (AllLevels[Level].NumOfLists < List)) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x18a);
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
 // line 410, offset 0x80087cb8
	/* begin block 1 */
		// Start line: 411
		// Start offset: 0x80087CB8
	/* end block 1 */
	// End offset: 0x80087D10
	// End Line: 422

	/* begin block 2 */
		// Start line: 883
	/* end block 2 */
	// End Line: 884

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
 // line 432, offset 0x80087d40
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x80087D40

		/* begin block 1.1 */
			// Start line: 433
			// Start offset: 0x80087D40

			/* begin block 1.1.1 */
				// Start line: 435
				// Start offset: 0x80087D64
			/* end block 1.1.1 */
			// End offset: 0x80087D90
			// End Line: 440
		/* end block 1.1 */
		// End offset: 0x80087D90
		// End Line: 440
	/* end block 1 */
	// End offset: 0x80087D90
	// End Line: 440

	/* begin block 2 */
		// Start line: 928
	/* end block 2 */
	// End Line: 929

void DumpGt4s__7CBlocks(CBlocks *this)

{
	uchar uVar1;
	
	if (this->hndGt4s != -1) {
		uVar1 = GAL_Free(this->hndGt4s);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x1b5);
		}
		this->Gt4s = (LittleGt4 *)0x0;
		this->hndGt4s = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpRects__7CBlocks(struct CBlocks *this /*$s0*/)
 // line 448, offset 0x80087da8
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x80087DA8

		/* begin block 1.1 */
			// Start line: 449
			// Start offset: 0x80087DA8

			/* begin block 1.1.1 */
				// Start line: 451
				// Start offset: 0x80087DCC
			/* end block 1.1.1 */
			// End offset: 0x80087DF8
			// End Line: 456
		/* end block 1.1 */
		// End offset: 0x80087DF8
		// End Line: 456
	/* end block 1 */
	// End offset: 0x80087DF8
	// End Line: 456

	/* begin block 2 */
		// Start line: 960
	/* end block 2 */
	// End Line: 961

void DumpRects__7CBlocks(CBlocks *this)

{
	uchar uVar1;
	
	if (this->hndRects != -1) {
		uVar1 = GAL_Free(this->hndRects);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x1c5);
		}
		this->Rects = (RECT *)0x0;
		this->hndRects = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this /*$a0*/, struct TextDat **TDat /*$s2*/, int *pId /*$s0*/, int Id /*$s1*/)
 // line 465, offset 0x80087e10
	/* begin block 1 */
		// Start line: 466
		// Start offset: 0x80087E10
	/* end block 1 */
	// End offset: 0x80087E50
	// End Line: 471

	/* begin block 2 */
		// Start line: 994
	/* end block 2 */
	// End Line: 995

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
 // line 480, offset 0x80087e6c
	/* begin block 1 */
		// Start line: 481
		// Start offset: 0x80087E6C
	/* end block 1 */
	// End offset: 0x80087EA4
	// End Line: 487

	/* begin block 2 */
		// Start line: 1025
	/* end block 2 */
	// End Line: 1026

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
// void /*$ra*/ PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this /*$a0*/, int x /*$s3*/, int y /*$s2*/, int r /*stack -48*/, int g /*stack 16*/, int b /*stack 20*/)
 // line 494, offset 0x80087ebc
	/* begin block 1 */
		// Start line: 495
		// Start offset: 0x80087EBC
		// Variables:
	// 		struct LINE_F2 *F2; // stack offset -56
	/* end block 1 */
	// End offset: 0x800881D4
	// End Line: 530

	/* begin block 2 */
		// Start line: 1053
	/* end block 2 */
	// End Line: 1054

/* WARNING: Could not reconcile some variable overlaps */

void PrintBlockOutline__7CBlocksiiiii(CBlocks *this,int x,int y,int r,int g,int b)

{
	short sVar1;
	short sVar2;
	ulong *puVar3;
	short sVar4;
	LINE_F2 *local_38 [2];
	int local_30;
	
	sVar2 = (short)y;
	local_30 = r;
	PRIM_GetPrim__FPP7LINE_F2(local_38);
	*(undefined *)((int)&local_38[0]->tag + 3) = 3;
	local_38[0]->code = '@';
	local_38[0]->code = local_38[0]->code & 0xfd;
	local_38[0]->r0 = (uchar)local_30;
	sVar1 = (short)x;
	sVar4 = sVar1 + 0x27;
	local_38[0]->g0 = (uchar)g;
	local_38[0]->b0 = (uchar)b;
	puVar3 = ThisOt;
	local_38[0]->x0 = sVar1;
	local_38[0]->y0 = sVar2 + -0x15;
	local_38[0]->x1 = sVar4;
	local_38[0]->y1 = sVar2 + -0x28;
	local_38[0]->tag = local_38[0]->tag & 0xff000000 | puVar3[0xff] & 0xffffff;
	puVar3[0xff] = puVar3[0xff] & 0xff000000 | (uint)local_38[0] & 0xffffff;
	PRIM_GetPrim__FPP7LINE_F2(local_38);
	*(undefined *)((int)&local_38[0]->tag + 3) = 3;
	local_38[0]->code = '@';
	local_38[0]->code = local_38[0]->code & 0xfd;
	local_38[0]->r0 = (uchar)local_30;
	local_38[0]->g0 = (uchar)g;
	local_38[0]->b0 = (uchar)b;
	puVar3 = ThisOt;
	local_38[0]->y0 = sVar2 + -0x28;
	local_38[0]->x0 = sVar1 + 0x28;
	local_38[0]->x1 = sVar1 + 0x4f;
	local_38[0]->y1 = sVar2 + -0x15;
	local_38[0]->tag = local_38[0]->tag & 0xff000000 | puVar3[0xff] & 0xffffff;
	puVar3[0xff] = puVar3[0xff] & 0xff000000 | (uint)local_38[0] & 0xffffff;
	PRIM_GetPrim__FPP7LINE_F2(local_38);
	*(undefined *)((int)&local_38[0]->tag + 3) = 3;
	local_38[0]->code = '@';
	local_38[0]->code = local_38[0]->code & 0xfd;
	local_38[0]->r0 = (uchar)local_30;
	local_38[0]->g0 = (uchar)g;
	local_38[0]->b0 = (uchar)b;
	puVar3 = ThisOt;
	local_38[0]->x0 = sVar1 + 0x4f;
	local_38[0]->y0 = sVar2 + -0x14;
	local_38[0]->x1 = sVar4;
	local_38[0]->y1 = sVar2 + -1;
	local_38[0]->tag = local_38[0]->tag & 0xff000000 | puVar3[0xff] & 0xffffff;
	puVar3[0xff] = puVar3[0xff] & 0xff000000 | (uint)local_38[0] & 0xffffff;
	PRIM_GetPrim__FPP7LINE_F2(local_38);
	*(undefined *)((int)&local_38[0]->tag + 3) = 3;
	local_38[0]->code = '@';
	local_38[0]->code = local_38[0]->code & 0xfd;
	local_38[0]->r0 = (uchar)local_30;
	local_38[0]->g0 = (uchar)g;
	local_38[0]->b0 = (uchar)b;
	puVar3 = ThisOt;
	local_38[0]->x0 = sVar4;
	local_38[0]->y0 = sVar2 + -1;
	local_38[0]->x1 = sVar1;
	local_38[0]->y1 = sVar2 + -0x14;
	local_38[0]->tag = local_38[0]->tag & 0xff000000 | puVar3[0xff] & 0xffffff;
	puVar3[0xff] = puVar3[0xff] & 0xff000000 | (uint)local_38[0] & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7CBlocksi(struct CBlocks *this /*$s0*/, int Id /*$s1*/)
 // line 540, offset 0x80088208
	/* begin block 1 */
		// Start line: 541
		// Start offset: 0x80088208

		/* begin block 1.1 */
			// Start line: 541
			// Start offset: 0x80088208

			/* begin block 1.1.1 */
				// Start line: 543
				// Start offset: 0x8008822C
			/* end block 1.1.1 */
			// End offset: 0x8008829C
			// End Line: 551
		/* end block 1.1 */
		// End offset: 0x8008829C
		// End Line: 551
	/* end block 1 */
	// End offset: 0x8008829C
	// End Line: 551

	/* begin block 2 */
		// Start line: 1173
	/* end block 2 */
	// End Line: 1174

void Load__7CBlocksi(CBlocks *this,int Id)

{
	if ((this->TextDat).Loaded == (void *)0x0) {
		SYSI_GetFs__Fv();
		SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,(CTextFileInfo *)TX_DatTab[Id],-1);
		Use__7TextDat((TextDat *)this);
		if ((this->TextDat).hndBlockOffsets == -1) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x223);
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
 // line 561, offset 0x800882b4
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x800882B4

		/* begin block 1.1 */
			// Start line: 568
			// Start offset: 0x80088328
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x80088370
		// End Line: 573
	/* end block 1 */
	// End offset: 0x80088370
	// End Line: 573

	/* begin block 2 */
		// Start line: 1215
	/* end block 2 */
	// End Line: 1216

void MakeRectTable__7CBlocks(CBlocks *this)

{
	long lVar1;
	RECT *pRVar2;
	CBlock *this_00;
	int num;
	
	lVar1 = GAL_Alloc(this->NumOfBlocks << 3,1,"RECTTAB");
	this->hndRects = lVar1;
	if (lVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x235);
	}
	pRVar2 = (RECT *)GAL_Lock(this->hndRects);
	this->Rects = pRVar2;
	if (pRVar2 == (RECT *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x237);
	}
	num = 0;
	if (0 < this->NumOfBlocks) {
		do {
			this_00 = GetBlock__7CBlocksi(this,num);
			GetBoundingBox__6CBlockR7TextDatR4RECT(this_00,(TextDat *)this,this->Rects + num);
			num = num + 1;
		} while (num < this->NumOfBlocks);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeGt4Table__7CBlocks(struct CBlocks *this /*$s2*/)
 // line 582, offset 0x80088388
	/* begin block 1 */
		// Start line: 583
		// Start offset: 0x80088388

		/* begin block 1.1 */
			// Start line: 589
			// Start offset: 0x80088404
			// Variables:
		// 		unsigned int f; // $s1

			/* begin block 1.1.1 */
				// Start line: 589
				// Start offset: 0x8008840C
				// Variables:
			// 		struct POLY_GT4 ThisGt4; // stack offset -72
			/* end block 1.1.1 */
			// End offset: 0x80088428
			// End Line: 592
		/* end block 1.1 */
		// End offset: 0x80088474
		// End Line: 594
	/* end block 1 */
	// End offset: 0x80088474
	// End Line: 594

	/* begin block 2 */
		// Start line: 1260
	/* end block 2 */
	// End Line: 1261

void MakeGt4Table__7CBlocks(CBlocks *this)

{
	long lVar1;
	LittleGt4 *pLVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	POLY_GT4 PStack72;
	
	lVar1 = GAL_Alloc((uint)*(ushort *)&((this->TextDat).Hdr)->NumOfFrames << 4,1,"GT4TAB");
	this->hndGt4s = lVar1;
	if (lVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x248);
	}
	pLVar2 = (LittleGt4 *)GAL_Lock(this->hndGt4s);
	this->Gt4s = pLVar2;
	if (pLVar2 == (LittleGt4 *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x24a);
	}
	iVar4 = 0;
	uVar5 = 0;
	while (uVar5 < (uint)*(ushort *)&((this->TextDat).Hdr)->NumOfFrames) {
		MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR
							(this,&PStack72,(FRAME_HDR *)((int)&((this->TextDat).Frames)->FrOffset + iVar4));
		iVar3 = (int)&((this->TextDat).Frames)->FrOffset + iVar4;
		iVar4 = iVar4 + 0xc;
		InitFromGt4__9LittleGt4P8POLY_GT4ii
							(this->Gt4s + uVar5,&PStack72,(uint)*(ushort *)(iVar3 + 6) & 0x1ff,
							 *(uint *)(iVar3 + 8) & 0x1ff);
		uVar5 = uVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this /*$a0*/, struct POLY_GT4 *GT4 /*$s0*/, struct FRAME_HDR *Fr /*$s1*/)
 // line 603, offset 0x80088490
	/* begin block 1 */
		// Start line: 604
		// Start offset: 0x80088490
		// Variables:
	// 		int W; // $v1
	// 		int Rotated; // $v0
	// 		int Tpage; // $t1
	// 		int zU; // $a0
	// 		int zV; // $a3
	// 		int zW; // $a2
	// 		int zH; // $t0
	/* end block 1 */
	// End offset: 0x800885B4
	// End Line: 662

	/* begin block 2 */
		// Start line: 1304
	/* end block 2 */
	// End Line: 1305

void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(CBlocks *this,POLY_GT4 *GT4,FRAME_HDR *Fr)

{
	uchar uVar1;
	uchar uVar2;
	char cVar3;
	char cVar4;
	uchar uVar5;
	byte bVar6;
	PAL *pPVar7;
	uchar uVar8;
	ushort uVar9;
	ushort uVar10;
	int iVar11;
	
	uVar9 = *(ushort *)((int)&Fr->X + 2);
	iVar11 = Fr->Y;
	*(undefined *)((int)&GT4->tag + 3) = 0xc;
	GT4->code = '<';
	GT4->x0 = 0;
	GT4->y0 = 0;
	GT4->y1 = 0;
	GT4->x2 = 0;
	uVar9 = uVar9 & 0x1ff;
	uVar10 = (ushort)iVar11 & 0x1ff;
	GT4->x1 = uVar9;
	GT4->y2 = uVar10;
	GT4->x3 = uVar9;
	GT4->y3 = uVar10;
	pPVar7 = GetPal__7TextDati((TextDat *)this,(uint)Fr->X >> 0x19);
	GT4->clut = *(ushort *)((int)&pPVar7->InVram + 2);
	uVar1 = *(uchar *)((int)&Fr->FrOffset + 1);
	uVar9 = *(ushort *)((int)&Fr->FrOffset + 2);
	uVar2 = *(uchar *)&Fr->FrOffset;
	cVar3 = (char)*(undefined2 *)((int)&Fr->X + 2);
	cVar4 = (char)Fr->Y;
	if (((uint)Fr->Y >> 9 & 1) == 0) {
		uVar8 = uVar2 + cVar3;
		uVar5 = uVar1 + cVar4;
		GT4->u0 = uVar2;
		GT4->v0 = uVar1;
		GT4->u1 = uVar8;
		GT4->v1 = uVar1;
		GT4->u2 = uVar2;
		GT4->v2 = uVar5;
	}
	else {
		uVar5 = uVar1 + cVar3 + -1;
		uVar8 = uVar2 + cVar4;
		GT4->v0 = uVar5;
		GT4->v2 = uVar5;
		uVar5 = uVar1 + -1;
		GT4->u0 = uVar2;
		GT4->u2 = uVar8;
		GT4->u1 = uVar2;
		GT4->v1 = uVar5;
	}
	GT4->u3 = uVar8;
	GT4->v3 = uVar5;
	if ((Fr->Y & 0x8000U) == 0) {
		bVar6 = GT4->code & 0xfe;
	}
	else {
		bVar6 = GT4->code | 1;
	}
	GT4->code = bVar6;
	GT4->tpage = uVar9;
	return;
}



// decompiled code
// original method signature: 
// struct CBlock * /*$ra*/ GetBlock__7CBlocksi(struct CBlocks *this /*$s1*/, int num /*$s0*/)
 // line 671, offset 0x800885cc
	/* begin block 1 */
		// Start line: 672
		// Start offset: 0x800885CC
	/* end block 1 */
	// End offset: 0x8008862C
	// End Line: 674

	/* begin block 2 */
		// Start line: 1462
	/* end block 2 */
	// End Line: 1463

CBlock * GetBlock__7CBlocksi(CBlocks *this,int num)

{
	if ((num < 0) || (this->NumOfBlocks <= num)) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x2a0);
	}
	return (CBlock *)((this->TextDat).Blocks + (this->TextDat).BlockOffsets[num]);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Print__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 684, offset 0x80088644
	/* begin block 1 */
		// Start line: 685
		// Start offset: 0x80088644
	/* end block 1 */
	// End offset: 0x8008865C
	// End Line: 686

	/* begin block 2 */
		// Start line: 1488
	/* end block 2 */
	// End Line: 1489

void Print__7CBlocks(CBlocks *this)

{
	PrintMap__7CBlocksii(this,(int)*(short *)((int)&this->Mx + 2),(int)*(short *)((int)&this->My + 2))
	;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetXY__7CBlocksii(struct CBlocks *this /*$a0*/, int nx /*$a1*/, int ny /*$a2*/)
 // line 695, offset 0x8008866c
	/* begin block 1 */
		// Start line: 696
		// Start offset: 0x8008866C
	/* end block 1 */
	// End offset: 0x80088684
	// End Line: 699

	/* begin block 2 */
		// Start line: 1510
	/* end block 2 */
	// End Line: 1511

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
 // line 708, offset 0x80088694
	/* begin block 1 */
		// Start line: 709
		// Start offset: 0x80088694
	/* end block 1 */
	// End offset: 0x800886A4
	// End Line: 711

	/* begin block 2 */
		// Start line: 1537
	/* end block 2 */
	// End Line: 1538

void GetXY__7CBlocksPiT1(CBlocks *this,int *nx,int *ny)

{
	*nx = this->Mx;
	*ny = this->My;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintMap__7CBlocksii(struct CBlocks *this /*$t1*/, int x /*stack -264*/, int y /*stack -256*/)
 // line 753, offset 0x800886ac
	/* begin block 1 */
		// Start line: 754
		// Start offset: 0x800886AC
		// Variables:
	// 		int XPos; // stack offset -248
	// 		int YPos; // stack offset -240
	// 		int xx; // stack offset -232
	// 		int block_trans; // stack offset -224
	// 		unsigned short nlval1; // stack offset -216
	// 		int BlankBlock; // stack offset -208
	// 		int XPix; // $s0
	// 		int YPix; // $s1
	// 		int CLeft; // stack offset -200
	// 		int CRight; // stack offset -192
	// 		int CTop; // stack offset -184
	// 		int CBottom; // stack offset -176

		/* begin block 1.1 */
			// Start line: 843
			// Start offset: 0x80088924
			// Variables:
		// 		int ThisY; // stack offset -168
		// 		int OtPos; // stack offset -160
		// 		int ThisXPos; // stack offset -152
		// 		int ThisYPos; // $t0
		// 		int Height; // stack offset -144

			/* begin block 1.1.1 */
				// Start line: 859
				// Start offset: 0x800889E0
				// Variables:
			// 		struct CPart *Parts; // $s7
			// 		struct CBlock *MyBlock; // $a1
			// 		int BlockNum; // $s0
			// 		void * Hi; // stack offset -136
			// 		int bx; // $a2
			// 		int by; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 930
					// Start offset: 0x80088C7C

					/* begin block 1.1.1.1.1 */
						// Start line: 935
						// Start offset: 0x80088CA8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 938
							// Start offset: 0x80088CA8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 939
								// Start offset: 0x80088CE0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 940
									// Start offset: 0x80088CE0
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80088DEC
								// End Line: 964
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80088DEC
							// End Line: 964
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80088DEC
						// End Line: 964
					/* end block 1.1.1.1.1 */
					// End offset: 0x80088DEC
					// End Line: 964
				/* end block 1.1.1.1 */
				// End offset: 0x80088DEC
				// End Line: 964

				/* begin block 1.1.1.2 */
					// Start line: 1028
					// Start offset: 0x800890C8

					/* begin block 1.1.1.2.1 */
						// Start line: 1029
						// Start offset: 0x800890EC

						/* begin block 1.1.1.2.1.1 */
							// Start line: 1050
							// Start offset: 0x80089230

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 1051
								// Start offset: 0x80089238
								// Variables:
							// 		int MyOt; // $t3
							// 		struct RECT *BlockR; // $s0
							// 		int clipx; // $a0
							// 		int clipy; // $v1

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 1056
									// Start offset: 0x8008924C

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 1065
										// Start offset: 0x800892F4
										// Variables:
									// 		int NumOfParts; // $t5

										/* begin block 1.1.1.2.1.1.1.1.1.1 */
											// Start line: 1066
											// Start offset: 0x800892F4
											// Variables:
										// 		int f; // $t4

											/* begin block 1.1.1.2.1.1.1.1.1.1.1 */
												// Start line: 1070
												// Start offset: 0x80089318
												// Variables:
											// 		int X; // $s2
											// 		int Y; // $s0
											// 		int W; // $s3
											// 		int H; // $s4
											// 		struct POLY_GT4 *DestGt4; // stack offset -272

												/* begin block 1.1.1.2.1.1.1.1.1.1.1.1 */
													// Start line: 1076
													// Start offset: 0x80089324

													/* begin block 1.1.1.2.1.1.1.1.1.1.1.1.1 */
														// Start line: 1077
														// Start offset: 0x80089340
														// Variables:
													// 		struct LittleGt4 *ThisGt4; // $s1
													/* end block 1.1.1.2.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x800897E4
													// End Line: 1147
												/* end block 1.1.1.2.1.1.1.1.1.1.1.1 */
												// End offset: 0x800897E4
												// End Line: 1147
											/* end block 1.1.1.2.1.1.1.1.1.1.1 */
											// End offset: 0x800897E4
											// End Line: 1147
										/* end block 1.1.1.2.1.1.1.1.1.1 */
										// End offset: 0x800897EC
										// End Line: 1149
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800897EC
									// End Line: 1149
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800897EC
								// End Line: 1149
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800897EC
							// End Line: 1149
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800897EC
						// End Line: 1149
					/* end block 1.1.1.2.1 */
					// End offset: 0x800897EC
					// End Line: 1149

					/* begin block 1.1.1.2.2 */
						// Start line: 1163
						// Start offset: 0x800897EC

						/* begin block 1.1.1.2.2.1 */
							// Start line: 1165
							// Start offset: 0x800897EC
							// Variables:
						// 		int MyOt; // stack offset -128
						// 		struct RECT *BlockR; // $s0
						// 		int clipx; // $a0
						// 		int clipy; // $v1

							/* begin block 1.1.1.2.2.1.1 */
								// Start line: 1172
								// Start offset: 0x80089810

								/* begin block 1.1.1.2.2.1.1.1 */
									// Start line: 1181
									// Start offset: 0x800898B4
									// Variables:
								// 		int NumOfParts; // $t2

									/* begin block 1.1.1.2.2.1.1.1.1 */
										// Start line: 1182
										// Start offset: 0x800898B4
										// Variables:
									// 		int f; // $s6

										/* begin block 1.1.1.2.2.1.1.1.1.1 */
											// Start line: 1186
											// Start offset: 0x800898CC
											// Variables:
										// 		int X; // $s2
										// 		int Y; // $s1
										// 		int W; // $s3
										// 		int H; // $s4
										// 		struct POLY_GT4 *DestGt4; // stack offset -268

											/* begin block 1.1.1.2.2.1.1.1.1.1.1 */
												// Start line: 1192
												// Start offset: 0x800898D8

												/* begin block 1.1.1.2.2.1.1.1.1.1.1.1 */
													// Start line: 1193
													// Start offset: 0x800898F4
													// Variables:
												// 		struct LittleGt4 *ThisGt4; // $s0
												/* end block 1.1.1.2.2.1.1.1.1.1.1.1 */
												// End offset: 0x80089AA4
												// End Line: 1212
											/* end block 1.1.1.2.2.1.1.1.1.1.1 */
											// End offset: 0x80089AA4
											// End Line: 1212
										/* end block 1.1.1.2.2.1.1.1.1.1 */
										// End offset: 0x80089AA4
										// End Line: 1214
									/* end block 1.1.1.2.2.1.1.1.1 */
									// End offset: 0x80089AC4
									// End Line: 1216
								/* end block 1.1.1.2.2.1.1.1 */
								// End offset: 0x80089AC4
								// End Line: 1216
							/* end block 1.1.1.2.2.1.1 */
							// End offset: 0x80089AC4
							// End Line: 1216
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x80089AC4
						// End Line: 1216
					/* end block 1.1.1.2.2 */
					// End offset: 0x80089AC4
					// End Line: 1216
				/* end block 1.1.1.2 */
				// End offset: 0x80089AC4
				// End Line: 1216
			/* end block 1.1.1 */
			// End offset: 0x80089AC4
			// End Line: 1220
		/* end block 1.1 */
		// End offset: 0x80089B70
		// End Line: 1233
	/* end block 1 */
	// End offset: 0x80089B9C
	// End Line: 1238

	/* begin block 2 */
		// Start line: 1626
	/* end block 2 */
	// End Line: 1627

/* WARNING: Removing unreachable block (ram,0x80089054) */
/* WARNING: Removing unreachable block (ram,0x80089068) */
/* WARNING: Removing unreachable block (ram,0x80089094) */
/* WARNING: Removing unreachable block (ram,0x80089808) */

void PrintMap__7CBlocksii(CBlocks *this,int x,int y)

{
	bool bVar1;
	byte bVar2;
	byte bVar3;
	short sVar4;
	CBlock *pCVar5;
	int iVar6;
	int iVar7;
	uint uVar8;
	ulong *puVar9;
	short *psVar10;
	uint ThisYPos;
	CBlocks *this_00;
	uchar uVar11;
	ulong uVar12;
	ulong uVar13;
	short sVar14;
	int iVar15;
	RECT *pRVar16;
	int num;
	LittleGt4 *this_01;
	short sVar17;
	ulong *puVar18;
	RGBPOLY *pRVar19;
	POLY_GT4 *local_110;
	POLY_GT4 *local_10c;
	int local_108;
	int local_100;
	uint local_f8;
	uint local_f0;
	uint local_e8;
	int local_e0;
	ushort local_d8;
	int local_d0;
	int local_c8;
	int local_c0;
	int local_b8;
	int local_b0;
	int local_a8;
	int local_a0;
	uint local_98;
	int local_90;
	int local_88;
	int local_80;
	int local_78;
	int local_70;
	int local_68;
	uchar *local_60;
	uchar *local_58;
	uchar *local_50;
	uint local_48;
	CBlocks *local_44;
	ulong local_40;
	int local_3c;
	int local_38;
	ulong local_34;
	uint local_30;
	RGBPOLY *local_2c;
	
	local_d8 = 0x180;
	local_108 = x;
	local_100 = y;
	local_44 = this;
	CycleSelCols__Fv();
	switch(leveltype) {
	case '\0':
		local_d0 = 3;
		break;
	case '\x01':
		local_d0 = 0x16;
		break;
	case '\x02':
		local_d0 = 0xc;
		break;
	case '\x03':
		local_d0 = 8;
		break;
	case '\x04':
		local_d0 = 0x14;
		break;
	default:
		local_d0 = 0;
	}
	if (leveltype == '\0') {
		blank_bit = '\v';
	}
	else {
		blank_bit = '\0';
	}
	InfraFlag = 0;
	if ((plr[0]._pInfraFlag != '\0') || (plr[1]._pInfraFlag != '\0')) {
		InfraFlag = 1;
	}
	if (local_44->IsTown == (void *)0x0) {
		local_108 = local_108 + -0x140;
		local_100 = local_100 + -0x140;
	}
	local_f8 = local_108 / 0x28;
	iVar15 = local_108 % 0x28;
	local_f0 = local_100 / 0x28;
	num = local_100 % 0x28;
	if (local_108 < 0) {
		local_f8 = local_f8 - 1;
		iVar15 = iVar15 + 0x28;
	}
	abs(local_108);
	abs(local_100);
	local_c8 = (int)(local_44->ClipRect).x;
	local_b8 = (int)(local_44->ClipRect).y;
	local_108 = (num - iVar15) + -0x28 + local_c8;
	local_100 = (0x28 - ((int)(iVar15 + num + ((uint)(iVar15 + num) >> 0x1f)) >> 1)) + local_b8;
	local_c0 = local_c8 + (int)(local_44->ClipRect).w;
	local_b0 = local_b8 + (int)(local_44->ClipRect).h;
	bVar1 = iVar15 - num < 0;
	if (bVar1) {
		local_f8 = local_f8 - 1;
		local_108 = local_108 + -0x28;
	}
	local_e8 = (uint)bVar1;
	pRVar19 = &rgbb;
	this_00 = local_44;
	do {
		if (local_c0 <= local_108) {
			PRIM_Clip__FP4RECTi(&this_00->ClipRect,1);
			PRIM_FullScreen__Fi(100);
			return;
		}
		local_a8 = local_100;
		if ((local_e8 & 1) != 0) {
			local_a8 = local_100 + -0x14;
		}
		local_a0 = 2;
		if ((local_e8 & 1) != 0) {
			local_a0 = 1;
		}
		local_78 = local_f0 + 8;
		local_90 = 0;
		local_98 = local_f8;
		local_70 = local_f8 + 8;
		local_68 = local_f8 * 0x36;
		local_60 = dung_map_b + local_68;
		local_58 = dung_map_g + local_68;
		local_50 = dung_map_r + local_68;
		ThisYPos = local_f0;
		while ((num = restore_b, iVar15 = restore_g, (int)ThisYPos < (int)((uint)blank_bit + 0x2e) &&
					 ((int)local_98 < (int)((uint)blank_bit + 0x2e)))) {
			blockr = ZEXT14(local_50[ThisYPos]);
			blockg = ZEXT14(local_58[ThisYPos]);
			blockb = ZEXT14(local_60[ThisYPos]);
			local_90 = local_90 + 1;
			if ((int)(local_98 - 1) < 0) {
				pRVar19->r1 = restore_r;
				pRVar19->g1 = iVar15;
				pRVar19->b1 = num;
			}
			else {
				pRVar19->r1 = (uint)(byte)(&DAT_8010f4fa)[ThisYPos + local_68];
				pRVar19->g1 = (uint)*(byte *)(local_68 + -0x7feeffa2 + ThisYPos);
				pRVar19->b1 = (uint)(byte)(&DAT_80110bc2)[ThisYPos + local_68];
			}
			if ((int)(ThisYPos - 1) < 0) {
				rgbb.r2 = restore_r;
				rgbb.g2 = restore_g;
				rgbb.b2 = restore_b;
			}
			else {
				rgbb.r2 = ZEXT14(local_50[ThisYPos - 1]);
				rgbb.g2 = ZEXT14(local_58[ThisYPos - 1]);
				rgbb.b2 = ZEXT14(local_60[ThisYPos - 1]);
			}
			if ((int)(ThisYPos + 1) < 0x2f) {
				rgbb.r3 = ZEXT14(local_50[ThisYPos + 1]);
				rgbb.g3 = ZEXT14(local_58[ThisYPos + 1]);
				rgbb.b3 = ZEXT14(local_60[ThisYPos + 1]);
			}
			else {
				rgbb.r3 = restore_r;
				rgbb.g3 = restore_g;
				rgbb.b3 = restore_b;
			}
			if ((int)(local_98 + 1) < 0x2f) {
				rgbb.r4 = ZEXT14(*(byte *)(local_68 + -0x7fef0a9a + ThisYPos));
				rgbb.g4 = ZEXT14((byte)(&DAT_801100ca)[ThisYPos + local_68]);
				rgbb.b4 = ZEXT14((byte)(&DAT_80110c2e)[ThisYPos + local_68]);
			}
			else {
				rgbb.r4 = restore_r;
				rgbb.g4 = restore_g;
				rgbb.b4 = restore_b;
			}
			local_e0 = 0;
			iVar15 = local_70 * 2;
			num = local_78 * 2;
			if (((leveltype != '\0') && (leveltype != '\x03')) &&
				 (dung_map[local_70 * 0xd8 + local_78 * 2].dTransVal != '\0')) {
				psVar10 = &plr[0]._py;
				iVar7 = 0;
				do {
					if ((&plr[0].plractive)[iVar7] != '\0') {
						iVar6 = (int)*psVar10;
						if ((iVar6 + -6 < num) && (num < iVar6 + 6)) {
							iVar6 = (int)*(short *)((int)&plr[0]._px + iVar7);
							if ((iVar6 + -6 < iVar15) && (iVar15 < iVar6 + 6)) {
								local_e0 = 1;
								local_d8 = 0x180;
							}
							iVar6 = (int)*psVar10;
						}
						if (((iVar6 + -4 < num) && (num < iVar6 + 4)) &&
							 ((iVar6 = (int)*(short *)((int)&plr[0]._px + iVar7), iVar6 + -4 < iVar15 &&
								((iVar15 < iVar6 + 4 && (local_e0 == 0)))))) {
							local_e0 = 2;
							local_d8 = 0x1f0;
						}
					}
					psVar10 = psVar10 + 0x11d4;
					iVar7 = iVar7 + 0x23a8;
				} while ((int)psVar10 < -0x7ff1cd7a);
			}
			if (local_e0 != 0) {
				uVar8 = (uint)local_d8;
				rgbt.r1 = (int)(pRVar19->r1 * uVar8) >> 8;
				rgbt.r2 = (int)(pRVar19->r2 * uVar8) >> 8;
				rgbt.r3 = (int)(pRVar19->r3 * uVar8) >> 8;
				rgbt.r4 = (int)(pRVar19->r4 * uVar8) >> 8;
				rgbt.g1 = (int)(pRVar19->g1 * uVar8) >> 8;
				rgbt.g2 = (int)(pRVar19->g2 * uVar8) >> 8;
				rgbt.g3 = (int)(pRVar19->g3 * uVar8) >> 8;
				rgbt.g4 = (int)(pRVar19->g4 * uVar8) >> 8;
				rgbt.b1 = (int)(pRVar19->b1 * uVar8) >> 8;
				rgbt.b2 = (int)(pRVar19->b2 * uVar8) >> 8;
				rgbt.b3 = (int)(pRVar19->b3 * uVar8) >> 8;
				rgbt.b4 = (int)(pRVar19->b4 * uVar8) >> 8;
				if (0xff < rgbt.r1) {
					rgbt.r1 = 0xff;
				}
				if (0xff < rgbt.r2) {
					rgbt.r2 = 0xff;
				}
				if (0xff < rgbt.r3) {
					rgbt.r3 = 0xff;
				}
				if (0xff < rgbt.r4) {
					rgbt.r4 = 0xff;
				}
				if (0xff < rgbt.g1) {
					rgbt.g1 = 0xff;
				}
				if (0xff < rgbt.g2) {
					rgbt.g2 = 0xff;
				}
				if (0xff < rgbt.g3) {
					rgbt.g3 = 0xff;
				}
				if (0xff < rgbt.g4) {
					rgbt.g4 = 0xff;
				}
				if (0xff < rgbt.b1) {
					rgbt.b1 = 0xff;
				}
				if (0xff < rgbt.b2) {
					rgbt.b2 = 0xff;
				}
				if (0xff < rgbt.b3) {
					rgbt.b3 = 0xff;
				}
				if (0xff < rgbt.b4) {
					rgbt.b4 = 0xff;
				}
			}
			if (10 < local_90) break;
			local_88 = 0;
			if ((ThisYPos < 0x2e) && (local_98 < 0x2f)) {
				if (this_00->IsTown == (void *)0x0) {
					local_48 = ThisYPos;
					local_44 = this_00;
					local_2c = pRVar19;
					PrintGameSprites__7CBlocksiiiii(this_00,local_70,local_78,local_a0,local_108,local_a8);
				}
				else {
					local_48 = ThisYPos;
					local_44 = this_00;
					local_2c = pRVar19;
					PrintSprites__7CBlocksiiiii(this_00,local_98,ThisYPos,local_a0,local_108,local_a8);
				}
				if ((local_98 == local_44->pBlockX[0]) && (local_48 == local_44->pBlockY[0])) {
					local_44->pOtPos[0] = local_a0;
				}
				if ((local_98 == local_44->pBlockX[1]) && (local_48 == local_44->pBlockY[1])) {
					local_44->pOtPos[1] = local_a0;
				}
				num = (uint)(&dungeon)[local_98 * 0x30 + local_48] - 1;
				iVar15 = GetNumOfBlocks__7CBlocks(local_44);
				if (iVar15 <= num) {
					num = 0;
				}
				ThisYPos = local_48;
				this_00 = local_44;
				pRVar19 = local_2c;
				if (-1 < num) {
					local_3c = local_a0;
					if (local_88 != 0) {
						local_3c = 0xff;
					}
					pRVar16 = local_44->Rects + num;
					pCVar5 = GetBlock__7CBlocksi(local_44,num);
					num = (int)pRVar16->x + local_108;
					iVar15 = (int)pRVar16->y + local_a8;
					ThisYPos = local_48;
					this_00 = local_44;
					pRVar19 = local_2c;
					if ((((local_c8 <= num + (int)pRVar16->w) &&
							 (ThisYPos = local_48, this_00 = local_44, pRVar19 = local_2c, num < local_c0)) &&
							(ThisYPos = local_48, this_00 = local_44, pRVar19 = local_2c,
							local_b8 <= iVar15 + (int)pRVar16->h)) &&
						 (num = 0, ThisYPos = local_48, this_00 = local_44, pRVar19 = local_2c,
						 iVar15 < local_b0)) {
						uVar12 = 0xf0;
						uVar8 = 0xff000000;
						uVar13 = pCVar5->NumOfParts;
						puVar18 = &pCVar5->NumOfParts + uVar13 * 2;
						ThisYPos = local_48;
						this_00 = local_44;
						iVar15 = local_3c;
						pRVar19 = local_2c;
						while (num < (int)uVar13) {
							if (*puVar18 < (uint)*(ushort *)&((this_00->TextDat).Hdr)->NumOfFrames) {
								this_01 = this_00->Gt4s + *puVar18;
								sVar4 = (short)local_108 + *(short *)(puVar18 + 1);
								bVar2 = this_01->w;
								bVar3 = this_01->h;
								sVar14 = (short)local_a8 - *(short *)((int)puVar18 + 6);
								local_48 = ThisYPos;
								local_44 = this_00;
								local_40 = uVar12;
								local_3c = iVar15;
								local_38 = num;
								local_34 = uVar13;
								local_30 = uVar8;
								local_2c = pRVar19;
								PRIM_GetPrim__FPP8POLY_GT4(&local_110);
								CopyToGt4__9LittleGt4P8POLY_GT4(this_01,local_110);
								sVar17 = sVar4 + (ushort)bVar2;
								local_110->y0 = sVar14;
								local_110->y1 = sVar14;
								sVar14 = sVar14 + (ushort)bVar3;
								local_110->x0 = sVar4;
								local_110->x1 = sVar17;
								local_110->x2 = sVar4;
								local_110->y2 = sVar14;
								local_110->x3 = sVar17;
								local_110->y3 = sVar14;
								if (local_88 == 0) {
									if ((leveltype == '\0') && (daylight != '\0')) {
										local_110->r0 = -0x80;
										local_110->g0 = -0x80;
										local_110->b0 = -0x80;
										local_110->r1 = -0x80;
										local_110->g1 = -0x80;
										local_110->b1 = -0x80;
										local_110->r2 = -0x80;
										local_110->g2 = -0x80;
										local_110->b2 = -0x80;
										local_110->r3 = -0x80;
										local_110->g3 = -0x80;
										local_110->b3 = -0x80;
										if (local_38 != local_34 - 1) goto LAB_80089790;
										TryWater__FiiP8POLY_GT4i(local_44->BgTexId,*puVar18,local_110,local_3c);
									}
									else {
										if ((local_e0 != 0) && ((local_110->code & 1) == 0)) {
											local_110->code = local_110->code | 2;
											local_110->r0 = (uchar)rgbt.r1;
											local_110->g0 = (uchar)rgbt.g1;
											local_110->b0 = (uchar)rgbt.b1;
											local_110->r1 = (uchar)rgbt.r2;
											local_110->g1 = (uchar)rgbt.g2;
											local_110->b1 = (uchar)rgbt.b2;
											local_110->r2 = (uchar)rgbt.r3;
											local_110->g2 = (uchar)rgbt.g3;
											local_110->b2 = (uchar)rgbt.b3;
											local_110->r3 = (uchar)rgbt.r4;
											local_110->g3 = (uchar)rgbt.g4;
											local_110->b3 = (uchar)rgbt.b4;
											goto LAB_80089790;
										}
										local_110->code = local_110->code & 0xfd;
										local_110->r0 = (uchar)local_2c->r1;
										local_110->g0 = (uchar)local_2c->g1;
										local_110->b0 = (uchar)local_2c->b1;
										local_110->r1 = (uchar)local_2c->r2;
										local_110->g1 = (uchar)local_2c->g2;
										local_110->b1 = (uchar)local_2c->b2;
										local_110->r2 = (uchar)local_2c->r3;
										local_110->g2 = (uchar)local_2c->g3;
										local_110->b2 = (uchar)local_2c->b3;
										local_110->r3 = (uchar)local_2c->r4;
										local_110->g3 = (uchar)local_2c->g4;
										local_110->b3 = (uchar)local_2c->b4;
										nightgfx__FibiP8POLY_GT4i
															(local_44->BgTexId,(void *)(uint)(local_38 == local_34 - 1),*puVar18,
															 local_110,local_3c);
									}
								}
								else {
									uVar11 = (uchar)local_40;
									local_110->r0 = uVar11;
									local_110->g0 = uVar11;
									local_110->b0 = uVar11;
									local_110->r1 = uVar11;
									local_110->g1 = uVar11;
									local_110->b1 = uVar11;
									local_110->r2 = uVar11;
									local_110->g2 = uVar11;
									local_110->b2 = uVar11;
									local_110->r3 = uVar11;
									local_110->g3 = uVar11;
									local_110->b3 = uVar11;
LAB_80089790:
									puVar9 = ThisOt + local_3c;
									local_110->tag = local_110->tag & local_30 | *puVar9 & 0xffffff;
									*puVar9 = *puVar9 & local_30 | (uint)local_110 & 0xffffff;
								}
								puVar18 = puVar18 + -2;
								local_110->code = local_110->code & 0xfe;
								ThisYPos = local_48;
								this_00 = local_44;
								uVar12 = local_40;
								iVar15 = local_3c;
								num = local_38;
								uVar13 = local_34;
								uVar8 = local_30;
								pRVar19 = local_2c;
							}
							num = num + 1;
						}
					}
				}
			}
			else {
				local_80 = local_a0;
				pRVar16 = this_00->Rects + local_d0 + -1;
				local_48 = ThisYPos;
				local_44 = this_00;
				local_2c = pRVar19;
				pCVar5 = GetBlock__7CBlocksi(this_00,local_d0 + -1);
				num = (int)pRVar16->x + local_108;
				iVar15 = (int)pRVar16->y + local_a8;
				ThisYPos = local_48;
				this_00 = local_44;
				pRVar19 = local_2c;
				if ((local_c8 <= num + (int)pRVar16->w) &&
					 (((ThisYPos = local_48, this_00 = local_44, pRVar19 = local_2c, num < local_c0 &&
						 (ThisYPos = local_48, this_00 = local_44, pRVar19 = local_2c,
						 local_b8 <= iVar15 + (int)pRVar16->h)) &&
						(num = 0, ThisYPos = local_48, this_00 = local_44, pRVar19 = local_2c, iVar15 < local_b0
						)))) {
					uVar12 = pCVar5->NumOfParts;
					puVar18 = &pCVar5->NumOfParts + uVar12 * 2;
					psVar10 = (short *)((int)puVar18 + 6);
					ThisYPos = local_48;
					this_00 = local_44;
					pRVar19 = local_2c;
					while (num < (int)uVar12) {
						if (*puVar18 < (uint)*(ushort *)&((this_00->TextDat).Hdr)->NumOfFrames) {
							this_01 = this_00->Gt4s + *puVar18;
							sVar4 = (short)local_108 + psVar10[-1];
							bVar2 = this_01->w;
							bVar3 = this_01->h;
							sVar14 = (short)local_a8 - *psVar10;
							local_48 = ThisYPos;
							local_44 = this_00;
							local_40 = uVar12;
							local_2c = pRVar19;
							PRIM_GetPrim__FPP8POLY_GT4(&local_10c);
							CopyToGt4__9LittleGt4P8POLY_GT4(this_01,local_10c);
							sVar17 = sVar4 + (ushort)bVar2;
							local_10c->x0 = sVar4;
							local_10c->y0 = sVar14;
							local_10c->x1 = sVar17;
							local_10c->y1 = sVar14;
							local_10c->x2 = sVar4;
							local_10c->code = local_10c->code & 0xfd;
							iVar15 = restore_r;
							sVar14 = sVar14 + (ushort)bVar3;
							local_10c->y2 = sVar14;
							local_10c->x3 = sVar17;
							local_10c->y3 = sVar14;
							local_10c->r0 = (uchar)iVar15;
							local_10c->g0 = (uchar)restore_g;
							local_10c->b0 = (uchar)restore_b;
							local_10c->r1 = (uchar)restore_r;
							local_10c->g1 = (uchar)restore_g;
							local_10c->b1 = (uchar)restore_b;
							local_10c->r2 = (uchar)restore_r;
							local_10c->g2 = (uchar)restore_g;
							local_10c->b2 = (uchar)restore_b;
							local_10c->r3 = (uchar)restore_r;
							local_10c->g3 = (uchar)restore_g;
							local_10c->b3 = (uchar)restore_b;
							nightgfx__FibiP8POLY_GT4i
												(local_44->BgTexId,(void *)(uint)(num == local_40 - 1),*puVar18,local_10c,
												 local_80);
							ThisYPos = local_48;
							this_00 = local_44;
							uVar12 = local_40;
							pRVar19 = local_2c;
						}
						psVar10 = psVar10 + -4;
						puVar18 = puVar18 + -2;
						num = num + 1;
						local_10c->code = local_10c->code & 0xfe;
					}
				}
			}
			ThisYPos = ThisYPos + 1;
			local_70 = local_70 + 1;
			local_68 = local_68 + 0x36;
			local_60 = local_60 + 0x36;
			local_58 = local_58 + 0x36;
			local_50 = local_50 + 0x36;
			local_98 = local_98 + 1;
			local_78 = local_78 + 1;
			local_a8 = local_a8 + 0x28;
			local_a0 = local_a0 + 2;
		}
		if ((local_e8 & 1) == 0) {
			local_f0 = local_f0 - 1;
		}
		else {
			local_f8 = local_f8 + 1;
		}
		local_108 = local_108 + 0x28;
		local_e8 = local_e8 + 1;
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintGameSprites__7CBlocksiiiii(struct CBlocks *this /*$s7*/, int ThisXPos /*$a1*/, int ThisYPos /*$a2*/, int OtPos /*$s3*/, int ScrX /*stack 16*/, int ScrY /*stack 20*/)
 // line 1249, offset 0x80089bd0
	/* begin block 1 */
		// Start line: 1250
		// Start offset: 0x80089BD0
		// Variables:
	// 		struct map_info *p1; // $s1
	// 		struct map_info *p2; // $s2
	// 		struct map_info *p3; // $s0
	/* end block 1 */
	// End offset: 0x80089D10
	// End Line: 1273

	/* begin block 2 */
		// Start line: 2821
	/* end block 2 */
	// End Line: 2822

void PrintGameSprites__7CBlocksiiiii
							 (CBlocks *this,int ThisXPos,int ThisYPos,int OtPos,int ScrX,int ScrY)

{
	int iVar1;
	int iVar2;
	
	iVar2 = ThisXPos * 0xa20;
	iVar1 = ThisYPos * 0x18;
	PrintGameSprites__7CBlocksP8map_infoiiiiiii
						(this,(char *)(dung_map + ThisYPos * 2 + ThisXPos * 0xd8),OtPos,ScrX + 0x28,ScrY + -0x1e
						);
	PrintGameSprites__7CBlocksP8map_infoiiiiiii
						(this,&DAT_800ed780 + iVar2 + iVar1,OtPos,ScrX + 0x3c,ScrY + -0x14);
	PrintGameSprites__7CBlocksP8map_infoiiiiiii
						(this,(char *)(iVar2 + -0x7ff12d84 + iVar1),OtPos,ScrX + 0x14,ScrY + -0x14);
	PrintGameSprites__7CBlocksP8map_infoiiiiiii
						(this,(char *)(iVar2 + -0x7ff12874 + iVar1),OtPos,ScrX + 0x28,ScrY + -10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this /*$s6*/, struct map_info *piece /*$fp*/, int OtPos /*stack -112*/, int ScrX /*stack -104*/, int ScrY /*stack 16*/, int R /*stack 20*/, int G /*stack 24*/, int B /*stack 28*/, int OtPos /*stack 32*/)
 // line 1282, offset 0x80089d40
	/* begin block 1 */
		// Start line: 1283
		// Start offset: 0x80089D40
		// Variables:
	// 		int nMonster; // stack offset -96
	// 		int bItem; // $s4
	// 		int bObject; // $v0
	// 		int bFlags; // stack offset -88
	// 		int vFlags; // stack offset -80
	// 		int bDead; // stack offset -72
	// 		struct POLY_FT4 *ShadFt4; // $s0
	// 		struct POLY_FT4 *Ft4; // $s1

		/* begin block 1.1 */
			// Start line: 1283
			// Start offset: 0x80089D40

			/* begin block 1.1.1 */
				// Start line: 1301
				// Start offset: 0x80089DAC
				// Variables:
			// 		struct TextDat *ObjDat; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1304
					// Start offset: 0x80089DAC

					/* begin block 1.1.1.1.1 */
						// Start line: 1305
						// Start offset: 0x80089DB4
						// Variables:
					// 		int ObjIndex; // $s2
					// 		struct ObjectStruct *OStr; // $s1
					// 		int LoadIndex; // $v0
					// 		int TexDat; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1339
							// Start offset: 0x80089E74

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1342
								// Start offset: 0x80089EB4
								// Variables:
							// 		int Col; // $a1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80089F38
							// End Line: 1352
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80089F38
						// End Line: 1352
					/* end block 1.1.1.1.1 */
					// End offset: 0x80089F38
					// End Line: 1352
				/* end block 1.1.1.1 */
				// End offset: 0x80089F38
				// End Line: 1352
			/* end block 1.1.1 */
			// End offset: 0x80089F38
			// End Line: 1352
		/* end block 1.1 */
		// End offset: 0x80089F38
		// End Line: 1352

		/* begin block 1.2 */
			// Start line: 1358
			// Start offset: 0x80089F38

			/* begin block 1.2.1 */
				// Start line: 1359
				// Start offset: 0x80089F40
				// Variables:
			// 		struct ItemStruct *pItem; // $s0

				/* begin block 1.2.1.1 */
					// Start line: 1364
					// Start offset: 0x80089F84

					/* begin block 1.2.1.1.1 */
						// Start line: 1369
						// Start offset: 0x80089FB4
						// Variables:
					// 		struct FRAME_HDR *Fr; // $s7
					// 		int W; // $s2
					// 		int H; // $s3
					// 		short height; // $a0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1398
							// Start offset: 0x8008A060

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1404
								// Start offset: 0x8008A0A8
								// Variables:
							// 		int it; // $v0
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8008A110
							// End Line: 1410
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8008A110
						// End Line: 1410
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008A1C8
					// End Line: 1429

					/* begin block 1.2.1.1.2 */
						// Start line: 1433
						// Start offset: 0x8008A22C
						// Variables:
					// 		int Col; // $a1
					/* end block 1.2.1.1.2 */
					// End offset: 0x8008A2C4
					// End Line: 1444
				/* end block 1.2.1.1 */
				// End offset: 0x8008A2C4
				// End Line: 1444
			/* end block 1.2.1 */
			// End offset: 0x8008A2F0
			// End Line: 1450
		/* end block 1.2 */
		// End offset: 0x8008A2F0
		// End Line: 1450

		/* begin block 1.3 */
			// Start line: 1461
			// Start offset: 0x8008A328

			/* begin block 1.3.1 */
				// Start line: 1462
				// Start offset: 0x8008A330
				// Variables:
			// 		int gnMI; // $v0

				/* begin block 1.3.1.1 */
					// Start line: 1466
					// Start offset: 0x8008A330

					/* begin block 1.3.1.1.1 */
						// Start line: 1467
						// Start offset: 0x8008A340
						// Variables:
					// 		int ScrXOff; // $a1
					// 		int ScrYOff; // $a2
					/* end block 1.3.1.1.1 */
					// End offset: 0x8008A3F4
					// End Line: 1475
				/* end block 1.3.1.1 */
				// End offset: 0x8008A3F4
				// End Line: 1475
			/* end block 1.3.1 */
			// End offset: 0x8008A3F4
			// End Line: 1475
		/* end block 1.3 */
		// End offset: 0x8008A3F4
		// End Line: 1475

		/* begin block 1.4 */
			// Start line: 1482
			// Start offset: 0x8008A3F4

			/* begin block 1.4.1 */
				// Start line: 1483
				// Start offset: 0x8008A404

				/* begin block 1.4.1.1 */
					// Start line: 1485
					// Start offset: 0x8008A404

					/* begin block 1.4.1.1.1 */
						// Start line: 1486
						// Start offset: 0x8008A440
						// Variables:
					// 		struct MonsterStruct *MyMonst; // $s2
					// 		struct TextDat *CMonstGraphics; // $s5
					// 		int mi; // stack offset -64

						/* begin block 1.4.1.1.1.1 */
							// Start line: 1493
							// Start offset: 0x8008A440

							/* begin block 1.4.1.1.1.1.1 */
								// Start line: 1498
								// Start offset: 0x8008A478
								// Variables:
							// 		int Frame; // $s0
							// 		int Action; // $s3
							// 		int Dir; // $s4
							// 		int PhysFrame; // $s0
							// 		int Creature; // $s1
							// 		int ScrXOff; // $fp
							// 		int ScrYOff; // $s7

								/* begin block 1.4.1.1.1.1.1.1 */
									// Start line: 1514
									// Start offset: 0x8008A4E0

									/* begin block 1.4.1.1.1.1.1.1.1 */
										// Start line: 1521
										// Start offset: 0x8008A574
										// Variables:
									// 		char transfile; // $v0
									// 		int Col; // $a1

										/* begin block 1.4.1.1.1.1.1.1.1.1 */
											// Start line: 1552
											// Start offset: 0x8008A624

											/* begin block 1.4.1.1.1.1.1.1.1.1.1 */
												// Start line: 1553
												// Start offset: 0x8008A634
												// Variables:
											// 		int MG_No; // $v0
											// 		int SPal; // $a1
											/* end block 1.4.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8008A6B4
											// End Line: 1559
										/* end block 1.4.1.1.1.1.1.1.1.1 */
										// End offset: 0x8008A6B4
										// End Line: 1559
									/* end block 1.4.1.1.1.1.1.1.1 */
									// End offset: 0x8008A820
									// End Line: 1598
								/* end block 1.4.1.1.1.1.1.1 */
								// End offset: 0x8008A820
								// End Line: 1598
							/* end block 1.4.1.1.1.1.1 */
							// End offset: 0x8008A820
							// End Line: 1598
						/* end block 1.4.1.1.1.1 */
						// End offset: 0x8008A820
						// End Line: 1598
					/* end block 1.4.1.1.1 */
					// End offset: 0x8008A820
					// End Line: 1598
				/* end block 1.4.1.1 */
				// End offset: 0x8008A820
				// End Line: 1598
			/* end block 1.4.1 */
			// End offset: 0x8008A8B8
			// End Line: 1611
		/* end block 1.4 */
		// End offset: 0x8008A8B8
		// End Line: 1611

		/* begin block 1.5 */
			// Start line: 1616
			// Start offset: 0x8008A8B8

			/* begin block 1.5.1 */
				// Start line: 1617
				// Start offset: 0x8008A8C8
				// Variables:
			// 		struct CMonster *MyMonst; // $s2
			// 		int Frame; // $v0
			// 		int PhysFrame; // $s0
			// 		int Creature; // $s1
			// 		char transfile; // $v0

				/* begin block 1.5.1.1 */
					// Start line: 1628
					// Start offset: 0x8008A954

					/* begin block 1.5.1.1.1 */
						// Start line: 1641
						// Start offset: 0x8008A9CC
					/* end block 1.5.1.1.1 */
					// End offset: 0x8008A9FC
					// End Line: 1644
				/* end block 1.5.1.1 */
				// End offset: 0x8008A9FC
				// End Line: 1644
			/* end block 1.5.1 */
			// End offset: 0x8008AA84
			// End Line: 1652
		/* end block 1.5 */
		// End offset: 0x8008AA84
		// End Line: 1652
	/* end block 1 */
	// End offset: 0x8008AA84
	// End Line: 1652

	/* begin block 2 */
		// Start line: 3032
	/* end block 2 */
	// End Line: 3033

void PrintGameSprites__7CBlocksP8map_infoiiiiiii
							 (CBlocks *param_1,char *param_2,int param_3,int param_4,int param_5)

{
	byte bVar1;
	char cVar2;
	char cVar3;
	byte bVar4;
	char cVar5;
	ushort P1Col;
	int spinradius;
	FRAME_HDR *Fr;
	uint uVar6;
	undefined *puVar7;
	void *XFlip;
	POLY_FT4 *Ft4;
	ulong uVar8;
	short sVar9;
	uchar SpinR;
	ushort P2Col;
	ulong *puVar10;
	byte bVar11;
	int nMonster;
	uint uVar12;
	TextDat *this;
	POLY_FT4 *FT4;
	int Index;
	int Action;
	int iVar13;
	int local_90;
	uint uVar14;
	
	bVar1 = param_2[3];
	nMonster = (int)*(short *)(param_2 + 8);
	local_90 = (int)param_2[1];
	spinradius = (int)*param_2;
	uVar12 = SEXT14(param_2[4]);
	FT4 = (POLY_FT4 *)0x0;
	if ((spinradius != 0) && (Index = spinradius + -1, 0 < spinradius)) {
		if (ObjMasterLoadList[(int)(&AllObjects)[(int)object[Index]._otype].ofindex].TexDat == 0) {
			spinradius = param_1->ObjTexId;
		}
		else {
			spinradius = param_1->BgTexId;
		}
		if (spinradius == param_1->ObjTexId) {
			this = param_1->ObjTexDat;
		}
		else {
			this = (TextDat *)0x0;
			if (spinradius == param_1->BgTexId) {
				this = param_1->BgTexDat;
			}
		}
		if (this == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x537);
		}
		FT4 = (POLY_FT4 *)
					(*(code *)ObjPrintFuncs[(int)object[Index]._otype])
										(object + Index,param_4,param_5,this,param_3);
		if (FT4 != (POLY_FT4 *)0x0) {
			FT4->code = FT4->code & 0xfe;
			FT4->r0 = (uchar)blockr;
			FT4->g0 = (uchar)blockg;
			FT4->b0 = (uchar)blockb;
			spinradius = GetHighlightCol__FiPcUsUsUs
														 (Index,&_pcursobj,P1ObjSelCol | 0x8000,P2ObjSelCol | 0x8000,
															(uint)P12ObjSelCol | 0x8000);
			if (spinradius != -1) {
				P1Col = SCR_NeedHighlightPal__FUsUsi(FT4->clut,(ushort)spinradius,0x10);
				FT4->clut = P1Col;
				FT4->code = FT4->code | 2;
			}
		}
	}
	if (local_90 != 0) {
		if (param_1->ItemTexDat == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x550);
		}
		if (0x7f < local_90) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x552);
		}
		spinradius = local_90 * 0x98;
		if (*(char *)(&INT_800c1374 + local_90 * 0x26) == '\0') {
			FT4 = PrintFt4__7TextDatiiiiii
											(param_1->ItemTexDat,
											 (uint)*(ushort *)((int)INT_ARRAY_800c134c + spinradius + 10),param_4,param_5,
											 0,param_3,0);
			spinradius = GetHighlightCol__FiPcUsUsUs
														 (local_90 + -1,&_pcursitem,P1ItemSelCol | 0x8000,P2ItemSelCol | 0x8000,
															(uint)P12ItemSelCol | 0x8000);
			if (spinradius == -1) {
				FT4->code = FT4->code & 0xfd;
			}
			else {
				P1Col = SCR_NeedHighlightPal__FUsUsi(FT4->clut,(ushort)spinradius,0x10);
				FT4->clut = P1Col;
				FT4->code = FT4->code | 2;
			}
		}
		else {
			FT4 = PrintFt4__7TextDatiiiiii
											(param_1->ItemTexDat,
											 (uint)*(ushort *)((int)INT_ARRAY_800c134c + spinradius + 10),param_4,param_5,
											 0,param_3,0);
			Fr = GetFr__7TextDati(param_1->ItemTexDat,
														(uint)*(ushort *)((int)INT_ARRAY_800c134c + spinradius + 10));
			P1Col = *(ushort *)((int)&Fr->X + 2);
			uVar6 = Fr->Y;
			if ((uVar6 & 0x200) == 0) {
				FT4->v2 = FT4->v2 + -1;
				FT4->v3 = FT4->v3 + -1;
			}
			else {
				FT4->v0 = FT4->v0 + -1;
				FT4->v2 = FT4->v2 + -1;
			}
			bVar11 = *(byte *)((int)INT_ARRAY_800c136c + spinradius + 3);
			uVar14 = (uint)bVar11;
			if (bVar11 == 0) {
				PlaySfxLoc__Fiii(IS_FLIP,(int)*(char *)(&INT_800c135c + local_90 * 0x26),
												 (int)*(char *)((int)&INT_800c135c + spinradius + 1));
			}
			Action = (int)((uint)P1Col & 0x1ff) >> 1;
			iVar13 = (int)(uVar6 & 0x1ff) >> 1;
			GTE_RotateFT4((int)FT4,(int)FT4->x0 + Action,(int)FT4->y0 + iVar13,uVar14 << 8);
			Index = (int)SinTab[uVar14 & 0x1f] >> 2;
			if (Index < 0) {
				PlaySfxLoc__Fiii(ItemAnimSnds
												 [(uint)ItemCAnimTbl[(int)*(short *)(INT_ARRAY_800c134c + local_90 * 0x26)]]
												 ,(int)*(char *)(&INT_800c135c + local_90 * 0x26),
												 (int)*(char *)((int)&INT_800c135c + spinradius + 1));
				Index = 0;
				cVar5 = item[local_90]._iAnimLen;
				*(undefined *)(&INT_800c1374 + local_90 * 0x26) = 0;
				*(undefined *)((int)INT_ARRAY_800c134c + spinradius + 0xe) = 1;
				*(char *)((int)INT_ARRAY_800c134c + spinradius + 0xd) = cVar5;
			}
			sVar9 = (short)Index;
			if (0 < Index << 0x10) {
				sVar9 = -sVar9;
			}
			FT4->y0 = FT4->y0 + sVar9;
			FT4->y1 = FT4->y1 + sVar9;
			FT4->y2 = FT4->y2 + sVar9;
			FT4->y3 = FT4->y3 + sVar9;
			cVar5 = *(char *)((int)INT_ARRAY_800c136c + spinradius + 3) + '\x01';
			Index = (int)cVar5;
			*(char *)((int)INT_ARRAY_800c136c + spinradius + 3) = cVar5;
			if (Index < 0) {
				Index = Index + 0x1f;
			}
			*(char *)((int)INT_ARRAY_800c136c + spinradius + 3) = cVar5 + (char)(Index >> 5) * -0x20;
			if (*(short *)(INT_ARRAY_800c133c + local_90 * 0x26) == 0) {
				SpinR = -0x80;
				local_90 = 0x20;
				spinradius = 0x30;
			}
			else {
				SpinR = '`';
				local_90 = 0x60;
				spinradius = 0x10;
			}
			DrawSpinner__FiiUcUcUciiibiT8
								(param_4 + (Action >> 1) + (int)*(char *)&Fr->X,
								 param_5 + (iVar13 >> 1) + (int)*(char *)((int)&Fr->X + 1) + (int)sVar9,SpinR,'`',
								 local_90,spinradius,(int)sVar9 * -2,uVar14 * -4,(void *)0x0,param_3 + 1,
								 &DAT_00000001);
		}
		FT4->r0 = (uchar)blockr;
		FT4->g0 = (uchar)blockg;
		spinradius = blockb;
		FT4->code = FT4->code & 0xfe;
		FT4->b0 = (uchar)spinradius;
	}
	bVar11 = bVar1;
	bVar4 = 0;
	if (InfraFlag != 0) {
		bVar11 = bVar1 | 0x40;
		bVar4 = bVar1;
	}
	if ((bVar11 & 0x40) == 0) {
		return;
	}
	if (((bVar11 & 1) != 0) && (spinradius = (int)param_2[2] + -1, (int)param_2[2] != -1)) {
		(*missile[spinradius].PrintPtr)
							(missile + spinradius,param_4 + ((int)missile[spinradius]._mixoff * 0x271) / 1000,
							 param_5 + ((int)missile[spinradius]._miyoff * 0x271) / 1000,param_3);
	}
	if (nMonster < 1) goto LAB_8008a8b8;
	puVar7 = (undefined *)
					 TryCreaturePrint__Fiiiiiii(nMonster,blockr,blockg,blockb,param_3,param_4,param_5);
	if ((puVar7 != &DAT_00000001) && (nMonster = nMonster + -1, (monster[nMonster]._mFlags & 1) == 0))
	{
		if (monster[nMonster].MType == (CMonster *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x5dd);
		}
		if (param_1->MonstTexDat == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x5df);
		}
		this = param_1->MonstTexDat;
		spinradius = FindCreature__7CBlocksi(param_1,(uint)(monster[nMonster].MData)->GraphicType);
		if (spinradius == -1) {
			return;
		}
		cVar5 = monster[nMonster]._mxoff;
		cVar2 = monster[nMonster]._myoff;
		Action = (int)monster[nMonster].Action;
		cVar3 = monster[nMonster]._mdir;
		Index = (int)monster[nMonster]._mAnimFrame + -1;
		local_90 = GetNumOfFrames__7TextDatii(this,spinradius,Action);
		if (local_90 <= Index) {
			return;
		}
		local_90 = GetFrNum__7TextDatiiii(this,spinradius,Action,(int)cVar3,Index);
		XFlip = IsDirAliased__7TextDatiii(this,spinradius,Action,(int)cVar3);
		FT4 = PrintMonster__7TextDatiiibi
										(this,local_90,param_4 + ((int)cVar5 * 0x271) / 1000,
										 param_5 + ((int)cVar2 * 0x271) / 1000,XFlip,param_3);
		spinradius = (int)(monster[nMonster].MData)->TransFile;
		if (spinradius != 0) {
			Fr = GetFr__7TextDati(param_1->ObjTexDat,
														(&TransPals)[((spinradius << 0x19) >> 0x18) + (uint)(Action == 4)]);
			SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(param_1->ObjTexDat,Fr,FT4);
		}
		if (monster[nMonster]._mmode == '\x0f') {
			uVar6 = (uint)(monster[nMonster].MData)->GraphicType;
			spinradius = StonePals[uVar6].StonePal;
			if ((Action == 4) && (StonePals[uVar6].NoStonePals == '\x02')) {
				spinradius = spinradius + 1;
			}
			if ((monster[nMonster].MData)->GraphicType == 0x1d) {
				spinradius = spinradius + Action;
			}
			Fr = GetFr__7TextDati(param_1->ObjTexDat,spinradius);
			SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(param_1->ObjTexDat,Fr,FT4);
		}
		FT4->r0 = (uchar)blockr;
		FT4->g0 = (uchar)blockg;
		spinradius = blockb;
		FT4->code = FT4->code & 0xfe;
		FT4->b0 = (uchar)spinradius;
		Ft4 = PRIM_GetCopy__FP8POLY_FT4(FT4);
		ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
		P1Col = (monster[nMonster].MData)->GraphicType;
		if (P1Col == 10) {
LAB_8008a72c:
			if (Action == 5) {
				FT4->code = FT4->code & 0xfe | 2;
			}
		}
		else {
			if (P1Col < 0xb) {
				if (P1Col == 1) {
					Ft4->y0 = Ft4->y0 + 0x14;
					Ft4->y1 = Ft4->y1 + 0x14;
					Ft4->y2 = Ft4->y2 + 0x14;
					Ft4->y3 = Ft4->y3 + 0x14;
				}
			}
			else {
				if (P1Col == 0x15) goto LAB_8008a72c;
			}
		}
		puVar10 = ThisOt + param_3;
		P1Col = P1MonstSelCol | 0x8000;
		P2Col = P2MonstSelCol | 0x8000;
		Ft4->tag = Ft4->tag & 0xff000000 | *puVar10 & 0xffffff;
		uVar6 = (uint)P12MonstSelCol;
		*puVar10 = *puVar10 & 0xff000000 | (uint)Ft4 & 0xffffff;
		spinradius = GetHighlightCol__FiPiUsUsUs(nMonster,&_pcursmonst,P1Col,P2Col,uVar6 | 0x8000);
		if (spinradius != -1) {
			P1Col = SCR_NeedHighlightPal__FUsUsi(FT4->clut,(ushort)spinradius,0x10);
			FT4->clut = P1Col;
			FT4->code = FT4->code | 2;
		}
	}
	if ((InfraFlag != 0) && ((bVar4 & 0x40) == 0)) {
		if (PauseMode == '\0') {
			uVar8 = GU_GetRnd();
			FT4->g0 = '\0';
			FT4->b0 = '\0';
			FT4->r0 = (char)uVar8 + (char)(uVar8 / 0x30) * -0x30 + -0x70;
		}
		else {
			FT4->r0 = -0x70;
			FT4->g0 = '\0';
			FT4->b0 = '\0';
		}
		FT4->code = FT4->code & 0xfe | 2;
	}
LAB_8008a8b8:
	if (uVar12 != 0) {
		if (param_1->MonstTexDat == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x651);
		}
		nMonster = *(int *)(tempstr + (uVar12 & 0x1f) * 0xc + 0xf4);
		local_90 = (int)(uVar12 & 0xe0) >> 5;
		spinradius = FindCreature__7CBlocksi(param_1,(uint)(Monsters[nMonster].MData)->GraphicType);
		if (spinradius != -1) {
			Index = GetNumOfFrames__7TextDatii(param_1->MonstTexDat,spinradius,4);
			Index = GetFrNum__7TextDatiiii(param_1->MonstTexDat,spinradius,4,local_90,Index + -1);
			XFlip = IsDirAliased__7TextDatiii(param_1->MonstTexDat,spinradius,4,local_90);
			FT4 = PrintMonster__7TextDatiiibi(param_1->MonstTexDat,Index,param_4,param_5,XFlip,param_3);
			spinradius = (int)(Monsters[nMonster].MData)->TransFile;
			if (spinradius != 0) {
				Fr = GetFr__7TextDati(param_1->ObjTexDat,
															*(int *)((int)INT_ARRAY_8011a53c + ((spinradius << 0x19) >> 0x16)));
				SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(param_1->ObjTexDat,Fr,FT4);
			}
			FT4->r0 = (uchar)blockr;
			FT4->g0 = (uchar)blockg;
			spinradius = blockb;
			FT4->code = FT4->code & 0xfe;
			FT4->b0 = (uchar)spinradius;
			FT4 = PRIM_GetCopy__FP8POLY_FT4(FT4);
			ShadScaleSkew__7CBlocksP8POLY_FT4(FT4);
			puVar10 = ThisOt + param_3;
			FT4->tag = FT4->tag & 0xff000000 | *puVar10 & 0xffffff;
			*puVar10 = *puVar10 & 0xff000000 | (uint)FT4 & 0xffffff;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this /*$s7*/, struct map_info *piece /*$s6*/, int OtPos /*stack -64*/, int ScrX /*$fp*/, int ScrY /*stack 16*/, int R /*stack 20*/, int G /*stack 24*/, int B /*stack 28*/, int OtPos /*stack 32*/)
 // line 1663, offset 0x8008aab8
	/* begin block 1 */
		// Start line: 1664
		// Start offset: 0x8008AAB8
		// Variables:
	// 		int Monster; // stack offset -56
	// 		int bItem; // $s4
	// 		int bFlags; // stack offset -48
	// 		struct POLY_FT4 *Ft4; // $s0

		/* begin block 1.1 */
			// Start line: 1664
			// Start offset: 0x8008AAB8

			/* begin block 1.1.1 */
				// Start line: 1675
				// Start offset: 0x8008AB0C
				// Variables:
			// 		struct ItemStruct *pItem; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1691
					// Start offset: 0x8008ABD4

					/* begin block 1.1.1.1.1 */
						// Start line: 1692
						// Start offset: 0x8008ABE4
						// Variables:
					// 		struct FRAME_HDR *Fr; // $v0
					// 		int W; // $s3
					// 		int H; // $s5
					// 		short height; // $a0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1719
							// Start offset: 0x8008AC64

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1725
								// Start offset: 0x8008ACAC
								// Variables:
							// 		int it; // $v0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8008AD14
							// End Line: 1731
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008AD14
						// End Line: 1731
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008AD78
					// End Line: 1740

					/* begin block 1.1.1.1.2 */
						// Start line: 1757
						// Start offset: 0x8008AD8C
						// Variables:
					// 		int Col; // $a1
					/* end block 1.1.1.1.2 */
					// End offset: 0x8008ADF4
					// End Line: 1766
				/* end block 1.1.1.1 */
				// End offset: 0x8008ADF4
				// End Line: 1766
			/* end block 1.1.1 */
			// End offset: 0x8008ADF4
			// End Line: 1766
		/* end block 1.1 */
		// End offset: 0x8008ADF4
		// End Line: 1766

		/* begin block 1.2 */
			// Start line: 1771
			// Start offset: 0x8008ADF4

			/* begin block 1.2.1 */
				// Start line: 1772
				// Start offset: 0x8008AE08
				// Variables:
			// 		int gnMI; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 1776
					// Start offset: 0x8008AE08

					/* begin block 1.2.1.1.1 */
						// Start line: 1777
						// Start offset: 0x8008AE18
						// Variables:
					// 		int ScrXOff; // $a1
					// 		int ScrYOff; // $a2
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008AECC
					// End Line: 1785
				/* end block 1.2.1.1 */
				// End offset: 0x8008AECC
				// End Line: 1785
			/* end block 1.2.1 */
			// End offset: 0x8008AECC
			// End Line: 1785
		/* end block 1.2 */
		// End offset: 0x8008AECC
		// End Line: 1785

		/* begin block 1.3 */
			// Start line: 1793
			// Start offset: 0x8008AECC

			/* begin block 1.3.1 */
				// Start line: 1794
				// Start offset: 0x8008AEDC
				// Variables:
			// 		int Creature; // $s4
			// 		int mi; // $s2
			// 		struct POLY_FT4 *Ft4; // stack offset -72
			// 		struct TextDat *ThisData; // $s1
			// 		int PhysFrame; // $s0
			// 		int GameFrame; // $s3
			// 		int Dir; // $s0

				/* begin block 1.3.1.1 */
					// Start line: 1802
					// Start offset: 0x8008AF00

					/* begin block 1.3.1.1.1 */
						// Start line: 1812
						// Start offset: 0x8008AF58
						// Variables:
					// 		int Col; // $a1

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1840
							// Start offset: 0x8008B0D8

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1841
								// Start offset: 0x8008B0F8
								// Variables:
							// 		struct POLY_FT4 *ShadFt4; // $s0
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8008B148
							// End Line: 1845
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8008B148
						// End Line: 1845
					/* end block 1.3.1.1.1 */
					// End offset: 0x8008B148
					// End Line: 1845
				/* end block 1.3.1.1 */
				// End offset: 0x8008B148
				// End Line: 1845
			/* end block 1.3.1 */
			// End offset: 0x8008B148
			// End Line: 1845
		/* end block 1.3 */
		// End offset: 0x8008B148
		// End Line: 1845
	/* end block 1 */
	// End offset: 0x8008B148
	// End Line: 1845

	/* begin block 2 */
		// Start line: 3928
	/* end block 2 */
	// End Line: 3929

void PrintSprites__7CBlocksP8map_infoiiiiiii
							 (CBlocks *param_1,int param_2,int param_3,int param_4,int param_5)

{
	byte bVar1;
	char cVar2;
	ushort P1Col;
	POLY_FT4 *Ft4;
	FRAME_HDR *pFVar3;
	uint uVar4;
	int Direction;
	int Frm;
	short sVar5;
	ushort P2Col;
	ulong *puVar6;
	TextDat *this;
	int Index;
	int Creature;
	POLY_FT4 *local_48 [2];
	int local_40;
	int local_38;
	uint local_30;
	
	local_38 = (int)*(short *)(param_2 + 8);
	Creature = (int)*(char *)(param_2 + 1);
	local_30 = SEXT14(*(char *)(param_2 + 3));
	local_40 = param_3;
	if (Creature != 0) {
		local_40 = param_3;
		if (param_1->ItemTexDat == (TextDat *)0x0) {
			local_40 = param_3;
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x68c);
		}
		if (0x7f < Creature) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x68e);
		}
		Frm = Creature * 0x98;
		Ft4 = PrintFt4__7TextDatiiiiii
										(param_1->ItemTexDat,(uint)*(ushort *)((int)INT_ARRAY_800c134c + Frm + 10),
										 param_4,param_5,0,local_40,0);
		if (daylight == '\0') {
			Ft4->r0 = (uchar)blockr;
			Ft4->g0 = (uchar)blockg;
			Direction = blockb;
			Ft4->code = Ft4->code & 0xfe;
			Ft4->b0 = (uchar)Direction;
		}
		if (*(char *)(&INT_800c1374 + Creature * 0x26) == '\0') {
			Creature = GetHighlightCol__FiPcUsUsUs
													 (Creature + -1,&_pcursitem,P1ItemSelCol | 0x8000,P2ItemSelCol | 0x8000,
														(uint)P12ItemSelCol | 0x8000);
			if (Creature == -1) {
				Ft4->code = Ft4->code & 0xfd;
			}
			else {
				P1Col = SCR_NeedHighlightPal__FUsUsi(Ft4->clut,(ushort)Creature,0x10);
				Ft4->clut = P1Col;
				Ft4->code = Ft4->code | 2;
			}
		}
		else {
			pFVar3 = GetFr__7TextDati(param_1->ItemTexDat,
																(uint)*(ushort *)((int)INT_ARRAY_800c134c + Frm + 10));
			P1Col = *(ushort *)((int)&pFVar3->X + 2);
			uVar4 = pFVar3->Y;
			if ((uVar4 & 0x200) == 0) {
				Ft4->v2 = Ft4->v2 + -1;
				Ft4->v3 = Ft4->v3 + -1;
			}
			else {
				Ft4->v0 = Ft4->v0 + -1;
				Ft4->v2 = Ft4->v2 + -1;
			}
			bVar1 = *(byte *)((int)INT_ARRAY_800c136c + Frm + 3);
			if (bVar1 == 0) {
				PlaySfxLoc__Fiii(IS_FLIP,(int)*(char *)(&INT_800c135c + Creature * 0x26),
												 (int)*(char *)((int)&INT_800c135c + Frm + 1));
			}
			GTE_RotateFT4((int)Ft4,(int)Ft4->x0 + ((int)((uint)P1Col & 0x1ff) >> 1),
										(int)Ft4->y0 + ((int)(uVar4 & 0x1ff) >> 1),(uint)bVar1 << 8);
			Direction = (int)SinTab[(uint)bVar1 & 0x1f] >> 2;
			if (Direction < 0) {
				PlaySfxLoc__Fiii(ItemAnimSnds
												 [(uint)ItemCAnimTbl[(int)*(short *)(INT_ARRAY_800c134c + Creature * 0x26)]]
												 ,(int)*(char *)(&INT_800c135c + Creature * 0x26),
												 (int)*(char *)((int)&INT_800c135c + Frm + 1));
				Direction = 0;
				cVar2 = item[Creature]._iAnimLen;
				*(undefined *)(&INT_800c1374 + Creature * 0x26) = 0;
				*(undefined *)((int)INT_ARRAY_800c134c + Frm + 0xe) = 1;
				*(char *)((int)INT_ARRAY_800c134c + Frm + 0xd) = cVar2;
			}
			sVar5 = (short)Direction;
			if (0 < Direction << 0x10) {
				sVar5 = -sVar5;
			}
			Ft4->y0 = Ft4->y0 + sVar5;
			Ft4->y1 = Ft4->y1 + sVar5;
			Ft4->y2 = Ft4->y2 + sVar5;
			Ft4->y3 = Ft4->y3 + sVar5;
			cVar2 = *(char *)((int)INT_ARRAY_800c136c + Frm + 3) + '\x01';
			Creature = (int)cVar2;
			*(char *)((int)INT_ARRAY_800c136c + Frm + 3) = cVar2;
			if (Creature < 0) {
				Creature = Creature + 0x1f;
			}
			*(char *)((int)INT_ARRAY_800c136c + Frm + 3) = cVar2 + (char)(Creature >> 5) * -0x20;
		}
	}
	if (((local_30 & 1) != 0) &&
		 (Creature = (int)*(char *)(param_2 + 2) + -1, (int)*(char *)(param_2 + 2) != -1)) {
		(*missile[Creature].PrintPtr)
							(missile + Creature,param_4 + ((int)missile[Creature]._mixoff * 0x271) / 1000,
							 param_5 + ((int)missile[Creature]._miyoff * 0x271) / 1000,local_40 + 2);
	}
	if (0 < local_38) {
		if (param_1->MonstTexDat == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x708);
		}
		this = param_1->MonstTexDat;
		Index = local_38 + -1;
		Frm = towner[Index]._tAnimFrame;
		Direction = towner[Index]._tdir;
		Creature = FindTownCreature__7CBlocksi(param_1,towner[Index]._ttype);
		if (Creature != -1) {
			Frm = GetFrNum__7TextDatiiii(this,Creature,0,Direction,Frm + -1);
			PRIM_GetPrim__FPP8POLY_FT4(local_48);
			PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_48[0],Frm,param_4,param_5,0,0);
			Frm = local_40;
			if (daylight == '\0') {
				local_48[0]->r0 = (uchar)blockr;
				local_48[0]->g0 = (uchar)blockg;
				local_48[0]->b0 = (uchar)blockb;
				local_48[0]->code = local_48[0]->code & 0xfe;
			}
			P1Col = P1MonstSelCol | 0x8000;
			puVar6 = ThisOt + local_40;
			P2Col = P2MonstSelCol | 0x8000;
			local_48[0]->tag = local_48[0]->tag & 0xff000000 | *puVar6 & 0xffffff;
			uVar4 = (uint)P12MonstSelCol;
			*puVar6 = *puVar6 & 0xff000000 | (uint)local_48[0] & 0xffffff;
			Direction = GetHighlightCol__FiPiUsUsUs(Index,&_pcursmonst,P1Col,P2Col,uVar4 | 0x8000);
			if (Direction != -1) {
				P1Col = SCR_NeedHighlightPal__FUsUsi(local_48[0]->clut,(ushort)Direction,0x10);
				local_48[0]->clut = P1Col;
				local_48[0]->code = local_48[0]->code | 2;
			}
			if (Creature == 3) {
				cow_in_sight = '\x01';
			}
			if (Creature == 0xc) {
				inn_in_sight = '\x01';
			}
			if ((Creature != 4) && (daylight != '\0')) {
				Ft4 = PRIM_GetCopy__FP8POLY_FT4(local_48[0]);
				ShadScaleSkew__7CBlocksP8POLY_FT4(Ft4);
				puVar6 = ThisOt + Frm;
				Ft4->tag = Ft4->tag & 0xff000000 | *puVar6 & 0xffffff;
				*puVar6 = *puVar6 & 0xff000000 | (uint)Ft4 & 0xffffff;
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintSprites__7CBlocksiiiii(struct CBlocks *this /*$s7*/, int ThisXPos /*$a1*/, int ThisYPos /*$a2*/, int OtPos /*$s3*/, int ScrX /*stack 16*/, int ScrY /*stack 20*/)
 // line 1852, offset 0x8008b17c
	/* begin block 1 */
		// Start line: 1853
		// Start offset: 0x8008B17C
		// Variables:
	// 		struct map_info *p1; // $s1
	// 		struct map_info *p2; // $s2
	// 		struct map_info *p3; // $s0
	/* end block 1 */
	// End offset: 0x8008B2BC
	// End Line: 1873

	/* begin block 2 */
		// Start line: 4370
	/* end block 2 */
	// End Line: 4371

void PrintSprites__7CBlocksiiiii
							 (CBlocks *this,int ThisXPos,int ThisYPos,int OtPos,int ScrX,int ScrY)

{
	int iVar1;
	int iVar2;
	
	iVar2 = ThisXPos * 0xa20;
	iVar1 = ThisYPos * 0x18;
	PrintSprites__7CBlocksP8map_infoiiiiiii
						(this,(int)(dung_map + ThisYPos * 2 + ThisXPos * 0xd8),OtPos,ScrX + 0x28,ScrY + -0x1e);
	PrintSprites__7CBlocksP8map_infoiiiiiii
						(this,(int)(&DAT_800ed780 + iVar2 + iVar1),OtPos,ScrX + 0x3c,ScrY + -0x14);
	PrintSprites__7CBlocksP8map_infoiiiiiii
						(this,iVar2 + -0x7ff12d84 + iVar1,OtPos,ScrX + 0x14,ScrY + -0x14);
	PrintSprites__7CBlocksP8map_infoiiiiiii
						(this,iVar2 + -0x7ff12874 + iVar1,OtPos,ScrX + 0x28,ScrY + -10);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ScrToWorldX__7CBlocksii(struct CBlocks *this /*$a0*/, int sx /*$a1*/, int sy /*$a2*/)
 // line 1882, offset 0x8008b2ec
	/* begin block 1 */
		// Start line: 1883
		// Start offset: 0x8008B2EC
	/* end block 1 */
	// End offset: 0x8008B2F8
	// End Line: 1884

	/* begin block 2 */
		// Start line: 4555
	/* end block 2 */
	// End Line: 4556

int ScrToWorldX__7CBlocksii(CBlocks *this,int sx,int sy)

{
	return ((int)(((uint)sx >> 0x1f) + sx) >> 1) + sy;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ScrToWorldY__7CBlocksii(struct CBlocks *this /*$a0*/, int sx /*$a1*/, int sy /*$a2*/)
 // line 1893, offset 0x8008b300
	/* begin block 1 */
		// Start line: 1894
		// Start offset: 0x8008B300
	/* end block 1 */
	// End offset: 0x8008B30C
	// End Line: 1895

	/* begin block 2 */
		// Start line: 4577
	/* end block 2 */
	// End Line: 4578

int ScrToWorldY__7CBlocksii(CBlocks *this,int sx,int sy)

{
	return sy - ((int)(((uint)sx >> 0x1f) + sx) >> 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetScrollTarget__7CBlocksii(struct CBlocks *this /*$s0*/, int x /*$s1*/, int y /*$s2*/)
 // line 1904, offset 0x8008b314
	/* begin block 1 */
		// Start line: 1905
		// Start offset: 0x8008B314
	/* end block 1 */
	// End offset: 0x8008B3BC
	// End Line: 1907

	/* begin block 2 */
		// Start line: 4598
	/* end block 2 */
	// End Line: 4599

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
// void /*$ra*/ DoScroll__7CBlocks(struct CBlocks *this /*$a1*/)
 // line 1916, offset 0x8008b3d8
	/* begin block 1 */
		// Start line: 1917
		// Start offset: 0x8008B3D8
		// Variables:
	// 		int YDiff; // $v1
	/* end block 1 */
	// End offset: 0x8008B438
	// End Line: 1924

	/* begin block 2 */
		// Start line: 4624
	/* end block 2 */
	// End Line: 4625

void DoScroll__7CBlocks(CBlocks *this)

{
	int iVar1;
	int iVar2;
	
	iVar2 = this->StX - this->Mx;
	iVar1 = this->StY - this->My;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 0x1f;
	}
	this->Mx = this->Mx + (iVar2 >> 5);
	if (iVar1 < 0) {
		iVar1 = iVar1 + 0x1f;
	}
	this->My = this->My + (iVar1 >> 5);
	gr_scrxoff = this->Mx;
	gr_scryoff = this->My;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this /*$s3*/, int PlayerNum /*$s2*/, int bx /*$s0*/, int by /*$s1*/)
 // line 1933, offset 0x8008b440
	/* begin block 1 */
		// Start line: 1934
		// Start offset: 0x8008B440
	/* end block 1 */
	// End offset: 0x8008B4C0
	// End Line: 1944

	/* begin block 2 */
		// Start line: 4659
	/* end block 2 */
	// End Line: 4660

void SetPlayerPosBlocks__7CBlocksiii(CBlocks *this,int PlayerNum,int bx,int by)

{
	int *piVar1;
	
	if (1 < (uint)PlayerNum) {
		DBG_Error((char *)0x0,"psxsrc/BLOCK.CPP",0x78e);
	}
	if (this->IsTown == (void *)0x0) {
		bx = bx - 0x10;
		by = by - 0x10;
	}
	piVar1 = &(this->TextDat).TexNum + PlayerNum;
	piVar1[0x32] = (int)(bx + ((uint)bx >> 0x1f)) >> 1;
	piVar1[0x34] = (int)(by + ((uint)by >> 0x1f)) >> 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this /*$s1*/, struct RECT *R /*$s5*/, int x /*$s0*/, int y /*$s3*/, int sxoff /*stack 16*/, int syoff /*stack 20*/)
 // line 1954, offset 0x8008b4e0
	/* begin block 1 */
		// Start line: 1955
		// Start offset: 0x8008B4E0
		// Variables:
	// 		int Sx; // $s0
	// 		int Sy; // $v1
	/* end block 1 */
	// End offset: 0x8008B588
	// End Line: 1966

	/* begin block 2 */
		// Start line: 4701
	/* end block 2 */
	// End Line: 4702

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
// void /*$ra*/ ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4 /*$a0*/)
 // line 2022, offset 0x8008b5b4
	/* begin block 1 */
		// Start line: 2023
		// Start offset: 0x8008B5B4
		// Variables:
	// 		int H; // $a1
	// 		int NewTop; // $v1
	// 		int W; // $a2
	/* end block 1 */
	// End offset: 0x8008B62C
	// End Line: 2050

	/* begin block 2 */
		// Start line: 4860
	/* end block 2 */
	// End Line: 4861

void ShadScaleSkew__7CBlocksP8POLY_FT4(POLY_FT4 *Ft4)

{
	short sVar1;
	int iVar2;
	
	iVar2 = (int)Ft4->y2 - (int)Ft4->y0;
	sVar1 = Ft4->y2 - (short)(iVar2 * 3 >> 3);
	Ft4->y0 = sVar1;
	Ft4->y1 = sVar1;
	sVar1 = (short)(iVar2 * 9 >> 5);
	Ft4->x0 = Ft4->x0 - sVar1;
	Ft4->code = Ft4->code & 0xfe;
	Ft4->r0 = '\0';
	Ft4->g0 = '\0';
	Ft4->b0 = '\0';
	Ft4->tpage = Ft4->tpage;
	Ft4->x1 = Ft4->x1 - sVar1;
	Ft4->code = Ft4->code | 2;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WorldToScrX__7CBlocksii(struct CBlocks *this /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 2061, offset 0x8008b634
	/* begin block 1 */
		// Start line: 2062
		// Start offset: 0x8008B634
	/* end block 1 */
	// End offset: 0x8008B634
	// End Line: 2063

	/* begin block 2 */
		// Start line: 4958
	/* end block 2 */
	// End Line: 4959

int WorldToScrX__7CBlocksii(CBlocks *this,int x,int y)

{
	return x - y;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WorldToScrY__7CBlocksii(struct CBlocks *this /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 2072, offset 0x8008b63c
	/* begin block 1 */
		// Start line: 2073
		// Start offset: 0x8008B63C
	/* end block 1 */
	// End offset: 0x8008B648
	// End Line: 2074

	/* begin block 2 */
		// Start line: 4980
	/* end block 2 */
	// End Line: 4981

int WorldToScrY__7CBlocksii(CBlocks *this,int x,int y)

{
	return (int)(x + y + ((uint)(x + y) >> 0x1f)) >> 1;
}



// decompiled code
// original method signature: 
// struct CBlocks * /*$ra*/ BL_GetCurrentBlocks__Fv()
 // line 2109, offset 0x8008b650
	/* begin block 1 */
		// Start line: 2110
		// Start offset: 0x8008B650
	/* end block 1 */
	// End offset: 0x8008B654
	// End Line: 2117

	/* begin block 2 */
		// Start line: 5060
	/* end block 2 */
	// End Line: 5061

/* WARNING: Unknown calling convention yet parameter storage is locked */

CBlocks * BL_GetCurrentBlocks__Fv(void)

{
	return CurrentBlocks;
}





