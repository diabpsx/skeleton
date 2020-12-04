#include "THISDUST.H"
#include "GAL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GAL_SetErrorChecking(unsigned char OnOff /*$a0*/)
 // line 174, offset 0x8001fa78
	/* begin block 1 */
		// Start line: 349
	/* end block 1 */
	// End Line: 350

void GAL_SetErrorChecking(uchar OnOff)

{
	FullErrorChecking = OnOff;
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_SplitBlock(long CurBlock /*$s0*/, unsigned long Size /*$s2*/)
 // line 194, offset 0x8001fa88
	/* begin block 1 */
		// Start line: 195
		// Start offset: 0x8001FA88
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $s3
	// 		struct MEM_HDR *MemHdr; // $s0
	// 		struct MEM_HDR *SplitBlock; // $s1
	/* end block 1 */
	// End offset: 0x8001FB9C
	// End Line: 246

	/* begin block 2 */
		// Start line: 388
	/* end block 2 */
	// End Line: 389

long GAL_SplitBlock(long CurBlock,ulong Size)

{
	ushort uVar1;
	uchar uVar2;
	uint uVar3;
	MEM_HDR *MemHdr;
	MEM_INIT_INFO *pMVar4;
	ulong uVar5;
	
	uVar2 = IsActiveValidHandle(CurBlock);
	if (uVar2 == '\0') {
		GSetError(ERR_GAL_INVALID_MEM_HANDLE);
		uVar3 = 0xffffffff;
	}
	else {
		MemHdr = GetFreeMemHdrBlock();
		if (MemHdr == (MEM_HDR *)0x0) {
			GSetError(ERR_RUN_OUT_OF_MEM_HDRS);
			uVar3 = 0xffffffff;
		}
		else {
			pMVar4 = GetMemInitInfoBlockFromType((uint)(&MemHdrBlocks)[CurBlock].Type);
			if (pMVar4 == (MEM_INIT_INFO *)0x0) {
				GSetError(ERR_GAL_INVALID_MEM_TYPE);
				uVar3 = 0xffffffff;
			}
			else {
				uVar5 = AlignSize(Size,(uint)pMVar4->Alignment);
				if (uVar5 < (&MemHdrBlocks)[CurBlock].Size) {
					uVar1 = (&MemHdrBlocks)[CurBlock].Type;
					MemHdr->Owners = 1;
					MemHdr->Type = uVar1;
					MemHdr->Mem = (void *)(uVar5 + (int)(&MemHdrBlocks)[CurBlock].Mem);
					MemHdr->Size = (&MemHdrBlocks)[CurBlock].Size - uVar5;
					MemHdr->TimeStamp = (&MemHdrBlocks)[CurBlock].TimeStamp;
					SetBlockName(MemHdr,(char *)(&MemHdrBlocks)[CurBlock].Name);
					AttachHdrToList(&pMVar4->Used,MemHdr);
					(&MemHdrBlocks)[CurBlock].Size = uVar5;
					uVar3 = (uint)MemHdr->Handle;
				}
				else {
					uVar3 = 0xffffffff;
				}
			}
		}
	}
	return uVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_InitModule()
 // line 253, offset 0x8001fbbc
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x8001FBBC
		// Variables:
	// 		int f; // $s1
	/* end block 1 */
	// End offset: 0x8001FC58
	// End Line: 276

	/* begin block 2 */
		// Start line: 528
	/* end block 2 */
	// End Line: 529

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAL_InitModule(void)

{
	int iVar1;
	int iVar2;
	MEM_HDR *Index;
	
	MemInitBlocks = (MEM_INIT_INFO *)0x0;
	FreeBlocks = (MEM_HDR *)0x0;
	NumOfFreeHdrs = 0;
	GAL_SetVerbosity(GAL_SILENT);
	GAL_SetTimeStamp(0);
	LastError = ERR_GAL_NO_ERROR;
	GAL_SetErrorChecking('\0');
	iVar2 = 0;
	Index = &MemHdrBlocks;
	iVar1 = 0;
	do {
		*(undefined4 *)((int)&MemHdrBlocks.Prev + iVar1) = 0;
		*(undefined4 *)((int)&MemHdrBlocks.Next + iVar1) = 0;
		*(undefined2 *)((int)&MemHdrBlocks.Handle + iVar1) = (short)iVar2;
		ReleaseMemHdrBlock(Index);
		Index = Index + 1;
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x20;
	} while (iVar2 < 0x8c);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_AddMemType(struct MEM_INIT_INFO *M /*$s0*/)
 // line 288, offset 0x8001fc74
	/* begin block 1 */
		// Start line: 289
		// Start offset: 0x8001FC74
		// Variables:
	// 		struct MEM_INIT_INFO *P; // $a0
	// 		struct MEM_HDR *FreeMemHdr; // $s1
	// 		unsigned long Addr1; // $a1
	// 		unsigned long Addr2; // $v1
	/* end block 1 */
	// End offset: 0x8001FD7C
	// End Line: 359

	/* begin block 2 */
		// Start line: 603
	/* end block 2 */
	// End Line: 604

uchar GAL_AddMemType(MEM_INIT_INFO *M)

{
	MEM_INIT_INFO *pMVar1;
	uchar uVar2;
	MEM_HDR *Block;
	void *pvVar3;
	MEM_INIT_INFO *pMVar4;
	GAL_ERROR_CODE Err;
	
	pMVar1 = MemInitBlocks;
	if (MemInitBlocks != (MEM_INIT_INFO *)0x0) {
		pMVar4 = MemInitBlocks;
		do {
			if ((M->Mem < (void *)((int)pMVar4->Mem + pMVar4->Size)) &&
				 (pMVar4->Mem <= (void *)((int)M->Mem + M->Size))) {
				Err = ERR_GAL_MEM_TYPE_OVERLAP;
				goto LAB_8001fd70;
			}
			if (pMVar4->Type == M->Type) {
				return '\x02';
			}
			pMVar4 = pMVar4->NextInitBlock;
		} while (pMVar4 != (MEM_INIT_INFO *)0x0);
	}
	MemInitBlocks = M;
	M->Flags = 0;
	M->Used = (MEM_HDR *)0x0;
	M->Empty = (MEM_HDR *)0x0;
	M->NextInitBlock = pMVar1;
	Block = GetFreeMemHdrBlock();
	if (Block == (MEM_HDR *)0x0) {
		Err = ERR_RUN_OUT_OF_MEM_HDRS;
LAB_8001fd70:
		GSetError(Err);
		uVar2 = '\0';
	}
	else {
		AttachHdrToList(&M->Empty,Block);
		pvVar3 = AlignPtr(M->Mem,(uint)M->Alignment);
		uVar2 = '\x01';
		Block->Mem = pvVar3;
		Block->Size = M->Size - (int)((int)pvVar3 - (int)M->Mem);
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_Alloc(unsigned long Size /*$s5*/, unsigned long Type /*$s1*/, char *Name /*$s6*/)
 // line 373, offset 0x8001fd94
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x8001FD94
		// Variables:
	// 		struct MEM_HDR *Block; // $s0
	// 		struct MEM_INIT_INFO *M; // $s2
	// 		unsigned long FullSize; // $s3
	// 		struct MEM_HDR (**FRoute)(); // $s4
	// 		unsigned char High; // $s7

		/* begin block 1.1 */
			// Start line: 441
			// Start offset: 0x8001FEC4
		/* end block 1.1 */
		// End offset: 0x8001FED8
		// End Line: 448
	/* end block 1 */
	// End offset: 0x8001FEFC
	// End Line: 451

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

long GAL_Alloc(ulong Size,ulong Type,char *Name)

{
	uchar uVar1;
	MEM_INIT_INFO *M;
	long lVar2;
	ulong uVar3;
	ulong uVar4;
	void *Addr;
	MEM_HDR *Block;
	uint Type_00;
	code *pcVar5;
	uint uVar6;
	
	uVar6 = Type >> 0xf & 1;
	Type_00 = Type & 0xffff7fff;
	pcVar5 = FindLowestMemBlock;
	if (uVar6 != 0) {
		pcVar5 = FindHighestMemBlock;
	}
	LastAttemptedAlloc = Size;
	LastTypeAlloced = Type_00;
	M = GetMemInitInfoBlockFromType(Type_00);
	if (M == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
LAB_8001fe20:
		lVar2 = -1;
	}
	else {
		uVar3 = AlignSize(Size,(uint)M->Alignment);
		if (AllocFilter != (code *)0x0) {
			(*AllocFilter)(Type_00,uVar3,Name);
		}
		Block = (MEM_HDR *)(*pcVar5)(M->Empty,uVar3);
		if (Block == (MEM_HDR *)0x0) {
			uVar4 = GAL_GetFreeMem(Type_00);
			if (uVar4 < uVar3) {
				return -1;
			}
			uVar1 = GAL_DefragMem(Type_00);
			if (uVar1 == '\0') {
				return -1;
			}
			Block = (MEM_HDR *)(*pcVar5)(M->Empty,uVar3);
			if (Block == (MEM_HDR *)0x0) goto LAB_8001fe20;
		}
		DetachHdrFromList(&M->Empty,Block);
		if (uVar6 == 0) {
			Addr = Block->Mem;
		}
		else {
			Addr = (void *)((int)Block->Mem + (Block->Size - uVar3));
		}
		lVar2 = LoAlloc(M,Block,Addr,Size,Name);
	}
	return lVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GAL_Lock(long Handle /*$s0*/)
 // line 464, offset 0x8001ff2c
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x8001FF2C
		// Variables:
	// 		struct MEM_HDR *MemHdr; // $v1
	/* end block 1 */
	// End offset: 0x8001FF78
	// End Line: 487

	/* begin block 2 */
		// Start line: 1057
	/* end block 2 */
	// End Line: 1058

void * GAL_Lock(long Handle)

{
	uchar uVar1;
	void *pvVar2;
	
	uVar1 = IsActiveValidHandle(Handle);
	if (uVar1 == '\0') {
		GSetError(ERR_GAL_INVALID_MEM_HANDLE);
		pvVar2 = (void *)0x0;
	}
	else {
		pvVar2 = (&MemHdrBlocks)[Handle].Mem;
		(&MemHdrBlocks)[Handle].Owners = (&MemHdrBlocks)[Handle].Owners + 1;
	}
	return pvVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_Unlock(long Handle /*$s0*/)
 // line 499, offset 0x8001ff8c
	/* begin block 1 */
		// Start line: 500
		// Start offset: 0x8001FF8C
		// Variables:
	// 		struct MEM_HDR *MemHdr; // $a0
	/* end block 1 */
	// End offset: 0x8001FFF4
	// End Line: 531

	/* begin block 2 */
		// Start line: 1145
	/* end block 2 */
	// End Line: 1146

uchar GAL_Unlock(long Handle)

{
	uchar uVar1;
	GAL_ERROR_CODE Err;
	
	uVar1 = IsActiveValidHandle(Handle);
	if (uVar1 == '\0') {
		Err = ERR_GAL_INVALID_MEM_HANDLE;
	}
	else {
		if ((&MemHdrBlocks)[Handle].Owners != 0) {
			(&MemHdrBlocks)[Handle].Owners = (&MemHdrBlocks)[Handle].Owners - 1;
			return '\x01';
		}
		Err = ERR_GAL_MEM_ALREADY_UNLOCKED;
	}
	GSetError(Err);
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_Free(long Handle /*$s0*/)
 // line 542, offset 0x80020008
	/* begin block 1 */
		// Start line: 543
		// Start offset: 0x80020008
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $s0
	// 		struct MEM_HDR *MemHdr; // $s1
	/* end block 1 */
	// End offset: 0x80020090
	// End Line: 582

	/* begin block 2 */
		// Start line: 1242
	/* end block 2 */
	// End Line: 1243

uchar GAL_Free(long Handle)

{
	uchar uVar1;
	MEM_INIT_INFO *MI;
	GAL_ERROR_CODE Err;
	
	uVar1 = IsActiveValidHandle(Handle);
	if (uVar1 == '\0') {
		Err = ERR_GAL_INVALID_MEM_HANDLE;
	}
	else {
		MI = GetMemInitInfoBlockFromType((uint)(&MemHdrBlocks)[Handle].Type);
		if (MI != (MEM_INIT_INFO *)0x0) {
			LastDeallocedBlock = (&MemHdrBlocks)[Handle].Size;
			DetachHdrFromList(&MI->Used,&MemHdrBlocks + Handle);
			MergeToEmptyList(MI,&MemHdrBlocks + Handle);
			return '\x01';
		}
		Err = ERR_GAL_INVALID_MEM_TYPE;
	}
	GSetError(Err);
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GAL_GetFreeMem(unsigned long Type /*$a0*/)
 // line 594, offset 0x800200a8
	/* begin block 1 */
		// Start line: 595
		// Start offset: 0x800200A8
		// Variables:
	// 		unsigned long FreeMem; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 605
			// Start offset: 0x800200D0
			// Variables:
		// 		struct MEM_HDR *Block; // $v1
		/* end block 1.1 */
		// End offset: 0x800200F4
		// End Line: 614
	/* end block 1 */
	// End offset: 0x80020108
	// End Line: 619

	/* begin block 2 */
		// Start line: 1363
	/* end block 2 */
	// End Line: 1364

ulong GAL_GetFreeMem(ulong Type)

{
	ulong *puVar1;
	MEM_INIT_INFO *pMVar2;
	MEM_HDR *pMVar3;
	ulong uVar4;
	
	uVar4 = 0;
	pMVar2 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar2 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		uVar4 = 0;
	}
	else {
		pMVar3 = pMVar2->Empty;
		while (pMVar3 != (MEM_HDR *)0x0) {
			puVar1 = &pMVar3->Size;
			pMVar3 = pMVar3->Next;
			uVar4 = uVar4 + *puVar1;
		}
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GAL_GetUsedMem(unsigned long Type /*$a0*/)
 // line 632, offset 0x8002011c
	/* begin block 1 */
		// Start line: 633
		// Start offset: 0x8002011C
		// Variables:
	// 		unsigned long FreeMem; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 643
			// Start offset: 0x80020144
			// Variables:
		// 		struct MEM_HDR *Block; // $v1
		/* end block 1.1 */
		// End offset: 0x80020168
		// End Line: 652
	/* end block 1 */
	// End offset: 0x8002017C
	// End Line: 657

	/* begin block 2 */
		// Start line: 1449
	/* end block 2 */
	// End Line: 1450

ulong GAL_GetUsedMem(ulong Type)

{
	ulong *puVar1;
	MEM_INIT_INFO *pMVar2;
	MEM_HDR *pMVar3;
	ulong uVar4;
	
	uVar4 = 0;
	pMVar2 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar2 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		uVar4 = 0;
	}
	else {
		pMVar3 = pMVar2->Used;
		while (pMVar3 != (MEM_HDR *)0x0) {
			puVar1 = &pMVar3->Size;
			pMVar3 = pMVar3->Next;
			uVar4 = uVar4 + *puVar1;
		}
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GAL_LargestFreeBlock(unsigned long Type /*$a0*/)
 // line 671, offset 0x80020190
	/* begin block 1 */
		// Start line: 672
		// Start offset: 0x80020190
		// Variables:
	// 		unsigned long Largest; // $a1
	// 		struct MEM_HDR *Index; // $v1
	// 		struct MEM_INIT_INFO *MI; // $v0
	/* end block 1 */
	// End offset: 0x800201FC
	// End Line: 698

	/* begin block 2 */
		// Start line: 1537
	/* end block 2 */
	// End Line: 1538

ulong GAL_LargestFreeBlock(ulong Type)

{
	MEM_INIT_INFO *pMVar1;
	uint uVar2;
	MEM_HDR *pMVar3;
	
	pMVar1 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		uVar2 = 0;
	}
	else {
		pMVar3 = pMVar1->Empty;
		uVar2 = 0;
		while (pMVar3 != (MEM_HDR *)0x0) {
			if (uVar2 < pMVar3->Size) {
				uVar2 = pMVar3->Size;
			}
			pMVar3 = pMVar3->Next;
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AttachHdrToList(struct MEM_HDR **Head /*$a0*/, struct MEM_HDR *Block /*$a1*/)
 // line 709, offset 0x8002020c
	/* begin block 1 */
		// Start line: 1614
	/* end block 1 */
	// End Line: 1615

void AttachHdrToList(MEM_HDR **Head,MEM_HDR *Block)

{
	MEM_HDR *pMVar1;
	
	Block->Prev = (MEM_HDR *)0x0;
	pMVar1 = *Head;
	Block->Next = pMVar1;
	if (pMVar1 != (MEM_HDR *)0x0) {
		pMVar1->Prev = Block;
	}
	*Head = Block;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DetachHdrFromList(struct MEM_HDR **Head /*$a0*/, struct MEM_HDR *Block /*$a1*/)
 // line 729, offset 0x8002022c
	/* begin block 1 */
		// Start line: 1654
	/* end block 1 */
	// End Line: 1655

void DetachHdrFromList(MEM_HDR **Head,MEM_HDR *Block)

{
	if (Block->Prev == (MEM_HDR *)0x0) {
		*Head = Block->Next;
	}
	else {
		Block->Prev->Next = Block->Next;
	}
	if (Block->Next != (MEM_HDR *)0x0) {
		Block->Next->Prev = Block->Prev;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ IsActiveValidHandle(long Handle /*$a0*/)
 // line 751, offset 0x80020278
	/* begin block 1 */
		// Start line: 753
		// Start offset: 0x80020278
	/* end block 1 */
	// End offset: 0x800202A0
	// End Line: 765

	/* begin block 2 */
		// Start line: 1700
	/* end block 2 */
	// End Line: 1701

uchar IsActiveValidHandle(long Handle)

{
	bool bVar1;
	
	if ((uint)Handle < 0x8c) {
		bVar1 = (&MemHdrBlocks)[Handle].Mem != (void *)0x0;
	}
	else {
		bVar1 = false;
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ AlignPtr(void *P /*$a0*/, unsigned long Align /*$a1*/)
 // line 778, offset 0x800202a8
	/* begin block 1 */
		// Start line: 780
		// Start offset: 0x800202A8
		// Variables:
	// 		unsigned long Addr; // $a0
	// 		unsigned long Temp; // $v0
	/* end block 1 */
	// End offset: 0x800202D0
	// End Line: 789

	/* begin block 2 */
		// Start line: 1756
	/* end block 2 */
	// End Line: 1757

void * AlignPtr(void *P,ulong Align)

{
	ulong uVar1;
	
	if (Align == 0) {
		trap(0x1c00);
	}
	uVar1 = Align - (uint)P % Align;
	if (uVar1 != Align) {
		P = (void *)((int)P + uVar1);
	}
	return P;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ AlignSize(unsigned long Size /*$a0*/, unsigned long Align /*$a1*/)
 // line 801, offset 0x800202d8
	/* begin block 1 */
		// Start line: 1798
	/* end block 1 */
	// End Line: 1799

ulong AlignSize(ulong Size,ulong Align)

{
	if (Align == 0) {
		trap(0x1c00);
	}
	if (Size % Align != 0) {
		Size = Size + (Align - Size % Align);
	}
	return Size;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ FindClosestSizedBlock(struct MEM_HDR *Head /*$a0*/, unsigned long Size /*$a1*/)
 // line 816, offset 0x80020308
	/* begin block 1 */
		// Start line: 818
		// Start offset: 0x80020308
		// Variables:
	// 		struct MEM_HDR *Closest; // $a2
	// 		struct MEM_HDR *Index; // $a0
	/* end block 1 */
	// End offset: 0x80020358
	// End Line: 842

	/* begin block 2 */
		// Start line: 1835
	/* end block 2 */
	// End Line: 1836

MEM_HDR * FindClosestSizedBlock(MEM_HDR *Head,ulong Size)

{
	MEM_HDR *pMVar1;
	
	pMVar1 = (MEM_HDR *)0x0;
	if (Head != (MEM_HDR *)0x0) {
		do {
			if ((Size <= Head->Size) &&
				 ((pMVar1 == (MEM_HDR *)0x0 || (Head->Size - Size < pMVar1->Size - Size)))) {
				pMVar1 = Head;
			}
			Head = Head->Next;
		} while (Head != (MEM_HDR *)0x0);
	}
	return pMVar1;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ FindHighestMemBlock(struct MEM_HDR *Head /*$a0*/, unsigned long Size /*$a1*/)
 // line 853, offset 0x80020360
	/* begin block 1 */
		// Start line: 855
		// Start offset: 0x80020360
		// Variables:
	// 		struct MEM_HDR *Closest; // $a2
	// 		struct MEM_HDR *Index; // $a0
	// 		void *Highest; // $a3
	/* end block 1 */
	// End offset: 0x800203C0
	// End Line: 887

	/* begin block 2 */
		// Start line: 1906
	/* end block 2 */
	// End Line: 1907

MEM_HDR * FindHighestMemBlock(MEM_HDR *Head,ulong Size)

{
	MEM_HDR *pMVar1;
	void *pvVar2;
	
	pMVar1 = (MEM_HDR *)0x0;
	pvVar2 = (void *)0x0;
	if (Head != (MEM_HDR *)0x0) {
		do {
			if (Size <= Head->Size) {
				if (pMVar1 == (MEM_HDR *)0x0) {
					pvVar2 = Head->Mem;
					pMVar1 = Head;
				}
				else {
					if (pvVar2 < Head->Mem) {
						pMVar1 = Head;
						pvVar2 = Head->Mem;
					}
				}
			}
			Head = Head->Next;
		} while (Head != (MEM_HDR *)0x0);
	}
	return pMVar1;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ FindLowestMemBlock(struct MEM_HDR *Head /*$a0*/, unsigned long Size /*$a1*/)
 // line 897, offset 0x800203c8
	/* begin block 1 */
		// Start line: 899
		// Start offset: 0x800203C8
		// Variables:
	// 		struct MEM_HDR *Closest; // $a2
	// 		struct MEM_HDR *Index; // $a0
	// 		unsigned long Lowest; // $a3
	/* end block 1 */
	// End offset: 0x80020428
	// End Line: 933

	/* begin block 2 */
		// Start line: 1994
	/* end block 2 */
	// End Line: 1995

MEM_HDR * FindLowestMemBlock(MEM_HDR *Head,ulong Size)

{
	MEM_HDR *pMVar1;
	void *pvVar2;
	
	pMVar1 = (MEM_HDR *)0x0;
	pvVar2 = (void *)0xffffffff;
	if (Head != (MEM_HDR *)0x0) {
		do {
			if (Size <= Head->Size) {
				if (pMVar1 == (MEM_HDR *)0x0) {
					pvVar2 = Head->Mem;
					pMVar1 = Head;
				}
				else {
					if (Head->Mem < pvVar2) {
						pMVar1 = Head;
						pvVar2 = Head->Mem;
					}
				}
			}
			Head = Head->Next;
		} while (Head != (MEM_HDR *)0x0);
	}
	return pMVar1;
}



// decompiled code
// original method signature: 
// struct MEM_INIT_INFO * /*$ra*/ GetMemInitInfoBlockFromType(unsigned long Type /*$a0*/)
 // line 944, offset 0x80020430
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x80020430
		// Variables:
	// 		struct MEM_INIT_INFO *P; // $v1
	/* end block 1 */
	// End offset: 0x80020464
	// End Line: 966

	/* begin block 2 */
		// Start line: 2089
	/* end block 2 */
	// End Line: 2090

MEM_INIT_INFO * GetMemInitInfoBlockFromType(ulong Type)

{
	MEM_INIT_INFO *pMVar1;
	
	pMVar1 = MemInitBlocks;
	if (MemInitBlocks != (MEM_INIT_INFO *)0x0) {
		do {
			if (pMVar1->Type == Type) {
				return pMVar1;
			}
			pMVar1 = pMVar1->NextInitBlock;
		} while (pMVar1 != (MEM_INIT_INFO *)0x0);
	}
	return (MEM_INIT_INFO *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MergeToEmptyList(struct MEM_INIT_INFO *MI /*$s4*/, struct MEM_HDR *M /*$s1*/)
 // line 978, offset 0x8002046c
	/* begin block 1 */
		// Start line: 979
		// Start offset: 0x8002046C
		// Variables:
	// 		struct MEM_HDR *Index; // $s0
	// 		struct MEM_HDR *NextIndex; // $s2
	// 		void *Start; // $s3
	// 		void *End; // $s5

		/* begin block 1.1 */
			// Start line: 999
			// Start offset: 0x800204AC
			// Variables:
		// 		void *ThisStart; // $v0
		// 		void *ThisEnd; // $a0
		/* end block 1.1 */
		// End offset: 0x80020500
		// End Line: 1028
	/* end block 1 */
	// End offset: 0x80020518
	// End Line: 1032

	/* begin block 2 */
		// Start line: 2151
	/* end block 2 */
	// End Line: 2152

void MergeToEmptyList(MEM_INIT_INFO *MI,MEM_HDR *M)

{
	MEM_HDR *Block;
	ulong uVar1;
	void *pvVar2;
	MEM_HDR *pMVar3;
	void *pvVar4;
	
	pvVar4 = M->Mem;
	uVar1 = M->Size;
	pMVar3 = MI->Empty;
	while (Block = pMVar3, Block != (MEM_HDR *)0x0) {
		pMVar3 = Block->Next;
		pvVar2 = (void *)((int)Block->Mem + Block->Size);
		if ((pvVar4 == pvVar2) || ((void *)((int)pvVar4 + uVar1) == Block->Mem)) {
			M->Size = M->Size + Block->Size;
			if (pvVar4 == pvVar2) {
				M->Mem = Block->Mem;
			}
			DetachHdrFromList(&MI->Empty,Block);
			ReleaseMemHdrBlock(Block);
		}
	}
	AttachHdrToList(&MI->Empty,M);
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_AllocAt(unsigned long Size /*$s3*/, void *Addr /*$s2*/, unsigned long Type /*$a2*/, char *Name /*$s4*/)
 // line 1053, offset 0x80020540
	/* begin block 1 */
		// Start line: 1054
		// Start offset: 0x80020540
		// Variables:
	// 		struct MEM_HDR *Block; // $s0
	// 		struct MEM_INIT_INFO *M; // $s1
	/* end block 1 */
	// End offset: 0x800205F8
	// End Line: 1084

	/* begin block 2 */
		// Start line: 2304
	/* end block 2 */
	// End Line: 2305

long GAL_AllocAt(ulong Size,void *Addr,ulong Type,char *Name)

{
	MEM_INIT_INFO *M;
	long lVar1;
	void *Addr_00;
	ulong Size_00;
	MEM_HDR *Block;
	
	M = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (M == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		lVar1 = -1;
	}
	else {
		Addr_00 = AlignPtr(Addr,(uint)M->Alignment);
		Size_00 = AlignSize(Size,(uint)M->Alignment);
		Block = FindBlockInTheseBounds(M->Empty,Addr_00,Size_00);
		if (Block == (MEM_HDR *)0x0) {
			lVar1 = -1;
		}
		else {
			DetachHdrFromList(&M->Empty,Block);
			lVar1 = LoAlloc(M,Block,Addr_00,Size,Name);
		}
	}
	return lVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ LoAlloc(struct MEM_INIT_INFO *M /*$s2*/, struct MEM_HDR *Block /*$s1*/, void *Addr /*$s3*/, unsigned long Size /*$s5*/, char *Name /*stack 16*/)
 // line 1107, offset 0x8002061c
	/* begin block 1 */
		// Start line: 1108
		// Start offset: 0x8002061C
		// Variables:
	// 		struct MEM_HDR *SplitBlock; // $s0
	// 		unsigned long PhysSize; // $s4
	/* end block 1 */
	// End offset: 0x8002078C
	// End Line: 1195

	/* begin block 2 */
		// Start line: 2427
	/* end block 2 */
	// End Line: 2428

long LoAlloc(MEM_INIT_INFO *M,MEM_HDR *Block,void *Addr,ulong Size,char *Name)

{
	bool bVar1;
	ushort uVar2;
	ulong uVar3;
	MEM_HDR *M_00;
	uint uVar4;
	
	uVar3 = AlignSize(Size,(uint)M->Alignment);
	if (Block->Mem == Addr) {
LAB_800206c0:
		if (uVar3 < Block->Size) {
			M_00 = GetFreeMemHdrBlock();
			if (M_00 == (MEM_HDR *)0x0) goto LAB_800206e8;
			M_00->Mem = (void *)(uVar3 + (int)Block->Mem);
			M_00->Size = Block->Size - uVar3;
			M_00->Type = *(ushort *)&M->Type;
			MergeToEmptyList(M,M_00);
			Block->Size = uVar3;
		}
		AttachHdrToList(&M->Used,Block);
		Block->Owners = 0;
		uVar2 = (ushort)TimeStamp;
		bVar1 = GAL_AVERAGE < VerbLev;
		Block->Type = *(ushort *)&M->Type;
		Block->TimeStamp = uVar2;
		if (bVar1) {
			DBG_SendMessage("Succesfully alloced block of %d");
			GAL_MemDump(M->Type);
		}
		SetBlockName(Block,Name);
		uVar4 = (uint)Block->Handle;
	}
	else {
		M_00 = GetFreeMemHdrBlock();
		if (M_00 != (MEM_HDR *)0x0) {
			M_00->Mem = Block->Mem;
			*(void **)&M_00->Size = (void *)((int)Addr - (int)Block->Mem);
			M_00->Type = *(ushort *)&M->Type;
			MergeToEmptyList(M,M_00);
			Block->Mem = Addr;
			Block->Size = Block->Size - M_00->Size;
			goto LAB_800206c0;
		}
LAB_800206e8:
		GSetError(ERR_RUN_OUT_OF_MEM_HDRS);
		uVar4 = 0xffffffff;
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ FindBlockInTheseBounds(struct MEM_HDR *Head /*$a0*/, void *Addr /*$a1*/, unsigned long Size /*$a2*/)
 // line 1210, offset 0x800207b4
	/* begin block 1 */
		// Start line: 1212
		// Start offset: 0x800207B4
		// Variables:
	// 		struct MEM_HDR *Index; // $a0
	// 		unsigned char Done; // $a3
	// 		unsigned long ThisStart; // $v1
	// 		unsigned long ThisEnd; // $v0
	// 		unsigned long Start; // $a1
	// 		unsigned long End; // $a2
	/* end block 1 */
	// End offset: 0x80020818
	// End Line: 1238

	/* begin block 2 */
		// Start line: 2652
	/* end block 2 */
	// End Line: 2653

MEM_HDR * FindBlockInTheseBounds(MEM_HDR *Head,void *Addr,ulong Size)

{
	bool bVar1;
	
	bVar1 = false;
	if (Head != (MEM_HDR *)0x0) {
		do {
			if ((Addr < Head->Mem) || ((int)Head->Mem + Head->Size < (int)Addr + Size)) {
				Head = Head->Next;
			}
			else {
				bVar1 = true;
			}
		} while ((Head != (MEM_HDR *)0x0) && (!bVar1));
	}
	if (!bVar1) {
		Head = (MEM_HDR *)0x0;
	}
	return Head;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ GetFreeMemHdrBlock()
 // line 1249, offset 0x80020820
	/* begin block 1 */
		// Start line: 1250
		// Start offset: 0x80020820
		// Variables:
	// 		struct MEM_HDR *RetBlock; // $s0
	/* end block 1 */
	// End offset: 0x80020894
	// End Line: 1267

	/* begin block 2 */
		// Start line: 2726
	/* end block 2 */
	// End Line: 2727

/* WARNING: Unknown calling convention yet parameter storage is locked */

MEM_HDR * GetFreeMemHdrBlock(void)

{
	MEM_HDR *pMVar1;
	
	pMVar1 = (MEM_HDR *)0x0;
	if (FreeBlocks != (MEM_HDR *)0x0) {
		NumOfFreeHdrs = NumOfFreeHdrs + -1;
		if ((VerbLev != GAL_SILENT) && (NumOfFreeHdrs == 9)) {
			DBG_SendMessage("GAL: Warning Number of free headers < 10");
		}
		pMVar1 = FreeBlocks;
		DetachHdrFromList(&FreeBlocks,FreeBlocks);
	}
	return pMVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseMemHdrBlock(struct MEM_HDR *Index /*$a1*/)
 // line 1279, offset 0x800208a8
	/* begin block 1 */
		// Start line: 2788
	/* end block 1 */
	// End Line: 2789

void ReleaseMemHdrBlock(MEM_HDR *Index)

{
	NumOfFreeHdrs = NumOfFreeHdrs + 1;
	AttachHdrToList(&FreeBlocks,Index);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_IterateEmptyMem(unsigned long MemType /*$a0*/, TDRFuncPtr_GAL_IterateEmptyMem1Func Func /*$s1*/)
 // line 1293, offset 0x800208e8
	/* begin block 1 */
		// Start line: 1294
		// Start offset: 0x800208E8
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 1301
			// Start offset: 0x80020914
			// Variables:
		// 		struct MEM_HDR *Block; // $s0
		/* end block 1.1 */
		// End offset: 0x80020944
		// End Line: 1310
	/* end block 1 */
	// End offset: 0x80020954
	// End Line: 1314

	/* begin block 2 */
		// Start line: 2818
	/* end block 2 */
	// End Line: 2819

void GAL_IterateEmptyMem(ulong MemType,TDRFuncPtr_GAL_IterateEmptyMem1Func Func)

{
	MEM_INIT_INFO *pMVar1;
	MEM_HDR *pMVar2;
	
	pMVar1 = GetMemInitInfoBlockFromType(MemType & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
	}
	else {
		pMVar2 = pMVar1->Empty;
		while (pMVar2 != (MEM_HDR *)0x0) {
			(*Func)(pMVar2->Mem,pMVar2->Size,pMVar2->Name);
			pMVar2 = pMVar2->Next;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_IterateUsedMem(unsigned long MemType /*$a0*/, TDRFuncPtr_GAL_IterateUsedMem1Func Func /*$s1*/)
 // line 1323, offset 0x8002096c
	/* begin block 1 */
		// Start line: 1324
		// Start offset: 0x8002096C
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 1331
			// Start offset: 0x80020998
			// Variables:
		// 		struct MEM_HDR *Block; // $s0
		/* end block 1.1 */
		// End offset: 0x800209E0
		// End Line: 1340
	/* end block 1 */
	// End offset: 0x800209F0
	// End Line: 1344

	/* begin block 2 */
		// Start line: 2883
	/* end block 2 */
	// End Line: 2884

void GAL_IterateUsedMem(ulong MemType,TDRFuncPtr_GAL_IterateUsedMem1Func Func)

{
	MEM_INIT_INFO *pMVar1;
	MEM_HDR *pMVar2;
	
	pMVar1 = GetMemInitInfoBlockFromType(MemType & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
	}
	else {
		pMVar2 = pMVar1->Used;
		while (pMVar2 != (MEM_HDR *)0x0) {
			(*Func)((uint)pMVar2->Handle,pMVar2->Mem,pMVar2->Size,pMVar2->Name,(uint)pMVar2->Owners,
							(uint)pMVar2->TimeStamp);
			pMVar2 = pMVar2->Next;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_SetMemName(long Hnd /*$s0*/, char *Text /*$s1*/)
 // line 1354, offset 0x80020a08
	/* begin block 1 */
		// Start line: 2950
	/* end block 1 */
	// End Line: 2951

uchar GAL_SetMemName(long Hnd,char *Text)

{
	uchar uVar1;
	
	uVar1 = IsActiveValidHandle(Hnd);
	if (uVar1 == '\0') {
		GSetError(ERR_GAL_INVALID_MEM_HANDLE);
	}
	else {
		SetBlockName(&MemHdrBlocks + Hnd,Text);
	}
	return (uchar)(uVar1 != '\0');
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GAL_TotalMem(unsigned long Type /*$a0*/)
 // line 1378, offset 0x80020a70
	/* begin block 1 */
		// Start line: 1379
		// Start offset: 0x80020A70
		// Variables:
	// 		unsigned long TotalMem; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x80020AB0
	// End Line: 1393

	/* begin block 2 */
		// Start line: 3004
	/* end block 2 */
	// End Line: 3005

ulong GAL_TotalMem(ulong Type)

{
	MEM_INIT_INFO *pMVar1;
	ulong uVar2;
	
	pMVar1 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		uVar2 = 0;
	}
	else {
		uVar2 = pMVar1->Size;
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GAL_MemBase(unsigned long Type /*$a0*/)
 // line 1406, offset 0x80020ac4
	/* begin block 1 */
		// Start line: 1407
		// Start offset: 0x80020AC4
		// Variables:
	// 		void *Ret; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x80020B04
	// End Line: 1423

	/* begin block 2 */
		// Start line: 3070
	/* end block 2 */
	// End Line: 3071

void * GAL_MemBase(ulong Type)

{
	MEM_INIT_INFO *pMVar1;
	void *pvVar2;
	
	pMVar1 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		pvVar2 = (void *)0x0;
	}
	else {
		pvVar2 = pMVar1->Mem;
	}
	return pvVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_DefragMem(unsigned long type /*$s0*/)
 // line 1436, offset 0x80020b18
	/* begin block 1 */
		// Start line: 1437
		// Start offset: 0x80020B18
	/* end block 1 */
	// End offset: 0x80020B88
	// End Line: 1454

	/* begin block 2 */
		// Start line: 3139
	/* end block 2 */
	// End Line: 3140

uchar GAL_DefragMem(ulong type)

{
	uchar uVar1;
	
	if (VerbLev != GAL_SILENT) {
		DBG_SendMessage("GAL: Attempting defrag");
	}
	GazDefragMem(type);
	if ((FullErrorChecking != '\0') && (uVar1 = GAL_CheckMem(type), uVar1 == '\0')) {
		return '\0';
	}
	NumOfFreeHdrs = CountFreeBlocks();
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GSetError(enum GAL_ERROR_CODE Err /*$s0*/)
 // line 1466, offset 0x80020b9c
	/* begin block 1 */
		// Start line: 3200
	/* end block 1 */
	// End Line: 3201

uchar GSetError(GAL_ERROR_CODE Err)

{
	if (VerbLev != GAL_SILENT) {
		DBG_SendMessage("GAL Error: %s ");
	}
	LastError = Err;
	return '\0';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_CheckMem(unsigned long Type /*$a0*/)
 // line 1486, offset 0x80020bf8
	/* begin block 1 */
		// Start line: 1487
		// Start offset: 0x80020BF8
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $s1
	// 		struct MEM_HDR *MemHdr; // $s0
	// 		unsigned long TotalMem; // $s2
	/* end block 1 */
	// End offset: 0x80020CD8
	// End Line: 1539

	/* begin block 2 */
		// Start line: 3240
	/* end block 2 */
	// End Line: 3241

uchar GAL_CheckMem(ulong Type)

{
	ulong *puVar1;
	uchar uVar2;
	MEM_INIT_INFO *M;
	GAL_ERROR_CODE Err;
	MEM_HDR *MemHdr;
	ulong uVar3;
	
	uVar3 = 0;
	M = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (M == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		uVar2 = '\0';
	}
	else {
		MemHdr = M->Empty;
		while (MemHdr != (MEM_HDR *)0x0) {
			uVar2 = CheckCollisions(M,MemHdr);
			Err = ERR_GAL_MEM_BLOCK_COLLISION;
			if (uVar2 != '\0') goto LAB_80020ccc;
			puVar1 = &MemHdr->Size;
			MemHdr = MemHdr->Next;
			uVar3 = uVar3 + *puVar1;
		}
		MemHdr = M->Used;
		while (MemHdr != (MEM_HDR *)0x0) {
			uVar2 = CheckCollisions(M,MemHdr);
			Err = ERR_GAL_MEM_BLOCK_COLLISION;
			if (uVar2 != '\0') goto LAB_80020ccc;
			puVar1 = &MemHdr->Size;
			MemHdr = MemHdr->Next;
			uVar3 = uVar3 + *puVar1;
		}
		Err = ERR_GAL_MEM_AREA_NOT_COVERED;
		if (M->Size == uVar3) {
			uVar2 = '\x01';
		}
		else {
LAB_80020ccc:
			uVar2 = GSetError(Err);
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckCollisions(struct MEM_INIT_INFO *M /*$s2*/, struct MEM_HDR *MemHdr /*$s1*/)
 // line 1553, offset 0x80020cf4
	/* begin block 1 */
		// Start line: 1554
		// Start offset: 0x80020CF4
		// Variables:
	// 		struct MEM_HDR *CheckHdr; // $s0
	/* end block 1 */
	// End offset: 0x80020D84
	// End Line: 1579

	/* begin block 2 */
		// Start line: 3391
	/* end block 2 */
	// End Line: 3392

uchar CheckCollisions(MEM_INIT_INFO *M,MEM_HDR *MemHdr)

{
	uchar uVar1;
	MEM_HDR *Hdr2;
	
	Hdr2 = M->Used;
	while( true ) {
		if (Hdr2 == (MEM_HDR *)0x0) {
			Hdr2 = M->Empty;
			while( true ) {
				if (Hdr2 == (MEM_HDR *)0x0) {
					return '\0';
				}
				if ((Hdr2 != MemHdr) && (uVar1 = AreBlocksColliding(MemHdr,Hdr2), uVar1 != '\0')) break;
				Hdr2 = Hdr2->Next;
			}
			return '\x01';
		}
		if ((Hdr2 != MemHdr) && (uVar1 = AreBlocksColliding(MemHdr,Hdr2), uVar1 != '\0')) break;
		Hdr2 = Hdr2->Next;
	}
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ AreBlocksColliding(struct MEM_HDR *Hdr1 /*$a0*/, struct MEM_HDR *Hdr2 /*$a1*/)
 // line 1591, offset 0x80020da0
	/* begin block 1 */
		// Start line: 1593
		// Start offset: 0x80020DA0
		// Variables:
	// 		unsigned long Addr1; // $a1
	// 		unsigned long Addr2; // $a2
	/* end block 1 */
	// End offset: 0x80020DF0
	// End Line: 1607

	/* begin block 2 */
		// Start line: 3472
	/* end block 2 */
	// End Line: 3473

uchar AreBlocksColliding(MEM_HDR *Hdr1,MEM_HDR *Hdr2)

{
	bool bVar1;
	void *pvVar2;
	void *pvVar3;
	
	pvVar3 = Hdr2->Mem;
	pvVar2 = Hdr1->Mem;
	if ((pvVar2 < (void *)((int)pvVar3 + Hdr2->Size)) && (pvVar3 <= pvVar2)) {
		bVar1 = true;
	}
	else {
		bVar1 = false;
		if (pvVar3 < (void *)((int)pvVar2 + Hdr1->Size)) {
			bVar1 = pvVar2 <= pvVar3;
		}
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GAL_GetErrorText(enum GAL_ERROR_CODE Err /*$a0*/)
 // line 1618, offset 0x80020df8
	/* begin block 1 */
		// Start line: 3525
	/* end block 1 */
	// End Line: 3526

char * GAL_GetErrorText(GAL_ERROR_CODE Err)

{
	char *pcVar1;
	
	if (Err < NUM_OF_ERROR_MESSAGES) {
		pcVar1 = (&GalErrors10)[Err];
	}
	else {
		pcVar1 = "Invalid error code";
	}
	return pcVar1;
}



// decompiled code
// original method signature: 
// enum GAL_ERROR_CODE /*$ra*/ GAL_GetLastErrorCode()
 // line 1633, offset 0x80020e28
	/* begin block 1 */
		// Start line: 3557
	/* end block 1 */
	// End Line: 3558

/* WARNING: Unknown calling convention yet parameter storage is locked */

GAL_ERROR_CODE GAL_GetLastErrorCode(void)

{
	return LastError;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GAL_GetLastErrorText()
 // line 1645, offset 0x80020e38
	/* begin block 1 */
		// Start line: 3581
	/* end block 1 */
	// End Line: 3582

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * GAL_GetLastErrorText(void)

{
	char *pcVar1;
	
	pcVar1 = GAL_GetErrorText(LastError);
	return pcVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAL_HowManyEmptyRegions(unsigned long Type /*$a0*/)
 // line 1658, offset 0x80020e60
	/* begin block 1 */
		// Start line: 1659
		// Start offset: 0x80020E60
		// Variables:
	// 		struct MEM_INIT_INFO *m; // $v0
	// 		int Count; // $v1

		/* begin block 1.1 */
			// Start line: 1667
			// Start offset: 0x80020E80
			// Variables:
		// 		struct MEM_HDR *mh; // $v0
		/* end block 1.1 */
		// End offset: 0x80020EA0
		// End Line: 1678
	/* end block 1 */
	// End offset: 0x80020EB8
	// End Line: 1686

	/* begin block 2 */
		// Start line: 3607
	/* end block 2 */
	// End Line: 3608

int GAL_HowManyEmptyRegions(ulong Type)

{
	MEM_INIT_INFO *pMVar1;
	MEM_HDR *pMVar2;
	int iVar3;
	
	pMVar1 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		iVar3 = -1;
	}
	else {
		pMVar2 = pMVar1->Empty;
		iVar3 = 0;
		while (pMVar2 != (MEM_HDR *)0x0) {
			pMVar2 = pMVar2->Next;
			iVar3 = iVar3 + 1;
		}
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAL_HowManyUsedRegions(unsigned long Type /*$a0*/)
 // line 1695, offset 0x80020ec8
	/* begin block 1 */
		// Start line: 1696
		// Start offset: 0x80020EC8
		// Variables:
	// 		struct MEM_INIT_INFO *m; // $v0
	// 		int Count; // $v1

		/* begin block 1.1 */
			// Start line: 1704
			// Start offset: 0x80020EE8
			// Variables:
		// 		struct MEM_HDR *mh; // $v0
		/* end block 1.1 */
		// End offset: 0x80020F08
		// End Line: 1713
	/* end block 1 */
	// End offset: 0x80020F20
	// End Line: 1721

	/* begin block 2 */
		// Start line: 3681
	/* end block 2 */
	// End Line: 3682

int GAL_HowManyUsedRegions(ulong Type)

{
	MEM_INIT_INFO *pMVar1;
	MEM_HDR *pMVar2;
	int iVar3;
	
	pMVar1 = GetMemInitInfoBlockFromType(Type & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
		iVar3 = -1;
	}
	else {
		pMVar2 = pMVar1->Used;
		iVar3 = 0;
		while (pMVar2 != (MEM_HDR *)0x0) {
			pMVar2 = pMVar2->Next;
			iVar3 = iVar3 + 1;
		}
	}
	return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_SetTimeStamp(int Time /*$a0*/)
 // line 1729, offset 0x80020f30
	/* begin block 1 */
		// Start line: 3750
	/* end block 1 */
	// End Line: 3751

void GAL_SetTimeStamp(int Time)

{
	TimeStamp = Time;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_IncTimeStamp()
 // line 1740, offset 0x80020f40
	/* begin block 1 */
		// Start line: 3772
	/* end block 1 */
	// End Line: 3773

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAL_IncTimeStamp(void)

{
	TimeStamp = TimeStamp + 1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAL_GetTimeStamp()
 // line 1750, offset 0x80020f60
	/* begin block 1 */
		// Start line: 3792
	/* end block 1 */
	// End Line: 3793

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GAL_GetTimeStamp(void)

{
	return TimeStamp;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_AlignSizeToType(unsigned long Size /*$s0*/, unsigned long MemType /*$a1*/)
 // line 1767, offset 0x80020f70
	/* begin block 1 */
		// Start line: 1768
		// Start offset: 0x80020F70
		// Variables:
	// 		struct MEM_INIT_INFO *Mi; // $v0
	/* end block 1 */
	// End offset: 0x80020FAC
	// End Line: 1779

	/* begin block 2 */
		// Start line: 3825
	/* end block 2 */
	// End Line: 3826

long GAL_AlignSizeToType(ulong Size,ulong MemType)

{
	MEM_INIT_INFO *pMVar1;
	ulong uVar2;
	
	pMVar1 = GetMemInitInfoBlockFromType(MemType & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		uVar2 = 0xffffffff;
	}
	else {
		uVar2 = AlignSize(Size,(uint)pMVar1->Alignment);
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_AllocMultiStruct(struct GAL_STRUCT *G /*$a0*/, unsigned long Type /*$s0*/, char *Name /*$s1*/)
 // line 1798, offset 0x80020fc0
	/* begin block 1 */
		// Start line: 1799
		// Start offset: 0x80020FC0
	/* end block 1 */
	// End offset: 0x80020FF8
	// End Line: 1804

	/* begin block 2 */
		// Start line: 3892
	/* end block 2 */
	// End Line: 3893

long GAL_AllocMultiStruct(GAL_STRUCT *G,ulong Type,char *Name)

{
	uint Size;
	long lVar1;
	
	Size = GAL_ProcessMultiStruct(G,Type & 0xffff7fff);
	lVar1 = GAL_Alloc(Size,Type,Name);
	return lVar1;
}



// decompiled code
// original method signature: 
// unsigned int /*$ra*/ GAL_ProcessMultiStruct(struct GAL_STRUCT *G /*$s4*/, unsigned long Type /*$s3*/)
 // line 1818, offset 0x80021010
	/* begin block 1 */
		// Start line: 1819
		// Start offset: 0x80021010
		// Variables:
	// 		unsigned int TotalMem; // $s1
	// 		int f; // $s2
	/* end block 1 */
	// End offset: 0x80021094
	// End Line: 1836

	/* begin block 2 */
		// Start line: 3934
	/* end block 2 */
	// End Line: 3935

uint GAL_ProcessMultiStruct(GAL_STRUCT *G,ulong Type)

{
	ulong *puVar1;
	long lVar2;
	int iVar3;
	GAL_STRUCT *pGVar4;
	uint uVar5;
	int iVar6;
	
	uVar5 = 0;
	iVar3 = G->OriginalSize;
	iVar6 = 0;
	pGVar4 = G;
	while (iVar3 != -1) {
		puVar1 = (ulong *)&pGVar4->OriginalSize;
		pGVar4->Offset = uVar5;
		pGVar4 = pGVar4 + 1;
		iVar6 = iVar6 + 1;
		lVar2 = GAL_AlignSizeToType(*puVar1,Type & 0xffff7fff);
		iVar3 = pGVar4->OriginalSize;
		uVar5 = uVar5 + lVar2;
	}
	G[iVar6].Offset = uVar5;
	return uVar5;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_GetSize(long hnd /*$s0*/)
 // line 1846, offset 0x800210bc
	/* begin block 1 */
		// Start line: 1847
		// Start offset: 0x800210BC
	/* end block 1 */
	// End offset: 0x800210FC
	// End Line: 1858

	/* begin block 2 */
		// Start line: 4010
	/* end block 2 */
	// End Line: 4011

long GAL_GetSize(long hnd)

{
	uchar uVar1;
	ulong uVar2;
	
	uVar1 = IsActiveValidHandle(hnd);
	if (uVar1 == '\0') {
		GSetError(ERR_GAL_INVALID_MEM_HANDLE);
		uVar2 = 0xffffffff;
	}
	else {
		uVar2 = (&MemHdrBlocks)[hnd].Size;
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GazDefragMem(unsigned long MemType /*$s4*/)
 // line 1871, offset 0x80021110
	/* begin block 1 */
		// Start line: 1872
		// Start offset: 0x80021110
		// Variables:
	// 		struct MEM_HDR *LockedBlocks; // stack offset -32
	// 		struct MEM_INIT_INFO *M; // $s1
	// 		struct MEM_REG Reg; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1921
			// Start offset: 0x800211CC
			// Variables:
		// 		struct MEM_HDR *NewEmptyBlock; // $a1
		// 		struct MEM_HDR *ListOfBlocksInRegion; // stack offset -28
		// 		unsigned long ShuffledSize; // $s2
		// 		int GapSize; // $s0
		/* end block 1.1 */
		// End offset: 0x80021234
		// End Line: 1954
	/* end block 1 */
	// End offset: 0x80021254
	// End Line: 1964

	/* begin block 2 */
		// Start line: 4065
	/* end block 2 */
	// End Line: 4066

uchar GazDefragMem(ulong MemType)

{
	uchar uVar1;
	MEM_INIT_INFO *M;
	ulong uVar2;
	MEM_HDR *M_00;
	GAL_ERROR_CODE Err;
	ulong uVar3;
	MEM_REG local_28;
	MEM_HDR *local_20;
	MEM_HDR *local_1c;
	
	M = GetMemInitInfoBlockFromType(MemType & 0xffff7fff);
	Err = ERR_GAL_INVALID_MEM_TYPE;
	if (M != (MEM_INIT_INFO *)0x0) {
		if (M->MemMove != (_func_3 *)0x0) {
			local_20 = (MEM_HDR *)0x0;
			PutAllLockedBlocksOntoList(&local_20,&M->Used);
			SortMemHdrListByAddr(&local_20);
			DeleteEmptyBlocks(M);
			local_28.Mem = (void *)0x0;
			do {
				do {
					uVar1 = GetRegion(&local_28,local_20,M);
					if (uVar1 == '\0') {
						PutAllLockedBlocksOntoList(&M->Used,&local_20);
						return '\x01';
					}
				} while (local_28.Size == 0);
				local_1c = (MEM_HDR *)0x0;
				PutBlocksInRegionIntoList(&local_28,&local_1c,&M->Used);
				SortMemHdrListByAddr(&local_1c);
				uVar2 = ShuffleBlocks(local_1c,&local_28,M);
				uVar3 = local_28.Size - uVar2;
				if (uVar3 != 0) {
					M_00 = GetFreeMemHdrBlock();
					if (M_00 == (MEM_HDR *)0x0) {
						Err = ERR_RUN_OUT_OF_MEM_HDRS;
						goto LAB_80021168;
					}
					M_00->Size = uVar3;
					M_00->Type = (ushort)(MemType & 0xffff7fff);
					M_00->Mem = (void *)(uVar2 + (int)local_28.Mem);
					MergeToEmptyList(M,M_00);
				}
				GraftMemHdrList(&M->Used,&local_1c);
			} while( true );
		}
		Err = ERR_GAL_NO_MEM_MOVE;
	}
LAB_80021168:
	GSetError(Err);
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutBlocksInRegionIntoList(struct MEM_REG *Reg /*$s3*/, struct MEM_HDR **ToList /*$s4*/, struct MEM_HDR **FromList /*$s2*/)
 // line 1976, offset 0x80021278
	/* begin block 1 */
		// Start line: 1977
		// Start offset: 0x80021278
		// Variables:
	// 		struct MEM_HDR *ThisBlock; // $s0

		/* begin block 1.1 */
			// Start line: 1985
			// Start offset: 0x800212AC
			// Variables:
		// 		struct MEM_HDR *NextBlock; // $s1
		// 		struct MEM_REG MemReg; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x800212EC
		// End Line: 1999
	/* end block 1 */
	// End offset: 0x800212F8
	// End Line: 2001

	/* begin block 2 */
		// Start line: 4340
	/* end block 2 */
	// End Line: 4341

void PutBlocksInRegionIntoList(MEM_REG *Reg,MEM_HDR **ToList,MEM_HDR **FromList)

{
	MEM_HDR *Block;
	uchar uVar1;
	MEM_HDR *pMVar2;
	MEM_REG local_20;
	
	pMVar2 = *FromList;
	while (Block = pMVar2, Block != (MEM_HDR *)0x0) {
		pMVar2 = Block->Next;
		local_20.Mem = Block->Mem;
		local_20.Size = Block->Size;
		uVar1 = CollideRegions(Reg,&local_20);
		if (uVar1 != '\0') {
			DetachHdrFromList(FromList,Block);
			AttachHdrToList(ToList,Block);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CollideRegions(struct MEM_REG *Reg1 /*$a0*/, struct MEM_REG *Reg2 /*$a1*/)
 // line 2013, offset 0x8002131c
	/* begin block 1 */
		// Start line: 4419
	/* end block 1 */
	// End Line: 4420

uchar CollideRegions(MEM_REG *Reg1,MEM_REG *Reg2)

{
	bool bVar1;
	
	bVar1 = false;
	if (Reg2->Mem < (void *)((int)Reg1->Mem + Reg1->Size)) {
		bVar1 = Reg1->Mem < (void *)((int)Reg2->Mem + Reg2->Size);
	}
	return (uchar)bVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeleteEmptyBlocks(struct MEM_INIT_INFO *M /*$s1*/)
 // line 2032, offset 0x80021350
	/* begin block 1 */
		// Start line: 2033
		// Start offset: 0x80021350

		/* begin block 1.1 */
			// Start line: 2036
			// Start offset: 0x80021374
			// Variables:
		// 		struct MEM_HDR *ThisBlock; // $s0
		/* end block 1.1 */
		// End offset: 0x80021374
		// End Line: 2038
	/* end block 1 */
	// End offset: 0x800213A4
	// End Line: 2043

	/* begin block 2 */
		// Start line: 4455
	/* end block 2 */
	// End Line: 4456

void DeleteEmptyBlocks(MEM_INIT_INFO *M)

{
	MEM_HDR *Block;
	
	Block = M->Empty;
	while (Block != (MEM_HDR *)0x0) {
		Block = M->Empty;
		DetachHdrFromList(&M->Empty,Block);
		AttachHdrToList(&FreeBlocks,Block);
		Block = M->Empty;
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GetRegion(struct MEM_REG *Reg /*$s1*/, struct MEM_HDR *LockedBlocks /*$s2*/, struct MEM_INIT_INFO *M /*$s0*/)
 // line 2060, offset 0x800213bc
	/* begin block 1 */
		// Start line: 2061
		// Start offset: 0x800213BC
		// Variables:
	// 		struct MEM_HDR *FirstBlock; // $v1
	// 		struct MEM_HDR *SecondBlock; // $v0
	// 		struct MEM_REG NewReg; // stack offset -24
	/* end block 1 */
	// End offset: 0x80021498
	// End Line: 2096

	/* begin block 2 */
		// Start line: 4511
	/* end block 2 */
	// End Line: 4512

uchar GetRegion(MEM_REG *Reg,MEM_HDR *LockedBlocks,MEM_INIT_INFO *M)

{
	uchar uVar1;
	MEM_HDR *pMVar2;
	MEM_REG local_18;
	
	pMVar2 = FindNextBlock(Reg->Mem,LockedBlocks);
	if (pMVar2 == (MEM_HDR *)0x0) {
		if (Reg->Mem != (void *)0x0) {
			return '\0';
		}
		local_18.Mem = M->Mem;
	}
	else {
		local_18.Mem = (void *)((int)pMVar2->Mem + pMVar2->Size);
	}
	pMVar2 = FindNextBlock(local_18.Mem,LockedBlocks);
	if (pMVar2 == (MEM_HDR *)0x0) {
		local_18.Size = (void *)((int)M->Mem + (M->Size - (int)local_18.Mem));
	}
	else {
		local_18.Size = (void *)((int)pMVar2->Mem - (int)local_18.Mem);
	}
	uVar1 = CollideRegions(Reg,&local_18);
	if ((uVar1 == '\0') || (uVar1 = '\0', Reg->Mem == (void *)0x0)) {
		Reg->Mem = local_18.Mem;
		uVar1 = '\x01';
		*(void **)&Reg->Size = local_18.Size;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ FindNextBlock(void *Addr /*$a0*/, struct MEM_HDR *Blocks /*$a1*/)
 // line 2134, offset 0x800214b4
	/* begin block 1 */
		// Start line: 2136
		// Start offset: 0x800214B4

		/* begin block 1.1 */
			// Start line: 2140
			// Start offset: 0x800214C4
			// Variables:
		// 		unsigned long BlockAddr; // $v0
		/* end block 1.1 */
		// End offset: 0x800214D8
		// End Line: 2149
	/* end block 1 */
	// End offset: 0x800214E8
	// End Line: 2154

	/* begin block 2 */
		// Start line: 4661
	/* end block 2 */
	// End Line: 4662

MEM_HDR * FindNextBlock(void *Addr,MEM_HDR *Blocks)

{
	if ((Addr != (void *)0x0) && (Blocks != (MEM_HDR *)0x0)) {
		do {
			if (Addr <= Blocks->Mem) {
				return Blocks;
			}
			Blocks = Blocks->Next;
		} while (Blocks != (MEM_HDR *)0x0);
	}
	return (MEM_HDR *)0x0;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ ShuffleBlocks(struct MEM_HDR *Blocks /*$a0*/, struct MEM_REG *Reg /*$a1*/, struct MEM_INIT_INFO *M /*$s3*/)
 // line 2167, offset 0x800214f0
	/* begin block 1 */
		// Start line: 2168
		// Start offset: 0x800214F0
		// Variables:
	// 		unsigned long NewSize; // $s2
	// 		void *MemBase; // $s1
	// 		struct MEM_HDR *ThisBlock; // $s0
	/* end block 1 */
	// End offset: 0x80021560
	// End Line: 2197

	/* begin block 2 */
		// Start line: 4726
	/* end block 2 */
	// End Line: 4727

ulong ShuffleBlocks(MEM_HDR *Blocks,MEM_REG *Reg,MEM_INIT_INFO *M)

{
	void **ppvVar1;
	ulong *puVar2;
	void *pvVar3;
	ulong uVar4;
	
	pvVar3 = Reg->Mem;
	uVar4 = 0;
	if (Blocks != (MEM_HDR *)0x0) {
		do {
			uVar4 = uVar4 + Blocks->Size;
			if (pvVar3 != Blocks->Mem) {
				(*M->MemMove)(pvVar3);
				Blocks->Mem = pvVar3;
			}
			ppvVar1 = &Blocks->Mem;
			puVar2 = &Blocks->Size;
			Blocks = Blocks->Next;
			pvVar3 = (void *)((int)*ppvVar1 + *puVar2);
		} while (Blocks != (MEM_HDR *)0x0);
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead /*$s3*/, struct MEM_HDR **FromHead /*$s2*/)
 // line 2208, offset 0x80021580
	/* begin block 1 */
		// Start line: 2209
		// Start offset: 0x80021580
		// Variables:
	// 		struct MEM_HDR *CurHdr; // $s0

		/* begin block 1.1 */
			// Start line: 2216
			// Start offset: 0x800215AC
			// Variables:
		// 		struct MEM_HDR *NextCurHdr; // $s1
		/* end block 1.1 */
		// End offset: 0x800215D0
		// End Line: 2226
	/* end block 1 */
	// End offset: 0x800215DC
	// End Line: 2228

	/* begin block 2 */
		// Start line: 4817
	/* end block 2 */
	// End Line: 4818

void PutAllLockedBlocksOntoList(MEM_HDR **ToHead,MEM_HDR **FromHead)

{
	MEM_HDR *Block;
	MEM_HDR *pMVar1;
	
	pMVar1 = *FromHead;
	while (Block = pMVar1, Block != (MEM_HDR *)0x0) {
		pMVar1 = Block->Next;
		if (Block->Owners != 0) {
			DetachHdrFromList(FromHead,Block);
			AttachHdrToList(ToHead,Block);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortMemHdrListByAddr(struct MEM_HDR **Head /*$a0*/)
 // line 2240, offset 0x800215fc
	/* begin block 1 */
		// Start line: 2242
		// Start offset: 0x800215FC
		// Variables:
	// 		unsigned char DidASwap; // $a3
	// 		struct MEM_HDR *CurHdr; // $a1
	// 		struct MEM_HDR *NextHdr; // $a2

		/* begin block 1.1 */
			// Start line: 2262
			// Start offset: 0x80021644
			// Variables:
		// 		struct MEM_HDR *OldPrev; // $v1
		/* end block 1.1 */
		// End offset: 0x80021684
		// End Line: 2281
	/* end block 1 */
	// End offset: 0x800216A8
	// End Line: 2291

	/* begin block 2 */
		// Start line: 4888
	/* end block 2 */
	// End Line: 4889

void SortMemHdrListByAddr(MEM_HDR **Head)

{
	bool bVar1;
	MEM_HDR *pMVar2;
	MEM_HDR *pMVar3;
	MEM_HDR *pMVar4;
	MEM_HDR *pMVar5;
	
	if ((*Head != (MEM_HDR *)0x0) && ((*Head)->Next != (MEM_HDR *)0x0)) {
		do {
			bVar1 = false;
			pMVar4 = *Head;
			do {
				pMVar5 = pMVar4->Next;
				if (pMVar5->Mem < pMVar4->Mem) {
					pMVar3 = pMVar4->Prev;
					pMVar2 = pMVar5->Next;
					pMVar4->Prev = pMVar5;
					pMVar4->Next = pMVar2;
					pMVar5->Next = pMVar4;
					if (pMVar4->Next != (MEM_HDR *)0x0) {
						pMVar4->Next->Prev = pMVar4;
						pMVar5->Next = pMVar4;
					}
					pMVar5->Prev = pMVar3;
					if (pMVar3 == (MEM_HDR *)0x0) {
						*Head = pMVar5;
					}
					else {
						pMVar3->Next = pMVar5;
					}
					bVar1 = true;
					pMVar5 = pMVar4;
				}
				pMVar4 = pMVar5;
			} while (pMVar5->Next != (MEM_HDR *)0x0);
		} while (bVar1);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GraftMemHdrList(struct MEM_HDR **ToList /*$a0*/, struct MEM_HDR **FromList /*$a1*/)
 // line 2301, offset 0x800216b0
	/* begin block 1 */
		// Start line: 2303
		// Start offset: 0x800216B0
		// Variables:
	// 		struct MEM_HDR *OldFirst; // $a2

		/* begin block 1.1 */
			// Start line: 2309
			// Start offset: 0x800216C0
			// Variables:
		// 		struct MEM_HDR *LastHdr; // $v1
		/* end block 1.1 */
		// End offset: 0x80021704
		// End Line: 2324
	/* end block 1 */
	// End offset: 0x80021704
	// End Line: 2325

	/* begin block 2 */
		// Start line: 5011
	/* end block 2 */
	// End Line: 5012

void GraftMemHdrList(MEM_HDR **ToList,MEM_HDR **FromList)

{
	MEM_HDR *pMVar1;
	MEM_HDR *pMVar2;
	MEM_HDR *pMVar3;
	
	pMVar3 = *ToList;
	if (*FromList != (MEM_HDR *)0x0) {
		*ToList = *FromList;
		pMVar2 = *FromList;
		pMVar1 = pMVar2->Next;
		while (pMVar1 != (MEM_HDR *)0x0) {
			pMVar2 = pMVar2->Next;
			pMVar1 = pMVar2->Next;
		}
		pMVar2->Next = pMVar3;
		if (pMVar3 != (MEM_HDR *)0x0) {
			pMVar3->Prev = pMVar2;
		}
		*FromList = (MEM_HDR *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_MemDump(unsigned long Type /*$s0*/)
 // line 2335, offset 0x8002170c
	/* begin block 1 */
		// Start line: 5076
	/* end block 1 */
	// End Line: 5077

void GAL_MemDump(ulong Type)

{
	GAL_GetFreeMem(Type & 0xffff7fff);
	DBG_SendMessage("%d : mem left");
	GAL_GetFreeMem(Type & 0xffff7fff);
	DBG_SendMessage("%d : largest block");
	DBG_SendMessage("%d : Last attempted alloc");
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_SetVerbosity(enum GAL_VERB_LEV G /*$a0*/)
 // line 2354, offset 0x80021780
	/* begin block 1 */
		// Start line: 5117
	/* end block 1 */
	// End Line: 5118

void GAL_SetVerbosity(GAL_VERB_LEV G)

{
	VerbLev = G;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CountFreeBlocks()
 // line 2368, offset 0x80021790
	/* begin block 1 */
		// Start line: 2370
		// Start offset: 0x80021790
		// Variables:
	// 		struct MEM_HDR *RetBlock; // $v1
	// 		int Count; // $v0
	/* end block 1 */
	// End offset: 0x800217B4
	// End Line: 2383

	/* begin block 2 */
		// Start line: 5148
	/* end block 2 */
	// End Line: 5149

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CountFreeBlocks(void)

{
	int iVar1;
	MEM_HDR *pMVar2;
	
	iVar1 = 0;
	pMVar2 = FreeBlocks;
	if (FreeBlocks != (MEM_HDR *)0x0) {
		do {
			pMVar2 = pMVar2->Next;
			iVar1 = iVar1 + 1;
		} while (pMVar2 != (MEM_HDR *)0x0);
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBlockName(struct MEM_HDR *MemHdr /*$a0*/, char *NewName /*$a1*/)
 // line 2394, offset 0x800217bc
	/* begin block 1 */
		// Start line: 2395
		// Start offset: 0x800217BC
		// Variables:
	// 		int IndexSoFar; // $a2
	/* end block 1 */
	// End offset: 0x800217F8
	// End Line: 2407

	/* begin block 2 */
		// Start line: 5196
	/* end block 2 */
	// End Line: 5197

void SetBlockName(MEM_HDR *MemHdr,char *NewName)

{
	int iVar1;
	
	iVar1 = 0;
	if (NewName != (char *)0x0) {
		do {
			if (*NewName == '\0') break;
			MemHdr->Name[iVar1] = *NewName;
			iVar1 = iVar1 + 1;
			NewName = (char *)((uchar *)NewName + 1);
		} while (iVar1 != 7);
	}
	MemHdr->Name[iVar1] = '\0';
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAL_GetNumFreeHeaders()
 // line 2415, offset 0x80021804
	/* begin block 1 */
		// Start line: 5239
	/* end block 1 */
	// End Line: 5240

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GAL_GetNumFreeHeaders(void)

{
	return NumOfFreeHdrs;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GAL_GetLastTypeAlloced()
 // line 2420, offset 0x80021814
	/* begin block 1 */
		// Start line: 5249
	/* end block 1 */
	// End Line: 5250

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GAL_GetLastTypeAlloced(void)

{
	return LastTypeAlloced;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_GAL_SetAllocFilter /*$ra*/ GAL_SetAllocFilter(TDRFuncPtr_GAL_SetAllocFilter0NewFilter NewFilter /*$a0*/)
 // line 2431, offset 0x80021824
	/* begin block 1 */
		// Start line: 2433
		// Start offset: 0x80021824
		// Variables:
	// 		void (*OldFilter)(); // $v0
	/* end block 1 */
	// End offset: 0x80021834
	// End Line: 2439

	/* begin block 2 */
		// Start line: 5273
	/* end block 2 */
	// End Line: 5274

TDRFuncPtr_GAL_SetAllocFilter GAL_SetAllocFilter(TDRFuncPtr_GAL_SetAllocFilter0NewFilter NewFilter)

{
	TDRFuncPtr_GAL_SetAllocFilter pTVar1;
	
	pTVar1 = AllocFilter;
	AllocFilter = (TDRFuncPtr_GAL_SetAllocFilter)NewFilter;
	return pTVar1;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_SortUsedRegionsBySize(unsigned long MemType /*$a0*/)
 // line 2447, offset 0x8002183c
	/* begin block 1 */
		// Start line: 2448
		// Start offset: 0x8002183C
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x80021880
	// End Line: 2460

	/* begin block 2 */
		// Start line: 5302
	/* end block 2 */
	// End Line: 5303

uchar GAL_SortUsedRegionsBySize(ulong MemType)

{
	MEM_INIT_INFO *pMVar1;
	
	pMVar1 = GetMemInitInfoBlockFromType(MemType & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
	}
	else {
		SortMemHdrList(&pMVar1->Used,SortSize);
	}
	return (uchar)(pMVar1 != (MEM_INIT_INFO *)0x0);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SortSize(struct MEM_HDR *B1 /*$a0*/, struct MEM_HDR *B2 /*$a1*/)
 // line 2462, offset 0x80021890
	/* begin block 1 */
		// Start line: 5337
	/* end block 1 */
	// End Line: 5338

uchar SortSize(MEM_HDR *B1,MEM_HDR *B2)

{
	return (uchar)(B1->Size < B2->Size);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortMemHdrList(struct MEM_HDR **Head /*$s3*/, TDRFuncPtr_SortMemHdrList1CompFunc CompFunc /*$s4*/)
 // line 2476, offset 0x800218a0
	/* begin block 1 */
		// Start line: 2477
		// Start offset: 0x800218A0
		// Variables:
	// 		unsigned char DidASwap; // $s2
	// 		struct MEM_HDR *CurHdr; // $s0
	// 		struct MEM_HDR *NextHdr; // $s1

		/* begin block 1.1 */
			// Start line: 2497
			// Start offset: 0x80021904
			// Variables:
		// 		struct MEM_HDR *OldPrev; // $v1
		/* end block 1.1 */
		// End offset: 0x80021944
		// End Line: 2516
	/* end block 1 */
	// End offset: 0x8002196C
	// End Line: 2526

	/* begin block 2 */
		// Start line: 5364
	/* end block 2 */
	// End Line: 5365

void SortMemHdrList(MEM_HDR **Head,TDRFuncPtr_SortMemHdrList1CompFunc CompFunc)

{
	bool bVar1;
	uchar uVar2;
	MEM_HDR *pMVar3;
	MEM_HDR *pMVar4;
	MEM_HDR *pMVar5;
	MEM_HDR *pMVar6;
	
	if ((*Head != (MEM_HDR *)0x0) && ((*Head)->Next != (MEM_HDR *)0x0)) {
		do {
			bVar1 = false;
			pMVar5 = *Head;
			do {
				pMVar6 = pMVar5->Next;
				uVar2 = (*CompFunc)(pMVar5,pMVar6);
				if (uVar2 == '\0') {
					pMVar5 = pMVar5->Next;
				}
				else {
					pMVar4 = pMVar5->Prev;
					pMVar3 = pMVar6->Next;
					pMVar5->Prev = pMVar6;
					pMVar5->Next = pMVar3;
					pMVar6->Next = pMVar5;
					if (pMVar5->Next != (MEM_HDR *)0x0) {
						pMVar5->Next->Prev = pMVar5;
						pMVar6->Next = pMVar5;
					}
					pMVar6->Prev = pMVar4;
					if (pMVar4 == (MEM_HDR *)0x0) {
						*Head = pMVar6;
					}
					else {
						pMVar4->Next = pMVar6;
					}
					bVar1 = true;
				}
			} while (pMVar5->Next != (MEM_HDR *)0x0);
		} while (bVar1);
	}
	return;
}





