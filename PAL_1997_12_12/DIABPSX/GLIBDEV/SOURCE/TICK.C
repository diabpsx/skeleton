#include "THISDUST.H"
#include "TICK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TICK_InitModule()
 // line 32, offset 0x8001e698
	/* begin block 1 */
		// Start line: 64
	/* end block 1 */
	// End Line: 65

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TICK_InitModule(void)

{
	TICK_Set(0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TICK_Set(unsigned long Val /*$a0*/)
 // line 41, offset 0x8001e6b8
	/* begin block 1 */
		// Start line: 83
	/* end block 1 */
	// End Line: 84

void TICK_Set(ulong Val)

{
	GazTick = Val;
	return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ TICK_Get()
 // line 49, offset 0x8001e6c8
	/* begin block 1 */
		// Start line: 99
	/* end block 1 */
	// End Line: 100

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong TICK_Get(void)

{
	return GazTick;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TICK_Update()
 // line 58, offset 0x8001e6d8
	/* begin block 1 */
		// Start line: 117
	/* end block 1 */
	// End Line: 118

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TICK_Update(void)

{
	GazTick = GazTick + 1;
	return;
}



// decompiled code
// original method signature: 
// unsigned long /*$ra*/ TICK_GetAge(unsigned long OldTick /*$s0*/)
 // line 66, offset 0x8001e6f8
	/* begin block 1 */
		// Start line: 132
	/* end block 1 */
	// End Line: 133

ulong TICK_GetAge(ulong OldTick)

{
	ulong uVar1;
	
	uVar1 = TICK_Get();
	return uVar1 - OldTick;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ TICK_GetDateString()
 // line 71, offset 0x8001e724
	/* begin block 1 */
		// Start line: 143
	/* end block 1 */
	// End Line: 144

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * TICK_GetDateString(void)

{
	return "Sep  9 1997";
}



// decompiled code
// original method signature: 
// char * /*$ra*/ TICK_GetTimeString()
 // line 76, offset 0x8001e734
	/* begin block 1 */
		// Start line: 153
	/* end block 1 */
	// End Line: 154

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * TICK_GetTimeString(void)

{
	return "10:35:18";
}





