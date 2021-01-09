#include "THISDUST.H"
#include "LOADSAVE.H"


// decompiled code
// original method signature: 
// char * /*$ra*/ GetOptStr__Fv()
 // line 135, offset 0x8015b958
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x8015B958
	/* end block 1 */
	// End offset: 0x8015B960
	// End Line: 137

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * GetOptStr__Fv(void)

{
	return OptSaveName;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetDiabloStr__Fv()
 // line 145, offset 0x8015b968
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8015B968
	/* end block 1 */
	// End offset: 0x8015B970
	// End Line: 147

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * GetDiabloStr__Fv(void)

{
	return DiabloStr;
}



// decompiled code
// original method signature: 
// char /*$ra*/ BLoad__Fv()
 // line 152, offset 0x8015b978
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x8015B978
	/* end block 1 */
	// End offset: 0x8015B98C
	// End Line: 154

/* WARNING: Unknown calling convention yet parameter storage is locked */

char BLoad__Fv(void)

{
	uchar uVar1;
	
	uVar1 = *tbuff;
	tbuff = tbuff + 1;
	return (char)uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ILoad__Fv()
 // line 157, offset 0x8015b994
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8015B994
		// Variables:
	// 		int rv; // $v0
	/* end block 1 */
	// End offset: 0x8015B9E0
	// End Line: 164

/* WARNING: Unknown calling convention yet parameter storage is locked */

int ILoad__Fv(void)

{
	byte *pbVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte bVar4;
	
	bVar4 = *tbuff;
	pbVar1 = tbuff + 1;
	pbVar2 = tbuff + 2;
	pbVar3 = tbuff + 3;
	tbuff = tbuff + 4;
	return (uint)bVar4 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 << 8 | (uint)*pbVar3;
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ OLoad__Fv()
 // line 182, offset 0x8015b9e8
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8015B9E8
	/* end block 1 */
	// End offset: 0x8015BA04
	// End Line: 185

/* WARNING: Unknown calling convention yet parameter storage is locked */

uchar OLoad__Fv(void)

{
	uchar uVar1;
	
	uVar1 = *tbuff;
	tbuff = tbuff + 1;
	return (uchar)(uVar1 == '\x01');
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadQuest__Fi(int i /*$a0*/)
 // line 253, offset 0x8015ba0c
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x8015BA0C
	/* end block 1 */
	// End offset: 0x8015BACC
	// End Line: 256

void LoadQuest__Fi(int i)

{
	uchar *puVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	
	puVar1 = tbuff;
	iVar2 = *(int *)(tbuff + 4);
	iVar3 = *(int *)(tbuff + 8);
	uVar4 = *(undefined4 *)(tbuff + 0xc);
	*(undefined4 *)(quests + i) = *(undefined4 *)tbuff;
	quests[i]._qtx = iVar2;
	quests[i]._qty = iVar3;
	*(undefined4 *)&quests[i]._qslvl = uVar4;
	*(undefined4 *)&quests[i]._qvar2 = *(undefined4 *)(puVar1 + 0x10);
	tbuff = tbuff + 0x14;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BSave__Fc(char v /*$a0*/)
 // line 447, offset 0x8015bad4
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x8015BAD4
	/* end block 1 */
	// End offset: 0x8015BAE4
	// End Line: 449

void BSave__Fc(char v)

{
	uchar *puVar1;
	
	puVar1 = tbuff + 1;
	*tbuff = v;
	tbuff = puVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ISave__Fi(int v /*$a0*/)
 // line 453, offset 0x8015baec
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x8015BAEC
	/* end block 1 */
	// End offset: 0x8015BB44
	// End Line: 461

void ISave__Fi(int v)

{
	uchar *puVar1;
	
	puVar1 = tbuff + 1;
	*tbuff = (uchar)((uint)v >> 0x18);
	tbuff = puVar1;
	puVar1 = tbuff + 1;
	*tbuff = (uchar)((uint)v >> 0x10);
	tbuff = puVar1;
	puVar1 = tbuff + 1;
	*tbuff = (uchar)((uint)v >> 8);
	tbuff = puVar1;
	puVar1 = tbuff + 1;
	*tbuff = (uchar)v;
	tbuff = puVar1;
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ OSave__FUc(unsigned char v /*$a0*/)
 // line 477, offset 0x8015bb4c
	/* begin block 1 */
		// Start line: 478
		// Start offset: 0x8015BB4C
	/* end block 1 */
	// End offset: 0x8015BB88
	// End Line: 480

void OSave__FUc(uchar v)

{
	uchar *puVar1;
	
	if (v == '\0') {
		puVar1 = tbuff + 1;
		*tbuff = '\0';
		tbuff = puVar1;
	}
	else {
		puVar1 = tbuff + 1;
		*tbuff = '\x01';
		tbuff = puVar1;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveQuest__Fi(int i /*$a0*/)
 // line 544, offset 0x8015bb90
	/* begin block 1 */
		// Start line: 545
		// Start offset: 0x8015BB90
	/* end block 1 */
	// End offset: 0x8015BC54
	// End Line: 547

void SaveQuest__Fi(int i)

{
	uchar *puVar1;
	int iVar2;
	int iVar3;
	undefined4 uVar4;
	
	puVar1 = tbuff;
	iVar2 = quests[i]._qtx;
	iVar3 = quests[i]._qty;
	uVar4 = *(undefined4 *)&quests[i]._qslvl;
	*(undefined4 *)tbuff = *(undefined4 *)(quests + i);
	*(int *)(puVar1 + 4) = iVar2;
	*(int *)(puVar1 + 8) = iVar3;
	*(undefined4 *)(puVar1 + 0xc) = uVar4;
	*(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)&quests[i]._qvar2;
	tbuff = tbuff + 0x14;
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PSX_GM_SaveGame__FiPcT1(int card_number /*$s6*/, char *name /*$s7*/, char *title /*$fp*/)
 // line 880, offset 0x8015bc5c
	/* begin block 1 */
		// Start line: 881
		// Start offset: 0x8015BC5C
		// Variables:
	// 		int i; // $s0
	// 		int result; // $v1
	// 		int tries; // $s3
	// 		unsigned char *SaveBuff; // $s5
	// 		int SaveSize; // $s0
	// 		int savesize; // $s0

		/* begin block 1.1 */
			// Start line: 1020
			// Start offset: 0x8015C110
			// Variables:
		// 		int delete_file_number; // $v0
		/* end block 1.1 */
		// End offset: 0x8015C140
		// End Line: 1034
	/* end block 1 */
	// End offset: 0x8015C188
	// End Line: 1040

int PSX_GM_SaveGame__FiPcT1(int card_number,char *name,char *title)

{
	char *pcVar1;
	uchar *puVar2;
	int i;
	GM_SPEEDS GVar3;
	PLR_MODE PVar4;
	undefined4 uVar5;
	PLR_MODE PVar6;
	ulong v;
	undefined4 uVar7;
	PLR_MODE PVar8;
	undefined4 uVar9;
	PlayerStruct *pPVar10;
	LocalLevel *pLVar11;
	PortalStruct *pPVar12;
	PLR_MODE *pPVar13;
	undefined4 *puVar14;
	LocalLevel *pLVar15;
	int iVar16;
	uchar *v_00;
	PlayerStruct *pPVar17;
	ulong *puVar18;
	int iVar19;
	
	tbuff = save_buffer;
	GetIcon__Fv();
	iVar16 = 0;
	DeltaSaveLevel__Fv();
	ISave__Fi(-1);
	iVar19 = 4;
	ISave__Fi(FePlayerNo);
	ISave__Fi((uint)gbActivePlayers);
	ISave__Fi((uint)currlevel);
	ISave__Fi((uint)leveltype);
	ISave__Fi((uint)setlevel);
	ISave__Fi((uint)setlvlnum);
	i = DeltaExportData__FPc((char *)tbuff);
	pPVar12 = &portal;
	tbuff = tbuff + i;
	do {
		puVar2 = tbuff;
		iVar16 = iVar16 + 1;
		uVar5 = *(undefined4 *)&pPVar12->x;
		uVar7 = *(undefined4 *)&pPVar12->open;
		*(int *)tbuff = pPVar12->ltype;
		*(undefined4 *)(puVar2 + 4) = uVar5;
		*(undefined4 *)(puVar2 + 8) = uVar7;
		tbuff = tbuff + 0xc;
		pPVar12 = pPVar12 + 1;
	} while (iVar16 < 4);
	i = 0;
	if (0 < FePlayerNo + 1) {
		pPVar17 = plr;
		do {
			if (((uint)tbuff & 3) == 0) {
				pPVar10 = pPVar17;
				pPVar13 = (PLR_MODE *)tbuff;
				do {
					PVar4 = *(PLR_MODE *)pPVar10->walkpath;
					PVar6 = *(PLR_MODE *)(pPVar10->walkpath + 4);
					PVar8 = *(PLR_MODE *)(pPVar10->walkpath + 8);
					*pPVar13 = pPVar10->_pmode;
					pPVar13[1] = PVar4;
					pPVar13[2] = PVar6;
					pPVar13[3] = PVar8;
					pPVar10 = (PlayerStruct *)(pPVar10->walkpath + 0xc);
					pPVar13 = pPVar13 + 4;
				} while (pPVar10 != (PlayerStruct *)&pPVar17->pTownWarps);
			}
			else {
				pPVar10 = pPVar17;
				pPVar13 = (PLR_MODE *)tbuff;
				do {
					PVar4 = *(PLR_MODE *)pPVar10->walkpath;
					PVar6 = *(PLR_MODE *)(pPVar10->walkpath + 4);
					PVar8 = *(PLR_MODE *)(pPVar10->walkpath + 8);
					*pPVar13 = pPVar10->_pmode;
					pPVar13[1] = PVar4;
					pPVar13[2] = PVar6;
					pPVar13[3] = PVar8;
					pPVar10 = (PlayerStruct *)(pPVar10->walkpath + 0xc);
					pPVar13 = pPVar13 + 4;
				} while (pPVar10 != (PlayerStruct *)&pPVar17->pTownWarps);
			}
			*pPVar13 = pPVar10->_pmode;
			tbuff = tbuff + 0x19e4;
			pPVar17 = pPVar17 + 1;
			BSave__Fc(QSpell[i]);
			pcVar1 = _spltotype + i;
			i = i + 1;
			BSave__Fc(*pcVar1);
		} while (i < FePlayerNo + 1);
	}
	i = 0;
	puVar18 = &glSeedTbl;
	do {
		v = *puVar18;
		puVar18 = puVar18 + 1;
		i = i + 1;
		ISave__Fi(v);
	} while (i < 0x11);
	i = 0;
	do {
		BSave__Fc((&MlTab)[i]);
		pcVar1 = &QlTab + i;
		i = i + 1;
		BSave__Fc(*pcVar1);
	} while (i < 0x10);
	i = 0;
	ISave__Fi(orgseed);
	do {
		SaveQuest__Fi(i);
		i = i + 1;
	} while (i < 0x10);
	i = 0;
	SaveOptions__Fv();
	pLVar15 = sgLocals;
	do {
		if (((uint)tbuff & 3) == 0) {
			pLVar11 = pLVar15;
			puVar14 = (undefined4 *)tbuff;
			do {
				uVar5 = *(undefined4 *)(pLVar11->automapsv + 4);
				uVar7 = *(undefined4 *)(pLVar11->automapsv + 8);
				uVar9 = *(undefined4 *)(pLVar11->automapsv + 0xc);
				*puVar14 = *(undefined4 *)pLVar11->automapsv;
				puVar14[1] = uVar5;
				puVar14[2] = uVar7;
				puVar14[3] = uVar9;
				pLVar11 = (LocalLevel *)(pLVar11->automapsv + 0x10);
				puVar14 = puVar14 + 4;
			} while (pLVar11 != (LocalLevel *)(pLVar15->automapsv + 0xc0));
		}
		else {
			pLVar11 = pLVar15;
			puVar14 = (undefined4 *)tbuff;
			do {
				uVar5 = *(undefined4 *)(pLVar11->automapsv + 4);
				uVar7 = *(undefined4 *)(pLVar11->automapsv + 8);
				uVar9 = *(undefined4 *)(pLVar11->automapsv + 0xc);
				*puVar14 = *(undefined4 *)pLVar11->automapsv;
				puVar14[1] = uVar5;
				puVar14[2] = uVar7;
				puVar14[3] = uVar9;
				pLVar11 = (LocalLevel *)(pLVar11->automapsv + 0x10);
				puVar14 = puVar14 + 4;
			} while (pLVar11 != (LocalLevel *)(pLVar15->automapsv + 0xc0));
		}
		uVar5 = *(undefined4 *)(pLVar11->automapsv + 4);
		*puVar14 = *(undefined4 *)pLVar11->automapsv;
		puVar14[1] = uVar5;
		i = i + 1;
		tbuff = tbuff + 200;
		pLVar15 = pLVar15 + 1;
	} while (i < 0x16);
	i = 0;
	ISave__Fi(gnDifficulty);
	do {
		puVar2 = &LevPals + i;
		i = i + 1;
		BSave__Fc(*puVar2);
	} while (i < 0x11);
	ISave__Fi(_numpremium[StorePlrNo]);
	ISave__Fi(_premiumlevel[StorePlrNo]);
	ISave__Fi(ViewX);
	ISave__Fi(ViewY);
	GVar3 = GetSpeed__Fv();
	BSave__Fc((char)GVar3);
	puVar2 = tbuff;
	v_00 = tbuff + 0x7febc914;
	tbuff = save_buffer;
	ISave__Fi((int)v_00);
	tbuff = puVar2;
	if ((int)v_00 < 0x14000) {
		v_00 = (uchar *)0x13e00;
		tbuff = puVar2;
	}
	do {
		i = GetFileNumber__FiPc(current_card,DiabloGameFile);
		if (i != -1) {
			delete_card_file__Fii(current_card,i);
		}
		i = write_card_file__FiiPcT2PUcPUsiT4
									(card_number,(int)&DAT_00003001,name,title,s__800e3ce8,(ushort *)s__800e3cc8,
									 (int)v_00,save_buffer);
		iVar19 = iVar19 + -1;
	} while ((iVar19 != -1) && (i != 0));
	gbValidSaveFile = '\x01';
	return i;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PSX_GM_LoadGame__FUcii(unsigned char firstflag /*$s2*/, int card_number /*$s0*/, int file /*$s1*/)
 // line 1043, offset 0x8015c1bc
	/* begin block 1 */
		// Start line: 1044
		// Start offset: 0x8015C1BC
		// Variables:
	// 		int result; // $v0
	// 		unsigned char *LoadBuff; // $s3
	/* end block 1 */
	// End offset: 0x8015C2C8
	// End Line: 1119

int PSX_GM_LoadGame__FUcii(uchar firstflag,int card_number,int file)

{
	int iVar1;
	uchar *puVar2;
	
	tbuff = save_buffer;
	FreeGameMem__Fv();
	iVar1 = read_card_file__FiiiPc(card_number,file,(int)&DAT_00003001,(char *)tbuff);
	if (iVar1 == 0) {
		gbRunGame = '\0';
		delta_init__Fv();
		GLUE_SetShowGameScreenFlag__Fb((void *)0x0);
		puVar2 = (uchar *)RestoreLoadedData__Fb((void *)(uint)(firstflag != '\0'));
		if (puVar2 == tbuff + 0x7febc914) {
			gbMaxPlayers = (char)FePlayerNo + '\x01';
			SetReturnLvlPos__Fv();
			ResyncQuests__Fv();
			SetLoadedVolumes__Fv();
			CalcVolumes__Fv();
			ClearQuestFlags__Fv();
			gbProcessPlayers = '\x01';
			plr[0]._pRSpell = -1;
			plr[1]._pRSpell = -1;
			options_pad = -1;
			deathflag = '\0';
			iVar1 = 0;
		}
		else {
			VID_SetXYOff__Fii(0,0);
			iVar1 = -2;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSX_CH_LoadGame__Fi(int slot /*$s0*/)
 // line 1124, offset 0x8015c2e8
	/* begin block 1 */
		// Start line: 1125
		// Start offset: 0x8015C2E8
	/* end block 1 */
	// End offset: 0x8015C374
	// End Line: 1133

void PSX_CH_LoadGame__Fi(int slot)

{
	gbMaxPlayers = (char)FePlayerNo + '\x01';
	UnPackPlayer__FPC14PkPlayerStructiUc
						((PkPlayerStruct *)((int)CharDataStruct.CharSlots + slot * 0x4f8),FePlayerNo,'\0');
	QSpell[FePlayerNo] = (&DAT_801594c0)[slot];
	_spltotype[FePlayerNo] = (&DAT_801594c6)[slot];
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PSX_CH_LoadBlock__Fii(int card_number /*$a0*/, int file /*$a1*/)
 // line 1136, offset 0x8015c388
	/* begin block 1 */
		// Start line: 1137
		// Start offset: 0x8015C388
	/* end block 1 */
	// End offset: 0x8015C3A0
	// End Line: 1143

int PSX_CH_LoadBlock__Fii(int card_number,int file)

{
	int iVar1;
	
	iVar1 = read_card_file__FiiiPc(card_number,file,(int)&DAT_00003001,(char *)&CharDataStruct);
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PSX_CH_SaveGame__Fii(int card_number /*$s4*/, int slot /*$s0*/)
 // line 1146, offset 0x8015c3b0
	/* begin block 1 */
		// Start line: 1147
		// Start offset: 0x8015C3B0
		// Variables:
	// 		int result; // $v0
	// 		int tries; // $s1
	// 		char TempStr[64]; // stack offset -96

		/* begin block 1.1 */
			// Start line: 1174
			// Start offset: 0x8015C47C
			// Variables:
		// 		int delete_file_number; // $v0
		/* end block 1.1 */
		// End offset: 0x8015C4AC
		// End Line: 1188
	/* end block 1 */
	// End offset: 0x8015C4F4
	// End Line: 1192

int PSX_CH_SaveGame__Fii(int card_number,int slot)

{
	int file;
	int iVar1;
	char acStack96 [64];
	
	sprintf(acStack96,"%s %s",DiabloStr,SaveCharName);
	iVar1 = 4;
	GetIcon__Fv();
	PackPlayer__FP14PkPlayerStructi
						((PkPlayerStruct *)((int)CharDataStruct.CharSlots + slot * 0x4f8),options_pad);
	(&DAT_801594c0)[slot] = QSpell[options_pad];
	(&DAT_801594c6)[slot] = _spltotype[options_pad];
	do {
		file = GetFileNumber__FiPc(current_card,DiabloCharacterFile);
		if (file != -1) {
			delete_card_file__Fii(current_card,file);
		}
		iVar1 = iVar1 + -1;
		file = write_card_file__FiiPcT2PUcPUsiT4
										 (card_number,(int)&DAT_00003001,DiabloCharacterFile,acStack96,s__800e3ce8,
											(ushort *)s__800e3cc8,(int)&DAT_00001de0,(uchar *)&CharDataStruct);
	} while ((iVar1 != -1) && (file != 0));
	return file;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RestorePads__Fv()
 // line 1195, offset 0x8015c51c
	/* begin block 1 */
		// Start line: 1196
		// Start offset: 0x8015C51C
	/* end block 1 */
	// End offset: 0x8015C5C8
	// End Line: 1211

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RestorePads__Fv(void)

{
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	do {
		iVar1 = ILoad__Fv();
		*(int *)((int)&txt_actions.pad_val + iVar2) = iVar1;
		iVar1 = ILoad__Fv();
		*(int *)((int)&txt_actions.combo_val + iVar2) = iVar1;
		iVar2 = iVar2 + 0x10;
	} while (iVar2 < 0x140);
	PostGamePad__Fiiii(9,0,(int)&txt_actions,0);
	iVar2 = 0;
	do {
		iVar1 = ILoad__Fv();
		*(int *)((int)&txt_actions.pad_val + iVar2) = iVar1;
		iVar1 = ILoad__Fv();
		*(int *)((int)&txt_actions.combo_val + iVar2) = iVar1;
		iVar2 = iVar2 + 0x10;
	} while (iVar2 < 0x140);
	PostGamePad__Fiiii(9,1,(int)&txt_actions,0);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StorePads__Fv()
 // line 1214, offset 0x8015c5dc
	/* begin block 1 */
		// Start line: 1215
		// Start offset: 0x8015C5DC
	/* end block 1 */
	// End offset: 0x8015C684
	// End Line: 1230

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StorePads__Fv(void)

{
	int *piVar1;
	int iVar2;
	
	PostGamePad__Fiiii(0xb,0,(int)&txt_actions,0);
	iVar2 = 0;
	do {
		ISave__Fi(*(int *)((int)&txt_actions.pad_val + iVar2));
		piVar1 = (int *)((int)&txt_actions.combo_val + iVar2);
		iVar2 = iVar2 + 0x10;
		ISave__Fi(*piVar1);
	} while (iVar2 < 0x140);
	PostGamePad__Fiiii(0xb,1,(int)&txt_actions,0);
	iVar2 = 0;
	do {
		ISave__Fi(*(int *)((int)&txt_actions.pad_val + iVar2));
		piVar1 = (int *)((int)&txt_actions.combo_val + iVar2);
		iVar2 = iVar2 + 0x10;
		ISave__Fi(*piVar1);
	} while (iVar2 < 0x140);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetIcon__Fv()
 // line 1233, offset 0x8015c698
	/* begin block 1 */
		// Start line: 1234
		// Start offset: 0x8015C698
	/* end block 1 */
	// End offset: 0x8015C6C4
	// End Line: 1237

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetIcon__Fv(void)

{
	FileIO *this;
	
	this = SYSI_GetFs__Fv();
	ReadAtAddr__6FileIOPCcPUci(this,"DIABICON.RAW",IconBuffer,-1);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PSX_OPT_LoadGame__Fiib(int card_number /*$a0*/, int file /*$a1*/, void * KillHandler /*$a2*/)
 // line 1240, offset 0x8015c6d4
	/* begin block 1 */
		// Start line: 1241
		// Start offset: 0x8015C6D4
		// Variables:
	// 		int result; // $s0
	// 		unsigned char *LoadBuff; // $a3
	/* end block 1 */
	// End offset: 0x8015C71C
	// End Line: 1258

int PSX_OPT_LoadGame__Fiib(int card_number,int file,void *KillHandler)

{
	int iVar1;
	LANG_TYPE LoadLang;
	
	tbuff = save_buffer;
	iVar1 = read_card_file__FiiiPc(card_number,file,(int)&DAT_00003001,(char *)save_buffer);
	if (iVar1 == 0) {
		LoadOptions__Fv();
		LoadLang = ILoad__Fv();
		SetLoadedLang__F9LANG_TYPE(LoadLang);
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PSX_OPT_SaveGame__FiPc(int card_number /*$s4*/, char *filename /*$s5*/)
 // line 1261, offset 0x8015c730
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x8015C730
		// Variables:
	// 		int result; // $v0
	// 		int tries; // $s0
	// 		char TempStr[64]; // stack offset -96
	// 		unsigned char *SaveBuff; // $s3

		/* begin block 1.1 */
			// Start line: 1291
			// Start offset: 0x8015C7B8
			// Variables:
		// 		int delete_file_number; // $v0
		/* end block 1.1 */
		// End offset: 0x8015C7E8
		// End Line: 1305
	/* end block 1 */
	// End offset: 0x8015C824
	// End Line: 1309

int PSX_OPT_SaveGame__FiPc(int card_number,char *filename)

{
	LANG_TYPE v;
	int file;
	int iVar1;
	char acStack96 [64];
	
	iVar1 = 4;
	sprintf(acStack96,"%s %s",DiabloStr,OptSaveName);
	tbuff = save_buffer;
	SaveOptions__Fv();
	v = LANG_GetLang__Fv();
	ISave__Fi(v);
	GetIcon__Fv();
	do {
		file = GetFileNumber__FiPc(current_card,DiabloOptionFile);
		if (file != -1) {
			delete_card_file__Fii(current_card,file);
		}
		file = write_card_file__FiiPcT2PUcPUsiT4
										 (card_number,(int)&DAT_00003001,filename,acStack96,s__800e3ce8,
											(ushort *)s__800e3cc8,(int)&DAT_00001b58,save_buffer);
		iVar1 = iVar1 + -1;
	} while ((iVar1 != -1) && (file != 0));
	return file;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadOptions__Fv()
 // line 1314, offset 0x8015c850
	/* begin block 1 */
		// Start line: 1315
		// Start offset: 0x8015C850
	/* end block 1 */
	// End offset: 0x8015C914
	// End Line: 1336

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadOptions__Fv(void)

{
	char cVar1;
	int x;
	int y;
	
	sglMasterVolume = ILoad__Fv();
	sglMusicVolume = ILoad__Fv();
	sglSoundVolume = ILoad__Fv();
	sglSpeechVolume = ILoad__Fv();
	if (ADirtyFlagThatGaryWillLove == '\0') {
		x = ILoad__Fv();
		y = ILoad__Fv();
		VID_SetXYOff__Fii(x,y);
	}
	else {
		DirtyVidx = ILoad__Fv();
		DirtyVidY = ILoad__Fv();
	}
	RestorePads__Fv();
	cVar1 = BLoad__Fv();
	MONO = (void *)(uint)(cVar1 != '\0');
	cVar1 = BLoad__Fv();
	SetSpeed__F9GM_SPEEDS((int)cVar1);
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveOptions__Fv()
 // line 1339, offset 0x8015c928
	/* begin block 1 */
		// Start line: 1340
		// Start offset: 0x8015C928
	/* end block 1 */
	// End offset: 0x8015C9BC
	// End Line: 1355

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SaveOptions__Fv(void)

{
	int v;
	GM_SPEEDS GVar1;
	
	ISave__Fi(sglMasterVolume);
	ISave__Fi(sglMusicVolume);
	ISave__Fi(sglSoundVolume);
	ISave__Fi(sglSpeechVolume);
	v = VID_GetXOff__Fv();
	ISave__Fi(v);
	v = VID_GetYOff__Fv();
	ISave__Fi(v);
	StorePads__Fv();
	BSave__Fc((char)MONO);
	GVar1 = GetSpeed__Fv();
	BSave__Fc((char)GVar1);
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RestoreLoadedData__Fb(void * firstflag /*$a0*/)
 // line 1358, offset 0x8015c9cc
	/* begin block 1 */
		// Start line: 1359
		// Start offset: 0x8015C9CC
		// Variables:
	// 		unsigned char *LoadBuff; // $v0
	// 		int DataSize; // $s2
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8015CE10
	// End Line: 1466

int RestoreLoadedData__Fb(void *firstflag)

{
	char cVar1;
	uchar uVar2;
	int iVar3;
	int i;
	ulong uVar4;
	PLR_MODE PVar5;
	undefined4 uVar6;
	PLR_MODE PVar7;
	undefined4 uVar8;
	PLR_MODE PVar9;
	undefined4 uVar10;
	PLR_MODE *pPVar11;
	undefined4 *puVar12;
	PortalStruct *pPVar13;
	PlayerStruct *pPVar14;
	LocalLevel *pLVar15;
	PLR_MODE *pPVar16;
	undefined4 *puVar17;
	LocalLevel *pLVar18;
	int iVar19;
	PlayerStruct *pPVar20;
	ulong *puVar21;
	
	tbuff = save_buffer;
	iVar19 = 0;
	iVar3 = ILoad__Fv();
	FePlayerNo = ILoad__Fv();
	ILoad__Fv();
	i = ILoad__Fv();
	currlevel = (uchar)i;
	i = ILoad__Fv();
	leveltype = (uchar)i;
	i = ILoad__Fv();
	setlevel = (uchar)i;
	i = ILoad__Fv();
	setlvlnum = (uchar)i;
	i = DeltaImportData__FPc((char *)tbuff);
	pPVar13 = &portal;
	tbuff = tbuff + i;
	do {
		iVar19 = iVar19 + 1;
		uVar6 = *(undefined4 *)(tbuff + 4);
		uVar8 = *(undefined4 *)(tbuff + 8);
		pPVar13->ltype = *(int *)tbuff;
		*(undefined4 *)&pPVar13->x = uVar6;
		*(undefined4 *)&pPVar13->open = uVar8;
		tbuff = tbuff + 0xc;
		pPVar13 = pPVar13 + 1;
	} while (iVar19 < 4);
	i = 0;
	if (0 < FePlayerNo + 1) {
		pPVar20 = plr;
		do {
			if (((uint)tbuff & 3) == 0) {
				pPVar16 = (PLR_MODE *)(tbuff + 0x19e0);
				pPVar11 = (PLR_MODE *)tbuff;
				pPVar14 = pPVar20;
				do {
					PVar5 = pPVar11[1];
					PVar7 = pPVar11[2];
					PVar9 = pPVar11[3];
					pPVar14->_pmode = *pPVar11;
					*(PLR_MODE *)pPVar14->walkpath = PVar5;
					*(PLR_MODE *)(pPVar14->walkpath + 4) = PVar7;
					*(PLR_MODE *)(pPVar14->walkpath + 8) = PVar9;
					pPVar11 = pPVar11 + 4;
					pPVar14 = (PlayerStruct *)(pPVar14->walkpath + 0xc);
				} while (pPVar11 != pPVar16);
			}
			else {
				pPVar16 = (PLR_MODE *)(tbuff + 0x19e0);
				pPVar11 = (PLR_MODE *)tbuff;
				pPVar14 = pPVar20;
				do {
					PVar5 = pPVar11[1];
					PVar7 = pPVar11[2];
					PVar9 = pPVar11[3];
					pPVar14->_pmode = *pPVar11;
					*(PLR_MODE *)pPVar14->walkpath = PVar5;
					*(PLR_MODE *)(pPVar14->walkpath + 4) = PVar7;
					*(PLR_MODE *)(pPVar14->walkpath + 8) = PVar9;
					pPVar11 = pPVar11 + 4;
					pPVar14 = (PlayerStruct *)(pPVar14->walkpath + 0xc);
				} while (pPVar11 != pPVar16);
			}
			pPVar14->_pmode = *pPVar11;
			tbuff = tbuff + 0x19e4;
			pPVar20 = pPVar20 + 1;
			cVar1 = BLoad__Fv();
			QSpell[i] = cVar1;
			cVar1 = BLoad__Fv();
			_spltotype[i] = cVar1;
			i = i + 1;
		} while (i < FePlayerNo + 1);
	}
	i = 0;
	puVar21 = &glSeedTbl;
	do {
		i = i + 1;
		uVar4 = ILoad__Fv();
		*puVar21 = uVar4;
		puVar21 = puVar21 + 1;
	} while (i < 0x11);
	i = 0;
	do {
		cVar1 = BLoad__Fv();
		(&MlTab)[i] = cVar1;
		cVar1 = BLoad__Fv();
		(&QlTab)[i] = cVar1;
		i = i + 1;
	} while (i < 0x10);
	i = 0;
	orgseed = ILoad__Fv();
	do {
		LoadQuest__Fi(i);
		i = i + 1;
	} while (i < 0x10);
	i = 0;
	LoadOptions__Fv();
	pLVar18 = sgLocals;
	do {
		if (((uint)tbuff & 3) == 0) {
			puVar17 = (undefined4 *)(tbuff + 0xc0);
			puVar12 = (undefined4 *)tbuff;
			pLVar15 = pLVar18;
			do {
				uVar6 = puVar12[1];
				uVar8 = puVar12[2];
				uVar10 = puVar12[3];
				*(undefined4 *)pLVar15->automapsv = *puVar12;
				*(undefined4 *)(pLVar15->automapsv + 4) = uVar6;
				*(undefined4 *)(pLVar15->automapsv + 8) = uVar8;
				*(undefined4 *)(pLVar15->automapsv + 0xc) = uVar10;
				puVar12 = puVar12 + 4;
				pLVar15 = (LocalLevel *)(pLVar15->automapsv + 0x10);
			} while (puVar12 != puVar17);
		}
		else {
			puVar17 = (undefined4 *)(tbuff + 0xc0);
			puVar12 = (undefined4 *)tbuff;
			pLVar15 = pLVar18;
			do {
				uVar6 = puVar12[1];
				uVar8 = puVar12[2];
				uVar10 = puVar12[3];
				*(undefined4 *)pLVar15->automapsv = *puVar12;
				*(undefined4 *)(pLVar15->automapsv + 4) = uVar6;
				*(undefined4 *)(pLVar15->automapsv + 8) = uVar8;
				*(undefined4 *)(pLVar15->automapsv + 0xc) = uVar10;
				puVar12 = puVar12 + 4;
				pLVar15 = (LocalLevel *)(pLVar15->automapsv + 0x10);
			} while (puVar12 != puVar17);
		}
		uVar6 = puVar12[1];
		*(undefined4 *)pLVar15->automapsv = *puVar12;
		*(undefined4 *)(pLVar15->automapsv + 4) = uVar6;
		i = i + 1;
		tbuff = tbuff + 200;
		pLVar18 = pLVar18 + 1;
	} while (i < 0x16);
	i = 0;
	gnDifficulty = ILoad__Fv();
	do {
		uVar2 = BLoad__Fv();
		(&LevPals)[i] = uVar2;
		i = i + 1;
	} while (i < 0x11);
	i = ILoad__Fv();
	_numpremium[StorePlrNo] = i;
	i = ILoad__Fv();
	_premiumlevel[StorePlrNo] = i;
	ViewX = ILoad__Fv();
	ViewY = ILoad__Fv();
	cVar1 = BLoad__Fv();
	SetSpeed__F9GM_SPEEDS((int)cVar1);
	return iVar3;
}





