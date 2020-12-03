#ifndef INV_H
#define INV_H


extern void FreeInvGFX__Fv(); // 0x80157274

extern void InvDrawSlot__Fiii(int X, int Y, int Frame); // 0x8015727C

extern void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag); // 0x80157300

extern void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag); // 0x801575B8

extern void InvDrawSlots__Fv(); // 0x80157688

extern void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col); // 0x801579A0

extern void DrawInvStats__Fv(); // 0x80157A6C

extern void DrawInvBack__Fv(); // 0x80158588

extern void DrawInvCursor__Fv(); // 0x80158634

extern void DrawInvMsg__Fv(); // 0x80158C00

extern void DrawInvHelpTxt__Fv(); // 0x80158DCC

extern void DrawInv__Fv(); // 0x801590B4

extern void DrawInvTSK__FP4TASK(struct TASK *T); // 0x801590FC

extern void DoThatDrawInv__Fv(); // 0x80159714

extern unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag); // 0x80159F24

extern unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag); // 0x8015A24C

extern unsigned char GoldAutoPlace__Fi(int pnum); // 0x8015A5F0

extern unsigned char WeaponAutoPlace__Fi(int pnum); // 0x8015AAC8

extern int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b); // 0x8015AD5C

extern void CheckInvPaste__Fiii(int pnum, int mx, int my); // 0x8015AE70

extern void CheckInvCut__Fiii(int pnum, int mx, int my); // 0x8015CBF8

extern void RemoveInvItem__Fii(int pnum, int iv); // 0x8015D6FC

extern void RemoveSpdBarItem__Fii(int pnum, int iv); // 0x8015D9AC

extern void CheckInvScrn__Fv(); // 0x8015DAA0

extern void CheckItemStats__Fi(int pnum); // 0x8015DB18

extern void CheckBookLevel__Fi(int pnum); // 0x8015DB9C

extern void CheckQuestItem__Fi(int pnum); // 0x8015DCD0

extern void InvGetItem__Fii(int pnum, int ii); // 0x8015E180

extern void AutoGetItem__Fii(int pnum, int ii); // 0x8015E45C

extern void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed); // 0x8015EEB8

extern unsigned char TryInvPut__Fv(); // 0x8015F020

extern int InvPutItem__Fiii(int pnum, int x, int y); // 0x8015F16C

extern int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff); // 0x8015F504

extern char CheckInvHLight__Fv(); // 0x8015FA64

extern void RemoveScroll__Fi(int pnum); // 0x8015FDFC

extern unsigned char UseScroll__Fv(); // 0x8015FFE0

extern void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x80160248

extern unsigned char UseStaff__Fv(); // 0x801602AC

extern void StartGoldDrop__Fv(); // 0x8016036C

extern unsigned char UseInvItem__Fii(int pnum, int cii); // 0x80160470

extern void DoTelekinesis__Fv(); // 0x80160A34

extern long CalculateGold__Fi(int pnum); // 0x80160B64

extern unsigned char DropItemBeforeTrig__Fv(); // 0x80160C9C

extern void ControlInv__Fv(); // 0x80160CF4

extern void InvGetItemWH__Fi(int Pos); // 0x801610B0

extern void InvAlignObject__Fv(); // 0x801611A8

extern void InvSetItemCurs__Fv(); // 0x8016135C

extern void InvMoveCursLeft__Fv(); // 0x801614FC

extern void InvMoveCursRight__Fv(); // 0x801616A4

extern void InvMoveCursUp__Fv(); // 0x80161958

extern void InvMoveCursDown__Fv(); // 0x80161B50


#endif
