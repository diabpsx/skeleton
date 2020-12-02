#ifndef ITEMS_H
#define ITEMS_H


extern void InitItemGFX__Fv(); // 0x8003E24C

extern unsigned char ItemPlace__Fii(int xp, int yp); // 0x8003E254

extern void AddInitItems__Fv(); // 0x8003E2F0

extern void InitItems__Fb(void * re_init); // 0x8003E4F8

extern void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx); // 0x8003E6B0

extern void CalcPlrScrolls__Fi(int p); // 0x8003F130

extern void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8003F4B0

extern void CalcSelfItems__Fi(int pnum); // 0x8003F57C

extern unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x); // 0x8003F6DC

extern void SetItemMinStats__FPC12PlayerStructP10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x); // 0x8003F728

extern void CalcPlrItemMin__Fi(int pnum); // 0x8003F754

extern void CalcPlrBookVals__Fi(int p); // 0x8003F834

extern void CalcPlrInv__FiUc(int p, unsigned char Loadgfx); // 0x8003FB18

extern void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata); // 0x8003FBC8

extern void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h); // 0x8003FCE0

extern void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h); // 0x8003FD0C

extern void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed); // 0x8003FE74

extern void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h); // 0x8003FE7C

extern void CreatePlrItems__Fi(int p); // 0x8003FEAC

extern unsigned char ItemSpaceOk__Fii(int i, int j); // 0x8004040C

extern unsigned char GetItemSpace__Fiic(int x, int y, char inum); // 0x8004068C

extern void GetSuperItemSpace__Fiic(int x, int y, char inum); // 0x800408A4

extern void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy); // 0x800409FC

extern void CalcItemValue__Fi(int i); // 0x80040AC4

extern void GetBookSpell__Fii(int i, int lvl); // 0x80040B7C

extern void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood); // 0x80040DDC

extern void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood); // 0x80040FC4

extern void GetItemAttrs__Fiii(int i, int idata, int lvl); // 0x8004129C

extern int RndPL__Fii(int param1, int param2); // 0x8004180C

extern int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv); // 0x80041840

extern void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval); // 0x800418B4

extern void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood); // 0x80042FE4

extern void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood); // 0x80043434

extern void SetupItem__Fi(int i); // 0x80043530

extern int RndItem__Fi(int m); // 0x80043660

extern int RndUItem__Fi(int m); // 0x80043894

extern int RndAllItems__Fv(); // 0x80043ADC

extern int RndTypeItems__Fii(int itype, int imid); // 0x80043C40

extern int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate); // 0x80043DB0

extern void GetUniqueItem__Fii(int i, int _uid); // 0x80043F54

extern void SpawnUnique__Fiii(int uid, int x, int y); // 0x800442B4

extern void ItemRndDur__Fi(int ii); // 0x800443F4

extern void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int _iseed, int lvl, int uper, int onlygood, int recreate, int pregen); // 0x80044490

extern void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg); // 0x800447C8

extern void CreateItem__Fiii(int uid, int x, int y); // 0x80044A20

extern void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta); // 0x80044BD8

extern void SetupAllUseful__Fiii(int ii, int iseed, int lvl); // 0x80044D20

extern void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg); // 0x80044E04

extern void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta); // 0x80044EC4

extern void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff); // 0x80045008

extern void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag); // 0x80045208

extern void SpawnRock__Fv(); // 0x80045454

extern void RespawnItem__FiUc(int i, unsigned char FlipFlag); // 0x80045600

extern void DeleteItem__Fii(int ii, int i); // 0x800457B8

extern void ItemDoppel__Fv(); // 0x8004580C

extern void ProcessItems__Fv(); // 0x800458CC

extern void FreeItemGFX__Fv(); // 0x80045B70

extern void GetItemStr__Fi(int i); // 0x80045B78

extern void CheckIdentify__Fii(int pnum, int cii); // 0x80045D20

extern void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl); // 0x80045E1C

extern void DoRepair__Fii(int pnum, int cii); // 0x80045F0C

extern void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r); // 0x80045FD0

extern void DoRecharge__Fii(int pnum, int cii); // 0x80046038

extern void PrintItemOil__Fc(char IDidx); // 0x8004615C

extern void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x); // 0x80046258

extern void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x); // 0x80046A1C

extern void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x); // 0x80046C7C

extern void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x); // 0x800470F8

extern void CastScroll__Fii(int pnum, int Spell); // 0x80047464

extern void UseItem__Fiii(int p, int Mid, int spl); // 0x800476F0

extern unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h); // 0x80047D04

extern unsigned char PremiumItemOk__Fi(int i); // 0x80047D98

extern int RndPremiumItem__Fii(int minlvl, int maxlvl); // 0x80047E14

extern void SpawnOnePremium__Fii(int i, int plvl); // 0x80047F18

extern void SpawnPremium__Fi(int lvl); // 0x8004820C

extern void WitchBookLevel__Fi(int ii); // 0x800485AC

extern void SpawnStoreGold__Fv(); // 0x80048788

extern void RecalcStoreStats__Fv(); // 0x80048858

extern int ItemNoFlippy__Fv(); // 0x80048B3C

extern void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta); // 0x80048BA0

extern void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta); // 0x80048D30

extern void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta); // 0x80048EAC

extern void DrawUniqueInfo__Fv(); // 0x80049028

extern char * MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen); // 0x80049198

extern unsigned char SmithItemOk__Fi(int i); // 0x80049608

extern int RndSmithItem__Fi(int lvl); // 0x8004966C

extern unsigned char WitchItemOk__Fi(int i); // 0x80049774

extern int RndWitchItem__Fi(int lvl); // 0x80049804

extern void BubbleSwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b); // 0x800499B0

extern void SortWitch__Fv(); // 0x80049AB8

extern int RndBoyItem__Fi(int lvl); // 0x80049C48

extern unsigned char HealerItemOk__Fi(int i); // 0x80049D64

extern int RndHealerItem__Fi(int lvl); // 0x80049F18

extern void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed); // 0x8004A014

extern void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed); // 0x8004A0F0

extern void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed); // 0x8004A258

extern void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed); // 0x8004A308

extern void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed); // 0x8004A3DC

extern void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue); // 0x8004A4B4

extern void SpawnSmith__Fi(int lvl); // 0x8004A540

extern void SpawnWitch__Fi(int lvl); // 0x8004A86C

extern void SpawnHealer__Fi(int lvl); // 0x8004AE5C

extern void SpawnBoy__Fi(int lvl); // 0x8004B3FC

extern void SortSmith__Fv(); // 0x8004B700

extern void SortHealer__Fv(); // 0x8004B884

extern void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate); // 0x8004BA14


#endif
