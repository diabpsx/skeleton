#include "THISDUST.H"
#include "DECOMP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td /*$s2*/)
 // line 71, offset 0x800a4384
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x800A4384
		// Variables:
	// 		int TdIndex; // $s0
	/* end block 1 */
	// End offset: 0x800A43E4
	// End Line: 81

	/* begin block 2 */
		// Start line: 142
	/* end block 2 */
	// End Line: 143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEC_AddAsDecRequestor__FP7TextDat(TextDat *Td)

{
	int iVar1;
	
	iVar1 = FindThisTd__FP7TextDat(Td);
	if (iVar1 == -1) {
		iVar1 = FindEmptyIndex__Fv();
		if (iVar1 == -1) {
			DBG_Error((char *)0x0,"psxsrc/DECOMP.CPP",0x4f);
		}
		(&DecRequestors10)[iVar1] = Td;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td /*$a0*/)
 // line 90, offset 0x800a4400
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x800A4400
		// Variables:
	// 		int TdIndex; // $s0
	/* end block 1 */
	// End offset: 0x800A4444
	// End Line: 95

	/* begin block 2 */
		// Start line: 180
	/* end block 2 */
	// End Line: 181

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEC_RemoveAsDecRequestor__FP7TextDat(TextDat *Td)

{
	int iVar1;
	
	iVar1 = FindThisTd__FP7TextDat(Td);
	if (iVar1 == -1) {
		DBG_Error((char *)0x0,"psxsrc/DECOMP.CPP",0x5d);
	}
	(&DecRequestors10)[iVar1] = (TextDat *)0x0;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DEC_DoDecompRequests__Fv()
 // line 102, offset 0x800a4458
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x800A4458

		/* begin block 1.1 */
			// Start line: 103
			// Start offset: 0x800A4458
			// Variables:
		// 		int f; // $s1
		/* end block 1.1 */
		// End offset: 0x800A449C
		// End Line: 108
	/* end block 1 */
	// End offset: 0x800A449C
	// End Line: 108

	/* begin block 2 */
		// Start line: 204
	/* end block 2 */
	// End Line: 205

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DEC_DoDecompRequests__Fv(void)

{
	TextDat **ppTVar1;
	int iVar2;
	
	iVar2 = 0;
	ppTVar1 = &DecRequestors10;
	do {
		if (*ppTVar1 != (TextDat *)0x0) {
			DoDecompRequests__7TextDat(*ppTVar1);
		}
		iVar2 = iVar2 + 1;
		ppTVar1 = ppTVar1 + 1;
	} while (iVar2 < 10);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindThisTd__FP7TextDat(struct TextDat *Td /*$a0*/)
 // line 116, offset 0x800a44b4
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x800A44B4

		/* begin block 1.1 */
			// Start line: 118
			// Start offset: 0x800A44B4
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x800A44E0
		// End Line: 122
	/* end block 1 */
	// End offset: 0x800A44E4
	// End Line: 123

	/* begin block 2 */
		// Start line: 235
	/* end block 2 */
	// End Line: 236

/* WARNING: Unknown calling convention yet parameter storage is locked */

int FindThisTd__FP7TextDat(TextDat *Td)

{
	int iVar1;
	TextDat **ppTVar2;
	
	iVar1 = 0;
	ppTVar2 = &DecRequestors10;
	do {
		if (*ppTVar2 == Td) {
			return iVar1;
		}
		iVar1 = iVar1 + 1;
		ppTVar2 = ppTVar2 + 1;
	} while (iVar1 < 10);
	return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindEmptyIndex__Fv()
 // line 130, offset 0x800a44ec
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x800A44EC

		/* begin block 1.1 */
			// Start line: 132
			// Start offset: 0x800A44EC
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x800A4518
		// End Line: 136
	/* end block 1 */
	// End offset: 0x800A451C
	// End Line: 137

	/* begin block 2 */
		// Start line: 263
	/* end block 2 */
	// End Line: 264

/* WARNING: Unknown calling convention yet parameter storage is locked */

int FindEmptyIndex__Fv(void)

{
	int iVar1;
	TextDat **ppTVar2;
	
	iVar1 = 0;
	ppTVar2 = &DecRequestors10;
	do {
		if (*ppTVar2 == (TextDat *)0x0) {
			return iVar1;
		}
		iVar1 = iVar1 + 1;
		ppTVar2 = ppTVar2 + 1;
	} while (iVar1 < 10);
	return -1;
}





