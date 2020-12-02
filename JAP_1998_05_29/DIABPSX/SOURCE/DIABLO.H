#ifndef DIABLO_H
#define DIABLO_H


extern void FreeGameMem__Fv(); // 0x80037FAC

extern void start_game__FUi(unsigned int uMsg); // 0x80037FE4

extern void free_game__Fv(); // 0x800380D4

extern void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer); // 0x80038148

extern unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer); // 0x8003820C

extern void run_game_loop__FUi(unsigned int uMsg); // 0x8003840C

extern unsigned char TryIconCurs__Fv(); // 0x80038574

extern unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam); // 0x80038894

extern unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam); // 0x8003889C

extern void LoadLvlGFX__Fv(); // 0x80038930

extern void LoadMegaTiles__FPCc(char *LoadFile); // 0x800389E8

extern void LoadAllGFX__Fv(); // 0x80038A78

extern void CreateLevel__Fi(int lvldir); // 0x80038A98

extern void LoCreateLevel__FPv(); // 0x80038B90

extern void ClearOutDungeonMap__Fv(); // 0x80038CF4

extern void AddQuestItems__Fv(); // 0x80038EF4

extern void AllSolid__Fii(int x, int y); // 0x80038F94

extern void FillCrapBits__Fv(); // 0x80038FD4

extern void Lsaveplrpos__Fv(); // 0x80039174

extern void Lrestoreplrpos__Fv(); // 0x80039220

extern void LoadGameLevel__FUci(unsigned char firstflag, int lvldir); // 0x80039270

extern void SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed); // 0x80039BA8

extern enum GM_SPEEDS GetSpeed__Fv(); // 0x80039BBC

extern void game_logic__Fv(); // 0x80039BC8

extern void timeout_cursor__FUc(unsigned char bTimeout); // 0x80039DB0

extern void game_loop__FUc(unsigned char bStartup); // 0x80039E58

extern void alloc_plr__Fv(); // 0x80039EB8

extern void plr_encrypt__FUc(unsigned char bEncrypt); // 0x80039EC0

extern void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail); // 0x80039EC8

extern void assert_fail__FiPCc(int nLineNo, char *pszFile); // 0x80039EE8

extern void app_fatal(char *pszFile); // 0x80039F08

extern void DoMemCardFromFrontEnd__Fv(); // 0x80039F38

extern void DoMemCardFromInGame__Fv(); // 0x80039F60


#endif
