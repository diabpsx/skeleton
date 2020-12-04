#include "THISDUST.H"
#include "ENGINE.H"


// decompiled code
// original method signature: 
// int /*$ra*/ GetDirection__Fiiii(int x1 /*$a0*/, int y1 /*$a1*/, int x2 /*$a2*/, int y2 /*$a3*/)
 // line 45, offset 0x8003a788
	/* begin block 1 */
		// Start line: 46
		// Start offset: 0x8003A788
		// Variables:
	// 		int mx; // $a2
	// 		int my; // $a3
	// 		int md; // $v1
	/* end block 1 */
	// End offset: 0x8003A824
	// End Line: 76

	/* begin block 2 */
		// Start line: 93
	/* end block 2 */
	// End Line: 94

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
 // line 91, offset 0x8003a82c
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8003A82C
	/* end block 1 */
	// End offset: 0x8003A834
	// End Line: 95

	/* begin block 2 */
		// Start line: 183
	/* end block 2 */
	// End Line: 184

void SetRndSeed__Fl(long s)

{
	SeedCount = 0;
	sglGameSeed = s;
	return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetRndSeed__Fv()
 // line 99, offset 0x8003a83c
	/* begin block 1 */
		// Start line: 100
		// Start offset: 0x8003A83C
	/* end block 1 */
	// End offset: 0x8003A874
	// End Line: 105

	/* begin block 2 */
		// Start line: 202
	/* end block 2 */
	// End Line: 203

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
// long /*$ra*/ random__Fil(int idx /*$a0*/, long v /*$s0*/)
 // line 110, offset 0x8003a884
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x8003A884
	/* end block 1 */
	// End offset: 0x8003A8DC
	// End Line: 117

	/* begin block 2 */
		// Start line: 224
	/* end block 2 */
	// End Line: 225

long random__Fil(int idx,long v)

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
 // line 368, offset 0x8003a8f0
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x8003A8F0
	/* end block 1 */
	// End offset: 0x8003A928
	// End Line: 419

	/* begin block 2 */
		// Start line: 740
	/* end block 2 */
	// End Line: 741

uchar * DiabloAllocPtr__FUl(ulong dwBytes)

{
	uchar *puVar1;
	
	Enter__9CCritSect(&sgMemCrit);
	puVar1 = (uchar *)SMemAlloc(dwBytes,"source/ENGINE.cpp",0x17e,0);
	return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mem_free_dbg__FPv(void *p /*$s0*/)
 // line 429, offset 0x8003a93c
	/* begin block 1 */
		// Start line: 430
		// Start offset: 0x8003A93C
	/* end block 1 */
	// End offset: 0x8003A978
	// End Line: 464

	/* begin block 2 */
		// Start line: 866
	/* end block 2 */
	// End Line: 867

void mem_free_dbg__FPv(void *p)

{
	if (p != (void *)0x0) {
		Enter__9CCritSect(&sgMemCrit);
		SMemFree(p,"source/ENGINE.cpp",0x1cf,0);
	}
	return;
}



// decompiled code
// original method signature: 
// unsigned char * /*$ra*/ LoadFileInMem__FPCcPUl(char *pszName /*$a0*/, unsigned long *pdwFileLen /*$a1*/)
 // line 487, offset 0x8003a98c
	/* begin block 1 */
		// Start line: 488
		// Start offset: 0x8003A98C
	/* end block 1 */
	// End offset: 0x8003A98C
	// End Line: 498

	/* begin block 2 */
		// Start line: 992
	/* end block 2 */
	// End Line: 993

uchar * LoadFileInMem__FPCcPUl(char *pszName,ulong *pdwFileLen)

{
	return (uchar *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlayInGameMovie__FPCc(char *pszMovie /*$s0*/)
 // line 565, offset 0x8003a994
	/* begin block 1 */
		// Start line: 566
		// Start offset: 0x8003A994
	/* end block 1 */
	// End offset: 0x8003AA10
	// End Line: 581

	/* begin block 2 */
		// Start line: 1138
	/* end block 2 */
	// End Line: 1139

void PlayInGameMovie__FPCc(char *pszMovie)

{
	void *pvVar1;
	
	PaletteFadeOut__Fi(8);
	while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
		TSK_Sleep(1);
	}
	play_movie(pszMovie);
	force_redraw = 0xff;
	PaletteFadeIn__Fi(8);
	while (pvVar1 = GetFadeState__Fv(), pvVar1 != (void *)0x0) {
		TSK_Sleep(1);
	}
	force_redraw = 0xff;
	return;
}





