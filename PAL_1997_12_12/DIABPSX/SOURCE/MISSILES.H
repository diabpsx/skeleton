#ifndef MISSILES_H
#define MISSILES_H


extern int vecleny__Fii(int a, int b); // 0x8013768C

extern int veclenx__Fii(int a, int b); // 0x801376B0

extern void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd); // 0x801376DC

extern int CheckBlock__Fiiii(int fx, int fy, int tx, int ty); // 0x80137CD4

extern int FindClosest__Fiii(int sx, int sy, int rad); // 0x80137DBC

extern int GetSpellLevel__Fii(int id, int sn); // 0x80137F58

extern int GetDirection8__Fiiii(int x1, int y1, int x2, int y2); // 0x80137FCC

extern void DeleteMissile__Fii(int mi, int i); // 0x801381E8

extern void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v); // 0x80138240

extern void PutMissile__Fi(int i); // 0x801383F4

extern void GetMissilePos__Fi(int i); // 0x801384F8

extern void MoveMissilePos__Fi(int i); // 0x80138620

extern unsigned char MonsterTrapHit__FiiiiiUc(int m, int mindam, int maxdam, int dist, int t, int shift); // 0x80138788

extern unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift); // 0x80138AFC

extern unsigned char PlayerMHit__FiiiiiiUcUc(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag); // 0x8013925C

extern unsigned char Plr2PlrMHit__FiiiiiiUc(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift); // 0x80139CC8

extern void CheckMissileCol__FiiiUciiUc(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel); // 0x8013A4A4

extern unsigned char GetTableValue__FUci(unsigned char code, int dir); // 0x8013A920

extern void SetMissAnim__Fii(int mi, int animtype); // 0x8013A9B4

extern void SetMissDir__Fii(int mi, int dir); // 0x8013AA84

extern void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013AAC8

extern void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013ACA8

extern void GetVileMissPos__Fiii(int mi, int dx, int dy); // 0x8013AE64

extern void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013AF88

extern void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam); // 0x8013B2F8

extern void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013B564

extern void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013B678

extern void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013B870

extern void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013B9C4

extern void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013BBAC

extern void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013BE08

extern void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013BEF0

extern void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013C0B8

extern unsigned char CheckIfTrig__Fii(int x, int y); // 0x8013C2C4

extern void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013C3A8

extern void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013C7CC

extern void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013C9DC

extern void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013CBBC

extern void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013CC84

extern void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013CDE0

extern void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D24C

extern void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D2A8

extern void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D464

extern void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D75C

extern void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D860

extern void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D938

extern void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013DC30

extern void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013DDE8

extern void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013DE7C

extern void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E0A4

extern void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E10C

extern void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E338

extern void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E3E8

extern void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E698

extern void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E794

extern void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E818

extern void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013EA30

extern void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013EAE0

extern void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013EB90

extern void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013EBF8

extern void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno); // 0x8013EE34

extern void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F050

extern void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam); // 0x8013F140

extern void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam); // 0x8013F334

extern void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F4F4

extern void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F568

extern void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F5F0

extern void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F658

extern void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F854

extern void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F8F4

extern int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl); // 0x8013FA30

extern int Sentfire__Fiii(int i, int sx, int sy); // 0x8013FD7C

extern void MI_Dummy__Fi(int i); // 0x8013FF60

extern void MI_Golem__Fi(int i); // 0x8013FF68

extern void MI_SetManashield__Fi(int i); // 0x801401C4

extern void MI_LArrow__Fi(int i); // 0x80140200

extern void MI_Arrow__Fi(int i); // 0x801409BC

extern void MI_Firebolt__Fi(int i); // 0x80140BD8

extern void MI_Lightball__Fi(int i); // 0x801412A4

extern void MI_Acidpud__Fi(int i); // 0x8014152C

extern void MI_Firewall__Fi(int i); // 0x8014163C

extern void MI_Fireball__Fi(int i); // 0x80141900

extern void MI_Lightctrl__Fi(int i); // 0x801422C4

extern void MI_Lightning__Fi(int i); // 0x80142640

extern void MI_Town__Fi(int i); // 0x8014272C

extern void MI_Flash__Fi(int i); // 0x80142964

extern void MI_Flash2__Fi(int i); // 0x80142CB8

extern void MI_Manashield__Fi(int i); // 0x80142E80

extern void MI_Firemove__Fi(int i); // 0x801431A4

extern void MI_Guardian__Fi(int i); // 0x80143430

extern void MI_Chain__Fi(int i); // 0x801436E0

extern void MI_Misexp__Fi(int i); // 0x8014394C

extern void MI_Acidsplat__Fi(int i); // 0x80143C4C

extern void MI_Teleport__Fi(int i); // 0x80143DE8

extern void MI_Stone__Fi(int i); // 0x801441B0

extern void MI_Boom__Fi(int i); // 0x8014435C

extern void MI_Rhino__Fi(int i); // 0x80144454

extern void MI_FirewallC__Fi(int i); // 0x80144800

extern void MI_Infra__Fi(int i); // 0x80144A88

extern void MI_Apoca__Fi(int i); // 0x80144B40

extern void MI_Wave__Fi(int i); // 0x80144DD4

extern void MI_Nova__Fi(int i); // 0x801452D0

extern void MI_Flame__Fi(int i); // 0x80145590

extern void MI_Flamec__Fi(int i); // 0x80145788

extern void MI_Cbolt__Fi(int i); // 0x80145A10

extern void MI_Hbolt__Fi(int i); // 0x80145D14

extern void MI_Element__Fi(int i); // 0x80146020

extern void MI_Bonespirit__Fi(int i); // 0x801466D8

extern void MI_ResurrectBeam__Fi(int i); // 0x80146AE0

extern void MI_Rportal__Fi(int i); // 0x80146B50

extern void ProcessMissiles__Fv(); // 0x80146D74

extern void ClearMissileSpot__Fi(int mi); // 0x80147168


#endif
