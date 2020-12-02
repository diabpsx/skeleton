#ifndef SCRATCH_H
#define SCRATCH_H


extern void * IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols); // 0x8009B288

extern unsigned short GetClut__C8PalEntry(struct PalEntry *this); // 0x8009B27C

extern void Init__8PalEntry(struct PalEntry *this); // 0x8009B274

extern void * SetJustUsed__8PalEntryb(struct PalEntry *this, void * NewVal); // 0x8009B26C

extern void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos); // 0x8009B240

extern void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols); // 0x8009B22C

extern unsigned short SCR_GetBlackClut__Fv(); // 0x8009AC78

extern void SCR_Open__Fv(); // 0x8009AC84

extern void SCR_DumpClut__Fv(); // 0x8009ACBC

extern unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols); // 0x8009AD30

extern void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos); // 0x8009AD64

extern struct PalEntry * FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols); // 0x8009ADF4

extern struct PalEntry * NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols); // 0x8009AED0

extern void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols); // 0x8009AF50

extern unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols); // 0x8009AFF0

extern void UpdatePals__13PalCollection(struct PalCollection *this); // 0x8009B038

extern void SCR_Handler__Fv(); // 0x8009B0AC


#endif
