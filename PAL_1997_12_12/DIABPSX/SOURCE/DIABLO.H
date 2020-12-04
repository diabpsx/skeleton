#ifndef DIABLO_H
#define DIABLO_H


extern void FreeGameMem__Fv(); // 0x800357F4

extern void start_game__FUi(unsigned int uMsg); // 0x80035844

extern void free_game__Fv(); // 0x800358A0

extern void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer); // 0x80035914

extern unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer); // 0x800359D8

extern void run_game_loop__FUi(unsigned int uMsg); // 0x80035BC0

extern unsigned char TryIconCurs__Fv(); // 0x80035D30

extern unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam); // 0x8003610C

extern unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam); // 0x80036114

extern void LoadLvlGFX__Fv(); // 0x800361C4

extern void LoadAllGFX__Fv(); // 0x80036260

extern void CreateLevel__Fi(int lvldir); // 0x80036280

extern void LoCreateLevel__FPv(); // 0x80036378

extern void ClearOutDungeonMap__Fv(); // 0x80036500

extern void LoadGameLevel__FUci(unsigned char firstflag, int lvldir); // 0x800365DC

extern void game_logic__Fv(); // 0x80036F60

extern void timeout_cursor__FUc(unsigned char bTimeout); // 0x8003706C

extern void game_loop__FUc(unsigned char bStartup); // 0x80037114

extern void alloc_plr__Fv(); // 0x8003714C

extern void plr_encrypt__FUc(unsigned char bEncrypt); // 0x80037154

extern void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail); // 0x8003715C

extern void assert_fail__FiPCc(int nLineNo, char *pszFile); // 0x8003717C

extern void app_fatal(char *pszFile); // 0x8003719C

extern void DoMemCardFromFrontEnd__Fv(); // 0x800371CC

extern void DoMemCardFromInGame__Fv(); // 0x800371F4


#endif
