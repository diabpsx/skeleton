#include "THISDUST.H"
#include "PRETRIGS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ InitNoTriggers__Fv()
 // line 86, offset 0x801621ac
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x801621AC
	/* end block 1 */
	// End offset: 0x801621C8
	// End Line: 89

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitNoTriggers__Fv(void)

{
	numtrigs = 0;
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTownTriggers__Fv()
 // line 95, offset 0x801621d0
	/* begin block 1 */
		// Start line: 96
		// Start offset: 0x801621D0

		/* begin block 1.1 */
			// Start line: 97
			// Start offset: 0x801621D0

			/* begin block 1.1.1 */
				// Start line: 106
				// Start offset: 0x80162214

				/* begin block 1.1.1.1 */
					// Start line: 107
					// Start offset: 0x80162214
					// Variables:
				// 		int i; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80162230
				// End Line: 107
			/* end block 1.1.1 */
			// End offset: 0x80162230
			// End Line: 108

			/* begin block 1.1.2 */
				// Start line: 128
				// Start offset: 0x801622EC

				/* begin block 1.1.2.1 */
					// Start line: 129
					// Start offset: 0x801622EC
					// Variables:
				// 		int i; // $v1
				/* end block 1.1.2.1 */
				// End offset: 0x80162304
				// End Line: 129
			/* end block 1.1.2 */
			// End offset: 0x80162514
			// End Line: 152
		/* end block 1.1 */
		// End offset: 0x80162514
		// End Line: 152
	/* end block 1 */
	// End offset: 0x80162528
	// End Line: 155

	/* begin block 2 */
		// Start line: 201
	/* end block 2 */
	// End Line: 202

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitTownTriggers__Fv(void)

{
	uchar *puVar1;
	int iVar2;
	
	trigs._tx = 0x19;
	trigs._ty = 0x1d;
	trigs._tmsg = 0x42;
	numtrigs = 1;
	iVar2 = 2;
	if (gbMaxPlayers == '\x04') {
		puVar1 = &UCHAR_00h_8011bb7e;
		do {
			*puVar1 = '\x01';
			iVar2 = iVar2 + -1;
			puVar1 = puVar1 + -1;
		} while (-1 < iVar2);
		TriggerStruct_800e33dc._tmsg = 0x47;
		TriggerStruct_800e33ec._tmsg = 0x47;
		TriggerStruct_800e33fc._tmsg = 0x47;
		TriggerStruct_800e33dc._tx = 0x31;
		TriggerStruct_800e33dc._ty = 0x15;
		TriggerStruct_800e33dc._tlvl = 5;
		TriggerStruct_800e33ec._tx = 0x11;
		TriggerStruct_800e33ec._ty = 0x45;
		TriggerStruct_800e33ec._tlvl = 9;
		TriggerStruct_800e33fc._tx = 0x29;
		TriggerStruct_800e33fc._ty = 0x50;
		TriggerStruct_800e33fc._tlvl = 0xd;
		numtrigs = numtrigs + 3;
	}
	else {
		puVar1 = &UCHAR_00h_8011bb7e;
		do {
			*puVar1 = '\0';
			iVar2 = iVar2 + -1;
			puVar1 = puVar1 + -1;
		} while (-1 < iVar2);
		if ((plr[myplr].pTownWarps & 1) != 0) {
			(&trigs)[numtrigs]._tx = 0x31;
			(&trigs)[numtrigs]._ty = 0x15;
			(&trigs)[numtrigs]._tmsg = 0x47;
			(&trigs)[numtrigs]._tlvl = 5;
			townwarps = '\x01';
			numtrigs = numtrigs + 1;
		}
		if ((plr[myplr].pTownWarps & 2) != 0) {
			(&trigs)[numtrigs]._tx = 0x11;
			(&trigs)[numtrigs]._ty = 0x45;
			(&trigs)[numtrigs]._tmsg = 0x47;
			(&trigs)[numtrigs]._tlvl = 9;
			UCHAR_00h_8011bb7d = '\x01';
			numtrigs = numtrigs + 1;
		}
		if ((plr[myplr].pTownWarps & 4) != 0) {
			(&trigs)[numtrigs]._tx = 0x29;
			(&trigs)[numtrigs]._ty = 0x50;
			(&trigs)[numtrigs]._tmsg = 0x47;
			(&trigs)[numtrigs]._tlvl = 0xd;
			UCHAR_00h_8011bb7e = '\x01';
			numtrigs = numtrigs + 1;
		}
	}
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitL1Triggers__Fv()
 // line 161, offset 0x80162530
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x80162530
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	/* end block 1 */
	// End offset: 0x80162644
	// End Line: 184

	/* begin block 2 */
		// Start line: 369
	/* end block 2 */
	// End Line: 370

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL1Triggers__Fv(void)

{
	short sVar1;
	int x;
	int y;
	
	y = 0;
	numtrigs = 0;
	do {
		x = 0;
		do {
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x81) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x43;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x73) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x42;
				numtrigs = numtrigs + 1;
			}
			x = x + 1;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitL2Triggers__Fv()
 // line 190, offset 0x8016265c
	/* begin block 1 */
		// Start line: 191
		// Start offset: 0x8016265C
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	/* end block 1 */
	// End offset: 0x80162808
	// End Line: 223

	/* begin block 2 */
		// Start line: 439
	/* end block 2 */
	// End Line: 440

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL2Triggers__Fv(void)

{
	short sVar1;
	int x;
	int y;
	
	y = 0;
	numtrigs = 0;
	do {
		x = 0;
		do {
			sVar1 = GetDPiece__Fii(x,y);
			if ((sVar1 == 0x10b) && ((x != quests[14]._qtx || (y != quests[14]._qty)))) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x43;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x22f) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x48;
				(&trigs)[numtrigs]._tlvl = 0;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x10f) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x42;
				numtrigs = numtrigs + 1;
			}
			x = x + 1;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitL3Triggers__Fv()
 // line 229, offset 0x80162824
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x80162824
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	/* end block 1 */
	// End offset: 0x80162998
	// End Line: 259

	/* begin block 2 */
		// Start line: 539
	/* end block 2 */
	// End Line: 540

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL3Triggers__Fv(void)

{
	short sVar1;
	int x;
	int y;
	
	y = 0;
	numtrigs = 0;
	do {
		x = 0;
		do {
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0xab) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x43;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0xa8) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x42;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x225) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x48;
				numtrigs = numtrigs + 1;
			}
			x = x + 1;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitL4Triggers__Fv()
 // line 265, offset 0x801629b0
	/* begin block 1 */
		// Start line: 266
		// Start offset: 0x801629B0
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s1
	/* end block 1 */
	// End offset: 0x80162BD8
	// End Line: 310

	/* begin block 2 */
		// Start line: 628
	/* end block 2 */
	// End Line: 629

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitL4Triggers__Fv(void)

{
	short sVar1;
	int x;
	int y;
	
	y = 0;
	numtrigs = 0;
	do {
		x = 0;
		do {
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x53) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x43;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x1a6) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x48;
				(&trigs)[numtrigs]._tlvl = 0;
				numtrigs = numtrigs + 1;
			}
			sVar1 = GetDPiece__Fii(x,y);
			if (sVar1 == 0x78) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x42;
				numtrigs = numtrigs + 1;
			}
			x = x + 1;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	y = 0;
	do {
		x = 0;
		do {
			sVar1 = GetDPiece__Fii(x,y);
			if ((sVar1 == 0x172) && (quests[15]._qactive == '\x03')) {
				(&trigs)[numtrigs]._tx = x;
				(&trigs)[numtrigs]._ty = y;
				(&trigs)[numtrigs]._tmsg = 0x42;
				numtrigs = numtrigs + 1;
			}
			x = x + 1;
		} while (x < 0x60);
		y = y + 1;
	} while (y < 0x60);
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitSKingTriggers__Fv()
 // line 316, offset 0x80162bf8
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x80162BF8
	/* end block 1 */
	// End offset: 0x80162C3C
	// End Line: 322

	/* begin block 2 */
		// Start line: 756
	/* end block 2 */
	// End Line: 757

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitSKingTriggers__Fv(void)

{
	numtrigs = 1;
	trigs._tx = 0x52;
	trigs._ty = 0x2a;
	trigs._tmsg = 0x44;
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitSChambTriggers__Fv()
 // line 328, offset 0x80162c44
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x80162C44
	/* end block 1 */
	// End offset: 0x80162C88
	// End Line: 334

	/* begin block 2 */
		// Start line: 784
	/* end block 2 */
	// End Line: 785

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitSChambTriggers__Fv(void)

{
	numtrigs = 1;
	trigs._tx = 0x46;
	trigs._ty = 0x27;
	trigs._tmsg = 0x44;
	_trigflag[sel_data] = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitPWaterTriggers__Fv()
 // line 340, offset 0x80162c90
	/* begin block 1 */
		// Start line: 341
		// Start offset: 0x80162C90
	/* end block 1 */
	// End offset: 0x80162CD4
	// End Line: 346

	/* begin block 2 */
		// Start line: 812
	/* end block 2 */
	// End Line: 813

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitPWaterTriggers__Fv(void)

{
	numtrigs = 1;
	trigs._tx = 0x1e;
	trigs._ty = 0x53;
	trigs._tmsg = 0x44;
	_trigflag[sel_data] = '\0';
	return;
}





