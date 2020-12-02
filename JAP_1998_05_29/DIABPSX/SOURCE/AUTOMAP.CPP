#include "THISDUST.H"
#include "VERSION.H"


// decompiled code
// original method signature: 
// void FUN_80161f68(void);
 // line -1, offset 0x80161f68
// function 'FUN_80161f68' @0x80161F68 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161f68(void)

{
	if (-0x28 < iGp00001c08) {
		iGp00001c08 = iGp00001c08 + -2;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161f88(void);
 // line -1, offset 0x80161f88
// function 'FUN_80161f88' @0x80161F88 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161f88(void)

{
	if (iGp00001c08 < 0x28) {
		iGp00001c08 = iGp00001c08 + 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161fa8(void);
 // line -1, offset 0x80161fa8
// function 'FUN_80161fa8' @0x80161FA8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161fa8(void)

{
	if (-0x50 < iGp00001c04) {
		iGp00001c04 = iGp00001c04 + -2;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161fc8(void);
 // line -1, offset 0x80161fc8
// function 'FUN_80161fc8' @0x80161FC8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161fc8(void)

{
	if (iGp00001c04 < 0x50) {
		iGp00001c04 = iGp00001c04 + 2;
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161fdc(void);
 // line -1, offset 0x80161fdc
// function 'FUN_80161fdc' @0x80161FDC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161fdc(void)

{
	undefined4 in_v0;
	
	uGp00001c04 = in_v0;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80161fe8(undefined uParm1,undefined uParm2,undefined uParm3);
 // line -1, offset 0x80161fe8
// function 'FUN_80161fe8' @0x80161FE8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80161fe8(undefined uParm1,undefined uParm2,undefined uParm3)

{
	ulong *puVar1;
	uint *local_18 [2];
	
	FUN_80163d9c(local_18);
	SetLineF2(local_18[0]);
	*(undefined *)(local_18[0] + 1) = uParm1;
	*(undefined *)((int)local_18[0] + 5) = uParm2;
	*(undefined *)((int)local_18[0] + 6) = uParm3;
	puVar1 = ThisOt + iGp00001bec;
	*local_18[0] = *local_18[0] & 0xff000000 | *puVar1 & 0xffffff;
	*puVar1 = *puVar1 & 0xff000000 | (uint)local_18[0] & 0xffffff;
	return;
}



// decompiled code
// original method signature: 
// void FUN_801620a0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5);
 // line -1, offset 0x801620a0
// function 'FUN_801620a0' @0x801620A0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801620a0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
								 int param_5)

{
	int iVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	
	if (param_5 == 0) {
		uVar2 = 0x20;
		uVar3 = 0xff;
		uVar4 = 0;
	}
	else {
		uVar2 = 0xff;
		uVar3 = 0;
		uVar4 = 0xe0;
	}
	iVar1 = FUN_80161fe8(uVar2,uVar3,uVar4);
	*(undefined2 *)(iVar1 + 8) = param_1;
	*(undefined2 *)(iVar1 + 10) = param_2;
	*(undefined2 *)(iVar1 + 0xc) = param_3;
	*(undefined2 *)(iVar1 + 0xe) = param_4;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162124(void);
 // line -1, offset 0x80162124
// function 'FUN_80162124' @0x80162124 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162124(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	undefined *puVar10;
	
	iVar1 = iGp00001be8;
	iVar7 = 0;
	puVar10 = (undefined *)0x0;
	iVar9 = iGp00001be8 >> 1;
	iVar8 = iGp00001be8 >> 2;
	do {
		if ((&plr.plractive)[(int)puVar10] != '\0') {
			iVar4 = iGp00001c04 + AMPx[iVar7] + 0x9e;
			iVar6 = iGp00001c08 + AMPy[iVar7] + 0x65;
			switch((&plr._pdir)[(int)puVar10]) {
			case '\0':
				iVar3 = iVar6 + iVar1;
				FUN_801620a0(iVar4,iVar6,iVar4,iVar3,iVar7);
				iVar6 = iVar6 + iVar9;
				FUN_801620a0(iVar4,iVar3,iVar4 + iVar8,iVar6,iVar7);
				iVar5 = iVar4 - iVar8;
				iVar2 = iVar4;
				break;
			case '\x01':
				iVar2 = iVar4 - iVar1;
				iVar3 = iVar6 + iVar9;
				FUN_801620a0(iVar4,iVar6,iVar2,iVar3,iVar7);
				iVar5 = iVar4 - iVar9;
				FUN_801620a0(iVar2,iVar3,iVar5 - iVar8,iVar6,iVar7);
				iVar6 = iVar3;
				break;
			case '\x02':
				iVar2 = iVar4 - iVar1;
				FUN_801620a0(iVar4,iVar6,iVar2,iVar6,iVar7);
				iVar5 = iVar4 - iVar9;
				FUN_801620a0(iVar2,iVar6,iVar5,iVar6 - iVar8,iVar7);
				iVar3 = iVar6;
				iVar6 = iVar6 + iVar8;
				break;
			case '\x03':
				iVar2 = iVar4 - iVar1;
				iVar3 = iVar6 - iVar9;
				FUN_801620a0(iVar4,iVar6,iVar2,iVar3,iVar7);
				FUN_801620a0(iVar2,iVar3,iVar4 - iVar9,iVar3,iVar7);
				iVar5 = (iVar4 - iVar9) - iVar8;
				break;
			case '\x04':
				iVar3 = iVar6 - iVar1;
				FUN_801620a0(iVar4,iVar6,iVar4,iVar3,iVar7);
				FUN_801620a0(iVar4,iVar3,iVar4 - iVar8,iVar6 - iVar9,iVar7);
				iVar5 = iVar4 + iVar8;
				iVar2 = iVar4;
				iVar6 = iVar6 - iVar9;
				break;
			case '\x05':
				iVar2 = iVar4 + iVar1;
				iVar3 = iVar6 - iVar9;
				FUN_801620a0(iVar4,iVar6,iVar2,iVar3,iVar7);
				FUN_801620a0(iVar2,iVar3,iVar4 + iVar9,iVar3,iVar7);
				iVar5 = iVar4 + iVar9 + iVar8;
				break;
			case '\x06':
				iVar2 = iVar4 + iVar1;
				FUN_801620a0(iVar4,iVar6,iVar2,iVar6,iVar7);
				iVar5 = iVar4 + iVar9;
				FUN_801620a0(iVar2,iVar6,iVar5,iVar6 - iVar8,iVar7);
				iVar3 = iVar6;
				iVar6 = iVar6 + iVar8;
				break;
			case '\a':
				iVar2 = iVar4 + iVar1;
				iVar3 = iVar6 + iVar9;
				FUN_801620a0(iVar4,iVar6,iVar2,iVar3,iVar7);
				iVar5 = iVar4 + iVar9;
				FUN_801620a0(iVar2,iVar3,iVar5 + iVar8,iVar6,iVar7);
				iVar6 = iVar3;
				break;
			default:
				goto switchD_801621d4_caseD_8;
			}
			FUN_801620a0(iVar2,iVar3,iVar5,iVar6,iVar7);
		}
switchD_801621d4_caseD_8:
		iVar7 = iVar7 + 1;
		puVar10 = &DAT_000019e8 + (int)puVar10;
		if (1 < iVar7) {
			return;
		}
	} while( true );
}



// decompiled code
// original method signature: 
// void FUN_801621d0(void);
 // line -1, offset 0x801621d0
// function 'FUN_801621d0' @0x801621D0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801621d0(void)

{
	code *UNRECOVERED_JUMPTABLE;
	
										/* WARNING: Could not recover jumptable at 0x801621d4. Too many branches */
										/* WARNING: Treating indirect jump as call */
	(*UNRECOVERED_JUMPTABLE)();
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162490(short sParm1,short sParm2);
 // line -1, offset 0x80162490
// function 'FUN_80162490' @0x80162490 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162490(short sParm1,short sParm2)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	uint uVar6;
	int iVar7;
	short sVar8;
	int iVar9;
	short sVar10;
	short sVar11;
	short sVar12;
	
	uVar6 = uGp00001be8;
	sParm1 = sParm1 * (short)uGp00001be8;
	sParm2 = sParm2 * (short)uGp00001be8;
	sVar3 = sParm2 + sParm1 + (short)uGp00001c10;
	sVar1 = (sParm1 - sParm2) * 2 + (short)uGp00001c0c;
	iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
	iVar9 = (int)uVar6 >> 1;
	sVar2 = (short)iVar9;
	*(short *)(iVar7 + 0xc) = sVar1 - sVar2;
	sVar8 = (short)((int)(iVar9 + (uVar6 >> 0x1f)) >> 1);
	*(short *)(iVar7 + 8) = sVar1;
	*(short *)(iVar7 + 10) = sVar3;
	*(short *)(iVar7 + 0xe) = sVar3 + sVar8;
	iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
	sVar5 = (short)uGp00001be8;
	sVar4 = sVar1 + sVar5 * -2;
	sVar1 = sVar1 + sVar2 * -2;
	sVar11 = sVar3 + sVar5;
	sVar12 = sVar1 + sVar5 * -2 + sVar2 * 2;
	*(short *)(iVar7 + 0xe) = sVar11;
	sVar10 = sVar11 - sVar2;
	*(short *)(iVar7 + 10) = sVar11 - sVar8;
	sVar8 = sVar3 + sVar5 * 2 + sVar2 * -2;
	sVar11 = sVar1 + sVar5 * 2 + sVar2 * -2;
	*(short *)(iVar7 + 8) = sVar4 + sVar2;
	*(short *)(iVar7 + 0xc) = sVar4;
	iVar7 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar7 + 8) = sVar1;
	*(short *)(iVar7 + 10) = sVar3;
	*(short *)(iVar7 + 0xc) = sVar12;
	*(short *)(iVar7 + 0xe) = sVar10;
	iVar7 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar7 + 8) = sVar12;
	*(short *)(iVar7 + 10) = sVar10;
	*(short *)(iVar7 + 0xc) = sVar1;
	*(short *)(iVar7 + 0xe) = sVar8;
	iVar7 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar7 + 8) = sVar1;
	*(short *)(iVar7 + 10) = sVar8;
	*(short *)(iVar7 + 0xc) = sVar11;
	*(short *)(iVar7 + 0xe) = sVar10;
	iVar7 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar7 + 8) = sVar11;
	*(short *)(iVar7 + 10) = sVar10;
	*(short *)(iVar7 + 0xc) = sVar1;
	*(short *)(iVar7 + 0xe) = sVar3;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162530(void);
 // line -1, offset 0x80162530
// function 'FUN_80162530' @0x80162530 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162530(void)

{
	short sVar1;
	undefined2 in_v0;
	int iVar2;
	int in_t0;
	short unaff_s0;
	short sVar3;
	short unaff_s1;
	short sVar4;
	short unaff_s2;
	short sVar5;
	short sVar6;
	short sVar7;
	short unaff_s6;
	
	*(short *)(in_t0 + 10) = unaff_s6;
	*(undefined2 *)(in_t0 + 0xe) = in_v0;
	iVar2 = FUN_80161fe8();
	sVar6 = (short)uGp00001be8;
	sVar1 = unaff_s1 + sVar6 * -2;
	sVar4 = unaff_s1 + unaff_s2 * -2;
	sVar3 = unaff_s6 + sVar6;
	sVar7 = sVar4 + sVar6 * -2 + unaff_s2 * 2;
	*(short *)(iVar2 + 0xe) = sVar3;
	sVar5 = sVar3 - unaff_s2;
	*(short *)(iVar2 + 10) = sVar3 - unaff_s0;
	sVar3 = unaff_s6 + sVar6 * 2 + unaff_s2 * -2;
	sVar6 = sVar4 + sVar6 * 2 + unaff_s2 * -2;
	*(short *)(iVar2 + 8) = sVar1 + unaff_s2;
	*(short *)(iVar2 + 0xc) = sVar1;
	iVar2 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar2 + 8) = sVar4;
	*(short *)(iVar2 + 10) = unaff_s6;
	*(short *)(iVar2 + 0xc) = sVar7;
	*(short *)(iVar2 + 0xe) = sVar5;
	iVar2 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar2 + 8) = sVar7;
	*(short *)(iVar2 + 10) = sVar5;
	*(short *)(iVar2 + 0xc) = sVar4;
	*(short *)(iVar2 + 0xe) = sVar3;
	iVar2 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar2 + 8) = sVar4;
	*(short *)(iVar2 + 10) = sVar3;
	*(short *)(iVar2 + 0xc) = sVar6;
	*(short *)(iVar2 + 0xe) = sVar5;
	iVar2 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar2 + 8) = sVar6;
	*(short *)(iVar2 + 10) = sVar5;
	*(short *)(iVar2 + 0xc) = sVar4;
	*(short *)(iVar2 + 0xe) = unaff_s6;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8016264c(short sParm1,short sParm2);
 // line -1, offset 0x8016264c
// function 'FUN_8016264c' @0x8016264C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8016264c(short sParm1,short sParm2)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	uint uVar8;
	int iVar9;
	short sVar10;
	int iVar11;
	short sVar12;
	short sVar13;
	short sVar14;
	
	uVar8 = uGp00001be8;
	sParm1 = sParm1 * (short)uGp00001be8;
	sParm2 = sParm2 * (short)uGp00001be8;
	sVar3 = sParm2 + sParm1 + (short)uGp00001c10;
	sVar1 = (sParm1 - sParm2) * 2 + (short)uGp00001c0c;
	iVar9 = FUN_80161fe8(0x5f,0x58,0x38);
	iVar11 = (int)uVar8 >> 1;
	sVar2 = (short)iVar11;
	*(short *)(iVar9 + 0xc) = sVar1 + sVar2;
	sVar10 = (short)((int)(iVar11 + (uVar8 >> 0x1f)) >> 1);
	*(short *)(iVar9 + 8) = sVar1;
	*(short *)(iVar9 + 10) = sVar3;
	*(short *)(iVar9 + 0xe) = sVar3 + sVar10;
	iVar9 = FUN_80161fe8(0x5f,0x58,0x38);
	sVar7 = (short)uGp00001be8;
	sVar6 = sVar7 * 2;
	sVar4 = sVar1 + sVar2 * 2;
	sVar5 = sVar3 - sVar2;
	*(short *)(iVar9 + 10) = (sVar3 + sVar7) - sVar10;
	sVar10 = sVar4 + sVar7 * -2 + sVar2 * 2;
	sVar13 = sVar5 + sVar7;
	sVar14 = (sVar5 + sVar6) - sVar2;
	sVar12 = sVar4 + sVar6 + sVar2 * -2;
	*(short *)(iVar9 + 8) = (sVar1 + sVar6) - sVar2;
	*(short *)(iVar9 + 0xc) = sVar1 + sVar6;
	*(short *)(iVar9 + 0xe) = sVar3 + sVar7;
	iVar9 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar9 + 8) = sVar4;
	*(short *)(iVar9 + 10) = sVar5 + sVar2;
	*(short *)(iVar9 + 0xc) = sVar10;
	*(short *)(iVar9 + 0xe) = sVar13;
	iVar9 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar9 + 8) = sVar10;
	*(short *)(iVar9 + 10) = sVar13;
	*(short *)(iVar9 + 0xc) = sVar4;
	*(short *)(iVar9 + 0xe) = sVar14;
	iVar9 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar9 + 8) = sVar4;
	*(short *)(iVar9 + 10) = sVar14;
	*(short *)(iVar9 + 0xc) = sVar12;
	*(short *)(iVar9 + 0xe) = sVar13;
	iVar9 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar9 + 8) = sVar12;
	*(short *)(iVar9 + 10) = sVar13;
	*(short *)(iVar9 + 0xc) = sVar4;
	*(short *)(iVar9 + 0xe) = sVar5 + sVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8016265c(short param_1,short param_2);
 // line -1, offset 0x8016265c
// function 'FUN_8016265c' @0x8016265C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8016265c(short param_1,short param_2)

{
	short sVar1;
	short sVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	int iVar8;
	short sVar9;
	uint unaff_s1;
	short sVar10;
	short sVar11;
	short sVar12;
	
	param_1 = param_1 * (short)unaff_s1;
	param_2 = param_2 * (short)unaff_s1;
	sVar3 = param_2 + param_1 + (short)uGp00001c10;
	sVar1 = (param_1 - param_2) * 2 + (short)uGp00001c0c;
	iVar8 = FUN_80161fe8(0x5f,0x58,0x38);
	sVar2 = (short)((int)unaff_s1 >> 1);
	*(short *)(iVar8 + 0xc) = sVar1 + sVar2;
	sVar9 = (short)((int)(((int)unaff_s1 >> 1) + (unaff_s1 >> 0x1f)) >> 1);
	*(short *)(iVar8 + 8) = sVar1;
	*(short *)(iVar8 + 10) = sVar3;
	*(short *)(iVar8 + 0xe) = sVar3 + sVar9;
	iVar8 = FUN_80161fe8(0x5f,0x58,0x38);
	sVar7 = (short)uGp00001be8;
	sVar6 = sVar7 * 2;
	sVar4 = sVar1 + sVar2 * 2;
	sVar5 = sVar3 - sVar2;
	*(short *)(iVar8 + 10) = (sVar3 + sVar7) - sVar9;
	sVar9 = sVar4 + sVar7 * -2 + sVar2 * 2;
	sVar11 = sVar5 + sVar7;
	sVar12 = (sVar5 + sVar6) - sVar2;
	sVar10 = sVar4 + sVar6 + sVar2 * -2;
	*(short *)(iVar8 + 8) = (sVar1 + sVar6) - sVar2;
	*(short *)(iVar8 + 0xc) = sVar1 + sVar6;
	*(short *)(iVar8 + 0xe) = sVar3 + sVar7;
	iVar8 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar8 + 8) = sVar4;
	*(short *)(iVar8 + 10) = sVar5 + sVar2;
	*(short *)(iVar8 + 0xc) = sVar9;
	*(short *)(iVar8 + 0xe) = sVar11;
	iVar8 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar8 + 8) = sVar9;
	*(short *)(iVar8 + 10) = sVar11;
	*(short *)(iVar8 + 0xc) = sVar4;
	*(short *)(iVar8 + 0xe) = sVar12;
	iVar8 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar8 + 8) = sVar4;
	*(short *)(iVar8 + 10) = sVar12;
	*(short *)(iVar8 + 0xc) = sVar10;
	*(short *)(iVar8 + 0xe) = sVar11;
	iVar8 = FUN_80161fe8(0x7f,0x7f,100);
	*(short *)(iVar8 + 8) = sVar10;
	*(short *)(iVar8 + 10) = sVar11;
	*(short *)(iVar8 + 0xc) = sVar4;
	*(short *)(iVar8 + 0xe) = sVar5 + sVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8016280c(short sParm1,short sParm2);
 // line -1, offset 0x8016280c
// function 'FUN_8016280c' @0x8016280C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8016280c(short sParm1,short sParm2)

{
	short sVar1;
	int iVar2;
	short sVar3;
	
	iVar2 = FUN_80161fe8(0x3a,0x38,0x2d);
	sVar1 = (short)uGp00001be8;
	sVar3 = sParm2 * sVar1 + sParm1 * sVar1 + (short)uGp00001c10;
	*(short *)(iVar2 + 10) = sVar3;
	*(short *)(iVar2 + 0xe) = sVar3 + sVar1;
	sVar3 = (sParm1 * sVar1 - sParm2 * sVar1) * 2 + (short)uGp00001c0c;
	*(short *)(iVar2 + 8) = sVar3;
	*(short *)(iVar2 + 0xc) = sVar3 + sVar1 * -2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162824(undefined4 param_1);
 // line -1, offset 0x80162824
// function 'FUN_80162824' @0x80162824 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162824(undefined4 param_1)

{
	short sVar1;
	int iVar2;
	short sVar3;
	short unaff_s0;
	short unaff_s1;
	
	iVar2 = FUN_80161fe8(param_1,0x38,0x2d);
	sVar1 = (short)uGp00001be8;
	sVar3 = unaff_s1 * sVar1 + unaff_s0 * sVar1 + (short)uGp00001c10;
	*(short *)(iVar2 + 10) = sVar3;
	*(short *)(iVar2 + 0xe) = sVar3 + sVar1;
	sVar3 = (unaff_s0 * sVar1 - unaff_s1 * sVar1) * 2 + (short)uGp00001c0c;
	*(short *)(iVar2 + 8) = sVar3;
	*(short *)(iVar2 + 0xc) = sVar3 + sVar1 * -2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_801628a4(short sParm1,short sParm2);
 // line -1, offset 0x801628a4
// function 'FUN_801628a4' @0x801628A4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801628a4(short sParm1,short sParm2)

{
	short sVar1;
	int iVar2;
	short sVar3;
	
	iVar2 = FUN_80161fe8(0x3a,0x38,0x2d);
	sVar1 = (short)uGp00001be8;
	sVar3 = sParm2 * sVar1 + sParm1 * sVar1 + (short)uGp00001c10;
	*(short *)(iVar2 + 10) = sVar3;
	*(short *)(iVar2 + 0xe) = sVar3 + sVar1;
	sVar3 = (sParm1 * sVar1 - sParm2 * sVar1) * 2 + (short)uGp00001c0c;
	*(short *)(iVar2 + 8) = sVar3;
	*(short *)(iVar2 + 0xc) = sVar3 + sVar1 * 2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_8016293c(short sParm1,short sParm2);
 // line -1, offset 0x8016293c
// function 'FUN_8016293c' @0x8016293C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_8016293c(short sParm1,short sParm2)

{
	short sVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	
	sVar6 = (short)iGp00001be8;
	sVar3 = (short)(iGp00001be8 >> 1);
	sVar1 = ((sParm2 * sVar6 + sParm1 * sVar6) - sVar3) + (short)uGp00001c10;
	sVar7 = sVar1 + sVar6;
	sVar5 = (sVar1 + sVar6 * 2) - sVar3;
	sVar2 = (sParm1 * sVar6 - sParm2 * sVar6) * 2 + sVar3 * -2 + (short)uGp00001c0c;
	sVar8 = sVar2 + sVar6 * -2 + sVar3 * 2;
	sVar6 = sVar2 + sVar6 * 2 + sVar3 * -2;
	iVar4 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar4 + 8) = sVar2;
	*(short *)(iVar4 + 10) = sVar1 + sVar3;
	*(short *)(iVar4 + 0xc) = sVar8;
	*(short *)(iVar4 + 0xe) = sVar7;
	iVar4 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar4 + 8) = sVar8;
	*(short *)(iVar4 + 10) = sVar7;
	*(short *)(iVar4 + 0xc) = sVar2;
	*(short *)(iVar4 + 0xe) = sVar5;
	iVar4 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar4 + 8) = sVar2;
	*(short *)(iVar4 + 10) = sVar5;
	*(short *)(iVar4 + 0xc) = sVar6;
	*(short *)(iVar4 + 0xe) = sVar7;
	iVar4 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar4 + 8) = sVar6;
	*(short *)(iVar4 + 10) = sVar7;
	*(short *)(iVar4 + 0xc) = sVar2;
	*(short *)(iVar4 + 0xe) = sVar1 + sVar3;
	return;
}



// decompiled code
// original method signature: 
// void FUN_801629b0(void);
 // line -1, offset 0x801629b0
// function 'FUN_801629b0' @0x801629B0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_801629b0(void)

{
	short sVar1;
	int iVar2;
	short param_4;
	short in_t0;
	short unaff_s0;
	short unaff_s1;
	short unaff_s2;
	short sVar3;
	short unaff_s3;
	short sVar4;
	short sVar5;
	undefined2 unaff_s5;
	
	sVar4 = unaff_s1 + unaff_s3;
	param_4 = (unaff_s1 + unaff_s2) - param_4;
	sVar1 = unaff_s0 + (short)uGp00001c0c;
	sVar5 = (sVar1 - unaff_s2) + in_t0;
	sVar3 = (sVar1 + unaff_s2) - in_t0;
	iVar2 = FUN_80161fe8();
	*(short *)(iVar2 + 8) = sVar1;
	*(undefined2 *)(iVar2 + 10) = unaff_s5;
	*(short *)(iVar2 + 0xc) = sVar5;
	*(short *)(iVar2 + 0xe) = sVar4;
	iVar2 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar2 + 8) = sVar5;
	*(short *)(iVar2 + 10) = sVar4;
	*(short *)(iVar2 + 0xc) = sVar1;
	*(short *)(iVar2 + 0xe) = param_4;
	iVar2 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar2 + 8) = sVar1;
	*(short *)(iVar2 + 10) = param_4;
	*(short *)(iVar2 + 0xc) = sVar3;
	*(short *)(iVar2 + 0xe) = sVar4;
	iVar2 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar2 + 8) = sVar3;
	*(short *)(iVar2 + 10) = sVar4;
	*(short *)(iVar2 + 0xc) = sVar1;
	*(undefined2 *)(iVar2 + 0xe) = unaff_s5;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162a70(short sParm1,short sParm2);
 // line -1, offset 0x80162a70
// function 'FUN_80162a70' @0x80162A70 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162a70(short sParm1,short sParm2)

{
	short sVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	
	sVar1 = (sParm1 * 4 + sParm2 * -4) * 2 + (short)uGp00001c0c;
	sVar3 = sParm2 * 4 + sParm1 * 4 + (short)uGp00001c10;
	sVar2 = (short)(iGp00001be8 >> 2);
	sVar6 = sVar1 - (sVar2 + 8);
	sVar5 = sVar3 - (sVar2 + -4);
	sVar8 = sVar1 + sVar2 + -8;
	sVar7 = sVar3 + sVar2 + 4;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar1 - sVar2;
	*(short *)(iVar4 + 10) = sVar3 - sVar2;
	*(short *)(iVar4 + 0xc) = sVar6;
	*(short *)(iVar4 + 0xe) = sVar5;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar6;
	*(short *)(iVar4 + 10) = sVar5;
	*(short *)(iVar4 + 0xc) = sVar8;
	*(short *)(iVar4 + 0xe) = sVar7;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar8;
	*(short *)(iVar4 + 10) = sVar7;
	*(short *)(iVar4 + 0xc) = sVar1 + sVar2;
	*(short *)(iVar4 + 0xe) = sVar3 + sVar2;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar1 + sVar2;
	*(short *)(iVar4 + 10) = sVar3 + sVar2;
	*(short *)(iVar4 + 0xc) = sVar1 - sVar2;
	*(short *)(iVar4 + 0xe) = sVar3 - sVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162ba4(short sParm1,short sParm2);
 // line -1, offset 0x80162ba4
// function 'FUN_80162ba4' @0x80162BA4 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162ba4(short sParm1,short sParm2)

{
	short sVar1;
	short sVar2;
	short sVar3;
	int iVar4;
	short sVar5;
	short sVar6;
	short sVar7;
	short sVar8;
	
	sVar1 = (sParm1 * 4 + sParm2 * -4) * 2 + (short)uGp00001c0c;
	sVar3 = sParm2 * 4 + sParm1 * 4 + (short)uGp00001c10;
	sVar2 = (short)(iGp00001be8 >> 2);
	sVar6 = sVar1 + sVar2 + 8;
	sVar5 = sVar3 - (sVar2 + -4);
	sVar8 = sVar1 - (sVar2 + -8);
	sVar7 = sVar3 + sVar2 + 4;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar1 + sVar2;
	*(short *)(iVar4 + 10) = sVar3 - sVar2;
	*(short *)(iVar4 + 0xc) = sVar6;
	*(short *)(iVar4 + 0xe) = sVar5;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar6;
	*(short *)(iVar4 + 10) = sVar5;
	*(short *)(iVar4 + 0xc) = sVar8;
	*(short *)(iVar4 + 0xe) = sVar7;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar8;
	*(short *)(iVar4 + 10) = sVar7;
	*(short *)(iVar4 + 0xc) = sVar1 - sVar2;
	*(short *)(iVar4 + 0xe) = sVar3 + sVar2;
	iVar4 = FUN_80161fe8(0x3a,0x38,0x2d);
	*(short *)(iVar4 + 8) = sVar1 - sVar2;
	*(short *)(iVar4 + 10) = sVar3 + sVar2;
	*(short *)(iVar4 + 0xc) = sVar1 + sVar2;
	*(short *)(iVar4 + 0xe) = sVar3 - sVar2;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162cd8(short sParm1,short sParm2);
 // line -1, offset 0x80162cd8
// function 'FUN_80162cd8' @0x80162CD8 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162cd8(short sParm1,short sParm2)

{
	short sVar1;
	short sVar2;
	uint uVar3;
	short sVar4;
	int iVar5;
	int iVar6;
	short sVar7;
	short sVar8;
	short sVar9;
	
	uVar3 = uGp00001be8;
	sVar1 = (short)uGp00001be8;
	sVar7 = sParm2 * sVar1 + sParm1 * sVar1 + (short)uGp00001c10;
	sVar9 = sVar7 + sVar1;
	sVar4 = (sParm1 * sVar1 - sParm2 * sVar1) * 2 + (short)uGp00001c0c;
	sVar8 = sVar4 + sVar1 * -2;
	sVar7 = sVar7 + sVar1 * 2;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar5 + 8) = sVar8;
	*(short *)(iVar5 + 10) = sVar9;
	*(short *)(iVar5 + 0xc) = sVar4;
	*(short *)(iVar5 + 0xe) = sVar7;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	iVar6 = (int)uVar3 >> 1;
	sVar1 = (short)iVar6;
	*(short *)(iVar5 + 8) = sVar8 + sVar1;
	sVar2 = (short)((int)(iVar6 + (uVar3 >> 0x1f)) >> 1);
	*(short *)(iVar5 + 10) = sVar9 - sVar2;
	*(short *)(iVar5 + 0xc) = sVar4 + sVar1;
	*(short *)(iVar5 + 0xe) = sVar7 - sVar2;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar5 + 8) = sVar8 + sVar1 * 2;
	*(short *)(iVar5 + 10) = sVar9 - sVar1;
	*(short *)(iVar5 + 0xc) = sVar4 + sVar1 * 2;
	*(short *)(iVar5 + 0xe) = sVar7 - sVar1;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	uVar3 = iVar6 * 3;
	sVar1 = (short)((int)(uVar3 + (uVar3 >> 0x1f)) >> 1);
	*(short *)(iVar5 + 8) = sVar8 + (short)uVar3;
	*(short *)(iVar5 + 10) = sVar9 - sVar1;
	*(short *)(iVar5 + 0xc) = sVar4 + (short)uVar3;
	*(short *)(iVar5 + 0xe) = sVar7 - sVar1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162cdc(short param_1,short param_2);
 // line -1, offset 0x80162cdc
// function 'FUN_80162cdc' @0x80162CDC was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162cdc(short param_1,short param_2)

{
	short sVar1;
	short sVar2;
	uint uVar3;
	short sVar4;
	int iVar5;
	int iVar6;
	short sVar7;
	short sVar8;
	short sVar9;
	
	uVar3 = uGp00001be8;
	sVar1 = (short)uGp00001be8;
	sVar7 = param_2 * sVar1 + param_1 * sVar1 + (short)uGp00001c10;
	sVar9 = sVar7 + sVar1;
	sVar4 = (param_1 * sVar1 - param_2 * sVar1) * 2 + (short)uGp00001c0c;
	sVar8 = sVar4 + sVar1 * -2;
	sVar7 = sVar7 + sVar1 * 2;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar5 + 8) = sVar8;
	*(short *)(iVar5 + 10) = sVar9;
	*(short *)(iVar5 + 0xc) = sVar4;
	*(short *)(iVar5 + 0xe) = sVar7;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	iVar6 = (int)uVar3 >> 1;
	sVar1 = (short)iVar6;
	*(short *)(iVar5 + 8) = sVar8 + sVar1;
	sVar2 = (short)((int)(iVar6 + (uVar3 >> 0x1f)) >> 1);
	*(short *)(iVar5 + 10) = sVar9 - sVar2;
	*(short *)(iVar5 + 0xc) = sVar4 + sVar1;
	*(short *)(iVar5 + 0xe) = sVar7 - sVar2;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	*(short *)(iVar5 + 8) = sVar8 + sVar1 * 2;
	*(short *)(iVar5 + 10) = sVar9 - sVar1;
	*(short *)(iVar5 + 0xc) = sVar4 + sVar1 * 2;
	*(short *)(iVar5 + 0xe) = sVar7 - sVar1;
	iVar5 = FUN_80161fe8(0x5f,0x58,0x38);
	uVar3 = iVar6 * 3;
	sVar1 = (short)((int)(uVar3 + (uVar3 >> 0x1f)) >> 1);
	*(short *)(iVar5 + 8) = sVar8 + (short)uVar3;
	*(short *)(iVar5 + 10) = sVar9 - sVar1;
	*(short *)(iVar5 + 0xc) = sVar4 + (short)uVar3;
	*(short *)(iVar5 + 0xe) = sVar7 - sVar1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162dd0(void);
 // line -1, offset 0x80162dd0
// function 'FUN_80162dd0' @0x80162DD0 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162dd0(void)

{
	short sVar1;
	int iVar2;
	int in_v1;
	int unaff_s0;
	uint uVar3;
	short unaff_s1;
	int unaff_s2;
	short unaff_s3;
	short unaff_s4;
	short unaff_s5;
	
	*(short *)(in_v1 + 8) = unaff_s4 + (short)unaff_s0;
	*(short *)(in_v1 + 10) = unaff_s5 - (short)unaff_s2;
	*(short *)(in_v1 + 0xc) = unaff_s1 + (short)unaff_s0;
	*(short *)(in_v1 + 0xe) = unaff_s3 - (short)unaff_s2;
	iVar2 = FUN_80161fe8();
	uVar3 = unaff_s0 + unaff_s2;
	sVar1 = (short)((int)(uVar3 + (uVar3 >> 0x1f)) >> 1);
	*(short *)(iVar2 + 8) = unaff_s4 + (short)uVar3;
	*(short *)(iVar2 + 10) = unaff_s5 - sVar1;
	*(short *)(iVar2 + 0xc) = unaff_s1 + (short)uVar3;
	*(short *)(iVar2 + 0xe) = unaff_s3 - sVar1;
	return;
}



// decompiled code
// original method signature: 
// void FUN_80162e50(void);
 // line -1, offset 0x80162e50
// function 'FUN_80162e50' @0x80162E50 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80162e50(void)

{
	byte bVar1;
	byte bVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	int iVar7;
	char *pcVar8;
	int iVar9;
	int Y;
	int iVar10;
	int iVar11;
	uint uVar12;
	uint uVar13;
	ushort *puVar14;
	ushort *puVar15;
	int iVar16;
	ushort local_b8 [4];
	char acStack176 [64];
	uint local_70;
	int local_68;
	int local_60;
	uint local_58;
	uint local_50;
	uint local_48;
	uint local_40;
	uint local_38;
	byte *local_30;
	
	local_30 = (byte *)((int)local_b8 + 1);
	if ((PauseMode == '\0') && ((plr.plractive != '\0' || (PlayerStruct_800dbf20.plractive != '\0'))))
	{
		uGp00001bec = FUN_80163e18();
		iVar9 = (int)plr._px + -0x10;
		Y = (int)plr._py + -0x10;
		iVar10 = (int)PlayerStruct_800dbf20._px + -0x10;
		iVar11 = (int)PlayerStruct_800dbf20._py + -0x10;
		if (PlayerStruct_800dbf20.plractive == '\0') {
			iGp00001c0c = (iVar9 - Y) * 2;
			iGp00001c10 = iVar9 + Y;
			iGp00001c14 = 0;
			iGp00001c1c = 0;
		}
		else {
			if (plr.plractive == '\0') {
				iGp00001c0c = (iVar10 - iVar11) * 2;
				iGp00001c10 = iVar10 + iVar11;
				iGp00001c18 = 0;
				iGp00001c20 = 0;
			}
			else {
				iVar16 = iVar9 + iVar10 >> 1;
				iVar7 = Y + iVar11 >> 1;
				iGp00001c0c = (iVar16 - iVar7) * 2;
				iGp00001c10 = iVar16 + iVar7;
				iGp00001c14 = (iVar9 - iVar16) * 2;
				iGp00001c1c = (Y - iVar7) * 2;
				iGp00001c18 = (iVar10 - iVar16) * 2;
				iGp00001c20 = (iVar11 - iVar7) * 2;
			}
		}
		local_38 = 0;
		local_40 = 0;
		local_48 = 0;
		local_50 = 0;
		local_58 = 0;
		local_60 = 0;
		local_68 = 0;
		local_70 = 0;
		iGp00001c0c = (iGp00001c04 + 0xa0) - (iGp00001c0c * iGp00001be8 >> 1);
		iGp00001c10 = (iGp00001c08 + 100) - (iGp00001c10 * iGp00001be8 >> 1);
		uVar13 = 0;
		if (leveltype == '\x03') {
			do {
				uVar12 = 0;
				Y = 0;
				iVar9 = 0;
				iVar11 = 0;
				iVar10 = 0;
				iVar16 = 1;
				do {
					sVar5 = (short)iVar9;
					sVar6 = (short)iVar10;
					if (((int)(uint)(&automapview)[uVar12 + ((int)uVar13 >> 3) * 0x28] >> (uVar13 & 7) & 1U)
							== 0) {
						if (iVar9 != 0) {
							iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
							sVar4 = ((short)local_50 - (short)local_48) * 8 + (short)iGp00001c0c;
							sVar3 = ((short)local_48 + (short)local_50) * 4 + (short)iGp00001c10;
							iVar9 = 0;
							*(short *)(iVar7 + 8) = sVar4;
							*(short *)(iVar7 + 10) = sVar3;
							*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * -8;
							*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
						}
						if (iVar10 != 0) {
							iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
							sVar5 = ((short)local_70 - (short)local_68) * 8 + (short)iGp00001c0c;
							sVar4 = ((short)local_68 + (short)local_70) * 4 + (short)iGp00001c10;
							iVar10 = 0;
							*(short *)(iVar7 + 8) = sVar5;
							*(short *)(iVar7 + 10) = sVar4;
							*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * 8;
							*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)dungeon[uVar13 * 0x30 + uVar12]];
						bVar1 = *local_30;
						bVar2 = AmLTab[(uint)local_b8[0] & 0xf];
						if ((bVar1 & 0x80) != 0) {
							FUN_80162cd8(uVar13,uVar12);
						}
						if (((bVar1 & 0x15) == 0) && ((bVar2 & 2) != 0)) {
							if (iVar9 == 0) {
								local_50 = uVar13;
								local_48 = uVar12;
							}
							iVar9 = iVar9 + 1;
						}
						else {
							if (iVar9 != 0) {
								iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
								sVar4 = ((short)local_50 - (short)local_48) * 8 + (short)iGp00001c0c;
								sVar3 = ((short)local_48 + (short)local_50) * 4 + (short)iGp00001c10;
								iVar9 = 0;
								*(short *)(iVar7 + 8) = sVar4;
								*(short *)(iVar7 + 10) = sVar3;
								*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * -8;
								*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
							}
						}
						if ((bVar2 & 1) != 0) {
							FUN_8016293c(uVar13,uVar12);
						}
						if (((bVar1 & 0x15) == 0) && ((bVar2 & 4) != 0)) {
							if (iVar10 == 0) {
								local_70 = uVar13;
								local_68 = iVar16;
							}
							iVar10 = iVar10 + 1;
						}
						else {
							if (iVar10 != 0) {
								iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
								sVar5 = ((short)local_70 - (short)local_68) * 8 + (short)iGp00001c0c;
								sVar4 = ((short)local_68 + (short)local_70) * 4 + (short)iGp00001c10;
								iVar10 = 0;
								*(short *)(iVar7 + 8) = sVar5;
								*(short *)(iVar7 + 10) = sVar4;
								*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * 8;
								*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 1) == 0) {
									if ((bVar1 & 0x10) == 0) {
										if ((bVar1 & 4) != 0) {
											FUN_80162ba4(uVar13,iVar16);
										}
									}
									else {
										FUN_801628a4(uVar13,iVar16);
									}
								}
								else {
									FUN_8016264c(uVar13,iVar16);
								}
							}
						}
					}
					sVar5 = (short)Y;
					sVar6 = (short)iVar11;
					if (((int)(uint)(&automapview)[uVar13 + ((int)uVar12 >> 3) * 0x28] >> (uVar12 & 7) & 1U)
							== 0) {
						if (Y != 0) {
							iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
							sVar4 = ((short)local_40 - (short)local_38) * 8 + (short)iGp00001c0c;
							sVar3 = ((short)local_38 + (short)local_40) * 4 + (short)iGp00001c10;
							Y = 0;
							*(short *)(iVar7 + 8) = sVar4;
							*(short *)(iVar7 + 10) = sVar3;
							*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * 8;
							*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
						}
						if (iVar11 != 0) {
							iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
							sVar5 = ((short)local_60 - (short)local_58) * 8 + (short)iGp00001c0c;
							sVar4 = ((short)local_58 + (short)local_60) * 4 + (short)iGp00001c10;
							iVar11 = 0;
							*(short *)(iVar7 + 8) = sVar5;
							*(short *)(iVar7 + 10) = sVar4;
							*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * -8;
							*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)dungeon[uVar12 * 0x30 + uVar13]];
						bVar1 = *local_30;
						bVar2 = AmRTab[(uint)local_b8[0] & 0xf];
						if (((bVar1 & 0x2a) == 0) && ((bVar2 & 8) != 0)) {
							if (Y == 0) {
								local_40 = uVar12;
								local_38 = uVar13;
							}
							Y = Y + 1;
						}
						else {
							if (Y != 0) {
								iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
								sVar4 = ((short)local_40 - (short)local_38) * 8 + (short)iGp00001c0c;
								sVar3 = ((short)local_38 + (short)local_40) * 4 + (short)iGp00001c10;
								Y = 0;
								*(short *)(iVar7 + 8) = sVar4;
								*(short *)(iVar7 + 10) = sVar3;
								*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * 8;
								*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
							}
						}
						if (((bVar1 & 0x2a) == 0) && ((bVar2 & 0x10) != 0)) {
							if (iVar11 == 0) {
								local_60 = iVar16;
								local_58 = uVar13;
							}
							iVar11 = iVar11 + 1;
						}
						else {
							if (iVar11 != 0) {
								iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
								sVar5 = ((short)local_60 - (short)local_58) * 8 + (short)iGp00001c0c;
								sVar4 = ((short)local_58 + (short)local_60) * 4 + (short)iGp00001c10;
								iVar11 = 0;
								*(short *)(iVar7 + 8) = sVar5;
								*(short *)(iVar7 + 10) = sVar4;
								*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * -8;
								*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 2) == 0) {
									if ((bVar1 & 0x20) == 0) {
										if ((bVar1 & 8) != 0) {
											FUN_80162a70(iVar16,uVar13);
										}
									}
									else {
										FUN_8016280c(iVar16,uVar13);
									}
								}
								else {
									FUN_80162490(iVar16,uVar13);
								}
							}
						}
					}
					uVar12 = uVar12 + 1;
					iVar16 = iVar16 + 1;
				} while ((int)uVar12 < 0x28);
				if (iVar9 != 0) {
					iVar16 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)local_50 - (short)local_48) * 8 + (short)iGp00001c0c;
					sVar6 = ((short)local_48 + (short)local_50) * 4 + (short)iGp00001c10;
					*(short *)(iVar16 + 0xc) = sVar5 + (short)iVar9 * -8;
					*(short *)(iVar16 + 8) = sVar5;
					*(short *)(iVar16 + 10) = sVar6;
					*(short *)(iVar16 + 0xe) = sVar6 + (short)iVar9 * 4;
				}
				if (iVar10 != 0) {
					iVar9 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)local_70 - (short)local_68) * 8 + (short)iGp00001c0c;
					sVar6 = ((short)local_68 + (short)local_70) * 4 + (short)iGp00001c10;
					*(short *)(iVar9 + 0xc) = sVar5 + (short)iVar10 * 8;
					*(short *)(iVar9 + 8) = sVar5;
					*(short *)(iVar9 + 10) = sVar6;
					*(short *)(iVar9 + 0xe) = sVar6 + (short)iVar10 * 4;
				}
				if (Y != 0) {
					iVar9 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)local_40 - (short)local_38) * 8 + (short)iGp00001c0c;
					sVar6 = ((short)local_38 + (short)local_40) * 4 + (short)iGp00001c10;
					*(short *)(iVar9 + 0xc) = sVar5 + (short)Y * 8;
					*(short *)(iVar9 + 8) = sVar5;
					*(short *)(iVar9 + 10) = sVar6;
					*(short *)(iVar9 + 0xe) = sVar6 + (short)Y * 4;
				}
				if (iVar11 != 0) {
					iVar9 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)local_60 - (short)local_58) * 8 + (short)iGp00001c0c;
					sVar6 = ((short)local_58 + (short)local_60) * 4 + (short)iGp00001c10;
					*(short *)(iVar9 + 0xc) = sVar5 + (short)iVar11 * -8;
					*(short *)(iVar9 + 8) = sVar5;
					*(short *)(iVar9 + 10) = sVar6;
					*(short *)(iVar9 + 0xe) = sVar6 + (short)iVar11 * 4;
				}
				uVar13 = uVar13 + 1;
			} while ((int)uVar13 < 0x28);
		}
		else {
			puVar15 = dungeon;
			do {
				uVar12 = 0;
				Y = 0;
				iVar9 = 0;
				puVar14 = dungeon;
				do {
					sVar5 = (short)iVar9;
					if (((int)(uint)(&automapview)[uVar12 + ((int)uVar13 >> 3) * 0x28] >> (uVar13 & 7) & 1U)
							== 0) {
						if (iVar9 != 0) {
							iVar10 = FUN_80161fe8(0x5f,0x58,0x38);
							sVar6 = ((short)local_50 - (short)local_48) * 8 + (short)iGp00001c0c;
							sVar4 = ((short)local_48 + (short)local_50) * 4 + (short)iGp00001c10;
							iVar9 = 0;
							*(short *)(iVar10 + 8) = sVar6;
							*(short *)(iVar10 + 10) = sVar4;
							*(short *)(iVar10 + 0xc) = sVar6 + sVar5 * -8;
							*(short *)(iVar10 + 0xe) = sVar4 + sVar5 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)puVar15[uVar12]];
						bVar1 = *local_30;
						bVar2 = AmLTab[(uint)local_b8[0] & 0xf];
						if ((bVar1 & 0x80) != 0) {
							FUN_80162cd8(uVar13,uVar12);
						}
						if (((bVar1 & 0x15) == 0) && ((bVar2 & 2) != 0)) {
							if (iVar9 == 0) {
								local_50 = uVar13;
								local_48 = uVar12;
							}
							iVar9 = iVar9 + 1;
						}
						else {
							if (iVar9 != 0) {
								iVar10 = FUN_80161fe8(0x5f,0x58,0x38);
								sVar6 = ((short)local_50 - (short)local_48) * 8 + (short)iGp00001c0c;
								sVar4 = ((short)local_48 + (short)local_50) * 4 + (short)iGp00001c10;
								iVar9 = 0;
								*(short *)(iVar10 + 8) = sVar6;
								*(short *)(iVar10 + 10) = sVar4;
								*(short *)(iVar10 + 0xc) = sVar6 + sVar5 * -8;
								*(short *)(iVar10 + 0xe) = sVar4 + sVar5 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 1) == 0) {
									if ((bVar1 & 0x10) == 0) {
										if ((bVar1 & 4) != 0) {
											FUN_80162a70(uVar13,uVar12);
										}
									}
									else {
										FUN_8016280c(uVar13,uVar12);
									}
								}
								else {
									FUN_80162490(uVar13,uVar12);
								}
							}
							if ((bVar2 & 1) != 0) {
								FUN_8016293c(uVar13,uVar12);
							}
						}
					}
					sVar5 = (short)Y;
					if (((int)(uint)(&automapview)[uVar13 + ((int)uVar12 >> 3) * 0x28] >> (uVar12 & 7) & 1U)
							== 0) {
						if (Y != 0) {
							iVar10 = FUN_80161fe8(0x5f,0x58,0x38);
							sVar6 = ((short)local_40 - (short)local_38) * 8 + (short)iGp00001c0c;
							sVar4 = ((short)local_38 + (short)local_40) * 4 + (short)iGp00001c10;
							Y = 0;
							*(short *)(iVar10 + 8) = sVar6;
							*(short *)(iVar10 + 10) = sVar4;
							*(short *)(iVar10 + 0xc) = sVar6 + sVar5 * 8;
							*(short *)(iVar10 + 0xe) = sVar4 + sVar5 * 4;
						}
					}
					else {
						local_b8[0] = automaptype[(uint)puVar14[uVar13]];
						bVar1 = *local_30;
						if (((bVar1 & 0x2a) == 0) && ((AmRTab[(uint)local_b8[0] & 0xf] & 8) != 0)) {
							if (Y == 0) {
								local_40 = uVar12;
								local_38 = uVar13;
							}
							Y = Y + 1;
						}
						else {
							if (Y != 0) {
								iVar10 = FUN_80161fe8(0x5f,0x58,0x38);
								sVar6 = ((short)local_40 - (short)local_38) * 8 + (short)iGp00001c0c;
								sVar4 = ((short)local_38 + (short)local_40) * 4 + (short)iGp00001c10;
								Y = 0;
								*(short *)(iVar10 + 8) = sVar6;
								*(short *)(iVar10 + 10) = sVar4;
								*(short *)(iVar10 + 0xc) = sVar6 + sVar5 * 8;
								*(short *)(iVar10 + 0xe) = sVar4 + sVar5 * 4;
							}
							if (bVar1 != 0) {
								if ((bVar1 & 2) == 0) {
									if ((bVar1 & 0x20) == 0) {
										if ((bVar1 & 8) != 0) {
											FUN_80162ba4(uVar12,uVar13);
										}
									}
									else {
										FUN_801628a4(uVar12,uVar13);
									}
								}
								else {
									FUN_8016264c(uVar12,uVar13);
								}
							}
						}
					}
					uVar12 = uVar12 + 1;
					puVar14 = puVar14 + 0x30;
				} while ((int)uVar12 < 0x28);
				if (iVar9 != 0) {
					iVar10 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)local_50 - (short)local_48) * 8 + (short)iGp00001c0c;
					sVar6 = ((short)local_48 + (short)local_50) * 4 + (short)iGp00001c10;
					*(short *)(iVar10 + 0xc) = sVar5 + (short)iVar9 * -8;
					*(short *)(iVar10 + 8) = sVar5;
					*(short *)(iVar10 + 10) = sVar6;
					*(short *)(iVar10 + 0xe) = sVar6 + (short)iVar9 * 4;
				}
				if (Y != 0) {
					iVar9 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)local_40 - (short)local_38) * 8 + (short)iGp00001c0c;
					sVar6 = ((short)local_38 + (short)local_40) * 4 + (short)iGp00001c10;
					*(short *)(iVar9 + 0xc) = sVar5 + (short)Y * 8;
					*(short *)(iVar9 + 8) = sVar5;
					*(short *)(iVar9 + 10) = sVar6;
					*(short *)(iVar9 + 0xe) = sVar6 + (short)Y * 4;
				}
				uVar13 = uVar13 + 1;
				puVar15 = puVar15 + 0x30;
			} while ((int)uVar13 < 0x28);
		}
		FUN_80162124();
		if (setlevel == '\0') {
			pcVar8 = GetStr__Fi(0x243);
			sprintf(acStack176,"%s %d",pcVar8,(uint)currlevel);
		}
		else {
			pcVar8 = GetStr__Fi(SetLevelName[(uint)setlvlnum]);
			sprintf(acStack176,&DAT_8011c378,pcVar8);
		}
		iVar9 = GetStrWidth__5CFontPc(&MediumFont,acStack176);
		if (gbActivePlayers < 2) {
			iVar9 = (0x100U - iVar9) + (0x100U - iVar9 >> 0x1f);
			Y = 0x20;
		}
		else {
			iVar9 = (0x100U - iVar9) + (0x100U - iVar9 >> 0x1f);
			Y = 0xc0;
		}
		Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
							(&MediumFont,(iVar9 >> 1) + 0x20,Y,acStack176,JustLeft,(RECT *)0x0,(uint)GOLDR,
							 (uint)GOLDG,(uint)GOLDB);
	}
	return;
}



// decompiled code
// original method signature: 
// void FUN_80163054(void);
 // line -1, offset 0x80163054
// function 'FUN_80163054' @0x80163054 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80163054(void)

{
	byte bVar1;
	byte bVar2;
	short sVar3;
	short sVar4;
	short sVar5;
	short sVar6;
	int iVar7;
	char *pcVar8;
	int Y;
	int unaff_s1;
	int unaff_s3;
	uint unaff_s4;
	uint unaff_s5;
	int unaff_s6;
	int unaff_s7;
	int unaff_s8;
	uint param_12;
	int param_13;
	int param_14;
	uint param_15;
	uint param_16;
	uint param_17;
	uint param_18;
	uint param_19;
	byte *param_20;
	
	while( true ) {
		do {
			sVar5 = (short)unaff_s1;
			sVar6 = (short)unaff_s6;
			if (((int)(uint)(&automapview)[unaff_s4 + ((int)unaff_s5 >> 3) * 0x28] >> (unaff_s5 & 7) & 1U)
					== 0) {
				if (unaff_s1 != 0) {
					iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar4 = ((short)param_16 - (short)param_17) * 8 + (short)uGp00001c0c;
					sVar3 = ((short)param_17 + (short)param_16) * 4 + (short)uGp00001c10;
					unaff_s1 = 0;
					*(short *)(iVar7 + 8) = sVar4;
					*(short *)(iVar7 + 10) = sVar3;
					*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * -8;
					*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
				}
				if (unaff_s6 != 0) {
					iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)param_12 - (short)param_13) * 8 + (short)uGp00001c0c;
					sVar4 = ((short)param_13 + (short)param_12) * 4 + (short)uGp00001c10;
					unaff_s6 = 0;
					*(short *)(iVar7 + 8) = sVar5;
					*(short *)(iVar7 + 10) = sVar4;
					*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * 8;
					*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
				}
			}
			else {
				bVar1 = *param_20;
				bVar2 = AmLTab[(uint)automaptype[(uint)dungeon[unaff_s5 * 0x30 + unaff_s4]] & 0xf];
				if ((bVar1 & 0x80) != 0) {
					FUN_80162cd8(unaff_s5,unaff_s4);
				}
				if (((bVar1 & 0x15) == 0) && ((bVar2 & 2) != 0)) {
					if (unaff_s1 == 0) {
						param_16 = unaff_s5;
						param_17 = unaff_s4;
					}
					unaff_s1 = unaff_s1 + 1;
				}
				else {
					if (unaff_s1 != 0) {
						iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
						sVar4 = ((short)param_16 - (short)param_17) * 8 + (short)uGp00001c0c;
						sVar3 = ((short)param_17 + (short)param_16) * 4 + (short)uGp00001c10;
						unaff_s1 = 0;
						*(short *)(iVar7 + 8) = sVar4;
						*(short *)(iVar7 + 10) = sVar3;
						*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * -8;
						*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
					}
				}
				if ((bVar2 & 1) != 0) {
					FUN_8016293c(unaff_s5,unaff_s4);
				}
				if (((bVar1 & 0x15) == 0) && ((bVar2 & 4) != 0)) {
					if (unaff_s6 == 0) {
						param_12 = unaff_s5;
						param_13 = unaff_s8;
					}
					unaff_s6 = unaff_s6 + 1;
				}
				else {
					if (unaff_s6 != 0) {
						iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
						sVar5 = ((short)param_12 - (short)param_13) * 8 + (short)uGp00001c0c;
						sVar4 = ((short)param_13 + (short)param_12) * 4 + (short)uGp00001c10;
						unaff_s6 = 0;
						*(short *)(iVar7 + 8) = sVar5;
						*(short *)(iVar7 + 10) = sVar4;
						*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * 8;
						*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
					}
					if (bVar1 != 0) {
						if ((bVar1 & 1) == 0) {
							if ((bVar1 & 0x10) == 0) {
								if ((bVar1 & 4) != 0) {
									FUN_80162ba4(unaff_s5,unaff_s8);
								}
							}
							else {
								FUN_801628a4(unaff_s5,unaff_s8);
							}
						}
						else {
							FUN_8016264c(unaff_s5,unaff_s8);
						}
					}
				}
			}
			sVar5 = (short)unaff_s3;
			sVar6 = (short)unaff_s7;
			if (((int)(uint)(&automapview)[unaff_s5 + ((int)unaff_s4 >> 3) * 0x28] >> (unaff_s4 & 7) & 1U)
					== 0) {
				if (unaff_s3 != 0) {
					iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar4 = ((short)param_18 - (short)param_19) * 8 + (short)uGp00001c0c;
					sVar3 = ((short)param_19 + (short)param_18) * 4 + (short)uGp00001c10;
					unaff_s3 = 0;
					*(short *)(iVar7 + 8) = sVar4;
					*(short *)(iVar7 + 10) = sVar3;
					*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * 8;
					*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
				}
				if (unaff_s7 != 0) {
					iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
					sVar5 = ((short)param_14 - (short)param_15) * 8 + (short)uGp00001c0c;
					sVar4 = ((short)param_15 + (short)param_14) * 4 + (short)uGp00001c10;
					unaff_s7 = 0;
					*(short *)(iVar7 + 8) = sVar5;
					*(short *)(iVar7 + 10) = sVar4;
					*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * -8;
					*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
				}
			}
			else {
				bVar1 = *param_20;
				bVar2 = AmRTab[(uint)automaptype[(uint)dungeon[unaff_s4 * 0x30 + unaff_s5]] & 0xf];
				if (((bVar1 & 0x2a) == 0) && ((bVar2 & 8) != 0)) {
					if (unaff_s3 == 0) {
						param_18 = unaff_s4;
						param_19 = unaff_s5;
					}
					unaff_s3 = unaff_s3 + 1;
				}
				else {
					if (unaff_s3 != 0) {
						iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
						sVar4 = ((short)param_18 - (short)param_19) * 8 + (short)uGp00001c0c;
						sVar3 = ((short)param_19 + (short)param_18) * 4 + (short)uGp00001c10;
						unaff_s3 = 0;
						*(short *)(iVar7 + 8) = sVar4;
						*(short *)(iVar7 + 10) = sVar3;
						*(short *)(iVar7 + 0xc) = sVar4 + sVar5 * 8;
						*(short *)(iVar7 + 0xe) = sVar3 + sVar5 * 4;
					}
				}
				if (((bVar1 & 0x2a) == 0) && ((bVar2 & 0x10) != 0)) {
					if (unaff_s7 == 0) {
						param_14 = unaff_s8;
						param_15 = unaff_s5;
					}
					unaff_s7 = unaff_s7 + 1;
				}
				else {
					if (unaff_s7 != 0) {
						iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
						sVar5 = ((short)param_14 - (short)param_15) * 8 + (short)uGp00001c0c;
						sVar4 = ((short)param_15 + (short)param_14) * 4 + (short)uGp00001c10;
						unaff_s7 = 0;
						*(short *)(iVar7 + 8) = sVar5;
						*(short *)(iVar7 + 10) = sVar4;
						*(short *)(iVar7 + 0xc) = sVar5 + sVar6 * -8;
						*(short *)(iVar7 + 0xe) = sVar4 + sVar6 * 4;
					}
					if (bVar1 != 0) {
						if ((bVar1 & 2) == 0) {
							if ((bVar1 & 0x20) == 0) {
								if ((bVar1 & 8) != 0) {
									FUN_80162a70(unaff_s8,unaff_s5);
								}
							}
							else {
								FUN_8016280c(unaff_s8,unaff_s5);
							}
						}
						else {
							FUN_80162490(unaff_s8,unaff_s5);
						}
					}
				}
			}
			unaff_s4 = unaff_s4 + 1;
			unaff_s8 = unaff_s8 + 1;
		} while ((int)unaff_s4 < 0x28);
		if (unaff_s1 != 0) {
			iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
			sVar5 = ((short)param_16 - (short)param_17) * 8 + (short)uGp00001c0c;
			sVar6 = ((short)param_17 + (short)param_16) * 4 + (short)uGp00001c10;
			*(short *)(iVar7 + 0xc) = sVar5 + (short)unaff_s1 * -8;
			*(short *)(iVar7 + 8) = sVar5;
			*(short *)(iVar7 + 10) = sVar6;
			*(short *)(iVar7 + 0xe) = sVar6 + (short)unaff_s1 * 4;
		}
		if (unaff_s6 != 0) {
			iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
			sVar5 = ((short)param_12 - (short)param_13) * 8 + (short)uGp00001c0c;
			sVar6 = ((short)param_13 + (short)param_12) * 4 + (short)uGp00001c10;
			*(short *)(iVar7 + 0xc) = sVar5 + (short)unaff_s6 * 8;
			*(short *)(iVar7 + 8) = sVar5;
			*(short *)(iVar7 + 10) = sVar6;
			*(short *)(iVar7 + 0xe) = sVar6 + (short)unaff_s6 * 4;
		}
		if (unaff_s3 != 0) {
			iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
			sVar5 = ((short)param_18 - (short)param_19) * 8 + (short)uGp00001c0c;
			sVar6 = ((short)param_19 + (short)param_18) * 4 + (short)uGp00001c10;
			*(short *)(iVar7 + 0xc) = sVar5 + (short)unaff_s3 * 8;
			*(short *)(iVar7 + 8) = sVar5;
			*(short *)(iVar7 + 10) = sVar6;
			*(short *)(iVar7 + 0xe) = sVar6 + (short)unaff_s3 * 4;
		}
		if (unaff_s7 != 0) {
			iVar7 = FUN_80161fe8(0x5f,0x58,0x38);
			sVar5 = ((short)param_14 - (short)param_15) * 8 + (short)uGp00001c0c;
			sVar6 = ((short)param_15 + (short)param_14) * 4 + (short)uGp00001c10;
			*(short *)(iVar7 + 0xc) = sVar5 + (short)unaff_s7 * -8;
			*(short *)(iVar7 + 8) = sVar5;
			*(short *)(iVar7 + 10) = sVar6;
			*(short *)(iVar7 + 0xe) = sVar6 + (short)unaff_s7 * 4;
		}
		unaff_s5 = unaff_s5 + 1;
		if (0x27 < (int)unaff_s5) break;
		unaff_s4 = 0;
		unaff_s3 = 0;
		unaff_s1 = 0;
		unaff_s7 = 0;
		unaff_s6 = 0;
		unaff_s8 = 1;
	}
	FUN_80162124();
	if (setlevel == '\0') {
		pcVar8 = GetStr__Fi(0x243);
		sprintf(&stack0x00000030,"%s %d",pcVar8,(uint)currlevel);
	}
	else {
		pcVar8 = GetStr__Fi(SetLevelName[(uint)setlvlnum]);
		sprintf(&stack0x00000030,&DAT_8011c378,pcVar8);
	}
	iVar7 = GetStrWidth__5CFontPc(&MediumFont,&stack0x00000030);
	if (gbActivePlayers < 2) {
		iVar7 = (0x100U - iVar7) + (0x100U - iVar7 >> 0x1f);
		Y = 0x20;
	}
	else {
		iVar7 = (0x100U - iVar7) + (0x100U - iVar7 >> 0x1f);
		Y = 0xc0;
	}
	Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc
						(&MediumFont,(iVar7 >> 1) + 0x20,Y,&stack0x00000030,JustLeft,(RECT *)0x0,(uint)GOLDR,
						 (uint)GOLDG,(uint)GOLDB);
	return;
}



// decompiled code
// original method signature: 
// void FUN_80163d9c(POLY_FT4 **ppPParm1);
 // line -1, offset 0x80163d9c
// function 'FUN_80163d9c' @0x80163D9C was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
void FUN_80163d9c(POLY_FT4 **ppPParm1)

{
	if (AddrToAvoid <= ThisPrimAddr + 4) {
		DBG_Error((char *)0x0,"psxsrc/primpool.h",0x44);
	}
	*ppPParm1 = ThisPrimAddr;
	ThisPrimAddr = (POLY_FT4 *)&ThisPrimAddr->x1;
	return;
}



// decompiled code
// original method signature: 
// undefined4 FUN_80163e18(void);
 // line -1, offset 0x80163e18
// function 'FUN_80163e18' @0x80163E18 was found in the decompiled code exported from Ghidra, but not the original debug symbol data.
undefined4 FUN_80163e18(void)

{
	return 0x1e8;
}



