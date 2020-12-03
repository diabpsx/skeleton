#include "THISDUST.H"
#include "COREINV.H"


// decompiled code
// original method signature: 
// int /*$ra*/ FindGetItem__FiUsi(int idx /*$a0*/, unsigned short ci /*$a1*/, int iseed /*$a2*/)
 // line 52, offset 0x8008271c
	/* begin block 1 */
		// Start line: 53
		// Start offset: 0x8008271C
		// Variables:
	// 		int i; // $t0
	// 		int ii; // $a3
	/* end block 1 */
	// End offset: 0x800827C4
	// End Line: 75

	/* begin block 2 */
		// Start line: 104
	/* end block 2 */
	// End Line: 105

int FindGetItem__FiUsi(int idx,ushort ci,int iseed)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	if (0 < numitems) {
		do {
			iVar1 = (int)(&itemactive)[iVar2];
			if ((((int)item[iVar1].IDidx == idx) && (item[iVar1]._iSeed == iseed)) &&
				 (item[iVar1]._iCreateInfo == ci)) {
				return iVar1;
			}
			iVar2 = iVar2 + 1;
		} while (iVar2 < numitems);
	}
	return -1;
}





