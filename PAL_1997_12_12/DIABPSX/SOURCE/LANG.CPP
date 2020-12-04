#include "THISDUST.H"
#include "LANG.H"


// decompiled code
// original method signature: 
// enum LANG_TYPE /*$ra*/ LANG_GetLang__Fv()
 // line 83, offset 0x800737bc
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x800737BC
	/* end block 1 */
	// End offset: 0x800737C0
	// End Line: 85

	/* begin block 2 */
		// Start line: 167
	/* end block 2 */
	// End Line: 168

/* WARNING: Unknown calling convention yet parameter storage is locked */

LANG_TYPE LANG_GetLang__Fv(void)

{
	return LanguageType;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo /*$s0*/)
 // line 91, offset 0x800737c8
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x800737C8

		/* begin block 1.1 */
			// Start line: 92
			// Start offset: 0x800737C8

			/* begin block 1.1.1 */
				// Start line: 94
				// Start offset: 0x800737E4
				// Variables:
			// 		char FileNameBuffer[40]; // stack offset -64
			// 		struct FileIO *FIO; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 122
					// Start offset: 0x800738F0
					// Variables:
				// 		int f; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80073930
				// End Line: 128
			/* end block 1.1.1 */
			// End offset: 0x80073930
			// End Line: 137
		/* end block 1.1 */
		// End offset: 0x80073930
		// End Line: 137
	/* end block 1 */
	// End offset: 0x80073930
	// End Line: 137

	/* begin block 2 */
		// Start line: 183
	/* end block 2 */
	// End Line: 184

void LANG_SetDb__F10LANG_DB_NO(LANG_DB_NO NewLangDbNo)

{
	char **ppcVar1;
	FileIO *this;
	LANG_TYPE LVar2;
	undefined *puVar3;
	int iVar4;
	char **ppcVar5;
	int iVar6;
	char acStack64 [48];
	
	if (NewLangDbNo != LangDbNo) {
		this = SYSI_GetFs__Fv();
		DumpCurrentText__Fv();
		LangDbNo = NewLangDbNo;
		GetLangFileName__F9LANG_TYPEPc(LanguageType,acStack64);
		LVar2 = LANG_GetLang__Fv();
		if (LVar2 == LANG_JAP) {
			LoadKanji__F10LANG_DB_NO(NewLangDbNo);
		}
		if (FileSYS == 1) {
			hndText = Read__6FileIOPCcUl(this,acStack64,1);
			if (hndText == -1) {
				DBG_Error((char *)0x0,"source/LANG.cpp",0x74);
			}
		}
		else {
			hndText = BL_LoadFileAsync__FPcc(acStack64,'\0');
			if (hndText == -1) {
				DBG_Error((char *)0x0,"source/LANG.cpp",0x6e);
			}
			while (puVar3 = (undefined *)BL_AsyncLoadDone__Fv(), puVar3 != &DAT_00000001) {
				TSK_Sleep(1);
			}
		}
		GAL_SetMemName(hndText,"TEXTDB");
		TextPtr = (char **)GAL_Lock(hndText);
		if (TextPtr == (char **)0x0) {
			DBG_Error((char *)0x0,"source/LANG.cpp",0x79);
		}
		iVar4 = CalcNumOfStrings__FPPc(TextPtr);
		ppcVar1 = TextPtr;
		iVar6 = 0;
		ppcVar5 = TextPtr;
		NumOfStrings = iVar4;
		if (0 < iVar4) {
			do {
				iVar6 = iVar6 + 1;
				*ppcVar5 = *ppcVar5 + (int)ppcVar1;
				ppcVar5 = ppcVar5 + 1;
			} while (iVar6 < iVar4);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetStr__Fi(int StrId /*$s0*/)
 // line 146, offset 0x80073948
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x80073948
	/* end block 1 */
	// End offset: 0x8007399C
	// End Line: 167

	/* begin block 2 */
		// Start line: 294
	/* end block 2 */
	// End Line: 295

char * GetStr__Fi(text_strs StrId)

{
	LANG_DB_NO NewLangDbNo;
	
	if ((StrId & 0x4000) == 0) {
		NewLangDbNo = LANG_DB_QUEST;
		if ((StrId & 0x2000) == 0) {
			NewLangDbNo = LANG_DB_MAIN;
		}
		else {
			StrId = StrId + 0xffffe000;
		}
	}
	else {
		StrId = StrId + 0xffffc000;
		NewLangDbNo = LANG_DB_BACK;
	}
	LANG_SetDb__F10LANG_DB_NO(NewLangDbNo);
	return TextPtr[StrId];
}



// decompiled code
// original method signature: 
// void /*$ra*/ LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType /*$s1*/)
 // line 176, offset 0x800739b0
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x800739B0

		/* begin block 1.1 */
			// Start line: 177
			// Start offset: 0x800739B0

			/* begin block 1.1.1 */
				// Start line: 179
				// Start offset: 0x800739CC
				// Variables:
			// 		char FileNameBuffer[40]; // stack offset -64
			// 		struct FileIO *FIO; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 203
					// Start offset: 0x80073ACC
					// Variables:
				// 		int f; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x80073B0C
				// End Line: 210
			/* end block 1.1.1 */
			// End offset: 0x80073B10
			// End Line: 212
		/* end block 1.1 */
		// End offset: 0x80073B10
		// End Line: 212
	/* end block 1 */
	// End offset: 0x80073B10
	// End Line: 212

	/* begin block 2 */
		// Start line: 355
	/* end block 2 */
	// End Line: 356

void LANG_SetLang__F9LANG_TYPE(LANG_TYPE NewLanguageType)

{
	char **ppcVar1;
	FileIO *this;
	undefined *puVar2;
	int iVar3;
	char **ppcVar4;
	int iVar5;
	char acStack64 [48];
	
	if (NewLanguageType != LanguageType) {
		this = SYSI_GetFs__Fv();
		DumpCurrentText__Fv();
		GetLangFileName__F9LANG_TYPEPc(NewLanguageType,acStack64);
		if ((FileSYS == 1) || (FeFlag == '\0')) {
			hndText = Read__6FileIOPCcUl(this,acStack64,1);
			if (hndText == -1) {
				DBG_Error((char *)0x0,"source/LANG.cpp",0xc4);
			}
		}
		else {
			hndText = BL_LoadFileAsync__FPcc(acStack64,'\0');
			if (hndText == -1) {
				DBG_Error((char *)0x0,"source/LANG.cpp",0xbe);
			}
			while (puVar2 = (undefined *)BL_AsyncLoadDone__Fv(), puVar2 != &DAT_00000001) {
				TSK_Sleep(1);
			}
		}
		GAL_SetMemName(hndText,"TEXTDB");
		TextPtr = (char **)GAL_Lock(hndText);
		if (TextPtr == (char **)0x0) {
			DBG_Error((char *)0x0,"source/LANG.cpp",0xca);
		}
		iVar3 = CalcNumOfStrings__FPPc(TextPtr);
		ppcVar1 = TextPtr;
		iVar5 = 0;
		ppcVar4 = TextPtr;
		LanguageType = NewLanguageType;
		NumOfStrings = iVar3;
		if (0 < iVar3) {
			do {
				iVar5 = iVar5 + 1;
				*ppcVar4 = *ppcVar4 + (int)ppcVar1;
				ppcVar4 = ppcVar4 + 1;
				LanguageType = NewLanguageType;
			} while (iVar5 < iVar3);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DumpCurrentText__Fv()
 // line 223, offset 0x80073b28
	/* begin block 1 */
		// Start line: 224
		// Start offset: 0x80073B28

		/* begin block 1.1 */
			// Start line: 224
			// Start offset: 0x80073B28

			/* begin block 1.1.1 */
				// Start line: 226
				// Start offset: 0x80073B40
			/* end block 1.1.1 */
			// End offset: 0x80073B6C
			// End Line: 233
		/* end block 1.1 */
		// End offset: 0x80073B6C
		// End Line: 233
	/* end block 1 */
	// End offset: 0x80073B6C
	// End Line: 233

	/* begin block 2 */
		// Start line: 450
	/* end block 2 */
	// End Line: 451

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DumpCurrentText__Fv(void)

{
	uchar uVar1;
	
	if (hndText != -1) {
		uVar1 = GAL_Free(hndText);
		if (uVar1 == '\0') {
			DBG_Error((char *)0x0,"source/LANG.cpp",0xe5);
		}
		TextPtr = (char **)0x0;
		hndText = -1;
	}
	return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcNumOfStrings__FPPc(char **TPtr /*$a0*/)
 // line 241, offset 0x80073b80
	/* begin block 1 */
		// Start line: 242
		// Start offset: 0x80073B80
	/* end block 1 */
	// End offset: 0x80073B84
	// End Line: 244

	/* begin block 2 */
		// Start line: 488
	/* end block 2 */
	// End Line: 489

int CalcNumOfStrings__FPPc(char **TPtr)

{
	return (uint)*TPtr >> 2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType /*$a0*/, char *Dest /*$s0*/)
 // line 253, offset 0x80073b8c
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80073B8C
		// Variables:
	// 		char *Ext; // $s1
	/* end block 1 */
	// End offset: 0x80073C94
	// End Line: 272

	/* begin block 2 */
		// Start line: 510
	/* end block 2 */
	// End Line: 511

void GetLangFileName__F9LANG_TYPEPc(LANG_TYPE NewLanguageType,char *Dest)

{
	char *__src;
	char *__src_00;
	
	__src = GetLangFileNameExt__F9LANG_TYPE(NewLanguageType);
	if (__src == (char *)0x0) {
		DBG_Error((char *)0x0,"source/LANG.cpp",0x101);
	}
	*Dest = '\0';
	if (FileSYS == 1) {
		*(undefined4 *)Dest = 0x72756f73;
		*(undefined4 *)(Dest + 4) = 0x645c6563;
		*(undefined4 *)(Dest + 8) = 0x5c617461;
		Dest[0xc] = '\0';
	}
	if (LangDbNo == LANG_DB_QUEST) {
		__src_00 = "QUESTTXT.";
	}
	else {
		if ((int)LangDbNo < 2) {
			if (LangDbNo != LANG_DB_MAIN) goto LAB_80073c8c;
			__src_00 = "MAINTXT.";
		}
		else {
			if (LangDbNo != LANG_DB_BACK) goto LAB_80073c8c;
			__src_00 = "BACKTXT.";
		}
	}
	strcat(Dest,__src_00);
LAB_80073c8c:
	strcat(Dest,__src);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType /*$a0*/)
 // line 279, offset 0x80073cac
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x80073CAC
	/* end block 1 */
	// End offset: 0x80073D24
	// End Line: 306

	/* begin block 2 */
		// Start line: 563
	/* end block 2 */
	// End Line: 564

char * GetLangFileNameExt__F9LANG_TYPE(LANG_TYPE NewLanguageType)

{
	undefined **ppuVar1;
	
	switch(NewLanguageType) {
	case LANG_ENGLISH:
		ppuVar1 = &PTR_DAT_8012b5e8;
		break;
	case LANG_FRENCH:
		ppuVar1 = &PTR_DAT_8012b5ec;
		break;
	case LANG_GERMAN:
		ppuVar1 = &PTR_DAT_8012b5f0;
		break;
	case LANG_SWEDISH:
		ppuVar1 = &PTR_DAT_8012b5f4;
		break;
	case LANG_JAP:
		ppuVar1 = &PTR_DAT_8012b5f8;
		break;
	default:
		ppuVar1 = (undefined **)0x0;
	}
	return (char *)ppuVar1;
}





