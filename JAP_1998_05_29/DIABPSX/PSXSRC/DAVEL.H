#ifndef DAVEL_H
#define DAVEL_H


extern void DaveLDummyPoll__Fv(); // 0x8009E3F4

extern void DaveL__Fv(); // 0x8009E3FC

extern void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B); // 0x8009E424

extern void mteleportfx__Fv(); // 0x8009E764

extern void invistimer__Fv(); // 0x8009EA78

extern void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr); // 0x8009EB50

extern void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos); // 0x8009EBE0

extern void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos); // 0x8009EDD8

extern void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos); // 0x8009EF0C

extern void particlejump__Fii(int ScrX, int ScrY); // 0x8009F0DC

extern void doparticlejump__Fv(); // 0x8009F2AC

extern void StartPartJump__Fiiiii(int mi, int height, int scale, int colour, int OtPos); // 0x8009F440

extern void MonstPartJump__Fi(int m); // 0x8009F594

extern void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source); // 0x8009F6B4

extern void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos); // 0x8009FA04

extern void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos); // 0x8009FAC0

extern void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos); // 0x8009FDC0

extern void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos); // 0x8009FFE8

extern void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr); // 0x800A0080

extern void healFX__Fv(); // 0x800A01A4

extern void HealStart__Fi(int plr); // 0x800A02E0

extern void HealotherStart__Fi(int plr); // 0x800A0314

extern void TeleStart__Fi(int plr); // 0x800A034C

extern void TeleStop__Fi(int plr); // 0x800A040C

extern void PhaseStart__Fi(int plr); // 0x800A0438

extern void PhaseEnd__Fi(int plr); // 0x800A046C

extern void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr); // 0x800A0498

extern void ApocaStart__Fi(int plr); // 0x800A0680

extern void DaveLTask__FP4TASK(struct TASK *T); // 0x800A06E4


#endif
