#include "THISDUST.H"
#include "CHOOSEM.H"


// decompiled code
// original method signature: 
// unsigned long /*$ra*/ CM_QuestToBitPattern__Fi(int QuestNum /*$a0*/)
 // line 134, offset 0x80155a04
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x80155A04
		// Variables:
	// 		unsigned long RetVal; // $s0
	/* end block 1 */
	// End offset: 0x80155AC8
	// End Line: 196

	/* begin block 2 */
		// Start line: 268
	/* end block 2 */
	// End Line: 269

/* WARNING: Unknown calling convention yet parameter storage is locked */

ulong CM_QuestToBitPattern__Fi(int QuestNum)

{
	ulong uVar1;
	
	uVar1 = 0;
	switch(QuestNum) {
	case 2:
		uVar1 = 2;
		break;
	case 3:
		uVar1 = 4;
		break;
	case 4:
		uVar1 = 0x10;
		break;
	case 5:
		uVar1 = 0x80;
		break;
	case 6:
		uVar1 = 1;
		break;
	case 7:
		uVar1 = 8;
		break;
	default:
		DBG_Error((char *)0x0,"source/CHOOSEM.cpp",0xc0);
		break;
	case 9:
		uVar1 = 0x1000;
		break;
	case 10:
		uVar1 = 0x400;
		break;
	case 0xb:
		uVar1 = 0x20;
		break;
	case 0xc:
		uVar1 = 0x40;
		break;
	case 0xd:
		uVar1 = 0x800;
		break;
	case 0xe:
		uVar1 = 0x200;
		break;
	case 0xf:
		uVar1 = 0x100;
	}
	return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CM_ShowMonsterList__Fii(int Level /*$a0*/, int List /*$a1*/)
 // line 227, offset 0x80155adc
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x80155ADC
	/* end block 1 */
	// End offset: 0x80155ADC
	// End Line: 228

	/* begin block 2 */
		// Start line: 471
	/* end block 2 */
	// End Line: 472

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CM_ShowMonsterList__Fii(int Level,int List)

{
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CM_ChooseMonsterList__FiUl(int Level /*$s0*/, unsigned long QuestsNeededMask /*$s1*/)
 // line 253, offset 0x80155ae4
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80155AE4
		// Variables:
	// 		struct DEF_ARGS *A; // $v0

		/* begin block 1.1 */
			// Start line: 254
			// Start offset: 0x80155AE4

			/* begin block 1.1.1 */
				// Start line: 259
				// Start offset: 0x80155B04
				// Variables:
			// 		int ListChosen; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x80155B60
			// End Line: 276
		/* end block 1.1 */
		// End offset: 0x80155B6C
		// End Line: 279
	/* end block 1 */
	// End offset: 0x80155B6C
	// End Line: 279

	/* begin block 2 */
		// Start line: 510
	/* end block 2 */
	// End Line: 511

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CM_ChooseMonsterList__FiUl(int Level,ulong QuestsNeededMask)

{
	TASK *pTVar1;
	int *piVar2;
	int local_18 [2];
	
	if (DoUiForChooseMonster == (void *)0x0) {
		local_18[0] = NoUiListChoose__FiUl(Level,QuestsNeededMask);
	}
	else {
		local_18[0] = 0;
		pTVar1 = TSK_AddTask(0x4002,ChooseTask__FP4TASK,0x1000,0x10);
		piVar2 = (int *)pTVar1->fActive;
		*piVar2 = Level;
		*(int **)(piVar2 + 1) = local_18;
		piVar2[2] = QuestsNeededMask;
		do {
			TSK_Sleep(1);
			pTVar1 = TSK_Exist((TASK *)0x0,0x4002,0xffffffff);
		} while (pTVar1 != (TASK *)0x0);
	}
	return local_18[0];
}



// decompiled code
// original method signature: 
// int /*$ra*/ NoUiListChoose__FiUl(int Level /*$a0*/, unsigned long QuestsNeededMask /*$a1*/)
 // line 290, offset 0x80155b84
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x80155B84
	/* end block 1 */
	// End offset: 0x80155B84
	// End Line: 292

	/* begin block 2 */
		// Start line: 586
	/* end block 2 */
	// End Line: 587

/* WARNING: Unknown calling convention yet parameter storage is locked */

int NoUiListChoose__FiUl(int Level,ulong QuestsNeededMask)

{
	return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ChooseTask__FP4TASK(struct TASK *T /*$s0*/)
 // line 304, offset 0x80155b8c
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80155B8C
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		int *List; // $s2
	// 		int Level; // $s0
	// 		unsigned int NumOfLists; // $s0
	// 		unsigned long QuestsNeededMask; // $s1
	// 		unsigned char ListsToChooseFrom[50]; // stack offset -72
	// 		unsigned int Selection; // $v0
	/* end block 1 */
	// End offset: 0x80155C40
	// End Line: 474

	/* begin block 2 */
		// Start line: 613
	/* end block 2 */
	// End Line: 614

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ChooseTask__FP4TASK(TASK *T)

{
	int *piVar1;
	int iVar2;
	undefined *puVar3;
	int Level;
	ulong QuestsNeededMask;
	uint *puVar4;
	undefined auStack88 [16];
	uchar auStack72 [56];
	
	GLUE_SuspendGame__Fv();
	piVar1 = (int *)T->fActive;
	puVar4 = (uint *)piVar1[1];
	QuestsNeededMask = piVar1[2];
	Level = *piVar1 + -1;
	if ((Level < 0) || (NumOfMonsterListLevels <= Level)) {
		DBG_Error((char *)0x0,"source/CHOOSEM.cpp",0x144);
	}
	Level = GetListsAvailable__FiUlPUc(Level,QuestsNeededMask,auStack72);
	iVar2 = ENG_random__Fl(Level);
	if (demo_pad_time != 0) {
		iVar2 = 0;
	}
	puVar3 = auStack88 + iVar2;
	if (iVar2 == Level) {
		puVar3 = auStack88;
	}
	*puVar4 = (uint)(byte)puVar3[0x10];
	GLUE_ResumeGame__Fv();
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShowTask__FP4TASK(struct TASK *T /*$s0*/)
 // line 483, offset 0x80155c5c
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x80155C5C
		// Variables:
	// 		struct DEF_ARGS *A; // $v0
	// 		int List; // stack offset -56
	// 		int Level; // $s0
	// 		void * Finished; // $s4
	// 		struct MonstLevel *ThisLev; // stack offset -48
	// 		char Buffer[100]; // stack offset -160

		/* begin block 1.1 */
			// Start line: 511
			// Start offset: 0x80155D28
			// Variables:
		// 		unsigned int f; // $s0
		// 		struct MonstList *ThisList; // $s2
		/* end block 1.1 */
		// End offset: 0x80155E40
		// End Line: 529
	/* end block 1 */
	// End offset: 0x80155E58
	// End Line: 532

	/* begin block 2 */
		// Start line: 971
	/* end block 2 */
	// End Line: 972

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ShowTask__FP4TASK(TASK *T)

{
	ushort uVar1;
	CPad *this;
	int Y;
	int iVar2;
	uint uVar3;
	MonstList *pMVar4;
	uint G;
	bool bVar5;
	uint R;
	char acStack160 [104];
	int iStack56;
	MonstLevel *pMStack48;
	
	GLUE_SuspendGame__Fv();
	Y = *(int *)T->fActive;
	iStack56 = ((int *)T->fActive)[1];
	iVar2 = Y + -1;
	if ((iVar2 < 0) || (NumOfMonsterListLevels <= iVar2)) {
		DBG_Error((char *)0x0,"source/CHOOSEM.cpp",499);
	}
	bVar5 = false;
	pMStack48 = AllLevels + iVar2;
	sprintf(acStack160,0x80119754,Y);
	R = (uint)WHITER;
	G = (uint)WHITEG;
	while (!bVar5) {
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,100,100,acStack160,JustCentre,(RECT *)0x0,0x40,0x40,0x80);
		pMVar4 = pMStack48->TheLists + iStack56;
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,100,0x78,pMVar4->ListName,JustCentre,(RECT *)0x0,R,G,G);
		uVar3 = 0;
		if (pMVar4->NumOfMonsters != 0) {
			Y = 0x78;
			do {
				Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
									(&MediumFont,0x32,Y,MgToText34[(uint)pMVar4->TheList[uVar3]],JustLeft,(RECT *)0x0,
									 R,G,G);
				uVar3 = uVar3 + 1;
				Y = Y + 0x10;
			} while (uVar3 < (uint)pMVar4->NumOfMonsters);
		}
		this = PAD_GetPad__FiUc(0,'\x01');
		uVar1 = GetDown__C4CPad(this);
		if (((uVar1 & 0x40) != 0) || (demo_pad_time != 0)) {
			bVar5 = true;
		}
		TSK_Sleep(1);
	}
	GLUE_ResumeGame__Fv();
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetListsAvailable__FiUlPUc(int Level /*$s1*/, unsigned long QuestsNeededMask /*$s5*/, unsigned char *ListofLists /*$s2*/)
 // line 542, offset 0x80155e8c
	/* begin block 1 */
		// Start line: 543
		// Start offset: 0x80155E8C
		// Variables:
	// 		int NumOfChoices; // $s1
	// 		int NumOfLists; // $s3
	// 		struct MonstLevel *ThisLev; // $s4

		/* begin block 1.1 */
			// Start line: 548
			// Start offset: 0x80155EEC
			// Variables:
		// 		int f; // $s0
		/* end block 1.1 */
		// End offset: 0x80155F64
		// End Line: 565
	/* end block 1 */
	// End offset: 0x80155F84
	// End Line: 568

	/* begin block 2 */
		// Start line: 1100
	/* end block 2 */
	// End Line: 1101

/* WARNING: Unknown calling convention yet parameter storage is locked */

int GetListsAvailable__FiUlPUc(int Level,ulong QuestsNeededMask,uchar *ListofLists)

{
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((Level < 0) || (NumOfMonsterListLevels <= Level)) {
		DBG_Error((char *)0x0,"source/CHOOSEM.cpp",0x223);
	}
	iVar1 = 0;
	iVar3 = AllLevels[Level].NumOfLists;
	iVar2 = 0;
	if (0 < iVar3) {
		do {
			if (AllLevels[Level].TheLists[iVar1].QuestBits == QuestsNeededMask) {
				if (iVar2 == 0x32) {
					DBG_Error((char *)0x0,"source/CHOOSEM.cpp",0x22f);
				}
				*ListofLists = (uchar)iVar1;
				ListofLists = ListofLists + 1;
				iVar2 = iVar2 + 1;
			}
			iVar1 = iVar1 + 1;
		} while (iVar1 < iVar3);
	}
	if (iVar2 == 0) {
		DBG_Error((char *)0x0,"source/CHOOSEM.cpp",0x236);
	}
	return iVar2;
}





