#include "THISDUST.H"
#include "DAVEO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ReadPad__Fi(int NoDeb /*$s0*/)
 // line 64, offset 0x8007cc20
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x8007CC20
		// Variables:
	// 		struct CPad *Pad; // $v0
	// 		int New; // $v0
	// 		int cmem; // $v1
	// 		int p1mema; // $a0
	// 		int p1memb; // $a1
	// 		int p2mema; // $a2
	// 		int p2memb; // $a3
	/* end block 1 */
	// End offset: 0x8007CCD0
	// End Line: 93

	/* begin block 2 */
		// Start line: 128
	/* end block 2 */
	// End Line: 129

void ReadPad__Fi(int NoDeb)

{
	ushort uVar1;
	CPad *this;
	int PadNum;
	uchar both;
	
	PadNum = options_pad;
	if (FeFlag != '\0') {
		if ((FeCurMenu == &FeNewP1NameMenu) || (FeCurMenu == &FeNewP1ClassMenu)) {
			PadNum = 0;
		}
		else {
			PadNum = 1;
			if ((FeCurMenu != &FeNewP2NameMenu) &&
				 (both = '\x01', PadNum = 1, FeCurMenu != &FeNewP2ClassMenu)) {
				PadNum = 0;
				goto LAB_8007cca4;
			}
		}
	}
	both = '\0';
LAB_8007cca4:
	this = PAD_GetPad__FiUc(PadNum,both);
	uVar1 = GetCur__C4CPad(this);
	DavesPad = uVar1 & ~DavesPadDeb;
	DavesPadDeb = uVar1 & (ushort)NoDeb;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DummyPoll__Fv()
 // line 97, offset 0x8007cce4
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x8007CCE4
	/* end block 1 */
	// End offset: 0x8007CCE4
	// End Line: 98

	/* begin block 2 */
		// Start line: 205
	/* end block 2 */
	// End Line: 206

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DummyPoll__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DaveOwens__Fv()
 // line 103, offset 0x8007ccec
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x8007CCEC
	/* end block 1 */
	// End offset: 0x8007CD04
	// End Line: 105

	/* begin block 2 */
		// Start line: 214
	/* end block 2 */
	// End Line: 215

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DaveOwens__Fv(void)

{
	DBG_SetPollRoutine(DummyPoll__Fv);
	return;
}





