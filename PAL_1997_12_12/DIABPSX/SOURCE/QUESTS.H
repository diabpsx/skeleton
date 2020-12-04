#ifndef QUESTS_H
#define QUESTS_H


extern void TSK_Lava2Water__FP4TASK(struct TASK *T); // 0x800610DC

extern void CheckQuests__Fv(); // 0x8006132C

extern unsigned char ForceQuests__Fv(); // 0x800617E8

extern unsigned char QuestStatus__Fi(int i); // 0x8006198C

extern void CheckQuestKill__FiUc(int m, unsigned char sendmsg); // 0x80061A20

extern void SetReturnLvlPos__Fv(); // 0x80062000

extern void GetReturnLvlPos__Fv(); // 0x80062110

extern void ResyncMPQuests__Fv(); // 0x80062164

extern void ResyncQuests__Fv(); // 0x800622A0

extern void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col); // 0x80062800

extern void DrawQuestLog__Fv(); // 0x80062A2C

extern void DrawQuestLogTSK__FP4TASK(struct TASK *T); // 0x80062BE0

extern void StartQuestlog__Fv(); // 0x80062C60

extern void QuestlogUp__Fv(); // 0x80062D70

extern void QuestlogDown__Fv(); // 0x80062DC8

extern void RemoveQLog__Fv(); // 0x80062E30

extern void QuestlogEnter__Fv(); // 0x80062E9C

extern void QuestlogESC__Fv(); // 0x80062F38

extern void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1); // 0x80062F60

extern void _GLOBAL_.D.questlog(); // 0x80062FE0

extern void _GLOBAL_.I.questlog(); // 0x80063008


#endif
