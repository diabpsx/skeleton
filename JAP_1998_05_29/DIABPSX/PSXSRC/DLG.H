#ifndef DLG_H
#define DLG_H


extern int GetFileNumber__FiPc(int side, char *file_name); // 0x80159590

extern int DoSaveOptions__Fv(); // 0x80159650

extern int DoSaveGame__Fv(); // 0x80159678

extern void DoLoadGame__Fv(); // 0x801597F0

extern int DoFrontEndLoadCharacter__Fi(int slot); // 0x80159894

extern void McInitLoadCard1Menu__Fv(); // 0x801598EC

extern void McInitLoadCard2Menu__Fv(); // 0x8015992C

extern void ChooseCardLoad__Fv(); // 0x8015996C

extern void McInitLoadGameMenu__Fv(); // 0x80159A08

extern void McMainKeyCtrl__Fv(); // 0x80159A6C

extern void McCharCardMenuCtrl__Fv(); // 0x80159D08

extern void McMainCharKeyCtrl__Fv(); // 0x80159F50

extern void ShowAlertBox__Fv(); // 0x8015A3BC

extern void * GetLoadStatusMessage__FPc(char *file_name); // 0x8015A5C8

extern void * GetSaveStatusMessage__FiPc(int fileblocks, char *file_name); // 0x8015A67C

extern void ShowGameFiles__FPciiG4RECTi(char *filename, int saveflag, int Spacing, struct RECT ORect, int yoff); // 0x8015A79C

extern void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff); // 0x8015A90C

extern void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is); // 0x8015AAEC

extern void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack, int pnum); // 0x8015AB98

extern void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id); // 0x8015ADAC

extern void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer); // 0x8015AEE0

extern void UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack, int pnum, unsigned char killok); // 0x8015AFB8

extern void ConstructSlotName__FPci(char *TempStr, int slot); // 0x8015B284

extern int GetSpinnerWidth__Fi(int j); // 0x8015B37C

extern char * ReconstructSlotName__Fii(int side, int file); // 0x8015B420


#endif
