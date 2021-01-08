#include "THISDUST.H"
#include "PREPORT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitPortals__Fv()
 // line 74, offset 0x8015e77c
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x8015E77C

		/* begin block 1.1 */
			// Start line: 75
			// Start offset: 0x8015E77C
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x8015E7C4
		// End Line: 80
	/* end block 1 */
	// End offset: 0x8015E7C4
	// End Line: 80

	/* begin block 2 */
		// Start line: 148
	/* end block 2 */
	// End Line: 149

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPortals__Fv(void)

{
	uchar uVar1;
	int i;
	int iVar2;
	
	i = 0;
	iVar2 = 0;
	do {
		uVar1 = delta_portal_inited__Fi(i);
		if (uVar1 != '\0') {
			(&portal[0].open)[iVar2] = '\0';
		}
		i = i + 1;
		iVar2 = iVar2 + 0xc;
	} while (i < 4);
	return;
}





