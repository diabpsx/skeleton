#ifndef BIRD_H
#define BIRD_H


extern unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb); // 0x8009E440

extern void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd); // 0x8009E498

extern void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy); // 0x8009E674

extern int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009E6F0

extern int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009E7D0

extern void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009E824

extern void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009E98C

extern void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009EA90

extern void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009EACC

extern void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009EB50

extern void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009EBFC

extern void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009ECA0

extern void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009ED44

extern void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009EFF0

extern void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009EFFC

extern void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader); // 0x8009F04C

extern void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader); // 0x8009F138

extern void InitBird__Fv(); // 0x8009F268

extern void ProcessBird__Fv(); // 0x8009F340

extern int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b); // 0x8009F498

extern void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height); // 0x8009F534

extern void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y); // 0x8009F664

extern void DrawLBird__Fv(); // 0x8009F770


#endif
