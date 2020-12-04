#ifndef EFFECTS_H
#define EFFECTS_H


extern unsigned char effect_is_playing__Fi(int nSFX); // 0x80039FCC

extern void stream_stop__Fv(); // 0x80039FD4

extern void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan); // 0x8003A01C

extern void stream_update__Fv(); // 0x8003A0E0

extern void sfx_stop__Fv(); // 0x8003A0E8

extern void InitMonsterSND__Fi(int monst); // 0x8003A104

extern void FreeMonsterSnd__Fv(); // 0x8003A15C

extern unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan); // 0x8003A164

extern void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y); // 0x8003A268

extern void PlayEffect__Fii(int i, int mode); // 0x8003A378

extern int RndSFX__Fi(int psfx); // 0x8003A4A4

extern void PlaySFX__Fi(int psfx); // 0x8003A53C

extern void PlaySfxLoc__Fiii(int psfx, int x, int y); // 0x8003A57C

extern void sound_stop__Fv(); // 0x8003A5D0

extern void sound_update__Fv(); // 0x8003A668

extern void priv_sound_init__FUc(unsigned char bLoadMask); // 0x8003A69C

extern void sound_init__Fv(); // 0x8003A6E0


#endif
