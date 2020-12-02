#ifndef SPLTARGT_H
#define SPLTARGT_H


extern void * Active__11SpellTarget(struct SpellTarget *this); // 0x800A4320

extern void * Active__11SpellTarget(struct SpellTarget *this); // 0x800B02E0

extern void * Active__11SpellTarget(struct SpellTarget *this); // 0x80067434

extern void * Active__11SpellTarget(struct SpellTarget *this); // 0x8007B0D8


// decompiled code
// original method signature: 
// void * /*$ra*/ Active__11SpellTarget(struct SpellTarget *this /*$a0*/)
 // line 17, offset 0x800a4320
	/* begin block 1 */
		// Start line: 18
		// Start offset: 0x800A4320
	/* end block 1 */
	// End offset: 0x800A4324
	// End Line: 18

	/* begin block 2 */
		// Start line: 34
	/* end block 2 */
	// End Line: 35

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * Active__11SpellTarget(SpellTarget *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Active__11SpellTarget(struct SpellTarget *this /*$a0*/)
 // line 17, offset 0x800b02e0
	/* begin block 1 */
		// Start line: 18
		// Start offset: 0x800B02E0
	/* end block 1 */
	// End offset: 0x800B02E4
	// End Line: 18

	/* begin block 2 */
		// Start line: 34
	/* end block 2 */
	// End Line: 35

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * Active__11SpellTarget(SpellTarget *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Active__11SpellTarget(struct SpellTarget *this /*$a0*/)
 // line 17, offset 0x80067434
	/* begin block 1 */
		// Start line: 18
		// Start offset: 0x80067434
	/* end block 1 */
	// End offset: 0x80067438
	// End Line: 18

	/* begin block 2 */
		// Start line: 34
	/* end block 2 */
	// End Line: 35

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * Active__11SpellTarget(SpellTarget *this)

{
	return this->active;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Active__11SpellTarget(struct SpellTarget *this /*$a0*/)
 // line 17, offset 0x8007b0d8
	/* begin block 1 */
		// Start line: 18
		// Start offset: 0x8007B0D8
	/* end block 1 */
	// End offset: 0x8007B0DC
	// End Line: 18

	/* begin block 2 */
		// Start line: 34
	/* end block 2 */
	// End Line: 35

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * Active__11SpellTarget(SpellTarget *this)

{
	return this->active;
}





extern void * IsAutoTarget__Fi(int Spell); // 0x800AF0F0

extern int GetXOff__Fii(int wx, int wy); // 0x800AF128

extern int GetYOff__Fii(int wx, int wy); // 0x800AF170

extern void GetScrXY__FPiT0(int *wx, int *wy); // 0x800AF1BC

extern void ClearTrails__11SpellTarget(struct SpellTarget *this); // 0x800AF28C

extern void Init__11SpellTargeti(struct SpellTarget *this, int plrn); // 0x800AF2B4

extern void Remove__11SpellTarget(struct SpellTarget *this); // 0x800AF518

extern void DrawArrow__11SpellTargetii(struct SpellTarget *this, int x1, int y1); // 0x800AF57C

extern void Show__11SpellTarget(struct SpellTarget *this); // 0x800AF7F8

extern void ForceTarget__11SpellTargetiii(struct SpellTarget *this, int monst, int x, int y); // 0x800AFD14

extern void * TargetActive__Fi(int pnum); // 0x800AFE68

extern struct SpellTarget * GetSpellTarget__Fi(int pnum); // 0x800AFE90

extern void ArrowTask__FP4TASK(struct TASK *T); // 0x800AFEB0

extern void SPL_Arrow__F6TARGETiii(enum TARGET t, int pnum, int times, int size); // 0x800B0260


#endif
