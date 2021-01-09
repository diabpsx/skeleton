#ifndef MEMCARD_H
#define MEMCARD_H


extern void endian_swap__FPUci(unsigned char *b, int byts); // 0x801426F8

extern void sjis_endian_swap__FPUci(unsigned char *b, int byts); // 0x8014272C

extern unsigned short to_sjis__Fc(char asc); // 0x80142774

extern char to_ascii__FUs(unsigned short sjis); // 0x801427F4

extern void ascii_to_sjis__FPUcPUs(unsigned char *asc, unsigned short *sjis); // 0x8014287C

extern int is_sjis__FPUc(unsigned char *buf); // 0x80142904

extern int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc); // 0x80142910

extern void read_card_directory__Fi(int card_number); // 0x80142998

extern int test_card_format__Fi(int card_number); // 0x80142BF4

extern int checksum_data__FPci(char *buf, int size); // 0x80142CE4

extern int delete_card_file__Fii(int card_number, int file); // 0x80142D20

extern int read_card_file__FiiiPc(int card_number, int file, int id, char *buf); // 0x80142E18

extern int format_card__Fi(int card_number); // 0x80142FF4

extern int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf); // 0x801430B8

extern void new_card__Fi(int card_number); // 0x8014340C

extern void service_card__Fi(int card_number); // 0x801434A0


#endif
