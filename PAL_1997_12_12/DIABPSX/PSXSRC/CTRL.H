#ifndef CTRL_H
#define CTRL_H


extern void SetDemoKeys__FPi(int *buffer); // 0x80091F28

extern void RestoreDemoKeys__FPi(int *buffer); // 0x80092000

extern char * get_action_str__Fii(int pval, int combo); // 0x80092090

extern int get_key_pad__Fi(int n); // 0x80092108

extern void RemoveCtrlScreen__Fv(); // 0x80092140

extern unsigned char Init_ctrl_pos__Fv(); // 0x80092184

extern int remove_padval__Fi(int p); // 0x8009223C

extern int remove_comboval__Fi(int p); // 0x8009227C

extern unsigned char set_buttons__Fii(int cline, int n); // 0x800922BC

extern void restore_controller_settings__Fv(); // 0x80092410

extern unsigned char main_ctrl_setup__Fv(); // 0x80092458

extern void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col); // 0x800928F0

extern void DrawCtrlSetup__Fv(); // 0x80092E2C

extern void _GLOBAL_.D.ctrlflag(); // 0x800932E4

extern void _GLOBAL_.I.ctrlflag(); // 0x8009330C


#endif
