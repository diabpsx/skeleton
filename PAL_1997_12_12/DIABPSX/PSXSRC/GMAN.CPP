#include "THISDUST.H"
#include "GMAN.H"


// decompiled code
// original method signature: 
// struct TextDat * /*$ra*/ __7TextDat(struct TextDat *this /*$s0*/)
 // line 112, offset 0x8007e18c
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x8007E18C
	/* end block 1 */
	// End offset: 0x8007E18C
	// End Line: 113

	/* begin block 2 */
		// Start line: 224
	/* end block 2 */
	// End Line: 225

TextDat * __7TextDat(TextDat *this)

{
	this->DecX = -1;
	this->DecY = -1;
	this->PalX = -1;
	this->PalY = -1;
	InitData__7TextDat(this);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7TextDat(struct TextDat *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 128, offset 0x8007e1cc
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x8007E1CC
	/* end block 1 */
	// End offset: 0x8007E1CC
	// End Line: 129

	/* begin block 2 */
		// Start line: 257
	/* end block 2 */
	// End Line: 258

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
// void /*$ra*/ Use__7TextDat(struct TextDat *this /*$s1*/)
 // line 139, offset 0x8007e214
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x8007E214

		/* begin block 1.1 */
			// Start line: 140
			// Start offset: 0x8007E214

			/* begin block 1.1.1 */
				// Start line: 142
				// Start offset: 0x8007E23C
				// Variables:
			// 		char NameBuff[40]; // stack offset -64

				/* begin block 1.1.1.1 */
					// Start line: 183
					// Start offset: 0x8007E35C

					/* begin block 1.1.1.1.1 */
						// Start line: 184
						// Start offset: 0x8007E370
						// Variables:
					// 		struct RECT R; // stack offset -24
					// 		int DecompSize; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007E3DC
					// End Line: 193
				/* end block 1.1.1.1 */
				// End offset: 0x8007E3DC
				// End Line: 193
			/* end block 1.1.1 */
			// End offset: 0x8007E3DC
			// End Line: 193
		/* end block 1.1 */
		// End offset: 0x8007E3DC
		// End Line: 193
	/* end block 1 */
	// End offset: 0x8007E3EC
	// End Line: 198

	/* begin block 2 */
		// Start line: 279
	/* end block 2 */
	// End Line: 280

void Use__7TextDat(TextDat *this)

{
	long Handle;
	SPR_HDR *pSVar1;
	void *pvVar2;
	char *Name;
	RECT RStack24;
	
	if (this->Loaded == (void *)0x0) {
		Handle = LoadHdr__C13CTextFileInfo(this->FileInfo);
		this->hndHdr = Handle;
		pSVar1 = (SPR_HDR *)GAL_Lock(Handle);
		this->Hdr = pSVar1;
		if (pSVar1 == (SPR_HDR *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x95);
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
		if ((pvVar2 != (void *)0x0) && (this->Hdr->DecompOffset != 0)) {
			Handle = GAL_Alloc(0xa0,1,&DAT_8012a794);
			this->hndDecompArrays = Handle;
			if (Handle == -1) {
				DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0xa9);
			}
			this->Scr = 0;
			this->NumOfBuffers[0] = 0;
			this->NumOfBuffers[1] = 0;
			DEC_AddAsDecRequestor__FP7TextDat(this);
		}
		pvVar2 = HasDat__C13CTextFileInfo(this->FileInfo);
		if (pvVar2 != (void *)0x0) {
			Handle = LoadDat__C13CTextFileInfo(this->FileInfo);
			this->hndDat = Handle;
			this->hndDecompBuffer = -1;
			FindDecompArea__7TextDatR4RECT(this,&RStack24);
			Name = GetName__C13CTextFileInfo(this->FileInfo);
			Handle = GAL_Alloc((int)RStack24.w * (int)RStack24.h,1,Name);
			this->hndDecompBuffer = Handle;
			if (Handle == -1) {
				DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0xc0);
			}
		}
	}
	this->LoadCount = this->LoadCount + 1;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TpLoadCallBack__FPUciib(unsigned char *Mem /*$s1*/, int ReadSoFar /*$a1*/, int Size /*$a2*/, void * LastChunk /*$a3*/)
 // line 215, offset 0x8007e408
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x8007E408
		// Variables:
	// 		static int TpX; // offset 0x8012bfd0
	// 		static int TpY; // offset 0x8012bfd4

		/* begin block 1.1 */
			// Start line: 226
			// Start offset: 0x8007E428
			// Variables:
		// 		int f; // $s0

			/* begin block 1.1.1 */
				// Start line: 226
				// Start offset: 0x8007E42C
				// Variables:
			// 		int Dx; // $v1
			// 		int Dy; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8007E4AC
			// End Line: 239
		/* end block 1.1 */
		// End offset: 0x8007E4B4
		// End Line: 241
	/* end block 1 */
	// End offset: 0x8007E4C0
	// End Line: 244

	/* begin block 2 */
		// Start line: 451
	/* end block 2 */
	// End Line: 452

void * TpLoadCallBack__FPUciib(uchar *Mem,int ReadSoFar,int Size,void *LastChunk)

{
	int iVar1;
	
	if (ReadSoFar == 0) {
		TpX_78 = 0;
		TpY_79 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 0x10) {
		R.w = 0x40;
		R.h = 1;
		R.x = (short)TpX_78 * 0x40 + (short)TpXDest;
		R.y = (short)TpY_79 + (short)TpYDest;
		LoadImage((short *)&R,Mem);
		TpX_78 = (TpX_78 + 1) % TpW;
		Mem = Mem + 0x80;
		if (TpX_78 == 0) {
			TpY_79 = TpY_79 + 1;
		}
		iVar1 = iVar1 + 1;
	}
	DrawSync(0);
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StreamLoadTP__7TextDat(struct TextDat *this /*$s0*/)
 // line 246, offset 0x8007e4d8
	/* begin block 1 */
		// Start line: 247
		// Start offset: 0x8007E4D8
		// Variables:
	// 		char TheName[20]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8007E57C
	// End Line: 271

	/* begin block 2 */
		// Start line: 520
	/* end block 2 */
	// End Line: 521

void StreamLoadTP__7TextDat(TextDat *this)

{
	char *__src;
	FileIO *this_00;
	char acStack32 [24];
	
	__src = GetName__C13CTextFileInfo(this->FileInfo);
	strcpy(acStack32,__src);
	strcat(acStack32,(char *)&PTR_DAT_8012a788);
	this_00 = SYSI_GetFs__Fv();
	TpW = ZEXT14(*(byte *)&this->Hdr->NumOfPals);
	TpXDest = (this->Hdr->DestTPage & 0xf) << 6;
	TpH = ZEXT14(*(byte *)((int)&this->Hdr->NumOfPals + 1));
	TpYDest = (this->Hdr->DestTPage >> 4) << 8;
	StreamFile__6FileIOPCciPFPUciib_bii(this_00,acStack32,0x800,TpLoadCallBack__FPUciib,0,-1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishedUsing__7TextDat(struct TextDat *this /*$s0*/)
 // line 285, offset 0x8007e590
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x8007E590
	/* end block 1 */
	// End offset: 0x8007E5D8
	// End Line: 299

	/* begin block 2 */
		// Start line: 654
	/* end block 2 */
	// End Line: 655

void FinishedUsing__7TextDat(TextDat *this)

{
	int iVar1;
	void *pvVar2;
	
	iVar1 = this->LoadCount + -1;
	this->LoadCount = iVar1;
	if (iVar1 == 0) {
		pvVar2 = HasDat__C13CTextFileInfo(this->FileInfo);
		if (pvVar2 != (void *)0x0) {
			DEC_RemoveAsDecRequestor__FP7TextDat(this);
		}
		DumpData__7TextDat(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeBlockOffsetTab__7TextDat(struct TextDat *this /*$s0*/)
 // line 309, offset 0x8007e5ec
	/* begin block 1 */
		// Start line: 310
		// Start offset: 0x8007E5EC

		/* begin block 1.1 */
			// Start line: 310
			// Start offset: 0x8007E5EC

			/* begin block 1.1.1 */
				// Start line: 312
				// Start offset: 0x8007E614
			/* end block 1.1.1 */
			// End offset: 0x8007E648
			// End Line: 317
		/* end block 1.1 */
		// End offset: 0x8007E648
		// End Line: 317
	/* end block 1 */
	// End offset: 0x8007E648
	// End Line: 317

	/* begin block 2 */
		// Start line: 702
	/* end block 2 */
	// End Line: 703

void MakeBlockOffsetTab__7TextDat(TextDat *this)

{
	long Handle;
	int *piVar1;
	
	if (this->Hdr->ComponentOffset != 0) {
		Handle = MakeOffsetTab__C9CBlockHdr((CBlockHdr *)this->Blocks);
		this->hndBlockOffsets = Handle;
		piVar1 = (int *)GAL_Lock(Handle);
		this->BlockOffsets = piVar1;
		if (piVar1 == (int *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x13c);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this /*$s6*/)
 // line 321, offset 0x8007e65c
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x8007E65C
		// Variables:
	// 		long hndRet; // $s5
	// 		struct CBlock *MyBlock; // $s2
	// 		int *Tab; // $s3

		/* begin block 1.1 */
			// Start line: 333
			// Start offset: 0x8007E6FC
			// Variables:
		// 		unsigned int f; // $s0
		/* end block 1.1 */
		// End offset: 0x8007E730
		// End Line: 339
	/* end block 1 */
	// End offset: 0x8007E75C
	// End Line: 344

	/* begin block 2 */
		// Start line: 726
	/* end block 2 */
	// End Line: 727

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
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x146);
	}
	Handle = GAL_Alloc(uVar4 << 2,1,&DAT_8012a79c);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x149);
	}
	ppCVar5 = (CBlock **)GAL_Lock(Handle);
	if (ppCVar5 == (CBlock **)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x14c);
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
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x155);
	}
	return Handle;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this /*$a0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_FT4 *FT4 /*$a2*/, int XFlip /*$a3*/, int YFlip /*stack 16*/)
 // line 353, offset 0x8007e788
	/* begin block 1 */
		// Start line: 354
		// Start offset: 0x8007E788
		// Variables:
	// 		int Rotated; // $v0
	// 		int Tpage; // $t4
	// 		int U; // $v1
	// 		int V; // $t1
	// 		int W; // $t0
	// 		int H; // $t2
	/* end block 1 */
	// End offset: 0x8007E87C
	// End Line: 412

	/* begin block 2 */
		// Start line: 801
	/* end block 2 */
	// End Line: 802

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
	cVar2 = (char)*(undefined2 *)((int)&Fr->X + 2);
	cVar3 = (char)Fr->Y;
	uVar5 = *(uchar *)&Fr->FrOffset;
	if (((uint)Fr->Y >> 9 & 1) == 0) {
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
// struct POLY_FT4 * /*$ra*/ PrintMonster__7TextDatiiibi(struct TextDat *this /*$s4*/, int Frm /*$s0*/, int X /*$s1*/, int Y /*$s3*/, void * XFlip /*stack 16*/, int OtPos /*stack 20*/)
 // line 427, offset 0x8007e884
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x8007E884

		/* begin block 1.1 */
			// Start line: 428
			// Start offset: 0x8007E884

			/* begin block 1.1.1 */
				// Start line: 432
				// Start offset: 0x8007E8DC
				// Variables:
			// 		struct POLY_FT4 *FT4; // stack offset -56
			// 		struct FRAME_HDR *Fr; // $s2
			// 		int W; // $a3
			// 		int H; // $t0

				/* begin block 1.1.1.1 */
					// Start line: 455
					// Start offset: 0x8007E950

					/* begin block 1.1.1.1.1 */
						// Start line: 467
						// Start offset: 0x8007EA08
						// Variables:
					// 		unsigned char *Dest; // $s0
					// 		int DecompSize; // $s1
					// 		unsigned char *CompFrAddr; // $s0
					// 		unsigned long NumOfPrims; // $s6
					// 		struct DR_LOAD2 *DrPtr; // $s1
					// 		int TpX; // $a0
					// 		int TpY; // $a1
					// 		int U; // $a0
					// 		int V; // $a1
					// 		int W; // $v1
					// 		int H; // $t0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 526
							// Start offset: 0x8007EB44
							// Variables:
						// 		unsigned int f; // $s3

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 533
								// Start offset: 0x8007EBC4
								// Variables:
							// 		struct RECT mrect; // stack offset -48
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007EBD0
							// End Line: 536
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007EC48
						// End Line: 541
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007EC48
					// End Line: 541
				/* end block 1.1.1.1 */
				// End offset: 0x8007EC48
				// End Line: 541
			/* end block 1.1.1 */
			// End offset: 0x8007EC54
			// End Line: 562
		/* end block 1.1 */
		// End offset: 0x8007EC54
		// End Line: 562
	/* end block 1 */
	// End offset: 0x8007EC5C
	// End Line: 565

	/* begin block 2 */
		// Start line: 960
	/* end block 2 */
	// End Line: 961

POLY_FT4 * PrintMonster__7TextDatiiibi(TextDat *this,int Frm,int X,int Y,void *XFlip,int OtPos)

{
	byte bVar1;
	short sVar2;
	uchar uVar3;
	char cVar4;
	short sVar5;
	int iVar6;
	FRAME_HDR *Fr;
	void *pvVar7;
	uint *out;
	uint uVar8;
	ulong uVar9;
	uchar uVar10;
	short sVar11;
	uint uVar12;
	uchar uVar13;
	ulong *puVar14;
	ushort uVar15;
	ushort *puVar16;
	short sVar17;
	uint Size;
	uint *puVar18;
	POLY_FT4 *local_38 [2];
	uint local_30;
	uint local_2c;
	
	iVar6 = GetNumOfFrames__7TextDat(this);
	if ((int)(Frm & 0xffffU) < iVar6) {
		PRIM_GetPrim__FPP8POLY_FT4(local_38);
		Fr = GetFr__7TextDati(this,Frm & 0xffffU);
		uVar15 = *(ushort *)((int)&Fr->X + 2);
		iVar6 = Fr->Y;
		*(undefined *)((int)&local_38[0]->tag + 3) = 9;
		local_38[0]->code = ',';
		uVar15 = uVar15 & 0x1ff;
		local_38[0]->code = local_38[0]->code | 1;
		if (XFlip == (void *)0x0) {
			sVar17 = (short)X + (short)*(char *)&Fr->X;
		}
		else {
			sVar17 = ((short)X - (short)*(char *)&Fr->X) - uVar15;
		}
		sVar11 = sVar17 + uVar15;
		sVar2 = (short)Y + (short)*(char *)((int)&Fr->X + 1);
		sVar5 = sVar2 + ((ushort)iVar6 & 0x1ff);
		local_38[0]->x0 = sVar17;
		local_38[0]->y0 = sVar2;
		local_38[0]->x1 = sVar11;
		local_38[0]->y1 = sVar2;
		local_38[0]->x2 = sVar17;
		local_38[0]->y2 = sVar5;
		local_38[0]->x3 = sVar11;
		local_38[0]->y3 = sVar5;
		SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this,Fr,local_38[0]);
		if ((Fr->Y & 0x1000U) == 0) {
			GTIMSYS_GetTimer();
			if ((Fr->Y & 0x6000U) != 0x4000) {
				DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x1e0);
			}
			pvVar7 = GAL_Lock(this->hndDat);
			puVar16 = (ushort *)((int)pvVar7 + Fr->FrOffset);
			Size = (uint)*puVar16;
			out = (uint *)GetDecompBufffer__7TextDati(this,Size);
			uVar8 = LZNP_Decode__FPUcT0((uchar *)(puVar16 + 1),(uchar *)out);
			if (uVar8 != Size) {
				DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x1ee);
			}
			puVar18 = out + 1;
			sVar17 = *(short *)((int)out + 0xe);
			uVar8 = *out;
			uVar13 = (char)*(ushort *)(out + 3) * '\x04';
			uVar3 = (uchar)sVar17;
			local_38[0]->tpage =
					 (ushort)((int)((int)sVar17 & 0x100U) >> 4) | (short)(*(ushort *)(out + 3) & 0x3ff) >> 6 |
					 (ushort)(((int)sVar17 & 0x200U) << 2);
			iVar6 = Fr->Y;
			cVar4 = (char)*(undefined2 *)((int)&Fr->X + 2);
			if (XFlip == (void *)0x0) {
				local_38[0]->u0 = uVar13;
				uVar10 = uVar13 + cVar4;
				local_38[0]->u1 = uVar10;
				local_38[0]->u2 = uVar13;
				local_38[0]->u3 = uVar10;
			}
			else {
				uVar10 = uVar13 + cVar4 + -1;
				local_38[0]->u0 = uVar10;
				local_38[0]->u1 = uVar13 + -1;
				local_38[0]->u2 = uVar10;
				local_38[0]->u3 = uVar13 + -1;
			}
			Size = 0;
			uVar13 = uVar3 + (char)iVar6;
			local_38[0]->v0 = uVar3;
			local_38[0]->v1 = uVar3;
			local_38[0]->v2 = uVar13;
			local_38[0]->v3 = uVar13;
			puVar14 = ThisOt + OtPos;
			local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar14 & 0xffffff;
			uVar9 = *puVar14 & 0xff000000 | (uint)local_38[0] & 0xffffff;
			while (*puVar14 = uVar9, Size < uVar8) {
				local_30 = puVar18[2];
				local_2c = puVar18[3];
				bVar1 = *(byte *)((int)puVar18 + 3);
				SetDrawLoad((int)puVar18,&local_30);
				Size = Size + 1;
				puVar14 = ThisOt + OtPos;
				*puVar18 = *puVar18 & 0xff000000 | *puVar14 & 0xffffff;
				uVar12 = (uint)puVar18 & 0xffffff;
				puVar18 = puVar18 + (uint)bVar1;
				uVar9 = *puVar14 & 0xff000000 | uVar12;
			}
		}
		else {
			SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(this,Fr,local_38[0],(int)XFlip,0);
			puVar14 = ThisOt + OtPos;
			local_38[0]->tag = local_38[0]->tag & 0xff000000 | *puVar14 & 0xffffff;
			*puVar14 = *puVar14 & 0xff000000 | (uint)local_38[0] & 0xffffff;
		}
	}
	else {
		local_38[0] = &MyFT4;
	}
	return local_38[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this /*$s2*/, struct POLY_FT4 *FT4 /*$s0*/, int Frm /*$a2*/, int X /*$s1*/, int Y /*stack 16*/, int XFlip /*stack 20*/, int YFlip /*stack 24*/)
 // line 570, offset 0x8007ec8c
	/* begin block 1 */
		// Start line: 571
		// Start offset: 0x8007EC8C
		// Variables:
	// 		struct FRAME_HDR *Fr; // $s3
	// 		int W; // $s5
	// 		int H; // $s6

		/* begin block 1.1 */
			// Start line: 591
			// Start offset: 0x8007ED20

			/* begin block 1.1.1 */
				// Start line: 600
				// Start offset: 0x8007ED94

				/* begin block 1.1.1.1 */
					// Start line: 602
					// Start offset: 0x8007ED94

					/* begin block 1.1.1.1.1 */
						// Start line: 603
						// Start offset: 0x8007EDA4
						// Variables:
					// 		struct RECT R; // stack offset -48

						/* begin block 1.1.1.1.1.1 */
							// Start line: 608
							// Start offset: 0x8007EDA4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 620
								// Start offset: 0x8007EE8C
								// Variables:
							// 		unsigned char sw; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007EE8C
							// End Line: 622
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007EE8C
						// End Line: 622
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007EE8C
					// End Line: 622
				/* end block 1.1.1.1 */
				// End offset: 0x8007EEC4
				// End Line: 628
			/* end block 1.1.1 */
			// End offset: 0x8007EEC4
			// End Line: 628
		/* end block 1.1 */
		// End offset: 0x8007EEC4
		// End Line: 628
	/* end block 1 */
	// End offset: 0x8007EEC4
	// End Line: 628

	/* begin block 2 */
		// Start line: 1311
	/* end block 2 */
	// End Line: 1312

void PrepareFt4__7TextDatP8POLY_FT4iiiii
							 (TextDat *this,POLY_FT4 *FT4,int Frm,int X,int Y,int XFlip,int YFlip)

{
	char cVar1;
	uchar uVar2;
	uchar uVar3;
	ushort uVar4;
	short sVar5;
	FRAME_HDR *Fr;
	uint uVar6;
	void *pvVar7;
	uint uVar8;
	short sVar9;
	uint w;
	RECT local_30;
	
	Fr = GetFr__7TextDati(this,Frm);
	uVar4 = *(ushort *)((int)&Fr->X + 2);
	uVar6 = Fr->Y;
	*(undefined *)((int)&FT4->tag + 3) = 9;
	FT4->code = '-';
	w = (uint)uVar4 & 0x1ff;
	uVar6 = uVar6 & 0x1ff;
	if (XFlip == 0) {
		sVar9 = (short)X + (short)*(char *)&Fr->X;
	}
	else {
		sVar9 = ((short)X - (short)*(char *)&Fr->X) - (short)w;
	}
	cVar1 = *(char *)((int)&Fr->X + 1);
	sVar5 = sVar9 + (short)w;
	FT4->x0 = sVar9;
	FT4->x1 = sVar5;
	FT4->x2 = sVar9;
	FT4->x3 = sVar5;
	sVar9 = (short)Y + (short)cVar1;
	local_30.h = (short)uVar6;
	FT4->y0 = sVar9;
	FT4->y1 = sVar9;
	FT4->y2 = sVar9 + local_30.h;
	FT4->y3 = sVar9 + local_30.h;
	SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this,Fr,FT4);
	if ((Fr->Y & 0x1000U) == 0) {
		pvVar7 = CanXferFrame__C7TextDat(this);
		if (pvVar7 == (void *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x273);
		}
		else {
			DecompFrame__7TextDatP9FRAME_HDR(this,Fr);
			local_30.x = (short)this->DecX;
			local_30.y = (short)this->DecY;
			uVar8 = GU_AlignVal(w,2);
			local_30.w = (short)(uVar8 >> 1);
			GPUQ_LoadImage__FP4RECTli(&local_30,this->hndDecompBuffer,0);
			FT4->u0 = (uchar)((this->DecX & 0x3fU) << 1);
			FT4->v0 = (uchar)this->DecY;
			FT4->u1 = ((byte)this->DecX & 0x3f) * '\x02' + (char)w;
			FT4->v1 = (uchar)this->DecY;
			FT4->u2 = (uchar)((this->DecX & 0x3fU) << 1);
			cVar1 = (char)uVar6;
			FT4->v2 = (char)this->DecY + cVar1;
			FT4->u3 = ((byte)this->DecX & 0x3f) * '\x02' + (char)w;
			FT4->v3 = (char)this->DecY + cVar1;
			uVar6 = GetTPage(1,0,this->DecX,this->DecY);
			FT4->tpage = (ushort)uVar6;
			if (YFlip != 0) {
				uVar2 = FT4->v2;
				FT4->v2 = FT4->v0;
				uVar3 = FT4->v1;
				FT4->v0 = uVar2;
				FT4->v1 = FT4->v3;
				FT4->v3 = uVar3;
			}
		}
	}
	else {
		SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(this,Fr,FT4,XFlip,YFlip);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ GetDecompBufffer__7TextDati(struct TextDat *this /*$s1*/, int Size /*$s0*/)
 // line 635, offset 0x8007eef8
	/* begin block 1 */
		// Start line: 636
		// Start offset: 0x8007EEF8
		// Variables:
	// 		long *DecArray; // $s2
	// 		int DecIndex; // $s3
	// 		long hnd; // $s0
	// 		unsigned char *RetAddr; // $s4
	/* end block 1 */
	// End offset: 0x8007F034
	// End Line: 670

	/* begin block 2 */
		// Start line: 1460
	/* end block 2 */
	// End Line: 1461

uchar * GetDecompBufffer__7TextDati(TextDat *this,int Size)

{
	uchar uVar1;
	void *pvVar2;
	int iVar3;
	long Handle;
	uchar *puVar4;
	int iVar5;
	
	iVar5 = this->NumOfBuffers[this->Scr];
	if (iVar5 == 0x14) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x287);
	}
	pvVar2 = GAL_Lock(this->hndDecompArrays);
	if (pvVar2 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x28a);
	}
	iVar3 = this->Scr;
	Handle = GAL_Alloc(Size,1,&DAT_8012a794);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x28f);
	}
	puVar4 = (uchar *)GAL_Lock(Handle);
	if (puVar4 == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x292);
	}
	*(long *)((int)pvVar2 + iVar5 * 4 + iVar3 * 0x50) = Handle;
	uVar1 = GAL_Unlock(this->hndDecompArrays);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x297);
	}
	this->NumOfBuffers[this->Scr] = iVar5 + 1;
	return puVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this /*$a0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_GT4 *FT4 /*$a2*/, int XFlip /*$a3*/, int YFlip /*stack 16*/)
 // line 674, offset 0x8007f058
	/* begin block 1 */
		// Start line: 675
		// Start offset: 0x8007F058
		// Variables:
	// 		int Rotated; // $v0
	// 		int Tpage; // $t4
	// 		int U; // $v1
	// 		int V; // $t1
	// 		int W; // $t0
	// 		int H; // $t2
	/* end block 1 */
	// End offset: 0x8007F14C
	// End Line: 733

	/* begin block 2 */
		// Start line: 1548
	/* end block 2 */
	// End Line: 1549

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
	cVar2 = (char)*(undefined2 *)((int)&Fr->X + 2);
	cVar3 = (char)Fr->Y;
	uVar5 = *(uchar *)&Fr->FrOffset;
	if (((uint)Fr->Y >> 9 & 1) == 0) {
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
 // line 736, offset 0x8007f154
	/* begin block 1 */
		// Start line: 737
		// Start offset: 0x8007F154
		// Variables:
	// 		struct FRAME_HDR *Fr; // $s3
	// 		int W; // $s4
	// 		int H; // $s6
	// 		unsigned char sw; // $a0
	// 		struct PAL *Pal; // $s1

		/* begin block 1.1 */
			// Start line: 765
			// Start offset: 0x8007F210

			/* begin block 1.1.1 */
				// Start line: 770
				// Start offset: 0x8007F260
			/* end block 1.1.1 */
			// End offset: 0x8007F260
			// End Line: 774

			/* begin block 1.1.2 */
				// Start line: 777
				// Start offset: 0x8007F26C
				// Variables:
			// 		struct RECT R; // stack offset -48
			/* end block 1.1.2 */
			// End offset: 0x8007F2A4
			// End Line: 781
		/* end block 1.1 */
		// End offset: 0x8007F2A4
		// End Line: 781

		/* begin block 1.2 */
			// Start line: 784
			// Start offset: 0x8007F2A4

			/* begin block 1.2.1 */
				// Start line: 787
				// Start offset: 0x8007F2D4
				// Variables:
			// 		int DecX; // $v0
			// 		int DecY; // $v0
			// 		struct RECT R; // stack offset -48
			/* end block 1.2.1 */
			// End offset: 0x8007F37C
			// End Line: 808
		/* end block 1.2 */
		// End offset: 0x8007F37C
		// End Line: 808
	/* end block 1 */
	// End offset: 0x8007F37C
	// End Line: 808

	/* begin block 2 */
		// Start line: 1683
	/* end block 2 */
	// End Line: 1684

void PrepareGt4__7TextDatP8POLY_GT4iiiii
							 (TextDat *this,POLY_GT4 *GT4,int Frm,int X,int Y,int XFlip,int YFlip)

{
	ushort uVar1;
	short sVar2;
	uchar uVar3;
	FRAME_HDR *Fr;
	uint uVar4;
	PAL *pPVar5;
	uint uVar6;
	uchar uVar7;
	short sVar8;
	short sVar9;
	short sVar10;
	uint w;
	RECT local_30;
	
	Fr = GetFr__7TextDati(this,Frm & 0xffff);
	uVar1 = *(ushort *)((int)&Fr->X + 2);
	uVar4 = Fr->Y;
	*(undefined *)((int)&GT4->tag + 3) = 0xc;
	GT4->code = '=';
	w = (uint)uVar1 & 0x1ff;
	uVar4 = uVar4 & 0x1ff;
	if (XFlip == 0) {
		sVar10 = (short)X + (short)*(char *)&Fr->X;
	}
	else {
		sVar10 = ((short)X - (short)*(char *)&Fr->X) - (short)w;
	}
	sVar2 = (short)uVar4;
	if (YFlip == 0) {
		sVar9 = (short)Y + (short)*(char *)((int)&Fr->X + 1);
	}
	else {
		sVar9 = ((short)Y - (short)*(char *)((int)&Fr->X + 1)) - sVar2;
	}
	sVar8 = sVar10 + (short)w;
	GT4->x0 = sVar10;
	GT4->y0 = sVar9;
	GT4->x1 = sVar8;
	GT4->y1 = sVar9;
	GT4->x2 = sVar10;
	GT4->y2 = sVar9 + sVar2;
	GT4->x3 = sVar8;
	GT4->y3 = sVar9 + sVar2;
	pPVar5 = GetPal__7TextDati(this,(uint)Fr->X >> 0x19);
	if ((pPVar5->InVram & 1) == 0) {
		uVar6 = GetClut(0x140,0x100);
		GT4->clut = (ushort)uVar6;
		local_30.x = 0x140;
		local_30.y = 0x100;
		local_30.w = 0x40;
		local_30.h = 1;
		LoadImage((short *)&local_30,&pPVar5->NumOfCols);
	}
	else {
		GT4->clut = *(ushort *)((int)&pPVar5->InVram + 2);
	}
	if ((Fr->Y & 0x1000U) == 0) {
		DecompFrame__7TextDatP9FRAME_HDR(this,Fr);
		local_30.x = 0x141;
		local_30.y = 0x101;
		uVar6 = GU_AlignVal(w,2);
		local_30.w = (short)(uVar6 >> 1);
		local_30.h = sVar2;
		GPUQ_LoadImage__FP4RECTli(&local_30,this->hndDecompBuffer,0);
		uVar7 = (char)w + '\x01';
		GT4->u0 = '\x01';
		GT4->v0 = '\x01';
		GT4->v1 = '\x01';
		GT4->u2 = '\x01';
		uVar3 = (char)uVar4 + '\x01';
		GT4->u1 = uVar7;
		GT4->v2 = uVar3;
		GT4->u3 = uVar7;
		GT4->v3 = uVar3;
		uVar4 = GetTPage(1,0,0x141,0x101);
		GT4->tpage = (ushort)uVar4;
		if (YFlip != 0) {
			uVar3 = GT4->v2;
			GT4->v2 = GT4->v0;
			uVar7 = GT4->v1;
			GT4->v0 = uVar3;
			GT4->v1 = GT4->v3;
			GT4->v3 = uVar7;
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
 // line 814, offset 0x8007f3b0
	/* begin block 1 */
		// Start line: 815
		// Start offset: 0x8007F3B0
		// Variables:
	// 		int Rotated; // $v0
	// 		int Tpage; // $t2
	// 		int U; // $a0
	// 		int V; // $t1
	// 		int W; // $a3
	// 		int H; // $v1
	/* end block 1 */
	// End offset: 0x8007F428
	// End Line: 842

	/* begin block 2 */
		// Start line: 1871
	/* end block 2 */
	// End Line: 1872

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
	cVar4 = (char)*(undefined2 *)((int)&Fr->X + 2);
	cVar5 = (char)Fr->Y;
	if (((uint)Fr->Y >> 9 & 1) == 0) {
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
 // line 846, offset 0x8007f430
	/* begin block 1 */
		// Start line: 847
		// Start offset: 0x8007F430
		// Variables:
	// 		struct FRAME_HDR *Fr; // $s3
	// 		int W; // $s5
	// 		int H; // $s1
	// 		struct PAL *Pal; // $s0

		/* begin block 1.1 */
			// Start line: 847
			// Start offset: 0x8007F430

			/* begin block 1.1.1 */
				// Start line: 870
				// Start offset: 0x8007F4E4
			/* end block 1.1.1 */
			// End offset: 0x8007F4E4
			// End Line: 874

			/* begin block 1.1.2 */
				// Start line: 877
				// Start offset: 0x8007F4F0
				// Variables:
			// 		struct RECT R; // stack offset -40
			/* end block 1.1.2 */
			// End offset: 0x8007F528
			// End Line: 881
		/* end block 1.1 */
		// End offset: 0x8007F528
		// End Line: 881

		/* begin block 1.2 */
			// Start line: 884
			// Start offset: 0x8007F528

			/* begin block 1.2.1 */
				// Start line: 887
				// Start offset: 0x8007F550
				// Variables:
			// 		int DecX; // $v0
			// 		int DecY; // $v0
			// 		struct RECT R; // stack offset -40
			/* end block 1.2.1 */
			// End offset: 0x8007F5CC
			// End Line: 905
		/* end block 1.2 */
		// End offset: 0x8007F5CC
		// End Line: 905
	/* end block 1 */
	// End offset: 0x8007F5CC
	// End Line: 905

	/* begin block 2 */
		// Start line: 1944
	/* end block 2 */
	// End Line: 1945

void PrepareGt3__7TextDatP8POLY_GT3iii(TextDat *this,POLY_GT3 *GT3,int Frm,int X,int Y)

{
	ushort uVar1;
	short sVar2;
	short sVar3;
	FRAME_HDR *Fr;
	PAL *pPVar4;
	uint uVar5;
	uint uVar6;
	short sVar7;
	uint w;
	RECT local_28;
	
	Fr = GetFr__7TextDati(this,Frm & 0xffff);
	uVar1 = *(ushort *)((int)&Fr->X + 2);
	uVar6 = Fr->Y;
	*(undefined *)((int)&GT3->tag + 3) = 9;
	GT3->code = '5';
	w = (uint)uVar1 & 0x1ff;
	sVar2 = (short)X + (short)*(char *)&Fr->X;
	sVar7 = (short)Y + (short)*(char *)((int)&Fr->X + 1);
	GT3->x0 = sVar2;
	GT3->x2 = sVar2;
	uVar6 = uVar6 & 0x1ff;
	GT3->y0 = sVar7;
	GT3->y1 = sVar7;
	sVar3 = (short)uVar6;
	GT3->x1 = sVar2 + (short)w;
	GT3->y2 = sVar7 + sVar3;
	pPVar4 = GetPal__7TextDati(this,(uint)Fr->X >> 0x19);
	if ((pPVar4->InVram & 1) == 0) {
		uVar5 = GetClut(0x140,0x100);
		GT3->clut = (ushort)uVar5;
		local_28.x = 0x140;
		local_28.y = 0x100;
		local_28.w = 0x40;
		local_28.h = 1;
		LoadImage((short *)&local_28,&pPVar4->NumOfCols);
	}
	else {
		GT3->clut = *(ushort *)((int)&pPVar4->InVram + 2);
	}
	if ((Fr->Y & 0x1000U) == 0) {
		DecompFrame__7TextDatP9FRAME_HDR(this,Fr);
		local_28.x = 0x141;
		local_28.y = 0x101;
		uVar5 = GU_AlignVal(w,2);
		local_28.w = (short)(uVar5 >> 1);
		local_28.h = sVar3;
		GPUQ_LoadImage__FP4RECTli(&local_28,this->hndDecompBuffer,0);
		GT3->u1 = (char)w + '\x01';
		GT3->u0 = '\x01';
		GT3->v0 = '\x01';
		GT3->v1 = '\x01';
		GT3->u2 = '\x01';
		GT3->v2 = (char)uVar6 + '\x01';
		uVar6 = GetTPage(1,0,0x141,0x101);
		GT3->tpage = (ushort)uVar6;
	}
	else {
		SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(this,Fr,GT3);
	}
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PrintFt4__7TextDatiiiiii(struct TextDat *this /*$s1*/, int Frm /*$s0*/, int X /*$s3*/, int Y /*$s2*/, int XFlip /*stack 16*/, int OtPos /*stack 20*/, int YFlip /*stack 24*/)
 // line 918, offset 0x8007f5f4
	/* begin block 1 */
		// Start line: 919
		// Start offset: 0x8007F5F4
		// Variables:
	// 		struct POLY_FT4 *FT4; // stack offset -40
	/* end block 1 */
	// End offset: 0x8007F71C
	// End Line: 938

	/* begin block 2 */
		// Start line: 2126
	/* end block 2 */
	// End Line: 2127

POLY_FT4 * PrintFt4__7TextDatiiiiii(TextDat *this,int Frm,int X,int Y,int XFlip,int OtPos,int YFlip)

{
	int iVar1;
	ulong *puVar2;
	POLY_FT4 *local_28 [2];
	
	iVar1 = GetNumOfFrames__7TextDat(this);
	if ((int)(Frm & 0xffffU) < iVar1) {
		PRIM_GetPrim__FPP8POLY_FT4(local_28);
		PrepareFt4__7TextDatP8POLY_FT4iiiii(this,local_28[0],Frm & 0xffffU,X,Y,XFlip,YFlip);
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
		local_28[0] = &MyFT4;
	}
	return local_28[0];
}



// decompiled code
// original method signature: 
// struct POLY_GT4 * /*$ra*/ PrintGt4__7TextDatiiiiii(struct TextDat *this /*$s1*/, int Frm /*$s0*/, int X /*$s3*/, int Y /*$s2*/, int XFlip /*stack 16*/, int OtPos /*stack 20*/, int YFlip /*stack 24*/)
 // line 943, offset 0x8007f748
	/* begin block 1 */
		// Start line: 944
		// Start offset: 0x8007F748
		// Variables:
	// 		struct POLY_GT4 *GT4; // stack offset -40
	/* end block 1 */
	// End offset: 0x8007F870
	// End Line: 963

	/* begin block 2 */
		// Start line: 2176
	/* end block 2 */
	// End Line: 2177

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
// struct POLY_GT3 * /*$ra*/ PrintGt3__7TextDatiiii(struct TextDat *this /*$s1*/, int Frm /*$s0*/, int X /*$s3*/, int Y /*$s2*/, int OtPos /*stack 16*/)
 // line 968, offset 0x8007f89c
	/* begin block 1 */
		// Start line: 969
		// Start offset: 0x8007F89C
		// Variables:
	// 		struct POLY_GT3 *GT3; // stack offset -32
	/* end block 1 */
	// End offset: 0x8007F95C
	// End Line: 985

	/* begin block 2 */
		// Start line: 2226
	/* end block 2 */
	// End Line: 2227

POLY_GT3 * PrintGt3__7TextDatiiii(TextDat *this,int Frm,int X,int Y,int OtPos)

{
	int iVar1;
	ulong *puVar2;
	POLY_GT3 *local_20 [2];
	
	iVar1 = GetNumOfFrames__7TextDat(this);
	if ((int)(Frm & 0xffffU) < iVar1) {
		PRIM_GetPrim__FPP8POLY_GT3(local_20);
		PrepareGt3__7TextDatP8POLY_GT3iii(this,local_20[0],Frm & 0xffffU,X,Y);
		puVar2 = ThisOt + OtPos;
		local_20[0]->tag = local_20[0]->tag & 0xff000000 | *puVar2 & 0xffffff;
		*puVar2 = *puVar2 & 0xff000000 | (uint)local_20[0] & 0xffffff;
	}
	else {
		local_20[0] = &MyGT3;
	}
	return local_20[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this /*$s3*/, struct FRAME_HDR *Fr /*$s1*/)
 // line 989, offset 0x8007f980
	/* begin block 1 */
		// Start line: 990
		// Start offset: 0x8007F980
		// Variables:
	// 		unsigned char *CompFrAddr; // $s2
	// 		int DecompSize; // $s4
	// 		unsigned char *Dest; // $s0
	/* end block 1 */
	// End offset: 0x8007FAB0
	// End Line: 1028

	/* begin block 2 */
		// Start line: 2268
	/* end block 2 */
	// End Line: 2269

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
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x3e3);
	}
	Src = (uchar *)((int)pvVar1 + Fr->FrOffset);
	uVar2 = GU_AlignVal((uint)*(ushort *)((int)&Fr->X + 2) & 0x1ff,2);
	uVar3 = Fr->Y;
	Dest = (uchar *)GAL_Lock(this->hndDecompBuffer);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x3ee);
	}
	uVar4 = (uint)Fr->Y >> 0xd & 3;
	if (uVar4 == 1) {
		Un64__FPUcT0l(Src,Dest,uVar2 * (uVar3 & 0x1ff));
	}
	else {
		if ((uVar4 == 0) || (uVar4 != 2)) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x3fc);
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
 // line 1036, offset 0x8007fad4
	/* begin block 1 */
		// Start line: 1037
		// Start offset: 0x8007FAD4
		// Variables:
	// 		int NumOfCreatures; // $s1

		/* begin block 1.1 */
			// Start line: 1037
			// Start offset: 0x8007FAD4

			/* begin block 1.1.1 */
				// Start line: 1039
				// Start offset: 0x8007FB04
				// Variables:
			// 		unsigned char *ThisAddr; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1044
					// Start offset: 0x8007FB5C
					// Variables:
				// 		unsigned int f; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x8007FBB0
				// End Line: 1051
			/* end block 1.1.1 */
			// End offset: 0x8007FBB0
			// End Line: 1051
		/* end block 1.1 */
		// End offset: 0x8007FBC4
		// End Line: 1056

		/* begin block 1.2 */
			// Start line: 1059
			// Start offset: 0x8007FBC4
			// Variables:
		// 		int f; // $s0

			/* begin block 1.2.1 */
				// Start line: 1063
				// Start offset: 0x8007FBD4
			/* end block 1.2.1 */
			// End offset: 0x8007FBE0
			// End Line: 1065
		/* end block 1.2 */
		// End offset: 0x8007FBF8
		// End Line: 1067
	/* end block 1 */
	// End offset: 0x8007FBF8
	// End Line: 1067

	/* begin block 2 */
		// Start line: 2374
	/* end block 2 */
	// End Line: 2375

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
		lVar1 = GAL_Alloc(uVar4 << 2,1,&DAT_8012a79c);
		this->hndCreatureOffset = lVar1;
		if (lVar1 == -1) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x410);
		}
		piVar2 = (int *)GAL_Lock(this->hndCreatureOffset);
		this->CreatureOffset = piVar2;
		if (piVar2 == (int *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x413);
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
 // line 1076, offset 0x8007fc14
	/* begin block 1 */
		// Start line: 1077
		// Start offset: 0x8007FC14
		// Variables:
	// 		struct PAL *ThisPal; // $a1

		/* begin block 1.1 */
			// Start line: 1084
			// Start offset: 0x8007FC88
			// Variables:
		// 		unsigned int f; // $a2
		/* end block 1.1 */
		// End offset: 0x8007FCFC
		// End Line: 1101
	/* end block 1 */
	// End offset: 0x8007FCFC
	// End Line: 1101

	/* begin block 2 */
		// Start line: 2457
	/* end block 2 */
	// End Line: 2458

void MakePalOffsetTab__7TextDat(TextDat *this)

{
	long lVar1;
	int *piVar2;
	int iVar3;
	uint *puVar4;
	uint uVar5;
	
	lVar1 = GAL_Alloc((uint)*(ushort *)((int)&this->Hdr->NumOfFrames + 2) << 2,1,&DAT_8012a79c);
	this->hndPalOffset = lVar1;
	if (lVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x438);
	}
	piVar2 = (int *)GAL_Lock(this->hndPalOffset);
	this->PalOffset = piVar2;
	if (piVar2 == (int *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x43b);
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
 // line 1157, offset 0x8007fd10
	/* begin block 1 */
		// Start line: 1158
		// Start offset: 0x8007FD10
	/* end block 1 */
	// End offset: 0x8007FD34
	// End Line: 1168

	/* begin block 2 */
		// Start line: 2622
	/* end block 2 */
	// End Line: 2623

void InitData__7TextDat(TextDat *this)

{
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
 // line 1177, offset 0x8007fd3c
	/* begin block 1 */
		// Start line: 1178
		// Start offset: 0x8007FD3C
	/* end block 1 */
	// End offset: 0x8007FE70
	// End Line: 1213

	/* begin block 2 */
		// Start line: 2661
	/* end block 2 */
	// End Line: 2662

void DumpData__7TextDat(TextDat *this)

{
	uchar uVar1;
	
	if ((this->hndDat != -1) && (uVar1 = GAL_Free(this->hndDat), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x49f);
	}
	if ((this->hndHdr != -1) && (uVar1 = GAL_Free(this->hndHdr), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4a5);
	}
	if ((this->hndPalOffset != -1) && (uVar1 = GAL_Free(this->hndPalOffset), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4aa);
	}
	if ((this->hndCreatureOffset != -1) && (uVar1 = GAL_Free(this->hndCreatureOffset), uVar1 == '\0'))
	{
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4b0);
	}
	if ((this->hndBlockOffsets != -1) && (uVar1 = GAL_Free(this->hndBlockOffsets), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4b6);
	}
	if (this->hndDecompBuffer != -1) {
		GPUQ_DiscardHandle__Fl(this->hndDecompBuffer);
	}
	InitData__7TextDat(this);
	return;
}



// decompiled code
// original method signature: 
// struct TextDat * /*$ra*/ GM_UseTexData__Fi(int Id /*$s3*/)
 // line 1223, offset 0x8007fe84
	/* begin block 1 */
		// Start line: 1224
		// Start offset: 0x8007FE84

		/* begin block 1.1 */
			// Start line: 1227
			// Start offset: 0x8007FEC0

			/* begin block 1.1.1 */
				// Start line: 1228
				// Start offset: 0x8007FEDC
				// Variables:
			// 		struct TextDat *Dat2Use; // $s2
			// 		struct CTextFileInfo **Tab; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 1229
					// Start offset: 0x8007FEDC
					// Variables:
				// 		int f; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x8007FF20
				// End Line: 1237
			/* end block 1.1.1 */
			// End offset: 0x8007FF60
			// End Line: 1240
		/* end block 1.1 */
		// End offset: 0x8007FF60
		// End Line: 1240
	/* end block 1 */
	// End offset: 0x8007FF80
	// End Line: 1244

	/* begin block 2 */
		// Start line: 2753
	/* end block 2 */
	// End Line: 2754

TextDat * GM_UseTexData__Fi(int Id)

{
	undefined *puVar1;
	TextDat *this;
	int iVar2;
	TextDat *this_00;
	
	if (0x11c < (uint)Id) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4c8);
	}
	this_00 = (TextDat *)0x0;
	if (AllDats285[Id] == (TextDat *)0x0) {
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
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4d5);
		}
		SetFileInfo__7TextDatPC13CTextFileInfoi(this_00,(CTextFileInfo *)TX_DatTab[Id],Id);
		AllDats285[Id] = this_00;
	}
	Use__7TextDat(AllDats285[Id]);
	return AllDats285[Id];
}



// decompiled code
// original method signature: 
// void /*$ra*/ GM_FinishedUsing__FP7TextDat(struct TextDat *Fin /*$s0*/)
 // line 1253, offset 0x8007ffa4
	/* begin block 1 */
		// Start line: 1254
		// Start offset: 0x8007FFA4
	/* end block 1 */
	// End offset: 0x8007FFE4
	// End Line: 1258

	/* begin block 2 */
		// Start line: 2814
	/* end block 2 */
	// End Line: 2815

void GM_FinishedUsing__FP7TextDat(TextDat *Fin)

{
	undefined *puVar1;
	int iVar2;
	
	FinishedUsing__7TextDat(Fin);
	puVar1 = (undefined *)IsLoaded__C7TextDat(Fin);
	if (puVar1 != &DAT_00000001) {
		iVar2 = GetTexNum__C7TextDat(Fin);
		AllDats285[iVar2] = (TextDat *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this /*$s0*/, struct FRAME_HDR *Fr /*$a1*/, struct POLY_FT4 *FT4 /*$s2*/)
 // line 1261, offset 0x8007fff8
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x8007FFF8
		// Variables:
	// 		struct PAL *Pal; // $s1

		/* begin block 1.1 */
			// Start line: 1262
			// Start offset: 0x8007FFF8

			/* begin block 1.1.1 */
				// Start line: 1266
				// Start offset: 0x80080038
			/* end block 1.1.1 */
			// End offset: 0x80080038
			// End Line: 1270

			/* begin block 1.1.2 */
				// Start line: 1273
				// Start offset: 0x80080044
				// Variables:
			// 		struct RECT R; // stack offset -24
			/* end block 1.1.2 */
			// End offset: 0x800800A4
			// End Line: 1283
		/* end block 1.1 */
		// End offset: 0x800800A4
		// End Line: 1283
	/* end block 1 */
	// End offset: 0x800800A4
	// End Line: 1283

	/* begin block 2 */
		// Start line: 2830
	/* end block 2 */
	// End Line: 2831

void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(TextDat *this,FRAME_HDR *Fr,POLY_FT4 *FT4)

{
	PAL *pPVar1;
	void *pvVar2;
	uint uVar3;
	short local_18;
	undefined2 local_16;
	undefined2 local_14;
	undefined2 local_12;
	
	pPVar1 = GetPal__7TextDati(this,(uint)Fr->X >> 0x19);
	if ((pPVar1->InVram & 1) == 0) {
		pvVar2 = CanXferPal__C7TextDat(this);
		if (pvVar2 == (void *)0x0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x4fe);
		}
		uVar3 = GetClut(this->PalX,this->PalY);
		FT4->clut = (ushort)uVar3;
		local_18 = (short)this->PalX;
		local_14 = 0x40;
		local_12 = 1;
		local_16 = (undefined2)this->PalY;
		LoadImage(&local_18,&pPVar1->NumOfCols);
	}
	else {
		FT4->clut = *(ushort *)((int)&pPVar1->InVram + 2);
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFrNum__7TextDatiiii(struct TextDat *this /*$a0*/, int Creature /*$a1*/, int Action /*$s0*/, int Direction /*$s2*/, int Frame /*stack 16*/)
 // line 1309, offset 0x800800c0
	/* begin block 1 */
		// Start line: 1310
		// Start offset: 0x800800C0
	/* end block 1 */
	// End offset: 0x800800F8
	// End Line: 1311

	/* begin block 2 */
		// Start line: 2930
	/* end block 2 */
	// End Line: 2931

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
 // line 1314, offset 0x80080114
	/* begin block 1 */
		// Start line: 1315
		// Start offset: 0x80080114
	/* end block 1 */
	// End offset: 0x80080154
	// End Line: 1316

	/* begin block 2 */
		// Start line: 2940
	/* end block 2 */
	// End Line: 2941

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
 // line 1324, offset 0x8008016c
	/* begin block 1 */
		// Start line: 1325
		// Start offset: 0x8008016C
		// Variables:
	// 		long *DecArray; // $s1

		/* begin block 1.1 */
			// Start line: 1342
			// Start offset: 0x800801C8
			// Variables:
		// 		int f; // $s2

			/* begin block 1.1.1 */
				// Start line: 1344
				// Start offset: 0x800801E0
			/* end block 1.1.1 */
			// End offset: 0x8008022C
			// End Line: 1349
		/* end block 1.1 */
		// End offset: 0x80080238
		// End Line: 1350
	/* end block 1 */
	// End offset: 0x80080274
	// End Line: 1355

	/* begin block 2 */
		// Start line: 2960
	/* end block 2 */
	// End Line: 2961

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
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x538);
	}
	iVar4 = 0;
	plVar3 = (long *)((int)pvVar2 + this->Scr * 0x50);
	while (iVar4 < this->NumOfBuffers[this->Scr]) {
		uVar1 = GAL_Free(*plVar3);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x544);
		}
		plVar3 = plVar3 + 1;
		iVar4 = iVar4 + 1;
	}
	this->NumOfBuffers[this->Scr] = 0;
	uVar1 = GAL_Unlock(this->hndDecompArrays);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x54a);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FindDecompArea__7TextDatR4RECT(struct TextDat *this /*$s1*/, struct RECT *R /*$s2*/)
 // line 1392, offset 0x80080290
	/* begin block 1 */
		// Start line: 1393
		// Start offset: 0x80080290
		// Variables:
	// 		int NumOfFrames; // $t0
	// 		int Widest; // $a0
	// 		int Tallest; // $s0

		/* begin block 1.1 */
			// Start line: 1398
			// Start offset: 0x800802CC
			// Variables:
		// 		int f; // $a3

			/* begin block 1.1.1 */
				// Start line: 1402
				// Start offset: 0x800802E8
				// Variables:
			// 		int w; // $v1
			// 		int h; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8008032C
			// End Line: 1415
		/* end block 1.1 */
		// End offset: 0x80080338
		// End Line: 1416
	/* end block 1 */
	// End offset: 0x80080348
	// End Line: 1419

	/* begin block 2 */
		// Start line: 3098
	/* end block 2 */
	// End Line: 3099

void FindDecompArea__7TextDatR4RECT(TextDat *this,RECT *R)

{
	int iVar1;
	int iVar2;
	uint uVar3;
	uint w;
	uint uVar4;
	int iVar5;
	int iVar6;
	uint uVar7;
	
	if (this->Loaded == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x573);
	}
	iVar1 = GetNumOfFrames__7TextDat(this);
	w = 0;
	uVar7 = 0;
	iVar6 = 0;
	iVar5 = 0;
	while (iVar6 < iVar1) {
		iVar2 = (int)&this->Frames->FrOffset + iVar5;
		uVar3 = (uint)*(ushort *)(iVar2 + 6) & 0x1ff;
		uVar4 = *(uint *)(iVar2 + 8) & 0x1ff;
		if (w < uVar3) {
			w = uVar3;
		}
		if (uVar7 < uVar4) {
			uVar7 = uVar4;
		}
		iVar5 = iVar5 + 0xc;
		iVar6 = iVar6 + 1;
	}
	w = GU_AlignVal(w,2);
	R->w = (short)w;
	R->h = (short)uVar7;
	return;
}



// decompiled code
// original method signature: 
// struct CTextFileInfo * /*$ra*/ GetFileInfo__7TextDati(struct TextDat *this /*$a0*/, int Id /*$s0*/)
 // line 1422, offset 0x80080364
	/* begin block 1 */
		// Start line: 1423
		// Start offset: 0x80080364
	/* end block 1 */
	// End offset: 0x800803A0
	// End Line: 1425

	/* begin block 2 */
		// Start line: 3159
	/* end block 2 */
	// End Line: 3160

CTextFileInfo * GetFileInfo__7TextDati(TextDat *this,int Id)

{
	if (0x11c < (uint)Id) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x58f);
	}
	return (CTextFileInfo *)TX_DatTab[Id];
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetSize__C15CCreatureAction(struct CCreatureAction *this /*$a0*/)
 // line 1430, offset 0x800803b4
	/* begin block 1 */
		// Start line: 1431
		// Start offset: 0x800803B4
	/* end block 1 */
	// End offset: 0x800803CC
	// End Line: 1432

	/* begin block 2 */
		// Start line: 3175
	/* end block 2 */
	// End Line: 3176

int GetSize__C15CCreatureAction(CCreatureAction *this)

{
	uint uVar1;
	
	uVar1 = GU_AlignVal((uint)this->NumOfFrames + 0xc,4);
	return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetFrNum__C15CCreatureActionii(struct CCreatureAction *this /*$s0*/, int Direction /*$s1*/, int Frame /*$s2*/)
 // line 1435, offset 0x800803dc
	/* begin block 1 */
		// Start line: 1436
		// Start offset: 0x800803DC
		// Variables:
	// 		int LocFrame; // $v0
	/* end block 1 */
	// End offset: 0x80080468
	// End Line: 1442

	/* begin block 2 */
		// Start line: 3186
	/* end block 2 */
	// End Line: 3187

int GetFrNum__C15CCreatureActionii(CCreatureAction *this,int Direction,int Frame)

{
	if (8 < (uint)Direction) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x59c);
	}
	if ((int)(uint)this->NumOfFrames < Frame) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x59d);
	}
	return (uint)(this->DirRemap[Direction] >> 4) * (uint)this->NumOfPhysFrames +
				 (uint)this->AnimRemap[Frame] + (uint)this->BaseFrame;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitDirRemap__15CCreatureAction(struct CCreatureAction *this /*$a0*/)
 // line 1447, offset 0x80080484
	/* begin block 1 */
		// Start line: 1448
		// Start offset: 0x80080484
		// Variables:
	// 		void * Dir2Remap[8]; // stack offset -32
	// 		int f; // $a3
	// 		int RemapNum; // $t3

		/* begin block 1.1 */
			// Start line: 1461
			// Start offset: 0x800804CC

			/* begin block 1.1.1 */
				// Start line: 1463
				// Start offset: 0x800804D8

				/* begin block 1.1.1.1 */
					// Start line: 1465
					// Start offset: 0x800804E4

					/* begin block 1.1.1.1.1 */
						// Start line: 1466
						// Start offset: 0x800804F4
						// Variables:
					// 		int OrigNum; // $t1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1467
							// Start offset: 0x800804F4
							// Variables:
						// 		int g; // $a2
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80080528
						// End Line: 1473
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008052C
					// End Line: 1474
				/* end block 1.1.1.1 */
				// End offset: 0x8008052C
				// End Line: 1474
			/* end block 1.1.1 */
			// End offset: 0x8008052C
			// End Line: 1474
		/* end block 1.1 */
		// End offset: 0x80080538
		// End Line: 1476
	/* end block 1 */
	// End offset: 0x80080538
	// End Line: 1476

	/* begin block 2 */
		// Start line: 3211
	/* end block 2 */
	// End Line: 3212

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
 // line 1479, offset 0x80080544
	/* begin block 1 */
		// Start line: 1480
		// Start offset: 0x80080544
	/* end block 1 */
	// End offset: 0x80080570
	// End Line: 1484

	/* begin block 2 */
		// Start line: 3275
	/* end block 2 */
	// End Line: 3276

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
 // line 1487, offset 0x80080588
	/* begin block 1 */
		// Start line: 1488
		// Start offset: 0x80080588
		// Variables:
	// 		struct CCreatureAction *CAct; // $s1

		/* begin block 1.1 */
			// Start line: 1489
			// Start offset: 0x800805D0
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x800805F8
		// End Line: 1494
	/* end block 1 */
	// End offset: 0x800805FC
	// End Line: 1496

	/* begin block 2 */
		// Start line: 3291
	/* end block 2 */
	// End Line: 3292

CCreatureAction * GetAction__C12CCreatureHdri(CCreatureHdr *this,int ActNum)

{
	int iVar1;
	int iVar2;
	CCreatureAction *this_00;
	
	if ((ActNum < 0) || (this->NumOfActions < ActNum)) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5d0);
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
 // line 1499, offset 0x80080618
	/* begin block 1 */
		// Start line: 1500
		// Start offset: 0x80080618
		// Variables:
	// 		struct CCreatureAction *CAct; // $s1

		/* begin block 1.1 */
			// Start line: 1500
			// Start offset: 0x80080618
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x8008066C
		// End Line: 1507
	/* end block 1 */
	// End offset: 0x8008066C
	// End Line: 1507

	/* begin block 2 */
		// Start line: 3315
	/* end block 2 */
	// End Line: 3316

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
 // line 1511, offset 0x80080688
	/* begin block 1 */
		// Start line: 1512
		// Start offset: 0x80080688
		// Variables:
	// 		int Size; // $s2
	// 		struct CCreatureAction *CAct; // $s1

		/* begin block 1.1 */
			// Start line: 1512
			// Start offset: 0x80080688
			// Variables:
		// 		int f; // $s0

			/* begin block 1.1.1 */
				// Start line: 1517
				// Start offset: 0x800806B0
				// Variables:
			// 		int ThisSize; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800806BC
			// End Line: 1519
		/* end block 1.1 */
		// End offset: 0x800806D4
		// End Line: 1522
	/* end block 1 */
	// End offset: 0x800806D4
	// End Line: 1523

	/* begin block 2 */
		// Start line: 3340
	/* end block 2 */
	// End Line: 3341

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
// long /*$ra*/ LoadDat__C13CTextFileInfo(struct CTextFileInfo *this /*$s0*/)
 // line 1530, offset 0x800806f4
	/* begin block 1 */
		// Start line: 1531
		// Start offset: 0x800806F4
	/* end block 1 */
	// End offset: 0x80080730
	// End Line: 1533

	/* begin block 2 */
		// Start line: 3392
	/* end block 2 */
	// End Line: 3393

long LoadDat__C13CTextFileInfo(CTextFileInfo *this)

{
	void *pvVar1;
	long lVar2;
	
	pvVar1 = HasDat__C13CTextFileInfo(this);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x5fb);
	}
	lVar2 = GetFile__C13CTextFileInfoPc(this,&DAT_8012a78c);
	return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this /*$a0*/)
 // line 1545, offset 0x80080744
	/* begin block 1 */
		// Start line: 1546
		// Start offset: 0x80080744
	/* end block 1 */
	// End offset: 0x8008075C
	// End Line: 1547

	/* begin block 2 */
		// Start line: 3422
	/* end block 2 */
	// End Line: 3423

long LoadHdr__C13CTextFileInfo(CTextFileInfo *this)

{
	long lVar1;
	
	lVar1 = GetFile__C13CTextFileInfoPc(this,&DAT_8012a7ac);
	return lVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetFile__C13CTextFileInfoPc(struct CTextFileInfo *this /*$s0*/, char *Ext /*$s1*/)
 // line 1550, offset 0x8008076c
	/* begin block 1 */
		// Start line: 1551
		// Start offset: 0x8008076C
		// Variables:
	// 		char FName[13]; // stack offset -32
	// 		struct FileIO *MyFileIO; // $s0
	// 		long hnd; // $s0
	/* end block 1 */
	// End offset: 0x800807F0
	// End Line: 1564

	/* begin block 2 */
		// Start line: 3432
	/* end block 2 */
	// End Line: 3433

long GetFile__C13CTextFileInfoPc(CTextFileInfo *this,char *Ext)

{
	size_t sVar1;
	FileIO *this_00;
	long Hnd;
	char acStack32 [16];
	
	sVar1 = strlen(this->FileName);
	if (8 < sVar1) {
		DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x611);
	}
	this_00 = SYSI_GetFs__Fv();
	strcpy(acStack32,this->FileName);
	strcat(acStack32,Ext);
	Hnd = Read__6FileIOPCcUl(this_00,acStack32,1);
	GAL_SetMemName(Hnd,acStack32);
	return Hnd;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this /*$s0*/, char *Ext /*$s1*/)
 // line 1568, offset 0x80080808
	/* begin block 1 */
		// Start line: 1569
		// Start offset: 0x80080808
		// Variables:
	// 		char FName[13]; // stack offset -32
	// 		struct FileIO *MyFileIO; // $s0
	/* end block 1 */
	// End offset: 0x80080858
	// End Line: 1578

	/* begin block 2 */
		// Start line: 3471
	/* end block 2 */
	// End Line: 3472

void * HasFile__C13CTextFileInfoPc(CTextFileInfo *this,char *Ext)

{
	FileIO *this_00;
	int iVar1;
	char acStack32 [16];
	
	this_00 = SYSI_GetFs__Fv();
	strcpy(acStack32,this->FileName);
	strcat(acStack32,Ext);
	iVar1 = FileLen__6FileIOPCc(this_00,acStack32);
	return (void *)((uint)(iVar1 + 1U < 2) ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Un64__FPUcT0l(unsigned char *Src /*$a0*/, unsigned char *Dest /*$a1*/, long SizeBytes /*$a2*/)
 // line 1609, offset 0x80080870
	/* begin block 1 */
		// Start line: 1610
		// Start offset: 0x80080870
		// Variables:
	// 		unsigned char *EndDest; // $t1
	// 		unsigned long *BigDest; // $a3
	// 		unsigned long Code; // $t0
	// 		unsigned long Run; // $a2
	// 		unsigned long BigCode; // $v1
	/* end block 1 */
	// End offset: 0x8008093C
	// End Line: 1652

	/* begin block 2 */
		// Start line: 3559
	/* end block 2 */
	// End Line: 3560

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
 // line 1665, offset 0x80080944
	/* begin block 1 */
		// Start line: 1666
		// Start offset: 0x80080944
	/* end block 1 */
	// End offset: 0x80080944
	// End Line: 1666

	/* begin block 2 */
		// Start line: 3665
	/* end block 2 */
	// End Line: 3666

CScreen * __7CScreen(CScreen *this)

{
	__7TextDat((TextDat *)this);
	this->LoadedId = -1;
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7CScreeniii(struct CScreen *this /*$s3*/, int Id /*$s5*/, int tpx /*$s0*/, int tpy /*$s4*/)
 // line 1670, offset 0x80080978
	/* begin block 1 */
		// Start line: 1671
		// Start offset: 0x80080978
		// Variables:
	// 		unsigned char r; // $t0
	// 		unsigned char g; // $a1
	// 		unsigned char b; // $a2

		/* begin block 1.1 */
			// Start line: 1671
			// Start offset: 0x80080978

			/* begin block 1.1.1 */
				// Start line: 1675
				// Start offset: 0x800809B4
				// Variables:
			// 		struct FRAME_HDR *Fr; // $s1
			// 		struct RECT R; // stack offset -40
			// 		struct PAL *Pal; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1704
					// Start offset: 0x80080AC8
					// Variables:
				// 		int i; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 1710
						// Start offset: 0x80080B08

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1712
							// Start offset: 0x80080B14
							// Variables:
						// 		int v; // $t2

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1712
								// Start offset: 0x80080B18
								// Variables:
							// 		unsigned short c; // $v0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80080B74
							// End Line: 1721
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80080B9C
						// End Line: 1722
					/* end block 1.1.1.1.1 */
					// End offset: 0x80080B9C
					// End Line: 1723
				/* end block 1.1.1.1 */
				// End offset: 0x80080BC8
				// End Line: 1725
			/* end block 1.1.1 */
			// End offset: 0x80080BCC
			// End Line: 1727
		/* end block 1.1 */
		// End offset: 0x80080BCC
		// End Line: 1727
	/* end block 1 */
	// End offset: 0x80080BCC
	// End Line: 1727

	/* begin block 2 */
		// Start line: 3675
	/* end block 2 */
	// End Line: 3676

void Load__7CScreeniii(CScreen *this,int Id,int tpx,int tpy)

{
	ushort uVar1;
	FRAME_HDR *Fr;
	PAL *pPVar2;
	uint uVar3;
	uint uVar4;
	ushort uVar5;
	PAL *pPVar6;
	int iVar7;
	short sVar8;
	int iVar9;
	short sVar10;
	RECT local_28;
	
	if (Id != this->LoadedId) {
		if (Id != -1) {
			DumpData__7TextDat((TextDat *)this);
		}
		SetFileInfo__7TextDatPC13CTextFileInfoi((TextDat *)this,(CTextFileInfo *)TX_DatTab[Id],-1);
		Use__7TextDat((TextDat *)this);
		Fr = GetFr__7TextDati((TextDat *)this,0);
		if ((Fr->Y & 0x1000U) != 0) {
			DBG_Error((char *)0x0,"psxsrc/GMAN.CPP",0x693);
		}
		DecompFrame__7TextDatP9FRAME_HDR((TextDat *)this,Fr);
		sVar10 = (short)tpy;
		if (tpx == 0xb) {
			local_28.x = 0x2c0;
			local_28.w = 0xa0;
			local_28.h = 0xf0;
			local_28.y = sVar10;
			GPUQ_LoadImage__FP4RECTli(&local_28,(this->TextDat).hndDecompBuffer,0);
			local_28.x = 0x2c2;
			local_28.w = 0xa0;
		}
		else {
			sVar8 = (short)tpx * 0x40;
			local_28.w = 0x80;
			local_28.h = 0xf0;
			local_28.x = sVar8;
			local_28.y = sVar10;
			GPUQ_LoadImage__FP4RECTli(&local_28,(this->TextDat).hndDecompBuffer,0);
			local_28.x = sVar8 + 2;
			local_28.w = 0x80;
		}
		local_28.h = 0xf0;
		local_28.y = sVar10;
		GPUQ_LoadImage__FP4RECTli(&local_28,(this->TextDat).hndDecompBuffer,0);
		iVar9 = 0;
		GPUQ_FlushQ__Fv();
		pPVar2 = GetPal__7TextDati((TextDat *)this,0);
		local_28.y = 0xf0;
		local_28.w = 0x100;
		local_28.x = 0;
		local_28.h = 1;
		LoadImage((short *)&local_28,&pPVar2->NumOfCols);
		while (iVar7 = 0, pPVar6 = pPVar2, iVar9 < 0x10) {
			while (iVar7 < 0x100) {
				uVar1 = *(ushort *)&pPVar6->NumOfCols;
				uVar5 = uVar1 & 0x1f;
				uVar3 = (uint)(uVar1 >> 5) & 0x1f;
				uVar4 = (uint)(uVar1 >> 10) & 0x1f;
				if ((uVar1 & 0x1f) != 0) {
					uVar5 = uVar5 - 1;
				}
				if ((uVar1 >> 5 & 0x1f) != 0) {
					uVar3 = uVar3 - 1;
				}
				if ((uVar1 >> 10 & 0x1f) != 0) {
					uVar4 = uVar4 - 1;
				}
				*(ushort *)&pPVar6->NumOfCols =
						 uVar5 & 0xff | (ushort)((uVar3 & 0xff) << 5) | (ushort)((uVar4 & 0xff) << 10);
				iVar7 = iVar7 + 1;
				pPVar6 = (PAL *)((int)&pPVar6->InVram + 2);
			}
			local_28.y = (short)iVar9 + 0xf0;
			local_28.w = 0x100;
			local_28.x = 0;
			local_28.h = 1;
			LoadImage((short *)&local_28,&pPVar2->NumOfCols);
			iVar9 = iVar9 + 1;
		}
		this->LoadedId = Id;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Unload__7CScreen(struct CScreen *this /*$a0*/)
 // line 1731, offset 0x80080bf4
	/* begin block 1 */
		// Start line: 1732
		// Start offset: 0x80080BF4
	/* end block 1 */
	// End offset: 0x80080C08
	// End Line: 1734

	/* begin block 2 */
		// Start line: 3803
	/* end block 2 */
	// End Line: 3804

void Unload__7CScreen(CScreen *this)

{
	this->LoadedId = -1;
	DumpData__7TextDat((TextDat *)this);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Display__7CScreeniiii(struct CScreen *this /*$a0*/, int Id /*$a1*/, int tpx /*$s1*/, int tpy /*$s4*/, int fadeval /*stack 16*/)
 // line 1737, offset 0x80080c18
	/* begin block 1 */
		// Start line: 1738
		// Start offset: 0x80080C18
		// Variables:
	// 		struct POLY_FT4 *FT4; // stack offset -40
	/* end block 1 */
	// End offset: 0x80080ED0
	// End Line: 1767

	/* begin block 2 */
		// Start line: 3816
	/* end block 2 */
	// End Line: 3817

void Display__7CScreeniiii(CScreen *this,int Id,int tpx,int tpy,int fadeval)

{
	ulong *puVar1;
	uint uVar2;
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
	local_28[0]->tpage = (ushort)uVar2;
	uVar2 = GetClut(0,fadeval + 0xf0U);
	puVar1 = ThisOt;
	local_28[0]->clut = (ushort)uVar2;
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
		local_28[0]->u1 = 'A';
		local_28[0]->v1 = '\0';
		local_28[0]->u2 = '\0';
		local_28[0]->v2 = -0x10;
		local_28[0]->u3 = 'A';
		local_28[0]->v3 = -0x10;
		uVar2 = GetTPage(1,0,0x340,tpy);
		local_28[0]->tpage = (ushort)uVar2;
		uVar2 = GetClut(0,fadeval + 0xf0U);
		puVar1 = ThisOt;
		local_28[0]->clut = (ushort)uVar2;
		local_28[0]->tag = local_28[0]->tag & 0xff000000 | *puVar1 & 0xffffff;
		*puVar1 = *puVar1 & 0xff000000 | (uint)local_28[0] & 0xffffff;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRect__5CPartR7TextDatR4RECT(struct CPart *this /*$s0*/, struct TextDat *TDat /*$a1*/, struct RECT *R /*$s1*/)
 // line 1774, offset 0x80080ef8
	/* begin block 1 */
		// Start line: 1775
		// Start offset: 0x80080EF8
		// Variables:
	// 		struct FRAME_HDR *Fr; // $v0
	/* end block 1 */
	// End offset: 0x80080F58
	// End Line: 1783

	/* begin block 2 */
		// Start line: 3904
	/* end block 2 */
	// End Line: 3905

void SetRect__5CPartR7TextDatR4RECT(CPart *this,TextDat *TDat,RECT *R)

{
	FRAME_HDR *pFVar1;
	
	pFVar1 = GetFr__7TextDati(TDat,this->Piece);
	R->x = this->X;
	R->y = -this->Y;
	R->w = *(ushort *)((int)&pFVar1->X + 2) & 0x1ff;
	R->h = (ushort)pFVar1->Y & 0x1ff;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this /*$s3*/, struct TextDat *TDat /*$s7*/, struct RECT *R /*$fp*/)
 // line 1786, offset 0x80080f70
	/* begin block 1 */
		// Start line: 1787
		// Start offset: 0x80080F70
		// Variables:
	// 		int left; // $s2
	// 		int right; // $s6
	// 		int top; // $s1
	// 		int bottom; // $s5

		/* begin block 1.1 */
			// Start line: 1787
			// Start offset: 0x80080F70

			/* begin block 1.1.1 */
				// Start line: 1793
				// Start offset: 0x80080FB4
				// Variables:
			// 		struct RECT Pr; // stack offset -56

				/* begin block 1.1.1.1 */
					// Start line: 1793
					// Start offset: 0x80080FB4
					// Variables:
				// 		unsigned int f; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x80081068
				// End Line: 1818
			/* end block 1.1.1 */
			// End offset: 0x80081068
			// End Line: 1818
		/* end block 1.1 */
		// End offset: 0x80081080
		// End Line: 1825
	/* end block 1 */
	// End offset: 0x80081098
	// End Line: 1831

	/* begin block 2 */
		// Start line: 3931
	/* end block 2 */
	// End Line: 3932

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
			goto LAB_80081084;
		}
	}
	sVar1 = sVar1 - sVar7;
LAB_80081084:
	R->w = sVar1;
	R->x = sVar7;
	R->y = sVar5;
	R->h = sVar10 - sVar5;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.DatPool()
 // line 1868, offset 0x800810cc
	/* begin block 1 */
		// Start line: 1869
		// Start offset: 0x800810CC
	/* end block 1 */
	// End offset: 0x8008110C
	// End Line: 1869

	/* begin block 2 */
		// Start line: 4104
	/* end block 2 */
	// End Line: 4105

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_DatPool(void)

{
	bool bVar1;
	TextDat *this;
	
	this = &TextDat_800a82fc;
	do {
		___7TextDat(this,2);
		bVar1 = this != &DatPool;
		this = (TextDat *)&this[-1].DecX;
	} while (bVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.DatPool()
 // line 1868, offset 0x80081124
	/* begin block 1 */
		// Start line: 1869
		// Start offset: 0x80081124
	/* end block 1 */
	// End offset: 0x8008115C
	// End Line: 1869

	/* begin block 2 */
		// Start line: 4104
	/* end block 2 */
	// End Line: 4105

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





