#include "THISDUST.H"
#include "GWIN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GRL_InitGwin__Fv()
 // line 94, offset 0x8007b210
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x8007B210
	/* end block 1 */
	// End offset: 0x8007B214
	// End Line: 96

	/* begin block 2 */
		// Start line: 189
	/* end block 2 */
	// End Line: 190

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GRL_InitGwin__Fv(void)

{
	CurrentProc = 0;
	return;
}



// decompiled code
// original method signature: 
// TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul /*$ra*/ GRL_SetWindowProc__FPFUlUilUl_Ul(TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc NewProc /*$a0*/)
 // line 106, offset 0x8007b21c
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8007B21C
		// Variables:
	// 		unsigned long (*OldProc)(); // $v0
	/* end block 1 */
	// End offset: 0x8007B224
	// End Line: 111

	/* begin block 2 */
		// Start line: 214
	/* end block 2 */
	// End Line: 215

TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul
GRL_SetWindowProc__FPFUlUilUl_Ul(TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc NewProc)

{
	TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul pTVar1;
	
	pTVar1 = CurrentProc;
	CurrentProc = (TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul)NewProc;
	return pTVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GRL_CallWindowProc__FUlUilUl(unsigned long hw /*$a0*/, unsigned int msg /*$a1*/, long wp /*$a2*/, unsigned long lp /*$a3*/)
 // line 121, offset 0x8007b22c
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x8007B22C
	/* end block 1 */
	// End offset: 0x8007B244
	// End Line: 124

	/* begin block 2 */
		// Start line: 243
	/* end block 2 */
	// End Line: 244

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GRL_CallWindowProc__FUlUilUl(ulong hw,uint msg,long wp,ulong lp)

{
	if (CurrentProc != (code *)0x0) {
		(*CurrentProc)();
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GRL_PostMessage__FUlUilUl(unsigned long hWnd /*$s3*/, unsigned int Msg /*$s0*/, long wParam /*$s1*/, unsigned long lParam /*$s2*/)
 // line 133, offset 0x8007b254
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x8007B254
	/* end block 1 */
	// End offset: 0x8007B2E0
	// End Line: 151

	/* begin block 2 */
		// Start line: 267
	/* end block 2 */
	// End Line: 268

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar GRL_PostMessage__FUlUilUl(ulong hWnd,uint Msg,long wParam,ulong lParam)

{
	char *pcVar1;
	
	pcVar1 = Msg2Txt__Fi(Msg);
	if (pcVar1 == (char *)0x0) {
		DBG_Error((char *)0x0,"source/GWIN.cpp",0x89);
	}
	PSX_WndProc__FUilUl(Msg,wParam,lParam);
	GRL_CallWindowProc__FUlUilUl(hWnd,Msg,wParam,lParam);
	PSX_PostWndProc__FUilUl(Msg,wParam,lParam);
	SetAmbientLight__Fv();
	return '\x01';
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Msg2Txt__Fi(int Msg /*$a0*/)
 // line 160, offset 0x8007b300
	/* begin block 1 */
		// Start line: 161
		// Start offset: 0x8007B300

		/* begin block 1.1 */
			// Start line: 162
			// Start offset: 0x8007B300
		/* end block 1.1 */
		// End offset: 0x8007B340
		// End Line: 166
	/* end block 1 */
	// End offset: 0x8007B340
	// End Line: 168

	/* begin block 2 */
		// Start line: 322
	/* end block 2 */
	// End Line: 323

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * Msg2Txt__Fi(int Msg)

{
	uint uVar1;
	
	uVar1 = 0;
	do {
		if (Msg == *(int *)((int)&AllMsgs.Msg + uVar1)) {
			return *(char **)((int)&AllMsgs.Text + uVar1);
		}
		uVar1 = uVar1 + 8;
	} while (uVar1 < 0x58);
	return (char *)0x0;
}





