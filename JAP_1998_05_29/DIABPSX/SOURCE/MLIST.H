#ifndef MLIST_H
#define MLIST_H


extern void ML_Init__Fv(); // 0x8007D5F8

extern int ML_GetList__Fi(int Level); // 0x8007D630

extern int ML_SetRandomList__Fi(int Level); // 0x8007D6B0

extern int ML_SetList__Fii(int Level, int List); // 0x8007D748

extern int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask); // 0x8007D7F8


#endif
