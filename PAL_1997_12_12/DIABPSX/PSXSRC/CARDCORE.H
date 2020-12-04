#ifndef CARDCORE_H
#define CARDCORE_H


extern void init_mem_card__FPFii_v(TDRFuncPtr_init_mem_card__FPFii_v0handler handler); // 0x8009A500

extern void memcard_event__Fii(int evt, int side); // 0x8009A71C

extern void init_card__Fi(int card_number); // 0x8009A724

extern int ping_card__Fi(int card_number); // 0x8009A758

extern void CardUpdateTask__FP4TASK(struct TASK *T); // 0x8009A7EC

extern void MemcardON__Fv(); // 0x8009A824

extern void MemcardOFF__Fv(); // 0x8009A894


typedef void (*TDRFuncPtr_init_mem_card__FPFii_v0handler)();




#endif
