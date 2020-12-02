#ifndef CURSOR_H
#define CURSOR_H


extern void InitCursor__Fv(); // 0x80037734

extern void FreeCursor__Fv(); // 0x8003773C

extern void SetICursor__Fi(int i); // 0x80037744

extern void SetCursor__Fi(int i); // 0x800377A0

extern void NewCursor__Fi(int i); // 0x80037804

extern void InitLevelCursor__Fv(); // 0x80037824

extern void CheckTown__Fv(); // 0x80037884

extern void CheckRportal__Fv(); // 0x80037B18

extern void CheckCursMove__Fv(); // 0x80037D80


#endif
