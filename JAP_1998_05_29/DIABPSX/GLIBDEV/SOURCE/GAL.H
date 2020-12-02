#ifndef GAL_H
#define GAL_H


extern void GAL_SetErrorChecking(unsigned char OnOff); // 0x800212D4

extern long GAL_SplitBlock(long CurBlock, unsigned long Size); // 0x800212E4

extern void GAL_InitModule(); // 0x80021404

extern unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M); // 0x800214BC

extern long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name); // 0x800215DC

extern void * GAL_Lock(long Handle); // 0x80021774

extern unsigned char GAL_Unlock(long Handle); // 0x800217DC

extern unsigned char GAL_Free(long Handle); // 0x80021860

extern unsigned long GAL_GetFreeMem(unsigned long Type); // 0x80021908

extern unsigned long GAL_GetUsedMem(unsigned long Type); // 0x8002197C

extern unsigned long GAL_LargestFreeBlock(unsigned long Type); // 0x800219F0

extern void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block); // 0x80021A6C

extern void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block); // 0x80021A8C

extern unsigned char IsActiveValidHandle(long Handle); // 0x80021AD8

extern void * AlignPtr(void *P, unsigned long Align); // 0x80021B10

extern unsigned long AlignSize(unsigned long Size, unsigned long Align); // 0x80021B40

extern struct MEM_HDR * FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size); // 0x80021B70

extern struct MEM_HDR * FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size); // 0x80021BC8

extern struct MEM_HDR * FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size); // 0x80021C30

extern struct MEM_INIT_INFO * GetMemInitInfoBlockFromType(unsigned long Type); // 0x80021C98

extern void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M); // 0x80021CD4

extern long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name); // 0x80021DA8

extern long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name); // 0x80021E84

extern struct MEM_HDR * FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size); // 0x8002201C

extern struct MEM_HDR * GetFreeMemHdrBlock(); // 0x80022088

extern void ReleaseMemHdrBlock(struct MEM_HDR *Index); // 0x80022110

extern void GAL_IterateEmptyMem(unsigned long MemType, TDRFuncPtr_GAL_IterateEmptyMem1Func Func); // 0x80022150

extern void GAL_IterateUsedMem(unsigned long MemType, TDRFuncPtr_GAL_IterateUsedMem1Func Func); // 0x800221D4

extern unsigned char GAL_SetMemName(long Hnd, char *Text); // 0x80022270

extern unsigned long GAL_TotalMem(unsigned long Type); // 0x800222E0

extern void * GAL_MemBase(unsigned long Type); // 0x80022334

extern unsigned char GAL_DefragMem(unsigned long type); // 0x80022388

extern unsigned char GSetError(enum GAL_ERROR_CODE Err); // 0x8002240C

extern unsigned char GAL_CheckMem(unsigned long Type); // 0x80022468

extern unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr); // 0x80022564

extern unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2); // 0x80022610

extern char * GAL_GetErrorText(enum GAL_ERROR_CODE Err); // 0x80022668

extern enum GAL_ERROR_CODE GAL_GetLastErrorCode(); // 0x80022698

extern char * GAL_GetLastErrorText(); // 0x800226A8

extern int GAL_HowManyEmptyRegions(unsigned long Type); // 0x800226D0

extern int GAL_HowManyUsedRegions(unsigned long Type); // 0x80022738

extern void GAL_SetTimeStamp(int Time); // 0x800227A0

extern void GAL_IncTimeStamp(); // 0x800227B0

extern int GAL_GetTimeStamp(); // 0x800227D0

extern long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType); // 0x800227E0

extern long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name); // 0x80022830

extern unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type); // 0x80022880

extern long GAL_GetSize(long hnd); // 0x8002292C

extern unsigned char GazDefragMem(unsigned long MemType); // 0x80022988

extern void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList); // 0x80022AF0

extern unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2); // 0x80022B94

extern void DeleteEmptyBlocks(struct MEM_INIT_INFO *M); // 0x80022BC8

extern unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M); // 0x80022C34

extern struct MEM_HDR * FindNextBlock(void *Addr, struct MEM_HDR *Blocks); // 0x80022D2C

extern unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M); // 0x80022D68

extern void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead); // 0x80022DF8

extern void SortMemHdrListByAddr(struct MEM_HDR **Head); // 0x80022E74

extern void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList); // 0x80022F28

extern void GAL_MemDump(unsigned long Type); // 0x80022F84

extern void GAL_SetVerbosity(enum GAL_VERB_LEV G); // 0x80022FF8

extern int CountFreeBlocks(); // 0x80023008

extern void SetBlockName(struct MEM_HDR *MemHdr, char *NewName); // 0x80023034

extern int GAL_GetNumFreeHeaders(); // 0x8002307C

extern unsigned long GAL_GetLastTypeAlloced(); // 0x8002308C

extern TDRFuncPtr_GAL_SetAllocFilter GAL_SetAllocFilter(TDRFuncPtr_GAL_SetAllocFilter0NewFilter NewFilter); // 0x8002309C

extern unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType); // 0x800230B4

extern unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2); // 0x80023108

extern unsigned char GAL_SortUsedRegionsByAddress(unsigned long MemType); // 0x80023118

extern unsigned char SortAddr(struct MEM_HDR *B1, struct MEM_HDR *B2); // 0x8002316C

extern void SortMemHdrList(struct MEM_HDR **Head, TDRFuncPtr_SortMemHdrList1CompFunc CompFunc); // 0x8002317C


typedef unsigned char (*TDRFuncPtr_SortMemHdrList1CompFunc)();

typedef void (*TDRFuncPtr_GAL_IterateEmptyMem1Func)();

typedef void (*TDRFuncPtr_GAL_IterateUsedMem1Func)();

typedef void (*TDRFuncPtr_GAL_SetAllocFilter)();

typedef void (*TDRFuncPtr_GAL_SetAllocFilter0NewFilter)();




#endif
