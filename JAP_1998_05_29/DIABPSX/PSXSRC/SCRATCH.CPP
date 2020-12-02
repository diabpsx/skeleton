#include "THISDUST.H"
#include "SCRATCH.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ IsEqual__C8PalEntryUsUsi(struct PalEntry *this /*$a0*/, unsigned short _SourceClut /*$a1*/, unsigned short _PixVal /*$a2*/, int _NumOfCols /*$a3*/)
 // line 77, offset 0x8009b288
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x8009B288
	/* end block 1 */
	// End offset: 0x8009B2B8
	// End Line: 78

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

void * IsEqual__C8PalEntryUsUsi(PalEntry *this,ushort _SourceClut,ushort _PixVal,int _NumOfCols)

{
	void *pvVar1;
	
	pvVar1 = (void *)0x0;
	if ((_SourceClut == this->SourceClut) && (_PixVal == this->PixVal)) {
		pvVar1 = (void *)(uint)((uint)this->NumOfCols == _NumOfCols);
	}
	return pvVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetClut__C8PalEntry(struct PalEntry *this /*$a0*/)
 // line 82, offset 0x8009b27c
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x8009B27C
	/* end block 1 */
	// End offset: 0x8009B280
	// End Line: 83

	/* begin block 2 */
		// Start line: 164
	/* end block 2 */
	// End Line: 165

ushort GetClut__C8PalEntry(PalEntry *this)

{
	return this->Clut;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__8PalEntry(struct PalEntry *this /*$a0*/)
 // line 83, offset 0x8009b274
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x8009B274
	/* end block 1 */
	// End offset: 0x8009B274
	// End Line: 84

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

void Init__8PalEntry(PalEntry *this)

{
	this->NumOfCols = 0;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SetJustUsed__8PalEntryb(struct PalEntry *this /*$a0*/, void * NewVal /*$a1*/)
 // line 86, offset 0x8009b26c
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x8009B26C
	/* end block 1 */
	// End offset: 0x8009B26C
	// End Line: 90

	/* begin block 2 */
		// Start line: 175
	/* end block 2 */
	// End Line: 176

void * SetJustUsed__8PalEntryb(PalEntry *this,void *NewVal)

{
	return NewVal;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Set__8PalEntryRC7InitPos(struct PalEntry *this /*$a0*/, struct InitPos *NewPos /*$a1*/)
 // line 93, offset 0x8009b240
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x8009B240
	/* end block 1 */
	// End offset: 0x8009B264
	// End Line: 97

	/* begin block 2 */
		// Start line: 187
	/* end block 2 */
	// End Line: 188

void Set__8PalEntryRC7InitPos(PalEntry *this,InitPos *NewPos)

{
	ushort uVar1;
	
	uVar1 = NewPos->y;
	this->MyX = NewPos->x;
	this->MyY = uVar1;
	this->Clut = uVar1 << 6 | this->MyX >> 4 & 0x3f;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Set__8PalEntryUsUsi(struct PalEntry *this /*$a0*/, unsigned short _SourceClut /*$a1*/, unsigned short _PixVal /*$a2*/, int _NumOfCols /*$a3*/)
 // line 101, offset 0x8009b22c
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x8009B22C
	/* end block 1 */
	// End offset: 0x8009B238
	// End Line: 105

	/* begin block 2 */
		// Start line: 204
	/* end block 2 */
	// End Line: 205

void Set__8PalEntryUsUsi(PalEntry *this,ushort _SourceClut,ushort _PixVal,int _NumOfCols)

{
	this->SourceClut = _SourceClut;
	this->PixVal = _PixVal | 0x8000;
	this->NumOfCols = (ushort)_NumOfCols;
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ SCR_GetBlackClut__Fv()
 // line 162, offset 0x8009ac78
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x8009AC78
	/* end block 1 */
	// End offset: 0x8009AC7C
	// End Line: 164

	/* begin block 2 */
		// Start line: 325
	/* end block 2 */
	// End Line: 326

/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort SCR_GetBlackClut__Fv(void)

{
	return ShadClut;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SCR_Open__Fv()
 // line 171, offset 0x8009ac84
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x8009AC84
	/* end block 1 */
	// End offset: 0x8009ACAC
	// End Line: 177

	/* begin block 2 */
		// Start line: 342
	/* end block 2 */
	// End Line: 343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SCR_Open__Fv(void)

{
	Init__13PalCollectionPC7InitPos(&ThePals,InitialPositions);
	SCR_DumpClut__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SCR_DumpClut__Fv()
 // line 181, offset 0x8009acbc
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x8009ACBC
		// Variables:
	// 		struct RECT R; // stack offset -144
	// 		unsigned short ColVal; // $a0
	// 		unsigned short BlankPal[64]; // stack offset -136

		/* begin block 1.1 */
			// Start line: 182
			// Start offset: 0x8009ACBC
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8009ACE0
		// End Line: 189
	/* end block 1 */
	// End offset: 0x8009AD20
	// End Line: 200

	/* begin block 2 */
		// Start line: 362
	/* end block 2 */
	// End Line: 363

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SCR_DumpClut__Fv(void)

{
	undefined *puVar1;
	int iVar2;
	undefined2 local_90;
	undefined2 local_8e;
	undefined2 local_8c;
	undefined2 local_8a;
	undefined2 local_88 [59];
	undefined auStack18 [10];
	
	iVar2 = 0x3f;
	puVar1 = auStack18;
	do {
		*(undefined2 *)(puVar1 + 8) = 0x8000;
		iVar2 = iVar2 + -1;
		puVar1 = puVar1 + -2;
	} while (-1 < iVar2);
	local_90 = 0x140;
	local_8e = 0xff;
	local_8c = 0x40;
	local_88[0] = 0;
	local_8a = 1;
	LoadImage(&local_90,local_88);
	DrawSync(0);
	ShadClut = 0x3fd4;
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ SCR_NeedHighlightPal__FUsUsi(unsigned short Clut /*$a0*/, unsigned short PixVal /*$a1*/, int NumOfCols /*$a3*/)
 // line 212, offset 0x8009ad30
	/* begin block 1 */
		// Start line: 213
		// Start offset: 0x8009AD30
	/* end block 1 */
	// End offset: 0x8009AD54
	// End Line: 214

	/* begin block 2 */
		// Start line: 436
	/* end block 2 */
	// End Line: 437

ushort SCR_NeedHighlightPal__FUsUsi(ushort Clut,ushort PixVal,int NumOfCols)

{
	ushort uVar1;
	
	uVar1 = GetHighlightPal__13PalCollectionUsUsi(&ThePals,Clut,PixVal,NumOfCols);
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__13PalCollectionPC7InitPos(struct PalCollection *this /*$s4*/, struct InitPos *IPos /*$s0*/)
 // line 223, offset 0x8009ad64
	/* begin block 1 */
		// Start line: 224
		// Start offset: 0x8009AD64

		/* begin block 1.1 */
			// Start line: 224
			// Start offset: 0x8009AD64
			// Variables:
		// 		int f; // $s3
		/* end block 1.1 */
		// End offset: 0x8009ADD0
		// End Line: 233
	/* end block 1 */
	// End offset: 0x8009ADD0
	// End Line: 233

	/* begin block 2 */
		// Start line: 458
	/* end block 2 */
	// End Line: 459

void Init__13PalCollectionPC7InitPos(PalCollection *this,InitPos *IPos)

{
	int iVar1;
	PalEntry *this_00;
	int iVar2;
	int iVar3;
	
	Init__t10Collection2Z8PalEntryi20((t10Collection2Z8PalEntryi20 *)this);
	iVar3 = 0;
	iVar2 = 4;
	while( true ) {
		iVar1 = GetNumOfObjs__t10Collection2Z8PalEntryi20((t10Collection2Z8PalEntryi20 *)this);
		this_00 = (PalEntry *)((int)&(this->t10Collection2Z8PalEntryi20).ObjsUsed + iVar2);
		if (iVar1 <= iVar3) break;
		Set__8PalEntryRC7InitPos(this_00,IPos);
		Init__8PalEntry(this_00);
		IPos = IPos + 1;
		iVar2 = iVar2 + 0x18;
		iVar3 = iVar3 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// struct PalEntry * /*$ra*/ FindPal__13PalCollectionUsUsi(struct PalCollection *this /*$s4*/, unsigned short SourceClut /*$s2*/, unsigned short PixVal /*$s1*/, int NumOfCols /*$s3*/)
 // line 247, offset 0x8009adf4
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x8009ADF4
		// Variables:
	// 		struct PalEntry *RetPal; // $s0
	/* end block 1 */
	// End offset: 0x8009AEAC
	// End Line: 281

	/* begin block 2 */
		// Start line: 506
	/* end block 2 */
	// End Line: 507

PalEntry *
FindPal__13PalCollectionUsUsi(PalCollection *this,ushort SourceClut,ushort PixVal,int NumOfCols)

{
	void *pvVar1;
	PalEntry *this_00;
	
	this_00 = (this->t10Collection2Z8PalEntryi20).Used;
	while (this_00 != (PalEntry *)0x0) {
		pvVar1 = IsEqual__C8PalEntryUsUsi(this_00,SourceClut,PixVal,NumOfCols);
		if (pvVar1 != (void *)0x0) {
			return this_00;
		}
		this_00 = GetNext__Ct11TLinkedList1Z8PalEntry((t11TLinkedList1Z8PalEntry *)this_00);
	}
	this_00 = (this->t10Collection2Z8PalEntryi20).Unused;
	while( true ) {
		if (this_00 == (PalEntry *)0x0) {
			return (PalEntry *)0x0;
		}
		pvVar1 = IsEqual__C8PalEntryUsUsi(this_00,SourceClut,PixVal,NumOfCols);
		if (pvVar1 != (void *)0x0) break;
		this_00 = GetNext__Ct11TLinkedList1Z8PalEntry((t11TLinkedList1Z8PalEntry *)this_00);
	}
	MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry
						((t10Collection2Z8PalEntryi20 *)this,this_00);
	return this_00;
}



// decompiled code
// original method signature: 
// struct PalEntry * /*$ra*/ NewPal__13PalCollectionUsUsi(struct PalCollection *this /*$a0*/, unsigned short SourceClut /*$s1*/, unsigned short PixVal /*$s2*/, int NumOfCols /*$s3*/)
 // line 289, offset 0x8009aed0
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x8009AED0
		// Variables:
	// 		struct PalEntry *RetPal; // $s0
	/* end block 1 */
	// End offset: 0x8009AF30
	// End Line: 312

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

PalEntry *
NewPal__13PalCollectionUsUsi(PalCollection *this,ushort SourceClut,ushort PixVal,int NumOfCols)

{
	PalEntry *this_00;
	
	this_00 = GetObj__t10Collection2Z8PalEntryi20((t10Collection2Z8PalEntryi20 *)this);
	if (this_00 == (PalEntry *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SCRATCH.CPP",0x133);
	}
	MakePal__8PalEntryUsUsi(this_00,SourceClut,PixVal,NumOfCols);
	return this_00;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePal__8PalEntryUsUsi(struct PalEntry *this /*$s2*/, unsigned short _SourceClut /*$a1*/, unsigned short _PixVal /*$a2*/, int _NumOfCols /*$a3*/)
 // line 319, offset 0x8009af50
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x8009AF50
		// Variables:
	// 		struct RECT SourceRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x8009AFD4
	// End Line: 336

	/* begin block 2 */
		// Start line: 650
	/* end block 2 */
	// End Line: 651

void MakePal__8PalEntryUsUsi(PalEntry *this,ushort _SourceClut,ushort _PixVal,int _NumOfCols)

{
	RECT local_18;
	
	Set__8PalEntryUsUsi(this,_SourceClut,_PixVal,_NumOfCols);
	local_18.y = _SourceClut >> 6;
	local_18.x = (short)(((uint)_SourceClut & 0x3f) << 4);
	local_18.h = 1;
	local_18.w = this->NumOfCols - 1;
	GPUQ_MoveImage__FP4RECTii(&local_18,(uint)this->MyX,(uint)this->MyY);
	GPUQ_LoadClutAddr__FiiiPv
						((uint)this->MyX + (uint)this->NumOfCols + -1,(uint)this->MyY,1,&this->PixVal);
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this /*$a0*/, unsigned short SourceClut /*$a1*/, unsigned short PixVal /*$a2*/, int NumOfCols /*$a3*/)
 // line 346, offset 0x8009aff0
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x8009AFF0
		// Variables:
	// 		struct PalEntry *RetPal; // $s0
	/* end block 1 */
	// End offset: 0x8009B024
	// End Line: 365

	/* begin block 2 */
		// Start line: 709
	/* end block 2 */
	// End Line: 710

ushort GetHighlightPal__13PalCollectionUsUsi
								 (PalCollection *this,ushort SourceClut,ushort PixVal,int NumOfCols)

{
	ushort uVar1;
	PalEntry *this_00;
	
	this_00 = NewPal__13PalCollectionUsUsi(this,SourceClut,PixVal,NumOfCols);
	SetJustUsed__8PalEntryb(this_00,&DAT_00000001);
	uVar1 = GetClut__C8PalEntry(this_00);
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdatePals__13PalCollection(struct PalCollection *this /*$s2*/)
 // line 376, offset 0x8009b038
	/* begin block 1 */
		// Start line: 377
		// Start offset: 0x8009B038
		// Variables:
	// 		struct PalEntry *ThisPal; // $s0

		/* begin block 1.1 */
			// Start line: 382
			// Start offset: 0x8009B054
			// Variables:
		// 		struct PalEntry *NextPal; // $s1
		/* end block 1.1 */
		// End offset: 0x8009B088
		// End Line: 394
	/* end block 1 */
	// End offset: 0x8009B090
	// End Line: 394

	/* begin block 2 */
		// Start line: 783
	/* end block 2 */
	// End Line: 784

void UpdatePals__13PalCollection(PalCollection *this)

{
	PalEntry *pPVar1;
	void *pvVar2;
	PalEntry *this_00;
	
	pPVar1 = (this->t10Collection2Z8PalEntryi20).Used;
	while (this_00 = pPVar1, this_00 != (PalEntry *)0x0) {
		pPVar1 = GetNext__Ct11TLinkedList1Z8PalEntry((t11TLinkedList1Z8PalEntry *)this_00);
		pvVar2 = SetJustUsed__8PalEntryb(this_00,(void *)0x0);
		if (pvVar2 == (void *)0x0) {
			MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry
								((t10Collection2Z8PalEntryi20 *)this,this_00);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SCR_Handler__Fv()
 // line 402, offset 0x8009b0ac
	/* begin block 1 */
		// Start line: 403
		// Start offset: 0x8009B0AC
	/* end block 1 */
	// End offset: 0x8009B0C4
	// End Line: 404

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SCR_Handler__Fv(void)

{
	UpdatePals__13PalCollection(&ThePals);
	return;
}





