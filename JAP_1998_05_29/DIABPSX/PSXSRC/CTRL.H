#ifndef CTRL_H
#define CTRL_H


extern void SetDemoKeys__FPi(int *buffer); // 0x8009C548

extern void RestoreDemoKeys__FPi(int *buffer); // 0x8009C620

extern char * get_action_str__Fii(int pval, int combo); // 0x8009C6B0

extern int get_key_pad__Fi(int n); // 0x8009C728

extern void * checkvalid__Fv(); // 0x8009C760

extern void * RemoveCtrlScreen__Fv(); // 0x8009C7C4

extern unsigned char Init_ctrl_pos__Fv(); // 0x8009C820

extern int remove_padval__Fi(int p); // 0x8009C8D8

extern int remove_comboval__Fib(int p, void * all); // 0x8009C918

extern unsigned char set_buttons__Fii(int cline, int n); // 0x8009C960

extern void restore_controller_settings__F8CTRL_SET(enum CTRL_SET s); // 0x8009CAD8

extern void * only_one_button__Fi(int p); // 0x8009CB7C

extern unsigned char main_ctrl_setup__Fv(); // 0x8009CBA8

extern void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col); // 0x8009D084

extern void DrawCtrlSetup__Fv(); // 0x8009D5D8

extern void _GLOBAL_.D.ctrlflag(); // 0x8009DAD8

extern void _GLOBAL_.I.ctrlflag(); // 0x8009DB00


#endif
