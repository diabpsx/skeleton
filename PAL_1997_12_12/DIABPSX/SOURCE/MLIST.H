#ifndef MLIST_H
#define MLIST_H


extern void ML_Init__Fv(); // 0x80075AAC

extern int ML_GetList__Fi(int Level); // 0x80075AE4

extern int ML_SetRandomList__Fi(int Level); // 0x80075B64

extern int ML_SetList__Fii(int Level, int List); // 0x80075BFC

extern int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask); // 0x80075CAC


#endif
