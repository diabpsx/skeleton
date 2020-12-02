#ifndef OBJECTS_H
#define OBJECTS_H


extern void PostAddL1Door__Fiiii(int i, int x, int y, int ot); // 0x80053080

extern void PostAddL2Door__Fiiii(int i, int x, int y, int ot); // 0x80053168

extern void PostAddArmorStand__Fi(int i); // 0x800532B4

extern void PostAddObjLight__Fii(int i, int r); // 0x8005333C

extern void PostAddWeaponRack__Fi(int i); // 0x80053400

extern void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi); // 0x80053488

extern void InitObjectGFX__Fv(); // 0x80053524

extern void FreeObjectGFX__Fv(); // 0x80053740

extern void DeleteObject__Fii(int oi, int i); // 0x8005374C

extern void SetupObject__Fiiii(int i, int x, int y, int ot); // 0x800537F0

extern void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v); // 0x80053A70

extern void SetBookMsg__Fii(int i, int msg); // 0x80053AD0

extern void AddObject__Fiii(int ot, int ox, int oy); // 0x80053AF8

extern void PostAddObject__Fiii(int ot, int ox, int oy); // 0x80053C08

extern void Obj_Light__Fii(int i, int lr); // 0x80054070

extern void Obj_Circle__Fi(int i); // 0x80054290

extern void Obj_StopAnim__Fi(int i); // 0x800545D4

extern void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint); // 0x80054638

extern void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot); // 0x80054930

extern void Obj_Door__Fi(int i); // 0x800549A0

extern void Obj_Sarc__Fi(int i); // 0x80054B10

extern void ActivateTrapLine__Fii(int ttype, int tid); // 0x80054B5C

extern void Obj_FlameTrap__Fi(int i); // 0x80054C6C

extern void Obj_Trap__Fi(int i); // 0x80054F50

extern void Obj_BCrossDamage__Fi(int i); // 0x80055294

extern void ProcessObjects__Fv(); // 0x800554DC

extern void ObjSetMicro__Fiii(int dx, int dy, int pn); // 0x80055754

extern void ObjSetMini__Fiii(int x, int y, int v); // 0x800558C4

extern void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2); // 0x800559AC

extern void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2); // 0x800559B4

extern void DoorSet__Fiii(int oi, int dx, int dy); // 0x800559BC

extern void RedoPlayerVision__Fv(); // 0x80055C20

extern void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x80055CC4

extern void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x80056024

extern void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x800563BC

extern void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x80056728

extern void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x80056A94

extern void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag); // 0x80056D70

extern void MonstCheckDoors__Fi(int m); // 0x8005704C

extern void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x80057520

extern void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x80057628

extern void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2); // 0x80057724

extern void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2); // 0x800578DC

extern void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2); // 0x80057978

extern void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag); // 0x80057AF0

extern void OperateLever__Fii(int pnum, int i); // 0x80057C4C

extern void OperateBook__Fii(int pnum, int i); // 0x80057E30

extern void OperateBookLever__Fii(int pnum, int i); // 0x800584FC

extern void OperateSChambBk__Fii(int pnum, int i); // 0x80058994

extern void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x80058BD0

extern void OperateMushPatch__Fii(int pnum, int i); // 0x80058F90

extern void OperateInnSignChest__Fii(int pnum, int i); // 0x800591A4

extern void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005937C

extern void OperateTrapLvr__Fi(int i); // 0x800595CC

extern void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005979C

extern void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag); // 0x80059954

extern void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag); // 0x80059AB0

extern void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty); // 0x80059C0C

extern void OperatePedistal__Fii(int pnum, int i); // 0x80059D14

extern void TryDisarm__Fii(int pnum, int i); // 0x8005A258

extern int ItemMiscIdIdx__Fi(int imiscid); // 0x8005A408

extern void OperateShrine__Fiii(int pnum, int i, int sType); // 0x8005A478

extern void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005C850

extern void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005C9C8

extern void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005CBE0

extern void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005CCC8

extern int FindValidShrine__Fi(int i); // 0x8005CE34

extern void OperateGoatShrine__Fiii(int pnum, int i, int sType); // 0x8005CF20

extern void OperateCauldron__Fiii(int pnum, int i, int sType); // 0x8005CFC8

extern unsigned char OperateFountains__Fii(int pnum, int i); // 0x8005D06C

extern void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg); // 0x8005D610

extern void OperateStoryBook__Fii(int pnum, int i); // 0x8005D7B8

extern void OperateLazStand__Fii(int pnum, int i); // 0x8005D8AC

extern void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag); // 0x8005DA30

extern void SyncOpL1Door__Fiii(int pnum, int cmd, int i); // 0x8005DE68

extern void SyncOpL2Door__Fiii(int pnum, int cmd, int i); // 0x8005DF7C

extern void SyncOpL3Door__Fiii(int pnum, int cmd, int i); // 0x8005E090

extern void SyncOpObject__Fiii(int pnum, int cmd, int i); // 0x8005E1A4

extern void BreakCrux__Fii(int pnum, int i); // 0x8005E3B4

extern void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg); // 0x8005E5E8

extern void BreakObject__Fii(int pnum, int oi); // 0x8005EB40

extern void SyncBreakObj__Fii(int pnum, int oi); // 0x8005ECA4

extern void SyncL1Doors__Fi(int i); // 0x8005ED20

extern void SyncCrux__Fi(int i); // 0x8005EE38

extern void SyncLever__Fi(int i); // 0x8005EF70

extern void SyncQSTLever__Fi(int i); // 0x8005EFF4

extern void SyncPedistal__Fi(int i); // 0x8005F0EC

extern void SyncL2Doors__Fi(int i); // 0x8005F0F4

extern void SyncL3Doors__Fi(int i); // 0x8005F25C

extern void SyncObjectAnim__Fi(int o); // 0x8005F388

extern void GetObjectStr__Fi(int i); // 0x8005F4C8

extern void AddLamp__Fiii(int x, int y, int r); // 0x8005F984

extern void RestoreObjectLight__Fv(); // 0x8005F9C4


#endif
