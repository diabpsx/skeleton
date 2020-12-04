#ifndef ENGINE_H
#define ENGINE_H


extern int GetDirection__Fiiii(int x1, int y1, int x2, int y2); // 0x8003A788

extern void SetRndSeed__Fl(long s); // 0x8003A82C

extern long GetRndSeed__Fv(); // 0x8003A83C

extern long random__Fil(int idx, long v); // 0x8003A884

extern unsigned char * DiabloAllocPtr__FUl(unsigned long dwBytes); // 0x8003A8F0

extern void mem_free_dbg__FPv(void *p); // 0x8003A93C

extern unsigned char * LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen); // 0x8003A98C

extern void PlayInGameMovie__FPCc(char *pszMovie); // 0x8003A994


#endif
