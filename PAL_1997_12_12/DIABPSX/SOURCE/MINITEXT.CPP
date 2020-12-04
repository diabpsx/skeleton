#include "THISDUST.H"
#include "MINITEXT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FreeQuestText__Fv()
 // line 110, offset 0x80047314
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x80047314
	/* end block 1 */
	// End offset: 0x80047314
	// End Line: 111

	/* begin block 2 */
		// Start line: 223
	/* end block 2 */
	// End Line: 224

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeQuestText__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitQuestText__Fv()
 // line 117, offset 0x8004731c
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x8004731C
	/* end block 1 */
	// End offset: 0x80047320
	// End Line: 122

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitQuestText__Fv(void)

{
	qtextflag = '\0';
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcTextSpeed__FPCc(char *Name /*$a2*/)
 // line 129, offset 0x80047328
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80047328
		// Variables:
	// 		char *ptr; // $s0
	// 		char SpeechName[16]; // stack offset -56
	// 		unsigned long SfxFrames; // $s3
	// 		unsigned long TextHeight; // $v0
	// 		int NoLines; // $s2
	// 		int cw; // $s1
	/* end block 1 */
	// End offset: 0x80047444
	// End Line: 167

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

void CalcTextSpeed__FPCc(char *Name)

{
	char cVar1;
	char ch;
	uint uVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	int iVar6;
	char acStack56 [32];
	
	pcVar4 = qtextptr;
	iVar6 = 0;
	iVar5 = 0;
	if (FileSYS == 2) {
		sprintf(acStack56,"%s.VAG",Name);
		uVar2 = BL_FileLength__FPcc(acStack56,'\0');
		ch = *pcVar4;
		cVar1 = *pcVar4;
		while (cVar1 != '\0') {
			iVar3 = GetCharWidth__5CFontc(&MediumFont,ch);
			iVar5 = iVar5 + iVar3;
			if ((0x117 < iVar5) || (*pcVar4 == '\n')) {
				iVar5 = 0;
				iVar6 = iVar6 + 1;
			}
			pcVar4 = pcVar4 + 1;
			cVar1 = *pcVar4;
			ch = *pcVar4;
		}
		qtextSpd = (uint)(((iVar6 + 1) * 0xf + 0xe7) * 0x100) / (uVar2 / 0x69);
	}
	else {
		qtextSpd = 0x100;
	}
	qtbodge = (void *)0x0;
	scrolltexty = qtexty << 8;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitQTextMsg__Fi(int m /*$s0*/)
 // line 175, offset 0x80047468
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x80047468
		// Variables:
	// 		char Name[8]; // stack offset -16
	/* end block 1 */
	// End offset: 0x80047568
	// End Line: 215

	/* begin block 2 */
		// Start line: 373
	/* end block 2 */
	// End Line: 374

void InitQTextMsg__Fi(int m)

{
	_125fake psfx;
	char acStack16 [8];
	
	stream_stop__Fv();
	sglMusicVolumeSave = sglMusicVolume;
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	TSK_Sleep(1);
	if (alltext[m].scrlltxt != '\0') {
		qtextflag = '\x01';
		questlog = '\0';
		qtextptr = (char *)0x0;
		CDWAIT = &DAT_00000001;
		options_pad = myplr;
		qtextptr = GetStr__Fi(alltext[m].txtstr);
		CDWAIT = (void *)0x0;
		qtexty = 0xf6;
		sgLastScroll = VID_GetTick__Fv();
	}
	psfx = alltext[m].sfxnr;
	sprintf(acStack16,&DAT_8012b3c4,psfx);
	CalcTextSpeed__FPCc(acStack16);
	TSK_AddTask(0,DrawQTextTSK__FP4TASK,0x800,0);
	PlaySFX__Fi(psfx);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQTextBack__Fv()
 // line 219, offset 0x8004757c
	/* begin block 1 */
		// Start line: 220
		// Start offset: 0x8004757C
	/* end block 1 */
	// End offset: 0x800475D8
	// End Line: 226

	/* begin block 2 */
		// Start line: 478
	/* end block 2 */
	// End Line: 479

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQTextBack__Fv(void)

{
	SetBorder__6Dialogi(&QBack,0x30);
	SetRGB__6DialogUcUcUc(&QBack,BORDERR,BORDERG,BORDERB);
	Back__6Dialogiiii(&QBack,0x14,0x18,0x118,0xc9);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQTextTSK__FP4TASK(struct TASK *T /*$a0*/)
 // line 232, offset 0x800475ec
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800475EC
	/* end block 1 */
	// End offset: 0x800476AC
	// End Line: 262

	/* begin block 2 */
		// Start line: 508
	/* end block 2 */
	// End Line: 509

void DrawQTextTSK__FP4TASK(TASK *T)

{
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SuspendGame__Fv();
	while (qtextflag != '\0') {
		DrawQText__Fv();
		TSK_Sleep(1);
	}
	GetStr__Fi(STR_PAUSE);
	if (Qfromoptions == '\0') {
		if (stextflag == '\0') {
			PostGamePad__Fiiii(5,0,0,0);
		}
		GLUE_ResumeGame__Fv();
		GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
		GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	}
	else {
		options_pad = (uint)Qfromoptions - 1;
		ToggleOptions__Fv();
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawQText__Fv()
 // line 277, offset 0x800476bc
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x800476BC
		// Variables:
	// 		char *p; // $s2
	// 		char *pnl; // stack offset -64
	// 		char *SpacePtr; // $s5
	// 		char tempstr[128]; // stack offset -200
	// 		int ty; // $fp
	// 		int l; // $s3
	// 		int i; // $s1
	// 		unsigned char doneflag; // $s7
	// 		struct RECT ClipRect; // stack offset -72
	// 		unsigned long currTime; // $a0
	// 		int LetterCount; // $s4
	/* end block 1 */
	// End offset: 0x800479D0
	// End Line: 385

	/* begin block 2 */
		// Start line: 598
	/* end block 2 */
	// End Line: 599

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawQText__Fv(void)

{
	bool bVar1;
	char cVar2;
	int iVar3;
	ulong uVar4;
	char ch;
	char *pcVar5;
	int iVar6;
	char *pcVar7;
	char *pcVar8;
	int iVar9;
	int iVar10;
	char *pcVar11;
	int iVar12;
	char local_c8 [128];
	RECT local_48;
	char *local_40;
	
	local_48.x = 0x14;
	local_48.y = 0x18;
	local_48.w = 0x118;
	local_48.h = 0xc9;
	DrawQTextBack__Fv();
	if (qtextptr == (char *)0x0) {
		return;
	}
	bVar1 = false;
	local_40 = (char *)0x0;
	pcVar8 = qtextptr;
	iVar12 = qtexty;
	do {
		iVar9 = 0;
		pcVar11 = (char *)0x0;
		iVar10 = 0;
		cVar2 = *pcVar8;
		ch = *pcVar8;
		iVar6 = 0;
		if (cVar2 == '\n') {
LAB_800477c4:
			if (cVar2 == '|') goto LAB_800477d0;
		}
		else {
			pcVar7 = pcVar8;
			if (cVar2 != '|') {
				do {
					pcVar5 = local_c8 + iVar6;
					pcVar8 = pcVar7;
					if (ch == '\0') break;
					pcVar8 = pcVar7 + 1;
					*pcVar5 = ch;
					iVar3 = GetCharWidth__5CFontc(&MediumFont,ch);
					iVar9 = iVar9 + iVar3;
					iVar10 = iVar10 + 1;
					if (*pcVar5 == ' ') {
						iVar10 = 1;
						pcVar11 = pcVar7;
					}
					cVar2 = *pcVar8;
					ch = *pcVar8;
					iVar6 = iVar6 + 1;
					if (cVar2 == '\n') goto LAB_800477c4;
					if (cVar2 == '|') goto LAB_800477d0;
					pcVar7 = pcVar8;
				} while (iVar9 < 0x118);
				cVar2 = *pcVar8;
				goto LAB_800477c4;
			}
LAB_800477d0:
			bVar1 = true;
			cVar2 = *pcVar8;
		}
		if (cVar2 == '\n') {
			pcVar8 = pcVar8 + 1;
		}
		if (*pcVar8 == '\0') {
			bVar1 = true;
		}
		if ((0x117 < iVar9) && (pcVar11 != (char *)0x0)) {
			iVar6 = iVar6 - iVar10;
			pcVar8 = pcVar11;
		}
		local_c8[iVar6] = '\0';
		strlen(local_c8);
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,0,iVar12 + -0x1e,local_c8,JustCentre,&local_48,(uint)BORDERR,
							 (uint)BORDERG,(uint)BORDERB);
		if (local_40 == (char *)0x0) {
			local_40 = pcVar8;
		}
		iVar12 = iVar12 + 0xf;
		if (0xf6 < iVar12) {
			bVar1 = true;
		}
	} while (!bVar1);
	if (FileSYS == 2) {
		if ((sghStream->playing == '\0') || (sghStream->stream_stall != 0)) {
			if (qtbodge == (void *)0x0) {
				CDWAIT = &DAT_00000001;
				sgLastScroll = VID_GetTick__Fv();
			}
			else {
				CDWAIT = (void *)0x0;
				qtextflag = '\0';
			}
			goto LAB_8004798c;
		}
		CDWAIT = (void *)0x0;
		uVar4 = VID_GetTick__Fv();
		qtbodge = &DAT_00000001;
		iVar12 = qtextSpd * (uVar4 - sgLastScroll);
		sgLastScroll = uVar4;
	}
	else {
		uVar4 = VID_GetTick__Fv();
		iVar12 = qtextSpd * (uVar4 - sgLastScroll);
		sgLastScroll = uVar4;
	}
	scrolltexty = scrolltexty - iVar12;
	qtexty = scrolltexty >> 8;
LAB_8004798c:
	if (qtexty < 0x10) {
		scrolltexty = scrolltexty + 0xf00;
		qtexty = scrolltexty >> 8;
		qtextptr = local_40;
		if (*local_40 == '|') {
			qtextflag = '\0';
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.D.QBack()
 // line 390, offset 0x80047a04
	/* begin block 1 */
		// Start line: 391
		// Start offset: 0x80047A04
	/* end block 1 */
	// End offset: 0x80047A1C
	// End Line: 391

	/* begin block 2 */
		// Start line: 851
	/* end block 2 */
	// End Line: 852

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__D_QBack(void)

{
	___6Dialog(&QBack,2);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _GLOBAL_.I.QBack()
 // line 390, offset 0x80047a2c
	/* begin block 1 */
		// Start line: 391
		// Start offset: 0x80047A2C
	/* end block 1 */
	// End offset: 0x80047A44
	// End Line: 391

	/* begin block 2 */
		// Start line: 851
	/* end block 2 */
	// End Line: 852

/* WARNING: Unknown calling convention yet parameter storage is locked */

void _GLOBAL__I_QBack(void)

{
	__6Dialog(&QBack);
	return;
}





