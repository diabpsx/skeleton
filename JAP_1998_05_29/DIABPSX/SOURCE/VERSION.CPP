#include "THISDUST.H"
#include "VERSION.H"


// decompiled code
// original method signature: 
// void /*$ra*/ VER_InitVersion__Fv()
 // line 230, offset 0x800826a0
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x800826A0
		// Variables:
	// 		char VerString[120]; // stack offset -128
	/* end block 1 */
	// End offset: 0x800826D4
	// End Line: 237

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

/* WARNING: Unknown calling convention yet parameter storage is locked */

void VER_InitVersion__Fv(void)

{
	undefined4 uVar1;
	undefined auStack128 [120];
	
	FUN_800b0a18(auStack128);
	uVar1 = FUN_800b0aec(auStack128);
	sprintf(MyVerString,"VERSION\n%s\n\nCODEWORD\n%s",auStack128,uVar1);
	return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ VER_GetVerString__Fv()
 // line 241, offset 0x800826e4
	/* begin block 1 */
		// Start line: 242
		// Start offset: 0x800826E4
	/* end block 1 */
	// End offset: 0x800826EC
	// End Line: 243

	/* begin block 2 */
		// Start line: 483
	/* end block 2 */
	// End Line: 484

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * VER_GetVerString__Fv(void)

{
	return MyVerString;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CharPair2Num__FPc(char *Str /*$a0*/)
 // line 285, offset 0x800826f4
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x800826F4
	/* end block 1 */
	// End offset: 0x80082714
	// End Line: 287

	/* begin block 2 */
		// Start line: 571
	/* end block 2 */
	// End Line: 572

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CharPair2Num__FPc(char *Str)

{
	return ((int)*Str + -0x30) * 10 + -0x30 + (int)Str[1];
}





// decompiled code
// original method signature: 
// char * FUN_800b0a18(char *pcParm1);
 // line -1, offset 0x800b0a18
// function 'FUN_800b0a18' @0x800B0A18 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
char * FUN_800b0a18(char *pcParm1)

{
	undefined2 local_38;
	undefined local_36;
	undefined local_35;
	undefined local_34;
	char local_33;
	undefined local_32;
	undefined local_31;
	undefined2 local_30;
	undefined local_2e;
	undefined local_2d;
	undefined local_2c;
	
	local_38 = DAT_80119464;
	local_36 = DAT_80119466;
	local_35 = DAT_8011946d;
	local_34 = DAT_8011946e;
	local_33 = DAT_80119468;
	local_32 = DAT_80119469;
	if (DAT_80119468 == ' ') {
		local_33 = '0';
	}
	local_31 = 0x2e;
	local_30 = DAT_80119470;
	local_2e = DAT_80119473;
	local_2d = DAT_80119474;
	local_2c = 0;
	strupr__FPc((char *)&local_38);
	strcpy(pcParm1,(char *)&local_38);
	return pcParm1;
}



// decompiled code
// original method signature: 
// undefined * FUN_800b0aec(char *pcParm1);
 // line -1, offset 0x800b0aec
// function 'FUN_800b0aec' @0x800B0AEC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined * FUN_800b0aec(char *pcParm1)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char local_20;
	char local_1f;
	char local_1e;
	undefined local_1d;
	
	iGp00001694 = CharPair2Num__FPc(pcParm1 + 3);
	iGp00001698 = CharPair2Num__FPc(pcParm1 + 5);
	iVar5 = 0;
	local_20 = *pcParm1;
	local_1f = pcParm1[1];
	local_1e = pcParm1[2];
	bVar1 = false;
	iVar4 = 0;
	local_1d = 0;
	do {
		iVar2 = strcmp(*(char **)((int)&PTR_PTR_DAT_800b09b8 + iVar4),&local_20);
		if (iVar2 == 0) {
			bVar1 = true;
		}
		else {
			iVar5 = iVar5 + *(int *)((int)&DAT_800b09bc + iVar4);
		}
		iVar4 = iVar4 + 8;
	} while ((iVar4 < 0x60) && (!bVar1));
	if (!bVar1) {
		DBG_Error((char *)0x0,"source/VERSION.cpp",0x145);
	}
	iVar5 = iVar5 + iGp00001698;
	iVar4 = iGp00001694 * 0x16d;
	iVar2 = CharPair2Num__FPc(pcParm1 + 8);
	iVar3 = CharPair2Num__FPc(pcParm1 + 10);
	return PTR_ARRAY_800b07e0[(((iVar5 + iVar4) * 0x5a0 + iVar2 * 0x3c + iVar3) / 0x168) % 0x76];
}



