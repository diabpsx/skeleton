#include "THISDUST.H"
#include "LANG.H"


// decompiled code
// original method signature: 
// enum LANG_TYPE /*$ra*/ LANG_GetLang__Fv()
 // line 84, offset 0x8007b348
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8007B348
	/* end block 1 */
	// End offset: 0x8007B34C
	// End Line: 86

	/* begin block 2 */
		// Start line: 169
	/* end block 2 */
	// End Line: 170

/* WARNING: Unknown calling convention yet parameter storage is locked */

LANG_TYPE LANG_GetLang__Fv(void)

{
	return LanguageType;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo /*$s2*/)
 // line 92, offset 0x8007b354
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x8007B354

		/* begin block 1.1 */
			// Start line: 100
			// Start offset: 0x8007B3A0

			/* begin block 1.1.1 */
				// Start line: 101
				// Start offset: 0x8007B3B0
				// Variables:
			// 		char FileNameBuffer[40]; // stack offset -64
			// 		struct FileIO *FIO; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 153
					// Start offset: 0x8007B4BC
					// Variables:
				// 		int f; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8007B50C
				// End Line: 163
			/* end block 1.1.1 */
			// End offset: 0x8007B50C
			// End Line: 163
		/* end block 1.1 */
		// End offset: 0x8007B50C
		// End Line: 163
	/* end block 1 */
	// End offset: 0x8007B50C
	// End Line: 163

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LANG_SetDb__F10LANG_DB_NO(LANG_DB_NO NewLangDbNo)

{
	char **ppcVar1;
	int iVar2;
	LANG_TYPE LVar3;
	undefined *puVar4;
	FileIO *this;
	char **ppcVar5;
	int iVar6;
	char acStack64 [48];
	
	LVar3 = LANG_GetLang__Fv();
	if (LVar3 == LANG_JAP) {
		while (puVar4 = (undefined *)IsKanjiLoaded__Fv(), puVar4 != &DAT_00000001) {
			TSK_Sleep(1);
		}
	}
	if (NewLangDbNo == LangDbNo) {
		return;
	}
	this = SYSI_GetFs__Fv();
	DumpCurrentText__Fv();
	LangDbNo = NewLangDbNo;
	GetLangFileName__F9LANG_TYPEPc(LanguageType,acStack64);
	if (FileSYS != 1) {
		puVar4 = (undefined *)IsGameLoading__Fv();
		if (puVar4 != &DAT_00000001) {
			CDWAIT = &DAT_00000001;
			hndText = BL_LoadFileAsync__FPcc(acStack64,'\0');
			if (hndText == -1) {
				DBG_Error((char *)0x0,"source/LANG.cpp",0x8a);
			}
			BL_WaitForAsyncFinish__Fv();
			goto LAB_8007b474;
		}
	}
	CDWAIT = &DAT_00000001;
	hndText = Read__6FileIOPCcUl(this,acStack64,1);
	if (hndText == -1) {
		DBG_Error((char *)0x0,"source/LANG.cpp",0x92);
	}
LAB_8007b474:
	CDWAIT = (void *)0x0;
	GAL_SetMemName(hndText,(char *)PTR_ARRAY_8011bbfc);
	TextPtr = (char **)GAL_Lock(hndText);
	if (TextPtr == (char **)0x0) {
		DBG_Error((char *)0x0,"source/LANG.cpp",0x98);
	}
	NumOfStrings = CalcNumOfStrings__FPPc(TextPtr);
	KANJI_SetDb__F10LANG_DB_NO(NewLangDbNo);
	iVar2 = NumOfStrings;
	ppcVar1 = TextPtr;
	iVar6 = 0;
	ppcVar5 = TextPtr;
	if (0 < NumOfStrings) {
		do {
			iVar6 = iVar6 + 1;
			*ppcVar5 = *ppcVar5 + (int)ppcVar1;
			ppcVar5 = ppcVar5 + 1;
		} while (iVar6 < iVar2);
	}
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetStr__Fi(int StrId /*$s0*/)
 // line 171, offset 0x8007b528
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x8007B528
	/* end block 1 */
	// End offset: 0x8007B590
	// End Line: 199

	/* begin block 2 */
		// Start line: 346
	/* end block 2 */
	// End Line: 347

char * GetStr__Fi(text_strs StrId)

{
	LANG_DB_NO NewLangDbNo;
	
	if ((StrId & 0x4000) == 0) {
		NewLangDbNo = LANG_DB_BACK;
		if ((StrId & 0x2000) == 0) {
			NewLangDbNo = LANG_DB_QUEST;
			if ((StrId & 0x1000) == 0) {
				NewLangDbNo = LANG_DB_MAIN;
			}
			else {
				StrId = StrId + 0xfffff000;
			}
		}
		else {
			StrId = StrId + 0xffffe000;
		}
	}
	else {
		StrId = StrId + 0xffffc000;
		NewLangDbNo = LANG_DB_CREDITS;
	}
	LANG_SetDb__F10LANG_DB_NO(NewLangDbNo);
	return TextPtr[StrId];
}



// decompiled code
// original method signature: 
// void /*$ra*/ LANG_ReloadMainTXT__Fv()
 // line 204, offset 0x8007b5a4
	/* begin block 1 */
		// Start line: 205
		// Start offset: 0x8007B5A4
	/* end block 1 */
	// End offset: 0x8007B5D8
	// End Line: 212

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LANG_ReloadMainTXT__Fv(void)

{
	void *pvVar1;
	
	CDWAIT = &DAT_00000001;
	GetStr__Fi(STR_PAUSED_770);
	pvVar1 = IsKanjiLoaded__Fv();
	if (pvVar1 != (void *)0x0) {
		CDWAIT = (void *)0x0;
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType /*$s1*/)
 // line 222, offset 0x8007b5e8
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x8007B5E8

		/* begin block 1.1 */
			// Start line: 223
			// Start offset: 0x8007B5E8

			/* begin block 1.1.1 */
				// Start line: 225
				// Start offset: 0x8007B604
				// Variables:
			// 		char FileNameBuffer[40]; // stack offset -64
			// 		struct FileIO *FIO; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 251
					// Start offset: 0x8007B6A4
					// Variables:
				// 		int f; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8007B6E4
				// End Line: 258
			/* end block 1.1.1 */
			// End offset: 0x8007B6E8
			// End Line: 260
		/* end block 1.1 */
		// End offset: 0x8007B6E8
		// End Line: 260
	/* end block 1 */
	// End offset: 0x8007B6E8
	// End Line: 260

	/* begin block 2 */
		// Start line: 450
	/* end block 2 */
	// End Line: 451

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LANG_SetLang__F9LANG_TYPE(LANG_TYPE NewLanguageType)

{
	char **ppcVar1;
	FileIO *this;
	int iVar2;
	char **ppcVar3;
	int iVar4;
	char acStack64 [48];
	
	if (NewLanguageType != LanguageType) {
		this = SYSI_GetFs__Fv();
		DumpCurrentText__Fv();
		GetLangFileName__F9LANG_TYPEPc(NewLanguageType,acStack64);
		CDWAIT = &DAT_00000001;
		hndText = Read__6FileIOPCcUl(this,acStack64,1);
		if (hndText == -1) {
			DBG_Error((char *)0x0,"source/LANG.cpp",0xf3);
		}
		CDWAIT = (void *)0x0;
		GAL_SetMemName(hndText,(char *)PTR_ARRAY_8011bbfc);
		TextPtr = (char **)GAL_Lock(hndText);
		if (TextPtr == (char **)0x0) {
			DBG_Error((char *)0x0,"source/LANG.cpp",0xfa);
		}
		iVar2 = CalcNumOfStrings__FPPc(TextPtr);
		ppcVar1 = TextPtr;
		iVar4 = 0;
		ppcVar3 = TextPtr;
		LanguageType = NewLanguageType;
		NumOfStrings = iVar2;
		if (0 < iVar2) {
			do {
				iVar4 = iVar4 + 1;
				*ppcVar3 = *ppcVar3 + (int)ppcVar1;
				ppcVar3 = ppcVar3 + 1;
				LanguageType = NewLanguageType;
			} while (iVar4 < iVar2);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpCurrentText__Fv()
 // line 276, offset 0x8007b700
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x8007B700

		/* begin block 1.1 */
			// Start line: 277
			// Start offset: 0x8007B700

			/* begin block 1.1.1 */
				// Start line: 279
				// Start offset: 0x8007B718
			/* end block 1.1.1 */
			// End offset: 0x8007B744
			// End Line: 286
		/* end block 1.1 */
		// End offset: 0x8007B744
		// End Line: 286
	/* end block 1 */
	// End offset: 0x8007B744
	// End Line: 286

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DumpCurrentText__Fv(void)

{
	uchar uVar1;
	
	if (hndText != -1) {
		uVar1 = GAL_Free(hndText);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"source/LANG.cpp",0x11a);
		}
		TextPtr = (char **)0x0;
		hndText = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcNumOfStrings__FPPc(char **TPtr /*$a0*/)
 // line 294, offset 0x8007b758
	/* begin block 1 */
		// Start line: 295
		// Start offset: 0x8007B758
	/* end block 1 */
	// End offset: 0x8007B75C
	// End Line: 297

	/* begin block 2 */
		// Start line: 602
	/* end block 2 */
	// End Line: 603

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CalcNumOfStrings__FPPc(char **TPtr)

{
	return (uint)*TPtr >> 2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType /*$a0*/, char *Dest /*$s0*/)
 // line 306, offset 0x8007b764
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x8007B764
		// Variables:
	// 		char *Ext; // $s1
	/* end block 1 */
	// End offset: 0x8007B82C
	// End Line: 327

	/* begin block 2 */
		// Start line: 624
	/* end block 2 */
	// End Line: 625

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GetLangFileName__F9LANG_TYPEPc(LANG_TYPE NewLanguageType,char *Dest)

{
	char *__src;
	char *__src_00;
	
	__src = GetLangFileNameExt__F9LANG_TYPE(NewLanguageType);
	if (__src == (char *)0x0) {
		DBG_Error((char *)0x0,"source/LANG.cpp",0x136);
	}
	*Dest = '\0';
	if (LangDbNo == LANG_DB_QUEST) {
		__src_00 = "QUESTTXT.";
	}
	else {
		if ((int)LangDbNo < 2) {
			if (LangDbNo != LANG_DB_MAIN) goto LAB_8007b824;
			__src_00 = "MAINTXT.";
		}
		else {
			if (LangDbNo == LANG_DB_BACK) {
				__src_00 = "BACKTXT.";
			}
			else {
				if (LangDbNo != LANG_DB_CREDITS) goto LAB_8007b824;
				__src_00 = "CREDTXT.";
			}
		}
	}
	strcat(Dest,__src_00);
LAB_8007b824:
	strcat(Dest,__src);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType /*$a0*/)
 // line 334, offset 0x8007b844
	/* begin block 1 */
		// Start line: 335
		// Start offset: 0x8007B844
	/* end block 1 */
	// End offset: 0x8007B8BC
	// End Line: 361

	/* begin block 2 */
		// Start line: 681
	/* end block 2 */
	// End Line: 682

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * GetLangFileNameExt__F9LANG_TYPE(LANG_TYPE NewLanguageType)

{
	int **ppiVar1;
	
	switch(NewLanguageType) {
	case LANG_ENGLISH:
		ppiVar1 = &PTR_DAT_8011bc04;
		break;
	case LANG_FRENCH:
		ppiVar1 = &PTR_DAT_8011bc08;
		break;
	case LANG_GERMAN:
		ppiVar1 = &PTR_DAT_8011bc0c;
		break;
	case LANG_SWEDISH:
		ppiVar1 = &PTR_DAT_8011bc10;
		break;
	case LANG_JAP:
		ppiVar1 = &PTR_DAT_8011bc14;
		break;
	default:
		ppiVar1 = (int **)0x0;
	}
	return (char *)ppiVar1;
}





