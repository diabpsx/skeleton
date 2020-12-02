#ifndef ENGINE_H
#define ENGINE_H


extern int GetDirection__Fiiii(int x1, int y1, int x2, int y2); // 0x8003DA28

extern void SetRndSeed__Fl(long s); // 0x8003DACC

extern long GetRndSeed__Fv(); // 0x8003DADC

extern long ENG_random__Fl(long v); // 0x8003DB24

extern unsigned char * DiabloAllocPtr__FUl(unsigned long dwBytes); // 0x8003DB90

extern void mem_free_dbg__FPv(void *p); // 0x8003DBDC

extern unsigned char * LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen); // 0x8003DC2C

extern void PlayInGameMovie__FPCc(char *pszMovie); // 0x8003DC34


#endif
