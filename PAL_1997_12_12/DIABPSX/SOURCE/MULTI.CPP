#include "THISDUST.H"
#include "MULTI.H"


// decompiled code
// original method signature: 
// void /*$ra*/ NetSendLoPri__FPCUcUc(unsigned char *pbMsg /*$a1*/, unsigned char bLen /*$a1*/)
 // line 165, offset 0x8004c190
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x8004C190
	/* end block 1 */
	// End offset: 0x8004C1AC
	// End Line: 170

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

void NetSendLoPri__FPCUcUc(uchar *pbMsg,uchar bLen)

{
	ParseCmd__FiPC4TCmd(myplr,(TCmd *)pbMsg);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InitLevelType__Fi(int l /*$a0*/)
 // line 554, offset 0x8004c1bc
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x8004C1BC
	/* end block 1 */
	// End offset: 0x8004C200
	// End Line: 560

	/* begin block 2 */
		// Start line: 1113
	/* end block 2 */
	// End Line: 1114

int InitLevelType__Fi(int l)

{
	int iVar1;
	
	if (l == 0) {
		iVar1 = 0;
	}
	else {
		iVar1 = 1;
		if (3 < l - 1U) {
			if (l - 5U < 4) {
				iVar1 = 2;
			}
			else {
				iVar1 = 3;
				if (3 < l - 9U) {
					iVar1 = 4;
				}
			}
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupLocalCoords__Fv()
 // line 565, offset 0x8004c208
	/* begin block 1 */
		// Start line: 566
		// Start offset: 0x8004C208
		// Variables:
	// 		int x; // $a0
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x8004C390
	// End Line: 604

	/* begin block 2 */
		// Start line: 1136
	/* end block 2 */
	// End Line: 1137

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupLocalCoords__Fv(void)

{
	int iVar1;
	short sVar2;
	int iVar3;
	short sVar4;
	int iVar5;
	
	iVar1 = myplr;
	if ((leveldebug == '\0') || (1 < gbMaxPlayers)) {
		currlevel = '\0';
		leveltype = '\0';
		setlevel = '\0';
	}
	iVar3 = plrxoff[myplr];
	iVar5 = plryoff[myplr];
	plr[myplr].plrlevel = (uint)currlevel;
	sVar2 = (short)iVar3 + 0x4b;
	plr[iVar1]._pLvlChanging = '\x01';
	iVar3 = myplr;
	sVar4 = (short)iVar5 + 0x44;
	plr[iVar1]._px = sVar2;
	plr[iVar1]._py = sVar4;
	plr[iVar1]._pfutx = sVar2;
	plr[iVar1]._pfuty = sVar4;
	plr[iVar1]._ptargx = sVar2;
	plr[iVar1]._ptargy = sVar4;
	plr[iVar3].pLvlLoad = '\0';
	iVar1 = myplr;
	plr[myplr]._pmode = 10;
	plr[iVar1].destAction = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitNewSeed__Fl(long newseed /*$a0*/)
 // line 682, offset 0x8004c398
	/* begin block 1 */
		// Start line: 683
		// Start offset: 0x8004C398

		/* begin block 1.1 */
			// Start line: 683
			// Start offset: 0x8004C398
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x8004C3F0
		// End Line: 689
	/* end block 1 */
	// End offset: 0x8004C3F0
	// End Line: 689

	/* begin block 2 */
		// Start line: 1397
	/* end block 2 */
	// End Line: 1398

void InitNewSeed__Fl(long newseed)

{
	ulong uVar1;
	int iVar2;
	int l;
	ulong *puVar3;
	int *piVar4;
	
	SetRndSeed__Fl(newseed);
	l = 0;
	piVar4 = gnLevelTypeTbl;
	puVar3 = glSeedTbl;
	do {
		uVar1 = GetRndSeed__Fv();
		*puVar3 = uVar1;
		iVar2 = InitLevelType__Fi(l);
		*piVar4 = iVar2;
		piVar4 = piVar4 + 1;
		l = l + 1;
		puVar3 = puVar3 + 1;
	} while (l < 0x11);
	return;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ NetInit__FUcPUc(unsigned char bSinglePlayer /*$s0*/, unsigned char *pfExitProgram /*$a1*/)
 // line 703, offset 0x8004c40c
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x8004C40C
		// Variables:
	// 		char szPlayerDescript[128]; // stack offset -176

		/* begin block 1.1 */
			// Start line: 704
			// Start offset: 0x8004C40C

			/* begin block 1.1.1 */
				// Start line: 715
				// Start offset: 0x8004C43C
				// Variables:
			// 		struct _uiheroinfo heroinfo; // stack offset -48
			/* end block 1.1.1 */
			// End offset: 0x8004C464
			// End Line: 719
		/* end block 1.1 */
		// End offset: 0x8004C464
		// End Line: 719

		/* begin block 1.2 */
			// Start line: 727
			// Start offset: 0x8004C464

			/* begin block 1.2.1 */
				// Start line: 737
				// Start offset: 0x8004C4D4
			/* end block 1.2.1 */
			// End offset: 0x8004C4D4
			// End Line: 740
		/* end block 1.2 */
		// End offset: 0x8004C4E4
		// End Line: 746
	/* end block 1 */
	// End offset: 0x8004C620
	// End Line: 813

	/* begin block 2 */
		// Start line: 1439
	/* end block 2 */
	// End Line: 1440

uchar NetInit__FUcPUc(uchar bSinglePlayer,uchar *pfExitProgram)

{
	ulong uVar1;
	undefined auStack176 [128];
	_uiheroinfo _Stack48;
	
	*pfExitProgram = '\0';
	memset(auStack176,0,0x80);
	if (bSinglePlayer == '\0') {
		myplr = 0;
		SetupLocalPlayer__Fv();
		game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(plr,&_Stack48,gbValidSaveFile);
	}
	SetRndSeed__Fl(0);
	gbGameDestroyed = '\0';
	sgGameInitInfo.bDiff = (uchar)gnDifficulty;
	memset(sgbPlayerLeftGameTbl,0,2);
	memset(sgdwPlayerLeftReasonTbl,0,8);
	memset(sgbSendDeltaTbl,0,2);
	memset(sgwPackPlrOffsetTbl,0,4);
	gbMaxPlayers = '\x01';
	if (bSinglePlayer == '\0') {
		gbMaxPlayers = '\x02';
	}
	myplr = 0;
	sgbNetInited = '\x01';
	sgbTimeout = '\0';
	delta_init__Fv();
	sgbSentThisCycle = '\0';
	sgdwGameLoops = 0;
	gbSomebodyWonGameKludge = '\0';
	gbActivePlayers = '\x01';
	gbDeltaSender = (uchar)myplr;
	if (FePlayerNo != 0) {
		myplr = 1;
		SetupLocalPlayer__Fv();
	}
	myplr = 0;
	SetupLocalPlayer__Fv();
	plr[myplr].plractive = '\x01';
	SetupLocalCoords__Fv();
	if (FePlayerNo != 0) {
		myplr = 1;
		SetupLocalCoords__Fv();
		myplr = 0;
	}
	gnDifficulty = ZEXT14(sgGameInitInfo.bDiff);
	SetRndSeed__Fl(sgGameInitInfo.dwSeed);
	uVar1 = VID_GetTick__Fv();
	orgseed = uVar1 * 1000;
	if (demo_pad_time != 0) {
		orgseed = (long)&LAB_000537f0;
	}
	InitNewSeed__Fl(orgseed);
	return '\x01';
}





