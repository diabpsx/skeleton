#ifndef STREAM_H
#define STREAM_H


extern void PrintCDWaitTask__FP4TASK(struct TASK *T); // 0x8008EB14

extern void InitCDWaitIcon__Fv(); // 0x8008EBF8

extern void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e); // 0x8008EC2C

extern void STR_SystemTask__FP4TASK(struct TASK *T); // 0x8008EC40

extern void STR_AllocBuffer__Fv(); // 0x8008EC88

extern void STR_Init__Fv(); // 0x8008ECDC

extern struct SFXHDR * STR_InitStream__Fv(); // 0x8008EDA8

extern struct SFXHDR * STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop); // 0x8008EEE0

extern void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh); // 0x8008F01C

extern void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh); // 0x8008F074

extern void STR_pauseall__Fv(); // 0x8008F180

extern void STR_resumeall__Fv(); // 0x8008F1D0

extern void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh); // 0x8008F220

extern void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command); // 0x8008F28C

extern char STR_Command__FP6SFXHDR(struct SFXHDR *sfh); // 0x8008F398

extern void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh); // 0x8008F544

extern void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size); // 0x8008F60C

extern void STR_AsyncWeeTASK__FP4TASK(struct TASK *T); // 0x8008F7E8

extern void STR_AsyncTASK__FP4TASK(struct TASK *T); // 0x8008FAE0

extern void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType); // 0x8008FF0C


#endif
