#include "THISDUST.H"
#include "ATTRACT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ATT_DoAttract__Fv()
 // line 67, offset 0x800875e0
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x800875E0
		// Variables:
	// 		struct FE_CREATE CStruct; // stack offset -48
	/* end block 1 */
	// End offset: 0x8008771C
	// End Line: 110

	/* begin block 2 */
		// Start line: 134
	/* end block 2 */
	// End Line: 135

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ATT_DoAttract__Fv(void)

{
	undefined in_a1;
	undefined in_a2;
	undefined in_a3;
	undefined4 in_stack_000000f0;
	undefined in_stack_ffffffd0;
	char in_stack_ffffffd4;
	char in_stack_ffffffd8;
	char in_stack_ffffffdc;
	undefined in_stack_ffffffe0;
	char in_stack_ffffffe4;
	
	PA_SetPauseOk__Fb((void *)0x0);
	FUN_801381d8(0xd0,in_a1,in_a2,in_a3,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,
							 in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_000000f0);
	GLUE_PreDun__Fv();
	while (FeFlag != '\0') {
		do {
			TSK_Sleep(1);
		} while (FeFlag != '\0');
		if (PlayDemoFlag != '\0') {
			OVR_LoadGame__Fv();
			demo_which = demo_which + '\x01';
			FePlayerNo = 0;
			deathflag = '\0';
			CreatePlayersFromFeData__FR9FE_CREATE((FE_CREATE *)&stack0xffffffd0);
			start_demo__Fv();
			PlayDemoFlag = '\0';
			FeFlag = '\0';
		}
	}
	if (currlevel != -1) {
		OVR_LoadGame__Fv();
		CreatePlayersFromFeData__FR9FE_CREATE((FE_CREATE *)&stack0xffffffd0);
	}
	PA_SetPauseOk__Fb(&DAT_00000001);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct /*$s4*/)
 // line 114, offset 0x80087730
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x80087730

		/* begin block 1.1 */
			// Start line: 115
			// Start offset: 0x80087730
			// Variables:
		// 		int Loop; // $s0
		/* end block 1.1 */
		// End offset: 0x800877A8
		// End Line: 120
	/* end block 1 */
	// End offset: 0x800877A8
	// End Line: 120

	/* begin block 2 */
		// Start line: 237
	/* end block 2 */
	// End Line: 238

void CreatePlayersFromFeData__FR9FE_CREATE(FE_CREATE *CStruct)

{
	FE_PLR *pFVar1;
	int pnum;
	int iVar2;
	FE_CREATE *pFVar3;
	char *__dest;
	int iVar4;
	
	if (0 < CStruct->NumOfPlayers) {
		iVar4 = 4;
		__dest = plr[0]._pName;
		pnum = 0;
		pFVar3 = CStruct;
		do {
			pFVar1 = pFVar3->Plrs;
			pFVar3 = (FE_CREATE *)&pFVar3->Plrs[0].Class;
			iVar2 = pnum + 1;
			CreatePlayer__Fic(pnum,*(char *)&pFVar1->Class);
			strcpy(__dest,(char *)((int)&CStruct->NumOfPlayers + iVar4));
			iVar4 = iVar4 + 0x10;
			__dest = __dest + 0x23a8;
			pnum = iVar2;
		} while (iVar2 < CStruct->NumOfPlayers);
	}
	return;
}





