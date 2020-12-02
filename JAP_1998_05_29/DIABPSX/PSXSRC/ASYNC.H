#ifndef ASYNC_H
#define ASYNC_H


extern void AS_CallBack0__Fi(int ah); // 0x8009A9B4

extern void AS_CallBack1__Fi(int ah); // 0x8009AA20

extern void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh); // 0x8009AA8C

extern int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh); // 0x8009AB54

extern char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh); // 0x8009ABF4

extern void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh); // 0x8009AC24


#endif
