#include "THISDUST.H"
#include "GAL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GAL_SetErrorChecking(unsigned char OnOff /*$a0*/)
 // line 175, offset 0x800212d4
	/* begin block 1 */
		// Start line: 351
	/* end block 1 */
	// End Line: 352

void GAL_SetErrorChecking(uchar OnOff)

{
	FullErrorChecking = OnOff;
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_SplitBlock(long CurBlock /*$s0*/, unsigned long Size /*$s2*/)
 // line 195, offset 0x800212e4
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x800212E4
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $s3
	// 		struct MEM_HDR *MemHdr; // $s1
	// 		struct MEM_HDR *SplitBlock; // $s0
	/* end block 1 */
	// End offset: 0x800213E4
	// End Line: 248

	/* begin block 2 */
		// Start line: 390
	/* end block 2 */
	// End Line: 391

long GAL_SplitBlock(long CurBlock,ulong Size)

{
	ushort uVar1;
	uchar uVar2;
	MEM_INIT_INFO *pMVar3;
	ulong uVar4;
	MEM_HDR *MemHdr;
	GAL_ERROR_CODE Err;
	
	uVar2 = IsActiveValidHandle(CurBlock);
	if (uVar2 == '\0') {
		Err = ERR_GAL_INVALID_MEM_HANDLE;
	}
	else {
		pMVar3 = GetMemInitInfoBlockFromType((uint)(&MemHdrBlocks)[CurBlock].Type);
		Err = ERR_GAL_INVALID_MEM_TYPE;
		if (pMVar3 != (MEM_INIT_INFO *)0x0) {
			uVar4 = AlignSize(Size,(uint)pMVar3->Alignment);
			if ((&MemHdrBlocks)[CurBlock].Size <= uVar4) {
				return -1;
			}
			MemHdr = GetFreeMemHdrBlock();
			if (MemHdr != (MEM_HDR *)0x0) {
				uVar1 = (&MemHdrBlocks)[CurBlock].Type;
				MemHdr->Owners = 1;
				MemHdr->Type = uVar1;
				MemHdr->Mem = (void *)(uVar4 + (int)(&MemHdrBlocks)[CurBlock].Mem);
				MemHdr->Size = (&MemHdrBlocks)[CurBlock].Size - uVar4;
				MemHdr->TimeStamp = (&MemHdrBlocks)[CurBlock].TimeStamp;
				SetBlockName(MemHdr,(char *)(&MemHdrBlocks)[CurBlock].Name);
				AttachHdrToList(&pMVar3->Used,MemHdr);
				(&MemHdrBlocks)[CurBlock].Size = uVar4;
				return (uint)MemHdr->Handle;
			}
			Err = ERR_RUN_OUT_OF_MEM_HDRS;
		}
	}
	GSetError(Err);
	return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_InitModule()
 // line 255, offset 0x80021404
	/* begin block 1 */
		// Start line: 256
		// Start offset: 0x80021404
		// Variables:
	// 		int f; // $s1
	/* end block 1 */
	// End offset: 0x800214A0
	// End Line: 278

	/* begin block 2 */
		// Start line: 535
	/* end block 2 */
	// End Line: 536

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
		iVar1 = iVar1 + 0x1c;
	} while (iVar2 < 200);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_AddMemType(struct MEM_INIT_INFO *M /*$s0*/)
 // line 290, offset 0x800214bc
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x800214BC
		// Variables:
	// 		struct MEM_INIT_INFO *P; // $a0
	// 		struct MEM_HDR *FreeMemHdr; // $s1
	// 		unsigned long Addr1; // $a1
	// 		unsigned long Addr2; // $v1
	/* end block 1 */
	// End offset: 0x800215C4
	// End Line: 361

	/* begin block 2 */
		// Start line: 610
	/* end block 2 */
	// End Line: 611

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
				goto LAB_800215b8;
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
LAB_800215b8:
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
 // line 375, offset 0x800215dc
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800215DC
		// Variables:
	// 		struct MEM_HDR *Block; // $s0
	// 		struct MEM_INIT_INFO *M; // $s2
	// 		unsigned long FullSize; // $s3
	// 		struct MEM_HDR (**FRoute)(); // $s4
	// 		unsigned char High; // $s7

		/* begin block 1.1 */
			// Start line: 443
			// Start offset: 0x8002170C
		/* end block 1.1 */
		// End offset: 0x80021720
		// End Line: 450
	/* end block 1 */
	// End offset: 0x80021744
	// End Line: 453

	/* begin block 2 */
		// Start line: 842
	/* end block 2 */
	// End Line: 843

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
LAB_80021668:
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
			if (Block == (MEM_HDR *)0x0) goto LAB_80021668;
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
 // line 466, offset 0x80021774
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x80021774
		// Variables:
	// 		struct MEM_HDR *MemHdr; // $v1
	/* end block 1 */
	// End offset: 0x800217C8
	// End Line: 489

	/* begin block 2 */
		// Start line: 1064
	/* end block 2 */
	// End Line: 1065

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
 // line 501, offset 0x800217dc
	/* begin block 1 */
		// Start line: 502
		// Start offset: 0x800217DC
		// Variables:
	// 		struct MEM_HDR *MemHdr; // $a0
	/* end block 1 */
	// End offset: 0x8002184C
	// End Line: 533

	/* begin block 2 */
		// Start line: 1152
	/* end block 2 */
	// End Line: 1153

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
 // line 544, offset 0x80021860
	/* begin block 1 */
		// Start line: 545
		// Start offset: 0x80021860
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $s0
	// 		struct MEM_HDR *MemHdr; // $s1
	/* end block 1 */
	// End offset: 0x800218F0
	// End Line: 584

	/* begin block 2 */
		// Start line: 1249
	/* end block 2 */
	// End Line: 1250

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
 // line 596, offset 0x80021908
	/* begin block 1 */
		// Start line: 597
		// Start offset: 0x80021908
		// Variables:
	// 		unsigned long FreeMem; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 607
			// Start offset: 0x80021930
			// Variables:
		// 		struct MEM_HDR *Block; // $v1
		/* end block 1.1 */
		// End offset: 0x80021954
		// End Line: 616
	/* end block 1 */
	// End offset: 0x80021968
	// End Line: 621

	/* begin block 2 */
		// Start line: 1370
	/* end block 2 */
	// End Line: 1371

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
 // line 634, offset 0x8002197c
	/* begin block 1 */
		// Start line: 635
		// Start offset: 0x8002197C
		// Variables:
	// 		unsigned long FreeMem; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 645
			// Start offset: 0x800219A4
			// Variables:
		// 		struct MEM_HDR *Block; // $v1
		/* end block 1.1 */
		// End offset: 0x800219C8
		// End Line: 654
	/* end block 1 */
	// End offset: 0x800219DC
	// End Line: 659

	/* begin block 2 */
		// Start line: 1456
	/* end block 2 */
	// End Line: 1457

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
 // line 673, offset 0x800219f0
	/* begin block 1 */
		// Start line: 674
		// Start offset: 0x800219F0
		// Variables:
	// 		unsigned long Largest; // $a1
	// 		struct MEM_HDR *Index; // $v1
	// 		struct MEM_INIT_INFO *MI; // $v0
	/* end block 1 */
	// End offset: 0x80021A5C
	// End Line: 700

	/* begin block 2 */
		// Start line: 1544
	/* end block 2 */
	// End Line: 1545

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
 // line 711, offset 0x80021a6c
	/* begin block 1 */
		// Start line: 1621
	/* end block 1 */
	// End Line: 1622

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
 // line 731, offset 0x80021a8c
	/* begin block 1 */
		// Start line: 1661
	/* end block 1 */
	// End Line: 1662

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
 // line 753, offset 0x80021ad8
	/* begin block 1 */
		// Start line: 755
		// Start offset: 0x80021AD8
	/* end block 1 */
	// End offset: 0x80021B08
	// End Line: 767

	/* begin block 2 */
		// Start line: 1707
	/* end block 2 */
	// End Line: 1708

uchar IsActiveValidHandle(long Handle)

{
	bool bVar1;
	
	if ((uint)Handle < 200) {
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
 // line 780, offset 0x80021b10
	/* begin block 1 */
		// Start line: 782
		// Start offset: 0x80021B10
		// Variables:
	// 		unsigned long Addr; // $a0
	// 		unsigned long Temp; // $v0
	/* end block 1 */
	// End offset: 0x80021B38
	// End Line: 791

	/* begin block 2 */
		// Start line: 1763
	/* end block 2 */
	// End Line: 1764

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
 // line 803, offset 0x80021b40
	/* begin block 1 */
		// Start line: 1805
	/* end block 1 */
	// End Line: 1806

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
 // line 818, offset 0x80021b70
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x80021B70
		// Variables:
	// 		struct MEM_HDR *Closest; // $a2
	// 		struct MEM_HDR *Index; // $a0
	/* end block 1 */
	// End offset: 0x80021BC0
	// End Line: 844

	/* begin block 2 */
		// Start line: 1842
	/* end block 2 */
	// End Line: 1843

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
 // line 855, offset 0x80021bc8
	/* begin block 1 */
		// Start line: 857
		// Start offset: 0x80021BC8
		// Variables:
	// 		struct MEM_HDR *Closest; // $a2
	// 		struct MEM_HDR *Index; // $a0
	// 		void *Highest; // $a3
	/* end block 1 */
	// End offset: 0x80021C28
	// End Line: 889

	/* begin block 2 */
		// Start line: 1913
	/* end block 2 */
	// End Line: 1914

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
 // line 899, offset 0x80021c30
	/* begin block 1 */
		// Start line: 901
		// Start offset: 0x80021C30
		// Variables:
	// 		struct MEM_HDR *Closest; // $a2
	// 		struct MEM_HDR *Index; // $a0
	// 		unsigned long Lowest; // $a3
	/* end block 1 */
	// End offset: 0x80021C90
	// End Line: 935

	/* begin block 2 */
		// Start line: 2001
	/* end block 2 */
	// End Line: 2002

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
 // line 946, offset 0x80021c98
	/* begin block 1 */
		// Start line: 948
		// Start offset: 0x80021C98
		// Variables:
	// 		struct MEM_INIT_INFO *P; // $v1
	/* end block 1 */
	// End offset: 0x80021CCC
	// End Line: 968

	/* begin block 2 */
		// Start line: 2096
	/* end block 2 */
	// End Line: 2097

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
 // line 980, offset 0x80021cd4
	/* begin block 1 */
		// Start line: 981
		// Start offset: 0x80021CD4
		// Variables:
	// 		struct MEM_HDR *Index; // $s0
	// 		struct MEM_HDR *NextIndex; // $s2
	// 		void *Start; // $s3
	// 		void *End; // $s5

		/* begin block 1.1 */
			// Start line: 1001
			// Start offset: 0x80021D14
			// Variables:
		// 		void *ThisStart; // $v0
		// 		void *ThisEnd; // $a0
		/* end block 1.1 */
		// End offset: 0x80021D68
		// End Line: 1030
	/* end block 1 */
	// End offset: 0x80021D80
	// End Line: 1034

	/* begin block 2 */
		// Start line: 2158
	/* end block 2 */
	// End Line: 2159

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
 // line 1055, offset 0x80021da8
	/* begin block 1 */
		// Start line: 1056
		// Start offset: 0x80021DA8
		// Variables:
	// 		struct MEM_HDR *Block; // $s0
	// 		struct MEM_INIT_INFO *M; // $s1
	/* end block 1 */
	// End offset: 0x80021E60
	// End Line: 1086

	/* begin block 2 */
		// Start line: 2311
	/* end block 2 */
	// End Line: 2312

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
 // line 1109, offset 0x80021e84
	/* begin block 1 */
		// Start line: 1110
		// Start offset: 0x80021E84
		// Variables:
	// 		struct MEM_HDR *SplitBlock; // $s0
	// 		unsigned long PhysSize; // $s4
	/* end block 1 */
	// End offset: 0x80021FF4
	// End Line: 1197

	/* begin block 2 */
		// Start line: 2434
	/* end block 2 */
	// End Line: 2435

long LoAlloc(MEM_INIT_INFO *M,MEM_HDR *Block,void *Addr,ulong Size,char *Name)

{
	bool bVar1;
	ushort uVar2;
	ulong uVar3;
	MEM_HDR *M_00;
	uint uVar4;
	
	uVar3 = AlignSize(Size,(uint)M->Alignment);
	if (Block->Mem == Addr) {
LAB_80021f28:
		if (uVar3 < Block->Size) {
			M_00 = GetFreeMemHdrBlock();
			if (M_00 == (MEM_HDR *)0x0) goto LAB_80021f50;
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
			goto LAB_80021f28;
		}
LAB_80021f50:
		GSetError(ERR_RUN_OUT_OF_MEM_HDRS);
		uVar4 = 0xffffffff;
	}
	return uVar4;
}



// decompiled code
// original method signature: 
// struct MEM_HDR * /*$ra*/ FindBlockInTheseBounds(struct MEM_HDR *Head /*$a0*/, void *Addr /*$a1*/, unsigned long Size /*$a2*/)
 // line 1212, offset 0x8002201c
	/* begin block 1 */
		// Start line: 1214
		// Start offset: 0x8002201C
		// Variables:
	// 		struct MEM_HDR *Index; // $a0
	// 		unsigned char Done; // $a3
	// 		unsigned long ThisStart; // $v1
	// 		unsigned long ThisEnd; // $v0
	// 		unsigned long Start; // $a1
	// 		unsigned long End; // $a2
	/* end block 1 */
	// End offset: 0x80022080
	// End Line: 1240

	/* begin block 2 */
		// Start line: 2659
	/* end block 2 */
	// End Line: 2660

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
 // line 1251, offset 0x80022088
	/* begin block 1 */
		// Start line: 1252
		// Start offset: 0x80022088
		// Variables:
	// 		struct MEM_HDR *RetBlock; // $s0
	/* end block 1 */
	// End offset: 0x800220FC
	// End Line: 1269

	/* begin block 2 */
		// Start line: 2733
	/* end block 2 */
	// End Line: 2734

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
 // line 1281, offset 0x80022110
	/* begin block 1 */
		// Start line: 2795
	/* end block 1 */
	// End Line: 2796

void ReleaseMemHdrBlock(MEM_HDR *Index)

{
	NumOfFreeHdrs = NumOfFreeHdrs + 1;
	AttachHdrToList(&FreeBlocks,Index);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_IterateEmptyMem(unsigned long MemType /*$a0*/, TDRFuncPtr_GAL_IterateEmptyMem1Func Func /*$s1*/)
 // line 1295, offset 0x80022150
	/* begin block 1 */
		// Start line: 1296
		// Start offset: 0x80022150
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 1303
			// Start offset: 0x8002217C
			// Variables:
		// 		struct MEM_HDR *Block; // $s0
		/* end block 1.1 */
		// End offset: 0x800221AC
		// End Line: 1312
	/* end block 1 */
	// End offset: 0x800221BC
	// End Line: 1316

	/* begin block 2 */
		// Start line: 2825
	/* end block 2 */
	// End Line: 2826

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
 // line 1325, offset 0x800221d4
	/* begin block 1 */
		// Start line: 1326
		// Start offset: 0x800221D4
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0

		/* begin block 1.1 */
			// Start line: 1333
			// Start offset: 0x80022200
			// Variables:
		// 		struct MEM_HDR *Block; // $s0
		/* end block 1.1 */
		// End offset: 0x80022248
		// End Line: 1342
	/* end block 1 */
	// End offset: 0x80022258
	// End Line: 1346

	/* begin block 2 */
		// Start line: 2890
	/* end block 2 */
	// End Line: 2891

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
 // line 1356, offset 0x80022270
	/* begin block 1 */
		// Start line: 2957
	/* end block 1 */
	// End Line: 2958

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
 // line 1380, offset 0x800222e0
	/* begin block 1 */
		// Start line: 1381
		// Start offset: 0x800222E0
		// Variables:
	// 		unsigned long TotalMem; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x80022320
	// End Line: 1395

	/* begin block 2 */
		// Start line: 3011
	/* end block 2 */
	// End Line: 3012

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
 // line 1408, offset 0x80022334
	/* begin block 1 */
		// Start line: 1409
		// Start offset: 0x80022334
		// Variables:
	// 		void *Ret; // $s0
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x80022374
	// End Line: 1425

	/* begin block 2 */
		// Start line: 3077
	/* end block 2 */
	// End Line: 3078

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
 // line 1438, offset 0x80022388
	/* begin block 1 */
		// Start line: 1439
		// Start offset: 0x80022388
	/* end block 1 */
	// End offset: 0x800223F8
	// End Line: 1456

	/* begin block 2 */
		// Start line: 3146
	/* end block 2 */
	// End Line: 3147

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
 // line 1468, offset 0x8002240c
	/* begin block 1 */
		// Start line: 3207
	/* end block 1 */
	// End Line: 3208

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
 // line 1488, offset 0x80022468
	/* begin block 1 */
		// Start line: 1489
		// Start offset: 0x80022468
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $s1
	// 		struct MEM_HDR *MemHdr; // $s0
	// 		unsigned long TotalMem; // $s2
	/* end block 1 */
	// End offset: 0x80022548
	// End Line: 1541

	/* begin block 2 */
		// Start line: 3247
	/* end block 2 */
	// End Line: 3248

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
			if (uVar2 != '\0') goto LAB_8002253c;
			puVar1 = &MemHdr->Size;
			MemHdr = MemHdr->Next;
			uVar3 = uVar3 + *puVar1;
		}
		MemHdr = M->Used;
		while (MemHdr != (MEM_HDR *)0x0) {
			uVar2 = CheckCollisions(M,MemHdr);
			Err = ERR_GAL_MEM_BLOCK_COLLISION;
			if (uVar2 != '\0') goto LAB_8002253c;
			puVar1 = &MemHdr->Size;
			MemHdr = MemHdr->Next;
			uVar3 = uVar3 + *puVar1;
		}
		Err = ERR_GAL_MEM_AREA_NOT_COVERED;
		if (M->Size == uVar3) {
			uVar2 = '\x01';
		}
		else {
LAB_8002253c:
			uVar2 = GSetError(Err);
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ CheckCollisions(struct MEM_INIT_INFO *M /*$s2*/, struct MEM_HDR *MemHdr /*$s1*/)
 // line 1555, offset 0x80022564
	/* begin block 1 */
		// Start line: 1556
		// Start offset: 0x80022564
		// Variables:
	// 		struct MEM_HDR *CheckHdr; // $s0
	/* end block 1 */
	// End offset: 0x800225F4
	// End Line: 1581

	/* begin block 2 */
		// Start line: 3398
	/* end block 2 */
	// End Line: 3399

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
 // line 1593, offset 0x80022610
	/* begin block 1 */
		// Start line: 1595
		// Start offset: 0x80022610
		// Variables:
	// 		unsigned long Addr1; // $a1
	// 		unsigned long Addr2; // $a2
	/* end block 1 */
	// End offset: 0x80022660
	// End Line: 1609

	/* begin block 2 */
		// Start line: 3479
	/* end block 2 */
	// End Line: 3480

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
 // line 1620, offset 0x80022668
	/* begin block 1 */
		// Start line: 3532
	/* end block 1 */
	// End Line: 3533

char * GAL_GetErrorText(GAL_ERROR_CODE Err)

{
	char *pcVar1;
	
	if (Err < NUM_OF_ERROR_MESSAGES) {
		pcVar1 = GalErrors10[Err];
	}
	else {
		pcVar1 = "Invalid error code";
	}
	return pcVar1;
}



// decompiled code
// original method signature: 
// enum GAL_ERROR_CODE /*$ra*/ GAL_GetLastErrorCode()
 // line 1635, offset 0x80022698
	/* begin block 1 */
		// Start line: 3564
	/* end block 1 */
	// End Line: 3565

/* WARNING: Unknown calling convention yet parameter storage is locked */

GAL_ERROR_CODE GAL_GetLastErrorCode(void)

{
	return LastError;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GAL_GetLastErrorText()
 // line 1647, offset 0x800226a8
	/* begin block 1 */
		// Start line: 3588
	/* end block 1 */
	// End Line: 3589

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
 // line 1660, offset 0x800226d0
	/* begin block 1 */
		// Start line: 1661
		// Start offset: 0x800226D0
		// Variables:
	// 		struct MEM_INIT_INFO *m; // $v0
	// 		int Count; // $v1

		/* begin block 1.1 */
			// Start line: 1669
			// Start offset: 0x800226F0
			// Variables:
		// 		struct MEM_HDR *mh; // $v0
		/* end block 1.1 */
		// End offset: 0x80022710
		// End Line: 1680
	/* end block 1 */
	// End offset: 0x80022728
	// End Line: 1688

	/* begin block 2 */
		// Start line: 3614
	/* end block 2 */
	// End Line: 3615

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
 // line 1697, offset 0x80022738
	/* begin block 1 */
		// Start line: 1698
		// Start offset: 0x80022738
		// Variables:
	// 		struct MEM_INIT_INFO *m; // $v0
	// 		int Count; // $v1

		/* begin block 1.1 */
			// Start line: 1706
			// Start offset: 0x80022758
			// Variables:
		// 		struct MEM_HDR *mh; // $v0
		/* end block 1.1 */
		// End offset: 0x80022778
		// End Line: 1715
	/* end block 1 */
	// End offset: 0x80022790
	// End Line: 1723

	/* begin block 2 */
		// Start line: 3688
	/* end block 2 */
	// End Line: 3689

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
 // line 1731, offset 0x800227a0
	/* begin block 1 */
		// Start line: 3757
	/* end block 1 */
	// End Line: 3758

void GAL_SetTimeStamp(int Time)

{
	TimeStamp = Time;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GAL_IncTimeStamp()
 // line 1742, offset 0x800227b0
	/* begin block 1 */
		// Start line: 3779
	/* end block 1 */
	// End Line: 3780

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GAL_IncTimeStamp(void)

{
	TimeStamp = TimeStamp + 1;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAL_GetTimeStamp()
 // line 1752, offset 0x800227d0
	/* begin block 1 */
		// Start line: 3799
	/* end block 1 */
	// End Line: 3800

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GAL_GetTimeStamp(void)

{
	return TimeStamp;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GAL_AlignSizeToType(unsigned long Size /*$s0*/, unsigned long MemType /*$a1*/)
 // line 1769, offset 0x800227e0
	/* begin block 1 */
		// Start line: 1770
		// Start offset: 0x800227E0
		// Variables:
	// 		struct MEM_INIT_INFO *Mi; // $v0
	/* end block 1 */
	// End offset: 0x8002281C
	// End Line: 1781

	/* begin block 2 */
		// Start line: 3832
	/* end block 2 */
	// End Line: 3833

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
 // line 1800, offset 0x80022830
	/* begin block 1 */
		// Start line: 1801
		// Start offset: 0x80022830
	/* end block 1 */
	// End offset: 0x80022868
	// End Line: 1806

	/* begin block 2 */
		// Start line: 3899
	/* end block 2 */
	// End Line: 3900

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
 // line 1820, offset 0x80022880
	/* begin block 1 */
		// Start line: 1821
		// Start offset: 0x80022880
		// Variables:
	// 		unsigned int TotalMem; // $s1
	// 		int f; // $s2
	/* end block 1 */
	// End offset: 0x80022904
	// End Line: 1838

	/* begin block 2 */
		// Start line: 3941
	/* end block 2 */
	// End Line: 3942

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
 // line 1848, offset 0x8002292c
	/* begin block 1 */
		// Start line: 1849
		// Start offset: 0x8002292C
	/* end block 1 */
	// End offset: 0x80022974
	// End Line: 1860

	/* begin block 2 */
		// Start line: 4017
	/* end block 2 */
	// End Line: 4018

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
 // line 1873, offset 0x80022988
	/* begin block 1 */
		// Start line: 1874
		// Start offset: 0x80022988
		// Variables:
	// 		struct MEM_HDR *LockedBlocks; // stack offset -32
	// 		struct MEM_INIT_INFO *M; // $s1
	// 		struct MEM_REG Reg; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1923
			// Start offset: 0x80022A44
			// Variables:
		// 		struct MEM_HDR *NewEmptyBlock; // $a1
		// 		struct MEM_HDR *ListOfBlocksInRegion; // stack offset -28
		// 		unsigned long ShuffledSize; // $s2
		// 		int GapSize; // $s0
		/* end block 1.1 */
		// End offset: 0x80022AAC
		// End Line: 1956
	/* end block 1 */
	// End offset: 0x80022ACC
	// End Line: 1966

	/* begin block 2 */
		// Start line: 4072
	/* end block 2 */
	// End Line: 4073

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
						goto LAB_800229e0;
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
LAB_800229e0:
	GSetError(Err);
	return '\0';
}



// decompiled code
// original method signature: 
// void /*$ra*/ PutBlocksInRegionIntoList(struct MEM_REG *Reg /*$s3*/, struct MEM_HDR **ToList /*$s4*/, struct MEM_HDR **FromList /*$s2*/)
 // line 1978, offset 0x80022af0
	/* begin block 1 */
		// Start line: 1979
		// Start offset: 0x80022AF0
		// Variables:
	// 		struct MEM_HDR *ThisBlock; // $s0

		/* begin block 1.1 */
			// Start line: 1987
			// Start offset: 0x80022B24
			// Variables:
		// 		struct MEM_HDR *NextBlock; // $s1
		// 		struct MEM_REG MemReg; // stack offset -32
		/* end block 1.1 */
		// End offset: 0x80022B64
		// End Line: 2001
	/* end block 1 */
	// End offset: 0x80022B70
	// End Line: 2003

	/* begin block 2 */
		// Start line: 4347
	/* end block 2 */
	// End Line: 4348

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
 // line 2015, offset 0x80022b94
	/* begin block 1 */
		// Start line: 4426
	/* end block 1 */
	// End Line: 4427

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
 // line 2034, offset 0x80022bc8
	/* begin block 1 */
		// Start line: 2035
		// Start offset: 0x80022BC8

		/* begin block 1.1 */
			// Start line: 2038
			// Start offset: 0x80022BEC
			// Variables:
		// 		struct MEM_HDR *ThisBlock; // $s0
		/* end block 1.1 */
		// End offset: 0x80022BEC
		// End Line: 2040
	/* end block 1 */
	// End offset: 0x80022C1C
	// End Line: 2045

	/* begin block 2 */
		// Start line: 4462
	/* end block 2 */
	// End Line: 4463

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
 // line 2062, offset 0x80022c34
	/* begin block 1 */
		// Start line: 2063
		// Start offset: 0x80022C34
		// Variables:
	// 		struct MEM_HDR *FirstBlock; // $v1
	// 		struct MEM_HDR *SecondBlock; // $v0
	// 		struct MEM_REG NewReg; // stack offset -24
	/* end block 1 */
	// End offset: 0x80022D10
	// End Line: 2098

	/* begin block 2 */
		// Start line: 4518
	/* end block 2 */
	// End Line: 4519

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
 // line 2136, offset 0x80022d2c
	/* begin block 1 */
		// Start line: 2138
		// Start offset: 0x80022D2C

		/* begin block 1.1 */
			// Start line: 2142
			// Start offset: 0x80022D3C
			// Variables:
		// 		unsigned long BlockAddr; // $v0
		/* end block 1.1 */
		// End offset: 0x80022D50
		// End Line: 2151
	/* end block 1 */
	// End offset: 0x80022D60
	// End Line: 2156

	/* begin block 2 */
		// Start line: 4668
	/* end block 2 */
	// End Line: 4669

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
 // line 2169, offset 0x80022d68
	/* begin block 1 */
		// Start line: 2170
		// Start offset: 0x80022D68
		// Variables:
	// 		unsigned long NewSize; // $s2
	// 		void *MemBase; // $s1
	// 		struct MEM_HDR *ThisBlock; // $s0
	/* end block 1 */
	// End offset: 0x80022DD8
	// End Line: 2199

	/* begin block 2 */
		// Start line: 4733
	/* end block 2 */
	// End Line: 4734

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
 // line 2210, offset 0x80022df8
	/* begin block 1 */
		// Start line: 2211
		// Start offset: 0x80022DF8
		// Variables:
	// 		struct MEM_HDR *CurHdr; // $s0

		/* begin block 1.1 */
			// Start line: 2218
			// Start offset: 0x80022E24
			// Variables:
		// 		struct MEM_HDR *NextCurHdr; // $s1
		/* end block 1.1 */
		// End offset: 0x80022E48
		// End Line: 2228
	/* end block 1 */
	// End offset: 0x80022E54
	// End Line: 2230

	/* begin block 2 */
		// Start line: 4824
	/* end block 2 */
	// End Line: 4825

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
 // line 2242, offset 0x80022e74
	/* begin block 1 */
		// Start line: 2244
		// Start offset: 0x80022E74
		// Variables:
	// 		unsigned char DidASwap; // $a3
	// 		struct MEM_HDR *CurHdr; // $a1
	// 		struct MEM_HDR *NextHdr; // $a2

		/* begin block 1.1 */
			// Start line: 2264
			// Start offset: 0x80022EBC
			// Variables:
		// 		struct MEM_HDR *OldPrev; // $v1
		/* end block 1.1 */
		// End offset: 0x80022EFC
		// End Line: 2283
	/* end block 1 */
	// End offset: 0x80022F20
	// End Line: 2293

	/* begin block 2 */
		// Start line: 4895
	/* end block 2 */
	// End Line: 4896

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
 // line 2303, offset 0x80022f28
	/* begin block 1 */
		// Start line: 2305
		// Start offset: 0x80022F28
		// Variables:
	// 		struct MEM_HDR *OldFirst; // $a2

		/* begin block 1.1 */
			// Start line: 2311
			// Start offset: 0x80022F38
			// Variables:
		// 		struct MEM_HDR *LastHdr; // $v1
		/* end block 1.1 */
		// End offset: 0x80022F7C
		// End Line: 2326
	/* end block 1 */
	// End offset: 0x80022F7C
	// End Line: 2327

	/* begin block 2 */
		// Start line: 5018
	/* end block 2 */
	// End Line: 5019

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
 // line 2337, offset 0x80022f84
	/* begin block 1 */
		// Start line: 5083
	/* end block 1 */
	// End Line: 5084

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
 // line 2356, offset 0x80022ff8
	/* begin block 1 */
		// Start line: 5124
	/* end block 1 */
	// End Line: 5125

void GAL_SetVerbosity(GAL_VERB_LEV G)

{
	VerbLev = G;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CountFreeBlocks()
 // line 2370, offset 0x80023008
	/* begin block 1 */
		// Start line: 2372
		// Start offset: 0x80023008
		// Variables:
	// 		struct MEM_HDR *RetBlock; // $v1
	// 		int Count; // $v0
	/* end block 1 */
	// End offset: 0x8002302C
	// End Line: 2385

	/* begin block 2 */
		// Start line: 5155
	/* end block 2 */
	// End Line: 5156

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
 // line 2396, offset 0x80023034
	/* begin block 1 */
		// Start line: 2397
		// Start offset: 0x80023034
		// Variables:
	// 		int IndexSoFar; // $a2
	/* end block 1 */
	// End offset: 0x80023070
	// End Line: 2409

	/* begin block 2 */
		// Start line: 5203
	/* end block 2 */
	// End Line: 5204

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
		} while (iVar1 != 3);
	}
	MemHdr->Name[iVar1] = '\0';
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GAL_GetNumFreeHeaders()
 // line 2417, offset 0x8002307c
	/* begin block 1 */
		// Start line: 5246
	/* end block 1 */
	// End Line: 5247

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GAL_GetNumFreeHeaders(void)

{
	return NumOfFreeHdrs;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GAL_GetLastTypeAlloced()
 // line 2422, offset 0x8002308c
	/* begin block 1 */
		// Start line: 5256
	/* end block 1 */
	// End Line: 5257

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GAL_GetLastTypeAlloced(void)

{
	return LastTypeAlloced;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_GAL_SetAllocFilter /*$ra*/ GAL_SetAllocFilter(TDRFuncPtr_GAL_SetAllocFilter0NewFilter NewFilter /*$a0*/)
 // line 2433, offset 0x8002309c
	/* begin block 1 */
		// Start line: 2435
		// Start offset: 0x8002309C
		// Variables:
	// 		void (*OldFilter)(); // $v0
	/* end block 1 */
	// End offset: 0x800230AC
	// End Line: 2441

	/* begin block 2 */
		// Start line: 5280
	/* end block 2 */
	// End Line: 5281

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
 // line 2449, offset 0x800230b4
	/* begin block 1 */
		// Start line: 2450
		// Start offset: 0x800230B4
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x800230F8
	// End Line: 2462

	/* begin block 2 */
		// Start line: 5309
	/* end block 2 */
	// End Line: 5310

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
 // line 2464, offset 0x80023108
	/* begin block 1 */
		// Start line: 5344
	/* end block 1 */
	// End Line: 5345

uchar SortSize(MEM_HDR *B1,MEM_HDR *B2)

{
	return (uchar)(B1->Size < B2->Size);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GAL_SortUsedRegionsByAddress(unsigned long MemType /*$a0*/)
 // line 2477, offset 0x80023118
	/* begin block 1 */
		// Start line: 2478
		// Start offset: 0x80023118
		// Variables:
	// 		struct MEM_INIT_INFO *M; // $v0
	/* end block 1 */
	// End offset: 0x8002315C
	// End Line: 2490

	/* begin block 2 */
		// Start line: 5369
	/* end block 2 */
	// End Line: 5370

uchar GAL_SortUsedRegionsByAddress(ulong MemType)

{
	MEM_INIT_INFO *pMVar1;
	
	pMVar1 = GetMemInitInfoBlockFromType(MemType & 0xffff7fff);
	if (pMVar1 == (MEM_INIT_INFO *)0x0) {
		GSetError(ERR_GAL_INVALID_MEM_TYPE);
	}
	else {
		SortMemHdrList(&pMVar1->Used,SortAddr);
	}
	return (uchar)(pMVar1 != (MEM_INIT_INFO *)0x0);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ SortAddr(struct MEM_HDR *B1 /*$a0*/, struct MEM_HDR *B2 /*$a1*/)
 // line 2492, offset 0x8002316c
	/* begin block 1 */
		// Start line: 5404
	/* end block 1 */
	// End Line: 5405

uchar SortAddr(MEM_HDR *B1,MEM_HDR *B2)

{
	return (uchar)(B1->Mem < B2->Mem);
}



// decompiled code
// original method signature: 
// void /*$ra*/ SortMemHdrList(struct MEM_HDR **Head /*$s3*/, TDRFuncPtr_SortMemHdrList1CompFunc CompFunc /*$s4*/)
 // line 2507, offset 0x8002317c
	/* begin block 1 */
		// Start line: 2508
		// Start offset: 0x8002317C
		// Variables:
	// 		unsigned char DidASwap; // $s2
	// 		struct MEM_HDR *CurHdr; // $s0
	// 		struct MEM_HDR *NextHdr; // $s1

		/* begin block 1.1 */
			// Start line: 2528
			// Start offset: 0x800231E0
			// Variables:
		// 		struct MEM_HDR *OldPrev; // $v1
		/* end block 1.1 */
		// End offset: 0x80023220
		// End Line: 2547
	/* end block 1 */
	// End offset: 0x80023248
	// End Line: 2557

	/* begin block 2 */
		// Start line: 5433
	/* end block 2 */
	// End Line: 5434

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





