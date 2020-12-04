#ifndef GMAN_H
#define GMAN_H


extern struct TextDat * __7TextDat(struct TextDat *this); // 0x8007E18C

extern void _._7TextDat(struct TextDat *this, int __in_chrg); // 0x8007E1CC

extern void Use__7TextDat(struct TextDat *this); // 0x8007E214

extern void * TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, void * LastChunk); // 0x8007E408

extern void StreamLoadTP__7TextDat(struct TextDat *this); // 0x8007E4D8

extern void FinishedUsing__7TextDat(struct TextDat *this); // 0x8007E590

extern void MakeBlockOffsetTab__7TextDat(struct TextDat *this); // 0x8007E5EC

extern long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this); // 0x8007E65C

extern void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip); // 0x8007E788

extern struct POLY_FT4 * PrintMonster__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, void * XFlip, int OtPos); // 0x8007E884

extern void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip); // 0x8007EC8C

extern unsigned char * GetDecompBufffer__7TextDati(struct TextDat *this, int Size); // 0x8007EEF8

extern void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip); // 0x8007F058

extern void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip); // 0x8007F154

extern void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3); // 0x8007F3B0

extern void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y); // 0x8007F430

extern struct POLY_FT4 * PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip); // 0x8007F5F4

extern struct POLY_GT4 * PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip); // 0x8007F748

extern struct POLY_GT3 * PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos); // 0x8007F89C

extern void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr); // 0x8007F980

extern void MakeCreatureOffsetTab__7TextDat(struct TextDat *this); // 0x8007FAD4

extern void MakePalOffsetTab__7TextDat(struct TextDat *this); // 0x8007FC14

extern void InitData__7TextDat(struct TextDat *this); // 0x8007FD10

extern void DumpData__7TextDat(struct TextDat *this); // 0x8007FD3C

extern struct TextDat * GM_UseTexData__Fi(int Id); // 0x8007FE84

extern void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin); // 0x8007FFA4

extern void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4); // 0x8007FFF8

extern int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame); // 0x800800C0

extern void * IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction); // 0x80080114

extern void DoDecompRequests__7TextDat(struct TextDat *this); // 0x8008016C

extern void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R); // 0x80080290

extern struct CTextFileInfo * GetFileInfo__7TextDati(struct TextDat *this, int Id); // 0x80080364

extern int GetSize__C15CCreatureAction(struct CCreatureAction *this); // 0x800803B4

extern int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame); // 0x800803DC

extern void InitDirRemap__15CCreatureAction(struct CCreatureAction *this); // 0x80080484

extern int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame); // 0x80080544

extern struct CCreatureAction * GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum); // 0x80080588

extern void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this); // 0x80080618

extern int GetSize__C12CCreatureHdr(struct CCreatureHdr *this); // 0x80080688

extern long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this); // 0x800806F4

extern long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this); // 0x80080744

extern long GetFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext); // 0x8008076C

extern void * HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext); // 0x80080808

extern void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes); // 0x80080870

extern struct CScreen * __7CScreen(struct CScreen *this); // 0x80080944

extern void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy); // 0x80080978

extern void Unload__7CScreen(struct CScreen *this); // 0x80080BF4

extern void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval); // 0x80080C18

extern void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R); // 0x80080EF8

extern void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R); // 0x80080F70

extern void _GLOBAL_.D.DatPool(); // 0x800810CC

extern void _GLOBAL_.I.DatPool(); // 0x80081124


extern int GetSize__C6CBlock(struct CBlock *this); // 0x80081494

extern void * HasTp__C13CTextFileInfo(struct CTextFileInfo *this); // 0x8008146C

extern void * HasDat__C13CTextFileInfo(struct CTextFileInfo *this); // 0x80081444

extern char * GetName__C13CTextFileInfo(struct CTextFileInfo *this); // 0x80081438

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8008141C

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80085098

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x800875C4

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8008BBC0

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8008EAF8

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80096350

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8009E424

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x800A00FC

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80034FBC

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80047B58

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8006310C

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80075A90

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80077D04

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x80081400

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x800875A8

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x8008BBA4

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x8008EADC

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x80034FA0

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x800630F0

extern int GetNumOfFrames__7TextDat(struct TextDat *this); // 0x800813EC

extern int GetNumOfFrames__7TextDat(struct TextDat *this); // 0x80075A7C

extern void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum); // 0x800813E0

extern void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum); // 0x8008BB98

extern void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum); // 0x8008CFCC

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x800813CC

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x8008BB84

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x8008CFB8

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x8009406C

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x800A00E8

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x80058AF8

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x80077CF0

extern int GetNumOfActions__7TextDati(struct TextDat *this, int Creature); // 0x8008CF1C

extern int GetNumOfActions__7TextDati(struct TextDat *this, int Creature); // 0x80093FD0

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x8008BAD4

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x8008CEE4

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x800A0038

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x80058A48

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x80077C40

extern int GetTexNum__C7TextDat(struct TextDat *this); // 0x80081348

extern void * IsLoaded__C7TextDat(struct TextDat *this); // 0x8008133C

extern void * CanXferPal__C7TextDat(struct TextDat *this); // 0x80081314

extern void * CanXferFrame__C7TextDat(struct TextDat *this); // 0x800812EC

extern void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY); // 0x8008CECC

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80081354

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x8008BB0C

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x8008CF40

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80093FF4

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x800A0070

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80058A80

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80077C78

extern void _._7CScreen(struct CScreen *this, int __in_chrg); // 0x8009A4E0


// decompiled code
// original method signature: 
// int /*$ra*/ GetSize__C6CBlock(struct CBlock *this /*$a0*/)
 // line 66, offset 0x80081494
	/* begin block 1 */
		// Start line: 67
		// Start offset: 0x80081494
	/* end block 1 */
	// End offset: 0x800814A0
	// End Line: 67

	/* begin block 2 */
		// Start line: 132
	/* end block 2 */
	// End Line: 133

int GetSize__C6CBlock(CBlock *this)

{
	return this->NumOfParts << 3 | 4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ HasTp__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 157, offset 0x8008146c
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8008146C
	/* end block 1 */
	// End offset: 0x80081484
	// End Line: 158

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

void * HasTp__C13CTextFileInfo(CTextFileInfo *this)

{
	void *pvVar1;
	
	pvVar1 = HasFile__C13CTextFileInfoPc(this,(char *)&PTR_DAT_8012a788);
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ HasDat__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 158, offset 0x80081444
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x80081444
	/* end block 1 */
	// End offset: 0x8008145C
	// End Line: 159

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

void * HasDat__C13CTextFileInfo(CTextFileInfo *this)

{
	void *pvVar1;
	
	pvVar1 = HasFile__C13CTextFileInfoPc(this,&DAT_8012a78c);
	return pvVar1;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetName__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 167, offset 0x80081438
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80081438
	/* end block 1 */
	// End offset: 0x8008143C
	// End Line: 168

	/* begin block 2 */
		// Start line: 334
	/* end block 2 */
	// End Line: 335

char * GetName__C13CTextFileInfo(CTextFileInfo *this)

{
	return this->FileName;
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x8008141c
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8008141C
	/* end block 1 */
	// End offset: 0x80081430
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x80085098
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80085098
	/* end block 1 */
	// End offset: 0x800850AC
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x800875c4
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x800875C4
	/* end block 1 */
	// End offset: 0x800875D8
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x8008bbc0
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8008BBC0
	/* end block 1 */
	// End offset: 0x8008BBD4
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x8008eaf8
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8008EAF8
	/* end block 1 */
	// End offset: 0x8008EB0C
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x80096350
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80096350
	/* end block 1 */
	// End offset: 0x80096364
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x8009e424
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8009E424
	/* end block 1 */
	// End offset: 0x8009E438
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x800a00fc
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x800A00FC
	/* end block 1 */
	// End offset: 0x800A0110
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x80034fbc
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80034FBC
	/* end block 1 */
	// End offset: 0x80034FD0
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x80047b58
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80047B58
	/* end block 1 */
	// End offset: 0x80047B6C
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x8006310c
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8006310C
	/* end block 1 */
	// End offset: 0x80063120
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x80075a90
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80075A90
	/* end block 1 */
	// End offset: 0x80075AA4
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 221, offset 0x80077d04
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x80077D04
	/* end block 1 */
	// End offset: 0x80077D18
	// End Line: 222

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 224, offset 0x80081400
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x80081400
	/* end block 1 */
	// End offset: 0x80081414
	// End Line: 225

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 224, offset 0x800875a8
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x800875A8
	/* end block 1 */
	// End offset: 0x800875BC
	// End Line: 225

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 224, offset 0x8008bba4
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x8008BBA4
	/* end block 1 */
	// End offset: 0x8008BBB8
	// End Line: 225

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 224, offset 0x8008eadc
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x8008EADC
	/* end block 1 */
	// End offset: 0x8008EAF0
	// End Line: 225

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 224, offset 0x80034fa0
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x80034FA0
	/* end block 1 */
	// End offset: 0x80034FB4
	// End Line: 225

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 224, offset 0x800630f0
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x800630F0
	/* end block 1 */
	// End offset: 0x80063104
	// End Line: 225

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDat(struct TextDat *this /*$a0*/)
 // line 225, offset 0x800813ec
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x800813EC
	/* end block 1 */
	// End offset: 0x800813F8
	// End Line: 226

	/* begin block 2 */
		// Start line: 450
	/* end block 2 */
	// End Line: 451

int GetNumOfFrames__7TextDat(TextDat *this)

{
	return (uint)*(ushort *)&this->Hdr->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDat(struct TextDat *this /*$a0*/)
 // line 225, offset 0x80075a7c
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x80075A7C
	/* end block 1 */
	// End offset: 0x80075A88
	// End Line: 226

	/* begin block 2 */
		// Start line: 450
	/* end block 2 */
	// End Line: 451

int GetNumOfFrames__7TextDat(TextDat *this)

{
	return (uint)*(ushort *)&this->Hdr->NumOfFrames;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this /*$a0*/, struct CTextFileInfo *NewInfo /*$a1*/, int NewTexNum /*$a2*/)
 // line 232, offset 0x800813e0
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800813E0
	/* end block 1 */
	// End offset: 0x800813E4
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

void SetFileInfo__7TextDatPC13CTextFileInfoi(TextDat *this,CTextFileInfo *NewInfo,int NewTexNum)

{
	this->FileInfo = NewInfo;
	this->TexNum = NewTexNum;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this /*$a0*/, struct CTextFileInfo *NewInfo /*$a1*/, int NewTexNum /*$a2*/)
 // line 232, offset 0x8008bb98
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x8008BB98
	/* end block 1 */
	// End offset: 0x8008BB9C
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

void SetFileInfo__7TextDatPC13CTextFileInfoi(TextDat *this,CTextFileInfo *NewInfo,int NewTexNum)

{
	this->FileInfo = NewInfo;
	this->TexNum = NewTexNum;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this /*$a0*/, struct CTextFileInfo *NewInfo /*$a1*/, int NewTexNum /*$a2*/)
 // line 232, offset 0x8008cfcc
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x8008CFCC
	/* end block 1 */
	// End offset: 0x8008CFD0
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

void SetFileInfo__7TextDatPC13CTextFileInfoi(TextDat *this,CTextFileInfo *NewInfo,int NewTexNum)

{
	this->FileInfo = NewInfo;
	this->TexNum = NewTexNum;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x800813cc
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x800813CC
	/* end block 1 */
	// End offset: 0x800813D8
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x8008bb84
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x8008BB84
	/* end block 1 */
	// End offset: 0x8008BB90
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x8008cfb8
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x8008CFB8
	/* end block 1 */
	// End offset: 0x8008CFC4
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x8009406c
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x8009406C
	/* end block 1 */
	// End offset: 0x80094078
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x800a00e8
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x800A00E8
	/* end block 1 */
	// End offset: 0x800A00F4
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x80058af8
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x80058AF8
	/* end block 1 */
	// End offset: 0x80058B04
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 235, offset 0x80077cf0
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x80077CF0
	/* end block 1 */
	// End offset: 0x80077CFC
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfActions__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 236, offset 0x8008cf1c
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x8008CF1C
	/* end block 1 */
	// End offset: 0x8008CF30
	// End Line: 237

	/* begin block 2 */
		// Start line: 472
	/* end block 2 */
	// End Line: 473

int GetNumOfActions__7TextDati(TextDat *this,int Creature)

{
	CCreatureHdr *pCVar1;
	
	pCVar1 = GetCreature__7TextDati(this,Creature);
	return pCVar1->NumOfActions;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfActions__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 236, offset 0x80093fd0
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x80093FD0
	/* end block 1 */
	// End offset: 0x80093FE4
	// End Line: 237

	/* begin block 2 */
		// Start line: 472
	/* end block 2 */
	// End Line: 473

int GetNumOfActions__7TextDati(TextDat *this,int Creature)

{
	CCreatureHdr *pCVar1;
	
	pCVar1 = GetCreature__7TextDati(this,Creature);
	return pCVar1->NumOfActions;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDatii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/)
 // line 237, offset 0x8008bad4
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x8008BAD4
	/* end block 1 */
	// End offset: 0x8008BAF8
	// End Line: 238

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

int GetNumOfFrames__7TextDatii(TextDat *this,int Creature,int Action)

{
	CCreatureHdr *this_00;
	CCreatureAction *pCVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	pCVar1 = GetAction__C12CCreatureHdri(this_00,Action);
	return (uint)pCVar1->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDatii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/)
 // line 237, offset 0x8008cee4
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x8008CEE4
	/* end block 1 */
	// End offset: 0x8008CF08
	// End Line: 238

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

int GetNumOfFrames__7TextDatii(TextDat *this,int Creature,int Action)

{
	CCreatureHdr *this_00;
	CCreatureAction *pCVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	pCVar1 = GetAction__C12CCreatureHdri(this_00,Action);
	return (uint)pCVar1->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDatii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/)
 // line 237, offset 0x800a0038
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x800A0038
	/* end block 1 */
	// End offset: 0x800A005C
	// End Line: 238

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

int GetNumOfFrames__7TextDatii(TextDat *this,int Creature,int Action)

{
	CCreatureHdr *this_00;
	CCreatureAction *pCVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	pCVar1 = GetAction__C12CCreatureHdri(this_00,Action);
	return (uint)pCVar1->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDatii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/)
 // line 237, offset 0x80058a48
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x80058A48
	/* end block 1 */
	// End offset: 0x80058A6C
	// End Line: 238

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

int GetNumOfFrames__7TextDatii(TextDat *this,int Creature,int Action)

{
	CCreatureHdr *this_00;
	CCreatureAction *pCVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	pCVar1 = GetAction__C12CCreatureHdri(this_00,Action);
	return (uint)pCVar1->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDatii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/)
 // line 237, offset 0x80077c40
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x80077C40
	/* end block 1 */
	// End offset: 0x80077C64
	// End Line: 238

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

int GetNumOfFrames__7TextDatii(TextDat *this,int Creature,int Action)

{
	CCreatureHdr *this_00;
	CCreatureAction *pCVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	pCVar1 = GetAction__C12CCreatureHdri(this_00,Action);
	return (uint)pCVar1->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTexNum__C7TextDat(struct TextDat *this /*$a0*/)
 // line 240, offset 0x80081348
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x80081348
	/* end block 1 */
	// End offset: 0x8008134C
	// End Line: 241

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

int GetTexNum__C7TextDat(TextDat *this)

{
	return this->TexNum;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsLoaded__C7TextDat(struct TextDat *this /*$a0*/)
 // line 241, offset 0x8008133c
	/* begin block 1 */
		// Start line: 242
		// Start offset: 0x8008133C
	/* end block 1 */
	// End offset: 0x80081340
	// End Line: 242

	/* begin block 2 */
		// Start line: 482
	/* end block 2 */
	// End Line: 483

void * IsLoaded__C7TextDat(TextDat *this)

{
	return (void *)(uint)(this->LoadCount != 0);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CanXferPal__C7TextDat(struct TextDat *this /*$a0*/)
 // line 242, offset 0x80081314
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x80081314
	/* end block 1 */
	// End offset: 0x80081334
	// End Line: 243

	/* begin block 2 */
		// Start line: 484
	/* end block 2 */
	// End Line: 485

void * CanXferPal__C7TextDat(TextDat *this)

{
	void *pvVar1;
	
	pvVar1 = (void *)0x0;
	if (-1 < this->PalX) {
		pvVar1 = (void *)((uint)~this->PalY >> 0x1f);
	}
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CanXferFrame__C7TextDat(struct TextDat *this /*$a0*/)
 // line 243, offset 0x800812ec
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x800812EC
	/* end block 1 */
	// End offset: 0x8008130C
	// End Line: 244

	/* begin block 2 */
		// Start line: 486
	/* end block 2 */
	// End Line: 487

void * CanXferFrame__C7TextDat(TextDat *this)

{
	void *pvVar1;
	
	pvVar1 = (void *)0x0;
	if (-1 < this->DecX) {
		pvVar1 = (void *)((uint)~this->DecY >> 0x1f);
	}
	return pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDecompArea__7TextDatiiii(struct TextDat *this /*$a0*/, int nDecX /*$a1*/, int nDecY /*$a2*/, int nPalX /*$a3*/, int nPalY /*stack 16*/)
 // line 249, offset 0x8008cecc
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x8008CECC
	/* end block 1 */
	// End offset: 0x8008CEDC
	// End Line: 254

	/* begin block 2 */
		// Start line: 498
	/* end block 2 */
	// End Line: 499

void SetDecompArea__7TextDatiiii(TextDat *this,int nDecX,int nDecY,int nPalX,int nPalY)

{
	this->DecX = nDecX;
	this->DecY = nDecY;
	this->PalX = nPalX;
	this->PalY = nPalY;
	return;
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x80081354
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x80081354
	/* end block 1 */
	// End offset: 0x800813B4
	// End Line: 274

	/* begin block 2 */
		// Start line: 545
	/* end block 2 */
	// End Line: 546

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x8008bb0c
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x8008BB0C
	/* end block 1 */
	// End offset: 0x8008BB6C
	// End Line: 274

	/* begin block 2 */
		// Start line: 542
	/* end block 2 */
	// End Line: 543

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x8008cf40
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x8008CF40
	/* end block 1 */
	// End offset: 0x8008CFA0
	// End Line: 274

	/* begin block 2 */
		// Start line: 559
	/* end block 2 */
	// End Line: 560

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x80093ff4
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x80093FF4
	/* end block 1 */
	// End offset: 0x80094054
	// End Line: 274

	/* begin block 2 */
		// Start line: 542
	/* end block 2 */
	// End Line: 543

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x800a0070
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x800A0070
	/* end block 1 */
	// End offset: 0x800A00D0
	// End Line: 274

	/* begin block 2 */
		// Start line: 542
	/* end block 2 */
	// End Line: 543

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x80058a80
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x80058A80
	/* end block 1 */
	// End offset: 0x80058AE0
	// End Line: 274

	/* begin block 2 */
		// Start line: 542
	/* end block 2 */
	// End Line: 543

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$s1*/, int Creature /*$s0*/)
 // line 271, offset 0x80077c78
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x80077C78
	/* end block 1 */
	// End offset: 0x80077CD8
	// End Line: 274

	/* begin block 2 */
		// Start line: 542
	/* end block 2 */
	// End Line: 543

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	int iVar1;
	
	if ((Creature < 0) || (iVar1 = GetNumOfCreatures__7TextDat(this), iVar1 <= Creature)) {
		DBG_Error((char *)0x0,"psxsrc/gman.h",0x110);
	}
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7CScreen(struct CScreen *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 345, offset 0x8009a4e0
	/* begin block 1 */
		// Start line: 690
	/* end block 1 */
	// End Line: 691

void ___7CScreen(CScreen *this,int __in_chrg)

{
	___7TextDat((TextDat *)this,__in_chrg);
	return;
}





#endif
