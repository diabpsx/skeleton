#ifndef ASYNC_H
#define ASYNC_H


extern void AS_CallBack0__Fi(int handle); // 0x8009060C

extern void AS_CallBack1__Fi(int handle); // 0x80090620

extern void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh); // 0x80090634

extern int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh); // 0x80090710

extern char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh); // 0x800907B0

extern void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh); // 0x800907BC

extern int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh); // 0x800907E8


#endif
