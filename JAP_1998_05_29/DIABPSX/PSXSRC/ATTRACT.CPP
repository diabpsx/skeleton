#include "THISDUST.H"
#include "ATTRACT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ATT_DoAttract__Fv()
 // line 71, offset 0x8008d274
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x8008D274
		// Variables:
	// 		struct FE_CREATE CStruct; // stack offset -48

		/* begin block 1.1 */
			// Start line: 120
			// Start offset: 0x8008D2BC

			/* begin block 1.1.1 */
				// Start line: 121
				// Start offset: 0x8008D2D0
			/* end block 1.1.1 */
			// End offset: 0x8008D32C
			// End Line: 137
		/* end block 1.1 */
		// End offset: 0x8008D32C
		// End Line: 137
	/* end block 1 */
	// End offset: 0x8008D32C
	// End Line: 137

	/* begin block 2 */
		// Start line: 142
	/* end block 2 */
	// End Line: 143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ATT_DoAttract__Fv(void)

{
	FE_CREATE FStack48;
	
	PA_SetPauseOk__Fb((void *)0x0);
	FUN_8013aa70(&FStack48);
	while (FeFlag != '\0') {
		TSK_Sleep(1);
	}
	if (DoLoadedGame == (void *)0x0) {
		OVR_LoadGame__Fv();
		if (DoLoadedChar != (void *)0x0) {
			printf("Cleared loaded char items \n");
			ClearLoadCharItems__Fv();
			CalcPlrInv__FiUc(0,'\0');
			CalcPlrInv__FiUc(1,'\0');
			DoLoadedChar = (void *)0x0;
		}
		CreatePlayersFromFeData__FR9FE_CREATE(&FStack48);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CustomPlayerInit__FR12PlayerStruct(struct PlayerStruct *P /*$a0*/)
 // line 144, offset 0x8008d33c
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x8008D33C
	/* end block 1 */
	// End offset: 0x8008D33C
	// End Line: 146

	/* begin block 2 */
		// Start line: 289
	/* end block 2 */
	// End Line: 290

void CustomPlayerInit__FR12PlayerStruct(PlayerStruct *P)

{
	P->_pInfraFlag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct /*$s6*/)
 // line 149, offset 0x8008d344
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8008D344

		/* begin block 1.1 */
			// Start line: 150
			// Start offset: 0x8008D344
			// Variables:
		// 		int Loop; // $s0
		/* end block 1.1 */
		// End offset: 0x8008D3F0
		// End Line: 159
	/* end block 1 */
	// End offset: 0x8008D3F0
	// End Line: 159

	/* begin block 2 */
		// Start line: 298
	/* end block 2 */
	// End Line: 299

void CreatePlayersFromFeData__FR9FE_CREATE(FE_CREATE *CStruct)

{
	int pnum;
	void **ppvVar1;
	FE_CREATE *pFVar2;
	PlayerStruct *P;
	char *__dest;
	int iVar3;
	
	pnum = 0;
	if (0 < CStruct->NumOfPlayers) {
		iVar3 = 4;
		P = plr;
		__dest = plr[0]._pName;
		ppvVar1 = &LoadedChar;
		pFVar2 = CStruct;
		do {
			if (*ppvVar1 == (void *)0x0) {
				CreatePlayer__Fic(pnum,*(char *)&pFVar2->Plrs[0].Class);
				CustomPlayerInit__FR12PlayerStruct(P);
				strcpy(__dest,(char *)((int)&CStruct->NumOfPlayers + iVar3));
			}
			iVar3 = iVar3 + 0x10;
			__dest = __dest + 0x19e8;
			P = P + 1;
			pFVar2 = (FE_CREATE *)&pFVar2->Plrs[0].Class;
			pnum = pnum + 1;
			ppvVar1 = ppvVar1 + 1;
		} while (pnum < CStruct->NumOfPlayers);
	}
	return;
}





