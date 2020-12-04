#ifndef GLUE_H
#define GLUE_H


extern void GLUE_SetMonsterList__Fi(int List); // 0x800914D4

extern int GLUE_GetMonsterList__Fv(); // 0x800914E0

extern void GLUE_SuspendGame__Fv(); // 0x800914EC

extern void GLUE_ResumeGame__Fv(); // 0x80091540

extern void GLUE_PreTown__Fv(); // 0x80091594

extern void GLUE_PreDun__Fv(); // 0x800915F8

extern void * GLUE_Finished__Fv(); // 0x80091644

extern void GLUE_SetFinished__Fb(void * NewFinished); // 0x80091650

extern void GLUE_StartBg__Fibi(int TextId, void * IsTown, int Level); // 0x8009165C

extern void * GLUE_SetShowGameScreenFlag__Fb(void * NewFlag); // 0x800916E0

extern void * GLUE_SetHomingScrollFlag__Fb(void * NewFlag); // 0x800916F0

extern void * GLUE_SetShowPanelFlag__Fb(void * NewFlag); // 0x80091700

extern void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2); // 0x80091710

extern void BgTask__FP4TASK(struct TASK *T); // 0x800917E8

extern struct PInf * FindPlayerChar__FPc(char *Id); // 0x80091CAC

extern struct PInf * FindPlayerChar__Fiii(int Char, int Wep, int Arm); // 0x80091D34

extern struct PInf * FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P); // 0x80091D90

extern int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, void * InTown); // 0x80091DC0

extern void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, void * InTown); // 0x80091E00

extern struct MonstList * GLUE_GetCurrentList__Fi(int Level); // 0x80091E54


#endif
