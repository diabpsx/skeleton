#include "THISDUST.H"
#include "GUTILS.H"


// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GU_InitModule()
 // line 55, offset 0x80020c98
	/* begin block 1 */
		// Start line: 110
	/* end block 1 */
	// End Line: 111

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar GU_InitModule(void)

{
	GU_SetRndSeed(DefaultRnd);
	return '\x01';
}



// decompiled code
// original method signature: 
// void /*$ra*/ GU_SetRndSeed(unsigned long *Tab /*$a0*/)
 // line 65, offset 0x80020cc4
	/* begin block 1 */
		// Start line: 67
		// Start offset: 0x80020CC4
		// Variables:
	// 		int f; // $a1
	/* end block 1 */
	// End offset: 0x80020CEC
	// End Line: 71

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GU_SetRndSeed(ulong *Tab)

{
	ulong uVar1;
	ulong *puVar2;
	int iVar3;
	
	iVar3 = 0;
	puVar2 = &RndTabs;
	do {
		uVar1 = *Tab;
		Tab = Tab + 1;
		iVar3 = iVar3 + 1;
		*puVar2 = uVar1;
		puVar2 = puVar2 + 1;
	} while (iVar3 < 6);
	return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GU_GetRnd()
 // line 76, offset 0x80020cf4
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x80020CF4
		// Variables:
	// 		unsigned long RetVal; // $a2
	/* end block 1 */
	// End offset: 0x80020D7C
	// End Line: 96

	/* begin block 2 */
		// Start line: 157
	/* end block 2 */
	// End Line: 158

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GU_GetRnd(void)

{
	ulong uVar1;
	uint uVar2;
	
	ULONG_801351fc = ULONG_801351f8;
	uVar1 = ULONG_801351f4;
	ULONG_801351f4 = ULONG_801351f0;
	ULONG_801351f0 = ULONG_801351ec;
	uVar2 = ULONG_801351ec + ULONG_801351f8;
	if ((uVar2 < ULONG_801351ec) && (uVar2 < ULONG_801351f8)) {
		uVar2 = uVar2 + 1;
	}
	RndTabs = uVar2 + 1;
	ULONG_801351ec = RndTabs;
	ULONG_801351f8 = uVar1;
	return RndTabs;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GU_GetSRnd()
 // line 103, offset 0x80020d84
	/* begin block 1 */
		// Start line: 219
	/* end block 1 */
	// End Line: 220

/* WARNING: Unknown calling convention yet parameter storage is locked */

long GU_GetSRnd(void)

{
	ulong uVar1;
	
	uVar1 = GU_GetRnd();
	return uVar1;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ GU_GetRndRange(unsigned int Range /*$s0*/)
 // line 114, offset 0x80020da4
	/* begin block 1 */
		// Start line: 241
	/* end block 1 */
	// End Line: 242

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong GU_GetRndRange(uint Range)

{
	ulong uVar1;
	
	uVar1 = GU_GetRnd();
	if (Range == 0) {
		trap(0x1c00);
	}
	return uVar1 % Range;
}



// decompiled code
// original method signature: 
// unsigned int /*$ra*/ GU_AlignVal(unsigned int w /*$a0*/, unsigned int round /*$a1*/)
 // line 126, offset 0x80020de0
	/* begin block 1 */
		// Start line: 266
	/* end block 1 */
	// End Line: 267

/* WARNING: Unknown calling convention yet parameter storage is locked */

uint GU_AlignVal(uint w,uint round)

{
	uint uVar1;
	
	uVar1 = (w - 1) + round;
	if (round == 0) {
		trap(0x1c00);
	}
	return uVar1 - uVar1 % round;
}





