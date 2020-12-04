#ifndef GDEBUG_H
#define GDEBUG_H


extern unsigned char DBG_OpenModule(); // 0x8001E900

extern void DBG_PollHost(); // 0x8001E908

extern void DBG_Halt(); // 0x8001E910

extern void DBG_SendMessage(char *e); // 0x8001E918

extern void DBG_SetMessageHandler(TDRFuncPtr_DBG_SetMessageHandler0Func Func); // 0x8001E930

extern void DBG_Error(char *Text, char *File, int Line); // 0x8001E940

extern void DBG_SetErrorFunc(TDRFuncPtr_DBG_SetErrorFunc0EFunc EFunc); // 0x8001E96C

extern void SendPsyqString(char *e); // 0x8001E97C

extern void DBG_SetPollRoutine(TDRFuncPtr_DBG_SetPollRoutine0Func Func); // 0x8001E984


typedef void (*TDRFuncPtr_DBG_SetErrorFunc0EFunc)();

typedef void (*TDRFuncPtr_DBG_SetMessageHandler0Func)();

typedef void (*TDRFuncPtr_DBG_SetPollRoutine0Func)();




#endif
