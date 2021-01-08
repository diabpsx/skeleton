#include "THISDUST.H"
#include "PRESTORE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitStores__Fv()
 // line 114, offset 0x80162cdc
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80162CDC

		/* begin block 1.1 */
			// Start line: 115
			// Start offset: 0x80162CDC
			// Variables:
		// 		int Loop; // $a2

			/* begin block 1.1.1 */
				// Start line: 121
				// Start offset: 0x80162D20

				/* begin block 1.1.1.1 */
					// Start line: 123
					// Start offset: 0x80162D2C
					// Variables:
				// 		int i; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x80162D78
				// End Line: 131
			/* end block 1.1.1 */
			// End offset: 0x80162D78
			// End Line: 132
		/* end block 1.1 */
		// End offset: 0x80162DC0
		// End Line: 134
	/* end block 1 */
	// End offset: 0x80162DC0
	// End Line: 134

	/* begin block 2 */
		// Start line: 228
	/* end block 2 */
	// End Line: 229

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitStores__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int *piVar5;
	uint uVar6;
	
	ClearSText__Fii(0,0x18);
	iVar4 = 0;
	uVar6 = (uint)gbMaxPlayers;
	piVar5 = _numpremium;
	stextflag = '\0';
	stextsize = '\0';
	stextscrl = '\0';
	while (iVar3 = 5, iVar4 < (int)uVar6) {
		iVar2 = iVar4 * 0x288 + 0x21c;
		StorePlrNo = iVar4;
		*piVar5 = 0;
		_premiumlevel[iVar4] = 1;
		do {
			*(undefined2 *)((int)&_premiumitem._itype + iVar2) = 0xffff;
			iVar1 = StorePlrNo;
			iVar3 = iVar3 + -1;
			iVar2 = iVar2 + -0x6c;
		} while (-1 < iVar3);
		piVar5 = piVar5 + 1;
		_boyitem[StorePlrNo]._itype = -1;
		_boylevel[iVar1] = 0;
		iVar4 = iVar4 + 1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupTownStores__Fv()
 // line 139, offset 0x80162dd0
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x80162DD0
		// Variables:
	// 		int i; // $a0
	// 		int l; // $s0
	// 		int OldMyPtr; // $s4
	// 		int OldSeed; // $s3

		/* begin block 1.1 */
			// Start line: 140
			// Start offset: 0x80162DD0
			// Variables:
		// 		int Loop; // $s1
		/* end block 1.1 */
		// End offset: 0x80162F9C
		// End Line: 190
	/* end block 1 */
	// End offset: 0x80162FAC
	// End Line: 192

	/* begin block 2 */
		// Start line: 291
	/* end block 2 */
	// End Line: 292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupTownStores__Fv(void)

{
	int iVar1;
	long s;
	uint uVar2;
	uchar *puVar3;
	int lvl;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = myplr;
	s = GetRndSeed__Fv();
	SetRndSeed__Fl(s);
	uVar2 = (uint)gbMaxPlayers;
	iVar5 = 0;
	if (gbMaxPlayers != '\0') {
		iVar6 = 0;
		do {
			iVar4 = 0;
			if (uVar2 == 1) {
				lvl = 0;
				puVar3 = plr[iVar5]._pLvlVisited;
				do {
					if (*puVar3 != '\0') {
						iVar4 = lvl;
					}
					lvl = lvl + 1;
					puVar3 = puVar3 + 1;
				} while (lvl < 0x11);
			}
			else {
				iVar4 = (int)((uint)(byte)(&plr[0]._pLevel)[iVar6] << 0x18) >> 0x19;
			}
			iVar4 = iVar4 + 2;
			lvl = iVar4;
			if (iVar4 < 6) {
				lvl = 6;
			}
			if (0x10 < iVar4) {
				lvl = 0x10;
			}
			iVar6 = iVar6 + 0x19e8;
			myplr = iVar5;
			StorePlrNo = iVar5;
			SpawnStoreGold__Fv();
			SpawnSmith__Fi(lvl);
			SpawnWitch__Fi(lvl);
			SpawnHealer__Fi(lvl);
			iVar5 = iVar5 + 1;
			SpawnBoy__Fi((int)plr[myplr]._pLevel);
			SpawnPremium__Fi((int)plr[myplr]._pLevel);
			uVar2 = (uint)gbMaxPlayers;
		} while (iVar5 < (int)uVar2);
	}
	myplr = iVar1;
	SetRndSeed__Fl(s);
	return;
}





