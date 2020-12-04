#include "THISDUST.H"


// decompiled code
// original method signature: 
// void FUN_800a0ae0(void);
 // line -1, offset 0x800a0ae0
// function 'FUN_800a0ae0' @0x800A0AE0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0ae0(void)

{
	uchar uVar1;
	
	SetDispMask(0);
	VSync(0);
	VSync(0);
	VID_SetXYOff__Fii(0,0);
	FUN_800a0ba0();
	uVar1 = GPUQ_InitModule__Fv();
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/VID.CPP",0x62);
	}
	uGp00001bc8 = 0;
	VSyncCallback(VID_DispEnvSend);
	uVar1 = PRIM_Open__FiiiP10SCREEN_ENVUl(0x400,0x200,2,&screen,1);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/VID.CPP",0x6c);
	}
	SetVideoMode(0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0ba0(void);
 // line -1, offset 0x800a0ba0
// function 'FUN_800a0ba0' @0x800A0BA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0ba0(void)

{
	ResetGraph(0);
	SetGraphDebug(0);
	InitGeom();
	SetDefDrawEnv((undefined2 *)&screen,0,0,0x140,0xf0);
	SetDefDispEnv((undefined2 *)&screen.dispenv,0x140,0,0x140,0xf0);
	SetDefDrawEnv((undefined2 *)&SCREEN_ENV_8012c470,0x140,0,0x140,0xf0);
	SetDefDispEnv((undefined2 *)&SCREEN_ENV_8012c470.dispenv,0,0,0x140,0xf0);
	screen.drawenv.isbg = '\x01';
	SCREEN_ENV_8012c470.drawenv.isbg = '\x01';
	screen.drawenv.dtd = '\x01';
	SCREEN_ENV_8012c470.drawenv.dtd = '\x01';
	SetDrawEnv(-0x7fed3be4,(ushort *)&screen);
	SetDrawEnv(-0x7fed3b74,(ushort *)&SCREEN_ENV_8012c470);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0c90(void);
 // line -1, offset 0x800a0c90
// function 'FUN_800a0c90' @0x800A0C90 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0c90(void)

{
	puGp00000344 = &OPT_LinkerOpts;
	FUN_800a0cbc();
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0cbc(void);
 // line -1, offset 0x800a0cbc
// function 'FUN_800a0cbc' @0x800A0CBC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0cbc(void)

{
	PsxMem.Type = 1;
	PsxFastMem.Mem = &DAT_1f800000;
	PsxFastMem.Size = 0x400;
	PsxFastMem.Type = 2;
	PsxMem.Mem = OPT_FreeMemStart;
	PsxMem.Size = (ulong)OPT_FreeMemSize;
	GAL_AddMemType(&PsxFastMem);
	GAL_AddMemType(&PsxMem);
	GAL_SetVerbosity(GAL_AVERAGE);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0d4c(void);
 // line -1, offset 0x800a0d4c
// function 'FUN_800a0d4c' @0x800A0D4C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0d4c(void)

{
	uchar uVar1;
	short local_10;
	undefined2 local_e;
	undefined2 local_c;
	undefined2 local_a;
	
	FUN_800a0c90();
	SortOutFileSystem__Fv();
	ResetCallback();
	FUN_800a0ae0();
	uVar1 = TSK_OpenModule((ulong)&DAT_00008001);
	if (uVar1 == '\0') {
		DBG_Error((char *)0x0,"psxsrc/SYSINIT.CPP",0x6c);
	}
	TSK_SetExtraStackProtection('\0');
	local_10 = 0;
	local_e = 0;
	local_c = 0x140;
	local_a = 0x100;
	ClearImage(&local_10,0,0,0);
	local_10 = 0x140;
	ClearImage(&local_10,0,0,0);
	GU_InitModule();
	VID_ScrOn__Fv();
	FUN_800a0e58();
	FUN_800a0e7c();
	FUN_800a0eb4();
	FUN_800a0f18();
	FUN_800a0f48();
	FUN_800a0ef8();
	STR_Init__Fv();
	SpuInit();
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0e58(void);
 // line -1, offset 0x800a0e58
// function 'FUN_800a0e58' @0x800A0E58 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0e58(void)

{
	TextDat **ppTVar1;
	int iVar2;
	
	iVar2 = 0x11c;
	ppTVar1 = &PTR_800a87d8;
	do {
		*ppTVar1 = (TextDat *)0x0;
		iVar2 = iVar2 + -1;
		ppTVar1 = ppTVar1 + -1;
	} while (-1 < iVar2);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0e7c(void);
 // line -1, offset 0x800a0e7c
// function 'FUN_800a0e7c' @0x800A0E7C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0e7c(void)

{
	uGp00001be8 = 0;
	uGp00001bec = 0;
	TSK_AddTask(0x8000,PauseTask__FP4TASK,0x400,0);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0eb4(void);
 // line -1, offset 0x800a0eb4
// function 'FUN_800a0eb4' @0x800A0EB4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0eb4(void)

{
	InitTAP(&RawPadData0,0x22,&RawPadData1,0x22);
	StartTAP();
	PadInit(1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0ef8(void);
 // line -1, offset 0x800a0ef8
// function 'FUN_800a0ef8' @0x800A0EF8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0ef8(void)

{
	ClearOutOverlays__Fv();
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0f18(void);
 // line -1, offset 0x800a0f18
// function 'FUN_800a0f18' @0x800A0F18 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0f18(void)

{
	Init__13PalCollectionPC7InitPos(&ThePals,InitialPositions);
	return;
}



// decompiled code
// original method signature: 
// void FUN_800a0f48(void);
 // line -1, offset 0x800a0f48
// function 'FUN_800a0f48' @0x800A0F48 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_800a0f48(void)

{
	TextDat **ppTVar1;
	int iVar2;
	
	iVar2 = 9;
	ppTVar1 = &PTR_8012c984;
	do {
		*ppTVar1 = (TextDat *)0x0;
		iVar2 = iVar2 + -1;
		ppTVar1 = ppTVar1 + -1;
	} while (-1 < iVar2);
	return;
}



// decompiled code
// original method signature: 
// char * FUN_800a11bc(char *param_1);
 // line -1, offset 0x800a11bc
// function 'FUN_800a11bc' @0x800A11BC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
char * FUN_800a11bc(char *param_1)

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
	
	local_38 = DAT_801292a0;
	local_36 = DAT_801292a2;
	local_35 = DAT_801292a9;
	local_34 = DAT_801292aa;
	local_33 = DAT_801292a4;
	local_32 = DAT_801292a5;
	if (DAT_801292a4 == ' ') {
		local_33 = '0';
	}
	local_31 = 0x2e;
	local_30 = DAT_801292ac;
	local_2e = DAT_801292af;
	local_2d = DAT_801292b0;
	local_2c = 0;
	strupr__FPc((char *)&local_38);
	strcpy(param_1,(char *)&local_38);
	return param_1;
}



// decompiled code
// original method signature: 
// undefined * FUN_800a1290(char *param_1);
 // line -1, offset 0x800a1290
// function 'FUN_800a1290' @0x800A1290 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined * FUN_800a1290(char *param_1)

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
	
	iGp00001428 = CharPair2Num__FPc(param_1 + 3);
	iGp0000142c = CharPair2Num__FPc(param_1 + 5);
	iVar5 = 0;
	local_20 = *param_1;
	local_1f = param_1[1];
	local_1e = param_1[2];
	bVar1 = false;
	iVar4 = 0;
	local_1d = 0;
	do {
		iVar2 = strcmp(*(char **)((int)&PTR_PTR_DAT_800a115c + iVar4),&local_20);
		if (iVar2 == 0) {
			bVar1 = true;
		}
		else {
			iVar5 = iVar5 + *(int *)((int)&DAT_800a1160 + iVar4);
		}
		iVar4 = iVar4 + 8;
	} while ((iVar4 < 0x60) && (!bVar1));
	if (!bVar1) {
		DBG_Error((char *)0x0,"source/VERSION.cpp",0x144);
	}
	iVar5 = iVar5 + iGp0000142c;
	iVar4 = iGp00001428 * 0x16d;
	iVar2 = CharPair2Num__FPc(param_1 + 8);
	iVar3 = CharPair2Num__FPc(param_1 + 10);
	return PTR_ARRAY_800a0f84[(((iVar5 + iVar4) * 0x5a0 + iVar2 * 0x3c + iVar3) / 0x168) % 0x76];
}



// decompiled code
// original method signature: 
// void FUN_801381d8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5,undefined param_6,undefined param_7,undefined param_8,undefined param_9,undefined param_10,undefined4 param_11);
 // line -1, offset 0x801381d8
// function 'FUN_801381d8' @0x801381D8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801381d8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
								 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
								 undefined param_9,undefined param_10,undefined4 param_11)

{
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013a9cc(undefined4 param_1,int param_2,undefined param_3,undefined param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
 // line -1, offset 0x8013a9cc
// function 'FUN_8013a9cc' @0x8013A9CC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Variable defined which should be unmapped: param_7 */
/* WARNING: Variable defined which should be unmapped: param_8 */

void FUN_8013a9cc(undefined4 param_1,int param_2,undefined param_3,undefined param_4,
								 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
	char cVar1;
	uchar uVar2;
	int unaff_s0;
	
	(&missile[0]._miAnimType)[unaff_s0] = (uchar)param_2;
	cVar1 = (&missile[0]._mimfnum)[unaff_s0];
	(&missile[0]._miAnimFlags)[unaff_s0] = misfiledata[param_2].mFlags;
	uVar2 = GetTableValue__FUci(misfiledata[param_2].mAnimDelay,(int)cVar1);
	(&missile[0]._miAnimDelay)[unaff_s0] = uVar2;
	uVar2 = GetTableValue__FUci(misfiledata[param_2].mAnimLen,(int)cVar1);
	(&missile[0]._miAnimLen)[unaff_s0] = uVar2;
	(&missile[0]._miAnimCnt)[unaff_s0] = '\0';
	(&missile[0]._miAnimFrame)[unaff_s0] = '\x01';
	return;
}



// decompiled code
// original method signature: 
// void FUN_8013e898(void);
 // line -1, offset 0x8013e898
// function 'FUN_8013e898' @0x8013E898 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8013e898(void)

{
	int in_v0;
	long lVar1;
	long lVar2;
	long lVar3;
	int iVar4;
	int unaff_s0;
	int iVar5;
	int unaff_s4;
	int id;
	int unaff_s6;
	int unaff_s7;
	
	lVar1 = random__Fil(0x42,6);
	lVar2 = random__Fil(0x42,6);
	lVar3 = random__Fil(0x42,6);
	iVar5 = unaff_s0 + in_v0 + lVar1 + lVar2 + lVar3;
	*(int *)((int)&missile[0]._midam + unaff_s4) = iVar5;
	iVar4 = (int)(&missile[0]._mispllvl)[unaff_s4];
	*(int *)((int)&missile[0]._midam + unaff_s4) = iVar5 + 5 + (int)plr[id]._pLevel >> 1;
	while (0 < iVar4) {
		iVar5 = *(int *)((int)&missile[0]._midam + unaff_s4);
		iVar4 = iVar4 + -1;
		*(int *)((int)&missile[0]._midam + unaff_s4) = iVar5 + (iVar5 >> 3);
	}
	if (unaff_s7 == 0) {
		UseMana__Fii(id,0x12);
	}
	missile[unaff_s6]._mirange = 1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80140280(int param_1,int param_2);
 // line -1, offset 0x80140280
// function 'FUN_80140280' @0x80140280 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80140280(int param_1,int param_2)

{
	char cVar1;
	uchar uVar2;
	char cVar3;
	int in_at;
	long lVar4;
	int animtype;
	int iVar5;
	int iVar6;
	uint maxdam;
	int iVar7;
	int unaff_s0;
	int unaff_s1;
	uint mindam;
	int i;
	
	*(short *)(param_2 + 0x20) = *(short *)(&DAT_00001f48 + in_at) + 1;
	*(int *)((int)&missile[0]._mitxoff + unaff_s0) =
			 *(int *)((int)&missile[0]._mitxoff + unaff_s0) +
			 *(int *)((int)&missile[0]._mixvel + unaff_s0);
	*(int *)((int)&missile[0]._mityoff + unaff_s0) =
			 *(int *)((int)&missile[0]._mityoff + unaff_s0) +
			 *(int *)((int)&missile[0]._miyvel + unaff_s0);
	GetMissilePos__Fi(param_1);
	if (unaff_s1 == -1) {
		lVar4 = random__Fil(0x44,10);
		mindam = (uint)currlevel + lVar4 + 1;
		lVar4 = random__Fil(0x44,10);
		maxdam = (uint)currlevel * 2 + lVar4 + 1;
	}
	else {
		if (*(int *)((int)&missile[0]._micaster + unaff_s0) == 0) {
			mindam = plr[unaff_s1]._pIMinDam;
			maxdam = plr[unaff_s1]._pIMaxDam;
		}
		else {
			mindam = (uint)monster[unaff_s1].mMinDamage;
			maxdam = (uint)monster[unaff_s1].mMaxDamage;
		}
	}
	if ((missile[i]._mix != missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
		uVar2 = missiledata[(int)missile[i]._mitype].mResist;
		missiledata[(int)missile[i]._mitype].mResist = '\0';
		CheckMissileCol__FiiiUciiUc(i,mindam,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0);
		missiledata[(int)missile[i]._mitype].mResist = uVar2;
	}
	if (missile[i]._mirange == 0) {
		animtype = missile[i]._mitxoff;
		iVar6 = missile[i]._mixvel;
		iVar5 = missile[i]._mityoff;
		iVar7 = missile[i]._miyvel;
		missile[i]._mimfnum = '\0';
		missile[i]._mitxoff = animtype - iVar6;
		missile[i]._mityoff = iVar5 - iVar7;
		GetMissilePos__Fi(i);
		if (missile[i]._mitype == '8') {
			animtype = 0x1a;
		}
		else {
			animtype = 5;
		}
		SetMissAnim__Fii(i,animtype);
		missile[i]._mirange = (int)missile[i]._miAnimLen + -1;
	}
	else {
		if (((int)missile[i]._mix != (int)missile[i]._miVar1) ||
			 ((int)missile[i]._miy != (int)missile[i]._miVar2)) {
			cVar3 = missile[i]._miy;
			cVar1 = missile[i]._mitype;
			missile[i]._miVar1 = (short)missile[i]._mix;
			missile[i]._miVar2 = (short)cVar3;
			if (cVar1 == '8') {
				ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._miVar1,(int)(short)cVar3,0x41);
			}
			else {
				ChangeLight__Fiiii((int)missile[i]._mlid,(int)missile[i]._miVar1,(int)(short)cVar3,0x11);
			}
		}
	}
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void FUN_801405fc(undefined4 param_1,undefined4 param_2,short param_3);
 // line -1, offset 0x801405fc
// function 'FUN_801405fc' @0x801405FC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801405fc(undefined4 param_1,undefined4 param_2,short param_3)

{
	char cVar1;
	int in_v0;
	int in_v1;
	int unaff_s0;
	int i;
	
	if (in_v1 == in_v0) {
		ChangeLight__Fiiii((int)(&missile[0]._mlid)[unaff_s0],
											 (int)*(short *)((int)&missile[0]._miVar1 + unaff_s0),(int)param_3,0x41);
	}
	else {
		ChangeLight__Fiiii((int)(&missile[0]._mlid)[unaff_s0],
											 (int)*(short *)((int)&missile[0]._miVar1 + unaff_s0),(int)param_3,0x11);
	}
	if (missile[i]._mirange == 0) {
		cVar1 = missile[i]._mlid;
		missile[i]._miDelFlag = '\x01';
		AddUnLight__Fi((int)cVar1);
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80140a70(void);
 // line -1, offset 0x80140a70
// function 'FUN_80140a70' @0x80140A70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80140a70(void)

{
	int in_at;
	int iVar1;
	uint mindam;
	uint maxdam;
	int unaff_s0;
	int i;
	
	iVar1 = (int)*(char *)(in_at + unaff_s0 + 0x1f73);
	if (iVar1 == -1) {
		mindam = (uint)currlevel;
		maxdam = mindam << 1;
	}
	else {
		if (*(int *)((int)&missile[0]._micaster + unaff_s0) == 0) {
			mindam = plr[iVar1]._pIMinDam;
			maxdam = plr[iVar1]._pIMaxDam;
		}
		else {
			mindam = (uint)monster[iVar1].mMinDamage;
			maxdam = (uint)monster[iVar1].mMaxDamage;
		}
	}
	if (((int)missile[i]._mix != (int)missile[i]._misx) || (missile[i]._miy != missile[i]._misy)) {
		CheckMissileCol__FiiiUciiUc(i,mindam,maxdam,'\0',(int)missile[i]._mix,(int)missile[i]._miy,0);
	}
	if (missile[i]._mirange == 0) {
		missile[i]._miDelFlag = '\x01';
	}
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80145e78(undefined4 param_1,int param_2);
 // line -1, offset 0x80145e78
// function 'FUN_80145e78' @0x80145E78 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80145e78(undefined4 param_1,int param_2)

{
	int in_at;
	int in_v0;
	int iVar1;
	int unaff_s0;
	int i;
	
	iVar1 = *(int *)(&DAT_00001f34 + in_at);
	*(int *)((int)&missile[0]._mitxoff + unaff_s0) = in_v0 - param_2;
	*(int *)((int)&missile[0]._mityoff + unaff_s0) =
			 iVar1 - *(int *)((int)&missile[0]._miyvel + unaff_s0);
	GetMissilePos__Fi(i);
	(&missile[0]._mimfnum)[unaff_s0] = '\0';
	SetMissAnim__Fii(i,0x1c);
	*(int *)((int)&missile[0]._mirange + unaff_s0) = (int)(&missile[0]._miAnimLen)[unaff_s0] + -1;
	PutMissile__Fi(i);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014aabc(undefined param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5,undefined param_6,undefined param_7,undefined param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11);
 // line -1, offset 0x8014aabc
// function 'FUN_8014aabc' @0x8014AABC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014aabc(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
								 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
								 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
	return;
}



// decompiled code
// original method signature: 
// void FUN_8014c03c(void);
 // line -1, offset 0x8014c03c
// function 'FUN_8014c03c' @0x8014C03C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8014c03c(void)

{
	bool bVar1;
	int in_v0;
	int md;
	long lVar2;
	int in_v1;
	int unaff_s1;
	int __x;
	long md_00;
	int i;
	
	bVar1 = false;
	if (in_v0 < in_v1) {
		md = abs(__x);
		bVar1 = md < (int)((uint)*(byte *)(unaff_s1 + 0x53) * 2 + 4);
	}
	if (bVar1) {
		md = M_GetDir__Fi(i);
		M_CallWalk__Fii(i,md);
	}
	else {
		lVar2 = random__Fil(0x68,100);
		if (lVar2 < (int)((uint)*(byte *)(unaff_s1 + 0x53) * 2 + 0x14)) {
			md_00 = random__Fil(0x68,8);
		}
		M_DumbWalk__Fii(i,md_00);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152790(undefined param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
 // line -1, offset 0x80152790
// function 'FUN_80152790' @0x80152790 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152790(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
								 undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
								 undefined4 param_9)

{
	return;
}



// decompiled code
// original method signature: 
// void FUN_80152c40(undefined param_1,undefined param_2,undefined param_3,undefined param_4,int param_5,undefined param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
 // line -1, offset 0x80152c40
// function 'FUN_80152c40' @0x80152C40 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80152c40(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
								 int param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
								 undefined4 param_9)

{
	uchar uVar1;
	ItemStruct *pIVar2;
	int *unaff_s0;
	int pnum;
	
	uVar1 = QuestStatus__Fi(7);
	if (((uVar1 != '\0') && (QuestStruct_ARRAY_800e3404[1]._qvar1 == '\x02')) &&
		 (pIVar2 = PlrHasItem__FiiRi(pnum,0xc,&param_5), pIVar2 != (ItemStruct *)0x0)) {
		RemoveInvItem__Fii(pnum,param_5);
		QuestStruct_ARRAY_800e3404[1]._qactive = '\x03';
		*unaff_s0 = 0x16;
		*(undefined *)((int)unaff_s0 + 0x4d) = 6;
	}
	uVar1 = QuestStatus__Fi(4);
	if (((uVar1 != '\0') && (0x50 < *unaff_s0)) &&
		 (pIVar2 = PlrHasItem__FiiRi(pnum,0xf,&param_5), pIVar2 != (ItemStruct *)0x0)) {
		RemoveInvItem__Fii(pnum,param_5);
		*unaff_s0 = 0x53;
		*(undefined *)((int)unaff_s0 + 0x4d) = 6;
	}
	return;
}



// decompiled code
// original method signature: 
// uint FUN_80153040(undefined4 uParm1,undefined *puParm2);
 // line -1, offset 0x80153040
// function 'FUN_80153040' @0x80153040 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_80153040(undefined4 uParm1,undefined *puParm2)

{
	bool bVar1;
	int in_v1;
	
	bVar1 = (&monster[0]._mgoal)[in_v1] != '\x01';
	if (bVar1) {
		*puParm2 = 0;
	}
	return (uint)bVar1;
}



// decompiled code
// original method signature: 
// void FUN_801530b8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,undefined1 param_5,undefined param_6,undefined param_7,undefined param_8,undefined4 param_9,undefined param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20);
 // line -1, offset 0x801530b8
// function 'FUN_801530b8' @0x801530B8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801530b8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
								 undefined1 param_5,undefined param_6,undefined param_7,undefined param_8,
								 undefined4 param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
								 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
								 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
	char cVar1;
	char cVar2;
	char cVar3;
	char cVar4;
	char cVar5;
	char cVar6;
	bool bVar7;
	byte bVar8;
	uchar uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int unaff_s0;
	int unaff_s1;
	uint mdir;
	int i;
	int unaff_s7;
	
	if ((((*(short *)(unaff_s1 + 0x38) != 1) &&
			 (iVar12 = (int)*(char *)(unaff_s1 + 0x37), iVar12 != 6)) && (iVar12 != 0xb)) &&
		 (2 < (iVar12 - 1U & 0xff))) {
		if ((*(ushort *)((int)&monster[0]._mFlags + unaff_s7) & 0x10) == 0) {
			M_Enemy__Fi(i);
		}
		iVar12 = (int)*(char *)(unaff_s1 + 0x41);
		bVar8 = ((byte)((ushort)*(undefined2 *)(unaff_s1 + 0x30) >> 10) ^ 1) & 1;
		iVar11 = iVar12 * 0x70 + unaff_s0;
		cVar1 = *(char *)(iVar11 + 0x38);
		cVar2 = *(char *)(iVar11 + 0x39);
		bVar7 = false;
		if (*(char *)(unaff_s1 + 0x37) != '\x04') {
			cVar3 = *(char *)(unaff_s1 + 0x38);
			cVar4 = *(char *)(unaff_s1 + 0x39);
			cVar5 = monster[iVar12]._mfutx;
			cVar6 = monster[iVar12]._mfuty;
			iVar11 = GetDirection__Fiiii((int)cVar3,(int)cVar4,(int)cVar1,(int)cVar2);
			*(undefined *)(unaff_s1 + 0x40) = (char)iVar11;
			iVar10 = abs((int)cVar3 - (int)cVar5);
			if (iVar10 < 2) {
				iVar10 = abs((int)cVar4 - (int)cVar6);
				bVar7 = iVar10 < 2;
			}
			if (bVar7) {
				if (bVar8 != 0) {
					*(char *)(unaff_s1 + 0x50) = cVar2;
					*(char *)(unaff_s1 + 0x4f) = cVar1;
					iVar11 = 0;
					if (monster[iVar12]._msquelch == '\0') {
						monster[iVar12]._msquelch = -1;
						monster[iVar12]._lastx = *(char *)(unaff_s1 + 0x38);
						monster[iVar12]._lasty = *(char *)(unaff_s1 + 0x39);
						do {
							iVar12 = 0;
							do {
								if (0 < (int)dung_map[((int)(&monster[0]._mx)[unaff_s7] + iVar12 + -2) * 0x6c +
																			(int)(&monster[0]._my)[unaff_s7] + iVar11 + -2].dMonster) {
									monster[(int)dung_map[((int)(&monster[0]._mx)[unaff_s7] + iVar12 + -2) * 0x6c +
																				(int)(&monster[0]._my)[unaff_s7] + iVar11 + -2].dMonster].
									_msquelch = -1;
								}
								iVar12 = iVar12 + 1;
							} while (iVar12 < 5);
							iVar11 = iVar11 + 1;
						} while (iVar11 < 5);
					}
					M_StartAttack__Fi(i);
					return;
				}
			}
			else {
				if ((bVar8 != 0) && (uVar9 = MAI_Path__Fi(i), uVar9 != '\0')) {
					return;
				}
			}
			bVar8 = *(char *)(unaff_s1 + 0x4e) + 1;
			*(byte *)(unaff_s1 + 0x4e) = bVar8;
			if (8 < bVar8) {
				*(undefined *)(unaff_s1 + 0x4e) = 5;
			}
			uVar9 = M_CallWalk__Fii(i,(int)plr[i]._pdir);
			if (uVar9 == '\0') {
				mdir = iVar11 - 1U & 7;
				iVar12 = 0;
				do {
					mdir = mdir + 1 & 7;
					uVar9 = DirOK__Fii(i,mdir);
					iVar12 = iVar12 + 1;
					if (7 < iVar12) break;
				} while (uVar9 == '\0');
				if (uVar9 != '\0') {
					M_WalkDir__Fii(i,mdir);
				}
			}
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015763c(void);
 // line -1, offset 0x8015763c
// function 'FUN_8015763c' @0x8015763C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015763c(void)

{
	int *piVar1;
	int in_v0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	int *piVar8;
	int p;
	int i;
	
	iVar2 = in_v0 + p;
	piVar7 = &plr[0].HoldItem._iVAdd1 + iVar2 * 2;
	piVar1 = &plr[0].InvBody[4]._iVAdd1 + iVar2 * 2;
	do {
		piVar8 = piVar1;
		piVar6 = piVar7;
		iVar3 = piVar6[1];
		iVar4 = piVar6[2];
		iVar5 = piVar6[3];
		*piVar8 = *piVar6;
		piVar8[1] = iVar3;
		piVar8[2] = iVar4;
		piVar8[3] = iVar5;
		piVar7 = piVar6 + 4;
		piVar1 = piVar8 + 4;
	} while (piVar7 != (int *)(&plr[0].HoldItem._iMinMag + iVar2 * 8));
	iVar2 = piVar6[5];
	piVar8[4] = *piVar7;
	piVar8[5] = iVar2;
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80157ca0(void);
 // line -1, offset 0x80157ca0
// function 'FUN_80157ca0' @0x80157CA0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80157ca0(void)

{
	ItemStruct *pIVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	ItemStruct *pIVar7;
	char unaff_s1;
	int p;
	int i;
	
	if (unaff_s1 != '\0') {
		if (plr[p].InvBody[5]._itype == 5) {
			plr[p].InvBody[5]._itype = -1;
		}
		else {
			plr[p].InvBody[4]._itype = -1;
		}
		if ((plr[p].InvBody[4]._itype == -1) && (plr[p].InvBody[5]._itype == -1)) {
			NetSendCmdChItem__FUcUc('\0','\x04');
			pIVar6 = &plr[p].HoldItem;
			pIVar1 = plr[p].InvBody + 4;
			do {
				pIVar7 = pIVar1;
				pIVar5 = pIVar6;
				iVar2 = pIVar5->_iVMult1;
				iVar3 = pIVar5->_iVAdd2;
				iVar4 = pIVar5->_iVMult2;
				pIVar7->_iVAdd1 = pIVar5->_iVAdd1;
				pIVar7->_iVMult1 = iVar2;
				pIVar7->_iVAdd2 = iVar3;
				pIVar7->_iVMult2 = iVar4;
				pIVar6 = (ItemStruct *)&pIVar5->_iSeed;
				pIVar1 = (ItemStruct *)&pIVar7->_iSeed;
			} while (pIVar6 != (ItemStruct *)&plr[p].HoldItem._iMinMag);
			iVar2 = pIVar5->_ivalue;
			((ItemStruct *)&pIVar7->_iSeed)->_iVAdd1 = pIVar6->_iVAdd1;
			pIVar7->_ivalue = iVar2;
		}
		else {
			NetSendCmdChItem__FUcUc('\0','\x04');
			if (plr[p].InvBody[4]._itype == -1) {
				SwapItem__FP10ItemStructT0(plr[p].InvBody + 4,plr[p].InvBody + 5);
			}
			i = SwapItem__FP10ItemStructT0(plr[p].InvBody + 4,&plr[p].HoldItem);
		}
		if (((plr[p].InvBody[4]._itype == 10) && (iVar2 = plr[p].InvBody[4]._iSpell, iVar2 != 0)) &&
			 (0 < plr[p].InvBody[4]._iCharges)) {
			plr[p]._pRSplType = '\x03';
			plr[p]._pRSpell = iVar2;
			force_redraw = 0xff;
		}
		CalcPlrInv__FiUc(p,'\x01');
		if (p == myplr) {
			SetCursor__Fi(i);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80157fa8(ItemStruct *param_1,int param_2,int param_3);
 // line -1, offset 0x80157fa8
// function 'FUN_80157fa8' @0x80157FA8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80157fa8(ItemStruct *param_1,int param_2,int param_3)

{
	int i;
	int p;
	
	i = SwapItem__FP10ItemStructT0(param_1,(ItemStruct *)(param_3 + param_2));
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80158154(undefined4 uParm1,undefined4 uParm2,int iParm3,int iParm4);
 // line -1, offset 0x80158154
// function 'FUN_80158154' @0x80158154 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80158154(undefined4 uParm1,undefined4 uParm2,int iParm3,int iParm4)

{
	undefined4 in_v1;
	int iVar1;
	int p;
	int i;
	
	*(undefined4 *)((int)&plr[0].HoldItem._ivalue + iParm3) = in_v1;
	*(undefined4 *)((int)&plr[0].InvList[0]._ivalue + iParm4) = uParm1;
	*(undefined2 *)((int)&plr[0].InvList[0]._iCurs + iParm4) = 6;
	iVar1 = *(int *)((int)&plr[0].HoldItem._ivalue + iParm3);
	if (iVar1 < 0x9c4) {
		i = 0x11;
		if (iVar1 < 0x3e9) {
			i = 0x10;
		}
	}
	else {
		i = 0x12;
	}
	CalcPlrInv__FiUc(p,'\x01');
	if (p == myplr) {
		SetCursor__Fi(i);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80159d1c(int iParm1);
 // line -1, offset 0x80159d1c
// function 'FUN_80159d1c' @0x80159D1C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80159d1c(int iParm1)

{
	char cVar1;
	int iVar2;
	int in_at;
	undefined4 in_v0;
	uint uVar3;
	
	*(undefined4 *)(in_at + -0x4cd0) = in_v0;
	iVar2 = sfxdnum;
	if (plr[iParm1].HoldItem.IDidx == 9) {
		if (quests._qactive == '\x01') {
			quests._qactive = '\x02';
			quests._qvar1 = '\x01';
		}
		iVar2 = sfxdnum;
		if (quests._qlog == '\x01') {
			sfxdelay = 10;
			uVar3 = SEXT14(plr[myplr]._pClass);
			iVar2 = 0x329;
			if (uVar3 != 0) {
				if (uVar3 == (uint)quests._qlog) {
					iVar2 = 699;
				}
				else {
					iVar2 = sfxdnum;
					if (uVar3 == 2) {
						iVar2 = 0x253;
					}
				}
			}
		}
	}
	sfxdnum = iVar2;
	iVar2 = sfxdnum;
	if (plr[iParm1].HoldItem.IDidx == 0x1c) {
		QuestStruct_ARRAY_800e3404[3]._qactive = '\x03';
		sfxdelay = 0x14;
		cVar1 = plr[myplr]._pClass;
		if (cVar1 == '\0') {
			iVar2 = 0x32d;
		}
		else {
			if (cVar1 == '\x01') {
				iVar2 = 0x2bf;
			}
			else {
				iVar2 = 599;
				if (cVar1 != '\x02') {
					QuestStruct_ARRAY_800e3404[3]._qactive = '\x03';
					sfxdelay = 0x14;
					return;
				}
			}
		}
	}
	sfxdnum = iVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015ab10(void);
 // line -1, offset 0x8015ab10
// function 'FUN_8015ab10' @0x8015AB10 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015ab10(void)

{
	int *piVar1;
	int in_v0;
	int iVar2;
	int iVar3;
	int iVar4;
	ItemStruct *pIVar5;
	ItemStruct *pIVar6;
	int *piVar7;
	int unaff_s3;
	int i;
	
	pIVar6 = item + i;
	piVar1 = &plr[0].HoldItem._iVAdd1 + unaff_s3 * 10 + in_v0 * 0x20;
	do {
		piVar7 = piVar1;
		pIVar5 = pIVar6;
		iVar2 = pIVar5->_iVMult1;
		iVar3 = pIVar5->_iVAdd2;
		iVar4 = pIVar5->_iVMult2;
		*piVar7 = pIVar5->_iVAdd1;
		piVar7[1] = iVar2;
		piVar7[2] = iVar3;
		piVar7[3] = iVar4;
		pIVar6 = (ItemStruct *)&pIVar5->_iSeed;
		piVar1 = piVar7 + 4;
	} while (pIVar6 != (ItemStruct *)&item[i]._iMinMag);
	iVar2 = pIVar5->_ivalue;
	piVar7[4] = pIVar6->_iVAdd1;
	piVar7[5] = iVar2;
	RespawnItem__FiUc(i,'\x01');
	NetSendCmdPItem__FUcUcUcUc('\x01','\v',item[i]._ix,item[i]._iy);
	plr[unaff_s3].HoldItem._itype = -1;
	return;
}



// decompiled code
// original method signature: 
// int FUN_8015ac54(int iParm1,ushort uParm2,int iParm3);
 // line -1, offset 0x8015ac54
// function 'FUN_8015ac54' @0x8015AC54 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015ac54(int iParm1,ushort uParm2,int iParm3)

{
	int in_v0;
	int iVar1;
	int in_t0;
	
	while (((iVar1 = (int)itemactive[in_t0], (int)item[iVar1].IDidx != iParm1 ||
					(item[iVar1]._iSeed != iParm3)) || (item[iVar1]._iCreateInfo != uParm2))) {
		in_t0 = in_t0 + 1;
		if (in_v0 <= in_t0) {
			return 0xffffffff;
		}
	}
	return iVar1;
}



// decompiled code
// original method signature: 
// void FUN_8015ad14(undefined4 param_1,undefined4 param_2,int param_3,ushort param_4);
 // line -1, offset 0x8015ad14
// function 'FUN_8015ad14' @0x8015AD14 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015ad14(undefined4 param_1,undefined4 param_2,int param_3,ushort param_4)

{
	int in_v0;
	int in_v1;
	int i;
	int iVar1;
	int param_11;
	
	iVar1 = (int)(&dung_map[0].dItem)[in_v1 + in_v0] + -1;
	if (((((int)(&dung_map[0].dItem)[in_v1 + in_v0] == 0) || ((int)item[iVar1].IDidx != param_3)) ||
			(item[iVar1]._iSeed != param_11)) || (item[iVar1]._iCreateInfo != param_4)) {
		iVar1 = FindGetItem__FiUsi(param_3,param_4,param_11);
	}
	if (iVar1 != -1) {
		dung_map[(int)item[iVar1]._ix * 0x6c + (int)item[iVar1]._iy].dItem = '\0';
		i = 0;
		if (0 < numitems) {
			do {
				if ((int)itemactive[i] == iVar1) {
					DeleteItem__Fii((int)itemactive[i],i);
					i = 0;
				}
				else {
					i = i + 1;
				}
			} while (i < numitems);
		}
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015addc(void);
 // line -1, offset 0x8015addc
// function 'FUN_8015addc' @0x8015ADDC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015addc(void)

{
	int in_v0;
	int in_v1;
	int i;
	int unaff_s0;
	
	(&dung_map[(int)(&item[0]._ix)[in_v0] * 0x6c].dItem)[in_v1 * 4] = '\0';
	i = 0;
	if (0 < numitems) {
		do {
			if ((int)itemactive[i] == unaff_s0) {
				DeleteItem__Fii((int)itemactive[i],i);
				i = 0;
			}
			else {
				i = i + 1;
			}
		} while (i < numitems);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015ae5c(undefined4 param_1,int param_2);
 // line -1, offset 0x8015ae5c
// function 'FUN_8015ae5c' @0x8015AE5C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015ae5c(undefined4 param_1,int param_2)

{
	long in_v0;
	int unaff_s0;
	
	while (param_2 < in_v0) {
		if ((int)itemactive[param_2] == unaff_s0) {
			DeleteItem__Fii((int)itemactive[param_2],param_2);
			param_2 = 0;
			in_v0 = numitems;
		}
		else {
			param_2 = param_2 + 1;
			in_v0 = numitems;
		}
	}
	return;
}



// decompiled code
// original method signature: 
// int FUN_8015b2c4(void);
 // line -1, offset 0x8015b2c4
// function 'FUN_8015b2c4' @0x8015B2C4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
int FUN_8015b2c4(void)

{
	short sVar1;
	bool bVar2;
	ItemStruct *pIVar3;
	char cVar4;
	uchar uVar5;
	int in_v0;
	int iVar6;
	int iVar7;
	int iVar8;
	ItemStruct *pIVar9;
	ItemStruct *pIVar10;
	ItemStruct *pIVar11;
	int i;
	int unaff_s1;
	int unaff_s2;
	int unaff_s3;
	uint unaff_s5;
	uint uVar12;
	int unaff_s6;
	char unaff_s7;
	int i_00;
	int param_7;
	char param_9_00;
	int param_9;
	
	do {
		while ((unaff_s1 <= unaff_s2 && (unaff_s7 == '\0'))) {
			i = (int)*(short *)((int)&plr[0]._px + unaff_s6) + unaff_s1;
			uVar5 = CanPut__Fii(i,in_v0 + unaff_s3);
			if (uVar5 != '\0') {
				unaff_s7 = '\x01';
				i_00 = i;
				param_9 = in_v0 + unaff_s3;
			}
			unaff_s1 = unaff_s1 + 1;
		}
		unaff_s3 = unaff_s3 + 1;
LAB_8015b2a4:
		if ((unaff_s2 < unaff_s3) || (unaff_s1 = -unaff_s2, unaff_s7 != '\0')) {
			unaff_s2 = unaff_s2 + 1;
			do {
				if (unaff_s2 < 0x32) {
					unaff_s3 = -unaff_s2;
					if (unaff_s7 == '\0') goto LAB_8015b2a4;
				}
				else {
					if (unaff_s7 == '\0') {
						return 0xffffffff;
					}
				}
				do {
					do {
						do {
							uVar12 = unaff_s5;
							bVar2 = false;
							if (7 < (int)(uVar12 + 1)) {
								uVar5 = CanPut__Fii(i_00,param_9);
								if (uVar5 == '\0') {
									return 0xffffffff;
								}
								i = (int)itemavail[0];
								dung_map[i_00 * 0x6c + param_9].dItem = itemavail[0] + '\x01';
								cVar4 = itemavail[0x7e - numitems];
								itemactive[numitems] = itemavail[0];
								itemavail[0] = cVar4;
								pIVar3 = item + i;
								pIVar11 = &plr[param_7].HoldItem;
								do {
									pIVar10 = pIVar11;
									pIVar9 = pIVar3;
									iVar6 = pIVar10->_iVMult1;
									iVar7 = pIVar10->_iVAdd2;
									iVar8 = pIVar10->_iVMult2;
									pIVar9->_iVAdd1 = pIVar10->_iVAdd1;
									pIVar9->_iVMult1 = iVar6;
									pIVar9->_iVAdd2 = iVar7;
									pIVar9->_iVMult2 = iVar8;
									pIVar11 = (ItemStruct *)&pIVar10->_iSeed;
									pIVar3 = (ItemStruct *)&pIVar9->_iSeed;
								} while (pIVar11 != (ItemStruct *)&plr[param_7].HoldItem._iMinMag);
								iVar6 = pIVar10->_ivalue;
								((ItemStruct *)&pIVar9->_iSeed)->_iVAdd1 = pIVar11->_iVAdd1;
								pIVar9->_ivalue = iVar6;
								item[i]._ix = (char)i_00;
								item[i]._iy = param_9_00;
								RespawnItem__FiUc(i,'\x01');
								numitems = numitems + 1;
								NewCursor__Fi(1);
								return i;
							}
							sVar1 = *(short *)((int)&plr[0]._py + unaff_s6);
							i = abs(i_00 - (int)*(short *)((int)&plr[0]._px + unaff_s6));
							if ((1 < i) || (i = abs(param_9 - (int)sVar1), 1 < i)) {
								bVar2 = true;
							}
							if (bVar2) {
								i_00 = (int)*(short *)((int)&plr[0]._px + unaff_s6) + (int)offset_x[uVar12 + 1];
								param_9 = (int)*(short *)((int)&plr[0]._py + unaff_s6) + (int)offset_y[uVar12 + 1];
							}
							uVar5 = CanPut__Fii(i_00,param_9);
							unaff_s5 = uVar12 + 1;
						} while (uVar5 != '\0');
						unaff_s5 = uVar12 & 7;
						i_00 = (int)*(short *)((int)&plr[0]._px + unaff_s6) + (int)offset_x[unaff_s5];
						param_9 = (int)*(short *)((int)&plr[0]._py + unaff_s6) + (int)offset_y[unaff_s5];
						uVar5 = CanPut__Fii(i_00,param_9);
					} while (uVar5 != '\0');
					unaff_s5 = unaff_s5 + 2 & 7;
					i_00 = (int)*(short *)((int)&plr[0]._px + unaff_s6) + (int)offset_x[unaff_s5];
					param_9 = (int)*(short *)((int)&plr[0]._py + unaff_s6) + (int)offset_y[unaff_s5];
					uVar5 = CanPut__Fii(i_00,param_9);
					unaff_s2 = 1;
				} while (uVar5 != '\0');
			} while( true );
		}
		in_v0 = (int)*(short *)((int)&plr[0]._py + unaff_s6);
	} while( true );
}



// decompiled code
// original method signature: 
// void FUN_8015b464(int param_1);
 // line -1, offset 0x8015b464
// function 'FUN_8015b464' @0x8015B464 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015b464(int param_1)

{
	int in_v0;
	int iVar1;
	int unaff_s0;
	char unaff_s8;
	char param_9;
	
	iVar1 = (in_v0 * 4 - unaff_s0) * 8;
	(&item[0]._ix)[iVar1] = unaff_s8;
	(&item[0]._iy)[iVar1] = param_9;
	RespawnItem__FiUc(param_1,'\x01');
	numitems = numitems + 1;
	NewCursor__Fi(1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015b4e4(void);
 // line -1, offset 0x8015b4e4
// function 'FUN_8015b4e4' @0x8015B4E4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015b4e4(void)

{
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_8015bb8c(undefined param_1,undefined param_2,undefined param_3,undefined param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
 // line -1, offset 0x8015bb8c
// function 'FUN_8015bb8c' @0x8015BB8C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4
FUN_8015bb8c(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
						undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
						undefined4 param_9)

{
	char cVar1;
	char *__src;
	char *pcVar2;
	ItemStruct *ItemPtr;
	int nGold;
	
	if (ItemPtr->_itype == -1) {
		return 0xffffffff;
	}
	if (ItemPtr->_itype == 0xb) {
		nGold = ItemPtr->_ivalue;
		__src = GetStr__Fi(STR__I_GOLD__S);
		pcVar2 = get_pieces_str__Fi(nGold);
		sprintf(_infostr + sel_data * 0x100,__src,nGold,pcVar2);
		return 4;
	}
	if (ItemPtr->_iMagical == '\x01') {
		cVar1 = '\x01';
	}
	else {
		cVar1 = '\x03';
		if (ItemPtr->_iMagical != '\x02') goto LAB_8015bcec;
	}
	_infoclr[sel_data] = cVar1;
LAB_8015bcec:
	__src = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemPtr->_iName,0x100);
	strcpy(_infostr + sel_data * 0x100,__src);
	if (ItemPtr->_iIdentified == '\0') {
		PrintItemDur__FPC10ItemStruct(ItemPtr);
	}
	else {
		__src = MakeItemStr__FP10ItemStructUsUs(ItemPtr,ItemPtr->_iIName,0x100);
		strcpy(_infostr + sel_data * 0x100,__src);
		PrintItemDetails__FPC10ItemStruct(ItemPtr);
	}
	return 4;
}



// decompiled code
// original method signature: 
// uint FUN_8015c2e8(undefined4 param_1,int param_2);
 // line -1, offset 0x8015c2e8
// function 'FUN_8015c2e8' @0x8015C2E8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
uint FUN_8015c2e8(undefined4 param_1,int param_2)

{
	return (uint)(0 < *(short *)((int)&plr[0].InvBody[4]._iCharges + param_2));
}



// decompiled code
// original method signature: 
// undefined4 FUN_8015c7c8(void);
 // line -1, offset 0x8015c7c8
// function 'FUN_8015c7c8' @0x8015C7C8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_8015c7c8(void)

{
	int in_v1;
	_125fake psfx;
	int p;
	int unaff_s1;
	int iv;
	char unaff_s3;
	
	if ((&spelldata.sTownSpell)[in_v1] == '\0') {
		return 1;
	}
	if (((*(short *)(unaff_s1 + 0x6e) == 0x16) && (currlevel == '\0')) &&
		 ((&spelldata)[*(int *)(unaff_s1 + 0x24)].sTownSpell == '\0')) {
		return 1;
	}
	psfx = IS_RBOOK;
	if (*(short *)(unaff_s1 + 0x6e) != 0x18) {
		if (p != myplr) goto LAB_8015c87c;
		psfx = ItemInvSnds[(uint)ItemCAnimTbl[(int)*(short *)(unaff_s1 + 0x6c)]];
	}
	PlaySFX__Fi(psfx);
LAB_8015c87c:
	UseItem__Fiii(p,(int)*(short *)(unaff_s1 + 0x6e),*(int *)(unaff_s1 + 0x24));
	if (unaff_s3 == '\0') {
		if (plr[p].InvList[iv]._iMiscId != 0x2a) {
			RemoveInvItem__Fii(p,iv);
		}
	}
	else {
		RemoveSpdBarItem__Fii(p,iv);
	}
	return 1;
}



// decompiled code
// original method signature: 
// void FUN_8015c9ac(void);
 // line -1, offset 0x8015c9ac
// function 'FUN_8015c9ac' @0x8015C9AC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015c9ac(void)

{
	uchar uVar1;
	int in_v0;
	int unaff_s1;
	
	if ((((&_pcursmonst)[in_v0] != unaff_s1) &&
			(uVar1 = M_Talker__Fi((&_pcursmonst)[in_v0]), uVar1 == '\0')) &&
		 (monster[(&_pcursmonst)[sel_data]].mtalkmsg == 0)) {
		NetSendCmdParam1__FUcUcUs('\x01','\x1c',(ushort)(&_pcursmonst)[sel_data]);
	}
	NewCursor__Fi(1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015ca0c(undefined4 param_1,undefined4 param_2,ushort param_3);
 // line -1, offset 0x8015ca0c
// function 'FUN_8015ca0c' @0x8015CA0C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015ca0c(undefined4 param_1,undefined4 param_2,ushort param_3)

{
	int in_at;
	int in_v0;
	
	if (*(int *)(in_at + in_v0 + 0x47d8) == 0) {
		NetSendCmdParam1__FUcUcUs('\x01','\x1c',param_3);
	}
	NewCursor__Fi(1);
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015d49c(undefined4 param_1,int param_2);
 // line -1, offset 0x8015d49c
// function 'FUN_8015d49c' @0x8015D49C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015d49c(undefined4 param_1,int param_2)

{
	int in_v0;
	int in_v1;
	int unaff_s0;
	
	if ((in_v0 == 0) && (0x41 < in_v1)) {
		iGp000018d8 = in_v1 - param_2;
	}
	InvSetItemCurs__Fv();
	if (unaff_s0 != iGp000018d8) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015d4f0(void);
 // line -1, offset 0x8015d4f0
// function 'FUN_8015d4f0' @0x8015D4F0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015d4f0(void)

{
	int iVar1;
	int in_v0;
	int iVar2;
	
	iVar1 = iGp000018d8;
	iVar2 = 0;
	if (_pcurs[in_v0] < 0xc) {
		switch(iGp000018d8) {
		case 0:
		case 6:
			break;
		default:
			if (iGp000018d8 - 0x19U < 0x28) {
				iVar2 = 1;
				if ((&plr[myplr].InvList[0x27]._iPLDex)[iGp000018d8] != '\0') {
					InvGetItemWH__Fi(iGp000018d8 - 0x19U);
					iVar2 = iGp000018e4;
				}
				break;
			}
LAB_8015d640:
			if (iGp000018d8 < 0x41) break;
			goto LAB_8015d648;
		case 4:
switchD_8015d5e0_caseD_4:
			iGp000018d8 = 5;
			break;
		case 5:
switchD_8015d5e0_caseD_5:
			iGp000018d8 = 4;
			break;
		case 7:
			iGp000018d8 = 0x13;
			break;
		case 0xd:
switchD_8015d5e0_caseD_d:
			iGp000018d8 = 7;
			break;
		case 0x13:
switchD_8015d5e0_caseD_7:
			iGp000018d8 = 0xd;
		}
	}
	else {
		switch(iGp000018d8) {
		case 0:
		case 6:
		case 0x13:
			goto switchD_8015d5e0_caseD_0;
		default:
			if (0x27 < iGp000018d8 - 0x19U) goto LAB_8015d640;
			break;
		case 4:
			goto switchD_8015d5e0_caseD_4;
		case 5:
			goto switchD_8015d5e0_caseD_5;
		case 7:
			goto switchD_8015d5e0_caseD_7;
		case 0xd:
			goto switchD_8015d5e0_caseD_d;
		}
LAB_8015d648:
		iVar2 = 1;
	}
switchD_8015d5e0_caseD_0:
	if (iGp000018d8 - 0x19U < 0x28) {
		if (_pcurs[myplr] < 0xc) {
			iGp000018e4 = 0;
		}
		else {
			iGp000018ec = (int)plr[myplr].HoldItem._iCurs;
			iGp000018e4 = (uint)(s__8011d0cc[iGp000018ec] >> 4) - 1;
		}
		if ((iGp000018d8 - 0x19U < 10) && (iGp000018d8 + iVar2 + iGp000018e4 < 0x23)) {
			iGp000018d8 = iGp000018d8 + iVar2;
		}
		if ((iGp000018d8 - 0x23U < 10) && (iGp000018d8 + iVar2 + iGp000018e4 < 0x2d)) {
			iGp000018d8 = iGp000018d8 + iVar2;
		}
		if ((iGp000018d8 - 0x2dU < 10) && (iGp000018d8 + iVar2 + iGp000018e4 < 0x37)) {
			iGp000018d8 = iGp000018d8 + iVar2;
		}
		if ((iGp000018d8 - 0x37U < 10) && (iGp000018d8 + iVar2 + iGp000018e4 < 0x41)) {
			iGp000018d8 = iGp000018d8 + iVar2;
		}
	}
	else {
		if ((0x40 < iGp000018d8) && (iGp000018d8 < 0x48)) {
			iGp000018d8 = iGp000018d8 + iVar2;
		}
	}
	InvSetItemCurs__Fv();
	if (iVar1 != iGp000018d8) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015d6b4(int param_1);
 // line -1, offset 0x8015d6b4
// function 'FUN_8015d6b4' @0x8015D6B4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015d6b4(int param_1)

{
	int in_at;
	int in_v0;
	int unaff_s0;
	
	iGp000018ec = (int)*(short *)(in_at + in_v0 + 0xe18);
	iGp000018e4 = (uint)(s__8011d0cc[iGp000018ec] >> 4) - 1;
	if ((iGp000018d8 - 0x19U < 10) && (iGp000018d8 + param_1 + iGp000018e4 < 0x23)) {
		iGp000018d8 = iGp000018d8 + param_1;
	}
	if ((iGp000018d8 - 0x23U < 10) && (iGp000018d8 + param_1 + iGp000018e4 < 0x2d)) {
		iGp000018d8 = iGp000018d8 + param_1;
	}
	if ((iGp000018d8 - 0x2dU < 10) && (iGp000018d8 + param_1 + iGp000018e4 < 0x37)) {
		iGp000018d8 = iGp000018d8 + param_1;
	}
	if ((iGp000018d8 - 0x37U < 10) && (iGp000018d8 + param_1 + iGp000018e4 < 0x41)) {
		iGp000018d8 = iGp000018d8 + param_1;
	}
	InvSetItemCurs__Fv();
	if (unaff_s0 != iGp000018d8) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015dbe4(void);
 // line -1, offset 0x8015dbe4
// function 'FUN_8015dbe4' @0x8015DBE4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015dbe4(void)

{
	uint in_v0;
	int iVar1;
	int in_v1;
	int unaff_s0;
	int unaff_s1;
	
	if (in_v0 < 0x28) {
		unaff_s1 = 1;
	}
	else {
		if (0x40 < in_v1) {
			unaff_s1 = 0;
		}
	}
	if ((iGp000018d8 - 0x19U < 0x28) && (unaff_s1 != 0)) {
		iGp000018ec = (int)plr[myplr].HoldItem._iCurs;
		uGp000018e4 = (uint)(s__8011d0cc[iGp000018ec] >> 4);
		uGp000018e8 = (uint)(s__0000000000000000000_00000000000_8011d180[iGp000018ec] >> 4);
		if (iGp000018d8 < 0x38) {
			iVar1 = iGp000018d8 + 10;
			if (0x36 < (int)(iGp000018d8 + (uGp000018e8 - 1) * 10)) goto LAB_8015dcdc;
		}
		else {
			iVar1 = iGp000018d8 + 9;
			if (iGp000018d8 == 0x37) {
				iVar1 = 0x41;
			}
		}
		iGp000018d8 = iVar1;
	}
LAB_8015dcdc:
	if (0x48 < iGp000018d8) {
		iGp000018d8 = 0x48;
	}
	InvSetItemCurs__Fv();
	if (unaff_s0 != iGp000018d8) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015dc68(int param_1);
 // line -1, offset 0x8015dc68
// function 'FUN_8015dc68' @0x8015DC68 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015dc68(int param_1)

{
	int iVar1;
	int in_v1;
	int unaff_s0;
	
	uGp000018e4 = (uint)(s__8011d0cc[in_v1] >> 4);
	uGp000018e8 = (uint)(s__0000000000000000000_00000000000_8011d180[in_v1] >> 4);
	if (param_1 < 0x38) {
		iVar1 = param_1 + 10;
		if (0x36 < (int)(param_1 + (uGp000018e8 - 1) * 10)) goto LAB_8015dcdc;
	}
	else {
		iVar1 = param_1 + 9;
		if (param_1 == 0x37) {
			iVar1 = 0x41;
		}
	}
	iGp000018d8 = iVar1;
LAB_8015dcdc:
	if (0x48 < iGp000018d8) {
		iGp000018d8 = 0x48;
	}
	InvSetItemCurs__Fv();
	if (unaff_s0 != iGp000018d8) {
		PlaySFX__Fi(IS_TITLEMOV);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015ed78(void);
 // line -1, offset 0x8015ed78
// function 'FUN_8015ed78' @0x8015ED78 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8015ed78(void)

{
	int in_v1;
	undefined2 unaff_s2;
	undefined2 unaff_s3;
	undefined2 unaff_s4;
	undefined2 unaff_s5;
	
	*(undefined2 *)(in_v1 + 8) = unaff_s4;
	*(undefined2 *)(in_v1 + 10) = unaff_s3;
	*(undefined2 *)(in_v1 + 0xc) = unaff_s2;
	*(undefined2 *)(in_v1 + 0xe) = unaff_s5;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8015fb64(void);
 // line -1, offset 0x8015fb64
// function 'FUN_8015fb64' @0x8015FB64 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_8015fb64(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_8015fd00(void);
 // line -1, offset 0x8015fd00
// function 'FUN_8015fd00' @0x8015FD00 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_8015fd00(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_8015fefc(void);
 // line -1, offset 0x8015fefc
// function 'FUN_8015fefc' @0x8015FEFC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_8015fefc(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_8016025c(void);
 // line -1, offset 0x8016025c
// function 'FUN_8016025c' @0x8016025C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_8016025c(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_80160370(void);
 // line -1, offset 0x80160370
// function 'FUN_80160370' @0x80160370 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_80160370(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_80160500(void);
 // line -1, offset 0x80160500
// function 'FUN_80160500' @0x80160500 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_80160500(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_8016065c(void);
 // line -1, offset 0x8016065c
// function 'FUN_8016065c' @0x8016065C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_8016065c(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_80160954(void);
 // line -1, offset 0x80160954
// function 'FUN_80160954' @0x80160954 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_80160954(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_801609a0(void);
 // line -1, offset 0x801609a0
// function 'FUN_801609a0' @0x801609A0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_801609a0(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_80160a20(void);
 // line -1, offset 0x80160a20
// function 'FUN_80160a20' @0x80160A20 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_80160a20(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_80160bd0(void);
 // line -1, offset 0x80160bd0
// function 'FUN_80160bd0' @0x80160BD0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_80160bd0(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}



// decompiled code
// original method signature: 
// void FUN_80162ee0(void);
 // line -1, offset 0x80162ee0
// function 'FUN_80162ee0' @0x80162EE0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
/* WARNING: Control flow encountered bad instruction data */

void FUN_80162ee0(void)

{
										/* WARNING: Bad instruction - Truncating control flow here */
	halt_baddata();
}
