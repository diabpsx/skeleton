#include "THISDUST.H"
#include "PREMISS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitMissiles__Fv()
 // line 97, offset 0x80161fdc
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x80161FDC
		// Variables:
	// 		int i; // $s0
	// 		int j; // $a0
	// 		int mx; // $v1
	/* end block 1 */
	// End offset: 0x80162194
	// End Line: 131

	/* begin block 2 */
		// Start line: 198
	/* end block 2 */
	// End Line: 199

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMissiles__Fv(void)

{
	short *psVar1;
	int iVar2;
	short *psVar3;
	int iVar4;
	int iVar5;
	
	plr[myplr]._pSpellFlags = plr[myplr]._pSpellFlags & 0xfe;
	if ((plr[myplr]._pInfraFlag == '\x01') && (iVar4 = 0, 0 < nummissiles)) {
		psVar3 = &missileactive;
		do {
			if ((missile[(int)*psVar3]._mitype == '\'') && ((int)missile[(int)*psVar3]._misource == myplr)
				 ) {
				CalcPlrItemVals__FiUc((int)missile[(int)*psVar3]._misource,'\x01');
			}
			iVar4 = iVar4 + 1;
			psVar3 = psVar3 + 1;
		} while (iVar4 < nummissiles);
	}
	nummissiles = 0;
	iVar4 = 0;
	psVar3 = &missileactive;
	psVar1 = &missileavail;
	do {
		*psVar1 = (short)iVar4;
		*psVar3 = 0;
		psVar3 = psVar3 + 1;
		iVar4 = iVar4 + 1;
		psVar1 = psVar1 + 1;
	} while (iVar4 < 0x7d);
	iVar4 = 0;
	do {
		iVar5 = 0;
		iVar2 = iVar4 << 3;
		do {
			iVar5 = iVar5 + 1;
			(&dung_map[0].dFlags)[iVar2] = (&dung_map[0].dFlags)[iVar2] & 0xbf;
			iVar2 = iVar2 + 0x380;
		} while (iVar5 < 0x60);
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x60);
	return;
}





