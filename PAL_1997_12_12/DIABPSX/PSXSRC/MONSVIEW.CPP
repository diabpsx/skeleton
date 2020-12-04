#include "THISDUST.H"
#include "MONSVIEW.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DisplayMonsterTypes__Fv()
 // line 130, offset 0x8009fb74
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x8009FB74
		// Variables:
	// 		char Text[256]; // stack offset -296
	// 		struct CBlocks *MBlocks; // $s1
	// 		struct CMonster *MyCMonst; // $s4
	// 		struct MonsterData *MyMonst; // $s2
	// 		struct TextDat *CMonstGraphics; // $s1
	// 		struct TextDat *ObjGraphics; // $s3
	// 		struct POLY_FT4 *Ft4; // $s0
	// 		int NumMons; // $s5
	// 		int PhysFrame; // $s0
	// 		int Creature; // $s0
	// 		struct CPad *P; // $s0

		/* begin block 1.1 */
			// Start line: 170
			// Start offset: 0x8009FCF0

			/* begin block 1.1.1 */
				// Start line: 181
				// Start offset: 0x8009FD78

				/* begin block 1.1.1.1 */
					// Start line: 182
					// Start offset: 0x8009FD78

					/* begin block 1.1.1.1.1 */
						// Start line: 182
						// Start offset: 0x8009FD9C
						// Variables:
					// 		char transfile; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009FE3C
					// End Line: 197
				/* end block 1.1.1.1 */
				// End offset: 0x8009FE3C
				// End Line: 197
			/* end block 1.1.1 */
			// End offset: 0x8009FE3C
			// End Line: 197
		/* end block 1.1 */
		// End offset: 0x8009FE3C
		// End Line: 197
	/* end block 1 */
	// End offset: 0x8009FFE8
	// End Line: 217

	/* begin block 2 */
		// Start line: 260
	/* end block 2 */
	// End Line: 261

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DisplayMonsterTypes__Fv(void)

{
	int iVar1;
	ushort uVar2;
	ushort uVar3;
	CBlocks *this;
	char *__format;
	int Creature;
	int Frm;
	void *pvVar4;
	POLY_FT4 *FT4;
	FRAME_HDR *Fr;
	CPad *this_00;
	ulong uVar5;
	uint uVar6;
	TextDat *this_01;
	TextDat *this_02;
	char acStack296 [264];
	
	this = BL_GetCurrentBlocks__Fv();
	iVar1 = CurMons;
	uVar6 = (uint)Monsters[CurMons].mtype;
	uVar3 = this->MonsterList->NumOfMonsters;
	__format = GetStr__Fi(monsterdata[uVar6].mName);
	sprintf(acStack296,(char *)&PTR_DAT_8012addc,__format);
	Creature = GetStrWidth__5CFontPc(&MediumFont,acStack296);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,((int)((0x100U - Creature) + (0x100U - Creature >> 0x1f)) >> 1) + 0x20,0x30
						 ,acStack296,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
	switch(Action) {
	case 0:
		__format = "STAND";
		break;
	case 1:
		__format = &DAT_8012ade8;
		break;
	case 2:
		__format = "ATTACK";
		break;
	case 3:
		__format = "GOTHIT";
		break;
	case 4:
		__format = "DEATH";
		break;
	case 5:
		__format = "SPECIAL";
		break;
	default:
		goto switchD_8009fc84_caseD_6;
	}
	sprintf(acStack296,__format);
switchD_8009fc84_caseD_6:
	Creature = GetStrWidth__5CFontPc(&MediumFont,acStack296);
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,((int)((0x100U - Creature) + (0x100U - Creature >> 0x1f)) >> 1) + 0x20,0x40
						 ,acStack296,JustLeft,(RECT *)0x0,(uint)WHITER,(uint)WHITEG,(uint)WHITEG);
	this_01 = this->MonstTexDat;
	this_02 = this->ObjTexDat;
	Creature = FindCreature__7CBlocksi(this,(uint)monsterdata[uVar6].GraphicType);
	if ((Creature != -1) && (Frm = GetNumOfFrames__7TextDatii(this_01,Creature,Action), Frame < Frm))
	{
		Frm = GetFrNum__7TextDatiiii(this_01,Creature,Action,Dir,Frame);
		pvVar4 = IsDirAliased__7TextDatiii(this_01,Creature,Action,Dir);
		FT4 = PrintMonster__7TextDatiiibi
										(this_01,Frm,0xa0,0x78,(void *)(uint)(pvVar4 != (void *)0x0),300);
		if ((int)monsterdata[uVar6].TransFile != 0) {
			Fr = GetFr__7TextDati(this_02,(&TransPals)
																		[(((int)monsterdata[uVar6].TransFile << 0x19) >> 0x18) +
																		 (uint)(Action == 4)]);
			SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(this_02,Fr,FT4);
		}
	}
	this_00 = PAD_GetPad__FiUc(options_pad,'\x01');
	uVar2 = GetDown__C4CPad(this_00);
	if (((uVar2 & 2) != 0) && (1 < CurMons)) {
		CurMons = CurMons + -1;
	}
	uVar2 = GetDown__C4CPad(this_00);
	if (((uVar2 & 1) != 0) && (CurMons <= (int)(uint)uVar3)) {
		CurMons = CurMons + 1;
	}
	uVar3 = GetDown__C4CPad(this_00);
	if ((uVar3 & 4) != 0) {
		Action = Action + -1;
	}
	uVar3 = GetDown__C4CPad(this_00);
	if ((uVar3 & 8) != 0) {
		Action = Action + 1;
	}
	uVar3 = GetDown__C4CPad(this_00);
	if ((uVar3 & 0x400) != 0) {
		Dir = Dir + -1;
	}
	uVar3 = GetDown__C4CPad(this_00);
	if ((uVar3 & 0x1000) != 0) {
		Dir = Dir + 1;
	}
	if (Dir < 0) {
		Dir = 7;
	}
	if (7 < Dir) {
		Dir = 0;
	}
	if (Action < 0) {
		Action = 5;
	}
	if (5 < Action) {
		Action = 0;
	}
	uVar5 = TICK_Get();
	if ((uVar5 & 1) != 0) {
		Frame = Frame + 1;
	}
	if ((int)Monsters[iVar1].Anims[Action].Frames <= Frame) {
		Frame = 0;
	}
	return;
}





