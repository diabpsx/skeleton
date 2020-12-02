#ifndef DAVEO_H
#define DAVEO_H


extern void ReadPad__Fi(int NoDeb); // 0x8008463C

extern void DummyPoll__Fv(); // 0x800847C4

extern void DaveOwens__Fv(); // 0x800847CC

extern void DaveCentreStuff__Fv(); // 0x800847D4

extern void PlaceStoreGold2__Fil(int myplr, long v); // 0x8008491C

extern void GivePlayerDosh__Fil(int PlayerNo, long cost); // 0x80084B44

extern int CalcItemVal__FP10ItemStruct(struct ItemStruct *Item); // 0x80084CF8

extern void RemoveDupInvItem__Fii(int pnum, int iv); // 0x80084D54

extern long DetectDup__FP10ItemStructi(struct ItemStruct *Item, int PlayerNo); // 0x80084F44

extern void WinterSales__Fi(int PlayerNo); // 0x800851C0

extern int SpecUn__FP10ItemStruct(struct ItemStruct *pi); // 0x800853FC

extern void EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv(); // 0x800854D0

extern void KeefDaFeef__Fi(int PlayerNo); // 0x80085518

extern void ClearQuestFlags__Fv(); // 0x800857F8


#endif
