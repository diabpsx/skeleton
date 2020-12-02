#include "THISDUST.H"
#include "GMAN.H"


// decompiled code
// original method signature: 
// struct TextDat * /*$ra*/ __7TextDat(struct TextDat *this /*$s0*/)
 // line 123, offset 0x80091e54
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x80091E54
	/* end block 1 */
	// End offset: 0x80091E54
	// End Line: 124

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

TextDat * __7TextDat(TextDat *this)

{
	OnceOnlyInit__7TextDat(this);
	InitData__7TextDat(this);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OnceOnlyInit__7TextDat(struct TextDat *this /*$a0*/)
 // line 129, offset 0x80091e88
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80091E88
	/* end block 1 */
	// End offset: 0x80091EA0
	// End Line: 135

	/* begin block 2 */
		// Start line: 259
	/* end block 2 */
	// End Line: 260

void OnceOnlyInit__7TextDat(TextDat *this)

{
	this->DecX = -1;
	this->DecY = -1;
	this->PalX = -1;
	this->PalY = -1;
	this->OwnDat = (void *)0x1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7TextDat(struct TextDat *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 144, offset 0x80091ea8
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x80091EA8
	/* end block 1 */
	// End offset: 0x80091EA8
	// End Line: 145

	/* begin block 2 */
		// Start line: 288
	/* end block 2 */
	// End Line: 289

void ___7TextDat(TextDat *this,int __in_chrg)

{
	DumpData__7TextDat(this);
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReloadTP__7TextDat(struct TextDat *this /*$s0*/)
 // line 155, offset 0x80091ef0
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x80091EF0
	/* end block 1 */
	// End offset: 0x80091F1C
	// End Line: 159

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

void ReloadTP__7TextDat(TextDat *this)

{
	void *pvVar1;
	
	pvVar1 = HasTp__C13CTextFileInfo(this->FileInfo);
	if (pvVar1 != (void *)0x0) {
		StreamLoadTP__7TextDat(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Use__7TextDatlbi(struct TextDat *this /*$s0*/, long NewHndDat /*$s2*/, void * DatLoaded /*$s4*/, int size /*$s5*/)
 // line 170, offset 0x80091f30
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x80091F30

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x80091F30

			/* begin block 1.1.1 */
				// Start line: 173
				// Start offset: 0x80091F6C
				// Variables:
			// 		char NameBuff[40]; // stack offset -80

				/* begin block 1.1.1.1 */
					// Start line: 189
					// Start offset: 0x80091FC0

					/* begin block 1.1.1.1.1 */
						// Start line: 200
						// Start offset: 0x80092034

						/* begin block 1.1.1.1.1.1 */
							// Start line: 202
							// Start offset: 0x80092034

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 218
								// Start offset: 0x80092098
								// Variables:
							// 		struct RECT R; // stack offset -40
							// 		int DecompSize; // $s1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800920F0
							// End Line: 226
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800920F0
						// End Line: 226
					/* end block 1.1.1.1.1 */
					// End offset: 0x80092138
					// End Line: 243
				/* end block 1.1.1.1 */
				// End offset: 0x80092138
				// End Line: 243
			/* end block 1.1.1 */
			// End offset: 0x80092138
			// End Line: 243
		/* end block 1.1 */
		// End offset: 0x80092138
		// End Line: 243
	/* end block 1 */
	// End offset: 0x80092148
	// End Line: 247

	/* begin block 2 */
		// Start line: 340
	/* end block 2 */
	// End Line: 341

void Use__7TextDatlbi(TextDat *this,long NewHndDat,void *DatLoaded,int size)

{
	long Handle;
	SPR_HDR *pSVar1;
	void *pvVar2;
	char *Name;
	RECT RStack40;
	
	if (this->Loaded == (void *)0x0) {
		this->LastFrame = -1;
		Handle = LoadHdr__C13CTextFileInfo(this->FileInfo);
		this->hndHdr = Handle;
		pSVar1 = (SPR_HDR *)GAL_Lock(Handle);
		this->Hdr = pSVar1;
		if (pSVar1 == (SPR_HDR *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0xb5);
		}
		pvVar2 = HasTp__C13CTextFileInfo(this->FileInfo);
		if (pvVar2 != (void *)0x0) {
			StreamLoadTP__7TextDat(this);
		}
		this->Frames = (FRAME_HDR *)((int)&this->Hdr->DecompOffset + this->Hdr->FrameOffset);
		this->CreatureAnims = (uchar *)((int)&this->Hdr->DecompOffset + this->Hdr->CreatureOffset);
		this->Pals = (void *)((int)&this->Hdr->DecompOffset + this->Hdr->PalOffset);
		this->Blocks = (uchar *)((int)&this->Hdr->DecompOffset + this->Hdr->ComponentOffset);
		MakePalOffsetTab__7TextDat(this);
		MakeCreatureOffsetTab__7TextDat(this);
		MakeBlockOffsetTab__7TextDat(this);
		*(undefined **)&this->Loaded = &DAT_00000001;
		pvVar2 = HasDat__C13CTextFileInfo(this->FileInfo);
		if (pvVar2 != (void *)0x0) {
			if (this->Hdr->DecompOffset == 0) {
				this->hndDecompBuffer = -1;
				FindDecompArea__7TextDatR4RECT(this,&RStack40);
				Name = GetName__C13CTextFileInfo(this->FileInfo);
				Handle = GAL_Alloc((int)RStack40.w * (int)RStack40.h,(ulong)&DAT_00008001,Name);
				this->hndDecompBuffer = Handle;
				if (Handle == -1) {
					DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0xe1);
				}
			}
			else {
				Handle = GAL_Alloc(0x140,(ulong)&DAT_00008001,&DAT_8011acf8);
				this->hndDecompArrays = Handle;
				if (Handle == -1) {
					DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0xcc);
				}
				this->Scr = 0;
				this->NumOfBuffers[0] = 0;
				this->NumOfBuffers[1] = 0;
				DEC_AddAsDecRequestor__FP7TextDat(this);
			}
			if (NewHndDat == -1) {
				NewHndDat = LoadDat__C13CTextFileInfo(this->FileInfo);
			}
			else {
				if (DatLoaded == (void *)0x0) {
					LoadDat__C13CTextFileInfoli(this->FileInfo,NewHndDat,size);
					this->OwnDat = (void *)0x0;
				}
				else {
					this->OwnDat = (void *)0x1;
				}
			}
			this->hndDat = NewHndDat;
		}
	}
	this->LoadCount = this->LoadCount + 1;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TpLoadCallBack__FPUciib(unsigned char *Mem /*$a2*/, int ReadSoFar /*$a1*/, int Size /*$a2*/, void * LastChunk /*$a3*/)
 // line 263, offset 0x80092170
	/* begin block 1 */
		// Start line: 264
		// Start offset: 0x80092170
		// Variables:
	// 		static int TpX; // offset 0x8011c66c
	// 		static int TpY; // offset 0x8011c670
	// 		struct RECT R; // stack offset -16
	// 		int Dx; // $v0
	// 		int Dy; // $v0
	/* end block 1 */
	// End offset: 0x80092208
	// End Line: 289

	/* begin block 2 */
		// Start line: 547
	/* end block 2 */
	// End Line: 548

void * TpLoadCallBack__FPUciib(uchar *Mem,int ReadSoFar,int Size,void *LastChunk)

{
	short local_10;
	short local_e;
	undefined2 local_c;
	undefined2 local_a;
	
	if (ReadSoFar == 0) {
		TpX_94 = 0;
		TpY_95 = 0;
	}
	local_c = 0x40;
	local_a = 0x100;
	local_10 = (short)TpX_94 * 0x40 + (short)TpXDest;
	local_e = (short)TpY_95 * 0x100 + (short)TpYDest;
	LoadImage(&local_10,Mem);
	TpX_94 = (TpX_94 + 1) % TpW;
	if (TpX_94 == 0) {
		TpY_95 = TpY_95 + 1;
	}
	DrawSync(0);
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StreamLoadTP__7TextDat(struct TextDat *this /*$s0*/)
 // line 292, offset 0x80092218
	/* begin block 1 */
		// Start line: 293
		// Start offset: 0x80092218
		// Variables:
	// 		char TheName[20]; // stack offset -32
	/* end block 1 */
	// End offset: 0x800922BC
	// End Line: 307

	/* begin block 2 */
		// Start line: 614
	/* end block 2 */
	// End Line: 615

void StreamLoadTP__7TextDat(TextDat *this)

{
	char *__src;
	FileIO *this_00;
	char acStack32 [24];
	
	__src = GetName__C13CTextFileInfo(this->FileInfo);
	strcpy(acStack32,__src);
	strcat(acStack32,(char *)&PTR_DAT_8011acec);
	this_00 = SYSI_GetFs__Fv();
	TpW = ZEXT14(*(byte *)&this->Hdr->NumOfPals);
	TpXDest = (this->Hdr->DestTPage & 0xf) << 6;
	TpH = ZEXT14(*(byte *)((int)&this->Hdr->NumOfPals + 1));
	TpYDest = (this->Hdr->DestTPage >> 4) << 8;
	StreamFile__6FileIOPCciPFPUciib_bii(this_00,acStack32,0x8000,TpLoadCallBack__FPUciib,0,-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishedUsing__7TextDat(struct TextDat *this /*$s0*/)
 // line 316, offset 0x800922d0
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x800922D0
	/* end block 1 */
	// End offset: 0x80092354
	// End Line: 334

	/* begin block 2 */
		// Start line: 678
	/* end block 2 */
	// End Line: 679

void FinishedUsing__7TextDat(TextDat *this)

{
	int iVar1;
	void *pvVar2;
	
	iVar1 = this->LoadCount + -1;
	this->LoadCount = iVar1;
	if (iVar1 == 0) {
		pvVar2 = HasDat__C13CTextFileInfo(this->FileInfo);
		if ((pvVar2 != (void *)0x0) && (this->Hdr->DecompOffset != 0)) {
			DEC_RemoveAsDecRequestor__FP7TextDat(this);
			DoDecompRequests__7TextDat(this);
			DoDecompRequests__7TextDat(this);
		}
		DumpData__7TextDat(this);
	}
	if (this->LoadCount < 0) {
		this->LoadCount = 0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeBlockOffsetTab__7TextDat(struct TextDat *this /*$s0*/)
 // line 343, offset 0x80092368
	/* begin block 1 */
		// Start line: 344
		// Start offset: 0x80092368

		/* begin block 1.1 */
			// Start line: 344
			// Start offset: 0x80092368

			/* begin block 1.1.1 */
				// Start line: 346
				// Start offset: 0x80092390
			/* end block 1.1.1 */
			// End offset: 0x800923A0
			// End Line: 348
		/* end block 1.1 */
		// End offset: 0x800923A0
		// End Line: 348
	/* end block 1 */
	// End offset: 0x800923A0
	// End Line: 348

	/* begin block 2 */
		// Start line: 732
	/* end block 2 */
	// End Line: 733

void MakeBlockOffsetTab__7TextDat(TextDat *this)

{
	long lVar1;
	
	if (this->Hdr->ComponentOffset != 0) {
		lVar1 = MakeOffsetTab__C9CBlockHdr((CBlockHdr *)this->Blocks);
		this->hndBlockOffsets = lVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this /*$s6*/)
 // line 375, offset 0x800923b4
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800923B4
		// Variables:
	// 		struct CBlock *MyBlock; // $s2
	// 		long hndRet; // $s5
	// 		int *Tab; // $s3

		/* begin block 1.1 */
			// Start line: 388
			// Start offset: 0x80092454
			// Variables:
		// 		unsigned int f; // $s0
		/* end block 1.1 */
		// End offset: 0x80092488
		// End Line: 394
	/* end block 1 */
	// End offset: 0x800924B4
	// End Line: 399

	/* begin block 2 */
		// Start line: 796
	/* end block 2 */
	// End Line: 797

long MakeOffsetTab__C9CBlockHdr(CBlockHdr *this)

{
	uchar uVar1;
	long Handle;
	int iVar2;
	uint uVar3;
	uint uVar4;
	CBlock **ppCVar5;
	CBlock *this_00;
	
	uVar4 = this->NumOfBlocks;
	this_00 = this->Blocks;
	if (uVar4 == 0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x17d);
	}
	Handle = GAL_Alloc(uVar4 << 2,(ulong)&DAT_00008001,&DAT_8011ad00);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x180);
	}
	ppCVar5 = (CBlock **)GAL_Lock(Handle);
	if (ppCVar5 == (CBlock **)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x183);
	}
	uVar3 = 0;
	if (uVar4 != 0) {
		do {
			*ppCVar5 = (CBlock *)((int)this_00 - (int)this);
			iVar2 = GetSize__C6CBlock(this_00);
			this_00 = (CBlock *)((int)&this_00->NumOfParts + iVar2);
			uVar3 = uVar3 + 1;
			ppCVar5 = ppCVar5 + 1;
		} while (uVar3 < uVar4);
	}
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x18c);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this /*$a0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_FT4 *FT4 /*$a2*/, int XFlip /*$a3*/, int YFlip /*stack 16*/)
 // line 408, offset 0x800924e0
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x800924E0
		// Variables:
	// 		int Rotated; // $v0
	// 		int Tpage; // $t4
	// 		int U; // $v1
	// 		int V; // $t1
	// 		int W; // $t0
	// 		int H; // $t2
	/* end block 1 */
	// End offset: 0x800925D8
	// End Line: 467

	/* begin block 2 */
		// Start line: 877
	/* end block 2 */
	// End Line: 878

void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii
							 (TextDat *this,FRAME_HDR *Fr,POLY_FT4 *FT4,int XFlip,int YFlip)

{
	ushort uVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	uchar uVar5;
	uchar uVar6;
	
	uVar6 = *(uchar *)((int)&Fr->FrOffset + 1);
	uVar1 = *(ushort *)((int)&Fr->FrOffset + 2);
	cVar3 = (char)((uint)Fr->Y >> 9);
	cVar2 = (char)Fr->Y;
	uVar5 = *(uchar *)&Fr->FrOffset;
	if (((uint)Fr->X >> 0x19 & 1) == 0) {
		uVar4 = uVar5 + cVar2;
		if (XFlip == 0) {
			FT4->u0 = uVar5;
			FT4->u1 = uVar4;
			FT4->u2 = uVar5;
			FT4->u3 = uVar4;
		}
		else {
			FT4->u0 = uVar4 + -1;
			FT4->u1 = uVar5 + -1;
			FT4->u2 = uVar4 + -1;
			FT4->u3 = uVar5 + -1;
		}
		uVar5 = uVar6 + cVar3;
		if (YFlip == 0) {
			FT4->v0 = uVar6;
			FT4->v1 = uVar6;
		}
		else {
			FT4->v0 = uVar5 + -1;
			FT4->v1 = uVar5 + -1;
			uVar5 = uVar6 + -1;
		}
		FT4->v2 = uVar5;
		FT4->v3 = uVar5;
	}
	else {
		if (XFlip == 0) {
			uVar4 = uVar6 + cVar2 + -1;
			FT4->v0 = uVar4;
			FT4->v2 = uVar4;
			cVar2 = -1;
		}
		else {
			FT4->v0 = uVar6;
			FT4->v2 = uVar6;
		}
		FT4->v1 = uVar6 + cVar2;
		FT4->v3 = uVar6 + cVar2;
		if (YFlip == 0) {
			FT4->u0 = uVar5;
			FT4->u1 = uVar5;
		}
		else {
			uVar6 = uVar5 + cVar3 + -1;
			FT4->u0 = uVar6;
			FT4->u1 = uVar6;
			cVar3 = -1;
		}
		FT4->u2 = uVar5 + cVar3;
		FT4->u3 = uVar5 + cVar3;
	}
	FT4->tpage = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsCompressed__7TextDatiiii(struct TextDat *this /*$s0*/, int Creature /*$a1*/, int Action /*$a2*/, int Dir /*$a3*/, int Frame /*stack 16*/)
 // line 481, offset 0x800925e0
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x800925E0
	/* end block 1 */
	// End offset: 0x80092618
	// End Line: 489

	/* begin block 2 */
		// Start line: 1034
	/* end block 2 */
	// End Line: 1035

void * IsCompressed__7TextDatiiii(TextDat *this,int Creature,int Action,int Dir,int Frame)

{
	int FrNum;
	FRAME_HDR *pFVar1;
	
	FrNum = GetFrNum__7TextDatiiii(this,Creature,Action,Dir,Frame);
	pFVar1 = GetFr__7TextDati(this,FrNum);
	return (void *)(uint)((pFVar1->X & 0x4000000U) == 0);
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintMonster__7TextDatiiiiiii(struct TextDat *this /*$s1*/, int Creature /*$s0*/, int Action /*$s2*/, int Dir /*$s3*/, int Frame /*stack 16*/, int x /*stack 20*/, int y /*stack 24*/, int OtPos /*stack 28*/)
 // line 495, offset 0x8009262c
	/* begin block 1 */
		// Start line: 496
		// Start offset: 0x8009262C
		// Variables:
	// 		int PhysFrame; // $s0
	/* end block 1 */
	// End offset: 0x800926AC
	// End Line: 505

	/* begin block 2 */
		// Start line: 1062
	/* end block 2 */
	// End Line: 1063

POLY_FT4 *
PrintMonster__7TextDatiiiiiii
					(TextDat *this,int Creature,int Action,int Dir,int Frame,int x,int y,int OtPos)

{
	int Frm;
	void *XFlip;
	POLY_FT4 *pPVar1;
	
	Frm = GetFrNum__7TextDatiiii(this,Creature,Action,Dir,Frame);
	XFlip = IsDirAliased__7TextDatiii(this,Creature,Action,Dir);
	pPVar1 = PrintMonsterA__7TextDatiiibi(this,Frm,x,y,XFlip,OtPos);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintMonsterA__7TextDatiiibi(struct TextDat *this /*$s4*/, int Frm /*$s0*/, int X /*$s1*/, int Y /*$s3*/, void * XFlip /*stack 16*/, int OtPos /*stack 20*/)
 // line 508, offset 0x800926d8
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x800926D8

		/* begin block 1.1 */
			// Start line: 509
			// Start offset: 0x800926D8

			/* begin block 1.1.1 */
				// Start line: 511
				// Start offset: 0x80092730
				// Variables:
			// 		struct POLY_FT4 *FT4; // stack offset -56
			// 		struct FRAME_HDR *Fr; // $s2
			// 		int W; // $v1
			// 		int H; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 534
					// Start offset: 0x800927A4

					/* begin block 1.1.1.1.1 */
						// Start line: 545
						// Start offset: 0x8009285C
						// Variables:
					// 		unsigned char *Dest; // $s0
					// 		int DecompSize; // $v0
					// 		unsigned char *CompFrAddr; // $s0
					// 		struct DR_LOAD2 *DrPtr; // $s1
					// 		unsigned long NumOfPrims; // $s6
					// 		int VH; // $v1
					// 		int TpX; // $a1
					// 		int TpY; // $a2
					// 		int U; // $a1
					// 		int V; // $v1
					// 		int W; // $v0
					// 		int H; // $a3
					// 		int u0; // $a0
					// 		int u1; // $a1
					// 		int u2; // $a2
					// 		int u3; // $t0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 598
							// Start offset: 0x80092918
							// Variables:
						// 		unsigned int f; // $s3

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 612
								// Start offset: 0x800929B8
								// Variables:
							// 		struct RECT mrect; // stack offset -48
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800929C4
							// End Line: 615
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80092A3C
						// End Line: 620
					/* end block 1.1.1.1.1 */
					// End offset: 0x80092A3C
					// End Line: 620
				/* end block 1.1.1.1 */
				// End offset: 0x80092A3C
				// End Line: 620
			/* end block 1.1.1 */
			// End offset: 0x80092A48
			// End Line: 623
		/* end block 1.1 */
		// End offset: 0x80092A48
		// End Line: 623
	/* end block 1 */
	// End offset: 0x80092A50
	// End Line: 626

	/* begin block 2 */
		// Start line: 1088
	/* end block 2 */
	// End Line: 1089

POLY_FT4 * PrintMonsterA__7TextDatiiibi(TextDat *this,int Frm,int X,int Y,void *XFlip,int OtPos)

{
	byte bVar1;
	ushort uVar2;
	short sVar3;
	char cVar4;
	short sVar5;
	int iVar6;
	FRAME_HDR *Fr;
	void *pvVar7;
	uint *out;
	ulong uVar8;
	uchar uVar9;
	short sVar10;
	uint uVar11;
	ulong *puVar12;
	uchar uVar13;
	uchar uVar14;
	ushort *puVar15;
	short sVar16;
	uint *puVar17;
	uint uVar18;
	uint uVar19;
	POLY_FT4 *local_38 [2];
	uint local_30;
	uint local_2c;
	
	if ((Frm < 0) || (iVar6 = GetNumOfFrames__7TextDat(this), iVar6 <= Frm)) {
		local_38[0] = &MyFT4;
	}
	else {
		PRIM_GetPrim__FPP8POLY_FT4(local_38);
		Fr = GetFr__7TextDati(this,Frm);
		uVar11 = Fr->Y;
		*(undefined *)((int)&local_38[0]->tag + 3) = 9;
		local_38[0]->code = ',';
		local_38[0]->code = local_38[0]->code & 0xfe;
		uVar2 = (ushort)uVar11 & 0x1ff;
		if (XFlip == (void *)0x0) {
			sVar16 = (short)X + (short)*(char *)&Fr->X;
		}
		else {
			sVar16 = ((short)X - (short)*(char *)&Fr->X) - uVar2;
		}
		sVar10 = sVar16 + uVar2;
		sVar3 = (short)Y + (short)*(char *)((int)&Fr->X + 1);
		sVar5 = sVar3 + ((ushort)(uVar11 >> 9) & 0x1ff);
		local_38[0]->x0 = sVar16;
		local_38[0]->y0 = sVar3;
		local_38[0]->x1 = sVar10;
		local_38[0]->y1 = sVar3;
		local_38[0]->x2 = sVar16;
		local_38[0]->y2 = sVar5;
		local_38[0]->x3 = sVar10;
		local_38[0]->y3 = sVar5;
		SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this,Fr,local_38[0]);
		if ((Fr->X & 0x4000000U) == 0) {
			pvVar7 = GAL_Lock(this->hndDat);
			puVar15 = (ushort *)((int)pvVar7 + Fr->FrOffset);
			out = (uint *)GetDecompBufffer__7TextDati(this,(uint)*puVar15);
			LZNP_Decode__FPUcT0((uchar *)(puVar15 + 1),(uchar *)out);
			puVar17 = out + 1;
			sVar16 = *(short *)((int)out + 0xe);
			uVar19 = *out;
			uVar13 = (char)*(ushort *)(out + 3) * '\x04';
			local_38[0]->tpage =
					 (ushort)((int)((int)sVar16 & 0x100U) >> 4) | (short)(*(ushort *)(out + 3) & 0x3ff) >> 6 |
					 (ushort)(((int)sVar16 & 0x200U) << 2);
			uVar11 = Fr->Y;
			uVar9 = (uchar)sVar16;
			cVar4 = (char)uVar11;
			if (XFlip == (void *)0x0) {
				uVar14 = uVar13 + cVar4;
			}
			else {
				uVar14 = uVar13 + -1;
				uVar13 = uVar13 + cVar4 + -1;
			}
			uVar18 = 0;
			local_38[0]->v0 = uVar9;
			local_38[0]->v1 = uVar9;
			uVar9 = uVar9 + (char)(uVar11 >> 9);
			local_38[0]->v2 = uVar9;
			local_38[0]->v3 = uVar9;
			local_38[0]->u0 = uVar13;
			local_38[0]->u1 = uVar14;
			local_38[0]->u2 = uVar13;
			local_38[0]->u3 = uVar14;
			puVar12 = ThisOt + OtPos;
			local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar12 & 0xffffff;
			uVar8 = *puVar12 & 0xff000000 | (uint)local_38[0] & 0xffffff;
			while (*puVar12 = uVar8, uVar18 < uVar19) {
				local_30 = puVar17[2];
				local_2c = puVar17[3];
				bVar1 = *(byte *)((int)puVar17 + 3);
				SetDrawLoad(puVar17,&local_30);
				uVar18 = uVar18 + 1;
				puVar12 = ThisOt + OtPos;
				*puVar17 = *puVar17 & 0xff000000 | *puVar12 & 0xffffff;
				uVar11 = (uint)puVar17 & 0xffffff;
				puVar17 = puVar17 + (uint)bVar1;
				uVar8 = *puVar12 & 0xff000000 | uVar11;
			}
		}
		else {
			SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(this,Fr,local_38[0],(int)XFlip,0);
			puVar12 = ThisOt + OtPos;
			local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar12 & 0xffffff;
			*puVar12 = *puVar12 & 0xff000000 | (uint)local_38[0] & 0xffffff;
		}
	}
	return local_38[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this /*$s2*/, struct POLY_FT4 *FT4 /*$s0*/, int Frm /*$s7*/, int X /*$s1*/, int Y /*stack 16*/, int XFlip /*stack 20*/, int YFlip /*stack 24*/)
 // line 630, offset 0x80092a80
	/* begin block 1 */
		// Start line: 631
		// Start offset: 0x80092A80
		// Variables:
	// 		struct FRAME_HDR *Fr; // $s3
	// 		int W; // $s6
	// 		int H; // $s5

		/* begin block 1.1 */
			// Start line: 652
			// Start offset: 0x80092B14

			/* begin block 1.1.1 */
				// Start line: 661
				// Start offset: 0x80092B90

				/* begin block 1.1.1.1 */
					// Start line: 672
					// Start offset: 0x80092B90

					/* begin block 1.1.1.1.1 */
						// Start line: 673
						// Start offset: 0x80092BA0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 674
							// Start offset: 0x80092BA0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 675
								// Start offset: 0x80092BB0
								// Variables:
							// 		struct RECT R; // stack offset -48
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80092BF0
							// End Line: 681
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80092BF0
						// End Line: 681

						/* begin block 1.1.1.1.1.2 */
							// Start line: 684
							// Start offset: 0x80092BF0

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 688
								// Start offset: 0x80092CA4
								// Variables:
							// 		unsigned char sw; // $a0
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x80092CA4
							// End Line: 690
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x80092CA4
						// End Line: 690
					/* end block 1.1.1.1.1 */
					// End offset: 0x80092CA4
					// End Line: 690
				/* end block 1.1.1.1 */
				// End offset: 0x80092CDC
				// End Line: 696
			/* end block 1.1.1 */
			// End offset: 0x80092CDC
			// End Line: 696
		/* end block 1.1 */
		// End offset: 0x80092CDC
		// End Line: 696
	/* end block 1 */
	// End offset: 0x80092CE0
	// End Line: 699

	/* begin block 2 */
		// Start line: 1424
	/* end block 2 */
	// End Line: 1425

void PrepareFt4__7TextDatP8POLY_FT4iiiii
							 (TextDat *this,POLY_FT4 *FT4,int Frm,int X,int Y,int XFlip,int YFlip)

{
	char cVar1;
	uchar uVar2;
	uchar uVar3;
	short sVar4;
	short sVar5;
	ushort uVar6;
	FRAME_HDR *Fr;
	uint w;
	void *pvVar7;
	uint uVar8;
	short sVar9;
	uint uVar10;
	RECT local_30;
	
	Fr = GetFr__7TextDati(this,Frm);
	w = Fr->Y;
	*(undefined *)((int)&FT4->tag + 3) = 9;
	FT4->code = '-';
	uVar10 = w >> 9 & 0x1ff;
	w = w & 0x1ff;
	if (XFlip == 0) {
		sVar9 = (short)X + (short)*(char *)&Fr->X;
	}
	else {
		sVar9 = ((short)X - (short)*(char *)&Fr->X) - (short)w;
	}
	cVar1 = *(char *)((int)&Fr->X + 1);
	sVar4 = sVar9 + (short)w;
	FT4->x0 = sVar9;
	FT4->x1 = sVar4;
	FT4->x2 = sVar9;
	FT4->x3 = sVar4;
	sVar9 = (short)Y + (short)cVar1;
	sVar4 = (short)uVar10;
	sVar5 = sVar9 + sVar4;
	FT4->y0 = sVar9;
	FT4->y1 = sVar9;
	FT4->y2 = sVar5;
	FT4->y3 = sVar5;
	SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this,Fr,FT4);
	if ((Fr->X & 0x4000000U) == 0) {
		pvVar7 = CanXferFrame__C7TextDat(this);
		if (pvVar7 == (void *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x2b7);
		}
		else {
			if (this->LastFrame != Frm) {
				DecompFrame__7TextDatP9FRAME_HDR(this,Fr);
				local_30.x = (short)this->DecX;
				local_30.y = (short)this->DecY;
				uVar8 = GU_AlignVal(w,2);
				local_30.w = (short)(uVar8 >> 1);
				local_30.h = sVar4;
				GPUQ_LoadImage__FP4RECTli(&local_30,this->hndDecompBuffer,0);
			}
			FT4->u0 = (uchar)((this->DecX & 0x3fU) << 1);
			FT4->v0 = (uchar)this->DecY;
			FT4->u1 = ((byte)this->DecX & 0x3f) * '\x02' + (char)w;
			FT4->v1 = (uchar)this->DecY;
			FT4->u2 = (uchar)((this->DecX & 0x3fU) << 1);
			cVar1 = (char)uVar10;
			FT4->v2 = (char)this->DecY + cVar1;
			FT4->u3 = ((byte)this->DecX & 0x3f) * '\x02' + (char)w;
			FT4->v3 = (char)this->DecY + cVar1;
			uVar6 = GetTPage(1,0,this->DecX,this->DecY);
			FT4->tpage = uVar6;
			if (YFlip != 0) {
				uVar2 = FT4->v2;
				FT4->v2 = FT4->v0;
				uVar3 = FT4->v1;
				FT4->v0 = uVar2;
				FT4->v1 = FT4->v3;
				FT4->v3 = uVar3;
			}
		}
		this->LastFrame = Frm;
	}
	else {
		SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(this,Fr,FT4,XFlip,YFlip);
		this->LastFrame = Frm;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ GetDecompBufffer__7TextDati(struct TextDat *this /*$s1*/, int Size /*$s0*/)
 // line 706, offset 0x80092d14
	/* begin block 1 */
		// Start line: 707
		// Start offset: 0x80092D14
		// Variables:
	// 		long *DecArray; // $s2
	// 		int DecIndex; // $s3
	// 		long hnd; // $s0
	// 		unsigned char *RetAddr; // $s4
	/* end block 1 */
	// End offset: 0x80092E50
	// End Line: 741

	/* begin block 2 */
		// Start line: 1594
	/* end block 2 */
	// End Line: 1595

uchar * GetDecompBufffer__7TextDati(TextDat *this,int Size)

{
	uchar uVar1;
	void *pvVar2;
	int iVar3;
	long Handle;
	uchar *puVar4;
	int iVar5;
	
	iVar5 = this->NumOfBuffers[this->Scr];
	if (iVar5 == 0x28) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x2ce);
	}
	pvVar2 = GAL_Lock(this->hndDecompArrays);
	if (pvVar2 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x2d1);
	}
	iVar3 = this->Scr;
	Handle = GAL_Alloc(Size,1,&DAT_8011acf8);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x2d6);
	}
	puVar4 = (uchar *)GAL_Lock(Handle);
	if (puVar4 == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x2d9);
	}
	*(long *)((int)pvVar2 + iVar5 * 4 + iVar3 * 0xa0) = Handle;
	uVar1 = GAL_Unlock(this->hndDecompArrays);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x2de);
	}
	this->NumOfBuffers[this->Scr] = iVar5 + 1;
	return puVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this /*$a0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_GT4 *FT4 /*$a2*/, int XFlip /*$a3*/, int YFlip /*stack 16*/)
 // line 745, offset 0x80092e74
	/* begin block 1 */
		// Start line: 746
		// Start offset: 0x80092E74
		// Variables:
	// 		int Rotated; // $v0
	// 		int Tpage; // $t4
	// 		int U; // $v1
	// 		int V; // $t1
	// 		int W; // $t0
	// 		int H; // $t2
	/* end block 1 */
	// End offset: 0x80092F6C
	// End Line: 804

	/* begin block 2 */
		// Start line: 1682
	/* end block 2 */
	// End Line: 1683

void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii
							 (TextDat *this,FRAME_HDR *Fr,POLY_GT4 *FT4,int XFlip,int YFlip)

{
	ushort uVar1;
	char cVar2;
	char cVar3;
	uchar uVar4;
	uchar uVar5;
	uchar uVar6;
	
	uVar6 = *(uchar *)((int)&Fr->FrOffset + 1);
	uVar1 = *(ushort *)((int)&Fr->FrOffset + 2);
	cVar3 = (char)((uint)Fr->Y >> 9);
	cVar2 = (char)Fr->Y;
	uVar5 = *(uchar *)&Fr->FrOffset;
	if (((uint)Fr->X >> 0x19 & 1) == 0) {
		uVar4 = uVar5 + cVar2;
		if (XFlip == 0) {
			FT4->u0 = uVar5;
			FT4->u1 = uVar4;
			FT4->u2 = uVar5;
			FT4->u3 = uVar4;
		}
		else {
			FT4->u0 = uVar4 + -1;
			FT4->u1 = uVar5 + -1;
			FT4->u2 = uVar4 + -1;
			FT4->u3 = uVar5 + -1;
		}
		uVar5 = uVar6 + cVar3;
		if (YFlip == 0) {
			FT4->v0 = uVar6;
			FT4->v1 = uVar6;
		}
		else {
			FT4->v0 = uVar5 + -1;
			FT4->v1 = uVar5 + -1;
			uVar5 = uVar6 + -1;
		}
		FT4->v2 = uVar5;
		FT4->v3 = uVar5;
	}
	else {
		if (XFlip == 0) {
			uVar4 = uVar6 + cVar2 + -1;
			FT4->v0 = uVar4;
			FT4->v2 = uVar4;
			cVar2 = -1;
		}
		else {
			FT4->v0 = uVar6;
			FT4->v2 = uVar6;
		}
		FT4->v1 = uVar6 + cVar2;
		FT4->v3 = uVar6 + cVar2;
		if (YFlip == 0) {
			FT4->u0 = uVar5;
			FT4->u1 = uVar5;
		}
		else {
			uVar6 = uVar5 + cVar3 + -1;
			FT4->u0 = uVar6;
			FT4->u1 = uVar6;
			cVar3 = -1;
		}
		FT4->u2 = uVar5 + cVar3;
		FT4->u3 = uVar5 + cVar3;
	}
	FT4->tpage = uVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this /*$s5*/, struct POLY_GT4 *GT4 /*$s0*/, int Frm /*$a2*/, int X /*$s2*/, int Y /*stack 16*/, int XFlip /*stack 20*/, int YFlip /*stack 24*/)
 // line 807, offset 0x80092f74
	/* begin block 1 */
		// Start line: 808
		// Start offset: 0x80092F74
		// Variables:
	// 		struct FRAME_HDR *Fr; // $s3
	// 		int W; // $s6
	// 		int H; // $s4
	// 		unsigned char sw; // $a0
	// 		struct PAL *Pal; // $s1

		/* begin block 1.1 */
			// Start line: 836
			// Start offset: 0x80093030

			/* begin block 1.1.1 */
				// Start line: 841
				// Start offset: 0x8009307C
			/* end block 1.1.1 */
			// End offset: 0x8009307C
			// End Line: 845

			/* begin block 1.1.2 */
				// Start line: 848
				// Start offset: 0x80093088
				// Variables:
			// 		struct RECT R; // stack offset -48
			/* end block 1.1.2 */
			// End offset: 0x800930C0
			// End Line: 852
		/* end block 1.1 */
		// End offset: 0x800930C0
		// End Line: 852

		/* begin block 1.2 */
			// Start line: 855
			// Start offset: 0x800930C0

			/* begin block 1.2.1 */
				// Start line: 858
				// Start offset: 0x800930F0
				// Variables:
			// 		int DecX; // $v0
			// 		int DecY; // $v0
			// 		struct RECT R; // stack offset -48
			/* end block 1.2.1 */
			// End offset: 0x80093198
			// End Line: 879
		/* end block 1.2 */
		// End offset: 0x80093198
		// End Line: 879
	/* end block 1 */
	// End offset: 0x80093198
	// End Line: 879

	/* begin block 2 */
		// Start line: 1817
	/* end block 2 */
	// End Line: 1818

void PrepareGt4__7TextDatP8POLY_GT4iiiii
							 (TextDat *this,POLY_GT4 *GT4,int Frm,int X,int Y,int XFlip,int YFlip)

{
	short sVar1;
	uchar uVar2;
	ushort uVar3;
	FRAME_HDR *Fr;
	uint w;
	PAL *pPVar4;
	uint uVar5;
	uchar uVar6;
	short sVar7;
	short sVar8;
	short sVar9;
	uint uVar10;
	RECT local_30;
	
	Fr = GetFr__7TextDati(this,Frm & 0xffff);
	w = Fr->Y;
	*(undefined *)((int)&GT4->tag + 3) = 0xc;
	GT4->code = '=';
	uVar10 = w >> 9 & 0x1ff;
	w = w & 0x1ff;
	if (XFlip == 0) {
		sVar9 = (short)X + (short)*(char *)&Fr->X;
	}
	else {
		sVar9 = ((short)X - (short)*(char *)&Fr->X) - (short)w;
	}
	sVar1 = (short)uVar10;
	if (YFlip == 0) {
		sVar8 = (short)Y + (short)*(char *)((int)&Fr->X + 1);
	}
	else {
		sVar8 = ((short)Y - (short)*(char *)((int)&Fr->X + 1)) - sVar1;
	}
	sVar7 = sVar9 + (short)w;
	GT4->x0 = sVar9;
	GT4->y0 = sVar8;
	GT4->x1 = sVar7;
	GT4->y1 = sVar8;
	GT4->x2 = sVar9;
	GT4->y2 = sVar8 + sVar1;
	GT4->x3 = sVar7;
	GT4->y3 = sVar8 + sVar1;
	pPVar4 = GetPal__7TextDati(this,(uint)*(byte *)((int)&Fr->X + 2));
	if ((pPVar4->InVram & 1) == 0) {
		uVar3 = GetClut(0x140,0x100);
		GT4->clut = uVar3;
		local_30.x = 0x140;
		local_30.y = 0x100;
		local_30.w = 0x40;
		local_30.h = 1;
		LoadImage(&local_30,&pPVar4->NumOfCols);
	}
	else {
		GT4->clut = *(ushort *)((int)&pPVar4->InVram + 2);
	}
	if ((Fr->X & 0x4000000U) == 0) {
		DecompFrame__7TextDatP9FRAME_HDR(this,Fr);
		local_30.x = 0x141;
		local_30.y = 0x101;
		uVar5 = GU_AlignVal(w,2);
		local_30.w = (short)(uVar5 >> 1);
		local_30.h = sVar1;
		GPUQ_LoadImage__FP4RECTli(&local_30,this->hndDecompBuffer,0);
		uVar6 = (char)w + '\x01';
		GT4->u0 = '\x01';
		GT4->v0 = '\x01';
		GT4->v1 = '\x01';
		GT4->u2 = '\x01';
		uVar2 = (char)uVar10 + '\x01';
		GT4->u1 = uVar6;
		GT4->v2 = uVar2;
		GT4->u3 = uVar6;
		GT4->v3 = uVar2;
		uVar3 = GetTPage(1,0,0x141,0x101);
		GT4->tpage = uVar3;
		if (YFlip != 0) {
			uVar2 = GT4->v2;
			GT4->v2 = GT4->v0;
			uVar6 = GT4->v1;
			GT4->v0 = uVar2;
			GT4->v1 = GT4->v3;
			GT4->v3 = uVar6;
		}
	}
	else {
		SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(this,Fr,GT4,XFlip,YFlip);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this /*$a0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_GT3 *GT3 /*$a2*/)
 // line 885, offset 0x800931cc
	/* begin block 1 */
		// Start line: 886
		// Start offset: 0x800931CC
		// Variables:
	// 		int Rotated; // $v0
	// 		int Tpage; // $t2
	// 		int U; // $a0
	// 		int V; // $t1
	// 		int W; // $v1
	// 		int H; // $t0
	/* end block 1 */
	// End offset: 0x80093248
	// End Line: 913

	/* begin block 2 */
		// Start line: 2004
	/* end block 2 */
	// End Line: 2005

void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(TextDat *this,FRAME_HDR *Fr,POLY_GT3 *GT3)

{
	uchar uVar1;
	uchar uVar2;
	ushort uVar3;
	char cVar4;
	char cVar5;
	uchar uVar6;
	
	uVar1 = *(uchar *)((int)&Fr->FrOffset + 1);
	uVar3 = *(ushort *)((int)&Fr->FrOffset + 2);
	uVar2 = *(uchar *)&Fr->FrOffset;
	cVar5 = (char)((uint)Fr->Y >> 9);
	cVar4 = (char)Fr->Y;
	if (((uint)Fr->X >> 0x19 & 1) == 0) {
		GT3->u1 = uVar2 + cVar4;
		GT3->u0 = uVar2;
		GT3->u2 = uVar2;
		GT3->v0 = uVar1;
		GT3->v1 = uVar1;
		GT3->v2 = uVar1 + cVar5;
	}
	else {
		uVar6 = uVar1 + cVar4 + -1;
		GT3->v0 = uVar6;
		GT3->v2 = uVar6;
		GT3->v1 = uVar1 + -1;
		GT3->u0 = uVar2;
		GT3->u1 = uVar2;
		GT3->u2 = uVar2 + cVar5;
	}
	GT3->tpage = uVar3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this /*$s4*/, struct POLY_GT3 *GT3 /*$s2*/, int Frm /*$a2*/, int X /*$s1*/, int Y /*stack 16*/)
 // line 917, offset 0x80093250
	/* begin block 1 */
		// Start line: 918
		// Start offset: 0x80093250
		// Variables:
	// 		struct FRAME_HDR *Fr; // $s3
	// 		int W; // $s6
	// 		int H; // $s5
	// 		struct PAL *Pal; // $s0

		/* begin block 1.1 */
			// Start line: 918
			// Start offset: 0x80093250

			/* begin block 1.1.1 */
				// Start line: 941
				// Start offset: 0x80093304
			/* end block 1.1.1 */
			// End offset: 0x80093304
			// End Line: 945

			/* begin block 1.1.2 */
				// Start line: 948
				// Start offset: 0x80093310
				// Variables:
			// 		struct RECT R; // stack offset -40
			/* end block 1.1.2 */
			// End offset: 0x80093348
			// End Line: 952
		/* end block 1.1 */
		// End offset: 0x80093348
		// End Line: 952

		/* begin block 1.2 */
			// Start line: 955
			// Start offset: 0x80093348

			/* begin block 1.2.1 */
				// Start line: 958
				// Start offset: 0x80093370
				// Variables:
			// 		int DecX; // $v0
			// 		int DecY; // $v0
			// 		struct RECT R; // stack offset -40
			/* end block 1.2.1 */
			// End offset: 0x800933EC
			// End Line: 976
		/* end block 1.2 */
		// End offset: 0x800933EC
		// End Line: 976
	/* end block 1 */
	// End offset: 0x800933EC
	// End Line: 976

	/* begin block 2 */
		// Start line: 2078
	/* end block 2 */
	// End Line: 2079

void PrepareGt3__7TextDatP8POLY_GT3iii(TextDat *this,POLY_GT3 *GT3,int Frm,int X,int Y)

{
	short sVar1;
	short sVar2;
	ushort uVar3;
	FRAME_HDR *Fr;
	PAL *pPVar4;
	uint uVar5;
	uint w;
	short sVar6;
	uint uVar7;
	RECT local_28;
	
	Fr = GetFr__7TextDati(this,Frm & 0xffff);
	w = Fr->Y;
	*(undefined *)((int)&GT3->tag + 3) = 9;
	GT3->code = '5';
	uVar7 = w >> 9 & 0x1ff;
	sVar1 = (short)X + (short)*(char *)&Fr->X;
	sVar6 = (short)Y + (short)*(char *)((int)&Fr->X + 1);
	w = w & 0x1ff;
	GT3->y0 = sVar6;
	GT3->y1 = sVar6;
	sVar2 = (short)uVar7;
	GT3->x0 = sVar1;
	GT3->x1 = sVar1 + (short)w;
	GT3->x2 = sVar1;
	GT3->y2 = sVar6 + sVar2;
	pPVar4 = GetPal__7TextDati(this,(uint)*(byte *)((int)&Fr->X + 2));
	if ((pPVar4->InVram & 1) == 0) {
		uVar3 = GetClut(0x140,0x100);
		GT3->clut = uVar3;
		local_28.x = 0x140;
		local_28.y = 0x100;
		local_28.w = 0x40;
		local_28.h = 1;
		LoadImage(&local_28,&pPVar4->NumOfCols);
	}
	else {
		GT3->clut = *(ushort *)((int)&pPVar4->InVram + 2);
	}
	if ((Fr->X & 0x4000000U) == 0) {
		DecompFrame__7TextDatP9FRAME_HDR(this,Fr);
		local_28.x = 0x141;
		local_28.y = 0x101;
		uVar5 = GU_AlignVal(w,2);
		local_28.w = (short)(uVar5 >> 1);
		local_28.h = sVar2;
		GPUQ_LoadImage__FP4RECTli(&local_28,this->hndDecompBuffer,0);
		GT3->u1 = (char)w + '\x01';
		GT3->u0 = '\x01';
		GT3->v0 = '\x01';
		GT3->v1 = '\x01';
		GT3->u2 = '\x01';
		GT3->v2 = (char)uVar7 + '\x01';
		uVar3 = GetTPage(1,0,0x141,0x101);
		GT3->tpage = uVar3;
	}
	else {
		SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(this,Fr,GT3);
	}
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintFt4__7TextDatiiiiii(struct TextDat *this /*$s1*/, int Frm /*$s0*/, int X /*$s3*/, int Y /*$s2*/, int XFlip /*stack 16*/, int OtPos /*stack 20*/, int YFlip /*stack 24*/)
 // line 989, offset 0x80093418
	/* begin block 1 */
		// Start line: 990
		// Start offset: 0x80093418
		// Variables:
	// 		struct POLY_FT4 *FT4; // stack offset -40
	/* end block 1 */
	// End offset: 0x80093540
	// End Line: 1007

	/* begin block 2 */
		// Start line: 2258
	/* end block 2 */
	// End Line: 2259

POLY_FT4 * PrintFt4__7TextDatiiiiii(TextDat *this,int Frm,int X,int Y,int XFlip,int OtPos,int YFlip)

{
	int iVar1;
	ulong *puVar2;
	POLY_FT4 *local_28 [2];
	
	if ((Frm < 0) || (iVar1 = GetNumOfFrames__7TextDat(this), iVar1 <= Frm)) {
		local_28[0] = &MyFT4;
	}
	else {
		PRIM_GetPrim__FPP8POLY_FT4(local_28);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_28[0],Frm,X,Y,XFlip,YFlip);
		puVar2 = ThisOt;
		if (YFlip == 0) {
			puVar2 = ThisOt + OtPos;
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
		else {
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | ThisOt[2] & 0xffffff;
			puVar2[2] = puVar2[2] & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
	}
	return local_28[0];
}



// decompiled code
// original method signature: 
// struct POLY_GT4 * /*$ra*/ PrintGt4__7TextDatiiiiii(struct TextDat *this /*$s1*/, int Frm /*$s0*/, int X /*$s3*/, int Y /*$s2*/, int XFlip /*stack 16*/, int OtPos /*stack 20*/, int YFlip /*stack 24*/)
 // line 1012, offset 0x8009356c
	/* begin block 1 */
		// Start line: 1013
		// Start offset: 0x8009356C
		// Variables:
	// 		struct POLY_GT4 *GT4; // stack offset -40
	/* end block 1 */
	// End offset: 0x80093694
	// End Line: 1032

	/* begin block 2 */
		// Start line: 2304
	/* end block 2 */
	// End Line: 2305

POLY_GT4 * PrintGt4__7TextDatiiiiii(TextDat *this,int Frm,int X,int Y,int XFlip,int OtPos,int YFlip)

{
	int iVar1;
	ulong *puVar2;
	POLY_GT4 *local_28 [2];
	
	iVar1 = GetNumOfFrames__7TextDat(this);
	if ((int)(Frm & 0xffffU) < iVar1) {
		PRIM_GetPrim__FPP8POLY_GT4(local_28);
		PrepareGt4__7TextDatP8POLY_GT4iiiii(this,local_28[0],Frm & 0xffffU,X,Y,XFlip,YFlip);
		puVar2 = ThisOt;
		if (YFlip == 0) {
			puVar2 = ThisOt + OtPos;
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
			*puVar2 = *puVar2 & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
		else {
			local_28[0]->tag = local_28[0]->tag & 0xff000000 | ThisOt[2] & 0xffffff;
			puVar2[2] = puVar2[2] & 0xff000000 | (uint)local_28[0] & 0xffffff;
		}
	}
	else {
		local_28[0] = &MyGT4;
	}
	return local_28[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this /*$s3*/, struct FRAME_HDR *Fr /*$s1*/)
 // line 1058, offset 0x800936c0
	/* begin block 1 */
		// Start line: 1059
		// Start offset: 0x800936C0
		// Variables:
	// 		unsigned char *CompFrAddr; // $s2
	// 		int DecompSize; // $s4
	// 		unsigned char *Dest; // $s0
	/* end block 1 */
	// End offset: 0x800937F4
	// End Line: 1097

	/* begin block 2 */
		// Start line: 2396
	/* end block 2 */
	// End Line: 2397

void DecompFrame__7TextDatP9FRAME_HDR(TextDat *this,FRAME_HDR *Fr)

{
	void *pvVar1;
	uint uVar2;
	uchar *Dest;
	uint uVar3;
	uint uVar4;
	uchar *Src;
	
	pvVar1 = GAL_Lock(this->hndDat);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x428);
	}
	Src = (uchar *)((int)pvVar1 + Fr->FrOffset);
	uVar2 = GU_AlignVal(Fr->Y & 0x1ff,2);
	uVar3 = Fr->Y;
	Dest = (uchar *)GAL_Lock(this->hndDecompBuffer);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x433);
	}
	uVar4 = (uint)Fr->X >> 0x1b & 3;
	if (uVar4 == 1) {
		Un64__FPUcT0l(Src,Dest,uVar2 * (uVar3 >> 9 & 0x1ff));
	}
	else {
		if ((uVar4 == 0) || (uVar4 != 2)) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x441);
		}
		else {
			LZNP_Decode__FPUcT0(Src,Dest);
		}
	}
	GAL_Unlock(this->hndDecompBuffer);
	GAL_Unlock(this->hndDat);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeCreatureOffsetTab__7TextDat(struct TextDat *this /*$s2*/)
 // line 1105, offset 0x80093818
	/* begin block 1 */
		// Start line: 1106
		// Start offset: 0x80093818
		// Variables:
	// 		int NumOfCreatures; // $s1

		/* begin block 1.1 */
			// Start line: 1106
			// Start offset: 0x80093818

			/* begin block 1.1.1 */
				// Start line: 1108
				// Start offset: 0x80093848
				// Variables:
			// 		unsigned char *ThisAddr; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1113
					// Start offset: 0x800938A0
					// Variables:
				// 		unsigned int f; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x800938F4
				// End Line: 1120
			/* end block 1.1.1 */
			// End offset: 0x800938F4
			// End Line: 1120
		/* end block 1.1 */
		// End offset: 0x80093908
		// End Line: 1125

		/* begin block 1.2 */
			// Start line: 1128
			// Start offset: 0x80093908
			// Variables:
		// 		int f; // $s0

			/* begin block 1.2.1 */
				// Start line: 1132
				// Start offset: 0x80093918
			/* end block 1.2.1 */
			// End offset: 0x80093924
			// End Line: 1134
		/* end block 1.2 */
		// End offset: 0x8009393C
		// End Line: 1136
	/* end block 1 */
	// End offset: 0x8009393C
	// End Line: 1136

	/* begin block 2 */
		// Start line: 2502
	/* end block 2 */
	// End Line: 2503

void MakeCreatureOffsetTab__7TextDat(TextDat *this)

{
	long lVar1;
	int *piVar2;
	int iVar3;
	CCreatureHdr *this_00;
	uint uVar4;
	int Creature;
	
	uVar4 = this->Hdr->NumOfCreatures;
	if (uVar4 == 0) {
		this->CreatureOffset = (int *)0x0;
		this->hndCreatureOffset = -1;
	}
	else {
		lVar1 = GAL_Alloc(uVar4 << 2,(ulong)&DAT_00008001,&DAT_8011ad00);
		this->hndCreatureOffset = lVar1;
		if (lVar1 == -1) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x455);
		}
		piVar2 = (int *)GAL_Lock(this->hndCreatureOffset);
		this->CreatureOffset = piVar2;
		if (piVar2 == (int *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x458);
		}
		this_00 = (CCreatureHdr *)this->CreatureAnims;
		uVar4 = 0;
		if (this->Hdr->NumOfCreatures != 0) {
			do {
				*(CCreatureHdr **)(this->CreatureOffset + uVar4) =
						 (CCreatureHdr *)((int)this_00 - (int)this->CreatureAnims);
				iVar3 = GetSize__C12CCreatureHdr(this_00);
				uVar4 = uVar4 + 1;
				this_00 = (CCreatureHdr *)((int)&this_00->NumOfActions + iVar3);
			} while (uVar4 < this->Hdr->NumOfCreatures);
		}
	}
	iVar3 = GetNumOfCreatures__7TextDat(this);
	Creature = 0;
	while (Creature < iVar3) {
		this_00 = GetCreature__7TextDati(this,Creature);
		InitActionDirRemaps__12CCreatureHdr(this_00);
		Creature = Creature + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePalOffsetTab__7TextDat(struct TextDat *this /*$s0*/)
 // line 1145, offset 0x80093958
	/* begin block 1 */
		// Start line: 1146
		// Start offset: 0x80093958
		// Variables:
	// 		struct PAL *ThisPal; // $a1

		/* begin block 1.1 */
			// Start line: 1153
			// Start offset: 0x800939CC
			// Variables:
		// 		unsigned int f; // $a2
		/* end block 1.1 */
		// End offset: 0x80093A40
		// End Line: 1177
	/* end block 1 */
	// End offset: 0x80093A40
	// End Line: 1177

	/* begin block 2 */
		// Start line: 2585
	/* end block 2 */
	// End Line: 2586

void MakePalOffsetTab__7TextDat(TextDat *this)

{
	long lVar1;
	int *piVar2;
	int iVar3;
	uint *puVar4;
	uint uVar5;
	
	lVar1 = GAL_Alloc((uint)*(ushort *)((int)&this->Hdr->NumOfFrames + 2) << 2,(ulong)&DAT_00008001,
										&DAT_8011ad00);
	this->hndPalOffset = lVar1;
	if (lVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x47d);
	}
	piVar2 = (int *)GAL_Lock(this->hndPalOffset);
	this->PalOffset = piVar2;
	if (piVar2 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x480);
	}
	puVar4 = (uint *)this->Pals;
	uVar5 = 0;
	if (*(short *)((int)&this->Hdr->NumOfFrames + 2) != 0) {
		iVar3 = 0;
		do {
			*(uint **)(iVar3 + (int)this->PalOffset) = (uint *)((int)puVar4 - (int)this->Pals);
			if ((*puVar4 & 1) == 0) {
				puVar4 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffe));
			}
			puVar4 = puVar4 + 1;
			uVar5 = uVar5 + 1;
			iVar3 = uVar5 * 4;
		} while (uVar5 < (uint)*(ushort *)((int)&this->Hdr->NumOfFrames + 2));
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitData__7TextDat(struct TextDat *this /*$a0*/)
 // line 1231, offset 0x80093a54
	/* begin block 1 */
		// Start line: 1232
		// Start offset: 0x80093A54
	/* end block 1 */
	// End offset: 0x80093A7C
	// End Line: 1243

	/* begin block 2 */
		// Start line: 2767
	/* end block 2 */
	// End Line: 2768

void InitData__7TextDat(TextDat *this)

{
	this->hndDecompArrays = -1;
	this->hndDat = -1;
	this->hndHdr = -1;
	this->hndPalOffset = -1;
	this->hndCreatureOffset = -1;
	this->hndDecompBuffer = -1;
	this->hndBlockOffsets = -1;
	this->DatLoaded = (void *)0x0;
	this->LoadCount = 0;
	this->Loaded = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpData__7TextDat(struct TextDat *this /*$s0*/)
 // line 1252, offset 0x80093a84
	/* begin block 1 */
		// Start line: 1253
		// Start offset: 0x80093A84
	/* end block 1 */
	// End offset: 0x80093B94
	// End Line: 1289

	/* begin block 2 */
		// Start line: 2808
	/* end block 2 */
	// End Line: 2809

void DumpData__7TextDat(TextDat *this)

{
	uchar uVar1;
	
	DumpHdr__7TextDat(this);
	DumpDatFile__7TextDat(this);
	if ((this->hndPalOffset != -1) && (uVar1 = GAL_Free(this->hndPalOffset), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4ee);
	}
	if ((this->hndCreatureOffset != -1) && (uVar1 = GAL_Free(this->hndCreatureOffset), uVar1 == '\0'))
	{
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4f4);
	}
	if ((this->hndBlockOffsets != -1) && (uVar1 = GAL_Free(this->hndBlockOffsets), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4fa);
	}
	if (this->hndDecompBuffer != -1) {
		GPUQ_DiscardHandle__Fl(this->hndDecompBuffer);
	}
	if ((this->hndDecompArrays != -1) && (uVar1 = GAL_Free(this->hndDecompArrays), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x505);
	}
	InitData__7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpHdr__7TextDat(struct TextDat *this /*$s0*/)
 // line 1292, offset 0x80093bac
	/* begin block 1 */
		// Start line: 1293
		// Start offset: 0x80093BAC
	/* end block 1 */
	// End offset: 0x80093BF8
	// End Line: 1300

	/* begin block 2 */
		// Start line: 2888
	/* end block 2 */
	// End Line: 2889

void DumpHdr__7TextDat(TextDat *this)

{
	uchar uVar1;
	
	if (this->hndHdr != -1) {
		uVar1 = GAL_Free(this->hndHdr);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x512);
		}
		this->hndHdr = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// struct TextDat * /*$ra*/ GM_UseTexData__Fi(int Id /*$s3*/)
 // line 1312, offset 0x80093c10
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x80093C10

		/* begin block 1.1 */
			// Start line: 1316
			// Start offset: 0x80093C4C

			/* begin block 1.1.1 */
				// Start line: 1317
				// Start offset: 0x80093C68
				// Variables:
			// 		struct TextDat *Dat2Use; // $s2
			// 		struct CTextFileInfo **Tab; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 1318
					// Start offset: 0x80093C68
					// Variables:
				// 		int f; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x80093CB0
				// End Line: 1326
			/* end block 1.1.1 */
			// End offset: 0x80093CF8
			// End Line: 1330
		/* end block 1.1 */
		// End offset: 0x80093CF8
		// End Line: 1330
	/* end block 1 */
	// End offset: 0x80093D20
	// End Line: 1334

	/* begin block 2 */
		// Start line: 2928
	/* end block 2 */
	// End Line: 2929

TextDat * GM_UseTexData__Fi(int Id)

{
	undefined *puVar1;
	TextDat *this;
	int iVar2;
	TextDat *this_00;
	
	if (0x173 < (uint)Id) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x521);
	}
	if (AllDats372[Id] == (TextDat *)0x0) {
		this_00 = (TextDat *)0x0;
		iVar2 = 0;
		this = &DatPool;
		do {
			puVar1 = (undefined *)IsLoaded__C7TextDat(this);
			if (puVar1 != &DAT_00000001) {
				this_00 = this;
			}
			iVar2 = iVar2 + 1;
			this = this + 1;
		} while ((iVar2 < 0x14) && (this_00 == (TextDat *)0x0));
		if (this_00 == (TextDat *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x52e);
		}
		SetFileInfo__7TextDatPC13CTextFileInfoi(this_00,(CTextFileInfo *)TX_DatTab[Id],Id);
		OnceOnlyInit__7TextDat(this_00);
		AllDats372[Id] = this_00;
	}
	Use__7TextDatlbi(AllDats372[Id],-1,&DAT_00000001,0);
	return AllDats372[Id];
}



// decompiled code
// original method signature: 
// void /*$ra*/ GM_ForceTpLoad__Fi(int Id /*$a0*/)
 // line 1337, offset 0x80093d44
	/* begin block 1 */
		// Start line: 1338
		// Start offset: 0x80093D44
	/* end block 1 */
	// End offset: 0x80093D70
	// End Line: 1340

	/* begin block 2 */
		// Start line: 2979
	/* end block 2 */
	// End Line: 2980

void GM_ForceTpLoad__Fi(int Id)

{
	if (AllDats372[Id] != (TextDat *)0x0) {
		ReloadTP__7TextDat(AllDats372[Id]);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GM_FinishedUsing__FP7TextDat(struct TextDat *Fin /*$s0*/)
 // line 1349, offset 0x80093d80
	/* begin block 1 */
		// Start line: 1350
		// Start offset: 0x80093D80
	/* end block 1 */
	// End offset: 0x80093DC0
	// End Line: 1354

	/* begin block 2 */
		// Start line: 3004
	/* end block 2 */
	// End Line: 3005

void GM_FinishedUsing__FP7TextDat(TextDat *Fin)

{
	undefined *puVar1;
	int iVar2;
	
	FinishedUsing__7TextDat(Fin);
	puVar1 = (undefined *)IsLoaded__C7TextDat(Fin);
	if (puVar1 != &DAT_00000001) {
		iVar2 = GetTexNum__C7TextDat(Fin);
		AllDats372[iVar2] = (TextDat *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this /*$s0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_FT4 *FT4 /*$s2*/)
 // line 1358, offset 0x80093dd4
	/* begin block 1 */
		// Start line: 1359
		// Start offset: 0x80093DD4
		// Variables:
	// 		struct PAL *Pal; // $s1

		/* begin block 1.1 */
			// Start line: 1359
			// Start offset: 0x80093DD4

			/* begin block 1.1.1 */
				// Start line: 1363
				// Start offset: 0x80093E10
			/* end block 1.1.1 */
			// End offset: 0x80093E10
			// End Line: 1367

			/* begin block 1.1.2 */
				// Start line: 1370
				// Start offset: 0x80093E1C
				// Variables:
			// 		struct RECT R; // stack offset -24
			/* end block 1.1.2 */
			// End offset: 0x80093E7C
			// End Line: 1387
		/* end block 1.1 */
		// End offset: 0x80093E7C
		// End Line: 1387
	/* end block 1 */
	// End offset: 0x80093E7C
	// End Line: 1387

	/* begin block 2 */
		// Start line: 3022
	/* end block 2 */
	// End Line: 3023

void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(TextDat *this,FRAME_HDR *Fr,POLY_FT4 *FT4)

{
	ushort uVar1;
	PAL *pPVar2;
	void *pvVar3;
	undefined2 local_18;
	undefined2 local_16;
	undefined2 local_14;
	undefined2 local_12;
	
	pPVar2 = GetPal__7TextDati(this,(uint)*(byte *)((int)&Fr->X + 2));
	if ((pPVar2->InVram & 1) == 0) {
		pvVar3 = CanXferPal__C7TextDat(this);
		if (pvVar3 == (void *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x566);
		}
		uVar1 = GetClut(this->PalX,this->PalY);
		FT4->clut = uVar1;
		local_18 = (undefined2)this->PalX;
		local_14 = 0x40;
		local_12 = 1;
		local_16 = (undefined2)this->PalY;
		LoadImage(&local_18,&pPVar2->NumOfCols);
	}
	else {
		FT4->clut = *(ushort *)((int)&pPVar2->InVram + 2);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFrNum__7TextDatiiii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/, int Direction /*$s2*/, int Frame /*stack 16*/)
 // line 1413, offset 0x80093e98
	/* begin block 1 */
		// Start line: 1414
		// Start offset: 0x80093E98
	/* end block 1 */
	// End offset: 0x80093ED0
	// End Line: 1415

	/* begin block 2 */
		// Start line: 3135
	/* end block 2 */
	// End Line: 3136

int GetFrNum__7TextDatiiii(TextDat *this,int Creature,int Action,int Direction,int Frame)

{
	CCreatureHdr *this_00;
	int iVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	iVar1 = GetFrNum__C12CCreatureHdriii(this_00,Action,Direction,Frame);
	return iVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsDirAliased__7TextDatiii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/, int Direction /*$s1*/)
 // line 1418, offset 0x80093eec
	/* begin block 1 */
		// Start line: 1419
		// Start offset: 0x80093EEC
	/* end block 1 */
	// End offset: 0x80093F2C
	// End Line: 1420

	/* begin block 2 */
		// Start line: 3145
	/* end block 2 */
	// End Line: 3146

void * IsDirAliased__7TextDatiii(TextDat *this,int Creature,int Action,int Direction)

{
	CCreatureHdr *this_00;
	CCreatureAction *pCVar1;
	
	this_00 = GetCreature__7TextDati(this,Creature);
	pCVar1 = GetAction__C12CCreatureHdri(this_00,Action);
	return (void *)(uint)(((uint)pCVar1->DirRemap[Direction] & 0xf) != Direction);
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoDecompRequests__7TextDat(struct TextDat *this /*$s0*/)
 // line 1428, offset 0x80093f44
	/* begin block 1 */
		// Start line: 1429
		// Start offset: 0x80093F44
		// Variables:
	// 		long *DecArray; // $s1

		/* begin block 1.1 */
			// Start line: 1446
			// Start offset: 0x80093FA0
			// Variables:
		// 		int f; // $s2

			/* begin block 1.1.1 */
				// Start line: 1448
				// Start offset: 0x80093FB8
			/* end block 1.1.1 */
			// End offset: 0x80094004
			// End Line: 1453
		/* end block 1.1 */
		// End offset: 0x80094010
		// End Line: 1454
	/* end block 1 */
	// End offset: 0x8009404C
	// End Line: 1459

	/* begin block 2 */
		// Start line: 3165
	/* end block 2 */
	// End Line: 3166

void DoDecompRequests__7TextDat(TextDat *this)

{
	uchar uVar1;
	void *pvVar2;
	long *plVar3;
	int iVar4;
	
	if (this->Scr == 0) {
		this->Scr = 1;
	}
	else {
		this->Scr = 0;
	}
	pvVar2 = GAL_Lock(this->hndDecompArrays);
	if (pvVar2 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5a0);
	}
	iVar4 = 0;
	plVar3 = (long *)((int)pvVar2 + this->Scr * 0xa0);
	while (iVar4 < this->NumOfBuffers[this->Scr]) {
		uVar1 = GAL_Free(*plVar3);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5ac);
		}
		plVar3 = plVar3 + 1;
		iVar4 = iVar4 + 1;
	}
	this->NumOfBuffers[this->Scr] = 0;
	uVar1 = GAL_Unlock(this->hndDecompArrays);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5b2);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FindDecompArea__7TextDatR4RECT(struct TextDat *this /*$s1*/, struct RECT *R /*$s2*/)
 // line 1496, offset 0x80094068
	/* begin block 1 */
		// Start line: 1497
		// Start offset: 0x80094068
		// Variables:
	// 		int NumOfFrames; // $t0
	// 		int Widest; // $a0
	// 		int Tallest; // $s0

		/* begin block 1.1 */
			// Start line: 1502
			// Start offset: 0x800940A4
			// Variables:
		// 		int f; // $a3

			/* begin block 1.1.1 */
				// Start line: 1506
				// Start offset: 0x800940C0
				// Variables:
			// 		int w; // $a1
			// 		int h; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80094108
			// End Line: 1519
		/* end block 1.1 */
		// End offset: 0x80094114
		// End Line: 1520
	/* end block 1 */
	// End offset: 0x80094124
	// End Line: 1523

	/* begin block 2 */
		// Start line: 3303
	/* end block 2 */
	// End Line: 3304

void FindDecompArea__7TextDatR4RECT(TextDat *this,RECT *R)

{
	int iVar1;
	uint uVar2;
	uint w;
	uint uVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	
	if (this->Loaded == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5db);
	}
	iVar1 = GetNumOfFrames__7TextDat(this);
	w = 0;
	uVar6 = 0;
	iVar5 = 0;
	iVar4 = 0;
	while (iVar5 < iVar1) {
		uVar2 = *(uint *)((int)&this->Frames->Y + iVar4);
		uVar3 = uVar2 & 0x1ff;
		uVar2 = uVar2 >> 9 & 0x1ff;
		if (w < uVar3) {
			w = uVar3;
		}
		if (uVar6 < uVar2) {
			uVar6 = uVar2;
		}
		iVar4 = iVar4 + 0xc;
		iVar5 = iVar5 + 1;
	}
	w = GU_AlignVal(w,2);
	R->w = (short)w;
	R->h = (short)uVar6;
	return;
}



// decompiled code
// original method signature: 
// struct CTextFileInfo * /*$ra*/ GetFileInfo__7TextDati(int Id /*$s0*/)
 // line 1526, offset 0x80094140
	/* begin block 1 */
		// Start line: 1527
		// Start offset: 0x80094140
	/* end block 1 */
	// End offset: 0x8009417C
	// End Line: 1529

	/* begin block 2 */
		// Start line: 3364
	/* end block 2 */
	// End Line: 3365

CTextFileInfo * GetFileInfo__7TextDati(int Id)

{
	if (0x173 < (uint)Id) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5f7);
	}
	return (CTextFileInfo *)TX_DatTab[Id];
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSize__C15CCreatureAction(struct CCreatureAction *this /*$a0*/)
 // line 1534, offset 0x80094190
	/* begin block 1 */
		// Start line: 1535
		// Start offset: 0x80094190
	/* end block 1 */
	// End offset: 0x800941A8
	// End Line: 1536

	/* begin block 2 */
		// Start line: 3380
	/* end block 2 */
	// End Line: 3381

int GetSize__C15CCreatureAction(CCreatureAction *this)

{
	uint uVar1;
	
	uVar1 = GU_AlignVal((uint)this->NumOfFrames + 0xc,4);
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFrNum__C15CCreatureActionii(struct CCreatureAction *this /*$a0*/, int Direction /*$a1*/, int Frame /*$a2*/)
 // line 1539, offset 0x800941b8
	/* begin block 1 */
		// Start line: 1540
		// Start offset: 0x800941B8
		// Variables:
	// 		int LocFrame; // $v0
	/* end block 1 */
	// End offset: 0x800941E0
	// End Line: 1546

	/* begin block 2 */
		// Start line: 3395
	/* end block 2 */
	// End Line: 3396

int GetFrNum__C15CCreatureActionii(CCreatureAction *this,int Direction,int Frame)

{
	return (uint)(this->DirRemap[Direction] >> 4) * (uint)this->NumOfPhysFrames +
				 (uint)this->AnimRemap[Frame] + (uint)this->BaseFrame;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDirRemap__15CCreatureAction(struct CCreatureAction *this /*$a0*/)
 // line 1551, offset 0x800941e8
	/* begin block 1 */
		// Start line: 1552
		// Start offset: 0x800941E8
		// Variables:
	// 		void * Dir2Remap[8]; // stack offset -32
	// 		int f; // $a3
	// 		int RemapNum; // $t3

		/* begin block 1.1 */
			// Start line: 1565
			// Start offset: 0x80094230

			/* begin block 1.1.1 */
				// Start line: 1567
				// Start offset: 0x8009423C

				/* begin block 1.1.1.1 */
					// Start line: 1569
					// Start offset: 0x80094248

					/* begin block 1.1.1.1.1 */
						// Start line: 1570
						// Start offset: 0x80094258
						// Variables:
					// 		int OrigNum; // $t1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1571
							// Start offset: 0x80094258
							// Variables:
						// 		int g; // $a2
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009428C
						// End Line: 1577
					/* end block 1.1.1.1.1 */
					// End offset: 0x80094290
					// End Line: 1578
				/* end block 1.1.1.1 */
				// End offset: 0x80094290
				// End Line: 1578
			/* end block 1.1.1 */
			// End offset: 0x80094290
			// End Line: 1578
		/* end block 1.1 */
		// End offset: 0x8009429C
		// End Line: 1580
	/* end block 1 */
	// End offset: 0x8009429C
	// End Line: 1580

	/* begin block 2 */
		// Start line: 3416
	/* end block 2 */
	// End Line: 3417

void InitDirRemap__15CCreatureAction(CCreatureAction *this)

{
	undefined4 *puVar1;
	CCreatureAction *pCVar2;
	int iVar3;
	int iVar4;
	uint uVar5;
	int *piVar6;
	int local_20 [7];
	undefined4 local_4;
	
	piVar6 = local_20;
	iVar4 = 7;
	puVar1 = &local_4;
	do {
		*puVar1 = 0;
		iVar4 = iVar4 + -1;
		puVar1 = puVar1 + -1;
	} while (-1 < iVar4);
	iVar4 = 0;
	pCVar2 = this;
	do {
		iVar4 = iVar4 + 1;
		local_20[(uint)pCVar2->DirRemap[0]] = 1;
		pCVar2 = (CCreatureAction *)((int)&this->BaseFrame + iVar4);
	} while (iVar4 < 8);
	iVar4 = 0;
	uVar5 = 0;
	while ((int)uVar5 < 8) {
		if (*piVar6 != 0) {
			iVar3 = 0;
			pCVar2 = this;
			do {
				if (((uint)pCVar2->DirRemap[0] & 0xf) == uVar5) {
					pCVar2->DirRemap[0] = pCVar2->DirRemap[0] | (byte)(iVar4 << 4);
				}
				iVar3 = iVar3 + 1;
				pCVar2 = (CCreatureAction *)((int)&this->BaseFrame + iVar3);
			} while (iVar3 < 8);
			iVar4 = iVar4 + 1;
		}
		piVar6 = piVar6 + 1;
		uVar5 = uVar5 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this /*$a0*/, int Action /*$a1*/, int Direction /*$s0*/, int Frame /*$s1*/)
 // line 1583, offset 0x800942a8
	/* begin block 1 */
		// Start line: 1584
		// Start offset: 0x800942A8
	/* end block 1 */
	// End offset: 0x800942D4
	// End Line: 1588

	/* begin block 2 */
		// Start line: 3480
	/* end block 2 */
	// End Line: 3481

int GetFrNum__C12CCreatureHdriii(CCreatureHdr *this,int Action,int Direction,int Frame)

{
	CCreatureAction *this_00;
	int iVar1;
	
	this_00 = GetAction__C12CCreatureHdri(this,Action);
	iVar1 = GetFrNum__C15CCreatureActionii(this_00,Direction,Frame);
	return iVar1;
}



// decompiled code
// original method signature: 
// struct CCreatureAction * /*$ra*/ GetAction__C12CCreatureHdri(struct CCreatureHdr *this /*$s0*/, int ActNum /*$s2*/)
 // line 1591, offset 0x800942ec
	/* begin block 1 */
		// Start line: 1592
		// Start offset: 0x800942EC
		// Variables:
	// 		struct CCreatureAction *CAct; // $s1

		/* begin block 1.1 */
			// Start line: 1593
			// Start offset: 0x80094334
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x8009435C
		// End Line: 1598
	/* end block 1 */
	// End offset: 0x80094360
	// End Line: 1600

	/* begin block 2 */
		// Start line: 3496
	/* end block 2 */
	// End Line: 3497

CCreatureAction * GetAction__C12CCreatureHdri(CCreatureHdr *this,int ActNum)

{
	int iVar1;
	int iVar2;
	CCreatureAction *this_00;
	
	if ((ActNum < 0) || (this->NumOfActions < ActNum)) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x638);
	}
	this_00 = &this->Cr;
	iVar2 = 0;
	if (0 < ActNum) {
		do {
			iVar1 = GetSize__C15CCreatureAction(this_00);
			this_00 = (CCreatureAction *)((int)&this_00->BaseFrame + iVar1);
			iVar2 = iVar2 + 1;
		} while (iVar2 < ActNum);
	}
	return this_00;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this /*$s2*/)
 // line 1603, offset 0x8009437c
	/* begin block 1 */
		// Start line: 1604
		// Start offset: 0x8009437C
		// Variables:
	// 		struct CCreatureAction *CAct; // $s1

		/* begin block 1.1 */
			// Start line: 1604
			// Start offset: 0x8009437C
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x800943D0
		// End Line: 1611
	/* end block 1 */
	// End offset: 0x800943D0
	// End Line: 1611

	/* begin block 2 */
		// Start line: 3520
	/* end block 2 */
	// End Line: 3521

void InitActionDirRemaps__12CCreatureHdr(CCreatureHdr *this)

{
	int iVar1;
	int iVar2;
	CCreatureAction *this_00;
	
	this_00 = &this->Cr;
	iVar2 = 0;
	if (0 < this->NumOfActions) {
		do {
			InitDirRemap__15CCreatureAction(this_00);
			iVar1 = GetSize__C15CCreatureAction(this_00);
			this_00 = (CCreatureAction *)((int)&this_00->BaseFrame + iVar1);
			iVar2 = iVar2 + 1;
		} while (iVar2 < this->NumOfActions);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSize__C12CCreatureHdr(struct CCreatureHdr *this /*$a0*/)
 // line 1616, offset 0x800943ec
	/* begin block 1 */
		// Start line: 1617
		// Start offset: 0x800943EC
		// Variables:
	// 		int Size; // $s2
	// 		struct CCreatureAction *CAct; // $s1

		/* begin block 1.1 */
			// Start line: 1617
			// Start offset: 0x800943EC
			// Variables:
		// 		int f; // $s0

			/* begin block 1.1.1 */
				// Start line: 1622
				// Start offset: 0x80094414
				// Variables:
			// 		int ThisSize; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80094420
			// End Line: 1624
		/* end block 1.1 */
		// End offset: 0x80094438
		// End Line: 1627
	/* end block 1 */
	// End offset: 0x80094438
	// End Line: 1628

	/* begin block 2 */
		// Start line: 3547
	/* end block 2 */
	// End Line: 3548

int GetSize__C12CCreatureHdr(CCreatureHdr *this)

{
	int iVar1;
	int iVar2;
	CCreatureAction *this_00;
	int iVar3;
	int iVar4;
	
	iVar4 = this->NumOfActions;
	iVar3 = 4;
	this_00 = &this->Cr;
	iVar2 = 0;
	while (iVar2 < iVar4) {
		iVar1 = GetSize__C15CCreatureAction(this_00);
		this_00 = (CCreatureAction *)((int)&this_00->BaseFrame + iVar1);
		iVar3 = iVar3 + iVar1;
		iVar2 = iVar2 + 1;
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this /*$s0*/, long hnd /*$s3*/, int size /*$s2*/)
 // line 1635, offset 0x80094458
	/* begin block 1 */
		// Start line: 1636
		// Start offset: 0x80094458
		// Variables:
	// 		char FName[13]; // stack offset -40
	// 		unsigned char *Dest; // $s0
	// 		struct FileIO *MyFileIO; // $s1
	/* end block 1 */
	// End offset: 0x8009456C
	// End Line: 1657

	/* begin block 2 */
		// Start line: 3599
	/* end block 2 */
	// End Line: 3600

void LoadDat__C13CTextFileInfoli(CTextFileInfo *this,long hnd,int size)

{
	uchar uVar1;
	void *pvVar2;
	size_t sVar3;
	FileIO *this_00;
	int iVar4;
	uchar *Dest;
	char acStack40 [16];
	
	pvVar2 = HasDat__C13CTextFileInfo(this);
	if (pvVar2 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x669);
	}
	sVar3 = strlen(this->FileName);
	if (8 < sVar3) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x66a);
	}
	MakeFname__C13CTextFileInfoPcPCc(this,acStack40,&DAT_8011acf0);
	this_00 = SYSI_GetFs__Fv();
	iVar4 = FileLen__6FileIOPCc(this_00,acStack40);
	if (size < iVar4) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x672);
	}
	Dest = (uchar *)GAL_Lock(hnd);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x675);
	}
	ReadAtAddr__6FileIOPCcPUci(this_00,acStack40,Dest,-1);
	uVar1 = GAL_Unlock(hnd);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x678);
	}
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LoadDat__C13CTextFileInfo(struct CTextFileInfo *this /*$s0*/)
 // line 1661, offset 0x8009458c
	/* begin block 1 */
		// Start line: 1662
		// Start offset: 0x8009458C
	/* end block 1 */
	// End offset: 0x800945D0
	// End Line: 1664

	/* begin block 2 */
		// Start line: 3651
	/* end block 2 */
	// End Line: 3652

long LoadDat__C13CTextFileInfo(CTextFileInfo *this)

{
	void *pvVar1;
	long lVar2;
	
	pvVar1 = HasDat__C13CTextFileInfo(this);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x67e);
	}
	lVar2 = GetFile__C13CTextFileInfoPcUl(this,&DAT_8011acf0,1);
	return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 1667, offset 0x800945e4
	/* begin block 1 */
		// Start line: 1668
		// Start offset: 0x800945E4
	/* end block 1 */
	// End offset: 0x800945FC
	// End Line: 1669

	/* begin block 2 */
		// Start line: 3663
	/* end block 2 */
	// End Line: 3664

long LoadHdr__C13CTextFileInfo(CTextFileInfo *this)

{
	long lVar1;
	
	lVar1 = GetFile__C13CTextFileInfoPcUl(this,&DAT_8011ad14,(ulong)&DAT_00008001);
	return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this /*$a0*/, char *Dest /*$s0*/, char *Ext /*$s1*/)
 // line 1672, offset 0x8009460c
	/* begin block 1 */
		// Start line: 1673
		// Start offset: 0x8009460C
	/* end block 1 */
	// End offset: 0x8009463C
	// End Line: 1675

	/* begin block 2 */
		// Start line: 3673
	/* end block 2 */
	// End Line: 3674

void MakeFname__C13CTextFileInfoPcPCc(CTextFileInfo *this,char *Dest,char *Ext)

{
	strcpy(Dest,this->FileName);
	strcat(Dest,Ext);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this /*$s0*/, char *Ext /*$s1*/, unsigned long RamId /*$s2*/)
 // line 1678, offset 0x80094654
	/* begin block 1 */
		// Start line: 1679
		// Start offset: 0x80094654
		// Variables:
	// 		char FName[13]; // stack offset -32
	// 		long hnd; // $s0
	/* end block 1 */
	// End offset: 0x800946D8
	// End Line: 1692

	/* begin block 2 */
		// Start line: 3686
	/* end block 2 */
	// End Line: 3687

long GetFile__C13CTextFileInfoPcUl(CTextFileInfo *this,char *Ext,ulong RamId)

{
	size_t sVar1;
	FileIO *this_00;
	long Hnd;
	char acStack32 [16];
	
	sVar1 = strlen(this->FileName);
	if (8 < sVar1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x691);
	}
	MakeFname__C13CTextFileInfoPcPCc(this,acStack32,Ext);
	this_00 = SYSI_GetFs__Fv();
	Hnd = Read__6FileIOPCcUl(this_00,acStack32,RamId);
	GAL_SetMemName(Hnd,acStack32);
	return Hnd;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this /*$s0*/, char *Ext /*$s1*/)
 // line 1696, offset 0x800946f4
	/* begin block 1 */
		// Start line: 1697
		// Start offset: 0x800946F4
		// Variables:
	// 		char FName[13]; // stack offset -32
	// 		struct FileIO *MyFileIO; // $s0
	/* end block 1 */
	// End offset: 0x80094770
	// End Line: 1712

	/* begin block 2 */
		// Start line: 3725
	/* end block 2 */
	// End Line: 3726

void * HasFile__C13CTextFileInfoPc(CTextFileInfo *this,char *Ext)

{
	FileIO *this_00;
	undefined *puVar1;
	int iVar2;
	char acStack32 [16];
	
	this_00 = SYSI_GetFs__Fv();
	strcpy(acStack32,this->FileName);
	strcat(acStack32,Ext);
	if ((FileSYS == 2) &&
		 (puVar1 = (undefined *)BL_FileExists__FPcc(acStack32,'\x01'), puVar1 != &DAT_00000001)) {
		return (void *)0x0;
	}
	iVar2 = FileLen__6FileIOPCc(this_00,acStack32);
	return (void *)((uint)(iVar2 + 1U < 2) ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Un64__FPUcT0l(unsigned char *Src /*$a0*/, unsigned char *Dest /*$a1*/, long SizeBytes /*$a2*/)
 // line 1743, offset 0x80094788
	/* begin block 1 */
		// Start line: 1744
		// Start offset: 0x80094788
		// Variables:
	// 		unsigned char *EndDest; // $t1
	// 		unsigned long *BigDest; // $a3
	// 		unsigned long Code; // $t0
	// 		unsigned long Run; // $a2
	// 		unsigned long BigCode; // $v1
	/* end block 1 */
	// End offset: 0x80094854
	// End Line: 1786

	/* begin block 2 */
		// Start line: 3825
	/* end block 2 */
	// End Line: 3826

void Un64__FPUcT0l(uchar *Src,uchar *Dest,long SizeBytes)

{
	byte bVar1;
	byte *pbVar2;
	uint uVar3;
	uint *puVar4;
	uint uVar5;
	uint *puVar6;
	
	puVar6 = (uint *)(Dest + SizeBytes);
	if (Dest < puVar6) {
		do {
			uVar5 = (uint)*Src;
			bVar1 = *Src >> 6;
			pbVar2 = Src + 1;
			if (bVar1 == 0) {
				bVar1 = *pbVar2;
				pbVar2 = Src + 2;
			}
			else {
				uVar5 = uVar5 & 0x3f;
			}
			uVar3 = (uint)bVar1;
			if (7 < bVar1) {
				puVar4 = (uint *)((uint)((int)Dest + 3U) & 0xfffffffc);
				while (Dest < puVar4) {
					*Dest = (char)uVar5;
					Dest = (uchar *)((int)Dest + 1);
					uVar3 = uVar3 - 1;
				}
				while (Dest = (uchar *)puVar4, 3 < uVar3) {
					*puVar4 = uVar5 | uVar5 << 8 | uVar5 << 0x10 | uVar5 << 0x18;
					uVar3 = uVar3 - 4;
					puVar4 = puVar4 + 1;
				}
			}
			while (uVar3 != 0) {
				*Dest = (char)uVar5;
				uVar3 = uVar3 - 1;
				Dest = (uchar *)((int)Dest + 1);
			}
			Src = pbVar2;
		} while (Dest < puVar6);
	}
	return;
}



// decompiled code
// original method signature: 
// struct CScreen * /*$ra*/ __7CScreen(struct CScreen *this /*$s0*/)
 // line 1799, offset 0x8009485c
	/* begin block 1 */
		// Start line: 1800
		// Start offset: 0x8009485C
	/* end block 1 */
	// End offset: 0x8009485C
	// End Line: 1800

	/* begin block 2 */
		// Start line: 3931
	/* end block 2 */
	// End Line: 3932

CScreen * __7CScreen(CScreen *this)

{
	__7TextDat((TextDat *)this);
	this->LoadedId = -1;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7CScreeniii(struct CScreen *this /*$s1*/, int Id /*$s3*/, int tpx /*$s2*/, int tpy /*$s4*/)
 // line 1804, offset 0x80094890
	/* begin block 1 */
		// Start line: 1805
		// Start offset: 0x80094890
		// Variables:
	// 		unsigned char r; // $t0
	// 		unsigned char g; // $a1
	// 		unsigned char b; // $a2

		/* begin block 1.1 */
			// Start line: 1805
			// Start offset: 0x80094890

			/* begin block 1.1.1 */
				// Start line: 1809
				// Start offset: 0x800948C8
				// Variables:
			// 		struct FRAME_HDR *Fr; // $s0
			// 		struct RECT R; // stack offset -544
			// 		struct PAL *Pal; // $s2
			// 		unsigned short MyPal[256]; // stack offset -536

				/* begin block 1.1.1.1 */
					// Start line: 1845
					// Start offset: 0x80094A10
					// Variables:
				// 		int i; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x80094A38
				// End Line: 1845

				/* begin block 1.1.1.2 */
					// Start line: 1847
					// Start offset: 0x80094A38
					// Variables:
				// 		int i; // $s0
				// 		int i; // $a1

					/* begin block 1.1.1.2.1 */
						// Start line: 1847
						// Start offset: 0x80094A40
						// Variables:
					// 		int nocols; // $t3

						/* begin block 1.1.1.2.1.1 */
							// Start line: 1849
							// Start offset: 0x80094A4C
							// Variables:
						// 		int v; // $t2

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 1850
								// Start offset: 0x80094A58
								// Variables:
							// 		unsigned short c; // $v0
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x80094AB4
							// End Line: 1859
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80094ADC
						// End Line: 1860
					/* end block 1.1.1.2.1 */
					// End offset: 0x80094ADC
					// End Line: 1861
				/* end block 1.1.1.2 */
				// End offset: 0x80094B08
				// End Line: 1863

				/* begin block 1.1.1.3 */
					// Start line: 1865
					// Start offset: 0x80094B08
				/* end block 1.1.1.3 */
				// End offset: 0x80094B80
				// End Line: 1883
			/* end block 1.1.1 */
			// End offset: 0x80094B80
			// End Line: 1883
		/* end block 1.1 */
		// End offset: 0x80094B80
		// End Line: 1883
	/* end block 1 */
	// End offset: 0x80094B80
	// End Line: 1883

	/* begin block 2 */
		// Start line: 3941
	/* end block 2 */
	// End Line: 3942

void Load__7CScreeniii(CScreen *this,int Id,int tpx,int tpy)

{
	uint *puVar1;
	ushort uVar2;
	uchar uVar3;
	FRAME_HDR *Fr;
	PAL *pPVar4;
	uint uVar5;
	RECT *pRVar6;
	uint uVar7;
	PAL *pPVar8;
	uint uVar9;
	int Handle;
	ushort uVar10;
	int iVar11;
	RECT local_220;
	undefined local_218 [512];
	
	if (Id != this->LoadedId) {
		if (Id != -1) {
			DumpData__7TextDat((TextDat *)this);
		}
		if (FeFlag != '\0') {
			CDWAIT = &DAT_00000001;
		}
		SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,(CTextFileInfo *)TX_DatTab[Id],-1);
		Use__7TextDatlbi((TextDat *)this,-1,&DAT_00000001,0);
		Fr = GetFr__7TextDati((TextDat *)this,0);
		if ((Fr->X & 0x4000000U) != 0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x71b);
		}
		DecompFrame__7TextDatP9FRAME_HDR((TextDat *)this,Fr);
		if (tpx == 0xb) {
			local_220.x = 0x2c0;
			local_220.w = 0xa0;
		}
		else {
			local_220.x = (short)(tpx << 6);
			local_220.w = 0x80;
		}
		local_220.y = (short)tpy;
		local_220.h = 0xf0;
		GPUQ_LoadImage__FP4RECTli(&local_220,(this->TextDat).hndDecompBuffer,0);
		GPUQ_FlushQ__Fv();
		pPVar4 = GetPal__7TextDati((TextDat *)this,0);
		local_220.y = 0xf0;
		local_220.w = 0x100;
		local_220.x = 0;
		local_220.h = 1;
		LoadImage(&local_220,&pPVar4->NumOfCols);
		if ((pPVar4->InVram & 1) != 0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x730);
		}
		Handle = 0;
		pRVar6 = &local_220;
		pPVar8 = pPVar4;
		do {
			puVar1 = &pPVar8->NumOfCols;
			pPVar8 = (PAL *)((int)&pPVar8->InVram + 2);
			Handle = Handle + 1;
			pRVar6[1].x = *(short *)puVar1;
			pRVar6 = (RECT *)&pRVar6->y;
		} while (Handle < 0x100);
		Handle = 0;
		while (iVar11 = 0, Handle < 0x10) {
			uVar5 = pPVar4->InVram;
			pRVar6 = &local_220;
			while (iVar11 < (int)(uVar5 >> 1)) {
				uVar2 = pRVar6[1].x;
				uVar10 = uVar2 & 0x1f;
				uVar7 = (uint)(uVar2 >> 5) & 0x1f;
				uVar9 = (uint)(uVar2 >> 10) & 0x1f;
				if ((uVar2 & 0x1f) != 0) {
					uVar10 = uVar10 - 1;
				}
				if ((uVar2 >> 5 & 0x1f) != 0) {
					uVar7 = uVar7 - 1;
				}
				if ((uVar2 >> 10 & 0x1f) != 0) {
					uVar9 = uVar9 - 1;
				}
				pRVar6[1].x = uVar10 & 0xff | (ushort)((uVar7 & 0xff) << 5) | (ushort)((uVar9 & 0xff) << 10)
				;
				pRVar6 = (RECT *)&pRVar6->y;
				iVar11 = iVar11 + 1;
			}
			local_220.y = (short)Handle + 0xf0;
			local_220.w = 0x100;
			local_220.x = 0;
			local_220.h = 1;
			LoadImage(&local_220,local_218);
			Handle = Handle + 1;
		}
		Handle = (this->TextDat).hndDat;
		CDWAIT = (void *)0x0;
		this->LoadedId = Id;
		if (Handle != -1) {
			uVar3 = GAL_Free(Handle);
			if (uVar3 == '\0') {
				DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x751);
			}
			(this->TextDat).hndDat = -1;
		}
		Handle = (this->TextDat).hndDecompBuffer;
		if (Handle != -1) {
			uVar3 = GAL_Free(Handle);
			if (uVar3 == '\0') {
				DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x758);
			}
			(this->TextDat).hndDecompBuffer = -1;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Unload__7CScreen(struct CScreen *this /*$a0*/)
 // line 1891, offset 0x80094ba4
	/* begin block 1 */
		// Start line: 1892
		// Start offset: 0x80094BA4
	/* end block 1 */
	// End offset: 0x80094BB8
	// End Line: 1894

	/* begin block 2 */
		// Start line: 4126
	/* end block 2 */
	// End Line: 4127

void Unload__7CScreen(CScreen *this)

{
	this->LoadedId = -1;
	DumpData__7TextDat((TextDat *)this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Display__7CScreeniiii(struct CScreen *this /*$a0*/, int Id /*$a1*/, int tpx /*$s1*/, int tpy /*$s4*/, int fadeval /*stack 16*/)
 // line 1897, offset 0x80094bc8
	/* begin block 1 */
		// Start line: 1898
		// Start offset: 0x80094BC8
		// Variables:
	// 		struct POLY_FT4 *FT4; // stack offset -40
	/* end block 1 */
	// End offset: 0x80094E80
	// End Line: 1927

	/* begin block 2 */
		// Start line: 4139
	/* end block 2 */
	// End Line: 4140

void Display__7CScreeniiii(CScreen *this,int Id,int tpx,int tpy,int fadeval)

{
	ulong *puVar1;
	ushort uVar2;
	short sVar3;
	POLY_FT4 *local_28 [2];
	
	if (Id != this->LoadedId) {
		Load__7CScreeniii(this,Id,tpx,tpy);
	}
	PRIM_GetPrim__FPP8POLY_FT4(local_28);
	*(undefined *)((int)&local_28[0]->tag + 3) = 9;
	local_28[0]->code = ',';
	local_28[0]->code = local_28[0]->code & 0xfd;
	local_28[0]->code = local_28[0]->code | 1;
	sVar3 = 0x140;
	if (tpx == 0xb) {
		sVar3 = 0x100;
	}
	local_28[0]->x0 = 0;
	local_28[0]->y0 = 0;
	local_28[0]->x1 = sVar3;
	local_28[0]->y1 = 0;
	local_28[0]->x2 = 0;
	local_28[0]->y2 = 0xf0;
	local_28[0]->x3 = sVar3;
	local_28[0]->y3 = 0xf0;
	local_28[0]->u0 = '\0';
	local_28[0]->v0 = '\0';
	local_28[0]->u1 = -1;
	local_28[0]->v1 = '\0';
	local_28[0]->u2 = '\0';
	local_28[0]->v2 = -0x10;
	local_28[0]->u3 = -1;
	local_28[0]->v3 = -0x10;
	uVar2 = GetTPage(1,0,tpx << 6,tpy);
	local_28[0]->tpage = uVar2;
	uVar2 = GetClut(0,fadeval + 0xf0);
	puVar1 = ThisOt;
	local_28[0]->clut = uVar2;
	local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar1 & 0xffffff;
	*puVar1 = *puVar1 & 0xff000000 | (uint)local_28[0] & 0xffffff;
	if (tpx == 0xb) {
		PRIM_GetPrim__FPP8POLY_FT4(local_28);
		*(undefined *)((int)&local_28[0]->tag + 3) = 9;
		local_28[0]->code = ',';
		local_28[0]->code = local_28[0]->code & 0xfd;
		local_28[0]->code = local_28[0]->code | 1;
		local_28[0]->x0 = 0xff;
		local_28[0]->y0 = 0;
		local_28[0]->x1 = 0x140;
		local_28[0]->y1 = 0;
		local_28[0]->x2 = 0xff;
		local_28[0]->u0 = '\0';
		local_28[0]->y2 = 0xf0;
		local_28[0]->x3 = 0x140;
		local_28[0]->y3 = 0xf0;
		local_28[0]->v0 = '\0';
		local_28[0]->u1 = '@';
		local_28[0]->v1 = '\0';
		local_28[0]->u2 = '\0';
		local_28[0]->v2 = -0x10;
		local_28[0]->u3 = '@';
		local_28[0]->v3 = -0x10;
		uVar2 = GetTPage(1,0,0x340,tpy);
		local_28[0]->tpage = uVar2;
		uVar2 = GetClut(0,fadeval + 0xf0);
		puVar1 = ThisOt;
		local_28[0]->clut = uVar2;
		local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar1 & 0xffffff;
		*puVar1 = *puVar1 & 0xff000000 | (uint)local_28[0] & 0xffffff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRect__5CPartR7TextDatR4RECT(struct CPart *this /*$s0*/, struct TextDat *TDat /*$a1*/, struct RECT *R /*$s1*/)
 // line 1934, offset 0x80094ea8
	/* begin block 1 */
		// Start line: 1935
		// Start offset: 0x80094EA8
		// Variables:
	// 		struct FRAME_HDR *Fr; // $v0
	/* end block 1 */
	// End offset: 0x80094F0C
	// End Line: 1943

	/* begin block 2 */
		// Start line: 4227
	/* end block 2 */
	// End Line: 4228

void SetRect__5CPartR7TextDatR4RECT(CPart *this,TextDat *TDat,RECT *R)

{
	FRAME_HDR *pFVar1;
	
	pFVar1 = GetFr__7TextDati(TDat,this->Piece);
	R->x = this->X;
	R->y = -this->Y;
	R->w = (ushort)pFVar1->Y & 0x1ff;
	R->h = (ushort)((uint)pFVar1->Y >> 9) & 0x1ff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this /*$s3*/, struct TextDat *TDat /*$s7*/, struct RECT *R /*$fp*/)
 // line 1946, offset 0x80094f24
	/* begin block 1 */
		// Start line: 1947
		// Start offset: 0x80094F24
		// Variables:
	// 		int left; // $s2
	// 		int right; // $s6
	// 		int top; // $s1
	// 		int bottom; // $s5

		/* begin block 1.1 */
			// Start line: 1947
			// Start offset: 0x80094F24

			/* begin block 1.1.1 */
				// Start line: 1953
				// Start offset: 0x80094F68
				// Variables:
			// 		struct RECT Pr; // stack offset -56

				/* begin block 1.1.1.1 */
					// Start line: 1953
					// Start offset: 0x80094F68
					// Variables:
				// 		unsigned int f; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8009501C
				// End Line: 1978
			/* end block 1.1.1 */
			// End offset: 0x8009501C
			// End Line: 1978
		/* end block 1.1 */
		// End offset: 0x80095034
		// End Line: 1985
	/* end block 1 */
	// End offset: 0x8009504C
	// End Line: 1991

	/* begin block 2 */
		// Start line: 4254
	/* end block 2 */
	// End Line: 4255

void GetBoundingBox__6CBlockR7TextDatR4RECT(CBlock *this,TextDat *TDat,RECT *R)

{
	short sVar1;
	int iVar2;
	int iVar3;
	uint uVar4;
	short sVar5;
	int iVar6;
	short sVar7;
	int iVar8;
	int iVar9;
	short sVar10;
	int iVar11;
	int iVar12;
	RECT local_38 [2];
	
	if (this->NumOfParts == 0) {
		sVar7 = 0;
		sVar1 = 0;
		sVar5 = 0;
		sVar10 = 0;
	}
	else {
		SetRect__5CPartR7TextDatR4RECT(this->Parts,TDat,local_38);
		uVar4 = 0;
		iVar8 = (int)local_38[0].x;
		iVar6 = (int)local_38[0].y;
		iVar12 = iVar8 + (int)local_38[0].w;
		sVar1 = (short)iVar12;
		iVar11 = iVar6 + (int)local_38[0].h;
		sVar10 = (short)iVar11;
		sVar7 = local_38[0].x;
		sVar5 = local_38[0].y;
		if (this->NumOfParts != 0) {
			iVar9 = 4;
			do {
				SetRect__5CPartR7TextDatR4RECT((CPart *)((int)&this->NumOfParts + iVar9),TDat,local_38);
				iVar3 = (int)local_38[0].x;
				if (iVar12 < iVar3 + (int)local_38[0].w) {
					iVar12 = iVar3 + (int)local_38[0].w;
				}
				iVar2 = (int)local_38[0].y;
				if (iVar11 < iVar2 + (int)local_38[0].h) {
					iVar11 = iVar2 + (int)local_38[0].h;
				}
				sVar10 = (short)iVar11;
				if (iVar3 < iVar8) {
					iVar8 = iVar3;
				}
				sVar7 = (short)iVar8;
				if (iVar2 < iVar6) {
					iVar6 = iVar2;
				}
				sVar5 = (short)iVar6;
				uVar4 = uVar4 + 1;
				iVar9 = iVar9 + 8;
			} while (uVar4 < this->NumOfParts);
			sVar1 = (short)iVar12 - sVar7;
			goto LAB_80095038;
		}
	}
	sVar1 = sVar1 - sVar7;
LAB_80095038:
	R->w = sVar1;
	R->x = sVar7;
	R->y = sVar5;
	R->h = sVar10 - sVar5;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.DatPool()
 // line 2021, offset 0x80095080
	/* begin block 1 */
		// Start line: 2022
		// Start offset: 0x80095080
	/* end block 1 */
	// End offset: 0x800950C0
	// End Line: 2022

	/* begin block 2 */
		// Start line: 4413
	/* end block 2 */
	// End Line: 4414

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_DatPool(void)

{
	bool bVar1;
	TextDat *this;
	
	this = &TextDat_800b93e4;
	do {
		___7TextDat(this,2);
		bVar1 = this != &DatPool;
		this = (TextDat *)&this[-1].hndBlockOffsets;
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.DatPool()
 // line 2021, offset 0x800950d8
	/* begin block 1 */
		// Start line: 2022
		// Start offset: 0x800950D8
	/* end block 1 */
	// End offset: 0x80095110
	// End Line: 2022

	/* begin block 2 */
		// Start line: 4413
	/* end block 2 */
	// End Line: 4414

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_DatPool(void)

{
	int iVar1;
	TextDat *this;
	
	this = &DatPool;
	iVar1 = 0x13;
	do {
		__7TextDat(this);
		iVar1 = iVar1 + -1;
		this = this + 1;
	} while (iVar1 != -1);
	return;
}





