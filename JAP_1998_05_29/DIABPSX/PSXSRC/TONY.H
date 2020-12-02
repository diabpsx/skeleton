#ifndef TONY_H
#define TONY_H


extern void stub__FPcPv(char *e, void *argptr); // 0x8009B338

extern void new_eprint__FPcT0i(char *Text, char *File, int Line); // 0x8009B340

extern void TonysGameTask__FP4TASK(struct TASK *T); // 0x8009B374

extern void SetAmbientLight__Fv(); // 0x8009B3FC

extern void SetDemoPlayer__Fv(); // 0x8009B4BC

extern void print_demo_task__FP4TASK(struct TASK *T); // 0x8009B4EC

extern void TonysDummyPoll__Fv(); // 0x8009B82C

extern void SetTonyPoll__Fv(); // 0x8009B858

extern void ClearTonyPoll__Fv(); // 0x8009B864

extern void load_demo_pad_data__FUl(unsigned long demo_num); // 0x8009B870

extern void save_demo_pad_data__FUl(unsigned long demo_num); // 0x8009B8D0

extern void set_pad_record_play__Fi(int level); // 0x8009B930

extern void start_demo__Fv(); // 0x8009B9A4

extern void SetQuest__Fv(); // 0x8009B9B4

extern void DrawManaShield__FP12PlayerStruct(struct PlayerStruct *ptrplr); // 0x8009B9BC

extern void ManaTask__FP4TASK(struct TASK *T); // 0x8009B9C4

extern void tony__Fv(); // 0x8009B9CC


#endif
