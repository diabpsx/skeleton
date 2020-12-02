#include "THISDUST.H"
#include "MLIST.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ML_Init__Fv()
 // line 71, offset 0x8007d5f8
	/* begin block 1 */
		// Start line: 72
		// Start offset: 0x8007D5F8

		/* begin block 1.1 */
			// Start line: 73
			// Start offset: 0x8007D5F8
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x8007D628
		// End Line: 77
	/* end block 1 */
	// End offset: 0x8007D628
	// End Line: 77

	/* begin block 2 */
		// Start line: 143
	/* end block 2 */
	// End Line: 144

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ML_Init__Fv(void)

{
	int iVar1;
	
	iVar1 = 0;
	do {
		(&MlTab)[iVar1] = -1;
		(&QlTab)[iVar1] = -1;
		iVar1 = iVar1 + 1;
	} while (iVar1 < 0x10);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_GetList__Fi(int Level /*$s0*/)
 // line 85, offset 0x8007d630
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x8007D630
		// Variables:
	// 		int RetVal; // $v0
	/* end block 1 */
	// End offset: 0x8007D69C
	// End Line: 101

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ML_GetList__Fi(int Level)

{
	int iVar1;
	
	iVar1 = -1;
	if (Level != 0) {
		if (0xf < Level + -1) {
			DBG_Error((char *)0x0,"source/MLIST.cpp",0x5d);
		}
		if (setlevel == '\0') {
			iVar1 = (int)(char)(&DAT_800e39c3)[Level];
		}
		else {
			iVar1 = (int)(&CHAR_00h_800e39d3)[Level];
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_SetRandomList__Fi(int Level /*$s0*/)
 // line 109, offset 0x8007d6b0
	/* begin block 1 */
		// Start line: 110
		// Start offset: 0x8007D6B0
		// Variables:
	// 		int NumOfLists; // $a0
	/* end block 1 */
	// End offset: 0x8007D734
	// End Line: 125

	/* begin block 2 */
		// Start line: 218
	/* end block 2 */
	// End Line: 219

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ML_SetRandomList__Fi(int Level)

{
	char cVar1;
	ulong uVar2;
	
	if (0xf < Level - 1U) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0x6f);
	}
	if (setlevel == '\0') {
		uVar2 = GU_GetRndRange(AllLevels[Level - 1U].NumOfLists);
		cVar1 = (char)uVar2;
		(&DAT_800e39c3)[Level] = cVar1;
	}
	else {
		uVar2 = GU_GetRndRange(AllLevels[Level - 1U].NumOfLists);
		cVar1 = (char)uVar2;
		(&CHAR_00h_800e39d3)[Level] = cVar1;
	}
	return (int)cVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_SetList__Fii(int Level /*$s0*/, int List /*$s1*/)
 // line 135, offset 0x8007d748
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x8007D748
		// Variables:
	// 		int NumOfLists; // $v0
	/* end block 1 */
	// End offset: 0x8007D7E0
	// End Line: 152

	/* begin block 2 */
		// Start line: 278
	/* end block 2 */
	// End Line: 279

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ML_SetList__Fii(int Level,int List)

{
	if (0xf < Level - 1U) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0x8b);
	}
	if (AllLevels[Level - 1U].NumOfLists <= List) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0x90);
	}
	if (setlevel == '\0') {
		(&DAT_800e39c3)[Level] = (char)List;
	}
	else {
		(&CHAR_00h_800e39d3)[Level] = (char)List;
	}
	return List;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_GetPresetMonsters__FiPiUl(int currlevel /*$s1*/, int *typelist /*$s4*/, unsigned long QuestsNeededMask /*$s3*/)
 // line 163, offset 0x8007d7f8
	/* begin block 1 */
		// Start line: 164
		// Start offset: 0x8007D7F8
		// Variables:
	// 		struct MonstList *Mlist; // $t2
	// 		int NumOfMonsters; // $s2
	// 		int ThisList; // $s0
	// 		int Index[10]; // stack offset -64

		/* begin block 1.1 */
			// Start line: 188
			// Start offset: 0x8007D88C
			// Variables:
		// 		unsigned int f; // $t1

			/* begin block 1.1.1 */
				// Start line: 193
				// Start offset: 0x8007D8A8

				/* begin block 1.1.1.1 */
					// Start line: 198
					// Start offset: 0x8007D8BC

					/* begin block 1.1.1.1.1 */
						// Start line: 199
						// Start offset: 0x8007D8E0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 200
							// Start offset: 0x8007D8E0
							// Variables:
						// 		int i; // $a3

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 200
								// Start offset: 0x8007D8EC

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 202
									// Start offset: 0x8007D8F8

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 203
										// Start offset: 0x8007D920
										// Variables:
									// 		int minl; // $a0
									// 		int maxl; // $v0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8007D990
									// End Line: 210
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8007D990
								// End Line: 210
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007D990
							// End Line: 210
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007D99C
						// End Line: 213
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007D99C
					// End Line: 213
				/* end block 1.1.1.1 */
				// End offset: 0x8007D99C
				// End Line: 213
			/* end block 1.1.1 */
			// End offset: 0x8007D99C
			// End Line: 213
		/* end block 1.1 */
		// End offset: 0x8007D9A4
		// End Line: 215
	/* end block 1 */
	// End offset: 0x8007D9C4
	// End Line: 217

	/* begin block 2 */
		// Start line: 343
	/* end block 2 */
	// End Line: 344

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ML_GetPresetMonsters__FiPiUl(int currlevel,int *typelist,ulong QuestsNeededMask)

{
	int List;
	MonstList *pMVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	int *piVar5;
	uint uVar6;
	int iVar7;
	
	iVar7 = 0;
	if (OPT_NoQuests != 0) {
		QuestsNeededMask = 0;
	}
	List = ML_GetList__Fi(currlevel);
	if (List == -1) {
		List = FUN_80155ae4(currlevel,QuestsNeededMask);
		ML_SetList__Fii(currlevel,List);
		SetRndSeed__Fl(glSeedTbl[currlevel]);
	}
	else {
		FUN_80155adc(currlevel,List);
	}
	GLUE_SetMonsterList__Fi(List);
	pMVar1 = GLUE_GetCurrentList__Fi(currlevel);
	uVar6 = 0;
	while (uVar6 < (uint)pMVar1->NumOfMonsters) {
		if ((pMVar1->TheList[uVar6] != '\t') && (List = 0, pMVar1->TheList[uVar6] != '\x1d')) {
			iVar4 = 0;
			piVar5 = typelist + iVar7;
			while (List < 0x6f) {
				if (((uint)*(ushort *)((int)&monsterdata[0].GraphicType + iVar4) ==
						 (uint)pMVar1->TheList[uVar6]) &&
					 (((uVar2 = (uint)(byte)(&monsterdata[0].mMinDLvl)[iVar4] << 0x18,
						 uVar3 = (uint)(byte)(&monsterdata[0].mMaxDLvl)[iVar4] << 0x18,
						 ((int)(((int)uVar2 >> 0x18) + (uVar2 >> 0x1f)) >> 1) + 1 <= currlevel &&
						 (currlevel <= ((int)(((int)uVar3 >> 0x18) + (uVar3 >> 0x1f)) >> 1) + 1)) ||
						(pMVar1->TheList[uVar6] == 0x1d)))) {
					*piVar5 = List;
					piVar5 = piVar5 + 1;
					iVar7 = iVar7 + 1;
				}
				iVar4 = iVar4 + 0x3c;
				List = List + 1;
			}
		}
		uVar6 = uVar6 + 1;
	}
	if (iVar7 == 0) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0xd7);
	}
	return iVar7;
}





