#ifndef PRIMPOOL_H
#define PRIMPOOL_H


extern unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType); // 0x8007BF68

extern unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize); // 0x8007C084

extern void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth); // 0x8007C160

extern unsigned char PRIM_GetCurrentScreen__Fv(); // 0x8007C288

extern void PRIM_FullScreen__Fi(int Depth); // 0x8007C294

extern void PRIM_Flush__Fv(); // 0x8007C2D0

extern unsigned long * PRIM_GetCurrentOtList__Fv(); // 0x8007C4E4

extern void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb); // 0x8007C4F0

extern unsigned char ClearedYet__Fv(); // 0x8007C52C

extern void PrimDrawSycnCallBack(); // 0x8007C538

extern void SendDispEnv__Fv(); // 0x8007C558

extern struct POLY_F4 * PRIM_GetNextPolyF4__Fv(); // 0x8007C57C

extern struct POLY_FT4 * PRIM_GetNextPolyFt4__Fv(); // 0x8007C594

extern struct POLY_GT4 * PRIM_GetNextPolyGt4__Fv(); // 0x8007C5AC

extern struct POLY_G4 * PRIM_GetNextPolyG4__Fv(); // 0x8007C5C4

extern struct POLY_F3 * PRIM_GetNextPolyF3__Fv(); // 0x8007C5DC

extern struct DR_MODE * PRIM_GetNextDrArea__Fv(); // 0x8007C5F4

extern void * ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip); // 0x8007C60C

extern void * IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect); // 0x8007C720


extern void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim); // 0x80081178

extern void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim); // 0x800811F4

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x80081270

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x8008B65C

extern void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim); // 0x8008B7A4

extern void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim); // 0x8008B820

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x8008CDD8

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x80093F54

extern void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim); // 0x800961DC

extern void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim); // 0x80096258

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800962D4

extern void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim); // 0x8009A340

extern void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim); // 0x8009E260

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x8009F97C

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x800A0670

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x80060FEC

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x8007598C

extern void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim); // 0x80077BB8

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x8008B89C

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x8008CE90

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x80093F2C

extern void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source); // 0x80077B90

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x8008B720

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x8008CE54

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x80093EF0

extern struct POLY_FT4 * PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim); // 0x80077B54


// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim /*$s0*/)
 // line 65, offset 0x80081178
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80081178
	/* end block 1 */
	// End offset: 0x800811E0
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP8POLY_GT3(POLY_GT3 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 10) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = ThisPrimAddr + 1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim /*$s0*/)
 // line 65, offset 0x800811f4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800811F4
	/* end block 1 */
	// End offset: 0x8008125C
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
 // line 65, offset 0x80081270
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80081270
	/* end block 1 */
	// End offset: 0x800812D8
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
 // line 65, offset 0x8008b65c
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8008B65C
	/* end block 1 */
	// End offset: 0x8008B6C4
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
 // line 65, offset 0x8008b7a4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8008B7A4
	/* end block 1 */
	// End offset: 0x8008B80C
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
// void /*$ra*/ PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim /*$s0*/)
 // line 65, offset 0x8008b820
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8008B820
	/* end block 1 */
	// End offset: 0x8008B888
	// End Line: 72

	/* begin block 2 */
		// Start line: 133
	/* end block 2 */
	// End Line: 134

void PRIM_GetPrim__FPP7LINE_F2(LINE_F2 **Prim)

{
	if (AddrToAvoid <= ThisPrimAddr + 4) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*(POLY_FT4 **)Prim = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->x1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x8008cdd8
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8008CDD8
	/* end block 1 */
	// End offset: 0x8008CE40
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
 // line 65, offset 0x80093f54
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80093F54
	/* end block 1 */
	// End offset: 0x80093FBC
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
 // line 65, offset 0x800961dc
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800961DC
	/* end block 1 */
	// End offset: 0x80096244
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
 // line 65, offset 0x80096258
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80096258
	/* end block 1 */
	// End offset: 0x800962C0
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
 // line 65, offset 0x800962d4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800962D4
	/* end block 1 */
	// End offset: 0x8009633C
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
 // line 65, offset 0x8009a340
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8009A340
	/* end block 1 */
	// End offset: 0x8009A3A8
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
// void /*$ra*/ PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim /*$s0*/)
 // line 65, offset 0x8009e260
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8009E260
	/* end block 1 */
	// End offset: 0x8009E2C8
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
// void /*$ra*/ PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim /*$s0*/)
 // line 65, offset 0x8009f97c
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8009F97C
	/* end block 1 */
	// End offset: 0x8009F9E4
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
 // line 65, offset 0x800a0670
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x800A0670
	/* end block 1 */
	// End offset: 0x800A06D8
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
 // line 65, offset 0x80060fec
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80060FEC
	/* end block 1 */
	// End offset: 0x80061054
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
 // line 65, offset 0x8007598c
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8007598C
	/* end block 1 */
	// End offset: 0x800759F4
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
 // line 65, offset 0x80077bb8
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80077BB8
	/* end block 1 */
	// End offset: 0x80077C20
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
 // line 75, offset 0x8008b89c
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x8008B89C
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x8008B89C
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8008B8BC
		// End Line: 81
	/* end block 1 */
	// End offset: 0x8008B8BC
	// End Line: 81

	/* begin block 2 */
		// Start line: 163
	/* end block 2 */
	// End Line: 164

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
 // line 75, offset 0x8008ce90
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x8008CE90
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x8008CE90
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8008CEB0
		// End Line: 81
	/* end block 1 */
	// End offset: 0x8008CEB0
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
 // line 75, offset 0x80093f2c
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x80093F2C
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x80093F2C
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x80093F4C
		// End Line: 81
	/* end block 1 */
	// End offset: 0x80093F4C
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
 // line 75, offset 0x80077b90
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x80077B90
		// Variables:
	// 		unsigned long *Dest32; // $a0
	// 		unsigned long *Source32; // $a1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x80077B90
			// Variables:
		// 		unsigned int f; // $v1
		/* end block 1.1 */
		// End offset: 0x80077BB0
		// End Line: 81
	/* end block 1 */
	// End offset: 0x80077BB0
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
 // line 84, offset 0x8008b720
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8008B720
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x8008B748
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
 // line 84, offset 0x8008ce54
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8008CE54
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x8008CE7C
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
 // line 84, offset 0x80093ef0
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x80093EF0
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x80093F18
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
 // line 84, offset 0x80077b54
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x80077B54
		// Variables:
	// 		struct POLY_FT4 *RetPrim; // stack offset -16
	/* end block 1 */
	// End offset: 0x80077B7C
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
