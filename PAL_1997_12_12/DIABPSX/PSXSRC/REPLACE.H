#ifndef REPLACE_H
#define REPLACE_H


extern void longjmp() ; // 0x800101E8

extern void setjmp() ; // 0x80010220

extern void memset() ; // 0x80010258

extern void strcpy() ; // 0x8001027C

extern void strcat() ; // 0x800102A4

extern void strrchr() ; // 0x800102C4

extern void strchr() ; // 0x80010300

extern void strlen2() ; // 0x80010338

extern void FlushCache() ; // 0x80010468


#endif
