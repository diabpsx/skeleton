#ifndef BIRD_H
#define BIRD_H


extern void SetBirdFrig__Fb(void * f); // 0x800AB6B0

extern unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb); // 0x800AB6E4

extern void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd); // 0x800AB73C

extern void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy); // 0x800AB894

extern void * CheckDist__Fii(int x, int y); // 0x800AB910

extern int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AB9F8

extern int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABB24

extern void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABB78

extern void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABD4C

extern void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABE50

extern void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABEB8

extern void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABF3C

extern void CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800ABFE0

extern void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC0F0

extern void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC190

extern void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC21C

extern void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC514

extern void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC520

extern void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader); // 0x800AC58C

extern void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC674

extern void InitBird__Fv(); // 0x800AC764

extern void ProcessBird__Fv(); // 0x800AC838

extern int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x800AC97C

extern void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height); // 0x800ACA14

extern void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y); // 0x800ACB44

extern void DrawLBird__Fv(); // 0x800ACC6C


#endif
