#include "THISDUST.H"
#include "GLUE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_SetMonsterList__Fi(int List /*$a0*/)
 // line 244, offset 0x8009ba0c
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x8009BA0C
	/* end block 1 */
	// End offset: 0x8009BA10
	// End Line: 246

	/* begin block 2 */
		// Start line: 489
	/* end block 2 */
	// End Line: 490

void GLUE_SetMonsterList__Fi(int List)

{
	CurrentMonsterList = List;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GLUE_GetMonsterList__Fv()
 // line 255, offset 0x8009ba18
	/* begin block 1 */
		// Start line: 256
		// Start offset: 0x8009BA18
	/* end block 1 */
	// End offset: 0x8009BA1C
	// End Line: 257

	/* begin block 2 */
		// Start line: 511
	/* end block 2 */
	// End Line: 512

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GLUE_GetMonsterList__Fv(void)

{
	return CurrentMonsterList;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_SuspendGame__Fv()
 // line 266, offset 0x8009ba24
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x8009BA24
		// Variables:
	// 		struct TASK *T; // $s0
	/* end block 1 */
	// End offset: 0x8009BA64
	// End Line: 272

	/* begin block 2 */
		// Start line: 532
	/* end block 2 */
	// End Line: 533

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_SuspendGame__Fv(void)

{
	TASK *T;
	
	T = TSK_Exist((TASK *)0x0,0x4000,0xffffffff);
	if (T == (TASK *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x10e);
	}
	TSK_MakeTaskInactive(T);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_ResumeGame__Fv()
 // line 281, offset 0x8009ba78
	/* begin block 1 */
		// Start line: 282
		// Start offset: 0x8009BA78
		// Variables:
	// 		struct TASK *T; // $s0
	/* end block 1 */
	// End offset: 0x8009BAB8
	// End Line: 287

	/* begin block 2 */
		// Start line: 565
	/* end block 2 */
	// End Line: 566

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_ResumeGame__Fv(void)

{
	TASK *T;
	
	T = TSK_Exist((TASK *)0x0,0x4000,0xffffffff);
	if (T == (TASK *)0x0) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x11d);
	}
	TSK_MakeTaskActive(T);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_PreTown__Fv()
 // line 296, offset 0x8009bacc
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8009BACC
	/* end block 1 */
	// End offset: 0x8009BAEC
	// End Line: 302

	/* begin block 2 */
		// Start line: 598
	/* end block 2 */
	// End Line: 599

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_PreTown__Fv(void)

{
	GRL_PostMessage__FUlUilUl(ghMainWnd,0x4a,0,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_PreDun__Fv()
 // line 310, offset 0x8009bafc
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x8009BAFC
	/* end block 1 */
	// End offset: 0x8009BAFC
	// End Line: 311

	/* begin block 2 */
		// Start line: 633
	/* end block 2 */
	// End Line: 634

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_PreDun__Fv(void)

{
	return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_Finished__Fv()
 // line 331, offset 0x8009bb04
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x8009BB04
	/* end block 1 */
	// End offset: 0x8009BB08
	// End Line: 333

	/* begin block 2 */
		// Start line: 674
	/* end block 2 */
	// End Line: 675

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GLUE_Finished__Fv(void)

{
	return GlueFinished;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_SetFinished__Fb(void * NewFinished /*$a0*/)
 // line 342, offset 0x8009bb10
	/* begin block 1 */
		// Start line: 343
		// Start offset: 0x8009BB10
	/* end block 1 */
	// End offset: 0x8009BB14
	// End Line: 344

	/* begin block 2 */
		// Start line: 696
	/* end block 2 */
	// End Line: 697

void GLUE_SetFinished__Fb(void *NewFinished)

{
	GlueFinished = NewFinished;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_StartBg__Fibi(int TextId /*$s0*/, void * IsTown /*$s1*/, int Level /*$s2*/)
 // line 353, offset 0x8009bb1c
	/* begin block 1 */
		// Start line: 354
		// Start offset: 0x8009BB1C
		// Variables:
	// 		struct DEF_ARGS *Args; // $v0
	/* end block 1 */
	// End offset: 0x8009BB68
	// End Line: 363

	/* begin block 2 */
		// Start line: 717
	/* end block 2 */
	// End Line: 718

void GLUE_StartBg__Fibi(int TextId,void *IsTown,int Level)

{
	TASK *pTVar1;
	int *piVar2;
	
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
 // line 371, offset 0x8009bb84
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x8009BB84
		// Variables:
	// 		void * OldFlag; // $v0
	/* end block 1 */
	// End offset: 0x8009BB8C
	// End Line: 376

	/* begin block 2 */
		// Start line: 759
	/* end block 2 */
	// End Line: 760

void * GLUE_SetShowGameScreenFlag__Fb(void *NewFlag)

{
	void *pvVar1;
	
	pvVar1 = DoDrawBg;
	DoDrawBg = NewFlag;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_GetShowGameScreenFlag__Fv()
 // line 383, offset 0x8009bb94
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x8009BB94
	/* end block 1 */
	// End offset: 0x8009BB98
	// End Line: 385

	/* begin block 2 */
		// Start line: 782
	/* end block 2 */
	// End Line: 783

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GLUE_GetShowGameScreenFlag__Fv(void)

{
	return DoDrawBg;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_SetHomingScrollFlag__Fb(void * NewFlag /*$a0*/)
 // line 392, offset 0x8009bba0
	/* begin block 1 */
		// Start line: 393
		// Start offset: 0x8009BBA0
		// Variables:
	// 		void * OldFlag; // $v0
	/* end block 1 */
	// End offset: 0x8009BBA8
	// End Line: 397

	/* begin block 2 */
		// Start line: 801
	/* end block 2 */
	// End Line: 802

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
 // line 404, offset 0x8009bbb0
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x8009BBB0
		// Variables:
	// 		void * OldFlag; // $v0
	/* end block 1 */
	// End offset: 0x8009BBB8
	// End Line: 409

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

void * GLUE_SetShowPanelFlag__Fb(void *NewFlag)

{
	void *pvVar1;
	
	pvVar1 = DoShowPanel;
	DoShowPanel = NewFlag;
	return pvVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GLUE_HasGameStarted__Fv()
 // line 420, offset 0x8009bbc0
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x8009BBC0
	/* end block 1 */
	// End offset: 0x8009BBC4
	// End Line: 422

	/* begin block 2 */
		// Start line: 856
	/* end block 2 */
	// End Line: 857

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * GLUE_HasGameStarted__Fv(void)

{
	return GameStarted;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1 /*$a0*/, struct GPanel *P2 /*$s1*/)
 // line 430, offset 0x8009bbcc
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x8009BBCC
	/* end block 1 */
	// End offset: 0x8009BC8C
	// End Line: 451

	/* begin block 2 */
		// Start line: 875
	/* end block 2 */
	// End Line: 876

void DoShowPanelGFX__FP6GPanelT0(GPanel *P1,GPanel *P2)

{
	PanelXY *XY;
	PlayerStruct *Plr;
	
	if (plr.plractive == '\0') {
		if (PlayerStruct_800dbf20.plractive == '\0') {
			return;
		}
		sel_data = 1;
		XY = &DefP2PanelXY;
		Plr = &PlayerStruct_800dbf20;
	}
	else {
		if (PlayerStruct_800dbf20.plractive == '\0') {
			sel_data = 0;
			XY = &DefP1PanelXY;
			Plr = &plr;
			P2 = P1;
		}
		else {
			sel_data = 0;
			Print__6GPanelP7PanelXYP12PlayerStruct(P1,&DefP1PanelXY2,&plr);
			XY = &DefP2PanelXY2;
			sel_data = 1;
			Plr = &PlayerStruct_800dbf20;
		}
	}
	Print__6GPanelP7PanelXYP12PlayerStruct(P2,XY,Plr);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_DoQuake__Fii(int Time /*$a0*/, int Amount /*$a1*/)
 // line 463, offset 0x8009bca4
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x8009BCA4
	/* end block 1 */
	// End offset: 0x8009BCAC
	// End Line: 466

	/* begin block 2 */
		// Start line: 945
	/* end block 2 */
	// End Line: 946

void GLUE_DoQuake__Fii(int Time,int Amount)

{
	QuakeTime = Time;
	QuakeAmount = Amount;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BgTask__FP4TASK(struct TASK *T /*$a0*/)
 // line 470, offset 0x8009bcb4
	/* begin block 1 */
		// Start line: 471
		// Start offset: 0x8009BCB4
		// Variables:
	// 		struct DEF_ARGS *Args; // $v0
	// 		void * IsTown; // $s2
	// 		int TextId; // $s4
	// 		int Level; // $s0
	// 		int ObjId; // $s1
	// 		int List; // $s3
	// 		struct PlayerStruct *plr1; // $s5
	// 		struct PlayerStruct *plr2; // $s6
	// 		struct CBlocks MyBlocks; // stack offset -648
	// 		struct CPlayer MyPlayer; // stack offset -384
	// 		struct CPlayer MyPlayer2; // stack offset -240
	// 		struct GPanel P1Panel; // stack offset -96
	// 		struct GPanel P2Panel; // stack offset -64
	/* end block 1 */
	// End offset: 0x8009C134
	// End Line: 630

	/* begin block 2 */
		// Start line: 958
	/* end block 2 */
	// End Line: 959

void BgTask__FP4TASK(TASK *T)

{
	bool bVar1;
	int *piVar2;
	void *pvVar3;
	undefined *puVar4;
	int Frames;
	PlayerStruct *Plr;
	int Level;
	int ObjId;
	void *Val;
	int List;
	int BgId;
	CBlocks CStack648;
	CPlayer CStack384;
	CPlayer CStack240;
	GPanel GStack96;
	GPanel GStack64;
	
	ObjId = -1;
	List = -1;
	piVar2 = (int *)T->fActive;
	QuakeTime = 0;
	QuakeAmount = 0;
	Level = piVar2[2];
	BgId = *piVar2;
	bVar1 = piVar2[1] != 0;
	Val = (void *)(uint)bVar1;
	GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
	GLUE_SetHomingScrollFlag__Fb((void *)0x0);
	GLUE_SetShowPanelFlag__Fb((void *)0x0);
	GLUE_SetFinished__Fb((void *)0x0);
	if ((uint)currlevel - 0xf < 2) {
		TSK_AddTask(0x8000,penta_cycle_task__FP4TASK,0xc78,0);
	}
	TSK_AddTask(0x8000,color_cycle__FP4TASK,0xc78,0);
	Frames = 2;
	do {
		TSK_Sleep(Frames);
		pvVar3 = GetFadeState__Fv();
		Frames = 1;
	} while (pvVar3 != (void *)0x0);
	if (bVar1) {
		Level = 0;
	}
	else {
		ObjId = 0xce;
		List = GLUE_GetMonsterList__Fv();
	}
	__7CBlocksiiiii(&CStack648,BgId,ObjId,0,Level,List);
	SetTown__7CBlocksb(&CStack648,Val);
	UPDATEPROGRESS__Fi(4);
	__7CPlayerbii(&CStack384,Val,0,FePlayerNo);
	__7CPlayerbii(&CStack240,Val,1,FePlayerNo);
	MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(&CStack384,&plr,Val,&DAT_00000001);
	if (FePlayerNo != 0) {
		MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2
							(&CStack240,&PlayerStruct_800dbf20,Val,&DAT_00000001);
	}
	UPDATEPROGRESS__Fi(1);
	FinishProgress__Fv();
	TakeDownCutScreen__Fv();
	if (leveltype == '\0') {
		SetTownersGraphics__7CBlocks(&CStack648);
		List = 0xcd;
	}
	else {
		List = 0xd0;
	}
	MissDat = GM_UseTexData__Fi(List);
	music_start__Fi((uint)leveltype);
	PaletteFadeIn__Fi(8);
	SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(&CStack384,&plr,&CStack648);
	MoveToScrollTarget__7CBlocks(&CStack648);
	GLUE_SetShowGameScreenFlag__Fb(&DAT_00000001);
	GLUE_SetHomingScrollFlag__Fb(&DAT_00000001);
	GLUE_SetShowPanelFlag__Fb(&DAT_00000001);
	TSK_AddTask(0x8000,DaveLTask__FP4TASK,0x1000,0);
	__6GPaneli(&GStack96,0);
	__6GPaneli(&GStack64,0);
	gplayer = &CStack384;
	VID_GetTick__Fv();
	JustLoadedPlayer = '\0';
	GameStarted = &DAT_00000001;
	if (((setlevel != '\0') && (setlvlnum == '\x01')) && (QuestStruct_800ddb30._qactive == '\x02')) {
		PlaySFX__Fi(USFX_SKING1);
	}
	while( true ) {
		puVar4 = (undefined *)GLUE_Finished__Fv();
		if (puVar4 == &DAT_00000001) break;
		VID_GetTick__Fv();
		VID_GetTick__Fv();
		ResetFlames__Fv();
		if (DoDrawBg != (void *)0x0) {
			if ((PauseMode == '\0') && (QuakeTime != 0)) {
				SetRandOffset__7CBlocksi(&CStack648,QuakeAmount);
				QuakeTime = QuakeTime + -1;
			}
			Plr = &plr;
			if (plr.plractive == '\0') {
				Plr = &PlayerStruct_800dbf20;
			}
			SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(&CStack384,Plr,&CStack648);
			if ((DoHomingScroll != (void *)0x0) && (deathflag == '\0')) {
				DoScroll__7CBlocks(&CStack648);
			}
			Print__7CBlocks(&CStack648);
			DrawAndBlit__Fv();
			if (DoShowPanel != (void *)0x0) {
				DoShowPanelGFX__FP6GPanelT0(&GStack96,&GStack64);
			}
			MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(&CStack384,&plr,Val,(void *)0x0);
			Print__7CPlayerR12PlayerStructR7CBlocks(&CStack384,&plr,&CStack648);
			if (FePlayerNo != 0) {
				MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2
									(&CStack240,&PlayerStruct_800dbf20,Val,(void *)0x0);
				Print__7CPlayerR12PlayerStructR7CBlocks(&CStack240,&PlayerStruct_800dbf20,&CStack648);
			}
			if (bVar1) {
				DrawLBird__Fv();
			}
			if (deathflag != '\0') {
				GO_DoGameOver__Fv();
			}
		}
		TSK_Sleep(1);
	}
	GameStarted = (void *)0x0;
	___7CPlayer(&CStack240,2);
	___7CPlayer(&CStack384,2);
	___7CBlocks(&CStack648,2);
	return;
}



// decompiled code
// original method signature: 
// struct PInf * /*$ra*/ FindPlayerChar__FPc(char *Id /*$s3*/)
 // line 639, offset 0x8009c160
	/* begin block 1 */
		// Start line: 640
		// Start offset: 0x8009C160

		/* begin block 1.1 */
			// Start line: 640
			// Start offset: 0x8009C160
			// Variables:
		// 		int f; // $s1
		/* end block 1.1 */
		// End offset: 0x8009C1C0
		// End Line: 647
	/* end block 1 */
	// End offset: 0x8009C1D8
	// End Line: 650

	/* begin block 2 */
		// Start line: 1341
	/* end block 2 */
	// End Line: 1342

PInf * FindPlayerChar__FPc(char *Id)

{
	int iVar1;
	int iVar2;
	int iVar3;
	PInf *pPVar4;
	
	iVar3 = 0;
	pPVar4 = &PlayerInfo;
	iVar2 = 0;
	do {
		iVar1 = strcmp(*(char **)((int)&PlayerInfo.Tx + iVar2),Id);
		iVar3 = iVar3 + 1;
		if (iVar1 == 0) {
			return pPVar4;
		}
		pPVar4 = pPVar4 + 1;
		iVar2 = iVar2 + 0xc;
	} while (iVar3 < 0x51);
	DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x288);
	return (PInf *)0x0;
}



// decompiled code
// original method signature: 
// struct PInf * /*$ra*/ FindPlayerChar__Fiii(int Char /*$a0*/, int Wep /*$a1*/, int Arm /*$a2*/)
 // line 654, offset 0x8009c1f8
	/* begin block 1 */
		// Start line: 655
		// Start offset: 0x8009C1F8
		// Variables:
	// 		char TxBuff[20]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8009C244
	// End Line: 661

	/* begin block 2 */
		// Start line: 1374
	/* end block 2 */
	// End Line: 1375

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
 // line 664, offset 0x8009c254
	/* begin block 1 */
		// Start line: 665
		// Start offset: 0x8009C254
	/* end block 1 */
	// End offset: 0x8009C274
	// End Line: 670

	/* begin block 2 */
		// Start line: 1396
	/* end block 2 */
	// End Line: 1397

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
 // line 673, offset 0x8009c284
	/* begin block 1 */
		// Start line: 674
		// Start offset: 0x8009C284

		/* begin block 1.1 */
			// Start line: 674
			// Start offset: 0x8009C284

			/* begin block 1.1.1 */
				// Start line: 694
				// Start offset: 0x8009C2FC
				// Variables:
			// 		struct PInf *Inf; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8009C33C
			// End Line: 706
		/* end block 1.1 */
		// End offset: 0x8009C33C
		// End Line: 706
	/* end block 1 */
	// End offset: 0x8009C33C
	// End Line: 706

	/* begin block 2 */
		// Start line: 1417
	/* end block 2 */
	// End Line: 1418

int FindPlayerChar__FP12PlayerStructb(PlayerStruct *P,void *InTown)

{
	char cVar1;
	uint uVar2;
	PInf *pPVar3;
	
	if (P->_pmode == PM_DEATH) {
		cVar1 = P->_pClass;
		if (cVar1 == '\x01') {
			uVar2 = 0x126;
		}
		else {
			if (cVar1 < '\x02') {
				if (cVar1 == '\0') {
					return 0x124;
				}
			}
			else {
				if (cVar1 == '\x02') {
					return 0x125;
				}
			}
			DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x2af);
			uVar2 = 0xffffffff;
		}
	}
	else {
		pPVar3 = FindPlayerChar__FP12PlayerStruct(P);
		if (InTown == (void *)0x0) {
			if (FePlayerNo == 0) {
				uVar2 = (uint)pPVar3->GameTex;
			}
			else {
				uVar2 = (uint)pPVar3->TwoPlayerTex;
			}
		}
		else {
			uVar2 = (uint)pPVar3->TownTex;
		}
	}
	return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player /*$s1*/, struct PlayerStruct *Plr /*$s2*/, void * InTown /*$a2*/, void * Blocking /*$s3*/)
 // line 720, offset 0x8009c350
	/* begin block 1 */
		// Start line: 721
		// Start offset: 0x8009C350
		// Variables:
	// 		int Id; // $s0
	/* end block 1 */
	// End offset: 0x8009C3E0
	// End Line: 734

	/* begin block 2 */
		// Start line: 1513
	/* end block 2 */
	// End Line: 1514

void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2
							 (CPlayer *Player,PlayerStruct *Plr,void *InTown,void *Blocking)

{
	int Id;
	int iVar1;
	
	Id = FindPlayerChar__FP12PlayerStructb(Plr,InTown);
	iVar1 = GetTexId__7CPlayer(Player);
	if (Id != iVar1) {
		if (Blocking == (void *)0x0) {
			NonBlockingLoadNewGFX__7CPlayeri(Player,Id);
		}
		else {
			Load__7CPlayeri(Player,Id);
		}
		if ((Plr->plractive != '\0') && (Plr->_pmode != PM_DEATH)) {
			StartStand__FP12PlayerStructi(Plr,(int)Plr->_pdir);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// struct MonstList * /*$ra*/ GLUE_GetCurrentList__Fi(int Level /*$s0*/)
 // line 745, offset 0x8009c400
	/* begin block 1 */
		// Start line: 746
		// Start offset: 0x8009C400
		// Variables:
	// 		struct MonstLevel *MLev; // $s1
	// 		int List; // $s0
	/* end block 1 */
	// End offset: 0x8009C494
	// End Line: 753

	/* begin block 2 */
		// Start line: 1566
	/* end block 2 */
	// End Line: 1567

MonstList * GLUE_GetCurrentList__Fi(int Level)

{
	int iVar1;
	
	Level = Level + -1;
	if ((Level < 0) || (NumOfMonsterListLevels <= Level)) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x2ec);
	}
	iVar1 = GLUE_GetMonsterList__Fv();
	if ((iVar1 < 0) || (AllLevels[Level].NumOfLists < iVar1)) {
		DBG_Error((char *)0x0,"psxsrc/GLUE.CPP",0x2ef);
	}
	return AllLevels[Level].TheLists + iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_StartGameExit__Fv()
 // line 765, offset 0x8009c4ac
	/* begin block 1 */
		// Start line: 766
		// Start offset: 0x8009C4AC

		/* begin block 1.1 */
			// Start line: 766
			// Start offset: 0x8009C4AC
		/* end block 1.1 */
		// End offset: 0x8009C4D0
		// End Line: 768
	/* end block 1 */
	// End offset: 0x8009C508
	// End Line: 777

	/* begin block 2 */
		// Start line: 1607
	/* end block 2 */
	// End Line: 1608

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_StartGameExit__Fv(void)

{
	undefined *puVar1;
	
	puVar1 = &DAT_000019e8;
	do {
		(&plr.plractive)[(int)puVar1] = '\0';
		puVar1 = puVar1 + -0x19e8;
	} while (-1 < (int)puVar1);
	GLUE_SuspendGame__Fv();
	GLUE_SetFinished__Fb(&DAT_00000001);
	MAIN_RestartGameTask__Fv();
	TSK_Sleep(3);
	GLUE_ResumeGame__Fv();
	SPU_Init__Fv();
	MSG_ClearOutCompMap__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GLUE_Init__Fv()
 // line 787, offset 0x8009c518
	/* begin block 1 */
		// Start line: 788
		// Start offset: 0x8009C518
	/* end block 1 */
	// End offset: 0x8009C518
	// End Line: 788

	/* begin block 2 */
		// Start line: 1653
	/* end block 2 */
	// End Line: 1654

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GLUE_Init__Fv(void)

{
	return;
}





