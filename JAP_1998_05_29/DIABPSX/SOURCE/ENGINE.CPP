#include "THISDUST.H"
#include "ENGINE.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetDirection__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 45, offset 0x8003da28
	/* begin block 1 */
		// Start line: 46
		// Start offset: 0x8003DA28
		// Variables:
	// 		int mx; // $a2
	// 		int my; // $a3
	// 		int md; // $v1
	/* end block 1 */
	// End offset: 0x8003DAC4
	// End Line: 76

	/* begin block 2 */
		// Start line: 93
	/* end block 2 */
	// End Line: 94

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetDirection__Fiiii(int x1,int y1,int x2,int y2)

{
	uint uVar1;
	
	x2 = x2 - x1;
	y2 = y2 - y1;
	if (x2 < 0) {
		if (y2 < 0) {
			y2 = -y2;
			uVar1 = 4;
			if (x2 * -2 < y2) {
				uVar1 = 5;
			}
		}
		else {
			uVar1 = 2;
			if (x2 * -2 < y2) {
				uVar1 = 1;
			}
		}
		if (y2 << 1 < -x2) {
			uVar1 = 3;
		}
	}
	else {
		if (y2 < 0) {
			y2 = -y2;
			uVar1 = 6;
			if (x2 * 2 < y2) {
				uVar1 = 5;
			}
		}
		else {
			uVar1 = (uint)(x2 * 2 < y2);
		}
		if (y2 << 1 < x2) {
			uVar1 = 7;
		}
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetRndSeed__Fl(long s /*$a0*/)
 // line 94, offset 0x8003dacc
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x8003DACC
	/* end block 1 */
	// End offset: 0x8003DAD4
	// End Line: 98

	/* begin block 2 */
		// Start line: 189
	/* end block 2 */
	// End Line: 190

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetRndSeed__Fl(long s)

{
	SeedCount = 0;
	sglGameSeed = s;
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetRndSeed__Fv()
 // line 102, offset 0x8003dadc
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x8003DADC
	/* end block 1 */
	// End offset: 0x8003DB14
	// End Line: 108

	/* begin block 2 */
		// Start line: 208
	/* end block 2 */
	// End Line: 209

/* WARNING: Unknown calling convention yet parameter storage is locked */

long GetRndSeed__Fv(void)

{
	int iVar1;
	
	SeedCount = SeedCount + 1;
	sglGameSeed = sglGameSeed * 0x15a4e35 + 1;
	iVar1 = abs(sglGameSeed);
	return iVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ ENG_random__Fl(long v /*$s0*/)
 // line 113, offset 0x8003db24
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x8003DB24
	/* end block 1 */
	// End offset: 0x8003DB7C
	// End Line: 120

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

/* WARNING: Unknown calling convention yet parameter storage is locked */

long ENG_random__Fl(long v)

{
	long lVar1;
	
	if (v < 1) {
		lVar1 = 0;
	}
	else {
		if (v < 0xffff) {
			lVar1 = GetRndSeed__Fv();
			lVar1 = (lVar1 >> 0x10) % v;
		}
		else {
			lVar1 = GetRndSeed__Fv();
			lVar1 = lVar1 % v;
		}
	}
	return lVar1;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ DiabloAllocPtr__FUl(unsigned long dwBytes /*$s0*/)
 // line 371, offset 0x8003db90
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x8003DB90
	/* end block 1 */
	// End offset: 0x8003DBC8
	// End Line: 422

	/* begin block 2 */
		// Start line: 746
	/* end block 2 */
	// End Line: 747

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar * DiabloAllocPtr__FUl(ulong dwBytes)

{
	uchar *puVar1;
	
	Enter__9CCritSect(&sgMemCrit);
	puVar1 = (uchar *)SMemAlloc(dwBytes,"source/ENGINE.cpp",0x181,0);
	return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mem_free_dbg__FPv(void *p /*$s0*/)
 // line 432, offset 0x8003dbdc
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x8003DBDC
	/* end block 1 */
	// End offset: 0x8003DC18
	// End Line: 467

	/* begin block 2 */
		// Start line: 872
	/* end block 2 */
	// End Line: 873

/* WARNING: Unknown calling convention yet parameter storage is locked */

void mem_free_dbg__FPv(void *p)

{
	if (p != (void *)0x0) {
		Enter__9CCritSect(&sgMemCrit);
		SMemFree(p,"source/ENGINE.cpp",0x1d2,0);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ LoadFileInMem__FPCcPUl(char *pszName /*$a0*/, unsigned long *pdwFileLen /*$a1*/)
 // line 490, offset 0x8003dc2c
	/* begin block 1 */
		// Start line: 491
		// Start offset: 0x8003DC2C
	/* end block 1 */
	// End offset: 0x8003DC2C
	// End Line: 501

	/* begin block 2 */
		// Start line: 998
	/* end block 2 */
	// End Line: 999

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar * LoadFileInMem__FPCcPUl(char *pszName,ulong *pdwFileLen)

{
	return (uchar *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayInGameMovie__FPCc(char *pszMovie /*$a0*/)
 // line 568, offset 0x8003dc34
	/* begin block 1 */
		// Start line: 569
		// Start offset: 0x8003DC34
	/* end block 1 */
	// End offset: 0x8003DC34
	// End Line: 569

	/* begin block 2 */
		// Start line: 1163
	/* end block 2 */
	// End Line: 1164

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PlayInGameMovie__FPCc(char *pszMovie)

{
	return;
}





