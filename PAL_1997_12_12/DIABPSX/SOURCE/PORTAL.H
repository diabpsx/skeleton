#ifndef PORTAL_H
#define PORTAL_H


extern int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id); // 0x8007A1D0

extern void AddWarpMissile__Fiii(int i, int x, int y); // 0x8007A3A4

extern void SyncPortals__Fv(); // 0x8007A4EC

extern void AddInTownPortal__Fi(int i); // 0x8007A5F4

extern void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp); // 0x8007A62C

extern void DeactivatePortal__Fi(int i); // 0x8007A69C

extern unsigned char PortalOnLevel__Fi(int i); // 0x8007A6BC

extern void DelMis__Fii(int mi, int i); // 0x8007A6F4

extern void RemovePortalMissile__Fi(int id); // 0x8007A754

extern void SetCurrentPortal__Fi(int p); // 0x8007A8D0

extern void GetPortalLevel__Fv(); // 0x8007A8DC

extern void GetPortalLvlPos__Fv(); // 0x8007AA80


#endif
