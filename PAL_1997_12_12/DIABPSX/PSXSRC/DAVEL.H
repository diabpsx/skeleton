#ifndef DAVEL_H
#define DAVEL_H


extern void DaveLDummyPoll__Fv(); // 0x80094080

extern void DaveL__Fv(); // 0x80094088

extern void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B); // 0x800940B0

extern void mteleportfx__Fv(); // 0x80094390

extern void invistimer__Fv(); // 0x8009466C

extern void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr); // 0x80094738

extern void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos); // 0x800947C0

extern void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos); // 0x800949B0

extern void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos); // 0x80094AE4

extern void particlejump__Fv(); // 0x80094CB4

extern void particleglow__Fv(); // 0x80094E54

extern void doparticlejump__Fv(); // 0x80094F38

extern void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos); // 0x80094F78

extern void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source); // 0x800950E0

extern void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos); // 0x800954D8

extern void Teleportfx__Fiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart); // 0x80095598

extern void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos); // 0x80095840

extern void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr); // 0x80095A64

extern void healFX__Fv(); // 0x80095B88

extern void HealStart__Fi(int plr); // 0x80095CA0

extern void HealotherStart__Fi(int plr); // 0x80095CD4

extern void TeleStart__Fi(int plr); // 0x80095D0C

extern void PhaseStart__Fi(int plr); // 0x80095D68

extern void InvisStart__Fi(int plr); // 0x80095D9C

extern void PhaseEnd__Fi(int plr); // 0x80095DD0

extern void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr); // 0x80095DFC

extern void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this); // 0x80095F9C

extern void ApocaStart__Fi(int plr); // 0x80096008

extern void doapocaFX__Fv(); // 0x80096060

extern void DaveLTask__FP4TASK(struct TASK *T); // 0x80096178


#endif
