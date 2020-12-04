#ifndef INV_H
#define INV_H


extern void FreeInvGFX__Fv(); // 0x80153790

extern void InvDrawSlot__Fiii(int X, int Y, int Frame); // 0x80153798

extern void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag); // 0x8015381C

extern void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag); // 0x80153A70

extern void InvDrawSlots__Fv(); // 0x80153B40

extern void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col); // 0x80153E18

extern void DrawInvStats__Fv(); // 0x80153EE4

extern void DrawInvBack__Fv(); // 0x80154A70

extern void DrawInvCursor__Fv(); // 0x80154AF8

extern void DrawInvMsg__Fv(); // 0x80154FD4

extern void DrawInvUnique__Fv(); // 0x8015519C

extern void DrawInv__Fv(); // 0x801552C0

extern void DrawInvTSK__FP4TASK(struct TASK *T); // 0x80155300

extern void DoThatDrawInv__Fv(); // 0x80155664

extern unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag); // 0x80155E2C

extern unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag); // 0x8015614C

extern unsigned char GoldAutoPlace__Fi(int pnum); // 0x801564E8

extern unsigned char WeaponAutoPlace__Fi(int pnum); // 0x801569B8

extern int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b); // 0x80156C44

extern void CheckInvPaste__Fiii(int pnum, int mx, int my); // 0x80156D40

extern void CheckInvCut__Fiii(int pnum, int mx, int my); // 0x80158A2C

extern void RemoveInvItem__Fii(int pnum, int iv); // 0x801594DC

extern void RemoveSpdBarItem__Fii(int pnum, int iv); // 0x80159784

extern void CheckInvScrn__Fv(); // 0x80159878

extern void CheckItemStats__Fi(int pnum); // 0x801598F0

extern void CheckBookLevel__Fi(int pnum); // 0x80159974

extern void CheckQuestItem__Fi(int pnum); // 0x80159AA8

extern void InvGetItem__Fii(int pnum, int ii); // 0x80159ED0

extern void AutoGetItem__Fii(int pnum, int ii); // 0x8015A1CC

extern int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed); // 0x8015AC3C

extern void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed); // 0x8015ACF0

extern unsigned char TryInvPut__Fv(); // 0x8015AE7C

extern int InvPutItem__Fiii(int pnum, int x, int y); // 0x8015B044

extern int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff); // 0x8015B4EC

extern char CheckInvHLight__Fv(); // 0x8015BA48

extern void RemoveScroll__Fi(int pnum); // 0x8015BD90

extern unsigned char UseScroll__Fv(); // 0x8015BF74

extern void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8015C1DC

extern unsigned char UseStaff__Fv(); // 0x8015C244

extern void StartGoldDrop__Fv(); // 0x8015C304

extern unsigned char UseInvItem__Fii(int pnum, int cii); // 0x8015C400

extern void DoTelekinesis__Fv(); // 0x8015C924

extern long CalculateGold__Fi(int pnum); // 0x8015CA4C

extern unsigned char DropItemBeforeTrig__Fv(); // 0x8015CB84

extern void ControlInv__Fv(); // 0x8015CBDC

extern void InvGetItemWH__Fi(int Pos); // 0x8015CEBC

extern void InvAlignObject__Fv(); // 0x8015CFB0

extern void InvSetItemCurs__Fv(); // 0x8015D164

extern void InvMoveCursLeft__Fv(); // 0x8015D2F8

extern void InvMoveCursRight__Fv(); // 0x8015D4E4

extern void InvMoveCursUp__Fv(); // 0x8015D80C

extern void InvMoveCursDown__Fv(); // 0x8015DA04


#endif
