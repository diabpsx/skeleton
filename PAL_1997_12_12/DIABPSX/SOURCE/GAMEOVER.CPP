#include "THISDUST.H"
#include "GAMEOVER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GO_DoGameOver__Fv()
 // line 73, offset 0x8007b53c
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x8007B53C
	/* end block 1 */
	// End offset: 0x8007B570
	// End Line: 76

	/* begin block 2 */
		// Start line: 146
	/* end block 2 */
	// End Line: 147

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GO_DoGameOver__Fv(void)

{
	TASK *pTVar1;
	
	pTVar1 = TSK_Exist((TASK *)0x0,(ulong)&DAT_00008001,0xffffffff);
	if (pTVar1 == (TASK *)0x0) {
		TSK_AddTask((ulong)&DAT_00008001,GameOverTask__FP4TASK,0x800,0);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GameOverTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 85, offset 0x8007b580
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x8007B580
		// Variables:
	// 		void * OldPause; // $s1

		/* begin block 1.1 */
			// Start line: 86
			// Start offset: 0x8007B580
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x8007B5BC
		// End Line: 96
	/* end block 1 */
	// End offset: 0x8007B624
	// End Line: 117

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

void GameOverTask__FP4TASK(TASK *T)

{
	void *NewPause;
	void *pvVar1;
	int iVar2;
	
	NewPause = PA_SetPauseOk__Fb((void *)0x0);
	iVar2 = 0;
	do {
		iVar2 = iVar2 + 1;
		PrintGameOver__Fv();
		TSK_Sleep(1);
	} while (iVar2 < 0x1e);
	pvVar1 = PaletteFadeOut__Fi(8);
	if (pvVar1 != (void *)0x0) {
		while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
			PrintGameOver__Fv();
			TSK_Sleep(1);
		}
	}
	GLUE_SuspendGame__Fv();
	GLUE_SetFinished__Fb(&DAT_00000001);
	TSK_Sleep(3);
	MAIN_RestartGameTask__Fv();
	GLUE_ResumeGame__Fv();
	PA_SetPauseOk__Fb(NewPause);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PrintGameOver__Fv()
 // line 126, offset 0x8007b63c
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x8007B63C
		// Variables:
	// 		struct Dialog PBack; // stack offset -32
	// 		struct RECT PRect; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007B708
	// End Line: 141

	/* begin block 2 */
		// Start line: 255
	/* end block 2 */
	// End Line: 256

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PrintGameOver__Fv(void)

{
	Dialog DStack32;
	RECT local_10;
	
	__6Dialog(&DStack32);
	SetRGB__6DialogUcUcUc(&DStack32,BORDERR,BORDERG,BORDERB);
	SetBack__6Dialogi(&DStack32,0xc6);
	SetBorder__6Dialogi(&DStack32,0x28);
	Back__6Dialogiiii(&DStack32,0x50,0x70,0xa0,0x10);
	local_10.x = 0x50;
	local_10.y = 0x70;
	local_10.w = 0xa0;
	local_10.h = 0x10;
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,0,10,"GAME OVER",JustCentre,&local_10,0xff,0xff,0xff);
	___6Dialog(&DStack32,2);
	return;
}





