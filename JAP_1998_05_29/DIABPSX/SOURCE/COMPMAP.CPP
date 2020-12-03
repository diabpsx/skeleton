#include "THISDUST.H"
#include "COMPMAP.H"


// decompiled code
// original method signature: 
// struct CompLevelMaps * /*$ra*/ __13CompLevelMapsRC9CompClass(struct CompLevelMaps *this /*$s2*/, struct CompClass *NewCompObj /*$a1*/)
 // line 60, offset 0x80081608
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x80081648
	/* end block 1 */
	// End offset: 0x80081648
	// End Line: 63

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

CompLevelMaps * __13CompLevelMapsRC9CompClass(CompLevelMaps *this,CompClass *NewCompObj)

{
	int iVar1;
	AMap *this_00;
	
	this_00 = this->TheMaps;
	iVar1 = 0x15;
	this->CompObj = NewCompObj;
	do {
		__4AMap(this_00);
		iVar1 = iVar1 + -1;
		this_00 = this_00 + 1;
	} while (iVar1 != -1);
	Init__13CompLevelMaps(this);
	return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._13CompLevelMaps(struct CompLevelMaps *this /*$s1*/, int __in_chrg /*$s3*/)
 // line 71, offset 0x80081674
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x80081674
	/* end block 1 */
	// End offset: 0x80081674
	// End Line: 72

	/* begin block 2 */
		// Start line: 145
	/* end block 2 */
	// End Line: 146

void ___13CompLevelMaps(CompLevelMaps *this,int __in_chrg)

{
	bool bVar1;
	AMap *this_00;
	
	Init__13CompLevelMaps(this);
	if ((this != (CompLevelMaps *)0xfffffffc) && (this->TheMaps != (AMap *)&this->LastNumOut)) {
		this_00 = this->TheMaps + 0x15;
		do {
			___4AMap(this_00,2);
			bVar1 = this->TheMaps != this_00;
			this_00 = this_00 + -1;
		} while (bVar1);
	}
	if ((__in_chrg & 1U) != 0) {
		__builtin_delete(this);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__13CompLevelMaps(struct CompLevelMaps *this /*$s0*/)
 // line 80, offset 0x80081704
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x80081704
	/* end block 1 */
	// End offset: 0x80081720
	// End Line: 84

	/* begin block 2 */
		// Start line: 163
	/* end block 2 */
	// End Line: 164

void Init__13CompLevelMaps(CompLevelMaps *this)

{
	InitAllMaps__13CompLevelMaps(this);
	this->LastMapOut = (DLevel *)0x0;
	this->MapOut = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this /*$s2*/)
 // line 91, offset 0x80081734
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x80081734

		/* begin block 1.1 */
			// Start line: 92
			// Start offset: 0x80081734
			// Variables:
		// 		int f; // $s1
		/* end block 1.1 */
		// End offset: 0x8008176C
		// End Line: 94
	/* end block 1 */
	// End offset: 0x8008176C
	// End Line: 94

	/* begin block 2 */
		// Start line: 185
	/* end block 2 */
	// End Line: 186

void InitAllMaps__13CompLevelMaps(CompLevelMaps *this)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 4;
	do {
		Init__4AMap((AMap *)((int)&this->CompObj + iVar1));
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x10;
	} while (iVar2 < 0x16);
	return;
}



// decompiled code
// original method signature: 
// struct DLevel * /*$ra*/ GetMap__13CompLevelMapsi(struct CompLevelMaps *this /*$s0*/, int MapNum /*$s1*/)
 // line 101, offset 0x80081788
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x80081788
	/* end block 1 */
	// End offset: 0x800817EC
	// End Line: 112

	/* begin block 2 */
		// Start line: 207
	/* end block 2 */
	// End Line: 208

DLevel * GetMap__13CompLevelMapsi(CompLevelMaps *this,int MapNum)

{
	DLevel *pDVar1;
	
	if (this->MapOut != (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x66);
	}
	MakeSureMapXDecomped__13CompLevelMapsi(this,MapNum);
	*(undefined **)&this->MapOut = &DAT_00000001;
	this->LastNumOut = MapNum;
	pDVar1 = GetMap__4AMap(this->TheMaps + MapNum);
	this->LastMapOut = pDVar1;
	return pDVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this /*$s0*/, struct DLevel *Dl /*$s1*/)
 // line 119, offset 0x80081804
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x80081804
	/* end block 1 */
	// End offset: 0x8008188C
	// End Line: 129

	/* begin block 2 */
		// Start line: 246
	/* end block 2 */
	// End Line: 247

void ReleaseMap__13CompLevelMapsP6DLevel(CompLevelMaps *this,DLevel *Dl)

{
	if (this->MapOut == (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x78);
	}
	this->MapOut = (void *)0x0;
	CheckMapNum__13CompLevelMapsi(this,this->LastNumOut);
	if (Dl != this->LastMapOut) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x7c);
	}
	ReleaseMap__4AMapP6DLevel(this->TheMaps + this->LastNumOut,Dl);
	this->LastMapOut = (DLevel *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this /*$s4*/, struct CompressedLevs *Levs /*$s3*/)
 // line 152, offset 0x800818a4
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x800818A4

		/* begin block 1.1 */
			// Start line: 159
			// Start offset: 0x800818E8
			// Variables:
		// 		int f; // $s2

			/* begin block 1.1.1 */
				// Start line: 163
				// Start offset: 0x800818FC
			/* end block 1.1.1 */
			// End offset: 0x80081908
			// End Line: 167
		/* end block 1.1 */
		// End offset: 0x8008192C
		// End Line: 169
	/* end block 1 */
	// End offset: 0x8008192C
	// End Line: 169

	/* begin block 2 */
		// Start line: 312
	/* end block 2 */
	// End Line: 313

void ImportData__13CompLevelMapsP14CompressedLevs(CompLevelMaps *this,CompressedLevs *Levs)

{
	ulong *puVar1;
	ulong *puVar2;
	bool bVar3;
	AMap *this_00;
	CompressedLevs *pCVar4;
	int iVar5;
	int iVar6;
	
	if (Levs->Version != 0x100) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x9b);
	}
	Init__13CompLevelMaps(this);
	iVar6 = 0;
	iVar5 = 4;
	bVar3 = true;
	pCVar4 = Levs;
	while (this_00 = (AMap *)((int)&this->CompObj + iVar5), bVar3) {
		iVar5 = iVar5 + 0x10;
		puVar1 = pCVar4->Size;
		puVar2 = pCVar4->Offset;
		pCVar4 = (CompressedLevs *)pCVar4->Offset;
		iVar6 = iVar6 + 1;
		SetCompData__4AMapPCUci(this_00,(uchar *)((int)&Levs->Version + *puVar2),*puVar1);
		bVar3 = iVar6 < 0x16;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this /*$s5*/, unsigned char *U8Dest /*$s4*/)
 // line 176, offset 0x80081950
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x80081950
		// Variables:
	// 		unsigned char *BinPtr; // $s1

		/* begin block 1.1 */
			// Start line: 177
			// Start offset: 0x80081950
			// Variables:
		// 		int f; // $s3
		/* end block 1.1 */
		// End offset: 0x800819D0
		// End Line: 191
	/* end block 1 */
	// End offset: 0x800819D4
	// End Line: 192

	/* begin block 2 */
		// Start line: 363
	/* end block 2 */
	// End Line: 364

int ExportData__13CompLevelMapsPUc(CompLevelMaps *this,uchar *U8Dest)

{
	ulong Size;
	long lVar1;
	AMap *this_00;
	uchar *puVar2;
	uchar *Dest;
	int iVar3;
	int iVar4;
	
	Dest = U8Dest + 0xb4;
	iVar4 = 0;
	iVar3 = 4;
	*(undefined4 *)U8Dest = 0x100;
	puVar2 = U8Dest;
	do {
		this_00 = (AMap *)((int)&this->CompObj + iVar3);
		iVar3 = iVar3 + 0x10;
		*(uchar **)(puVar2 + 4) = Dest + -(int)U8Dest;
		iVar4 = iVar4 + 1;
		Size = WriteCompressed__4AMapPUcRC9CompClass(this_00,Dest,this->CompObj);
		*(ulong *)(puVar2 + 0x5c) = Size;
		lVar1 = GAL_AlignSizeToType(Size,1);
		Dest = Dest + lVar1;
		puVar2 = puVar2 + 4;
	} while (iVar4 < 0x16);
	return (int)(Dest + -(int)U8Dest);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeSureMapXDecomped__13CompLevelMapsi(struct CompLevelMaps *this /*$s2*/, int MapNum /*$s3*/)
 // line 199, offset 0x800819fc
	/* begin block 1 */
		// Start line: 200
		// Start offset: 0x800819FC

		/* begin block 1.1 */
			// Start line: 200
			// Start offset: 0x800819FC
			// Variables:
		// 		int f; // $s1

			/* begin block 1.1.1 */
				// Start line: 204
				// Start offset: 0x80081A24

				/* begin block 1.1.1.1 */
					// Start line: 206
					// Start offset: 0x80081A30

					/* begin block 1.1.1.1.1 */
						// Start line: 207
						// Start offset: 0x80081A38
					/* end block 1.1.1.1.1 */
					// End offset: 0x80081A58
					// End Line: 211
				/* end block 1.1.1.1 */
				// End offset: 0x80081A58
				// End Line: 211
			/* end block 1.1.1 */
			// End offset: 0x80081A58
			// End Line: 211
		/* end block 1.1 */
		// End offset: 0x80081A64
		// End Line: 213
	/* end block 1 */
	// End offset: 0x80081A88
	// End Line: 220

	/* begin block 2 */
		// Start line: 446
	/* end block 2 */
	// End Line: 447

void MakeSureMapXDecomped__13CompLevelMapsi(CompLevelMaps *this,int MapNum)

{
	undefined *puVar1;
	void *pvVar2;
	AMap *this_00;
	int iVar3;
	
	iVar3 = 0;
	this_00 = this->TheMaps;
	while (iVar3 < 0x16) {
		if ((iVar3 != MapNum) &&
			 (puVar1 = (undefined *)IsCompressed__4AMap(this_00), puVar1 != &DAT_00000001)) {
			CompressMap__4AMapRC9CompClass(this_00,this->CompObj);
		}
		this_00 = this_00 + 1;
		iVar3 = iVar3 + 1;
	}
	pvVar2 = IsCompressed__4AMap(this->TheMaps + MapNum);
	if (pvVar2 != (void *)0x0) {
		DecompressMap__4AMapRC9CompClass(this->TheMaps + MapNum,this->CompObj);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__4AMap(struct AMap *this /*$s0*/)
 // line 229, offset 0x80081aa8
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x80081AA8

		/* begin block 1.1 */
			// Start line: 230
			// Start offset: 0x80081AA8

			/* begin block 1.1.1 */
				// Start line: 232
				// Start offset: 0x80081AC8
			/* end block 1.1.1 */
			// End offset: 0x80081AF0
			// End Line: 235
		/* end block 1.1 */
		// End offset: 0x80081AF0
		// End Line: 235
	/* end block 1 */
	// End offset: 0x80081B00
	// End Line: 241

	/* begin block 2 */
		// Start line: 514
	/* end block 2 */
	// End Line: 515

void Init__4AMap(AMap *this)

{
	uchar uVar1;
	
	if ((this->hnd != -1) && (uVar1 = GAL_Free(this->hnd), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0xea);
	}
	this->hnd = -1;
	this->CurrLevel = (DLevel *)0x0;
	this->Compressed = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this /*$s1*/, unsigned char *Dest /*$s0*/, struct CompClass *CompObj /*$a1*/)
 // line 248, offset 0x80081b14
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x80081B14
		// Variables:
	// 		unsigned char *Data; // $s0
	/* end block 1 */
	// End offset: 0x80081B70
	// End Line: 258

	/* begin block 2 */
		// Start line: 552
	/* end block 2 */
	// End Line: 553

int WriteCompressed__4AMapPUcRC9CompClass(AMap *this,uchar *Dest,CompClass *CompObj)

{
	DLevel *Dl;
	
	if (this->Compressed == (void *)0x0) {
		CompressMap__4AMapRC9CompClass(this,CompObj);
	}
	Dl = GetMap__4AMap(this);
	memcpy(Dest,Dl,this->Size);
	ReleaseMap__4AMapP6DLevel(this,Dl);
	return this->Size;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCompData__4AMapPCUci(struct AMap *this /*$s2*/, unsigned char *Data /*$s4*/, int NewSize /*$s3*/)
 // line 265, offset 0x80081b88
	/* begin block 1 */
		// Start line: 266
		// Start offset: 0x80081B88
		// Variables:
	// 		long NewHnd; // $s1
	// 		unsigned char *Dest; // $s0
	/* end block 1 */
	// End offset: 0x80081C54
	// End Line: 286

	/* begin block 2 */
		// Start line: 587
	/* end block 2 */
	// End Line: 588

void SetCompData__4AMapPCUci(AMap *this,uchar *Data,int NewSize)

{
	uchar uVar1;
	long Handle;
	void *__dest;
	
	Init__4AMap(this);
	Handle = GAL_Alloc(NewSize,1,(char *)0x0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x111);
	}
	__dest = GAL_Lock(Handle);
	if (__dest == (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x114);
	}
	memcpy(__dest,Data,NewSize);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x119);
	}
	this->hnd = Handle;
	this->Compressed = (void *)0x1;
	this->Size = NewSize;
	return;
}



// decompiled code
// original method signature: 
// struct DLevel * /*$ra*/ GetMap__4AMap(struct AMap *this /*$s2*/)
 // line 293, offset 0x80081c78
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x80081C78
		// Variables:
	// 		struct DLevel *NewCurrLevel; // $s0

		/* begin block 1.1 */
			// Start line: 303
			// Start offset: 0x80081CB0

			/* begin block 1.1.1 */
				// Start line: 304
				// Start offset: 0x80081CC0
				// Variables:
			// 		long NewHnd; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80081D4C
			// End Line: 318
		/* end block 1.1 */
		// End offset: 0x80081D4C
		// End Line: 318
	/* end block 1 */
	// End offset: 0x80081D7C
	// End Line: 332

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

DLevel * GetMap__4AMap(AMap *this)

{
	uchar uVar1;
	long Handle;
	void *__s;
	DLevel *pDVar2;
	
	if (this->CurrLevel != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x12a);
	}
	if (this->hnd == -1) {
		Handle = GAL_Alloc((ulong)&DAT_00001258,1,(char *)&PTR_DAT_8011bcbc);
		if (Handle == -1) {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x133);
		}
		__s = GAL_Lock(Handle);
		if (__s == (void *)0x0) {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x136);
		}
		memset(__s,0xff,(size_t)&DAT_00001258);
		uVar1 = GAL_Unlock(Handle);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x13b);
		}
		this->hnd = Handle;
	}
	pDVar2 = (DLevel *)GAL_Lock(this->hnd);
	if (pDVar2 == (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x143);
	}
	this->CurrLevel = pDVar2;
	return pDVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseMap__4AMapP6DLevel(struct AMap *this /*$s0*/, struct DLevel *Dl /*$a1*/)
 // line 339, offset 0x80081d98
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x80081D98
	/* end block 1 */
	// End offset: 0x80081E14
	// End Line: 354

	/* begin block 2 */
		// Start line: 736
	/* end block 2 */
	// End Line: 737

void ReleaseMap__4AMapP6DLevel(AMap *this,DLevel *Dl)

{
	uchar uVar1;
	
	if (Dl != this->CurrLevel) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x156);
	}
	if (this->hnd == -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x15a);
	}
	uVar1 = GAL_Unlock(this->hnd);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x15f);
	}
	this->CurrLevel = (DLevel *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CompressMap__4AMapRC9CompClass(struct AMap *this /*$s0*/, struct CompClass *CompObj /*$s3*/)
 // line 361, offset 0x80081e28
	/* begin block 1 */
		// Start line: 362
		// Start offset: 0x80081E28
		// Variables:
	// 		long NewHnd; // $s2
	// 		unsigned char *Dest; // $s1
	// 		struct DLevel *Dlev; // $s1
	// 		long SplitHnd; // $v0
	/* end block 1 */
	// End offset: 0x80081FC8
	// End Line: 411

	/* begin block 2 */
		// Start line: 780
	/* end block 2 */
	// End Line: 781

void CompressMap__4AMapRC9CompClass(AMap *this,CompClass *CompObj)

{
	uchar uVar1;
	long Handle;
	void *pvVar2;
	DLevel *Dl;
	int iVar3;
	ulong Size;
	long Handle_00;
	
	if (this->CurrLevel != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x16a);
	}
	if (this->Compressed != (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x16b);
	}
	Handle = GAL_Alloc((ulong)&DAT_00001258,1,(char *)PTR_ARRAY_8011bcc0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x174);
	}
	pvVar2 = GAL_Lock(Handle);
	if (pvVar2 == (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x177);
	}
	Dl = GetMap__4AMap(this);
	iVar3 = (**(code **)(*(int *)CompObj + 0xc))
										(CompObj->_vf + (int)*(short *)(*(int *)CompObj + 8),pvVar2,Dl,&DAT_00001258);
	this->Size = iVar3;
	if (0x1258 < iVar3) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x17e);
	}
	Size = GAL_AlignSizeToType(this->Size,1);
	Handle_00 = GAL_SplitBlock(Handle,Size);
	if ((Handle_00 != -1) && (uVar1 = GAL_Free(Handle_00), uVar1 == '\0')) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x188);
	}
	ReleaseMap__4AMapP6DLevel(this,Dl);
	Init__4AMap(this);
	uVar1 = GAL_Unlock(Handle);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x193);
	}
	this->hnd = Handle;
	this->Compressed = (void *)0x1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DecompressMap__4AMapRC9CompClass(struct AMap *this /*$s1*/, struct CompClass *CompObj /*$s3*/)
 // line 418, offset 0x80081fec
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x80081FEC
		// Variables:
	// 		long NewHnd; // $s2
	// 		unsigned char *Dest; // $s0
	// 		unsigned char *Src; // $s0
	/* end block 1 */
	// End offset: 0x80082100
	// End Line: 452

	/* begin block 2 */
		// Start line: 901
	/* end block 2 */
	// End Line: 902

void DecompressMap__4AMapRC9CompClass(AMap *this,CompClass *CompObj)

{
	long Handle;
	void *pvVar1;
	DLevel *Dl;
	
	if (this->CurrLevel != (DLevel *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x1a7);
	}
	if (this->Compressed == (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x1a8);
	}
	Handle = GAL_Alloc((ulong)&DAT_00001258,1,(char *)PTR_ARRAY_8011bcc0);
	if (Handle == -1) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x1b2);
	}
	pvVar1 = GAL_Lock(Handle);
	if (pvVar1 == (void *)0x0) {
		DBG_Error((char *)0x0,"source/COMPMAP.cpp",0x1b5);
	}
	Dl = GetMap__4AMap(this);
	(**(code **)(*(int *)CompObj + 0x14))
						(CompObj->_vf + (int)*(short *)(*(int *)CompObj + 0x10),pvVar1,Dl,&DAT_00001258,
						 this->Size);
	ReleaseMap__4AMapP6DLevel(this,Dl);
	Init__4AMap(this);
	this->hnd = Handle;
	this->Compressed = (void *)0x0;
	return;
}





