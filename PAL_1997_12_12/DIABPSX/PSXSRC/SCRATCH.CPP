#include "THISDUST.H"
#include "SCRATCH.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ IsEqual__C8PalEntryUsUsi(struct PalEntry *this /*$a0*/, unsigned short _SourceClut /*$a1*/, unsigned short _PixVal /*$a2*/, int _NumOfCols /*$a3*/)
 // line 73, offset 0x80090eac
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x80090EAC
	/* end block 1 */
	// End offset: 0x80090EDC
	// End Line: 74

	/* begin block 2 */
		// Start line: 146
	/* end block 2 */
	// End Line: 147

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
 // line 78, offset 0x80090ea0
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x80090EA0
	/* end block 1 */
	// End offset: 0x80090EA4
	// End Line: 79

	/* begin block 2 */
		// Start line: 156
	/* end block 2 */
	// End Line: 157

ushort GetClut__C8PalEntry(PalEntry *this)

{
	return this->Clut;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__8PalEntry(struct PalEntry *this /*$a0*/)
 // line 79, offset 0x80090e98
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x80090E98
	/* end block 1 */
	// End offset: 0x80090E98
	// End Line: 80

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

void Init__8PalEntry(PalEntry *this)

{
	this->NumOfCols = 0;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SetJustUsed__8PalEntryb(struct PalEntry *this /*$a0*/, void * NewVal /*$a1*/)
 // line 82, offset 0x80090e90
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x80090E90
	/* end block 1 */
	// End offset: 0x80090E90
	// End Line: 86

	/* begin block 2 */
		// Start line: 167
	/* end block 2 */
	// End Line: 168

void * SetJustUsed__8PalEntryb(PalEntry *this,void *NewVal)

{
	return NewVal;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Set__8PalEntryRC7InitPos(struct PalEntry *this /*$a0*/, struct InitPos *NewPos /*$a1*/)
 // line 89, offset 0x80090e64
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x80090E64
	/* end block 1 */
	// End offset: 0x80090E88
	// End Line: 93

	/* begin block 2 */
		// Start line: 179
	/* end block 2 */
	// End Line: 180

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
 // line 97, offset 0x80090e50
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80090E50
	/* end block 1 */
	// End offset: 0x80090E5C
	// End Line: 101

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

void Set__8PalEntryUsUsi(PalEntry *this,ushort _SourceClut,ushort _PixVal,int _NumOfCols)

{
	this->SourceClut = _SourceClut;
	this->PixVal = _PixVal | 0x8000;
	this->NumOfCols = (ushort)_NumOfCols;
	return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ SCR_NeedHighlightPal__FUsUsi(unsigned short Clut /*$a0*/, unsigned short PixVal /*$a1*/, int NumOfCols /*$a3*/)
 // line 170, offset 0x80090908
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x80090908
	/* end block 1 */
	// End offset: 0x8009092C
	// End Line: 172

	/* begin block 2 */
		// Start line: 340
	/* end block 2 */
	// End Line: 341

ushort SCR_NeedHighlightPal__FUsUsi(ushort Clut,ushort PixVal,int NumOfCols)

{
	ushort uVar1;
	
	uVar1 = GetHighlightPal__13PalCollectionUsUsi(&ThePals,Clut,PixVal,NumOfCols);
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__13PalCollectionPC7InitPos(struct PalCollection *this /*$s4*/, struct InitPos *IPos /*$s0*/)
 // line 181, offset 0x8009093c
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x8009093C

		/* begin block 1.1 */
			// Start line: 182
			// Start offset: 0x8009093C
			// Variables:
		// 		int f; // $s3
		/* end block 1.1 */
		// End offset: 0x800909A8
		// End Line: 191
	/* end block 1 */
	// End offset: 0x800909A8
	// End Line: 191

	/* begin block 2 */
		// Start line: 362
	/* end block 2 */
	// End Line: 363

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
 // line 205, offset 0x800909cc
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x800909CC
		// Variables:
	// 		struct PalEntry *RetPal; // $s0
	/* end block 1 */
	// End offset: 0x80090A84
	// End Line: 239

	/* begin block 2 */
		// Start line: 410
	/* end block 2 */
	// End Line: 411

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
 // line 247, offset 0x80090aa8
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x80090AA8
		// Variables:
	// 		struct PalEntry *RetPal; // $s0
	/* end block 1 */
	// End offset: 0x80090B08
	// End Line: 270

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

PalEntry *
NewPal__13PalCollectionUsUsi(PalCollection *this,ushort SourceClut,ushort PixVal,int NumOfCols)

{
	PalEntry *this_00;
	
	this_00 = GetObj__t10Collection2Z8PalEntryi20((t10Collection2Z8PalEntryi20 *)this);
	if (this_00 == (PalEntry *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/SCRATCH.CPP",0x109);
	}
	MakePal__8PalEntryUsUsi(this_00,SourceClut,PixVal,NumOfCols);
	return this_00;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakePal__8PalEntryUsUsi(struct PalEntry *this /*$s2*/, unsigned short _SourceClut /*$a1*/, unsigned short _PixVal /*$a2*/, int _NumOfCols /*$a3*/)
 // line 277, offset 0x80090b28
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x80090B28
		// Variables:
	// 		struct RECT SourceRect; // stack offset -24
	/* end block 1 */
	// End offset: 0x80090BAC
	// End Line: 294

	/* begin block 2 */
		// Start line: 554
	/* end block 2 */
	// End Line: 555

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
// unsigned short /*$ra*/ GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this /*$s3*/, unsigned short SourceClut /*$a1*/, unsigned short PixVal /*$a2*/, int NumOfCols /*$s1*/)
 // line 304, offset 0x80090bc8
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80090BC8
		// Variables:
	// 		struct PalEntry *RetPal; // $s0
	/* end block 1 */
	// End offset: 0x80090C38
	// End Line: 316

	/* begin block 2 */
		// Start line: 613
	/* end block 2 */
	// End Line: 614

ushort GetHighlightPal__13PalCollectionUsUsi
								 (PalCollection *this,ushort SourceClut,ushort PixVal,int NumOfCols)

{
	ushort uVar1;
	PalEntry *this_00;
	
	this_00 = FindPal__13PalCollectionUsUsi(this,SourceClut,PixVal,NumOfCols);
	if (this_00 == (PalEntry *)0x0) {
		this_00 = NewPal__13PalCollectionUsUsi(this,SourceClut,PixVal,NumOfCols);
	}
	SetJustUsed__8PalEntryb(this_00,&DAT_00000001);
	uVar1 = GetClut__C8PalEntry(this_00);
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdatePals__13PalCollection(struct PalCollection *this /*$s2*/)
 // line 327, offset 0x80090c5c
	/* begin block 1 */
		// Start line: 328
		// Start offset: 0x80090C5C
		// Variables:
	// 		struct PalEntry *ThisPal; // $s0

		/* begin block 1.1 */
			// Start line: 333
			// Start offset: 0x80090C78
			// Variables:
		// 		struct PalEntry *NextPal; // $s1
		/* end block 1.1 */
		// End offset: 0x80090CAC
		// End Line: 345
	/* end block 1 */
	// End offset: 0x80090CB4
	// End Line: 345

	/* begin block 2 */
		// Start line: 667
	/* end block 2 */
	// End Line: 668

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
 // line 353, offset 0x80090cd0
	/* begin block 1 */
		// Start line: 354
		// Start offset: 0x80090CD0
	/* end block 1 */
	// End offset: 0x80090CE8
	// End Line: 355

	/* begin block 2 */
		// Start line: 719
	/* end block 2 */
	// End Line: 720

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SCR_Handler__Fv(void)

{
	UpdatePals__13PalCollection(&ThePals);
	return;
}





