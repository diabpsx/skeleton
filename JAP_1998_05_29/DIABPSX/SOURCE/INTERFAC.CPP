#include "THISDUST.H"
#include "INTERFAC.H"


// decompiled code
// original method signature: 
// void /*$ra*/ interface_msg_pump__Fv()
 // line 302, offset 0x8003de38
	/* begin block 1 */
		// Start line: 303
		// Start offset: 0x8003DE38
	/* end block 1 */
	// End offset: 0x8003DE38
	// End Line: 303

	/* begin block 2 */
		// Start line: 613
	/* end block 2 */
	// End Line: 614

/* WARNING: Unknown calling convention yet parameter storage is locked */

void interface_msg_pump__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowProgress__FUi(unsigned int uMsg /*$s0*/)
 // line 336, offset 0x8003de40
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x8003DE40
		// Variables:
	// 		unsigned long (*saveProc)(); // $s1
	/* end block 1 */
	// End offset: 0x8003E1FC
	// End Line: 577

	/* begin block 2 */
		// Start line: 672
	/* end block 2 */
	// End Line: 673

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShowProgress__FUi(uint uMsg)

{
	TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul NewProc;
	uchar firstflag;
	int lvldir;
	
	OVR_LoadPregame__Fv();
	gbSomebodyWonGameKludge = '\0';
	NewProc = GRL_SetWindowProc__FPFUlUilUl_Ul(DisableInputWndProc__FUlUilUl);
	interface_msg_pump__Fv();
	sound_init__Fv();
	if (uMsg != 0x4a) {
		DeltaSaveLevel__Fv();
	}
	switch(uMsg) {
	case 0x42:
		FreeGameMem__Fv();
		firstflag = '\0';
		currlevel = currlevel + 1;
		leveltype = (uchar)gnLevelTypeTbl[(uint)currlevel];
		lvldir = 0;
		break;
	case 0x43:
		FreeGameMem__Fv();
		firstflag = '\0';
		currlevel = currlevel - 1;
		leveltype = (uchar)gnLevelTypeTbl[(uint)currlevel];
		lvldir = 1;
		break;
	case 0x44:
		setlevel = '\0';
		FreeGameMem__Fv();
		GetReturnLvlPos__Fv();
		firstflag = '\0';
		lvldir = 3;
		break;
	case 0x45:
		SetReturnLvlPos__Fv();
		setlevel = '\x01';
		leveltype = setlvltype;
		FreeGameMem__Fv();
		firstflag = '\0';
		lvldir = 2;
		break;
	case 0x46:
		FreeGameMem__Fv();
		GetPortalLevel__Fv();
		firstflag = '\0';
		lvldir = 5;
		break;
	case 0x47:
		FreeGameMem__Fv();
		currlevel = (uchar)(&plr)[myplr].plrlevel;
		leveltype = (uchar)gnLevelTypeTbl[(&plr)[myplr].plrlevel & 0xff];
		lvldir = 6;
		goto LAB_8003e110;
	case 0x48:
		FreeGameMem__Fv();
		currlevel = (uchar)(&plr)[myplr].plrlevel;
		leveltype = (uchar)gnLevelTypeTbl[(&plr)[myplr].plrlevel & 0xff];
		lvldir = 7;
		goto LAB_8003e110;
	case 0x49:
		FreeGameMem__Fv();
		currlevel = (uchar)(&plr)[myplr].plrlevel;
		leveltype = (uchar)gnLevelTypeTbl[(&plr)[myplr].plrlevel & 0xff];
		lvldir = 0;
LAB_8003e110:
		firstflag = '\0';
		break;
	case 0x4a:
		FreeGameMem__Fv();
		firstflag = '\x01';
		lvldir = 0;
		break;
	case 0x4b:
		app_fatal("OLD uMSG WM_DIABLOADGAME");
	default:
		goto switchD_8003deb4_caseD_a;
	}
	LoadGameLevel__FUci(firstflag,lvldir);
switchD_8003deb4_caseD_a:
	OVR_LoadGame__Fv();
	SyncPortals__Fv();
	GRL_SetWindowProc__FPFUlUilUl_Ul((TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc)NewProc);
	NetSendCmdLocParam1__FUcUcUcUcUs
						('\x01','5',*(uchar *)&(&plr)[myplr]._px,*(uchar *)&(&plr)[myplr]._py,
						 (uint)*(ushort *)&(&plr)[myplr].plrlevel);
	if (PlayerStruct_800dbf20.plractive != '\0') {
		myplr = 1;
		NetSendCmdLocParam1__FUcUcUcUcUs
							('\x01','5',(uchar)PlayerStruct_800dbf20._px,(uchar)PlayerStruct_800dbf20._py,
							 (uint)(ushort)PlayerStruct_800dbf20.plrlevel);
		myplr = 0;
	}
	ResetPal__Fv();
	gbSomebodyWonGameKludge = '\0';
	return;
}





