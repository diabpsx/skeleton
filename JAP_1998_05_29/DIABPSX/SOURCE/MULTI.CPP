#include "THISDUST.H"
#include "MULTI.H"


// decompiled code
// original method signature: 
// void /*$ra*/ NetSendLoPri__FPCUcUc(unsigned char *pbMsg /*$a1*/, unsigned char bLen /*$a1*/)
 // line 168, offset 0x80052ba4
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x80052BA4
	/* end block 1 */
	// End offset: 0x80052BC0
	// End Line: 173

	/* begin block 2 */
		// Start line: 336
	/* end block 2 */
	// End Line: 337

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NetSendLoPri__FPCUcUc(uchar *pbMsg,uchar bLen)

{
	ParseCmd__FiPC4TCmd(myplr,(TCmd *)pbMsg);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InitLevelType__Fi(int l /*$a0*/)
 // line 559, offset 0x80052bd0
	/* begin block 1 */
		// Start line: 560
		// Start offset: 0x80052BD0
	/* end block 1 */
	// End offset: 0x80052C14
	// End Line: 565

	/* begin block 2 */
		// Start line: 1123
	/* end block 2 */
	// End Line: 1124

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 570, offset 0x80052c1c
	/* begin block 1 */
		// Start line: 571
		// Start offset: 0x80052C1C
		// Variables:
	// 		int x; // $a0
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x80052D74
	// End Line: 609

	/* begin block 2 */
		// Start line: 1146
	/* end block 2 */
	// End Line: 1147

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SetupLocalCoords__Fv(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = myplr;
	if ((leveldebug == '\0') || (1 < gbMaxPlayers)) {
		currlevel = '\0';
		leveltype = '\0';
		setlevel = '\0';
	}
	iVar3 = plrxoff[myplr];
	iVar4 = plryoff[myplr];
	(&plr)[myplr].plrlevel = (uint)currlevel;
	(&plr)[iVar1]._pLvlChanging = '\x01';
	iVar2 = myplr;
	(&plr)[iVar1]._px = (short)iVar3 + 0x4b;
	(&plr)[iVar1]._py = (short)iVar4 + 0x44;
	(&plr)[iVar2].pLvlLoad = '\0';
	iVar1 = myplr;
	(&plr)[myplr]._pmode = PM_NEWLVL;
	(&plr)[iVar1].destAction = -1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitNewSeed__Fl(long newseed /*$a0*/)
 // line 687, offset 0x80052d7c
	/* begin block 1 */
		// Start line: 688
		// Start offset: 0x80052D7C

		/* begin block 1.1 */
			// Start line: 688
			// Start offset: 0x80052D7C
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x80052DD4
		// End Line: 694
	/* end block 1 */
	// End offset: 0x80052DD4
	// End Line: 694

	/* begin block 2 */
		// Start line: 1407
	/* end block 2 */
	// End Line: 1408

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
 // line 708, offset 0x80052df0
	/* begin block 1 */
		// Start line: 709
		// Start offset: 0x80052DF0
		// Variables:
	// 		char szPlayerDescript[128]; // stack offset -176
	// 		long time; // $v0

		/* begin block 1.1 */
			// Start line: 709
			// Start offset: 0x80052DF0

			/* begin block 1.1.1 */
				// Start line: 720
				// Start offset: 0x80052E20
				// Variables:
			// 		struct _uiheroinfo heroinfo; // stack offset -48
			/* end block 1.1.1 */
			// End offset: 0x80052E48
			// End Line: 724
		/* end block 1.1 */
		// End offset: 0x80052E48
		// End Line: 724

		/* begin block 1.2 */
			// Start line: 732
			// Start offset: 0x80052E48

			/* begin block 1.2.1 */
				// Start line: 732
				// Start offset: 0x80052E48
			/* end block 1.2.1 */
			// End offset: 0x80052E48
			// End Line: 732
		/* end block 1.2 */
		// End offset: 0x80052E48
		// End Line: 732
	/* end block 1 */
	// End offset: 0x8005306C
	// End Line: 864

	/* begin block 2 */
		// Start line: 1449
	/* end block 2 */
	// End Line: 1450

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar NetInit__FUcPUc(uchar bSinglePlayer,uchar *pfExitProgram)

{
	ulong ix;
	int iVar1;
	undefined auStack176 [128];
	_uiheroinfo _Stack48;
	
	*pfExitProgram = '\0';
	memset(auStack176,0,0x80);
	if (bSinglePlayer == '\0') {
		myplr = 0;
		SetupLocalPlayer__Fv();
		game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(&plr,&_Stack48,gbValidSaveFile);
	}
	SetRndSeed__Fl(0);
	gbGameDestroyed = '\0';
	sgGameInitInfo.bDiff = (uchar)gnDifficulty;
	memset(sgbPlayerLeftGameTbl,0,2);
	memset(sgdwPlayerLeftReasonTbl,0,8);
	memset(sgbSendDeltaTbl,0,2);
	memset(sgwPackPlrOffsetTbl,0,4);
	myplr = 0;
	sgbNetInited = '\x01';
	sgbTimeout = '\0';
	delta_init__Fv();
	sgbSentThisCycle = '\0';
	sgdwGameLoops = 0;
	gbSomebodyWonGameKludge = '\0';
	gbActivePlayers = '\x01';
	gbMaxPlayers = '\x01';
	gbDeltaSender = (uchar)myplr;
	if (FePlayerNo != 0) {
		myplr = 1;
		gbMaxPlayers = '\x02';
		SetupLocalPlayer__Fv();
	}
	myplr = 0;
	SetupLocalPlayer__Fv();
	(&plr)[myplr].plractive = '\x01';
	SetupLocalCoords__Fv();
	if (FePlayerNo != 0) {
		myplr = 1;
		SetupLocalCoords__Fv();
		myplr = 0;
	}
	gnDifficulty = ZEXT14(sgGameInitInfo.bDiff);
	SetRndSeed__Fl(sgGameInitInfo.dwSeed);
	ix = VID_GetTick__Fv();
	iVar1 = veclen2__Fii(ix,ix);
	orgseed = iVar1 << 0x10;
	ix = VID_GetTick__Fv();
	orgseed = orgseed | ix / 3;
	if (cheat_quest_flag != '\0') {
		SetQuest__Fv();
	}
	if (OptionsSetSeed != (void *)0x0) {
		orgseed = OptionsSeed;
	}
	if (demo_pad_time != 0) {
		orgseed = (long)&LAB_000537f0;
	}
	InitNewSeed__Fl(orgseed);
	return '\x01';
}





