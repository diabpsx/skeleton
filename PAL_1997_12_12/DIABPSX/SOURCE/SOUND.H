#ifndef SOUND_H
#define SOUND_H


extern void snd_update__FUc(unsigned char bStopAll); // 0x80070848

extern void snd_get_volume__FPCcPl(char *pszKey, long *plVolume); // 0x80070850

extern void snd_stop_snd__FP4TSnd(struct TSnd *pSnd); // 0x800708B8

extern void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan); // 0x800708D8

extern void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan); // 0x80070948

extern void snd_init__FUl(unsigned long hWnd); // 0x800709E4

extern void music_stop__Fv(); // 0x80070A40

extern void music_fade__Fv(); // 0x80070A84

extern void music_start__Fi(int nTrack); // 0x80070AC4

extern void music_hold__Fv(); // 0x80070B50

extern void music_release__Fv(); // 0x80070BB0


#endif
