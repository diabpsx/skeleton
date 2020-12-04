#ifndef STORES_H
#define STORES_H


extern void FreeStoreMem__Fv(); // 0x800633E8

extern void DrawSTextBack__Fv(); // 0x800633F0

extern void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val); // 0x80063460

extern void DrawSLine__Fi(int y); // 0x80063838

extern void ClearSText__Fii(int s, int e); // 0x800638CC

extern void AddSLine__Fi(int y); // 0x80063964

extern void AddSTextVal__Fii(int y, int val); // 0x800639B4

extern void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel); // 0x800639DC

extern void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr); // 0x80063A90

extern void StoreAutoPlace__Fv(); // 0x80063F18

extern void S_StartSmith__Fv(); // 0x80064538

extern void S_ScrollSBuy__Fi(int idx); // 0x800646C0

extern void S_StartSBuy__Fv(); // 0x80064878

extern void S_ScrollSPBuy__Fi(int idx); // 0x800649A8

extern unsigned char S_StartSPBuy__Fv(); // 0x80064BC8

extern unsigned char SmithSellOk__Fi(int i); // 0x80064D18

extern void S_ScrollSSell__Fi(int idx); // 0x80064DFC

extern void S_StartSSell__Fv(); // 0x80065024

extern unsigned char SmithRepairOk__Fi(int i); // 0x80065454

extern void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i); // 0x800654F8

extern void S_StartSRepair__Fv(); // 0x800656D8

extern void S_StartWitch__Fv(); // 0x80065BA8

extern void S_ScrollWBuy__Fi(int idx); // 0x80065CE8

extern void S_StartWBuy__Fv(); // 0x80065EC0

extern unsigned char WitchSellOk__Fi(int i); // 0x80065FEC

extern void S_StartWSell__Fv(); // 0x80066110

extern unsigned char WitchRechargeOk__Fi(int i); // 0x80066768

extern void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i); // 0x800667F0

extern void S_StartWRecharge__Fv(); // 0x80066970

extern void S_StartNoMoney__Fv(); // 0x80066D90

extern void S_StartNoRoom__Fv(); // 0x80066DF8

extern void S_StartConfirm__Fv(); // 0x80066E58

extern void S_StartBoy__Fv(); // 0x800671A8

extern void S_StartBBoy__Fv(); // 0x80067338

extern void S_StartHealer__Fv(); // 0x80067494

extern void S_ScrollHBuy__Fi(int idx); // 0x80067668

extern void S_StartHBuy__Fv(); // 0x800677D4

extern void S_StartStory__Fv(); // 0x800678F4

extern unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i); // 0x800679E4

extern void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i); // 0x80067A18

extern void S_StartSIdentify__Fv(); // 0x80067AEC

extern void S_StartIdShow__Fv(); // 0x8006854C

extern void S_StartTalk__Fv(); // 0x80068720

extern void S_StartTavern__Fv(); // 0x80068950

extern void S_StartBarMaid__Fv(); // 0x80068A48

extern void S_StartDrunk__Fv(); // 0x80068B1C

extern void StartStore__Fc(char s); // 0x80068BF0

extern void DrawSText__Fv(); // 0x80068EE0

extern void DrawSTextTSK__FP4TASK(struct TASK *T); // 0x80068F20

extern void DoThatDrawSText__Fv(); // 0x80068FE8

extern void STextESC__Fv(); // 0x80069194

extern void STextUp__Fv(); // 0x80069310

extern void STextDown__Fv(); // 0x80069498

extern void S_SmithEnter__Fv(); // 0x80069630

extern void SetGoldCurs__Fii(int pnum, int i); // 0x80069704

extern void SetSpdbarGoldCurs__Fii(int pnum, int i); // 0x80069780

extern void TakePlrsMoney__Fl(long cost); // 0x800697FC

extern void SmithBuyItem__Fv(); // 0x80069C48

extern void S_SBuyEnter__Fv(); // 0x80069E3C

extern void SmithBuyPItem__Fv(); // 0x8006A060

extern void S_SPBuyEnter__Fv(); // 0x8006A1E8

extern unsigned char StoreGoldFit__Fi(int idx); // 0x8006A418

extern void PlaceStoreGold__Fl(long v); // 0x8006A6D0

extern void StoreSellItem__Fv(); // 0x8006A934

extern void S_SSellEnter__Fv(); // 0x8006AC28

extern void SmithRepairItem__Fv(); // 0x8006AD2C

extern void S_SRepairEnter__Fv(); // 0x8006AF9C

extern void S_WitchEnter__Fv(); // 0x8006B0F8

extern void WitchBuyItem__Fv(); // 0x8006B1A8

extern void S_WBuyEnter__Fv(); // 0x8006B3A8

extern void S_WSellEnter__Fv(); // 0x8006B594

extern void WitchRechargeItem__Fv(); // 0x8006B698

extern void S_WRechargeEnter__Fv(); // 0x8006B810

extern void S_BoyEnter__Fv(); // 0x8006B96C

extern void BoyBuyItem__Fv(); // 0x8006BAA4

extern void HealerBuyItem__Fv(); // 0x8006BB28

extern void S_BBuyEnter__Fv(); // 0x8006BDCC

extern void StoryIdItem__Fv(); // 0x8006BFA4

extern void S_ConfirmEnter__Fv(); // 0x8006C2F0

extern void S_HealerEnter__Fv(); // 0x8006C40C

extern void S_HBuyEnter__Fv(); // 0x8006C4A4

extern void S_StoryEnter__Fv(); // 0x8006C6B0

extern void S_SIDEnter__Fv(); // 0x8006C748

extern void S_TalkEnter__Fv(); // 0x8006C8C4

extern void S_TavernEnter__Fv(); // 0x8006CABC

extern void S_BarmaidEnter__Fv(); // 0x8006CB2C

extern void S_DrunkEnter__Fv(); // 0x8006CB9C

extern void STextEnter__Fv(); // 0x8006CC0C

extern void CheckStoreBtn__Fv(); // 0x8006CE0C

extern void ReleaseStoreBtn__Fv(); // 0x8006CF28

extern void _GLOBAL_.D.pSTextBoxCels(); // 0x8006CF3C

extern void _GLOBAL_.I.pSTextBoxCels(); // 0x8006CF64


#endif
