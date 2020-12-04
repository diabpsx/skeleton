#ifndef TUTILS_H
#define TUTILS_H


extern void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head); // 0x80090F10

extern void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head); // 0x80090EF0

extern struct PalEntry * GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this); // 0x80090EE4

extern void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj); // 0x80090DF8

extern void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj); // 0x80090DA0

extern void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this); // 0x80090D3C

extern struct PalEntry * GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this); // 0x80090D00

extern int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this); // 0x80090CF8

extern int GetTpY__FUs(unsigned short tpage); // 0x8007B848

extern int GetTpY__FUs(unsigned short tpage); // 0x8007CA3C

extern int GetTpY__FUs(unsigned short tpage); // 0x8007CD3C

extern int GetTpX__FUs(unsigned short tpage); // 0x8007B864

extern int GetTpX__FUs(unsigned short tpage); // 0x8007CA58

extern int GetTpX__FUs(unsigned short tpage); // 0x8007CD58


// decompiled code
// original method signature: 
// void /*$ra*/ DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this /*$a0*/, struct PalEntry **Head /*$a1*/)
 // line 46, offset 0x80090f10
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x80090F10
	/* end block 1 */
	// End offset: 0x80090F54
	// End Line: 54

	/* begin block 2 */
		// Start line: 93
	/* end block 2 */
	// End Line: 94

void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry
							 (t11TLinkedList1Z8PalEntry *this,PalEntry **Head)

{
	if (this->Prev == (PalEntry *)0x0) {
		*Head = this->Next;
	}
	else {
		(this->Prev->t11TLinkedList1Z8PalEntry).Next = this->Next;
	}
	if (this->Next != (PalEntry *)0x0) {
		(this->Next->t11TLinkedList1Z8PalEntry).Prev = this->Prev;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this /*$a0*/, struct PalEntry **Head /*$a1*/)
 // line 57, offset 0x80090ef0
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x80090EF0
	/* end block 1 */
	// End offset: 0x80090F08
	// End Line: 64

	/* begin block 2 */
		// Start line: 115
	/* end block 2 */
	// End Line: 116

void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry
							 (t11TLinkedList1Z8PalEntry *this,PalEntry **Head)

{
	PalEntry *pPVar1;
	
	this->Prev = (PalEntry *)0x0;
	pPVar1 = *Head;
	this->Next = pPVar1;
	if (pPVar1 != (PalEntry *)0x0) {
		*(t11TLinkedList1Z8PalEntry **)&(pPVar1->t11TLinkedList1Z8PalEntry).Prev = this;
	}
	*(t11TLinkedList1Z8PalEntry **)Head = this;
	return;
}



// decompiled code
// original method signature: 
// struct PalEntry * /*$ra*/ GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this /*$a0*/)
 // line 67, offset 0x80090ee4
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80090EE4
	/* end block 1 */
	// End offset: 0x80090EE8
	// End Line: 68

	/* begin block 2 */
		// Start line: 134
	/* end block 2 */
	// End Line: 135

PalEntry * GetNext__Ct11TLinkedList1Z8PalEntry(t11TLinkedList1Z8PalEntry *this)

{
	return this->Next;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this /*$s0*/, struct PalEntry *RetObj /*$s1*/)
 // line 83, offset 0x80090df8
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80090DF8
	/* end block 1 */
	// End offset: 0x80090E38
	// End Line: 87

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry
							 (t10Collection2Z8PalEntryi20 *this,PalEntry *RetObj)

{
	DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry
						((t11TLinkedList1Z8PalEntry *)RetObj,&this->Unused);
	AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry((t11TLinkedList1Z8PalEntry *)RetObj,&this->Used);
	this->ObjsUsed = this->ObjsUsed + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this /*$s0*/, struct PalEntry *RetObj /*$s1*/)
 // line 90, offset 0x80090da0
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x80090DA0
	/* end block 1 */
	// End offset: 0x80090DE0
	// End Line: 94

	/* begin block 2 */
		// Start line: 180
	/* end block 2 */
	// End Line: 181

void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry
							 (t10Collection2Z8PalEntryi20 *this,PalEntry *RetObj)

{
	DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry
						((t11TLinkedList1Z8PalEntry *)RetObj,&this->Used);
	AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry((t11TLinkedList1Z8PalEntry *)RetObj,&this->Unused)
	;
	this->ObjsUsed = this->ObjsUsed + -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this /*$s0*/)
 // line 98, offset 0x80090d3c
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x80090D3C

		/* begin block 1.1 */
			// Start line: 99
			// Start offset: 0x80090D3C
			// Variables:
		// 		int f; // $s2
		/* end block 1.1 */
		// End offset: 0x80090D84
		// End Line: 105
	/* end block 1 */
	// End offset: 0x80090D84
	// End Line: 105

	/* begin block 2 */
		// Start line: 196
	/* end block 2 */
	// End Line: 197

void Init__t10Collection2Z8PalEntryi20(t10Collection2Z8PalEntryi20 *this)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 4;
	this->Used = (PalEntry *)0x0;
	this->Unused = (PalEntry *)0x0;
	this->ObjsUsed = 0;
	do {
		AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry
							((t11TLinkedList1Z8PalEntry *)((int)&this->ObjsUsed + iVar1),&this->Unused);
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x18;
	} while (iVar2 < 0x14);
	return;
}



// decompiled code
// original method signature: 
// struct PalEntry * /*$ra*/ GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this /*$a0*/)
 // line 110, offset 0x80090d00
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x80090D00
		// Variables:
	// 		struct PalEntry *RetObj; // $s0
	/* end block 1 */
	// End offset: 0x80090D28
	// End Line: 117

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

PalEntry * GetObj__t10Collection2Z8PalEntryi20(t10Collection2Z8PalEntryi20 *this)

{
	PalEntry *RetObj;
	
	RetObj = this->Unused;
	if (RetObj != (PalEntry *)0x0) {
		MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(this,RetObj);
	}
	return RetObj;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this /*$a0*/)
 // line 132, offset 0x80090cf8
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x80090CF8
	/* end block 1 */
	// End offset: 0x80090CF8
	// End Line: 133

	/* begin block 2 */
		// Start line: 264
	/* end block 2 */
	// End Line: 265

int GetNumOfObjs__t10Collection2Z8PalEntryi20(t10Collection2Z8PalEntryi20 *this)

{
	return 0x14;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTpY__FUs(unsigned short tpage /*$a0*/)
 // line 177, offset 0x8007b848
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x8007B848
	/* end block 1 */
	// End offset: 0x8007B85C
	// End Line: 179

	/* begin block 2 */
		// Start line: 355
	/* end block 2 */
	// End Line: 356

int GetTpY__FUs(ushort tpage)

{
	return ((uint)tpage & 0x10) << 4 | (uint)(tpage >> 2) & 0x200;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTpY__FUs(unsigned short tpage /*$a0*/)
 // line 177, offset 0x8007ca3c
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x8007CA3C
	/* end block 1 */
	// End offset: 0x8007CA50
	// End Line: 179

	/* begin block 2 */
		// Start line: 355
	/* end block 2 */
	// End Line: 356

int GetTpY__FUs(ushort tpage)

{
	return ((uint)tpage & 0x10) << 4 | (uint)(tpage >> 2) & 0x200;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTpY__FUs(unsigned short tpage /*$a0*/)
 // line 177, offset 0x8007cd3c
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x8007CD3C
	/* end block 1 */
	// End offset: 0x8007CD50
	// End Line: 179

	/* begin block 2 */
		// Start line: 355
	/* end block 2 */
	// End Line: 356

int GetTpY__FUs(ushort tpage)

{
	return ((uint)tpage & 0x10) << 4 | (uint)(tpage >> 2) & 0x200;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTpX__FUs(unsigned short tpage /*$a0*/)
 // line 182, offset 0x8007b864
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8007B864
	/* end block 1 */
	// End offset: 0x8007B868
	// End Line: 184

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

int GetTpX__FUs(ushort tpage)

{
	return ((uint)tpage & 0xf) << 6;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTpX__FUs(unsigned short tpage /*$a0*/)
 // line 182, offset 0x8007ca58
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8007CA58
	/* end block 1 */
	// End offset: 0x8007CA5C
	// End Line: 184

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

int GetTpX__FUs(ushort tpage)

{
	return ((uint)tpage & 0xf) << 6;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTpX__FUs(unsigned short tpage /*$a0*/)
 // line 182, offset 0x8007cd58
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8007CD58
	/* end block 1 */
	// End offset: 0x8007CD5C
	// End Line: 184

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

int GetTpX__FUs(ushort tpage)

{
	return ((uint)tpage & 0xf) << 6;
}





#endif
