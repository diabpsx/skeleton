#ifndef SCRATCH_H
#define SCRATCH_H


extern void * IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols); // 0x80090EAC

extern unsigned short GetClut__C8PalEntry(struct PalEntry *this); // 0x80090EA0

extern void Init__8PalEntry(struct PalEntry *this); // 0x80090E98

extern void * SetJustUsed__8PalEntryb(struct PalEntry *this, void * NewVal); // 0x80090E90

extern void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos); // 0x80090E64

extern void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols); // 0x80090E50

extern unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols); // 0x80090908

extern void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos); // 0x8009093C

extern struct PalEntry * FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols); // 0x800909CC

extern struct PalEntry * NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols); // 0x80090AA8

extern void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols); // 0x80090B28

extern unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols); // 0x80090BC8

extern void UpdatePals__13PalCollection(struct PalCollection *this); // 0x80090C5C

extern void SCR_Handler__Fv(); // 0x80090CD0


#endif
