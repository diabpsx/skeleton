#ifndef BLOCK_H
#define BLOCK_H


extern int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col); // 0x8008B6D8

extern int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col); // 0x8008B75C

extern int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature); // 0x8008B8C4

extern void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count); // 0x800877CC

extern void CycleSelCols__Fv(); // 0x8008780C

extern int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu); // 0x8008799C

extern int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum); // 0x80087A10

extern struct CBlocks * __7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List); // 0x80087A64

extern void SetTownersGraphics__7CBlocks(struct CBlocks *this); // 0x80087BB8

extern void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List); // 0x80087BF0

extern void _._7CBlocks(struct CBlocks *this, int __in_chrg); // 0x80087CB8

extern void DumpGt4s__7CBlocks(struct CBlocks *this); // 0x80087D40

extern void DumpRects__7CBlocks(struct CBlocks *this); // 0x80087DA8

extern void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id); // 0x80087E10

extern void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id); // 0x80087E6C

extern void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b); // 0x80087EBC

extern void Load__7CBlocksi(struct CBlocks *this, int Id); // 0x80088208

extern void MakeRectTable__7CBlocks(struct CBlocks *this); // 0x800882B4

extern void MakeGt4Table__7CBlocks(struct CBlocks *this); // 0x80088388

extern void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr); // 0x80088490

extern struct CBlock * GetBlock__7CBlocksi(struct CBlocks *this, int num); // 0x800885CC

extern void Print__7CBlocks(struct CBlocks *this); // 0x80088644

extern void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny); // 0x8008866C

extern void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny); // 0x80088694

extern void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y); // 0x800886AC

extern void PrintGameSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY); // 0x80089BD0

extern void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B, int OtPos); // 0x80089D40

extern void PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B, int OtPos); // 0x8008AAB8

extern void PrintSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY); // 0x8008B17C

extern int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy); // 0x8008B2EC

extern int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy); // 0x8008B300

extern void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y); // 0x8008B314

extern void DoScroll__7CBlocks(struct CBlocks *this); // 0x8008B3D8

extern void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by); // 0x8008B440

extern void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff); // 0x8008B4E0

extern void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4); // 0x8008B5B4

extern int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y); // 0x8008B634

extern int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y); // 0x8008B63C

extern struct CBlocks * BL_GetCurrentBlocks__Fv(); // 0x8008B650


extern void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh); // 0x8008BA44

extern void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4); // 0x8008B9AC

extern int GetNumOfBlocks__7CBlocks(struct CBlocks *this); // 0x8008B9A0

extern int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum); // 0x8008CEB8

extern void MoveToScrollTarget__7CBlocks(struct CBlocks *this); // 0x80091F14

extern void MoveToScrollTarget__7CBlocks(struct CBlocks *this); // 0x80099ADC

extern void MoveToScrollTarget__7CBlocks(struct CBlocks *this); // 0x80073558

extern void SetTown__7CBlocksb(struct CBlocks *this, void * Val); // 0x80091F0C

extern struct TextDat * GetBlockTexDat__7CBlocks(struct CBlocks *this); // 0x80063030

extern struct TextDat * GetBlockTexDat__7CBlocks(struct CBlocks *this); // 0x80077C34

extern void DumpMonsters__7CBlocks(struct CBlocks *this); // 0x8008B978

extern void DumpObjs__7CBlocks(struct CBlocks *this); // 0x8008B954

extern void DumpItems__7CBlocks(struct CBlocks *this); // 0x8008B930

extern void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id); // 0x8008B908

extern void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id); // 0x8008B8E0


// decompiled code
// original method signature: 
// void /*$ra*/ InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this /*$a0*/, struct POLY_GT4 *Gt4 /*$a1*/, int nw /*$a2*/, int nh /*$a3*/)
 // line 47, offset 0x8008ba44
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x8008BA44
	/* end block 1 */
	// End offset: 0x8008BACC
	// End Line: 61

	/* begin block 2 */
		// Start line: 95
	/* end block 2 */
	// End Line: 96

void InitFromGt4__9LittleGt4P8POLY_GT4ii(LittleGt4 *this,POLY_GT4 *Gt4,int nw,int nh)

{
	uchar uVar1;
	
	this->clut = Gt4->clut;
	this->tpage = Gt4->tpage;
	this->code = Gt4->code & 1;
	this->u0 = Gt4->u0;
	this->v0 = Gt4->v0;
	this->u1 = Gt4->u1;
	this->v1 = Gt4->v1;
	this->u2 = Gt4->u2;
	this->v2 = Gt4->v2;
	this->u3 = Gt4->u3;
	uVar1 = Gt4->v3;
	this->w = (uchar)nw;
	this->h = (uchar)nh;
	this->v3 = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this /*$a0*/, struct POLY_GT4 *Gt4 /*$a1*/)
 // line 64, offset 0x8008b9ac
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x8008B9AC
	/* end block 1 */
	// End offset: 0x8008BA3C
	// End Line: 77

	/* begin block 2 */
		// Start line: 129
	/* end block 2 */
	// End Line: 130

void CopyToGt4__9LittleGt4P8POLY_GT4(LittleGt4 *this,POLY_GT4 *Gt4)

{
	*(undefined *)((int)&Gt4->tag + 3) = 0xc;
	Gt4->code = '<';
	Gt4->code = this->code | 0x3c;
	Gt4->clut = this->clut;
	Gt4->tpage = this->tpage;
	Gt4->u0 = this->u0;
	Gt4->v0 = this->v0;
	Gt4->u1 = this->u1;
	Gt4->v1 = this->v1;
	Gt4->u2 = this->u2;
	Gt4->v2 = this->v2;
	Gt4->u3 = this->u3;
	Gt4->v3 = this->v3;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfBlocks__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 117, offset 0x8008b9a0
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x8008B9A0
	/* end block 1 */
	// End offset: 0x8008B9A4
	// End Line: 118

	/* begin block 2 */
		// Start line: 234
	/* end block 2 */
	// End Line: 235

int GetNumOfBlocks__7CBlocks(CBlocks *this)

{
	return this->NumOfBlocks;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPlrOt__7CBlocksi(struct CBlocks *this /*$a0*/, int PlayerNum /*$a1*/)
 // line 126, offset 0x8008ceb8
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x8008CEB8
	/* end block 1 */
	// End offset: 0x8008CEC4
	// End Line: 127

	/* begin block 2 */
		// Start line: 252
	/* end block 2 */
	// End Line: 253

int GetPlrOt__7CBlocksi(CBlocks *this,int PlayerNum)

{
	return this->pOtPos[PlayerNum];
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveToScrollTarget__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 128, offset 0x80091f14
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x80091F14
	/* end block 1 */
	// End offset: 0x80091F20
	// End Line: 129

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

void MoveToScrollTarget__7CBlocks(CBlocks *this)

{
	this->Mx = this->StX;
	this->My = this->StY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveToScrollTarget__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 128, offset 0x80099adc
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x80099ADC
	/* end block 1 */
	// End offset: 0x80099AE8
	// End Line: 129

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

void MoveToScrollTarget__7CBlocks(CBlocks *this)

{
	this->Mx = this->StX;
	this->My = this->StY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveToScrollTarget__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 128, offset 0x80073558
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x80073558
	/* end block 1 */
	// End offset: 0x80073564
	// End Line: 129

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

void MoveToScrollTarget__7CBlocks(CBlocks *this)

{
	this->Mx = this->StX;
	this->My = this->StY;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTown__7CBlocksb(struct CBlocks *this /*$a0*/, void * Val /*$a1*/)
 // line 139, offset 0x80091f0c
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x80091F0C
	/* end block 1 */
	// End offset: 0x80091F0C
	// End Line: 140

	/* begin block 2 */
		// Start line: 278
	/* end block 2 */
	// End Line: 279

void SetTown__7CBlocksb(CBlocks *this,void *Val)

{
	this->IsTown = Val;
	return;
}



// decompiled code
// original method signature: 
// struct TextDat * /*$ra*/ GetBlockTexDat__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 151, offset 0x80063030
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x80063030
	/* end block 1 */
	// End offset: 0x80063034
	// End Line: 152

	/* begin block 2 */
		// Start line: 302
	/* end block 2 */
	// End Line: 303

TextDat * GetBlockTexDat__7CBlocks(CBlocks *this)

{
	return this->BgTexDat;
}



// decompiled code
// original method signature: 
// struct TextDat * /*$ra*/ GetBlockTexDat__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 151, offset 0x80077c34
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x80077C34
	/* end block 1 */
	// End offset: 0x80077C38
	// End Line: 152

	/* begin block 2 */
		// Start line: 302
	/* end block 2 */
	// End Line: 303

TextDat * GetBlockTexDat__7CBlocks(CBlocks *this)

{
	return this->BgTexDat;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpMonsters__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 156, offset 0x8008b978
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x8008B978
	/* end block 1 */
	// End offset: 0x8008B990
	// End Line: 157

	/* begin block 2 */
		// Start line: 312
	/* end block 2 */
	// End Line: 313

void DumpMonsters__7CBlocks(CBlocks *this)

{
	this->MonsterList = (MonstList *)0x0;
	DumpGraphics__7CBlocksPP7TextDatPi(this,&this->MonstTexDat,&this->MonstTexId);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpObjs__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 157, offset 0x8008b954
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8008B954
	/* end block 1 */
	// End offset: 0x8008B968
	// End Line: 158

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

void DumpObjs__7CBlocks(CBlocks *this)

{
	DumpGraphics__7CBlocksPP7TextDatPi(this,&this->ObjTexDat,&this->ObjTexId);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpItems__7CBlocks(struct CBlocks *this /*$a0*/)
 // line 158, offset 0x8008b930
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x8008B930
	/* end block 1 */
	// End offset: 0x8008B944
	// End Line: 159

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

void DumpItems__7CBlocks(CBlocks *this)

{
	DumpGraphics__7CBlocksPP7TextDatPi(this,&this->ItemTexDat,&this->ItemTexId);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetObjGraphics__7CBlocksi(struct CBlocks *this /*$a0*/, int Id /*$a3*/)
 // line 172, offset 0x8008b908
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x8008B908
	/* end block 1 */
	// End offset: 0x8008B920
	// End Line: 173

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

void SetObjGraphics__7CBlocksi(CBlocks *this,int Id)

{
	SetGraphics__7CBlocksPP7TextDatPii(this,&this->ObjTexDat,&this->ObjTexId,Id);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetItemGraphics__7CBlocksi(struct CBlocks *this /*$a0*/, int Id /*$a3*/)
 // line 173, offset 0x8008b8e0
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x8008B8E0
	/* end block 1 */
	// End offset: 0x8008B8F8
	// End Line: 174

	/* begin block 2 */
		// Start line: 346
	/* end block 2 */
	// End Line: 347

void SetItemGraphics__7CBlocksi(CBlocks *this,int Id)

{
	SetGraphics__7CBlocksPP7TextDatPii(this,&this->ItemTexDat,&this->ItemTexId,Id);
	return;
}





#endif
