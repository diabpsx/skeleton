#ifndef MSG_H
#define MSG_H


extern void delta_init__Fv(); // 0x80047B84

extern void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel); // 0x80047BE4

extern void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel); // 0x80047C80

extern void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel); // 0x80047D04

extern void delta_leave_sync__FUc(unsigned char bLevel); // 0x80047D94

extern void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel); // 0x800480C0

extern unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel); // 0x80048120

extern void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel); // 0x800482E4

extern unsigned char delta_portal_inited__Fi(int i); // 0x8004846C

extern unsigned char delta_quest_inited__Fi(int i); // 0x80048490

extern void DeltaAddItem__Fi(int ii); // 0x800484B4

extern int DeltaExportData__FPc(char *Dst); // 0x800486C8

extern int DeltaImportData__FPc(char *Src); // 0x800486F8

extern void DeltaSaveLevel__Fv(); // 0x8004872C

extern void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd); // 0x80048828

extern void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl); // 0x80048850

extern void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y); // 0x8004889C

extern void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1); // 0x800488CC

extern void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2); // 0x80048904

extern void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3); // 0x80048944

extern void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1); // 0x8004898C

extern void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2); // 0x800489B8

extern void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3); // 0x800489E8

extern void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q); // 0x80048A20

extern void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii); // 0x80048A94

extern void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p); // 0x80048BC8

extern unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p); // 0x80048C44

extern void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p); // 0x80048C9C

extern void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y); // 0x80048D04

extern void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc); // 0x80048E0C

extern void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc); // 0x80048EB0

extern void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii); // 0x80048EE0

extern unsigned char i_own_level__Fi(int nReqLevel); // 0x80048FF4

extern void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam); // 0x80048FFC

extern void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl); // 0x80049030

extern void delta_close_portal__Fi(int pnum); // 0x8004908C

extern void check_update_plr__Fi(int pnum); // 0x800490CC

extern void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800490D4

extern void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049178

extern void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800491A8

extern void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800491D8

extern void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049208

extern void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049238

extern void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x800492AC

extern void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049350

extern void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049490

extern void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049660

extern void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049704

extern void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049838

extern void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049A00

extern void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049A9C

extern void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049C4C

extern void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049D88

extern void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049EA0

extern void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x80049F4C

extern void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A054

extern void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A14C

extern void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A248

extern void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A370

extern void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A498

extern void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A500

extern void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A654

extern void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A73C

extern void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A81C

extern void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A900

extern void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004A9E4

extern void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004AA70

extern void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004AAA8

extern void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004AB18

extern void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004ABBC

extern void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004ABF4

extern void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004ACD8

extern void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004AD44

extern void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004ADB0

extern void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004AF20

extern void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B024

extern void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B06C

extern void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B228

extern void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B2C0

extern void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B358

extern void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B3F0

extern void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B484

extern void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B518

extern void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B520

extern void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B528

extern void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B530

extern void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B588

extern void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B81C

extern void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B9AC

extern void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004B9FC

extern void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004BA44

extern void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004BA84

extern void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004BAC4

extern void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004BB04

extern void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004BB44

extern void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum); // 0x8004BB8C

extern unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd); // 0x8004BCA8

extern struct DLevel * GetDLevel__Fib(int LevNum, void * SetLevel); // 0x8004C0C8

extern void ReleaseDLevel__FP6DLevel(struct DLevel *Dl); // 0x8004C158


#endif
