#ifndef CHOOSEM_H
#define CHOOSEM_H


extern unsigned long CM_QuestToBitPattern__Fi(int QuestNum); // 0x80155A04

extern void CM_ShowMonsterList__Fii(int Level, int List); // 0x80155ADC

extern int CM_ChooseMonsterList__FiUl(int Level, unsigned long QuestsNeededMask); // 0x80155AE4

extern int NoUiListChoose__FiUl(int Level, unsigned long QuestsNeededMask); // 0x80155B84

extern void ChooseTask__FP4TASK(struct TASK *T); // 0x80155B8C

extern void ShowTask__FP4TASK(struct TASK *T); // 0x80155C5C

extern int GetListsAvailable__FiUlPUc(int Level, unsigned long QuestsNeededMask, unsigned char *ListofLists); // 0x80155E8C


#endif
