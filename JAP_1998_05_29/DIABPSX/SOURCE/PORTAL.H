#ifndef PORTAL_H
#define PORTAL_H


extern void AddWarpMissile__Fiii(int i, int x, int y); // 0x80080EF8

extern void SyncPortals__Fv(); // 0x80080FE8

extern void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp); // 0x8008113C

extern void DeactivatePortal__Fi(int i); // 0x800811C8

extern unsigned char PortalOnLevel__Fi(int i); // 0x800811E8

extern void DelMis__Fii(int mi, int i); // 0x80081220

extern void RemovePortalMissile__Fi(int id); // 0x80081280

extern void SetCurrentPortal__Fi(int p); // 0x800813E4

extern void GetPortalLevel__Fv(); // 0x800813F0

extern void GetPortalLvlPos__Fv(); // 0x80081554


#endif
