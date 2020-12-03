#include "THISDUST.H"
#include "GDEBUG.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ DBG_OpenModule()
 // line 53, offset 0x80020e54
	/* begin block 1 */
		// Start line: 113
	/* end block 1 */
	// End Line: 114

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar DBG_OpenModule(void)

{
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_PollHost()
 // line 72, offset 0x80020e5c
	/* begin block 1 */
		// Start line: 151
	/* end block 1 */
	// End Line: 152

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DBG_PollHost(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_Halt()
 // line 88, offset 0x80020e64
	/* begin block 1 */
		// Start line: 180
	/* end block 1 */
	// End Line: 181

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DBG_Halt(void)

{
	do {
										/* WARNING: Do nothing block with infinite loop */
	} while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_SendMessage(char *e /*$a0*/)
 // line 108, offset 0x80020e6c
	/* begin block 1 */
		// Start line: 216
	/* end block 1 */
	// End Line: 217

void DBG_SendMessage(char *e)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_SetMessageHandler(TDRFuncPtr_DBG_SetMessageHandler0Func Func /*$a0*/)
 // line 135, offset 0x80020e84
	/* begin block 1 */
		// Start line: 271
	/* end block 1 */
	// End Line: 272

void DBG_SetMessageHandler(TDRFuncPtr_DBG_SetMessageHandler0Func Func)

{
	MsgFunc = Func;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_Error(char *Text /*$a0*/, char *File /*$a1*/, int Line /*$a2*/)
 // line 146, offset 0x80020e94
	/* begin block 1 */
		// Start line: 303
	/* end block 1 */
	// End Line: 304

void DBG_Error(char *Text,char *File,int Line)

{
	if (ErrorFunc != (code *)0x0) {
		(*ErrorFunc)();
	}
	DBG_Halt();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_SetErrorFunc(TDRFuncPtr_DBG_SetErrorFunc0EFunc EFunc /*$a0*/)
 // line 166, offset 0x80020ec8
	/* begin block 1 */
		// Start line: 344
	/* end block 1 */
	// End Line: 345

void DBG_SetErrorFunc(TDRFuncPtr_DBG_SetErrorFunc0EFunc EFunc)

{
	ErrorFunc = EFunc;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SendPsyqString(char *e /*$a0*/)
 // line 177, offset 0x80020ed8
	/* begin block 1 */
		// Start line: 369
	/* end block 1 */
	// End Line: 370

void SendPsyqString(char *e)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DBG_SetPollRoutine(TDRFuncPtr_DBG_SetPollRoutine0Func Func /*$a0*/)
 // line 190, offset 0x80020ee0
	/* begin block 1 */
		// Start line: 392
	/* end block 1 */
	// End Line: 393

void DBG_SetPollRoutine(TDRFuncPtr_DBG_SetPollRoutine0Func Func)

{
	PollFunc = Func;
	return;
}





