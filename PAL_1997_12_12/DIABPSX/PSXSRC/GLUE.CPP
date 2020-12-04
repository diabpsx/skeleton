#include "THISDUST.H"
#include "GLUE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_SetMonsterList__Fi(int List /*$a0*/)
 // line 222, offset 0x800914d4
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x800914D4
	/* end block 1 */
	// End offset: 0x800914D8
	// End Line: 224

	/* begin block 2 */
		// Start line: 445
	/* end block 2 */
	// End Line: 446

void GLUE_SetMonsterList__Fi(int List)

{
	CurrentMonsterList = List;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GLUE_GetMonsterList__Fv()
 // line 233, offset 0x800914e0
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x800914E0
	/* end block 1 */
	// End offset: 0x800914E4
	// End Line: 235

	/* begin block 2 */
		// Start line: 467
	/* end block 2 */
	// End Line: 468

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GLUE_GetMonsterList__Fv(void)

{
	return CurrentMonsterList;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_SuspendGame__Fv()
 // line 244, offset 0x800914ec
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x800914EC
		// Variables:
	// 		struct TASK *T; // $s0
	/* end block 1 */
	// End offset: 0x8009152C
	// End Line: 250

	/* begin block 2 */
		// Start line: 488
	/* end block 2 */
	// End Line: 489

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_SuspendGame__Fv(void)

{
	TASK *T;
	
	T = TSK_Exist((TASK *)0x0,0x4000,0xffffffff);
	if (T == (TASK *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0xf8);
	}
	TSK_MakeTaskInactive(T);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_ResumeGame__Fv()
 // line 259, offset 0x80091540
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x80091540
		// Variables:
	// 		struct TASK *T; // $s0
	/* end block 1 */
	// End offset: 0x80091580
	// End Line: 265

	/* begin block 2 */
		// Start line: 521
	/* end block 2 */
	// End Line: 522

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_ResumeGame__Fv(void)

{
	TASK *T;
	
	T = TSK_Exist((TASK *)0x0,0x4000,0xffffffff);
	if (T == (TASK *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x107);
	}
	TSK_MakeTaskActive(T);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_PreTown__Fv()
 // line 274, offset 0x80091594
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x80091594
	/* end block 1 */
	// End offset: 0x800915E8
	// End Line: 282

	/* begin block 2 */
		// Start line: 555
	/* end block 2 */
	// End Line: 556

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_PreTown__Fv(void)

{
	if (started_grtask == '\0') {
		TSK_AddTask(0,switchnight__FP4TASK,0x400,0);
		started_grtask = '\x01';
	}
	daylight = '\x01';
	GRL_PostMessage__FUlUilUl(ghMainWnd,0x4a,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_PreDun__Fv()
 // line 290, offset 0x800915f8
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x800915F8
	/* end block 1 */
	// End offset: 0x80091634
	// End Line: 297

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_PreDun__Fv(void)

{
	if (started_grtask == '\0') {
		TSK_AddTask(0,switchnight__FP4TASK,0x400,0);
		started_grtask = '\x01';
	}
	daylight = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_Finished__Fv()
 // line 316, offset 0x80091644
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x80091644
	/* end block 1 */
	// End offset: 0x80091648
	// End Line: 318

	/* begin block 2 */
		// Start line: 643
	/* end block 2 */
	// End Line: 644

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GLUE_Finished__Fv(void)

{
	return GlueFinished;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_SetFinished__Fb(void * NewFinished /*$a0*/)
 // line 327, offset 0x80091650
	/* begin block 1 */
		// Start line: 328
		// Start offset: 0x80091650
	/* end block 1 */
	// End offset: 0x80091654
	// End Line: 329

	/* begin block 2 */
		// Start line: 665
	/* end block 2 */
	// End Line: 666

void GLUE_SetFinished__Fb(void *NewFinished)

{
	GlueFinished = NewFinished;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_StartBg__Fibi(int TextId /*$s0*/, void * IsTown /*$s1*/, int Level /*$s2*/)
 // line 338, offset 0x8009165c
	/* begin block 1 */
		// Start line: 339
		// Start offset: 0x8009165C
		// Variables:
	// 		struct DEF_ARGS *Args; // $v0
	/* end block 1 */
	// End offset: 0x800916C4
	// End Line: 351

	/* begin block 2 */
		// Start line: 686
	/* end block 2 */
	// End Line: 687

void GLUE_StartBg__Fibi(int TextId,void *IsTown,int Level)

{
	TASK *pTVar1;
	int *piVar2;
	
	if ((IsTown != (void *)0x0) && (daylight == '\0')) {
		TextId = 0x26;
	}
	pTVar1 = TSK_AddTask(0x8000,BgTask__FP4TASK,0x2000,0x10);
	piVar2 = (int *)pTVar1->fActive;
	*piVar2 = TextId;
	*(void **)(piVar2 + 1) = IsTown;
	piVar2[2] = Level;
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_SetShowGameScreenFlag__Fb(void * NewFlag /*$a0*/)
 // line 359, offset 0x800916e0
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x800916E0
		// Variables:
	// 		void * OldFlag; // $v0
	/* end block 1 */
	// End offset: 0x800916E8
	// End Line: 364

	/* begin block 2 */
		// Start line: 730
	/* end block 2 */
	// End Line: 731

void * GLUE_SetShowGameScreenFlag__Fb(void *NewFlag)

{
	void *pvVar1;
	
	pvVar1 = DoDrawBg;
	DoDrawBg = NewFlag;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_SetHomingScrollFlag__Fb(void * NewFlag /*$a0*/)
 // line 371, offset 0x800916f0
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x800916F0
		// Variables:
	// 		void * OldFlag; // $v0
	/* end block 1 */
	// End offset: 0x800916F8
	// End Line: 376

	/* begin block 2 */
		// Start line: 754
	/* end block 2 */
	// End Line: 755

void * GLUE_SetHomingScrollFlag__Fb(void *NewFlag)

{
	void *pvVar1;
	
	pvVar1 = DoHomingScroll;
	DoHomingScroll = NewFlag;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_SetShowPanelFlag__Fb(void * NewFlag /*$a0*/)
 // line 383, offset 0x80091700
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x80091700
		// Variables:
	// 		void * OldFlag; // $v0
	/* end block 1 */
	// End offset: 0x80091708
	// End Line: 388

	/* begin block 2 */
		// Start line: 778
	/* end block 2 */
	// End Line: 779

void * GLUE_SetShowPanelFlag__Fb(void *NewFlag)

{
	void *pvVar1;
	
	pvVar1 = DoShowPanel;
	DoShowPanel = NewFlag;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1 /*$a0*/, struct GPanel *P2 /*$s1*/)
 // line 397, offset 0x80091710
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x80091710
	/* end block 1 */
	// End offset: 0x800917D0
	// End Line: 418

	/* begin block 2 */
		// Start line: 804
	/* end block 2 */
	// End Line: 805

void DoShowPanelGFX__FP6GPanelT0(GPanel *P1,GPanel *P2)

{
	PanelXY *XY;
	PlayerStruct *Plr;
	
	if (plr[0].plractive == '\0') {
		if (plr[1].plractive == '\0') {
			return;
		}
		sel_data = 1;
		XY = &DefP2PanelXY;
		Plr = plr + 1;
	}
	else {
		if (plr[1].plractive == '\0') {
			sel_data = 0;
			XY = &DefP1PanelXY;
			Plr = plr;
			P2 = P1;
		}
		else {
			sel_data = 0;
			Print__6GPanelP7PanelXYP12PlayerStruct(P1,&DefP1PanelXY2,plr);
			XY = &DefP2PanelXY2;
			sel_data = 1;
			Plr = plr + 1;
		}
	}
	Print__6GPanelP7PanelXYP12PlayerStruct(P2,XY,Plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BgTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 428, offset 0x800917e8
	/* begin block 1 */
		// Start line: 429
		// Start offset: 0x800917E8
		// Variables:
	// 		struct DEF_ARGS *Args; // $v0
	// 		void * IsTown; // $s3
	// 		int TextId; // $s0
	// 		int Level; // $s1
	// 		int ObjId; // $s2
	// 		int List; // $s4
	// 		struct CBlocks MyBlocks; // stack offset -560
	// 		struct CPlayer MyPlayer; // stack offset -336
	// 		struct CPlayer MyPlayer2; // stack offset -200
	// 		struct GPanel P1Panel; // stack offset -64
	// 		struct GPanel P2Panel; // stack offset -48
	/* end block 1 */
	// End offset: 0x80091C84
	// End Line: 590

	/* begin block 2 */
		// Start line: 869
	/* end block 2 */
	// End Line: 870

void BgTask__FP4TASK(TASK *T)

{
	ushort uVar1;
	bool bVar2;
	int *piVar3;
	void *pvVar4;
	PInf *pPVar5;
	undefined *puVar6;
	int Frames;
	PlayerStruct *Plr;
	int BgId;
	int Level;
	int ObjId;
	void *Val;
	int List;
	CBlocks CStack560;
	CPlayer CStack336;
	CPlayer CStack200;
	GPanel GStack64;
	GPanel GStack48;
	
	ObjId = -1;
	List = -1;
	piVar3 = (int *)T->fActive;
	BgId = *piVar3;
	Level = piVar3[2];
	bVar2 = piVar3[1] != 0;
	Val = (void *)(uint)bVar2;
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SetFinished__Fb((void *)0x0);
	Frames = 2;
	do {
		TSK_Sleep(Frames);
		pvVar4 = GetFadeState__Fv();
		Frames = 1;
	} while (pvVar4 != (void *)0x0);
	if (bVar2) {
		BgId = 0x26;
		if (daylight != '\0') {
			BgId = 0x25;
		}
		Level = 0;
	}
	else {
		ObjId = 0xcc;
		List = GLUE_GetMonsterList__Fv();
	}
	__7CBlocksiiiii(&CStack560,BgId,ObjId,0,Level,List);
	SetTown__7CBlocksb(&CStack560,Val);
	UPDATEPROGRESS__Fi(4);
	__7CPlayerbi(&CStack336,Val,0);
	__7CPlayerbi(&CStack200,Val,1);
	if (bVar2) {
		if (plr[0].plractive != '\0') {
			pPVar5 = FindPlayerChar__FP12PlayerStruct(plr);
			Load__7CPlayeri(&CStack336,(uint)pPVar5->TownTex);
		}
		UPDATEPROGRESS__Fi(1);
		if (plr[1].plractive == '\0') goto LAB_800919ac;
		pPVar5 = FindPlayerChar__FP12PlayerStruct(plr + 1);
		uVar1 = pPVar5->TownTex;
	}
	else {
		if (plr[0].plractive != '\0') {
			pPVar5 = FindPlayerChar__FP12PlayerStruct(plr);
			Load__7CPlayeri(&CStack336,(uint)pPVar5->GameTex);
		}
		UPDATEPROGRESS__Fi(1);
		if (plr[1].plractive == '\0') goto LAB_800919ac;
		pPVar5 = FindPlayerChar__FP12PlayerStruct(plr + 1);
		uVar1 = pPVar5->GameTex;
	}
	Load__7CPlayeri(&CStack200,(uint)uVar1);
LAB_800919ac:
	UPDATEPROGRESS__Fi(1);
	FinishProgress__Fv();
	TakeDownCutScreen__Fv();
	if (leveltype == '\0') {
		SetTownersGraphics__7CBlocks(&CStack560);
		List = 0xcb;
	}
	else {
		List = 0xd0;
	}
	MissDat = GM_UseTexData__Fi(List);
	music_start__Fi((uint)leveltype);
	PaletteFadeIn__Fi(8);
	SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(&CStack336,plr,&CStack560);
	MoveToScrollTarget__7CBlocks(&CStack560);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	TSK_AddTask(0x8000,color_cycle__FP4TASK,0x1000,0);
	if ((bVar2) && (daylight == '\0')) {
		TSK_AddTask(0x8000,city_lights__FP4TASK,0x400,0);
	}
	TSK_AddTask(0x8000,DaveLTask__FP4TASK,0x1000,0);
	__6GPaneli(&GStack64,0);
	__6GPaneli(&GStack48,0);
	gplayer = &CStack336;
	VID_GetTick__Fv();
	while( true ) {
		puVar6 = (undefined *)GLUE_Finished__Fv();
		if (puVar6 == &DAT_00000001) break;
		VID_GetTick__Fv();
		VID_GetTick__Fv();
		if (DoDrawBg != (void *)0x0) {
			Plr = plr;
			if (plr[0].plractive == '\0') {
				Plr = plr + 1;
			}
			SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(&CStack336,Plr,&CStack560);
			if (plr[0].plractive != '\0') {
				SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(&CStack336,&CStack560,plr);
			}
			if (plr[1].plractive != '\0') {
				SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(&CStack200,&CStack560,plr + 1);
			}
			if ((DoHomingScroll != (void *)0x0) && (deathflag == '\0')) {
				DoScroll__7CBlocks(&CStack560);
			}
			Print__7CBlocks(&CStack560);
			if (DoShowPanel != (void *)0x0) {
				DoShowPanelGFX__FP6GPanelT0(&GStack64,&GStack48);
			}
			if (plr[0].plractive != '\0') {
				MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(&CStack336,plr,Val);
				Print__7CPlayerR12PlayerStructR7CBlocks(&CStack336,plr,&CStack560);
			}
			if (plr[1].plractive != '\0') {
				MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(&CStack200,plr + 1,Val);
				Print__7CPlayerR12PlayerStructR7CBlocks(&CStack200,plr + 1,&CStack560);
			}
			if (bVar2) {
				DrawLBird__Fv();
			}
			if (deathflag != '\0') {
				RedBack__Fv();
				GO_DoGameOver__Fv();
			}
		}
		TSK_Sleep(1);
	}
	gplayer = (CPlayer *)0x0;
	___7CPlayer(&CStack200,2);
	___7CPlayer(&CStack336,2);
	___7CBlocks(&CStack560,2);
	return;
}



// decompiled code
// original method signature: 
// struct PInf * /*$ra*/ FindPlayerChar__FPc(char *Id /*$s2*/)
 // line 599, offset 0x80091cac
	/* begin block 1 */
		// Start line: 600
		// Start offset: 0x80091CAC

		/* begin block 1.1 */
			// Start line: 600
			// Start offset: 0x80091CAC
		/* end block 1.1 */
		// End offset: 0x80091D00
		// End Line: 607
	/* end block 1 */
	// End offset: 0x80091D18
	// End Line: 610

	/* begin block 2 */
		// Start line: 1229
	/* end block 2 */
	// End Line: 1230

PInf * FindPlayerChar__FPc(char *Id)

{
	int iVar1;
	int iVar2;
	PInf *pPVar3;
	
	pPVar3 = &PlayerInfo;
	iVar2 = 0;
	do {
		iVar1 = strcmp(*(char **)((int)&PlayerInfo.Tx + iVar2),Id);
		iVar2 = iVar2 + 8;
		if (iVar1 == 0) {
			return pPVar3;
		}
		pPVar3 = pPVar3 + 1;
	} while (iVar2 < 0x288);
	DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x260);
	return (PInf *)0x0;
}



// decompiled code
// original method signature: 
// struct PInf * /*$ra*/ FindPlayerChar__Fiii(int Char /*$a0*/, int Wep /*$a1*/, int Arm /*$a2*/)
 // line 614, offset 0x80091d34
	/* begin block 1 */
		// Start line: 615
		// Start offset: 0x80091D34
		// Variables:
	// 		char TxBuff[20]; // stack offset -32
	/* end block 1 */
	// End offset: 0x80091D80
	// End Line: 621

	/* begin block 2 */
		// Start line: 1261
	/* end block 2 */
	// End Line: 1262

PInf * FindPlayerChar__Fiii(int Char,int Wep,int Arm)

{
	PInf *pPVar1;
	char acStack32 [24];
	
	sprintf(acStack32,"%c%c%c",(int)"WRS"[Char],(int)"LMH"[Arm],(int)"NUSDBAMHT"[Wep]);
	pPVar1 = FindPlayerChar__FPc(acStack32);
	return pPVar1;
}



// decompiled code
// original method signature: 
// struct PInf * /*$ra*/ FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P /*$a0*/)
 // line 624, offset 0x80091d90
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x80091D90
	/* end block 1 */
	// End offset: 0x80091DB0
	// End Line: 630

	/* begin block 2 */
		// Start line: 1283
	/* end block 2 */
	// End Line: 1284

PInf * FindPlayerChar__FP12PlayerStruct(PlayerStruct *P)

{
	PInf *pPVar1;
	
	pPVar1 = FindPlayerChar__Fiii
										 ((int)P->_pClass,(uint)(byte)P->_pgfxnum & 0xf,
											(int)((uint)(byte)P->_pgfxnum << 0x18) >> 0x1c);
	return pPVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P /*$a0*/, void * InTown /*$s0*/)
 // line 633, offset 0x80091dc0
	/* begin block 1 */
		// Start line: 634
		// Start offset: 0x80091DC0
		// Variables:
	// 		struct PInf *Inf; // $v0
	/* end block 1 */
	// End offset: 0x80091DEC
	// End Line: 640

	/* begin block 2 */
		// Start line: 1304
	/* end block 2 */
	// End Line: 1305

int FindPlayerChar__FP12PlayerStructb(PlayerStruct *P,void *InTown)

{
	ushort uVar1;
	PInf *pPVar2;
	
	pPVar2 = FindPlayerChar__FP12PlayerStruct(P);
	if (InTown == (void *)0x0) {
		uVar1 = pPVar2->GameTex;
	}
	else {
		uVar1 = pPVar2->TownTex;
	}
	return (uint)uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player /*$s1*/, struct PlayerStruct *Plr /*$a1*/, void * InTown /*$a2*/)
 // line 649, offset 0x80091e00
	/* begin block 1 */
		// Start line: 650
		// Start offset: 0x80091E00
		// Variables:
	// 		int Id; // $s0
	/* end block 1 */
	// End offset: 0x80091E3C
	// End Line: 656

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb
							 (CPlayer *Player,PlayerStruct *Plr,void *InTown)

{
	int Id;
	int iVar1;
	
	Id = FindPlayerChar__FP12PlayerStructb(Plr,InTown);
	iVar1 = GetTexId__7CPlayer(Player);
	if (Id != iVar1) {
		Load__7CPlayeri(Player,Id);
	}
	return;
}



// decompiled code
// original method signature: 
// struct MonstList * /*$ra*/ GLUE_GetCurrentList__Fi(int Level /*$s0*/)
 // line 666, offset 0x80091e54
	/* begin block 1 */
		// Start line: 667
		// Start offset: 0x80091E54
		// Variables:
	// 		struct MonstLevel *MLev; // $s1
	// 		int List; // $s0
	/* end block 1 */
	// End offset: 0x80091EE8
	// End Line: 674

	/* begin block 2 */
		// Start line: 1375
	/* end block 2 */
	// End Line: 1376

MonstList * GLUE_GetCurrentList__Fi(int Level)

{
	int iVar1;
	
	Level = Level + -1;
	if ((Level < 0) || (NumOfMonsterListLevels <= Level)) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x29d);
	}
	iVar1 = GLUE_GetMonsterList__Fv();
	if ((iVar1 < 0) || (AllLevels[Level].NumOfLists < iVar1)) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x2a0);
	}
	return AllLevels[Level].TheLists + iVar1;
}





