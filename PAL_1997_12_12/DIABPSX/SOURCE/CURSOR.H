#ifndef CURSOR_H
#define CURSOR_H


extern void InitCursor__Fv(); // 0x80034FD8

extern void FreeCursor__Fv(); // 0x80034FE0

extern void SetICursor__Fi(int i); // 0x80034FE8

extern void SetCursor__Fi(int i); // 0x80035044

extern void NewCursor__Fi(int i); // 0x800350A8

extern void InitLevelCursor__Fv(); // 0x800350C8

extern void CheckTown__Fv(); // 0x80035128

extern void CheckRportal__Fv(); // 0x80035380

extern void CheckCursMove__Fv(); // 0x800355A8


#endif
