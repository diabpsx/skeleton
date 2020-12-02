#ifndef GMAN_H
#define GMAN_H


extern int GetSize__C6CBlock(struct CBlock *this); // 0x800953E4

extern void * HasTp__C13CTextFileInfo(struct CTextFileInfo *this); // 0x800953BC

extern void * HasDat__C13CTextFileInfo(struct CTextFileInfo *this); // 0x80095394

extern char * GetName__C13CTextFileInfo(struct CTextFileInfo *this); // 0x80095388

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8008AD74

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8008D258

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80091E38

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8009536C

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8009896C

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x800A09C0

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x800AB694

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x800ADF80

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x80037718

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8007D5DC

extern struct FRAME_HDR * GetFr__7TextDati(struct TextDat *this, int FrNum); // 0x8007EE48

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x8008D23C

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x80091E1C

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x80095350

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x80098950

extern struct PAL * GetPal__7TextDati(struct TextDat *this, int PalNum); // 0x800376FC

extern int GetNumOfFrames__7TextDat(struct TextDat *this); // 0x80091E08

extern int GetNumOfFrames__7TextDat(struct TextDat *this); // 0x8009533C

extern int GetNumOfFrames__7TextDat(struct TextDat *this); // 0x8007D5C8

extern void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum); // 0x80091DFC

extern void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum); // 0x80095330

extern void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum); // 0x8009682C

extern struct ALL_DECOMP_BUFFERS * GetDecompBuffers__7TextDat(struct TextDat *this); // 0x800ADF5C

extern int GetNumOfCreatures__7TextDat(struct TextDat *this); // 0x8009531C

extern int GetNumOfActions__7TextDati(struct TextDat *this, int Creature); // 0x80091DBC

extern int GetNumOfActions__7TextDati(struct TextDat *this, int Creature); // 0x800967EC

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x80091D84

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x800967B4

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x8005FBCC

extern int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action); // 0x8007EDF4

extern int GetTexNum__C7TextDat(struct TextDat *this); // 0x800952F4

extern void * IsLoaded__C7TextDat(struct TextDat *this); // 0x800952E8

extern void * CanXferPal__C7TextDat(struct TextDat *this); // 0x800952C0

extern void * CanXferFrame__C7TextDat(struct TextDat *this); // 0x80095298

extern void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY); // 0x8009679C

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80091DE0

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80095300

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x80096810

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x8005FC04

extern struct CCreatureHdr * GetCreature__7TextDati(struct TextDat *this, int Creature); // 0x8007EE2C

extern void DumpDatFile__7TextDat(struct TextDat *this); // 0x80095224

extern void _._7CScreen(struct CScreen *this, int __in_chrg); // 0x800A4FE4


// decompiled code
// original method signature: 
// int /*$ra*/ GetSize__C6CBlock(struct CBlock *this /*$a0*/)
 // line 67, offset 0x800953e4
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x800953E4
	/* end block 1 */
	// End offset: 0x800953F0
	// End Line: 68

	/* begin block 2 */
		// Start line: 134
	/* end block 2 */
	// End Line: 135

int GetSize__C6CBlock(CBlock *this)

{
	return this->NumOfParts << 3 | 4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ HasTp__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 160, offset 0x800953bc
	/* begin block 1 */
		// Start line: 161
		// Start offset: 0x800953BC
	/* end block 1 */
	// End offset: 0x800953D4
	// End Line: 161

	/* begin block 2 */
		// Start line: 320
	/* end block 2 */
	// End Line: 321

void * HasTp__C13CTextFileInfo(CTextFileInfo *this)

{
	void *pvVar1;
	
	pvVar1 = HasFile__C13CTextFileInfoPc(this,(char *)&PTR_DAT_8011acec);
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ HasDat__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 161, offset 0x80095394
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x80095394
	/* end block 1 */
	// End offset: 0x800953AC
	// End Line: 162

	/* begin block 2 */
		// Start line: 322
	/* end block 2 */
	// End Line: 323

void * HasDat__C13CTextFileInfo(CTextFileInfo *this)

{
	void *pvVar1;
	
	pvVar1 = HasFile__C13CTextFileInfoPc(this,&DAT_8011acf0);
	return pvVar1;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetName__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 173, offset 0x80095388
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x80095388
	/* end block 1 */
	// End offset: 0x8009538C
	// End Line: 174

	/* begin block 2 */
		// Start line: 346
	/* end block 2 */
	// End Line: 347

char * GetName__C13CTextFileInfo(CTextFileInfo *this)

{
	return this->FileName;
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x8008ad74
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8008AD74
	/* end block 1 */
	// End offset: 0x8008AD88
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x8008d258
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8008D258
	/* end block 1 */
	// End offset: 0x8008D26C
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x80091e38
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x80091E38
	/* end block 1 */
	// End offset: 0x80091E4C
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x8009536c
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8009536C
	/* end block 1 */
	// End offset: 0x80095380
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x8009896c
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8009896C
	/* end block 1 */
	// End offset: 0x80098980
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x800a09c0
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x800A09C0
	/* end block 1 */
	// End offset: 0x800A09D4
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x800ab694
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x800AB694
	/* end block 1 */
	// End offset: 0x800AB6A8
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x800adf80
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x800ADF80
	/* end block 1 */
	// End offset: 0x800ADF94
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x80037718
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x80037718
	/* end block 1 */
	// End offset: 0x8003772C
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x8007d5dc
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8007D5DC
	/* end block 1 */
	// End offset: 0x8007D5F0
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct FRAME_HDR * /*$ra*/ GetFr__7TextDati(struct TextDat *this /*$a0*/, int FrNum /*$a1*/)
 // line 229, offset 0x8007ee48
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x8007EE48
	/* end block 1 */
	// End offset: 0x8007EE5C
	// End Line: 230

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

/* WARNING: Unknown calling convention yet parameter storage is locked */

FRAME_HDR * GetFr__7TextDati(TextDat *this,int FrNum)

{
	return (FRAME_HDR *)(&this->Frames->FrOffset + (FrNum & 0xffffU) * 3);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 232, offset 0x8008d23c
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x8008D23C
	/* end block 1 */
	// End offset: 0x8008D250
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 232, offset 0x80091e1c
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x80091E1C
	/* end block 1 */
	// End offset: 0x80091E30
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 232, offset 0x80095350
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x80095350
	/* end block 1 */
	// End offset: 0x80095364
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 232, offset 0x80098950
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x80098950
	/* end block 1 */
	// End offset: 0x80098964
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// struct PAL * /*$ra*/ GetPal__7TextDati(struct TextDat *this /*$a0*/, int PalNum /*$a1*/)
 // line 232, offset 0x800376fc
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800376FC
	/* end block 1 */
	// End offset: 0x80037710
	// End Line: 233

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

/* WARNING: Unknown calling convention yet parameter storage is locked */

PAL * GetPal__7TextDati(TextDat *this,int PalNum)

{
	return (PAL *)((int)this->Pals + this->PalOffset[PalNum]);
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDat(struct TextDat *this /*$a0*/)
 // line 233, offset 0x80091e08
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x80091E08
	/* end block 1 */
	// End offset: 0x80091E14
	// End Line: 234

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

int GetNumOfFrames__7TextDat(TextDat *this)

{
	return (uint)*(ushort *)&this->Hdr->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDat(struct TextDat *this /*$a0*/)
 // line 233, offset 0x8009533c
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8009533C
	/* end block 1 */
	// End offset: 0x80095348
	// End Line: 234

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

int GetNumOfFrames__7TextDat(TextDat *this)

{
	return (uint)*(ushort *)&this->Hdr->NumOfFrames;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDat(struct TextDat *this /*$a0*/)
 // line 233, offset 0x8007d5c8
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8007D5C8
	/* end block 1 */
	// End offset: 0x8007D5D4
	// End Line: 234

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetNumOfFrames__7TextDat(TextDat *this)

{
	return (uint)*(ushort *)&this->Hdr->NumOfFrames;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this /*$a0*/, struct CTextFileInfo *NewInfo /*$a1*/, int NewTexNum /*$a2*/)
 // line 240, offset 0x80091dfc
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x80091DFC
	/* end block 1 */
	// End offset: 0x80091E00
	// End Line: 241

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

void SetFileInfo__7TextDatPC13CTextFileInfoi(TextDat *this,CTextFileInfo *NewInfo,int NewTexNum)

{
	this->FileInfo = NewInfo;
	this->TexNum = NewTexNum;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this /*$a0*/, struct CTextFileInfo *NewInfo /*$a1*/, int NewTexNum /*$a2*/)
 // line 240, offset 0x80095330
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x80095330
	/* end block 1 */
	// End offset: 0x80095334
	// End Line: 241

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

void SetFileInfo__7TextDatPC13CTextFileInfoi(TextDat *this,CTextFileInfo *NewInfo,int NewTexNum)

{
	this->FileInfo = NewInfo;
	this->TexNum = NewTexNum;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this /*$a0*/, struct CTextFileInfo *NewInfo /*$a1*/, int NewTexNum /*$a2*/)
 // line 240, offset 0x8009682c
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x8009682C
	/* end block 1 */
	// End offset: 0x80096830
	// End Line: 241

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

void SetFileInfo__7TextDatPC13CTextFileInfoi(TextDat *this,CTextFileInfo *NewInfo,int NewTexNum)

{
	this->FileInfo = NewInfo;
	this->TexNum = NewTexNum;
	return;
}



// decompiled code
// original method signature: 
// struct ALL_DECOMP_BUFFERS * /*$ra*/ GetDecompBuffers__7TextDat(struct TextDat *this /*$a0*/)
 // line 243, offset 0x800adf5c
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x800ADF5C
	/* end block 1 */
	// End offset: 0x800ADF78
	// End Line: 248

	/* begin block 2 */
		// Start line: 487
	/* end block 2 */
	// End Line: 488

/* WARNING: Unknown calling convention yet parameter storage is locked */

ALL_DECOMP_BUFFERS * GetDecompBuffers__7TextDat(TextDat *this)

{
	ALL_DECOMP_BUFFERS *pAVar1;
	uint uVar2;
	
	uVar2 = this->Hdr->DecompOffset;
	pAVar1 = (ALL_DECOMP_BUFFERS *)((int)&this->Hdr->DecompOffset + uVar2);
	if (uVar2 == 0) {
		pAVar1 = (ALL_DECOMP_BUFFERS *)0x0;
	}
	return pAVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfCreatures__7TextDat(struct TextDat *this /*$a0*/)
 // line 251, offset 0x8009531c
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x8009531C
	/* end block 1 */
	// End offset: 0x80095328
	// End Line: 252

	/* begin block 2 */
		// Start line: 502
	/* end block 2 */
	// End Line: 503

int GetNumOfCreatures__7TextDat(TextDat *this)

{
	return this->Hdr->NumOfCreatures;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfActions__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 252, offset 0x80091dbc
	/* begin block 1 */
		// Start line: 253
		// Start offset: 0x80091DBC
	/* end block 1 */
	// End offset: 0x80091DD0
	// End Line: 253

	/* begin block 2 */
		// Start line: 504
	/* end block 2 */
	// End Line: 505

int GetNumOfActions__7TextDati(TextDat *this,int Creature)

{
	CCreatureHdr *pCVar1;
	
	pCVar1 = GetCreature__7TextDati(this,Creature);
	return pCVar1->NumOfActions;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfActions__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 252, offset 0x800967ec
	/* begin block 1 */
		// Start line: 253
		// Start offset: 0x800967EC
	/* end block 1 */
	// End offset: 0x80096800
	// End Line: 253

	/* begin block 2 */
		// Start line: 504
	/* end block 2 */
	// End Line: 505

int GetNumOfActions__7TextDati(TextDat *this,int Creature)

{
	CCreatureHdr *pCVar1;
	
	pCVar1 = GetCreature__7TextDati(this,Creature);
	return pCVar1->NumOfActions;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfFrames__7TextDatii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/)
 // line 253, offset 0x80091d84
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80091D84
	/* end block 1 */
	// End offset: 0x80091DA8
	// End Line: 254

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

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
 // line 253, offset 0x800967b4
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x800967B4
	/* end block 1 */
	// End offset: 0x800967D8
	// End Line: 254

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

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
 // line 253, offset 0x8005fbcc
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x8005FBCC
	/* end block 1 */
	// End offset: 0x8005FBF0
	// End Line: 254

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 253, offset 0x8007edf4
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x8007EDF4
	/* end block 1 */
	// End offset: 0x8007EE18
	// End Line: 254

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 256, offset 0x800952f4
	/* begin block 1 */
		// Start line: 257
		// Start offset: 0x800952F4
	/* end block 1 */
	// End offset: 0x800952F8
	// End Line: 257

	/* begin block 2 */
		// Start line: 512
	/* end block 2 */
	// End Line: 513

int GetTexNum__C7TextDat(TextDat *this)

{
	return this->TexNum;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsLoaded__C7TextDat(struct TextDat *this /*$a0*/)
 // line 257, offset 0x800952e8
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x800952E8
	/* end block 1 */
	// End offset: 0x800952EC
	// End Line: 258

	/* begin block 2 */
		// Start line: 514
	/* end block 2 */
	// End Line: 515

void * IsLoaded__C7TextDat(TextDat *this)

{
	return (void *)(uint)(this->LoadCount != 0);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CanXferPal__C7TextDat(struct TextDat *this /*$a0*/)
 // line 258, offset 0x800952c0
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x800952C0
	/* end block 1 */
	// End offset: 0x800952E0
	// End Line: 259

	/* begin block 2 */
		// Start line: 516
	/* end block 2 */
	// End Line: 517

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
 // line 259, offset 0x80095298
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x80095298
	/* end block 1 */
	// End offset: 0x800952B8
	// End Line: 260

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

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
 // line 265, offset 0x8009679c
	/* begin block 1 */
		// Start line: 266
		// Start offset: 0x8009679C
	/* end block 1 */
	// End offset: 0x800967AC
	// End Line: 270

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

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
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 284, offset 0x80091de0
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80091DE0
	/* end block 1 */
	// End offset: 0x80091DF4
	// End Line: 287

	/* begin block 2 */
		// Start line: 571
	/* end block 2 */
	// End Line: 572

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 284, offset 0x80095300
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80095300
	/* end block 1 */
	// End offset: 0x80095314
	// End Line: 287

	/* begin block 2 */
		// Start line: 610
	/* end block 2 */
	// End Line: 611

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 284, offset 0x80096810
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80096810
	/* end block 1 */
	// End offset: 0x80096824
	// End Line: 287

	/* begin block 2 */
		// Start line: 587
	/* end block 2 */
	// End Line: 588

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 284, offset 0x8005fc04
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x8005FC04
	/* end block 1 */
	// End offset: 0x8005FC18
	// End Line: 287

	/* begin block 2 */
		// Start line: 570
	/* end block 2 */
	// End Line: 571

/* WARNING: Unknown calling convention yet parameter storage is locked */

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// struct CCreatureHdr * /*$ra*/ GetCreature__7TextDati(struct TextDat *this /*$a0*/, int Creature /*$a1*/)
 // line 284, offset 0x8007ee2c
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x8007EE2C
	/* end block 1 */
	// End offset: 0x8007EE40
	// End Line: 287

	/* begin block 2 */
		// Start line: 570
	/* end block 2 */
	// End Line: 571

/* WARNING: Unknown calling convention yet parameter storage is locked */

CCreatureHdr * GetCreature__7TextDati(TextDat *this,int Creature)

{
	return (CCreatureHdr *)(this->CreatureAnims + this->CreatureOffset[Creature]);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpDatFile__7TextDat(struct TextDat *this /*$s0*/)
 // line 290, offset 0x80095224
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x80095224

		/* begin block 1.1 */
			// Start line: 291
			// Start offset: 0x80095224

			/* begin block 1.1.1 */
				// Start line: 293
				// Start offset: 0x80095258
			/* end block 1.1.1 */
			// End offset: 0x80095280
			// End Line: 297
		/* end block 1.1 */
		// End offset: 0x80095280
		// End Line: 297
	/* end block 1 */
	// End offset: 0x80095280
	// End Line: 297

	/* begin block 2 */
		// Start line: 580
	/* end block 2 */
	// End Line: 581

void DumpDatFile__7TextDat(TextDat *this)

{
	uchar uVar1;
	
	if ((this->hndDat != -1) && (this->OwnDat != (void *)0x0)) {
		uVar1 = GAL_Free(this->hndDat);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/gman.h",0x127);
		}
		this->hndDat = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7CScreen(struct CScreen *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 382, offset 0x800a4fe4
	/* begin block 1 */
		// Start line: 764
	/* end block 1 */
	// End Line: 765

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ___7CScreen(CScreen *this,int __in_chrg)

{
	___7TextDat((TextDat *)this,__in_chrg);
	return;
}





extern struct TextDat * __7TextDat(struct TextDat *this); // 0x80091E54

extern void OnceOnlyInit__7TextDat(struct TextDat *this); // 0x80091E88

extern void _._7TextDat(struct TextDat *this, int __in_chrg); // 0x80091EA8

extern void ReloadTP__7TextDat(struct TextDat *this); // 0x80091EF0

extern void Use__7TextDatlbi(struct TextDat *this, long NewHndDat, void * DatLoaded, int size); // 0x80091F30

extern void * TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, void * LastChunk); // 0x80092170

extern void StreamLoadTP__7TextDat(struct TextDat *this); // 0x80092218

extern void FinishedUsing__7TextDat(struct TextDat *this); // 0x800922D0

extern void MakeBlockOffsetTab__7TextDat(struct TextDat *this); // 0x80092368

extern long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this); // 0x800923B4

extern void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip); // 0x800924E0

extern void * IsCompressed__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame); // 0x800925E0

extern struct POLY_FT4 * PrintMonster__7TextDatiiiiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos); // 0x8009262C

extern struct POLY_FT4 * PrintMonsterA__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, void * XFlip, int OtPos); // 0x800926D8

extern void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip); // 0x80092A80

extern unsigned char * GetDecompBufffer__7TextDati(struct TextDat *this, int Size); // 0x80092D14

extern void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip); // 0x80092E74

extern void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip); // 0x80092F74

extern void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3); // 0x800931CC

extern void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y); // 0x80093250

extern struct POLY_FT4 * PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip); // 0x80093418

extern struct POLY_GT4 * PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip); // 0x8009356C

extern void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr); // 0x800936C0

extern void MakeCreatureOffsetTab__7TextDat(struct TextDat *this); // 0x80093818

extern void MakePalOffsetTab__7TextDat(struct TextDat *this); // 0x80093958

extern void InitData__7TextDat(struct TextDat *this); // 0x80093A54

extern void DumpData__7TextDat(struct TextDat *this); // 0x80093A84

extern void DumpHdr__7TextDat(struct TextDat *this); // 0x80093BAC

extern struct TextDat * GM_UseTexData__Fi(int Id); // 0x80093C10

extern void GM_ForceTpLoad__Fi(int Id); // 0x80093D44

extern void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin); // 0x80093D80

extern void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4); // 0x80093DD4

extern int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame); // 0x80093E98

extern void * IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction); // 0x80093EEC

extern void DoDecompRequests__7TextDat(struct TextDat *this); // 0x80093F44

extern void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R); // 0x80094068

extern struct CTextFileInfo * GetFileInfo__7TextDati(int Id); // 0x80094140

extern int GetSize__C15CCreatureAction(struct CCreatureAction *this); // 0x80094190

extern int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame); // 0x800941B8

extern void InitDirRemap__15CCreatureAction(struct CCreatureAction *this); // 0x800941E8

extern int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame); // 0x800942A8

extern struct CCreatureAction * GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum); // 0x800942EC

extern void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this); // 0x8009437C

extern int GetSize__C12CCreatureHdr(struct CCreatureHdr *this); // 0x800943EC

extern void LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this, long hnd, int size); // 0x80094458

extern long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this); // 0x8009458C

extern long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this); // 0x800945E4

extern void MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this, char *Dest, char *Ext); // 0x8009460C

extern long GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this, char *Ext, unsigned long RamId); // 0x80094654

extern void * HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext); // 0x800946F4

extern void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes); // 0x80094788

extern struct CScreen * __7CScreen(struct CScreen *this); // 0x8009485C

extern void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy); // 0x80094890

extern void Unload__7CScreen(struct CScreen *this); // 0x80094BA4

extern void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval); // 0x80094BC8

extern void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R); // 0x80094EA8

extern void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R); // 0x80094F24

extern void _GLOBAL_.D.DatPool(); // 0x80095080

extern void _GLOBAL_.I.DatPool(); // 0x800950D8


#endif
