#ifndef ITEMS_H
#define ITEMS_H


extern void InitItemGFX__Fv(); // 0x8003B124

extern unsigned char ItemPlace__Fii(int xp, int yp); // 0x8003B150

extern void AddInitItems__Fv(); // 0x8003B218

extern void InitItems__Fv(); // 0x8003B430

extern void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx); // 0x8003B5F4

extern void CalcPlrScrolls__Fi(int p); // 0x8003C0A4

extern void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8003C424

extern void CalcSelfItems__Fi(int pnum); // 0x8003C4C0

extern unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x); // 0x8003C620

extern void CalcPlrItemMin__Fi(int pnum); // 0x8003C66C

extern void CalcPlrBookVals__Fi(int p); // 0x8003C74C

extern void CalcPlrInv__FiUc(int p, unsigned char Loadgfx); // 0x8003C9E0

extern void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata); // 0x8003CAA4

extern void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h); // 0x8003CBBC

extern void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h); // 0x8003CBE8

extern void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed); // 0x8003CD64

extern void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h); // 0x8003CD6C

extern void CreatePlrItems__Fi(int p); // 0x8003CD9C

extern unsigned char ItemSpaceOk__Fii(int i, int j); // 0x8003D1D8

extern unsigned char GetItemSpace__Fiic(int x, int y, char inum); // 0x8003D4B0

extern void GetSuperItemSpace__Fiic(int x, int y, char inum); // 0x8003D6DC

extern void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy); // 0x8003D844

extern void CalcItemValue__Fi(int i); // 0x8003D90C

extern void GetBookSpell__Fii(int i, int lvl); // 0x8003D9C4

extern void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood); // 0x8003DC2C

extern void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood); // 0x8003DE1C

extern void GetItemAttrs__Fiii(int i, int idata, int lvl); // 0x8003E0D0

extern int RndPL__Fii(int param1, int param2); // 0x8003E61C

extern int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv); // 0x8003E654

extern void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval); // 0x8003E6C8

extern void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood); // 0x8003FDF4

extern void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood); // 0x8004025C

extern void SetupItem__Fi(int i); // 0x80040358

extern int RndItem__Fi(int m); // 0x8004046C

extern int RndUItem__Fi(int m); // 0x800406B0

extern int RndAllItems__Fv(); // 0x800408F0

extern int RndTypeItems__Fii(int itype, int imid); // 0x80040A64

extern int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate); // 0x80040B64

extern void GetUniqueItem__Fii(int i, int uid); // 0x80040D14

extern void SpawnUnique__Fiii(int uid, int x, int y); // 0x80040FBC

extern void ItemRndDur__Fi(int ii); // 0x800410C8

extern void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen); // 0x80041158

extern void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg); // 0x80041464

extern void CreateItem__Fiii(int uid, int x, int y); // 0x800416AC

extern void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta); // 0x800417DC

extern void SetupAllUseful__Fiii(int ii, int iseed, int lvl); // 0x80041924

extern void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg); // 0x800419FC

extern void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta); // 0x80041ABC

extern void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff); // 0x80041C00

extern void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag); // 0x80041DEC

extern void SpawnRock__Fv(); // 0x80042018

extern void RespawnItem__FiUc(int i, unsigned char FlipFlag); // 0x800421D8

extern void DeleteItem__Fii(int ii, int i); // 0x8004239C

extern void ItemDoppel__Fv(); // 0x800423F0

extern void ProcessItems__Fv(); // 0x800424B8

extern void FreeItemGFX__Fv(); // 0x800425FC

extern void GetItemStr__Fi(int i); // 0x80042604

extern void CheckIdentify__Fii(int pnum, int cii); // 0x80042794

extern void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl); // 0x80042884

extern void DoRepair__Fii(int pnum, int cii); // 0x80042954

extern void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r); // 0x80042A18

extern void DoRecharge__Fii(int pnum, int cii); // 0x80042A88

extern void PrintItemOil__Fc(char IDidx); // 0x80042B88

extern void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x); // 0x80042C7C

extern void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col); // 0x80043330

extern void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x); // 0x80043338

extern void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x); // 0x800435C4

extern void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x); // 0x80043934

extern void CastScroll__Fii(int pnum, int Spell); // 0x80043C44

extern void UseItem__Fiii(int p, int Mid, int spl); // 0x80043C54

extern unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h); // 0x8004426C

extern unsigned char PremiumItemOk__Fi(int i); // 0x80044300

extern int RndPremiumItem__Fii(int minlvl, int maxlvl); // 0x8004437C

extern void SpawnOnePremium__Fii(int i, int plvl); // 0x80044484

extern void SpawnPremium__Fi(int lvl); // 0x800446A4

extern void WitchBookLevel__Fi(int ii); // 0x800448E8

extern void SpawnStoreGold__Fv(); // 0x80044A38

extern void RecalcStoreStats__Fv(); // 0x80044ABC

extern int ItemNoFlippy__Fv(); // 0x80044C5C

extern void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta); // 0x80044CC0

extern void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta); // 0x80044E50

extern void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta); // 0x80044FCC

extern void DrawUniqueInfo__Fv(); // 0x80045148

extern char * MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen); // 0x800452BC


#endif
