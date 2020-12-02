#include "THISDUST.H"
#include "COREFMV.H"


// decompiled code
// original method signature: 
// short /*$ra*/ PlayFMV__FPcii(char *str /*$s0*/, int w /*$s2*/, int h /*$s3*/)
 // line 95, offset 0x800acf58
	/* begin block 1 */
		// Start line: 96
		// Start offset: 0x800ACF58
		// Variables:
	// 		short RetVal; // $s1
	// 		enum OVER_TYPE CurrentOver; // $s5
	/* end block 1 */
	// End offset: 0x800AD100
	// End Line: 193

	/* begin block 2 */
		// Start line: 190
	/* end block 2 */
	// End Line: 191

/* WARNING: Unknown calling convention yet parameter storage is locked */

short PlayFMV__FPcii(char *str,int w,int h)

{
	bool bVar1;
	short sVar2;
	OVER_TYPE OVar3;
	int iVar4;
	
	PA_SetPauseOk__Fb((void *)0x0);
	OVar3 = OVR_GetCurrentOverlay__Fv();
	music_stop__Fv();
	OVR_LoadFmv__Fv();
	sVar2 = FUN_80158358(str,w,h);
	iVar4 = strcmp(str,"EACLOGO.MOV");
	if (((iVar4 == 0) && (user_start == (void *)0x0)) &&
		 (sVar2 = FUN_80158358("BLIZZARD.MOV",w,h), user_start == (void *)0x0)) {
		sVar2 = FUN_80158358("DIABLO1.MOV",w,h);
	}
	bVar1 = false;
	iVar4 = strcmp(str,"DIABVIC1.MOV");
	if (((iVar4 == 0) || (iVar4 = strcmp(str,"DIABVIC2.MOV"), iVar4 == 0)) ||
		 (iVar4 = strcmp(str,"DIABVIC3.MOV"), iVar4 == 0)) {
		bVar1 = true;
	}
	if ((bVar1) && (user_start == (void *)0x0)) {
		sVar2 = FUN_80158358("DIABEND.MOV",w,h);
	}
	switch(OVar3) {
	case OVR_PREGAME:
		OVR_LoadPregame__Fv();
		break;
	case OVR_GAME:
		OVR_LoadGame__Fv();
		break;
	case OVR_FRONTEND:
		OVR_LoadFrontend__Fv();
	}
	PA_SetPauseOk__Fb(&DAT_00000001);
	return sVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ play_movie(char *pszMovie /*$s2*/)
 // line 197, offset 0x800ad128
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x800AD128

		/* begin block 1.1 */
			// Start line: 198
			// Start offset: 0x800AD128

			/* begin block 1.1.1 */
				// Start line: 200
				// Start offset: 0x800AD154

				/* begin block 1.1.1.1 */
					// Start line: 201
					// Start offset: 0x800AD154
				/* end block 1.1.1.1 */
				// End offset: 0x800AD1D0
				// End Line: 215
			/* end block 1.1.1 */
			// End offset: 0x800AD1D0
			// End Line: 215
		/* end block 1.1 */
		// End offset: 0x800AD1D0
		// End Line: 215
	/* end block 1 */
	// End offset: 0x800AD1D0
	// End Line: 218

	/* begin block 2 */
		// Start line: 400
	/* end block 2 */
	// End Line: 401

/* WARNING: Unknown calling convention yet parameter storage is locked */

void play_movie(char *pszMovie)

{
	int iVar1;
	FMVDAT *pFVar2;
	int iVar3;
	
	if (FileSYS != 1) {
		pFVar2 = &FmvTab;
		iVar3 = 0;
		do {
			iVar1 = strcmp(pszMovie,pFVar2->Name);
			if (iVar1 == 0) {
				iVar1 = fileexists(pFVar2->Name);
				if (iVar1 != 0) {
					PlayFMV__FPcii(pFVar2->Name,(uint)*(ushort *)((int)&FmvTab.Width + iVar3),
												 (uint)*(ushort *)((int)&FmvTab.Height + iVar3));
				}
				SCR_DumpClut__Fv();
				return;
			}
			pFVar2 = pFVar2 + 1;
			iVar3 = iVar3 + 8;
		} while ((int)pFVar2 < -0x7ff32aac);
	}
	return;
}





