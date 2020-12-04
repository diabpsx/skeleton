#ifndef TONY_H
#define TONY_H


extern void stub__FPcPv(char *e, void *argptr); // 0x80090F5C

extern void new_eprint__FPcT0i(char *Text, char *File, int Line); // 0x80090F64

extern void TonysGameTask__FP4TASK(struct TASK *T); // 0x80090F98

extern void SetAmbientLight__Fv(); // 0x80091020

extern void print_demo_task__FP4TASK(struct TASK *T); // 0x800910A4

extern void TonysDummyPoll__Fv(); // 0x800912A8

extern void load_demo_pad_data__FUl(unsigned long demo_num); // 0x800912CC

extern void save_demo_pad_data__FUl(unsigned long demo_num); // 0x8009132C

extern void set_pad_record_play__Fi(int level); // 0x8009138C

extern void start_demo__Fv(); // 0x80091400

extern void tony__Fv(); // 0x8009149C


#endif
