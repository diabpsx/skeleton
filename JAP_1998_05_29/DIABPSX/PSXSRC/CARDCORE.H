#ifndef CARDCORE_H
#define CARDCORE_H


extern void init_mem_card__FPFii_vUc(TDRFuncPtr_init_mem_card__FPFii_vUc0handler handler, unsigned char read_dir); // 0x800A5004

extern void memcard_event__Fii(int evt, int side); // 0x800A523C

extern void init_card__Fib(int card_number, void * read_dir); // 0x800A5274

extern int ping_card__Fi(int card_number); // 0x800A5340

extern void DealWithCard__Fi(int side); // 0x800A53D4

extern void CardUpdateTask__FP4TASK(struct TASK *T); // 0x800A5498

extern void MemcardON__Fv(); // 0x800A54EC

extern void MemcardOFF__Fv(); // 0x800A5558

extern void CheckSavedOptions__Fv(); // 0x800A5590

extern void card_removed__Fi(int card_number); // 0x800A5690

extern int read_card_block__Fii(int card_number, int block); // 0x800A56C8

extern int test_hw_event__Fv(); // 0x800A5710

extern void ActivateMemcard__Fii(int card1, int card2); // 0x800A5790

extern void ActivateCharacterMemcard__Fii(int card1, int card2); // 0x800A57CC

extern void ShowCardActionText__Fv(); // 0x800A5888

extern int CountdownLoad__Fi(int Counter); // 0x800A5B6C

extern int CountdownSave__Fi(int Counter); // 0x800A5D7C

extern void ShowLoadingBox__Fi(int Text); // 0x800A5E5C

extern void KillItemDead__Fiii(int pnum, int InvPos, int Idx); // 0x800A60E8

extern void ClearLoadCharItems__Fv(); // 0x800A672C

extern void PantsDelay__Fv(); // 0x800A67B4


typedef void (*TDRFuncPtr_init_mem_card__FPFii_vUc0handler)();




#endif
