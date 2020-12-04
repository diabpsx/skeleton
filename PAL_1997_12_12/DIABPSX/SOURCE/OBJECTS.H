#ifndef OBJECTS_H
#define OBJECTS_H


extern void PostAddL1Door__Fiiii(int i, int x, int y, int ot); // 0x8004C634

extern void PostAddL2Door__Fiiii(int i, int x, int y, int ot); // 0x8004C76C

extern void PostAddArmorStand__Fi(int i); // 0x8004C8B8

extern unsigned char PostTorchLocOK__Fii(int xp, int yp); // 0x8004C940

extern void PostAddObjLight__Fii(int i, int r); // 0x8004C980

extern void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi); // 0x8004CA24

extern void InitObjectGFX__Fv(); // 0x8004CAD8

extern void FreeObjectGFX__Fv(); // 0x8004CCF4

extern void DeleteObject__Fii(int oi, int i); // 0x8004CD00

extern void SetupObject__Fiiii(int i, int x, int y, int ot); // 0x8004CDB8

extern void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v); // 0x8004D03C

extern void SetBookMsg__Fii(int i, int msg); // 0x8004D09C

extern void AddObject__Fiii(int ot, int ox, int oy); // 0x8004D0C4

extern void PostAddObject__Fiii(int ot, int ox, int oy); // 0x8004D1D0

extern void Obj_Light__Fii(int i, int lr); // 0x8004D2DC

extern void Obj_Circle__Fi(int i); // 0x8004D4EC

extern void Obj_StopAnim__Fi(int i); // 0x8004D810

extern void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint); // 0x8004D874

extern void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot); // 0x8004DB50

extern void Obj_Door__Fi(int i); // 0x8004DBC0

extern void Obj_Sarc__Fi(int i); // 0x8004DD54

extern void ActivateTrapLine__Fii(int ttype, int tid); // 0x8004DDA0

extern void Obj_FlameTrap__Fi(int i); // 0x8004DEB0

extern void Obj_Trap__Fi(int i); // 0x8004E180

extern void Obj_BCrossDamage__Fi(int i); // 0x8004E4D0

extern void ProcessObjects__Fv(); // 0x8004E760

extern void ObjSetMicro__Fiii(int dx, int dy, int pn); // 0x8004EA00

extern void ObjSetMini__Fiii(int x, int y, int v); // 0x8004EA38

extern void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2); // 0x8004EB0C

extern void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2); // 0x8004EB14

extern void DoorSet__Fiii(int oi, int dx, int dy); // 0x8004EB1C

extern void RedoPlayerVision__Fv(); // 0x8004ED9C

extern void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x8004EE40

extern void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x8004F1E4

extern void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x8004F5BC

extern void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x8004F954

extern void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x8004FCEC

extern void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x8004FFF4

extern void MonstCheckDoors__Fi(int m); // 0x800502FC

extern void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x800507F8

extern void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x80050930

extern void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2); // 0x80050A44

extern void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2); // 0x80050BFC

extern void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2); // 0x80050CA8

extern void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag); // 0x80050E18

extern void OperateLever__Fii(int pnum, int i); // 0x80050F74

extern void OperateBook__Fii(int pnum, int i); // 0x80051160

extern void OperateBookLever__Fii(int pnum, int i); // 0x80051654

extern void OperateSChambBk__Fii(int pnum, int i); // 0x800519FC

extern void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80051BD4

extern void OperateMushPatch__Fii(int pnum, int i); // 0x80051FA4

extern void OperateInnSignChest__Fii(int pnum, int i); // 0x80052168

extern void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80052300

extern void OperateTrapLvr__Fi(int i); // 0x80052554

extern void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80052724

extern void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag); // 0x800528DC

extern void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag); // 0x80052A38

extern void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty); // 0x80052B94

extern void OperatePedistal__Fii(int pnum, int i); // 0x80052C9C

extern void TryDisarm__Fii(int pnum, int i); // 0x80052F54

extern int ItemMiscIdIdx__Fi(int imiscid); // 0x80053118

extern void OperateShrine__Fiii(int pnum, int i, int sType); // 0x80053188

extern void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80055764

extern void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x800558E0

extern void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80055AB0

extern void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80055B98

extern int FindValidShrine__Fi(int i); // 0x80055D08

extern void OperateGoatShrine__Fiii(int pnum, int i, int sType); // 0x80055DF8

extern void OperateCauldron__Fiii(int pnum, int i, int sType); // 0x80055EA0

extern unsigned char OperateFountains__Fii(int pnum, int i); // 0x80055F54

extern void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80056500

extern void OperateStoryBook__Fii(int pnum, int i); // 0x800566AC

extern void OperateLazStand__Fii(int pnum, int i); // 0x800567B0

extern void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag); // 0x80056890

extern void SyncOpL1Door__Fiii(int pnum, int cmd, int i); // 0x80056CC8

extern void SyncOpL2Door__Fiii(int pnum, int cmd, int i); // 0x80056DDC

extern void SyncOpL3Door__Fiii(int pnum, int cmd, int i); // 0x80056EF0

extern void SyncOpObject__Fiii(int pnum, int cmd, int i); // 0x80057004

extern void BreakCrux__Fi(int i); // 0x800571E4

extern void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg); // 0x800573D4

extern void BreakObject__Fii(int pnum, int oi); // 0x80057928

extern void SyncBreakObj__Fii(int pnum, int oi); // 0x80057A88

extern void SyncL1Doors__Fi(int i); // 0x80057AE4

extern void SyncCrux__Fi(int i); // 0x80057BFC

extern void SyncLever__Fi(int i); // 0x80057D34

extern void SyncQSTLever__Fi(int i); // 0x80057DB0

extern void SyncPedistal__Fi(int i); // 0x80057EA8

extern void SyncL2Doors__Fi(int i); // 0x80058004

extern void SyncL3Doors__Fi(int i); // 0x8005816C

extern void SyncObjectAnim__Fi(int o); // 0x80058298

extern void GetObjectStr__Fi(int i); // 0x800583D8

extern void RestoreObjectLight__Fv(); // 0x800587F4


#endif
