#ifndef LOADSAVE_H
#define LOADSAVE_H


extern char * GetOptStr__Fv(); // 0x8015B958

extern char * GetDiabloStr__Fv(); // 0x8015B968

extern char BLoad__Fv(); // 0x8015B978

extern int ILoad__Fv(); // 0x8015B994

extern unsigned char OLoad__Fv(); // 0x8015B9E8

extern void LoadQuest__Fi(int i); // 0x8015BA0C

extern void BSave__Fc(char v); // 0x8015BAD4

extern void ISave__Fi(int v); // 0x8015BAEC

extern void OSave__FUc(unsigned char v); // 0x8015BB4C

extern void SaveQuest__Fi(int i); // 0x8015BB90

extern int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title); // 0x8015BC5C

extern int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file); // 0x8015C1BC

extern void PSX_CH_LoadGame__Fi(int slot); // 0x8015C2E8

extern int PSX_CH_LoadBlock__Fii(int card_number, int file); // 0x8015C388

extern int PSX_CH_SaveGame__Fii(int card_number, int slot); // 0x8015C3B0

extern void RestorePads__Fv(); // 0x8015C51C

extern void StorePads__Fv(); // 0x8015C5DC

extern void GetIcon__Fv(); // 0x8015C698

extern int PSX_OPT_LoadGame__Fiib(int card_number, int file, void * KillHandler); // 0x8015C6D4

extern int PSX_OPT_SaveGame__FiPc(int card_number, char *filename); // 0x8015C730

extern void LoadOptions__Fv(); // 0x8015C850

extern void SaveOptions__Fv(); // 0x8015C928

extern int RestoreLoadedData__Fb(void * firstflag); // 0x8015C9CC


#endif
