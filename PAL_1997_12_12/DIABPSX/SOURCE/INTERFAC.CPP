#include "THISDUST.H"
#include "INTERFAC.H"


// decompiled code
// original method signature: 
// void /*$ra*/ interface_msg_pump__Fv()
 // line 297, offset 0x8003abf8
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x8003ABF8
	/* end block 1 */
	// End offset: 0x8003ABF8
	// End Line: 298

	/* begin block 2 */
		// Start line: 603
	/* end block 2 */
	// End Line: 604

/* WARNING: Unknown calling convention yet parameter storage is locked */

void interface_msg_pump__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowProgress__FUi(unsigned int uMsg /*$s0*/)
 // line 331, offset 0x8003ac00
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x8003AC00
		// Variables:
	// 		int nol; // $s1
	// 		unsigned long (*saveProc)(); // $s2

		/* begin block 1.1 */
			// Start line: 556
			// Start offset: 0x8003B05C

			/* begin block 1.1.1 */
				// Start line: 558
				// Start offset: 0x8003B0C0
			/* end block 1.1.1 */
			// End offset: 0x8003B0C8
			// End Line: 561
		/* end block 1.1 */
		// End offset: 0x8003B0C8
		// End Line: 561
	/* end block 1 */
	// End offset: 0x8003B0D0
	// End Line: 563

	/* begin block 2 */
		// Start line: 662
	/* end block 2 */
	// End Line: 663

void ShowProgress__FUi(uint uMsg)

{
	TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul NewProc;
	uint lvldir;
	uint uVar1;
	uchar firstflag;
	
	OVR_LoadPregame__Fv();
	gbSomebodyWonGameKludge = '\0';
	NewProc = GRL_SetWindowProc__FPFUlUilUl_Ul(DisableInputWndProc__FUlUilUl);
	interface_msg_pump__Fv();
	sound_init__Fv();
	switch(uMsg) {
	case 0x42:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		firstflag = '\0';
		currlevel = currlevel + 1;
		leveltype = (uchar)gnLevelTypeTbl[(uint)currlevel];
		lvldir = 0;
		break;
	case 0x43:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		firstflag = '\0';
		currlevel = currlevel - 1;
		leveltype = (uchar)gnLevelTypeTbl[(uint)currlevel];
		lvldir = 1;
		break;
	case 0x44:
		DeltaSaveLevel__Fv();
		setlevel = '\0';
		FreeGameMem__Fv();
		GetReturnLvlPos__Fv();
		firstflag = '\0';
		lvldir = 3;
		break;
	case 0x45:
		SetReturnLvlPos__Fv();
		DeltaSaveLevel__Fv();
		setlevel = '\x01';
		leveltype = setlvltype;
		FreeGameMem__Fv();
		firstflag = '\0';
		lvldir = 2;
		break;
	case 0x46:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		GetPortalLevel__Fv();
		firstflag = '\0';
		lvldir = 5;
		break;
	case 0x47:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		currlevel = (uchar)plr[myplr].plrlevel;
		leveltype = (uchar)gnLevelTypeTbl[plr[myplr].plrlevel & 0xff];
		lvldir = 6;
		goto LAB_8003af88;
	case 0x48:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		currlevel = (uchar)plr[myplr].plrlevel;
		leveltype = (uchar)gnLevelTypeTbl[plr[myplr].plrlevel & 0xff];
		lvldir = 7;
		goto LAB_8003af88;
	case 0x49:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		currlevel = (uchar)plr[myplr].plrlevel;
		leveltype = (uchar)gnLevelTypeTbl[plr[myplr].plrlevel & 0xff];
		lvldir = 0;
		goto LAB_8003af88;
	case 0x4a:
		FreeGameMem__Fv();
		firstflag = '\x01';
		lvldir = 0;
		break;
	case 0x4b:
		app_fatal("OLD uMSG WM_DIABLOADGAME");
		goto switchD_8003ac64_caseD_b;
	case 0x4c:
		DeltaSaveLevel__Fv();
		FreeGameMem__Fv();
		lvldir = (uint)currlevel;
		uVar1 = plr[myplr].plrlevel;
		currlevel = (uchar)uVar1;
		lvldir = (uint)((int)uVar1 <= (int)lvldir);
		leveltype = (uchar)gnLevelTypeTbl[uVar1 & 0xff];
LAB_8003af88:
		firstflag = '\0';
		break;
	default:
		goto switchD_8003ac64_caseD_b;
	}
	LoadGameLevel__FUci(firstflag,lvldir);
switchD_8003ac64_caseD_b:
	OVR_LoadGame__Fv();
	GRL_SetWindowProc__FPFUlUilUl_Ul((TDRFuncPtr_GRL_SetWindowProc__FPFUlUilUl_Ul0NewProc)NewProc);
	NetSendCmdLocParam1__FUcUcUcUcUs
						('\x01','5',*(uchar *)&plr[myplr]._px,*(uchar *)&plr[myplr]._py,
						 (uint)*(ushort *)&plr[myplr].plrlevel);
	if (plr[1].plractive != '\0') {
		myplr = 1;
		NetSendCmdLocParam1__FUcUcUcUcUs
							('\x01','5',(uchar)plr[1]._px,(uchar)plr[1]._py,(uint)(ushort)plr[1].plrlevel);
		myplr = 0;
	}
	ResetPal__Fv();
	if ((gbSomebodyWonGameKludge != '\0') && (plr[myplr].plrlevel == 0x10)) {
		PrepDoEnding__Fv();
	}
	gbSomebodyWonGameKludge = '\0';
	return;
}





