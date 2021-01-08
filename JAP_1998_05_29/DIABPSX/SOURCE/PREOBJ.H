#ifndef PREOBJ_H
#define PREOBJ_H


extern void AddL1Door__Fiiii(int i, int x, int y, int ot); // 0x80155FD8

extern void AddSCambBook__Fi(int i); // 0x801560C0

extern void AddChest__Fii(int i, int t); // 0x80156160

extern void AddL2Door__Fiiii(int i, int x, int y, int ot); // 0x80156330

extern void AddL3Door__Fiiii(int i, int x, int y, int ot); // 0x8015647C

extern void AddSarc__Fi(int i); // 0x80156510

extern void AddFlameTrap__Fi(int i); // 0x801565D8

extern void AddTrap__Fii(int i, int ot); // 0x80156634

extern void AddArmorStand__Fi(int i); // 0x80156728

extern void AddObjLight__Fii(int i, int r); // 0x801567B0

extern void AddBarrel__Fii(int i, int ot); // 0x80156878

extern void AddShrine__Fi(int i); // 0x80156920

extern void AddBookcase__Fi(int i); // 0x80156A68

extern void AddBookstand__Fi(int i); // 0x80156AC0

extern void AddBloodFtn__Fi(int i); // 0x80156B08

extern void AddPurifyingFountain__Fi(int i); // 0x80156B50

extern void AddGoatShrine__Fi(int i); // 0x80156C0C

extern void AddCauldron__Fi(int i); // 0x80156C54

extern void AddMurkyFountain__Fi(int i); // 0x80156C9C

extern void AddTearFountain__Fi(int i); // 0x80156D58

extern void AddDecap__Fi(int i); // 0x80156DA0

extern void AddVilebook__Fi(int i); // 0x80156E14

extern void AddMagicCircle__Fi(int i); // 0x80156E64

extern void AddBrnCross__Fi(int i); // 0x80156ED8

extern void AddPedistal__Fi(int i); // 0x80156F20

extern void AddStoryBook__Fi(int i); // 0x80156FC8

extern void AddWeaponRack__Fi(int i); // 0x80157148

extern void AddTorturedBody__Fi(int i); // 0x801571D0

extern void AddFlameLvr__Fi(int i); // 0x80157248

extern void GetRndObjLoc__FiRiT1(int randarea, int *xx, int *yy); // 0x80157288

extern void AddMushPatch__Fv(); // 0x8015738C

extern void AddSlainHero__Fv(); // 0x80157480

extern unsigned char RndLocOk__Fii(int xp, int yp); // 0x801574C0

extern unsigned char TrapLocOk__Fii(int xp, int yp); // 0x801575D8

extern void InitRndLocObj__Fiii(int min, int max, int objtype); // 0x8015762C

extern void InitRndLocBigObj__Fiii(int min, int max, int objtype); // 0x801577AC

extern void InitRndLocObj5x5__Fiii(int min, int max, int objtype); // 0x8015796C

extern void SetMapObjects__FPUcii(unsigned char *pMap, int startx, int starty); // 0x80157A88

extern void ClrAllObjects__Fv(); // 0x80157D28

extern void AddTortures__Fv(); // 0x80157E18

extern void AddCandles__Fv(); // 0x80157F98

extern void AddBookLever__Fiiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2, int msg); // 0x80158020

extern void InitRndBarrels__Fv(); // 0x80158214

extern void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x801583A0

extern void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x801584AC

extern void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2); // 0x801585A8

extern unsigned char WallTrapLocOk__Fii(int xp, int yp); // 0x80158688

extern unsigned char TorchLocOK__Fii(int xp, int yp); // 0x801586E0

extern void AddL2Torches__Fv(); // 0x80158710

extern void AddObjTraps__Fv(); // 0x801588AC

extern void AddChestTraps__Fv(); // 0x80158B34

extern void LoadMapObjects__FPUciiiiiii(unsigned char *pMap, int startx, int starty, int x1, int y1, int w, int h, int leveridx); // 0x80158C70

extern void AddDiabObjs__Fv(); // 0x80158DDC

extern void AddStoryBooks__Fv(); // 0x80158F30

extern void AddHookedBodies__Fi(int freq); // 0x80159078

extern void AddL4Goodies__Fv(); // 0x8015926C

extern void AddLazStand__Fv(); // 0x8015931C

extern void saveplrpos__Fv(); // 0x801594A8

extern void restoreplrpos__Fv(); // 0x80159564

extern void InitObjects__Fv(); // 0x801595D4

extern void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi); // 0x80159C74


#endif
