#ifndef EFFECTS_H
#define EFFECTS_H


extern unsigned char effect_is_playing__Fi(int nSFX); // 0x8003CF34

extern void stream_stop__Fv(); // 0x8003CF5C

extern void stream_pause__Fv(); // 0x8003CFB8

extern void stream_resume__Fv(); // 0x8003D01C

extern void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan); // 0x8003D06C

extern void stream_update__Fv(); // 0x8003D158

extern void sfx_stop__Fv(); // 0x8003D160

extern void InitMonsterSND__Fi(int monst); // 0x8003D17C

extern void FreeMonsterSnd__Fv(); // 0x8003D1D4

extern unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan); // 0x8003D1DC

extern void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y); // 0x8003D3C4

extern void PlayEffect__Fii(int i, int mode); // 0x8003D528

extern int RndSFX__Fi(int psfx); // 0x8003D670

extern void PlaySFX__Fi(int psfx); // 0x8003D718

extern void PlaySfxLoc__Fiii(int psfx, int x, int y); // 0x8003D784

extern void sound_stop__Fv(); // 0x8003D830

extern void sound_update__Fv(); // 0x8003D8C8

extern void priv_sound_init__FUc(unsigned char bLoadMask); // 0x8003D8FC

extern void sound_init__Fv(); // 0x8003D940

extern void stream_fade__Fv(); // 0x8003D9E8


#endif
