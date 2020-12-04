#include "THISDUST.H"
#include "COMPMAP.H"


// decompiled code
// original method signature: 
// struct CompLevelMaps * /*$ra*/ __13CompLevelMaps(struct CompLevelMaps *this /*$s0*/)
 // line 61, offset 0x8007ab30
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x8007AB30
	/* end block 1 */
	// End offset: 0x8007AB30
	// End Line: 62

	/* begin block 2 */
		// Start line: 122
	/* end block 2 */
	// End Line: 123

CompLevelMaps * __13CompLevelMaps(CompLevelMaps *this)

{
	Init__13CompLevelMaps(this);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._13CompLevelMaps(struct CompLevelMaps *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 70, offset 0x8007ab5c
	/* begin block 1 */
		// Start line: 71
		// Start offset: 0x8007AB5C
	/* end block 1 */
	// End offset: 0x8007AB5C
	// End Line: 71

	/* begin block 2 */
		// Start line: 140
	/* end block 2 */
	// End Line: 141

void ___13CompLevelMaps(CompLevelMaps *this,int __in_chrg)

{
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__13CompLevelMaps(struct CompLevelMaps *this /*$a0*/)
 // line 78, offset 0x8007ab84
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x8007AB84

		/* begin block 1.1 */
			// Start line: 80
			// Start offset: 0x8007AB84
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8007ABA0
		// End Line: 81
	/* end block 1 */
	// End offset: 0x8007ABAC
	// End Line: 85

	/* begin block 2 */
		// Start line: 157
	/* end block 2 */
	// End Line: 158

void Init__13CompLevelMaps(CompLevelMaps *this)

{
	long *plVar1;
	int iVar2;
	
	iVar2 = 0x14;
	plVar1 = this->hndMaps + 0x14;
	do {
		*plVar1 = -1;
		iVar2 = iVar2 + -1;
		plVar1 = plVar1 + -1;
	} while (-1 < iVar2);
	this->CurrentMap = (DLevel *)0x0;
	this->CachedMapNum = -1;
	this->hndCachedMap = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Dump__13CompLevelMaps(struct CompLevelMaps *this /*$s1*/)
 // line 92, offset 0x8007abb4
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x8007ABB4

		/* begin block 1.1 */
			// Start line: 99
			// Start offset: 0x8007ABE8

			/* begin block 1.1.1 */
				// Start line: 100
				// Start offset: 0x8007ABF8
			/* end block 1.1.1 */
			// End offset: 0x8007AC20
			// End Line: 103
		/* end block 1.1 */
		// End offset: 0x8007AC20
		// End Line: 103

		/* begin block 1.2 */
			// Start line: 108
			// Start offset: 0x8007AC20
			// Variables:
		// 		int f; // $s0
		/* end block 1.2 */
		// End offset: 0x8007AC40
		// End Line: 109
	/* end block 1 */
	// End offset: 0x8007AC40
	// End Line: 109

	/* begin block 2 */
		// Start line: 185
	/* end block 2 */
	// End Line: 186

void Dump__13CompLevelMaps(CompLevelMaps *this)

{
	uchar uVar1;
	int MapNum;
	
	if (this->CurrentMap != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x5e);
	}
	MapNum = 0;
	if (this->hndCachedMap != -1) {
		uVar1 = GAL_Free(this->hndCachedMap);
		if (uVar1 != '\0') goto LAB_8007ac28;
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x66);
	}
	MapNum = 0;
LAB_8007ac28:
	do {
		DumpMap__13CompLevelMapsi(this,MapNum);
		MapNum = MapNum + 1;
	} while (MapNum < 0x15);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpMap__13CompLevelMapsi(struct CompLevelMaps *this /*$a0*/, int MapNum /*$a1*/)
 // line 117, offset 0x8007ac58
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x8007AC58

		/* begin block 1.1 */
			// Start line: 118
			// Start offset: 0x8007AC58

			/* begin block 1.1.1 */
				// Start line: 120
				// Start offset: 0x8007AC80
			/* end block 1.1.1 */
			// End offset: 0x8007ACA8
			// End Line: 124
		/* end block 1.1 */
		// End offset: 0x8007ACA8
		// End Line: 124
	/* end block 1 */
	// End offset: 0x8007ACA8
	// End Line: 124

	/* begin block 2 */
		// Start line: 235
	/* end block 2 */
	// End Line: 236

void DumpMap__13CompLevelMapsi(CompLevelMaps *this,int MapNum)

{
	uchar uVar1;
	int Handle;
	
	Handle = this->hndMaps[MapNum];
	if (Handle != -1) {
		uVar1 = GAL_Free(Handle);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x7a);
		}
		this->hndMaps[MapNum] = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// struct DLevel * /*$ra*/ UseMap__13CompLevelMapsi(struct CompLevelMaps *this /*$s0*/, int Val /*$s1*/)
 // line 132, offset 0x8007acc0
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x8007ACC0
	/* end block 1 */
	// End offset: 0x8007AD7C
	// End Line: 153

	/* begin block 2 */
		// Start line: 267
	/* end block 2 */
	// End Line: 268

DLevel * UseMap__13CompLevelMapsi(CompLevelMaps *this,int Val)

{
	undefined *puVar1;
	DLevel *pDVar2;
	
	if (0x14 < (uint)Val) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x86);
	}
	if (this->CurrentMap != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x89);
	}
	puVar1 = (undefined *)IsMapCached__13CompLevelMapsi(this,Val);
	if (puVar1 != &DAT_00000001) {
		if (this->hndCachedMap != -1) {
			WriteBackCachedMap__13CompLevelMaps(this);
		}
		DecompToCached__13CompLevelMapsi(this,Val);
	}
	pDVar2 = (DLevel *)GAL_Lock(this->hndCachedMap);
	this->CurrentMap = pDVar2;
	if (pDVar2 == (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x96);
	}
	return this->CurrentMap;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this /*$s0*/, struct DLevel *Map /*$a1*/)
 // line 160, offset 0x8007ad94
	/* begin block 1 */
		// Start line: 161
		// Start offset: 0x8007AD94
	/* end block 1 */
	// End offset: 0x8007ADF0
	// End Line: 172

	/* begin block 2 */
		// Start line: 323
	/* end block 2 */
	// End Line: 324

void ReleaseMap__13CompLevelMapsP6DLevel(CompLevelMaps *this,DLevel *Map)

{
	uchar uVar1;
	
	if (Map != this->CurrentMap) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xa3);
	}
	uVar1 = GAL_Unlock(this->hndCachedMap);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xa9);
	}
	this->CurrentMap = (DLevel *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this /*$s0*/, int Val /*$s1*/)
 // line 179, offset 0x8007ae04
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x8007AE04
	/* end block 1 */
	// End offset: 0x8007AE60
	// End Line: 186

	/* begin block 2 */
		// Start line: 361
	/* end block 2 */
	// End Line: 362

void * IsMapCached__13CompLevelMapsi(CompLevelMaps *this,int Val)

{
	void *pvVar1;
	
	if (0x14 < (uint)Val) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xb4);
	}
	if (this->hndCachedMap == -1) {
		pvVar1 = (void *)0x0;
	}
	else {
		pvVar1 = (void *)(uint)(this->CachedMapNum == Val);
	}
	return pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ WriteBackCachedMap__13CompLevelMaps(struct CompLevelMaps *this /*$s1*/)
 // line 195, offset 0x8007ae78
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x8007AE78
		// Variables:
	// 		unsigned char *DecDest; // $s0
	// 		long hndDec; // $s3
	// 		int CompSize; // $s2

		/* begin block 1.1 */
			// Start line: 225
			// Start offset: 0x8007AF70

			/* begin block 1.1.1 */
				// Start line: 230
				// Start offset: 0x8007AFAC
				// Variables:
			// 		long hndSplit; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8007AFF8
			// End Line: 236
		/* end block 1.1 */
		// End offset: 0x8007AFF8
		// End Line: 236
	/* end block 1 */
	// End offset: 0x8007B06C
	// End Line: 251

	/* begin block 2 */
		// Start line: 395
	/* end block 2 */
	// End Line: 396

void WriteBackCachedMap__13CompLevelMaps(CompLevelMaps *this)

{
	uchar uVar1;
	long Handle;
	uchar *Dest;
	DLevel *pDVar2;
	uint w;
	uint uVar3;
	uint uVar4;
	long Handle_00;
	
	if (this->hndCachedMap == -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xc5);
	}
	if (this->hndMaps[this->CachedMapNum] != -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xc9);
	}
	Handle = GAL_Alloc(0xf1c,1,"TEMPMAP");
	if (Handle == -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xd4);
	}
	Dest = (uchar *)GAL_Lock(Handle);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xd6);
	}
	if (this->CurrentMap == (DLevel *)0x0) {
		pDVar2 = (DLevel *)GAL_Lock(this->hndCachedMap);
		this->CurrentMap = pDVar2;
		if (pDVar2 == (DLevel *)0x0) {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xdb);
		}
	}
	w = DoComp__13CompLevelMapsPUcT1i(this,Dest,(uchar *)this->CurrentMap,0xf1c);
	uVar3 = GU_AlignVal(w,4);
	uVar4 = GU_AlignVal(0xf1c,4);
	if (uVar3 != uVar4) {
		Handle_00 = GAL_SplitBlock(Handle,w);
		if (Handle_00 == -1) {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xe9);
		}
		uVar1 = GAL_Free(Handle_00);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xeb);
		}
	}
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xf0);
	}
	this->hndMaps[this->CachedMapNum] = Handle;
	GAL_Free(this->hndCachedMap);
	if (this->hndCachedMap == 0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xf5);
	}
	this->hndCachedMap = -1;
	this->CurrentMap = (DLevel *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this /*$s0*/, int Val /*$s5*/)
 // line 258, offset 0x8007b08c
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x8007B08C
		// Variables:
	// 		struct DLevel *DPtr; // $s1

		/* begin block 1.1 */
			// Start line: 281
			// Start offset: 0x8007B13C

			/* begin block 1.1.1 */
				// Start line: 284
				// Start offset: 0x8007B168
				// Variables:
			// 		unsigned char *SrcPtr; // $s3
			/* end block 1.1.1 */
			// End offset: 0x8007B1D8
			// End Line: 297
		/* end block 1.1 */
		// End offset: 0x8007B1D8
		// End Line: 297
	/* end block 1 */
	// End offset: 0x8007B204
	// End Line: 303

	/* begin block 2 */
		// Start line: 521
	/* end block 2 */
	// End Line: 522

void DecompToCached__13CompLevelMapsi(CompLevelMaps *this,int Val)

{
	uchar uVar1;
	long lVar2;
	uchar *Dest;
	uchar *Source;
	long *plVar3;
	
	if (this->CurrentMap != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x107);
	}
	if (this->hndCachedMap == -1) {
		lVar2 = GAL_Alloc(0xf1c,1,"DECMAP");
		this->hndCachedMap = lVar2;
		if (lVar2 == -1) {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x10e);
		}
	}
	Dest = (uchar *)GAL_Lock(this->hndCachedMap);
	if (Dest == (uchar *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x114);
	}
	plVar3 = this->hndMaps + Val;
	if (*plVar3 == -1) {
		memset(Dest,0xff,0xf1c);
	}
	else {
		Source = (uchar *)GAL_Lock(*plVar3);
		if (Source == (uchar *)0x0) {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x120);
		}
		DoDecomp__13CompLevelMapsPUcT1ii(this,Dest,Source,0xf1c,plVar3[0x15]);
		uVar1 = GAL_Free(*plVar3);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x127);
		}
		*plVar3 = -1;
	}
	uVar1 = GAL_Unlock(this->hndCachedMap);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",300);
	}
	this->CachedMapNum = Val;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this /*$s0*/, struct CompLevelMemImage *Dest /*$s5*/)
 // line 310, offset 0x8007b22c
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x8007B22C
		// Variables:
	// 		unsigned char *DestPtr; // $s4

		/* begin block 1.1 */
			// Start line: 325
			// Start offset: 0x8007B290
			// Variables:
		// 		int f; // $s6

			/* begin block 1.1.1 */
				// Start line: 328
				// Start offset: 0x8007B2A8
				// Variables:
			// 		long hnd; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 331
					// Start offset: 0x8007B2B4

					/* begin block 1.1.1.1.1 */
						// Start line: 336
						// Start offset: 0x8007B2C8
						// Variables:
					// 		unsigned char *MyData; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007B324
					// End Line: 347
				/* end block 1.1.1.1 */
				// End offset: 0x8007B340
				// End Line: 352
			/* end block 1.1.1 */
			// End offset: 0x8007B340
			// End Line: 352
		/* end block 1.1 */
		// End offset: 0x8007B350
		// End Line: 353
	/* end block 1 */
	// End offset: 0x8007B360
	// End Line: 357

	/* begin block 2 */
		// Start line: 625
	/* end block 2 */
	// End Line: 626

void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage
							 (CompLevelMaps *this,CompLevelMemImage *Dest)

{
	uchar uVar1;
	void *__src;
	uint uVar2;
	int Handle;
	CompLevelMemImage *pCVar3;
	CompLevelMemImage *__dest;
	int iVar4;
	
	if (this->CurrentMap != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x13b);
	}
	if (this->hndCachedMap != -1) {
		WriteBackCachedMap__13CompLevelMaps(this);
	}
	Dest->Version = 0x100;
	__dest = Dest + 1;
	iVar4 = 0;
	pCVar3 = Dest;
	while (iVar4 < 0x15) {
		*(CompLevelMemImage **)pCVar3->DataOffset = (CompLevelMemImage *)((int)__dest - (int)Dest);
		Handle = this->hndMaps[0];
		if (Handle == -1) {
			pCVar3->Size[0] = 0;
		}
		else {
			__src = GAL_Lock(Handle);
			if (__src == (void *)0x0) {
				DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x154);
			}
			memcpy(__dest,__src,this->Sizes[0]);
			uVar1 = GAL_Unlock(Handle);
			if (uVar1 == '\0') {
				DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x158);
			}
			pCVar3->Size[0] = this->Sizes[0];
			__dest = (CompLevelMemImage *)((int)&__dest->Version + this->Sizes[0]);
		}
		this = (CompLevelMaps *)(this->hndMaps + 1);
		pCVar3 = (CompLevelMemImage *)&pCVar3->TotalSize;
		iVar4 = iVar4 + 1;
	}
	uVar2 = GU_AlignVal((uint)((int)__dest - (int)Dest),4);
	Dest->TotalSize = uVar2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this /*$s7*/, struct CompLevelMemImage *Src /*$fp*/)
 // line 364, offset 0x8007b38c
	/* begin block 1 */
		// Start line: 365
		// Start offset: 0x8007B38C

		/* begin block 1.1 */
			// Start line: 365
			// Start offset: 0x8007B38C
			// Variables:
		// 		int f; // $s4

			/* begin block 1.1.1 */
				// Start line: 372
				// Start offset: 0x8007B3CC

				/* begin block 1.1.1.1 */
					// Start line: 374
					// Start offset: 0x8007B3D8

					/* begin block 1.1.1.1.1 */
						// Start line: 375
						// Start offset: 0x8007B3E8
						// Variables:
					// 		long hnd; // $s1
					// 		unsigned char *DestData; // $s0
					// 		int Offset; // $s5
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007B48C
					// End Line: 400
				/* end block 1.1.1.1 */
				// End offset: 0x8007B48C
				// End Line: 400
			/* end block 1.1.1 */
			// End offset: 0x8007B48C
			// End Line: 400
		/* end block 1.1 */
		// End offset: 0x8007B498
		// End Line: 402
	/* end block 1 */
	// End offset: 0x8007B498
	// End Line: 402

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage
							 (CompLevelMaps *this,CompLevelMemImage *Src)

{
	uchar uVar1;
	long Handle;
	void *__dest;
	ulong Size;
	CompLevelMemImage *pCVar2;
	int iVar3;
	ulong uVar4;
	
	Dump__13CompLevelMaps(this);
	iVar3 = 0;
	pCVar2 = Src;
	while (iVar3 < 0x15) {
		Size = pCVar2->Size[0];
		if (Size != 0) {
			uVar4 = pCVar2->DataOffset[0];
			Handle = GAL_Alloc(Size,1,"COMPMAP");
			if (Handle == -1) {
				DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x182);
			}
			__dest = GAL_Lock(Handle);
			if (__dest == (void *)0x0) {
				DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x185);
			}
			memcpy(__dest,(void *)((int)&Src->Version + uVar4),Size);
			uVar1 = GAL_Unlock(Handle);
			if (uVar1 == '\0') {
				DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x18c);
			}
			this->hndMaps[iVar3] = Handle;
			(this->hndMaps + iVar3)[0x15] = Size;
		}
		pCVar2 = (CompLevelMemImage *)&pCVar2->TotalSize;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Source /*$a2*/, int SourceSize /*$s0*/)
 // line 408, offset 0x8007b4cc
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x8007B4CC
	/* end block 1 */
	// End offset: 0x8007B4F0
	// End Line: 415

	/* begin block 2 */
		// Start line: 823
	/* end block 2 */
	// End Line: 824

int DoComp__13CompLevelMapsPUcT1i(CompLevelMaps *this,uchar *Dest,uchar *Source,int SourceSize)

{
	memcpy(Dest,Source,SourceSize);
	return SourceSize;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this /*$a0*/, unsigned char *Dest /*$a1*/, unsigned char *Source /*$a2*/, int DestSize /*$s0*/, int SourceSize /*stack 16*/)
 // line 418, offset 0x8007b504
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x8007B504
	/* end block 1 */
	// End offset: 0x8007B528
	// End Line: 421

	/* begin block 2 */
		// Start line: 848
	/* end block 2 */
	// End Line: 849

int DoDecomp__13CompLevelMapsPUcT1ii
							(CompLevelMaps *this,uchar *Dest,uchar *Source,int DestSize,int SourceSize)

{
	memcpy(Dest,Source,SourceSize);
	return DestSize;
}





