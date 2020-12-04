#include "THISDUST.H"
#include "GTIMSYS.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GTIMSYS_GetTimer()
 // line 52, offset 0x8001e994
	/* begin block 1 */
		// Start line: 104
	/* end block 1 */
	// End Line: 105

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GTIMSYS_GetTimer(void)

{
	uint uVar1;
	
	uVar1 = GetRCnt(0xf2000001);
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GTIMSYS_ResetTimer()
 // line 57, offset 0x8001e9b8
	/* begin block 1 */
		// Start line: 114
	/* end block 1 */
	// End Line: 115

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GTIMSYS_ResetTimer(void)

{
	ResetRCnt(0xf2000001);
	return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GTIMSYS_InitTimer()
 // line 63, offset 0x8001e9dc
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x8001E9DC
		// Variables:
	// 		int f; // $s1
	// 		unsigned long Total; // $s0
	/* end block 1 */
	// End offset: 0x8001EA88
	// End Line: 92

	/* begin block 2 */
		// Start line: 126
	/* end block 2 */
	// End Line: 127

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GTIMSYS_InitTimer(void)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	
	EnterCriticalSection();
	SetRCnt(0xf2000001,0xffff,0x2000);
	StartRCnt(0xf2000001);
	ResetRCnt(0xf2000001);
	uVar2 = 0;
	ExitCriticalSection();
	iVar3 = 0;
	do {
		VSync(0);
		ResetRCnt(0xf2000001);
		VSync(0);
		uVar1 = GetRCnt(0xf2000001);
		uVar2 = uVar2 + uVar1;
		iVar3 = iVar3 + 1;
	} while (iVar3 < 10);
	DBG_SendMessage("tff %ld");
	return uVar2 / 10;
}





