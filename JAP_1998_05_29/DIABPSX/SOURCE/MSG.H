#ifndef MSG_H
#define MSG_H


extern int DoComp__C6NoCompPUcPCUci(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen); // 0x80052B6C

extern void DoDecomp__C6NoCompPUcPCUcii(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen); // 0x80052B40

extern struct NoComp * __6NoComp(struct NoComp *this); // 0x80052A1C

extern int DoComp__C7PakCompPUcPCUci(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen); // 0x80052B18

extern void DoDecomp__C7PakCompPUcPCUcii(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen); // 0x80052AF4

extern struct PakComp * __7PakComp(struct PakComp *this); // 0x800529E4

extern int DoComp__C10CrunchCompPUcPCUci(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen); // 0x80052ACC

extern void DoDecomp__C10CrunchCompPUcPCUcii(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen); // 0x80052AA4

extern struct CrunchComp * __10CrunchComp(struct CrunchComp *this); // 0x800529AC

extern void delta_init__Fv(); // 0x8004EA9C

extern void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel); // 0x8004EAF4

extern void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel); // 0x8004EB90

extern void delta_leave_sync__FUc(unsigned char bLevel); // 0x8004EC0C

extern void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel); // 0x8004EF38

extern unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel); // 0x8004EF98

extern void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel); // 0x8004F164

extern unsigned char delta_portal_inited__Fi(int i); // 0x8004F2F0

extern unsigned char delta_quest_inited__Fi(int i); // 0x8004F314

extern void DeltaAddItem__Fi(int ii); // 0x8004F338

extern int DeltaExportData__FPc(char *Dst); // 0x8004F560

extern int DeltaImportData__FPc(char *Src); // 0x8004F58C

extern void DeltaSaveLevel__Fv(); // 0x8004F5D4

extern void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd); // 0x8004F6D0

extern void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl); // 0x8004F6F8

extern void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y); // 0x8004F744

extern void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1); // 0x8004F774

extern void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2); // 0x8004F7AC

extern void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3); // 0x8004F7EC

extern void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1); // 0x8004F834

extern void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2); // 0x8004F860

extern void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3); // 0x8004F890

extern void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q); // 0x8004F8C8

extern void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii); // 0x8004F93C

extern void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p); // 0x8004FA84

extern unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p); // 0x8004FB08

extern void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p); // 0x8004FB68

extern void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y); // 0x8004FBD8

extern void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc); // 0x8004FCF4

extern void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc); // 0x8004FD98

extern void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii); // 0x8004FDC8

extern unsigned char i_own_level__Fi(int nReqLevel); // 0x8004FEF0

extern void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam); // 0x8004FEF8

extern void delta_close_portal__Fi(int pnum); // 0x8004FF2C

extern void check_update_plr__Fi(int pnum); // 0x8004FF6C

extern void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004FF74

extern void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004FFF4

extern void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050024

extern void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050054

extern void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050084

extern void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800500B4

extern void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050128

extern void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800501B0

extern void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800502F0

extern void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800504C4

extern void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8005054C

extern void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050680

extern void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8005084C

extern void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050898

extern void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050978

extern void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050A7C

extern void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050B98

extern void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050C24

extern void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050D0C

extern void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050DE4

extern void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050EC0

extern void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80050FA0

extern void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051080

extern void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800510CC

extern void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051208

extern void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800512D0

extern void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051390

extern void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051454

extern void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051518

extern void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800515D4

extern void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8005160C

extern void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051634

extern void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800516BC

extern void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800516EC

extern void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051800

extern void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800518B4

extern void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051920

extern void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051A40

extern void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051B30

extern void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051B78

extern void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051C8C

extern void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051D08

extern void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051D84

extern void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051E00

extern void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051E7C

extern void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051EF4

extern void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051EFC

extern void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051F04

extern void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051F0C

extern void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80051F64

extern void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8005216C

extern void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800521B0

extern void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80052210

extern void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80052248

extern void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80052288

extern void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800522C8

extern void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80052308

extern void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80052348

extern void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80052390

extern unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd); // 0x80052468

extern struct DLevel * GetDLevel__Fib(int LevNum, void * SetLevel); // 0x80052888

extern void ReleaseDLevel__FP6DLevel(struct DLevel *Dl); // 0x800528D0

extern void MSG_ClearOutCompMap__Fv(); // 0x800528FC

extern void _GLOBAL_.D.deltaload(); // 0x80052924

extern void _GLOBAL_.I.deltaload(); // 0x8005294C


#endif
