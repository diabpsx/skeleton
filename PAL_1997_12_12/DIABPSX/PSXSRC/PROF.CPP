#include "THISDUST.H"
#include "PROF.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PROF_Open__Fv()
 // line 87, offset 0x8008cfd8
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x8008CFD8
	/* end block 1 */
	// End offset: 0x8008D008
	// End Line: 95

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_Open__Fv(void)

{
	TimePerFrame = GTIMSYS_InitTimer();
	PROF_Restart__Fv();
	ProfOn = (void *)0x0;
	CpuStart = 0;
	CpuTime = 0;
	DrawTime = 0;
	DrawStart = 0;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PROF_State__Fv()
 // line 99, offset 0x8008d018
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x8008D018
	/* end block 1 */
	// End offset: 0x8008D01C
	// End Line: 101

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * PROF_State__Fv(void)

{
	return ProfOn;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_On__Fv()
 // line 104, offset 0x8008d024
	/* begin block 1 */
		// Start line: 105
		// Start offset: 0x8008D024
	/* end block 1 */
	// End offset: 0x8008D02C
	// End Line: 106

	/* begin block 2 */
		// Start line: 209
	/* end block 2 */
	// End Line: 210

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_On__Fv(void)

{
	ProfOn = &DAT_00000001;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_Off__Fv()
 // line 109, offset 0x8008d034
	/* begin block 1 */
		// Start line: 110
		// Start offset: 0x8008D034
	/* end block 1 */
	// End offset: 0x8008D038
	// End Line: 111

	/* begin block 2 */
		// Start line: 219
	/* end block 2 */
	// End Line: 220

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_Off__Fv(void)

{
	ProfOn = (void *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_CpuEnd__Fv()
 // line 114, offset 0x8008d040
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x8008D040
	/* end block 1 */
	// End offset: 0x8008D060
	// End Line: 116

	/* begin block 2 */
		// Start line: 228
	/* end block 2 */
	// End Line: 229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_CpuEnd__Fv(void)

{
	ulong uVar1;
	
	uVar1 = GTIMSYS_GetTimer();
	CpuTime = uVar1 - CpuStart;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_CpuStart__Fv()
 // line 119, offset 0x8008d070
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8008D070
	/* end block 1 */
	// End offset: 0x8008D084
	// End Line: 121

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_CpuStart__Fv(void)

{
	CpuStart = GTIMSYS_GetTimer();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_DrawStart__Fv()
 // line 124, offset 0x8008d094
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x8008D094
	/* end block 1 */
	// End offset: 0x8008D0A8
	// End Line: 126

	/* begin block 2 */
		// Start line: 248
	/* end block 2 */
	// End Line: 249

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_DrawStart__Fv(void)

{
	DrawStart = GTIMSYS_GetTimer();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_DrawEnd__Fv()
 // line 129, offset 0x8008d0b8
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8008D0B8
	/* end block 1 */
	// End offset: 0x8008D0D8
	// End Line: 131

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_DrawEnd__Fv(void)

{
	ulong uVar1;
	
	uVar1 = GTIMSYS_GetTimer();
	DrawTime = uVar1 - DrawStart;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_Draw__FPUl(unsigned long *Ot /*$fp*/)
 // line 134, offset 0x8008d0e8
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x8008D0E8

		/* begin block 1.1 */
			// Start line: 135
			// Start offset: 0x8008D0E8

			/* begin block 1.1.1 */
				// Start line: 137
				// Start offset: 0x8008D120
				// Variables:
			// 		struct POLY_F4 *F4; // $v0
			// 		int XCent; // $s6

				/* begin block 1.1.1.1 */
					// Start line: 141
					// Start offset: 0x8008D120
					// Variables:
				// 		int f; // $s7

					/* begin block 1.1.1.1.1 */
						// Start line: 164
						// Start offset: 0x8008D230
						// Variables:
					// 		struct POLY_F3 *F3; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008D23C
					// End Line: 168
				/* end block 1.1.1.1 */
				// End offset: 0x8008D2A8
				// End Line: 175
			/* end block 1.1.1 */
			// End offset: 0x8008D2A8
			// End Line: 175
		/* end block 1.1 */
		// End offset: 0x8008D2A8
		// End Line: 175
	/* end block 1 */
	// End offset: 0x8008D2A8
	// End Line: 175

	/* begin block 2 */
		// Start line: 269
	/* end block 2 */
	// End Line: 270

void PROF_Draw__FPUl(ulong *Ot)

{
	byte bVar1;
	POLY_F4 *pPVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (ProfOn != (void *)0x0) {
		iVar7 = (CpuTime * 0x46) / TimePerFrame;
		sVar5 = 0x14;
		iVar8 = (DrawTime * 0x46) / TimePerFrame;
		iVar6 = 0;
		pPVar2 = PRIM_GetNextPolyF4__Fv();
		pPVar2->y0 = 0x1e;
		pPVar2->y1 = 0x1e;
		pPVar2->code = '(';
		pPVar2->y2 = 0x20;
		pPVar2->y3 = 0x20;
		bVar1 = pPVar2->code;
		*(undefined *)((int)&pPVar2->tag + 3) = 5;
		pPVar2->x0 = 0x14;
		pPVar2->x2 = 0x14;
		pPVar2->r0 = -1;
		pPVar2->g0 = '\0';
		pPVar2->b0 = '\0';
		pPVar2->code = bVar1 | 2;
		sVar4 = (short)iVar7 + 0x14;
		pPVar2->x1 = sVar4;
		pPVar2->x3 = sVar4;
		AddPrim(Ot,(uint *)pPVar2);
		sVar4 = (short)iVar8 + 0x14;
		pPVar2 = PRIM_GetNextPolyF4__Fv();
		pPVar2->code = '(';
		bVar1 = pPVar2->code;
		pPVar2->y0 = 0x22;
		pPVar2->y1 = 0x22;
		*(undefined *)((int)&pPVar2->tag + 3) = 5;
		pPVar2->x0 = 0x14;
		pPVar2->x2 = 0x14;
		pPVar2->y2 = 0x24;
		pPVar2->y3 = 0x24;
		pPVar2->r0 = '\0';
		pPVar2->g0 = -1;
		pPVar2->b0 = '\0';
		pPVar2->code = bVar1 | 2;
		pPVar2->x1 = sVar4;
		pPVar2->x3 = sVar4;
		while (AddPrim(Ot,(uint *)pPVar2), iVar6 < 5) {
			iVar6 = iVar6 + 1;
			pPVar2 = (POLY_F4 *)PRIM_GetNextPolyF3__Fv();
			sVar4 = sVar5 + -2;
			sVar3 = sVar5 + 2;
			pPVar2->x2 = sVar5;
			sVar5 = sVar5 + 0x46;
			*(undefined *)((int)&pPVar2->tag + 3) = 4;
			pPVar2->code = ' ';
			pPVar2->x0 = sVar4;
			pPVar2->y0 = 0x1c;
			pPVar2->b0 = -1;
			pPVar2->r0 = '\0';
			pPVar2->g0 = '\0';
			pPVar2->x1 = sVar3;
			pPVar2->y1 = 0x1c;
			pPVar2->y2 = 0x1e;
			pPVar2->code = pPVar2->code | 2;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PROF_Restart__Fv()
 // line 179, offset 0x8008d2dc
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x8008D2DC
	/* end block 1 */
	// End offset: 0x8008D2EC
	// End Line: 181

	/* begin block 2 */
		// Start line: 409
	/* end block 2 */
	// End Line: 410

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PROF_Restart__Fv(void)

{
	GTIMSYS_ResetTimer();
	return;
}





