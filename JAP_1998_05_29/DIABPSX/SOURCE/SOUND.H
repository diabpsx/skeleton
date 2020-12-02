#ifndef SOUND_H
#define SOUND_H


extern void snd_update__FUc(unsigned char bStopAll); // 0x80077D14

extern void snd_stop_snd__FP4TSnd(struct TSnd *pSnd); // 0x80077D1C

extern void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan); // 0x80077D58

extern void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan); // 0x80077DA0

extern void snd_init__FUl(unsigned long hWnd); // 0x80077E40

extern void music_stop__Fv(); // 0x80077E50

extern void music_fade__Fv(); // 0x80077E90

extern void music_start__Fi(int nTrack); // 0x80077ED0

extern unsigned char snd_playing__Fi(int SFXNo); // 0x80077F70


#endif
