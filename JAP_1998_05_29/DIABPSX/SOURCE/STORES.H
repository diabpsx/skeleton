#ifndef STORES_H
#define STORES_H


extern void FreeStoreMem__Fv(); // 0x800695A4

extern void DrawSTextBack__Fv(); // 0x800695AC

extern void DrawStoreArrows__Fv(); // 0x8006961C

extern void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val); // 0x8006979C

extern void DrawSLine__Fi(int y); // 0x80069C44

extern void ClearSText__Fii(int s, int e); // 0x80069CD8

extern void AddSLine__Fi(int y); // 0x80069D70

extern void AddSTextVal__Fii(int y, int val); // 0x80069DC0

extern void OffsetSTextY__Fii(int y, int yo); // 0x80069DE8

extern void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel); // 0x80069E10

extern void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr); // 0x80069ECC

extern unsigned char StoreAutoPlace__Fv(); // 0x8006A408

extern void S_StartSmith__Fv(); // 0x8006AA50

extern void S_ScrollSBuy__Fi(int idx); // 0x8006ABD8

extern void S_StartSBuy__Fv(); // 0x8006ADE0

extern void S_ScrollSPBuy__Fi(int idx); // 0x8006AFB0

extern unsigned char S_StartSPBuy__Fv(); // 0x8006B210

extern unsigned char SmithSellOk__Fi(int i); // 0x8006B3D0

extern void S_ScrollSSell__Fi(int idx); // 0x8006B4B8

extern void S_StartSSell__Fv(); // 0x8006B70C

extern unsigned char SmithRepairOk__Fi(int i); // 0x8006BB44

extern void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i); // 0x8006BBEC

extern void S_StartSRepair__Fv(); // 0x8006BDD4

extern void S_StartWitch__Fv(); // 0x8006C2A4

extern int CheckWitchItem__Fi(int idx); // 0x8006C42C

extern void S_ScrollWBuy__Fi(int idx); // 0x8006C4D0

extern void S_StartWBuy__Fv(); // 0x8006C714

extern unsigned char WitchSellOk__Fi(int i); // 0x8006CA68

extern void S_StartWSell__Fv(); // 0x8006CBB4

extern unsigned char WitchRechargeOk__Fi(int i); // 0x8006D22C

extern void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i); // 0x8006D2B8

extern void S_StartWRecharge__Fv(); // 0x8006D440

extern void S_StartNoMoney__Fv(); // 0x8006D870

extern void S_StartNoRoom__Fv(); // 0x8006D8D8

extern void S_StartNoItems__Fv(); // 0x8006D938

extern void S_StartConfirm__Fv(); // 0x8006D9EC

extern void S_StartBoy__Fv(); // 0x8006DD54

extern void S_StartBBoy__Fv(); // 0x8006DEFC

extern void S_StartHealer__Fv(); // 0x8006E130

extern void S_ScrollHBuy__Fi(int idx); // 0x8006E304

extern void S_StartHBuy__Fv(); // 0x8006E4EC

extern void S_StartStory__Fv(); // 0x8006E624

extern unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i); // 0x8006E714

extern void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i); // 0x8006E748

extern void S_StartSIdentify__Fv(); // 0x8006E824

extern void S_StartIdShow__Fv(); // 0x8006F2C4

extern void S_StartTalk__Fv(); // 0x8006F49C

extern void S_StartTavern__Fv(); // 0x8006F6CC

extern void S_StartBarMaid__Fv(); // 0x8006F7C4

extern void S_StartDrunk__Fv(); // 0x8006F898

extern void StartStore__Fc(char s); // 0x8006F96C

extern void DrawStoreHelpText__Fv(); // 0x8006FCC8

extern void DrawSText__Fv(); // 0x8006FD64

extern void DrawSTextTSK__FP4TASK(struct TASK *T); // 0x8006FDA4

extern void DoThatDrawSText__Fv(); // 0x8006FEAC

extern void STextESC__Fv(); // 0x800700B4

extern void STextUp__Fv(); // 0x80070258

extern void STextDown__Fv(); // 0x800703DC

extern void S_SmithEnter__Fv(); // 0x80070570

extern void SetGoldCurs__Fii(int pnum, int i); // 0x80070648

extern void SetSpdbarGoldCurs__Fii(int pnum, int i); // 0x800706C8

extern void TakePlrsMoney__Fl(long cost); // 0x80070748

extern void SmithBuyItem__Fv(); // 0x80070B94

extern void S_SBuyEnter__Fv(); // 0x80070E14

extern void SmithBuyPItem__Fv(); // 0x80071078

extern void S_SPBuyEnter__Fv(); // 0x8007123C

extern unsigned char StoreGoldFit__Fi(int idx); // 0x800714A8

extern void PlaceStoreGold__Fl(long v); // 0x80071760

extern void StoreSellItem__Fv(); // 0x80071A00

extern void S_SSellEnter__Fv(); // 0x80071D44

extern void SmithRepairItem__Fv(); // 0x80071E54

extern void S_SRepairEnter__Fv(); // 0x800720C8

extern void S_WitchEnter__Fv(); // 0x8007222C

extern void WitchBuyItem__Fv(); // 0x8007230C

extern void S_WBuyEnter__Fv(); // 0x80072590

extern void S_WSellEnter__Fv(); // 0x80072818

extern void WitchRechargeItem__Fv(); // 0x80072958

extern void S_WRechargeEnter__Fv(); // 0x80072AD4

extern void S_BoyEnter__Fv(); // 0x80072C38

extern void BoyBuyItem__Fv(); // 0x80072DD0

extern void HealerBuyItem__Fv(); // 0x80072E70

extern void S_BBuyEnter__Fv(); // 0x8007319C

extern void StoryIdItem__Fv(); // 0x800733B0

extern void S_ConfirmEnter__Fv(); // 0x80073700

extern void S_HealerEnter__Fv(); // 0x8007381C

extern void S_HBuyEnter__Fv(); // 0x800738B4

extern void S_StoryEnter__Fv(); // 0x80073AE8

extern void S_SIDEnter__Fv(); // 0x80073B84

extern void S_TalkEnter__Fv(); // 0x80073D08

extern void S_TavernEnter__Fv(); // 0x80073F08

extern void S_BarmaidEnter__Fv(); // 0x80073F7C

extern void S_DrunkEnter__Fv(); // 0x80073FF0

extern void STextEnter__Fv(); // 0x80074064

extern void CheckStoreBtn__Fv(); // 0x80074228

extern void ReleaseStoreBtn__Fv(); // 0x80074314

extern void _GLOBAL_.D.pSTextBoxCels(); // 0x80074328

extern void _GLOBAL_.I.pSTextBoxCels(); // 0x80074350


#endif
