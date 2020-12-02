#ifndef GDEBUG_H
#define GDEBUG_H


extern unsigned char DBG_OpenModule(); // 0x80020E54

extern void DBG_PollHost(); // 0x80020E5C

extern void DBG_Halt(); // 0x80020E64

extern void DBG_SendMessage(char *e); // 0x80020E6C

extern void DBG_SetMessageHandler(TDRFuncPtr_DBG_SetMessageHandler0Func Func); // 0x80020E84

extern void DBG_Error(char *Text, char *File, int Line); // 0x80020E94

extern void DBG_SetErrorFunc(TDRFuncPtr_DBG_SetErrorFunc0EFunc EFunc); // 0x80020EC8

extern void SendPsyqString(char *e); // 0x80020ED8

extern void DBG_SetPollRoutine(TDRFuncPtr_DBG_SetPollRoutine0Func Func); // 0x80020EE0


typedef void (*TDRFuncPtr_DBG_SetErrorFunc0EFunc)();

typedef void (*TDRFuncPtr_DBG_SetMessageHandler0Func)();

typedef void (*TDRFuncPtr_DBG_SetPollRoutine0Func)();




#endif
