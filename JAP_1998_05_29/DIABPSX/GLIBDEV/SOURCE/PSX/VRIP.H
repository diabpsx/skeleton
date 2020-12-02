#ifndef VRIP_H
#define VRIP_H


extern int vsprintf(char *str, char *fmt, char *ap); // 0x80025538

extern int _doprnt(char *fmt0, char *argp, struct FILE *fp); // 0x80025584


#endif
