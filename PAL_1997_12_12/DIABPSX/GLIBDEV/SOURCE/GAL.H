#ifndef GAL_H
#define GAL_H


extern void GAL_SetErrorChecking(unsigned char OnOff); // 0x8001FA78

extern long GAL_SplitBlock(long CurBlock, unsigned long Size); // 0x8001FA88

extern void GAL_InitModule(); // 0x8001FBBC

extern unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M); // 0x8001FC74

extern long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name); // 0x8001FD94

extern void * GAL_Lock(long Handle); // 0x8001FF2C

extern unsigned char GAL_Unlock(long Handle); // 0x8001FF8C

extern unsigned char GAL_Free(long Handle); // 0x80020008

extern unsigned long GAL_GetFreeMem(unsigned long Type); // 0x800200A8

extern unsigned long GAL_GetUsedMem(unsigned long Type); // 0x8002011C

extern unsigned long GAL_LargestFreeBlock(unsigned long Type); // 0x80020190

extern void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block); // 0x8002020C

extern void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block); // 0x8002022C

extern unsigned char IsActiveValidHandle(long Handle); // 0x80020278

extern void * AlignPtr(void *P, unsigned long Align); // 0x800202A8

extern unsigned long AlignSize(unsigned long Size, unsigned long Align); // 0x800202D8

extern struct MEM_HDR * FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size); // 0x80020308

extern struct MEM_HDR * FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size); // 0x80020360

extern struct MEM_HDR * FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size); // 0x800203C8

extern struct MEM_INIT_INFO * GetMemInitInfoBlockFromType(unsigned long Type); // 0x80020430

extern void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M); // 0x8002046C

extern long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name); // 0x80020540

extern long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name); // 0x8002061C

extern struct MEM_HDR * FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size); // 0x800207B4

extern struct MEM_HDR * GetFreeMemHdrBlock(); // 0x80020820

extern void ReleaseMemHdrBlock(struct MEM_HDR *Index); // 0x800208A8

extern void GAL_IterateEmptyMem(unsigned long MemType, TDRFuncPtr_GAL_IterateEmptyMem1Func Func); // 0x800208E8

extern void GAL_IterateUsedMem(unsigned long MemType, TDRFuncPtr_GAL_IterateUsedMem1Func Func); // 0x8002096C

extern unsigned char GAL_SetMemName(long Hnd, char *Text); // 0x80020A08

extern unsigned long GAL_TotalMem(unsigned long Type); // 0x80020A70

extern void * GAL_MemBase(unsigned long Type); // 0x80020AC4

extern unsigned char GAL_DefragMem(unsigned long type); // 0x80020B18

extern unsigned char GSetError(enum GAL_ERROR_CODE Err); // 0x80020B9C

extern unsigned char GAL_CheckMem(unsigned long Type); // 0x80020BF8

extern unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr); // 0x80020CF4

extern unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2); // 0x80020DA0

extern char * GAL_GetErrorText(enum GAL_ERROR_CODE Err); // 0x80020DF8

extern enum GAL_ERROR_CODE GAL_GetLastErrorCode(); // 0x80020E28

extern char * GAL_GetLastErrorText(); // 0x80020E38

extern int GAL_HowManyEmptyRegions(unsigned long Type); // 0x80020E60

extern int GAL_HowManyUsedRegions(unsigned long Type); // 0x80020EC8

extern void GAL_SetTimeStamp(int Time); // 0x80020F30

extern void GAL_IncTimeStamp(); // 0x80020F40

extern int GAL_GetTimeStamp(); // 0x80020F60

extern long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType); // 0x80020F70

extern long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name); // 0x80020FC0

extern unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type); // 0x80021010

extern long GAL_GetSize(long hnd); // 0x800210BC

extern unsigned char GazDefragMem(unsigned long MemType); // 0x80021110

extern void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList); // 0x80021278

extern unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2); // 0x8002131C

extern void DeleteEmptyBlocks(struct MEM_INIT_INFO *M); // 0x80021350

extern unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M); // 0x800213BC

extern struct MEM_HDR * FindNextBlock(void *Addr, struct MEM_HDR *Blocks); // 0x800214B4

extern unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M); // 0x800214F0

extern void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead); // 0x80021580

extern void SortMemHdrListByAddr(struct MEM_HDR **Head); // 0x800215FC

extern void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList); // 0x800216B0

extern void GAL_MemDump(unsigned long Type); // 0x8002170C

extern void GAL_SetVerbosity(enum GAL_VERB_LEV G); // 0x80021780

extern int CountFreeBlocks(); // 0x80021790

extern void SetBlockName(struct MEM_HDR *MemHdr, char *NewName); // 0x800217BC

extern int GAL_GetNumFreeHeaders(); // 0x80021804

extern unsigned long GAL_GetLastTypeAlloced(); // 0x80021814

extern TDRFuncPtr_GAL_SetAllocFilter GAL_SetAllocFilter(TDRFuncPtr_GAL_SetAllocFilter0NewFilter NewFilter); // 0x80021824

extern unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType); // 0x8002183C

extern unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2); // 0x80021890

extern void SortMemHdrList(struct MEM_HDR **Head, TDRFuncPtr_SortMemHdrList1CompFunc CompFunc); // 0x800218A0


typedef unsigned char (*TDRFuncPtr_SortMemHdrList1CompFunc)();

typedef void (*TDRFuncPtr_GAL_IterateEmptyMem1Func)();

typedef void (*TDRFuncPtr_GAL_IterateUsedMem1Func)();

typedef void (*TDRFuncPtr_GAL_SetAllocFilter)();

typedef void (*TDRFuncPtr_GAL_SetAllocFilter0NewFilter)();




#endif
