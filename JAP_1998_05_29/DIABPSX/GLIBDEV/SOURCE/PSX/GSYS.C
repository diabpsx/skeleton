#include "THISDUST.H"
#include "GSYS.H"


// decompiled code
// original method signature: 
// struct MEM_INFO * /*$ra*/ GSYS_GetWorkMemInfo()
 // line 74, offset 0x8002116c
	/* begin block 1 */
		// Start line: 149
	/* end block 1 */
	// End Line: 150

/* WARNING: Unknown calling convention yet parameter storage is locked */

MEM_INFO * GSYS_GetWorkMemInfo(void)

{
	return &WorkMemInfo;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GSYS_SetStackAndJump(void *Stack /*$a0*/, TDRFuncPtr_GSYS_SetStackAndJump1Func Func /*$s1*/, void *Param /*$s0*/)
 // line 89, offset 0x8002117c
	/* begin block 1 */
		// Start line: 178
	/* end block 1 */
	// End Line: 179

void GSYS_SetStackAndJump(void *Stack,TDRFuncPtr_GSYS_SetStackAndJump1Func Func,void *Param)

{
	SetSp();
	(*Func)(Param);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GSYS_MarkStack(void *Stack /*$a0*/, unsigned long StackSize /*$a1*/)
 // line 110, offset 0x800211b8
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x800211B8
	/* end block 1 */
	// End offset: 0x800211C0
	// End Line: 116

	/* begin block 2 */
		// Start line: 224
	/* end block 2 */
	// End Line: 225

void GSYS_MarkStack(void *Stack,ulong StackSize)

{
	*(undefined4 *)Stack = 0xabcd0123;
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GSYS_IsStackCorrupted(void *Stack /*$a0*/, unsigned long StackSize /*$a1*/)
 // line 130, offset 0x800211c8
	/* begin block 1 */
		// Start line: 132
		// Start offset: 0x800211C8
	/* end block 1 */
	// End offset: 0x800211D8
	// End Line: 136

	/* begin block 2 */
		// Start line: 264
	/* end block 2 */
	// End Line: 265

uchar GSYS_IsStackCorrupted(void *Stack,ulong StackSize)

{
	return (uchar)(*(int *)Stack != -0x5432fedd);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GSYS_InitMachine()
 // line 147, offset 0x800211e0
	/* begin block 1 */
		// Start line: 294
	/* end block 1 */
	// End Line: 295

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar GSYS_InitMachine(void)

{
	ResetCallback();
	WorkMemInfo.Addr = &hahha;
	WorkMemInfo.Size = (GSYS_MemEnd + 0x7fe9c1e0) - (int)_stacksize;
	return '\x01';
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GSYS_CheckPtr(void *Ptr /*$a0*/)
 // line 170, offset 0x80021234
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x80021234
	/* end block 1 */
	// End offset: 0x80021260
	// End Line: 185

	/* begin block 2 */
		// Start line: 349
	/* end block 2 */
	// End Line: 350

uchar GSYS_CheckPtr(void *Ptr)

{
	LastPtr = Ptr;
	return (uchar)(GSYS_MemStart <= Ptr && Ptr < GSYS_MemEnd);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ GSYS_IsStackOutOfBounds(void *Stack /*$s0*/, unsigned long StackSize /*$s1*/)
 // line 195, offset 0x80021268
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x80021268
		// Variables:
	// 		unsigned long ThisSp; // $v1
	/* end block 1 */
	// End offset: 0x800212AC
	// End Line: 200

	/* begin block 2 */
		// Start line: 396
	/* end block 2 */
	// End Line: 397

uchar GSYS_IsStackOutOfBounds(void *Stack,ulong StackSize)

{
	uchar uVar1;
	void *pvVar2;
	
	pvVar2 = (void *)GetSp();
	if ((pvVar2 < Stack) || (uVar1 = '\0', (void *)((int)Stack + StackSize) <= pvVar2)) {
		uVar1 = '\x01';
	}
	return uVar1;
}





