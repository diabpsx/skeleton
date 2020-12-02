#ifndef STREAM_H
#define STREAM_H


extern void PrintCDWaitTask__FP4TASK(struct TASK *T); // 0x80098988

extern void InitCDWaitIcon__Fv(); // 0x80098AC4

extern void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e); // 0x80098AF8

extern void STR_SystemTask__FP4TASK(struct TASK *T); // 0x80098B0C

extern void STR_AllocBuffer__Fv(); // 0x80098B3C

extern void STR_Init__Fv(); // 0x80098B74

extern struct SFXHDR * STR_InitStream__Fc(char flag); // 0x80098CA0

extern struct SFXHDR * STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop); // 0x80098DC8

extern void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh); // 0x80099010

extern void STR_setpitch__FP6SFXHDR(struct SFXHDR *sfh); // 0x800990DC

extern void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh); // 0x80099128

extern void STR_pauseall__Fv(); // 0x80099234

extern void STR_resumeall__Fv(); // 0x800992A8

extern void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh); // 0x8009931C

extern void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command); // 0x80099388

extern char STR_Command__FP6SFXHDR(struct SFXHDR *sfh); // 0x80099474

extern void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh); // 0x80099664

extern void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size); // 0x8009972C

extern void STR_AsyncWeeTASK__FP4TASK(struct TASK *T); // 0x800999AC

extern void STR_AsyncTASK__FP4TASK(struct TASK *T); // 0x80099C84

extern void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType); // 0x8009A06C


#endif
