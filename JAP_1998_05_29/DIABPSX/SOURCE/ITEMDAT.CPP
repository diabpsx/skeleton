#include "THISDUST.H"
#include "ITEMDAT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitAllItemsUseable__Fv()
 // line 969, offset 0x8003e214
	/* begin block 1 */
		// Start line: 970
		// Start offset: 0x8003E214

		/* begin block 1.1 */
			// Start line: 971
			// Start offset: 0x8003E214
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8003E244
		// End Line: 972
	/* end block 1 */
	// End offset: 0x8003E244
	// End Line: 972

	/* begin block 2 */
		// Start line: 1939
	/* end block 2 */
	// End Line: 1940

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitAllItemsUseable__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	do {
		(&AllItemsUseable)[iVar1] = (&AllItemsList.iUsable)[iVar2];
		iVar1 = iVar1 + 1;
		iVar2 = iVar2 + 0x20;
	} while (iVar1 < 0x9d);
	return;
}





