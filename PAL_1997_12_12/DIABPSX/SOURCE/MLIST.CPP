#include "THISDUST.H"
#include "MLIST.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ML_Init__Fv()
 // line 67, offset 0x80075aac
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80075AAC

		/* begin block 1.1 */
			// Start line: 69
			// Start offset: 0x80075AAC
			// Variables:
		// 		int f; // $v1
		/* end block 1.1 */
		// End offset: 0x80075ADC
		// End Line: 73
	/* end block 1 */
	// End offset: 0x80075ADC
	// End Line: 73

	/* begin block 2 */
		// Start line: 135
	/* end block 2 */
	// End Line: 136

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
 // line 81, offset 0x80075ae4
	/* begin block 1 */
		// Start line: 82
		// Start offset: 0x80075AE4
		// Variables:
	// 		int RetVal; // $v0
	/* end block 1 */
	// End offset: 0x80075B50
	// End Line: 97

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

int ML_GetList__Fi(int Level)

{
	int iVar1;
	
	iVar1 = -1;
	if (Level != 0) {
		if (0xf < Level + -1) {
			DBG_Error((char *)0x0,"source/MLIST.cpp",0x59);
		}
		if (setlevel == '\0') {
			iVar1 = (int)(char)(&DAT_800e855b)[Level];
		}
		else {
			iVar1 = (int)(&CHAR_00h_800e856b)[Level];
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_SetRandomList__Fi(int Level /*$s0*/)
 // line 105, offset 0x80075b64
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x80075B64
		// Variables:
	// 		int NumOfLists; // $a0
	/* end block 1 */
	// End offset: 0x80075BE8
	// End Line: 121

	/* begin block 2 */
		// Start line: 210
	/* end block 2 */
	// End Line: 211

int ML_SetRandomList__Fi(int Level)

{
	char cVar1;
	ulong uVar2;
	
	if (0xf < Level - 1U) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0x6b);
	}
	if (setlevel == '\0') {
		uVar2 = GU_GetRndRange(AllLevels[Level - 1U].NumOfLists);
		cVar1 = (char)uVar2;
		(&DAT_800e855b)[Level] = cVar1;
	}
	else {
		uVar2 = GU_GetRndRange(AllLevels[Level - 1U].NumOfLists);
		cVar1 = (char)uVar2;
		(&CHAR_00h_800e856b)[Level] = cVar1;
	}
	return (int)cVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_SetList__Fii(int Level /*$s0*/, int List /*$s1*/)
 // line 131, offset 0x80075bfc
	/* begin block 1 */
		// Start line: 132
		// Start offset: 0x80075BFC
		// Variables:
	// 		int NumOfLists; // $v0
	/* end block 1 */
	// End offset: 0x80075C94
	// End Line: 148

	/* begin block 2 */
		// Start line: 270
	/* end block 2 */
	// End Line: 271

int ML_SetList__Fii(int Level,int List)

{
	if (0xf < Level - 1U) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0x87);
	}
	if (AllLevels[Level - 1U].NumOfLists <= List) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0x8c);
	}
	if (setlevel == '\0') {
		(&DAT_800e855b)[Level] = (char)List;
	}
	else {
		(&CHAR_00h_800e856b)[Level] = (char)List;
	}
	return List;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ML_GetPresetMonsters__FiPiUl(int currlevel /*$s1*/, int *typelist /*$s4*/, unsigned long QuestsNeededMask /*$s3*/)
 // line 156, offset 0x80075cac
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x80075CAC
		// Variables:
	// 		struct MonstList *Mlist; // $t2
	// 		int NumOfMonsters; // $s2
	// 		int ThisList; // $s0

		/* begin block 1.1 */
			// Start line: 172
			// Start offset: 0x80075D14
			// Variables:
		// 		unsigned int f; // $t1

			/* begin block 1.1.1 */
				// Start line: 175
				// Start offset: 0x80075D30

				/* begin block 1.1.1.1 */
					// Start line: 181
					// Start offset: 0x80075D44

					/* begin block 1.1.1.1.1 */
						// Start line: 182
						// Start offset: 0x80075D60

						/* begin block 1.1.1.1.1.1 */
							// Start line: 183
							// Start offset: 0x80075D60
							// Variables:
						// 		int i; // $a3

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 183
								// Start offset: 0x80075D6C

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 185
									// Start offset: 0x80075D78

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 186
										// Start offset: 0x80075DA0
										// Variables:
									// 		int minl; // $a0
									// 		int maxl; // $v0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80075E10
									// End Line: 193
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80075E10
								// End Line: 193
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80075E10
							// End Line: 193
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80075E1C
						// End Line: 196
					/* end block 1.1.1.1.1 */
					// End offset: 0x80075E1C
					// End Line: 196
				/* end block 1.1.1.1 */
				// End offset: 0x80075E1C
				// End Line: 196
			/* end block 1.1.1 */
			// End offset: 0x80075E1C
			// End Line: 196
		/* end block 1.1 */
		// End offset: 0x80075E24
		// End Line: 198
	/* end block 1 */
	// End offset: 0x80075E44
	// End Line: 200

	/* begin block 2 */
		// Start line: 320
	/* end block 2 */
	// End Line: 321

int ML_GetPresetMonsters__FiPiUl(int currlevel,int *typelist,ulong QuestsNeededMask)

{
	int List;
	MonstList *pMVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined uVar5;
	undefined in_a3;
	int *piVar6;
	uint uVar7;
	undefined unaff_s0;
	undefined unaff_s1;
	undefined unaff_s2;
	int iVar8;
	undefined unaff_s3;
	undefined4 local_8;
	undefined unaff_retaddr;
	undefined4 in_stack_00000000;
	undefined4 in_stack_00000004;
	undefined4 in_stack_00000008;
	undefined4 in_stack_0000000c;
	undefined4 in_stack_00000010;
	undefined4 in_stack_00000014;
	undefined4 in_stack_00000018;
	undefined4 in_stack_0000001c;
	undefined4 in_stack_00000020;
	undefined4 in_stack_00000024;
	
	iVar8 = 0;
	uVar5 = (char)QuestsNeededMask;
	List = ML_GetList__Fi(currlevel);
	if (List == -1) {
		List = FUN_801530b8((char)currlevel,(char)QuestsNeededMask,uVar5,in_a3,unaff_s0,unaff_s1,
												unaff_s2,unaff_s3,local_8,unaff_retaddr,in_stack_00000000,in_stack_00000004,
												in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
												in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024);
		ML_SetList__Fii(currlevel,List);
	}
	else {
		FUN_80153040(currlevel,List);
	}
	GLUE_SetMonsterList__Fi(List);
	pMVar1 = GLUE_GetCurrentList__Fi(currlevel);
	uVar7 = 0;
	while (uVar7 < (uint)pMVar1->NumOfMonsters) {
		List = 0;
		if (pMVar1->TheList[uVar7] != '\t') {
			iVar4 = 0;
			piVar6 = typelist + iVar8;
			while (List < 0x6f) {
				if (((uint)*(ushort *)((int)&monsterdata[0].GraphicType + iVar4) ==
						 (uint)pMVar1->TheList[uVar7]) &&
					 (((uVar2 = (uint)(byte)(&monsterdata[0].mMinDLvl)[iVar4] << 0x18,
						 uVar3 = (uint)(byte)(&monsterdata[0].mMaxDLvl)[iVar4] << 0x18,
						 ((int)(((int)uVar2 >> 0x18) + (uVar2 >> 0x1f)) >> 1) + 1 <= currlevel &&
						 (currlevel <= ((int)(((int)uVar3 >> 0x18) + (uVar3 >> 0x1f)) >> 1) + 1)) ||
						(pMVar1->TheList[uVar7] == 0x1d)))) {
					*piVar6 = List;
					piVar6 = piVar6 + 1;
					iVar8 = iVar8 + 1;
				}
				iVar4 = iVar4 + 0x3c;
				List = List + 1;
			}
		}
		uVar7 = uVar7 + 1;
	}
	if (iVar8 == 0) {
		DBG_Error((char *)0x0,"source/MLIST.cpp",0xc6);
	}
	return iVar8;
}





