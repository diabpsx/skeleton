#ifndef GLUE_H
#define GLUE_H


extern void GLUE_SetMonsterList__Fi(int List); // 0x8009BA0C

extern int GLUE_GetMonsterList__Fv(); // 0x8009BA18

extern void GLUE_SuspendGame__Fv(); // 0x8009BA24

extern void GLUE_ResumeGame__Fv(); // 0x8009BA78

extern void GLUE_PreTown__Fv(); // 0x8009BACC

extern void GLUE_PreDun__Fv(); // 0x8009BAFC

extern void * GLUE_Finished__Fv(); // 0x8009BB04

extern void GLUE_SetFinished__Fb(void * NewFinished); // 0x8009BB10

extern void GLUE_StartBg__Fibi(int TextId, void * IsTown, int Level); // 0x8009BB1C

extern void * GLUE_SetShowGameScreenFlag__Fb(void * NewFlag); // 0x8009BB84

extern void * GLUE_GetShowGameScreenFlag__Fv(); // 0x8009BB94

extern void * GLUE_SetHomingScrollFlag__Fb(void * NewFlag); // 0x8009BBA0

extern void * GLUE_SetShowPanelFlag__Fb(void * NewFlag); // 0x8009BBB0

extern void * GLUE_HasGameStarted__Fv(); // 0x8009BBC0

extern void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2); // 0x8009BBCC

extern void GLUE_DoQuake__Fii(int Time, int Amount); // 0x8009BCA4

extern void BgTask__FP4TASK(struct TASK *T); // 0x8009BCB4

extern struct PInf * FindPlayerChar__FPc(char *Id); // 0x8009C160

extern struct PInf * FindPlayerChar__Fiii(int Char, int Wep, int Arm); // 0x8009C1F8

extern struct PInf * FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P); // 0x8009C254

extern int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, void * InTown); // 0x8009C284

extern void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player, struct PlayerStruct *Plr, void * InTown, void * Blocking); // 0x8009C350

extern struct MonstList * GLUE_GetCurrentList__Fi(int Level); // 0x8009C400

extern void GLUE_StartGameExit__Fv(); // 0x8009C4AC

extern void GLUE_Init__Fv(); // 0x8009C518


#endif
