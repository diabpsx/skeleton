#ifndef QUESTS_H
#define QUESTS_H


extern void CheckRPortalOK__FPiT0(int *rx, int *ry); // 0x800674B4

extern void CheckQuests__Fv(); // 0x800674F4

extern unsigned char ForceQuests__Fv(); // 0x800679CC

extern unsigned char QuestStatus__Fi(int i); // 0x80067B70

extern void CheckQuestKill__FiUc(int m, unsigned char sendmsg); // 0x80067C04

extern void SetReturnLvlPos__Fv(); // 0x800681CC

extern void GetReturnLvlPos__Fv(); // 0x800682DC

extern void ResyncQuests__Fv(); // 0x80068330

extern void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col); // 0x8006881C

extern void DrawQuestLog__Fv(); // 0x80068A70

extern void DrawQuestLogTSK__FP4TASK(struct TASK *T); // 0x80068C68

extern void StartQuestlog__Fv(); // 0x80068D40

extern void QuestlogUp__Fv(); // 0x80068E74

extern void QuestlogDown__Fv(); // 0x80068F0C

extern void RemoveQLog__Fv(); // 0x80068FC0

extern void QuestlogEnter__Fv(); // 0x80069078

extern void QuestlogESC__Fv(); // 0x80069144

extern void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1); // 0x8006916C

extern void _GLOBAL_.D.questlog(); // 0x800691EC

extern void _GLOBAL_.I.questlog(); // 0x80069214


#endif
