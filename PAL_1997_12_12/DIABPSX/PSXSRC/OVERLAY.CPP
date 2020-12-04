#include "THISDUST.H"
#include "OVERLAY.H"


// decompiled code
// original method signature: 
// enum OVER_TYPE /*$ra*/ GetOverType__7Overlay(struct Overlay *this /*$a0*/)
 // line 65, offset 0x8008c030
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8008C030
	/* end block 1 */
	// End offset: 0x8008C034
	// End Line: 66

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

OVER_TYPE GetOverType__7Overlay(Overlay *this)

{
	return this->Over;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ OVR_IsMemcardOverlayBlank__Fv()
 // line 119, offset 0x8008bbdc
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8008BBDC
	/* end block 1 */
	// End offset: 0x8008BBF8
	// End Line: 122

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * OVR_IsMemcardOverlayBlank__Fv(void)

{
	DBG_Error((char *)0x0,"psxsrc/OVERLAY.CPP",0x78);
	return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OVR_LoadPregame__Fv()
 // line 129, offset 0x8008bc08
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8008BC08
	/* end block 1 */
	// End offset: 0x8008BC20
	// End Line: 131

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OVR_LoadPregame__Fv(void)

{
	LoadOver__FR7Overlay(&PregameOver);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OVR_LoadFrontend__Fv()
 // line 137, offset 0x8008bc30
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x8008BC30
	/* end block 1 */
	// End offset: 0x8008BC48
	// End Line: 139

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OVR_LoadFrontend__Fv(void)

{
	LoadOver__FR7Overlay(&FrontEndOver);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OVR_LoadGame__Fv()
 // line 146, offset 0x8008bc58
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x8008BC58
	/* end block 1 */
	// End offset: 0x8008BC70
	// End Line: 148

	/* begin block 2 */
		// Start line: 292
	/* end block 2 */
	// End Line: 293

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OVR_LoadGame__Fv(void)

{
	LoadOver__FR7Overlay(&GameOver);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OVR_LoadFmv__Fv()
 // line 155, offset 0x8008bc80
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x8008BC80
	/* end block 1 */
	// End offset: 0x8008BC98
	// End Line: 157

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OVR_LoadFmv__Fv(void)

{
	LoadOver__FR7Overlay(&FmvOver);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OVR_LoadMemcard__Fv()
 // line 164, offset 0x8008bca8
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x8008BCA8
	/* end block 1 */
	// End offset: 0x8008BCC4
	// End Line: 166

	/* begin block 2 */
		// Start line: 328
	/* end block 2 */
	// End Line: 329

/* WARNING: Unknown calling convention yet parameter storage is locked */

void OVR_LoadMemcard__Fv(void)

{
	DBG_Error((char *)0x0,"psxsrc/OVERLAY.CPP",0xa5);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearOutOverlays__Fv()
 // line 174, offset 0x8008bcd4
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x8008BCD4
	/* end block 1 */
	// End offset: 0x8008BD1C
	// End Line: 179

	/* begin block 2 */
		// Start line: 348
	/* end block 2 */
	// End Line: 349

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearOutOverlays__Fv(void)

{
	ClearOut__7Overlay(&FrontEndOver);
	ClearOut__7Overlay(&PregameOver);
	ClearOut__7Overlay(&GameOver);
	ClearOut__7Overlay(&FmvOver);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearOut__7Overlay(struct Overlay *this /*$s0*/)
 // line 187, offset 0x8008bd2c
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x8008BD2C
	/* end block 1 */
	// End offset: 0x8008BDDC
	// End Line: 195

	/* begin block 2 */
		// Start line: 374
	/* end block 2 */
	// End Line: 375

void ClearOut__7Overlay(Overlay *this)

{
	ulong uVar1;
	ulong uVar2;
	uchar *puVar3;
	
	if (this->Size < 0xc) {
		DBG_Error((char *)0x0,"psxsrc/OVERLAY.CPP",0xbc);
	}
	memset(this->Addr,0,this->Size);
	uVar2 = ULONG_80120368;
	uVar1 = ULONG_80120364;
	puVar3 = this->Addr + this->Size;
	*(ulong *)(puVar3 + -0xc) = HaltTab;
	*(ulong *)(puVar3 + -8) = uVar1;
	*(ulong *)(puVar3 + -4) = uVar2;
	DrawSync(0);
	EnterCriticalSection();
	FlushCache();
	ExitCriticalSection();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Load__7Overlay(struct Overlay *this /*$s0*/)
 // line 203, offset 0x8008bdf0
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x8008BDF0
		// Variables:
	// 		char OverlayFile[256]; // stack offset -264
	/* end block 1 */
	// End offset: 0x8008BE4C
	// End Line: 217

	/* begin block 2 */
		// Start line: 406
	/* end block 2 */
	// End Line: 407

void Load__7Overlay(Overlay *this)

{
	FileIO *this_00;
	
	this_00 = SYSI_GetOverlayFs__Fv();
	ReadAtAddr__6FileIOPCcPUci(this_00,this->FileName,this->Addr,this->Size);
	DBG_SendMessage("OVERLAY IS %s");
	DrawSync(0);
	EnterCriticalSection();
	FlushCache();
	ExitCriticalSection();
	return;
}



// decompiled code
// original method signature: 
// enum OVER_TYPE /*$ra*/ OVR_GetCurrentOverlay__Fv()
 // line 225, offset 0x8008be60
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8008BE60
	/* end block 1 */
	// End offset: 0x8008BE64
	// End Line: 227

	/* begin block 2 */
		// Start line: 451
	/* end block 2 */
	// End Line: 452

/* WARNING: Unknown calling convention yet parameter storage is locked */

OVER_TYPE OVR_GetCurrentOverlay__Fv(void)

{
	return CurrentOverlay;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadOver__FR7Overlay(struct Overlay *Ovr /*$s0*/)
 // line 234, offset 0x8008be6c
	/* begin block 1 */
		// Start line: 235
		// Start offset: 0x8008BE6C
	/* end block 1 */
	// End offset: 0x8008BEAC
	// End Line: 240

	/* begin block 2 */
		// Start line: 468
	/* end block 2 */
	// End Line: 469

void LoadOver__FR7Overlay(Overlay *Ovr)

{
	OVER_TYPE OVar1;
	
	OVar1 = GetOverType__7Overlay(Ovr);
	if (CurrentOverlay != OVar1) {
		ClearOutOverlays__Fv();
		Load__7Overlay(Ovr);
		CurrentOverlay = GetOverType__7Overlay(Ovr);
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.OVR_Open__Fv()
 // line 244, offset 0x8008bec0
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x8008BEC0
	/* end block 1 */
	// End offset: 0x8008C024
	// End Line: 245

	/* begin block 2 */
		// Start line: 488
	/* end block 2 */
	// End Line: 489

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_OVR_Open__Fv(void)

{
	FrontEndOver.Addr = OVR_FrontEndAddress;
	FrontEndOver.Size = (int)OVR_FrontEndSize;
	FrontEndOver.FileName = "frontend.bin";
	FrontEndOver.Over = OVR_FRONTEND;
	PregameOver.Addr = OVR_PregameAddress;
	PregameOver.Size = (int)OVR_PregameSize;
	PregameOver.FileName = "pregame.bin";
	PregameOver.Over = OVR_PREGAME;
	GameOver.Addr = OVR_GameAddress;
	GameOver.Size = (int)OVR_GameSize;
	GameOver.FileName = "game.bin";
	GameOver.Over = OVR_GAME;
	FmvOver.Addr = OVR_FmvAddress;
	FmvOver.Size = (int)OVR_FmvSize;
	FmvOver.FileName = "fmv.bin";
	FmvOver.Over = OVR_FMV;
	return;
}





