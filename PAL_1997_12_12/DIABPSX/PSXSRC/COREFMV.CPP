#include "THISDUST.H"
#include "COREFMV.H"


// decompiled code
// original method signature: 
// short /*$ra*/ PlayFMV__FPcii(char *str /*$s0*/, int w /*$s1*/, int h /*$s2*/)
 // line 90, offset 0x8009f9f8
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x8009F9F8
		// Variables:
	// 		short RetVal; // $s0
	// 		enum OVER_TYPE CurrentOver; // $s3
	/* end block 1 */
	// End offset: 0x8009FA98
	// End Line: 126

	/* begin block 2 */
		// Start line: 180
	/* end block 2 */
	// End Line: 181

short PlayFMV__FPcii(char *str,int w,int h)

{
	short sVar1;
	OVER_TYPE OVar2;
	
	OVar2 = OVR_GetCurrentOverlay__Fv();
	music_stop__Fv();
	OVR_LoadFmv__Fv();
	sVar1 = FUN_8014c03c(str,w,h);
	switch(OVar2) {
	case OVR_PREGAME:
		OVR_LoadPregame__Fv();
		break;
	case OVR_GAME:
		OVR_LoadGame__Fv();
		break;
	case OVR_FRONTEND:
		OVR_LoadFrontend__Fv();
	}
	return sVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ play_movie(char *pszMovie /*$s2*/)
 // line 130, offset 0x8009fab8
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x8009FAB8

		/* begin block 1.1 */
			// Start line: 131
			// Start offset: 0x8009FAB8

			/* begin block 1.1.1 */
				// Start line: 133
				// Start offset: 0x8009FAE4

				/* begin block 1.1.1.1 */
					// Start line: 134
					// Start offset: 0x8009FAE4
				/* end block 1.1.1.1 */
				// End offset: 0x8009FB44
				// End Line: 141
			/* end block 1.1.1 */
			// End offset: 0x8009FB44
			// End Line: 141
		/* end block 1.1 */
		// End offset: 0x8009FB44
		// End Line: 141
	/* end block 1 */
	// End offset: 0x8009FB54
	// End Line: 144

	/* begin block 2 */
		// Start line: 260
	/* end block 2 */
	// End Line: 261

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
				PlayFMV__FPcii(pFVar2->Name,(uint)*(ushort *)((int)&FmvTab.Width + iVar3),
											 (uint)*(ushort *)((int)&FmvTab.Height + iVar3));
				return;
			}
			pFVar2 = pFVar2 + 1;
			iVar3 = iVar3 + 8;
		} while ((int)pFVar2 < -0x7ff43184);
	}
	DBG_SendMessage("MISSING FMV %s");
	return;
}





