#ifndef MISSILES_H
#define MISSILES_H


extern void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd); // 0x80139C04

extern int CheckBlock__Fiiii(int fx, int fy, int tx, int ty); // 0x8013A1FC

extern int FindClosest__Fiii(int sx, int sy, int rad); // 0x8013A2B0

extern int GetSpellLevel__Fii(int id, int sn); // 0x8013A43C

extern int GetDirection8__Fiiii(int x1, int y1, int x2, int y2); // 0x8013A4B0

extern int GetDirection16__Fiiii(int x1, int y1, int x2, int y2); // 0x8013A6CC

extern void DeleteMissile__Fii(int mi, int i); // 0x8013A8E8

extern void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v); // 0x8013A988

extern void PutMissile__Fi(int i); // 0x8013AB44

extern void GetMissilePos__Fi(int i); // 0x8013ADA0

extern void MoveMissilePos__Fi(int i); // 0x8013AED4

extern unsigned char MonsterTrapHit__FiiiiiUc(int m, int mindam, int maxdam, int dist, int t, int shift); // 0x8013B04C

extern unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift); // 0x8013B3D0

extern unsigned char PlayerMHit__FiiiiiiUcUc(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag); // 0x8013BB90

extern unsigned char Plr2PlrMHit__FiiiiiiUc(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift); // 0x8013C5EC

extern void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, void * HurtPlr); // 0x8013CD88

extern unsigned char GetTableValue__FUci(unsigned char code, int dir); // 0x8013D2B8

extern void SetMissAnim__Fii(int mi, int animtype); // 0x8013D34C

extern void SetMissDir__Fii(int mi, int dir); // 0x8013D424

extern void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D470

extern void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D658

extern void GetVileMissPos__Fiii(int mi, int dx, int dy); // 0x8013D818

extern void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013D954

extern void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam); // 0x8013DC98

extern void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013DED0

extern void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013DFEC

extern void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E228

extern void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E390

extern void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E588

extern void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E7F4

extern void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013E8E0

extern void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013EACC

extern void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013ECF8

extern unsigned char CheckIfTrig__Fii(int x, int y); // 0x8013EDF8

extern void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013EFA0

extern void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F420

extern void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F64C

extern void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F83C

extern void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013F910

extern void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013FA70

extern void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013FEE4

extern void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x8013FF48

extern void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801400CC

extern void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801403DC

extern void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801404F0

extern void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801405D4

extern void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80140904

extern void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80140C44

extern void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80140CE8

extern void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80140F14

extern void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80140F84

extern void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801411B4

extern void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141258

extern void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141518

extern void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141624

extern void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801416B0

extern void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801418C0

extern void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141978

extern void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141A30

extern void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141AA0

extern void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno); // 0x80141D08

extern void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80141F40

extern void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam); // 0x80142038

extern void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam); // 0x80142248

extern void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80142414

extern void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80142490

extern void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80142520

extern void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80142590

extern void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x80142794

extern void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam); // 0x801428C0

extern int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl); // 0x80142A04

extern int Sentfire__Fiii(int i, int sx, int sy); // 0x80142E90

extern void MI_Dummy__Fi(int i); // 0x80143078

extern void MI_Golem__Fi(int i); // 0x80143080

extern void MI_SetManashield__Fi(int i); // 0x801432FC

extern void MI_LArrow__Fi(int i); // 0x80143340

extern void MI_Arrow__Fi(int i); // 0x80143B54

extern void MI_Firebolt__Fi(int i); // 0x80143D98

extern void MI_Lightball__Fi(int i); // 0x801444AC

extern void MI_Acidpud__Fi(int i); // 0x80144764

extern void MI_Firewall__Fi(int i); // 0x80144890

extern void MI_Fireball__Fi(int i); // 0x80144BAC

extern void MI_Lightctrl__Fi(int i); // 0x80145528

extern void MI_Lightning__Fi(int i); // 0x801458E0

extern void MI_Town__Fi(int i); // 0x801459E0

extern void MI_Flash__Fi(int i); // 0x80145D38

extern void MI_Flash2__Fi(int i); // 0x801460AC

extern void MI_Manashield__Fi(int i); // 0x80146288

extern void MI_Firemove__Fi(int i); // 0x80146588

extern void MI_Guardian__Fi(int i); // 0x80146828

extern void MI_Chain__Fi(int i); // 0x80146AE0

extern void MI_Weapexp__Fi(int i); // 0x80146D48

extern void MI_Misexp__Fi(int i); // 0x801470A4

extern void MI_Acidsplat__Fi(int i); // 0x801473C4

extern void MI_Teleport__Fi(int i); // 0x80147570

extern void MI_Stone__Fi(int i); // 0x801478DC

extern void RemoveStoneMissiles__Fiii(int mon, int mx, int my); // 0x80147AB8

extern void MI_Boom__Fi(int i); // 0x80147B40

extern void MI_Rhino__Fi(int i); // 0x80147C44

extern void MI_FirewallC__Fi(int i); // 0x80148054

extern void MI_Infra__Fi(int i); // 0x80148288

extern void MI_Apoca__Fi(int i); // 0x80148348

extern void MI_Wave__Fi(int i); // 0x80148600

extern void MI_Nova__Fi(int i); // 0x80148A9C

extern void MI_Flame__Fi(int i); // 0x80148D78

extern void MI_Flamec__Fi(int i); // 0x80148F94

extern void MI_Cbolt__Fi(int i); // 0x80149210

extern void MI_Hbolt__Fi(int i); // 0x80149564

extern void MI_Element__Fi(int i); // 0x80149890

extern void MI_Bonespirit__Fi(int i); // 0x80149FAC

extern void MI_ResurrectBeam__Fi(int i); // 0x8014A3E0

extern void MI_Rportal__Fi(int i); // 0x8014A458

extern void ProcessMissiles__Fv(); // 0x8014A694

extern void ClearMissileSpot__Fi(int mi); // 0x8014AAC0


#endif
