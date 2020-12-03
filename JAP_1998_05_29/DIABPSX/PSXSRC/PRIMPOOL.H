#ifndef PRIMPOOL_H
#define PRIMPOOL_H


extern unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType); // 0x800837F4

extern unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize); // 0x80083910

extern void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth); // 0x800839EC

extern unsigned char PRIM_GetCurrentScreen__Fv(); // 0x80083B14

extern void PRIM_FullScreen__Fi(int Depth); // 0x80083B20

extern void PRIM_Flush__Fv(); // 0x80083B5C

extern unsigned long * PRIM_GetCurrentOtList__Fv(); // 0x80083D8C

extern void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb); // 0x80083D98

extern unsigned char ClearedYet__Fv(); // 0x80083DD4

extern void PrimDrawSycnCallBack(); // 0x80083DE0

extern void SendDispEnv__Fv(); // 0x80083E00

extern struct POLY_F4 * PRIM_GetNextPolyF4__Fv(); // 0x80083E24

extern struct POLY_FT4 * PRIM_GetNextPolyFt4__Fv(); // 0x80083E3C

extern struct POLY_GT4 * PRIM_GetNextPolyGt4__Fv(); // 0x80083E54

extern struct POLY_G4 * PRIM_GetNextPolyG4__Fv(); // 0x80083E6C

extern struct POLY_F3 * PRIM_GetNextPolyF3__Fv(); // 0x80083E84

extern struct DR_MODE * PRIM_GetNextDrArea__Fv(); // 0x80083E9C

extern void * ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip); // 0x80083EB4

extern void * IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect); // 0x80083FC8


extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x80091A40

extern void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim); // 0x80091B40

extern void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim); // 0x8009512C

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800951A8

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x80096640

extern void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim); // 0x800A07B4

extern void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim); // 0x800A0830

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800A08AC

extern void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim); // 0x800A4E38

extern void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim); // 0x800AB4B0

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800ACEA0

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800ADEB8

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800673B8

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x8007D4E4

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x8007ED78

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x80091BBC

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x800966F8

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x8007ED50

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x80091B04

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x800966BC

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x8007ED14


// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x80091a40
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80091A40
	/* end block 1 */
	// End offset: 0x80091AA8
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim /*$s0*/)
 // line 65, offset 0x80091b40
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80091B40
	/* end block 1 */
	// End offset: 0x80091BA8
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_GT4(POLY_GT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 0xd) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr[1].u0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim /*$s0*/)
 // line 65, offset 0x8009512c
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8009512C
	/* end block 1 */
	// End offset: 0x80095194
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_GT4(POLY_GT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 0xd) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr[1].u0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x800951a8
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800951A8
	/* end block 1 */
	// End offset: 0x80095210
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x80096640
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80096640
	/* end block 1 */
	// End offset: 0x800966A8
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim /*$s0*/)
 // line 65, offset 0x800a07b4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800A07B4
	/* end block 1 */
	// End offset: 0x800A081C
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP7POLY_G4(POLY_G4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 9) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->u3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim /*$s0*/)
 // line 65, offset 0x800a0830
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800A0830
	/* end block 1 */
	// End offset: 0x800A0898
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP7POLY_F4(POLY_F4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 6) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->x2;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x800a08ac
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800A08AC
	/* end block 1 */
	// End offset: 0x800A0914
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim /*$s0*/)
 // line 65, offset 0x800a4e38
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800A4E38
	/* end block 1 */
	// End offset: 0x800A4EA0
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_GetPrim__FPP7POLY_G4(POLY_G4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 9) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->u3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim /*$s0*/)
 // line 65, offset 0x800ab4b0
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800AB4B0
	/* end block 1 */
	// End offset: 0x800AB518
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_GetPrim__FPP7POLY_G4(POLY_G4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 9) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->u3;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x800acea0
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800ACEA0
	/* end block 1 */
	// End offset: 0x800ACF08
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x800adeb8
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800ADEB8
	/* end block 1 */
	// End offset: 0x800ADF20
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x800673b8
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800673B8
	/* end block 1 */
	// End offset: 0x80067420
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x8007d4e4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8007D4E4
	/* end block 1 */
	// End offset: 0x8007D54C
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x8007ed78
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8007ED78
	/* end block 1 */
	// End offset: 0x8007EDE0
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_FT4(POLY_FT4 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest /*$a0*/, struct POLY_FT4 *Source /*$a1*/)
 // line 75, offset 0x80091bbc
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x80091BBC
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x80091BBC
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x80091BDC
		// End Line: 81
	/* end block 1 */
	// End offset: 0x80091BDC
	// End Line: 81

	/* begin block 2 */
		// Start line: 178
	/* end block 2 */
	// End Line: 179

void PRIM_CopyPrim__FP8POLY_FT4T0(POLY_FT4 *Dest,POLY_FT4 *Source)

{
	ulong *puVar1;
	uint uVar2;
	
	uVar2 = 0;
	do {
		puVar1 = &Source->tag;
		Source = (POLY_FT4 *)&Source->r0;
		uVar2 = uVar2 + 1;
		Dest->tag = *puVar1;
		Dest = (POLY_FT4 *)&Dest->r0;
	} while (uVar2 < 10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest /*$a0*/, struct POLY_FT4 *Source /*$a1*/)
 // line 75, offset 0x800966f8
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x800966F8
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x800966F8
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x80096718
		// End Line: 81
	/* end block 1 */
	// End offset: 0x80096718
	// End Line: 81

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

void PRIM_CopyPrim__FP8POLY_FT4T0(POLY_FT4 *Dest,POLY_FT4 *Source)

{
	ulong *puVar1;
	uint uVar2;
	
	uVar2 = 0;
	do {
		puVar1 = &Source->tag;
		Source = (POLY_FT4 *)&Source->r0;
		uVar2 = uVar2 + 1;
		Dest->tag = *puVar1;
		Dest = (POLY_FT4 *)&Dest->r0;
	} while (uVar2 < 10);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest /*$a0*/, struct POLY_FT4 *Source /*$a1*/)
 // line 75, offset 0x8007ed50
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x8007ED50
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x8007ED50
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8007ED70
		// End Line: 81
	/* end block 1 */
	// End offset: 0x8007ED70
	// End Line: 81

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

void PRIM_CopyPrim__FP8POLY_FT4T0(POLY_FT4 *Dest,POLY_FT4 *Source)

{
	ulong *puVar1;
	uint uVar2;
	
	uVar2 = 0;
	do {
		puVar1 = &Source->tag;
		Source = (POLY_FT4 *)&Source->r0;
		uVar2 = uVar2 + 1;
		Dest->tag = *puVar1;
		Dest = (POLY_FT4 *)&Dest->r0;
	} while (uVar2 < 10);
	return;
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim /*$s0*/)
 // line 84, offset 0x80091b04
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x80091B04
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x80091B2C
	// End Line: 90

	/* begin block 2 */
		// Start line: 168
	/* end block 2 */
	// End Line: 169

POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(POLY_FT4 *Prim)

{
	POLY_FT4 *local_10 [2];
	
	PRIM_GetPrim__FPP8POLY_FT4(local_10);
	PRIM_CopyPrim__FP8POLY_FT4T0(local_10[0],Prim);
	return local_10[0];
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim /*$s0*/)
 // line 84, offset 0x800966bc
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800966BC
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x800966E4
	// End Line: 90

	/* begin block 2 */
		// Start line: 171
	/* end block 2 */
	// End Line: 172

POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(POLY_FT4 *Prim)

{
	POLY_FT4 *local_10 [2];
	
	PRIM_GetPrim__FPP8POLY_FT4(local_10);
	PRIM_CopyPrim__FP8POLY_FT4T0(local_10[0],Prim);
	return local_10[0];
}



// decompiled code
// original method signature: 
// struct POLY_FT4 * /*$ra*/ PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim /*$s0*/)
 // line 84, offset 0x8007ed14
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8007ED14
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x8007ED3C
	// End Line: 90

	/* begin block 2 */
		// Start line: 168
	/* end block 2 */
	// End Line: 169

POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(POLY_FT4 *Prim)

{
	POLY_FT4 *local_10 [2];
	
	PRIM_GetPrim__FPP8POLY_FT4(local_10);
	PRIM_CopyPrim__FP8POLY_FT4T0(local_10[0],Prim);
	return local_10[0];
}





#endif
